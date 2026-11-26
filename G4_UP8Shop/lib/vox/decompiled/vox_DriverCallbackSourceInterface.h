#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_DriverCallbackSourceInterface.h
// Library: vox | Module: vox_DriverCallbackSourceInterface
// Binary Address Span: 0xffe730 .. 0x10085b0 (43 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xffe730] (647 bytes) vox::DriverCallbackSourceInterface::FreeDisposableData(int,int &,int &)
// int vox::DriverCallbackSourceInterface::FreeDisposableData( vox::DriverCallbackSourceInterface *this, int a2, int *a3, int *a4);
// [0xffecb0] (497 bytes) vox::DriverCallbackSourceInterface::Init(void *,vox::DriverSourceParam const&)
// void vox::DriverCallbackSourceInterface::Init( vox::DriverCallbackSourceInterface *this, uint32_t *a2, const vox::DriverSourceParam *a3);
// [0xffeeb0] (126 bytes) vox::DriverCallbackSourceInterface::Cleanup(void)
// void vox::DriverCallbackSourceInterface::Cleanup(vox::DriverCallbackSourceInterface *this);
// [0xffef30] (161 bytes) vox::DriverCallbackSourceInterface::~DriverCallbackSourceInterface()
// void vox::DriverCallbackSourceInterface::~DriverCallbackSourceInterface(void **this);
// [0xffefe0] (56 bytes) vox::DriverCallbackSourceInterface::~DriverCallbackSourceInterface()
// void vox::DriverCallbackSourceInterface::~DriverCallbackSourceInterface(void **this);
// [0xfff0b0] (172 bytes) vox::DriverCallbackSourceInterface::NeedData(void)
// int vox::DriverCallbackSourceInterface::NeedData(vox::DriverCallbackSourceInterface *this);
// [0xfff160] (162 bytes) vox::DriverCallbackSourceInterface::GetState(void)
// int vox::DriverCallbackSourceInterface::GetState(vox::DriverCallbackSourceInterface *this);
// [0xfff210] (133 bytes) vox::DriverCallbackSourceInterface::Play(void)
// void vox::DriverCallbackSourceInterface::Play(vox::DriverCallbackSourceInterface *this);
// [0xfff2a0] (147 bytes) vox::DriverCallbackSourceInterface::Pause(void)
// void vox::DriverCallbackSourceInterface::Pause(vox::DriverCallbackSourceInterface *this);
// [0xfff340] (193 bytes) vox::DriverCallbackSourceInterface::SetGain(float)
// void vox::DriverCallbackSourceInterface::SetGain(vox::DriverCallbackSourceInterface *this, float a2);
// [0xfff410] (247 bytes) vox::DriverCallbackSourceInterface::SetPitch(float)
// void vox::DriverCallbackSourceInterface::SetPitch(vox::DriverCallbackSourceInterface *this, float a2);
// [0xfff510] (155 bytes) vox::DriverCallbackSourceInterface::GetGain(void)
// long double vox::DriverCallbackSourceInterface::GetGain(vox::DriverCallbackSourceInterface *this);
// [0xfff5b0] (155 bytes) vox::DriverCallbackSourceInterface::GetPitch(void)
// long double vox::DriverCallbackSourceInterface::GetPitch(vox::DriverCallbackSourceInterface *this);
// [0xfff650] (125 bytes) vox::DriverCallbackSourceInterface::GetByteOffset(void)
// int vox::DriverCallbackSourceInterface::GetByteOffset(vox::DriverCallbackSourceInterface *this);
// [0xfff6d0] (141 bytes) vox::DriverCallbackSourceInterface::SetByteOffset(int)
// void vox::DriverCallbackSourceInterface::SetByteOffset(vox::DriverCallbackSourceInterface *this, int a2);
// [0xfff760] (202 bytes) vox::DriverCallbackSourceInterface::SetDSPParameter(int,void *)
// void vox::DriverCallbackSourceInterface::SetDSPParameter( vox::DriverCallbackSourceInterface *this, int a2, char *a3);
// [0xfff830] (124 bytes) vox::DriverCallbackSourceInterface::Update(float)
// void vox::DriverCallbackSourceInterface::Update(vox::DriverCallbackSourceInterface *this, float a2);
// [0xfff930] (384 bytes) vox::DriverCallbackSourceInterface::Set3DParameter(int,void *)
// void vox::DriverCallbackSourceInterface::Set3DParameter( vox::DriverCallbackSourceInterface *this, int a2, uint32_t *a3);
// [0xfffab0] (292 bytes) vox::DriverCallbackSourceInterface::UploadData(void *,int)
// void vox::DriverCallbackSourceInterface::UploadData(vox::DriverCallbackSourceInterface *this, void *a2, int a3);
// [0xfffd50] (689 bytes) vox::DriverCallbackSourceInterface::GetDirectionalGain(void)
// int vox::DriverCallbackSourceInterface::GetDirectionalGain(vox::DriverCallbackSourceInterface *this);
// [0x1000010] (651 bytes) vox::DriverCallbackSourceInterface::GetDistanceGain(void)
// int vox::DriverCallbackSourceInterface::GetDistanceGain(vox::DriverCallbackSourceInterface *this);
// [0x10002a0] (418 bytes) vox::DriverCallbackSourceInterface::GetDopplerPitch(void)
// long double vox::DriverCallbackSourceInterface::GetDopplerPitch(vox::DriverCallbackSourceInterface *this);
// [0x1000450] (4756 bytes) vox::DriverCallbackSourceInterface::Serialize(vox::VoxJsonLinearSerializer &,unsigned long long)
// int vox::DriverCallbackSourceInterface::Serialize(vox::DriverCallbackSourceInterface *a1, int a2, int a3);
// [0x10016f0] (668 bytes) vox::DriverCallbackSourceInterface::GetStereoPanning(int *,int *)
// void vox::DriverCallbackSourceInterface::GetStereoPanning( vox::DriverCallbackSourceInterface *this, int *a2, int *a3);
// [0x1001990] (926 bytes) vox::DriverCallbackSourceInterface::GetNormalizedPosition(float *,float *,float *)
// void vox::DriverCallbackSourceInterface::GetNormalizedPosition( vox::DriverCallbackSourceInterface *this, float *a2, float *a3, float *a4);
// [0x1001d30] (190 bytes) vox::DriverCallbackSourceInterface::GetNbAvailableSamples(int)
// int vox::DriverCallbackSourceInterface::GetNbAvailableSamples(vox::DriverCallbackSourceInterface *this, int a2);
// [0x1001df0] (1870 bytes) vox::DriverCallbackSourceInterface::FillBufferMono16NoInter(int *,int)
// void vox::DriverCallbackSourceInterface::FillBufferMono16NoInter( vox::DriverCallbackSourceInterface *this, int *a2, int a3);
// [0x1002540] (1583 bytes) vox::DriverCallbackSourceInterface::FillBufferStereo16NoInter(int *,int)
// void vox::DriverCallbackSourceInterface::FillBufferStereo16NoInter( vox::DriverCallbackSourceInterface *this, int *a2, int a3);
// [0x1002b70] (622 bytes) vox::DriverCallbackSourceInterface::GetWorkData(unsigned char *,int,int)
// int vox::DriverCallbackSourceInterface::GetWorkData( vox::DriverCallbackSourceInterface *this, uint8_t *a2, int a3, int a4);
// [0x1002de0] (126 bytes) vox::DriverCallbackSourceInterface::FreeAllBuffer(void)
// void vox::DriverCallbackSourceInterface::FreeAllBuffer(vox::DriverCallbackSourceInterface *this);
// [0x1002e60] (162 bytes) vox::DriverCallbackSourceInterface::Stop(void)
// void vox::DriverCallbackSourceInterface::Stop(vox::DriverCallbackSourceInterface *this);
// [0x1002f10] (169 bytes) vox::DriverCallbackSourceInterface::Reset(void)
// void vox::DriverCallbackSourceInterface::Reset(vox::DriverCallbackSourceInterface *this);
// [0x1002fc0] (442 bytes) vox::DriverCallbackSourceInterface::Set3DParameters(vox::ListenerParameters,vox::Vox3DGeneralParameters)
// void vox::DriverCallbackSourceInterface::Set3DParameters( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13, float a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39);
// [0x1003180] (46 bytes) vox::DriverCallbackSourceInterface::SetDriverCallbackPeriod(float)
// int vox::DriverCallbackSourceInterface::SetDriverCallbackPeriod(vox::DriverCallbackSourceInterface *this);
// [0x10031b0] (77 bytes) vox::DriverCallbackSourceInterface::SetDriverSampleRate(int)
// void vox::DriverCallbackSourceInterface::SetDriverSampleRate(vox::DriverCallbackSourceInterface *this);
// [0x1003dd0] (1362 bytes) vox::DriverCallbackSourceInterface::FillBufferMono16(int *,int)
// void vox::DriverCallbackSourceInterface::FillBufferMono16( vox::DriverCallbackSourceInterface *this, int *a2, int a3);
// [0x1004330] (1023 bytes) vox::DriverCallbackSourceInterface::FillBufferStereo16(int *,int)
// void vox::DriverCallbackSourceInterface::FillBufferStereo16( vox::DriverCallbackSourceInterface *this, int *a2, int a3);
// [0x1005fb0] (1216 bytes) vox::DriverCallbackSourceInterface::DriverCallbackSourceInterface(unsigned int)
// void vox::DriverCallbackSourceInterface::DriverCallbackSourceInterface( vox::DriverCallbackSourceInterface *this, unsigned int a2);
// [0x1006ad0] (5744 bytes) vox::DriverCallbackSourceInterface::FillBufferMono16Biquad(int *,int)
// void vox::DriverCallbackSourceInterface::FillBufferMono16Biquad( vox::DriverCallbackSourceInterface *this, int *a2, int a3);
// [0x1008140] (755 bytes) vox::DriverCallbackSourceInterface::FillBuffer(int *,int)
// void vox::DriverCallbackSourceInterface::FillBuffer(vox::DriverCallbackSourceInterface *this, int *a2, int a3);
// [0x1008590] (12 bytes) vox::DriverCallbackSourceInterface::AllowBufferReference(void)
// int vox::DriverCallbackSourceInterface::AllowBufferReference();
// [0x10085a0] (12 bytes) vox::DriverCallbackSourceInterface::GetBufferCount(void)
// int vox::DriverCallbackSourceInterface::GetBufferCount(vox::DriverCallbackSourceInterface *this);
// [0x10085b0] (9 bytes) vox::DriverCallbackSourceInterface::PrintDebug(void)
// void vox::DriverCallbackSourceInterface::PrintDebug();
