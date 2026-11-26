#include "Core/Utils/DecompTypes.h"
#include "vox_AccessController.h"

// ----------------------------------------------------------------------------
// Function: vox::AccessController::GetReadAccess  (binary VA: 0x10575b0)
// Original: vox::AccessController::GetReadAccess
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::AccessController::GetReadAccess(vox::AccessController::Self *self)
{
  pthread_mutex_t **v1;

  v1 = (pthread_mutex_t **)((char *)self + 8);
  while ( 1 )
  {
    vox::Mutex::Lock(v1);
    if ( *((uint32_t *)self + 1) == 0 )
      break;
    vox::Mutex::Unlock(v1);
    vox::VoxThread::Sleep((vox::VoxThread::Self *)((char *)&dword_0 + 1));
  }
  ++*(uint32_t *)self;
  return vox::Mutex::Unlock(v1);
}

// ----------------------------------------------------------------------------
// Function: vox::AccessController::ReleaseReadAccess  (binary VA: 0x1057610)
// Original: vox::AccessController::ReleaseReadAccess
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::AccessController::ReleaseReadAccess(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 2);
  *self = (pthread_mutex_t *)((char *)*self - 1);
  return vox::Mutex::Unlock(self + 2);
}

// ----------------------------------------------------------------------------
// Function: vox::AccessController::GetWriteAccess  (binary VA: 0x1057660)
// Original: vox::AccessController::GetWriteAccess
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::AccessController::GetWriteAccess(pthread_mutex_t **self)
{
  pthread_mutex_t **v1;

  v1 = self + 2;
  vox::Mutex::Lock(self + 2);
  if ( *(self + 1) != nullptr || *self != nullptr )
  {
    do
    {
      do
      {
        vox::Mutex::Unlock(v1);
        vox::VoxThread::Sleep((vox::VoxThread::Self *)((char *)&dword_0 + 1));
        vox::Mutex::Lock(v1);
      }
      while ( *(self + 1) != nullptr );
    }
    while ( *self != nullptr );
  }
  *(self + 1) = (pthread_mutex_t *)(&dword_0 + 1);
  return vox::Mutex::Unlock(v1);
}

// ----------------------------------------------------------------------------
// Function: vox::AccessController::ReleaseWriteAccess  (binary VA: 0x10576d0)
// Original: vox::AccessController::ReleaseWriteAccess
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::AccessController::ReleaseWriteAccess(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 2);
  *(self + 1) = (pthread_mutex_t *)((char *)*(self + 1) - 1);
  return vox::Mutex::Unlock(self + 2);
}


