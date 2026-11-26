#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldOb.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::staticClass  (binary VA: 0x1733100)
// Original: hkpWorldObject::staticClass
// ----------------------------------------------------------------------------
void * hkpWorldObject::staticClass()
{
  return &hkpWorldObjectClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::setShape  (binary VA: 0x1748070)
// Original: hkpWorldObject::setShape
// ----------------------------------------------------------------------------
int hkpWorldObject::setShape()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::updateShape  (binary VA: 0x1748080)
// Original: hkpWorldObject::updateShape
// ----------------------------------------------------------------------------
int hkpWorldObject::updateShape()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::Destroy  (binary VA: 0x1748090)
// Original: hkpWorldObject::~hkpWorldObject
// ----------------------------------------------------------------------------
void hkpWorldObject::Destroy(hkpWorldObject::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  v1 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F3C8);
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
  v6 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 32) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 31),
      16 * v6);
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0x80000000;
  hkStringPtr::Destroy((hkpWorldObject::Self *)((char *)self + 120));
  v7 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 25) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      8 * v7);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::Destroy_ea1748190  (binary VA: 0x1748190)
// Original: hkpWorldObject::~hkpWorldObject
// ----------------------------------------------------------------------------
void hkpWorldObject::Destroy_ea1748190(hkpWorldObject::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F3C8);
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
  v6 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 32) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 31),
      16 * v6);
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0x80000000;
  hkStringPtr::Destroy((hkpWorldObject::Self *)((char *)self + 120));
  v7 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 25) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      8 * v7);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v8 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v9 = 136;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v9 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v8, 12, self, v9);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::Construct  (binary VA: 0x17482d0)
// Original: hkpWorldObject::hkpWorldObject
// ----------------------------------------------------------------------------
void hkpWorldObject::Construct(int a1, int a2)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209F3C8);
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 80) = 0;
    *(uint16_t *)(a1 + 82) = 0;
    *(uint32_t *)(a1 + 84) = 0;
    *(uint32_t *)(a1 + 88) = 0;
    *(uint32_t *)(a1 + 48) = 1;
    *(uint32_t *)(a1 + 64) = 0;
    *(uint8_t *)(a1 + 41) = -20;
    *(uint32_t *)(a1 + 96) = 0;
    *(uint32_t *)(a1 + 100) = 0;
    *(uint32_t *)(a1 + 104) = 0x80000000;
    *(uint32_t *)(a1 + 108) = -15;
    *(uint16_t *)(a1 + 116) = 0x8000;
    hkStringPtr::Construct();
    *(uint8_t *)(a1 + 32) = -16;
  }
  else
  {
    *(uint32_t *)(a1 + 96) = 0;
    *(uint32_t *)(a1 + 100) = 0;
    *(uint32_t *)(a1 + 104) = 0x80000000;
    *(uint32_t *)(a1 + 108) = -15;
    *(uint16_t *)(a1 + 116) = 0x8000;
    hkStringPtr::Construct();
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::Construct  (binary VA: 0x17483a0)
// Original: hkpWorldObject::hkpWorldObject
// ----------------------------------------------------------------------------
void hkpWorldObject::Construct(int a1, int a2, char a3)
{
  int v3;
  int32_t v4; // kr00_4

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209F3C8);
  *(uint8_t *)(a1 + 40) = a3;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = a2;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 20) = -1;
  *(uint8_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint8_t *)(a1 + 42) = -1;
  *(uint8_t *)(a1 + 41) = 127;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)(a1 + 48));
  *(uint32_t *)(a1 + 92) = -1082130432;
  *(uint8_t *)(a1 + 41) = -20;
  *(uint8_t *)(a1 + 33) = 8;
  *(uint16_t *)(a1 + 34) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0x80000000;
  *(uint32_t *)(a1 + 108) = -15;
  *(uint16_t *)(a1 + 116) = 0x8000;
  hkStringPtr::Construct((hkStringPtr::Self *)(a1 + 120));
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0x80000000;
  *(uint8_t *)(a1 + 32) = -16;
  if ( a2 != 0 && *(uint16_t *)(a2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(a2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)(a2 + 4), v4, v3 | (uint16_t)(v4 + 1)) );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::addProperty  (binary VA: 0x17484c0)
// Original: hkpWorldObject::addProperty
// ----------------------------------------------------------------------------
void hkpWorldObject::addProperty(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;

  v4 = a1[32];
  if ( v4 > 0 )
  {
    v5 = (uint32_t *)a1[31];
    if ( *v5 == a2 )
      return;
    v6 = 0;
    while ( ++v6 != v4 )
    {
      if ( v5[4 * v6] == a2 )
        return;
    }
  }
  if ( (a1[33] & 0x3FFFFFFF) == v4 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 31), 16, v9);
    v4 = a1[32];
  }
  v7 = v4;
  v8 = (uint32_t *)(a1[31] + 16 * v4);
  a1[32] = v7 + 1;
  v8[2] = a3;
  v8[3] = a4;
  *v8 = a2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::setProperty  (binary VA: 0x1748570)
// Original: hkpWorldObject::setProperty
// ----------------------------------------------------------------------------
uint32_t * hkpWorldObject::setProperty(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *result;
  int v10;

  v4 = a1[32];
  if ( v4 <= 0 )
  {
LABEL_6:
    if ( (a1[33] & 0x3FFFFFFF) == v4 )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a1 + 31),
        16,
        v10);
      v4 = a1[32];
    }
    result = (uint32_t *)(16 * v4 + a1[31]);
    a1[32] = v4 + 1;
    result[2] = a3;
    result[3] = a4;
    *result = a2;
    return result;
  }
  v5 = (uint32_t *)a1[31];
  if ( *v5 != a2 )
  {
    v6 = v5 + 4;
    v7 = 0;
    while ( ++v7 != v4 )
    {
      v8 = v6;
      v6 += 4;
      if ( *(v6 - 4) == a2 )
        goto LABEL_10;
    }
    goto LABEL_6;
  }
  v8 = (uint32_t *)a1[31];
LABEL_10:
  v8[2] = a3;
  v8[3] = a4;
  return (uint32_t *)a3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::removeProperty  (binary VA: 0x1748640)
// Original: hkpWorldObject::removeProperty
// ----------------------------------------------------------------------------
hkpWorldObject::Self * hkpWorldObject::removeProperty(hkpWorldObject::Self *self, unsigned int a2, int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v8;
  uint32_t *v9;
  int v10;
  int i;
  int v12;
  int v13;
  int v14;

  v12 = *(uint32_t *)(a2 + 128);
  if ( v12 <= 0 )
  {
LABEL_6:
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    return self;
  }
  v3 = *(uint32_t **)(a2 + 124);
  if ( *v3 != a3 )
  {
    v4 = 0;
    v5 = v3 + 4;
    while ( ++v4 != v12 )
    {
      v6 = v5;
      v5 += 4;
      if ( *(v5 - 4) == a3 )
      {
        v8 = 4 * (v4 + 1);
        goto LABEL_8;
      }
    }
    goto LABEL_6;
  }
  v6 = *(uint32_t **)(a2 + 124);
  v8 = 4;
  v4 = 0;
LABEL_8:
  v14 = v6[3];
  v13 = v6[2];
  v9 = &v3[v8];
  *(uint32_t *)(a2 + 128) = v12 - 1;
  v10 = 16 * (v12 - 1 - v4);
  for ( i = 0; v10 > i; i += 4 )
    v6[i / 4u] = v9[i / 4u];
  *(uint32_t *)self = v13;
  *((uint32_t *)self + 1) = v14;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::editProperty  (binary VA: 0x1748720)
// Original: hkpWorldObject::editProperty
// ----------------------------------------------------------------------------
uint32_t * hkpWorldObject::editProperty(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t *result;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;

  result = a1;
  v5 = a1[32];
  if ( v5 > 0 )
  {
    v6 = (uint32_t *)a1[31];
    if ( *v6 == a2 )
    {
      v8 = (uint32_t *)a1[31];
LABEL_8:
      v8[2] = a3;
      v8[3] = a4;
      return (uint32_t *)a3;
    }
    else
    {
      result = v6 + 4;
      v7 = 0;
      while ( ++v7 != v5 )
      {
        v8 = result;
        result += 4;
        if ( *(result - 4) == a2 )
          goto LABEL_8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::lockProperty  (binary VA: 0x1748780)
// Original: hkpWorldObject::lockProperty
// ----------------------------------------------------------------------------
int hkpWorldObject::lockProperty(hkpWorldObject::Self *self)
{
  int result;
  pthread_mutex_t *mutex;
  unsigned int count;

  result = *((uint32_t *)self + 2);
  if ( result != 0 )
  {
    mutex = *(pthread_mutex_t **)(result + 192);
    if ( mutex != nullptr )
    {
      count = ((int32_t *)(mutex))[1];
      if ( count != 0 )
      {
        while ( 1 )
        {
          result = pthread_mutex_trylock(mutex);
          if ( result == 0 )
            break;
          if ( --count == 0 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        result = pthread_mutex_lock(mutex);
        if ( result != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
          perror("pthread_mutex_lock(&mutex)");
          __builtin_debugtrap();
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::unlockProperty  (binary VA: 0x1748820)
// Original: hkpWorldObject::unlockProperty
// ----------------------------------------------------------------------------
pthread_mutex_t * hkpWorldObject::unlockProperty(hkpWorldObject::Self *self)
{
  pthread_mutex_t *result;

  result = *((pthread_mutex_t **)self + 2);
  if ( result != nullptr )
  {
    result = (pthread_mutex_t *)G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(result) + (24 * (8))));
    if ( result != nullptr )
    {
      result = (pthread_mutex_t *)pthread_mutex_unlock(result);
      if ( result != nullptr )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
        perror("pthread_mutex_unlock(&m_mutex)");
        __builtin_debugtrap();
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::markForWriteImpl  (binary VA: 0x17488a0)
// Original: hkpWorldObject::markForWriteImpl
// ----------------------------------------------------------------------------
void hkpWorldObject::markForWriteImpl()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::checkReadWrite  (binary VA: 0x17488b0)
// Original: hkpWorldObject::checkReadWrite
// ----------------------------------------------------------------------------
void hkpWorldObject::checkReadWrite()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldObject::checkReadOnly  (binary VA: 0x17488c0)
// Original: hkpWorldObject::checkReadOnly
// ----------------------------------------------------------------------------
void hkpWorldObject::checkReadOnly()
{
  ;
}


