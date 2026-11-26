#include "Core/Utils/DecompTypes.h"
#include "glf_ReadASyncThread.h"

// ----------------------------------------------------------------------------
// Function: glf::ReadASyncThread::Run  (binary VA: 0xcb91d0)
// Original: glf::ReadASyncThread::Run
// ----------------------------------------------------------------------------
void glf::ReadASyncThread::Run()
{
  void (*v0)(int, uint32_t, uint32_t);
  uint32_t *v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = nullptr;
      glf::Mutex::Lock((pthread_mutex_t **)&glf::gDequeMutex);
      if ( (uint32_t *)(*(uint8_t **)unk_20DF5F8) != (uint32_t *)(intptr_t)(dword_20DF5E8) )
        v1 = (uint32_t *)*(uintptr_t *)(dword_20DF5E8);
      glf::Mutex::Unlock((pthread_mutex_t **)&glf::gDequeMutex);
      if ( v1 != nullptr )
        break;
      glf::Mutex::Lock(&glf::gThreadMutex);
      glf::Condition::Wait((glf::Condition::Self *)&glf::gThreadCondition, 0x3E8u);
      glf::Mutex::Unlock(&glf::gThreadMutex);
    }
    v2 = v1[3];
    if ( glf::gEnableProfilerScopes[0] != 0 )
      glf::BeginProfilerEvent((glf::Self *)"read");
    v3 = v1[5];
    v7 = 0;
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= v3 )
      {
LABEL_2:
        if ( glf::gEnableProfilerScopes[0] != 0 )
          goto LABEL_24;
        goto LABEL_3;
      }
      v5 = v3 - v4;
      if ( v5 > 0x4000 )
        v5 = 0x4000;
      v6 = G4_VCALL<int>(*v1, 16, v2, v5, v4 + v1[4]);
      if ( v6 == 0 )
        break;
      v7 += v6;
      v2 += v6;
      v4 += v6;
      if ( v4 >= v1[5] )
        goto LABEL_2;
      glf::Thread::Yield();
      v3 = v1[5];
    }
    v7 = -1;
    if ( glf::gEnableProfilerScopes[0] != 0 )
LABEL_24:
      glf::EndProfilerEvent();
LABEL_3:
    v0 = (void (*)(int, uint32_t, uint32_t))v1[2];
    if ( v0 != nullptr )
    {
      if ( glf::gEnableProfilerScopes[0] != 0 )
      {
        glf::BeginProfilerEvent((glf::Self *)"callback");
        ((void (*)(int, uint32_t, uint32_t))v1[2])(v7, *v1, v1[6]);
      }
      else
      {
        v0(v7, *v1, v1[6]);
      }
      if ( glf::gEnableProfilerScopes[0] != 0 )
        glf::EndProfilerEvent();
    }
    __sync_sub_and_fetch((volatile int32_t *)(*v1 + 40), 1u);
    glf::Mutex::Lock((pthread_mutex_t **)&glf::gDequeMutex);
    if ( (uint8_t *)(uintptr_t)(dword_20DF5E8) == ((*(uint8_t **)unk_20DF5F0) - 4) )
    {
      opDelete(dword_20DF5EC);
      dword_20DF5EC = (uint32_t)(uintptr_t)((void *)*(uintptr_t *)(dword_20DF5F4 += 4));
      dword_20DF5E8 = dword_20DF5EC;
      *(uintptr_t *)(unk_20DF5F0) = (uintptr_t)((char *)dword_20DF5EC + 512);
    }
    else
    {
      dword_20DF5E8 += 4;
    }
    glf::Mutex::Unlock((pthread_mutex_t **)&glf::gDequeMutex);
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::ReadASyncThread::Destroy  (binary VA: 0xcb94d0)
// Original: glf::ReadASyncThread::~ReadASyncThread
// ----------------------------------------------------------------------------
void glf::ReadASyncThread::Destroy(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_2068D68);
  glf::Thread::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::ReadASyncThread::Destroy_eacb9500  (binary VA: 0xcb9500)
// Original: glf::ReadASyncThread::~ReadASyncThread
// ----------------------------------------------------------------------------
void glf::ReadASyncThread::Destroy_eacb9500(pthread_t *self)
{
  *self = (pthread_t)((uint32_t)(uintptr_t)&off_2068D68);
  glf::Thread::Destroy(self);
  opDelete(self);
}


