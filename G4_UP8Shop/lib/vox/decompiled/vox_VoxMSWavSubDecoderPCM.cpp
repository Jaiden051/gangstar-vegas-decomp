#include "Core/Utils/DecompTypes.h"
#include "vox_VoxMSWavSubDecoderPCM.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Destroy  (binary VA: 0xfe89d0)
// Original: vox::VoxMSWavSubDecoderPCM::~VoxMSWavSubDecoderPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderPCM::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CF38));
  if ( *(self + 13) != nullptr )
  {
    VoxFreeInternal(*(self + 13));
    *(self + 13) = nullptr;
  }
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CEE0));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Destroy_eafe8a30  (binary VA: 0xfe8a30)
// Original: vox::VoxMSWavSubDecoderPCM::~VoxMSWavSubDecoderPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderPCM::Destroy_eafe8a30(void **self)
{
  vox::VoxMSWavSubDecoderPCM::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::HasData  (binary VA: 0xfe8a70)
// Original: vox::VoxMSWavSubDecoderPCM::HasData
// ----------------------------------------------------------------------------
bool vox::VoxMSWavSubDecoderPCM::HasData(vox::VoxMSWavSubDecoderPCM::Self *self)
{
  bool result;
  unsigned int v2;
  unsigned int v3;

  result = false;
  if ( *((uint32_t *)self + 1) != 0 && *((uint8_t *)self + 41) == 0 )
  {
    v2 = *((uint32_t *)self + 9);
    v3 = *((uint32_t *)self + 7);
    if ( v2 >= v3 && *((uint8_t *)self + 40) != 0 )
    {
      G4_VCALL<void>(self, 12, 0);
      v2 = *((uint32_t *)self + 9);
      v3 = *((uint32_t *)self + 7);
    }
    return v2 < v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Seek  (binary VA: 0xfe8ac0)
// Original: vox::VoxMSWavSubDecoderPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderPCM::Seek(vox::VoxMSWavSubDecoderPCM::Self *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v6;
  vox::VoxMSWavSubDecoder::Self *v8;
  unsigned int v9;

  v2 = a2;
  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 7);
  if ( v3 < a2 )
  {
    if ( *((uint8_t *)self + 40) != 0 )
    {
      if ( v3 == 0 )
      {
        *((uint32_t *)self + 3) = 0;
        *((uint32_t *)self + 9) = 0;
        vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
        goto LABEL_10;
      }
      v2 = a2 % v3;
    }
    else
    {
      v2 = *((uint32_t *)self + 7);
    }
  }
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 9) = 0;
  vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
  if ( v2 != 0 && *((uint32_t *)self + 3) != 0 )
  {
    v4 = *((uint32_t *)self + 2);
    v5 = *((uint32_t *)self + 11);
    v9 = *(uint16_t *)(v4 + 32);
    while ( v2 >= v5 / v9 )
    {
      *((uint32_t *)self + 9) += v5 / v9;
      vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
      v4 = *((uint32_t *)self + 2);
      v5 = *((uint32_t *)self + 11);
      v9 = *(uint16_t *)(v4 + 32);
      v2 -= v5 / v9;
      if ( v2 == 0 || *((uint32_t *)self + 3) == 0 )
        goto LABEL_10;
    }
    v6 = *((uint32_t *)self + 1);
    *((uint32_t *)self + 9) += v2;
    G4_VCALL<void>(v6, 16, v2 * *(uint16_t *)(v4 + 32), 1);
    *((uint32_t *)self + 8) = *(uint16_t *)(*((uint32_t *)self + 2) + 32) * v2;
  }
LABEL_10:
  sub_BA06B0();
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Decode16Bits  (binary VA: 0xfe8c10)
// Original: vox::VoxMSWavSubDecoderPCM::Decode16Bits
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderPCM::Decode16Bits(vox::VoxMSWavSubDecoderPCM::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  vox::VoxMSWavSubDecoder::Self *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  v11 = *((uint32_t *)self + 11);
  if ( *((uint32_t *)self + 8) >= v11 )
  {
    vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
    v11 = *((uint32_t *)self + 11);
  }
  v12 = a3 - a3 % *(uint16_t *)(*((uint32_t *)self + 2) + 32);
  v3 = 0;
  if ( v12 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v7 = *((uint32_t *)self + 8);
      if ( v12 - v4 + v7 <= v11 )
      {
        v5 = (*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 1) + 28))(
               *((uint32_t *)self + 1),
               &a2[v4],
               v12 - v4);
        v10 = v5 + *((uint32_t *)self + 8);
      }
      else
      {
        v5 = (*(int (**)(uint32_t, char *, unsigned int))(**((uint32_t **)self + 1) + 28))(
               *((uint32_t *)self + 1),
               &a2[v4],
               v11 - v7);
        v10 = *((uint32_t *)self + 11);
      }
      *((uint32_t *)self + 8) = v10;
      v4 += v5;
      v6 = *((uint32_t *)self + 9) + v5 / (*((uint32_t *)self + 4) * (*((int *)self + 6) >> 3));
      *((uint32_t *)self + 9) = v6;
      if ( v11 > v10 )
      {
        if ( v6 >= *((uint32_t *)self + 7) )
        {
LABEL_8:
          if ( *((uint8_t *)self + 40) == 0 )
            goto LABEL_19;
LABEL_9:
          if ( G4_VCALL<int>(self, 12, 0) != 0 )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( v5 == 0 )
        {
          v3 = v4;
          *((uint8_t *)self + 41) = 1;
          break;
        }
      }
      else
      {
        if ( v6 >= *((uint32_t *)self + 7) )
          goto LABEL_8;
        vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
        if ( *((uint32_t *)self + 11) == 0 )
        {
          if ( *((uint8_t *)self + 40) == 0 )
          {
            v3 = v4;
            *((uint32_t *)self + 9) = *((uint32_t *)self + 7);
            break;
          }
          goto LABEL_9;
        }
      }
LABEL_10:
      if ( v12 <= v4 )
      {
LABEL_19:
        v3 = v4;
        break;
      }
    }
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::GetDataSize  (binary VA: 0xfe8dd0)
// Original: vox::VoxMSWavSubDecoderPCM::GetDataSize
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderPCM::GetDataSize(vox::VoxMSWavSubDecoderPCM::Self *self)
{
  int v1;
  int result;
  int i;

  v1 = *(uint32_t *)(*((uint32_t *)self + 2) + 60);
  result = 0;
  if ( v1 != 0 )
  {
    result = *(uint32_t *)(v1 + 4);
    for ( i = *(uint32_t *)(v1 + 8); i != 0; i = *(uint32_t *)(i + 8) )
      result += *(uint32_t *)(i + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Construct  (binary VA: 0xfe8e00)
// Original: vox::VoxMSWavSubDecoderPCM::VoxMSWavSubDecoderPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderPCM::Construct(vox::VoxMSWavSubDecoderPCM::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  vox::VoxMSWavSubDecoderPCM::Self *v6;

  *((uint32_t *)a1 + 1) = a2;
  *((uint32_t *)a1 + 2) = a3;
  *((uint32_t *)a1 + 3) = 0;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 6) = 0;
  *((uint32_t *)a1 + 7) = 0;
  *((uint32_t *)a1 + 8) = 0;
  *((uint32_t *)a1 + 9) = 0;
  *((uint8_t *)a1 + 40) = 0;
  *((uint8_t *)a1 + 41) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CF38);
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  vox::VoxMSWavSubDecoder::SetDataSize(a1);
  v3 = *((uint32_t *)a1 + 2);
  v4 = *(uint16_t *)(v3 + 34);
  *((uint32_t *)a1 + 12) = v4;
  if ( v4 == 24 || v4 == 16 )
  {
    *((uint32_t *)a1 + 6) = 16;
    v5 = *(uint16_t *)(v3 + 22);
    *((uint32_t *)a1 + 4) = v5;
    *((uint32_t *)a1 + 5) = *(uint32_t *)(v3 + 24);
    if ( *(uint32_t *)(v3 + 56) != 0 )
      *((uint32_t *)a1 + 7) = *((uint32_t *)a1 + 11) / (unsigned int)(v5 * (v4 >> 3));
    else
      *((uint32_t *)a1 + 7) = vox::VoxMSWavSubDecoderPCM::GetDataSize(a1)
                          / (*((uint32_t *)a1 + 4)
                           * (*((int *)a1 + 12) >> 3));
    vox::VoxMSWavSubDecoder::GoToNextDataChunk(a1);
    sub_BA06B0();
  }
  else
  {
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 0;
    *((uint32_t *)a1 + 6) = 0;
    *((uint32_t *)a1 + 7) = 0;
    sub_BA06B0();
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Read24Bits  (binary VA: 0xfe8f60)
// Original: vox::VoxMSWavSubDecoderPCM::Read24Bits
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderPCM::Read24Bits(vox::VoxMSWavSubDecoderPCM::Self *self, uint8_t *a2, int a3)
{
  int v3;
  signed int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t v10;
  vox::VoxThread::Self *v12;
  int CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId(v12);
  sub_BA06A0("VoxMSWavSubDecoderPCM::Read24Bits", CurThreadId);
  v3 = *((uint32_t *)self + 13);
  v4 = 3 * a3 / 2;
  if ( v4 > *((uint32_t *)self + 14) )
  {
    if ( v3 != 0 )
      VoxFreeInternal(*((void **)self + 13));
    v3 = VoxAllocInternal(
           v4,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_pcm.cpp"),
           (int)(uintptr_t)("Read24Bits"),
           271);
    *((uint32_t *)self + 13) = v3;
    if ( v3 == 0 )
    {
      *((uint32_t *)self + 14) = 0;
      v7 = 0;
      goto LABEL_10;
    }
    *((uint32_t *)self + 14) = v4;
  }
  v5 = (*(int (**)(uint32_t, int, signed int))(**((uint32_t **)self + 1) + 28))(*((uint32_t *)self + 1), v3, v4) / 3;
  v6 = *((uint32_t *)self + 13);
  v7 = 0;
  if ( v5 > 0 )
  {
    v8 = 0;
    v9 = v5;
    do
    {
      a2[2 * v8] = *(uint8_t *)(v6 + 1);
      v10 = *(uint8_t *)(v6 + 2);
      v6 += 3;
      a2[2 * v8++ + 1] = v10;
    }
    while ( v8 != v9 );
    v7 = 2 * v8;
  }
LABEL_10:
  sub_BA06B0("VoxMSWavSubDecoderPCM::Read24Bits", CurThreadId);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Decode24Bits  (binary VA: 0xfe9070)
// Original: vox::VoxMSWavSubDecoderPCM::Decode24Bits
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderPCM::Decode24Bits(vox::VoxMSWavSubDecoderPCM::Self *self, uint8_t *a2, int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  vox::VoxMSWavSubDecoder::Self *v10;
  unsigned int v11;
  unsigned int v12;
  int v13;

  vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 11);
  if ( *((uint32_t *)self + 8) >= v3 )
  {
    vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
    v3 = *((uint32_t *)self + 11);
  }
  v4 = 0;
  v13 = a3 - a3 % (*((uint32_t *)self + 4) * (*((int *)self + 6) >> 3));
  v12 = ((2863311531u * (uint64_t)v3) >> 32) & 0xFFFFFFFE;
  if ( v13 > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v8 = *((uint32_t *)self + 8);
      if ( v12 >= v13 - v5 + v8 )
      {
        v6 = vox::VoxMSWavSubDecoderPCM::Read24Bits(self, &a2[v5], v13 - v5);
        v11 = v6 + *((uint32_t *)self + 8);
      }
      else
      {
        v6 = vox::VoxMSWavSubDecoderPCM::Read24Bits(self, &a2[v5], v12 - v8);
        v11 = *((uint32_t *)self + 11);
      }
      *((uint32_t *)self + 8) = v11;
      v5 += v6;
      v7 = *((uint32_t *)self + 9) + v6 / (*((uint32_t *)self + 4) * (*((int *)self + 6) >> 3));
      *((uint32_t *)self + 9) = v7;
      if ( v12 > v11 )
      {
        if ( v7 >= *((uint32_t *)self + 7) )
        {
LABEL_8:
          if ( *((uint8_t *)self + 40) == 0 )
            goto LABEL_19;
LABEL_9:
          if ( G4_VCALL<int>(self, 12, 0) != 0 )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( v6 == 0 )
        {
          v4 = v5;
          *((uint8_t *)self + 41) = 1;
          break;
        }
      }
      else
      {
        if ( v7 >= *((uint32_t *)self + 7) )
          goto LABEL_8;
        vox::VoxMSWavSubDecoder::GoToNextDataChunk(self);
        if ( *((uint32_t *)self + 11) == 0 )
        {
          if ( *((uint8_t *)self + 40) == 0 )
          {
            v4 = v5;
            *((uint32_t *)self + 9) = *((uint32_t *)self + 7);
            break;
          }
          goto LABEL_9;
        }
      }
LABEL_10:
      if ( v13 <= v5 )
      {
LABEL_19:
        v4 = v5;
        break;
      }
    }
  }
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderPCM::Decode  (binary VA: 0xfe9240)
// Original: vox::VoxMSWavSubDecoderPCM::Decode
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderPCM::Decode(vox::VoxMSWavSubDecoderPCM::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  vox::VoxMSWavSubDecoderPCM::Self *v6;
  int v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 12);
  if ( v3 == 16 )
  {
    v4 = vox::VoxMSWavSubDecoderPCM::Decode16Bits(self, a2, a3);
  }
  else
  {
    v4 = 0;
    if ( v3 == 24 )
      v4 = vox::VoxMSWavSubDecoderPCM::Decode24Bits(self, (uint8_t *)a2, a3);
  }
  v7 = v4;
  sub_BA06B0();
  return v7;
}


