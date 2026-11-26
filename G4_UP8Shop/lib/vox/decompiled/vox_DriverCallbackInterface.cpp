#include "Core/Utils/DecompTypes.h"
#include "vox_DriverCallbackInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Update  (binary VA: 0xffe720)
// Original: vox::DriverCallbackInterface::Update
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::Update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::DestroyDriverSource  (binary VA: 0xfff020)
// Original: vox::DriverCallbackInterface::DestroyDriverSource
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::DestroyDriverSource(vox::DriverCallbackInterface::Self *self, vox::DriverSourceInterface::Self *a2)
{
  vox::MiniBusManager::Self *Instance;
  vox::VoxThread::Self *v3;
  int CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( a2 != nullptr )
  {
    Instance = vox::MiniBusManager::GetInstance();
    if ( Instance != nullptr )
      vox::MiniBusManager::DetachDataGeneratorFromBus(Instance, (int)(uintptr_t)(a2) + 8);
    (**(void (***)(vox::DriverSourceInterface::Self *, int))a2)(a2, CurThreadId);
    VoxFreeInternal(a2);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::SetDSPParameter  (binary VA: 0xfff8b0)
// Original: vox::DriverCallbackInterface::SetDSPParameter
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::SetDSPParameter(vox::DriverCallbackInterface::Self *self, int a2, void *a3)
{
  vox::MiniBusManager::Self *Instance;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( a2 == 0 )
  {
    Instance = vox::MiniBusManager::GetInstance();
    if ( Instance != nullptr )
      vox::MiniBusManager::SetBusRoutingVolumeChange((int)(uintptr_t)(Instance), (int)(uintptr_t)(a3));
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Construct  (binary VA: 0x1003200)
// Original: vox::DriverCallbackInterface::DriverCallbackInterface
// ----------------------------------------------------------------------------
vox::DriverCallbackInterface::Self * vox::DriverCallbackInterface::Construct(vox::DriverCallbackInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D4C8);
  vox::Mutex::Construct((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 16);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 16);
  *((uint32_t *)self + 3) = 1;
  vox::Vox3DGeneralParameters::Construct((vox::DriverCallbackInterface::Self *)((char *)self + 24));
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::ResetStaticBuffers  (binary VA: 0x10032a0)
// Original: vox::DriverCallbackInterface::_ResetStaticBuffers
// ----------------------------------------------------------------------------
void * vox::DriverCallbackInterface::ResetStaticBuffers()
{
  void *v0;
  void *result;

  v0 = (void *)vox::DriverCallbackInterface::m_sWorkBuffer[1];
  vox::DriverCallbackInterface::m_sWorkBuffer[0] = 0;
  if ( v0 != nullptr )
    VoxFreeInternal(v0);
  vox::DriverCallbackInterface::m_sWorkBuffer[1] = 0;
  result = (void *)vox::DriverCallbackInterface::m_sMixingBuffer[1];
  vox::DriverCallbackInterface::m_sMixingBuffer[0] = 0;
  if ( result != nullptr )
    result = (void *)VoxFreeInternal(result);
  vox::DriverCallbackInterface::m_sMixingBuffer[1] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Init  (binary VA: 0x1003310)
// Original: vox::DriverCallbackInterface::Init
// ----------------------------------------------------------------------------
void * vox::DriverCallbackInterface::Init()
{
  return vox::DriverCallbackInterface::ResetStaticBuffers();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Destroy  (binary VA: 0x1003340)
// Original: vox::DriverCallbackInterface::~DriverCallbackInterface
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::Destroy(vox::DriverCallbackInterface::Self *self)
{
  vox::DriverCallbackInterface::Self **v1;
  vox::DriverCallbackInterface::Self *v2;
  vox::Mutex::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D4C8);
  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  vox::DriverCallbackInterface::ResetStaticBuffers();
  vox::Mutex::Unlock((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  sub_BA06B0();
  v1 = *((vox::DriverCallbackInterface::Self ***)self + 4);
  if ( v1 != (vox::DriverCallbackInterface::Self **)((char *)self + 16) )
  {
    while ( 1 )
    {
      v2 = *v1;
      VoxFreeInternal(v1);
      if ( v2 == (vox::DriverCallbackInterface::Self *)((char *)self + 16) )
        break;
      v1 = (vox::DriverCallbackInterface::Self **)v2;
    }
  }
  vox::Mutex::Destroy((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D5C8);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Destroy_ea10033f0  (binary VA: 0x10033f0)
// Original: vox::DriverCallbackInterface::~DriverCallbackInterface
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::Destroy_ea10033f0(vox::DriverCallbackInterface::Self *self)
{
  vox::DriverCallbackInterface::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Update_ea1003430  (binary VA: 0x1003430)
// Original: vox::DriverCallbackInterface::_Update
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::Update_ea1003430()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Set3DParameter  (binary VA: 0x1003440)
// Original: vox::DriverCallbackInterface::_Set3DParameter
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::Set3DParameter(vox::DriverCallbackInterface::Self *self, int a2, uint32_t *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  switch ( a2 )
  {
    case 0:
      *((uint32_t *)self + 6) = *a3;
      break;
    case 1:
      *((uint32_t *)self + 7) = *a3;
      break;
    case 2:
      *((uint32_t *)self + 8) = *a3;
      break;
    case 3:
      *((uint32_t *)self + 9) = *a3;
      break;
    case 4:
      *((uint32_t *)self + 33) = *a3;
      *((uint32_t *)self + 34) = a3[1];
      *((uint32_t *)self + 35) = a3[2];
      break;
    case 5:
      *((uint32_t *)self + 36) = *a3;
      *((uint32_t *)self + 37) = a3[1];
      *((uint32_t *)self + 38) = a3[2];
      break;
    case 6:
      *((uint32_t *)self + 39) = *a3;
      *((uint32_t *)self + 40) = a3[1];
      *((uint32_t *)self + 41) = a3[2];
      *((uint32_t *)self + 42) = a3[3];
      *((uint32_t *)self + 43) = a3[4];
      *((uint32_t *)self + 44) = a3[5];
      break;
    case 7:
      *((uint32_t *)self + 15) = *a3;
      break;
    case 8:
      *((uint32_t *)self + 16) = *a3;
      break;
    case 9:
      *((uint32_t *)self + 17) = *a3;
      break;
    case 10:
      *((uint32_t *)self + 18) = *a3;
      break;
    case 11:
      *((uint32_t *)self + 19) = *a3;
      break;
    case 12:
      *((uint32_t *)self + 20) = *a3;
      break;
    case 13:
      *((uint32_t *)self + 21) = *a3;
      break;
    case 14:
      *((uint32_t *)self + 22) = *a3;
      break;
    case 15:
      *((uint32_t *)self + 23) = *a3;
      break;
    case 16:
      *((uint32_t *)self + 24) = *a3;
      break;
    case 17:
      *((uint32_t *)self + 25) = *a3;
      break;
    case 18:
      *((uint32_t *)self + 26) = *a3;
      break;
    case 19:
      *((uint32_t *)self + 27) = *a3;
      break;
    case 20:
      *((uint32_t *)self + 28) = *a3;
      break;
    case 21:
      *((uint32_t *)self + 29) = *a3;
      break;
    case 22:
      *((uint32_t *)self + 30) = *a3;
      break;
    case 23:
      *((uint32_t *)self + 31) = *a3;
      break;
    case 24:
      *((uint32_t *)self + 32) = *a3;
      break;
    default:
      break;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Set3DParameter_ea1003660  (binary VA: 0x1003660)
// Original: vox::DriverCallbackInterface::Set3DParameter
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::Set3DParameter_ea1003660(vox::DriverCallbackInterface::Self *self, int a2, uint32_t *a3)
{
  vox::Mutex::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  vox::DriverCallbackInterface::Set3DParameter(self, a2, a3);
  vox::Mutex::Unlock((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::SetDefaultParameter  (binary VA: 0x10036f0)
// Original: vox::DriverCallbackInterface::SetDefaultParameter
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::SetDefaultParameter(vox::DriverCallbackInterface::Self *self)
{
  typedef vox::DriverCallbackInterface::Self *_g4_t_v1;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef uint32_t _g4_t_v4[3];
  typedef uint32_t _g4_t_v5[3];
  typedef uint32_t _g4_t_v6[13];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v2)) > _g4_s1 ? (40u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v3)) > _g4_s2 ? (44u + sizeof(_g4_t_v3)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v4)) > _g4_s3 ? (48u + sizeof(_g4_t_v4)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v5)) > _g4_s4 ? (60u + sizeof(_g4_t_v5)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v6)) > _g4_s5 ? (72u + sizeof(_g4_t_v6)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 40u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 44u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 48u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 72u);

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  v2 = 1065353216;
  vox::DriverCallbackInterface::Set3DParameter(self, 0, (uint32_t *)(&v2));
  v2 = 1135322726;
  vox::DriverCallbackInterface::Set3DParameter(self, 1, (uint32_t *)(&v2));
  v3 = 1;
  vox::DriverCallbackInterface::Set3DParameter(self, 2, (uint32_t *)(&v3));
  v3 = 0;
  vox::DriverCallbackInterface::Set3DParameter(self, 3, (uint32_t *)(&v3));
  memset(v4, 0, sizeof(v4));
  vox::DriverCallbackInterface::Set3DParameter(self, 4, v4);
  memset(v5, 0, sizeof(v5));
  vox::DriverCallbackInterface::Set3DParameter(self, 5, v5);
  v6[0] = 0;
  v6[1] = 0;
  v6[3] = 0;
  v6[5] = 0;
  v6[2] = -1082130432;
  v6[4] = 1065353216;
  vox::DriverCallbackInterface::Set3DParameter(self, 6, v6);
  v2 = 1064682127;
  vox::DriverCallbackInterface::Set3DParameter(self, 7, (uint32_t *)(&v2));
  v2 = 1052099215;
  vox::DriverCallbackInterface::Set3DParameter(self, 8, (uint32_t *)(&v2));
  v2 = 1057887355;
  vox::DriverCallbackInterface::Set3DParameter(self, 9, (uint32_t *)(&v2));
  v2 = 1109393408;
  vox::DriverCallbackInterface::Set3DParameter(self, 10, (uint32_t *)(&v2));
  v2 = -1090519040;
  vox::DriverCallbackInterface::Set3DParameter(self, 11, (uint32_t *)(&v2));
  v2 = -1110651699;
  vox::DriverCallbackInterface::Set3DParameter(self, 12, (uint32_t *)(&v2));
  v2 = 0;
  vox::DriverCallbackInterface::Set3DParameter(self, 13, (uint32_t *)(&v2));
  v2 = 1028443341;
  vox::DriverCallbackInterface::Set3DParameter(self, 14, (uint32_t *)(&v2));
  v2 = 1084227584;
  vox::DriverCallbackInterface::Set3DParameter(self, 15, (uint32_t *)(&v2));
  v2 = 1065353216;
  vox::DriverCallbackInterface::Set3DParameter(self, 16, (uint32_t *)(&v2));
  v2 = 0;
  vox::DriverCallbackInterface::Set3DParameter(self, 17, (uint32_t *)(&v2));
  v2 = 1077936128;
  vox::DriverCallbackInterface::Set3DParameter(self, 18, (uint32_t *)(&v2));
  v2 = 1094713344;
  vox::DriverCallbackInterface::Set3DParameter(self, 19, (uint32_t *)(&v2));
  v2 = 1065353216;
  vox::DriverCallbackInterface::Set3DParameter(self, 20, (uint32_t *)(&v2));
  v2 = 0;
  vox::DriverCallbackInterface::Set3DParameter(self, 21, (uint32_t *)(&v2));
  v2 = 1045220557;
  vox::DriverCallbackInterface::Set3DParameter(self, 22, (uint32_t *)(&v2));
  v2 = 1153138688;
  vox::DriverCallbackInterface::Set3DParameter(self, 23, (uint32_t *)(&v2));
  v2 = 1065353216;
  vox::DriverCallbackInterface::Set3DParameter(self, 24, (uint32_t *)(&v2));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::FillBuffer  (binary VA: 0x1003a30)
// Original: vox::DriverCallbackInterface::_FillBuffer
// ----------------------------------------------------------------------------
int vox::DriverCallbackInterface::FillBuffer(vox::DriverCallbackInterface::Self *self, int16_t *a2, int a3)
{
  int v3;
  int v4;
  vox::MiniBusManager::Self *Instance;
  int v6;
  int v7;
  int i;
  int v9;
  vox::VoxThread::Self *s;
  vox::MiniBusManager::Self *sa;
  uint32_t v13[29];
  int v14;
  int v15;
  int CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0("DriverCallbackInterface::_FillBuffer", CurThreadId);
  std::memcpy(v13, (char *)self + 24, 108);
  vox::DriverCallbackSourceInterface::Set3DParameters(
    *((uint32_t *)self + 33),
    *((uint32_t *)self + 34),
    *((uint32_t *)self + 35),
    *((uint32_t *)self + 36),
    *((uint32_t *)self + 37),
    *((uint32_t *)self + 38),
    *((uint32_t *)self + 39),
    *((uint32_t *)self + 40),
    *((uint32_t *)self + 41),
    *((uint32_t *)self + 42),
    *((uint32_t *)self + 43),
    *((uint32_t *)self + 44),
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v13[7],
    v13[8],
    v13[9],
    v13[10],
    v13[11],
    v13[12],
    v13[13],
    v13[14],
    v13[15],
    v13[16],
    v13[17],
    v13[18],
    v13[19],
    v13[20],
    v13[21],
    v13[22],
    v13[23],
    v13[24],
    v13[25],
    v13[26]);
  v3 = 2 * a3;
  v4 = vox::DriverCallbackInterface::m_sMixingBuffer[0];
  if ( a3 > vox::DriverCallbackInterface::m_sMixingBuffer[0] )
  {
    if ( vox::DriverCallbackInterface::m_sMixingBuffer[1] != 0 )
    {
      VoxFreeInternal((void *)vox::DriverCallbackInterface::m_sMixingBuffer[1]);
      v3 = 2 * a3;
    }
    v14 = v3;
    vox::DriverCallbackInterface::m_sMixingBuffer[1] = VoxAllocInternal(
                                                         4 * v3,
                                                         0,
                                                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_driver_callback_template.cpp"),
                                                         (int)(uintptr_t)("_FillBuffer"),
                                                         3955);
    v3 = v14;
    if ( vox::DriverCallbackInterface::m_sMixingBuffer[1] == 0 )
    {
      vox::DriverCallbackInterface::m_sMixingBuffer[0] = 0;
      return ((sub_BA06B0("DriverCallbackInterface::_FillBuffer", CurThreadId)), (int)0);
    }
    vox::DriverCallbackInterface::m_sMixingBuffer[0] = a3;
    v4 = a3;
  }
  if ( v4 > 0 )
  {
    v15 = v3;
    memset((void *)vox::DriverCallbackInterface::m_sMixingBuffer[1], 0, 4 * v3);
    Instance = (vox::MiniBusManager::Self *)vox::MiniBusManager::GetInstance(sa);
    v6 = v15;
    if ( Instance != nullptr )
    {
      vox::MiniBusManager::FillBuffer(Instance, (int *)vox::DriverCallbackInterface::m_sMixingBuffer[1], a3);
      v6 = v15;
    }
    v7 = vox::DriverCallbackInterface::m_sMixingBuffer[1];
    if ( v6 > 0 )
    {
      for ( i = 0; i != v6; ++i )
      {
        while ( 1 )
        {
          v9 = *(uint32_t *)(v7 + 4 * i);
          if ( (unsigned int)(v9 + 0x8000) <= 0xFFFF )
            break;
          a2[i++] = ((v9 >> 31) & 1) + 0x7FFF;
          if ( i == v6 )
            return ((sub_BA06B0("DriverCallbackInterface::_FillBuffer", CurThreadId)), (int)0);
        }
        a2[i] = v9;
      }
    }
  }
  return ((sub_BA06B0("DriverCallbackInterface::_FillBuffer", CurThreadId)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::FillBuffer_ea1003c70  (binary VA: 0x1003c70)
// Original: vox::DriverCallbackInterface::FillBuffer
// ----------------------------------------------------------------------------
void vox::DriverCallbackInterface::FillBuffer_ea1003c70(vox::DriverCallbackInterface::Self *self, int16_t *a2, int a3)
{
  vox::Mutex::Self *v3;
  vox::Mutex::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  vox::Mutex::Lock((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  v3 = (vox::Mutex::Self *)((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  if ( *((uint8_t *)self + 8) != 0 )
  {
    vox::DriverCallbackInterface::FillBuffer(self, a2, a3);
    v3 = (vox::Mutex::Self *)((vox::DriverCallbackInterface::Self *)((char *)self + 4));
  }
  vox::Mutex::Unlock(v3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::GetWorkBuffer  (binary VA: 0x1003d10)
// Original: vox::DriverCallbackInterface::GetWorkBuffer
// ----------------------------------------------------------------------------
int * vox::DriverCallbackInterface::GetWorkBuffer(int self)
{
  int v1;
  int v2;
  vox::VoxThread::Self *v4;
  int CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0("DriverCallbackInterface::GetWorkBuffer", CurThreadId);
  if ( vox::DriverCallbackInterface::m_sWorkBuffer[0] < self )
  {
    if ( vox::DriverCallbackInterface::m_sWorkBuffer[1] != 0 )
      VoxFreeInternal((void *)vox::DriverCallbackInterface::m_sWorkBuffer[1]);
    v1 = VoxAllocInternal(
           self,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_driver_callback_template.cpp"),
           (int)(uintptr_t)("GetWorkBuffer"),
           4003);
    v2 = 0;
    vox::DriverCallbackInterface::m_sWorkBuffer[1] = v1;
    if ( v1 != 0 )
      v2 = self;
    vox::DriverCallbackInterface::m_sWorkBuffer[0] = v2;
  }
  sub_BA06B0("DriverCallbackInterface::GetWorkBuffer", CurThreadId);
  return (int *)(vox::DriverCallbackInterface::m_sWorkBuffer);
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::Serialize  (binary VA: 0x1004770)
// Original: vox::DriverCallbackInterface::Serialize
// ----------------------------------------------------------------------------
int vox::DriverCallbackInterface::Serialize(int a1, uint32_t *a2, char a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  const char *v9;
  size_t v10;
  uint32_t *v11;
  void *v12;
  int v14;
  vox::MiniBusManager::Self *Instance;
  int v16;
  uint32_t *v17;
  uint8_t *v18;
  void *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  void *v24;
  int v25;
  uint32_t *v26;
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
  int v47;
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  uint32_t *v54;
  int v55;
  uint32_t *v56;
  size_t v57;
  char *v58;
  char *v59;
  char *s;
  char *v61;
  char *v62;
  char *v63;
  char *v64;
  char *v65;
  char v66;
  void *v67;
  void *v68;
  void *v69;
  void *v70;
  void *v71;
  void *v72;
  float v73;
  uint32_t *v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  char *v96;
  float v97;

  v3 = a2 + 48;
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 4));
  v4 = a2[50];
  v74 = a2 + 50;
  if ( (uint32_t *)v4 != a2 + 50 && *(uint8_t *)(v4 + 8) != 0 )
  {
    v14 = a2[48];
    if ( (uint32_t *)v14 == v3 )
      goto LABEL_13;
    if ( *(uint8_t *)(v14 + 8) != 0 )
      *(uint8_t *)(v14 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
  }
  v58 = (char *)a2[48];
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v58);
  v59 = (char *)a2[50];
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 0;
  sub_1901920(v6, v59);
  g4_std_compat::ostream_write(a2 + 3, "{", 1);
  v7 = *(uint8_t *)(a1 + 8);
  v8 = a2[48];
  if ( (uint32_t *)v8 != v3 )
  {
    if ( *(uint8_t *)(v8 + 8) != 0 )
    {
      *(uint8_t *)(v8 + 8) = 0;
    }
    else
    {
      v66 = *(uint8_t *)(a1 + 8);
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
      v7 = v66;
    }
    v9 = "true";
    if ( v7 == 0 )
      v9 = "false";
    s = (char *)v9;
    g4_std_compat::ostream_write(a2 + 3, "\"", 1);
    g4_std_compat::ostream_write(a2 + 3, "active", 6);
    g4_std_compat::ostream_write(a2 + 3, "\":", 2);
    v10 = strlen(s);
    g4_std_compat::ostream_write(a2 + 3, s, v10);
  }
LABEL_13:
  if ( (a3 & 1) == 0 )
    goto LABEL_14;
  v18 = (uint8_t *)a2[48];
  v19 = v18;
  if ( v3 != (uint32_t *)v18 )
  {
    if ( v18[8] != 0 )
    {
      v18[8] = 0;
      v20 = a2 + 3;
    }
    else
    {
      v20 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v20, "\"", 1);
    g4_std_compat::ostream_write(v20, "I3DL1", 5);
    g4_std_compat::ostream_write(v20, "\":", 2);
    v18 = (uint8_t *)a2[48];
    v19 = v18;
  }
  v21 = a2[50];
  if ( v74 != (uint32_t *)v21 && *(uint8_t *)(v21 + 8) != 0 )
  {
    if ( v3 == (uint32_t *)v18 )
      goto LABEL_40;
    if ( v18[8] != 0 )
      v18[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    v19 = (void *)a2[48];
  }
  v67 = v19;
  v22 = opNew(0xCu);
  if ( v22 != -8 )
    *(uint8_t *)(v22 + 8) = 1;
  sub_1901920(v22, v67);
  v62 = (char *)a2[50];
  v23 = opNew(0xCu);
  if ( v23 != -8 )
    *(uint8_t *)(v23 + 8) = 0;
  sub_1901920(v23, v62);
  g4_std_compat::ostream_write(a2 + 3, "{", 1);
  v18 = (uint8_t *)a2[48];
LABEL_40:
  if ( (a3 & 2) != 0 )
  {
    if ( v3 != (uint32_t *)v18 )
    {
      if ( v18[8] != 0 )
      {
        v18[8] = 0;
        v54 = a2 + 3;
      }
      else
      {
        v54 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      v93 = *(float *)(a1 + 24);
      g4_std_compat::ostream_write(v54, "\"", 1);
      g4_std_compat::ostream_write(v54, "doppler_factor", 14);
      g4_std_compat::ostream_write(v54, "\":", 2);
      g4_std::ostream::op_shl_double(v54, COERCE__INT64(v93));
      v55 = a2[48];
      if ( v3 != (uint32_t *)v55 )
      {
        if ( *(uint8_t *)(v55 + 8) != 0 )
          *(uint8_t *)(v55 + 8) = 0;
        else
          g4_std_compat::ostream_write(v54, ",", 1);
        v94 = *(float *)(a1 + 28);
        g4_std_compat::ostream_write(v54, "\"", 1);
        g4_std_compat::ostream_write(v54, "speed_of_sound", 14);
        g4_std_compat::ostream_write(v54, "\":", 2);
        g4_std::ostream::op_shl_double(v54, COERCE__INT64(v94));
      }
    }
    v96 = (char *)vox::DistanceModelToString(*(vox::Self **)(a1 + 32));
    v18 = (uint8_t *)a2[48];
    if ( v3 != (uint32_t *)v18 )
    {
      if ( v18[8] != 0 )
      {
        v18[8] = 0;
        v56 = a2 + 3;
      }
      else
      {
        v56 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v56, "\"", 1);
      g4_std_compat::ostream_write(v56, "distance_model", 14);
      g4_std_compat::ostream_write(v56, "\":\"", 3);
      if ( v96 != nullptr )
      {
        v57 = strlen(v96);
        g4_std_compat::ostream_write(v56, v96, v57);
      }
      else
      {
        sub_1911530((char *)v56 + *(uint32_t *)(a2[3] - 12), *(uint32_t *)((char *)v56 + *(uint32_t *)(a2[3] - 12) + 20) | 1);
      }
      g4_std_compat::ostream_write(v56, "\"", 1);
      v18 = (uint8_t *)a2[48];
    }
  }
  if ( (a3 & 4) != 0 )
  {
    if ( v3 == (uint32_t *)v18 )
      goto LABEL_45;
    if ( v18[8] != 0 )
      v18[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    sub_FFFBE0((int)(uintptr_t)(a2), "listener_position", (float *)(a1 + 132));
    v49 = a2[48];
    if ( v3 == (uint32_t *)v49 )
      goto LABEL_45;
    if ( *(uint8_t *)(v49 + 8) != 0 )
      *(uint8_t *)(v49 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    sub_FFFBE0((int)(uintptr_t)(a2), "listener_velocity", (float *)(a1 + 144));
    v50 = a2[48];
    if ( v3 == (uint32_t *)v50 )
      goto LABEL_45;
    if ( *(uint8_t *)(v50 + 8) != 0 )
    {
      *(uint8_t *)(v50 + 8) = 0;
      v51 = a2 + 3;
    }
    else
    {
      v51 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    v97 = *(float *)(a1 + 176);
    v95 = *(float *)(a1 + 172);
    v92 = *(float *)(a1 + 168);
    g4_std_compat::ostream_write(v51, "\"", 1);
    g4_std_compat::ostream_write(v51, "listener_up", 11);
    g4_std_compat::ostream_write(v51, &off_1B6645C, 3);
    v71 = (void *)g4_std::ostream::op_shl_double(v51, COERCE__INT64(v92));
    g4_std_compat::ostream_write(v71, ",", 1);
    v72 = (void *)g4_std::ostream::op_shl_double(v71, COERCE__INT64(v95));
    g4_std_compat::ostream_write(v72, ",", 1);
    v52 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v72, COERCE__INT64(v97)));
    g4_std_compat::ostream_write(v52, "]", 1);
    v53 = a2[48];
    if ( v3 == (uint32_t *)v53 )
      goto LABEL_45;
    if ( *(uint8_t *)(v53 + 8) != 0 )
      *(uint8_t *)(v53 + 8) = 0;
    else
      g4_std_compat::ostream_write(v51, ",", 1);
    sub_FFFBE0((int)(uintptr_t)(a2), "listener_lookat", (float *)(a1 + 156));
    v18 = (uint8_t *)a2[48];
  }
  if ( v3 != (uint32_t *)v18 && v74 != (uint32_t *)a2[50] )
  {
    v68 = v18;
    sub_1901940(v18);
    opDelete(v68);
    v24 = (void *)a2[50];
    sub_1901940(v24);
    opDelete(v24);
    g4_std_compat::ostream_write(a2 + 3, "}", 1);
  }
LABEL_45:
  if ( *(uint32_t *)(a1 + 36) != 0 && (a3 & 8) != 0 )
  {
    v25 = a2[48];
    if ( v3 != (uint32_t *)v25 )
    {
      if ( *(uint8_t *)(v25 + 8) != 0 )
      {
        *(uint8_t *)(v25 + 8) = 0;
        v26 = a2 + 3;
      }
      else
      {
        v26 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v26, "\"", 1);
      g4_std_compat::ostream_write(v26, "enhanced_3d", 11);
      g4_std_compat::ostream_write(v26, "\":", 2);
    }
    v27 = a2[50];
    if ( v74 != (uint32_t *)v27 && *(uint8_t *)(v27 + 8) != 0 )
    {
      v28 = a2[48];
      if ( v3 == (uint32_t *)v28 )
        goto LABEL_14;
      if ( *(uint8_t *)(v28 + 8) != 0 )
        *(uint8_t *)(v28 + 8) = 0;
      else
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    v63 = (char *)a2[48];
    v29 = opNew(0xCu);
    if ( v29 != -8 )
      *(uint8_t *)(v29 + 8) = 1;
    sub_1901920(v29, v63);
    v64 = (char *)a2[50];
    v30 = opNew(0xCu);
    if ( v30 != -8 )
      *(uint8_t *)(v30 + 8) = 0;
    sub_1901920(v30, v64);
    g4_std_compat::ostream_write(a2 + 3, "{", 1);
    v31 = a2[48];
    if ( v3 != (uint32_t *)v31 )
    {
      if ( *(uint8_t *)(v31 + 8) != 0 )
        *(uint8_t *)(v31 + 8) = 0;
      else
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      v75 = *(float *)(a1 + 60);
      g4_std_compat::ostream_write(a2 + 3, "\"", 1);
      g4_std_compat::ostream_write(a2 + 3, "stereo_panning_power", 20);
      g4_std_compat::ostream_write(a2 + 3, "\":", 2);
      g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v75));
      v32 = a2[48];
      if ( v3 != (uint32_t *)v32 )
      {
        if ( *(uint8_t *)(v32 + 8) != 0 )
          *(uint8_t *)(v32 + 8) = 0;
        else
          g4_std_compat::ostream_write(a2 + 3, ",", 1);
        v76 = *(float *)(a1 + 64);
        g4_std_compat::ostream_write(a2 + 3, "\"", 1);
        g4_std_compat::ostream_write(a2 + 3, "stereo_max_delay_front", 22);
        g4_std_compat::ostream_write(a2 + 3, "\":", 2);
        g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v76));
        v33 = a2[48];
        if ( v3 != (uint32_t *)v33 )
        {
          if ( *(uint8_t *)(v33 + 8) != 0 )
            *(uint8_t *)(v33 + 8) = 0;
          else
            g4_std_compat::ostream_write(a2 + 3, ",", 1);
          v77 = *(float *)(a1 + 68);
          g4_std_compat::ostream_write(a2 + 3, "\"", 1);
          g4_std_compat::ostream_write(a2 + 3, "stereo_max_delay_back", 21);
          g4_std_compat::ostream_write(a2 + 3, "\":", 2);
          g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v77));
          v34 = a2[48];
          if ( v3 != (uint32_t *)v34 )
          {
            if ( *(uint8_t *)(v34 + 8) != 0 )
              *(uint8_t *)(v34 + 8) = 0;
            else
              g4_std_compat::ostream_write(a2 + 3, ",", 1);
            v78 = *(float *)(a1 + 72);
            g4_std_compat::ostream_write(a2 + 3, "\"", 1);
            g4_std_compat::ostream_write(a2 + 3, "notch_depth", 11);
            g4_std_compat::ostream_write(a2 + 3, "\":", 2);
            g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v78));
            v35 = a2[48];
            if ( v3 != (uint32_t *)v35 )
            {
              if ( *(uint8_t *)(v35 + 8) != 0 )
                *(uint8_t *)(v35 + 8) = 0;
              else
                g4_std_compat::ostream_write(a2 + 3, ",", 1);
              v79 = *(float *)(a1 + 76);
              g4_std_compat::ostream_write(a2 + 3, "\"", 1);
              g4_std_compat::ostream_write(a2 + 3, "notch_depth_side", 16);
              g4_std_compat::ostream_write(a2 + 3, "\":", 2);
              g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v79));
              v36 = a2[48];
              if ( v3 != (uint32_t *)v36 )
              {
                if ( *(uint8_t *)(v36 + 8) != 0 )
                  *(uint8_t *)(v36 + 8) = 0;
                else
                  g4_std_compat::ostream_write(a2 + 3, ",", 1);
                v80 = *(float *)(a1 + 80);
                g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                g4_std_compat::ostream_write(a2 + 3, "notch_depth_back", 16);
                g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v80));
                v37 = a2[48];
                if ( v3 != (uint32_t *)v37 )
                {
                  if ( *(uint8_t *)(v37 + 8) != 0 )
                    *(uint8_t *)(v37 + 8) = 0;
                  else
                    g4_std_compat::ostream_write(a2 + 3, ",", 1);
                  v81 = *(float *)(a1 + 84);
                  g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                  g4_std_compat::ostream_write(a2 + 3, "notch_depth_distance", 20);
                  g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                  g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v81));
                  v38 = a2[48];
                  if ( v3 != (uint32_t *)v38 )
                  {
                    if ( *(uint8_t *)(v38 + 8) != 0 )
                      *(uint8_t *)(v38 + 8) = 0;
                    else
                      g4_std_compat::ostream_write(a2 + 3, ",", 1);
                    v82 = *(float *)(a1 + 88);
                    g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                    g4_std_compat::ostream_write(a2 + 3, "notch_width", 11);
                    g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                    g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v82));
                    v39 = a2[48];
                    if ( v3 != (uint32_t *)v39 )
                    {
                      if ( *(uint8_t *)(v39 + 8) != 0 )
                        *(uint8_t *)(v39 + 8) = 0;
                      else
                        g4_std_compat::ostream_write(a2 + 3, ",", 1);
                      v83 = *(float *)(a1 + 92);
                      g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                      g4_std_compat::ostream_write(a2 + 3, "notch_width_side", 16);
                      g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                      g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v83));
                      v40 = a2[48];
                      if ( v3 != (uint32_t *)v40 )
                      {
                        if ( *(uint8_t *)(v40 + 8) != 0 )
                          *(uint8_t *)(v40 + 8) = 0;
                        else
                          g4_std_compat::ostream_write(a2 + 3, ",", 1);
                        v84 = *(float *)(a1 + 96);
                        g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                        g4_std_compat::ostream_write(a2 + 3, "notch_width_back", 16);
                        g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                        g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v84));
                        v41 = a2[48];
                        if ( v3 != (uint32_t *)v41 )
                        {
                          if ( *(uint8_t *)(v41 + 8) != 0 )
                            *(uint8_t *)(v41 + 8) = 0;
                          else
                            g4_std_compat::ostream_write(a2 + 3, ",", 1);
                          v85 = *(float *)(a1 + 100);
                          g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                          g4_std_compat::ostream_write(a2 + 3, "notch_width_distance", 20);
                          g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                          g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v85));
                          v42 = a2[48];
                          if ( v3 != (uint32_t *)v42 )
                          {
                            if ( *(uint8_t *)(v42 + 8) != 0 )
                              *(uint8_t *)(v42 + 8) = 0;
                            else
                              g4_std_compat::ostream_write(a2 + 3, ",", 1);
                            v86 = *(float *)(a1 + 104);
                            g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                            g4_std_compat::ostream_write(a2 + 3, "distance_width_minimum", 22);
                            g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                            g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v86));
                            v43 = a2[48];
                            if ( v3 != (uint32_t *)v43 )
                            {
                              if ( *(uint8_t *)(v43 + 8) != 0 )
                                *(uint8_t *)(v43 + 8) = 0;
                              else
                                g4_std_compat::ostream_write(a2 + 3, ",", 1);
                              v87 = *(float *)(a1 + 108);
                              g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                              g4_std_compat::ostream_write(a2 + 3, "distance_width_maximum", 22);
                              g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                              g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v87));
                              v44 = a2[48];
                              if ( v3 != (uint32_t *)v44 )
                              {
                                if ( *(uint8_t *)(v44 + 8) != 0 )
                                  *(uint8_t *)(v44 + 8) = 0;
                                else
                                  g4_std_compat::ostream_write(a2 + 3, ",", 1);
                                v88 = *(float *)(a1 + 112);
                                g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                                g4_std_compat::ostream_write(a2 + 3, "distance_width_curve", 20);
                                g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                                g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v88));
                                v45 = a2[48];
                                if ( v3 != (uint32_t *)v45 )
                                {
                                  if ( *(uint8_t *)(v45 + 8) != 0 )
                                    *(uint8_t *)(v45 + 8) = 0;
                                  else
                                    g4_std_compat::ostream_write(a2 + 3, ",", 1);
                                  v89 = *(float *)(a1 + 116);
                                  g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                                  g4_std_compat::ostream_write(a2 + 3, "distance_width_side", 19);
                                  g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                                  g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v89));
                                  v46 = a2[48];
                                  if ( v3 != (uint32_t *)v46 )
                                  {
                                    if ( *(uint8_t *)(v46 + 8) != 0 )
                                      *(uint8_t *)(v46 + 8) = 0;
                                    else
                                      g4_std_compat::ostream_write(a2 + 3, ",", 1);
                                    v90 = *(float *)(a1 + 120);
                                    g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                                    g4_std_compat::ostream_write(a2 + 3, "distance_width_back", 19);
                                    g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                                    g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v90));
                                    v47 = a2[48];
                                    if ( v3 != (uint32_t *)v47 )
                                    {
                                      if ( *(uint8_t *)(v47 + 8) != 0 )
                                        *(uint8_t *)(v47 + 8) = 0;
                                      else
                                        g4_std_compat::ostream_write(a2 + 3, ",", 1);
                                      v91 = *(float *)(a1 + 124);
                                      g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                                      g4_std_compat::ostream_write(a2 + 3, "distance_frequency", 18);
                                      g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                                      g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v91));
                                      v48 = a2[48];
                                      if ( v3 != (uint32_t *)v48 )
                                      {
                                        if ( *(uint8_t *)(v48 + 8) != 0 )
                                          *(uint8_t *)(v48 + 8) = 0;
                                        else
                                          g4_std_compat::ostream_write(a2 + 3, ",", 1);
                                        v73 = *(float *)(a1 + 128);
                                        g4_std_compat::ostream_write(a2 + 3, "\"", 1);
                                        g4_std_compat::ostream_write(a2 + 3, "rolloff_factor", 14);
                                        g4_std_compat::ostream_write(a2 + 3, "\":", 2);
                                        g4_std::ostream::op_shl_double(a2 + 3, COERCE__INT64(v73));
                                        if ( v3 != (uint32_t *)a2[48] && v74 != (uint32_t *)a2[50] )
                                        {
                                          v69 = (void *)a2[48];
                                          sub_1901940(v69);
                                          opDelete(v69);
                                          v70 = (void *)a2[50];
                                          sub_1901940(v70);
                                          opDelete(v70);
                                          g4_std_compat::ostream_write(a2 + 3, "}", 1);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_14:
  if ( (a3 & 0x10) != 0 )
  {
    Instance = vox::MiniBusManager::GetInstance();
    if ( Instance != nullptr )
    {
      v16 = a2[48];
      if ( v3 != (uint32_t *)v16 )
      {
        if ( *(uint8_t *)(v16 + 8) != 0 )
        {
          *(uint8_t *)(v16 + 8) = 0;
          v17 = a2 + 3;
        }
        else
        {
          v65 = (char *)Instance;
          v17 = a2 + 3;
          g4_std_compat::ostream_write(a2 + 3, ",", 1);
          Instance = (vox::MiniBusManager::Self *)v65;
        }
        v61 = (char *)Instance;
        g4_std_compat::ostream_write(v17, "\"", 1);
        g4_std_compat::ostream_write(v17, "buses", 5);
        g4_std_compat::ostream_write(v17, "\":", 2);
        Instance = (vox::MiniBusManager::Self *)v61;
      }
      vox::MiniBusManager::Serialize((int)(uintptr_t)(Instance), (int)(uintptr_t)(a2));
    }
  }
  v11 = (uint32_t *)a2[48];
  if ( v3 != v11 && v74 != (uint32_t *)a2[50] )
  {
    sub_1901940(a2[48]);
    opDelete(v11);
    v12 = (void *)a2[50];
    sub_1901940(v12);
    opDelete(v12);
    g4_std_compat::ostream_write(a2 + 3, "}", 1);
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 4));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DriverCallbackInterface::CreateDriverSource  (binary VA: 0x1006470)
// Original: vox::DriverCallbackInterface::CreateDriverSource
// ----------------------------------------------------------------------------
vox::DriverCallbackSourceInterface::Self * vox::DriverCallbackInterface::CreateDriverSource(vox::DriverCallbackInterface::Self *self)
{
  vox::DriverCallbackSourceInterface::Self *v1;
  vox::VoxThread::Self *v3;
  vox::DriverCallbackSourceInterface::Self *v4;
  vox::DriverCallbackSourceInterface::Self *v5;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v1 = nullptr;
  if ( *((uint8_t *)self + 8) != 0 )
  {
    v4 = (vox::DriverCallbackSourceInterface::Self *)VoxAllocInternal(
                                                 0x270u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_driver_callback_template.cpp"),
                                                 (int)(uintptr_t)("CreateDriverSource"),
                                                 3573);
    vox::DriverCallbackSourceInterface::Construct(v4, *((uint32_t *)self + 3));
    v1 = v4;
    if ( v4 != nullptr )
      ++*((uint32_t *)self + 3);
  }
  v5 = v1;
  sub_BA06B0();
  return v5;
}


