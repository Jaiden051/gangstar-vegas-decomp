#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppKDo.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppKDopGeometriesVirtualMachine::Construct  (binary VA: 0x1819c10)
// Original: hkpMoppKDopGeometriesVirtualMachine::hkpMoppKDopGeometriesVirtualMachine
// ----------------------------------------------------------------------------
void hkpMoppKDopGeometriesVirtualMachine::Construct(hkpMoppKDopGeometriesVirtualMachine::Self *self)
{
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint8_t *)self + 176) = 0;
  *((uint32_t *)self + 45) = -1;
  *((uint8_t *)self + 184) = 0;
  *((uint32_t *)self + 47) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppKDopGeometriesVirtualMachine::Destroy  (binary VA: 0x1819c50)
// Original: hkpMoppKDopGeometriesVirtualMachine::~hkpMoppKDopGeometriesVirtualMachine
// ----------------------------------------------------------------------------
void hkpMoppKDopGeometriesVirtualMachine::Destroy(hkpMoppKDopGeometriesVirtualMachine::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 14) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      4 * v1);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppKDopGeometriesVirtualMachine::pushKDop  (binary VA: 0x1819cb0)
// Original: hkpMoppKDopGeometriesVirtualMachine::pushKDop
// ----------------------------------------------------------------------------
uint32_t * hkpMoppKDopGeometriesVirtualMachine::pushKDop(uint32_t *a1, char a2, int a3)
{
  uint32_t *result;
  int v4;

  result = a1;
  v4 = a1[16];
  *(uint8_t *)(v4 + 109) = a2;
  if ( a2 != 0 )
    *(uint32_t *)(v4 + 104) = a3;
  *(uint8_t *)(v4 + 108) = a1[43];
  std::memcpy((void *)v4, a1 + 17, 104);
  a1[16] += 112;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppKDopGeometriesVirtualMachine::addHit  (binary VA: 0x1819cf0)
// Original: hkpMoppKDopGeometriesVirtualMachine::addHit
// ----------------------------------------------------------------------------
void hkpMoppKDopGeometriesVirtualMachine::addHit(hkpMoppKDopGeometriesVirtualMachine::Self *self, unsigned int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  char v6;
  int v7;

  v2 = *((uint32_t *)self + 14);
  if ( v2 > 0 )
  {
    v3 = *((uint32_t **)self + 13);
    if ( *v3 == a2 )
      goto LABEL_11;
    v4 = 0;
    while ( ++v4 != v2 )
    {
      if ( v3[v4] == a2 )
      {
        if ( v4 != -1 )
          goto LABEL_11;
        break;
      }
    }
  }
  v5 = *((uint8_t *)self + 184);
  if ( (uint8_t)v5 == 0 )
    goto LABEL_17;
  if ( *((uint32_t *)self + 47) == a2 )
  {
    v5 = 1;
LABEL_17:
    v7 = v5;
    hkpMoppKDopGeometriesVirtualMachine::pushKDop((uint32_t *)(self), 1, a2);
    v6 = v7;
    if ( *((uint8_t *)self + 176) != 0 )
      v6 = 1;
    v2 = *((uint32_t *)self + 14);
    *((uint8_t *)self + 176) = v6;
  }
  if ( v2 == (*((uint32_t *)self + 15) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpMoppKDopGeometriesVirtualMachine::Self *)((char *)self + 52),
      4,
      v7);
    v2 = *((uint32_t *)self + 14);
  }
  *(uint32_t *)(*((uint32_t *)self + 13) + 4 * v2) = a2;
  ++*((uint32_t *)self + 14);
LABEL_11:
  if ( *((uint8_t *)self + 176) != 0 )
    *((uint8_t *)self + 192) = 1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse  (binary VA: 0x1819de0)
// Original: hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse
// ----------------------------------------------------------------------------
void hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse(hkpMoppKDopGeometriesVirtualMachine::Self *a1, int a2, uint8_t *a3)
{
  bool v3;
  uint8_t v4;
  uint8_t v5; // si
  int v6;
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11;
  int v12;
  float v13; // xmm0_4
  int v14;
  float v15; // xmm2_4
  float *v16;
  float v17; // xmm3_4
  float *v18;
  char v19;
  float v20;
  int v21; // xmm3_4
  float v22; // xmm2_4
  unsigned int v23;
  uint8_t v24;
  uint8_t *v25;
  int v26;
  uint8_t v27;
  uint8_t *v28;
  uint8_t *v29;
  uint8_t *v30;
  int v31;
  int v32;
  uint8_t v33;
  int v34;
  float v35; // xmm2_4
  int v36;
  float v37;
  int v38;
  int v39;
  int v40;
  float v41; // xmm1_4
  int v42;
  float v43; // xmm0_4
  float v44; // xmm1_4
  int v45;
  uint8_t *v46;
  int v47;
  int v48; // xmm2_4
  int v49;
  float *v50; // xmm0_4
  int v51;
  float **v52;
  float v53; // xmm2_4
  int v54;
  int v55;
  int v56;
  int v57;
  float v58; // xmm1_4
  int v59;
  float v60; // xmm2_4
  int v61;
  int v62;
  int v63;
  int v64;
  float v65; // xmm1_4
  int v66;
  float v67; // xmm2_4
  int v68;
  int v69;
  int v70;
  int v71;
  float v72; // xmm1_4
  int v73;
  int v74;
  float v75; // xmm2_4
  int v76;
  int v77;
  float v78; // xmm0_4
  int v79;
  float v80; // xmm2_4
  int v81;
  float v82;
  int v83;
  int v84;
  int v85;
  int v86;
  float v87; // xmm2_4
  int v88;
  int v89;
  float v90; // xmm0_4
  int v91;
  float v92; // xmm1_4
  float *v93; // xmm2_4
  float *v94;
  float v95; // xmm3_4
  float v96; // xmm2_4
  int v97;
  int v98;
  int v99;
  int v100;
  float v101; // xmm1_4
  int v102;
  float v103; // xmm2_4
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  float v109; // xmm1_4
  int v110;
  float v111; // xmm2_4
  int v112;
  int v113;
  int v114;
  int v115;
  float v116; // xmm1_4
  int v117;
  float v118; // xmm2_4
  int v119;
  int v120;
  int v121;
  int v122;
  float v123; // xmm1_4
  int v124;
  float v125; // xmm2_4
  int v126;
  int v127;
  int v128;
  int v129;
  float v130; // xmm1_4
  int v131;
  float v132; // xmm2_4
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  float v138; // xmm1_4
  int v139;
  float v140; // xmm2_4
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  float v146; // xmm1_4
  int v147;
  typedef uint32_t _g4_t_v148[4];
  typedef int _g4_t_v149;
  typedef float _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef float *_g4_t_v153;
  typedef float _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef uint32_t _g4_t_v157[4];
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v148)) > _g4_s0 ? (0u + sizeof(_g4_t_v148)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v149)) > _g4_s1 ? (16u + sizeof(_g4_t_v149)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v150)) > _g4_s2 ? (20u + sizeof(_g4_t_v150)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v151)) > _g4_s3 ? (24u + sizeof(_g4_t_v151)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v152)) > _g4_s4 ? (28u + sizeof(_g4_t_v152)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v153)) > _g4_s5 ? (32u + sizeof(_g4_t_v153)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v154)) > _g4_s6 ? (36u + sizeof(_g4_t_v154)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v155)) > _g4_s7 ? (40u + sizeof(_g4_t_v155)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v156)) > _g4_s8 ? (44u + sizeof(_g4_t_v156)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v157)) > _g4_s9 ? (48u + sizeof(_g4_t_v157)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v158)) > _g4_s10 ? (64u + sizeof(_g4_t_v158)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v159)) > _g4_s11 ? (68u + sizeof(_g4_t_v159)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 0u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 16u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 20u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 24u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 28u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 32u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 36u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 40u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 44u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 48u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 64u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 68u);

  v3 = *((uint8_t *)a1 + 192) == 0;
  v4 = *a3;
  LOBYTE(v154) = a3[1];
  v5 = a3[3];
  if ( v3 )
  {
    LOBYTE(v156) = a3[2];
    LOBYTE(v155) = v5;
    v6 = LOBYTE(v154);
    v154 = COERCE_FLOAT(v157);
    v7 = v4;
    while ( 1 )
    {
      if ( v4 > 0x6Bu )
      {
LABEL_60:
        __builtin_debugtrap();
        LOBYTE(v152) = v6;
        LOBYTE(v153) = v155;
        v24 = v156;
      }
      else
      {
        switch ( v7 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            v153 = *(float **)(a2 + 12);
            v157[0] = *(uint32_t *)a2 + (v6 << (16 - (uint8_t)(uintptr_t)v153));
            v157[1] = *(uint32_t *)(a2 + 4) + ((uint8_t)v156 << (16 - (uint8_t)(uintptr_t)v153));
            v26 = *(uint32_t *)(a2 + 8) + ((uint8_t)v155 << (16 - (uint8_t)(uintptr_t)v153));
            v157[3] = (uint32_t)(uintptr_t)((char *)v153 + v7);
            v157[2] = v26;
            v159 = *(uint32_t *)(a2 + 20);
            v27 = a3[5];
            v158 = *(uint32_t *)(a2 + 16);
            LOBYTE(v152) = v27;
            v28 = a3 + 4;
            LOBYTE(v153) = a3[7];
            v4 = a3[4];
            v24 = a3[6];
            goto LABEL_26;
          case 5:
            v29 = &a3[v6 + 2];
            goto LABEL_28;
          case 6:
            v29 = &a3[256 * v6 + 3 + (uint8_t)v156];
            goto LABEL_28;
          case 7:
            v29 = &a3[0x10000 * v6 + 4 + 256 * (uint8_t)v156 + (uint8_t)v155];
LABEL_28:
            a3 = v29;
            v30 = v29;
            v4 = *v29;
            LOBYTE(v152) = v30[1];
            v7 = v4;
            v24 = a3[2];
            LOBYTE(v153) = a3[3];
            v6 = (uint8_t)v152;
            break;
          case 8:
          case 12:
          case 13:
          case 14:
          case 15:
          case 29:
          case 30:
          case 31:
          case 44:
          case 45:
          case 46:
          case 47:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 91:
          case 92:
          case 93:
          case 94:
          case 95:
            goto LABEL_60;
          case 9:
            if ( a2 != LODWORD(v154) )
            {
              v157[0] = *(uint32_t *)a2;
              v157[1] = *(uint32_t *)(a2 + 4);
              v157[2] = *(uint32_t *)(a2 + 8);
              v157[3] = *(uint32_t *)(a2 + 12);
              v158 = *(uint32_t *)(a2 + 16);
              v159 = *(uint32_t *)(a2 + 20);
            }
            v158 += v6;
            v28 = a3 + 2;
            v24 = a3[4];
            LOBYTE(v153) = a3[5];
            LOBYTE(v152) = v155;
            v4 = v156;
            goto LABEL_26;
          case 10:
            v31 = (uint8_t)v156 + (v6 << 8);
            if ( a2 != LODWORD(v154) )
            {
              v157[0] = *(uint32_t *)a2;
              v157[1] = *(uint32_t *)(a2 + 4);
              v157[2] = *(uint32_t *)(a2 + 8);
              v157[3] = *(uint32_t *)(a2 + 12);
              v158 = *(uint32_t *)(a2 + 16);
              v159 = *(uint32_t *)(a2 + 20);
            }
            v158 += v31;
            v28 = a3 + 3;
            LOBYTE(v152) = a3[4];
            v24 = a3[5];
            LOBYTE(v153) = a3[6];
            v4 = v155;
            goto LABEL_26;
          case 11:
            v32 = a3[4] + ((uint8_t)v156 << 16) + (v6 << 24) + ((uint8_t)v155 << 8);
            if ( a2 != LODWORD(v154) )
            {
              v157[0] = *(uint32_t *)a2;
              v157[1] = *(uint32_t *)(a2 + 4);
              v157[2] = *(uint32_t *)(a2 + 8);
              v157[3] = *(uint32_t *)(a2 + 12);
              v158 = *(uint32_t *)(a2 + 16);
              v159 = *(uint32_t *)(a2 + 20);
            }
            v158 = v32;
            v28 = a3 + 5;
            v33 = a3[8];
            LOBYTE(v152) = a3[6];
            LOBYTE(v153) = v33;
            v4 = a3[5];
            v24 = a3[7];
LABEL_26:
            v6 = (uint8_t)v152;
            a3 = v28;
            a2 = LODWORD(v154);
            v7 = v4;
            break;
          case 16:
          case 17:
          case 18:
            v34 = v7 - 16;
            v35 = *((float *)a1 + 4);
            v36 = 16 - *(uint32_t *)(a2 + 12);
            v37 = *(float *)(a2 + 4 * v34);
            v38 = 8 * v34;
            v154 = v37;
            v39 = LODWORD(v37) + (v6 << v36);
            v40 = (uint8_t)v156;
            v156 = v38;
            v41 = (float)(LODWORD(v154) + (v40 << v36));
            v42 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v43 = (float)v39 * v35;
            v149 = v42;
            v44 = v41 * v35;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 19:
            v140 = *((float *)a1 + 4);
            v141 = 16 - *(uint32_t *)(a2 + 12);
            v142 = *(uint32_t *)(a2 + 8) + *(uint32_t *)(a2 + 4);
            v143 = (uint8_t)v156;
            v156 = 24;
            v144 = v142 + ((2 * v6) << v141);
            v145 = v142 + ((2 * v143) << v141);
            v38 = 24;
            v146 = (float)v145;
            v147 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v43 = (float)v144 * v140;
            v149 = v147;
            v44 = v146 * v140;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 20:
            v125 = *((float *)a1 + 4);
            v126 = 16 - *(uint32_t *)(a2 + 12);
            v127 = *(uint32_t *)(a2 + 4) - *(uint32_t *)(a2 + 8);
            v128 = (uint8_t)v156;
            v156 = 32;
            v43 = (float)(v127 + ((v6 + v6 - 255) << v126)) * v125;
            v129 = v127 + ((2 * v128 - 255) << v126);
            v38 = 32;
            v130 = (float)v129;
            v131 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v130 * v125;
            v149 = v131;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 21:
            v132 = *((float *)a1 + 4);
            v133 = 16 - *(uint32_t *)(a2 + 12);
            v134 = *(uint32_t *)(a2 + 8) + *(uint32_t *)a2;
            v135 = (uint8_t)v156;
            v156 = 40;
            v136 = v134 + ((2 * v6) << v133);
            v137 = v134 + ((2 * v135) << v133);
            v38 = 40;
            v138 = (float)v137;
            v139 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v43 = (float)v136 * v132;
            v149 = v139;
            v44 = v138 * v132;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 22:
            v96 = *((float *)a1 + 4);
            v97 = 16 - *(uint32_t *)(a2 + 12);
            v98 = *(uint32_t *)a2 - *(uint32_t *)(a2 + 8);
            v99 = (uint8_t)v156;
            v156 = 48;
            v43 = (float)(v98 + ((v6 + v6 - 255) << v97)) * v96;
            v100 = v98 + ((2 * v99 - 255) << v97);
            v38 = 48;
            v101 = (float)v100;
            v102 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v101 * v96;
            v149 = v102;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 23:
            v103 = *((float *)a1 + 4);
            v104 = 16 - *(uint32_t *)(a2 + 12);
            v105 = *(uint32_t *)(a2 + 4) + *(uint32_t *)a2;
            v106 = (uint8_t)v156;
            v156 = 56;
            v107 = v105 + ((2 * v6) << v104);
            v108 = v105 + ((2 * v106) << v104);
            v38 = 56;
            v109 = (float)v108;
            v110 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v43 = (float)v107 * v103;
            v149 = v110;
            v44 = v109 * v103;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 24:
            v111 = *((float *)a1 + 4);
            v112 = 16 - *(uint32_t *)(a2 + 12);
            v113 = *(uint32_t *)a2 - *(uint32_t *)(a2 + 4);
            v114 = (uint8_t)v156;
            v156 = 64;
            v43 = (float)(v113 + ((v6 + v6 - 255) << v112)) * v111;
            v115 = v113 + ((2 * v114 - 255) << v112);
            v38 = 64;
            v116 = (float)v115;
            v117 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v116 * v111;
            v149 = v117;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 25:
            v118 = *((float *)a1 + 4);
            v119 = 16 - *(uint32_t *)(a2 + 12);
            v120 = *(uint32_t *)(a2 + 8) + *(uint32_t *)(a2 + 4) + *(uint32_t *)a2;
            v121 = (uint8_t)v156;
            v156 = 72;
            v43 = (float)(v120 + ((3 * v6) << v119)) * v118;
            v122 = v120 + ((3 * v121) << v119);
            v38 = 72;
            v123 = (float)v122;
            v124 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v123 * v118;
            v149 = v124;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 26:
            v53 = *((float *)a1 + 4);
            v54 = 16 - *(uint32_t *)(a2 + 12);
            v55 = *(uint32_t *)(a2 + 4) + *(uint32_t *)a2 - *(uint32_t *)(a2 + 8);
            v56 = (uint8_t)v156;
            v156 = 80;
            v43 = (float)(v55 + ((3 * v6 - 255) << v54)) * v53;
            v57 = v55 + ((3 * v56 - 255) << v54);
            v38 = 80;
            v58 = (float)v57;
            v59 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v58 * v53;
            v149 = v59;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 27:
            v60 = *((float *)a1 + 4);
            v61 = 16 - *(uint32_t *)(a2 + 12);
            v62 = *(uint32_t *)(a2 + 8) + *(uint32_t *)a2 - *(uint32_t *)(a2 + 4);
            v63 = (uint8_t)v156;
            v156 = 88;
            v43 = (float)(v62 + ((3 * v6 - 255) << v61)) * v60;
            v64 = v62 + ((3 * v63 - 255) << v61);
            v38 = 88;
            v65 = (float)v64;
            v66 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v65 * v60;
            v149 = v66;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 28:
            v67 = *((float *)a1 + 4);
            v68 = 16 - *(uint32_t *)(a2 + 12);
            v69 = *(uint32_t *)a2 - *(uint32_t *)(a2 + 4) - *(uint32_t *)(a2 + 8);
            v70 = (uint8_t)v156;
            v156 = 96;
            v43 = (float)(v69 + ((3 * v6 - 510) << v68)) * v67;
            v71 = v69 + ((3 * v70 - 510) << v68);
            v38 = 96;
            v72 = (float)v71;
            v73 = (uint8_t)v155;
            *(float *)&v155 = 0.0;
            v44 = v72 * v67;
            v149 = v73;
            v45 = 0;
            v46 = a3 + 4;
            goto LABEL_41;
          case 32:
          case 33:
          case 34:
            v74 = v7 - 32;
            *(float *)&v155 = 0.0;
            v75 = *((float *)a1 + 4);
            v76 = 16 - *(uint32_t *)(a2 + 12);
            v77 = *(uint32_t *)(a2 + 4 * v74) + (v6 << v76);
            v78 = (float)(1 << v76) + (float)v77;
            v38 = 8 * v74;
            v149 = (uint8_t)v156;
            v156 = v38;
            v44 = (float)v77 * v75;
            v46 = a3 + 3;
            v45 = 0;
            v43 = v78 * v75;
            goto LABEL_41;
          case 35:
          case 36:
          case 37:
            v79 = v7 - 35;
            v80 = *((float *)a1 + 4);
            v81 = 16 - *(uint32_t *)(a2 + 12);
            v82 = *(float *)(a2 + 4 * v79);
            v38 = 8 * v79;
            v154 = v82;
            v83 = LODWORD(v82) + (v6 << v81);
            v84 = (uint8_t)v156;
            v156 = v38;
            v43 = (float)v83 * v80;
            v85 = a3[6];
            v155 = a3[4] + ((uint8_t)v155 << 8);
            v44 = (float)(LODWORD(v154) + (v84 << v81)) * v80;
            v45 = v155;
            v149 = v85 + (a3[5] << 8);
            v46 = a3 + 7;
LABEL_41:
            LODWORD(v154) = (uint32_t)(uintptr_t)((char *)a1 + 68);
            v47 = (int)(uintptr_t)(&v46[v45]);
            v48 = *(uint32_t *)((char *)a1 + v38 + 72);
            v152 = v47;
            v150 = v44;
            v151 = v48;
            v153 = (float *)((char *)a1 + v156 + 72);
            *v153 = v43;
            hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse(a1, a2, (uint8_t *)(uintptr_t)(v47));
            v49 = v152;
            *(uint32_t *)v153 = v151;
            v50 = *(float **)((char *)a1 + v38 + 68);
            v51 = v49 - (v155 - v149);
            v52 = (float **)(v156 + LODWORD(v154));
            *(float *)(v156 + LODWORD(v154)) = v150;
            v153 = v50;
            hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse(a1, a2, (uint8_t *)(uintptr_t)(v51));
            *v52 = v153;
            return;
          case 38:
          case 39:
          case 40:
            v86 = v7 - 38;
            v87 = *((float *)a1 + 4);
            v88 = 16 - *(uint32_t *)(a2 + 12);
            v155 = *(int *)(a2 + 4 * v86);
            v89 = v155 + (v6 << v88);
            v90 = (float)(v155 + ((uint8_t)v156 << v88)) * v87;
            v91 = *((uint32_t *)a1 + 45);
            v92 = (float)v89 * v87;
            if ( v91 != 0 && v91 <= *((uint32_t *)a1 + 43) )
            {
              LOBYTE(v156) = 0;
            }
            else
            {
              v154 = (float)(v155 + ((uint8_t)v156 << v88)) * v87;
              *(float *)&v155 = (float)v89 * v87;
              hkpMoppKDopGeometriesVirtualMachine::pushKDop((uint32_t *)(a1), 0, -1);
              v92 = *(float *)&v155;
              LOBYTE(v156) = 1;
              v90 = v154;
            }
            v93 = *((float **)a1 + 2 * v86 + 17);
            v94 = (float *)((char *)a1 + 8 * v86 + 72);
            v95 = *((float *)a1 + 2 * v86 + 18);
            v18 = (float *)((char *)a1 + 8 * v86 + 68);
            v155 = (int)(uintptr_t)(v94);
            *v18 = v92;
            *v94 = v90;
            ++*((uint32_t *)a1 + 43);
            v153 = v93;
            v154 = v95;
            hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse(a1, a2, (uint8_t *)(uintptr_t)((int)(uintptr_t)(a3 + 3)));
            --*((uint32_t *)a1 + 43);
            v21 = LODWORD(v154);
            v20 = *(float *)&v155;
            v22 = *(float *)&v153;
            if ( (uint8_t)v156 == 0 || *((uint8_t *)a1 + 184) == 0 || *((uint8_t *)a1 + 192) != 0 )
              goto LABEL_11;
            goto LABEL_10;
          case 41:
          case 42:
          case 43:
            v8 = v7 - 41;
            v9 = *((float *)a1 + 4);
            v10 = (float)((uint8_t)v155 + ((uint8_t)v156 << 8) + (v6 << 16)) * v9;
            v11 = a3[6] + (a3[4] << 16) + (a3[5] << 8);
            v12 = *((uint32_t *)a1 + 45);
            v13 = (float)v11 * v9;
            if ( v12 != 0 && v12 <= *((uint32_t *)a1 + 43) )
            {
              v14 = 0;
            }
            else
            {
              *(float *)&v155 = (float)v11 * v9;
              *(float *)&v156 = v10;
              hkpMoppKDopGeometriesVirtualMachine::pushKDop((uint32_t *)(a1), 0, -1);
              v10 = *(float *)&v156;
              v14 = 1;
              v13 = *(float *)&v155;
            }
            v15 = *((float *)a1 + 2 * v8 + 17);
            v16 = (float *)((char *)a1 + 8 * v8 + 72);
            v17 = *((float *)a1 + 2 * v8 + 18);
            v18 = (float *)((char *)a1 + 8 * v8 + 68);
            v153 = (float *)v14;
            v156 = (int)(uintptr_t)(v16);
            *v18 = v10;
            *v16 = v13;
            ++*((uint32_t *)a1 + 43);
            v154 = v15;
            *(float *)&v155 = v17;
            hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse(a1, a2, (uint8_t *)(uintptr_t)((int)(uintptr_t)(a3 + 7)));
            v19 = (char)(uintptr_t)v153;
            --*((uint32_t *)a1 + 43);
            v20 = *(float *)&v156;
            v21 = v155;
            v22 = v154;
            if ( v19 != 0 && *((uint8_t *)a1 + 184) != 0 )
LABEL_10:
              *((uint32_t *)a1 + 16) -= 112;
LABEL_11:
            *v18 = v22;
            *(uint32_t *)LODWORD(v20) = v21;
            return;
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 59:
          case 60:
          case 61:
          case 62:
          case 63:
          case 64:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
            v6 = v7 - 48;
          case 80:
            *((uint32_t *)a1 + 12) = v6;
            goto LABEL_15;
          case 81:
            v6 = (uint8_t)v156 + (v6 << 8);
            *((uint32_t *)a1 + 12) = v6;
            goto LABEL_15;
          case 82:
            v6 = (uint8_t)v155 + ((uint8_t)v156 << 8) + (v6 << 16);
            *((uint32_t *)a1 + 12) = v6;
LABEL_15:
            v23 = *(uint32_t *)(a2 + 16) + v6;
            *((uint32_t *)a1 + 12) = v23;
            v148[2] = a2 + 20;
            hkpMoppKDopGeometriesVirtualMachine::addHit(a1, v23);
            *((uint32_t *)a1 + 12) = -1;
            return;
          case 96:
          case 97:
          case 98:
          case 99:
            a3 += 2;
            LOBYTE(v152) = v155;
            v148[v7 - 79] = v6;
            v4 = v156;
            goto LABEL_19;
          case 100:
          case 101:
          case 102:
          case 103:
            v25 = a3;
            v148[v7 - 83] = (uint8_t)v156 + (v6 << 8);
            a3 += 3;
            LOBYTE(v152) = v25[4];
            v4 = v155;
            goto LABEL_19;
          case 104:
          case 105:
          case 106:
          case 107:
            v148[v7 - 87] = a3[4] + ((uint8_t)v156 << 16) + (v6 << 24) + ((uint8_t)v155 << 8);
            v4 = a3[5];
            LOBYTE(v152) = a3[6];
            a3 += 5;
LABEL_19:
            if ( a2 != LODWORD(v154) )
            {
              v157[0] = *(uint32_t *)a2;
              v157[1] = *(uint32_t *)(a2 + 4);
              v157[2] = *(uint32_t *)(a2 + 8);
              v157[3] = *(uint32_t *)(a2 + 12);
              v158 = *(uint32_t *)(a2 + 16);
            }
            LOBYTE(v153) = a3[3];
            a2 = LODWORD(v154);
            v24 = a3[2];
            v7 = v4;
            v6 = (uint8_t)v152;
            break;
          default:
            abort();
        }
      }
      LOBYTE(v156) = v24;
      LOBYTE(v155) = (uint8_t)(uintptr_t)v153;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppKDopGeometriesVirtualMachine::queryMopp  (binary VA: 0x181aaf0)
// Original: hkpMoppKDopGeometriesVirtualMachine::queryMopp
// ----------------------------------------------------------------------------
void hkpMoppKDopGeometriesVirtualMachine::queryMopp(hkpMoppKDopGeometriesVirtualMachine::Self *a1, int a2, uint32_t *a3, int a4)
{
  float v4; // xmm2_4
  char *v5;
  float v6; // xmm2_4
  char *v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  typedef uint8_t *_g4_t_v11;
  typedef uint32_t _g4_t_v12[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v12[0] = 0;
  v12[1] = 0;
  *((uint32_t *)a1 + 16) = a4;
  v12[2] = 0;
  v4 = 1.0 / *(float *)(a2 + 28);
  v5 = (char *)a1 + 68;
  *((float *)a1 + 4) = v4;
  *((uint32_t *)a1 + 8) = *(uint32_t *)(a2 + 16);
  *((uint32_t *)a1 + 9) = *(uint32_t *)(a2 + 20);
  *((uint32_t *)a1 + 10) = *(uint32_t *)(a2 + 24);
  *((uint32_t *)a1 + 11) = *(uint32_t *)(a2 + 28);
  *((uint8_t *)a1 + 192) = 0;
  *((uint32_t *)a1 + 44) = *a3;
  *((uint32_t *)a1 + 45) = a3[1];
  *((uint32_t *)a1 + 46) = a3[2];
  *((uint32_t *)a1 + 47) = a3[3];
  v12[3] = 0;
  v6 = v4 * 16777216.0;
  v12[4] = 0;
  *((uint32_t *)a1 + 12) = -1;
  *((uint32_t *)a1 + 43) = 0;
  v7 = (char *)a1 + 72;
  v8 = 0;
  v9 = (float)-v6 - v6;
  v10 = v6 + v6;
  do
  {
    while ( 1 )
    {
      if ( v8 <= 2 )
      {
        *(float *)&v5[8 * v8] = v9;
        *(float *)&v7[8 * v8] = v10;
        goto LABEL_3;
      }
      if ( v8 > 8 )
        break;
      *(float *)&v5[8 * v8] = v9 * 1.4142135f;
      *(float *)&v7[8 * v8] = v10 * 1.4142135f;
LABEL_3:
      if ( ++v8 == 13 )
        goto LABEL_7;
    }
    *(float *)&v5[8 * v8] = v9 * 1.7320508f;
    *(float *)&v7[8 * v8++] = v10 * 1.7320508f;
  }
  while ( v8 != 13 );
LABEL_7:
  v11 = *(uint8_t **)(a2 + 32);
  v12[5] = 0;
  hkpMoppKDopGeometriesVirtualMachine::queryMoppKDopGeometriesRecurse(a1, (int)(uintptr_t)(v12), v11);
}


