#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpContinu.h"

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities  (binary VA: 0x1740630)
// Original: hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent  (binary VA: 0x1740640)
// Original: hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::warpTime  (binary VA: 0x1740650)
// Original: hkpContinuousSimulation::warpTime
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::warpTime(hkpContinuousSimulation::Self *self, float a2)
{
  int v2;
  int64_t i; // rax
  float *v4;

  v2 = *(uint32_t *)(*((uint32_t *)self + 3) + 8);
  for ( i = 0; *(uint32_t *)(v2 + 52) > (int)i; *v4 = *v4 + a2 )
  {
    LODWORD(i) = i + 1;
    v4 = (float *)(*(uint32_t *)(v2 + 48) + HIDWORD(i));
    HIDWORD(i) += 112;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::Destroy  (binary VA: 0x1740710)
// Original: hkpContinuousSimulation::~hkpContinuousSimulation
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::Destroy(hkpContinuousSimulation::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F308);
  v1 = *((uint32_t *)self + 18);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 18));
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkpContinuousSimulation::Self *)((char *)self + 60),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v2 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      112 * (v2 & 0x3FFFFFFF));
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  hkpSimulation::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::Destroy_ea17407b0  (binary VA: 0x17407b0)
// Original: hkpContinuousSimulation::~hkpContinuousSimulation
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::Destroy_ea17407b0(hkpContinuousSimulation::Self *self)
{
  int v1;
  int v2;

  hkpContinuousSimulation::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::removeCollisionInformationForAgent  (binary VA: 0x1740810)
// Original: hkpContinuousSimulation::removeCollisionInformationForAgent
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::removeCollisionInformationForAgent(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int *v7;
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

  result = *(uint32_t *)(a1 + 52) - 1;
  if ( result >= 0 )
  {
    v3 = 112 * result;
    do
    {
      v4 = *(uint32_t *)(a1 + 48);
      v5 = (uint32_t *)(v3 + v4);
      if ( *(uint32_t *)(v3 + v4 + 20) == *(uint32_t *)(a2 + 8) )
      {
        v6 = *(uint32_t *)(a1 + 52) - 1;
        *(uint32_t *)(a1 + 52) = v6;
        if ( result != v6 )
        {
          v7 = (int *)(112 * v6 + v4);
          v8 = *v7;
          v5[1] = v7[1];
          *v5 = v8;
          v9 = v7[2];
          v5[3] = v7[3];
          v5[2] = v9;
          v10 = v7[4];
          v5[5] = v7[5];
          v5[4] = v10;
          v11 = v7[6];
          v5[7] = v7[7];
          v5[6] = v11;
          v12 = v7[8];
          v5[9] = v7[9];
          v5[8] = v12;
          v13 = v7[10];
          v5[11] = v7[11];
          v5[10] = v13;
          v14 = v7[12];
          v5[13] = v7[13];
          v5[12] = v14;
          v15 = v7[14];
          v5[15] = v7[15];
          v5[14] = v15;
          v16 = v7[17];
          v5[16] = v7[16];
          v5[17] = v16;
          v17 = v7[18];
          v5[19] = v7[19];
          v5[18] = v17;
          v18 = v7[20];
          v5[21] = v7[21];
          v5[20] = v18;
          v19 = v7[22];
          v5[23] = v7[23];
          v5[22] = v19;
          v20 = v7[25];
          v5[24] = v7[24];
          v5[25] = v20;
          v21 = v7[26];
          v5[27] = v7[27];
          v5[26] = v21;
        }
      }
      --result;
      v3 -= 112;
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly  (binary VA: 0x1740930)
// Original: hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly(int a1, int *a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  uint32_t *v17;
  uint64_t v18; // rax
  int v19;
  unsigned int v20;
  int v21;
  unsigned int *v22;
  int v23;
  int32_t v24; // kr00_4
  int32_t v25;
  int32_t v26; // ett
  int v27;
  int i;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_CollisionEntriesDeterministicUnchecked;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[3];
  typedef uint32_t _g4_t_v41[4];
  typedef uint32_t _g4_t_v42[3107];
  enum : size_t {
    _g4_s0 = 12608u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v30)) > _g4_s1 ? (32u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v31)) > _g4_s2 ? (36u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v32)) > _g4_s3 ? (44u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v33)) > _g4_s4 ? (48u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v34)) > _g4_s5 ? (52u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v35)) > _g4_s6 ? (52u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_CollisionEntriesDeterministicUnchecked)) > _g4_s7 ? (56u + sizeof(_g4_t_CollisionEntriesDeterministicUnchecked)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v37)) > _g4_s8 ? (64u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v38)) > _g4_s9 ? (68u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v39)) > _g4_s10 ? (72u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v40)) > _g4_s11 ? (84u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v41)) > _g4_s12 ? (96u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v42)) > _g4_s13 ? (112u + sizeof(_g4_t_v42)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_CollisionEntriesDeterministicUnchecked &CollisionEntriesDeterministicUnchecked = *reinterpret_cast<_g4_t_CollisionEntriesDeterministicUnchecked *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v30 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtRecollide PSI");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v40[0] = 0;
  v40[1] = 0;
  v40[2] = -1;
  v37 = 0;
  v38 = 0;
  v39 = 0x80000000;
  ++*(uint32_t *)(*(uint32_t *)(a1 + 12) + 140);
  v7 = *((uint32_t *)a3 + 2);
  v8 = *(uint32_t **)a3;
  if ( v7 >= 0 )
  {
    v9 = 0;
    if ( *v8 == -1 )
    {
      while ( v7 >= ++v9 )
      {
        if ( v8[2 * v9] != -1 )
        {
          i = v9;
          goto LABEL_27;
        }
      }
    }
    else
    {
      for ( i = 0; ; i = v9 )
      {
LABEL_27:
        v19 = 0;
        v33 = v8[2 * i + 1];
        CollisionEntriesDeterministicUnchecked = hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked((hkpLinkedCollidable::Self *)(v33 + 16));
        v35 = *((uint32_t *)CollisionEntriesDeterministicUnchecked + 1);
        if ( v35 > 0 )
        {
          v31 = v9;
          do
          {
            v20 = *(uint32_t *)(*(uint32_t *)CollisionEntriesDeterministicUnchecked + 8 * v19);
            if ( hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                   (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v40,
                   v20,
                   0) == 0
              && (*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 120) + (*(char *)(v20 + 12) << 6) + 7904) == 0
               || *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 120) + (*(char *)(v20 + 12) << 6) + 7908) != 0
               && *(float *)(v33 + 332) == 0.0) )
            {
              v32 = *(uint32_t *)(v33 + 200);
              if ( *(uint8_t *)(v33 + 232) == 5 )
                v32 = *(int *)((char *)&dword_C8
                             + (v33
                              ^ (*(uint32_t *)(v20 + 20) + *(char *)(*(uint32_t *)(v20 + 20) + 16))
                              ^ (*(uint32_t *)(v20 + 16) + *(char *)(*(uint32_t *)(v20 + 16) + 16))));
              hkMapBase_unsigned_long_unsigned_l_393416::insert(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v40,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                v20,
                1u);
              v21 = v38;
              if ( v38 == (v39 & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v37,
                  8,
                  v29);
                v21 = v38;
              }
              v38 = v21 + 1;
              v22 = (unsigned int *)(v37 + 8 * v21);
              *v22 = v20;
              v22[1] = v32;
            }
            ++v19;
          }
          while ( v19 != v35 );
          v9 = v31;
        }
        if ( *(uint16_t *)(v33 + 6) != 0 )
        {
          do
          {
            v24 = *(uint32_t *)(v33 + 4);
            HIWORD(v23) = HIWORD(v24);
            LOWORD(v23) = 0;
            v25 = v23 | (uint16_t)(v24 - 1);
            v26 = v24;
          }
          while ( v26 != __sync_val_compare_and_swap((volatile int32_t *)(v33 + 4), v26, v25) );
          if ( (uint16_t)v25 == 0 )
            G4_VCALL<void>(v33, 16);
        }
        ++v9;
        v27 = *((uint32_t *)a3 + 2);
        v8 = *(uint32_t **)a3;
        if ( v27 < v9 )
          break;
        while ( v8[2 * v9] == -1 )
        {
          if ( v27 < ++v9 )
            goto LABEL_8;
        }
      }
    }
  }
LABEL_8:
  hkMapBase_unsigned_long_unsigned_l_393416::clear(a3);
  if ( v38 > 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = *a2;
      v34 = v10;
      v12 = (int *)(v37 + 8 * v10);
      v13 = *v12;
      v41[1] = v12[1];
      v41[0] = (uint32_t)(uintptr_t)(v42);
      v42[3080] = 2139095022;
      a2[24] = v11 + 7952;
      v42[3088] = 0;
      v42[3089] = 0;
      v42[3100] = 0;
      a2[6] = *(uint32_t *)(v11 + (*(char *)(v13 + 12) << 6) + 7904);
      v29 = *(uint32_t *)(v13 + 8);
      hkAgentNnMachine_ProcessAgent((uint8_t *)v13, (int)(uintptr_t)(a2), (int)(uintptr_t)(v41));
      if ( hkOutOfMemoryState[0] == 1 )
        break;
      if ( (uint32_t *)v41[0] == v42 )
      {
        v10 = v34 + 1;
        if ( v38 <= v34 + 1 )
          break;
      }
      else
      {
        (*(void (**)(uint32_t, uint32_t, uint32_t, int *, uint32_t *))(**(uint32_t **)(v13 + 8) + 32))(
          *(uint32_t *)(v13 + 8),
          *(uint32_t *)(v13 + 16),
          *(uint32_t *)(v13 + 20),
          a2,
          v41);
        v10 = v34 + 1;
        if ( v38 <= v34 + 1 )
          break;
      }
    }
  }
  v14 = *(uint32_t *)(a1 + 12);
  v15 = (*(uint32_t *)(v14 + 140))-- == 1;
  if ( v15 && *(uint8_t *)(v14 + 148) == 0 )
  {
    if ( *(uint32_t *)(v14 + 132) != 0 )
      hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v14);
    if ( *(uint32_t *)(v14 + 156) == 1 && *(uint32_t *)(v14 + 136) != 0 )
      hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v14);
  }
  v16 = *v30;
  v17 = *(uint32_t **)(*v30 + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*v30 + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v18 = __rdtsc();
    v17[1] = v18;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  v38 = 0;
  if ( v39 >= 0 )
    (*(void (**)(uint32_t *, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v37,
      8 * v39,
      v29);
  v37 = 0;
  v39 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v40,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::Construct  (binary VA: 0x1740df0)
// Original: hkpContinuousSimulation::hkpContinuousSimulation
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::Construct(hkpContinuousSimulation::Self *self, hkpWorld::Self *a2)
{
  hkpContinuousSimulation::Self *v2;
  hkpWorld::Self *v3;
  int address;
  int v5;
  int v6;
  int v7;
  int savedregs;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef hkpDefaultToiResourceMgr::Self *_g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef hkArrayUtil::Self *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v13)) > _g4_s5 ? (16u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v14)) > _g4_s6 ? (20u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v15)) > _g4_s7 ? (32u + sizeof(_g4_t_v15)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  v15 = (hkArrayUtil::Self *)&self;
  v2 = self;
  v3 = a2;
  hkpSimulation::Construct(self, a2);
  *((uint32_t *)v2 + 12) = 0;
  *((uint32_t *)v2 + 13) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_209F308);
  *((uint32_t *)v2 + 14) = 0x80000000;
  *((uint32_t *)v2 + 15) = 0;
  *((uint32_t *)v2 + 16) = 0;
  *((uint32_t *)v2 + 17) = -1;
  *((uint8_t *)v2 + 16) = 1;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v13 = (hkpDefaultToiResourceMgr::Self *)(*(int (**)(uint32_t, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                      *(uint32_t *)(*(uint32_t *)address + 44),
                                      16,
                                      v8,
                                      v9,
                                      v10,
                                      v11,
                                      v12,
                                      v14[0],
                                      v14[1],
                                      v14[2]);
  hkpDefaultToiResourceMgr::Construct(v13);
  *((uint32_t *)v2 + 19) = 0;
  *((uint32_t *)v2 + 18) = (uint32_t)(uintptr_t)(v13);
  v5 = *((uint32_t *)v3 + 217);
  v6 = *((uint32_t *)v2 + 14) & 0x3FFFFFFF;
  if ( v5 > v6 )
  {
    v7 = 2 * v6;
    savedregs = 112;
    v15 = (hkArrayUtil::Self *)v14;
    if ( v7 < v5 )
      v7 = v5;
    hkArrayUtil::reserve(v15, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)v2 + 12, v7, savedregs);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::create  (binary VA: 0x1740ef0)
// Original: hkpContinuousSimulation::create
// ----------------------------------------------------------------------------
hkpContinuousSimulation::Self * hkpContinuousSimulation::create(hkpContinuousSimulation::Self *self)
{
  int address;
  hkpContinuousSimulation::Self *v2;

  *(uintptr_t *)(unk_21293C8) = (uintptr_t)(1);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpContinuousSimulation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)address + 44),
                                    80);
  hkpContinuousSimulation::Construct(v2, (hkpWorld::Self *)(self));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs  (binary VA: 0x1740f50)
// Original: hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  hkLifoAllocator::Self *v10;
  int v11;
  hkLifoAllocator::Self *v12;
  int v13;
  int v14;
  char *v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint64_t v23; // rax
  uint32_t *v24;
  int v25;
  hkLifoAllocator::Self *v26;
  hkLifoAllocator::Self *v27;
  int v28;
  uint32_t *v29;
  uint64_t v30; // rax
  int v31;
  uint32_t *v32;
  uint64_t v33; // rax
  typedef int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef signed int _g4_t_v41;
  typedef hkLifoAllocator::Self **_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v36)) > _g4_s2 ? (20u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v37)) > _g4_s3 ? (24u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v38)) > _g4_s4 ? (28u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v39)) > _g4_s5 ? (32u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v40)) > _g4_s6 ? (36u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v41)) > _g4_s7 ? (40u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v42)) > _g4_s8 ? (44u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v43)) > _g4_s9 ? (52u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v44)) > _g4_s10 ? (76u + sizeof(_g4_t_v44)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);

  if ( a3 != 0 )
  {
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v7 = *address;
    v43 = address;
    v8 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
    {
      *v8 = (uint32_t)(uintptr_t)("LtBroadPhase");
      v8[3] = (uint32_t)(uintptr_t)("StGatherAabbs");
      v9 = __rdtsc();
      v8[1] = v9;
      *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 4);
    }
    v42 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v10 = *v42;
    v40 = (32 * a3 + 127) & 0xFFFFFF80;
    v38 = *((char **)*v42 + 3);
    if ( v40 <= *((uint32_t *)*v42 + 2) && (unsigned int)(v11 = v40 + *((uint32_t *)*v42 + 3)) <= *((uint32_t *)v10 + 4) )
      *((uint32_t *)v10 + 3) = v11;
    else
      v38 = (char *)hkLifoAllocator::allocateFromNewSlab(v10, v40);
    v41 = (4 * a3 + 127) & 0xFFFFFF80;
    v12 = *v42;
    v39 = *((char **)*v42 + 3);
    if ( v41 <= *((uint32_t *)*v42 + 2) && (unsigned int)(v13 = v41 + *((uint32_t *)*v42 + 3)) <= *((uint32_t *)v12 + 4) )
    {
      *((uint32_t *)v12 + 3) = v13;
      v14 = (int)(uintptr_t)(v39);
    }
    else
    {
      v14 = hkLifoAllocator::allocateFromNewSlab(v12, v41);
      v39 = (char *)v14;
    }
    v36 = (uint32_t *)v14;
    v15 = v38;
    v37 = a3 - 1;
    if ( a3 - 1 >= 0 )
    {
      do
      {
        v44[0] = *a2;
        v20 = v44[0];
        *v36 = v44[0] + 36;
        v35 = *(uint32_t *)(v20 + 48);
        if ( v35 > *(uint32_t *)(v20 + 64) )
        {
          hkpEntityAabbUtil::entityBatchRecalcAabb(*(uint32_t *)(a4 + 112), v44, 1);
          v35 = *(uint32_t *)(v20 + 48);
        }
        v16 = *(uint8_t *)(v20 + 63);
        v15 += 32;
        ++v36;
        ++a2;
        v34 = *(uint32_t *)(v20 + 56) - (*(uint8_t *)(v20 + 62) << v16);
        v17 = *(uint8_t *)(v20 + 60);
        *((uint32_t *)v15 - 7) = *(uint32_t *)(v20 + 52) - (*(uint8_t *)(v20 + 61) << v16);
        --v37;
        *((uint32_t *)v15 - 8) = v35 - (v17 << v16);
        *((uint32_t *)v15 - 6) = v34;
        v18 = *(uint32_t *)(v20 + 68) + (*(uint8_t *)(v20 + 77) << v16);
        v19 = *(uint32_t *)(v20 + 72) + (*(uint8_t *)(v20 + 78) << v16);
        *((uint32_t *)v15 - 4) = *(uint32_t *)(v20 + 64) + (*(uint8_t *)(v20 + 76) << v16);
        *((uint32_t *)v15 - 3) = v18;
        *((uint32_t *)v15 - 2) = v19;
      }
      while ( v37 != -1 );
    }
    v21 = *v43;
    v22 = *(uint32_t **)(*v43 + 4);
    if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(*v43 + 12) )
    {
      *v22 = (uint32_t)(uintptr_t)("St3AxisSweep");
      v23 = __rdtsc();
      v22[1] = v23;
      *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
    }
    v24 = *(uint32_t **)(a4 + 88);
    if ( v24[7] != 0 )
    {
      hkpBroadPhase::lockImplementation(*(hkpBroadPhase::Self **)(a4 + 88));
      v24 = *(uint32_t **)(a4 + 88);
    }
    G4_VCALL<void>(v24, 56, v39, v38, a3, a5, a6);
    v25 = *(uint32_t *)(a4 + 88);
    if ( *(uint32_t *)(v25 + 28) != 0 )
      hkpBroadPhase::unlockImplementation((pthread_mutex_t **)v25);
    v26 = *v42;
    if ( v41 > *((uint32_t *)*v42 + 2) || *((char **)v26 + 3) != &v39[v41] || v39 == *((char **)v26 + 5) )
      hkLifoAllocator::slowBlockFree(v26, v39, v41);
    else
      *((uint32_t *)v26 + 3) = (uint32_t)(uintptr_t)(v39);
    v27 = *v42;
    if ( v40 > *((uint32_t *)*v42 + 2) || *((char **)v27 + 3) != &v38[v40] || v38 == *((char **)v27 + 5) )
      hkLifoAllocator::slowBlockFree(v27, v38, v40);
    else
      *((uint32_t *)v27 + 3) = (uint32_t)(uintptr_t)(v38);
    if ( *(uint32_t *)(a6 + 4) + *(uint32_t *)(a5 + 4) > 0 )
    {
      v28 = *v43;
      v29 = *(uint32_t **)(*v43 + 4);
      if ( (unsigned int)(uintptr_t)(v29) < *(uint32_t *)(*v43 + 12) )
      {
        *v29 = (uint32_t)(uintptr_t)("StRemoveDup");
        v30 = __rdtsc();
        v29[1] = v30;
        *(uint32_t *)(v28 + 4) = (uint32_t)(uintptr_t)(v29 + 3);
      }
      hkpTypedBroadPhaseDispatcher::removeDuplicates(a5, a6);
    }
    v31 = *v43;
    v32 = *(uint32_t **)(*v43 + 4);
    if ( (unsigned int)(uintptr_t)(v32) < *(uint32_t *)(*v43 + 12) )
    {
      *v32 = (uint32_t)(uintptr_t)("lt");
      v33 = __rdtsc();
      v32[1] = v33;
      *(uint32_t *)(v31 + 4) = (uint32_t)(uintptr_t)(v32 + 3);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous  (binary VA: 0x1741330)
// Original: hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous(hkpContinuousSimulation::Self *self, hkpEntity::Self **a2, int a3, hkpWorld::Self *a4, char *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  char *v11;
  hkLifoAllocator::Self *v12;
  char *v13;
  hkLifoAllocator::Self *v14;
  char *v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char *v21;
  int v22;
  unsigned int v23;
  int v24;
  uint32_t *v25;
  uint64_t v26; // rax
  uint32_t *v27;
  hkLifoAllocator::Self *v28;
  hkLifoAllocator::Self *v29;
  int v30;
  uint32_t *v31;
  uint64_t v32; // rax
  int *v33;
  int v34;
  uint32_t *v35;
  unsigned int v36;
  uint64_t v37; // rax
  uint64_t v38; // rax
  int v39;
  uint32_t *v40;
  uint64_t v41; // rax
  int v42;
  int Instance;
  int v44;
  uint32_t *v45;
  uint64_t v46; // rax
  int v47;
  int v48;
  uint32_t *v49;
  uint64_t v50; // rax
  int v51;
  hkLifoAllocator::Self *v52;
  signed int v53;
  int v54;
  hkLifoAllocator::Self *v55;
  signed int v56;
  hkLifoAllocator::Self **v57;
  hkLifoAllocator::Self *v58;
  signed int v59;
  char *v60;
  hkLifoAllocator::Self *v61;
  signed int v62;
  typedef signed int _g4_t_v63;
  typedef signed int _g4_t_v64;
  typedef int *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef hkLifoAllocator::Self **_g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef hkLifoAllocator::Self **_g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef signed int _g4_t_v78;
  typedef char *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef char *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef signed int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v63)) > _g4_s0 ? (4u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v64)) > _g4_s1 ? (8u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v65)) > _g4_s2 ? (12u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v66)) > _g4_s3 ? (16u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v67)) > _g4_s4 ? (20u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v68)) > _g4_s5 ? (24u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v69)) > _g4_s6 ? (28u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v70)) > _g4_s7 ? (32u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v72)) > _g4_s8 ? (40u + sizeof(_g4_t_v72)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v73)) > _g4_s9 ? (44u + sizeof(_g4_t_v73)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v74)) > _g4_s10 ? (44u + sizeof(_g4_t_v74)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v75)) > _g4_s11 ? (60u + sizeof(_g4_t_v75)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v76)) > _g4_s12 ? (64u + sizeof(_g4_t_v76)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v77)) > _g4_s13 ? (68u + sizeof(_g4_t_v77)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v78)) > _g4_s14 ? (72u + sizeof(_g4_t_v78)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v79)) > _g4_s15 ? (76u + sizeof(_g4_t_v79)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v80)) > _g4_s16 ? (80u + sizeof(_g4_t_v80)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v81)) > _g4_s17 ? (96u + sizeof(_g4_t_v81)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v82)) > _g4_s18 ? (100u + sizeof(_g4_t_v82)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v83)) > _g4_s19 ? (104u + sizeof(_g4_t_v83)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v84)) > _g4_s20 ? (108u + sizeof(_g4_t_v84)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v85)) > _g4_s21 ? (112u + sizeof(_g4_t_v85)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 100u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);

  if ( a3 != 0 )
  {
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v6 = *address;
    v65 = address;
    v7 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
    {
      *v7 = (uint32_t)(uintptr_t)("LtBroadPhase");
      v7[3] = (uint32_t)(uintptr_t)("StGatherAabbs");
      v8 = __rdtsc();
      v7[1] = v8;
      *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 4);
    }
    v76 = nullptr;
    v77 = 0;
    v78 = 0x80000000;
    v80 = *((uint32_t *)a4 + 219);
    v9 = v80;
    if ( v80 != 0 )
    {
      v57 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v58 = *v57;
      v59 = (8 * v80 + 127) & 0xFFFFFF80;
      v74 = v57;
      v60 = *((char **)*v57 + 3);
      if ( v59 <= *((uint32_t *)v58 + 2) && (unsigned int)(uintptr_t)(&v60[v59]) <= *((uint32_t *)v58 + 4) )
        *((uint32_t *)v58 + 3) = (uint32_t)(uintptr_t)(&v60[v59]);
      else
        v60 = (char *)hkLifoAllocator::allocateFromNewSlab(v58, (8 * v80 + 127) & 0xFFFFFF80);
      v76 = v60;
      v79 = v60;
      v78 = v9 | 0x80000000;
      v81 = nullptr;
      v82 = 0;
      v83 = 0x80000000;
      v85 = *((uint32_t *)a4 + 219);
      v10 = v85;
      if ( v85 != 0 )
      {
        v61 = *v74;
        v62 = (8 * v85 + 127) & 0xFFFFFF80;
        v11 = *((char **)*v74 + 3);
        if ( v62 <= *((uint32_t *)*v74 + 2) && (unsigned int)(uintptr_t)(&v11[v62]) <= *((uint32_t *)v61 + 4) )
          *((uint32_t *)v61 + 3) = (uint32_t)(uintptr_t)(&v11[v62]);
        else
          v11 = (char *)hkLifoAllocator::allocateFromNewSlab(v61, (8 * v85 + 127) & 0xFFFFFF80);
        v68 = v74;
      }
      else
      {
        v68 = v74;
        v11 = nullptr;
      }
    }
    else
    {
      v68 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v76 = nullptr;
      v78 = 0x80000000;
      v79 = nullptr;
      v82 = 0;
      v85 = 0;
      v10 = 0;
      v11 = nullptr;
    }
    v84 = v11;
    v81 = v11;
    v83 = v10 | 0x80000000;
    v12 = *v68;
    v64 = (32 * a3 + 127) & 0xFFFFFF80;
    v13 = *((char **)*v68 + 3);
    v67 = v13;
    if ( v64 <= *((uint32_t *)*v68 + 2) && (unsigned int)(uintptr_t)(&v13[v64]) <= *((uint32_t *)v12 + 4) )
      *((uint32_t *)v12 + 3) = (uint32_t)(uintptr_t)(&v13[v64]);
    else
      v67 = (char *)hkLifoAllocator::allocateFromNewSlab(v12, v64);
    v63 = (4 * a3 + 127) & 0xFFFFFF80;
    v14 = *v68;
    v15 = *((char **)*v68 + 3);
    v66 = v15;
    if ( v63 <= *((uint32_t *)*v68 + 2) && (unsigned int)(uintptr_t)(&v15[v63]) <= *((uint32_t *)v14 + 4) )
      *((uint32_t *)v14 + 3) = (uint32_t)(uintptr_t)(&v15[v63]);
    else
      v66 = (char *)hkLifoAllocator::allocateFromNewSlab(v14, v63);
    v73 = v67;
    v70 = v66;
    v69 = a3 - 1;
    if ( a3 - 1 >= 0 )
    {
      do
      {
        v75 = (int)(uintptr_t)(*a2);
        v22 = v75;
        *(uint32_t *)v70 = v75 + 36;
        v23 = *(uint32_t *)(v22 + 48);
        if ( v23 > *(uint32_t *)(v22 + 64) )
        {
          hkpEntityAabbUtil::entityBatchRecalcAabb(*((uint32_t *)a4 + 28), &v75, 1);
          v23 = *(uint32_t *)(v22 + 48);
        }
        v16 = *(uint8_t *)(v22 + 63);
        v70 += 4;
        v72 = *(uint32_t *)(v22 + 52) - (*(uint8_t *)(v22 + 61) << v16);
        v17 = *(uint32_t *)(v22 + 56) - (*(uint8_t *)(v22 + 62) << v16);
        ++a2;
        --v69;
        *(uint32_t *)v73 = v23 - (*(uint8_t *)(v22 + 60) << v16);
        *((uint32_t *)v73 + 1) = v72;
        *((uint32_t *)v73 + 2) = v17;
        v18 = *(uint32_t *)(v22 + 68) + (*(uint8_t *)(v22 + 77) << v16);
        v19 = *(uint32_t *)(v22 + 72) + (*(uint8_t *)(v22 + 78) << v16);
        v20 = *(uint8_t *)(v22 + 76) << v16;
        v21 = v73;
        v73 += 32;
        *((uint32_t *)v21 + 4) = *(uint32_t *)(v22 + 64) + v20;
        *((uint32_t *)v21 + 5) = v18;
        *((uint32_t *)v21 + 6) = v19;
      }
      while ( v69 != -1 );
    }
    v24 = *v65;
    v25 = *(uint32_t **)(*v65 + 4);
    if ( (unsigned int)(uintptr_t)(v25) < *(uint32_t *)(*v65 + 12) )
    {
      *v25 = (uint32_t)(uintptr_t)("St3AxisSweep");
      v26 = __rdtsc();
      v25[1] = v26;
      *(uint32_t *)(v24 + 4) = (uint32_t)(uintptr_t)(v25 + 3);
    }
    v27 = *((uint32_t **)a4 + 22);
    if ( v27[7] != 0 )
    {
      hkpBroadPhase::lockImplementation(*((hkpBroadPhase::Self **)a4 + 22));
      v27 = *((uint32_t **)a4 + 22);
    }
    G4_VCALL<void>(v27, 56, v66, v67, a3, &v76, &v81);
    if ( *(uint32_t *)(*((uint32_t *)a4 + 22) + 28) != 0 )
      hkpBroadPhase::unlockImplementation(*((pthread_mutex_t ***)a4 + 22));
    v28 = *v68;
    if ( v63 > *((uint32_t *)*v68 + 2) || *((char **)v28 + 3) != &v66[v63] || v66 == *((char **)v28 + 5) )
      hkLifoAllocator::slowBlockFree(*v68, v66, v63);
    else
      *((uint32_t *)v28 + 3) = (uint32_t)(uintptr_t)(v66);
    v29 = *v68;
    if ( v64 > *((uint32_t *)*v68 + 2) || *((char **)v29 + 3) != &v67[v64] || v67 == *((char **)v29 + 5) )
      hkLifoAllocator::slowBlockFree(v29, v67, v64);
    else
      *((uint32_t *)v29 + 3) = (uint32_t)(uintptr_t)(v67);
    if ( v82 + v77 > 0 )
    {
      v30 = *v65;
      v31 = *(uint32_t **)(*v65 + 4);
      if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*v65 + 12) )
      {
        *v31 = (uint32_t)(uintptr_t)("StRemoveDup");
        v32 = __rdtsc();
        v31[1] = v32;
        *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
      }
      hkpTypedBroadPhaseDispatcher::removeDuplicates(&v76, &v81);
    }
    if ( a5 != nullptr )
    {
      v33 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
      v34 = *v33;
      v35 = *(uint32_t **)(*v33 + 4);
      v36 = *(uint32_t *)(*v33 + 12);
      if ( (unsigned int)(uintptr_t)(v35) < v36 )
      {
        *v35 = (uint32_t)(uintptr_t)("TtWaitForExport");
        v37 = __rdtsc();
        v35[1] = v37;
        v35 += 3;
        *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35);
        v36 = *(uint32_t *)(v34 + 12);
      }
      while ( *a5 != 1 && *a5 != 2 )
        ;
      if ( (unsigned int)(uintptr_t)(v35) < v36 )
      {
        *v35 = (uint32_t)(uintptr_t)("Et");
        v38 = __rdtsc();
        v35[1] = v38;
        *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
      }
    }
    if ( v82 + v77 > 0 )
    {
      v39 = *v65;
      v40 = *(uint32_t **)(*v65 + 4);
      if ( (unsigned int)(uintptr_t)(v40) < *(uint32_t *)(*v65 + 12) )
      {
        *v40 = (uint32_t)(uintptr_t)("StRemoveAgt");
        v41 = __rdtsc();
        v40[1] = v41;
        *(uint32_t *)(v39 + 4) = (uint32_t)(uintptr_t)(v40 + 3);
      }
      hkpWorld::lockIslandForConstraintUpdate((pthread_mutex_t **)a4);
      hkpTypedBroadPhaseDispatcher::removePairs(*((uint32_t *)a4 + 23), v81, v82);
      v42 = v77;
      Instance = hkMemorySystem::getInstance();
      if ( G4_VCALL<uint8_t>(Instance, 36, v42 << 10) != 0 )
      {
        v44 = *v65;
        v45 = *(uint32_t **)(*v65 + 4);
        if ( (unsigned int)(uintptr_t)(v45) < *(uint32_t *)(*v65 + 12) )
        {
          *v45 = (uint32_t)(uintptr_t)("StAddAgt");
          v46 = __rdtsc();
          v45[1] = v46;
          *(uint32_t *)(v44 + 4) = (uint32_t)(uintptr_t)(v45 + 3);
        }
        v47 = 0;
        if ( *((uint32_t *)a4 + 29) != 0 )
          v47 = *((uint32_t *)a4 + 29) + 8;
        hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)a4 + 23), v76, v77, v47);
      }
      hkpWorld::unlockIslandForConstraintUpdate(a4);
    }
    v48 = *v65;
    v49 = *(uint32_t **)(*v65 + 4);
    if ( (unsigned int)(uintptr_t)(v49) < *(uint32_t *)(*v65 + 12) )
    {
      *v49 = (uint32_t)(uintptr_t)("lt");
      v50 = __rdtsc();
      v49[1] = v50;
      *(uint32_t *)(v48 + 4) = (uint32_t)(uintptr_t)(v49 + 3);
    }
    v51 = 0;
    if ( v81 != v84 )
      v51 = v82;
    v82 = v51;
    v52 = *v68;
    v53 = (8 * v85 + 127) & 0xFFFFFF80;
    if ( v53 > *((uint32_t *)*v68 + 2) || *((char **)v52 + 3) != &v84[v53] || v84 == *((char **)v52 + 5) )
      hkLifoAllocator::slowBlockFree(v52, v84, (8 * v85 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v52 + 3) = (uint32_t)(uintptr_t)(v84);
    v82 = 0;
    if ( v83 >= 0 )
      (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v81,
        8 * v83);
    v54 = 0;
    if ( v76 != v79 )
      v54 = v77;
    v83 = 0x80000000;
    v55 = *v68;
    v77 = v54;
    v81 = nullptr;
    v56 = (8 * v80 + 127) & 0xFFFFFF80;
    if ( v56 > *((uint32_t *)v55 + 2) || *((char **)v55 + 3) != &v79[v56] || v79 == *((char **)v55 + 5) )
      hkLifoAllocator::slowBlockFree(v55, v79, v56);
    else
      *((uint32_t *)v55 + 3) = (uint32_t)(uintptr_t)(v79);
    v77 = 0;
    if ( v78 >= 0 )
      (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v76,
        8 * v78);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous  (binary VA: 0x1741af0)
// Original: hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous(int a1, int a2, int a3, int a4)
{
  return ((hkpSimulation::processAgentsOfEntities(
           a1,
           a2,
           a3,
           a4,
           hkpContinuousSimulation::processAgentCollideContinuous,
           0,
           0)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::removeToiEventsOfEntities  (binary VA: 0x1741b50)
// Original: hkpContinuousSimulation::removeToiEventsOfEntities
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::removeToiEventsOfEntities(hkpContinuousSimulation::Self *self, hkpEntity::Self **a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  signed int Key;
  signed int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  uint32_t *v14;
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
  int i;
  hkpEntity::Self *v30;
  int v31;
  int v32;
  uint32_t v33[2];
  int v34;

  v3 = *((uint32_t *)self + 13);
  if ( v3 != 0 )
  {
    v33[0] = 0;
    v33[1] = 0;
    v34 = -1;
    if ( a3 != 0 )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::reserve(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v33,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        a3);
      if ( a3 > 0 )
      {
        for ( i = 0; i != a3; ++i )
        {
          v30 = a2[i];
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v33,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (unsigned int)(uintptr_t)(v30),
            0);
        }
      }
      v3 = *((uint32_t *)self + 13);
    }
    v4 = 0;
    if ( v3 <= 0 )
    {
LABEL_13:
      hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v33,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
      hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
      return;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = 112 * v4;
        v32 = v4;
        v7 = *((uint32_t *)self + 12) + 112 * v4;
        Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v33,
                *(uint32_t *)(v7 + 12));
        v9 = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
               (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v33,
               *(uint32_t *)(v7 + 16));
        if ( Key <= v34 || v9 <= v34 )
          break;
        v5 = v32;
        v6 = *((uint32_t *)self + 13);
LABEL_7:
        v4 = v5 + 1;
        if ( v5 + 1 >= v6 )
          goto LABEL_13;
      }
      v10 = *(uint32_t *)(v7 + 12);
      if ( *(uint8_t *)(v10 + 232) == 5 )
        v10 = *(uint32_t *)(v7 + 16);
      (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(v7 + 20) + 40))(
        *(uint32_t *)(v7 + 20),
        *(uint32_t *)(v10 + 200),
        v7 + 24);
      v5 = v32 - 1;
      v11 = *((uint32_t *)self + 12);
      v12 = *((uint32_t *)self + 13) - 1;
      *((uint32_t *)self + 13) = v12;
      if ( v32 == v12 )
      {
        v6 = v32;
        goto LABEL_7;
      }
      v13 = (int *)(112 * v12 + v11);
      v14 = (uint32_t *)(v31 + v11);
      v15 = *v13;
      v14[1] = v13[1];
      *v14 = v15;
      v16 = v13[2];
      v14[3] = v13[3];
      v14[2] = v16;
      v17 = v13[4];
      v14[5] = v13[5];
      v14[4] = v17;
      v18 = v13[6];
      v14[7] = v13[7];
      v14[6] = v18;
      v19 = v13[8];
      v14[9] = v13[9];
      v14[8] = v19;
      v20 = v13[10];
      v14[11] = v13[11];
      v14[10] = v20;
      v21 = v13[12];
      v14[13] = v13[13];
      v14[12] = v21;
      v22 = v13[14];
      v14[15] = v13[15];
      v14[14] = v22;
      v23 = v13[17];
      v14[16] = v13[16];
      v14[17] = v23;
      v24 = v13[18];
      v14[19] = v13[19];
      v14[18] = v24;
      v25 = v13[20];
      v14[21] = v13[21];
      v14[20] = v25;
      v26 = v13[22];
      v14[23] = v13[23];
      v14[22] = v26;
      v27 = v13[24];
      v14[25] = v13[25];
      v14[24] = v27;
      v28 = v13[27];
      v14[26] = v13[26];
      v14[27] = v28;
      v4 = v32;
      if ( v32 >= *((uint32_t *)self + 13) )
        goto LABEL_13;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::removeToiEventsOfEntity  (binary VA: 0x17420b0)
// Original: hkpContinuousSimulation::removeToiEventsOfEntity
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::removeToiEventsOfEntity(hkpContinuousSimulation::Self *self, hkpEntity::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int *v8;
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

  v2 = 0;
  if ( *((int *)self + 13) > 0 )
  {
    v23 = *((uint32_t *)self + 13);
    while ( 1 )
    {
      v3 = *((uint32_t *)self + 12) + 112 * v2;
      v4 = *(uint32_t *)(v3 + 12);
      if ( (hkpEntity::Self *)v4 != a2 && *(hkpEntity::Self **)(v3 + 16) != a2 )
        goto LABEL_3;
      if ( *(uint8_t *)(v4 + 232) == 5 )
        v4 = *(uint32_t *)(v3 + 16);
      (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(v3 + 20) + 40))(
        *(uint32_t *)(v3 + 20),
        *(uint32_t *)(v4 + 200),
        v3 + 24);
      v5 = *((uint32_t *)self + 13) - 1;
      v6 = *((uint32_t *)self + 12);
      *((uint32_t *)self + 13) = v5;
      if ( v2 == v5 )
      {
        v23 = v2--;
LABEL_3:
        if ( ++v2 >= v23 )
          return;
      }
      else
      {
        v7 = (uint32_t *)(112 * v2 + v6);
        v8 = (int *)(112 * v5 + v6);
        v9 = *v8;
        v7[1] = v8[1];
        *v7 = v9;
        v10 = v8[2];
        v7[3] = v8[3];
        v7[2] = v10;
        v11 = v8[4];
        v7[5] = v8[5];
        v7[4] = v11;
        v12 = v8[6];
        v7[7] = v8[7];
        v7[6] = v12;
        v13 = v8[8];
        v7[9] = v8[9];
        v7[8] = v13;
        v14 = v8[10];
        v7[11] = v8[11];
        v7[10] = v14;
        v15 = v8[12];
        v7[13] = v8[13];
        v7[12] = v15;
        v16 = v8[14];
        v7[15] = v8[15];
        v7[14] = v16;
        v17 = v8[17];
        v7[16] = v8[16];
        v7[17] = v17;
        v18 = v8[18];
        v7[19] = v8[19];
        v7[18] = v18;
        v19 = v8[20];
        v7[21] = v8[21];
        v7[20] = v19;
        v20 = v8[22];
        v7[23] = v8[23];
        v7[22] = v20;
        v21 = v8[24];
        v7[25] = v8[25];
        v7[24] = v21;
        v22 = v8[27];
        v7[26] = v8[26];
        v7[27] = v22;
        v23 = *((uint32_t *)self + 13);
        if ( v2 >= v23 )
          return;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::handleSimpleToi  (binary VA: 0x1742230)
// Original: hkpContinuousSimulation::handleSimpleToi
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::handleSimpleToi(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19)
{
  uint32_t *v19;
  int *address;
  int v21;
  uint32_t *v22;
  uint64_t v23; // rax
  int v24;
  int v25;
  int v26;
  int v27;
  bool v28;
  uint64_t v29; // rax
  hkSweptTransformUtil::Self *v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  hkMotionState::Self *v37;
  int v38;
  int *v39;
  int v40;
  int v41;
  int v42;
  int *v43;
  uint32_t *v44;
  int v45;
  int v46;
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
  uint32_t *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t _g4_t_v68[3];
  typedef uint32_t _g4_t_v69[15];
  typedef hkMotionState::Self *_g4_t_v70;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v60)) > _g4_s0 ? (0u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v61)) > _g4_s1 ? (4u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v62)) > _g4_s2 ? (8u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v63)) > _g4_s3 ? (12u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v64)) > _g4_s4 ? (16u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v65)) > _g4_s5 ? (20u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v66)) > _g4_s6 ? (24u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v67)) > _g4_s7 ? (28u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v68)) > _g4_s8 ? (32u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v69)) > _g4_s9 ? (44u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v70)) > _g4_s10 ? (104u + sizeof(_g4_t_v70)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);

  v19 = a1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v21 = *address;
  v63 = address;
  v22 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(*address + 12) )
  {
    *v22 = (uint32_t)(uintptr_t)("TtSimpleTOI");
    v23 = __rdtsc();
    v22[1] = v23;
    *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
  }
  v24 = a1[3];
  v68[1] = 0;
  v68[2] = -2147483646;
  ++*(uint32_t *)(v24 + 140);
  v68[0] = (uint32_t)(uintptr_t)(v69);
  (*(void (**)(uint32_t, int, int, uint32_t *, int, int, int, int *, int, int, int, int))(**(uint32_t **)(a3 + 20)
                                                                                              + 80))(
    *(uint32_t *)(a3 + 20),
    a3,
    a5,
    v68,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v77 = 0;
  v76 = a3;
  do
  {
    v25 = *(uint32_t *)(v76 + 12);
    if ( *(uint8_t *)(v25 + 42) == 3 )
    {
      v74 = *(uint32_t *)(v76 + 12);
      v69[14] = v25 + 240;
      hkSweptTransformUtil::freezeMotionState(*(hkSweptTransformUtil::Self **)a3, COERCE_FLOAT(v25 + 240), v70);
      hkpWorldAgentUtil::invalidateTim(v74, *(uint32_t *)(a2 + 112));
      v32 = v74;
      v33 = v19[13] - 1;
      if ( v33 >= 0 )
      {
        v73 = v74;
        v75 = 112 * v33;
        v34 = v19[13] - 1;
        v72 = v19;
        do
        {
          while ( 1 )
          {
            v35 = (uint32_t *)(v72[12] + v75);
            v36 = v35[3];
            if ( v73 == v36 || v73 == v35[4] )
            {
              if ( *(uint8_t *)(v36 + 232) == 5 )
                v36 = v35[4];
              v37 = (hkMotionState::Self *)(v35 + 6);
              v38 = *(uint32_t *)(v36 + 200);
              v39 = *((int **)v37 - 1);
              a2 = v34;
              v40 = *v39;
              v70 = v37;
              (*(void (**)(int *, int))(v40 + 40))(v39, v38);
              v34 = a2;
              v41 = v72[12];
              v42 = v72[13] - 1;
              v72[13] = v42;
              if ( a2 != v42 )
                break;
            }
            --v34;
            v75 -= 112;
            if ( v34 == -1 )
              goto LABEL_31;
          }
          v34 = a2 - 1;
          v43 = (int *)(112 * v42 + v41);
          v44 = (uint32_t *)(v75 + v41);
          v45 = *v43;
          v44[1] = v43[1];
          *v44 = v45;
          v46 = v43[2];
          v44[3] = v43[3];
          v44[2] = v46;
          v47 = v43[4];
          v44[5] = v43[5];
          v44[4] = v47;
          v48 = v43[6];
          v44[7] = v43[7];
          v44[6] = v48;
          v49 = v43[8];
          v44[9] = v43[9];
          v44[8] = v49;
          v50 = v43[10];
          v44[11] = v43[11];
          v44[10] = v50;
          v51 = v43[12];
          v44[13] = v43[13];
          v44[12] = v51;
          v52 = v43[14];
          v44[15] = v43[15];
          v44[14] = v52;
          v53 = v43[17];
          v44[16] = v43[16];
          v44[17] = v53;
          v54 = v43[18];
          v44[19] = v43[19];
          v44[18] = v54;
          v55 = v43[20];
          v44[21] = v43[21];
          v44[20] = v55;
          v56 = v43[22];
          v44[23] = v43[23];
          v44[22] = v56;
          v57 = v43[24];
          v44[25] = v43[25];
          v44[24] = v57;
          v75 -= 112;
          v58 = v43[27];
          v44[26] = v43[26];
          v44[27] = v58;
        }
        while ( a2 != 0 );
LABEL_31:
        v32 = v73;
        v19 = v72;
      }
      *(&a19 + v77++) = v32;
    }
    v76 += 4;
  }
  while ( v76 != a3 + 8 );
  v26 = *(uint32_t *)(a3 + 12);
  if ( *(uint8_t *)(v26 + 232) == 5 )
    v26 = *(uint32_t *)(a3 + 16);
  (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(a3 + 20) + 40))(
    *(uint32_t *)(a3 + 20),
    *(uint32_t *)(v26 + 200),
    a3 + 24);
  if ( v77 != 0 )
    G4_VCALL<void>(v19, 84, &a19, v77, *(uint32_t *)(a2 + 112));
  if ( a10 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a8,
      4 * a10);
  v27 = v19[3];
  v28 = (*(uint32_t *)(v27 + 140))-- == 1;
  if ( v28 && *(uint8_t *)(v27 + 148) == 0 )
  {
    if ( *(uint32_t *)(v27 + 132) != 0 )
      hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v27);
    if ( *(uint32_t *)(v27 + 156) == 1 && *(uint32_t *)(v27 + 136) != 0 )
      hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v27);
  }
  LODWORD(v29) = a3;
  v30 = *(hkSweptTransformUtil::Self **)a3;
  v31 = *(uint32_t **)(*(uint32_t *)a3 + 4);
  if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*(uint32_t *)a3 + 12) )
  {
    *v31 = (uint32_t)(uintptr_t)("Et");
    v29 = __rdtsc();
    v31[1] = v29;
    *((uint32_t *)v30 + 1) = (uint32_t)(uintptr_t)(v31 + 3);
  }
  return v29;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::handleAllToisTill  (binary VA: 0x1742630)
// Original: hkpContinuousSimulation::handleAllToisTill
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::handleAllToisTill(hkpContinuousSimulation::Self *self, int a2)
{
  int v2;
  hkpContinuousSimulation::Self *v3;
  int v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
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
  int result;
  int v32;
  hkpWorld::Self *v33;
  int v34;
  uint32_t *v35;
  int *v36;
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
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  float v54; // xmm3_4
  bool v55;
  float *v56;
  float *v57;
  hkpWorld::Self *v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef hkpWorld::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef hkpContinuousSimulation::Self *_g4_t_v65;
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
  typedef int _g4_t_v76;
  typedef float _g4_t_v77[34];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v59)) > _g4_s0 ? (8u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v60)) > _g4_s1 ? (12u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v61)) > _g4_s2 ? (16u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v62)) > _g4_s3 ? (20u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v63)) > _g4_s4 ? (28u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v64)) > _g4_s5 ? (32u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v65)) > _g4_s6 ? (36u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v66)) > _g4_s7 ? (40u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v67)) > _g4_s8 ? (40u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v68)) > _g4_s9 ? (44u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v69)) > _g4_s10 ? (44u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v70)) > _g4_s11 ? (44u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v71)) > _g4_s12 ? (44u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v72)) > _g4_s13 ? (44u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v73)) > _g4_s14 ? (48u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v74)) > _g4_s15 ? (52u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v75)) > _g4_s16 ? (56u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v76)) > _g4_s17 ? (60u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v77)) > _g4_s18 ? (68u + sizeof(_g4_t_v77)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 60u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);

  LODWORD(v77[30]) = (uint32_t)(uintptr_t)(&self);
  v65 = self;
  v62 = a2;
  while ( 2 )
  {
    v61 = *((hkpWorld::Self **)v65 + 3);
    ++*((uint32_t *)v61 + 35);
    while ( 2 )
    {
      v2 = *((uint32_t *)v65 + 13);
      v3 = v65;
LABEL_4:
      v74 = *(uint32_t *)(*((uint32_t *)v3 + 3) + 216);
      if ( v2 <= 0 )
      {
LABEL_21:
        result = 0;
        goto LABEL_22;
      }
      v4 = *((uint32_t *)v3 + 12);
      v5 = 0;
      v66 = v4;
      v6 = -1;
      v7 = *(float *)&v62;
      v68 = v2;
      do
      {
        while ( 1 )
        {
          if ( v7 > *(float *)v4 )
          {
LABEL_12:
            v7 = *(float *)v4;
            v6 = v5;
            goto LABEL_13;
          }
          if ( v7 == *(float *)v4 && v6 != -1 )
          {
            v8 = v66 + 112 * v6;
            v9 = *(uint32_t *)(*(uint32_t *)(v8 + 12) + 208);
            v63 = *(uint32_t *)(*(uint32_t *)(v8 + 16) + 208);
            v10 = *(uint32_t *)(v4 + 12);
            if ( *(uint32_t *)(v10 + 208) < v9 )
              goto LABEL_12;
            if ( *(uint32_t *)(v10 + 208) == v9 && *(uint32_t *)(*(uint32_t *)(v4 + 16) + 208) < v63 )
              break;
          }
          ++v5;
          v4 += 112;
          if ( v5 == v68 )
            goto LABEL_14;
        }
        v7 = *(float *)v4;
        v6 = v5;
LABEL_13:
        ++v5;
        v4 += 112;
      }
      while ( v5 != v68 );
LABEL_14:
      if ( v6 == -1 )
        goto LABEL_21;
      v64 = 112 * v6;
      v11 = v66 + 112 * v6;
      v12 = *(uint32_t *)(v11 + 20);
      *(uint8_t *)(v11 + 39) |= 1u;
      (*(void (**)(char *))(*(uint32_t *)v12 + 76))((char *)&v73 + 3);
      if ( HIBYTE(v73) == 0 )
      {
        v13 = *((uint32_t *)v65 + 12);
        v14 = *((uint32_t *)v65 + 13) - 1;
        *((uint32_t *)v65 + 13) = v14;
        if ( v6 != v14 )
        {
          v15 = (uint32_t *)(v13 + 112 * v14);
          v16 = (uint32_t *)(v13 + v64);
          v17 = v15[1];
          *v16 = *v15;
          v16[1] = v17;
          v18 = v15[2];
          v16[3] = v15[3];
          v16[2] = v18;
          v19 = v15[4];
          v16[5] = v15[5];
          v16[4] = v19;
          v20 = v15[6];
          v16[7] = v15[7];
          v16[6] = v20;
          v21 = v15[8];
          v16[9] = v15[9];
          v16[8] = v21;
          v22 = v15[10];
          v16[11] = v15[11];
          v16[10] = v22;
          v23 = v15[12];
          v16[13] = v15[13];
          v16[12] = v23;
          v24 = v15[14];
          v16[15] = v15[15];
          v16[14] = v24;
          v25 = v15[17];
          v16[16] = v15[16];
          v16[17] = v25;
          v26 = v15[18];
          v16[19] = v15[19];
          v16[18] = v26;
          v27 = v15[20];
          v16[21] = v15[21];
          v16[20] = v27;
          v28 = v15[22];
          v16[23] = v15[23];
          v16[22] = v28;
          v29 = v15[24];
          v16[25] = v15[25];
          v16[24] = v29;
          v30 = v15[27];
          v16[26] = v15[26];
          v16[27] = v30;
          continue;
        }
        v2 = v6;
        v3 = v65;
        goto LABEL_4;
      }
      break;
    }
    v70 = v6;
    v34 = *((uint32_t *)v65 + 12);
    v35 = (uint32_t *)(v64 + v34);
    std::memcpy(v77, (const void *)(v64 + v34), 112);
    v67 = *((uint32_t *)v65 + 13);
    *((uint32_t *)v65 + 13) = v67 - 1;
    if ( v6 != v67 - 1 )
    {
      v36 = (int *)(v34 + 112 * (v67 - 1));
      v37 = *v36;
      v35[1] = v36[1];
      *v35 = v37;
      v38 = v36[2];
      v35[3] = v36[3];
      v35[2] = v38;
      v39 = v36[4];
      v35[5] = v36[5];
      v35[4] = v39;
      v40 = v36[6];
      v35[7] = v36[7];
      v35[6] = v40;
      v41 = v36[8];
      v35[9] = v36[9];
      v35[8] = v41;
      v42 = v36[10];
      v35[11] = v36[11];
      v35[10] = v42;
      v43 = v36[12];
      v35[13] = v36[13];
      v35[12] = v43;
      v44 = v36[14];
      v35[15] = v36[15];
      v35[14] = v44;
      v45 = v36[17];
      v35[16] = v36[16];
      v35[17] = v45;
      v46 = v36[18];
      v35[19] = v36[19];
      v35[18] = v46;
      v47 = v36[20];
      v35[21] = v36[21];
      v35[20] = v47;
      v48 = v36[22];
      v35[23] = v36[23];
      v35[22] = v48;
      v49 = v36[24];
      v35[25] = v36[25];
      v35[24] = v49;
      v50 = v36[26];
      v35[27] = v36[27];
      v35[26] = v50;
    }
    v51 = v77[0];
    v52 = *((float *)v65 + 6);
    v53 = v52 - v77[0];
    *((float *)v65 + 5) = v77[0];
    if ( v53 == 0.0 )
      v54 = 0.0;
    else
      v54 = 1.0 / v53;
    v55 = LOBYTE(v77[2]) == 0;
    v56 = *((float **)v65 + 3);
    v56[120] = v51;
    v56[121] = v52;
    v56[122] = v53;
    v56[123] = v54;
    v57 = *(float **)(*((uint32_t *)v65 + 3) + 112);
    v57[20] = v51;
    v57[21] = v52;
    v57[22] = v53;
    v57[23] = v54;
    if ( v55 )
      G4_VCALL<void>(v65, 92, *((uint32_t *)v65 + 3), v77, *((uint32_t *)v65 + 7), v74);
    else
      hkpContinuousSimulation::handleSimpleToi(
        (uint32_t *)(v65),
        *((uint32_t *)v65 + 3),
        (int)(uintptr_t)(v77),
        *((uint32_t *)v65 + 7),
        v74,
        v59,
        v60,
        (int)(uintptr_t)(v61),
        v62,
        (int)(uintptr_t)(&v73) + 3,
        v63,
        (int)(uintptr_t)(v77),
        (int)(uintptr_t)(v65),
        v67,
        v70,
        v73,
        v74,
        v75,
        v76);
    ++*((uint32_t *)v65 + 19);
    if ( hkOutOfMemoryState[0] != 1 )
    {
      v71 = *((uint32_t *)v61 + 35);
      *((uint32_t *)v61 + 35) = v71 - 1;
      if ( v71 == 1 && *((uint8_t *)v61 + 148) == 0 )
      {
        v58 = v61;
        if ( *((uint32_t *)v61 + 33) != 0 )
        {
          hkpWorld::internal_executePendingOperations(v61);
          v58 = v61;
        }
        if ( *((uint32_t *)v58 + 39) == 1 && *((uint32_t *)v58 + 34) != 0 )
          hkpWorld::internal_executePendingBodyOperations(v58);
      }
      continue;
    }
    break;
  }
  result = 3;
LABEL_22:
  v32 = *((uint32_t *)v61 + 35);
  *((uint32_t *)v61 + 35) = v32 - 1;
  if ( v32 == 1 && *((uint8_t *)v61 + 148) == 0 )
  {
    v33 = v61;
    if ( *((uint32_t *)v61 + 33) != 0 )
    {
      v69 = result;
      hkpWorld::internal_executePendingOperations(v61);
      result = v69;
      v33 = v61;
    }
    if ( *((uint32_t *)v33 + 39) == 1 && *((uint32_t *)v33 + 34) != 0 )
    {
      v72 = result;
      hkpWorld::internal_executePendingBodyOperations(v33);
      return v72;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::advanceTimeInternal  (binary VA: 0x1742c00)
// Original: hkpContinuousSimulation::advanceTimeInternal
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::advanceTimeInternal(long double a1, hkpContinuousSimulation::Self *self)
{
  int *address;
  int v3;
  int *v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  uint32_t *v12;
  uint64_t v13; // rax
  uint32_t *v14;
  uint64_t v15; // rax
  uint32_t *v16;
  uint64_t v17; // rax
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  int v22;
  int v23;
  uint32_t *v24;
  uint64_t v25; // rax
  uint32_t *v26;
  uint64_t v27; // rax
  int *v28;
  float v29;
  int *v30;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v4 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtPhysics 2012");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  if ( *((uint32_t *)self + 10) != 0 )
  {
    v7 = *v4;
    v8 = *(uint32_t **)(*v4 + 4);
    if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*v4 + 12) )
    {
      *v8 = (uint32_t)(uintptr_t)("TtreCollideAfterStepFailure");
      v9 = __rdtsc();
      v8[1] = v9;
      *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
    }
    v28 = v4;
    v10 = hkpSimulation::reCollideAfterStepFailure(self);
    v4 = v28;
    if ( v10 != 0 )
    {
      v11 = v10;
      if ( *(uint32_t *)(v7 + 4) < *(uint32_t *)(v7 + 12) )
      {
        v12 = *(uint32_t **)(v7 + 4);
        *v12 = (uint32_t)(uintptr_t)("Et");
        v13 = __rdtsc();
        v12[1] = v13;
        LODWORD(v13) = (uint32_t)(uintptr_t)(v12 + 3);
        v11 = v10;
        *(uint32_t *)(v7 + 4) = v13;
      }
      goto LABEL_13;
    }
    v14 = *(uint32_t **)(v7 + 4);
    if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(v7 + 12) )
    {
      *v14 = (uint32_t)(uintptr_t)("Et");
      v15 = __rdtsc();
      v14[1] = v15;
      *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
    }
  }
  v30 = v4;
  hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo(self);
  v29 = a1;
  if ( *((uint32_t *)self + 13) == 0 )
  {
LABEL_12:
    v11 = 0;
    *((float *)self + 5) = v29;
    *((uint32_t *)self + 10) = 0;
    goto LABEL_13;
  }
  v19 = *v30;
  v20 = *(uint32_t **)(*v30 + 4);
  if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*v30 + 12) )
  {
    *v20 = (uint32_t)(uintptr_t)("TtTOIs");
    v21 = __rdtsc();
    v20[1] = v21;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
  }
  v22 = hkpContinuousSimulation::handleAllToisTill(self, SLODWORD(v29));
  v23 = v22;
  if ( v22 == 0 )
  {
    v26 = *(uint32_t **)(v19 + 4);
    if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(v19 + 12) )
    {
      *v26 = (uint32_t)(uintptr_t)("Et");
      v27 = __rdtsc();
      v26[1] = v27;
      *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v26 + 3);
    }
    goto LABEL_12;
  }
  v11 = v22;
  *((uint32_t *)self + 10) = v22;
  if ( *(uint32_t *)(v19 + 4) < *(uint32_t *)(v19 + 12) )
  {
    v24 = *(uint32_t **)(v19 + 4);
    *v24 = (uint32_t)(uintptr_t)("Et");
    v25 = __rdtsc();
    v24[1] = v25;
    LODWORD(v25) = (uint32_t)(uintptr_t)(v24 + 3);
    v11 = v23;
    *(uint32_t *)(v19 + 4) = v25;
  }
LABEL_13:
  v16 = *(uint32_t **)(v3 + 4);
  if ( (unsigned int)(uintptr_t)(v16) < *(uint32_t *)(v3 + 12) )
  {
    *v16 = (uint32_t)(uintptr_t)("Et");
    v17 = __rdtsc();
    v16[1] = v17;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v16 + 3);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::advanceTime  (binary VA: 0x1742dd0)
// Original: hkpContinuousSimulation::advanceTime
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::advanceTime(long double a1, hkpWorld::Self **self)
{
  int v2;
  int result;
  int v4;
  hkpWorldCallbackUtil::Self *v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  uint64_t v9; // rax
  hkpWorld::Self *v10;
  hkpWorldCallbackUtil::Self *v11;

  v2 = hkpContinuousSimulation::advanceTimeInternal(a1, (hkpContinuousSimulation::Self *)self);
  if ( ((unsigned int)(uintptr_t)(*(self + 16)) & 0x7FFFFFFF) != 0 )
  {
    v10 = *((hkpWorld::Self **)*(self + 3) + 28);
    (*((void (**)(hkpWorld::Self **))*self + 22))(self);
  }
  result = 3;
  if ( hkOutOfMemoryState[0] != 1 )
  {
    result = v2;
    if ( *((float *)self + 5) >= *((float *)self + 8) )
    {
      hkpWorld::checkConstraintsViolated(*(self + 3));
      result = v2;
      if ( *((uint32_t *)*(self + 3) + 91) != 0 )
      {
        v11 = (hkpWorldCallbackUtil::Self *)(*(self + 3));
        v4 = *(uint32_t *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = v11;
        v6 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v4 + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtPostSimCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = (hkpWorldCallbackUtil::Self *)(*(self + 3));
        }
        hkpWorldCallbackUtil::firePostSimulationCallback(v5, v10);
        v8 = *(uint32_t **)(v4 + 4);
        result = v2;
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v9 = __rdtsc();
          v8[1] = v9;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
          return v2;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::resetCollisionInformationForEntities  (binary VA: 0x1744230)
// Original: hkpContinuousSimulation::resetCollisionInformationForEntities
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::resetCollisionInformationForEntities(hkpContinuousSimulation::Self *a1, hkpEntity::Self **a2, hkpEntity::Self **a3, int a4, int a5)
{
  hkpSimulation::resetCollisionInformationForEntities((int)(uintptr_t)(a1), (hkpEntityAabbUtil::Self *)a2, a3, a4, a5);
  if ( (a5 & 1) != 0 )
  {
    if ( a3 == (hkpEntity::Self **)((char *)&dword_0 + 1) )
      hkpContinuousSimulation::removeToiEventsOfEntity(a1, *a2);
    else
      hkpContinuousSimulation::removeToiEventsOfEntities(a1, a2, (int)(uintptr_t)(a3));
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::addToiEvent  (binary VA: 0x17442c0)
// Original: hkpContinuousSimulation::addToiEvent
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::addToiEvent(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v3 = a1[13];
  if ( v3 == (a1[14] & 0x3FFFFFFF) )
  {
    hkErrStream::Construct((hkErrStream::Self *)v6, (hkString::Self *)v7, 512);
    hkOstream::opShl(
      (int)(uintptr_t)(v6),
      (hkString::Self *)"TOI event queue full, consider using HK_COLLIDABLE_QUALITY_DEBRIS for some objects or increase hkpWorl"
                  "dCinfo::m_sizeOfToiEventQueue");
    hkError::messageWarning(
      (hkError::Self *)0xF0323454,
      (int)(uintptr_t)(v7),
      "World/Simulation/Continuous/hkpContinuousSimulation.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_454)->st_value + 1,
      v5);
    hkErrStream::Destroy((hkErrStream::Self *)v6);
  }
  else
  {
    a1[13] = v3 + 1;
    v4 = a1[12] + 112 * v3;
    *(uint32_t *)v4 = a2[3084];
    *(uint8_t *)(v4 + 8) = *(uint8_t *)(*(uint32_t *)(a1[3] + 120) + (*(char *)(a3 + 12) << 6) + 7908);
    *(uint32_t *)(v4 + 4) = a2[3085];
    *(uint32_t *)(v4 + 80) = a2[3076];
    *(uint32_t *)(v4 + 84) = a2[3077];
    *(uint32_t *)(v4 + 88) = a2[3078];
    *(uint32_t *)(v4 + 92) = a2[3079];
    *(uint32_t *)(v4 + 96) = a2[3080];
    *(uint32_t *)(v4 + 100) = a2[3081];
    *(uint32_t *)(v4 + 104) = a2[3082];
    *(uint32_t *)(v4 + 108) = a2[3083];
    *(uint32_t *)(v4 + 12) = *(char *)(*(uint32_t *)(a3 + 16) + 16) + *(uint32_t *)(a3 + 16);
    *(uint32_t *)(v4 + 16) = *(char *)(*(uint32_t *)(a3 + 20) + 16) + *(uint32_t *)(a3 + 20);
    *(uint32_t *)(v4 + 24) = a2[3092];
    *(uint32_t *)(v4 + 28) = a2[3093];
    *(uint32_t *)(v4 + 32) = a2[3094];
    *(uint32_t *)(v4 + 36) = a2[3095];
    *(uint32_t *)(v4 + 40) = a2[3096];
    *(uint32_t *)(v4 + 20) = *(uint32_t *)(a3 + 8);
    *(uint32_t *)(v4 + 44) = a2[3097];
    *(uint32_t *)(v4 + 48) = a2[3098];
    *(uint32_t *)(v4 + 52) = a2[3099];
    *(uint32_t *)(v4 + 56) = a2[3100];
    *(uint32_t *)(v4 + 60) = a2[3101];
    *(uint32_t *)(v4 + 64) = a2[3102];
    *(uint32_t *)(v4 + 68) = a2[3103];
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideIslandNarrowPhaseContinuous  (binary VA: 0x1744480)
// Original: hkpContinuousSimulation::collideIslandNarrowPhaseContinuous
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::collideIslandNarrowPhaseContinuous(uint32_t *a1, int a2, uint32_t *a3)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint16_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[4];
  typedef uint32_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[12320];
  typedef float _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  enum : size_t {
    _g4_s0 = 12576u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v26)) > _g4_s6 ? (36u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v27)) > _g4_s7 ? (48u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v28)) > _g4_s8 ? (64u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v29)) > _g4_s9 ? (80u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (12400u + sizeof(_g4_t_v30)) > _g4_s10 ? (12400u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (12432u + sizeof(_g4_t_v31)) > _g4_s11 ? (12432u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (12436u + sizeof(_g4_t_v32)) > _g4_s12 ? (12436u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (12480u + sizeof(_g4_t_v33)) > _g4_s13 ? (12480u + sizeof(_g4_t_v33)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12400u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12432u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12436u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12480u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v21 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtNarrowPhase");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v30 = 3.40282e38f;
  v28[1] = a2;
  v27[0] = a2 + 112;
  v31 = 0;
  v27[1] = a2 + 92;
  v32 = 0;
  v20 = 0;
  while ( 2 )
  {
    v23 = 0;
    v8 = a3;
    v22 = (uint16_t *)v27[v20];
    v9 = *((uint32_t *)v22 + 2);
LABEL_5:
    while ( v23 < v9 )
    {
      v10 = v23++;
      v11 = *(uint32_t *)(*((uint32_t *)v22 + 1) + 4 * v10);
      v24 = v11 + 512;
      if ( v23 == v9 )
        v24 = *v22 + v11;
      if ( v24 > v11 )
      {
        while ( 1 )
        {
          v12 = *v8;
          v13 = *(char *)(v11 + 12) << 6;
          v26 = *(uint32_t *)(v11 + 16);
          v25 = *(uint32_t *)(v11 + 20);
          v28[0] = (uint32_t)(uintptr_t)(v29);
          v14 = v12 + v13 + 7888;
          v8[24] = v14;
          v15 = *(uint32_t *)(v14 + 16);
          v30 = 3.40282e38f;
          v8[6] = v15;
          v33 = 0;
          hkAgentNnMachine_ProcessAgent((uint8_t *)v11, (int)(uintptr_t)(v8), (int)(uintptr_t)(v28));
          if ( hkOutOfMemoryState[0] == 1 )
            goto LABEL_18;
          if ( (uint8_t *)v28[0] != v29 )
            (*(void (**)(uint32_t, int, int, uint32_t *, uint32_t *))(**(uint32_t **)(v11 + 8) + 32))(
              *(uint32_t *)(v11 + 8),
              v26,
              v25,
              v8,
              v28);
          if ( v30 == 3.40282e38f )
          {
            v11 += *(uint8_t *)(v11 + 3);
            if ( v24 <= v11 )
              goto LABEL_16;
          }
          else
          {
            hkpContinuousSimulation::addToiEvent(a1, v28, v11);
            v11 += *(uint8_t *)(v11 + 3);
            if ( v24 <= v11 )
            {
LABEL_16:
              v9 = *((uint32_t *)v22 + 2);
              goto LABEL_5;
            }
          }
        }
      }
    }
    ++v20;
    a3 = v8;
    if ( v20 != 2 )
      continue;
    break;
  }
LABEL_18:
  LODWORD(v16) = (uint32_t)(uintptr_t)(v21);
  v17 = *v21;
  v18 = *(uint32_t **)(*v21 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*v21 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("Et");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideInternal  (binary VA: 0x17446f0)
// Original: hkpContinuousSimulation::collideInternal
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::collideInternal(hkpWorld::Self **a1, float *a2)
{
  hkpContinuousSimulation::Self *v2;
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  int v8;
  int v9;
  int v10;
  hkpWorld::Self *v11;
  uint32_t *v12;
  hkpWorld::Self *v13;
  hkpWorld::Self *v14;
  hkpWorld::Self *v15;
  int v16;
  int v17;
  hkpContinuousSimulation::Self *v18;
  int v19;
  bool v20;
  uint64_t v21; // rax
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  uint64_t v29; // rax
  int v30;
  uint32_t *v31;
  uint64_t v32; // rax
  int v33;
  int v34;
  uint32_t *v35;
  int v37;
  int *v38;
  uint32_t *v39;
  hkpContinuousSimulation::Self *v40;

  v2 = (hkpContinuousSimulation::Self *)a1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v38 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtCollide");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  if ( a1[10] != nullptr )
  {
    v7 = (int)(uintptr_t)(a1[13]) - 1;
    if ( v7 >= 0 )
    {
      v8 = 112 * v7;
      do
      {
        v9 = (int)(uintptr_t)(a1[12]) + v8;
        v10 = *(uint32_t *)(v9 + 12);
        if ( *(uint8_t *)(v10 + 232) == 5 )
          v10 = *(uint32_t *)(v9 + 16);
        --v7;
        v8 -= 112;
        (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(v9 + 20) + 40))(
          *(uint32_t *)(v9 + 20),
          *(uint32_t *)(v10 + 200),
          v9 + 24);
      }
      while ( v7 != -1 );
    }
    a1[13] = nullptr;
  }
  v11 = a1[3];
  *((float *)v11 + 120) = *a2;
  *((float *)v11 + 121) = a2[1];
  *((float *)v11 + 122) = a2[2];
  *((float *)v11 + 123) = a2[3];
  v12 = *((uint32_t **)a1[3] + 28);
  v12[20] = *(uint32_t *)a2;
  v12[21] = *((uint32_t *)a2 + 1);
  v12[22] = *((uint32_t *)a2 + 2);
  v12[23] = *((uint32_t *)a2 + 3);
  v13 = a1[3];
  *((float *)v13 + 197) = *((float *)v13 + 202) * a2[2];
  *((float *)v13 + 198) = (float)*((int *)v13 + 199) * a2[3];
  ++*((uint32_t *)a1[3] + 35);
  v14 = a1[3];
  if ( *((int *)v14 + 11) > 0 )
  {
    v15 = a1[3];
    v16 = 0;
    while ( 1 )
    {
      v17 = *(uint32_t *)(*((uint32_t *)v14 + 10) + 4 * v16);
      hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous(
        (hkpContinuousSimulation::Self *)a1,
        *(hkpEntity::Self ***)(v17 + 76),
        *(uint32_t *)(v17 + 80),
        v15,
        nullptr);
      if ( hkOutOfMemoryState[0] == 1 )
      {
        v18 = (hkpContinuousSimulation::Self *)a1;
        goto LABEL_16;
      }
      if ( *((uint32_t *)v14 + 11) <= ++v16 )
        break;
      v15 = a1[3];
    }
    v2 = (hkpContinuousSimulation::Self *)a1;
    v14 = a1[3];
  }
  v20 = (*((uint32_t *)v14 + 35))-- == 1;
  if ( v20 && *((uint8_t *)v14 + 148) == 0 )
  {
    if ( *((uint32_t *)v14 + 33) != 0 )
      hkpWorld::internal_executePendingOperations(v14);
    if ( *((uint32_t *)v14 + 39) == 1 && *((uint32_t *)v14 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(v14);
  }
  ++*(uint32_t *)(*((uint32_t *)v2 + 3) + 140);
  v24 = *((uint32_t *)v2 + 3);
  if ( *(int *)(v24 + 44) <= 0 )
  {
LABEL_45:
    v20 = (*(uint32_t *)(v24 + 140))-- == 1;
    if ( v20 && *(uint8_t *)(v24 + 148) == 0 )
    {
      if ( *(uint32_t *)(v24 + 132) != 0 )
      {
        v37 = v24;
        hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v24);
        v24 = v37;
      }
      if ( *(uint32_t *)(v24 + 156) == 1 && *(uint32_t *)(v24 + 136) != 0 )
        hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v24);
    }
    LODWORD(v21) = (uint32_t)(uintptr_t)(v38);
    v34 = *v38;
    v35 = *(uint32_t **)(*v38 + 4);
    if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v38 + 12) )
    {
      *v35 = (uint32_t)(uintptr_t)("Et");
      v21 = __rdtsc();
      v35[1] = v21;
      *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
    }
  }
  else
  {
    v40 = v2;
    v25 = 0;
    v26 = *((uint32_t *)v2 + 3);
    while ( 1 )
    {
      v33 = *(uint32_t *)(*(uint32_t *)(v26 + 40) + 4 * v25);
      hkpContinuousSimulation::collideIslandNarrowPhaseContinuous((uint32_t *)(v40), v33, *(uint32_t **)(v24 + 112));
      if ( hkOutOfMemoryState[0] == 1 )
        break;
      v24 = *((uint32_t *)v40 + 3);
      if ( *(uint32_t *)(v24 + 412) != 0 )
      {
        v27 = *v38;
        v28 = *(uint32_t **)(*v38 + 4);
        v39 = v28;
        if ( (unsigned int)(uintptr_t)(v28) < *(uint32_t *)(*v38 + 12) )
        {
          *v28 = (uint32_t)(uintptr_t)("TtIslandPostCollideCb");
          v29 = __rdtsc();
          v39[1] = v29;
          *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
          v24 = *((uint32_t *)v40 + 3);
        }
        hkpWorldCallbackUtil::fireIslandPostCollideCallback(v24, v33, a2);
        v30 = *v38;
        v31 = *(uint32_t **)(*v38 + 4);
        if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*v38 + 12) )
        {
          *v31 = (uint32_t)(uintptr_t)("Et");
          v32 = __rdtsc();
          v31[1] = v32;
          *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
        }
        v24 = *((uint32_t *)v40 + 3);
      }
      if ( *(uint32_t *)(v26 + 44) <= ++v25 )
        goto LABEL_45;
    }
    v18 = v40;
LABEL_16:
    v19 = *((uint32_t *)v18 + 3);
    v20 = (*(uint32_t *)(v19 + 140))-- == 1;
    if ( v20 && *(uint8_t *)(v19 + 148) == 0 )
    {
      if ( *(uint32_t *)(v19 + 132) != 0 )
        hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v19);
      if ( *(uint32_t *)(v19 + 156) == 1 && *(uint32_t *)(v19 + 136) != 0 )
        hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v19);
    }
    LODWORD(v21) = (uint32_t)(uintptr_t)(v38);
    v22 = *v38;
    v23 = *(uint32_t **)(*v38 + 4);
    if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(*v38 + 12) )
    {
      *v23 = (uint32_t)(uintptr_t)("Et");
      v21 = __rdtsc();
      v23[1] = v21;
      *(uint32_t *)(v22 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
    }
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::processAgentCollideContinuous  (binary VA: 0x1744ae0)
// Original: hkpContinuousSimulation::processAgentCollideContinuous
// ----------------------------------------------------------------------------
void hkpContinuousSimulation::processAgentCollideContinuous(uint32_t *a1, int a2, uint32_t *a3, float *a4)
{
  int v4;

  *(uint32_t *)a4 = (uint32_t)(uintptr_t)(a4 + 4);
  a4[3084] = 3.40282e38f;
  a4[3104] = 0.0;
  v4 = *a3 + (*(char *)(a2 + 12) << 6) + 7888;
  a3[24] = v4;
  a3[6] = *(uint32_t *)(v4 + 16);
  hkAgentNnMachine_ProcessAgent((uint8_t *)a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4));
  if ( hkOutOfMemoryState[0] != 1 )
  {
    if ( a4 + 4 != *(float **)a4 )
      (*(void (**)(uint32_t, uint32_t, uint32_t, uint32_t *, float *))(**(uint32_t **)(a2 + 8) + 32))(
        *(uint32_t *)(a2 + 8),
        *(uint32_t *)(a2 + 16),
        *(uint32_t *)(a2 + 20),
        a3,
        a4);
    if ( a4[3084] != 3.40282e38f )
      hkpContinuousSimulation::addToiEvent(a1, (uint32_t *)(a4), a2);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly  (binary VA: 0x1744bd0)
// Original: hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly(uint32_t *a1, int a2, int a3, uint32_t *a4, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a5)
{
  size_t v5;
  int *v6;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int32_t v20; // kr00_4
  int v21;
  uint32_t *v22;
  uint64_t v23; // rax
  hkLifoAllocator::Self *result;
  hkLifoAllocator::Self *v25;
  hkString::Self *v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef signed int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef hkString::Self *_g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[12320];
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 12592u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_address)) > _g4_s2 ? (20u + sizeof(_g4_t_address)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v30)) > _g4_s3 ? (24u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v31)) > _g4_s4 ? (28u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v32)) > _g4_s5 ? (32u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v33)) > _g4_s6 ? (40u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v34)) > _g4_s7 ? (48u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v35)) > _g4_s8 ? (56u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v36)) > _g4_s9 ? (60u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v37)) > _g4_s10 ? (64u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v38)) > _g4_s11 ? (68u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v39)) > _g4_s12 ? (72u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v40)) > _g4_s13 ? (80u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v41)) > _g4_s14 ? (96u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (12416u + sizeof(_g4_t_v42)) > _g4_s15 ? (12416u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (12448u + sizeof(_g4_t_v43)) > _g4_s16 ? (12448u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (12452u + sizeof(_g4_t_v44)) > _g4_s17 ? (12452u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (12496u + sizeof(_g4_t_v45)) > _g4_s18 ? (12496u + sizeof(_g4_t_v45)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12416u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12448u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12452u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12496u);

  v36 = *(uint32_t *)(*(uint32_t *)a2 + 200);
  v5 = *(uint32_t *)(v36 + 80);
  if ( v5 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v25 = *address;
    v32 = (v5 + 127) & 0xFFFFFF80;
    v26 = *((hkString::Self **)*address + 3);
    if ( v32 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(v26) + v32 <= *((uint32_t *)v25 + 4) )
    {
      *((uint32_t *)v25 + 3) = (uint32_t)(uintptr_t)((char *)v26 + v32);
      v34 = v26;
    }
    else
    {
      v34 = (hkString::Self *)hkLifoAllocator::allocateFromNewSlab(v25, (v5 + 127) & 0xFFFFFF80);
    }
    v31 = (v5 + 127) & 0xFFFFFF80;
  }
  else
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v31 = 0;
    v32 = 0;
    v34 = nullptr;
  }
  hkString::memSet(v34, nullptr, v5);
  v42 = 3.40282e38f;
  v40[1] = v36;
  v43 = 0;
  v44 = 0;
  v6 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *v6;
  v30 = v6;
  v8 = *(uint32_t **)(*v6 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*v6 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtNarrowPhaseTOI");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  v33 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v35 = *(uint32_t *)(a2 + 4 * v33);
      *((uint8_t *)v34 + *(uint16_t *)(v35 + 164)) = 1;
      v37 = 0;
      v38 = 0;
      v39 = 0x80000000;
      v10 = 0;
      hkpLinkedCollidable::getCollisionEntriesSorted(v35 + 16, (int)(uintptr_t)(&v37), v27);
      v11 = v38;
      if ( v38 > 0 )
        break;
LABEL_23:
      v38 = 0;
      if ( v39 >= 0 )
      {
        v27 = (int *)(8 * v39);
        (*(void (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v37);
      }
      if ( ++v33 == a3 )
        goto LABEL_26;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (int *)(v37 + 8 * v10);
        v15 = *(char *)(v14[1] + 16) + v14[1];
        if ( v36 != *(uint32_t *)(v15 + 200) || *((uint8_t *)v34 + *(uint16_t *)(v15 + 164)) == 0 )
          break;
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      v16 = *v14;
      v17 = *(uint32_t *)(a1[3] + 120) + (*(char *)(*v14 + 12) << 6) + 7888;
      v18 = *(uint8_t *)(*(uint32_t *)(a1[3] + 120) + (*(char *)(*v14 + 12) << 6) + 7908);
      if ( *(uint32_t *)(v17 + 16) == 0 || v18 != 0 )
      {
        if ( hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
               a5,
               *(uint32_t *)(v35 + 208),
               0) == 0 )
        {
          if ( *(uint16_t *)(v35 + 6) != 0 )
          {
            do
            {
              v20 = *(uint32_t *)(v35 + 4);
              HIWORD(v19) = HIWORD(v20);
              LOWORD(v19) = 0;
            }
            while ( v20 != __sync_val_compare_and_swap(
                             (volatile int32_t *)(v35 + 4),
                             v20,
                             v19 | (uint16_t)(v20 + 1)) );
          }
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            a5,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            *(uint32_t *)(v35 + 208),
            v35);
        }
      }
      else
      {
        v42 = 3.40282e38f;
        v45 = 0;
        v12 = *(char *)(v16 + 12);
        v40[0] = (uint32_t)(uintptr_t)(v41);
        v13 = *a4 + (v12 << 6) + 7888;
        a4[24] = v13;
        a4[6] = *(uint32_t *)(v13 + 16);
        v28 = *(uint32_t *)(v16 + 8);
        hkAgentNnMachine_ProcessAgent((uint8_t *)v16, (int)(uintptr_t)(a4), (int)(uintptr_t)(v40));
        if ( hkOutOfMemoryState[0] == 1 )
        {
          v38 = 0;
          if ( v39 >= 0 )
            (*(void (**)(uint32_t *, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v37,
              8 * v39,
              v28);
          break;
        }
        if ( (uint8_t *)v40[0] != v41 )
        {
          v27 = *(int **)(v16 + 20);
          (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(v16 + 8) + 32))(
            *(uint32_t *)(v16 + 8),
            *(uint32_t *)(v16 + 16));
        }
        if ( v42 != 3.40282e38f )
        {
          hkpContinuousSimulation::addToiEvent(a1, v40, v16);
          v11 = v38;
          goto LABEL_14;
        }
      }
      v11 = v38;
LABEL_14:
      if ( ++v10 >= v11 )
        goto LABEL_23;
    }
  }
LABEL_26:
  v21 = *v30;
  v22 = *(uint32_t **)(*v30 + 4);
  if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(*v30 + 12) )
  {
    *v22 = (uint32_t)(uintptr_t)("Et");
    v23 = __rdtsc();
    v22[1] = v23;
    *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
  }
  result = *address;
  if ( *((uint32_t *)*address + 2) < v32
    || *((hkString::Self **)result + 3) != (hkString::Self *)((char *)v34 + v31)
    || v34 == *((hkString::Self **)result + 5) )
  {
    return hkLifoAllocator::slowBlockFree(*address, (char *)v34, v31);
  }
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v34);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpContinuousSimulation::processAgentNnEntries  (binary VA: 0x1745050)
// Original: hkpContinuousSimulation::processAgentNnEntries
// ----------------------------------------------------------------------------
int hkpContinuousSimulation::processAgentNnEntries(uint32_t *a1, int a2, int a3, int *a4, int a5, int a6)
{
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint64_t v15; // rax
  int v16;
  uint32_t *v17;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[4];
  typedef uint8_t _g4_t_v23[12320];
  typedef float _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 12528u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v23)) > _g4_s4 ? (32u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (12352u + sizeof(_g4_t_v24)) > _g4_s5 ? (12352u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (12384u + sizeof(_g4_t_v25)) > _g4_s6 ? (12384u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (12388u + sizeof(_g4_t_v26)) > _g4_s7 ? (12388u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (12432u + sizeof(_g4_t_v27)) > _g4_s8 ? (12432u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12352u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12384u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12388u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12432u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v19 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtNarrowPhaseTOI");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  if ( a3 > 0 )
  {
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v24 = 3.40282e38f;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v11 = *(uint32_t *)(a2 + 4 * v10);
        v22[1] = a5;
        v22[0] = (uint32_t)(uintptr_t)(v23);
        if ( a6 == 1 )
        {
          v13 = *a4;
          a4[24] = *a4 + 7952;
          v12 = *(char *)(v11 + 12);
        }
        else if ( a6 == 2 )
        {
          v13 = *a4;
          a4[24] = *a4 + 8336;
          v12 = *(char *)(v11 + 12);
          if ( (uint8_t)v12 == 6 )
          {
            a4[24] = v13 + 8272;
            v12 = *(char *)(v11 + 12);
          }
        }
        else if ( a6 != 0 )
        {
          v12 = *(char *)(v11 + 12);
          v13 = *a4;
        }
        else
        {
          v13 = *a4;
          a4[24] = *a4 + (*(char *)(v11 + 12) << 6) + 7888;
          v12 = *(char *)(v11 + 12);
        }
        v20 = v10;
        a4[6] = *(uint32_t *)(v13 + (v12 << 6) + 7904);
        hkAgentNnMachine_ProcessAgent((uint8_t *)v11, (int)(uintptr_t)(a4), (int)(uintptr_t)(v22));
        v14 = v20;
        if ( (uint8_t *)v22[0] != v23 )
        {
          (*(void (**)(uint32_t, uint32_t, uint32_t, int *, uint32_t *))(**(uint32_t **)(v11 + 8) + 32))(
            *(uint32_t *)(v11 + 8),
            *(uint32_t *)(v11 + 16),
            *(uint32_t *)(v11 + 20),
            a4,
            v22);
          v14 = v20;
        }
        if ( v24 != 3.40282e38f )
          break;
        v10 = v14 + 1;
        if ( v10 == a3 )
          goto LABEL_14;
      }
      v21 = v14;
      hkpContinuousSimulation::addToiEvent(a1, v22, v11);
      v10 = v21 + 1;
    }
    while ( v21 + 1 != a3 );
  }
LABEL_14:
  LODWORD(v15) = (uint32_t)(uintptr_t)(v19);
  v16 = *v19;
  v17 = *(uint32_t **)(*v19 + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*v19 + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v17[1] = v15;
    *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  return v15;
}



// ============================================================================
// Address:   0x1747200 (size: 2739 bytes)
// Symbol:    _ZN23hkpContinuousSimulation11simulateToiEP8hkpWorldR11hkpToiEventff
// Demangled: hkpContinuousSimulation::simulateToi(hkpWorld *,hkpToiEvent &,float,float)
// ============================================================================

