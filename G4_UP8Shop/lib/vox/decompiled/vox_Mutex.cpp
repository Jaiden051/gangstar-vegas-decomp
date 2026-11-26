#include "Core/Utils/DecompTypes.h"
#include "vox_Mutex.h"

// ----------------------------------------------------------------------------
// Function: vox::Mutex::Construct  (binary VA: 0x10169b0)
// Original: vox::Mutex::Mutex
// ----------------------------------------------------------------------------
vox::Mutex::Self * vox::Mutex::Construct(vox::Mutex::Self *self)
{
  pthread_mutex_t *mutex;

  mutex = (pthread_mutex_t *)VoxAllocInternal(
                               4u,
                               0,
                               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mutex_pthread.cpp"),
                               (int)(uintptr_t)("Mutex"),
                               29);
  ((int32_t *)(mutex))[0] = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(mutex);
  return (vox::Mutex::Self *)pthread_mutex_init(mutex, nullptr);
}

// ----------------------------------------------------------------------------
// Function: vox::Mutex::Destroy  (binary VA: 0x1016a20)
// Original: vox::Mutex::~Mutex
// ----------------------------------------------------------------------------
void vox::Mutex::Destroy(pthread_mutex_t **self)
{
  if ( *self != nullptr )
  {
    pthread_mutex_destroy(*self);
    if ( *self != nullptr )
      VoxFreeInternal(*self);
    *self = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::Mutex::Construct  (binary VA: 0x1016a70)
// Original: vox::Mutex::Mutex
// ----------------------------------------------------------------------------
vox::Mutex::Self * vox::Mutex::Construct(vox::Mutex::Self *self, const vox::Mutex::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::Mutex::Lock  (binary VA: 0x1016a80)
// Original: vox::Mutex::Lock
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::Mutex::Lock(pthread_mutex_t **self)
{
  pthread_mutex_t *result;

  result = *self;
  if ( *self != nullptr )
    return (pthread_mutex_t *)pthread_mutex_lock(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Mutex::Unlock  (binary VA: 0x1016ab0)
// Original: vox::Mutex::Unlock
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::Mutex::Unlock(pthread_mutex_t **self)
{
  pthread_mutex_t *result;

  result = *self;
  if ( *self != nullptr )
    return (pthread_mutex_t *)pthread_mutex_unlock(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Mutex::TryLock  (binary VA: 0x1016ae0)
// Original: vox::Mutex::TryLock
// ----------------------------------------------------------------------------
bool vox::Mutex::TryLock(pthread_mutex_t **self)
{
  bool result;

  result = true;
  if ( *self != nullptr )
    return pthread_mutex_trylock(*self) == 0;
  return result;
}


