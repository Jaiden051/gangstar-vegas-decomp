#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderNativeCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::HasData  (binary VA: 0xfea290)
// Original: vox::DecoderNativeCursor::HasData
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::HasData(vox::DecoderNativeCursor::Self *self)
{
  int CurThreadId;
  int v2;
  int v3;
  vox::VoxThread::Self *v5;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  v3 = *((uint32_t *)self + 19);
  if ( v3 != 0 )
    v2 = (*(int (**)(uint32_t, int))(*(uint32_t *)v3 + 8))(*((uint32_t *)self + 19), CurThreadId);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Reset  (binary VA: 0xfea310)
// Original: vox::DecoderNativeCursor::Reset
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::Reset(vox::DecoderNativeCursor::Self *self)
{
  int v1;
  char *v2;
  char *v3;
  char *v4;
  vox::Mutex::Self *v5;
  int CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 19);
  if ( v1 != 0 )
  {
    (*(void (**)(uint32_t, int))(*(uint32_t *)v1 + 16))(*((uint32_t *)self + 19), CurThreadId);
    *((uint32_t *)self + 20) = 0;
    *((uint32_t *)self + 24) = 0;
    *((uint32_t *)self + 25) = 0;
    *((uint32_t *)self + 27) = 0;
    v2 = (char *)self + 68;
    vox::Mutex::Lock((vox::DecoderNativeCursor::Self *)((char *)self + 112));
    v3 = *((char **)self + 17);
    if ( v3 != (char *)self + 68 )
    {
      while ( 1 )
      {
        v4 = *(char **)v3;
        VoxFreeInternal(v3);
        if ( v4 == v2 )
          break;
        v3 = v4;
      }
    }
    *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v2);
    *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v2);
    vox::Mutex::Unlock((vox::DecoderNativeCursor::Self *)((char *)self + 112));
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Destroy  (binary VA: 0xfea3d0)
// Original: vox::DecoderNativeCursor::~DecoderNativeCursor
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::Destroy(vox::DecoderNativeCursor::Self *self)
{
  int CurThreadId;
  void (***v2)(uint32_t, int);
  void (***v3)(uint32_t);
  void (***v4)(uint32_t);
  vox::DecoderNativeCursor::Self **v5;
  vox::DecoderNativeCursor::Self *v6;
  vox::Mutex::Self *v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D068);
  CurThreadId = vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v2 = *((void (****)(uint32_t, int))self + 19);
  if ( v2 != nullptr )
  {
    (**v2)(*((uint32_t *)self + 19), CurThreadId);
    VoxFreeInternal(*((void **)self + 19));
    *((uint32_t *)self + 19) = 0;
  }
  v3 = *((void (****)(uint32_t))self + 22);
  if ( v3 != nullptr )
  {
    (**v3)(*((uint32_t *)self + 22));
    VoxFreeInternal(*((void **)self + 22));
    *((uint32_t *)self + 22) = 0;
  }
  v4 = *((void (****)(uint32_t))self + 23);
  if ( v4 != nullptr )
  {
    (**v4)(*((uint32_t *)self + 23));
    VoxFreeInternal(*((void **)self + 23));
    *((uint32_t *)self + 23) = 0;
  }
  if ( *((uint32_t *)self + 15) != 0 )
  {
    vox::NativePlaylistsManager::Destroy(*((vox::NativePlaylistsManager::Self **)self + 15));
    VoxFreeInternal(*((void **)self + 15));
    *((uint32_t *)self + 15) = 0;
  }
  sub_BA06B0();
  vox::Mutex::Destroy((vox::DecoderNativeCursor::Self *)((char *)self + 112));
  v5 = *((vox::DecoderNativeCursor::Self ***)self + 17);
  if ( v5 != (vox::DecoderNativeCursor::Self **)((char *)self + 68) )
  {
    while ( 1 )
    {
      v6 = *v5;
      VoxFreeInternal(v5);
      if ( v6 == (vox::DecoderNativeCursor::Self *)((char *)self + 68) )
        break;
      v5 = (vox::DecoderNativeCursor::Self **)v6;
    }
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Destroy_eafea4e0  (binary VA: 0xfea4e0)
// Original: vox::DecoderNativeCursor::~DecoderNativeCursor
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::Destroy_eafea4e0(vox::DecoderNativeCursor::Self *self)
{
  vox::DecoderNativeCursor::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::GetStateIndex  (binary VA: 0xfebfe0)
// Original: vox::DecoderNativeCursor::GetStateIndex
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::GetStateIndex(vox::DecoderNativeCursor::Self *self)
{
  vox::Mutex::Self *v1;
  vox::DecoderNativeCursor::Self *v2;
  uint32_t *v3;
  int v4;

  v1 = (vox::Mutex::Self *)((vox::DecoderNativeCursor::Self *)((char *)self + 112));
  vox::Mutex::Lock((vox::DecoderNativeCursor::Self *)((char *)self + 112));
  v2 = *((vox::DecoderNativeCursor::Self **)self + 17);
  if ( (vox::DecoderNativeCursor::Self *)((char *)self + 68) == v2 )
  {
    v4 = -1;
    vox::Mutex::Unlock(v1);
  }
  else
  {
    do
      v2 = *(vox::DecoderNativeCursor::Self **)v2;
    while ( (vox::DecoderNativeCursor::Self *)((char *)self + 68) != v2 );
    v3 = *((uint32_t **)self + 18);
    v4 = v3[2];
    sub_1901940(v3);
    VoxFreeInternal(v3);
    vox::Mutex::Unlock(v1);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::IsInError  (binary VA: 0xfec070)
// Original: vox::DecoderNativeCursor::IsInError
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::IsInError(vox::VoxNativeSubDecoder::Self **self)
{
  int v1;
  vox::VoxNativeSubDecoder::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v1 = 0;
  if ( *(self + 19) != nullptr )
    v1 = vox::VoxNativeSubDecoder::IsInError(*(self + 19));
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::SetLoop  (binary VA: 0xfec0f0)
// Original: vox::DecoderNativeCursor::SetLoop
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::SetLoop(vox::VoxNativeSubDecoder::Self **self)
{
  return vox::DecoderNativeCursor::IsInError(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Seek  (binary VA: 0xfec120)
// Original: vox::DecoderNativeCursor::Seek
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::Seek(vox::VoxNativeSubDecoder::Self **self, unsigned int a2)
{
  char v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;
  int v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v2 = vox::DecoderNativeCursor::IsInError(self);
  v3 = -1;
  if ( v2 == 0 )
  {
    v4 = (int)(uintptr_t)(*(self + 19));
    if ( v4 != 0 )
      v3 = G4_VCALL<int>(v4, 12, a2);
  }
  v7 = v3;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Rewind  (binary VA: 0xfec1b0)
// Original: vox::DecoderNativeCursor::Rewind
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::Rewind(vox::DecoderNativeCursor::Self *self, int a2)
{
  int v2;
  int16_t v3;
  int v4;
  int v5;
  int16_t v6;
  vox::VoxThread::Self *v7;
  int v8;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( (uint8_t)vox::DecoderNativeCursor::IsInError((vox::VoxNativeSubDecoder::Self **)self) == 0
    && *((uint32_t *)self + 19) != 0 )
  {
    v2 = *((uint32_t *)self + 25);
    if ( v2 < a2 )
    {
      if ( a2 > *((uint32_t *)self + 24) )
        goto LABEL_13;
      v6 = *(uint16_t *)(*((uint32_t *)self + 8) + 32);
      if ( v6 == 17 )
      {
        vox::VoxNativeSubDecoderIMAADPCM::SetState(
          *((vox::VoxNativeSubDecoderIMAADPCM::Self **)self + 19),
          *((vox::NativeSubDecoderIMAADPCMState::Self **)self + 22));
        v2 = *((uint32_t *)self + 24);
      }
      else if ( v6 == 1 )
      {
        vox::VoxNativeSubDecoderPCM::SetState(
          *((vox::VoxNativeSubDecoderPCM::Self **)self + 19),
          *((vox::NativeSubDecoderPCMState::Self **)self + 22));
        v2 = *((uint32_t *)self + 24);
      }
      else if ( v6 == 2 )
      {
        vox::VoxNativeSubDecoderMSADPCM::SetState(
          *((vox::VoxNativeSubDecoderMSADPCM::Self **)self + 19),
          *((vox::NativeSubDecoderMSADPCMState::Self **)self + 22));
        v2 = *((uint32_t *)self + 24);
      }
      else
      {
        if ( v6 == 2048 )
          vox::VoxNativeSubDecoderMPC::SetState(
            *((vox::VoxNativeSubDecoderMPC::Self **)self + 19),
            *((vox::NativeSubDecoderMPCState::Self **)self + 22));
        v2 = *((uint32_t *)self + 24);
      }
    }
    else
    {
      v3 = *(uint16_t *)(*((uint32_t *)self + 8) + 32);
      switch ( v3 )
      {
        case 17:
          vox::VoxNativeSubDecoderIMAADPCM::SetState(
            *((vox::VoxNativeSubDecoderIMAADPCM::Self **)self + 19),
            *((vox::NativeSubDecoderIMAADPCMState::Self **)self + 23));
          v2 = *((uint32_t *)self + 25);
          break;
        case 1:
          vox::VoxNativeSubDecoderPCM::SetState(
            *((vox::VoxNativeSubDecoderPCM::Self **)self + 19),
            *((vox::NativeSubDecoderPCMState::Self **)self + 23));
          v2 = *((uint32_t *)self + 25);
          break;
        case 2:
          vox::VoxNativeSubDecoderMSADPCM::SetState(
            *((vox::VoxNativeSubDecoderMSADPCM::Self **)self + 19),
            *((vox::NativeSubDecoderMSADPCMState::Self **)self + 23));
          v2 = *((uint32_t *)self + 25);
          break;
        case 2048:
          vox::VoxNativeSubDecoderMPC::SetState(
            *((vox::VoxNativeSubDecoderMPC::Self **)self + 19),
            *((vox::NativeSubDecoderMPCState::Self **)self + 23));
          v2 = *((uint32_t *)self + 25);
          break;
        default:
          break;
      }
    }
    v4 = v2 - a2;
    if ( v4 > 0 )
    {
      v8 = v4;
      vox::VoxNativeSubDecoder::EmulateDecode(*((vox::VoxNativeSubDecoder::Self **)self + 19), v4);
      v4 = v8;
    }
    v5 = *((uint32_t *)self + 25);
    if ( a2 > v5 )
    {
      if ( a2 <= *((uint32_t *)self + 24) )
      {
        *((uint32_t *)self + 24) = v4;
        *((uint32_t *)self + 25) = v4;
      }
    }
    else
    {
      *((uint32_t *)self + 25) = v4;
      *((uint32_t *)self + 24) += v4 - v5;
    }
  }
LABEL_13:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::GetRewindLimit  (binary VA: 0xfec3d0)
// Original: vox::DecoderNativeCursor::GetRewindLimit
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::GetRewindLimit(vox::VoxNativeSubDecoder::Self **self)
{
  char v1;
  int v2;
  int v3;

  v1 = vox::DecoderNativeCursor::IsInError(self);
  v2 = 0;
  if ( v1 != 0 )
    return v2;
  v2 = (int)(uintptr_t)(*(self + 25));
  v3 = (int)(uintptr_t)(*(self + 27));
  if ( v2 < v3 )
  {
    if ( v3 > (int)(uintptr_t)(*(self + 24)) )
      return (int)(uintptr_t)(*(self + 24));
    return v2;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Decode  (binary VA: 0xfec440)
// Original: vox::DecoderNativeCursor::Decode
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::Decode(vox::VoxNativeSubDecoder::Self **self, int16_t *a2, int a3)
{
  char v3;
  int v4;
  vox::VoxNativeSubDecoderIMAADPCM::Self *v5;
  vox::NativeSubDecoderIMAADPCMState::Self *v6;
  int v7;
  int16_t v8;
  vox::VoxNativeSubDecoder::Self *v9;
  int StateIndex;
  char v11;
  int v12;
  vox::VoxThread::Self *v14;
  char v15;
  int v16;

  vox::VoxThread::GetCurThreadId(v14);
  sub_BA06A0();
  v3 = vox::DecoderNativeCursor::IsInError(self);
  v4 = 0;
  if ( v3 != 0 )
    goto LABEL_15;
  v5 = (vox::VoxNativeSubDecoderIMAADPCM::Self *)(*(self + 19));
  if ( v5 == nullptr )
    goto LABEL_15;
  if ( *((uint8_t *)self + 84) != 0 || (int)(uintptr_t)(*(self + 25)) + a3 > (int)(uintptr_t)(*(self + 26)) )
  {
    v6 = (vox::NativeSubDecoderIMAADPCMState::Self *)(*(self + 22));
    *(self + 22) = *(self + 23);
    v7 = (int)(uintptr_t)(*(self + 8));
    *(self + 23) = (vox::VoxNativeSubDecoder::Self *)(v6);
    v8 = *(uint16_t *)(v7 + 32);
    switch ( v8 )
    {
      case 17:
        vox::VoxNativeSubDecoderIMAADPCM::GetState(v5, v6);
        break;
      case 1:
        vox::VoxNativeSubDecoderPCM::GetState(v5, v6);
        break;
      case 2:
        vox::VoxNativeSubDecoderMSADPCM::GetState(v5, v6);
        break;
      case 2048:
        vox::VoxNativeSubDecoderMPC::GetState(v5, v6);
        break;
      default:
        break;
    }
    v9 = *(self + 25);
    *(self + 25) = nullptr;
    *(self + 24) = v9;
    StateIndex = vox::DecoderNativeCursor::GetStateIndex((vox::DecoderNativeCursor::Self *)self);
    if ( StateIndex < 0 )
      goto LABEL_18;
LABEL_10:
    v11 = vox::VoxNativeSubDecoder::SetState(*(self + 19), StateIndex);
    if ( v11 != 0 )
      *(self + 27) = nullptr;
    goto LABEL_12;
  }
  StateIndex = vox::DecoderNativeCursor::GetStateIndex((vox::DecoderNativeCursor::Self *)self);
  if ( StateIndex >= 0 )
    goto LABEL_10;
LABEL_18:
  v11 = 0;
  if ( *(self + 20) == nullptr )
    v11 = vox::VoxNativeSubDecoder::SetState(*(self + 19), 0);
LABEL_12:
  v15 = v11;
  v4 = vox::VoxNativeSubDecoder::Decode(*(self + 19), a2, a3);
  v12 = (int)(uintptr_t)(*(self + 20));
  if ( v12 != 0 )
  {
    *(self + 24) = (vox::VoxNativeSubDecoder::Self *)((char *)*(self + 24) + v4);
    *(self + 25) = (vox::VoxNativeSubDecoder::Self *)((char *)*(self + 25) + v4);
    *(self + 27) = (vox::VoxNativeSubDecoder::Self *)((char *)*(self + 27) + v4);
  }
  *((uint8_t *)self + 84) = v15;
  *(self + 20) = (vox::VoxNativeSubDecoder::Self *)(v12 + 1);
LABEL_15:
  v16 = v4;
  sub_BA06B0();
  return v16;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Serialize  (binary VA: 0xfec640)
// Original: vox::DecoderNativeCursor::Serialize
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::Serialize(vox::VoxNativeSubDecoder::Self **a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int CurrentState;
  vox::VoxNativeSubDecoder::Self *v10;
  char *v11;
  char *v12;
  char *v13;
  int v14;
  char *v15;
  uint8_t *v16;
  void *v17;
  const char *v19;
  int16_t v20;
  uint8_t *v21;
  int v22;
  size_t v23;
  char *v24;
  uint8_t *v25;
  int v26;
  char *v27;
  uint8_t *v28;
  int v29;
  uint8_t *v30;
  int v31;
  uint8_t *v32;
  vox::VoxNativeSubDecoder::Self *v33;
  int v34;
  int v35;
  int v36;
  uint8_t *v37;
  int v38;
  int v39;
  char *v40;
  char *v41;
  char *s;
  char *v43;
  char *v44;
  char *v45;
  char *v46;
  char *v47;
  uint8_t *v48;

  v4 = -1;
  if ( (uint8_t)vox::DecoderNativeCursor::IsInError(a1) != 0 )
    return v4;
  v5 = *(uint32_t *)(a2 + 200);
  v48 = (uint8_t *)(a2 + 192);
  if ( v5 != a2 + 200 && *(uint8_t *)(v5 + 8) != 0 )
  {
    v36 = *(uint32_t *)(a2 + 192);
    if ( v36 == a2 + 192 )
      goto LABEL_12;
    if ( *(uint8_t *)(v36 + 8) != 0 )
      *(uint8_t *)(v36 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v40 = *(char **)(a2 + 192);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v40);
  v41 = *(char **)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 0;
  sub_1901920(v7, v41);
  g4_std_compat::ostream_write(a2 + 12, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v8 != v48 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    g4_std_compat::ostream_write(a2 + 12, "\"", 1);
    g4_std_compat::ostream_write(a2 + 12, "type", 4);
    g4_std_compat::ostream_write(a2 + 12, "\":\"", 3);
    g4_std_compat::ostream_write(a2 + 12, "VXN", 3);
    g4_std_compat::ostream_write(a2 + 12, "\"", 1);
  }
LABEL_12:
  if ( (a4 & 2) == 0 )
    goto LABEL_13;
  v19 = "MSADPCM";
  v20 = *((uint16_t *)a1[8] + 16);
  if ( v20 != 2 )
  {
    v19 = "IMAADPCM";
    if ( v20 != 17 )
    {
      v19 = "Unsupported";
      if ( v20 == 1 )
        v19 = "PCM";
    }
  }
  v21 = *(uint8_t **)(a2 + 192);
  if ( v48 == v21 )
  {
LABEL_13:
    if ( (a4 & 4) == 0 )
      goto LABEL_14;
  }
  else
  {
    if ( v21[8] != 0 )
    {
      v21[8] = 0;
      v22 = a2 + 12;
    }
    else
    {
      v47 = (char *)v19;
      v22 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
      v19 = v47;
    }
    s = (char *)v19;
    g4_std_compat::ostream_write(v22, "\"", 1);
    g4_std_compat::ostream_write(v22, "compression", 11);
    g4_std_compat::ostream_write(v22, "\":\"", 3);
    v23 = strlen(s);
    g4_std_compat::ostream_write(v22, s, v23);
    g4_std_compat::ostream_write(v22, "\"", 1);
    if ( (a4 & 4) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) == 0 )
        goto LABEL_15;
      goto LABEL_40;
    }
  }
  v24 = (char *)a1[8];
  v25 = *(uint8_t **)(a2 + 192);
  if ( v48 == v25 )
    goto LABEL_14;
  if ( v25[8] != 0 )
  {
    v25[8] = 0;
    v26 = a2 + 12;
  }
  else
  {
    v46 = (char *)a1[8];
    v26 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
    v24 = v46;
  }
  v43 = (char *)*((int16_t *)v24 + 17);
  g4_std_compat::ostream_write(v26, "\"", 1);
  g4_std_compat::ostream_write(v26, "channel", 7);
  g4_std_compat::ostream_write(v26, "\":", 2);
  sub_192D860(v26, v43);
  if ( (a4 & 8) == 0 )
  {
LABEL_15:
    if ( (a4 & 0x10) == 0 )
      goto LABEL_16;
    goto LABEL_44;
  }
LABEL_40:
  v27 = (char *)a1[8];
  v28 = *(uint8_t **)(a2 + 192);
  if ( v48 == v28 )
    goto LABEL_15;
  if ( v28[8] != 0 )
  {
    v28[8] = 0;
    v29 = a2 + 12;
  }
  else
  {
    v45 = (char *)a1[8];
    v29 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
    v27 = v45;
  }
  v44 = *((char **)v27 + 9);
  g4_std_compat::ostream_write(v29, "\"", 1);
  g4_std_compat::ostream_write(v29, "sample_rate", 11);
  g4_std_compat::ostream_write(v29, "\":", 2);
  g4_std::ostream::op_shl_int(v29, v44);
  if ( (a4 & 0x10) == 0 )
  {
LABEL_16:
    if ( (a4 & 0x20) != 0 )
      goto LABEL_48;
    goto LABEL_17;
  }
LABEL_44:
  v30 = *(uint8_t **)(a2 + 192);
  if ( v48 == v30 )
    goto LABEL_16;
  if ( v30[8] != 0 )
  {
    v30[8] = 0;
    v31 = a2 + 12;
  }
  else
  {
    v31 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  g4_std_compat::ostream_write(v31, "\"", 1);
  g4_std_compat::ostream_write(v31, "sample_count", 12);
  g4_std_compat::ostream_write(v31, "\":", 2);
  g4_std::ostream::op_shl_int(v31, -1);
  if ( (a4 & 0x20) != 0 )
  {
LABEL_48:
    v32 = *(uint8_t **)(a2 + 192);
    v33 = a1[8];
    if ( v48 != v32 )
    {
      if ( v32[8] != 0 )
      {
        v32[8] = 0;
        v34 = a2 + 12;
      }
      else
      {
        v34 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
      }
      v35 = *((int16_t *)v33 + 21);
      g4_std_compat::ostream_write(v34, "\"", 1);
      g4_std_compat::ostream_write(v34, "bit_per_sample", 14);
      g4_std_compat::ostream_write(v34, "\":", 2);
      sub_192D860(v34, v35);
    }
  }
LABEL_17:
  if ( a1[19] != nullptr && a1[14] != nullptr )
  {
    CurrentState = vox::VoxNativeSubDecoder::GetCurrentState(a1[19]);
    v10 = a1[14];
    v11 = *((char **)v10 + 3);
    v12 = (char *)v10 + 4;
    if ( v11 != (char *)v10 + 4 )
    {
      if ( CurrentState == *((uint32_t *)v11 + 5) )
      {
LABEL_57:
        v37 = *(uint8_t **)(a2 + 192);
        if ( v48 == v37 )
          return 0;
        if ( v37[8] != 0 )
        {
          v37[8] = 0;
          v38 = a2 + 12;
        }
        else
        {
          v38 = a2 + 12;
          g4_std_compat::ostream_write(a2 + 12, ",", 1);
        }
        g4_std_compat::ostream_write(v38, "\"", 1);
        g4_std_compat::ostream_write(v38, "state", 5);
        g4_std_compat::ostream_write(v38, "\":\"", 3);
        v39 = (int)(uintptr_t)(g4_std_compat::ostream_write(v38, *((uint32_t *)v11 + 4), *(uint32_t *)(*((uint32_t *)v11 + 4) - 12)));
        g4_std_compat::ostream_write(v39, "\"", 1);
      }
      else
      {
        v13 = *((char **)v10 + 3);
        v14 = CurrentState;
        v15 = v12;
        while ( 1 )
        {
          v13 = (char *)sub_19048E0(v13);
          if ( v15 == v13 )
            break;
          if ( v14 == *((uint32_t *)v13 + 5) )
          {
            v11 = v13;
            goto LABEL_57;
          }
        }
      }
    }
  }
  v16 = *(uint8_t **)(a2 + 192);
  v4 = 0;
  if ( v16 != v48 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(*(uint32_t *)(a2 + 192));
    opDelete(v16);
    v17 = *(void **)(a2 + 200);
    sub_1901940(v17);
    opDelete(v17);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::IsStateChangeValid  (binary VA: 0xfece10)
// Original: vox::DecoderNativeCursor::IsStateChangeValid
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::IsStateChangeValid(vox::VoxNativeSubDecoder::Self **self, char *s)
{
  int v2;
  size_t v4;
  size_t n;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  size_t v12;
  size_t v13;
  size_t v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  vox::DecoderNativeCursor::Self *v21;
  int CurrentState;
  int v23;
  uint8_t *dest;
  int v25;
  int v26;

  v2 = 0;
  if ( (uint8_t)vox::DecoderNativeCursor::IsInError(self) != 0 )
    return v2;
  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v4 = strlen(s);
  if ( s != &s[v4] )
  {
    n = v4;
    if ( v4 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    if ( v4 + 29 > 0x1000 && v4 != 0 )
    {
      v6 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v7 = 1073741820;
      if ( v6 <= 0x3FFFFFFC )
        v7 = v6;
      v23 = v7;
      v8 = VoxAllocInternal(v7 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v8 + 4) = v23;
      *(uint32_t *)(v8 + 8) = 0;
      dest = (uint8_t *)(v8 + 12);
    }
    else
    {
      v8 = VoxAllocInternal(v4 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v8 + 4) = n;
      *(uint32_t *)(v8 + 8) = 0;
      dest = (uint8_t *)(v8 + 12);
      if ( n == 1 )
      {
        *(uint8_t *)(v8 + 12) = *s;
LABEL_12:
        if ( (void *)v8 != (void *)g4_empty_string_rep )
        {
          *(uint32_t *)(v8 + 8) = 0;
          *(uint32_t *)v8 = n;
          dest[n] = 0;
        }
        goto LABEL_14;
      }
    }
    memcpy(dest, s, n);
    goto LABEL_12;
  }
  dest = (uint8_t *)(&unk_20E1FB4);
LABEL_14:
  v9 = -1;
  v10 = (int)(uintptr_t)(*(self + 14));
  v11 = *(uint32_t *)(v10 + 8);
  if ( v11 != 0 )
  {
    v26 = v10 + 4;
    v25 = v10 + 4;
    v12 = *((uint32_t *)dest - 3);
    do
    {
      while ( 1 )
      {
        v13 = v12;
        v14 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        if ( v14 <= v12 )
          v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v15 = v14 - v12;
        v16 = memcmp(*(const void **)(v11 + 16), dest, v13);
        if ( v16 == 0 )
          v16 = v15;
        if ( v16 < 0 )
          break;
        v25 = v11;
        v11 = *(uint32_t *)(v11 + 8);
        if ( v11 == 0 )
          goto LABEL_23;
      }
      v11 = *(uint32_t *)(v11 + 12);
    }
    while ( v11 != 0 );
LABEL_23:
    if ( v26 == v25 )
    {
      v9 = -1;
    }
    else
    {
      v17 = v12;
      v9 = -1;
      v18 = *(uint32_t *)(*(uint32_t *)(v25 + 16) - 12);
      if ( v18 <= v12 )
        v17 = *(uint32_t *)(*(uint32_t *)(v25 + 16) - 12);
      v19 = v12 - v18;
      v20 = memcmp(dest, *(const void **)(v25 + 16), v17);
      if ( v20 == 0 )
        v20 = v19;
      if ( v20 >= 0 )
        v9 = *(uint32_t *)(v25 + 20);
    }
  }
  vox::Mutex::Lock((vox::Mutex::Self *)(self + 28));
  v21 = (vox::DecoderNativeCursor::Self *)(*(self + 17));
  if ( self + 17 == (vox::VoxNativeSubDecoder::Self **)v21 )
  {
    CurrentState = vox::VoxNativeSubDecoder::GetCurrentState(*(self + 19));
  }
  else
  {
    do
      v21 = *(vox::DecoderNativeCursor::Self **)v21;
    while ( self + 17 != (vox::VoxNativeSubDecoder::Self **)v21 );
    CurrentState = *((uint32_t *)*(self + 18) + 2);
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(self + 28));
  v2 = vox::VoxNativeSubDecoder::IsStateChangeValid(*(self + 19), CurrentState, v9);
  if ( dest - 12 != (uint8_t *)(void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(dest - 12);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::SetImplicitSegmentCues  (binary VA: 0xfed120)
// Original: vox::DecoderNativeCursor::SetImplicitSegmentCues
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::SetImplicitSegmentCues(int **self)
{
  vox::DecoderNativeCursor::Self *v1;
  int v2;
  int v3;
  size_t v4;
  size_t *v5;
  char *v6;
  int v7;
  size_t v8;
  int v9;
  unsigned int v10;
  int *v11;
  char *v12;
  uint32_t *v13;
  char *v14;
  uint32_t *v15;
  int v16;
  unsigned int v17;
  size_t *v18;
  char *v19;
  uint32_t *v20;
  char *v21;
  uint32_t *v22;
  char *v23;
  uint32_t *v24;
  char *v25;
  uint32_t *v26;
  vox::VoxThread::Self *v27;
  vox::DecoderNativeCursor::Self *v28;
  vox::DecoderNativeCursor::Self *v29;
  vox::DecoderNativeCursor::Self *v30;
  int v31;
  int v32;
  size_t v33;
  int v34;
  uint8_t *v35;
  size_t v36;
  size_t v37;
  size_t v38;
  size_t v39;
  size_t v40;
  int v41;
  size_t v42;
  int v43;
  unsigned int v44;
  uint8_t *v45;
  char *v46;
  unsigned int v47;
  int v48;
  int v49;
  unsigned int v50;
  size_t *v51;
  size_t *v52;

  vox::VoxThread::GetCurThreadId(v27);
  sub_BA06A0();
  v1 = (vox::DecoderNativeCursor::Self *)self;
  v32 = **(self + 9);
  if ( v32 > 0 )
  {
    v2 = 0;
    v31 = 0;
    while ( 1 )
    {
      v5 = (size_t *)(**((uint32_t **)v1 + 13) + v2);
      v6 = (char *)v5[1];
      v7 = (int)(uintptr_t)(&v6[-*v5]) >> 2;
      if ( v7 == 1 )
        break;
      if ( v7 <= 2 )
        goto LABEL_11;
      v3 = 2 * v2;
LABEL_4:
      v49 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 9) + 4) + v3 + 8) - 1;
      if ( v6 == (char *)v5[2] )
      {
        v9 = (int)(uintptr_t)(&v6[-*v5]) >> 2;
        v34 = 4;
        v38 = v9;
        if ( v9 != 0 )
        {
          v10 = 2 * v9;
          if ( v38 > v10 || v10 > 0x3FFFFFFF )
            v34 = -4;
          else
            v34 = 8 * v38;
        }
        v28 = v1;
        v43 = VoxAllocInternal(v34, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v47 = v43 + 4;
        v1 = v28;
        v11 = (int *)(v43 + 4 * v38);
        if ( v11 != nullptr )
          *v11 = v49;
        v12 = (char *)*v5;
        v39 = *v5;
        if ( v6 != (char *)*v5 )
        {
          v13 = (uint32_t *)v43;
          do
          {
            if ( v13 != nullptr )
              *v13 = *(uint32_t *)v12;
            v12 += 4;
            ++v13;
          }
          while ( v6 != v12 );
          v47 = v43 + 4 * ((unsigned int)(uintptr_t)(&v6[-v39 - 4]) >> 2) + 8;
        }
        v40 = v5[1];
        if ( v6 != (char *)v40 )
        {
          v14 = v6;
          v15 = (uint32_t *)v47;
          do
          {
            if ( v15 != nullptr )
              *v15 = *(uint32_t *)v14;
            v14 += 4;
            ++v15;
          }
          while ( (char *)v40 != v14 );
          v47 += 4 * ((v40 - (unsigned int)(uintptr_t)(v6 + 4)) >> 2) + 4;
        }
        if ( *v5 != 0 )
        {
          VoxFreeInternal((void *)*v5);
          v1 = v28;
        }
        *v5 = v43;
        v5[1] = v47;
        v5[2] = v34 + v43;
      }
      else
      {
        v4 = 0;
        if ( v6 != nullptr )
        {
          *(uint32_t *)v6 = v49;
          v4 = v5[1];
        }
        v5[1] = v4 + 4;
      }
      ++v31;
      v2 += 12;
      if ( v31 == v32 )
        goto LABEL_41;
    }
    if ( v6 == (char *)v5[2] )
    {
      v30 = v1;
      v37 = VoxAllocInternal(8u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v42 = v37 + 4;
      v1 = v30;
      if ( v37 != -4 )
        *(uint32_t *)(v37 + 4) = 0;
      v45 = (uint8_t *)*v5;
      if ( v6 != (char *)*v5 )
      {
        v23 = (char *)*v5;
        v24 = (uint32_t *)v37;
        do
        {
          if ( v24 != nullptr )
            *v24 = *(uint32_t *)v23;
          v23 += 4;
          ++v24;
        }
        while ( v6 != v23 );
        v42 = v37 + 4 * ((unsigned int)(v6 - (char *)((v45 + 4))) >> 2) + 8;
      }
      v46 = (char *)v5[1];
      if ( v6 != v46 )
      {
        v25 = v6;
        v26 = (uint32_t *)v42;
        do
        {
          if ( v26 != nullptr )
            *v26 = *(uint32_t *)v25;
          v25 += 4;
          ++v26;
        }
        while ( v46 != v25 );
        v42 += 4 * ((unsigned int)(v46 - (v6 + 4)) >> 2) + 4;
      }
      if ( *v5 != 0 )
      {
        VoxFreeInternal((void *)*v5);
        v1 = v30;
      }
      *v5 = v37;
      v5[1] = v42;
      v5[2] = v37 + 8;
    }
    else
    {
      LOBYTE(v7) = 0;
      if ( v6 != nullptr )
      {
        *(uint32_t *)v6 = 0;
        v7 = v5[1];
      }
      v5[1] = v7 + 4;
    }
    v5 = (size_t *)(**((uint32_t **)v1 + 13) + v2);
    v6 = (char *)v5[1];
LABEL_11:
    v33 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 9) + 4) + 2 * v2 + 8) - 1;
    if ( v6 == (char *)v5[2] )
    {
      v16 = (int)(uintptr_t)(&v6[-*v5]) >> 2;
      v41 = 4;
      v44 = v16;
      if ( v16 != 0 )
      {
        v17 = 2 * v16;
        if ( v44 > v17 || v17 > 0x3FFFFFFF )
          v41 = -4;
        else
          v41 = 8 * v44;
      }
      v29 = v1;
      v48 = VoxAllocInternal(v41, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v50 = v48 + 4;
      v1 = v29;
      v18 = (size_t *)(v48 + 4 * v44);
      if ( v18 != nullptr )
        *v18 = v33;
      v35 = (uint8_t *)*v5;
      if ( v6 != (char *)*v5 )
      {
        v19 = (char *)*v5;
        v51 = v5;
        v20 = (uint32_t *)v48;
        do
        {
          if ( v20 != nullptr )
            *v20 = *(uint32_t *)v19;
          v19 += 4;
          ++v20;
        }
        while ( v6 != v19 );
        v5 = v51;
        v50 = v48 + 4 * ((unsigned int)(v6 - (char *)((v35 + 4))) >> 2) + 8;
      }
      v36 = v5[1];
      if ( v6 != (char *)v36 )
      {
        v52 = v5;
        v21 = v6;
        v22 = (uint32_t *)v50;
        do
        {
          if ( v22 != nullptr )
            *v22 = *(uint32_t *)v21;
          v21 += 4;
          ++v22;
        }
        while ( (char *)v36 != v21 );
        v5 = v52;
        v50 += 4 * ((v36 - (unsigned int)(uintptr_t)(v6 + 4)) >> 2) + 4;
      }
      if ( *v5 != 0 )
      {
        VoxFreeInternal((void *)*v5);
        v1 = v29;
      }
      *v5 = v48;
      v5[1] = v50;
      v5[2] = v41 + v48;
    }
    else
    {
      v8 = 0;
      if ( v6 != nullptr )
      {
        *(uint32_t *)v6 = v33;
        v8 = v5[1];
      }
      v5[1] = v8 + 4;
    }
    v3 = 2 * v2;
    v5 = (size_t *)(**((uint32_t **)v1 + 13) + v2);
    v6 = (char *)v5[1];
    goto LABEL_4;
  }
LABEL_41:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::SetInteractiveMusicState  (binary VA: 0xfed6c0)
// Original: vox::DecoderNativeCursor::SetInteractiveMusicState
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::SetInteractiveMusicState(vox::VoxNativeSubDecoder::Self **self, char *src)
{
  size_t v2;
  size_t n;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *s;
  int v21;
  uint8_t *dest;
  int v23;
  vox::Mutex::Self *v24;
  int v25;

  vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s);
  sub_BA06A0();
  v24 = (vox::Mutex::Self *)(self + 28);
  vox::Mutex::Lock((vox::Mutex::Self *)(self + 28));
  if ( (uint8_t)vox::DecoderNativeCursor::IsInError(self) != 0 )
  {
    vox::Mutex::Unlock(v24);
    goto LABEL_32;
  }
  if ( src == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v2 = strlen(src);
  if ( src != &src[v2] )
  {
    n = v2;
    if ( v2 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    if ( v2 + 29 > 0x1000 && v2 != 0 )
    {
      v4 = v2 + 4096 - (((uint16_t)v2 + 29) & 0xFFF);
      v5 = 1073741820;
      if ( v4 <= 0x3FFFFFFC )
        v5 = v4;
      v21 = v5;
      v6 = VoxAllocInternal(v5 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v6 + 4) = v21;
      *(uint32_t *)(v6 + 8) = 0;
      dest = (uint8_t *)(v6 + 12);
    }
    else
    {
      v6 = VoxAllocInternal(v2 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v6 + 4) = n;
      *(uint32_t *)(v6 + 8) = 0;
      dest = (uint8_t *)(v6 + 12);
      if ( n == 1 )
      {
        *(uint8_t *)(v6 + 12) = *src;
LABEL_11:
        if ( (void *)v6 != (void *)g4_empty_string_rep )
        {
          *(uint32_t *)(v6 + 8) = 0;
          *(uint32_t *)v6 = n;
          dest[n] = 0;
        }
        goto LABEL_13;
      }
    }
    memcpy(dest, src, n);
    goto LABEL_11;
  }
  dest = (uint8_t *)(&unk_20E1FB4);
LABEL_13:
  v7 = (int)(uintptr_t)(*(self + 14));
  v8 = *(uint32_t *)(v7 + 8);
  if ( v8 != 0 )
  {
    v25 = v7 + 4;
    v23 = v7 + 4;
    v9 = *((uint32_t *)dest - 3);
    do
    {
      while ( 1 )
      {
        v10 = v9;
        v11 = *(uint32_t *)(*(uint32_t *)(v8 + 16) - 12);
        if ( v11 <= v9 )
          v10 = *(uint32_t *)(*(uint32_t *)(v8 + 16) - 12);
        v12 = v11 - v9;
        v13 = memcmp(*(const void **)(v8 + 16), dest, v10);
        if ( v13 == 0 )
          v13 = v12;
        if ( v13 < 0 )
          break;
        v23 = v8;
        v8 = *(uint32_t *)(v8 + 8);
        if ( v8 == 0 )
          goto LABEL_22;
      }
      v8 = *(uint32_t *)(v8 + 12);
    }
    while ( v8 != 0 );
LABEL_22:
    if ( v23 != v25 )
    {
      v14 = v9;
      v15 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
      if ( v15 <= v9 )
        v14 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
      v16 = v9 - v15;
      v17 = memcmp(dest, *(const void **)(v23 + 16), v14);
      if ( v17 == 0 )
        v17 = v16;
      if ( v17 >= 0 )
      {
        v18 = (int)(uintptr_t)(*(self + 17));
        v19 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v19 != -8 )
          *(uint32_t *)(v19 + 8) = *(uint32_t *)(v23 + 20);
        sub_1901920(v19, v18);
      }
    }
  }
  vox::Mutex::Unlock(v24);
  if ( dest - 12 != (uint8_t *)(void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(dest - 12);
  }
LABEL_32:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::ParseFile  (binary VA: 0xfedb60)
// Original: vox::DecoderNativeCursor::ParseFile
// ----------------------------------------------------------------------------
int vox::DecoderNativeCursor::ParseFile(vox::DecoderNativeCursor::Self *self)
{
  int v1;
  int v2;
  int v4;
  signed int v5;
  int v6;
  size_t v7;
  signed int v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int *v19;
  char *v20;
  uint32_t *v21;
  char *v22;
  uint32_t *v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  char *v36;
  unsigned int v37;
  int v38;
  uint32_t *v39;
  char *v40;
  uint32_t *v41;
  char *v42;
  uint32_t *v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  uint32_t *v48;
  char *v49;
  uint32_t *v50;
  char *v51;
  uint32_t *v52;
  size_t v53;
  int v54;
  char *v55;
  int v56;
  int v57;
  int v58;
  size_t v59;
  int v60;
  vox::DecoderNative::Self *v61;
  size_t v62;
  unsigned int v63;
  int *v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  int v70;
  size_t v71;
  int *v72;
  char *v73;
  int *v74;
  size_t v75;
  size_t v76;
  size_t v77;
  size_t v78;
  int v79;
  int v80;
  size_t v81;
  size_t v82;
  int v83;
  int v84;
  int *v85;
  int *v86;
  int *v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  int v92;
  size_t v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  uint16_t *v101;
  int v102;
  int v103;
  int v104;
  char *v105;
  int16_t v106; // di
  int v107;
  bool v108; // cc
  size_t v109;
  int v110;
  int v111;
  size_t v112;
  typedef vox::VoxThread::Self *_g4_t_v113;
  typedef void *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef void *_g4_t_v116;
  typedef void *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef void *_g4_t_v120;
  typedef unsigned int _g4_t_v121;
  typedef size_t _g4_t_v122;
  typedef unsigned int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef void *_g4_t_v129;
  typedef char *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef void *_g4_t_v133;
  typedef signed int _g4_t_v134;
  typedef void *_g4_t_v135;
  typedef size_t _g4_t_v136;
  typedef unsigned int _g4_t_v137;
  typedef char *_g4_t_v138;
  typedef char *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef uint32_t *_g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef vox::NativePlaylistsManager::Self *_g4_t_v143;
  typedef unsigned int _g4_t_v144;
  typedef unsigned int _g4_t_v145;
  typedef char *_g4_t_v146;
  typedef char *_g4_t_v147;
  typedef unsigned int _g4_t_v148;
  typedef char *_g4_t_v149;
  typedef char *_g4_t_v150;
  typedef char *_g4_t_v151;
  typedef char *_g4_t_v152;
  typedef uint8_t *_g4_t_v153;
  typedef uint32_t *_g4_t_v154;
  typedef uint8_t *_g4_t_v155;
  typedef int _g4_t_CurThreadId;
  typedef size_t _g4_t_v157;
  typedef size_t _g4_t_v158;
  typedef size_t _g4_t_v159;
  typedef signed int _g4_t_v160;
  typedef size_t _g4_t_v161;
  typedef signed int _g4_t_dest;
  typedef char *_g4_t_v163;
  typedef vox::DecoderNativeCursor::Self *_g4_t_v164;
  typedef signed int _g4_t_v165;
  typedef signed int _g4_t_v166;
  typedef signed int _g4_t_v167;
  typedef unsigned int _g4_t_v168;
  typedef signed int _g4_t_v169;
  typedef signed int _g4_t_v170;
  typedef size_t _g4_t_v171;
  typedef int16_t _g4_t_v172;
  typedef size_t _g4_t_v173;
  typedef size_t _g4_t_v174;
  typedef size_t _g4_t_v175;
  typedef int16_t _g4_t_v176;
  typedef char *_g4_t_v177;
  typedef signed int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef char *_g4_t_v181;
  typedef char *_g4_t_v182;
  typedef unsigned int _g4_t_n;
  typedef size_t _g4_t_na;
  typedef unsigned int _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef unsigned int _g4_t_ne;
  typedef size_t _g4_t_nf;
  typedef int *_g4_t_ng;
  typedef char *_g4_t_v191;
  typedef char *_g4_t_v192;
  typedef size_t _g4_t_v193;
  typedef int _g4_t_v194;
  typedef size_t _g4_t_v195;
  typedef int *_g4_t_v196;
  typedef int _g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef vox::DecoderNativeCursor::Self **_g4_t_v202;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v113)) > _g4_s0 ? (8u + sizeof(_g4_t_v113)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v114)) > _g4_s1 ? (8u + sizeof(_g4_t_v114)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v115)) > _g4_s2 ? (48u + sizeof(_g4_t_v115)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v116)) > _g4_s3 ? (48u + sizeof(_g4_t_v116)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v117)) > _g4_s4 ? (48u + sizeof(_g4_t_v117)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v118)) > _g4_s5 ? (48u + sizeof(_g4_t_v118)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v119)) > _g4_s6 ? (48u + sizeof(_g4_t_v119)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v120)) > _g4_s7 ? (48u + sizeof(_g4_t_v120)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v121)) > _g4_s8 ? (48u + sizeof(_g4_t_v121)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v122)) > _g4_s9 ? (48u + sizeof(_g4_t_v122)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v123)) > _g4_s10 ? (48u + sizeof(_g4_t_v123)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v124)) > _g4_s11 ? (48u + sizeof(_g4_t_v124)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v125)) > _g4_s12 ? (48u + sizeof(_g4_t_v125)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v126)) > _g4_s13 ? (48u + sizeof(_g4_t_v126)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v127)) > _g4_s14 ? (48u + sizeof(_g4_t_v127)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v128)) > _g4_s15 ? (48u + sizeof(_g4_t_v128)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v129)) > _g4_s16 ? (56u + sizeof(_g4_t_v129)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v130)) > _g4_s17 ? (56u + sizeof(_g4_t_v130)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v131)) > _g4_s18 ? (68u + sizeof(_g4_t_v131)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v132)) > _g4_s19 ? (72u + sizeof(_g4_t_v132)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v133)) > _g4_s20 ? (76u + sizeof(_g4_t_v133)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v134)) > _g4_s21 ? (80u + sizeof(_g4_t_v134)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v135)) > _g4_s22 ? (84u + sizeof(_g4_t_v135)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v136)) > _g4_s23 ? (88u + sizeof(_g4_t_v136)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v137)) > _g4_s24 ? (88u + sizeof(_g4_t_v137)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v138)) > _g4_s25 ? (92u + sizeof(_g4_t_v138)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v139)) > _g4_s26 ? (92u + sizeof(_g4_t_v139)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v140)) > _g4_s27 ? (96u + sizeof(_g4_t_v140)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v141)) > _g4_s28 ? (96u + sizeof(_g4_t_v141)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v142)) > _g4_s29 ? (96u + sizeof(_g4_t_v142)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v143)) > _g4_s30 ? (100u + sizeof(_g4_t_v143)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v144)) > _g4_s31 ? (104u + sizeof(_g4_t_v144)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v145)) > _g4_s32 ? (104u + sizeof(_g4_t_v145)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v146)) > _g4_s33 ? (104u + sizeof(_g4_t_v146)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v147)) > _g4_s34 ? (104u + sizeof(_g4_t_v147)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v148)) > _g4_s35 ? (104u + sizeof(_g4_t_v148)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v149)) > _g4_s36 ? (104u + sizeof(_g4_t_v149)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v150)) > _g4_s37 ? (104u + sizeof(_g4_t_v150)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v151)) > _g4_s38 ? (104u + sizeof(_g4_t_v151)) : _g4_s38,
    _g4_s40 = (104u + sizeof(_g4_t_v152)) > _g4_s39 ? (104u + sizeof(_g4_t_v152)) : _g4_s39,
    _g4_s41 = (104u + sizeof(_g4_t_v153)) > _g4_s40 ? (104u + sizeof(_g4_t_v153)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v154)) > _g4_s41 ? (104u + sizeof(_g4_t_v154)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v155)) > _g4_s42 ? (104u + sizeof(_g4_t_v155)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_CurThreadId)) > _g4_s43 ? (112u + sizeof(_g4_t_CurThreadId)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v157)) > _g4_s44 ? (116u + sizeof(_g4_t_v157)) : _g4_s44,
    _g4_s46 = (116u + sizeof(_g4_t_v158)) > _g4_s45 ? (116u + sizeof(_g4_t_v158)) : _g4_s45,
    _g4_s47 = (116u + sizeof(_g4_t_v159)) > _g4_s46 ? (116u + sizeof(_g4_t_v159)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v160)) > _g4_s47 ? (116u + sizeof(_g4_t_v160)) : _g4_s47,
    _g4_s49 = (116u + sizeof(_g4_t_v161)) > _g4_s48 ? (116u + sizeof(_g4_t_v161)) : _g4_s48,
    _g4_s50 = (120u + sizeof(_g4_t_dest)) > _g4_s49 ? (120u + sizeof(_g4_t_dest)) : _g4_s49,
    _g4_s51 = (124u + sizeof(_g4_t_v163)) > _g4_s50 ? (124u + sizeof(_g4_t_v163)) : _g4_s50,
    _g4_s52 = (128u + sizeof(_g4_t_v164)) > _g4_s51 ? (128u + sizeof(_g4_t_v164)) : _g4_s51,
    _g4_s53 = (132u + sizeof(_g4_t_v165)) > _g4_s52 ? (132u + sizeof(_g4_t_v165)) : _g4_s52,
    _g4_s54 = (132u + sizeof(_g4_t_v166)) > _g4_s53 ? (132u + sizeof(_g4_t_v166)) : _g4_s53,
    _g4_s55 = (132u + sizeof(_g4_t_v167)) > _g4_s54 ? (132u + sizeof(_g4_t_v167)) : _g4_s54,
    _g4_s56 = (132u + sizeof(_g4_t_v168)) > _g4_s55 ? (132u + sizeof(_g4_t_v168)) : _g4_s55,
    _g4_s57 = (132u + sizeof(_g4_t_v169)) > _g4_s56 ? (132u + sizeof(_g4_t_v169)) : _g4_s56,
    _g4_s58 = (132u + sizeof(_g4_t_v170)) > _g4_s57 ? (132u + sizeof(_g4_t_v170)) : _g4_s57,
    _g4_s59 = (132u + sizeof(_g4_t_v171)) > _g4_s58 ? (132u + sizeof(_g4_t_v171)) : _g4_s58,
    _g4_s60 = (132u + sizeof(_g4_t_v172)) > _g4_s59 ? (132u + sizeof(_g4_t_v172)) : _g4_s59,
    _g4_s61 = (132u + sizeof(_g4_t_v173)) > _g4_s60 ? (132u + sizeof(_g4_t_v173)) : _g4_s60,
    _g4_s62 = (132u + sizeof(_g4_t_v174)) > _g4_s61 ? (132u + sizeof(_g4_t_v174)) : _g4_s61,
    _g4_s63 = (132u + sizeof(_g4_t_v175)) > _g4_s62 ? (132u + sizeof(_g4_t_v175)) : _g4_s62,
    _g4_s64 = (132u + sizeof(_g4_t_v176)) > _g4_s63 ? (132u + sizeof(_g4_t_v176)) : _g4_s63,
    _g4_s65 = (132u + sizeof(_g4_t_v177)) > _g4_s64 ? (132u + sizeof(_g4_t_v177)) : _g4_s64,
    _g4_s66 = (136u + sizeof(_g4_t_v178)) > _g4_s65 ? (136u + sizeof(_g4_t_v178)) : _g4_s65,
    _g4_s67 = (136u + sizeof(_g4_t_v179)) > _g4_s66 ? (136u + sizeof(_g4_t_v179)) : _g4_s66,
    _g4_s68 = (136u + sizeof(_g4_t_v180)) > _g4_s67 ? (136u + sizeof(_g4_t_v180)) : _g4_s67,
    _g4_s69 = (136u + sizeof(_g4_t_v181)) > _g4_s68 ? (136u + sizeof(_g4_t_v181)) : _g4_s68,
    _g4_s70 = (136u + sizeof(_g4_t_v182)) > _g4_s69 ? (136u + sizeof(_g4_t_v182)) : _g4_s69,
    _g4_s71 = (140u + sizeof(_g4_t_n)) > _g4_s70 ? (140u + sizeof(_g4_t_n)) : _g4_s70,
    _g4_s72 = (140u + sizeof(_g4_t_na)) > _g4_s71 ? (140u + sizeof(_g4_t_na)) : _g4_s71,
    _g4_s73 = (140u + sizeof(_g4_t_nb)) > _g4_s72 ? (140u + sizeof(_g4_t_nb)) : _g4_s72,
    _g4_s74 = (140u + sizeof(_g4_t_nc)) > _g4_s73 ? (140u + sizeof(_g4_t_nc)) : _g4_s73,
    _g4_s75 = (140u + sizeof(_g4_t_nd)) > _g4_s74 ? (140u + sizeof(_g4_t_nd)) : _g4_s74,
    _g4_s76 = (140u + sizeof(_g4_t_ne)) > _g4_s75 ? (140u + sizeof(_g4_t_ne)) : _g4_s75,
    _g4_s77 = (140u + sizeof(_g4_t_nf)) > _g4_s76 ? (140u + sizeof(_g4_t_nf)) : _g4_s76,
    _g4_s78 = (140u + sizeof(_g4_t_ng)) > _g4_s77 ? (140u + sizeof(_g4_t_ng)) : _g4_s77,
    _g4_s79 = (144u + sizeof(_g4_t_v191)) > _g4_s78 ? (144u + sizeof(_g4_t_v191)) : _g4_s78,
    _g4_s80 = (144u + sizeof(_g4_t_v192)) > _g4_s79 ? (144u + sizeof(_g4_t_v192)) : _g4_s79,
    _g4_s81 = (148u + sizeof(_g4_t_v193)) > _g4_s80 ? (148u + sizeof(_g4_t_v193)) : _g4_s80,
    _g4_s82 = (152u + sizeof(_g4_t_v194)) > _g4_s81 ? (152u + sizeof(_g4_t_v194)) : _g4_s81,
    _g4_s83 = (156u + sizeof(_g4_t_v195)) > _g4_s82 ? (156u + sizeof(_g4_t_v195)) : _g4_s82,
    _g4_s84 = (160u + sizeof(_g4_t_v196)) > _g4_s83 ? (160u + sizeof(_g4_t_v196)) : _g4_s83,
    _g4_s85 = (164u + sizeof(_g4_t_v197)) > _g4_s84 ? (164u + sizeof(_g4_t_v197)) : _g4_s84,
    _g4_s86 = (168u + sizeof(_g4_t_v198)) > _g4_s85 ? (168u + sizeof(_g4_t_v198)) : _g4_s85,
    _g4_s87 = (172u + sizeof(_g4_t_v199)) > _g4_s86 ? (172u + sizeof(_g4_t_v199)) : _g4_s86,
    _g4_s88 = (176u + sizeof(_g4_t_v200)) > _g4_s87 ? (176u + sizeof(_g4_t_v200)) : _g4_s87,
    _g4_s89 = (180u + sizeof(_g4_t_v201)) > _g4_s88 ? (180u + sizeof(_g4_t_v201)) : _g4_s88,
    _g4_s90 = (208u + sizeof(_g4_t_v202)) > _g4_s89 ? (208u + sizeof(_g4_t_v202)) : _g4_s89
  };
  alignas(16) uint8_t _g4_sf[_g4_s90];
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 8u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 8u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 48u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 48u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 48u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 48u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 48u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 48u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 48u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 48u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 48u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 48u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 48u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 48u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 56u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 56u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 68u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 72u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 76u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 80u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 84u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 88u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 88u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 92u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 92u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 96u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 96u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 96u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 100u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 104u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 104u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 104u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 104u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 104u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 104u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 104u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 104u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 104u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 104u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 104u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 104u);
  _g4_t_CurThreadId &CurThreadId = *reinterpret_cast<_g4_t_CurThreadId *>(_g4_sf + 112u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 116u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 116u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 116u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 116u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 116u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 120u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 124u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 128u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 132u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 132u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 132u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 132u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 132u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 132u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 132u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 132u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 132u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 132u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 132u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 132u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 132u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 136u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 136u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 136u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 136u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 136u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 140u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 140u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 140u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 140u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 140u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 140u);
  _g4_t_nf &nf = *reinterpret_cast<_g4_t_nf *>(_g4_sf + 140u);
  _g4_t_ng &ng = *reinterpret_cast<_g4_t_ng *>(_g4_sf + 140u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 144u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 144u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 148u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 152u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 156u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 160u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 164u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 168u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 172u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 176u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 180u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 208u);

  v202 = &self;
  v164 = self;
  CurThreadId = vox::VoxThread::GetCurThreadId(v113);
  sub_BA06A0();
  v1 = *((uint32_t *)v164 + 6);
  if ( v1 == 0 )
  {
LABEL_62:
    v2 = 0;
    goto LABEL_5;
  }
  if ( (*(int (**)(uint32_t, int))(*(uint32_t *)v1 + 24))(*((uint32_t *)v164 + 6), CurThreadId) != 0 )
    (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)v164 + 6) + 16))(*((uint32_t *)v164 + 6), 0, 0);
  v2 = 0;
  if ( (*(int (**)(uint32_t, int *, int))(**((uint32_t **)v164 + 6) + 28))(*((uint32_t *)v164 + 6), &v194, 8) != 8 )
    goto LABEL_5;
  if ( v194 != 1316515670 )
    goto LABEL_5;
  **((uint32_t **)v164 + 8) = 1316515670;
  *(uint32_t *)(*((uint32_t *)v164 + 8) + 4) = v195;
  (*(void (**)(uint32_t, int, size_t))(**((uint32_t **)v164 + 6) + 28))(
    *((uint32_t *)v164 + 6),
    *((uint32_t *)v164 + 8) + 8,
    v195);
  v134 = *(uint32_t *)(*((uint32_t *)v164 + 8) + 20) - 16 - *(uint32_t *)(*((uint32_t *)v164 + 8) + 4);
  v4 = VoxAllocInternal(v134, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"), (int)(uintptr_t)("ParseFile"), 576);
  v163 = (char *)v4;
  if ( v4 == 0 )
    goto LABEL_5;
  (*(void (**)(uint32_t, int, signed int))(**((uint32_t **)v164 + 6) + 28))(*((uint32_t *)v164 + 6), v4, v134);
  if ( v134 > 0 )
  {
    v178 = 0;
    v143 = nullptr;
    v133 = nullptr;
    v135 = nullptr;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(uint32_t *)&v163[v5];
      v7 = *(uint32_t *)&v163[v5 + 4];
      v194 = v6;
      v8 = v5 + 8;
      v195 = v7;
      if ( v6 == 1953326657 )
      {
        *(uint32_t *)(*((uint32_t *)v164 + 8) + 24) = 1953326657;
        *(uint32_t *)(*((uint32_t *)v164 + 8) + 28) = v7;
        memcpy((void *)(*((uint32_t *)v164 + 8) + 32), &v163[v8], v7);
        v178 = v195 + v8;
        *(uint16_t *)(*((uint32_t *)v164 + 8) + 42) = 16;
      }
      else if ( v6 == 1835492691 )
      {
        dest = *(uint32_t *)&v163[v8];
        v168 = (v195 - 4) / dest;
        vox::DecoderNative::CreateSegmentsInfoContainers(*((vox::DecoderNative::Self **)v164 + 5), dest, v168);
        v31 = *((uint32_t *)v164 + 5);
        *((uint32_t *)v164 + 9) = v31 + 48;
        *((uint32_t *)v164 + 13) = v31 + 88;
        if ( *(uint32_t *)(v31 + 52) == 0 )
          goto LABEL_62;
        v178 += 12;
        if ( dest > 0 )
        {
          v32 = 0;
          nc = 0;
          v192 = *(char **)(v31 + 52);
          do
          {
            v119 = v32;
            memcpy(v192, &v163[v178], v168);
            v192 += 24;
            v34 = v119;
            v35 = **((uint32_t **)v164 + 13) + v119;
            v36 = *(char **)(v35 + 4);
            if ( v36 == *(char **)(v35 + 8) )
            {
              v37 = (int)(uintptr_t)(&v36[-*(uint32_t *)v35]) >> 2;
              v158 = 4;
              v145 = v37;
              if ( v37 != 0 )
              {
                v44 = 2 * v37;
                if ( v37 <= 2 * v37 )
                {
                  v111 = 8 * v37;
                  v108 = v44 <= 0x3FFFFFFF;
                  v112 = 0xFFFFFFFC;
                  if ( v108 )
                    v112 = v111;
                  v158 = v112;
                  v38 = VoxAllocInternal(
                          v112,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
                }
                else
                {
                  v158 = 0xFFFFFFFC;
                  v38 = VoxAllocInternal(
                          0xFFFFFFFC,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
                }
              }
              else
              {
                v38 = VoxAllocInternal(
                        4u,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
              }
              v141 = (uint32_t *)v38;
              v136 = v38 + 4;
              v34 = v119;
              v39 = (uint32_t *)(v38 + 4 * v145);
              if ( v39 != nullptr )
                *v39 = 0;
              v40 = *(char **)v35;
              v146 = *(char **)v35;
              if ( v36 != *(char **)v35 )
              {
                v41 = v141;
                do
                {
                  if ( v41 != nullptr )
                    *v41 = *(uint32_t *)v40;
                  v40 += 4;
                  ++v41;
                }
                while ( v36 != v40 );
                v136 = (size_t)&v141[((unsigned int)(v36 - (v146 + 4)) >> 2) + 2];
              }
              v147 = *(char **)(v35 + 4);
              if ( v36 != v147 )
              {
                v42 = v36;
                v43 = (uint32_t *)v136;
                do
                {
                  if ( v43 != nullptr )
                    *v43 = *(uint32_t *)v42;
                  v42 += 4;
                  ++v43;
                }
                while ( v147 != v42 );
                v136 += 4 * ((unsigned int)(v147 - (v36 + 4)) >> 2) + 4;
              }
              if ( *(uint32_t *)v35 != 0 )
              {
                VoxFreeInternal(*(void **)v35);
                v34 = v119;
              }
              *(uint32_t *)v35 = (uint32_t)(uintptr_t)(v141);
              *(uint32_t *)(v35 + 4) = v136;
              *(uint32_t *)(v35 + 8) = (uint32_t)(uintptr_t)((char *)v141 + v158);
            }
            else
            {
              v33 = 0;
              if ( v36 != nullptr )
              {
                *(uint32_t *)v36 = 0;
                v33 = *(uint32_t *)(v35 + 4);
              }
              *(uint32_t *)(v35 + 4) = v33 + 4;
            }
            ++nc;
            v178 += v168;
            v32 = v34 + 12;
          }
          while ( nc != dest );
        }
      }
      else if ( v6 == 1936028995 )
      {
        v198 = -1;
        v199 = -1;
        v200 = 0;
        v178 += 12;
        v165 = *(uint32_t *)&v163[v8];
        n = (v195 - 4) / v165;
        if ( v165 > 0 )
        {
          v191 = nullptr;
          v9 = v178;
          while ( 1 )
          {
            v115 = v9;
            memcpy(&v198, &v163[v9], n);
            v14 = (void *)v115;
            if ( v198 != 2 )
              break;
            v180 = 12 * v199;
            v10 = **((uint32_t **)v164 + 13) + 12 * v199;
            v11 = *(char **)(v10 + 4);
            v15 = (int)(uintptr_t)(&v11[-*(uint32_t *)v10]);
            if ( v15 > 7 )
              goto LABEL_25;
            if ( v11 == *(char **)(v10 + 8) )
            {
              v45 = v15 >> 2;
              v159 = 4;
              v148 = v45;
              if ( v45 == 0 )
                goto LABEL_102;
              v46 = 2 * v45;
              if ( v45 <= 2 * v45 )
              {
                v107 = 8 * v45;
                v108 = v46 <= 0x3FFFFFFF;
                v109 = 0xFFFFFFFC;
                if ( v108 )
                  v109 = v107;
                v159 = v109;
                v47 = VoxAllocInternal(
                        v109,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
              }
              else
              {
                v159 = 0xFFFFFFFC;
LABEL_102:
                v47 = VoxAllocInternal(
                        v159,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
              }
              v142 = (uint32_t *)v47;
              v14 = (void *)v115;
              v48 = (uint32_t *)(v47 + 4 * v148);
              if ( v48 != nullptr )
                *v48 = 0;
              v149 = *(char **)v10;
              if ( v11 != *(char **)v10 )
              {
                v49 = *(char **)v10;
                v50 = v142;
                do
                {
                  if ( v50 != nullptr )
                    *v50 = *(uint32_t *)v49;
                  v49 += 4;
                  ++v50;
                }
                while ( v11 != v49 );
                v14 = (void *)v115;
                v47 = (unsigned int)(uintptr_t)(&v142[((unsigned int)(v11 - (v149 + 4)) >> 2) + 1]);
              }
              v150 = (char *)(v47 + 4);
              v139 = *(char **)(v10 + 4);
              if ( v11 != v139 )
              {
                v51 = v11;
                v129 = v14;
                v52 = (uint32_t *)(v150);
                do
                {
                  if ( v52 != nullptr )
                    *v52 = *(uint32_t *)v51;
                  v51 += 4;
                  ++v52;
                }
                while ( v139 != v51 );
                v14 = v129;
                v150 += 4 * ((unsigned int)(v139 - (v11 + 4)) >> 2) + 4;
              }
              if ( *(uint32_t *)v10 != 0 )
              {
                v120 = v14;
                VoxFreeInternal(*(void **)v10);
                v14 = v120;
              }
              *(uint32_t *)v10 = (uint32_t)(uintptr_t)(v142);
              *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v150);
              *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)((char *)v142 + v159);
              v10 = **((uint32_t **)v164 + 13) + v180;
              v11 = *(char **)(v10 + 4);
LABEL_25:
              v12 = v200;
              v179 = v200;
              if ( v11 != *(char **)(v10 + 8) )
                goto LABEL_26;
              goto LABEL_36;
            }
            v16 = 0;
            if ( v11 != nullptr )
            {
              *(uint32_t *)v11 = 0;
              v16 = *(uint32_t *)(v10 + 4);
            }
            *(uint32_t *)(v10 + 4) = v16 + 4;
            v12 = v200;
            v10 = **((uint32_t **)v164 + 13) + v180;
            v11 = *(char **)(v10 + 4);
            v179 = v200;
            if ( v11 != *(char **)(v10 + 8) )
            {
LABEL_26:
              v13 = 0;
              if ( v11 != nullptr )
              {
                *(uint32_t *)v11 = v12;
                v13 = *(uint32_t *)(v10 + 4);
              }
              *(uint32_t *)(v10 + 4) = v13 + 4;
              goto LABEL_29;
            }
LABEL_36:
            v17 = (int)(uintptr_t)(&v11[-*(uint32_t *)v10]) >> 2;
            v157 = 4;
            v144 = v17;
            if ( v17 != 0 )
            {
              v18 = 2 * v17;
              if ( v144 <= v18 )
              {
                v108 = v18 <= 0x3FFFFFFF;
                v110 = -4;
                if ( v108 )
                  v110 = 8 * v144;
                v157 = v110;
              }
              else
              {
                v157 = 0xFFFFFFFC;
              }
            }
            v116 = v14;
            v140 = VoxAllocInternal(
                     v157,
                     0,
                     (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                     (int)(uintptr_t)("internal_new"),
                     181);
            v138 = (char *)(v140 + 4);
            v14 = v116;
            v19 = (int *)(v140 + 4 * v144);
            if ( v19 != nullptr )
              *v19 = v179;
            v181 = *(char **)v10;
            if ( v11 != *(char **)v10 )
            {
              v20 = *(char **)v10;
              v21 = (uint32_t *)v140;
              do
              {
                if ( v21 != nullptr )
                  *v21 = *(uint32_t *)v20;
                v20 += 4;
                ++v21;
              }
              while ( v11 != v20 );
              v14 = v116;
              v138 = (char *)(v140 + 4 * ((unsigned int)(v11 - (v181 + 4)) >> 2) + 8);
            }
            v182 = *(char **)(v10 + 4);
            if ( v11 != v182 )
            {
              v22 = v11;
              v131 = (int)(uintptr_t)(v14);
              v23 = (uint32_t *)(v138);
              do
              {
                if ( v23 != nullptr )
                  *v23 = *(uint32_t *)v22;
                v22 += 4;
                ++v23;
              }
              while ( v182 != v22 );
              v14 = (void *)v131;
              v138 += 4 * ((unsigned int)(v182 - (v11 + 4)) >> 2) + 4;
            }
            if ( *(uint32_t *)v10 != 0 )
            {
              v117 = v14;
              VoxFreeInternal(*(void **)v10);
              v14 = v117;
            }
            *(uint32_t *)v10 = v140;
            *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v138);
            *(uint32_t *)(v10 + 8) = v157 + v140;
LABEL_29:
            v9 = (int)(uintptr_t)(v14) + n;
            if ( ++v191 == (char *)v165 )
              goto LABEL_68;
          }
          v10 = **((uint32_t **)v164 + 13) + 12 * v199;
          v11 = *(char **)(v10 + 4);
          goto LABEL_25;
        }
      }
      else if ( v6 == 1936749127 )
      {
        v169 = *(uint32_t *)&v163[v8];
        v53 = (v195 - 4) / v169;
        v135 = (void *)VoxAllocInternal(
                         v53,
                         0,
                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                         (int)(uintptr_t)("ParseFile"),
                         690);
        if ( v135 == nullptr )
          goto LABEL_62;
        v178 += 12;
        if ( v169 > 0 )
        {
          nd = v53;
          v54 = 0;
          v8 = v178;
          memcpy(v135, &v163[v178], nd);
          while ( 1 )
          {
            vox::NativePlaylistsManager::AddGroup(v143, v135);
            if ( (uint8_t)vox::NativePlaylistsManager::IsValid(v143) == 0 )
              break;
            v8 += nd;
            if ( ++v54 == v169 )
              goto LABEL_132;
            memcpy(v135, &v163[v8], nd);
          }
          v2 = 0;
          goto LABEL_5;
        }
      }
      else if ( v6 == 1701868103 )
      {
        v170 = *(uint32_t *)&v163[v8];
        v59 = (v195 - 4) / v170;
        v133 = (void *)VoxAllocInternal(
                         v59,
                         0,
                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                         (int)(uintptr_t)("ParseFile"),
                         720);
        if ( v133 == nullptr )
          goto LABEL_62;
        v178 += 12;
        if ( v170 > 0 )
        {
          nf = v59;
          v60 = 0;
          v8 = v178;
          memcpy(v133, &v163[v178], nf);
          while ( 1 )
          {
            vox::NativePlaylistsManager::AddPlaylistElement(v143, v133);
            if ( (uint8_t)vox::NativePlaylistsManager::IsValid(v143) == 0 )
              break;
            v8 += nf;
            if ( ++v60 == v170 )
              goto LABEL_132;
            memcpy(v133, &v163[v8], nf);
          }
          v2 = 0;
          goto LABEL_5;
        }
      }
      else if ( v6 == 1701606738 )
      {
        v167 = *(uint32_t *)&v163[v8];
        nb = (v195 - 4) / v167;
        vox::DecoderNative::CreateTransitionRulesContainer(*((vox::DecoderNative::Self **)v164 + 5), v167, nb);
        v27 = *((uint32_t *)v164 + 5);
        *((uint32_t *)v164 + 11) = v27 + 80;
        v28 = *(char **)(v27 + 84);
        if ( v28 == nullptr )
          goto LABEL_62;
        v178 += 12;
        if ( v167 > 0 )
        {
          v29 = 0;
          v30 = &v163[v5 + 12];
          do
          {
            v114 = v28;
            v118 = v29;
            v28 += 36;
            memcpy(v114, v30, nb);
            v30 += nb;
            v29 = v118 + 1;
          }
          while ( v118 + 1 != v167 );
          v9 = nb + v178 + nb * v118;
LABEL_68:
          v178 = v9;
        }
      }
      else
      {
        if ( v6 != 1953721424 )
        {
          if ( v6 != 1952543827 )
          {
            if ( v6 == 1853059668 )
            {
              v178 += 12;
              v160 = *(uint32_t *)&v163[v8];
              ne = (v195 - 4) / v160;
              *((uint32_t *)v164 + 12) = *((uint32_t *)v164 + 5) + 100;
              if ( v160 > 0 )
              {
                v55 = &v163[v5 + 12];
                v151 = nullptr;
                do
                {
                  v198 = 0;
                  v199 = 0;
                  v200 = -1;
                  v201 = 0;
                  memcpy(&v198, v55, ne);
                  ++v151;
                  v55 += ne;
                  v56 = v201;
                  v57 = v199;
                  v58 = *(uint32_t *)(**((uint32_t **)v164 + 12) + 12 * v198);
                  *(uint32_t *)(v58 + 8 * v199) = v200;
                  *(uint32_t *)(v58 + 8 * v57 + 4) = v56;
                }
                while ( v151 != (char *)v160 );
                v26 = ne + v178 + ne * (uint32_t)(uintptr_t)(v151 - 1);
LABEL_131:
                v178 = v26;
              }
            }
            else if ( v6 == 1700885325 )
            {
              vox::DecoderNative::CreateFmtExtendedInfosContainer(*((vox::DecoderNative::Self **)v164 + 5));
              v101 = *(uint16_t **)(*((uint32_t *)v164 + 5) + 136);
              *((uint32_t *)v164 + 16) = (uint32_t)(uintptr_t)(v101);
              if ( v101 != nullptr )
              {
                *v101 = v195;
                *(uint16_t *)(*((uint32_t *)v164 + 16) + 2) = *(uint16_t *)&v163[v8];
                v102 = v178 + 12;
                *(uint16_t *)(*((uint32_t *)v164 + 16) + 4) = *(uint16_t *)&v163[v178 + 10];
                v103 = *((uint32_t *)v164 + 16);
                v178 += 12;
                if ( *(int16_t *)(v103 + 4) > 0 )
                {
                  v104 = 0;
                  v105 = &v163[v102];
                  do
                  {
                    v178 += 4;
                    *(uint16_t *)(v103 + 4 * v104 + 6) = *(uint16_t *)v105;
                    v106 = *((uint16_t *)v105 + 1);
                    v105 += 4;
                    *(uint16_t *)(*((uint32_t *)v164 + 16) + 4 * v104 + 8) = v106;
                    v103 = *((uint32_t *)v164 + 16);
                    ++v104;
                  }
                  while ( *(int16_t *)(v103 + 4) > v104 );
                }
              }
              else
              {
LABEL_132:
                v178 = v8;
              }
            }
            else
            {
              v178 = v195 + v8;
            }
            goto LABEL_18;
          }
          v132 = *(uint32_t *)&v163[v8];
          v137 = (v195 - 4) / v132;
          vox::DecoderNative::CreateStatesContainer(*((vox::DecoderNative::Self **)v164 + 5), v132);
          v61 = *((vox::DecoderNative::Self **)v164 + 5);
          *((uint32_t *)v164 + 10) = (uint32_t)(uintptr_t)((char *)v61 + 72);
          if ( *((uint32_t *)v61 + 19) == 0 )
            goto LABEL_62;
          *((uint32_t *)v164 + 14) = (uint32_t)(uintptr_t)((char *)v61 + 112);
          v178 += 12;
          v198 = -1;
          LOBYTE(v199) = 0;
          if ( v132 <= 0 )
          {
            ng = (int *)&unk_20E1FB4;
            v85 = (int *)(void *)g4_empty_string_rep;
LABEL_198:
            vox::DecoderNative::CreateTransitionsContainer(v61, v132);
            if ( v85 != (int *)(void *)g4_empty_string_rep
              && __sync_fetch_and_add(ng - 1, 0xFFFFFFFF) <= 0 )
            {
              VoxFreeInternal(v85);
            }
            goto LABEL_18;
          }
          v161 = 0;
          ng = (int *)&unk_20E1FB4;
          while ( 2 )
          {
            memcpy(&v198, &v163[v178], v137);
            *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v164 + 10) + 4) + 4 * v161) = v198;
            v62 = strlen((const char *)&v199);
            if ( v62 != 0 )
            {
              v63 = *(ng - 3);
              if ( v62 > 1073741820 - v63 )
                sub_1900180("basic_string::append");
              v64 = ng;
              v65 = v62 + v63;
              v66 = *(ng - 2);
              if ( v62 + v63 <= v66 && *(ng - 1) <= 0 )
                goto LABEL_221;
              if ( ng <= &v199 )
              {
                v152 = (char *)ng + v63;
                if ( (int *)((char *)ng + v63) >= &v199 )
                {
                  if ( v65 == v66 && (v72 = ng, *(ng - 1) <= 0) )
                  {
                    v173 = (size_t)ng;
                  }
                  else
                  {
                    v67 = *(ng - 3);
                    if ( v65 >= v63 )
                      v67 = v62 + v63;
                    if ( v67 > 0x3FFFFFFC )
                      goto LABEL_266;
                    v171 = v67 + 13;
                    if ( v66 < v67 )
                    {
                      if ( v67 < 2 * v66 )
                        v67 = 2 * v66;
                      v172 = v67 + 29;
                      if ( v67 + 29 <= 0x1000 || v66 >= v67 )
                      {
                        v171 = v67 + 13;
                      }
                      else
                      {
                        v68 = v67 + 4096;
                        v67 = 1073741820;
                        v69 = v68 - (v172 & 0xFFF);
                        if ( v69 <= 0x3FFFFFFC )
                          v67 = v69;
                        v171 = v67 + 13;
                      }
                    }
                    v121 = v67;
                    v70 = VoxAllocInternal(
                            v171,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
                    *(uint32_t *)(v70 + 4) = v121;
                    *(uint32_t *)(v70 + 8) = 0;
                    v153 = nullptr;
                    v71 = *(ng - 3);
                    v130 = (char *)(v70 + 12);
                    if ( v71 != 0 )
                    {
                      if ( v71 == 1 )
                      {
                        *(uint8_t *)(v70 + 12) = *(uint8_t *)ng;
                      }
                      else
                      {
                        v125 = v70;
                        memcpy(v130, ng, v71);
                        v70 = v125;
                      }
                      v153 = (uint8_t *)*(ng - 3);
                    }
                    if ( (void *)v70 != (void *)g4_empty_string_rep )
                    {
                      *(uint32_t *)(v70 + 8) = 0;
                      *(uint32_t *)v70 = (uint32_t)(uintptr_t)(v153);
                      v153[v70 + 12] = 0;
                    }
                    v173 = (size_t)v130;
                    if ( ng - 3 != (int *)(void *)g4_empty_string_rep
                      && __sync_fetch_and_add(ng - 1, 0xFFFFFFFF) <= 0 )
                    {
                      v126 = v70;
                      VoxFreeInternal(ng - 3);
                      v70 = v126;
                    }
                    v152 = &v130[*(uint32_t *)v70];
                    v72 = (int *)v130;
                  }
                  v73 = (char *)((char *)&v199 - (char *)ng);
                  ng = v72;
                  v74 = (int *)&v73[v173];
                  goto LABEL_167;
                }
              }
              if ( v65 == v66 )
              {
                v64 = ng;
                if ( *(ng - 1) <= 0 )
                {
LABEL_221:
                  v152 = (char *)v64 + v63;
                  v74 = &v199;
                  goto LABEL_167;
                }
              }
              v89 = *(ng - 3);
              if ( v65 >= v63 )
                v89 = v62 + v63;
              if ( v89 > 0x3FFFFFFC )
LABEL_266:
                sub_1900180("basic_string::_S_create");
              v175 = v89 + 13;
              if ( v89 > v66 )
              {
                if ( v89 < 2 * v66 )
                  v89 = 2 * v66;
                v176 = v89 + 29;
                if ( v89 + 29 <= 0x1000 || v66 >= v89 )
                {
                  v175 = v89 + 13;
                }
                else
                {
                  v90 = v89 + 4096;
                  v89 = 1073741820;
                  v91 = v90 - (v176 & 0xFFF);
                  if ( v91 <= 0x3FFFFFFC )
                    v89 = v91;
                  v175 = v89 + 13;
                }
              }
              v123 = v89;
              v92 = VoxAllocInternal(
                      v175,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
              *(uint32_t *)(v92 + 4) = v123;
              *(uint32_t *)(v92 + 8) = 0;
              v155 = nullptr;
              v93 = *(ng - 3);
              v177 = (char *)(v92 + 12);
              if ( v93 != 0 )
              {
                if ( v93 == 1 )
                {
                  *(uint8_t *)(v92 + 12) = *(uint8_t *)ng;
                }
                else
                {
                  v124 = v92;
                  memcpy(v177, ng, v93);
                  v92 = v124;
                }
                v155 = (uint8_t *)*(ng - 3);
              }
              if ( (void *)v92 != (void *)g4_empty_string_rep )
              {
                *(uint32_t *)(v92 + 8) = 0;
                *(uint32_t *)v92 = (uint32_t)(uintptr_t)(v155);
                v155[v92 + 12] = 0;
              }
              if ( ng - 3 != (int *)(void *)g4_empty_string_rep
                && __sync_fetch_and_add(ng - 1, 0xFFFFFFFF) <= 0 )
              {
                v128 = v92;
                VoxFreeInternal(ng - 3);
                v92 = v128;
              }
              v152 = &v177[*(uint32_t *)v92];
              ng = (int *)v177;
              v74 = &v199;
LABEL_167:
              if ( v62 == 1 )
                *v152 = *(uint8_t *)v74;
              else
                memcpy(v152, v74, v62);
              if ( ng - 3 != (int *)(void *)g4_empty_string_rep )
              {
                *(ng - 1) = 0;
                *(ng - 3) = v65;
                *((uint8_t *)ng + v65) = 0;
              }
            }
            v154 = *((uint32_t **)v164 + 14);
            v75 = v154[2];
            if ( v75 == 0 )
              goto LABEL_186;
            v174 = (size_t)(v154 + 1);
            v76 = *(ng - 3);
            do
            {
              while ( 1 )
              {
                v77 = v76;
                v78 = *(uint32_t *)(*(uint32_t *)(v75 + 16) - 12);
                v122 = v76;
                if ( v78 <= v76 )
                  v77 = *(uint32_t *)(*(uint32_t *)(v75 + 16) - 12);
                v79 = memcmp(*(const void **)(v75 + 16), ng, v77);
                v76 = v122;
                v80 = v78 - v122;
                if ( v79 == 0 )
                  v79 = v80;
                if ( v79 < 0 )
                  break;
                v174 = v75;
                v75 = *(uint32_t *)(v75 + 8);
                if ( v75 == 0 )
                  goto LABEL_180;
              }
              v75 = *(uint32_t *)(v75 + 12);
            }
            while ( v75 != 0 );
LABEL_180:
            if ( v154 + 1 == (uint32_t *)v174 )
              goto LABEL_186;
            v81 = v122;
            v82 = *(uint32_t *)(*(uint32_t *)(v174 + 16) - 12);
            if ( v82 <= v122 )
              v81 = *(uint32_t *)(*(uint32_t *)(v174 + 16) - 12);
            v83 = memcmp(ng, *(const void **)(v174 + 16), v81);
            v84 = v122 - v82;
            v85 = ng - 3;
            if ( v83 == 0 )
              v83 = v84;
            if ( v83 < 0 )
            {
LABEL_186:
              if ( *(ng - 1) < 0 )
              {
                v94 = *(ng - 3);
                v95 = *(ng - 2);
                if ( v94 > 0x3FFFFFFC )
                  goto LABEL_266;
                if ( v94 > v95 && v94 < 2 * v95 )
                  v94 = 2 * v95;
                if ( v94 + 29 > 0x1000 && v95 < v94 )
                {
                  v96 = v94 + 4096 - (((uint16_t)v94 + 29) & 0xFFF);
                  v94 = 1073741820;
                  if ( v96 <= 0x3FFFFFFC )
                    v94 = v96;
                }
                v97 = VoxAllocInternal(
                        v94 + 13,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
                *(uint32_t *)(v97 + 4) = v94;
                v98 = v97;
                *(uint32_t *)(v97 + 8) = 0;
                v99 = 0;
                v100 = *(ng - 3);
                if ( v100 != 0 )
                {
                  if ( v100 == 1 )
                    *(uint8_t *)(v98 + 12) = *(uint8_t *)ng;
                  else
                    memcpy((void *)(v98 + 12), ng, *(ng - 3));
                  v99 = *(ng - 3);
                }
                if ( (void *)v98 != (void *)g4_empty_string_rep )
                {
                  *(uint32_t *)(v98 + 8) = 0;
                  *(uint32_t *)v98 = v99;
                  *(uint8_t *)(v98 + v99 + 12) = 0;
                }
                v86 = (int *)(v98 + 12);
                v85 = ng - 3;
              }
              else
              {
                v85 = ng - 3;
                if ( ng - 3 != (int *)(void *)g4_empty_string_rep )
                  __sync_add_and_fetch(ng - 1, 1u);
                v86 = ng;
              }
              v196 = v86;
              v197 = 0;
              g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_insert_unique(&v193);
              v174 = v193;
              v87 = v196 - 3;
              if ( v196 - 3 != (int *)(void *)g4_empty_string_rep
                && __sync_fetch_and_add(v196 - 1, 0xFFFFFFFF) <= 0 )
              {
                VoxFreeInternal(v87);
              }
            }
            *(uint32_t *)(v174 + 20) = v161;
            if ( *(ng - 1) > 0 )
            {
              v88 = VoxAllocInternal(
                      0xDu,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
              *(uint32_t *)(v88 + 4) = 0;
              *(uint32_t *)(v88 + 8) = 0;
              if ( v85 != (int *)(void *)g4_empty_string_rep
                && __sync_fetch_and_add(ng - 1, 0xFFFFFFFF) <= 0 )
              {
                v127 = v88;
                VoxFreeInternal(v85);
                v88 = v127;
              }
              ng = (int *)(v88 + 12);
              v85 = (int *)v88;
            }
            if ( v85 != (int *)(void *)g4_empty_string_rep )
            {
              *(ng - 1) = 0;
              *(ng - 3) = 0;
              *(uint8_t *)ng = 0;
            }
            ++v161;
            v178 += v137;
            if ( v161 == v132 )
            {
              v61 = *((vox::DecoderNative::Self **)v164 + 5);
              goto LABEL_198;
            }
            continue;
          }
        }
        v178 += 12;
        v166 = *(uint32_t *)&v163[v8];
        v24 = (v195 - 4) / v166;
        vox::DecoderNative::CreatePlaylistsContainer(*((vox::DecoderNative::Self **)v164 + 5), v166);
        v143 = (vox::NativePlaylistsManager::Self *)(*((uint32_t *)v164 + 5) + 56);
        if ( (uint8_t)vox::NativePlaylistsManager::IsValid(v143) != 0 )
        {
          v198 = 0;
          v199 = 1;
          if ( v166 > 0 )
          {
            na = v24;
            v25 = 0;
            v26 = v178;
            memcpy(&v198, &v163[v178], na);
            while ( 1 )
            {
              vox::NativePlaylistsManager::AddPlaylist(v143, v25, &v198);
              if ( (uint8_t)vox::NativePlaylistsManager::IsValid(v143) == 0 )
                goto LABEL_62;
              v26 += na;
              if ( ++v25 == v166 )
                goto LABEL_131;
              memcpy(&v198, &v163[v26], na);
            }
          }
        }
      }
LABEL_18:
      v5 = v178;
      if ( v134 <= v178 )
        goto LABEL_242;
    }
  }
  v133 = nullptr;
  v135 = nullptr;
LABEL_242:
  v2 = 1;
  vox::DecoderNativeCursor::SetImplicitSegmentCues((int **)v164);
  VoxFreeInternal(v135);
  VoxFreeInternal(v133);
  VoxFreeInternal(v163);
LABEL_5:
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeCursor::Construct  (binary VA: 0xfef260)
// Original: vox::DecoderNativeCursor::DecoderNativeCursor
// ----------------------------------------------------------------------------
void vox::DecoderNativeCursor::Construct(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int16_t v5;
  int v6;
  int v7;
  int v8;
  int v9;
  vox::NativeSubDecoderIMAADPCMState::Self *v10;
  vox::NativeSubDecoderIMAADPCMState::Self *v11;
  int v12;
  vox::NativeSubDecoderPCMState::Self *v13;
  vox::NativeSubDecoderPCMState::Self *v14;
  vox::VoxThread::Self *v15;
  vox::NativeSubDecoderMSADPCMState::Self *v16;
  vox::NativeSubDecoderMSADPCMState::Self *v17;
  vox::VoxThread::Self *v18;
  vox::NativeSubDecoderMPCState::Self *v19;
  vox::NativeSubDecoderMPCState::Self *v20;
  typedef vox::VoxThread::Self *_g4_t_v21;
  typedef vox::NativePlaylistsManager::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v22)) > _g4_s1 ? (64u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v23)) > _g4_s2 ? (76u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v24)) > _g4_s3 ? (88u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v25)) > _g4_s4 ? (92u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v26)) > _g4_s5 ? (96u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (100u + sizeof(_g4_t_v27)) > _g4_s6 ? (100u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v28)) > _g4_s7 ? (112u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);

  v28 = &a1;
  v3 = a1;
  v23 = a3;
  *(uint32_t *)(a1 + 20) = a2;
  *(uint32_t *)(v3 + 24) = v23;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_208D068);
  *(uint32_t *)(v3 + 4) = 0;
  *(uint32_t *)(v3 + 8) = 0;
  *(uint32_t *)(v3 + 68) = v3 + 68;
  *(uint32_t *)(v3 + 72) = v3 + 68;
  *(uint32_t *)(v3 + 12) = 0;
  *(uint32_t *)(v3 + 16) = 0;
  *(uint8_t *)(v3 + 28) = 0;
  *(uint32_t *)(v3 + 32) = 0;
  *(uint32_t *)(v3 + 36) = 0;
  *(uint32_t *)(v3 + 40) = 0;
  *(uint32_t *)(v3 + 44) = 0;
  *(uint32_t *)(v3 + 48) = 0;
  *(uint32_t *)(v3 + 52) = 0;
  *(uint32_t *)(v3 + 56) = 0;
  *(uint32_t *)(v3 + 60) = 0;
  *(uint32_t *)(v3 + 64) = 0;
  *(uint32_t *)(v3 + 76) = 0;
  *(uint32_t *)(v3 + 80) = 0;
  *(uint8_t *)(v3 + 84) = 0;
  *(uint32_t *)(v3 + 88) = 0;
  *(uint32_t *)(v3 + 92) = 0;
  *(uint32_t *)(v3 + 96) = 0;
  *(uint32_t *)(v3 + 100) = 0;
  *(uint32_t *)(v3 + 104) = 0;
  *(uint32_t *)(v3 + 108) = 0;
  vox::Mutex::Construct((vox::Mutex::Self *)(v3 + 112));
  vox::VoxThread::GetCurThreadId(v21);
  sub_BA06A0();
  v4 = *(uint32_t *)(v3 + 20);
  *(uint32_t *)(v3 + 32) = v4 + 4;
  if ( *(uint8_t *)(v4 + 140) != 0 )
  {
    if ( (uint8_t)vox::DecoderNativeCursor::ParseFile((vox::DecoderNativeCursor::Self *)v3) == 0 )
      goto LABEL_3;
    *(uint8_t *)(*(uint32_t *)(v3 + 20) + 140) = 0;
    v4 = *(uint32_t *)(v3 + 20);
  }
  *(uint32_t *)(v3 + 36) = v4 + 48;
  *(uint32_t *)(v3 + 52) = v4 + 88;
  *(uint32_t *)(v3 + 44) = v4 + 80;
  *(uint32_t *)(v3 + 48) = v4 + 100;
  *(uint32_t *)(v3 + 56) = v4 + 112;
  *(uint32_t *)(v3 + 40) = v4 + 72;
  *(uint32_t *)(v3 + 64) = *(uint32_t *)(v4 + 136);
  v22 = (vox::NativePlaylistsManager::Self *)VoxAllocInternal(
                                         0x10u,
                                         0,
                                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                         (int)(uintptr_t)("DecoderNativeCursor"),
                                         226);
  vox::NativePlaylistsManager::Construct(v22, (vox::NativePlaylistsManager::Self *)(v4 + 56));
  *(uint32_t *)(v3 + 60) = (uint32_t)(uintptr_t)(v22);
  if ( v22 != nullptr && (uint8_t)vox::NativePlaylistsManager::IsValid(v22) != 0 )
  {
    v5 = *(uint16_t *)(*(uint32_t *)(v3 + 32) + 32);
    switch ( v5 )
    {
      case 1:
        v12 = VoxAllocInternal(
                0x170u,
                0,
                (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                (int)(uintptr_t)("DecoderNativeCursor"),
                242);
        vox::VoxNativeSubDecoderPCM::VoxNativeSubDecoderPCM(
          (uint32_t *)(uintptr_t)v12,
          v23,
          (uint32_t *)(uintptr_t)*(uint32_t *)(v3 + 32),
          *(uint32_t *)(v3 + 40),
          *(uint32_t *)(v3 + 36),
          *(uint32_t *)(v3 + 52),
          *(uint32_t *)(v3 + 44),
          *(uint32_t *)(v3 + 48),
          *(uint32_t *)(v3 + 56),
          *(uint32_t *)(v3 + 60));
        *(uint32_t *)(v3 + 76) = v12;
        v13 = (vox::NativeSubDecoderPCMState::Self *)VoxAllocInternal(
                                                 0x144u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                 (int)(uintptr_t)("DecoderNativeCursor"),
                                                 247);
        vox::NativeSubDecoderPCMState::NativeSubDecoderPCMState(v13, *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 88) = (uint32_t)(uintptr_t)(v13);
        v14 = (vox::NativeSubDecoderPCMState::Self *)VoxAllocInternal(
                                                 0x144u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                 (int)(uintptr_t)("DecoderNativeCursor"),
                                                 248);
        vox::NativeSubDecoderPCMState::NativeSubDecoderPCMState(v14, *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 92) = (uint32_t)(uintptr_t)(v14);
        break;
      case 17:
        v9 = VoxAllocInternal(
               0x1C0u,
               0,
               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
               (int)(uintptr_t)("DecoderNativeCursor"),
               253);
        vox::VoxNativeSubDecoderIMAADPCM::Construct(
          v9,
          v23,
          *(uint32_t **)(v3 + 32),
          *(uint32_t *)(v3 + 40),
          *(uint32_t *)(v3 + 36),
          *(uint32_t *)(v3 + 52),
          *(uint32_t *)(v3 + 44),
          *(uint32_t *)(v3 + 48),
          *(uint32_t *)(v3 + 56),
          *(uint32_t *)(v3 + 60));
        *(uint32_t *)(v3 + 76) = v9;
        v10 = (vox::NativeSubDecoderIMAADPCMState::Self *)VoxAllocInternal(
                                                      0x150u,
                                                      0,
                                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                      (int)(uintptr_t)("DecoderNativeCursor"),
                                                      258);
        vox::NativeSubDecoderIMAADPCMState::NativeSubDecoderIMAADPCMState(
          v10,
          *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 88) = (uint32_t)(uintptr_t)(v10);
        v11 = (vox::NativeSubDecoderIMAADPCMState::Self *)VoxAllocInternal(
                                                      0x150u,
                                                      0,
                                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                      (int)(uintptr_t)("DecoderNativeCursor"),
                                                      259);
        vox::NativeSubDecoderIMAADPCMState::NativeSubDecoderIMAADPCMState(
          v11,
          *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 92) = (uint32_t)(uintptr_t)(v11);
        break;
      case 2:
        v15 = (vox::VoxThread::Self *)VoxAllocInternal(
                                  0x1A8u,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                  (int)(uintptr_t)("DecoderNativeCursor"),
                                  265);
        vox::VoxNativeSubDecoderMSADPCM::Construct(
          v15,
          v23,
          *(uint32_t **)(v3 + 32),
          *(uint32_t *)(v3 + 40),
          *(uint32_t *)(v3 + 36),
          *(uint32_t *)(v3 + 52),
          *(uint32_t *)(v3 + 44),
          *(uint32_t *)(v3 + 48),
          *(uint32_t *)(v3 + 56),
          *(uint32_t *)(v3 + 60),
          *(uint32_t *)(v3 + 64));
        *(uint32_t *)(v3 + 76) = (uint32_t)(uintptr_t)(v15);
        v16 = (vox::NativeSubDecoderMSADPCMState::Self *)VoxAllocInternal(
                                                     0x150u,
                                                     0,
                                                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                     (int)(uintptr_t)("DecoderNativeCursor"),
                                                     270);
        vox::NativeSubDecoderMSADPCMState::NativeSubDecoderMSADPCMState(v16, *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 88) = (uint32_t)(uintptr_t)(v16);
        v17 = (vox::NativeSubDecoderMSADPCMState::Self *)VoxAllocInternal(
                                                     0x150u,
                                                     0,
                                                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                     (int)(uintptr_t)("DecoderNativeCursor"),
                                                     271);
        vox::NativeSubDecoderMSADPCMState::NativeSubDecoderMSADPCMState(v17, *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 92) = (uint32_t)(uintptr_t)(v17);
        break;
      case 2048:
        v18 = (vox::VoxThread::Self *)VoxAllocInternal(
                                  0x18Cu,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                  (int)(uintptr_t)("DecoderNativeCursor"),
                                  277);
        vox::VoxNativeSubDecoderMPC::Construct(
          v18,
          v23,
          *(uint32_t **)(v3 + 32),
          *(uint32_t *)(v3 + 40),
          *(uint32_t *)(v3 + 36),
          *(uint32_t *)(v3 + 52),
          *(uint32_t *)(v3 + 44),
          *(uint32_t *)(v3 + 48),
          *(uint32_t *)(v3 + 56),
          *(uint32_t *)(v3 + 60));
        *(uint32_t *)(v3 + 76) = (uint32_t)(uintptr_t)(v18);
        v19 = (vox::NativeSubDecoderMPCState::Self *)VoxAllocInternal(
                                                 0x144u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                 (int)(uintptr_t)("DecoderNativeCursor"),
                                                 282);
        vox::NativeSubDecoderMPCState::NativeSubDecoderMPCState(v19, *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 88) = (uint32_t)(uintptr_t)(v19);
        v20 = (vox::NativeSubDecoderMPCState::Self *)VoxAllocInternal(
                                                 0x144u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                                                 (int)(uintptr_t)("DecoderNativeCursor"),
                                                 283);
        vox::NativeSubDecoderMPCState::NativeSubDecoderMPCState(v20, *(vox::NativePlaylistsManager::Self **)(v3 + 60));
        *(uint32_t *)(v3 + 92) = (uint32_t)(uintptr_t)(v20);
        break;
      default:
        break;
    }
    if ( *(uint32_t *)(v3 + 76) != 0 )
    {
      vox::VoxNativeSubDecoder::GetTrackParams((vox::VoxNativeSubDecoder::Self *)&v24);
      *(uint32_t *)(v3 + 4) = v24;
      v6 = v25;
      *(uint32_t *)(v3 + 8) = v25;
      *(uint32_t *)(v3 + 12) = v26;
      *(uint32_t *)(v3 + 16) = v27;
      v7 = *(uint32_t *)(v3 + 88);
      if ( v7 != 0 )
      {
        v8 = *(uint32_t *)(v3 + 92);
        if ( v8 != 0 && *(uint32_t *)(v7 + 4) != 0 && *(uint32_t *)(v8 + 4) != 0 )
        {
          *(uint32_t *)(v3 + 104) = (int)(float)((float)(*(uint32_t *)(v3 + 4) * 1000 * v6) * 0.002f);
          goto LABEL_4;
        }
      }
    }
  }
LABEL_3:
  *(uint32_t *)(v3 + 4) = 0;
  *(uint32_t *)(v3 + 8) = 0;
  *(uint32_t *)(v3 + 12) = 0;
  *(uint32_t *)(v3 + 16) = 0;
LABEL_4:
  sub_BA06B0();
}


