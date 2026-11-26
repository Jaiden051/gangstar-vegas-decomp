#include "Core/Utils/DecompTypes.h"
#include "vox_NativePlaylist.h"

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::Construct  (binary VA: 0xff3360)
// Original: vox::NativePlaylist::NativePlaylist
// ----------------------------------------------------------------------------
int vox::NativePlaylist::Construct(int a1, uint32_t *a2)
{
  int v3;

  *(uint8_t *)a1 = 1;
  *(uint32_t *)(a1 + 4) = *a2;
  v3 = a2[1];
  *(uint32_t *)(a1 + 8) = v3;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 20) = v3;
  *(uint32_t *)(a1 + 32) = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::Construct  (binary VA: 0xff33d0)
// Original: vox::NativePlaylist::NativePlaylist
// ----------------------------------------------------------------------------
vox::NativePlaylist::Self * vox::NativePlaylist::Construct(vox::NativePlaylist::Self *self, vox::NativePlaylist::Self *a2)
{
  vox::SegmentGroup::Self **v2;
  vox::RandomGroup::Self *v3;
  vox::RandomGroup::Self **v4;
  int v5;
  unsigned int v7;
  vox::RandomGroup::Self **v8;
  vox::PlaylistElement::Self *v9;
  uint32_t *v10;
  vox::PlaylistElement::Self *v11;
  uint32_t *v12;
  vox::PlaylistElement::Self *v13;
  vox::PlaylistElement::Self **v14;
  int v15;
  vox::PlaylistElement::Self *v16;
  vox::PlaylistElement::Self **v17;
  unsigned int v18;
  vox::PlaylistElement::Self **v19;
  vox::PlaylistElement::Self *v20;
  uint32_t *v21;
  vox::PlaylistElement::Self *v22;
  uint32_t *v23;
  vox::PlaylistElement::Self *v24;
  vox::VoxThread::Self *v25;
  vox::SequentialGroup::Self *v26;
  vox::RandomGroup::Self *v27;
  vox::PlaylistElement::Self *v28;
  vox::PlaylistElement::Self *v29;
  vox::PlaylistElement::Self *v30;
  int v31;
  int v32;
  vox::SegmentGroup::Self **i;
  vox::PlaylistElement::Self **v34;
  int CurThreadId;
  int v36;
  int v37;
  size_t v38;
  vox::PlaylistElement::Self *v39;
  vox::PlaylistElement::Self *v40;
  int v41;
  vox::PlaylistElement::Self *v42;
  vox::PlaylistElement::Self *v43;
  unsigned int v44;
  int v45;

  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v25);
  sub_BA06A0("NativePlaylist::NativePlaylist", CurThreadId);
  *(uint8_t *)self = 1;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  v2 = *((vox::SegmentGroup::Self ***)a2 + 9);
  for ( i = *((vox::SegmentGroup::Self ***)a2 + 10); i != v2; *((uint32_t *)self + 11) = v37 + v41 )
  {
    while ( 1 )
    {
      if ( vox::SegmentGroup::GetSelectMode(*v2) != 0 )
      {
        v27 = (vox::RandomGroup::Self *)(*v2);
        v3 = (vox::RandomGroup::Self *)VoxAllocInternal(
                                   0x6Cu,
                                   0,
                                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
                                   (int)(uintptr_t)("NativePlaylist"),
                                   705);
        vox::RandomGroup::Construct(v3, v27);
        if ( v3 == nullptr )
          goto LABEL_10;
      }
      else
      {
        v26 = (vox::SequentialGroup::Self *)(*v2);
        v3 = (vox::RandomGroup::Self *)VoxAllocInternal(
                                   0x34u,
                                   0,
                                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
                                   (int)(uintptr_t)("NativePlaylist"),
                                   701);
        vox::SequentialGroup::Construct(v3, v26);
        if ( v3 == nullptr )
          goto LABEL_10;
      }
      v4 = *((vox::RandomGroup::Self ***)self + 10);
      if ( v4 == *((vox::RandomGroup::Self ***)self + 11) )
        break;
      v5 = 0;
      if ( v4 != nullptr )
      {
        *v4 = v3;
        v5 = *((uint32_t *)self + 10);
      }
      ++v2;
      *((uint32_t *)self + 10) = v5 + 4;
      if ( i == v2 )
        goto LABEL_32;
    }
    v37 = 4;
    v7 = ((int)(uintptr_t)(v4) - *((uint32_t *)self + 9)) >> 2;
    if ( v7 != 0 )
    {
      if ( v7 > 2 * v7 || 2 * v7 > 0x3FFFFFFF )
        v37 = -4;
      else
        v37 = 8 * v7;
    }
    v28 = *((vox::PlaylistElement::Self **)self + 10);
    v31 = ((int)(uintptr_t)(v4) - *((uint32_t *)self + 9)) >> 2;
    v41 = VoxAllocInternal(v37, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v44 = v41 + 4;
    v8 = (vox::RandomGroup::Self **)(v41 + 4 * v31);
    if ( v8 != nullptr )
      *v8 = v3;
    v39 = *((vox::PlaylistElement::Self **)self + 9);
    if ( v28 != v39 )
    {
      v9 = *((vox::PlaylistElement::Self **)self + 9);
      v10 = (uint32_t *)v41;
      do
      {
        if ( v10 != nullptr )
          *v10 = *(uint32_t *)v9;
        v9 = (vox::PlaylistElement::Self *)((char *)v9 + 4);
        ++v10;
      }
      while ( v28 != v9 );
      v44 = v41 + 4 * ((unsigned int)(v28 - (vox::PlaylistElement::Self *)((char *)v39 + 4)) >> 2) + 8;
    }
    v40 = *((vox::PlaylistElement::Self **)self + 10);
    if ( v28 != v40 )
    {
      v11 = *((vox::PlaylistElement::Self **)self + 10);
      v12 = (uint32_t *)v44;
      v13 = v28;
      do
      {
        if ( v12 != nullptr )
          *v12 = *(uint32_t *)v13;
        v13 = (vox::PlaylistElement::Self *)((char *)v13 + 4);
        ++v12;
      }
      while ( v11 != v13 );
      v44 += 4 * ((unsigned int)(v40 - (vox::PlaylistElement::Self *)((char *)v28 + 4)) >> 2) + 4;
    }
    if ( *((uint32_t *)self + 9) != 0 )
      VoxFreeInternal(*((void **)self + 9));
    *((uint32_t *)self + 9) = v41;
    ++v2;
    *((uint32_t *)self + 10) = v44;
  }
LABEL_32:
  v14 = *((vox::PlaylistElement::Self ***)a2 + 12);
  v34 = *((vox::PlaylistElement::Self ***)a2 + 13);
  if ( v14 != v34 )
  {
    while ( 1 )
    {
      v29 = *v14;
      v16 = (vox::PlaylistElement::Self *)VoxAllocInternal(
                                      0x14u,
                                      0,
                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
                                      (int)(uintptr_t)("NativePlaylist"),
                                      722);
      vox::PlaylistElement::Construct(v16, v29);
      if ( v16 == nullptr )
        break;
      v17 = *((vox::PlaylistElement::Self ***)self + 13);
      if ( v17 == *((vox::PlaylistElement::Self ***)self + 14) )
      {
        v36 = 4;
        v18 = ((int)(uintptr_t)(v17) - *((uint32_t *)self + 12)) >> 2;
        if ( v18 != 0 )
        {
          if ( v18 > 2 * v18 || 2 * v18 > 0x3FFFFFFF )
            v36 = -4;
          else
            v36 = 8 * v18;
        }
        v30 = *((vox::PlaylistElement::Self **)self + 13);
        v32 = ((int)(uintptr_t)(v17) - *((uint32_t *)self + 12)) >> 2;
        v45 = VoxAllocInternal(v36, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v38 = v45 + 4;
        v19 = (vox::PlaylistElement::Self **)(v45 + 4 * v32);
        if ( v19 != nullptr )
          *v19 = v16;
        v42 = *((vox::PlaylistElement::Self **)self + 12);
        if ( v30 != v42 )
        {
          v20 = *((vox::PlaylistElement::Self **)self + 12);
          v21 = (uint32_t *)v45;
          do
          {
            if ( v21 != nullptr )
              *v21 = *(uint32_t *)v20;
            v20 = (vox::PlaylistElement::Self *)((char *)v20 + 4);
            ++v21;
          }
          while ( v30 != v20 );
          v38 = v45 + 4 * ((unsigned int)(v30 - (vox::PlaylistElement::Self *)((char *)v42 + 4)) >> 2) + 8;
        }
        v43 = *((vox::PlaylistElement::Self **)self + 13);
        if ( v30 != v43 )
        {
          v22 = *((vox::PlaylistElement::Self **)self + 13);
          v23 = (uint32_t *)v38;
          v24 = v30;
          do
          {
            if ( v23 != nullptr )
              *v23 = *(uint32_t *)v24;
            v24 = (vox::PlaylistElement::Self *)((char *)v24 + 4);
            ++v23;
          }
          while ( v22 != v24 );
          v38 += 4 * ((unsigned int)(v43 - (vox::PlaylistElement::Self *)((char *)v30 + 4)) >> 2) + 4;
        }
        if ( *((uint32_t *)self + 12) != 0 )
          VoxFreeInternal(*((void **)self + 12));
        *((uint32_t *)self + 12) = v45;
        *((uint32_t *)self + 13) = v38;
        *((uint32_t *)self + 14) = v36 + v45;
      }
      else
      {
        v15 = 0;
        if ( v17 != nullptr )
        {
          *v17 = v16;
          v15 = *((uint32_t *)self + 13);
        }
        *((uint32_t *)self + 13) = v15 + 4;
      }
      if ( v34 == ++v14 )
        return (sub_BA06B0("NativePlaylist::NativePlaylist", CurThreadId), (vox::NativePlaylist::Self *)0);
    }
LABEL_10:
    *(uint8_t *)self = 0;
  }
  return (sub_BA06B0("NativePlaylist::NativePlaylist", CurThreadId), (vox::NativePlaylist::Self *)0);
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::Destroy  (binary VA: 0xff38f0)
// Original: vox::NativePlaylist::~NativePlaylist
// ----------------------------------------------------------------------------
void vox::NativePlaylist::Destroy(vox::NativePlaylist::Self *self)
{
  int v1;
  int v2;
  void (***v3)(uint32_t, int);
  int v4;
  int v5;
  int v6;
  void *v7;
  vox::SegmentGroup::Self *v8;
  int CurThreadId;
  int v10;

  CurThreadId = vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 9);
  v10 = (*((uint32_t *)self + 10) - v1) >> 2;
  if ( v10 > 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      vox::SegmentGroup::GetSelectMode(*(vox::SegmentGroup::Self **)(v1 + 4 * v2));
      v3 = *(void (****)(uint32_t, int))(*((uint32_t *)self + 9) + 4 * v2);
      if ( v3 != nullptr )
      {
        (**v3)(*(uint32_t *)(*((uint32_t *)self + 9) + 4 * v2), CurThreadId);
        VoxFreeInternal(*(void **)(*((uint32_t *)self + 9) + 4 * v2));
      }
      if ( ++v2 == v10 )
        break;
      v1 = *((uint32_t *)self + 9);
    }
  }
  v4 = *((uint32_t *)self + 12);
  v5 = (*((uint32_t *)self + 13) - v4) >> 2;
  if ( v5 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(void **)(v4 + 4 * v6);
      if ( v7 != nullptr )
        VoxFreeInternal(v7);
      if ( ++v6 == v5 )
        break;
      v4 = *((uint32_t *)self + 12);
    }
  }
  sub_BA06B0();
  if ( *((uint32_t *)self + 12) != 0 )
    VoxFreeInternal(*((void **)self + 12));
  if ( *((uint32_t *)self + 9) != 0 )
    VoxFreeInternal(*((void **)self + 9));
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::AddGroup  (binary VA: 0xff39f0)
// Original: vox::NativePlaylist::AddGroup
// ----------------------------------------------------------------------------
int vox::NativePlaylist::AddGroup(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  unsigned int v6;
  int *v7;
  int *v8;
  int *v9;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int v14;
  vox::VoxThread::Self *v15;
  int v16;
  int CurThreadId;
  size_t v18;
  int v19;
  int *v20;

  CurThreadId = vox::VoxThread::GetCurThreadId(v15);
  sub_BA06A0("NativePlaylist::AddGroup", CurThreadId);
  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v2 = VoxAllocInternal(0x34u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"), (int)(uintptr_t)("AddGroup"), 771);
    vox::SequentialGroup::Construct(v2, a2);
    if ( v2 != 0 )
      goto LABEL_3;
LABEL_9:
    *(uint8_t *)a1 = 0;
    { sub_BA06B0("NativePlaylist::AddGroup", CurThreadId); return 0; }
  }
  v2 = VoxAllocInternal(0x6Cu, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"), (int)(uintptr_t)("AddGroup"), 775);
  vox::RandomGroup::Construct(v2, a2);
  if ( v2 == 0 )
    goto LABEL_9;
LABEL_3:
  v3 = *(int **)(a1 + 40);
  if ( v3 == *(int **)(a1 + 44) )
  {
    v6 = ((int)(uintptr_t)(v3) - *(uint32_t *)(a1 + 36)) >> 2;
    v18 = 4;
    if ( v6 != 0 )
    {
      v18 = 0xFFFFFFFC;
      if ( v6 <= 2 * v6 )
      {
        v14 = 8 * v6;
        if ( 2 * v6 > 0x3FFFFFFF )
          v14 = -4;
        v18 = v14;
      }
    }
    v16 = ((int)(uintptr_t)(v3) - *(uint32_t *)(a1 + 36)) >> 2;
    v19 = VoxAllocInternal(v18, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v7 = (int *)(v19 + 4 * v16);
    if ( v7 != nullptr )
      *v7 = v2;
    v8 = *(int **)(a1 + 36);
    v9 = (int *)v19;
    if ( v3 != v8 )
    {
      v10 = *(int **)(a1 + 36);
      do
      {
        if ( v9 != nullptr )
          *v9 = *v10;
        ++v10;
        ++v9;
      }
      while ( v3 != v10 );
      v9 = (int *)(v19 + 4 * ((unsigned int)((char *)v3 - (char *)(v8 + 1)) >> 2) + 4);
    }
    v11 = *(int **)(a1 + 40);
    v12 = v9 + 1;
    v20 = v12;
    if ( v3 != v11 )
    {
      v13 = v3;
      do
      {
        if ( v12 != nullptr )
          *v12 = *v13;
        ++v13;
        ++v12;
      }
      while ( v11 != v13 );
      v20 += ((unsigned int)((char *)v11 - (char *)(v3 + 1)) >> 2) + 1;
    }
    if ( *(uint32_t *)(a1 + 36) != 0 )
      VoxFreeInternal(*(void **)(a1 + 36));
    *(uint32_t *)(a1 + 36) = v19;
    *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v20);
    *(uint32_t *)(a1 + 44) = v18 + v19;
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = v2;
      v4 = *(uint32_t *)(a1 + 40);
    }
    *(uint32_t *)(a1 + 40) = v4 + 4;
  }
  { sub_BA06B0("NativePlaylist::AddGroup", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::AddPlaylistElement  (binary VA: 0xff3c40)
// Original: vox::NativePlaylist::AddPlaylistElement
// ----------------------------------------------------------------------------
void vox::NativePlaylist::AddPlaylistElement(int a1, int *a2)
{
  vox::PlaylistElement::Self *v2;
  vox::PlaylistElement::Self **v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  vox::PlaylistElement::Self **v7;
  char *v8;
  uint32_t *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  typedef vox::VoxThread::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef uint32_t _g4_t_v22[5];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v15)) > _g4_s1 ? (44u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v16)) > _g4_s2 ? (48u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v17)) > _g4_s3 ? (60u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v18)) > _g4_s4 ? (64u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v19)) > _g4_s5 ? (64u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v20)) > _g4_s6 ? (68u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v21)) > _g4_s7 ? (72u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v22)) > _g4_s8 ? (88u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);

  vox::VoxThread::GetCurThreadId(v14);
  sub_BA06A0();
  v2 = (vox::PlaylistElement::Self *)VoxAllocInternal(
                                 0x14u,
                                 0,
                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
                                 (int)(uintptr_t)("AddPlaylistElement"),
                                 793);
  vox::PlaylistElement::Construct(v2);
  if ( v2 != nullptr )
  {
    *(uint32_t *)v2 = a2[3];
    *((uint32_t *)v2 + 2) = a2[4];
    *((uint32_t *)v2 + 3) = a2[5];
    *((uint32_t *)v2 + 4) = a2[6];
    v3 = *(vox::PlaylistElement::Self ***)(a1 + 52);
    if ( v3 == *(vox::PlaylistElement::Self ***)(a1 + 56) )
    {
      v17 = 4;
      v5 = ((int)(uintptr_t)(v3) - *(uint32_t *)(a1 + 48)) >> 2;
      if ( v5 != 0 )
      {
        if ( v5 <= 2 * v5 )
        {
          v13 = -4;
          if ( 2 * v5 <= 0x3FFFFFFF )
            v13 = 8 * v5;
          v17 = v13;
        }
        else
        {
          v17 = 0xFFFFFFFC;
        }
      }
      v16 = *(char **)(a1 + 52);
      v15 = ((int)(uintptr_t)(v3) - *(uint32_t *)(a1 + 48)) >> 2;
      v6 = VoxAllocInternal(v17, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v20 = (uint32_t *)v6;
      v7 = (vox::PlaylistElement::Self **)(v6 + 4 * v15);
      if ( v7 != nullptr )
        *v7 = v2;
      v18 = *(char **)(a1 + 48);
      if ( v16 != v18 )
      {
        v8 = *(char **)(a1 + 48);
        v9 = v20;
        do
        {
          if ( v9 != nullptr )
            *v9 = *(uint32_t *)v8;
          v8 += 4;
          ++v9;
        }
        while ( v16 != v8 );
        v6 = (unsigned int)(uintptr_t)(&v20[((unsigned int)(v16 - (v18 + 4)) >> 2) + 1]);
      }
      v19 = v6 + 4;
      v21 = *(char **)(a1 + 52);
      if ( v16 != v21 )
      {
        v10 = *(char **)(a1 + 52);
        v11 = (uint32_t *)(v6 + 4);
        v12 = v16;
        do
        {
          if ( v11 != nullptr )
            *v11 = *(uint32_t *)v12;
          v12 += 4;
          ++v11;
        }
        while ( v10 != v12 );
        v19 += 4 * ((unsigned int)(v21 - (v16 + 4)) >> 2) + 4;
      }
      if ( *(uint32_t *)(a1 + 48) != 0 )
        VoxFreeInternal(*(void **)(a1 + 48));
      *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v20);
      *(uint32_t *)(a1 + 52) = v19;
      *(uint32_t *)(a1 + 56) = (uint32_t)(uintptr_t)((char *)v20 + v17);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *v3 = v2;
        v4 = *(uint32_t *)(a1 + 52);
      }
      *(uint32_t *)(a1 + 52) = v4 + 4;
    }
    if ( vox::SegmentGroup::GetSelectMode(*(vox::SegmentGroup::Self **)(*(uint32_t *)(a1 + 36) + 4 * a2[2])) != 0 )
    {
      v22[0] = a2[1];
      v22[1] = a2[7];
      vox::RandomGroup::AddElement(*(uint32_t *)(*(uint32_t *)(a1 + 36) + 4 * a2[2]), v22);
    }
    else
    {
      vox::SequentialGroup::AddElement(*(vox::SequentialGroup::Self **)(*(uint32_t *)(a1 + 36) + 4 * a2[2]), a2[1]);
    }
  }
  else
  {
    *(uint8_t *)a1 = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::GetCurrentElement  (binary VA: 0xff3ef0)
// Original: vox::NativePlaylist::GetCurrentElement
// ----------------------------------------------------------------------------
int vox::NativePlaylist::GetCurrentElement(vox::NativePlaylist::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 12) + 4 * *((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::GetCurrentPosition  (binary VA: 0xff3f00)
// Original: vox::NativePlaylist::GetCurrentPosition
// ----------------------------------------------------------------------------
int vox::NativePlaylist::GetCurrentPosition(vox::NativePlaylist::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::GetState  (binary VA: 0xff3f10)
// Original: vox::NativePlaylist::GetState
// ----------------------------------------------------------------------------
uint32_t * vox::NativePlaylist::GetState(uint32_t *a1, uint32_t *a2)
{
  *a2 = a1[3];
  a2[1] = a1[4];
  a2[2] = a1[5];
  a2[3] = a1[6];
  a2[4] = a1[7];
  a2[5] = a1[8];
  a2[6] = (uint32_t)(uintptr_t)(a1 + 9);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::GetPlaylistElement  (binary VA: 0xff3f50)
// Original: vox::NativePlaylist::GetPlaylistElement
// ----------------------------------------------------------------------------
int vox::NativePlaylist::GetPlaylistElement(vox::NativePlaylist::Self *self, int a2)
{
  int result;
  int v3;

  result = 0;
  if ( *((uint32_t *)self + 5) != 0 && a2 >= 0 )
  {
    v3 = *((uint32_t *)self + 12);
    if ( a2 < (*((uint32_t *)self + 13) - v3) >> 2 )
      return *(uint32_t *)(v3 + 4 * a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::IsValid  (binary VA: 0xff3f80)
// Original: vox::NativePlaylist::IsValid
// ----------------------------------------------------------------------------
int vox::NativePlaylist::IsValid(vox::NativePlaylist::Self *self)
{
  return *(uint8_t *)self;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::PeekAtNextElement  (binary VA: 0xff3f90)
// Original: vox::NativePlaylist::PeekAtNextElement
// ----------------------------------------------------------------------------
int vox::NativePlaylist::PeekAtNextElement(vox::NativePlaylist::Self *self)
{
  int v1;
  vox::NativePlaylist::Self *v2;
  int v3;
  int v4;
  int v5;
  vox::VoxThread::Self *v7;
  vox::NativePlaylist::Self *v8;
  vox::NativePlaylist::Self *v9;

  v1 = 0;
  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v2 = self;
  v3 = -1;
  v4 = *((uint32_t *)self + 3);
  v5 = (*((uint32_t *)v2 + 10) - *((uint32_t *)v2 + 9)) >> 2;
  if ( *((uint32_t *)self + 5) != 0 )
  {
    while ( v1 < v5 )
    {
      if ( v3 != -1 )
        break;
      ++v1;
      v8 = v2;
      v3 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)(*((uint32_t *)v2 + 9) + 4 * v4) + 12))(
             *(uint32_t *)(*((uint32_t *)v2 + 9) + 4 * v4),
             0);
      v2 = v8;
      if ( v3 != -1 )
        continue;
      if ( ++v4 >= v5 )
        v4 = 0;
    }
    if ( v3 == -1 )
    {
      v1 = 0;
      if ( *((uint32_t *)v2 + 5) == 1 )
        goto LABEL_11;
      v9 = v2;
      v3 = (*(int (**)(uint32_t, int))(***((uint32_t ***)v2 + 9) + 12))(**((uint32_t **)v2 + 9), 1);
      v2 = v9;
    }
    if ( v3 < 0 )
      v1 = 0;
    else
      v1 = *(uint32_t *)(*((uint32_t *)v2 + 12) + 4 * v3);
  }
LABEL_11:
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::ResetGroups  (binary VA: 0xff4090)
// Original: vox::NativePlaylist::ResetGroups
// ----------------------------------------------------------------------------
int vox::NativePlaylist::ResetGroups(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a1[9];
  v3 = (a1[10] - v2) >> 2;
  if ( v3 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *(uint32_t *)(v2 + 4 * v4++);
      G4_VCALL<void>(v5, 16, a2);
      if ( v4 == v3 )
        break;
      v2 = a1[9];
    }
  }
  result = a1[3];
  a1[3] = 0;
  a1[6] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::Reset  (binary VA: 0xff40f0)
// Original: vox::NativePlaylist::Reset
// ----------------------------------------------------------------------------
void vox::NativePlaylist::Reset(vox::NativePlaylist::Self *self)
{
  int v1;
  int v2;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = v1;
  v2 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 5) = v2;
  *((uint32_t *)self + 8) = v2;
  vox::NativePlaylist::ResetGroups((uint32_t *)(self), 0);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::GetPlaylistElement  (binary VA: 0xff4180)
// Original: vox::NativePlaylist::GetPlaylistElement
// ----------------------------------------------------------------------------
int vox::NativePlaylist::GetPlaylistElement(vox::NativePlaylist::Self *self)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int v5;
  int v7;
  int v8;
  int v9;
  vox::VoxThread::Self *v10;
  int CurThreadId;
  int v12;

  v1 = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 3);
  v3 = -1;
  v12 = (*((uint32_t *)self + 10) - *((uint32_t *)self + 9)) >> 2;
  if ( *((uint32_t *)self + 5) != 0 )
  {
    while ( v1 < v12 )
    {
      if ( v3 != -1 )
        break;
      ++v1;
      v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*((uint32_t *)self + 9) + 4 * v2) + 8))(
             *(uint32_t *)(*((uint32_t *)self + 9) + 4 * v2),
             CurThreadId);
      if ( v3 != -1 )
        continue;
      if ( ++v2 >= v12 )
        v2 = 0;
    }
    if ( v3 == -1 )
    {
      v9 = *((uint32_t *)self + 5);
      v1 = 0;
      *((uint32_t *)self + 8) = v9;
      *((uint32_t *)self + 5) = v9 - 1;
      vox::NativePlaylist::ResetGroups((uint32_t *)(self), 1);
      if ( *((uint32_t *)self + 5) == 0 )
        goto LABEL_14;
      v2 = *((uint32_t *)self + 3);
      v3 = (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 9) + 4 * v2) + 8))(*(uint32_t *)(*((uint32_t *)self + 9) + 4 * v2));
    }
    if ( v3 < 0 )
    {
      v1 = 0;
    }
    else
    {
      v4 = *((uint32_t *)self + 1) == 1;
      *((uint32_t *)self + 6) = v2;
      if ( v4 )
      {
        v7 = v2 + 1;
        v8 = 0;
        if ( v7 < v12 )
          v8 = v7;
        *((uint32_t *)self + 3) = v8;
      }
      else if ( *((uint32_t *)self + 3) != v2 )
      {
        *((uint32_t *)self + 3) = v2;
      }
      v5 = *((uint32_t *)self + 4);
      *((uint32_t *)self + 4) = v3;
      *((uint32_t *)self + 7) = v5;
      v1 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * v3);
    }
  }
LABEL_14:
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::SetState  (binary VA: 0xff42c0)
// Original: vox::NativePlaylist::SetState
// ----------------------------------------------------------------------------
void vox::NativePlaylist::SetState(vox::NativePlaylist::Self *self, vox::NativePlaylist::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  vox::SegmentGroup::Self *v7;
  int v8;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 10);
  *(uint8_t *)self = *(uint8_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  v3 = *((uint32_t *)self + 9);
  v8 = (v2 - v3) >> 2;
  if ( v8 != 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      vox::SegmentGroup::GetSelectMode(*(vox::SegmentGroup::Self **)(v3 + 4 * v4));
      v5 = *(uint32_t *)(*((uint32_t *)self + 9) + 4 * v4);
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 9) + 4 * v4++);
      G4_VCALL<void>(v5, 32, v6);
      if ( v4 == v8 )
        break;
      v3 = *((uint32_t *)self + 9);
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::SetState  (binary VA: 0xff43a0)
// Original: vox::NativePlaylist::SetState
// ----------------------------------------------------------------------------
void vox::NativePlaylist::SetState(uint32_t *a1, uint32_t *a2)
{
  int *v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int *v6;
  vox::SegmentGroup::Self *v7;
  bool v8;
  int v9;
  typedef vox::SegmentGroup::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[24];
  typedef uint8_t _g4_t_v13[72];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v12)) > _g4_s2 ? (44u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v13)) > _g4_s3 ? (68u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);

  vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  a1[3] = *a2;
  a1[4] = a2[1];
  a1[5] = a2[2];
  a1[6] = a2[3];
  a1[7] = a2[4];
  a1[8] = a2[5];
  v11 = (a1[10] - a1[9]) >> 2;
  if ( v11 > 0 )
  {
    v2 = (int *)a2[6];
    v3 = *v2;
    if ( (unsigned int)(v2[1] - *v2) >> 2 == 0 )
LABEL_9:
      sub_1900210("vector::_M_range_check");
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v7 = *(vox::SegmentGroup::Self **)(v3 + 4 * v4);
      v8 = vox::SegmentGroup::GetSelectMode(v7) == 0;
      v9 = *(uint32_t *)v7;
      if ( v8 )
      {
        (*(void (**)(vox::SegmentGroup::Self *, uint8_t *))(v9 + 28))(v7, v12);
        ++v5;
        (*(void (**)(uint32_t, uint8_t *))(**(uint32_t **)(a1[9] + 4 * v4) + 36))(*(uint32_t *)(a1[9] + 4 * v4), v12);
        if ( v5 == v11 )
          break;
      }
      else
      {
        ++v5;
        (*(void (**)(vox::SegmentGroup::Self *, uint8_t *))(v9 + 28))(v7, v13);
        (*(void (**)(uint32_t, uint8_t *))(**(uint32_t **)(a1[9] + 4 * v4) + 36))(*(uint32_t *)(a1[9] + 4 * v4), v13);
        if ( v5 == v11 )
          break;
      }
      v4 = v5;
      v6 = (int *)a2[6];
      v3 = *v6;
      if ( v5 >= (v6[1] - *v6) >> 2 )
        goto LABEL_9;
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylist::SetToPreviousState  (binary VA: 0xff4510)
// Original: vox::NativePlaylist::SetToPreviousState
// ----------------------------------------------------------------------------
void vox::NativePlaylist::SetToPreviousState(vox::NativePlaylist::Self *self)
{
  int CurThreadId;
  vox::VoxThread::Self *v2;

  CurThreadId = vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  (*(void (**)(uint32_t, int))(**(uint32_t **)(*((uint32_t *)self + 9) + 4 * *((uint32_t *)self + 6)) + 24))(
    *(uint32_t *)(*((uint32_t *)self + 9) + 4 * *((uint32_t *)self + 6)),
    CurThreadId);
  *((uint32_t *)self + 3) = *((uint32_t *)self + 6);
  *((uint32_t *)self + 4) = *((uint32_t *)self + 7);
  *((uint32_t *)self + 5) = *((uint32_t *)self + 8);
  sub_BA06B0();
}


