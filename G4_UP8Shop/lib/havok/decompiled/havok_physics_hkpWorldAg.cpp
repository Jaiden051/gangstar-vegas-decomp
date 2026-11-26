#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldAg.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldAgentUtil::getIslandFromAgentEntry  (binary VA: 0x175b240)
// Original: hkpWorldAgentUtil::getIslandFromAgentEntry
// ----------------------------------------------------------------------------
int hkpWorldAgentUtil::getIslandFromAgentEntry(unsigned int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v9;
  unsigned int v10;
  char v11;
  bool v12;
  int result;

  if ( *(uint8_t *)(a1 + 14) == 2 )
  {
    v3 = a2 + 112;
    v4 = a3 + 112;
  }
  else
  {
    v3 = a2 + 92;
    v4 = a3 + 92;
  }
  v5 = *(uint32_t *)(v4 + 8);
  v6 = *(uint32_t *)(v3 + 8);
  v7 = v6 <= v5;
  if ( v6 > v5 )
    v6 = *(uint32_t *)(v4 + 8);
  if ( v7 != 0 )
    v4 = v3;
  if ( v6 <= 0 )
  {
LABEL_13:
    v11 = 0;
  }
  else
  {
    v8 = *(uint32_t *)(v4 + 4);
    v9 = 0;
    while ( 1 )
    {
      v10 = *(uint32_t *)(v8 + 4 * v9);
      if ( a1 >= v10 && a1 < v10 + 512 )
        break;
      if ( ++v9 == v6 )
        goto LABEL_13;
    }
    v11 = 1;
  }
  v12 = v7 == v11;
  result = a3;
  if ( v12 )
    return a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldAgentUtil::removeAgent  (binary VA: 0x175b540)
// Original: hkpWorldAgentUtil::removeAgent
// ----------------------------------------------------------------------------
int hkpWorldAgentUtil::removeAgent(unsigned int a1)
{
  int v1;
  int v2;
  int IslandFromAgentEntry;
  int v4;
  uint16_t *v5;
  uint16_t *v6;
  int v7;
  int v9;

  v1 = *(uint32_t *)(a1 + 16) + *(char *)(*(uint32_t *)(a1 + 16) + 16);
  v2 = *(char *)(*(uint32_t *)(a1 + 20) + 16) + *(uint32_t *)(a1 + 20);
  IslandFromAgentEntry = *(uint32_t *)(v2 + 200);
  if ( *(uint32_t *)(v1 + 200) == IslandFromAgentEntry )
  {
    *(uint8_t *)(IslandFromAgentEntry + 37) = *(uint8_t *)(IslandFromAgentEntry + 37) & 0xFC | 1;
  }
  else if ( *(uint8_t *)(v1 + 232) != 5 )
  {
    if ( *(uint8_t *)(v2 + 232) == 5 )
    {
      IslandFromAgentEntry = *(uint32_t *)(v1 + 200);
    }
    else
    {
      IslandFromAgentEntry = hkpWorldAgentUtil::getIslandFromAgentEntry(a1, *(uint32_t *)(v1 + 200), IslandFromAgentEntry);
      *(uint8_t *)(*(uint32_t *)(v1 + 200) + 37) = *(uint8_t *)(*(uint32_t *)(v1 + 200) + 37) & 0xFC | 1;
      *(uint8_t *)(*(uint32_t *)(v2 + 200) + 37) = *(uint8_t *)(*(uint32_t *)(v2 + 200) + 37) & 0xFC | 1;
    }
  }
  v4 = *(uint32_t *)(a1 + 8);
  v5 = (uint16_t *)(IslandFromAgentEntry + 92);
  v6 = (uint16_t *)(IslandFromAgentEntry + 112);
  v9 = IslandFromAgentEntry;
  v7 = *(uint32_t *)(IslandFromAgentEntry + 24);
  if ( *(uint8_t *)(a1 + 14) != 2 )
    v6 = v5;
  hkAgentNnMachine_DestroyAgent(v6, a1, *(uint32_t *)(v7 + 120), v9);
  return G4_VCALL<int>(v4, 44);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldAgentUtil::removeAgentAndItsToiEvents  (binary VA: 0x175b620)
// Original: hkpWorldAgentUtil::removeAgentAndItsToiEvents
// ----------------------------------------------------------------------------
int hkpWorldAgentUtil::removeAgentAndItsToiEvents(unsigned int a1)
{
  (*(void (**)(uint32_t, unsigned int))(**(uint32_t **)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 16)
                                                                                  + *(char *)(*(uint32_t *)(a1 + 16) + 16)
                                                                                  + 200)
                                                                      + 24)
                                                          + 8)
                                            + 64))(
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 16) + *(char *)(*(uint32_t *)(a1 + 16) + 16) + 200) + 24) + 8),
    a1);
  return hkpWorldAgentUtil::removeAgent(a1);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldAgentUtil::updateEntityShapeCollectionFilter  (binary VA: 0x175b670)
// Original: hkpWorldAgentUtil::updateEntityShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpWorldAgentUtil::updateEntityShapeCollectionFilter(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v10)) > _g4_s1 ? (36u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v13)) > _g4_s4 ? (52u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v14)) > _g4_s5 ? (56u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);

  v2 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0x80000000;
  hkpLinkedCollidable::getCollisionEntriesSorted(a1 + 16, (int)(uintptr_t)(&v12), v9);
  v3 = v13;
  if ( v13 > 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v12 + 8 * v2);
      if ( *(uint32_t *)(*a2 + (*(uint8_t *)(v5 + 1) << 6) + 6648) != 0 )
      {
        v6 = *(uint32_t *)(v5 + 16);
        v11 = *(uint32_t *)(v5 + 20);
        v7 = v6 + *(char *)(v6 + 16);
        if ( *(uint8_t *)(v7 + 232) == 5 )
          v10 = *(uint32_t *)(v11 + *(char *)(v11 + 16) + 200);
        else
          v10 = *(uint32_t *)(v7 + 200);
        v4 = v5 + 48;
        if ( *(uint8_t *)v5 != 4 )
          v4 = v5 + 32;
        (*(void (**)(int, int, int, int, uint32_t *, uint32_t, int))(*a2 + (*(uint8_t *)(v5 + 1) << 6) + 6648))(
          v5,
          v4,
          v6,
          v11,
          a2,
          *(uint32_t *)(v5 + 8),
          v10);
        v3 = v13;
      }
      ++v2;
    }
    while ( v2 < v3 );
  }
  result = v14;
  v13 = 0;
  if ( v14 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v12,
             8 * v14);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldAgentUtil::invalidateTim  (binary VA: 0x175b7b0)
// Original: hkpWorldAgentUtil::invalidateTim
// ----------------------------------------------------------------------------
int hkpWorldAgentUtil::invalidateTim(int a1, uint32_t *a2)
{
  int i;
  int v3;
  int result;

  for ( i = 0; *(uint32_t *)(a1 + 100) > i; result = hkAgentNnMachine_InvalidateTimInAgent(v3, a2) )
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 96) + 8 * i++);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldAgentUtil::warpTime  (binary VA: 0x175b810)
// Original: hkpWorldAgentUtil::warpTime
// ----------------------------------------------------------------------------
int hkpWorldAgentUtil::warpTime(int a1, int64_t a2, uint32_t *a3)
{
  int v3;
  int result;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;

  v12 = 0;
  v3 = *(uint32_t *)(a1 + 120);
  while ( 1 )
  {
    result = a1;
    if ( v12 >= v3 )
      break;
    while ( 1 )
    {
      v5 = v12++;
      v6 = *(uint32_t *)(*(uint32_t *)(result + 116) + 4 * v5);
      v7 = v6 + 512;
      if ( v12 == v3 )
        v7 = v6 + *(uint16_t *)(a1 + 112);
      if ( v7 <= v6 )
        break;
      do
      {
        hkAgentNnMachine_WarpTimeInAgent(v6, a2, a3);
        v6 += *(uint8_t *)(v6 + 3);
      }
      while ( v7 > v6 );
      v3 = *(uint32_t *)(a1 + 120);
      result = a1;
      if ( v12 >= v3 )
        goto LABEL_8;
    }
  }
LABEL_8:
  v8 = *(uint32_t *)(result + 100);
  v13 = 0;
  while ( v13 < v8 )
  {
    while ( 1 )
    {
      v9 = v13++;
      result = *(uint32_t *)(a1 + 96);
      v10 = *(uint32_t *)(result + 4 * v9);
      v11 = v10 + 512;
      if ( v13 == v8 )
      {
        result = a1;
        v11 = v10 + *(uint16_t *)(a1 + 92);
      }
      if ( v11 <= v10 )
        break;
      do
      {
        hkAgentNnMachine_WarpTimeInAgent(v10, a2, a3);
        v10 += *(uint8_t *)(v10 + 3);
      }
      while ( v11 > v10 );
      result = a1;
      v8 = *(uint32_t *)(a1 + 100);
      if ( v13 >= v8 )
        return result;
    }
  }
  return result;
}


