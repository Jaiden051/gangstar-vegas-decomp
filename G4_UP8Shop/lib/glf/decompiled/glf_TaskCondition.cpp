#include "Core/Utils/DecompTypes.h"
#include "glf_TaskCondition.h"

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Destroy  (binary VA: 0xcc2f50)
// Original: glf::TaskCondition::~TaskCondition
// ----------------------------------------------------------------------------
void glf::TaskCondition::Destroy(glf::TaskCondition::Self *self)
{
  glf::TaskCondition::Self **v1;
  glf::TaskCondition::Self *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E6A8);
  v1 = *((glf::TaskCondition::Self ***)self + 8);
  if ( v1 != (glf::TaskCondition::Self **)((char *)self + 32) )
  {
    while ( 1 )
    {
      v2 = *v1;
      opDelete(v1);
      if ( v2 == (glf::TaskCondition::Self *)((char *)self + 32) )
        break;
      v1 = (glf::TaskCondition::Self **)v2;
    }
  }
  glf::Condition::Destroy((glf::TaskCondition::Self *)((char *)self + 12));
  glf::Mutex::Destroy((pthread_mutex_t **)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Destroy_eacc2fb0  (binary VA: 0xcc2fb0)
// Original: glf::TaskCondition::~TaskCondition
// ----------------------------------------------------------------------------
void glf::TaskCondition::Destroy_eacc2fb0(glf::TaskCondition::Self *self)
{
  glf::TaskCondition::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Construct  (binary VA: 0xcc2ff0)
// Original: glf::TaskCondition::TaskCondition
// ----------------------------------------------------------------------------
int64_t glf::TaskCondition::Construct(glf::TaskCondition::Self *self)
{
  int64_t result; // rax

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E6A8);
  *((uint8_t *)self + 4) = 1;
  *((uint8_t *)self + 5) = 0;
  *((uint8_t *)self + 6) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 2, 0);
  glf::Condition::Construct((glf::TaskCondition::Self *)((char *)self + 12), (glf::TaskCondition::Self *)((char *)self + 8));
  *((uint32_t *)self + 6) = 250;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 32);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)((char *)self + 32);
  result = glf::GetMicroseconds();
  *((uint64_t *)self + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Signal  (binary VA: 0xcc3080)
// Original: glf::TaskCondition::Signal
// ----------------------------------------------------------------------------
int glf::TaskCondition::Signal(pthread_mutex_t **self)
{
  int v1;
  bool v2;

  v1 = 0;
  glf::Mutex::Lock(self + 2);
  v2 = *((uint8_t *)self + 5) == 0;
  *((uint8_t *)self + 6) = 1;
  if ( !v2 )
  {
    *((uint8_t *)self + 5) = 0;
    v1 = 1;
    glf::Condition::Signal((glf::Condition::Self *)(self + 3));
  }
  glf::Mutex::Unlock(self + 2);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::AddTaskManager  (binary VA: 0xcc3100)
// Original: glf::TaskCondition::AddTaskManager
// ----------------------------------------------------------------------------
int glf::TaskCondition::AddTaskManager(glf::TaskCondition::Self *self, glf::TaskManager::Self *a2)
{
  int v2;
  int result;

  v2 = opNew(0xCu);
  if ( v2 != -8 )
    *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
  result = sub_1901920(v2, (char *)self + 32);
  __sync_add_and_fetch((volatile int32_t *)a2 + 56, 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::RemoveTaskManager  (binary VA: 0xcc3160)
// Original: glf::TaskCondition::RemoveTaskManager
// ----------------------------------------------------------------------------
glf::TaskManager::Self * glf::TaskCondition::RemoveTaskManager(glf::TaskCondition::Self *self, glf::TaskManager::Self *a2)
{
  glf::TaskManager::Self **v2;
  char *v3;
  char *v4;
  glf::TaskManager::Self *result;
  glf::TaskManager::Self **v6;

  v2 = *((glf::TaskManager::Self ***)self + 8);
  v3 = (char *)self + 32;
  if ( v2 == (glf::TaskManager::Self **)((char *)self + 32) )
    goto LABEL_10;
  v6 = (glf::TaskManager::Self **)((char *)self + 32);
  while ( 1 )
  {
    v4 = (char *)*v2;
    if ( v2[2] == a2 )
    {
      if ( &a2 != v2 + 2 )
        break;
      v6 = v2;
    }
    if ( v3 == v4 )
      goto LABEL_8;
LABEL_4:
    v2 = (glf::TaskManager::Self **)v4;
  }
  sub_1901940(v2);
  opDelete(v2);
  if ( v3 != v4 )
    goto LABEL_4;
LABEL_8:
  if ( v6 != (glf::TaskManager::Self **)v3 )
  {
    sub_1901940(v6);
    opDelete(v6);
  }
LABEL_10:
  result = a2;
  __sync_sub_and_fetch((volatile int32_t *)a2 + 56, 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Start  (binary VA: 0xcc3200)
// Original: glf::TaskCondition::Start
// ----------------------------------------------------------------------------
glf::TaskCondition::Self * glf::TaskCondition::Start(glf::TaskCondition::Self *self)
{
  *((uint8_t *)self + 4) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Stop  (binary VA: 0xcc3210)
// Original: glf::TaskCondition::Stop
// ----------------------------------------------------------------------------
int glf::TaskCondition::Stop(glf::TaskCondition::Self *self)
{
  *((uint8_t *)self + 4) = 0;
  return glf::TaskCondition::Signal((pthread_mutex_t **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskCondition::Wait  (binary VA: 0xcc3240)
// Original: glf::TaskCondition::Wait
// ----------------------------------------------------------------------------
void glf::TaskCondition::Wait(glf::TaskCondition::Self *self)
{
  char *v1;
  char *v2;
  int v3;
  int v4;
  char *i;
  char *j;
  int64_t v7;

  if ( *((uint8_t *)self + 4) != 0 )
  {
    v1 = (char *)self + 32;
    while ( 1 )
    {
      v2 = *((char **)self + 8);
      if ( v2 != v1 )
        break;
LABEL_8:
      if ( *((uint64_t *)self + 3) != 0 )
      {
        v7 = *((uint64_t *)self + 2) + *((uint64_t *)self + 3);
        if ( v7 > glf::GetMicroseconds() )
          continue;
      }
      for ( i = *((char **)self + 8); v1 != i; i = *(char **)i )
        __sync_sub_and_fetch((volatile int32_t *)(*((uint32_t *)i + 2) + 224), 1u);
      glf::Mutex::Lock((pthread_mutex_t **)self + 2);
      if ( *((uint8_t *)self + 4) != 0 && *((uint8_t *)self + 6) == 0 )
      {
        *((uint8_t *)self + 5) = 1;
        glf::Condition::Wait((glf::TaskCondition::Self *)((char *)self + 12), 0);
      }
      *((uint8_t *)self + 6) = 0;
      glf::Mutex::Unlock((pthread_mutex_t **)self + 2);
      if ( *((uint64_t *)self + 3) != 0 )
        *((uint64_t *)self + 2) = glf::GetMicroseconds();
      for ( j = *((char **)self + 8); v1 != j; j = *(char **)j )
        __sync_add_and_fetch((volatile int32_t *)(*((uint32_t *)j + 2) + 224), 1u);
      return;
    }
    while ( 1 )
    {
      v3 = *((uint32_t *)v2 + 2);
      v4 = *(uint32_t *)(v3 + 208);
      _mm_mfence();
      if ( v4 != 0 && *(uint8_t *)(v3 + 229) == 0 )
        break;
      v2 = *(char **)v2;
      if ( v1 == v2 )
        goto LABEL_8;
    }
  }
}


