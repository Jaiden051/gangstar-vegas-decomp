#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Mutex.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Mutex::Destroy  (binary VA: 0x13e5af0)
// Original: glwebtools::Mutex::~Mutex
// ----------------------------------------------------------------------------
void glwebtools::Mutex::Destroy(glwebtools::Mutex::Self *self)
{
  pthread_mutex_t **v1;

  v1 = *((pthread_mutex_t ***)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CD0);
  if ( v1 != nullptr )
  {
    glf::Mutex::Destroy(v1);
    sub_4EBEE0((int)(uintptr_t)(v1));
    *((uint32_t *)self + 1) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Mutex::Destroy_ea13e5b60  (binary VA: 0x13e5b60)
// Original: glwebtools::Mutex::~Mutex
// ----------------------------------------------------------------------------
void glwebtools::Mutex::Destroy_ea13e5b60(glwebtools::Mutex::Self *self)
{
  glwebtools::Mutex::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Mutex::Construct  (binary VA: 0x13e5ba0)
// Original: glwebtools::Mutex::Mutex
// ----------------------------------------------------------------------------
pthread_mutex_t ** glwebtools::Mutex::Construct(glwebtools::Mutex::Self *self)
{
  pthread_mutex_t **v1;
  pthread_mutex_t **result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CD0);
  v1 = (pthread_mutex_t **)sub_4EBE70(4u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  result = glf::Mutex::Construct(v1, 0);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Mutex::Lock  (binary VA: 0x13e5c20)
// Original: glwebtools::Mutex::Lock
// ----------------------------------------------------------------------------
int glwebtools::Mutex::Lock(glwebtools::Mutex::Self *self)
{
  int result;

  result = *((uint32_t *)self + 1);
  if ( result != 0 )
    return glf::Mutex::Lock(*((pthread_mutex_t ***)self + 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Mutex::Unlock  (binary VA: 0x13e5c50)
// Original: glwebtools::Mutex::Unlock
// ----------------------------------------------------------------------------
int glwebtools::Mutex::Unlock(glwebtools::Mutex::Self *self)
{
  int result;

  result = *((uint32_t *)self + 1);
  if ( result != 0 )
    return glf::Mutex::Unlock(*((pthread_mutex_t ***)self + 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Mutex::TryLock  (binary VA: 0x13e5c80)
// Original: glwebtools::Mutex::TryLock
// ----------------------------------------------------------------------------
bool glwebtools::Mutex::TryLock(pthread_mutex_t ***self)
{
  bool result;

  result = true;
  if ( *(self + 1) != nullptr )
    return glf::Mutex::TryLock(*(self + 1));
  return result;
}


