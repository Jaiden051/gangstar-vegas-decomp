#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpProject.h"

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::staticClass  (binary VA: 0x18374a0)
// Original: hkpProjectileGun::staticClass
// ----------------------------------------------------------------------------
void * hkpProjectileGun::staticClass()
{
  return &hkpProjectileGunClass;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::onGunFired  (binary VA: 0x184dda0)
// Original: hkpProjectileGun::onGunFired
// ----------------------------------------------------------------------------
void hkpProjectileGun::onGunFired()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::stepGun  (binary VA: 0x184ddb0)
// Original: hkpProjectileGun::stepGun
// ----------------------------------------------------------------------------
int hkpProjectileGun::stepGun(hkpProjectileGun::Self *self, float a2, hkpWorld::Self *a3, const hkpRigidBody::Self *a4, const hkTransformf::Self *a5, bool a6, bool a7)
{
  float v7; // xmm1_4

  v7 = *((float *)self + 10);
  if ( v7 > 0.0 )
    *((float *)self + 10) = v7 - a2;
  return G4_VCALL<int>(self, 48, LODWORD(a2), a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::fireGun  (binary VA: 0x184de30)
// Original: hkpProjectileGun::fireGun
// ----------------------------------------------------------------------------
hkpProjectileGun::Self * hkpProjectileGun::fireGun(hkpProjectileGun::Self *self, hkpWorld::Self *a2, const hkTransformf::Self *a3)
{
  hkpProjectileGun::Self *result;

  result = self;
  if ( *((float *)self + 10) <= 0.0 )
  {
    *((uint32_t *)self + 10) = *((uint32_t *)self + 9);
    return (hkpProjectileGun::Self *)G4_VCALL<int>(self, 44, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::Construct  (binary VA: 0x184e640)
// Original: hkpProjectileGun::hkpProjectileGun
// ----------------------------------------------------------------------------
int hkpProjectileGun::Construct(hkpFirstPersonGun::Self *a1, int a2, int a3)
{
  hkpFirstPersonGun::Construct(a1);
  *((uint32_t *)a1 + 8) = 5;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A4208);
  *((uint32_t *)a1 + 14) = a2;
  *((uint32_t *)a1 + 9) = 1050253722;
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 13) = 0x80000000;
  *((uint32_t *)a1 + 15) = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::clearProjectiles  (binary VA: 0x184e6b0)
// Original: hkpProjectileGun::clearProjectiles
// ----------------------------------------------------------------------------
int hkpProjectileGun::clearProjectiles(hkpProjectileGun::Self *self)
{
  int v1;
  int result;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;

  v1 = 0;
  result = *((uint32_t *)self + 12);
  v8 = result;
  if ( result > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v1);
      result = hkpGunProjectile::destroy((hkpGunProjectile::Self *)v3);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6);
        }
        while ( v7 != result );
        if ( (uint16_t)v6 == 0 )
          result = G4_VCALL<int>(v3, 16);
      }
      ++v1;
    }
    while ( v1 != v8 );
  }
  *((uint32_t *)self + 12) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::reset  (binary VA: 0x184e740)
// Original: hkpProjectileGun::reset
// ----------------------------------------------------------------------------
int hkpProjectileGun::reset(hkpProjectileGun::Self *self)
{
  return hkpProjectileGun::clearProjectiles(self);
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::Destroy  (binary VA: 0x184e770)
// Original: hkpProjectileGun::~hkpProjectileGun
// ----------------------------------------------------------------------------
void hkpProjectileGun::Destroy(hkpProjectileGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4208);
  hkpProjectileGun::clearProjectiles(self);
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v1);
  v2 = *((uint32_t *)self + 6);
  v3 = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  for ( *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8); v3 < v2; ++v3 )
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v3);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      v10 = v3;
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
      v3 = v10;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
      v2 = *((uint32_t *)self + 6);
    }
  }
  v9 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v9);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpProjectileGun::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::Destroy_ea184e8a0  (binary VA: 0x184e8a0)
// Original: hkpProjectileGun::~hkpProjectileGun
// ----------------------------------------------------------------------------
void hkpProjectileGun::Destroy_ea184e8a0(hkpProjectileGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  int v11;
  int v12;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4208);
  hkpProjectileGun::clearProjectiles(self);
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v1);
  v2 = *((uint32_t *)self + 6);
  v3 = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  for ( *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8); v3 < v2; ++v3 )
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v3);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      v12 = v3;
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
      v3 = v12;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
      v2 = *((uint32_t *)self + 6);
    }
  }
  v9 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v9);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpProjectileGun::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v10 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v11 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v11 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v10, 12, self, v11);
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::destroyAgedProjectiles  (binary VA: 0x184ea00)
// Original: hkpProjectileGun::destroyAgedProjectiles
// ----------------------------------------------------------------------------
int hkpProjectileGun::destroyAgedProjectiles(hkpProjectileGun::Self *self, float a2)
{
  int v2;
  int v3;
  int result;
  hkpGunProjectile::Self *v5;

  v2 = 0;
  v3 = *((uint32_t *)self + 12);
  if ( v3 > 0 )
  {
    do
    {
      while ( 1 )
      {
        result = *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v2);
        if ( *(float *)(result + 20) > a2 )
          break;
        if ( ++v2 == v3 )
          return result;
      }
      v5 = *(hkpGunProjectile::Self **)(*((uint32_t *)self + 11) + 4 * v2++);
      result = hkpGunProjectile::destroy(v5);
    }
    while ( v2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::updateProjectiles  (binary VA: 0x184ea70)
// Original: hkpProjectileGun::updateProjectiles
// ----------------------------------------------------------------------------
hkpGunProjectile::Self * hkpProjectileGun::updateProjectiles(hkpProjectileGun::Self *self, float a2)
{
  int v2;
  int v3;
  hkpGunProjectile::Self *v4;
  hkpGunProjectile::Self *result;

  v2 = 0;
  v3 = *((uint32_t *)self + 12);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(hkpGunProjectile::Self **)(*((uint32_t *)self + 11) + 4 * v2++);
      result = hkpGunProjectile::update(v4, a2);
    }
    while ( v2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::clearHitProjectiles  (binary VA: 0x184eac0)
// Original: hkpProjectileGun::clearHitProjectiles
// ----------------------------------------------------------------------------
int hkpProjectileGun::clearHitProjectiles(hkpProjectileGun::Self *self)
{
  int result;
  int v2;
  int v3;

  result = 0;
  v2 = *((uint32_t *)self + 12);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 11) + 4 * result++);
      *(uint8_t *)(v3 + 12) &= ~2u;
    }
    while ( result != v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::removeDestroyedProjectiles  (binary VA: 0x184eaf0)
// Original: hkpProjectileGun::removeDestroyedProjectiles
// ----------------------------------------------------------------------------
void hkpProjectileGun::removeDestroyedProjectiles(hkpProjectileGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  bool v10;
  int v11;
  int v12;

  v1 = 0;
  v2 = *((uint32_t *)self + 12);
  if ( v2 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = *((uint32_t *)self + 11);
        v4 = 4 * v1;
        v5 = *(uint32_t *)(v3 + 4 * v1);
        if ( (*(uint8_t *)(v5 + 12) & 1) != 0 )
          break;
        if ( v2 <= ++v1 )
          return;
      }
      if ( *(uint16_t *)(v5 + 6) != 0 )
      {
        v12 = v2;
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          v8 = v6 | (uint16_t)(v7 - 1);
          v9 = v7;
        }
        while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
        v4 = 4 * v1;
        v10 = (uint16_t)v8 == 0;
        v2 = v12;
        if ( v10 )
        {
          G4_VCALL<void>(v5, 16);
          v3 = *((uint32_t *)self + 11);
          v4 = 4 * v1;
        }
        else
        {
          v3 = *((uint32_t *)self + 11);
        }
      }
      v11 = *((uint32_t *)self + 12) - 1;
      *((uint32_t *)self + 12) = v11;
      if ( v1 != v11 )
        *(uint32_t *)(v3 + v4) = *(uint32_t *)(v3 + 4 * v11);
      --v2;
    }
    while ( v2 > v1 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::onUpdate  (binary VA: 0x184ebb0)
// Original: hkpProjectileGun::onUpdate
// ----------------------------------------------------------------------------
void hkpProjectileGun::onUpdate(hkpProjectileGun::Self *self, float a2)
{
  hkpProjectileGun::updateProjectiles(self, a2);
  hkpProjectileGun::clearHitProjectiles(self);
  hkpProjectileGun::removeDestroyedProjectiles(self);
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::addProjectile  (binary VA: 0x184ebf0)
// Original: hkpProjectileGun::addProjectile
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpProjectileGun::addProjectile(hkpProjectileGun::Self *self, hkpGunProjectile::Self *a2)
{
  int v2;
  hkpWorld::Self *v3;
  int v5;
  int32_t v6; // kr00_4
  int v7;

  if ( *((uint16_t *)a2 + 3) == 0 )
  {
    v2 = *((uint32_t *)self + 12);
    if ( v2 != (*((uint32_t *)self + 13) & 0x3FFFFFFF) )
      goto LABEL_3;
LABEL_6:
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpProjectileGun::Self *)((char *)self + 44),
      4,
      v7);
    v2 = *((uint32_t *)self + 12);
    goto LABEL_3;
  }
  do
  {
    v6 = *((uint32_t *)a2 + 1);
    HIWORD(v5) = HIWORD(v6);
    LOWORD(v5) = 0;
  }
  while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v6, v5 | (uint16_t)(v6 + 1)) );
  v2 = *((uint32_t *)self + 12);
  if ( v2 == (*((uint32_t *)self + 13) & 0x3FFFFFFF) )
    goto LABEL_6;
LABEL_3:
  *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  v3 = *((hkpWorld::Self **)self + 14);
  ++*((uint32_t *)self + 12);
  return hkpGunProjectile::addToWorld(a2, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpProjectileGun::getFirstActiveProjectile  (binary VA: 0x184eca0)
// Original: hkpProjectileGun::getFirstActiveProjectile
// ----------------------------------------------------------------------------
int hkpProjectileGun::getFirstActiveProjectile(hkpProjectileGun::Self *self)
{
  int v1;
  int *v2;
  int result;
  int v4;

  v1 = *((uint32_t *)self + 12);
  if ( v1 > 0 )
  {
    v2 = *((int **)self + 11);
    result = *v2;
    if ( (*(uint8_t *)(*v2 + 12) & 1) == 0 )
      return result;
    v4 = 0;
    while ( ++v4 != v1 )
    {
      result = v2[v4];
      if ( (*(uint8_t *)(result + 12) & 1) == 0 )
        return result;
    }
  }
  return 0;
}


