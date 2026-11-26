// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd716c):
//   ../../../../../lib/rapidjson/reader.h
// Referenced by 6 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1251120 .. 0x12522bc (4508 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseStringILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
/*
int rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
        unsigned int ***a1,
        uint8_t **a2,
        int a3)
{
  uint8_t *v3;
  uint8_t *v4;
  uint8_t *v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int *v10;
  unsigned int v11;
  uint8_t v12;
  char v13;
  uint8_t v14;
  int v15;
  uint8_t v16;
  int v17;
  int v18;
  uint8_t v19;
  int v20;
  int v21;
  uint8_t v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  uint8_t *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  char *v36;
  char *v37;
  size_t v38;
  char *v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int *v43;
  unsigned int v44;
  uint8_t *v45;
  int v46;
  unsigned int **v47;
  unsigned int v48;
  unsigned int *v49;
  unsigned int v50;
  unsigned int *v51;
  unsigned int *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int **v55;
  int v56;
  unsigned int **v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int *v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int *v63;
  char *v64;
  size_t v65;
  unsigned int **v66;
  int result;
  int *v68;
  uint32_t *v69;
  uint32_t *v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int *v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int *v77;
  unsigned int v78;
  unsigned int *v79;
  size_t v80;
  const char *v81;
  unsigned int v82;
  unsigned int **v83;
  int v84;
  unsigned int **v85;
  int v86;
  char v87;
  char v88;
  char v89;
  int v90;
  int v91;
  unsigned int v92;
  int v93;
  unsigned int **v94;
  int v95;
  char v96;
  unsigned int v97;
  int v98;
  int v99;
  unsigned int v100;
  unsigned int **v101;
  char v102;
  char v103;
  char v104;
  unsigned int **v105;
  unsigned int **v106;
  unsigned int v107;
  uint32_t *v108;
  uint32_t *v109;
  uint32_t *v110;
  unsigned int v111;
  unsigned int v112;
  uint8_t *v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  int v118;
  unsigned int **v119;
  unsigned int **v120;
  unsigned int **v121;
  unsigned int v122;
  int v123;
  uint8_t *v124;
  char *v125;
  unsigned int v126;
  unsigned int **v127;
  size_t v128;
  unsigned int v129;
  char *v130;
  unsigned int v131;
  char *v132;
  unsigned int v133;
  int v134;
  uint8_t *v135;
  unsigned int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  uint8_t *v140;
  size_t v141;
  uint8_t v142;
  uint8_t v143;
  size_t v144;
  size_t v145;
  unsigned int v146;
  int v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int **v151;
  uint8_t v152;
  uint8_t v153;
  unsigned int **v154;
  unsigned int **v155;
  size_t v156;
  unsigned int **v157;
  uint8_t v158;
  uint8_t *v159;
  unsigned int *v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int *v164;
  unsigned int v165;
  char src;
  char v167;
  char v168;
  char v169;
  int v170;

  v3 = *a2;
  v113 = a2[1];
  if ( **a2 != 34 )
    __assert2(
      "../../../../../lib/rapidjson/reader.h",
      529,
      "void rapidjson::GenericReader<Encoding, Allocator>::ParseString(Stream&, Handler&) [with unsigned int parseFlags ="
      " 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Handler = rapidjson::GenericDocument<rapidjson::"
      "UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "s.Peek () == '\\\"'");
  v4 = v3 + 1;
  v128 = 0;
  while ( 1 )
  {
    v158 = *v4;
    if ( *v4 != 92 )
      break;
LABEL_26:
    v12 = v4[1];
    v13 = rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)::escape[v12];
    if ( v13 != 0 )
    {
      v45 = a1[3];
      v46 = (int)(v45 + 1);
      if ( v45 + 1 >= (uint8_t *)a1[4] )
      {
        v145 = (size_t)a1[5];
        v118 = (int)a1[2];
        v140 = &v45[-v118];
        v47 = *a1;
        v48 = (unsigned int)&v45[-v118 + 1];
        if ( (unsigned int)(v140 + 1) < 2 * v145 )
          v48 = 2 * v145;
        v155 = (unsigned int **)v48;
        v121 = *a1;
        if ( v118 != 0 )
        {
          if ( v145 < v48 )
          {
            v160 = *v47;
            v133 = (*v47)[1];
            if ( (unsigned int *)v118 == (unsigned int *)((char *)*v47 + v133 - v145 + 12)
              && (v72 = v133 + ((v48 - v145 + 3) & 0xFFFFFFFC)) <= *v160 )
            {
              v160[1] = v72;
              if ( (v118 & 3) != 0 )
              {
                v96 = v13;
                __assert2(
                  "../../../../../lib/rapidjson/rapidjson.h",
                  294,
                  "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocato"
                  "r = rapidjson::CrtAllocator, size_t = unsigned int]",
                  "((uintptr_t) originalPtr & 3) == 0");
                v13 = v96;
              }
            }
            else
            {
              v126 = ((unsigned int)v155 + 3) & 0xFFFFFFFC;
              v49 = *v47;
              if ( v126 + v133 > *v160 )
              {
                v50 = (unsigned int)v121[1];
                if ( v126 >= v50 )
                  v50 = ((unsigned int)v155 + 3) & 0xFFFFFFFC;
                v87 = v13;
                v161 = v50;
                v51 = (unsigned int *)malloc(v50 + 12);
                v51[1] = 0;
                *v51 = v161;
                v160 = v51;
                v51[2] = (unsigned int)*v121;
                *v121 = v51;
                v49 = v51;
                v13 = v87;
              }
              v134 = (int)v49 + v49[1] + 12;
              if ( (v134 & 3) != 0 )
              {
                v88 = v13;
                __assert2(
                  "../../../../../lib/rapidjson/rapidjson.h",
                  267,
                  "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::C"
                  "rtAllocator, size_t = unsigned int]",
                  "((uintptr_t) buffer & 3) == 0");
                v13 = v88;
                v160 = *v121;
              }
              v160[1] += v126;
              if ( v134 == 0 )
              {
                v104 = v13;
                __assert2(
                  "../../../../../lib/rapidjson/rapidjson.h",
                  301,
                  "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocato"
                  "r = rapidjson::CrtAllocator, size_t = unsigned int]",
                  "newBuffer != 0");
                v13 = v104;
              }
              v89 = v13;
              v118 = (int)memcpy((void *)v134, (const void *)v118, v145);
              v13 = v89;
            }
          }
        }
        else
        {
          v150 = (v48 + 3) & 0xFFFFFFFC;
          v164 = *v47;
          v77 = v164;
          if ( v164[1] + v150 > *v164 )
          {
            v78 = (unsigned int)v121[1];
            if ( v150 >= v78 )
              v78 = (v48 + 3) & 0xFFFFFFFC;
            v102 = v13;
            v112 = v78;
            v79 = (unsigned int *)malloc(v78 + 12);
            v79[1] = 0;
            *v79 = v112;
            v164 = v79;
            v79[2] = (unsigned int)*v121;
            *v121 = v79;
            v77 = v79;
            v13 = v102;
          }
          v118 = (int)v77 + v164[1] + 12;
          if ( (v118 & 3) != 0 )
          {
            v103 = v13;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              267,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAl"
              "locator, size_t = unsigned int]",
              "((uintptr_t) buffer & 3) == 0");
            v13 = v103;
            v164 = *v121;
          }
          v164[1] += v150;
        }
        a1[2] = (unsigned int **)v118;
        v45 = &v140[v118];
        a1[5] = v155;
        a1[4] = (unsigned int **)((char *)v155 + v118);
        v46 = (int)&v140[v118 + 1];
      }
      a1[3] = (unsigned int **)v46;
      v4 += 2;
      *v45 = v13;
      ++v128;
    }
    else
    {
      if ( v12 != 117 )
      {
        v81 = "Unknown escape character";
LABEL_175:
        a1[16] = (unsigned int **)v81;
        v27 = *a2 - a2[1] - 1;
LABEL_47:
        a1[17] = (unsigned int **)v27;
        longjmp((struct __jmp_buf_tag *)(a1 + 6), 1);
      }
      v14 = v4[2];
      v159 = v4 + 3;
      v15 = (char)v14 - 48;
      if ( (uint8_t)(v14 - 48) > 9u )
      {
        v15 = (char)v14 - 55;
        if ( (uint8_t)(v14 - 65) > 5u )
        {
          if ( (uint8_t)(v14 - 97) > 5u )
            goto LABEL_177;
          v15 = (char)v14 - 87;
        }
      }
      v16 = v4[3];
      v159 = v4 + 4;
      v17 = (char)v16 + 16 * v15;
      v18 = v17 - 48;
      if ( (uint8_t)(v16 - 48) > 9u )
      {
        v18 = v17 - 55;
        if ( (uint8_t)(v16 - 65) > 5u )
        {
          if ( (uint8_t)(v16 - 97) > 5u )
            goto LABEL_177;
          v18 = v17 - 87;
        }
      }
      v19 = v4[4];
      v159 = v4 + 5;
      v20 = (char)v19 + 16 * v18;
      v21 = v20 - 48;
      if ( (uint8_t)(v19 - 48) > 9u )
      {
        v21 = v20 - 55;
        if ( (uint8_t)(v19 - 65) > 5u )
        {
          if ( (uint8_t)(v19 - 97) > 5u )
            goto LABEL_177;
          v21 = v20 - 87;
        }
      }
      v22 = v4[5];
      v159 = v4 + 6;
      v23 = (char)v22 + 16 * v21;
      v24 = v23 - 48;
      if ( (uint8_t)(v22 - 48) > 9u )
      {
        v24 = v23 - 55;
        if ( (uint8_t)(v22 - 65) > 5u )
        {
          if ( (uint8_t)(v22 - 97) > 5u )
            goto LABEL_177;
          v24 = v23 - 87;
        }
      }
      v25 = v24 - 55296;
      if ( v24 - 55296 <= 0x3FF )
      {
        v26 = v4 + 7;
        if ( v4[6] != 92 || (v26 = v4 + 8, v4[7] != 117) )
        {
          v27 = v26 - v113 - 2;
          a1[16] = (unsigned int **)"Missing the second \\u in surrogate pair";
          goto LABEL_47;
        }
        v142 = v4[8];
        v159 = v4 + 9;
        v28 = (char)v142 - 48;
        if ( (uint8_t)(v142 - 48) > 9u )
        {
          v28 = (char)v142 - 55;
          if ( (uint8_t)(v142 - 65) > 5u )
          {
            if ( (uint8_t)(v142 - 97) > 5u )
              goto LABEL_177;
            v28 = (char)v142 - 87;
          }
        }
        v152 = v4[9];
        v159 = v4 + 10;
        v29 = 16 * v28 + (char)v152;
        v30 = v29 - 48;
        if ( (uint8_t)(v152 - 48) > 9u )
        {
          v30 = v29 - 55;
          if ( (uint8_t)(v152 - 65) > 5u )
          {
            if ( (uint8_t)(v152 - 97) > 5u )
              goto LABEL_177;
            v30 = v29 - 87;
          }
        }
        v153 = v4[10];
        v159 = v4 + 11;
        v31 = (char)v153 + 16 * v30;
        v32 = v31 - 48;
        if ( (uint8_t)(v153 - 48) > 9u )
        {
          v32 = v31 - 55;
          if ( (uint8_t)(v153 - 65) > 5u )
          {
            if ( (uint8_t)(v153 - 97) > 5u )
              goto LABEL_177;
            v32 = v31 - 87;
          }
        }
        v159 = v4 + 12;
        v143 = v4[11];
        v33 = (char)v143 + 16 * v32;
        v34 = v33 - 48;
        if ( (uint8_t)(v143 - 48) > 9u )
        {
          v34 = v33 - 55;
          if ( (uint8_t)(v143 - 65) > 5u )
          {
            if ( (uint8_t)(v143 - 97) > 5u )
            {
LABEL_177:
              a1[16] = (unsigned int **)"Incorrect hex digit after \\u escape";
              v27 = v159 - v113 - 1;
              goto LABEL_47;
            }
            v34 = v33 - 87;
          }
        }
        v35 = v34 - 56320;
        if ( v35 > 0x3FF )
        {
          a1[16] = (unsigned int **)"The second \\u in surrogate pair is invalid";
          v27 = v159 - v113 - 2;
          goto LABEL_47;
        }
        v24 = (v35 | (v25 << 10)) + 0x10000;
      }
      if ( v24 > 0x7F )
      {
        if ( v24 > 0x7FF )
        {
          if ( v24 > 0xFFFF )
          {
            if ( v24 > 0x10FFFF )
            {
              v111 = v24;
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                394,
                "static rapidjson::UTF8<CharType>::Ch* rapidjson::UTF8<CharType>::Encode(rapidjson::UTF8<CharType>::Ch*, "
                "unsigned int) [with CharType = char, rapidjson::UTF8<CharType>::Ch = char]",
                "codepoint <= 0x10FFFF");
              v24 = v111;
            }
            v36 = (char *)&v170;
            src = (v24 >> 18) | 0xF0;
            v167 = (v24 >> 12) & 0x3F | 0x80;
            v169 = v24 & 0x3F | 0x80;
            v168 = (v24 >> 6) & 0x3F | 0x80;
          }
          else
          {
            v36 = &v169;
            src = (v24 >> 12) | 0xE0;
            v168 = v24 & 0x3F | 0x80;
            v167 = (v24 >> 6) & 0x3F | 0x80;
          }
        }
        else
        {
          v167 = v24 & 0x3F | 0x80;
          src = (v24 >> 6) | 0xC0;
          v36 = &v168;
        }
      }
      else
      {
        src = v24;
        v36 = &v167;
      }
      v37 = (char *)a1[3];
      v38 = v36 - &src;
      v39 = &v37[v38];
      if ( &v37[v38] >= (char *)a1[4] )
      {
        v40 = (int)a1[2];
        v144 = (size_t)a1[5];
        v125 = &v37[-v40];
        v41 = 2 * v144;
        v42 = (unsigned int)&v37[v38 - v40];
        if ( v42 >= 2 * v144 )
          v41 = v42;
        v154 = (unsigned int **)v41;
        v120 = *a1;
        if ( v40 != 0 )
        {
          if ( v41 > v144 )
          {
            v43 = *v120;
            v138 = (*v120)[1];
            v131 = v138 + 12;
            if ( (unsigned int *)v40 != (unsigned int *)((char *)*v120 + v138 + 12 - v144) )
            {
              v117 = *v43;
              goto LABEL_76;
            }
            v115 = v138 + ((v41 - v144 + 3) & 0xFFFFFFFC);
            v117 = *v43;
            if ( v115 > *v43 )
            {
LABEL_76:
              v82 = (v41 + 3) & 0xFFFFFFFC;
              if ( v82 + v138 > v117 )
              {
                v44 = (unsigned int)v120[1];
                if ( v82 >= v44 )
                  v44 = (v41 + 3) & 0xFFFFFFFC;
                v85 = a1[2];
                v139 = v44;
                v43 = (unsigned int *)malloc(v44 + 12);
                v43[1] = 0;
                *v43 = v139;
                v43[2] = (unsigned int)*v120;
                *v120 = v43;
                v138 = v43[1];
                v131 = v138 + 12;
                v40 = (int)v85;
              }
              v132 = (char *)v43 + v131;
              if ( ((uint8_t)v132 & 3) != 0 )
              {
                v86 = v40;
                __assert2(
                  "../../../../../lib/rapidjson/rapidjson.h",
                  267,
                  "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::C"
                  "rtAllocator, size_t = unsigned int]",
                  "((uintptr_t) buffer & 3) == 0");
                v40 = v86;
                v43 = *v120;
                v138 = (*v120)[1];
              }
              v43[1] = v138 + v82;
              if ( v132 == nullptr )
              {
                v99 = v40;
                __assert2(
                  "../../../../../lib/rapidjson/rapidjson.h",
                  301,
                  "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocato"
                  "r = rapidjson::CrtAllocator, size_t = unsigned int]",
                  "newBuffer != 0");
                v40 = v99;
              }
              v40 = (int)memcpy(v132, (const void *)v40, v144);
            }
            else
            {
              v43[1] = v115;
              if ( (v40 & 3) != 0 )
              {
                v91 = v40;
                __assert2(
                  "../../../../../lib/rapidjson/rapidjson.h",
                  294,
                  "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocato"
                  "r = rapidjson::CrtAllocator, size_t = unsigned int]",
                  "((uintptr_t) originalPtr & 3) == 0");
                v40 = v91;
              }
            }
          }
        }
        else
        {
          v74 = **a1;
          v149 = ((unsigned int)v154 + 3) & 0xFFFFFFFC;
          v75 = v74[1];
          if ( v75 + v149 > *v74 )
          {
            v76 = (unsigned int)v120[1];
            if ( v149 >= v76 )
              v76 = ((unsigned int)v154 + 3) & 0xFFFFFFFC;
            v100 = v76;
            v74 = (unsigned int *)malloc(v76 + 12);
            *v74 = v100;
            v74[1] = 0;
            v74[2] = (unsigned int)*v120;
            *v120 = v74;
            v75 = v74[1];
          }
          v40 = (int)v74 + v75 + 12;
          if ( (v40 & 3) != 0 )
          {
            v98 = (int)v74 + v75 + 12;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              267,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAl"
              "locator, size_t = unsigned int]",
              "((uintptr_t) buffer & 3) == 0");
            v40 = v98;
            v74 = *v120;
            v75 = (*v120)[1];
          }
          v74[1] = v149 + v75;
        }
        v37 = &v125[v40];
        a1[2] = (unsigned int **)v40;
        a1[5] = v154;
        a1[4] = (unsigned int **)((char *)v154 + v40);
        v39 = &v125[v40 + v38];
      }
      a1[3] = (unsigned int **)v39;
      memcpy(v37, &src, v38);
      v128 += v38;
      v4 = v159;
    }
  }
  while ( 1 )
  {
    ++v4;
    if ( v158 == 34 )
      break;
    if ( v158 == 0 )
    {
      a1[16] = (unsigned int **)"Lacks ending quotation before the end of string";
      v27 = *a2 - a2[1] - 1;
      goto LABEL_47;
    }
    if ( v158 <= 0x1Fu )
    {
      v81 = "Incorrect unescaped character in string";
      goto LABEL_175;
    }
    v5 = (uint8_t *)a1[3];
    v6 = (int)(v5 + 1);
    if ( v5 + 1 >= (uint8_t *)a1[4] )
    {
      v141 = (size_t)a1[5];
      v7 = (int)a1[2];
      v8 = 2 * v141;
      v124 = &v5[-v7];
      v9 = (unsigned int)&v5[-v7 + 1];
      if ( v9 >= 2 * v141 )
        v8 = v9;
      v151 = (unsigned int **)v8;
      v119 = *a1;
      if ( v7 != 0 )
      {
        if ( v8 > v141 )
        {
          v10 = *v119;
          v136 = (*v119)[1];
          v129 = v136 + 12;
          if ( (unsigned int *)v7 != (unsigned int *)((char *)*v119 + v136 + 12 - v141) )
          {
            v116 = *v10;
            goto LABEL_15;
          }
          v114 = v136 + ((v8 - v141 + 3) & 0xFFFFFFFC);
          v116 = *v10;
          if ( v114 > *v10 )
          {
LABEL_15:
            v165 = (v8 + 3) & 0xFFFFFFFC;
            if ( v165 + v136 > v116 )
            {
              v11 = (unsigned int)v119[1];
              if ( v165 >= v11 )
                v11 = (v8 + 3) & 0xFFFFFFFC;
              v83 = a1[2];
              v137 = v11;
              v10 = (unsigned int *)malloc(v11 + 12);
              v10[1] = 0;
              *v10 = v137;
              v10[2] = (unsigned int)*v119;
              *v119 = v10;
              v136 = v10[1];
              v129 = v136 + 12;
              v7 = (int)v83;
            }
            v130 = (char *)v10 + v129;
            if ( ((uint8_t)v130 & 3) != 0 )
            {
              v84 = v7;
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                267,
                "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::Crt"
                "Allocator, size_t = unsigned int]",
                "((uintptr_t) buffer & 3) == 0");
              v7 = v84;
              v10 = *v119;
              v136 = (*v119)[1];
            }
            v10[1] = v136 + v165;
            if ( v130 == nullptr )
            {
              v95 = v7;
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                301,
                "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator "
                "= rapidjson::CrtAllocator, size_t = unsigned int]",
                "newBuffer != 0");
              v7 = v95;
            }
            v7 = (int)memcpy(v130, (const void *)v7, v141);
          }
          else
          {
            v10[1] = v114;
            if ( (v7 & 3) != 0 )
            {
              v90 = v7;
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                294,
                "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator "
                "= rapidjson::CrtAllocator, size_t = unsigned int]",
                "((uintptr_t) originalPtr & 3) == 0");
              v7 = v90;
            }
          }
        }
      }
      else
      {
        v52 = **a1;
        v146 = ((unsigned int)v151 + 3) & 0xFFFFFFFC;
        v53 = v52[1];
        if ( v53 + v146 > *v52 )
        {
          v54 = (unsigned int)v119[1];
          if ( v146 >= v54 )
            v54 = ((unsigned int)v151 + 3) & 0xFFFFFFFC;
          v92 = v54;
          v52 = (unsigned int *)malloc(v54 + 12);
          *v52 = v92;
          v52[1] = 0;
          v52[2] = (unsigned int)*v119;
          *v119 = v52;
          v53 = v52[1];
        }
        v7 = (int)v52 + v53 + 12;
        if ( (v7 & 3) != 0 )
        {
          v93 = (int)v52 + v53 + 12;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          v7 = v93;
          v52 = *v119;
          v53 = (*v119)[1];
        }
        v52[1] = v146 + v53;
      }
      v5 = &v124[v7];
      a1[2] = (unsigned int **)v7;
      a1[5] = v151;
      a1[4] = (unsigned int **)((char *)v151 + v7);
      v6 = (int)&v124[v7 + 1];
    }
    a1[3] = (unsigned int **)v6;
    *v5 = v158;
    ++v128;
    v158 = *v4;
    if ( *v4 == 92 )
      goto LABEL_26;
  }
  v55 = a1[3];
  v135 = v4;
  v56 = (int)v55 + 1;
  if ( (unsigned int **)((char *)v55 + 1) >= a1[4] )
  {
    v57 = a1[2];
    v58 = 2 * (uint32_t)a1[5];
    v147 = (char *)v55 - (char *)v57;
    v59 = (char *)v55 - (char *)v57 + 1;
    v156 = (size_t)a1[5];
    if ( v59 >= v58 )
      v58 = v59;
    v162 = v58;
    v127 = *a1;
    if ( v57 != nullptr )
    {
      if ( v58 > (unsigned int)a1[5] )
      {
        v60 = *v127;
        v122 = (*v127)[1];
        if ( v57 == (unsigned int **)((char *)*v127 + v122 - v156 + 12)
          && (v80 = v122 + ((v162 - v156 + 3) & 0xFFFFFFFC)) <= *v60 )
        {
          v60[1] = v80;
          if ( ((uint8_t)v57 & 3) != 0 )
          {
            v105 = v57;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
            v57 = v105;
          }
        }
        else
        {
          v61 = (v162 + 3) & 0xFFFFFFFC;
          if ( v61 + v122 > *v60 )
          {
            v62 = (unsigned int)v127[1];
            v94 = a1[2];
            if ( v61 >= v62 )
              v62 = (v162 + 3) & 0xFFFFFFFC;
            v107 = v62;
            v63 = (unsigned int *)malloc(v62 + 12);
            v63[1] = 0;
            *v63 = v107;
            v63[2] = (unsigned int)*v127;
            *v127 = v63;
            v60 = v63;
            v57 = v94;
          }
          v123 = (int)v60 + v60[1] + 12;
          if ( (v123 & 3) != 0 )
          {
            v101 = v57;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              267,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAl"
              "locator, size_t = unsigned int]",
              "((uintptr_t) buffer & 3) == 0");
            v57 = v101;
            v60 = *v127;
          }
          v60[1] += v61;
          if ( v123 == 0 )
          {
            v106 = v57;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            v57 = v106;
          }
          v57 = (unsigned int **)memcpy((void *)v123, v57, v156);
        }
      }
    }
    else
    {
      v57 = (unsigned int **)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(
                               (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)*a1,
                               v58);
    }
    v55 = (unsigned int **)((char *)v57 + v147);
    a1[2] = v57;
    a1[5] = (unsigned int **)v162;
    a1[4] = (unsigned int **)((char *)v57 + v162);
    v56 = (int)v57 + v147 + 1;
  }
  a1[3] = (unsigned int **)v56;
  *(uint8_t *)v55 = 0;
  v64 = (char *)a1[3];
  v65 = v128 + 1;
  if ( v128 + 1 > v64 - (char *)a1[2] )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      83,
      "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = char, Allocator = rapidjson::MemoryPoolAllocator<>"
      ", size_t = unsigned int]",
      "GetSize () >= count * sizeof (T)");
    v64 = (char *)a1[3];
    v65 = v128 + 1;
  }
  v66 = (unsigned int **)&v64[-v65];
  a1[3] = v66;
  v157 = v66;
  v108 = *(uint32_t **)(a3 + 16);
  result = sub_124E160();
  v68 = (int *)result;
  v69 = v108;
  if ( result != 0 )
  {
    if ( v157 == nullptr )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1069,
        "void rapidjson::GenericValue<Encoding, Allocator>::SetStringRaw(const Ch*, rapidjson::SizeType, Allocator&) [wit"
        "h Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, "
        "Allocator>::Ch = char, rapidjson::SizeType = unsigned int]",
        "s != __null");
      v69 = v108;
    }
    v68[3] = 3145733;
    v70 = (uint32_t *)*v69;
    v163 = (v128 + 4) & 0xFFFFFFFC;
    v71 = *(uint32_t *)(*v69 + 4);
    if ( v71 + v163 > *(uint32_t *)*v69 )
    {
      v73 = v69[1];
      if ( v163 >= v73 )
        v73 = (v128 + 4) & 0xFFFFFFFC;
      v110 = v69;
      v97 = v73;
      v70 = malloc(v73 + 12);
      v70[1] = 0;
      *v70 = v97;
      v69 = v110;
      v70[2] = *v110;
      *v110 = v70;
      v71 = v70[1];
    }
    v148 = (int)v70 + v71 + 12;
    if ( (v148 & 3) != 0 )
    {
      v109 = v69;
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        267,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v70 = (uint32_t *)*v109;
      v71 = *(uint32_t *)(*v109 + 4);
    }
    v70[1] = v163 + v71;
    *v68 = v148;
    v68[1] = v128;
    memcpy((void *)v148, v157, v128);
    result = *v68;
    *(uint8_t *)(*v68 + v128) = 0;
  }
  *a2 = v135;
  a2[1] = v113;
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1252d10 .. 0x1253432 (1826 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE10ParseArrayILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
/*
void *rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
        int a1,
        int a2,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3)
{
  uint8_t *v3;
  char *v4;
  int v5;
  uint8_t *src;
  unsigned int v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int v10;
  uint8_t *i;
  uint8_t v12;
  uint8_t *v13;
  int v14;
  uint8_t v15;
  bool v16; // cc
  uint8_t *j;
  uint8_t v18;
  uint8_t v19;
  uint8_t *v20;
  int v21;
  int v22;
  uint8_t v23;
  uint8_t v24;
  int v25;
  int v26;
  unsigned int v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  unsigned int v32;
  int v33;
  void *result;
  uint8_t v35;
  uint8_t v36;
  uint8_t v37;
  uint8_t v38;
  int v39;
  uint8_t v40;
  uint8_t v41;
  uint8_t v42;
  int v43;
  uint8_t v44;
  uint8_t v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  size_t n;
  uint32_t *v57;
  size_t v58;
  unsigned int v59;
  size_t v60;
  int v61;
  unsigned int v62;
  unsigned int v63;
  char *dest;
  char *desta;
  unsigned int **v66;
  unsigned int v67;

  v3 = *(uint8_t **)a2;
  if ( **(uint8_t **)a2 != 91 )
  {
    __assert2(
      "../../../../../lib/rapidjson/reader.h",
      383,
      "void rapidjson::GenericReader<Encoding, Allocator>::ParseArray(Stream&, Handler&) [with unsigned int parseFlags = "
      "0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Handler = rapidjson::GenericDocument<rapidjson::U"
      "TF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "stream.Peek () == '['");
    v3 = *(uint8_t **)a2;
  }
  *(uint32_t *)a2 = v3 + 1;
  v4 = *((char **)a3 + 7);
  v5 = (int)(v4 + 16);
  if ( (unsigned int)(v4 + 16) >= *((uint32_t *)a3 + 8) )
  {
    src = *((uint8_t **)a3 + 6);
    n = *((uint32_t *)a3 + 9);
    v61 = v4 - src;
    v7 = 2 * n;
    v8 = v4 - src + 16;
    v66 = *((unsigned int ***)a3 + 4);
    if ( v8 >= 2 * n )
      v7 = v8;
    if ( src != nullptr )
    {
      if ( n < v7 )
      {
        v9 = *v66;
        v62 = (*v66)[1];
        dest = (char *)(v62 + 12);
        if ( src == (char *)*v66 + v62 + 12 - n )
        {
          v60 = v62 + ((v7 - n + 3) & 0xFFFFFFFC);
          v67 = *v9;
          if ( v60 <= *v9 )
          {
            v9[1] = v60;
            if ( ((uint8_t)src & 3) != 0 )
            {
              v53 = v7;
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                294,
                "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator "
                "= rapidjson::CrtAllocator, size_t = unsigned int]",
                "((uintptr_t) originalPtr & 3) == 0");
              v7 = v53;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v67 = *v9;
        }
        v58 = (v7 + 3) & 0xFFFFFFFC;
        if ( v58 + v62 > v67 )
        {
          v10 = (unsigned int)v66[1];
          if ( v58 >= v10 )
            v10 = (v7 + 3) & 0xFFFFFFFC;
          v47 = v7;
          v63 = v10;
          v9 = (unsigned int *)malloc(v10 + 12);
          v9[1] = 0;
          *v9 = v63;
          v9[2] = (unsigned int)*v66;
          *v66 = v9;
          v62 = v9[1];
          dest = (char *)(v62 + 12);
          v7 = v47;
        }
        desta = &dest[(uint32_t)v9];
        if ( ((uint8_t)desta & 3) != 0 )
        {
          v52 = v7;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          v7 = v52;
          v9 = *v66;
          v62 = (*v66)[1];
        }
        v9[1] = v62 + v58;
        if ( desta == nullptr )
        {
          v55 = v7;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            301,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "newBuffer != 0");
          v7 = v55;
        }
        v48 = v7;
        src = memcpy(desta, src, n);
        v7 = v48;
      }
    }
    else
    {
      v54 = v7;
      src = (uint8_t *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(
                       *((rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a3 + 4),
                       v7);
      v7 = v54;
    }
LABEL_19:
    *((uint32_t *)a3 + 9) = v7;
    v4 = &src[v61];
    *((uint32_t *)a3 + 8) = &src[v7];
    *((uint32_t *)a3 + 6) = src;
    v5 = (int)&src[v61 + 16];
  }
  *((uint32_t *)a3 + 7) = v5;
  if ( v4 != nullptr )
  {
    *((uint32_t *)v4 + 3) = 4;
    *(uint32_t *)v4 = 0;
    *((uint32_t *)v4 + 1) = 0;
    *((uint32_t *)v4 + 2) = 0;
  }
  for ( i = *(uint8_t **)a2; ; ++i )
  {
    v12 = *i;
    v13 = i;
    if ( *i != 32 && v12 != 10 && v12 != 13 && v12 != 9 )
      break;
  }
  *(uint32_t *)a2 = i;
  v14 = 0;
  v15 = *i;
  if ( *i == 93 )
  {
    *(uint32_t *)a2 = i + 1;
    return (void *)rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndArray(
                     a3,
                     0);
  }
  else
  {
    v16 = (char)v15 <= 110;
    if ( v15 == 110 )
      goto LABEL_53;
LABEL_29:
    if ( !v16 )
    {
      if ( v15 == 116 )
      {
        *(uint32_t *)a2 = v13 + 1;
        v40 = v13[1];
        *(uint32_t *)a2 = v13 + 2;
        if ( v40 != 114
          || (v44 = v13[2], *(uint32_t *)a2 = v13 + 3, v44 != 117)
          || (v45 = v13[3], *(uint32_t *)a2 = v13 + 4, v45 != 101) )
        {
          *(uint32_t *)(a1 + 64) = "Invalid value";
          *(uint32_t *)(a1 + 68) = *(uint32_t *)a2 - *(uint32_t *)(a2 + 4);
          longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
        }
        v46 = sub_124E160();
        if ( v46 != 0 )
          *(uint32_t *)(v46 + 12) = 258;
        goto LABEL_33;
      }
      if ( v15 == 123 )
      {
        rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
          a1,
          a2,
          a3);
        goto LABEL_33;
      }
LABEL_32:
      rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseNumber<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
        a1,
        a2,
        a3);
      goto LABEL_33;
    }
    switch ( v15 )
    {
      case '"':
        rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
          (unsigned int ***)a1,
          (uint8_t **)a2,
          (int)a3);
        goto LABEL_33;
      case '[':
        rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
          a1,
          a2,
          a3);
        goto LABEL_33;
      case 'f':
        *(uint32_t *)a2 = v13 + 1;
        v35 = v13[1];
        *(uint32_t *)a2 = v13 + 2;
        if ( v35 != 97
          || (v36 = v13[2], *(uint32_t *)a2 = v13 + 3, v36 != 108)
          || (v37 = v13[3], *(uint32_t *)a2 = v13 + 4, v37 != 115)
          || (v38 = v13[4], *(uint32_t *)a2 = v13 + 5, v38 != 101) )
        {
LABEL_54:
          v21 = a1;
          *(uint32_t *)(a1 + 64) = "Invalid value";
          v22 = *(uint32_t *)a2 - *(uint32_t *)(a2 + 4) - 1;
LABEL_41:
          *(uint32_t *)(v21 + 68) = v22;
          longjmp((struct __jmp_buf_tag *)(v21 + 24), 1);
        }
        v39 = sub_124E160();
        if ( v39 != 0 )
          *(uint32_t *)(v39 + 12) = 257;
LABEL_33:
        while ( 1 )
        {
          ++v14;
          for ( j = *(uint8_t **)a2; ; ++j )
          {
            v18 = *j;
            if ( *j != 32 && v18 != 10 && v18 != 13 && v18 != 9 )
              break;
          }
          *(uint32_t *)a2 = j;
          v19 = *j;
          v20 = j + 1;
          *(uint32_t *)a2 = v20;
          if ( v19 != 44 )
            break;
          while ( 1 )
          {
            v23 = *v20;
            v13 = v20;
            if ( *v20 != 32 && v23 != 10 && v23 != 13 && v23 != 9 )
              break;
            ++v20;
          }
          *(uint32_t *)a2 = v20;
          v15 = *v20;
          v16 = (char)v15 <= 110;
          if ( v15 != 110 )
            goto LABEL_29;
LABEL_53:
          *(uint32_t *)a2 = v13 + 1;
          v24 = v13[1];
          *(uint32_t *)a2 = v13 + 2;
          if ( v24 != 117 )
            goto LABEL_54;
          v41 = v13[2];
          *(uint32_t *)a2 = v13 + 3;
          if ( v41 != 108 )
            goto LABEL_54;
          v42 = v13[3];
          *(uint32_t *)a2 = v13 + 4;
          if ( v42 != 108 )
            goto LABEL_54;
          v43 = sub_124E160();
          if ( v43 != 0 )
            *(uint32_t *)(v43 + 12) = 0;
        }
        if ( v19 != 93 )
        {
          v21 = a1;
          *(uint32_t *)(a1 + 64) = "Must be a comma or ']' after an array element.";
          v22 = *(uint32_t *)a2 - *(uint32_t *)(a2 + 4);
          goto LABEL_41;
        }
        v25 = *((uint32_t *)a3 + 7);
        v26 = *((uint32_t *)a3 + 6);
        v59 = 16 * v14;
        if ( v25 - v26 < (unsigned int)(16 * v14) )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            83,
            "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >,"
            " Allocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
            "GetSize () >= count * sizeof (T)");
          v25 = *((uint32_t *)a3 + 7);
          v26 = *((uint32_t *)a3 + 6);
        }
        v57 = (uint32_t *)(v25 - v59);
        v27 = v25 - v59 - v26;
        *((uint32_t *)a3 + 7) = v25 - v59;
        v28 = *((uint32_t **)a3 + 4);
        v29 = v57;
        if ( v27 <= 0xF )
        {
          v49 = *((uint32_t **)a3 + 4);
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            91,
            "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::GenericValue<rapidjson::UTF8<> >, Alloc"
            "ator = rapidjson::MemoryPoolAllocator<>]",
            "GetSize () >= sizeof (T)");
          v29 = *((uint32_t **)a3 + 7);
          v28 = v49;
        }
        *(v29 - 1) = 4;
        v30 = (uint32_t *)*v28;
        v31 = *(uint32_t *)(*v28 + 4);
        if ( v31 + v59 > *(uint32_t *)*v28 )
        {
          v32 = v28[1];
          if ( v59 >= v32 )
            v32 = 16 * v14;
          v50 = v28;
          v30 = malloc(v32 + 12);
          v30[1] = 0;
          *v30 = v32;
          v28 = v50;
          v30[2] = *v50;
          *v50 = v30;
          v31 = v30[1];
        }
        v33 = (int)v30 + v31 + 12;
        if ( (v33 & 3) != 0 )
        {
          v51 = v28;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          v30 = (uint32_t *)*v51;
          v31 = *(uint32_t *)(*v51 + 4);
        }
        v30[1] = v59 + v31;
        *(v29 - 4) = v33;
        result = memcpy((void *)v33, v57, v59);
        *(v29 - 2) = v14;
        *(v29 - 3) = v14;
        break;
      default:
        goto LABEL_32;
    }
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1253440 .. 0x1253c51 (2065 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseObjectILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1352400 .. 0x13524e2 (226 bytes)
// Symbol:               sub_1352400
// Demangled:            sub_1352400
// ============================================================================

// ============================================================================
// Referencing Function: 0x136a560 .. 0x136a642 (226 bytes)
// Symbol:               sub_136A560
// Demangled:            sub_136A560
// ============================================================================

// ============================================================================
// Referencing Function: 0x1379c30 .. 0x1379d5d (301 bytes)
// Symbol:               sub_1379C30
// Demangled:            sub_1379C30
// ============================================================================
