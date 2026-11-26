#include "Core/Utils/DecompTypes.h"
#include "glf_Task.h"

// ----------------------------------------------------------------------------
// Function: glf::Task::Run  (binary VA: 0xcc29e0)
// Original: glf::Task::Run
// ----------------------------------------------------------------------------
int glf::Task::Run(glf::Task::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 7) + 8))(*((uint32_t *)self + 7));
}

// ----------------------------------------------------------------------------
// Function: glf::Task::Destroy  (binary VA: 0xcc2a00)
// Original: glf::Task::~Task
// ----------------------------------------------------------------------------
void glf::Task::Destroy(glf::Task::Self *self)
{
  void (***v1)(uint32_t);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E678);
  v1 = *((void (****)(uint32_t))self + 7);
  if ( v1 != nullptr )
  {
    (**v1)(*((uint32_t *)self + 7));
    glf::freeEphemeralAllocation(*((glf::Self **)self + 7));
  }
  if ( *((uint8_t *)self + 16) != 0 )
  {
    pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 4));
    pthread_cond_destroy((pthread_cond_t *)((char *)self + 8));
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Task::Construct  (binary VA: 0xcc2a70)
// Original: glf::Task::Task
// ----------------------------------------------------------------------------
glf::Task::Self * glf::Task::Construct(glf::Task::Self *self, bool a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E678);
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 24) = a2;
  *((uint32_t *)self + 8) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Task::Wait  (binary VA: 0xcc2ac0)
// Original: glf::Task::Wait
// ----------------------------------------------------------------------------
bool glf::Task::Wait(glf::Task::Self *self, unsigned int a2)
{
  int32_t v2;
  pthread_mutex_t *mutex;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef struct timespec _g4_t_abstime;
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_abstime)) > _g4_s0 ? (0u + sizeof(_g4_t_abstime)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_tv)) > _g4_s1 ? (8u + sizeof(_g4_t_tv)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_abstime &abstime = *reinterpret_cast<_g4_t_abstime *>(_g4_sf + 0u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  v2 = __sync_val_compare_and_swap((volatile int32_t *)self + 5, 0, 1);
  switch ( v2 )
  {
    case 0:
      mutex = (pthread_mutex_t *)((char *)self + 4);
      pthread_mutex_init((pthread_mutex_t *)((char *)self + 4), nullptr);
      pthread_cond_init((pthread_cond_t *)((char *)self + 8), nullptr);
      *((uint8_t *)self + 16) = 1;
      _mm_mfence();
      *((uint32_t *)self + 5) = 2;
      pthread_mutex_lock((pthread_mutex_t *)((char *)self + 4));
      v5 = *((uint32_t *)self + 3);
      if ( (v5 & 1) != 0 )
      {
LABEL_20:
        pthread_mutex_unlock(mutex);
        return true;
      }
      if ( (v5 & 4) == 0 )
      {
        *((uint32_t *)self + 3) = v5 | 2;
        if ( a2 != 0 )
          goto LABEL_17;
        goto LABEL_21;
      }
      *((uint32_t *)self + 3) = v5 & 0xFFFFFFFB;
      pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 4));
      return true;
    case 2:
      mutex = (pthread_mutex_t *)((char *)self + 4);
      pthread_mutex_lock((pthread_mutex_t *)((char *)self + 4));
      v7 = *((uint32_t *)self + 3);
      if ( (v7 & 1) == 0 )
      {
        if ( (v7 & 4) == 0 )
        {
          *((uint32_t *)self + 3) = v7 | 2;
          if ( a2 != 0 )
          {
LABEL_17:
            gettimeofday(&tv, nullptr);
            abstime.tv_sec = a2 / 0x3E8 + tv.tv_sec;
            abstime.tv_nsec = 1000 * (tv.tv_usec + a2 % 0x3E8);
            v8 = pthread_cond_timedwait(
                   (pthread_cond_t *)((char *)self + 8),
                   (pthread_mutex_t *)((char *)self + 4),
                   &abstime);
LABEL_18:
            *((uint32_t *)self + 3) &= ~2u;
            v9 = v8;
            pthread_mutex_unlock(mutex);
            return v9 == 0;
          }
LABEL_21:
          v8 = pthread_cond_wait((pthread_cond_t *)((char *)self + 8), (pthread_mutex_t *)((char *)self + 4));
          goto LABEL_18;
        }
        *((uint32_t *)self + 3) = v7 & 0xFFFFFFFB;
      }
      goto LABEL_20;
    case 3:
      v6 = 0;
      if ( *((uint32_t *)self + 5) != 4 )
      {
        while ( *((uint32_t *)self + 5) != 4 )
        {
          while ( ++v6 > 64 )
          {
            glf::Thread::Sleep(nullptr);
            if ( *((uint32_t *)self + 5) == 4 )
              return true;
          }
        }
      }
      return true;
    default:
      return true;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Task::IsDone  (binary VA: 0xcc2d30)
// Original: glf::Task::IsDone
// ----------------------------------------------------------------------------
bool glf::Task::IsDone(glf::Task::Self *self)
{
  return *((uint32_t *)self + 5) == 4;
}

// ----------------------------------------------------------------------------
// Function: glf::Task::Done  (binary VA: 0xcc2d40)
// Original: glf::Task::Done
// ----------------------------------------------------------------------------
int glf::Task::Done(glf::Task::Self *self)
{
  int result;
  int v2;
  int v3;

  result = __sync_val_compare_and_swap((volatile int32_t *)self + 5, 0, 3);
  if ( result == 1 )
  {
    v2 = 0;
    if ( *((uint32_t *)self + 5) != 2 )
    {
      while ( *((uint32_t *)self + 5) != 2 )
      {
        if ( ++v2 > 64 )
          glf::Thread::Sleep(nullptr);
      }
    }
  }
  else if ( result != 2 && result != 0 )
  {
    return result;
  }
  result = *((uint32_t *)self + 5);
  _mm_mfence();
  *((uint32_t *)self + 5) = 4;
  if ( result == 2 )
  {
    pthread_mutex_lock((pthread_mutex_t *)((char *)self + 4));
    v3 = *((uint32_t *)self + 3);
    if ( (v3 & 2) != 0 )
      pthread_cond_signal((pthread_cond_t *)((char *)self + 8));
    else
      *((uint32_t *)self + 3) = v3 | 4;
    return pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Task::Start  (binary VA: 0xcc2e10)
// Original: glf::Task::Start
// ----------------------------------------------------------------------------
int glf::Task::Start(glf::task_detail::Self **self)
{
  glf::task_detail::Self *v1;
  glf::TaskCondition::Self *v2;
  glf::TaskCondition::Self *v4;

  v1 = (glf::task_detail::Self *)glf::task_detail::SetGroup(*(self + 8));
  (*((void (**)(glf::task_detail::Self **))*self + 2))(self);
  v2 = (glf::TaskCondition::Self *)(*(self + 8));
  *(self + 8) = nullptr;
  v4 = v2;
  _mm_mfence();
  glf::Task::Done((glf::Task::Self *)self);
  glf::task_detail::SetGroup(v1);
  return (int)(uintptr_t)(glf::task_detail::DropGroup(v4));
}

// ----------------------------------------------------------------------------
// Function: glf::Task::opNew  (binary VA: 0xcc2e90)
// Original: glf::Task::operator new
// ----------------------------------------------------------------------------
int * glf::Task::opNew(glf::Task::Self *self)
{
  return glf::allocateEphemeralAllocation(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Task::opDelete  (binary VA: 0xcc2ec0)
// Original: glf::Task::operator delete
// ----------------------------------------------------------------------------
void glf::Task::opDelete(glf::Self *a1)
{
  glf::freeEphemeralAllocation(a1);
}

// ----------------------------------------------------------------------------
// Function: glf::Task::Destroy_eacc2ef0  (binary VA: 0xcc2ef0)
// Original: glf::Task::~Task
// ----------------------------------------------------------------------------
void glf::Task::Destroy_eacc2ef0(glf::Task::Self *self)
{
  glf::Task::Destroy(self);
  glf::Task::opDelete((glf::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::Task::CheckSize  (binary VA: 0xcc2f30)
// Original: glf::Task::CheckSize
// ----------------------------------------------------------------------------
bool glf::Task::CheckSize(glf::Task::Self *self)
{
  if ( self != (glf::Task::Self *)&dword_24 )
    dword_0 = 0;
  return self == (glf::Task::Self *)&dword_24;
}


