#include "Core/Utils/DecompTypes.h"
#include "glf_TaskManager.h"

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::Construct  (binary VA: 0xcc57d0)
// Original: glf::TaskManager::TaskManager
// ----------------------------------------------------------------------------
glf::TaskManager::Self * glf::TaskManager::Construct(glf::TaskManager::Self *self)
{
  uint32_t *v1;
  char *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int **v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  int *EphemeralAllocation;
  glf::TaskManager::Self *result;
  uint32_t *v13;
  int v14;
  int **v15;
  uint32_t *v16;
  uint32_t *v17;
  char *v18;
  char *v19;

  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 52) = 0;
  v1 = (uint32_t *)opNewArray(0x9C4u);
  v18 = (char *)(v1 + 1);
  v2 = (char *)(v1 + 1);
  v3 = v1 + 19;
  v15 = (int **)(v1 + 37);
  v4 = v1 + 39;
  *v1 = 16;
  v19 = (char *)(v1 + 625);
  v17 = v1 + 2;
  v5 = v1 + 20;
  v6 = v1 + 2;
  v7 = v15;
  v16 = v4;
  v8 = v3;
  v9 = v2;
  do
  {
    v10 = (char *)(v9 - v18);
    *(uint32_t *)v9 = 0;
    *(uint32_t *)((char *)v6 + (uint32_t)(uintptr_t)(v10)) = 0;
    *(uint32_t *)((char *)v8 + (uint32_t)(uintptr_t)(v10)) = 0;
    *(uint32_t *)((char *)v5 + (uint32_t)(uintptr_t)(v10)) = 0;
    *(uint32_t *)((char *)v16 + (uint32_t)(uintptr_t)(v10)) = 0;
    v13 = v5;
    v14 = (int)(uintptr_t)(v8);
    EphemeralAllocation = glf::allocateEphemeralAllocation((glf::Self *)byte_8);
    *EphemeralAllocation = 0;
    *v7 = EphemeralAllocation;
    v7[1] = EphemeralAllocation;
    v7 += 39;
    *(uint32_t *)((char *)v16 + (uint32_t)(uintptr_t)(v10)) = 0;
    v6 = v17;
    *(uint32_t *)v9 = 0;
    v9 += 156;
    *(uint32_t *)((char *)v17 + (uint32_t)(uintptr_t)(v10)) = 0;
    v8 = (uint32_t *)v14;
    *(uint32_t *)&v10[v14] = 0;
    v5 = v13;
    *(uint32_t *)((char *)v13 + (uint32_t)(uintptr_t)(v10)) = 0;
  }
  while ( v9 != v19 );
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v18);
  *((uint32_t *)self + 1) = 16;
  *((uint32_t *)self + 53) = (uint32_t)(uintptr_t)((char *)self + 212);
  *((uint32_t *)self + 54) = (uint32_t)(uintptr_t)((char *)self + 212);
  result = (glf::TaskManager::Self *)(glf::SpinLock::Construct((glf::TaskManager::Self *)((char *)self + 220)));
  *((uint32_t *)self + 56) = 0;
  *((uint8_t *)self + 228) = 0;
  *((uint8_t *)self + 229) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::Destroy  (binary VA: 0xcc5950)
// Original: glf::TaskManager::~TaskManager
// ----------------------------------------------------------------------------
void glf::TaskManager::Destroy(void **self)
{
  glf::TaskManager::Self **v1;
  glf::TaskManager::Self *v2;
  void ***v3;
  void ***v4;
  void **v5;
  uint32_t *v6;
  void *v7;

  glf::SpinLock::Destroy(self + 55);
  v1 = (glf::TaskManager::Self **)*(self + 53);
  if ( v1 != (glf::TaskManager::Self **)(self + 53) )
  {
    while ( 1 )
    {
      v2 = *v1;
      opDelete(v1);
      if ( v2 == (glf::TaskManager::Self *)(self + 53) )
        break;
      v1 = (glf::TaskManager::Self **)v2;
    }
  }
  v3 = (void ***)*self;
  if ( *self != nullptr )
  {
    v4 = &v3[39 * (uint32_t)(uintptr_t)(*(v3 - 1))];
    if ( v3 != v4 )
    {
      do
      {
        v4 -= 39;
        v5 = v4[36];
        if ( *v5 != nullptr )
        {
          v6 = *(uint32_t **)*v5;
          opDelete(*v5);
          while ( v6 != nullptr )
          {
            v7 = v6;
            v6 = (uint32_t *)*v6;
            opDelete(v7);
          }
          v5 = v4[36];
        }
        glf::freeEphemeralAllocation((glf::Self *)v5);
        v3 = (void ***)*self;
      }
      while ( *self != v4 );
    }
    opDeleteArray(v3 - 1);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::Signal  (binary VA: 0xcc5a10)
// Original: glf::TaskManager::Signal
// ----------------------------------------------------------------------------
uint32_t * glf::TaskManager::Signal(volatile int32_t **self)
{
  pthread_mutex_t ***i;

  glf::SpinLock::Lock(self + 55);
  for ( i = (pthread_mutex_t ***)*(self + 53); self + 53 != (volatile int32_t **)i; i = (pthread_mutex_t ***)*i )
  {
    if ( (uint8_t)glf::TaskCondition::Signal(i[2]) != 0 )
      break;
  }
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 55));
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::Push  (binary VA: 0xcc5a70)
// Original: glf::TaskManager::Push
// ----------------------------------------------------------------------------
uint32_t * glf::TaskManager::Push(glf::TaskManager::Self *self, glf::Task::Self *a2, bool a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int *EphemeralAllocation;
  uint32_t *result;
  int32_t v8;

  v3 = *(uint32_t *)self
     + 156 * ((unsigned int)__sync_fetch_and_add((volatile int32_t *)self + 18, 1u) % *((uint32_t *)self + 1));
  v8 = __sync_fetch_and_add((volatile int32_t *)(v3 + 72), 1u);
  v4 = *(uint32_t *)(v3 + 76);
  _mm_mfence();
  if ( v8 != v4 )
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(v3 + 76);
      _mm_mfence();
      if ( v8 == v5 )
        break;
      glf::Thread::Sleep(nullptr);
    }
  }
  EphemeralAllocation = glf::allocateEphemeralAllocation((glf::Self *)byte_8);
  if ( EphemeralAllocation != (int *)-4 )
    EphemeralAllocation[1] = (int)(uintptr_t)(a2);
  *EphemeralAllocation = 0;
  _mm_mfence();
  **(uint32_t **)(v3 + 148) = (uint32_t)(uintptr_t)(EphemeralAllocation);
  *(uint32_t *)(v3 + 148) = (uint32_t)(uintptr_t)(EphemeralAllocation);
  __sync_add_and_fetch((volatile int32_t *)(v3 + 152), 1u);
  __sync_add_and_fetch((volatile int32_t *)(v3 + 76), 1u);
  __sync_add_and_fetch((volatile int32_t *)self + 52, 1u);
  result = (uint32_t *)a3;
  if ( a3 )
    return glf::TaskManager::Signal((volatile int32_t **)self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::Broadcast  (binary VA: 0xcc5b40)
// Original: glf::TaskManager::Broadcast
// ----------------------------------------------------------------------------
uint32_t * glf::TaskManager::Broadcast(volatile int32_t **self)
{
  pthread_mutex_t ***i;

  glf::SpinLock::Lock(self + 55);
  for ( i = (pthread_mutex_t ***)*(self + 53); self + 53 != (volatile int32_t **)i; i = (pthread_mutex_t ***)*i )
    glf::TaskCondition::Signal(i[2]);
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 55));
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::Pop  (binary VA: 0xcc5ba0)
// Original: glf::TaskManager::Pop
// ----------------------------------------------------------------------------
int glf::TaskManager::Pop(glf::TaskManager::Self *self)
{
  int v1;
  int32_t v2;
  uint32_t v3;
  int v4;
  int v5;
  int v6;
  glf::Self *v7;
  int v9;
  int32_t v10;

  v1 = 0;
  if ( *((uint8_t *)self + 229) == 0 )
  {
    v2 = *((uint32_t *)self + 52);
    _mm_mfence();
    if ( v2 != 0 )
    {
      while ( v2 != __sync_val_compare_and_swap((volatile int32_t *)self + 52, v2, v2 - 1) )
      {
        v2 = *((uint32_t *)self + 52);
        _mm_mfence();
        if ( v2 == 0 )
          return 0;
      }
      v3 = __sync_fetch_and_add((volatile int32_t *)self + 35, 1u);
      while ( 1 )
      {
        v4 = *(uint32_t *)self + 156 * (v3 % *((uint32_t *)self + 1));
        v10 = __sync_fetch_and_add((volatile int32_t *)v4, 1u);
        v5 = *(uint32_t *)(v4 + 4);
        _mm_mfence();
        if ( v10 != v5 )
        {
          while ( 1 )
          {
            v6 = *(uint32_t *)(v4 + 4);
            _mm_mfence();
            if ( v10 == v6 )
              break;
            glf::Thread::Sleep(nullptr);
          }
        }
        v7 = *(glf::Self **)(v4 + 144);
        if ( *(uint32_t *)v7 != 0 )
          break;
        __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
      }
      v1 = *(uint32_t *)(*(uint32_t *)v7 + 4);
      v9 = *(uint32_t *)v7;
      glf::freeEphemeralAllocation(v7);
      *(uint32_t *)(v4 + 144) = v9;
      __sync_sub_and_fetch((volatile int32_t *)(v4 + 152), 1u);
      __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::AddTaskCondition  (binary VA: 0xcc5cb0)
// Original: glf::TaskManager::AddTaskCondition
// ----------------------------------------------------------------------------
uint32_t * glf::TaskManager::AddTaskCondition(volatile int32_t **self, glf::TaskCondition::Self *a2)
{
  int v2;

  glf::SpinLock::Lock(self + 55);
  v2 = opNew(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  sub_1901920(v2, self + 53);
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 55));
}

// ----------------------------------------------------------------------------
// Function: glf::TaskManager::RemoveTaskCondition  (binary VA: 0xcc5d20)
// Original: glf::TaskManager::RemoveTaskCondition
// ----------------------------------------------------------------------------
uint32_t * glf::TaskManager::RemoveTaskCondition(volatile int32_t **self, glf::TaskCondition::Self *a2)
{
  glf::TaskCondition::Self **v2;
  char *v3;
  glf::TaskCondition::Self *v4;
  char *v5;
  glf::TaskCondition::Self *v7;
  glf::TaskCondition::Self **v8;

  glf::SpinLock::Lock(self + 55);
  v2 = (glf::TaskCondition::Self **)*(self + 53);
  v3 = (char *)(self + 53);
  if ( v2 == (glf::TaskCondition::Self **)(self + 53) )
    return glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 55));
  v4 = a2;
  v8 = (glf::TaskCondition::Self **)(self + 53);
  while ( 1 )
  {
    v5 = (char *)*v2;
    if ( v2[2] == v4 )
    {
      if ( &a2 != v2 + 2 )
        break;
      v8 = v2;
    }
    if ( v3 == v5 )
      goto LABEL_8;
LABEL_4:
    v2 = (glf::TaskCondition::Self **)v5;
  }
  v7 = v4;
  sub_1901940(v2);
  opDelete(v2);
  v4 = v7;
  if ( v3 != v5 )
    goto LABEL_4;
LABEL_8:
  if ( v3 != (char *)v8 )
  {
    sub_1901940(v8);
    opDelete(v8);
  }
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)(self + 55));
}


