#include "Core/Utils/DecompTypes.h"
#include "vox_DriverAndroid.h"

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::PrintDebug  (binary VA: 0x10554d0)
// Original: vox::DriverAndroid::PrintDebug
// ----------------------------------------------------------------------------
void vox::DriverAndroid::PrintDebug()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::SetMicrophoneCallback  (binary VA: 0x10554e0)
// Original: vox::DriverAndroid::SetMicrophoneCallback
// ----------------------------------------------------------------------------
int vox::DriverAndroid::SetMicrophoneCallback()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::RemoveMicrophoneCallback  (binary VA: 0x10554f0)
// Original: vox::DriverAndroid::RemoveMicrophoneCallback
// ----------------------------------------------------------------------------
void vox::DriverAndroid::RemoveMicrophoneCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Reset  (binary VA: 0x1055500)
// Original: vox::DriverAndroid::Reset
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Reset(pthread_mutex_t **self)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 1);
  *((uint8_t *)self + 184) = 1;
  vox::Mutex::Unlock(self + 1);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::InitAT  (binary VA: 0x10555b0)
// Original: vox::DriverAndroid::_InitAT
// ----------------------------------------------------------------------------
void vox::DriverAndroid::InitAT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::ShutdownAT  (binary VA: 0x10555c0)
// Original: vox::DriverAndroid::_ShutdownAT
// ----------------------------------------------------------------------------
void vox::DriverAndroid::ShutdownAT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::ShutdownOSL  (binary VA: 0x10555d0)
// Original: vox::DriverAndroid::_ShutdownOSL
// ----------------------------------------------------------------------------
int vox::DriverAndroid::ShutdownOSL(vox::DriverAndroid::Self *self)
{
  void (***v1)(uint32_t, int);
  int v2;
  int v3;
  int result;

  v1 = *((void (****)(uint32_t, int))self + 54);
  *((uint8_t *)self + 8) = 0;
  (**v1)((uint32_t)(uintptr_t)(v1), 1);
  if ( *((uint32_t *)self + 49) != 0 )
  {
    VoxFreeInternal(*((void **)self + 49));
    *((uint32_t *)self + 49) = 0;
  }
  v2 = *((uint32_t *)self + 53);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 24))(*((uint32_t *)self + 53));
    *((uint32_t *)self + 53) = 0;
    *((uint32_t *)self + 54) = 0;
    *((uint32_t *)self + 55) = 0;
  }
  v3 = *((uint32_t *)self + 52);
  if ( v3 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 24))(*((uint32_t *)self + 52));
    *((uint32_t *)self + 52) = 0;
  }
  result = *((uint32_t *)self + 50);
  if ( result != 0 )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 24))(*((uint32_t *)self + 50));
    *((uint32_t *)self + 50) = 0;
    *((uint32_t *)self + 51) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Shutdown  (binary VA: 0x10556a0)
// Original: vox::DriverAndroid::Shutdown
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Shutdown(vox::DriverAndroid::Self *self)
{
  int v1;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v1 = *((uint32_t *)self + 45);
  if ( v1 == 1 )
  {
    vox::DriverAndroid::ShutdownAT();
  }
  else if ( v1 == 2 )
  {
    vox::DriverAndroid::ShutdownOSL(self);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Destroy  (binary VA: 0x1055730)
// Original: vox::DriverAndroid::~DriverAndroid
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Destroy(vox::DriverAndroid::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DB88);
  vox::DriverAndroid::Shutdown(self);
  vox::DriverCallbackInterface::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Destroy_ea1055780  (binary VA: 0x1055780)
// Original: vox::DriverAndroid::~DriverAndroid
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Destroy_ea1055780(vox::DriverAndroid::Self *self)
{
  vox::DriverAndroid::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::SuspendAT  (binary VA: 0x10557c0)
// Original: vox::DriverAndroid::_SuspendAT
// ----------------------------------------------------------------------------
void vox::DriverAndroid::SuspendAT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::SuspendOSL  (binary VA: 0x10557d0)
// Original: vox::DriverAndroid::_SuspendOSL
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DriverAndroid::SuspendOSL(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 1);
  if ( *((uint8_t *)self + 8) != 0 )
  {
    G4_MEM_CALL((uintptr_t)((*(uintptr_t *)(G4_MUTEX_LOCK((void (**)(uint32_t, int))(*(self + 54)))))), (uint32_t)(uintptr_t)(*(self + 54)), 2);
    *((uint8_t *)self + 185) = 1;
  }
  return vox::Mutex::Unlock(self + 1);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Suspend  (binary VA: 0x1055840)
// Original: vox::DriverAndroid::Suspend
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Suspend(vox::DriverAndroid::Self *self)
{
  int v1;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v1 = *((uint32_t *)self + 45);
  if ( v1 == 1 )
  {
    vox::DriverAndroid::SuspendAT();
  }
  else if ( v1 == 2 )
  {
    vox::DriverAndroid::SuspendOSL((pthread_mutex_t **)self);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::ResumeAT  (binary VA: 0x10558d0)
// Original: vox::DriverAndroid::_ResumeAT
// ----------------------------------------------------------------------------
void vox::DriverAndroid::ResumeAT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::ResumeOSL  (binary VA: 0x10558e0)
// Original: vox::DriverAndroid::_ResumeOSL
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DriverAndroid::ResumeOSL(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 1);
  if ( *((uint8_t *)self + 8) != 0 )
  {
    G4_MEM_CALL((uintptr_t)((*(uintptr_t *)(G4_MUTEX_LOCK((void (**)(uint32_t, int))(*(self + 54)))))), (uint32_t)(uintptr_t)(*(self + 54)), 3);
    *((uint8_t *)self + 185) = 0;
  }
  return vox::Mutex::Unlock(self + 1);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Resume  (binary VA: 0x1055950)
// Original: vox::DriverAndroid::Resume
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Resume(vox::DriverAndroid::Self *self)
{
  int v1;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v1 = *((uint32_t *)self + 45);
  if ( v1 == 1 )
  {
    vox::DriverAndroid::ResumeAT();
  }
  else if ( v1 == 2 )
  {
    vox::DriverAndroid::ResumeOSL((pthread_mutex_t **)self);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::ResetAT  (binary VA: 0x10559e0)
// Original: vox::DriverAndroid::ResetAT
// ----------------------------------------------------------------------------
void vox::DriverAndroid::ResetAT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::DoCallbackOSL  (binary VA: 0x10559f0)
// Original: vox::DriverAndroid::DoCallbackOSL
// ----------------------------------------------------------------------------
size_t vox::DriverAndroid::DoCallbackOSL(vox::DriverAndroid::Self *self)
{
  size_t result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  uint16_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int i;
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);

  if ( *((uint32_t *)self + 56) != 0
    || (int)(result = *((uint32_t *)self + 57)) > 0
    && (result = VoxAllocInternal(
                   result,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_driver_android.cpp"),
                   (int)(uintptr_t)("DoCallbackOSL"),
                   1069),
        *((uint32_t *)self + 56) = result,
        result != 0) )
  {
    (*(void (**)(uint32_t, int *))(**((uint32_t **)self + 55) + 8))(*((uint32_t *)self + 55), v24);
    result = v24[0];
    v23 = v24[0];
    if ( v24[0] <= 1 )
    {
      do
      {
        v2 = *((uint32_t *)self + 57);
        v3 = v2 + 3;
        if ( v2 >= 0 )
          v3 = *((uint32_t *)self + 57);
        v4 = *((uint32_t *)self + 47);
        v5 = v3 >> 2;
        if ( v4 == 0x4000 )
        {
          vox::DriverCallbackInterface::FillBuffer(self, *((int16_t **)self + 56), v5);
        }
        else
        {
          v6 = ((*((uint32_t *)self + 48) + v5 * v4) >> 14) - 7;
          v22 = v6;
          if ( v6 > 0 )
            vox::DriverCallbackInterface::FillBuffer(self, (int16_t *)(*((uint32_t *)self + 49) + 32), v6);
          v7 = *((uint32_t *)self + 56);
          v21 = v7 + 4 * v5;
          if ( v7 < v21 )
          {
            v8 = v7 + 4;
            v9 = *((uint32_t *)self + 48);
            v10 = (uint16_t *)(v7 + 2);
            do
            {
              v20 = v9 & 0x3FFF;
              v16 = 2 * (v9 >> 14);
              v17 = *((uint32_t *)self + 49);
              v18 = *(int16_t *)(v17 + 2 * v16 - 8);
              v11 = v18 + ((v20 * (*(int16_t *)(v17 + 2 * v16 - 4) - v18)) >> 14);
              if ( (unsigned int)(v11 + 0x8000) > 0xFFFF )
                LOWORD(v11) = ((v11 >> 31) & 1) + 0x7FFF;
              *(uint16_t *)(v8 - 4) = v11;
              v12 = *((uint32_t *)self + 49);
              v13 = *(int16_t *)(v12 + 2 * v16 - 6);
              v14 = ((v20 * (*(int16_t *)(v12 + 2 * v16 - 2) - v13)) >> 14) + v13;
              if ( (unsigned int)(v14 + 0x8000) <= 0xFFFF )
                *v10 = v14;
              else
                *v10 = ((v14 >> 31) & 1) + 0x7FFF;
              v15 = v8;
              v8 += 4;
              v9 = *((uint32_t *)self + 47) + *((uint32_t *)self + 48);
              v10 += 2;
              *((uint32_t *)self + 48) = v9;
            }
            while ( v15 < v21 );
          }
          for ( i = 0; i != 32; i += 2 )
            *(uint16_t *)(*((uint32_t *)self + 49) + i) = *(uint16_t *)(*((uint32_t *)self + 49) + 4 * v22 + i);
          *((uint32_t *)self + 48) -= v22 << 14;
        }
        result = (***((int (****)(uint32_t, uint32_t, uint32_t))self + 55))(
                   *((uint32_t *)self + 55),
                   *((uint32_t *)self + 56),
                   *((uint32_t *)self + 57));
        ++v23;
      }
      while ( v23 != 2 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::CallbackOSL  (binary VA: 0x1055c40)
// Original: vox::DriverAndroid::CallbackOSL
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DriverAndroid::CallbackOSL(int a1, pthread_mutex_t **a2)
{
  pthread_mutex_t *result;

  if ( a2 != nullptr )
  {
    vox::Mutex::Lock(a2 + 1);
    vox::DriverAndroid::DoCallbackOSL((vox::DriverAndroid::Self *)a2);
    return vox::Mutex::Unlock(a2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::InitOSL  (binary VA: 0x1055c90)
// Original: vox::DriverAndroid::_InitOSL
// ----------------------------------------------------------------------------
int vox::DriverAndroid::InitOSL(vox::DriverAndroid::Self *self)
{
  int result;
  double v2; // xmm0_8
  size_t n;
  void *s;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_c;
  typedef float _g4_t_ca;
  typedef uint8_t _g4_t_v10[4];
  typedef uint32_t _g4_t_v11[2];
  typedef uint32_t _g4_t_v12[2];
  typedef uint32_t _g4_t_v13[2];
  typedef uint32_t _g4_t_v14[2];
  typedef uint32_t _g4_t_v15[3];
  typedef uint32_t _g4_t_v16[3];
  typedef uint32_t _g4_t_v17[14];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_c)) > _g4_s0 ? (4u + sizeof(_g4_t_c)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_ca)) > _g4_s1 ? (4u + sizeof(_g4_t_ca)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v10)) > _g4_s2 ? (40u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v11)) > _g4_s3 ? (44u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v12)) > _g4_s4 ? (52u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v13)) > _g4_s5 ? (60u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v14)) > _g4_s6 ? (68u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v15)) > _g4_s7 ? (76u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v16)) > _g4_s8 ? (88u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v17)) > _g4_s9 ? (100u + sizeof(_g4_t_v17)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_c &c = *reinterpret_cast<_g4_t_c *>(_g4_sf + 4u);
  _g4_t_ca &ca = *reinterpret_cast<_g4_t_ca *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);

  vox::DriverCallbackSourceInterface::SetDriverSampleRate((vox::DriverCallbackSourceInterface::Self *)&stru_AC44, c);
  vox::DriverCallbackSourceInterface::SetDriverCallbackPeriod((vox::DriverCallbackSourceInterface::Self *)0x3CBE37DF, ca);
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 4096;
  vox::DriverAndroid::m_externalSampleRate[0] = 44100;
  slCreateEngine((SLObjectItf *)((char *)self + 200), 0, 0, 0, 0, 0);
  result = *((uint32_t *)self + 50);
  if ( result != 0 )
  {
    (**(void (***)(int, uint32_t))result)(result, 0);
    (*(void (**)(uint32_t, uint32_t, char *))(**((uint32_t **)self + 50) + 12))(
      *((uint32_t *)self + 50),
      (uint32_t)(uintptr_t)(SL_IID_ENGINE),
      (char *)self + 204);
    (*(void (**)(uint32_t, uint8_t *))(**((uint32_t **)self + 50) + 8))(*((uint32_t *)self + 50), v10);
    result = *((uint32_t *)self + 51);
    if ( result != 0 )
    {
      G4_VCALL<void>(result, 28, (char *)self + 208, 0, 0, 0);
      result = *((uint32_t *)self + 52);
      if ( result != 0 )
      {
        (**(void (***)(int, uint32_t))result)(result, 0);
        (*(void (**)(uint32_t, uint8_t *))(**((uint32_t **)self + 52) + 8))(*((uint32_t *)self + 52), v10);
        v2 = 722534400.0 / (double)vox::DriverAndroid::m_externalSampleRate[0] + 0.5;
        *((uint32_t *)self + 47) = (int)v2;
        n = 4 * ((*((uint32_t *)self + 57) * (int)v2 - 1) >> 14) + 40;
        s = (void *)VoxAllocInternal(
                      n,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_driver_android.cpp"),
                      (int)(uintptr_t)("_InitOSL"),
                      354);
        *((uint32_t *)self + 49) = (uint32_t)(uintptr_t)(s);
        memset(s, 0, n);
        v5 = 1000 * vox::DriverAndroid::m_externalSampleRate[0];
        *((uint32_t *)self + 48) = 147456;
        v17[2] = v5;
        v12[0] = (uint32_t)(uintptr_t)(v11);
        v12[1] = (uint32_t)(uintptr_t)(v17);
        v13[1] = *((uint32_t *)self + 52);
        v14[0] = (uint32_t)(uintptr_t)(v13);
        v11[0] = 6;
        v11[1] = 2;
        v17[0] = 2;
        v17[1] = 2;
        v17[3] = 16;
        v17[4] = 16;
        v6 = (int)(uintptr_t)(SL_IID_BUFFERQUEUE);
        v7 = *((uint32_t *)self + 51);
        v17[5] = 3;
        v17[6] = 2;
        v13[0] = 4;
        v14[1] = 0;
        v15[1] = 0;
        v15[2] = 0;
        v15[0] = (uint32_t)(uintptr_t)(SL_IID_BUFFERQUEUE);
        v16[1] = 0;
        v16[2] = 0;
        v16[0] = 1;
        G4_VCALL<void>(v7, 8, (char *)self + 212, v12, v14, 1, v15, v16);
        (***((void (****)(uint32_t, uint32_t))self + 53))(*((uint32_t *)self + 53), 0);
        (*(void (**)(uint32_t, uint32_t, char *))(**((uint32_t **)self + 53) + 12))(
          *((uint32_t *)self + 53),
          (uint32_t)(uintptr_t)(SL_IID_PLAY),
          (char *)self + 216);
        (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 53) + 12))(
          *((uint32_t *)self + 53),
          v6,
          (char *)self + 220);
        (*(void (**)(uint32_t, int (*)(int, vox::DriverAndroid::Self *), vox::DriverAndroid::Self *))(**((uint32_t **)self + 55) + 12))(
          *((uint32_t *)self + 55),
          (int (*)(int, vox::DriverAndroid::Self *))(uintptr_t)(vox::DriverAndroid::CallbackOSL),
          self);
        vox::DriverAndroid::DoCallbackOSL(self);
        result = (***((int (****)(uint32_t, int))self + 54))(*((uint32_t *)self + 54), 3);
        *((uint32_t *)self + 45) = 2;
        *((uint8_t *)self + 8) = 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Init  (binary VA: 0x1056000)
// Original: vox::DriverAndroid::_Init
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Init(vox::DriverAndroid::Self *self)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::DriverCallbackInterface::Init();
  vox::DriverCallbackInterface::SetDefaultParameter(self);
  *((uint32_t *)self + 51) = 0;
  if ( vox::DriverAndroid::s_androidAPILevel[0] <= 8 )
    vox::DriverAndroid::InitAT();
  else
    vox::DriverAndroid::InitOSL(self);
  vox::DriverCallbackInterface::SetDefaultParameter(self);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::ResetOSL  (binary VA: 0x10560b0)
// Original: vox::DriverAndroid::_ResetOSL
// ----------------------------------------------------------------------------
void vox::DriverAndroid::ResetOSL(vox::DriverAndroid::Self *self)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::DriverAndroid::ShutdownOSL(self);
  *((uint32_t *)self + 45) = 0;
  *((uint8_t *)self + 185) = 0;
  vox::DriverAndroid::Init(self);
  *((uint8_t *)self + 184) = 0;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Update  (binary VA: 0x1056140)
// Original: vox::DriverAndroid::Update
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Update(vox::DriverAndroid::Self *self)
{
  int v1;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  if ( *((uint8_t *)self + 184) != 0 && *((uint8_t *)self + 185) == 0 )
  {
    v1 = *((uint32_t *)self + 45);
    if ( v1 == 1 )
    {
      vox::DriverAndroid::ResetAT();
    }
    else if ( v1 == 2 )
    {
      vox::DriverAndroid::ResetOSL(self);
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Init  (binary VA: 0x10561e0)
// Original: vox::DriverAndroid::Init
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Init(pthread_mutex_t **self)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 1);
  vox::DriverAndroid::Init((vox::DriverAndroid::Self *)self);
  vox::Mutex::Unlock(self + 1);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::Construct  (binary VA: 0x1056270)
// Original: vox::DriverAndroid::DriverAndroid
// ----------------------------------------------------------------------------
void vox::DriverAndroid::Construct(vox::DriverAndroid::Self *self)
{
  vox::DriverCallbackInterface::Construct(self);
  *((uint32_t *)self + 45) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DB88);
  *((uint8_t *)self + 184) = 0;
  *((uint8_t *)self + 185) = 0;
  vox::DriverAndroid::Init((pthread_mutex_t **)self);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::DoRecordCallbackOSL  (binary VA: 0x1056340)
// Original: vox::DriverAndroid::DoRecordCallbackOSL
// ----------------------------------------------------------------------------
void vox::DriverAndroid::DoRecordCallbackOSL()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::RecordCallbackOSL  (binary VA: 0x1056350)
// Original: vox::DriverAndroid::RecordCallbackOSL
// ----------------------------------------------------------------------------
void vox::DriverAndroid::RecordCallbackOSL()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::UpdateAT  (binary VA: 0x1056360)
// Original: vox::DriverAndroid::_UpdateAT
// ----------------------------------------------------------------------------
void vox::DriverAndroid::UpdateAT()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverAndroid::UpdateOSL  (binary VA: 0x1056370)
// Original: vox::DriverAndroid::_UpdateOSL
// ----------------------------------------------------------------------------
void vox::DriverAndroid::UpdateOSL()
{
  ;
}


