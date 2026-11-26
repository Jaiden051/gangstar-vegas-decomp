#include "Core/Utils/DecompTypes.h"
#include "vox_VoxNativeSubDecoderMSADPCM.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::ReleaseDecodingBuffer  (binary VA: 0xffbd50)
// Original: vox::VoxNativeSubDecoderMSADPCM::ReleaseDecodingBuffer
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::ReleaseDecodingBuffer(vox::VoxNativeSubDecoderMSADPCM::Self *self, int a2)
{
  int result;

  result = a2;
  if ( a2 >= 0 )
  {
    *((uint32_t *)self + a2 + 100) = 0;
    *((uint32_t *)self + a2 + 94) = 0;
    *((uint32_t *)self + a2 + 97) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::SetCurrentSegmentInitialPosition  (binary VA: 0xffbd80)
// Original: vox::VoxNativeSubDecoderMSADPCM::SetCurrentSegmentInitialPosition
// ----------------------------------------------------------------------------
unsigned int vox::VoxNativeSubDecoderMSADPCM::SetCurrentSegmentInitialPosition(vox::VoxNativeSubDecoderMSADPCM::Self *self, unsigned int a2)
{
  unsigned int result;

  result = *((int16_t *)self + 8) * (a2 / *(int16_t *)(*((uint32_t *)self + 105) + 2));
  *((uint32_t *)self + 74) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::GetDecodingBuffer  (binary VA: 0xffbe20)
// Original: vox::VoxNativeSubDecoderMSADPCM::GetDecodingBuffer
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::GetDecodingBuffer(vox::VoxNativeSubDecoderMSADPCM::Self *self)
{
  int result;

  if ( *((uint32_t *)self + 100) != 0 )
  {
    if ( *((uint32_t *)self + 101) != 0 )
    {
      result = -1;
      if ( *((uint32_t *)self + 102) == 0 )
      {
        *((uint32_t *)self + 102) = 1;
        return 2;
      }
    }
    else
    {
      *((uint32_t *)self + 101) = 1;
      return 1;
    }
  }
  else
  {
    *((uint32_t *)self + 100) = 1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::Reset  (binary VA: 0xffbe80)
// Original: vox::VoxNativeSubDecoderMSADPCM::Reset
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::Reset(vox::VoxNativeSubDecoderMSADPCM::Self *self)
{
  vox::VoxNativeSubDecoder::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  *((uint32_t *)self + 94) = 0;
  *((uint32_t *)self + 95) = 0;
  *((uint32_t *)self + 96) = 0;
  *((uint32_t *)self + 97) = 0;
  *((uint32_t *)self + 98) = 0;
  *((uint32_t *)self + 99) = 0;
  *((uint32_t *)self + 100) = 0;
  *((uint32_t *)self + 101) = 0;
  *((uint32_t *)self + 102) = 0;
  vox::VoxNativeSubDecoder::Reset((vox::NativePlaylistsManager::Self **)self);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::Destroy  (binary VA: 0xffbf40)
// Original: vox::VoxNativeSubDecoderMSADPCM::~VoxNativeSubDecoderMSADPCM
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::Destroy(vox::VoxNativeSubDecoderMSADPCM::Self *self)
{
  void **v1;
  vox::VoxThread::Self *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D348);
  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  v1 = *((void ***)self + 93);
  if ( v1 != nullptr )
  {
    if ( *v1 != nullptr )
    {
      VoxFreeInternal(*v1);
      **((uint32_t **)self + 93) = 0;
      v1 = *((void ***)self + 93);
    }
    if ( v1[1] != nullptr )
    {
      VoxFreeInternal(v1[1]);
      *(uint32_t *)(*((uint32_t *)self + 93) + 4) = 0;
      v1 = *((void ***)self + 93);
    }
    if ( v1[2] != nullptr )
    {
      VoxFreeInternal(v1[2]);
      *(uint32_t *)(*((uint32_t *)self + 93) + 8) = 0;
      v1 = *((void ***)self + 93);
    }
    VoxFreeInternal(v1);
    *((uint32_t *)self + 93) = 0;
  }
  if ( *((uint32_t *)self + 103) != 0 )
  {
    VoxFreeInternal(*((void **)self + 103));
    *((uint32_t *)self + 103) = 0;
  }
  sub_BA06B0();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D1C8);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::Destroy_eaffc050  (binary VA: 0xffc050)
// Original: vox::VoxNativeSubDecoderMSADPCM::~VoxNativeSubDecoderMSADPCM
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::Destroy_eaffc050(vox::VoxNativeSubDecoderMSADPCM::Self *self)
{
  vox::VoxNativeSubDecoderMSADPCM::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::Construct  (binary VA: 0xffc0e0)
// Original: vox::VoxNativeSubDecoderMSADPCM::VoxNativeSubDecoderMSADPCM
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::Construct(vox::VoxThread::Self *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  bool v15; // cc
  vox::VoxThread::Self *v17;
  int v18;
  int v19;
  size_t v20;
  int v21;
  int CurThreadId;

  vox::VoxNativeSubDecoder::Construct(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *((uint32_t *)a1 + 93) = 0;
  *((uint32_t *)a1 + 103) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208D348);
  *((uint32_t *)a1 + 104) = 0;
  *((uint32_t *)a1 + 105) = a11;
  CurThreadId = vox::VoxThread::GetCurThreadId(v17);
  sub_BA06A0("VoxNativeSubDecoderMSADPCM::VoxNativeSubDecoderMSADPCM", CurThreadId);
  *((uint32_t *)a1 + 2) = a3[8];
  *((uint32_t *)a1 + 3) = a3[9];
  v11 = a3[10];
  *((uint32_t *)a1 + 4) = v11;
  v20 = (int16_t)v11;
  *((uint32_t *)a1 + 93) = VoxAllocInternal(
                           0xCu,
                           0,
                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_msadpcm.cpp"),
                           (int)(uintptr_t)("VoxNativeSubDecoderMSADPCM"),
                           54);
  v12 = VoxAllocInternal(
          v20,
          0,
          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_msadpcm.cpp"),
          (int)(uintptr_t)("VoxNativeSubDecoderMSADPCM"),
          55);
  v13 = *((uint32_t **)a1 + 93);
  *((uint32_t *)a1 + 103) = v12;
  if ( v13 == nullptr )
    goto LABEL_7;
  if ( v12 == 0 )
    goto LABEL_7;
  v21 = 4 * v20;
  *v13 = VoxAllocInternal(
           v21,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_msadpcm.cpp"),
           (int)(uintptr_t)("VoxNativeSubDecoderMSADPCM"),
           63);
  v18 = *((uint32_t *)a1 + 93);
  *(uint32_t *)(v18 + 4) = VoxAllocInternal(
                           v21,
                           0,
                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_msadpcm.cpp"),
                           (int)(uintptr_t)("VoxNativeSubDecoderMSADPCM"),
                           64);
  v19 = *((uint32_t *)a1 + 93);
  *(uint32_t *)(v19 + 8) = VoxAllocInternal(
                           v21,
                           0,
                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_msadpcm.cpp"),
                           (int)(uintptr_t)("VoxNativeSubDecoderMSADPCM"),
                           65);
  v14 = *((uint32_t **)a1 + 93);
  if ( *v14 == 0 )
    goto LABEL_7;
  if ( v14[1] == 0 )
    goto LABEL_7;
  if ( v14[2] == 0 )
    goto LABEL_7;
  v15 = *((uint16_t *)a1 + 5) <= 8;
  *((uint32_t *)a1 + 94) = 0;
  *((uint32_t *)a1 + 95) = 0;
  *((uint32_t *)a1 + 96) = 0;
  *((uint32_t *)a1 + 97) = 0;
  *((uint32_t *)a1 + 98) = 0;
  *((uint32_t *)a1 + 99) = 0;
  *((uint32_t *)a1 + 100) = 0;
  *((uint32_t *)a1 + 101) = 0;
  *((uint32_t *)a1 + 102) = 0;
  if ( !v15 )
  {
LABEL_7:
    *((uint16_t *)a1 + 4) = 0;
    *((uint16_t *)a1 + 5) = 0;
    *((uint32_t *)a1 + 3) = 0;
    *((uint16_t *)a1 + 9) = 0;
  }
  { sub_BA06B0("VoxNativeSubDecoderMSADPCM::VoxNativeSubDecoderMSADPCM", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::DecodeSample  (binary VA: 0xffc380)
// Original: vox::VoxNativeSubDecoderMSADPCM::DecodeSample
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::DecodeSample(int a1, uint16_t *a2, int a3, int16_t *a4)
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
  v12 = dword_1CBEC00[a3] * (uint16_t)a2[1];
  a2[2] = result;
  v13 = v12 >> 8;
  if ( v13 >= 16 )
    v11 = v13;
  a2[1] = v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::DecodeBlock  (binary VA: 0xffc430)
// Original: vox::VoxNativeSubDecoderMSADPCM::DecodeBlock
// ----------------------------------------------------------------------------
char * vox::VoxNativeSubDecoderMSADPCM::DecodeBlock(int a1, uint16_t *a2, uint32_t *a3, int a4, int16_t a5, int a6, int a7, int16_t *a8, int16_t *a9, int a10, int a11, int16_t a12, int a13, int a14)
{
  uint32_t *v14;
  int v15;
  int v16;
  uint8_t *v17;
  unsigned int v18;
  int v19;
  bool v20; // cc
  int v21;
  uint8_t *v22;
  uint8_t v23;
  int v24;
  int v25;
  int16_t v26;
  int16_t *v27;
  int16_t v28;
  int v29;
  int16_t v30;
  int16_t *v31;
  int16_t v32;
  int v33;
  int16_t v34;
  int16_t *v35;
  int16_t v36;
  uint16_t *v37;
  int v38;
  int v39;
  int16_t *v40;
  int v41;
  int16_t *v42;
  bool v43;
  int v44;
  unsigned int v45;
  char *v46;
  vox::VoxThread::Self *v48;
  int CurThreadId;
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
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  char *retaddr;
  int v66;
  int16_t *v67;
  int16_t *v68;
  char *v69;
  int v70;
  int v71;
  int v72;
  int v73;

  CurThreadId = vox::VoxThread::GetCurThreadId(v48);
  sub_BA06A0();
  LOWORD(v54) = *(uint16_t *)(a1 + 10);
  v14 = (uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + 24 * *a3);
  v15 = v14[1];
  v16 = *(uint32_t *)(a1 + 20) + *v14 + a3[2];
  if ( v16 != (*(int (**)(uint32_t, int, int, int, uint32_t, const char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(a1 + 4) + 24))(
                *(uint32_t *)(a1 + 4),
                CurThreadId,
                v50,
                v51,
                v14[2],
                "VoxNativeSubDecoderMSADPCM::DecodeBlock",
                CurThreadId,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63,
                v64) )
    (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 4) + 16))(*(uint32_t *)(a1 + 4), v16, 0);
  v17 = *(uint8_t **)(a1 + 412);
  v18 = v15 - a3[2];
  if ( *(int16_t *)(a1 + 16) <= v18 )
    v18 = *(int16_t *)(a1 + 16);
  v19 = (*(int (**)(uint32_t, uint8_t *, unsigned int))(**(uint32_t **)(a1 + 4) + 28))(
          *(uint32_t *)(a1 + 4),
          v17,
          v18);
  v72 = v19;
  v69 = nullptr;
  if ( v19 > 0 )
  {
    a3[2] += v19;
    a8 = &a12;
    if ( a5 == 2 )
    {
      v70 = 2;
      a9 = (int16_t *)&a14;
      v68 = (int16_t *)&a14;
    }
    else
    {
      a9 = &a12;
      v20 = a5 <= 0;
      v70 = a5;
      v68 = &a12;
      if ( v20 )
      {
        v37 = a2;
        v68 = &a12;
        v67 = (int16_t *)(*(uint32_t *)(a1 + 420) + 4 * (uint8_t)a12 + 6);
        v66 = (int)(uintptr_t)(v67);
LABEL_22:
        v73 = v72 - 7 * v70;
        v71 = 2 * v73 / v70 + 2;
        if ( v73 > 0 )
        {
          do
          {
            *v37 = vox::VoxNativeSubDecoderMSADPCM::DecodeSample(a1, (uint16_t *)(&a12), (int)*v17 >> 4, (int16_t *)v66);
            v37[1] = vox::VoxNativeSubDecoderMSADPCM::DecodeSample(a1, (uint16_t *)(v68), *v17 & 0xF, v67);
            v37 += 2;
            v43 = v73-- == 1;
            ++v17;
          }
          while ( !v43 );
        }
        v44 = *(uint32_t *)(v66 + 12);
        v45 = v44 + v71;
        v46 = &retaddr[-v44];
        if ( (unsigned int)(uintptr_t)(retaddr) >= v45 )
          v46 = (char *)v71;
        v69 = v46;
        goto LABEL_27;
      }
    }
    v21 = 0;
    do
    {
      v22 = (uint8_t *)(&a8)[v21];
      v23 = v17[v21++];
      *v22 = v23;
    }
    while ( v21 < v70 );
    v24 = 1;
    if ( v70 > 0 )
      v24 = v70;
    v17 += v24;
    v25 = 0;
    do
    {
      v26 = *v17;
      v27 = (&a8)[v25++];
      v28 = v17[1];
      v17 += 2;
      v27[1] = (v28 << 8) | v26;
    }
    while ( v25 < v70 );
    v29 = 0;
    do
    {
      v30 = *v17;
      v31 = (&a8)[v29++];
      v32 = v17[1];
      v17 += 2;
      v31[2] = (v32 << 8) | v30;
    }
    while ( v29 < v70 );
    v33 = 0;
    do
    {
      v34 = *v17;
      v35 = (&a8)[v33++];
      v36 = v17[1];
      v17 += 2;
      v35[3] = (v36 << 8) | v34;
    }
    while ( v33 < v70 );
    v37 = a2;
    v38 = *(uint32_t *)(a1 + 420);
    v66 = v38 + 4 * (uint8_t)a12 + 6;
    v67 = (int16_t *)(v38 + 4 * *(uint8_t *)v68 + 6);
    v39 = 0;
    do
    {
      v40 = (&a8)[v39++];
      *v37++ = v40[3];
    }
    while ( v39 < v70 );
    v41 = 0;
    do
    {
      v42 = (&a8)[v41++];
      *v37++ = v42[2];
    }
    while ( v41 < v70 );
    goto LABEL_22;
  }
LABEL_27:
  sub_BA06B0();
  return v69;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::SetDecodingBufferToSegmentPosition  (binary VA: 0xffc750)
// Original: vox::VoxNativeSubDecoderMSADPCM::SetDecodingBufferToSegmentPosition
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::SetDecodingBufferToSegmentPosition(int16_t a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  unsigned int v6;
  unsigned int v7;
  char *v8;
  vox::VoxThread::Self *v9;
  int v10;
  int16_t v11;
  unsigned int v12;
  int v13;
  int CurThreadId;
  int16_t *v15;
  int v16;
  int v17;

  CurThreadId = vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  v12 = a5[3];
  v5 = a5[15];
  v6 = *(int16_t *)(*(uint32_t *)(a4 + 420) + 2);
  v7 = v6 * (v12 / v6);
  a5[3] = v7;
  a5[2] = *(int16_t *)(a4 + 16) * (v7 / *(int16_t *)(*(uint32_t *)(a4 + 420) + 2));
  v8 = vox::VoxNativeSubDecoderMSADPCM::DecodeBlock(
         a4,
         *(uint16_t **)(*(uint32_t *)(a4 + 372) + 4 * v5),
         a5,
         v10,
         v11,
         v12,
         CurThreadId,
         (int16_t *)"VoxNativeSubDecoderMSADPCM::SetDecodingBufferToSegmentPosition",
         v15,
         v16,
         v17,
         a1,
         a3,
         a2);
  *(uint32_t *)(a4 + 4 * v5 + 376) = (uint32_t)(uintptr_t)(v8);
  if ( (int)(uintptr_t)(v8) <= 0 )
  {
    *(uint8_t *)(a4 + 365) = 1;
  }
  else
  {
    *(uint32_t *)(a4 + 4 * v5 + 388) = v13 - a5[3];
    a5[3] = v13;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::Seek  (binary VA: 0xffc850)
// Original: vox::VoxNativeSubDecoderMSADPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::Seek(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  char *v7;
  vox::VoxThread::Self *v8;
  int v9;
  int16_t v10;
  int v11;
  int v12;
  int v13;
  int16_t *CurThreadId;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v3 = a2;
  CurThreadId = (int16_t *)vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v13 = 24 * *a3;
  v17 = a3[15];
  if ( a2 < 0 )
    v3 = a3[4];
  v4 = -1;
  if ( v3 <= *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + v13 + 8) )
  {
    v15 = v3 / *(int16_t *)(*(uint32_t *)(a1 + 420) + 2);
    v5 = v15 * *(int16_t *)(a1 + 16);
    a3[2] = v5;
    v16 = **(uint32_t **)(a1 + 4);
    v4 = (*(int (**)(uint32_t, int, uint32_t))(v16 + 16))(
           *(uint32_t *)(a1 + 4),
           *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + v13) + *(uint32_t *)(a1 + 20) + v5,
           0);
    if ( v4 == 0 )
    {
      *(uint32_t *)(a1 + 4 * v17 + 388) = v3 - v15 * *(int16_t *)(*(uint32_t *)(a1 + 420) + 2);
      a3[3] = v3;
      v7 = vox::VoxNativeSubDecoderMSADPCM::DecodeBlock(
             a1,
             *(uint16_t **)(*(uint32_t *)(a1 + 372) + 4 * v17),
             a3,
             v9,
             v10,
             0,
             v13,
             CurThreadId,
             (int16_t *)"VoxNativeSubDecoderMSADPCM::Seek",
             v15,
             v16,
             v17,
             v19,
             v20);
      *(uint32_t *)(a1 + 4 * v18 + 376) = (uint32_t)(uintptr_t)(v7);
      v4 = v12;
      if ( (int)(uintptr_t)(v7) <= 0 )
      {
        *(uint8_t *)(a1 + 365) = 1;
        v4 = -1;
      }
    }
  }
  v11 = v4;
  sub_BA06B0();
  return v11;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::DecodeSegment  (binary VA: 0xffc9d0)
// Original: vox::VoxNativeSubDecoderMSADPCM::DecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::DecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  bool v10; // cc
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  uint32_t *v18;
  bool v19;
  vox::VoxThread::Self *dest;
  int v21;
  int16_t v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int16_t *v27;
  int v28;
  int v29;
  int16_t v30;
  int n;
  int v32;

  vox::VoxThread::GetCurThreadId(dest);
  sub_BA06A0();
  v29 = *((int16_t *)a1 + 5);
  v32 = a3 / (v29 * (*((int16_t *)a1 + 9) >> 3));
  v4 = 0;
  if ( v32 > 0 )
  {
    v5 = a3 / (v29 * (*((int16_t *)a1 + 9) >> 3));
    while ( 1 )
    {
      v14 = *(uint32_t *)(a4 + 60);
      v23 = v14;
      if ( *(uint8_t *)(a4 + 64) != 0 )
      {
        G4_VCALL<void>(a1, 44, a4);
        *(uint8_t *)(a4 + 64) = 0;
        v14 = v23;
      }
      v28 = v14 + 96;
      v27 = *((int16_t **)a1 + v14 + 97);
      v6 = *((uint32_t *)a1 + v23 + 94);
      if ( v27 == (int16_t *)v6 )
      {
        v15 = vox::VoxNativeSubDecoderMSADPCM::DecodeBlock(
                (int)(uintptr_t)(a1),
                *(uint16_t **)(*((uint32_t *)a1 + 93) + 4 * v23),
                (uint32_t *)a4,
                v21,
                v22,
                v23,
                v24,
                (int16_t *)(v23 + 92),
                v27,
                v28,
                v29,
                v30,
                n,
                v32);
        v27 = nullptr;
        *((uint32_t *)a1 + v26 + 2) = (uint32_t)(uintptr_t)(v15);
        *((uint32_t *)a1 + v28 + 1) = 0;
        v6 = *((uint32_t *)a1 + v26 + 2);
        if ( v6 <= 0 )
        {
LABEL_22:
          *((uint8_t *)a1 + 365) = 1;
          v4 = v32 - v5;
          *(uint32_t *)(a4 + 36) = 1;
          break;
        }
      }
      else if ( v6 <= 0 )
      {
        goto LABEL_22;
      }
      v7 = *(uint32_t *)(a4 + 20) + 1 - *(uint32_t *)(a4 + 12);
      if ( v5 <= v7 )
        v7 = v5;
      v8 = v6 - (uint32_t)(uintptr_t)(v27);
      if ( v7 > v8 )
        v7 = v8;
      v30 = a2 + 2 * v29 * (v32 - v5);
      n = 2 * v7 * v29;
      v25 = v7;
      memcpy(
        (void *)(a2 + 2 * v29 * (v32 - v5)),
        (const void *)(*(uint32_t *)(*((uint32_t *)a1 + 93) + 4 * v23) + 2 * (uint32_t)(uintptr_t)(v27) * v29),
        n);
      v5 -= v25;
      *((uint32_t *)a1 + v28 + 1) += v25;
      v9 = *(uint32_t *)(a4 + 12) + v25;
      v10 = v9 <= *(uint32_t *)(a4 + 20);
      *(uint32_t *)(a4 + 12) = v9;
      if ( v10 )
        goto LABEL_18;
      v11 = *(uint32_t *)(a4 + 28);
      if ( *(uint32_t *)(a4 + 24) >> 1 != 0 && *(uint32_t *)(a4 + 24) == v11 )
        *(uint32_t *)(a4 + 16) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *(uint32_t *)a4) + 4);
      v12 = v11 - 1;
      *(uint32_t *)(a4 + 28) = v12;
      if ( v12 == 0 )
      {
        if ( *(uint32_t *)(a4 + 32) == 1 )
        {
          v18 = (uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *(uint32_t *)a4);
          v19 = *(uint32_t *)(a4 + 4) == 1;
          *(uint32_t *)(a4 + 20) = *(uint32_t *)(*v18 + 4 * ((v18[1] - *v18) >> 2) - 4);
          if ( v19 )
LABEL_32:
            vox::VoxNativeSubDecoder::UpdateSegmentsStates(a1);
        }
        else if ( *(uint32_t *)(a4 + 4) == 1 )
        {
          goto LABEL_32;
        }
      }
      v13 = *(uint32_t *)(a4 + 36);
      if ( v13 == 3 )
      {
        if ( *(uint32_t *)(a4 + 28) == 0 )
          goto LABEL_18;
        G4_VCALL<void>(a1, 36, -1, a4);
        if ( v5 <= 0 )
        {
LABEL_28:
          v4 = v32 - v5;
          break;
        }
      }
      else
      {
        if ( v13 == 4 && *(uint32_t *)(a4 + 12) > *(uint32_t *)(a4 + 20) )
        {
          *(uint32_t *)(a4 + 36) = 1;
          v4 = v32 - v5;
          break;
        }
LABEL_18:
        if ( v5 <= 0 )
          goto LABEL_28;
      }
    }
  }
  if ( *(uint32_t *)(a4 + 4) == 3 )
    *(uint32_t *)(a4 + 36) = 1;
  v16 = v29 * (*((int16_t *)a1 + 9) >> 3) * v4;
  sub_BA06B0();
  return v16;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::DecodeCurrentSegmentWithOffset  (binary VA: 0xffccd0)
// Original: vox::VoxNativeSubDecoderMSADPCM::DecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::DecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderMSADPCM::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int16_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  bool v13; // cc
  int v14;
  int v15;
  int v16;
  int16_t *v17;
  int v18;
  uint32_t *v20;
  vox::VoxThread::Self *s;
  int v22;
  int16_t v23;
  int v24;
  int v25;
  int16_t *v26;
  int16_t *v27;
  int16_t *v28;
  int v29;
  char *dest;
  int16_t v31;
  int v32;
  uint32_t *v33;

  vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0();
  v3 = *((int16_t *)self + 9) >> 3;
  v29 = *((int16_t *)self + 5);
  v4 = 0;
  v32 = a3 / (v3 * v29);
  v5 = *((uint32_t *)self + 90);
  v6 = v32;
  if ( v5 > 0 )
  {
    memset(a2, 0, v3 * v29 * v5);
    v4 = *((uint32_t *)self + 90);
    v6 = v32 - v4;
    *((uint32_t *)self + 90) = 0;
  }
  if ( v6 > 0 )
  {
    v33 = (uint32_t *)((char *)self + 288);
    while ( 1 )
    {
      v17 = *((int16_t **)self + 87);
      if ( *((uint8_t *)self + 352) != 0 )
      {
        v26 = *((int16_t **)self + 87);
        G4_VCALL<void>(self, 44, v33);
        *((uint8_t *)self + 352) = 0;
        v17 = v26;
      }
      v7 = v17 + 46;
      v24 = (int)(uintptr_t)(v17 + 48);
      v28 = *((int16_t **)self + (uint32_t)(uintptr_t)(v17 + 48) + 1);
      v8 = *((uint32_t *)self + (uint32_t)(uintptr_t)(v17 + 46) + 2);
      if ( v28 == (int16_t *)v8 )
      {
        *((uint32_t *)self + (uint32_t)(uintptr_t)(v7) + 2) = (uint32_t)(uintptr_t)(vox::VoxNativeSubDecoderMSADPCM::DecodeBlock(
                                               (int)(uintptr_t)(self),
                                               *(uint16_t **)(*((uint32_t *)self + 93) + 4 * (uint32_t)(uintptr_t)(v17)),
                                               v33,
                                               v22,
                                               v23,
                                               v24,
                                               v25,
                                               v17,
                                               v28,
                                               v29,
                                               (int)(uintptr_t)(dest),
                                               v31,
                                               v32,
                                               (int)(uintptr_t)(v33)));
        v28 = nullptr;
        *((uint32_t *)self + v24 + 1) = 0;
        v8 = *((uint32_t *)self + (uint32_t)(uintptr_t)(v7) + 2);
        v17 = v27;
        if ( v8 <= 0 )
        {
LABEL_25:
          *((uint8_t *)self + 365) = 1;
          *((uint32_t *)self + 81) = 1;
          v4 = v32 - v6;
          break;
        }
      }
      else if ( v8 <= 0 )
      {
        goto LABEL_25;
      }
      v9 = *((uint32_t *)self + 77) + 1 - *((uint32_t *)self + 75);
      if ( v6 <= v9 )
        v9 = v6;
      v10 = v8 - (uint32_t)(uintptr_t)(v28);
      if ( v9 > v10 )
        v9 = v10;
      v11 = v32 - v6;
      v6 -= v9;
      dest = &a2[2 * v29 * v11];
      v31 = 2 * v9 * v29;
      memcpy(
        dest,
        (const void *)(*(uint32_t *)(*((uint32_t *)self + 93) + 4 * (uint32_t)(uintptr_t)(v17)) + 2 * (uint32_t)(uintptr_t)(v28) * v29),
        2 * v9 * v29);
      *((uint32_t *)self + v24 + 1) += v9;
      v12 = *((uint32_t *)self + 75) + v9;
      v13 = v12 <= *((uint32_t *)self + 77);
      *((uint32_t *)self + 75) = v12;
      if ( v13 )
        goto LABEL_21;
      v14 = *((uint32_t *)self + 79);
      if ( *((uint32_t *)self + 78) >> 1 != 0 && *((uint32_t *)self + 78) == v14 )
        *((uint32_t *)self + 76) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 4);
      v15 = v14 - 1;
      *((uint32_t *)self + 79) = v15;
      if ( v15 == 0 )
      {
        if ( *((uint32_t *)self + 80) == 1 )
        {
          v20 = (uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72));
          *((uint32_t *)self + 77) = *(uint32_t *)(*v20 + 4 * ((v20[1] - *v20) >> 2) - 4);
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
      }
      v16 = *((uint32_t *)self + 81);
      if ( v16 == 3 )
      {
        if ( *((uint32_t *)self + 79) == 0 )
          goto LABEL_21;
        G4_VCALL<void>(self, 36, -1, v33);
        if ( v6 <= 0 )
        {
LABEL_29:
          v4 = v32 - v6;
          break;
        }
      }
      else
      {
        if ( v16 == 4 && *((uint32_t *)self + 75) > *((uint32_t *)self + 77) )
        {
          *((uint32_t *)self + 81) = 1;
          v4 = v32 - v6;
          break;
        }
LABEL_21:
        if ( v6 <= 0 )
          goto LABEL_29;
      }
    }
  }
  v18 = v4 * v29 * (*((int16_t *)self + 9) >> 3);
  sub_BA06B0();
  return v18;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock  (binary VA: 0xffd020)
// Original: vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  vox::VoxThread::Self *v11;
  int v12;
  unsigned int v13;

  vox::VoxThread::GetCurThreadId(v11);
  sub_BA06A0();
  v2 = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + 24 * *a2;
  v3 = a2[2];
  v4 = *(uint32_t *)(v2 + 8);
  v5 = *(uint32_t *)(v2 + 4) - v3;
  v13 = v4;
  v6 = *(int16_t *)(a1 + 16);
  if ( v6 > v5 )
    v6 = v5;
  v7 = 0;
  if ( v6 > 0 )
  {
    a2[2] = v6 + v3;
    v8 = 2 * (v6 - 7 * *(int16_t *)(a1 + 10)) / *(int16_t *)(a1 + 10);
    v9 = a2[3];
    v7 = v8 + 2;
    if ( v13 < v7 + v9 )
      v7 = v13 - v9;
  }
  v12 = v7;
  sub_BA06B0();
  return v12;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::EmulateSetDecodingBufferToSegmentPosition  (binary VA: 0xffd0f0)
// Original: vox::VoxNativeSubDecoderMSADPCM::EmulateSetDecodingBufferToSegmentPosition
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::EmulateSetDecodingBufferToSegmentPosition(int a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = a2[3];
  v5 = a2[15];
  v3 = *(int16_t *)(*(uint32_t *)(a1 + 420) + 2) * (v2 / *(int16_t *)(*(uint32_t *)(a1 + 420) + 2));
  a2[3] = v3;
  a2[2] = *(int16_t *)(a1 + 16) * (v3 / *(int16_t *)(*(uint32_t *)(a1 + 420) + 2));
  *(uint32_t *)(a1 + 4 * v5 + 376) = vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock(a1, a2);
  *(uint32_t *)(a1 + 4 * v5 + 388) = v2 - a2[3];
  a2[3] = v2;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeSegment  (binary VA: 0xffd1c0)
// Original: vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  bool v13; // cc
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v21;
  bool v22;
  vox::VoxNativeSubDecoder::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  vox::VoxThread::GetCurThreadId(v23);
  sub_BA06A0();
  v28 = *((int16_t *)a1 + 5);
  v3 = v28 * (*((int16_t *)a1 + 9) >> 3);
  v4 = 0;
  v27 = a2 / v3;
  if ( a2 / v3 > 0 )
  {
    v5 = a2 / v3;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *(uint32_t *)(a3 + 60);
        if ( *(uint8_t *)(a3 + 64) != 0 )
        {
          v24 = *(uint32_t *)(a3 + 60);
          G4_VCALL<void>(a1, 56, a3);
          *(uint8_t *)(a3 + 64) = 0;
          v17 = v24;
        }
        v6 = v17 + 96;
        v7 = v17 + 92;
        v8 = *((uint32_t *)a1 + v6 + 1);
        v25 = v6;
        v9 = *((uint32_t *)a1 + v7 + 2);
        v26 = v7;
        if ( v8 == v9 )
        {
          v18 = vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock((int)(uintptr_t)(a1), (uint32_t *)a3);
          v8 = 0;
          *((uint32_t *)a1 + v26 + 2) = v18;
          *((uint32_t *)a1 + v25 + 1) = 0;
          v9 = *((uint32_t *)a1 + v26 + 2);
          if ( v9 == 0 )
            goto LABEL_22;
        }
        else if ( v9 == 0 )
        {
          goto LABEL_22;
        }
        v10 = *(uint32_t *)(a3 + 20) + 1 - *(uint32_t *)(a3 + 12);
        if ( v5 <= v10 )
          v10 = v5;
        v11 = v9 - v8;
        if ( v10 <= v11 )
          v11 = v10;
        v5 -= v11;
        *((uint32_t *)a1 + v25 + 1) = v11 + v8;
        v12 = *(uint32_t *)(a3 + 12) + v11;
        v13 = v12 <= *(uint32_t *)(a3 + 20);
        *(uint32_t *)(a3 + 12) = v12;
        if ( !v13 )
          break;
LABEL_18:
        if ( v5 <= 0 )
          goto LABEL_28;
      }
      v14 = *(uint32_t *)(a3 + 28);
      if ( *(uint32_t *)(a3 + 24) >> 1 != 0 && *(uint32_t *)(a3 + 24) == v14 )
        *(uint32_t *)(a3 + 16) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *(uint32_t *)a3) + 4);
      v15 = v14 - 1;
      *(uint32_t *)(a3 + 28) = v15;
      if ( v15 == 0 )
      {
        if ( *(uint32_t *)(a3 + 32) == 1 )
        {
          v21 = (uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *(uint32_t *)a3);
          v22 = *(uint32_t *)(a3 + 4) == 1;
          *(uint32_t *)(a3 + 20) = *(uint32_t *)(*v21 + 4 * ((v21[1] - *v21) >> 2) - 4);
          if ( !v22 )
            goto LABEL_16;
        }
        else if ( *(uint32_t *)(a3 + 4) != 1 )
        {
          goto LABEL_16;
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(a1);
      }
LABEL_16:
      v16 = *(uint32_t *)(a3 + 36);
      if ( v16 != 3 )
      {
        if ( v16 == 4 && *(uint32_t *)(a3 + 12) > *(uint32_t *)(a3 + 20) )
        {
LABEL_22:
          *(uint32_t *)(a3 + 36) = 1;
          v4 = v27 - v5;
          break;
        }
        goto LABEL_18;
      }
      if ( *(uint32_t *)(a3 + 28) == 0 )
        goto LABEL_18;
      G4_VCALL<void>(a1, 36, -1, a3);
      if ( v5 <= 0 )
      {
LABEL_28:
        v4 = v27 - v5;
        break;
      }
    }
  }
  if ( *(uint32_t *)(a3 + 4) == 3 )
    *(uint32_t *)(a3 + 36) = 1;
  v19 = v4 * v28 * (*((int16_t *)a1 + 9) >> 3);
  sub_BA06B0();
  return v19;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeCurrentSegmentWithOffset  (binary VA: 0xffd420)
// Original: vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderMSADPCM::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v21;
  vox::VoxNativeSubDecoder::Self *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;

  vox::VoxThread::GetCurThreadId(v22);
  sub_BA06A0();
  v27 = *((int16_t *)self + 5);
  v2 = v27 * (*((int16_t *)self + 9) >> 3);
  v26 = a2 / v2;
  v3 = *((uint32_t *)self + 90);
  v4 = a2 / v2;
  if ( v3 > 0 )
  {
    v4 -= v3;
    *((uint32_t *)self + 90) = 0;
  }
  if ( v4 > 0 )
  {
    v25 = (uint32_t *)((char *)self + 288);
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *((uint32_t *)self + 87);
        if ( *((uint8_t *)self + 352) != 0 )
        {
          G4_VCALL<void>(self, 56, v25);
          *((uint8_t *)self + 352) = 0;
        }
        v5 = v17 + 96;
        v6 = v17 + 92;
        v7 = *((uint32_t *)self + v5 + 1);
        v23 = v5;
        v8 = *((uint32_t *)self + v6 + 2);
        if ( v7 == v8 )
        {
          *((uint32_t *)self + v6 + 2) = vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock((int)(uintptr_t)(self), v25);
          v7 = 0;
          *((uint32_t *)self + v23 + 1) = 0;
          v8 = *((uint32_t *)self + v6 + 2);
          if ( v8 == 0 )
            goto LABEL_25;
        }
        else if ( v8 == 0 )
        {
          goto LABEL_25;
        }
        v9 = *((uint32_t *)self + 77);
        v24 = *((uint32_t *)self + 75);
        v10 = v9 + 1 - v24;
        if ( v4 <= v10 )
          v10 = v4;
        v11 = v8 - v7;
        if ( v10 > v11 )
          v10 = v11;
        v12 = v10 + v7;
        v4 -= v10;
        v13 = v24 + v10;
        *((uint32_t *)self + v23 + 1) = v12;
        *((uint32_t *)self + 75) = v13;
        if ( v9 < v13 )
          break;
LABEL_21:
        if ( v4 <= 0 )
          goto LABEL_29;
      }
      v14 = *((uint32_t *)self + 79);
      if ( *((uint32_t *)self + 78) >> 1 != 0 && *((uint32_t *)self + 78) == v14 )
        *((uint32_t *)self + 76) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 4);
      v15 = v14 - 1;
      *((uint32_t *)self + 79) = v15;
      if ( v15 == 0 )
      {
        if ( *((uint32_t *)self + 80) == 1 )
        {
          v21 = (uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72));
          *((uint32_t *)self + 77) = *(uint32_t *)(*v21 + 4 * ((v21[1] - *v21) >> 2) - 4);
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
      }
      v16 = *((uint32_t *)self + 81);
      if ( v16 != 3 )
      {
        if ( v16 == 4 && *((uint32_t *)self + 75) > *((uint32_t *)self + 77) )
        {
LABEL_25:
          v18 = *((int16_t *)self + 9);
          *((uint32_t *)self + 81) = 1;
          v2 = v27 * (v18 >> 3);
          break;
        }
        goto LABEL_21;
      }
      if ( *((uint32_t *)self + 79) == 0 )
        goto LABEL_21;
      G4_VCALL<void>(self, 36, -1, v25);
      if ( v4 <= 0 )
      {
LABEL_29:
        v2 = v27 * (*((int16_t *)self + 9) >> 3);
        break;
      }
    }
  }
  v19 = v2 * (v26 - v4);
  sub_BA06B0();
  return v19;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::GetState  (binary VA: 0xffd6c0)
// Original: vox::VoxNativeSubDecoderMSADPCM::GetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::GetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::GetState(self, a2);
  a2[81] = *(self + 100);
  a2[82] = *(self + 101);
  a2[83] = *(self + 102);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::SetState  (binary VA: 0xffd760)
// Original: vox::VoxNativeSubDecoderMSADPCM::SetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMSADPCM::SetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  bool v2; // cc
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::SetState(self, a2);
  v2 = (int)(uintptr_t)(*(self + 47)) <= 2;
  *(self + 100) = a2[81];
  *(self + 101) = a2[82];
  *(self + 102) = a2[83];
  if ( !v2 )
    *((uint8_t *)self + 216) = 1;
  if ( (int)(uintptr_t)(*(self + 64)) > 2 )
    *((uint8_t *)self + 284) = 1;
  if ( (int)(uintptr_t)(*(self + 81)) > 2 )
    *((uint8_t *)self + 352) = 1;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMSADPCM::Seek  (binary VA: 0xffd830)
// Original: vox::VoxNativeSubDecoderMSADPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMSADPCM::Seek()
{
  return 0;
}


