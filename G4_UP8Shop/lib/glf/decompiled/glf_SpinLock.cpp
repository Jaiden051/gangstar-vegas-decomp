#include "Core/Utils/DecompTypes.h"
#include "glf_SpinLock.h"

// ----------------------------------------------------------------------------
// Function: glf::SpinLock::Construct  (binary VA: 0xc800f0)
// Original: glf::SpinLock::SpinLock
// ----------------------------------------------------------------------------
glf::SpinLock::Self * glf::SpinLock::Construct(glf::SpinLock::Self *self)
{
  glf::SpinLock::Self *result;

  result = (glf::SpinLock::Self *)sub_4EBD10(4u, 1);
  *(uint32_t *)result = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::SpinLock::Destroy  (binary VA: 0xc80130)
// Original: glf::SpinLock::~SpinLock
// ----------------------------------------------------------------------------
void glf::SpinLock::Destroy(void **self)
{
  if ( *self != nullptr )
    opDelete(*self);
}

// ----------------------------------------------------------------------------
// Function: glf::SpinLock::Lock  (binary VA: 0xc80160)
// Original: glf::SpinLock::Lock
// ----------------------------------------------------------------------------
int32_t glf::SpinLock::Lock(volatile int32_t **self)
{
  volatile int32_t *v1;
  int32_t result;
  glf::Thread::Self *v3;

  v1 = *self;
  while ( 1 )
  {
    result = __sync_val_compare_and_swap(v1, 0, 1);
    if ( result == 0 )
      break;
    glf::Thread::Yield(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::SpinLock::TryLock  (binary VA: 0xc80190)
// Original: glf::SpinLock::TryLock
// ----------------------------------------------------------------------------
bool glf::SpinLock::TryLock(volatile int32_t **self)
{
  return __sync_val_compare_and_swap(*self, 0, 1) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::SpinLock::Unlock  (binary VA: 0xc801b0)
// Original: glf::SpinLock::Unlock
// ----------------------------------------------------------------------------
uint32_t * glf::SpinLock::Unlock(glf::SpinLock::Self *self)
{
  uint32_t *result;

  result = *(uint32_t **)self;
  **(uint32_t **)self = 0;
  return result;
}


