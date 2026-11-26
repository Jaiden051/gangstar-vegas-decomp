// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd7288):
//   ../../../../../lib/rapidjson/internal/pow10.h
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1252460 .. 0x1252d10 (2224 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseNumberILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseNumber<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
/*
int rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseNumber<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
        int a1,
        int a2)
{
  char *v2;
  char v3;
  const char *v4;
  char *v5;
  int v6;
  char v7;
  double v8; // xmm0_8
  char v9;
  double v10; // xmm1_8
  double v11; // xmm0_8
  char v12;
  double v13; // xmm1_8
  int v14;
  uint32_t *v15;
  int64_t v16; // rax
  unsigned int v17;
  int v18;
  char v20;
  uint8_t *v21;
  char *v22;
  int v23;
  char v24;
  double v25; // xmm1_8
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int64_t v33;
  int64_t v34;
  int v35;
  int v36;
  char v37;
  char v38;
  uint64_t v39;
  char v40;
  int v41;
  int v42;

  v37 = 0;
  v2 = *(char **)a2;
  v36 = *(uint32_t *)(a2 + 4);
  v3 = **(uint8_t **)a2;
  if ( v3 == 45 )
  {
    v3 = v2[1];
    v37 = 1;
    ++v2;
  }
  if ( v3 == 48 )
  {
    v5 = v2 + 1;
    v6 = 0;
    v7 = v2[1];
LABEL_27:
    v9 = 0;
    v39 = 0;
    goto LABEL_28;
  }
  if ( v3 <= 48 || v3 > 57 )
  {
    v4 = "Expect a value here.";
    goto LABEL_6;
  }
  v5 = v2 + 1;
  v6 = v3 - 48;
  v7 = v2[1];
  if ( v37 == 0 )
  {
    while ( 1 )
    {
      if ( v7 <= 47 || v7 > 57 )
        goto LABEL_27;
      if ( v6 == -1 && v7 > 53 )
        break;
      ++v5;
      v6 = v7 + 10 * v6 - 48;
      v7 = *v5;
    }
    v7 = *v5;
    if ( *v5 <= 47 )
    {
      v9 = 1;
      v39 = 0xFFFFFFFFLL;
      goto LABEL_28;
    }
    v39 = 0xFFFFFFFFLL;
    if ( v7 <= 57 )
    {
      while ( 1 )
      {
        v29 = 10 * v39;
        ++v5;
        HIDWORD(v34) = (10 * v39) >> 32;
        v42 = v7 - 48;
        LODWORD(v34) = v29;
        v7 = *v5;
        v39 = v34 + v42;
        if ( *v5 <= 47 )
          break;
        if ( v7 > 57 )
          goto LABEL_77;
        if ( (HIDWORD(v39) & (unsigned int)v39) == 0xFFFFFFFF && v7 > 53 )
        {
          v8 = 1.8446744073709552e19;
          goto LABEL_19;
        }
      }
      v9 = 1;
      goto LABEL_28;
    }
LABEL_77:
    v9 = 1;
LABEL_28:
    v38 = 0;
    v8 = 0.0;
    goto LABEL_29;
  }
  while ( 1 )
  {
    if ( v7 <= 47 || v7 > 57 )
      goto LABEL_27;
    if ( (unsigned int)v6 > 0x7FFFFFFE )
    {
      if ( v6 != 0x7FFFFFFF )
      {
        v39 = (unsigned int)v6;
        goto LABEL_14;
      }
      if ( v7 > 56 )
        break;
    }
    ++v5;
    v6 = v7 + 10 * v6 - 48;
    v7 = *v5;
  }
  v39 = 0x7FFFFFFF;
LABEL_14:
  v7 = *v5;
  if ( *v5 <= 47 || v7 > 57 )
    goto LABEL_77;
  while ( 1 )
  {
    if ( v39 >= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( (~(uint32_t)v39 | HIDWORD(v39) ^ 0x7FFFFFFF) != 0 )
      {
        v8 = (double)v39;
        goto LABEL_19;
      }
      if ( v7 > 56 )
        break;
    }
    ++v5;
    v33 = 10 * v39;
    v41 = v7 - 48;
    v7 = *v5;
    v39 = v33 + v41;
    if ( *v5 <= 47 || v7 > 57 )
    {
      v9 = 1;
      goto LABEL_28;
    }
  }
  v8 = 9.223372036854776e18;
LABEL_19:
  v7 = *v5;
  v38 = 1;
  v9 = 1;
  if ( *v5 > 47 )
  {
    if ( v7 > 57 )
    {
LABEL_117:
      v9 = 1;
      v14 = 0;
      v38 = 1;
      goto LABEL_57;
    }
    if ( v8 >= 1.0e307 )
    {
LABEL_25:
      v4 = "Number too big to store in double";
      goto LABEL_6;
    }
    while ( 1 )
    {
      v10 = v8;
      ++v5;
      v11 = (double)(v7 - 48);
      v7 = *v5;
      v8 = v11 + v10 * 10.0;
      if ( *v5 <= 47 )
        break;
      if ( v7 > 57 )
        goto LABEL_117;
      if ( v8 >= 1.0e307 )
        goto LABEL_25;
    }
    v38 = 1;
    v9 = 1;
  }
LABEL_29:
  if ( v7 != 46 )
  {
    v14 = 0;
    goto LABEL_57;
  }
  if ( v38 == 0 )
  {
    v38 = 1;
    if ( v9 != 0 )
      v8 = (double)v39;
    else
      v8 = (double)(unsigned int)v6;
  }
  v12 = v5[1];
  if ( v12 <= 47 || v12 > 57 )
  {
    v4 = "At least one digit in fraction part";
LABEL_6:
    *(uint32_t *)(a1 + 64) = v4;
    *(uint32_t *)(a1 + 68) = *(uint32_t *)a2 - *(uint32_t *)(a2 + 4);
    longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
  }
  v13 = (double)(v12 - 48);
  v14 = -1;
  v7 = v5[2];
  v5 += 2;
  v8 = v8 * 10.0 + v13;
  if ( v7 > 47 )
  {
    while ( v7 <= 57 )
    {
      if ( v14 >= -15 )
      {
        --v14;
        v8 = (double)(v7 - 48) + v8 * 10.0;
      }
      v7 = *++v5;
      if ( *v5 <= 47 )
        goto LABEL_36;
    }
LABEL_57:
    if ( v7 == 101 )
      goto LABEL_58;
  }
LABEL_36:
  if ( v7 == 69 )
  {
LABEL_58:
    if ( v38 == 0 )
    {
      if ( v9 != 0 )
        v8 = (double)v39;
      else
        v8 = (double)(unsigned int)v6;
    }
    v20 = v5[1];
    if ( v20 == 43 )
    {
      v21 = v5 + 2;
      v40 = 0;
      v20 = v5[2];
    }
    else if ( v20 == 45 )
    {
      v21 = v5 + 2;
      v40 = 1;
      v20 = v5[2];
    }
    else
    {
      v21 = v5 + 1;
      v40 = 0;
    }
    if ( v20 <= 47 || v20 > 57 )
    {
      *(uint32_t *)(a1 + 64) = "At least one digit in exponent";
      *(uint32_t *)(a1 + 68) = &v21[-v36];
      longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
    }
    v22 = v21 + 1;
    v23 = v20 - 48;
    while ( 1 )
    {
      v24 = *v22;
      v5 = v22;
      if ( *v22 <= 47 || v24 > 57 )
        break;
      ++v22;
      v23 = v24 + 10 * v23 - 48;
      if ( v23 > 308 )
        goto LABEL_25;
    }
    if ( v40 != 0 )
      v23 = -v23;
    v14 += v23;
    if ( v14 > 308 )
    {
      v35 = v14;
      __assert2(
        "../../../../../lib/rapidjson/internal/pow10.h",
        90,
        "double rapidjson::internal::Pow10(int)",
        "n <= 308");
      v14 = v35;
LABEL_72:
      v25 = rapidjson::internal::Pow10(int)::e[v14 + 308] * v8;
LABEL_83:
      if ( v37 != 0 )
        v25 = -v25;
      v26 = sub_124E160();
      if ( v26 != 0 )
      {
        *(uint32_t *)(v26 + 12) = 16902;
        *(double *)v26 = v25;
      }
      goto LABEL_44;
    }
LABEL_82:
    v25 = 0.0;
    if ( v14 < -308 )
      goto LABEL_83;
    goto LABEL_72;
  }
  if ( v38 != 0 )
    goto LABEL_82;
  if ( v9 == 0 )
  {
    if ( v37 != 0 )
    {
      v27 = sub_124E160();
      if ( v27 == 0 )
        goto LABEL_44;
      v28 = -v6;
      *(uint32_t *)(v27 + 12) = 5638;
      *(uint64_t *)v27 = v28;
      if ( v28 < 0 )
        goto LABEL_44;
    }
    else
    {
      v27 = sub_124E160();
      if ( v27 == 0 )
        goto LABEL_44;
      *(uint32_t *)(v27 + 12) = 14854;
      *(uint32_t *)v27 = v6;
      *(uint32_t *)(v27 + 4) = 0;
      if ( v6 < 0 )
        goto LABEL_44;
    }
    *(uint32_t *)(v27 + 12) = 15878;
    goto LABEL_44;
  }
  if ( v37 != 0 )
  {
    v15 = (uint32_t *)sub_124E160();
    if ( v15 != nullptr )
    {
      v15[3] = 4614;
      *v15 = -(int)v39;
      v16 = -(int64_t)v39;
      v15[1] = (uint64_t)-(int64_t)v39 >> 32;
      if ( (((uint64_t)-(int64_t)v39 >> 32) & 0x80000000) != 0LL )
      {
        if ( v16 >= (int64_t)0xFFFFFFFF80000000LL )
          v15[3] = 5638;
      }
      else
      {
        v17 = (uint64_t)-(int64_t)v39 >> 32;
        v18 = HIDWORD(v16) == 0 ? 15878 : 13830;
        v15[3] = v17 == 0 ? 14854 : 12806;
        if ( (v16 & 0x80000000 | v17) == 0 )
          v15[3] = v18;
      }
    }
  }
  else
  {
    v30 = sub_124E160();
    if ( v30 != 0 )
    {
      *(uint64_t *)v30 = v39;
      *(uint32_t *)(v30 + 12) = ((SHIDWORD(v39) >> 31) & 0xFFFFF000) + 12806;
      v31 = HIDWORD(v39);
      v32 = ((SHIDWORD(v39) >> 31) & 0xFFFFF000) + 13830;
      if ( HIDWORD(v39) == 0 )
      {
        *(uint32_t *)(v30 + 12) = 14854;
        v32 = 15878;
        v31 = 0;
      }
      if ( (v39 & 0x80000000 | v31) == 0 )
        *(uint32_t *)(v30 + 12) = v32;
    }
  }
LABEL_44:
  *(uint32_t *)a2 = v5;
  *(uint32_t *)(a2 + 4) = v36;
  return v36;
}

*/
