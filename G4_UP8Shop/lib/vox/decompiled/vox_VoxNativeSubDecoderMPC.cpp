#include "Core/Utils/DecompTypes.h"
#include "vox_VoxNativeSubDecoderMPC.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::SetCurrentSegmentInitialPosition  (binary VA: 0xffa1b0)
// Original: vox::VoxNativeSubDecoderMPC::SetCurrentSegmentInitialPosition
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::SetCurrentSegmentInitialPosition(vox::VoxNativeSubDecoderMPC::Self *self, unsigned int a2)
{
  return G4_VCALL<int>(self, 36, a2, (char *)self + 288);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::Reset  (binary VA: 0xffa250)
// Original: vox::VoxNativeSubDecoderMPC::Reset
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::Reset(vox::NativePlaylistsManager::Self **self)
{
  vox::VoxNativeSubDecoder::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::Reset(self);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::EmulateDecodeCurrentSegmentWithOffset  (binary VA: 0xffa2b0)
// Original: vox::VoxNativeSubDecoderMPC::EmulateDecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::EmulateDecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderMPC::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  uint32_t *v15;
  vox::VoxNativeSubDecoder::Self *v16;
  int v17;

  vox::VoxThread::GetCurThreadId(v16);
  sub_BA06A0();
  v2 = *((int16_t *)self + 9) >> 3;
  v17 = *((int16_t *)self + 5);
  v3 = a2 / (v2 * v17);
  v4 = *((uint32_t *)self + 90);
  v5 = v3;
  if ( v4 > 0 )
  {
    v5 = v3 - v4;
    *((uint32_t *)self + 90) = 0;
  }
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      v6 = *((uint32_t *)self + 75);
      v7 = *((uint32_t *)self + 77);
      if ( v5 + v6 <= v7 )
      {
        v11 = *((int16_t *)self + 5);
        *((uint32_t *)self + 75) = v5 + v6;
        v17 = v11;
        v2 = *((int16_t *)self + 9) >> 3;
        v5 = 0;
        break;
      }
      v5 += v6 - (v7 + 1);
      *((uint32_t *)self + 75) = v7 + 1;
      if ( v7 < v7 + 1 )
      {
        v8 = *((uint32_t *)self + 79);
        if ( *((uint32_t *)self + 78) >> 1 != 0 && *((uint32_t *)self + 78) == v8 )
          *((uint32_t *)self + 76) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 4);
        v9 = v8 - 1;
        *((uint32_t *)self + 79) = v9;
        if ( v9 == 0 )
        {
          if ( *((uint32_t *)self + 80) == 1 )
          {
            v15 = (uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72));
            *((uint32_t *)self + 77) = *(uint32_t *)(*v15 + 4 * ((v15[1] - *v15) >> 2) - 4);
          }
          vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
        }
        v10 = *((uint32_t *)self + 81);
        if ( v10 == 3 )
        {
          if ( *((uint32_t *)self + 79) != 0 )
            *((uint32_t *)self + 75) = *((uint32_t *)self + 76);
        }
        else if ( v10 == 4 && *((uint32_t *)self + 75) > *((uint32_t *)self + 77) )
        {
          v14 = *((int16_t *)self + 5);
          *((uint32_t *)self + 81) = 1;
          v17 = v14;
          v2 = *((int16_t *)self + 9) >> 3;
          break;
        }
      }
      if ( v5 <= 0 )
      {
        v17 = *((int16_t *)self + 5);
        v2 = *((int16_t *)self + 9) >> 3;
        break;
      }
    }
  }
  v12 = v2 * v17 * (v3 - v5);
  sub_BA06B0();
  return v12;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::EmulateDecodeSegment  (binary VA: 0xffa4a0)
// Original: vox::VoxNativeSubDecoderMPC::EmulateDecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::EmulateDecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v12;
  bool v13;
  vox::VoxNativeSubDecoder::Self *v14;
  int v15;

  vox::VoxThread::GetCurThreadId(v14);
  sub_BA06A0();
  v3 = a2 / ((*((int16_t *)a1 + 9) >> 3) * *((int16_t *)a1 + 5));
  v15 = v3;
  if ( v3 > 0 )
  {
    v4 = a2 / ((*((int16_t *)a1 + 9) >> 3) * *((int16_t *)a1 + 5));
    while ( 1 )
    {
      v5 = a3[3];
      v6 = a3[5];
      if ( v4 + v5 <= v6 )
      {
        a3[3] = v4 + v5;
        goto LABEL_16;
      }
      v4 += v5 - (v6 + 1);
      a3[3] = v6 + 1;
      if ( v6 >= v6 + 1 )
        goto LABEL_13;
      v7 = a3[7];
      if ( a3[6] >> 1 != 0 && a3[6] == v7 )
        a3[4] = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a3) + 4);
      v8 = v7 - 1;
      a3[7] = v8;
      if ( v8 == 0 )
      {
        if ( a3[8] == 1 )
        {
          v12 = (uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a3);
          v13 = a3[1] == 1;
          a3[5] = *(uint32_t *)(*v12 + 4 * ((v12[1] - *v12) >> 2) - 4);
          if ( !v13 )
            goto LABEL_11;
        }
        else if ( a3[1] != 1 )
        {
          goto LABEL_11;
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(a1);
      }
LABEL_11:
      v9 = a3[9];
      if ( v9 == 3 )
      {
        if ( a3[7] != 0 )
          a3[3] = a3[4];
      }
      else if ( v9 == 4 && a3[3] > a3[5] )
      {
        a3[9] = 1;
        v15 = v3 - v4;
        goto LABEL_16;
      }
LABEL_13:
      if ( v4 <= 0 )
      {
        v15 = v3 - v4;
        goto LABEL_16;
      }
    }
  }
  v15 = 0;
LABEL_16:
  if ( a3[1] == 3 )
    a3[9] = 1;
  v10 = (*((int16_t *)a1 + 9) >> 3) * v15 * *((int16_t *)a1 + 5);
  sub_BA06B0();
  return v10;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::Construct  (binary VA: 0xffa760)
// Original: vox::VoxNativeSubDecoderMPC::VoxNativeSubDecoderMPC
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::Construct(vox::VoxThread::Self *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10;
  vox::VoxThread::Self *v12;
  int CurThreadId;

  vox::VoxNativeSubDecoder::Construct(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *((uint32_t *)a1 + 94) = 0;
  *((uint32_t *)a1 + 95) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208D2C8);
  *((uint32_t *)a1 + 98) = 0;
  *((uint32_t *)a1 + 96) = (uint32_t)(uintptr_t)((char *)a1 + 376);
  *((uint32_t *)a1 + 97) = (uint32_t)(uintptr_t)((char *)a1 + 376);
  CurThreadId = vox::VoxThread::GetCurThreadId(v12);
  sub_BA06A0("VoxNativeSubDecoderMPC::VoxNativeSubDecoderMPC", CurThreadId);
  *((uint32_t *)a1 + 2) = a3[8];
  *((uint32_t *)a1 + 3) = a3[9];
  *((uint32_t *)a1 + 4) = a3[10];
  v10 = VoxAllocInternal(
          8u,
          0,
          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_mpc.cpp"),
          (int)(uintptr_t)("VoxNativeSubDecoderMPC"),
          77);
  vox::DecoderMPC8::Construct(v10, 0);
  *((uint32_t *)a1 + 92) = v10;
  if ( v10 == 0 || *((int16_t *)a1 + 5) > 8 )
  {
    *((uint16_t *)a1 + 4) = 0;
    *((uint16_t *)a1 + 5) = 0;
    *((uint32_t *)a1 + 3) = 0;
    *((uint16_t *)a1 + 9) = 0;
  }
  { sub_BA06B0("VoxNativeSubDecoderMPC::VoxNativeSubDecoderMPC", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder  (binary VA: 0xffa8c0)
// Original: vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int *v3;
  int v4;
  vox::MpcSegmentDecoder::Self *v5;
  vox::MpcSegmentDecoder::Self *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *i;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  char v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  bool v39;
  int v40;
  int v41;
  uint32_t *v42;
  int v43;
  bool v44;
  int v45;
  char v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef bool _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef bool _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v48)) > _g4_s1 ? (8u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v49)) > _g4_s2 ? (12u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v50)) > _g4_s3 ? (12u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v51)) > _g4_s4 ? (12u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v52)) > _g4_s5 ? (40u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v53)) > _g4_s6 ? (40u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v54)) > _g4_s7 ? (40u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v55)) > _g4_s8 ? (40u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v56)) > _g4_s9 ? (40u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v57)) > _g4_s10 ? (40u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v58)) > _g4_s11 ? (40u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v59)) > _g4_s12 ? (44u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v60)) > _g4_s13 ? (44u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v61)) > _g4_s14 ? (44u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v62)) > _g4_s15 ? (44u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v63)) > _g4_s16 ? (44u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v64)) > _g4_s17 ? (44u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v65)) > _g4_s18 ? (44u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v66)) > _g4_s19 ? (48u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v67)) > _g4_s20 ? (48u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v68)) > _g4_s21 ? (48u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v69)) > _g4_s22 ? (48u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v70)) > _g4_s23 ? (48u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v71)) > _g4_s24 ? (52u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v72)) > _g4_s25 ? (56u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v73)) > _g4_s26 ? (56u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v74)) > _g4_s27 ? (60u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v75)) > _g4_s28 ? (68u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v76)) > _g4_s29 ? (72u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v77)) > _g4_s30 ? (76u + sizeof(_g4_t_v77)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 52u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 68u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);

  v2 = nullptr;
  v3 = *(int **)(a1 + 24);
  if ( *v3 > 0 )
  {
    v4 = 0;
    if ( *a2 != 0 )
    {
      do
      {
        if ( ++v4 == *v3 )
        {
          v2 = nullptr;
          goto LABEL_7;
        }
      }
      while ( v4 != *a2 );
      v32 = 24 * v4;
    }
    else
    {
      v32 = 0;
    }
    v2 = (uint32_t *)(v3[1] + v32);
  }
LABEL_7:
  v5 = (vox::MpcSegmentDecoder::Self *)VoxAllocInternal(
                                   0x10u,
                                   0,
                                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_mpc.cpp"),
                                   (int)(uintptr_t)("CreateSegmentDecoder"),
                                   123);
  *(uint32_t *)v5 = 0;
  *((uint32_t *)v5 + 1) = 0;
  *((uint32_t *)v5 + 2) = 0;
  *((uint32_t *)v5 + 3) = 0;
  v6 = v5;
  v7 = *(uint32_t *)(a1 + 4);
  v76 = 0;
  v77 = 0;
  v75 = v7;
  v76 = *v2 + *(uint32_t *)(a1 + 20);
  v77 = v2[1];
  v8 = (int *)VoxAllocInternal(
                0x14u,
                0,
                (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_mpc.cpp"),
                (int)(uintptr_t)("CreateSegmentDecoder"),
                134);
  vox::StreamNativeSegment::Construct(v8, &v75);
  if ( v8 != nullptr )
  {
    v9 = G4_VCALL<int>(v8, 20);
    if ( v9 != 0 )
    {
      v52 = v9;
      v10 = (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 368) + 16))(*(uint32_t *)(a1 + 368), v9);
      v11 = v52;
      if ( v10 != 0 )
      {
        if ( *(int *)(v10 + 4) > 0 )
        {
          *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v8);
          *((uint32_t *)v6 + 1) = v52;
          v12 = *(uint32_t *)(a1 + 368);
          *((uint32_t *)v6 + 3) = v10;
          *((uint32_t *)v6 + 2) = v12;
          v13 = *(uint32_t **)(a1 + 380);
          v71 = (uint32_t *)(a1 + 376);
          if ( v13 != nullptr )
          {
            v14 = (uint32_t *)(a1 + 376);
            v15 = a2[1];
            v16 = *(uint32_t **)(a1 + 380);
            do
            {
              while ( v16[4] >= v15 )
              {
                v14 = v16;
                v16 = (uint32_t *)v16[2];
                if ( v16 == nullptr )
                  goto LABEL_16;
              }
              v16 = (uint32_t *)v16[3];
            }
            while ( v16 != nullptr );
LABEL_16:
            if ( v71 == v14
              || v14[4] > v15
              || v14[5] == 0
              || (v54 = (int)(uintptr_t)(v14),
                  vox::MpcSegmentDecoder::Destroy((vox::MpcSegmentDecoder::Self *)v14[5]),
                  VoxFreeInternal(*(void **)(v54 + 20)),
                  v13 = *(uint32_t **)(a1 + 380),
                  v15 = a2[1],
                  v13 != nullptr) )
            {
              v17 = (uint32_t *)(a1 + 376);
              for ( i = v13; i != nullptr; i = (uint32_t *)i[3] )
              {
                while ( i[4] >= v15 )
                {
                  v17 = i;
                  i = (uint32_t *)i[2];
                  if ( i == nullptr )
                    goto LABEL_22;
                }
              }
LABEL_22:
              v66 = v17;
              if ( v71 != v17 )
              {
                if ( v17[4] <= v15 )
                {
LABEL_31:
                  v17[5] = (uint32_t)(uintptr_t)(v6);
                  return 1;
                }
                v74 = *(uint32_t **)(a1 + 384);
                if ( v74 == v17 )
                {
                  v43 = VoxAllocInternal(
                          0x18u,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
                  v22 = v43;
                  if ( v43 != -16 )
                  {
                    *(uint32_t *)(v43 + 16) = v15;
                    *(uint32_t *)(v43 + 20) = 0;
                  }
                  v49 = a1 + 376;
                  v23 = v74;
                  goto LABEL_30;
                }
                v59 = (int)(uintptr_t)(v13);
                v19 = sub_1904940(v17);
                v72 = v19;
                v20 = (uint32_t *)v59;
                if ( *(uint32_t *)(v19 + 16) < v15 )
                {
                  if ( *(uint32_t *)(v19 + 12) != 0 )
                  {
                    v21 = VoxAllocInternal(
                            0x18u,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
                    v22 = v21;
                    if ( v21 != -16 )
                    {
                      *(uint32_t *)(v21 + 16) = v15;
                      *(uint32_t *)(v21 + 20) = 0;
                    }
                    v49 = a1 + 376;
                    v23 = v66;
LABEL_30:
                    v53 = v22;
                    sub_1904970(1, v22, v23, v49);
                    ++*(uint32_t *)(a1 + 392);
                    v17 = (uint32_t *)v53;
                    goto LABEL_31;
                  }
                  v41 = VoxAllocInternal(
                          0x18u,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
                  v37 = v41;
                  if ( v41 != -16 )
                  {
                    *(uint32_t *)(v41 + 16) = v15;
                    *(uint32_t *)(v41 + 20) = 0;
                  }
                  v48 = v72;
                  v51 = a1 + 376;
                  v47 = v41;
                  v38 = v71 == (uint32_t *)v72;
LABEL_67:
                  v56 = v37;
                  sub_1904970(v38, v47, v48, v51);
                  ++*(uint32_t *)(a1 + 392);
                  v17 = (uint32_t *)v56;
                  goto LABEL_31;
                }
                while ( 1 )
                {
                  if ( v20[4] > v15 )
                  {
                    v31 = (uint32_t *)v20[2];
                    v68 = 1;
                  }
                  else
                  {
                    v31 = (uint32_t *)v20[3];
                    v68 = 0;
                  }
                  if ( v31 == nullptr )
                    break;
                  v20 = v31;
                }
                v35 = v20[4];
                v17 = v20;
                if ( v68 != 0 )
                {
                  if ( v74 == v20 )
                  {
LABEL_62:
                    v70 = true;
                    if ( v71 != v20 )
                      v70 = v20[4] > v15;
                    v61 = (int)(uintptr_t)(v20);
                    v36 = VoxAllocInternal(
                            0x18u,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
                    v37 = v36;
                    if ( v36 != -16 )
                    {
                      *(uint32_t *)(v36 + 16) = v15;
                      *(uint32_t *)(v36 + 20) = 0;
                    }
                    v48 = v61;
                    v51 = a1 + 376;
                    v47 = v36;
                    v38 = v70;
                    goto LABEL_67;
                  }
                  v63 = (int)(uintptr_t)(v20);
                  v17 = (uint32_t *)sub_19048F0(v20);
                  v20 = (uint32_t *)v63;
                  v35 = v17[4];
                }
                if ( v35 >= v15 )
                  goto LABEL_31;
                goto LABEL_62;
              }
            }
          }
          else
          {
            v15 = a2[1];
          }
          if ( *(uint32_t *)(a1 + 392) != 0 )
          {
            v26 = *(uint32_t **)(a1 + 388);
            v67 = v26;
            if ( v26[4] < v15 )
            {
              v60 = v71 == v26;
              v27 = VoxAllocInternal(
                      0x18u,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
              v28 = v27;
              v29 = v60;
              if ( v27 != -16 )
              {
                *(uint32_t *)(v27 + 16) = v15;
                *(uint32_t *)(v27 + 20) = 0;
              }
              v50 = a1 + 376;
              v30 = v67;
LABEL_45:
              v55 = v28;
              sub_1904970(v29, v28, v30, v50);
              ++*(uint32_t *)(a1 + 392);
              v17 = (uint32_t *)v55;
              goto LABEL_31;
            }
          }
          v17 = v13;
          if ( v13 != nullptr )
          {
            while ( 1 )
            {
              v34 = v17[4];
              if ( v34 > v15 )
              {
                v33 = (uint32_t *)v17[2];
                v69 = 1;
              }
              else
              {
                v33 = (uint32_t *)v17[3];
                v69 = 0;
              }
              if ( v33 == nullptr )
                break;
              v17 = v33;
            }
            v73 = v17;
            if ( v69 == 0 )
            {
LABEL_69:
              if ( v34 >= v15 )
                goto LABEL_31;
              v39 = true;
              if ( v71 != v73 )
                v39 = v73[4] > v15;
              v62 = v39;
              v40 = VoxAllocInternal(
                      0x18u,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
              v28 = v40;
              v29 = v62;
              if ( v40 != -16 )
              {
                *(uint32_t *)(v40 + 16) = v15;
                *(uint32_t *)(v40 + 20) = 0;
              }
              v50 = a1 + 376;
              v30 = v73;
              goto LABEL_45;
            }
          }
          else
          {
            v17 = (uint32_t *)(a1 + 376);
          }
          if ( *(uint32_t **)(a1 + 384) == v17 )
          {
            v44 = true;
            if ( v71 != v17 )
              v44 = v17[4] > v15;
            v58 = (int)(uintptr_t)(v17);
            v64 = v44;
            v45 = VoxAllocInternal(
                    0x18u,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            v46 = v64;
            if ( v45 != -16 )
            {
              *(uint32_t *)(v45 + 16) = v15;
              *(uint32_t *)(v45 + 20) = 0;
            }
            v65 = v45;
            sub_1904970(v46, v45, v58, v71);
            ++*(uint32_t *)(a1 + 392);
            v17 = (uint32_t *)v65;
            goto LABEL_31;
          }
          v57 = (int)(uintptr_t)(v17);
          v42 = (uint32_t *)sub_19048F0(v17);
          v34 = v42[4];
          v73 = (uint32_t *)v57;
          v17 = v42;
          goto LABEL_69;
        }
        (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 368) + 20))(*(uint32_t *)(a1 + 368), v10);
        v25 = *v8;
        v11 = v52;
      }
      else
      {
        v25 = *v8;
      }
      (*(void (**)(int *, int))(v25 + 24))(v8, v11);
    }
    G4_VCALL<void>(v8, 0);
    VoxFreeInternal(v8);
  }
  vox::MpcSegmentDecoder::Destroy(v6);
  VoxFreeInternal(v6);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::GetState  (binary VA: 0xffafb0)
// Original: vox::VoxNativeSubDecoderMPC::GetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::GetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::GetState(self, a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::SetState  (binary VA: 0xffb020)
// Original: vox::VoxNativeSubDecoderMPC::SetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::SetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::VoxNativeSubDecoder::SetState(self, a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::GetDecoderCursor  (binary VA: 0xffb090)
// Original: vox::VoxNativeSubDecoderMPC::GetDecoderCursor
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::GetDecoderCursor(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;

  if ( *(uint8_t *)(a2 + 65) != 0 )
  {
    if ( (uint8_t)vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder(a1, (uint32_t *)a2) == 0 )
    {
      *(uint8_t *)(a1 + 364) = 0;
      return 0;
    }
    *(uint8_t *)(a2 + 65) = 0;
  }
  v2 = *(uint32_t **)(a1 + 380);
  v3 = 0;
  if ( v2 != nullptr )
  {
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (uint32_t *)(a1 + 376);
    do
    {
      while ( v2[4] >= v4 )
      {
        v5 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_7;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_7:
    v3 = 0;
    if ( (uint32_t *)(a1 + 376) != v5 && v5[4] <= v4 )
    {
      v3 = *(uint32_t *)(v5[5] + 12);
      if ( v3 != 0 )
        G4_VCALL<void>(v3, 44, *(uint32_t *)(a2 + 12));
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::Seek  (binary VA: 0xffb140)
// Original: vox::VoxNativeSubDecoderMPC::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::Seek(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int DecoderCursor;
  vox::VoxThread::Self *v7;
  int v8;

  v3 = a2;
  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( a2 < 0 )
    v3 = a3[4];
  v4 = -1;
  if ( v3 <= *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + 24 * *a3 + 8) )
  {
    DecoderCursor = vox::VoxNativeSubDecoderMPC::GetDecoderCursor(a1, (int)(uintptr_t)(a3));
    v4 = -1;
    if ( DecoderCursor != 0 )
    {
      v4 = G4_VCALL<int>(DecoderCursor, 44, v3);
      if ( v4 == 0 )
        a3[3] = v3;
    }
  }
  v8 = v4;
  sub_BA06B0();
  return v8;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::DecodeSegment  (binary VA: 0xffb210)
// Original: vox::VoxNativeSubDecoderMPC::DecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::DecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int v5;
  int DecoderCursor;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v14;
  bool v15;
  vox::VoxNativeSubDecoder::Self *v16;
  int v17;
  int v18;

  v4 = 0;
  vox::VoxThread::GetCurThreadId(v16);
  sub_BA06A0();
  if ( a3 <= 0 )
  {
LABEL_20:
    if ( a4[1] == 3 )
      goto LABEL_28;
    goto LABEL_21;
  }
  v17 = 0;
  while ( 1 )
  {
    DecoderCursor = vox::VoxNativeSubDecoderMPC::GetDecoderCursor((int)(uintptr_t)(a1), (int)(uintptr_t)(a4));
    if ( DecoderCursor == 0 )
    {
      *((uint8_t *)a1 + 365) = 1;
      v4 = 0;
      goto LABEL_21;
    }
    v7 = (a4[5] + 1 - a4[3]) * (*((int16_t *)a1 + 9) >> 3) * *((int16_t *)a1 + 5);
    if ( a3 - v17 <= v7 )
      v7 = a3 - v17;
    v18 = v7;
    v8 = G4_VCALL<int>(DecoderCursor, 16, v17 + a2, v7);
    v17 += v8;
    v9 = a4[3] + v8 / ((*((int16_t *)a1 + 9) >> 3) * *((int16_t *)a1 + 5));
    a4[3] = v9;
    if ( v8 != v18 )
      break;
    if ( v9 <= a4[5] )
      goto LABEL_4;
    v10 = a4[7];
    if ( a4[6] >> 1 != 0 && a4[6] == v10 )
      a4[4] = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a4) + 4);
    v11 = v10 - 1;
    a4[7] = v11;
    if ( v11 == 0 )
    {
      if ( a4[8] == 1 )
      {
        v14 = (uint32_t *)(**((uint32_t **)a1 + 11) + 12 * *a4);
        v15 = a4[1] == 1;
        a4[5] = *(uint32_t *)(*v14 + 4 * ((v14[1] - *v14) >> 2) - 4);
        if ( v15 )
LABEL_25:
          vox::VoxNativeSubDecoder::UpdateSegmentsStates(a1);
      }
      else if ( a4[1] == 1 )
      {
        goto LABEL_25;
      }
    }
    v12 = a4[9];
    if ( v12 == 3 )
    {
      if ( a4[7] == 0 )
        goto LABEL_4;
      G4_VCALL<void>(a1, 36, -1, a4);
      v5 = v17;
      if ( a3 <= v17 )
      {
LABEL_19:
        v4 = v5;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v12 == 4 && a4[3] > a4[5] )
      {
        v4 = v17;
        a4[9] = 1;
        goto LABEL_20;
      }
LABEL_4:
      v5 = v17;
      if ( a3 <= v17 )
        goto LABEL_19;
    }
  }
  *((uint8_t *)a1 + 365) = 1;
  v4 = v17;
  if ( a4[1] == 3 )
LABEL_28:
    a4[9] = 1;
LABEL_21:
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::DecodeCurrentSegmentWithOffset  (binary VA: 0xffb460)
// Original: vox::VoxNativeSubDecoderMPC::DecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
signed int vox::VoxNativeSubDecoderMPC::DecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderMPC::Self *self, char *a2, int a3)
{
  signed int n;
  int v4;
  signed int v5;
  int i;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  vox::VoxThread::Self *s;
  int v16;
  char *v17;

  n = 0;
  vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0();
  v4 = *((uint32_t *)self + 90);
  if ( v4 > 0 )
  {
    n = (*((int16_t *)self + 9) >> 3) * v4 * *((int16_t *)self + 5);
    memset(a2, 0, n);
    *((uint32_t *)self + 90) = 0;
  }
  if ( a3 > n )
  {
    v5 = n;
    v17 = (char *)self + 288;
    for ( i = vox::VoxNativeSubDecoderMPC::GetDecoderCursor((int)(uintptr_t)(self), (int)(uintptr_t)(self) + 288);
          ;
          i = vox::VoxNativeSubDecoderMPC::GetDecoderCursor((int)(uintptr_t)(self), (int)(uintptr_t)(v17)) )
    {
      if ( i == 0 )
      {
        *((uint8_t *)self + 365) = 1;
        n = 0;
        goto LABEL_27;
      }
      v7 = (*((uint32_t *)self + 77) + 1 - *((uint32_t *)self + 75))
         * (*((int16_t *)self + 9) >> 3)
         * *((int16_t *)self + 5);
      if ( a3 - v5 <= v7 )
        v7 = a3 - v5;
      v16 = v7;
      v8 = G4_VCALL<int>(i, 16, &a2[v5], v7);
      v5 += v8;
      v9 = *((uint32_t *)self + 75) + v8 / ((*((int16_t *)self + 9) >> 3) * *((int16_t *)self + 5));
      *((uint32_t *)self + 75) = v9;
      if ( v8 != v16 )
      {
        n = v5;
        *((uint8_t *)self + 365) = 1;
        goto LABEL_27;
      }
      if ( v9 <= *((uint32_t *)self + 77) )
        goto LABEL_6;
      v10 = *((uint32_t *)self + 79);
      if ( *((uint32_t *)self + 78) >> 1 != 0 && *((uint32_t *)self + 78) == v10 )
        *((uint32_t *)self + 76) = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72)) + 4);
      v11 = v10 - 1;
      *((uint32_t *)self + 79) = v11;
      if ( v11 == 0 )
      {
        if ( *((uint32_t *)self + 80) == 1 )
        {
          v13 = (uint32_t *)(**((uint32_t **)self + 11) + 12 * *((uint32_t *)self + 72));
          *((uint32_t *)self + 77) = *(uint32_t *)(*v13 + 4 * ((v13[1] - *v13) >> 2) - 4);
        }
        vox::VoxNativeSubDecoder::UpdateSegmentsStates(self);
      }
      v12 = *((uint32_t *)self + 81);
      if ( v12 != 3 )
        break;
      if ( *((uint32_t *)self + 79) == 0 )
        goto LABEL_6;
      G4_VCALL<void>(self, 36, -1, v17);
      if ( a3 <= v5 )
      {
LABEL_23:
        n = v5;
        goto LABEL_27;
      }
LABEL_7:
      ;
    }
    if ( v12 == 4 && *((uint32_t *)self + 75) > *((uint32_t *)self + 77) )
    {
      n = v5;
      *((uint32_t *)self + 81) = 1;
      goto LABEL_27;
    }
LABEL_6:
    if ( a3 <= v5 )
      goto LABEL_23;
    goto LABEL_7;
  }
LABEL_27:
  sub_BA06B0();
  return n;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::Destroy  (binary VA: 0xffb6e0)
// Original: vox::VoxNativeSubDecoderMPC::~VoxNativeSubDecoderMPC
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::Destroy(vox::VoxNativeSubDecoderMPC::Self *self)
{
  vox::VoxNativeSubDecoderMPC::Self *v1;
  vox::MpcSegmentDecoder::Self **v2;
  uint32_t *j;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  void (***v21)(uint32_t, void *);
  uint32_t *k;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  vox::VoxThread::Self *v40;
  void *CurThreadId;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  vox::MpcSegmentDecoder::Self **i;
  vox::VoxNativeSubDecoderMPC::Self *v59;
  char *v60;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D2C8);
  CurThreadId = (void *)vox::VoxThread::GetCurThreadId(v40);
  sub_BA06A0();
  v2 = *((vox::MpcSegmentDecoder::Self ***)self + 96);
  for ( i = (vox::MpcSegmentDecoder::Self **)((char *)self + 376); i != v2; v2 = (vox::MpcSegmentDecoder::Self **)sub_1904890(v2) )
  {
    if ( v2[5] != nullptr )
    {
      vox::MpcSegmentDecoder::Destroy(v2[5]);
      VoxFreeInternal(v2[5]);
    }
  }
  v60 = (char *)self + 372;
  v46 = *((uint32_t **)self + 95);
  if ( v46 != nullptr )
  {
    for ( j = *((uint32_t **)self + 95); ; j = v20 )
    {
      v4 = (uint32_t *)j[3];
      v48 = v4;
      if ( v4 != nullptr )
      {
        while ( 1 )
        {
          v5 = (uint32_t *)v4[3];
          v50 = v5;
          if ( v5 != nullptr )
          {
            while ( 1 )
            {
              v6 = (uint32_t *)v5[3];
              v52 = v6;
              if ( v6 != nullptr )
              {
                while ( 1 )
                {
                  v7 = (uint32_t *)v6[3];
                  v56 = v7;
                  if ( v7 != nullptr )
                  {
                    while ( 1 )
                    {
                      v8 = (uint32_t *)v7[3];
                      v54 = v8;
                      if ( v8 != nullptr )
                      {
                        while ( 1 )
                        {
                          v9 = (uint32_t *)v8[3];
                          v44 = v9;
                          if ( v9 != nullptr )
                          {
                            while ( 1 )
                            {
                              v10 = (uint32_t *)v9[3];
                              v42 = v10;
                              if ( v10 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v11 = v10[3];
                                  if ( v11 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_vox_M_73eb4c::M_erase(
                                        (int)(uintptr_t)(v60),
                                        *(void **)(v11 + 12));
                                      v12 = *(uint32_t *)(v11 + 8);
                                      VoxFreeInternal((void *)v11);
                                      if ( v12 == 0 )
                                        break;
                                      v11 = v12;
                                    }
                                  }
                                  v13 = (uint32_t *)v42[2];
                                  VoxFreeInternal(v42);
                                  if ( v13 == nullptr )
                                    break;
                                  v42 = v13;
                                  v10 = v13;
                                }
                              }
                              v14 = (uint32_t *)v44[2];
                              VoxFreeInternal(v44);
                              if ( v14 == nullptr )
                                break;
                              v44 = v14;
                              v9 = v14;
                            }
                          }
                          v15 = (uint32_t *)v54[2];
                          VoxFreeInternal(v54);
                          if ( v15 == nullptr )
                            break;
                          v54 = v15;
                          v8 = v15;
                        }
                      }
                      v16 = (uint32_t *)v56[2];
                      VoxFreeInternal(v56);
                      if ( v16 == nullptr )
                        break;
                      v56 = v16;
                      v7 = v16;
                    }
                  }
                  v17 = (uint32_t *)v52[2];
                  VoxFreeInternal(v52);
                  if ( v17 == nullptr )
                    break;
                  v52 = v17;
                  v6 = v17;
                }
              }
              v18 = (uint32_t *)v50[2];
              VoxFreeInternal(v50);
              if ( v18 == nullptr )
                break;
              v50 = v18;
              v5 = v18;
            }
          }
          v19 = (uint32_t *)v48[2];
          VoxFreeInternal(v48);
          if ( v19 == nullptr )
            break;
          v48 = v19;
          v4 = v19;
        }
      }
      v20 = (uint32_t *)v46[2];
      VoxFreeInternal(v46);
      if ( v20 == nullptr )
        break;
      v46 = v20;
    }
    v1 = self;
  }
  *((uint32_t *)v1 + 95) = 0;
  *((uint32_t *)v1 + 96) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)v1 + 97) = (uint32_t)(uintptr_t)(i);
  v21 = *((void (****)(uint32_t, void *))v1 + 92);
  *((uint32_t *)v1 + 98) = 0;
  if ( v21 != nullptr )
  {
    (**v21)((uint32_t)(uintptr_t)(v21), CurThreadId);
    VoxFreeInternal(*((void **)v1 + 92));
  }
  *((uint32_t *)v1 + 92) = 0;
  sub_BA06B0();
  v47 = *((uint32_t **)v1 + 95);
  if ( v47 != nullptr )
  {
    v59 = v1;
    for ( k = *((uint32_t **)v1 + 95); ; k = v39 )
    {
      v23 = (uint32_t *)k[3];
      v51 = v23;
      if ( v23 != nullptr )
      {
        while ( 1 )
        {
          v24 = (uint32_t *)v23[3];
          v53 = v24;
          if ( v24 != nullptr )
          {
            while ( 1 )
            {
              v25 = (uint32_t *)v24[3];
              v55 = v25;
              if ( v25 != nullptr )
              {
                while ( 1 )
                {
                  v26 = (uint32_t *)v25[3];
                  v57 = v26;
                  if ( v26 != nullptr )
                  {
                    while ( 1 )
                    {
                      v27 = (uint32_t *)v26[3];
                      v49 = v27;
                      if ( v27 != nullptr )
                      {
                        while ( 1 )
                        {
                          v28 = (uint32_t *)v27[3];
                          v45 = v28;
                          if ( v28 != nullptr )
                          {
                            while ( 1 )
                            {
                              v29 = (uint32_t *)v28[3];
                              v43 = v29;
                              if ( v29 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v30 = v29[3];
                                  if ( v30 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_vox_M_73eb4c::M_erase(
                                        (int)(uintptr_t)(v60),
                                        *(void **)(v30 + 12));
                                      v31 = *(uint32_t *)(v30 + 8);
                                      VoxFreeInternal((void *)v30);
                                      if ( v31 == 0 )
                                        break;
                                      v30 = v31;
                                    }
                                  }
                                  v32 = (uint32_t *)v43[2];
                                  VoxFreeInternal(v43);
                                  if ( v32 == nullptr )
                                    break;
                                  v43 = v32;
                                  v29 = v32;
                                }
                              }
                              v33 = (uint32_t *)v45[2];
                              VoxFreeInternal(v45);
                              if ( v33 == nullptr )
                                break;
                              v45 = v33;
                              v28 = v33;
                            }
                          }
                          v34 = (uint32_t *)v49[2];
                          VoxFreeInternal(v49);
                          if ( v34 == nullptr )
                            break;
                          v49 = v34;
                          v27 = v34;
                        }
                      }
                      v35 = (uint32_t *)v57[2];
                      VoxFreeInternal(v57);
                      if ( v35 == nullptr )
                        break;
                      v57 = v35;
                      v26 = v35;
                    }
                  }
                  v36 = (uint32_t *)v55[2];
                  VoxFreeInternal(v55);
                  if ( v36 == nullptr )
                    break;
                  v55 = v36;
                  v25 = v36;
                }
              }
              v37 = (uint32_t *)v53[2];
              VoxFreeInternal(v53);
              if ( v37 == nullptr )
                break;
              v53 = v37;
              v24 = v37;
            }
          }
          v38 = (uint32_t *)v51[2];
          VoxFreeInternal(v51);
          if ( v38 == nullptr )
            break;
          v51 = v38;
          v23 = v38;
        }
      }
      v39 = (uint32_t *)v47[2];
      VoxFreeInternal(v47);
      if ( v39 == nullptr )
        break;
      v47 = v39;
    }
    v1 = v59;
  }
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208D1C8);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::Destroy_eaffbb20  (binary VA: 0xffbb20)
// Original: vox::VoxNativeSubDecoderMPC::~VoxNativeSubDecoderMPC
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::Destroy_eaffbb20(vox::VoxNativeSubDecoderMPC::Self *self)
{
  vox::VoxNativeSubDecoderMPC::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::Seek  (binary VA: 0xffbb60)
// Original: vox::VoxNativeSubDecoderMPC::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::Seek()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::GetDecodingBuffer  (binary VA: 0xffbb70)
// Original: vox::VoxNativeSubDecoderMPC::GetDecodingBuffer
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderMPC::GetDecodingBuffer()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::ReleaseDecodingBuffer  (binary VA: 0xffbb80)
// Original: vox::VoxNativeSubDecoderMPC::ReleaseDecodingBuffer
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::ReleaseDecodingBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderMPC::SetDecodingBufferToSegmentPosition  (binary VA: 0xffbb90)
// Original: vox::VoxNativeSubDecoderMPC::SetDecodingBufferToSegmentPosition
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderMPC::SetDecodingBufferToSegmentPosition()
{
  ;
}


