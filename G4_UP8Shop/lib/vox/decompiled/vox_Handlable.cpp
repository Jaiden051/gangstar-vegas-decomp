#include "Core/Utils/DecompTypes.h"
#include "vox_Handlable.h"

// ----------------------------------------------------------------------------
// Function: vox::Handlable::Release  (binary VA: 0x1021130)
// Original: vox::Handlable::Release
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::Handlable::Release(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 3));
  if ( v1 > 0 )
    *(self + 3) = (pthread_mutex_t *)(v1 - 1);
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::Handlable::Retain  (binary VA: 0x1021180)
// Original: vox::Handlable::Retain
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::Handlable::Retain(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 5);
  *(self + 3) = (pthread_mutex_t *)((char *)*(self + 3) + 1);
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::Handlable::Destroy  (binary VA: 0x1037f70)
// Original: vox::Handlable::~Handlable
// ----------------------------------------------------------------------------
void vox::Handlable::Destroy(pthread_mutex_t **self)
{
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208D8C8);
  vox::Mutex::Destroy(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::Handlable::Destroy_ea1038000  (binary VA: 0x1038000)
// Original: vox::Handlable::~Handlable
// ----------------------------------------------------------------------------
void vox::Handlable::Destroy_ea1038000(pthread_mutex_t **self)
{
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208D8C8);
  vox::Mutex::Destroy(self + 5);
  opDelete(self);
}


