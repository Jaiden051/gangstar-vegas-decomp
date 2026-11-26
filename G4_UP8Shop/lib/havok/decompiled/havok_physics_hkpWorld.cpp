#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorld.h"

// ----------------------------------------------------------------------------
// Function: hkpWorld::staticClass  (binary VA: 0x172b610)
// Original: hkpWorld::staticClass
// ----------------------------------------------------------------------------
void * hkpWorld::staticClass()
{
  return &hkpWorldClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::Construct  (binary VA: 0x1733680)
// Original: hkpWorld::hkpWorld
// ----------------------------------------------------------------------------
int hkpWorld::Construct(int a1)
{
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209F140);
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0x80000000;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0x80000000;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0x80000000;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 160) = -15;
  *(uint16_t *)(a1 + 168) = 0x8000;
  *(uint32_t *)(a1 + 288) = 0;
  *(uint32_t *)(a1 + 292) = 0;
  *(uint32_t *)(a1 + 296) = 0x80000000;
  *(uint32_t *)(a1 + 300) = 0;
  *(uint32_t *)(a1 + 304) = 0;
  *(uint32_t *)(a1 + 308) = 0x80000000;
  *(uint32_t *)(a1 + 312) = 0;
  *(uint32_t *)(a1 + 316) = 0;
  *(uint32_t *)(a1 + 320) = 0x80000000;
  *(uint32_t *)(a1 + 324) = 0;
  *(uint32_t *)(a1 + 328) = 0;
  *(uint32_t *)(a1 + 332) = 0x80000000;
  *(uint32_t *)(a1 + 336) = 0;
  *(uint32_t *)(a1 + 340) = 0;
  *(uint32_t *)(a1 + 344) = 0x80000000;
  *(uint32_t *)(a1 + 348) = 0;
  *(uint32_t *)(a1 + 352) = 0;
  *(uint32_t *)(a1 + 356) = 0x80000000;
  *(uint32_t *)(a1 + 360) = 0;
  *(uint32_t *)(a1 + 364) = 0;
  *(uint32_t *)(a1 + 368) = 0x80000000;
  *(uint32_t *)(a1 + 372) = 0;
  *(uint32_t *)(a1 + 376) = 0;
  *(uint32_t *)(a1 + 380) = 0x80000000;
  *(uint32_t *)(a1 + 384) = 0;
  *(uint32_t *)(a1 + 388) = 0;
  *(uint32_t *)(a1 + 392) = 0x80000000;
  *(uint32_t *)(a1 + 396) = 0;
  *(uint32_t *)(a1 + 400) = 0;
  *(uint32_t *)(a1 + 404) = 0x80000000;
  *(uint32_t *)(a1 + 408) = 0;
  *(uint32_t *)(a1 + 412) = 0;
  *(uint32_t *)(a1 + 416) = 0x80000000;
  *(uint32_t *)(a1 + 420) = 0;
  *(uint32_t *)(a1 + 424) = 0;
  *(uint32_t *)(a1 + 428) = 0x80000000;
  *(uint32_t *)(a1 + 432) = 0;
  *(uint32_t *)(a1 + 436) = 0;
  *(uint32_t *)(a1 + 440) = 0x80000000;
  *(uint32_t *)(a1 + 444) = 0;
  *(uint32_t *)(a1 + 448) = 0;
  *(uint32_t *)(a1 + 452) = 0x80000000;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::attachActionToEntity  (binary VA: 0x17338a0)
// Original: hkpWorld::attachActionToEntity
// ----------------------------------------------------------------------------
int hkpWorld::attachActionToEntity(hkpWorld::Self *self, hkpAction::Self *a2, hkpEntity::Self *a3)
{
  int v3;
  int v4;
  int result;
  hkpEntity::Self *v6;
  hkpEntity::Self *v7;

  v3 = *((uint16_t *)a3 + 262);
  if ( (uint16_t)v3 == (*((uint16_t *)a3 + 263) & 0x3FFF) )
  {
    hkSmallArrayUtil::reserveMore((hkpEntity::Self *)((char *)a3 + 520), &loc_4, (int)(uintptr_t)(v6));
    v3 = *((uint16_t *)a3 + 262);
  }
  v4 = *((uint32_t *)a3 + 130);
  *((uint16_t *)a3 + 262) = v3 + 1;
  *(uint32_t *)(v4 + 4 * v3) = (uint32_t)(uintptr_t)(a2);
  result = *((uint32_t *)a2 + 3);
  if ( *(uint16_t *)(result + 32) == 0xFFFF && *((uint8_t *)a3 + 232) != 5 )
  {
    hkpSimulationIsland::removeAction((hkpSimulationIsland::Self *)result, a2);
    return hkpSimulationIsland::addAction(*((hkpSimulationIsland::Self **)a3 + 50), a2);
  }
  else if ( result != *((uint32_t *)a3 + 50) && *((uint8_t *)a3 + 232) != 5 )
  {
    return (int)(uintptr_t)(hkpWorldOperationUtil::mergeIslands(self, a3, **(hkpEntity::Self ***)(result + 76), v7));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::detachActionFromEntity  (binary VA: 0x1733980)
// Original: hkpWorld::detachActionFromEntity
// ----------------------------------------------------------------------------
int hkpWorld::detachActionFromEntity(hkpWorld::Self *self, hkpSimulationIsland::Self **a2, hkpEntity::Self *a3, int a4, int a5, int a6)
{
  hkpAction::Self **v6;
  uint16_t v7;
  int v8;
  hkpAction::Self **v9;
  hkpAction::Self **v10;
  int v11;
  int v12;
  int v13;
  hkpSimulationIsland::Self *v14;
  hkpEntity::Self *v15;
  int result;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  v6 = *((hkpAction::Self ***)a3 + 130);
  v7 = *((uint16_t *)a3 + 262);
  v8 = v7;
  HIWORD(v22) = v7;
  v9 = v6 - 1;
  if ( v7 != 0 )
  {
    if ( *v6 == (hkpAction::Self *)a2 )
    {
      v9 = *((hkpAction::Self ***)a3 + 130);
    }
    else
    {
      v10 = v6 + 1;
      v21 = *((uint32_t *)a3 + 130);
      v11 = 0;
      do
      {
        if ( ++v11 >= v8 )
        {
          v6 = *((hkpAction::Self ***)a3 + 130);
          v9 = (hkpAction::Self **)(v21 - 4);
          goto LABEL_7;
        }
        v9 = v10++;
      }
      while ( *(v10 - 1) != (hkpAction::Self *)a2 );
      v6 = *((hkpAction::Self ***)a3 + 130);
    }
  }
LABEL_7:
  *((uint16_t *)a3 + 262) = HIWORD(v22) - 1;
  *v9 = v6[(uint16_t)(HIWORD(v22) - 1)];
  v12 = *((uint32_t *)a3 + 50);
  v23[1] = 0;
  v23[2] = -2147483644;
  *(uint8_t *)(v12 + 37) = *(uint8_t *)(v12 + 37) & 0xFC | 1;
  v23[0] = (uint32_t)(uintptr_t)(&v24);
  (*((void (**)(hkpSimulationIsland::Self **, uint32_t *, int, int, int, int, int, int))*a2 + 6))(
    a2,
    v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( a5 <= 0 )
  {
    v14 = nullptr;
  }
  else
  {
    v13 = 0;
    v14 = nullptr;
    do
    {
      v15 = *(hkpEntity::Self **)(a4 + 4 * v13);
      if ( a3 != v15 )
      {
        v14 = *((hkpSimulationIsland::Self **)v15 + 50);
        if ( *((uint16_t *)v14 + 16) != 0xFFFF )
          break;
      }
      ++v13;
    }
    while ( v13 != a5 );
  }
  if ( v14 != a2[3] )
  {
    hkpSimulationIsland::removeAction(a2[3], (hkpAction::Self *)a2);
    hkpSimulationIsland::addAction(v14, (hkpAction::Self *)a2);
  }
  result = a6;
  if ( a6 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             a4,
             4 * a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setGravity  (binary VA: 0x1733b00)
// Original: hkpWorld::setGravity
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::setGravity(hkpWorld::Self *self, const hkVector4f::Self *a2)
{
  *((uint32_t *)self + 4) = *(uint32_t *)a2;
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addActionListener  (binary VA: 0x1733b20)
// Original: hkpWorld::addActionListener
// ----------------------------------------------------------------------------
int hkpWorld::addActionListener(hkpWorld::Self *self, hkpActionListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 73);
  if ( v2 == (*((uint32_t *)self + 74) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorld::Self *)((char *)self + 288),
      4,
      v4);
    v2 = *((uint32_t *)self + 73);
  }
  result = *((uint32_t *)self + 72);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 73);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeActionListener  (binary VA: 0x1733b90)
// Original: hkpWorld::removeActionListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeActionListener(hkpWorld::Self *self, hkpActionListener::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  hkpActionListener::Self **v4;
  int v5;
  hkpWorld::Self *v6;

  result = self;
  v3 = *((uint32_t *)self + 73);
  if ( v3 <= 0 )
  {
    v6 = (hkpWorld::Self *)(*((uint32_t *)self + 72) - 4);
  }
  else
  {
    v4 = *((hkpActionListener::Self ***)self + 72);
    if ( *v4 == a2 )
    {
      v6 = *((hkpWorld::Self **)self + 72);
    }
    else
    {
      v5 = 0;
      result = (hkpWorld::Self *)(v4 + 1);
      while ( ++v5 != v3 )
      {
        v6 = result;
        result = (hkpWorld::Self *)((char *)result + 4);
        if ( *((hkpActionListener::Self **)result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = (hkpWorld::Self *)(v4 - 1);
    }
  }
LABEL_7:
  *(uint32_t *)v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addConstraintListener  (binary VA: 0x1733bf0)
// Original: hkpWorld::addConstraintListener
// ----------------------------------------------------------------------------
int hkpWorld::addConstraintListener(hkpWorld::Self *self, hkpConstraintListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 82);
  if ( v2 == (*((uint32_t *)self + 83) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorld::Self *)((char *)self + 324),
      4,
      v4);
    v2 = *((uint32_t *)self + 82);
  }
  result = *((uint32_t *)self + 81);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 82);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeConstraintListener  (binary VA: 0x1733c60)
// Original: hkpWorld::removeConstraintListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeConstraintListener(hkpWorld::Self *self, hkpConstraintListener::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  hkpConstraintListener::Self **v4;
  int v5;
  hkpWorld::Self *v6;

  result = self;
  v3 = *((uint32_t *)self + 82);
  if ( v3 <= 0 )
  {
    v6 = (hkpWorld::Self *)(*((uint32_t *)self + 81) - 4);
  }
  else
  {
    v4 = *((hkpConstraintListener::Self ***)self + 81);
    if ( *v4 == a2 )
    {
      v6 = *((hkpWorld::Self **)self + 81);
    }
    else
    {
      v5 = 0;
      result = (hkpWorld::Self *)(v4 + 1);
      while ( ++v5 != v3 )
      {
        v6 = result;
        result = (hkpWorld::Self *)((char *)result + 4);
        if ( *((hkpConstraintListener::Self **)result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = (hkpWorld::Self *)(v4 - 1);
    }
  }
LABEL_7:
  *(uint32_t *)v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addEntityListener  (binary VA: 0x1733cc0)
// Original: hkpWorld::addEntityListener
// ----------------------------------------------------------------------------
int hkpWorld::addEntityListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[76];
  if ( v2 == (a1[77] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 75), 4, v4);
    v2 = a1[76];
  }
  result = a1[75];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[76];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeEntityListener  (binary VA: 0x1733d30)
// Original: hkpWorld::removeEntityListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeEntityListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[76];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[75] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[75];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[75];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addPhantomListener  (binary VA: 0x1733d90)
// Original: hkpWorld::addPhantomListener
// ----------------------------------------------------------------------------
int hkpWorld::addPhantomListener(hkpWorld::Self *self, hkpPhantomListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 79);
  if ( v2 == (*((uint32_t *)self + 80) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorld::Self *)((char *)self + 312),
      4,
      v4);
    v2 = *((uint32_t *)self + 79);
  }
  result = *((uint32_t *)self + 78);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 79);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removePhantomListener  (binary VA: 0x1733e00)
// Original: hkpWorld::removePhantomListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removePhantomListener(hkpWorld::Self *self, hkpPhantomListener::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  hkpPhantomListener::Self **v4;
  int v5;
  hkpWorld::Self *v6;

  result = self;
  v3 = *((uint32_t *)self + 79);
  if ( v3 <= 0 )
  {
    v6 = (hkpWorld::Self *)(*((uint32_t *)self + 78) - 4);
  }
  else
  {
    v4 = *((hkpPhantomListener::Self ***)self + 78);
    if ( *v4 == a2 )
    {
      v6 = *((hkpWorld::Self **)self + 78);
    }
    else
    {
      v5 = 0;
      result = (hkpWorld::Self *)(v4 + 1);
      while ( ++v5 != v3 )
      {
        v6 = result;
        result = (hkpWorld::Self *)((char *)result + 4);
        if ( *((hkpPhantomListener::Self **)result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = (hkpWorld::Self *)(v4 - 1);
    }
  }
LABEL_7:
  *(uint32_t *)v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addIslandActivationListener  (binary VA: 0x1733e60)
// Original: hkpWorld::addIslandActivationListener
// ----------------------------------------------------------------------------
int hkpWorld::addIslandActivationListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[88];
  if ( v2 == (a1[89] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 87), 4, v4);
    v2 = a1[88];
  }
  result = a1[87];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[88];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeIslandActivationListener  (binary VA: 0x1733ed0)
// Original: hkpWorld::removeIslandActivationListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeIslandActivationListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[88];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[87] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[87];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[87];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addWorldPostCollideListener  (binary VA: 0x1733f30)
// Original: hkpWorld::addWorldPostCollideListener
// ----------------------------------------------------------------------------
int hkpWorld::addWorldPostCollideListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[97];
  if ( v2 == (a1[98] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 96), 4, v4);
    v2 = a1[97];
  }
  result = a1[96];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[97];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeWorldPostCollideListener  (binary VA: 0x1733fa0)
// Original: hkpWorld::removeWorldPostCollideListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeWorldPostCollideListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[97];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[96] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[96];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[96];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addWorldPostSimulationListener  (binary VA: 0x1734000)
// Original: hkpWorld::addWorldPostSimulationListener
// ----------------------------------------------------------------------------
int hkpWorld::addWorldPostSimulationListener(hkpWorld::Self *self, hkpWorldPostSimulationListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 91);
  if ( v2 == (*((uint32_t *)self + 92) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorld::Self *)((char *)self + 360),
      4,
      v4);
    v2 = *((uint32_t *)self + 91);
  }
  result = *((uint32_t *)self + 90);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 91);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeWorldPostSimulationListener  (binary VA: 0x1734070)
// Original: hkpWorld::removeWorldPostSimulationListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeWorldPostSimulationListener(hkpWorld::Self *self, hkpWorldPostSimulationListener::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  hkpWorldPostSimulationListener::Self **v4;
  int v5;
  hkpWorld::Self *v6;

  result = self;
  v3 = *((uint32_t *)self + 91);
  if ( v3 <= 0 )
  {
    v6 = (hkpWorld::Self *)(*((uint32_t *)self + 90) - 4);
  }
  else
  {
    v4 = *((hkpWorldPostSimulationListener::Self ***)self + 90);
    if ( *v4 == a2 )
    {
      v6 = *((hkpWorld::Self **)self + 90);
    }
    else
    {
      v5 = 0;
      result = (hkpWorld::Self *)(v4 + 1);
      while ( ++v5 != v3 )
      {
        v6 = result;
        result = (hkpWorld::Self *)((char *)result + 4);
        if ( *((hkpWorldPostSimulationListener::Self **)result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = (hkpWorld::Self *)(v4 - 1);
    }
  }
LABEL_7:
  *(uint32_t *)v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addWorldPostIntegrateListener  (binary VA: 0x17340d0)
// Original: hkpWorld::addWorldPostIntegrateListener
// ----------------------------------------------------------------------------
int hkpWorld::addWorldPostIntegrateListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[94];
  if ( v2 == (a1[95] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 93), 4, v4);
    v2 = a1[94];
  }
  result = a1[93];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[94];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeWorldPostIntegrateListener  (binary VA: 0x1734140)
// Original: hkpWorld::removeWorldPostIntegrateListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeWorldPostIntegrateListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[94];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[93] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[93];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[93];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addIslandPostCollideListener  (binary VA: 0x17341a0)
// Original: hkpWorld::addIslandPostCollideListener
// ----------------------------------------------------------------------------
int hkpWorld::addIslandPostCollideListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[103];
  if ( v2 == (a1[104] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 102), 4, v4);
    v2 = a1[103];
  }
  result = a1[102];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[103];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeIslandPostCollideListener  (binary VA: 0x1734210)
// Original: hkpWorld::removeIslandPostCollideListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeIslandPostCollideListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[103];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[102] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[102];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[102];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addIslandPostIntegrateListener  (binary VA: 0x1734270)
// Original: hkpWorld::addIslandPostIntegrateListener
// ----------------------------------------------------------------------------
int hkpWorld::addIslandPostIntegrateListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[100];
  if ( v2 == (a1[101] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 99), 4, v4);
    v2 = a1[100];
  }
  result = a1[99];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[100];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeIslandPostIntegrateListener  (binary VA: 0x17342e0)
// Original: hkpWorld::removeIslandPostIntegrateListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeIslandPostIntegrateListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[100];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[99] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[99];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[99];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addContactListener  (binary VA: 0x1734340)
// Original: hkpWorld::addContactListener
// ----------------------------------------------------------------------------
int hkpWorld::addContactListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[106];
  if ( v2 == (a1[107] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 105), 4, v4);
    v2 = a1[106];
  }
  result = a1[105];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[106];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeContactListener  (binary VA: 0x17343b0)
// Original: hkpWorld::removeContactListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeContactListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[106];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[105] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[105];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[105];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addWorldDeletionListener  (binary VA: 0x1734410)
// Original: hkpWorld::addWorldDeletionListener
// ----------------------------------------------------------------------------
int hkpWorld::addWorldDeletionListener(hkpWorld::Self *self, hkpWorldDeletionListener::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 85);
  if ( v2 == (*((uint32_t *)self + 86) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorld::Self *)((char *)self + 336),
      4,
      v4);
    v2 = *((uint32_t *)self + 85);
  }
  result = *((uint32_t *)self + 84);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 85);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeWorldDeletionListener  (binary VA: 0x1734480)
// Original: hkpWorld::removeWorldDeletionListener
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeWorldDeletionListener(hkpWorld::Self *self, hkpWorldDeletionListener::Self *a2)
{
  hkpWorld::Self *result;
  int v3;
  hkpWorldDeletionListener::Self **v4;
  int v5;
  hkpWorld::Self *v6;

  result = self;
  v3 = *((uint32_t *)self + 85);
  if ( v3 <= 0 )
  {
    v6 = (hkpWorld::Self *)(*((uint32_t *)self + 84) - 4);
  }
  else
  {
    v4 = *((hkpWorldDeletionListener::Self ***)self + 84);
    if ( *v4 == a2 )
    {
      v6 = *((hkpWorld::Self **)self + 84);
    }
    else
    {
      v5 = 0;
      result = (hkpWorld::Self *)(v4 + 1);
      while ( ++v5 != v3 )
      {
        v6 = result;
        result = (hkpWorld::Self *)((char *)result + 4);
        if ( *((hkpWorldDeletionListener::Self **)result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = (hkpWorld::Self *)(v4 - 1);
    }
  }
LABEL_7:
  *(uint32_t *)v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addContactImpulseLimitBreachedListener  (binary VA: 0x17344e0)
// Original: hkpWorld::addContactImpulseLimitBreachedListener
// ----------------------------------------------------------------------------
int hkpWorld::addContactImpulseLimitBreachedListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[109];
  if ( v2 == (a1[110] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 108), 4, v4);
    v2 = a1[109];
  }
  result = a1[108];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[109];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeContactImpulseLimitBreachedListener  (binary VA: 0x1734550)
// Original: hkpWorld::removeContactImpulseLimitBreachedListener
// ----------------------------------------------------------------------------
uint32_t * hkpWorld::removeContactImpulseLimitBreachedListener(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = a1;
  v3 = a1[109];
  if ( v3 <= 0 )
  {
    v6 = (uint32_t *)(a1[108] - 4);
  }
  else
  {
    v4 = (uint32_t *)a1[108];
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)a1[108];
    }
    else
    {
      v5 = 0;
      result = v4 + 1;
      while ( ++v5 != v3 )
      {
        v6 = result++;
        if ( *(result - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v4 - 1;
    }
  }
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addWorldExtension  (binary VA: 0x17345b0)
// Original: hkpWorld::addWorldExtension
// ----------------------------------------------------------------------------
int hkpWorld::addWorldExtension(hkpWorld::Self *self, hkpWorldExtension::Self *a2)
{
  int v2;
  int v3;
  int v5;
  int32_t v6; // kr00_4
  int v7;

  v2 = *((uint32_t *)self + 112);
  if ( v2 == (*((uint32_t *)self + 113) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpWorld::Self *)((char *)self + 444),
      4,
      v7);
    v2 = *((uint32_t *)self + 112);
  }
  *(uint32_t *)(*((uint32_t *)self + 111) + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 112);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v6 = *((uint32_t *)a2 + 1);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v6, v5 | (uint16_t)(v6 + 1)) );
  }
  v3 = *(uint32_t *)a2;
  *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(self);
  return (*(int (**)(hkpWorldExtension::Self *, hkpWorld::Self *))(v3 + 20))(a2, self);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeWorldExtension  (binary VA: 0x1734660)
// Original: hkpWorld::removeWorldExtension
// ----------------------------------------------------------------------------
int hkpWorld::removeWorldExtension(hkpWorld::Self *self, hkpWorldExtension::Self *a2)
{
  int v2;
  hkpWorldExtension::Self **v3;
  int v4;
  bool v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int result;

  v2 = *((uint32_t *)self + 112);
  if ( v2 > 0 )
  {
    v3 = *((hkpWorldExtension::Self ***)self + 111);
    v4 = 0;
    if ( *v3 == a2 )
      goto LABEL_7;
    while ( ++v4 != v2 )
    {
      if ( v3[v4] == a2 )
        goto LABEL_7;
    }
  }
  v4 = -1;
LABEL_7:
  G4_VCALL<void>(a2, 24, self);
  v5 = *((uint16_t *)a2 + 3) == 0;
  *((uint32_t *)a2 + 2) = 0;
  if ( !v5 )
  {
    do
    {
      v7 = *((uint32_t *)a2 + 1);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v9, v8) );
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(a2, 16);
  }
  v10 = *((uint32_t *)self + 111);
  result = *((uint32_t *)self + 112) - 1;
  *((uint32_t *)self + 112) = result;
  if ( v4 != result )
  {
    result = *(uint32_t *)(v10 + 4 * result);
    *(uint32_t *)(v10 + 4 * v4) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::findWorldExtension  (binary VA: 0x1734720)
// Original: hkpWorld::findWorldExtension
// ----------------------------------------------------------------------------
int hkpWorld::findWorldExtension(hkpWorld::Self *self, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;

  v2 = *((uint32_t *)self + 112);
  if ( v2 > 0 )
  {
    v3 = *((int **)self + 111);
    result = *v3;
    if ( *(uint32_t *)(*v3 + 12) == a2 )
      return result;
    v5 = 0;
    while ( ++v5 != v2 )
    {
      result = v3[v5];
      if ( *(uint32_t *)(result + 12) == a2 )
        return result;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getCurrentTime  (binary VA: 0x1734760)
// Original: hkpWorld::getCurrentTime
// ----------------------------------------------------------------------------
long double hkpWorld::getCurrentTime(hkpWorld::Self *self)
{
  return *(float *)(*((uint32_t *)self + 2) + 20);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getCurrentPsiTime  (binary VA: 0x1734780)
// Original: hkpWorld::getCurrentPsiTime
// ----------------------------------------------------------------------------
long double hkpWorld::getCurrentPsiTime(hkpWorld::Self *self)
{
  return *(float *)(*((uint32_t *)self + 2) + 24);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setFrameTimeMarker  (binary VA: 0x17347a0)
// Original: hkpWorld::setFrameTimeMarker
// ----------------------------------------------------------------------------
int hkpWorld::setFrameTimeMarker(hkpSimulation::Self **self, float a2)
{
  return (int)(uintptr_t)(hkpSimulation::setFrameTimeMarker(*(self + 2), a2));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::isSimulationAtMarker  (binary VA: 0x17347e0)
// Original: hkpWorld::isSimulationAtMarker
// ----------------------------------------------------------------------------
int hkpWorld::isSimulationAtMarker(hkpSimulation::Self **self)
{
  return hkpSimulation::isSimulationAtMarker(*(self + 2));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::isSimulationAtPsi  (binary VA: 0x1734810)
// Original: hkpWorld::isSimulationAtPsi
// ----------------------------------------------------------------------------
int hkpWorld::isSimulationAtPsi(hkpSimulation::Self **self)
{
  return hkpSimulation::isSimulationAtPsi(*(self + 2));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::finishMtStep  (binary VA: 0x1734840)
// Original: hkpWorld::finishMtStep
// ----------------------------------------------------------------------------
int hkpWorld::finishMtStep(int a1, int a2, int a3)
{
  int v3;

  v3 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 40))(*(uint32_t *)(a1 + 8), a2, a3);
  if ( v3 == 0 )
  {
    if ( (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 20))(*(uint32_t *)(a1 + 88)) == 2 )
    {
      G4_MEM_CALL((uintptr_t)(hkpBroadPhase::s_updateTreeBroadPhaseFunction), *(uint32_t *)(a1 + 88), *(uint32_t *)(*(uint32_t *)(a1 + 8) + 28));
    }
    else if ( (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 88) + 20))(*(uint32_t *)(a1 + 88)) == 3 )
    {
      hkpBroadPhase::s_updateTreeBroadPhaseFunction32(*(uint32_t *)(a1 + 88), *(uint32_t *)(*(uint32_t *)(a1 + 8) + 28));
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getMultithreadConfig  (binary VA: 0x17348f0)
// Original: hkpWorld::getMultithreadConfig
// ----------------------------------------------------------------------------
int hkpWorld::getMultithreadConfig(hkpWorld::Self *self, hkpMultithreadConfig::Self *a2)
{
  return (*(int (**)(uint32_t, hkpMultithreadConfig::Self *))(**((uint32_t **)self + 2) + 44))(*((uint32_t *)self + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setMultithreadConfig  (binary VA: 0x1734910)
// Original: hkpWorld::setMultithreadConfig
// ----------------------------------------------------------------------------
int hkpWorld::setMultithreadConfig(hkpWorld::Self *self, const hkpMultithreadConfig::Self *a2, hkJobQueue::Self *a3)
{
  return (*(int (**)(uint32_t, const hkpMultithreadConfig::Self *, hkJobQueue::Self *))(**((uint32_t **)self + 2) + 48))(
           *((uint32_t *)self + 2),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::checkDeterminismOfIslandBroadPhase  (binary VA: 0x1734940)
// Original: hkpWorld::checkDeterminismOfIslandBroadPhase
// ----------------------------------------------------------------------------
void hkpWorld::checkDeterminismOfIslandBroadPhase()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::checkDeterminism  (binary VA: 0x1734950)
// Original: hkpWorld::checkDeterminism
// ----------------------------------------------------------------------------
void hkpWorld::checkDeterminism()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getCinfo  (binary VA: 0x1734960)
// Original: hkpWorld::getCinfo
// ----------------------------------------------------------------------------
int hkpWorld::getCinfo(hkpWorld::Self *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int32_t v21; // kr08_4
  int32_t v22;
  int32_t v23; // ett
  float v24; // xmm0_4
  int result;
  volatile int32_t *v26;
  int i;
  int32_t v28;
  int v29;
  int v30;
  int32_t v31; // kr0C_4
  int v32;
  int32_t v33; // kr10_4
  int v34;
  float v35;
  int v36;
  int v37;

  v2 = a2;
  a2[4] = *((uint32_t *)a1 + 4);
  a2[5] = *((uint32_t *)a1 + 5);
  a2[6] = *((uint32_t *)a1 + 6);
  a2[7] = *((uint32_t *)a1 + 7);
  a2[8] = *((uint32_t *)a1 + 218);
  a2[12] = *((uint32_t *)a1 + 208);
  a2[13] = *((uint32_t *)a1 + 209);
  a2[14] = *((uint32_t *)a1 + 210);
  a2[15] = *((uint32_t *)a1 + 211);
  a2[16] = *((uint32_t *)a1 + 212);
  a2[17] = *((uint32_t *)a1 + 213);
  a2[18] = *((uint32_t *)a1 + 214);
  a2[19] = *((uint32_t *)a1 + 215);
  a2[20] = *(uint32_t *)(*((uint32_t *)a1 + 28) + 12);
  v3 = *((uint32_t *)a1 + 29);
  if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
  {
    do
    {
      v33 = *(uint32_t *)(v3 + 4);
      HIWORD(v32) = HIWORD(v33);
      LOWORD(v32) = 0;
    }
    while ( v33 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v3 + 4),
                     v33,
                     v32 | (uint16_t)(v33 + 1)) );
  }
  v4 = a2[21];
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
    v2 = a2;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
  }
  v2[21] = v3;
  v9 = *((uint32_t *)a1 + 31);
  if ( v9 != 0 && *(uint16_t *)(v9 + 6) != 0 )
  {
    do
    {
      v31 = *(uint32_t *)(v9 + 4);
      HIWORD(v30) = HIWORD(v31);
      LOWORD(v30) = 0;
    }
    while ( v31 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v9 + 4),
                     v31,
                     v30 | (uint16_t)(v31 + 1)) );
  }
  v10 = v2[22];
  if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
  {
    v36 = (int)(uintptr_t)(v2);
    do
    {
      v12 = *(uint32_t *)(v10 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      v13 = v11 | (uint16_t)(v12 - 1);
      v14 = v12;
    }
    while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
    v2 = (uint32_t *)v36;
    if ( (uint16_t)v13 == 0 )
      G4_VCALL<void>(v10, 16);
  }
  v2[22] = v9;
  *((uint8_t *)v2 + 40) = *((uint8_t *)a1 + 85);
  v15 = *((uint32_t *)a1 + 115);
  if ( v15 != 0 )
    v16 = *(uint8_t *)(v15 + 48);
  else
    v16 = 3;
  *((uint8_t *)v2 + 41) = v16;
  v17 = *((uint32_t *)a1 + 115);
  if ( v17 != 0 )
    *((uint8_t *)v2 + 42) = *(uint8_t *)(v17 + 52);
  else
    *((uint8_t *)v2 + 42) = 0;
  v2[23] = *(uint32_t *)(*((uint32_t *)a1 + 30) + 8432);
  v2[25] = *(uint32_t *)(*((uint32_t *)a1 + 30) + 8436);
  v2[35] = *((uint32_t *)a1 + 50);
  v2[35] = *((uint32_t *)a1 + 51);
  *((uint8_t *)v2 + 148) = *((uint8_t *)a1 + 208);
  v18 = *((uint32_t *)a1 + 20);
  if ( v18 != 0 && *(uint16_t *)(v18 + 6) != 0 )
  {
    v26 = (volatile int32_t *)(v18 + 4);
    v34 = *((uint32_t *)a1 + 20);
    for ( i = v34; ; i = v34 )
    {
      v28 = *(uint32_t *)(i + 4);
      HIWORD(v29) = HIWORD(v28);
      LOWORD(v29) = 0;
      if ( v28 == __sync_val_compare_and_swap(v26, v28, v29 | (uint16_t)(v28 + 1)) )
        break;
    }
  }
  v19 = v2[26];
  if ( v19 != 0 && *(uint16_t *)(v19 + 6) != 0 )
  {
    v37 = (int)(uintptr_t)(v2);
    do
    {
      v21 = *(uint32_t *)(v19 + 4);
      HIWORD(v20) = HIWORD(v21);
      LOWORD(v20) = 0;
      v22 = v20 | (uint16_t)(v21 - 1);
      v23 = v21;
    }
    while ( v23 != __sync_val_compare_and_swap((volatile int32_t *)(v19 + 4), v23, v22) );
    v2 = (uint32_t *)v37;
    if ( (uint16_t)v22 == 0 )
      G4_VCALL<void>(v19, 16);
  }
  v2[26] = *((uint32_t *)a1 + 20);
  v2[27] = *((uint32_t *)a1 + 216);
  v2[24] = *((uint32_t *)a1 + 217);
  *((uint8_t *)v2 + 112) = *((uint8_t *)a1 + 880);
  *((uint8_t *)v2 + 113) = *(uint8_t *)(*((uint32_t *)a1 + 28) + 109);
  v2[9] = *((uint32_t *)a1 + 148);
  v2[29] = *((uint32_t *)a1 + 125);
  v2[30] = *((uint32_t *)a1 + 126);
  v2[31] = *((uint32_t *)a1 + 199);
  v2[32] = *((uint32_t *)a1 + 200);
  v24 = fsqrt(*((float *)a1 + 204));
  if ( __builtin_isnan(v24) )
  {
    v35 = sqrtf(*((float *)a1 + 204));
    v24 = v35;
  }
  *((float *)v2 + 33) = v24;
  *((uint8_t *)v2 + 136) = *((uint8_t *)a1 + 812);
  *((uint8_t *)v2 + 160) = *((uint8_t *)a1 + 813);
  *((uint8_t *)v2 + 161) = *((uint8_t *)a1 + 814);
  *((uint8_t *)v2 + 162) = *((uint8_t *)a1 + 815);
  v2[38] = **(uint32_t **)(*((uint32_t *)a1 + 28) + 112);
  v2[39] = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 28) + 112) + 4);
  *((uint8_t *)v2 + 149) = *(uint8_t *)(*((uint32_t *)a1 + 28) + 108);
  *((uint8_t *)v2 + 163) = *((uint8_t *)a1 + 210);
  v2[42] = *((uint32_t *)a1 + 54);
  *((uint8_t *)v2 + 172) = *((uint8_t *)a1 + 881);
  v2[44] = *((uint32_t *)a1 + 55);
  v2[45] = *((uint32_t *)a1 + 56);
  *((uint8_t *)v2 + 184) = *((uint8_t *)a1 + 228);
  v2[47] = *((uint32_t *)a1 + 58);
  v2[48] = *((uint32_t *)a1 + 59);
  v2[49] = *((uint32_t *)a1 + 60);
  v2[41] = *((uint32_t *)a1 + 53);
  v2[50] = *((uint32_t *)a1 + 62);
  v2[51] = *((uint32_t *)a1 + 63);
  v2[52] = *((uint32_t *)a1 + 64);
  v2[53] = *((uint32_t *)a1 + 65);
  *((uint8_t *)v2 + 216) = *((uint8_t *)a1 + 209);
  *((uint8_t *)v2 + 217) = *((uint32_t *)a1 + 61);
  v2[57] = *(uint32_t *)(*((uint32_t *)a1 + 2) + 36);
  *((uint8_t *)v2 + 218) = *((uint8_t *)a1 + 196);
  *((uint8_t *)v2 + 224) = *((uint8_t *)a1 + 172);
  *((uint8_t *)v2 + 225) = *((uint8_t *)a1 + 173);
  v2[55] = *((uint32_t *)a1 + 44);
  result = hkpWorld::findWorldExtension(a1, 1001);
  *((uint8_t *)v2 + 232) = result != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getMemoryWatchDog  (binary VA: 0x1734e90)
// Original: hkpWorld::getMemoryWatchDog
// ----------------------------------------------------------------------------
int hkpWorld::getMemoryWatchDog(hkpWorld::Self *self)
{
  return *((uint32_t *)self + 20);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setMemoryWatchDog  (binary VA: 0x1734ea0)
// Original: hkpWorld::setMemoryWatchDog
// ----------------------------------------------------------------------------
int hkpWorld::setMemoryWatchDog(hkpWorld::Self *self, hkWorldMemoryAvailableWatchDog::Self *a2)
{
  hkWorldMemoryAvailableWatchDog::Self *v2;
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
  v3 = *((uint32_t *)self + 20);
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
    *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::checkAccessGetActiveSimulationIslands  (binary VA: 0x1734f40)
// Original: hkpWorld::checkAccessGetActiveSimulationIslands
// ----------------------------------------------------------------------------
void hkpWorld::checkAccessGetActiveSimulationIslands()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setBroadPhaseBorder  (binary VA: 0x1734f50)
// Original: hkpWorld::setBroadPhaseBorder
// ----------------------------------------------------------------------------
int hkpWorld::setBroadPhaseBorder(hkpWorld::Self *self, hkpBroadPhaseBorder::Self *a2)
{
  hkpBroadPhaseBorder::Self *v2;
  int result;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  result = *((uint32_t *)self + 115);
  if ( result != 0 )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 24))(*((uint32_t *)self + 115));
    v4 = *((uint32_t *)self + 115);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
        result = __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7);
      }
      while ( v8 != result );
      v2 = a2;
      if ( (uint16_t)v7 == 0 )
        result = G4_VCALL<int>(v4, 16);
    }
  }
  *((uint32_t *)self + 115) = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr && *((uint16_t *)v2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)v2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)v2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getBroadPhaseBorder  (binary VA: 0x1735000)
// Original: hkpWorld::getBroadPhaseBorder
// ----------------------------------------------------------------------------
int hkpWorld::getBroadPhaseBorder(hkpWorld::Self *self)
{
  return *((uint32_t *)self + 115);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::castRay  (binary VA: 0x17350e0)
// Original: hkpWorld::castRay
// ----------------------------------------------------------------------------
int hkpWorld::castRay(int a1, int *a2, int a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  uint32_t *v7;
  uint64_t v8; // rax
  bool v9;
  uint32_t v11[23];

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtworldCastRayCollector");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  memset(&v11[16], 0, 16);
  v11[0] = ((uint32_t)(uintptr_t)&off_20998E0);
  hkpWorldRayCaster::castRay(v11, *(uint32_t *)(a1 + 88), a2, *(uint32_t *)(a1 + 116), 0, a3);
  v7 = *(uint32_t **)(v4 + 4);
  LODWORD(v8) = (uint32_t)(uintptr_t)(&off_2055238);
  v9 = (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(v4 + 12);
  v11[0] = (uint32_t)(uintptr_t)(&off_2055238);
  if ( v9 )
  {
    *v7 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::castRay  (binary VA: 0x17351c0)
// Original: hkpWorld::castRay
// ----------------------------------------------------------------------------
int hkpWorld::castRay(int a1, int a2, int a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  uint32_t *v7;
  uint64_t v8; // rax
  bool v9;
  uint32_t v11[19];

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtworldCastRay");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  memset(&v11[12], 0, 16);
  v11[0] = ((uint32_t)(uintptr_t)&off_20B1D70);
  hkpSimpleWorldRayCaster::castRay(v11, *(uint32_t *)(a1 + 88), a2, *(uint32_t *)(a1 + 116), 0, a3);
  v7 = *(uint32_t **)(v4 + 4);
  LODWORD(v8) = (uint32_t)(uintptr_t)(&off_2055238);
  v9 = (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(v4 + 12);
  v11[0] = (uint32_t)(uintptr_t)(&off_2055238);
  if ( v9 )
  {
    *v7 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::castRayMt  (binary VA: 0x17352a0)
// Original: hkpWorld::castRayMt
// ----------------------------------------------------------------------------
int hkpWorld::castRayMt(uint32_t *a1, int a2, int a3, pthread_mutex_t *a4, int a5, hkSemaphore::Self *a6, int *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, pthread_mutex_t *a16, int a17, hkSemaphore::Self *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{
  int address;
  int v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int i;
  int v34;
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
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v28 = (int)(uintptr_t)(a7);
  v29 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)address + 44),
                 16,
                 v36,
                 v37,
                 v38,
                 address,
                 v39,
                 v40,
                 v41,
                 v42,
                 v43,
                 v44,
                 v45,
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
                 v60,
                 v61,
                 v62,
                 v63,
                 v64);
  a9 = a1[28];
  a11 = a2;
  v65 = (int)(uintptr_t)(v29);
  v30 = a1[22];
  LOWORD(a4) = 769;
  a15 = v30;
  a5 = -65488;
  a8 = 0;
  BYTE2(a4) = 1;
  a7 = v29;
  a10 = 64;
  a12 = a3;
  v31 = 1;
  if ( a3 != 0 )
  {
    v32 = a3 + 62;
    if ( a3 - 1 >= 0 )
      v32 = a3 - 1;
    v31 = (v32 >> 6) + 1;
  }
  *v29 = v31;
  a13 = 0;
  a14 = 0;
  hkpWorldRayCastJob::setRunsOnSpuOrPpu((hkpWorldRayCastJob::Self *)&a4);
  for ( i = a12; a12 > 0; i = a12 )
  {
    a16 = a4;
    a17 = a5;
    a18 = a6;
    a19 = (int)(uintptr_t)(a7);
    a20 = a8;
    a21 = a9;
    a22 = a10;
    a23 = a11;
    a25 = a13;
    a26 = a14;
    a27 = a15;
    v34 = v28;
    if ( i <= v28 )
      v34 = i;
    a12 = i - v28;
    a11 += v28 << 6;
    a24 = v34;
    hkJobQueue::addJob(a4, &a16, 1);
  }
  G4_VCALL<void>(a5, 20, a4, 15);
  hkJobQueue::processAllJobs(a4, true);
  G4_VCALL<void>(a5, 32);
  hkSemaphore::acquire(a6);
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(*a1 + 44) + 12))(*(uint32_t *)(*a1 + 44), v65, 16);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getClosestPoints  (binary VA: 0x17354b0)
// Original: hkpWorld::getClosestPoints
// ----------------------------------------------------------------------------
int hkpWorld::getClosestPoints(int a1, uint32_t *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  int result;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27[32];
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[263];
  enum : size_t {
    _g4_s0 = 1200u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v25)) > _g4_s7 ? (32u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v26)) > _g4_s8 ? (39u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v27)) > _g4_s9 ? (40u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v28)) > _g4_s10 ? (72u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v29)) > _g4_s11 ? (76u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v30)) > _g4_s12 ? (80u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v31)) > _g4_s13 ? (84u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 39u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);

  v31[259] = (uint32_t)(uintptr_t)(&a1);
  v22 = a1;
  v21 = (uint32_t *)a3;
  v25 = a2;
  v20 = a4;
  G4_VCALL<void>(*a2, 24, a2[2], *(float *)(a3 + 12) - (float)(0.5 * *(float *)(*(uint32_t *)(a1 + 112) + 12)), v27);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v18 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("LthkpWorld::getClosestPoints");
    v6[3] = (uint32_t)(uintptr_t)("StBroadPhase");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
  }
  v28 = v31;
  v29 = 0;
  v30 = -2147483520;
  (*(void (**)(uint32_t, uint8_t *, uint32_t **))(**(uint32_t **)(v22 + 88) + 80))(*(uint32_t *)(v22 + 88), v27, &v28);
  v8 = *v18;
  v9 = *(uint32_t **)(*v18 + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*v18 + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("StNarrowPhase");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  v24 = v28;
  v23 = v29;
  v11 = 0;
  v19 = 35 * *(uint8_t *)(*v25 + 8);
  if ( v29 > 0 )
  {
    do
    {
      v12 = v24[2 * v11 + 1] + *(char *)(v24[2 * v11 + 1] + 5);
      if ( v25 != (uint32_t *)v12 )
      {
        v13 = **(uint32_t **)(v22 + 116);
        v31[260] = *(uint32_t *)(v22 + 116);
        v31[262] = v12;
        v31[261] = (uint32_t)(uintptr_t)(v25);
        (*(void (**)(char *))(v13 + 24))(&v26);
        if ( v26 != 0 && *(uint32_t *)v12 != 0 )
          (*(void (**)(uint32_t *, int, uint32_t *, int))(*v21
                                                            + 20
                                                            * *(uint8_t *)(*(uint8_t *)(*(uint32_t *)v12 + 8)
                                                                                 + *v21
                                                                                 + v19
                                                                                 + 416)
                                                            + 2876))(
            v25,
            v12,
            v21,
            v20);
      }
      ++v11;
    }
    while ( v11 != v23 );
  }
  v14 = *v18;
  v15 = *(uint32_t **)(*v18 + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*v18 + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v15[1] = v16;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  result = v30;
  v29 = 0;
  if ( v30 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v28,
             8 * v30);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getClosestPointsMt  (binary VA: 0x1735740)
// Original: hkpWorld::getClosestPointsMt
// ----------------------------------------------------------------------------
int hkpWorld::getClosestPointsMt(uint32_t *a1, int a2, int a3, pthread_mutex_t *a4, int a5, hkSemaphore::Self *a6, uint32_t *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, pthread_mutex_t *a16, int a17, hkSemaphore::Self *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{
  int address;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33; // xmm0_4
  int v34;
  int i;
  int v36;
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
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  uint32_t *v67;
  int v68;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v29 = (int)(uintptr_t)(a7);
  v67 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                    *(uint32_t *)(*(uint32_t *)address + 44),
                    16,
                    v38,
                    v39,
                    v40,
                    address,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
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
                    v60,
                    v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66);
  LOWORD(a4) = 514;
  v30 = 16 * a3;
  BYTE2(a4) = 2;
  a5 = -65488;
  v31 = a1[28];
  v68 = a1[22];
  v32 = 0;
  v33 = *(uint32_t *)(v31 + 12);
  a9 = 0;
  if ( v68 > 0 )
  {
    do
    {
      *(uint32_t *)(a2 + v32 + 12) = 0;
      v32 += 16;
    }
    while ( v32 != v30 );
  }
  a8 = v31;
  a10 = v68;
  a14 = v68;
  v34 = v68 - 1;
  a13 = a2;
  if ( v68 - 1 < 0 )
    v34 = v68 + 62;
  a7 = v67;
  a12 = 64;
  a11 = v33;
  *v67 = (v34 >> 6) + 1;
  hkpWorldGetClosestPointsJob::setRunsOnSpuOrPpu((hkpWorldGetClosestPointsJob::Self *)&a4);
  for ( i = a14; a14 > 0; i = a14 )
  {
    a16 = a4;
    a17 = a5;
    a18 = a6;
    a19 = (int)(uintptr_t)(a7);
    a20 = a8;
    a21 = a9;
    a22 = a10;
    a23 = a11;
    a24 = a12;
    a25 = a13;
    a27 = a15;
    v36 = v29;
    if ( i <= v29 )
      v36 = i;
    a14 = i - v29;
    a13 += 16 * v29;
    a26 = v36;
    hkJobQueue::addJob(a4, &a16, 1);
  }
  G4_VCALL<void>(a5, 20, a4, 15);
  hkJobQueue::processAllJobs(a4, true);
  G4_VCALL<void>(a5, 32);
  hkSemaphore::acquire(a6);
  return (*(int (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*a1 + 44) + 12))(*(uint32_t *)(*a1 + 44), v67, 16);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getPenetrations  (binary VA: 0x1735970)
// Original: hkpWorld::getPenetrations
// ----------------------------------------------------------------------------
int hkpWorld::getPenetrations(int a1, uint32_t *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  int result;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27[32];
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[263];
  enum : size_t {
    _g4_s0 = 1200u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v25)) > _g4_s7 ? (32u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v26)) > _g4_s8 ? (39u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v27)) > _g4_s9 ? (40u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v28)) > _g4_s10 ? (72u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v29)) > _g4_s11 ? (76u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v30)) > _g4_s12 ? (80u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v31)) > _g4_s13 ? (84u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 39u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);

  v31[259] = (uint32_t)(uintptr_t)(&a1);
  v22 = a1;
  v25 = a2;
  v21 = (uint32_t *)a3;
  v20 = a4;
  G4_VCALL<void>(*a2, 24, a2[2], fmaxf(0.0, *(float *)(a3 + 12) - (float)(0.5 * *(float *)(*(uint32_t *)(a1 + 112) + 12))), v27);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v18 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("LthkpWorld::getPenetrations");
    v6[3] = (uint32_t)(uintptr_t)("StBroadPhase");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
  }
  v28 = v31;
  v29 = 0;
  v30 = -2147483520;
  (*(void (**)(uint32_t, uint8_t *, uint32_t **))(**(uint32_t **)(v22 + 88) + 80))(*(uint32_t *)(v22 + 88), v27, &v28);
  v8 = *v18;
  v9 = *(uint32_t **)(*v18 + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*v18 + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("StNarrowPhase");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  v24 = v28;
  v23 = v29;
  v11 = 0;
  v19 = 35 * *(uint8_t *)(*v25 + 8);
  if ( v29 > 0 )
  {
    do
    {
      v12 = v24[2 * v11 + 1] + *(char *)(v24[2 * v11 + 1] + 5);
      if ( v25 != (uint32_t *)v12 )
      {
        v13 = **(uint32_t **)(v22 + 116);
        v31[260] = *(uint32_t *)(v22 + 116);
        v31[262] = v12;
        v31[261] = (uint32_t)(uintptr_t)(v25);
        (*(void (**)(char *))(v13 + 24))(&v26);
        if ( v26 != 0 && *(uint32_t *)v12 != 0 )
        {
          (*(void (**)(uint32_t *, int, uint32_t *, int))(*v21
                                                            + 20
                                                            * *(uint8_t *)(*(uint8_t *)(*(uint32_t *)v12 + 8)
                                                                                 + *v21
                                                                                 + v19
                                                                                 + 416)
                                                            + 2872))(
            v25,
            v12,
            v21,
            v20);
          if ( *(uint8_t *)(v20 + 4) != 0 )
            break;
        }
      }
      ++v11;
    }
    while ( v11 != v23 );
  }
  v14 = *v18;
  v15 = *(uint32_t **)(*v18 + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*v18 + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v15[1] = v16;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  result = v30;
  v29 = 0;
  if ( v30 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v28,
             8 * v30);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::linearCast  (binary VA: 0x1735c10)
// Original: hkpWorld::linearCast
// ----------------------------------------------------------------------------
int hkpWorld::linearCast(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  uint32_t *v11;
  uint64_t v12; // rax
  bool v13;
  uint32_t v15[39];

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtworldLinCast");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = a1[28];
  v15[32] = 872415232;
  v15[0] = ((uint32_t)(uintptr_t)&off_20B19A8);
  v15[10] = 0;
  v10 = 0;
  if ( a1[29] != 0 )
    v10 = a1[29] + 8;
  hkpWorldLinearCaster::linearCast(v15, a1[22], a2, a3, v10, v9, *(uint32_t *)(v9 + 112), 0, a4, a5);
  v11 = *(uint32_t **)(v6 + 4);
  LODWORD(v12) = (uint32_t)(uintptr_t)(&off_2055238);
  v13 = (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(v6 + 12);
  v15[0] = (uint32_t)(uintptr_t)(&off_2055238);
  if ( v13 )
  {
    *v11 = (uint32_t)(uintptr_t)("Et");
    v12 = __rdtsc();
    v11[1] = v12;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::linearCastMt  (binary VA: 0x1735d10)
// Original: hkpWorld::linearCastMt
// ----------------------------------------------------------------------------
int hkpWorld::linearCastMt(uint32_t *a1, int a2, int a3, pthread_mutex_t *a4, int a5, hkSemaphore::Self *a6, uint32_t *a7, int a8, int a9, int a10, uint32_t *a11, int a12, int a13, int a14, int a15, pthread_mutex_t *a16, int a17, hkSemaphore::Self *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{
  int address;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int i;
  int v33;
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
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v28 = (int)(uintptr_t)(a7);
  v29 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                    *(uint32_t *)(*(uint32_t *)address + 44),
                    16,
                    v35,
                    v36,
                    v37,
                    address,
                    v38,
                    v39,
                    v40,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
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
                    v60,
                    v61,
                    v62,
                    v63);
  v30 = a1[28];
  v64 = (int)(uintptr_t)(v29);
  a13 = a1[22];
  a12 = a3;
  v31 = a3 - 1;
  a8 = v30;
  if ( a3 - 1 < 0 )
    v31 = a3 + 62;
  LOWORD(a4) = 516;
  BYTE2(a4) = 2;
  a5 = -65488;
  a9 = 0;
  a7 = v29;
  a10 = 64;
  a11 = v29;
  *v29 = (v31 >> 6) + 1;
  hkpWorldLinearCastJob::setRunsOnSpuOrPpu((hkpWorldLinearCastJob::Self *)&a4);
  for ( i = a12; a12 > 0; i = a12 )
  {
    a16 = a4;
    a17 = a5;
    a18 = a6;
    a19 = (int)(uintptr_t)(a7);
    a20 = a8;
    a21 = a9;
    a22 = a10;
    a23 = (int)(uintptr_t)(a11);
    a25 = a13;
    a26 = a14;
    a27 = a15;
    v33 = v28;
    if ( i <= v28 )
      v33 = i;
    a12 = i - v28;
    a11 += 12 * v28;
    a24 = v33;
    hkJobQueue::addJob(a4, &a16, 1);
  }
  G4_VCALL<void>(a5, 20, a4, 15);
  hkJobQueue::processAllJobs(a4, true);
  G4_VCALL<void>(a5, 32);
  hkSemaphore::acquire(a6);
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(*a1 + 44) + 12))(*(uint32_t *)(*a1 + 44), v64, 16);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getWorldAsOneSystem  (binary VA: 0x1735f00)
// Original: hkpWorld::getWorldAsOneSystem
// ----------------------------------------------------------------------------
hkpPhysicsSystem::Self * hkpWorld::getWorldAsOneSystem(hkpWorld::Self *self)
{
  int address;
  hkpPhysicsSystem::Self *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint16_t *v13;
  unsigned int j;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint16_t *v22;
  unsigned int k;
  int *v24;
  int v25;
  int v26;
  int *v27;
  int v28;
  int v29;
  typedef hkpRigidBody::Self *_g4_t_v31;
  typedef hkpRigidBody::Self *_g4_t_v32;
  typedef hkpRigidBody::Self *_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_i;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef char _g4_t_v44[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_i)) > _g4_s4 ? (16u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v37)) > _g4_s6 ? (16u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v38)) > _g4_s7 ? (16u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v39)) > _g4_s8 ? (20u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v40)) > _g4_s9 ? (20u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v41)) > _g4_s10 ? (20u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v42)) > _g4_s11 ? (24u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v43)) > _g4_s12 ? (24u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (31u + sizeof(_g4_t_v44)) > _g4_s13 ? (31u + sizeof(_g4_t_v44)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 31u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             68);
  hkpPhysicsSystem::Construct(v2);
  sub_17332F0(v44, self, v2);
  v3 = *((int **)self + 10);
  v34 = v3;
  v4 = *((uint32_t *)self + 11);
  if ( 4 * v4 != 0 )
  {
    do
    {
      v5 = *v34;
      if ( *(int *)(*v34 + 80) > 0 )
      {
        v6 = 0;
        do
        {
          v31 = *(hkpRigidBody::Self **)(*(uint32_t *)(v5 + 76) + 4 * v6++);
          hkpPhysicsSystem::addRigidBody(v2, v31);
        }
        while ( v6 < *(uint32_t *)(v5 + 80) );
        v3 = *((int **)self + 10);
        v4 = *((uint32_t *)self + 11);
      }
      ++v34;
    }
    while ( v34 != &v3[v4] );
  }
  *((uint8_t *)v2 + 64) = v4 > 0;
  sub_1735010(self, v2);
  v7 = *((uint32_t *)self + 11);
  v42 = *((int **)self + 10);
  v8 = v42;
  v39 = 4 * v7;
  if ( 4 * v7 != 0 )
  {
    do
    {
      v40 = *v42;
      v9 = *(uint32_t *)(*v42 + 80);
      if ( v9 > 0 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v10 = *(uint32_t *)(*(uint32_t *)(v40 + 76) + 4 * i);
          if ( *(uint16_t *)(v10 + 172) != 0 )
          {
            v11 = 0;
            do
            {
              v12 = *(uint32_t *)(v10 + 168) + 48 * v11;
              v13 = *(uint16_t **)(v12 + 12);
              for ( j = *v13; j > 0x1D; j = *v13 )
                v13 = *((uint16_t **)v13 + 5);
              if ( j != 29 )
                hkpPhysicsSystem::addConstraint(v2, *(hkpConstraintInstance::Self **)v12);
              ++v11;
            }
            while ( v11 < *(uint16_t *)(v10 + 172) );
            v9 = *(uint32_t *)(v40 + 80);
          }
        }
        v8 = *((int **)self + 10);
        v7 = *((uint32_t *)self + 11);
      }
      ++v42;
    }
    while ( v42 != &v8[v7] );
    v39 = 4 * v7;
  }
  v43 = *((int **)self + 13);
  v15 = *((uint32_t *)self + 14);
  v16 = 4 * v15;
  if ( 4 * v15 != 0 )
  {
    v17 = *((int **)self + 13);
    do
    {
      v41 = *v43;
      if ( *(int *)(*v43 + 80) > 0 )
      {
        v18 = *(uint32_t *)(*v43 + 80);
        v36 = 0;
        do
        {
          v19 = *(uint32_t *)(*(uint32_t *)(v41 + 76) + 4 * v36);
          if ( *(uint16_t *)(v19 + 172) != 0 )
          {
            v20 = 0;
            do
            {
              v21 = *(uint32_t *)(v19 + 168) + 48 * v20;
              v22 = *(uint16_t **)(v21 + 12);
              for ( k = *v22; k > 0x1D; k = *v22 )
                v22 = *((uint16_t **)v22 + 5);
              if ( k != 29 )
                hkpPhysicsSystem::addConstraint(v2, *(hkpConstraintInstance::Self **)v21);
              ++v20;
            }
            while ( v20 < *(uint16_t *)(v19 + 172) );
            v18 = *(uint32_t *)(v41 + 80);
          }
          ++v36;
        }
        while ( v36 < v18 );
        v17 = *((int **)self + 13);
        v15 = *((uint32_t *)self + 14);
      }
      v16 = 4 * v15;
      ++v43;
    }
    while ( v43 != &v17[v15] );
    v7 = *((uint32_t *)self + 11);
    v39 = 4 * v7;
    v37 = *((int **)self + 10);
  }
  else
  {
    v37 = v8;
    v17 = *((int **)self + 13);
  }
  if ( v39 != 0 )
  {
    v24 = v37;
    do
    {
      v25 = *v37;
      if ( *(int *)(*v37 + 64) > 0 )
      {
        v26 = 0;
        do
        {
          v32 = *(hkpRigidBody::Self **)(*(uint32_t *)(v25 + 60) + 4 * v26++);
          hkpPhysicsSystem::addAction(v2, v32);
        }
        while ( v26 < *(uint32_t *)(v25 + 64) );
        v24 = *((int **)self + 10);
        v7 = *((uint32_t *)self + 11);
      }
      ++v37;
    }
    while ( v37 != &v24[v7] );
    v15 = *((uint32_t *)self + 14);
    v38 = *((int **)self + 13);
    v16 = 4 * v15;
    v27 = v38;
  }
  else
  {
    v38 = v17;
    v27 = v17;
  }
  if ( v16 != 0 )
  {
    do
    {
      v28 = *v38;
      if ( *(int *)(*v38 + 64) > 0 )
      {
        v29 = 0;
        do
        {
          v33 = *(hkpRigidBody::Self **)(*(uint32_t *)(v28 + 60) + 4 * v29++);
          hkpPhysicsSystem::addAction(v2, v33);
        }
        while ( v29 < *(uint32_t *)(v28 + 64) );
        v27 = *((int **)self + 13);
        v15 = *((uint32_t *)self + 14);
      }
      ++v38;
    }
    while ( v38 != &v27[v15] );
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getWorldAsSystems  (binary VA: 0x1736290)
// Original: hkpWorld::getWorldAsSystems
// ----------------------------------------------------------------------------
int * hkpWorld::getWorldAsSystems(hkpWorld::Self *a1, hkMemoryAllocator::Self *a2)
{
  int address;
  hkpPhysicsSystem::Self *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint16_t *v15;
  unsigned int i;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint16_t *v24;
  unsigned int k;
  int *v26;
  int v27;
  int v28;
  int *result;
  int v30;
  int v31;
  int v32;
  typedef hkpRigidBody::Self *_g4_t_v33;
  typedef hkpRigidBody::Self *_g4_t_v34;
  typedef hkpRigidBody::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_j;
  typedef int *_g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef int *_g4_t_v46;
  typedef char _g4_t_v47[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v34)) > _g4_s1 ? (4u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v35)) > _g4_s2 ? (4u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v38)) > _g4_s5 ? (16u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_j)) > _g4_s6 ? (16u + sizeof(_g4_t_j)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v40)) > _g4_s7 ? (16u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v41)) > _g4_s8 ? (16u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v42)) > _g4_s9 ? (20u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v43)) > _g4_s10 ? (20u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v44)) > _g4_s11 ? (20u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v45)) > _g4_s12 ? (24u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v46)) > _g4_s13 ? (24u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (31u + sizeof(_g4_t_v47)) > _g4_s14 ? (31u + sizeof(_g4_t_v47)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 31u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             68);
  hkpPhysicsSystem::Construct(v3);
  sub_17332F0(v47, a1, v3);
  if ( v47[0] != 0 )
  {
    *((uint8_t *)v3 + 64) = 0;
    v32 = *((uint32_t *)a2 + 1);
    if ( v32 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v36);
      v32 = *((uint32_t *)a2 + 1);
    }
    *(uint32_t *)(*(uint32_t *)a2 + 4 * v32) = (uint32_t)(uintptr_t)(v3);
    ++*((uint32_t *)a2 + 1);
  }
  else if ( v3 != nullptr )
  {
    goto LABEL_3;
  }
  v3 = (hkpPhysicsSystem::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             68);
  hkpPhysicsSystem::Construct(v3);
LABEL_3:
  v4 = *((uint32_t *)a2 + 1);
  if ( v4 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v36);
    v4 = *((uint32_t *)a2 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a2 + 4 * v4) = (uint32_t)(uintptr_t)(v3);
  ++*((uint32_t *)a2 + 1);
  v5 = *((int **)a1 + 10);
  v37 = v5;
  v6 = *((uint32_t *)a1 + 11);
  if ( 4 * v6 != 0 )
  {
    do
    {
      v7 = *v37;
      if ( *(int *)(*v37 + 80) > 0 )
      {
        v8 = 0;
        do
        {
          v33 = *(hkpRigidBody::Self **)(*(uint32_t *)(v7 + 76) + 4 * v8++);
          hkpPhysicsSystem::addRigidBody(v3, v33);
        }
        while ( v8 < *(uint32_t *)(v7 + 80) );
        v5 = *((int **)a1 + 10);
        v6 = *((uint32_t *)a1 + 11);
      }
      ++v37;
    }
    while ( v37 != &v5[v6] );
  }
  sub_1735010(a1, v3);
  v9 = *((int **)a1 + 10);
  v45 = v9;
  v10 = *((uint32_t *)a1 + 11);
  v42 = 4 * v10;
  if ( 4 * v10 != 0 )
  {
    do
    {
      v43 = *v45;
      if ( *(int *)(*v45 + 80) > 0 )
      {
        v11 = *(uint32_t *)(*v45 + 80);
        v38 = 0;
        do
        {
          v12 = *(uint32_t *)(*(uint32_t *)(v43 + 76) + 4 * v38);
          if ( *(uint16_t *)(v12 + 172) != 0 )
          {
            v13 = 0;
            do
            {
              v14 = *(uint32_t *)(v12 + 168) + 48 * v13;
              v15 = *(uint16_t **)(v14 + 12);
              for ( i = *v15; i > 0x1D; i = *v15 )
                v15 = *((uint16_t **)v15 + 5);
              if ( i != 29 )
                hkpPhysicsSystem::addConstraint(v3, *(hkpConstraintInstance::Self **)v14);
              ++v13;
            }
            while ( v13 < *(uint16_t *)(v12 + 172) );
            v11 = *(uint32_t *)(v43 + 80);
          }
          ++v38;
        }
        while ( v38 < v11 );
        v9 = *((int **)a1 + 10);
        v10 = *((uint32_t *)a1 + 11);
      }
      ++v45;
    }
    while ( v45 != &v9[v10] );
    v42 = 4 * v10;
  }
  v46 = *((int **)a1 + 13);
  v17 = *((uint32_t *)a1 + 14);
  v18 = 4 * v17;
  if ( 4 * v17 != 0 )
  {
    v19 = *((int **)a1 + 13);
    do
    {
      v44 = *v46;
      v20 = *(uint32_t *)(*v46 + 80);
      if ( v20 > 0 )
      {
        for ( j = 0; j < v20; ++j )
        {
          v21 = *(uint32_t *)(*(uint32_t *)(v44 + 76) + 4 * j);
          if ( *(uint16_t *)(v21 + 172) != 0 )
          {
            v22 = 0;
            do
            {
              v23 = *(uint32_t *)(v21 + 168) + 48 * v22;
              v24 = *(uint16_t **)(v23 + 12);
              for ( k = *v24; k > 0x1D; k = *v24 )
                v24 = *((uint16_t **)v24 + 5);
              if ( k != 29 )
                hkpPhysicsSystem::addConstraint(v3, *(hkpConstraintInstance::Self **)v23);
              ++v22;
            }
            while ( v22 < *(uint16_t *)(v21 + 172) );
            v20 = *(uint32_t *)(v44 + 80);
          }
        }
        v19 = *((int **)a1 + 13);
        v17 = *((uint32_t *)a1 + 14);
      }
      v18 = 4 * v17;
      ++v46;
    }
    while ( v46 != &v19[v17] );
    v10 = *((uint32_t *)a1 + 11);
    v42 = 4 * v10;
    v40 = *((int **)a1 + 10);
  }
  else
  {
    v40 = v9;
    v19 = *((int **)a1 + 13);
  }
  if ( v42 != 0 )
  {
    v26 = v40;
    do
    {
      v27 = *v40;
      if ( *(int *)(*v40 + 64) > 0 )
      {
        v28 = 0;
        do
        {
          v34 = *(hkpRigidBody::Self **)(*(uint32_t *)(v27 + 60) + 4 * v28++);
          hkpPhysicsSystem::addAction(v3, v34);
        }
        while ( v28 < *(uint32_t *)(v27 + 64) );
        v26 = *((int **)a1 + 10);
        v10 = *((uint32_t *)a1 + 11);
      }
      ++v40;
    }
    while ( v40 != &v26[v10] );
    v17 = *((uint32_t *)a1 + 14);
    result = *((int **)a1 + 13);
    v41 = result;
    v18 = 4 * v17;
  }
  else
  {
    v41 = v19;
    result = v19;
  }
  if ( v18 != 0 )
  {
    do
    {
      v30 = *v41;
      if ( *(int *)(*v41 + 64) > 0 )
      {
        v31 = 0;
        do
        {
          v35 = *(hkpRigidBody::Self **)(*(uint32_t *)(v30 + 60) + 4 * v31++);
          hkpPhysicsSystem::addAction(v3, v35);
        }
        while ( v31 < *(uint32_t *)(v30 + 64) );
        result = *((int **)a1 + 13);
        v17 = *((uint32_t *)a1 + 14);
      }
      ++v41;
    }
    while ( v41 != &result[v17] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::internal_executePendingOperations  (binary VA: 0x17366c0)
// Original: hkpWorld::internal_executePendingOperations
// ----------------------------------------------------------------------------
int hkpWorld::internal_executePendingOperations(hkpWorld::Self *self)
{
  *((uint32_t *)self + 33) = 0;
  return hkpWorldOperationQueue::executeAllPending(*((hkpWorldOperationQueue::Self **)self + 32));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::internal_executePendingBodyOperations  (binary VA: 0x1736700)
// Original: hkpWorld::internal_executePendingBodyOperations
// ----------------------------------------------------------------------------
int hkpWorld::internal_executePendingBodyOperations(hkpWorld::Self *self)
{
  *((uint32_t *)self + 34) = 0;
  return (int)(uintptr_t)(hkpWorldOperationQueue::executeAllPendingBodyOperations(*((hkpWorldOperationQueue::Self **)self + 32)));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::shiftBroadPhase  (binary VA: 0x1736740)
// Original: hkpWorld::shiftBroadPhase
// ----------------------------------------------------------------------------
int hkpWorld::shiftBroadPhase(int a1, int *a2, float *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18)
{
  int *address;
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  int v22;
  float v23; // xmm0_4
  int v24;
  float *v25;
  int v26;
  float *v27;
  unsigned int v28;
  int v29;
  uint32_t *v30;
  uint64_t v31; // rax
  int result;
  hkpWorld::Self *v33;
  int v34;
  int v35;
  bool v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int i;
  int j;
  int savedregs;
  int v73;
  uint32_t *v74;
  int v75;
  int v76;
  int v77;
  int v78;
  float *v79;
  int v80;
  int v81;
  int v82;
  int v83;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t _g4_t_v71[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v59)) > _g4_s0 ? (0u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v60)) > _g4_s1 ? (4u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v61)) > _g4_s2 ? (8u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v62)) > _g4_s3 ? (12u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v63)) > _g4_s4 ? (16u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v64)) > _g4_s5 ? (20u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v65)) > _g4_s6 ? (24u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v66)) > _g4_s7 ? (28u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v67)) > _g4_s8 ? (32u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v68)) > _g4_s9 ? (36u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v69)) > _g4_s10 ? (40u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v70)) > _g4_s11 ? (44u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v71)) > _g4_s12 ? (48u + sizeof(_g4_t_v71)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v19 = *address;
  v61 = address;
  v20 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*address + 12) )
  {
    *v20 = (uint32_t)(uintptr_t)("TtBroadphase Shift");
    v21 = __rdtsc();
    v20[1] = v21;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
  }
  v71[0] = 0;
  v71[1] = 0;
  v71[2] = 0x80000000;
  (*(void (**)(uint32_t, int *, float *, uint32_t *, int, int, int *, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(a1 + 88) + 100))(
    *(uint32_t *)(a1 + 88),
    a2,
    a3,
    v71,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 88) + 104))(
    *(uint32_t *)(a1 + 88),
    *(uint32_t *)(a1 + 112) + 32,
    *(uint32_t *)(a1 + 112) + 48);
  v22 = *(uint32_t *)(a1 + 116);
  *(float *)(a1 + 832) = *(float *)(a1 + 832) + *a3;
  *(float *)(a1 + 836) = *(float *)(a1 + 836) + a3[1];
  *(float *)(a1 + 840) = *(float *)(a1 + 840) + a3[2];
  *(float *)(a1 + 844) = *(float *)(a1 + 844) + a3[3];
  *(float *)(a1 + 848) = *(float *)(a1 + 848) + *a3;
  *(float *)(a1 + 852) = *(float *)(a1 + 852) + a3[1];
  *(float *)(a1 + 856) = *(float *)(a1 + 856) + a3[2];
  v23 = *(float *)(a1 + 860) + a3[3];
  ++*(uint32_t *)(a1 + 140);
  *(float *)(a1 + 860) = v23;
  v24 = 0;
  if ( v22 != 0 )
    v24 = v22 + 8;
  hkpTypedBroadPhaseDispatcher::addPairs(*(uint32_t *)(a1 + 92), a12, a13, v24);
  v25 = a3;
  v26 = 0;
  v76 = *(uint32_t *)(a1 + 460) + 24;
  if ( *(uint32_t *)(a1 + 460) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v79 = v25;
        v27 = *(float **)(v76 + 4 * v26);
        v28 = G4_VCALL<int>(v27, 32);
        v25 = v79;
        if ( v28 != 0 )
          break;
        ++v26;
        v27[40] = v27[40] + *v79;
        v27[41] = v27[41] + v79[1];
        v27[42] = v27[42] + v79[2];
        v27[43] = v27[43] + v79[3];
        v27[44] = v27[44] + *v79;
        v27[45] = v27[45] + v79[1];
        v27[46] = v27[46] + v79[2];
        v27[47] = v27[47] + v79[3];
        if ( v26 == 6 )
          goto LABEL_12;
      }
      if ( v28 <= 2 )
      {
        v27[52] = v27[52] + *v79;
        v27[53] = v27[53] + v79[1];
        v27[54] = v27[54] + v79[2];
        v27[55] = v27[55] + v79[3];
      }
      ++v26;
    }
    while ( v26 != 6 );
  }
LABEL_12:
  if ( a4 == 0 )
  {
    a16 = 0;
    a17 = 0;
    a18 = 0x80000000;
    v74 = nullptr;
    v34 = *(uint32_t *)(a1 + 32);
    v35 = *(uint32_t *)(a1 + 56) + *(uint32_t *)(a1 + 44);
    v36 = v35 == -1;
    v37 = v35 + 1;
    v73 = v37;
    if ( v36
      || (a8 = 4 * v37,
          v74 = (uint32_t *)(*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                            &a8),
          a1 = a8 / 4,
          a8 / 4 == 0) )
    {
      a1 = 0x80000000;
    }
    if ( v34 != 0 )
    {
      v38 = 1;
      v77 = 1;
      *v74 = v34;
    }
    else
    {
      v38 = 0;
      v77 = 0;
    }
    v39 = (unsigned int)(uintptr_t)(&v74[v38]);
    v40 = *(uint32_t *)(a1 + 44);
    v41 = *(uint32_t *)(a1 + 40);
    if ( (int)v40 <= 0 )
    {
      v45 = *(uint32_t *)(a1 + 44);
      v44 = a1;
    }
    else
    {
      if ( (v39 >= v41 + 16 || v41 >= v39 + 16) && v40 > 0xB )
      {
        v42 = 0;
        v81 = 4 * (v40 >> 2);
        v43 = 0;
        do
        {
          ++v43;
          *(__m128i *)(v39 + v42) = *(__m128i *)(v41 + v42);
          v42 += 16;
        }
        while ( v43 < v40 >> 2 );
        if ( v81 != v40 )
        {
          *(uint32_t *)(v39 + 16 * (v40 >> 2)) = *(uint32_t *)(v41 + 16 * (v40 >> 2));
          if ( v81 + 1 < (int)v40 )
          {
            *(uint32_t *)(v39 + 4 * (v81 + 1)) = *(uint32_t *)(v41 + 4 * (v81 + 1));
            if ( (int)v40 > v81 + 2 )
              *(uint32_t *)(v39 + 4 * (v81 + 2)) = *(uint32_t *)(v41 + 4 * (v81 + 2));
          }
        }
      }
      else
      {
        for ( i = 0; i != v40; ++i )
          *(uint32_t *)(v39 + 4 * i) = *(uint32_t *)(v41 + 4 * i);
      }
      v44 = a1;
      v45 = *(uint32_t *)(a1 + 44);
    }
    v46 = *(uint32_t *)(v44 + 56);
    v47 = *(uint32_t *)(v44 + 52);
    v48 = (unsigned int)(uintptr_t)(&v74[v77 + v45]);
    if ( (int)v46 > 0 )
    {
      if ( (v48 >= v47 + 16 || v47 >= v48 + 16) && v46 > 0xB )
      {
        v49 = 0;
        v82 = 4 * (v46 >> 2);
        v50 = 0;
        do
        {
          ++v50;
          *(__m128i *)(v48 + v49) = *(__m128i *)(v47 + v49);
          v49 += 16;
        }
        while ( v50 < v46 >> 2 );
        if ( v46 != v82 )
        {
          *(uint32_t *)(v48 + 16 * (v46 >> 2)) = *(uint32_t *)(v47 + 16 * (v46 >> 2));
          if ( v82 + 1 < (int)v46 )
          {
            *(uint32_t *)(v48 + 4 * (v82 + 1)) = *(uint32_t *)(v47 + 4 * (v82 + 1));
            if ( (int)v46 > v82 + 2 )
              *(uint32_t *)(v48 + 4 * (v82 + 2)) = *(uint32_t *)(v47 + 4 * (v82 + 2));
          }
        }
      }
      else
      {
        for ( j = 0; j != v46; ++j )
          *(uint32_t *)(v48 + 4 * j) = *(uint32_t *)(v47 + 4 * j);
      }
    }
    v51 = a17;
    v75 = 0;
    v52 = a17;
    if ( v73 > 0 )
    {
      do
      {
        v53 = v74[v75];
        v54 = *(uint32_t *)(v53 + 80);
        if ( v54 > 0 )
        {
          v83 = v52;
          v55 = 0;
          while ( 1 )
          {
            v78 = *(uint32_t *)(v53 + 76) + 4 * v55;
            v56 = *(uint32_t *)v78;
            if ( *(uint32_t *)(*(uint32_t *)v78 + 16) != 0 )
            {
              if ( (a18 & 0x3FFFFFFF) == v52 )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&a16,
                  4,
                  savedregs);
                v83 = a17;
                v56 = *(uint32_t *)v78;
              }
              *(uint32_t *)(a16 + 4 * v83) = v56;
              v54 = *(uint32_t *)(v53 + 80);
              v52 = ++a17;
            }
            if ( ++v55 >= v54 )
              break;
            v83 = v52;
          }
        }
        ++v75;
      }
      while ( v73 != v75 );
      v51 = v52;
    }
    hkpEntityAabbUtil::entityBatchRecalcAabb(*(uint32_t *)(a1 + 112), a16, v51);
    if ( a1 >= 0 )
      (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v74,
        4 * a1);
    a17 = 0;
    if ( a18 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        a16,
        4 * a18);
  }
  v80 = *(uint32_t *)(a1 + 140);
  *(uint32_t *)(a1 + 140) = v80 - 1;
  if ( v80 == 1 && *(uint8_t *)(a1 + 148) == 0 )
  {
    v33 = (hkpWorld::Self *)a1;
    if ( *(uint32_t *)(a1 + 132) != 0 )
    {
      hkpWorld::internal_executePendingOperations((hkpWorld::Self *)a1);
      v33 = (hkpWorld::Self *)a1;
    }
    if ( *((uint32_t *)v33 + 39) == 1 && *((uint32_t *)v33 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(v33);
  }
  v29 = *a2;
  v30 = *(uint32_t **)(*a2 + 4);
  if ( (unsigned int)(uintptr_t)(v30) < *(uint32_t *)(*a2 + 12) )
  {
    *v30 = (uint32_t)(uintptr_t)("Et");
    v31 = __rdtsc();
    v30[1] = v31;
    *(uint32_t *)(v29 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
  }
  result = a14;
  a13 = 0;
  if ( a14 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             a12,
             8 * a14);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeActionImmediately  (binary VA: 0x1736e60)
// Original: hkpWorld::removeActionImmediately
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeActionImmediately(hkpWorld::Self *self, hkpAction::Self *a2, int a3, int a4, int a5, int a6)
{
  int v7;
  hkpAction::Self **v8;
  hkpAction::Self **v9;
  int v10;
  hkpAction::Self **v11;
  bool v12;
  int v13;
  int32_t v14; // kr00_4
  int32_t v15;
  int32_t v16; // ett
  pthread_mutex_t *v17;
  unsigned int count;
  hkpWorld::Self *result;
  int v20;
  int32_t v21; // kr04_4
  int32_t v22;
  int32_t v23; // ett
  hkpWorldCallbackUtil::Self *v24;
  int v25;
  int v26;
  int v27;
  int32_t v28; // kr08_4
  int savedregs;
  void *retaddr;
  hkpWorldCallbackUtil::Self *thisa;
  hkpWorldCallbackUtil::Self *thisb;
  hkpAction::Self *i;
  hkpAction::Self **v43;
  int v44;
  int v45;
  typedef hkpAction::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[3];
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v30)) > _g4_s1 ? (8u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v33)) > _g4_s4 ? (20u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v34)) > _g4_s5 ? (24u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v35)) > _g4_s6 ? (28u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v36)) > _g4_s7 ? (32u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v37)) > _g4_s8 ? (44u + sizeof(_g4_t_v37)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);

  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v28 = *((uint32_t *)a2 + 1);
      HIWORD(v27) = HIWORD(v28);
      LOWORD(v27) = 0;
    }
    while ( v28 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v28,
                     v27 | (uint16_t)(v28 + 1)) );
  }
  ++*((uint32_t *)self + 35);
  hkpWorldCallbackUtil::fireActionRemoved(self, a2, v29);
  v36[0] = (uint32_t)(uintptr_t)(&v37);
  v7 = *(uint32_t *)a2;
  v36[1] = 0;
  v36[2] = -2147483644;
  (*(void (**)(hkpAction::Self *, uint32_t *, int, int, int, int, int, int))(v7 + 24))(
    a2,
    v36,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  for ( i = nullptr; a5 > (int)(uintptr_t)(i); *v11 = v43[(uint16_t)(HIWORD(retaddr) - 1)] )
  {
    thisa = *(hkpWorldCallbackUtil::Self **)(a4 + 4 * (uint32_t)(uintptr_t)(i));
    v43 = *((hkpAction::Self ***)thisa + 130);
    HIWORD(retaddr) = *((uint16_t *)thisa + 262);
    v8 = v43;
    if ( HIWORD(retaddr) != 0 )
    {
      if ( *v43 == a2 )
      {
        v11 = *((hkpAction::Self ***)thisa + 130);
        goto LABEL_10;
      }
      v9 = v43 + 1;
      v10 = 0;
      while ( ++v10 < HIWORD(retaddr) )
      {
        v11 = v9++;
        if ( *(v9 - 1) == a2 )
          goto LABEL_10;
      }
      v8 = *((hkpAction::Self ***)thisa + 130);
    }
    v11 = v8 - 1;
LABEL_10:
    i = (hkpAction::Self *)((char *)i + 1);
    *((uint16_t *)thisa + 262) = HIWORD(retaddr) - 1;
  }
  v44 = *((uint32_t *)a2 + 3);
  hkpSimulationIsland::removeAction((hkpSimulationIsland::Self *)v44, a2);
  v12 = *((uint16_t *)a2 + 3) == 0;
  *((uint32_t *)a2 + 2) = 0;
  if ( !v12 )
  {
    do
    {
      v14 = *((uint32_t *)a2 + 1);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
      v15 = v13 | (uint16_t)(v14 - 1);
      v16 = v14;
    }
    while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v16, v15) );
    if ( (uint16_t)v15 == 0 )
      G4_VCALL<void>(a2, 16);
  }
  thisb = *(hkpWorldCallbackUtil::Self **)(v44 + 24);
  v17 = *((pthread_mutex_t **)thisb + 47);
  count = ((int32_t *)(v17))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock((pthread_mutex_t *)a2) != 0 )
    {
      if ( --count == 0 )
      {
        v17 = (pthread_mutex_t *)a2;
        goto LABEL_31;
      }
    }
  }
  else
  {
LABEL_31:
    if ( pthread_mutex_lock(v17) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( *(uint16_t *)(v44 + 34) == 0xFFFF )
  {
    v24 = thisb;
    v25 = v44;
    *(uint16_t *)(v44 + 34) = *((uint32_t *)thisb + 17);
    v26 = *((uint32_t *)thisb + 17);
    if ( v26 == (*((uint32_t *)thisb + 18) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpWorldCallbackUtil::Self *)((char *)thisb + 64),
        4,
        savedregs);
      v26 = *((uint32_t *)thisb + 17);
      v25 = v44;
      v24 = thisb;
    }
    *(uint32_t *)(*((uint32_t *)v24 + 16) + 4 * v26) = v25;
    ++*((uint32_t *)v24 + 17);
  }
  if ( pthread_mutex_unlock(*((pthread_mutex_t **)thisb + 47)) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  if ( a6 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a4,
      4 * a6);
  v45 = *((uint32_t *)thisb + 35);
  result = (hkpWorld::Self *)(v45 - 1);
  *((uint32_t *)thisb + 35) = v45 - 1;
  if ( v45 == 1 && *((uint8_t *)thisb + 148) == 0 )
  {
    result = (hkpWorld::Self *)(thisb);
    if ( *((uint32_t *)thisb + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(thisb);
      result = (hkpWorld::Self *)(thisb);
    }
    if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
      result = (hkpWorld::Self *)hkpWorld::internal_executePendingBodyOperations(result);
  }
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v21 = *((uint32_t *)a2 + 1);
      HIWORD(v20) = HIWORD(v21);
      LOWORD(v20) = 0;
      v22 = v20 | (uint16_t)(v21 - 1);
      v23 = v21;
      result = (hkpWorld::Self *)__sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v23, v22);
    }
    while ( (hkpWorld::Self *)v23 != result );
    if ( (uint16_t)v22 == 0 )
      return (hkpWorld::Self *)G4_VCALL<int>(a2, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::checkConstraintsViolated  (binary VA: 0x1737240)
// Original: hkpWorld::checkConstraintsViolated
// ----------------------------------------------------------------------------
int * hkpWorld::checkConstraintsViolated(hkpWorld::Self *self)
{
  int *result;
  int v2;
  int i;
  hkpWorld::Self *v4;
  hkpConstraintInstance::Self *v5;

  result = *((int **)self + 114);
  v2 = *result;
  if ( *result <= 127 )
  {
    if ( v2 <= 0 )
      goto LABEL_5;
  }
  else
  {
    v2 = 128;
  }
  for ( i = 0; i < v2; ++i )
  {
    v4 = (hkpWorld::Self *)result[i + 1];
    hkpWorldCallbackUtil::fireConstraintViolated(self, v4, v5);
    result = *((int **)self + 114);
  }
LABEL_5:
  *result = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::queueOperation  (binary VA: 0x17372b0)
// Original: hkpWorld::queueOperation
// ----------------------------------------------------------------------------
int hkpWorld::queueOperation(int a1, int a2)
{
  return hkpWorldOperationQueue::queueOperation(*(uint32_t *)(a1 + 128), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::reenableCollisionBetweenEntityPair  (binary VA: 0x17372e0)
// Original: hkpWorld::reenableCollisionBetweenEntityPair
// ----------------------------------------------------------------------------
int hkpWorld::reenableCollisionBetweenEntityPair(hkpWorld::Self *self, hkpEntity::Self *a2, hkpEntity::Self *a3)
{
  int result;
  hkpEntity::Self *v4;
  char *v5;
  int v6;
  typedef char *_g4_t_v7;
  typedef char *_g4_t_v8;
  typedef hkpWorld::Self *_g4_t_v9;
  typedef char _g4_t_v10;
  typedef char *_g4_t_v11;
  typedef hkpEntity::Self *_g4_t_v12;
  typedef hkpEntity::Self *_g4_t_v13;
  typedef hkpWorld::Self **_g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (19u + sizeof(_g4_t_v10)) > _g4_s3 ? (19u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v14)) > _g4_s7 ? (44u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 19u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v14 = &self;
  if ( *((uint32_t *)self + 35) != 0 )
  {
    LOBYTE(v11) = 20;
    v12 = a2;
    v13 = a3;
    return hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v11));
  }
  else
  {
    v9 = self;
    v4 = (hkpEntity::Self *)((char *)a3 + 36);
    v8 = (char *)a3 + 16;
    v5 = (char *)a2 + 36;
    v7 = (char *)a2 + 16;
    result = (*(int (**)(uint32_t, char *, char *))(**((uint32_t **)self + 22) + 92))(
               *((uint32_t *)self + 22),
               (char *)a2 + 36,
               (char *)a3 + 36);
    if ( (uint8_t)result != 0 )
    {
      result = (*(int (**)(char *))(**((uint32_t **)v9 + 29) + 24))(&v10);
      if ( v10 != 0 )
      {
        result = hkAgentNnMachine_FindAgent((int)(uintptr_t)(v7), (int)(uintptr_t)(v8));
        if ( result == 0 )
        {
          v6 = *((uint32_t *)v9 + 29);
          v12 = v4;
          v11 = v5;
          if ( v6 != 0 )
            result = v6 + 8;
          return hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)v9 + 23), &v11, 1, result);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addEntity  (binary VA: 0x1737400)
// Original: hkpWorld::addEntity
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpWorld::addEntity(hkpWorld::Self *a1, hkpEntity::Self *a2, int a3)
{
  int v3;
  bool v4;
  uint8_t v5;
  int16_t v6;
  int16_t v7;
  int v9;
  int32_t v10; // kr00_4
  typedef hkpEntity::Self *_g4_t_v11;
  typedef hkpEntity::Self *_g4_t_v12;
  typedef hkpEntity::Self *_g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  if ( *((uint32_t *)a1 + 35) == 0 )
  {
    hkpEntity::setCachedShapeData(a2, a1, *((const hkpShape::Self **)a2 + 4));
    if ( *((uint32_t *)a2 + 6) == 0 )
      *((uint32_t *)a2 + 6) = G4_VCALL<int>(a2, 28);
    v17[0] = 0;
    hkSweptTransformUtil::setTimeInformation(v17, v17, (char *)a2 + 240);
    *((uint16_t *)a2 + 117) = 0;
    *((uint16_t *)a2 + 118) = 0;
    v3 = *((uint32_t *)a1 + 66);
    *((uint8_t *)a1 + 149) = 0;
    *((uint32_t *)a1 + 66) = ++v3;
    v4 = *((uint16_t *)a2 + 3) == 0;
    *((uint32_t *)a2 + 52) = v3;
    if ( !v4 )
    {
      do
      {
        v10 = *((uint32_t *)a2 + 1);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
      }
      while ( v10 != __sync_val_compare_and_swap(
                       (volatile int32_t *)a2 + 1,
                       v10,
                       v9 | (uint16_t)(v10 + 1)) );
    }
    hkpWorldOperationUtil::addEntitySI(a1, a2, a3);
    v5 = *((uint8_t *)a1 + 815);
    v15 = v5;
    v16 = *((uint8_t *)a1 + 814);
    v14 = *((uint8_t *)a1 + 813);
    if ( (uint8_t)(v5 & 3) < (uint8_t)(*((uint8_t *)a2 + 233) & 3) )
      v6 = ~v14 << 14;
    else
      v6 = v14 << 14;
    v7 = v16 << 14;
    if ( v15 < *((uint8_t *)a2 + 233) )
      v7 = ~v16 << 14;
    *((uint16_t *)a2 + 117) = v6 | *((uint16_t *)a2 + 117) & 0x3FFF;
    *((uint16_t *)a2 + 118) = v7 | *((uint16_t *)a2 + 118) & 0x3FFF;
    *((uint8_t *)a1 + 149) = 1;
    ++*((uint32_t *)a1 + 35);
    hkpWorldOperationUtil::addEntityBP(a1, a2, v12);
    hkpWorldCallbackUtil::fireEntityAdded(a1, a2, v13);
    hkpEntityCallbackUtil::fireEntityAdded(a2, v11);
    v4 = (*((uint32_t *)a1 + 35))-- == 1;
    if ( !v4 || *((uint8_t *)a1 + 148) != 0 )
      return a2;
    if ( *((uint32_t *)a1 + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(a1);
      if ( *((uint32_t *)a1 + 39) != 1 )
        return a2;
    }
    else if ( *((uint32_t *)a1 + 39) != 1 )
    {
      return a2;
    }
    if ( *((uint32_t *)a1 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(a1);
    return a2;
  }
  v17[2] = a3;
  v17[1] = (uint32_t)(uintptr_t)(a2);
  LOBYTE(v17[0]) = 1;
  hkpWorld::queueOperation((int)(uintptr_t)(a1), (int)(uintptr_t)(v17));
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeEntity  (binary VA: 0x1737650)
// Original: hkpWorld::removeEntity
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeEntity(hkpWorld::Self *self, hkpEntity::Self *a2, hkpWorld::Self *a3)
{
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  bool v7;
  typedef hkpEntity::Self *_g4_t_v9;
  typedef hkpEntity::Self *_g4_t_v10;
  typedef hkpEntity::Self *_g4_t_v11;
  typedef hkpEntity::Self *_g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v12)) > _g4_s3 ? (8u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  if ( *((uint32_t *)a2 + 35) != 0 )
  {
    v13[1] = (uint32_t)(uintptr_t)(a3);
    LOBYTE(v13[0]) = 2;
    hkpWorld::queueOperation((int)(uintptr_t)(a2), (int)(uintptr_t)(v13));
    *(uint8_t *)self = 0;
    return self;
  }
  else
  {
    *((uint32_t *)a2 + 35) = 1;
    hkpWorldOperationUtil::removeEntityBP(a2, a3, v10);
    hkpWorldCallbackUtil::fireEntityRemoved(a2, a3, v11);
    hkpEntityCallbackUtil::fireEntityRemoved(a3, v9);
    *((uint8_t *)a2 + 149) = 0;
    hkpWorldOperationUtil::removeEntitySI(a2, a3, v12);
    if ( *((uint32_t *)a3 + 21) != 0 )
      hkpCollidable::BoundingVolumeData::deallocate((hkpWorld::Self *)((char *)a3 + 48));
    if ( *((uint16_t *)a3 + 3) != 0
      || ((*(void (**)(hkpWorld::Self *))(*(uint32_t *)a3 + 32))(a3), *((uint16_t *)a3 + 3) != 0) )
    {
      do
      {
        v4 = *((uint32_t *)a3 + 1);
        HIWORD(v3) = HIWORD(v4);
        LOWORD(v3) = 0;
        v5 = v3 | (uint16_t)(v4 - 1);
        v6 = v4;
      }
      while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)a3 + 1, v6, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(a3, 16);
    }
    v7 = (*((uint32_t *)a2 + 35))-- == 1;
    *((uint8_t *)a2 + 149) = 1;
    if ( v7 && *((uint8_t *)a2 + 148) == 0 )
    {
      if ( *((uint32_t *)a2 + 33) != 0 )
        hkpWorld::internal_executePendingOperations(a2);
      if ( *((uint32_t *)a2 + 39) == 1 && *((uint32_t *)a2 + 34) != 0 )
        hkpWorld::internal_executePendingBodyOperations(a2);
    }
    *(uint8_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::reintegrateAndRecollideEntities  (binary VA: 0x17377b0)
// Original: hkpWorld::reintegrateAndRecollideEntities
// ----------------------------------------------------------------------------
int hkpWorld::reintegrateAndRecollideEntities(int a1, int a2, int a3, int a4)
{
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v9)) > _g4_s4 ? (20u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v10)) > _g4_s5 ? (24u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v11)) > _g4_s6 ? (28u + sizeof(_g4_t_v11)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a1 + 140) == 0 )
    return (*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(a1 + 8)
                                                                                               + 72))(
             *(uint32_t *)(a1 + 8),
             a2,
             a3,
             a1,
             a4,
             v5,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11);
  BYTE2(v10) = a4;
  v9 = a2;
  LOBYTE(v8) = 24;
  LOWORD(v10) = a3;
  return hkpWorld::queueOperation(a1, (int)(uintptr_t)(&v8));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removePhantom  (binary VA: 0x1737840)
// Original: hkpWorld::removePhantom
// ----------------------------------------------------------------------------
int hkpWorld::removePhantom(hkpWorld::Self *self, hkpPhantom::Self *a2)
{
  hkpPhantom::Self **v2;
  int v3;
  int v4;
  bool v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int result;
  int32_t v10; // ett
  typedef int _g4_t_v11;
  typedef hkpPhantom::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);

  v11 = *((uint32_t *)self + 36) + *((uint32_t *)self + 35);
  if ( v11 != 0 )
  {
    v15[1] = (uint32_t)(uintptr_t)(a2);
    LOBYTE(v15[0]) = 15;
    return hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(v15));
  }
  ++*((uint32_t *)self + 35);
  hkpWorldCallbackUtil::firePhantomRemoved(self, a2, nullptr);
  hkpPhantom::firePhantomRemoved(a2);
  hkpWorldOperationUtil::removePhantomBP(self, a2, v12);
  v14 = *((uint32_t *)self + 70);
  v2 = *((hkpPhantom::Self ***)self + 69);
  if ( v14 > 0 )
  {
    if ( *v2 == a2 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    v3 = 0;
    while ( ++v3 != v14 )
    {
      v4 = v3;
      if ( v2[v3] == a2 )
      {
        v13 = v3;
        goto LABEL_8;
      }
    }
  }
  v4 = -1;
  v13 = -1;
LABEL_8:
  *((uint32_t *)self + 70) = v14 - 1;
  if ( v13 != v14 - 1 )
    v2[v4] = v2[v14 - 1];
  v5 = *((uint16_t *)a2 + 3) == 0;
  *((uint32_t *)a2 + 2) = 0;
  if ( !v5 || (result = G4_VCALL<int>(a2, 64), *((uint16_t *)a2 + 3) != 0) )
  {
    do
    {
      v7 = *((uint32_t *)a2 + 1);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v10 = v7;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v8);
    }
    while ( v10 != result );
    if ( (uint16_t)v8 == 0 )
      result = G4_VCALL<int>(a2, 16);
  }
  v5 = (*((uint32_t *)self + 35))-- == 1;
  if ( v5 && *((uint8_t *)self + 148) == 0 )
  {
    result = *((uint32_t *)self + 33);
    if ( result != 0 )
      result = hkpWorld::internal_executePendingOperations(self);
    if ( *((uint32_t *)self + 39) == 1 )
    {
      result = *((uint32_t *)self + 34);
      if ( result != 0 )
        return hkpWorld::internal_executePendingBodyOperations(self);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::activateRegion  (binary VA: 0x17379e0)
// Original: hkpWorld::activateRegion
// ----------------------------------------------------------------------------
int hkpWorld::activateRegion(hkpWorld::Self *self, const hkAabb::Self *a2, int a3)
{
  hkpWorld::Self *v3;
  int v4;
  int v5;
  const hkAabb::Self *v6;
  int v7;
  hkpEntity::Self *v8;
  int result;
  int address;
  const hkAabb::Self *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);

  v3 = self;
  if ( *((uint32_t *)self + 35) != 0 )
  {
    LOBYTE(v14) = 33;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v11 = (const hkAabb::Self *)(*(int (**)(uint32_t, int, int, int, int, int, unsigned int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                            *(uint32_t *)(*(uint32_t *)address + 44),
                            32,
                            v12,
                            v13,
                            v14,
                            v15,
                            v16,
                            v17);
    v18 = (void *)(a2);
    a2 = v11;
    hkString::memCpy(v11, v18, 0x20u);
    return hkpWorld::queueOperation((int)(uintptr_t)(v3), (int)(uintptr_t)(&self));
  }
  else
  {
    v4 = *((uint32_t *)self + 22);
    v14 = 0;
    v15 = 0;
    v16 = 0x80000000;
    v5 = 0;
    G4_VCALL<void>(v4, 80, a2, &v14, v13);
    v6 = a2;
    if ( (int)(uintptr_t)(a2) > 0 )
    {
      do
      {
        while ( 1 )
        {
          v7 = *((uint32_t *)self + 2 * v5 + 1) + *(char *)(*((uint32_t *)self + 2 * v5 + 1) + 5);
          if ( *(uint8_t *)(v7 + 24) == 1 )
          {
            v8 = (hkpEntity::Self *)(*(char *)(v7 + 16) + v7);
            if ( v8 != nullptr )
              break;
          }
          if ( ++v5 >= (int)(uintptr_t)(v6) )
            goto LABEL_8;
        }
        ++v5;
        hkpEntity::activate(v8);
        v6 = a2;
      }
      while ( v5 < (int)(uintptr_t)(a2) );
    }
LABEL_8:
    result = a3;
    a2 = nullptr;
    if ( a3 >= 0 )
      return (*(int (**)(uint32_t *, hkpWorld::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               self,
               8 * a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::updateCollisionFilterOnPhantom  (binary VA: 0x1737b20)
// Original: hkpWorld::updateCollisionFilterOnPhantom
// ----------------------------------------------------------------------------
int hkpWorld::updateCollisionFilterOnPhantom(hkpWorld::Self *a1, int a2, int a3)
{
  int v3;
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint64_t v12; // rax
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  hkLifoAllocator::Self **v21;
  hkLifoAllocator::Self *v22;
  signed int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  uint64_t v31; // rax
  int v32;
  signed int v33;
  int v34;
  int result;
  hkpWorld::Self *v36;
  uint64_t v37; // rax
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef hkLifoAllocator::Self **_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef hkpWorld::Self *_g4_t_v52;
  typedef hkpWorld::Self *_g4_t_v53;
  typedef hkLifoAllocator::Self **_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef signed int _g4_t_v61;
  typedef void *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v40)) > _g4_s2 ? (12u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v42)) > _g4_s4 ? (16u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v43)) > _g4_s5 ? (20u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v44)) > _g4_s6 ? (20u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v45)) > _g4_s7 ? (24u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v46)) > _g4_s8 ? (24u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v47)) > _g4_s9 ? (28u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v48)) > _g4_s10 ? (28u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v49)) > _g4_s11 ? (32u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v50)) > _g4_s12 ? (36u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v51)) > _g4_s13 ? (36u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v52)) > _g4_s14 ? (40u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v53)) > _g4_s15 ? (40u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v54)) > _g4_s16 ? (44u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v55)) > _g4_s17 ? (48u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v56)) > _g4_s18 ? (48u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v57)) > _g4_s19 ? (48u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v58)) > _g4_s20 ? (52u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v59)) > _g4_s21 ? (56u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v60)) > _g4_s22 ? (60u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v61)) > _g4_s23 ? (64u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v62)) > _g4_s24 ? (68u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v63)) > _g4_s25 ? (72u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v64)) > _g4_s26 ? (96u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v65)) > _g4_s27 ? (100u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v66)) > _g4_s28 ? (104u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v67)) > _g4_s29 ? (108u + sizeof(_g4_t_v67)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 100u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 108u);

  v64 = (int *)&a1;
  v52 = a1;
  v43 = a3;
  v3 = a2;
  if ( *((uint32_t *)a1 + 35) != 0 )
  {
    v60 = a2;
    LOBYTE(v61) = a3;
    LOBYTE(v59) = 21;
    return hkpWorld::queueOperation((int)(uintptr_t)(a1), (int)(uintptr_t)(&v59));
  }
  else
  {
    *((uint32_t *)a1 + 35) = 1;
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v5 = *address;
    v45 = address;
    v6 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
    {
      *v6 = (uint32_t)(uintptr_t)("LtUpdateFilterOnPhantom");
      v6[3] = (uint32_t)(uintptr_t)("Stbroadphase");
      v7 = __rdtsc();
      v6[1] = v7;
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
    }
    v59 = nullptr;
    v60 = 0;
    v61 = 0x80000000;
    v63 = *((uint32_t *)v52 + 218);
    v8 = v63;
    if ( v63 != 0 )
    {
      v21 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v22 = *v21;
      v54 = v21;
      v23 = (8 * v63 + 127) & 0xFFFFFF80;
      v55 = *((uint32_t *)v22 + 3);
      if ( v23 <= *((uint32_t *)v22 + 2) && (unsigned int)(v24 = v23 + *((uint32_t *)v22 + 3)) <= *((uint32_t *)v22 + 4) )
        *((uint32_t *)v22 + 3) = v24;
      else
        v55 = hkLifoAllocator::allocateFromNewSlab(v22, (8 * v63 + 127) & 0xFFFFFF80);
      v41 = v54;
      v9 = (uint32_t *)v55;
    }
    else
    {
      v41 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v9 = nullptr;
    }
    v59 = v9;
    v62 = v9;
    v61 = v8 | 0x80000000;
    (*(void (**)(uint32_t, int, uint32_t **, int, int, int, hkLifoAllocator::Self **, int, int *, int, int, int, hkpWorld::Self *, hkLifoAllocator::Self **, int, int))(**((uint32_t **)v52 + 22) + 84))(
      *((uint32_t *)v52 + 22),
      v3 + 36,
      &v59,
      v38,
      v39,
      v40,
      v41,
      v43,
      v45,
      v47,
      v3 + 36,
      v50,
      v52,
      v54,
      v55,
      v58);
    v10 = *v46;
    v11 = *(uint32_t **)(*v46 + 4);
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*v46 + 12) )
    {
      *v11 = (uint32_t)(uintptr_t)("StUpdateOverlaps");
      v12 = __rdtsc();
      v11[1] = v12;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
    }
    v13 = v60;
    if ( v60 > 0 )
    {
      v56 = (uint32_t *)v3;
      v14 = 0;
      while ( 1 )
      {
        v15 = v59[2 * v14 + 1];
        if ( v49 == v15 )
          goto LABEL_13;
        v16 = v15 + *(char *)(v15 + 5);
        v51 = *((uint32_t **)v53 + 29);
        v17 = *v56;
        v65 = v56;
        v66 = (uint32_t *)v16;
        (*(void (**)(char *))(v17 + 44))((char *)&v58 + 3);
        BYTE2(v58) = HIBYTE(v58);
        v18 = *v51;
        v65 = v51;
        v48 = v56 + 4;
        v67 = v16;
        v66 = v56 + 4;
        (*(void (**)(char *))(v18 + 24))((char *)&v58 + 3);
        if ( HIBYTE(v58) != 0 )
        {
          if ( BYTE2(v58) != 0 )
          {
            if ( *(uint8_t *)(v16 + 24) == 2 )
              goto LABEL_26;
          }
          else
          {
            G4_VCALL<void>(v56, 40, v16);
            if ( *(uint8_t *)(v16 + 24) == 2 )
            {
LABEL_26:
              v25 = (uint32_t *)(*(char *)(v16 + 16) + v16);
              v26 = *v25;
              v66 = v56 + 4;
              v65 = v25;
              (*(void (**)(char *))(v26 + 44))((char *)&v58 + 3);
              if ( HIBYTE(v58) == 0 )
                G4_VCALL<void>(v16 + *(char *)(v16 + 16), 40, v48);
            }
          }
        }
        else
        {
          if ( BYTE2(v58) != 0 )
            G4_VCALL<void>(v56, 48, v16);
          if ( *(uint8_t *)(v16 + 24) == 2 )
          {
            v19 = (uint32_t *)(*(char *)(v16 + 16) + v16);
            v20 = *v19;
            v66 = v56 + 4;
            v65 = v19;
            (*(void (**)(char *))(v20 + 44))((char *)&v58 + 3);
            if ( HIBYTE(v58) != 0 )
              G4_VCALL<void>(v16 + *(char *)(v16 + 16), 48, v48);
          }
        }
        v13 = v60;
LABEL_13:
        if ( ++v14 >= v13 )
        {
          v3 = (int)(uintptr_t)(v56);
          break;
        }
      }
    }
    if ( v44 != 0 )
    {
      v27 = *v46;
      v28 = *(uint32_t **)(*v46 + 4);
      if ( (unsigned int)(uintptr_t)(v28) < *(uint32_t *)(*v46 + 12) )
      {
        *v28 = (uint32_t)(uintptr_t)("StcollectionFilter");
        v37 = __rdtsc();
        v28[1] = v37;
        *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(v28 + 3);
      }
      G4_VCALL<void>(v3, 60);
    }
    v57 = *((uint32_t *)v53 + 35);
    *((uint32_t *)v53 + 35) = v57 - 1;
    if ( v57 == 1 && *((uint8_t *)v53 + 148) == 0 )
    {
      v36 = v53;
      if ( *((uint32_t *)v53 + 33) != 0 )
      {
        hkpWorld::internal_executePendingOperations(v53);
        v36 = v53;
      }
      if ( *((uint32_t *)v36 + 39) == 1 && *((uint32_t *)v36 + 34) != 0 )
        hkpWorld::internal_executePendingBodyOperations(v36);
    }
    v29 = *v46;
    v30 = *(uint32_t **)(*v46 + 4);
    if ( (unsigned int)(uintptr_t)(v30) < *(uint32_t *)(*v46 + 12) )
    {
      *v30 = (uint32_t)(uintptr_t)("lt");
      v31 = __rdtsc();
      v30[1] = v31;
      *(uint32_t *)(v29 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
    }
    v32 = 0;
    if ( v59 != v62 )
      v32 = v60;
    v60 = v32;
    v33 = (8 * v63 + 127) & 0xFFFFFF80;
    v34 = *v42;
    if ( v33 > *(uint32_t *)(*v42 + 8) || *(void **)(v34 + 12) != (char *)v62 + v33 || v62 == *(void **)(v34 + 20) )
      hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v34, (char *)v62, (8 * v63 + 127) & 0xFFFFFF80);
    else
      *(uint32_t *)(v34 + 12) = (uint32_t)(uintptr_t)(v62);
    result = v61;
    v60 = 0;
    if ( v61 >= 0 )
      return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v59,
               8 * v61);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addEntityBatch  (binary VA: 0x1737f90)
// Original: hkpWorld::addEntityBatch
// ----------------------------------------------------------------------------
int hkpWorld::addEntityBatch(int a1, hkpEntity::Self *a2, int a3, int a4)
{
  int result;
  int v5;
  int *address;
  int v7;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  hkLifoAllocator::Self **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  int v19;
  bool v20;
  uint8_t v21;
  int v22;
  int16_t v23;
  int16_t v24;
  int v25;
  int v26;
  hkMemoryAllocator::Self *v27;
  int v28;
  int v29;
  hkpWorldCallbackUtil::Self *v30;
  int v31;
  uint32_t *v32;
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  uint64_t v36; // rax
  int v37;
  int v38;
  uint32_t *v39;
  uint64_t v40; // rax
  int v41;
  hkpWorld::Self *v42;
  int v43;
  uint32_t *v44;
  uint64_t v45; // rax
  hkpEntity::Self *v46;
  signed int v47;
  hkLifoAllocator::Self *v48;
  signed int v49;
  hkLifoAllocator::Self *v50;
  int v51;
  int v52;
  int32_t v53; // kr00_4
  typedef hkpEntity::Self *_g4_t_v54;
  typedef hkpEntity::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef char _g4_t_v59;
  typedef hkLifoAllocator::Self **_g4_t_v60;
  typedef int16_t _g4_t_v61;
  typedef int16_t _g4_t_v62;
  typedef hkpShape::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef hkpSimulationIsland::Self *_g4_t_v65;
  typedef int *_g4_t_v66;
  typedef hkpWorldCallbackUtil::Self *_g4_t_v67;
  typedef hkpWorldCallbackUtil::Self *_g4_t_v68;
  typedef hkpWorldCallbackUtil::Self *_g4_t_v69;
  typedef hkpEntity::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef char _g4_t_v72[4];
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef hkpWorldCallbackUtil::Self *_g4_t_v79;
  typedef hkpEntity::Self *_g4_t_v80;
  typedef signed int _g4_t_v81;
  typedef void *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int *_g4_t_v84;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v54)) > _g4_s0 ? (8u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v55)) > _g4_s1 ? (12u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v56)) > _g4_s2 ? (16u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v57)) > _g4_s3 ? (44u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (50u + sizeof(_g4_t_v58)) > _g4_s4 ? (50u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (51u + sizeof(_g4_t_v59)) > _g4_s5 ? (51u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v60)) > _g4_s6 ? (52u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v61)) > _g4_s7 ? (56u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v62)) > _g4_s8 ? (60u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v63)) > _g4_s9 ? (64u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v64)) > _g4_s10 ? (72u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v65)) > _g4_s11 ? (76u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v66)) > _g4_s12 ? (80u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v67)) > _g4_s13 ? (84u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v68)) > _g4_s14 ? (84u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v69)) > _g4_s15 ? (84u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v70)) > _g4_s16 ? (88u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v71)) > _g4_s17 ? (92u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v72)) > _g4_s18 ? (96u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v73)) > _g4_s19 ? (100u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v74)) > _g4_s20 ? (104u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v75)) > _g4_s21 ? (108u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v76)) > _g4_s22 ? (116u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v77)) > _g4_s23 ? (120u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v78)) > _g4_s24 ? (124u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v79)) > _g4_s25 ? (132u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v80)) > _g4_s26 ? (136u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v81)) > _g4_s27 ? (140u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v82)) > _g4_s28 ? (144u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v83)) > _g4_s29 ? (148u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v84)) > _g4_s30 ? (172u + sizeof(_g4_t_v84)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 50u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 51u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 84u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 100u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 104u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 108u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 116u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 120u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 124u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 132u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 136u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 140u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 144u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 148u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 172u);

  v84 = &a1;
  v70 = a2;
  result = a3;
  v5 = a1;
  v71 = a3;
  v64 = a4;
  if ( a3 > 0 )
  {
    if ( *(uint32_t *)(a1 + 140) != 0 )
    {
      v80 = a2;
      LOWORD(v81) = a3;
      LOBYTE(v79) = 7;
      BYTE2(v81) = a4;
      return hkpWorld::queueOperation(a1, (int)(uintptr_t)(&v79));
    }
    else
    {
      address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
      v7 = *address;
      v66 = address;
      v8 = 0;
      v9 = *(uint32_t **)(*address + 4);
      if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
      {
        *v9 = (uint32_t)(uintptr_t)("LtAddEntities");
        v9[3] = (uint32_t)(uintptr_t)("Stinit");
        v10 = __rdtsc();
        v9[1] = v10;
        *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v9 + 4);
        v8 = *(uint32_t *)(v5 + 140);
      }
      *(uint32_t *)(v5 + 140) = v8 + 1;
      v73 = 0;
      v74 = 0;
      v75 = 0x80000000;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v72, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v73, v71, 4);
      v76 = 0;
      v77 = 0;
      v78 = 0x80000000;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v72, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v76, v71, 32);
      if ( *(uint8_t *)(v5 + 196) != 0 )
      {
        v11 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v65 = (hkpSimulationIsland::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*v11 + 11) + 8))(
                                       *((uint32_t *)*v11 + 11),
                                       132);
        hkpSimulationIsland::Construct(v65, (hkpWorld::Self *)v5);
        *((uint8_t *)v65 + 37) = *((uint8_t *)v65 + 37) & 0xFC | 1;
        if ( v64 == 1 )
        {
          *((uint16_t *)v65 + 16) = *(uint32_t *)(v5 + 44);
          *((uint8_t *)v65 + 38) = *((uint8_t *)v65 + 38) & 0xF0 | 5;
        }
        else
        {
          v12 = *(uint32_t *)(v5 + 56);
          *((uint8_t *)v65 + 38) &= 0xF0u;
          *((uint16_t *)v65 + 16) = v12;
        }
        v60 = v11;
      }
      else
      {
        v65 = **(hkpSimulationIsland::Self ***)(v5 + 40);
        v13 = *((uint32_t *)v65 + 20) + v71;
        v14 = *((uint32_t *)v65 + 21) & 0x3FFFFFFF;
        if ( v13 > v14 )
        {
          v15 = 2 * v14;
          if ( v15 < v13 )
            v15 = *((uint32_t *)v65 + 20) + v71;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v72,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)v65 + 19,
            v15,
            4);
        }
        v60 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      }
      v67 = nullptr;
      v59 = 0;
      v16 = 0.5 * *(float *)(*(uint32_t *)(v5 + 112) + 12);
      v17 = v5;
      v79 = nullptr;
      do
      {
        v18 = *((uint32_t *)v70 + (uint32_t)(uintptr_t)(v67));
        v63 = *(hkpShape::Self **)(v18 + 16);
        v19 = *(uint32_t *)(v17 + 264) + 1;
        *(uint32_t *)(v17 + 264) = v19;
        v20 = *(uint16_t *)(v18 + 6) == 0;
        *(uint32_t *)(v18 + 208) = v19;
        if ( !v20 )
        {
          do
          {
            v53 = *(uint32_t *)(v18 + 4);
            HIWORD(v52) = HIWORD(v53);
            LOWORD(v52) = 0;
          }
          while ( v53 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v18 + 4),
                           v53,
                           v52 | (uint16_t)(v53 + 1)) );
        }
        if ( *(uint32_t *)(v18 + 24) == 0 )
          *(uint32_t *)(v18 + 24) = G4_VCALL<int>(v18, 28);
        hkSweptTransformUtil::setTimeInformation(&v79, &v79, v18 + 240);
        *(uint16_t *)(v18 + 234) = 0;
        *(uint16_t *)(v18 + 236) = 0;
        *(uint32_t *)(v18 + 8) = v17;
        v21 = *(uint8_t *)(v17 + 815);
        v57 = v21;
        v58 = v21 & 3;
        v62 = *(uint8_t *)(v17 + 813);
        v22 = *(uint8_t *)(v18 + 233);
        v61 = *(uint8_t *)(v17 + 814);
        v23 = v62 << 14;
        if ( v58 < (uint8_t)(v22 & 3) )
          v23 = ~v62 << 14;
        v24 = v61 << 14;
        if ( v57 < v22 )
          v24 = ~v61 << 14;
        v20 = *(uint8_t *)(v18 + 232) == 5;
        *(uint16_t *)(v18 + 234) = v23;
        *(uint16_t *)(v18 + 236) = v24;
        if ( v20 )
        {
          hkpSimulationIsland::internalAddEntity(*(hkpSimulationIsland::Self **)(v17 + 32), (hkpEntity::Self *)v18);
        }
        else
        {
          hkpSimulationIsland::internalAddEntity(v65, (hkpEntity::Self *)v18);
          v59 = 1;
        }
        *(uint32_t *)(v18 + 48) = 1;
        *(uint32_t *)(v18 + 64) = 0;
        if ( v63 != nullptr )
        {
          v25 = 32 * v77++;
          v56 = v76 + v25;
          (*(void (**)(uint32_t, uint32_t, float))(**(uint32_t **)(v18 + 16) + 24))(
            *(uint32_t *)(v18 + 16),
            *(uint32_t *)(v18 + 24),
            COERCE_FLOAT(LODWORD(v16)));
          *(uint32_t *)(v73 + 4 * v74++) = v18 + 36;
          hkpEntity::setCachedShapeData((hkpEntity::Self *)v18, (const hkpWorld::Self *)v17, v63);
        }
        v67 = (hkpWorldCallbackUtil::Self *)((char *)v67 + 1);
      }
      while ( v67 != (hkpWorldCallbackUtil::Self *)v71 );
      v26 = v17;
      if ( *(uint8_t *)(v17 + 196) != 0 )
      {
        if ( v59 != 0 )
        {
          v27 = (hkMemoryAllocator::Self *)(v17 + 40);
          *((uint8_t *)v65 + 36) = *(uint32_t *)(**((uint32_t **)v65 + 19) + 208);
          if ( v64 != 1 )
            v27 = (hkMemoryAllocator::Self *)(v26 + 52);
          v28 = *((uint32_t *)v27 + 1);
          if ( v28 == (*((uint32_t *)v27 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v27, 4, v56);
            v28 = *((uint32_t *)v27 + 1);
          }
          *(uint32_t *)(*(uint32_t *)v27 + 4 * v28) = (uint32_t)(uintptr_t)(v65);
          ++*((uint32_t *)v27 + 1);
        }
        else
        {
          G4_VCALL<void>(v65, 4);
        }
      }
      v29 = *(uint32_t *)(v26 + 872);
      v30 = nullptr;
      v79 = nullptr;
      v80 = nullptr;
      v81 = 0x80000000;
      v83 = v29;
      if ( v29 != 0 )
      {
        v49 = (8 * v29 + 127) & 0xFFFFFF80;
        v50 = *v60;
        v69 = *((hkpWorldCallbackUtil::Self **)*v60 + 3);
        if ( v49 <= *((uint32_t *)*v60 + 2) && (unsigned int)(v51 = v49 + *((uint32_t *)*v60 + 3)) <= *((uint32_t *)v50 + 4) )
        {
          *((uint32_t *)v50 + 3) = v51;
          v30 = v69;
        }
        else
        {
          v30 = (hkpWorldCallbackUtil::Self *)hkLifoAllocator::allocateFromNewSlab(v50, (8 * v29 + 127) & 0xFFFFFF80);
        }
      }
      v79 = v30;
      v82 = v30;
      v81 = v29 | 0x80000000;
      v31 = *v66;
      v32 = *(uint32_t **)(*v66 + 4);
      if ( (unsigned int)(uintptr_t)(v32) < *(uint32_t *)(*v66 + 12) )
      {
        *v32 = (uint32_t)(uintptr_t)("StBroadphase");
        v33 = __rdtsc();
        v32[1] = v33;
        *(uint32_t *)(v31 + 4) = (uint32_t)(uintptr_t)(v32 + 3);
      }
      (*(void (**)(uint32_t, int *, int *, hkpWorldCallbackUtil::Self **))(**(uint32_t **)(v26 + 88) + 36))(
        *(uint32_t *)(v26 + 88),
        &v73,
        &v76,
        &v79);
      v34 = *v66;
      v35 = *(uint32_t **)(*v66 + 4);
      if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v66 + 12) )
      {
        *v35 = (uint32_t)(uintptr_t)("StCreateAgents");
        v36 = __rdtsc();
        v35[1] = v36;
        *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
      }
      v37 = 0;
      if ( *(uint32_t *)(v26 + 116) != 0 )
        v37 = *(uint32_t *)(v26 + 116) + 8;
      hkpTypedBroadPhaseDispatcher::addPairs(*(uint32_t *)(v26 + 92), v79, v80, v37);
      v38 = *v66;
      v39 = *(uint32_t **)(*v66 + 4);
      if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(*v66 + 12) )
      {
        *v39 = (uint32_t)(uintptr_t)("StAddedCb");
        v40 = __rdtsc();
        v39[1] = v40;
        *(uint32_t *)(v38 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
      }
      v41 = 0;
      v68 = (hkpWorldCallbackUtil::Self *)v26;
      do
      {
        v42 = *((hkpWorld::Self **)v70 + v41);
        hkpWorldCallbackUtil::fireEntityAdded(v68, v42, v55);
        ++v41;
        hkpEntityCallbackUtil::fireEntityAdded(v42, v54);
      }
      while ( v41 != v71 );
      v20 = (*((uint32_t *)v68 + 35))-- == 1;
      if ( v20 && *((uint8_t *)v68 + 148) == 0 )
      {
        if ( *((uint32_t *)v68 + 33) != 0 )
          hkpWorld::internal_executePendingOperations(v68);
        if ( *((uint32_t *)v68 + 39) == 1 && *((uint32_t *)v68 + 34) != 0 )
          hkpWorld::internal_executePendingBodyOperations(v68);
      }
      v43 = *v66;
      v44 = *(uint32_t **)(*v66 + 4);
      if ( (unsigned int)(uintptr_t)(v44) < *(uint32_t *)(*v66 + 12) )
      {
        *v44 = (uint32_t)(uintptr_t)("lt");
        v45 = __rdtsc();
        v44[1] = v45;
        *(uint32_t *)(v43 + 4) = (uint32_t)(uintptr_t)(v44 + 3);
      }
      v46 = nullptr;
      if ( v79 != v82 )
        v46 = v80;
      v80 = v46;
      v47 = (8 * v83 + 127) & 0xFFFFFF80;
      v48 = *v60;
      if ( v47 > *((uint32_t *)*v60 + 2) || *((void **)v48 + 3) != (char *)v82 + v47 || v82 == *((void **)v48 + 5) )
        hkLifoAllocator::slowBlockFree(v48, (char *)v82, (8 * v83 + 127) & 0xFFFFFF80);
      else
        *((uint32_t *)v48 + 3) = (uint32_t)(uintptr_t)(v82);
      v80 = nullptr;
      if ( v81 >= 0 )
        (*(void (**)(uint32_t *, hkpWorldCallbackUtil::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v79,
          8 * v81);
      v79 = nullptr;
      v81 = 0x80000000;
      v77 = 0;
      if ( v78 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v76,
          32 * v78);
      result = v75;
      v76 = 0;
      v78 = 0x80000000;
      v74 = 0;
      if ( v75 >= 0 )
        return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                 (uint32_t *)(hkContainerTempAllocator::s_alloc),
                 v73,
                 4 * v75);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeEntityBatch  (binary VA: 0x1738750)
// Original: hkpWorld::removeEntityBatch
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeEntityBatch(hkpWorld::Self *self, hkpWorld::Self **a2, int a3)
{
  int v3;
  hkpWorld::Self *result;
  hkpWorld::Self **v5;
  uint32_t *v6;
  int v7;
  hkpWorld::Self **v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  void *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  hkpEntity::Self *const *v17;
  signed int v18;
  hkLifoAllocator::Self *v19;
  int v20;
  uint32_t *v21;
  int v22;
  int32_t v23; // kr00_4
  int32_t v24;
  int32_t v25; // ett
  hkpWorld::Self *v26;
  hkpWorld::Self *v27;
  volatile int32_t *v28;
  int v29;
  uint32_t *v30;
  uint64_t v31; // rax
  uint64_t v32; // rax
  uint64_t v33; // rax
  hkLifoAllocator::Self **v34;
  hkLifoAllocator::Self *v35;
  signed int v36;
  int v37;
  typedef hkpEntity::Self *_g4_t_v38;
  typedef hkpEntity::Self *_g4_t_v39;
  typedef hkpEntity::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef void *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_address;
  typedef hkpWorld::Self *_g4_t_v46;
  typedef hkLifoAllocator::Self **_g4_t_v47;
  typedef int _g4_t_v48;
  typedef hkpWorld::Self **_g4_t_v49;
  typedef int _g4_t_v50;
  typedef hkpWorldOperationUtil::Self *_g4_t_v51;
  typedef char _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef void *_g4_t_v56;
  typedef hkpEntity::Self *const *_g4_t_v57;
  typedef signed int _g4_t_v58;
  typedef void *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef hkpWorld::Self **_g4_t_v61;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v40)) > _g4_s2 ? (8u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v41)) > _g4_s3 ? (32u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v42)) > _g4_s4 ? (36u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v43)) > _g4_s5 ? (36u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v44)) > _g4_s6 ? (36u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_address)) > _g4_s7 ? (40u + sizeof(_g4_t_address)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v46)) > _g4_s8 ? (44u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v47)) > _g4_s9 ? (48u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v48)) > _g4_s10 ? (52u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v49)) > _g4_s11 ? (52u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v50)) > _g4_s12 ? (52u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v51)) > _g4_s13 ? (56u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v52)) > _g4_s14 ? (60u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v53)) > _g4_s15 ? (64u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v54)) > _g4_s16 ? (68u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v55)) > _g4_s17 ? (72u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v56)) > _g4_s18 ? (80u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v57)) > _g4_s19 ? (84u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v58)) > _g4_s20 ? (88u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v59)) > _g4_s21 ? (92u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v60)) > _g4_s22 ? (96u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v61)) > _g4_s23 ? (120u + sizeof(_g4_t_v61)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 88u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 92u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);

  v61 = &self;
  v3 = a3;
  result = self;
  v51 = (hkpWorldOperationUtil::Self *)(self);
  v5 = a2;
  if ( a3 <= 0 )
    return result;
  if ( *((uint32_t *)self + 35) != 0 )
  {
    v57 = (hkpEntity::Self *const *)(a2);
    LOWORD(v58) = a3;
    LOBYTE(v56) = 8;
    return (hkpWorld::Self *)hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v56));
  }
  *((uint32_t *)self + 35) = 1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v48 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("LtRemEntities");
    v6[3] = (uint32_t)(uintptr_t)("StInit+CallBck");
    v32 = __rdtsc();
    v6[1] = v32;
    *(uint32_t *)(v48 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
  }
  (*(void (**)(uint32_t, hkpWorld::Self **, int, hkpWorldOperationUtil::Self *, int))(**((uint32_t **)v51 + 2) + 56))(
    *((uint32_t *)v51 + 2),
    v5,
    v3,
    v51,
    1);
  v53 = 0;
  v54 = 0;
  v55 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v52, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v53, v3, 4);
  v49 = &v5[v3];
  v7 = v54;
  if ( v5 != v49 )
  {
    v7 = v54;
    v8 = v5;
    do
    {
      if ( *((uint32_t *)*v8 + 4) != 0 )
      {
        *(uint32_t *)(v53 + 4 * v7) = (uint32_t)(uintptr_t)((char *)*v8 + 36);
        v7 = ++v54;
      }
      ++v8;
    }
    while ( &v5[v3] != v8 );
  }
  if ( v7 != 0 )
  {
    v9 = *address;
    v10 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*address + 12) )
    {
      *v10 = (uint32_t)(uintptr_t)("StBroadPhase");
      v11 = __rdtsc();
      v10[1] = v11;
      *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
    }
    v56 = nullptr;
    v57 = nullptr;
    v58 = 0x80000000;
    v60 = *((uint32_t *)v51 + 218);
    v42 = v60;
    if ( v60 != 0 )
    {
      v34 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v35 = *v34;
      v13 = v42;
      v47 = v34;
      v36 = (8 * v42 + 127) & 0xFFFFFF80;
      v43 = *((void **)v35 + 3);
      if ( v36 <= *((uint32_t *)v35 + 2) && (unsigned int)(v37 = v36 + *((uint32_t *)v35 + 3)) <= *((uint32_t *)v35 + 4) )
      {
        *((uint32_t *)v35 + 3) = v37;
        v12 = v43;
      }
      else
      {
        v41 = v13;
        v44 = hkLifoAllocator::allocateFromNewSlab(v35, v36);
        v13 = v41;
        v12 = (void *)v44;
      }
    }
    else
    {
      v47 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v12 = nullptr;
      v13 = 0;
    }
    v56 = v12;
    v59 = v12;
    v58 = v13 | 0x80000000;
    (*(void (**)(uint32_t, int *, void **))(**((uint32_t **)v51 + 22) + 44))(*((uint32_t *)v51 + 22), &v53, &v56);
    v14 = *address;
    v15 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*address + 12) )
    {
      *v15 = (uint32_t)(uintptr_t)("StDelAgents");
      v16 = __rdtsc();
      v15[1] = v16;
      *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
    }
    hkpTypedBroadPhaseDispatcher::removePairs(*((uint32_t *)v51 + 23), v56, v57);
    v17 = nullptr;
    if ( v56 != v59 )
      v17 = v57;
    v57 = v17;
    v18 = (8 * v60 + 127) & 0xFFFFFF80;
    v19 = *v47;
    if ( v18 > *((uint32_t *)*v47 + 2) || *((void **)v19 + 3) != (char *)v59 + v18 || v59 == *((void **)v19 + 5) )
      hkLifoAllocator::slowBlockFree(v19, (char *)v59, (8 * v60 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v19 + 3) = (uint32_t)(uintptr_t)(v59);
    v57 = nullptr;
    if ( v58 >= 0 )
    {
      v39 = (hkpEntity::Self *)(8 * v58);
      (*(void (**)(uint32_t *, void *))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v56);
    }
  }
  v54 = 0;
  if ( v55 >= 0 )
  {
    v39 = (hkpEntity::Self *)(4 * v55);
    (*(void (**)(uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v53);
  }
  v20 = *address;
  v21 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*address + 12) )
  {
    *v21 = (uint32_t)(uintptr_t)("StRemoveCb");
    v33 = __rdtsc();
    v21[1] = v33;
    *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
  }
  if ( v5 != v49 )
  {
    while ( 1 )
    {
      hkpWorldCallbackUtil::fireEntityRemoved(v51, *v5, v39);
      hkpEntityCallbackUtil::fireEntityRemoved(*v5, v38);
      hkpWorldOperationUtil::removeEntitySI(v51, *v5, v40);
      v26 = *v5;
      if ( *((uint32_t *)*v5 + 21) != 0 )
      {
        hkpCollidable::BoundingVolumeData::deallocate((hkpWorld::Self *)((char *)v26 + 48));
        v26 = *v5;
      }
      v27 = v26;
      v28 = (volatile int32_t *)v26;
      if ( *((uint16_t *)v26 + 3) != 0 )
        goto LABEL_30;
      G4_VCALL<void>(v26, 32, v26);
      v28 = (volatile int32_t *)*v5;
      if ( *((uint16_t *)*v5 + 3) != 0 )
        break;
LABEL_34:
      if ( v49 == ++v5 )
        goto LABEL_40;
    }
    v27 = *v5;
LABEL_30:
    v46 = v27;
    do
    {
      v23 = *((uint32_t *)v28 + 1);
      HIWORD(v22) = HIWORD(v23);
      LOWORD(v22) = 0;
      v24 = v22 | (uint16_t)(v23 - 1);
      v25 = v23;
    }
    while ( v25 != __sync_val_compare_and_swap(v28 + 1, v25, v24) );
    if ( (uint16_t)v24 == 0 )
      G4_VCALL<void>(v28, 16, v46);
    goto LABEL_34;
  }
LABEL_40:
  v29 = *address;
  v30 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v30) < *(uint32_t *)(*address + 12) )
  {
    *v30 = (uint32_t)(uintptr_t)("lt");
    v31 = __rdtsc();
    v30[1] = v31;
    *(uint32_t *)(v29 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
  }
  v50 = *((uint32_t *)v51 + 35);
  result = (hkpWorld::Self *)(v50 - 1);
  *((uint32_t *)v51 + 35) = v50 - 1;
  if ( v50 == 1 && *((uint8_t *)v51 + 148) == 0 )
  {
    result = (hkpWorld::Self *)(v51);
    if ( *((uint32_t *)v51 + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(v51);
      result = (hkpWorld::Self *)(v51);
    }
    if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
      return (hkpWorld::Self *)hkpWorld::internal_executePendingBodyOperations(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::updateCollisionFilterOnEntity  (binary VA: 0x1738c10)
// Original: hkpWorld::updateCollisionFilterOnEntity
// ----------------------------------------------------------------------------
int hkpWorld::updateCollisionFilterOnEntity(hkpWorld::Self *a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *address;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v21;
  char *v22;
  int v23;
  char *CollisionEntriesDeterministicUnchecked;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  char *v33;
  uint8_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  uint64_t v42; // rax
  int v43;
  uint32_t *v44;
  hkpWorld::Self *v45;
  uint64_t v46; // rax
  uint64_t v47; // rax
  uint64_t v48; // rax
  uint64_t v49; // rax
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef hkpWorld::Self *_g4_t_v59;
  typedef hkpLinkedCollidable::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef char *_g4_t_v62;
  typedef uint8_t **_g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef char _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[263];
  enum : size_t {
    _g4_s0 = 2240u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v52)) > _g4_s1 ? (0u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v53)) > _g4_s2 ? (24u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v54)) > _g4_s3 ? (28u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v55)) > _g4_s4 ? (32u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v56)) > _g4_s5 ? (32u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v57)) > _g4_s6 ? (36u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v58)) > _g4_s7 ? (44u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v59)) > _g4_s8 ? (48u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v60)) > _g4_s9 ? (52u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v61)) > _g4_s10 ? (56u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v62)) > _g4_s11 ? (56u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v63)) > _g4_s12 ? (60u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v64)) > _g4_s13 ? (60u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (67u + sizeof(_g4_t_v65)) > _g4_s14 ? (67u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v66)) > _g4_s15 ? (68u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v67)) > _g4_s16 ? (72u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v68)) > _g4_s17 ? (76u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v69)) > _g4_s18 ? (80u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (1108u + sizeof(_g4_t_v70)) > _g4_s19 ? (1108u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (1112u + sizeof(_g4_t_v71)) > _g4_s20 ? (1112u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (1116u + sizeof(_g4_t_v72)) > _g4_s21 ? (1116u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (1120u + sizeof(_g4_t_v73)) > _g4_s22 ? (1120u + sizeof(_g4_t_v73)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 67u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 1108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 1112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 1116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 1120u);

  v73[259] = (uint32_t)(uintptr_t)(&a1);
  v59 = a1;
  v58 = a2;
  v54 = a4;
  v4 = a3;
  if ( *((uint32_t *)a1 + 35) != 0 )
  {
    LOBYTE(v70) = 19;
    v71 = a2;
    LOBYTE(v72) = a3;
    BYTE1(v72) = a4;
    LODWORD(v42) = hkpWorld::queueOperation((int)(uintptr_t)(a1), (int)(uintptr_t)(&v70));
    return v42;
  }
  address = (uint32_t *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v53 = address;
  v7 = 0;
  v8 = *(uint32_t **)(v6 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v6 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("LtUpdateFilterOnEntity");
    v8[3] = (uint32_t)(uintptr_t)("Stinit");
    v47 = __rdtsc();
    v8[1] = v47;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 4);
    v7 = *((uint32_t *)v59 + 35);
  }
  *((uint32_t *)v59 + 35) = v7 + 1;
  v60 = (hkpLinkedCollidable::Self *)(v58 + 16);
  if ( *(uint8_t *)(v58 + 232) == 5 )
    hkpLinkedCollidable::sortEntries((hkpLinkedCollidable::Self *)(v58 + 16));
  v67 = 0;
  v66 = &v69;
  v68 = -2147483520;
  if ( v4 == 0 )
  {
    v9 = *v53;
    v10 = *(uint32_t **)(*v53 + 4);
    if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v53 + 12) )
    {
      *v10 = (uint32_t)(uintptr_t)("Stbroadphase");
      v11 = __rdtsc();
      v10[1] = v11;
      *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
    }
    (*(void (**)(uint32_t, int, char **))(**((uint32_t **)v59 + 22) + 84))(*((uint32_t *)v59 + 22), v58 + 36, &v66);
    v12 = *v53;
    v13 = *(uint32_t **)(*v53 + 4);
    if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*v53 + 12) )
    {
      *v13 = (uint32_t)(uintptr_t)("Stphantom");
      v49 = __rdtsc();
      v13[1] = v49;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
    }
    v14 = v67;
    v15 = 0;
    if ( v67 <= 0 )
    {
LABEL_23:
      v23 = 0;
      CollisionEntriesDeterministicUnchecked = hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked(v60);
      v71 = 0;
      v72 = -2147483520;
      v70 = v73;
      v25 = -2147483520;
      if ( *((int *)CollisionEntriesDeterministicUnchecked + 1) > 0 )
      {
        v26 = 0;
        while ( 1 )
        {
          if ( (v25 & 0x3FFFFFFF) == v26 )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v70,
              8,
              v51);
            v26 = v71;
          }
          v71 = v26 + 1;
          v27 = &v70[2 * v26];
          *v27 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)CollisionEntriesDeterministicUnchecked + 8 * v23) + 16) + 20;
          v28 = *(uint32_t *)(*(uint32_t *)CollisionEntriesDeterministicUnchecked + 8 * v23++);
          v27[1] = *(uint32_t *)(v28 + 20) + 20;
          if ( *((uint32_t *)CollisionEntriesDeterministicUnchecked + 1) <= v23 )
            break;
          v26 = v71;
          v25 = v72;
        }
      }
      hkpTypedBroadPhaseDispatcher::removeDuplicates(&v70, &v66);
      v71 = 0;
      if ( v72 >= 0 )
        (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v70,
          8 * v72);
      goto LABEL_31;
    }
    while ( 1 )
    {
      v16 = *(uint32_t *)&v66[8 * v15 + 4] + *(char *)(*(uint32_t *)&v66[8 * v15 + 4] + 5);
      if ( *(uint8_t *)(v16 + 24) != 2 )
        goto LABEL_13;
      v17 = v16 + *(char *)(v16 + 16);
      if ( v17 == 0 )
        goto LABEL_13;
      v57 = *((uint32_t *)v59 + 29);
      (*(void (**)(char *))(*(uint32_t *)v17 + 44))(&v65);
      v55 = v65;
      v61 = v17 + 16;
      v51 = v58 + 16;
      (*(void (**)(char *))(*(uint32_t *)v57 + 24))(&v65);
      if ( v65 == 0 )
      {
        if ( v55 != 0 )
          G4_VCALL<void>(v17, 48, v60);
        if ( *(uint8_t *)(v58 + 40) == 2 )
        {
          (*(void (**)(char *))(*(uint32_t *)((char *)v60 + *(char *)(v58 + 32)) + 44))(&v65);
          if ( v65 != 0 )
            (*(void (**)(int, int))(*(uint32_t *)((char *)v60 + *(char *)(v58 + 32)) + 48))(
              (int)(uintptr_t)(v60) + *(char *)(v58 + 32),
              v61);
        }
        goto LABEL_19;
      }
      if ( v55 != 0 )
      {
        v18 = v58;
        if ( *(uint8_t *)(v58 + 40) == 2 )
          goto LABEL_72;
      }
      else
      {
        G4_VCALL<void>(v17, 40, v60);
        v18 = v58;
        if ( *(uint8_t *)(v58 + 40) == 2 )
        {
LABEL_72:
          (*(void (**)(char *))(*(uint32_t *)((char *)v60 + *(char *)(v18 + 32)) + 44))(&v65);
          if ( v65 == 0 )
            (*(void (**)(int, int))(*(uint32_t *)((char *)v60 + *(char *)(v58 + 32)) + 40))(
              (int)(uintptr_t)(v60) + *(char *)(v58 + 32),
              v61);
        }
      }
LABEL_19:
      if ( v54 != 0 )
        G4_VCALL<void>(v17, 60);
      v19 = v67 - 1;
      if ( v15 == --v67 )
      {
        v14 = v15--;
LABEL_13:
        if ( ++v15 >= v14 )
          goto LABEL_23;
      }
      else
      {
        v21 = &v66[8 * v19];
        v22 = &v66[8 * v15];
        *(uint32_t *)v22 = *(uint32_t *)v21;
        *((uint32_t *)v22 + 1) = *((uint32_t *)v21 + 1);
        v14 = v67;
        if ( v15 >= v67 )
          goto LABEL_23;
      }
    }
  }
LABEL_31:
  v29 = *v53;
  v30 = *(uint32_t **)(*v53 + 4);
  if ( (unsigned int)(uintptr_t)(v30) < *(uint32_t *)(*v53 + 12) )
  {
    *v30 = (uint32_t)(uintptr_t)("StcheckAgts");
    v46 = __rdtsc();
    v30[1] = v46;
    *(uint32_t *)(v29 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
  }
  v31 = 0;
  v56 = *(char *)(v58 + 42);
  v62 = hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked(v60);
  if ( *((int *)v62 + 1) > 0 )
  {
    do
    {
      while ( 1 )
      {
        v63 = (uint8_t **)(8 * v31 + *(uint32_t *)v62);
        v52 = (int)(uintptr_t)(v63[1]);
        (*(void (**)(char *))(**((uint32_t **)v59 + 29) + 24))(&v65);
        if ( v65 != 0 )
        {
          v34 = v63[1];
          v35 = (char)v34[26];
          if ( *(uint8_t *)(v35 + *((uint32_t *)v59 + 30) + 10 * v56 + 7776) != 0 )
            break;
        }
LABEL_38:
        --v31;
        hkpWorldAgentUtil::removeAgentAndItsToiEvents(*v63);
        *(uint8_t *)(*(uint32_t *)(v58 + 200) + 37) = *(uint8_t *)(*(uint32_t *)(v58 + 200) + 37) & 0xFC | 1;
LABEL_39:
        if ( *((uint32_t *)v62 + 1) <= ++v31 )
          goto LABEL_47;
      }
      if ( (*v63)[12] != *(char *)(v35 + *((uint32_t *)v59 + 30) + 10 * v56 + 7776) )
      {
        v32 = v67;
        if ( v67 == (v68 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v66,
            8,
            v52);
          v32 = v67;
        }
        v67 = v32 + 1;
        v33 = &v66[8 * v32];
        *(uint32_t *)v33 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v62 + 8 * v31) + 16) + 20;
        *((uint32_t *)v33 + 1) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v62 + 8 * v31) + 20) + 20;
        goto LABEL_38;
      }
      if ( v54 != 1 )
        goto LABEL_39;
      if ( *(uint8_t *)(v58 + 232) == 5 )
        v36 = *(uint32_t *)&v34[(char)v34[16] + 200];
      else
        v36 = *(uint32_t *)(v58 + 200);
      ++v31;
      hkAgentNnMachine_UpdateShapeCollectionFilter(*v63, *((uint32_t **)v59 + 28), v36);
    }
    while ( *((uint32_t *)v62 + 1) > v31 );
  }
LABEL_47:
  v37 = v67;
  if ( v67 > 0 )
  {
    v38 = *v53;
    v39 = *(uint32_t **)(*v53 + 4);
    if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(*v53 + 12) )
    {
      *v39 = (uint32_t)(uintptr_t)("StaddAgts");
      v48 = __rdtsc();
      v39[1] = v48;
      *(uint32_t *)(v38 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
      v37 = v67;
    }
    v40 = 0;
    v41 = *((uint32_t *)v59 + 29);
    if ( v41 != 0 )
      v40 = v41 + 8;
    hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)v59 + 23), v66, v37, v40);
  }
  v64 = *((uint32_t *)v59 + 35);
  *((uint32_t *)v59 + 35) = v64 - 1;
  if ( v64 == 1 && *((uint8_t *)v59 + 148) == 0 )
  {
    v45 = v59;
    if ( *((uint32_t *)v59 + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(v59);
      v45 = v59;
    }
    if ( *((uint32_t *)v45 + 39) == 1 && *((uint32_t *)v45 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(v45);
  }
  v67 = 0;
  if ( v68 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v66,
      8 * v68);
  LODWORD(v42) = (uint32_t)(uintptr_t)(v53);
  v43 = *v53;
  v44 = *(uint32_t **)(*v53 + 4);
  if ( (unsigned int)(uintptr_t)(v44) < *(uint32_t *)(*v53 + 12) )
  {
    *v44 = (uint32_t)(uintptr_t)("lt");
    v42 = __rdtsc();
    v44[1] = v42;
    *(uint32_t *)(v43 + 4) = (uint32_t)(uintptr_t)(v44 + 3);
  }
  return v42;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addPhantom  (binary VA: 0x1739520)
// Original: hkpWorld::addPhantom
// ----------------------------------------------------------------------------
hkpPhantom::Self * hkpWorld::addPhantom(hkpWorld::Self *self, hkpPhantom::Self *a2)
{
  int v2;
  bool v3;
  int v4;
  int v6;
  int32_t v7; // kr00_4
  typedef hkpPhantom::Self *_g4_t_v8;
  typedef hkpPhantom::Self *_g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v2 = *((uint32_t *)self + 35);
  if ( v2 + *((uint32_t *)self + 36) != 0 )
  {
    LOBYTE(v11[0]) = 14;
    v11[1] = (uint32_t)(uintptr_t)(a2);
    hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(v11));
    return nullptr;
  }
  else
  {
    *((uint32_t *)self + 35) = v2 + 1;
    if ( *((uint32_t *)a2 + 6) == 0 )
      *((uint32_t *)a2 + 6) = G4_VCALL<int>(a2, 28);
    v3 = *((uint16_t *)a2 + 3) == 0;
    *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(self);
    if ( !v3 )
    {
      v10 = (volatile int32_t *)((char *)a2 + 4);
      do
      {
        v7 = *((uint32_t *)a2 + 1);
        HIWORD(v6) = HIWORD(v7);
        LOWORD(v6) = 0;
      }
      while ( v7 != __sync_val_compare_and_swap(v10, v7, v6 | (uint16_t)(v7 + 1)) );
    }
    v4 = *((uint32_t *)self + 70);
    if ( v4 == (*((uint32_t *)self + 71) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpWorld::Self *)((char *)self + 276),
        4,
        (int)(uintptr_t)(v10));
      v4 = *((uint32_t *)self + 70);
    }
    *(uint32_t *)(*((uint32_t *)self + 69) + 4 * v4) = (uint32_t)(uintptr_t)(a2);
    ++*((uint32_t *)self + 70);
    hkpWorldOperationUtil::addPhantomBP(self, a2, v8);
    hkpWorldCallbackUtil::firePhantomAdded(self, a2, v9);
    hkpPhantom::firePhantomAdded(a2);
    v3 = (*((uint32_t *)self + 35))-- == 1;
    if ( v3 && *((uint8_t *)self + 148) == 0 )
    {
      if ( *((uint32_t *)self + 33) != 0 )
        hkpWorld::internal_executePendingOperations(self);
      if ( *((uint32_t *)self + 39) == 1 && *((uint32_t *)self + 34) != 0 )
        hkpWorld::internal_executePendingBodyOperations(self);
    }
    return a2;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addPhantomBatch  (binary VA: 0x17396b0)
// Original: hkpWorld::addPhantomBatch
// ----------------------------------------------------------------------------
int hkpWorld::addPhantomBatch(hkpWorld::Self *self, hkpPhantom::Self *const *a2, int a3)
{
  int result;
  int v4;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v6;
  hkpWorld::Self *v7;
  char *v8;
  signed int v9;
  hkLifoAllocator::Self *v10;
  signed int v11;
  char *v12;
  hkpWorld::Self *v13;
  int v14;
  int v15;
  int v16;
  hkpPhantom::Self *v17;
  char *v18;
  int v19;
  int32_t v20; // kr00_4
  int v21;
  char *v22;
  hkpWorld::Self *v23;
  int v24;
  int v25;
  hkpWorld::Self *v26;
  bool v27;
  hkpPhantom::Self *const *v28;
  hkLifoAllocator::Self *v29;
  signed int v30;
  int v31;
  hkLifoAllocator::Self *v32;
  signed int v33;
  int v34;
  hkLifoAllocator::Self *v35;
  signed int v36;
  signed int v37;
  hkLifoAllocator::Self *v38;
  int v39;
  typedef hkpPhantom::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef hkMemoryAllocator::Self *_g4_t_v42;
  typedef hkLifoAllocator::Self **_g4_t_v43;
  typedef hkpWorld::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef hkpWorld::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef hkpWorld::Self *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef signed int _g4_t_v52;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef signed int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef hkpPhantom::Self *const *_g4_t_v61;
  typedef signed int _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int _g4_t_v64;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v40)) > _g4_s0 ? (8u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v41)) > _g4_s1 ? (12u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v42)) > _g4_s2 ? (16u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v43)) > _g4_s3 ? (20u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v44)) > _g4_s4 ? (24u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v45)) > _g4_s5 ? (24u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v46)) > _g4_s6 ? (24u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v47)) > _g4_s7 ? (28u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v48)) > _g4_s8 ? (28u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v49)) > _g4_s9 ? (28u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v50)) > _g4_s10 ? (32u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v51)) > _g4_s11 ? (36u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v52)) > _g4_s12 ? (40u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v53)) > _g4_s13 ? (44u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v54)) > _g4_s14 ? (48u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v55)) > _g4_s15 ? (64u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v56)) > _g4_s16 ? (68u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v57)) > _g4_s17 ? (72u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v58)) > _g4_s18 ? (76u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v59)) > _g4_s19 ? (80u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v60)) > _g4_s20 ? (96u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v61)) > _g4_s21 ? (100u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v62)) > _g4_s22 ? (104u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v63)) > _g4_s23 ? (108u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v64)) > _g4_s24 ? (112u + sizeof(_g4_t_v64)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 100u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 108u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);

  result = a3;
  if ( a3 > 0 )
  {
    v4 = *((uint32_t *)self + 35);
    if ( v4 + *((uint32_t *)self + 36) != 0 )
    {
      v61 = a2;
      LOWORD(v62) = a3;
      LOBYTE(v60) = 16;
      return hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v60));
    }
    else
    {
      *((uint32_t *)self + 35) = v4 + 1;
      v54 = a3;
      v50 = nullptr;
      v51 = 0;
      v52 = 0x80000000;
      address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v6 = *address;
      v43 = address;
      v7 = self;
      v8 = *((char **)*address + 3);
      v9 = (4 * a3 + 127) & 0xFFFFFF80;
      if ( v9 <= *((uint32_t *)v6 + 2) && (unsigned int)(uintptr_t)(&v8[v9]) <= *((uint32_t *)v6 + 4) )
      {
        *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(&v8[v9]);
      }
      else
      {
        v8 = (char *)hkLifoAllocator::allocateFromNewSlab(v6, (4 * a3 + 127) & 0xFFFFFF80);
        v7 = self;
      }
      v53 = v8;
      v50 = v8;
      v59 = a3;
      v52 = a3 | 0x80000000;
      v57 = 0x80000000;
      v10 = *v43;
      v11 = (32 * a3 + 127) & 0xFFFFFF80;
      v55 = nullptr;
      v56 = 0;
      v12 = *((char **)v10 + 3);
      if ( v11 <= *((uint32_t *)v10 + 2) && (unsigned int)(uintptr_t)(&v12[v11]) <= *((uint32_t *)v10 + 4) )
      {
        *((uint32_t *)v10 + 3) = (uint32_t)(uintptr_t)(&v12[v11]);
      }
      else
      {
        v44 = v7;
        v12 = (char *)hkLifoAllocator::allocateFromNewSlab(v10, (32 * a3 + 127) & 0xFFFFFF80);
        v7 = v44;
      }
      v55 = v12;
      v58 = v12;
      v57 = a3 | 0x80000000;
      v56 = a3;
      v51 = a3;
      v47 = 0;
      v13 = v7;
      v42 = (hkMemoryAllocator::Self *)((hkpWorld::Self *)((char *)v7 + 276));
      v14 = 0;
      do
      {
        v16 = 4 * v14;
        v17 = a2[v14];
        if ( *((uint32_t *)v17 + 6) == 0 )
        {
          v45 = 4 * v14;
          *((uint32_t *)v17 + 6) = G4_VCALL<int>(v17, 28);
          v16 = v45;
        }
        v18 = v50;
        *((uint32_t *)v17 + 2) = (uint32_t)(uintptr_t)(v13);
        *(uint32_t *)&v18[v16] = (uint32_t)(uintptr_t)((char *)v17 + 36);
        G4_VCALL<void>(v17, 36, &v55[32 * v47]);
        hkpPhantom::setBoundingVolumeData(v17, (const hkAabb::Self *)&v55[32 * v47]);
        if ( *((uint16_t *)v17 + 3) != 0 )
        {
          do
          {
            v20 = *((uint32_t *)v17 + 1);
            HIWORD(v19) = HIWORD(v20);
            LOWORD(v19) = 0;
          }
          while ( v20 != __sync_val_compare_and_swap(
                           (volatile int32_t *)v17 + 1,
                           v20,
                           v19 | (uint16_t)(v20 + 1)) );
        }
        v15 = *((uint32_t *)v13 + 70);
        if ( v15 == (*((uint32_t *)v13 + 71) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v42, 4, v41);
          v15 = *((uint32_t *)v13 + 70);
        }
        *(uint32_t *)(*((uint32_t *)v13 + 69) + 4 * v15) = (uint32_t)(uintptr_t)(v17);
        ++*((uint32_t *)v13 + 70);
        hkpWorldCallbackUtil::firePhantomAdded(v13, v17, v40);
        hkpPhantom::firePhantomAdded(v17);
        v14 = ++v47;
      }
      while ( v47 != a3 );
      v21 = *((uint32_t *)v13 + 218);
      v22 = nullptr;
      v23 = v13;
      v60 = nullptr;
      v61 = nullptr;
      v62 = 0x80000000;
      v64 = v21;
      if ( v21 != 0 )
      {
        v37 = (8 * v21 + 127) & 0xFFFFFF80;
        v38 = *v43;
        v49 = *((char **)*v43 + 3);
        if ( v37 <= *((uint32_t *)*v43 + 2) && (unsigned int)(v39 = v37 + *((uint32_t *)*v43 + 3)) <= *((uint32_t *)v38 + 4) )
        {
          *((uint32_t *)v38 + 3) = v39;
          v22 = v49;
        }
        else
        {
          v46 = v23;
          v22 = (char *)hkLifoAllocator::allocateFromNewSlab(v38, (8 * v21 + 127) & 0xFFFFFF80);
          v23 = v46;
        }
      }
      v60 = v22;
      v63 = v22;
      v24 = *((uint32_t *)v23 + 22);
      v62 = v21 | 0x80000000;
      v48 = v23;
      G4_VCALL<void>(v24, 36, &v50, &v55, &v60);
      v25 = 0;
      if ( *((uint32_t *)v48 + 29) != 0 )
        v25 = *((uint32_t *)v48 + 29) + 8;
      hkpTypedBroadPhaseDispatcher::addPairs(*((uint32_t *)v48 + 23), v60, v61, v25);
      v26 = v48;
      v27 = (*((uint32_t *)v48 + 35))-- == 1;
      if ( v27 && *((uint8_t *)v48 + 148) == 0 )
      {
        if ( *((uint32_t *)v48 + 33) != 0 )
        {
          hkpWorld::internal_executePendingOperations(v48);
          v26 = v48;
        }
        if ( *((uint32_t *)v26 + 39) == 1 && *((uint32_t *)v26 + 34) != 0 )
          hkpWorld::internal_executePendingBodyOperations(v26);
      }
      v28 = nullptr;
      if ( v60 != v63 )
        v28 = v61;
      v29 = *v43;
      v61 = v28;
      v30 = (8 * v64 + 127) & 0xFFFFFF80;
      if ( v30 > *((uint32_t *)v29 + 2) || *((char **)v29 + 3) != &v63[v30] || v63 == *((char **)v29 + 5) )
        hkLifoAllocator::slowBlockFree(v29, v63, v30);
      else
        *((uint32_t *)v29 + 3) = (uint32_t)(uintptr_t)(v63);
      v61 = nullptr;
      if ( v62 >= 0 )
        (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v60,
          8 * v62);
      v31 = 0;
      if ( v55 != v58 )
        v31 = v56;
      v56 = v31;
      v60 = nullptr;
      v62 = 0x80000000;
      v32 = *v43;
      v33 = (32 * v59 + 127) & 0xFFFFFF80;
      if ( v33 > *((uint32_t *)*v43 + 2) || *((char **)v32 + 3) != &v58[v33] || v58 == *((char **)v32 + 5) )
        hkLifoAllocator::slowBlockFree(v32, v58, (32 * v59 + 127) & 0xFFFFFF80);
      else
        *((uint32_t *)v32 + 3) = (uint32_t)(uintptr_t)(v58);
      v56 = 0;
      if ( v57 >= 0 )
        (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v55,
          32 * v57);
      v34 = 0;
      if ( v50 != v53 )
        v34 = v51;
      v57 = 0x80000000;
      v35 = *v43;
      v51 = v34;
      v55 = nullptr;
      v36 = (4 * v54 + 127) & 0xFFFFFF80;
      if ( v36 > *((uint32_t *)v35 + 2) || *((char **)v35 + 3) != &v53[v36] || v53 == *((char **)v35 + 5) )
        hkLifoAllocator::slowBlockFree(v35, v53, v36);
      else
        *((uint32_t *)v35 + 3) = (uint32_t)(uintptr_t)(v53);
      result = v52;
      v51 = 0;
      if ( v52 >= 0 )
        return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v50,
                 4 * v52);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removePhantomBatch  (binary VA: 0x1739ca0)
// Original: hkpWorld::removePhantomBatch
// ----------------------------------------------------------------------------
int hkpWorld::removePhantomBatch(hkpWorld::Self *self, hkpPhantom::Self *const *a2, int a3)
{
  int result;
  int v4;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v6;
  char *v7;
  signed int v8;
  int v9;
  int v10;
  char *v11;
  hkpWorld::Self *v12;
  hkpPhantom::Self *v13;
  int v14;
  hkpPhantom::Self **v15;
  int v16;
  int v17;
  int v18;
  int32_t v19; // kr00_4
  int32_t v20;
  int32_t v21; // ett
  hkpWorld::Self *v22;
  int v23;
  signed int v24;
  hkLifoAllocator::Self *v25;
  hkpWorld::Self *v26;
  char *v27;
  int v28;
  int v29;
  hkpPhantom::Self *const *v30;
  hkLifoAllocator::Self *v31;
  signed int v32;
  signed int v33;
  hkLifoAllocator::Self *v34;
  typedef hkpPhantom::Self *_g4_t_v35;
  typedef hkLifoAllocator::Self **_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_i;
  typedef int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef signed int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef hkpPhantom::Self *const *_g4_t_v46;
  typedef signed int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v36)) > _g4_s1 ? (20u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v37)) > _g4_s2 ? (24u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_i)) > _g4_s3 ? (28u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v43)) > _g4_s8 ? (44u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v44)) > _g4_s9 ? (48u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v45)) > _g4_s10 ? (64u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v46)) > _g4_s11 ? (68u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v47)) > _g4_s12 ? (72u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v48)) > _g4_s13 ? (76u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v49)) > _g4_s14 ? (80u + sizeof(_g4_t_v49)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);

  result = a3;
  if ( a3 <= 0 )
    return result;
  v4 = *((uint32_t *)self + 35);
  if ( v4 + *((uint32_t *)self + 36) != 0 )
  {
    v46 = a2;
    LOWORD(v47) = a3;
    LOBYTE(v45) = 17;
    return hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v45));
  }
  v40 = nullptr;
  *((uint32_t *)self + 35) = v4 + 1;
  v44 = a3;
  v41 = 0;
  v42 = 0x80000000;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v6 = *address;
  v36 = address;
  v7 = *((char **)*address + 3);
  v8 = (4 * a3 + 127) & 0xFFFFFF80;
  if ( v8 <= *((uint32_t *)v6 + 2) && (unsigned int)(uintptr_t)(&v7[v8]) <= *((uint32_t *)v6 + 4) )
  {
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(&v7[v8]);
    v9 = 0;
  }
  else
  {
    v7 = (char *)hkLifoAllocator::allocateFromNewSlab(v6, (4 * a3 + 127) & 0xFFFFFF80);
    v9 = v41;
  }
  v40 = v7;
  v43 = v7;
  v42 = a3 | 0x80000000;
  v10 = 0;
  v11 = v7;
  while ( 1 )
  {
    v12 = (hkpWorld::Self *)(a2[v10++]);
    *(uint32_t *)&v11[4 * v9] = (uint32_t)(uintptr_t)((char *)v12 + 36);
    ++v41;
    hkpWorldCallbackUtil::firePhantomRemoved(self, v12, v35);
    hkpPhantom::firePhantomRemoved(v12);
    if ( v10 == a3 )
      break;
    v11 = v40;
    v9 = v41;
  }
  if ( v41 != 0 )
  {
    v26 = self;
    v27 = nullptr;
    v45 = nullptr;
    v46 = nullptr;
    v47 = 0x80000000;
    v49 = *((uint32_t *)self + 218);
    v28 = v49;
    if ( v49 != 0 )
    {
      v33 = (8 * v49 + 127) & 0xFFFFFF80;
      v34 = *v36;
      v27 = *((char **)*v36 + 3);
      if ( v33 <= *((uint32_t *)*v36 + 2) && (unsigned int)(uintptr_t)(&v27[v33]) <= *((uint32_t *)v34 + 4) )
        *((uint32_t *)v34 + 3) = (uint32_t)(uintptr_t)(&v27[v33]);
      else
        v27 = (char *)hkLifoAllocator::allocateFromNewSlab(v34, (8 * v49 + 127) & 0xFFFFFF80);
      v26 = self;
    }
    v45 = v27;
    v48 = v27;
    v29 = *((uint32_t *)v26 + 22);
    v47 = v28 | 0x80000000;
    G4_VCALL<void>(v29, 44, &v40, &v45);
    hkpTypedBroadPhaseDispatcher::removePairs(*((uint32_t *)self + 23), v45, v46);
    v30 = nullptr;
    if ( v45 != v48 )
      v30 = v46;
    v46 = v30;
    v31 = *v36;
    v32 = (8 * v49 + 127) & 0xFFFFFF80;
    if ( v32 > *((uint32_t *)*v36 + 2) || *((char **)v31 + 3) != &v48[v32] || v48 == *((char **)v31 + 5) )
      hkLifoAllocator::slowBlockFree(v31, v48, v32);
    else
      *((uint32_t *)v31 + 3) = (uint32_t)(uintptr_t)(v48);
    v46 = nullptr;
    if ( v47 >= 0 )
      (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v45,
        8 * v47);
  }
  for ( i = 0; i != a3; ++i )
  {
    v13 = a2[i];
    *((uint32_t *)v13 + 2) = 0;
    v14 = *((uint32_t *)self + 70);
    v15 = *((hkpPhantom::Self ***)self + 69);
    if ( v14 > 0 )
    {
      v16 = 0;
      if ( v13 == *v15 )
      {
        v37 = 0;
        goto LABEL_19;
      }
      while ( ++v16 != v14 )
      {
        if ( v13 == v15[v16] )
        {
          v37 = v16;
          goto LABEL_19;
        }
      }
    }
    v37 = -1;
    v16 = -1;
LABEL_19:
    v17 = v14 - 1;
    *((uint32_t *)self + 70) = v17;
    if ( v16 != v17 )
      v15[v37] = v15[v17];
    if ( *((uint16_t *)v13 + 3) == 0 )
    {
      G4_VCALL<void>(v13, 64);
      if ( *((uint16_t *)v13 + 3) == 0 )
        continue;
    }
    do
    {
      v19 = *((uint32_t *)v13 + 1);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
      v20 = v18 | (uint16_t)(v19 - 1);
      v21 = v19;
    }
    while ( v21 != __sync_val_compare_and_swap((volatile int32_t *)v13 + 1, v21, v20) );
    if ( (uint16_t)v20 == 0 )
      G4_VCALL<void>(v13, 16);
  }
  v39 = *((uint32_t *)self + 35);
  *((uint32_t *)self + 35) = v39 - 1;
  if ( v39 == 1 && *((uint8_t *)self + 148) == 0 )
  {
    v22 = self;
    if ( *((uint32_t *)self + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(self);
      v22 = self;
    }
    if ( *((uint32_t *)v22 + 39) == 1 && *((uint32_t *)v22 + 34) != 0 )
      hkpWorld::internal_executePendingBodyOperations(v22);
  }
  v23 = 0;
  if ( v40 != v43 )
    v23 = v41;
  v41 = v23;
  v24 = (4 * v44 + 127) & 0xFFFFFF80;
  v25 = *v36;
  if ( v24 > *((uint32_t *)*v36 + 2) || *((char **)v25 + 3) != &v43[v24] || v43 == *((char **)v25 + 5) )
    hkLifoAllocator::slowBlockFree(v25, v43, (4 * v44 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v25 + 3) = (uint32_t)(uintptr_t)(v43);
  result = v42;
  v41 = 0;
  if ( v42 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v40,
             4 * v42);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeAll  (binary VA: 0x173a140)
// Original: hkpWorld::removeAll
// ----------------------------------------------------------------------------
int hkpWorld::removeAll(hkpWorld::Self *self)
{
  hkpWorld::Self *v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  hkpEntity::Self **v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int i;
  int v24;
  hkpEntity::Self **v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int j;
  int v34;
  int v35;
  unsigned int v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  hkpWorld::Self **v41;
  hkpEntity::Self **v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  hkpWorldCallbackUtil::Self *v47;
  int v49;
  int v50;
  int v51;
  int v52;
  typedef hkpEntity::Self **_g4_t_v53;
  typedef hkpSimulationIsland::Self *_g4_t_v54;
  typedef signed int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef hkpWorldCallbackUtil::Self *_g4_t_v67;
  typedef char _g4_t_v68[4];
  typedef hkpEntity::Self **_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef hkpWorld::Self **_g4_t_v72;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v53)) > _g4_s0 ? (8u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v54)) > _g4_s1 ? (12u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v55)) > _g4_s2 ? (32u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v56)) > _g4_s3 ? (40u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v57)) > _g4_s4 ? (44u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v58)) > _g4_s5 ? (48u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v59)) > _g4_s6 ? (48u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v60)) > _g4_s7 ? (48u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v61)) > _g4_s8 ? (52u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v62)) > _g4_s9 ? (52u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v63)) > _g4_s10 ? (52u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v64)) > _g4_s11 ? (56u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v65)) > _g4_s12 ? (56u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v66)) > _g4_s13 ? (56u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v67)) > _g4_s14 ? (60u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v68)) > _g4_s15 ? (64u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v69)) > _g4_s16 ? (68u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v70)) > _g4_s17 ? (72u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v71)) > _g4_s18 ? (76u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v72)) > _g4_s19 ? (92u + sizeof(_g4_t_v72)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);

  v72 = &self;
  v1 = self;
  v67 = (hkpWorldCallbackUtil::Self *)(self);
  hkpWorld::removePhantomBatch(self, *((hkpPhantom::Self *const **)self + 69), *((uint32_t *)self + 70));
  v2 = *((uint32_t *)v1 + 8);
  v3 = *((uint32_t *)v1 + 11);
  v69 = nullptr;
  v70 = 0;
  v71 = 0x80000000;
  v4 = *(uint32_t *)(v2 + 80);
  if ( v3 > 0 )
  {
    v5 = *((int **)v1 + 10);
    v6 = &v5[v3];
    do
    {
      v7 = *v5++;
      v4 += *(uint32_t *)(v7 + 80);
    }
    while ( v5 != v6 );
  }
  v8 = *((uint32_t *)v67 + 14);
  if ( v8 > 0 )
  {
    v9 = *((int **)v67 + 13);
    v10 = &v9[v8];
    do
    {
      v11 = *v9++;
      v4 += *(uint32_t *)(v11 + 80);
    }
    while ( v9 != v10 );
  }
  if ( v4 <= 0 )
  {
    v13 = 0;
    v12 = 0x80000000;
    v64 = 0;
  }
  else
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v68,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
      (int *)&v69,
      v4,
      4);
    v3 = *((uint32_t *)v67 + 11);
    v64 = v70;
    v12 = v71;
    v13 = v71 & 0x3FFFFFFF;
  }
  if ( v3 > 0 )
  {
    v14 = v64;
    v61 = 0;
    while ( 1 )
    {
      v18 = v12 & 0x3FFFFFFF;
      v19 = *(uint32_t *)(*((uint32_t *)v67 + 10) + 4 * v61);
      v20 = *(uint32_t *)(v19 + 80);
      v21 = *(uint32_t *)(v19 + 76);
      v64 = v14 + v20;
      if ( (int)(v14 + v20) > v18 )
      {
        v22 = 2 * v18;
        if ( (int)(v14 + v20) >= v22 )
          v22 = v14 + v20;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v68,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)&v69,
          v22,
          4);
        v14 = v70;
      }
      v15 = &v69[v14];
      if ( (int)v20 > 0 )
      {
        if ( ((unsigned int)(uintptr_t)(v15) >= v21 + 16 || v21 >= (unsigned int)(uintptr_t)(v15 + 4)) && v20 > 0xB )
        {
          v16 = 0;
          v58 = 4 * (v20 >> 2);
          v17 = 0;
          do
          {
            ++v17;
            *(__m128i *)&v15[v16] = *(__m128i *)(v21 + v16 * 4);
            v16 += 4;
          }
          while ( v17 < v20 >> 2 );
          if ( v58 != v20 )
          {
            v15[4 * (v20 >> 2)] = *(hkpEntity::Self **)(v21 + 16 * (v20 >> 2));
            if ( (int)v20 > v58 + 1 )
            {
              v15[v58 + 1] = *(hkpEntity::Self **)(v21 + 4 * (v58 + 1));
              if ( (int)v20 > v58 + 2 )
                v15[v58 + 2] = *(hkpEntity::Self **)(v21 + 4 * (v58 + 2));
            }
          }
        }
        else
        {
          for ( i = 0; i != v20; ++i )
            v15[i] = *(hkpEntity::Self **)(v21 + 4 * i);
        }
      }
      ++v61;
      v70 = v64;
      if ( *((uint32_t *)v67 + 11) <= v61 )
        break;
      v12 = v71;
      v14 = v64;
    }
    v12 = v71;
    v13 = v71 & 0x3FFFFFFF;
  }
  if ( *((int *)v67 + 14) > 0 )
  {
    v24 = v64;
    v62 = 0;
    while ( 1 )
    {
      v28 = v12 & 0x3FFFFFFF;
      v29 = *(uint32_t *)(*((uint32_t *)v67 + 13) + 4 * v62);
      v30 = *(uint32_t *)(v29 + 80);
      v31 = *(uint32_t *)(v29 + 76);
      v64 = v24 + v30;
      if ( (int)(v24 + v30) > v28 )
      {
        v32 = 2 * v28;
        if ( (int)(v24 + v30) >= v32 )
          v32 = v24 + v30;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v68,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          (int *)&v69,
          v32,
          4);
        v24 = v70;
      }
      v25 = &v69[v24];
      if ( (int)v30 > 0 )
      {
        if ( ((unsigned int)(uintptr_t)(v25) >= v31 + 16 || v31 >= (unsigned int)(uintptr_t)(v25 + 4)) && v30 > 0xB )
        {
          v26 = 0;
          v59 = 4 * (v30 >> 2);
          v27 = 0;
          do
          {
            ++v27;
            *(__m128i *)&v25[v26] = *(__m128i *)(v31 + v26 * 4);
            v26 += 4;
          }
          while ( v27 < v30 >> 2 );
          if ( v59 != v30 )
          {
            v25[4 * (v30 >> 2)] = *(hkpEntity::Self **)(v31 + 16 * (v30 >> 2));
            if ( (int)v30 > v59 + 1 )
            {
              v25[v59 + 1] = *(hkpEntity::Self **)(v31 + 4 * (v59 + 1));
              if ( (int)v30 > v59 + 2 )
                v25[v59 + 2] = *(hkpEntity::Self **)(v31 + 4 * (v59 + 2));
            }
          }
        }
        else
        {
          for ( j = 0; j != v30; ++j )
            v25[j] = *(hkpEntity::Self **)(v31 + 4 * j);
        }
      }
      ++v62;
      v70 = v64;
      if ( *((uint32_t *)v67 + 14) <= v62 )
        break;
      v12 = v71;
      v24 = v64;
    }
    v13 = v71 & 0x3FFFFFFF;
  }
  v34 = *((uint32_t *)v67 + 9);
  v35 = *((uint32_t *)v67 + 8);
  v36 = *(uint32_t *)(v35 + 80);
  if ( (int)v36 <= 0 )
  {
    v57 = v64 - 1;
    v37 = *(uint32_t **)(v35 + 76);
    v39 = v36 + v64;
    v60 = v36 + v64;
    if ( (int)(v36 + v64) <= v13 )
    {
LABEL_67:
      v41 = (hkpWorld::Self **)(v69);
      goto LABEL_68;
    }
  }
  else
  {
    v37 = *(uint32_t **)(v35 + 76);
    v38 = 0;
    if ( v34 != *v37 )
    {
      while ( ++v38 != v36 )
      {
        if ( v34 == v37[v38] )
          goto LABEL_57;
      }
      v38 = -1;
    }
LABEL_57:
    v57 = v64 + v38;
    v39 = v36 + v64;
    v60 = v36 + v64;
    if ( (int)(v36 + v64) <= v13 )
    {
      v40 = v64;
      v41 = (hkpWorld::Self **)(v69);
      v42 = &v69[v64];
LABEL_59:
      v63 = (unsigned int)(uintptr_t)(&v41[v40]);
      if ( (v63 >= (unsigned int)(uintptr_t)(v37 + 4) || (unsigned int)(uintptr_t)(v37) >= v63 + 16) && v36 > 0xB )
      {
        v55 = v36;
        v65 = 0;
        v43 = 4 * (v36 >> 2);
        v44 = v36 >> 2;
        v56 = v43;
        v45 = 0;
        do
        {
          ++v65;
          *(__m128i *)(v63 + v45 * 4) = *(__m128i *)&v37[v45];
          v45 += 4;
        }
        while ( v65 < v44 );
        if ( v55 != v56 )
        {
          v42[v56] = (hkpEntity::Self *)v37[v56];
          if ( v55 > v56 + 1 )
          {
            v42[v56 + 1] = (hkpEntity::Self *)v37[v56 + 1];
            if ( v55 > v56 + 2 )
              v42[v56 + 2] = (hkpEntity::Self *)v37[v56 + 2];
          }
        }
      }
      else
      {
        v51 = 0;
        do
        {
          v42[v51] = (hkpEntity::Self *)v37[v51];
          ++v51;
        }
        while ( v51 != v36 );
      }
      goto LABEL_67;
    }
  }
  v52 = 2 * v13;
  v66 = v36;
  if ( v39 >= v52 )
    v52 = v39;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v68, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, (int *)&v69, v52, 4);
  v40 = v70;
  v41 = (hkpWorld::Self **)(v69);
  v36 = v66;
  v42 = &v69[v70];
  if ( v66 > 0 )
    goto LABEL_59;
LABEL_68:
  v46 = v57;
  v70 = v60 - 1;
  if ( v57 != v60 - 1 )
  {
    v41[v57] = v41[v60 - 1];
    v46 = v70;
    v41 = (hkpWorld::Self **)(v69);
  }
  hkpWorld::removeEntityBatch(v67, v41, v46);
  v70 = 0;
  if ( v71 >= 0 )
  {
    v54 = (hkpSimulationIsland::Self *)(4 * v71);
    v53 = v69;
    (*(void (**)(uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 20))((uint32_t *)(hkContainerTempAllocator::s_alloc));
  }
  v47 = v67;
  if ( *((uint8_t *)v67 + 196) == 0 )
  {
    hkpWorldOperationUtil::removeIslandFromDirtyList(
      v67,
      *(hkpWorld::Self **)(*((uint32_t *)v67 + 10) + 4 * *((uint32_t *)v67 + 11) - 4),
      v54);
    v49 = *((uint32_t *)v67 + 11);
    v50 = *(uint32_t *)(*((uint32_t *)v67 + 10) + 4 * v49 - 4);
    if ( v50 != 0 )
    {
      G4_VCALL<void>(v50, 4);
      v49 = *((uint32_t *)v67 + 11);
    }
    *((uint32_t *)v67 + 11) = v49 - 1;
    v47 = v67;
  }
  return hkpWorldCallbackUtil::fireWorldRemoveAll(v47, (hkpWorld::Self *)v53);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::Destroy  (binary VA: 0x173a710)
// Original: hkpWorld::~hkpWorld
// ----------------------------------------------------------------------------
void hkpWorld::Destroy(hkpWorld::Self *self)
{
  hkpWorld::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  pthread_mutex_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int32_t v15; // kr04_4
  int32_t v16;
  int32_t v17; // ett
  hkpWorld::Self *v18;
  int v19;
  pthread_mutex_t *v20;
  int v21;
  int i;
  int v23;
  bool v24;
  int v25;
  int32_t v26; // kr08_4
  int32_t v27;
  int32_t v28; // ett
  int v29;
  int v30;
  int32_t v31; // kr0C_4
  int32_t v32;
  int32_t v33; // ett
  int v34;
  int v35;
  int32_t v36; // kr10_4
  int32_t v37;
  int32_t v38; // ett
  hkpTypedBroadPhaseDispatcher::Self *v39;
  int v40;
  int v41;
  int v42;
  int32_t v43; // kr14_4
  int32_t v44;
  int32_t v45; // ett
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int32_t v51; // kr18_4
  int32_t v52;
  int32_t v53; // ett
  int v54;
  int v55;
  int32_t v56; // kr1C_4
  int32_t v57;
  int32_t v58; // ett
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int32_t v64; // kr20_4
  int32_t v65;
  int32_t v66; // ett
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int32_t v88; // kr24_4
  int32_t v89;
  int32_t v90; // ett
  int v91;
  int v92;
  int v93;
  typedef hkpWorld::Self *_g4_t_v94;
  typedef hkpSimulationIsland::Self *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_address;
  typedef volatile int32_t *_g4_t_v100;
  typedef volatile int32_t *_g4_t_v101;
  typedef volatile int32_t *_g4_t_v102;
  typedef volatile int32_t *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef volatile int32_t *_g4_t_v106;
  typedef uint8_t _g4_t_v107[25];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v94)) > _g4_s0 ? (4u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v95)) > _g4_s1 ? (8u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v96)) > _g4_s2 ? (20u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v97)) > _g4_s3 ? (20u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v98)) > _g4_s4 ? (20u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_address)) > _g4_s5 ? (24u + sizeof(_g4_t_address)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v100)) > _g4_s6 ? (24u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v101)) > _g4_s7 ? (24u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v102)) > _g4_s8 ? (24u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v103)) > _g4_s9 ? (24u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v104)) > _g4_s10 ? (24u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v105)) > _g4_s11 ? (24u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v106)) > _g4_s12 ? (24u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (31u + sizeof(_g4_t_v107)) > _g4_s13 ? (31u + sizeof(_g4_t_v107)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 8u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 24u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 24u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 24u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 31u);

  v1 = self;
  v2 = *((uint32_t *)self + 27);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F140);
  if ( v2 != 0 )
  {
    if ( *(uint32_t *)(v2 + 212) != 0 )
    {
      v96 = *(uint32_t *)(v2 + 212);
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v96,
        512);
      v3 = address;
    }
    else
    {
      v3 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    }
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v3 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v3 + 44),
      v2,
      256);
  }
  v4 = *((uint32_t *)self + 19);
  if ( *(uint16_t *)(v4 + 6) != 0 )
  {
    v100 = (volatile int32_t *)(*((uint32_t *)self + 19) + 4);
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap(v100, v8, v7) );
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
  }
  v9 = *((pthread_mutex_t **)self + 45);
  *((uint32_t *)self + 19) = 0;
  if ( v9 != nullptr )
  {
    if ( pthread_mutex_destroy(v9) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        28,
        "~hkCriticalSection");
      perror("pthread_mutex_destroy(&m_mutex)");
      __builtin_debugtrap();
    }
    v10 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, pthread_mutex_t *, int))(**(uint32_t **)(*(uint32_t *)v10 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v10 + 44),
      v9,
      8);
    *((uint32_t *)self + 45) = 0;
  }
  v11 = *((uint32_t *)self + 48);
  if ( v11 != 0 )
  {
    if ( pthread_mutex_destroy(*((pthread_mutex_t **)self + 48)) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        28,
        "~hkCriticalSection");
      perror("pthread_mutex_destroy(&m_mutex)");
      __builtin_debugtrap();
    }
    v12 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v12 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v12 + 44),
      v11,
      8);
    *((uint32_t *)self + 48) = 0;
  }
  v13 = *((uint32_t *)self + 20);
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
    if ( (uint16_t)v16 == 0 )
      G4_VCALL<void>(v13, 16);
  }
  *((uint32_t *)self + 20) = 0;
  hkpWorld::removeAll(self);
  hkpWorld::removeEntity((hkpWorld::Self *)v107, self, *((hkpWorld::Self **)self + 9));
  v18 = *((hkpWorld::Self **)self + 8);
  *((uint32_t *)self + 9) = 0;
  hkpWorldOperationUtil::removeIslandFromDirtyList(self, v18, v95);
  v19 = *((uint32_t *)self + 8);
  if ( v19 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v19 + 4))(*((uint32_t *)self + 8));
  v20 = *((pthread_mutex_t **)self + 47);
  *((uint32_t *)self + 8) = 0;
  if ( v20 != nullptr )
  {
    if ( pthread_mutex_destroy(v20) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        28,
        "~hkCriticalSection");
      perror("pthread_mutex_destroy(&m_mutex)");
      __builtin_debugtrap();
    }
    v21 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v94 = (hkpWorld::Self *)v20;
    (*(void (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)v21 + 44) + 12))(*(uint32_t *)(*(uint32_t *)v21 + 44));
    *((uint32_t *)self + 47) = 0;
  }
  v97 = *((uint32_t *)self + 112);
  if ( v97 > 0 )
  {
    for ( i = 0; i != v97; ++i )
    {
      v23 = *(uint32_t *)(*((uint32_t *)self + 111) + 4 * i);
      v94 = self;
      G4_VCALL<void>(v23, 24);
      v24 = *(uint16_t *)(v23 + 6) == 0;
      *(uint32_t *)(v23 + 8) = 0;
      if ( !v24 )
      {
        do
        {
          v26 = *(uint32_t *)(v23 + 4);
          HIWORD(v25) = HIWORD(v26);
          LOWORD(v25) = 0;
          v27 = v25 | (uint16_t)(v26 - 1);
          v28 = v26;
        }
        while ( v28 != __sync_val_compare_and_swap((volatile int32_t *)(v23 + 4), v28, v27) );
        if ( (uint16_t)v27 == 0 )
          G4_VCALL<void>(v23, 16);
      }
    }
    v1 = self;
  }
  hkpWorldCallbackUtil::fireWorldDeleted(v1, v94);
  v29 = *((uint32_t *)v1 + 22);
  if ( *(uint16_t *)(v29 + 6) != 0 )
  {
    v101 = (volatile int32_t *)(*((uint32_t *)v1 + 22) + 4);
    do
    {
      v31 = *(uint32_t *)(v29 + 4);
      HIWORD(v30) = HIWORD(v31);
      LOWORD(v30) = 0;
      v32 = v30 | (uint16_t)(v31 - 1);
      v33 = v31;
    }
    while ( v33 != __sync_val_compare_and_swap(v101, v33, v32) );
    if ( (uint16_t)v32 == 0 )
      G4_VCALL<void>(v29, 16);
  }
  v34 = *((uint32_t *)v1 + 30);
  *((uint32_t *)v1 + 22) = 0;
  if ( *(uint16_t *)(v34 + 6) != 0 )
  {
    do
    {
      v36 = *(uint32_t *)(v34 + 4);
      HIWORD(v35) = HIWORD(v36);
      LOWORD(v35) = 0;
      v37 = v35 | (uint16_t)(v36 - 1);
      v38 = v36;
    }
    while ( v38 != __sync_val_compare_and_swap((volatile int32_t *)(v34 + 4), v38, v37) );
    if ( (uint16_t)v37 == 0 )
      G4_VCALL<void>(v34, 16);
  }
  v39 = *((hkpTypedBroadPhaseDispatcher::Self **)v1 + 23);
  *((uint32_t *)v1 + 30) = 0;
  if ( v39 != nullptr )
  {
    hkpTypedBroadPhaseDispatcher::Destroy(v39);
    v40 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkpTypedBroadPhaseDispatcher::Self *, int))(**(uint32_t **)(*(uint32_t *)v40 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v40 + 44),
      v39,
      268);
  }
  v41 = *((uint32_t *)v1 + 115);
  if ( v41 != 0 && *(uint16_t *)(v41 + 6) != 0 )
  {
    do
    {
      v43 = *(uint32_t *)(v41 + 4);
      HIWORD(v42) = HIWORD(v43);
      LOWORD(v42) = 0;
      v44 = v42 | (uint16_t)(v43 - 1);
      v45 = v43;
    }
    while ( v45 != __sync_val_compare_and_swap((volatile int32_t *)(v41 + 4), v45, v44) );
    if ( (uint16_t)v44 == 0 )
      G4_VCALL<void>(v41, 16);
  }
  v46 = *((uint32_t *)v1 + 24);
  if ( v46 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v46 + 4))(*((uint32_t *)v1 + 24));
  v47 = *((uint32_t *)v1 + 25);
  if ( v47 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v47 + 4))(*((uint32_t *)v1 + 25));
  v48 = *((uint32_t *)v1 + 26);
  if ( v48 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v48 + 4))(*((uint32_t *)v1 + 26));
  v49 = *((uint32_t *)v1 + 29);
  if ( *(uint16_t *)(v49 + 6) != 0 )
  {
    v102 = (volatile int32_t *)(*((uint32_t *)v1 + 29) + 4);
    do
    {
      v51 = *(uint32_t *)(v49 + 4);
      HIWORD(v50) = HIWORD(v51);
      LOWORD(v50) = 0;
      v52 = v50 | (uint16_t)(v51 - 1);
      v53 = v51;
    }
    while ( v53 != __sync_val_compare_and_swap(v102, v53, v52) );
    if ( (uint16_t)v52 == 0 )
      G4_VCALL<void>(v49, 16);
  }
  v54 = *((uint32_t *)v1 + 31);
  if ( *(uint16_t *)(v54 + 6) != 0 )
  {
    v103 = (volatile int32_t *)(*((uint32_t *)v1 + 31) + 4);
    do
    {
      v56 = *(uint32_t *)(v54 + 4);
      HIWORD(v55) = HIWORD(v56);
      LOWORD(v55) = 0;
      v57 = v55 | (uint16_t)(v56 - 1);
      v58 = v56;
    }
    while ( v58 != __sync_val_compare_and_swap(v103, v58, v57) );
    if ( (uint16_t)v57 == 0 )
      G4_VCALL<void>(v54, 16);
  }
  v59 = *((uint32_t *)v1 + 28);
  v104 = *(uint32_t *)(v59 + 112);
  if ( v104 == 0
    || (v60 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE)),
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v60 + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)v60 + 44),
          v104,
          16),
        (v59 = *((uint32_t *)v1 + 28)) != 0) )
  {
    if ( *(uint32_t *)(v59 + 100) != 0 )
    {
      v98 = *(uint32_t *)(v59 + 100);
      v105 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v105 + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)v105 + 44),
        v98,
        512);
      v61 = v105;
    }
    else
    {
      v61 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    }
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v61 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v61 + 44),
      v59,
      128);
  }
  v62 = *((uint32_t *)v1 + 2);
  if ( *(uint16_t *)(v62 + 6) != 0 )
  {
    v106 = (volatile int32_t *)(*((uint32_t *)v1 + 2) + 4);
    do
    {
      v64 = *(uint32_t *)(v62 + 4);
      HIWORD(v63) = HIWORD(v64);
      LOWORD(v63) = 0;
      v65 = v63 | (uint16_t)(v64 - 1);
      v66 = v64;
    }
    while ( v66 != __sync_val_compare_and_swap(v106, v66, v65) );
    if ( (uint16_t)v65 == 0 )
      G4_VCALL<void>(v62, 16);
  }
  v67 = *((uint32_t *)v1 + 32);
  if ( v67 != 0 )
  {
    hkpWorldOperationQueue::Destroy(*((hkpWorldOperationQueue::Self **)v1 + 32));
    v68 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v68 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v68 + 44),
      v67,
      40);
  }
  v69 = *((uint32_t *)v1 + 114);
  if ( v69 != 0 )
  {
    v70 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v70 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v70 + 44),
      v69,
      516);
  }
  v71 = *((uint32_t *)v1 + 113);
  *((uint32_t *)v1 + 112) = 0;
  if ( v71 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 111),
      4 * v71);
  v72 = *((uint32_t *)v1 + 110);
  *((uint32_t *)v1 + 111) = 0;
  *((uint32_t *)v1 + 113) = 0x80000000;
  *((uint32_t *)v1 + 109) = 0;
  if ( v72 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 108),
      4 * v72);
  v73 = *((uint32_t *)v1 + 107);
  *((uint32_t *)v1 + 108) = 0;
  *((uint32_t *)v1 + 110) = 0x80000000;
  *((uint32_t *)v1 + 106) = 0;
  if ( v73 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 105),
      4 * v73);
  v74 = *((uint32_t *)v1 + 104);
  *((uint32_t *)v1 + 105) = 0;
  *((uint32_t *)v1 + 107) = 0x80000000;
  *((uint32_t *)v1 + 103) = 0;
  if ( v74 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 102),
      4 * v74);
  v75 = *((uint32_t *)v1 + 101);
  *((uint32_t *)v1 + 102) = 0;
  *((uint32_t *)v1 + 104) = 0x80000000;
  *((uint32_t *)v1 + 100) = 0;
  if ( v75 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 99),
      4 * v75);
  v76 = *((uint32_t *)v1 + 98);
  *((uint32_t *)v1 + 99) = 0;
  *((uint32_t *)v1 + 101) = 0x80000000;
  *((uint32_t *)v1 + 97) = 0;
  if ( v76 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 96),
      4 * v76);
  v77 = *((uint32_t *)v1 + 95);
  *((uint32_t *)v1 + 96) = 0;
  *((uint32_t *)v1 + 98) = 0x80000000;
  *((uint32_t *)v1 + 94) = 0;
  if ( v77 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 93),
      4 * v77);
  v78 = *((uint32_t *)v1 + 92);
  *((uint32_t *)v1 + 93) = 0;
  *((uint32_t *)v1 + 95) = 0x80000000;
  *((uint32_t *)v1 + 91) = 0;
  if ( v78 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 90),
      4 * v78);
  v79 = *((uint32_t *)v1 + 89);
  *((uint32_t *)v1 + 90) = 0;
  *((uint32_t *)v1 + 92) = 0x80000000;
  *((uint32_t *)v1 + 88) = 0;
  if ( v79 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 87),
      4 * v79);
  v80 = *((uint32_t *)v1 + 86);
  *((uint32_t *)v1 + 87) = 0;
  *((uint32_t *)v1 + 89) = 0x80000000;
  *((uint32_t *)v1 + 85) = 0;
  if ( v80 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 84),
      4 * v80);
  v81 = *((uint32_t *)v1 + 83);
  *((uint32_t *)v1 + 84) = 0;
  *((uint32_t *)v1 + 86) = 0x80000000;
  *((uint32_t *)v1 + 82) = 0;
  if ( v81 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 81),
      4 * v81);
  v82 = *((uint32_t *)v1 + 80);
  *((uint32_t *)v1 + 81) = 0;
  *((uint32_t *)v1 + 83) = 0x80000000;
  *((uint32_t *)v1 + 79) = 0;
  if ( v82 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 78),
      4 * v82);
  v83 = *((uint32_t *)v1 + 77);
  *((uint32_t *)v1 + 78) = 0;
  *((uint32_t *)v1 + 80) = 0x80000000;
  *((uint32_t *)v1 + 76) = 0;
  if ( v83 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 75),
      4 * v83);
  v84 = *((uint32_t *)v1 + 74);
  *((uint32_t *)v1 + 75) = 0;
  *((uint32_t *)v1 + 77) = 0x80000000;
  *((uint32_t *)v1 + 73) = 0;
  if ( v84 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 72),
      4 * v84);
  v85 = *((uint32_t *)v1 + 71);
  *((uint32_t *)v1 + 72) = 0;
  *((uint32_t *)v1 + 74) = 0x80000000;
  *((uint32_t *)v1 + 70) = 0;
  if ( v85 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 69),
      4 * v85);
  v86 = *((uint32_t *)v1 + 20);
  *((uint32_t *)v1 + 69) = 0;
  *((uint32_t *)v1 + 71) = 0x80000000;
  if ( v86 != 0 && *(uint16_t *)(v86 + 6) != 0 )
  {
    do
    {
      v88 = *(uint32_t *)(v86 + 4);
      HIWORD(v87) = HIWORD(v88);
      LOWORD(v87) = 0;
      v89 = v87 | (uint16_t)(v88 - 1);
      v90 = v88;
    }
    while ( v90 != __sync_val_compare_and_swap((volatile int32_t *)(v86 + 4), v90, v89) );
    if ( (uint16_t)v89 == 0 )
      G4_VCALL<void>(v86, 16);
  }
  v91 = *((uint32_t *)v1 + 18);
  *((uint32_t *)v1 + 20) = 0;
  *((uint32_t *)v1 + 17) = 0;
  if ( v91 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 16),
      4 * v91);
  v92 = *((uint32_t *)v1 + 15);
  *((uint32_t *)v1 + 16) = 0;
  *((uint32_t *)v1 + 18) = 0x80000000;
  *((uint32_t *)v1 + 14) = 0;
  if ( v92 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 13),
      4 * v92);
  v93 = *((uint32_t *)v1 + 12);
  *((uint32_t *)v1 + 13) = 0;
  *((uint32_t *)v1 + 15) = 0x80000000;
  *((uint32_t *)v1 + 11) = 0;
  if ( v93 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 10),
      4 * v93);
  *((uint32_t *)v1 + 10) = 0;
  *((uint32_t *)v1 + 12) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::Destroy_ea173b320  (binary VA: 0x173b320)
// Original: hkpWorld::~hkpWorld
// ----------------------------------------------------------------------------
void hkpWorld::Destroy_ea173b320(hkpWorld::Self *self)
{
  int v1;
  int v2;

  hkpWorld::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 896;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addAction  (binary VA: 0x173b380)
// Original: hkpWorld::addAction
// ----------------------------------------------------------------------------
hkpAction::Self * hkpWorld::addAction(hkpWorld::Self *self, hkpAction::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  hkpWorld::Self *v6;
  hkpSimulationIsland::Self *v7;
  uint16_t *v8;
  int v9;
  hkpWorld::Self *v11;
  int v12;
  int32_t v13; // kr00_4
  typedef hkpAction::Self *_g4_t_v14;
  typedef hkpEntity::Self *_g4_t_v15;
  typedef hkpWorld::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef hkpAction::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v19)) > _g4_s5 ? (36u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v20)) > _g4_s6 ? (40u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  v2 = *((uint32_t *)self + 35);
  if ( v2 != 0 )
  {
    LOBYTE(v18) = 11;
    v19 = a2;
    hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v18));
    return nullptr;
  }
  else
  {
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v13 = *((uint32_t *)a2 + 1);
        HIWORD(v12) = HIWORD(v13);
        LOWORD(v12) = 0;
      }
      while ( v13 != __sync_val_compare_and_swap(
                       (volatile int32_t *)a2 + 1,
                       v13,
                       v12 | (uint16_t)(v13 + 1)) );
      v2 = *((uint32_t *)self + 35);
    }
    v19 = nullptr;
    v20 = -2147483644;
    *((uint32_t *)self + 35) = v2 + 1;
    v18 = &v21;
    G4_VCALL<void>(a2, 24, &v18);
    v3 = (int)(uintptr_t)(v19);
    v16 = nullptr;
    *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(self);
    v4 = 0;
    if ( v3 <= 0 )
      goto LABEL_26;
    do
    {
      v8 = (uint16_t *)v18[v4];
      v9 = v8[262];
      if ( (uint16_t)v9 == (v8[263] & 0x3FFF) )
      {
        hkSmallArrayUtil::reserveMore((hkSmallArrayUtil::Self *)(v8 + 260), &loc_4, (int)(uintptr_t)(v14));
        v9 = v8[262];
      }
      v5 = *((uint32_t *)v8 + 130);
      v8[262] = v9 + 1;
      *(uint32_t *)(v5 + 4 * v9) = (uint32_t)(uintptr_t)(a2);
      v6 = (hkpWorld::Self *)v18[v4];
      v7 = *((hkpSimulationIsland::Self **)v6 + 50);
      if ( *((uint16_t *)v7 + 16) != 0xFFFF )
      {
        if ( v16 != nullptr )
        {
          if ( v7 != *((hkpSimulationIsland::Self **)v16 + 50) )
            hkpWorldOperationUtil::mergeIslands(self, v16, (hkpEntity::Self *)v18[v4], v15);
        }
        else
        {
          hkpSimulationIsland::addAction(v7, a2);
          v16 = v6;
        }
      }
      ++v4;
    }
    while ( (int)(uintptr_t)(v19) > v4 );
    if ( v16 == nullptr )
LABEL_26:
      hkpSimulationIsland::addAction(*(hkpSimulationIsland::Self **)(*v18 + 200), a2);
    v17 = *((uint32_t *)self + 35);
    *((uint32_t *)self + 35) = v17 - 1;
    if ( v17 == 1 && *((uint8_t *)self + 148) == 0 )
    {
      v11 = self;
      if ( *((uint32_t *)self + 33) != 0 )
      {
        hkpWorld::internal_executePendingOperations(self);
        v11 = self;
      }
      if ( *((uint32_t *)v11 + 39) == 1 && *((uint32_t *)v11 + 34) != 0 )
        hkpWorld::internal_executePendingBodyOperations(v11);
    }
    hkpWorldCallbackUtil::fireActionAdded(self, a2, v14);
    v19 = nullptr;
    if ( v20 >= 0 )
      (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v18,
        4 * v20);
    return a2;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addConstraint  (binary VA: 0x173b620)
// Original: hkpWorld::addConstraint
// ----------------------------------------------------------------------------
int hkpWorld::addConstraint(hkpWorld::Self *self, hkpConstraintInstance::Self *a2)
{
  int v2;
  int v3;
  hkpAction::Self *v5;
  int *v6;
  int v7;
  int v8;
  void (*v9)(int, int, void **);
  int v10;
  int savedregs;
  void *retaddr;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef hkpConstraintInstance::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);

  if ( *((uint32_t *)self + 35) != 0 )
  {
    v15 = a2;
    LOBYTE(v14) = 9;
    hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v14));
    return 0;
  }
  else
  {
    if ( (*(int (**)(uint32_t, int, int, int, int, hkpConstraintInstance::Self *, int, int))(**((uint32_t **)a2 + 3) + 20))(
           *((uint32_t *)a2 + 3),
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17) == 12 )
    {
      v6 = *((int **)a2 + 3);
      if ( *((uint16_t *)v6 + 16) == 0 )
      {
        v7 = *v6;
        savedregs = *((uint32_t *)a2 + 3);
        v8 = (*(int (**)(int *))(v7 + 100))(v6);
        v9 = *(void (**)(int, int, void **))(*(uint32_t *)v8 + 76);
        LOBYTE(v18) = 1;
        v9(v8, v18, &retaddr);
        v10 = savedregs;
        *(uint16_t *)(savedregs + 32) = (uint16_t)(uintptr_t)(retaddr);
        *(uint16_t *)(v10 + 34) = (uint16_t)(uintptr_t)(self);
      }
    }
    *((uint8_t *)self + 148) = 1;
    hkpConstraintInstance::pointNullsToFixedRigidBody(a2);
    v2 = *((uint32_t *)self + 68) + 1;
    *((uint32_t *)self + 68) = v2;
    *((uint32_t *)a2 + 13) = v2;
    savedregs = (int)(uintptr_t)(hkpWorldOperationUtil::addConstraintImmediately(self, a2, 1));
    if ( G4_VCALL<int>(a2, 32) == 1 )
    {
      v5 = *((hkpAction::Self **)a2 + 17);
      if ( *((uint32_t *)v5 + 2) == 0 )
        hkpWorld::addAction(self, v5);
      (*(void (**)(uint32_t))(**((uint32_t **)a2 + 3) + 100))(*((uint32_t *)a2 + 3));
    }
    v3 = *((uint32_t *)self + 35);
    *((uint8_t *)self + 148) = 0;
    if ( v3 != 0 || *((uint32_t *)self + 33) == 0 )
    {
      return savedregs;
    }
    else
    {
      hkpWorld::internal_executePendingOperations(self);
      return savedregs;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::createAndAddConstraintInstance  (binary VA: 0x173b7a0)
// Original: hkpWorld::createAndAddConstraintInstance
// ----------------------------------------------------------------------------
hkpConstraintInstance::Self * hkpWorld::createAndAddConstraintInstance(hkpWorld::Self *self, hkpRigidBody::Self *a2, hkpRigidBody::Self *a3, hkpConstraintData::Self *a4)
{
  int address;
  hkpConstraintInstance::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpConstraintInstance::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  56);
  hkpConstraintInstance::Construct(v5, a2, a3, a4, 1);
  *((uint32_t *)v5 + 11) = *((uint32_t *)a4 + 2);
  hkpWorld::addConstraint(self, v5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addPhysicsSystem  (binary VA: 0x173b820)
// Original: hkpWorld::addPhysicsSystem
// ----------------------------------------------------------------------------
void hkpWorld::addPhysicsSystem(hkpWorld::Self *self, const hkpPhysicsSystem::Self *a2)
{
  int v2;
  hkpEntity::Self *v3;
  int v4;
  int v5;
  hkpPhantom::Self *const *v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  hkpEntity::Self *v15;

  v2 = *((uint32_t *)a2 + 3);
  if ( v2 > 0 )
  {
    v3 = *((hkpEntity::Self **)a2 + 2);
    v4 = 0;
    while ( *((uint32_t *)v3 + v4) != 0 )
    {
      if ( ++v4 == v2 )
      {
        hkpWorld::addEntityBatch((int)(uintptr_t)(self), v3, v4, *((uint8_t *)a2 + 64) != 0);
        goto LABEL_6;
      }
    }
    v14 = 0;
    while ( 1 )
    {
      v15 = *((hkpEntity::Self **)v3 + v14);
      if ( v15 != nullptr )
      {
        hkpWorld::addEntity(self, v15, *((uint8_t *)a2 + 64) != 0);
        v2 = *((uint32_t *)a2 + 3);
      }
      if ( ++v14 >= v2 )
        break;
      v3 = *((hkpEntity::Self **)a2 + 2);
    }
  }
LABEL_6:
  v5 = *((uint32_t *)a2 + 12);
  if ( v5 > 0 )
  {
    v6 = *((hkpPhantom::Self *const **)a2 + 11);
    v7 = 0;
    while ( v6[v7] != nullptr )
    {
      if ( ++v7 == v5 )
      {
        hkpWorld::addPhantomBatch(self, v6, v7);
        goto LABEL_11;
      }
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v6[v13] != nullptr )
      {
        hkpWorld::addPhantom(self, v6[v13]);
        v5 = *((uint32_t *)a2 + 12);
      }
      if ( ++v13 >= v5 )
        break;
      v6 = *((hkpPhantom::Self *const **)a2 + 11);
    }
  }
LABEL_11:
  v8 = *((uint32_t *)a2 + 9);
  for ( i = 0; i < v8; ++i )
  {
    if ( *(uint32_t *)(*((uint32_t *)a2 + 8) + 4 * i) != 0 )
    {
      hkpWorld::addAction(self, *(hkpAction::Self **)(*((uint32_t *)a2 + 8) + 4 * i));
      v8 = *((uint32_t *)a2 + 9);
    }
  }
  v10 = *((uint32_t *)a2 + 6);
  v11 = 0;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      v12 = *(uint32_t *)(*((uint32_t *)a2 + 5) + 4 * v11);
      if ( v12 == 0 )
        goto LABEL_18;
      if ( *(uint32_t *)(v12 + 20) != 0 || *(uint32_t *)(v12 + 24) != 0 )
      {
        hkpWorld::addConstraint(self, *(hkpConstraintInstance::Self **)(*((uint32_t *)a2 + 5) + 4 * v11));
        v10 = *((uint32_t *)a2 + 6);
LABEL_18:
        if ( ++v11 >= v10 )
          return;
      }
      else if ( ++v11 >= v10 )
      {
        return;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removeAction  (binary VA: 0x173b9b0)
// Original: hkpWorld::removeAction
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::removeAction(hkpWorld::Self *self, hkpAction::Self *a2)
{
  int v3;
  int v4;
  int v5;
  hkpAction::Self *v6;

  if ( *((uint32_t *)self + 35) == 0 )
    return hkpWorld::removeActionImmediately(self, a2, v3, v4, v5, (int)(uintptr_t)(v6));
  v6 = a2;
  LOBYTE(v5) = 12;
  return (hkpWorld::Self *)hkpWorld::queueOperation((int)(uintptr_t)(self), (int)(uintptr_t)(&v5));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::removePhysicsSystem  (binary VA: 0x173bba0)
// Original: hkpWorld::removePhysicsSystem
// ----------------------------------------------------------------------------
int hkpWorld::removePhysicsSystem(hkpWorld::Self *self, const hkpPhysicsSystem::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int i;
  int v7;
  hkpWorld::Self **v8;
  int v9;
  int v10;
  hkpPhantom::Self *const *v11;
  int v12;
  int result;
  hkpPhantom::Self *v14;
  hkpWorld::Self *v15;
  hkpWorld::Self *v16;
  typedef hkpWorld::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v20)) > _g4_s3 ? (8u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v21)) > _g4_s4 ? (8u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (15u + sizeof(_g4_t_v22)) > _g4_s5 ? (15u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 15u);

  v2 = 0;
  v3 = *((uint32_t *)a2 + 6);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)a2 + 5) + 4 * v2);
      if ( v4 != 0 && *(uint32_t *)(v4 + 8) != 0 )
      {
        v18 = v2;
        hkpWorld::removeConstraint((hkpWorld::Self *)v22, self);
        v3 = *((uint32_t *)a2 + 6);
        v2 = v18;
      }
      ++v2;
    }
    while ( v2 < v3 );
  }
  v5 = *((uint32_t *)a2 + 9);
  for ( i = 0; i < v5; ++i )
  {
    if ( *(uint32_t *)(*((uint32_t *)a2 + 8) + 4 * i) != 0 )
    {
      v19 = i;
      hkpWorld::removeAction(self, *(hkpAction::Self **)(*((uint32_t *)a2 + 8) + 4 * i));
      v5 = *((uint32_t *)a2 + 9);
      i = v19;
    }
  }
  v7 = *((uint32_t *)a2 + 3);
  if ( v7 <= 0 )
  {
    v8 = *((hkpWorld::Self ***)a2 + 2);
LABEL_15:
    hkpWorld::removeEntityBatch(self, v8, *((uint32_t *)a2 + 3));
    goto LABEL_16;
  }
  v8 = *((hkpWorld::Self ***)a2 + 2);
  if ( *v8 != nullptr )
  {
    v9 = 0;
    while ( ++v9 != v7 )
    {
      if ( v8[v9] == nullptr )
        goto LABEL_28;
    }
    goto LABEL_15;
  }
LABEL_28:
  v21 = *((uint32_t *)a2 + 3);
  v15 = nullptr;
  while ( 1 )
  {
    v16 = v8[(uint32_t)(uintptr_t)(v15)];
    if ( v16 != nullptr )
    {
      v17 = v15;
      hkpWorld::removeEntity((hkpWorld::Self *)v22, self, v16);
      v21 = *((uint32_t *)a2 + 3);
      v15 = v17;
    }
    v15 = (hkpWorld::Self *)((char *)v15 + 1);
    if ( (int)(uintptr_t)(v15) >= v21 )
      break;
    v8 = *((hkpWorld::Self ***)a2 + 2);
  }
LABEL_16:
  v10 = *((uint32_t *)a2 + 12);
  v11 = *((hkpPhantom::Self *const **)a2 + 11);
  if ( v10 <= 0 )
    return hkpWorld::removePhantomBatch(self, v11, v10);
  if ( *v11 != nullptr )
  {
    v12 = 0;
    while ( ++v12 != v10 )
    {
      if ( v11[v12] == nullptr )
        goto LABEL_22;
    }
    return hkpWorld::removePhantomBatch(self, v11, v10);
  }
LABEL_22:
  result = 0;
  while ( 1 )
  {
    v14 = v11[result];
    if ( v14 != nullptr )
    {
      v20 = result;
      hkpWorld::removePhantom(self, v14);
      v10 = *((uint32_t *)a2 + 12);
      result = v20;
    }
    if ( ++result >= v10 )
      break;
    v11 = *((hkpPhantom::Self *const **)a2 + 11);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::updateCollisionFilterOnWorld  (binary VA: 0x173bd50)
// Original: hkpWorld::updateCollisionFilterOnWorld
// ----------------------------------------------------------------------------
int hkpWorld::updateCollisionFilterOnWorld(int a1, int a2, int a3)
{
  int v3;
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int i;
  int v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint16_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef hkpWorld::Self *_g4_t_v45;
  typedef hkpWorld::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef uint32_t _g4_t_v49[4];
  typedef uint32_t _g4_t_v50[4];
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t _g4_t_v54[39];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v32)) > _g4_s4 ? (24u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v33)) > _g4_s5 ? (40u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v34)) > _g4_s6 ? (44u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v35)) > _g4_s7 ? (48u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v36)) > _g4_s8 ? (56u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v37)) > _g4_s9 ? (60u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v38)) > _g4_s10 ? (64u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v39)) > _g4_s11 ? (68u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v40)) > _g4_s12 ? (72u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v41)) > _g4_s13 ? (80u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v42)) > _g4_s14 ? (80u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v43)) > _g4_s15 ? (80u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v44)) > _g4_s16 ? (84u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v45)) > _g4_s17 ? (84u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v46)) > _g4_s18 ? (84u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v47)) > _g4_s19 ? (84u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (91u + sizeof(_g4_t_v48)) > _g4_s20 ? (91u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v49)) > _g4_s21 ? (92u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v50)) > _g4_s22 ? (108u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v51)) > _g4_s23 ? (124u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v52)) > _g4_s24 ? (128u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v53)) > _g4_s25 ? (132u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v54)) > _g4_s26 ? (136u + sizeof(_g4_t_v54)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 91u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 124u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 128u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 132u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 136u);

  v54[35] = (uint32_t)(uintptr_t)(&a1);
  v3 = a1;
  v44 = a2;
  v38 = a3;
  if ( *(uint32_t *)(a1 + 140) != 0 )
  {
    BYTE1(v51) = a2;
    LOBYTE(v51) = 22;
    BYTE2(v51) = a3;
    LODWORD(v16) = hkpWorld::queueOperation(a1, (int)(uintptr_t)(&v51));
    return v16;
  }
  *(uint8_t *)(a1 + 148) = 1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v33 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtUpdateFilterOnWorld");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  if ( v44 != 0 )
  {
    ++*(uint32_t *)(v3 + 140);
    v49[0] = v3 + 40;
    v34 = 0;
    v47 = v3;
    v49[1] = v3 + 52;
    while ( 1 )
    {
      v51 = v54;
      v52 = 0;
      v53 = -2147483616;
      v35 = (uint32_t *)v49[v34];
      if ( (int)v35[1] <= 0 )
        goto LABEL_60;
      v36 = 0;
      v19 = 0;
      v20 = (uint32_t *)v49[v34];
      do
      {
        v37 = 0;
        v21 = *(uint32_t *)(*v20 + 4 * v19);
        v50[0] = v21 + 112;
        v50[1] = v21 + 92;
        do
        {
          v52 = 0;
          v40 = 0;
          v39 = (uint16_t *)v50[v37];
          v22 = *((uint32_t *)v39 + 2);
LABEL_38:
          if ( v40 >= v22 )
            goto LABEL_53;
          do
          {
            v23 = v40++;
            v24 = *(uint32_t *)(*((uint32_t *)v39 + 1) + 4 * v23);
            v43 = v24 + 512;
            if ( v40 == v22 )
              v43 = *v39 + v24;
            if ( v43 <= v24 )
              goto LABEL_38;
            do
            {
              while ( 1 )
              {
                v32 = *(uint32_t *)(v24 + 20);
                (*(void (**)(char *))(**(uint32_t **)(v47 + 116) + 24))(&v48);
                if ( v48 == 0
                  || *(uint8_t *)((v25 = *(char *)(*(uint32_t *)(v24 + 20) + 26))
                              + *(uint32_t *)(v47 + 120)
                              + 10 * *(char *)(*(uint32_t *)(v24 + 16) + 26)
                              + 7776) == 0
                  || *(uint8_t *)(v24 + 12) != *(char *)(v25
                                                               + *(uint32_t *)(v47 + 120)
                                                               + 10 * *(char *)(*(uint32_t *)(v24 + 16) + 26)
                                                               + 7776) )
                {
                  v26 = v52;
                  if ( v52 == (v53 & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::reserveMore(
                      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                      (hkMemoryAllocator::Self *)&v51,
                      4,
                      v32);
                    v26 = v52;
                  }
                  v51[v26] = v24;
                  ++v52;
                  *(uint8_t *)(v21 + 37) = *(uint8_t *)(v21 + 37) & 0xFC | 1;
                  goto LABEL_44;
                }
                if ( v38 == 1 )
                  break;
LABEL_44:
                v24 += *(uint8_t *)(v24 + 3);
                if ( v43 <= v24 )
                  goto LABEL_52;
              }
              hkAgentNnMachine_UpdateShapeCollectionFilter((uint8_t *)v24, *(uint32_t **)(v47 + 112), v21);
              v24 += *(uint8_t *)(v24 + 3);
            }
            while ( v43 > v24 );
LABEL_52:
            v22 = *((uint32_t *)v39 + 2);
          }
          while ( v40 < v22 );
LABEL_53:
          ++v37;
        }
        while ( v37 != 2 );
        while ( v52 != 0 )
        {
          v28 = v51[--v52];
          hkpWorldAgentUtil::removeAgentAndItsToiEvents(v28);
        }
        v20 = v35;
        v19 = ++v36;
      }
      while ( v35[1] > v36 );
      v52 = 0;
      if ( v53 >= 0 )
        (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v51,
          4 * v53);
LABEL_60:
      if ( ++v34 == 2 )
      {
        v3 = v47;
        v15 = *(uint32_t *)(v47 + 140) - 1;
        *(uint32_t *)(v47 + 140) = v15;
        goto LABEL_24;
      }
    }
  }
  v8 = *(uint32_t *)(v3 + 44);
  v41 = 0;
  if ( v8 > 0 )
  {
    v45 = (hkpWorld::Self *)v3;
    do
    {
      if ( *(int *)(*(uint32_t *)(*((uint32_t *)v45 + 10) + 4 * v41) + 80) > 0 )
      {
        v9 = *(uint32_t *)(*((uint32_t *)v45 + 10) + 4 * v41);
        v10 = 0;
        do
        {
          v29 = *(uint32_t *)(*(uint32_t *)(v9 + 76) + 4 * v10++);
          hkpWorld::updateCollisionFilterOnEntity(v45, v29, 0, v38);
        }
        while ( *(uint32_t *)(v9 + 80) > v10 );
        v8 = *((uint32_t *)v45 + 11);
      }
      ++v41;
    }
    while ( v41 < v8 );
    v3 = (int)(uintptr_t)(v45);
  }
  v11 = *(uint32_t *)(v3 + 56);
  v42 = 0;
  if ( v11 > 0 )
  {
    v46 = (hkpWorld::Self *)v3;
    do
    {
      if ( *(int *)(*(uint32_t *)(*((uint32_t *)v46 + 13) + 4 * v42) + 80) > 0 )
      {
        v12 = *(uint32_t *)(*((uint32_t *)v46 + 13) + 4 * v42);
        v13 = 0;
        do
        {
          v30 = *(uint32_t *)(*(uint32_t *)(v12 + 76) + 4 * v13++);
          hkpWorld::updateCollisionFilterOnEntity(v46, v30, 0, v38);
        }
        while ( *(uint32_t *)(v12 + 80) > v13 );
        v11 = *((uint32_t *)v46 + 14);
      }
      ++v42;
    }
    while ( v42 < v11 );
    v3 = (int)(uintptr_t)(v46);
  }
  for ( i = 0; *(uint32_t *)(v3 + 280) > i; ++i )
  {
    v31 = *(uint32_t *)(*(uint32_t *)(v3 + 276) + 4 * i);
    hkpWorld::updateCollisionFilterOnPhantom((hkpWorld::Self *)v3, v31, v38);
  }
  v15 = *(uint32_t *)(v3 + 140);
LABEL_24:
  *(uint8_t *)(v3 + 148) = 0;
  if ( v15 == 0 )
  {
    if ( *(uint32_t *)(v3 + 132) != 0 )
      hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v3);
    if ( *(uint32_t *)(v3 + 156) == 1 && *(uint32_t *)(v3 + 136) != 0 )
      hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v3);
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(v33);
  v17 = *v33;
  v18 = *(uint32_t **)(*v33 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*v33 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("Et");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setCollisionFilter  (binary VA: 0x173c350)
// Original: hkpWorld::setCollisionFilter
// ----------------------------------------------------------------------------
int hkpWorld::setCollisionFilter(int a1, int a2, char a3, int a4, int a5)
{
  hkpCollisionFilter::Self *v5;
  int v6;
  int v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  int v12;
  int result;
  int v14;
  int32_t v15; // kr04_4
  int address;

  v5 = (hkpCollisionFilter::Self *)a2;
  v6 = a1;
  if ( a2 != 0 )
  {
    if ( *(uint16_t *)(a2 + 6) != 0 )
    {
      do
      {
        v15 = *(uint32_t *)(a2 + 4);
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
      }
      while ( v15 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(a2 + 4),
                       v15,
                       v14 | (uint16_t)(v15 + 1)) );
    }
  }
  else
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkpCollisionFilter::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                 *(uint32_t *)(*(uint32_t *)address + 44),
                                 48);
    hkpCollisionFilter::Construct(v5);
    *((uint32_t *)v5 + 8) = 1;
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_20992C8);
    *((uint32_t *)v5 + 2) = ((uint32_t)(uintptr_t)&off_2099300);
    *((uint32_t *)v5 + 3) = ((uint32_t)(uintptr_t)&off_2099314);
    *((uint32_t *)v5 + 4) = (uint32_t)(uintptr_t)(&off_2099330);
    *((uint32_t *)v5 + 5) = ((uint32_t)(uintptr_t)&off_2099344);
  }
  v7 = *(uint32_t *)(a1 + 116);
  if ( v7 != 0 && *(uint16_t *)(v7 + 6) != 0 )
  {
    do
    {
      v9 = *(uint32_t *)(v7 + 4);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
      v10 = v8 | (uint16_t)(v9 - 1);
      v11 = v9;
    }
    while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v11, v10) );
    v6 = a1;
    if ( (uint16_t)v10 == 0 )
      G4_VCALL<void>(v7, 16);
  }
  v12 = *(uint32_t *)(v6 + 112);
  *(uint32_t *)(v6 + 116) = (uint32_t)(uintptr_t)(v5);
  *(uint32_t *)(v12 + 16) = (uint32_t)(uintptr_t)(v5);
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(v6 + 116) + 20))(*(uint32_t *)(v6 + 116), v6);
  if ( a3 != 0 )
    return hkpWorld::updateCollisionFilterOnWorld(v6, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::addBodyOperation  (binary VA: 0x173c490)
// Original: hkpWorld::addBodyOperation
// ----------------------------------------------------------------------------
int hkpWorld::addBodyOperation(int a1, int a2, int a3, int a4, int a5)
{
  return hkpWorldOperationQueue::queueBodyOperation(*(uint32_t *)(a1 + 128), a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::queueCallback  (binary VA: 0x173c4e0)
// Original: hkpWorld::queueCallback
// ----------------------------------------------------------------------------
int hkpWorld::queueCallback(int a1, int a2, int a3)
{
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v9)) > _g4_s5 ? (28u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a1 + 140) != 0 )
  {
    v8 = a3;
    v7 = a2;
    LOBYTE(v6) = 38;
    hkpWorld::queueOperation(a1, (int)(uintptr_t)(&v6));
  }
  else
  {
    G4_VCALL<void>(a2, 20, a3, v4, v5, v6, v7, v8, v9);
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::findInitialContactPoints  (binary VA: 0x173c550)
// Original: hkpWorld::findInitialContactPoints
// ----------------------------------------------------------------------------
int hkpWorld::findInitialContactPoints(hkpWorld::Self *self, hkpEntity::Self **a2, int a3)
{
  float v3; // xmm1_4
  float *v4;
  float v5; // xmm0_4
  float v7[7];

  v3 = 0.0;
  v4 = *((float **)self + 2);
  v7[0] = v4[6];
  v7[1] = v7[0];
  v5 = v7[0] - v7[0];
  v7[2] = v7[0] - v7[0];
  if ( !__builtin_isfinite(v7[0]) || v5 != 0.0 )
    v3 = 1.0 / v5;
  v7[3] = v3;
  return G4_VCALL<int>(v4, 52, a2, a3, self, v7, 1);
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::findInitialContactPointsOfAllEntities  (binary VA: 0x173c5f0)
// Original: hkpWorld::findInitialContactPointsOfAllEntities
// ----------------------------------------------------------------------------
int hkpWorld::findInitialContactPointsOfAllEntities(hkpWorld::Self *self)
{
  int i;
  int v2;
  int result;
  int v4;
  int v5;

  for ( i = 0; *((uint32_t *)self + 11) > i; ++i )
  {
    v2 = *(uint32_t *)(*((uint32_t *)self + 10) + 4 * i);
    hkpWorld::findInitialContactPoints(self, *(hkpEntity::Self ***)(v2 + 76), *(uint32_t *)(v2 + 80));
  }
  result = *((uint32_t *)self + 14);
  v4 = 0;
  if ( result > 0 )
  {
    do
    {
      v5 = *(uint32_t *)(*((uint32_t *)self + 13) + 4 * v4++);
      result = hkpWorld::findInitialContactPoints(self, *(hkpEntity::Self ***)(v5 + 76), *(uint32_t *)(v5 + 80));
    }
    while ( *((uint32_t *)self + 14) > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::calcRequiredSolverBufferSize  (binary VA: 0x173c670)
// Original: hkpWorld::calcRequiredSolverBufferSize
// ----------------------------------------------------------------------------
int hkpWorld::calcRequiredSolverBufferSize(hkpWorldOperationUtil::Self *a1, signed int *a2)
{
  signed int v2;
  int v3;
  uint32_t *v4;
  signed int v5;
  int result;
  int v7;
  hkpWorld::Self *v8;
  int v9;
  signed int v10;

  v2 = 0;
  hkpWorldOperationUtil::cleanupDirtyIslands(a1, v8);
  v10 = 0;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v9 = *((uint32_t *)a1 + 11) - 1;
  v3 = 4 * v9;
  if ( v9 >= 0 )
  {
    do
    {
      v4 = *(uint32_t **)(*((uint32_t *)a1 + 10) + v3);
      v5 = 32 * (v4[7] / 80 + 4)
         + v4[3]
         + (v4[20] << 7)
         + 160
         + ((4 * (v4[5] + 6 * (v4[7] / 80 + 4)) + 23) & 0xFFFFFFF0);
      v2 += v5;
      a2[1] = v2;
      if ( v5 > v10 )
      {
        *a2 = v5;
        a2[2] = (signed int)(uintptr_t)(v4);
        v10 = v5;
      }
      --v9;
      v3 -= 4;
    }
    while ( v9 != -1 );
  }
  result = *((uint32_t *)a1 + 61) - 2;
  if ( (unsigned int)result <= 1 )
  {
    result = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)a1 + 2) + 72) + 36))(*(uint32_t *)(*((uint32_t *)a1 + 2) + 72));
    v7 = a2[1];
    if ( result >= v7 )
      v7 = result;
    a2[1] = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::lock  (binary VA: 0x173c790)
// Original: hkpWorld::lock
// ----------------------------------------------------------------------------
int hkpWorld::lock(hkpWorld::Self *self)
{
  int result;

  result = hkReferencedObject::lockAll();
  ++*((uint32_t *)self + 46);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::unlock  (binary VA: 0x173c7c0)
// Original: hkpWorld::unlock
// ----------------------------------------------------------------------------
int hkpWorld::unlock(hkpWorld::Self *self)
{
  --*((uint32_t *)self + 46);
  return hkReferencedObject::unlockAll();
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::stepDeltaTime  (binary VA: 0x173c7f0)
// Original: hkpWorld::stepDeltaTime
// ----------------------------------------------------------------------------
int hkpWorld::stepDeltaTime(hkpWorld::Self *self, float a2)
{
  int v3;
  hkpWorld::Self *v5;

  hkpWorld::lock(self);
  hkpWorldMemoryUtil::watchHeapMemory(self, v5);
  v3 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 2) + 20))(*((uint32_t *)self + 2), LODWORD(a2));
  if ( (*(int (**)(uint32_t))(**((uint32_t **)self + 22) + 20))(*((uint32_t *)self + 22)) == 2 )
  {
    G4_MEM_CALL((uintptr_t)(hkpBroadPhase::s_updateTreeBroadPhaseFunction), *((uint32_t *)self + 22), LODWORD(a2));
  }
  else if ( (*(int (**)(uint32_t))(**((uint32_t **)self + 22) + 20))(*((uint32_t *)self + 22)) == 3 )
  {
    hkpBroadPhase::s_updateTreeBroadPhaseFunction32(*((uint32_t *)self + 22), LODWORD(a2));
  }
  hkpWorld::unlock(self);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::integrate  (binary VA: 0x173c8b0)
// Original: hkpWorld::integrate
// ----------------------------------------------------------------------------
int hkpWorld::integrate(hkpWorld::Self *self, float a2)
{
  int v2;

  hkpWorld::lock(self);
  v2 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), LODWORD(a2));
  hkpWorld::unlock(self);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::collide  (binary VA: 0x173c900)
// Original: hkpWorld::collide
// ----------------------------------------------------------------------------
int hkpWorld::collide(hkpWorld::Self *self)
{
  int v1;

  hkpWorld::lock(self);
  v1 = (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 28))(*((uint32_t *)self + 2));
  hkpWorld::unlock(self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::advanceTime  (binary VA: 0x173c940)
// Original: hkpWorld::advanceTime
// ----------------------------------------------------------------------------
int hkpWorld::advanceTime(hkpWorld::Self *self)
{
  int v1;

  hkpWorld::lock(self);
  v1 = (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 32))(*((uint32_t *)self + 2));
  hkpWorld::unlock(self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::initMtStep  (binary VA: 0x173c980)
// Original: hkpWorld::initMtStep
// ----------------------------------------------------------------------------
int hkpWorld::initMtStep(hkpWorld::Self *self, hkJobQueue::Self *a2, float a3)
{
  hkpWorld::Self *v4;

  if ( *((uint32_t *)self + 20) != 0 )
  {
    hkpWorld::lock(self);
    hkpWorldMemoryUtil::watchHeapMemory(self, v4);
    hkpWorld::unlock(self);
  }
  return (*(int (**)(uint32_t, hkJobQueue::Self *, uint32_t))(**((uint32_t **)self + 2) + 36))(
           *((uint32_t *)self + 2),
           a2,
           LODWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::stepMultithreaded  (binary VA: 0x173c9e0)
// Original: hkpWorld::stepMultithreaded
// ----------------------------------------------------------------------------
int hkpWorld::stepMultithreaded(hkpWorld::Self *a1, pthread_mutex_t *a2, int a3, float a4)
{
  int result;

  result = hkpWorld::initMtStep(a1, (hkJobQueue::Self *)a2, a4);
  if ( result == 0 )
  {
    G4_VCALL<void>(a3, 20, a2, 15);
    hkJobQueue::processAllJobs(a2, true);
    G4_VCALL<void>(a3, 32);
    return hkpWorld::finishMtStep((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::lockReadOnly  (binary VA: 0x173ca60)
// Original: hkpWorld::lockReadOnly
// ----------------------------------------------------------------------------
void hkpWorld::lockReadOnly()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::unlockReadOnly  (binary VA: 0x173ca70)
// Original: hkpWorld::unlockReadOnly
// ----------------------------------------------------------------------------
void hkpWorld::unlockReadOnly()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::checkUnmarked  (binary VA: 0x173ca80)
// Original: hkpWorld::checkUnmarked
// ----------------------------------------------------------------------------
int hkpWorld::checkUnmarked()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::lockIslandForConstraintUpdate  (binary VA: 0x173ca90)
// Original: hkpWorld::lockIslandForConstraintUpdate
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::lockIslandForConstraintUpdate(pthread_mutex_t **self)
{
  hkpWorld::Self *result;
  pthread_mutex_t *mutex;
  unsigned int count;

  result = (hkpWorld::Self *)self;
  mutex = *(self + 45);
  if ( mutex != nullptr )
  {
    count = ((int32_t *)(mutex))[1];
    if ( count != 0 )
    {
      while ( 1 )
      {
        result = (hkpWorld::Self *)pthread_mutex_trylock(mutex);
        if ( result == nullptr )
          break;
        if ( --count == 0 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      result = (hkpWorld::Self *)pthread_mutex_lock(mutex);
      if ( result != nullptr )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
        perror("pthread_mutex_lock(&mutex)");
        __builtin_debugtrap();
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::lockForIslandSplit  (binary VA: 0x173cb30)
// Original: hkpWorld::lockForIslandSplit
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWorld::lockForIslandSplit(pthread_mutex_t **self)
{
  hkpWorld::Self *result;
  pthread_mutex_t *mutex;
  unsigned int count;

  result = (hkpWorld::Self *)self;
  mutex = *(self + 45);
  if ( mutex != nullptr )
  {
    count = ((int32_t *)(mutex))[1];
    if ( count != 0 )
    {
      while ( 1 )
      {
        result = (hkpWorld::Self *)pthread_mutex_trylock(mutex);
        if ( result == nullptr )
          break;
        if ( --count == 0 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      result = (hkpWorld::Self *)pthread_mutex_lock(mutex);
      if ( result != nullptr )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
        perror("pthread_mutex_lock(&mutex)");
        __builtin_debugtrap();
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::unlockIslandForConstraintUpdate  (binary VA: 0x173cbd0)
// Original: hkpWorld::unlockIslandForConstraintUpdate
// ----------------------------------------------------------------------------
int hkpWorld::unlockIslandForConstraintUpdate(hkpWorld::Self *self)
{
  int result;

  result = *((uint32_t *)self + 45);
  if ( result != 0 )
  {
    result = pthread_mutex_unlock(*((pthread_mutex_t **)self + 45));
    if ( result != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::unlockForIslandSplit  (binary VA: 0x173cc40)
// Original: hkpWorld::unlockForIslandSplit
// ----------------------------------------------------------------------------
int hkpWorld::unlockForIslandSplit(hkpWorld::Self *self)
{
  int result;

  result = *((uint32_t *)self + 45);
  if ( result != 0 )
  {
    result = pthread_mutex_unlock(*((pthread_mutex_t **)self + 45));
    if ( result != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::setMultithreadedAccessChecking  (binary VA: 0x173ccb0)
// Original: hkpWorld::setMultithreadedAccessChecking
// ----------------------------------------------------------------------------
hkMultiThreadCheck::Self * hkpWorld::setMultithreadedAccessChecking(int a1, int a2)
{
  hkMultiThreadCheck::Self *v3;

  v3 = (hkMultiThreadCheck::Self *)(a1 + 160);
  if ( a2 != 0 )
  {
    hkMultiThreadCheck::disableChecks(v3);
    return hkMultiThreadCheck::disableChecks((hkMultiThreadCheck::Self *)(*(uint32_t *)(a1 + 88) + 16));
  }
  else
  {
    hkMultiThreadCheck::enableChecks(v3);
    return hkMultiThreadCheck::enableChecks((hkMultiThreadCheck::Self *)(*(uint32_t *)(a1 + 88) + 16));
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorld::getMultithreadedAccessChecking  (binary VA: 0x173cd20)
// Original: hkpWorld::getMultithreadedAccessChecking
// ----------------------------------------------------------------------------
bool hkpWorld::getMultithreadedAccessChecking(hkpWorld::Self *self)
{
  bool result;

  result = true;
  if ( *((int16_t *)self + 84) >= 0 )
    return hkMultiThreadCheck::m_criticalSection == 0;
  return result;
}



// ============================================================================
// Address:   0x173ce50 (size: 9733 bytes)
// Symbol:    _ZN8hkpWorldC1ERK13hkpWorldCinfoj
// Demangled: hkpWorld::hkpWorld(hkpWorldCinfo const&,unsigned int)
// ============================================================================

