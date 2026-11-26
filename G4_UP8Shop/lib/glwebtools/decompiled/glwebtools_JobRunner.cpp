#include "Core/Utils/DecompTypes.h"
#include "glwebtools_JobRunner.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Construct  (binary VA: 0x13e9ce0)
// Original: glwebtools::JobRunner::JobRunner
// ----------------------------------------------------------------------------
glwebtools::Condition::Self * glwebtools::JobRunner::Construct(glwebtools::Job::Self *a1, char **a2)
{
  glwebtools::Condition::Self *result;

  glwebtools::Job::Job(a1);
  glwebtools::Thread::Construct(
    (glwebtools::Job::Self *)((char *)a1 + 12),
    (void (*)(void *, void *))glwebtools::JobRunner::RunStatic,
    a1,
    nullptr,
    *a2);
  *((uint32_t *)a1 + 9) = 0;
  glwebtools::Mutex::Construct((glwebtools::Job::Self *)((char *)a1 + 40));
  result = glwebtools::Condition::Construct((glwebtools::Job::Self *)((char *)a1 + 48), (glwebtools::Job::Self *)((char *)a1 + 40));
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Run  (binary VA: 0x13e9d80)
// Original: glwebtools::JobRunner::Run
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::Run(glwebtools::JobRunner::Self *self)
{
  glwebtools::Mutex::Lock((glwebtools::JobRunner::Self *)((char *)self + 40));
  while ( *((uint32_t *)self + 9) != 3 )
  {
    *((uint32_t *)self + 9) = 1;
    glwebtools::Condition::Wait((glwebtools::JobRunner::Self *)((char *)self + 48), 0);
    if ( glwebtools::Job::IsSet(self) )
    {
      glwebtools::Job::opCall((int)(uintptr_t)(self));
      glwebtools::Job::Reset(self);
    }
  }
  ERR_remove_state(0);
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((glwebtools::JobRunner::Self *)((char *)self + 40)));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::RunStatic  (binary VA: 0x13e9e10)
// Original: glwebtools::JobRunner::RunStatic
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::RunStatic(glwebtools::JobRunner::Self *self)
{
  return glwebtools::JobRunner::Run(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Signal  (binary VA: 0x13e9e40)
// Original: glwebtools::JobRunner::Signal
// ----------------------------------------------------------------------------
unsigned int glwebtools::JobRunner::Signal(glwebtools::JobRunner::Self *self, const glwebtools::Job::Self *a2)
{
  unsigned int v2;
  glwebtools::Self *v4;

  v2 = 0x80000003;
  glwebtools::Mutex::Lock((glwebtools::JobRunner::Self *)((char *)self + 40));
  if ( *((uint32_t *)self + 9) == 1 )
  {
    v2 = 0;
    if ( glwebtools::Job::IsSet(a2) )
    {
      *(uint32_t *)self = *(uint32_t *)a2;
      *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
      *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
      *((uint32_t *)self + 9) = 2;
      v4 = (glwebtools::Self *)glwebtools::Condition::Signal((glwebtools::JobRunner::Self *)((char *)self + 48));
      if ( !glwebtools::IsOperationSuccess(v4) )
      {
        v2 = 0x80000000;
        glwebtools::Job::Reset(self);
        *((uint32_t *)self + 9) = 1;
      }
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::JobRunner::Self *)((char *)self + 40));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::IsIdle  (binary VA: 0x13e9f00)
// Original: glwebtools::JobRunner::IsIdle
// ----------------------------------------------------------------------------
bool glwebtools::JobRunner::IsIdle(glwebtools::JobRunner::Self *self)
{
  return *((uint32_t *)self + 9) == 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::IsWaiting  (binary VA: 0x13e9f10)
// Original: glwebtools::JobRunner::IsWaiting
// ----------------------------------------------------------------------------
bool glwebtools::JobRunner::IsWaiting(glwebtools::JobRunner::Self *self)
{
  return *((uint32_t *)self + 9) == 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::IsRunning  (binary VA: 0x13e9f20)
// Original: glwebtools::JobRunner::IsRunning
// ----------------------------------------------------------------------------
bool glwebtools::JobRunner::IsRunning(glwebtools::JobRunner::Self *self)
{
  return *((uint32_t *)self + 9) == 2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::IsEnding  (binary VA: 0x13e9f30)
// Original: glwebtools::JobRunner::IsEnding
// ----------------------------------------------------------------------------
bool glwebtools::JobRunner::IsEnding(glwebtools::JobRunner::Self *self)
{
  return *((uint32_t *)self + 9) == 3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Start  (binary VA: 0x13e9f40)
// Original: glwebtools::JobRunner::Start
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::Start(uint32_t *a1)
{
  int v1;
  glwebtools::Mutex::Self *v3;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 10));
  v3 = (glwebtools::Mutex::Self *)(a1 + 10);
  if ( a1[9] != 0 )
  {
    glwebtools::Mutex::Unlock(v3);
    return -2147483645;
  }
  else
  {
    glwebtools::Mutex::Unlock(v3);
    v1 = -2147483641;
    if ( glwebtools::Thread::GetState((glwebtools::Thread::Self *)(a1 + 3)) != 3 )
    {
      a1[14] = 0;
      a1[15] = 0;
      glwebtools::Thread::Start(a1 + 3);
      if ( glwebtools::Thread::GetState((glwebtools::Thread::Self *)(a1 + 3)) != 3 )
      {
        v1 = 0;
        glwebtools::Thread::Sleep(nullptr);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Join  (binary VA: 0x13ea000)
// Original: glwebtools::JobRunner::Join
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::Join(glwebtools::JobRunner::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::JobRunner::Self *)((char *)self + 40));
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  glwebtools::Job::Reset(self);
  if ( *((uint32_t *)self + 9) != 0 )
  {
    v1 = *((uint32_t *)self + 9);
    *((uint32_t *)self + 9) = 3;
    if ( v1 == 1 )
      glwebtools::Condition::Signal((glwebtools::JobRunner::Self *)((char *)self + 48));
  }
  else
  {
    *((uint32_t *)self + 9) = 3;
  }
  glwebtools::Mutex::Unlock((glwebtools::JobRunner::Self *)((char *)self + 40));
  glwebtools::Thread::Join((pthread_t **)self + 3);
  *((uint32_t *)self + 9) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Destroy  (binary VA: 0x13ea0b0)
// Original: glwebtools::JobRunner::~JobRunner
// ----------------------------------------------------------------------------
void glwebtools::JobRunner::Destroy(glwebtools::JobRunner::Self *self)
{
  glwebtools::JobRunner::Join(self);
  glwebtools::Condition::Destroy((glwebtools::JobRunner::Self *)((char *)self + 48));
  glwebtools::Mutex::Destroy((glwebtools::JobRunner::Self *)((char *)self + 40));
  glwebtools::Thread::Destroy((glwebtools::JobRunner::Self *)((char *)self + 12));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::Update  (binary VA: 0x13ea110)
// Original: glwebtools::JobRunner::Update
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::Update(glwebtools::JobRunner::Self *self, uint64_t a2)
{
  if ( *((uint32_t *)self + 9) != 0 )
  {
    *((uint32_t *)self + 14) = 0;
    *((uint32_t *)self + 15) = 0;
  }
  else
  {
    *((uint64_t *)self + 7) += a2;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::IsIdleForMoreThan  (binary VA: 0x13ea170)
// Original: glwebtools::JobRunner::IsIdleForMoreThan
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::IsIdleForMoreThan(glwebtools::JobRunner::Self *self, uint64_t a2)
{
  int result;

  result = 0;
  if ( *((uint32_t *)self + 9) == 0 )
  {
    result = 1;
    if ( *((uint64_t *)self + 7) <= a2 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JobRunner::GetName  (binary VA: 0x13ea1c0)
// Original: glwebtools::JobRunner::GetName
// ----------------------------------------------------------------------------
int glwebtools::JobRunner::GetName(glwebtools::JobRunner::Self *self)
{
  return *((uint32_t *)self + 6);
}


