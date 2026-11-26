#include "Core/Utils/DecompTypes.h"
#include "vox_DataObj.h"

// ----------------------------------------------------------------------------
// Function: vox::DataObj::RegisterEmitter  (binary VA: 0x10246d0)
// Original: vox::DataObj::RegisterEmitter
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DataObj::RegisterEmitter(pthread_mutex_t **self, int64_t a2)
{
  int v2;

  vox::Mutex::Lock(self + 5);
  v2 = VoxAllocInternal(0x10u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  if ( v2 != -8 )
    *(uint64_t *)(v2 + 8) = a2;
  sub_1901920(v2, self + 15);
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::UnregisterEmitter  (binary VA: 0x1024780)
// Original: vox::DataObj::UnregisterEmitter
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DataObj::UnregisterEmitter(pthread_mutex_t **self, int64_t a2)
{
  pthread_mutex_t **v2;
  pthread_mutex_t **v4;

  v4 = self + 5;
  vox::Mutex::Lock(self + 5);
  v2 = (pthread_mutex_t **)*(self + 15);
  if ( v2 == self + 15 )
    return vox::Mutex::Unlock(v4);
  while ( *((uint64_t *)v2 + 1) != a2 )
  {
    v2 = (pthread_mutex_t **)*v2;
    if ( self + 15 == v2 )
      return vox::Mutex::Unlock(v4);
  }
  sub_1901940(v2);
  VoxFreeInternal(v2);
  return vox::Mutex::Unlock(v4);
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::Update  (binary VA: 0x1024820)
// Original: vox::DataObj::Update
// ----------------------------------------------------------------------------
int vox::DataObj::Update(vox::DataObj::Self *self)
{
  int result;
  pthread_t CurThreadId;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  void (***v11)(uint32_t);
  uint32_t *v12;
  void (***v13)(uint32_t);
  int v14;
  int v15;
  signed int v16;
  int v17;
  void (***v18)(uint32_t);
  int v19;
  uint32_t *v20;
  int v21;
  int *v22;
  void *v23;
  int v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef void *_g4_t_v36;
  typedef void *_g4_t_v37;
  typedef void *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v26)) > _g4_s1 ? (32u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v27)) > _g4_s2 ? (32u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v28)) > _g4_s3 ? (32u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v29)) > _g4_s4 ? (32u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v30)) > _g4_s5 ? (32u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v32)) > _g4_s7 ? (40u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v33)) > _g4_s8 ? (40u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v34)) > _g4_s9 ? (40u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v35)) > _g4_s10 ? (40u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v36)) > _g4_s11 ? (44u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v37)) > _g4_s12 ? (44u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v38)) > _g4_s13 ? (48u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v39)) > _g4_s14 ? (56u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v40)) > _g4_s15 ? (60u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v41)) > _g4_s16 ? (68u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v42)) > _g4_s17 ? (72u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v43)) > _g4_s18 ? (76u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (77u + sizeof(_g4_t_v44)) > _g4_s19 ? (77u + sizeof(_g4_t_v44)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 77u);

  result = 0;
  if ( *((uint32_t *)self + 20) != 0 )
  {
    CurThreadId = vox::VoxThread::GetCurThreadId();
    sub_BA06A0();
    vox::Mutex::Lock((pthread_mutex_t **)self + 5);
    v3 = *((uint32_t *)self + 20);
    if ( v3 != 2 )
    {
LABEL_3:
      v26 = v3;
      vox::Mutex::Unlock((pthread_mutex_t **)self + 5);
      sub_BA06B0();
      return v26;
    }
    v4 = *((uint32_t *)self + 21);
    switch ( v4 )
    {
      case 0:
        v5 = (*(int (**)(uint32_t, pthread_t))(**((uint32_t **)self + 13) + 20))(
               *((uint32_t *)self + 13),
               CurThreadId);
        v32 = v5;
        if ( v5 != 0 )
        {
          v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 14) + 16))(*((uint32_t *)self + 14), v5);
          if ( v6 != nullptr )
          {
            *((uint32_t *)self + 9) = v6[1];
            *((uint32_t *)self + 10) = v6[2];
            *((uint32_t *)self + 11) = v6[3];
            *((uint32_t *)self + 12) = v6[4];
            (*(void (**)(uint32_t, uint32_t *))(**((uint32_t **)self + 14) + 20))(*((uint32_t *)self + 14), v6);
          }
          (*(void (**)(uint32_t, size_t))(**((uint32_t **)self + 13) + 24))(*((uint32_t *)self + 13), v32);
        }
        if ( *((int *)self + 9) <= 0 )
          goto LABEL_11;
LABEL_13:
        *((uint32_t *)self + 20) = 0;
        v3 = 0;
        goto LABEL_3;
      case 1:
        v14 = *((uint32_t *)self + 13);
        if ( v14 == 0 )
          goto LABEL_11;
        if ( *((uint32_t *)self + 14) == 0 )
          goto LABEL_11;
        v15 = (*(int (**)(uint32_t, pthread_t))(*(uint32_t *)v14 + 20))(*((uint32_t *)self + 13), CurThreadId);
        if ( v15 == 0 )
          goto LABEL_11;
        v30 = v15;
        v16 = (*(int (**)(uint32_t))(**((uint32_t **)self + 13) + 16))(*((uint32_t *)self + 13));
        v34 = v16;
        if ( v16 <= 0 )
          goto LABEL_11;
        v37 = (void *)VoxAllocInternal(
                        v16,
                        0,
                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                        (int)(uintptr_t)("Update"),
                        4697);
        if ( v37 == nullptr )
          goto LABEL_11;
        v39 = G4_VCALL<int>(v30, 28, v37, v34);
        (*(void (**)(uint32_t, int))(**((uint32_t **)self + 13) + 24))(*((uint32_t *)self + 13), v30);
        if ( v34 != v39 )
        {
          VoxFreeInternal(v37);
          goto LABEL_11;
        }
        v41 = v37;
        v43 = 0;
        v42 = v34;
        v44 = 1;
        v31 = VoxAllocInternal(0x10u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"), (int)(uintptr_t)("Update"), 4722);
        vox::StreamMemoryBuffer::Construct(v31, (int)(uintptr_t)(&v41));
        v17 = v31;
        if ( v31 == 0 )
          goto LABEL_11;
        v18 = *((void (****)(uint32_t))self + 13);
        if ( v18 != nullptr )
        {
          (**v18)(*((uint32_t *)self + 13));
          VoxFreeInternal(*((void **)self + 13));
          v17 = v31;
        }
        *((uint32_t *)self + 13) = v17;
        v19 = G4_VCALL<int>(v17, 20);
        v35 = v19;
        if ( v19 == 0 )
          goto LABEL_11;
        v20 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 14) + 16))(*((uint32_t *)self + 14), v19);
        if ( v20 != nullptr )
        {
          *((uint32_t *)self + 9) = v20[1];
          *((uint32_t *)self + 10) = v20[2];
          *((uint32_t *)self + 11) = v20[3];
          *((uint32_t *)self + 12) = v20[4];
          v21 = **((uint32_t **)self + 14);
          v25 = *((uint32_t *)self + 14);
          if ( *((int *)self + 9) > 0 )
          {
            (*(void (**)(size_t, uint32_t *))(v21 + 20))(v25, v20);
            (*(void (**)(uint32_t, size_t))(**((uint32_t **)self + 13) + 24))(*((uint32_t *)self + 13), v35);
            *((uint32_t *)self + 20) = 0;
            v3 = 0;
            goto LABEL_3;
          }
          (*(void (**)(size_t, uint32_t *))(v21 + 20))(v25, v20);
        }
        v22 = *((int **)self + 13);
        v23 = (void *)v35;
        v24 = *v22;
        break;
      case 2:
        v7 = *((uint32_t *)self + 13);
        if ( v7 == 0
          || *((uint32_t *)self + 14) == 0
          || (v8 = (*(int (**)(uint32_t, pthread_t))(*(uint32_t *)v7 + 20))(*((uint32_t *)self + 13), CurThreadId),
              v36 = (void *)v8,
              v8 == 0) )
        {
LABEL_11:
          *((uint32_t *)self + 20) = -1;
          v3 = -1;
          goto LABEL_3;
        }
        v9 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 14) + 16))(*((uint32_t *)self + 14), v8);
        if ( v9 != nullptr )
        {
          *((uint32_t *)self + 9) = v9[1];
          *((uint32_t *)self + 10) = v9[2];
          *((uint32_t *)self + 11) = v9[3];
          *((uint32_t *)self + 12) = v9[4];
          v33 = v9[4] * v9[1] * ((int)v9[3] >> 3);
          if ( v33 <= 0 )
          {
            v27 = v9;
            (*(void (**)(uint32_t, void *))(**((uint32_t **)self + 13) + 24))(*((uint32_t *)self + 13), v36);
          }
          else
          {
            v27 = v9;
            v38 = (void *)VoxAllocInternal(
                            v33,
                            0,
                            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                            (int)(uintptr_t)("Update"),
                            4804);
            if ( v38 != nullptr )
            {
              v40 = G4_VCALL<int>(v27, 16, v38, v33);
              (*(void (**)(uint32_t, void *))(**((uint32_t **)self + 13) + 24))(*((uint32_t *)self + 13), v36);
              (*(void (**)(uint32_t, uint32_t *))(**((uint32_t **)self + 14) + 20))(*((uint32_t *)self + 14), v27);
              if ( v40 <= 0 )
              {
                VoxFreeInternal(v38);
                *((uint32_t *)self + 20) = -1;
                v3 = -1;
                goto LABEL_3;
              }
              v42 = v33;
              v43 = 0;
              v41 = v38;
              v44 = 1;
              v28 = VoxAllocInternal(
                      0x10u,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                      (int)(uintptr_t)("Update"),
                      4832);
              vox::StreamMemoryBuffer::Construct(v28, (int)(uintptr_t)(&v41));
              v10 = v28;
              if ( v28 != 0 )
              {
                v11 = *((void (****)(uint32_t))self + 13);
                if ( v11 != nullptr )
                {
                  (**v11)(*((uint32_t *)self + 13));
                  VoxFreeInternal(*((void **)self + 13));
                  v10 = v28;
                }
                *((uint32_t *)self + 13) = v10;
                v29 = (uint32_t *)VoxAllocInternal(
                                  0x14u,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                                  (int)(uintptr_t)("Update"),
                                  4843);
                vox::DecoderRaw::Construct(v29, (uint32_t *)self + 9);
                v12 = v29;
                if ( v29 != nullptr )
                {
                  v13 = *((void (****)(uint32_t))self + 14);
                  if ( v13 != nullptr )
                  {
                    (**v13)(*((uint32_t *)self + 14));
                    VoxFreeInternal(*((void **)self + 14));
                    v12 = v29;
                  }
                  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v12);
                  *((uint32_t *)self + 20) = 0;
                  v3 = 0;
                  goto LABEL_3;
                }
              }
              goto LABEL_11;
            }
            (*(void (**)(uint32_t, void *))(**((uint32_t **)self + 13) + 24))(*((uint32_t *)self + 13), v36);
          }
          (*(void (**)(uint32_t, uint32_t *))(**((uint32_t **)self + 14) + 20))(*((uint32_t *)self + 14), v27);
          goto LABEL_11;
        }
        v22 = *((int **)self + 13);
        v23 = v36;
        v24 = *v22;
        break;
      default:
        goto LABEL_13;
    }
    (*(void (**)(int *, void *))(v24 + 24))(v22, v23);
    goto LABEL_11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::NeedToDie  (binary VA: 0x1024e00)
// Original: vox::DataObj::NeedToDie
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DataObj::NeedToDie(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 77) = 1;
  vox::Mutex::Unlock(self + 5);
  vox::Mutex::Lock(self + 22);
  *(self + 20) = (pthread_mutex_t *)(&dword_0 + 3);
  return vox::Mutex::Unlock(self + 22);
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::ShouldDie  (binary VA: 0x1024e70)
// Original: vox::DataObj::ShouldDie
// ----------------------------------------------------------------------------
int vox::DataObj::ShouldDie(pthread_mutex_t **self)
{
  vox::DataObj::Self *v1;
  int v2;

  vox::Mutex::Lock(self + 5);
  v1 = (vox::DataObj::Self *)*(self + 15);
  if ( self + 15 == (pthread_mutex_t **)v1 )
  {
    v1 = (vox::DataObj::Self *)*(self + 3);
    v2 = 1;
    if ( v1 != nullptr )
    {
      v2 = 1;
      if ( *((uint8_t *)self + 77) == 0 )
      {
LABEL_4:
        LOBYTE(v1) = (int *)((char *)&G4_MUTEX_LOCK((*(self + 20))) + 1) == nullptr;
        v2 = (int)(uintptr_t)(v1);
      }
    }
  }
  else
  {
    do
      v1 = *(vox::DataObj::Self **)v1;
    while ( self + 15 != (pthread_mutex_t **)v1 );
    v2 = 1;
    if ( *((uint8_t *)self + 77) == 0 )
      goto LABEL_4;
  }
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::GetGroup  (binary VA: 0x1024f00)
// Original: vox::DataObj::GetGroup
// ----------------------------------------------------------------------------
int vox::DataObj::GetGroup(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 6));
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::IsChild  (binary VA: 0x1024f50)
// Original: vox::DataObj::IsChild
// ----------------------------------------------------------------------------
int vox::DataObj::IsChild(long double a1, vox::DataObj::Self *self, unsigned int a3)
{
  int IsChild;
  vox::GroupManager::Self *v4;

  IsChild = 0;
  vox::Mutex::Lock((pthread_mutex_t **)self + 5);
  v4 = *((vox::GroupManager::Self **)vox::VoxEngineInternal::GetVoxEngineInternal(a1) + 54);
  if ( v4 != nullptr )
    IsChild = vox::GroupManager::IsChild(v4, *((uint32_t *)self + 6), a3);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 5);
  return IsChild;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::IsReady  (binary VA: 0x1024fd0)
// Original: vox::DataObj::IsReady
// ----------------------------------------------------------------------------
int vox::DataObj::IsReady(pthread_mutex_t **self)
{
  int v1;
  int v2;

  vox::Mutex::Lock(self + 22);
  v1 = (int)(uintptr_t)(*(self + 20));
  LOBYTE(v1) = v1 == 0;
  v2 = v1;
  vox::Mutex::Unlock(self + 22);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::GetDuration  (binary VA: 0x1025020)
// Original: vox::DataObj::GetDuration
// ----------------------------------------------------------------------------
long double vox::DataObj::GetDuration(pthread_mutex_t **self)
{
  float v1; // xmm0_4
  float v3;

  v1 = 0.0;
  if ( (uint8_t)vox::DataObj::IsReady(self) != 0 )
  {
    vox::Mutex::Lock(self + 5);
    v3 = (float)((float)((float)((unsigned int)(uintptr_t)(*(self + 12)) >> 16) * 65536.0) + (float)(uint16_t)(uintptr_t)*(self + 12))
       / (float)(int)(uintptr_t)(*(self + 10));
    vox::Mutex::Unlock(self + 5);
    return v3;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::SetUserData  (binary VA: 0x10250b0)
// Original: vox::DataObj::SetUserData
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DataObj::SetUserData(int a1, int a2)
{
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 20));
  *(uint32_t *)(a1 + 68) = *(uint32_t *)a2;
  *(uint8_t *)(a1 + 72) = *(uint8_t *)(a2 + 4);
  return vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::GetUserData  (binary VA: 0x1025110)
// Original: vox::DataObj::GetUserData
// ----------------------------------------------------------------------------
vox::DataObj::Self * vox::DataObj::GetUserData(vox::DataObj::Self *self, int a2)
{
  *(uint32_t *)self = -1;
  *((uint8_t *)self + 4) = 0;
  vox::Mutex::Lock((pthread_mutex_t **)(a2 + 20));
  *(uint32_t *)self = *(uint32_t *)(a2 + 68);
  *((uint8_t *)self + 4) = *(uint8_t *)(a2 + 72);
  vox::Mutex::Unlock((pthread_mutex_t **)(a2 + 20));
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::PrintDebug  (binary VA: 0x1025180)
// Original: vox::DataObj::PrintDebug
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::DataObj::PrintDebug(pthread_mutex_t **self)
{
  vox::DataObj::GetDuration(self);
  vox::Mutex::Lock(self + 5);
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::Destroy  (binary VA: 0x1038050)
// Original: vox::DataObj::~DataObj
// ----------------------------------------------------------------------------
void vox::DataObj::Destroy(pthread_mutex_t **self)
{
  vox::DataObj::Self **v1;
  vox::DataObj::Self *v2;

  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208D940);
  vox::Mutex::Destroy(self + 22);
  v1 = (vox::DataObj::Self **)*(self + 15);
  if ( self + 15 != (pthread_mutex_t **)v1 )
  {
    while ( 1 )
    {
      v2 = *v1;
      VoxFreeInternal(v1);
      if ( self + 15 == (pthread_mutex_t **)v2 )
        break;
      v1 = (vox::DataObj::Self **)v2;
    }
  }
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208D8C8);
  vox::Mutex::Destroy(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::DataObj::Destroy_ea10380c0  (binary VA: 0x10380c0)
// Original: vox::DataObj::~DataObj
// ----------------------------------------------------------------------------
void vox::DataObj::Destroy_ea10380c0(pthread_mutex_t **self)
{
  vox::DataObj::Self **v1;
  vox::DataObj::Self *v2;

  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208D940);
  vox::Mutex::Destroy(self + 22);
  v1 = (vox::DataObj::Self **)*(self + 15);
  if ( v1 != (vox::DataObj::Self **)(self + 15) )
  {
    while ( 1 )
    {
      v2 = *v1;
      VoxFreeInternal(v1);
      if ( v2 == (vox::DataObj::Self *)(self + 15) )
        break;
      v1 = (vox::DataObj::Self **)v2;
    }
  }
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208D8C8);
  vox::Mutex::Destroy(self + 5);
  opDelete(self);
}


