#include "Core/Utils/DecompTypes.h"
#include "glf_core.h"
#include <android/log.h>

extern "C" void g4_compat_vector_u8_fill_insert(void *vec_ptr, void *pos_ptr, size_t n, const uint8_t *val_ptr);

// ----------------------------------------------------------------------------
// Function: glf::Alloc  (binary VA: 0xc6c4a0)
// Original: glf::Alloc
// ----------------------------------------------------------------------------
void * glf::Alloc(size_t self)
{
  if ( glf::gFnMalloc[0] != 0 )
    return (void *)G4_MEM_CALL((uintptr_t)(glf::gFnMalloc[0]), self);
  else
    return malloc(self);
}

// ----------------------------------------------------------------------------
// Function: glf::Free  (binary VA: 0xc6c4e0)
// Original: glf::Free
// ----------------------------------------------------------------------------
void glf::Free(glf::Self *self)
{
  if ( glf::gFnFree[0] != 0 )
    ((void (**)(glf::Self *))glf::gFnFree)[0](self);
  else
    free(self);
}



// ============================================================================
// Address:   0xc6c520 (size: 36 bytes)
// Symbol:    _ZN3glf22SetAllocationFunctionsEPFPvjEPFvS0_E
// Demangled: glf::SetAllocationFunctions(void * (*)(unsigned int),void (*)(void *))
// ============================================================================
void (**glf::SetAllocationFunctions(glf::Self *self, void *(*a2)(unsigned int)))(uint32_t)
{
  glf::gFnMalloc[0] = (uintptr_t)(uintptr_t)((int (*)(uint32_t))self);
  glf::gFnFree[0] = (uintptr_t)(uintptr_t)((void (*)(uint32_t))a2);
  return (void (**)(uint32_t))(uintptr_t)(glf::gFnFree);
}
// ----------------------------------------------------------------------------
// Function: glf::BeginProfilerEvent  (binary VA: 0xc6c5b0)
// Original: glf::BeginProfilerEvent
// ----------------------------------------------------------------------------
int glf::BeginProfilerEvent(glf::Self *self)
{
  int result;
  int Globals;
  glf::Self *v3;
  glf::Self *v4;
  glf::Self *v5;

  result = glf::GetGlobals(v3);
  if ( result != 0 )
  {
    result = *(uint32_t *)(glf::GetGlobals(v4) + 572);
    if ( result != 0 )
    {
      Globals = glf::GetGlobals(v5);
      return (*(int (**)(uint32_t, glf::Self *))(**(uint32_t **)(Globals + 572) + 48))(*(uint32_t *)(Globals + 572), self);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::EndProfilerEvent  (binary VA: 0xc6c600)
// Original: glf::EndProfilerEvent
// ----------------------------------------------------------------------------
int glf::EndProfilerEvent()
{
  int result;
  int Globals;
  glf::Self *v2;
  glf::Self *v3;
  glf::Self *v4;

  result = glf::GetGlobals(v2);
  if ( result != 0 )
  {
    result = glf::GetGlobals(v3);
    if ( *(uint32_t *)(result + 572) != 0 )
    {
      Globals = glf::GetGlobals(v4);
      return (*(int (**)(uint32_t))(**(uint32_t **)(Globals + 572) + 52))(*(uint32_t *)(Globals + 572));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::GetInputMgr  (binary VA: 0xc6c650)
// Original: glf::GetInputMgr
// ----------------------------------------------------------------------------
int glf::GetInputMgr()
{
  glf::Self *v1;

  return glf::GetGlobals(v1) + 384;
}

// ----------------------------------------------------------------------------
// Function: glf::GetEventMgr  (binary VA: 0xc6c670)
// Original: glf::GetEventMgr
// ----------------------------------------------------------------------------
int glf::GetEventMgr()
{
  glf::Self *v1;

  return glf::GetGlobals(v1) + 424;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidOnExitThread  (binary VA: 0xc6c8e0)
// Original: glf::AndroidOnExitThread
// ----------------------------------------------------------------------------
int glf::AndroidOnExitThread()
{
  int result;
  glf::Thread::Self *v1;

  result = glf::Thread::sIsMain(v1);
  if ( (uint8_t)result == 0 )
    return G4_VCALL<int>(dword_20DEC20, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidOnStartThread  (binary VA: 0xc6c910)
// Original: glf::AndroidOnStartThread
// ----------------------------------------------------------------------------
int glf::AndroidOnStartThread()
{
  int result;
  glf::Thread::Self *Current;
  int Priority;
  typedef glf::Thread::Self *_g4_t_v3;
  typedef glf::Thread::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v5)) > _g4_s2 ? (28u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  result = glf::Thread::sIsMain(v3);
  if ( (uint8_t)result == 0 )
  {
    G4_VCALL<void>(dword_20DEC20, 24, v5, 0x10004);
    v4 = (glf::Thread::Self *)dword_20DEC20;
    G4_VCALL<void>(dword_20DEC20, 16, v5, 0);
    Current = (glf::Thread::Self *)glf::Thread::GetCurrent(v4);
    Priority = glf::Thread::GetPriority(Current);
    return glf::Thread::SetPriority(Current, Priority);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::hashstring  (binary VA: 0xc6c990)
// Original: glf::hashstring
// ----------------------------------------------------------------------------
int glf::hashstring(glf::Self *self)
{
  int result;
  int v2;
  char *v3;

  result = 5381;
  v2 = *(char *)self;
  if ( *(uint8_t *)self != 0 )
  {
    v3 = (char *)self + 1;
    do
    {
      result += 32 * result + v2;
      v2 = *v3++;
    }
    while ( v2 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidGetJavaVM  (binary VA: 0xc6d490)
// Original: glf::AndroidGetJavaVM
// ----------------------------------------------------------------------------
int glf::AndroidGetJavaVM()
{
  return dword_20DEC20;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidSetupPaths  (binary VA: 0xc6d4b0)
// Original: glf::AndroidSetupPaths
// ----------------------------------------------------------------------------
int glf::AndroidSetupPaths()
{
  void *CurrentJNIEnv;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  return sub_4BFF00((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC2C);
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidCreateView  (binary VA: 0xc6d4f0)
// Original: glf::AndroidCreateView
// ----------------------------------------------------------------------------
int glf::AndroidCreateView()
{
  void *CurrentJNIEnv;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  return sub_4BFF00((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC30);
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidSetViewSettings  (binary VA: 0xc6d530)
// Original: glf::AndroidSetViewSettings
// ----------------------------------------------------------------------------
int glf::AndroidSetViewSettings(glf::Self *self, int a2, int a3, int a4, int a5)
{
  void *CurrentJNIEnv;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  return sub_4BFF00((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC34, self, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidSetCurrentContext  (binary VA: 0xc6d590)
// Original: glf::AndroidSetCurrentContext
// ----------------------------------------------------------------------------
bool glf::AndroidSetCurrentContext(glf::Self *self)
{
  void *CurrentJNIEnv;
  uint8_t ok;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  ok = (uint8_t)sub_4BFED0((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC38, self);
  if ( G4_VCALL<uint8_t>(CurrentJNIEnv, 912) != 0 )
  {
    G4_VCALL<void>(CurrentJNIEnv, 68);
    return false;
  }
  return ok != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidEnableAccelerometer  (binary VA: 0xc6d5e0)
// Original: glf::AndroidEnableAccelerometer
// ----------------------------------------------------------------------------
int glf::AndroidEnableAccelerometer(glf::Self *self, float a2)
{
  void *CurrentJNIEnv;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  return sub_4BFF00((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC3C, (uint8_t)(uintptr_t)self, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidInit  (binary VA: 0xc6d9f0)
// Original: glf::AndroidInit
// ----------------------------------------------------------------------------
int glf::AndroidInit()
{
  const char *v1;

  glf::Console::Println((glf::Console::Self *)"AndroidCreateView", v1);
  return glf::AndroidCreateView();
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidStateChanged  (binary VA: 0xc6dc80)
// Original: glf::AndroidStateChanged
// ----------------------------------------------------------------------------
int glf::AndroidStateChanged(glf::Self *self)
{
  int result;
  glf::EventManager::Self *EventMgr;
  int v3[5];

  result = glf::gAppImpl;
  if ( glf::gAppImpl != 0 )
  {
    v3[0] = 101;
    v3[1] = 5 - ((uint8_t)(uintptr_t)self == 0);
    EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
    return glf::EventManager::SendEvent(EventMgr, (int)(uintptr_t)(v3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidResizeScreen  (binary VA: 0xc6dd10)
// Original: glf::AndroidResizeScreen
// ----------------------------------------------------------------------------
int glf::AndroidResizeScreen(glf::Self *self, int a2)
{
  int v2;
  int result;
  glf::Thread::Self *v4;

  if ( byte_20DEC9C == 0 )
  {
    v2 = glf::gAppImpl;
    if ( glf::gAppImpl != 0 )
    {
      *(uint32_t *)(*(uint32_t *)(glf::gAppImpl + 4) + 116) = (uint32_t)(uintptr_t)(self);
      *(uint32_t *)(*(uint32_t *)(v2 + 4) + 120) = a2;
    }
    byte_20DEC9C = 1;
    (&dword_20DEC60)[glf::Thread::GetSequentialThreadId(v4)] = 0;
  }
  result = glf::gAppImpl;
  if ( glf::gAppImpl != 0 )
  {
    *(uint32_t *)(*(uint32_t *)(glf::gAppImpl + 4) + 44) = (uint32_t)(uintptr_t)(self);
    result = *(uint32_t *)(result + 4);
    *(uint32_t *)(result + 48) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidUpdate  (binary VA: 0xc6ddd0)
// Original: glf::AndroidUpdate
// ----------------------------------------------------------------------------
int glf::AndroidUpdate()
{
  int result;

  result = glf::gApp;
  if ( glf::gApp != 0 )
  {
    uintptr_t vt = *(uintptr_t *)(glf::gApp);
    uintptr_t slot40 = vt ? *(uintptr_t *)(vt + 40) : 0;
    if ( slot40 == 0 )
    {
      __android_log_print(ANDROID_LOG_ERROR, "Gangstar4Native",
        "AndroidUpdate NULL slot40: gApp=%p vt=%p (&off_206AA08=%p off_206AA08[10]=%p)",
        (void *)(uintptr_t)glf::gApp, (void *)vt, (void *)&off_206AA08,
        (void *)(uintptr_t)(*((uint32_t *)&off_206AA08 + 10)));
    }
    return (*(int (**)(uint32_t))(vt + 40))(glf::gApp);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidOnKeyUp  (binary VA: 0xc6de20)
// Original: glf::AndroidOnKeyUp
// ----------------------------------------------------------------------------
int glf::AndroidOnKeyUp(glf::Self *self)
{
  glf::InputManager::Self *InputMgr;
  glf::Keyboard::Self *Keyboard;

  InputMgr = (glf::InputManager::Self *)glf::GetInputMgr();
  Keyboard = (glf::Keyboard::Self *)glf::InputManager::GetKeyboard(InputMgr, 0);
  return glf::Keyboard::RaiseButtonEvent(Keyboard, (int)(uintptr_t)(self), false, (int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidOnKeyDown  (binary VA: 0xc6de80)
// Original: glf::AndroidOnKeyDown
// ----------------------------------------------------------------------------
int glf::AndroidOnKeyDown(glf::Self *self)
{
  glf::InputManager::Self *InputMgr;
  glf::Keyboard::Self *Keyboard;

  InputMgr = (glf::InputManager::Self *)glf::GetInputMgr();
  Keyboard = (glf::Keyboard::Self *)glf::InputManager::GetKeyboard(InputMgr, 0);
  return glf::Keyboard::RaiseButtonEvent(Keyboard, (int)(uintptr_t)(self), true, (int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidOrientationChanged  (binary VA: 0xc6dee0)
// Original: glf::AndroidOrientationChanged
// ----------------------------------------------------------------------------
char glf::AndroidOrientationChanged(glf::Self *self)
{
  int v1;
  int v2;
  glf::EventManager::Self *EventMgr;
  int v5[5];

  v1 = 3;
  v2 = 3;
  if ( (unsigned int)(uintptr_t)(self) - 45 > 0x59 )
  {
    LOWORD(v2) = 1;
    LOBYTE(v1) = 1;
    if ( (unsigned int)(uintptr_t)(self) - 135 > 0x59 )
    {
      v2 = (unsigned int)(uintptr_t)(self) - 225 < 0x5A ? 2 : 0;
      v1 = v2;
    }
  }
  if ( glf::gAppImpl != 0 && v2 != dword_20C1B50 )
  {
    v5[0] = 100;
    v5[1] = v1;
    EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
    LOBYTE(v1) = glf::EventManager::SendEvent(EventMgr, (int)(uintptr_t)(v5));
    dword_20C1B50 = v2;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidSetNumExtraContext  (binary VA: 0xc6dfb0)
// Original: glf::AndroidSetNumExtraContext
// ----------------------------------------------------------------------------
int glf::AndroidSetNumExtraContext(glf::Self *self)
{
  int result;

  result = *(uint32_t *)(glf::gAppImpl + 4);
  *(uint32_t *)(result + 168) = (uint32_t)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidAddTouchEvent  (binary VA: 0xc6e670)
// Original: glf::AndroidAddTouchEvent
// ----------------------------------------------------------------------------
int glf::AndroidAddTouchEvent(glf::Self *self, int a2, int a3, int a4)
{
  int result;
  glf::InputManager::Self *v5;
  int v6;
  glf::InputManager::Self *v7;
  int v8;
  glf::InputManager::Self *InputMgr;
  int Gamepad;

  result = glf::App::GetInstance();
  if ( result != 0 )
  {
    if ( self == (glf::Self *)((char *)&dword_0 + 1) )
    {
      InputMgr = (glf::InputManager::Self *)glf::GetInputMgr();
      Gamepad = glf::InputManager::GetGamepad(InputMgr, 0);
      return glf::Gamepad::RaiseTouchEvent(Gamepad, 0, 216, a4, (float)a2, (float)a3, 1);
    }
    else if ( self == (glf::Self *)((char *)&dword_0 + 2) )
    {
      v7 = (glf::InputManager::Self *)glf::GetInputMgr();
      v8 = glf::InputManager::GetGamepad(v7, 0);
      return glf::Gamepad::RaiseTouchEvent(v8, 0, 217, a4, (float)a2, (float)a3, 1);
    }
    else if ( self == nullptr )
    {
      v5 = (glf::InputManager::Self *)glf::GetInputMgr();
      v6 = glf::InputManager::GetGamepad(v5, 0);
      return glf::Gamepad::RaiseTouchEvent(v6, 0, 218, a4, (float)a2, (float)a3, 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::UpdateKeyboard  (binary VA: 0xc6ede0)
// Original: glf::UpdateKeyboard
// ----------------------------------------------------------------------------
uint8_t * glf::UpdateKeyboard(glf::Self *self)
{
  uint8_t *result;
  glf::App::Self *Instance;
  glf::InputManager::Self *InputMgr;
  int Keyboard;

  if ( (uint8_t)(uintptr_t)(self) != 0 && glf::isShowingKB[0] == 0 )
  {
    glf::isShowingKB[0] = 1;
    glf::isFinishedUsingKB = 0;
    return (uint8_t *)AndroidOS_showKeyboard(1, (int)(uintptr_t)(&unk_1B15112), 100, 0, 0, 0, 0);
  }
  else
  {
    result = (uint8_t *)(&glf::isFinishedUsingKB);
    if ( glf::isFinishedUsingKB != 0 )
    {
      Instance = (glf::App::Self *)glf::App::GetInstance();
      InputMgr = (glf::InputManager::Self *)glf::App::GetInputMgr(Instance);
      Keyboard = glf::InputManager::GetKeyboard(InputMgr, 0);
      *(uint8_t *)(Keyboard + 904) = 0;
      sub_194E130(Keyboard + 908, 0, *(uint32_t *)(*(uint32_t *)(Keyboard + 908) - 12), 0);
      AndroidOS_showKeyboard(0, (int)(uintptr_t)(&unk_1B15112), 0, 0, 0, 0, 0);
      result = (uint8_t *)(glf::isShowingKB);
      glf::isShowingKB[0] = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidSetPaths  (binary VA: 0xc6ef10)
// Original: glf::AndroidSetPaths
// ----------------------------------------------------------------------------
void glf::AndroidSetPaths(glf::Self *self, char *a2, char *a3)
{
  glf::Fs::Self *Fs;
  glf::Fs::Self *v4;
  glf::Fs::Self *v5;
  glf::Fs::Self *v6;
  typedef const glf::fs2::Path::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[2];
  typedef int _g4_t_v10[2];
  typedef int _g4_t_v11[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (21u + sizeof(_g4_t_v8)) > _g4_s1 ? (21u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 21u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);

  Fs = (glf::Fs::Self *)glf::App::GetFs(glf::gApp);
  glf::Fs::SetDataDir(Fs, (const char *)self);
  v4 = (glf::Fs::Self *)glf::App::GetFs(glf::gApp);
  glf::Fs::SetHomeDir(v4, a2);
  v5 = (glf::Fs::Self *)glf::App::GetFs(glf::gApp);
  glf::Fs::SetTempDir(v5, a3);
  v6 = (glf::Fs::Self *)glf::App::GetFs(glf::gApp);
  glf::Fs::SetCachesDir(v6, a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), a3, (int)(uintptr_t)(&v8));
  v11[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), a2, (int)(uintptr_t)(&v8) + 1);
  v10[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), (char *)self, (int)(uintptr_t)(&v8) + 2);
  v9[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v9);
  glf::fs2::android::SetPaths((glf::fs2::android::Self *)v9, (const glf::fs2::Path::Self *)v10, (const glf::fs2::Path::Self *)v11, v7);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v9);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v10);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v11);
}

// ----------------------------------------------------------------------------
// Function: glf::GetGlobals  (binary VA: 0xc6f7c0)
// Original: glf::GetGlobals
// ----------------------------------------------------------------------------
int glf::GetGlobals()
{
  return glf::gGlobals;
}

// ----------------------------------------------------------------------------
// Function: glf::InitGlobals  (binary VA: 0xc714e0)
// Original: glf::InitGlobals
// ----------------------------------------------------------------------------
void glf::InitGlobals(glf::Self *self, int a2)
{
  uint32_t *v2;

  if ( glf::gGlobals == 0 )
  {
    v2 = (uint32_t *)opNew(0x250u);
    *v2 = ((uint32_t)(uintptr_t)&off_206D500);
    glf::PropertyMap::Construct((glf::PropertyMap::Self *)(v2 + 1));
    glf::DebugDisplay::Construct((glf::DebugDisplay::Self *)(v2 + 9));
    glf::Fs::Construct((glf::Fs::Self *)(v2 + 16));
    glf::InputManager::Construct((glf::InputManager::Self *)(v2 + 96));
    glf::EventManager::Construct((glf::EventManager::Self *)(v2 + 106));
    glf::FileLogger::Construct((glf::FileLogger::Self *)(v2 + 139));
    v2[144] = 0;
    glf::SpinLock::Construct((glf::SpinLock::Self *)(v2 + 146));
    v2[147] = (uint32_t)(uintptr_t)(((char *)stdout));
    *v2 = ((uint32_t)(uintptr_t)&off_206D520);
    v2[144] = (uint32_t)(uintptr_t)(self);
    glf::gGlobals = (uintptr_t)(uintptr_t)(v2);
    v2[145] = a2;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::init  (binary VA: 0xc715d0)
// Original: glf::init
// ----------------------------------------------------------------------------
void glf::init(glf::Self *self, int a2)
{
  glf::InitGlobals(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::Init  (binary VA: 0xc71600)
// Original: glf::Init
// ----------------------------------------------------------------------------
void glf::Init()
{
  glf::init(nullptr, 0);
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidGetViewSettings  (binary VA: 0xc71630)
// Original: glf::AndroidGetViewSettings
// ----------------------------------------------------------------------------
int glf::AndroidGetViewSettings()
{
  int result;
  int v1;
  int CreationSettings;
  unsigned int v3;
  typedef glf::Self *_g4_t_v4;
  typedef glf::Self *_g4_t_v5;
  typedef char *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef char _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v5)) > _g4_s1 ? (0u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v8)) > _g4_s4 ? (20u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v9)) > _g4_s5 ? (44u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  result = glf::gApp;
  if ( glf::gApp == 0 )
  {
    glf::Init(v4);
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(&unk_1B15112);
    glf::Console::Println((glf::Console::Self *)"NewApp", v6);
    glf::gApp = (uintptr_t)(uintptr_t)(sub_B9E6B0(0, v9));
    glf::AndroidSetupPaths(v5);
    dword_20DEC60 = -1;
    dword_20DEC64 = -1;
    dword_20DEC68 = -1;
    dword_20DEC6C = -1;
    dword_20DEC70 = -1;
    dword_20DEC74 = -1;
    dword_20DEC78 = -1;
    dword_20DEC7C = -1;
    dword_20DEC80 = -1;
    dword_20DEC84 = -1;
    dword_20DEC88 = -1;
    dword_20DEC8C = -1;
    dword_20DEC90 = -1;
    dword_20DEC94 = -1;
    dword_20DEC98 = -1;
    if ( (uint8_t)glf::App::MyInit(glf::gApp) != 0 )
    {
      glf::Console::Println((glf::Console::Self *)"MyInit succeeded", v7);
      v1 = 4;
      CreationSettings = (int)(uintptr_t)(glf::App::GetCreationSettings(glf::gApp));
      v3 = *(uint32_t *)(CreationSettings + 48);
      if ( v3 <= 3 )
        v1 = dword_1CA5EA8[v3];
      glf::Console::Println(
        (glf::Console::Self *)"AndroidSetViewSettings(pixelSize: %d, zBufferSize: %d, stencilBufferSize: %d, CSAA: %d)",
        (const char *)*(uint8_t *)(CreationSettings + 44),
        *(uint8_t *)(CreationSettings + 45),
        *(uint8_t *)(CreationSettings + 19) == 0 ? 0 : 8,
        v1);
      return glf::AndroidSetViewSettings(
               (glf::Self *)*(uint8_t *)(CreationSettings + 44),
               *(uint8_t *)(CreationSettings + 45),
               *(uint8_t *)(CreationSettings + 19) != 0 ? 8 : 0,
               v1,
               *(uint8_t *)(CreationSettings + 64));
    }
    else
    {
      return ((glf::Console::Println((glf::Console::Self *)"MyInit failed", v7)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Deinit  (binary VA: 0xc718c0)
// Original: glf::Deinit
// ----------------------------------------------------------------------------
int glf::Deinit()
{
  int result;

  result = glf::gGlobals;
  if ( glf::gGlobals != 0 )
  {
    result = (*(int (**)(uint32_t))(*(uintptr_t *)(glf::gGlobals) + 4))(glf::gGlobals);
    glf::gGlobals = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidDestroy  (binary VA: 0xc71900)
// Original: glf::AndroidDestroy
// ----------------------------------------------------------------------------
int glf::AndroidDestroy()
{
  int result;

  result = glf::gApp;
  if ( glf::gApp != 0 )
  {
    (*(void (**)(uint32_t))(*(uintptr_t *)(glf::gApp) + 36))(glf::gApp);
    glf::gApp = 0;
    return glf::Deinit();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ExitProcess  (binary VA: 0xc71970)
// Original: glf::ExitProcess
// ----------------------------------------------------------------------------
void glf::ExitProcess()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::MyNsLog  (binary VA: 0xc71980)
// Original: glf::MyNsLog
// ----------------------------------------------------------------------------
void glf::MyNsLog()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidGetResource  (binary VA: 0xc71990)
// Original: glf::AndroidGetResource
// ----------------------------------------------------------------------------
int glf::AndroidGetResource(glf::Self *self, const char *a2)
{
  void *CurrentJNIEnv;
  int v3;
  char v4;
  int v5;
  int v6;
  unsigned int v7;
  typedef uint8_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v12)) > _g4_s3 ? (31u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  v11 = G4_VCALL<int>(CurrentJNIEnv, 668, self);
  v3 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC24, v11);
  v4 = 0;
  if ( v3 != 0 )
  {
    v5 = G4_VCALL<int>(CurrentJNIEnv, 684, v3);
    v6 = *(uint32_t *)a2;
    LOBYTE(v12[0]) = 0;
    v7 = *((uint32_t *)a2 + 1) - v6;
    if ( v5 > v7 )
    {
      v10 = v5;
      g4_compat_vector_u8_fill_insert(
          const_cast<char *>(a2),
          *((void **)a2 + 1),
          static_cast<size_t>(v5 - (*((uint32_t *)a2 + 1) - v6)),
          reinterpret_cast<const uint8_t *>(v12));
      v5 = v10;
      if ( v10 <= 0 )
        goto LABEL_7;
    }
    else
    {
      if ( v5 < v7 )
        *((uint32_t *)a2 + 1) = v5 + v6;
      if ( v5 <= 0 )
        goto LABEL_7;
    }
    G4_VCALL<void>(CurrentJNIEnv, 800, v3, 0, v5, *(uint32_t *)a2);
LABEL_7:
    G4_VCALL<void>(CurrentJNIEnv, 92, v3);
    v4 = 1;
  }
  v9 = v4;
  G4_VCALL<void>(CurrentJNIEnv, 92, v11);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glf::SetAssertLevelBehavior  (binary VA: 0xc72370)
// Original: glf::SetAssertLevelBehavior
// ----------------------------------------------------------------------------
uint32_t * glf::SetAssertLevelBehavior(int a1, int a2)
{
  glf::gAssertLevelEnabled[a1] = a2;
  return (uint32_t *)(glf::gAssertLevelEnabled);
}

// ----------------------------------------------------------------------------
// Function: glf::AddAssertLevelBehavior  (binary VA: 0xc72390)
// Original: glf::AddAssertLevelBehavior
// ----------------------------------------------------------------------------
uint32_t * glf::AddAssertLevelBehavior(int a1, int a2)
{
  glf::gAssertLevelEnabled[a1] |= a2;
  return (uint32_t *)(glf::gAssertLevelEnabled);
}

// ----------------------------------------------------------------------------
// Function: glf::RemoveAssertLevelBehavior  (binary VA: 0xc723b0)
// Original: glf::RemoveAssertLevelBehavior
// ----------------------------------------------------------------------------
int glf::RemoveAssertLevelBehavior(int a1, int a2)
{
  glf::gAssertLevelEnabled[a1] &= ~a2;
  return ~a2;
}

// ----------------------------------------------------------------------------
// Function: glf::GetAssertLevelBehavior  (binary VA: 0xc723e0)
// Original: glf::GetAssertLevelBehavior
// ----------------------------------------------------------------------------
int glf::GetAssertLevelBehavior(int a1)
{
  return glf::gAssertLevelEnabled[a1];
}

// ----------------------------------------------------------------------------
// Function: glf::EnableAssertLevel  (binary VA: 0xc72400)
// Original: glf::EnableAssertLevel
// ----------------------------------------------------------------------------
uint32_t * glf::EnableAssertLevel(int a1, char a2)
{
  if ( a2 != 0 )
    return glf::AddAssertLevelBehavior(a1, 1);
  else
    return (uint32_t *)glf::RemoveAssertLevelBehavior(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: glf::IsAssertLevelEnabled  (binary VA: 0xc72450)
// Original: glf::IsAssertLevelEnabled
// ----------------------------------------------------------------------------
int glf::IsAssertLevelEnabled(int a1)
{
  return glf::GetAssertLevelBehavior(a1) & 1;
}

// ----------------------------------------------------------------------------
// Function: glf::AssertLog  (binary VA: 0xc72480)
// Original: glf::AssertLog
// ----------------------------------------------------------------------------
int glf::AssertLog(int a1, char *a2, ...)
{
  int result;
  int v3;
  va_list __varargs;

  va_start(__varargs, a2);
  result = glf::GetAssertLevelBehavior(a1);
  if ( (result & 2) != 0 )
  {
    v3 = 1;
    if ( a1 != 0 )
      v3 = (a1 != 1) + 2;
    int r = glf::VLog("assert", v3, a2, __varargs);
    va_end(__varargs);
    return r;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::GlobalAssertDeprecateMessage  (binary VA: 0xc72500)
// Original: glf::GlobalAssertDeprecateMessage
// ----------------------------------------------------------------------------
void glf::GlobalAssertDeprecateMessage()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::SetGlobalAssertBehavior  (binary VA: 0xc72510)
// Original: glf::SetGlobalAssertBehavior
// ----------------------------------------------------------------------------
uint32_t * glf::SetGlobalAssertBehavior(glf::Self *self)
{
  glf::GlobalAssertDeprecateMessage();
  glf::gGlobalAssertBehavior = (uintptr_t)(uintptr_t)(self);
  return (uint32_t *)(&glf::gGlobalAssertBehavior);
}

// ----------------------------------------------------------------------------
// Function: glf::GetGlobalAssertBehavior  (binary VA: 0xc72540)
// Original: glf::GetGlobalAssertBehavior
// ----------------------------------------------------------------------------
int glf::GetGlobalAssertBehavior()
{
  glf::GlobalAssertDeprecateMessage();
  return glf::gGlobalAssertBehavior;
}

// ----------------------------------------------------------------------------
// Function: glf::SetIsAssertEnabled  (binary VA: 0xc72570)
// Original: glf::SetIsAssertEnabled
// ----------------------------------------------------------------------------
uint32_t * glf::SetIsAssertEnabled()
{
  int GlobalAssertBehavior;

  GlobalAssertBehavior = glf::GetGlobalAssertBehavior();
  return glf::SetGlobalAssertBehavior((glf::Self *)(GlobalAssertBehavior | 1));
}

// ----------------------------------------------------------------------------
// Function: glf::IsAssertEnabled  (binary VA: 0xc725a0)
// Original: glf::IsAssertEnabled
// ----------------------------------------------------------------------------
int glf::IsAssertEnabled()
{
  return glf::GetGlobalAssertBehavior() & 1;
}

// ----------------------------------------------------------------------------
// Function: glf::VAssert  (binary VA: 0xc725c0)
// Original: glf::VAssert
// ----------------------------------------------------------------------------
int glf::VAssert(int a1, int a2, int a3, char *format, __gnuc_va_list __varargs)
{
  void *s;
  int v6;
  unsigned int v8;
  unsigned int v9;
  int v10;
  size_t v11;
  unsigned int v12;
  int v13;
  size_t n;
  size_t maxlen;
  size_t maxlena;
  void *dest;
  int v18;

  s = (void *)opNew(0x800u);
  maxlen = 2048;
  memset(s, 0, 0x800u);
  if ( (unsigned int)vsnprintf((char *)s, 0x800u, format, __varargs) > 0x800 )
  {
    v8 = vsnprintf(nullptr, 0, format, __varargs);
    if ( v8 > 0x800 )
    {
      v9 = v8 - 2048;
      v10 = 2048;
      v11 = 0xFFFFFFFF;
      if ( v9 >= 0x800 )
        v10 = v9;
      v12 = v10 + 2048;
      if ( v12 >= 0x800 )
        v11 = v12;
      n = v9;
      v13 = opNew(v11);
      dest = (void *)v13;
      v18 = v13;
      maxlena = v13 + 2048 + n;
      memset((void *)(v13 + 2048), 0, n);
      memmove(dest, s, 0x800u);
      if ( s != nullptr )
        opDelete(s);
      maxlen = maxlena - v18;
      s = dest;
    }
    else if ( v8 < 0x800 )
    {
      maxlen = v8;
    }
    vsnprintf((char *)s, maxlen, format, __varargs);
  }
  v6 = glf::AssertInner(a1, a2, a3, s);
  if ( s != nullptr )
    opDelete(s);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glf::Assert  (binary VA: 0xc727a0)
// Original: glf::Assert
// ----------------------------------------------------------------------------
int glf::Assert(int a1, int a2, int a3, char *format, ...)
{
  va_list va;

  va_start(va, format);
  return glf::VAssert(a1, a2, a3, format, va);
}

// ----------------------------------------------------------------------------
// Function: glf::Assert  (binary VA: 0xc727f0)
// Original: glf::Assert
// ----------------------------------------------------------------------------
int glf::Assert(glf::Self *self, const char *a2, char *format, ...)
{
  va_list va;
  va_start(va, format);
  int r = glf::VAssert(2, (int)(uintptr_t)(self), (int)(uintptr_t)(a2), format, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: glf::ReadFileFully  (binary VA: 0xc73480)
// Original: glf::ReadFileFully
// ----------------------------------------------------------------------------
int glf::ReadFileFully(char *a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, void (**a16)(glf::basic_fstream<char, std::char_traits<char>> *__hidden self), int a17, void (**a18)(glf::basic_fstream<char, std::char_traits<char>> *__hidden self), void (**a19)(glf::basic_filebuf<char, std::char_traits<char>> *__hidden self), int a20, int a21, int a22, int a23, int a24, int a25, int a26)
{
  uint8_t STACK[934] = {0};
  char *Dir;
  const glf::fs2::Path::Self *v27;
  char *v28;
  size_t v29;
  char *v30;
  int v31;
  char *v32;
  size_t v33;
  char *v34;
  volatile int32_t *v35;
  int v36;
  volatile int32_t *v37;
  int v38;
  uint32_t *v40;
  int v41;
  uint32_t *v42;
  int v43;
  size_t Size;
  char *v45;
  int v46;
  char *v47;
  size_t v48;
  char *v49;
  char *v61;
  char *v62;
  typedef glf::fs2::Self *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[8];
  typedef uint32_t _g4_t_v55[2];
  typedef uint32_t _g4_t_v56[2];
  typedef uint8_t _g4_t_v57[8];
  typedef uint32_t _g4_t_v58[10];
  typedef uint32_t _g4_t_v59[67];
  typedef void (**_g4_t_v60)(glf::basic_fstream<char, std::char_traits<char>> *);
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v50)) > _g4_s0 ? (0u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v51)) > _g4_s1 ? (24u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v52)) > _g4_s2 ? (28u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v53)) > _g4_s3 ? (46u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v54)) > _g4_s4 ? (48u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v55)) > _g4_s5 ? (56u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v56)) > _g4_s6 ? (64u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v57)) > _g4_s7 ? (72u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v58)) > _g4_s8 ? (80u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (120u + sizeof(_g4_t_v59)) > _g4_s9 ? (120u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (388u + sizeof(_g4_t_v60)) > _g4_s10 ? (388u + sizeof(_g4_t_v60)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 46u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 388u);

  if ( (uint8_t)glf::fs2::IsInit(v50) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v56), a1, (int)(uintptr_t)(&v53));
    v56[1] = 0;
    glf::fs2::Path::Init((glf::fs2::Path::Self *)v56);
    Dir = (char *)glf::Fs::GetDir(glf::Fs::sFs, a2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v55), Dir, (int)(uintptr_t)(&v53) + 1);
    v55[1] = 0;
    glf::fs2::Path::Init((glf::fs2::Path::Self *)v55);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v57, (const glf::fs2::Path::Self *)v55);
    v27 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v57, (const glf::fs2::Path::Self *)v56);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v54, v27);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v57);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v55);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v56);
    v28 = (char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)v54);
    sub_C73010((int)(uintptr_t)(v58), v28, 24);
    if ( v59[66] != 0 )
    {
      if ( G4_VCALL<uint8_t>(v59[66], 84) != 0 )
      {
        v29 = G4_VCALL<int>(v59[66], 80);
        v30 = nullptr;
        v31 = 0;
        if ( v29 != 0 )
        {
          v31 = opNew(v29);
          v30 = (char *)v31;
        }
        v32 = &v30[v29];
        v33 = (size_t)&v30[v29 - v31];
        v61 = v30;
        v62 = v32;
        memset(v30, 0, v33);
        v34 = v61;
        if ( v61 != v62 )
        {
          sub_1913BC0(v58, v61, v33);
          sub_192C9E0(v62 + 8, v61, v33);
          v34 = v61;
        }
        if ( v34 != nullptr )
          opDelete(v34);
        v35 = (volatile int32_t *)STACK[0x362];
        a16 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D6EC));
        a18 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D700));
        STACK[0x366] = (unsigned int)((uint32_t)(uintptr_t)&off_206D714);
        a19 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
        if ( v35 != nullptr )
        {
          if ( __sync_fetch_and_add(v35 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v35, 8);
            G4_VCALL<void>(v35, 16);
          }
          else
          {
            v36 = *((uint32_t *)v35 + 1);
            _mm_mfence();
            if ( v36 == 1 )
              G4_VCALL<void>(v35, 12);
          }
        }
        v37 = (volatile int32_t *)STACK[0x35E];
        if ( STACK[0x35E] != 0 )
        {
          if ( __sync_fetch_and_add(v37 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v37, 8);
            G4_VCALL<void>(v37, 16);
          }
          else
          {
            v38 = *((uint32_t *)v37 + 1);
            _mm_mfence();
            if ( v38 == 1 )
              G4_VCALL<void>(v37, 12);
          }
        }
        a19 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
        sub_1902180(&a26);
        a17 = 0;
        a18 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))&off_206D80C;
        a16 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))&off_206D7CC;
        STACK[0x366] = (unsigned int)(uintptr_t)(&off_20AA2C0);
        sub_1900B90(&STACK[0x366]);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&a8);
        return v33;
      }
      v40 = (uint32_t *)v59[66];
      v58[0] = ((uint32_t)(uintptr_t)&off_206D6EC);
      v58[2] = ((uint32_t)(uintptr_t)&off_206D700);
      v60 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D714));
      v58[3] = ((uint32_t)(uintptr_t)&off_206D728);
      if ( v59[66] != 0 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)(v59[66] + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v40, 8);
          G4_VCALL<void>(v40, 16);
        }
        else
        {
          v41 = v40[1];
          _mm_mfence();
          if ( v41 == 1 )
            G4_VCALL<void>(v40, 12);
        }
      }
    }
    else
    {
      v58[0] = ((uint32_t)(uintptr_t)&off_206D6EC);
      v58[2] = ((uint32_t)(uintptr_t)&off_206D700);
      v60 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D714));
      v58[3] = ((uint32_t)(uintptr_t)&off_206D728);
    }
    v42 = (uint32_t *)v59[65];
    if ( v59[65] != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v59[65] + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v42, 8);
        G4_VCALL<void>(v42, 16);
      }
      else
      {
        v43 = v42[1];
        _mm_mfence();
        if ( v43 == 1 )
          G4_VCALL<void>(v42, 12);
      }
    }
    v58[3] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v59);
    v58[1] = 0;
    v58[2] = (uint32_t)(uintptr_t)(&off_206D80C);
    v58[0] = (uint32_t)(uintptr_t)(&off_206D7CC);
    v60 = (void (**)(glf::basic_fstream<char, std::char_traits<char>> *))&off_20AA2C0;
    sub_1900B90(&v60);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v54);
    return -1;
  }
  else
  {
    glf::FileStreamImpl::Construct((glf::IOStream::Self *)v58, (int)(uintptr_t)(a1), a2 | 1);
    v58[0] = ((uint32_t)(uintptr_t)&off_2048D28);
    if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v58) != 0 )
    {
      Size = glf::FileStreamImpl::GetSize((glf::FileStreamImpl::Self *)v58);
      v45 = nullptr;
      v46 = 0;
      if ( Size != 0 )
      {
        v46 = opNew(Size);
        v45 = (char *)v46;
      }
      v47 = &v45[Size];
      v48 = (size_t)&v45[Size - v46];
      v51 = v45;
      v52 = v47;
      memset(v45, 0, v48);
      v49 = v51;
      if ( v51 != v52 )
      {
        glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)v58, v51, v48);
        sub_192C9E0(a3 + 8, v51, v48);
        v49 = v51;
      }
      if ( v49 != nullptr )
        opDelete(v49);
      v58[0] = ((uint32_t)(uintptr_t)&off_2048D28);
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v58);
      return v48;
    }
    else
    {
      v58[0] = ((uint32_t)(uintptr_t)&off_2048D28);
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v58);
      return -1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::WriteFully  (binary VA: 0xc73a00)
// Original: glf::WriteFully
// ----------------------------------------------------------------------------
int glf::WriteFully(char *a1, int a2, const void **a3)
{
  char *Dir;
  const glf::fs2::Path::Self *v4;
  char *v5;
  const void *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  typedef glf::fs2::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[8];
  typedef uint32_t _g4_t_v28[2];
  typedef uint32_t _g4_t_v29[2];
  typedef uint8_t _g4_t_v30[8];
  typedef uint32_t _g4_t_v31[2];
  typedef uint32_t _g4_t_v32[8];
  typedef uint32_t _g4_t_v33[67];
  typedef uint32_t _g4_t_v34[38];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v20)) > _g4_s1 ? (28u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v21)) > _g4_s2 ? (28u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v24)) > _g4_s5 ? (28u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v25)) > _g4_s6 ? (28u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v26)) > _g4_s7 ? (46u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v27)) > _g4_s8 ? (48u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v28)) > _g4_s9 ? (56u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v29)) > _g4_s10 ? (64u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v30)) > _g4_s11 ? (72u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v31)) > _g4_s12 ? (80u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v32)) > _g4_s13 ? (88u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v33)) > _g4_s14 ? (120u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (388u + sizeof(_g4_t_v34)) > _g4_s15 ? (388u + sizeof(_g4_t_v34)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 46u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 120u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 388u);

  if ( (uint8_t)glf::fs2::IsInit(v19) == 0 )
  {
    glf::FileStreamImpl::Construct((glf::IOStream::Self *)v31, (int)(uintptr_t)(a1), a2 | 0x1A);
    v31[0] = ((uint32_t)(uintptr_t)&off_2048D28);
    if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v31) != 0 )
    {
      glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v31, *a3, *((uint32_t *)*a3 - 3));
      v18 = *((uint32_t *)*a3 - 3);
      v31[0] = ((uint32_t)(uintptr_t)&off_2048D28);
      v21 = v18;
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v31);
      return v21;
    }
    else
    {
      v31[0] = ((uint32_t)(uintptr_t)&off_2048D28);
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v31);
      return -1;
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), a1, (int)(uintptr_t)(&v26));
  v29[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v29);
  Dir = (char *)glf::Fs::GetDir(glf::Fs::sFs, a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), Dir, (int)(uintptr_t)(&v26) + 1);
  v28[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v28);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v30, (const glf::fs2::Path::Self *)v28);
  v4 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v30, (const glf::fs2::Path::Self *)v29);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v27, v4);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v30);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v28);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v29);
  v5 = (char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)v27);
  sub_C73010((int)(uintptr_t)(v31), v5, 48);
  if ( v33[66] != 0 )
  {
    if ( G4_VCALL<uint8_t>(v33[66], 84) != 0 )
    {
      v6 = *a3;
      v7 = *((uint32_t *)*a3 - 3);
      if ( *((int *)*a3 - 1) >= 0 )
      {
        sub_19397C0(a3);
        v6 = *a3;
      }
      sub_192C9E0(v32, v6, v7);
      v8 = (uint32_t *)v33[66];
      v9 = *((uint32_t *)*a3 - 3);
      v31[0] = ((uint32_t)(uintptr_t)&off_206D6EC);
      v34[0] = ((uint32_t)(uintptr_t)&off_206D714);
      v32[0] = ((uint32_t)(uintptr_t)&off_206D700);
      v32[1] = ((uint32_t)(uintptr_t)&off_206D728);
      if ( v33[66] != 0 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)(v33[66] + 4), 0xFFFFFFFF) == 1 )
        {
          v22 = v9;
          G4_VCALL<void>(v8, 8);
          G4_VCALL<void>(v8, 16);
          v9 = v22;
        }
        else
        {
          v10 = v8[1];
          _mm_mfence();
          if ( v10 == 1 )
          {
            v24 = v9;
            G4_VCALL<void>(v8, 12);
            v9 = v24;
          }
        }
      }
      v11 = (uint32_t *)v33[65];
      if ( v33[65] != 0 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)(v33[65] + 4), 0xFFFFFFFF) == 1 )
        {
          v23 = v9;
          G4_VCALL<void>(v11, 8);
          G4_VCALL<void>(v11, 16);
          v9 = v23;
        }
        else
        {
          v12 = v11[1];
          _mm_mfence();
          if ( v12 == 1 )
          {
            v25 = v9;
            G4_VCALL<void>(v11, 12);
            v9 = v25;
          }
        }
      }
      v20 = v9;
      v32[1] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v33);
      v31[1] = 0;
      v32[0] = (uint32_t)(uintptr_t)(&off_206D80C);
      v31[0] = (uint32_t)(uintptr_t)(&off_206D7CC);
      v34[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v34);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v27);
      return v20;
    }
    v14 = (uint32_t *)v33[66];
    v31[0] = ((uint32_t)(uintptr_t)&off_206D6EC);
    v32[0] = ((uint32_t)(uintptr_t)&off_206D700);
    v34[0] = ((uint32_t)(uintptr_t)&off_206D714);
    v32[1] = ((uint32_t)(uintptr_t)&off_206D728);
    if ( v33[66] != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v33[66] + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v14, 8);
        G4_VCALL<void>(v14, 16);
      }
      else
      {
        v15 = v14[1];
        _mm_mfence();
        if ( v15 == 1 )
          G4_VCALL<void>(v14, 12);
      }
    }
  }
  else
  {
    v31[0] = ((uint32_t)(uintptr_t)&off_206D6EC);
    v32[0] = ((uint32_t)(uintptr_t)&off_206D700);
    v34[0] = ((uint32_t)(uintptr_t)&off_206D714);
    v32[1] = ((uint32_t)(uintptr_t)&off_206D728);
  }
  v16 = (uint32_t *)v33[65];
  if ( v33[65] != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v33[65] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v16, 8);
      G4_VCALL<void>(v16, 16);
    }
    else
    {
      v17 = v16[1];
      _mm_mfence();
      if ( v17 == 1 )
        G4_VCALL<void>(v16, 12);
    }
  }
  v32[1] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v33);
  v31[1] = 0;
  v32[0] = (uint32_t)(uintptr_t)(&off_206D80C);
  v31[0] = (uint32_t)(uintptr_t)(&off_206D7CC);
  v34[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v34);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v27);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glf::GetFlagName  (binary VA: 0xc73ed0)
// Original: glf::GetFlagName
// ----------------------------------------------------------------------------
const char * glf::GetFlagName(glf::Self *self)
{
  const char *result;

  result = "none";
  if ( (uint16_t)(uintptr_t)(self) != 0 )
  {
    result = "external";
    if ( (uint16_t)(uintptr_t)(self) != 1 )
    {
      result = "posted";
      if ( (uint16_t)(uintptr_t)(self) != 2 )
      {
        result = "external+posted";
        if ( (uint16_t)(uintptr_t)(self) != 3 )
          return "unknown";
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::GetEventIdFromName  (binary VA: 0xc73f20)
// Original: glf::GetEventIdFromName
// ----------------------------------------------------------------------------
int glf::GetEventIdFromName(glf::Self *self)
{
  int i;
  int v2;
  int result;
  int v4;

  if ( strcmp(glf::gAppEventNames[0], (const char *)self) == 0 )
  {
    v4 = 0;
    return v4 + 100;
  }
  if ( strcmp(off_20C1BF4[0], (const char *)self) == 0 )
  {
    v4 = 1;
    return v4 + 100;
  }
  if ( strcmp(off_20C1BF8, (const char *)self) == 0 )
  {
    v4 = 2;
    return v4 + 100;
  }
  if ( strcmp(*(const char **)algn_20C1BFC, (const char *)self) == 0 )
  {
    v4 = 3;
    return v4 + 100;
  }
  for ( i = 0; i != 20; ++i )
  {
    if ( strcmp(glf::gInputEventNames[i], (const char *)self) == 0 )
      return i + 200;
  }
  v2 = strcmp(glf::gNotification, (const char *)self);
  result = 300;
  if ( v2 != 0 )
    return strcmp(glf::gUserEvent, (const char *)self) == 0 ? 1000 : -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::GetEventName  (binary VA: 0xc74050)
// Original: glf::GetEventName
// ----------------------------------------------------------------------------
const char * glf::GetEventName(glf::Self *self)
{
  const char *result;

  if ( (unsigned int)(uintptr_t)(self) - 100 <= 2 )
    return (const char *)(uintptr_t)(glf::gAppEventNames[(uint32_t)(uintptr_t)(self) - 100]);
  if ( (unsigned int)(uintptr_t)(self) - 200 <= 0x13 )
    return (const char *)(uintptr_t)(glf::gInputEventNames[(uint32_t)(uintptr_t)(self) - 200]);
  result = "Unknown";
  if ( (int)(uintptr_t)(self) > 299 )
    return (const char *)(uintptr_t)(glf::gNotification);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::GetPhysicalMemoryInfo  (binary VA: 0xc7cea0)
// Original: glf::GetPhysicalMemoryInfo
// ----------------------------------------------------------------------------
void glf::GetPhysicalMemoryInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::GetTaskMemoryInfo  (binary VA: 0xc7ceb0)
// Original: glf::GetTaskMemoryInfo
// ----------------------------------------------------------------------------
void glf::GetTaskMemoryInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::GetDiskInfo  (binary VA: 0xc7ced0)
// Original: glf::GetDiskInfo
// ----------------------------------------------------------------------------
void glf::GetDiskInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::opShl  (binary VA: 0xc7d5b0)
// Original: glf::operator<<
// ----------------------------------------------------------------------------
int glf::opShl(int a1, int a2)
{
  int v2;
  char v4; // di
  int v5;
  int v6;
  int v7;
  float v8;

  v2 = *(uint32_t *)(a2 + 4);
  switch ( v2 )
  {
    case 4:
      v4 = *(uint8_t *)(a2 + 8);
      g4_std_compat::ostream_write(a1, "(bool) ", 7);
      sub_192DB00(a1, v4);
      break;
    case 1:
      v5 = *(uint32_t *)(a2 + 8);
      g4_std_compat::ostream_write(a1, "(int32) ", 8);
      g4_std::ostream::op_shl_int(a1, v5);
      break;
    case 2:
      v6 = *(uint32_t *)(a2 + 12);
      v7 = *(uint32_t *)(a2 + 8);
      g4_std_compat::ostream_write(a1, "(int64) ", 8);
      sub_192DD40(a1, v7, v6);
      break;
    case 3:
      v8 = *(float *)(a2 + 8);
      g4_std_compat::ostream_write(a1, "(float) ", 8);
      g4_std::ostream::op_shl_double(a1, COERCE__INT64(v8));
      break;
    case 5:
      g4_std_compat::ostream_write(a1, "(string) ", 9);
      g4_std_compat::ostream_write(a1, *(uint32_t *)(a2 + 16), *(uint32_t *)(*(uint32_t *)(a2 + 16) - 12));
      break;
    default:
      break;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::GetRuntimeInfos  (binary VA: 0xc7d730)
// Original: glf::GetRuntimeInfos
// ----------------------------------------------------------------------------
void glf::GetRuntimeInfos()
{
  glf::GetTaskMemoryInfo();
  glf::GetPhysicalMemoryInfo();
  glf::GetDiskInfo();
}

// ----------------------------------------------------------------------------
// Function: glf::Memset  (binary VA: 0xc7f8c0)
// Original: glf::Memset
// ----------------------------------------------------------------------------
void * glf::Memset(glf::Self *self, void *c, size_t n)
{
  return memset(self, (int)(uintptr_t)(c), n);
}

// ----------------------------------------------------------------------------
// Function: glf::MemCmp  (binary VA: 0xc7f900)
// Original: glf::MemCmp
// ----------------------------------------------------------------------------
int glf::MemCmp(glf::Self *self, void *s2, size_t n)
{
  return memcmp(self, s2, n);
}

// ----------------------------------------------------------------------------
// Function: glf::Memcpy  (binary VA: 0xc7f940)
// Original: glf::Memcpy
// ----------------------------------------------------------------------------
void * glf::Memcpy(glf::Self *self, void *src, size_t n)
{
  return memcpy(self, src, n);
}

// ----------------------------------------------------------------------------
// Function: glf::MemChr  (binary VA: 0xc7f980)
// Original: glf::MemChr
// ----------------------------------------------------------------------------
void * glf::MemChr(glf::Self *self, const void *c, size_t n)
{
  return memchr(self, (int)(uintptr_t)(c), n);
}

// ----------------------------------------------------------------------------
// Function: glf::MemChr  (binary VA: 0xc7f9c0)
// Original: glf::MemChr
// ----------------------------------------------------------------------------
void * glf::MemChr(glf::Self *self, void *c, size_t n)
{
  return memchr(self, (int)(uintptr_t)(c), n);
}

// ----------------------------------------------------------------------------
// Function: glf::Memset8  (binary VA: 0xc7fa00)
// Original: glf::Memset8
// ----------------------------------------------------------------------------
void * glf::Memset8(glf::Self *self, void *a2, size_t n)
{
  return memset(self, (uint8_t)(uintptr_t)(a2), n);
}

// ----------------------------------------------------------------------------
// Function: glf::Strrchr  (binary VA: 0xc801c0)
// Original: glf::Strrchr
// ----------------------------------------------------------------------------
char * glf::Strrchr(glf::Self *self, const char *c)
{
  return (char *)(strrchr((const char *)self, (int)(uintptr_t)(c)));
}

// ----------------------------------------------------------------------------
// Function: glf::Strrchr  (binary VA: 0xc801f0)
// Original: glf::Strrchr
// ----------------------------------------------------------------------------
char * glf::Strrchr(glf::Self *self, char *c)
{
  return (char *)(strrchr((const char *)self, (int)(uintptr_t)(c)));
}

// ----------------------------------------------------------------------------
// Function: glf::Strchr  (binary VA: 0xc80220)
// Original: glf::Strchr
// ----------------------------------------------------------------------------
char * glf::Strchr(glf::Self *self, const char *c)
{
  return (char *)(strchr((const char *)self, (int)(uintptr_t)(c)));
}

// ----------------------------------------------------------------------------
// Function: glf::Strstr  (binary VA: 0xc80250)
// Original: glf::Strstr
// ----------------------------------------------------------------------------
char * glf::Strstr(glf::Self *self, char *needle)
{
  return (char *)(strstr((const char *)self, needle));
}

// ----------------------------------------------------------------------------
// Function: glf::Strstr_eac80280  (binary VA: 0xc80280)
// Original: glf::Strstr
// ----------------------------------------------------------------------------
char * glf::Strstr_eac80280(glf::Self *self, char *needle)
{
  return (char *)(strstr((const char *)self, needle));
}

// ----------------------------------------------------------------------------
// Function: glf::Strcpy  (binary VA: 0xc802b0)
// Original: glf::Strcpy
// ----------------------------------------------------------------------------
char * glf::Strcpy(glf::Self *self, char *src)
{
  return strcpy((char *)self, src);
}

// ----------------------------------------------------------------------------
// Function: glf::Strcmp  (binary VA: 0xc802e0)
// Original: glf::Strcmp
// ----------------------------------------------------------------------------
int glf::Strcmp(glf::Self *self, char *s2)
{
  return strcmp((const char *)self, s2);
}

// ----------------------------------------------------------------------------
// Function: glf::Strncmp  (binary VA: 0xc80310)
// Original: glf::Strncmp
// ----------------------------------------------------------------------------
int glf::Strncmp(glf::Self *self, char *s2, size_t n)
{
  return strncmp((const char *)self, s2, n);
}

// ----------------------------------------------------------------------------
// Function: glf::Strcpy_s  (binary VA: 0xc80350)
// Original: glf::Strcpy_s
// ----------------------------------------------------------------------------
int glf::Strcpy_s(glf::Self *self, char *a2, char *src)
{
  strcpy((char *)self, src);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Strncpy_s  (binary VA: 0xc80380)
// Original: glf::Strncpy_s
// ----------------------------------------------------------------------------
int glf::Strncpy_s(glf::Self *self, char *a2, char *src, size_t n)
{
  strncpy((char *)self, src, n);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Strlen  (binary VA: 0xc803c0)
// Original: glf::Strlen
// ----------------------------------------------------------------------------
int glf::Strlen(glf::Self *self)
{
  int result;

  result = 0;
  if ( *(uint8_t *)self != 0 )
  {
    do
      ++result;
    while ( *((uint8_t *)self + result) != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::toupper  (binary VA: 0xc803e0)
// Original: glf::toupper
// ----------------------------------------------------------------------------
glf::Self * glf::toupper(glf::Self *self)
{
  glf::Self *result;

  result = self;
  if ( (unsigned int)(uintptr_t)(self) - 97 <= 0x19 )
    return (glf::Self *)((char *)self - 32);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Vsnprintf  (binary VA: 0xc80400)
// Original: glf::Vsnprintf
// ----------------------------------------------------------------------------
int glf::Vsnprintf(glf::Self *self, size_t maxlen, char *format, __gnuc_va_list __varargs)
{
  return vsnprintf((char *)self, maxlen, format, __varargs);
}

// ----------------------------------------------------------------------------
// Function: glf::Snprintf  (binary VA: 0xc80440)
// Original: glf::Snprintf
// ----------------------------------------------------------------------------
int glf::Snprintf(glf::Self *self, size_t a2, char *a3, ...)
{
  va_list va;
  va_start(va, a3);
  int r = glf::Vsnprintf(self, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: glf::Vsprintf_s  (binary VA: 0xc80480)
// Original: glf::Vsprintf_s
// ----------------------------------------------------------------------------
int glf::Vsprintf_s(glf::Self *self, size_t a2, char *a3, __gnuc_va_list __varargs)
{
  return glf::Vsnprintf(self, a2, a3, __varargs);
}

// ----------------------------------------------------------------------------
// Function: glf::Vsnprintf_s  (binary VA: 0xc804c0)
// Original: glf::Vsnprintf_s
// ----------------------------------------------------------------------------
int glf::Vsnprintf_s(glf::Self *self, char *a2, signed int a3, char *a4, char *a5)
{
  int result;

  result = glf::Vsprintf_s(self, (size_t)a2, a4, a5);
  if ( result > a3 )
    result = a3;
  *((uint8_t *)self + result) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Strnlen_s  (binary VA: 0xc80520)
// Original: glf::Strnlen_s
// ----------------------------------------------------------------------------
const char * glf::Strnlen_s(glf::Self *self, const char *a2)
{
  const char *result;
  int v3;

  result = a2;
  if ( a2 != nullptr )
  {
    v3 = 0;
    if ( *(uint8_t *)self != 0 )
    {
      while ( (const char *)++v3 != a2 )
      {
        if ( *((uint8_t *)self + v3) == 0 )
          return (const char *)(v3 + 1);
      }
    }
    else
    {
      return (const char *)((uint8_t *)(&dword_0 + 1));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Stricmp  (binary VA: 0xc80560)
// Original: glf::Stricmp
// ----------------------------------------------------------------------------
int glf::Stricmp(glf::Self *self, const char *a2)
{
  int i;
  int8_t v3; // di
  int8_t v4;

  for ( i = 0; ; ++i )
  {
    v3 = (uint8_t)(uintptr_t)glf::toupper((glf::Self *)(uintptr_t)((int)(uintptr_t)((glf::Self *)*((char *)self + i))));
    v4 = (uint8_t)(uintptr_t)glf::toupper((glf::Self *)(uintptr_t)((int)(uintptr_t)((glf::Self *)a2[i])));
    if ( v3 < v4 )
      return -1;
    if ( v3 > v4 )
      break;
    if ( v3 == 0 )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::Strnicmp  (binary VA: 0xc805e0)
// Original: glf::Strnicmp
// ----------------------------------------------------------------------------
int glf::Strnicmp(glf::Self *self, const char *a2, const char *a3)
{
  int result;
  int v4;
  int8_t v5;
  int8_t v6;

  result = 0;
  if ( a3 != nullptr )
  {
    v4 = 0;
    while ( 1 )
    {
      v6 = (uint8_t)(uintptr_t)glf::toupper((glf::Self *)(uintptr_t)((int)(uintptr_t)((glf::Self *)*((char *)self + v4))));
      v5 = (uint8_t)(uintptr_t)glf::toupper((glf::Self *)(uintptr_t)((int)(uintptr_t)((glf::Self *)a2[v4])));
      if ( v6 < v5 )
        return -1;
      if ( v6 > v5 )
        break;
      if ( v6 != 0 && (const char *)++v4 != a3 )
        continue;
      return 0;
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Strcat_s  (binary VA: 0xc80680)
// Original: glf::Strcat_s
// ----------------------------------------------------------------------------
bool glf::Strcat_s(glf::Self *self, char *a2, char *a3)
{
  unsigned int v3;
  glf::Self *v4;
  char v5;
  char *v6;

  v3 = 0;
  v4 = self;
  if ( a2 != nullptr && *(uint8_t *)self != 0 )
  {
    do
    {
      v4 = (glf::Self *)((char *)v4 + 1);
      ++v3;
    }
    while ( *(uint8_t *)v4 != 0 && (unsigned int)(uintptr_t)(a2) > v3 );
  }
  v5 = *a3;
  if ( v3 < (unsigned int)(uintptr_t)(a2) && v5 != 0 )
  {
    v6 = &a3[-v3];
    do
    {
      ++v3;
      *(uint8_t *)v4 = v5;
      v5 = v6[v3];
      v4 = (glf::Self *)((char *)v4 + 1);
    }
    while ( v5 != 0 && (unsigned int)(uintptr_t)(a2) > v3 );
  }
  *(uint8_t *)v4 = 0;
  return (unsigned int)(uintptr_t)(a2) <= v3;
}

// ----------------------------------------------------------------------------
// Function: glf::Wcsicmp  (binary VA: 0xc806f0)
// Original: glf::Wcsicmp
// ----------------------------------------------------------------------------
int glf::Wcsicmp(glf::Self *self, const wchar_t *a2)
{
  int i;
  glf::Self *v4;
  glf::Self *v5;
  glf::Self *v7;

  for ( i = 0; ; ++i )
  {
    v7 = self;
    v4 = glf::toupper(*(glf::Self **)((char *)self + i * 4));
    v5 = glf::toupper((glf::Self *)a2[i]);
    self = v7;
    if ( (int)(uintptr_t)(v4) < (int)(uintptr_t)(v5) )
      return -1;
    if ( (int)(uintptr_t)(v4) > (int)(uintptr_t)(v5) )
      break;
    if ( v4 == nullptr )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::ToLower  (binary VA: 0xc80770)
// Original: glf::ToLower
// ----------------------------------------------------------------------------
int glf::ToLower(glf::Self *self)
{
  int result;

  result = (char)(uintptr_t)(self);
  if ( (unsigned int)(char)(uintptr_t)(self) <= 0xFF )
    return *(int16_t *)(tolower_tab_ + 2 * (char)(uintptr_t)(self) + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Stristr  (binary VA: 0xc807a0)
// Original: glf::Stristr
// ----------------------------------------------------------------------------
glf::Self * glf::Stristr(glf::Self *self, char *a2)
{
  glf::Self *v2;
  char v3;
  char v4;
  glf::Self *v6;
  const char *i;
  char v8;

  v2 = self;
  v3 = *a2;
  if ( *a2 == 0 )
    return v2;
  if ( *(uint8_t *)self != 0 )
  {
    while ( 1 )
    {
      v4 = *(uint8_t *)v2;
      if ( *(uint8_t *)v2 != 0 )
      {
        if ( v3 == 0 )
          return v2;
        v6 = v2;
        for ( i = a2; ; ++i )
        {
          v8 = glf::ToLower((glf::Self *)v4);
          if ( v8 != (uint8_t)glf::ToLower((glf::Self *)*i) )
          {
            v3 = *i;
            goto LABEL_9;
          }
          v4 = *((uint8_t *)v6 + 1);
          if ( v4 == 0 )
            break;
          v6 = (glf::Self *)((char *)v6 + 1);
          if ( i[1] == 0 )
            return v2;
        }
        v3 = i[1];
      }
LABEL_9:
      if ( v3 == 0 )
        return v2;
      if ( *((uint8_t *)v2 + 1) == 0 )
        return nullptr;
      v2 = (glf::Self *)((char *)v2 + 1);
      v3 = *a2;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glf::ToLowerCase  (binary VA: 0xc80870)
// Original: glf::ToLowerCase
// ----------------------------------------------------------------------------
int glf::ToLowerCase(glf::Self *self, char *a2, int a3)
{
  int v3;
  int result;

  v3 = a3;
  result = glf::Strlen(self);
  if ( a3 == -1 || result <= a3 )
    v3 = result - 1;
  while ( (int)(uintptr_t)(a2) <= v3 )
  {
    result = glf::ToLower((glf::Self *)a2[(uint32_t)(uintptr_t)(self)]);
    (a2++)[(uint32_t)(uintptr_t)(self)] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ToLowerCase  (binary VA: 0xc808d0)
// Original: glf::ToLowerCase
// ----------------------------------------------------------------------------
int glf::ToLowerCase(int *a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  uint8_t *v6;
  char *v7;

  v3 = a2;
  result = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a3 == -1 || v5 <= a3 )
    a3 = v5 - 1;
  if ( a2 <= a3 )
  {
    while ( 1 )
    {
      v6 = (uint8_t *)(result + v3);
      v7 = (char *)(result + v3);
      if ( *(int *)(result - 4) >= 0 )
      {
        sub_19397C0(a1);
        v6 = (uint8_t *)(*a1 + v3);
        if ( *(int *)(*a1 - 4) >= 0 )
          sub_19397C0(a1);
        v7 = (char *)(v3 + *a1);
      }
      ++v3;
      result = glf::ToLower((glf::Self *)*v7);
      *v6 = result;
      if ( v3 > a3 )
        break;
      result = *a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::GetTicks  (binary VA: 0xc827f0)
// Original: glf::GetTicks
// ----------------------------------------------------------------------------
int64_t glf::GetTicks()
{
  typedef struct timespec _g4_t_tp;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tp)) > _g4_s0 ? (8u + sizeof(_g4_t_tp)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 8u);

  clock_gettime(1, &tp);
  return (int64_t)((double)tp.tv_nsec * 0.001 + (double)tp.tv_sec * 1000000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetTicksPerSecond  (binary VA: 0xc82850)
// Original: glf::GetTicksPerSecond
// ----------------------------------------------------------------------------
int64_t glf::GetTicksPerSecond()
{
  return 1000000;
}

// ----------------------------------------------------------------------------
// Function: glf::OffsetTimer  (binary VA: 0xc82860)
// Original: glf::OffsetTimer
// ----------------------------------------------------------------------------
uint64_t * glf::OffsetTimer(glf::Self *self, int64_t a2)
{
  glf::sTimerTickOffset[0] += __PAIR64__(a2, (unsigned int)(uintptr_t)(self));
  return (uint64_t *)(glf::sTimerTickOffset);
}

// ----------------------------------------------------------------------------
// Function: glf::GetMilliseconds  (binary VA: 0xc828a0)
// Original: glf::GetMilliseconds
// ----------------------------------------------------------------------------
int64_t glf::GetMilliseconds()
{
  int64_t Ticks;
  int64_t TicksPerSecond; // rax

  Ticks = glf::GetTicks();
  TicksPerSecond = glf::GetTicksPerSecond();
  return (int64_t)((double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(Ticks), _mm_cvtsi32_si128(HIDWORD(Ticks))), 0)
                 / (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(TicksPerSecond),
                             _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0)
                 * 1000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetMicroseconds  (binary VA: 0xc82940)
// Original: glf::GetMicroseconds
// ----------------------------------------------------------------------------
int64_t glf::GetMicroseconds()
{
  int64_t Ticks;
  int64_t TicksPerSecond; // rax

  Ticks = glf::GetTicks();
  TicksPerSecond = glf::GetTicksPerSecond();
  return (int64_t)((double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(Ticks), _mm_cvtsi32_si128(HIDWORD(Ticks))), 0)
                 / (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(TicksPerSecond),
                             _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0)
                 * 1000000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetNanoseconds  (binary VA: 0xc829e0)
// Original: glf::GetNanoseconds
// ----------------------------------------------------------------------------
int64_t glf::GetNanoseconds()
{
  int64_t Ticks;
  int64_t TicksPerSecond; // rax

  Ticks = glf::GetTicks();
  TicksPerSecond = glf::GetTicksPerSecond();
  return (int64_t)((double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(Ticks), _mm_cvtsi32_si128(HIDWORD(Ticks))), 0)
                 / (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(TicksPerSecond),
                             _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0)
                 * 1000000000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetRunningTimeMs  (binary VA: 0xc82a80)
// Original: glf::GetRunningTimeMs
// ----------------------------------------------------------------------------
int64_t glf::GetRunningTimeMs()
{
  int64_t Ticks;
  int64_t TicksPerSecond; // rax
  int64_t v3;

  v3 = glf::sTimerTickOffset[0];
  Ticks = glf::GetTicks();
  TicksPerSecond = glf::GetTicksPerSecond();
  return (int64_t)((double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128((int)Ticks - (int)v3),
                             _mm_cvtsi32_si128((uint64_t)(Ticks - v3) >> 32)), 0)
                 / (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(TicksPerSecond),
                             _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0)
                 * 1000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetRunningTimeUs  (binary VA: 0xc82b40)
// Original: glf::GetRunningTimeUs
// ----------------------------------------------------------------------------
int64_t glf::GetRunningTimeUs()
{
  int64_t Ticks;
  int64_t TicksPerSecond; // rax
  int64_t v3;

  v3 = glf::sTimerTickOffset[0];
  Ticks = glf::GetTicks();
  TicksPerSecond = glf::GetTicksPerSecond();
  return (int64_t)((double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128((int)Ticks - (int)v3),
                             _mm_cvtsi32_si128((uint64_t)(Ticks - v3) >> 32)), 0)
                 / (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(TicksPerSecond),
                             _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0)
                 * 1000000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetRunningTimeNs  (binary VA: 0xc82c00)
// Original: glf::GetRunningTimeNs
// ----------------------------------------------------------------------------
int64_t glf::GetRunningTimeNs()
{
  int64_t Ticks;
  int64_t TicksPerSecond; // rax
  int64_t v3;

  v3 = glf::sTimerTickOffset[0];
  Ticks = glf::GetTicks();
  TicksPerSecond = glf::GetTicksPerSecond();
  return (int64_t)((double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128((int)Ticks - (int)v3),
                             _mm_cvtsi32_si128((uint64_t)(Ticks - v3) >> 32)), 0)
                 / (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(TicksPerSecond),
                             _mm_cvtsi32_si128(HIDWORD(TicksPerSecond))), 0)
                 * 1000000000.0);
}

// ----------------------------------------------------------------------------
// Function: glf::GetCalendar  (binary VA: 0xc82cc0)
// Original: glf::GetCalendar
// ----------------------------------------------------------------------------
int glf::GetCalendar(int *a1)
{
  struct tm *v1;
  int result;
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  timer = time(nullptr);
  v1 = localtime(&timer);
  a1[4] = v1->tm_sec;
  a1[3] = v1->tm_min;
  a1[2] = v1->tm_hour;
  a1[7] = v1->tm_mday;
  a1[6] = v1->tm_mon;
  a1[8] = v1->tm_wday;
  a1[1] = v1->tm_yday;
  result = v1->tm_year + 1900;
  a1[5] = 0;
  *a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::getFileCount  (binary VA: 0xc83420)
// Original: glf::core::CZipReader::getFileCount
// ----------------------------------------------------------------------------
int glf::core::CZipReader::getFileCount(glf::core::CZipReader::Self *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::extractFilename  (binary VA: 0xc83e80)
// Original: glf::core::CZipReader::extractFilename
// ----------------------------------------------------------------------------
int glf::core::CZipReader::extractFilename(int a1, int a2)
{
  int result;
  char *v3;
  unsigned int v4;
  char *v5;
  char *v6;
  char v7;
  char *v8;
  char *s;
  int v10;
  size_t v11;
  void *v12;
  size_t v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v16)) > _g4_s2 ? (28u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  result = *(int16_t *)(a2 + 42);
  v15 = result;
  if ( *(uint16_t *)(a2 + 42) != 0 )
  {
    v3 = *(char **)a2;
    if ( *(uint8_t *)(a1 + 12) != 0 )
    {
      v4 = 0;
      v5 = *(char **)a2;
      if ( *((uint32_t *)v3 - 3) != 0 )
      {
        while ( 1 )
        {
          if ( *((int *)v3 - 1) >= 0 )
          {
            sub_19397C0(a2);
            v5 = *(char **)a2;
          }
          v6 = &v5[v4];
          v7 = v5[v4];
          if ( *((int *)v5 - 1) >= 0 )
          {
            v14 = *v6;
            sub_19397C0(a2);
            v6 = (char *)(v4 + *(uint32_t *)a2);
            v7 = v14;
          }
          if ( (uint8_t)(v7 - 65) <= 0x19u )
            v7 += 32;
          ++v4;
          *v6 = v7;
          v3 = *(char **)a2;
          if ( v4 >= *(uint32_t *)(*(uint32_t *)a2 - 12) )
            break;
          v5 = *(char **)a2;
        }
      }
    }
    v8 = &v3[v15];
    if ( v3[v15] == 47 )
    {
LABEL_16:
      if ( v8 != v3 )
      {
        s = v8 + 1;
        v10 = a2 + 4;
        v11 = strlen(s);
        g4_std_compat::string_assign(a2 + 4, s, v11);
        g4_std_compat::string_assign(a2 + 8, &unk_1B15112, 0);
        sub_193A6F0(v16, a2, 0, &s[-*(uint32_t *)a2]);
        g4_std::string::assign_str(a2 + 8, v16);
        result = v16[0];
        v12 = (void *)(v16[0] - 12);
        if ( (uint32_t *)(v16[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        goto LABEL_21;
      }
    }
    else
    {
      while ( v8 != v3 )
      {
        if ( *--v8 == 47 )
          goto LABEL_16;
      }
    }
    v10 = a2 + 4;
    v13 = strlen(v8);
    g4_std_compat::string_assign(a2 + 4, v8, v13);
    result = g4_std_compat::string_assign(a2 + 8, &unk_1B15112, 0);
LABEL_21:
    if ( *(uint8_t *)(a1 + 13) == 0 )
      return (int)(uintptr_t)(g4_std::string::assign_str(v10, a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::scanLocalHeader  (binary VA: 0xc84040)
// Original: glf::core::CZipReader::scanLocalHeader
// ----------------------------------------------------------------------------
namespace {
#pragma pack(push, 1)
struct G4GlfZipLocalHdr {
  uint32_t sig;
  uint16_t versionNeeded;
  uint16_t bitFlag;
  uint16_t compressionMethod;
  uint16_t modTime;
  uint16_t modDate;
  uint32_t crc32;
  uint32_t compressedSize;
  uint32_t uncompressedSize;
  int16_t filenameLen;
  int16_t extraLen;
};
struct G4GlfZipEntry {
  char *zipFileName;
  char *simpleFileName;
  char *path;
  int32_t fileDataPos;
  G4GlfZipLocalHdr header;
  uint16_t pad;
};
struct G4GlfMapPair {
  char *key;
  G4GlfZipEntry val;
};
#pragma pack(pop)
static_assert(sizeof(G4GlfZipLocalHdr) == 30, "G4GlfZipLocalHdr must be 30 bytes");
static_assert(sizeof(G4GlfZipEntry) == 48, "G4GlfZipEntry must be 48 bytes");

static void g4_glf_str_destroy(char *&s)
{
  uint32_t *rep = (uint32_t *)(s - 12);
  if (rep != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(s - 4), 0xFFFFFFFF) <= 0)
    g4_std::string::Rep::M_destroy(rep);
}

static void g4_glf_insert_entry(glf::core::CZipReader::Self *self, G4GlfZipEntry &entry)
{
  char *insertPos = (char *)self + 20;
  char *cur = *((char **)self + 6);
  const char *keyStr = entry.simpleFileName;
  size_t keyLen = *((const uint32_t *)keyStr - 3);
  while (cur != nullptr)
  {
    const char *nodeStr = *((const char **)cur + 4);
    size_t nodeLen = *((const uint32_t *)nodeStr - 3);
    size_t minLen = keyLen < nodeLen ? keyLen : nodeLen;
    int cmp = minLen ? memcmp(nodeStr, keyStr, minLen) : 0;
    if (cmp == 0)
      cmp = (int)nodeLen - (int)keyLen;
    if (cmp < 0)
    {
      cur = *((char **)cur + 3);
    }
    else
    {
      insertPos = cur;
      cur = *((char **)cur + 2);
    }
  }

  bool alreadyExists = false;
  if (insertPos != (char *)self + 20)
  {
    const char *nodeStr = *((const char **)insertPos + 4);
    size_t nodeLen = *((const uint32_t *)nodeStr - 3);
    size_t minLen = keyLen < nodeLen ? keyLen : nodeLen;
    int cmp = minLen ? memcmp(keyStr, nodeStr, minLen) : 0;
    if (cmp == 0)
      cmp = (int)keyLen - (int)nodeLen;
    if (cmp >= 0)
      alreadyExists = true;
  }

  if (!alreadyExists)
  {
    G4GlfMapPair pairObj;
    memset(&pairObj, 0, sizeof(pairObj));
    g4_std::string::construct_copy(&pairObj.key, &entry.simpleFileName);
    pairObj.val.zipFileName = (char *)&dword_213B814;
    pairObj.val.simpleFileName = (char *)&dword_213B814;
    pairObj.val.path = (char *)&dword_213B814;

    char *inserted = nullptr;
    sub_C83760((int *)&inserted, (uint32_t *)self + 4, (int)(uintptr_t)insertPos, (int)(uintptr_t)&pairObj);
    insertPos = inserted;

    g4_glf_str_destroy(pairObj.val.path);
    g4_glf_str_destroy(pairObj.val.simpleFileName);
    g4_glf_str_destroy(pairObj.val.zipFileName);
    g4_glf_str_destroy(pairObj.key);
  }

  g4_std::string::assign_str(insertPos + 20, &entry.zipFileName);
  g4_std::string::assign_str(insertPos + 24, &entry.simpleFileName);
  g4_std::string::assign_str(insertPos + 28, &entry.path);
  *((int32_t *)insertPos + 8) = entry.fileDataPos;
  memcpy(insertPos + 36, &entry.header, 30);
}
} // namespace

glf::core::CZipReader::Self * glf::core::CZipReader::Construct(
  glf::core::CZipReader::Self *self,
  glf::IOStream::Self *a2,
  const char *a3,
  bool a4,
  bool a5,
  bool a6)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_206D9E8;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)a2;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)&dword_213B814;
  *((uint8_t *)self + 12) = a4 ? 1u : 0u;
  *((uint8_t *)self + 13) = a5 ? 1u : 0u;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 9) = 0;

  if (a2 != nullptr)
  {
    if (a3 != nullptr)
      g4_std_compat::string_assign((int)(uintptr_t)((char *)self + 8), a3, strlen(a3));
    if (a6)
    {
      while (glf::core::CZipReader::scanLocalHeader(self) != 0)
      {
      }
    }
  }
  return self;
}

int glf::core::CZipReader::scanLocalHeader(glf::core::CZipReader::Self *self)
{
  uint32_t stream = *((uint32_t *)self + 1);
  if (stream == 0)
    return 0;

  G4GlfZipEntry entry;
  memset(&entry, 0, sizeof(entry));
  entry.zipFileName = (char *)&dword_213B814;
  entry.simpleFileName = (char *)&dword_213B814;
  entry.path = (char *)&dword_213B814;

  (*(void (**)(uint32_t, void *, int))(*(uint32_t *)(uintptr_t)stream + 12))(stream, &entry.header, 30);
  int result = 0;
  if (entry.header.sig == 0x05044C51u || entry.header.sig == 0x04034B50u)
  {
    int nameLen = entry.header.filenameLen;
    if (nameLen < 0)
      nameLen = 0;
    char stackBuf[1024];
    char *nameBuf = stackBuf;
    char *heapBuf = nullptr;
    if (nameLen >= (int)sizeof(stackBuf))
    {
      heapBuf = (char *)malloc((size_t)nameLen + 1u);
      nameBuf = heapBuf;
    }
    if (nameLen > 0)
      (*(void (**)(uint32_t, char *, int))(*(uint32_t *)(uintptr_t)stream + 12))(stream, nameBuf, nameLen);
    nameBuf[nameLen] = '\0';

    g4_std_compat::string_assign((int)(uintptr_t)&entry.zipFileName, nameBuf, strlen(nameBuf));
    if (heapBuf != nullptr)
      free(heapBuf);

    glf::core::CZipReader::extractFilename((int)(uintptr_t)self, (int)(uintptr_t)&entry.zipFileName);
    if (entry.header.extraLen != 0)
      (*(void (**)(uint32_t, int, int))(*(uint32_t *)(uintptr_t)stream + 60))(stream, (int)entry.header.extraLen, 1);
    if ((entry.header.bitFlag & 8u) != 0)
      (*(void (**)(uint32_t, void *, int))(*(uint32_t *)(uintptr_t)stream + 12))(stream, &entry.header.crc32, 12);

    entry.fileDataPos = (*(int (**)(uint32_t))(*(uint32_t *)(uintptr_t)stream + 64))(stream);
    (*(void (**)(uint32_t, uint32_t, int))(*(uint32_t *)(uintptr_t)stream + 60))(stream, entry.header.compressedSize, 1);

    g4_glf_insert_entry(self, entry);
    result = 1;
  }

  g4_glf_str_destroy(entry.path);
  g4_glf_str_destroy(entry.simpleFileName);
  g4_glf_str_destroy(entry.zipFileName);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::deletePathFromFilename  (binary VA: 0xc846c0)
// Original: glf::core::CZipReader::deletePathFromFilename
// ----------------------------------------------------------------------------
int glf::core::CZipReader::deletePathFromFilename(int a1, uint8_t **a2)
{
  uint8_t *v2;
  uint8_t *v3;
  int result;
  char *s;
  size_t v6;

  v2 = *a2;
  v3 = &(*a2)[*((uint32_t *)*a2 - 3)];
  result = *v3;
  if ( (uint8_t)result != 92 )
  {
    while ( (uint8_t)result != 47 )
    {
      if ( v3 == v2 )
        return result;
      result = *--v3;
      if ( (uint8_t)result == 92 )
        break;
    }
  }
  if ( v3 != v2 )
  {
    s = (char *)(v3 + 1);
    v6 = strlen(s);
    return g4_std_compat::string_assign((int)(uintptr_t)(a2), s, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::getFileInfo  (binary VA: 0xc84800)
// Original: glf::core::CZipReader::getFileInfo
// ----------------------------------------------------------------------------
int glf::core::CZipReader::getFileInfo(glf::core::CZipReader::Self *self, char *a2, int *a3, int *a4, bool *a5, int *a6)
{
  uint8_t *v6;
  unsigned int v7;
  uint8_t *v8;
  uint8_t v9;
  int v10;
  char *v11;
  size_t v12;
  size_t v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  size_t v19;
  int v20;
  typedef uint8_t _g4_t_v22;
  typedef size_t _g4_t_v23;
  typedef uint8_t _g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t *_g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v26)) > _g4_s4 ? (24u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v27)) > _g4_s5 ? (28u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v28)) > _g4_s6 ? (46u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v29)) > _g4_s7 ? (48u + sizeof(_g4_t_v29)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 46u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), a2, (int)(uintptr_t)(&v28));
  *a5 = false;
  *a6 = 0;
  if ( *((uint8_t *)self + 13) != 0 )
    glf::core::CZipReader::deletePathFromFilename((int)(uintptr_t)(self), v29);
  v6 = v29[0];
  if ( *((uint8_t *)self + 12) != 0 && *((uint32_t *)v29[0] - 3) != 0 )
  {
    v7 = 0;
    do
    {
      if ( *((int *)v6 - 1) >= 0 )
      {
        sub_19397C0(v29);
        v6 = v29[0];
      }
      v8 = &v6[v7];
      v9 = v6[v7];
      if ( *((int *)v6 - 1) >= 0 )
      {
        v22 = v6[v7];
        sub_19397C0(v29);
        v8 = &v29[0][v7];
        v9 = v22;
      }
      if ( (uint8_t)(v9 - 65) <= 0x19u )
        v9 += 32;
      ++v7;
      *v8 = v9;
      v6 = v29[0];
    }
    while ( v7 < *((uint32_t *)v29[0] - 3) );
  }
  v10 = 0;
  v11 = *((char **)self + 6);
  if ( v11 != nullptr )
  {
    v12 = *((uint32_t *)v6 - 3);
    v25 = v12;
    v26 = (char *)self + 20;
    v27 = v6;
    do
    {
      while ( 1 )
      {
        v13 = *(uint32_t *)(*((uint32_t *)v11 + 4) - 12);
        v14 = v13;
        v23 = v12;
        if ( v12 <= v13 )
          v14 = v12;
        v15 = memcmp(*((const void **)v11 + 4), v27, v14);
        v12 = v23;
        v16 = v13 - v23;
        if ( v15 == 0 )
          v15 = v16;
        if ( v15 < 0 )
          break;
        v26 = v11;
        v11 = *((char **)v11 + 2);
        if ( v11 == nullptr )
          goto LABEL_22;
      }
      v11 = *((char **)v11 + 3);
    }
    while ( v11 != nullptr );
LABEL_22:
    v10 = 0;
    v6 = v27;
    if ( (char *)self + 20 != v26 )
    {
      v17 = *((uint32_t **)v26 + 4);
      v18 = v25;
      v19 = *(v17 - 3);
      if ( v25 > v19 )
        v18 = *(v17 - 3);
      v20 = memcmp(v27, v17, v18);
      v10 = 0;
      if ( v20 == 0 )
        v20 = v25 - v19;
      if ( v20 >= 0 && *((uint16_t *)v26 + 22) == 0 )
      {
        *a3 = *((uint32_t *)v26 + 8);
        v10 = 1;
        *a4 = *(uint32_t *)(v26 + 58);
      }
    }
  }
  if ( v6 - 12 != (uint8_t *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v6 - 1, 0xFFFFFFFF) <= 0 )
  {
    v24 = v10;
    g4_std::string::Rep::M_destroy(v6 - 12);
    return v24;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::ExportHeader  (binary VA: 0xc84a10)
// Original: glf::core::CZipReader::ExportHeader
// ----------------------------------------------------------------------------
glf::core::CZipReader::Self * glf::core::CZipReader::ExportHeader(glf::core::CZipReader::Self *self, glf::IOStream::Self *a2)
{
  const char **v2;
  glf::core::CZipReader::Self *result;
  uint32_t v4[8];

  v2 = *((const char ***)self + 7);
  v4[0] = *((uint32_t *)self + 9);
  result = (glf::core::CZipReader::Self *)G4_VCALL<int>(a2, 20, v4, 4);
  if ( v2 != (const char **)((char *)self + 20) )
  {
    do
    {
      v4[0] = strlen(v2[5]);
      G4_VCALL<void>(a2, 20, v4, 4);
      G4_VCALL<void>(a2, 20, v2[5], v4[0]);
      G4_VCALL<void>(a2, 20, v2 + 8, 4);
      G4_VCALL<void>(a2, 20, v2 + 9, 30);
      result = (glf::core::CZipReader::Self *)sub_1904890(v2);
      v2 = (const char **)result;
    }
    while ( (glf::core::CZipReader::Self *)((char *)self + 20) != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::ImportHeader  (binary VA: 0xc84ae0)
// Original: glf::core::CZipReader::ImportHeader
// ----------------------------------------------------------------------------
int glf::core::CZipReader::ImportHeader(glf::core::CZipReader::Self *self, glf::IOStream::Self *a2)
{
  if (self == nullptr || a2 == nullptr)
    return 0;

  G4GlfZipEntry entry;
  memset(&entry, 0, sizeof(entry));
  entry.zipFileName = (char *)&dword_213B814;
  entry.simpleFileName = (char *)&dword_213B814;
  entry.path = (char *)&dword_213B814;

  int32_t fileCount = 0;
  G4_VCALL<void>(a2, 12, &fileCount, 4);
  for (int32_t i = 0; i < fileCount; ++i)
  {
    int32_t nameLen = 0;
    G4_VCALL<void>(a2, 12, &nameLen, 4);
    if (nameLen < 0 || nameLen > 1023)
      break;
    G4_VCALL<void>(a2, 12, byte_20DEE20, nameLen);
    byte_20DEE20[nameLen] = 0;
    g4_std_compat::string_assign((int)(uintptr_t)&entry.zipFileName, byte_20DEE20, strlen((const char *)byte_20DEE20));
    G4_VCALL<void>(a2, 12, &entry.fileDataPos, 4);
    G4_VCALL<void>(a2, 12, &entry.header, 30);
    glf::core::CZipReader::extractFilename((int)(uintptr_t)self, (int)(uintptr_t)&entry.zipFileName);
    g4_glf_insert_entry(self, entry);
  }

  g4_glf_str_destroy(entry.path);
  g4_glf_str_destroy(entry.simpleFileName);
  g4_glf_str_destroy(entry.zipFileName);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::ReadInt  (binary VA: 0xc85130)
// Original: glf::core::FromVoxArchive::ReadInt
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::ReadInt(glf::core::FromVoxArchive::Self *self, uint8_t *a2)
{
  return (a2[2] << 16) + (a2[1] << 8) + *a2 + (a2[3] << 24);
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::ReverseInt  (binary VA: 0xc85160)
// Original: glf::core::FromVoxArchive::ReverseInt
// ----------------------------------------------------------------------------
unsigned int glf::core::FromVoxArchive::ReverseInt(glf::core::FromVoxArchive::Self *self, unsigned int *a2)
{
  unsigned int result;

  result = __builtin_rotateright32(((*a2 & 0xFF00FF00) >> 8) + ((*a2 & 0xFF00FF) << 8), 16);
  *a2 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::MurmurHash2DualNoCase  (binary VA: 0xc85190)
// Original: glf::core::FromVoxArchive::MurmurHash2DualNoCase
// ----------------------------------------------------------------------------
unsigned int glf::core::FromVoxArchive::MurmurHash2DualNoCase(glf::core::FromVoxArchive::Self *self, const char *a2, int a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  unsigned int v6;
  glf::core::FromVoxArchive::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int result;
  uint8_t v22;
  int v23;
  uint8_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  const char *v30;
  int v31;
  int v32;

  v6 = a3 ^ (unsigned int)(uintptr_t)(a2);
  v29 = a4 ^ (unsigned int)(uintptr_t)(a2);
  v7 = self;
  if ( (int)(uintptr_t)(a2) > 3 )
  {
    v30 = a2;
    do
    {
      v8 = *((uint8_t *)v7 + 1);
      v9 = v8 + 32;
      v31 = v8 << 8;
      v10 = *((uint8_t *)v7 + 2);
      v11 = *((uint8_t *)v7 + 3);
      v12 = v9 << 8;
      v32 = v10 << 16;
      v28 = (v10 + 32) << 16;
      v13 = (v11 + 32) << 24;
      v14 = *(uint8_t *)v7 + 32;
      if ( (uint8_t)(*(uint8_t *)v7 - 65) > 0x19u )
        v14 = *(uint8_t *)v7;
      if ( (uint8_t)(*((uint8_t *)v7 + 1) - 65) > 0x19u )
        v12 = v31;
      v15 = v14 + v12;
      v16 = v28;
      if ( (uint8_t)(*((uint8_t *)v7 + 2) - 65) > 0x19u )
        v16 = v32;
      v17 = v16 + v15;
      v18 = *((uint8_t *)v7 + 3);
      v7 = (glf::core::FromVoxArchive::Self *)((char *)v7 + 4);
      if ( (uint8_t)(v18 - 65) > 0x19u )
        v13 = v11 << 24;
      v30 -= 4;
      v19 = 1540483477 * ((1540483477 * (v13 + v17)) ^ ((unsigned int)(1540483477 * (v13 + v17)) >> 24));
      v6 = v19 ^ (1540483477 * v6);
      v29 = v19 ^ (1540483477 * v29);
    }
    while ( (int)(uintptr_t)(v30) > 3 );
    v20 = (unsigned int)(uintptr_t)(a2 - 4) >> 2;
    v7 = (glf::core::FromVoxArchive::Self *)((char *)self + 4 * v20 + 4);
    a2 = &a2[-4 * v20 - 4];
  }
  if ( a2 != (const char *)(uintptr_t)((uint8_t *)&dword_0 + 2) )
  {
    if ( a2 != (const char *)(uintptr_t)((uint8_t *)&dword_0 + 3) )
    {
      if ( a2 != (const char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
        goto LABEL_16;
      goto LABEL_23;
    }
    v22 = *((uint8_t *)v7 + 2);
    if ( (uint8_t)(v22 - 65) <= 0x19u )
      v23 = (v22 + 32) << 16;
    else
      v23 = v22 << 16;
    v6 ^= v23;
    v29 ^= v23;
  }
  v24 = *((uint8_t *)v7 + 1);
  if ( (uint8_t)(v24 - 65) <= 0x19u )
    v25 = (v24 + 32) << 8;
  else
    v25 = v24 << 8;
  v6 ^= v25;
  v29 ^= v25;
LABEL_23:
  v26 = *(uint8_t *)v7;
  v27 = (uint8_t)v26 ^ v6;
  if ( (uint8_t)(v26 - 65) <= 0x19u )
  {
    v26 = (uint8_t)v26 + 32;
    v27 = v26 ^ v6;
  }
  v6 = 1540483477 * v27;
  v29 = 1540483477 * (v29 ^ v26);
LABEL_16:
  *a5 = (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
  result = (1540483477 * (v29 ^ (v29 >> 13))) ^ ((1540483477 * (v29 ^ (v29 >> 13))) >> 15);
  *a6 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::MurmurHash2Dual  (binary VA: 0xc853a0)
// Original: glf::core::FromVoxArchive::MurmurHash2Dual
// ----------------------------------------------------------------------------
unsigned int glf::core::FromVoxArchive::MurmurHash2Dual(glf::core::FromVoxArchive::Self *self, const unsigned int *a2, int a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  unsigned int v6;
  unsigned int v7;
  const unsigned int *v8;
  glf::core::FromVoxArchive::Self *v9;
  unsigned int v10;
  unsigned int v11;
  glf::core::FromVoxArchive::Self *v12;
  unsigned int result;
  int v14;
  int v15;
  int v16;

  v6 = a3 ^ (unsigned int)(uintptr_t)(a2);
  v7 = a4 ^ (unsigned int)(uintptr_t)(a2);
  if ( (int)(uintptr_t)(a2) > 3 )
  {
    v8 = a2;
    v9 = self;
    do
    {
      --v8;
      v10 = (1540483477 * *(uint32_t *)v9) ^ ((unsigned int)(1540483477 * *(uint32_t *)v9) >> 24);
      v9 = (glf::core::FromVoxArchive::Self *)((char *)v9 + 4);
      v10 *= 1540483477;
      v6 = v10 ^ (1540483477 * v6);
      v7 = v10 ^ (1540483477 * v7);
    }
    while ( (int)(uintptr_t)(v8) > 3 );
    v11 = (unsigned int)(uintptr_t)(a2 - 1) >> 2;
    self = (glf::core::FromVoxArchive::Self *)((char *)self + 4 * v11 + 4);
    a2 = &a2[-v11 - 1];
  }
  if ( a2 == (const unsigned int *)((char *)&dword_0 + 2) )
    goto LABEL_10;
  if ( a2 == (const unsigned int *)((char *)&dword_0 + 3) )
  {
    v14 = *((uint8_t *)self + 2) << 16;
    v6 ^= v14;
    v7 ^= v14;
LABEL_10:
    v12 = self;
    v15 = *((uint8_t *)self + 1) << 8;
    v6 ^= v15;
    v7 ^= v15;
    goto LABEL_11;
  }
  v12 = self;
  if ( a2 == (const unsigned int *)((char *)&dword_0 + 1) )
  {
LABEL_11:
    v16 = *(uint8_t *)v12;
    v6 = 1540483477 * (v16 ^ v6);
    v7 = 1540483477 * (v16 ^ v7);
  }
  *a5 = (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
  result = (1540483477 * (v7 ^ (v7 >> 13))) ^ ((1540483477 * (v7 ^ (v7 >> 13))) >> 15);
  *a6 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::getFilenameWithoutPath  (binary VA: 0xc854a0)
// Original: glf::core::FromVoxArchive::getFilenameWithoutPath
// ----------------------------------------------------------------------------
glf::core::FromVoxArchive::Self * glf::core::FromVoxArchive::getFilenameWithoutPath(glf::core::FromVoxArchive::Self *self)
{
  glf::core::FromVoxArchive::Self *result;

  result = (glf::core::FromVoxArchive::Self *)((char *)self + strlen((const char *)self));
  if ( *(uint8_t *)result == 47 || *(uint8_t *)result == 92 )
  {
LABEL_2:
    if ( result != self )
      return (glf::core::FromVoxArchive::Self *)((char *)result + 1);
  }
  else
  {
    while ( self != result )
    {
      result = (glf::core::FromVoxArchive::Self *)((char *)result - 1);
      if ( *(uint8_t *)result == 92 || *(uint8_t *)result == 47 )
        goto LABEL_2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::getHashIndex  (binary VA: 0xc85500)
// Original: glf::core::FromVoxArchive::getHashIndex
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::getHashIndex(glf::core::FromVoxArchive::Self *self, char *s, int *a3)
{
  char *FilenameWithoutPath;
  const char *v4;
  int v5;
  int result;
  int v7;
  int v8;
  unsigned int *v9;
  typedef unsigned int _g4_t_v10[4];
  typedef unsigned int _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  FilenameWithoutPath = s;
  if ( *((uint8_t *)self + 5) == 0 )
    FilenameWithoutPath = (char *)glf::core::FromVoxArchive::getFilenameWithoutPath((glf::core::FromVoxArchive::Self *)s);
  v4 = (const char *)strlen(FilenameWithoutPath);
  glf::core::FromVoxArchive::MurmurHash2DualNoCase(
    (glf::core::FromVoxArchive::Self *)FilenameWithoutPath,
    v4,
    *((uint32_t *)self + 10),
    *((uint32_t *)self + 11),
    v10,
    v11);
  v5 = *((uint32_t *)self + 7);
  result = 0;
  v7 = 0;
  if ( v5 == 0 )
  {
LABEL_9:
    *a3 = v7;
    return result;
  }
  do
  {
    v8 = (v7 + v5) >> 1;
    v9 = (unsigned int *)(*((uint32_t *)self + 8) + 24 * v8);
    if ( *v9 > v10[0] )
    {
LABEL_10:
      v5 = (v7 + v5) >> 1;
      continue;
    }
    if ( *v9 >= v10[0] )
    {
      if ( v9[1] > v11[0] )
        goto LABEL_10;
      if ( v9[1] >= v11[0] )
      {
        v7 = (v7 + v5) >> 1;
        result = 1;
        goto LABEL_9;
      }
    }
    v7 = v8 + 1;
  }
  while ( v7 != v5 );
  *a3 = v7;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::getFileInfo  (binary VA: 0xc855f0)
// Original: glf::core::FromVoxArchive::getFileInfo
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::getFileInfo(glf::core::FromVoxArchive::Self *self, char *s, int *a3, int *a4, bool *a5, int *a6)
{
  int v7;
  int v8;
  int v9;
  int v10[4];

  if ( *((uint8_t *)self + 4) == 0 )
    return 0;
  if ( (uint8_t)glf::core::FromVoxArchive::getHashIndex(self, s, v10) == 0 )
    return 0;
  v7 = v10[0];
  if ( *((uint8_t *)self + 6) != 0 )
  {
    v8 = *((uint32_t *)self + 14);
    v7 = v10[0];
    if ( v8 != 0 && *(uint8_t *)(v8 + v10[0]) != 0 )
      return 0;
  }
  v9 = 24 * v7;
  *a3 = *(uint32_t *)(*((uint32_t *)self + 8) + v9 + 20);
  *a4 = *(uint32_t *)(*((uint32_t *)self + 8) + v9 + 12);
  *a5 = *(uint8_t *)(*((uint32_t *)self + 8) + v9 + 8) & 1;
  *a6 = *(uint32_t *)(*((uint32_t *)self + 8) + v9 + 16);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::overrideFile  (binary VA: 0xc856c0)
// Original: glf::core::FromVoxArchive::overrideFile
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::overrideFile(glf::core::FromVoxArchive::Self *self, char *s, bool *a3)
{
  int v3;
  int v5[4];

  v3 = 0;
  if ( *((uint8_t *)self + 4) != 0
    && *((uint8_t *)self + 6) != 0
    && *((uint32_t *)self + 14) != 0
    && (uint8_t)glf::core::FromVoxArchive::getHashIndex(self, s, v5) != 0 )
  {
    v3 = 1;
    *(uint8_t *)(*((uint32_t *)self + 14) + v5[0]) = *a3;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::isVoxArchiveFormat  (binary VA: 0xc85740)
// Original: glf::core::FromVoxArchive::isVoxArchiveFormat
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::isVoxArchiveFormat(int a1)
{
  int v1;
  int v2;
  uint8_t v4[128];

  v1 = 0;
  if ( a1 != 0 )
  {
    v2 = G4_VCALL<int>(a1, 12, v4, 128) - 128;
    if ( v2 == 0
      && v4[0] == 86
      && v4[1] == 111
      && v4[2] == 120
      && v4[3] == 97
      && v4[4] == 114
      && v4[5] == 99
      && v4[6] == 104 )
    {
      LOBYTE(v2) = v4[7] == 50;
      return v2;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::collisionCheckStart  (binary VA: 0xc857c0)
// Original: glf::core::FromVoxArchive::collisionCheckStart
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::collisionCheckStart(glf::core::FromVoxArchive::Self *self, unsigned int a2, unsigned int a3)
{
  int result;

  result = 1;
  if ( *((uint8_t *)self + 4) != 0 )
  {
    result = 0;
    if ( *((uint32_t *)self + 10) == a2 && *((uint32_t *)self + 11) == a3 )
    {
      *((uint32_t *)self + 16) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::collisionCheckCallback  (binary VA: 0xc85800)
// Original: glf::core::FromVoxArchive::collisionCheckCallback
// ----------------------------------------------------------------------------
bool glf::core::FromVoxArchive::collisionCheckCallback(glf::core::FromVoxArchive::Self *self, unsigned int a2, unsigned int a3)
{
  bool result;
  int v4;
  uint32_t *v5;
  uint32_t *v6;

  result = false;
  if ( *((uint8_t *)self + 4) != 0 )
  {
    v4 = *((uint32_t *)self + 8);
    v5 = (uint32_t *)(v4 + 24 * *((uint32_t *)self + 16));
    v6 = (uint32_t *)(v4 + 24 * *((uint32_t *)self + 7));
    if ( v5 < v6 && a2 >= *v5 )
    {
      if ( *v5 == a2 )
        goto LABEL_11;
      while ( 1 )
      {
        v5 += 6;
        if ( v5 >= v6 || *v5 > a2 )
          break;
        if ( *v5 == a2 )
        {
LABEL_11:
          if ( v5[1] >= a3 )
            break;
        }
      }
    }
    *((uint32_t *)self + 16) = -1431655765 * (((int)(uintptr_t)(v5) - v4) >> 3);
    result = false;
    if ( v5 != v6 && *v5 == a2 )
      return a3 == v5[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::collisionCheck  (binary VA: 0xc85890)
// Original: glf::core::FromVoxArchive::collisionCheck
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::collisionCheck(glf::core::FromVoxArchive::Self *self, glf::core::FromVoxArchive::Self *a2)
{
  int v2;
  unsigned int v4;
  int v5;
  glf::core::FromVoxArchive::Self *v6;
  int v7;
  glf::core::FromVoxArchive::Self *v8;

  v2 = 0;
  if ( *((uint8_t *)self + 4) != 0
    && (uint8_t)glf::core::FromVoxArchive::collisionCheckStart(
                          a2,
                          *((uint32_t *)self + 10),
                          *((uint32_t *)self + 11)) != 0
    && *((uint32_t *)self + 7) != 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = self;
    do
    {
      v8 = v6;
      LOBYTE(v7) = glf::core::FromVoxArchive::collisionCheckCallback(
                     a2,
                     *(uint32_t *)(*((uint32_t *)v6 + 8) + v5),
                     *(uint32_t *)(*((uint32_t *)v6 + 8) + v5 + 4));
      v6 = v8;
      if ( (uint8_t)v2 == 0 )
        v2 = v7;
      ++v4;
      v5 += 24;
    }
    while ( *((uint32_t *)v8 + 7) > v4 );
  }
  return v2;
}



// ============================================================================
// Address:   0xc85950 (size: 32 bytes)
// Symbol:    _ZN3glf4core15FromVoxLinAllocC2Ev
// Demangled: glf::core::FromVoxLinAlloc::FromVoxLinAlloc(void)
// ============================================================================
// Alternative name is '_ZN3glf4core15FromVoxLinAllocC1Ev'
glf::core::FromVoxLinAlloc::Self *glf::core::FromVoxLinAlloc::Construct(
        glf::core::FromVoxLinAlloc::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 8;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxLinAlloc::Destroy  (binary VA: 0xc85970)
// Original: glf::core::FromVoxLinAlloc::~FromVoxLinAlloc
// ----------------------------------------------------------------------------
void glf::core::FromVoxLinAlloc::Destroy(void **self)
{
  if ( *self != nullptr )
    opDelete(*self);
  *(self + 1) = nullptr;
  *self = nullptr;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::Destroy  (binary VA: 0xc859c0)
// Original: glf::core::FromVoxArchive::~FromVoxArchive
// ----------------------------------------------------------------------------
void glf::core::FromVoxArchive::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206DA28));
  glf::core::FromVoxLinAlloc::Destroy(self + 3);
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206DA68));
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::Destroy_eac85a10  (binary VA: 0xc85a10)
// Original: glf::core::FromVoxArchive::~FromVoxArchive
// ----------------------------------------------------------------------------
void glf::core::FromVoxArchive::Destroy_eac85a10(void **self)
{
  glf::core::FromVoxArchive::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxLinAlloc::AddSize  (binary VA: 0xc85a50)
// Original: glf::core::FromVoxLinAlloc::AddSize
// ----------------------------------------------------------------------------
glf::core::FromVoxLinAlloc::Self * glf::core::FromVoxLinAlloc::AddSize(glf::core::FromVoxLinAlloc::Self *self, int a2, int a3)
{
  glf::core::FromVoxLinAlloc::Self *result;

  result = self;
  if ( *((uint32_t *)self + 3) < a3 )
    *((uint32_t *)self + 3) = a3;
  *((uint32_t *)self + 2) = a2 + ((*((uint32_t *)self + 2) - 1) | (a3 - 1)) + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxLinAlloc::Allocate  (binary VA: 0xc85a80)
// Original: glf::core::FromVoxLinAlloc::Allocate
// ----------------------------------------------------------------------------
bool glf::core::FromVoxLinAlloc::Allocate(glf::core::FromVoxLinAlloc::Self *self)
{
  size_t v1;
  int v2;

  v1 = *((uint32_t *)self + 2) + *((uint32_t *)self + 3) - 8;
  *((uint32_t *)self + 2) = v1;
  v2 = opNewArray(v1);
  *(uint32_t *)self = v2;
  *((uint32_t *)self + 1) = v2;
  return v2 != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxLinAlloc::GetMem  (binary VA: 0xc85ad0)
// Original: glf::core::FromVoxLinAlloc::GetMem
// ----------------------------------------------------------------------------
int glf::core::FromVoxLinAlloc::GetMem(glf::core::FromVoxLinAlloc::Self *self, int a2, int a3)
{
  int result;
  unsigned int v4;

  result = ((*((uint32_t *)self + 1) - 1) | (a3 - 1)) + 1;
  v4 = *((uint32_t *)self + 2) + *(uint32_t *)self;
  *((uint32_t *)self + 1) = result + a2;
  if ( result + a2 > v4 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::Construct  (binary VA: 0xc85b10)
// Original: glf::core::FromVoxArchive::FromVoxArchive
// ----------------------------------------------------------------------------
char glf::core::FromVoxArchive::Construct(glf::core::FromVoxArchive::Self *a1, int a2, char *src, char a4, char a5, char a6)
{
  int v6;
  bool v7;
  int Int;
  int v9;
  int Mem;
  int v11;
  int v12;
  char *v13;
  unsigned int i;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef glf::core::FromVoxLinAlloc::Self *_g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[4];
  typedef uint8_t _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[4];
  typedef uint8_t _g4_t_v32[4];
  typedef uint8_t _g4_t_v33[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v26)) > _g4_s7 ? (52u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v27)) > _g4_s8 ? (56u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v28)) > _g4_s9 ? (60u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v29)) > _g4_s10 ? (64u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v30)) > _g4_s11 ? (68u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v31)) > _g4_s12 ? (72u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v32)) > _g4_s13 ? (76u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v33)) > _g4_s14 ? (80u + sizeof(_g4_t_v33)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206DA28);
  v23 = (glf::core::FromVoxLinAlloc::Self *)((glf::core::FromVoxArchive::Self *)((char *)a1 + 12));
  glf::core::FromVoxLinAlloc::Construct((glf::core::FromVoxLinAlloc::Self *)((glf::core::FromVoxArchive::Self *)((char *)a1 + 12)));
  LOBYTE(v6) = a5;
  *((uint8_t *)a1 + 5) = a4;
  *((uint8_t *)a1 + 4) = 0;
  *((uint8_t *)a1 + 7) = a5;
  *((uint8_t *)a1 + 6) = a6;
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 15) = 0;
  *((uint8_t *)a1 + 8) = 0;
  if ( a2 != 0 )
  {
    G4_VCALL<void>(a2, 60, 0, 0);
    v6 = G4_VCALL<int>(a2, 12, v24, 128);
    v7 = v6 == 128;
    LOBYTE(v6) = v6 + 0x80;
    if ( v7 && v24[0] == 86 && v24[1] == 111 && v24[2] == 120 )
    {
      LOBYTE(v6) = v24[3];
      if ( v24[3] == 97 )
      {
        if ( v24[4] != 114 || v24[5] != 99 || v24[6] != 104 || v24[7] != 50 )
          return v6;
        v21 = 0;
      }
      else
      {
        if ( v24[3] != 105 || v24[4] != 110 || v24[5] != 102 || v24[6] != 111 || v24[7] != 50 )
          return v6;
        v21 = 1;
      }
      if ( (uint8_t)(v24[12] - 1) > 1u && a5 != 0 )
        *((uint8_t *)a1 + 7) = 0;
      Int = glf::core::FromVoxArchive::ReadInt(a1, v25);
      *((uint32_t *)a1 + 7) = Int;
      glf::core::FromVoxLinAlloc::AddSize(v23, 24 * Int, 24);
      v22 = 0;
      v9 = a2;
      if ( *((uint8_t *)a1 + 7) != 0 )
      {
        glf::core::FromVoxLinAlloc::AddSize(v23, 4 * *((uint32_t *)a1 + 7), 8);
        v22 = glf::core::FromVoxArchive::ReadInt(a1, v26);
        glf::core::FromVoxLinAlloc::AddSize(v23, v22, 8);
        v9 = a2;
      }
      if ( *((uint8_t *)a1 + 6) != 0 )
      {
        v20 = v9;
        glf::core::FromVoxLinAlloc::AddSize(v23, *((uint32_t *)a1 + 7), 8);
        v9 = v20;
      }
      v19 = v9;
      glf::core::FromVoxLinAlloc::AddSize(v23, strlen(src) + 1, 8);
      LOBYTE(v6) = glf::core::FromVoxLinAlloc::Allocate(v23);
      if ( (uint8_t)v6 != 0 )
      {
        Mem = glf::core::FromVoxLinAlloc::GetMem(v23, 24 * *((uint32_t *)a1 + 7), 24);
        v7 = *((uint8_t *)a1 + 5) == 0;
        *((uint32_t *)a1 + 8) = Mem;
        v6 = v7 ? glf::core::FromVoxArchive::ReadInt(a1, v27) : glf::core::FromVoxArchive::ReadInt(a1, v28);
        if ( v6 != 0 )
        {
          G4_VCALL<void>(v19, 60, v6, 0);
          v11 = G4_VCALL<int>(v19, 12, *((uint32_t *)a1 + 8), 24 * *((uint32_t *)a1 + 7));
          v6 = 24 * *((uint32_t *)a1 + 7);
          if ( v6 == v11 )
          {
            *((uint32_t *)a1 + 10) = glf::core::FromVoxArchive::ReadInt(a1, v32);
            v12 = glf::core::FromVoxArchive::ReadInt(a1, v33);
            v7 = *((uint8_t *)a1 + 7) == 0;
            *((uint32_t *)a1 + 11) = v12;
            if ( v7 )
            {
              *((uint32_t *)a1 + 12) = 0;
              *((uint32_t *)a1 + 15) = 0;
              *((uint32_t *)a1 + 13) = 0;
            }
            else
            {
              v15 = glf::core::FromVoxLinAlloc::GetMem(v23, 4 * *((uint32_t *)a1 + 7), 8);
              v7 = *((uint8_t *)a1 + 5) == 0;
              *((uint32_t *)a1 + 12) = v15;
              if ( v7 )
                v16 = glf::core::FromVoxArchive::ReadInt(a1, v29);
              else
                v16 = glf::core::FromVoxArchive::ReadInt(a1, v30);
              G4_VCALL<void>(v19, 60, v16, 0);
              if ( 4 * *((uint32_t *)a1 + 7) != G4_VCALL<int>(v19, 12, *((uint32_t *)a1 + 12), 4 * *((uint32_t *)a1 + 7)) )
              {
                G4_VCALL<void>(v19, 8);
                LOBYTE(v6) = G4_VCALL<int>(v19, 4);
                return v6;
              }
              *((uint32_t *)a1 + 13) = glf::core::FromVoxLinAlloc::GetMem(v23, v22, 8);
              v17 = glf::core::FromVoxArchive::ReadInt(a1, v31);
              G4_VCALL<void>(v19, 60, v17, 0);
              v6 = G4_VCALL<int>(v19, 12, *((uint32_t *)a1 + 13), v22);
              if ( v6 != v22 )
                return v6;
            }
            if ( *((uint8_t *)a1 + 6) != 0 )
            {
              *((uint32_t *)a1 + 14) = glf::core::FromVoxLinAlloc::GetMem(v23, *((uint32_t *)a1 + 7), 8);
              for ( i = 0; i < *((uint32_t *)a1 + 7); ++i )
                *(uint8_t *)(*((uint32_t *)a1 + 14) + i) = 0;
            }
            else
            {
              *((uint32_t *)a1 + 14) = 0;
            }
            v13 = (char *)glf::core::FromVoxLinAlloc::GetMem(v23, strlen(src) + 1, 8);
            *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(v13);
            LOBYTE(v6) = (uint8_t)(uintptr_t)(strcpy)(v13, src);
            *((uint8_t *)a1 + 8) = 1;
            if ( v21 == 0 )
              *((uint8_t *)a1 + 4) = 1;
          }
        }
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::Destroy  (binary VA: 0xc86040)
// Original: glf::core::CZipReader::~CZipReader
// ----------------------------------------------------------------------------
void glf::core::CZipReader::Destroy(glf::core::CZipReader::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D9E8);
  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 8))(*((uint32_t *)self + 1));
    *((uint32_t *)self + 1) = 0;
  }
  std::_Rb_tree<std::string,std::pair<std::string const,glf::core::SZipFileEntry>,std::_Select1st<std::pair<std::string const,glf::core::SZipFileEntry>>,glf::core::StringComp,std::allocator<std::pair<std::string const,glf::core::SZipFileEntry>>>::_M_erase(
    (int)(uintptr_t)(self) + 16,
    *((void **)self + 6));
  v2 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DA68);
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::Destroy_eac860d0  (binary VA: 0xc860d0)
// Original: glf::core::CZipReader::~CZipReader
// ----------------------------------------------------------------------------
void glf::core::CZipReader::Destroy_eac860d0(glf::core::CZipReader::Self *self)
{
  glf::core::CZipReader::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::GetFilesInDirectory  (binary VA: 0xc86110)
// Original: glf::core::CZipReader::GetFilesInDirectory
// ----------------------------------------------------------------------------
int glf::core::CZipReader::GetFilesInDirectory(glf::core::CZipReader::Self *self, char *s, std::vector<std::string> *a3)
{
  int v3;
  const char *v4;
  char *v5;
  char *v6;
  int v7;
  void *v8;
  typedef char *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v14)) > _g4_s4 ? (30u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 30u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  v3 = *((uint32_t *)self + 7);
  v13 = (char *)self + 20;
  v11 = strlen(s);
  v12 = 0;
  if ( (glf::core::CZipReader::Self *)v3 != (glf::core::CZipReader::Self *)((char *)self + 20) )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(const char **)(v3 + 20);
        v5 = (char *)(strstr(v4, s));
        if ( v5 == v4 )
        {
          v10 = v5;
          if ( strcmp(v5, *(const char **)(v3 + 28)) != 0 )
            break;
        }
        v3 = sub_19048E0(v3);
        if ( v13 == (char *)v3 )
          return v12;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), &v10[v11], (int)(uintptr_t)(&v14));
      v6 = *((char **)a3 + 1);
      if ( v6 == *((char **)a3 + 2) )
      {
        g4_std::vector_string_86c307::M_insert_aux((int *)a3, v6, (int)(uintptr_t)(v15));
      }
      else
      {
        v7 = 0;
        if ( v6 != nullptr )
        {
          g4_std::string::construct_copy(*((uint32_t *)a3 + 1), v15);
          v7 = *((uint32_t *)a3 + 1);
        }
        *((uint32_t *)a3 + 1) = v7 + 4;
      }
      v8 = (void *)(v15[0] - 12);
      if ( (uint32_t *)(v15[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      ++v12;
      v3 = sub_19048E0(v3);
    }
    while ( v13 != (char *)v3 );
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::GetFilesInDirectory  (binary VA: 0xc86250)
// Original: glf::core::FromVoxArchive::GetFilesInDirectory
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::GetFilesInDirectory(glf::core::FromVoxArchive::Self *self, char *s, std::vector<std::string> *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, unsigned int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
  char *v29;
  int v30;
  int v31;
  unsigned int v32;
  char v33;
  int v34;
  int v35;
  char *v36;
  int v37;
  void *v38;
  void *v39;
  int v44;
  char v45;
  int v46;
  glf::FileStreamImpl::Self *v47;
  int v48;
  int v49;
  int v50;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[69];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v40)) > _g4_s0 ? (12u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v41)) > _g4_s1 ? (16u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v42)) > _g4_s2 ? (36u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v43)) > _g4_s3 ? (40u + sizeof(_g4_t_v43)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);

  strlen(s);
  v48 = 0;
  if ( G4_VCALL<uint8_t>(self, 8, glf::core::ARCHIVE_FILE_LISTING_NAME, &v42, &v41, &v40, v43) == 0 )
    return v48;
  v47 = (glf::FileStreamImpl::Self *)opNew(0x34u);
  glf::FileStreamImpl::Construct(v47);
  *(uint32_t *)v47 = ((uint32_t)(uintptr_t)&off_2048D28);
  v29 = (char *)G4_VCALL<int>(self, 12);
  if ( (uint8_t)glf::FileStreamImpl::Open(v47, v29, 1) != 0 )
  {
    G4_VCALL<void>(v47, 60, a25, 0);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&a27), (char *)&unk_1B15112, (int)(uintptr_t)(&a19) + 1);
    v46 = 0;
    while ( v46 < a20 )
    {
      v30 = G4_VCALL<int>(v47, 12, &a28, 256);
      v50 = v30;
      if ( v30 == 0 )
        break;
      v46 += v30;
      v31 = 0;
      do
      {
        v33 = *((uint8_t *)&a28 + v31);
        if ( v33 == 13 || v33 == 10 )
        {
          v32 = *(uint32_t *)(a27 - 12);
          if ( v32 != 0 )
          {
            if ( a13 < v32 && sub_1938760((int)(uintptr_t)(&a27), 0, a13, s) == 0 )
            {
              ++v48;
              if ( a13 > *(uint32_t *)(a27 - 12) )
                sub_1900210("basic_string::substr");
              sub_193A6F0(&a24, &a27, a13, -1);
              v36 = *((char **)a3 + 1);
              if ( v36 == *((char **)a3 + 2) )
              {
                g4_std::vector_string_86c307::M_insert_aux((int *)a3, v36, (int)(uintptr_t)(&a24));
              }
              else
              {
                v37 = 0;
                if ( v36 != nullptr )
                {
                  g4_std::string::construct_copy(v36, &a24);
                  v37 = *((uint32_t *)a3 + 1);
                }
                *((uint32_t *)a3 + 1) = v37 + 4;
              }
              v38 = (void *)(a24 - 12);
              if ( (uint32_t *)(a24 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(a24 - 4), 0xFFFFFFFF) <= 0 )
              {
                v43[67] = (uint32_t)(uintptr_t)((char *)&a19 + 2);
                g4_std::string::Rep::M_destroy(v38);
              }
            }
            g4_std_compat::string_assign((int)(uintptr_t)(&a27), &unk_1B15112, 0);
          }
        }
        else
        {
          v34 = a27;
          v44 = *(uint32_t *)(a27 - 12);
          v49 = v44 + 1;
          if ( (unsigned int)(v44 + 1) > *(uint32_t *)(a27 - 8) || *(int *)(a27 - 4) > 0 )
          {
            v45 = *((uint8_t *)&a28 + v31);
            sub_1939B80(&a27, v49);
            v34 = a27;
            v33 = v45;
            v44 = *(uint32_t *)(a27 - 12);
          }
          *(uint8_t *)(v34 + v44) = v33;
          v35 = a27;
          if ( (uint32_t *)(a27 - 12) != dword_213B808 )
          {
            *(uint32_t *)(a27 - 4) = 0;
            *(uint32_t *)(v35 - 12) = v49;
            *(uint8_t *)(v35 + v49) = 0;
          }
        }
        ++v31;
      }
      while ( v31 != v50 );
    }
    G4_VCALL<void>(v47, 8);
    G4_VCALL<void>(v47, 4);
    v39 = (void *)(a27 - 12);
    if ( (uint32_t *)(a27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(a27 - 4), 0xFFFFFFFF) <= 0 )
    {
      v43[67] = (uint32_t)(uintptr_t)((char *)&a19 + 3);
      g4_std::string::Rep::M_destroy(v39);
    }
    return v48;
  }
  G4_VCALL<void>(v47, 4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FileArchive::Destroy  (binary VA: 0xc865d0)
// Original: glf::core::FileArchive::~FileArchive
// ----------------------------------------------------------------------------
void glf::core::FileArchive::Destroy(glf::core::FileArchive::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DA68);
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::getZipFileName  (binary VA: 0xc865f0)
// Original: glf::core::CZipReader::getZipFileName
// ----------------------------------------------------------------------------
int glf::core::CZipReader::getZipFileName(glf::core::CZipReader::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::isValid  (binary VA: 0xc86600)
// Original: glf::core::CZipReader::isValid
// ----------------------------------------------------------------------------
bool glf::core::CZipReader::isValid(glf::core::CZipReader::Self *self)
{
  return *((uint32_t *)self + 1) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::core::CZipReader::isVoxArchive  (binary VA: 0xc86610)
// Original: glf::core::CZipReader::isVoxArchive
// ----------------------------------------------------------------------------
int glf::core::CZipReader::isVoxArchive()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::getZipFileName  (binary VA: 0xc86620)
// Original: glf::core::FromVoxArchive::getZipFileName
// ----------------------------------------------------------------------------
void * glf::core::FromVoxArchive::getZipFileName(glf::core::FromVoxArchive::Self *self)
{
  void *result;

  result = &unk_1B15112;
  if ( *((uint8_t *)self + 4) != 0 )
    return *((void **)self + 9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::isValid  (binary VA: 0xc86640)
// Original: glf::core::FromVoxArchive::isValid
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::isValid(glf::core::FromVoxArchive::Self *self)
{
  return *((uint8_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::getFileCount  (binary VA: 0xc86650)
// Original: glf::core::FromVoxArchive::getFileCount
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::getFileCount(glf::core::FromVoxArchive::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 4) != 0 )
    return *((uint32_t *)self + 7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FromVoxArchive::isVoxArchive  (binary VA: 0xc86660)
// Original: glf::core::FromVoxArchive::isVoxArchive
// ----------------------------------------------------------------------------
int glf::core::FromVoxArchive::isVoxArchive()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::core::FileArchive::Destroy_eac86670  (binary VA: 0xc86670)
// Original: glf::core::FileArchive::~FileArchive
// ----------------------------------------------------------------------------
void glf::core::FileArchive::Destroy_eac86670(glf::core::FileArchive::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DA68);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::SetConsoleColor  (binary VA: 0xc870b0)
// Original: glf::SetConsoleColor
// ----------------------------------------------------------------------------
void glf::SetConsoleColor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::GetConsoleColor  (binary VA: 0xc870c0)
// Original: glf::GetConsoleColor
// ----------------------------------------------------------------------------
int glf::GetConsoleColor()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::Print  (binary VA: 0xc870d0)
// Original: glf::Print
// ----------------------------------------------------------------------------
int glf::Print()
{
  return ((G4_PlatformLog(4, "GLF", "%s", "")), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glf::ClearColorStack  (binary VA: 0xc873a0)
// Original: glf::ClearColorStack
// ----------------------------------------------------------------------------
void glf::ClearColorStack()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::GetColor  (binary VA: 0xc873b0)
// Original: glf::GetColor
// ----------------------------------------------------------------------------
int glf::GetColor(glf::Self *self, size_t a2)
{
  int v2;
  char **v3;
  size_t n;

  v2 = 0;
  while ( 1 )
  {
    v3 = (char **)(&(&glf::gColors)[2 * v2]);
    n = (size_t)v3[1];
    if ( a2 <= n )
      n = a2;
    if ( strncmp((const char *)self, *v3, n) == 0 )
      break;
    if ( ++v2 == 16 )
      return 16;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::MyMoveFile  (binary VA: 0xc87480)
// Original: glf::MyMoveFile
// ----------------------------------------------------------------------------
bool glf::MyMoveFile(glf::Self *self, char *name)
{
  unlink(name);
  return rename((const char *)self, name) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::MyPrint  (binary VA: 0xc87a40)
// Original: glf::MyPrint
// ----------------------------------------------------------------------------
int glf::MyPrint(glf::Self *self)
{
  pthread_mutex_t **Instance;

  if ( glf::sEnableFileLogger != 0 && glf::FileLogger::GetInstance() != 0 )
  {
    Instance = (pthread_mutex_t **)glf::FileLogger::GetInstance();
    glf::FileLogger::Write(Instance, (char *)self);
  }
  return glf::Print();
}

// ----------------------------------------------------------------------------
// Function: glf::GetStackedTags  (binary VA: 0xc92830)
// Original: glf::GetStackedTags
// ----------------------------------------------------------------------------
void * glf::GetStackedTags()
{
  glf::Logger::Self *v0;

  v0 = (glf::Logger::Self *)glf::Logger::Get();
  return glf::Logger::GetStackedTags(v0);
}

// ----------------------------------------------------------------------------
// Function: glf::PopLogTag  (binary VA: 0xc92860)
// Original: glf::PopLogTag
// ----------------------------------------------------------------------------
int glf::PopLogTag()
{
  glf::Logger::Self *v0;

  v0 = (glf::Logger::Self *)glf::Logger::Get();
  return glf::Logger::PopLogTag(v0);
}

// ----------------------------------------------------------------------------
// Function: glf::PushLogTag  (binary VA: 0xc92890)
// Original: glf::PushLogTag
// ----------------------------------------------------------------------------
int glf::PushLogTag(glf::Self *self)
{
  glf::Logger::Self *v1;

  v1 = (glf::Logger::Self *)glf::Logger::Get();
  return glf::Logger::PushLogTag(v1, (char *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::VCLog  (binary VA: 0xc92c70)
// Original: glf::VCLog
// ----------------------------------------------------------------------------
int glf::VCLog(char *src, int __varargs, char *a3, __gnuc_va_list a4)
{
  const char *v4;
  void *v5;
  char s[264];

  v4 = *(const char **)glf::GetStackedTags();
  if ( *((uint32_t *)v4 - 3) != 0 )
  {
    if ( *src != 0 )
      sprintf(s, "%s/%s", v4, src);
    else
      strcpy(s, v4);
  }
  else if ( *src != 0 )
  {
    strcpy(s, src);
  }
  else
  {
    s[0] = 0;
  }
  v5 = glf::Logger::Get();
  return glf::Logger::VLog((int)(uintptr_t)(v5), s, __varargs, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glf::CLog  (binary VA: 0xc92d30)
// Original: glf::CLog
// ----------------------------------------------------------------------------
int glf::CLog(char *src, int __varargs, char *a3, ...)
{
  va_list va;

  va_start(va, a3);
  return glf::VCLog(src, __varargs, a3, va);
}

// ----------------------------------------------------------------------------
// Function: glf::VLog  (binary VA: 0xc92d70)
// Original: glf::VLog
// ----------------------------------------------------------------------------
int glf::VLog(char *format, int __varargs, char *a3, __gnuc_va_list a4)
{
  void *v4;

  v4 = glf::Logger::Get();
  return glf::Logger::VLog((int)(uintptr_t)(v4), format, __varargs, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glf::Log  (binary VA: 0xc92dc0)
// Original: glf::Log
// ----------------------------------------------------------------------------
int glf::Log(char *format, int a2, char *a3, ...)
{
  void *v3;
  va_list __varargs;

  va_start(__varargs, a3);
  v3 = glf::Logger::Get();
  return glf::Logger::VLog((int)(uintptr_t)(v3), format, a2, a3, __varargs);
}

// ----------------------------------------------------------------------------
// Function: glf::Replace  (binary VA: 0xc97f20)
// Original: glf::Replace
// ----------------------------------------------------------------------------
int glf::Replace(int a1, const char **a2, char **a3)
{
  const char *v3;
  size_t v4;
  int v5;
  size_t v6;
  int result;
  int v8;
  char *s;
  int v10;

  s = *a3;
  v3 = *a2;
  v10 = *((uint32_t *)*a2 - 3);
  while ( 1 )
  {
    v6 = strlen(v3);
    result = g4_std_compat::string_find(a1, v3, 0, v6);
    v8 = result;
    if ( result == -1 )
      break;
    v4 = strlen(s);
    v5 = (int)(uintptr_t)(sub_193A9B0(a1, v8, v10, s, v4));
    g4_std::string::assign_str(a1, v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::intrusive_ptr_release  (binary VA: 0xca1470)
// Original: glf::intrusive_ptr_release
// ----------------------------------------------------------------------------
int glf::intrusive_ptr_release(glf::Self *self)
{
  int result;

  if ( __sync_fetch_and_add((volatile int32_t *)self + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(self, 8);
    return G4_VCALL<int>(self, 16);
  }
  else
  {
    result = *((uint32_t *)self + 1);
    _mm_mfence();
    if ( result == 1 )
      return G4_VCALL<int>(self, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AndroidAccelerometerEvent  (binary VA: 0xcb4b80)
// Original: glf::AndroidAccelerometerEvent
// ----------------------------------------------------------------------------
int glf::AndroidAccelerometerEvent(glf::Self *self, float a2, float a3)
{
  int result;

  result = glf::gImpl;
  if ( glf::gImpl != 0 && *(uint8_t *)(glf::gImpl + 8) != 0 )
    return glf::Gamepad::RaiseAccelerometerEvent((glf::Gamepad::Self *)(glf::gImpl + 1068), *(float *)&self, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitAllDone  (binary VA: 0xcb7b40)
// Original: glf::WaitAllDone
// ----------------------------------------------------------------------------
int glf::WaitAllDone(glf::Self *self, const glf::FileStreamImpl::Self *a2)
{
  int v2;
  char v3; // di
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v9;
  int64_t Milliseconds;

  Milliseconds = glf::GetMilliseconds();
  while ( 2 )
  {
    glf::Mutex::Lock((pthread_mutex_t **)&glf::gDequeMutex);
    v2 = (int)(uintptr_t)((*(uint8_t **)unk_20DF5E8));
    v3 = 0;
    v9 = (((*(uint8_t **)unk_20DF5F0) - (*(uint8_t **)unk_20DF5E8)) >> 2)
       + (((*(uint8_t **)unk_20DF5F8) - (*(uint8_t **)unk_20DF5FC)) >> 2)
       + (((((int)(*(const int *)&dword_20DF604) - (*(const int *)&unk_20DF5F4)) >> 2) - 1) << 7);
    if ( v9 == 0 )
      goto LABEL_11;
    v4 = 0;
    v5 = ((*(uint8_t **)unk_20DF5E8) - (*(uint8_t **)unk_20DF5EC)) >> 2;
    do
    {
      v6 = v5 + v4;
      if ( v5 + v4 < 0 )
      {
        v7 = ((unsigned int)v6 >> 7) | 0xFE000000;
      }
      else
      {
        if ( v6 <= 127 )
        {
          if ( *(glf::Self **)(*(uint32_t *)v2 + 4) == self )
            goto LABEL_10;
          goto LABEL_5;
        }
        v7 = v6 >> 7;
      }
      if ( *(glf::Self **)(*(uint32_t *)(*(uint32_t *)((*(uint8_t **)unk_20DF5F4) + 4 * v7) + 4 * (v6 - (v7 << 7))) + 4) == self )
      {
LABEL_10:
        v3 = 1;
        goto LABEL_11;
      }
LABEL_5:
      ++v4;
      v2 += 4;
    }
    while ( v4 != v9 );
    v3 = 0;
LABEL_11:
    glf::Mutex::Unlock((pthread_mutex_t **)&glf::gDequeMutex);
    if ( v3 != 0 )
    {
      glf::Thread::Sleep((glf::Thread::Self *)((char *)&loc_4 + 1));
      if ( (int)(uintptr_t)(a2) >= 0 && glf::GetMilliseconds() - Milliseconds >= (int)(uintptr_t)(a2) )
        return 0;
      continue;
    }
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::IsValidDir  (binary VA: 0xcba540)
// Original: glf::IsValidDir
// ----------------------------------------------------------------------------
int glf::IsValidDir(glf::Self *self)
{
  int v2;

  if ( glf::Strcmp(self, ".") == 0 )
    return 0;
  LOBYTE(v2) = glf::Strcmp(self, "..") != 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::StartsWith  (binary VA: 0xcbbf50)
// Original: glf::StartsWith
// ----------------------------------------------------------------------------
bool glf::StartsWith(glf::Self *self, char *needle)
{
  return strstr((const char *)self, needle) == (char *)self;
}

// ----------------------------------------------------------------------------
// Function: glf::FindFirstDifferentOf  (binary VA: 0xcbbf90)
// Original: glf::FindFirstDifferentOf
// ----------------------------------------------------------------------------
glf::Self * glf::FindFirstDifferentOf(glf::Self *self, const char *a2)
{
  glf::Self *result;

  result = self;
  if ( *(uint8_t *)self == (uint8_t)(uintptr_t)(a2) )
  {
    do
      result = (glf::Self *)((char *)result + 1);
    while ( *(uint8_t *)result == *(uint8_t *)self );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::StrLenUntil  (binary VA: 0xcbbfb0)
// Original: glf::StrLenUntil
// ----------------------------------------------------------------------------
int glf::StrLenUntil(glf::Self *self, const char *a2)
{
  int result;
  char i;

  result = 0;
  for ( i = *(uint8_t *)self; i != 0; i = *((uint8_t *)self + result) )
  {
    if ( i == (uint8_t)(uintptr_t)(a2) )
      break;
    ++result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::NormalizePath  (binary VA: 0xcbbfe0)
// Original: glf::NormalizePath
// ----------------------------------------------------------------------------
int glf::NormalizePath(glf::Self *self, char *a2, char *s)
{
  glf::Self *v3;
  int v4;
  char *v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  uint32_t *v10;
  int v11;
  char *v12;
  glf::Self *v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  g4_int128_t *v17;
  unsigned int v18;
  char *v19;
  int v20;
  unsigned int v21;
  const char **v22;
  const void **v23;
  unsigned int v24;
  int v25;
  int j;
  int v27;
  glf::Self **v28;
  typedef char _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef size_t _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_i;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[67];
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[70];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (15u + sizeof(_g4_t_v29)) > _g4_s0 ? (15u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v33)) > _g4_s4 ? (24u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v35)) > _g4_s6 ? (32u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v37)) > _g4_s8 ? (40u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v38)) > _g4_s9 ? (40u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_i)) > _g4_s10 ? (44u + sizeof(_g4_t_i)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v40)) > _g4_s11 ? (44u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v41)) > _g4_s12 ? (48u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v42)) > _g4_s13 ? (52u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (320u + sizeof(_g4_t_v43)) > _g4_s14 ? (320u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (324u + sizeof(_g4_t_v44)) > _g4_s15 ? (324u + sizeof(_g4_t_v44)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 15u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 320u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 324u);

  v3 = (glf::Self *)s;
  if ( *s == 0 )
  {
    v4 = 2;
    if ( self != nullptr )
      glf::Strcpy_s(self, a2, ".");
    return v4;
  }
  v34 = 0;
  if ( glf::StartsWith((glf::Self *)s, "/") )
  {
    v34 = 1;
    if ( glf::StartsWith((glf::Self *)s, "//") )
      v34 = 2 - glf::StartsWith((glf::Self *)s, "///");
  }
  v41 = 0;
  v42[64] = (uint32_t)(uintptr_t)(v42);
  do
  {
    if ( v3 == glf::FindFirstDifferentOf(v3, (const char *)&word_2E + 1) )
    {
      v27 = glf::StrLenUntil(v3, (const char *)&word_2E + 1);
      v28 = (glf::Self **)&v42[2 * v41];
      if ( v28 != nullptr )
      {
        *v28 = v3;
        v28[1] = (glf::Self *)v27;
      }
      ++v41;
    }
    v6 = (char *)(strchr((const char *)v3, 47));
    if ( v6 == nullptr )
    {
      v35 = v41;
      goto LABEL_11;
    }
    v3 = (glf::Self *)(v6 + 1);
  }
  while ( v6 != (char *)-1 );
  v35 = v41;
LABEL_11:
  v43 = 0;
  v44[64] = (uint32_t)(uintptr_t)(v44);
  v36 = 0;
  if ( v35 != 0 )
  {
    for ( i = 0; i != v35; ++i )
    {
      v37 = &v42[2 * i];
      v32 = v37[1];
      if ( *(uint8_t *)*v37 == 0 )
        continue;
      v7 = 2;
      if ( v32 <= 2 )
        v7 = v37[1];
      if ( memcmp((const void *)*v37, ".", v7) == 0 )
        continue;
      v8 = 3;
      if ( v32 <= 3 )
        v8 = v37[1];
      v9 = memcmp((const void *)*v37, "..", v8) != 0;
      if ( v34 != 0 )
      {
        if ( v36 != 0 )
        {
LABEL_49:
          v23 = (const void **)&v42[2 * v36 + 66];
          v24 = 3;
          if ( (int)(uintptr_t)(v23[1]) <= 3 )
            v24 = (unsigned int)(uintptr_t)(v23[1]);
          v29 = 0;
          v33 = 1;
          if ( memcmp(*v23, "..", v24) == 0 )
            goto LABEL_22;
          goto LABEL_21;
        }
        v29 = 0;
      }
      else
      {
        v29 = 1;
        if ( v36 != 0 )
          goto LABEL_49;
      }
LABEL_21:
      v33 = 0;
LABEL_22:
      if ( v9 || v29 != 0 || v33 != 0 )
      {
        v10 = &v44[2 * v36];
        if ( v10 != nullptr )
        {
          v11 = v37[1];
          *v10 = *v37;
          v10[1] = v11;
        }
        v36 = ++v43;
      }
      else if ( v36 != 0 )
      {
        v43 = --v36;
      }
    }
  }
  v12 = nullptr;
  if ( self != nullptr )
  {
    v12 = (char *)self;
    if ( v34 != 0 )
    {
      v13 = self;
      v14 = -(int)(uintptr_t)(self) & 0xF;
      if ( v34 <= v14 )
        v14 = v34;
      v15 = 0;
      if ( v14 == 0 )
        goto LABEL_71;
      do
      {
        ++v15;
        *(uint8_t *)v13 = 47;
        v13 = (glf::Self *)((char *)v13 + 1);
      }
      while ( v14 > v15 );
      if ( v34 != v14 )
      {
LABEL_71:
        v38 = v34 - v14;
        v16 = (v34 - v14) >> 4;
        v40 = 16 * v16;
        if ( 16 * v16 == 0 )
          goto LABEL_39;
        v17 = (g4_int128_t *)((char *)self + v14);
        v18 = 0;
        do
        {
          ++v18;
          *v17++ = xmmword_1C7C460;
        }
        while ( v18 < v16 );
        v13 = (glf::Self *)((char *)v13 + v40);
        v15 += v40;
        if ( v38 != v40 )
        {
LABEL_39:
          v19 = (char *)v13 - v15;
          do
            v19[v15++] = 47;
          while ( v34 > v15 );
        }
      }
      v12 = (char *)self + v34;
    }
    *v12 = 0;
  }
  if ( v36 == 0 )
  {
    *v12 = 0;
    return v34 + 1;
  }
  v20 = 0;
  v21 = v34;
  if ( self != nullptr )
  {
    while ( 1 )
    {
      v22 = (const char **)&v44[2 * v20++];
      v31 = (size_t)v22[1];
      v30 = v21;
      strncpy(v12, *v22, v31);
      v12 += v31;
      v21 = v31 + v30;
      if ( v20 == v36 )
        break;
      if ( v20 != 0 )
        *v12++ = 47;
    }
  }
  else
  {
    v25 = 0;
    for ( j = 0; j != v36; ++j )
    {
      if ( j != 0 )
        ++v21;
      v21 += v44[v25 + 1];
      v25 += 2;
    }
  }
  *v12 = 0;
  return v21 + 1;
}

// ----------------------------------------------------------------------------
// Function: glf::VJoinPath  (binary VA: 0xcbc4a0)
// Original: glf::VJoinPath
// ----------------------------------------------------------------------------
char * glf::VJoinPathList(glf::Self *self, size_t max_len, size_t count, const char *const *parts)
{
  char *dst = reinterpret_cast<char *>(self);
  if ( dst == nullptr )
    return nullptr;

  if ( max_len == 0 )
    return dst;

  dst[0] = '\0';
  if ( count == 0 || parts == nullptr )
    return dst;

  char *cur = dst;
  char *end = dst + max_len - 1;
  bool wrote_segment = false;

  for ( size_t i = 0; i < count; ++i )
  {
    const char *seg = parts[i];
    if ( seg == nullptr || seg[0] == '\0' )
      continue;

    if ( wrote_segment && cur > dst )
    {
      if ( cur[-1] == '/' )
      {
        if ( *seg == '/' )
          ++seg;
      }
      else if ( *seg != '/' )
      {
        if ( cur < end )
          *cur++ = '/';
      }
    }

    while ( *seg != '\0' && cur < end )
      *cur++ = *seg++;
    *cur = '\0';
    wrote_segment = true;
  }

  if ( wrote_segment && cur > dst && cur[-1] == '/' )
    *--cur = '\0';

  return dst;
}

// ----------------------------------------------------------------------------
// Function: glf::IsDelimiter  (binary VA: 0xcbcd70)
// Original: glf::IsDelimiter
// ----------------------------------------------------------------------------
int glf::IsDelimiter(int a1, glf::Self *self)
{
  LOBYTE(a1) = (uint8_t)(uintptr_t)(self) == 92;
  return ((uint8_t)(uintptr_t)(self) == 47) | a1;
}

// ----------------------------------------------------------------------------
// Function: glf::IsLastCharDelimiter  (binary VA: 0xcbcd90)
// Original: glf::IsLastCharDelimiter
// ----------------------------------------------------------------------------
int glf::IsLastCharDelimiter(uint32_t *a1)
{
  int result;
  int v2;

  result = 0;
  v2 = *(uint32_t *)(*a1 - 12);
  if ( v2 != 0 )
    return glf::IsDelimiter(*(char *)(*a1 + v2 - 1), (glf::Self *)*(char *)(*a1 + v2 - 1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::IsFirstCharDelimiter  (binary VA: 0xcbcdd0)
// Original: glf::IsFirstCharDelimiter
// ----------------------------------------------------------------------------
int glf::IsFirstCharDelimiter(uint32_t *a1)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(*a1 - 12) != 0 )
    return glf::IsDelimiter(*(char *)*a1, (glf::Self *)*(char *)*a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AppendPath  (binary VA: 0xcbce10)
// Original: glf::AppendPath
// ----------------------------------------------------------------------------
int glf::AppendPath(uint32_t *a1, uint32_t *a2)
{
  char IsLastCharDelimiter; // bp
  int result;
  void *v4;
  uint32_t v5[4];

  if ( *(uint32_t *)(*a1 - 12) == 0 )
    return (int)(uintptr_t)(g4_std::string::assign_str(a1, a2));
  IsLastCharDelimiter = glf::IsLastCharDelimiter(a1);
  if ( IsLastCharDelimiter != (uint8_t)glf::IsFirstCharDelimiter(a2) )
    return (int)(uintptr_t)(g4_std::string::append_str(a1, a2));
  if ( (uint8_t)glf::IsFirstCharDelimiter(a2) == 0 )
  {
    g4_std::string::append((int)(uintptr_t)(a1), "/", 1u);
    return (int)(uintptr_t)(g4_std::string::append_str(a1, a2));
  }
  if ( *(uint32_t *)(*a2 - 12) == 0 )
    sub_1900210("basic_string::substr");
  sub_193A6F0(v5, a2, 1, -1);
  g4_std::string::append_str(a1, v5);
  result = v5[0];
  v4 = (void *)(v5[0] - 12);
  if ( (uint32_t *)(v5[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v4)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AppendPath  (binary VA: 0xcbcf40)
// Original: glf::AppendPath
// ----------------------------------------------------------------------------
int glf::AppendPath(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  glf::AppendPath(a1, a2);
  return glf::AppendPath(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::AppendPath  (binary VA: 0xcbcf90)
// Original: glf::AppendPath
// ----------------------------------------------------------------------------
int glf::AppendPath(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  glf::AppendPath(a1, a2);
  glf::AppendPath(a1, a3);
  return glf::AppendPath(a1, a4);
}

// ----------------------------------------------------------------------------
// Function: glf::JoinPath  (binary VA: 0xcbcff0)
// Original: glf::JoinPath
// ----------------------------------------------------------------------------
uint32_t * glf::JoinPath(uint32_t *a1, uint32_t *a2)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  glf::AppendPath(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::JoinPath  (binary VA: 0xcbd040)
// Original: glf::JoinPath
// ----------------------------------------------------------------------------
uint32_t * glf::JoinPath(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  glf::AppendPath(a1, a2, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::JoinPath  (binary VA: 0xcbd090)
// Original: glf::JoinPath
// ----------------------------------------------------------------------------
uint32_t * glf::JoinPath(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  glf::AppendPath(a1, a2, a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::allocateEphemeralAllocation  (binary VA: 0xcc0d00)
// Original: glf::allocateEphemeralAllocation
// ----------------------------------------------------------------------------
int * glf::allocateEphemeralAllocation(glf::Self *self)
{
  int *Value;
  int *v2;
  unsigned int v3;
  int v4;
  int v5;
  int32_t v6;
  int v7;
  int v8;
  uint32_t v10;
  int v11;
  uint32_t v12;
  int32_t v13;
  int32_t v14;

  Value = (int *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&unk_20DF660, true);
  v2 = (int *)Value[1];
  v3 = ((unsigned int)(uintptr_t)(self) + 7) & 0xFFFFFFFC;
  if ( Value[2] >= (unsigned int)(uintptr_t)(v2) + v3 )
  {
    v8 = *Value;
  }
  else
  {
    v4 = *Value;
    if ( *Value == 0 || __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) != 1 )
      goto LABEL_9;
    v12 = dword_20DF6A0
        + 12
        * (__sync_add_and_fetch(&dword_20DF69C, 1) % (unsigned int)(-1431655765 * ((dword_20DF6A4 - dword_20DF6A0) >> 2)));
    v14 = __sync_fetch_and_add((volatile int32_t *)v12, 1u);
    while ( 1 )
    {
      v5 = *(uint32_t *)(v12 + 4);
      _mm_mfence();
      if ( v14 == v5 )
        break;
      glf::Thread::Sleep(nullptr);
    }
    *(uint32_t *)v4 = *(uint32_t *)(v12 + 8);
    *(uint32_t *)(v12 + 8) = v4;
    __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1u);
    __sync_add_and_fetch(&dword_20DF694, 1u);
    v6 = dword_20DF694;
    _mm_mfence();
    if ( v6 != 0 )
    {
      while ( v6 != __sync_val_compare_and_swap(&dword_20DF694, v6, v6 - 1) )
      {
LABEL_9:
        v6 = dword_20DF694;
        _mm_mfence();
        if ( v6 == 0 )
          goto LABEL_10;
      }
      v10 = dword_20DF6A0
          + 12
          * (__sync_add_and_fetch(&dword_20DF698, 1)
           % (unsigned int)(-1431655765 * ((dword_20DF6A4 - dword_20DF6A0) >> 2)));
      while ( 1 )
      {
        v13 = __sync_fetch_and_add((volatile int32_t *)v10, 1u);
        while ( 1 )
        {
          v11 = *(uint32_t *)(v10 + 4);
          _mm_mfence();
          if ( v13 == v11 )
            break;
          glf::Thread::Sleep(nullptr);
        }
        v8 = *(uint32_t *)(v10 + 8);
        if ( v8 != 0 )
          break;
        __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
        glf::Thread::Sleep(nullptr);
      }
      *(uint32_t *)(v10 + 8) = *(uint32_t *)v8;
      __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
      *(uint32_t *)v8 = 0;
    }
    else
    {
LABEL_10:
      v7 = dword_20DF690;
      v8 = opNewArray(dword_20DF690);
      if ( v8 != 0 )
      {
        *(uint32_t *)(v8 + 4) = 0;
        *(uint32_t *)(v8 + 8) = v7 - 12;
      }
    }
    __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
    *Value = v8;
    v2 = (int *)(v8 + 12);
    Value[1] = v8 + 12;
    Value[2] = v8 + *(uint32_t *)(v8 + 8) + 12;
  }
  *v2 = v8;
  __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
  Value[1] += v3;
  return v2 + 1;
}

// ----------------------------------------------------------------------------
// Function: glf::freeEphemeralAllocation  (binary VA: 0xcc0f00)
// Original: glf::freeEphemeralAllocation
// ----------------------------------------------------------------------------
int32_t glf::freeEphemeralAllocation(glf::Self *self)
{
  int v1;
  int32_t result;
  uint32_t v3;
  int32_t v4;
  int v5;

  glf::TlsNode::GetValue((glf::TlsNode::Self *)&unk_20DF660, true);
  v1 = *((uint32_t *)self - 1);
  *((uint32_t *)self - 1) = 0;
  result = __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    v3 = dword_20DF6A0
       + 12
       * (__sync_add_and_fetch(&dword_20DF69C, 1) % (unsigned int)(-1431655765 * ((dword_20DF6A4 - dword_20DF6A0) >> 2)));
    v4 = __sync_fetch_and_add((volatile int32_t *)v3, 1u);
    while ( 1 )
    {
      v5 = *(uint32_t *)(v3 + 4);
      _mm_mfence();
      if ( v4 == v5 )
        break;
      glf::Thread::Sleep(nullptr);
    }
    result = *(uint32_t *)(v3 + 8);
    *(uint32_t *)v1 = result;
    *(uint32_t *)(v3 + 8) = v1;
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1u);
    __sync_add_and_fetch(&dword_20DF694, 1u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::releaseEphemeralFreeMemory  (binary VA: 0xcc0fd0)
// Original: glf::releaseEphemeralFreeMemory
// ----------------------------------------------------------------------------
int glf::releaseEphemeralFreeMemory()
{
  int result;
  int32_t v1;
  int v2;
  int v3;
  volatile int32_t *v4;
  uint32_t v5;
  int v6;
  uint32_t v7;
  int32_t v8;
  int v9;
  int32_t v10;

LABEL_1:
  result = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_25694)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4));
  _mm_mfence();
  if ( result != 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v1 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_25694)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4));
        _mm_mfence();
        if ( v1 != 0 )
          break;
        v2 = dword_20DF690;
        v3 = opNewArray(dword_20DF690);
        v4 = (volatile int32_t *)v3;
        if ( v3 != 0 )
        {
          *(uint32_t *)(v3 + 4) = 0;
          *(uint32_t *)(v3 + 8) = v2 - 12;
LABEL_7:
          opDeleteArray((void *)v4);
        }
        if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) != 1 )
          goto LABEL_1;
        v5 = dword_20DF6A0
           + 12
           * (__sync_add_and_fetch(&dword_20DF69C, 1)
            % (unsigned int)(-1431655765 * ((dword_20DF6A4 - dword_20DF6A0) >> 2)));
        v10 = __sync_fetch_and_add((volatile int32_t *)v5, 1u);
        while ( 1 )
        {
          v6 = *(uint32_t *)(v5 + 4);
          _mm_mfence();
          if ( v10 == v6 )
            break;
          glf::Thread::Sleep(nullptr);
        }
        *v4 = *(uint32_t *)(v5 + 8);
        *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
        __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
        __sync_add_and_fetch(&dword_20DF694, 1u);
        result = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_25694)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4));
        _mm_mfence();
        if ( result == 0 )
          return result;
      }
      if ( v1 == __sync_val_compare_and_swap(&dword_20DF694, v1, v1 - 1) )
      {
        v7 = dword_20DF6A0
           + 12
           * (__sync_add_and_fetch(&dword_20DF698, 1)
            % (unsigned int)(-1431655765 * ((dword_20DF6A4 - dword_20DF6A0) >> 2)));
        while ( 1 )
        {
          v8 = __sync_fetch_and_add((volatile int32_t *)v7, 1u);
          while ( 1 )
          {
            v9 = *(uint32_t *)(v7 + 4);
            _mm_mfence();
            if ( v8 == v9 )
              break;
            glf::Thread::Sleep(nullptr);
          }
          v4 = *(volatile int32_t **)(v7 + 8);
          if ( v4 != nullptr )
            break;
          __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
          glf::Thread::Sleep(nullptr);
        }
        *(uint32_t *)(v7 + 8) = *v4;
        __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
        *v4 = 0;
        goto LABEL_7;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::reserveEphemeralFreeMemory  (binary VA: 0xcc1170)
// Original: glf::reserveEphemeralFreeMemory
// ----------------------------------------------------------------------------
void glf::reserveEphemeralFreeMemory(glf::Self *self)
{
  glf::Self *v1;
  size_t v2;
  uint32_t *p_st_size;
  int v4;
  int32_t v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  size_t v9;
  uint32_t v10;
  glf::Self *v11;
  uint32_t *v12;

  v1 = self;
  if ( (int)(uintptr_t)(self) > 0 )
  {
    v2 = dword_20DF690;
    p_st_size = &reinterpret_cast<G4Elf32Sym *>(stru_256A4)->st_size;
    do
    {
      v9 = v2;
      v4 = opNewArray(v2);
      if ( v4 != 0 )
      {
        *(uint32_t *)(v4 + 4) = 0;
        *(uint32_t *)(v4 + 8) = v9 - 12;
      }
      v10 = *(int *)((char *)&dword_20B9FF4 + (uint32_t)(uintptr_t)(p_st_size))
          + 12
          * (__sync_add_and_fetch(&dword_20DF69C, 1)
           % (unsigned int)(-1431655765
                          * ((*(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_256A4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4))
                            - *(int *)((char *)&dword_20B9FF4 + (uint32_t)(uintptr_t)(p_st_size))) >> 2)));
      v11 = v1;
      v12 = p_st_size;
      v5 = __sync_fetch_and_add((volatile int32_t *)v10, 1u);
      v6 = (uint32_t *)v4;
      while ( 1 )
      {
        v7 = *(uint32_t *)(v10 + 4);
        _mm_mfence();
        if ( v5 == v7 )
          break;
        glf::Thread::Sleep(nullptr);
      }
      v8 = v6;
      p_st_size = v12;
      *v8 = *(uint32_t *)(v10 + 8);
      *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(v8);
      __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
      __sync_add_and_fetch(&dword_20DF694, 1u);
      v2 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_25694)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4));
      v1 = (glf::Self *)((char *)v11 - v2);
    }
    while ( (int)((int)(uintptr_t)(v11) - v2) > 0 );
  }
}

// ----------------------------------------------------------------------------
// Function: glf::Crc32  (binary VA: 0xcc87b0)
// Original: glf::Crc32
// ----------------------------------------------------------------------------
int glf::Crc32(glf::Self *self, unsigned int a2, const char *a3)
{
  return crc32(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glf::crc32_little_lower  (binary VA: 0xcc87f0)
// Original: glf::crc32_little_lower
// ----------------------------------------------------------------------------
int glf::crc32_little_lower(glf::Self *self, unsigned int a2, const uint8_t *a3)
{
  unsigned int v3;
  const uint8_t *v4;
  unsigned int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int *v31;
  const uint8_t *i;
  unsigned int v33;
  unsigned int v34;
  const uint8_t *v35;
  uint8_t *v36;
  const uint8_t *j;
  int v38;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  const uint8_t *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int *crc_table;

  crc_table = (int *)get_crc_table();
  v3 = ~(unsigned int)(uintptr_t)(self);
  if ( a3 != nullptr )
  {
    v44 = a2;
    if ( (a2 & 3) != 0 )
    {
      v4 = a3;
      v5 = a2;
      while ( 1 )
      {
        v6 = *(uint8_t *)v5++;
        v3 = *(uint32_t *)(*crc_table + 4 * (uint8_t)(v3 ^ *(uint8_t *)(tolower_tab_ + 2 * v6 + 2))) ^ (v3 >> 8);
        if ( --v4 == nullptr )
          break;
        if ( (v5 & 3) == 0 )
        {
          a2 = v5;
          a3 = v4;
          v44 = v5;
          goto LABEL_7;
        }
      }
    }
    else
    {
LABEL_7:
      if ( (unsigned int)(uintptr_t)(a3) > 0x1F )
      {
        v40 = v3;
        v42 = crc_table[2];
        v7 = *crc_table;
        v41 = crc_table[3];
        v43 = crc_table[1];
        v45 = a3;
        v8 = (int *)a2;
        do
        {
          v9 = *v8;
          if ( (unsigned int)*v8 <= 0xFF )
            v9 = *(int16_t *)(tolower_tab_ + 2 * v9 + 2);
          v10 = *(uint32_t *)(v43 + 4 * (uint8_t)((v9 ^ (unsigned int)v40) >> 16))
              ^ *(uint32_t *)(v42 + 4 * (uint8_t)((uint16_t)(v9 ^ v40) >> 8))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)(v9 ^ v40))
              ^ *(uint32_t *)(v7 + 4 * ((v9 ^ (unsigned int)v40) >> 24));
          v11 = v8[1];
          if ( v11 <= 0xFF )
            v11 = *(int16_t *)(tolower_tab_ + 2 * v11 + 2);
          v12 = v11 ^ v10;
          v46 = *(uint32_t *)(v42 + 4 * BYTE1(v12))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)v12)
              ^ *(uint32_t *)(v7 + 4 * HIBYTE(v12));
          v13 = *(uint32_t *)(v43 + 4 * BYTE2(v12));
          v14 = v8[2];
          v47 = v13 ^ v46;
          if ( v14 <= 0xFF )
            v14 = *(int16_t *)(tolower_tab_ + 2 * v14 + 2);
          v15 = v47 ^ v14;
          v48 = *(uint32_t *)(v42 + 4 * BYTE1(v15))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)v15)
              ^ *(uint32_t *)(v7 + 4 * HIBYTE(v15));
          v16 = *(uint32_t *)(v43 + 4 * BYTE2(v15));
          v17 = v8[3];
          v49 = v16 ^ v48;
          if ( v17 <= 0xFF )
            v17 = *(int16_t *)(tolower_tab_ + 2 * v17 + 2);
          v18 = v49 ^ v17;
          v50 = *(uint32_t *)(v42 + 4 * BYTE1(v18))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)v18)
              ^ *(uint32_t *)(v7 + 4 * HIBYTE(v18));
          v19 = *(uint32_t *)(v43 + 4 * BYTE2(v18));
          v20 = v8[4];
          v51 = v19 ^ v50;
          if ( v20 <= 0xFF )
            v20 = *(int16_t *)(tolower_tab_ + 2 * v20 + 2);
          v21 = v51 ^ v20;
          v52 = *(uint32_t *)(v42 + 4 * BYTE1(v21))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)v21)
              ^ *(uint32_t *)(v7 + 4 * HIBYTE(v21));
          v22 = *(uint32_t *)(v43 + 4 * BYTE2(v21));
          v23 = v8[5];
          v53 = v22 ^ v52;
          if ( v23 <= 0xFF )
            v23 = *(int16_t *)(tolower_tab_ + 2 * v23 + 2);
          v24 = v53 ^ v23;
          v54 = *(uint32_t *)(v42 + 4 * BYTE1(v24))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)v24)
              ^ *(uint32_t *)(v7 + 4 * HIBYTE(v24));
          v25 = *(uint32_t *)(v43 + 4 * BYTE2(v24));
          v26 = v8[6];
          v55 = v25 ^ v54;
          if ( v26 <= 0xFF )
            v26 = *(int16_t *)(tolower_tab_ + 2 * v26 + 2);
          v27 = v55 ^ v26;
          v56 = *(uint32_t *)(v42 + 4 * BYTE1(v27))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)v27)
              ^ *(uint32_t *)(v7 + 4 * HIBYTE(v27));
          v28 = *(uint32_t *)(v43 + 4 * BYTE2(v27));
          v29 = v8[7];
          v57 = v28 ^ v56;
          v8 += 8;
          if ( v29 <= 0xFF )
            v29 = *(int16_t *)(tolower_tab_ + 2 * v29 + 2);
          v45 -= 32;
          v40 = *(uint32_t *)(v43 + 4 * (uint8_t)((v57 ^ v29) >> 16))
              ^ *(uint32_t *)(v42 + 4 * (uint8_t)((uint16_t)(v57 ^ v29) >> 8))
              ^ *(uint32_t *)(v41 + 4 * (uint8_t)(v57 ^ v29))
              ^ *(uint32_t *)(v7 + 4 * ((v57 ^ v29) >> 24));
        }
        while ( (unsigned int)(uintptr_t)(v45) > 0x1F );
        v3 = *(uint32_t *)(v43 + 4 * (uint8_t)((v57 ^ v29) >> 16))
           ^ *(uint32_t *)(v42 + 4 * (uint8_t)((uint16_t)(v57 ^ v29) >> 8))
           ^ *(uint32_t *)(v41 + 4 * (uint8_t)(v57 ^ v29))
           ^ *(uint32_t *)(v7 + 4 * ((v57 ^ v29) >> 24));
        v30 = (unsigned int)(uintptr_t)(a3 - 32) & 0xFFFFFFE0;
        a3 = (const uint8_t *)((uint8_t)(uintptr_t)(a3) & 0x1F);
        v44 = a2 + v30 + 32;
      }
      if ( (unsigned int)(uintptr_t)(a3) > 3 )
      {
        v31 = (unsigned int *)v44;
        for ( i = a3; (unsigned int)(uintptr_t)(i) > 3; i -= 4 )
        {
          v33 = *v31++;
          if ( v33 <= 0xFF )
            v33 = *(int16_t *)(tolower_tab_ + 2 * v33 + 2);
          v34 = v3 ^ v33;
          v3 = *(uint32_t *)(crc_table[1] + 4 * BYTE2(v34))
             ^ *(uint32_t *)(crc_table[2] + 4 * BYTE1(v34))
             ^ *(uint32_t *)(crc_table[3] + 4 * (uint8_t)v34)
             ^ *(uint32_t *)(*crc_table + 4 * HIBYTE(v34));
        }
        v35 = a3 - 4;
        a3 = (const uint8_t *)((uint8_t)(uintptr_t)(a3) & 3);
        v44 += 4 * ((unsigned int)(uintptr_t)(v35) >> 2) + 4;
      }
      if ( a3 != nullptr )
      {
        v36 = (uint8_t *)v44;
        for ( j = a3; j != nullptr; --j )
        {
          v38 = *v36++;
          v3 = *(uint32_t *)(*crc_table + 4 * (uint8_t)(v3 ^ *(uint8_t *)(tolower_tab_ + 2 * v38 + 2))) ^ (v3 >> 8);
        }
      }
    }
  }
  return ~v3;
}

// ----------------------------------------------------------------------------
// Function: glf::crc32_big_lower  (binary VA: 0xcc8d10)
// Original: glf::crc32_big_lower
// ----------------------------------------------------------------------------
unsigned int glf::crc32_big_lower(glf::Self *self, unsigned int a2, const uint8_t *a3)
{
  unsigned int v3;
  unsigned int v4;
  int v5;
  int v6;
  int *v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  const uint8_t *v31;
  uint32_t *v32;
  int v33;
  const uint8_t *v34;
  uint8_t *v35;
  const uint8_t *i;
  int v37;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  const uint8_t *v61;
  uint32_t *crc_table;
  unsigned int v63;

  v3 = a2;
  crc_table = (uint32_t *)get_crc_table();
  v4 = ~((((uint16_t)(uintptr_t)(self) & 0xFF00) << 8)
       + ((unsigned int)(uintptr_t)(self) >> 24)
       + ((uint32_t)(uintptr_t)(self) << 24)
       + (((unsigned int)(uintptr_t)(self) >> 8) & 0xFF00));
  if ( a3 != nullptr )
  {
    if ( (a2 & 3) != 0 )
    {
      while ( 1 )
      {
        v5 = *(uint8_t *)v3++;
        v4 = *(uint32_t *)(crc_table[4] + 4 * (HIBYTE(v4) ^ *(int16_t *)(tolower_tab_ + 2 * v5 + 2))) ^ (v4 << 8);
        if ( --a3 == nullptr )
          break;
        if ( (v3 & 3) == 0 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      v63 = v3 - 4;
      if ( (unsigned int)(uintptr_t)(a3) > 0x1F )
      {
        v39 = v4;
        v60 = crc_table[7];
        v6 = crc_table[4];
        v58 = crc_table[5];
        v59 = crc_table[6];
        v61 = a3;
        v7 = (int *)(v3 - 4);
        do
        {
          v8 = v7[1];
          if ( v8 <= 0xFF )
            v8 = *(int16_t *)(tolower_tab_ + 2 * v8 + 2);
          v9 = *(uint32_t *)(v59 + 4 * (uint8_t)((v8 ^ v39) >> 16))
             ^ *(uint32_t *)(v58 + 4 * (uint8_t)((uint16_t)(v8 ^ v39) >> 8))
             ^ *(uint32_t *)(v6 + 4 * (uint8_t)(v8 ^ v39))
             ^ *(uint32_t *)(v60 + 4 * ((v8 ^ v39) >> 24));
          v10 = v7[2];
          if ( v10 <= 0xFF )
            v10 = *(int16_t *)(tolower_tab_ + 2 * v10 + 2);
          v11 = v10 ^ v9;
          v40 = BYTE2(v11);
          v46 = *(uint32_t *)(v6 + 4 * (uint8_t)v11) ^ *(uint32_t *)(v60 + 4 * HIBYTE(v11));
          v12 = *(uint32_t *)(v58 + 4 * BYTE1(v11));
          v13 = v7[3];
          v47 = *(uint32_t *)(v59 + 4 * v40) ^ v12 ^ v46;
          if ( v13 <= 0xFF )
            v13 = *(int16_t *)(tolower_tab_ + 2 * v13 + 2);
          v14 = v47 ^ v13;
          v41 = BYTE2(v14);
          v48 = *(uint32_t *)(v6 + 4 * (uint8_t)v14) ^ *(uint32_t *)(v60 + 4 * HIBYTE(v14));
          v15 = *(uint32_t *)(v58 + 4 * BYTE1(v14));
          v16 = v7[4];
          v49 = *(uint32_t *)(v59 + 4 * v41) ^ v15 ^ v48;
          if ( v16 <= 0xFF )
            v16 = *(int16_t *)(tolower_tab_ + 2 * v16 + 2);
          v17 = v49 ^ v16;
          v42 = BYTE2(v17);
          v50 = *(uint32_t *)(v6 + 4 * (uint8_t)v17) ^ *(uint32_t *)(v60 + 4 * HIBYTE(v17));
          v18 = *(uint32_t *)(v58 + 4 * BYTE1(v17));
          v19 = v7[5];
          v51 = *(uint32_t *)(v59 + 4 * v42) ^ v18 ^ v50;
          if ( v19 <= 0xFF )
            v19 = *(int16_t *)(tolower_tab_ + 2 * v19 + 2);
          v20 = v51 ^ v19;
          v43 = BYTE2(v20);
          v52 = *(uint32_t *)(v6 + 4 * (uint8_t)v20) ^ *(uint32_t *)(v60 + 4 * HIBYTE(v20));
          v21 = *(uint32_t *)(v58 + 4 * BYTE1(v20));
          v22 = v7[6];
          v53 = *(uint32_t *)(v59 + 4 * v43) ^ v21 ^ v52;
          if ( v22 <= 0xFF )
            v22 = *(int16_t *)(tolower_tab_ + 2 * v22 + 2);
          v23 = v53 ^ v22;
          v44 = BYTE2(v23);
          v54 = *(uint32_t *)(v6 + 4 * (uint8_t)v23) ^ *(uint32_t *)(v60 + 4 * HIBYTE(v23));
          v24 = *(uint32_t *)(v58 + 4 * BYTE1(v23));
          v25 = v7[7];
          v55 = *(uint32_t *)(v59 + 4 * v44) ^ v24 ^ v54;
          if ( v25 <= 0xFF )
            v25 = *(int16_t *)(tolower_tab_ + 2 * v25 + 2);
          v26 = v55 ^ v25;
          v7 += 8;
          v45 = BYTE2(v26);
          v56 = *(uint32_t *)(v6 + 4 * (uint8_t)v26) ^ *(uint32_t *)(v60 + 4 * HIBYTE(v26));
          v27 = *(uint32_t *)(v58 + 4 * BYTE1(v26));
          v28 = *v7;
          v57 = *(uint32_t *)(v59 + 4 * v45) ^ v27 ^ v56;
          if ( (unsigned int)*v7 <= 0xFF )
            v28 = *(int16_t *)(tolower_tab_ + 2 * v28 + 2);
          v29 = v57 ^ v28;
          v61 -= 32;
          v39 = *(uint32_t *)(v59 + 4 * BYTE2(v29))
              ^ *(uint32_t *)(v58 + 4 * BYTE1(v29))
              ^ *(uint32_t *)(v6 + 4 * (uint8_t)v29)
              ^ *(uint32_t *)(v60 + 4 * HIBYTE(v29));
        }
        while ( (unsigned int)(uintptr_t)(v61) > 0x1F );
        v4 = *(uint32_t *)(v59 + 4 * BYTE2(v29))
           ^ *(uint32_t *)(v58 + 4 * BYTE1(v29))
           ^ *(uint32_t *)(v6 + 4 * (uint8_t)v29)
           ^ *(uint32_t *)(v60 + 4 * HIBYTE(v29));
        v30 = (unsigned int)(uintptr_t)(a3 - 32) & 0xFFFFFFE0;
        a3 = (const uint8_t *)((uint8_t)(uintptr_t)(a3) & 0x1F);
        v63 += v30 + 32;
      }
      if ( (unsigned int)(uintptr_t)(a3) > 3 )
      {
        v31 = a3;
        v32 = (uint32_t *)v63;
        do
        {
          v33 = *++v32;
          if ( *v32 <= 0xFFu )
            v33 = *(int16_t *)(tolower_tab_ + 2 * v33 + 2);
          v31 -= 4;
          v4 = *(uint32_t *)(crc_table[6] + 4 * (uint8_t)((v4 ^ v33) >> 16))
             ^ *(uint32_t *)(crc_table[5] + 4 * (uint8_t)((uint16_t)(v4 ^ v33) >> 8))
             ^ *(uint32_t *)(crc_table[4] + 4 * (uint8_t)(v4 ^ v33))
             ^ *(uint32_t *)(crc_table[7] + 4 * ((v4 ^ v33) >> 24));
        }
        while ( (unsigned int)(uintptr_t)(v31) > 3 );
        v34 = a3 - 4;
        a3 = (const uint8_t *)((uint8_t)(uintptr_t)(a3) & 3);
        v63 += 4 * ((unsigned int)(uintptr_t)(v34) >> 2) + 4;
      }
      if ( a3 != nullptr )
      {
        v35 = (uint8_t *)(v63 + 4);
        for ( i = a3; i != nullptr; --i )
        {
          v37 = *v35++;
          v4 = *(uint32_t *)(crc_table[4] + 4 * (HIBYTE(v4) ^ *(int16_t *)(tolower_tab_ + 2 * v37 + 2))) ^ (v4 << 8);
        }
      }
    }
  }
  return (~v4 >> 24) + (~v4 << 24) + ((~v4 >> 8) & 0xFF00) + ((~v4 & 0xFF00) << 8);
}

// ----------------------------------------------------------------------------
// Function: glf::Crc32Lower  (binary VA: 0xcc9270)
// Original: glf::Crc32Lower
// ----------------------------------------------------------------------------
int glf::Crc32Lower(glf::Self *self, unsigned int a2, const char *a3)
{
  int result;

  result = 0;
  if ( a2 != 0 )
    return glf::crc32_little_lower(self, a2, (const uint8_t *)a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Adler32  (binary VA: 0xcc92b0)
// Original: glf::Adler32
// ----------------------------------------------------------------------------
int glf::Adler32(glf::Self *self, char *a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v4;
  char *i;
  unsigned int v6;

  v3 = (uint16_t)a3;
  v4 = HIWORD(a3);
  if ( a2 != nullptr )
  {
    for ( i = nullptr; i != a2; ++i )
    {
      v6 = v3 + (uint8_t)i[(uint32_t)(uintptr_t)(self)];
      v3 = v6 % 0xFFF1;
      v4 = (v6 % 0xFFF1 + v4) % 0xFFF1;
    }
  }
  return v3 | (v4 << 16);
}

// ----------------------------------------------------------------------------
// Function: glf::AdlerString32  (binary VA: 0xcc9320)
// Original: glf::AdlerString32
// ----------------------------------------------------------------------------
int glf::AdlerString32(glf::Self *self)
{
  char *v1;

  v1 = (char *)strlen((const char *)self);
  return glf::Adler32(self, v1, 1u);
}

// ----------------------------------------------------------------------------
// Function: glf::adlerString32  (binary VA: 0xcc9370)
// Original: glf::adlerString32
// ----------------------------------------------------------------------------
int glf::adlerString32(glf::Self *self, const char *a2, unsigned int a3, char a4)
{
  unsigned int v4;
  unsigned int v5;
  const char *v6;
  unsigned int v7;
  unsigned int v9;

  v4 = (uint16_t)a3;
  v5 = HIWORD(a3);
  if ( a2 != nullptr )
  {
    v6 = nullptr;
    if ( a4 != 0 )
    {
      do
      {
        v9 = v4 + (v6++)[(uint32_t)(uintptr_t)(self)];
        v4 = v9 % 0xFFF1;
        v5 = (v9 % 0xFFF1 + v5) % 0xFFF1;
      }
      while ( v6 != a2 );
    }
    else
    {
      do
      {
        v7 = v6[(uint32_t)(uintptr_t)(self)];
        if ( v7 <= 0xFF )
          v7 = *(int16_t *)(tolower_tab_ + 2 * v7 + 2);
        ++v6;
        v4 = (v4 + v7) % 0xFFF1;
        v5 = (v4 + v5) % 0xFFF1;
      }
      while ( v6 != a2 );
    }
  }
  return v4 | (v5 << 16);
}

// ----------------------------------------------------------------------------
// Function: glf::Breakpoint  (binary VA: 0xcc9460)
// Original: glf::Breakpoint
// ----------------------------------------------------------------------------
int glf::Breakpoint()
{
  __builtin_debugtrap();
  return putchar(32);
}

// ----------------------------------------------------------------------------
// Function: glf::AssertInner  (binary VA: 0xcc9490)
// Original: glf::AssertInner
// ----------------------------------------------------------------------------
int glf::AssertInner()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: glf::GetSystemCategory  (binary VA: 0xccb150)
// Original: glf::GetSystemCategory
// ----------------------------------------------------------------------------
int * glf::GetSystemCategory()
{
  if ( byte_20DF710 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF710) != 0 )
  {
    dword_20DF718 = (int)((uint32_t)(uintptr_t)&off_206E820);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF710);
    __cxa_atexit((void (*)(void *))glf::SystemCategory::Destroy, &dword_20DF718, &unk_20D1280);
  }
  return (int *)(&dword_20DF718);
}

// ----------------------------------------------------------------------------
// Function: glf::SystemFromWin32  (binary VA: 0xccb1e0)
// Original: glf::SystemFromWin32
// ----------------------------------------------------------------------------
int glf::SystemFromWin32(glf::Self *self)
{
  int i;

  for ( i = 0; i != 109; ++i )
  {
    if ( (glf::Self *)dword_2030B24[4 * i] == self )
      return dword_2030B20[4 * i];
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glf::SystemFromPosix  (binary VA: 0xccb220)
// Original: glf::SystemFromPosix
// ----------------------------------------------------------------------------
int glf::SystemFromPosix(glf::Self *self)
{
  int i;

  for ( i = 0; i != 109; ++i )
  {
    if ( (glf::Self *)dword_2030B28[4 * i] == self )
      return dword_2030B20[4 * i];
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: glf::Win32FromSystem  (binary VA: 0xccb260)
// Original: glf::Win32FromSystem
// ----------------------------------------------------------------------------
char glf::Win32FromSystem(int a1)
{
  int i;
  int v2;

  for ( i = 0; i != 109; ++i )
  {
    if ( dword_2030B20[4 * i] == a1 )
      return dword_2030B24[4 * i];
  }
  LOBYTE(v2) = 1;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::Win32FromPosix  (binary VA: 0xccb2a0)
// Original: glf::Win32FromPosix
// ----------------------------------------------------------------------------
char glf::Win32FromPosix(glf::Self *self)
{
  int i;
  int v2;

  for ( i = 0; i != 109; ++i )
  {
    if ( (glf::Self *)dword_2030B28[4 * i] == self )
      return dword_2030B24[4 * i];
  }
  LOBYTE(v2) = 1;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::PosixFromSystem  (binary VA: 0xccb2e0)
// Original: glf::PosixFromSystem
// ----------------------------------------------------------------------------
char glf::PosixFromSystem(int a1)
{
  int i;
  int v2;

  for ( i = 0; i != 109; ++i )
  {
    if ( dword_2030B20[4 * i] == a1 )
      return dword_2030B28[4 * i];
  }
  LOBYTE(v2) = 2;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::PosixFromWin32  (binary VA: 0xccb320)
// Original: glf::PosixFromWin32
// ----------------------------------------------------------------------------
char glf::PosixFromWin32(glf::Self *self)
{
  int i;
  int v2;

  for ( i = 0; i != 109; ++i )
  {
    if ( (glf::Self *)dword_2030B24[4 * i] == self )
      return dword_2030B28[4 * i];
  }
  LOBYTE(v2) = 2;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::GetErrorMessage  (binary VA: 0xccb360)
// Original: glf::GetErrorMessage
// ----------------------------------------------------------------------------
char * glf::GetErrorMessage(unsigned int a1)
{
  char *result;

  result = (char *)&unk_1B15112;
  if ( a1 <= 0x51 )
    return (char *)(uintptr_t)(glf::sSystemErrorMessage[a1]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::SocketGetLastError  (binary VA: 0xcce0c0)
// Original: glf::SocketGetLastError
// ----------------------------------------------------------------------------
int glf::SocketGetLastError()
{
  return *(uint32_t *)__errno();
}

// ----------------------------------------------------------------------------
// Function: glf::closesocket  (binary VA: 0xcce0e0)
// Original: glf::closesocket
// ----------------------------------------------------------------------------
int glf::closesocket(glf::Self *self)
{
  return close((int)(uintptr_t)(self));
}

// ============================================================================
// Address:   0xcba5e0
// Symbol:    _ZN3glf2FsC2Ev
// ============================================================================
glf::Fs::Self *glf::Fs::Construct(glf::Fs::Self *self)
{
  uint32_t empty_rep = (uint32_t)(uintptr_t)&dword_213B814;
  *(uint8_t *)self = 0;
  for ( int i = 1; i <= 12; ++i )
    *((uint32_t *)self + i) = empty_rep;
  for ( int i = 0; i < 16; ++i )
  {
    char *entry = (char *)self + 56 + 12 * i;
    *(uint32_t *)entry = empty_rep;
    *(uint32_t *)(entry + 4) = empty_rep;
  }
  uint32_t *v3 = (uint32_t *)sub_4EBD10(8u, 1);
  v3[1] = (uint32_t)(uintptr_t)self;
  *v3 = (uint32_t)(uintptr_t)&off_206E328;
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)v3;
  *((uint32_t *)self + 62) = 0;
  glf::Fs::sFs = (uintptr_t)self;
  for ( int i = 0; i != 16; ++i )
    *((uint32_t *)self + i + 63) = (uint32_t)(uintptr_t)((char *)self + 12 * i + 56);
  return (*(glf::Fs::Self *(*)(uint32_t *))(*(uint32_t *)(*v3 + 8)))(v3);
}

// ============================================================================
// Address:   0xcbe7b0, 0xcbe7d0, 0xcbe830, 0xcbe870, 0xcbe8a0, 0xcbe8d0
// ============================================================================
void glf::Fs::Impl::Destroy(glf::Fs::Impl::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_206E2E8;
}

void glf::Fs::Impl::DestroyDeleting(glf::Fs::Impl::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_206E2E8;
  opDelete(self);
}

bool glf::Fs::Impl::DoesFileExist(glf::Fs::Impl::Self *, char *file)
{
  struct stat st;
  return stat(file, &st) == 0;
}

int glf::Fs::Impl::SetCwd(glf::Fs::Impl::Self *, char *path)
{
  return chdir(path);
}

char *glf::Fs::Impl::GetCwd(glf::Fs::Impl::Self *, size_t size, char *buf)
{
  return getcwd(buf, size);
}

bool glf::Fs::Impl::MkDir(int, char *path)
{
  return mkdir(path, 0x1FDu) == 0;
}



