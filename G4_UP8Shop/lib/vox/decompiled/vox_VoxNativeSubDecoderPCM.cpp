#include "Core/Utils/DecompTypes.h"
#include "vox_VoxNativeSubDecoderPCM.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::Destroy  (binary VA: 0xffd840)
// Original: vox::VoxNativeSubDecoderPCM::~VoxNativeSubDecoderPCM
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::Destroy(vox::VoxNativeSubDecoderPCM::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D1C8);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::SetCurrentSegmentInitialPosition  (binary VA: 0xffd860)
// Original: vox::VoxNativeSubDecoderPCM::SetCurrentSegmentInitialPosition
// ----------------------------------------------------------------------------
vox::VoxNativeSubDecoderPCM::Self * vox::VoxNativeSubDecoderPCM::SetCurrentSegmentInitialPosition(vox::VoxNativeSubDecoderPCM::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 74) = a2 * *((int16_t *)self + 8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::Destroy_eaffd880  (binary VA: 0xffd880)
// Original: vox::VoxNativeSubDecoderPCM::~VoxNativeSubDecoderPCM
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::Destroy_eaffd880(vox::VoxNativeSubDecoderPCM::Self *self)
{
  vox::VoxNativeSubDecoderPCM::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::Seek  (binary VA: 0xffd930)
// Original: vox::VoxNativeSubDecoderPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::Seek(int a1, int a2, uint32_t *a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  vox::VoxThread::Self *v8;
  int v9;

  v3 = a2;
  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  if ( a2 < 0 )
    v3 = a3[4];
  v4 = (uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + 24 * *a3);
  v5 = -1;
  if ( v3 <= v4[2] )
  {
    v6 = v3 * *(int16_t *)(a1 + 16);
    v5 = (*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 4) + 16))(
           *(uint32_t *)(a1 + 4),
           *v4 + v6 + *(uint32_t *)(a1 + 20),
           0);
    if ( v5 == 0 )
    {
      a3[2] = v6;
      a3[3] = v3;
    }
  }
  v9 = v5;
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::DecodeCurrentSegmentWithOffset  (binary VA: 0xffda20)
// Original: vox::VoxNativeSubDecoderPCM::DecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::DecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderPCM::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  bool v12; // cc
  int v13;
  int v14;
  int v15;
  uint32_t *v17;
  vox::VoxThread::Self *s;
  int c;
  int v20;
  unsigned int v21;
  int v22;

  v3 = 0;
  c = vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0();
  v21 = *((int16_t *)self + 8);
  v22 = *((uint32_t *)self + 77);
  v4 = *((uint32_t *)self + 5);
  v5 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 6) + 4) + 24 * *((uint32_t *)self + 72));
  v6 = *((uint32_t *)self + 90);
  if ( v6 > 0 )
  {
    v20 = *((uint32_t *)self + 5);
    v3 = v6 * v21;
    memset(a2, 0, v6 * v21);
    *((uint32_t *)self + 90) = 0;
    v4 = v20;
  }
  v7 = v4 + *((uint32_t *)self + 74) + v5;
  if ( v7 != (*(int (**)(uint32_t, int))(**((uint32_t **)self + 1) + 24))(*((uint32_t *)self + 1), c) )
    (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 1) + 16))(*((uint32_t *)self + 1), v7, 0);
  if ( v3 < a3 )
  {
    v8 = v21 * (v22 + 1);
    do
    {
      if ( a3 - v3 + *((uint32_t *)self + 74) <= v8 )
      {
        v9 = (*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 1) + 28))(
               *((uint32_t *)self + 1),
               &a2[v3],
               a3 - v3);
        v10 = v9 + *((uint32_t *)self + 74);
        *((uint32_t *)self + 74) = v10;
        if ( v9 <= 0 )
          goto LABEL_21;
      }
      else
      {
        v9 = (*(int (**)(uint32_t, char *, unsigned int))(**((uint32_t **)self + 1) + 28))(
               *((uint32_t *)self + 1),
               &a2[v3],
               v8 - *((uint32_t *)self + 74));
        *((uint32_t *)self + 74) = v8;
        v10 = v8;
        if ( v9 <= 0 )
        {
LABEL_21:
          *((uint8_t *)self + 365) = 1;
          *((uint32_t *)self + 81) = 1;
          break;
        }
      }
      v3 += v9;
      v11 = v10 / v21;
      v12 = v11 <= *((uint32_t *)self + 77);
      *((uint32_t *)self + 75) = v11;
      if ( !v12 )
      {
        v13 = *((uint32_t *)self + 79);
        if ( *((uint32_t *)self + 78) >> 1 != 0 && *((uint32_t *)self + 78) == v13 )
          *((uint32_t *)self + 76) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 4);
        v14 = v13 - 1;
        *((uint32_t *)self + 79) = v14;
        if ( v14 == 0 )
        {
          if ( *((uint32_t *)self + 80) == 1 )
          {
            v17 = (uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72));
            *((uint32_t *)self + 77) = *(uint32_t *)(*v17 + 4 * ((v17[1] - *v17) >> 2) - 4);
          }
          vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
          v8 = v21 * (*((uint32_t *)self + 77) + 1);
        }
        v15 = *((uint32_t *)self + 81);
        if ( v15 == 3 )
        {
          if ( *((uint32_t *)self + 79) != 0 )
            G4_VCALL<void>(self, 36, -1, (char *)self + 288);
        }
        else if ( v15 == 4 && *((uint32_t *)self + 75) > *((uint32_t *)self + 77) )
        {
          *((uint32_t *)self + 81) = 1;
          break;
        }
      }
    }
    while ( a3 > v3 );
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::DecodeSegment  (binary VA: 0xffdcf0)
// Original: vox::VoxNativeSubDecoderPCM::DecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::DecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, int a3, uint32_t *a4)
{
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  bool v10; // cc
  int v11;
  int v12;
  int v13;
  uint32_t *v15;
  int v16;
  vox::VoxNativeSubDecoder::Self *v17;
  int16_t v18;
  unsigned int v19;
  unsigned int v20;
  int CurThreadId;
  int v22;

  CurThreadId = vox::VoxThread::GetCurThreadId(v17);
  sub_BA06A0();
  v18 = *((uint16_t *)a1 + 8);
  v22 = a4[5];
  v5 = *((uint32_t *)a1 + 5) + *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 6) + 4) + 24 * *a4) + a4[2];
  if ( v5 != (*(int (**)(uint32_t, int))(**((uint32_t **)a1 + 1) + 24))(*((uint32_t *)a1 + 1), CurThreadId) )
    (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)a1 + 1) + 16))(*((uint32_t *)a1 + 1), v5, 0);
  v6 = 0;
  if ( a3 > 0 )
  {
    v20 = v18;
    v19 = v18 * (v22 + 1);
    do
    {
      if ( a3 - v6 + a4[2] <= v19 )
      {
        v7 = (*(int (**)(uint32_t, int, int))(**((uint32_t **)a1 + 1) + 28))(*((uint32_t *)a1 + 1), v6 + a2, a3 - v6);
        v8 = v7 + a4[2];
        a4[2] = v8;
        if ( v7 <= 0 )
          goto LABEL_18;
      }
      else
      {
        v7 = (*(int (**)(uint32_t, int, unsigned int))(**((uint32_t **)a1 + 1) + 28))(
               *((uint32_t *)a1 + 1),
               v6 + a2,
               v19 - a4[2]);
        v8 = v19;
        a4[2] = v19;
        if ( v7 <= 0 )
        {
LABEL_18:
          *((uint8_t *)a1 + 365) = 1;
          a4[9] = 1;
          break;
        }
      }
      v6 += v7;
      v9 = v8 / v20;
      v10 = v9 <= a4[5];
      a4[3] = v9;
      if ( v10 )
        continue;
      v11 = a4[7];
      if ( a4[6] >> 1 != 0 && a4[6] == v11 )
        a4[4] = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a4) + 4);
      v12 = v11 - 1;
      a4[7] = v12;
      if ( v12 == 0 )
      {
        if ( a4[8] == 1 )
        {
          v15 = (uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a4);
          v16 = *(uint32_t *)(*v15 + 4 * ((v15[1] - *v15) >> 2) - 4);
          a4[5] = v16;
          v19 = v20 * (v16 + 1);
          if ( a4[1] != 1 )
            goto LABEL_13;
        }
        else if ( a4[1] != 1 )
        {
          goto LABEL_13;
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(a1);
        v19 = v20 * (a4[5] + 1);
      }
LABEL_13:
      v13 = a4[9];
      if ( v13 == 3 )
      {
        if ( a4[7] != 0 )
          G4_VCALL<void>(a1, 36, -1, a4);
      }
      else if ( v13 == 4 && a4[3] > a4[5] )
      {
        a4[9] = 1;
        break;
      }
    }
    while ( a3 > v6 );
  }
  if ( a4[1] == 3 )
    a4[9] = 1;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::EmulateDecodeCurrentSegmentWithOffset  (binary VA: 0xffdf70)
// Original: vox::VoxNativeSubDecoderPCM::EmulateDecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::EmulateDecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderPCM::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  bool v11; // cc
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v17;
  vox::VoxNativeSubDecoder::Self *v18;
  int v19;
  unsigned int v20;
  int v21;
  int CurThreadId;

  v2 = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v18);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 5);
  v4 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 6) + 4) + 24 * *((uint32_t *)self + 72));
  v20 = *((int16_t *)self + 8);
  v21 = *((uint32_t *)self + 77);
  v5 = *((uint32_t *)self + 90);
  if ( v5 > 0 )
  {
    *((uint32_t *)self + 90) = 0;
    v2 = v5 * v20;
  }
  v6 = *((uint32_t *)self + 74) + v4 + v3;
  if ( v6 != (*(int (**)(uint32_t, int))(**((uint32_t **)self + 1) + 24))(*((uint32_t *)self + 1), CurThreadId) )
    (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 1) + 16))(*((uint32_t *)self + 1), v6, 0);
  if ( v2 < a2 )
  {
    v7 = v20 * (v21 + 1);
    do
    {
      v15 = *((uint32_t *)self + 74);
      if ( a2 - v2 + v15 <= v7 )
      {
        (*(void (**)(uint32_t, int, int))(**((uint32_t **)self + 1) + 16))(*((uint32_t *)self + 1), a2 - v2, 1);
        v8 = a2 - v2;
        v9 = a2 - v2 + *((uint32_t *)self + 74);
        *((uint32_t *)self + 74) = v9;
        if ( a2 - v2 <= 0 )
          goto LABEL_21;
      }
      else
      {
        v19 = v7 - v15;
        (*(void (**)(uint32_t, unsigned int, int))(**((uint32_t **)self + 1) + 16))(
          *((uint32_t *)self + 1),
          v7 - v15,
          1);
        *((uint32_t *)self + 74) = v7;
        v8 = v19;
        v9 = v7;
        if ( v19 <= 0 )
        {
LABEL_21:
          *((uint8_t *)self + 365) = 1;
          *((uint32_t *)self + 81) = 1;
          break;
        }
      }
      v2 += v8;
      v10 = v9 / v20;
      v11 = v10 <= *((uint32_t *)self + 77);
      *((uint32_t *)self + 75) = v10;
      if ( !v11 )
      {
        v12 = *((uint32_t *)self + 79);
        if ( *((uint32_t *)self + 78) >> 1 != 0 && *((uint32_t *)self + 78) == v12 )
          *((uint32_t *)self + 76) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 4);
        v13 = v12 - 1;
        *((uint32_t *)self + 79) = v13;
        if ( v13 == 0 )
        {
          if ( *((uint32_t *)self + 80) == 1 )
          {
            v17 = (uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72));
            *((uint32_t *)self + 77) = *(uint32_t *)(*v17 + 4 * ((v17[1] - *v17) >> 2) - 4);
          }
          vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
          v7 = v20 * (*((uint32_t *)self + 77) + 1);
        }
        v14 = *((uint32_t *)self + 81);
        if ( v14 == 3 )
        {
          if ( *((uint32_t *)self + 79) != 0 )
            G4_VCALL<void>(self, 36, -1, (char *)self + 288);
        }
        else if ( v14 == 4 && *((uint32_t *)self + 75) > *((uint32_t *)self + 77) )
        {
          *((uint32_t *)self + 81) = 1;
          break;
        }
      }
    }
    while ( a2 > v2 );
  }
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::EmulateDecodeSegment  (binary VA: 0xffe220)
// Original: vox::VoxNativeSubDecoderPCM::EmulateDecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::EmulateDecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, uint32_t *a3)
{
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  bool v9; // cc
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v15;
  int v16;
  vox::VoxNativeSubDecoder::Self *v17;
  int v18;
  int16_t v19;
  unsigned int v20;
  unsigned int v21;
  int CurThreadId;
  int v23;

  CurThreadId = vox::VoxThread::GetCurThreadId(v17);
  sub_BA06A0();
  v19 = *((uint16_t *)a1 + 8);
  v23 = a3[5];
  v4 = *((uint32_t *)a1 + 5) + *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 6) + 4) + 24 * *a3) + a3[2];
  if ( v4 != (*(int (**)(uint32_t, int))(**((uint32_t **)a1 + 1) + 24))(*((uint32_t *)a1 + 1), CurThreadId) )
    (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)a1 + 1) + 16))(*((uint32_t *)a1 + 1), v4, 0);
  v5 = 0;
  if ( a2 > 0 )
  {
    v21 = v19;
    v20 = v19 * (v23 + 1);
    do
    {
      v13 = a3[2];
      if ( a2 - v5 + v13 <= v20 )
      {
        (*(void (**)(uint32_t, int, int))(**((uint32_t **)a1 + 1) + 16))(*((uint32_t *)a1 + 1), a2 - v5, 1);
        v6 = a2 - v5;
        v7 = a2 - v5 + a3[2];
        a3[2] = v7;
        if ( a2 - v5 <= 0 )
          goto LABEL_18;
      }
      else
      {
        v18 = v20 - v13;
        (*(void (**)(uint32_t, unsigned int, int))(**((uint32_t **)a1 + 1) + 16))(*((uint32_t *)a1 + 1), v20 - v13, 1);
        v7 = v20;
        a3[2] = v20;
        v6 = v18;
        if ( v18 <= 0 )
        {
LABEL_18:
          *((uint8_t *)a1 + 365) = 1;
          a3[9] = 1;
          break;
        }
      }
      v5 += v6;
      v8 = v7 / v21;
      v9 = v8 <= a3[5];
      a3[3] = v8;
      if ( v9 )
        continue;
      v10 = a3[7];
      if ( a3[6] >> 1 != 0 && a3[6] == v10 )
        a3[4] = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a3) + 4);
      v11 = v10 - 1;
      a3[7] = v11;
      if ( v11 == 0 )
      {
        if ( a3[8] == 1 )
        {
          v15 = (uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a3);
          v16 = *(uint32_t *)(*v15 + 4 * ((v15[1] - *v15) >> 2) - 4);
          a3[5] = v16;
          v20 = v21 * (v16 + 1);
          if ( a3[1] != 1 )
            goto LABEL_13;
        }
        else if ( a3[1] != 1 )
        {
          goto LABEL_13;
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(a1);
        v20 = v21 * (a3[5] + 1);
      }
LABEL_13:
      v12 = a3[9];
      if ( v12 == 3 )
      {
        if ( a3[7] != 0 )
          G4_VCALL<void>(a1, 36, -1, a3);
      }
      else if ( v12 == 4 && a3[3] > a3[5] )
      {
        a3[9] = 1;
        break;
      }
    }
    while ( a2 > v5 );
  }
  if ( a3[1] == 3 )
    a3[9] = 1;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::Reset  (binary VA: 0xffe4a0)
// Original: vox::VoxNativeSubDecoderPCM::Reset
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::Reset(vox::NativePlaylistsManager::Self **self)
{
  vox::VoxNativeSubDecoder::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::Reset(self);
  sub_BA06B0();
}



// ============================================================================
// Address:   0xffe550 (size: 119 bytes)
// Symbol:    _ZN3vox22VoxNativeSubDecoderPCMC1EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE
// Demangled: vox::VoxNativeSubDecoderPCM::VoxNativeSubDecoderPCM(vox::StreamCursorInterface *,vox::NativeChunks *,vox::States *,vox::AudioSegments *,std::vector<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,vox::TransitionRules *,std::vector<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,std::map<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,int,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>> *,vox::NativePlaylistsManager *)
// ============================================================================
// Alternative name is '_ZN3vox22VoxNativeSubDecoderPCMC2EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE'
void (**vox::VoxNativeSubDecoderPCM::VoxNativeSubDecoderPCM(
        uint32_t *a1,
        int a2,
        uint32_t *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10))(vox::VoxNativeSubDecoderPCM::Self * self)
{
  vox::VoxNativeSubDecoder::Construct((int)(uintptr_t)(a1), a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *a1 = ((uint32_t)(uintptr_t)&off_208D3C8);
  return (void (**)(vox::VoxNativeSubDecoderPCM::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208D3C8));
}
// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::GetState  (binary VA: 0xffe5d0)
// Original: vox::VoxNativeSubDecoderPCM::GetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::GetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::GetState(self, a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::SetState  (binary VA: 0xffe640)
// Original: vox::VoxNativeSubDecoderPCM::SetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::SetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::SetState(self, a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::Seek  (binary VA: 0xffe6b0)
// Original: vox::VoxNativeSubDecoderPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::Seek()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::GetDecodingBuffer  (binary VA: 0xffe6c0)
// Original: vox::VoxNativeSubDecoderPCM::GetDecodingBuffer
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderPCM::GetDecodingBuffer()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::ReleaseDecodingBuffer  (binary VA: 0xffe6d0)
// Original: vox::VoxNativeSubDecoderPCM::ReleaseDecodingBuffer
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::ReleaseDecodingBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderPCM::SetDecodingBufferToSegmentPosition  (binary VA: 0xffe6e0)
// Original: vox::VoxNativeSubDecoderPCM::SetDecodingBufferToSegmentPosition
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderPCM::SetDecodingBufferToSegmentPosition()
{
  ;
}


