#include "Core/Utils/DecompTypes.h"
#include "vox_VoxMSWavSubDecoderMSADPCM.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::Destroy  (binary VA: 0xfe8000)
// Original: vox::VoxMSWavSubDecoderMSADPCM::~VoxMSWavSubDecoderMSADPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderMSADPCM::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CF10));
  VoxFreeInternal(*(self + 12));
  VoxFreeInternal(*(self + 18));
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CEE0));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::Destroy_eafe8060  (binary VA: 0xfe8060)
// Original: vox::VoxMSWavSubDecoderMSADPCM::~VoxMSWavSubDecoderMSADPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderMSADPCM::Destroy_eafe8060(void **self)
{
  vox::VoxMSWavSubDecoderMSADPCM::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::HasData  (binary VA: 0xfe80a0)
// Original: vox::VoxMSWavSubDecoderMSADPCM::HasData
// ----------------------------------------------------------------------------
bool vox::VoxMSWavSubDecoderMSADPCM::HasData(vox::VoxMSWavSubDecoderMSADPCM::Self *self)
{
  bool result;

  result = false;
  if ( *((uint32_t *)self + 1) != 0 && *((uint8_t *)self + 41) == 0 )
  {
    if ( *((uint8_t *)self + 40) != 0 )
    {
      if ( *((uint32_t *)self + 17) < *((uint32_t *)self + 7) )
      {
        result = true;
        if ( *((uint32_t *)self + 13) < *((uint32_t *)self + 11) || *((uint32_t *)self + 16) != *((uint32_t *)self + 15) )
          return result;
      }
      G4_VCALL<void>(self, 12, 0);
    }
    result = false;
    if ( *((uint32_t *)self + 17) < *((uint32_t *)self + 7) )
    {
      result = true;
      if ( *((uint32_t *)self + 11) <= *((uint32_t *)self + 13) )
        return *((uint32_t *)self + 16) != *((uint32_t *)self + 15);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::Construct  (binary VA: 0xfe8120)
// Original: vox::VoxMSWavSubDecoderMSADPCM::VoxMSWavSubDecoderMSADPCM
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderMSADPCM::Construct(vox::VoxMSWavSubDecoder::Self *a1, int a2, int a3)
{
  int CurThreadId;
  int v5;
  int v6;
  int v7;
  vox::VoxThread::Self *v9;

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
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CF10);
  *((uint32_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  *((uint32_t *)a1 + 15) = 0;
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 17) = 0;
  *((uint32_t *)a1 + 18) = 0;
  *((uint16_t *)a1 + 39) = 0;
  *((uint16_t *)a1 + 40) = 0;
  *((uint16_t *)a1 + 41) = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0("VoxMSWavSubDecoderMSADPCM::VoxMSWavSubDecoderMSADPCM", CurThreadId);
  vox::VoxMSWavSubDecoder::SetDataSize(a1);
  (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)a1 + 1) + 16))(*((uint32_t *)a1 + 1), 36, 0);
  (*(void (**)(uint32_t, char *, int))(**((uint32_t **)a1 + 1) + 28))(
    *((uint32_t *)a1 + 1),
    (char *)a1 + 78,
    *(uint32_t *)(a3 + 16) - 16);
  vox::VoxMSWavSubDecoder::GoToNextDataChunk(a1);
  *((uint32_t *)a1 + 14) = (*(int (**)(uint32_t))(**((uint32_t **)a1 + 1) + 24))(*((uint32_t *)a1 + 1));
  *((uint32_t *)a1 + 6) = 16;
  *((uint32_t *)a1 + 4) = *(uint16_t *)(a3 + 22);
  *((uint32_t *)a1 + 5) = *(uint32_t *)(a3 + 24);
  *((uint32_t *)a1 + 7) = *(uint32_t *)(a3 + 52);
  *((uint8_t *)a1 + 76) = 0;
  v5 = VoxAllocInternal(
         4 * *(uint16_t *)(a3 + 32),
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_msadpcm.cpp"),
         (int)(uintptr_t)("VoxMSWavSubDecoderMSADPCM"),
         65);
  *((uint32_t *)a1 + 12) = v5;
  if ( v5 == 0 )
    goto LABEL_8;
  v6 = *((uint32_t *)a1 + 4);
  if ( v6 == 2 )
  {
    if ( *((uint8_t *)a1 + 76) == 0 )
    {
LABEL_5:
      v7 = VoxAllocInternal(
             *(uint16_t *)(a3 + 32),
             0,
             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_msadpcm.cpp"),
             (int)(uintptr_t)("VoxMSWavSubDecoderMSADPCM"),
             78);
      *((uint32_t *)a1 + 18) = v7;
      goto LABEL_6;
    }
    v7 = VoxAllocInternal(
           2 * *(uint16_t *)(a3 + 32),
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_msadpcm.cpp"),
           (int)(uintptr_t)("VoxMSWavSubDecoderMSADPCM"),
           74);
    *((uint32_t *)a1 + 18) = v7;
  }
  else
  {
    if ( v6 != 1 || *((uint8_t *)a1 + 76) == 0 )
      goto LABEL_5;
    v7 = VoxAllocInternal(
           4 * *(uint16_t *)(a3 + 32),
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_msadpcm.cpp"),
           (int)(uintptr_t)("VoxMSWavSubDecoderMSADPCM"),
           76);
    *((uint32_t *)a1 + 18) = v7;
  }
LABEL_6:
  if ( v7 == 0 )
  {
    VoxFreeInternal(*((void **)a1 + 12));
    *((uint32_t *)a1 + 12) = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)(*((uint32_t *)a1 + 4) - 1) > 1 )
  {
LABEL_8:
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 0;
    *((uint32_t *)a1 + 6) = 0;
    *((uint32_t *)a1 + 7) = 0;
  }
  { sub_BA06B0("VoxMSWavSubDecoderMSADPCM::VoxMSWavSubDecoderMSADPCM", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::DecodeSample  (binary VA: 0xfe83b0)
// Original: vox::VoxMSWavSubDecoderMSADPCM::DecodeSample
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderMSADPCM::DecodeSample(int a1, uint16_t *a2, int a3, int16_t *a4)
{
  int16_t v4; // di
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int16_t v11; // si
  int v12;
  int v13;

  v4 = a2[2];
  v5 = a4[1];
  v6 = *a4 * v4;
  v7 = (int16_t)a2[3];
  a2[3] = v4;
  v8 = (uint16_t)a2[1] * (a3 << 28 >> 28) + ((v6 + v5 * v7) >> 8);
  v9 = 0x7FFF;
  if ( v8 <= 0x7FFF )
    v9 = v8;
  result = -32768;
  if ( v9 >= -32768 )
    result = v9;
  v11 = 16;
  v12 = dword_1CBE6E0[a3] * (uint16_t)a2[1];
  a2[2] = result;
  v13 = v12 >> 8;
  if ( v13 >= 16 )
    v11 = v13;
  a2[1] = v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::DecodeBlock  (binary VA: 0xfe8460)
// Original: vox::VoxMSWavSubDecoderMSADPCM::DecodeBlock
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderMSADPCM::DecodeBlock(vox::VoxMSWavSubDecoderMSADPCM::Self *self, void *a2, int a3, int a4, int a5, int a6, int a7, int16_t *a8, int16_t *a9, int a10, int a11, int16_t a12, int a13, int a14)
{
  unsigned int v14;
  uint8_t *v15;
  int i;
  uint8_t *v17;
  uint8_t v18;
  int v19;
  int16_t v20;
  int16_t *v21;
  int16_t v22;
  int v23;
  int16_t v24;
  int16_t *v25;
  int16_t v26;
  int v27;
  int16_t v28;
  int16_t *v29;
  int16_t v30;
  uint16_t *v31;
  int v32;
  int16_t *v33;
  int v34;
  int v35;
  int16_t *v36;
  bool v37;
  int v38;
  unsigned int v39;
  int v40;
  vox::VoxThread::Self *v42;
  int v43;
  int CurThreadId;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int16_t *v60;
  int16_t *v61;
  int16_t *v62;
  int v63;
  int v64;
  int v65;
  int v66;

  CurThreadId = vox::VoxThread::GetCurThreadId(v42);
  sub_BA06A0();
  v14 = *(uint16_t *)(*((uint32_t *)self + 2) + 32);
  if ( *((uint32_t *)self + 11) - *((uint32_t *)self + 13) <= v14 )
    v14 = *((uint32_t *)self + 11) - *((uint32_t *)self + 13);
  v15 = *((uint8_t **)self + 18);
  v59 = (*(int (**)(uint32_t, uint8_t *, unsigned int, int, const char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**((uint32_t **)self + 1) + 28))(
          *((uint32_t *)self + 1),
          v15,
          v14,
          v43,
          "VoxMSWavSubDecoderMSADPCM::DecodeBlock",
          CurThreadId,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
  v63 = 0;
  if ( v59 > 0 )
  {
    a8 = &a12;
    v64 = *((uint32_t *)self + 4);
    if ( v64 == 2 )
    {
      a9 = (int16_t *)&a14;
      v62 = (int16_t *)&a14;
    }
    else
    {
      a9 = &a12;
      v62 = &a12;
      if ( v64 <= 0 )
      {
        v31 = (uint16_t *)v59;
        v61 = (int16_t *)((char *)self + 4 * (uint8_t)a12 + 84);
        v60 = v61;
        v62 = &a12;
LABEL_20:
        v66 = v59 - 7 * *(uint16_t *)(*((uint32_t *)self + 2) + 22);
        v65 = 2 * v66 / v64 + 2;
        if ( v66 > 0 )
        {
          do
          {
            *v31 = vox::VoxMSWavSubDecoderMSADPCM::DecodeSample((int)(uintptr_t)(self), (uint16_t *)(&a12), (int)*v15 >> 4, v61);
            v31[1] = vox::VoxMSWavSubDecoderMSADPCM::DecodeSample((int)(uintptr_t)(self), (uint16_t *)(v62), *v15 & 0xF, v60);
            v31 += 2;
            v37 = v66-- == 1;
            ++v15;
          }
          while ( !v37 );
        }
        *((uint32_t *)self + 13) += v59;
        v38 = *((uint32_t *)self + 17);
        v39 = v38 + v65;
        v40 = *((uint32_t *)self + 7) - v38;
        if ( v39 <= *((uint32_t *)self + 7) )
          v40 = v65;
        v63 = v40;
        goto LABEL_25;
      }
    }
    for ( i = 0; i < v64; ++i )
    {
      v17 = (uint8_t *)(&a8)[i];
      v18 = v15[i];
      *v17 = v18;
    }
    v15 += v64;
    v19 = 0;
    do
    {
      v20 = *v15;
      v21 = (&a8)[v19++];
      v22 = v15[1];
      v15 += 2;
      v21[1] = (v22 << 8) | v20;
    }
    while ( v64 > v19 );
    v23 = 0;
    do
    {
      v24 = *v15;
      v25 = (&a8)[v23++];
      v26 = v15[1];
      v15 += 2;
      v25[2] = (v26 << 8) | v24;
    }
    while ( v64 > v23 );
    v27 = 0;
    do
    {
      v28 = *v15;
      v29 = (&a8)[v27++];
      v30 = v15[1];
      v15 += 2;
      v29[3] = (v30 << 8) | v28;
    }
    while ( v64 > v27 );
    v31 = (uint16_t *)v59;
    v61 = (int16_t *)((char *)self + 4 * (uint8_t)a12 + 84);
    v60 = (int16_t *)((char *)self + 4 * *(uint8_t *)v62 + 84);
    v32 = 0;
    do
    {
      v33 = (&a8)[v32++];
      *v31 = v33[3];
      v34 = *((uint32_t *)self + 4);
      ++v31;
    }
    while ( v34 > v32 );
    v64 = *((uint32_t *)self + 4);
    if ( v34 > 0 )
    {
      v35 = 0;
      do
      {
        v36 = (&a8)[v35++];
        *v31++ = v36[2];
      }
      while ( *((uint32_t *)self + 4) > v35 );
      v64 = *((uint32_t *)self + 4);
    }
    goto LABEL_20;
  }
LABEL_25:
  sub_BA06B0();
  return v63;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::Decode  (binary VA: 0xfe8730)
// Original: vox::VoxMSWavSubDecoderMSADPCM::Decode
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderMSADPCM::Decode(vox::VoxMSWavSubDecoderMSADPCM::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  bool v11;
  vox::VoxThread::Self *dest;
  size_t n;
  int v15;
  int v16;
  int v17;
  int CurThreadId;
  int16_t *v19;
  int16_t *v20;
  int v21;
  int v22;
  int16_t v23;
  int v24;
  int v25;

  CurThreadId = vox::VoxThread::GetCurThreadId(dest);
  v19 = (int16_t *)"VoxMSWavSubDecoderMSADPCM::Decode";
  sub_BA06A0();
  v3 = 0;
  v17 = a3 / (*((uint32_t *)self + 4) * (*((int *)self + 6) >> 3));
  if ( v17 > 0 )
  {
    v4 = a3 / (*((uint32_t *)self + 4) * (*((int *)self + 6) >> 3));
    while ( 1 )
    {
      v5 = *((uint32_t *)self + 16);
      v6 = *((uint32_t *)self + 15);
      if ( v5 == v6 )
      {
        v6 = vox::VoxMSWavSubDecoderMSADPCM::DecodeBlock(
               self,
               *((void **)self + 12),
               n,
               v15,
               v16,
               v17,
               CurThreadId,
               v19,
               v20,
               v21,
               v22,
               v23,
               v24,
               v25);
        v5 = 0;
        *((uint32_t *)self + 15) = v6;
        *((uint32_t *)self + 16) = 0;
        if ( v6 <= 0 )
        {
LABEL_16:
          *((uint8_t *)self + 41) = 1;
LABEL_13:
          v3 = *((uint32_t *)self + 4) * (*((int *)self + 6) >> 3) * (v17 - v4);
          break;
        }
      }
      else if ( v6 <= 0 )
      {
        goto LABEL_16;
      }
      v7 = v6 - v5;
      if ( v7 > v4 )
        v7 = v4;
      v8 = *((uint32_t *)self + 4) * (v17 - v4);
      v4 -= v7;
      memcpy(
        &a2[2 * v8],
        (const void *)(*((uint32_t *)self + 12) + 2 * *((uint32_t *)self + 4) * v5),
        2 * v7 * *((uint32_t *)self + 4));
      v9 = v7 + *((uint32_t *)self + 16);
      v10 = *((uint32_t *)self + 17) + v7;
      v11 = v10 < *((uint32_t *)self + 7);
      *((uint32_t *)self + 16) = v9;
      *((uint32_t *)self + 17) = v10;
      if ( !v11 || *((uint32_t *)self + 13) >= *((uint32_t *)self + 11) && v9 == *((uint32_t *)self + 15) )
      {
        if ( *((uint8_t *)self + 40) == 0 )
        {
LABEL_17:
          v3 = *((uint32_t *)self + 4) * (*((int *)self + 6) >> 3) * (v17 - v4);
          break;
        }
        if ( G4_VCALL<int>(self, 12, 0) != 0 )
          goto LABEL_13;
      }
      if ( v4 <= 0 )
        goto LABEL_17;
    }
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderMSADPCM::Seek  (binary VA: 0xfe88b0)
// Original: vox::VoxMSWavSubDecoderMSADPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderMSADPCM::Seek(int16_t a1, int a2, int a3, vox::VoxMSWavSubDecoderMSADPCM::Self *self, unsigned int a5)
{
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  vox::VoxMSWavSubDecoderMSADPCM::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int16_t *v16;
  int v17;
  int v18;

  vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  v5 = *((uint32_t *)self + 7);
  if ( v5 < a5 )
  {
    if ( *((uint8_t *)self + 40) != 0 )
    {
      if ( v5 != 0 )
        a5 %= v5;
      else
        a5 = 0;
    }
    else
    {
      a5 = *((uint32_t *)self + 7);
    }
  }
  v15 = a5 / *((int16_t *)self + 40);
  v6 = *((uint32_t *)self + 1);
  v7 = v15 * *(uint16_t *)(*((uint32_t *)self + 2) + 32);
  *((uint32_t *)self + 13) = v7;
  G4_VCALL<void>(v6, 16, *((uint32_t *)self + 14) + v7);
  v8 = v15 * *((int16_t *)self + 40);
  *((uint32_t *)self + 17) = v8;
  *((uint32_t *)self + 16) = a5 - v8;
  *((uint32_t *)self + 15) = vox::VoxMSWavSubDecoderMSADPCM::DecodeBlock(
                             self,
                             *((void **)self + 12),
                             0,
                             v11,
                             v12,
                             v13,
                             v14,
                             (int16_t *)v15,
                             v16,
                             v17,
                             v18,
                             a1,
                             a3,
                             a2);
  *((uint32_t *)self + 17) += *((uint32_t *)self + 16);
  sub_BA06B0();
  return 0;
}


