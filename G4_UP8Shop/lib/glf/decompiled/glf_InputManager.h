#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_InputManager.h
// Library: glf | Module: glf_InputManager
// Binary Address Span: 0xcb4b60 .. 0xcb5f00 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcb4b60] (32 bytes) glf::InputManager::OnEvent(glf::CoreEvent const&)
// int glf::InputManager::OnEvent(int a1, int a2);
// [0xcb4bd0] (2095 bytes) glf::InputManager::InputManager(void)
// glf::InputManager *glf::InputManager::InputManager(glf::InputManager *this);
// [0xcb5400] (13 bytes) glf::InputManager::GetKeyboard(unsigned int)
// int glf::InputManager::GetKeyboard(glf::InputManager *this);
// [0xcb5410] (15 bytes) glf::InputManager::GetMouse(unsigned int)
// int glf::InputManager::GetMouse(glf::InputManager *this);
// [0xcb5420] (15 bytes) glf::InputManager::GetGamepad(unsigned int)
// int glf::InputManager::GetGamepad(glf::InputManager *this);
// [0xcb5430] (12 bytes) glf::InputManager::GetKeyboardCount(void)const
// int glf::InputManager::GetKeyboardCount();
// [0xcb5440] (12 bytes) glf::InputManager::GetMouseCount(void)const
// int glf::InputManager::GetMouseCount();
// [0xcb5450] (12 bytes) glf::InputManager::GetGamepadCount(void)const
// int glf::InputManager::GetGamepadCount();
// [0xcb5460] (101 bytes) glf::InputManager::GetKeyboardIndex(glf::InputDevice const*)
// int glf::InputManager::GetKeyboardIndex(glf::InputManager *this, const glf::InputDevice *a2);
// [0xcb54d0] (101 bytes) glf::InputManager::GetMouseIndex(glf::InputDevice const*)
// int glf::InputManager::GetMouseIndex(glf::InputManager *this, const glf::InputDevice *a2);
// [0xcb5540] (101 bytes) glf::InputManager::GetGamepadIndex(glf::InputDevice const*)
// int glf::InputManager::GetGamepadIndex(glf::InputManager *this, const glf::InputDevice *a2);
// [0xcb55b0] (41 bytes) glf::InputManager::EnableAccelerometer(bool,float)
// int glf::InputManager::EnableAccelerometer(glf::InputManager *this, bool a2, float a3);
// [0xcb55e0] (41 bytes) glf::InputManager::EnableGyro(bool,float)
// int glf::InputManager::EnableGyro(glf::InputManager *this, bool a2, float a3);
// [0xcb5610] (14 bytes) glf::InputManager::IsAccelerometerEnabled(void)const
// int glf::InputManager::IsAccelerometerEnabled(glf::InputManager *this);
// [0xcb5620] (14 bytes) glf::InputManager::IsGyroscopeEnabled(void)const
// int glf::InputManager::IsGyroscopeEnabled(glf::InputManager *this);
// [0xcb5630] (33 bytes) glf::InputManager::EnableSensor(bool)
// int glf::InputManager::EnableSensor(glf::InputManager *this, bool a2);
// [0xcb5660] (9 bytes) glf::InputManager::EmulateGamepadWin32(glf::GamepadType)
// void glf::InputManager::EmulateGamepadWin32();
// [0xcb5670] (228 bytes) glf::InputManager::AddUpdatedDevice(glf::InputDevice *)
// int glf::InputManager::AddUpdatedDevice(pthread_mutex_t **this, glf::InputDevice *a2);
// [0xcb5760] (33 bytes) glf::InputManager::StartDuoProtocol(bool)
// int glf::InputManager::StartDuoProtocol(glf::InputManager *this, bool a2);
// [0xcb5790] (24 bytes) glf::InputManager::StartWirelessDiscovery(void)
// int glf::InputManager::StartWirelessDiscovery(glf::InputManager *this);
// [0xcb57b0] (24 bytes) glf::InputManager::StopWirelessDiscovery(void)
// int glf::InputManager::StopWirelessDiscovery(glf::InputManager *this);
// [0xcb57d0] (505 bytes) glf::InputManager::~InputManager()
// void glf::InputManager::~InputManager(glf::InputManager *this);
// [0xcb59d0] (56 bytes) glf::InputManager::~InputManager()
// void glf::InputManager::~InputManager(glf::InputManager *this);
// [0xcb5a10] (568 bytes) glf::InputManager::UpdateFrame(void)
// int glf::InputManager::UpdateFrame(glf::InputManager *this);
// [0xcb5d20] (9 bytes) glf::InputManager::Impl::UpdateFrame(void)
// void glf::InputManager::Impl::UpdateFrame();
// [0xcb5d60] (70 bytes) glf::InputManager::Impl::EnableAccelerometer(bool,float)
// glf::InputManager::Impl *glf::InputManager::Impl::EnableAccelerometer( glf::InputManager::Impl *this, bool a2, float a3);
// [0xcb5e30] (202 bytes) glf::InputManager::Impl::~Impl()
// void glf::InputManager::Impl::~Impl(glf::InputManager::Impl *this);
// [0xcb5f00] (210 bytes) glf::InputManager::Impl::~Impl()
// void glf::InputManager::Impl::~Impl(glf::InputManager::Impl *this);
