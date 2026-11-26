#include "Core/Utils/DecompTypes.h"
#include "glf_App.h"

// ----------------------------------------------------------------------------
// Function: glf::App::OnEvent  (binary VA: 0xc6c690)
// Original: glf::App::OnEvent
// ----------------------------------------------------------------------------
int glf::App::OnEvent()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetCreationSettings  (binary VA: 0xc6c6a0)
// Original: glf::App::SetCreationSettings
// ----------------------------------------------------------------------------
void glf::App::SetCreationSettings(int a1, const void *a2)
{
  std::memcpy((void *)(a1 + 108), a2, 660);
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetPlatformInfos  (binary VA: 0xc6c6d0)
// Original: glf::App::SetPlatformInfos
// ----------------------------------------------------------------------------
uint32_t * glf::App::SetPlatformInfos(uint32_t *a1, uint32_t *a2)
{
  a1[13] = *a2;
  a1[14] = a2[1];
  a1[15] = a2[2];
  a1[16] = a2[3];
  a1[17] = a2[4];
  a1[18] = a2[5];
  a1[19] = a2[6];
  a1[20] = a2[7];
  a1[21] = a2[8];
  a1[22] = a2[9];
  a1[23] = a2[10];
  a1[24] = a2[11];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::RunWithResult  (binary VA: 0xc6c720)
// Original: glf::App::RunWithResult
// ----------------------------------------------------------------------------
int glf::App::RunWithResult(glf::App::Self *self)
{
  G4_VCALL<void>(self, 28);
  return *((uint32_t *)self + 194);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Run  (binary VA: 0xc6c740)
// Original: glf::App::Run
// ----------------------------------------------------------------------------
int glf::App::Run(glf::App::Self *self)
{
  int result;

  *((uint8_t *)self + 5) = 1;
  do
    result = G4_VCALL<int>(self, 40);
  while ( *((uint8_t *)self + 5) != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::App::BeginProfilerEvent  (binary VA: 0xc6c770)
// Original: glf::App::BeginProfilerEvent
// ----------------------------------------------------------------------------
void glf::App::BeginProfilerEvent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::App::EndProfilerEvent  (binary VA: 0xc6c780)
// Original: glf::App::EndProfilerEvent
// ----------------------------------------------------------------------------
void glf::App::EndProfilerEvent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Destroy  (binary VA: 0xc6c790)
// Original: glf::App::Destroy
// ----------------------------------------------------------------------------
glf::App::Self * glf::App::Destroy(glf::App::Self *self)
{
  glf::App::Self *result;

  result = self;
  if ( self != nullptr )
    return (glf::App::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::App::QueryInfo  (binary VA: 0xc6c7b0)
// Original: glf::App::QueryInfo
// ----------------------------------------------------------------------------
int glf::App::QueryInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Deinit  (binary VA: 0xc6c7c0)
// Original: glf::App::Deinit
// ----------------------------------------------------------------------------
int glf::App::Deinit(glf::App::Self *self)
{
  int v1;
  glf::ThreadMgr::Self *v2;
  glf::ThreadMgr::Self *v4;
  int v5;

  v1 = *((uint32_t *)self + 195);
  glf::Thread::RemoveStartExitHandlers(*(glf::Thread::Self **)(v1 + 120), v5);
  *(uint32_t *)(v1 + 120) = -1;
  v2 = (glf::ThreadMgr::Self *)glf::ThreadMgr::Get(v4);
  return glf::ThreadMgr::DeInit(v2);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Destroy  (binary VA: 0xc6c810)
// Original: glf::App::~App
// ----------------------------------------------------------------------------
void glf::App::Destroy(glf::EventManager::Self **self)
{
  int v1;
  glf::EventManager::Self *v2;

  *self = (glf::EventManager::Self *)((uint32_t)(uintptr_t)&off_206D3E8);
  glf::EventManager::RemoveEventReceiver(*(self + 2), *(self + 3));
  glf::EventManager::RemoveEventReceiver(*(self + 2), (glf::EventReceiver::Self *)self);
  glf::App::Deinit((glf::App::Self *)self);
  v1 = (int)(uintptr_t)(*(self + 193));
  if ( v1 != 0 )
  {
    v2 = *(self + 193);
    (*(void (**)(void *))(*(uint32_t *)v1 + 4))((void *)(uintptr_t)v1);
  }
  glf::ThreadMgr::Destroy(v2);
  glf::App::mInstance = 0;
  glf::SpinLock::Destroy((glf::SpinLock::Self *)(self + 26));
  *self = (glf::EventManager::Self *)((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Destroy_eac6c8a0  (binary VA: 0xc6c8a0)
// Original: glf::App::~App
// ----------------------------------------------------------------------------
void glf::App::Destroy_eac6c8a0(glf::EventManager::Self **self)
{
  glf::App::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Update  (binary VA: 0xc6d110)
// Original: glf::App::Update
// ----------------------------------------------------------------------------
int glf::App::Update(glf::App::Self *self)
{
  uint32_t *v1;
  glf::FpsTracker::Self *Instance;
  glf::EventManager::Self *EventMgr;
  glf::FpsTracker::Self *v5;
  glf::FileStreamImpl::Self *v6;

  glf::AppEventReceiver::Update((glf::AppEventReceiver::Self *)(*((uint32_t *)self + 195) + 8));
  v1 = *(uint32_t **)(*((uint32_t *)self + 195) + 52);
  if ( v1 != nullptr && v1[60] >= v1[61] && v1[65] == 0 )
  {
    (*(void (**)(uint32_t))(*v1 + 4))(*(uint32_t *)(*((uint32_t *)self + 195) + 52));
    *(uint32_t *)(*((uint32_t *)self + 195) + 52) = 0;
  }
  if ( glf::DebugDisplay::sDebugDisplay[0] != 0 )
    glf::DebugDisplay::reset((glf::DebugDisplay::Self *)glf::DebugDisplay::sDebugDisplay[0]);
  if ( *((uint32_t *)self + 193) != 0 )
    glf::remote::Controller::Update(*((glf::remote::Controller::Self **)self + 193));
  Instance = (glf::FpsTracker::Self *)glf::FpsTracker::GetInstance(v5);
  glf::FpsTracker::Update(Instance);
  glf::InputManager::UpdateFrame(*((glf::InputManager::Self **)self + 3));
  glf::FileStreamImpl::DispatchDoneReads(v6);
  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  return glf::EventManager::DispatchEvents(EventMgr);
}

// ----------------------------------------------------------------------------
// Function: glf::App::IsRunnable  (binary VA: 0xc6d9e0)
// Original: glf::App::IsRunnable
// ----------------------------------------------------------------------------
int glf::App::IsRunnable()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetAsMainThread  (binary VA: 0xc6e010)
// Original: glf::App::SetAsMainThread
// ----------------------------------------------------------------------------
pthread_t glf::App::SetAsMainThread(glf::App::Self *self)
{
  int v1;
  int v2;
  const char *v3;
  int v4;
  pthread_t result;
  glf::Self *v6;
  glf::Thread::Self *v7;

  v1 = -1;
  v2 = *((uint32_t *)self + 195);
  v3 = (const char *)(*(uint32_t *)(*(uint32_t *)(v2 + 4) + 168) + 1);
  glf::Console::Println((glf::Console::Self *)"trying to set context %d", v3);
  if ( v3 != nullptr )
  {
    v1 = 0;
    if ( v3 != (const char *)(*(uint32_t *)(*(uint32_t *)(v2 + 4) + 168) + 1) )
      v1 = (int)(uintptr_t)(v3);
  }
  if ( glf::AndroidSetCurrentContext((glf::Self *)v1) )
  {
    glf::Console::Println((glf::Console::Self *)"success setting context %d (actual: %d)", v3, v1);
    (&dword_20DEC60)[glf::Thread::GetSequentialThreadId(v7)] = v1;
  }
  else
  {
    glf::Console::Println((glf::Console::Self *)"failed setting context %d (actual: %d)", v3, v1);
  }
  v4 = (int)(uintptr_t)(glf::ThreadMgr::Get(v6));
  result = pthread_self();
  *(uint32_t *)(v4 + 16) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::App::MyInit  (binary VA: 0xc6e0e0)
// Original: glf::App::MyInit
// ----------------------------------------------------------------------------
int glf::App::MyInit(glf::App::Self *self)
{
  char v1;
  int v2;
  glf::ThreadMgr::Self *v4;
  unsigned int v5;

  glf::PropertyMap::LoadLastPersistant(glf::PropertyMap::sThis);
  glf::Memset((glf::App::Self *)((char *)self + 96), nullptr, 4u, v5);
  glf::ThreadMgr::Get(v4);
  glf::App::SetAsMainThread(self);
  v1 = (*(int (**)(glf::App::Self *, char *))(*(uint32_t *)self + 20))(self, (char *)self + 108);
  v2 = 0;
  if ( v1 != 0 )
  {
    glf::Thread::OnStart(self);
    return 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::App::UnsetAsMainThread  (binary VA: 0xc6e160)
// Original: glf::App::UnsetAsMainThread
// ----------------------------------------------------------------------------
int glf::App::UnsetAsMainThread()
{
  int result;
  glf::Self *v1;
  glf::Thread::Self *v2;

  glf::Console::Println((glf::Console::Self *)"trying to set context %d", nullptr);
  if ( glf::AndroidSetCurrentContext((glf::Self *)0xFFFFFFFF) )
  {
    glf::Console::Println((glf::Console::Self *)"success setting context %d (actual: %d)", nullptr, -1);
    (&dword_20DEC60)[glf::Thread::GetSequentialThreadId(v2)] = -1;
  }
  else
  {
    glf::Console::Println((glf::Console::Self *)"failed setting context %d (actual: %d)", nullptr, -1);
  }
  result = (int)(uintptr_t)(glf::ThreadMgr::Get(v1));
  *(uint32_t *)(result + 16) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::App::IsRunning  (binary VA: 0xc6e1f0)
// Original: glf::App::IsRunning
// ----------------------------------------------------------------------------
int glf::App::IsRunning(glf::App::Self *self)
{
  return *((uint8_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Stop  (binary VA: 0xc6e200)
// Original: glf::App::Stop
// ----------------------------------------------------------------------------
glf::App::Self * glf::App::Stop(glf::App::Self *self, int a2)
{
  *((uint8_t *)self + 5) = 0;
  *((uint32_t *)self + 194) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetReturnValue  (binary VA: 0xc6e220)
// Original: glf::App::GetReturnValue
// ----------------------------------------------------------------------------
int glf::App::GetReturnValue(glf::App::Self *self)
{
  return *((uint32_t *)self + 194);
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetTargetFps  (binary VA: 0xc6e230)
// Original: glf::App::SetTargetFps
// ----------------------------------------------------------------------------
glf::App::Self * glf::App::SetTargetFps(glf::App::Self *self, float a2)
{
  *((float *)self + 192) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetTargetFps  (binary VA: 0xc6e250)
// Original: glf::App::GetTargetFps
// ----------------------------------------------------------------------------
long double glf::App::GetTargetFps(glf::App::Self *self)
{
  return *((float *)self + 192);
}

// ----------------------------------------------------------------------------
// Function: glf::App::EnableProfilerEvents  (binary VA: 0xc6e260)
// Original: glf::App::EnableProfilerEvents
// ----------------------------------------------------------------------------
uint8_t * glf::App::EnableProfilerEvents(glf::App::Self *self, bool a2)
{
  glf::gEnableProfilerScopes[0] = a2;
  return (uint8_t *)(glf::gEnableProfilerScopes);
}

// ----------------------------------------------------------------------------
// Function: glf::App::IsProfilerEventsEnabled  (binary VA: 0xc6e280)
// Original: glf::App::IsProfilerEventsEnabled
// ----------------------------------------------------------------------------
int glf::App::IsProfilerEventsEnabled()
{
  return glf::gEnableProfilerScopes[0];
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetFrameBufferObject  (binary VA: 0xc6e2a0)
// Original: glf::App::GetFrameBufferObject
// ----------------------------------------------------------------------------
int glf::App::GetFrameBufferObject(glf::App::Self *self, int a2)
{
  return -(a2 != 0);
}

// ----------------------------------------------------------------------------
// Function: glf::App::HasFrameBufferObject  (binary VA: 0xc6e2b0)
// Original: glf::App::HasFrameBufferObject
// ----------------------------------------------------------------------------
bool glf::App::HasFrameBufferObject(glf::App::Self *self, int a2)
{
  return a2 == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Prepare  (binary VA: 0xc6e2c0)
// Original: glf::App::Prepare
// ----------------------------------------------------------------------------
bool glf::App::Prepare(glf::App::Self *self, int a2)
{
  return a2 == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Present  (binary VA: 0xc6e2d0)
// Original: glf::App::Present
// ----------------------------------------------------------------------------
int glf::App::Present(glf::App::Self *self, int a2)
{
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 195) + 12))(*((uint32_t *)self + 195), a2);
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetPlatformInfos  (binary VA: 0xc6e300)
// Original: glf::App::GetPlatformInfos
// ----------------------------------------------------------------------------
char * glf::App::GetPlatformInfos(glf::App::Self *self)
{
  return (char *)self + 52;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetAppSettings  (binary VA: 0xc6e310)
// Original: glf::App::GetAppSettings
// ----------------------------------------------------------------------------
char * glf::App::GetAppSettings(glf::App::Self *self)
{
  return (char *)self + 28;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetCreationSettings  (binary VA: 0xc6e320)
// Original: glf::App::GetCreationSettings
// ----------------------------------------------------------------------------
char * glf::App::GetCreationSettings(glf::App::Self *self)
{
  return (char *)self + 108;
}

// ----------------------------------------------------------------------------
// Function: glf::App::HasContext  (binary VA: 0xc6e330)
// Original: glf::App::HasContext
// ----------------------------------------------------------------------------
int glf::App::HasContext(glf::App::Self *self)
{
  int v1;
  int SequentialThreadId;
  int v3;
  int v5;
  glf::Thread::Self *v6;
  glf::Thread::Self *v7;

  v1 = *((uint32_t *)self + 195);
  SequentialThreadId = glf::Thread::GetSequentialThreadId(v6);
  v3 = 0;
  if ( (&dword_20DEC60)[SequentialThreadId] >= 0 )
  {
    v3 = 1;
    if ( (&dword_20DEC60)[SequentialThreadId] == 0 )
    {
      v5 = glf::Thread::GetSequentialThreadId(v7);
      v3 = 0;
      if ( v5 == 1 )
        LOBYTE(v3) = *(uint32_t *)(*(uint32_t *)(v1 + 4) + 168) != -1;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ReserveContext  (binary VA: 0xc6e3a0)
// Original: glf::App::ReserveContext
// ----------------------------------------------------------------------------
int glf::App::ReserveContext(glf::App::Self *self)
{
  int v1;
  int HasContext;
  int v3;
  int v4;
  glf::Thread::Self *v6;
  int v7;
  char *v8;
  int v9;

  v1 = 0;
  glf::SpinLock::Lock((glf::App::Self *)((char *)self + 104));
  HasContext = glf::App::HasContext(self);
  if ( (uint8_t)HasContext == 0 )
  {
    v3 = *((uint32_t *)self + 25);
    v1 = HasContext;
    if ( v3 < *((uint32_t *)self + 42) )
    {
      v9 = *((uint32_t *)self + 195);
      v8 = *((char **)self + v3 + 24);
      v4 = -1;
      glf::Console::Println((glf::Console::Self *)"trying to set context %d", v8);
      if ( v8 != nullptr )
      {
        v4 = 0;
        if ( v8 != (char *)(*(uint32_t *)(*(uint32_t *)(v9 + 4) + 168) + 1) )
          v4 = (int)(uintptr_t)(v8);
      }
      v7 = v4;
      if ( glf::AndroidSetCurrentContext((glf::Self *)v4) )
      {
        glf::Console::Println((glf::Console::Self *)"success setting context %d (actual: %d)", v8, v4);
        (&dword_20DEC60)[glf::Thread::GetSequentialThreadId(v6)] = v4;
        v1 = 1;
        ++*((uint32_t *)self + 25);
      }
      else
      {
        v1 = 0;
        glf::Console::Println((glf::Console::Self *)"failed setting context %d (actual: %d)", v8, v7);
      }
    }
  }
  glf::SpinLock::Unlock((glf::App::Self *)((char *)self + 104));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ReleaseContext  (binary VA: 0xc6e4b0)
// Original: glf::App::ReleaseContext
// ----------------------------------------------------------------------------
int glf::App::ReleaseContext(glf::App::Self *self)
{
  int v1;
  int v3;
  int v4;
  int v5;
  int v6;
  glf::Thread::Self *v7;
  glf::Self *v8;
  glf::Thread::Self *v9;
  int v10;
  uint8_t v11;

  glf::SpinLock::Lock((glf::App::Self *)((char *)self + 104));
  v10 = *((uint32_t *)self + 195);
  v1 = (&dword_20DEC60)[glf::Thread::GetSequentialThreadId(v7)];
  if ( v1 < 0 )
    goto LABEL_9;
  if ( v1 == 0 )
  {
    if ( glf::Thread::GetSequentialThreadId(v8) != 1 )
      goto LABEL_9;
    v1 = *(uint32_t *)(*(uint32_t *)(v10 + 4) + 168) + 1;
  }
  if ( v1 == 0 )
  {
LABEL_9:
    v11 = 0;
    goto LABEL_7;
  }
  v11 = 0;
  if ( v1 != *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 195) + 4) + 168) + 1 )
  {
    glf::Console::Println((glf::Console::Self *)"trying to set context %d", nullptr);
    if ( glf::AndroidSetCurrentContext((glf::Self *)0xFFFFFFFF) )
    {
      glf::Console::Println((glf::Console::Self *)"success setting context %d (actual: %d)", nullptr, -1);
      (&dword_20DEC60)[glf::Thread::GetSequentialThreadId(v9)] = -1;
      v3 = *((uint32_t *)self + 25);
      v11 = 1;
      if ( v3 > 0 )
      {
        v4 = 0;
        if ( *((uint32_t *)self + 24) == v1 )
        {
LABEL_17:
          v5 = v3 - 1;
          v6 = v3 + 19;
          *((uint32_t *)self + 25) = v5;
          *((uint32_t *)self + v4 + 24) = *((uint32_t *)self + v6 + 4);
          v11 = 1;
          *((uint32_t *)self + v6 + 4) = v1;
        }
        else
        {
          while ( ++v4 != v3 )
          {
            if ( *((uint32_t *)self + v4 + 24) == v1 )
              goto LABEL_17;
          }
          v11 = 1;
        }
      }
    }
    else
    {
      glf::Console::Println((glf::Console::Self *)"failed setting context %d (actual: %d)", nullptr, -1);
    }
  }
LABEL_7:
  glf::SpinLock::Unlock((glf::App::Self *)((char *)self + 104));
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glf::App::IsUsingMultithreadedDriver  (binary VA: 0xc6e630)
// Original: glf::App::IsUsingMultithreadedDriver
// ----------------------------------------------------------------------------
int glf::App::IsUsingMultithreadedDriver()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetUsingMultithreadedDriver  (binary VA: 0xc6e640)
// Original: glf::App::SetUsingMultithreadedDriver
// ----------------------------------------------------------------------------
bool glf::App::SetUsingMultithreadedDriver(glf::App::Self *self, bool a2)
{
  return !a2;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetInstance  (binary VA: 0xc6e650)
// Original: glf::App::GetInstance
// ----------------------------------------------------------------------------
int glf::App::GetInstance()
{
  return glf::App::mInstance;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetEventMgr  (binary VA: 0xc6e840)
// Original: glf::App::GetEventMgr
// ----------------------------------------------------------------------------
int glf::App::GetEventMgr(glf::App::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetInputMgr  (binary VA: 0xc6ecc0)
// Original: glf::App::GetInputMgr
// ----------------------------------------------------------------------------
int glf::App::GetInputMgr(glf::App::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetFs  (binary VA: 0xc6ef00)
// Original: glf::App::GetFs
// ----------------------------------------------------------------------------
int glf::App::GetFs(glf::App::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetOrientation  (binary VA: 0xc6f040)
// Original: glf::App::GetOrientation
// ----------------------------------------------------------------------------
int glf::App::GetOrientation(glf::App::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glf::App::IsOrientationSupported  (binary VA: 0xc6f050)
// Original: glf::App::IsOrientationSupported
// ----------------------------------------------------------------------------
bool glf::App::IsOrientationSupported(int a1, int a2)
{
  return (a2 & *(uint32_t *)(a1 + 24)) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetOrientation  (binary VA: 0xc6f060)
// Original: glf::App::SetOrientation
// ----------------------------------------------------------------------------
int glf::App::SetOrientation(int a1, int a2)
{
  bool IsOrientationSupported;
  int v3;

  IsOrientationSupported = glf::App::IsOrientationSupported(a1, a2);
  v3 = 0;
  if ( IsOrientationSupported )
  {
    *(uint32_t *)(a1 + 20) = a2;
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetSupportedOrientations  (binary VA: 0xc6f0b0)
// Original: glf::App::SetSupportedOrientations
// ----------------------------------------------------------------------------
glf::App::Self * glf::App::SetSupportedOrientations(glf::App::Self *self, int a2)
{
  *((uint32_t *)self + 6) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::App::IsScreenAutoRotating  (binary VA: 0xc6f0c0)
// Original: glf::App::IsScreenAutoRotating
// ----------------------------------------------------------------------------
int glf::App::IsScreenAutoRotating(glf::App::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 195) + 20))(*((uint32_t *)self + 195));
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetDeviceName  (binary VA: 0xc6f0e0)
// Original: glf::App::GetDeviceName
// ----------------------------------------------------------------------------
int glf::App::GetDeviceName(glf::App::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 195) + 8))(*((uint32_t *)self + 195));
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetWindowSize  (binary VA: 0xc6f100)
// Original: glf::App::GetWindowSize
// ----------------------------------------------------------------------------
int * glf::App::GetWindowSize(glf::App::Self *self, int *a2, int *a3)
{
  int v3;
  int v4;

  v3 = *((uint32_t *)self + 195);
  *a2 = *(uint32_t *)(*(uint32_t *)(v3 + 4) + 44);
  v4 = *(uint32_t *)(*(uint32_t *)(v3 + 4) + 48);
  *a3 = v4;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConvertPosDeviceToScreen  (binary VA: 0xc6f130)
// Original: glf::App::ConvertPosDeviceToScreen
// ----------------------------------------------------------------------------
uint16_t * glf::App::ConvertPosDeviceToScreen(uint16_t *a1, glf::App::Self *a2, float *a3, char a4)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  typedef int16_t _g4_t_v8;
  typedef int _g4_t_Orientation;
  typedef int16_t _g4_t_v10;
  typedef int _g4_t_v11[4];
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (10u + sizeof(_g4_t_v8)) > _g4_s0 ? (10u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_Orientation)) > _g4_s1 ? (24u + sizeof(_g4_t_Orientation)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 10u);
  _g4_t_Orientation &Orientation = *reinterpret_cast<_g4_t_Orientation *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  Orientation = glf::App::GetOrientation(a2);
  v4 = *((float *)glf::App::GetAppSettings(a2) + 3);
  v5 = a3[1] * v4;
  v6 = v4 * *a3;
  a1[1] = (int)v5;
  *a1 = (int)v6;
  v10 = (int)v5;
  v8 = (int)v6;
  if ( a4 != 0 )
  {
    glf::App::GetWindowSize(a2, v11, v12);
    switch ( Orientation )
    {
      case 4:
        *a1 = (int)v5;
        a1[1] = LOWORD(v11[0]) - v8;
        break;
      case 8:
        *a1 = LOWORD(v12[0]) - v10;
        a1[1] = (int)v6;
        break;
      case 2:
        *a1 = LOWORD(v11[0]) - v8;
        a1[1] = LOWORD(v12[0]) - v10;
        break;
      default:
        break;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConvertPosScreenToDevice  (binary VA: 0xc6f260)
// Original: glf::App::ConvertPosScreenToDevice
// ----------------------------------------------------------------------------
float * glf::App::ConvertPosScreenToDevice(float *a1, glf::App::Self *a2, int16_t *a3, char a4)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v9;
  int v10;
  typedef int _g4_t_Orientation;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_Orientation)) > _g4_s0 ? (12u + sizeof(_g4_t_Orientation)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_Orientation &Orientation = *reinterpret_cast<_g4_t_Orientation *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  Orientation = glf::App::GetOrientation(a2);
  v4 = 1.0 / *((float *)glf::App::GetAppSettings(a2) + 3);
  v5 = (float)(int16_t)(int)(float)((float)a3[1] * v4);
  v6 = (float)*a3 * v4;
  a1[1] = v5;
  v7 = (float)(int16_t)(int)v6;
  *a1 = v7;
  if ( a4 != 0 )
  {
    glf::App::GetWindowSize(a2, &v12, v13);
    v9 = (int)(float)((float)v12 * v4);
    v10 = (int)(float)((float)v13[0] * v4);
    switch ( Orientation )
    {
      case 4:
        a1[1] = v7;
        *a1 = (float)v9 - v5;
        break;
      case 8:
        *a1 = v5;
        a1[1] = (float)v10 - v7;
        break;
      case 2:
        *a1 = (float)v9 - v7;
        a1[1] = (float)v10 - v5;
        break;
      default:
        break;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConvertPosScreenToNormalizedDevice  (binary VA: 0xc6f3e0)
// Original: glf::App::ConvertPosScreenToNormalizedDevice
// ----------------------------------------------------------------------------
float * glf::App::ConvertPosScreenToNormalizedDevice(float *a1, glf::App::Self *a2, int16_t *a3, char a4)
{
  float v4; // xmm1_4
  typedef float _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  glf::App::ConvertPosScreenToDevice(a1, a2, a3, a4);
  v6 = 1.0 / *((float *)glf::App::GetAppSettings(a2) + 3);
  glf::App::GetWindowSize(a2, &v7, &v8);
  v4 = (float)(int)(float)((float)v8 * v6);
  *a1 = *a1 / (float)(int)(float)((float)v7 * v6);
  a1[1] = a1[1] / v4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConvertPosNormalizedDeviceToScreen  (binary VA: 0xc6f4c0)
// Original: glf::App::ConvertPosNormalizedDeviceToScreen
// ----------------------------------------------------------------------------
uint16_t * glf::App::ConvertPosNormalizedDeviceToScreen(uint16_t *a1, glf::App::Self *a2, float *a3, char a4)
{
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef float _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  glf::App::GetWindowSize(a2, &v5, &v6);
  v7[0] = (float)v5 * *a3;
  v7[1] = (float)v6 * a3[1];
  glf::App::ConvertPosDeviceToScreen(a1, a2, v7, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetScreenSize  (binary VA: 0xc6f570)
// Original: glf::App::GetScreenSize
// ----------------------------------------------------------------------------
int * glf::App::GetScreenSize(glf::App::Self *self, int *a2, int *a3, int a4)
{
  int *result;

  result = glf::App::GetWindowSize(self, a2, a3);
  if ( a4 == 0 )
  {
    result = (int *)glf::App::GetOrientation(self);
    if ( result == (int *)byte_8 || result == (int *)&loc_4 )
    {
      result = (int *)*a2;
      *a2 = *a3;
      *a3 = (int)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConvertPosScreenToNormalizedScreen  (binary VA: 0xc6f600)
// Original: glf::App::ConvertPosScreenToNormalizedScreen
// ----------------------------------------------------------------------------
float * glf::App::ConvertPosScreenToNormalizedScreen(float *a1, glf::App::Self *a2, int16_t *a3)
{
  float v4; // xmm1_4
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  glf::App::GetScreenSize(a2, &v6, v5, 0);
  if ( v6 != 0 && v5[0] != 0 )
  {
    v4 = (float)*a3 / (float)v6;
    a1[1] = (float)a3[1] / (float)v5[0];
    *a1 = v4;
  }
  else
  {
    *a1 = 0.0;
    a1[1] = 0.0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConvertPosNormalizedScreenToScreen  (binary VA: 0xc6f6b0)
// Original: glf::App::ConvertPosNormalizedScreenToScreen
// ----------------------------------------------------------------------------
uint16_t * glf::App::ConvertPosNormalizedScreenToScreen(uint16_t *a1, glf::App::Self *a2, float *a3)
{
  float v3; // xmm0_4
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  glf::App::GetScreenSize(a2, &v5, &v6, 0);
  v3 = (float)v5 * *a3;
  a1[1] = (int)(float)((float)v6 * a3[1]);
  *a1 = (int)v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::SetRemoteController  (binary VA: 0xc6f730)
// Original: glf::App::SetRemoteController
// ----------------------------------------------------------------------------
glf::remote::Controller::Self * glf::App::SetRemoteController(glf::App::Self *self, glf::remote::Controller::Self *a2)
{
  int v2;

  v2 = *((uint32_t *)self + 193);
  if ( v2 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(*((uint32_t *)self + 193));
  *((uint32_t *)self + 193) = (uint32_t)(uintptr_t)(a2);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glf::App::ConnectDisplay  (binary VA: 0xc6f760)
// Original: glf::App::ConnectDisplay
// ----------------------------------------------------------------------------
int glf::App::ConnectDisplay()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::DisconnectDisplay  (binary VA: 0xc6f770)
// Original: glf::App::DisconnectDisplay
// ----------------------------------------------------------------------------
int glf::App::DisconnectDisplay()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::GetDisplayStatus  (binary VA: 0xc6f780)
// Original: glf::App::GetDisplayStatus
// ----------------------------------------------------------------------------
int glf::App::GetDisplayStatus(glf::App::Self *self, int a2)
{
  return a2 == 0 ? 2 : 0;
}

// ----------------------------------------------------------------------------
// Function: glf::App::StartRemoteController  (binary VA: 0xc6f790)
// Original: glf::App::StartRemoteController
// ----------------------------------------------------------------------------
int glf::App::StartRemoteController(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 780) + 16))(*(uint32_t *)(a1 + 780), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Construct  (binary VA: 0xc6f7e0)
// Original: glf::App::App
// ----------------------------------------------------------------------------
int glf::App::Construct(glf::App::Self *a1)
{
  int Globals;
  uint32_t *v2;
  void *v3;
  typedef glf::Self *_g4_t_v5;
  typedef glf::Self *_g4_t_v6;
  typedef glf::Self *_g4_t_v7;
  typedef glf::Self *_g4_t_v8;
  typedef char *_g4_t_s;
  typedef glf::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v7)) > _g4_s2 ? (0u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v8)) > _g4_s3 ? (0u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_s)) > _g4_s4 ? (8u + sizeof(_g4_t_s)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (42u + sizeof(_g4_t_v11)) > _g4_s6 ? (42u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v12)) > _g4_s7 ? (44u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 42u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  *((uint8_t *)a1 + 4) = 1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206D3E8);
  *((uint32_t *)a1 + 2) = glf::GetGlobals(v5) + 424;
  *((uint32_t *)a1 + 3) = glf::GetGlobals(v6) + 384;
  Globals = glf::GetGlobals(v7);
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 4) = Globals + 64;
  *((uint32_t *)a1 + 6) = 15;
  *((uint32_t *)a1 + 25) = 0;
  glf::SpinLock::Construct((glf::App::Self *)((char *)a1 + 104));
  *((uint32_t *)a1 + 27) = 305419896;
  *((uint32_t *)a1 + 28) = 305419896;
  *((uint32_t *)a1 + 29) = 305419896;
  *((uint32_t *)a1 + 30) = 305419896;
  *((uint8_t *)a1 + 124) = 0;
  *((uint8_t *)a1 + 125) = 0;
  *((uint8_t *)a1 + 126) = 0;
  *((uint8_t *)a1 + 127) = 0;
  *((uint8_t *)a1 + 128) = 0;
  *((uint8_t *)a1 + 129) = 0;
  *((uint8_t *)a1 + 130) = 0;
  *((uint8_t *)a1 + 131) = 1;
  *((uint32_t *)a1 + 33) = 1;
  *((uint8_t *)a1 + 136) = 1;
  *((uint8_t *)a1 + 137) = 0;
  *((uint8_t *)a1 + 138) = 1;
  *((uint32_t *)a1 + 35) = 0;
  *((uint32_t *)a1 + 36) = 1065353216;
  *((uint32_t *)a1 + 37) = 16;
  *((uint8_t *)a1 + 152) = 16;
  *((uint8_t *)a1 + 153) = 16;
  *((uint32_t *)a1 + 39) = 0;
  *((uint32_t *)a1 + 40) = 0;
  *((uint8_t *)a1 + 164) = 0;
  *((uint8_t *)a1 + 165) = 0;
  *((uint32_t *)a1 + 42) = 0;
  *((uint8_t *)a1 + 172) = 1;
  *((uint32_t *)a1 + 44) = 0;
  *((uint32_t *)a1 + 45) = 12;
  *((uint8_t *)a1 + 184) = 1;
  glf::Strcpy((glf::App::Self *)((char *)a1 + 185), "appname", s);
  *((uint32_t *)a1 + 193) = 0;
  *((uint32_t *)a1 + 194) = 0;
  v2 = (uint32_t *)(sub_4EBD10(0x84u, 1));
  *v2 = ((uint32_t)(uintptr_t)&off_206D4A8);
  v2[1] = (uint32_t)(uintptr_t)(a1);
  glf::AppEventReceiver::Construct((glf::AppEventReceiver::Self *)(v2 + 2), a1);
  v2[13] = 0;
  v2[30] = -1;
  *v2 = ((uint32_t)(uintptr_t)&off_206D4C8);
  v2[31] = 0;
  v2[32] = 0;
  glf::gAppImpl = (uintptr_t)(uintptr_t)(v2);
  v10 = (glf::Self *)glf::PropertyMap::sThis;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "hw.platform", (int)(uintptr_t)(&v11));
  glf::PropertyMap::SetProperty((glf::PropertyMap::Self *)v10, (const char **)v12, const_cast<char *>("android"), 0);
  v3 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  *((uint8_t *)v2 + 56) = 0;
  *((uint32_t *)a1 + 195) = (uint32_t)(uintptr_t)(v2);
  *(uint32_t *)(glf::GetGlobals(v8) + 572) = (uint32_t)(uintptr_t)(a1);
  glf::App::mInstance = (uintptr_t)(uintptr_t)(a1);
  glf::EventManager::AddEventReceiver(*((glf::EventManager::Self **)a1 + 2), a1, 200);
  return ((glf::EventManager::AddEventReceiver(*((glf::EventManager::Self **)a1 + 2), *((glf::EventReceiver::Self **)a1 + 3), 200)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Init  (binary VA: 0xc6fa90)
// Original: glf::App::Init
// ----------------------------------------------------------------------------
int glf::App::Init(glf::App::Self *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  const char *v5;
  size_t v6;
  void *v7;
  int (**v8)(int);
  void *v9;
  void *v10;
  int *v11;
  void *v12;
  void *v13;
  void *v14;
  int *v15;
  void *v16;
  void *v17;
  void *v18;
  int *v19;
  void *v20;
  void *v21;
  void *v22;
  uint8_t *v23;
  volatile int32_t *v24;
  size_t *v25;
  void *v26;
  int v27;
  void *v28;
  char *v29;
  volatile int32_t *v30;
  void *v31;
  void *v32;
  int v33;
  void *v34;
  char *v35;
  volatile int32_t *v36;
  void *v37;
  void *v38;
  void *v39;
  int i;
  void *v41;
  uint8_t *v42;
  void *v43;
  size_t v44;
  uint32_t *v45;
  uint32_t *v46;
  int v47;
  void *v48;
  void *v49;
  size_t *v51;
  volatile int32_t *v52;
  int v53;
  const void *v54;
  char *v55;
  int v56;
  int v57;
  int v58;
  int v59;
  void *v60;
  char *v61;
  unsigned int v62;
  typedef glf::Self *_g4_t_v63;
  typedef glf::Self *_g4_t_v64;
  typedef glf::Self *_g4_t_v65;
  typedef glf::Self *_g4_t_v66;
  typedef glf::Self *_g4_t_v67;
  typedef glf::Self *_g4_t_v68;
  typedef const char *_g4_t_v69;
  typedef const char *_g4_t_v70;
  typedef bool _g4_t_v71;
  typedef const char *_g4_t_v72;
  typedef const char *_g4_t_v73;
  typedef const char *_g4_t_v74;
  typedef void *_g4_t_v75;
  typedef char *_g4_t_srcc;
  typedef void *_g4_t_srcd;
  typedef uint8_t *_g4_t_src;
  typedef size_t *_g4_t_srce;
  typedef void *_g4_t_srcf;
  typedef uint8_t *_g4_t_srca;
  typedef void *_g4_t_srcg;
  typedef glf::Macro::Self *_g4_t_srch;
  typedef size_t *_g4_t_srci;
  typedef void *_g4_t_srcb;
  typedef glf::Macro::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_EventMgr;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef size_t _g4_t_v93;
  typedef size_t _g4_t_v94;
  typedef glf::App::Self *_g4_t_v95;
  typedef size_t _g4_t_nf;
  typedef size_t _g4_t_n;
  typedef uint8_t *_g4_t_na;
  typedef size_t _g4_t_ng;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef uint8_t *_g4_t_ne;
  typedef uint32_t *_g4_t_dest;
  typedef char *_g4_t_desta;
  typedef glf::PropertyMap::Self *_g4_t_v106;
  typedef glf::PropertyMap::Self *_g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef glf::PropertyMap::Self *_g4_t_v109;
  typedef size_t _g4_t_v110;
  typedef size_t _g4_t_v111;
  typedef signed int _g4_t_v112;
  typedef uint8_t *_g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef int _g4_t_v122[4];
  typedef int _g4_t_v123[4];
  typedef int _g4_t_v124[4];
  typedef int _g4_t_v125[4];
  typedef int _g4_t_v126[4];
  typedef int _g4_t_v127[4];
  typedef int _g4_t_v128[4];
  typedef int _g4_t_v129[4];
  typedef int _g4_t_v130[4];
  typedef int _g4_t_v131[4];
  typedef int _g4_t_v132[4];
  typedef glf::Self *_g4_t_v133[4];
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef char _g4_t_v138[4];
  typedef volatile int32_t *_g4_t_v139;
  typedef volatile int32_t *_g4_t_v140;
  typedef char _g4_t_v141[4];
  typedef char _g4_t_s[4];
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int (**_g4_t_v145)(int);
  typedef int (**_g4_t_v146)(int);
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef uint8_t *_g4_t_v149;
  typedef uint8_t *_g4_t_v150;
  typedef uint8_t *_g4_t_v151;
  typedef int _g4_t_v152;
  typedef char _g4_t_v153[4];
  typedef int _g4_t_v154;
  typedef volatile int32_t *_g4_t_v155;
  typedef uint32_t _g4_t_v156[28];
  typedef int _g4_t_v157;
  typedef char _g4_t_v158;
  typedef char _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef glf::App::Self **_g4_t_v164;
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (4u + sizeof(_g4_t_v63)) > _g4_s0 ? (4u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v64)) > _g4_s1 ? (4u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v65)) > _g4_s2 ? (4u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v66)) > _g4_s3 ? (4u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v67)) > _g4_s4 ? (4u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v68)) > _g4_s5 ? (4u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v69)) > _g4_s6 ? (8u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v70)) > _g4_s7 ? (8u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v71)) > _g4_s8 ? (8u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v72)) > _g4_s9 ? (12u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v73)) > _g4_s10 ? (12u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v74)) > _g4_s11 ? (12u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v75)) > _g4_s12 ? (16u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_srcc)) > _g4_s13 ? (56u + sizeof(_g4_t_srcc)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_srcd)) > _g4_s14 ? (56u + sizeof(_g4_t_srcd)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_src)) > _g4_s15 ? (56u + sizeof(_g4_t_src)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_srce)) > _g4_s16 ? (56u + sizeof(_g4_t_srce)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_srcf)) > _g4_s17 ? (56u + sizeof(_g4_t_srcf)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_srca)) > _g4_s18 ? (56u + sizeof(_g4_t_srca)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_srcg)) > _g4_s19 ? (56u + sizeof(_g4_t_srcg)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_srch)) > _g4_s20 ? (56u + sizeof(_g4_t_srch)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_srci)) > _g4_s21 ? (56u + sizeof(_g4_t_srci)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_srcb)) > _g4_s22 ? (56u + sizeof(_g4_t_srcb)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v86)) > _g4_s23 ? (60u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v87)) > _g4_s24 ? (64u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_EventMgr)) > _g4_s25 ? (64u + sizeof(_g4_t_EventMgr)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v89)) > _g4_s26 ? (64u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v90)) > _g4_s27 ? (64u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v91)) > _g4_s28 ? (64u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v92)) > _g4_s29 ? (64u + sizeof(_g4_t_v92)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v93)) > _g4_s30 ? (92u + sizeof(_g4_t_v93)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v94)) > _g4_s31 ? (92u + sizeof(_g4_t_v94)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v95)) > _g4_s32 ? (96u + sizeof(_g4_t_v95)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_nf)) > _g4_s33 ? (100u + sizeof(_g4_t_nf)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_n)) > _g4_s34 ? (100u + sizeof(_g4_t_n)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_na)) > _g4_s35 ? (100u + sizeof(_g4_t_na)) : _g4_s35,
    _g4_s37 = (100u + sizeof(_g4_t_ng)) > _g4_s36 ? (100u + sizeof(_g4_t_ng)) : _g4_s36,
    _g4_s38 = (100u + sizeof(_g4_t_nb)) > _g4_s37 ? (100u + sizeof(_g4_t_nb)) : _g4_s37,
    _g4_s39 = (100u + sizeof(_g4_t_nc)) > _g4_s38 ? (100u + sizeof(_g4_t_nc)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_nd)) > _g4_s39 ? (100u + sizeof(_g4_t_nd)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_ne)) > _g4_s40 ? (100u + sizeof(_g4_t_ne)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_dest)) > _g4_s41 ? (104u + sizeof(_g4_t_dest)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_desta)) > _g4_s42 ? (104u + sizeof(_g4_t_desta)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v106)) > _g4_s43 ? (108u + sizeof(_g4_t_v106)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v107)) > _g4_s44 ? (108u + sizeof(_g4_t_v107)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v108)) > _g4_s45 ? (108u + sizeof(_g4_t_v108)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v109)) > _g4_s46 ? (108u + sizeof(_g4_t_v109)) : _g4_s46,
    _g4_s48 = (112u + sizeof(_g4_t_v110)) > _g4_s47 ? (112u + sizeof(_g4_t_v110)) : _g4_s47,
    _g4_s49 = (112u + sizeof(_g4_t_v111)) > _g4_s48 ? (112u + sizeof(_g4_t_v111)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_v112)) > _g4_s49 ? (112u + sizeof(_g4_t_v112)) : _g4_s49,
    _g4_s51 = (112u + sizeof(_g4_t_v113)) > _g4_s50 ? (112u + sizeof(_g4_t_v113)) : _g4_s50,
    _g4_s52 = (112u + sizeof(_g4_t_v114)) > _g4_s51 ? (112u + sizeof(_g4_t_v114)) : _g4_s51,
    _g4_s53 = (120u + sizeof(_g4_t_v115)) > _g4_s52 ? (120u + sizeof(_g4_t_v115)) : _g4_s52,
    _g4_s54 = (124u + sizeof(_g4_t_v116)) > _g4_s53 ? (124u + sizeof(_g4_t_v116)) : _g4_s53,
    _g4_s55 = (128u + sizeof(_g4_t_v117)) > _g4_s54 ? (128u + sizeof(_g4_t_v117)) : _g4_s54,
    _g4_s56 = (145u + sizeof(_g4_t_v118)) > _g4_s55 ? (145u + sizeof(_g4_t_v118)) : _g4_s55,
    _g4_s57 = (146u + sizeof(_g4_t_v119)) > _g4_s56 ? (146u + sizeof(_g4_t_v119)) : _g4_s56,
    _g4_s58 = (152u + sizeof(_g4_t_v120)) > _g4_s57 ? (152u + sizeof(_g4_t_v120)) : _g4_s57,
    _g4_s59 = (153u + sizeof(_g4_t_v121)) > _g4_s58 ? (153u + sizeof(_g4_t_v121)) : _g4_s58,
    _g4_s60 = (164u + sizeof(_g4_t_v122)) > _g4_s59 ? (164u + sizeof(_g4_t_v122)) : _g4_s59,
    _g4_s61 = (180u + sizeof(_g4_t_v123)) > _g4_s60 ? (180u + sizeof(_g4_t_v123)) : _g4_s60,
    _g4_s62 = (196u + sizeof(_g4_t_v124)) > _g4_s61 ? (196u + sizeof(_g4_t_v124)) : _g4_s61,
    _g4_s63 = (212u + sizeof(_g4_t_v125)) > _g4_s62 ? (212u + sizeof(_g4_t_v125)) : _g4_s62,
    _g4_s64 = (228u + sizeof(_g4_t_v126)) > _g4_s63 ? (228u + sizeof(_g4_t_v126)) : _g4_s63,
    _g4_s65 = (244u + sizeof(_g4_t_v127)) > _g4_s64 ? (244u + sizeof(_g4_t_v127)) : _g4_s64,
    _g4_s66 = (260u + sizeof(_g4_t_v128)) > _g4_s65 ? (260u + sizeof(_g4_t_v128)) : _g4_s65,
    _g4_s67 = (276u + sizeof(_g4_t_v129)) > _g4_s66 ? (276u + sizeof(_g4_t_v129)) : _g4_s66,
    _g4_s68 = (292u + sizeof(_g4_t_v130)) > _g4_s67 ? (292u + sizeof(_g4_t_v130)) : _g4_s67,
    _g4_s69 = (308u + sizeof(_g4_t_v131)) > _g4_s68 ? (308u + sizeof(_g4_t_v131)) : _g4_s68,
    _g4_s70 = (324u + sizeof(_g4_t_v132)) > _g4_s69 ? (324u + sizeof(_g4_t_v132)) : _g4_s69,
    _g4_s71 = (340u + sizeof(_g4_t_v133)) > _g4_s70 ? (340u + sizeof(_g4_t_v133)) : _g4_s70,
    _g4_s72 = (356u + sizeof(_g4_t_v134)) > _g4_s71 ? (356u + sizeof(_g4_t_v134)) : _g4_s71,
    _g4_s73 = (360u + sizeof(_g4_t_v135)) > _g4_s72 ? (360u + sizeof(_g4_t_v135)) : _g4_s72,
    _g4_s74 = (364u + sizeof(_g4_t_v136)) > _g4_s73 ? (364u + sizeof(_g4_t_v136)) : _g4_s73,
    _g4_s75 = (368u + sizeof(_g4_t_v137)) > _g4_s74 ? (368u + sizeof(_g4_t_v137)) : _g4_s74,
    _g4_s76 = (372u + sizeof(_g4_t_v138)) > _g4_s75 ? (372u + sizeof(_g4_t_v138)) : _g4_s75,
    _g4_s77 = (376u + sizeof(_g4_t_v139)) > _g4_s76 ? (376u + sizeof(_g4_t_v139)) : _g4_s76,
    _g4_s78 = (380u + sizeof(_g4_t_v140)) > _g4_s77 ? (380u + sizeof(_g4_t_v140)) : _g4_s77,
    _g4_s79 = (384u + sizeof(_g4_t_v141)) > _g4_s78 ? (384u + sizeof(_g4_t_v141)) : _g4_s78,
    _g4_s80 = (388u + sizeof(_g4_t_s)) > _g4_s79 ? (388u + sizeof(_g4_t_s)) : _g4_s79,
    _g4_s81 = (452u + sizeof(_g4_t_v143)) > _g4_s80 ? (452u + sizeof(_g4_t_v143)) : _g4_s80,
    _g4_s82 = (456u + sizeof(_g4_t_v144)) > _g4_s81 ? (456u + sizeof(_g4_t_v144)) : _g4_s81,
    _g4_s83 = (460u + sizeof(_g4_t_v145)) > _g4_s82 ? (460u + sizeof(_g4_t_v145)) : _g4_s82,
    _g4_s84 = (464u + sizeof(_g4_t_v146)) > _g4_s83 ? (464u + sizeof(_g4_t_v146)) : _g4_s83,
    _g4_s85 = (468u + sizeof(_g4_t_v147)) > _g4_s84 ? (468u + sizeof(_g4_t_v147)) : _g4_s84,
    _g4_s86 = (472u + sizeof(_g4_t_v148)) > _g4_s85 ? (472u + sizeof(_g4_t_v148)) : _g4_s85,
    _g4_s87 = (476u + sizeof(_g4_t_v149)) > _g4_s86 ? (476u + sizeof(_g4_t_v149)) : _g4_s86,
    _g4_s88 = (480u + sizeof(_g4_t_v150)) > _g4_s87 ? (480u + sizeof(_g4_t_v150)) : _g4_s87,
    _g4_s89 = (484u + sizeof(_g4_t_v151)) > _g4_s88 ? (484u + sizeof(_g4_t_v151)) : _g4_s88,
    _g4_s90 = (488u + sizeof(_g4_t_v152)) > _g4_s89 ? (488u + sizeof(_g4_t_v152)) : _g4_s89,
    _g4_s91 = (492u + sizeof(_g4_t_v153)) > _g4_s90 ? (492u + sizeof(_g4_t_v153)) : _g4_s90,
    _g4_s92 = (496u + sizeof(_g4_t_v154)) > _g4_s91 ? (496u + sizeof(_g4_t_v154)) : _g4_s91,
    _g4_s93 = (500u + sizeof(_g4_t_v155)) > _g4_s92 ? (500u + sizeof(_g4_t_v155)) : _g4_s92,
    _g4_s94 = (504u + sizeof(_g4_t_v156)) > _g4_s93 ? (504u + sizeof(_g4_t_v156)) : _g4_s93,
    _g4_s95 = (616u + sizeof(_g4_t_v157)) > _g4_s94 ? (616u + sizeof(_g4_t_v157)) : _g4_s94,
    _g4_s96 = (620u + sizeof(_g4_t_v158)) > _g4_s95 ? (620u + sizeof(_g4_t_v158)) : _g4_s95,
    _g4_s97 = (621u + sizeof(_g4_t_v159)) > _g4_s96 ? (621u + sizeof(_g4_t_v159)) : _g4_s96,
    _g4_s98 = (624u + sizeof(_g4_t_v160)) > _g4_s97 ? (624u + sizeof(_g4_t_v160)) : _g4_s97,
    _g4_s99 = (628u + sizeof(_g4_t_v161)) > _g4_s98 ? (628u + sizeof(_g4_t_v161)) : _g4_s98,
    _g4_s100 = (632u + sizeof(_g4_t_v162)) > _g4_s99 ? (632u + sizeof(_g4_t_v162)) : _g4_s99,
    _g4_s101 = (636u + sizeof(_g4_t_v163)) > _g4_s100 ? (636u + sizeof(_g4_t_v163)) : _g4_s100,
    _g4_s102 = (652u + sizeof(_g4_t_v164)) > _g4_s101 ? (652u + sizeof(_g4_t_v164)) : _g4_s101
  };
  alignas(16) uint8_t _g4_sf[_g4_s102];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 4u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 4u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 4u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 4u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 12u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 56u);
  _g4_t_srcd &srcd = *reinterpret_cast<_g4_t_srcd *>(_g4_sf + 56u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 56u);
  _g4_t_srce &srce = *reinterpret_cast<_g4_t_srce *>(_g4_sf + 56u);
  _g4_t_srcf &srcf = *reinterpret_cast<_g4_t_srcf *>(_g4_sf + 56u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 56u);
  _g4_t_srcg &srcg = *reinterpret_cast<_g4_t_srcg *>(_g4_sf + 56u);
  _g4_t_srch &srch = *reinterpret_cast<_g4_t_srch *>(_g4_sf + 56u);
  _g4_t_srci &srci = *reinterpret_cast<_g4_t_srci *>(_g4_sf + 56u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 64u);
  _g4_t_EventMgr &EventMgr = *reinterpret_cast<_g4_t_EventMgr *>(_g4_sf + 64u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 64u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 64u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 64u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 64u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_nf &nf = *reinterpret_cast<_g4_t_nf *>(_g4_sf + 100u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 100u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 100u);
  _g4_t_ng &ng = *reinterpret_cast<_g4_t_ng *>(_g4_sf + 100u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 100u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 100u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 100u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 100u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 104u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 104u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 108u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 108u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 108u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 108u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 112u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 112u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 112u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 112u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 112u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 120u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 124u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 128u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 145u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 146u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 152u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 153u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 164u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 180u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 196u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 212u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 228u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 244u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 260u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 276u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 292u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 308u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 324u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 340u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 356u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 360u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 364u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 368u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 372u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 376u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 380u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 384u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 388u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 452u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 456u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 460u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 464u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 468u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 472u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 476u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 480u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 484u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 488u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 492u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 496u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 500u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 504u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 616u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 620u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 621u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 624u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 628u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 632u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 636u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 652u);

  v164 = &a1;
  v95 = a1;
  dest = a2;
  v2 = *((uint32_t *)a1 + 195);
  *((uint32_t *)a1 + 10) = a2[9];
  *((uint32_t *)v95 + 13) = dest[10];
  *((uint8_t *)dest + 57) = 0;
  *(uint8_t *)(*(uint32_t *)(v2 + 4) + 5) = 1;
  *(uint32_t *)(*(uint32_t *)(v2 + 4) + 40) = 1065353216;
  *(uint32_t *)(*(uint32_t *)(v2 + 4) + 96) = 1;
  *(uint32_t *)(v2 + 120) = glf::Thread::AddStartExitHandlers(
                            (glf::Thread::Self *)glf::AndroidOnStartThread,
                            (void (*)(void *))glf::AndroidOnExitThread,
                            nullptr,
                            v75);
  v3 = dest[18];
  if ( v3 == 0 )
    v3 = 12;
  dest[18] = v3;
  v4 = 0;
  v106 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
  v122[0] = (int)(uintptr_t)(&dword_213B814);
  while ( v4 < *(uint32_t *)(glf::GetGlobals(v63) + 576) )
  {
    v5 = *(const char **)(*(uint32_t *)(glf::GetGlobals(v64) + 580) + 4 * v4++);
    srcc = (char *)v5;
    v6 = strlen(v5);
    g4_std::string::append((int)(uintptr_t)(v122), srcc, v6);
    g4_std::string::append((int)(uintptr_t)(v122), ";", 1u);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v134), "session.argv", (int)(uintptr_t)(&v115));
  glf::PropertyMap::SetProperty(v106, (const char **)&v134, (int)(uintptr_t)(v122), 5);
  v7 = (void *)(v134 - 12);
  if ( (uint32_t *)(v134 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v134 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v123), "session.launchCount", (int)(uintptr_t)(&v115) + 1);
  glf::PropertyMap::GetPropertyEx((uint32_t *)&v143, (int)(uintptr_t)v106, (void **)v123, 1);
  v8 = nullptr;
  if ( v143 == 0 )
    v8 = v146;
  v110 = (size_t)v8;
  v9 = (void *)(v148 - 12);
  if ( (uint32_t *)(v148 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v123[0] - 12);
  if ( (uint32_t *)(v123[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v123[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v126), (char *)&unk_1B15112, (int)(uintptr_t)(&v115) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v125), "build.uuid", (int)(uintptr_t)(&v115) + 2);
  glf::PropertyMap::GetPropertyEx((uint32_t *)&v143, (int)(uintptr_t)v106, (void **)v125, 5);
  v11 = &v148;
  if ( v143 != 0 )
    v11 = v126;
  g4_std::string::construct_copy(v124, v11);
  v12 = (void *)(v148 - 12);
  if ( (uint32_t *)(v148 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v125[0] - 12);
  if ( (uint32_t *)(v125[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v125[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v126[0] - 12);
  if ( (uint32_t *)(v126[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v126[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v129), (char *)&unk_1B15112, (int)(uintptr_t)(&v116) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v128), "build.lastUuid", (int)(uintptr_t)(&v116));
  glf::PropertyMap::GetPropertyEx((uint32_t *)&v143, (int)(uintptr_t)v106, (void **)v128, 5);
  v15 = &v148;
  if ( v143 != 0 )
    v15 = v129;
  g4_std::string::construct_copy(v127, v15);
  v16 = (void *)(v148 - 12);
  if ( (uint32_t *)(v148 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v128[0] - 12);
  if ( (uint32_t *)(v128[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v128[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v129[0] - 12);
  if ( (uint32_t *)(v129[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v129[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v132), "00:00:00:00:00:00", (int)(uintptr_t)(&v116) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v131), "device.wifiMacAddress", (int)(uintptr_t)(&v116) + 2);
  glf::PropertyMap::GetPropertyEx((uint32_t *)&v143, (int)(uintptr_t)v106, (void **)v131, 5);
  v19 = &v148;
  if ( v143 != 0 )
    v19 = v132;
  g4_std::string::construct_copy(v130, v19);
  v20 = (void *)(v148 - 12);
  if ( (uint32_t *)(v148 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  v21 = (void *)(v131[0] - 12);
  if ( (uint32_t *)(v131[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v131[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  v22 = (void *)(v132[0] - 12);
  if ( (uint32_t *)(v132[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v132[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  sub_1900810(v156);
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v156[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v163 = 0;
  v143 = (int)(uintptr_t)(&off_20AAF2C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF2C - 3)) = (int)(uintptr_t)(&off_20AAF40);
  v144 = 0;
  sub_19119D0((char *)&v143 + *(uint32_t *)(v143 - 12), 0);
  v145 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(int (***)(int))((char *)&v145 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v145 + (uint32_t)(uintptr_t)(*(v145 - 3)), 0);
  v143 = (int)(uintptr_t)(&off_20AAF6C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF6C - 3)) = (int)(uintptr_t)(&off_20AAF94);
  v147 = 0;
  v143 = (int)(uintptr_t)(&off_20AAFEC);
  v148 = 0;
  v149 = nullptr;
  v156[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v150 = nullptr;
  v151 = nullptr;
  v145 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v152 = 0;
  v146 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v153);
  v154 = 24;
  v155 = (volatile int32_t *)&dword_213B814;
  v146 = (int (**)(int))(uintptr_t)(&off_20AADA8);
  sub_19119D0(v156, &v146);
  nf = (size_t)(uintptr_t)(g4_std_compat::ostream_write(&v145, v124[0], *(uint32_t *)(v124[0] - 12)));
  srcd = (void *)g4_std_compat::ostream_write(nf, v130[0], *(uint32_t *)(v130[0] - 12));
  g4_std_compat::ostream_write(srcd, ":", 1);
  g4_std::ostream::op_shl_int(srcd, v110);
  v23 = (uint8_t *)(&dword_213B814);
  v133[0] = (glf::Self *)&dword_213B814;
  if ( v151 == nullptr )
  {
    g4_std::string::assign_str(v133, &v155);
    goto LABEL_44;
  }
  if ( v151 <= v149 )
  {
    na = v150;
    if ( v149 == v150 )
    {
LABEL_43:
      *(uint32_t *)v138 = (uint32_t)(uintptr_t)(v23);
      g4_std::string::assign_str(v133, v138);
      v26 = (void *)(*(uint32_t *)v138 - 12);
      if ( (uint32_t *)(*(uint32_t *)v138 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v138 - 4), 0xFFFFFFFF) <= 0 )
      {
        v69 = &v119;
        g4_std::string::Rep::M_destroy(v26);
      }
      goto LABEL_44;
    }
    if ( v150 != nullptr )
    {
      v94 = v149 - v150;
      v25 = (size_t *)sub_1938930(v149 - v150, 0);
      v23 = (uint8_t *)(v25 + 3);
      if ( v94 == 1 )
      {
        *((uint8_t *)v25 + 12) = *na;
LABEL_41:
        if ( v25 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v25[2] = 0;
          *v25 = v94;
          v23[v94] = 0;
        }
        goto LABEL_43;
      }
    }
    else
    {
      if ( v149 != nullptr )
        goto LABEL_101;
      v25 = (size_t *)sub_1938930(0, 0);
      v23 = (uint8_t *)(v25 + 3);
      v94 = 0;
    }
    srce = v25;
    v87 = (int)(uintptr_t)(v23);
    memcpy(v23, na, v94);
    v23 = (uint8_t *)v87;
    v25 = srce;
    goto LABEL_41;
  }
  if ( v151 != v150 )
  {
    if ( v150 == nullptr )
      goto LABEL_101;
    src = v150;
    n = v151 - v150;
    v93 = sub_1938930(v151 - v150, 0);
    v23 = (uint8_t *)(v93 + 12);
    if ( n == 1 )
    {
      *(uint8_t *)(v93 + 12) = *src;
    }
    else
    {
      memcpy(v23, src, n);
      v23 = (uint8_t *)(v93 + 12);
    }
    if ( (uint32_t *)v93 != dword_213B808 )
    {
      *(uint32_t *)(v93 + 8) = 0;
      *(uint32_t *)v93 = n;
      *(uint8_t *)(v93 + n + 12) = 0;
    }
  }
  v139 = (volatile int32_t *)v23;
  g4_std::string::assign_str(v133, &v139);
  v24 = v139 - 3;
  if ( v139 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v139 - 1, 0xFFFFFFFF) <= 0 )
  {
    v69 = &v118;
    g4_std::string::Rep::M_destroy((void *)v24);
  }
LABEL_44:
  v27 = glf::hashstring(v133[0], v69);
  sprintf(s, "%08x", v27, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v135), "session.launchUid", (int)(uintptr_t)(&v117));
  glf::PropertyMap::SetProperty(v106, (const char **)&v135, (char *)s, 14);
  v28 = (void *)(v135 - 12);
  if ( (uint32_t *)(v135 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v135 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  v29 = (char *)v133[0] - 12;
  if ( (uint32_t *)v133[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v133[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  v143 = (int)(uintptr_t)(&off_20AAFEC);
  v156[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v145 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v146 = (int (**)(int))(uintptr_t)(&off_20AADA8);
  v30 = v155 - 3;
  if ( v155 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v155 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v30);
  v146 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
  sub_1902180(v153);
  v143 = (int)(uintptr_t)(&off_20AAF6C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF6C - 3)) = (int)(uintptr_t)(&off_20AAF94);
  v145 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(int (***)(int))((char *)&v145 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
  v143 = (int)(uintptr_t)(&off_20AAF2C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF2C - 3)) = (int)(uintptr_t)(&off_20AAF40);
  v144 = 0;
  v156[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v156);
  sub_1900810(v156);
  v156[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v143 = (int)(uintptr_t)(&off_20AAF2C);
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF2C - 3)) = (int)(uintptr_t)(&off_20AAF40);
  v144 = 0;
  sub_19119D0((char *)&v143 + *(uint32_t *)(v143 - 12), 0);
  v145 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(int (***)(int))((char *)&v145 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v145 + (uint32_t)(uintptr_t)(*(v145 - 3)), 0);
  v143 = (int)(uintptr_t)(&off_20AAF6C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF6C - 3)) = (int)(uintptr_t)(&off_20AAF94);
  v146 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
  v143 = (int)(uintptr_t)(&off_20AAFEC);
  v147 = 0;
  v148 = 0;
  v156[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v149 = nullptr;
  v150 = nullptr;
  v145 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v151 = nullptr;
  v152 = 0;
  sub_1903A70(v153);
  v154 = 24;
  v155 = (volatile int32_t *)&dword_213B814;
  v146 = (int (**)(int))(uintptr_t)(&off_20AADA8);
  sub_19119D0(v156, &v146);
  ng = (size_t)(uintptr_t)(g4_std_compat::ostream_write(&v145, v127[0], *(uint32_t *)(v127[0] - 12)));
  srcf = (void *)g4_std_compat::ostream_write(ng, v130[0], *(uint32_t *)(v130[0] - 12));
  g4_std_compat::ostream_write(srcf, ":", 1);
  g4_std::ostream::op_shl_int(srcf, v110 - 1);
  v31 = &dword_213B814;
  v133[0] = (glf::Self *)&dword_213B814;
  if ( v151 == nullptr )
  {
    g4_std::string::assign_str(v133, &v155);
    goto LABEL_56;
  }
  if ( v151 > v149 )
  {
    if ( v151 == v150 )
    {
LABEL_55:
      *(uint32_t *)v141 = (uint32_t)(uintptr_t)(v31);
      g4_std::string::assign_str(v133, v141);
      v32 = (void *)(*(uint32_t *)v141 - 12);
      if ( (uint32_t *)(*(uint32_t *)v141 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v141 - 4), 0xFFFFFFFF) <= 0 )
      {
        v70 = &v120;
        g4_std::string::Rep::M_destroy(v32);
      }
      goto LABEL_56;
    }
    if ( v150 != nullptr )
    {
      srca = v150;
      v111 = v151 - v150;
      nb = sub_1938930(v151 - v150, 0);
      v31 = (void *)(nb + 12);
      if ( v111 == 1 )
      {
        *(uint8_t *)(nb + 12) = *srca;
      }
      else
      {
        memcpy(v31, srca, v111);
        v31 = (void *)(nb + 12);
      }
      if ( (uint32_t *)nb != dword_213B808 )
      {
        *(uint32_t *)(nb + 8) = 0;
        *(uint32_t *)nb = v111;
        *(uint8_t *)(nb + v111 + 12) = 0;
      }
      goto LABEL_55;
    }
LABEL_101:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v113 = v150;
  if ( v149 != v150 )
  {
    if ( v150 != nullptr )
    {
      nd = v149 - v150;
      v51 = (size_t *)sub_1938930(v149 - v150, 0);
      v31 = v51 + 3;
      if ( nd == 1 )
      {
        *((uint8_t *)v51 + 12) = *v113;
LABEL_92:
        if ( v51 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v51[2] = 0;
          *v51 = nd;
          *((uint8_t *)v31 + nd) = 0;
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( v149 != nullptr )
        goto LABEL_101;
      v51 = (size_t *)sub_1938930(0, 0);
      v31 = v51 + 3;
      nd = 0;
    }
    srci = v51;
    v89 = (int)(uintptr_t)(v31);
    memcpy(v31, v113, nd);
    v31 = (void *)v89;
    v51 = srci;
    goto LABEL_92;
  }
LABEL_94:
  v140 = (volatile int32_t *)v31;
  g4_std::string::assign_str(v133, &v140);
  v52 = v140 - 3;
  if ( v140 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v140 - 1, 0xFFFFFFFF) <= 0 )
  {
    v70 = &v121;
    g4_std::string::Rep::M_destroy((void *)v52);
  }
LABEL_56:
  v33 = glf::hashstring(v133[0], v70);
  sprintf(s, "%08x", v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v136), "session.lastLaunchUid", (int)(uintptr_t)(&v117) + 1);
  glf::PropertyMap::SetProperty(v106, (const char **)&v136, (char *)s, 15);
  v34 = (void *)(v136 - 12);
  if ( (uint32_t *)(v136 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v136 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v34);
  }
  v35 = (char *)v133[0] - 12;
  if ( (uint32_t *)v133[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v133[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v35);
  }
  v143 = (int)(uintptr_t)(&off_20AAFEC);
  v156[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v145 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v146 = (int (**)(int))(uintptr_t)(&off_20AADA8);
  v36 = v155 - 3;
  if ( v155 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v155 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v36);
  v146 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
  sub_1902180(v153);
  v143 = (int)(uintptr_t)(&off_20AAF6C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF6C - 3)) = (int)(uintptr_t)(&off_20AAF94);
  v145 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(int (***)(int))((char *)&v145 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
  v143 = (int)(uintptr_t)(&off_20AAF2C);
  *(int *)((char *)&v143 + (uint32_t)*(&off_20AAF2C - 3)) = (int)(uintptr_t)(&off_20AAF40);
  v144 = 0;
  v156[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v156);
  v37 = (void *)(v130[0] - 12);
  if ( (uint32_t *)(v130[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v130[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v37);
  }
  v38 = (void *)(v127[0] - 12);
  if ( (uint32_t *)(v127[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v127[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v38);
  }
  v39 = (void *)(v124[0] - 12);
  if ( (uint32_t *)(v124[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v124[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v39);
  }
  if ( dest[18] != 0 )
    glf::App::SetSupportedOrientations(v95, dest[18]);
  v107 = *(glf::PropertyMap::Self **)(glf::GetGlobals(v65) + 580);
  v112 = *(uint32_t *)(glf::GetGlobals(v66) + 576);
  *(uint32_t *)s = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v112 > 1 )
  {
    for ( i = 1; i != v112; ++i )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v143), *((char **)v107 + i), (int)(uintptr_t)(&v117) + 2);
      v42 = (uint8_t *)v143;
      if ( *(uint32_t *)(v143 - 12) == 0 )
        goto LABEL_70;
      if ( *(int *)(v143 - 4) >= 0 )
      {
        sub_19397C0(&v143);
        v42 = (uint8_t *)v143;
      }
      if ( *v42 == 45 )
      {
        if ( *((uint32_t *)v42 - 3) == 0 )
          sub_1900210("basic_string::substr");
        sub_193A6F0(&v137, &v143, (char *)&dword_0 + 1, -1);
        g4_std::string::assign_str(s, &v137);
        v43 = (void *)(v137 - 12);
        if ( (uint32_t *)(v137 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v137 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v43);
        }
        if ( glf::Stricmp(*(glf::Self **)s, "functionalTest", v74) == 0 )
          glf::FunctionalTest::SetEnabled((glf::FunctionalTest::Self *)((char *)&dword_0 + 1), v71);
      }
      else
      {
LABEL_70:
        if ( glf::Stricmp(*(glf::Self **)s, "startHomeMacro", v72) != 0 )
        {
          if ( glf::Stricmp(*(glf::Self **)s, "startDataMacro", v73) == 0 )
          {
            EventMgr = glf::GetEventMgr(v68);
            srch = (glf::Macro::Self *)opNew(0x148u);
            glf::Macro::Construct(srch, EventMgr, (int)(uintptr_t)(&v143), 1, 0);
            *(uint32_t *)(*((uint32_t *)v95 + 195) + 52) = (uint32_t)(uintptr_t)(srch);
          }
        }
        else
        {
          srcg = (void *)glf::GetEventMgr(v67);
          v86 = (glf::Macro::Self *)opNew(0x148u);
          glf::Macro::Construct(v86, (int)(uintptr_t)(srcg), (int)(uintptr_t)(&v143), 1, 4096);
          *(uint32_t *)(*((uint32_t *)v95 + 195) + 52) = (uint32_t)(uintptr_t)(v86);
        }
      }
      v41 = (void *)(v143 - 12);
      if ( (uint32_t *)(v143 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v143 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v41);
      }
    }
  }
  if ( *(uint32_t *)(*((uint32_t *)v95 + 195) + 52) != 0 )
  {
    glf::Macro::StartPlaying(*(glf::Macro::Self **)(*((uint32_t *)v95 + 195) + 52));
    v44 = *((uint32_t *)v95 + 195);
    nc = v44;
    v45 = *(uint32_t **)(v44 + 52);
    v46 = (uint32_t *)v45[80];
    if ( v46 == (uint32_t *)v45[81] )
    {
      v53 = ((int)(uintptr_t)(v46) - v45[79]) >> 3;
      v114 = 8;
      v108 = v53;
      if ( v53 != 0 )
      {
        v62 = 2 * v53;
        if ( v108 > v62 || v62 > 0x1FFFFFFF )
          v114 = -8;
        else
          v114 = 16 * v108;
      }
      srcb = (void *)v45[80];
      desta = (char *)opNew(v114);
      v54 = srcb;
      v55 = &desta[8 * v108];
      if ( v55 != nullptr )
      {
        *(uint32_t *)v55 = (uint32_t)(uintptr_t)(glf::ImplAppBase::EndOfAutoStartMacro);
        *((uint32_t *)v55 + 1) = nc;
      }
      ne = (uint8_t *)v45[79];
      v56 = 0;
      v57 = ((uint8_t *)srcb - ne) >> 3;
      if ( v57 != 0 )
      {
        v91 = 8 * v57;
        memmove(desta, ne, 8 * v57);
        v56 = v91;
        v54 = srcb;
      }
      v109 = (glf::PropertyMap::Self *)&desta[v56 + 8];
      v58 = 0;
      v59 = (v45[80] - (int)(uintptr_t)(v54)) >> 3;
      if ( v59 != 0 )
      {
        v92 = 8 * v59;
        memmove(v109, v54, 8 * v59);
        v58 = v92;
      }
      v60 = (void *)v45[79];
      v61 = (char *)v109 + v58;
      if ( v60 != nullptr )
      {
        v90 = (int)(uintptr_t)(v61);
        opDelete(v60);
        v61 = (char *)v90;
      }
      v45[80] = (uint32_t)(uintptr_t)(v61);
      v45[79] = (uint32_t)(uintptr_t)(desta);
      v45[81] = (uint32_t)(uintptr_t)(&desta[v114]);
    }
    else
    {
      v47 = 0;
      if ( v46 != nullptr )
      {
        v46[1] = v44;
        *v46 = (uint32_t)(uintptr_t)(glf::ImplAppBase::EndOfAutoStartMacro);
        v47 = v45[80];
      }
      v45[80] = v47 + 8;
    }
  }
  v48 = (void *)(*(uint32_t *)s - 12);
  if ( (uint32_t *)(*(uint32_t *)s - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)s - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v48);
  }
  v49 = (void *)(v122[0] - 12);
  if ( (uint32_t *)(v122[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v122[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v49);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Impl::IsScreenAutoRotating  (binary VA: 0xc71c30)
// Original: glf::App::Impl::IsScreenAutoRotating
// ----------------------------------------------------------------------------
int glf::App::Impl::IsScreenAutoRotating()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Impl::GetDeviceName  (binary VA: 0xc71c40)
// Original: glf::App::Impl::GetDeviceName
// ----------------------------------------------------------------------------
char * glf::App::Impl::GetDeviceName(glf::App::Impl::Self *self)
{
  return (char *)self + 56;
}

// ----------------------------------------------------------------------------
// Function: glf::App::Impl::Present  (binary VA: 0xc71d60)
// Original: glf::App::Impl::Present
// ----------------------------------------------------------------------------
int glf::App::Impl::Present(glf::App::Impl::Self *self)
{
  int CurrentSurface;

  if ( *((uint32_t *)self + 31) == 0 )
    *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(eglGetCurrentDisplay());
  CurrentSurface = (int)(uintptr_t)(eglGetCurrentSurface(12377));
  *((uint32_t *)self + 32) = CurrentSurface;
  return eglSwapBuffers((EGLDisplay)(uintptr_t)*((uint32_t *)self + 31), (EGLSurface)(uintptr_t)CurrentSurface);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Impl::Destroy  (binary VA: 0xc720c0)
// Original: glf::App::Impl::~Impl
// ----------------------------------------------------------------------------
void glf::App::Impl::Destroy(glf::App::Impl::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D4A8);
  v1 = *((uint32_t *)self + 13);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 13));
  glf::AppEventReceiver::Destroy((glf::App::Self **)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::App::Impl::Destroy_eac72170  (binary VA: 0xc72170)
// Original: glf::App::Impl::~Impl
// ----------------------------------------------------------------------------
void glf::App::Impl::Destroy_eac72170(glf::App::Impl::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D4A8);
  v1 = *((uint32_t *)self + 13);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 13));
  glf::AppEventReceiver::Destroy((glf::App::Self **)self + 2);
  opDelete(self);
}


