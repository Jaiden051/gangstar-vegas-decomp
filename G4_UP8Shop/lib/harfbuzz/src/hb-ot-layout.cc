// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd88a0):
//   F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-layout.cc
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x12cd9d0 .. 0x12ceb8a (4538 bytes)
// Symbol:               sub_12CD9D0
// Demangled:            sub_12CD9D0
// ============================================================================
uint32_t (*sub_12CD9D0(
        uint32_t *a1,
        int a2,
        int a3,
        uint32_t *a4))(OT::PosLookup *__hidden this, OT::hb_apply_context_t *, unsigned int)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t (*result)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int);
  uint16_t *v9;
  unsigned int v10;
  uint8_t *v11;
  int16_t v12;
  int v13;
  unsigned int v14;
  unsigned int *v15;
  unsigned int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  uint8_t v22;
  int16_t v23;
  unsigned int v24;
  uint8_t *v25;
  uint16_t v26;
  uint8_t *v27;
  uint8_t *v28;
  OT::PairPosFormat2 *v29;
  char v30;
  int16_t v31;
  OT::Coverage *v32;
  uint8_t *v33;
  int16_t v34;
  int16_t v35;
  int v36;
  uint8_t *v37;
  bool v38;
  uint8_t *v39;
  char v40;
  int16_t v41;
  OT::Coverage *v42;
  uint8_t *v43;
  int16_t v44;
  int16_t v45;
  int v46;
  uint8_t *v47;
  uint8_t *v48;
  int v49;
  OT::Coverage *v50;
  OT::Coverage *v51;
  char v52;
  unsigned int v53;
  int16_t v54;
  int16_t v55;
  int v56;
  OT::Coverage *v57;
  OT::Coverage *v58;
  int v59;
  int v60;
  uint8_t *v61;
  int16_t v62;
  uint8_t *v63;
  int v64;
  OT::Coverage *v65;
  OT::Coverage *v66;
  int coverage;
  OT::Coverage *v68;
  int v69;
  int16_t v70;
  int16_t v71;
  OT::Coverage *v72;
  int v73;
  OT::ClassDef *v74;
  uint8_t *v75;
  uint16_t v76;
  uint8_t *v77;
  int16_t v78;
  uint8_t *v79;
  int v80;
  OT::Coverage *v81;
  int v82;
  int16_t v83;
  int16_t v84;
  OT::Coverage *v85;
  int v86;
  uint8_t *v87;
  OT::ClassDef *v88;
  uint8_t *v89;
  uint8_t *v90;
  uint16_t v91;
  uint8_t *v92;
  uint8_t *v93;
  int v94;
  int v95;
  OT::Coverage *v96;
  OT::Coverage *v97;
  uint8_t *v98;
  uint8_t *v99;
  uint8_t *v100;
  uint8_t *v101;
  uint8_t *v102;
  uint8_t *v103;
  uint8_t *v104;
  uint8_t *v105;
  uint8_t *v106;
  uint8_t *v107;
  uint8_t *v108;
  uint8_t *v109;
  uint8_t *v110;
  uint8_t *v111;
  uint8_t *v112;
  uint8_t *v113;
  uint8_t *v114;
  int v115;
  int v116;
  int16_t v117;
  uint16_t v118;
  uint8_t *v119;
  int v120;
  char v121;
  int v122;
  unsigned int v123;
  int v124;
  int v125;
  int v126;
  uint8_t *v127;
  OT::ClassDef *v128;
  int v129;
  uint32_t *v130;
  unsigned int v131;
  unsigned int v132;
  unsigned int v133;
  uint8_t *v134;
  unsigned int v135;
  int v136;
  uint8_t *v137;
  int v138;
  int v139;
  unsigned int v140;
  unsigned int v141;
  int v142;
  int (*v143)(int, int);
  uint32_t *v144;
  uint32_t *v145;
  OT::ClassDef *v146;
  uint8_t *v147;
  unsigned int v148;
  unsigned int v149;
  int16_t v150;
  uint32_t *v151;
  int v152;
  int (*v153)(int, int);
  uint8_t *v154;
  int v155;
  uint8_t *v156;
  int v157;
  int v158;
  int v159;
  int v160;
  uint32_t *v161;
  int v162;
  int v163;
  char v164;
  uint32_t (*v165)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int);
  int v166;
  int v167;
  int v168;
  bool v169;
  int v170;

  v158 = 1;
  v160 = *(uint32_t *)(a3 + 52);
  v4 = *(uint32_t **)(v160 + 72);
  v5 = v4[5];
  v116 = v4[9];
  v165 = nullptr;
  v161 = a4;
  v163 = 1;
  v164 = 1;
  v166 = 8;
  v167 = 0;
  v122 = v5;
  v162 = a4[12];
  v6 = v4[3];
  v159 = a3;
  v168 = v6;
  v7 = a1[224];
  result = OT::PosLookup::apply_recurse_func;
  v169 = *(uint8_t *)(v6 + 5) + (*(uint8_t *)(v6 + 4) << 8) != 0;
  v170 = 0;
  v165 = OT::PosLookup::apply_recurse_func;
  if ( v7 != 0 )
  {
    v123 = 0;
    v115 = 0;
    while ( 1 )
    {
      v120 = 8 * v115 + a1[226];
      if ( v123 < *(uint32_t *)v120 )
        break;
LABEL_30:
      if ( *(uint32_t *)(v120 + 4) != 0 )
      {
        sub_12A8480(a4);
        result = (uint32_t (*)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))(*(int (**)(int, int, uint32_t *))(v120 + 4))(a2, a3, a4);
      }
      if ( (unsigned int)++v115 >= a1[224] )
        return result;
    }
    v129 = 8 * v123;
    while ( 1 )
    {
      v9 = (uint16_t *)(a1[148] + v129);
      v10 = *v9;
      v163 = *((uint32_t *)v9 + 1);
      v164 = *(uint8_t *)(a1[148] + v129 + 2) & 1;
      v151 = (uint32_t *)(v116 + 12 * v10);
      v11 = (uint8_t *)((uint16_t)(*(uint8_t *)(v122 + 9) + (*(uint8_t *)(v122 + 8) << 8))
                              + v122);
      if ( *(uint8_t *)(v122 + 9) + (*(uint8_t *)(v122 + 8) << 8) == 0 )
        v11 = (uint8_t *)&unk_2116E00;
      if ( v10 < (uint16_t)(v11[1] + (*v11 << 8)) )
      {
        v61 = &v11[2 * v10];
        v62 = v61[3];
        v63 = &v11[(uint16_t)(v62 + (v61[2] << 8))];
        if ( v62 + (v61[2] << 8) == 0 )
          v63 = (uint8_t *)&unk_2116E00;
        v137 = v63;
      }
      else
      {
        v137 = (uint8_t *)&unk_2116E00;
      }
      v152 = (int)v161;
      result = (uint32_t (*)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))v161[22];
      if ( result != nullptr && v163 != 0 )
      {
        v12 = v137[3];
        v13 = (uint16_t)(v12 + (v137[2] << 8));
        if ( (v12 & 0x10) != 0 )
          v13 += ((v137[2 * (uint16_t)(v137[5] + (v137[4] << 8)) + 6] << 8)
                + v137[2 * (uint16_t)(v137[5] + (v137[4] << 8)) + 7]) << 16;
        v167 = v13;
        v14 = 0;
        v121 = 0;
        v161[21] = 0;
LABEL_14:
        while ( v14 < (unsigned int)result )
        {
          v15 = (unsigned int *)(*(uint32_t *)(v152 + 100) + 20 * v14);
          v16 = *v15;
          if ( ((1 << (*v15 >> 4)) & *v151) != 0
            && ((1 << v16) & v151[1]) != 0
            && ((1 << (v16 >> 9)) & v151[2]) != 0
            && (v163 & v15[1]) != 0
            && (uint8_t)OT::hb_apply_context_t::check_glyph_property(&v158, v161[25] + 20 * v161[21], v167) != 0 )
          {
            v150 = (*v137 << 8) + v137[1];
            v22 = v137[5];
            v23 = v137[4];
            if ( (v23 << 8) + v22 != 0 )
            {
              v24 = 0;
              v138 = (uint16_t)((v23 << 8) + v22) - 1;
              v25 = v137;
              while ( 1 )
              {
                v26 = (v23 << 8) + v22;
                v27 = &v25[2 * v24 + 6];
                if ( v24 >= v26 )
                  v27 = (uint8_t *)&unk_2116E00;
                v28 = &v25[(uint16_t)(v27[1] + (*v27 << 8))];
                if ( v27[1] + (*v27 << 8) == 0 )
                  v28 = (uint8_t *)&unk_2116E00;
                switch ( v150 )
                {
                  case 1:
                    v55 = v28[1] + (*v28 << 8);
                    if ( v55 == 1 )
                    {
                      v145 = v161;
                      v126 = 20 * v161[21];
                      v110 = v25;
                      v64 = (uint16_t)(v28[3] + (v28[2] << 8));
                      v38 = v64 == 0;
                      v65 = (OT::Coverage *)&v28[v64];
                      v66 = (OT::Coverage *)&unk_2116E00;
                      if ( !v38 )
                        v66 = v65;
                      coverage = OT::Coverage::get_coverage(v66, *(uint32_t *)(v161[25] + 20 * v161[21]));
                      v25 = v110;
                      if ( coverage != -1 )
                      {
                        OT::ValueFormat::apply_value(v28 + 4, v159, v162, v28, v28 + 6, v145[27] + v126);
                        ++v145[21];
                        v121 = 1;
                        v14 = *(uint32_t *)(v152 + 84);
                        result = *(uint32_t (**)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))(v152 + 88);
                        goto LABEL_14;
                      }
                    }
                    else if ( v55 == 2 )
                    {
                      v144 = v161;
                      v125 = 20 * v161[21];
                      v105 = v25;
                      v56 = (uint16_t)(v28[3] + (v28[2] << 8));
                      v38 = v56 == 0;
                      v57 = (OT::Coverage *)&v28[v56];
                      v58 = (OT::Coverage *)&unk_2116E00;
                      if ( !v38 )
                        v58 = v57;
                      v131 = OT::Coverage::get_coverage(v58, *(uint32_t *)(v161[25] + 20 * v161[21]));
                      v25 = v105;
                      if ( v131 != -1 && v131 < (uint16_t)(v28[7] + (v28[6] << 8)) )
                      {
                        v59 = _popcountsi2((uint16_t)(v28[5] + (v28[4] << 8)));
                        OT::ValueFormat::apply_value(
                          v28 + 4,
                          v159,
                          v162,
                          v28,
                          &v28[2 * v131 * v59 + 8],
                          v144[27] + v125);
                        ++v144[21];
                        v121 = 1;
                        v14 = *(uint32_t *)(v152 + 84);
                        result = *(uint32_t (**)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))(v152 + 88);
                        goto LABEL_14;
                      }
                    }
                    goto LABEL_47;
                  case 2:
                    v54 = v28[1] + (*v28 << 8);
                    if ( v54 == 1 )
                    {
                      v109 = v25;
                      v30 = OT::PairPosFormat1::apply((OT::PairPosFormat1 *)v28, (OT::hb_apply_context_t *)&v158);
                      v25 = v109;
                    }
                    else
                    {
                      if ( v54 != 2 )
                        goto LABEL_47;
                      v104 = v25;
                      v30 = OT::PairPosFormat2::apply((OT::PairPosFormat2 *)v28, (OT::hb_apply_context_t *)&v158);
                      v25 = v104;
                    }
                    goto LABEL_46;
                  case 3:
                    if ( v28[1] + (*v28 << 8) != 1 )
                      goto LABEL_47;
                    v108 = v25;
                    v30 = OT::CursivePosFormat1::apply((OT::CursivePosFormat1 *)v28, (OT::hb_apply_context_t *)&v158);
                    v25 = v108;
                    goto LABEL_46;
                  case 4:
                    if ( v28[1] + (*v28 << 8) != 1 )
                      goto LABEL_47;
                    v130 = v161;
                    v142 = v161[21];
                    v102 = v25;
                    v49 = (uint16_t)(v28[3] + (v28[2] << 8));
                    v38 = v49 == 0;
                    v50 = (OT::Coverage *)&v28[v49];
                    v51 = (OT::Coverage *)&unk_2116E00;
                    if ( !v38 )
                      v51 = v50;
                    v124 = OT::Coverage::get_coverage(v51, *(uint32_t *)(v161[25] + 20 * v142));
                    v25 = v102;
                    if ( v124 == -1 )
                      goto LABEL_47;
                    sub_12C7D30(v142, 1, 0);
                    v155 = 8;
                    v25 = v102;
                    while ( 2 )
                    {
                      v103 = v25;
                      v52 = sub_12CBDE0((unsigned int *)&v153);
                      v25 = v103;
                      if ( v52 == 0 )
                        goto LABEL_47;
                      v143 = v153;
                      v53 = v130[25] + 20 * (uint32_t)v153;
                      if ( (*(uint8_t *)(v53 + 14) & 0x10) == 0 && (*(uint8_t *)(v53 + 14) & 0xF) != 0 )
                      {
                        ++v157;
                        continue;
                      }
                      break;
                    }
                    v135 = *(uint32_t *)v53;
                    v95 = (uint16_t)(v28[5] + (v28[4] << 8));
                    v38 = v95 == 0;
                    v96 = (OT::Coverage *)&v28[v95];
                    v97 = (OT::Coverage *)&unk_2116E00;
                    if ( !v38 )
                      v97 = v96;
                    v136 = OT::Coverage::get_coverage(v97, v135);
                    v25 = v103;
                    if ( v136 == -1 )
                      goto LABEL_47;
                    v98 = &v28[(uint16_t)(v28[11] + (v28[10] << 8))];
                    if ( v28[11] + (v28[10] << 8) == 0 )
                      v98 = (uint8_t *)&unk_2116E00;
                    v30 = sub_12D38B0(v161, v124, v136, v98, (uint16_t)(v28[7] + (v28[6] << 8)), v143);
                    v25 = v103;
                    goto LABEL_46;
                  case 5:
                    if ( v28[1] + (*v28 << 8) != 1 )
                      goto LABEL_47;
                    v107 = v25;
                    v30 = OT::MarkLigPosFormat1::apply((OT::MarkLigPosFormat1 *)v28, (OT::hb_apply_context_t *)&v158);
                    v25 = v107;
                    goto LABEL_46;
                  case 6:
                    if ( v28[1] + (*v28 << 8) != 1 )
                      goto LABEL_47;
                    v106 = v25;
                    v30 = OT::MarkMarkPosFormat1::apply((OT::MarkMarkPosFormat1 *)v28, (OT::hb_apply_context_t *)&v158);
                    v25 = v106;
                    goto LABEL_46;
                  case 7:
                    v41 = v28[1] + (*v28 << 8);
                    switch ( v41 )
                    {
                      case 2:
                        v132 = *(uint32_t *)(v161[25] + 20 * v161[21]);
                        v112 = v25;
                        v72 = (OT::Coverage *)&v28[(uint16_t)(v28[3] + (v28[2] << 8))];
                        if ( v28[3] + (v28[2] << 8) == 0 )
                          v72 = (OT::Coverage *)&unk_2116E00;
                        v73 = OT::Coverage::get_coverage(v72, v132);
                        v25 = v112;
                        if ( v73 != -1 )
                        {
                          v74 = (OT::ClassDef *)&v28[(uint16_t)(v28[5] + (v28[4] << 8))];
                          if ( v28[5] + (v28[4] << 8) == 0 )
                            v74 = (OT::ClassDef *)&unk_2116E00;
                          v146 = v74;
                          v133 = OT::ClassDef::get_class(v74, v132);
                          v75 = &v28[2 * v133 + 8];
                          if ( v133 >= (uint16_t)(v28[7] + (v28[6] << 8)) )
                            v75 = (uint8_t *)&unk_2116E00;
                          v76 = (*v75 << 8) + v75[1];
                          v153 = (int (*)(int, int))sub_12CB1B0;
                          v77 = &v28[v76];
                          if ( v76 == 0 )
                            v77 = (uint8_t *)&unk_2116E00;
                          v154 = (uint8_t *)v146;
                          v30 = OT::RuleSet::apply(v77, &v158, &v153);
                          v25 = v112;
                          goto LABEL_46;
                        }
                        break;
                      case 3:
                        v111 = v25;
                        v68 = (OT::Coverage *)&v28[(uint16_t)(v28[7] + (v28[6] << 8))];
                        if ( v28[7] + (v28[6] << 8) == 0 )
                          v68 = (OT::Coverage *)&unk_2116E00;
                        v69 = OT::Coverage::get_coverage(v68, *(uint32_t *)(v161[25] + 20 * v161[21]));
                        v25 = v111;
                        if ( v69 != -1 )
                        {
                          v70 = v28[3];
                          v71 = v28[2] << 8;
                          v154 = v28;
                          v153 = (int (*)(int, int))sub_12CB400;
                          v30 = sub_12CBC20(
                                  v28 + 8,
                                  (uint16_t)(v28[5] + (v28[4] << 8)),
                                  &v28[2 * (uint16_t)(v70 + v71) + 6],
                                  &v153);
                          v25 = v111;
                          goto LABEL_46;
                        }
                        break;
                      case 1:
                        v101 = v25;
                        v42 = (OT::Coverage *)&v28[(uint16_t)(v28[3] + (v28[2] << 8))];
                        if ( v28[3] + (v28[2] << 8) == 0 )
                          v42 = (OT::Coverage *)&unk_2116E00;
                        v141 = OT::Coverage::get_coverage(v42, *(uint32_t *)(v161[25] + 20 * v161[21]));
                        v25 = v101;
                        if ( v141 != -1 )
                        {
                          v43 = &v28[2 * v141 + 6];
                          if ( v141 >= (uint16_t)((v28[4] << 8) + v28[5]) )
                            v43 = (uint8_t *)&unk_2116E00;
                          v44 = *v43;
                          v45 = v43[1];
                          v154 = nullptr;
                          v46 = (uint16_t)((v44 << 8) + v45);
                          v47 = &v28[v46];
                          v38 = v46 == 0;
                          v48 = (uint8_t *)&unk_2116E00;
                          v153 = sub_12C7170;
                          if ( !v38 )
                            v48 = v47;
                          v30 = OT::RuleSet::apply(v48, &v158, &v153);
                          v25 = v101;
                          goto LABEL_46;
                        }
                        break;
                      default:
                        break;
                    }
                    goto LABEL_47;
                  case 8:
                    v31 = v28[1] + (*v28 << 8);
                    switch ( v31 )
                    {
                      case 2:
                        v148 = *(uint32_t *)(v161[25] + 20 * v161[21]);
                        v114 = v25;
                        v85 = (OT::Coverage *)&v28[(uint16_t)(v28[3] + (v28[2] << 8))];
                        if ( v28[3] + (v28[2] << 8) == 0 )
                          v85 = (OT::Coverage *)&unk_2116E00;
                        v86 = OT::Coverage::get_coverage(v85, v148);
                        v25 = v114;
                        if ( v86 == -1 )
                          break;
                        v87 = &v28[(uint16_t)(v28[5] + (v28[4] << 8))];
                        if ( v28[5] + (v28[4] << 8) == 0 )
                          v87 = (uint8_t *)&unk_2116E00;
                        v134 = v87;
                        v88 = (OT::ClassDef *)&v28[(uint16_t)(v28[7] + (v28[6] << 8))];
                        if ( v28[7] + (v28[6] << 8) == 0 )
                          v88 = (OT::ClassDef *)&unk_2116E00;
                        v128 = v88;
                        v89 = &v28[(uint16_t)(v28[9] + (v28[8] << 8))];
                        if ( v28[9] + (v28[8] << 8) == 0 )
                          v89 = (uint8_t *)&unk_2116E00;
                        v119 = v89;
                        v149 = OT::ClassDef::get_class(v128, v148);
                        v90 = &v28[2 * v149 + 12];
                        if ( v149 >= (uint16_t)(v28[11] + (v28[10] << 8)) )
                          v90 = (uint8_t *)&unk_2116E00;
                        v91 = (*v90 << 8) + v90[1];
                        v154 = v134;
                        v92 = &v28[v91];
                        v38 = v91 == 0;
                        v93 = (uint8_t *)&unk_2116E00;
                        if ( !v38 )
                          v93 = v92;
                        v153 = (int (*)(int, int))sub_12CB1B0;
                        v155 = (int)v128;
                        v156 = v119;
                        v30 = OT::ChainRuleSet::apply(v93, &v158, &v153);
                        v25 = v114;
                        goto LABEL_46;
                      case 3:
                        v147 = &v28[2 * (uint16_t)(v28[3] + (v28[2] << 8)) + 4];
                        v117 = v28[2 * (uint16_t)(v28[3] + (v28[2] << 8)) + 5];
                        v78 = *v147 << 8;
                        v38 = v117 + v78 == 0;
                        v118 = v117 + v78;
                        v79 = (uint8_t *)&unk_2116E00;
                        if ( !v38 )
                          v79 = &v28[2 * (uint16_t)(v28[3] + (v28[2] << 8)) + 6];
                        v113 = v25;
                        v80 = (uint16_t)((*v79 << 8) + v79[1]);
                        v81 = (OT::Coverage *)&v28[v80];
                        if ( v80 == 0 )
                          v81 = (OT::Coverage *)&unk_2116E00;
                        v82 = OT::Coverage::get_coverage(v81, *(uint32_t *)(v161[25] + 20 * v161[21]));
                        v25 = v113;
                        if ( v82 == -1 )
                          break;
                        v83 = v147[2 * v118 + 3];
                        v84 = v147[2 * v118 + 2] << 8;
                        v154 = v28;
                        v155 = (int)v28;
                        v156 = v28;
                        v127 = &v147[2 * v118 + 4 + 2 * (uint16_t)(v83 + v84)];
                        v153 = (int (*)(int, int))sub_12CB400;
                        v30 = sub_12CC170(
                                v28 + 4,
                                (uint16_t)((*v147 << 8) + v147[1]),
                                v147 + 4,
                                (uint16_t)((v147[2 * v118 + 2] << 8) + v147[2 * v118 + 3]),
                                &v147[2 * v118 + 4],
                                (uint16_t)((*v127 << 8) + v127[1]),
                                v127 + 2,
                                &v153);
                        v25 = v113;
LABEL_46:
                        if ( v30 != 0 )
                          goto LABEL_60;
                        break;
                      case 1:
                        v100 = v25;
                        v32 = (OT::Coverage *)&v28[(uint16_t)(v28[3] + (v28[2] << 8))];
                        if ( v28[3] + (v28[2] << 8) == 0 )
                          v32 = (OT::Coverage *)&unk_2116E00;
                        v140 = OT::Coverage::get_coverage(v32, *(uint32_t *)(v161[25] + 20 * v161[21]));
                        v25 = v100;
                        if ( v140 != -1 )
                        {
                          v33 = &v28[2 * v140 + 6];
                          if ( v140 >= (uint16_t)((v28[4] << 8) + v28[5]) )
                            v33 = (uint8_t *)&unk_2116E00;
                          v34 = *v33;
                          v35 = v33[1];
                          v154 = nullptr;
                          v36 = (uint16_t)((v34 << 8) + v35);
                          v37 = &v28[v36];
                          v38 = v36 == 0;
                          v39 = (uint8_t *)&unk_2116E00;
                          v153 = sub_12C7170;
                          if ( !v38 )
                            v39 = v37;
                          v155 = 0;
                          v156 = nullptr;
                          v40 = OT::ChainRuleSet::apply(v39, &v158, &v153);
                          v25 = v100;
                          if ( v40 != 0 )
                          {
LABEL_60:
                            v121 = 1;
                            v14 = *(uint32_t *)(v152 + 84);
                            result = *(uint32_t (**)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))(v152 + 88);
                            goto LABEL_14;
                          }
                        }
                        break;
                      default:
                        break;
                    }
LABEL_47:
                    if ( v24 == v138 )
                      goto LABEL_19;
                    v23 = v25[4];
                    ++v24;
                    v22 = v25[5];
                    break;
                  case 9:
                    if ( v28[1] + (*v28 << 8) != 1 )
                    {
                      v139 = 0;
LABEL_44:
                      v29 = (OT::PairPosFormat2 *)&unk_2116E00;
                      goto LABEL_45;
                    }
                    v139 = (uint16_t)(v28[3] + (v28[2] << 8));
                    v60 = (v28[6] << 8) + (v28[5] << 16) + (v28[4] << 24) + v28[7];
                    if ( v60 == 0 )
                      goto LABEL_44;
                    v29 = (OT::PairPosFormat2 *)&v28[v60];
LABEL_45:
                    v99 = v25;
                    v30 = OT::PosLookupSubTable::dispatch<OT::hb_apply_context_t>(
                            v29,
                            (OT::hb_apply_context_t *)&v158,
                            v139);
                    v25 = v99;
                    goto LABEL_46;
                  default:
                    goto LABEL_47;
                }
              }
            }
          }
LABEL_19:
          if ( *(uint8_t *)(v152 + 81) != 0 )
          {
            if ( *(uint32_t *)(v152 + 104) == *(uint32_t *)(v152 + 100)
              && (v94 = *(uint32_t *)(v152 + 92)) == *(uint32_t *)(v152 + 84) )
            {
              v19 = *(uint32_t *)(v152 + 92);
              v20 = v152;
              *(uint32_t *)(v152 + 92) = v94 + 1;
            }
            else
            {
              if ( (uint8_t)sub_12A7DE0(v152, 1, 1) == 0 )
              {
                v14 = *(uint32_t *)(v152 + 84);
                v21 = v152;
                goto LABEL_25;
              }
              v17 = (uint32_t *)(*(uint32_t *)(v152 + 104) + 20 * *(uint32_t *)(v152 + 92));
              v18 = (uint32_t *)(*(uint32_t *)(v152 + 100) + 20 * *(uint32_t *)(v152 + 84));
              *v17 = *v18;
              v17[1] = v18[1];
              v17[2] = v18[2];
              v17[3] = v18[3];
              v17[4] = v18[4];
              v19 = *(uint32_t *)(v152 + 84);
              ++*(uint32_t *)(v152 + 92);
              v20 = v152;
            }
          }
          else
          {
            v19 = *(uint32_t *)(v152 + 84);
            v20 = v152;
          }
          v14 = v19 + 1;
          v21 = v20;
          *(uint32_t *)(v20 + 84) = v14;
LABEL_25:
          result = *(uint32_t (**)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))(v21 + 88);
        }
        if ( v121 != 0 && *(uint32_t *)(v152 + 100) != *(uint32_t *)(v152 + 104) )
          result = (uint32_t (*)(OT::PosLookup *__hidden, OT::hb_apply_context_t *, unsigned int))__assert2("F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-layout.cc", 876, "bool apply_string(OT::hb_apply_context_t*, const typename Proxy::Lookup&, const hb_ot_layout_lookup_accelerator_t&) [with Proxy = GPOSProxy, typename Proxy::Lookup = OT::PosLookup]", "!buffer->has_separate_output ()");
      }
      ++v123;
      v129 += 8;
      if ( v123 >= *(uint32_t *)v120 )
        goto LABEL_30;
    }
  }
  return result;
}
