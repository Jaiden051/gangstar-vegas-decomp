#include "Core/Utils/DecompTypes.h"
#include "vox_VoxThread.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::Construct  (binary VA: 0x1016b20)
// Original: vox::VoxThread::VoxThread
// ----------------------------------------------------------------------------
vox::VoxThread::Self * vox::VoxThread::Construct(vox::VoxThread::Self *self, void (*a2)(void *, void *), void *a3, void *a4, char *src)
{
  vox::VoxThread::Self *result;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a4);
  vox::Mutex::Construct((vox::VoxThread::Self *)((char *)self + 12));
  result = *(vox::VoxThread::Self **)self;
  *((uint8_t *)self + 16) = 1;
  *((uint8_t *)self + 17) = 1;
  *((uint8_t *)self + 18) = 0;
  *(uint64_t *)((char *)self + 20) = 0;
  if ( result != nullptr
    && (result = (vox::VoxThread::Self *)VoxAllocInternal(
                                     4u,
                                     0,
                                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_thread_pthread.cpp"),
                                     (int)(uintptr_t)("VoxThread"),
                                     65),
        *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(result),
        result != nullptr) )
  {
    if ( src != nullptr )
    {
      strncpy((char *)self + 28, src, 0x3Fu);
      *((uint8_t *)self + 91) = 0;
    }
    else
    {
      strcpy((char *)self + 28, "VoxThread");
    }
    return (vox::VoxThread::Self *)pthread_create(
                               *((pthread_t **)self + 23),
                               nullptr,
                               (void *(*)(void *))vox::VoxRunnable::Run,
                               self);
  }
  else
  {
    *((uint8_t *)self + 17) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::IsTerminated  (binary VA: 0x1016c30)
// Original: vox::VoxThread::IsTerminated
// ----------------------------------------------------------------------------
int vox::VoxThread::IsTerminated(vox::VoxThread::Self *self)
{
  return *((uint8_t *)self + 18);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::StopAsync  (binary VA: 0x1016c40)
// Original: vox::VoxThread::StopAsync
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxThread::StopAsync(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 3);
  *((uint8_t *)self + 16) = 0;
  *((uint8_t *)self + 17) = 0;
  return vox::Mutex::Unlock(self + 3);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::Stop  (binary VA: 0x1016c90)
// Original: vox::VoxThread::Stop
// ----------------------------------------------------------------------------
int vox::VoxThread::Stop(vox::VoxThread::Self *self)
{
  int result;

  vox::Mutex::Lock((pthread_mutex_t **)self + 3);
  *((uint8_t *)self + 16) = 0;
  *((uint8_t *)self + 17) = 0;
  vox::Mutex::Unlock((pthread_mutex_t **)self + 3);
  pthread_join(**((uint32_t **)self + 23), nullptr);
  result = *((uint32_t *)self + 23);
  if ( result != 0 )
    return VoxFreeInternal(*((void **)self + 23));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::Destroy  (binary VA: 0x1016d00)
// Original: vox::VoxThread::~VoxThread
// ----------------------------------------------------------------------------
void vox::VoxThread::Destroy(pthread_mutex_t **self)
{
  vox::VoxThread::Stop((vox::VoxThread::Self *)self);
  vox::Mutex::Destroy(self + 3);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::Sleep  (binary VA: 0x1016d40)
// Original: vox::VoxThread::Sleep
// ----------------------------------------------------------------------------
int vox::VoxThread::Sleep(vox::VoxThread::Self *self)
{
  return usleep(1000 * (uint32_t)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::GetCurThreadId  (binary VA: 0x1016d70)
// Original: vox::VoxThread::GetCurThreadId
// ----------------------------------------------------------------------------
pthread_t vox::VoxThread::GetCurThreadId()
{
  return pthread_self();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxThread::Update  (binary VA: 0x1016d90)
// Original: vox::VoxThread::_Update
// ----------------------------------------------------------------------------
void vox::VoxThread::Update(vox::VoxThread::Self *self)
{
  pthread_mutex_t **v1;
  char v2; // di
  long double Time; // fst7
  double v4; // xmm1_8
  double v5; // xmm2_8
  double v6; // xmm2_8
  double v7; // xmm0_8
  vox::VoxThread::Self *v8;
  double v9;
  char v10;
  char v11;

  v1 = (pthread_mutex_t **)((char *)self + 12);
  vox::Mutex::Lock((pthread_mutex_t **)self + 3);
  v2 = *((uint8_t *)self + 16);
  v10 = *((uint8_t *)self + 17);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 3);
  vox::VoxThread::GetCurThreadId();
  sub_BA0680();
  if ( v10 != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        Time = GetTime();
        v4 = Time;
        if ( v2 != 0 )
        {
          (*(void (**)(uint32_t, uint32_t))self)(*((uint32_t *)self + 1), *((uint32_t *)self + 2));
          v4 = Time;
        }
        v9 = GetTime();
        v5 = v4 - *(double *)((char *)self + 20);
        *(double *)((char *)self + 20) = v4;
        v6 = v5 * 1000.0;
        v7 = (v9 - v4) * 1000.0;
        v8 = (vox::VoxThread::Self *)((char *)&dword_0 + 1);
        if ( 66 - (int)v6 - (int)v7 > 0 )
        {
          LOBYTE(v8) = 33;
          if ( 66 - (int)v6 - (int)v7 <= 33 )
            v8 = (vox::VoxThread::Self *)(66 - (int)v6 - (int)v7);
        }
        vox::VoxThread::Sleep(v8);
        vox::Mutex::Lock(v1);
        v2 = *((uint8_t *)self + 16);
        if ( v2 == 0 )
          break;
        v11 = *((uint8_t *)self + 17);
        vox::Mutex::Unlock(v1);
        if ( v11 == 0 )
          return;
      }
      if ( *((uint8_t *)self + 17) == 0 )
        break;
      vox::Mutex::Unlock(v1);
    }
    *((uint8_t *)self + 18) = 1;
    vox::Mutex::Unlock(v1);
  }
}


