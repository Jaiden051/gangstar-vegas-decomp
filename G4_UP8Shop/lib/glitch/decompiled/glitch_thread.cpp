#include "Core/Utils/DecompTypes.h"
#include "glitch_thread.h"

// ----------------------------------------------------------------------------
// Function: glitch::thread::this_thread::uninit  (binary VA: 0xcd0b80)
// Original: glitch::thread::this_thread::uninit
// ----------------------------------------------------------------------------
void glitch::thread::this_thread::uninit()
{
  glitch::core::CProcessBufferHeap::Self **Value;
  glitch::core::CProcessBufferHeap::Self *v1;
  glitch::core::CProcessBufferHeap::Self **v2;

  Value = (glitch::core::CProcessBufferHeap::Self **)glf::TlsNode::GetValue(
                                                 (glf::TlsNode::Self *)&glitch::thread::this_thread::Tls,
                                                 true);
  v1 = *Value;
  v2 = Value;
  if ( *Value != nullptr )
  {
    glitch::core::CProcessBufferHeap::Destroy(*Value);
    opDelete(v1);
    *v2 = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::this_thread::init  (binary VA: 0xcd0be0)
// Original: glitch::thread::this_thread::init
// ----------------------------------------------------------------------------
glitch::core::CProcessBufferHeap::Self ** glitch::thread::this_thread::init()
{
  glitch::core::CProcessBufferHeap::Self **result;
  glitch::core::CProcessBufferHeap::Self **v1;
  glitch::core::CProcessBufferHeap::Self *v2;
  uint64_t v3; // rax
  glitch::core::CProcessBufferHeap::Self *v4;
  glitch::os::Timer::Self *v5;

  result = (glitch::core::CProcessBufferHeap::Self **)glf::TlsNode::GetValue(
                                                  (glf::TlsNode::Self *)&glitch::thread::this_thread::Tls,
                                                  true);
  v1 = result;
  if ( *result == nullptr )
  {
    v2 = (glitch::core::CProcessBufferHeap::Self *)opNew(0x14u);
    glitch::core::CProcessBufferHeap::Construct(v2, 0);
    *v1 = v2;
    v3 = (uint64_t)(unsigned int)glitch::os::Timer::getMicroSeconds(v5) << 16;
    v4 = (glitch::core::CProcessBufferHeap::Self *)(v3 | 0x330E);
    v1[1] = v4;
    v1[2] = (glitch::core::CProcessBufferHeap::Self *)WORD2(v3);
    return (glitch::core::CProcessBufferHeap::Self **)WORD2(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::CCondition::Construct  (binary VA: 0xcd4d30)
// Original: glitch::thread::CCondition::CCondition
// ----------------------------------------------------------------------------
int glitch::thread::CCondition::Construct(glitch::thread::CCondition::Self *self, glitch::thread::CMutex::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  return pthread_cond_init((pthread_cond_t *)((char *)self + 4), nullptr);
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::CCondition::Destroy  (binary VA: 0xcd4d70)
// Original: glitch::thread::CCondition::~CCondition
// ----------------------------------------------------------------------------
void glitch::thread::CCondition::Destroy(glitch::thread::CCondition::Self *self)
{
  pthread_cond_destroy((pthread_cond_t *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::CCondition::signal  (binary VA: 0xcd4da0)
// Original: glitch::thread::CCondition::signal
// ----------------------------------------------------------------------------
bool glitch::thread::CCondition::signal(glitch::thread::CCondition::Self *self)
{
  return pthread_cond_signal((pthread_cond_t *)((char *)self + 4)) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::CCondition::broadcast  (binary VA: 0xcd4dd0)
// Original: glitch::thread::CCondition::broadcast
// ----------------------------------------------------------------------------
bool glitch::thread::CCondition::broadcast(glitch::thread::CCondition::Self *self)
{
  return pthread_cond_broadcast((pthread_cond_t *)((char *)self + 4)) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::CCondition::wait  (binary VA: 0xcd4e00)
// Original: glitch::thread::CCondition::wait
// ----------------------------------------------------------------------------
bool glitch::thread::CCondition::wait(glitch::thread::CCondition::Self *self, unsigned int a2)
{
  pthread_mutex_t *mutex;
  typedef struct timeval _g4_t_tv;
  typedef struct timespec _g4_t_abstime;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_tv)) > _g4_s0 ? (0u + sizeof(_g4_t_tv)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_abstime)) > _g4_s1 ? (8u + sizeof(_g4_t_abstime)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 0u);
  _g4_t_abstime &abstime = *reinterpret_cast<_g4_t_abstime *>(_g4_sf + 8u);

  if ( a2 == 0 )
    return pthread_cond_wait((pthread_cond_t *)((char *)self + 4), (pthread_mutex_t *)(*(uint32_t *)self + 4)) == 0;
  gettimeofday(&tv, nullptr);
  abstime.tv_sec = a2 / 0x3E8 + tv.tv_sec;
  mutex = (pthread_mutex_t *)(*(uint32_t *)self + 4);
  abstime.tv_nsec = tv.tv_usec + 1000 * (a2 % 0x3E8);
  return pthread_cond_timedwait((pthread_cond_t *)((char *)self + 4), mutex, &abstime) == 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::thread::CMutex::Destroy  (binary VA: 0xcef5c0)
// Original: glitch::thread::CMutex::~CMutex
// ----------------------------------------------------------------------------
void glitch::thread::CMutex::Destroy(pthread_mutexattr_t *attr)
{
  pthread_mutex_destroy((pthread_mutex_t *)&attr[1]);
  if ( (*(long *)&(attr[2])) == 1 )
    pthread_mutexattr_destroy(attr);
}


