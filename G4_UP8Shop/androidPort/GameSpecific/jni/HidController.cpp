#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: HidController.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (10 funcs)
// ============================================================================
#include "HidController.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

static bool s_controllerConnected = true;
static uint32_t s_buttonsMask = 0;
static float s_lx = 0.0f, s_ly = 0.0f, s_rx = 0.0f, s_ry = 0.0f;
// ----------------------------------------------------------------------------
// Function: HidController::Initialize  (binary VA: 0x0)
// Original: HidController::Initialize
// ----------------------------------------------------------------------------
void HidController::Initialize()
{ s_controllerConnected = true; }

// ----------------------------------------------------------------------------
// Function: HidController::UpdateFromPlatformPad  (binary VA: 0x0)
// Original: HidController::UpdateFromPlatformPad
// ----------------------------------------------------------------------------
void HidController::UpdateFromPlatformPad(uint32_t buttonsMask, float lx, float ly, float rx, float ry, float, float)
{
    s_controllerConnected = true;
    s_buttonsMask = buttonsMask;
    s_lx = lx; s_ly = ly; s_rx = rx; s_ry = ry;
}

// ----------------------------------------------------------------------------
// Function: HidController::IsConnected  (binary VA: 0x0)
// Original: HidController::IsConnected
// ----------------------------------------------------------------------------
bool HidController::IsConnected()
{ return s_controllerConnected; }

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::Init  (binary VA: 0x4d05c0)
// Original: acp_utils::HidController::Init
// ----------------------------------------------------------------------------
uint32_t * acp_utils::HidController::Init(int a1)
{
  uint32_t *result;
  int v2;
  typedef char _g4_t_v3;
  typedef int _g4_t_v4;
  typedef char _g4_t_v5[1036];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (11u + sizeof(_g4_t_v3)) > _g4_s0 ? (11u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v5)) > _g4_s2 ? (32u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 11u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);

  result = (uint32_t *)&acp_utils::HidController::s_jVM;
  if ( acp_utils::HidController::s_jVM == 0
    && acp_utils::HidController::s_Class == 0
    && acp_utils::HidController::s_RegisterListener == 0
    && acp_utils::HidController::s_UnRegisterListner == 0 )
  {
    v4 = 0;
    acp_utils::HidController::s_jVM = a1;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
    memset(v5, 0, 0x400u);
    strcpy(v5, "com/gameloft/android/GAND/GloftGGSS");
    strcat(v5, "/GLUtils/controller/NativeBridgeHIDControllers");
    v2 = G4_VCALL<int>(v4, 24, v5);
    acp_utils::HidController::s_Class = G4_VCALL<int>(v4, 84, v2);
    acp_utils::HidController::s_RegisterListener = G4_VCALL<int>(v4, 452, acp_utils::HidController::s_Class, "NativeListenerRegistered", "(I)V");
    result = (uint32_t *)G4_VCALL<int>(v4, 452, acp_utils::HidController::s_Class, "NativeListenerUnRegistered", "()V");
    acp_utils::HidController::s_UnRegisterListner = (uintptr_t)result;
    if ( v3 != 0 )
      return (uint32_t *)G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::RegisterListener  (binary VA: 0x4d0850)
// Original: acp_utils::HidController::RegisterListener
// ----------------------------------------------------------------------------
int acp_utils::HidController::RegisterListener(acp_utils::HidController::Self *self)
{
  int v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) != -2 )
    return sub_4BFF00(v2[0], acp_utils::HidController::s_Class, acp_utils::HidController::s_RegisterListener, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
  sub_4BFF00(v2[0], acp_utils::HidController::s_Class, acp_utils::HidController::s_RegisterListener, self);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::UnregisterListener  (binary VA: 0x4d0930)
// Original: acp_utils::HidController::UnregisterListener
// ----------------------------------------------------------------------------
int acp_utils::HidController::UnregisterListener()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  v1 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v1, 65542) != -2 )
    return sub_4BFF00(v1, acp_utils::HidController::s_Class, acp_utils::HidController::s_UnRegisterListner);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v1, 0);
  sub_4BFF00(v1, acp_utils::HidController::s_Class, acp_utils::HidController::s_UnRegisterListner);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::OnControllerStateChanged  (binary VA: 0x4d0a00)
// Original: acp_utils::HidController::OnControllerStateChanged
// ----------------------------------------------------------------------------
int acp_utils::HidController::OnControllerStateChanged(acp_utils::HidController::Self *self)
{
  int result;

  result = (int)acp_utils::HidController::s_ControllerStateCallback;
  if ( acp_utils::HidController::s_ControllerStateCallback != 0 )
    return ((int (*)(uint32_t))acp_utils::HidController::s_ControllerStateCallback)((uint8_t)(uintptr_t)self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::DispatchEventToCallback  (binary VA: 0x4d0ba0)
// Original: acp_utils::HidController::DispatchEventToCallback
// ----------------------------------------------------------------------------
int acp_utils::HidController::DispatchEventToCallback(acp_utils::HidController::Self *self, int64_t a2)
{
  int result;

  result = acp_utils::HidController::s_pHidEventCallback[0];
  if ( acp_utils::HidController::s_pHidEventCallback[0] != 0 )
    return ((int (*)(acp_utils::HidController::Self *, uint32_t, uint32_t))acp_utils::HidController::s_pHidEventCallback[0])(
             self,
             a2,
             HIDWORD(a2));
  return result;
}



// ============================================================================
// Address:   0x4d0c10 (size: 64 bytes)
// Symbol:    _ZN9acp_utils13HidController21RegisterStateCallbackEPFvbE
// Demangled: acp_utils::HidController::RegisterStateCallback(void (*)(bool))
// ============================================================================
int (**acp_utils::HidController::RegisterStateCallback(acp_utils::HidController::Self *self))(uint32_t)
{
  int (**result)(uint32_t);

  result = (int (**)(uint32_t))&acp_utils::HidController::s_ControllerStateCallback;
  if ( acp_utils::HidController::s_ControllerStateCallback == 0 )
  {
    acp_utils::HidController::s_ControllerStateCallback = (uintptr_t)self;
    return (int (**)(uint32_t))acp_utils::HidController::RegisterListener((acp_utils::HidController::Self *)((char *)&loc_4 + 1));
  }
  return result;
}


// ============================================================================
// Address:   0x4d0c50 (size: 45 bytes)
// Symbol:    _ZN9acp_utils13HidController23UnRegisterStateCallbackEv
// Demangled: acp_utils::HidController::UnRegisterStateCallback(void)
// ============================================================================
int (**acp_utils::HidController::UnRegisterStateCallback())(uint32_t)
{
  int (**result)(uint32_t);

  result = (int (**)(uint32_t))&acp_utils::HidController::s_ControllerStateCallback;
  if ( acp_utils::HidController::s_ControllerStateCallback != 0 )
  {
    acp_utils::HidController::s_ControllerStateCallback = 0;
    return (int (**)(uint32_t))acp_utils::HidController::UnregisterListener();
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::RegisterEventCallback  (binary VA: 0x4d0c80)
// Original: acp_utils::HidController::RegisterEventCallback
// ----------------------------------------------------------------------------
uint32_t * acp_utils::HidController::RegisterEventCallback(int a1)
{
  uint32_t *result;

  result = (uint32_t *)acp_utils::HidController::s_pHidEventCallback;
  if ( acp_utils::HidController::s_pHidEventCallback[0] == 0 )
    acp_utils::HidController::s_pHidEventCallback[0] = a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::UnRegisterEventCallback  (binary VA: 0x4d0ca0)
// Original: acp_utils::HidController::UnRegisterEventCallback
// ----------------------------------------------------------------------------
uint32_t * acp_utils::HidController::UnRegisterEventCallback()
{
  acp_utils::HidController::s_pHidEventCallback[0] = 0;
  return (uint32_t *)acp_utils::HidController::s_pHidEventCallback;
}

// ----------------------------------------------------------------------------
// Function: acp_utils::HidController::GetControllerName  (binary VA: 0x4d0cc0)
// Original: acp_utils::HidController::GetControllerName
// ----------------------------------------------------------------------------
acp_utils::HidController::Self * acp_utils::HidController::GetControllerName(acp_utils::HidController::Self *self)
{
  g4_std::string::construct_copy(self, &acp_utils::HidController::s_ControllerName);
  return self;
}

