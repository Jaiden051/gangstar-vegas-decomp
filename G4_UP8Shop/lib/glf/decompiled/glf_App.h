#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_App.h
// Library: glf | Module: glf_App
// Binary Address Span: 0xc6c690 .. 0xc72170 (66 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc6c690] (9 bytes) glf::App::OnEvent(glf::CoreEvent const&)
// int glf::App::OnEvent();
// [0xc6c6a0] (41 bytes) glf::App::SetCreationSettings(glf::CreationSettings &)
// void glf::App::SetCreationSettings(int a1, const void *a2);
// [0xc6c6d0] (80 bytes) glf::App::SetPlatformInfos(glf::PlatformInfo &)
// uint32_t *glf::App::SetPlatformInfos(uint32_t *a1, uint32_t *a2);
// [0xc6c720] (29 bytes) glf::App::RunWithResult(void)
// int glf::App::RunWithResult(glf::App *this);
// [0xc6c740] (36 bytes) glf::App::Run(void)
// int glf::App::Run(glf::App *this);
// [0xc6c770] (9 bytes) glf::App::BeginProfilerEvent(char const*)
// void glf::App::BeginProfilerEvent();
// [0xc6c780] (9 bytes) glf::App::EndProfilerEvent(void)
// void glf::App::EndProfilerEvent();
// [0xc6c790] (25 bytes) glf::App::Destroy(void)
// glf::App *glf::App::Destroy(glf::App *this);
// [0xc6c7b0] (9 bytes) glf::App::QueryInfo(char const*,char *,unsigned int &)
// int glf::App::QueryInfo();
// [0xc6c7c0] (77 bytes) glf::App::Deinit(void)
// int glf::App::Deinit(glf::App *this);
// [0xc6c810] (137 bytes) glf::App::~App()
// void glf::App::~App(glf::EventManager **this);
// [0xc6c8a0] (56 bytes) glf::App::~App()
// void glf::App::~App(glf::EventManager **this);
// [0xc6d110] (185 bytes) glf::App::Update(void)
// int glf::App::Update(glf::App *this);
// [0xc6d9e0] (9 bytes) glf::App::IsRunnable(void)const
// int glf::App::IsRunnable();
// [0xc6e010] (204 bytes) glf::App::SetAsMainThread(void)
// pthread_t glf::App::SetAsMainThread(glf::App *this);
// [0xc6e0e0] (117 bytes) glf::App::MyInit(void)
// int glf::App::MyInit(glf::App *this);
// [0xc6e160] (136 bytes) glf::App::UnsetAsMainThread(void)
// int glf::App::UnsetAsMainThread();
// [0xc6e1f0] (13 bytes) glf::App::IsRunning(void)const
// int glf::App::IsRunning(glf::App *this);
// [0xc6e200] (19 bytes) glf::App::Stop(int)
// glf::App *glf::App::Stop(glf::App *this, int a2);
// [0xc6e220] (15 bytes) glf::App::GetReturnValue(void)
// int glf::App::GetReturnValue(glf::App *this);
// [0xc6e230] (17 bytes) glf::App::SetTargetFps(float)
// glf::App *glf::App::SetTargetFps(glf::App *this, float a2);
// [0xc6e250] (15 bytes) glf::App::GetTargetFps(void)const
// long double glf::App::GetTargetFps(glf::App *this);
// [0xc6e260] (24 bytes) glf::App::EnableProfilerEvents(bool)
// uint8_t *glf::App::EnableProfilerEvents(glf::App *this, bool a2);
// [0xc6e280] (23 bytes) glf::App::IsProfilerEventsEnabled(void)const
// int glf::App::IsProfilerEventsEnabled();
// [0xc6e2a0] (12 bytes) glf::App::GetFrameBufferObject(int)
// int glf::App::GetFrameBufferObject(glf::App *this, int a2);
// [0xc6e2b0] (12 bytes) glf::App::HasFrameBufferObject(int)const
// bool glf::App::HasFrameBufferObject(glf::App *this, int a2);
// [0xc6e2c0] (12 bytes) glf::App::Prepare(int)
// bool glf::App::Prepare(glf::App *this, int a2);
// [0xc6e2d0] (35 bytes) glf::App::Present(int)
// int glf::App::Present(glf::App *this, int a2);
// [0xc6e300] (12 bytes) glf::App::GetPlatformInfos(void)
// char *glf::App::GetPlatformInfos(glf::App *this);
// [0xc6e310] (12 bytes) glf::App::GetAppSettings(void)const
// char *glf::App::GetAppSettings(glf::App *this);
// [0xc6e320] (12 bytes) glf::App::GetCreationSettings(void)const
// char *glf::App::GetCreationSettings(glf::App *this);
// [0xc6e330] (99 bytes) glf::App::HasContext(void)const
// int glf::App::HasContext(glf::App *this);
// [0xc6e3a0] (269 bytes) glf::App::ReserveContext(void)
// int glf::App::ReserveContext(glf::App *this);
// [0xc6e4b0] (383 bytes) glf::App::ReleaseContext(void)
// int glf::App::ReleaseContext(glf::App *this);
// [0xc6e630] (9 bytes) glf::App::IsUsingMultithreadedDriver(void)const
// int glf::App::IsUsingMultithreadedDriver();
// [0xc6e640] (13 bytes) glf::App::SetUsingMultithreadedDriver(bool)
// bool glf::App::SetUsingMultithreadedDriver(glf::App *this, bool a2);
// [0xc6e650] (22 bytes) glf::App::GetInstance(void)
// int glf::App::GetInstance();
// [0xc6e840] (12 bytes) glf::App::GetEventMgr(void)
// int glf::App::GetEventMgr(glf::App *this);
// [0xc6ecc0] (12 bytes) glf::App::GetInputMgr(void)
// int glf::App::GetInputMgr(glf::App *this);
// [0xc6ef00] (12 bytes) glf::App::GetFs(void)
// int glf::App::GetFs(glf::App *this);
// [0xc6f040] (12 bytes) glf::App::GetOrientation(void)const
// int glf::App::GetOrientation(glf::App *this);
// [0xc6f050] (15 bytes) glf::App::IsOrientationSupported(glf::Orientation)const
// bool glf::App::IsOrientationSupported(int a1, int a2);
// [0xc6f060] (80 bytes) glf::App::SetOrientation(glf::Orientation)
// int glf::App::SetOrientation(int a1, int a2);
// [0xc6f0b0] (14 bytes) glf::App::SetSupportedOrientations(int)
// glf::App *glf::App::SetSupportedOrientations(glf::App *this, int a2);
// [0xc6f0c0] (27 bytes) glf::App::IsScreenAutoRotating(void)const
// int glf::App::IsScreenAutoRotating(glf::App *this);
// [0xc6f0e0] (27 bytes) glf::App::GetDeviceName(void)const
// int glf::App::GetDeviceName(glf::App *this);
// [0xc6f100] (35 bytes) glf::App::GetWindowSize(int &,int &,int)const
// int *glf::App::GetWindowSize(glf::App *this, int *a2, int *a3);
// [0xc6f130] (293 bytes) glf::App::ConvertPosDeviceToScreen(glf::Point<float> const&,bool)const
// uint16_t *glf::App::ConvertPosDeviceToScreen(uint16_t *a1, glf::App *a2, float *a3, char a4);
// [0xc6f260] (382 bytes) glf::App::ConvertPosScreenToDevice(glf::Point<short> const&,bool)const
// float *glf::App::ConvertPosScreenToDevice(float *a1, glf::App *a2, int16_t *a3, char a4);
// [0xc6f3e0] (216 bytes) glf::App::ConvertPosScreenToNormalizedDevice(glf::Point<short> const&,bool)const
// float *glf::App::ConvertPosScreenToNormalizedDevice(float *a1, glf::App *a2, int16_t *a3, char a4);
// [0xc6f4c0] (176 bytes) glf::App::ConvertPosNormalizedDeviceToScreen(glf::Point<float> const&,bool)const
// uint16_t *glf::App::ConvertPosNormalizedDeviceToScreen(uint16_t *a1, glf::App *a2, float *a3, char a4);
// [0xc6f570] (135 bytes) glf::App::GetScreenSize(int &,int &,int)const
// int *glf::App::GetScreenSize(glf::App *this, int *a2, int *a3, int a4);
// [0xc6f600] (170 bytes) glf::App::ConvertPosScreenToNormalizedScreen(glf::Point<short> const&)const
// float *glf::App::ConvertPosScreenToNormalizedScreen(float *a1, glf::App *a2, int16_t *a3);
// [0xc6f6b0] (128 bytes) glf::App::ConvertPosNormalizedScreenToScreen(glf::Point<float> const&)const
// uint16_t *glf::App::ConvertPosNormalizedScreenToScreen(uint16_t *a1, glf::App *a2, float *a3);
// [0xc6f730] (43 bytes) glf::App::SetRemoteController(glf::remote::Controller *)
// glf::remote::Controller *glf::App::SetRemoteController(glf::App *this, glf::remote::Controller *a2);
// [0xc6f760] (9 bytes) glf::App::ConnectDisplay(int)
// int glf::App::ConnectDisplay();
// [0xc6f770] (9 bytes) glf::App::DisconnectDisplay(int)
// int glf::App::DisconnectDisplay();
// [0xc6f780] (13 bytes) glf::App::GetDisplayStatus(int)
// int glf::App::GetDisplayStatus(glf::App *this, int a2);
// [0xc6f790] (43 bytes) glf::App::StartRemoteController(std::string const&,int)
// int glf::App::StartRemoteController(int a1, int a2, int a3);
// [0xc6f7e0] (685 bytes) glf::App::App(glf::App::CreationFlag)
// int glf::App::App(glf::App *a1);
// [0xc6fa90] (6724 bytes) glf::App::Init(glf::CreationSettings &)
// int glf::App::Init(glf::App *a1, uint32_t *a2);
// [0xc71c30] (12 bytes) glf::App::Impl::IsScreenAutoRotating(void)const
// int glf::App::Impl::IsScreenAutoRotating();
// [0xc71c40] (12 bytes) glf::App::Impl::GetDeviceName(void)const
// char *glf::App::Impl::GetDeviceName(glf::App::Impl *this);
// [0xc71d60] (90 bytes) glf::App::Impl::Present(int)
// int glf::App::Impl::Present(glf::App::Impl *this);
// [0xc720c0] (77 bytes) glf::App::Impl::~Impl()
// void glf::App::Impl::~Impl(glf::App::Impl *this);
// [0xc72170] (85 bytes) glf::App::Impl::~Impl()
// void glf::App::Impl::~Impl(glf::App::Impl *this);
