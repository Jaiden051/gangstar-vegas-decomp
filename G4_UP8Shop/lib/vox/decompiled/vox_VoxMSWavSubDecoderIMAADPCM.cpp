#include "Core/Utils/DecompTypes.h"
#include "vox_VoxMSWavSubDecoderIMAADPCM.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderIMAADPCM::Destroy  (binary VA: 0xfe70e0)
// Original: vox::VoxMSWavSubDecoderIMAADPCM::~VoxMSWavSubDecoderIMAADPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderIMAADPCM::Destroy(void **self)
{
  AdpcmState::Self *v1;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CEC0));
  VoxFreeInternal(*(self + 20));
  v1 = (AdpcmState::Self *)(self + 20);
  VoxFreeInternal(*(self + 28));
  do
  {
    v1 = (AdpcmState::Self *)((char *)v1 - 4);
    AdpcmState::Destroy(v1);
  }
  while ( self + 12 != (void **)v1 );
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208CEE0));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderIMAADPCM::Destroy_eafe7160  (binary VA: 0xfe7160)
// Original: vox::VoxMSWavSubDecoderIMAADPCM::~VoxMSWavSubDecoderIMAADPCM
// ----------------------------------------------------------------------------
void vox::VoxMSWavSubDecoderIMAADPCM::Destroy_eafe7160(void **self)
{
  vox::VoxMSWavSubDecoderIMAADPCM::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderIMAADPCM::HasData  (binary VA: 0xfe71a0)
// Original: vox::VoxMSWavSubDecoderIMAADPCM::HasData
// ----------------------------------------------------------------------------
bool vox::VoxMSWavSubDecoderIMAADPCM::HasData(vox::VoxMSWavSubDecoderIMAADPCM::Self *self)
{
  bool result;

  result = false;
  if ( *((uint32_t *)self + 1) != 0 && *((uint8_t *)self + 41) == 0 )
  {
    if ( *((uint8_t *)self + 40) != 0 )
    {
      if ( *((uint32_t *)self + 27) < *((uint32_t *)self + 7) )
      {
        result = true;
        if ( *((uint32_t *)self + 23) < *((uint32_t *)self + 11) || *((uint32_t *)self + 26) != *((uint32_t *)self + 25) )
          return result;
      }
      G4_VCALL<void>(self, 12, 0);
    }
    result = false;
    if ( *((uint32_t *)self + 27) < *((uint32_t *)self + 7) )
    {
      result = true;
      if ( *((uint32_t *)self + 11) <= *((uint32_t *)self + 23) )
        return *((uint32_t *)self + 26) != *((uint32_t *)self + 25);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderIMAADPCM::Construct  (binary VA: 0xfe7220)
// Original: vox::VoxMSWavSubDecoderIMAADPCM::VoxMSWavSubDecoderIMAADPCM
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderIMAADPCM::Construct(vox::VoxMSWavSubDecoder::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint16_t v5;
  int v7;
  unsigned int v8;
  vox::VoxThread::Self *v9;
  int CurThreadId;

  *((uint32_t *)a1 + 1) = a2;
  *((uint32_t *)a1 + 2) = a3;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CEC0);
  *((uint32_t *)a1 + 3) = 0;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 6) = 0;
  *((uint32_t *)a1 + 7) = 0;
  *((uint32_t *)a1 + 8) = 0;
  *((uint32_t *)a1 + 9) = 0;
  *((uint8_t *)a1 + 40) = 0;
  *((uint8_t *)a1 + 41) = 0;
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 48));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 52));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 56));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 60));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 64));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 68));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 72));
  AdpcmState::Construct((vox::VoxMSWavSubDecoder::Self *)((char *)a1 + 76));
  *((uint32_t *)a1 + 20) = 0;
  *((uint32_t *)a1 + 23) = 0;
  *((uint32_t *)a1 + 25) = 0;
  *((uint32_t *)a1 + 26) = 0;
  *((uint32_t *)a1 + 27) = 0;
  *((uint32_t *)a1 + 28) = 0;
  *((uint32_t *)a1 + 29) = 0;
  *((uint32_t *)a1 + 30) = 0;
  *((uint32_t *)a1 + 31) = 0;
  *((uint32_t *)a1 + 32) = 0;
  *((uint32_t *)a1 + 33) = 0;
  *((uint32_t *)a1 + 34) = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0("VoxMSWavSubDecoderIMAADPCM::VoxMSWavSubDecoderIMAADPCM", CurThreadId);
  vox::VoxMSWavSubDecoder::SetDataSize(a1);
  vox::VoxMSWavSubDecoder::GoToNextDataChunk(a1);
  *((uint32_t *)a1 + 24) = (*(int (**)(uint32_t))(**((uint32_t **)a1 + 1) + 24))(*((uint32_t *)a1 + 1));
  v3 = VoxAllocInternal(
         4 * *(uint16_t *)(a3 + 32),
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_imaadpcm.cpp"),
         (int)(uintptr_t)("VoxMSWavSubDecoderIMAADPCM"),
         44);
  *((uint32_t *)a1 + 20) = v3;
  if ( v3 == 0 )
    goto LABEL_4;
  v4 = VoxAllocInternal(
         *(uint16_t *)(a3 + 32),
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_mswav_subdecoder_imaadpcm.cpp"),
         (int)(uintptr_t)("VoxMSWavSubDecoderIMAADPCM"),
         52);
  *((uint32_t *)a1 + 28) = v4;
  if ( v4 == 0 )
  {
    VoxFreeInternal(*((void **)a1 + 20));
    *((uint32_t *)a1 + 20) = 0;
    goto LABEL_4;
  }
  v5 = *(uint16_t *)(a3 + 22);
  if ( v5 == 0 )
  {
LABEL_4:
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 0;
    *((uint32_t *)a1 + 6) = 0;
    *((uint32_t *)a1 + 7) = 0;
    { sub_BA06B0("VoxMSWavSubDecoderIMAADPCM::VoxMSWavSubDecoderIMAADPCM", CurThreadId); return 0; }
  }
  v7 = *(uint16_t *)(a3 + 32);
  *((uint32_t *)a1 + 6) = 16;
  *((uint32_t *)a1 + 22) = 2 * (v7 - 4 * v5) / v5 + 1;
  v8 = *(uint16_t *)(a3 + 22);
  *((uint32_t *)a1 + 4) = v8;
  *((uint32_t *)a1 + 5) = *(uint32_t *)(a3 + 24);
  *((uint32_t *)a1 + 7) = *(uint32_t *)(a3 + 52);
  if ( v8 > 8 )
  {
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 0;
    *((uint32_t *)a1 + 6) = 0;
    *((uint32_t *)a1 + 7) = 0;
  }
  *((uint8_t *)a1 + 84) = 0;
  { sub_BA06B0("VoxMSWavSubDecoderIMAADPCM::VoxMSWavSubDecoderIMAADPCM", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxMSWavSubDecoderIMAADPCM::DecodeBlock  (binary VA: 0xfe74b0)
// Original: vox::VoxMSWavSubDecoderIMAADPCM::DecodeBlock
// ----------------------------------------------------------------------------
int vox::VoxMSWavSubDecoderIMAADPCM::DecodeBlock(vox::VoxMSWavSubDecoderIMAADPCM::Self *self, char *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char *a24)
{
  uint32_t *v24;
  unsigned int v25;
  int v26;
  int v27;
  int i;
  char *v29;
  int j;
  int k;
  char *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  uint8_t v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char v45;
  uint8_t v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char v52;
  uint8_t v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  char v59;
  uint8_t v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char v66;
  uint8_t v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  char v73;
  uint8_t v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  char v80;
  uint8_t v81;
  int v82;
  int v83;
  int v84;
  int16_t v85;
  char v86;
  char v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  unsigned int v98;
  unsigned int v99;
  int v100;
  vox::VoxThread::Self *v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int CurThreadId;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
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
  int retaddr;
  vox::VoxMSWavSubDecoderIMAADPCM::Self *thisa;
  vox::VoxMSWavSubDecoderIMAADPCM::Self *thisb;
  vox::VoxMSWavSubDecoderIMAADPCM::Self *thisc;
  vox::VoxMSWavSubDecoderIMAADPCM::Self *thisd;
  vox::VoxMSWavSubDecoderIMAADPCM::Self *thise;
  vox::VoxMSWavSubDecoderIMAADPCM::Self *thisf;
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
  int v152;
  int v153;
  char *v154;
  char *v155;
  char *v156;
  uint8_t v157;
  char *v158;
  char *v159;
  char *v160;
  uint8_t *v161;
  int v162;
  int v163;
  int v164;
  int16_t *v165;
  char v166;
  uint8_t v167;
  char *v168;
  uint8_t v169;
  uint8_t v170;
  int v171;
  uint8_t v172;
  char *v173;
  uint8_t v174;
  uint8_t v175;

  CurThreadId = vox::VoxThread::GetCurThreadId(v102);
  sub_BA06A0();
  v24 = *((uint32_t **)self + 28);
  v25 = *(uint16_t *)(*((uint32_t *)self + 2) + 32);
  if ( *((uint32_t *)self + 11) - *((uint32_t *)self + 23) <= v25 )
    v25 = *((uint32_t *)self + 11) - *((uint32_t *)self + 23);
  v149 = (*(int (**)(uint32_t, uint32_t *, unsigned int, int, int, int, int, const char *, int, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**((uint32_t **)self + 1) + 28))(
           *((uint32_t *)self + 1),
           v24,
           v25,
           v103,
           v104,
           v105,
           v106,
           "VoxMSWavSubDecoderIMAADPCM::DecodeBlock",
           CurThreadId,
           v108,
           v109,
           v110,
           v111,
           v112,
           v113,
           v114,
           v115,
           v116,
           v117,
           v118,
           v119,
           *((uint32_t *)self + 28),
           v120,
           v121,
           v122,
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
           v133);
  v151 = 0;
  if ( v149 > 0 )
  {
    *((uint32_t *)self + 12) = *v24;
    v26 = *((uint32_t *)self + 2);
    v27 = *(uint16_t *)(v26 + 22);
    if ( (unsigned int)v27 <= 1 )
    {
      a24 = a2;
    }
    else
    {
      for ( i = 1; i < v27; ++i )
      {
        *((uint32_t *)self + i + 12) = *(uint32_t *)(a17 + 4 * i);
        v27 = *(uint16_t *)(v26 + 22);
      }
      a24 = a2;
      if ( v27 > 1 )
      {
        v29 = a2 + 2;
        for ( j = 1; j != v27; ++j )
        {
          (&a24)[j] = v29;
          v29 += 2;
        }
        goto LABEL_10;
      }
    }
    if ( v27 <= 0 )
    {
LABEL_13:
      v33 = 4 * v27;
      v152 = 1;
      v150 = v149 - v33;
      v34 = 1;
      if ( v149 - v33 > 0 )
      {
        v153 = 0;
        v161 = (uint8_t *)(a17 + v33);
        v35 = *(uint16_t *)(v26 + 22);
        do
        {
          v162 = 0;
          if ( v35 != 0 )
          {
            retaddr = v35;
            do
            {
              v154 = (&a24)[v162];
              v148 = (int)(uintptr_t)((void *)(*v161 & 0xF));
              v171 = *((int16_t *)self + 2 * v162 + 24);
              v155 = (char *)self + 4 * v162 + 48;
              v88 = AdpcmDecoder::cAdpcmStepSizeTable[*((uint8_t *)self + 4 * v162 + 50)];
              v166 = *((uint8_t *)self + 4 * v162 + 50);
              v89 = v88 >> 3;
              if ( (*v161 & 4) != 0 )
                v89 = (v88 >> 3) + v88;
              if ( (*v161 & 2) != 0 )
                v89 += v88 >> 1;
              if ( (*v161 & 1) != 0 )
                v89 += v88 >> 2;
              if ( (*v161 & 8) != 0 )
              {
                v37 = v171 - v89;
                if ( v171 - v89 < -32768 )
                  v37 = -32768;
              }
              else
              {
                v36 = v171 + v89;
                v37 = 0x7FFF;
                if ( v36 <= 0x7FFF )
                  v37 = v36;
              }
              thisa = nullptr;
              v172 = 0;
              v38 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v148] + v166;
              if ( v38 >= 0 )
              {
                v39 = 88;
                if ( (uint8_t)v38 <= 0x58u )
                  v39 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v148] + v166;
                v172 = v39;
                thisa = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v39;
              }
              v164 = 2 * retaddr;
              v40 = ((v161[3] << 24) + (v161[2] << 16) + (v161[1] << 8) + *v161) >> 4;
              *(uint16_t *)v154 = v37;
              v156 = &v154[2 * retaddr];
              v141 = (int)(uintptr_t)((void *)(v40 & 0xF));
              v41 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(thisa)];
              v42 = v41 >> 3;
              if ( (v40 & 4) != 0 )
                v42 += v41;
              if ( (v40 & 2) != 0 )
                v42 += v41 >> 1;
              if ( (v40 & 1) != 0 )
                v42 += v41 >> 2;
              if ( (v40 & 8) != 0 )
              {
                v95 = v37 - v42;
                v44 = -32768;
                if ( v95 >= -32768 )
                  v44 = v95;
              }
              else
              {
                v43 = v37 + v42;
                v44 = 0x7FFF;
                if ( v43 <= 0x7FFF )
                  v44 = v43;
              }
              thisb = nullptr;
              v167 = 0;
              v45 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v141] + v172;
              if ( v45 >= 0 )
              {
                v46 = 88;
                if ( (uint8_t)v45 <= 0x58u )
                  v46 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v141] + v172;
                v167 = v46;
                thisb = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v46;
              }
              v47 = v40 >> 4;
              *(uint16_t *)v156 = v44;
              v142 = (int)(uintptr_t)((void *)(v47 & 0xF));
              v173 = &v156[v164];
              v48 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(thisb)];
              v49 = v48 >> 3;
              if ( (v47 & 4) != 0 )
                v49 += v48;
              if ( (v47 & 2) != 0 )
                v49 += v48 >> 1;
              if ( (v47 & 1) != 0 )
                v49 += v48 >> 2;
              if ( (v47 & 8) != 0 )
              {
                v94 = v44 - v49;
                v51 = -32768;
                if ( v94 >= -32768 )
                  v51 = v94;
              }
              else
              {
                v50 = v44 + v49;
                v51 = 0x7FFF;
                if ( v50 <= 0x7FFF )
                  v51 = v50;
              }
              thisc = nullptr;
              v157 = 0;
              v52 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v142] + v167;
              if ( v52 >= 0 )
              {
                v53 = 88;
                if ( (uint8_t)v52 <= 0x58u )
                  v53 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v142] + v167;
                v157 = v53;
                thisc = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v53;
              }
              v54 = v47 >> 4;
              *(uint16_t *)v173 = v51;
              v143 = (int)(uintptr_t)((void *)(v54 & 0xF));
              v168 = &v173[v164];
              v55 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(thisc)];
              v56 = v55 >> 3;
              if ( (v54 & 4) != 0 )
                v56 += v55;
              if ( (v54 & 2) != 0 )
                v56 += v55 >> 1;
              if ( (v54 & 1) != 0 )
                v56 += v55 >> 2;
              if ( (v54 & 8) != 0 )
              {
                v93 = v51 - v56;
                v58 = -32768;
                if ( v93 >= -32768 )
                  v58 = v93;
              }
              else
              {
                v57 = v51 + v56;
                v58 = 0x7FFF;
                if ( v57 <= 0x7FFF )
                  v58 = v57;
              }
              thisd = nullptr;
              v174 = 0;
              v59 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v143] + v157;
              if ( v59 >= 0 )
              {
                v60 = 88;
                if ( (uint8_t)v59 <= 0x58u )
                  v60 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v143] + v157;
                v174 = v60;
                thisd = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v60;
              }
              v61 = v54 >> 4;
              *(uint16_t *)v168 = v58;
              v144 = (int)(uintptr_t)((void *)(v61 & 0xF));
              v158 = &v168[v164];
              v62 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(thisd)];
              v63 = v62 >> 3;
              if ( (v61 & 4) != 0 )
                v63 += v62;
              if ( (v61 & 2) != 0 )
                v63 += v62 >> 1;
              if ( (v61 & 1) != 0 )
                v63 += v62 >> 2;
              if ( (v61 & 8) != 0 )
              {
                v92 = v58 - v63;
                v65 = -32768;
                if ( v92 >= -32768 )
                  v65 = v92;
              }
              else
              {
                v64 = v58 + v63;
                v65 = 0x7FFF;
                if ( v64 <= 0x7FFF )
                  v65 = v64;
              }
              thise = nullptr;
              v169 = 0;
              v66 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v144] + v174;
              if ( v66 >= 0 )
              {
                v67 = 88;
                if ( (uint8_t)v66 <= 0x58u )
                  v67 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v144] + v174;
                v169 = v67;
                thise = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v67;
              }
              v68 = v61 >> 4;
              *(uint16_t *)v158 = v65;
              v145 = (int)(uintptr_t)((void *)(v68 & 0xF));
              v159 = &v158[v164];
              v69 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(thise)];
              v70 = v69 >> 3;
              if ( (v68 & 4) != 0 )
                v70 += v69;
              if ( (v68 & 2) != 0 )
                v70 += v69 >> 1;
              if ( (v68 & 1) != 0 )
                v70 += v69 >> 2;
              if ( (v68 & 8) != 0 )
              {
                v91 = v65 - v70;
                v72 = -32768;
                if ( v91 >= -32768 )
                  v72 = v91;
              }
              else
              {
                v71 = v65 + v70;
                v72 = 0x7FFF;
                if ( v71 <= 0x7FFF )
                  v72 = v71;
              }
              thisf = nullptr;
              v175 = 0;
              v73 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v145] + v169;
              if ( v73 >= 0 )
              {
                v74 = 88;
                if ( (uint8_t)v73 <= 0x58u )
                  v74 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v145] + v169;
                v175 = v74;
                thisf = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v74;
              }
              v75 = v68 >> 4;
              *(uint16_t *)v159 = v72;
              v146 = (int)(uintptr_t)((void *)(v75 & 0xF));
              v160 = &v159[v164];
              v76 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(thisf)];
              v77 = v76 >> 3;
              if ( (v75 & 4) != 0 )
                v77 += v76;
              if ( (v75 & 2) != 0 )
                v77 += v76 >> 1;
              if ( (v75 & 1) != 0 )
                v77 += v76 >> 2;
              if ( (v75 & 8) != 0 )
              {
                v90 = v72 - v77;
                v79 = -32768;
                if ( v90 >= -32768 )
                  v79 = v90;
              }
              else
              {
                v78 = v72 + v77;
                v79 = 0x7FFF;
                if ( v78 <= 0x7FFF )
                  v79 = v78;
              }
              self = nullptr;
              v170 = 0;
              v80 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v146] + v175;
              if ( v80 >= 0 )
              {
                v81 = 88;
                if ( (uint8_t)v80 <= 0x58u )
                  v81 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v146] + v175;
                v170 = v81;
                self = (vox::VoxMSWavSubDecoderIMAADPCM::Self *)v81;
              }
              *(uint16_t *)v160 = v79;
              v147 = (int)(uintptr_t)((void *)((v75 >> 4) & 0xF));
              v165 = (int16_t *)&v160[v164];
              v82 = AdpcmDecoder::cAdpcmStepSizeTable[(uint32_t)(uintptr_t)(self)];
              v83 = v82 >> 3;
              if ( ((v75 >> 4) & 4) != 0 )
                v83 += v82;
              if ( ((v75 >> 4) & 2) != 0 )
                v83 += v82 >> 1;
              if ( ((v75 >> 4) & 1) != 0 )
                v83 += v82 >> 2;
              if ( ((v75 >> 4) & 8) != 0 )
              {
                v96 = v79 - v83;
                v85 = 0x8000;
                if ( v96 >= -32768 )
                  v85 = v96;
              }
              else
              {
                v84 = v79 + v83;
                v85 = 0x7FFF;
                if ( v84 <= 0x7FFF )
                  v85 = v84;
              }
              v86 = 0;
              v87 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v147] + v170;
              if ( v87 >= 0 )
              {
                v86 = 88;
                if ( (uint8_t)v87 <= 0x58u )
                  v86 = AdpcmDecoder::cAdpcmIndexTable[(uint32_t)v147] + v170;
              }
              v153 += 4;
              v161 += 4;
              *v165 = v85;
              *(uint16_t *)v155 = v85;
              v155[2] = v86;
              retaddr = *(uint16_t *)(*((uint32_t *)self + 2) + 22);
              (&a24)[v162++] = &v154[16 * retaddr];
            }
            while ( retaddr > v162 );
            v35 = retaddr;
          }
          v152 += 8;
        }
        while ( v153 < v150 );
        v34 = v152;
      }
      *((uint32_t *)self + 23) += v149;
      v97 = *((uint32_t *)self + 27);
      v98 = *((uint32_t *)self + 7);
      v99 = v34 + v97;
      v100 = v98 - v97;
      if ( v99 <= v98 )
        v100 = v152;
      v151 = v100;
      goto LABEL_151;
    }
LABEL_10:
    for ( k = 0; k < v27; ++k )
    {
      v32 = (&a24)[k];
      *(uint16_t *)v32 = *((uint16_t *)self + 2 * k + 24);
      v163 = *((uint32_t *)self + 2);
      v27 = *(uint16_t *)(v163 + 22);
      (&a24)[k] = &v32[2 * v27];
    }
    v26 = v163;
    goto LABEL_13;
  }
LABEL_151:
  sub_BA06B0();
  return v151;
}



// ============================================================================
// Address:   0xfe7d10 (size: 375 bytes)
// Symbol:    _ZN3vox26VoxMSWavSubDecoderIMAADPCM6DecodeEPvi
// Demangled: vox::VoxMSWavSubDecoderIMAADPCM::Decode(void *,int)
// ============================================================================


// ============================================================================
// Address:   0xfe7e90 (size: 277 bytes)
// Symbol:    _ZN3vox26VoxMSWavSubDecoderIMAADPCM4SeekEj
// Demangled: vox::VoxMSWavSubDecoderIMAADPCM::Seek(unsigned int)
// ============================================================================

