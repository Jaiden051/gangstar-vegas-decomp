#include "Core/Utils/DecompTypes.h"
#include "vox_VoxNativeSubDecoderIMAADPCM.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::ReleaseDecodingBuffer  (binary VA: 0xff8150)
// Original: vox::VoxNativeSubDecoderIMAADPCM::ReleaseDecodingBuffer
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::ReleaseDecodingBuffer(vox::VoxNativeSubDecoderIMAADPCM::Self *self, int a2)
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::SetCurrentSegmentInitialPosition  (binary VA: 0xff8180)
// Original: vox::VoxNativeSubDecoderIMAADPCM::SetCurrentSegmentInitialPosition
// ----------------------------------------------------------------------------
unsigned int vox::VoxNativeSubDecoderIMAADPCM::SetCurrentSegmentInitialPosition(vox::VoxNativeSubDecoderIMAADPCM::Self *self, unsigned int a2)
{
  unsigned int result;

  result = *((int16_t *)self + 8) * (a2 / *((uint32_t *)self + 92));
  *((uint32_t *)self + 74) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::GetDecodingBuffer  (binary VA: 0xff8210)
// Original: vox::VoxNativeSubDecoderIMAADPCM::GetDecodingBuffer
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::GetDecodingBuffer(vox::VoxNativeSubDecoderIMAADPCM::Self *self)
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::Reset  (binary VA: 0xff8270)
// Original: vox::VoxNativeSubDecoderIMAADPCM::Reset
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderIMAADPCM::Reset(vox::VoxNativeSubDecoderIMAADPCM::Self *self)
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::Destroy  (binary VA: 0xff8330)
// Original: vox::VoxNativeSubDecoderIMAADPCM::~VoxNativeSubDecoderIMAADPCM
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderIMAADPCM::Destroy(vox::VoxNativeSubDecoderIMAADPCM::Self *self)
{
  void **v1;
  AdpcmState::Self *v2;
  vox::VoxThread::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D248);
  vox::VoxThread::GetCurThreadId(v3);
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
  v2 = (AdpcmState::Self *)((vox::VoxNativeSubDecoderIMAADPCM::Self *)((char *)self + 448));
  sub_BA06B0();
  do
  {
    v2 = (AdpcmState::Self *)((char *)v2 - 4);
    AdpcmState::Destroy(v2);
  }
  while ( (vox::VoxNativeSubDecoderIMAADPCM::Self *)((char *)self + 416) != (vox::VoxNativeSubDecoderIMAADPCM::Self *)(v2) );
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D1C8);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::Destroy_eaff8450  (binary VA: 0xff8450)
// Original: vox::VoxNativeSubDecoderIMAADPCM::~VoxNativeSubDecoderIMAADPCM
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderIMAADPCM::Destroy_eaff8450(vox::VoxNativeSubDecoderIMAADPCM::Self *self)
{
  vox::VoxNativeSubDecoderIMAADPCM::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::Construct  (binary VA: 0xff84e0)
// Original: vox::VoxNativeSubDecoderIMAADPCM::VoxNativeSubDecoderIMAADPCM
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::Construct(int a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int16_t v14;
  vox::VoxThread::Self *v16;
  int v17;
  int v18;
  size_t v19;
  int CurThreadId;

  vox::VoxNativeSubDecoder::Construct(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *(uint32_t *)(a1 + 372) = 0;
  *(uint32_t *)(a1 + 412) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208D248);
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 416));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 420));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 424));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 428));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 432));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 436));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 440));
  AdpcmState::Construct((AdpcmState::Self *)(a1 + 444));
  CurThreadId = vox::VoxThread::GetCurThreadId(v16);
  sub_BA06A0("VoxNativeSubDecoderIMAADPCM::VoxNativeSubDecoderIMAADPCM", CurThreadId);
  *(uint32_t *)(a1 + 8) = a3[8];
  *(uint32_t *)(a1 + 12) = a3[9];
  v10 = a3[10];
  *(uint32_t *)(a1 + 16) = v10;
  v19 = (int16_t)v10;
  *(uint32_t *)(a1 + 372) = VoxAllocInternal(
                            0xCu,
                            0,
                            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_imaadpcm.cpp"),
                            (int)(uintptr_t)("VoxNativeSubDecoderIMAADPCM"),
                            53);
  v11 = VoxAllocInternal(
          v19,
          0,
          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_imaadpcm.cpp"),
          (int)(uintptr_t)("VoxNativeSubDecoderIMAADPCM"),
          54);
  v12 = *(uint32_t **)(a1 + 372);
  *(uint32_t *)(a1 + 412) = v11;
  if ( v12 == nullptr )
    goto LABEL_7;
  if ( v11 == 0 )
    goto LABEL_7;
  *v12 = VoxAllocInternal(
           4 * v19,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_imaadpcm.cpp"),
           (int)(uintptr_t)("VoxNativeSubDecoderIMAADPCM"),
           62);
  v17 = *(uint32_t *)(a1 + 372);
  *(uint32_t *)(v17 + 4) = VoxAllocInternal(
                           4 * v19,
                           0,
                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_imaadpcm.cpp"),
                           (int)(uintptr_t)("VoxNativeSubDecoderIMAADPCM"),
                           63);
  v18 = *(uint32_t *)(a1 + 372);
  *(uint32_t *)(v18 + 8) = VoxAllocInternal(
                           4 * v19,
                           0,
                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_native_subdecoder_imaadpcm.cpp"),
                           (int)(uintptr_t)("VoxNativeSubDecoderIMAADPCM"),
                           64);
  v13 = *(uint32_t **)(a1 + 372);
  if ( *v13 == 0 )
    goto LABEL_7;
  if ( v13[1] == 0 )
    goto LABEL_7;
  if ( v13[2] == 0 )
    goto LABEL_7;
  v14 = *(uint16_t *)(a1 + 10);
  *(uint32_t *)(a1 + 376) = 0;
  *(uint32_t *)(a1 + 380) = 0;
  *(uint32_t *)(a1 + 384) = 0;
  *(uint32_t *)(a1 + 388) = 0;
  *(uint32_t *)(a1 + 392) = 0;
  *(uint32_t *)(a1 + 396) = 0;
  *(uint32_t *)(a1 + 400) = 0;
  *(uint32_t *)(a1 + 404) = 0;
  *(uint32_t *)(a1 + 408) = 0;
  if ( v14 == 0 || (*(uint32_t *)(a1 + 368) = (int)(2 * (v19 - 4 * v14)) / v14 + 1, v14 > 8) )
  {
LABEL_7:
    *(uint16_t *)(a1 + 8) = 0;
    *(uint16_t *)(a1 + 10) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint16_t *)(a1 + 18) = 0;
  }
  { sub_BA06B0("VoxNativeSubDecoderIMAADPCM::VoxNativeSubDecoderIMAADPCM", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::DecodeBlock  (binary VA: 0xff8820)
// Original: vox::VoxNativeSubDecoderIMAADPCM::DecodeBlock
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::DecodeBlock(int a1, int a2, uint32_t *a3, unsigned int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, uint16_t *a15, int a16, int a17, int a18, int a19, int a20, int16_t a21, uint16_t *a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  uint16_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  char v48;
  char v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  char v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  char v74;
  int v75;
  char v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  char v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  char v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  char v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int16_t v107;
  int v108;
  int16_t v109; // di
  char v110; // si
  char v111;
  int v112;
  unsigned int v113;
  int v114;
  vox::VoxThread::Self *v116;
  int CurThreadId;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  uint8_t v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  uint8_t *v158;
  int v159;
  int v160;
  uint16_t *v161;
  int i;
  uint8_t *v163;
  int v164;
  int v165;
  int v166;
  int v167;
  uint16_t *v168;
  uint16_t *v169;
  uint16_t *v170;
  uint16_t *v171;
  uint16_t *v172;
  char v173;
  int v174;
  char v175;
  char v176;
  char v177;
  char v178;
  char v179;
  char v180;
  char v181;
  char v182;
  char v183;

  CurThreadId = vox::VoxThread::GetCurThreadId(v116);
  sub_BA06A0();
  LOWORD(v137) = *(uint16_t *)(a1 + 10);
  v28 = (uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + 24 * *a3);
  v29 = *(uint32_t *)(a1 + 20) + *v28 + a3[2];
  if ( v29 != (*(int (**)(uint32_t, int, int, int, int, int, int, const char *, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(a1 + 4) + 24))(
                *(uint32_t *)(a1 + 4),
                CurThreadId,
                v118,
                v119,
                v120,
                v121,
                v122,
                "VoxNativeSubDecoderIMAADPCM::DecodeBlock",
                v28[2],
                CurThreadId,
                v123,
                v124,
                v125,
                v126,
                v127,
                v128,
                v129,
                v130,
                v131,
                v132,
                v133,
                v134,
                v135,
                v28[1],
                v136,
                v137,
                v138,
                v139,
                v140,
                v141,
                v142,
                v143,
                v144,
                v145,
                v146,
                v147,
                v148,
                v149,
                v150,
                v151) )
    (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 4) + 16))(*(uint32_t *)(a1 + 4), v29, 0);
  v30 = *(uint32_t **)(a1 + 412);
  v31 = a19 - a3[2];
  if ( *(int16_t *)(a1 + 16) <= v31 )
    v31 = *(int16_t *)(a1 + 16);
  v32 = (*(int (**)(uint32_t, uint32_t *, unsigned int))(**(uint32_t **)(a1 + 4) + 28))(*(uint32_t *)(a1 + 4), v30, v31);
  v154 = v32;
  v156 = 0;
  if ( v32 > 0 )
  {
    a3[2] += v32;
    *(uint32_t *)(a1 + 416) = *v30;
    v160 = a21;
    if ( a21 <= 1 )
    {
      a28 = a2;
      if ( a21 <= 0 )
      {
LABEL_13:
        v38 = v160;
        v157 = 1;
        v155 = v154 - 4 * v160;
        v39 = 1;
        if ( v155 > 0 )
        {
          v158 = (uint8_t *)&v30[v38];
          v164 = v160;
          v159 = 0;
          v153 = v38 * 4 - 4;
          do
          {
            if ( v160 > 0 )
            {
              v163 = v158;
              for ( i = 0; i < v160; ++i )
              {
                v161 = (uint16_t *)*(&a28 + i);
                v166 = (v163[2] << 16) + (v163[1] << 8) + *v163 + (v163[3] << 24);
                v40 = *(int16_t *)(a1 + 4 * i + 416);
                v152 = *(uint8_t *)(a1 + 4 * i + 418);
                v41 = AdpcmDecoder::cAdpcmStepSizeTable[v152];
                v42 = v41 + (v41 >> 3);
                if ( (*v163 & 4) == 0 )
                  v42 = v41 >> 3;
                v43 = v42 + (v41 >> 1);
                if ( (*v163 & 2) == 0 )
                  v43 = v42;
                v44 = v43 + (v41 >> 2);
                if ( (*v163 & 1) == 0 )
                  v44 = v43;
                v45 = v40 - v44;
                if ( v40 - v44 < -32768 )
                  v45 = -32768;
                v46 = v40 + v44;
                if ( v46 > 0x7FFF )
                  v46 = 0x7FFF;
                if ( (*v163 & 8) == 0 )
                  v45 = v46;
                LOBYTE(v47) = 88;
                v48 = AdpcmDecoder::cAdpcmIndexTable[*v163 & 0xF] + v152;
                v49 = 0;
                if ( (uint8_t)v48 <= 0x58u )
                  LOBYTE(v47) = AdpcmDecoder::cAdpcmIndexTable[*v163 & 0xF] + v152;
                if ( v48 >= 0 )
                  v49 = v47;
                v47 = (uint8_t)v47;
                v179 = v49;
                v50 = v166 >> 4;
                *v161 = v45;
                v168 = &v161[v164];
                if ( v48 < 0 )
                  v47 = 0;
                v51 = AdpcmDecoder::cAdpcmStepSizeTable[v47];
                v52 = v51 + (v51 >> 3);
                if ( (v50 & 4) == 0 )
                  v52 = v51 >> 3;
                v53 = v52 + (v51 >> 1);
                if ( (v50 & 2) == 0 )
                  v53 = v52;
                v54 = v53 + (v51 >> 2);
                if ( (v50 & 1) == 0 )
                  v54 = v53;
                v55 = v45 - v54;
                if ( v45 - v54 < -32768 )
                  v55 = -32768;
                v56 = v54 + v45;
                if ( v56 > 0x7FFF )
                  v56 = 0x7FFF;
                if ( (v50 & 8) == 0 )
                  v55 = v56;
                LOBYTE(v57) = 88;
                v180 = AdpcmDecoder::cAdpcmIndexTable[(v166 >> 4) & 0xF] + v179;
                if ( (uint8_t)v180 <= 0x58u )
                  LOBYTE(v57) = v180;
                v58 = 0;
                if ( v180 >= 0 )
                  v58 = v57;
                *v168 = v55;
                v57 = (uint8_t)v57;
                v169 = &v168[v164];
                if ( v180 < 0 )
                  v57 = 0;
                v59 = AdpcmDecoder::cAdpcmStepSizeTable[v57];
                v60 = v59 + (v59 >> 3);
                if ( (v166 & 0x400) == 0 )
                  v60 = v59 >> 3;
                v61 = v60 + (v59 >> 1);
                if ( (v166 & 0x200) == 0 )
                  v61 = v60;
                v62 = v61 + (v59 >> 2);
                if ( (v166 & 0x100) == 0 )
                  v62 = v61;
                v63 = v55 - v62;
                if ( v55 - v62 < -32768 )
                  v63 = -32768;
                v64 = v62 + v55;
                if ( v64 > 0x7FFF )
                  v64 = 0x7FFF;
                LOBYTE(v65) = 88;
                if ( ((v166 >> 8) & 8) == 0 )
                  v63 = v64;
                v173 = AdpcmDecoder::cAdpcmIndexTable[BYTE1(v166) & 0xF] + v58;
                if ( (uint8_t)v173 <= 0x58u )
                  LOBYTE(v65) = AdpcmDecoder::cAdpcmIndexTable[BYTE1(v166) & 0xF] + v58;
                v66 = 0;
                if ( v173 >= 0 )
                  v66 = v65;
                v65 = (uint8_t)v65;
                v67 = v166 >> 12;
                *v169 = v63;
                v170 = &v169[v164];
                if ( v173 < 0 )
                  v65 = 0;
                v68 = AdpcmDecoder::cAdpcmStepSizeTable[v65];
                v69 = v68 + (v68 >> 3);
                if ( (v67 & 4) == 0 )
                  v69 = v68 >> 3;
                v174 = v69;
                v70 = v69 + (v68 >> 1);
                if ( (v67 & 2) == 0 )
                  v70 = v174;
                v71 = v70 + (v68 >> 2);
                if ( (v67 & 1) == 0 )
                  v71 = v70;
                v72 = v63 - v71;
                if ( v63 - v71 < -32768 )
                  v72 = -32768;
                v73 = v71 + v63;
                if ( v73 > 0x7FFF )
                  v73 = 0x7FFF;
                if ( (v67 & 8) == 0 )
                  v72 = v73;
                v74 = AdpcmDecoder::cAdpcmIndexTable[(v166 >> 12) & 0xF] + v66;
                LOBYTE(v75) = 88;
                v76 = 0;
                if ( (uint8_t)v74 <= 0x58u )
                  LOBYTE(v75) = v74;
                if ( v74 >= 0 )
                  v76 = v75;
                v75 = (uint8_t)v75;
                *v170 = v72;
                v171 = &v170[v164];
                if ( v74 < 0 )
                  v75 = 0;
                v77 = AdpcmDecoder::cAdpcmStepSizeTable[v75];
                v78 = v77 + (v77 >> 3);
                if ( (v166 & 0x40000) == 0 )
                  v78 = v77 >> 3;
                v79 = v78 + (v77 >> 1);
                if ( (v166 & 0x20000) == 0 )
                  v79 = v78;
                v80 = v79 + (v77 >> 2);
                if ( (v166 & 0x10000) == 0 )
                  v80 = v79;
                v81 = v72 - v80;
                if ( v72 - v80 < -32768 )
                  v81 = -32768;
                v82 = v80 + v72;
                if ( v82 > 0x7FFF )
                  v82 = 0x7FFF;
                LOBYTE(v83) = 88;
                if ( ((v166 >> 16) & 8) == 0 )
                  v81 = v82;
                v181 = AdpcmDecoder::cAdpcmIndexTable[BYTE2(v166) & 0xF] + v76;
                if ( (uint8_t)v181 <= 0x58u )
                  LOBYTE(v83) = AdpcmDecoder::cAdpcmIndexTable[BYTE2(v166) & 0xF] + v76;
                v84 = 0;
                *v171 = v81;
                if ( v181 >= 0 )
                  v84 = v83;
                v175 = v84;
                v85 = v166 >> 20;
                v172 = &v171[v164];
                v83 = (uint8_t)v83;
                if ( v181 < 0 )
                  v83 = 0;
                v86 = AdpcmDecoder::cAdpcmStepSizeTable[v83];
                v87 = v86 + (v86 >> 3);
                if ( (v85 & 4) == 0 )
                  v87 = v86 >> 3;
                v88 = v87 + (v86 >> 1);
                if ( (v85 & 2) == 0 )
                  v88 = v87;
                v89 = v88 + (v86 >> 2);
                if ( (v85 & 1) == 0 )
                  v89 = v88;
                v90 = v81 - v89;
                if ( v81 - v89 < -32768 )
                  v90 = -32768;
                v91 = v89 + v81;
                if ( v91 > 0x7FFF )
                  v91 = 0x7FFF;
                if ( (v85 & 8) == 0 )
                  v90 = v91;
                v176 = AdpcmDecoder::cAdpcmIndexTable[(v166 >> 20) & 0xF] + v175;
                LOBYTE(v92) = 88;
                if ( (uint8_t)v176 <= 0x58u )
                  LOBYTE(v92) = v176;
                v93 = 0;
                if ( v176 >= 0 )
                  v93 = v92;
                v182 = v93;
                *v172 = v90;
                v92 = (uint8_t)v92;
                if ( v176 < 0 )
                  v92 = 0;
                v94 = AdpcmDecoder::cAdpcmStepSizeTable[v92];
                v95 = v94 + (v94 >> 3);
                if ( (v166 & 0x4000000) == 0 )
                  v95 = v94 >> 3;
                v96 = v95 + (v94 >> 1);
                if ( (v166 & 0x2000000) == 0 )
                  v96 = v95;
                v97 = v96 + (v94 >> 2);
                if ( (v166 & 0x1000000) == 0 )
                  v97 = v96;
                v98 = v90 - v97;
                if ( v90 - v97 < -32768 )
                  v98 = -32768;
                v99 = v97 + v90;
                if ( v99 > 0x7FFF )
                  v99 = 0x7FFF;
                if ( ((v166 >> 24) & 8) == 0 )
                  v98 = v99;
                LOBYTE(v100) = 88;
                v183 = AdpcmDecoder::cAdpcmIndexTable[HIBYTE(v166) & 0xF] + v182;
                if ( (uint8_t)v183 <= 0x58u )
                  LOBYTE(v100) = v183;
                v101 = 0;
                if ( v183 >= 0 )
                  v101 = v100;
                v177 = v101;
                v102 = v166 >> 28;
                v167 = (v166 >> 28) & 0xF;
                v100 = (uint8_t)v100;
                v172[v160] = v98;
                if ( v183 < 0 )
                  v100 = 0;
                v103 = AdpcmDecoder::cAdpcmStepSizeTable[v100];
                v104 = v103 + (v103 >> 3);
                if ( (v102 & 4) == 0 )
                  v104 = v103 >> 3;
                v105 = v104 + (v103 >> 1);
                if ( (v102 & 2) == 0 )
                  v105 = v104;
                v106 = v105 + (v103 >> 2);
                if ( (v102 & 1) == 0 )
                  v106 = v105;
                v107 = v98 - v106;
                if ( v98 - v106 < -32768 )
                  v107 = 0x8000;
                v108 = v106 + v98;
                v109 = 0x7FFF;
                if ( v108 <= 0x7FFF )
                  v109 = v108;
                v110 = 88;
                v178 = AdpcmDecoder::cAdpcmIndexTable[v167] + v177;
                if ( (uint8_t)v178 <= 0x58u )
                  v110 = v178;
                if ( (v102 & 8) == 0 )
                  v107 = v109;
                v172[2 * v160] = v107;
                v111 = 0;
                if ( v178 >= 0 )
                  v111 = v110;
                v163 += 4;
                *(uint16_t *)(a1 + 4 * i + 416) = v107;
                *(uint8_t *)(a1 + 4 * i + 418) = v111;
                *(&a28 + i) = (int)(uintptr_t)(&v161[8 * v160]);
              }
              v158 += 4 * v160;
              v159 += v153 + 4;
            }
            v157 += 8;
          }
          while ( v159 < v155 );
          v39 = v157;
        }
        v112 = a3[3];
        v113 = v39 + v112;
        v114 = a4 - v112;
        if ( a4 >= v113 )
          v114 = v157;
        v156 = v114;
        goto LABEL_166;
      }
    }
    else
    {
      v33 = 0;
      do
      {
        *(uint32_t *)(a1 + v33 + 420) = v30[v33 / 4 + 1];
        v33 += 4;
      }
      while ( v33 != 4 * a21 - 4 );
      v34 = 1;
      a28 = a2;
      v35 = a2 + 2;
      do
      {
        *(&a28 + v34++) = v35;
        v35 += 2;
      }
      while ( v34 < a21 );
    }
    v165 = 4 * a21;
    v36 = 0;
    do
    {
      v37 = *(uint16_t **)((char *)&a28 + v36);
      *v37 = *(uint16_t *)(a1 + v36 + 416);
      *(int *)((char *)&a28 + v36) = (int)(uintptr_t)(&v37[v160]);
      v36 += 4;
    }
    while ( v36 != v165 );
    goto LABEL_13;
  }
LABEL_166:
  sub_BA06B0();
  return v156;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock  (binary VA: 0xff90e0)
// Original: vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  vox::VoxThread::Self *v10;
  int v11;
  unsigned int v12;
  int16_t v13;

  vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  v13 = *(uint16_t *)(a1 + 10);
  v2 = *(int16_t *)(a1 + 16);
  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) + 24 * *a2;
  v12 = *(uint32_t *)(v3 + 8);
  v4 = a2[2];
  v5 = *(uint32_t *)(v3 + 4) - v4;
  if ( v2 > v5 )
    v2 = v5;
  v6 = 0;
  if ( v2 > 0 )
  {
    a2[2] = v2 + v4;
    v7 = (v2 - 1) / (4 * v13);
    v8 = a2[3];
    v6 = 8 * v7 + 1;
    if ( v12 < v6 + v8 )
      v6 = v12 - v8;
  }
  v11 = v6;
  sub_BA06B0();
  return v11;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::EmulateSetDecodingBufferToSegmentPosition  (binary VA: 0xff9a70)
// Original: vox::VoxNativeSubDecoderIMAADPCM::EmulateSetDecodingBufferToSegmentPosition
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderIMAADPCM::EmulateSetDecodingBufferToSegmentPosition(int a1, uint32_t *a2)
{
  unsigned int v2;
  int v3;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = a2[3];
  v3 = a2[15];
  a2[3] = *(uint32_t *)(a1 + 368) * (v2 / *(uint32_t *)(a1 + 368));
  v5 = v3;
  *(uint32_t *)(a1 + 4 * v3 + 376) = vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock(a1, a2);
  *(uint32_t *)(a1 + 4 * v5 + 388) = v2 - a2[3];
  a2[3] = v2;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeSegment  (binary VA: 0xff9b30)
// Original: vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeSegment
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeSegment(vox::VoxNativeSubDecoder::Self *a1, int a2, int a3)
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
          v18 = vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock((int)(uintptr_t)(a1), (uint32_t *)a3);
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeCurrentSegmentWithOffset  (binary VA: 0xff9d90)
// Original: vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeCurrentSegmentWithOffset
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeCurrentSegmentWithOffset(vox::VoxNativeSubDecoderIMAADPCM::Self *self, int a2)
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
          *((uint32_t *)self + v6 + 2) = vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock((int)(uintptr_t)(self), v25);
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::GetState  (binary VA: 0xffa030)
// Original: vox::VoxNativeSubDecoderIMAADPCM::GetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderIMAADPCM::GetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::SetState  (binary VA: 0xffa0d0)
// Original: vox::VoxNativeSubDecoderIMAADPCM::SetState
// ----------------------------------------------------------------------------
void vox::VoxNativeSubDecoderIMAADPCM::SetState(vox::NativePlaylistsManager::Self **self, vox::NativePlaylistsManager::Self **a2)
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
// Function: vox::VoxNativeSubDecoderIMAADPCM::Seek  (binary VA: 0xffa1a0)
// Original: vox::VoxNativeSubDecoderIMAADPCM::Seek
// ----------------------------------------------------------------------------
int vox::VoxNativeSubDecoderIMAADPCM::Seek()
{
  return 0;
}


