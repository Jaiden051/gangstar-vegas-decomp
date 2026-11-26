#include "Core/Utils/DecompTypes.h"
#include "vox_VoxNativeSubDecoder.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::HasData  (binary VA: 0xff4d10)
// Original: vox::VoxNativeSubDecoder::HasData
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::HasData(vox::VoxNativeSubDecoder::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 365) == 0 )
    return *((uint8_t *)self + 364);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::Reset  (binary VA: 0xff4dd0)
// Original: vox::VoxNativeSubDecoder::Reset
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::Reset(vox::NativePlaylistsManager::Self **self)
{
  int v1;
  vox::PlaylistElement::Self *v2;
  int v3;
  int NbPlaylists;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  NbPlaylists = vox::NativePlaylistsManager::GetNbPlaylists(*(self + 12));
  if ( NbPlaylists > 0 )
  {
    v1 = 0;
    do
    {
      v3 = v1;
      vox::NativePlaylistsManager::ResetPlaylist(*(self + 12), v1);
      v1 = v3 + 1;
    }
    while ( v3 + 1 != NbPlaylists );
  }
  *((uint8_t *)self + 364) = 1;
  *(self + 37) = nullptr;
  *(self + 89) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 90) = nullptr;
  *(self + 35) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 36) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 16) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 17) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 18) = (vox::NativePlaylistsManager::Self *)-1;
  *((uint8_t *)self + 76) = 1;
  *(self + 13) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 14) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 15) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 72) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 74) = nullptr;
  *(self + 75) = nullptr;
  *(self + 76) = nullptr;
  *(self + 77) = nullptr;
  *(self + 78) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 1);
  *(self + 79) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 1);
  *(self + 80) = nullptr;
  *(self + 81) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 2);
  *(self + 87) = (vox::NativePlaylistsManager::Self *)-1;
  *((uint8_t *)self + 352) = 0;
  *(self + 82) = nullptr;
  *(self + 83) = nullptr;
  *(self + 84) = nullptr;
  *(self + 85) = nullptr;
  *(self + 86) = nullptr;
  *(self + 55) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 57) = nullptr;
  *(self + 58) = nullptr;
  *(self + 59) = nullptr;
  *(self + 60) = nullptr;
  *(self + 61) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 1);
  *(self + 62) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 1);
  *(self + 63) = nullptr;
  *(self + 64) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 2);
  *(self + 70) = (vox::NativePlaylistsManager::Self *)-1;
  *((uint8_t *)self + 284) = 0;
  *(self + 65) = nullptr;
  *(self + 66) = nullptr;
  *(self + 67) = nullptr;
  *(self + 68) = nullptr;
  *(self + 69) = nullptr;
  *(self + 38) = (vox::NativePlaylistsManager::Self *)-1;
  *(self + 40) = nullptr;
  *(self + 41) = nullptr;
  *(self + 42) = nullptr;
  *(self + 43) = nullptr;
  *(self + 44) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 1);
  *(self + 45) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 1);
  *(self + 46) = nullptr;
  *(self + 47) = (vox::NativePlaylistsManager::Self *)(&dword_0 + 2);
  *(self + 53) = (vox::NativePlaylistsManager::Self *)-1;
  *((uint8_t *)self + 216) = 0;
  *(self + 48) = nullptr;
  *(self + 49) = nullptr;
  *(self + 50) = nullptr;
  *(self + 51) = nullptr;
  *(self + 52) = nullptr;
  vox::PlaylistElement::Reset((vox::PlaylistElement::Self *)(self + 20));
  vox::PlaylistElement::Reset((vox::PlaylistElement::Self *)(self + 25));
  vox::PlaylistElement::Reset((vox::PlaylistElement::Self *)(self + 30));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::Construct  (binary VA: 0xff5340)
// Original: vox::VoxNativeSubDecoder::VoxNativeSubDecoder
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::Construct(int a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int result;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208D1C8);
  *(uint32_t *)(a1 + 4) = a2;
  *(uint32_t *)(a1 + 24) = a5;
  *(uint32_t *)(a1 + 28) = a7;
  *(uint32_t *)(a1 + 32) = a4;
  *(uint32_t *)(a1 + 36) = a8;
  *(uint32_t *)(a1 + 40) = a9;
  *(uint32_t *)(a1 + 44) = a6;
  *(uint32_t *)(a1 + 48) = a10;
  *(uint16_t *)(a1 + 8) = 0;
  *(uint16_t *)(a1 + 10) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint16_t *)(a1 + 18) = 0;
  *(uint32_t *)(a1 + 52) = -1;
  *(uint32_t *)(a1 + 56) = -1;
  *(uint32_t *)(a1 + 60) = -1;
  *(uint32_t *)(a1 + 64) = -1;
  *(uint32_t *)(a1 + 68) = -1;
  *(uint32_t *)(a1 + 72) = -1;
  *(uint8_t *)(a1 + 76) = 1;
  vox::PlaylistElement::Construct((vox::PlaylistElement::Self *)(a1 + 80));
  vox::PlaylistElement::Construct((vox::PlaylistElement::Self *)(a1 + 100));
  vox::PlaylistElement::Construct((vox::PlaylistElement::Self *)(a1 + 120));
  *(uint32_t *)(a1 + 140) = -1;
  *(uint32_t *)(a1 + 144) = -1;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = -1;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 1;
  *(uint32_t *)(a1 + 180) = 1;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 2;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)(a1 + 212) = -1;
  *(uint8_t *)(a1 + 216) = 0;
  *(uint8_t *)(a1 + 217) = 0;
  *(uint32_t *)(a1 + 220) = -1;
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 1;
  *(uint32_t *)(a1 + 248) = 1;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 256) = 2;
  *(uint32_t *)(a1 + 260) = 0;
  *(uint32_t *)(a1 + 264) = 0;
  *(uint32_t *)(a1 + 268) = 0;
  *(uint32_t *)(a1 + 272) = 0;
  *(uint32_t *)(a1 + 276) = 0;
  *(uint32_t *)(a1 + 280) = -1;
  *(uint8_t *)(a1 + 284) = 0;
  *(uint8_t *)(a1 + 285) = 0;
  *(uint32_t *)(a1 + 288) = -1;
  *(uint32_t *)(a1 + 296) = 0;
  *(uint32_t *)(a1 + 300) = 0;
  *(uint32_t *)(a1 + 304) = 0;
  *(uint32_t *)(a1 + 308) = 0;
  *(uint32_t *)(a1 + 312) = 1;
  *(uint32_t *)(a1 + 316) = 1;
  *(uint32_t *)(a1 + 320) = 0;
  *(uint32_t *)(a1 + 324) = 2;
  *(uint32_t *)(a1 + 328) = 0;
  *(uint32_t *)(a1 + 332) = 0;
  *(uint32_t *)(a1 + 336) = 0;
  *(uint32_t *)(a1 + 340) = 0;
  *(uint32_t *)(a1 + 344) = 0;
  *(uint32_t *)(a1 + 348) = -1;
  *(uint8_t *)(a1 + 352) = 0;
  *(uint8_t *)(a1 + 353) = 0;
  *(uint32_t *)(a1 + 356) = -1;
  *(uint32_t *)(a1 + 360) = 0;
  *(uint8_t *)(a1 + 364) = 1;
  *(uint8_t *)(a1 + 365) = 0;
  *(uint32_t *)(a1 + 292) = 1;
  *(uint32_t *)(a1 + 224) = 2;
  *(uint32_t *)(a1 + 156) = 3;
  *(uint32_t *)(a1 + 8) = a3[8];
  *(uint32_t *)(a1 + 12) = a3[9];
  *(uint32_t *)(a1 + 16) = a3[10];
  result = a3[5];
  *(uint32_t *)(a1 + 20) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::Clean  (binary VA: 0xff5670)
// Original: vox::VoxNativeSubDecoder::Clean
// ----------------------------------------------------------------------------
int * vox::VoxNativeSubDecoder::Clean()
{
  int *result;

  result = (int *)vox::VoxNativeSubDecoder::s_pMixingBuffer;
  if ( vox::VoxNativeSubDecoder::s_pMixingBuffer != 0 )
  {
    VoxFreeInternal(vox::VoxNativeSubDecoder::s_pMixingBuffer);
    vox::VoxNativeSubDecoder::s_pMixingBuffer = 0;
    vox::VoxNativeSubDecoder::s_nbMixingBufferBytes[0] = 0;
    return (int *)(vox::VoxNativeSubDecoder::s_nbMixingBufferBytes);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::CopySegmentState  (binary VA: 0xff56c0)
// Original: vox::VoxNativeSubDecoder::CopySegmentState
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::CopySegmentState(int a1, int a2, uint8_t *a3)
{
  unsigned int v3;
  int result;
  uint16_t *v5;
  uint16_t *v6;
  int v7;
  int v8;
  uint16_t *v9;
  uint16_t *v10;

  v3 = 66;
  result = a2;
  v5 = (uint16_t *)a2;
  v6 = (uint16_t *)(a3);
  v7 = *(uint32_t *)(a2 + 4);
  if ( (a2 & 1) != 0 )
  {
    v5 = (uint16_t *)(a2 + 1);
    v6 = (uint16_t *)(a3 + 1);
    *(uint8_t *)a2 = *a3;
    v3 = 65;
    if ( ((a2 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v3 -= 2;
  *v5++ = *v6++;
LABEL_3:
  std::memcpy(v5, v6, 4 * (v3 >> 2));
  v10 = &v6[2 * (v3 >> 2)];
  v9 = &v5[2 * (v3 >> 2)];
  v8 = 0;
  if ( (v3 & 2) != 0 )
  {
    *v9 = *v10;
    v8 = 1;
  }
  if ( (v3 & 1) != 0 )
    LOBYTE(v9[v8]) = v10[v8];
  *(uint32_t *)(a2 + 4) = v7;
  *(uint8_t *)(a2 + 65) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer  (binary VA: 0xff5760)
// Original: vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7; // cc
  int v8;
  vox::VoxThread::Self *v9;
  int v10;
  int v11;
  int v12;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  v3 = a3[12];
  v10 = a3[10];
  v11 = a3[13];
  v12 = a3[14];
  v4 = a2 / ((*(int16_t *)(a1 + 18) >> 3) * *(int16_t *)(a1 + 10));
  v5 = v10 - v4;
  if ( v10 - v4 < 0 )
    v5 = 0;
  a3[10] = v5;
  if ( v10 > 0 )
  {
    v6 = v4 - v10;
    v7 = v4 <= v10;
    v4 = 0;
    if ( !v7 )
      v4 = v6;
  }
  if ( v3 > 0 )
  {
    if ( v4 >= v3 )
    {
      v8 = v11 * v3 + v12;
      a3[12] = 0;
      v3 = 0;
    }
    else
    {
      if ( a3[1] == 3 )
        v11 = -v12 / v4;
      v3 -= v4;
      v8 = v12 + v4 * v11;
      a3[12] = v3;
      if ( v3 < 0 )
      {
        a3[12] = 0;
        v3 = 0;
        a3[14] = v8;
        goto LABEL_12;
      }
    }
    a3[14] = v8;
  }
LABEL_12:
  if ( v3 == 0 )
  {
    a3[10] = 0;
    a3[11] = 0;
    a3[12] = 0;
    a3[13] = 0;
    a3[14] = 0;
    if ( v11 < 0 )
      a3[9] = 1;
  }
  if ( a3[1] == 3 )
    a3[9] = 1;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::EmulateMixMultipleSegments  (binary VA: 0xff58f0)
// Original: vox::VoxNativeSubDecoder::EmulateMixMultipleSegments
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::EmulateMixMultipleSegments(vox::VoxNativeSubDecoder::Self *self, int a2)
{
  int v2;
  int v3;
  int v5;
  vox::VoxThread::Self *v6;
  int v7;

  v2 = 0;
  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  if ( *((int *)self + 47) > 2 )
  {
    v7 = G4_VCALL<int>(self, 52, a2, (char *)self + 152);
    vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer((int)(uintptr_t)(self), v7, (uint32_t *)self + 38);
    v2 = v7;
    if ( *((int *)self + 64) <= 2 )
      goto LABEL_3;
  }
  else if ( *((int *)self + 64) <= 2 )
  {
    goto LABEL_3;
  }
  v5 = G4_VCALL<int>(self, 52, a2, (char *)self + 220);
  if ( v2 < v5 )
    v2 = v5;
  vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer((int)(uintptr_t)(self), v5, (uint32_t *)self + 55);
LABEL_3:
  v3 = G4_VCALL<int>(self, 48, a2);
  if ( v3 >= v2 )
    v2 = v3;
  vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer((int)(uintptr_t)(self), v3, (uint32_t *)self + 72);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::GetCurrentState  (binary VA: 0xff5a20)
// Original: vox::VoxNativeSubDecoder::GetCurrentState
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::GetCurrentState(vox::VoxNativeSubDecoder::Self *self)
{
  return *((uint32_t *)self + 14);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::GetNextDyingSegmentLifeState  (binary VA: 0xff5a30)
// Original: vox::VoxNativeSubDecoder::GetNextDyingSegmentLifeState
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::GetNextDyingSegmentLifeState(vox::VoxNativeSubDecoder::Self *self)
{
  int result;

  result = 2;
  if ( *((int *)self + 37) > 1 )
  {
    if ( *((uint32_t *)self + 26) == 1 )
    {
      if ( *((uint32_t *)self + 15) != *((uint32_t *)self + 14) )
        return (*((uint32_t *)self + 86) >= *((uint32_t *)self + 69)) + 1;
    }
    else if ( *((uint32_t *)self + 27) == 1 )
    {
      return (*((uint32_t *)self + 75) >= *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72))
                                                  + 4))
           + 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::GetTrackParams  (binary VA: 0xff5aa0)
// Original: vox::VoxNativeSubDecoder::GetTrackParams
// ----------------------------------------------------------------------------
vox::VoxNativeSubDecoder::Self * vox::VoxNativeSubDecoder::GetTrackParams(vox::VoxNativeSubDecoder::Self *self, int a2)
{
  int v3;
  int v4;

  v3 = *(int16_t *)(a2 + 10);
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = v3;
  v4 = *(int16_t *)(a2 + 18);
  *((uint32_t *)self + 1) = *(uint32_t *)(a2 + 12);
  *((uint32_t *)self + 2) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::IsExtraSegmentNeeded  (binary VA: 0xff5ad0)
// Original: vox::VoxNativeSubDecoder::IsExtraSegmentNeeded
// ----------------------------------------------------------------------------
char vox::VoxNativeSubDecoder::IsExtraSegmentNeeded(uint32_t *a1, int a2)
{
  int v2;
  char result;

  v2 = a1[37];
  result = v2 == 0;
  if ( v2 > 0 )
  {
    result = 1;
    if ( a2 != 0 )
    {
      if ( *(uint32_t *)(a2 + 4) == 0 )
        return *(float *)(a2 + 24) > 0.0;
    }
    else if ( a1[28] != 1 )
    {
      return a1[32] == 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::IsInError  (binary VA: 0xff5b30)
// Original: vox::VoxNativeSubDecoder::IsInError
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::IsInError(vox::VoxNativeSubDecoder::Self *self)
{
  return *((uint8_t *)self + 365);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::IsStateChangeValid  (binary VA: 0xff5b40)
// Original: vox::VoxNativeSubDecoder::IsStateChangeValid
// ----------------------------------------------------------------------------
bool vox::VoxNativeSubDecoder::IsStateChangeValid(vox::VoxNativeSubDecoder::Self *self, int a2, int a3)
{
  bool result;

  result = true;
  if ( a2 >= 0 )
  {
    result = false;
    if ( a3 >= 0 )
      return *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 9) + 12 * a2) + 8 * a3) >= 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::MixSegmentInBuffer  (binary VA: 0xff5b80)
// Original: vox::VoxNativeSubDecoder::MixSegmentInBuffer
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::MixSegmentInBuffer(int a1, unsigned int a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  int v17;
  int v18;
  int i;
  int64_t v20; // rax
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  unsigned int v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  vox::VoxThread::Self *v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  unsigned int v45;

  vox::VoxThread::GetCurThreadId(v32);
  sub_BA06A0();
  if ( a3 <= 0 )
    goto LABEL_22;
  v39 = *(int16_t *)(a1 + 10);
  v4 = (uint32_t *)vox::VoxNativeSubDecoder::s_pMixingBuffer;
  v41 = a4[10];
  v35 = a4[12];
  v37 = a4[13];
  v5 = a4[14];
  v6 = a3 / (v39 * (*(int16_t *)(a1 + 18) >> 3));
  v7 = 0;
  v44 = v6;
  if ( v41 - v6 >= 0 )
    v7 = v41 - v6;
  a4[10] = v7;
  v38 = a2;
  if ( v41 > 0 )
  {
    v8 = v41;
    if ( v6 <= v41 )
      v8 = v6;
    v9 = v8 * v39;
    v34 = v8;
    v42 = v8 * v39;
    if ( v37 >= 0 )
    {
      v4 += v9;
      v38 = a2 + 2 * v9;
LABEL_9:
      v6 = v44 - v34;
      goto LABEL_10;
    }
    if ( v9 <= 0 )
      goto LABEL_9;
    v38 = a2 + 2 * v9;
    v22 = &v4[v9];
    v33 = v22;
    if ( 8 * (v42 >> 3) != 0 && (a2 > (unsigned int)(uintptr_t)(v22) || (unsigned int)(uintptr_t)(v4) > v38) && v42 > 7 )
    {
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = *(__m128i *)(a2 + v23 * 2);
        v26 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v25);
        ++v24;
        v27 = _mm_add_epi32(_mm_unpackhi_epi16(v25, v26), *(__m128i *)&v4[v23 + 4]);
        *(__m128i *)&v4[v23] = _mm_add_epi32(_mm_unpacklo_epi16(v25, v26), *(__m128i *)&v4[v23]);
        *(__m128i *)&v4[v23 + 4] = v27;
        v23 += 8;
      }
      while ( v24 < v42 >> 3 );
      v28 = 8 * (v42 >> 3);
      v4 += 8 * (v42 >> 3);
      v29 = a2 + 16 * (v42 >> 3);
      if ( v42 == v28 )
        goto LABEL_46;
    }
    else
    {
      v29 = a2;
      v28 = 0;
    }
    v30 = v29 - 2 * v28;
    do
    {
      v31 = *(int16_t *)(v30 + 2 * v28++);
      *v4++ += v31;
    }
    while ( (int)v42 > v28 );
LABEL_46:
    v4 = v33;
    goto LABEL_9;
  }
LABEL_10:
  v36 = v6 * v39;
  v43 = v35 * v39;
  if ( v6 <= 0 || v35 <= 0 )
  {
    v10 = a4[12];
  }
  else
  {
    if ( v6 < v35 )
    {
      v35 = v6;
      v43 = v6 * v39;
      if ( a4[1] == 3 )
        v37 = -v5 / v6;
    }
    if ( v43 > 0 )
    {
      for ( i = 1; i <= v43; ++i )
      {
        v4[i - 1] += ((v5 >> 15) * *(int16_t *)(v38 + 2 * i - 2)) >> 15;
        v20 = i;
        if ( (unsigned int)(v20 % v39) == 0 )
          v5 += v37;
      }
      v4 += v43;
      v38 += 2 * v43;
    }
    v21 = a4;
    v10 = a4[12] - v35;
    a4[12] = v10;
    if ( v10 < 0 )
    {
      a4[12] = 0;
      v10 = 0;
      v21 = a4;
    }
    v21[14] = v5;
  }
  if ( v10 == 0 )
  {
    a4[10] = 0;
    a4[11] = 0;
    a4[12] = 0;
    a4[13] = 0;
    a4[14] = 0;
    if ( v37 < 0 )
    {
      a4[9] = 1;
    }
    else
    {
      v40 = v43 + 1;
      if ( v36 >= v43 + 1 )
      {
        v11 = v36 - v43;
        v45 = 8 * ((unsigned int)(v36 - v43) >> 3);
        if ( v45 == 0 )
          goto LABEL_20;
        if ( v38 <= (unsigned int)(uintptr_t)(&v4[v11]) && (unsigned int)(uintptr_t)(v4) <= v38 + 2 * v11 || v11 <= 7 )
          goto LABEL_20;
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = *(__m128i *)(v38 + v12 * 2);
          v15 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v14);
          ++v13;
          v16 = _mm_add_epi32(_mm_unpackhi_epi16(v14, v15), *(__m128i *)&v4[v12 + 4]);
          *(__m128i *)&v4[v12] = _mm_add_epi32(_mm_unpacklo_epi16(v14, v15), *(__m128i *)&v4[v12]);
          *(__m128i *)&v4[v12 + 4] = v16;
          v12 += 8;
        }
        while ( (unsigned int)(v36 - v43) >> 3 > v13 );
        v40 += v45;
        v4 += 8 * ((unsigned int)(v36 - v43) >> 3);
        v38 += 16 * ((unsigned int)(v36 - v43) >> 3);
        if ( v11 != v45 )
        {
LABEL_20:
          v17 = v40;
          do
          {
            v18 = *(int16_t *)(v38 - 2 * v40 + 2 * v17++);
            *v4++ += v18;
          }
          while ( v36 >= v17 );
        }
      }
    }
  }
LABEL_22:
  if ( a4[1] == 3 )
    a4[9] = 1;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::MixMultipleSegments  (binary VA: 0xff5fd0)
// Original: vox::VoxNativeSubDecoder::MixMultipleSegments
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::MixMultipleSegments(vox::VoxNativeSubDecoder::Self *self, int16_t *a2, int a3)
{
  size_t v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v12;
  vox::VoxThread::Self *s;
  size_t n;
  int v15;
  int CurThreadId;
  int16_t v17;
  int16_t v18;
  int v19;

  CurThreadId = vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0("VoxNativeSubDecoder::MixMultipleSegments", CurThreadId);
  v17 = *((uint16_t *)self + 5);
  v3 = 2 * a3;
  v18 = *((uint16_t *)self + 9);
  if ( 2 * a3 <= vox::VoxNativeSubDecoder::s_nbMixingBufferBytes[0] )
  {
    v3 = vox::VoxNativeSubDecoder::s_nbMixingBufferBytes[0];
    v4 = (void *)vox::VoxNativeSubDecoder::s_pMixingBuffer;
  }
  else
  {
    if ( vox::VoxNativeSubDecoder::s_pMixingBuffer != 0 )
      VoxFreeInternal(vox::VoxNativeSubDecoder::s_pMixingBuffer);
    v4 = (void *)VoxAllocInternal(
                   v3,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder.cpp"),
                   (int)(uintptr_t)("MixMultipleSegments"),
                   585);
    vox::VoxNativeSubDecoder::s_pMixingBuffer = (uintptr_t)(uintptr_t)(v4);
    if ( v4 == nullptr )
    {
      *((uint32_t *)self + 47) = 1;
      *((uint32_t *)self + 64) = 1;
      *((uint32_t *)self + 81) = 1;
      v19 = 0;
      vox::VoxNativeSubDecoder::s_nbMixingBufferBytes[0] = 0;
      goto LABEL_16;
    }
    vox::VoxNativeSubDecoder::s_nbMixingBufferBytes[0] = 2 * a3;
  }
  n = v3;
  v5 = 0;
  memset(v4, 0, n);
  if ( *((int *)self + 47) > 2 )
  {
    v15 = G4_VCALL<int>(self, 24, a2, a3, (char *)self + 152);
    vox::VoxNativeSubDecoder::MixSegmentInBuffer((int)(uintptr_t)(self), (unsigned int)(uintptr_t)(a2), v15, (uint32_t *)((char *)self + 152));
    v5 = v15;
  }
  if ( *((int *)self + 64) > 2 )
  {
    v12 = G4_VCALL<int>(self, 24, a2, a3, (char *)self + 220);
    if ( v5 < v12 )
      v5 = v12;
    vox::VoxNativeSubDecoder::MixSegmentInBuffer((int)(uintptr_t)(self), (unsigned int)(uintptr_t)(a2), v12, (uint32_t *)((char *)self + 220));
  }
  v6 = G4_VCALL<int>(self, 20, a2, a3);
  if ( v6 >= v5 )
    v5 = v6;
  v19 = v5;
  vox::VoxNativeSubDecoder::MixSegmentInBuffer((int)(uintptr_t)(self), (unsigned int)(uintptr_t)(a2), v6, (uint32_t *)((char *)self + 288));
  v7 = vox::VoxNativeSubDecoder::s_pMixingBuffer;
  v8 = a3 / ((v18 >> 3) * v17) * *((int16_t *)self + 5);
  if ( v8 > 0 )
  {
    for ( i = 0; i != v8; ++i )
    {
      while ( 1 )
      {
        v10 = *(uint32_t *)(v7 + 4 * i);
        if ( (unsigned int)(v10 + 0x8000) <= 0xFFFF )
          break;
        a2[i++] = ((v10 >> 31) & 1) + 0x7FFF;
        if ( i == v8 )
          goto LABEL_16;
      }
      a2[i] = v10;
    }
  }
LABEL_16:
  sub_BA06B0("VoxNativeSubDecoder::MixMultipleSegments", CurThreadId);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::GetState  (binary VA: 0xff6260)
// Original: vox::VoxNativeSubDecoder::GetState
// ----------------------------------------------------------------------------
vox::NativePlaylistsManager::Self ** vox::VoxNativeSubDecoder::GetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  char *v2;
  vox::NativePlaylistsManager::Self **result;
  char *v4;
  unsigned int v5;
  int v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  unsigned int v11;
  int v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  unsigned int v17;
  int v18;
  char *v19;
  char *v20;

  v2 = (char *)(self + 38);
  vox::NativePlaylistsManager::SetState(a2[1], *(self + 12));
  result = a2;
  a2[2] = *(self + 13);
  a2[3] = *(self + 14);
  a2[4] = *(self + 15);
  a2[5] = *(self + 16);
  a2[6] = *(self + 17);
  a2[7] = *(self + 18);
  v4 = (char *)(a2 + 27);
  *((uint8_t *)a2 + 32) = *((uint8_t *)self + 76);
  a2[9] = *(self + 20);
  a2[10] = *(self + 21);
  a2[11] = *(self + 22);
  a2[12] = *(self + 23);
  a2[13] = *(self + 24);
  a2[14] = *(self + 25);
  a2[15] = *(self + 26);
  a2[16] = *(self + 27);
  a2[17] = *(self + 28);
  a2[18] = *(self + 29);
  a2[19] = *(self + 30);
  a2[20] = *(self + 31);
  a2[21] = *(self + 32);
  a2[22] = *(self + 33);
  a2[23] = *(self + 34);
  a2[24] = *(self + 35);
  a2[25] = *(self + 36);
  a2[26] = *(self + 37);
  v5 = 66;
  if ( ((unsigned int)(uintptr_t)(a2 + 27) & 1) != 0 )
  {
    v4 = (char *)a2 + 109;
    v2 = (char *)self + 153;
    *((uint8_t *)a2 + 108) = *((uint8_t *)self + 152);
    v5 = 65;
    if ( (((unsigned int)(uintptr_t)(a2) + 109) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v4 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v5 -= 2;
  *(uint16_t *)v4 = *(uint16_t *)v2;
  v2 += 2;
  v4 += 2;
LABEL_3:
  std::memcpy(v4, v2, 4 * (v5 >> 2));
  v8 = &v2[4 * (v5 >> 2)];
  v7 = &v4[4 * (v5 >> 2)];
  v6 = 0;
  if ( (v5 & 2) != 0 )
  {
    *(uint16_t *)v7 = *(uint16_t *)v8;
    v6 = 2;
  }
  if ( (v5 & 1) != 0 )
    v7[v6] = v8[v6];
  v9 = (char *)(a2 + 44);
  v10 = (char *)(self + 55);
  v11 = 66;
  if ( ((unsigned int)(uintptr_t)(a2 + 44) & 1) != 0 )
  {
    v9 = (char *)a2 + 177;
    v10 = (char *)self + 221;
    *((uint8_t *)a2 + 176) = *((uint8_t *)self + 220);
    v11 = 65;
    if ( (((unsigned int)(uintptr_t)(a2) + 177) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( (((uint8_t)(uintptr_t)a2 - 80) & 2) == 0 )
  {
    goto LABEL_9;
  }
  v11 -= 2;
  *(uint16_t *)v9 = *(uint16_t *)v10;
  v10 += 2;
  v9 += 2;
LABEL_9:
  std::memcpy(v9, v10, 4 * (v11 >> 2));
  v14 = &v10[4 * (v11 >> 2)];
  v13 = &v9[4 * (v11 >> 2)];
  v12 = 0;
  if ( (v11 & 2) != 0 )
  {
    *(uint16_t *)v13 = *(uint16_t *)v14;
    v12 = 2;
  }
  if ( (v11 & 1) != 0 )
    v13[v12] = v14[v12];
  v15 = (char *)(a2 + 61);
  v16 = (char *)(self + 72);
  v17 = 66;
  if ( ((unsigned int)(uintptr_t)(a2 + 61) & 1) != 0 )
  {
    v15 = (char *)a2 + 245;
    v16 = (char *)self + 289;
    *((uint8_t *)a2 + 244) = *((uint8_t *)self + 288);
    v17 = 65;
    if ( (((unsigned int)(uintptr_t)(a2) + 245) & 2) == 0 )
      goto LABEL_15;
  }
  else if ( (((uint8_t)(uintptr_t)a2 - 12) & 2) == 0 )
  {
    goto LABEL_15;
  }
  v17 -= 2;
  *(uint16_t *)v15 = *(uint16_t *)v16;
  v16 += 2;
  v15 += 2;
LABEL_15:
  std::memcpy(v15, v16, 4 * (v17 >> 2));
  v20 = &v16[4 * (v17 >> 2)];
  v19 = &v15[4 * (v17 >> 2)];
  v18 = 0;
  if ( (v17 & 2) != 0 )
  {
    *(uint16_t *)v19 = *(uint16_t *)v20;
    v18 = 2;
  }
  if ( (v17 & 1) != 0 )
    v19[v18] = v20[v18];
  a2[78] = *(self + 89);
  a2[79] = *(self + 90);
  *((uint8_t *)a2 + 320) = *((uint8_t *)self + 364);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::SetState  (binary VA: 0xff6520)
// Original: vox::VoxNativeSubDecoder::SetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::SetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  char *v2;
  char *v3;
  unsigned int v4;
  int v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  unsigned int v10;
  int v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  unsigned int v16;
  int v17;
  char *v18;
  char *v19;
  vox::NativePlaylistsManager::Self *v20;

  vox::VoxThread::GetCurThreadId(v20);
  v2 = (char *)(a2 + 27);
  sub_BA06A0();
  vox::NativePlaylistsManager::SetState(*(self + 12), a2[1]);
  *(self + 13) = a2[2];
  *(self + 14) = a2[3];
  *(self + 15) = a2[4];
  *(self + 16) = a2[5];
  *(self + 17) = a2[6];
  *(self + 18) = a2[7];
  v3 = (char *)(self + 38);
  *((uint8_t *)self + 76) = *((uint8_t *)a2 + 32);
  *(self + 20) = a2[9];
  *(self + 21) = a2[10];
  *(self + 22) = a2[11];
  *(self + 23) = a2[12];
  *(self + 24) = a2[13];
  *(self + 25) = a2[14];
  *(self + 26) = a2[15];
  *(self + 27) = a2[16];
  *(self + 28) = a2[17];
  *(self + 29) = a2[18];
  *(self + 30) = a2[19];
  *(self + 31) = a2[20];
  *(self + 32) = a2[21];
  *(self + 33) = a2[22];
  *(self + 34) = a2[23];
  *(self + 35) = a2[24];
  *(self + 36) = a2[25];
  *(self + 37) = a2[26];
  v4 = 66;
  if ( ((unsigned int)(uintptr_t)(self + 38) & 1) != 0 )
  {
    v3 = (char *)self + 153;
    v2 = (char *)a2 + 109;
    *((uint8_t *)self + 152) = *((uint8_t *)a2 + 108);
    v4 = 65;
    if ( (((unsigned int)(uintptr_t)(self) + 153) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (((uint8_t)(uintptr_t)self - 104) & 2) == 0 )
  {
    goto LABEL_3;
  }
  v4 -= 2;
  *(uint16_t *)v3 = *(uint16_t *)v2;
  v2 += 2;
  v3 += 2;
LABEL_3:
  std::memcpy(v3, v2, 4 * (v4 >> 2));
  v7 = &v2[4 * (v4 >> 2)];
  v6 = &v3[4 * (v4 >> 2)];
  v5 = 0;
  if ( (v4 & 2) != 0 )
  {
    *(uint16_t *)v6 = *(uint16_t *)v7;
    v5 = 2;
  }
  if ( (v4 & 1) != 0 )
    v6[v5] = v7[v5];
  v8 = (char *)(self + 55);
  v9 = (char *)(a2 + 44);
  v10 = 66;
  if ( ((unsigned int)(uintptr_t)(self + 55) & 1) != 0 )
  {
    v8 = (char *)self + 221;
    v9 = (char *)a2 + 177;
    *((uint8_t *)self + 220) = *((uint8_t *)a2 + 176);
    v10 = 65;
    if ( (((unsigned int)(uintptr_t)(self) + 221) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( (((uint8_t)(uintptr_t)self - 36) & 2) == 0 )
  {
    goto LABEL_9;
  }
  v10 -= 2;
  *(uint16_t *)v8 = *(uint16_t *)v9;
  v9 += 2;
  v8 += 2;
LABEL_9:
  std::memcpy(v8, v9, 4 * (v10 >> 2));
  v13 = &v9[4 * (v10 >> 2)];
  v12 = &v8[4 * (v10 >> 2)];
  v11 = 0;
  if ( (v10 & 2) != 0 )
  {
    *(uint16_t *)v12 = *(uint16_t *)v13;
    v11 = 2;
  }
  if ( (v10 & 1) != 0 )
    v12[v11] = v13[v11];
  v14 = (char *)(self + 72);
  v15 = (char *)(a2 + 61);
  v16 = 66;
  if ( ((unsigned int)(uintptr_t)(self + 72) & 1) != 0 )
  {
    v14 = (char *)self + 289;
    v15 = (char *)a2 + 245;
    *((uint8_t *)self + 288) = *((uint8_t *)a2 + 244);
    v16 = 65;
    if ( (((unsigned int)(uintptr_t)(self) + 289) & 2) == 0 )
      goto LABEL_15;
  }
  else if ( ((uint8_t)(uintptr_t)v14 & 2) == 0 )
  {
    goto LABEL_15;
  }
  v16 -= 2;
  *(uint16_t *)v14 = *(uint16_t *)v15;
  v15 += 2;
  v14 += 2;
LABEL_15:
  std::memcpy(v14, v15, 4 * (v16 >> 2));
  v19 = &v15[4 * (v16 >> 2)];
  v18 = &v14[4 * (v16 >> 2)];
  v17 = 0;
  if ( (v16 & 2) != 0 )
  {
    *(uint16_t *)v18 = *(uint16_t *)v19;
    v17 = 2;
  }
  if ( (v16 & 1) != 0 )
    v18[v17] = v19[v17];
  *(self + 89) = a2[78];
  *(self + 90) = a2[79];
  *((uint8_t *)self + 364) = *((uint8_t *)a2 + 320);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::StopSegment  (binary VA: 0xff6810)
// Original: vox::VoxNativeSubDecoder::StopSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::StopSegment(int a1, int a2)
{
  int result;
  bool v3;

  result = *(uint16_t *)(a1 + 8);
  if ( (uint16_t)result == 2 || (uint16_t)result == 17 )
  {
    result = G4_VCALL<int>(a1, 32, *(uint32_t *)(a2 + 60));
    v3 = *(uint32_t *)(a2 + 36) == 1;
    *(uint32_t *)(a2 + 60) = -1;
    if ( !v3 )
      goto LABEL_4;
  }
  else if ( *(uint32_t *)(a2 + 36) != 1 )
  {
    goto LABEL_4;
  }
  --*(uint32_t *)(a1 + 148);
LABEL_4:
  if ( *(uint32_t *)(a2 + 4) == 1 )
    *(uint8_t *)(a1 + 364) = 0;
  *(uint32_t *)a2 = -1;
  *(uint32_t *)(a2 + 8) = 0;
  *(uint32_t *)(a2 + 12) = 0;
  *(uint32_t *)(a2 + 16) = 0;
  *(uint32_t *)(a2 + 20) = 0;
  *(uint32_t *)(a2 + 24) = 1;
  *(uint32_t *)(a2 + 28) = 1;
  *(uint32_t *)(a2 + 32) = 0;
  *(uint32_t *)(a2 + 36) = 2;
  *(uint32_t *)(a2 + 60) = -1;
  *(uint8_t *)(a2 + 64) = 0;
  *(uint32_t *)(a2 + 40) = 0;
  *(uint32_t *)(a2 + 44) = 0;
  *(uint32_t *)(a2 + 48) = 0;
  *(uint32_t *)(a2 + 52) = 0;
  *(uint32_t *)(a2 + 56) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::SwapOldAndCurrentSegments  (binary VA: 0xff68f0)
// Original: vox::VoxNativeSubDecoder::SwapOldAndCurrentSegments
// ----------------------------------------------------------------------------
unsigned int vox::VoxNativeSubDecoder::SwapOldAndCurrentSegments(vox::VoxNativeSubDecoder::Self *self)
{
  char *v1;
  char *v2;
  unsigned int v3;
  int v4;
  char *v5;
  char *v6;
  char *v7;
  uint16_t *v8;
  unsigned int result;
  int v10;
  char *v11;
  uint16_t *v12;
  uint32_t v13[20];

  std::memcpy(v13, (char *)self + 288, 66);
  v1 = (char *)self + 220;
  v2 = (char *)self + 288;
  v3 = 66;
  if ( (((unsigned int)(uintptr_t)(self) + 288) & 1) != 0 )
  {
    v2 = (char *)self + 289;
    v1 = (char *)self + 221;
    *((uint8_t *)self + 288) = *((uint8_t *)self + 220);
    v3 = 65;
    if ( (((unsigned int)(uintptr_t)(self) + 289) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v3 -= 2;
  *(uint16_t *)v2 = *(uint16_t *)v1;
  v1 += 2;
  v2 += 2;
LABEL_3:
  std::memcpy(v2, v1, 4 * (v3 >> 2));
  v6 = &v1[4 * (v3 >> 2)];
  v5 = &v2[4 * (v3 >> 2)];
  v4 = 0;
  if ( (v3 & 2) != 0 )
  {
    *(uint16_t *)v5 = *(uint16_t *)v6;
    v4 = 2;
  }
  if ( (v3 & 1) != 0 )
    v5[v4] = v6[v4];
  *((uint32_t *)self + 73) = 1;
  v7 = (char *)self + 220;
  v8 = (uint16_t *)(v13);
  result = 66;
  if ( (((uint8_t)(uintptr_t)self - 36) & 1) != 0 )
  {
    v7 = (char *)self + 221;
    v8 = (uint16_t *)((char *)v13 + 1);
    *((uint8_t *)self + 220) = v13[0];
    result = 65;
    if ( (((unsigned int)(uintptr_t)(self) + 221) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( (((uint8_t)(uintptr_t)self - 36) & 2) == 0 )
  {
    goto LABEL_9;
  }
  result -= 2;
  *(uint16_t *)v7 = *v8++;
  v7 += 2;
LABEL_9:
  std::memcpy(v7, v8, 4 * (result >> 2));
  v12 = &v8[2 * (result >> 2)];
  v11 = &v7[4 * (result >> 2)];
  v10 = 0;
  if ( (result & 2) != 0 )
  {
    *(uint16_t *)v11 = *v12;
    v10 = 1;
  }
  if ( (result & 1) != 0 )
  {
    result = LOBYTE(v12[v10]);
    v11[v10 * 2] = result;
  }
  *((uint32_t *)self + 56) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::ApplyTransitionRule  (binary VA: 0xff6ad0)
// Original: vox::VoxNativeSubDecoder::ApplyTransitionRule
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::ApplyTransitionRule(vox::VoxNativeSubDecoder::Self *a1, int a2)
{
  int NextDyingSegmentLifeState;
  uint32_t *PlaylistElement;
  int v4;
  vox::VoxNativeSubDecoder::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  NextDyingSegmentLifeState = vox::VoxNativeSubDecoder::GetNextDyingSegmentLifeState(a1);
  if ( *(uint32_t *)a2 == 1 )
  {
    if ( NextDyingSegmentLifeState == 2 )
    {
      vox::NativePlaylistsManager::TransposePlaylistParameters(
        *((vox::NativePlaylistsManager::Self **)a1 + 12),
        *((uint32_t *)a1 + 17),
        *((uint32_t *)a1 + 18));
    }
    else
    {
      v4 = *((uint32_t *)a1 + 16);
      if ( *((uint32_t *)a1 + 17) == v4 )
      {
        vox::NativePlaylistsManager::SetPlaylistToPreviousState(
          *((vox::NativePlaylistsManager::Self **)a1 + 12),
          *((uint32_t *)a1 + 16));
        v4 = *((uint32_t *)a1 + 16);
      }
      vox::NativePlaylistsManager::TransposePlaylistParameters(
        *((vox::NativePlaylistsManager::Self **)a1 + 12),
        v4,
        *((uint32_t *)a1 + 18));
      vox::VoxNativeSubDecoder::SwapOldAndCurrentSegments(a1);
    }
    PlaylistElement = (uint32_t *)vox::NativePlaylistsManager::GetPlaylistElement(
                                  *((vox::NativePlaylistsManager::Self **)a1 + 12),
                                  *((uint32_t *)a1 + 18),
                                  1,
                                  -1);
    if ( (int)(float)((float)*((int *)a1 + 3) * *(float *)(a2 + 24)) <= 0 )
    {
      if ( *((int *)a1 + 64) > 2 )
      {
        *((uint32_t *)a1 + 64) = 0;
        --*((uint32_t *)a1 + 37);
      }
      if ( *((int *)a1 + 47) > 2 )
      {
        *((uint32_t *)a1 + 47) = 0;
        --*((uint32_t *)a1 + 37);
      }
    }
  }
  else
  {
    PlaylistElement = (uint32_t *)vox::NativePlaylistsManager::GetPlaylistElement(
                                  *((vox::NativePlaylistsManager::Self **)a1 + 12),
                                  *((uint32_t *)a1 + 18),
                                  0,
                                  -1);
  }
  if ( PlaylistElement != nullptr )
  {
    *((uint32_t *)a1 + 30) = *PlaylistElement;
    *((uint32_t *)a1 + 31) = PlaylistElement[1];
    *((uint32_t *)a1 + 32) = PlaylistElement[2];
    *((uint32_t *)a1 + 33) = PlaylistElement[3];
    *((uint32_t *)a1 + 34) = PlaylistElement[4];
    *((uint32_t *)a1 + 31) = *(uint32_t *)a2;
    *((uint32_t *)a1 + 32) = *(uint32_t *)(a2 + 8);
  }
  else
  {
    *((uint32_t *)a1 + 30) = -1;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::UpdateCurrentSegmentState  (binary VA: 0xff6ca0)
// Original: vox::VoxNativeSubDecoder::UpdateCurrentSegmentState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::UpdateCurrentSegmentState(int a1, int a2)
{
  int v2;
  bool v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int16_t v9;
  float v10; // xmm0_4
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  char *v19;
  int v20;
  char *v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  vox::VoxThread::Self *v26;
  int v27;
  uint32_t *v28;
  char *v29;
  int v30;

  vox::VoxThread::GetCurThreadId(v26);
  sub_BA06A0();
  v2 = *(uint32_t *)(a1 + 120);
  if ( v2 == -1 )
  {
    *(uint32_t *)(a1 + 312) = 1;
    *(uint32_t *)(a1 + 316) = 1;
    *(uint32_t *)(a1 + 324) = 4;
    *(uint32_t *)(a1 + 356) = -1;
    goto LABEL_18;
  }
  v3 = *(uint32_t *)(a1 + 124) == 1;
  *(uint8_t *)(a1 + 353) = 1;
  *(uint32_t *)(a1 + 288) = v2;
  if ( v3 )
  {
    G4_VCALL<void>(a1, 40, *(uint32_t *)(a1 + 300));
  }
  else
  {
    v4 = *(uint32_t **)(a1 + 44);
    v5 = *(uint32_t *)(*(uint32_t *)(*v4 + 12 * v2) + 4 * (*(uint32_t *)(a1 + 128) != 1));
    *(uint32_t *)(a1 + 304) = v5;
    *(uint32_t *)(a1 + 308) = *(uint32_t *)(*(uint32_t *)(*v4 + 12 * v2) + 8);
    v6 = *(uint32_t *)(a1 + 136);
    *(uint32_t *)(a1 + 312) = v6;
    *(uint32_t *)(a1 + 316) = v6;
    *(uint32_t *)(a1 + 320) = *(uint32_t *)(a1 + 132);
    v7 = *(uint32_t *)(a1 + 360);
    if ( v7 < 0 )
    {
      v8 = -v7;
      *(uint32_t *)(a1 + 300) = v8;
    }
    else
    {
      v8 = v5;
      *(uint32_t *)(a1 + 300) = v5;
    }
    G4_VCALL<void>(a1, 40, v8);
    *(uint32_t *)(a1 + 324) = 3;
  }
  v9 = *(uint16_t *)(a1 + 8);
  if ( (v9 == 2 || v9 == 17) && *(uint32_t *)(a1 + 348) == -1 )
  {
    *(uint32_t *)(a1 + 348) = G4_VCALL<int>(a1, 28);
    *(uint8_t *)(a1 + 352) = 0;
    if ( a2 == 0 )
      goto LABEL_16;
  }
  else if ( a2 == 0 )
  {
LABEL_16:
    *(uint32_t *)(a1 + 328) = 0;
    *(uint32_t *)(a1 + 332) = 0;
    *(uint32_t *)(a1 + 336) = 0;
    *(uint32_t *)(a1 + 340) = 0;
    *(uint32_t *)(a1 + 344) = 0;
    goto LABEL_18;
  }
  v10 = (float)*(int *)(a1 + 12);
  v11 = (int)(float)(v10 * *(float *)(a2 + 16));
  *(uint32_t *)(a1 + 332) = v11;
  if ( v11 <= 0 )
    goto LABEL_16;
  v12 = *(uint32_t *)(a2 + 4);
  if ( v12 != 0 )
  {
    if ( v12 != 6 || *(uint32_t *)(a1 + 124) != 0 )
    {
      v14 = *(uint32_t *)(a1 + 328);
      v30 = 0;
    }
    else
    {
      v15 = (int)(float)(v10 * *(float *)(a2 + 20));
      v16 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * v2) + 4);
      v17 = v15 - v11;
      v30 = v16;
      if ( *(uint32_t *)(a1 + 128) == 1 )
      {
        v30 = 0;
        v17 = v15 + v16 - v11;
      }
      v14 = v17 + *(uint32_t *)(a1 + 360);
      *(uint32_t *)(a1 + 328) = v14;
    }
  }
  else
  {
    v13 = *(uint32_t *)(a1 + 124);
    v14 = (int)(float)((float)(*(float *)(a2 + 20) - *(float *)(a2 + 16)) * v10);
    *(uint32_t *)(a1 + 328) = v14;
    if ( v13 != 0 )
    {
      v30 = *(uint32_t *)(a1 + 300);
    }
    else
    {
      v30 = 0;
      if ( *(uint32_t *)(a1 + 128) == 0 )
        v30 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * v2) + 4);
    }
  }
  if ( v14 >= 0 || (v11 += v14, *(uint32_t *)(a1 + 328) = 0, *(uint32_t *)(a1 + 332) = v11, v11 > 0) )
  {
    if ( *(uint32_t *)(a1 + 316) == 1 )
    {
      v27 = 0;
      v28 = nullptr;
      v18 = (uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 288));
      v19 = (char *)v18[1];
      v29 = (char *)*v18;
      if ( (int)(uintptr_t)(&v19[-*v18]) >> 2 != 0 )
      {
        v25 = VoxAllocInternal(
                4 * ((int)(uintptr_t)(&v19[-*v18]) >> 2),
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        v19 = (char *)v18[1];
        v28 = (uint32_t *)v25;
        v27 = v25;
        v29 = (char *)*v18;
      }
      v20 = 0;
      if ( v19 != v29 )
      {
        v21 = v29;
        v22 = v28;
        do
        {
          if ( v22 != nullptr )
            *v22 = *(uint32_t *)v21;
          v21 += 4;
          ++v22;
        }
        while ( v21 != v19 );
        v20 = ((int)(uintptr_t)(&v28[((unsigned int)(v21 - (v29 + 4)) >> 2) + 1]) - v27) >> 2;
      }
      if ( *(uint32_t *)(a2 + 12) == 1 )
        v23 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 288)) + 4 * v20 - 4);
      else
        v23 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 288)) + 8);
      v11 = *(uint32_t *)(a1 + 332);
      v24 = v23 - v30 + 1;
      if ( v24 < v11 )
      {
        *(uint32_t *)(a1 + 332) = v24;
        v11 = v24;
      }
      if ( v28 != nullptr )
      {
        VoxFreeInternal(v28);
        v11 = *(uint32_t *)(a1 + 332);
      }
    }
    *(uint32_t *)(a1 + 336) = v11;
    *(uint32_t *)(a1 + 344) = 0;
    *(uint32_t *)(a1 + 340) = 0x40000000 / v11;
  }
  else
  {
    *(__m128i *)(a1 + 332) = g4_m128_from<__m128i>(0LL);
  }
LABEL_18:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::UpdateDyingSegmentState  (binary VA: 0xff7160)
// Original: vox::VoxNativeSubDecoder::UpdateDyingSegmentState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::UpdateDyingSegmentState(int a1, int a2)
{
  uint32_t *v2;
  char *v3;
  char *v4;
  int v5;
  int v6;
  char *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  vox::VoxThread::Self *v12;
  uint32_t *v13;
  uint32_t *v14;

  vox::VoxThread::GetCurThreadId(v12);
  sub_BA06A0();
  if ( *(int *)(a1 + 212) >= 0 )
  {
    G4_VCALL<void>(a1, 32, *(uint32_t *)(a1 + 212));
    *(uint32_t *)(a1 + 212) = -1;
  }
  vox::VoxNativeSubDecoder::CopySegmentState(a1, a1 + 152, (uint8_t *)(a1 + 220));
  if ( *(int *)(a1 + 280) >= 0 )
    *(uint32_t *)(a1 + 280) = -1;
  if ( *(uint32_t *)(a1 + 188) == 3 )
    *(uint32_t *)(a1 + 188) = 4;
  v14 = nullptr;
  v13 = nullptr;
  v2 = (uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 152));
  v3 = (char *)v2[1];
  v4 = (char *)*v2;
  v5 = (int)(uintptr_t)(&v3[-*v2]) >> 2;
  if ( v5 != 0 )
  {
    v13 = (uint32_t *)VoxAllocInternal(
                      4 * v5,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    v14 = v13;
    v3 = (char *)v2[1];
    v4 = (char *)*v2;
  }
  v6 = 0;
  if ( v3 != v4 )
  {
    v7 = v4;
    v8 = v13;
    do
    {
      if ( v8 != nullptr )
        *v8 = *(uint32_t *)v7;
      v7 += 4;
      ++v8;
    }
    while ( v7 != v3 );
    v6 = &v13[((unsigned int)(v7 - (v4 + 4)) >> 2) + 1] - v14;
  }
  if ( *(uint32_t *)(a1 + 264) != 0 )
  {
    v9 = *(uint32_t *)(a1 + 200);
  }
  else
  {
    *(uint32_t *)(a1 + 208) = 0x40000000;
    v9 = 256;
  }
  if ( a2 != 0 )
    v9 = (int)(float)((float)*(int *)(a1 + 12) * *(float *)(a2 + 24));
  if ( *(uint32_t *)(a1 + 184) == 1 )
    v10 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 220)) + 4 * v6 - 4);
  else
    v10 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 220)) + 8);
  v11 = v10 - *(uint32_t *)(a1 + 164) + 1;
  if ( v11 > v9 )
    v11 = v9;
  *(uint32_t *)(a1 + 196) = v11;
  *(uint32_t *)(a1 + 200) = v11;
  if ( v11 > 0 )
    *(uint32_t *)(a1 + 204) = -*(uint32_t *)(a1 + 208) / v11;
  if ( v13 != nullptr )
    VoxFreeInternal(v13);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::UpdateOldSegmentState  (binary VA: 0xff73b0)
// Original: vox::VoxNativeSubDecoder::UpdateOldSegmentState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::UpdateOldSegmentState(int a1, int a2)
{
  int v2;
  float v3; // xmm0_4
  int v4;
  uint32_t *v5;
  char *v6;
  int v7;
  int v8;
  char *v9;
  uint32_t *v10;
  int v11;
  bool v12;
  char v13; // di
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  vox::VoxThread::Self *v24;
  char **v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  char *v31;

  v2 = a1;
  vox::VoxThread::GetCurThreadId(v24);
  sub_BA06A0();
  if ( *(int *)(a1 + 280) >= 0 )
  {
    G4_VCALL<void>(a1, 32, *(uint32_t *)(a1 + 280));
    *(uint32_t *)(a1 + 280) = -1;
  }
  vox::VoxNativeSubDecoder::CopySegmentState(a1, a1 + 220, (uint8_t *)(a1 + 288));
  if ( *(int *)(a1 + 348) >= 0 )
    *(uint32_t *)(a1 + 348) = -1;
  if ( a2 == 0
    || (v3 = (float)*(int *)(a1 + 12),
        v28 = *(uint32_t *)(a1 + 264),
        *(uint32_t *)(a1 + 252) = *(uint32_t *)(a2 + 12),
        v4 = (int)(float)(*(float *)(a2 + 24) * v3),
        *(uint32_t *)(a1 + 264) = v4,
        v4 <= 0) )
  {
    *(uint32_t *)(a1 + 260) = 0;
    *(uint32_t *)(a1 + 264) = 0;
    *(uint32_t *)(a1 + 268) = 0;
    *(uint32_t *)(a1 + 272) = 0;
    *(uint32_t *)(a1 + 276) = 0;
    goto LABEL_30;
  }
  v27 = *(uint32_t *)(a1 + 232);
  v26 = nullptr;
  v30 = nullptr;
  v29 = (int)(float)(v3 * *(float *)(a2 + 28));
  v5 = (uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 220));
  v6 = (char *)v5[1];
  v31 = (char *)*v5;
  v7 = (int)(uintptr_t)(&v6[-*v5]) >> 2;
  if ( v7 != 0 )
  {
    v25 = (char **)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 220));
    v30 = (uint32_t *)VoxAllocInternal(
                      4 * v7,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    v26 = v30;
    v6 = v25[1];
    v31 = *v25;
  }
  v8 = 0;
  if ( v31 != v6 )
  {
    v9 = v31;
    v10 = v30;
    do
    {
      if ( v10 != nullptr )
        *v10 = *(uint32_t *)v9;
      v9 += 4;
      ++v10;
    }
    while ( v9 != v6 );
    v8 = &v30[((unsigned int)(v9 - (v31 + 4)) >> 2) + 1] - v26;
  }
  v11 = *(uint32_t *)(a2 + 4);
  if ( v11 != 0 )
  {
    switch ( v11 )
    {
      case 4:
        v19 = *(uint32_t *)(a1 + 232);
        if ( v8 > 0 )
        {
          v22 = *v30;
          if ( *v30 <= v19 )
          {
            v23 = 0;
            do
            {
              if ( ++v23 == v8 )
              {
                v2 = a1;
                v19 = *(uint32_t *)(a1 + 232);
                goto LABEL_35;
              }
              v22 = v30[v23];
            }
            while ( v22 <= *(uint32_t *)(a1 + 232) );
            v2 = a1;
          }
          v19 = *(uint32_t *)(a1 + 232);
          v27 = v22;
        }
        break;
      case 5:
        v19 = *(uint32_t *)(a1 + 232);
        if ( v8 > 3 )
        {
          v20 = v30[3];
          if ( v20 <= v19 )
          {
            v21 = 3;
            do
            {
              if ( ++v21 == v8 )
              {
                v2 = a1;
                goto LABEL_35;
              }
              v20 = v30[v21];
            }
            while ( v20 <= v19 );
            v2 = a1;
          }
          v27 = v20;
        }
        break;
      case 6:
        v27 = *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(a1 + 44) + 12 * *(uint32_t *)(a1 + 220)) + 8);
      default:
        v19 = *(uint32_t *)(a1 + 232);
        break;
    }
LABEL_35:
    v29 += v27 - v19;
    *(uint32_t *)(v2 + 260) = v29;
    v13 = 1;
    if ( v29 >= 0 )
      goto LABEL_17;
    goto LABEL_36;
  }
  v12 = *(uint32_t *)(a1 + 248) == 1;
  *(uint32_t *)(a1 + 260) = v29;
  v13 = v12;
  v27 = *(uint32_t *)(a1 + 232);
  if ( v29 >= 0 )
  {
LABEL_17:
    v14 = *(uint32_t *)(v2 + 264);
LABEL_18:
    if ( v13 != 0 )
    {
      v15 = *(uint32_t *)(a2 + 12) == 1
          ? *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(v2 + 44) + 12 * *(uint32_t *)(v2 + 220)) + 4 * v8 - 4)
          : *(uint32_t *)(*(uint32_t *)(**(uint32_t **)(v2 + 44) + 12 * *(uint32_t *)(v2 + 220)) + 8);
      v16 = v15 - v27 + 1;
      if ( v16 < v14 )
      {
        *(uint32_t *)(v2 + 264) = v16;
        v14 = v16;
      }
    }
    *(uint32_t *)(v2 + 268) = v14;
    if ( v28 <= 0 )
    {
      *(uint32_t *)(v2 + 276) = 0x40000000;
      v18 = -1073741824;
    }
    else
    {
      v17 = *(uint32_t *)(v2 + 344);
      *(uint32_t *)(v2 + 276) = v17;
      v18 = -v17;
    }
    *(uint32_t *)(v2 + 272) = v18 / v14;
    if ( v30 != nullptr )
      VoxFreeInternal(v30);
    if ( v13 == 0 )
      goto LABEL_28;
LABEL_30:
    *(uint32_t *)(v2 + 256) = 4;
    *(uint32_t *)(v2 + 244) = 1;
    *(uint32_t *)(v2 + 248) = 1;
    goto LABEL_28;
  }
LABEL_36:
  v14 = *(uint32_t *)(v2 + 264) + v29;
  *(uint32_t *)(v2 + 264) = v14;
  *(uint32_t *)(v2 + 260) = 0;
  if ( v14 > 0 )
    goto LABEL_18;
  *(__m128i *)(v2 + 264) = g4_m128_from<__m128i>(0LL);
  if ( v30 != nullptr )
    VoxFreeInternal(v30);
LABEL_28:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::UpdateSegmentsStates  (binary VA: 0xff7850)
// Original: vox::VoxNativeSubDecoder::UpdateSegmentsStates
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::UpdateSegmentsStates(vox::VoxNativeSubDecoder::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  uint32_t *PlaylistElement;
  char IsExtraSegmentNeeded;
  int v7;
  uint32_t *v8;
  vox::NativePlaylistsManager::Self *v9;
  int v10;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 15);
  v10 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 8) + 4) + 4 * v1);
  v2 = *((uint32_t *)self + 14);
  if ( v1 == v2 || v2 < 0 )
  {
    PlaylistElement = (uint32_t *)vox::NativePlaylistsManager::GetPlaylistElement(
                                  *((vox::NativePlaylistsManager::Self **)self + 12),
                                  v10,
                                  0,
                                  -1);
    if ( PlaylistElement == nullptr )
    {
      *((uint32_t *)self + 30) = -1;
      v3 = 0;
LABEL_21:
      vox::VoxNativeSubDecoder::UpdateCurrentSegmentState((int)(uintptr_t)(self), v3);
      goto LABEL_18;
    }
    v3 = 0;
    *((uint32_t *)self + 30) = *PlaylistElement;
    *((uint32_t *)self + 31) = PlaylistElement[1];
    *((uint32_t *)self + 32) = PlaylistElement[2];
    *((uint32_t *)self + 33) = PlaylistElement[3];
    *((uint32_t *)self + 34) = PlaylistElement[4];
    v4 = *((uint32_t *)self + 30);
    if ( v4 < 0 )
      goto LABEL_4;
LABEL_8:
    IsExtraSegmentNeeded = vox::VoxNativeSubDecoder::IsExtraSegmentNeeded((uint32_t *)(self), v3);
    v7 = *((uint32_t *)self + 37);
    if ( IsExtraSegmentNeeded != 0 )
    {
      if ( v7 > 2 )
        goto LABEL_19;
      *((uint32_t *)self + 37) = ++v7;
    }
    if ( v7 <= 2 )
    {
      if ( v7 == 2 )
        vox::VoxNativeSubDecoder::UpdateOldSegmentState((int)(uintptr_t)(self), v3);
      goto LABEL_14;
    }
LABEL_19:
    vox::VoxNativeSubDecoder::UpdateDyingSegmentState((int)(uintptr_t)(self), v3);
    vox::VoxNativeSubDecoder::UpdateOldSegmentState((int)(uintptr_t)(self), v3);
LABEL_14:
    vox::VoxNativeSubDecoder::UpdateCurrentSegmentState((int)(uintptr_t)(self), v3);
    if ( *((uint32_t *)self + 75) != 0 )
      *((uint8_t *)self + 352) = 1;
    if ( *((uint32_t *)self + 79) == 1
      && (v8 = (uint32_t *)vox::NativePlaylistsManager::PeekAtNextPlaylistElement(
                           *((vox::NativePlaylistsManager::Self **)self + 12),
                           v10)) != nullptr )
    {
      if ( v8[2] == 1 )
      {
        *((uint32_t *)self + 89) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 8)
                               - *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *v8) + 4);
      }
      else if ( *((uint32_t *)self + 33) == 1 )
      {
        *((uint32_t *)self + 89) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 8);
      }
    }
    else
    {
      *((uint32_t *)self + 89) = -1;
    }
    goto LABEL_18;
  }
  v3 = *(uint32_t *)(*((uint32_t *)self + 7) + 4) + 36 * *((uint32_t *)self + 36);
  vox::VoxNativeSubDecoder::ApplyTransitionRule(self, v3);
  v4 = *((uint32_t *)self + 30);
  if ( v4 >= 0 )
    goto LABEL_8;
LABEL_4:
  if ( v4 == -1 )
    goto LABEL_21;
LABEL_18:
  *((uint32_t *)self + 13) = *((uint32_t *)self + 14);
  *((uint32_t *)self + 14) = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = *((uint32_t *)self + 17);
  *((uint32_t *)self + 17) = *((uint32_t *)self + 18);
  *((uint32_t *)self + 20) = *((uint32_t *)self + 25);
  *((uint32_t *)self + 21) = *((uint32_t *)self + 26);
  *((uint32_t *)self + 22) = *((uint32_t *)self + 27);
  *((uint32_t *)self + 23) = *((uint32_t *)self + 28);
  *((uint32_t *)self + 24) = *((uint32_t *)self + 29);
  *((uint32_t *)self + 25) = *((uint32_t *)self + 30);
  *((uint32_t *)self + 26) = *((uint32_t *)self + 31);
  *((uint32_t *)self + 27) = *((uint32_t *)self + 32);
  *((uint32_t *)self + 28) = *((uint32_t *)self + 33);
  *((uint32_t *)self + 29) = *((uint32_t *)self + 34);
  *((uint32_t *)self + 35) = *((uint32_t *)self + 36);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::InterpretTransitionRule  (binary VA: 0xff7b00)
// Original: vox::VoxNativeSubDecoder::InterpretTransitionRule
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::InterpretTransitionRule(vox::VoxNativeSubDecoder::Self *self, int a2)
{
  uint32_t *PlaylistElement;
  uint32_t *v3;
  int v4;
  vox::NativePlaylistsManager::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 7) + 4) + 36 * a2 + 4) != 0
    && (PlaylistElement = (uint32_t *)vox::NativePlaylistsManager::PeekAtNextPlaylistElement(
                                      *((vox::NativePlaylistsManager::Self **)self + 12),
                                      *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 8) + 4) + 4 * *((uint32_t *)self + 15)))) != nullptr )
  {
    v3 = *((uint32_t **)self + 11);
    if ( PlaylistElement[2] == 1 )
      v4 = *(uint32_t *)(*(uint32_t *)(*v3 + 12 * *((uint32_t *)self + 72)) + 8)
         - *(uint32_t *)(*(uint32_t *)(*v3 + 12 * *PlaylistElement) + 4);
    else
      v4 = *(uint32_t *)(*(uint32_t *)(*v3 + 12 * *((uint32_t *)self + 72)) + 8);
    *((uint32_t *)self + 89) = v4;
  }
  else
  {
    vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::SetState  (binary VA: 0xff7c00)
// Original: vox::VoxNativeSubDecoder::SetState
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::SetState(vox::VoxNativeSubDecoder::Self *self, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  vox::NativePlaylistsManager::Self *v9;

  v2 = a2;
  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 15) = a2;
  if ( v3 >= 0 )
  {
    v4 = *((uint32_t **)self + 9);
    v5 = 12 * v3;
    v6 = *(uint32_t *)(*(uint32_t *)(*v4 + 12 * v3) + 8 * a2);
    *((uint32_t *)self + 36) = v6;
    LOBYTE(v4) = *(uint32_t *)(*(uint32_t *)(*v4 + v5) + 8 * a2 + 4) != 0;
    *((uint8_t *)self + 76) = (uint8_t)(uintptr_t)v4;
    if ( (uint8_t)(uintptr_t)v4 == 0 )
    {
      *((uint32_t *)self + 18) = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 8) + 4) + 4 * a2);
      if ( v6 < 0 )
        goto LABEL_4;
LABEL_9:
      v7 = 1;
      vox::VoxNativeSubDecoder::InterpretTransitionRule(self, v6);
      goto LABEL_6;
    }
    vox::NativePlaylistsManager::ResetPlaylist(*((vox::NativePlaylistsManager::Self **)self + 12), *((uint32_t *)self + 18));
    *((uint8_t *)self + 76) = 0;
    v2 = *((uint32_t *)self + 15);
  }
  v6 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 18) = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 8) + 4) + 4 * v2);
  if ( v6 >= 0 )
    goto LABEL_9;
LABEL_4:
  v7 = 0;
  if ( *((uint32_t *)self + 14) == -1 )
  {
    v7 = 1;
    vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
  }
LABEL_6:
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::EmulateDecode  (binary VA: 0xff7d20)
// Original: vox::VoxNativeSubDecoder::EmulateDecode
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::EmulateDecode(vox::VoxNativeSubDecoder::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  bool v6;
  vox::VoxNativeSubDecoder::Self *v7;
  int v8;
  int16_t v9;
  int v10;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v9 = *((uint16_t *)self + 4);
  v2 = (*((int16_t *)self + 9) >> 3) * *((int16_t *)self + 5);
  v8 = a2 - a2 % v2;
  v3 = *((uint32_t *)self + 89);
  if ( v3 >= 0 )
  {
    v10 = *((uint32_t *)self + 75);
    if ( v3 <= v10 + v8 / v2 )
    {
      *((uint32_t *)self + 90) = v3 - v10;
      vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
    }
  }
  if ( *((uint32_t *)self + 37) != 1 )
  {
    v4 = 0;
    if ( *((int *)self + 37) <= 1 )
      goto LABEL_7;
  }
  else if ( *((int *)self + 84) <= 0 )
  {
    v4 = G4_VCALL<int>(self, 52, v8, (char *)self + 288);
LABEL_7:
    if ( *((int *)self + 47) > 1 )
    {
      if ( *((int *)self + 64) > 1 )
        goto LABEL_9;
LABEL_25:
      vox::VoxNativeSubDecoder::StopSegment((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 220);
      if ( *((int *)self + 81) > 1 )
        goto LABEL_10;
      goto LABEL_26;
    }
    vox::VoxNativeSubDecoder::StopSegment((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 152);
    if ( *((int *)self + 64) <= 1 )
      goto LABEL_25;
LABEL_9:
    if ( *((int *)self + 81) <= 1 )
LABEL_26:
      vox::VoxNativeSubDecoder::StopSegment((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 288);
LABEL_10:
    if ( v9 == 2 )
    {
      if ( *((uint32_t *)self + 47) != 3 )
        goto LABEL_12;
    }
    else
    {
      if ( v9 != 17 )
        goto LABEL_14;
      if ( *((uint32_t *)self + 47) != 3 )
      {
LABEL_12:
        if ( *((uint32_t *)self + 64) != 3 )
          goto LABEL_13;
LABEL_22:
        v6 = *((uint32_t *)self + 81) == 3;
        *((uint8_t *)self + 284) = 1;
        if ( !v6 )
          goto LABEL_14;
        goto LABEL_15;
      }
    }
    v6 = *((uint32_t *)self + 64) == 3;
    *((uint8_t *)self + 216) = 1;
    if ( v6 )
      goto LABEL_22;
LABEL_13:
    if ( *((uint32_t *)self + 81) == 3 )
LABEL_15:
      *((uint8_t *)self + 352) = 1;
LABEL_14:
    sub_BA06B0();
    return v4;
  }
  v4 = vox::VoxNativeSubDecoder::EmulateMixMultipleSegments(self, v8);
  goto LABEL_7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::Decode  (binary VA: 0xff7f50)
// Original: vox::VoxNativeSubDecoder::Decode
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoder::Decode(vox::VoxNativeSubDecoder::Self *self, int16_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  vox::VoxNativeSubDecoder::Self *v7;
  int v8;
  int v9;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v3 = (*((int16_t *)self + 9) >> 3) * *((int16_t *)self + 5);
  v8 = a3 - a3 % v3;
  v4 = *((uint32_t *)self + 89);
  if ( v4 >= 0 )
  {
    v9 = *((uint32_t *)self + 75);
    if ( v4 <= v9 + v8 / v3 )
    {
      *((uint32_t *)self + 90) = v4 - v9;
      vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
    }
  }
  if ( *((int *)self + 37) > 1 )
    goto LABEL_5;
  v5 = 0;
  if ( *((uint32_t *)self + 37) == 1 )
  {
    if ( *((int *)self + 84) > 0 )
    {
LABEL_5:
      v5 = vox::VoxNativeSubDecoder::MixMultipleSegments(self, a2, v8);
      goto LABEL_6;
    }
    v5 = G4_VCALL<int>(self, 24, a2, v8, (char *)self + 288);
  }
LABEL_6:
  if ( *((int *)self + 47) <= 1 )
  {
    vox::VoxNativeSubDecoder::StopSegment((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 152);
    if ( *((int *)self + 64) > 1 )
      goto LABEL_8;
  }
  else if ( *((int *)self + 64) > 1 )
  {
    goto LABEL_8;
  }
  vox::VoxNativeSubDecoder::StopSegment((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 220);
LABEL_8:
  if ( *((int *)self + 81) <= 1 )
    vox::VoxNativeSubDecoder::StopSegment((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 288);
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::Destroy  (binary VA: 0xff8100)
// Original: vox::VoxNativeSubDecoder::~VoxNativeSubDecoder
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::Destroy(vox::VoxNativeSubDecoder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D1C8);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoder::Destroy_eaff8120  (binary VA: 0xff8120)
// Original: vox::VoxNativeSubDecoder::~VoxNativeSubDecoder
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoder::Destroy_eaff8120(vox::VoxNativeSubDecoder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D1C8);
  opDelete(self);
}


