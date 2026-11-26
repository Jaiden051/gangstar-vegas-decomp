#include "Core/Utils/DecompTypes.h"
#include "glf_Condition.h"

// ----------------------------------------------------------------------------
// Function: glf::Condition::Construct  (binary VA: 0xcc94c0)
// Original: glf::Condition::Condition
// ----------------------------------------------------------------------------
glf::Condition::Self * glf::Condition::Construct(glf::Condition::Self *self, glf::Mutex::Self *a2)
{
  char *v2;

  v2 = (char *)sub_4EBD10(8u, 1);
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(a2);
  pthread_cond_init((pthread_cond_t *)(v2 + 4), nullptr);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Condition::Destroy  (binary VA: 0xcc9520)
// Original: glf::Condition::~Condition
// ----------------------------------------------------------------------------
void glf::Condition::Destroy(glf::Condition::Self *self)
{
  int v1;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    pthread_cond_destroy((pthread_cond_t *)(v1 + 4));
    opDelete((void *)v1);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Condition::Signal  (binary VA: 0xcc9570)
// Original: glf::Condition::Signal
// ----------------------------------------------------------------------------
bool glf::Condition::Signal(glf::Condition::Self *self)
{
  return pthread_cond_signal((pthread_cond_t *)(*(uint32_t *)self + 4)) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Condition::Broadcast  (binary VA: 0xcc95a0)
// Original: glf::Condition::Broadcast
// ----------------------------------------------------------------------------
bool glf::Condition::Broadcast(glf::Condition::Self *self)
{
  return pthread_cond_broadcast((pthread_cond_t *)(*(uint32_t *)self + 4)) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Condition::Wait  (binary VA: 0xcc95d0)
// Original: glf::Condition::Wait
// ----------------------------------------------------------------------------
bool glf::Condition::Wait(pthread_mutex_t ****self, unsigned int a2)
{
  pthread_mutex_t ***v2;
  pthread_mutex_t **v3;
  pthread_mutex_t *mutex;
  int v5;
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

  v2 = *self;
  v3 = **self;
  mutex = *v3;
  if ( a2 != 0 )
  {
    gettimeofday(&tv, nullptr);
    abstime.tv_sec = a2 / 0x3E8 + tv.tv_sec;
    abstime.tv_nsec = 1000 * tv.tv_usec + 1000000 * (a2 % 0x3E8);
    v5 = pthread_cond_timedwait((pthread_cond_t *)(v2 + 1), mutex, &abstime);
  }
  else
  {
    v5 = pthread_cond_wait((pthread_cond_t *)(v2 + 1), *v3);
  }
  return v5 == 0;
}


