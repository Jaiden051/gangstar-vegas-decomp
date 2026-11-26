// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6624):
//   ../../../../../lib/rapidjson/writer.h
// Referenced by 9 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x122ec30 .. 0x122f08d (1117 bytes)
// Symbol:               sub_122EC30
// Demangled:            sub_122EC30
// ============================================================================
/*
uint32_t *sub_122EC30(uint32_t *a1, char a2)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  size_t size;
  char *v12;
  char *v13;
  int v14;
  char *v15;
  unsigned int v16;
  char *v17;
  size_t v18;
  char *v19;
  int v20;
  char *v21;
  int v22;
  char *v23;
  size_t v24;
  char *v25;
  int v26;
  char *v27;
  int v28;
  char *v29;
  size_t v30;
  char *v31;
  int v32;
  char *v33;
  int v34;
  char *v35;
  size_t v36;
  char *v37;
  int v38;
  char *v39;
  int v40;
  char *v41;
  size_t v42;
  char *v43;
  char *v45;
  size_t v46;
  char *v47;
  int v48;
  char *v49;
  int v50;
  char *v51;
  size_t v52;
  char *v53;
  int v54;
  char *v55;
  int v56;
  char *v57;
  size_t v58;
  char *v59;
  uint32_t *v60;
  char *v61;
  int v62;
  uint8_t *ptr;
  size_t v64;
  char *v65;
  uint32_t *v66;
  char *v67;
  char *v68;
  char *v69;
  char *v70;
  char *v71;
  char *v72;
  char *v73;
  char *v74;
  uint32_t *v75;
  char v76;
  size_t v77;
  size_t v78;
  int v79;
  char *v80;

  v4 = a1[3];
  v5 = a1[4];
  if ( v4 != v5 )
  {
    if ( (unsigned int)(v5 - v4) <= 7 )
    {
      __assert2(
        "../../../../../lib/rapidjson/internal/stack.h",
        91,
        "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<rapid"
        "json::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
        "GetSize () >= sizeof (T)");
      v5 = a1[4];
      v7 = 0;
      v6 = *(uint32_t *)(v5 - 4);
      if ( v6 == 0 )
        goto LABEL_10;
    }
    else
    {
      v6 = *(uint32_t *)(v5 - 4);
      v7 = 0;
      if ( v6 == 0 )
        goto LABEL_10;
    }
    if ( *(uint8_t *)(v5 - 8) != 0 )
    {
      v60 = (uint32_t *)*a1;
      v61 = *(char **)(*a1 + 12);
      v62 = (int)(v61 + 1);
      if ( (unsigned int)(v61 + 1) >= *(uint32_t *)(*a1 + 16) )
      {
        ptr = (uint8_t *)v60[2];
        v75 = (uint32_t *)*a1;
        v79 = v61 - ptr;
        v64 = v61 - ptr + 1;
        if ( v64 < 2 * v60[5] )
          v64 = 2 * v60[5];
        v77 = v64;
        v65 = (char *)realloc(ptr, v64);
        v60 = v75;
        v75[5] = v77;
        v61 = &v65[v79];
        v75[2] = v65;
        v75[4] = &v65[v77];
        v62 = (int)&v65[v79 + 1];
      }
      v60[3] = v62;
      *v61 = 44;
      v7 = *(uint32_t *)(v5 - 4);
      if ( *(uint8_t *)(v5 - 8) != 0 )
        goto LABEL_13;
      goto LABEL_11;
    }
    v76 = (v6 & 1) == 0 ? 44 : 58;
    v8 = (uint32_t *)*a1;
    v9 = *(char **)(*a1 + 12);
    if ( *(uint32_t *)(*a1 + 16) <= (unsigned int)(v9 + 1) )
    {
      v10 = &v9[-v8[2]];
      v66 = (uint32_t *)*a1;
      size = (size_t)(v10 + 1);
      if ( (unsigned int)(v10 + 1) < 2 * v8[5] )
        size = 2 * v8[5];
      v80 = v10;
      v78 = size;
      v12 = (char *)realloc((void *)v8[2], size);
      v8 = v66;
      v66[5] = v78;
      v66[2] = v12;
      v66[3] = &v80[(uint32_t)v12];
      v13 = &v12[v78];
      v9 = &v80[(uint32_t)v12];
      v66[4] = v13;
    }
    v8[3] = v9 + 1;
    *v9 = v76;
    v7 = *(uint32_t *)(v5 - 4);
LABEL_10:
    if ( *(uint8_t *)(v5 - 8) != 0 )
    {
LABEL_13:
      *(uint32_t *)(v5 - 4) = v7 + 1;
      goto LABEL_14;
    }
LABEL_11:
    if ( (v7 & 1) == 0 )
    {
      __assert2(
        "../../../../../lib/rapidjson/writer.h",
        387,
        "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::GenericSt"
        "ringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
        "type == kStringType");
      v7 = *(uint32_t *)(v5 - 4);
    }
    goto LABEL_13;
  }
  __assert2(
    "../../../../../lib/rapidjson/writer.h",
    394,
    "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::GenericString"
    "Buffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
    "type == kObjectType || type == kArrayType");
LABEL_14:
  v14 = *a1;
  v15 = *(char **)(*a1 + 12);
  v16 = (unsigned int)(v15 + 1);
  if ( a2 != 0 )
  {
    if ( *(uint32_t *)(v14 + 16) <= v16 )
    {
      v45 = &v15[-*(uint32_t *)(v14 + 8)];
      v46 = 2 * *(uint32_t *)(v14 + 20);
      v72 = v45;
      if ( (unsigned int)(v45 + 1) >= v46 )
        v46 = (size_t)(v45 + 1);
      v47 = (char *)realloc(*(void **)(v14 + 8), v46);
      *(uint32_t *)(v14 + 8) = v47;
      *(uint32_t *)(v14 + 20) = v46;
      v15 = &v72[(uint32_t)v47];
      *(uint32_t *)(v14 + 16) = &v47[v46];
      *(uint32_t *)(v14 + 12) = &v72[(uint32_t)v47];
    }
    *(uint32_t *)(v14 + 12) = v15 + 1;
    *v15 = 116;
    v48 = *a1;
    v49 = *(char **)(*a1 + 12);
    v50 = (int)(v49 + 1);
    if ( (unsigned int)(v49 + 1) >= *(uint32_t *)(*a1 + 16) )
    {
      v51 = &v49[-*(uint32_t *)(v48 + 8)];
      v52 = 2 * *(uint32_t *)(v48 + 20);
      v73 = v51;
      if ( (unsigned int)(v51 + 1) >= v52 )
        v52 = (size_t)(v51 + 1);
      v53 = (char *)realloc(*(void **)(v48 + 8), v52);
      *(uint32_t *)(v48 + 8) = v53;
      *(uint32_t *)(v48 + 20) = v52;
      v49 = &v73[(uint32_t)v53];
      *(uint32_t *)(v48 + 16) = &v53[v52];
      v50 = (int)&v73[(uint32_t)v53 + 1];
    }
    *(uint32_t *)(v48 + 12) = v50;
    *v49 = 114;
    v54 = *a1;
    v55 = *(char **)(*a1 + 12);
    v56 = (int)(v55 + 1);
    if ( (unsigned int)(v55 + 1) >= *(uint32_t *)(*a1 + 16) )
    {
      v57 = &v55[-*(uint32_t *)(v54 + 8)];
      v58 = 2 * *(uint32_t *)(v54 + 20);
      v74 = v57;
      if ( (unsigned int)(v57 + 1) >= v58 )
        v58 = (size_t)(v57 + 1);
      v59 = (char *)realloc(*(void **)(v54 + 8), v58);
      *(uint32_t *)(v54 + 8) = v59;
      *(uint32_t *)(v54 + 20) = v58;
      v55 = &v74[(uint32_t)v59];
      *(uint32_t *)(v54 + 16) = &v59[v58];
      v56 = (int)&v74[(uint32_t)v59 + 1];
    }
    *(uint32_t *)(v54 + 12) = v56;
    *v55 = 117;
  }
  else
  {
    if ( v16 >= *(uint32_t *)(v14 + 16) )
    {
      v17 = &v15[-*(uint32_t *)(v14 + 8)];
      v18 = 2 * *(uint32_t *)(v14 + 20);
      v67 = v17;
      if ( (unsigned int)(v17 + 1) >= v18 )
        v18 = (size_t)(v17 + 1);
      v19 = (char *)realloc(*(void **)(v14 + 8), v18);
      *(uint32_t *)(v14 + 8) = v19;
      *(uint32_t *)(v14 + 20) = v18;
      v15 = &v67[(uint32_t)v19];
      *(uint32_t *)(v14 + 16) = &v19[v18];
      v16 = (unsigned int)&v67[(uint32_t)v19 + 1];
    }
    *(uint32_t *)(v14 + 12) = v16;
    *v15 = 102;
    v20 = *a1;
    v21 = *(char **)(*a1 + 12);
    v22 = (int)(v21 + 1);
    if ( (unsigned int)(v21 + 1) >= *(uint32_t *)(*a1 + 16) )
    {
      v23 = &v21[-*(uint32_t *)(v20 + 8)];
      v24 = 2 * *(uint32_t *)(v20 + 20);
      v68 = v23;
      if ( (unsigned int)(v23 + 1) >= v24 )
        v24 = (size_t)(v23 + 1);
      v25 = (char *)realloc(*(void **)(v20 + 8), v24);
      *(uint32_t *)(v20 + 8) = v25;
      *(uint32_t *)(v20 + 20) = v24;
      v21 = &v68[(uint32_t)v25];
      *(uint32_t *)(v20 + 16) = &v25[v24];
      v22 = (int)&v68[(uint32_t)v25 + 1];
    }
    *(uint32_t *)(v20 + 12) = v22;
    *v21 = 97;
    v26 = *a1;
    v27 = *(char **)(*a1 + 12);
    v28 = (int)(v27 + 1);
    if ( (unsigned int)(v27 + 1) >= *(uint32_t *)(*a1 + 16) )
    {
      v29 = &v27[-*(uint32_t *)(v26 + 8)];
      v30 = 2 * *(uint32_t *)(v26 + 20);
      v69 = v29;
      if ( (unsigned int)(v29 + 1) >= v30 )
        v30 = (size_t)(v29 + 1);
      v31 = (char *)realloc(*(void **)(v26 + 8), v30);
      *(uint32_t *)(v26 + 8) = v31;
      *(uint32_t *)(v26 + 20) = v30;
      v27 = &v69[(uint32_t)v31];
      *(uint32_t *)(v26 + 16) = &v31[v30];
      v28 = (int)&v69[(uint32_t)v31 + 1];
    }
    *(uint32_t *)(v26 + 12) = v28;
    *v27 = 108;
    v32 = *a1;
    v33 = *(char **)(*a1 + 12);
    v34 = (int)(v33 + 1);
    if ( (unsigned int)(v33 + 1) >= *(uint32_t *)(*a1 + 16) )
    {
      v35 = &v33[-*(uint32_t *)(v32 + 8)];
      v36 = 2 * *(uint32_t *)(v32 + 20);
      v70 = v35;
      if ( (unsigned int)(v35 + 1) >= v36 )
        v36 = (size_t)(v35 + 1);
      v37 = (char *)realloc(*(void **)(v32 + 8), v36);
      *(uint32_t *)(v32 + 8) = v37;
      *(uint32_t *)(v32 + 20) = v36;
      v33 = &v70[(uint32_t)v37];
      *(uint32_t *)(v32 + 16) = &v37[v36];
      v34 = (int)&v70[(uint32_t)v37 + 1];
    }
    *(uint32_t *)(v32 + 12) = v34;
    *v33 = 115;
  }
  v38 = *a1;
  v39 = *(char **)(*a1 + 12);
  v40 = (int)(v39 + 1);
  if ( (unsigned int)(v39 + 1) >= *(uint32_t *)(*a1 + 16) )
  {
    v41 = &v39[-*(uint32_t *)(v38 + 8)];
    v42 = 2 * *(uint32_t *)(v38 + 20);
    v71 = v41;
    if ( (unsigned int)(v41 + 1) >= v42 )
      v42 = (size_t)(v41 + 1);
    v43 = (char *)realloc(*(void **)(v38 + 8), v42);
    *(uint32_t *)(v38 + 8) = v43;
    *(uint32_t *)(v38 + 20) = v42;
    v39 = &v71[(uint32_t)v43];
    *(uint32_t *)(v38 + 16) = &v43[v42];
    v40 = (int)&v71[(uint32_t)v43 + 1];
  }
  *(uint32_t *)(v38 + 12) = v40;
  *v39 = 101;
  return a1;
}

*/

// ============================================================================
// Referencing Function: 0x122f090 .. 0x122f6bc (1580 bytes)
// Symbol:               sub_122F090
// Demangled:            sub_122F090
// ============================================================================
/*
uint32_t *sub_122F090(uint32_t *a1, uint8_t *a2, int a3)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  size_t size;
  void *v13;
  char *v14;
  char *v15;
  size_t v16;
  char *v17;
  int v18;
  char *v19;
  int v20;
  char *v21;
  size_t v22;
  char *v23;
  int v24;
  char *v25;
  int v26;
  size_t v27;
  void *v28;
  int v29;
  uint8_t *v30;
  int v31;
  size_t v32;
  void *v33;
  int v35;
  uint8_t *v36;
  int v37;
  size_t v38;
  void *v39;
  int v40;
  uint8_t *v41;
  int v42;
  size_t v43;
  void *v44;
  char *v45;
  int v46;
  uint8_t *v47;
  int v48;
  size_t v49;
  void *v50;
  char v51;
  int v52;
  char *v53;
  int v54;
  size_t v55;
  void *v56;
  uint32_t *v57;
  char *v58;
  size_t v59;
  char *v60;
  uint32_t *v61;
  uint8_t *v62;
  int v63;
  size_t v64;
  void *v65;
  uint8_t *ptr;
  uint8_t *v67;
  size_t v68;
  size_t v69;
  char *v70;
  char *v71;
  uint8_t *v72;
  uint8_t *v73;
  uint8_t *v74;
  char *v75;
  uint32_t *v76;
  uint32_t *v77;
  uint8_t *v78;
  char *v79;
  size_t v80;
  size_t v81;
  size_t v82;
  size_t v83;
  size_t v84;
  char v85;
  char v86;
  size_t v87;
  char v88;
  size_t v89;
  size_t v90;
  char v91;
  uint8_t *v92;
  uint8_t *i;
  int v94;
  char v95;

  v5 = a1[3];
  v6 = a1[4];
  if ( v5 == v6 )
  {
    __assert2(
      "../../../../../lib/rapidjson/writer.h",
      394,
      "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::GenericStri"
      "ngBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "type == kObjectType || type == kArrayType");
    goto LABEL_5;
  }
  if ( (unsigned int)(v6 - v5) <= 7 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      91,
      "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjs"
      "on::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "GetSize () >= sizeof (T)");
    v6 = a1[4];
    v8 = 0;
    v7 = *(uint32_t *)(v6 - 4);
    if ( v7 == 0 )
      goto LABEL_4;
LABEL_50:
    if ( *(uint8_t *)(v6 - 8) != 0 )
    {
      v61 = (uint32_t *)*a1;
      v62 = *(uint8_t **)(*a1 + 12);
      v63 = (int)(v62 + 1);
      if ( (unsigned int)(v62 + 1) >= *(uint32_t *)(*a1 + 16) )
      {
        v92 = &v62[-v61[2]];
        v64 = (size_t)(v92 + 1);
        if ( (unsigned int)(v92 + 1) < 2 * v61[5] )
          v64 = 2 * v61[5];
        v77 = (uint32_t *)*a1;
        v90 = v64;
        v65 = realloc((void *)v61[2], v64);
        v61 = v77;
        v77[5] = v90;
        v62 = &v92[(uint32_t)v65];
        v77[2] = v65;
        v77[4] = (char *)v65 + v90;
        v63 = (int)&v92[(uint32_t)v65 + 1];
      }
      v61[3] = v63;
      *v62 = 44;
      v8 = *(uint32_t *)(v6 - 4);
    }
    else
    {
      v95 = (v7 & 1) == 0 ? 44 : 58;
      v57 = (uint32_t *)*a1;
      v58 = *(char **)(*a1 + 12);
      if ( *(uint32_t *)(*a1 + 16) <= (unsigned int)(v58 + 1) )
      {
        ptr = (uint8_t *)v57[2];
        v94 = v58 - ptr;
        v59 = v58 - ptr + 1;
        if ( v59 < 2 * v57[5] )
          v59 = 2 * v57[5];
        v76 = (uint32_t *)*a1;
        v89 = v59;
        v60 = (char *)realloc(ptr, v59);
        v57 = v76;
        v76[5] = v89;
        v76[2] = v60;
        v76[3] = &v60[v94];
        v76[4] = &v60[v89];
        v58 = &v60[v94];
      }
      v57[3] = v58 + 1;
      *v58 = v95;
      v8 = *(uint32_t *)(v6 - 4);
    }
    goto LABEL_4;
  }
  v7 = *(uint32_t *)(v6 - 4);
  v8 = 0;
  if ( v7 != 0 )
    goto LABEL_50;
LABEL_4:
  *(uint32_t *)(v6 - 4) = v8 + 1;
LABEL_5:
  if ( LOBYTE(g4_guard_db374dfca1[0]) == 0
    && _cxa_guard_acquire(g4_guard_db374dfca1) != 0 )
  {
    std::memcpy(
      rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::WriteString(char const*,unsigned int)::escape,
      "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu",
      32);
    rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::WriteString(char const*,unsigned int)::escape[34] = 34;
    rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::WriteString(char const*,unsigned int)::escape[92] = 92;
    _cxa_guard_release(g4_guard_db374dfca1);
  }
  v9 = *a1;
  v10 = *(uint8_t **)(*a1 + 12);
  v11 = (int)(v10 + 1);
  if ( (unsigned int)(v10 + 1) >= *(uint32_t *)(*a1 + 16) )
  {
    v78 = &v10[-*(uint32_t *)(v9 + 8)];
    size = (size_t)(v78 + 1);
    if ( (unsigned int)(v78 + 1) < 2 * *(uint32_t *)(v9 + 20) )
      size = 2 * *(uint32_t *)(v9 + 20);
    v68 = size;
    v13 = realloc(*(void **)(v9 + 8), size);
    *(uint32_t *)(v9 + 8) = v13;
    *(uint32_t *)(v9 + 20) = v68;
    v10 = &v78[(uint32_t)v13];
    *(uint32_t *)(v9 + 16) = (char *)v13 + v68;
    v11 = (int)&v78[(uint32_t)v13 + 1];
  }
  *(uint32_t *)(v9 + 12) = v11;
  *v10 = 34;
  for ( i = &a2[a3]; a2 != i; ++a2 )
  {
    while ( 1 )
    {
      v86 = *a2;
      v24 = *a1;
      if ( rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::WriteString(char const*,unsigned int)::escape[*a2] != 0 )
        break;
      v25 = *(char **)(v24 + 12);
      v26 = (int)(v25 + 1);
      if ( (unsigned int)(v25 + 1) >= *(uint32_t *)(v24 + 16) )
      {
        v71 = &v25[-*(uint32_t *)(v24 + 8)];
        v27 = (size_t)(v71 + 1);
        if ( (unsigned int)(v71 + 1) < 2 * *(uint32_t *)(v24 + 20) )
          v27 = 2 * *(uint32_t *)(v24 + 20);
        v81 = v27;
        v28 = realloc(*(void **)(v24 + 8), v27);
        *(uint32_t *)(v24 + 8) = v28;
        *(uint32_t *)(v24 + 20) = v81;
        v25 = &v71[(uint32_t)v28];
        *(uint32_t *)(v24 + 16) = (char *)v28 + v81;
        v26 = (int)&v71[(uint32_t)v28 + 1];
      }
      *(uint32_t *)(v24 + 12) = v26;
      ++a2;
      *v25 = v86;
      if ( a2 == i )
        goto LABEL_28;
    }
    v14 = *(char **)(v24 + 12);
    if ( *(uint32_t *)(v24 + 16) <= (unsigned int)(v14 + 1) )
    {
      v15 = &v14[-*(uint32_t *)(v24 + 8)];
      v16 = 2 * *(uint32_t *)(v24 + 20);
      v79 = v15;
      if ( (unsigned int)(v15 + 1) >= v16 )
        v16 = (size_t)(v15 + 1);
      v69 = v16;
      v17 = (char *)realloc(*(void **)(v24 + 8), v16);
      *(uint32_t *)(v24 + 8) = v17;
      *(uint32_t *)(v24 + 20) = v69;
      v14 = &v79[(uint32_t)v17];
      *(uint32_t *)(v24 + 12) = &v79[(uint32_t)v17];
      *(uint32_t *)(v24 + 16) = &v17[v69];
    }
    *(uint32_t *)(v24 + 12) = v14 + 1;
    *v14 = 92;
    v85 = rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::WriteString(char const*,unsigned int)::escape[*a2];
    v18 = *a1;
    v19 = *(char **)(*a1 + 12);
    v20 = (int)(v19 + 1);
    if ( (unsigned int)(v19 + 1) >= *(uint32_t *)(*a1 + 16) )
    {
      v21 = &v19[-*(uint32_t *)(v18 + 8)];
      v22 = 2 * *(uint32_t *)(v18 + 20);
      v70 = v21;
      if ( (unsigned int)(v21 + 1) >= v22 )
        v22 = (size_t)(v21 + 1);
      v80 = v22;
      v23 = (char *)realloc(*(void **)(v18 + 8), v22);
      *(uint32_t *)(v18 + 8) = v23;
      *(uint32_t *)(v18 + 20) = v80;
      v19 = &v70[(uint32_t)v23];
      *(uint32_t *)(v18 + 16) = &v23[v80];
      v20 = (int)&v70[(uint32_t)v23 + 1];
    }
    *(uint32_t *)(v18 + 12) = v20;
    *v19 = v85;
    if ( rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::WriteString(char const*,unsigned int)::escape[*a2] == 117 )
    {
      v35 = *a1;
      v36 = *(uint8_t **)(*a1 + 12);
      v37 = (int)(v36 + 1);
      if ( (unsigned int)(v36 + 1) >= *(uint32_t *)(*a1 + 16) )
      {
        v73 = &v36[-*(uint32_t *)(v35 + 8)];
        v38 = (size_t)(v73 + 1);
        if ( (unsigned int)(v73 + 1) < 2 * *(uint32_t *)(v35 + 20) )
          v38 = 2 * *(uint32_t *)(v35 + 20);
        v82 = v38;
        v39 = realloc(*(void **)(v35 + 8), v38);
        *(uint32_t *)(v35 + 8) = v39;
        *(uint32_t *)(v35 + 20) = v82;
        v36 = &v73[(uint32_t)v39];
        *(uint32_t *)(v35 + 16) = (char *)v39 + v82;
        v37 = (int)&v73[(uint32_t)v39 + 1];
      }
      *(uint32_t *)(v35 + 12) = v37;
      *v36 = 48;
      v40 = *a1;
      v41 = *(uint8_t **)(*a1 + 12);
      v42 = (int)(v41 + 1);
      if ( (unsigned int)(v41 + 1) >= *(uint32_t *)(*a1 + 16) )
      {
        v74 = &v41[-*(uint32_t *)(v40 + 8)];
        v43 = (size_t)(v74 + 1);
        if ( (unsigned int)(v74 + 1) < 2 * *(uint32_t *)(v40 + 20) )
          v43 = 2 * *(uint32_t *)(v40 + 20);
        v83 = v43;
        v44 = realloc(*(void **)(v40 + 8), v43);
        *(uint32_t *)(v40 + 8) = v44;
        *(uint32_t *)(v40 + 20) = v83;
        v41 = &v74[(uint32_t)v44];
        *(uint32_t *)(v40 + 16) = (char *)v44 + v83;
        v42 = (int)&v74[(uint32_t)v44 + 1];
      }
      *(uint32_t *)(v40 + 12) = v42;
      *v41 = 48;
      v45 = (char *)&dword_20B9FF4 - 5567821;
      v91 = *((uint8_t *)&dword_20B9FF4 + ((char)*a2 >> 4) - 5567821);
      v46 = *a1;
      v47 = *(uint8_t **)(*a1 + 12);
      v48 = (int)(v47 + 1);
      if ( (unsigned int)(v47 + 1) >= *(uint32_t *)(*a1 + 16) )
      {
        v67 = &v47[-*(uint32_t *)(v46 + 8)];
        v49 = (size_t)(v67 + 1);
        if ( (unsigned int)(v67 + 1) < 2 * *(uint32_t *)(v46 + 20) )
          v49 = 2 * *(uint32_t *)(v46 + 20);
        v87 = v49;
        v50 = realloc(*(void **)(v46 + 8), v49);
        *(uint32_t *)(v46 + 8) = v50;
        *(uint32_t *)(v46 + 20) = v87;
        v47 = &v67[(uint32_t)v50];
        *(uint32_t *)(v46 + 16) = (char *)v50 + v87;
        v45 = (char *)&dword_20B9FF4 - 5567821;
        v48 = (int)&v67[(uint32_t)v50 + 1];
      }
      *(uint32_t *)(v46 + 12) = v48;
      *v47 = v91;
      v51 = v45[*a2 & 0xF];
      v88 = v51;
      v52 = *a1;
      v53 = *(char **)(*a1 + 12);
      v54 = (int)(v53 + 1);
      if ( (unsigned int)(v53 + 1) >= *(uint32_t *)(*a1 + 16) )
      {
        v75 = &v53[-*(uint32_t *)(v52 + 8)];
        v55 = (size_t)(v75 + 1);
        if ( (unsigned int)(v75 + 1) < 2 * *(uint32_t *)(v52 + 20) )
          v55 = 2 * *(uint32_t *)(v52 + 20);
        v84 = v55;
        v56 = realloc(*(void **)(v52 + 8), v55);
        *(uint32_t *)(v52 + 8) = v56;
        *(uint32_t *)(v52 + 20) = v84;
        v53 = &v75[(uint32_t)v56];
        *(uint32_t *)(v52 + 16) = (char *)v56 + v84;
        v51 = v88;
        v54 = (int)&v75[(uint32_t)v56 + 1];
      }
      *(uint32_t *)(v52 + 12) = v54;
      *v53 = v51;
    }
  }
LABEL_28:
  v29 = *a1;
  v30 = *(uint8_t **)(*a1 + 12);
  v31 = (int)(v30 + 1);
  if ( (unsigned int)(v30 + 1) >= *(uint32_t *)(*a1 + 16) )
  {
    v72 = &v30[-*(uint32_t *)(v29 + 8)];
    v32 = (size_t)(v72 + 1);
    if ( (unsigned int)(v72 + 1) < 2 * *(uint32_t *)(v29 + 20) )
      v32 = 2 * *(uint32_t *)(v29 + 20);
    v33 = realloc(*(void **)(v29 + 8), v32);
    *(uint32_t *)(v29 + 8) = v33;
    *(uint32_t *)(v29 + 20) = v32;
    v30 = &v72[(uint32_t)v33];
    *(uint32_t *)(v29 + 16) = (char *)v33 + v32;
    v31 = (int)&v72[(uint32_t)v33 + 1];
  }
  *(uint32_t *)(v29 + 12) = v31;
  *v30 = 34;
  return a1;
}

*/

// ============================================================================
// Referencing Function: 0x122fab0 .. 0x123196f (7871 bytes)
// Symbol:               sub_122FAB0
// Demangled:            sub_122FAB0
// ============================================================================

// ============================================================================
// Referencing Function: 0x126a3b0 .. 0x126a9dc (1580 bytes)
// Symbol:               sub_126A3B0
// Demangled:            sub_126A3B0
// ============================================================================

// ============================================================================
// Referencing Function: 0x126d730 .. 0x126db7b (1099 bytes)
// Symbol:               _ZN9rapidjson6WriterINS_19GenericStringBufferINS_4UTF8IcEENS_12CrtAllocatorEEES3_NS_19MemoryPoolAllocatorIS4_EEE4BoolEb
// Demangled:            rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Bool(bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126db80 .. 0x126dd6b (491 bytes)
// Symbol:               _ZN9rapidjson6WriterINS_19GenericStringBufferINS_4UTF8IcEENS_12CrtAllocatorEEES3_NS_19MemoryPoolAllocatorIS4_EEE6PrefixENS_4TypeE
// Demangled:            rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Prefix(rapidjson::Type)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126e080 .. 0x126eb91 (2833 bytes)
// Symbol:               _ZNK9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE6AcceptINS_6WriterINS_19GenericStringBufferIS2_S4_EES2_S5_EEEERKS6_RT_
// Demangled:            rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1341a90 .. 0x1341df9 (873 bytes)
// Symbol:               sub_1341A90
// Demangled:            sub_1341A90
// ============================================================================

// ============================================================================
// Referencing Function: 0x1379e60 .. 0x137a141 (737 bytes)
// Symbol:               sub_1379E60
// Demangled:            sub_1379E60
// ============================================================================
