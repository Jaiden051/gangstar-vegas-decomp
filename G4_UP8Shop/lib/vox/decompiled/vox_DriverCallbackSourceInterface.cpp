#include "Core/Utils/DecompTypes.h"
#include "vox_DriverCallbackSourceInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FreeDisposableData  (binary VA: 0xffe730)
// Original: vox::DriverCallbackSourceInterface::FreeDisposableData
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::FreeDisposableData(vox::DriverCallbackSourceInterface::Self *self, int a2, int *a3, int *a4)
{
  vox::DriverCallbackSourceInterface::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v4 = self;
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  *a3 = 0;
  *a4 = 0;
  if ( a2 > 0 )
  {
    v23 = *((uint32_t *)self + 28);
    v25 = *((uint32_t *)self + 24);
    v5 = *((uint32_t *)self + 22);
    v26 = 0;
    v22 = -1;
    v21 = 2
        * v23
        * ((int)(float)((float)((float)*((int *)self + 19) * 0.000061035156f)
                      * (float)(((vox::DriverCallbackSourceInterface::s_driverSampleRate
                                * (vox::DriverCallbackSourceInterface::s_driverCallbackPeriod + 1)) >> 14)
                              + 1))
         + 1);
    if ( v5 > 0 )
    {
      v6 = *((uint32_t *)self + 24);
      v18 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = *((uint32_t *)self + 29) + 24 * v6;
        if ( *(uint8_t *)(v8 + 20) == 0 )
        {
          v9 = *(uint32_t *)(v8 + 16) * v23;
          if ( v21 < *(uint32_t *)(v8 + 4) + v18 - v9 )
          {
            v4 = self;
            v22 = v6;
            v26 = v21 + v9 - v18;
            break;
          }
          v18 = *(uint32_t *)(v8 + 4) + v18 - v9;
        }
        ++v7;
        v6 = (v6 + 1) % v5;
        if ( v7 == v5 )
        {
          v4 = self;
          v26 = 0;
          v22 = -1;
          break;
        }
      }
    }
    v10 = v5 - 1;
    v19 = 0;
    if ( v25 != 0 )
      v10 = v25 - 1;
    for ( i = 0; i < v5; ++i )
    {
      v24 = 24 * v10;
      v12 = *((uint32_t *)v4 + 29) + 24 * v10;
      if ( *(uint8_t *)(v12 + 20) == 0 )
      {
        v20 = *(uint32_t *)(v12 + 4);
        v13 = *(uint32_t *)(v12 + 16) * *((uint32_t *)v4 + 28);
        v19 += v20 - v13;
        if ( v10 == v22 )
        {
          v16 = v19 + v13 - a2;
          if ( v26 <= v16 )
          {
            *(uint32_t *)(v12 + 4) = v16;
            goto LABEL_23;
          }
          *(uint32_t *)(v12 + 4) = v26;
          if ( v26 != 0 )
          {
LABEL_23:
            *((uint32_t *)v4 + 23) = (v10 + 1) % *((uint32_t *)v4 + 22);
          }
          else
          {
            *(uint8_t *)(*((uint32_t *)v4 + 29) + v24 + 20) = 1;
            ++*a3;
            *((uint32_t *)v4 + 23) = v10;
          }
          *a4 += v20 - *(uint32_t *)(*((uint32_t *)v4 + 29) + v24 + 4);
          return (int)(uintptr_t)(vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20)));
        }
        if ( a2 <= v19 )
        {
          *(uint32_t *)(v12 + 4) = v19 + v13 - a2;
          *a4 += v20 - *(uint32_t *)(*((uint32_t *)v4 + 29) + v24 + 4);
          *((uint32_t *)v4 + 23) = (v10 + 1) % *((uint32_t *)v4 + 22);
          return (int)(uintptr_t)(vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20)));
        }
        *(uint8_t *)(v12 + 20) = 1;
        ++*a3;
        *a4 += v20;
        v5 = *((uint32_t *)v4 + 22);
      }
      v14 = v10 == 0;
      v15 = v10 - 1;
      v10 = v5 - 1;
      if ( !v14 )
        v10 = v15;
    }
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20)));
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Init  (binary VA: 0xffecb0)
// Original: vox::DriverCallbackSourceInterface::Init
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Init(vox::DriverCallbackSourceInterface::Self *self, uint32_t *a2, const vox::DriverSourceParam::Self *a3)
{
  int v3;
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  typedef vox::Mutex::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v15)) > _g4_s1 ? (40u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v16)) > _g4_s2 ? (44u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v17)) > _g4_s3 ? (48u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v18)) > _g4_s4 ? (52u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v19)) > _g4_s5 ? (56u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v20)) > _g4_s6 ? (60u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  vox::VoxThread::GetCurThreadId(v14);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  *((uint32_t *)self + 7) = *a2;
  *((uint32_t *)self + 8) = a2[1];
  v3 = a2[2];
  *((uint32_t *)self + 9) = v3;
  *((uint32_t *)self + 10) = a2[3];
  *((uint32_t *)self + 28) = *((uint32_t *)self + 7) * (v3 / 8);
  v4 = (float)*((int *)self + 8) / (float)vox::DriverCallbackSourceInterface::s_driverSampleRate;
  *((float *)self + 6) = v4;
  if ( v4 != 0.0 )
  {
    v5 = (float)(0.25 / (float)((float)vox::DriverCallbackSourceInterface::s_driverCallbackPeriod * 0.00006225586f))
       * v4;
    *((float *)self + 20) = v5;
    *((float *)self + 21) = (float)(v5 / v4) * 0.34482756f;
  }
  v6 = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 22) = v6;
  if ( v6 <= 0 )
  {
    *((uint32_t *)self + 22) = 1;
    v6 = 1;
  }
  if ( *((uint32_t *)self + 26) != 0 )
  {
    v7 = *((uint32_t *)self + 30);
    v8 = *((uint32_t *)self + 29);
    if ( v6 != 1 )
    {
      v9 = 0;
      do
      {
        LOBYTE(v20) = 1;
        v18 = 0;
        v19 = 0;
        v10 = *((uint32_t *)self + 31) == v7;
        v11 = *(uint32_t *)(v8 + 8);
        v16 = 0;
        v17 = v11;
        if ( v10 )
        {
          sub_FFE9C0((int)(uintptr_t)(self) + 116, (char *)v7, &v15);
          v7 = *((uint32_t *)self + 30);
          v6 = *((uint32_t *)self + 22);
          v8 = *((uint32_t *)self + 29);
        }
        else
        {
          v12 = 0;
          if ( v7 != 0 )
          {
            *(uint32_t *)v7 = v15;
            *(uint32_t *)(v7 + 4) = v16;
            *(uint32_t *)(v7 + 8) = v17;
            *(uint32_t *)(v7 + 12) = v18;
            *(uint32_t *)(v7 + 16) = v19;
            *(uint32_t *)(v7 + 20) = v20;
            v12 = *((uint32_t *)self + 30);
            v6 = *((uint32_t *)self + 22);
            v8 = *((uint32_t *)self + 29);
          }
          v7 = v12 + 24;
          *((uint32_t *)self + 30) = v12 + 24;
        }
        ++v9;
      }
      while ( v6 - 1 > v9 );
    }
    v13 = -1431655765 * ((v7 - v8) >> 3);
    *((uint32_t *)self + 22) = v13;
    if ( v13 <= 0 )
      *((uint32_t *)self + 25) = -1;
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Cleanup  (binary VA: 0xffeeb0)
// Original: vox::DriverCallbackSourceInterface::Cleanup
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Cleanup(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  *((uint32_t *)self + 30) = *((uint32_t *)self + 29);
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Destroy  (binary VA: 0xffef30)
// Original: vox::DriverCallbackSourceInterface::~DriverCallbackSourceInterface
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Destroy(void **self)
{
  vox::DriverCallbackSourceInterface::Self *v1;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D448));
  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::DriverCallbackSourceInterface::Cleanup((vox::DriverCallbackSourceInterface::Self *)self);
  sub_BA06B0();
  if ( *(self + 29) != nullptr )
    VoxFreeInternal(*(self + 29));
  vox::Mutex::Destroy((vox::Mutex::Self *)(self + 5));
  *(self + 2) = &off_206AF10;
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D528));
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Destroy_eaffefe0  (binary VA: 0xffefe0)
// Original: vox::DriverCallbackSourceInterface::~DriverCallbackSourceInterface
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Destroy_eaffefe0(void **self)
{
  vox::DriverCallbackSourceInterface::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::NeedData  (binary VA: 0xfff0b0)
// Original: vox::DriverCallbackSourceInterface::NeedData
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::NeedData(vox::DriverCallbackSourceInterface::Self *self)
{
  int v1;
  vox::Mutex::Self *v3;
  uint8_t v4;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v4 = 0;
  if ( *((uint32_t *)self + 25) != -1 )
  {
    v1 = *((uint32_t *)self + 29);
    if ( -1431655765 * ((*((uint32_t *)self + 30) - v1) >> 3) != 0 )
      v4 = *(uint8_t *)(v1 + 24 * *((uint32_t *)self + 23) + 20);
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetState  (binary VA: 0xfff160)
// Original: vox::DriverCallbackSourceInterface::GetState
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetState(vox::DriverCallbackSourceInterface::Self *self)
{
  int v1;
  vox::Mutex::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v1 = *((uint32_t *)self + 25);
  if ( v1 == 1 && *(uint8_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 20) != 0 )
    v1 = 3;
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Play  (binary VA: 0xfff210)
// Original: vox::DriverCallbackSourceInterface::Play
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Play(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( *((uint32_t *)self + 25) != -1 )
    *((uint32_t *)self + 25) = 1;
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Pause  (binary VA: 0xfff2a0)
// Original: vox::DriverCallbackSourceInterface::Pause
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Pause(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( *((uint32_t *)self + 25) == 1 )
  {
    *((uint32_t *)self + 25) = 2;
    *((uint32_t *)self + 15) = 0;
    *((uint32_t *)self + 14) = 0;
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::SetGain  (binary VA: 0xfff340)
// Original: vox::DriverCallbackSourceInterface::SetGain
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::SetGain(vox::DriverCallbackSourceInterface::Self *self, float a2)
{
  vox::Mutex::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( a2 <= 1.0 )
  {
    if ( a2 < 0.0 )
      *((uint32_t *)self + 13) = 0;
    else
      *((uint32_t *)self + 13) = (int)(float)(a2 * 16384.0);
  }
  else
  {
    *((uint32_t *)self + 13) = 0x4000;
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::SetPitch  (binary VA: 0xfff410)
// Original: vox::DriverCallbackSourceInterface::SetPitch
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::SetPitch(vox::DriverCallbackSourceInterface::Self *self, float a2)
{
  float v2; // xmm0_4
  int v3;
  bool v4;
  float v5; // xmm0_4
  int v6;
  float v7; // xmm0_4
  vox::Mutex::Self *v8;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v2 = *((float *)self + 21);
  if ( a2 <= v2 )
  {
    v3 = 1;
    if ( a2 <= 0.0 )
      goto LABEL_5;
    v2 = a2;
  }
  v3 = (int)(float)(v2 * 16384.0);
LABEL_5:
  v4 = *((uint32_t *)self + 25) == 1;
  *((uint32_t *)self + 16) = v3;
  if ( v4 )
  {
    v5 = (float)(v3 - *((uint32_t *)self + 17));
    v6 = *((uint32_t *)self + 4);
    v7 = v5 * 0.000061035156f;
    if ( v6 > vox::DriverCallbackSourceInterface::s_driverCallbackPeriod )
      v7 = v7 * (float)((float)vox::DriverCallbackSourceInterface::s_driverCallbackPeriod / (float)v6);
    *((uint32_t *)self + 18) = (int)(float)(v7 * 16384.0);
  }
  else
  {
    *((uint32_t *)self + 17) = v3;
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetGain  (binary VA: 0xfff510)
// Original: vox::DriverCallbackSourceInterface::GetGain
// ----------------------------------------------------------------------------
long double vox::DriverCallbackSourceInterface::GetGain(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v2;
  float v3;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v3 = (float)*((int *)self + 13) * 0.000061035156f;
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetPitch  (binary VA: 0xfff5b0)
// Original: vox::DriverCallbackSourceInterface::GetPitch
// ----------------------------------------------------------------------------
long double vox::DriverCallbackSourceInterface::GetPitch(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v2;
  float v3;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v3 = (float)*((int *)self + 16) * 0.000061035156f;
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetByteOffset  (binary VA: 0xfff650)
// Original: vox::DriverCallbackSourceInterface::GetByteOffset
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetByteOffset(vox::DriverCallbackSourceInterface::Self *self)
{
  int v1;
  vox::Mutex::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v1 = *((uint32_t *)self + 27);
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::SetByteOffset  (binary VA: 0xfff6d0)
// Original: vox::DriverCallbackSourceInterface::SetByteOffset
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::SetByteOffset(vox::DriverCallbackSourceInterface::Self *self, int a2)
{
  vox::Mutex::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  *((uint32_t *)self + 27) = a2;
  if ( a2 > 0 )
    *((uint8_t *)self + 49) = 1;
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::SetDSPParameter  (binary VA: 0xfff760)
// Original: vox::DriverCallbackSourceInterface::SetDSPParameter
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::SetDSPParameter(vox::DriverCallbackSourceInterface::Self *self, int a2, char *a3)
{
  int v3;
  int v4;
  vox::MiniBusManager::Self *Instance;
  char *s1;
  int v7;

  vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s1);
  sub_BA06A0();
  if ( *((int *)self + 26) >= 0 && a2 == 0 )
  {
    v3 = strcasecmp(a3, "AUX1");
    v4 = 0;
    if ( v3 != 0 )
      v4 = 2 - (strcasecmp(a3, "AUX2") == 0);
    v7 = v4;
    Instance = vox::MiniBusManager::GetInstance();
    if ( Instance != nullptr )
      vox::MiniBusManager::AttachDataGeneratorToBus((int)(uintptr_t)(Instance), v7, (int)(uintptr_t)(self) + 8);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Update  (binary VA: 0xfff830)
// Original: vox::DriverCallbackSourceInterface::Update
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Update(vox::DriverCallbackSourceInterface::Self *self, float a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  *((uint32_t *)self + 4) += ((int)(float)(a2 * 16384.0) - *((uint32_t *)self + 4)) >> 3;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Set3DParameter  (binary VA: 0xfff930)
// Original: vox::DriverCallbackSourceInterface::Set3DParameter
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Set3DParameter(vox::DriverCallbackSourceInterface::Self *self, int a2, uint32_t *a3)
{
  vox::Mutex::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( *((uint32_t *)self + 26) != 0 )
  {
    switch ( a2 )
    {
      case 0:
        *((uint32_t *)self + 41) = *a3;
        break;
      case 1:
        *((uint32_t *)self + 42) = *a3;
        break;
      case 2:
        *((uint32_t *)self + 43) = *a3;
        break;
      case 3:
        *((uint32_t *)self + 44) = *a3;
        break;
      case 4:
        *((uint32_t *)self + 45) = *a3;
        break;
      case 5:
        *((uint32_t *)self + 46) = *a3;
        break;
      case 6:
        *((uint32_t *)self + 47) = *a3;
        break;
      case 7:
        *((uint32_t *)self + 32) = *a3;
        *((uint32_t *)self + 33) = a3[1];
        *((uint32_t *)self + 34) = a3[2];
        break;
      case 8:
        *((uint32_t *)self + 35) = *a3;
        *((uint32_t *)self + 36) = a3[1];
        *((uint32_t *)self + 37) = a3[2];
        break;
      case 9:
        *((uint32_t *)self + 38) = *a3;
        *((uint32_t *)self + 39) = a3[1];
        *((uint32_t *)self + 40) = a3[2];
        break;
      default:
        break;
    }
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::UploadData  (binary VA: 0xfffab0)
// Original: vox::DriverCallbackSourceInterface::UploadData
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::UploadData(vox::DriverCallbackSourceInterface::Self *self, void *a2, int a3)
{
  uint32_t *v3;
  vox::Mutex::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( a3 > 0
    && *((uint32_t *)self + 25) != -1
    && *((uint8_t *)(v3 = (uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 23))) + 20) != 0 )
  {
    *v3 = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 23) + 4) = a3;
    *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 23) + 8) = a3;
    *(uint8_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 23) + 20) = 0;
    *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 23) + 12) = 0;
    *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 23) + 16) = 0;
    *((uint32_t *)self + 23) = (*((uint32_t *)self + 23) + 1) % *((uint32_t *)self + 22);
    vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
    sub_BA06B0();
  }
  else
  {
    vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
    sub_BA06B0();
  }
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetDirectionalGain  (binary VA: 0xfffd50)
// Original: vox::DriverCallbackSourceInterface::GetDirectionalGain
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetDirectionalGain(vox::DriverCallbackSourceInterface::Self *self)
{
  float v1; // xmm0_4
  int v2;
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  vox::VoxThread::Self *v13;
  float v14;
  float v15;

  vox::VoxThread::GetCurThreadId(v13);
  sub_BA06A0();
  v1 = *((float *)self + 45);
  if ( v1 >= 360.0 )
    goto LABEL_2;
  v4 = *((float *)self + 38);
  v5 = *((float *)self + 39);
  if ( v4 == 0.0 )
  {
    if ( v5 == 0.0 )
    {
      v15 = *((float *)self + 40);
      if ( v15 == 0.0 )
        goto LABEL_2;
    }
    else
    {
      v15 = *((float *)self + 40);
    }
    if ( *((uint32_t *)self + 41) != 0 )
      goto LABEL_8;
LABEL_16:
    v6 = vox::DriverCallbackSourceInterface::s_listenerParameters - *((float *)self + 32);
    v7 = (*(const float *)&unk_20E2024) - *((float *)self + 33);
    v8 = (*(const float *)&unk_20E2028) - *((float *)self + 34);
    goto LABEL_9;
  }
  v15 = *((float *)self + 40);
  if ( *((uint32_t *)self + 41) == 0 )
    goto LABEL_16;
LABEL_8:
  v6 = -*((float *)self + 32);
  v7 = -*((float *)self + 33);
  v8 = -*((float *)self + 34);
LABEL_9:
  v14 = (float)((float)(v7 * v5) + (float)(v6 * v4)) + (float)(v15 * v8);
  v9 = acos(sqrt((float)((float)(v14 * v14)
                       / (float)((float)((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8))
                               * (float)((float)((float)(v5 * v5) + (float)(v15 * v15)) + (float)(v4 * v4))))));
  v10 = (float)(v9 * 180.0) * 0.3183098861837907;
  if ( v14 < 0.0 )
    v10 = 180.0 - v10;
  v11 = v1 * 0.5;
  if ( v10 > v11 )
  {
    v12 = 0.5 * *((float *)self + 46);
    if ( v12 <= v10 )
    {
      v2 = (int)(float)(16384.0 * *((float *)self + 47));
      goto LABEL_3;
    }
    if ( (float)(v12 - v11) > 0.0 )
    {
      v2 = (int)(float)((float)((float)((float)(v12 - v10) + (float)((float)(v10 - v11) * *((float *)self + 47)))
                              / (float)(v12 - v11))
                      * 16384.0);
      goto LABEL_3;
    }
  }
LABEL_2:
  v2 = 0x4000;
LABEL_3:
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetDistanceGain  (binary VA: 0x1000010)
// Original: vox::DriverCallbackSourceInterface::GetDistanceGain
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetDistanceGain(vox::DriverCallbackSourceInterface::Self *self)
{
  float v1; // xmm3_4
  int v2;
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  int v7;
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  vox::VoxThread::Self *v18;
  int v19;

  vox::VoxThread::GetCurThreadId(v18);
  sub_BA06A0();
  v1 = *((float *)self + 44);
  v2 = *((uint32_t *)self + 41);
  v3 = *((float *)self + 32);
  if ( *((uint32_t *)self + 7) == 1 )
  {
    if ( v2 != 0 )
    {
      v4 = *((float *)self + 33);
      v5 = *((float *)self + 34);
      if ( v3 == 0.0 && v4 == 0.0 && v5 == 0.0 )
        goto LABEL_5;
    }
    else
    {
      v4 = *((float *)self + 33);
      v5 = *((float *)self + 34);
    }
    v1 = v1 * (*(const float *)&unk_20C28A4);
  }
  else
  {
    v4 = *((float *)self + 33);
    v5 = *((float *)self + 34);
  }
  if ( v2 == 0 )
  {
    v3 = v3 - vox::DriverCallbackSourceInterface::s_listenerParameters;
    v4 = v4 - (*(const float *)&unk_20E2024);
    v5 = v5 - (*(const float *)&unk_20E2028);
  }
LABEL_5:
  v6 = sqrt((float)((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5)));
  if ( vox::DriverCallbackSourceInterface::s_distanceModel == 1 )
  {
    v9 = *((float *)self + 43);
    if ( v9 > v6 )
    {
      v10 = v9 + 0.0;
      if ( (float)(v9 + 0.0) <= 0.0 )
        goto LABEL_24;
    }
    else
    {
      v10 = (float)((float)(fminf(v6, *((float *)self + 42)) - v9) * v1) + v9;
      if ( v10 <= 0.0 )
        goto LABEL_24;
    }
    v7 = (int)(float)((float)(v9 / v10) * 16384.0);
    goto LABEL_8;
  }
  if ( vox::DriverCallbackSourceInterface::s_distanceModel == 2 )
  {
    v11 = *((float *)self + 43);
    v12 = *((float *)self + 42);
    if ( v11 > v6 )
      v13 = *((float *)self + 43);
    else
      v13 = fminf(v6, v12);
    v14 = v12 - v11;
    if ( v14 > 0.0 )
    {
      v7 = (int)(float)(fmaxf(1.0 - (float)((float)((float)(v13 - v11) * v1) / v14), 0.0) * 16384.0);
      goto LABEL_8;
    }
LABEL_24:
    v7 = 0x4000;
    goto LABEL_8;
  }
  v7 = 0x4000;
  if ( vox::DriverCallbackSourceInterface::s_distanceModel == 3 && v1 > 0.0 )
  {
    v15 = *((float *)self + 43);
    if ( v15 > 0.0 )
    {
      v16 = *((float *)self + 43);
      if ( v15 <= v6 )
        v16 = fminf(*((float *)self + 42), v6);
      v17 = pow((float)(v16 / v15), (float)-v1);
      v7 = (int)(float)(v17 * 16384.0);
    }
  }
LABEL_8:
  v19 = v7;
  sub_BA06B0();
  return v19;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetDopplerPitch  (binary VA: 0x10002a0)
// Original: vox::DriverCallbackSourceInterface::GetDopplerPitch
// ----------------------------------------------------------------------------
long double vox::DriverCallbackSourceInterface::GetDopplerPitch(vox::DriverCallbackSourceInterface::Self *self)
{
  float v1; // xmm2_4
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  vox::VoxThread::Self *v11;

  vox::VoxThread::GetCurThreadId(v11);
  sub_BA06A0();
  if ( vox::DriverCallbackSourceInterface::s_dopplerFactor <= 0.0 )
    goto LABEL_8;
  if ( *((uint32_t *)self + 41) != 0 )
  {
    v1 = -*((float *)self + 32);
    v2 = -*((float *)self + 33);
    v3 = -*((float *)self + 34);
    v4 = 0.0;
  }
  else
  {
    v1 = vox::DriverCallbackSourceInterface::s_listenerParameters - *((float *)self + 32);
    v2 = (*(const float *)&unk_20E2024) - *((float *)self + 33);
    v3 = (*(const float *)&unk_20E2028) - *((float *)self + 34);
    v4 = (float)((float)((*(const float *)&unk_20E2030) * v2) + (float)((*(const float *)&unk_20E202C) * v1)) + (float)((*(const float *)&unk_20E2034) * v3);
  }
  v5 = (float)(v2 * v2) + (float)(v1 * v1);
  v6 = (float)((float)(v2 * *((float *)self + 36)) + (float)(v1 * *((float *)self + 35)))
     + (float)(v3 * *((float *)self + 37));
  v7 = sqrt((float)(v5 + (float)(v3 * v3)));
  v8 = v7 * vox::DriverCallbackSourceInterface::s_alteredSpeedOfSound;
  if ( (float)(v8 - v6) <= 0.0 )
LABEL_8:
    v9 = 1.0;
  else
    v9 = fminf(fmaxf((float)((float)(v6 - fminf(v8, v4)) / (float)(v8 - v6)) + 1.0, 0.001f), 2.9f);
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Serialize  (binary VA: 0x1000450)
// Original: vox::DriverCallbackSourceInterface::Serialize
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::Serialize(vox::DriverCallbackSourceInterface::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char *v6;
  void *v7;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  void *v17;
  char *v18;
  int v19;
  char *v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  float v25; // xmm0_4
  long double DopplerPitch; // fst7
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char *v37;
  char *v38;
  int v39;
  char v40;
  const char *v41;
  size_t v42;
  int v43;
  int v44;
  int v45;
  int v46;
  float v47;
  char *v48;
  char *v49;
  char *v50;
  char *v51;
  char *v52;
  char *v53;
  char *v54;
  char *v55;
  char *s;
  char v57;
  float v58;
  char *v59;
  int v60;
  int v61;
  int v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  double v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  int v80;

  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)a1 + 20));
  v3 = *(uint32_t *)(a2 + 200);
  v60 = a2 + 200;
  v59 = (char *)(a2 + 192);
  if ( v3 != a2 + 200 && *(uint8_t *)(v3 + 8) != 0 )
  {
    v9 = *(uint32_t *)(a2 + 192);
    if ( v9 == a2 + 192 )
      goto LABEL_8;
    if ( *(uint8_t *)(v9 + 8) != 0 )
      *(uint8_t *)(v9 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v48 = *(char **)(a2 + 192);
  v4 = opNew(0xCu);
  if ( v4 != -8 )
    *(uint8_t *)(v4 + 8) = 1;
  sub_1901920(v4, v48);
  v49 = *(char **)(a2 + 200);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 0;
  sub_1901920(v5, v49);
  g4_std_compat::ostream_write(a2 + 12, "{", 1);
LABEL_8:
  if ( (a3 & 0x400000) != 0 )
  {
    v18 = *(char **)(a2 + 192);
    v62 = *((uint32_t *)a1 + 13);
    if ( v18 != v59 )
    {
      if ( v18[8] != 0 )
      {
        v18[8] = 0;
        v19 = a2 + 12;
      }
      else
      {
        v19 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
      }
      g4_std_compat::ostream_write(v19, "\"", 1);
      g4_std_compat::ostream_write(v19, "gain", 4);
      g4_std_compat::ostream_write(v19, "\":", 2);
      g4_std::ostream::op_shl_double(v19, COERCE__INT64((float)((float)v62 * 0.000061035156f)));
    }
  }
  if ( (a3 & 0x800000) == 0 || (v10 = *(char **)(a2 + 192), v61 = *((uint32_t *)a1 + 17), v10 == v59) )
  {
    if ( *((uint32_t *)a1 + 7) == 1 )
      goto LABEL_23;
LABEL_11:
    v6 = *(char **)(a2 + 192);
LABEL_12:
    if ( v6 != v59 && v60 != *(uint32_t *)(a2 + 200) )
    {
      v50 = v6;
      sub_1901940(v6);
      opDelete(v50);
      v7 = *(void **)(a2 + 200);
      sub_1901940(v7);
      opDelete(v7);
      g4_std_compat::ostream_write(a2 + 12, "}", 1);
    }
    goto LABEL_15;
  }
  if ( v10[8] != 0 )
  {
    v10[8] = 0;
    v11 = a2 + 12;
  }
  else
  {
    v11 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  g4_std_compat::ostream_write(v11, "\"", 1);
  g4_std_compat::ostream_write(v11, "pitch_user", 10);
  g4_std_compat::ostream_write(v11, "\":", 2);
  g4_std::ostream::op_shl_double(v11, COERCE__INT64((float)((float)v61 * 0.000061035156f)));
  if ( *((uint32_t *)a1 + 7) != 1 )
    goto LABEL_11;
LABEL_23:
  if ( (a3 & 0x1000000) != 0 )
  {
    v20 = *(char **)(a2 + 192);
    v21 = *((uint32_t *)a1 + 14);
    v80 = *((uint32_t *)a1 + 15);
    if ( v20 != v59 )
    {
      if ( v20[8] != 0 )
      {
        v20[8] = 0;
        v22 = a2 + 12;
      }
      else
      {
        v54 = *((char **)a1 + 14);
        v22 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
        v21 = (int)(uintptr_t)(v54);
      }
      v67 = 0.000061035156f * (float)v21;
      g4_std_compat::ostream_write(v22, "\"", 1);
      g4_std_compat::ostream_write(v22, "gain_left", 9);
      g4_std_compat::ostream_write(v22, "\":", 2);
      g4_std::ostream::op_shl_double(v22, COERCE__INT64(v67));
      v23 = *(char **)(a2 + 192);
      if ( v59 != v23 )
      {
        if ( v23[8] != 0 )
          v23[8] = 0;
        else
          g4_std_compat::ostream_write(v22, ",", 1);
        v47 = (float)v80 * 0.000061035156f;
        g4_std_compat::ostream_write(v22, "\"", 1);
        g4_std_compat::ostream_write(v22, "gain_rigth", 10);
        g4_std_compat::ostream_write(v22, "\":", 2);
        g4_std::ostream::op_shl_double(v22, COERCE__INT64(v47));
        v24 = *(char **)(a2 + 192);
        v68 = sqrt((float)((float)(v47 * v47) + (float)(v67 * v67)));
        if ( v59 != v24 )
        {
          if ( v24[8] != 0 )
            v24[8] = 0;
          else
            g4_std_compat::ostream_write(v22, ",", 1);
          g4_std_compat::ostream_write(v22, "\"", 1);
          g4_std_compat::ostream_write(v22, "gain_effective", 14);
          g4_std_compat::ostream_write(v22, "\":", 2);
          v25 = v68;
          g4_std::ostream::op_shl_double(v22, COERCE__INT64(v25));
        }
      }
    }
  }
  if ( (a3 & 0x2000000) == 0 )
    goto LABEL_25;
  DopplerPitch = vox::DriverCallbackSourceInterface::GetDopplerPitch(a1);
  v6 = *(char **)(a2 + 192);
  if ( v6 != v59 )
  {
    if ( v6[8] != 0 )
    {
      v6[8] = 0;
      v27 = a2 + 12;
    }
    else
    {
      v27 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v27, "\"", 1);
    g4_std_compat::ostream_write(v27, "pitch_doppler", 13);
    g4_std_compat::ostream_write(v27, "\":", 2);
    v63 = DopplerPitch;
    g4_std::ostream::op_shl_double(v27, COERCE__INT64(v63));
LABEL_25:
    v6 = *(char **)(a2 + 192);
  }
  if ( (a3 & 0x4000000) == 0 )
    goto LABEL_12;
  if ( v6 != v59 )
  {
    if ( v6[8] != 0 )
    {
      v6[8] = 0;
      v12 = a2 + 12;
    }
    else
    {
      v12 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v12, "\"", 1);
    g4_std_compat::ostream_write(v12, "I3DL1", 5);
    g4_std_compat::ostream_write(v12, "\":", 2);
  }
  v13 = *(uint32_t *)(a2 + 200);
  if ( v60 != v13 && *(uint8_t *)(v13 + 8) != 0 )
  {
    v16 = *(char **)(a2 + 192);
    if ( v59 == v16 )
      goto LABEL_38;
    if ( v16[8] != 0 )
      v16[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v51 = *(char **)(a2 + 192);
  v14 = opNew(0xCu);
  if ( v14 != -8 )
    *(uint8_t *)(v14 + 8) = 1;
  sub_1901920(v14, v51);
  v52 = *(char **)(a2 + 200);
  v15 = opNew(0xCu);
  if ( v15 != -8 )
    *(uint8_t *)(v15 + 8) = 0;
  sub_1901920(v15, v52);
  g4_std_compat::ostream_write(a2 + 12, "{", 1);
  v16 = *(char **)(a2 + 192);
LABEL_38:
  if ( (a3 & 0x8000000) != 0 && v59 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v32 = a2 + 12;
    }
    else
    {
      v32 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v65 = *((float *)a1 + 34);
    v70 = *((float *)a1 + 32);
    v78 = *((float *)a1 + 33);
    g4_std_compat::ostream_write(v32, "\"", 1);
    g4_std_compat::ostream_write(v32, "position", 8);
    g4_std_compat::ostream_write(v32, &off_1B6645C, 3);
    v33 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v32, COERCE__INT64(v70)));
    g4_std_compat::ostream_write(v33, ",", 1);
    v34 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v33, COERCE__INT64(v78)));
    g4_std_compat::ostream_write(v34, ",", 1);
    v35 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v34, COERCE__INT64(v65)));
    g4_std_compat::ostream_write(v35, "]", 1);
    v16 = *(char **)(a2 + 192);
  }
  if ( (a3 & 0x10000000) != 0 && v59 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v28 = a2 + 12;
    }
    else
    {
      v28 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v64 = *((float *)a1 + 37);
    v69 = *((float *)a1 + 35);
    v77 = *((float *)a1 + 36);
    g4_std_compat::ostream_write(v28, "\"", 1);
    g4_std_compat::ostream_write(v28, "velocity", 8);
    g4_std_compat::ostream_write(v28, &off_1B6645C, 3);
    v29 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v28, COERCE__INT64(v69)));
    g4_std_compat::ostream_write(v29, ",", 1);
    v30 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v29, COERCE__INT64(v77)));
    g4_std_compat::ostream_write(v30, ",", 1);
    v31 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v30, COERCE__INT64(v64)));
    g4_std_compat::ostream_write(v31, "]", 1);
    v16 = *(char **)(a2 + 192);
  }
  if ( (a3 & 0x20000000) != 0 && v59 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v43 = a2 + 12;
    }
    else
    {
      v43 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v66 = *((float *)a1 + 40);
    v76 = *((float *)a1 + 38);
    v79 = *((float *)a1 + 39);
    g4_std_compat::ostream_write(v43, "\"", 1);
    g4_std_compat::ostream_write(v43, "direction", 9);
    g4_std_compat::ostream_write(v43, &off_1B6645C, 3);
    v44 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v43, COERCE__INT64(v76)));
    g4_std_compat::ostream_write(v44, ",", 1);
    v45 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v44, COERCE__INT64(v79)));
    g4_std_compat::ostream_write(v45, ",", 1);
    v46 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v45, COERCE__INT64(v66)));
    g4_std_compat::ostream_write(v46, "]", 1);
    v16 = *(char **)(a2 + 192);
  }
  if ( (a3 & 0x40000000) != 0 && v59 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v39 = a2 + 12;
    }
    else
    {
      v39 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v55 = *((char **)a1 + 41);
    g4_std_compat::ostream_write(v39, "\"", 1);
    g4_std_compat::ostream_write(v39, "relative", 8);
    g4_std_compat::ostream_write(v39, "\":", 2);
    g4_std::ostream::op_shl_int(v39, v55);
    v16 = *(char **)(a2 + 192);
    if ( v59 != v16 )
    {
      if ( v16[8] != 0 )
        v16[8] = 0;
      else
        g4_std_compat::ostream_write(v39, ",", 1);
      v73 = *((float *)a1 + 42);
      g4_std_compat::ostream_write(v39, "\"", 1);
      g4_std_compat::ostream_write(v39, "max_distance", 12);
      g4_std_compat::ostream_write(v39, "\":", 2);
      g4_std::ostream::op_shl_double(v39, COERCE__INT64(v73));
      v16 = *(char **)(a2 + 192);
      if ( v59 != v16 )
      {
        if ( v16[8] != 0 )
          v16[8] = 0;
        else
          g4_std_compat::ostream_write(v39, ",", 1);
        v74 = *((float *)a1 + 43);
        g4_std_compat::ostream_write(v39, "\"", 1);
        g4_std_compat::ostream_write(v39, "reference_distance", 18);
        g4_std_compat::ostream_write(v39, "\":", 2);
        g4_std::ostream::op_shl_double(v39, COERCE__INT64(v74));
        v16 = *(char **)(a2 + 192);
        if ( v59 != v16 )
        {
          if ( v16[8] != 0 )
            v16[8] = 0;
          else
            g4_std_compat::ostream_write(v39, ",", 1);
          v75 = *((float *)a1 + 44);
          g4_std_compat::ostream_write(v39, "\"", 1);
          g4_std_compat::ostream_write(v39, "rolloff_factor", 14);
          g4_std_compat::ostream_write(v39, "\":", 2);
          g4_std::ostream::op_shl_double(v39, COERCE__INT64(v75));
          v16 = *(char **)(a2 + 192);
          v40 = *((uint8_t *)a1 + 4);
          if ( v59 != v16 )
          {
            if ( v16[8] != 0 )
            {
              v16[8] = 0;
            }
            else
            {
              v57 = *((uint8_t *)a1 + 4);
              g4_std_compat::ostream_write(v39, ",", 1);
              v40 = v57;
            }
            v41 = "true";
            if ( v40 == 0 )
              v41 = "false";
            s = (char *)v41;
            g4_std_compat::ostream_write(v39, "\"", 1);
            g4_std_compat::ostream_write(v39, "enhanced", 8);
            g4_std_compat::ostream_write(v39, "\":", 2);
            v42 = strlen(s);
            g4_std_compat::ostream_write(v39, s, v42);
            v16 = *(char **)(a2 + 192);
          }
        }
      }
    }
  }
  if ( a3 >= 0 )
    goto LABEL_43;
  if ( v59 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v36 = a2 + 12;
    }
    else
    {
      v36 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v71 = *((float *)a1 + 45);
    g4_std_compat::ostream_write(v36, "\"", 1);
    g4_std_compat::ostream_write(v36, "inner_cone_angle", 16);
    g4_std_compat::ostream_write(v36, "\":", 2);
    g4_std::ostream::op_shl_double(v36, COERCE__INT64(v71));
    v37 = *(char **)(a2 + 192);
    if ( v59 != v37 )
    {
      if ( v37[8] != 0 )
        v37[8] = 0;
      else
        g4_std_compat::ostream_write(v36, ",", 1);
      v72 = *((float *)a1 + 46);
      g4_std_compat::ostream_write(v36, "\"", 1);
      g4_std_compat::ostream_write(v36, "outer_cone_angle", 16);
      g4_std_compat::ostream_write(v36, "\":", 2);
      g4_std::ostream::op_shl_double(v36, COERCE__INT64(v72));
      v38 = *(char **)(a2 + 192);
      if ( v59 != v38 )
      {
        if ( v38[8] != 0 )
          v38[8] = 0;
        else
          g4_std_compat::ostream_write(v36, ",", 1);
        v58 = *((float *)a1 + 47);
        g4_std_compat::ostream_write(v36, "\"", 1);
        g4_std_compat::ostream_write(v36, "outer_cone_gain", 15);
        g4_std_compat::ostream_write(v36, "\":", 2);
        g4_std::ostream::op_shl_double(v36, COERCE__INT64(v58));
        v16 = *(char **)(a2 + 192);
LABEL_43:
        if ( v59 == v16 || v60 == *(uint32_t *)(a2 + 200) )
          goto LABEL_15;
        v53 = v16;
        sub_1901940(v16);
        opDelete(v53);
        v17 = *(void **)(a2 + 200);
        sub_1901940(v17);
        opDelete(v17);
        g4_std_compat::ostream_write(a2 + 12, "}", 1);
        goto LABEL_11;
      }
    }
  }
LABEL_15:
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)a1 + 20));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetStereoPanning  (binary VA: 0x10016f0)
// Original: vox::DriverCallbackSourceInterface::GetStereoPanning
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::GetStereoPanning(vox::DriverCallbackSourceInterface::Self *self, int *a2, int *a3)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  vox::VoxThread::Self *v19;
  double v20;
  float v21;

  vox::VoxThread::GetCurThreadId(v19);
  sub_BA06A0();
  if ( *((uint32_t *)self + 41) == 0 )
  {
    v9 = *((float *)self + 32) - vox::DriverCallbackSourceInterface::s_listenerParameters;
    v10 = *((float *)self + 33) - (*(const float *)&unk_20E2024);
    v11 = *((float *)self + 34) - (*(const float *)&unk_20E2028);
    v12 = sqrt((float)((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)));
    v21 = v12;
    v13 = (float)((*(const int *)&unk_20E203C) * (*(const int *)&unk_20E204C)) - (float)((*(const int *)&unk_20E2048) * (*(const int *)&unk_20E2040));
    v14 = (float)((*(const int *)&unk_20E2040) * (*(const int *)&unk_20E2044)) - (float)((*(const int *)&unk_20E204C) * (*(const int *)&unk_20E2038));
    v15 = (float)((*(const int *)&unk_20E2048) * (*(const int *)&unk_20E2038)) - (float)((*(const int *)&unk_20E2044) * (*(const int *)&unk_20E203C));
    v20 = sqrt((float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)));
    if ( v21 > 0.0 )
    {
      v16 = v20;
      if ( v16 > 0.0 )
      {
        v17 = sqrt((float)((float)((float)((float)((float)((float)((float)(v10 * v14) + (float)(v9 * v13))
                                                         + (float)(v15 * v11))
                                                 / v16)
                                         / v21)
                                 + 1.0)
                         * 0.5));
        v18 = sqrt((float)(1.0 - (float)(v17 * v17)));
        v7 = (int)(float)(v17 * 16384.0);
        v8 = (int)(float)(v18 * 16384.0);
        goto LABEL_7;
      }
    }
LABEL_8:
    v7 = 11585;
    v8 = 11585;
    goto LABEL_7;
  }
  v3 = *((float *)self + 32);
  v4 = sqrt((float)((float)((float)(*((float *)self + 33) * *((float *)self + 33)) + (float)(v3 * v3))
                  + (float)(*((float *)self + 34) * *((float *)self + 34))));
  if ( v4 <= 0.0 )
    goto LABEL_8;
  v5 = sqrt((float)((float)((float)(v3 / v4) + 1.0) * 0.5));
  v6 = sqrt((float)(1.0 - (float)(v5 * v5)));
  v7 = (int)(float)(v5 * 16384.0);
  v8 = (int)(float)(v6 * 16384.0);
LABEL_7:
  *a2 = v8;
  *a3 = v7;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetNormalizedPosition  (binary VA: 0x1001990)
// Original: vox::DriverCallbackSourceInterface::GetNormalizedPosition
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::GetNormalizedPosition(vox::DriverCallbackSourceInterface::Self *self, float *a2, float *a3, float *a4)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  double v11; // xmm5_8
  double v12; // xmm4_8
  double v13; // xmm6_8
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  vox::VoxThread::Self *v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;

  vox::VoxThread::GetCurThreadId(v20);
  sub_BA06A0();
  if ( *((uint32_t *)self + 41) != 0 )
  {
    v4 = *((float *)self + 32);
    v5 = 0.0;
    v6 = sqrt((float)((float)((float)(*((float *)self + 33) * *((float *)self + 33)) + (float)(v4 * v4))
                    + (float)(*((float *)self + 34) * *((float *)self + 34))));
    if ( v6 <= 0.0 )
    {
      *a2 = 0.0;
      *a3 = 0.0;
    }
    else
    {
      *a2 = v4 * (float)(1.0 / v6);
      *a3 = *((float *)self + 33) * (float)(1.0 / v6);
      v5 = (float)(1.0 / v6) * *((float *)self + 34);
    }
    *a4 = v5;
  }
  else
  {
    v21 = *((float *)self + 32) - vox::DriverCallbackSourceInterface::s_listenerParameters;
    v23 = *((float *)self + 34) - (*(const float *)&unk_20E2028);
    v22 = *((float *)self + 33) - (*(const float *)&unk_20E2024);
    v7 = sqrt((float)((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23)));
    v27 = v7;
    v8 = (float)((*(const int *)&unk_20E204C) * (*(const int *)&unk_20E203C)) - (float)((*(const int *)&unk_20E2048) * (*(const int *)&unk_20E2040));
    v9 = (float)((*(const int *)&unk_20E2044) * (*(const int *)&unk_20E2040)) - (float)((*(const int *)&unk_20E204C) * (*(const int *)&unk_20E2038));
    v10 = (float)((*(const int *)&unk_20E2048) * (*(const int *)&unk_20E2038)) - (float)((*(const int *)&unk_20E2044) * (*(const int *)&unk_20E203C));
    v24 = (float)(v9 * (*(const float *)&unk_20E2040)) - (float)(v10 * (*(const float *)&unk_20E203C));
    v25 = (float)(v10 * (*(const float *)&unk_20E2038)) - (float)(v8 * (*(const float *)&unk_20E2040));
    v26 = (float)(v8 * (*(const float *)&unk_20E203C)) - (float)(v9 * (*(const float *)&unk_20E2038));
    v11 = sqrt((float)((float)((float)((*(const int *)&unk_20E203C) * (*(const int *)&unk_20E203C)) + (float)((*(const int *)&unk_20E2038) * (*(const int *)&unk_20E2038)))
                     + (float)((*(const int *)&unk_20E2040) * (*(const int *)&unk_20E2040))));
    v12 = sqrt((float)((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10)));
    v13 = sqrt((float)((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26)));
    if ( v27 <= 0.0 || (v14 = v11) <= 0.0 || (v15 = v13) <= 0.0 || (v16 = v12, v28 = v16, v16 <= 0.0) )
    {
      *a2 = 0.0;
      *a3 = 0.0;
      *a4 = 0.0;
    }
    else
    {
      v17 = v21 * (float)(1.0 / v27);
      v18 = v22 * (float)(1.0 / v27);
      v19 = (float)(1.0 / v27) * v23;
      *a2 = (float)((float)(v9 * v18) + (float)(v8 * v17)) + (float)(v10 * v19);
      *a3 = (float)((float)(v25 * v18) + (float)(v24 * v17)) + (float)(v26 * v19);
      *a4 = (float)((float)(v18 * (*(const float *)&unk_20E203C)) + (float)(v17 * (*(const float *)&unk_20E2038))) + (float)(v19 * (*(const float *)&unk_20E2040));
      *a2 = *a2 / v28;
      *a3 = *a3 / v15;
      *a4 = *a4 / v14;
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetNbAvailableSamples  (binary VA: 0x1001d30)
// Original: vox::DriverCallbackSourceInterface::GetNbAvailableSamples
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetNbAvailableSamples(vox::DriverCallbackSourceInterface::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;

  v2 = *((uint32_t *)self + 24);
  v9 = *((uint32_t *)self + 22);
  v3 = -1;
  if ( v9 <= 0 )
    return v3;
  v11 = *((uint32_t *)self + 29);
  v4 = v11 + 24 * v2;
  v3 = 0;
  if ( *(uint8_t *)(v4 + 20) != 0 )
    return v3;
  v10 = *((uint32_t *)self + 28);
  v5 = 0;
  v3 = *(uint32_t *)(v4 + 4) / v10 - *(uint32_t *)(v4 + 16);
  if ( a2 > v3 )
  {
    while ( ++v5 != v9 )
    {
      v6 = 3 * ((v2 + 1) % v9);
      v2 = (v2 + 1) % v9;
      v7 = v11 + 8 * v6;
      if ( *(uint8_t *)(v7 + 20) != 0 )
        return v3;
      v3 += *(uint32_t *)(v7 + 4) / v10 - *(uint32_t *)(v7 + 16);
      if ( v3 >= a2 )
        return a2;
    }
    return -1;
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FillBufferMono16NoInter  (binary VA: 0x1001df0)
// Original: vox::DriverCallbackSourceInterface::FillBufferMono16NoInter
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FillBufferMono16NoInter(vox::DriverCallbackSourceInterface::Self *self, int *a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int NbAvailableSamples;
  vox::DriverCallbackSourceInterface::Self *v9;
  int v10;
  char v11;
  __m128i v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int16_t *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  int v34;
  int v35;
  int v36;
  int v37;
  typedef vox::VoxThread::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int64_t _g4_t_v44;
  typedef __m128i _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef __m128i _g4_t_v52;
  typedef int _g4_t_v53;
  typedef __m128i _g4_t_v54;
  typedef int _g4_t_v55;
  typedef __m128i _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v39)) > _g4_s1 ? (16u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v40)) > _g4_s2 ? (36u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v41)) > _g4_s3 ? (44u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v42)) > _g4_s4 ? (48u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v43)) > _g4_s5 ? (52u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v44)) > _g4_s6 ? (56u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v45)) > _g4_s7 ? (64u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v46)) > _g4_s8 ? (80u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v47)) > _g4_s9 ? (96u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v48)) > _g4_s10 ? (100u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v49)) > _g4_s11 ? (104u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v50)) > _g4_s12 ? (108u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v51)) > _g4_s13 ? (112u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v52)) > _g4_s14 ? (112u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v53)) > _g4_s15 ? (128u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v54)) > _g4_s16 ? (128u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v55)) > _g4_s17 ? (144u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v56)) > _g4_s18 ? (144u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (168u + sizeof(_g4_t_v57)) > _g4_s19 ? (168u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (172u + sizeof(_g4_t_v58)) > _g4_s20 ? (172u + sizeof(_g4_t_v58)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 128u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 144u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 168u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 172u);

  vox::VoxThread::GetCurThreadId(v38);
  sub_BA06A0();
  if ( *((uint32_t *)self + 25) == 1 )
  {
    v4 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
    if ( *(uint8_t *)(v4 + 20) == 0 )
    {
      v5 = *((uint32_t *)self + 13);
      if ( *(uint32_t *)(v4 + 12) != 0 )
      {
        ++*(uint32_t *)(v4 + 16);
        *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 12) = 0;
      }
      v6 = (vox::DriverCallbackSourceInterface::GetDistanceGain(self) * v5) >> 14;
      v7 = (vox::DriverCallbackSourceInterface::GetDirectionalGain(self) * v6) >> 14;
      vox::DriverCallbackSourceInterface::GetStereoPanning(self, &v57, v58);
      HIDWORD(v44) = (v7 * v58[0]) >> 14;
      LODWORD(v44) = (v57 * v7) >> 14;
      NbAvailableSamples = vox::DriverCallbackSourceInterface::GetNbAvailableSamples(self, a3);
      if ( a3 > NbAvailableSamples )
      {
        v10 = *((uint32_t *)self + 11);
        v49 = NbAvailableSamples - v10;
        if ( NbAvailableSamples - v10 < 0 )
        {
          v39 = NbAvailableSamples;
          v49 = 0;
        }
        else
        {
          v39 = *((uint32_t *)self + 11);
        }
        v9 = self;
      }
      else
      {
        v39 = 0;
        v49 = a3 + 1;
        v9 = self;
        v10 = *((uint32_t *)self + 11);
      }
      v11 = *((uint8_t *)v9 + 49);
      if ( v11 != 0 )
      {
        *((uint32_t *)v9 + 14) = 0;
        *((uint32_t *)v9 + 15) = 0;
        v51 = 0;
        v53 = 0;
      }
      else
      {
        v53 = *((uint32_t *)v9 + 14);
        v51 = *((uint32_t *)v9 + 15);
      }
      v43 = v49;
      if ( v49 >= v10 )
      {
        if ( v10 > a3 )
          v10 = a3;
        v43 = v10;
      }
      if ( *((uint8_t *)self + 48) != 0 || v11 != 0 )
      {
        *((uint8_t *)self + 49) = 0;
        v42 = 0;
        v47 = 0;
        if ( v43 > 0 )
        {
          v47 = ((int)v44 - v53) / v43;
          v37 = (HIDWORD(v44) - v51) / v43;
          v42 = v37;
          if ( v47 == 0 )
          {
            if ( (int)v44 > v53 )
            {
              v43 = v44 - v53;
              v47 = 1;
            }
            else if ( (int)v44 < v53 )
            {
              v47 = -1;
              v43 = v53 - v44;
            }
          }
          if ( v37 == 0 )
          {
            if ( SHIDWORD(v44) > v51 )
            {
              v43 = HIDWORD(v44) - v51;
              v42 = 1;
            }
            else if ( SHIDWORD(v44) < v51 )
            {
              v42 = -1;
              v43 = v51 - HIDWORD(v44);
            }
          }
        }
      }
      else
      {
        *((uint8_t *)self + 48) = 1;
        v51 = HIDWORD(v44);
        v53 = v44;
        v42 = 0;
        v47 = 0;
      }
      if ( a3 > 0 )
      {
        v41 = 0;
        v12 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v44), 0);
        v45 = _mm_shuffle_epi32(_mm_cvtsi32_si128(HIDWORD(v44)), 0);
        do
        {
          v13 = *((uint32_t *)self + 24);
          v14 = (uint32_t *)(*((uint32_t *)self + 29) + 24 * v13);
          v15 = v14[4];
          v16 = ((int)v14[1] >> 1) - v15;
          v48 = v16;
          if ( a3 <= v16 )
            v16 = a3;
          v50 = v16;
          v17 = (int16_t *)(*v14 + 2 * v15);
          if ( (v42 | v47) != 0 || v39 > 0 )
          {
            if ( v16 > 0 )
            {
              v18 = a2;
              v46 = a2;
              v55 = 0;
              v19 = v42;
              v20 = v41;
              do
              {
                if ( v20 == v49 )
                {
                  v47 = ((v53 / v39) >> 31) - (((v53 / v39) >> 31) ^ (v53 / v39));
                  v19 = ((v51 / v39) >> 31) - (((v51 / v39) >> 31) ^ (v51 / v39));
                }
                if ( v20 >= v49 || v20 < v43 )
                {
                  v51 += v19;
                  v53 += v47;
                }
                ++v20;
                ++v55;
                *v18 += (v53 * *v17) >> 14;
                v21 = *v17++;
                v18[1] += (v51 * v21) >> 14;
                v18 += 2;
              }
              while ( v55 != v50 );
              v42 = v19;
              v41 += v50;
              a2 = &v46[2 * v50];
              v13 = *((uint32_t *)self + 24);
            }
          }
          else
          {
            v51 = 0;
            v53 = 0;
            if ( v44 != 0 )
            {
              v51 = HIDWORD(v44);
              v53 = v44;
              if ( v16 > 0 )
              {
                v40 = &a2[2 * v16];
                if ( 8 * ((unsigned int)v16 >> 3) != 0
                  && (v17 > (int16_t *)v40 || a2 > (int *)&v17[v16])
                  && (unsigned int)v16 > 7 )
                {
                  v23 = 0;
                  v24 = 0;
                  do
                  {
                    v25 = *(__m128i *)&v17[v23 / 2];
                    v54 = *(__m128i *)&a2[v23 + 8];
                    v26 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v25);
                    ++v24;
                    v27 = _mm_unpacklo_epi16(v25, v26);
                    v28 = _mm_unpackhi_epi16(v25, v26);
                    v52 = *(__m128i *)&a2[v23 + 12];
                    v29 = *(__m128i *)&a2[v23];
                    v56 = *(__m128i *)&a2[v23 + 4];
                    v30 = _mm_add_epi32(
                            g4_m128_from<__m128i>(_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v29)),g4_m128_raw(G4_BITCAST<__m128>(v56)), 136)),
                            _mm_srai_epi32(
                              _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(v12, v27), 8),
                                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v27, 4), _mm_srli_si128(v12, 4)), 8)),
                              0xEu));
                    v31 = _mm_add_epi32(
                            g4_m128_from<__m128i>(_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v54)),g4_m128_raw(G4_BITCAST<__m128>(v52)), 136)),
                            _mm_srai_epi32(
                              _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(v12, v28), 8),
                                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v28, 4), _mm_srli_si128(v12, 4)), 8)),
                              0xEu));
                    v32 = _mm_add_epi32(
                            g4_m128_from<__m128i>(_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v29)),g4_m128_raw(G4_BITCAST<__m128>(v56)), 221)),
                            _mm_srai_epi32(
                              _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(v45, v27), 8),
                                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v27, 4), _mm_srli_si128(v45, 4)), 8)),
                              0xEu));
                    v33 = _mm_add_epi32(
                            g4_m128_from<__m128i>(_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v54)),g4_m128_raw(G4_BITCAST<__m128>(v52)), 221)),
                            _mm_srai_epi32(
                              _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(v45, v28), 8),
                                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v28, 4), _mm_srli_si128(v45, 4)), 8)),
                              0xEu));
                    *(__m128i *)&a2[v23 + 4] = _mm_unpackhi_epi32(v30, v32);
                    *(__m128i *)&a2[v23] = _mm_unpacklo_epi32(v30, v32);
                    *(__m128i *)&a2[v23 + 8] = _mm_unpacklo_epi32(v31, v33);
                    *(__m128i *)&a2[v23 + 12] = _mm_unpackhi_epi32(v31, v33);
                    v23 += 16;
                  }
                  while ( v24 < (unsigned int)v16 >> 3 );
                  v34 = 8 * ((unsigned int)v16 >> 3);
                  a2 += 16 * ((unsigned int)v16 >> 3);
                  v17 += 8 * ((unsigned int)v16 >> 3);
                  if ( v16 != v34 )
                  {
                    do
                    {
LABEL_43:
                      ++v34;
                      *a2 += ((int)v44 * *v17) >> 14;
                      v35 = *v17++;
                      a2[1] += (HIDWORD(v44) * v35) >> 14;
                      a2 += 2;
                    }
                    while ( v16 > v34 );
                  }
                  v51 = HIDWORD(v44);
                  v53 = v44;
                  a2 = v40;
                  v13 = *((uint32_t *)self + 24);
                  goto LABEL_32;
                }
                v34 = 0;
                goto LABEL_43;
              }
            }
          }
LABEL_32:
          *((uint32_t *)self + 27) += 2 * v50;
          v22 = *((uint32_t *)self + 29) + 24 * v13;
          if ( v48 == v50 )
          {
            *(uint8_t *)(v22 + 20) = 1;
            v36 = (*((uint32_t *)self + 24) + 1) % *((uint32_t *)self + 22);
            *((uint32_t *)self + 24) = v36;
            if ( *(uint8_t *)(*((uint32_t *)self + 29) + 24 * v36 + 20) != 0 )
              break;
          }
          else
          {
            *(uint32_t *)(v22 + 16) += v50;
          }
          a3 -= v50;
        }
        while ( a3 > 0 );
      }
      *((uint32_t *)self + 14) = v53;
      *((uint32_t *)self + 15) = v51;
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FillBufferStereo16NoInter  (binary VA: 0x1002540)
// Original: vox::DriverCallbackSourceInterface::FillBufferStereo16NoInter
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FillBufferStereo16NoInter(vox::DriverCallbackSourceInterface::Self *self, int *a2, int a3)
{
  int v4;
  int NbAvailableSamples;
  int v6;
  char v7;
  signed int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int16_t *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __m128i v20;
  unsigned int v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  signed int v44;
  signed int v45;
  int v46;
  int v47;
  int v48;
  vox::VoxThread::Self *v49;
  int v50;
  unsigned int v51;
  int *v52;
  int v53;
  int v54;
  int v55;
  __m128i v56;
  int *v57;
  int v58;
  int v59;
  signed int v60;
  signed int v61;
  int v62;
  __m128i v63;

  vox::VoxThread::GetCurThreadId(v49);
  sub_BA06A0();
  if ( *((uint32_t *)self + 25) == 1 )
  {
    v4 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
    if ( *(uint8_t *)(v4 + 20) == 0 )
    {
      if ( *(uint32_t *)(v4 + 12) != 0 )
      {
        ++*(uint32_t *)(v4 + 16);
        *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 12) = 0;
      }
      NbAvailableSamples = vox::DriverCallbackSourceInterface::GetNbAvailableSamples(self, a3);
      if ( a3 > NbAvailableSamples )
      {
        v6 = *((uint32_t *)self + 11);
        v59 = NbAvailableSamples - v6;
        if ( NbAvailableSamples - v6 < 0 )
        {
          v50 = NbAvailableSamples;
          v59 = 0;
        }
        else
        {
          v50 = *((uint32_t *)self + 11);
        }
      }
      else
      {
        v6 = *((uint32_t *)self + 11);
        v50 = 0;
        v59 = a3 + 1;
      }
      v7 = *((uint8_t *)self + 49);
      if ( v7 != 0 )
      {
        *((uint32_t *)self + 14) = 0;
        v61 = 0;
      }
      else
      {
        v61 = *((uint32_t *)self + 14);
      }
      v54 = v59;
      if ( v59 >= v6 )
      {
        if ( v6 > a3 )
          v6 = a3;
        v54 = v6;
      }
      if ( *((uint8_t *)self + 48) != 0 || v7 != 0 )
      {
        *((uint8_t *)self + 49) = 0;
        v55 = 0;
        if ( v54 > 0 )
        {
          v48 = *((uint32_t *)self + 13);
          v55 = (v48 - v61) / v54;
          if ( v55 == 0 )
          {
            if ( v48 > v61 )
            {
              v54 = v48 - v61;
              v55 = 1;
            }
            else if ( v48 < v61 )
            {
              v55 = -1;
              v54 = v61 - v48;
            }
          }
        }
      }
      else
      {
        v8 = *((uint32_t *)self + 13);
        *((uint8_t *)self + 48) = 1;
        v61 = v8;
        v55 = 0;
      }
      if ( a3 > 0 )
      {
        v53 = 0;
        do
        {
          v9 = *((uint32_t *)self + 24);
          v10 = (uint32_t *)(*((uint32_t *)self + 29) + 24 * v9);
          v11 = v10[4];
          v12 = ((int)v10[1] >> 2) - v11;
          v58 = v12;
          if ( a3 <= v12 )
            v12 = a3;
          v60 = v12;
          v13 = (int16_t *)(*v10 + 4 * v11);
          if ( v55 != 0 || v50 > 0 )
          {
            if ( v12 > 0 )
            {
              v14 = a2;
              v57 = a2;
              v62 = 0;
              v15 = v55;
              v16 = v53;
              do
              {
                if ( v16 == v59 )
                  v15 = ((v61 / v50) >> 31) - (((v61 / v50) >> 31) ^ (v61 / v50));
                if ( v16 >= v59 || v16 < v54 )
                  v61 += v15;
                ++v16;
                ++v62;
                *v14 += (v61 * *v13) >> 14;
                v17 = v13[1];
                v13 += 2;
                v14[1] += (v61 * v17) >> 14;
                v14 += 2;
              }
              while ( v62 != v60 );
              v55 = v15;
              v53 += v60;
              a2 = &v57[2 * v60];
              v9 = *((uint32_t *)self + 24);
            }
          }
          else
          {
            v55 = 0;
            v61 = *((uint32_t *)self + 13);
            if ( v61 != 0 && v12 > 0 )
            {
              v52 = &a2[2 * v12];
              v51 = 8 * ((unsigned int)(v12 - 1) >> 3);
              if ( v51 != 0
                && (a2 > (int *)&v13[2 * v12 + 1] || v13 + 1 > (int16_t *)v52)
                && (v13 > (int16_t *)v52 || a2 > (int *)&v13[2 * v12])
                && (unsigned int)v12 > 7 )
              {
                v19 = 0;
                v20 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v61), 0);
                v21 = 0;
                do
                {
                  v63 = *(__m128i *)&a2[v19 + 8];
                  v22 = *(__m128i *)&v13[v19];
                  v23 = *(__m128i *)&v13[v19 + 8];
                  v24 = _mm_unpacklo_epi16(v22, v23);
                  v25 = _mm_unpackhi_epi16(v22, v23);
                  ++v21;
                  v26 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v24, v25), _mm_unpackhi_epi16(v24, v25));
                  v27 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v26);
                  v28 = _mm_unpacklo_epi16(v26, v27);
                  v56 = *(__m128i *)&a2[v19 + 12];
                  v29 = _mm_unpackhi_epi16(v26, v27);
                  v30 = *(__m128i *)&a2[v19 + 4];
g4_m128_raw(v31) = (g4_int128_t)_mm_shuffle_ps(*(__m128 *)&a2[v19],g4_m128_raw(G4_BITCAST<__m128>(v30)), 221);
                  v32 = _mm_add_epi32(
                          g4_m128_from<__m128i>(_mm_shuffle_ps(*(__m128 *)&a2[v19],g4_m128_raw(G4_BITCAST<__m128>(v30)), 136)),
                          _mm_srai_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v28, v20), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v20, 4), _mm_srli_si128(v28, 4)), 8)),
                            0xEu));
                  v33 = *(__m128i *)&v13[v19 + 9];
                  v34 = _mm_add_epi32(
                          g4_m128_from<__m128i>(_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v63)),g4_m128_raw(G4_BITCAST<__m128>(v56)), 136)),
                          _mm_srai_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v29, v20), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v29, 4), _mm_srli_si128(v20, 4)), 8)),
                            0xEu));
                  v35 = *(__m128i *)&v13[v19 + 1];
                  v36 = _mm_unpacklo_epi16(v35, v33);
                  v37 = _mm_unpackhi_epi16(v35, v33);
                  v38 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v36, v37), _mm_unpackhi_epi16(v36, v37));
                  v39 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v38);
                  v40 = _mm_unpacklo_epi16(v38, v39);
                  v41 = _mm_add_epi32(
                          v31,
                          _mm_srai_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v40, v20), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v20, 4), _mm_srli_si128(v40, 4)), 8)),
                            0xEu));
                  v42 = _mm_unpackhi_epi16(v38, v39);
                  v43 = _mm_add_epi32(
                          g4_m128_from<__m128i>(_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v63)),g4_m128_raw(G4_BITCAST<__m128>(v56)), 221)),
                          _mm_srai_epi32(
                            _mm_unpacklo_epi32(
                              _mm_shuffle_epi32(_mm_mul_epu32(v42, v20), 8),
                              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v20, 4), _mm_srli_si128(v42, 4)), 8)),
                            0xEu));
                  *(__m128i *)&a2[v19] = _mm_unpacklo_epi32(v32, v41);
                  *(__m128i *)&a2[v19 + 4] = _mm_unpackhi_epi32(v32, v41);
                  *(__m128i *)&a2[v19 + 8] = _mm_unpacklo_epi32(v34, v43);
                  *(__m128i *)&a2[v19 + 12] = _mm_unpackhi_epi32(v34, v43);
                  v19 += 16;
                }
                while ( v21 < (unsigned int)(v12 - 1) >> 3 );
                v44 = 8 * ((unsigned int)(v12 - 1) >> 3);
                a2 += 16 * ((unsigned int)(v12 - 1) >> 3);
                v13 += 16 * ((unsigned int)(v12 - 1) >> 3);
                if ( v12 != v51 )
                {
                  v45 = v61;
                  do
                  {
LABEL_44:
                    ++v44;
                    *a2 += (v45 * *v13) >> 14;
                    v46 = v13[1];
                    v13 += 2;
                    a2[1] += (v45 * v46) >> 14;
                    a2 += 2;
                  }
                  while ( v60 > v44 );
                }
                a2 = v52;
                v55 = 0;
                v9 = *((uint32_t *)self + 24);
                goto LABEL_32;
              }
              v44 = 0;
              v45 = *((uint32_t *)self + 13);
              goto LABEL_44;
            }
          }
LABEL_32:
          *((uint32_t *)self + 27) += 4 * v60;
          v18 = *((uint32_t *)self + 29) + 24 * v9;
          if ( v58 == v60 )
          {
            *(uint8_t *)(v18 + 20) = 1;
            v47 = (*((uint32_t *)self + 24) + 1) % *((uint32_t *)self + 22);
            *((uint32_t *)self + 24) = v47;
            if ( *(uint8_t *)(*((uint32_t *)self + 29) + 24 * v47 + 20) != 0 )
            {
              *((uint32_t *)self + 14) = v61;
              goto LABEL_2;
            }
          }
          else
          {
            *(uint32_t *)(v18 + 16) += v60;
          }
          a3 -= v60;
        }
        while ( a3 > 0 );
      }
      *((uint32_t *)self + 14) = v61;
    }
  }
LABEL_2:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetWorkData  (binary VA: 0x1002b70)
// Original: vox::DriverCallbackSourceInterface::GetWorkData
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetWorkData(vox::DriverCallbackSourceInterface::Self *self, uint8_t *a2, int a3, int a4)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  signed int v9;
  const void *src;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  vox::VoxThread::Self *dest;
  int n;
  int v22;
  int v23;
  signed int v24;
  int v25;

  vox::VoxThread::GetCurThreadId(dest);
  sub_BA06A0();
  v5 = *((uint32_t *)self + 24);
  v6 = *((uint32_t *)self + 29);
  if ( *(uint8_t *)(v6 + 24 * v5 + 20) != 0 )
  {
    a3 = 0;
  }
  else
  {
    if ( a3 <= 0 )
    {
      a3 = 0;
    }
    else
    {
      n = a3;
      while ( 1 )
      {
        v7 = (uint32_t *)(v6 + 24 * v5);
        v8 = v7[4] * *((uint32_t *)self + 28);
        v22 = a3 - n;
        v9 = v7[1] - v8;
        src = (const void *)(*v7 + v8);
        if ( v9 > n )
        {
          memcpy(&a2[a3 - n], src, n);
          v11 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
          *(uint32_t *)(v11 + 12) += a4;
          v12 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
          *(uint32_t *)(v12 + 16) += *(int *)(v12 + 12) >> 14;
          v13 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
          *(uint32_t *)(v13 + 12) &= 0x3FFFu;
          goto LABEL_6;
        }
        memcpy(&a2[a3 - n], src, v9);
        n -= v9;
        *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 12) += a4;
        v15 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
        *(uint32_t *)(v15 + 16) += *(int *)(v15 + 12) >> 14;
        v16 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
        *(uint32_t *)(v16 + 12) &= 0x3FFFu;
        v23 = *((uint32_t *)self + 24);
        v25 = *((uint32_t *)self + 29);
        v17 = v25 + 24 * v23;
        v24 = *((uint32_t *)self + 28);
        v18 = *(uint32_t *)(v17 + 4) / v24;
        a4 = *(uint32_t *)(v17 + 12) + ((*(uint32_t *)(v17 + 16) - v18) << 14);
        if ( *(uint32_t *)(v17 + 16) < v18 )
          break;
        *(uint8_t *)(v17 + 20) = 1;
        v5 = (*((uint32_t *)self + 24) + 1) % *((uint32_t *)self + 22);
        v6 = *((uint32_t *)self + 29);
        *((uint32_t *)self + 24) = v5;
        if ( *(uint8_t *)(v6 + 24 * v5 + 20) != 0 || n <= 0 )
          goto LABEL_11;
      }
      v19 = v25 + 24 * ((v23 + 1) % *((uint32_t *)self + 22));
      if ( *(uint8_t *)(v19 + 20) != 0 )
      {
        *(uint8_t *)(v17 + 20) = 1;
        a3 -= n;
        *((uint32_t *)self + 24) = (*((uint32_t *)self + 24) + 1) % *((uint32_t *)self + 22);
      }
      else
      {
        if ( n <= 0 )
        {
LABEL_11:
          a3 -= n;
          goto LABEL_6;
        }
        memcpy(&a2[v9 + v22], *(const void **)v19, v24);
        a3 -= n - *((uint32_t *)self + 28);
      }
    }
LABEL_6:
    *((uint32_t *)self + 27) += a3;
  }
  sub_BA06B0();
  return a3;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FreeAllBuffer  (binary VA: 0x1002de0)
// Original: vox::DriverCallbackSourceInterface::FreeAllBuffer
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FreeAllBuffer(vox::DriverCallbackSourceInterface::Self *self)
{
  int v1;
  int v2;
  bool v3; // cc
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( *((int *)self + 22) > 0 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      ++v2;
      *(uint8_t *)(*((uint32_t *)self + 29) + v1 + 20) = 1;
      v3 = *((uint32_t *)self + 22) <= v2;
      *((uint32_t *)self + 24) = 0;
      *((uint32_t *)self + 23) = 0;
      v1 += 24;
    }
    while ( !v3 );
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Stop  (binary VA: 0x1002e60)
// Original: vox::DriverCallbackSourceInterface::Stop
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Stop(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( *((uint32_t *)self + 25) != -1 )
  {
    *((uint32_t *)self + 25) = 3;
    vox::DriverCallbackSourceInterface::FreeAllBuffer(self);
    *((uint32_t *)self + 27) = 0;
    *((uint32_t *)self + 15) = 0;
    *((uint32_t *)self + 14) = 0;
  }
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Reset  (binary VA: 0x1002f10)
// Original: vox::DriverCallbackSourceInterface::Reset
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Reset(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::Mutex::Self *v1;
  vox::Mutex::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  v1 = (vox::Mutex::Self *)((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( -1431655765 * ((*((uint32_t *)self + 30) - *((uint32_t *)self + 29)) >> 3) != 0 )
  {
    *((uint32_t *)self + 25) = 0;
    vox::DriverCallbackSourceInterface::FreeAllBuffer(self);
    *((uint32_t *)self + 27) = 0;
    v1 = (vox::Mutex::Self *)((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  }
  vox::Mutex::Unlock(v1);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Set3DParameters  (binary VA: 0x1002fc0)
// Original: vox::DriverCallbackSourceInterface::Set3DParameters
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Set3DParameters(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13, float a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39)
{
  vox::VoxThread::Self *v39;

  vox::VoxThread::GetCurThreadId(v39);
  sub_BA06A0();
  vox::DriverCallbackSourceInterface::s_listenerParameters = a1;
  *(uintptr_t *)(unk_20E2024) = (uintptr_t)(a2);
  *(uintptr_t *)(unk_20E2028) = (uintptr_t)(a3);
  *(uintptr_t *)(unk_20E202C) = (uintptr_t)(a4);
  *(uintptr_t *)(unk_20E2030) = (uintptr_t)(a5);
  *(uintptr_t *)(unk_20E2034) = (uintptr_t)(a6);
  *(uintptr_t *)(unk_20E2038) = (uintptr_t)(a7);
  *(uintptr_t *)(unk_20E203C) = (uintptr_t)(a8);
  *(uintptr_t *)(unk_20E2040) = (uintptr_t)(a9);
  *(uintptr_t *)(unk_20E2044) = (uintptr_t)(a10);
  *(uintptr_t *)(unk_20E2048) = (uintptr_t)(a11);
  *(uintptr_t *)(unk_20E204C) = (uintptr_t)(a12);
  vox::DriverCallbackSourceInterface::s_distanceModel = a15;
  vox::DriverCallbackSourceInterface::s_dopplerFactor = LODWORD(a13);
  vox::DriverCallbackSourceInterface::s_enable3dSimulation = a16;
  vox::DriverCallbackSourceInterface::s_tweakParameters = a22;
  *(uintptr_t *)(unk_20C2864) = (uintptr_t)(a23);
  *(uintptr_t *)(unk_20C2868) = (uintptr_t)(a24);
  *(uintptr_t *)(unk_20C286C) = (uintptr_t)(a25);
  *(uintptr_t *)(unk_20C2870) = (uintptr_t)(a26);
  *(uintptr_t *)(unk_20C2874) = (uintptr_t)(a27);
  *(uintptr_t *)(unk_20C2878) = (uintptr_t)(a28);
  *(uintptr_t *)(unk_20C287C) = (uintptr_t)(a29);
  *(uintptr_t *)(unk_20C2880) = (uintptr_t)(a30);
  *(uintptr_t *)(unk_20C2884) = (uintptr_t)(a31);
  *(uintptr_t *)(unk_20C2888) = (uintptr_t)(a32);
  *(uintptr_t *)(unk_20C288C) = (uintptr_t)(a33);
  *(uintptr_t *)(unk_20C2890) = (uintptr_t)(a34);
  *(uintptr_t *)(unk_20C2894) = (uintptr_t)(a35);
  *(uintptr_t *)(unk_20C2898) = (uintptr_t)(a36);
  *(uintptr_t *)(unk_20C289C) = (uintptr_t)(a37);
  *(uintptr_t *)(unk_20C28A0) = (uintptr_t)(a38);
  *(uintptr_t *)(unk_20C28A4) = (uintptr_t)(a39);
  if ( a13 <= 0.0 )
    vox::DriverCallbackSourceInterface::s_alteredSpeedOfSound = a14;
  else
    vox::DriverCallbackSourceInterface::s_alteredSpeedOfSound = a14 / a13;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::SetDriverCallbackPeriod  (binary VA: 0x1003180)
// Original: vox::DriverCallbackSourceInterface::SetDriverCallbackPeriod
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::SetDriverCallbackPeriod(vox::DriverCallbackSourceInterface::Self *self)
{
  int result;

  result = (int)(float)(16384.0 * *(float *)&self);
  vox::DriverCallbackSourceInterface::s_driverCallbackPeriod = result;
  vox::MinibusDataGeneratorInterface::s_driverCallbackPeriod = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::SetDriverSampleRate  (binary VA: 0x10031b0)
// Original: vox::DriverCallbackSourceInterface::SetDriverSampleRate
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::SetDriverSampleRate(vox::DriverCallbackSourceInterface::Self *self)
{
  vox::MiniBusManager::Self *Instance;

  vox::DriverCallbackSourceInterface::s_driverSampleRate = (uintptr_t)(uintptr_t)(self);
  vox::MinibusDataGeneratorInterface::s_driverSampleRate = (int)(uintptr_t)(self);
  Instance = vox::MiniBusManager::GetInstance();
  if ( Instance != nullptr )
    vox::MiniBusManager::SetMixingSampleRate(Instance, (int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FillBufferMono16  (binary VA: 0x1003dd0)
// Original: vox::DriverCallbackSourceInterface::FillBufferMono16
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FillBufferMono16(vox::DriverCallbackSourceInterface::Self *self, int *a2, int a3)
{
  vox::DriverCallbackSourceInterface::Self *v3;
  int v5;
  int *WorkBuffer;
  int WorkData;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  typedef vox::VoxThread::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_DistanceGain;
  typedef int _g4_t_v35;
  typedef int _g4_t_DirectionalGain;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef bool _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v20)) > _g4_s2 ? (28u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v23)) > _g4_s5 ? (36u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v25)) > _g4_s7 ? (40u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v28)) > _g4_s10 ? (48u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v29)) > _g4_s11 ? (52u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v30)) > _g4_s12 ? (64u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v31)) > _g4_s13 ? (64u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v32)) > _g4_s14 ? (64u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v33)) > _g4_s15 ? (68u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_DistanceGain)) > _g4_s16 ? (72u + sizeof(_g4_t_DistanceGain)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v35)) > _g4_s17 ? (72u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_DirectionalGain)) > _g4_s18 ? (76u + sizeof(_g4_t_DirectionalGain)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v37)) > _g4_s19 ? (76u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v38)) > _g4_s20 ? (80u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (87u + sizeof(_g4_t_v39)) > _g4_s21 ? (87u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v40)) > _g4_s22 ? (88u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v41)) > _g4_s23 ? (92u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v42)) > _g4_s24 ? (104u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v43)) > _g4_s25 ? (108u + sizeof(_g4_t_v43)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_DistanceGain &DistanceGain = *reinterpret_cast<_g4_t_DistanceGain *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_DirectionalGain &DirectionalGain = *reinterpret_cast<_g4_t_DirectionalGain *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 87u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);

  v3 = self;
  vox::VoxThread::GetCurThreadId(v18);
  sub_BA06A0();
  if ( *((uint32_t *)self + 25) == 1 && *(uint8_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 20) == 0 )
  {
    v30 = *((uint32_t *)self + 13);
    DistanceGain = vox::DriverCallbackSourceInterface::GetDistanceGain(self);
    DirectionalGain = vox::DriverCallbackSourceInterface::GetDirectionalGain(self);
    vox::DriverCallbackSourceInterface::GetStereoPanning(self, &v42, v43);
    v38 = v43[0];
    v40 = v42;
    v23 = ((*((uint32_t *)self + 19) * a3) >> 14) + 3;
    v5 = *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 12);
    v20 = *((uint32_t *)self + 19) * a3;
    WorkBuffer = vox::DriverCallbackInterface::GetWorkBuffer(4 * v23);
    if ( *WorkBuffer == 0 )
    {
      *((uint32_t *)self + 25) = -1;
      goto LABEL_2;
    }
    v19 = v20;
    v21 = (int)(uintptr_t)(WorkBuffer);
    WorkData = vox::DriverCallbackSourceInterface::GetWorkData(self, (uint8_t *)WorkBuffer[1], 2 * v23, v19);
    v24 = *(uint32_t *)(v21 + 4);
    v8 = ((WorkData / 2) << 14) / *((uint32_t *)self + 19);
    if ( a3 > v8 )
    {
      v29 = v8 - 1;
      v9 = *((uint32_t *)self + 11);
      v28 = v29 - v9;
      if ( v29 - v9 >= 0 )
      {
        v41 = *((uint32_t *)self + 11);
        v10 = *((uint8_t *)self + 49);
        v39 = v9 > 0;
        if ( v10 == 0 )
          goto LABEL_8;
        goto LABEL_38;
      }
      v41 = v29;
      v39 = v29 > 0;
      v28 = 0;
    }
    else
    {
      v9 = *((uint32_t *)self + 11);
      v39 = false;
      v28 = a3 + 1;
      v29 = a3;
      v41 = 0;
    }
    v10 = *((uint8_t *)self + 49);
    if ( v10 == 0 )
    {
LABEL_8:
      v25 = *((uint32_t *)self + 14);
      v26 = *((uint32_t *)self + 15);
      goto LABEL_9;
    }
LABEL_38:
    *((uint32_t *)self + 14) = 0;
    *((uint32_t *)self + 15) = 0;
    v26 = 0;
    v25 = 0;
LABEL_9:
    v33 = v28;
    if ( v28 >= v9 )
    {
      if ( v9 > a3 )
        v9 = a3;
      v33 = v9;
    }
    v11 = (DirectionalGain * ((DistanceGain * v30) >> 14)) >> 14;
    v22 = (v11 * v38) >> 14;
    v31 = (v40 * v11) >> 14;
    if ( *((uint8_t *)self + 48) != 0 || v10 != 0 )
    {
      *((uint8_t *)self + 49) = 0;
      if ( v33 <= 0 )
      {
        v37 = 0;
        v35 = 0;
      }
      else
      {
        v35 = (v31 - v25) / v33;
        v14 = (v22 - v26) / v33;
        v37 = v14;
        if ( v35 == 0 )
        {
          if ( v31 > v25 )
          {
            v35 = 1;
            v33 = v31 - v25;
          }
          else if ( v31 < v25 )
          {
            v35 = -1;
            v33 = v25 - v31;
          }
        }
        if ( v14 != 0 )
        {
          v15 = (v35 | v14) != 0;
        }
        else
        {
          if ( v22 > v26 )
          {
            v33 = v22 - v26;
            v37 = 1;
            goto LABEL_17;
          }
          if ( v22 < v26 )
          {
            v33 = v26 - v22;
            v37 = -1;
            goto LABEL_17;
          }
          v15 = v35 != 0;
        }
        if ( v15 )
          goto LABEL_17;
      }
    }
    else
    {
      *((uint8_t *)self + 48) = 1;
      v26 = (v11 * v38) >> 14;
      v25 = (v40 * v11) >> 14;
      v37 = 0;
      v35 = 0;
    }
    if ( !v39 )
    {
      v26 = 0;
      v25 = 0;
      if ( (v22 | v31) != 0 )
      {
        v26 = v22;
        v25 = v31;
        if ( v29 > 0 )
        {
          v27 = 0;
          do
          {
            ++v27;
            v16 = *(int16_t *)(v24 + 2 * (v5 >> 14));
            v17 = v16 + (((*(int16_t *)(v24 + 2 * (v5 >> 14) + 2) - v16) * (v5 & 0x3FFF)) >> 14);
            v3 = self;
            *a2 += (v17 * v31) >> 14;
            a2[1] += (v22 * v17) >> 14;
            a2 += 2;
            v5 += *((uint32_t *)self + 19);
          }
          while ( v27 != v29 );
          v26 = v22;
          v25 = v31;
        }
      }
      goto LABEL_25;
    }
LABEL_17:
    if ( v29 > 0 )
    {
      v12 = 0;
      do
      {
        if ( v12 == v28 )
        {
          v35 = ((v25 / v41) >> 31) - (((v25 / v41) >> 31) ^ (v25 / v41));
          v37 = ((v26 / v41) >> 31) - (((v26 / v41) >> 31) ^ (v26 / v41));
        }
        if ( v12 >= v28 || v12 < v33 )
        {
          v25 += v35;
          v26 += v37;
        }
        ++v12;
        v32 = *(int16_t *)(v24 + 2 * (v5 >> 14));
        v13 = v32 + (((*(int16_t *)(v24 + 2 * (v5 >> 14) + 2) - v32) * (v5 & 0x3FFF)) >> 14);
        v3 = self;
        *a2 += (v13 * v25) >> 14;
        a2[1] += (v26 * v13) >> 14;
        a2 += 2;
        v5 += *((uint32_t *)self + 19);
      }
      while ( v12 != v29 );
    }
LABEL_25:
    *((uint32_t *)v3 + 14) = v25;
    *((uint32_t *)v3 + 15) = v26;
  }
LABEL_2:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FillBufferStereo16  (binary VA: 0x1004330)
// Original: vox::DriverCallbackSourceInterface::FillBufferStereo16
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FillBufferStereo16(vox::DriverCallbackSourceInterface::Self *self, int *a2, int a3)
{
  int v4;
  int v5;
  int *WorkBuffer;
  int *v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  vox::VoxThread::Self *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  bool v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;

  vox::VoxThread::GetCurThreadId(v19);
  sub_BA06A0();
  if ( *((uint32_t *)self + 25) == 1 )
  {
    v4 = *((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24);
    if ( *(uint8_t *)(v4 + 20) == 0 )
    {
      v5 = *(uint32_t *)(v4 + 12);
      v20 = *((uint32_t *)self + 19) * a3;
      WorkBuffer = vox::DriverCallbackInterface::GetWorkBuffer(4 * (v20 >> 14) + 12);
      v7 = WorkBuffer;
      if ( *WorkBuffer == 0 )
      {
        *((uint32_t *)self + 25) = -1;
        goto LABEL_2;
      }
      v8 = ((vox::DriverCallbackSourceInterface::GetWorkData(
               self,
               (uint8_t *)WorkBuffer[1],
               4 * (v20 >> 14) + 12,
               v20)
           / 4) << 14)
         / *((uint32_t *)self + 19);
      v9 = v7[1];
      if ( a3 > v8 )
      {
        v29 = v8 - 1;
        v10 = *((uint32_t *)self + 11);
        v27 = v29 - v10;
        if ( v29 - v10 < 0 )
        {
          v32 = v29;
          v24 = v29 > 0;
          v27 = 0;
        }
        else
        {
          v32 = *((uint32_t *)self + 11);
          v24 = v10 > 0;
        }
      }
      else
      {
        v24 = false;
        v32 = 0;
        v27 = a3 + 1;
        v10 = *((uint32_t *)self + 11);
        v29 = a3;
      }
      v11 = *((uint8_t *)self + 49);
      if ( v11 != 0 )
      {
        *((uint32_t *)self + 14) = 0;
        v23 = 0;
      }
      else
      {
        v23 = *((uint32_t *)self + 14);
      }
      v30 = v27;
      if ( v27 >= v10 )
      {
        if ( v10 > a3 )
          v10 = a3;
        v30 = v10;
      }
      if ( *((uint8_t *)self + 48) != 0 || v11 != 0 )
      {
        *((uint8_t *)self + 49) = 0;
        if ( v30 <= 0 )
        {
          v31 = 0;
        }
        else
        {
          v16 = *((uint32_t *)self + 13);
          v31 = (v16 - v23) / v30;
          if ( v31 != 0 )
            goto LABEL_17;
          if ( v16 > v23 )
          {
            v31 = 1;
            v30 = v16 - v23;
            goto LABEL_17;
          }
          if ( v16 < v23 )
          {
            v31 = -1;
            v30 = v23 - v16;
            goto LABEL_17;
          }
        }
      }
      else
      {
        v12 = *((uint32_t *)self + 13);
        *((uint8_t *)self + 48) = 1;
        v23 = v12;
        v31 = 0;
      }
      if ( !v24 )
      {
        v23 = *((uint32_t *)self + 13);
        if ( v23 != 0 && v29 > 0 )
        {
          v22 = 0;
          do
          {
            v26 = v5 & 0x3FFF;
            ++v22;
            v17 = (v5 >> 14) + 1;
            v28 = *(int16_t *)(v9 + 4 * (v5 >> 14));
            *a2 += (v23 * (v28 + ((v26 * (*(int16_t *)(v9 + 4 * v17) - v28)) >> 14))) >> 14;
            v18 = *(int16_t *)(v9 + 4 * (v5 >> 14) + 2);
            a2[1] += (v23 * (((v26 * (*(int16_t *)(v9 + 4 * v17 + 2) - v18)) >> 14) + v18)) >> 14;
            a2 += 2;
            v5 += *((uint32_t *)self + 19);
          }
          while ( v22 != v29 );
        }
        goto LABEL_25;
      }
LABEL_17:
      if ( v29 > 0 )
      {
        v21 = v5;
        v13 = 0;
        do
        {
          if ( v13 == v27 )
            v31 = ((v23 / v32) >> 31) - (((v23 / v32) >> 31) ^ (v23 / v32));
          if ( v13 >= v27 || v13 < v30 )
            v23 += v31;
          v25 = v21 & 0x3FFF;
          ++v13;
          v14 = *(int16_t *)(v9 + 4 * (v21 >> 14));
          *a2 += (v23 * (v14 + ((v25 * (*(int16_t *)(v9 + 4 * ((v21 >> 14) + 1)) - v14)) >> 14))) >> 14;
          v15 = *(int16_t *)(v9 + 4 * (v21 >> 14) + 2);
          a2[1] += (v23 * (((v25 * (*(int16_t *)(v9 + 4 * ((v21 >> 14) + 1) + 2) - v15)) >> 14) + v15)) >> 14;
          a2 += 2;
          v21 += *((uint32_t *)self + 19);
        }
        while ( v13 != v29 );
      }
LABEL_25:
      *((uint32_t *)self + 14) = v23;
    }
  }
LABEL_2:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::Construct  (binary VA: 0x1005fb0)
// Original: vox::DriverCallbackSourceInterface::DriverCallbackSourceInterface
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::Construct(vox::DriverCallbackSourceInterface::Self *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int i;
  int v4;
  __m128i *v5;
  unsigned int v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  typedef vox::VoxThread::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v16)) > _g4_s1 ? (36u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v17)) > _g4_s2 ? (40u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v18)) > _g4_s3 ? (44u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v19)) > _g4_s4 ? (48u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v20)) > _g4_s5 ? (52u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v21)) > _g4_s6 ? (56u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v22)) > _g4_s7 ? (60u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v23)) > _g4_s8 ? (64u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v24)) > _g4_s9 ? (68u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D448);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_208D430);
  vox::Mutex::Construct((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 26) = a2;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 48) = 0;
  *((uint8_t *)self + 49) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0x4000;
  *((uint32_t *)self + 17) = 0x4000;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0x4000;
  *((uint32_t *)self + 22) = 1;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 28) = 2;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  vox::VoxFilter::VoxFilter((vox::DriverCallbackSourceInterface::Self *)((char *)self + 196));
  vox::VoxFilter::VoxFilter((vox::DriverCallbackSourceInterface::Self *)((char *)self + 236));
  vox::VoxFilter::VoxFilter((vox::DriverCallbackSourceInterface::Self *)((char *)self + 276));
  vox::VoxFilter::VoxFilter((vox::DriverCallbackSourceInterface::Self *)((char *)self + 316));
  vox::VoxThread::GetCurThreadId(v15);
  sub_BA06A0();
  vox::SourceDataGenerator::setParent((vox::DriverCallbackSourceInterface::Self *)((char *)self + 8), self);
  *((uint32_t *)self + 4) = 540;
  *((uint32_t *)self + 11) = (int)(float)((float)vox::DriverCallbackSourceInterface::s_driverSampleRate * 0.003f);
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  *((uint32_t *)self + 13) = 0x4000;
  *((uint32_t *)self + 16) = 0x4000;
  v2 = -((uint8_t)(((uint8_t)(uintptr_t)(self) + 104) & 0xF) >> 1) & 7;
  *((uint32_t *)self + 6) = 1065353216;
  *((uint32_t *)self + 20) = 0x40000000;
  *((uint32_t *)self + 21) = 0x40000000;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 2139095039;
  *((uint32_t *)self + 43) = 1065353216;
  *((uint32_t *)self + 44) = 1065353216;
  *((uint32_t *)self + 45) = 1135869952;
  *((uint32_t *)self + 46) = 1135869952;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 2139095039;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 89) = 0;
  if ( v2 != 0 )
  {
    for ( i = 0; i < v2; v4 = 128 - i )
      *((uint16_t *)self + i++ + 180) = 0;
  }
  else
  {
    v4 = 128;
    i = 0;
  }
  v18 = 128 - v2;
  v17 = (128 - v2) >> 3;
  v16 = 8 * v17;
  if ( 8 * v17 == 0 )
    goto LABEL_8;
  v5 = (__m128i *)((char *)self + 2 * v2 + 360);
  v6 = 0;
  do
  {
    ++v6;
    *v5++ = g4_m128_from<__m128i>(0LL);
  }
  while ( v6 < v17 );
  v4 -= v16;
  i += v16;
  if ( v18 != v16 )
  {
LABEL_8:
    v7 = 2 * v4;
    v8 = 0;
    v9 = (char *)self + 2 * i;
    do
    {
      *(uint16_t *)&v9[v8 + 360] = 0;
      v8 += 2;
    }
    while ( v8 != v7 );
  }
  v10 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 154) = 0;
  *((uint32_t *)self + 155) = 64;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 54) = 0;
  v11 = *((uint32_t *)self + 30);
  v12 = *((uint32_t *)self + 28) * (v10 / 4);
  v13 = v11 == *((uint32_t *)self + 31);
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 77) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 85) = 0;
  *((uint32_t *)self + 84) = 0;
  *((uint8_t *)self + 4) = 1;
  LOBYTE(v24) = 1;
  v22 = 0;
  v23 = 0;
  v21 = v12;
  v20 = 0;
  if ( v13 )
  {
    sub_FFE9C0((int)(uintptr_t)(self) + 116, (char *)v11, &v19);
  }
  else
  {
    v14 = 0;
    if ( v11 != 0 )
    {
      *(uint32_t *)v11 = v19;
      *(uint32_t *)(v11 + 4) = v20;
      *(uint32_t *)(v11 + 8) = v21;
      *(uint32_t *)(v11 + 12) = v22;
      *(uint32_t *)(v11 + 16) = v23;
      *(uint32_t *)(v11 + 20) = v24;
      v14 = *((uint32_t *)self + 30);
    }
    *((uint32_t *)self + 30) = v14 + 24;
  }
  *((uint32_t *)self + 27) = 0;
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FillBufferMono16Biquad  (binary VA: 0x1006ad0)
// Original: vox::DriverCallbackSourceInterface::FillBufferMono16Biquad
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FillBufferMono16Biquad(vox::DriverCallbackSourceInterface::Self *self, int *a2, int a3)
{
  float v3; // xmm7_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  double v7; // xmm0_8
  int v8;
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  int *WorkBuffer;
  int WorkData;
  int v17;
  int v18;
  int v19;
  int v20;
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;
  float v24; // xmm0_4
  int *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  float v47; // xmm5_4
  typedef vox::VoxThread::Self *_g4_t_v48;
  typedef vox::VoxThread::Self *_g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef double _g4_t_v93 __attribute__((aligned(1)));
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef double _g4_t_v96 __attribute__((aligned(1)));
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_DirectionalGain;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef float _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_DistanceGain;
  typedef int _g4_t_v113;
  typedef float _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef char _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130[4];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (12u + sizeof(_g4_t_v48)) > _g4_s0 ? (12u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v49)) > _g4_s1 ? (12u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v50)) > _g4_s2 ? (60u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v51)) > _g4_s3 ? (76u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (136u + sizeof(_g4_t_v52)) > _g4_s4 ? (136u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (140u + sizeof(_g4_t_v53)) > _g4_s5 ? (140u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (160u + sizeof(_g4_t_v54)) > _g4_s6 ? (160u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (164u + sizeof(_g4_t_v55)) > _g4_s7 ? (164u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (176u + sizeof(_g4_t_v56)) > _g4_s8 ? (176u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (188u + sizeof(_g4_t_v57)) > _g4_s9 ? (188u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (192u + sizeof(_g4_t_v58)) > _g4_s10 ? (192u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (196u + sizeof(_g4_t_v59)) > _g4_s11 ? (196u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (200u + sizeof(_g4_t_v60)) > _g4_s12 ? (200u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v61)) > _g4_s13 ? (204u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v62)) > _g4_s14 ? (208u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (212u + sizeof(_g4_t_v63)) > _g4_s15 ? (212u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (216u + sizeof(_g4_t_v64)) > _g4_s16 ? (216u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v65)) > _g4_s17 ? (220u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v66)) > _g4_s18 ? (224u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (228u + sizeof(_g4_t_v67)) > _g4_s19 ? (228u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v68)) > _g4_s20 ? (232u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v69)) > _g4_s21 ? (236u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v70)) > _g4_s22 ? (240u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v71)) > _g4_s23 ? (244u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v72)) > _g4_s24 ? (248u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (252u + sizeof(_g4_t_v73)) > _g4_s25 ? (252u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (256u + sizeof(_g4_t_v74)) > _g4_s26 ? (256u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (260u + sizeof(_g4_t_v75)) > _g4_s27 ? (260u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (264u + sizeof(_g4_t_v76)) > _g4_s28 ? (264u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (268u + sizeof(_g4_t_v77)) > _g4_s29 ? (268u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (272u + sizeof(_g4_t_v78)) > _g4_s30 ? (272u + sizeof(_g4_t_v78)) : _g4_s30,
    _g4_s32 = (276u + sizeof(_g4_t_v79)) > _g4_s31 ? (276u + sizeof(_g4_t_v79)) : _g4_s31,
    _g4_s33 = (280u + sizeof(_g4_t_v80)) > _g4_s32 ? (280u + sizeof(_g4_t_v80)) : _g4_s32,
    _g4_s34 = (284u + sizeof(_g4_t_v81)) > _g4_s33 ? (284u + sizeof(_g4_t_v81)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v82)) > _g4_s34 ? (288u + sizeof(_g4_t_v82)) : _g4_s34,
    _g4_s36 = (292u + sizeof(_g4_t_v83)) > _g4_s35 ? (292u + sizeof(_g4_t_v83)) : _g4_s35,
    _g4_s37 = (296u + sizeof(_g4_t_v84)) > _g4_s36 ? (296u + sizeof(_g4_t_v84)) : _g4_s36,
    _g4_s38 = (300u + sizeof(_g4_t_v85)) > _g4_s37 ? (300u + sizeof(_g4_t_v85)) : _g4_s37,
    _g4_s39 = (304u + sizeof(_g4_t_v86)) > _g4_s38 ? (304u + sizeof(_g4_t_v86)) : _g4_s38,
    _g4_s40 = (308u + sizeof(_g4_t_v87)) > _g4_s39 ? (308u + sizeof(_g4_t_v87)) : _g4_s39,
    _g4_s41 = (312u + sizeof(_g4_t_v88)) > _g4_s40 ? (312u + sizeof(_g4_t_v88)) : _g4_s40,
    _g4_s42 = (316u + sizeof(_g4_t_v89)) > _g4_s41 ? (316u + sizeof(_g4_t_v89)) : _g4_s41,
    _g4_s43 = (320u + sizeof(_g4_t_v90)) > _g4_s42 ? (320u + sizeof(_g4_t_v90)) : _g4_s42,
    _g4_s44 = (324u + sizeof(_g4_t_v91)) > _g4_s43 ? (324u + sizeof(_g4_t_v91)) : _g4_s43,
    _g4_s45 = (328u + sizeof(_g4_t_v92)) > _g4_s44 ? (328u + sizeof(_g4_t_v92)) : _g4_s44,
    _g4_s46 = (332u + sizeof(_g4_t_v93)) > _g4_s45 ? (332u + sizeof(_g4_t_v93)) : _g4_s45,
    _g4_s47 = (332u + sizeof(_g4_t_v94)) > _g4_s46 ? (332u + sizeof(_g4_t_v94)) : _g4_s46,
    _g4_s48 = (332u + sizeof(_g4_t_v95)) > _g4_s47 ? (332u + sizeof(_g4_t_v95)) : _g4_s47,
    _g4_s49 = (340u + sizeof(_g4_t_v96)) > _g4_s48 ? (340u + sizeof(_g4_t_v96)) : _g4_s48,
    _g4_s50 = (340u + sizeof(_g4_t_v97)) > _g4_s49 ? (340u + sizeof(_g4_t_v97)) : _g4_s49,
    _g4_s51 = (348u + sizeof(_g4_t_v98)) > _g4_s50 ? (348u + sizeof(_g4_t_v98)) : _g4_s50,
    _g4_s52 = (352u + sizeof(_g4_t_DirectionalGain)) > _g4_s51 ? (352u + sizeof(_g4_t_DirectionalGain)) : _g4_s51,
    _g4_s53 = (352u + sizeof(_g4_t_v100)) > _g4_s52 ? (352u + sizeof(_g4_t_v100)) : _g4_s52,
    _g4_s54 = (356u + sizeof(_g4_t_v101)) > _g4_s53 ? (356u + sizeof(_g4_t_v101)) : _g4_s53,
    _g4_s55 = (356u + sizeof(_g4_t_v102)) > _g4_s54 ? (356u + sizeof(_g4_t_v102)) : _g4_s54,
    _g4_s56 = (360u + sizeof(_g4_t_v103)) > _g4_s55 ? (360u + sizeof(_g4_t_v103)) : _g4_s55,
    _g4_s57 = (360u + sizeof(_g4_t_v104)) > _g4_s56 ? (360u + sizeof(_g4_t_v104)) : _g4_s56,
    _g4_s58 = (364u + sizeof(_g4_t_v105)) > _g4_s57 ? (364u + sizeof(_g4_t_v105)) : _g4_s57,
    _g4_s59 = (364u + sizeof(_g4_t_v106)) > _g4_s58 ? (364u + sizeof(_g4_t_v106)) : _g4_s58,
    _g4_s60 = (368u + sizeof(_g4_t_v107)) > _g4_s59 ? (368u + sizeof(_g4_t_v107)) : _g4_s59,
    _g4_s61 = (368u + sizeof(_g4_t_v108)) > _g4_s60 ? (368u + sizeof(_g4_t_v108)) : _g4_s60,
    _g4_s62 = (372u + sizeof(_g4_t_v109)) > _g4_s61 ? (372u + sizeof(_g4_t_v109)) : _g4_s61,
    _g4_s63 = (372u + sizeof(_g4_t_v110)) > _g4_s62 ? (372u + sizeof(_g4_t_v110)) : _g4_s62,
    _g4_s64 = (376u + sizeof(_g4_t_v111)) > _g4_s63 ? (376u + sizeof(_g4_t_v111)) : _g4_s63,
    _g4_s65 = (380u + sizeof(_g4_t_DistanceGain)) > _g4_s64 ? (380u + sizeof(_g4_t_DistanceGain)) : _g4_s64,
    _g4_s66 = (380u + sizeof(_g4_t_v113)) > _g4_s65 ? (380u + sizeof(_g4_t_v113)) : _g4_s65,
    _g4_s67 = (384u + sizeof(_g4_t_v114)) > _g4_s66 ? (384u + sizeof(_g4_t_v114)) : _g4_s66,
    _g4_s68 = (384u + sizeof(_g4_t_v115)) > _g4_s67 ? (384u + sizeof(_g4_t_v115)) : _g4_s67,
    _g4_s69 = (388u + sizeof(_g4_t_v116)) > _g4_s68 ? (388u + sizeof(_g4_t_v116)) : _g4_s68,
    _g4_s70 = (388u + sizeof(_g4_t_v117)) > _g4_s69 ? (388u + sizeof(_g4_t_v117)) : _g4_s69,
    _g4_s71 = (392u + sizeof(_g4_t_v118)) > _g4_s70 ? (392u + sizeof(_g4_t_v118)) : _g4_s70,
    _g4_s72 = (392u + sizeof(_g4_t_v119)) > _g4_s71 ? (392u + sizeof(_g4_t_v119)) : _g4_s71,
    _g4_s73 = (396u + sizeof(_g4_t_v120)) > _g4_s72 ? (396u + sizeof(_g4_t_v120)) : _g4_s72,
    _g4_s74 = (396u + sizeof(_g4_t_v121)) > _g4_s73 ? (396u + sizeof(_g4_t_v121)) : _g4_s73,
    _g4_s75 = (396u + sizeof(_g4_t_v122)) > _g4_s74 ? (396u + sizeof(_g4_t_v122)) : _g4_s74,
    _g4_s76 = (404u + sizeof(_g4_t_v123)) > _g4_s75 ? (404u + sizeof(_g4_t_v123)) : _g4_s75,
    _g4_s77 = (404u + sizeof(_g4_t_v124)) > _g4_s76 ? (404u + sizeof(_g4_t_v124)) : _g4_s76,
    _g4_s78 = (408u + sizeof(_g4_t_v125)) > _g4_s77 ? (408u + sizeof(_g4_t_v125)) : _g4_s77,
    _g4_s79 = (408u + sizeof(_g4_t_v126)) > _g4_s78 ? (408u + sizeof(_g4_t_v126)) : _g4_s78,
    _g4_s80 = (408u + sizeof(_g4_t_v127)) > _g4_s79 ? (408u + sizeof(_g4_t_v127)) : _g4_s79,
    _g4_s81 = (416u + sizeof(_g4_t_v128)) > _g4_s80 ? (416u + sizeof(_g4_t_v128)) : _g4_s80,
    _g4_s82 = (420u + sizeof(_g4_t_v129)) > _g4_s81 ? (420u + sizeof(_g4_t_v129)) : _g4_s81,
    _g4_s83 = (424u + sizeof(_g4_t_v130)) > _g4_s82 ? (424u + sizeof(_g4_t_v130)) : _g4_s82
  };
  alignas(16) uint8_t _g4_sf[_g4_s83];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 188u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 192u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 196u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 200u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 204u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 208u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 212u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 216u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 220u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 224u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 228u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 232u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 236u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 240u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 244u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 248u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 252u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 256u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 260u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 264u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 268u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 272u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 276u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 280u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 284u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 288u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 292u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 296u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 300u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 304u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 308u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 312u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 316u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 320u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 324u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 328u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 332u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 332u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 332u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 340u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 340u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 348u);
  _g4_t_DirectionalGain &DirectionalGain = *reinterpret_cast<_g4_t_DirectionalGain *>(_g4_sf + 352u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 352u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 356u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 356u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 360u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 360u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 364u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 364u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 368u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 368u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 372u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 372u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 376u);
  _g4_t_DistanceGain &DistanceGain = *reinterpret_cast<_g4_t_DistanceGain *>(_g4_sf + 380u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 380u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 384u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 384u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 388u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 388u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 392u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 392u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 396u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 396u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 396u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 404u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 404u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 408u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 408u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 408u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 416u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 420u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 424u);

  vox::VoxThread::GetCurThreadId(v48);
  sub_BA06A0();
  if ( *((uint32_t *)self + 25) == 1 && *(uint8_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 20) == 0 )
  {
    v101 = *((uint32_t *)self + 13);
    DistanceGain = vox::DriverCallbackSourceInterface::GetDistanceGain(self);
    DirectionalGain = vox::DriverCallbackSourceInterface::GetDirectionalGain(self);
    vox::DriverCallbackSourceInterface::GetNormalizedPosition(self, &v128, &v129, v130);
    v3 = v128;
    v4 = v130[0];
    v96 = sqrt((float)((float)((float)(vox::DriverCallbackSourceInterface::s_tweakParameters + -0.5) * v128) + 0.5));
    v93 = sqrt((float)((float)((float)(0.5 - vox::DriverCallbackSourceInterface::s_tweakParameters) * v128) + 0.5));
    if ( v130[0] < 0.0 )
      v5 = 0.001f * (*(const float *)&unk_20C2864);
    else
      v5 = 0.001f * (*(const float *)&unk_20C2868);
    v6 = fmaxf(fminf((float)(v5 * (float)vox::DriverCallbackSourceInterface::s_driverSampleRate) * v128, 120.0), -120.0);
    if ( v6 < 0.0 )
    {
      v7 = (float)-v6 + 0.5;
      v8 = *((uint32_t *)self + 154);
      *((uint32_t *)self + 89) = 0;
    }
    else
    {
      v7 = v6 + 0.5;
      v8 = *((uint32_t *)self + 154);
      *((uint32_t *)self + 89) = 1;
    }
    *((uint32_t *)self + 155) = ((uint8_t)v8 - (uint8_t)(int)v7) & 0x7F;
    if ( v4 > 0.4f )
    {
      v114 = 0.0;
      v10 = 0.0;
      v107 = 0.0;
    }
    else if ( v4 < -0.4f )
    {
      v10 = 0.5;
      v114 = -2.0;
      v107 = 2.0;
    }
    else
    {
      v9 = (float)(1.5 * (float)(2.5 * v4))
         - (float)((float)((float)((float)(2.5 * v4) * (float)(2.5 * v4)) * 0.5) * (float)(2.5 * v4));
      v107 = 1.0 - v9;
      v10 = (float)(1.0 - v9) * 0.25;
      v114 = v9 - 1.0;
    }
    if ( v3 <= 0.4f )
    {
      if ( v3 >= -0.4f )
      {
        v47 = (float)(1.5 * (float)(2.5 * v3))
            - (float)((float)((float)((float)(2.5 * v3) * (float)(2.5 * v3)) * 0.5) * (float)(2.5 * v3));
        v11 = (float)(1.0 - v47) * v10;
        v12 = (float)(v47 + 1.0) * v10;
        v105 = v11 - 1.0;
        v103 = v12 - 1.0;
      }
      else
      {
        v11 = v10 + v10;
        v103 = -1.0;
        v105 = (float)(v10 + v10) - 1.0;
        v12 = 0.0;
      }
    }
    else
    {
      v11 = 0.0;
      v12 = v10 + v10;
      v103 = (float)(v10 + v10) - 1.0;
      v105 = -1.0;
    }
    v51 = (float)((float)((float)(0.996f * v129) - (float)(0.087f * v4)) * 3200.0) + 8280.0;
    v120 = (float)((float)((float)((float)((float)(v4 + 1.0) * 0.5) + 1.0) * (float)((float)(v4 + 1.0) * 0.5)) + 1.0)
         * (float)(v3 * 1000.0);
    v50 = fminf((float)vox::DriverCallbackSourceInterface::GetDistanceGain(self) * 0.000061035156f, 1.0);
    vox::VoxFilter::setNotch(
      (vox::DriverCallbackSourceInterface::Self *)((char *)self + 196),
      v51 - v120,
      (float)((float)((float)((float)((float)((*(const float *)&unk_20C2874) * 0.5) * v114) + -1.0) - (float)(v11 * (*(const float *)&unk_20C2870)))
            + (float)((*(const float *)&unk_20C2878) * v50))
    * (*(const float *)&unk_20C286C),
      (float)((float)((float)((float)((float)((*(const float *)&unk_20C2884) * 0.5) * v107) + 1.0) + (float)((*(const float *)&unk_20C2880) * v11))
            - (float)((*(const float *)&unk_20C2888) * v50))
    * (*(const float *)&unk_20C287C),
      (float)vox::DriverCallbackSourceInterface::s_driverSampleRate);
    vox::VoxFilter::setNotch(
      (vox::DriverCallbackSourceInterface::Self *)((char *)self + 236),
      v51 + v120,
      (float)((float)((float)((float)((float)((*(const float *)&unk_20C2874) * 0.5) * v114) + -1.0) - (float)(v12 * (*(const float *)&unk_20C2870)))
            + (float)((*(const float *)&unk_20C2878) * v50))
    * (*(const float *)&unk_20C286C),
      (float)((float)((float)((float)((float)((*(const float *)&unk_20C2884) * 0.5) * v107) + 1.0) + (float)((*(const float *)&unk_20C2880) * v12))
            - (float)((*(const float *)&unk_20C2888) * v50))
    * (*(const float *)&unk_20C287C),
      (float)vox::DriverCallbackSourceInterface::s_driverSampleRate);
    v13 = pow(
            (float)(1.0
                  - (float)((float)((float)((float)((float)((*(const double *)&unk_20C2898) * 0.5) * v105) + 1.0)
                                  * (float)((float)((float)((*(const double *)&unk_20C289C) * 0.5) * v114) + 1.0))
                          * v50)),
            (*(const float *)unk_20C2894));
    vox::VoxFilter::setDistanceBandpass(
      (vox::DriverCallbackSourceInterface::Self *)((char *)self + 276),
      (float)((*(const float *)&unk_20C2890) * (float)(1.0 - v13)) + (float)((*(const float *)&unk_20C288C) * v13),
      (*(const float *)unk_20C28A0),
      (float)vox::DriverCallbackSourceInterface::s_driverSampleRate);
    v14 = pow(
            (float)(1.0
                  - (float)((float)((float)((float)((float)((*(const double *)&unk_20C2898) * 0.5) * v103) + 1.0)
                                  * (float)((float)((float)(0.5 * (*(const double *)&unk_20C289C)) * v114) + 1.0))
                          * v50)),
            (*(const float *)unk_20C2894));
    vox::VoxFilter::setDistanceBandpass(
      (vox::DriverCallbackSourceInterface::Self *)((char *)self + 316),
      (float)((float)(1.0 - v14) * (*(const float *)&unk_20C2890)) + (float)((*(const float *)&unk_20C288C) * v14),
      (*(const float *)unk_20C28A0),
      (float)vox::DriverCallbackSourceInterface::s_driverSampleRate);
    v53 = *((uint32_t *)self + 19) * a3;
    v115 = *(uint32_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 12);
    v52 = (v53 >> 14) + 3;
    WorkBuffer = vox::DriverCallbackInterface::GetWorkBuffer(4 * v52);
    if ( *WorkBuffer != 0 )
    {
      WorkData = vox::DriverCallbackSourceInterface::GetWorkData(self, (uint8_t *)WorkBuffer[1], 2 * v52, v53);
      v83 = WorkBuffer[1];
      v17 = ((WorkData / 2) << 14) / *((uint32_t *)self + 19);
      if ( a3 > v17 )
      {
        v20 = v17 - 1;
        v18 = *((uint32_t *)self + 11);
        v19 = v20 - v18;
        if ( v20 - v18 < 0 )
        {
          v54 = v20;
          v19 = 0;
        }
        else
        {
          v54 = *((uint32_t *)self + 11);
        }
      }
      else
      {
        v18 = *((uint32_t *)self + 11);
        v19 = a3 + 1;
        v20 = a3;
        v54 = 0;
      }
      v125 = *((uint8_t *)self + 49);
      if ( v125 != 0 )
      {
        *((uint32_t *)self + 14) = 0;
        *((uint32_t *)self + 15) = 0;
        v57 = 0;
        v58 = 0;
      }
      else
      {
        v58 = *((uint32_t *)self + 14);
        v57 = *((uint32_t *)self + 15);
      }
      if ( v19 >= v18 )
      {
        v19 = a3;
        if ( v18 <= a3 )
          v19 = v18;
      }
      v21 = (float)((DirectionalGain * ((DistanceGain * v101) >> 14)) >> 14);
      v22 = v96;
      v23 = (int)(float)(v22 * v21);
      v24 = v93;
      v118 = v23;
      v121 = (int)(float)(v24 * v21);
      if ( *((uint8_t *)self + 48) != 0 || v125 != 0 )
      {
        *((uint8_t *)self + 49) = 0;
        v80 = 0;
        v81 = 0;
        if ( v19 > 0 )
        {
          v110 = v23 - v57;
          v81 = (v121 - v58) / v19;
          v46 = (v23 - v57) / v19;
          v80 = (v118 - v57) / v19;
          if ( v81 == 0 )
          {
            if ( v121 > v58 )
            {
              v19 = v121 - v58;
              v81 = 1;
            }
            else if ( v121 < v58 )
            {
              v81 = -1;
              v19 = v58 - v121;
            }
          }
          if ( v46 == 0 )
          {
            if ( v118 > v57 )
            {
              v19 = v110;
              v80 = 1;
            }
            else if ( v118 < v57 )
            {
              v80 = -1;
              v19 = v57 - v118;
            }
          }
        }
      }
      else
      {
        *((uint8_t *)self + 48) = 1;
        v57 = v23;
        v58 = (int)(float)(v24 * v21);
        v80 = 0;
        v81 = 0;
      }
      v56 = 0;
      v55 = v20 - v19;
      if ( v54 <= v20 - v19 )
      {
        v56 = v20 - v19 - v54;
        v55 = v54;
      }
      if ( v20 > 0 )
      {
        if ( v19 <= v20 )
          v20 = v19;
        v59 = v20;
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v82 = v59;
              if ( v59 <= 0 )
              {
                v43 = v56;
                v44 = 0;
                if ( v56 <= 0 )
                {
                  v43 = v55;
                  v44 = v80;
                }
                v45 = 0;
                if ( v56 <= 0 )
                  v45 = v81;
                v82 = v43;
                v80 = v44;
                v81 = v45;
              }
              vox::VoxThread::GetCurThreadId(v49);
              sub_BA06A0();
              v79 = (int)(float)(*((float *)self + 49) * 16384.0);
              v106 = (int)*((float *)self + 54);
              v78 = (int)(float)(*((float *)self + 50) * 16384.0);
              v88 = (int)*((float *)self + 55);
              v77 = (int)(float)(*((float *)self + 51) * 16384.0);
              v76 = (int)(float)(*((float *)self + 52) * 65536.0);
              v92 = *((uint32_t *)self + 58);
              v75 = (int)(float)(*((float *)self + 53) * 65536.0);
              v109 = (int)*((float *)self + 64);
              v108 = (int)(float)(*((float *)self + 56) * 0.25);
              v126 = (int)(float)(*((float *)self + 57) * 0.25);
              v74 = (int)(float)(*((float *)self + 59) * 16384.0);
              v73 = (int)(float)(*((float *)self + 60) * 16384.0);
              v116 = (int)*((float *)self + 65);
              v72 = (int)(float)(*((float *)self + 61) * 16384.0);
              v71 = (int)(float)(*((float *)self + 62) * 65536.0);
              v91 = *((uint32_t *)self + 68);
              v70 = (int)(float)(*((float *)self + 63) * 65536.0);
              v111 = (int)(float)(*((float *)self + 66) * 0.25);
              v123 = (int)(float)(*((float *)self + 67) * 0.25);
              v69 = (int)(float)(*((float *)self + 69) * 65536.0);
              v68 = (int)(float)(*((float *)self + 70) * 65536.0);
              v67 = (int)(float)(*((float *)self + 71) * 65536.0);
              v122 = (int)(float)(*((float *)self + 74) * 0.25);
              v85 = (int)(float)(*((float *)self + 75) * 0.25);
              v66 = (int)(float)(*((float *)self + 72) * 65536.0);
              v90 = *((uint32_t *)self + 78);
              v65 = (int)(float)(*((float *)self + 73) * 65536.0);
              v102 = (int)(float)(*((float *)self + 76) * 0.25);
              v84 = (int)(float)(*((float *)self + 77) * 0.25);
              v64 = (int)(float)(*((float *)self + 79) * 65536.0);
              v63 = (int)(float)(*((float *)self + 80) * 65536.0);
              v62 = (int)(float)(*((float *)self + 81) * 65536.0);
              v119 = (int)(float)(*((float *)self + 84) * 0.25);
              v86 = (int)(float)(*((float *)self + 85) * 0.25);
              v61 = (int)(float)(*((float *)self + 82) * 65536.0);
              v89 = *((uint32_t *)self + 88);
              v60 = (int)(float)(*((float *)self + 83) * 65536.0);
              v104 = (int)(float)(*((float *)self + 86) * 0.25);
              v87 = (int)(float)(*((float *)self + 87) * 0.25);
              if ( v82 > 0 )
              {
                v100 = 0;
                v97 = v57;
                v113 = v58;
                v25 = a2;
                while ( 1 )
                {
                  v113 += v81;
                  v97 += v80;
                  v94 = *(int16_t *)(v83 + 2 * (v115 >> 14));
                  v29 = *((uint32_t *)self + 154);
                  v30 = v94 + (((*(int16_t *)(v83 + 2 * (v115 >> 14) + 2) - v94) * (v115 & 0x3FFF)) >> 14);
                  *((uint16_t *)self + v29 + 180) = v30;
                  *((uint32_t *)self + 154) = ((uint8_t)v29 + 1) & 0x7F;
                  v31 = *((uint32_t *)self + 155);
                  v32 = *((int16_t *)self + v31 + 180);
                  *((uint32_t *)self + 155) = ((uint8_t)v31 + 1) & 0x7F;
                  v33 = v30;
                  if ( *((uint32_t *)self + 89) == 0 )
                  {
                    v33 = v32;
                    v32 = v30;
                  }
                  v98 = v33;
                  v95 = v32;
                  v34 = v92 + v75 * v126 + v32 * v79 + v78 * v106 + v77 * v88 + v76 * v108;
                  v92 = (uint16_t)v34;
                  v127 = v34 >> 16;
                  v35 = v91 + v70 * v123 + v72 * v116 + v71 * v111 + v74 * v98 + v73 * v109;
                  v91 = (uint16_t)v35;
                  v124 = v35 >> 16;
                  v36 = v90 + v84 * v65 + v102 * v66 + v85 * v67 + v69 * (v34 >> 16) + v122 * v68;
                  v90 = (uint16_t)v36;
                  v117 = v64 * v124 + v63 * v119;
                  v37 = v89 + v60 * v87 + v117 + v62 * v86 + v61 * v104;
                  v89 = (uint16_t)(v89 + v60 * v87 + v117 + v62 * v86 + v61 * v104);
                  v38 = v36 >> 16;
                  ++v100;
                  v39 = v37 >> 16;
                  *v25 += (v38 * v113) >> 12;
                  v25[1] += (v39 * v97) >> 12;
                  v25 += 2;
                  v115 += *((uint32_t *)self + 19);
                  if ( v100 == v82 )
                    break;
                  v26 = v104;
                  v104 = v39;
                  v87 = v26;
                  v86 = v119;
                  v27 = v102;
                  v102 = v38;
                  v119 = v124;
                  v84 = v27;
                  v85 = v122;
                  v28 = v124;
                  v122 = v127;
                  v123 = v111;
                  v111 = v28;
                  v116 = v109;
                  v109 = v98;
                  v126 = v108;
                  v108 = v122;
                  v88 = v106;
                  v106 = v95;
                }
                v58 += v81 + (v82 - 1) * v81;
                v57 += v80 + (v82 - 1) * v80;
                v40 = v104;
                v104 = v39;
                a2 += 2 * v82;
                v87 = v40;
                v86 = v119;
                v119 = v124;
                v84 = v102;
                v41 = v124;
                v102 = v38;
                v85 = v122;
                v122 = v127;
                v123 = v111;
                v111 = v41;
                v116 = v109;
                v109 = v98;
                v42 = v127;
                v126 = v108;
                v108 = v42;
                v88 = v106;
                v106 = v95;
              }
              *((float *)self + 54) = (float)v106;
              *((float *)self + 55) = (float)v88;
              *((uint32_t *)self + 58) = v92;
              *((uint32_t *)self + 68) = v91;
              *((uint32_t *)self + 78) = v90;
              *((float *)self + 56) = (float)v108 * 4.0;
              *((float *)self + 57) = (float)v126 * 4.0;
              *((float *)self + 64) = (float)v109;
              *((float *)self + 65) = (float)v116;
              *((float *)self + 66) = (float)v111 * 4.0;
              *((float *)self + 67) = (float)v123 * 4.0;
              *((float *)self + 74) = (float)v122 * 4.0;
              *((float *)self + 75) = (float)v85 * 4.0;
              *((float *)self + 76) = (float)v102 * 4.0;
              *((float *)self + 77) = (float)v84 * 4.0;
              *((float *)self + 84) = (float)v119 * 4.0;
              *((float *)self + 85) = (float)v86 * 4.0;
              *((uint32_t *)self + 88) = v89;
              *((float *)self + 86) = (float)v104 * 4.0;
              *((float *)self + 87) = (float)v87 * 4.0;
              v49 = (vox::VoxThread::Self *)"Resampler with integer biquad";
              sub_BA06B0();
              if ( v59 <= 0 )
                break;
              v59 -= v82;
            }
            if ( v56 <= 0 )
              break;
            v56 -= v82;
            if ( v56 == 0 && v54 != 0 )
            {
              v81 = ((v58 / v54) >> 31) - (((v58 / v54) >> 31) ^ (v58 / v54));
              v80 = ((v57 / v54) >> 31) - (((v57 / v54) >> 31) ^ (v57 / v54));
            }
          }
          v55 -= v82;
        }
        while ( v55 != 0 );
      }
      *((uint32_t *)self + 14) = v58;
      *((uint32_t *)self + 15) = v57;
    }
    else
    {
      *((uint32_t *)self + 25) = -1;
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::FillBuffer  (binary VA: 0x1008140)
// Original: vox::DriverCallbackSourceInterface::FillBuffer
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::FillBuffer(vox::DriverCallbackSourceInterface::Self *self, int *a2, int a3)
{
  int v3;
  int v4;
  float v5; // xmm0_4
  int v6;
  vox::Mutex::Self *v7;
  float DopplerPitch;
  int v9;
  int v10;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  if ( *((uint32_t *)self + 25) != 1 || *(uint8_t *)(*((uint32_t *)self + 29) + 24 * *((uint32_t *)self + 24) + 20) != 0 )
    goto LABEL_2;
  v3 = *((uint32_t *)self + 16);
  v10 = *((uint32_t *)self + 17);
  if ( v10 != v3 )
  {
    v9 = *((uint32_t *)self + 18);
    if ( (int)__builtin_abs(v3 - v10) >= (int)__builtin_abs(v9) )
      v3 = v9 + v10;
    *((uint32_t *)self + 17) = v3;
  }
  v4 = *((uint32_t *)self + 7);
  v5 = 1.0;
  if ( v4 == 1 )
  {
    DopplerPitch = vox::DriverCallbackSourceInterface::GetDopplerPitch(self);
    v3 = *((uint32_t *)self + 17);
    v5 = DopplerPitch;
    v4 = *((uint32_t *)self + 7);
  }
  v6 = (int)(float)(fminf(
                      (float)((float)(v5 * *((float *)self + 6)) * 0.000061035156f) * (float)v3,
                      *((float *)self + 20))
                  * 16384.0);
  *((uint32_t *)self + 19) = v6;
  if ( v6 == 0 )
  {
    *((uint32_t *)self + 19) = 1;
LABEL_12:
    if ( v4 != 1 )
    {
      if ( v4 == 2 && *((uint32_t *)self + 9) == 16 )
        vox::DriverCallbackSourceInterface::FillBufferStereo16(self, a2, a3);
      goto LABEL_2;
    }
    if ( *((uint32_t *)self + 9) != 16 )
      goto LABEL_2;
    if ( *((uint32_t *)self + 41) != 0
      && *((float *)self + 32) == 0.0
      && *((float *)self + 33) == 0.0
      && *((float *)self + 34) == 0.0
      || vox::DriverCallbackSourceInterface::s_enable3dSimulation == 0
      || *((uint8_t *)self + 4) == 0 )
    {
      vox::DriverCallbackSourceInterface::FillBufferMono16(self, a2, a3);
      goto LABEL_2;
    }
LABEL_35:
    vox::DriverCallbackSourceInterface::FillBufferMono16Biquad(self, a2, a3);
    goto LABEL_2;
  }
  if ( v6 != 0x4000 )
    goto LABEL_12;
  if ( v4 == 1 )
  {
    if ( *((uint32_t *)self + 9) != 16 )
      goto LABEL_2;
    if ( *((uint32_t *)self + 41) != 0
      && *((float *)self + 32) == 0.0
      && *((float *)self + 33) == 0.0
      && *((float *)self + 34) == 0.0
      || vox::DriverCallbackSourceInterface::s_enable3dSimulation == 0
      || *((uint8_t *)self + 4) == 0 )
    {
      vox::DriverCallbackSourceInterface::FillBufferMono16NoInter(self, a2, a3);
      goto LABEL_2;
    }
    goto LABEL_35;
  }
  if ( v4 == 2 && *((uint32_t *)self + 9) == 16 )
    vox::DriverCallbackSourceInterface::FillBufferStereo16NoInter(self, a2, a3);
LABEL_2:
  vox::Mutex::Unlock((vox::DriverCallbackSourceInterface::Self *)((char *)self + 20));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::AllowBufferReference  (binary VA: 0x1008590)
// Original: vox::DriverCallbackSourceInterface::AllowBufferReference
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::AllowBufferReference()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::GetBufferCount  (binary VA: 0x10085a0)
// Original: vox::DriverCallbackSourceInterface::GetBufferCount
// ----------------------------------------------------------------------------
int vox::DriverCallbackSourceInterface::GetBufferCount(vox::DriverCallbackSourceInterface::Self *self)
{
  return *((uint32_t *)self + 22);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackSourceInterface::PrintDebug  (binary VA: 0x10085b0)
// Original: vox::DriverCallbackSourceInterface::PrintDebug
// ----------------------------------------------------------------------------
void vox::DriverCallbackSourceInterface::PrintDebug()
{
  ;
}


