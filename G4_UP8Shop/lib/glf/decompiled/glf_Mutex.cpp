#include "Core/Utils/DecompTypes.h"
#include "glf_Mutex.h"

// ----------------------------------------------------------------------------
// Function: glf::Mutex::Construct  (binary VA: 0xc7fa40)
// Original: glf::Mutex::Mutex
// ----------------------------------------------------------------------------
pthread_mutex_t ** glf::Mutex::Construct(pthread_mutex_t **a1, int a2)
{
  pthread_mutex_t *mutex;
  pthread_mutex_t *v3;
  typedef pthread_mutexattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_attr)) > _g4_s0 ? (12u + sizeof(_g4_t_attr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 12u);

  mutex = (pthread_mutex_t *)sub_4EBD10(4u, 1);
  v3 = mutex;
  if ( a2 == 1 )
  {
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_settype(&attr, 1);
    pthread_mutex_init(v3, &attr);
    pthread_mutexattr_destroy(&attr);
  }
  else
  {
    pthread_mutex_init(mutex, nullptr);
  }
  *a1 = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::Mutex::Destroy  (binary VA: 0xc7fae0)
// Original: glf::Mutex::~Mutex
// ----------------------------------------------------------------------------
void glf::Mutex::Destroy(pthread_mutex_t **self)
{
  pthread_mutex_t *v1;

  v1 = *self;
  if ( *self != nullptr )
  {
    pthread_mutex_destroy(*self);
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Mutex::Lock  (binary VA: 0xc7fb20)
// Original: glf::Mutex::Lock
// ----------------------------------------------------------------------------
int glf::Mutex::Lock(pthread_mutex_t **self)
{
  return pthread_mutex_lock(*self);
}

// ----------------------------------------------------------------------------
// Function: glf::Mutex::TryLock  (binary VA: 0xc7fb50)
// Original: glf::Mutex::TryLock
// ----------------------------------------------------------------------------
bool glf::Mutex::TryLock(pthread_mutex_t **self)
{
  return pthread_mutex_trylock(*self) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Mutex::Unlock  (binary VA: 0xc7fb80)
// Original: glf::Mutex::Unlock
// ----------------------------------------------------------------------------
int glf::Mutex::Unlock(pthread_mutex_t **self)
{
  return pthread_mutex_unlock(*self);
}


