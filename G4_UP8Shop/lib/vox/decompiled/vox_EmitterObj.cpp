#include "Core/Utils/DecompTypes.h"
#include "vox_EmitterObj.h"

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Destroy  (binary VA: 0x10215e0)
// Original: vox::EmitterObj::~EmitterObj
// ----------------------------------------------------------------------------
void vox::EmitterObj::Destroy(vox::EmitterObj::Self *self)
{
  int v1;
  vox::EmitterObj::Self **v2;
  vox::EmitterObj::Self *v3;
  vox::EmitterObj::Self *v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8E0);
  v1 = *((uint32_t *)self + 106);
  if ( (uint32_t *)(v1 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  v2 = *((vox::EmitterObj::Self ***)self + 104);
  if ( (vox::EmitterObj::Self **)((char *)self + 416) != v2 )
  {
    while ( 1 )
    {
      v3 = v2[2];
      v4 = *v2;
      if ( (uint32_t *)((char *)v3 - 12) != (uint32_t *)(g4_empty_string_rep)
        && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((char *)v3 - 12);
      }
      VoxFreeInternal(v2);
      if ( (vox::EmitterObj::Self *)((char *)self + 416) == v4 )
        break;
      v2 = (vox::EmitterObj::Self **)v4;
    }
  }
  if ( *((uint32_t *)self + 81) != 0 )
    VoxFreeInternal(*((void **)self + 81));
  v5 = *((uint32_t *)self + 59);
  if ( (uint32_t *)(v5 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v5 - 12));
  }
  *((uint32_t *)self + 53) = ((uint32_t)(uintptr_t)&off_208D968);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8C8);
  vox::Mutex::Destroy((pthread_mutex_t **)self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Destroy_ea1021710  (binary VA: 0x1021710)
// Original: vox::EmitterObj::~EmitterObj
// ----------------------------------------------------------------------------
void vox::EmitterObj::Destroy_ea1021710(vox::EmitterObj::Self *self)
{
  vox::EmitterObj::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetMustInitDriverSource  (binary VA: 0x1028500)
// Original: vox::EmitterObj::SetMustInitDriverSource
// ----------------------------------------------------------------------------
vox::EmitterObj::Self * vox::EmitterObj::SetMustInitDriverSource(vox::EmitterObj::Self *self)
{
  *((uint8_t *)self + 209) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::CleanUp  (binary VA: 0x1028510)
// Original: vox::EmitterObj::CleanUp
// ----------------------------------------------------------------------------
void vox::EmitterObj::CleanUp(vox::EmitterObj::Self *self)
{
  vox::EmitterObj::Self *v1;
  int v2;
  char *v3;
  vox::EmitterObj::Self **v4;
  vox::EmitterObj::Self *v5;
  vox::EmitterObj::Self *v6;
  int v7;
  int i;
  pthread_t CurThreadId;

  v1 = self;
  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v2 = *((uint32_t *)self + 89);
  if ( v2 != 0
    && (*(uint8_t (**)(uint32_t, pthread_t))(*(uint32_t *)v2 + 56))(*((uint32_t *)self + 89), CurThreadId) == 0 )
  {
    v7 = *((uint32_t *)self + 85);
    if ( v7 > 0 )
    {
      for ( i = 0; i < v7; ++i )
      {
        if ( *(uint32_t *)(*((uint32_t *)self + 81) + 4 * i) != 0 )
        {
          VoxFreeInternal(*(void **)(*((uint32_t *)self + 81) + 4 * i));
          v7 = *((uint32_t *)self + 85);
        }
      }
    }
  }
  if ( *((uint32_t *)self + 79) != 0 )
    VoxFreeInternal(*((void **)self + 79));
  if ( *((uint32_t *)self + 80) != 0 )
    VoxFreeInternal(*((void **)self + 80));
  v3 = (char *)self + 416;
  v4 = *((vox::EmitterObj::Self ***)self + 104);
  if ( (vox::EmitterObj::Self **)((char *)self + 416) != v4 )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v6 = *v4;
      if ( (uint32_t *)((char *)v5 - 12) != (uint32_t *)(g4_empty_string_rep)
        && __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((char *)v5 - 12);
      }
      VoxFreeInternal(v4);
      if ( (vox::EmitterObj::Self *)((char *)self + 416) == v6 )
        break;
      v4 = (vox::EmitterObj::Self **)v6;
    }
    v1 = self;
    v3 = (char *)self + 416;
  }
  *((uint32_t *)v1 + 104) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)v1 + 105) = (uint32_t)(uintptr_t)(v3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::ForceStateChanged  (binary VA: 0x10288c0)
// Original: vox::EmitterObj::ForceStateChanged
// ----------------------------------------------------------------------------
vox::EmitterObj::Self * vox::EmitterObj::ForceStateChanged(vox::EmitterObj::Self *self, bool a2)
{
  *((uint8_t *)self + 200) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::ProcessNativeData  (binary VA: 0x10288e0)
// Original: vox::EmitterObj::ProcessNativeData
// ----------------------------------------------------------------------------
void vox::EmitterObj::ProcessNativeData(vox::EmitterObj::Self *self, float a2)
{
  vox::EmitterObj::Self *v2;
  vox::VoxNativeSubDecoder::Self **v3;
  uint32_t *v4;
  vox::EmitterObj::Self *v5;
  char *v6;
  char v7;
  char *v8;
  uint32_t *v9;
  char *v10;
  int v11;
  int v12;
  int *v13;
  uint32_t *v14;
  float v15; // xmm0_4
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  char *v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  int v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef void *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v45)) > _g4_s2 ? (12u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v46)) > _g4_s3 ? (12u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v47)) > _g4_s4 ? (12u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v48)) > _g4_s5 ? (16u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v49)) > _g4_s6 ? (16u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v50)) > _g4_s7 ? (16u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v51)) > _g4_s8 ? (20u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v52)) > _g4_s9 ? (24u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v53)) > _g4_s10 ? (24u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v54)) > _g4_s11 ? (24u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v55)) > _g4_s12 ? (28u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v56)) > _g4_s13 ? (32u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v57)) > _g4_s14 ? (44u + sizeof(_g4_t_v57)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);

  v2 = self;
  v3 = *((vox::VoxNativeSubDecoder::Self ***)self + 89);
  if ( v3 != nullptr )
  {
    if ( (uint8_t)vox::DecoderNativeCursor::IsInError(*((vox::VoxNativeSubDecoder::Self ***)self + 89)) != 0 )
    {
      v28 = *((char **)self + 104);
      v53 = (char *)self + 416;
      if ( v28 != (char *)self + 416 )
      {
        while ( 1 )
        {
          v29 = *((uint32_t *)v28 + 2);
          v30 = *(char **)v28;
          if ( (uint32_t *)(v29 - 12) != (uint32_t *)(g4_empty_string_rep)
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal((void *)(v29 - 12));
          }
          VoxFreeInternal(v28);
          if ( v30 == v53 )
            break;
          v28 = v30;
        }
        v2 = self;
      }
      v31 = *((int **)v2 + 106);
      *((uint32_t *)v2 + 104) = (uint32_t)(uintptr_t)(v53);
      *((uint32_t *)v2 + 105) = (uint32_t)(uintptr_t)(v53);
      if ( *(v31 - 1) > 0 )
      {
        v32 = VoxAllocInternal(0xDu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        *(uint32_t *)(v32 + 4) = 0;
        *(uint32_t *)(v32 + 8) = 0;
        v33 = *((uint32_t *)v2 + 106);
        if ( (uint32_t *)(v33 - 12) != (uint32_t *)(g4_empty_string_rep)
          && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
        {
          v49 = v32;
          VoxFreeInternal((void *)(v33 - 12));
          v32 = v49;
        }
        v31 = (int *)(v32 + 12);
        *((uint32_t *)v2 + 106) = (uint32_t)(uintptr_t)(v31);
      }
      if ( v31 - 3 != (int *)(g4_empty_string_rep) )
      {
        *(v31 - 1) = 0;
        *(v31 - 3) = 0;
        *(uint8_t *)v31 = 0;
      }
      goto LABEL_43;
    }
    if ( *(uint32_t *)(*((uint32_t *)self + 106) - 12) == 0 )
    {
      v4 = *((uint32_t **)self + 104);
      if ( (uint32_t *)((char *)self + 416) != v4 )
      {
        v5 = *((vox::EmitterObj::Self **)self + 104);
        do
          v5 = *(vox::EmitterObj::Self **)v5;
        while ( (vox::EmitterObj::Self *)((char *)self + 416) != v5 );
        v6 = (char *)v4[2];
        if ( *((int *)v6 - 1) < 0 )
        {
          v39 = *((uint32_t *)v6 - 3);
          v54 = *((uint32_t *)v6 - 2);
          if ( v39 > 0x3FFFFFFC )
            sub_1900180("basic_string::_S_create");
          if ( v39 > v54 && v39 < 2 * v54 )
            v39 = 2 * v54;
          if ( v39 + 29 > 0x1000 && v54 < v39 )
          {
            v40 = v39 + 4096 - (((uint16_t)v39 + 29) & 0xFFF);
            v39 = 1073741820;
            if ( v40 <= 0x3FFFFFFC )
              v39 = v40;
          }
          v47 = v6;
          v48 = v39;
          v41 = VoxAllocInternal(
                  v39 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v41 + 8) = 0;
          *(uint32_t *)(v41 + 4) = v48;
          v52 = (char *)v41;
          v43 = 0;
          v51 = (void *)(v41 + 12);
          v42 = *((uint32_t *)v47 - 3);
          if ( v42 != 0 )
          {
            if ( v42 == 1 )
              *(uint8_t *)(v41 + 12) = *v47;
            else
              memcpy(v51, v47, *((uint32_t *)v47 - 3));
            v43 = *((uint32_t *)v47 - 3);
          }
          if ( v52 != (char *)g4_empty_string_rep )
          {
            *((uint32_t *)v52 + 2) = 0;
            *(uint32_t *)v52 = v43;
            v52[v43 + 12] = 0;
          }
          v6 = (char *)v51;
        }
        else
        {
          v52 = v6 - 12;
          if ( v6 - 12 != (char *)g4_empty_string_rep )
            __sync_add_and_fetch((volatile int32_t *)v6 - 1, 1u);
        }
        v44 = v6;
        v7 = vox::DecoderNativeCursor::IsStateChangeValid(v3, v6);
        v8 = v44;
        if ( v7 != 0 )
        {
          vox::DecoderNativeCursor::SetInteractiveMusicState(v3, v44);
          *((uint8_t *)self + 412) = 1;
          v8 = v44;
        }
        v9 = *((uint32_t **)self + 104);
        v45 = v8;
        sub_1901940(v9);
        v10 = v45;
        v11 = v9[2];
        if ( (uint32_t *)(v11 - 12) != (uint32_t *)(g4_empty_string_rep)
          && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          VoxFreeInternal((void *)(v11 - 12));
          v10 = v45;
        }
        v46 = v10;
        VoxFreeInternal(v9);
        if ( v52 != (char *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)v46 - 1, 0xFFFFFFFF) <= 0 )
        {
          VoxFreeInternal(v52);
        }
      }
      goto LABEL_14;
    }
    vox::DecoderNativeCursor::SetInteractiveMusicState(v3, *((char **)self + 106));
    v13 = *((int **)self + 106);
    if ( v13 > (int *)&unk_1B15112 || (char *)v13 + *(v13 - 3) < (char *)&unk_1B15112 )
    {
      if ( *(v13 - 1) <= 0 )
        goto LABEL_59;
    }
    else if ( *(v13 - 1) <= 0 )
    {
      if ( v13 - 3 == (int *)(g4_empty_string_rep) )
        goto LABEL_14;
      goto LABEL_60;
    }
    v34 = VoxAllocInternal(0xDu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v34 + 4) = 0;
    *(uint32_t *)(v34 + 8) = 0;
    v35 = *((uint32_t *)self + 106);
    if ( (uint32_t *)(v35 - 12) != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      v50 = v34;
      VoxFreeInternal((void *)(v35 - 12));
      v34 = v50;
    }
    v13 = (int *)(v34 + 12);
    *((uint32_t *)self + 106) = (uint32_t)(uintptr_t)(v13);
LABEL_59:
    if ( v13 - 3 == (int *)(g4_empty_string_rep) )
    {
LABEL_14:
      if ( *((uint8_t *)self + 412) == 0 )
        goto LABEL_15;
      v22 = *((uint32_t *)self + 89);
      v57 = 0;
      v56 = 0;
      v23 = G4_VCALL<int>(v22, 36);
      v24 = *((uint32_t *)self + 87);
      if ( v23 <= v24 )
        v24 = v23;
      (*(void (**)(uint32_t, int, int *, int *))(**((uint32_t **)self + 88) + 80))(
        *((uint32_t *)self + 88),
        v23 - v24,
        &v56,
        &v57);
      v25 = v57;
      if ( v57 <= 0 )
      {
        if ( v24 > 0 )
        {
          (*(void (**)(uint32_t, int))(**((uint32_t **)self + 89) + 40))(*((uint32_t *)self + 89), v24);
          *((uint32_t *)self + 87) -= v24;
        }
        *((uint8_t *)self + 412) = 0;
LABEL_15:
        if ( *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)) == 0 )
          goto LABEL_31;
        if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 40))(*((uint32_t *)self + 88)) != 0
          || *((uint32_t *)self + 86) <= *((uint32_t *)self + 87)
          || (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 24))(*((uint32_t *)self + 89)) == 0 )
        {
          if ( *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)) == 0 )
            goto LABEL_31;
          if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 40))(*((uint32_t *)self + 88)) != 0 )
          {
            if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 24))(*((uint32_t *)self + 89)) != 0 )
            {
              v36 = *((uint32_t *)self + 86);
              v18 = *((uint32_t *)self + 87);
              if ( v36 > v18 )
              {
                v18 = *((uint32_t *)self + 87)
                    + (*(int (**)(uint32_t, int, int))(**((uint32_t **)self + 89) + 16))(
                        *((uint32_t *)self + 89),
                        *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)) + v18,
                        v36 - v18);
                *((uint32_t *)self + 87) = v18;
              }
            }
            else
            {
              v18 = *((uint32_t *)self + 87);
            }
            if ( v18 > 0 )
            {
              (*(void (**)(uint32_t, uint32_t, int))(**((uint32_t **)self + 88) + 44))(
                *((uint32_t *)self + 88),
                *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)),
                v18);
              v19 = *((uint32_t *)self + 84);
              *((uint32_t *)self + 87) = 0;
              v20 = (v19 + 1) % *((uint32_t *)self + 85);
              v21 = *((uint32_t *)self + 81);
              *((uint32_t *)self + 84) = v20;
              v12 = *(uint32_t *)(v21 + 4 * v20);
LABEL_20:
              if ( v12 != 0 )
                return;
LABEL_31:
              *((uint32_t *)self + 49) = -1;
              return;
            }
          }
        }
        else
        {
          v14 = *((uint32_t **)self + 89);
          v15 = (float)(v14[1] * ((int)v14[3] >> 3) * v14[2]) * a2;
          v55 = *((uint32_t *)self + 87);
          v16 = *((uint32_t *)self + 86) - v55;
          if ( (int)v15 <= v16 )
            v16 = (int)v15;
          v17 = v16 - v16 % (v14[1] * ((int)v14[3] >> 3));
          if ( v17 > 0 )
            *((uint32_t *)self + 87) += G4_VCALL<int>(v14, 16, v55 + *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)), v17);
        }
        v12 = *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84));
        goto LABEL_20;
      }
      v26 = *((uint32_t *)self + 84);
      if ( v26 < v56 )
        v27 = *((uint32_t *)self + 85) + v26 - v56;
      else
        v27 = v26 - v56;
      *((uint32_t *)self + 84) = v27;
      (*(void (**)(uint32_t, int))(**((uint32_t **)self + 89) + 40))(*((uint32_t *)self + 89), v24 + v25);
      if ( *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)) != 0
        && (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 40))(*((uint32_t *)self + 88)) != 0
        && (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 24))(*((uint32_t *)self + 89)) != 0 )
      {
        v37 = (*(int (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 89) + 16))(
                *((uint32_t *)self + 89),
                *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)),
                *((uint32_t *)self + 86));
        if ( v37 > 0 )
        {
          (*(void (**)(uint32_t, uint32_t, int))(**((uint32_t **)self + 88) + 44))(
            *((uint32_t *)self + 88),
            *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)),
            v37);
          v38 = *((uint32_t *)self + 84);
          *((uint32_t *)self + 87) = 0;
          *((uint32_t *)self + 84) = (v38 + 1) % *((uint32_t *)self + 85);
        }
      }
LABEL_43:
      *((uint8_t *)v2 + 412) = 0;
      return;
    }
LABEL_60:
    *(v13 - 1) = 0;
    *(v13 - 3) = 0;
    *(uint8_t *)v13 = 0;
    goto LABEL_14;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::ProcessNonNativeData  (binary VA: 0x1029190)
// Original: vox::EmitterObj::ProcessNonNativeData
// ----------------------------------------------------------------------------
int vox::EmitterObj::ProcessNonNativeData(vox::EmitterObj::Self *self, float a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;

  if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 56))(*((uint32_t *)self + 89)) == 0 )
  {
    result = *((uint32_t *)self + 81);
    if ( *(uint32_t *)(result + 4 * *((uint32_t *)self + 84)) == 0 )
      goto LABEL_15;
    if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 40))(*((uint32_t *)self + 88)) != 0
      || *((uint32_t *)self + 86) <= *((uint32_t *)self + 87)
      || (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 24))(*((uint32_t *)self + 89)) == 0 )
    {
      result = *((uint32_t *)self + 81);
      if ( *(uint32_t *)(result + 4 * *((uint32_t *)self + 84)) == 0 )
        goto LABEL_15;
      if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 40))(*((uint32_t *)self + 88)) != 0 )
      {
        if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 24))(*((uint32_t *)self + 89)) != 0 )
        {
          v4 = *((uint32_t *)self + 86);
          v5 = *((uint32_t *)self + 87);
          if ( v4 > v5 )
          {
            v5 = *((uint32_t *)self + 87)
               + (*(int (**)(uint32_t, int, int))(**((uint32_t **)self + 89) + 16))(
                   *((uint32_t *)self + 89),
                   *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)) + v5,
                   v4 - v5);
            *((uint32_t *)self + 87) = v5;
          }
        }
        else
        {
          v5 = *((uint32_t *)self + 87);
        }
        if ( v5 > 0 )
        {
          (*(void (**)(uint32_t, uint32_t, int))(**((uint32_t **)self + 88) + 44))(
            *((uint32_t *)self + 88),
            *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)),
            v5);
          v6 = *((uint32_t *)self + 84);
          *((uint32_t *)self + 87) = 0;
          v7 = (v6 + 1) % *((uint32_t *)self + 85);
          v8 = *((uint32_t *)self + 81);
          *((uint32_t *)self + 84) = v7;
          result = *(uint32_t *)(v8 + 4 * v7);
LABEL_8:
          if ( result != 0 )
            return result;
LABEL_15:
          *((uint32_t *)self + 49) = -1;
          return result;
        }
      }
    }
    else
    {
      v9 = *((uint32_t **)self + 89);
      v10 = *((uint32_t *)self + 87);
      v11 = (int)(float)((float)(v9[1] * ((int)v9[3] >> 3) * v9[2]) * a2);
      if ( v11 > *((uint32_t *)self + 86) - v10 )
        v11 = *((uint32_t *)self + 86) - v10;
      v12 = v11 - v11 % (v9[1] * ((int)v9[3] >> 3));
      if ( v12 > 0 )
        *((uint32_t *)self + 87) += G4_VCALL<int>(v9, 16, *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)) + v10, v12);
    }
    result = *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84));
    goto LABEL_8;
  }
  result = (*(int (**)(uint32_t))(**((uint32_t **)self + 88) + 40))(*((uint32_t *)self + 88));
  if ( (uint8_t)result != 0 )
  {
    result = (*(int (**)(uint32_t))(**((uint32_t **)self + 89) + 24))(*((uint32_t *)self + 89));
    if ( (uint8_t)result != 0 )
    {
      v3 = (uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84));
      if ( *v3 == 0 )
      {
        result = (*(int (**)(uint32_t))(**((uint32_t **)self + 89) + 56))(*((uint32_t *)self + 89));
        if ( (uint8_t)result == 0 )
          goto LABEL_15;
        v3 = (uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84));
      }
      result = (*(int (**)(uint32_t, uint32_t *, uint32_t))(**((uint32_t **)self + 89) + 20))(
                 *((uint32_t *)self + 89),
                 v3,
                 *((uint32_t *)self + 86));
      if ( result > 0 )
      {
        (*(void (**)(uint32_t, uint32_t, int))(**((uint32_t **)self + 88) + 44))(
          *((uint32_t *)self + 88),
          *(uint32_t *)(*((uint32_t *)self + 81) + 4 * *((uint32_t *)self + 84)),
          result);
        result = (*((uint32_t *)self + 84) + 1) / *((uint32_t *)self + 85);
        *((uint32_t *)self + 84) = (*((uint32_t *)self + 84) + 1) % *((uint32_t *)self + 85);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Update3D  (binary VA: 0x10294a0)
// Original: vox::EmitterObj::Update3D
// ----------------------------------------------------------------------------
void vox::EmitterObj::Update3D(vox::EmitterObj::Self *self)
{
  int v1;
  char *v2;
  bool v3;
  int v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  if ( *((uint8_t *)self + 304) != 0 )
  {
    if ( *((uint32_t *)self + 69) == -1 )
    {
      v4 = *((uint32_t *)self + 88);
      v5 = 1;
      G4_VCALL<void>(v4, 64, 0, &v5);
    }
    else
    {
      (*(void (**)(uint32_t, uint32_t, char *))(**((uint32_t **)self + 88) + 64))(
        *((uint32_t *)self + 88),
        0,
        (char *)self + 276);
    }
    *((uint8_t *)self + 304) = 0;
    *((uint8_t *)self + 311) = 1;
  }
  if ( *((uint8_t *)self + 305) != 0 )
  {
    (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
      *((uint32_t *)self + 88),
      1,
      (char *)self + 280);
    *((uint8_t *)self + 305) = 0;
  }
  if ( *((uint8_t *)self + 306) != 0 )
  {
    (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
      *((uint32_t *)self + 88),
      2,
      (char *)self + 284);
    v3 = *((uint8_t *)self + 307) == 0;
    *((uint8_t *)self + 306) = 0;
    if ( v3 )
    {
LABEL_9:
      if ( *((uint8_t *)self + 308) == 0 )
        goto LABEL_10;
      goto LABEL_23;
    }
  }
  else if ( *((uint8_t *)self + 307) == 0 )
  {
    goto LABEL_9;
  }
  (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
    *((uint32_t *)self + 88),
    3,
    (char *)self + 288);
  v3 = *((uint8_t *)self + 308) == 0;
  *((uint8_t *)self + 307) = 0;
  if ( v3 )
  {
LABEL_10:
    if ( *((uint8_t *)self + 309) == 0 )
      goto LABEL_11;
LABEL_24:
    (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
      *((uint32_t *)self + 88),
      5,
      (char *)self + 296);
    v3 = *((uint8_t *)self + 310) == 0;
    *((uint8_t *)self + 309) = 0;
    if ( v3 )
      goto LABEL_12;
    goto LABEL_25;
  }
LABEL_23:
  (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
    *((uint32_t *)self + 88),
    4,
    (char *)self + 292);
  v3 = *((uint8_t *)self + 309) == 0;
  *((uint8_t *)self + 308) = 0;
  if ( !v3 )
    goto LABEL_24;
LABEL_11:
  if ( *((uint8_t *)self + 310) != 0 )
  {
LABEL_25:
    (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
      *((uint32_t *)self + 88),
      6,
      (char *)self + 300);
    *((uint8_t *)self + 310) = 0;
  }
LABEL_12:
  if ( *((uint8_t *)self + 311) != 0 )
  {
    v1 = *((uint32_t *)self + 88);
    if ( *((uint32_t *)self + 69) == -1 )
    {
      memset(v6, 0, 12);
      v2 = (char *)v6;
    }
    else
    {
      v2 = (char *)self + 240;
    }
    G4_VCALL<void>(v1, 64, 7, v2);
    *((uint8_t *)self + 311) = 0;
  }
  if ( *((uint8_t *)self + 312) != 0 )
  {
    (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
      *((uint32_t *)self + 88),
      8,
      (char *)self + 264);
    *((uint8_t *)self + 312) = 0;
  }
  if ( *((uint8_t *)self + 313) != 0 )
  {
    (*(void (**)(uint32_t, int, char *))(**((uint32_t **)self + 88) + 64))(
      *((uint32_t *)self + 88),
      9,
      (char *)self + 252);
    *((uint8_t *)self + 313) = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::UpdateDSP  (binary VA: 0x10297d0)
// Original: vox::EmitterObj::UpdateDSP
// ----------------------------------------------------------------------------
void vox::EmitterObj::UpdateDSP(void **self, float a2)
{
  int v2;
  void *v3;
  int v4;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  if ( *(self + 80) != nullptr )
  {
    VoxFreeInternal(*(self + 79));
    v2 = (int)(uintptr_t)(*(self + 88));
    v3 = *(self + 80);
    *(self + 79) = v3;
    *(self + 80) = nullptr;
    if ( v2 == 0 )
      goto LABEL_6;
    G4_VCALL<void>(v2, 68, 0, v3);
  }
  v4 = (int)(uintptr_t)(*(self + 88));
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 72, LODWORD(a2));
LABEL_6:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Play  (binary VA: 0x10298a0)
// Original: vox::EmitterObj::Play
// ----------------------------------------------------------------------------
void vox::EmitterObj::Play(pthread_mutex_t **self, float a2)
{
  pthread_mutex_t *v2;
  int v3;
  long double v4; // fst7
  float v5; // xmm0_4
  float v6; // xmm0_4
  int v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13;

  vox::Mutex::Lock(self + 5);
  if ( *(self + 49) == (pthread_mutex_t *)((char *)&dword_0 + 2) )
  {
    v10 = *((float *)self + 23);
    v11 = *((float *)self + 24);
    if ( v11 <= v10 )
    {
      v12 = *((float *)self + 22);
    }
    else if ( v11 <= 0.0 )
    {
      v12 = *((float *)self + 21);
    }
    else
    {
      v12 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v10) / v11) + *((float *)self + 21);
    }
    *((float *)self + 21) = v12;
    *(self + 22) = (pthread_mutex_t *)1065353216;
    *(self + 23) = nullptr;
    *((float *)self + 24) = a2;
    *((uint8_t *)self + 100) = 0;
    *(self + 49) = (pthread_mutex_t *)(&dword_0 + 1);
  }
  else
  {
    v2 = *(self + 45);
    *(self + 21) = nullptr;
    *(self + 22) = (pthread_mutex_t *)1065353216;
    *(self + 23) = nullptr;
    *((float *)self + 24) = a2;
    *((uint8_t *)self + 100) = 0;
    *(self + 49) = (pthread_mutex_t *)(&dword_0 + 1);
    *((uint8_t *)self + 171) = 0;
    *(self + 46) = v2;
  }
  if ( *((uint8_t *)self + 108) != 0 )
  {
    v7 = lrand48();
    *(self + 18) = nullptr;
    v8 = *((float *)self + 29);
    v9 = *((float *)self + 28);
    *(self + 19) = nullptr;
    *((uint8_t *)self + 80) = 0;
    v13 = (float)((float)((float)((float)(v9 - v8) * 0.001f) * (float)(v7 % 1001)) + v8) * *((float *)self + 26);
    *((float *)self + 16) = v13;
    *((float *)self + 17) = v13;
  }
  vox::Mutex::Unlock(self + 5);
  if ( *((uint8_t *)self + 156) != 0 )
  {
    v3 = lrand48();
    v4 = pow(
           2.0,
           (float)((float)((float)((float)((float)(*((float *)self + 40) - *((float *)self + 41)) * 0.001f)
                                 * (float)(v3 % 1001))
                         + *((float *)self + 41))
                 * 0.00083333335f));
    *(self + 35) = nullptr;
    v5 = v4;
    v6 = v5 * *((float *)self + 38);
    *(self + 36) = nullptr;
    *((uint8_t *)self + 148) = 0;
    *((float *)self + 33) = v6;
    *((float *)self + 34) = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Stop  (binary VA: 0x1029b70)
// Original: vox::EmitterObj::Stop
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Stop(pthread_mutex_t **self, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4

  vox::Mutex::Lock(self + 5);
  if ( *(self + 48) == (pthread_mutex_t *)((char *)&dword_0 + 1) )
  {
    if ( *(self + 49) == (pthread_mutex_t *)((char *)&dword_0 + 3) )
    {
      v2 = *((float *)self + 24);
      v3 = *((float *)self + 23);
      if ( (float)(v2 - v3) > a2 )
      {
        if ( v2 <= v3 )
        {
          v8 = *((float *)self + 22);
        }
        else if ( v2 <= 0.0 )
        {
          v8 = *((float *)self + 21);
        }
        else
        {
          v8 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v3) / v2)
             + *((float *)self + 21);
        }
        *((float *)self + 21) = v8;
        *(self + 22) = nullptr;
        *(self + 23) = nullptr;
        *((float *)self + 24) = a2;
        *((uint8_t *)self + 100) = 0;
      }
    }
    else
    {
      v5 = *((float *)self + 23);
      *(self + 49) = (pthread_mutex_t *)(&dword_0 + 3);
      v6 = *((float *)self + 24);
      if ( v6 <= v5 )
      {
        v7 = *((float *)self + 22);
      }
      else if ( v6 <= 0.0 )
      {
        v7 = *((float *)self + 21);
      }
      else
      {
        v7 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v5) / v6) + *((float *)self + 21);
      }
      *((float *)self + 21) = v7;
      *(self + 22) = nullptr;
      *(self + 23) = nullptr;
      *((float *)self + 24) = a2;
      *((uint8_t *)self + 100) = 0;
    }
  }
  else
  {
    *(self + 49) = (pthread_mutex_t *)(&dword_0 + 3);
    *(self + 21) = nullptr;
    *(self + 22) = (pthread_mutex_t *)1065353216;
    *(self + 23) = nullptr;
    *(self + 24) = nullptr;
    *((uint8_t *)self + 100) = 1;
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Pause  (binary VA: 0x1029e60)
// Original: vox::EmitterObj::Pause
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Pause(pthread_mutex_t **self, float a2)
{
  int v2;
  bool v4;
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4

  vox::Mutex::Lock(self + 5);
  v2 = (int)(uintptr_t)(*(self + 49));
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    v5 = *((float *)self + 24);
    v6 = *((float *)self + 23);
    if ( (float)(v5 - v6) > a2 )
    {
      if ( v5 <= v6 )
      {
        v7 = *((float *)self + 22);
      }
      else if ( v5 <= 0.0 )
      {
        v7 = *((float *)self + 21);
      }
      else
      {
        v7 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v6) / v5) + *((float *)self + 21);
      }
      *((float *)self + 21) = v7;
      *(self + 22) = nullptr;
      *(self + 23) = nullptr;
      *((float *)self + 24) = a2;
      *((uint8_t *)self + 100) = 0;
    }
  }
  else if ( v2 == 1 )
  {
    v4 = *(self + 48) == (pthread_mutex_t *)((char *)&dword_0 + 1);
    *(self + 49) = (pthread_mutex_t *)(&dword_0 + 2);
    if ( v4 )
    {
      v8 = *((float *)self + 23);
      v9 = *((float *)self + 24);
      if ( v9 <= v8 )
      {
        v10 = *((float *)self + 22);
      }
      else if ( v9 <= 0.0 )
      {
        v10 = *((float *)self + 21);
      }
      else
      {
        v10 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v8) / v9) + *((float *)self + 21);
      }
      *((float *)self + 21) = v10;
      *(self + 22) = nullptr;
      *(self + 23) = nullptr;
      *((float *)self + 24) = a2;
      *((uint8_t *)self + 100) = 0;
    }
    else
    {
      *(self + 21) = nullptr;
      *(self + 22) = (pthread_mutex_t *)1065353216;
      *(self + 23) = nullptr;
      *(self + 24) = nullptr;
      *((uint8_t *)self + 100) = 1;
    }
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Resume  (binary VA: 0x102a120)
// Original: vox::EmitterObj::Resume
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Resume(pthread_mutex_t **self, float a2)
{
  int v2;
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4

  vox::Mutex::Lock(self + 5);
  v2 = (int)(uintptr_t)(*(self + 49));
  if ( v2 == 2 || *(self + 48) == (pthread_mutex_t *)((char *)&dword_0 + 2) && v2 != 3 )
  {
    v4 = *((float *)self + 23);
    *(self + 49) = (pthread_mutex_t *)(&dword_0 + 1);
    v5 = *((float *)self + 24);
    if ( v5 <= v4 )
    {
      v6 = *((float *)self + 22);
    }
    else if ( v5 <= 0.0 )
    {
      v6 = *((float *)self + 21);
    }
    else
    {
      v6 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v4) / v5) + *((float *)self + 21);
    }
    *((float *)self + 21) = v6;
    *(self + 22) = (pthread_mutex_t *)1065353216;
    *(self + 23) = nullptr;
    *((float *)self + 24) = a2;
    *((uint8_t *)self + 100) = 0;
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::RegisterStateChangedCallback  (binary VA: 0x102a2c0)
// Original: vox::EmitterObj::RegisterStateChangedCallback
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::RegisterStateChangedCallback(int a1, int a2, int a3)
{
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 20));
  *(uint32_t *)(a1 + 400) = a2;
  *(uint32_t *)(a1 + 404) = a3;
  return vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::UnregisterStateChangedCallback  (binary VA: 0x102a3a0)
// Original: vox::EmitterObj::UnregisterStateChangedCallback
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::UnregisterStateChangedCallback(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 5);
  *(self + 100) = nullptr;
  *(self + 101) = nullptr;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::NeedToSendStateChangedCallback  (binary VA: 0x102a470)
// Original: vox::EmitterObj::NeedToSendStateChangedCallback
// ----------------------------------------------------------------------------
int vox::EmitterObj::NeedToSendStateChangedCallback(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v6;

  v4 = 0;
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 20));
  if ( *(uint8_t *)(a1 + 200) != 0 )
  {
    v5 = *(uint32_t *)(a1 + 400);
    if ( v5 != 0 )
    {
      *(uint8_t *)(a1 + 200) = 0;
      *a2 = v5;
      *a3 = *(uint32_t *)(a1 + 404);
      v6 = *(uint32_t *)(a1 + 192);
      if ( v6 == 1 )
      {
        v4 = 1;
        *a4 = 1;
        goto LABEL_8;
      }
      if ( v6 <= 1 )
      {
        if ( v6 != 0 )
        {
LABEL_7:
          v4 = 1;
          *a4 = 0;
          goto LABEL_8;
        }
      }
      else
      {
        if ( v6 == 2 )
        {
          v4 = 1;
          *a4 = 2;
          goto LABEL_8;
        }
        if ( v6 != 3 )
          goto LABEL_7;
      }
      v4 = 1;
      *a4 = 4;
    }
  }
LABEL_8:
  vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 20));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetAutoKillAfterDone  (binary VA: 0x102a560)
// Original: vox::EmitterObj::SetAutoKillAfterDone
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetAutoKillAfterDone(pthread_mutex_t **self, bool a2)
{
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 365) = a2;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::NeedToDie  (binary VA: 0x102a640)
// Original: vox::EmitterObj::NeedToDie
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::NeedToDie(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 364) = 1;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetKillOnResume  (binary VA: 0x102a700)
// Original: vox::EmitterObj::GetKillOnResume
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetKillOnResume(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = *((uint8_t *)self + 224);
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetKillOnResume  (binary VA: 0x102a9d0)
// Original: vox::EmitterObj::SetKillOnResume
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetKillOnResume(pthread_mutex_t **self, bool a2)
{
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 224) = a2;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetFadeOnPlay  (binary VA: 0x102aab0)
// Original: vox::EmitterObj::GetFadeOnPlay
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetFadeOnPlay(pthread_mutex_t **self)
{
  float v2;

  vox::Mutex::Lock(self + 5);
  v2 = *((float *)self + 57);
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetFadeOnStop  (binary VA: 0x102abd0)
// Original: vox::EmitterObj::GetFadeOnStop
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetFadeOnStop(pthread_mutex_t **self)
{
  float v2;

  vox::Mutex::Lock(self + 5);
  v2 = *((float *)self + 58);
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetDefaultInteractiveMusicState  (binary VA: 0x102adb0)
// Original: vox::EmitterObj::GetDefaultInteractiveMusicState
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetDefaultInteractiveMusicState(vox::EmitterObj::Self *self)
{
  return *((uint32_t *)self + 59);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetGroup  (binary VA: 0x102adc0)
// Original: vox::EmitterObj::GetGroup
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetGroup(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 9));
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetGroup  (binary VA: 0x102ae80)
// Original: vox::EmitterObj::SetGroup
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetGroup(pthread_mutex_t **self, pthread_mutex_t *a2)
{
  vox::Mutex::Lock(self + 5);
  *(self + 9) = a2;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsMemberOfGroup  (binary VA: 0x102af60)
// Original: vox::EmitterObj::IsMemberOfGroup
// ----------------------------------------------------------------------------
int vox::EmitterObj::IsMemberOfGroup(long double a1, vox::EmitterObj::Self *self, unsigned int a3, bool a4)
{
  int IsChild;
  vox::GroupManager::Self *v6;

  IsChild = 1;
  vox::Mutex::Lock((pthread_mutex_t **)self + 5);
  if ( *((uint32_t *)self + 9) != a3 )
  {
    IsChild = 0;
    if ( a4 )
    {
      v6 = *((vox::GroupManager::Self **)vox::VoxEngineInternal::GetVoxEngineInternal(a1) + 54);
      if ( v6 != nullptr )
        IsChild = vox::GroupManager::IsChild(v6, *((uint32_t *)self + 9), a3);
    }
  }
  vox::Mutex::Unlock((pthread_mutex_t **)self + 5);
  return IsChild;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsChild  (binary VA: 0x102b090)
// Original: vox::EmitterObj::IsChild
// ----------------------------------------------------------------------------
int vox::EmitterObj::IsChild(long double a1, vox::EmitterObj::Self *self, unsigned int a3)
{
  int IsChild;
  vox::GroupManager::Self *v4;

  IsChild = 0;
  vox::Mutex::Lock((pthread_mutex_t **)self + 5);
  v4 = *((vox::GroupManager::Self **)vox::VoxEngineInternal::GetVoxEngineInternal(a1) + 54);
  if ( v4 != nullptr )
    IsChild = vox::GroupManager::IsChild(v4, *((uint32_t *)self + 9), a3);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 5);
  return IsChild;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetGain  (binary VA: 0x102ba70)
// Original: vox::EmitterObj::GetGain
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetGain(pthread_mutex_t **self)
{
  float v2;

  vox::Mutex::Lock(self + 5);
  v2 = *((float *)self + 14);
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetUid  (binary VA: 0x102bb30)
// Original: vox::EmitterObj::GetUid
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetUid(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 92));
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetGain  (binary VA: 0x102bbf0)
// Original: vox::EmitterObj::SetGain
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetGain(pthread_mutex_t **self, float a2, float a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4

  vox::Mutex::Lock(self + 5);
  v3 = *((float *)self + 18);
  *((float *)self + 26) = a2;
  v4 = *((float *)self + 19);
  if ( v4 <= v3 )
  {
    v5 = *((float *)self + 17);
  }
  else if ( v4 <= 0.0 )
  {
    v5 = *((float *)self + 16);
  }
  else
  {
    v5 = (float)((float)((float)(*((float *)self + 17) - *((float *)self + 16)) * v3) / v4) + *((float *)self + 16);
  }
  *((float *)self + 16) = v5;
  *((float *)self + 17) = a2;
  *(self + 18) = nullptr;
  *((float *)self + 19) = a3;
  *((uint8_t *)self + 80) = 0;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetGainModifier  (binary VA: 0x102bd50)
// Original: vox::EmitterObj::SetGainModifier
// ----------------------------------------------------------------------------
vox::EmitterObj::Self * vox::EmitterObj::SetGainModifier(vox::EmitterObj::Self *self, float a2)
{
  *((float *)self + 15) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetPitchModifier  (binary VA: 0x102bd60)
// Original: vox::EmitterObj::SetPitchModifier
// ----------------------------------------------------------------------------
vox::EmitterObj::Self * vox::EmitterObj::SetPitchModifier(vox::EmitterObj::Self *self, float a2)
{
  *((float *)self + 31) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetAttenuation  (binary VA: 0x102bd70)
// Original: vox::EmitterObj::GetAttenuation
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetAttenuation(long double a1, vox::EmitterObj::Self *self)
{
  pthread_mutex_t **VoxEngineInternal;
  float v3; // xmm3_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  typedef pthread_mutex_t **_g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18[4];
  typedef float _g4_t_v19[4];
  typedef float _g4_t_v20[3];
  typedef int _g4_t_v21[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v19)) > _g4_s3 ? (32u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v20)) > _g4_s4 ? (48u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v21)) > _g4_s5 ? (60u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);

  VoxEngineInternal = (pthread_mutex_t **)vox::VoxEngineInternal::GetVoxEngineInternal(a1);
  v3 = 0.0;
  v4 = 0.0;
  v5 = 0.0;
  if ( *((uint32_t *)self + 69) == 0 )
  {
    v16 = VoxEngineInternal;
    vox::VoxEngineInternal::Get3DListenerPosition(VoxEngineInternal, v18, v19, v20);
    v5 = v18[0];
    VoxEngineInternal = v16;
    v4 = v19[0];
    v3 = v20[0];
  }
  v6 = *((float *)self + 60) - v5;
  v7 = *((float *)self + 61) - v4;
  v8 = *((float *)self + 62);
  v18[0] = v6;
  v19[0] = v7;
  v20[0] = v8 - v3;
  v9 = sqrt((float)((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v20[0] * v20[0])));
  v17 = v9;
  vox::VoxEngineInternal::Get3DGeneralParameteri(VoxEngineInternal, 2, v21);
  if ( v21[0] == 2 )
  {
    v15 = *((float *)self + 71);
    v10 = 1.0;
    if ( v15 <= v9 && (float)(*((float *)self + 70) - v15) > 0.0 )
      return (float)((float)((float)((float)(fminf(v9, *((float *)self + 70)) - v15) * *((float *)self + 72))
                           / (float)(v15 - *((float *)self + 70)))
                   + 1.0);
  }
  else if ( v21[0] == 3 )
  {
    v13 = *((float *)self + 71);
    v10 = 1.0;
    if ( v13 <= v9 && v13 < 0.0 )
    {
      v14 = *((float *)self + 72);
      if ( v14 >= 0.0 )
        return (float)pow((float)(fminf(v9, *((float *)self + 70)) / v13), (float)-v14);
    }
  }
  else
  {
    v10 = 1.0;
    if ( v21[0] == 1 )
    {
      v12 = *((float *)self + 71);
      v10 = 1.0;
      if ( v12 <= v17 && v12 != 0.0 )
        return (float)((float)((float)((float)(fminf(v17, *((float *)self + 70)) - v12) * *((float *)self + 72)) + v12)
                     / v12);
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetPitch  (binary VA: 0x102bfc0)
// Original: vox::EmitterObj::GetPitch
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetPitch(pthread_mutex_t **self)
{
  float v2;

  vox::Mutex::Lock(self + 5);
  v2 = *((float *)self + 34);
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetPitch  (binary VA: 0x102c090)
// Original: vox::EmitterObj::SetPitch
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetPitch(pthread_mutex_t **self, float a2, float a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4

  vox::Mutex::Lock(self + 5);
  v3 = *((float *)self + 35);
  *((float *)self + 38) = a2;
  v4 = *((float *)self + 36);
  *((float *)self + 32) = a2;
  if ( v4 <= v3 )
  {
    v5 = *((float *)self + 34);
  }
  else if ( v4 <= 0.0 )
  {
    v5 = *((float *)self + 33);
  }
  else
  {
    v5 = (float)((float)((float)(*((float *)self + 34) - *((float *)self + 33)) * v3) / v4) + *((float *)self + 33);
  }
  *((float *)self + 33) = v5;
  *((float *)self + 34) = a2;
  *(self + 35) = nullptr;
  *((float *)self + 36) = a3;
  *((uint8_t *)self + 148) = 0;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetState  (binary VA: 0x102c220)
// Original: vox::EmitterObj::GetState
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetState(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 48));
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetState  (binary VA: 0x102c270)
// Original: vox::EmitterObj::SetState
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetState(pthread_mutex_t **self, pthread_mutex_t *a2)
{
  vox::Mutex::Lock(self + 5);
  *(self + 49) = a2;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetLoop  (binary VA: 0x102c2c0)
// Original: vox::EmitterObj::GetLoop
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetLoop(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = *((uint8_t *)self + 169);
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetLoop  (binary VA: 0x102c380)
// Original: vox::EmitterObj::SetLoop
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetLoop(pthread_mutex_t **self, bool a2)
{
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 169) = a2;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Reset  (binary VA: 0x102c460)
// Original: vox::EmitterObj::Reset
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Reset(pthread_mutex_t **self)
{
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 208) = 1;
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsReady  (binary VA: 0x102c4b0)
// Original: vox::EmitterObj::IsReady
// ----------------------------------------------------------------------------
int vox::EmitterObj::IsReady(vox::EmitterObj::Self *self)
{
  return *((uint8_t *)self + 24) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsPlaying  (binary VA: 0x102c530)
// Original: vox::EmitterObj::IsPlaying
// ----------------------------------------------------------------------------
int vox::EmitterObj::IsPlaying(pthread_mutex_t **self)
{
  int v1;
  pthread_mutex_t *v2;

  v1 = 1;
  v2 = vox::Mutex::Lock(self + 5);
  if ( *(self + 48) != (pthread_mutex_t *)((char *)&dword_0 + 1) )
  {
    LOBYTE(v2) = *(self + 49) == (pthread_mutex_t *)((char *)&dword_0 + 1);
    v1 = (int)(uintptr_t)(v2);
  }
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsDone  (binary VA: 0x102cb90)
// Original: vox::EmitterObj::_IsDone
// ----------------------------------------------------------------------------
bool vox::EmitterObj::IsDone(vox::EmitterObj::Self *self)
{
  int v1;
  bool result;

  v1 = *((uint32_t *)self + 48);
  if ( v1 == 3 )
    return *((uint32_t *)self + 49) == 3;
  result = false;
  if ( v1 == 0 )
    return *((uint32_t *)self + 49) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsDone  (binary VA: 0x102cbd0)
// Original: vox::EmitterObj::IsDone
// ----------------------------------------------------------------------------
bool vox::EmitterObj::IsDone(pthread_mutex_t **self)
{
  bool IsDone;

  vox::Mutex::Lock(self + 5);
  IsDone = vox::EmitterObj::IsDone((vox::EmitterObj::Self *)self);
  vox::Mutex::Unlock(self + 5);
  return IsDone;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::ShouldDie  (binary VA: 0x102cca0)
// Original: vox::EmitterObj::ShouldDie
// ----------------------------------------------------------------------------
int vox::EmitterObj::ShouldDie(pthread_mutex_t **self)
{
  int v1;
  int v2;

  vox::Mutex::Lock(self + 5);
  if ( !vox::EmitterObj::IsDone((vox::EmitterObj::Self *)self) || (v1 = (int)(uintptr_t)(*(self + 3)), v2 = 1, v1 != 0) )
  {
    v2 = 1;
    if ( *((uint8_t *)self + 364) == 0 )
    {
      LOBYTE(v1) = (int *)((char *)&G4_MUTEX_LOCK((*(self + 48))) + 1) == nullptr;
      v2 = v1;
    }
  }
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::IsAlive  (binary VA: 0x102cd20)
// Original: vox::EmitterObj::IsAlive
// ----------------------------------------------------------------------------
int vox::EmitterObj::IsAlive(pthread_mutex_t **self)
{
  return vox::EmitterObj::ShouldDie(self) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetStatus  (binary VA: 0x102cdc0)
// Original: vox::EmitterObj::GetStatus
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetStatus(pthread_mutex_t **self)
{
  int v1;
  int v2;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 48));
  if ( v1 == 1 )
  {
    v2 = 1;
    if ( *((uint8_t *)self + 100) == 0 )
    {
      LOWORD(v2) = 17;
      if ( *(self + 49) != (pthread_mutex_t *)((char *)&dword_0 + 1) )
        v2 = 33;
    }
  }
  else
  {
    v2 = 2;
    if ( v1 != 2 )
    {
      if ( v1 == 3 || (LOWORD(v2) = 0, v1 == 0) )
        v2 = 4;
    }
  }
  vox::Mutex::Unlock(self + 5);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetPauseCount  (binary VA: 0x102ced0)
// Original: vox::EmitterObj::GetPauseCount
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetPauseCount(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 51));
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetPlayCursor  (binary VA: 0x102cf90)
// Original: vox::EmitterObj::GetPlayCursor
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetPlayCursor(pthread_mutex_t **self)
{
  float v1; // xmm0_4

  vox::Mutex::Lock(self + 5);
  if ( *((uint8_t *)self + 176) != 0 )
  {
    v1 = *((float *)self + 43);
  }
  else
  {
    v1 = 0.0;
    if ( (int)(uintptr_t)(*(self + 8)) > 0 && (int)(uintptr_t)(*(self + 7)) > 0 )
      v1 = (float)((*(int (**)(uint32_t))(G4_MUTEX_LOCK((*(self + 88))) + 32))((uint32_t)(uintptr_t)(*(self + 88))) % (int)(uintptr_t)(*(self + 8)))
         / (float)(int)(uintptr_t)(*(self + 7));
  }
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetTotalPlayTime  (binary VA: 0x102d0b0)
// Original: vox::EmitterObj::GetTotalPlayTime
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetTotalPlayTime(pthread_mutex_t **self)
{
  float v1; // xmm0_4

  vox::Mutex::Lock(self + 5);
  if ( *((uint8_t *)self + 176) != 0 )
  {
    v1 = *((float *)self + 43);
  }
  else
  {
    v1 = 0.0;
    if ( (int)(uintptr_t)(*(self + 7)) > 0 )
      v1 = (float)(*(int (**)(uint32_t))(G4_MUTEX_LOCK((*(self + 88))) + 32))((uint32_t)(uintptr_t)(*(self + 88))) / (float)(int)(uintptr_t)(*(self + 7));
  }
  vox::Mutex::Unlock(self + 5);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetPlayCursor  (binary VA: 0x102d1c0)
// Original: vox::EmitterObj::_SetPlayCursor
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetPlayCursor(vox::EmitterObj::Self *self, float a2)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  *((uint8_t *)self + 176) = 1;
  *((float *)self + 43) = a2;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetPlayCursor  (binary VA: 0x102d230)
// Original: vox::EmitterObj::SetPlayCursor
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetPlayCursor(pthread_mutex_t **self, float a2)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 5);
  vox::EmitterObj::SetPlayCursor((vox::EmitterObj::Self *)self, a2);
  vox::Mutex::Unlock(self + 5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetRandomStartPositionMode  (binary VA: 0x102d330)
// Original: vox::EmitterObj::GetRandomStartPositionMode
// ----------------------------------------------------------------------------
int vox::EmitterObj::GetRandomStartPositionMode(pthread_mutex_t **self)
{
  int v1;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 5);
  v1 = *((uint8_t *)self + 170);
  vox::Mutex::Unlock(self + 5);
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetRandomStartPositionMode  (binary VA: 0x102d430)
// Original: vox::EmitterObj::SetRandomStartPositionMode
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetRandomStartPositionMode(pthread_mutex_t **self, bool a2)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 5);
  *((uint8_t *)self + 170) = a2;
  vox::Mutex::Unlock(self + 5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetPlaybackDelay  (binary VA: 0x102d540)
// Original: vox::EmitterObj::GetPlaybackDelay
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetPlaybackDelay(pthread_mutex_t **self)
{
  float v2;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 5);
  v2 = *((float *)self + 45);
  vox::Mutex::Unlock(self + 5);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetPlaybackDelay  (binary VA: 0x102d640)
// Original: vox::EmitterObj::SetPlaybackDelay
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetPlaybackDelay(pthread_mutex_t **self, float a2)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 5);
  *((float *)self + 45) = a2;
  vox::Mutex::Unlock(self + 5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::ResetInteractiveMusicState  (binary VA: 0x102d740)
// Original: vox::EmitterObj::_ResetInteractiveMusicState
// ----------------------------------------------------------------------------
void vox::EmitterObj::ResetInteractiveMusicState(vox::EmitterObj::Self *self)
{
  int v1;
  char *v2;
  char *v3;
  int v4;
  char *v5;
  int *v6;
  int v7;
  int v8;
  int v9;

  v1 = *((uint32_t *)self + 89);
  if ( v1 != 0 && (uint8_t)vox::DecoderNativeCursor::IsInError(*((vox::VoxNativeSubDecoder::Self ***)self + 89)) == 0 )
  {
    (*(void (**)(uint32_t))(**((uint32_t **)self + 88) + 24))(*((uint32_t *)self + 88));
    G4_VCALL<void>(v1, 32);
    v2 = (char *)self + 416;
    v3 = *((char **)self + 104);
    if ( (char *)self + 416 != v3 )
    {
      while ( 1 )
      {
        v4 = *((uint32_t *)v3 + 2);
        v5 = *(char **)v3;
        if ( (uint32_t *)(v4 - 12) != (uint32_t *)(g4_empty_string_rep)
          && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
        {
          VoxFreeInternal((void *)(v4 - 12));
        }
        VoxFreeInternal(v3);
        if ( v2 == v5 )
          break;
        v3 = v5;
      }
    }
    v6 = *((int **)self + 106);
    *((uint32_t *)self + 104) = (uint32_t)(uintptr_t)(v2);
    *((uint32_t *)self + 105) = (uint32_t)(uintptr_t)(v2);
    if ( *(v6 - 1) > 0 )
    {
      v7 = VoxAllocInternal(0xDu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v7 + 4) = 0;
      *(uint32_t *)(v7 + 8) = 0;
      v8 = *((uint32_t *)self + 106);
      if ( (uint32_t *)(v8 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        v9 = v7;
        VoxFreeInternal((void *)(v8 - 12));
        v7 = v9;
      }
      v6 = (int *)(v7 + 12);
      *((uint32_t *)self + 106) = (uint32_t)(uintptr_t)(v6);
    }
    if ( v6 - 3 != (int *)(uintptr_t)(g4_empty_string_rep) )
    {
      *(v6 - 1) = 0;
      *(v6 - 3) = 0;
      *(uint8_t *)v6 = 0;
    }
    *((uint8_t *)self + 412) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetRandomStartPosition  (binary VA: 0x102d8e0)
// Original: vox::EmitterObj::_GetRandomStartPosition
// ----------------------------------------------------------------------------
long double vox::EmitterObj::GetRandomStartPosition(vox::EmitterObj::Self *self)
{
  int v1;
  float v2; // xmm0_4
  unsigned int v3;
  int v4;
  int v5;

  v1 = *((uint32_t *)self + 90);
  v2 = 0.0;
  v3 = *(uint32_t *)(v1 + 48);
  v4 = *(uint32_t *)(v1 + 40);
  if ( v3 != 0 && v4 > 0 )
  {
    v5 = lrand48();
    return (float)((float)(int)(v5 * lrand48() % v3) / (float)v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SkipToPosition  (binary VA: 0x102d960)
// Original: vox::EmitterObj::_SkipToPosition
// ----------------------------------------------------------------------------
void vox::EmitterObj::SkipToPosition(vox::EmitterObj::Self *self)
{
  int v1;
  float v2; // xmm1_4
  float v3; // xmm0_4
  __m128 v4;
  __m128 v5;
  int v6;

  if ( *((uint8_t *)self + 176) != 0 )
  {
    if ( *((uint32_t *)self + 88) != 0 )
    {
      v1 = *((uint32_t *)self + 89);
      if ( v1 != 0 && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v1 + 28))(*((uint32_t *)self + 89)) != 0 )
      {
        v2 = *((float *)self + 43);
        if ( v2 < 0.0 )
        {
          *((uint32_t *)self + 43) = 0;
          v2 = 0.0;
        }
        v3 = (float)*(int *)(*((uint32_t *)self + 89) + 8) * v2;
g4_m128_raw(v4) = 0;
g4_m128_lane<float>(v4, 0) = v3;
        v5 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v4);
        v6 = _mm_cvtsi128_si32(
               _mm_xor_si128(
                 _mm_cvttps_epi32(_mm_sub_ps(v4, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v5))),
                 _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v5)), 0x1Fu)));
        (*(void (**)(uint32_t))(**((uint32_t **)self + 88) + 24))(*((uint32_t *)self + 88));
        (*(void (**)(uint32_t, int))(**((uint32_t **)self + 88) + 36))(
          *((uint32_t *)self + 88),
          v6 * *(uint32_t *)(*((uint32_t *)self + 89) + 4) * (*(int *)(*((uint32_t *)self + 89) + 12) >> 3));
        (*(void (**)(uint32_t, int))(**((uint32_t **)self + 89) + 44))(*((uint32_t *)self + 89), v6);
        if ( *((uint32_t *)self + 49) == 2 )
          *((uint32_t *)self + 49) = 3;
      }
    }
    *((uint8_t *)self + 176) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetUserData  (binary VA: 0x102daa0)
// Original: vox::EmitterObj::SetUserData
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::SetUserData(int a1, int a2)
{
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 20));
  *(uint32_t *)(a1 + 392) = *(uint32_t *)a2;
  *(uint8_t *)(a1 + 396) = *(uint8_t *)(a2 + 4);
  return vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::GetUserData  (binary VA: 0x102db80)
// Original: vox::EmitterObj::GetUserData
// ----------------------------------------------------------------------------
vox::EmitterObj::Self * vox::EmitterObj::GetUserData(vox::EmitterObj::Self *self, int a2)
{
  *(uint32_t *)self = -1;
  *((uint8_t *)self + 4) = 0;
  vox::Mutex::Lock((pthread_mutex_t **)(a2 + 20));
  *(uint32_t *)self = *(uint32_t *)(a2 + 392);
  *((uint8_t *)self + 4) = *(uint8_t *)(a2 + 396);
  vox::Mutex::Unlock((pthread_mutex_t **)(a2 + 20));
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Set3DParameteri  (binary VA: 0x102dc90)
// Original: vox::EmitterObj::Set3DParameteri
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Set3DParameteri(pthread_mutex_t **self, int a2, pthread_mutex_t *a3)
{
  vox::Mutex::Lock(self + 5);
  if ( a2 == 0 )
  {
    *((uint8_t *)self + 304) = 1;
    *(self + 69) = a3;
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Set3DParameterf  (binary VA: 0x102dd70)
// Original: vox::EmitterObj::Set3DParameterf
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Set3DParameterf(pthread_mutex_t **self, int a2, float a3)
{
  vox::Mutex::Lock(self + 5);
  switch ( a2 )
  {
    case 1:
      *((uint8_t *)self + 305) = 1;
      *((float *)self + 70) = a3;
      break;
    case 2:
      *((uint8_t *)self + 306) = 1;
      *((float *)self + 71) = a3;
      break;
    case 3:
      *((uint8_t *)self + 307) = 1;
      *((float *)self + 72) = a3;
      break;
    case 4:
      *((uint8_t *)self + 308) = 1;
      *((float *)self + 73) = a3;
      break;
    case 5:
      *((uint8_t *)self + 309) = 1;
      *((float *)self + 74) = a3;
      break;
    case 6:
      *((uint8_t *)self + 310) = 1;
      *((float *)self + 75) = a3;
      break;
    default:
      return vox::Mutex::Unlock(self + 5);
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Set3DParameter3f  (binary VA: 0x102e000)
// Original: vox::EmitterObj::Set3DParameter3f
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Set3DParameter3f(pthread_mutex_t **self, int a2, float a3, float a4, float a5)
{
  vox::Mutex::Lock(self + 5);
  switch ( a2 )
  {
    case 8:
      *((uint8_t *)self + 312) = 1;
      *((float *)self + 66) = a3;
      *((float *)self + 67) = a4;
      *((float *)self + 68) = a5;
      break;
    case 9:
      *((uint8_t *)self + 313) = 1;
      *((float *)self + 63) = a3;
      *((float *)self + 64) = a4;
      *((float *)self + 65) = a5;
      break;
    case 7:
      *((uint8_t *)self + 311) = 1;
      *((float *)self + 60) = a3;
      *((float *)self + 61) = a4;
      *((float *)self + 62) = a5;
      break;
    default:
      break;
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Set3DParameterfv  (binary VA: 0x102e2c0)
// Original: vox::EmitterObj::Set3DParameterfv
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Set3DParameterfv(int a1, int a2, uint32_t *a3)
{
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 20));
  switch ( a2 )
  {
    case 8:
      *(uint32_t *)(a1 + 264) = *a3;
      *(uint32_t *)(a1 + 268) = a3[1];
      *(uint32_t *)(a1 + 272) = a3[2];
      *(uint8_t *)(a1 + 312) = 1;
      break;
    case 9:
      *(uint32_t *)(a1 + 252) = *a3;
      *(uint32_t *)(a1 + 256) = a3[1];
      *(uint32_t *)(a1 + 260) = a3[2];
      *(uint8_t *)(a1 + 313) = 1;
      break;
    case 7:
      *(uint32_t *)(a1 + 240) = *a3;
      *(uint32_t *)(a1 + 244) = a3[1];
      *(uint32_t *)(a1 + 248) = a3[2];
      *(uint8_t *)(a1 + 311) = 1;
      break;
    default:
      break;
  }
  return vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetDefaultParameters  (binary VA: 0x102e3b0)
// Original: vox::EmitterObj::SetDefaultParameters
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetDefaultParameters(pthread_mutex_t **self)
{
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::EmitterObj::Set3DParameteri(self, 0, nullptr);
  vox::EmitterObj::Set3DParameterf(self, 1, 3.4028235e38f);
  vox::EmitterObj::Set3DParameterf(self, 2, 1.0);
  vox::EmitterObj::Set3DParameterf(self, 3, 1.0);
  vox::EmitterObj::Set3DParameterf(self, 4, 360.0);
  vox::EmitterObj::Set3DParameterf(self, 5, 360.0);
  vox::EmitterObj::Set3DParameterf(self, 6, 0.0);
  *(self + 60) = nullptr;
  *(self + 61) = nullptr;
  *(self + 62) = nullptr;
  vox::EmitterObj::Set3DParameterfv((int)(uintptr_t)(self), 7, self + 60);
  *(self + 66) = nullptr;
  *(self + 67) = nullptr;
  *(self + 68) = nullptr;
  vox::EmitterObj::Set3DParameterfv((int)(uintptr_t)(self), 8, self + 66);
  *(self + 63) = nullptr;
  *(self + 64) = nullptr;
  *(self + 65) = nullptr;
  vox::EmitterObj::Set3DParameterfv((int)(uintptr_t)(self), 9, self + 63);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Construct  (binary VA: 0x102e520)
// Original: vox::EmitterObj::EmitterObj
// ----------------------------------------------------------------------------
void vox::EmitterObj::Construct(vox::EmitterObj::Self *self, int64_t a2, int a3, int a4, vox::DriverSourceParam::Self *a5, vox::DriverSourceInterface::Self *a6, vox::DataObj::Self *a7)
{
  int i;
  uint32_t *v8;
  int v9;
  int v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8C8);
  *(uint64_t *)((char *)self + 4) = a2;
  *((uint32_t *)self + 3) = 0;
  vox::Mutex::Construct((vox::EmitterObj::Self *)((char *)self + 20));
  *((uint8_t *)self + 24) = 1;
  *((uint32_t *)self + 7) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8E0);
  *((uint32_t *)self + 10) = a3;
  *((uint32_t *)self + 11) = a4;
  *((uint32_t *)self + 9) = 0;
  *((uint8_t *)self + 48) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 1065353216;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint8_t *)self + 80) = 1;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 1065353216;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 100) = 1;
  *((uint32_t *)self + 26) = 1065353216;
  *((uint8_t *)self + 108) = 0;
  *((uint32_t *)self + 28) = 1065353216;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 1065353216;
  *((uint32_t *)self + 31) = 1065353216;
  *((uint32_t *)self + 32) = 1065353216;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint8_t *)self + 148) = 1;
  *((uint32_t *)self + 38) = 1065353216;
  *((uint8_t *)self + 156) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint8_t *)self + 168) = 0;
  *((uint8_t *)self + 169) = 0;
  *((uint8_t *)self + 170) = 0;
  *((uint8_t *)self + 171) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint8_t *)self + 176) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 1015491330;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint8_t *)self + 200) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint8_t *)self + 208) = 0;
  *((uint8_t *)self + 209) = 0;
  *((uint32_t *)self + 53) = ((uint32_t)(uintptr_t)&off_208D968);
  *((uint32_t *)self + 54) = *((uint32_t *)a5 + 1);
  *((uint32_t *)self + 55) = *((uint32_t *)a5 + 2);
  *((uint8_t *)self + 224) = 1;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 1028443341;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 59) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  vox::Vox3DEmitterParameters::Construct((vox::EmitterObj::Self *)((char *)self + 276));
  *((uint32_t *)self + 106) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)(a6);
  *((uint32_t *)self + 90) = (uint32_t)(uintptr_t)(a7);
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  *((uint32_t *)self + 83) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 89) = 0;
  *((uint8_t *)self + 364) = 0;
  *((uint8_t *)self + 365) = 0;
  *((uint32_t *)self + 92) = -1;
  *((uint32_t *)self + 93) = 0;
  *((uint32_t *)self + 94) = 1065353216;
  *((uint32_t *)self + 95) = 0;
  *((uint32_t *)self + 96) = 0;
  *((uint8_t *)self + 388) = 1;
  *((uint32_t *)self + 98) = -1;
  *((uint8_t *)self + 396) = 0;
  *((uint32_t *)self + 100) = 0;
  *((uint32_t *)self + 101) = 0;
  *((uint32_t *)self + 102) = -1;
  *((uint8_t *)self + 412) = 0;
  *((uint32_t *)self + 104) = (uint32_t)(uintptr_t)((char *)self + 416);
  *((uint32_t *)self + 105) = (uint32_t)(uintptr_t)((char *)self + 416);
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  for ( i = 0; i != 10; ++i )
    *((uint8_t *)self + i + 304) = 0;
  v8 = *((uint32_t **)self + 90);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  if ( v8 != nullptr )
  {
    v9 = v8[10];
    v10 = v8[9] * ((int)v8[11] >> 3);
    *((uint32_t *)self + 8) = v10 * v8[12];
    *((uint32_t *)self + 7) = v10 * v9;
  }
  vox::EmitterObj::SetDefaultParameters((pthread_mutex_t **)self);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Get3DParameteri  (binary VA: 0x102e920)
// Original: vox::EmitterObj::Get3DParameteri
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Get3DParameteri(pthread_mutex_t **self, int a2, int *a3)
{
  vox::Mutex::Lock(self + 5);
  if ( a2 == 0 )
    *a3 = (int)(uintptr_t)(*(self + 69));
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Get3DParameterf  (binary VA: 0x102f610)
// Original: vox::EmitterObj::Get3DParameterf
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Get3DParameterf(pthread_mutex_t **self, int a2, float *a3)
{
  vox::Mutex::Lock(self + 5);
  switch ( a2 )
  {
    case 1:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 70));
      break;
    case 2:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 71));
      break;
    case 3:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 72));
      break;
    case 4:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 73));
      break;
    case 5:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 74));
      break;
    case 6:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 75));
      break;
    default:
      return vox::Mutex::Unlock(self + 5);
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Get3DParameter3f  (binary VA: 0x102f870)
// Original: vox::EmitterObj::Get3DParameter3f
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Get3DParameter3f(pthread_mutex_t **self, int a2, float *a3, float *a4, float *a5)
{
  vox::Mutex::Lock(self + 5);
  switch ( a2 )
  {
    case 8:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 66));
      *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*(self + 67));
      *(uint32_t *)a5 = (uint32_t)(uintptr_t)(*(self + 68));
      break;
    case 9:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 63));
      *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*(self + 64));
      *(uint32_t *)a5 = (uint32_t)(uintptr_t)(*(self + 65));
      break;
    case 7:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 60));
      *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*(self + 61));
      *(uint32_t *)a5 = (uint32_t)(uintptr_t)(*(self + 62));
      break;
    default:
      break;
  }
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Get3DParameterfv  (binary VA: 0x102fb00)
// Original: vox::EmitterObj::Get3DParameterfv
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Get3DParameterfv(int a1, int a2, uint32_t *a3)
{
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 20));
  switch ( a2 )
  {
    case 8:
      *a3 = *(uint32_t *)(a1 + 264);
      a3[1] = *(uint32_t *)(a1 + 268);
      a3[2] = *(uint32_t *)(a1 + 272);
      break;
    case 9:
      *a3 = *(uint32_t *)(a1 + 252);
      a3[1] = *(uint32_t *)(a1 + 256);
      a3[2] = *(uint32_t *)(a1 + 260);
      break;
    case 7:
      *a3 = *(uint32_t *)(a1 + 240);
      a3[1] = *(uint32_t *)(a1 + 244);
      a3[2] = *(uint32_t *)(a1 + 248);
      break;
    default:
      break;
  }
  return vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetDSPParameter  (binary VA: 0x102fbd0)
// Original: vox::EmitterObj::SetDSPParameter
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetDSPParameter(vox::EmitterObj::Self *self, int a2, char *s)
{
  signed int v3;
  char *v4;
  size_t v5;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock((pthread_mutex_t **)self + 5);
  if ( a2 == 0 )
  {
    if ( s != nullptr )
    {
      v3 = strlen(s);
      if ( v3 <= 0 )
        goto LABEL_7;
      v5 = v3 + 1;
    }
    else
    {
      v5 = 7;
      s = "master";
    }
    VoxFreeInternal(*((void **)self + 80));
    v4 = (char *)VoxAllocInternal(
                   v5,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                   (int)(uintptr_t)("SetDSPParameter"),
                   7626);
    *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
      strcpy(v4, s);
  }
LABEL_7:
  vox::Mutex::Unlock((pthread_mutex_t **)self + 5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Parametrize  (binary VA: 0x102fd70)
// Original: vox::EmitterObj::Parametrize
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::Parametrize(vox::EmitterObj::Self *self, const vox::emitter::CreationSettings::Self *a2)
{
  uint8_t *src;
  unsigned int n;
  uint8_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  size_t v9;
  int v10;
  int v11;
  uint8_t *v12;
  pthread_mutex_t *result;
  size_t v14;
  size_t v15;
  size_t v16;
  unsigned int v17;
  int v18;

  *((uint8_t *)self + 108) = *((uint8_t *)a2 + 12);
  *((uint32_t *)self + 28) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 1);
  vox::EmitterObj::SetGain((pthread_mutex_t **)self, *(float *)a2, 0.0);
  *((uint8_t *)self + 156) = *((uint8_t *)a2 + 28);
  *((uint32_t *)self + 40) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 41) = *((uint32_t *)a2 + 5);
  vox::EmitterObj::SetPitch((pthread_mutex_t **)self, *((float *)a2 + 4), 0.0);
  vox::EmitterObj::SetLoop((pthread_mutex_t **)self, *((uint8_t *)a2 + 29));
  vox::EmitterObj::SetGroup((pthread_mutex_t **)self, *((pthread_mutex_t **)a2 + 9));
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 11);
  if ( *((uint8_t *)a2 + 48) != 0 )
    vox::EmitterObj::Set3DParameteri((pthread_mutex_t **)self, 0, (pthread_mutex_t *)(*((uint32_t *)a2 + 13) != 0));
  else
    vox::EmitterObj::Set3DParameteri((pthread_mutex_t **)self, 0, (pthread_mutex_t *)0xFFFFFFFF);
  vox::EmitterObj::Set3DParameterfv((int)(uintptr_t)(self), 7, (uint32_t *)a2 + 20);
  vox::EmitterObj::Set3DParameterfv((int)(uintptr_t)(self), 8, (uint32_t *)a2 + 23);
  vox::EmitterObj::Set3DParameterfv((int)(uintptr_t)(self), 9, (uint32_t *)a2 + 26);
  vox::EmitterObj::Set3DParameterf((pthread_mutex_t **)self, 2, *((float *)a2 + 15));
  vox::EmitterObj::Set3DParameterf((pthread_mutex_t **)self, 1, *((float *)a2 + 14));
  vox::EmitterObj::Set3DParameterf((pthread_mutex_t **)self, 3, *((float *)a2 + 16));
  vox::EmitterObj::Set3DParameterf((pthread_mutex_t **)self, 4, *((float *)a2 + 17));
  vox::EmitterObj::Set3DParameterf((pthread_mutex_t **)self, 5, *((float *)a2 + 18));
  vox::EmitterObj::Set3DParameterf((pthread_mutex_t **)self, 6, *((float *)a2 + 19));
  vox::EmitterObj::SetDSPParameter(self, 0, *((char **)a2 + 29));
  vox::EmitterObj::SetKillOnResume((pthread_mutex_t **)self, *((uint8_t *)a2 + 120));
  *((uint32_t *)self + 57) = *((uint32_t *)a2 + 31);
  *((uint32_t *)self + 58) = *((uint32_t *)a2 + 32);
  src = *((uint8_t **)a2 + 33);
  if ( src != nullptr )
  {
    n = strlen(*((const char **)a2 + 33));
    v4 = *((uint8_t **)self + 59);
    v5 = *((uint32_t *)v4 - 3);
    if ( n > 0x3FFFFFFC )
      sub_1900180("basic_string::assign");
  }
  else
  {
    v4 = *((uint8_t **)self + 59);
    n = 0;
    src = (uint8_t *)(&unk_1B15112);
    v5 = *((uint32_t *)v4 - 3);
  }
  if ( src >= v4 && src <= &v4[v5] && *((int *)v4 - 1) <= 0 )
  {
    if ( src - v4 >= n )
    {
      if ( n != 1 )
      {
        v16 = n;
        memcpy(v4, src, n);
        v4 = *((uint8_t **)self + 59);
        n = v16;
        goto LABEL_27;
      }
    }
    else
    {
      if ( src == v4 )
        goto LABEL_27;
      if ( n != 1 )
      {
        v15 = n;
        memmove(v4, src, n);
        v4 = *((uint8_t **)self + 59);
        n = v15;
        goto LABEL_27;
      }
    }
    *v4 = *src;
    v4 = *((uint8_t **)self + 59);
LABEL_27:
    if ( v4 - 12 != (uint8_t *)g4_empty_string_rep )
    {
      *((uint32_t *)v4 - 1) = 0;
      *((uint32_t *)v4 - 3) = n;
      v4[n] = 0;
    }
    goto LABEL_29;
  }
  v6 = *((uint32_t *)v4 - 2);
  if ( v6 < n )
  {
    v7 = 2 * v6;
    if ( n >= 2 * v6 )
      v7 = n;
    v17 = v7;
    if ( v7 + 29 > 0x1000 && v6 < v7 )
    {
      v8 = v7 + 4096 - (((uint16_t)v7 + 29) & 0xFFF);
      if ( v8 > 0x3FFFFFFC )
        v8 = 1073741820;
      v17 = v8;
      v9 = v8 + 13;
      goto LABEL_14;
    }
LABEL_40:
    v9 = v17 + 13;
LABEL_14:
    v14 = n;
    v10 = VoxAllocInternal(v9, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v10 + 8) = 0;
    *(uint32_t *)(v10 + 4) = v17;
    v18 = v10;
    v11 = *((uint32_t *)self + 59);
    n = v14;
    if ( (uint32_t *)(v11 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal((void *)(v11 - 12));
      n = v14;
    }
    v4 = (uint8_t *)(v18 + 12);
    *((uint32_t *)self + 59) = v18 + 12;
    goto LABEL_16;
  }
  v17 = n;
  if ( *((int *)v4 - 1) > 0 )
    goto LABEL_40;
LABEL_16:
  if ( v4 - 12 != (uint8_t *)g4_empty_string_rep )
  {
    *((uint32_t *)v4 - 1) = 0;
    *((uint32_t *)v4 - 3) = n;
    v4[n] = 0;
  }
  if ( n != 0 )
  {
    v12 = *((uint8_t **)self + 59);
    if ( n == 1 )
      *v12 = *src;
    else
      memcpy(v12, src, n);
  }
LABEL_29:
  *((uint32_t *)self + 92) = *((uint32_t *)a2 + 34);
  if ( *((uint32_t *)a2 + 35) != 0 )
    vox::EmitterObj::SetUserData((int)(uintptr_t)(self), *((uint32_t *)a2 + 35));
  result = *((pthread_mutex_t **)a2 + 36);
  if ( result != nullptr )
    return vox::EmitterObj::RegisterStateChangedCallback((int)(uintptr_t)(self), *((uint32_t *)a2 + 36), *((uint32_t *)a2 + 37));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Construct  (binary VA: 0x1030240)
// Original: vox::EmitterObj::EmitterObj
// ----------------------------------------------------------------------------
void vox::EmitterObj::Construct(vox::EmitterObj::Self *self, int64_t a2, const vox::emitter::CreationSettings::Self *a3, vox::DriverSourceInterface::Self *a4, vox::DataObj::Self *a5)
{
  char v5;
  int i;
  uint32_t *v7;
  int v8;
  int v9;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8C8);
  *(uint64_t *)((char *)self + 4) = a2;
  *((uint32_t *)self + 3) = 0;
  vox::Mutex::Construct((vox::EmitterObj::Self *)((char *)self + 20));
  *((uint8_t *)self + 24) = 1;
  *((uint32_t *)self + 7) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D8E0);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = *((uint32_t *)a3 + 11);
  *((uint32_t *)self + 11) = *((uint32_t *)a3 + 10);
  *((uint8_t *)self + 48) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 1065353216;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint8_t *)self + 80) = 1;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 1065353216;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 100) = 1;
  *((uint32_t *)self + 26) = 1065353216;
  *((uint8_t *)self + 108) = 0;
  *((uint32_t *)self + 28) = 1065353216;
  *((uint32_t *)self + 29) = 1065353216;
  *((uint32_t *)self + 30) = 1065353216;
  *((uint32_t *)self + 31) = 1065353216;
  *((uint32_t *)self + 32) = 1065353216;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint8_t *)self + 148) = 1;
  *((uint32_t *)self + 38) = 1065353216;
  *((uint8_t *)self + 156) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint8_t *)self + 168) = 0;
  *((uint8_t *)self + 169) = 0;
  v5 = *((uint8_t *)a3 + 30);
  *((uint8_t *)self + 171) = 0;
  *((uint8_t *)self + 170) = v5;
  *((uint32_t *)self + 43) = 0;
  *((uint8_t *)self + 176) = 0;
  *((uint32_t *)self + 45) = *((uint32_t *)a3 + 8);
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 1015491330;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint8_t *)self + 200) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint8_t *)self + 208) = 0;
  *((uint8_t *)self + 209) = 0;
  *((uint32_t *)self + 53) = ((uint32_t)(uintptr_t)&off_208D968);
  *((uint32_t *)self + 54) = *((uint32_t *)a3 + 41);
  *((uint32_t *)self + 55) = *((uint32_t *)a3 + 42);
  *((uint8_t *)self + 224) = 1;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 1028443341;
  *((uint32_t *)self + 59) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  vox::Vox3DEmitterParameters::Construct((vox::EmitterObj::Self *)((char *)self + 276));
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 90) = (uint32_t)(uintptr_t)(a5);
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  *((uint32_t *)self + 83) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 89) = 0;
  *((uint8_t *)self + 364) = 0;
  *((uint8_t *)self + 365) = 0;
  *((uint32_t *)self + 92) = -1;
  *((uint32_t *)self + 93) = 0;
  *((uint32_t *)self + 94) = 1065353216;
  *((uint32_t *)self + 95) = 0;
  *((uint32_t *)self + 96) = 0;
  *((uint8_t *)self + 388) = 1;
  *((uint32_t *)self + 98) = -1;
  *((uint8_t *)self + 396) = 0;
  *((uint32_t *)self + 100) = 0;
  *((uint32_t *)self + 101) = 0;
  *((uint32_t *)self + 102) = -1;
  *((uint8_t *)self + 412) = 0;
  *((uint32_t *)self + 104) = (uint32_t)(uintptr_t)((char *)self + 416);
  *((uint32_t *)self + 105) = (uint32_t)(uintptr_t)((char *)self + 416);
  *((uint32_t *)self + 106) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  for ( i = 0; i != 10; ++i )
    *((uint8_t *)self + i + 304) = 0;
  v7 = *((uint32_t **)self + 90);
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  if ( v7 != nullptr )
  {
    v8 = v7[9] * ((int)v7[11] >> 3);
    v9 = v8 * v7[10];
    *((uint32_t *)self + 8) = v8 * v7[12];
    *((uint32_t *)self + 7) = v9;
  }
  vox::EmitterObj::SetDefaultParameters((pthread_mutex_t **)self);
  vox::EmitterObj::Parametrize(self, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Serialize  (binary VA: 0x1030a10)
// Original: vox::EmitterObj::Serialize
// ----------------------------------------------------------------------------
int vox::EmitterObj::Serialize(vox::EmitterObj::Self *a1, uint32_t *a2, int a3, int a4, char *a5, char *a6)
{
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  const char *v11;
  int v12;
  uint32_t *v13;
  size_t v14;
  char **v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  const char *v19;
  int v20;
  uint32_t *v21;
  size_t v22;
  int v23;
  int v24;
  uint32_t *v25;
  void *v26;
  int v28;
  int v29;
  uint32_t *v30;
  vox::EmitterObj::Self *v31;
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  int v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  int v45;
  uint32_t *v46;
  int v47;
  uint32_t *v48;
  int v49;
  uint32_t *v50;
  size_t v51;
  int v52;
  uint32_t *v53;
  size_t v54;
  int v55;
  char v56;
  uint32_t *v57;
  const char *v58;
  size_t v59;
  int v60;
  uint32_t *v61;
  int v62;
  uint32_t *v63;
  size_t v64;
  int v65;
  uint32_t *v66;
  int v67;
  uint32_t *v68;
  size_t v69;
  int v70;
  char v71;
  uint32_t *v72;
  const char *v73;
  size_t v74;
  int v75;
  uint32_t *v76;
  int v77;
  uint32_t *v78;
  int v79;
  uint32_t *v80;
  int v81;
  uint32_t *v82;
  long double PlaybackDelay; // fst7
  int v84;
  uint32_t *v85;
  char RandomStartPositionMode;
  int v87;
  uint32_t *v88;
  const char *v89;
  size_t v90;
  int v91;
  uint32_t *v92;
  int v93;
  int v94;
  uint32_t *v95;
  int v96;
  uint32_t *v97;
  int v98;
  uint32_t *v99;
  int v100;
  char *v101;
  char *v102;
  char *s;
  char *v104;
  char *v105;
  char *v106;
  char *v107;
  char *v108;
  char *v109;
  char *v110;
  char *v111;
  char *v112;
  char *v113;
  char *v114;
  char *v115;
  char *v116;
  char v117;
  char v118;
  char v119;
  uint32_t *v120;
  char *v121;
  char *v122;
  char *v123;
  float v124;
  float v125;
  float v126;
  int v127;
  char *v128;
  char *v129;
  int PauseCount;
  float PlayCursor;

  PauseCount = vox::EmitterObj::GetPauseCount((pthread_mutex_t **)a1);
  PlayCursor = vox::EmitterObj::GetPlayCursor((pthread_mutex_t **)a1);
  vox::Mutex::Lock((pthread_mutex_t **)a1 + 5);
  v6 = a2[50];
  if ( (uint32_t *)v6 == a2 + 50 )
  {
    v7 = a2 + 3;
    v120 = a2 + 48;
  }
  else
  {
    v7 = a2 + 3;
    v120 = a2 + 48;
    if ( *(uint8_t *)(v6 + 8) != 0 )
    {
      v28 = a2[48];
      if ( (uint32_t *)v28 == a2 + 48 )
        goto LABEL_11;
      if ( *(uint8_t *)(v28 + 8) != 0 )
        *(uint8_t *)(v28 + 8) = 0;
      else
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
  }
  v101 = (char *)a2[48];
  v8 = opNew(0xCu);
  if ( v8 != -8 )
    *(uint8_t *)(v8 + 8) = 1;
  sub_1901920(v8, v101);
  v102 = (char *)a2[50];
  v9 = opNew(0xCu);
  if ( v9 != -8 )
    *(uint8_t *)(v9 + 8) = 0;
  sub_1901920(v9, v102);
  g4_std_compat::ostream_write(v7, "{", 1);
  v10 = a2[48];
  if ( (uint32_t *)v10 != v120 )
  {
    if ( *(uint8_t *)(v10 + 8) != 0 )
      *(uint8_t *)(v10 + 8) = 0;
    else
      g4_std_compat::ostream_write(v7, ",", 1);
    v121 = *((char **)a1 + 1);
    v127 = *((uint32_t *)a1 + 2);
    g4_std_compat::ostream_write(v7, "\"", 1);
    g4_std_compat::ostream_write(v7, "id", 2);
    g4_std_compat::ostream_write(v7, "\":", 2);
    sub_192DD40(v7, v121, v127);
  }
LABEL_11:
  if ( (a3 & 1) != 0 )
  {
    v79 = a2[48];
    if ( v120 != (uint32_t *)v79 )
    {
      if ( *(uint8_t *)(v79 + 8) != 0 )
      {
        *(uint8_t *)(v79 + 8) = 0;
        v80 = a2 + 3;
      }
      else
      {
        v80 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      v111 = *((char **)a1 + 92);
      g4_std_compat::ostream_write(v80, "\"", 1);
      g4_std_compat::ostream_write(v80, &off_1B23754, 3);
      g4_std_compat::ostream_write(v80, "\":", 2);
      g4_std::ostream::op_shl_int(v80, v111);
    }
  }
  if ( (a3 & 2) == 0 || (v123 = *(char **)(*((uint32_t *)a1 + 90) + 32), v29 = a2[48], v120 == (uint32_t *)v29) )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_14;
  }
  else
  {
    if ( *(uint8_t *)(v29 + 8) != 0 )
    {
      *(uint8_t *)(v29 + 8) = 0;
      v30 = a2 + 3;
    }
    else
    {
      v30 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v30, "\"", 1);
    g4_std_compat::ostream_write(v30, "data_uid", 8);
    g4_std_compat::ostream_write(v30, "\":", 2);
    g4_std::ostream::op_shl_int(v30, v123);
    if ( (a3 & 4) == 0 )
      goto LABEL_14;
  }
  v31 = a1;
  v32 = *((float *)a1 + 23);
  v33 = *((float *)a1 + 24);
  if ( v33 > v32 )
  {
    v31 = a1;
    if ( v33 <= 0.0 )
      v34 = *((float *)a1 + 21);
    else
      v34 = (float)((float)((float)(*((float *)a1 + 22) - *((float *)a1 + 21)) * v32) / v33) + *((float *)a1 + 21);
    v35 = *((float *)a1 + 18);
    v36 = *((float *)a1 + 19);
    if ( v36 > v35 )
      goto LABEL_73;
LABEL_185:
    v37 = *((float *)v31 + 17);
    goto LABEL_75;
  }
  v35 = *((float *)a1 + 18);
  v36 = *((float *)a1 + 19);
  v34 = *((float *)a1 + 22);
  if ( v36 <= v35 )
    goto LABEL_185;
LABEL_73:
  if ( v36 <= 0.0 )
    v37 = *((float *)a1 + 16);
  else
    v37 = (float)((float)((float)(*((float *)v31 + 17) - *((float *)v31 + 16)) * v35) / v36) + *((float *)v31 + 16);
LABEL_75:
  v38 = a2[48];
  if ( v120 != (uint32_t *)v38 )
  {
    if ( *(uint8_t *)(v38 + 8) != 0 )
    {
      *(uint8_t *)(v38 + 8) = 0;
      v39 = a2 + 3;
    }
    else
    {
      v39 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v39, "\"", 1);
    g4_std_compat::ostream_write(v39, "gain_current", 12);
    g4_std_compat::ostream_write(v39, "\":", 2);
    g4_std::ostream::op_shl_double(v39, COERCE__INT64((float)(v34 * v37)));
    if ( (a3 & 8) == 0 )
      goto LABEL_15;
    goto LABEL_79;
  }
LABEL_14:
  if ( (a3 & 8) == 0 )
    goto LABEL_15;
LABEL_79:
  v40 = a2[48];
  v124 = *((float *)a1 + 17);
  if ( v120 != (uint32_t *)v40 )
  {
    if ( *(uint8_t *)(v40 + 8) != 0 )
    {
      *(uint8_t *)(v40 + 8) = 0;
      v41 = a2 + 3;
    }
    else
    {
      v41 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v41, "\"", 1);
    g4_std_compat::ostream_write(v41, "gain_target", 11);
    g4_std_compat::ostream_write(v41, "\":", 2);
    g4_std::ostream::op_shl_double(v41, COERCE__INT64(v124));
    if ( (a3 & 0x10) == 0 )
      goto LABEL_16;
    goto LABEL_83;
  }
LABEL_15:
  if ( (a3 & 0x10) == 0 )
    goto LABEL_16;
LABEL_83:
  v42 = *((float *)a1 + 35);
  v43 = *((float *)a1 + 36);
  if ( v43 > v42 )
  {
    if ( v43 <= 0.0 )
      v44 = *((float *)a1 + 33);
    else
      v44 = (float)((float)((float)(*((float *)a1 + 34) - *((float *)a1 + 33)) * v42) / v43) + *((float *)a1 + 33);
  }
  else
  {
    v44 = *((float *)a1 + 34);
  }
  v45 = a2[48];
  if ( v120 != (uint32_t *)v45 )
  {
    if ( *(uint8_t *)(v45 + 8) != 0 )
    {
      *(uint8_t *)(v45 + 8) = 0;
      v46 = a2 + 3;
    }
    else
    {
      v46 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v46, "\"", 1);
    g4_std_compat::ostream_write(v46, "pitch_current", 13);
    g4_std_compat::ostream_write(v46, "\":", 2);
    g4_std::ostream::op_shl_double(v46, COERCE__INT64(v44));
    if ( (a3 & 0x20) == 0 )
      goto LABEL_17;
    goto LABEL_89;
  }
LABEL_16:
  if ( (a3 & 0x20) == 0 )
    goto LABEL_17;
LABEL_89:
  v47 = a2[48];
  v125 = *((float *)a1 + 34);
  if ( v120 != (uint32_t *)v47 )
  {
    if ( *(uint8_t *)(v47 + 8) != 0 )
    {
      *(uint8_t *)(v47 + 8) = 0;
      v48 = a2 + 3;
    }
    else
    {
      v48 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v48, "\"", 1);
    g4_std_compat::ostream_write(v48, "pitch_target", 12);
    g4_std_compat::ostream_write(v48, "\":", 2);
    g4_std::ostream::op_shl_double(v48, COERCE__INT64(v125));
    if ( (a3 & 0x40) == 0 )
      goto LABEL_18;
    goto LABEL_93;
  }
LABEL_17:
  if ( (a3 & 0x40) == 0 )
    goto LABEL_18;
LABEL_93:
  v128 = (char *)vox::StateToString(*((vox::Self **)a1 + 48), v100);
  v49 = a2[48];
  if ( v120 != (uint32_t *)v49 )
  {
    if ( *(uint8_t *)(v49 + 8) != 0 )
    {
      *(uint8_t *)(v49 + 8) = 0;
      v50 = a2 + 3;
    }
    else
    {
      v50 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v50, "\"", 1);
    g4_std_compat::ostream_write(v50, "state_current", 13);
    g4_std_compat::ostream_write(v50, "\":\"", 3);
    if ( v128 != nullptr )
    {
      v51 = strlen(v128);
      g4_std_compat::ostream_write(v50, v128, v51);
    }
    else
    {
      sub_1911530((char *)v50 + *(uint32_t *)(a2[3] - 12), *(uint32_t *)((char *)v50 + *(uint32_t *)(a2[3] - 12) + 20) | 1);
    }
    g4_std_compat::ostream_write(v50, "\"", 1);
    if ( (a3 & 0x80) == 0 )
      goto LABEL_19;
    goto LABEL_99;
  }
LABEL_18:
  if ( (a3 & 0x80) == 0 )
    goto LABEL_19;
LABEL_99:
  v129 = (char *)vox::StateToString(*((vox::Self **)a1 + 49), v100);
  v52 = a2[48];
  if ( v120 != (uint32_t *)v52 )
  {
    if ( *(uint8_t *)(v52 + 8) != 0 )
    {
      *(uint8_t *)(v52 + 8) = 0;
      v53 = a2 + 3;
    }
    else
    {
      v53 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v53, "\"", 1);
    g4_std_compat::ostream_write(v53, "state_target", 12);
    g4_std_compat::ostream_write(v53, "\":\"", 3);
    if ( v129 != nullptr )
    {
      v54 = strlen(v129);
      g4_std_compat::ostream_write(v53, v129, v54);
    }
    else
    {
      sub_1911530((char *)v53 + *(uint32_t *)(a2[3] - 12), *(uint32_t *)((char *)v53 + *(uint32_t *)(a2[3] - 12) + 20) | 1);
    }
    g4_std_compat::ostream_write(v53, "\"", 1);
    if ( (a3 & 0x100) == 0 )
      goto LABEL_20;
    goto LABEL_105;
  }
LABEL_19:
  if ( (a3 & 0x100) == 0 )
    goto LABEL_20;
LABEL_105:
  v55 = a2[48];
  v56 = *((uint8_t *)a1 + 168);
  if ( v120 != (uint32_t *)v55 )
  {
    if ( *(uint8_t *)(v55 + 8) != 0 )
    {
      *(uint8_t *)(v55 + 8) = 0;
      v57 = a2 + 3;
    }
    else
    {
      v117 = *((uint8_t *)a1 + 168);
      v57 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
      v56 = v117;
    }
    v58 = "true";
    if ( v56 == 0 )
      v58 = "false";
    v105 = (char *)v58;
    g4_std_compat::ostream_write(v57, "\"", 1);
    g4_std_compat::ostream_write(v57, "loop", 4);
    g4_std_compat::ostream_write(v57, "\":", 2);
    v59 = strlen(v105);
    g4_std_compat::ostream_write(v57, v105, v59);
    if ( (a3 & 0x200) == 0 )
      goto LABEL_21;
    goto LABEL_111;
  }
LABEL_20:
  if ( (a3 & 0x200) == 0 )
    goto LABEL_21;
LABEL_111:
  v60 = a2[48];
  if ( v120 != (uint32_t *)v60 )
  {
    if ( *(uint8_t *)(v60 + 8) != 0 )
    {
      *(uint8_t *)(v60 + 8) = 0;
      v61 = a2 + 3;
    }
    else
    {
      v61 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    v106 = *((char **)a1 + 9);
    g4_std_compat::ostream_write(v61, "\"", 1);
    g4_std_compat::ostream_write(v61, "group_id", 8);
    g4_std_compat::ostream_write(v61, "\":", 2);
    g4_std::ostream::op_shl_int(v61, v106);
  }
  if ( a5 != nullptr )
  {
    v62 = a2[48];
    if ( v120 != (uint32_t *)v62 )
    {
      if ( *(uint8_t *)(v62 + 8) != 0 )
      {
        *(uint8_t *)(v62 + 8) = 0;
        v63 = a2 + 3;
      }
      else
      {
        v63 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v63, "\"", 1);
      g4_std_compat::ostream_write(v63, "group_name", 10);
      g4_std_compat::ostream_write(v63, "\":\"", 3);
      v64 = strlen(a5);
      g4_std_compat::ostream_write(v63, a5, v64);
      g4_std_compat::ostream_write(v63, "\"", 1);
      if ( (a3 & 0x400) == 0 )
        goto LABEL_22;
      goto LABEL_120;
    }
  }
LABEL_21:
  if ( (a3 & 0x400) == 0 )
    goto LABEL_22;
LABEL_120:
  v65 = a2[48];
  if ( v120 != (uint32_t *)v65 )
  {
    if ( *(uint8_t *)(v65 + 8) != 0 )
    {
      *(uint8_t *)(v65 + 8) = 0;
      v66 = a2 + 3;
    }
    else
    {
      v66 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    v107 = *((char **)a1 + 11);
    g4_std_compat::ostream_write(v66, "\"", 1);
    g4_std_compat::ostream_write(v66, "priority_bank_id", 16);
    g4_std_compat::ostream_write(v66, "\":", 2);
    g4_std::ostream::op_shl_int(v66, v107);
  }
  if ( a6 != nullptr )
  {
    v67 = a2[48];
    if ( v120 != (uint32_t *)v67 )
    {
      if ( *(uint8_t *)(v67 + 8) != 0 )
      {
        *(uint8_t *)(v67 + 8) = 0;
        v68 = a2 + 3;
      }
      else
      {
        v68 = a2 + 3;
        sub_192D410((int)(uintptr_t)(a2 + 3), ",");
      }
      g4_std_compat::ostream_write(v68, "\"", 1);
      g4_std_compat::ostream_write(v68, "priority_bank_name", 18);
      g4_std_compat::ostream_write(v68, "\":\"", 3);
      v69 = strlen(a6);
      g4_std_compat::ostream_write(v68, a6, v69);
      g4_std_compat::ostream_write(v68, "\"", 1);
      if ( (a3 & 0x800) == 0 )
        goto LABEL_23;
      goto LABEL_129;
    }
  }
LABEL_22:
  if ( (a3 & 0x800) == 0 )
    goto LABEL_23;
LABEL_129:
  v70 = a2[48];
  v71 = *((uint8_t *)a1 + 48);
  if ( v120 != (uint32_t *)v70 )
  {
    if ( *(uint8_t *)(v70 + 8) != 0 )
    {
      *(uint8_t *)(v70 + 8) = 0;
      v72 = a2 + 3;
    }
    else
    {
      v118 = *((uint8_t *)a1 + 48);
      v72 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
      v71 = v118;
    }
    v73 = "true";
    if ( v71 == 0 )
      v73 = "false";
    v108 = (char *)v73;
    g4_std_compat::ostream_write(v72, "\"", 1);
    g4_std_compat::ostream_write(v72, "priority_bank_slot", 18);
    g4_std_compat::ostream_write(v72, "\":", 2);
    v74 = strlen(v108);
    g4_std_compat::ostream_write(v72, v108, v74);
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_24;
    goto LABEL_135;
  }
LABEL_23:
  if ( (a3 & 0x1000) == 0 )
    goto LABEL_24;
LABEL_135:
  v75 = a2[48];
  if ( v120 != (uint32_t *)v75 )
  {
    if ( *(uint8_t *)(v75 + 8) != 0 )
    {
      *(uint8_t *)(v75 + 8) = 0;
      v76 = a2 + 3;
    }
    else
    {
      v76 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    v109 = *((char **)a1 + 10);
    g4_std_compat::ostream_write(v76, "\"", 1);
    g4_std_compat::ostream_write(v76, "priority", 8);
    g4_std_compat::ostream_write(v76, "\":", 2);
    g4_std::ostream::op_shl_int(v76, v109);
    if ( (a3 & 0x2000) == 0 )
      goto LABEL_25;
    goto LABEL_139;
  }
LABEL_24:
  if ( (a3 & 0x2000) != 0 )
  {
LABEL_139:
    v77 = a2[48];
    if ( v120 != (uint32_t *)v77 )
    {
      if ( *(uint8_t *)(v77 + 8) != 0 )
      {
        *(uint8_t *)(v77 + 8) = 0;
        v78 = a2 + 3;
      }
      else
      {
        v78 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      v110 = *((char **)a1 + 3);
      g4_std_compat::ostream_write(v78, "\"", 1);
      g4_std_compat::ostream_write(v78, "reference_count", 15);
      g4_std_compat::ostream_write(v78, "\":", 2);
      g4_std::ostream::op_shl_int(v78, v110);
    }
  }
LABEL_25:
  if ( (a3 & 0x4000) != 0 )
  {
    v11 = *((const char **)a1 + 79);
    if ( v11 == nullptr )
      v11 = "Unassigned";
    v12 = a2[48];
    if ( v120 != (uint32_t *)v12 )
    {
      if ( *(uint8_t *)(v12 + 8) != 0 )
      {
        *(uint8_t *)(v12 + 8) = 0;
        v13 = a2 + 3;
      }
      else
      {
        v114 = (char *)v11;
        v13 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
        v11 = v114;
      }
      s = (char *)v11;
      g4_std_compat::ostream_write(v13, "\"", 1);
      g4_std_compat::ostream_write(v13, "bus_current", 11);
      g4_std_compat::ostream_write(v13, "\":\"", 3);
      v14 = strlen(s);
      g4_std_compat::ostream_write(v13, s, v14);
      g4_std_compat::ostream_write(v13, "\"", 1);
    }
  }
  if ( (a3 & 0x8000) != 0 )
  {
    v15 = (char **)((char *)a1 + 320);
    if ( *((uint32_t *)a1 + 80) == 0 )
      v15 = (char **)((char *)a1 + 316);
    v16 = a2[48];
    if ( v120 != (uint32_t *)v16 )
    {
      if ( *(uint8_t *)(v16 + 8) != 0 )
      {
        *(uint8_t *)(v16 + 8) = 0;
        v17 = a2 + 3;
      }
      else
      {
        v115 = (char *)v15;
        v17 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
        v15 = (char **)v115;
      }
      v104 = *v15;
      g4_std_compat::ostream_write(v17, "\"", 1);
      g4_std_compat::ostream_write(v17, "bus_target", 10);
      g4_std_compat::ostream_write(v17, "\":\"", 3);
      if ( v104 != nullptr )
      {
        v18 = strlen(v104);
        g4_std_compat::ostream_write(v17, v104, v18);
      }
      else
      {
        sub_1911530((char *)v17 + *(uint32_t *)(a2[3] - 12), *(uint32_t *)((char *)v17 + *(uint32_t *)(a2[3] - 12) + 20) | 1);
      }
      g4_std_compat::ostream_write(v17, "\"", 1);
    }
  }
  if ( (a3 & 0x10000) != 0 )
  {
    v91 = a2[48];
    if ( v120 != (uint32_t *)v91 )
    {
      if ( *(uint8_t *)(v91 + 8) != 0 )
      {
        *(uint8_t *)(v91 + 8) = 0;
        v92 = a2 + 3;
      }
      else
      {
        v92 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v92, "\"", 1);
      g4_std_compat::ostream_write(v92, "playback_position", 17);
      g4_std_compat::ostream_write(v92, "\":", 2);
      g4_std::ostream::op_shl_double(v92, COERCE__INT64(PlayCursor));
    }
  }
  if ( (a3 & 0x20000) != 0 )
  {
    RandomStartPositionMode = vox::EmitterObj::GetRandomStartPositionMode((pthread_mutex_t **)a1);
    v87 = a2[48];
    if ( v120 != (uint32_t *)v87 )
    {
      if ( *(uint8_t *)(v87 + 8) != 0 )
      {
        *(uint8_t *)(v87 + 8) = 0;
        v88 = a2 + 3;
      }
      else
      {
        v119 = RandomStartPositionMode;
        v88 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
        RandomStartPositionMode = v119;
      }
      v89 = "true";
      if ( RandomStartPositionMode == 0 )
        v89 = "false";
      v112 = (char *)v89;
      g4_std_compat::ostream_write(v88, "\"", 1);
      g4_std_compat::ostream_write(v88, "playback_random_position", 24);
      g4_std_compat::ostream_write(v88, "\":", 2);
      v90 = strlen(v112);
      g4_std_compat::ostream_write(v88, v112, v90);
    }
  }
  if ( (a3 & 0x40000) != 0 )
  {
    PlaybackDelay = vox::EmitterObj::GetPlaybackDelay((pthread_mutex_t **)a1);
    v84 = a2[48];
    if ( v120 != (uint32_t *)v84 )
    {
      if ( *(uint8_t *)(v84 + 8) != 0 )
      {
        *(uint8_t *)(v84 + 8) = 0;
        v85 = a2 + 3;
      }
      else
      {
        v85 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v85, "\"", 1);
      g4_std_compat::ostream_write(v85, "playback_delay", 14);
      g4_std_compat::ostream_write(v85, "\":", 2);
      v126 = PlaybackDelay;
      g4_std::ostream::op_shl_double(v85, COERCE__INT64(v126));
    }
  }
  if ( (a3 & 0x80000) != 0 )
  {
    v81 = a2[48];
    if ( v120 != (uint32_t *)v81 )
    {
      if ( *(uint8_t *)(v81 + 8) != 0 )
      {
        *(uint8_t *)(v81 + 8) = 0;
        v82 = a2 + 3;
      }
      else
      {
        v82 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v82, "\"", 1);
      g4_std_compat::ostream_write(v82, "pause_count", 11);
      g4_std_compat::ostream_write(v82, "\":", 2);
      g4_std::ostream::op_shl_int(v82, PauseCount);
    }
  }
  if ( (a3 & 0x100000) != 0 )
  {
    v19 = "none";
    if ( a1 != (vox::EmitterObj::Self *)-396 )
      v19 = (char *)a1 + 396;
    v122 = (char *)v19;
    v20 = a2[48];
    if ( v120 != (uint32_t *)v20 )
    {
      if ( *(uint8_t *)(v20 + 8) != 0 )
      {
        *(uint8_t *)(v20 + 8) = 0;
        v21 = a2 + 3;
      }
      else
      {
        v21 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v21, "\"", 1);
      g4_std_compat::ostream_write(v21, "user_data", 9);
      g4_std_compat::ostream_write(v21, "\":\"", 3);
      v22 = strlen(v122);
      g4_std_compat::ostream_write(v21, v122, v22);
      g4_std_compat::ostream_write(v21, "\"", 1);
    }
  }
  v23 = *((uint32_t *)a1 + 88);
  if ( v23 != 0 && (a3 & 0x200000) != 0 )
  {
    v98 = a2[48];
    if ( v120 != (uint32_t *)v98 )
    {
      if ( *(uint8_t *)(v98 + 8) != 0 )
      {
        *(uint8_t *)(v98 + 8) = 0;
        v99 = a2 + 3;
      }
      else
      {
        v99 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v99, "\"", 1);
      g4_std_compat::ostream_write(v99, "driver_source", 13);
      g4_std_compat::ostream_write(v99, "\":", 2);
      v23 = *((uint32_t *)a1 + 88);
    }
    G4_VCALL<void>(v23, 84, a2, a3, a4);
  }
  v24 = *((uint32_t *)a1 + 89);
  if ( v24 != 0 )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_222;
    v96 = a2[48];
    if ( v120 != (uint32_t *)v96 )
    {
      if ( *(uint8_t *)(v96 + 8) != 0 )
      {
        *(uint8_t *)(v96 + 8) = 0;
        v97 = a2 + 3;
      }
      else
      {
        v97 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v97, "\"", 1);
      g4_std_compat::ostream_write(v97, "decoder", 7);
      g4_std_compat::ostream_write(v97, "\":", 2);
      v24 = *((uint32_t *)a1 + 89);
    }
    G4_VCALL<void>(v24, 60, a2, a3, a4);
    v24 = *((uint32_t *)a1 + 89);
    if ( v24 != 0 )
    {
LABEL_222:
      if ( (a4 & 0x40) != 0 )
      {
        v93 = G4_VCALL<int>(v24, 52);
        if ( v93 != 0 )
        {
          v94 = a2[48];
          if ( v120 != (uint32_t *)v94 )
          {
            if ( *(uint8_t *)(v94 + 8) != 0 )
            {
              *(uint8_t *)(v94 + 8) = 0;
              v95 = a2 + 3;
            }
            else
            {
              v116 = (char *)v93;
              v95 = a2 + 3;
              g4_std_compat::ostream_write(a2 + 3, ",", 1);
              v93 = (int)(uintptr_t)(v116);
            }
            v113 = (char *)v93;
            g4_std_compat::ostream_write(v95, "\"", 1);
            g4_std_compat::ostream_write(v95, "stream", 6);
            g4_std_compat::ostream_write(v95, "\":", 2);
            v93 = (int)(uintptr_t)(v113);
          }
          G4_VCALL<void>(v93, 48, a2, a3, a4);
        }
      }
    }
  }
  v25 = (uint32_t *)a2[48];
  if ( v120 != v25 && a2 + 50 != (uint32_t *)a2[50] )
  {
    sub_1901940(a2[48]);
    opDelete(v25);
    v26 = (void *)a2[50];
    sub_1901940(v26);
    opDelete(v26);
    g4_std_compat::ostream_write(a2 + 3, "}", 1);
  }
  vox::Mutex::Unlock((pthread_mutex_t **)a1 + 5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::PrintDebug  (binary VA: 0x1034bd0)
// Original: vox::EmitterObj::PrintDebug
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::EmitterObj::PrintDebug(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 5);
  v1 = (int)(uintptr_t)(*(self + 88));
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 88))((uint32_t)(uintptr_t)(*(self + 88)));
  return vox::Mutex::Unlock(self + 5);
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::LoadAsync  (binary VA: 0x10356f0)
// Original: vox::EmitterObj::LoadAsync
// ----------------------------------------------------------------------------
int vox::EmitterObj::LoadAsync(vox::EmitterObj::Self *self)
{
  pthread_t CurThreadId;
  int v2;
  char IsReady;
  char v4;
  uint32_t *v5;
  int v7;
  int *v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  void *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int i;
  int v28;
  int *v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef void *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t _g4_t_v44[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v32)) > _g4_s2 ? (16u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v33)) > _g4_s3 ? (16u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v34)) > _g4_s4 ? (20u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v35)) > _g4_s5 ? (24u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v36)) > _g4_s6 ? (32u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v37)) > _g4_s7 ? (36u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v38)) > _g4_s8 ? (40u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v39)) > _g4_s9 ? (44u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v40)) > _g4_s10 ? (48u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v41)) > _g4_s11 ? (52u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v42)) > _g4_s12 ? (56u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v43)) > _g4_s13 ? (60u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v44)) > _g4_s14 ? (64u + sizeof(_g4_t_v44)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v2 = *((uint32_t *)self + 90);
  if ( v2 == 0 || *((uint32_t *)self + 88) == 0 )
    goto LABEL_8;
  if ( *(uint32_t *)(v2 + 80) == -1 )
  {
LABEL_16:
    *((uint8_t *)self + 364) = 1;
    v4 = 0;
    goto LABEL_9;
  }
  IsReady = vox::DataObj::IsReady(*((pthread_mutex_t ***)self + 90));
  v4 = 0;
  if ( IsReady != 0 )
  {
    v5 = *((uint32_t **)self + 90);
    v32 = v5[13];
    if ( v5[20] != 0 )
      goto LABEL_8;
    v30 = v5[14];
    if ( v30 == 0 || v32 == 0 )
      goto LABEL_8;
    *((uint32_t *)self + 102) = G4_VCALL<int>(v30, 24, CurThreadId);
    v11 = G4_VCALL<int>(v32, 20);
    v35 = v11;
    v4 = 0;
    if ( v11 == 0 )
    {
      *((uint32_t *)self + 48) = -1;
      *((uint8_t *)self + 364) = 1;
      goto LABEL_9;
    }
    v12 = (uint32_t *)G4_VCALL<int>(v30, 16, v11);
    if ( v12 == nullptr )
    {
      G4_VCALL<void>(v32, 24, v35);
      *((uint32_t *)self + 48) = -1;
      *((uint8_t *)self + 364) = 1;
      v4 = 0;
      goto LABEL_9;
    }
    v9 = *((uint8_t *)self + 209) == 0;
    *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(v12);
    if ( !v9 )
    {
      *((uint8_t *)self + 209) = 0;
      v44[0] = v12[1];
      v44[1] = v12[2];
      v44[2] = v12[3];
      v24 = *((uint32_t *)self + 88);
      v44[3] = v12[4];
      G4_VCALL<void>(v24, 8, v44, (char *)self + 212);
      v25 = *((uint32_t **)self + 89);
      *((uint32_t *)self + 8) = v25[4] * v25[1] * ((int)v25[3] >> 3);
      *((uint32_t *)self + 7) = v25[2] * v25[1] * ((int)v25[3] >> 3);
    }
    if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 76))(*((uint32_t *)self + 88)) != 0
      && (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 56))(*((uint32_t *)self + 89)) != 0 )
    {
      v34 = *((uint32_t **)self + 89);
      v23 = v34[4];
      *((uint32_t *)self + 86) = v23;
      v15 = v23 * (v34[3] * v34[1] / 8);
      *((uint32_t *)self + 86) = v15;
    }
    else
    {
      v13 = *((uint32_t *)self + 55);
      if ( v13 <= 0 )
        v13 = 1;
      v34 = *((uint32_t **)self + 89);
      v14 = v34[2] * v13 / 1000;
      *((uint32_t *)self + 86) = v14;
      v15 = v34[3] * v34[1] / 8 * v14;
      *((uint32_t *)self + 86) = v15;
    }
    if ( v15 <= 0 )
    {
      G4_VCALL<void>(v30, 20, v34);
      *((uint32_t *)self + 89) = 0;
      G4_VCALL<void>(v32, 24, v35);
LABEL_8:
      *((uint32_t *)self + 48) = -1;
      *((uint8_t *)self + 364) = 1;
      v4 = 0;
      goto LABEL_9;
    }
    if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 88) + 76))(*((uint32_t *)self + 88)) != 0 )
    {
      v33 = (*(int (**)(uint32_t))(**((uint32_t **)self + 88) + 92))(*((uint32_t *)self + 88));
      if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 89) + 56))(*((uint32_t *)self + 89)) != 0 )
      {
        *((uint32_t *)self + 85) = 1;
        v39 = nullptr;
        v21 = (uint32_t *)VoxAllocInternal(
                          4u,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
        v22 = v21 + 1;
        v38 = v21;
        v40 = v21 + 1;
        if ( v21 != nullptr )
        {
          *v21 = 0;
          v22 = v40;
        }
        v39 = v22;
        sub_1021430((int)(uintptr_t)(self) + 324, (int)(uintptr_t)(&v38));
        v19 = v38;
        if ( v38 != nullptr )
          goto LABEL_31;
      }
      else
      {
        g4_std::vector_unsigned_char_vox_SAlloc_aac539::reserve(
          (vox::EmitterObj::Self *)((char *)self + 324),
          v33 + 1);
        if ( v33 >= 0 )
        {
          v26 = 0;
          for ( i = VoxAllocInternal(
                      *((uint32_t *)self + 86),
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                      (int)(uintptr_t)("LoadAsync"),
                      5891);
                ;
                i = VoxAllocInternal(
                      *((uint32_t *)self + 86),
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                      (int)(uintptr_t)("LoadAsync"),
                      5891) )
          {
            v29 = *((int **)self + 82);
            v9 = v29 == *((int **)self + 83);
            v36 = i;
            if ( v9 )
            {
              sub_10211D0((int *)self + 81, &v36);
            }
            else
            {
              v28 = 0;
              if ( v29 != nullptr )
              {
                *v29 = i;
                v28 = *((uint32_t *)self + 82);
              }
              *((uint32_t *)self + 82) = v28 + 4;
            }
            if ( *(uint32_t *)(*((uint32_t *)self + 81) + 4 * v26) == 0 )
              break;
            ++v26;
            v20 = *((uint32_t *)self + 85) + 1;
            *((uint32_t *)self + 85) = v20;
            if ( v33 < v26 )
              goto LABEL_32;
          }
          v20 = *((uint32_t *)self + 85);
LABEL_32:
          v4 = 1;
          if ( v20 != 0 )
            goto LABEL_9;
          goto LABEL_16;
        }
      }
    }
    else
    {
      v16 = *((uint32_t *)self + 89);
      *((uint32_t *)self + 85) = 1;
      if ( G4_VCALL<uint8_t>(v16, 56) != 0 )
      {
        v42 = nullptr;
        v17 = (uint32_t *)VoxAllocInternal(
                          4u,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
        v18 = v17 + 1;
        v41 = v17;
        v43 = v17 + 1;
        if ( v17 != nullptr )
        {
          *v17 = 0;
          v18 = v43;
        }
        v42 = v18;
        sub_1021430((int)(uintptr_t)(self) + 324, (int)(uintptr_t)(&v41));
        v19 = v41;
        if ( v41 != nullptr )
        {
LABEL_31:
          VoxFreeInternal(v19);
          v20 = *((uint32_t *)self + 85);
          goto LABEL_32;
        }
        goto LABEL_38;
      }
      v7 = VoxAllocInternal(
             *((uint32_t *)self + 86),
             0,
             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
             (int)(uintptr_t)("LoadAsync"),
             5910);
      v8 = *((int **)self + 82);
      v9 = v8 == *((int **)self + 83);
      v37 = v7;
      if ( v9 )
      {
        sub_10211D0((int *)self + 81, &v37);
      }
      else
      {
        v10 = 0;
        if ( v8 != nullptr )
        {
          *v8 = v7;
          v10 = *((uint32_t *)self + 82);
        }
        *((uint32_t *)self + 82) = v10 + 4;
      }
      if ( **((uint32_t **)self + 81) == 0 )
      {
        *((uint32_t *)self + 85) = 0;
        goto LABEL_16;
      }
    }
LABEL_38:
    v20 = *((uint32_t *)self + 85);
    goto LABEL_32;
  }
LABEL_9:
  v31 = v4;
  sub_BA06B0();
  return v31;
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::Update  (binary VA: 0x1035d70)
// Original: vox::EmitterObj::Update
// ----------------------------------------------------------------------------
void vox::EmitterObj::Update(pthread_mutex_t **self, float a2)
{
  uint8_t v2;
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  int v13;
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  int v19;
  float v20; // xmm1_4
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  pthread_t CurThreadId;
  float RandomStartPosition;
  float v30;
  float v31;
  int v32;
  int v33;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock(self + 5);
  v33 = (int)(uintptr_t)(*(self + 48));
  if ( *((uint8_t *)self + 24) != 0 && *(self + 48) != (pthread_mutex_t *)-1 )
  {
    if ( (uint8_t)vox::EmitterObj::LoadAsync((vox::EmitterObj::Self *)self) == 0 )
    {
LABEL_55:
      vox::Mutex::Unlock(self + 5);
LABEL_56:
      sub_BA06B0();
      return;
    }
    *((uint8_t *)self + 24) = 0;
  }
  if ( *(self + 102) == (pthread_mutex_t *)-1 )
  {
    *((uint8_t *)self + 364) = 1;
    vox::Mutex::Unlock(self + 5);
    goto LABEL_56;
  }
  if ( *((uint8_t *)self + 208) != 0 )
  {
    v25 = (int)(uintptr_t)(*(self + 89));
    *((uint8_t *)self + 208) = 0;
    G4_VCALL<void>(v25, 32, CurThreadId);
    v26 = (*(int (**)(uint32_t))(G4_MUTEX_LOCK((*(self + 88))) + 28))((uint32_t)(uintptr_t)(*(self + 88)));
    *(self + 48) = (pthread_mutex_t *)v26;
    if ( v26 != 0 )
    {
      (*(void (**)(uint32_t))((uintptr_t)G4_MUTEX_LOCK((*(self + 88))) + 24))((uint32_t)(uintptr_t)(*(self + 88)));
      goto LABEL_55;
    }
  }
  v2 = *((uint8_t *)self + 169);
  if ( v2 != *((uint8_t *)self + 168) )
  {
    (*(void (**)(uint32_t, uint32_t))((uintptr_t)G4_MUTEX_LOCK((*(self + 89))) + 48))((uint32_t)(uintptr_t)(*(self + 89)), v2);
    *((uint8_t *)self + 168) = *((uint8_t *)self + 169);
  }
  if ( *((uint8_t *)self + 176) == 0 && *((uint8_t *)self + 170) != 0 && *((uint8_t *)self + 171) == 0 )
  {
    RandomStartPosition = vox::EmitterObj::GetRandomStartPosition((vox::EmitterObj::Self *)self);
    if ( RandomStartPosition > 0.0 )
      vox::EmitterObj::SetPlayCursor((vox::EmitterObj::Self *)self, RandomStartPosition);
    *((uint8_t *)self + 171) = 1;
  }
  vox::EmitterObj::SkipToPosition((vox::EmitterObj::Self *)self);
  v3 = *((float *)self + 46);
  if ( v3 == 0.0 )
  {
    if ( G4_MUTEX_COUNT((*(self + 89))) != 1 )
      goto LABEL_17;
  }
  else
  {
    v24 = (int)(uintptr_t)(*(self + 89));
    *((float *)self + 46) = v3 - a2;
    if ( *(uint32_t *)(v24 + 4) != 1 )
      goto LABEL_17;
  }
  vox::EmitterObj::Update3D((vox::EmitterObj::Self *)self);
LABEL_17:
  vox::EmitterObj::UpdateDSP((void **)self, a2);
  v4 = *((float *)self + 18);
  v5 = *((float *)self + 19);
  if ( v5 <= v4 )
  {
    v6 = *((float *)self + 23);
    *((uint8_t *)self + 80) = 1;
    v7 = *((float *)self + 24);
    if ( v7 > v6 )
      goto LABEL_19;
LABEL_48:
    *((uint8_t *)self + 100) = 1;
    v9 = *((float *)self + 15);
    goto LABEL_49;
  }
  v6 = *((float *)self + 23);
  v7 = *((float *)self + 24);
  v4 = v4 + a2;
  *((float *)self + 18) = v4;
  if ( v7 <= v6 )
    goto LABEL_48;
LABEL_19:
  v8 = v6 + a2;
  v9 = *((float *)self + 15);
  *((float *)self + 23) = v8;
  if ( v7 > v8 )
  {
    if ( v7 <= 0.0 )
      v10 = *((float *)self + 21);
    else
      v10 = (float)((float)((float)(*((float *)self + 22) - *((float *)self + 21)) * v8) / v7) + *((float *)self + 21);
    v11 = v10 * v9;
    if ( v5 > v4 )
      goto LABEL_23;
LABEL_50:
    v12 = *((float *)self + 17);
    goto LABEL_25;
  }
LABEL_49:
  v11 = *((float *)self + 22) * v9;
  if ( v5 <= v4 )
    goto LABEL_50;
LABEL_23:
  if ( v5 <= 0.0 )
    v12 = *((float *)self + 16);
  else
    v12 = (float)((float)((float)(*((float *)self + 17) - *((float *)self + 16)) * v4) / v5) + *((float *)self + 16);
LABEL_25:
  v13 = (int)(uintptr_t)(*(self + 88));
  *((float *)self + 14) = v12 * v11;
  v30 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v13 + 56))(v13);
  v14 = *((float *)self + 14);
  *((float *)self + 13) = v30;
  if ( v30 != v14 )
  {
    (*(void (**)(uint32_t, float))((uintptr_t)G4_MUTEX_LOCK((*(self + 88))) + 48))((uint32_t)(uintptr_t)(*(self + 88)), COERCE_FLOAT(LODWORD(v14)));
    *(self + 13) = *(self + 14);
  }
  v15 = *((float *)self + 35);
  v16 = *((float *)self + 36);
  if ( v16 <= v15 )
  {
    *((uint8_t *)self + 148) = 1;
    v17 = *((float *)self + 31);
    goto LABEL_58;
  }
  v17 = *((float *)self + 31);
  *((float *)self + 35) = a2 + v15;
  if ( v16 <= (float)(a2 + v15) )
  {
LABEL_58:
    v18 = *((float *)self + 34);
    goto LABEL_31;
  }
  if ( v16 <= 0.0 )
    v18 = *((float *)self + 33);
  else
    v18 = (float)((float)((float)(*((float *)self + 34) - *((float *)self + 33)) * (float)(a2 + v15)) / v16)
        + *((float *)self + 33);
LABEL_31:
  v19 = (int)(uintptr_t)(*(self + 88));
  *((float *)self + 32) = v18 * v17;
  v31 = ((long double (*)(int))*(uint32_t *)(*(uint32_t *)v19 + 60))(v19);
  v20 = *((float *)self + 32);
  *((float *)self + 30) = v31;
  if ( v31 != v20 )
  {
    (*(void (**)(uint32_t, float))((uintptr_t)G4_MUTEX_LOCK((*(self + 88))) + 52))((uint32_t)(uintptr_t)(*(self + 88)), COERCE_FLOAT(LODWORD(v20)));
    *(self + 30) = *(self + 32);
  }
  v21 = (*(int (**)(uint32_t))((uintptr_t)G4_MUTEX_LOCK((*(self + 88))) + 28))((uint32_t)(uintptr_t)(*(self + 88)));
  *(self + 48) = (pthread_mutex_t *)v21;
  if ( v21 == 3 )
  {
    if ( *(self + 49) == (pthread_mutex_t *)((char *)&dword_0 + 3) )
      goto LABEL_35;
    if ( (*(uint8_t (**)(uint32_t))((uintptr_t)G4_MUTEX_LOCK((*(self + 89))) + 24))((uint32_t)(uintptr_t)(*(self + 89))) == 0 )
    {
      *(self + 49) = (pthread_mutex_t *)(&dword_0 + 3);
      *((uint8_t *)self + 208) = 1;
      goto LABEL_35;
    }
    v21 = (int)(uintptr_t)(*(self + 48));
  }
  if ( v21 == -1 )
  {
    if ( v33 != -1 )
      *((uint8_t *)self + 200) = 1;
    goto LABEL_55;
  }
LABEL_35:
  if ( *(self + 102) == (pthread_mutex_t *)&loc_4 )
    vox::EmitterObj::ProcessNativeData((vox::EmitterObj::Self *)self, a2);
  else
    vox::EmitterObj::ProcessNonNativeData((vox::EmitterObj::Self *)self, a2);
  v22 = (int)(uintptr_t)(*(self + 49));
  v23 = (int)(uintptr_t)(*(self + 48));
  if ( v22 != v23 )
  {
    if ( v22 == 1 )
    {
      if ( *((float *)self + 47) >= *((float *)self + 46) )
      {
        (*(void (**)(uint32_t))((uintptr_t)G4_MUTEX_LOCK((*(self + 88))) + 12))((uint32_t)(uintptr_t)(*(self + 88)));
        v23 = (*(int (**)(uint32_t))((uintptr_t)G4_MUTEX_LOCK((*(self + 88))) + 28))((uint32_t)(uintptr_t)(*(self + 88)));
        *(self + 48) = (pthread_mutex_t *)v23;
        *(self + 46) = nullptr;
      }
      goto LABEL_43;
    }
    if ( v22 <= 1 )
    {
      if ( v22 == 0 )
      {
        *(self + 49) = (pthread_mutex_t *)v23;
        goto LABEL_43;
      }
    }
    else
    {
      if ( v22 == 2 )
      {
        if ( *((uint8_t *)self + 100) != 0 )
        {
          (*(void (**)(uint32_t, uint32_t))(G4_MUTEX_LOCK(*(self + 88)) + 48))((uint32_t)(uintptr_t)(*(self + 88)), 0);
          (*(void (**)(uint32_t))(G4_MUTEX_LOCK(*(self + 88)) + 20))((uint32_t)(uintptr_t)(*(self + 88)));
          v23 = (*(int (**)(uint32_t))(G4_MUTEX_LOCK(*(self + 88)) + 28))((uint32_t)(uintptr_t)(*(self + 88)));
          *(self + 48) = (pthread_mutex_t *)v23;
        }
        goto LABEL_43;
      }
      if ( v22 == 3 )
      {
        if ( v23 != 0 )
        {
          if ( *((uint8_t *)self + 100) == 0 )
            goto LABEL_43;
          v32 = (int)(uintptr_t)(*(self + 49));
          (*(void (**)(uint32_t))(G4_MUTEX_LOCK(*(self + 88)) + 16))((uint32_t)(uintptr_t)(*(self + 88)));
          v27 = (*(int (**)(uint32_t))(G4_MUTEX_LOCK(*(self + 88)) + 28))((uint32_t)(uintptr_t)(*(self + 88)));
          *((uint8_t *)self + 208) = 1;
          if ( v27 == 0 )
            v27 = v32;
          *(self + 48) = (pthread_mutex_t *)v27;
        }
        else
        {
          *(self + 49) = nullptr;
          if ( v33 == 0 )
            *((uint8_t *)self + 200) = 1;
        }
        if ( G4_VCALL<int>(((uintptr_t *)(*(self + 90)))[14], 24) == 4 )
          vox::EmitterObj::ResetInteractiveMusicState((vox::EmitterObj::Self *)self);
        v23 = (int)(uintptr_t)(*(self + 48));
        goto LABEL_43;
      }
    }
    *(self + 48) = (pthread_mutex_t *)-1;
    *(self + 49) = (pthread_mutex_t *)-1;
    v23 = -1;
  }
LABEL_43:
  if ( v33 != v23 && v23 != 0 )
    *((uint8_t *)self + 200) = 1;
  vox::Mutex::Unlock(self + 5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::EmitterObj::SetInteractiveMusicState  (binary VA: 0x1036440)
// Original: vox::EmitterObj::SetInteractiveMusicState
// ----------------------------------------------------------------------------
void vox::EmitterObj::SetInteractiveMusicState(vox::EmitterObj::Self *self, char *s, bool a3, bool a4)
{
  pthread_t CurThreadId;
  int v5;
  int v6;
  size_t v7;
  size_t v8;
  unsigned int v9;
  size_t *v10;
  size_t n;
  int v12;
  char *v13;
  uint32_t *v14;
  bool v15;
  char *v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  size_t v20;
  unsigned int v21;
  int v22;
  size_t v23;
  size_t v24;
  size_t v25;
  size_t v26;
  size_t *v27;
  char *v28;
  uint32_t *v29;
  void *desta;
  char *dest;
  int v32;

  CurThreadId = vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock((pthread_mutex_t **)self + 5);
  v5 = *((uint32_t *)self + 90);
  if ( v5 != 0 )
  {
    v6 = *(uint32_t *)(v5 + 56);
    if ( v6 != 0 && G4_VCALL<int>(v6, 24, CurThreadId) == 4 )
    {
      if ( a3 && *((uint32_t *)self + 48) != 2 )
        vox::EmitterObj::ResetInteractiveMusicState(self);
      if ( s != nullptr && *s != 0 )
      {
        if ( a4 )
        {
          if ( *((uint32_t *)self + 48) != 2 )
            g4_std::basic_string_char_char_traits_char_vo_fb0ee3::opAssign(
              (void **)self + 106,
              s);
          goto LABEL_4;
        }
        v7 = strlen(s);
        if ( s == &s[v7] )
        {
          dest = (char *)(byte_20E1FB4);
          v12 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
LABEL_25:
          v13 = dest;
          v14 = (uint32_t *)v12;
          v15 = v12 == -8;
          v16 = dest - 12;
          if ( v15 )
          {
LABEL_30:
            v28 = v16;
            sub_1901920(v14, (char *)self + 416);
            if ( v28 != (char *)g4_empty_string_rep
              && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
            {
              VoxFreeInternal(v28);
            }
            goto LABEL_4;
          }
          if ( *((int *)dest - 1) >= 0 )
          {
            v16 = dest - 12;
            if ( dest - 12 == (char *)g4_empty_string_rep )
              v13 = dest;
            else
              __sync_add_and_fetch((volatile int32_t *)dest - 1, 1u);
LABEL_29:
            v14[2] = (uint32_t)(uintptr_t)(v13);
            goto LABEL_30;
          }
          v18 = *((uint32_t *)dest - 3);
          v21 = *((uint32_t *)dest - 2);
          if ( v18 <= 0x3FFFFFFC )
          {
            if ( v18 > v21 && v18 < 2 * v21 )
              v18 = 2 * v21;
            if ( v18 + 29 > 0x1000 && v21 < v18 )
            {
              v19 = v18 + 4096 - (((uint16_t)v18 + 29) & 0xFFF);
              v18 = 1073741820;
              if ( v19 <= 0x3FFFFFFC )
                v18 = v19;
            }
            v29 = v14;
            v26 = v18;
            v32 = VoxAllocInternal(
                    v18 + 13,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            *(uint32_t *)(v32 + 4) = v26;
            *(uint32_t *)(v32 + 8) = 0;
            v22 = 0;
            v14 = v29;
            v20 = *((uint32_t *)dest - 3);
            if ( v20 != 0 )
            {
              if ( v20 == 1 )
              {
                *(uint8_t *)(v32 + 12) = *dest;
              }
              else
              {
                memcpy((void *)(v32 + 12), dest, v20);
                v14 = v29;
              }
              v22 = *((uint32_t *)dest - 3);
            }
            if ( (uint32_t *)v32 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
            {
              *(uint32_t *)(v32 + 8) = 0;
              *(uint32_t *)v32 = v22;
              *(uint8_t *)(v32 + v22 + 12) = 0;
            }
            v16 = dest - 12;
            v13 = (char *)(v32 + 12);
            goto LABEL_29;
          }
LABEL_52:
          sub_1900180("basic_string::_S_create");
        }
        v8 = v7;
        if ( v7 > 0x3FFFFFFC )
          goto LABEL_52;
        if ( v7 + 29 > 0x1000 && v7 != 0 )
        {
          v9 = v7 + 4096 - (((uint16_t)v7 + 29) & 0xFFF);
          if ( v9 > 0x3FFFFFFC )
            v9 = 1073741820;
          desta = (void *)v9;
          v23 = v8;
          v10 = (size_t *)VoxAllocInternal(
                            v9 + 13,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
          v10[1] = (size_t)desta;
          v10[2] = 0;
          n = v23;
          dest = (char *)(v10 + 3);
        }
        else
        {
          v25 = v7;
          v17 = VoxAllocInternal(
                  v7 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          n = v25;
          v10 = (size_t *)v17;
          *(uint32_t *)(v17 + 4) = v25;
          *(uint32_t *)(v17 + 8) = 0;
          dest = (char *)(v17 + 12);
          if ( v25 == 1 )
          {
            *(uint8_t *)(v17 + 12) = *s;
            goto LABEL_22;
          }
        }
        v27 = v10;
        v24 = n;
        memcpy(dest, s, n);
        n = v24;
        v10 = v27;
LABEL_22:
        if ( v10 != (size_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          v10[2] = 0;
          *v10 = n;
          dest[n] = 0;
        }
        v12 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        goto LABEL_25;
      }
    }
  }
LABEL_4:
  vox::Mutex::Unlock((pthread_mutex_t **)self + 5);
  sub_BA06B0();
}


