#include "Core/Utils/DecompTypes.h"
#include "vox_NativePlaylistsManager.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_NativePlaylistsManager.cpp
// Library: vox | Module: vox_NativePlaylistsManager
// Binary Address Span: 0xff4590 .. 0xff4c70 (15 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xff4590 (size: 29 bytes)
// Symbol:    _ZN3vox22NativePlaylistsManagerC1Ev
// Demangled: vox::NativePlaylistsManager::NativePlaylistsManager(void)
// ============================================================================
// Alternative name is '_ZN3vox22NativePlaylistsManagerC2Ev'
struct vox::NativePlaylistsManager::Self *vox::NativePlaylistsManager::Construct(
        vox::NativePlaylistsManager::Self *self)
{
  *(uint8_t *)self = 1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::Construct  (binary VA: 0xff45b0)
// Original: vox::NativePlaylistsManager::NativePlaylistsManager
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::Construct(vox::NativePlaylistsManager::Self *self, vox::NativePlaylistsManager::Self *a2)
{
  int v2;
  int v3;
  vox::NativePlaylist::Self **v4;
  vox::VoxThread::Self *v5;
  vox::NativePlaylist::Self *v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  *(uint8_t *)self = 1;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = 0;
  v2 = VoxAllocInternal(
         4 * *((uint32_t *)a2 + 2),
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
         (int)(uintptr_t)("NativePlaylistsManager"),
         1118);
  *((uint32_t *)self + 3) = v2;
  if ( v2 != 0 )
  {
    v3 = 0;
    if ( *((int *)a2 + 2) <= 0 )
      goto LABEL_8;
    while ( 1 )
    {
      v6 = (vox::NativePlaylist::Self *)VoxAllocInternal(
                                    0x3Cu,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
                                    (int)(uintptr_t)("NativePlaylistsManager"),
                                    1129);
      vox::NativePlaylist::Construct(v6, *(vox::NativePlaylist::Self **)(*((uint32_t *)a2 + 3) + 4 * v3));
      *(uint32_t *)(*((uint32_t *)self + 3) + 4 * v3) = (uint32_t)(uintptr_t)(v6);
      v4 = (vox::NativePlaylist::Self **)(*((uint32_t *)self + 3) + 4 * v3);
      if ( *v4 == nullptr )
        break;
      ++*((uint32_t *)self + 2);
      if ( (uint8_t)vox::NativePlaylist::IsValid(*v4) == 0 )
        break;
      if ( *((uint32_t *)a2 + 2) <= ++v3 )
        goto LABEL_8;
    }
  }
  *(uint8_t *)self = 0;
LABEL_8:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::Destroy  (binary VA: 0xff46f0)
// Original: vox::NativePlaylistsManager::~NativePlaylistsManager
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::Destroy(vox::NativePlaylistsManager::Self *self)
{
  vox::NativePlaylist::Self **v1;
  int v2;
  int i;
  vox::NativePlaylist::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v1 = *((vox::NativePlaylist::Self ***)self + 3);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 2);
    if ( v2 > 0 )
    {
      for ( i = 0; i < v2; ++i )
      {
        if ( v1[i] != nullptr )
        {
          vox::NativePlaylist::Destroy(v1[i]);
          VoxFreeInternal(*(void **)(*((uint32_t *)self + 3) + 4 * i));
          v2 = *((uint32_t *)self + 2);
          v1 = *((vox::NativePlaylist::Self ***)self + 3);
        }
      }
    }
    VoxFreeInternal(v1);
    *((uint32_t *)self + 3) = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::AddGroup  (binary VA: 0xff4790)
// Original: vox::NativePlaylistsManager::AddGroup
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::AddGroup(int a1, uint32_t *a2)
{
  vox::NativePlaylist::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::NativePlaylist::AddGroup(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * *a2), (int)(uintptr_t)(a2));
  *(uint8_t *)a1 = vox::NativePlaylist::IsValid(*(vox::NativePlaylist::Self **)(*(uint32_t *)(a1 + 12) + 4 * *a2));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::AddPlaylist  (binary VA: 0xff4820)
// Original: vox::NativePlaylistsManager::AddPlaylist
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::AddPlaylist(int a1, int a2, uint32_t *a3)
{
  vox::VoxThread::Self *v3;
  int v4;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v4 = VoxAllocInternal(
         0x3Cu,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"),
         (int)(uintptr_t)("AddPlaylist"),
         1182);
  vox::NativePlaylist::Construct(v4, a3);
  *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a2) = v4;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * a2) != 0 )
    ++*(uint32_t *)(a1 + 8);
  else
    *(uint8_t *)a1 = 0;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::AddPlaylistElement  (binary VA: 0xff48f0)
// Original: vox::NativePlaylistsManager::AddPlaylistElement
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::AddPlaylistElement(int a1, int *a2)
{
  vox::NativePlaylist::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::NativePlaylist::AddPlaylistElement(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4 * *a2), a2);
  *(uint8_t *)a1 = vox::NativePlaylist::IsValid(*(vox::NativePlaylist::Self **)(*(uint32_t *)(a1 + 12) + 4 * *a2));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::GetNbPlaylists  (binary VA: 0xff4980)
// Original: vox::NativePlaylistsManager::GetNbPlaylists
// ----------------------------------------------------------------------------
int vox::NativePlaylistsManager::GetNbPlaylists(vox::NativePlaylistsManager::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::GetPlaylistElement  (binary VA: 0xff4990)
// Original: vox::NativePlaylistsManager::GetPlaylistElement
// ----------------------------------------------------------------------------
int vox::NativePlaylistsManager::GetPlaylistElement(vox::NativePlaylistsManager::Self *self, int a2, int a3, int a4)
{
  int v4;
  vox::NativePlaylist::Self *v5;
  int CurrentElement;
  vox::NativePlaylist::Self *v8;
  int v9;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 3);
  v5 = *(vox::NativePlaylist::Self **)(v4 + 4 * a2);
  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      CurrentElement = vox::NativePlaylist::GetCurrentElement(*(vox::NativePlaylist::Self **)(v4 + 4 * a2));
    }
    else
    {
      CurrentElement = 0;
      if ( a3 == 2 )
        CurrentElement = vox::NativePlaylist::GetPlaylistElement(v5, a4);
    }
  }
  else
  {
    CurrentElement = vox::NativePlaylist::GetPlaylistElement(*(vox::NativePlaylist::Self **)(v4 + 4 * a2));
  }
  v9 = CurrentElement;
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::Init  (binary VA: 0xff4a50)
// Original: vox::NativePlaylistsManager::Init
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::Init(vox::NativePlaylistsManager::Self *self, int a2)
{
  int v2;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v2 = VoxAllocInternal(4 * a2, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_playlists.cpp"), (int)(uintptr_t)("Init"), 1239);
  *((uint32_t *)self + 3) = v2;
  if ( v2 == 0 )
    *(uint8_t *)self = 0;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::IsValid  (binary VA: 0xff4af0)
// Original: vox::NativePlaylistsManager::IsValid
// ----------------------------------------------------------------------------
int vox::NativePlaylistsManager::IsValid(vox::NativePlaylistsManager::Self *self)
{
  return *(uint8_t *)self;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::PeekAtNextPlaylistElement  (binary VA: 0xff4b00)
// Original: vox::NativePlaylistsManager::PeekAtNextPlaylistElement
// ----------------------------------------------------------------------------
int vox::NativePlaylistsManager::PeekAtNextPlaylistElement(vox::NativePlaylistsManager::Self *self, int a2)
{
  int Element;
  vox::NativePlaylist::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  Element = vox::NativePlaylist::PeekAtNextElement(*(vox::NativePlaylist::Self **)(*((uint32_t *)self + 3) + 4 * a2));
  sub_BA06B0();
  return Element;
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::ResetPlaylist  (binary VA: 0xff4b80)
// Original: vox::NativePlaylistsManager::ResetPlaylist
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::ResetPlaylist(vox::NativePlaylistsManager::Self *self, int a2)
{
  if ( a2 >= 0 )
    vox::NativePlaylist::Reset(*(vox::NativePlaylist::Self **)(*((uint32_t *)self + 3) + 4 * a2));
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::SetPlaylistToPreviousState  (binary VA: 0xff4bb0)
// Original: vox::NativePlaylistsManager::SetPlaylistToPreviousState
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::SetPlaylistToPreviousState(vox::NativePlaylistsManager::Self *self, int a2)
{
  vox::NativePlaylist::SetToPreviousState(*(vox::NativePlaylist::Self **)(*((uint32_t *)self + 3) + 4 * a2));
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::SetState  (binary VA: 0xff4be0)
// Original: vox::NativePlaylistsManager::SetState
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::SetState(vox::NativePlaylistsManager::Self *self, vox::NativePlaylistsManager::Self *a2)
{
  int v2;
  vox::NativePlaylist::Self *v3;
  vox::NativePlaylist::Self *v4;
  vox::NativePlaylist::Self *v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  *(uint8_t *)self = *(uint8_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  if ( *((int *)self + 2) > 0 )
  {
    v2 = 0;
    do
    {
      v5 = *(vox::NativePlaylist::Self **)(*((uint32_t *)a2 + 3) + 4 * v2);
      v3 = *(vox::NativePlaylist::Self **)(*((uint32_t *)self + 3) + 4 * v2++);
      vox::NativePlaylist::SetState(v3, v5);
    }
    while ( *((uint32_t *)self + 2) > v2 );
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::NativePlaylistsManager::TransposePlaylistParameters  (binary VA: 0xff4c70)
// Original: vox::NativePlaylistsManager::TransposePlaylistParameters
// ----------------------------------------------------------------------------
void vox::NativePlaylistsManager::TransposePlaylistParameters(vox::NativePlaylistsManager::Self *self, int a2, int a3)
{
  int v3;
  typedef vox::VoxThread::Self *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef uint32_t _g4_t_v6[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v6)) > _g4_s2 ? (36u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( a2 != a3 )
  {
    v3 = *((uint32_t *)self + 3);
    v5 = *(uint32_t **)(v3 + 4 * a3);
    vox::NativePlaylist::GetState(*(uint32_t **)(v3 + 4 * a2), v6);
    vox::NativePlaylist::SetState(v5, v6);
  }
  sub_BA06B0();
}


