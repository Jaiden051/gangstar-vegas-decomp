#include "Core/Utils/DecompTypes.h"
#include "glf_DebuggerMutex.h"

// ----------------------------------------------------------------------------
// Function: glf::DebuggerMutex::Construct  (binary VA: 0xc7fbb0)
// Original: glf::DebuggerMutex::DebuggerMutex
// ----------------------------------------------------------------------------
int glf::DebuggerMutex::Construct(pthread_mutex_t *mutex, int a2)
{
  int result;
  typedef pthread_mutexattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_attr)) > _g4_s0 ? (12u + sizeof(_g4_t_attr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 12u);

  if ( mutex != nullptr )
  {
    if ( a2 == 1 )
    {
      pthread_mutexattr_init(&attr);
      pthread_mutexattr_settype(&attr, 1);
      pthread_mutex_init(mutex, &attr);
      result = pthread_mutexattr_destroy(&attr);
    }
    else
    {
      result = pthread_mutex_init(mutex, nullptr);
    }
  }
  G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3)))) = (int)(uintptr_t)(mutex);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebuggerMutex::Destroy  (binary VA: 0xc7fc40)
// Original: glf::DebuggerMutex::~DebuggerMutex
// ----------------------------------------------------------------------------
void glf::DebuggerMutex::Destroy(pthread_mutex_t **self)
{
  pthread_mutex_destroy(*(self + 20));
}

// ----------------------------------------------------------------------------
// Function: glf::DebuggerMutex::Lock  (binary VA: 0xc7fc70)
// Original: glf::DebuggerMutex::Lock
// ----------------------------------------------------------------------------
int glf::DebuggerMutex::Lock(pthread_mutex_t **self)
{
  return pthread_mutex_lock(*(self + 20));
}

// ----------------------------------------------------------------------------
// Function: glf::DebuggerMutex::TryLock  (binary VA: 0xc7fca0)
// Original: glf::DebuggerMutex::TryLock
// ----------------------------------------------------------------------------
bool glf::DebuggerMutex::TryLock(pthread_mutex_t **self)
{
  return pthread_mutex_trylock(*(self + 20)) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::DebuggerMutex::Unlock  (binary VA: 0xc7fcd0)
// Original: glf::DebuggerMutex::Unlock
// ----------------------------------------------------------------------------
int glf::DebuggerMutex::Unlock(pthread_mutex_t **self)
{
  return pthread_mutex_unlock(*(self + 20));
}


