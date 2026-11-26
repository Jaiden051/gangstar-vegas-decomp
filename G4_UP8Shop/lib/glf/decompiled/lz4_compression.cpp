#include "Core/Utils/DecompTypes.h"
#include "lz4_compression.h"

// ----------------------------------------------------------------------------
// Function: LZ4_versionNumber  (binary VA: 0xcc73d0)
// Original: LZ4_versionNumber
// ----------------------------------------------------------------------------
int LZ4_versionNumber()
{
  return 10500;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compressBound  (binary VA: 0xcc73e0)
// Original: LZ4_compressBound
// ----------------------------------------------------------------------------
int LZ4_compressBound(unsigned int a1)
{
  int result;

  result = 0;
  if ( a1 <= 0x7E000000 )
    return a1 + (int)a1 / 255 + 16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress  (binary VA: 0xcc7410)
// Original: LZ4_compress
// ----------------------------------------------------------------------------
int LZ4_compress(char *a1, uint8_t *a2, int a3)
{
  uint32_t s[4107];

  memset(s, 0, 0x4020u);
  if ( a3 <= 65546 )
    return sub_CC67E0(s, a1, a2, a3, 0, 0, 2, 0, 0);
  else
    return sub_CC67E0(s, a1, a2, a3, 0, 0, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress_limitedOutput  (binary VA: 0xcc74f0)
// Original: LZ4_compress_limitedOutput
// ----------------------------------------------------------------------------
int LZ4_compress_limitedOutput(char *a1, uint8_t *a2, int a3, unsigned int a4)
{
  uint32_t s[4107];

  memset(s, 0, 0x4020u);
  if ( a3 <= 65546 )
    return sub_CC67E0(s, a1, a2, a3, a4, 1, 2, 0, 0);
  else
    return sub_CC67E0(s, a1, a2, a3, a4, 1, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: LZ4_resetStream  (binary VA: 0xcc75d0)
// Original: LZ4_resetStream
// ----------------------------------------------------------------------------
void * LZ4_resetStream(void *s)
{
  return memset(s, 0, 0x4020u);
}

// ----------------------------------------------------------------------------
// Function: LZ4_createStream  (binary VA: 0xcc7610)
// Original: LZ4_createStream
// ----------------------------------------------------------------------------
void * LZ4_createStream()
{
  void *v0;

  v0 = calloc(8u, 0x804u);
  LZ4_resetStream(v0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: LZ4_freeStream  (binary VA: 0xcc7660)
// Original: LZ4_freeStream
// ----------------------------------------------------------------------------
int LZ4_freeStream(void *ptr)
{
  free(ptr);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: LZ4_loadDict  (binary VA: 0xcc7690)
// Original: LZ4_loadDict
// ----------------------------------------------------------------------------
unsigned int LZ4_loadDict(void *a1, unsigned int a2, int a3)
{
  int v3;
  uint32_t *v4;
  unsigned int v5;
  unsigned int result;
  char *v7;
  char *v8;
  unsigned int v9;

  if ( *((uint32_t *)a1 + 4097) != 0 )
    LZ4_resetStream(a1);
  if ( a3 <= 3 )
  {
    *((uint32_t *)a1 + 4098) = 0;
    *((uint32_t *)a1 + 4100) = 0;
    return 0;
  }
  else
  {
    v3 = *((uint32_t *)a1 + 4096);
    v4 = (uint32_t *)(a2 + a3 - 0x10000);
    if ( a2 > (unsigned int)(uintptr_t)(v4) )
      v4 = (uint32_t *)a2;
    v5 = a2 + a3 - 4;
    result = a2 + a3 - (uint32_t)(uintptr_t)(v4);
    *((uint32_t *)a1 + 4098) = (uint32_t)(uintptr_t)(v4);
    *((uint32_t *)a1 + 4100) = result;
    *((uint32_t *)a1 + 4096) = result + v3;
    if ( (unsigned int)(uintptr_t)(v4) <= v5 )
    {
      v7 = (char *)v4 - v3;
      do
      {
        v8 = (char *)v4;
        v9 = (unsigned int)(-1640531535 * *v4) >> 20;
        v4 = (uint32_t *)((char *)v4 + 3);
        *((uint32_t *)a1 + v9) = v8 - v7;
      }
      while ( v5 >= (unsigned int)(uintptr_t)(v4) );
      return *((uint32_t *)a1 + 4100);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress_continue  (binary VA: 0xcc7760)
// Original: LZ4_compress_continue
// ----------------------------------------------------------------------------
int LZ4_compress_continue(uint32_t *a1, char *a2, uint8_t *a3, int a4)
{
  int result;
  unsigned int v5;
  unsigned int v6;
  char *v7;
  char *v8;
  unsigned int v9;
  unsigned int v10;
  int i;
  unsigned int v12;
  int v13;
  char *v14;
  int v15;

  result = 0;
  v5 = a1[4098];
  v6 = a1[4100];
  if ( a1[4097] == 0 )
  {
    v7 = (char *)(v5 + v6);
    if ( (unsigned int)(uintptr_t)(a2) <= v5 + v6 || (v8 = (char *)(v5 + v6), v6 == 0) )
      v8 = a2;
    v9 = a1[4096];
    if ( v9 > 0x80000000 || (unsigned int)(uintptr_t)(v8) < v9 )
    {
      v10 = v9 - 0x10000;
      for ( i = 0; i != 4096; ++i )
      {
        while ( 1 )
        {
          v12 = a1[i];
          if ( v10 <= v12 )
            break;
          a1[i++] = 0;
          if ( i == 4096 )
            goto LABEL_10;
        }
        a1[i] = v12 - v10;
      }
LABEL_10:
      a1[4096] = 0x10000;
      v13 = -v6;
      if ( v6 > 0x10000 )
      {
        a1[4100] = 0x10000;
        v13 = -65536;
        v6 = 0x10000;
      }
      v5 = (unsigned int)(uintptr_t)(&v7[v13]);
      a1[4098] = v5;
    }
    v14 = &a2[a4];
    if ( (unsigned int)(uintptr_t)(&a2[a4]) > v5 && v7 > v14 )
    {
      v6 = v7 - v14;
      a1[4100] = v7 - v14;
      if ( (unsigned int)(v7 - v14) > 0x10000 )
      {
        a1[4100] = 0x10000;
        v15 = -65536;
        v6 = 0x10000;
      }
      else if ( v6 > 3 )
      {
        v15 = v14 - v7;
      }
      else
      {
        a1[4100] = 0;
        v15 = 0;
        v6 = 0;
      }
      a1[4098] = (uint32_t)(uintptr_t)(&v7[v15]);
    }
    if ( a2 == v7 )
    {
      if ( v6 <= 0xFFFF && a1[4096] > v6 )
        result = sub_CC67E0(a1, a2, a3, a4, 0, 0, 1, 1, 1);
      else
        result = sub_CC67E0(a1, a2, a3, a4, 0, 0, 1, 1, 0);
      a1[4100] += a4;
      a1[4096] += a4;
    }
    else
    {
      if ( v6 <= 0xFFFF && a1[4096] > v6 )
        result = sub_CC67E0(a1, a2, a3, a4, 0, 0, 1, 2, 1);
      else
        result = sub_CC67E0(a1, a2, a3, a4, 0, 0, 1, 2, 0);
      a1[4098] = (uint32_t)(uintptr_t)(a2);
      a1[4100] = a4;
      a1[4096] += a4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress_limitedOutput_continue  (binary VA: 0xcc7990)
// Original: LZ4_compress_limitedOutput_continue
// ----------------------------------------------------------------------------
int LZ4_compress_limitedOutput_continue(uint32_t *a1, char *a2, uint8_t *a3, int a4, unsigned int a5)
{
  int result;
  unsigned int v6;
  unsigned int v7;
  char *v8;
  char *v9;
  unsigned int v10;
  unsigned int v11;
  int i;
  unsigned int v13;
  int v14;
  char *v15;
  int v16;

  result = 0;
  v6 = a1[4098];
  v7 = a1[4100];
  if ( a1[4097] == 0 )
  {
    v8 = (char *)(v6 + v7);
    if ( (unsigned int)(uintptr_t)(a2) <= v6 + v7 || (v9 = (char *)(v6 + v7), v7 == 0) )
      v9 = a2;
    v10 = a1[4096];
    if ( v10 > 0x80000000 || (unsigned int)(uintptr_t)(v9) < v10 )
    {
      v11 = v10 - 0x10000;
      for ( i = 0; i != 4096; ++i )
      {
        while ( 1 )
        {
          v13 = a1[i];
          if ( v11 <= v13 )
            break;
          a1[i++] = 0;
          if ( i == 4096 )
            goto LABEL_10;
        }
        a1[i] = v13 - v11;
      }
LABEL_10:
      a1[4096] = 0x10000;
      v14 = -v7;
      if ( v7 > 0x10000 )
      {
        a1[4100] = 0x10000;
        v14 = -65536;
        v7 = 0x10000;
      }
      v6 = (unsigned int)(uintptr_t)(&v8[v14]);
      a1[4098] = v6;
    }
    v15 = &a2[a4];
    if ( (unsigned int)(uintptr_t)(&a2[a4]) > v6 && v8 > v15 )
    {
      v7 = v8 - v15;
      a1[4100] = v8 - v15;
      if ( (unsigned int)(v8 - v15) > 0x10000 )
      {
        a1[4100] = 0x10000;
        v16 = -65536;
        v7 = 0x10000;
      }
      else if ( v7 > 3 )
      {
        v16 = v15 - v8;
      }
      else
      {
        a1[4100] = 0;
        v16 = 0;
        v7 = 0;
      }
      a1[4098] = (uint32_t)(uintptr_t)(&v8[v16]);
    }
    if ( a2 == v8 )
    {
      if ( v7 <= 0xFFFF && a1[4096] > v7 )
        result = sub_CC67E0(a1, a2, a3, a4, a5, 1, 1, 1, 1);
      else
        result = sub_CC67E0(a1, a2, a3, a4, a5, 1, 1, 1, 0);
      a1[4100] += a4;
      a1[4096] += a4;
    }
    else
    {
      if ( v7 <= 0xFFFF && a1[4096] > v7 )
        result = sub_CC67E0(a1, a2, a3, a4, a5, 1, 1, 2, 1);
      else
        result = sub_CC67E0(a1, a2, a3, a4, a5, 1, 1, 2, 0);
      a1[4098] = (uint32_t)(uintptr_t)(a2);
      a1[4100] = a4;
      a1[4096] += a4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress_forceExtDict  (binary VA: 0xcc7c30)
// Original: LZ4_compress_forceExtDict
// ----------------------------------------------------------------------------
int LZ4_compress_forceExtDict(uint32_t *a1, char *a2, uint8_t *a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  char *v6;
  unsigned int v7;
  int i;
  unsigned int v9;
  int v10;
  int result;
  char *v12;

  v4 = a1[4100];
  v5 = a1[4096];
  v6 = (char *)(v4 + a1[4098]);
  v12 = v6;
  if ( v5 > 0x80000000 )
    goto LABEL_5;
  if ( a2 <= v6 )
    v6 = a2;
  if ( v5 > (unsigned int)(uintptr_t)(v6) )
  {
LABEL_5:
    v7 = v5 - 0x10000;
    for ( i = 0; i != 4096; ++i )
    {
      while ( 1 )
      {
        v9 = a1[i];
        if ( v7 <= v9 )
          break;
        a1[i++] = 0;
        if ( i == 4096 )
          goto LABEL_9;
      }
      a1[i] = v9 - v7;
    }
LABEL_9:
    a1[4096] = 0x10000;
    if ( v4 > 0x10000 )
    {
      a1[4100] = 0x10000;
      v10 = -65536;
    }
    else
    {
      v10 = -v4;
    }
    a1[4098] = (uint32_t)(uintptr_t)(&v12[v10]);
  }
  result = sub_CC67E0(a1, a2, a3, a4, 0, 0, 1, 2, 0);
  a1[4100] = a4;
  a1[4098] = (uint32_t)(uintptr_t)(a2);
  a1[4096] += a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_saveDict  (binary VA: 0xcc7d30)
// Original: LZ4_saveDict
// ----------------------------------------------------------------------------
size_t LZ4_saveDict(int a1, void *dest, size_t a3)
{
  size_t v3;
  size_t v4;
  size_t n;

  v3 = a3;
  v4 = *(uint32_t *)(a1 + 16400);
  n = a3;
  if ( a3 > 0x10000 )
  {
    n = 0x10000;
    v3 = 0x10000;
  }
  if ( v4 < n )
  {
    v3 = *(uint32_t *)(a1 + 16400);
    n = v3;
  }
  memmove(dest, (const void *)(v4 + *(uint32_t *)(a1 + 16392) - n), n);
  *(uint32_t *)(a1 + 16392) = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 16400) = n;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_safe  (binary VA: 0xcc7dd0)
// Original: LZ4_decompress_safe
// ----------------------------------------------------------------------------
int LZ4_decompress_safe(uint8_t *a1, char *src, int a3, int a4)
{
  return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), a3, a4, 1, 0, 0, 0, src, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_safe_partial  (binary VA: 0xcc7e30)
// Original: LZ4_decompress_safe_partial
// ----------------------------------------------------------------------------
int LZ4_decompress_safe_partial(uint8_t *a1, char *src, int a3, int a4, int a5)
{
  return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), a3, a5, 1, 1, a4, 0, src, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_fast  (binary VA: 0xcc7e90)
// Original: LZ4_decompress_fast
// ----------------------------------------------------------------------------
int LZ4_decompress_fast(uint8_t *a1, unsigned int a2, int a3)
{
  return sub_CC5F00(a1, a2, 0, a3, 0, 0, 0, 1, (char *)(a2 - 0x10000), 0, 0x10000u);
}

// ----------------------------------------------------------------------------
// Function: LZ4_createStreamDecode  (binary VA: 0xcc7ef0)
// Original: LZ4_createStreamDecode
// ----------------------------------------------------------------------------
void * LZ4_createStreamDecode()
{
  return calloc(8u, 4u);
}

// ----------------------------------------------------------------------------
// Function: LZ4_freeStreamDecode  (binary VA: 0xcc7f20)
// Original: LZ4_freeStreamDecode
// ----------------------------------------------------------------------------
int LZ4_freeStreamDecode(void *ptr)
{
  free(ptr);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: LZ4_setStreamDecode  (binary VA: 0xcc7f50)
// Original: LZ4_setStreamDecode
// ----------------------------------------------------------------------------
int LZ4_setStreamDecode(uint32_t *a1, int a2, int a3)
{
  a1[3] = a3;
  a1[2] = a2 + a3;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_safe_continue  (binary VA: 0xcc7f80)
// Original: LZ4_decompress_safe_continue
// ----------------------------------------------------------------------------
int LZ4_decompress_safe_continue(int *a1, uint8_t *a2, char *src, int a4, int a5)
{
  char *v5;
  unsigned int v6;
  int v7;
  int result;

  v5 = (char *)a1[2];
  if ( v5 == src )
  {
    result = sub_CC5F00(a2, (unsigned int)(uintptr_t)(v5), a4, a5, 1, 0, 0, 2, &v5[-a1[3]], *a1, a1[1]);
    if ( result > 0 )
    {
      a1[3] += result;
      a1[2] += result;
    }
  }
  else
  {
    v6 = a1[3];
    v7 = (int)(uintptr_t)(&v5[-v6]);
    a1[1] = v6;
    *a1 = v7;
    result = sub_CC5F00(a2, (unsigned int)(uintptr_t)(src), a4, a5, 1, 0, 0, 2, src, v7, v6);
    if ( result > 0 )
    {
      a1[3] = result;
      a1[2] = (int)(uintptr_t)(&src[result]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_fast_continue  (binary VA: 0xcc8070)
// Original: LZ4_decompress_fast_continue
// ----------------------------------------------------------------------------
int LZ4_decompress_fast_continue(int *a1, uint8_t *a2, char *src, int a4)
{
  char *v4;
  unsigned int v5;
  int result;

  v4 = (char *)a1[2];
  if ( v4 == src )
  {
    result = sub_CC5F00(a2, (unsigned int)(uintptr_t)(v4), 0, a4, 0, 0, 0, 2, &v4[-a1[3]], *a1, a1[1]);
    if ( result > 0 )
    {
      a1[3] += a4;
      a1[2] += a4;
    }
  }
  else
  {
    v5 = a1[3];
    a1[1] = v5;
    *a1 = (int)(uintptr_t)(&src[-v5]);
    result = sub_CC5F00(a2, (unsigned int)(uintptr_t)(src), 0, a4, 0, 0, 0, 2, src, (int)(uintptr_t)(&src[-v5]), v5);
    if ( result > 0 )
    {
      a1[3] = a4;
      a1[2] = (int)(uintptr_t)(&src[a4]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_safe_usingDict  (binary VA: 0xcc8160)
// Original: LZ4_decompress_safe_usingDict
// ----------------------------------------------------------------------------
int LZ4_decompress_safe_usingDict(uint8_t *a1, char *a2, int a3, int a4, int a5, int a6)
{
  int v7;
  char *src;
  int v9;
  unsigned int v10;

  if ( a6 == 0 )
    return sub_CC5F00(a1, (unsigned int)(uintptr_t)(a2), a3, a4, 1, 0, 0, 0, a2, 0, 0);
  if ( a2 == (char *)(a5 + a6) )
  {
    v10 = 0;
    v9 = 0;
    if ( a6 <= 65534 )
      return sub_CC5F00(a1, (unsigned int)(uintptr_t)(a2), a3, a4, 1, 0, 0, 0, &a2[-a6], 0, 0);
    v7 = 1;
    src = a2 - 0x10000;
  }
  else
  {
    v10 = a6;
    v9 = a5;
    src = a2;
    v7 = 2;
  }
  return sub_CC5F00(a1, (unsigned int)(uintptr_t)(a2), a3, a4, 1, 0, 0, v7, src, v9, v10);
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_fast_usingDict  (binary VA: 0xcc8270)
// Original: LZ4_decompress_fast_usingDict
// ----------------------------------------------------------------------------
int LZ4_decompress_fast_usingDict(uint8_t *a1, char *src, int a3, int a4, int a5)
{
  if ( a5 == 0 )
    return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), 0, a3, 0, 0, 0, 0, src, 0, 0);
  if ( src != (char *)(a4 + a5) )
    return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), 0, a3, 0, 0, 0, 2, src, a4, a5);
  if ( a5 <= 65534 )
    return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), 0, a3, 0, 0, 0, 0, &src[-a5], 0, 0);
  return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), 0, a3, 0, 0, 0, 1, src - 0x10000, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_safe_forceExtDict  (binary VA: 0xcc8360)
// Original: LZ4_decompress_safe_forceExtDict
// ----------------------------------------------------------------------------
int LZ4_decompress_safe_forceExtDict(uint8_t *a1, char *src, int a3, int a4, int a5, unsigned int a6)
{
  return sub_CC5F00(a1, (unsigned int)(uintptr_t)(src), a3, a4, 1, 0, 0, 2, src, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: LZ4_uncompress  (binary VA: 0xcc83c0)
// Original: LZ4_uncompress
// ----------------------------------------------------------------------------
int LZ4_uncompress(uint8_t *a1, unsigned int a2, int a3)
{
  return LZ4_decompress_fast(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: LZ4_uncompress_unknownOutputSize  (binary VA: 0xcc8400)
// Original: LZ4_uncompress_unknownOutputSize
// ----------------------------------------------------------------------------
int LZ4_uncompress_unknownOutputSize(uint8_t *a1, char *a2, int a3, int a4)
{
  return LZ4_decompress_safe(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: LZ4_sizeofStreamState  (binary VA: 0xcc8440)
// Original: LZ4_sizeofStreamState
// ----------------------------------------------------------------------------
int LZ4_sizeofStreamState()
{
  return 16416;
}

// ----------------------------------------------------------------------------
// Function: LZ4_resetStreamState  (binary VA: 0xcc8450)
// Original: LZ4_resetStreamState
// ----------------------------------------------------------------------------
int LZ4_resetStreamState(void *s, int a2)
{
  int result;

  result = 1;
  if ( ((uint8_t)(uintptr_t)s & 3) == 0 )
  {
    memset(s, 0, 0x4020u);
    *((uint32_t *)s + 4099) = a2;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_create  (binary VA: 0xcc84b0)
// Original: LZ4_create
// ----------------------------------------------------------------------------
uint32_t * LZ4_create(int a1)
{
  uint32_t *v1;

  v1 = (uint32_t *)(calloc(8u, 0x804u));
  memset(v1, 0, 0x4020u);
  v1[4099] = a1;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: LZ4_slideInputBuffer  (binary VA: 0xcc8510)
// Original: LZ4_slideInputBuffer
// ----------------------------------------------------------------------------
size_t LZ4_slideInputBuffer(int a1)
{
  return *(uint32_t *)(a1 + 16396) + LZ4_saveDict(a1, *(void **)(a1 + 16396), 0x10000u);
}

// ----------------------------------------------------------------------------
// Function: LZ4_sizeofState  (binary VA: 0xcc8560)
// Original: LZ4_sizeofState
// ----------------------------------------------------------------------------
int LZ4_sizeofState()
{
  return 16416;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress_withState  (binary VA: 0xcc8570)
// Original: LZ4_compress_withState
// ----------------------------------------------------------------------------
int LZ4_compress_withState(uint32_t *s, char *a2, uint8_t *a3, int a4)
{
  int result;

  result = 0;
  if ( ((uint8_t)(uintptr_t)s & 3) == 0 )
  {
    memset(s, 0, 0x4020u);
    if ( a4 <= 65546 )
      return sub_CC67E0(s, a2, a3, a4, 0, 0, 2, 0, 0);
    else
      return sub_CC67E0(s, a2, a3, a4, 0, 0, 0, 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_compress_limitedOutput_withState  (binary VA: 0xcc8630)
// Original: LZ4_compress_limitedOutput_withState
// ----------------------------------------------------------------------------
int LZ4_compress_limitedOutput_withState(uint32_t *s, char *a2, uint8_t *a3, int a4, unsigned int a5)
{
  int result;

  result = 0;
  if ( ((uint8_t)(uintptr_t)s & 3) == 0 )
  {
    memset(s, 0, 0x4020u);
    if ( a4 <= 65546 )
      return sub_CC67E0(s, a2, a3, a4, a5, 1, 2, 0, 0);
    else
      return sub_CC67E0(s, a2, a3, a4, a5, 1, 0, 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_safe_withPrefix64k  (binary VA: 0xcc86f0)
// Original: LZ4_decompress_safe_withPrefix64k
// ----------------------------------------------------------------------------
int LZ4_decompress_safe_withPrefix64k(uint8_t *a1, unsigned int a2, int a3, int a4)
{
  return sub_CC5F00(a1, a2, a3, a4, 1, 0, 0, 1, (char *)(a2 - 0x10000), 0, 0x10000u);
}

// ----------------------------------------------------------------------------
// Function: LZ4_decompress_fast_withPrefix64k  (binary VA: 0xcc8750)
// Original: LZ4_decompress_fast_withPrefix64k
// ----------------------------------------------------------------------------
int LZ4_decompress_fast_withPrefix64k(uint8_t *a1, unsigned int a2, int a3)
{
  return sub_CC5F00(a1, a2, 0, a3, 0, 0, 0, 1, (char *)(a2 - 0x10000), 0, 0x10000u);
}


