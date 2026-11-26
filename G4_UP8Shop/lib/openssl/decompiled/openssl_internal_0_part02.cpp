#include "Core/Utils/DecompTypes.h"
#include "openssl_internal_0_part02.h"

// ----------------------------------------------------------------------------
// Function: OPENSSL_stderr  (binary VA: 0x1982520)
// Original: OPENSSL_stderr
// ----------------------------------------------------------------------------
char * OPENSSL_stderr()
{
  return ((char *)stderr);
}

// ----------------------------------------------------------------------------
// Function: sub_1982540  (binary VA: 0x1982540)
// Original: sub_1982540
// ----------------------------------------------------------------------------
int sub_1982540(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1982550  (binary VA: 0x1982550)
// Original: sub_1982550
// ----------------------------------------------------------------------------
int sub_1982550(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1982560  (binary VA: 0x1982560)
// Original: sub_1982560
// ----------------------------------------------------------------------------
void sub_1982560()
{
  CRYPTO_lock(9, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( dword_2140540 == 0 )
    dword_2140540 = (int)((uint32_t)(uintptr_t)&off_20CB534);
  CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19825F0  (binary VA: 0x19825f0)
// Original: sub_19825F0
// ----------------------------------------------------------------------------
int sub_19825F0()
{
  int v0;

  CRYPTO_lock(9, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  v0 = off_20CB530++;
  CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: sub_1982680  (binary VA: 0x1982680)
// Original: sub_1982680
// ----------------------------------------------------------------------------
int sub_1982680(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19826B0  (binary VA: 0x19826b0)
// Original: sub_19826B0
// ----------------------------------------------------------------------------
bool sub_19826B0()
{
  bool v0;

  CRYPTO_lock(9, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  v0 = true;
  if ( dword_2140544 == 0 )
  {
    dword_2140544 = (uint32_t)(uintptr_t)(lh_new(sub_1982540, sub_1982550));
    v0 = dword_2140544 != 0;
  }
  CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: sub_1982770  (binary VA: 0x1982770)
// Original: sub_1982770
// ----------------------------------------------------------------------------
uint32_t * sub_1982770(int a1)
{
  uint32_t *v2;
  uint32_t *v4;
  int v5;
  typedef uint32_t *_g4_t_v6;
  typedef int _g4_t_v7[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);

  if ( dword_2140544 != 0 || (v2 = nullptr, sub_19826B0()) )
  {
    v7[0] = a1;
    CRYPTO_lock(9, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    v2 = (uint32_t *)lh_retrieve(dword_2140544, v7);
    if ( v2 != nullptr )
    {
LABEL_3:
      CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
      return v2;
    }
    v4 = (uint32_t *)CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v4 != nullptr )
    {
      *v4 = a1;
      v4[2] = 0;
      v6 = v4;
      v5 = (int)(uintptr_t)(sk_new_null());
      v6[1] = v5;
      if ( v5 != 0 )
      {
        lh_insert(dword_2140544, v6);
        v2 = v6;
        goto LABEL_3;
      }
      CRYPTO_free(v6);
    }
    CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    ERR_put_error(15, 105, 65, &unk_1B15112, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19828E0  (binary VA: 0x19828e0)
// Original: sub_19828E0
// ----------------------------------------------------------------------------
int sub_19828E0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  uint32_t *v7;
  void *v8;
  int v9;
  int v10;

  v6 = sub_1982770(a1);
  if ( v6 == nullptr )
    return -1;
  v7 = (uint32_t *)CRYPTO_malloc(0x14u, (int)(uintptr_t)(&unk_1B15112), 0);
  v8 = v7;
  if ( v7 != nullptr )
  {
    *v7 = a2;
    v7[1] = a3;
    v7[2] = a4;
    v7[4] = a5;
    v7[3] = a6;
    CRYPTO_lock(9, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    while ( 1 )
    {
      v9 = sk_num(v6[1]);
      v10 = v6[2];
      if ( v9 > v10 )
        break;
      if ( sk_push(v6[1], 0) == 0 )
      {
        v10 = -1;
        ERR_put_error(15, 104, 65, &unk_1B15112, 0);
        CRYPTO_free(v8);
        goto LABEL_7;
      }
    }
    v6[2] = v10 + 1;
    sk_set(v6[1], v10, v8);
LABEL_7:
    CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    return v10;
  }
  ERR_put_error(15, 104, 65, &unk_1B15112, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_1982A80  (binary VA: 0x1982a80)
// Original: sub_1982A80
// ----------------------------------------------------------------------------
int sub_1982A80()
{
  int v0;
  int result;

  v0 = dword_2140544;
  if ( dword_2140544 != 0 )
    goto LABEL_2;
  result = sub_19826B0();
  if ( result != 0 )
  {
    v0 = dword_2140544;
LABEL_2:
    lh_doall(v0, sub_1982AF0);
    lh_free((void *)dword_2140544);
    dword_2140544 = 0;
    dword_2140540 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1982AF0  (binary VA: 0x1982af0)
// Original: sub_1982AF0
// ----------------------------------------------------------------------------
int sub_1982AF0(void **a1)
{
  sk_pop_free(a1[1], (int)(uintptr_t)(sub_1982680));
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1982F30  (binary VA: 0x1982f30)
// Original: sub_1982F30
// ----------------------------------------------------------------------------
uint32_t * sub_1982F30(int a1, int a2, uint32_t *a3)
{
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;

  result = sub_1982770(a1);
  v12 = result;
  if ( result == nullptr )
    return result;
  CRYPTO_lock(5, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = sk_num(v12[1]);
  v5 = v4;
  if ( v4 <= 0 )
  {
    CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    result = (uint32_t *)*a3;
    if ( *a3 == 0 )
      return result;
LABEL_14:
    result = (uint32_t *)sk_free(result);
    *a3 = 0;
    return result;
  }
  v6 = (int)(uintptr_t)(CRYPTO_malloc(4 * v4, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v6 == 0 )
  {
    CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    return (uint32_t *)ERR_put_error(15, 107, 65, &unk_1B15112, 0);
  }
  v7 = 0;
  v11 = (uint32_t *)v6;
  do
  {
    v11[v7] = sk_value(v12[1], v7);
    ++v7;
  }
  while ( v7 != v5 );
  v8 = 0;
  CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  do
  {
    v9 = v11[v8];
    if ( v9 != 0 && *(uint32_t *)(v9 + 12) != 0 )
    {
      v10 = CRYPTO_get_ex_data(a3, v8);
      (*(void (**)(int, int, uint32_t *, int, uint32_t, uint32_t))(v11[v8] + 12))(
        a2,
        v10,
        a3,
        v8,
        *(uint32_t *)v11[v8],
        *(uint32_t *)(v11[v8] + 4));
    }
    ++v8;
  }
  while ( v8 != v5 );
  CRYPTO_free(v11);
  result = (uint32_t *)*a3;
  if ( *a3 != 0 )
    goto LABEL_14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1983130  (binary VA: 0x1983130)
// Original: sub_1983130
// ----------------------------------------------------------------------------
int sub_1983130(int a1, int *a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  void (*v10)(int *, uint32_t *, int *, int, uint32_t, uint32_t);
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v13)) > _g4_s1 ? (32u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v14)) > _g4_s2 ? (36u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v15)) > _g4_s3 ? (60u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);

  v3 = 1;
  if ( *a3 == 0 )
    return v3;
  LOWORD(v3) = 0;
  v14 = sub_1982770(a1);
  if ( v14 == nullptr )
    return v3;
  CRYPTO_lock(5, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = sk_num(v14[1]);
  v5 = sk_num(*a3);
  if ( v5 <= v4 )
    v4 = v5;
  v13 = v4;
  if ( v4 > 0 )
  {
    v6 = (uint32_t *)CRYPTO_malloc(4 * v4, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v6 != nullptr )
    {
      do
      {
        v6[v3] = sk_value(v14[1], v3);
        ++v3;
      }
      while ( v3 != v13 );
      v7 = 0;
      CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
      do
      {
        v8 = CRYPTO_get_ex_data(a3, v7);
        v15[0] = v8;
        v9 = (uint32_t *)v6[v7];
        if ( v9 != nullptr )
        {
          v10 = (void (*)(int *, uint32_t *, int *, int, uint32_t, uint32_t))v9[4];
          if ( v10 != nullptr )
          {
            v10(a2, a3, v15, v7, *v9, v9[1]);
            v8 = v15[0];
          }
        }
        v12 = v7++;
        CRYPTO_set_ex_data(a2, v12, v8);
      }
      while ( v7 != v13 );
      v3 = 1;
      CRYPTO_free(v6);
    }
    else
    {
      CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_put_error(15, 106, 65, &unk_1B15112, 0);
    }
    return v3;
  }
  CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1983360  (binary VA: 0x1983360)
// Original: sub_1983360
// ----------------------------------------------------------------------------
int sub_1983360(int a1, int a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v11;
  uint32_t *v12;

  v3 = 0;
  v12 = sub_1982770(a1);
  if ( v12 == nullptr )
    return v3;
  *a3 = 0;
  CRYPTO_lock(5, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = sk_num(v12[1]);
  v5 = v4;
  if ( v4 > 0 )
  {
    v6 = (int)(uintptr_t)(CRYPTO_malloc(4 * v4, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v6 != 0 )
    {
      v11 = (uint32_t *)v6;
      do
      {
        v11[v3] = sk_value(v12[1], v3);
        ++v3;
      }
      while ( v3 != v5 );
      v7 = 0;
      CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
      do
      {
        v8 = v11[v7];
        if ( v8 != 0 && *(uint32_t *)(v8 + 8) != 0 )
        {
          v9 = CRYPTO_get_ex_data(a3, v7);
          (*(void (**)(int, int, uint32_t *, int, uint32_t, uint32_t))(v11[v7] + 8))(
            a2,
            v9,
            a3,
            v7,
            *(uint32_t *)v11[v7],
            *(uint32_t *)(v11[v7] + 4));
        }
        ++v7;
      }
      while ( v7 != v5 );
      v3 = 1;
      CRYPTO_free(v11);
    }
    else
    {
      CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_put_error(15, 108, 65, &unk_1B15112, 0);
    }
    return v3;
  }
  CRYPTO_lock(6, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1983550  (binary VA: 0x1983550)
// Original: sub_1983550
// ----------------------------------------------------------------------------
void * sub_1983550(size_t size)
{
  return ((void *(*)(size_t))off_20CB554)(size);
}

// ----------------------------------------------------------------------------
// Function: sub_1983580  (binary VA: 0x1983580)
// Original: sub_1983580
// ----------------------------------------------------------------------------
void * sub_1983580(void *ptr, size_t size)
{
  return ((void *(*)(void *, size_t))off_20CB558)(ptr, size);
}

// ----------------------------------------------------------------------------
// Function: sub_19835B0  (binary VA: 0x19835b0)
// Original: sub_19835B0
// ----------------------------------------------------------------------------
void * sub_19835B0(size_t size)
{
  return ((void *(*)(size_t))off_20CB560)(size);
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_cleanse  (binary VA: 0x1984030)
// Original: OPENSSL_cleanse
// ----------------------------------------------------------------------------
void * OPENSSL_cleanse(uint8_t *s, size_t n)
{
  uint8_t v2;
  size_t v3;
  uint8_t *v4;
  uint8_t v5; // si
  void *result;
  uint8_t v7;

  v2 = cleanse_ctr;
  if ( n != 0 )
  {
    v3 = n;
    v4 = s;
    do
    {
      *v4++ = v2;
      --v3;
      v2 += ((uint8_t)(uintptr_t)(v4) & 0xF) + 17;
    }
    while ( v3 != 0 );
  }
  v5 = v2;
  v7 = v2;
  result = memchr(s, v2, n);
  if ( result != nullptr )
    v5 = (uint8_t)(uintptr_t)(result) + v7 + 63;
  cleanse_ctr = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19840B0  (binary VA: 0x19840b0)
// Original: sub_19840B0
// ----------------------------------------------------------------------------
int sub_19840B0(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19840C0  (binary VA: 0x19840c0)
// Original: sub_19840C0
// ----------------------------------------------------------------------------
int sub_19840C0(uint32_t *a1)
{
  return 251 * (*a1 >> 4) + 7 * (*a1 >> 14) + 17851 * *a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1984100  (binary VA: 0x1984100)
// Original: sub_1984100
// ----------------------------------------------------------------------------
int sub_1984100(uint32_t *a1, int (**a2)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))
{
  return (*a2)(a1[6], a1[2], a1[3], a1[1], *a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1984140  (binary VA: 0x1984140)
// Original: sub_1984140
// ----------------------------------------------------------------------------
int sub_1984140(int a1)
{
  unsigned int v1;

  v1 = CRYPTO_THREADID_hash(a1);
  return 17851 * v1 + 7 * (v1 >> 14) + 251 * (v1 >> 4);
}

// ----------------------------------------------------------------------------
// Function: sub_19841A0  (binary VA: 0x19841a0)
// Original: sub_19841A0
// ----------------------------------------------------------------------------
int sub_19841A0(int a1, int *a2)
{
  int result;
  char *v4;
  char *s;
  const char *v6;
  uint32_t *v7;
  int n;
  int v9;
  unsigned int v10;
  int v11;
  char *v12; // kr00_4
  struct tm *v13;
  char *v14;
  int v15;
  unsigned int v16;
  char *v17;
  int v18;
  typedef char *_g4_t_v19;
  typedef char *_g4_t_src;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v23[2];
  typedef char _g4_t_v24[1052];
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_src)) > _g4_s1 ? (8u + sizeof(_g4_t_src)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v23)) > _g4_s3 ? (40u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v24)) > _g4_s4 ? (48u + sizeof(_g4_t_v24)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);

  result = *a2;
  if ( *(uint32_t *)a1 != *a2 )
  {
    if ( (dword_2140570 & 1) != 0 )
    {
      v13 = localtime((const time_t *)(a1 + 28));
      BIO_snprintf(v24, 1024, "[%02d:%02d:%02d] ", v13->tm_hour, v13->tm_min, v13->tm_sec);
      v14 = v24;
      do
      {
        v15 = *(uint32_t *)v14;
        v14 += 4;
        v16 = ~v15 & (v15 - 16843009) & 0x80808080;
      }
      while ( v16 == 0 );
      v17 = v14 + 2;
      if ( (~v15 & (v15 - 16843009) & 0x8080) != 0 )
        v17 = v14;
      else
        v16 >>= 16;
      s = &v17[-__CFADD__((uint8_t)v16, (uint8_t)v16) - 3];
      v4 = (char *)(v24 - s + 1024);
    }
    else
    {
      v4 = (char *)((uint8_t *)(stru_3F4 + 12));
      s = v24;
    }
    BIO_snprintf(s, v4, "%5lu file=%s, line=%d, ", *(uint32_t *)(a1 + 24), *(uint32_t *)(a1 + 8), *(uint32_t *)(a1 + 12));
    v6 = &s[strlen(s)];
    if ( (dword_2140570 & 2) != 0 )
    {
      v18 = CRYPTO_THREADID_hash(a1 + 16);
      BIO_snprintf(v6, v24 - v6 + 1024, "thread=%lu, ", v18);
      v6 += strlen(v6);
    }
    BIO_snprintf(v6, v24 - v6 + 1024, "number=%d, address=%08lX\n", *(uint32_t *)(a1 + 4), *(uint32_t *)a1);
    BIO_puts(*a2, v24);
    ++a2[1];
    result = *(uint32_t *)(a1 + 4);
    a2[2] += result;
    v7 = *(uint32_t **)(a1 + 32);
    if ( v7 != nullptr )
    {
      n = 0;
      CRYPTO_THREADID_cpy(v23, v7);
      do
      {
        memset(v24, 62, ++n);
        v19 = (char *)v7[2];
        v21 = v7[3];
        v11 = CRYPTO_THREADID_hash((int)(uintptr_t)(v7));
        BIO_snprintf(&v24[n], 1024 - n, " thread=%lu, file=%s, line=%d, info=\"", v11, v19, v21);
        v12 = &v24[strlen(v24)];
        src = (char *)v7[4];
        if ( (int)strlen(src) > 125 - (v12 - v24) )
        {
          memcpy(v12, src, 125 - (v12 - v24));
          v9 = 899;
          v10 = 125;
        }
        else
        {
          BUF_strlcpy((int)(uintptr_t)(v12), src, 1024 - (v12 - v24));
          v10 = strlen(v24);
          v9 = 1024 - v10;
        }
        BIO_snprintf(&v24[v10], v9, "\"\n");
        result = BIO_puts(*a2, v24);
        v7 = (uint32_t *)v7[5];
        if ( v7 == nullptr )
          break;
        result = CRYPTO_THREADID_cmp(v7, v23);
      }
      while ( result == 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19844F0  (binary VA: 0x19844f0)
// Original: sub_19844F0
// ----------------------------------------------------------------------------
int sub_19844F0(int a1, int *a2)
{
  return sub_19841A0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1984500  (binary VA: 0x1984500)
// Original: sub_1984500
// ----------------------------------------------------------------------------
int sub_1984500(void *a1, void *a2)
{
  return CRYPTO_THREADID_cmp(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1984530  (binary VA: 0x1984530)
// Original: sub_1984530
// ----------------------------------------------------------------------------
int sub_1984530(uint32_t *a1)
{
  int result;

  result = a1[6] - 1;
  a1[6] = result;
  if ( result <= 0 )
  {
    if ( a1[5] != 0 )
      sub_1984530();
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1984590  (binary VA: 0x1984590)
// Original: sub_1984590
// ----------------------------------------------------------------------------
uint32_t * sub_1984590(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;
  bool v6;
  uint32_t v8[7];

  v2 = nullptr;
  if ( dword_2140574 != 0 )
  {
    CRYPTO_THREADID_current(a1, a2, v8);
    v3 = (uint32_t *)lh_delete(dword_2140574, v8);
    v2 = v3;
    if ( v3 != nullptr )
    {
      v4 = v3[5];
      if ( v4 != 0 )
      {
        ++*(uint32_t *)(v4 + 24);
        lh_insert(dword_2140574, v4);
      }
      v5 = v2[6] - 1;
      v6 = v2[6] == 1;
      v2[6] = v5;
      if ( v5 < 0 || v6 )
      {
        v2[5] = 0;
        if ( v4 != 0 )
          --*(uint32_t *)(v4 + 24);
        CRYPTO_free(v2);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_DIR_read  (binary VA: 0x1985150)
// Original: OPENSSL_DIR_read
// ----------------------------------------------------------------------------
int OPENSSL_DIR_read(int a1, int a2, void **a3, char *name)
{
  DIR *dirp;
  struct dirent *v5;
  int v6;
  void *v8;
  int v9;
  int v10;
  DIR **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  if ( name == nullptr || a3 == nullptr )
  {
    *(uint32_t *)__errno(a1, a2) = 22;
    return 0;
  }
  *(uint32_t *)__errno(a1, a2) = 0;
  if ( *a3 != nullptr )
  {
    dirp = *(DIR **)*a3;
  }
  else
  {
    v8 = malloc(0x1008u);
    *a3 = v8;
    if ( v8 == nullptr )
    {
      *(uint32_t *)__errno(v10, v9) = 12;
      return 0;
    }
    memset(v8, 0, 0x1008u);
    v11 = (DIR **)*a3;
    *v11 = opendir(name);
    dirp = *(DIR **)*a3;
    if ( dirp == nullptr )
    {
      v14 = *(uint32_t *)__errno(v13, v12);
      free(*a3);
      *a3 = nullptr;
      *(uint32_t *)__errno(v16, v15) = v14;
      return 0;
    }
  }
  v5 = readdir(dirp);
  v6 = 0;
  if ( v5 != nullptr )
  {
    strncpy((char *)*a3 + 4, &v5->d_name[8], 0x1000u);
    *((uint8_t *)*a3 + 4100) = 0;
    return (int)(uintptr_t)(*a3) + 4;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_DIR_end  (binary VA: 0x1985280)
// Original: OPENSSL_DIR_end
// ----------------------------------------------------------------------------
int OPENSSL_DIR_end(int a1, int a2, DIR ***a3)
{
  int v3;

  if ( a3 == nullptr
    || *a3 == nullptr
    || (v3 = closedir(**a3), free(*a3), a2 = 0, v3 != -1) && (LOBYTE(a2) = 1, v3 != 0) )
  {
    *(uint32_t *)__errno(a1, a2) = 22;
    return 0;
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: i2c_ASN1_INTEGER  (binary VA: 0x19853a0)
// Original: i2c_ASN1_INTEGER
// ----------------------------------------------------------------------------
int i2c_ASN1_INTEGER(int a1, char **a2)
{
  int v2;
  uint8_t *v3;
  signed int n;
  int v5;
  unsigned int v7;
  int v8;
  char *v9;
  char v10; // bp
  char *v11;
  int v12;
  char *dest;
  int v14;
  signed int v15;
  char v16;

  v2 = 0;
  if ( a1 != 0 )
  {
    v3 = *(uint8_t **)(a1 + 8);
    if ( v3 != nullptr )
    {
      n = *(uint32_t *)a1;
      v5 = *(uint32_t *)(a1 + 4) & 0x100;
      if ( *(uint32_t *)a1 != 0 )
      {
        v7 = *v3;
        if ( v7 <= 0x7F || (v16 = 0, v14 = 1, v5 != 0) )
        {
          v16 = 0;
          v14 = 0;
          if ( v5 != 0 )
          {
            v16 = -1;
            v14 = 1;
            if ( *v3 <= 0x80u )
            {
              v16 = 0;
              v14 = 0;
              if ( v7 == 128 && n > 1 )
              {
                v16 = -1;
                v14 = 1;
                v8 = 1;
                if ( v3[1] == 0 )
                {
                  do
                  {
                    if ( ++v8 == n )
                    {
                      v16 = 0;
                      v14 = 0;
                      goto LABEL_14;
                    }
                  }
                  while ( v3[v8] == 0 );
                  v16 = -1;
                  v14 = 1;
                }
              }
            }
          }
        }
LABEL_14:
        v2 = n + v14;
      }
      else
      {
        v16 = 0;
        v2 = 1;
        v14 = 0;
      }
      if ( a2 != nullptr )
      {
        dest = *a2;
        if ( v14 != 0 )
        {
          *dest++ = v16;
          n = *(uint32_t *)a1;
        }
        if ( n != 0 )
        {
          if ( v5 != 0 )
          {
            v15 = n - 1;
            v9 = (char *)(*(uint32_t *)(a1 + 8) + n - 1);
            v10 = *v9;
            v11 = &dest[n - 1];
            if ( *v9 == 0 )
            {
              while ( 1 )
              {
                --v9;
                *v11 = 0;
                v10 = *v9;
                --v11;
                n = v15;
                if ( *v9 != 0 )
                  break;
                --v15;
              }
            }
            *v11 = -v10;
            if ( n > 1 )
            {
              v12 = 0;
              do
              {
                v11[v12 - 1] = ~v9[v12 - 1];
                --v12;
              }
              while ( v12 != 1 - n );
            }
          }
          else
          {
            memcpy(dest, *(const void **)(a1 + 8), n);
          }
        }
        else
        {
          *dest = 0;
        }
        *a2 += v2;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: c2i_ASN1_INTEGER  (binary VA: 0x1985590)
// Original: c2i_ASN1_INTEGER
// ----------------------------------------------------------------------------
void * c2i_ASN1_INTEGER(uint32_t *a1, char **a2, size_t a3)
{
  uint32_t *v3;
  size_t n;
  void *v5;
  char *src;
  uint32_t *v8;
  char *v9;
  int v10;
  uint8_t *v11;
  char *v12;
  char v13;
  int v14;
  int v15;
  void *dest;
  char *v17;
  size_t v18;
  uint8_t *v19;
  char *v20;
  char v21;
  uint8_t *v22;

  v3 = a1;
  n = a3;
  if ( a1 == nullptr || (v5 = (void *)*a1, *a1 == 0) )
  {
    v8 = (uint32_t *)ASN1_STRING_type_new(2);
    v5 = v8;
    if ( v8 == nullptr )
      return v5;
    v8[1] = 2;
  }
  v20 = *a2;
  v19 = CRYPTO_malloc(a3 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v19 != nullptr )
  {
    if ( a3 != 0 )
    {
      if ( *v20 < 0 )
      {
        *((uint32_t *)v5 + 1) = 258;
        if ( *v20 == -1 && a3 != 1 )
        {
          n = a3 - 1;
          v9 = v20 + 1;
        }
        else
        {
          v9 = v20;
        }
        v10 = n;
        v17 = &v9[n - 1];
        v11 = &v19[n - 1];
        v22 = v11;
        v21 = *v17;
        if ( *v17 == 0 && n != 0 )
        {
          v18 = n;
          v12 = &v9[n - 1];
          while ( 1 )
          {
            --v12;
            *v11-- = 0;
            v13 = *v12;
            --v18;
            if ( *v12 != 0 )
              break;
            if ( v18 == 0 )
              goto LABEL_29;
          }
          v13 = *v12;
LABEL_29:
          v21 = v13;
          v22 = v11;
          v10 = v18;
          v17 = v12;
        }
        if ( v10 != 0 )
        {
          *v22 = -v21;
          if ( v10 > 1 )
          {
            v14 = 1 - v10;
            v15 = 0;
            do
            {
              v22[v15 - 1] = ~v17[v15 - 1];
              --v15;
            }
            while ( v15 != v14 );
            v3 = a1;
          }
        }
        else
        {
          *v19 = 1;
          v19[n++] = 0;
        }
      }
      else
      {
        *((uint32_t *)v5 + 1) = 2;
        if ( *v20 != 0 || a3 == 1 )
        {
          src = v20;
        }
        else
        {
          n = a3 - 1;
          src = v20 + 1;
        }
        memcpy(v19, src, n);
      }
    }
    else
    {
      *((uint32_t *)v5 + 1) = 2;
    }
    if ( *((uint32_t *)v5 + 2) != 0 )
      CRYPTO_free(*((void **)v5 + 2));
    *((uint32_t *)v5 + 2) = (uint32_t)(uintptr_t)(v19);
    *(uint32_t *)v5 = n;
    if ( v3 != nullptr )
      *v3 = (uint32_t)(uintptr_t)(v5);
    *a2 = &v20[a3];
  }
  else
  {
    ERR_put_error(13, 194, 65, &unk_1B15112, 0);
    if ( a1 != nullptr && (void *)*a1 == v5 )
    {
      return nullptr;
    }
    else
    {
      dest = v5;
      v5 = nullptr;
      ASN1_STRING_free(dest);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1985DF0  (binary VA: 0x1985df0)
// Original: sub_1985DF0
// ----------------------------------------------------------------------------
int sub_1985DF0(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1985E10  (binary VA: 0x1985e10)
// Original: sub_1985E10
// ----------------------------------------------------------------------------
int sub_1985E10(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19865A0  (binary VA: 0x19865a0)
// Original: sub_19865A0
// ----------------------------------------------------------------------------
char sub_19865A0(int a1)
{
  int v2;
  int v3;

  if ( *(uint32_t *)(a1 + 12) != 33
    || *(uint32_t *)(a1 + 4) != 0
    || (LOBYTE(v3) = ASN1_const_check_infinite_end((uint32_t *)a1, *(uint32_t *)(a1 + 24)), v3 != 0) )
  {
    v2 = *(uint32_t *)(a1 + 24);
    LOBYTE(v3) = 1;
    if ( v2 != 0 && ((*(uint8_t *)(a1 + 12) & 1) == 0 || v2 < 0) )
    {
      *(uint32_t *)(a1 + 8) = 62;
      LOBYTE(v3) = 0;
    }
  }
  else
  {
    *(uint32_t *)(a1 + 8) = 63;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: asn1_Finish  (binary VA: 0x1986a10)
// Original: asn1_Finish
// ----------------------------------------------------------------------------
char asn1_Finish(int a1)
{
  return sub_19865A0(a1);
}

// ----------------------------------------------------------------------------
// Function: asn1_const_Finish  (binary VA: 0x1986a20)
// Original: asn1_const_Finish
// ----------------------------------------------------------------------------
char asn1_const_Finish(int a1)
{
  return sub_19865A0(a1);
}

// ----------------------------------------------------------------------------
// Function: asn1_GetSequence  (binary VA: 0x1986a30)
// Original: asn1_GetSequence
// ----------------------------------------------------------------------------
int asn1_GetSequence(int a1, int *a2)
{
  uint8_t *v2;
  int object;
  int v5;

  v2 = *(uint8_t **)a1;
  object = ASN1_get_object((uint8_t **)a1, (int *)(a1 + 24), (int *)(a1 + 16), (int *)(a1 + 20), *a2);
  *(uint32_t *)(a1 + 12) = object;
  if ( (object & 0x80u) != 0 )
  {
    *(uint32_t *)(a1 + 8) = 60;
    return 0;
  }
  else if ( *(uint32_t *)(a1 + 16) == 16 )
  {
    v5 = (int)(uintptr_t)(&v2[*a2 - *(uint32_t *)a1]);
    *a2 = v5;
    if ( *(uint32_t *)(a1 + 28) != 0 && v5 < 0 )
    {
      *(uint32_t *)(a1 + 8) = 62;
      return 0;
    }
    else
    {
      if ( *(uint32_t *)(a1 + 12) == 33 )
        *(uint32_t *)(a1 + 24) = **(uint32_t **)(a1 + 36) + v5 - *(uint32_t *)a1;
      *(uint32_t *)(a1 + 4) = 0;
      return 1;
    }
  }
  else
  {
    *(uint32_t *)(a1 + 8) = 61;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: asn1_add_error  (binary VA: 0x1986f20)
// Original: asn1_add_error
// ----------------------------------------------------------------------------
int asn1_add_error(int a1, int a2)
{
  typedef uint8_t _g4_t_v3[13];
  typedef uint8_t _g4_t_v4[13];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (17u + sizeof(_g4_t_v4)) > _g4_s1 ? (17u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 17u);

  BIO_snprintf(v3, 13, &off_1B84217, a1);
  BIO_snprintf(v4, 13, "%d", a2);
  return (int)(uintptr_t)(ERR_add_error_data(4, "address=", v3, " offset=", v4));
}

// ----------------------------------------------------------------------------
// Function: sub_1987320  (binary VA: 0x1987320)
// Original: sub_1987320
// ----------------------------------------------------------------------------
int sub_1987320(int a1, int a2)
{
  int v3;

  if ( a1 != 2 )
    return 1;
  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a2 + 12) + 4);
  if ( v3 == 0 )
    return 1;
  OPENSSL_cleanse(*(uint8_t **)(v3 + 8), *(uint32_t *)v3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19875E0  (binary VA: 0x19875e0)
// Original: sub_19875E0
// ----------------------------------------------------------------------------
int sub_19875E0(uint32_t *a1, uint32_t *a2, uint8_t *a3, uint8_t *a4, uint8_t *a5, uint32_t *a6, int a7, int a8, int a9, char a10, int a11)
{
  uint8_t *v12;
  int object;
  int result;
  int v15;
  uint8_t *v16;
  uint8_t *v17;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t *_g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);

  v12 = (uint8_t *)*a6;
  v22[0] = *(uint8_t **)a6;
  if ( a11 != 0 )
  {
    if ( *(uint8_t *)a11 != 0 )
    {
      object = *(uint32_t *)(a11 + 4);
      v21 = *(uint32_t *)(a11 + 8);
      v20 = *(uint32_t *)(a11 + 16);
      v19 = *(uint32_t *)(a11 + 12);
      v22[0] = &v12[*(uint32_t *)(a11 + 20)];
    }
    else
    {
      object = ASN1_get_object(v22, &v21, &v19, &v20, a7);
      v15 = v21;
      *(uint32_t *)(a11 + 16) = v20;
      *(uint32_t *)(a11 + 12) = v19;
      v16 = (uint8_t *)(v22[0] - v12);
      *(uint32_t *)(a11 + 4) = object;
      *(uint32_t *)(a11 + 8) = v15;
      *(uint32_t *)(a11 + 20) = (uint32_t)(uintptr_t)(v16);
      *(uint8_t *)a11 = 1;
      if ( (object & 0x81) == 0 && a7 < (int)(uintptr_t)(&v16[v15]) )
      {
        ERR_put_error(13, 104, 155, &unk_1B15112, 0);
        *(uint8_t *)a11 = 0;
        return 0;
      }
    }
  }
  else
  {
    LOBYTE(object) = ASN1_get_object(v22, &v21, &v19, &v20, a7);
  }
  if ( (object & 0x80u) != 0 )
  {
    ERR_put_error(13, 104, 102, &unk_1B15112, 0);
    result = 0;
    if ( a11 != 0 )
      *(uint8_t *)a11 = 0;
  }
  else
  {
    if ( a8 < 0 )
    {
LABEL_20:
      v17 = v22[0];
      if ( (object & 1) != 0 )
        v21 = a7 + v12 - v22[0];
      if ( a4 != nullptr )
        *a4 = object & 1;
      if ( a5 != nullptr )
        *a5 = object & 0x20;
      if ( a1 != nullptr )
        *a1 = v21;
      if ( a3 != nullptr )
        *a3 = v20;
      if ( a2 != nullptr )
        *a2 = v19;
      *a6 = (uint32_t)(uintptr_t)(v17);
      return 1;
    }
    if ( a8 == v19 && a9 == v20 )
    {
      if ( a11 != 0 )
        *(uint8_t *)a11 = 0;
      goto LABEL_20;
    }
    result = -1;
    if ( a10 == 0 )
    {
      if ( a11 != 0 )
        *(uint8_t *)a11 = 0;
      ERR_put_error(13, 104, 168, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1987880  (binary VA: 0x1987880)
// Original: sub_1987880
// ----------------------------------------------------------------------------
int sub_1987880(int *a1, void **a2, int a3, char a4, int a5)
{
  uint8_t *v6;
  int v7;
  char *v8;
  size_t v9;
  void *v11;
  typedef int _g4_t_v12;
  typedef size_t _g4_t_n;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_n)) > _g4_s1 ? (4u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (22u + sizeof(_g4_t_v15)) > _g4_s2 ? (22u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v16)) > _g4_s3 ? (23u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_src)) > _g4_s4 ? (24u + sizeof(_g4_t_src)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 22u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 23u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v6 = (uint8_t *)(*a2);
  v7 = a3;
  src = *a2;
  if ( (a4 & 1) == 0 && a1 == nullptr )
  {
    *a2 = &v6[a3];
    return 1;
  }
  if ( a3 <= 0 )
  {
LABEL_21:
    v11 = src;
    if ( (a4 & 1) != 0 )
    {
      ERR_put_error(13, 106, 137, &unk_1B15112, 0);
      return 0;
    }
    else
    {
LABEL_18:
      *a2 = v11;
      return 1;
    }
  }
  while ( v7 == 1 || *v6 != 0 || v6[1] != 0 )
  {
    if ( sub_19875E0(v18, nullptr, nullptr, &v16, &v15, &src, v7, -1, 0, 0, 0) == 0 )
    {
      ERR_put_error(13, 106, 58, &unk_1B15112, 0);
      return 0;
    }
    if ( v15 != 0 )
    {
      if ( a5 > 4 )
      {
        ERR_put_error(13, 106, 197, &unk_1B15112, 0);
        return 0;
      }
      if ( sub_1987880(v18[0], v16, a5 + 1) == 0 )
        return 0;
LABEL_6:
      v8 = (char *)src;
      v7 += v6 - (uint8_t *)src;
      if ( v7 <= 0 )
        goto LABEL_21;
      goto LABEL_7;
    }
    v9 = v18[0];
    if ( v18[0] == 0 )
      goto LABEL_6;
    if ( a1 != nullptr )
    {
      n = v18[0];
      v12 = *a1;
      if ( BUF_MEM_grow_clean(a1, v18[0] + *a1) == 0 )
      {
        ERR_put_error(13, 140, 65, &unk_1B15112, 0);
        return 0;
      }
      memcpy((void *)(a1[1] + v12), src, n);
      v9 = n;
    }
    v8 = (char *)src + v9;
    src = v8;
    v7 += v6 - (uint8_t *)(v8);
    if ( v7 <= 0 )
      goto LABEL_21;
LABEL_7:
    v6 = (uint8_t *)(v8);
  }
  v11 = v6 + 2;
  src = v11;
  if ( (a4 & 1) != 0 )
    goto LABEL_18;
  ERR_put_error(13, 106, 159, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: asn1_ex_c2i  (binary VA: 0x1987ba0)
// Original: asn1_ex_c2i
// ----------------------------------------------------------------------------
int asn1_ex_c2i(int *a1, char *s, size_t a3, int a4, uint8_t *a5, int a6)
{
  uint32_t *v6;
  int v7;
  size_t v8;
  int v9;
  int (*v10)(int *, char *, size_t, int, uint8_t *, int);
  int result;
  uint32_t *v12;
  int *v13;
  bool v14; // cc
  void *v15;
  int v16;
  int *v17;
  int v18;
  void *v19;
  int v20;
  int v21;
  size_t v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  int *v31;
  int *v32;
  int *v33;
  int *v34;
  int *v35;
  int *v36;
  int *v37;
  void **v38;

  v6 = (uint32_t *)(a1);
  v7 = *(uint32_t *)(a6 + 16);
  v8 = a3;
  v9 = a4;
  if ( v7 != 0 )
  {
    v10 = *(int (**)(int *, char *, size_t, int, uint8_t *, int))(v7 + 20);
    if ( v10 != nullptr )
      return v10(a1, s, a3, a4, a5, a6);
  }
  v12 = nullptr;
  v13 = nullptr;
  if ( *(uint32_t *)(a6 + 4) != -4 )
  {
    v14 = a4 <= 5;
    if ( a4 != 5 )
      goto LABEL_7;
LABEL_28:
    if ( v8 != 0 )
    {
      v22 = 144;
      goto LABEL_35;
    }
    *v6 = 1;
    goto LABEL_30;
  }
  v12 = (uint32_t *)*a1;
  if ( *a1 == 0 )
  {
    v21 = ASN1_TYPE_new(0);
    v12 = (uint32_t *)v21;
    if ( v21 == 0 )
    {
      ASN1_TYPE_free(0);
      return 0;
    }
    *a1 = v21;
  }
  if ( *v12 != v9 )
  {
    v25 = v12;
    ASN1_TYPE_set(v12, v9, 0);
    v12 = v25;
  }
  v14 = v9 <= 5;
  v13 = a1;
  v6 = v12 + 1;
  if ( v9 == 5 )
    goto LABEL_28;
LABEL_7:
  if ( v14 )
  {
    switch ( v9 )
    {
      case 1:
        if ( v8 != 1 )
        {
          v22 = 106;
LABEL_35:
          v26 = v12;
          v32 = v13;
          ERR_put_error(13, 204, v22, &unk_1B15112, 0);
          v12 = v26;
          v17 = v32;
          goto LABEL_36;
        }
        *v6 = (uint8_t)*s;
        goto LABEL_30;
      case 2:
LABEL_41:
        v28 = v12;
        v35 = v13;
        v19 = c2i_ASN1_INTEGER(v6, &s, v8);
        v12 = v28;
        v17 = v35;
        if ( v19 != nullptr )
        {
          *(uint32_t *)(*v6 + 4) = v9 | *(uint32_t *)(*v6 + 4) & 0x100;
          goto LABEL_30;
        }
        goto LABEL_36;
      case 3:
        v27 = v12;
        v34 = v13;
        v18 = (int)(uintptr_t)(c2i_ASN1_BIT_STRING(v6, &s, v8));
        v12 = v27;
        v17 = v34;
        if ( v18 != 0 )
          return 1;
        goto LABEL_36;
      default:
        goto LABEL_11;
    }
  }
  switch ( v9 )
  {
    case 6:
      v24 = v12;
      v31 = v13;
      v16 = (int)(uintptr_t)(c2i_ASN1_OBJECT((int)(uintptr_t)(v6), (int)(uintptr_t)(&s), v8));
      v12 = v24;
      v17 = v31;
      if ( v16 == 0 )
        goto LABEL_36;
      return 1;
    case 10:
    case 258:
    case 266:
      goto LABEL_41;
    default:
LABEL_11:
      if ( v9 == 30 )
      {
        if ( (v8 & 1) != 0 )
        {
          v22 = 214;
          goto LABEL_35;
        }
      }
      else if ( v9 == 28 && (v8 & 3) != 0 )
      {
        v22 = 215;
        goto LABEL_35;
      }
      v38 = (void **)*v6;
      if ( *v6 != 0 )
      {
        v38[1] = (void *)v9;
      }
      else
      {
        v30 = v12;
        v37 = v13;
        v38 = (void **)ASN1_STRING_type_new(v9);
        v12 = v30;
        v13 = v37;
        if ( v38 == nullptr )
        {
          ERR_put_error(13, 204, 65, &unk_1B15112, 0);
          v12 = v30;
          v17 = v37;
          goto LABEL_36;
        }
        *v6 = (uint32_t)(uintptr_t)(v38);
      }
      if ( *a5 != 0 )
      {
        v15 = v38[2];
        if ( v15 != nullptr )
        {
          v23 = v12;
          CRYPTO_free(v15);
          v12 = v23;
        }
        v38[2] = s;
        *v38 = (void *)v8;
        *a5 = 0;
LABEL_30:
        if ( v12 != nullptr && v9 == 5 )
        {
          v12[1] = 0;
          return 1;
        }
        return 1;
      }
      v29 = v12;
      v36 = v13;
      v20 = ASN1_STRING_set((int)(uintptr_t)(v38), s, v8);
      v12 = v29;
      if ( v20 != 0 )
        goto LABEL_30;
      ERR_put_error(13, 204, 65, &unk_1B15112, 0);
      ASN1_STRING_free(v38);
      *v6 = 0;
      v12 = v29;
      v17 = v36;
LABEL_36:
      v33 = v17;
      ASN1_TYPE_free((int)(uintptr_t)(v12));
      result = 0;
      if ( v33 != nullptr )
        *v33 = 0;
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1988000  (binary VA: 0x1988000)
// Original: sub_1988000
// ----------------------------------------------------------------------------
int sub_1988000(int *a1, char **a2, int a3, int a4, int a5, int a6, char a7, uint8_t *a8)
{
  int v10;
  int v11;
  int v12;
  int result;
  int v14;
  int v15;
  char *v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  char *v22;
  bool v23;
  int v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef signed int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef uint16_t _g4_t_v36[3];
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef void *_g4_t_v42;
  typedef int _g4_t_v43;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v27)) > _g4_s2 ? (0u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v28)) > _g4_s3 ? (0u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v29)) > _g4_s4 ? (4u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v30)) > _g4_s5 ? (4u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v31)) > _g4_s6 ? (8u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v32)) > _g4_s7 ? (8u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v33)) > _g4_s8 ? (12u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v34)) > _g4_s9 ? (28u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (29u + sizeof(_g4_t_v35)) > _g4_s10 ? (29u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (30u + sizeof(_g4_t_v36)) > _g4_s11 ? (30u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v37)) > _g4_s12 ? (36u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v38)) > _g4_s13 ? (40u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v39)) > _g4_s14 ? (44u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v40)) > _g4_s15 ? (48u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v41)) > _g4_s16 ? (52u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v42)) > _g4_s17 ? (56u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v43)) > _g4_s18 ? (60u + sizeof(_g4_t_v43)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 29u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 30u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);

  v10 = a4;
  v11 = a5;
  LOBYTE(v36[0]) = 0;
  if ( a1 == nullptr )
  {
    ERR_put_error(13, 108, 125, &unk_1B15112, 0);
    return 0;
  }
  if ( *(uint8_t *)a4 == 5 )
  {
    *(uint32_t *)&v36[1] = a5;
    v12 = a5;
    v11 = -1;
  }
  else
  {
    v12 = *(uint32_t *)(a4 + 4);
    *(uint32_t *)&v36[1] = v12;
  }
  if ( v12 == -4 )
  {
    if ( v11 >= 0 )
    {
      ERR_put_error(13, 108, 127, &unk_1B15112, 0);
      return 0;
    }
    if ( a7 != 0 )
    {
      ERR_put_error(13, 108, 126, &unk_1B15112, 0);
      return 0;
    }
    v38 = *a2;
    result = sub_19875E0(nullptr, &v36[1], &v40, nullptr, nullptr, &v38, a3, -1, 0, 0, (int)(uintptr_t)(a8));
    v10 = a4;
    if ( result == 0 )
    {
LABEL_41:
      v28 = result;
      ERR_put_error(13, 108, 58, &unk_1B15112, 0);
      return v28;
    }
    if ( (uint8_t)(uintptr_t)(v40) != 0 )
      *(uint32_t *)&v36[1] = -3;
  }
  if ( v11 == -1 )
  {
    v11 = *(uint32_t *)&v36[1];
    a6 = 0;
  }
  v38 = *a2;
  v25 = v10;
  result = sub_19875E0(&v37, nullptr, nullptr, &v35, &v34, &v38, a3, v11, a6, a7, (int)(uintptr_t)(a8));
  v14 = v25;
  if ( result == 0 )
    goto LABEL_41;
  if ( result == -1 )
    return result;
  v15 = *(uint32_t *)&v36[1];
  v31 = *(uint32_t *)&v36[1];
  if ( (unsigned int)(*(uint32_t *)&v36[1] - 16) <= 1 )
  {
    if ( v34 == 0 )
    {
      ERR_put_error(13, 108, 156, &unk_1B15112, 0);
      return 0;
    }
    goto LABEL_11;
  }
  if ( *(uint32_t *)&v36[1] == -3 )
  {
    if ( a8 != nullptr )
      *a8 = 0;
LABEL_11:
    v16 = *a2;
    if ( v35 != 0 )
    {
      HIBYTE(v36[0]) = v35;
      v29 = v37;
      v32 = v38;
      v40 = v38;
      if ( v37 > 0 )
      {
        v33 = 1;
        while ( 1 )
        {
          if ( v29 == 1 || *v32 != 0 || v32[1] != 0 )
          {
            v26 = v14;
            v17 = sub_19875E0(&v39, nullptr, nullptr, (uint8_t *)v36 + 1, nullptr, &v40, v29, -1, 0, 0, 0);
            v14 = v26;
            if ( v17 == 0 )
            {
              ERR_put_error(13, 190, 58, &unk_1B15112, 0);
              result = 0;
              goto LABEL_28;
            }
            if ( HIBYTE(v36[0]) != 0 )
            {
              ++v33;
              v18 = v40;
            }
            else
            {
              v18 = &v40[v39];
              v40 += v39;
            }
            v29 += v32 - v18;
          }
          else
          {
            v23 = v33-- == 1;
            v40 = v32 + 2;
            if ( v23 )
            {
              v38 = v32 + 2;
              v20 = asn1_ex_c2i(a1, v16, v32 + 2 - v16, *(int *)&v36[1], v36, v14);
              goto LABEL_26;
            }
            v29 -= 2;
          }
          if ( v29 <= 0 )
            break;
          v32 = v40;
        }
      }
      ERR_put_error(13, 190, 137, &unk_1B15112, 0);
      result = 0;
LABEL_28:
      if ( LOBYTE(v36[0]) == 0 )
        return result;
      goto LABEL_29;
    }
    v42 = nullptr;
    v22 = (char *)(v37 + v38 - v16);
    v38 += v37;
    v20 = asn1_ex_c2i(a1, v16, (size_t)v22, v31, v36, v25);
LABEL_26:
    v21 = v20;
    result = 0;
    if ( v21 != 0 )
    {
      *a2 = v38;
      result = 1;
    }
    goto LABEL_28;
  }
  if ( v34 == 0 )
  {
    v19 = v38;
    v30 = v37;
    v38 += v37;
LABEL_25:
    v20 = asn1_ex_c2i(a1, v19, v30, v15, v36, v14);
    goto LABEL_26;
  }
  v41 = 0;
  v43 = 0;
  v42 = nullptr;
  result = sub_1987880(&v41, (void **)&v38, v37, v35, 0);
  if ( result != 0 )
  {
    v30 = v41;
    v24 = BUF_MEM_grow_clean(&v41, v41 + 1);
    v14 = v25;
    if ( v24 == 0 )
    {
      ERR_put_error(13, 108, 65, &unk_1B15112, 0);
      return 0;
    }
    *((uint8_t *)v42 + v30) = 0;
    LOBYTE(v36[0]) = 1;
    v19 = (char *)v42;
    v15 = *(uint32_t *)&v36[1];
    goto LABEL_25;
  }
  LOBYTE(v36[0]) = 1;
LABEL_29:
  if ( v42 != nullptr )
  {
    v27 = result;
    CRYPTO_free(v42);
    return v27;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1989210  (binary VA: 0x1989210)
// Original: sub_1989210
// ----------------------------------------------------------------------------
int sub_1989210(int *a1, char **a2, int a3, uint32_t *a4, char a5, uint8_t *a6)
{
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  char *v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (71u + sizeof(_g4_t_v22)) > _g4_s1 ? (71u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v23)) > _g4_s2 ? (72u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v24)) > _g4_s3 ? (76u + sizeof(_g4_t_v24)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 71u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  result = 0;
  v8 = a4;
  if ( a1 != nullptr )
  {
    v9 = *a4;
    v10 = *a4 & 0xC0;
    v11 = (*a4 & 6) == 0;
    v23 = *a2;
    if ( !v11 )
    {
      if ( (v9 & 8) != 0 )
      {
        v12 = a4[1];
      }
      else
      {
        v10 = 0;
        v12 = 17 - ((v9 & 2) == 0);
      }
      v13 = sub_19875E0(&a3, nullptr, nullptr, &v22, nullptr, &v23, a3, v12, v10, a5, (int)(uintptr_t)(a6));
      if ( v13 == 0 )
      {
        ERR_put_error(13, 131, 58, &unk_1B15112, 0);
        return 0;
      }
      if ( v13 != -1 )
      {
        v14 = *a1;
        if ( *a1 != 0 )
        {
          while ( (int)sk_num(v14) > 0 )
          {
            v24[0] = sk_pop(v14);
            ASN1_item_ex_free(v24, v8[4]);
          }
          v19 = *a1;
        }
        else
        {
          v19 = (int)(uintptr_t)(sk_new_null());
          *a1 = v19;
        }
        while ( 1 )
        {
          if ( v19 == 0 )
          {
            ERR_put_error(13, 131, 65, &unk_1B15112, 0);
            goto LABEL_29;
          }
          if ( a3 <= 0 )
            break;
          v16 = v23;
          if ( a3 != 1 && *v23 == 0 && v23[1] == 0 )
          {
            v17 = v23 + 2;
            v23 += 2;
            if ( v22 != 0 )
              goto LABEL_26;
            ERR_put_error(13, 131, 159, &unk_1B15112, 0);
            goto LABEL_29;
          }
          v20 = v8[4];
          v24[0] = 0;
          if ( ASN1_item_ex_d2i(v24, &v23, a3, v20, -1, 0, 0, a6) == 0 )
            goto LABEL_32;
          v15 = *a1;
          a3 += v16 - v23;
          v19 = sk_push(v15, v24[0]);
        }
        if ( v22 == 0 )
          goto LABEL_25;
        ERR_put_error(13, 131, 137, &unk_1B15112, 0);
        goto LABEL_29;
      }
      return -1;
    }
    if ( (v9 & 8) != 0 )
      v18 = ASN1_item_ex_d2i(a1, &v23, a3, a4[4], a4[1], v10, a5, a6);
    else
      v18 = ASN1_item_ex_d2i(a1, &v23, a3, a4[4], -1, 0, a5, a6);
    if ( v18 == 0 )
    {
LABEL_32:
      ERR_put_error(13, 131, 58, &unk_1B15112, 0);
LABEL_29:
      ASN1_template_free(a1, v8);
      return 0;
    }
    if ( v18 == -1 )
      return -1;
LABEL_25:
    v17 = v23;
LABEL_26:
    result = 1;
    *a2 = v17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1989590  (binary VA: 0x1989590)
// Original: sub_1989590
// ----------------------------------------------------------------------------
int sub_1989590(int *a1, char **a2, int a3, int *a4, char a5, uint8_t *a6)
{
  int v6;
  int v9;
  bool v10;
  int v11;
  char *v12;
  int v13;
  typedef char *_g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v16)) > _g4_s1 ? (22u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v17)) > _g4_s2 ? (23u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 22u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 23u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v6 = 0;
  if ( a1 != nullptr )
  {
    v9 = *a4;
    v10 = (*a4 & 0x10) == 0;
    v19[0] = *a2;
    if ( v10 )
      return sub_1989210(a1, a2, a3, a4, a5, a6);
    v11 = sub_19875E0(&v18, nullptr, nullptr, &v16, &v17, v19, a3, a4[1], v9 & 0xC0, a5, (int)(uintptr_t)(a6));
    v15 = v19[0];
    if ( v11 != 0 )
    {
      if ( v11 == -1 )
        return -1;
      if ( v17 == 0 )
      {
        ERR_put_error(13, 132, 120, &unk_1B15112, 0);
        return 0;
      }
      if ( sub_1989210(a1, v19, v18, a4, 0, a6) != 0 )
      {
        v12 = v19[0];
        v13 = v18 + v15 - v19[0];
        v18 = v13;
        if ( v16 != 0 )
        {
          if ( v13 > 1 && *v19[0] == 0 && v19[0][1] == 0 )
          {
            v12 = v19[0] + 2;
LABEL_13:
            *a2 = v12;
            return 1;
          }
          ERR_put_error(13, 132, 137, &unk_1B15112, 0);
        }
        else
        {
          if ( v13 == 0 )
            goto LABEL_13;
          ERR_put_error(13, 132, 119, &unk_1B15112, 0);
        }
        ASN1_template_free(a1, a4);
        return 0;
      }
    }
    ERR_put_error(13, 132, 58, &unk_1B15112, 0);
    return 0;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_19898E0  (binary VA: 0x19898e0)
// Original: sub_19898E0
// ----------------------------------------------------------------------------
int sub_19898E0(int a1, int a2)
{
  signed int v2;
  signed int v3;
  size_t n;
  int v5;
  int result;

  v2 = *(uint32_t *)(a2 + 4);
  v3 = *(uint32_t *)(a1 + 4);
  n = v2;
  if ( v3 <= v2 )
    n = *(uint32_t *)(a1 + 4);
  v5 = v3 - v2;
  result = memcmp(*(const void **)a1, *(const void **)a2, n);
  if ( result == 0 )
    return v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_ex_i2c  (binary VA: 0x1989940)
// Original: asn1_ex_i2c
// ----------------------------------------------------------------------------
int asn1_ex_i2c(int *a1, void *dest, int *a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int (*v7)(int *, void *, int *, int);
  size_t n;
  int *v10;
  int v11;
  int v12;
  char *src;
  bool v14;
  char **p_dest;
  typedef char _g4_t_v16;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);

  v4 = a4;
  v5 = *(uint32_t *)(a4 + 16);
  v6 = a1;
  if ( v5 != 0 )
  {
    v7 = *(int (**)(int *, void *, int *, int))(v5 + 24);
    if ( v7 != nullptr )
      return v7(a1, dest, a3, a4);
  }
  if ( *(uint8_t *)a4 == 0 && *(uint32_t *)(a4 + 4) == 1 )
    goto LABEL_10;
  v10 = (int *)*a1;
  if ( *a1 == 0 )
    return -1;
  if ( *(uint8_t *)a4 == 5 )
  {
    v11 = v10[1];
    *a3 = v11;
  }
  else
  {
    if ( *(uint32_t *)(a4 + 4) != -4 )
    {
LABEL_10:
      v11 = *a3;
      goto LABEL_11;
    }
    v11 = *v10;
    v6 = v10 + 1;
    *a3 = *v10;
  }
LABEL_11:
  n = 0;
  if ( v11 == 5 )
    return n;
  if ( v11 > 5 )
  {
    if ( v11 != 10 )
    {
      if ( v11 <= 10 )
      {
        if ( v11 != 6 )
        {
LABEL_16:
          v12 = *v6;
          if ( *(uint32_t *)(v4 + 20) == 2048 && (*(uint8_t *)(v12 + 12) & 0x10) != 0 )
          {
            n = 0xFFFFFFFE;
            if ( dest != nullptr )
            {
              *(uint32_t *)(v12 + 8) = (uint32_t)(uintptr_t)(dest);
              *(uint32_t *)v12 = 0;
            }
            return n;
          }
          n = *(uint32_t *)v12;
          src = *(char **)(v12 + 8);
          v14 = *(uint32_t *)v12 != 0;
          goto LABEL_18;
        }
        n = *(uint32_t *)(*v6 + 12);
        src = *(char **)(*v6 + 16);
        v14 = n != 0;
LABEL_18:
        if ( v14 && dest != nullptr )
          memcpy(dest, src, n);
        return n;
      }
      if ( v11 != 258 && v11 != 266 )
        goto LABEL_16;
    }
  }
  else if ( v11 != 2 )
  {
    if ( v11 != 3 )
    {
      if ( v11 != 1 )
        goto LABEL_16;
      if ( *v6 != -1 )
      {
        if ( *(uint32_t *)(v4 + 4) != -4 )
        {
          n = 0xFFFFFFFF;
          if ( *v6 != 0 )
          {
            if ( *(int *)(v4 + 20) > 0 )
              return n;
          }
          else if ( *(uint32_t *)(v4 + 20) == 0 )
          {
            return n;
          }
        }
        v16 = *v6;
        n = 1;
        v14 = true;
        src = &v16;
        goto LABEL_18;
      }
      return -1;
    }
    if ( dest != nullptr )
      n = (size_t)&dest;
    return i2c_ASN1_BIT_STRING(*v6, n);
  }
  p_dest = nullptr;
  if ( dest != nullptr )
    p_dest = (char **)&dest;
  return i2c_ASN1_INTEGER(*v6, p_dest);
}

// ----------------------------------------------------------------------------
// Function: sub_1989B70  (binary VA: 0x1989b70)
// Original: sub_1989B70
// ----------------------------------------------------------------------------
int sub_1989B70(int *a1, void **a2, int a3, int a4, char a5)
{
  int v6;
  int v7;
  int v8;
  bool v9;
  typedef bool _g4_t_v11;
  typedef bool _g4_t_v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v6 = a4;
  v15[0] = *(uint32_t *)(a3 + 4);
  v7 = asn1_ex_i2c(a1, nullptr, v15, a3);
  v8 = a3;
  if ( v7 == -1 )
    return 0;
  if ( v7 == -2 )
  {
    v14 = 2;
    v7 = 0;
  }
  else
  {
    v14 = 0;
  }
  if ( a4 == -1 )
    v6 = v15[0];
  v9 = v15[0] != -3 && (unsigned int)(v15[0] - 16) > 1;
  if ( a2 != nullptr )
  {
    if ( v15[0] != -3 && (unsigned int)(v15[0] - 16) > 1 )
    {
      v12 = v15[0] != -3 && (unsigned int)(v15[0] - 16) > 1;
      ASN1_put_object((uint8_t **)a2, v14, v7, v6, a5);
      v9 = v12;
      v8 = a3;
    }
    v11 = v9;
    asn1_ex_i2c(a1, *a2, v15, v8);
    v9 = v11;
    if ( v14 != 0 )
    {
      ASN1_put_eoc((uint8_t **)a2);
      if ( !v11 )
        return v7;
      return ASN1_object_size(v14, v7, v6);
    }
    *a2 = (char *)*a2 + v7;
  }
  if ( v9 )
    return ASN1_object_size(v14, v7, v6);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_198A1C0  (binary VA: 0x198a1c0)
// Original: sub_198A1C0
// ----------------------------------------------------------------------------
int sub_198A1C0(int *a1, void **a2, int *a3, int a4, int a5)
{
  int v6;
  unsigned int v7;
  int v8;
  int i;
  int v10;
  int v11;
  int m;
  int v14;
  int v15;
  int v16;
  void **v17;
  int j;
  int v19;
  size_t v20;
  void **v21;
  void *v22;
  void **v23;
  signed int k;
  typedef size_t _g4_t_nmemb;
  typedef size_t _g4_t_size;
  typedef size_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef void **_g4_t_base;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef void *_g4_t_dest;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_nmemb)) > _g4_s0 ? (4u + sizeof(_g4_t_nmemb)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_size)) > _g4_s1 ? (8u + sizeof(_g4_t_size)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v27)) > _g4_s2 ? (36u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v28)) > _g4_s3 ? (40u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v30)) > _g4_s4 ? (48u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v31)) > _g4_s5 ? (52u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_base)) > _g4_s6 ? (52u + sizeof(_g4_t_base)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v33)) > _g4_s7 ? (56u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v34)) > _g4_s8 ? (60u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v35)) > _g4_s9 ? (60u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v36)) > _g4_s10 ? (64u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v37)) > _g4_s11 ? (68u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v38)) > _g4_s12 ? (72u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v39)) > _g4_s13 ? (76u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v40)) > _g4_s14 ? (84u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v41)) > _g4_s15 ? (88u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_dest)) > _g4_s16 ? (92u + sizeof(_g4_t_dest)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_nmemb &nmemb = *reinterpret_cast<_g4_t_nmemb *>(_g4_sf + 4u);
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_base &base = *reinterpret_cast<_g4_t_base *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 92u);

  v6 = *a3;
  if ( (*a3 & 0x18) != 0 )
  {
    v33 = -1;
    if ( a4 != -1 )
      return v33;
    v31 = a3[1];
    v34 = *a3 & 0xC0;
  }
  else
  {
    v34 = 0;
    v31 = -1;
    if ( a4 != -1 )
    {
      v31 = a4;
      v34 = a5 & 0xC0;
    }
  }
  v30 = 1;
  v7 = a5 & 0xFFFFFF3F;
  if ( (v6 & 0x800) != 0 )
    v30 = 2 - ((a5 & 0x800) == 0);
  if ( (v6 & 6) != 0 )
  {
    v8 = *a1;
    v33 = 0;
    if ( v8 == 0 )
      return v33;
    v37 = 0;
    if ( (v6 & 2) != 0 )
      v37 = 2 - ((*a3 & 4) == 0);
    if ( v31 == -1 )
    {
      v38 = *a3 & 0x10;
    }
    else
    {
      v39 = v34;
      v36 = v31;
      v38 = *a3 & 0x10;
      if ( (v6 & 0x10) == 0 )
        goto LABEL_12;
    }
    v39 = 0;
    v36 = 17 - (v37 == 0);
LABEL_12:
    v27 = 0;
    for ( i = 0; i < sk_num(v8); ++i )
    {
      v40 = sk_value(v8, i);
      v27 += ASN1_item_ex_i2d(&v40, nullptr, a3[4], -1, v7);
    }
    v10 = ASN1_object_size(v30, v27, v36);
    v11 = v10;
    v33 = v10;
    if ( v38 != 0 )
      v33 = ASN1_object_size(v30, v10, v31);
    if ( a2 == nullptr )
      return v33;
    if ( v38 != 0 )
      ASN1_put_object((uint8_t **)a2, v30, v11, v31, v34);
    ASN1_put_object((uint8_t **)a2, v30, v27, v36, v39);
    dest = nullptr;
    v28 = a3[4];
    if ( v37 != 0 && (int)sk_num(v8) > 1 )
    {
      v16 = sk_num(v8);
      base = (void **)CRYPTO_malloc(12 * v16, (int)(uintptr_t)(&unk_1B15112), 0);
      v35 = CRYPTO_malloc(v27, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v35 != nullptr && base != nullptr )
      {
        dest = v35;
        v17 = base;
        for ( j = 0; j < sk_num(v8); ++j )
        {
          v41 = (void *)sk_value(v8, j);
          *v17 = dest;
          v17[1] = (void *)ASN1_item_ex_i2d((int *)&v41, &dest, v28, -1, a5 & 0xFFFFFF3F);
          v17[2] = v41;
          v17 += 3;
        }
        v19 = 0;
        v20 = sk_num(v8);
        qsort(base, v20, 0xCu, (__compar_fn_t)sub_19898E0);
        v21 = base;
        dest = *a2;
        while ( v19 < sk_num(v8) )
        {
          ++v19;
          memcpy(dest, *v21, (size_t)v21[1]);
          v22 = v21[1];
          v21 += 3;
          dest = (char *)dest + (uint32_t)(uintptr_t)(v22);
        }
        *a2 = dest;
        if ( v37 == 2 )
        {
          v23 = base;
          for ( k = 0; k < sk_num(v8); ++k )
          {
            nmemb = k;
            size = (size_t)v23[2];
            v23 += 3;
            sk_set(v8, nmemb, size);
          }
        }
        CRYPTO_free(base);
        CRYPTO_free(v35);
        if ( v30 != 2 )
          return v33;
LABEL_47:
        ASN1_put_eoc((uint8_t **)a2);
        if ( v38 == 0 )
          return v33;
        goto LABEL_32;
      }
    }
    else
    {
      for ( m = 0; m < sk_num(v8); ++m )
      {
        v41 = (void *)sk_value(v8, m);
        ASN1_item_ex_i2d((int *)&v41, a2, v28, -1, v7);
      }
    }
    if ( v30 == 2 )
      goto LABEL_47;
    return v33;
  }
  if ( (v6 & 0x10) != 0 )
  {
    v14 = ASN1_item_ex_i2d(a1, nullptr, a3[4], -1, v7);
    v15 = v14;
    v33 = 0;
    if ( v14 == 0 )
      return v33;
    v33 = ASN1_object_size(v30, v14, v31);
    if ( a2 == nullptr )
      return v33;
    ASN1_put_object((uint8_t **)a2, v30, v15, v31, v34);
    ASN1_item_ex_i2d(a1, a2, a3[4], -1, v7);
    if ( v30 != 2 )
      return v33;
LABEL_32:
    ASN1_put_eoc((uint8_t **)a2);
    return v33;
  }
  return ASN1_item_ex_i2d(a1, a2, a3[4], v31, v34 | v7);
}

// ----------------------------------------------------------------------------
// Function: sub_198A7E0  (binary VA: 0x198a7e0)
// Original: sub_198A7E0
// ----------------------------------------------------------------------------
int sub_198A7E0(int a1, void **a2, int a3, int a4)
{
  int v4;
  uint8_t *v6;
  typedef uint8_t *_g4_t_v8;
  typedef int _g4_t_v9[4];
  typedef void *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v9[0] = a1;
  if ( a2 == nullptr || *a2 != nullptr )
    return ASN1_item_ex_i2d(v9, a2, a3, -1, a4);
  v4 = ASN1_item_ex_i2d(v9, nullptr, a3, -1, a4);
  if ( v4 > 0 )
  {
    v6 = CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v6 != nullptr )
    {
      v10 = v6;
      v8 = v6;
      ASN1_item_ex_i2d(v9, &v10, a3, -1, a4);
      *a2 = v8;
    }
    else
    {
      return -1;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_198AA60  (binary VA: 0x198aa60)
// Original: sub_198AA60
// ----------------------------------------------------------------------------
int sub_198AA60(int result, uint8_t *a2, int a3)
{
  uint8_t *v3;
  void **v4;
  uint32_t *v5;
  int (*v6)(uint32_t, uint32_t, uint32_t, uint32_t);
  int v7; // kr00_4
  int v8;
  int v9;
  int v10;
  int v11;
  int field_ptr;
  int v13;
  int v14;
  void **v15;
  uint8_t *v16;
  int (*v17)(uint32_t, uint32_t, uint32_t, uint32_t);

  v3 = a2;
  v4 = (void **)result;
  v5 = *((uint32_t **)a2 + 4);
  if ( result != 0 )
  {
    result = *v3;
    if ( (uint8_t)result == 0 || *v4 != nullptr )
    {
      v6 = nullptr;
      if ( v5 != nullptr )
        v6 = (int (*)(uint32_t, uint32_t, uint32_t, uint32_t))v5[4];
      v7 = (uint8_t)result;
      result = (int)(uintptr_t)(dword_20B9FF4) + (uint32_t)jpt_198AACC[(uint8_t)result];
      switch ( v7 )
      {
        case 0:
          if ( *((uint32_t *)v3 + 2) == 0 )
            goto LABEL_11;
          result = ASN1_template_free(v4, *((uint32_t *)v3 + 2));
          break;
        case 1:
        case 6:
          result = asn1_do_lock(v4, -1, v3);
          if ( result <= 0 && (v6 == nullptr || (result = v6(2, (uint32_t)(uintptr_t)(v4), (uint32_t)(uintptr_t)(v3), 0)) != 2) )
          {
            asn1_enc_free(v4, v3);
            result = *((uint32_t *)v3 + 3);
            if ( result > 0 )
            {
              v17 = v6;
              v16 = v3;
              v8 = *((uint32_t *)v3 + 2) + 4 * (5 * result - 5);
              v15 = v4;
              v9 = 0;
              do
              {
                v10 = (int)(uintptr_t)(asn1_do_adb(v15, v8, 0));
                v11 = v10;
                if ( v10 != 0 )
                {
                  field_ptr = asn1_get_field_ptr(v15, v10);
                  ASN1_template_free(field_ptr, v11);
                }
                result = (int)(uintptr_t)(v16);
                v8 -= 20;
                ++v9;
              }
              while ( *((uint32_t *)v16 + 3) > v9 );
              v6 = v17;
              v4 = v15;
              v3 = v16;
            }
            goto LABEL_23;
          }
          break;
        case 2:
          if ( v6 == nullptr || (result = v6(2, (uint32_t)(uintptr_t)(v4), (uint32_t)(uintptr_t)(v3), 0)) != 2 )
          {
            result = asn1_get_choice_selector(v4, v3);
            if ( result >= 0 && result < *((uint32_t *)v3 + 3) )
            {
              v14 = *((uint32_t *)v3 + 2) + 20 * result;
              v13 = asn1_get_field_ptr(v4, v14);
              result = ASN1_template_free(v13, v14);
            }
LABEL_23:
            if ( v6 != nullptr )
              result = v6(3, (uint32_t)(uintptr_t)(v4), (uint32_t)(uintptr_t)(v3), 0);
            if ( a3 == 0 )
            {
              result = CRYPTO_free(*v4);
              *v4 = nullptr;
            }
          }
          break;
        case 3:
          if ( v5 != nullptr )
          {
            result = v5[1];
            if ( result != 0 )
              result = ((int (*)(void *))result)(*v4);
          }
          break;
        case 4:
          if ( v5 != nullptr )
          {
            result = v5[2];
            if ( result != 0 )
              result = ((int (*)(void **, uint8_t *))result)(v4, v3);
          }
          break;
        case 5:
LABEL_11:
          result = (int)(uintptr_t)(ASN1_primitive_free(v4, (int)(uintptr_t)(v3)));
          break;
        default:
          result = *v3;
          break;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198AEB0  (binary VA: 0x198aeb0)
// Original: sub_198AEB0
// ----------------------------------------------------------------------------
int sub_198AEB0(int *a1, int a2, int a3, int a4)
{
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t *s;
  int v12;
  int v13;
  int v14;
  int field_ptr;
  int (**v16)(int, int);
  int (*v17)(int, int);
  int v18;
  int v19;
  int (*v20)(int *, int);
  uint8_t *v21;
  int v22;
  int (*v23)(int, int *, int, uint32_t);

  v6 = *(uint32_t *)(a2 + 16);
  v7 = a4;
  v23 = nullptr;
  if ( v6 != 0 )
    v23 = *(int (**)(int, int *, int, uint32_t))(v6 + 16);
  if ( a4 == 0 )
    *a1 = 0;
  v8 = 1;
  switch ( *(uint8_t *)a2 )
  {
    case 0:
      if ( *(uint32_t *)(a2 + 8) == 0 )
        goto LABEL_16;
      if ( ASN1_template_new(a1, *(uint32_t *)(a2 + 8)) != 0 )
        return 1;
      goto LABEL_20;
    case 1:
    case 6:
      if ( v23 != nullptr )
      {
        v12 = v23(0, a1, a2, 0);
        v7 = a4;
        if ( v12 == 0 )
          goto LABEL_14;
        v8 = 1;
        if ( v12 == 2 )
          return v8;
      }
      if ( v7 == 0 )
      {
        v21 = CRYPTO_malloc(*(uint32_t *)(a2 + 20), (int)(uintptr_t)(&unk_1B15112), 0);
        *a1 = (int)(uintptr_t)(v21);
        if ( v21 == nullptr )
          goto LABEL_20;
        memset(v21, 0, *(uint32_t *)(a2 + 20));
        asn1_do_lock(a1, 0, a2);
        asn1_enc_init(a1, a2);
      }
      v13 = *(uint32_t *)(a2 + 8);
      if ( *(int *)(a2 + 12) <= 0 )
        goto LABEL_38;
      v14 = 0;
      break;
    case 2:
      if ( v23 != nullptr )
      {
        v9 = v23(0, a1, a2, 0);
        v7 = a4;
        if ( v9 == 0 )
          goto LABEL_14;
        v8 = 1;
        if ( v9 == 2 )
          return v8;
      }
      if ( v7 == 0 )
      {
        s = CRYPTO_malloc(*(uint32_t *)(a2 + 20), (int)(uintptr_t)(&unk_1B15112), 0);
        *a1 = (int)(uintptr_t)(s);
        if ( s == nullptr )
          goto LABEL_20;
        memset(s, 0, *(uint32_t *)(a2 + 20));
      }
      v8 = 1;
      asn1_set_choice_selector(a1, -1, a2);
      if ( v23 != nullptr )
        goto LABEL_13;
      return v8;
    case 3:
      v16 = *(int (***)(int, int))(a2 + 16);
      v8 = 1;
      if ( v16 != nullptr )
      {
        v17 = *v16;
        if ( v17 != nullptr )
        {
          v18 = v17(a3, a4);
          *a1 = v18;
          if ( v18 == 0 )
            goto LABEL_20;
        }
      }
      return v8;
    case 4:
      v19 = *(uint32_t *)(a2 + 16);
      v8 = 1;
      if ( v19 == 0 )
        return v8;
      v20 = *(int (**)(int *, int))(v19 + 4);
      if ( v20 == nullptr || v20(a1, a2) != 0 )
        return v8;
      goto LABEL_20;
    case 5:
LABEL_16:
      if ( ASN1_primitive_new(a1, a2) == 0 )
        goto LABEL_20;
      return 1;
    default:
      return v8;
  }
  do
  {
    v22 = v14;
    field_ptr = asn1_get_field_ptr(a1, v13);
    if ( ASN1_template_new(field_ptr, v13) == 0 )
    {
LABEL_20:
      v8 = 0;
      ERR_put_error(13, 121, 65, &unk_1B15112, 0);
      return v8;
    }
    v13 += 20;
    v14 = v22 + 1;
  }
  while ( *(uint32_t *)(a2 + 12) > v22 + 1 );
LABEL_38:
  v8 = 1;
  if ( v23 != nullptr )
  {
LABEL_13:
    if ( v23(1, a1, a2, 0) == 0 )
    {
LABEL_14:
      v8 = 0;
      ERR_put_error(13, 121, 100, &unk_1B15112, 0);
      ASN1_item_ex_free((int)(uintptr_t)(a1), (uint8_t *)a2);
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: DISPLAYTEXT_new  (binary VA: 0x198c380)
// Original: DISPLAYTEXT_new
// ----------------------------------------------------------------------------
int DISPLAYTEXT_new()
{
  return ASN1_item_new((int)(uintptr_t)(&DISPLAYTEXT_it));
}

// ----------------------------------------------------------------------------
// Function: DISPLAYTEXT_free  (binary VA: 0x198c3b0)
// Original: DISPLAYTEXT_free
// ----------------------------------------------------------------------------
int DISPLAYTEXT_free(char a1)
{
  return ASN1_item_free(a1, DISPLAYTEXT_it);
}

// ----------------------------------------------------------------------------
// Function: DIRECTORYSTRING_new  (binary VA: 0x198c460)
// Original: DIRECTORYSTRING_new
// ----------------------------------------------------------------------------
int DIRECTORYSTRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&DIRECTORYSTRING_it));
}

// ----------------------------------------------------------------------------
// Function: DIRECTORYSTRING_free  (binary VA: 0x198c490)
// Original: DIRECTORYSTRING_free
// ----------------------------------------------------------------------------
int DIRECTORYSTRING_free(char a1)
{
  return ASN1_item_free(a1, DIRECTORYSTRING_it);
}

// ----------------------------------------------------------------------------
// Function: asn1_get_choice_selector  (binary VA: 0x198c5c0)
// Original: asn1_get_choice_selector
// ----------------------------------------------------------------------------
int asn1_get_choice_selector(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + *(uint32_t *)(a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: asn1_set_choice_selector  (binary VA: 0x198c5e0)
// Original: asn1_set_choice_selector
// ----------------------------------------------------------------------------
int asn1_set_choice_selector(uint32_t *a1, int a2, int a3)
{
  int *v3;
  int result;

  v3 = (int *)(*(uint32_t *)(a3 + 4) + *a1);
  result = *v3;
  *v3 = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_do_lock  (binary VA: 0x198c600)
// Original: asn1_do_lock
// ----------------------------------------------------------------------------
int asn1_do_lock(uint32_t *a1, int a2, int a3)
{
  int v3;
  int result;
  uint32_t *v5;

  if ( *(uint8_t *)a3 == 6 || (result = 0, *(uint8_t *)a3 == 1) )
  {
    v3 = *(uint32_t *)(a3 + 16);
    result = 0;
    if ( v3 != 0 && (*(uint8_t *)(v3 + 4) & 1) != 0 )
    {
      v5 = (uint32_t *)(*(uint32_t *)(v3 + 8) + *a1);
      if ( a2 != 0 )
      {
        return CRYPTO_add_lock(v5, a2, *(uint32_t *)(v3 + 12), (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        *v5 = 1;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_enc_init  (binary VA: 0x198c6b0)
// Original: asn1_enc_init
// ----------------------------------------------------------------------------
uint32_t * asn1_enc_init(uint32_t **a1, int a2)
{
  uint32_t *result;
  int v3;

  result = (uint32_t *)(a1);
  if ( a1 != nullptr )
  {
    result = *a1;
    if ( *a1 != nullptr )
    {
      v3 = *(uint32_t *)(a2 + 16);
      if ( v3 != 0 && (*(uint8_t *)(v3 + 4) & 2) != 0 )
      {
        result = (uint32_t *)((char *)result + *(uint32_t *)(v3 + 20));
        if ( result != nullptr )
        {
          *result = 0;
          result[1] = 0;
          result[2] = 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_enc_free  (binary VA: 0x198c6f0)
// Original: asn1_enc_free
// ----------------------------------------------------------------------------
uint32_t * asn1_enc_free(uint32_t *a1, int a2)
{
  uint32_t *result;
  int v3;

  result = a1;
  if ( a1 != nullptr && *a1 != 0 )
  {
    result = *(uint32_t **)(a2 + 16);
    if ( result != nullptr && (result[1] & 2) != 0 )
    {
      v3 = result[5] + *a1;
      if ( v3 != 0 )
      {
        result = *(uint32_t **)v3;
        if ( *(uint32_t *)v3 != 0 )
          result = (uint32_t *)CRYPTO_free(*(void **)v3);
        *(uint32_t *)v3 = 0;
        *(uint32_t *)(v3 + 4) = 0;
        *(uint32_t *)(v3 + 8) = 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_enc_save  (binary VA: 0x198c760)
// Original: asn1_enc_save
// ----------------------------------------------------------------------------
int asn1_enc_save(uint32_t *a1, void *src, size_t n, int a4)
{
  int v4;
  int v5;
  int v6;
  uint8_t *dest;

  v4 = 1;
  if ( a1 != nullptr && *a1 != 0 )
  {
    v5 = *(uint32_t *)(a4 + 16);
    if ( v5 != 0 && (*(uint8_t *)(v5 + 4) & 2) != 0 )
    {
      v6 = *(uint32_t *)(v5 + 20) + *a1;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)v6 != 0 )
          CRYPTO_free(*(void **)v6);
        dest = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0);
        v4 = 0;
        *(uint32_t *)v6 = (uint32_t)(uintptr_t)(dest);
        if ( dest != nullptr )
        {
          memcpy(dest, src, n);
          *(uint32_t *)(v6 + 4) = n;
          *(uint32_t *)(v6 + 8) = 0;
          return 1;
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: asn1_enc_restore  (binary VA: 0x198c810)
// Original: asn1_enc_restore
// ----------------------------------------------------------------------------
int asn1_enc_restore(uint32_t *a1, void **a2, uint32_t *a3, int a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  if ( a3 != nullptr && *a3 != 0 )
  {
    v5 = *(uint32_t *)(a4 + 16);
    if ( v5 != 0 && (*(uint8_t *)(v5 + 4) & 2) != 0 )
    {
      v6 = *(uint32_t *)(v5 + 20) + *a3;
      if ( v6 != 0 && *(uint32_t *)(v6 + 8) == 0 )
      {
        if ( a2 != nullptr )
        {
          memcpy(*a2, *(const void **)v6, *(uint32_t *)(v6 + 4));
          *a2 = (char *)*a2 + *(uint32_t *)(v6 + 4);
        }
        result = 1;
        if ( a1 != nullptr )
          *a1 = *(uint32_t *)(v6 + 4);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_get_field_ptr  (binary VA: 0x198c8b0)
// Original: asn1_get_field_ptr
// ----------------------------------------------------------------------------
int asn1_get_field_ptr(uint32_t *a1, uint32_t *a2)
{
  int result;

  result = (int)(uintptr_t)(a1);
  if ( (*a2 & 0x400) == 0 )
    return a2[2] + *a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: asn1_do_adb  (binary VA: 0x198c8d0)
// Original: asn1_do_adb
// ----------------------------------------------------------------------------
uint32_t * asn1_do_adb(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *result;
  uint32_t *v4;
  int **v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int *v10;

  result = a2;
  if ( (*a2 & 0x300) == 0 )
    return result;
  v4 = (uint32_t *)a2[4];
  v5 = (int **)(v4[1] + *a1);
  if ( v5 == nullptr )
  {
    result = (uint32_t *)v4[6];
    if ( result != nullptr )
      return result;
    goto LABEL_15;
  }
  v10 = *v5;
  if ( (*a2 & 0x100) != 0 )
    v6 = OBJ_obj2nid(v10);
  else
    v6 = ASN1_INTEGER_get(v10);
  v7 = v4[4];
  v8 = (uint32_t *)v4[3];
  if ( v7 > 0 )
  {
    v9 = 0;
    if ( *v8 == v6 )
      return v8 + 1;
    while ( ++v9 != v7 )
    {
      v8 += 6;
      if ( *v8 == v6 )
        return v8 + 1;
    }
  }
  result = (uint32_t *)v4[5];
  if ( result == nullptr )
  {
LABEL_15:
    result = nullptr;
    if ( a3 != 0 )
    {
      ERR_put_error(13, 110, 164, &unk_1B15112, 0);
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198CFC0  (binary VA: 0x198cfc0)
// Original: sub_198CFC0
// ----------------------------------------------------------------------------
int sub_198CFC0(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  return 2 * (X509_NAME_print_ex(a1, *a2, a3, *(uint32_t *)(a5 + 4)) > 0);
}

// ----------------------------------------------------------------------------
// Function: sub_198D010  (binary VA: 0x198d010)
// Original: sub_198D010
// ----------------------------------------------------------------------------
int sub_198D010(int a1, void **a2)
{
  int v2;
  int i;
  int result;
  int v7[8];

  v2 = 0;
  for ( i = 0; i < sk_num(a1); ++i )
  {
    v7[0] = sk_value(a1, i);
    result = ASN1_item_ex_i2d(v7, a2, (int)(uintptr_t)(&X509_NAME_ENTRIES_it), -1, -1);
    if ( result < 0 )
      return result;
    v2 += result;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_198D090  (binary VA: 0x198d090)
// Original: sub_198D090
// ----------------------------------------------------------------------------
int sub_198D090(void *a1)
{
  return sk_pop_free(a1, (int)(uintptr_t)(X509_NAME_ENTRY_free));
}

// ----------------------------------------------------------------------------
// Function: sub_198D0C0  (binary VA: 0x198d0c0)
// Original: sub_198D0C0
// ----------------------------------------------------------------------------
int sub_198D0C0(void *a1)
{
  return sk_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_198D0F0  (binary VA: 0x198d0f0)
// Original: sub_198D0F0
// ----------------------------------------------------------------------------
int sub_198D0F0(void ***a1)
{
  void **v1;
  int result;

  if ( a1 != nullptr )
  {
    v1 = *a1;
    if ( *a1 != nullptr )
    {
      BUF_MEM_free(v1[2]);
      sk_pop_free(*v1, (int)(uintptr_t)(X509_NAME_ENTRY_free));
      if ( v1[3] != nullptr )
        CRYPTO_free(v1[3]);
      result = CRYPTO_free(v1);
      *a1 = nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198D170  (binary VA: 0x198d170)
// Original: sub_198D170
// ----------------------------------------------------------------------------
int sub_198D170(uint32_t *a1)
{
  int v1;
  int v2;
  uint8_t *v3;
  int v4;
  int v5;

  v3 = CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v3 != nullptr )
  {
    v4 = (int)(uintptr_t)(sk_new_null(v2, v1));
    *(uint32_t *)v3 = v4;
    if ( v4 != 0 && (v5 = (int)(uintptr_t)(BUF_MEM_new()), *((uint32_t *)v3 + 2) = v5, v5 != 0) )
    {
      *((uint32_t *)v3 + 3) = 0;
      *((uint32_t *)v3 + 4) = 0;
      *((uint32_t *)v3 + 1) = 1;
      *a1 = (uint32_t)(uintptr_t)(v3);
      return 1;
    }
    else
    {
      ERR_put_error(13, 171, 65, &unk_1B15112, 0);
      if ( *(uint32_t *)v3 != 0 )
        sk_free(*(void **)v3);
      CRYPTO_free(v3);
      return 0;
    }
  }
  else
  {
    ERR_put_error(13, 171, 65, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_198D360  (binary VA: 0x198d360)
// Original: sub_198D360
// ----------------------------------------------------------------------------
int sub_198D360(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  uint8_t *v14;
  uint8_t v15;
  char i;
  uint8_t *v17;
  uint8_t v18;
  int v19;
  uint8_t *v20;
  typedef int _g4_t_c;
  typedef uint8_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_c)) > _g4_s0 ? (8u + sizeof(_g4_t_c)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v24)) > _g4_s3 ? (16u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v25)) > _g4_s4 ? (20u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v26)) > _g4_s5 ? (24u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v27)) > _g4_s6 ? (28u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v30)) > _g4_s8 ? (40u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v31)) > _g4_s9 ? (44u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_c &c = *reinterpret_cast<_g4_t_c *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);

  v3 = 0;
  v31 = (void *)sk_new_null(a3, a2);
  if ( v31 != nullptr )
  {
    v30 = -1;
    v25 = 0;
    v28 = 0;
    while ( v25 < sk_num(*a1) )
    {
      v5 = (uint32_t *)sk_value(*a1, v25);
      if ( v5[2] != v30 )
      {
        v6 = (int)(uintptr_t)(sk_new_null(v4, v30));
        v28 = v6;
        if ( v6 == 0 || sk_push(v31, v6) == 0 )
        {
          v3 = 0;
          goto LABEL_11;
        }
        v30 = v5[2];
      }
      v27 = (uint32_t *)X509_NAME_ENTRY_new();
      *v27 = (uint32_t)(uintptr_t)(OBJ_dup(*v5));
      v7 = v5[1];
      v24 = (int *)v27[1];
      if ( (ASN1_tag2bit(*(uint32_t *)(v7 + 4)) & 0x2956) != 0 )
      {
        v24[1] = 12;
        v13 = ASN1_STRING_to_UTF8(v24 + 2, v7);
        *v24 = v13;
        if ( v13 == -1 )
        {
LABEL_10:
          v3 = 0;
          X509_NAME_ENTRY_free((char)(uintptr_t)(v27));
          goto LABEL_11;
        }
        v14 = (uint8_t *)v24[2];
        v12 = 0;
        v22 = v14;
        if ( v13 > 0 )
        {
          v15 = *v14;
          v9 = (uint8_t *)v24[2];
          if ( (*v14 & 0x80u) != 0 )
          {
LABEL_26:
            for ( i = v9[v13 - 1]; i >= 0; i = v9[v13 - 1] )
            {
              if ( isspace((uint8_t)i) == 0 )
                break;
              if ( --v13 == 0 )
                goto LABEL_41;
            }
            v10 = 0;
            v17 = v22 + 1;
            v23 = v13;
            v11 = v17;
LABEL_32:
            while ( 1 )
            {
              v18 = *v9;
              if ( (*v9 & 0x80u) != 0 )
                break;
              c = v18;
              if ( isspace(v18) != 0 )
              {
                v26 = v11;
                *(v11 - 1) = 32;
                while ( 1 )
                {
                  ++v9;
                  ++v10;
                  if ( (*v9 & 0x80u) != 0 )
                    break;
                  if ( isspace(*v9) == 0 )
                  {
                    ++v11;
                    if ( v23 > v10 )
                      goto LABEL_32;
                    goto LABEL_15;
                  }
                }
LABEL_14:
                ++v11;
                if ( v23 <= v10 )
                  goto LABEL_15;
                continue;
              }
              ++v9;
              *(v11 - 1) = tolower(c);
              v26 = v11;
              ++v10;
              ++v11;
              if ( v23 <= v10 )
              {
LABEL_15:
                v12 = (int)(uintptr_t)(&v26[-v24[2]]);
                goto LABEL_16;
              }
            }
            v26 = v11;
            *(v11 - 1) = v18;
            ++v9;
            ++v10;
            goto LABEL_14;
          }
          while ( 1 )
          {
            if ( isspace(v15) == 0 )
              goto LABEL_26;
            if ( --v13 == 0 )
              break;
            v15 = *++v9;
            if ( (*v9 & 0x80u) != 0 )
              goto LABEL_26;
          }
LABEL_41:
          v12 = 0;
        }
LABEL_16:
        *v24 = v12;
      }
      else
      {
        v24[1] = *(uint32_t *)(v7 + 4);
        if ( ASN1_STRING_set((int)(uintptr_t)(v24), *(char **)(v7 + 8), *(uint32_t *)v7) == 0 )
          goto LABEL_10;
      }
      if ( sk_push(v28, v27) == 0 )
        goto LABEL_10;
      ++v25;
    }
    v19 = sub_198D010((int)(uintptr_t)(v31), nullptr);
    v3 = 0;
    a1[4] = v19;
    v20 = CRYPTO_malloc(v19, (int)(uintptr_t)(&unk_1B15112), 0);
    v32 = v20;
    if ( v20 != nullptr )
    {
      LOWORD(v3) = 1;
      a1[3] = (uint32_t)(uintptr_t)(v20);
      sub_198D010((int)(uintptr_t)(v31), &v32);
    }
LABEL_11:
    sk_pop_free(v31, (int)(uintptr_t)(sub_198D090));
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_198D6A0  (binary VA: 0x198d6a0)
// Original: sub_198D6A0
// ----------------------------------------------------------------------------
int sub_198D6A0(int a1, int a2, void **a3)
{
  int v3;
  int v4;
  signed int n;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v15 = *(uint32_t **)a2;
  v3 = *(uint32_t *)(*(uint32_t *)a2 + 4);
  if ( v3 == 0 )
    goto LABEL_2;
  v17 = (void *)sk_new_null(v3, a1);
  if ( v17 != nullptr )
  {
    v16 = -1;
    v7 = 0;
    v8 = 0;
    while ( v7 < sk_num(*v15) )
    {
      v10 = sk_value(*v15, v7);
      if ( *(uint32_t *)(v10 + 8) != v16 )
      {
        v11 = (int)(uintptr_t)(sk_new_null(v16, v9));
        v8 = v11;
        if ( v11 == 0 || sk_push(v17, v11) == 0 )
          goto LABEL_15;
        v16 = *(uint32_t *)(v10 + 8);
      }
      if ( sk_push(v8, v10) == 0 )
        goto LABEL_15;
      ++v7;
    }
    n = ASN1_item_ex_i2d((int *)&v17, nullptr, (int)(uintptr_t)(&X509_NAME_INTERNAL_it), -1, -1);
    if ( BUF_MEM_grow(v15[2], n) == 0 )
    {
LABEL_15:
      v12 = v17;
      goto LABEL_16;
    }
    v18 = *(void **)(v15[2] + 4);
    ASN1_item_ex_i2d((int *)&v17, &v18, (int)(uintptr_t)(&X509_NAME_INTERNAL_it), -1, -1);
    sk_pop_free(v17, (int)(uintptr_t)(sub_198D0C0));
    v15[1] = 0;
    if ( n < 0 )
      return n;
    if ( v15[3] != 0 )
    {
      CRYPTO_free((void *)v15[3]);
      v15[3] = 0;
    }
    if ( sk_num(*v15) != 0 )
    {
      n = sub_198D360(v15, v13, v14);
      if ( n < 0 )
        return n;
    }
    else
    {
      v15[4] = 0;
    }
LABEL_2:
    v4 = v15[2];
    n = *(uint32_t *)v4;
    if ( a3 != nullptr )
    {
      memcpy(*a3, *(const void **)(v4 + 4), n);
      *a3 = (char *)*a3 + n;
    }
    return n;
  }
  v12 = nullptr;
LABEL_16:
  sk_pop_free(v12, (int)(uintptr_t)(sub_198D0C0));
  ERR_put_error(13, 203, 65, &unk_1B15112, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_198D8F0  (binary VA: 0x198d8f0)
// Original: sub_198D8F0
// ----------------------------------------------------------------------------
int sub_198D8F0(void ***a1, char **a2, int a3, int a4, int a5, int a6, char a7, uint8_t *a8)
{
  char *src;
  int result;
  int v10;
  int v11;
  void *v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  void **v17;
  typedef char *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);

  v19 = nullptr;
  v20 = nullptr;
  src = *a2;
  v18 = *a2;
  result = ASN1_item_ex_d2i((int *)&v19, &v18, a3, (int)(uintptr_t)(&X509_NAME_INTERNAL_it), a5, a6, a7, a8);
  if ( result > 0 )
  {
    if ( *a1 != nullptr )
      sub_198D0F0(a1);
    if ( sub_198D170(&v20) != 0 && BUF_MEM_grow(v20[2], v18 - src) != 0 )
    {
      v10 = 0;
      memcpy(*(void **)(v20[2] + 4), src, v18 - src);
      while ( v10 < sk_num(v19) )
      {
        v11 = 0;
        v12 = (void *)sk_value(v19, v10);
        while ( v11 < sk_num(v12) )
        {
          v13 = sk_value(v12, v11);
          *(uint32_t *)(v13 + 8) = v10;
          if ( sk_push(*v20, v13) == 0 )
            goto LABEL_5;
          ++v11;
        }
        ++v10;
        sk_free(v12);
      }
      sk_free(v19);
      v14 = v20;
      if ( v20[3] != 0 )
      {
        CRYPTO_free((void *)v20[3]);
        v14[3] = 0;
      }
      if ( sk_num(*v14) == 0 )
      {
        v14[4] = 0;
        result = 1;
LABEL_19:
        v17 = (void **)v20;
        v20[1] = 0;
        *a1 = v17;
        *a2 = v18;
        return result;
      }
      result = sub_198D360(v14, v15, v16);
      if ( result != 0 )
        goto LABEL_19;
    }
LABEL_5:
    ERR_put_error(13, 158, 58, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198DCC0  (binary VA: 0x198dcc0)
// Original: sub_198DCC0
// ----------------------------------------------------------------------------
int sub_198DCC0(int a1, int *a2)
{
  int v2;

  v2 = *a2;
  switch ( a1 )
  {
    case 1:
      *(uint32_t *)(v2 + 12) = 0;
      *(uint32_t *)(v2 + 20) = 0;
      *(uint32_t *)(v2 + 40) = 0;
      *(uint32_t *)(v2 + 32) = -1;
      *(uint32_t *)(v2 + 56) = 0;
      *(uint32_t *)(v2 + 60) = 0;
      *(uint32_t *)(v2 + 100) = 0;
      *(uint32_t *)(v2 + 68) = 0;
      CRYPTO_new_ex_data(10, v2, v2 + 24);
      return 1;
    case 3:
      CRYPTO_free_ex_data(10, v2, v2 + 24);
      X509_CERT_AUX_free(*(uint32_t *)(v2 + 100));
      ASN1_OCTET_STRING_free(*(uint32_t *)(v2 + 56));
      AUTHORITY_KEYID_free(*(uint32_t *)(v2 + 60));
      CRL_DIST_POINTS_free(*(uint32_t *)(v2 + 68));
      policy_cache_free(*(void **)(v2 + 64));
      GENERAL_NAMES_free(*(uint32_t *)(v2 + 72));
      NAME_CONSTRAINTS_free(*(uint32_t *)(v2 + 76));
      if ( *(uint32_t *)(v2 + 20) == 0 )
        return 1;
      CRYPTO_free(*(void **)(v2 + 20));
      return 1;
    case 5:
      if ( *(uint32_t *)(v2 + 20) != 0 )
        CRYPTO_free(*(void **)(v2 + 20));
      *(uint32_t *)(v2 + 20) = (uint32_t)(uintptr_t)(X509_NAME_oneline(*(uint32_t *)(*(uint32_t *)v2 + 20), nullptr, 0));
      return 1;
    default:
      return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_198E290  (binary VA: 0x198e290)
// Original: sub_198E290
// ----------------------------------------------------------------------------
int sub_198E290(int a1)
{
  int result;

  if ( a1 == 0 )
    return 0;
  result = *(uint32_t *)(a1 + 100);
  if ( result == 0 )
  {
    result = X509_CERT_AUX_new();
    *(uint32_t *)(a1 + 100) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198E7A0  (binary VA: 0x198e7a0)
// Original: sub_198E7A0
// ----------------------------------------------------------------------------
const void ** sub_198E7A0(const void **result, void **a2, size_t *a3, int *a4, char a5)
{
  size_t v6;
  int v7;
  int v8;
  uint8_t *dest;
  const void **v10;

  v10 = result;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v6 = *a3;
      v7 = *a4;
      if ( *a3 < *a4 )
        break;
      while ( *a2 != nullptr )
      {
        v8 = v7 + 1024;
        *a4 = v8;
        *a2 = CRYPTO_realloc(*a2, v8, (int)(uintptr_t)(&unk_1B15112), 0);
        v6 = *a3;
        v7 = *a4;
        if ( *a3 < *a4 )
          goto LABEL_5;
      }
      if ( v7 == 0 )
      {
        *a4 = 1024;
        LOWORD(v7) = 1024;
      }
      dest = CRYPTO_malloc(v7, (int)(uintptr_t)(&unk_1B15112), 0);
      *a2 = dest;
      if ( *a3 != 0 )
        memcpy(dest, *v10, *a3);
      *v10 = nullptr;
    }
  }
  else
  {
    v6 = *a3;
    if ( *a3 >= *a4 )
      return result;
  }
LABEL_5:
  result = (const void **)*v10;
  if ( *v10 == nullptr )
    result = (const void **)*a2;
  *((uint8_t *)result + v6) = a5;
  *a3 = v6 + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198E8B0  (binary VA: 0x198e8b0)
// Original: sub_198E8B0
// ----------------------------------------------------------------------------
const void ** sub_198E8B0(const void **a1, void **a2, int64_t a3, int64_t a4, unsigned int a5, int a6, int a7, char a8)
{
  int v8;
  const char *v9;
  const char *v10;
  char v11;
  int v12;
  uint64_t v13; // rax
  int v14;
  size_t v15;
  int v16;
  int v17;
  const void **result;
  char *v19;
  int i;
  int v21;
  int v24;
  char *s;
  int v26;
  bool v27;
  uint8_t v28[54];
  uint64_t v29; // 0:edi.4,4:ebp.4

  v8 = a7;
  if ( a7 < 0 )
    v8 = 0;
  v24 = v8;
  v29 = a4;
  v27 = false;
  v26 = 0;
  if ( (a8 & 0x40) == 0 )
  {
    if ( a4 < 0 )
    {
      LODWORD(v29) = -(int)a4;
      v27 = true;
      v26 = 45;
      HIDWORD(v29) = (uint64_t)-a4 >> 32;
    }
    else
    {
      v27 = true;
      v26 = 43;
      if ( (a8 & 2) == 0 )
      {
        v27 = (a8 & 4) != 0;
        v26 = (a8 & 4) != 0 ? 0x20 : 0;
      }
    }
  }
  s = (char *)&unk_1B15112;
  if ( (a8 & 8) != 0 )
  {
    s = (char *)&a0[2];
    if ( a5 != 8 )
    {
      v9 = "0x";
      if ( a5 != 16 )
        v9 = (const char *)&unk_1B15112;
      s = (char *)v9;
    }
  }
  for ( i = 0; ; ++i )
  {
    v10 = "0123456789ABCDEF";
    if ( (a8 & 0x20) == 0 )
      v10 = "0123456789abcdef";
    v11 = v10[v29 % a5];
    v12 = i + 1;
    v28[i] = v11;
    v13 = v29 / a5;
    v29 = v13;
    if ( i + 1 > 25 || v13 == 0 )
      break;
  }
  if ( i == 25 )
    v12 = 25;
  v14 = v24 - v12;
  v28[v12] = 0;
  v15 = strlen(s);
  v16 = v24;
  if ( v12 >= v24 )
    v16 = v12;
  if ( v14 < 0 )
    v14 = 0;
  v17 = a6 - v16 - v27 - v15;
  if ( v17 < 0 )
    v17 = 0;
  if ( (a8 & 0x10) != 0 )
  {
    if ( v14 < v17 )
      v14 = v17;
    v17 = 0;
  }
  if ( (a8 & 1) != 0 )
  {
    v17 = -v17;
  }
  else if ( v17 > 0 )
  {
    do
    {
      sub_198E7A0(a1, a2, (size_t *)a3, (int *)HIDWORD(a3), 32);
      --v17;
    }
    while ( v17 != 0 );
    if ( v26 != 0 )
LABEL_47:
      sub_198E7A0(a1, a2, (size_t *)a3, (int *)HIDWORD(a3), v26);
LABEL_33:
    result = (const void **)(uint8_t)*s;
    if ( (uint8_t)(uintptr_t)(result) != 0 )
    {
      v21 = v12;
      v19 = s;
      do
      {
        ++v19;
        sub_198E7A0(a1, a2, (size_t *)a3, (int *)HIDWORD(a3), (char)(uintptr_t)(result));
        result = (const void **)(uint8_t)*v19;
      }
      while ( (uint8_t)(uintptr_t)(result) != 0 );
      v12 = v21;
    }
    for ( ; v14 != 0; --v14 )
      result = sub_198E7A0(a1, a2, (size_t *)a3, (int *)HIDWORD(a3), 48);
    for ( ; v12 != 0; result = sub_198E7A0(a1, a2, (size_t *)a3, (int *)HIDWORD(a3), v28[v12]) )
      --v12;
    for ( ; v17 != 0; ++v17 )
      result = sub_198E7A0(a1, a2, (size_t *)a3, (int *)HIDWORD(a3), 32);
    return result;
  }
  if ( v26 == 0 )
    goto LABEL_33;
  goto LABEL_47;
}

// ----------------------------------------------------------------------------
// Function: sub_198EC90  (binary VA: 0x198ec90)
// Original: sub_198EC90
// ----------------------------------------------------------------------------
uint32_t * sub_198EC90(const void **a1, void **a2, int *a3, uint32_t *a4, uint32_t *a5, char *a6, unsigned int *a7)
{
  char v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  int v14;
  int64_t v15; // rax
  char v16; // si
  unsigned int v17;
  bool v18;
  char *v19;
  int v20;
  char *v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  double v29; // xmm0_8
  int v30;
  double v31; // xmm3_8
  int v32;
  int v33;
  double v34; // xmm0_8
  int v35;
  double v36; // xmm0_8
  int i;
  double v38; // xmm1_8
  int v39;
  int *v40;
  int j;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int k;
  int m;
  int n;
  int v60;
  unsigned int v61;
  int v62;
  uint16_t *v63;
  bool v64;
  bool v65;
  typedef int64_t _g4_t_v66;
  typedef int64_t _g4_t_v67;
  typedef int64_t _g4_t_v68;
  typedef int _g4_t_v69;
  typedef bool _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef char *_g4_t_v83;
  typedef uint64_t _g4_t_v84;
  typedef int _g4_t_v85;
  typedef const void **_g4_t_v86;
  typedef void **_g4_t_v87;
  typedef char *_g4_t_v88;
  typedef size_t _g4_t_v89[14];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v66)) > _g4_s0 ? (0u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v67)) > _g4_s1 ? (0u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v68)) > _g4_s2 ? (0u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v69)) > _g4_s3 ? (44u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v70)) > _g4_s4 ? (48u + sizeof(_g4_t_v70)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v71)) > _g4_s5 ? (48u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v72)) > _g4_s6 ? (52u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v73)) > _g4_s7 ? (52u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v74)) > _g4_s8 ? (56u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v75)) > _g4_s9 ? (56u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v76)) > _g4_s10 ? (60u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v77)) > _g4_s11 ? (60u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v78)) > _g4_s12 ? (60u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v79)) > _g4_s13 ? (64u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v80)) > _g4_s14 ? (64u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v81)) > _g4_s15 ? (68u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v82)) > _g4_s16 ? (68u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v83)) > _g4_s17 ? (68u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v84)) > _g4_s18 ? (72u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v85)) > _g4_s19 ? (80u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v86)) > _g4_s20 ? (84u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v87)) > _g4_s21 ? (88u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v88)) > _g4_s22 ? (92u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v89)) > _g4_s23 ? (100u + sizeof(_g4_t_v89)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 0u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 60u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 64u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 68u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 68u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 68u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 72u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 100u);

  v87 = a2;
  v86 = a1;
  v89[0] = 0;
  v8 = *a6;
  v88 = a6 + 1;
LABEL_2:
  v9 = 0;
  LODWORD(v84) = 0;
  v10 = 0;
  v85 = -1;
  v79 = 0;
  while ( v8 != 0 )
  {
    if ( v87 == nullptr )
    {
      v11 = *a3;
      if ( *a3 <= v89[0] )
        goto LABEL_5;
    }
    switch ( v10 )
    {
      case 0:
        if ( v8 == 37 )
        {
          v10 = 1;
        }
        else
        {
          v69 = v9;
          sub_198E7A0(v86, v87, v89, a3, v8);
          v9 = v69;
        }
LABEL_27:
        v8 = *v88++;
        continue;
      case 1:
        switch ( v8 )
        {
          case ' ':
            LODWORD(v84) = v84 | 4;
            v8 = *v88++;
            break;
          case '#':
            LODWORD(v84) = v84 | 8;
            v8 = *v88++;
            break;
          case '+':
            LODWORD(v84) = v84 | 2;
            v8 = *v88++;
            break;
          case '-':
            LODWORD(v84) = v84 | 1;
            goto LABEL_27;
          case '0':
            LODWORD(v84) = v84 | 0x10;
            v8 = *v88++;
            break;
          default:
            v10 = 2;
            break;
        }
        continue;
      case 2:
        if ( (unsigned int)(uint8_t)v8 - 48 > 9 )
        {
          v10 = 3;
          if ( v8 == 42 )
          {
            v79 = *a7;
            goto LABEL_41;
          }
        }
        else
        {
          v79 = v8 + 10 * v79 - 48;
          v8 = *v88++;
        }
        continue;
      case 3:
        v10 = 5;
        if ( v8 == 46 )
        {
          v8 = *v88++;
          v10 = 4;
        }
        continue;
      case 4:
        if ( (unsigned int)(uint8_t)v8 - 48 > 9 )
        {
          v10 = 5;
          if ( v8 == 42 )
          {
            v85 = *a7;
LABEL_41:
            v8 = *v88++;
            ++a7;
          }
        }
        else
        {
          v14 = 0;
          if ( v85 >= 0 )
            v14 = v85;
          v85 = v8 + 10 * v14 - 48;
          v8 = *v88++;
        }
        continue;
      case 5:
        switch ( v8 )
        {
          case 'L':
            v9 = 3;
            v8 = *v88++;
            v10 = 6;
            break;
          case 'h':
            v10 = 6;
            v8 = *v88++;
            v9 = 1;
            break;
          case 'l':
            v9 = 2;
            v8 = *v88;
            if ( *v88 == 108 )
            {
              v8 = *++v88;
              LOBYTE(v9) = 4;
            }
            ++v88;
            v10 = 6;
            break;
          case 'q':
            v10 = 6;
            v8 = *v88++;
            v9 = 4;
            continue;
          default:
            v10 = 6;
            continue;
        }
        break;
      case 6:
        switch ( v8 )
        {
          case '%':
            sub_198E7A0(v86, v87, v89, a3, 37);
            goto LABEL_33;
          case 'E':
          case 'G':
          case 'e':
          case 'g':
            a7 += 2;
            v8 = *v88++;
            goto LABEL_2;
          case 'X':
            LODWORD(v84) = v84 | 0x20;
            goto LABEL_57;
          case 'c':
            sub_198E7A0(v86, v87, v89, a3, *a7++);
            goto LABEL_33;
          case 'd':
          case 'i':
            switch ( v9 )
            {
              case 1:
                LODWORD(v15) = *(int16_t *)a7++;
                v15 = (int)v15;
                break;
              case 4:
                v15 = *(uint64_t *)a7;
                a7 += 2;
                break;
              default:
                LODWORD(v15) = *a7;
                HIDWORD(v15) = *a7++;
                SHIDWORD(v15) >>= 31;
                break;
            }
            HIDWORD(v66) = (uint32_t)(uintptr_t)(a3);
            LODWORD(v66) = (uint32_t)(uintptr_t)(v89);
            sub_198E8B0(v86, v87, v66, v15, 0xAu, v79, v85, v84);
            goto LABEL_33;
          case 'f':
            v29 = *(double *)a7;
            a7 += 2;
            v78 = 6;
            if ( v85 >= 0 )
            {
              v30 = 9;
              if ( v85 <= 9 )
                v30 = v85;
              v78 = v30;
            }
            v70 = true;
            v31 = fabs(v29);
            v72 = 45;
            if ( v29 >= 0.0 )
            {
              v72 = 43;
              if ( (v84 & 2) == 0 )
              {
                v60 = v84 & 4;
                v70 = v60 != 0;
                v72 = v60 != 0 ? 0x20 : 0;
              }
            }
            v32 = (int)v31;
            if ( v78 != 0 )
            {
              v33 = v78;
              v34 = 1.0;
              do
              {
                --v33;
                v34 = v34 * 10.0;
              }
              while ( v33 != 0 );
              v35 = (int)v34;
              v12 = v34 - (double)(int)v34 < 0.5;
              v36 = 1.0;
              if ( !v12 )
                ++v35;
              for ( i = v78; i != 0; --i )
                v36 = v36 * 10.0;
            }
            else
            {
              v35 = 1;
              v36 = 1.0;
            }
            v38 = (v31 - (double)v32) * v36;
            v39 = (int)v38 + 1;
            if ( v38 - (double)(int)v38 < 0.5 )
              v39 = (int)v38;
            v85 = v39;
            if ( v39 >= v35 )
            {
              ++v32;
              v85 = v39 - v35;
            }
            v40 = a3;
            for ( j = 0; ; ++j )
            {
              v42 = v32 / 10;
              v43 = a0123456789abcd_0 /* "0123456789abcdef" */[v32 % 10];
              v32 /= 10;
              *((uint8_t *)&v89[1] + j) = v43;
              v44 = j + 1;
              if ( j + 1 > 19 || v42 == 0 )
                break;
            }
            v45 = j;
            v46 = (int)(uintptr_t)(v40);
            v47 = v44;
            if ( v44 == 20 )
              v47 = v45;
            v48 = 0;
            v74 = v47;
            *((uint8_t *)&v89[1] + v47) = 0;
            v49 = v85;
            v85 = v46;
            do
            {
              v50 = a0123456789abcd_0 /* "0123456789abcdef" */[v49 % 10];
              v49 /= 10;
              *((uint8_t *)&v89[6] + v48++) = v50;
            }
            while ( v48 < v78 );
            v51 = v74;
            v52 = 1;
            if ( v78 > 0 )
              v52 = v78;
            v53 = 0;
            v75 = v52;
            a3 = (int *)v85;
            *((uint8_t *)&v89[6] + v52) = 0;
            v54 = v78 - v52;
            if ( v78 - v52 < 0 )
              v54 = 0;
            if ( v79 - v51 - v78 - 1 - v70 >= 0 )
              v53 = v79 - v51 - v78 - 1 - v70;
            v80 = v54;
            v85 = v53;
            v55 = -v53;
            if ( (v84 & 1) == 0 )
              v55 = v85;
            v85 = v55;
            if ( v55 <= 0 )
              goto LABEL_138;
            if ( (v84 & 0x10) != 0 )
            {
              if ( v72 == 0 || (sub_198E7A0(v86, v87, v89, a3, v72), --v85, v85 != 0) )
              {
                v73 = v51;
                v62 = v85;
                do
                {
                  sub_198E7A0(v86, v87, v89, a3, 48);
                  --v62;
                }
                while ( v62 != 0 );
                v51 = v73;
              }
              v85 = 0;
            }
            else
            {
              v71 = v51;
              v56 = v85;
              do
              {
                sub_198E7A0(v86, v87, v89, a3, 32);
                --v56;
              }
              while ( v56 != 0 );
              v85 = 0;
              v51 = v71;
LABEL_138:
              if ( v72 != 0 )
                sub_198E7A0(v86, v87, v89, a3, v72);
            }
            while ( v51 != 0 )
            {
              --v51;
              sub_198E7A0(v86, v87, v89, a3, *((uint8_t *)&v89[1] + v51));
            }
            if ( v78 != 0 || (v84 & 8) != 0 )
            {
              sub_198E7A0(v86, v87, v89, a3, 46);
              for ( k = v75; k != 0; sub_198E7A0(v86, v87, v89, a3, *((uint8_t *)&v89[6] + k)) )
                --k;
            }
            if ( v80 != 0 )
            {
              for ( m = v80; m != 0; --m )
                sub_198E7A0(v86, v87, v89, a3, 48);
            }
            if ( v85 != 0 )
            {
              for ( n = v85; n != 0; ++n )
                sub_198E7A0(v86, v87, v89, a3, 32);
            }
            goto LABEL_33;
          case 'n':
            if ( v9 == 1 )
            {
              v63 = (uint16_t *)*a7++;
              *v63 = v89[0];
            }
            else
            {
              if ( v9 == 4 )
                *(uint64_t *)*a7 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(v89[0]), 0);
              else
                *(uint32_t *)*a7 = v89[0];
              ++a7;
            }
            goto LABEL_33;
          case 'o':
          case 'u':
          case 'x':
LABEL_57:
            v16 = v84 | 0x40;
            if ( v9 == 2 )
            {
              v84 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*a7++), 0);
            }
            else if ( v9 == 4 )
            {
              v61 = *a7;
              HIDWORD(v84) = a7[1];
              LODWORD(v84) = v61;
              a7 += 2;
            }
            else
            {
              if ( v9 == 1 )
                v84 = *(uint16_t *)a7;
              else
                v84 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*a7), 0);
              ++a7;
            }
            v17 = 8;
            if ( v8 != 111 )
            {
              LOBYTE(v17) = 10;
              if ( v8 != 117 )
                v17 = 16;
            }
            LODWORD(v67) = (uint32_t)(uintptr_t)(v89);
            HIDWORD(v67) = (uint32_t)(uintptr_t)(a3);
            sub_198E8B0(v86, v87, v67, v84, v17, v79, v85, v16);
            v8 = *v88++;
            goto LABEL_2;
          case 'p':
            HIDWORD(v68) = (uint32_t)(uintptr_t)(a3);
            LODWORD(v68) = (uint32_t)(uintptr_t)(v89);
            sub_198E8B0(v86, v87, v68, (int)*a7++, 0x10u, v79, v85, v84 | 8);
            goto LABEL_33;
          case 's':
            v81 = *a7;
            if ( v85 < 0 )
            {
              v18 = true;
              v85 = 0x7FFFFFFF;
              if ( v87 == nullptr )
              {
                v64 = *a3 == 0;
                v65 = *a3 < 0;
                v85 = *a3;
                v18 = !v65 && !v64;
              }
            }
            else
            {
              v18 = v85 > 0;
            }
            v19 = "<NULL>";
            if ( v81 != 0 )
              v19 = (char *)v81;
            v20 = 0;
            v82 = v19;
            v21 = v19;
            v22 = *v19;
            if ( v22 != 0 )
            {
              do
                ++v20;
              while ( v21[v20] != 0 );
            }
            v23 = v79 - v20;
            if ( v23 < 0 )
              v23 = 0;
            v76 = v23;
            v24 = -v23;
            if ( (v84 & 1) == 0 )
              v24 = v76;
            v25 = 0;
            v77 = v24;
            if ( v24 > 0 && v18 )
            {
              LODWORD(v84) = (uint32_t)(uintptr_t)(a3);
              v26 = v24;
              do
              {
                --v26;
                sub_198E7A0(v86, v87, v89, (int *)v84, 32);
                v18 = v85 > ++v25;
              }
              while ( v85 > v25 && v26 > 0 );
              v77 = v26;
              a3 = (int *)v84;
              v22 = *v82;
            }
            if ( v22 == 0 || !v18 )
              goto LABEL_92;
            v83 = &v82[-v25];
            break;
          case 'w':
            ++v88;
            goto LABEL_33;
          default:
            goto LABEL_33;
        }
        while ( 1 )
        {
          ++v25;
          sub_198E7A0(v86, v87, v89, a3, v22);
          v22 = v83[v25];
          v18 = v85 > v25;
          if ( v22 == 0 )
            break;
          if ( v85 <= v25 )
            goto LABEL_171;
        }
LABEL_92:
        if ( v18 && v77 < 0 )
        {
          LODWORD(v84) = (uint32_t)(uintptr_t)(a3);
          v27 = v25;
          v28 = v77;
          do
          {
            ++v28;
            sub_198E7A0(v86, v87, v89, (int *)v84, 32);
            ++v27;
          }
          while ( v85 > v27 && v28 < 0 );
          a3 = (int *)v84;
          ++a7;
        }
        else
        {
LABEL_171:
          ++a7;
        }
LABEL_33:
        v8 = *v88++;
        goto LABEL_2;
    }
  }
  v11 = *a3;
LABEL_5:
  v12 = v11 - 1 < v89[0];
  *a5 = v12;
  if ( v12 )
    v89[0] = *a3 - 1;
  sub_198E7A0(v86, v87, v89, a3, 0);
  *a4 = v89[0] - 1;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: sub_198FAE0  (binary VA: 0x198fae0)
// Original: sub_198FAE0
// ----------------------------------------------------------------------------
int sub_198FAE0(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_callback_ctrl(*(uint32_t *)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198FB20  (binary VA: 0x198fb20)
// Original: sub_198FB20
// ----------------------------------------------------------------------------
int sub_198FB20(int a1)
{
  int result;
  int v2;

  result = 0;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 32);
    if ( *(uint32_t *)(v2 + 8) != 0 )
      CRYPTO_free(*(void **)(v2 + 8));
    if ( *(uint32_t *)(v2 + 20) != 0 )
      CRYPTO_free(*(void **)(v2 + 20));
    CRYPTO_free(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 20) = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_198FBA0  (binary VA: 0x198fba0)
// Original: sub_198FBA0
// ----------------------------------------------------------------------------
int sub_198FBA0(uint32_t *a1)
{
  uint8_t *v1;
  uint8_t *v2;
  uint8_t *v3;
  int v5;

  v1 = CRYPTO_malloc(32, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = 0;
  if ( v1 != nullptr )
  {
    v2 = CRYPTO_malloc(4096, (int)(uintptr_t)(&unk_1B15112), 0);
    *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(v2);
    if ( v2 != nullptr )
    {
      v3 = CRYPTO_malloc(4096, (int)(uintptr_t)(&unk_1B15112), 0);
      *((uint32_t *)v1 + 5) = (uint32_t)(uintptr_t)(v3);
      if ( v3 != nullptr )
      {
        *(uint32_t *)v1 = 4096;
        *((uint32_t *)v1 + 1) = 4096;
        *((uint32_t *)v1 + 3) = 0;
        *((uint32_t *)v1 + 4) = 0;
        *((uint32_t *)v1 + 6) = 0;
        *((uint32_t *)v1 + 7) = 0;
        v5 = 1;
        a1[3] = 1;
        a1[8] = (uint32_t)(uintptr_t)(v1);
        a1[5] = 0;
        return v5;
      }
      CRYPTO_free(*((void **)v1 + 2));
    }
    CRYPTO_free(v1);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_198FCB0  (binary VA: 0x198fcb0)
// Original: sub_198FCB0
// ----------------------------------------------------------------------------
int sub_198FCB0(int a1, int a2, signed int n, uint32_t *src)
{
  signed int *v4;
  int v5;
  int result;
  int v7;
  signed int v8;
  signed int v9;
  uint8_t *v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  signed int v16;
  signed int v17;
  signed int v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint8_t *v30;
  int v31;
  int v32;
  int v33;
  uint8_t *v34;

  v4 = *(signed int **)(a1 + 32);
  switch ( a2 )
  {
    case 1:
      v4[4] = 0;
      v4[3] = 0;
      v4[7] = 0;
      v4[6] = 0;
      result = 0;
      v12 = *(uint32_t *)(a1 + 36);
      if ( v12 != 0 )
        return BIO_ctrl(v12, 1, n, src);
      return result;
    case 3:
      return v4[6];
    case 10:
      result = v4[3];
      if ( result == 0 )
      {
        v13 = *(uint32_t *)(a1 + 36);
        if ( v13 != 0 )
          return BIO_ctrl(v13, 10, n, src);
      }
      return result;
    case 11:
      result = 0;
      v7 = *(uint32_t *)(a1 + 36);
      if ( v7 != 0 )
      {
        if ( v4[6] <= 0 )
        {
          return BIO_ctrl(v7, 11, n, src);
        }
        else
        {
          while ( 1 )
          {
            BIO_clear_flags(a1, 15);
            v8 = v4[6];
            v9 = v4[7];
            if ( v8 <= v9 )
              break;
            v29 = BIO_write(*(uint32_t *)(a1 + 36), v4[5] + v9, v8 - v9);
            BIO_copy_next_retry(a1);
            result = v29;
            if ( v29 <= 0 )
              return result;
            v4[7] += v29;
          }
          v4[6] = 0;
          v4[7] = 0;
          return BIO_ctrl(*(uint32_t *)(a1 + 36), 11, n, src);
        }
      }
      return result;
    case 12:
      v23 = BIO_int_ctrl(src, 117, *v4, 0);
      result = 0;
      if ( v23 != 0 )
        return BIO_int_ctrl(src, 117, v4[1], 1) != 0;
      return result;
    case 13:
      result = v4[6];
      if ( result == 0 )
      {
        v15 = *(uint32_t *)(a1 + 36);
        if ( v15 != 0 )
          return BIO_ctrl(v15, 13, n, src);
      }
      break;
    case 101:
      result = 0;
      if ( *(uint32_t *)(a1 + 36) != 0 )
      {
        BIO_clear_flags(a1, 15);
        v14 = BIO_ctrl(*(uint32_t *)(a1 + 36), 101, n, src);
        BIO_copy_next_retry(a1);
        return v14;
      }
      break;
    case 116:
      v16 = v4[4];
      v17 = v4[2];
      v18 = v4[3];
      result = 0;
      if ( v16 < v18 )
      {
        do
        {
          v19 = *(uint8_t *)(v17 + v16++) == 10;
          result += v19;
        }
        while ( v16 != v18 );
      }
      return result;
    case 117:
      v20 = n;
      v21 = n;
      if ( src != nullptr )
      {
        if ( *src != 0 )
        {
          v21 = *v4;
          v20 = n;
        }
        else
        {
          v20 = v4[1];
        }
      }
      v22 = (uint8_t *)v4[2];
      v34 = (uint8_t *)v4[5];
      if ( v21 <= 4096
        || *v4 == v21
        || (v25 = v20, v31 = v21, v22 = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0), v20 = v25, v21 = v31, v22 != nullptr) )
      {
        if ( v20 <= 4096
          || v4[1] == v20
          || (v26 = v20, v32 = v21, v34 = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0), v20 = v26, v21 = v32, v34 != nullptr) )
        {
          v24 = (uint8_t *)v4[2];
          if ( v24 != v22 )
          {
            v27 = v20;
            v33 = v21;
            CRYPTO_free(v24);
            v4[2] = (signed int)(uintptr_t)(v22);
            v4[4] = 0;
            v4[3] = 0;
            *v4 = v33;
            v20 = v27;
          }
          result = 1;
          if ( (uint8_t *)v4[5] != v34 )
          {
            v28 = v20;
            CRYPTO_free((void *)v4[5]);
            v4[7] = 0;
            v4[5] = (signed int)(uintptr_t)(v34);
            v4[6] = 0;
            v4[1] = v28;
            return 1;
          }
          return result;
        }
        if ( (uint8_t *)v4[2] != v22 )
          CRYPTO_free(v22);
      }
      goto LABEL_49;
    case 122:
      if ( n <= *v4 )
      {
LABEL_28:
        v4[4] = 0;
        v4[3] = n;
        memcpy((void *)v4[2], src, n);
        return 1;
      }
      v10 = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v10 != nullptr )
      {
        v11 = (void *)v4[2];
        if ( v11 != nullptr )
        {
          v30 = v10;
          CRYPTO_free(v11);
          v10 = v30;
        }
        v4[2] = (signed int)(uintptr_t)(v10);
        goto LABEL_28;
      }
LABEL_49:
      ERR_put_error(32, 114, 65, &unk_1B15112, 0);
      return 0;
    default:
      v5 = *(uint32_t *)(a1 + 36);
      result = 0;
      if ( v5 != 0 )
        return BIO_ctrl(v5, a2, n, src);
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1990200  (binary VA: 0x1990200)
// Original: sub_1990200
// ----------------------------------------------------------------------------
int sub_1990200(int a1, uint8_t *a2, int a3)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v11;
  int v12;
  char v13;
  int v14;

  v4 = a3 - 1;
  v5 = *(uint32_t **)(a1 + 32);
  BIO_clear_flags(a1, 15);
  v14 = 0;
  v6 = v5[3];
  while ( 1 )
  {
    while ( v6 > 0 )
    {
      v7 = v5[4];
      v8 = 0;
      v13 = 0;
      if ( v4 > 0 )
      {
        v9 = (uint8_t *)(v5[2] + v7);
        *a2++ = *v9;
        if ( *v9 == 10 )
        {
          v8 = 1;
        }
        else
        {
          do
          {
            ++v8;
            v6 = v5[3];
            if ( v4 <= v8 || v6 <= v8 )
            {
              v7 = v5[4];
              v13 = 0;
              goto LABEL_10;
            }
            *a2++ = v9[v8];
          }
          while ( v9[v8] != 10 );
          ++v8;
        }
        v6 = v5[3];
        v7 = v5[4];
        v13 = 1;
      }
LABEL_10:
      v6 -= v8;
      v14 += v8;
      v4 -= v8;
      v5[3] = v6;
      v5[4] = v8 + v7;
      if ( v4 == 0 || v13 != 0 )
      {
        *a2 = 0;
        return v14;
      }
    }
    v6 = BIO_read(*(uint32_t *)(a1 + 36), v5[2], *v5);
    if ( v6 <= 0 )
      break;
    v5[3] = v6;
    v5[4] = 0;
  }
  v12 = v6;
  BIO_copy_next_retry(a1);
  *a2 = 0;
  v11 = v12;
  if ( v12 != 0 )
  {
    if ( v14 > 0 )
      return v14;
    return v11;
  }
  return v14;
}

// ----------------------------------------------------------------------------
// Function: sub_1990340  (binary VA: 0x1990340)
// Original: sub_1990340
// ----------------------------------------------------------------------------
int sub_1990340(int a1, char *dest, int a3)
{
  uint32_t *v4;
  int i;
  size_t n;
  int v7;
  int v9;
  char *v10;
  int v11;
  int v12;

  v12 = 0;
  if ( dest == nullptr )
    return v12;
  v4 = *(uint32_t **)(a1 + 32);
  if ( v4 == nullptr || *(uint32_t *)(a1 + 36) == 0 )
    return v12;
  BIO_clear_flags(a1, 15);
  for ( i = v4[3]; ; v4[3] = i )
  {
    if ( i != 0 )
    {
      n = a3;
      if ( i <= a3 )
        n = i;
      memcpy(dest, (const void *)(v4[4] + v4[2]), n);
      v4[4] += n;
      v4[3] -= n;
      v12 += n;
      if ( a3 == n )
        return v12;
      a3 -= n;
      dest += n;
    }
    if ( a3 > *v4 )
      break;
    i = BIO_read(*(uint32_t *)(a1 + 36), v4[2], *v4);
    if ( i <= 0 )
    {
LABEL_13:
      v11 = i;
      BIO_copy_next_retry(a1);
      v7 = v11;
      if ( v11 != 0 )
      {
        if ( v12 > 0 )
          return v12;
        return v7;
      }
      return v12;
    }
    v4[4] = 0;
  }
  v9 = v12;
  v10 = dest;
  while ( 1 )
  {
    i = BIO_read(*(uint32_t *)(a1 + 36), v10, a3);
    if ( i <= 0 )
    {
      v12 = v9;
      goto LABEL_13;
    }
    v9 += i;
    if ( a3 == i )
      return v9;
    v10 += i;
    a3 -= i;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19904A0  (binary VA: 0x19904a0)
// Original: sub_19904A0
// ----------------------------------------------------------------------------
int sub_19904A0(int a1, char *src, int a3)
{
  uint32_t *v3;
  signed int v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v10;
  int n;
  int v12;
  int v13;

  if ( a3 <= 0 || src == nullptr )
    return 0;
  v3 = *(uint32_t **)(a1 + 32);
  v13 = 0;
  if ( v3 != nullptr && *(uint32_t *)(a1 + 36) != 0 )
  {
    BIO_clear_flags(a1, 15);
    v4 = v3[1];
    while ( 1 )
    {
      v5 = v3[6];
      v6 = v3[7];
      n = v4 - (v5 + v6);
      if ( n >= a3 )
      {
        memcpy((void *)(v3[5] + v5), src, a3);
        v3[6] += a3;
        return a3 + v13;
      }
      if ( v5 != 0 )
        break;
LABEL_13:
      v3[7] = 0;
      while ( a3 >= v4 )
      {
        v7 = BIO_write(*(uint32_t *)(a1 + 36), src, a3);
        if ( v7 <= 0 )
          goto LABEL_20;
        v13 += v7;
        a3 -= v7;
        if ( a3 == 0 )
          return v13;
        src += v7;
        v4 = v3[1];
      }
    }
    if ( n > 0 )
    {
      memcpy((void *)(v3[5] + v5), src, n);
      v5 = n + v3[6];
      src += n;
      a3 -= n;
      v13 += n;
      v3[6] = v5;
      v6 = v3[7];
    }
    while ( 1 )
    {
      v7 = BIO_write(*(uint32_t *)(a1 + 36), v3[5] + v6, v5);
      if ( v7 <= 0 )
        break;
      v5 = v3[6] - v7;
      v6 = v7 + v3[7];
      v8 = v3[6] == v7;
      v3[7] = v6;
      v3[6] = v5;
      if ( v8 )
      {
        v4 = v3[1];
        goto LABEL_13;
      }
    }
LABEL_20:
    v12 = v7;
    BIO_copy_next_retry(a1);
    v10 = v12;
    if ( v12 != 0 )
    {
      if ( v13 != 0 )
        return v13;
      return v10;
    }
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_1990660  (binary VA: 0x1990660)
// Original: sub_1990660
// ----------------------------------------------------------------------------
int sub_1990660(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return sub_19904A0(a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1991780  (binary VA: 0x1991780)
// Original: sub_1991780
// ----------------------------------------------------------------------------
int sub_1991780(int a1)
{
  int result;
  int *v2;
  int v3;
  uint32_t *v4;

  result = 0;
  if ( a1 != 0 )
  {
    v2 = *(int **)(a1 + 32);
    v3 = *v2;
    if ( *v2 != 0 )
    {
      v4 = *(uint32_t **)(v3 + 32);
      *v4 = 0;
      *(uint32_t *)(v3 + 12) = 0;
      v4[2] = 0;
      v4[3] = 0;
      *v2 = 0;
      *(uint32_t *)(a1 + 12) = 0;
      v2[2] = 0;
      v2[3] = 0;
    }
    if ( v2[5] != 0 )
      CRYPTO_free((void *)v2[5]);
    CRYPTO_free(v2);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1991800  (binary VA: 0x1991800)
// Original: sub_1991800
// ----------------------------------------------------------------------------
int sub_1991800(int a1)
{
  uint32_t *v1;
  int result;

  v1 = (uint32_t *)(CRYPTO_malloc(28, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[4] = 17408;
    v1[5] = 0;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v1);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1991860  (binary VA: 0x1991860)
// Original: sub_1991860
// ----------------------------------------------------------------------------
int sub_1991860(int a1, char *dest, unsigned int a3)
{
  int result;
  uint32_t *v4;
  unsigned int v5;
  size_t v6;
  size_t n;
  bool v8;
  size_t v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;

  BIO_clear_flags(a1, 15);
  result = 0;
  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    v4 = *(uint32_t **)(**(uint32_t **)(a1 + 32) + 32);
    v4[6] = 0;
    if ( a3 != 0 && dest != nullptr )
    {
      v5 = v4[2];
      if ( v5 != 0 )
      {
        if ( a3 <= v5 )
          v5 = a3;
        v13 = v5;
        v6 = v5;
        do
        {
          while ( 1 )
          {
            v10 = v4[3];
            v11 = v4[4];
            if ( v6 + v10 > v11 )
            {
              n = v11 - v10;
              v6 -= n;
            }
            else
            {
              n = v6;
              v6 = 0;
            }
            memcpy(dest, (const void *)(v4[5] + v10), n);
            v8 = v4[2] == n;
            v4[2] -= n;
            if ( !v8 )
              break;
            v4[3] = 0;
            if ( v6 == 0 )
              return v13;
          }
          v9 = n + v4[3];
          v8 = v9 == v4[4];
          v4[3] = v9;
          if ( v8 )
            v4[3] = 0;
          dest += n;
        }
        while ( v6 != 0 );
        return v13;
      }
      else if ( v4[1] == 0 )
      {
        BIO_set_flags(a1, 9);
        v12 = v4[4];
        if ( a3 <= v12 )
          v4[6] = a3;
        else
          v4[6] = v12;
        return -1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19919B0  (binary VA: 0x19919b0)
// Original: sub_19919B0
// ----------------------------------------------------------------------------
int sub_19919B0(int a1, uint32_t *a2)
{
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;

  BIO_clear_flags(a1, 15);
  result = 0;
  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    v4 = *(uint32_t **)(a1 + 32);
    v5 = v4[1];
    v4[6] = 0;
    if ( v5 != 0 )
    {
      ERR_put_error(32, 122, 124, &unk_1B15112, 0);
      return -1;
    }
    else
    {
      v6 = v4[2];
      v7 = v4[4];
      if ( v6 == v7 )
      {
        BIO_set_flags(a1, 10);
        return -1;
      }
      else
      {
        v8 = v6 + v4[3];
        result = v7 - v6;
        if ( v7 <= v8 )
          v8 -= v7;
        if ( v7 < v8 + result )
          result = v7 - v8;
        if ( a2 != nullptr )
          *a2 = v4[5] + v8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1991AA0  (binary VA: 0x1991aa0)
// Original: sub_1991AA0
// ----------------------------------------------------------------------------
int sub_1991AA0(int a1, uint32_t *a2)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  char v8[13];

  BIO_clear_flags(a1, 15);
  result = 0;
  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    v5 = *(uint32_t **)(**(uint32_t **)(a1 + 32) + 32);
    v6 = v5[2];
    v5[6] = 0;
    if ( v6 != 0 )
    {
      v7 = v5[3];
      result = v5[4] - v7;
      if ( v5[4] >= (unsigned int)(v7 + v6) )
        result = v6;
      if ( a2 != nullptr )
        *a2 = v5[5] + v7;
    }
    else
    {
      return sub_1991860(a1, v8, 1u);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1991B50  (binary VA: 0x1991b50)
// Original: sub_1991B50
// ----------------------------------------------------------------------------
char sub_1991B50(uint32_t *a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  bool v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  uint32_t *v21;

  v4 = a3;
  v5 = a4;
  v6 = (uint32_t *)a1[8];
  switch ( a2 )
  {
    case 1:
      LOBYTE(v7) = 0;
      if ( v6[5] != 0 )
      {
        v6[2] = 0;
        v6[3] = 0;
      }
      return v7;
    case 2:
      LOBYTE(v7) = 1;
      if ( a4 != nullptr )
      {
        v9 = a4[8];
        LOBYTE(v7) = 0;
        if ( *(uint32_t *)(v9 + 8) == 0 )
          LOBYTE(v7) = *(uint32_t *)(v9 + 4) != 0;
      }
      return v7;
    case 8:
      return a1[4];
    case 9:
      a1[4] = a3;
      LOBYTE(v7) = 1;
      return v7;
    case 10:
      LOBYTE(v7) = 0;
      if ( *v6 != 0 )
        return *(uint32_t *)(*(uint32_t *)(*v6 + 32) + 8);
      return v7;
    case 11:
      goto LABEL_9;
    case 12:
      *(uint32_t *)(a4[8] + 16) = v6[4];
      LOBYTE(v7) = 1;
      return v7;
    case 13:
      LOBYTE(v7) = 0;
      if ( v6[5] != 0 )
        return v6[2];
      return v7;
    case 136:
      if ( *v6 != 0 )
      {
        ERR_put_error(32, 103, 123, &unk_1B15112, 0);
        LOBYTE(v7) = 0;
      }
      else if ( a3 != 0 )
      {
        LOBYTE(v7) = 1;
        if ( v6[4] != a3 )
        {
          v8 = (void *)v6[5];
          if ( v8 != nullptr )
          {
            CRYPTO_free(v8);
            v6[5] = 0;
            v4 = a3;
          }
          v6[4] = v4;
LABEL_9:
          LOBYTE(v7) = 1;
        }
      }
      else
      {
        ERR_put_error(32, 103, 125, &unk_1B15112, 0);
        LOBYTE(v7) = 0;
      }
      return v7;
    case 137:
      return v6[4];
    case 138:
      v17 = (uint32_t *)a4[8];
      if ( *v6 != 0 || *v17 != 0 )
      {
        ERR_put_error(32, 121, 123, &unk_1B15112, 0);
        LOBYTE(v7) = 0;
        return v7;
      }
      if ( v6[5] == 0 )
      {
        v19 = CRYPTO_malloc(v6[4], (int)(uintptr_t)(&unk_1B15112), 0);
        v6[5] = (uint32_t)(uintptr_t)(v19);
        v5 = a4;
        if ( v19 == nullptr )
          goto LABEL_62;
        v6[2] = 0;
        v6[3] = 0;
      }
      if ( v17[5] != 0 )
        goto LABEL_56;
      v21 = v5;
      v18 = CRYPTO_malloc(v17[4], (int)(uintptr_t)(&unk_1B15112), 0);
      v17[5] = (uint32_t)(uintptr_t)(v18);
      v5 = v21;
      if ( v18 != nullptr )
      {
        v17[2] = 0;
        v17[3] = 0;
LABEL_56:
        *v6 = (uint32_t)(uintptr_t)(v5);
        v6[1] = 0;
        v6[6] = 0;
        *v17 = (uint32_t)(uintptr_t)(a1);
        v17[1] = 0;
        v17[6] = 0;
        a1[3] = 1;
        v5[3] = 1;
        LOBYTE(v7) = 1;
      }
      else
      {
LABEL_62:
        ERR_put_error(32, 121, 65, &unk_1B15112, 0);
        LOBYTE(v7) = 0;
      }
      return v7;
    case 139:
      LOBYTE(v7) = 1;
      if ( v6 != nullptr )
      {
        v15 = *v6;
        if ( *v6 != 0 )
        {
          v16 = *(uint32_t **)(v15 + 32);
          *v16 = 0;
          *(uint32_t *)(v15 + 12) = 0;
          v16[2] = 0;
          v16[3] = 0;
          *v6 = 0;
          a1[3] = 0;
          v6[2] = 0;
          v6[3] = 0;
        }
      }
      return v7;
    case 140:
      LOBYTE(v7) = 0;
      if ( *v6 != 0 && v6[1] == 0 )
        return v6[4] - v6[2];
      return v7;
    case 141:
      return v6[6];
    case 142:
      v6[1] = 1;
      LOBYTE(v7) = 1;
      return v7;
    case 143:
      LOBYTE(v7) = sub_1991AA0((int)(uintptr_t)(a1), a4);
      return v7;
    case 144:
      v11 = 0x7FFFFFFF;
      if ( a3 >= 0 )
        v11 = a3;
      v7 = sub_1991AA0((int)(uintptr_t)(a1), a4);
      if ( v11 <= v7 )
        v7 = v11;
      if ( v7 > 0 )
      {
        v12 = *(uint32_t **)(*(uint32_t *)a1[8] + 32);
        v13 = v12[2] == v7;
        v12[2] -= v7;
        if ( v13 || (v14 = v7 + v12[3], v13 = v14 == v12[4], v12[3] = v14, v13) )
          v12[3] = 0;
      }
      return v7;
    case 145:
      LOBYTE(v7) = sub_19919B0((int)(uintptr_t)(a1), a4);
      return v7;
    case 146:
      v10 = 0x7FFFFFFF;
      if ( a3 >= 0 )
        v10 = a3;
      v7 = sub_19919B0((int)(uintptr_t)(a1), a4);
      if ( v10 <= v7 )
        v7 = v10;
      if ( v7 > 0 )
        *(uint32_t *)(a1[8] + 8) += v7;
      return v7;
    case 147:
      v6[6] = 0;
      LOBYTE(v7) = 1;
      return v7;
    default:
      LOBYTE(v7) = 0;
      return v7;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1991FF0  (binary VA: 0x1991ff0)
// Original: sub_1991FF0
// ----------------------------------------------------------------------------
int sub_1991FF0(int a1, char *a2, size_t a3)
{
  char *src;
  int result;
  uint32_t *v5;
  int v6;
  size_t v7;
  unsigned int v8;
  size_t v9;
  size_t v10;
  unsigned int v11;
  size_t n;
  char *v13;
  size_t v14;

  BIO_clear_flags(a1, 15);
  src = a2;
  result = 0;
  if ( a2 != nullptr && *(uint32_t *)(a1 + 12) != 0 && a3 != 0 )
  {
    v5 = *(uint32_t **)(a1 + 32);
    v6 = v5[1];
    v5[6] = 0;
    if ( v6 != 0 )
    {
      ERR_put_error(32, 113, 124, &unk_1B15112, 0);
      return -1;
    }
    else
    {
      v7 = v5[2];
      v8 = v5[4];
      if ( v7 == v8 )
      {
        BIO_set_flags(a1, 10);
        return -1;
      }
      else
      {
        v9 = v8 - v7;
        if ( a3 <= v8 - v7 )
          v9 = a3;
        v14 = v9;
        v10 = v9;
        while ( 1 )
        {
          v11 = v5[3] + v7;
          if ( v8 <= v11 )
            v11 -= v8;
          if ( v8 >= v11 + v10 )
            break;
          n = v8 - v11;
          v13 = src;
          memcpy((void *)(v5[5] + v11), src, n);
          v7 = n + v5[2];
          v10 -= n;
          v5[2] = v7;
          if ( v10 == 0 )
            return v14;
          src = &v13[n];
          v8 = v5[4];
        }
        memcpy((void *)(v5[5] + v11), src, v10);
        v5[2] += v10;
        return v14;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1992130  (binary VA: 0x1992130)
// Original: sub_1992130
// ----------------------------------------------------------------------------
int sub_1992130(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return sub_1991FF0(a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_19925B0  (binary VA: 0x19925b0)
// Original: sub_19925B0
// ----------------------------------------------------------------------------
int sub_19925B0(uint32_t *a1)
{
  a1[3] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19925E0  (binary VA: 0x19925e0)
// Original: sub_19925E0
// ----------------------------------------------------------------------------
size_t sub_19925E0(int a1, char *s, int n)
{
  char *v3;
  int v4;

  *s = 0;
  v3 = fgets(s, n, *(FILE **)(a1 + 32));
  v4 = 0;
  if ( v3 != nullptr && *s != 0 )
    return strlen(s);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1992640  (binary VA: 0x1992640)
// Original: sub_1992640
// ----------------------------------------------------------------------------
char sub_1992640(int a1)
{
  char result;

  result = 0;
  if ( a1 != 0 )
  {
    result = 1;
    if ( *(uint32_t *)(a1 + 16) != 0 )
    {
      if ( *(uint32_t *)(a1 + 12) != 0 && *(uint32_t *)(a1 + 32) != 0 )
      {
        fclose(*(FILE **)(a1 + 32));
        *(uint32_t *)(a1 + 32) = 0;
        *(uint32_t *)(a1 + 20) = 0;
      }
      *(uint32_t *)(a1 + 12) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19926B0  (binary VA: 0x19926b0)
// Original: sub_19926B0
// ----------------------------------------------------------------------------
int sub_19926B0(int a1, int a2, int off, char *filename)
{
  int v4;
  int v5;
  FILE *v7;
  int v8;
  int v9;
  uint32_t *v10;
  char modes[16];

  v4 = *(uint32_t *)(a1 + 32);
  if ( a2 == 11 )
  {
    v5 = 1;
    fflush(*(FILE **)(a1 + 32));
    return v5;
  }
  if ( a2 <= 11 )
  {
    switch ( a2 )
    {
      case 1:
        return fseek((FILE *)v4, off, 0);
      case 2:
        return (*(uint8_t *)(v4 + 12) & 0x20) != 0;
      case 3:
        return ftell(*(FILE **)(a1 + 32));
      case 8:
        return *(uint32_t *)(a1 + 16);
      case 9:
        *(uint32_t *)(a1 + 16) = off;
        return 1;
      default:
        return 0;
    }
  }
  if ( a2 == 107 )
  {
    v5 = 1;
    if ( filename != nullptr )
      *(uint32_t *)filename = v4;
    return v5;
  }
  if ( a2 <= 107 )
  {
    v5 = 1;
    if ( a2 == 12 )
      return v5;
    if ( a2 == 106 )
    {
      sub_1992640(a1);
      *(uint32_t *)(a1 + 16) = off & 1;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(filename);
      *(uint32_t *)(a1 + 12) = 1;
      return v5;
    }
    return 0;
  }
  switch ( a2 )
  {
    case 108:
      sub_1992640(a1);
      *(uint32_t *)(a1 + 16) = off & 1;
      if ( (off & 8) != 0 )
      {
        if ( (off & 2) != 0 )
          BUF_strlcpy((int)(uintptr_t)(modes), "a+", 4);
        else
          BUF_strlcpy((int)(uintptr_t)(modes), "a", 4);
      }
      else if ( (off & 6) == 6 )
      {
        BUF_strlcpy((int)(uintptr_t)(modes), "r+", 4);
      }
      else if ( (off & 4) != 0 )
      {
        BUF_strlcpy((int)(uintptr_t)(modes), "w", 4);
      }
      else
      {
        if ( (off & 2) == 0 )
        {
          v5 = 0;
          ERR_put_error(32, 116, 101, &unk_1B15112, 0);
          return v5;
        }
        BUF_strlcpy((int)(uintptr_t)(modes), "r", 4);
      }
      v7 = fopen(filename, modes);
      if ( v7 != nullptr )
      {
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v7);
        *(uint32_t *)(a1 + 12) = 1;
        v5 = 1;
        BIO_clear_flags(a1, 0);
      }
      else
      {
        v10 = (uint32_t *)__errno(v9, v8);
        ERR_put_error(2, 1, *v10, &unk_1B15112, 0);
        v5 = 0;
        ERR_add_error_data(5, "fopen('", filename, "','", modes, "')");
        ERR_put_error(32, 116, 2, &unk_1B15112, 0);
      }
      return v5;
    case 128:
      return fseek((FILE *)v4, off, 0);
    case 133:
      return ftell(*(FILE **)(a1 + 32));
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1992A30  (binary VA: 0x1992a30)
// Original: sub_1992A30
// ----------------------------------------------------------------------------
size_t sub_1992A30(int a1, void *ptr, size_t n)
{
  size_t result;
  int v4;
  int v5;
  uint32_t *v6;

  if ( ptr == nullptr || *(uint32_t *)(a1 + 12) == 0 )
    return 0;
  result = fread(ptr, 1u, n, *(FILE **)(a1 + 32));
  v5 = *(uint32_t *)(a1 + 32);
  if ( (*(uint8_t *)(v5 + 12) & 0x40) != 0 )
  {
    v6 = (uint32_t *)__errno(v4, v5);
    ERR_put_error(2, 11, *v6, &unk_1B15112, 0);
    ERR_put_error(32, 130, 2, &unk_1B15112, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1992B00  (binary VA: 0x1992b00)
// Original: sub_1992B00
// ----------------------------------------------------------------------------
int sub_1992B00(int a1, const void *ptr, size_t size)
{
  int result;
  size_t v4;

  if ( ptr == nullptr || *(uint32_t *)(a1 + 12) == 0 )
    return 0;
  v4 = fwrite(ptr, size, 1u, *(FILE **)(a1 + 32));
  result = 0;
  if ( v4 != 0 )
    return size;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1992B70  (binary VA: 0x1992b70)
// Original: sub_1992B70
// ----------------------------------------------------------------------------
int sub_1992B70(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return sub_1992B00(a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1992DC0  (binary VA: 0x1992dc0)
// Original: sub_1992DC0
// ----------------------------------------------------------------------------
int sub_1992DC0(uint32_t *a1)
{
  int v1;
  int v2;

  v1 = (int)(uintptr_t)(BUF_MEM_new());
  v2 = 0;
  if ( v1 != 0 )
  {
    a1[4] = 1;
    a1[3] = 1;
    a1[7] = -1;
    a1[8] = v1;
    LOBYTE(v2) = 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1992E10  (binary VA: 0x1992e10)
// Original: sub_1992E10
// ----------------------------------------------------------------------------
char sub_1992E10(int a1)
{
  char result;
  uint32_t *v2;

  result = 0;
  if ( a1 != 0 )
  {
    result = 1;
    if ( *(uint32_t *)(a1 + 16) != 0 && *(uint32_t *)(a1 + 12) != 0 )
    {
      v2 = *(uint32_t **)(a1 + 32);
      if ( v2 != nullptr )
      {
        if ( (*(uint8_t *)(a1 + 21) & 2) != 0 )
          v2[1] = 0;
        BUF_MEM_free(v2);
        *(uint32_t *)(a1 + 32) = 0;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1992E80  (binary VA: 0x1992e80)
// Original: sub_1992E80
// ----------------------------------------------------------------------------
int sub_1992E80(int a1, int a2, int a3, int **a4)
{
  int *v4;
  int v5;
  char *s;
  size_t n;

  v4 = *(int **)(a1 + 32);
  if ( a2 == 10 )
    return *v4;
  if ( a2 <= 10 )
  {
    switch ( a2 )
    {
      case 1:
        s = (char *)v4[1];
        v5 = 1;
        if ( s != nullptr )
        {
          n = v4[2];
          if ( (*(uint8_t *)(a1 + 21) & 2) != 0 )
          {
            v4[1] = (int)(uintptr_t)(&s[*v4 - n]);
            *v4 = n;
          }
          else
          {
            memset(s, 0, n);
            *v4 = 0;
            return 1;
          }
        }
        break;
      case 2:
        return *v4 == 0;
      case 3:
        v5 = *v4;
        if ( a4 != nullptr )
          *a4 = (int *)v4[1];
        break;
      case 8:
        return *(uint32_t *)(a1 + 16);
      case 9:
        *(uint32_t *)(a1 + 16) = a3;
        return 1;
      default:
        return 0;
    }
  }
  else
  {
    if ( a2 == 114 )
    {
      sub_1992E10(a1);
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(a4);
      *(uint32_t *)(a1 + 16) = a3;
      return 1;
    }
    if ( a2 <= 114 )
      return a2 <= 12;
    if ( a2 != 115 )
    {
      if ( a2 == 130 )
      {
        *(uint32_t *)(a1 + 28) = a3;
        return 1;
      }
      return 0;
    }
    v5 = 1;
    if ( a4 != nullptr )
      *a4 = v4;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1993010  (binary VA: 0x1993010)
// Original: sub_1993010
// ----------------------------------------------------------------------------
int sub_1993010(int a1, void *dest, signed int a3)
{
  int v3;
  signed int n;
  size_t v6;

  v3 = *(uint32_t *)(a1 + 32);
  BIO_clear_flags(a1, 15);
  n = a3;
  if ( a3 >= 0 && (unsigned int)a3 > *(uint32_t *)v3 )
    n = *(uint32_t *)v3;
  if ( n > 0 && dest != nullptr )
  {
    memcpy(dest, *(const void **)(v3 + 4), n);
    v6 = *(uint32_t *)v3 - n;
    *(uint32_t *)v3 = v6;
    if ( (*(uint8_t *)(a1 + 21) & 2) != 0 )
      *(uint32_t *)(v3 + 4) += n;
    else
      memmove(*(void **)(v3 + 4), (const void *)(*(uint32_t *)(v3 + 4) + n), v6);
  }
  else if ( *(uint32_t *)v3 == 0 )
  {
    n = *(uint32_t *)(a1 + 28);
    if ( n != 0 )
      BIO_set_flags(a1, 9);
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_19930F0  (binary VA: 0x19930f0)
// Original: sub_19930F0
// ----------------------------------------------------------------------------
int sub_19930F0(int a1, uint8_t *a2, int a3)
{
  int v3;
  signed int v4;
  int result;
  int *v6;

  v6 = *(int **)(a1 + 32);
  BIO_clear_flags(a1, 15);
  v3 = *v6;
  if ( *v6 >= a3 )
    v3 = a3 - 1;
  if ( v3 <= 0 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    v4 = 0;
    while ( *(uint8_t *)(v6[1] + v4) != 10 )
    {
      if ( ++v4 == v3 )
        goto LABEL_7;
    }
    ++v4;
LABEL_7:
    result = sub_1993010(a1, a2, v4);
    if ( result > 0 )
      a2[result] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1993190  (binary VA: 0x1993190)
// Original: sub_1993190
// ----------------------------------------------------------------------------
size_t sub_1993190(int a1, void *src, size_t n)
{
  int *v3;
  size_t v4;
  int v5;
  int v6;
  int v8;

  v3 = *(int **)(a1 + 32);
  if ( src != nullptr )
  {
    if ( (*(uint8_t *)(a1 + 21) & 2) != 0 )
    {
      ERR_put_error(32, 117, 126, &unk_1B15112, 0);
      return -1;
    }
    else
    {
      BIO_clear_flags(a1, 15);
      v8 = *v3;
      v4 = *v3 + n;
      v5 = BUF_MEM_grow_clean(v3, v4);
      v6 = -1;
      if ( v4 == v5 )
      {
        memcpy((void *)(v3[1] + v8), src, n);
        return n;
      }
    }
  }
  else
  {
    ERR_put_error(32, 117, 115, &unk_1B15112, 0);
    return -1;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_19932A0  (binary VA: 0x19932a0)
// Original: sub_19932A0
// ----------------------------------------------------------------------------
size_t sub_19932A0(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return sub_1993190(a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_19933C0  (binary VA: 0x19933c0)
// Original: sub_19933C0
// ----------------------------------------------------------------------------
int sub_19933C0(uint32_t *a1)
{
  a1[3] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19933F0  (binary VA: 0x19933f0)
// Original: sub_19933F0
// ----------------------------------------------------------------------------
char sub_19933F0(uint32_t *a1)
{
  char result;

  result = 0;
  if ( a1 != nullptr )
  {
    result = 1;
    if ( a1[4] != 0 )
    {
      if ( a1[3] != 0 )
      {
        shutdown(a1[7], 2);
        close(a1[7]);
      }
      a1[3] = 0;
      a1[5] = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1993470  (binary VA: 0x1993470)
// Original: sub_1993470
// ----------------------------------------------------------------------------
int sub_1993470(uint32_t *a1, int a2, int a3, int *a4)
{
  int result;
  int v5;

  if ( a2 == 104 )
  {
    sub_19933F0(a1);
    v5 = *a4;
    a1[4] = a3;
    a1[7] = v5;
    a1[3] = 1;
    return 1;
  }
  if ( a2 <= 104 )
  {
    if ( a2 == 9 )
    {
      a1[4] = a3;
      return 1;
    }
    if ( a2 <= 9 )
    {
      if ( a2 == 8 )
        return a1[4];
    }
    else if ( (unsigned int)(a2 - 11) <= 1 )
    {
      return 1;
    }
  }
  else if ( a2 == 105 )
  {
    result = -1;
    if ( a1[3] != 0 )
    {
      if ( a4 != nullptr )
        *a4 = a1[7];
      return a1[7];
    }
    return result;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1993640  (binary VA: 0x1993640)
// Original: sub_1993640
// ----------------------------------------------------------------------------
ssize_t sub_1993640(int a1, int a2, int a3, void *buf, size_t nbytes)
{
  ssize_t v5;

  v5 = 0;
  if ( buf != nullptr )
  {
    *(uint32_t *)__errno(a1, a2) = 0;
    v5 = read(*(uint32_t *)(a3 + 28), buf, nbytes);
    BIO_clear_flags(a3, 15);
    if ( v5 <= 0 && BIO_sock_should_retry(v5) != 0 )
      BIO_set_flags(a3, 9);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_19936E0  (binary VA: 0x19936e0)
// Original: sub_19936E0
// ----------------------------------------------------------------------------
ssize_t sub_19936E0(int a1, int a2, int a3, void *buf, size_t n)
{
  ssize_t v5;

  *(uint32_t *)__errno(a1, a2) = 0;
  v5 = write(*(uint32_t *)(a3 + 28), buf, n);
  BIO_clear_flags(a3, 15);
  if ( v5 <= 0 && BIO_sock_should_retry(v5) != 0 )
    BIO_set_flags(a3, 10);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1993770  (binary VA: 0x1993770)
// Original: sub_1993770
// ----------------------------------------------------------------------------
ssize_t sub_1993770(int a1, char *s)
{
  size_t v2;
  int v3;
  int v4;

  v2 = strlen(s);
  return sub_19936E0(v4, v3, a1, s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1993CD0  (binary VA: 0x1993cd0)
// Original: sub_1993CD0
// ----------------------------------------------------------------------------
uint8_t * sub_1993CD0(int a1, int a2)
{
  uint8_t *result;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  uint8_t *v13;
  uint32_t *v14;
  int v16;

  if ( a2 > 0xFFFFFF )
  {
    ERR_put_error(3, 120, 114, &unk_1B15112, 0);
    return nullptr;
  }
  if ( (*(uint8_t *)(a1 + 16) & 2) != 0 )
  {
    ERR_put_error(3, 120, 105, &unk_1B15112, 0);
    return nullptr;
  }
  v13 = CRYPTO_malloc(4 * a2, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v13 == nullptr )
  {
    ERR_put_error(3, 120, 65, &unk_1B15112, 0);
    return nullptr;
  }
  v14 = *(uint32_t **)a1;
  result = v13;
  if ( *(uint32_t *)a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 4);
    v4 = (uint32_t *)(v13);
    v16 = v3 >> 2;
    if ( v3 >> 2 > 0 )
    {
      v5 = *(uint32_t **)a1;
      v6 = (uint32_t *)(v13);
      v12 = *(int *)(a1 + 4) >> 2;
      do
      {
        v7 = v5[1];
        v8 = v5[2];
        v9 = v5[3];
        v10 = v12-- == 1;
        *v6 = *v5;
        v6[1] = v7;
        v6[2] = v8;
        v6[3] = v9;
        v5 += 4;
        v6 += 4;
      }
      while ( !v10 );
      v4 = (uint32_t *)(&v13[16 * v16]);
      v14 += 4 * v16;
      v3 = *(uint32_t *)(a1 + 4);
    }
    v11 = v3 & 3;
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        if ( v11 != 1 )
          return v13;
LABEL_16:
        *v4 = *v14;
        return v13;
      }
      v4[2] = v14[2];
    }
    v4[1] = v14[1];
    goto LABEL_16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_expand2  (binary VA: 0x19942d0)
// Original: bn_expand2
// ----------------------------------------------------------------------------
int bn_expand2(int a1, int a2)
{
  int v2;
  uint8_t *v4;

  v2 = a1;
  if ( *(uint32_t *)(a1 + 8) < a2 )
  {
    v4 = sub_1993CD0(a1, a2);
    if ( v4 != nullptr )
    {
      if ( *(uint32_t *)a1 != 0 )
        CRYPTO_free(*(void **)a1);
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
      *(uint32_t *)(a1 + 8) = a2;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: bn_dup_expand  (binary VA: 0x19944e0)
// Original: bn_dup_expand
// ----------------------------------------------------------------------------
void ** bn_dup_expand(uint32_t *a1, int a2)
{
  uint8_t *v2;
  void **result;
  void *v4;

  if ( a1[2] >= a2 )
    return BN_dup(a1);
  v2 = sub_1993CD0((int)(uintptr_t)(a1), a2);
  result = nullptr;
  if ( v2 != nullptr )
  {
    result = (void **)BN_new();
    if ( result != nullptr )
    {
      v4 = (void *)a1[1];
      result[2] = (void *)a2;
      result[1] = v4;
      result[3] = (void *)a1[3];
      *result = v2;
    }
    else
    {
      CRYPTO_free(v2);
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_cmp_words  (binary VA: 0x1994bf0)
// Original: bn_cmp_words
// ----------------------------------------------------------------------------
int bn_cmp_words(int a1, int a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  int result;
  int v6;
  unsigned int v7;
  unsigned int v8;

  v3 = *(uint32_t *)(a1 + 4 * (a3 - 1));
  v4 = *(uint32_t *)(a2 + 4 * (a3 - 1));
  if ( v3 != v4 )
    return v4 < v3 ? 1 : -1;
  result = 0;
  v6 = a3 - 2;
  if ( a3 - 2 >= 0 )
  {
    do
    {
      v7 = *(uint32_t *)(a1 + 4 * v6);
      v8 = *(uint32_t *)(a2 + 4 * v6);
      if ( v7 != v8 )
        return v8 < v7 ? 1 : -1;
      --v6;
    }
    while ( v6 != -1 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_cmp_part_words  (binary VA: 0x1994c50)
// Original: bn_cmp_part_words
// ----------------------------------------------------------------------------
int bn_cmp_part_words(int a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v6;

  v4 = a4;
  if ( a4 < 0 )
  {
    v6 = (uint32_t *)(a2 + 4 * (a3 - 1 - a4));
    if ( *v6 != 0 )
      return -1;
    while ( 1 )
    {
      --v6;
      if ( ++v4 == 0 )
        break;
      if ( *v6 != 0 )
        return -1;
    }
    return bn_cmp_words(a1, a2, a3);
  }
  if ( a4 == 0 )
    return bn_cmp_words(a1, a2, a3);
  while ( *(uint32_t *)(a1 + 4 * a3 + 4 * v4 - 4) == 0 )
  {
    if ( --v4 == 0 )
      return bn_cmp_words(a1, a2, a3);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BUF_MEM_new  (binary VA: 0x1994cf0)
// Original: BUF_MEM_new
// ----------------------------------------------------------------------------
uint32_t * BUF_MEM_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    *result = 0;
    result[2] = 0;
    result[1] = 0;
  }
  else
  {
    ERR_put_error(7, 101, 65, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BUF_MEM_free  (binary VA: 0x1994d80)
// Original: BUF_MEM_free
// ----------------------------------------------------------------------------
void BUF_MEM_free(void *a1)
{
  void *s;

  if ( a1 != nullptr )
  {
    s = *((void **)a1 + 1);
    if ( s != nullptr )
    {
      memset(s, 0, *((uint32_t *)a1 + 2));
      CRYPTO_free(*((void **)a1 + 1));
    }
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: BUF_MEM_grow  (binary VA: 0x1994de0)
// Original: BUF_MEM_grow
// ----------------------------------------------------------------------------
unsigned int BUF_MEM_grow(unsigned int *a1, unsigned int a2)
{
  void *v2;
  int v3;
  uint8_t *v4;
  unsigned int v5;
  size_t n;

  if ( *a1 >= a2 )
    goto LABEL_7;
  if ( a2 <= a1[2] )
  {
    memset((void *)(a1[1] + *a1), 0, a2 - *a1);
    goto LABEL_7;
  }
  v2 = (void *)a1[1];
  v3 = 4 * ((a2 + 3) / 3);
  if ( v2 != nullptr )
    v4 = CRYPTO_realloc(v2, v3, (int)(uintptr_t)(&unk_1B15112), 0);
  else
    v4 = CRYPTO_malloc(v3, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v4 != nullptr )
  {
    v5 = *a1;
    n = a2 - *a1;
    a1[1] = (unsigned int)(uintptr_t)(v4);
    a1[2] = v3;
    memset(&v4[v5], 0, n);
LABEL_7:
    *a1 = a2;
    return a2;
  }
  ERR_put_error(7, 100, 65, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BUF_MEM_grow_clean  (binary VA: 0x1994f10)
// Original: BUF_MEM_grow_clean
// ----------------------------------------------------------------------------
size_t BUF_MEM_grow_clean(size_t *a1, size_t a2)
{
  size_t v2;
  size_t v3;
  void *v4;
  int v5;
  uint8_t *v6;
  size_t v7;
  size_t n;

  v2 = *a1;
  if ( *a1 >= a2 )
  {
    memset((void *)(a2 + a1[1]), 0, v2 - a2);
    *a1 = a2;
    return a2;
  }
  else
  {
    v3 = a1[2];
    if ( a2 <= v3 )
    {
      memset((void *)(a1[1] + v2), 0, a2 - v2);
      goto LABEL_7;
    }
    v4 = (void *)a1[1];
    v5 = 4 * ((a2 + 3) / 3);
    if ( v4 != nullptr )
      v6 = CRYPTO_realloc_clean(v4, v3, v5, (int)(uintptr_t)(&unk_1B15112), 0);
    else
      v6 = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v6 != nullptr )
    {
      v7 = *a1;
      n = a2 - *a1;
      a1[1] = (size_t)v6;
      a1[2] = v5;
      memset(&v6[v7], 0, n);
LABEL_7:
      *a1 = a2;
      return a2;
    }
    ERR_put_error(7, 105, 65, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: BUF_memdup  (binary VA: 0x1995070)
// Original: BUF_memdup
// ----------------------------------------------------------------------------
void * BUF_memdup(void *src, size_t n)
{
  int v2;
  uint8_t *dest;

  v2 = 0;
  if ( src != nullptr )
  {
    dest = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dest != nullptr )
      return memcpy(dest, src, n);
    else
      ERR_put_error(7, 103, 65, &unk_1B15112, 0);
  }
  return (void *)v2;
}

// ----------------------------------------------------------------------------
// Function: BUF_strlcpy  (binary VA: 0x1995120)
// Original: BUF_strlcpy
// ----------------------------------------------------------------------------
int BUF_strlcpy(char *a1, char *a2, unsigned int a3)
{
  unsigned int v3;
  const char *s;
  char v6; // di
  int v7;

  v3 = a3;
  s = a2;
  if ( a3 <= 1 )
  {
    v7 = 0;
    if ( a3 == 0 )
      return v7 + strlen(s);
  }
  else
  {
    v6 = *a2;
    v7 = 0;
    if ( *a2 != 0 )
    {
      do
      {
        --v3;
        *a1 = v6;
        ++s;
        ++a1;
        ++v7;
        if ( v3 == 1 )
          break;
        v6 = *s;
      }
      while ( *s != 0 );
    }
  }
  *a1 = 0;
  return v7 + strlen(s);
}

// ----------------------------------------------------------------------------
// Function: BUF_strndup  (binary VA: 0x19951a0)
// Original: BUF_strndup
// ----------------------------------------------------------------------------
char * BUF_strndup(char *a1, int a2)
{
  char *v2;
  char *v3;

  v2 = nullptr;
  if ( a1 != nullptr )
  {
    v3 = (char *)(CRYPTO_malloc(a2 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
    v2 = v3;
    if ( v3 != nullptr )
      BUF_strlcpy(v3, a1, a2 + 1);
    else
      ERR_put_error(7, 104, 65, &unk_1B15112, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: BUF_strdup  (binary VA: 0x1995250)
// Original: BUF_strdup
// ----------------------------------------------------------------------------
char * BUF_strdup(char *s)
{
  char *result;
  size_t v2;

  result = nullptr;
  if ( s != nullptr )
  {
    v2 = strlen(s);
    return BUF_strndup(s, v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BUF_strlcat  (binary VA: 0x19952a0)
// Original: BUF_strlcat
// ----------------------------------------------------------------------------
int BUF_strlcat(char *a1, char *a2, unsigned int a3)
{
  int v3;
  unsigned int i;

  v3 = 0;
  for ( i = a3; i != 0; --i )
  {
    if ( *a1 == 0 )
      break;
    ++v3;
    ++a1;
  }
  return v3 + BUF_strlcpy(a1, a2, i);
}

// ----------------------------------------------------------------------------
// Function: BUF_reverse  (binary VA: 0x1995300)
// Original: BUF_reverse
// ----------------------------------------------------------------------------
char * BUF_reverse(char *a1, int a2, unsigned int a3)
{
  char *result;
  char *v4;
  char v5;
  char *v6;
  char v7; // bp

  result = a1;
  if ( a2 != 0 )
  {
    if ( a3 != 0 )
    {
      v4 = &a1[a3 - 1];
      for ( result = nullptr; result != (char *)a3; ++result )
      {
        v5 = *v4--;
        result[a2] = v5;
      }
    }
  }
  else if ( a3 >> 1 != 0 )
  {
    v6 = &a1[a3 - 1];
    do
    {
      v7 = *v6;
      *v6 = *result;
      *result++ = v7;
      --v6;
    }
    while ( result != &a1[a3 >> 1] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1995370  (binary VA: 0x1995370)
// Original: sub_1995370
// ----------------------------------------------------------------------------
int sub_1995370(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_callback_ctrl(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19953B0  (binary VA: 0x19953b0)
// Original: sub_19953B0
// ----------------------------------------------------------------------------
int sub_19953B0(int a1, void *a2)
{
  return CRYPTO_free(a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19953E0  (binary VA: 0x19953e0)
// Original: sub_19953E0
// ----------------------------------------------------------------------------
int sub_19953E0(uint32_t *a1)
{
  int result;
  int v2;

  result = 0;
  if ( a1 != nullptr )
  {
    v2 = a1[8];
    if ( *(uint32_t *)v2 != 0 )
    {
      inflateEnd((uint32_t *)(v2 + 8));
      CRYPTO_free(*(void **)v2);
    }
    if ( *(uint32_t *)(v2 + 64) != 0 )
    {
      deflateEnd((void *)(uintptr_t)(v2 + 88));
      CRYPTO_free(*(void **)(v2 + 64));
    }
    CRYPTO_free((void *)v2);
    a1[8] = 0;
    a1[3] = 0;
    a1[5] = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1995480  (binary VA: 0x1995480)
// Original: sub_1995480
// ----------------------------------------------------------------------------
int sub_1995480(int a1, int a2, int a3, uint32_t *a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  bool v12;
  int v13;
  char *v14;
  int v15;
  int v16;

  result = 0;
  v5 = *(uint32_t **)(a1 + 36);
  if ( v5 == nullptr )
    return result;
  v6 = *(uint32_t *)(a1 + 32);
  switch ( a2 )
  {
    case 1:
      *(uint32_t *)(v6 + 76) = 0;
      *(uint32_t *)(v6 + 80) = 0;
      return 1;
    case 11:
      if ( *(uint32_t *)(v6 + 64) == 0 || *(uint32_t *)(v6 + 80) != 0 && *(uint32_t *)(v6 + 76) == 0 )
        return BIO_ctrl(v5, 11, 0, 0);
      BIO_clear_flags(a1, 15);
      *(uint32_t *)(v6 + 88) = 0;
      *(uint32_t *)(v6 + 92) = 0;
      for ( i = *(uint32_t *)(v6 + 76); ; *(uint32_t *)(v6 + 76) = i )
      {
        if ( i == 0 )
        {
          do
          {
            if ( *(uint32_t *)(v6 + 80) != 0 )
            {
              v5 = *(uint32_t **)(a1 + 36);
              return BIO_ctrl(v5, 11, 0, 0);
            }
            v10 = *(uint32_t *)(v6 + 64);
            *(uint32_t *)(v6 + 72) = v10;
            *(uint32_t *)(v6 + 100) = v10;
            *(uint32_t *)(v6 + 104) = *(uint32_t *)(v6 + 68);
            LOBYTE(v11) = deflate(v6 + 88, 4);
            if ( v11 == 1 )
            {
              *(uint32_t *)(v6 + 80) = 1;
            }
            else if ( v11 != 0 )
            {
              v16 = v11;
              ERR_put_error(41, 99, 99, &unk_1B15112, 0);
              v14 = (char *)(zError(v16));
              ERR_add_error_data(2, "zlib error:", v14);
              return 0;
            }
            i = *(uint32_t *)(v6 + 68) - *(uint32_t *)(v6 + 104);
            v12 = *(uint32_t *)(v6 + 68) == *(uint32_t *)(v6 + 104);
            *(uint32_t *)(v6 + 76) = i;
          }
          while ( v12 );
        }
        v8 = BIO_write(*(uint32_t **)(a1 + 36), *(uint32_t *)(v6 + 72), i);
        if ( v8 <= 0 )
          break;
        v13 = *(uint32_t *)(v6 + 76);
        *(uint32_t *)(v6 + 72) += v8;
        i = v13 - v8;
      }
LABEL_22:
      v15 = v8;
      BIO_copy_next_retry(a1);
      return v15;
    case 101:
      BIO_clear_flags(a1, 15);
      v8 = BIO_ctrl(*(uint32_t **)(a1 + 36), 101, a3, (int)(uintptr_t)(a4));
      goto LABEL_22;
    case 117:
      v7 = a3;
      if ( a4 == nullptr )
        goto LABEL_9;
      if ( *a4 == 0 )
      {
        v7 = -1;
LABEL_9:
        if ( a3 != -1 )
        {
          if ( *(uint32_t *)v6 != 0 )
          {
            CRYPTO_free(*(void **)v6);
            *(uint32_t *)v6 = 0;
          }
          *(uint32_t *)(v6 + 4) = a3;
        }
      }
      result = 1;
      if ( v7 != -1 )
      {
        if ( *(uint32_t *)(v6 + 64) != 0 )
        {
          CRYPTO_free(*(void **)(v6 + 64));
          *(uint32_t *)(v6 + 64) = 0;
        }
        *(uint32_t *)(v6 + 68) = v7;
        return 1;
      }
      return result;
    default:
      return BIO_ctrl(v5, a2, a3, (int)(uintptr_t)(a4));
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1995710  (binary VA: 0x1995710)
// Original: sub_1995710
// ----------------------------------------------------------------------------
int sub_1995710(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int result;
  int v7;

  v5 = CRYPTO_get_ex_data((uint32_t *)(a1 + 20), dword_20CB6F8);
  result = 0;
  if ( v5 != 0 )
  {
    *(uint32_t *)v5 = a4;
    *(uint32_t *)(v5 + 4) = a5;
    *(uint32_t *)(v5 + 12) = a2;
    *(uint32_t *)(v5 + 16) = a3;
    if ( a5 != 0 )
    {
      v7 = inflate((uint8_t **)v5, 2);
      result = -1;
      if ( v7 == 0 )
        return a3 - *(uint32_t *)(v5 + 16);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19957B0  (binary VA: 0x19957b0)
// Original: sub_19957B0
// ----------------------------------------------------------------------------
int sub_19957B0(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int result;
  int v7;
  int v8;

  v5 = (uint32_t *)CRYPTO_get_ex_data((uint32_t *)(a1 + 20), dword_20CB6F8);
  if ( v5 == nullptr )
    return -1;
  v5[15] = a5;
  v5[14] = a4;
  v5[17] = a2;
  result = 0;
  v5[18] = a3;
  if ( a5 != 0 )
  {
    LOBYTE(v7) = deflate((int)(uintptr_t)(v5 + 14), 2);
    v8 = v7;
    result = -1;
    if ( v8 == 0 )
      return a3 - v5[18];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1995860  (binary VA: 0x1995860)
// Original: sub_1995860
// ----------------------------------------------------------------------------
int sub_1995860(int a1)
{
  uint32_t *v1;

  v1 = (uint32_t *)CRYPTO_get_ex_data((uint32_t *)(a1 + 20), dword_20CB6F8);
  inflateEnd(v1);
  deflateEnd((int)(uintptr_t)(v1 + 14));
  CRYPTO_free(v1);
  return CRYPTO_free_ex_data(14, a1, a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: sub_19958E0  (binary VA: 0x19958e0)
// Original: sub_19958E0
// ----------------------------------------------------------------------------
int sub_19958E0(int a1)
{
  uint32_t *v1;
  int result;

  v1 = (uint32_t *)(CRYPTO_malloc(112, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    v1[10] = 0;
    *v1 = 0;
    v1[3] = 0;
    v1[1] = 0;
    v1[4] = 0;
    v1[8] = (uint32_t)(uintptr_t)(sub_1995A30);
    v1[9] = (uint32_t)(uintptr_t)(sub_19953B0);
    if ( inflateInit_(v1, "1.2.3", 56) != 0
      || (v1[22] = (uint32_t)(uintptr_t)(sub_1995A30),
          v1[23] = (uint32_t)(uintptr_t)(sub_19953B0),
          v1[24] = 0,
          v1[14] = 0,
          v1[17] = 0,
          v1[15] = 0,
          v1[18] = 0,
          deflateInit_(v1 + 14, 0xFFFFFFFF, "1.2.3", 56) != 0) )
    {
      CRYPTO_free(v1);
      return 0;
    }
    else
    {
      CRYPTO_new_ex_data(14, a1, a1 + 20);
      CRYPTO_set_ex_data((int *)(a1 + 20), dword_20CB6F8, (int)(uintptr_t)(v1));
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1995A30  (binary VA: 0x1995a30)
// Original: sub_1995A30
// ----------------------------------------------------------------------------
uint8_t * sub_1995A30(int a1, int a2, int a3)
{
  uint8_t *s;
  uint8_t *v4;

  s = CRYPTO_malloc(a2 * a3, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = s;
  if ( s != nullptr )
    memset(s, 0, a2 * a3);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1995AA0  (binary VA: 0x1995aa0)
// Original: sub_1995AA0
// ----------------------------------------------------------------------------
int sub_1995AA0(uint32_t *a1)
{
  uint32_t *v1;

  v1 = (uint32_t *)(CRYPTO_malloc(144, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[16] = 0;
    v1[1] = 1024;
    v1[17] = 1024;
    v1[10] = 0;
    v1[11] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[5] = 0;
    v1[6] = 0;
    v1[30] = 0;
    v1[31] = 0;
    v1[22] = 0;
    v1[23] = 0;
    v1[25] = 0;
    v1[26] = 0;
    v1[20] = 0;
    v1[21] = -1;
    a1[8] = (uint32_t)(uintptr_t)(v1);
    a1[3] = 1;
    a1[5] = 0;
    return 1;
  }
  else
  {
    ERR_put_error(41, 100, 65, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1995BC0  (binary VA: 0x1995bc0)
// Original: sub_1995BC0
// ----------------------------------------------------------------------------
int sub_1995BC0(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  char *v10;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;

  if ( a3 == 0 || a2 == 0 )
    return 0;
  v5 = *(uint32_t *)(a1 + 32);
  BIO_clear_flags(a1, 15);
  if ( *(uint32_t *)v5 != 0 )
  {
    v6 = *(uint32_t *)(v5 + 12);
LABEL_7:
    *(uint32_t *)(v5 + 20) = a2;
    *(uint32_t *)(v5 + 24) = a3;
    while ( 1 )
    {
      if ( v6 == 0 )
      {
        v7 = BIO_read(*(uint32_t **)(a1 + 36), *(uint32_t *)v5, *(uint32_t *)(v5 + 4));
        if ( v7 <= 0 )
        {
          v3 = a3 - *(uint32_t *)(v5 + 24);
          v14 = v7;
          BIO_copy_next_retry(a1);
          if ( v14 != 0 && v3 <= 0 )
            return v14;
          return v3;
        }
        v8 = *(uint32_t *)v5;
        *(uint32_t *)(v5 + 12) = v7;
        *(uint32_t *)(v5 + 8) = v8;
      }
      v9 = inflate((uint8_t **)(v5 + 8), 0);
      if ( v9 > 1 )
      {
        v15 = v9;
        v3 = 0;
        ERR_put_error(41, 101, 100, &unk_1B15112, 0);
        v10 = (char *)(zError(v15));
        ERR_add_error_data(2, "zlib error:", v10);
        return v3;
      }
      if ( v9 == 1 )
      {
        v11 = *(uint32_t *)(v5 + 24);
        return a3 - v11;
      }
      if ( *(uint32_t *)(v5 + 24) == 0 )
      {
        v11 = 0;
        return a3 - v11;
      }
      v6 = *(uint32_t *)(v5 + 12);
    }
  }
  v12 = CRYPTO_malloc(*(uint32_t *)(v5 + 4), (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v12);
  if ( v12 != nullptr )
  {
    inflateInit_((uint32_t *)(v5 + 8), "1.2.3", 56);
    v13 = *(uint32_t *)v5;
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 8) = v13;
    v6 = 0;
    goto LABEL_7;
  }
  v3 = 0;
  ERR_put_error(41, 101, 65, &unk_1B15112, 0);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1995DC0  (binary VA: 0x1995dc0)
// Original: sub_1995DC0
// ----------------------------------------------------------------------------
int sub_1995DC0(int a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v6;
  int i;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  char *v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;

  if ( a3 != 0 && a2 != 0 )
  {
    v3 = *(uint32_t **)(a1 + 32);
    v4 = 0;
    if ( v3[20] != 0 )
      return v4;
    BIO_clear_flags(a1, 15);
    v6 = a2;
    if ( v3[16] == 0 )
    {
      v14 = CRYPTO_malloc(v3[17], (int)(uintptr_t)(&unk_1B15112), 0);
      v3[16] = (uint32_t)(uintptr_t)(v14);
      if ( v14 == nullptr )
      {
        ERR_put_error(41, 102, 65, &unk_1B15112, 0);
        return 0;
      }
      v3[18] = (uint32_t)(uintptr_t)(v14);
      v3[19] = 0;
      deflateInit_(v3 + 22, v3[21], "1.2.3", 56);
      v3[25] = v3[16];
      v3[26] = v3[17];
      v6 = a2;
    }
    v3[22] = v6;
    v3[23] = a3;
    for ( i = v3[19]; i != 0; v3[19] = i )
    {
LABEL_12:
      v11 = BIO_write(*(uint32_t **)(a1 + 36), v3[18], i);
      if ( v11 <= 0 )
      {
        v15 = a3 - v3[23];
        v17 = v11;
        BIO_copy_next_retry(a1);
        v4 = v15;
        if ( v17 != 0 && v15 <= 0 )
          return v17;
        return v4;
      }
      v12 = v3[19];
      v3[18] += v11;
      i = v12 - v11;
    }
    while ( 1 )
    {
      if ( v3[23] == 0 )
        return a3;
      v8 = v3[16];
      v3[18] = v8;
      v3[25] = v8;
      v3[26] = v3[17];
      LOBYTE(v9) = deflate((int)(uintptr_t)(v3 + 22), 0);
      if ( v9 != 0 )
        break;
      i = v3[17] - v3[26];
      v10 = v3[17] == v3[26];
      v3[19] = i;
      if ( !v10 )
        goto LABEL_12;
    }
    v16 = v9;
    ERR_put_error(41, 102, 99, &unk_1B15112, 0);
    v13 = (char *)(zError(v16));
    ERR_add_error_data(2, "zlib error:", v13);
    return 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: COMP_zlib  (binary VA: 0x1996000)
// Original: COMP_zlib
// ----------------------------------------------------------------------------
void * COMP_zlib()
{
  void *result;

  result = &unk_20CB720;
  if ( dword_20CB6F8 == -1 )
  {
    CRYPTO_lock(9, 38, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dword_20CB6F8 == -1 )
      dword_20CB6F8 = CRYPTO_get_ex_new_index(14, 0, 0, 0, 0, 0);
    CRYPTO_lock(10, 38, (int)(uintptr_t)(&unk_1B15112), 0);
    result = &unk_20CB720;
    if ( dword_20CB6F8 == -1 )
      return &unk_20CB700;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: COMP_zlib_cleanup  (binary VA: 0x19960f0)
// Original: COMP_zlib_cleanup
// ----------------------------------------------------------------------------
void COMP_zlib_cleanup()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: COMP_CTX_new  (binary VA: 0x1996120)
// Original: COMP_CTX_new
// ----------------------------------------------------------------------------
uint8_t * COMP_CTX_new(int a1)
{
  uint8_t *v1;
  uint8_t *v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
  int (*v6)(uint8_t *);
  void *v8;

  v1 = CRYPTO_malloc(28, (int)(uintptr_t)(&unk_1B15112), 0);
  v2 = v1;
  if ( v1 == nullptr )
    return v2;
  v3 = (uint16_t *)(v1);
  v4 = 28;
  if ( ((uint8_t)(uintptr_t)(v1) & 1) != 0 )
  {
    *v1 = 0;
    v3 = (uint16_t *)(v1 + 1);
    LOBYTE(v4) = 27;
  }
  if ( ((uint8_t)(uintptr_t)(v3) & 2) != 0 )
  {
    *v3 = 0;
    v4 -= 2;
    ++v3;
  }
  memset(v3, 0, 4 * (v4 >> 2));
  v5 = &v3[2 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
  {
    *v5++ = 0;
    if ( (v4 & 1) == 0 )
      goto LABEL_8;
  }
  else if ( (v4 & 1) == 0 )
  {
LABEL_8:
    *(uint32_t *)v1 = a1;
    v6 = *(int (**)(uint8_t *))(a1 + 8);
    if ( v6 != nullptr && v6(v2) == 0 )
    {
      v8 = v2;
      v2 = nullptr;
      CRYPTO_free(v8);
    }
    return v2;
  }
  *(uint8_t *)v5 = 0;
  goto LABEL_8;
}

// ----------------------------------------------------------------------------
// Function: COMP_CTX_free  (binary VA: 0x1996200)
// Original: COMP_CTX_free
// ----------------------------------------------------------------------------
void COMP_CTX_free(void *a1)
{
  void (*v1)(void *);

  if ( a1 != nullptr )
  {
    v1 = *(void (**)(void *))(*(uint32_t *)a1 + 12);
    if ( v1 != nullptr )
      v1(a1);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: COMP_compress_block  (binary VA: 0x1996250)
// Original: COMP_compress_block
// ----------------------------------------------------------------------------
int COMP_compress_block(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(uint32_t *, int, int, int, int);
  int result;

  v5 = *(int (**)(uint32_t *, int, int, int, int))(*a1 + 16);
  if ( v5 == nullptr )
    return -1;
  result = v5(a1, a2, a3, a4, a5);
  if ( result > 0 )
  {
    a1[1] += a5;
    a1[2] += result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: COMP_expand_block  (binary VA: 0x19962b0)
// Original: COMP_expand_block
// ----------------------------------------------------------------------------
int COMP_expand_block(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(uint32_t *, int, int, int, int);
  int result;

  v5 = *(int (**)(uint32_t *, int, int, int, int))(*a1 + 20);
  if ( v5 == nullptr )
    return -1;
  result = v5(a1, a2, a3, a4, a5);
  if ( result > 0 )
  {
    a1[3] += a5;
    a1[4] += result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1996310  (binary VA: 0x1996310)
// Original: sub_1996310
// ----------------------------------------------------------------------------
uint32_t * sub_1996310(int a1, char *a2, int a3, int a4, int a5)
{
  uint32_t *v7;
  uint32_t *v8;
  void *v10;

  if ( dword_21405A8 != 0 || (v8 = nullptr, dword_21405A8 = (uint32_t)(uintptr_t)(sk_new_null(a3, a2)), dword_21405A8 != 0) )
  {
    v7 = (uint32_t *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
    v8 = v7;
    if ( v7 != nullptr )
    {
      *v7 = a1;
      v7[1] = (uint32_t)(uintptr_t)(BUF_strdup(a2));
      v8[2] = a4;
      v8[3] = a5;
      v8[4] = 0;
      if ( sk_push(dword_21405A8, v8) == 0 )
      {
        v10 = v8;
        v8 = nullptr;
        CRYPTO_free(v10);
      }
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_1997430  (binary VA: 0x1997430)
// Original: sub_1997430
// ----------------------------------------------------------------------------
bool sub_1997430(int a1)
{
  int v1;
  bool result;

  v1 = *(uint32_t *)(a1 + 20);
  result = true;
  if ( *(uint32_t *)(v1 + 8) != 0 )
    return *(uint32_t *)(v1 + 12) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1997450  (binary VA: 0x1997450)
// Original: sub_1997450
// ----------------------------------------------------------------------------
int sub_1997450(int a1)
{
  return ((DH_free(*(void **)(a1 + 20))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1997480  (binary VA: 0x1997480)
// Original: sub_1997480
// ----------------------------------------------------------------------------
unsigned int sub_1997480(unsigned int result, unsigned int *a2)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;

  if ( result != 0 )
  {
    v3 = *a2;
    v4 = BN_num_bits((uint32_t *)result);
    v5 = v4 + 14;
    v6 = v4 + 7;
    if ( v6 < 0 )
      v6 = v5;
    result = v6 >> 3;
    if ( v3 < result )
      *a2 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19974D0  (binary VA: 0x19974d0)
// Original: sub_19974D0
// ----------------------------------------------------------------------------
int sub_19974D0(int a1)
{
  return BN_num_bits(*(uint32_t **)(*(uint32_t *)(a1 + 20) + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_1997500  (binary VA: 0x1997500)
// Original: sub_1997500
// ----------------------------------------------------------------------------
int sub_1997500(int a1, int a2)
{
  void **v2;
  int v3;
  void **v4;
  int v5;
  void **v6;
  void **v7;
  int v8;

  v2 = BN_dup(*(uint32_t **)(*(uint32_t *)(a2 + 20) + 8));
  v3 = 0;
  v4 = v2;
  if ( v2 != nullptr )
  {
    v5 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(v5 + 8) != 0 )
    {
      BN_free(*(void ***)(v5 + 8));
      v5 = *(uint32_t *)(a1 + 20);
    }
    *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    v6 = BN_dup(*(uint32_t **)(*(uint32_t *)(a2 + 20) + 12));
    v3 = 0;
    v7 = v6;
    if ( v6 != nullptr )
    {
      v8 = *(uint32_t *)(a1 + 20);
      if ( *(uint32_t *)(v8 + 12) != 0 )
      {
        BN_free(*(void ***)(v8 + 12));
        v8 = *(uint32_t *)(a1 + 20);
      }
      *(uint32_t *)(v8 + 12) = (uint32_t)(uintptr_t)(v7);
      return 1;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19975A0  (binary VA: 0x19975a0)
// Original: sub_19975A0
// ----------------------------------------------------------------------------
int sub_19975A0(int a1, int a2)
{
  return i2d_DHparams(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19975D0  (binary VA: 0x19975d0)
// Original: sub_19975D0
// ----------------------------------------------------------------------------
int sub_19975D0(int a1)
{
  return DH_size(*(uint32_t *)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: sub_1997600  (binary VA: 0x1997600)
// Original: sub_1997600
// ----------------------------------------------------------------------------
int sub_1997600(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int *v5;
  void *v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v12)) > _g4_s2 ? (44u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  v12 = nullptr;
  v2 = ASN1_STRING_new();
  v3 = (int)(uintptr_t)(v2);
  if ( v2 != nullptr && (v4 = i2d_DHparams(*(uint32_t *)(a2 + 20), v2 + 2), *(uint32_t *)v3 = v4, v4 > 0) )
  {
    *(uint32_t *)(v3 + 4) = 16;
    v5 = BN_to_ASN1_INTEGER(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 24), nullptr);
    if ( v5 != nullptr )
    {
      v11 = i2d_ASN1_INTEGER((int)(uintptr_t)(v5), &v12);
      ASN1_INTEGER_free((char)(uintptr_t)(v5));
      v6 = v12;
      v7 = (int)(uintptr_t)(OBJ_nid2obj(28));
      v10 = (int)(uintptr_t)(v6);
      v8 = 1;
      if ( PKCS8_pkey_set0(a1, v7, 0, 16, v3, v10, v11) != 0 )
        return v8;
    }
    else
    {
      ERR_put_error(5, 111, 106, &unk_1B15112, 0);
    }
  }
  else
  {
    v5 = nullptr;
    ERR_put_error(5, 111, 65, &unk_1B15112, 0);
  }
  if ( v12 != nullptr )
    CRYPTO_free(v12);
  if ( v3 != 0 )
    ASN1_STRING_free((void **)v3);
  v8 = 0;
  if ( v5 != nullptr )
    ASN1_INTEGER_free((char)(uintptr_t)(v5));
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19977A0  (binary VA: 0x19977a0)
// Original: sub_19977A0
// ----------------------------------------------------------------------------
int sub_19977A0(char *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v2 = PKCS8_pkey_get0(nullptr, &v8, &v10, &v13, a2);
  v3 = 0;
  if ( v2 != 0 )
  {
    X509_ALGOR_get0(nullptr, &v11, &v12, v13);
    if ( v11 == 16
      && (v6 = (uint32_t *)d2i_ASN1_INTEGER(nullptr, &v8, v10)) != nullptr
      && (v9 = v12[2], (v5 = (uint32_t *)d2i_DHparams(0, &v9, *v12)) != nullptr) )
    {
      v7 = ASN1_INTEGER_to_BN(v6, 0);
      v5[6] = v7;
      if ( v7 != 0 )
      {
        if ( DH_generate_key(v5) != 0 )
        {
          EVP_PKEY_assign(a1, 0x1Cu, (int)(uintptr_t)(v5));
          ASN1_INTEGER_free((char)(uintptr_t)(v6));
          return 1;
        }
      }
      else
      {
        ERR_put_error(5, 110, 106, &unk_1B15112, 0);
      }
    }
    else
    {
      v5 = nullptr;
      ERR_put_error(5, 110, 114, &unk_1B15112, 0);
    }
    DH_free(v5);
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1997940  (binary VA: 0x1997940)
// Original: sub_1997940
// ----------------------------------------------------------------------------
int sub_1997940(int a1, int a2)
{
  int v2;
  void **v3;
  int v4;
  int *v5;
  int v6;
  void *v7;
  int v8;
  int v9;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12 = nullptr;
  v2 = *(uint32_t *)(a2 + 20);
  v3 = (void **)ASN1_STRING_new();
  v4 = i2d_DHparams(v2, v3 + 2);
  *v3 = (void *)v4;
  if ( v4 <= 0 )
  {
    v3 = nullptr;
    ERR_put_error(5, 109, 65, &unk_1B15112, 0);
  }
  else
  {
    v5 = BN_to_ASN1_INTEGER(*(uint32_t *)(v2 + 20), nullptr);
    if ( v5 != nullptr )
    {
      v6 = i2d_ASN1_INTEGER((int)(uintptr_t)(v5), &v12);
      ASN1_INTEGER_free((char)(uintptr_t)(v5));
      if ( v6 <= 0 )
      {
        ERR_put_error(5, 109, 65, &unk_1B15112, 0);
      }
      else
      {
        v7 = v12;
        v8 = (int)(uintptr_t)(OBJ_nid2obj(28));
        v11 = v7;
        v9 = 1;
        if ( X509_PUBKEY_set0_param(a1, v8, 16, v3, v11, v6) != 0 )
          return v9;
      }
    }
  }
  if ( v12 != nullptr )
    CRYPTO_free(v12);
  v9 = 0;
  if ( v3 != nullptr )
    ASN1_STRING_free(v3);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: sub_1997AB0  (binary VA: 0x1997ab0)
// Original: sub_1997AB0
// ----------------------------------------------------------------------------
int sub_1997AB0(char *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  char v7; // si
  int v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v2 = X509_PUBKEY_get0_param(0, &v9, &v11, &v14, a2);
  v3 = 0;
  if ( v2 != 0 )
  {
    X509_ALGOR_get0(nullptr, &v12, &v13, v14);
    if ( v12 == 16 )
    {
      v10 = v13[2];
      v5 = (uint32_t *)d2i_DHparams(0, &v10, *v13);
      if ( v5 == nullptr )
      {
        ERR_put_error(5, 108, 104, &unk_1B15112, 0);
        return 0;
      }
      v6 = (uint32_t *)d2i_ASN1_INTEGER(nullptr, &v9, v11);
      v7 = (char)(uintptr_t)(v6);
      if ( v6 != nullptr )
      {
        v8 = ASN1_INTEGER_to_BN(v6, 0);
        v5[5] = v8;
        if ( v8 != 0 )
        {
          ASN1_INTEGER_free(v7);
          EVP_PKEY_assign(a1, 0x1Cu, (int)(uintptr_t)(v5));
          return 1;
        }
        ERR_put_error(5, 108, 109, &unk_1B15112, 0);
        ASN1_INTEGER_free(v7);
      }
      else
      {
        ERR_put_error(5, 108, 104, &unk_1B15112, 0);
      }
      DH_free(v5);
      return 0;
    }
    ERR_put_error(5, 108, 105, &unk_1B15112, 0);
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1997CC0  (binary VA: 0x1997cc0)
// Original: sub_1997CC0
// ----------------------------------------------------------------------------
int sub_1997CC0(uint32_t *a1, unsigned int *a2, int a3, int a4)
{
  int v5;
  const char *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v18;
  typedef unsigned int _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v19[0] = 0;
  if ( a4 == 2 )
  {
    v18 = a2[6];
  }
  else
  {
    v18 = 0;
    v15 = 0;
    if ( a4 <= 0 )
      goto LABEL_4;
  }
  v15 = a2[5];
LABEL_4:
  sub_1997480(a2[2], v19);
  v5 = 67;
  if ( v19[0] == 0 )
  {
LABEL_15:
    v10 = 0;
    ERR_put_error(5, 100, v5, &unk_1B15112, 0);
    return v10;
  }
  sub_1997480(a2[3], v19);
  sub_1997480(v15, v19);
  sub_1997480(v18, v19);
  v6 = "PKCS#3 DH Private-Key";
  if ( a4 != 2 )
  {
    v6 = "PKCS#3 DH Public-Key";
    if ( a4 != 1 )
      v6 = "PKCS#3 DH Parameters";
  }
  v14 = (int)(uintptr_t)(v6);
  v7 = CRYPTO_malloc(v19[0] + 10, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v7 == nullptr )
  {
    v5 = 65;
    goto LABEL_15;
  }
  BIO_indent(a1, a3, 128);
  v8 = BN_num_bits((uint32_t *)a2[2]);
  if ( BIO_printf(v14, v9, (int)(uintptr_t)(a1), "%s: (%d bit)\n", v14, v8) > 0
    && (v16 = a3 + 4, ASN1_bn_print(a1, "private-key:", v18, v7, a3 + 4) != 0)
    && ASN1_bn_print(a1, "public-key:", v15, v7, v16) != 0
    && ASN1_bn_print(a1, "prime:", a2[2], v7, v16) != 0
    && ASN1_bn_print(a1, "generator:", a2[3], v7, v16) != 0
    && (a2[4] == 0
     || (BIO_indent(a1, v16, 128), BIO_printf(v12, v13, (int)(uintptr_t)(a1), "recommended-private-length: %d bits\n", a2[4]) > 0)) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    ERR_put_error(5, 100, 7, &unk_1B15112, 0);
  }
  CRYPTO_free(v7);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: sub_1997FB0  (binary VA: 0x1997fb0)
// Original: sub_1997FB0
// ----------------------------------------------------------------------------
int sub_1997FB0(uint32_t *a1, int a2, int a3)
{
  return sub_1997CC0(a1, *(unsigned int **)(a2 + 20), a3, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1997FD0  (binary VA: 0x1997fd0)
// Original: sub_1997FD0
// ----------------------------------------------------------------------------
int sub_1997FD0(uint32_t *a1, int a2, int a3)
{
  return sub_1997CC0(a1, *(unsigned int **)(a2 + 20), a3, 2);
}

// ----------------------------------------------------------------------------
// Function: sub_1997FF0  (binary VA: 0x1997ff0)
// Original: sub_1997FF0
// ----------------------------------------------------------------------------
int sub_1997FF0(uint32_t *a1, int a2, int a3)
{
  return sub_1997CC0(a1, *(unsigned int **)(a2 + 20), a3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_1998010  (binary VA: 0x1998010)
// Original: sub_1998010
// ----------------------------------------------------------------------------
bool sub_1998010(int a1, int a2)
{
  int v2;
  int v3;

  v2 = BN_cmp(*(int **)(*(uint32_t *)(a1 + 20) + 8), *(uint32_t **)(*(uint32_t *)(a2 + 20) + 8));
  v3 = 0;
  if ( v2 == 0 )
    return BN_cmp(*(int **)(*(uint32_t *)(a1 + 20) + 12), *(uint32_t **)(*(uint32_t *)(a2 + 20) + 12)) == 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1998090  (binary VA: 0x1998090)
// Original: sub_1998090
// ----------------------------------------------------------------------------
bool sub_1998090(int a1, int a2)
{
  bool v2;
  int v3;

  v2 = sub_1998010(a1, a2);
  v3 = 0;
  if ( v2 )
    return BN_cmp(*(int **)(*(uint32_t *)(a2 + 20) + 20), *(uint32_t **)(*(uint32_t *)(a1 + 20) + 20)) == 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1998100  (binary VA: 0x1998100)
// Original: sub_1998100
// ----------------------------------------------------------------------------
int sub_1998100(char *a1, int a2, int a3)
{
  int v3;

  v3 = d2i_DHparams(0, a2, a3);
  if ( v3 != 0 )
  {
    EVP_PKEY_assign(a1, 0x1Cu, v3);
    return 1;
  }
  else
  {
    ERR_put_error(5, 107, 5, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DHparams_print  (binary VA: 0x1998190)
// Original: DHparams_print
// ----------------------------------------------------------------------------
int DHparams_print(uint32_t *a1, unsigned int *a2)
{
  return sub_1997CC0(a1, a2, 4, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19981B0  (binary VA: 0x19981b0)
// Original: sub_19981B0
// ----------------------------------------------------------------------------
int sub_19981B0(int a1, void **a2)
{
  int result;
  int v3;

  if ( a1 != 0 )
  {
    result = 1;
    if ( a1 == 2 )
    {
      DH_free(*a2);
      *a2 = nullptr;
      return 2;
    }
  }
  else
  {
    v3 = (int)(uintptr_t)(DH_new());
    *a2 = (void *)v3;
    return v3 != 0 ? 2 : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DHparams_dup  (binary VA: 0x19982c0)
// Original: DHparams_dup
// ----------------------------------------------------------------------------
int DHparams_dup(int a1)
{
  return ASN1_item_dup(&DHparams_it, a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19982F0  (binary VA: 0x19982f0)
// Original: sub_19982F0
// ----------------------------------------------------------------------------
int sub_19982F0(int a1)
{
  *(uint32_t *)(a1 + 28) |= 1u;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1998300  (binary VA: 0x1998300)
// Original: sub_1998300
// ----------------------------------------------------------------------------
int sub_1998300(int a1)
{
  if ( *(uint32_t *)(a1 + 32) != 0 )
    BN_MONT_CTX_free(*(void **)(a1 + 32));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1998330  (binary VA: 0x1998330)
// Original: sub_1998330
// ----------------------------------------------------------------------------
int sub_1998330(uint8_t *a1, int a2, int a3)
{
  int *v3;
  int *v4;
  int v5;
  int v6;
  typedef uint8_t *_g4_t_v8;
  typedef uint32_t _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  if ( BN_num_bits(*(uint32_t **)(a3 + 8)) > 10000 )
  {
    v6 = -1;
    ERR_put_error(5, 102, 103, &unk_1B15112, 0);
  }
  else
  {
    v3 = (int *)(BN_CTX_new());
    v4 = v3;
    if ( v3 != nullptr )
    {
      BN_CTX_start((int)(uintptr_t)(v3));
      v8 = BN_CTX_get(v4);
      if ( *(uint32_t *)(a3 + 24) != 0 )
      {
        v5 = 0;
        if ( (*(uint8_t *)(a3 + 28) & 1) == 0 )
          goto LABEL_6;
        v5 = (int)(uintptr_t)(BN_MONT_CTX_set_locked(a3 + 32, 26, *(uint32_t *)(a3 + 8), v4));
        if ( (*(uint8_t *)(a3 + 28) & 2) == 0 )
          *(uint32_t *)(*(uint32_t *)(a3 + 24) + 16) |= 4u;
        if ( v5 != 0 )
        {
LABEL_6:
          if ( DH_check_pub_key(a3, a2, v9) == 0 || v9[0] != 0 )
          {
            v6 = -1;
            ERR_put_error(5, 102, 102, &unk_1B15112, 0);
          }
          else if ( (*(int (**)(int, uint8_t *, int, uint32_t, uint32_t, int *, int))(*(uint32_t *)(a3 + 68) + 12))(
                      a3,
                      v8,
                      a2,
                      *(uint32_t *)(a3 + 24),
                      *(uint32_t *)(a3 + 8),
                      v4,
                      v5) != 0 )
          {
            v6 = BN_bn2bin(v8, a1);
          }
          else
          {
            v6 = -1;
            ERR_put_error(5, 102, 3, &unk_1B15112, 0);
          }
        }
        else
        {
          v6 = -1;
        }
      }
      else
      {
        v6 = -1;
        ERR_put_error(5, 102, 100, &unk_1B15112, 0);
      }
      BN_CTX_end(v4);
      BN_CTX_free((void **)v4);
    }
    else
    {
      return -1;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1998560  (binary VA: 0x1998560)
// Original: sub_1998560
// ----------------------------------------------------------------------------
int sub_1998560(int a1)
{
  g4_int128_t *v1;
  int v2;
  void **v3;
  int v4;
  int v5;
  int v6;
  g4_int128_t *v7;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void **_g4_t_v15;
  typedef int _g4_t_v16;
  typedef g4_int128_t _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v14)) > _g4_s4 ? (8u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v15)) > _g4_s5 ? (12u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v16)) > _g4_s6 ? (16u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v15 = (void **)BN_CTX_new();
  if ( v15 != nullptr )
  {
    v1 = *(g4_int128_t **)(a1 + 24);
    v2 = 0;
    if ( v1 == nullptr )
    {
      v1 = (g4_int128_t *)BN_new();
      if ( v1 == nullptr )
      {
        v3 = nullptr;
        goto LABEL_9;
      }
      v2 = 1;
    }
    v3 = *(void ***)(a1 + 20);
    if ( v3 != nullptr || (v14 = v2, v3 = (void **)BN_new(), v2 = v14, v3 != nullptr) )
    {
      v4 = 0;
      if ( (*(uint8_t *)(a1 + 28) & 1) == 0
        || (v11 = v2, v4 = (int)(uintptr_t)(BN_MONT_CTX_set_locked(a1 + 32, 26, *(uint32_t *)(a1 + 8), v15)), v2 = v11, v4 != 0) )
      {
        if ( v2 == 0 )
          goto LABEL_10;
        v5 = *(uint32_t *)(a1 + 16);
        if ( v5 == 0 )
        {
          v13 = v4;
          v5 = BN_num_bits(*(uint32_t **)(a1 + 8)) - 1;
          v4 = v13;
        }
        v10 = v4;
        v6 = BN_rand(v1, v5, 0, 0);
        v4 = v10;
        if ( v6 != 0 )
        {
LABEL_10:
          v7 = v1;
          if ( (*(uint8_t *)(a1 + 28) & 2) == 0 )
          {
            v12 = v4;
            BN_init(&v17);
            v9 = *((uint32_t *)v1 + 4);
            v17 = *v1;
            v4 = v12;
            v18 = v9 & 0xFFFFFFFE | v18 & 1 | 6;
            v7 = &v17;
          }
          if ( (*(int (**)(int, void **, uint32_t, g4_int128_t *, uint32_t, void **, int))(*(uint32_t *)(a1 + 68) + 12))(
                 a1,
                 v3,
                 *(uint32_t *)(a1 + 12),
                 v7,
                 *(uint32_t *)(a1 + 8),
                 v15,
                 v4) != 0 )
          {
            *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v3);
            *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(v1);
            v16 = 1;
            goto LABEL_14;
          }
        }
      }
    }
  }
  else
  {
    v1 = nullptr;
    v3 = nullptr;
  }
LABEL_9:
  ERR_put_error(5, 103, 3, &unk_1B15112, 0);
  v16 = 0;
LABEL_14:
  if ( v3 != nullptr && *(uint32_t *)(a1 + 20) == 0 )
    BN_free(v3);
  if ( v1 != nullptr && *(uint32_t *)(a1 + 24) == 0 )
    BN_free((void **)v1);
  BN_CTX_free(v15);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: sub_19987E0  (binary VA: 0x19987e0)
// Original: sub_19987E0
// ----------------------------------------------------------------------------
int sub_19987E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( *(uint32_t *)(a3 + 4) == 1 && (*(uint8_t *)(a1 + 28) & 2) != 0 )
    return BN_mod_exp_mont_word(a2, **(uint32_t **)a3, a4, a5, a6, a7);
  else
    return BN_mod_exp_mont(a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: sub_1998E80  (binary VA: 0x1998e80)
// Original: sub_1998E80
// ----------------------------------------------------------------------------
bool sub_1998E80(int a1)
{
  uint32_t *v1;
  bool result;

  v1 = *(uint32_t **)(a1 + 20);
  result = true;
  if ( v1[3] != 0 && v1[4] != 0 )
    return v1[5] == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1998EB0  (binary VA: 0x1998eb0)
// Original: sub_1998EB0
// ----------------------------------------------------------------------------
int sub_1998EB0(int a1, int a2)
{
  return i2d_DSAPrivateKey(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1998EE0  (binary VA: 0x1998ee0)
// Original: sub_1998EE0
// ----------------------------------------------------------------------------
int sub_1998EE0(int a1)
{
  return ((DSA_free(*(void **)(a1 + 20))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1998F10  (binary VA: 0x1998f10)
// Original: sub_1998F10
// ----------------------------------------------------------------------------
unsigned int sub_1998F10(unsigned int result, unsigned int *a2)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;

  if ( result != 0 )
  {
    v3 = *a2;
    v4 = BN_num_bits((uint32_t *)result);
    v5 = v4 + 14;
    v6 = v4 + 7;
    if ( v6 < 0 )
      v6 = v5;
    result = v6 >> 3;
    if ( v3 < result )
      *a2 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1998F60  (binary VA: 0x1998f60)
// Original: sub_1998F60
// ----------------------------------------------------------------------------
int sub_1998F60(int a1)
{
  return BN_num_bits(*(uint32_t **)(*(uint32_t *)(a1 + 20) + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_1998F90  (binary VA: 0x1998f90)
// Original: sub_1998F90
// ----------------------------------------------------------------------------
bool sub_1998F90(uint32_t *a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v5;
  const char *v6;
  uint8_t *v7;
  int v9;
  int v10;
  typedef const char *_g4_t_v11;
  typedef bool _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef unsigned int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v15[0] = 0;
  if ( a4 == 2 )
  {
    v5 = a2[7];
    v14 = a2[6];
    v11 = "Private-Key";
  }
  else if ( a4 <= 0 )
  {
    v14 = 0;
    v5 = 0;
    v11 = "DSA-Parameters";
  }
  else
  {
    v5 = 0;
    v6 = "DSA-Parameters";
    v14 = a2[6];
    if ( a4 == 1 )
      v6 = "Public-Key";
    v11 = v6;
  }
  sub_1998F10(a2[3], v15);
  sub_1998F10(a2[4], v15);
  sub_1998F10(a2[5], v15);
  sub_1998F10(v5, v15);
  sub_1998F10(v14, v15);
  v7 = CRYPTO_malloc(v15[0] + 10, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v7 != nullptr )
  {
    if ( v5 == 0
      || (v13 = false, BIO_indent(a1, a3, 128) != 0)
      && (v9 = BN_num_bits((uint32_t *)a2[3]), BIO_printf((int)(uintptr_t)(v11), v10, (int)(uintptr_t)(a1), "%s: (%d bit)\n", v11, v9) > 0) )
    {
      v13 = false;
      if ( ASN1_bn_print(a1, "priv:", v5, v7, a3) != 0
        && ASN1_bn_print(a1, "pub: ", v14, v7, a3) != 0
        && ASN1_bn_print(a1, "P:   ", a2[3], v7, a3) != 0
        && ASN1_bn_print(a1, "Q:   ", a2[4], v7, a3) != 0 )
      {
        v13 = ASN1_bn_print(a1, "G:   ", a2[5], v7, a3) != 0;
      }
    }
    CRYPTO_free(v7);
  }
  else
  {
    ERR_put_error(10, 104, 65, &unk_1B15112, 0);
    return false;
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_1999250  (binary VA: 0x1999250)
// Original: sub_1999250
// ----------------------------------------------------------------------------
bool sub_1999250(uint32_t *a1, int a2, int a3)
{
  return sub_1998F90(a1, *(unsigned int **)(a2 + 20), a3, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1999270  (binary VA: 0x1999270)
// Original: sub_1999270
// ----------------------------------------------------------------------------
bool sub_1999270(uint32_t *a1, int a2, int a3)
{
  return sub_1998F90(a1, *(unsigned int **)(a2 + 20), a3, 2);
}

// ----------------------------------------------------------------------------
// Function: sub_1999290  (binary VA: 0x1999290)
// Original: sub_1999290
// ----------------------------------------------------------------------------
bool sub_1999290(uint32_t *a1, int a2, int a3)
{
  return sub_1998F90(a1, *(unsigned int **)(a2 + 20), a3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_19992B0  (binary VA: 0x19992b0)
// Original: sub_19992B0
// ----------------------------------------------------------------------------
bool sub_19992B0(int a1, int a2)
{
  return BN_cmp(*(int **)(*(uint32_t *)(a2 + 20) + 24), *(uint32_t **)(*(uint32_t *)(a1 + 20) + 24)) == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19992F0  (binary VA: 0x19992f0)
// Original: sub_19992F0
// ----------------------------------------------------------------------------
int sub_19992F0(int a1, int a2)
{
  void **v2;
  int v3;
  void **v4;
  int v5;
  void **v6;
  void **v7;
  int v8;
  void **v9;
  void **v10;
  int v11;

  v2 = BN_dup(*(uint32_t **)(*(uint32_t *)(a2 + 20) + 12));
  v3 = 0;
  v4 = v2;
  if ( v2 != nullptr )
  {
    v5 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(v5 + 12) != 0 )
    {
      BN_free(*(void ***)(v5 + 12));
      v5 = *(uint32_t *)(a1 + 20);
    }
    *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(v4);
    v6 = BN_dup(*(uint32_t **)(*(uint32_t *)(a2 + 20) + 16));
    v3 = 0;
    v7 = v6;
    if ( v6 != nullptr )
    {
      v8 = *(uint32_t *)(a1 + 20);
      if ( *(uint32_t *)(v8 + 16) != 0 )
      {
        BN_free(*(void ***)(v8 + 16));
        v8 = *(uint32_t *)(a1 + 20);
      }
      *(uint32_t *)(v8 + 16) = (uint32_t)(uintptr_t)(v7);
      v9 = BN_dup(*(uint32_t **)(*(uint32_t *)(a2 + 20) + 20));
      v3 = 0;
      v10 = v9;
      if ( v9 != nullptr )
      {
        v11 = *(uint32_t *)(a1 + 20);
        if ( *(uint32_t *)(v11 + 20) != 0 )
        {
          BN_free(*(void ***)(v11 + 20));
          v11 = *(uint32_t *)(a1 + 20);
        }
        *(uint32_t *)(v11 + 20) = (uint32_t)(uintptr_t)(v10);
        return 1;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19993C0  (binary VA: 0x19993c0)
// Original: sub_19993C0
// ----------------------------------------------------------------------------
int sub_19993C0(int a1, int a2)
{
  return i2d_DSAparams(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19993F0  (binary VA: 0x19993f0)
// Original: sub_19993F0
// ----------------------------------------------------------------------------
int sub_19993F0(int a1)
{
  return DSA_size(*(uint32_t *)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: sub_1999420  (binary VA: 0x1999420)
// Original: sub_1999420
// ----------------------------------------------------------------------------
int sub_1999420(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int *v5;
  void *v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v12)) > _g4_s2 ? (44u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  v12 = nullptr;
  v2 = ASN1_STRING_new();
  v3 = (int)(uintptr_t)(v2);
  if ( v2 != nullptr && (v4 = i2d_DSAparams(*(uint32_t *)(a2 + 20), v2 + 2), *(uint32_t *)v3 = v4, v4 > 0) )
  {
    *(uint32_t *)(v3 + 4) = 16;
    v5 = BN_to_ASN1_INTEGER(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 28), nullptr);
    if ( v5 != nullptr )
    {
      v11 = i2d_ASN1_INTEGER((int)(uintptr_t)(v5), &v12);
      ASN1_INTEGER_free((char)(uintptr_t)(v5));
      v6 = v12;
      v7 = (int)(uintptr_t)(OBJ_nid2obj(116));
      v10 = (int)(uintptr_t)(v6);
      v8 = 1;
      if ( PKCS8_pkey_set0(a1, v7, 0, 16, v3, v10, v11) != 0 )
        return v8;
    }
    else
    {
      ERR_put_error(10, 116, 109, &unk_1B15112, 0);
    }
  }
  else
  {
    v5 = nullptr;
    ERR_put_error(10, 116, 65, &unk_1B15112, 0);
  }
  if ( v12 != nullptr )
    CRYPTO_free(v12);
  if ( v3 != 0 )
    ASN1_STRING_free((void **)v3);
  v8 = 0;
  if ( v5 != nullptr )
    ASN1_INTEGER_free((char)(uintptr_t)(v5));
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19995C0  (binary VA: 0x19995c0)
// Original: sub_19995C0
// ----------------------------------------------------------------------------
int sub_19995C0(char *a1, uint32_t *a2)
{
  int v2;
  int v4;
  size_t *v5;
  char *v6;
  void **v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  void **v13;
  typedef char *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef void *_g4_t_v22;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v15)) > _g4_s1 ? (44u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v16)) > _g4_s2 ? (52u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v17)) > _g4_s3 ? (56u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v18)) > _g4_s4 ? (60u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v19)) > _g4_s5 ? (64u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v20)) > _g4_s6 ? (68u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v21)) > _g4_s7 ? (72u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v22)) > _g4_s8 ? (76u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  v2 = 0;
  if ( PKCS8_pkey_get0(nullptr, &v16, &v18, &v21, (int)(uintptr_t)(a2)) == 0 )
    return v2;
  X509_ALGOR_get0(nullptr, &v19, &v20, v21);
  if ( *v16 == 48 )
  {
    v8 = d2i_ASN1_SEQUENCE_ANY(nullptr, &v16, v18);
    v15 = (void *)v8;
    if ( v8 == 0 )
    {
      v5 = nullptr;
      goto LABEL_7;
    }
    v5 = nullptr;
    if ( sk_num(v8) != 2 )
      goto LABEL_7;
    v9 = (uint32_t *)sk_value(v15, 0);
    v10 = (uint32_t *)sk_value(v15, 1);
    if ( *v9 == 16 )
    {
      *a2 = 2;
      v20 = (uint32_t *)v9[1];
    }
    else
    {
      v5 = nullptr;
      if ( v19 != 16 )
        goto LABEL_7;
      *a2 = 3;
    }
    v5 = nullptr;
    if ( *v10 != 2 )
      goto LABEL_7;
    v5 = (size_t *)v10[1];
LABEL_18:
    v17 = v20[2];
    v6 = (char *)d2i_DSAparams(0, &v17, *v20);
    if ( v6 != nullptr )
    {
      v11 = ASN1_INTEGER_to_BN(v5, 0);
      *((uint32_t *)v6 + 7) = v11;
      if ( v11 != 0 )
      {
        v12 = BN_new();
        *((uint32_t *)v6 + 6) = (uint32_t)(uintptr_t)(v12);
        if ( v12 != nullptr )
        {
          v13 = (void **)BN_CTX_new();
          v7 = v13;
          if ( v13 != nullptr )
          {
            if ( BN_mod_exp(*((uint32_t *)v6 + 6), *((uint32_t *)v6 + 5), *((uint32_t *)v6 + 7), *((uint32_t *)v6 + 3), v13) != 0 )
            {
              EVP_PKEY_assign(a1, 0x74u, (int)(uintptr_t)(v6));
              BN_CTX_free(v7);
              v2 = 1;
              if ( v15 != nullptr )
                sk_pop_free(v15, (int)(uintptr_t)(ASN1_TYPE_free));
              else
                ASN1_INTEGER_free((char)(uintptr_t)(v5));
              return v2;
            }
            ERR_put_error(10, 115, 109, &unk_1B15112, 0);
          }
          else
          {
            ERR_put_error(10, 115, 65, &unk_1B15112, 0);
          }
        }
        else
        {
          v7 = nullptr;
          ERR_put_error(10, 115, 65, &unk_1B15112, 0);
        }
      }
      else
      {
        v7 = nullptr;
        ERR_put_error(10, 115, 109, &unk_1B15112, 0);
      }
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v22 = v16;
  v4 = d2i_ASN1_INTEGER(nullptr, &v16, v18);
  v5 = (size_t *)v4;
  if ( v4 == 0
    || *(uint32_t *)(v4 + 4) == 258
    && (*a2 = 4, ASN1_INTEGER_free(v4), (v5 = d2i_ASN1_UINTEGER(nullptr, &v22, v18)) == nullptr) )
  {
    v15 = nullptr;
    goto LABEL_7;
  }
  v15 = nullptr;
  if ( v19 == 16 )
    goto LABEL_18;
LABEL_7:
  v6 = nullptr;
  v7 = nullptr;
  ERR_put_error(10, 115, 114, &unk_1B15112, 0);
LABEL_8:
  BN_CTX_free(v7);
  if ( v5 != nullptr )
    ASN1_INTEGER_free((char)(uintptr_t)(v5));
  sk_pop_free(v15, (int)(uintptr_t)(ASN1_TYPE_free));
  v14 = v6;
  v2 = 0;
  DSA_free(v14);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19999D0  (binary VA: 0x19999d0)
// Original: sub_19999D0
// ----------------------------------------------------------------------------
int sub_19999D0(int a1, int a2)
{
  uint32_t *v2;
  void **v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12 = nullptr;
  v2 = *(uint32_t **)(a2 + 20);
  if ( *(uint32_t *)(a2 + 24) != 0 && v2[3] != 0 && v2[4] != 0 && v2[5] != 0 )
  {
    v3 = (void **)ASN1_STRING_new();
    v4 = i2d_DSAparams(v2, v3 + 2);
    v5 = 16;
    *v3 = (void *)v4;
    if ( v4 <= 0 )
    {
      v3 = nullptr;
      ERR_put_error(10, 118, 65, &unk_1B15112, 0);
      goto LABEL_7;
    }
  }
  else
  {
    v5 = -1;
    v3 = nullptr;
  }
  v2[2] = 0;
  v8 = i2d_DSAPublicKey(v2, &v12);
  if ( v8 <= 0 )
  {
    ERR_put_error(10, 118, 65, &unk_1B15112, 0);
  }
  else
  {
    v11 = v12;
    v9 = (int)(uintptr_t)(OBJ_nid2obj(116));
    v10 = X509_PUBKEY_set0_param(a1, v9, v5, v3, v11, v8);
    v6 = 1;
    if ( v10 != 0 )
      return v6;
  }
LABEL_7:
  if ( v12 != nullptr )
    CRYPTO_free(v12);
  v6 = 0;
  if ( v3 != nullptr )
    ASN1_STRING_free(v3);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1999B60  (binary VA: 0x1999b60)
// Original: sub_1999B60
// ----------------------------------------------------------------------------
int sub_1999B60(char *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  char v7; // si
  int v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v2 = X509_PUBKEY_get0_param(0, &v9, &v11, &v14, a2);
  v3 = 0;
  if ( v2 != 0 )
  {
    X509_ALGOR_get0(nullptr, &v12, &v13, v14);
    if ( v12 == 16 )
    {
      v10 = v13[2];
      v5 = (uint32_t *)d2i_DSAparams(0, &v10, *v13);
      if ( v5 == nullptr )
      {
        ERR_put_error(10, 117, 104, &unk_1B15112, 0);
        return 0;
      }
    }
    else
    {
      if ( v12 != -1 && v12 != 5 )
      {
        ERR_put_error(10, 117, 105, &unk_1B15112, 0);
        return 0;
      }
      v5 = (uint32_t *)DSA_new();
      if ( v5 == nullptr )
      {
        ERR_put_error(10, 117, 65, &unk_1B15112, 0);
        return 0;
      }
    }
    v6 = (uint32_t *)d2i_ASN1_INTEGER(nullptr, &v9, v11);
    v7 = (char)(uintptr_t)(v6);
    if ( v6 != nullptr )
    {
      v8 = ASN1_INTEGER_to_BN(v6, 0);
      v5[6] = v8;
      if ( v8 != 0 )
      {
        ASN1_INTEGER_free(v7);
        EVP_PKEY_assign(a1, 0x74u, (int)(uintptr_t)(v5));
        return 1;
      }
      ERR_put_error(10, 117, 108, &unk_1B15112, 0);
      ASN1_INTEGER_free(v7);
    }
    else
    {
      ERR_put_error(10, 117, 104, &unk_1B15112, 0);
    }
    DSA_free(v5);
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1999DD0  (binary VA: 0x1999dd0)
// Original: sub_1999DD0
// ----------------------------------------------------------------------------
int sub_1999DD0(char *a1, int a2, int a3)
{
  int v3;

  v3 = d2i_DSAPrivateKey(0, a2, a3);
  if ( v3 != 0 )
  {
    EVP_PKEY_assign(a1, 0x74u, v3);
    return 1;
  }
  else
  {
    ERR_put_error(10, 122, 10, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1999E60  (binary VA: 0x1999e60)
// Original: sub_1999E60
// ----------------------------------------------------------------------------
int sub_1999E60(int a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int *_g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  if ( a2 == 3 )
  {
    *a4 = 64;
    return 2;
  }
  if ( a2 == 5 )
  {
    v4 = 1;
    if ( a3 != 0 )
      return v4;
    CMS_SignerInfo_get0_algs(a4, 0, 0, &v12, v13);
    v6 = v12;
    if ( v12 == nullptr )
      return -1;
  }
  else
  {
    v4 = -2;
    if ( a2 != 1 )
      return v4;
    v4 = 1;
    if ( a3 != 0 )
      return v4;
    PKCS7_SIGNER_INFO_get0_algs(a4, 0, &v12, v13);
    v6 = v12;
    if ( v12 == nullptr )
      return -1;
  }
  v7 = *v6;
  if ( v7 == 0 )
    return -1;
  v4 = -1;
  v8 = OBJ_obj2nid(v7);
  if ( v8 != 0 )
  {
    v9 = EVP_PKEY_id(a1);
    if ( OBJ_find_sigid_by_algs(&v11, v8, v9) != 0 )
    {
      v4 = 1;
      v10 = (int)(uintptr_t)(OBJ_nid2obj(v11));
      X509_ALGOR_set0(v13[0], v10, -1, 0);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1999FC0  (binary VA: 0x1999fc0)
// Original: sub_1999FC0
// ----------------------------------------------------------------------------
bool sub_1999FC0(int a1, int a2)
{
  int v2;

  v2 = 0;
  if ( BN_cmp(*(int **)(*(uint32_t *)(a1 + 20) + 12), *(uint32_t **)(*(uint32_t *)(a2 + 20) + 12)) == 0
    && BN_cmp(*(int **)(*(uint32_t *)(a1 + 20) + 16), *(uint32_t **)(*(uint32_t *)(a2 + 20) + 16)) == 0 )
  {
    return BN_cmp(*(int **)(*(uint32_t *)(a1 + 20) + 20), *(uint32_t **)(*(uint32_t *)(a2 + 20) + 20)) == 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_199A060  (binary VA: 0x199a060)
// Original: sub_199A060
// ----------------------------------------------------------------------------
int sub_199A060(char *a1, int a2, int a3)
{
  int v3;

  v3 = d2i_DSAparams(0, a2, a3);
  if ( v3 != 0 )
  {
    EVP_PKEY_assign(a1, 0x74u, v3);
    return 1;
  }
  else
  {
    ERR_put_error(10, 119, 10, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_199A0F0  (binary VA: 0x199a0f0)
// Original: sub_199A0F0
// ----------------------------------------------------------------------------
int sub_199A0F0(int a1, void **a2)
{
  int result;
  int v3;

  if ( a1 != 0 )
  {
    result = 1;
    if ( a1 == 2 )
    {
      DSA_free(*a2);
      *a2 = nullptr;
      return 2;
    }
  }
  else
  {
    v3 = (int)(uintptr_t)(DSA_new());
    *a2 = (void *)v3;
    return v3 != 0 ? 2 : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_199A180  (binary VA: 0x199a180)
// Original: sub_199A180
// ----------------------------------------------------------------------------
int sub_199A180(int a1, uint32_t *a2)
{
  int result;
  uint32_t *v3;

  result = 1;
  if ( a1 == 0 )
  {
    v3 = (uint32_t *)(CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v3 != nullptr )
    {
      *v3 = 0;
      v3[1] = 0;
      *a2 = (uint32_t)(uintptr_t)(v3);
      return 2;
    }
    else
    {
      ERR_put_error(10, 114, 65, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSAparams_dup  (binary VA: 0x199a490)
// Original: DSAparams_dup
// ----------------------------------------------------------------------------
int DSAparams_dup(int a1)
{
  return ASN1_item_dup(&DSAparams_it, a1);
}

// ----------------------------------------------------------------------------
// Function: sub_199AB30  (binary VA: 0x199ab30)
// Original: sub_199AB30
// ----------------------------------------------------------------------------
int sub_199AB30(int a1)
{
  *(uint32_t *)(a1 + 40) |= 1u;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_199AB40  (binary VA: 0x199ab40)
// Original: sub_199AB40
// ----------------------------------------------------------------------------
int sub_199AB40(int a1)
{
  if ( *(uint32_t *)(a1 + 44) != 0 )
    BN_MONT_CTX_free(*(void **)(a1 + 44));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_199AB70  (binary VA: 0x199ab70)
// Original: sub_199AB70
// ----------------------------------------------------------------------------
int sub_199AB70(uint8_t *a1, int a2, uint32_t **a3, int a4)
{
  int v4;
  int v5;
  void **v6;
  uint32_t *v8;
  int v9;
  int v10;
  int (*v11)(int, void **, uint32_t, void **, uint32_t, void **, uint32_t, void **, int);
  int v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14[5];
  typedef void *_g4_t_v15[5];
  typedef void *_g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v15)) > _g4_s2 ? (40u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v16)) > _g4_s3 ? (60u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);

  if ( *(uint32_t *)(a4 + 12) == 0 || *(uint32_t *)(a4 + 16) == 0 || *(uint32_t *)(a4 + 20) == 0 )
  {
    ERR_put_error(10, 113, 101, &unk_1B15112, 0);
    return -1;
  }
  v4 = BN_num_bits(*(uint32_t **)(a4 + 16));
  v5 = v4;
  if ( v4 != 224 && v4 != 160 && v4 != 256 )
  {
    ERR_put_error(10, 113, 102, &unk_1B15112, 0);
    return -1;
  }
  if ( BN_num_bits(*(uint32_t **)(a4 + 12)) > 10000 )
  {
    ERR_put_error(10, 113, 103, &unk_1B15112, 0);
    return -1;
  }
  BN_init(v14);
  BN_init(v15);
  BN_init(v16);
  v6 = (void **)BN_CTX_new();
  if ( v6 != nullptr )
  {
    v13 = 0;
    if ( (*a3)[1] == 0 )
      goto LABEL_10;
    if ( (*a3)[3] != 0 )
      goto LABEL_10;
    if ( BN_ucmp(*a3, *(uint32_t **)(a4 + 16)) >= 0 )
      goto LABEL_10;
    v8 = a3[1];
    if ( v8[1] == 0 || v8[3] != 0 || BN_ucmp(a3[1], *(uint32_t **)(a4 + 16)) >= 0 )
      goto LABEL_10;
    if ( BN_mod_inverse(v15, a3[1], *(uint32_t *)(a4 + 16), v6) != 0 )
    {
      v9 = v5 >> 3;
      if ( v5 >> 3 > a2 )
        v9 = a2;
      if ( BN_bin2bn(a1, v9, v14) != nullptr )
      {
        v13 = -1;
        if ( BN_mod_mul(v14, v14, v15, *(uint32_t *)(a4 + 16), v6) != 0
          && BN_mod_mul(v15, *a3, v15, *(uint32_t *)(a4 + 16), v6) != 0 )
        {
          v10 = 0;
          if ( (*(uint8_t *)(a4 + 40) & 1) == 0
            || (v10 = (int)(uintptr_t)(BN_MONT_CTX_set_locked(a4 + 44, 8, *(uint32_t *)(a4 + 12), v6))) != 0 )
          {
            v11 = *(int (**)(int, void **, uint32_t, void **, uint32_t, void **, uint32_t, void **, int))(*(uint32_t *)(a4 + 60) + 16);
            v12 = v11 != nullptr
                ? v11(a4, v16, *(uint32_t *)(a4 + 20), v14, *(uint32_t *)(a4 + 24), v15, *(uint32_t *)(a4 + 12), v6, v10)
                : BN_mod_exp2_mont(
                    v16,
                    *(uint32_t *)(a4 + 20),
                    v14,
                    *(uint32_t *)(a4 + 24),
                    v15,
                    *(uint32_t *)(a4 + 12),
                    v6,
                    v10);
            v13 = -1;
            if ( v12 != 0 && BN_div(0, v14, v16, *(uint32_t *)(a4 + 16), v6) != 0 )
            {
              if ( BN_ucmp(v14, *a3) != 0 )
              {
                ERR_put_error(10, 113, 3, &unk_1B15112, 0);
                v13 = 0;
              }
              else
              {
                v13 = 1;
              }
              goto LABEL_11;
            }
          }
        }
LABEL_10:
        ERR_put_error(10, 113, 3, &unk_1B15112, 0);
        if ( v6 != nullptr )
LABEL_11:
          BN_CTX_free(v6);
        BN_free(v14);
        BN_free(v15);
        BN_free(v16);
        return v13;
      }
    }
  }
  v13 = -1;
  goto LABEL_10;
}

// ----------------------------------------------------------------------------
// Function: sub_199B040  (binary VA: 0x199b040)
// Original: sub_199B040
// ----------------------------------------------------------------------------
uint32_t * sub_199B040(uint8_t *a1, int a2, int a3)
{
  int *v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  void *v9;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef void **_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18[5];
  typedef uint8_t *_g4_t_v19[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v16 = nullptr;
  v17 = nullptr;
  BN_init(v18);
  BN_init(v19);
  if ( *(uint32_t *)(a3 + 12) != 0 && *(uint32_t *)(a3 + 16) != 0 && *(uint32_t *)(a3 + 20) != 0 )
  {
    v3 = (int *)(BN_new());
    if ( v3 != nullptr )
    {
      v15 = (void **)BN_CTX_new();
      if ( v15 != nullptr )
      {
        if ( *(uint32_t *)(a3 + 32) != 0 )
        {
          v4 = *(void **)(a3 + 36);
          if ( v4 != nullptr )
          {
            v16 = *(void **)(a3 + 32);
            *(uint32_t *)(a3 + 32) = 0;
            v17 = v4;
            *(uint32_t *)(a3 + 36) = 0;
            goto LABEL_9;
          }
        }
        if ( DSA_sign_setup(a3, v15, &v16, &v17) != 0 )
        {
LABEL_9:
          v5 = BN_num_bits(*(uint32_t **)(a3 + 16));
          v6 = v5 + 14;
          v7 = v5 + 7;
          if ( v7 >= 0 )
            v6 = v7;
          if ( v6 >> 3 < a2 )
          {
            v12 = BN_num_bits(*(uint32_t **)(a3 + 16));
            v13 = v12 + 14;
            v14 = v12 + 7;
            if ( v14 < 0 )
              v14 = v13;
            a2 = v14 >> 3;
          }
          if ( BN_bin2bn(a1, a2, v18) != nullptr
            && BN_mod_mul(v19, *(uint32_t *)(a3 + 28), v17, *(uint32_t *)(a3 + 16), v15) != 0
            && BN_add(v3, v19, v18) != 0
            && (BN_cmp(v3, *(uint32_t **)(a3 + 16)) <= 0 || BN_sub(v3, v3, *(uint32_t *)(a3 + 16)) != 0)
            && BN_mod_mul(v3, v3, v16, *(uint32_t *)(a3 + 16), v15) != 0 )
          {
            v8 = (uint32_t *)DSA_SIG_new();
            if ( v8 != nullptr )
            {
              v9 = v17;
              v8[1] = (uint32_t)(uintptr_t)(v3);
              *v8 = (uint32_t)(uintptr_t)(v9);
LABEL_20:
              BN_CTX_free(v15);
              goto LABEL_21;
            }
          }
        }
      }
      v11 = 3;
      goto LABEL_26;
    }
    v11 = 3;
    v15 = nullptr;
  }
  else
  {
    v11 = 101;
    v15 = nullptr;
    v3 = nullptr;
  }
LABEL_26:
  ERR_put_error(10, 112, v11, &unk_1B15112, 0);
  v8 = nullptr;
  BN_free((void **)v17);
  BN_free((void **)v3);
  if ( v15 != nullptr )
    goto LABEL_20;
LABEL_21:
  BN_clear_free((uint8_t **)v18);
  BN_clear_free(v19);
  if ( v16 != nullptr )
    BN_clear_free((uint8_t **)v16);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_199B310  (binary VA: 0x199b310)
// Original: sub_199B310
// ----------------------------------------------------------------------------
int sub_199B310(uint32_t *a1, void **a2, uint8_t ***a3, uint8_t ***a4)
{
  int v4;
  uint8_t **v5;
  int (*v6)(uint32_t *, uint8_t **, uint32_t, uint8_t **, uint32_t, void **, uint32_t);
  int v7;
  int v8;
  uint8_t **v10;
  int v11;
  typedef uint8_t **_g4_t_v12;
  typedef void **_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t *_g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef uint8_t *_g4_t_v17[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  if ( a1[3] == 0 || a1[4] == 0 || a1[5] == 0 )
  {
    ERR_put_error(10, 107, 101, &unk_1B15112, 0);
    return 0;
  }
  BN_init(v15);
  BN_init(v17);
  v13 = a2;
  if ( a2 != nullptr || (v13 = (void **)BN_CTX_new()) != nullptr )
  {
    v12 = (uint8_t **)BN_new();
    if ( v12 != nullptr )
    {
      do
      {
        if ( BN_rand_range(v15, a1[4]) == 0 )
          goto LABEL_15;
      }
      while ( v15[1] == nullptr );
      v4 = a1[10];
      if ( (v4 & 2) == 0 )
        v16 |= 4u;
      if ( (v4 & 1) != 0 )
      {
        if ( BN_MONT_CTX_set_locked(a1 + 11, 8, a1[3], v13) == 0 )
          goto LABEL_15;
        v5 = v15;
        if ( (a1[10] & 2) != 0 )
        {
LABEL_12:
          v6 = *(int (**)(uint32_t *, uint8_t **, uint32_t, uint8_t **, uint32_t, void **, uint32_t))(a1[15] + 20);
          if ( v6 != nullptr )
            v7 = v6(a1, v12, a1[5], v5, a1[3], v13, a1[11]);
          else
            v7 = BN_mod_exp_mont(v12, a1[5], v5, a1[3], v13, a1[11]);
          if ( v7 != 0 && BN_div(0, v12, v12, a1[4], v13) != 0 )
          {
            v10 = (uint8_t **)BN_mod_inverse(0, v15, a1[4], v13);
            if ( v10 != nullptr )
            {
              if ( *a3 != nullptr )
                BN_clear_free(*a3);
              *a3 = v10;
              if ( *a4 != nullptr )
                BN_clear_free(*a4);
              v8 = 1;
              *a4 = v12;
              goto LABEL_16;
            }
          }
LABEL_15:
          ERR_put_error(10, 107, 3, &unk_1B15112, 0);
          v8 = 0;
          BN_clear_free(v12);
          goto LABEL_16;
        }
      }
      else
      {
        v5 = v15;
        if ( (v4 & 2) != 0 )
          goto LABEL_12;
      }
      if ( BN_copy(v17, v15) == nullptr || BN_add(v17, v17, a1[4]) == 0 )
        goto LABEL_15;
      v14 = BN_num_bits(v17);
      v11 = BN_num_bits((uint32_t *)a1[4]);
      v5 = v17;
      if ( v14 <= v11 )
      {
        if ( BN_add(v17, v17, a1[4]) == 0 )
          goto LABEL_15;
        v5 = v17;
      }
      goto LABEL_12;
    }
  }
  v8 = 0;
  ERR_put_error(10, 107, 3, &unk_1B15112, 0);
LABEL_16:
  if ( a2 == nullptr )
    BN_CTX_free(v13);
  BN_clear_free(v15);
  BN_clear_free(v17);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: DSO_set_default_method  (binary VA: 0x199b890)
// Original: DSO_set_default_method
// ----------------------------------------------------------------------------
int DSO_set_default_method(int a1)
{
  dword_21405EC = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DSO_get_default_method  (binary VA: 0x199b8b0)
// Original: DSO_get_default_method
// ----------------------------------------------------------------------------
int DSO_get_default_method()
{
  return dword_21405EC;
}

// ----------------------------------------------------------------------------
// Function: DSO_get_method  (binary VA: 0x199b8d0)
// Original: DSO_get_method
// ----------------------------------------------------------------------------
int DSO_get_method(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: DSO_set_method  (binary VA: 0x199b8e0)
// Original: DSO_set_method
// ----------------------------------------------------------------------------
int DSO_set_method(int *a1, int a2)
{
  int result;

  result = *a1;
  *a1 = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSO_new_method  (binary VA: 0x199b8f0)
// Original: DSO_new_method
// ----------------------------------------------------------------------------
int * DSO_new_method(int a1)
{
  int v1;
  uint8_t *v2;
  int *v3;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  int v7;
  int v8;
  int (*v9)(int *);
  int *v11;
  int *v12;

  v1 = a1;
  if ( dword_21405EC == 0 )
    dword_21405EC = DSO_METHOD_openssl();
  v2 = CRYPTO_malloc(40, (int)(uintptr_t)(&unk_1B15112), 0);
  v3 = (int *)v2;
  if ( v2 == nullptr )
  {
    ERR_put_error(37, 113, 65, &unk_1B15112, 0);
    return v3;
  }
  v4 = (uint16_t *)(v2);
  v5 = 40;
  if ( ((uint8_t)(uintptr_t)(v2) & 1) != 0 )
  {
    *v2 = 0;
    v4 = (uint16_t *)(v2 + 1);
    LOBYTE(v5) = 39;
  }
  if ( ((uint8_t)(uintptr_t)(v4) & 2) != 0 )
  {
    *v4 = 0;
    v5 -= 2;
    ++v4;
  }
  memset(v4, 0, 4 * (v5 >> 2));
  v6 = &v4[2 * (v5 >> 2)];
  if ( (v5 & 2) == 0 )
  {
    v7 = v5 & 1;
    if ( v7 == 0 )
      goto LABEL_10;
    goto LABEL_17;
  }
  *v6++ = 0;
  v7 = v5 & 1;
  if ( v7 != 0 )
LABEL_17:
    *(uint8_t *)v6 = 0;
LABEL_10:
  v8 = (int)(uintptr_t)(sk_new_null(0, v7));
  v3[1] = v8;
  if ( v8 != 0 )
  {
    if ( a1 == 0 )
      v1 = dword_21405EC;
    *v3 = v1;
    v3[2] = 1;
    v9 = *(int (**)(int *))(v1 + 32);
    if ( v9 != nullptr && v9(v3) == 0 )
    {
      v11 = v3;
      v3 = nullptr;
      CRYPTO_free(v11);
    }
  }
  else
  {
    ERR_put_error(37, 113, 65, &unk_1B15112, 0);
    v12 = v3;
    v3 = nullptr;
    CRYPTO_free(v12);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: DSO_new  (binary VA: 0x199baa0)
// Original: DSO_new
// ----------------------------------------------------------------------------
int * DSO_new()
{
  return DSO_new_method(0);
}

// ----------------------------------------------------------------------------
// Function: DSO_free  (binary VA: 0x199bad0)
// Original: DSO_free
// ----------------------------------------------------------------------------
int DSO_free(int *a1)
{
  int v1;
  int v2;
  int v4;
  int (*v5)(void *);
  int (*v6)(void *);

  if ( a1 != nullptr )
  {
    v1 = CRYPTO_add_lock(a1 + 2, -1, 28, (int)(uintptr_t)(&unk_1B15112), 0);
    v2 = 1;
    if ( v1 <= 0 )
    {
      v4 = *a1;
      v5 = *(int (**)(void *))(*a1 + 8);
      if ( v5 != nullptr )
      {
        if ( v5(a1) == 0 )
        {
          ERR_put_error(37, 111, 107, &unk_1B15112, 0);
          return 0;
        }
        v4 = *a1;
      }
      v6 = *(int (**)(void *))(v4 + 36);
      if ( v6 != nullptr && v6(a1) == 0 )
      {
        ERR_put_error(37, 111, 102, &unk_1B15112, 0);
        return 0;
      }
      else
      {
        sk_free((void *)a1[1]);
        if ( a1[8] != 0 )
          CRYPTO_free((void *)a1[8]);
        if ( a1[9] != 0 )
          CRYPTO_free((void *)a1[9]);
        CRYPTO_free(a1);
        return 1;
      }
    }
  }
  else
  {
    ERR_put_error(37, 111, 67, &unk_1B15112, 0);
    return 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: DSO_flags  (binary VA: 0x199bc30)
// Original: DSO_flags
// ----------------------------------------------------------------------------
int DSO_flags(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSO_up_ref  (binary VA: 0x199bc40)
// Original: DSO_up_ref
// ----------------------------------------------------------------------------
int DSO_up_ref(int a1)
{
  if ( a1 != 0 )
  {
    CRYPTO_add_lock((uint32_t *)(a1 + 8), 1, 28, (int)(uintptr_t)(&unk_1B15112), 0);
    return 1;
  }
  else
  {
    ERR_put_error(37, 114, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DSO_bind_var  (binary VA: 0x199bcc0)
// Original: DSO_bind_var
// ----------------------------------------------------------------------------
int DSO_bind_var(int a1, int a2)
{
  int (*v2)(int, int);
  int result;

  if ( a2 != 0 && a1 != 0 )
  {
    v2 = *(int (**)(int, int))(*(uint32_t *)a1 + 12);
    if ( v2 != nullptr )
    {
      result = v2(a1, a2);
      if ( result == 0 )
      {
        ERR_put_error(37, 109, 106, &unk_1B15112, 0);
        return 0;
      }
    }
    else
    {
      ERR_put_error(37, 109, 108, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(37, 109, 67, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSO_bind_func  (binary VA: 0x199bdb0)
// Original: DSO_bind_func
// ----------------------------------------------------------------------------
int DSO_bind_func(int a1, int a2)
{
  int (*v2)(int, int);
  int result;

  if ( a2 != 0 && a1 != 0 )
  {
    v2 = *(int (**)(int, int))(*(uint32_t *)a1 + 16);
    if ( v2 != nullptr )
    {
      result = v2(a1, a2);
      if ( result == 0 )
      {
        ERR_put_error(37, 108, 106, &unk_1B15112, 0);
        return 0;
      }
    }
    else
    {
      ERR_put_error(37, 108, 108, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(37, 108, 67, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSO_ctrl  (binary VA: 0x199bea0)
// Original: DSO_ctrl
// ----------------------------------------------------------------------------
int DSO_ctrl(uint32_t *a1, int a2, int a3, int a4)
{
  int (*v4)(uint32_t *, int, int, int);

  if ( a1 != nullptr )
  {
    switch ( a2 )
    {
      case 2:
        a1[3] = a3;
        return 0;
      case 3:
        a1[3] |= a3;
        return 0;
      case 1:
        return a1[3];
      default:
        if ( *a1 != 0 && (v4 = *(int (**)(uint32_t *, int, int, int))(*a1 + 20)) != nullptr )
        {
          return v4(a1, a2, a3, a4);
        }
        else
        {
          ERR_put_error(37, 110, 108, &unk_1B15112, 0);
          return -1;
        }
    }
  }
  else
  {
    ERR_put_error(37, 110, 67, &unk_1B15112, 0);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: DSO_set_name_converter  (binary VA: 0x199bfa0)
// Original: DSO_set_name_converter
// ----------------------------------------------------------------------------
int DSO_set_name_converter(int a1, int a2, uint32_t *a3)
{
  if ( a1 != 0 )
  {
    if ( a3 != nullptr )
      *a3 = *(uint32_t *)(a1 + 24);
    *(uint32_t *)(a1 + 24) = a2;
    return 1;
  }
  else
  {
    ERR_put_error(37, 122, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DSO_get_filename  (binary VA: 0x199c010)
// Original: DSO_get_filename
// ----------------------------------------------------------------------------
int DSO_get_filename(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 32);
  ERR_put_error(37, 127, 67, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: DSO_set_filename  (binary VA: 0x199c070)
// Original: DSO_set_filename
// ----------------------------------------------------------------------------
int DSO_set_filename(int a1, char *s)
{
  size_t v3;
  char *v4;
  size_t v5;

  if ( s != nullptr && a1 != 0 )
  {
    if ( *(uint32_t *)(a1 + 36) != 0 )
    {
      ERR_put_error(37, 129, 110, &unk_1B15112, 0);
      return 0;
    }
    else
    {
      v3 = strlen(s);
      v4 = (char *)(CRYPTO_malloc(v3 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
      if ( v4 != nullptr )
      {
        v5 = strlen(s);
        BUF_strlcpy(v4, s, v5 + 1);
        if ( *(uint32_t *)(a1 + 32) != 0 )
          CRYPTO_free(*(void **)(a1 + 32));
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v4);
        return 1;
      }
      else
      {
        ERR_put_error(37, 129, 65, &unk_1B15112, 0);
        return 0;
      }
    }
  }
  else
  {
    ERR_put_error(37, 129, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DSO_load  (binary VA: 0x199c1d0)
// Original: DSO_load
// ----------------------------------------------------------------------------
int * DSO_load(int *a1, char *a2, int a3, int a4)
{
  int *v4;
  int v5;
  int (*v7)(int *);
  int *v8;

  v4 = a1;
  v5 = 0;
  if ( a1 == nullptr )
  {
    v4 = DSO_new_method(a3);
    if ( v4 == nullptr )
    {
      ERR_put_error(37, 112, 65, &unk_1B15112, 0);
      return v4;
    }
    v5 = 1;
    if ( DSO_ctrl(v4, 2, a4, 0) < 0 )
    {
      ERR_put_error(37, 112, 100, &unk_1B15112, 0);
      goto LABEL_16;
    }
  }
  if ( v4[8] != 0 )
  {
    ERR_put_error(37, 112, 110, &unk_1B15112, 0);
  }
  else
  {
    if ( a2 == nullptr )
      goto LABEL_19;
    if ( DSO_set_filename((int)(uintptr_t)(v4), a2) == 0 )
    {
      ERR_put_error(37, 112, 112, &unk_1B15112, 0);
      goto LABEL_4;
    }
    if ( v4[8] == 0 )
    {
LABEL_19:
      ERR_put_error(37, 112, 111, &unk_1B15112, 0);
      goto LABEL_4;
    }
    v7 = *(int (**)(int *))(*v4 + 4);
    if ( v7 != nullptr )
    {
      if ( v7(v4) != 0 )
        return v4;
      ERR_put_error(37, 112, 103, &unk_1B15112, 0);
    }
    else
    {
      ERR_put_error(37, 112, 108, &unk_1B15112, 0);
    }
  }
LABEL_4:
  if ( v5 != 0 )
  {
LABEL_16:
    v8 = v4;
    v4 = nullptr;
    DSO_free(v8);
    return v4;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: DSO_merge  (binary VA: 0x199c430)
// Original: DSO_merge
// ----------------------------------------------------------------------------
int DSO_merge(int a1, int a2, int a3)
{
  int result;
  int (*v4)(int, int, int);

  if ( a2 != 0 && a1 != 0 )
  {
    result = 0;
    if ( (*(uint8_t *)(a1 + 12) & 1) == 0 )
    {
      v4 = *(int (**)(int, int, int))(a1 + 28);
      if ( v4 != nullptr )
        return v4(a1, a2, a3);
      v4 = *(int (**)(int, int, int))(*(uint32_t *)a1 + 28);
      if ( v4 != nullptr )
        return v4(a1, a2, a3);
    }
  }
  else
  {
    ERR_put_error(37, 132, 67, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DSO_convert_filename  (binary VA: 0x199c4e0)
// Original: DSO_convert_filename
// ----------------------------------------------------------------------------
char * DSO_convert_filename(int a1, char *a2)
{
  char *s;
  int (*v3)(int, char *);
  char *v4;
  size_t v6;
  size_t v7;

  s = a2;
  if ( a1 != 0 )
  {
    if ( a2 != nullptr || (s = *(char **)(a1 + 32)) != nullptr )
    {
      if ( (*(uint8_t *)(a1 + 12) & 1) != 0
        || (v3 = *(int (**)(int, char *))(a1 + 24)) == nullptr
        && (v3 = *(int (**)(int, char *))(*(uint32_t *)a1 + 24)) == nullptr
        || (v4 = (char *)v3(a1, s)) == nullptr )
      {
        v6 = strlen(s);
        v4 = (char *)(CRYPTO_malloc(v6 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
        if ( v4 != nullptr )
        {
          v7 = strlen(s);
          BUF_strlcpy(v4, s, v7 + 1);
        }
        else
        {
          ERR_put_error(37, 126, 65, &unk_1B15112, 0);
        }
      }
    }
    else
    {
      v4 = nullptr;
      ERR_put_error(37, 126, 111, &unk_1B15112, 0);
    }
  }
  else
  {
    v4 = nullptr;
    ERR_put_error(37, 126, 67, &unk_1B15112, 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: DSO_get_loaded_filename  (binary VA: 0x199c660)
// Original: DSO_get_loaded_filename
// ----------------------------------------------------------------------------
int DSO_get_loaded_filename(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 36);
  ERR_put_error(37, 128, 67, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: DSO_pathbyaddr  (binary VA: 0x199c6c0)
// Original: DSO_pathbyaddr
// ----------------------------------------------------------------------------
int DSO_pathbyaddr(int a1, int a2, int a3)
{
  int v3;
  int (*v4)(int, int, int);

  v3 = dword_21405EC;
  if ( dword_21405EC == 0 )
    v3 = DSO_METHOD_openssl();
  v4 = *(int (**)(int, int, int))(v3 + 40);
  if ( v4 != nullptr )
    return v4(a1, a2, a3);
  ERR_put_error(37, 140, 108, &unk_1B15112, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: DSO_global_lookup  (binary VA: 0x199c740)
// Original: DSO_global_lookup
// ----------------------------------------------------------------------------
int DSO_global_lookup(int a1)
{
  int v1;
  int (*v2)(int);

  v1 = dword_21405EC;
  if ( dword_21405EC == 0 )
    v1 = DSO_METHOD_openssl();
  v2 = *(int (**)(int))(v1 + 44);
  if ( v2 != nullptr )
    return v2(a1);
  ERR_put_error(37, 139, 108, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: DSO_METHOD_openssl  (binary VA: 0x199c7b0)
// Original: DSO_METHOD_openssl
// ----------------------------------------------------------------------------
int DSO_METHOD_openssl()
{
  return (int)(uintptr_t)(DSO_METHOD_dlfcn());
}

// ----------------------------------------------------------------------------
// Function: sub_199C7D0  (binary VA: 0x199c7d0)
// Original: sub_199C7D0
// ----------------------------------------------------------------------------
int sub_199C7D0(int a1, int a2)
{
  return i2d_ECPrivateKey(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_199C800  (binary VA: 0x199c800)
// Original: sub_199C800
// ----------------------------------------------------------------------------
int sub_199C800(int a1)
{
  return ((EC_KEY_free(*(void **)(a1 + 20))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_199C830  (binary VA: 0x199c830)
// Original: sub_199C830
// ----------------------------------------------------------------------------
bool sub_199C830(int a1)
{
  return EC_KEY_get0_group(*(uint32_t *)(a1 + 20)) == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_199C860  (binary VA: 0x199c860)
// Original: sub_199C860
// ----------------------------------------------------------------------------
int sub_199C860(uint32_t *a1, int a2, size_t a3, int a4)
{
  void **v5;
  int v6;
  int conv_form;
  void **v8;
  void **v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  int v14;
  uint8_t *v15;
  void **v16;
  void **v18;
  int order;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  void **v32;
  void **v33;
  void **v34;
  void **v35;
  void **v36;
  void *v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v42;
  const char *v43;

  if ( a2 == 0 || (v40 = EC_KEY_get0_group(a2)) == 0 )
  {
    v5 = nullptr;
    v16 = nullptr;
    v9 = nullptr;
    v38 = 67;
    v15 = nullptr;
    goto LABEL_14;
  }
  v5 = (void **)BN_CTX_new();
  if ( v5 == nullptr )
  {
    v16 = nullptr;
    v9 = nullptr;
    v38 = 65;
    v15 = nullptr;
    goto LABEL_14;
  }
  if ( a4 <= 0 )
  {
    v42 = nullptr;
    v9 = nullptr;
    v15 = nullptr;
    v43 = "ECDSA-Parameters";
  }
  else
  {
    v6 = EC_KEY_get0_public_key(a2);
    conv_form = EC_KEY_get_conv_form(a2);
    v8 = (void **)EC_POINT_point2bn(v40, v6, conv_form, 0, v5);
    v9 = v8;
    if ( v8 == nullptr )
    {
      v16 = nullptr;
      v38 = 16;
      v15 = nullptr;
      goto LABEL_14;
    }
    v10 = BN_num_bits(v8);
    v11 = v10 + 14;
    v12 = v10 + 7 < 0;
    v13 = v10 + 7;
    v42 = nullptr;
    if ( !v12 )
      v11 = v13;
    v14 = v11 >> 3;
    if ( a4 == 2 )
    {
      v37 = (void *)v14;
      v27 = (uint32_t *)EC_KEY_get0_private_key(a2);
      v42 = v27;
      v14 = (int)(uintptr_t)(v37);
      if ( v27 != nullptr )
      {
        v28 = BN_num_bits(v27);
        v29 = v28 + 14;
        v12 = v28 + 7 < 0;
        v30 = v28 + 7;
        v14 = (int)(uintptr_t)(v37);
        if ( v12 )
          v30 = v29;
        v31 = v30 >> 3;
        if ( (unsigned int)(uintptr_t)(v37) < v31 )
          v14 = v31;
      }
    }
    v15 = CRYPTO_malloc(v14 + 10, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v15 == nullptr )
    {
      v16 = nullptr;
      v38 = 65;
      goto LABEL_14;
    }
    v43 = "Private-Key";
    if ( a4 != 2 )
    {
      if ( a4 == 1 )
        v43 = "Public-Key";
      else
        v43 = "ECDSA-Parameters";
    }
  }
  if ( BIO_indent(a1, a3, 128) == 0 )
  {
    v16 = nullptr;
    v38 = 32;
LABEL_14:
    v32 = v16;
    ERR_put_error(16, 221, v38, &unk_1B15112, 0);
    v39 = 0;
    v16 = v32;
    goto LABEL_15;
  }
  v18 = (void **)BN_new();
  v16 = v18;
  if ( v18 != nullptr )
  {
    v34 = v18;
    order = EC_GROUP_get_order(v40, v18);
    v38 = 32;
    v16 = v34;
    if ( order == 0 )
      goto LABEL_14;
    v20 = BN_num_bits(v34);
    v23 = BIO_printf(v21, v22, (int)(uintptr_t)(a1), "%s: (%d bit)\n", v43, v20);
    v16 = v34;
    if ( v23 <= 0 )
      goto LABEL_14;
    if ( v42 != nullptr )
    {
      v24 = ASN1_bn_print(a1, "priv:", v42, v15, a3);
      v16 = v34;
      if ( v24 == 0 )
        goto LABEL_14;
    }
    if ( v9 != nullptr )
    {
      v35 = v16;
      v25 = ASN1_bn_print(a1, "pub: ", v9, v15, a3);
      v38 = 32;
      v16 = v35;
      if ( v25 == 0 )
        goto LABEL_14;
    }
    v36 = v16;
    v26 = ECPKParameters_print((int)(uintptr_t)(a1), v40, a3);
    v39 = 1;
    v16 = v36;
    if ( v26 != 0 )
    {
LABEL_15:
      if ( v9 != nullptr )
      {
        v33 = v16;
        BN_free(v9);
        v16 = v33;
      }
      if ( v16 != nullptr )
        BN_free(v16);
      if ( v5 != nullptr )
        BN_CTX_free(v5);
      if ( v15 != nullptr )
        CRYPTO_free(v15);
      return v39;
    }
  }
  v38 = 32;
  goto LABEL_14;
}

// ----------------------------------------------------------------------------
// Function: sub_199CC70  (binary VA: 0x199cc70)
// Original: sub_199CC70
// ----------------------------------------------------------------------------
int sub_199CC70(uint32_t *a1, int a2, size_t a3)
{
  return sub_199C860(a1, *(uint32_t *)(a2 + 20), a3, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_199CC90  (binary VA: 0x199cc90)
// Original: sub_199CC90
// ----------------------------------------------------------------------------
int sub_199CC90(uint32_t *a1, int a2, size_t a3)
{
  return sub_199C860(a1, *(uint32_t *)(a2 + 20), a3, 2);
}

// ----------------------------------------------------------------------------
// Function: sub_199CCB0  (binary VA: 0x199ccb0)
// Original: sub_199CCB0
// ----------------------------------------------------------------------------
int sub_199CCB0(uint32_t *a1, int a2, size_t a3)
{
  return sub_199C860(a1, *(uint32_t *)(a2 + 20), a3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_199CCD0  (binary VA: 0x199ccd0)
// Original: sub_199CCD0
// ----------------------------------------------------------------------------
bool sub_199CCD0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = EC_KEY_get0_group(*(uint32_t *)(a1 + 20));
  v3 = EC_KEY_get0_group(*(uint32_t *)(a2 + 20));
  return EC_GROUP_cmp(v2, v3, nullptr) == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_199CD30  (binary VA: 0x199cd30)
// Original: sub_199CD30
// ----------------------------------------------------------------------------
int sub_199CD30(int a1, int a2)
{
  int v2;
  int v3;
  void *v4;
  void *v5;

  v2 = 0;
  v3 = EC_KEY_get0_group(*(uint32_t *)(a2 + 20));
  v4 = (void *)EC_GROUP_dup(v3);
  v5 = v4;
  if ( v4 != nullptr && EC_KEY_set_group(*(uint32_t *)(a1 + 20), v4) != 0 )
  {
    LOWORD(v2) = 1;
    EC_GROUP_free(v5);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_199CDB0  (binary VA: 0x199cdb0)
// Original: sub_199CDB0
// ----------------------------------------------------------------------------
int sub_199CDB0(int a1, int a2)
{
  return i2d_ECParameters(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_199CDE0  (binary VA: 0x199cde0)
// Original: sub_199CDE0
// ----------------------------------------------------------------------------
int sub_199CDE0(int a1)
{
  int v1;
  int v2;
  void **v3;
  int v4;
  int v6;

  v3 = (void **)BN_new();
  if ( v3 != nullptr && (v4 = EC_KEY_get0_group(*(uint32_t *)(a1 + 20)), EC_GROUP_get_order(v4, v3) != 0) )
  {
    v6 = BN_num_bits(v3);
    BN_free(v3);
    return v6;
  }
  else
  {
    ERR_clear_error(v2, v1);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_199CE60  (binary VA: 0x199ce60)
// Original: sub_199CE60
// ----------------------------------------------------------------------------
int sub_199CE60(int a1)
{
  return ECDSA_size(*(uint32_t *)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: sub_199CE90  (binary VA: 0x199ce90)
// Original: sub_199CE90
// ----------------------------------------------------------------------------
int sub_199CE90(int a1, uint32_t *a2)
{
  int v2;
  int v4;
  void *v5;
  void *v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v9)) > _g4_s1 ? (60u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 60u);

  if ( a1 == 16 )
  {
    v9 = a2[2];
    v2 = d2i_ECParameters(0, &v9, *a2);
    if ( v2 == 0 )
      ERR_put_error(16, 220, 142, &unk_1B15112, 0);
  }
  else if ( a1 == 6 )
  {
    v2 = (int)(uintptr_t)(EC_KEY_new());
    if ( v2 != 0 )
    {
      v4 = OBJ_obj2nid(a2);
      v5 = (void *)EC_GROUP_new_by_curve_name(v4);
      v6 = v5;
      if ( v5 != nullptr && (EC_GROUP_set_asn1_flag(v5, 1), EC_KEY_set_group(v2, v6) != 0) )
      {
        EC_GROUP_free(v6);
      }
      else
      {
        v7 = (void *)v2;
        v2 = 0;
        EC_KEY_free(v7);
      }
    }
    else
    {
      ERR_put_error(16, 220, 65, &unk_1B15112, 0);
    }
  }
  else
  {
    v2 = 0;
    ERR_put_error(16, 220, 142, &unk_1B15112, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_199D010  (binary VA: 0x199d010)
// Original: sub_199D010
// ----------------------------------------------------------------------------
int sub_199D010(char *a1, int a2)
{
  int v2;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v10)) > _g4_s1 ? (40u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v13)) > _g4_s4 ? (52u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v14)) > _g4_s5 ? (56u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v15)) > _g4_s6 ? (60u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);

  v10 = 0;
  v14 = nullptr;
  v2 = 0;
  if ( PKCS8_pkey_get0(nullptr, &v10, &v13, &v15, a2) == 0 )
    return v2;
  X509_ALGOR_get0(nullptr, &v12, &v11, v15);
  v14 = (void *)sub_199CE90(v12, v11);
  if ( v14 == nullptr )
  {
LABEL_13:
    ERR_put_error(16, 213, 16, &unk_1B15112, 0);
    goto LABEL_14;
  }
  if ( d2i_ECPrivateKey(&v14, &v10, v13) != 0 )
  {
    if ( EC_KEY_get0_public_key(v14) != 0 )
    {
LABEL_6:
      v2 = 1;
      EVP_PKEY_assign(a1, 0x198u, (int)(uintptr_t)(v14));
      return v2;
    }
    v4 = EC_KEY_get0_group(v14);
    v5 = (char *)EC_POINT_new(v4);
    if ( v5 != nullptr )
    {
      v6 = EC_GROUP_get0_generator(v4);
      if ( EC_POINT_copy(v5, v6) != 0 )
      {
        v7 = EC_KEY_get0_private_key(v14);
        if ( EC_POINT_mul(v4, v5, v7, 0, 0, 0) != 0 )
        {
          v8 = EC_KEY_set_public_key(v14, v5);
          v9 = v5;
          if ( v8 != 0 )
          {
            EC_POINT_free(v5);
            goto LABEL_6;
          }
        }
        else
        {
          v9 = v5;
        }
        EC_POINT_free(v9);
      }
      else
      {
        EC_POINT_free(v5);
      }
    }
    ERR_put_error(16, 213, 16, &unk_1B15112, 0);
    goto LABEL_13;
  }
  ERR_put_error(16, 213, 142, &unk_1B15112, 0);
LABEL_14:
  v2 = 0;
  if ( v14 != nullptr )
    EC_KEY_free(v14);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_199D280  (binary VA: 0x199d280)
// Original: sub_199D280
// ----------------------------------------------------------------------------
int sub_199D280(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = EC_KEY_get0_group(*(uint32_t *)(a2 + 20));
  v3 = EC_KEY_get0_public_key(*(uint32_t *)(a1 + 20));
  v4 = EC_KEY_get0_public_key(*(uint32_t *)(a2 + 20));
  v5 = EC_POINT_cmp(v2, v3, v4, 0);
  v6 = 1;
  if ( v5 != 0 )
    return 2 * (v5 == 1) - 2;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_199D310  (binary VA: 0x199d310)
// Original: sub_199D310
// ----------------------------------------------------------------------------
int sub_199D310(char *a1, int a2, int a3)
{
  int v3;

  v3 = (int)(uintptr_t)(d2i_ECPrivateKey(0, a2, a3));
  if ( v3 != 0 )
  {
    EVP_PKEY_assign(a1, 0x198u, v3);
    return 1;
  }
  else
  {
    ERR_put_error(16, 222, 142, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_199D3A0  (binary VA: 0x199d3a0)
// Original: sub_199D3A0
// ----------------------------------------------------------------------------
int sub_199D3A0(int a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int *_g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  if ( a2 == 3 )
  {
    *a4 = 64;
    return 2;
  }
  if ( a2 == 5 )
  {
    v4 = 1;
    if ( a3 != 0 )
      return v4;
    CMS_SignerInfo_get0_algs(a4, 0, 0, &v12, v13);
    v6 = v12;
    if ( v12 == nullptr )
      return -1;
  }
  else
  {
    v4 = -2;
    if ( a2 != 1 )
      return v4;
    v4 = 1;
    if ( a3 != 0 )
      return v4;
    PKCS7_SIGNER_INFO_get0_algs(a4, 0, &v12, v13);
    v6 = v12;
    if ( v12 == nullptr )
      return -1;
  }
  v7 = *v6;
  if ( v7 == 0 )
    return -1;
  v4 = -1;
  v8 = OBJ_obj2nid(v7);
  if ( v8 != 0 )
  {
    v9 = EVP_PKEY_id(a1);
    if ( OBJ_find_sigid_by_algs(&v11, v8, v9) != 0 )
    {
      v4 = 1;
      v10 = (int)(uintptr_t)(OBJ_nid2obj(v11));
      X509_ALGOR_set0(v13[0], v10, -1, 0);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_199D500  (binary VA: 0x199d500)
// Original: sub_199D500
// ----------------------------------------------------------------------------
int sub_199D500(char *a1, int a2, int a3)
{
  int v3;

  v3 = d2i_ECParameters(0, a2, a3);
  if ( v3 != 0 )
  {
    EVP_PKEY_assign(a1, 0x198u, v3);
    return 1;
  }
  else
  {
    ERR_put_error(16, 212, 16, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_199D590  (binary VA: 0x199d590)
// Original: sub_199D590
// ----------------------------------------------------------------------------
int sub_199D590(uint32_t *a1, void ***a2, int a3)
{
  int v3;
  int v4;
  int curve_name;
  void **v6;
  int v7;
  void **v8;
  int v9;

  if ( a3 != 0 && (v3 = EC_KEY_get0_group(a3), v4 = v3, v3 != 0) )
  {
    if ( EC_GROUP_get_asn1_flag(v3) != 0 && (curve_name = EC_GROUP_get_curve_name(v4)) != 0 )
    {
      v7 = 1;
      *a2 = (void **)OBJ_nid2obj(curve_name);
      *a1 = 6;
    }
    else
    {
      v6 = (void **)ASN1_STRING_new();
      v7 = 0;
      v8 = v6;
      if ( v6 != nullptr )
      {
        v9 = i2d_ECParameters(a3, v6 + 2);
        *v8 = (void *)v9;
        if ( v9 < 0 )
        {
          ASN1_STRING_free(v8);
          ERR_put_error(16, 223, 16, &unk_1B15112, 0);
        }
        else
        {
          v7 = 1;
          *a2 = v8;
          *a1 = 16;
        }
      }
    }
  }
  else
  {
    v7 = 0;
    ERR_put_error(16, 223, 124, &unk_1B15112, 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_199D6E0  (binary VA: 0x199d6e0)
// Original: sub_199D6E0
// ----------------------------------------------------------------------------
bool sub_199D6E0(uint32_t *a1, int a2)
{
  int v2;
  int enc_flags;
  int v4;
  int v5;
  void **v6;
  int v7;
  int v8;
  typedef uint8_t *_g4_t_v10;
  typedef uint8_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef void **_g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v2 = *(uint32_t *)(a2 + 20);
  if ( sub_199D590(&v12, &v13, v2) != 0 )
  {
    enc_flags = EC_KEY_get_enc_flags(v2);
    EC_KEY_set_enc_flags(v2, enc_flags | 1);
    v4 = i2d_ECPrivateKey(v2, 0);
    v5 = v4;
    if ( v4 != 0 )
    {
      v10 = CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v10 != nullptr )
      {
        v11 = v10;
        if ( i2d_ECPrivateKey(v2, &v11) == 0 )
        {
          EC_KEY_set_enc_flags(v2, enc_flags);
          CRYPTO_free(v10);
          ERR_put_error(16, 214, 16, &unk_1B15112, 0);
        }
        EC_KEY_set_enc_flags(v2, enc_flags);
        v6 = v13;
        v7 = v12;
        v8 = (int)(uintptr_t)(OBJ_nid2obj(408));
        return PKCS8_pkey_set0(a1, v8, 0, v7, (int)(uintptr_t)(v6), (int)(uintptr_t)(v10), v5) != 0;
      }
      else
      {
        EC_KEY_set_enc_flags(v2, enc_flags);
        ERR_put_error(16, 214, 65, &unk_1B15112, 0);
        return false;
      }
    }
    else
    {
      EC_KEY_set_enc_flags(v2, enc_flags);
      ERR_put_error(16, 214, 16, &unk_1B15112, 0);
      return false;
    }
  }
  else
  {
    ERR_put_error(16, 214, 142, &unk_1B15112, 0);
    return false;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_199D910  (binary VA: 0x199d910)
// Original: sub_199D910
// ----------------------------------------------------------------------------
int sub_199D910(int a1, int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef void *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v2 = *(uint32_t *)(a2 + 20);
  v13 = nullptr;
  if ( sub_199D590(&v14, (void ***)&v13, v2) == 0 )
  {
    v10 = 0;
    ERR_put_error(16, 216, 16, &unk_1B15112, 0);
    return v10;
  }
  v3 = i2o_ECPublicKey(v2, 0);
  if ( v3 <= 0 )
  {
    v5 = nullptr;
  }
  else
  {
    v4 = CRYPTO_malloc(v3, (int)(uintptr_t)(&unk_1B15112), 0);
    v5 = v4;
    if ( v4 != nullptr )
    {
      v15 = v4;
      v6 = i2o_ECPublicKey(v2, &v15);
      if ( v6 > 0 )
      {
        v7 = v14;
        v12 = v13;
        v8 = (int)(uintptr_t)(OBJ_nid2obj(408));
        v9 = X509_PUBKEY_set0_param(a1, v8, v7, v12, v5, v6);
        v10 = 1;
        if ( v9 != 0 )
          return v10;
      }
    }
  }
  if ( v14 == 6 )
    ASN1_OBJECT_free(v13);
  else
    ASN1_STRING_free((void **)v13);
  v10 = 0;
  if ( v5 != nullptr )
    CRYPTO_free(v5);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: sub_199DA80  (binary VA: 0x199da80)
// Original: sub_199DA80
// ----------------------------------------------------------------------------
int sub_199DA80(char *a1, int a2)
{
  int v2;
  typedef int _g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v9)) > _g4_s5 ? (28u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v4 = 0;
  v8 = nullptr;
  v2 = 0;
  if ( X509_PUBKEY_get0_param(0, &v4, &v7, &v9, a2) != 0 )
  {
    X509_ALGOR_get0(nullptr, &v6, &v5, v9);
    v8 = (void *)sub_199CE90(v6, v5);
    if ( v8 != nullptr )
    {
      if ( o2i_ECPublicKey(&v8, &v4, v7) != 0 )
      {
        v2 = 1;
        EVP_PKEY_assign(a1, 0x198u, (int)(uintptr_t)(v8));
      }
      else
      {
        ERR_put_error(16, 215, 142, &unk_1B15112, 0);
        if ( v8 != nullptr )
          EC_KEY_free(v8);
      }
    }
    else
    {
      ERR_put_error(16, 215, 16, &unk_1B15112, 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_199DBF0  (binary VA: 0x199dbf0)
// Original: sub_199DBF0
// ----------------------------------------------------------------------------
uint32_t * sub_199DBF0(int *a1)
{
  int v1;
  uint32_t *v2;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int *v9;
  uint8_t *v10;
  int v11;
  void **v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  void **v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  uint8_t *v23;
  int v24;
  void **v25;
  void **v26;
  int *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  void **v36;
  int v37;
  void *dest;
  size_t n;
  void **v40;
  uint32_t *v41;
  void **v42;
  uint32_t *v43;
  void **v44;
  void **v45;
  void **v46;
  void **v47;
  int *v48;
  int v49;
  void **v50;
  void *v51;
  int v52;

  if ( a1 == nullptr )
  {
    v2 = nullptr;
    ERR_put_error(16, 158, 124, &unk_1B15112, 0);
    return v2;
  }
  v1 = *a1;
  if ( *a1 == 0 )
  {
    v4 = OBJ_obj2nid(a1[1]);
    v5 = (uint32_t *)EC_GROUP_new_by_curve_name(v4);
    v2 = v5;
    if ( v5 != nullptr )
      EC_GROUP_set_asn1_flag(v5, 1);
    else
      ERR_put_error(16, 158, 119, &unk_1B15112, 0);
    return v2;
  }
  if ( v1 != 1 )
  {
    v2 = nullptr;
    if ( v1 != 2 )
      ERR_put_error(16, 158, 115, &unk_1B15112, 0);
    return v2;
  }
  v6 = a1[1];
  v7 = *(uint32_t **)(v6 + 4);
  if ( v7 == nullptr
    || *v7 == 0
    || v7[1] == 0
    || (v8 = *(uint32_t *)(v6 + 8)) == 0
    || (v9 = *(int **)v8, *(uint32_t *)v8 == 0)
    || (v10 = (uint8_t *)v9[2]) == nullptr
    || (v11 = *(uint32_t *)(v8 + 4)) == 0
    || *(uint32_t *)(v11 + 8) == 0 )
  {
    v12 = nullptr;
    ERR_put_error(16, 157, 115, &unk_1B15112, 0);
    v50 = nullptr;
    v17 = nullptr;
    goto LABEL_28;
  }
  v12 = BN_bin2bn(v10, *v9, nullptr);
  if ( v12 == nullptr )
  {
    ERR_put_error(16, 157, 3, &unk_1B15112, 0);
    v50 = nullptr;
    v17 = nullptr;
    goto LABEL_28;
  }
  v50 = BN_bin2bn(
          *(uint8_t **)(*(uint32_t *)(*(uint32_t *)(v6 + 8) + 4) + 8),
          **(uint32_t **)(*(uint32_t *)(v6 + 8) + 4),
          nullptr);
  if ( v50 == nullptr )
  {
    ERR_put_error(16, 157, 3, &unk_1B15112, 0);
    v17 = nullptr;
    goto LABEL_28;
  }
  v13 = OBJ_obj2nid(**(uint32_t **)(v6 + 4));
  if ( v13 == 407 )
  {
    v18 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + 4);
    v52 = *(uint32_t *)v18;
    if ( *(int *)v18 > 661 )
    {
      ERR_put_error(16, 157, 143, &unk_1B15112, 0);
      v17 = nullptr;
      goto LABEL_28;
    }
    v16 = BN_new();
    if ( v16 == nullptr )
    {
      n = 65;
      goto LABEL_26;
    }
    v41 = v16;
    v19 = OBJ_obj2nid(*(uint32_t *)(v18 + 4));
    v16 = v41;
    if ( v19 == 682 )
    {
      if ( *(uint32_t *)(v18 + 8) == 0 )
      {
        ERR_put_error(16, 157, 115, &unk_1B15112, 0);
        v17 = (void **)v41;
        goto LABEL_28;
      }
      v20 = ASN1_INTEGER_get(*(int **)(v18 + 8));
      v16 = v41;
      v21 = *(uint32_t *)v18;
      if ( v20 <= 0 || v20 >= v21 )
      {
        n = 137;
        goto LABEL_26;
      }
      v49 = v20;
      v34 = BN_set_bit(v41, v21);
      v17 = (void **)v41;
      if ( v34 == 0 )
        goto LABEL_28;
      v32 = BN_set_bit(v41, v49);
    }
    else
    {
      if ( v19 != 683 )
      {
        if ( v19 == 681 )
          n = 126;
        else
          n = 115;
        goto LABEL_26;
      }
      v27 = *(int **)(v18 + 8);
      if ( v27 == nullptr )
      {
        n = 115;
        goto LABEL_26;
      }
      v28 = *(uint32_t *)v18;
      if ( v28 <= v27[2] || v27[2] <= v27[1] || v27[1] <= *v27 || *v27 <= 0 )
      {
        n = 132;
        goto LABEL_26;
      }
      v48 = v27;
      v29 = BN_set_bit(v41, v28);
      v17 = (void **)v41;
      if ( v29 == 0 )
        goto LABEL_28;
      v30 = BN_set_bit(v41, *v48);
      v17 = (void **)v41;
      if ( v30 == 0 )
        goto LABEL_28;
      v31 = BN_set_bit(v41, v48[1]);
      v17 = (void **)v41;
      if ( v31 == 0 )
        goto LABEL_28;
      v32 = BN_set_bit(v41, v48[2]);
    }
    v17 = (void **)v41;
    if ( v32 == 0 )
      goto LABEL_28;
    v33 = BN_set_bit(v41, 0);
    v17 = (void **)v41;
    if ( v33 == 0 )
      goto LABEL_28;
    v2 = (uint32_t *)EC_GROUP_new_curve_GF2m(v41, v12, v50, 0);
    v16 = v41;
LABEL_60:
    if ( v2 == nullptr )
    {
      n = 16;
      goto LABEL_26;
    }
    if ( *(uint32_t *)(*(uint32_t *)(v6 + 8) + 8) != 0 )
    {
      v22 = (void *)v2[15];
      if ( v22 != nullptr )
      {
        v43 = v16;
        CRYPTO_free(v22);
        v16 = v43;
      }
      v44 = (void **)v16;
      v23 = CRYPTO_malloc(**(uint32_t **)(*(uint32_t *)(v6 + 8) + 8), (int)(uintptr_t)(&unk_1B15112), 0);
      v2[15] = (uint32_t)(uintptr_t)(v23);
      if ( v23 == nullptr )
      {
        ERR_put_error(16, 157, 65, &unk_1B15112, 0);
        v51 = nullptr;
        v25 = v44;
        goto LABEL_75;
      }
      memcpy(v23, *(const void **)(*(uint32_t *)(*(uint32_t *)(v6 + 8) + 8) + 8), **(uint32_t **)(*(uint32_t *)(v6 + 8) + 8));
      v2[16] = **(uint32_t **)(*(uint32_t *)(v6 + 8) + 8);
      v16 = (uint32_t *)(v44);
    }
    if ( *(uint32_t *)(v6 + 16) != 0 && (v24 = *(uint32_t *)(v6 + 12)) != 0 && *(uint32_t *)(v24 + 8) != 0 )
    {
      v45 = (void **)v16;
      v51 = (void *)EC_POINT_new(v2);
      v25 = v45;
      if ( v51 != nullptr )
      {
        EC_GROUP_set_point_conversion_form(v2, **(uint8_t **)(*(uint32_t *)(v6 + 12) + 8) & 0xFE);
        if ( EC_POINT_oct2point(v2, v51, *(uint32_t *)(*(uint32_t *)(v6 + 12) + 8), **(uint32_t **)(v6 + 12), 0) == 0 )
        {
LABEL_99:
          ERR_put_error(16, 157, 16, &unk_1B15112, 0);
          v25 = v45;
          goto LABEL_75;
        }
        v26 = (void **)ASN1_INTEGER_to_BN(*(uint32_t **)(v6 + 16), (int)(uintptr_t)(v12));
        v12 = v26;
        if ( v26 == nullptr )
          goto LABEL_104;
        if ( v26[3] == nullptr && v26[1] != nullptr && BN_num_bits(v26) <= v52 + 1 )
        {
          v35 = *(uint32_t **)(v6 + 20);
          if ( v35 == nullptr )
          {
            BN_free(v50);
            v50 = nullptr;
            v36 = v45;
LABEL_98:
            v45 = v36;
            v37 = EC_GROUP_set_generator(v2, v51, v12, v50);
            v17 = v45;
            if ( v37 != 0 )
              goto LABEL_29;
            goto LABEL_99;
          }
          v50 = (void **)ASN1_INTEGER_to_BN(v35, (int)(uintptr_t)(v50));
          v36 = v45;
          if ( v50 != nullptr )
            goto LABEL_98;
LABEL_104:
          ERR_put_error(16, 157, 13, &unk_1B15112, 0);
          v25 = v45;
          goto LABEL_75;
        }
        ERR_put_error(16, 157, 122, &unk_1B15112, 0);
        v25 = v45;
      }
    }
    else
    {
      v47 = (void **)v16;
      ERR_put_error(16, 157, 115, &unk_1B15112, 0);
      v51 = nullptr;
      v25 = v47;
    }
LABEL_75:
    dest = v2;
    v46 = v25;
    v2 = nullptr;
    EC_GROUP_clear_free(dest);
    v17 = v46;
    goto LABEL_29;
  }
  if ( v13 != 406 )
  {
    ERR_put_error(16, 157, 103, &unk_1B15112, 0);
    v17 = nullptr;
    goto LABEL_28;
  }
  v14 = *(uint32_t **)(*(uint32_t *)(v6 + 4) + 4);
  if ( v14 == nullptr )
  {
    ERR_put_error(16, 157, 115, &unk_1B15112, 0);
    v17 = nullptr;
    goto LABEL_28;
  }
  v15 = (uint32_t *)ASN1_INTEGER_to_BN(v14, 0);
  v16 = v15;
  if ( v15 == nullptr )
  {
    n = 13;
    goto LABEL_26;
  }
  if ( v15[3] == 0 && v15[1] != 0 )
  {
    v42 = (void **)v15;
    v52 = BN_num_bits(v15);
    if ( v52 > 661 )
    {
      ERR_put_error(16, 157, 143, &unk_1B15112, 0);
      v17 = v42;
      goto LABEL_28;
    }
    v2 = (uint32_t *)EC_GROUP_new_curve_GFp(v42, v12, v50, 0);
    v16 = (uint32_t *)(v42);
    goto LABEL_60;
  }
  n = 103;
LABEL_26:
  v40 = (void **)v16;
  ERR_put_error(16, 157, n, &unk_1B15112, 0);
  v17 = v40;
LABEL_28:
  v51 = nullptr;
  v2 = nullptr;
LABEL_29:
  if ( v17 != nullptr )
    BN_free(v17);
  if ( v12 != nullptr )
    BN_free(v12);
  if ( v50 != nullptr )
    BN_free(v50);
  if ( v51 != nullptr )
    EC_POINT_free(v51);
  if ( v2 != nullptr )
    EC_GROUP_set_asn1_flag(v2, 0);
  else
    ERR_put_error(16, 158, 16, &unk_1B15112, 0);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X9_62_PENTANOMIAL_new  (binary VA: 0x199e900)
// Original: X9_62_PENTANOMIAL_new
// ----------------------------------------------------------------------------
int X9_62_PENTANOMIAL_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X9_62_PENTANOMIAL_it));
}

// ----------------------------------------------------------------------------
// Function: X9_62_PENTANOMIAL_free  (binary VA: 0x199e930)
// Original: X9_62_PENTANOMIAL_free
// ----------------------------------------------------------------------------
int X9_62_PENTANOMIAL_free(char a1)
{
  return ASN1_item_free(a1, X9_62_PENTANOMIAL_it);
}

// ----------------------------------------------------------------------------
// Function: X9_62_CHARACTERISTIC_TWO_new  (binary VA: 0x199e960)
// Original: X9_62_CHARACTERISTIC_TWO_new
// ----------------------------------------------------------------------------
int X9_62_CHARACTERISTIC_TWO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X9_62_CHARACTERISTIC_TWO_it));
}

// ----------------------------------------------------------------------------
// Function: X9_62_CHARACTERISTIC_TWO_free  (binary VA: 0x199e990)
// Original: X9_62_CHARACTERISTIC_TWO_free
// ----------------------------------------------------------------------------
int X9_62_CHARACTERISTIC_TWO_free(char a1)
{
  return ASN1_item_free(a1, X9_62_CHARACTERISTIC_TWO_it);
}

// ----------------------------------------------------------------------------
// Function: ECPARAMETERS_new  (binary VA: 0x199e9c0)
// Original: ECPARAMETERS_new
// ----------------------------------------------------------------------------
int ECPARAMETERS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ECPARAMETERS_it));
}

// ----------------------------------------------------------------------------
// Function: ECPARAMETERS_free  (binary VA: 0x199e9f0)
// Original: ECPARAMETERS_free
// ----------------------------------------------------------------------------
int ECPARAMETERS_free(char a1)
{
  return ASN1_item_free(a1, ECPARAMETERS_it);
}

// ----------------------------------------------------------------------------
// Function: ECPKPARAMETERS_new  (binary VA: 0x199eaa0)
// Original: ECPKPARAMETERS_new
// ----------------------------------------------------------------------------
int ECPKPARAMETERS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ECPKPARAMETERS_it));
}

// ----------------------------------------------------------------------------
// Function: ECPKPARAMETERS_free  (binary VA: 0x199ead0)
// Original: ECPKPARAMETERS_free
// ----------------------------------------------------------------------------
int ECPKPARAMETERS_free(char a1)
{
  return ASN1_item_free(a1, ECPKPARAMETERS_it);
}

// ----------------------------------------------------------------------------
// Function: sub_199EB00  (binary VA: 0x199eb00)
// Original: sub_199EB00
// ----------------------------------------------------------------------------
uint32_t * sub_199EB00(int a1, int a2)
{
  uint32_t *v3;
  int curve_name;
  uint32_t *v6;
  uint32_t *v7;
  void **v8;
  int v9;
  int v10;
  uint32_t *v11;
  int basis_type;
  uint32_t *v13;
  int v14;
  void **v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  size_t v25;
  int v26;
  int v27;
  int v28;
  uint8_t *v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  size_t v36;
  int v37;
  uint32_t *v38;
  int *v39;
  int *v40;
  int v41;
  typedef char _g4_t_v42;
  typedef size_t _g4_t_field_type;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef void **_g4_t_v57;
  typedef void *_g4_t_v58;
  typedef int *_g4_t_v59;
  typedef void **_g4_t_v60;
  typedef void **_g4_t_v61;
  typedef void *_g4_t_point_conversion_form;
  typedef char *_g4_t_s;
  typedef char *_g4_t_v64;
  typedef void *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_field_type)) > _g4_s1 ? (36u + sizeof(_g4_t_field_type)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v44)) > _g4_s2 ? (36u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v45)) > _g4_s3 ? (36u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v46)) > _g4_s4 ? (36u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v47)) > _g4_s5 ? (36u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v48)) > _g4_s6 ? (36u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v49)) > _g4_s7 ? (36u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v50)) > _g4_s8 ? (40u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v51)) > _g4_s9 ? (40u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v52)) > _g4_s10 ? (40u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v53)) > _g4_s11 ? (44u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v54)) > _g4_s12 ? (44u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v55)) > _g4_s13 ? (44u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v56)) > _g4_s14 ? (48u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v57)) > _g4_s15 ? (48u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v58)) > _g4_s16 ? (48u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v59)) > _g4_s17 ? (48u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v60)) > _g4_s18 ? (52u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v61)) > _g4_s19 ? (60u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_point_conversion_form)) > _g4_s20 ? (60u + sizeof(_g4_t_point_conversion_form)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_s)) > _g4_s21 ? (64u + sizeof(_g4_t_s)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v64)) > _g4_s22 ? (64u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v65)) > _g4_s23 ? (68u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v66)) > _g4_s24 ? (72u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v67)) > _g4_s25 ? (76u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v68)) > _g4_s26 ? (84u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v69)) > _g4_s27 ? (88u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v70)) > _g4_s28 ? (92u + sizeof(_g4_t_v70)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_field_type &field_type = *reinterpret_cast<_g4_t_field_type *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_point_conversion_form &point_conversion_form = *reinterpret_cast<_g4_t_point_conversion_form *>(_g4_sf + 60u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);

  if ( a2 != 0 )
  {
    if ( *(uint32_t *)a2 != 0 )
    {
      v3 = (uint32_t *)a2;
      if ( *(uint32_t *)a2 == 1 && *(uint32_t *)(a2 + 4) != 0 )
        ECPARAMETERS_free(*(uint32_t *)(a2 + 4));
    }
    else
    {
      v3 = (uint32_t *)a2;
      if ( *(uint32_t *)(a2 + 4) != 0 )
      {
        ASN1_OBJECT_free(*(void **)(a2 + 4));
        if ( EC_GROUP_get_asn1_flag(a1) != 0 )
          goto LABEL_5;
LABEL_10:
        *v3 = 1;
        v60 = (void **)BN_new();
        if ( v60 == nullptr )
        {
          v7 = nullptr;
          ERR_put_error(16, 155, 65, &unk_1B15112, 0);
          goto LABEL_28;
        }
        v6 = (uint32_t *)ECPARAMETERS_new();
        v7 = v6;
        if ( v6 == nullptr )
        {
          ERR_put_error(16, 155, 65, &unk_1B15112, 0);
          v54 = nullptr;
          goto LABEL_26;
        }
        v8 = (void **)v6[1];
        *v6 = 1;
        v53 = (char *)v8;
        if ( a1 == 0 || v8 == nullptr )
        {
          ERR_put_error(16, 155, 16, &unk_1B15112, 0);
          goto LABEL_24;
        }
        if ( *v8 != nullptr )
          ASN1_OBJECT_free(*v8);
        if ( *((uint32_t *)v53 + 1) != 0 )
          ASN1_TYPE_free(*((uint32_t *)v53 + 1));
        v9 = EC_GROUP_method_of(a1);
        field_type = EC_METHOD_get_field_type(v9);
        v10 = (int)(uintptr_t)(OBJ_nid2obj(field_type));
        *(uint32_t *)v53 = v10;
        if ( v10 == 0 )
          goto LABEL_94;
        if ( field_type != 406 )
        {
          v11 = (uint32_t *)X9_62_CHARACTERISTIC_TWO_new();
          v56 = v11;
          *((uint32_t *)v53 + 1) = (uint32_t)(uintptr_t)(v11);
          if ( v11 == nullptr )
            goto LABEL_91;
          *v11 = EC_GROUP_get_degree(a1);
          basis_type = EC_GROUP_get_basis_type(a1);
          if ( basis_type == 0 )
          {
            ERR_put_error(16, 154, 16, &unk_1B15112, 0);
LABEL_23:
            ERR_put_error(16, 155, 16, &unk_1B15112, 0);
LABEL_24:
            v54 = nullptr;
LABEL_25:
            v42 = (char)(uintptr_t)(v7);
            v7 = nullptr;
            ECPARAMETERS_free(v42);
            goto LABEL_26;
          }
          v45 = basis_type;
          v17 = (int)(uintptr_t)(OBJ_nid2obj(basis_type));
          v56[1] = v17;
          if ( v17 != 0 )
          {
            if ( v45 != 682 )
            {
              if ( v45 != 683 )
              {
                v18 = ASN1_NULL_new();
                v56[2] = v18;
                if ( v18 != 0 )
                  goto LABEL_44;
LABEL_91:
                ERR_put_error(16, 154, 65, &unk_1B15112, 0);
                goto LABEL_23;
              }
              if ( EC_GROUP_get_pentanomial_basis((uint32_t *)a1, &v68, &v69, v70) == 0 )
                goto LABEL_23;
              v38 = (uint32_t *)X9_62_PENTANOMIAL_new();
              v56[2] = (uint32_t)(uintptr_t)(v38);
              if ( v38 != nullptr )
              {
                *v38 = v68;
                *(uint32_t *)(v56[2] + 4) = v69;
                *(uint32_t *)(v56[2] + 8) = v70[0];
                goto LABEL_44;
              }
LABEL_126:
              ERR_put_error(16, 154, 65, &unk_1B15112, 0);
              goto LABEL_23;
            }
            if ( EC_GROUP_get_trinomial_basis((uint32_t *)a1, v70) == 0 )
              goto LABEL_23;
            v41 = ASN1_INTEGER_new();
            v56[2] = v41;
            if ( v41 == 0 )
              goto LABEL_126;
            if ( ASN1_INTEGER_set(v41, v70[0]) == 0 )
            {
              ERR_put_error(16, 154, 13, &unk_1B15112, 0);
              goto LABEL_23;
            }
LABEL_44:
            v19 = (int *)v7[2];
            LOBYTE(v70[0]) = 0;
            v55 = v19;
            if ( v19 == nullptr || *v19 == 0 || v19[1] == 0 )
              goto LABEL_23;
            v61 = (void **)BN_new();
            if ( v61 == nullptr || (v57 = (void **)BN_new()) == nullptr )
            {
              ERR_put_error(16, 153, 65, &unk_1B15112, 0);
              v57 = nullptr;
              goto LABEL_90;
            }
            v20 = EC_GROUP_method_of(a1);
            if ( EC_METHOD_get_field_type(v20) == 406 )
            {
              if ( EC_GROUP_get_curve_GFp(a1, 0, v61, v57, 0) != 0 )
                goto LABEL_51;
            }
            else if ( EC_GROUP_get_curve_GF2m(a1, 0, v61, v57, 0) != 0 )
            {
LABEL_51:
              v21 = BN_num_bits(v61);
              v22 = v21 + 14;
              v23 = v21 + 7;
              if ( v23 >= 0 )
                v22 = v23;
              v46 = v22 >> 3;
              v24 = BN_num_bits(v57);
              v25 = v24;
              if ( v46 == 0 )
              {
                v67 = 1;
                s = (char *)v70;
                v66 = nullptr;
                goto LABEL_55;
              }
              v52 = v24;
              s = (char *)(CRYPTO_malloc(v46, (int)(uintptr_t)(&unk_1B15112), 0));
              if ( s != nullptr )
              {
                v67 = BN_bn2bin(v61, s);
                v66 = s;
                v25 = v52;
                if ( v67 == 0 )
                {
                  ERR_put_error(16, 153, 3, &unk_1B15112, 0);
                  v64 = nullptr;
                  v65 = nullptr;
LABEL_66:
                  CRYPTO_free(v66);
LABEL_67:
                  if ( v65 != nullptr )
                    CRYPTO_free(v65);
                  goto LABEL_69;
                }
LABEL_55:
                v26 = v25 + 14;
                v27 = v25 + 7;
                if ( v27 >= 0 )
                  v26 = v27;
                v28 = v26 >> 3;
                if ( v28 != 0 )
                {
                  v29 = CRYPTO_malloc(v28, (int)(uintptr_t)(&unk_1B15112), 0);
                  if ( v29 == nullptr )
                  {
                    ERR_put_error(16, 153, 65, &unk_1B15112, 0);
                    v65 = nullptr;
                    v64 = nullptr;
                    goto LABEL_65;
                  }
                  v47 = (size_t)v29;
                  v30 = BN_bn2bin(v57, v29);
                  v31 = (int *)v47;
                  v32 = v30;
                  v65 = (void *)v47;
                  if ( v30 == 0 )
                  {
                    ERR_put_error(16, 153, 3, &unk_1B15112, 0);
                    v64 = nullptr;
                    goto LABEL_65;
                  }
                }
                else
                {
                  v32 = 1;
                  v31 = v70;
                  v65 = nullptr;
                }
                v48 = (char *)v31;
                v50 = v32;
                if ( ASN1_STRING_set(*v55, s, v67) != 0 && ASN1_STRING_set(v55[1], v48, v50) != 0 )
                {
                  if ( *(uint32_t *)(a1 + 60) == 0 )
                  {
                    v64 = (char *)((uint8_t *)(&dword_0 + 1));
                    if ( v55[2] != 0 )
                    {
                      ASN1_BIT_STRING_free(v55[2]);
                      v55[2] = 0;
                    }
LABEL_65:
                    if ( v66 == nullptr )
                      goto LABEL_67;
                    goto LABEL_66;
                  }
                  v33 = v55[2];
                  if ( v33 == 0 )
                  {
                    v33 = ASN1_BIT_STRING_new();
                    v55[2] = v33;
                    if ( v33 == 0 )
                    {
                      ERR_put_error(16, 153, 65, &unk_1B15112, 0);
                      v64 = nullptr;
                      goto LABEL_65;
                    }
                  }
                  *(uint32_t *)(v33 + 12) &= 0xFFFFFFF0;
                  *(uint32_t *)(v55[2] + 12) |= 8u;
                  v64 = (char *)((uint8_t *)(&dword_0 + 1));
                  if ( ASN1_BIT_STRING_set(v55[2], *(char **)(a1 + 60), *(uint32_t *)(a1 + 64)) != 0 )
                    goto LABEL_65;
                }
                ERR_put_error(16, 153, 13, &unk_1B15112, 0);
                v64 = nullptr;
                goto LABEL_65;
              }
              ERR_put_error(16, 153, 65, &unk_1B15112, 0);
LABEL_90:
              v64 = nullptr;
LABEL_69:
              if ( v61 != nullptr )
                BN_free(v61);
              if ( v57 != nullptr )
                BN_free(v57);
              if ( v64 == nullptr )
                goto LABEL_23;
              v58 = (void *)EC_GROUP_get0_generator(a1);
              if ( v58 == nullptr )
              {
                ERR_put_error(16, 155, 113, &unk_1B15112, 0);
                v54 = nullptr;
                goto LABEL_25;
              }
              point_conversion_form = (void *)EC_GROUP_get_point_conversion_form(a1);
              v34 = EC_POINT_point2oct(a1, v58, point_conversion_form, 0, 0, 0);
              if ( v34 == 0 )
                goto LABEL_23;
              v49 = v34;
              v54 = (char *)(CRYPTO_malloc(v34, (int)(uintptr_t)(&unk_1B15112), 0));
              if ( v54 == nullptr )
              {
LABEL_116:
                ERR_put_error(16, 155, 65, &unk_1B15112, 0);
                goto LABEL_25;
              }
              v35 = EC_POINT_point2oct(a1, v58, point_conversion_form, v54, v49, 0);
              v36 = v49;
              if ( v35 != 0 )
              {
                v37 = v7[3];
                if ( v37 == 0 )
                {
                  v37 = ASN1_OCTET_STRING_new();
                  v7[3] = v37;
                  v36 = v49;
                  if ( v37 == 0 )
                    goto LABEL_116;
                }
                if ( ASN1_OCTET_STRING_set(v37, v54, v36) == 0 )
                {
LABEL_80:
                  ERR_put_error(16, 155, 13, &unk_1B15112, 0);
                  goto LABEL_25;
                }
                if ( EC_GROUP_get_order(a1, v60) != 0 )
                {
                  v39 = BN_to_ASN1_INTEGER((int)(uintptr_t)(v60), (int *)v7[4]);
                  v7[4] = (uint32_t)(uintptr_t)(v39);
                  if ( v39 == nullptr )
                    goto LABEL_80;
                  if ( EC_GROUP_get_cofactor(a1, v60) != 0 )
                  {
                    v40 = BN_to_ASN1_INTEGER((int)(uintptr_t)(v60), (int *)v7[5]);
                    v7[5] = (uint32_t)(uintptr_t)(v40);
                    if ( v40 == nullptr )
                      goto LABEL_80;
                  }
LABEL_26:
                  BN_free(v60);
                  if ( v54 != nullptr )
                    CRYPTO_free(v54);
LABEL_28:
                  v3[1] = (uint32_t)(uintptr_t)(v7);
                  if ( v7 != nullptr )
                    return v3;
                  goto LABEL_6;
                }
              }
              ERR_put_error(16, 155, 16, &unk_1B15112, 0);
              goto LABEL_25;
            }
            ERR_put_error(16, 153, 16, &unk_1B15112, 0);
            goto LABEL_90;
          }
LABEL_94:
          ERR_put_error(16, 154, 8, &unk_1B15112, 0);
          ERR_put_error(16, 155, 16, &unk_1B15112, 0);
          goto LABEL_24;
        }
        v13 = BN_new();
        if ( v13 == nullptr )
          goto LABEL_91;
        v44 = (size_t)v13;
        if ( EC_GROUP_get_curve_GFp(a1, v13, 0, 0, 0) != 0 )
        {
          v59 = BN_to_ASN1_INTEGER(v44, nullptr);
          *((uint32_t *)v53 + 1) = (uint32_t)(uintptr_t)(v59);
          v14 = 1;
          v15 = (void **)v44;
          if ( v59 != nullptr )
          {
LABEL_84:
            v51 = v14;
            BN_free(v15);
            if ( v51 == 0 )
              goto LABEL_23;
            goto LABEL_44;
          }
          ERR_put_error(16, 154, 13, &unk_1B15112, 0);
        }
        else
        {
          ERR_put_error(16, 154, 16, &unk_1B15112, 0);
        }
        v14 = 0;
        v15 = (void **)v44;
        goto LABEL_84;
      }
    }
  }
  else
  {
    v3 = (uint32_t *)ECPKPARAMETERS_new();
    if ( v3 == nullptr )
    {
      ERR_put_error(16, 156, 65, &unk_1B15112, 0);
      return nullptr;
    }
  }
  if ( EC_GROUP_get_asn1_flag(a1) == 0 )
    goto LABEL_10;
LABEL_5:
  curve_name = EC_GROUP_get_curve_name(a1);
  if ( curve_name == 0 || (*v3 = 0, v16 = (int)(uintptr_t)(OBJ_nid2obj(curve_name)), v3[1] = v16, v16 == 0) )
  {
LABEL_6:
    ECPKPARAMETERS_free((char)(uintptr_t)(v3));
    return nullptr;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: o2i_ECPublicKey  (binary VA: 0x19a0440)
// Original: o2i_ECPublicKey
// ----------------------------------------------------------------------------
uint32_t * o2i_ECPublicKey(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;

  if ( a1 != nullptr && (v3 = (uint32_t *)*a1, *a1 != 0) && (v4 = v3[1]) != 0 )
  {
    v5 = v3[2];
    if ( v5 == 0 )
    {
      v5 = (int)(uintptr_t)(EC_POINT_new(v3[1]));
      v3[2] = v5;
      if ( v5 == 0 )
      {
        v3 = nullptr;
        ERR_put_error(16, 152, 65, &unk_1B15112, 0);
        return v3;
      }
      v4 = v3[1];
    }
    if ( EC_POINT_oct2point(v4, v5, *a2, a3, 0) != 0 )
    {
      v3[5] = *(uint8_t *)*a2 & 0xFE;
      *a2 += a3;
    }
    else
    {
      v3 = nullptr;
      ERR_put_error(16, 152, 16, &unk_1B15112, 0);
    }
  }
  else
  {
    v3 = nullptr;
    ERR_put_error(16, 152, 67, &unk_1B15112, 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: i2o_ECPublicKey  (binary VA: 0x19a0590)
// Original: i2o_ECPublicKey
// ----------------------------------------------------------------------------
int i2o_ECPublicKey(uint32_t *a1, void **a2)
{
  int v2;
  uint8_t *v3;
  int v5;

  if ( a1 != nullptr )
  {
    v2 = EC_POINT_point2oct(a1[1], a1[2], a1[5], 0, 0, 0);
    if ( v2 != 0 && a2 != nullptr )
    {
      v3 = (uint8_t *)(*a2);
      v5 = 0;
      if ( *a2 == nullptr )
      {
        v3 = CRYPTO_malloc(v2, (int)(uintptr_t)(&unk_1B15112), 0);
        *a2 = v3;
        v5 = 1;
        if ( v3 == nullptr )
        {
          ERR_put_error(16, 151, 65, &unk_1B15112, 0);
          return 0;
        }
      }
      if ( EC_POINT_point2oct(a1[1], a1[2], a1[5], v3, v2, 0) == 0 )
      {
        ERR_put_error(16, 151, 16, &unk_1B15112, 0);
        CRYPTO_free(*a2);
        *a2 = nullptr;
        return 0;
      }
      if ( v5 == 0 )
        *a2 = (char *)*a2 + v2;
    }
    return v2;
  }
  else
  {
    ERR_put_error(16, 151, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19A4250  (binary VA: 0x19a4250)
// Original: sub_19A4250
// ----------------------------------------------------------------------------
int sub_19A4250(int a1)
{
  CRYPTO_add_lock((uint32_t *)(a1 + 24), 1, 36, (int)(uintptr_t)(&unk_1B15112), 0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19A42B0  (binary VA: 0x19a42b0)
// Original: sub_19A42B0
// ----------------------------------------------------------------------------
uint8_t * sub_19A42B0(uint32_t *a1, int a2, unsigned int *a3)
{
  uint8_t *v4;
  uint8_t *v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  char v9;
  uint8_t *v11;
  int v12;
  unsigned int v13;
  bool v14;
  void *v15;
  int v17;
  int v18;
  int v19;
  uint8_t *v20;
  unsigned int v21;
  uint32_t *v22;

  if ( a1[1] == 0 )
  {
    v11 = CRYPTO_malloc(1, (int)(uintptr_t)(&unk_1B15112), 0);
    v5 = v11;
    if ( v11 != nullptr )
    {
      *v11 = 0;
      *a3 = 1;
      return v5;
    }
    goto LABEL_30;
  }
  if ( (unsigned int)(a2 - 1) > 6 || (v17 = a1[3] == 0 ? 1 : -1, *a1 == 0) )
  {
    v5 = nullptr;
    ERR_put_error(16, 143, 68, &unk_1B15112, 0);
LABEL_13:
    v15 = v5;
    v5 = nullptr;
    CRYPTO_free(v15);
    return v5;
  }
  v21 = BN_num_bits(a1);
  v4 = CRYPTO_malloc(v21 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = v4;
  if ( v4 == nullptr )
  {
LABEL_30:
    ERR_put_error(16, 143, 65, &unk_1B15112, 0);
    goto LABEL_13;
  }
  v18 = 1 << a2;
  v20 = v4;
  v19 = 2 * (1 << a2);
  v22 = a1;
  v6 = (v19 - 1) & *(uint32_t *)*a1;
  v7 = 0;
  v8 = a2 + 1;
  while ( v6 != 0 )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_8;
    v12 = v6;
    if ( (v6 & v18) != 0 )
    {
      v12 = v6 - v19;
      if ( v21 <= v8 )
        v12 = v6 & ((v19 - 1) >> 1);
    }
    if ( v12 >= v18 || -(1 << a2) >= v12 || (v12 & 1) == 0 || (v6 -= v12, v6 != v19) && v6 != 0 && v6 != v18 )
    {
LABEL_10:
      v5 = v20;
LABEL_11:
      ERR_put_error(16, 143, 68, &unk_1B15112, 0);
      goto LABEL_13;
    }
    v9 = v12 * v17;
LABEL_9:
    v20[v7++] = v9;
    v6 = v18 * BN_is_bit_set(v22, v8++) + (v6 >> 1);
    if ( v19 < v6 )
      goto LABEL_10;
  }
  if ( v21 > v8 )
  {
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  v13 = v7;
  v14 = v21 + 1 < v7;
  v5 = v20;
  if ( v14 )
    goto LABEL_11;
  *a3 = v13;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_19A4580  (binary VA: 0x19a4580)
// Original: sub_19A4580
// ----------------------------------------------------------------------------
void sub_19A4580(uint8_t *a1)
{
  uint8_t *v1;
  uint8_t *v2;
  uint8_t *v3;

  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 6, -1, 36, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    v1 = *((uint8_t **)a1 + 4);
    if ( v1 != nullptr )
    {
      v2 = *(uint8_t **)v1;
      if ( *(uint32_t *)v1 != 0 )
      {
        do
        {
          EC_POINT_clear_free(v2);
          v3 = v1;
          v1 += 4;
          OPENSSL_cleanse(v3, 4u);
          v2 = *(uint8_t **)v1;
        }
        while ( *(uint32_t *)v1 != 0 );
        v1 = *((uint8_t **)a1 + 4);
      }
      CRYPTO_free(v1);
    }
    OPENSSL_cleanse(a1, 0x1Cu);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19A4640  (binary VA: 0x19a4640)
// Original: sub_19A4640
// ----------------------------------------------------------------------------
void sub_19A4640(uint32_t *a1)
{
  void **v1;
  void *v2;

  if ( a1 != nullptr && CRYPTO_add_lock(a1 + 6, -1, 36, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    v1 = (void **)a1[4];
    if ( v1 != nullptr )
    {
      v2 = *v1;
      if ( *v1 != nullptr )
      {
        do
        {
          ++v1;
          EC_POINT_free(v2);
          v2 = *v1;
        }
        while ( *v1 != nullptr );
        v1 = (void **)a1[4];
      }
      CRYPTO_free(v1);
    }
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: ec_wNAF_mul  (binary VA: 0x19a46e0)
// Original: ec_wNAF_mul
// ----------------------------------------------------------------------------
int ec_wNAF_mul(int a1, uint32_t *a2, uint32_t *a3, unsigned int a4, uint32_t **a5, int a6, int a7)
{
  unsigned int v7;
  uint32_t **v8;
  int v9;
  unsigned int v10;
  int v12;
  uint32_t *data;
  int v14;
  uint8_t *v15;
  void *v16;
  void **v17;
  uint8_t *v18;
  uint8_t **v19;
  char *v20;
  unsigned int *v21;
  unsigned int v22;
  int v23;
  int v24;
  uint32_t *v25;
  uint8_t *v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  char *v31;
  unsigned int v32;
  uint32_t *v33;
  int v34;
  unsigned int v35;
  uint8_t *v36;
  void **v37;
  unsigned int v38;
  uint32_t *v39;
  unsigned int v40;
  int *v41;
  uint32_t *v42;
  unsigned int v43;
  uint8_t *dest;
  unsigned int v45;
  uint32_t **v46;
  uint32_t *v47;
  int v48;
  int v49;
  int i;
  uint8_t *v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  typedef size_t _g4_t_n;
  typedef uint8_t *_g4_t_v58;
  typedef char *_g4_t_src;
  typedef uint8_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef void **_g4_t_v63;
  typedef uint8_t *_g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef unsigned int *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef uint32_t **_g4_t_v75;
  typedef int _g4_t_v76;
  typedef void **_g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef char *_g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef uint32_t **_g4_t_v86;
  typedef unsigned int _g4_t_v87[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v58)) > _g4_s1 ? (48u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_src)) > _g4_s2 ? (48u + sizeof(_g4_t_src)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v60)) > _g4_s3 ? (52u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v61)) > _g4_s4 ? (52u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v62)) > _g4_s5 ? (52u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v63)) > _g4_s6 ? (56u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v64)) > _g4_s7 ? (60u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v65)) > _g4_s8 ? (64u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v66)) > _g4_s9 ? (64u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v67)) > _g4_s10 ? (68u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v68)) > _g4_s11 ? (68u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v69)) > _g4_s12 ? (68u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v70)) > _g4_s13 ? (72u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v71)) > _g4_s14 ? (80u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v72)) > _g4_s15 ? (84u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v73)) > _g4_s16 ? (88u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v74)) > _g4_s17 ? (92u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v75)) > _g4_s18 ? (92u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v76)) > _g4_s19 ? (92u + sizeof(_g4_t_v76)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v77)) > _g4_s20 ? (96u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v78)) > _g4_s21 ? (100u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v79)) > _g4_s22 ? (104u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v80)) > _g4_s23 ? (108u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v81)) > _g4_s24 ? (108u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v82)) > _g4_s25 ? (112u + sizeof(_g4_t_v82)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v83)) > _g4_s26 ? (112u + sizeof(_g4_t_v83)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v84)) > _g4_s27 ? (116u + sizeof(_g4_t_v84)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v85)) > _g4_s28 ? (120u + sizeof(_g4_t_v85)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v86)) > _g4_s29 ? (120u + sizeof(_g4_t_v86)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v87)) > _g4_s30 ? (140u + sizeof(_g4_t_v87)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 84u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 92u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 96u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 100u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 108u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 108u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 112u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 112u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 116u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 120u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 140u);

  v7 = a4;
  v8 = a5;
  v9 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != *a2 )
    goto LABEL_2;
  if ( a4 == 0 && a3 == nullptr )
    return EC_POINT_set_to_infinity(a1, a2);
  if ( a4 != 0 )
  {
    if ( v9 != **a5 )
    {
LABEL_2:
      v10 = 0;
      ERR_put_error(16, 187, 101, &unk_1B15112, 0);
      return v10;
    }
    v12 = 0;
    while ( ++v12 != a4 )
    {
      if ( v9 != *a5[v12] )
        goto LABEL_2;
    }
  }
  v77 = nullptr;
  if ( a7 == 0 )
  {
    v37 = (void **)BN_CTX_new();
    v10 = 0;
    v77 = v37;
    if ( v37 == nullptr )
      return v10;
    a7 = (int)(uintptr_t)(v37);
  }
  if ( a3 == nullptr )
  {
    v82 = nullptr;
    v74 = nullptr;
    v85 = 0;
    v80 = 0;
    v84 = 0;
    v79 = nullptr;
    goto LABEL_16;
  }
  v79 = (uint32_t *)EC_GROUP_get0_generator(a1);
  if ( v79 == nullptr )
  {
    n = 113;
LABEL_84:
    v10 = 0;
    ERR_put_error(16, 187, n, &unk_1B15112, 0);
    v72 = nullptr;
    v58 = nullptr;
    v71 = nullptr;
    v63 = nullptr;
    v64 = nullptr;
    v60 = nullptr;
    goto LABEL_21;
  }
  data = EC_EX_DATA_get_data(*(uint32_t **)(a1 + 68), (int)(uintptr_t)(sub_19A4250), (int)(uintptr_t)((void (*)(uint32_t *))sub_19A4640), (int)(uintptr_t)(sub_19A4580));
  v74 = data;
  if ( data == nullptr )
  {
    v82 = (char *)((uint8_t *)(&dword_0 + 1));
    v85 = 0;
    v80 = 1;
    v84 = 0;
    goto LABEL_16;
  }
  if ( data[2] == 0 || EC_POINT_cmp((int *)a1, v79, *(uint32_t **)data[4], a7) != 0 )
  {
    v82 = (char *)((uint8_t *)(&dword_0 + 1));
    v74 = nullptr;
    v85 = 0;
    v80 = 1;
    v84 = 0;
    goto LABEL_16;
  }
  v84 = v74[1];
  v28 = BN_num_bits(a3);
  v29 = v74[2];
  v85 = 1 << (v74[3] - 1);
  if ( v74[5] != v29 * v85 )
  {
    n = 68;
    goto LABEL_84;
  }
  v82 = nullptr;
  if ( v28 / v84 + 1 <= v29 )
    v29 = v28 / v84 + 1;
  v80 = v29;
LABEL_16:
  v14 = 4 * (a4 + v80);
  v78 = a4 + v80;
  v64 = CRYPTO_malloc(v14, (int)(uintptr_t)(&unk_1B15112), 0);
  v71 = (unsigned int *)CRYPTO_malloc(v14, (int)(uintptr_t)(&unk_1B15112), 0);
  v63 = (void **)CRYPTO_malloc(v14 + 4, (int)(uintptr_t)(&unk_1B15112), 0);
  v15 = CRYPTO_malloc(v14, (int)(uintptr_t)(&unk_1B15112), 0);
  v72 = (uint32_t *)(v15);
  if ( v71 == nullptr || v64 == nullptr || v15 == nullptr || v63 == nullptr )
  {
    ERR_put_error(16, 187, 65, &unk_1B15112, 0);
    goto LABEL_20;
  }
  v73 = &v82[a4];
  *v63 = nullptr;
  if ( &v82[a4] != nullptr )
  {
    v20 = nullptr;
    v70 = 0;
    v65 = 0;
    v21 = v71;
    while ( 1 )
    {
      if ( a4 > (unsigned int)(uintptr_t)(v20) )
        v22 = BN_num_bits(*(uint32_t **)(a6 + 4 * (uint32_t)(uintptr_t)(v20)));
      else
        v22 = BN_num_bits(a3);
      v23 = 32;
      v24 = 6;
      if ( v22 <= 0x7CF )
      {
        LOWORD(v23) = 16;
        LOBYTE(v24) = 5;
        if ( v22 <= 0x31F )
        {
          LOWORD(v23) = 8;
          LOBYTE(v24) = 4;
          if ( v22 <= 0x12B )
          {
            LOWORD(v23) = 4;
            LOBYTE(v24) = 3;
            if ( v22 <= 0x45 )
            {
              v23 = 2 - (v22 < 0x14);
              v24 = v23;
            }
          }
        }
      }
      *(uint32_t *)&v64[4 * (uint32_t)(uintptr_t)(v20)] = v24;
      v63[(uint32_t)(uintptr_t)(v20) + 1] = nullptr;
      v25 = a3;
      if ( a4 > (unsigned int)(uintptr_t)(v20) )
        v25 = *(uint32_t **)(a6 + 4 * (uint32_t)(uintptr_t)(v20));
      v26 = sub_19A42B0(v25, *(uint32_t *)&v64[4 * (uint32_t)(uintptr_t)(v20)], v21);
      v63[(uint32_t)(uintptr_t)(v20)] = v26;
      if ( v26 == nullptr )
        goto LABEL_20;
      v27 = *v21;
      v70 += v23;
      if ( v65 >= *v21 )
        v27 = v65;
      ++v20;
      ++v21;
      v65 = v27;
      if ( v20 == v73 )
      {
        v7 = a4;
        v8 = a5;
        goto LABEL_67;
      }
    }
  }
  v70 = 0;
  v65 = 0;
LABEL_67:
  if ( v80 == 0 )
    goto LABEL_75;
  if ( v74 == nullptr )
  {
    if ( v82 == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
      goto LABEL_75;
    ERR_put_error(16, 187, 68, &unk_1B15112, 0);
    goto LABEL_20;
  }
  v87[0] = 0;
  if ( v82 != nullptr )
  {
LABEL_106:
    ERR_put_error(16, 187, 68, &unk_1B15112, 0);
    goto LABEL_20;
  }
  v61 = v7;
  v30 = v74[3];
  *(uint32_t *)&v64[4 * v7] = v30;
  v31 = (char *)(sub_19A42B0(a3, v30, v87));
  v83 = v31;
  if ( v31 == nullptr )
  {
LABEL_20:
    v10 = 0;
    v58 = nullptr;
    v60 = nullptr;
    goto LABEL_21;
  }
  if ( v87[0] <= v65 )
  {
    v78 = v7 + 1;
    v63[v7] = v31;
    v63[v7 + 1] = nullptr;
    v71[v7] = v87[0];
    v32 = v87[0];
    if ( v65 >= v87[0] )
      v32 = v65;
    v65 = v32;
    v72[v7] = v74[4];
    goto LABEL_75;
  }
  if ( v87[0] < v84 * v80 )
  {
    v38 = (v84 + v87[0] - 1) / v84;
    v78 = v38 + v7;
    if ( v38 > v74[2] )
      goto LABEL_106;
  }
  v39 = (uint32_t *)v74[4];
  if ( v78 > v7 )
  {
    v76 = 4 * v85;
    v40 = v7;
    v81 = v7;
    v86 = v8;
    v41 = (int *)&v71[v61];
    src = v83;
    v42 = v39;
    v43 = v40;
    while ( 1 )
    {
      if ( v78 - 1 <= v43 )
      {
        *v41 = v87[0];
      }
      else
      {
        *v41 = v84;
        if ( v84 > v87[0] )
          goto LABEL_106;
        v87[0] -= v84;
      }
      v63[++v43] = nullptr;
      dest = CRYPTO_malloc(*v41, (int)(uintptr_t)(&unk_1B15112), 0);
      v63[v61] = dest;
      if ( dest == nullptr )
        break;
      memcpy(dest, src, *v41);
      v45 = *v41;
      if ( *v42 == 0 )
      {
        ERR_put_error(16, 187, 68, &unk_1B15112, 0);
        goto LABEL_113;
      }
      if ( v65 >= v45 )
        v45 = v65;
      v65 = v45;
      ++v41;
      src += v84;
      v72[v61] = (uint32_t)(uintptr_t)(v42);
      v42 = (uint32_t *)((char *)v42 + v76);
      ++v61;
      if ( v78 <= v43 )
      {
        v7 = v81;
        v8 = v86;
        goto LABEL_111;
      }
    }
    ERR_put_error(16, 187, 65, &unk_1B15112, 0);
LABEL_113:
    CRYPTO_free(v83);
    goto LABEL_20;
  }
LABEL_111:
  CRYPTO_free(v83);
LABEL_75:
  v58 = CRYPTO_malloc(4 * v70 + 4, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v58 == nullptr )
  {
    ERR_put_error(16, 187, 65, &unk_1B15112, 0);
    goto LABEL_82;
  }
  v62 = (uint32_t *)(&v58[4 * v70]);
  *v62 = 0;
  if ( v73 != nullptr )
  {
    v33 = (uint32_t *)(v58);
    v67 = v7;
    v75 = v8;
    v34 = 0;
    while ( 1 )
    {
      v72[v34] = (uint32_t)(uintptr_t)(v33);
      if ( 1 << (v64[4 * v34] - 1) != 0 )
        break;
LABEL_86:
      if ( (char *)++v34 == v73 )
      {
        v7 = v67;
        v8 = v75;
        goto LABEL_88;
      }
    }
    v35 = 0;
    while ( 1 )
    {
      v36 = EC_POINT_new((int *)a1);
      *v33 = (uint32_t)(uintptr_t)(v36);
      if ( v36 == nullptr )
        goto LABEL_82;
      ++v35;
      ++v33;
      if ( 1 << (v64[4 * v34] - 1) <= v35 )
        goto LABEL_86;
    }
  }
  v33 = (uint32_t *)(v58);
LABEL_88:
  if ( v33 != v62 )
  {
    ERR_put_error(16, 187, 68, &unk_1B15112, 0);
LABEL_82:
    v10 = 0;
    v60 = nullptr;
    goto LABEL_21;
  }
  v10 = 0;
  v60 = EC_POINT_new((int *)a1);
  if ( v60 != nullptr )
  {
    v68 = v7;
    v46 = v8;
    while ( (char *)v10 != v73 )
    {
      if ( v10 >= v68 )
        v47 = v79;
      else
        v47 = v46[v10];
      if ( EC_POINT_copy(*(uint32_t **)v72[v10], v47) == 0 )
        goto LABEL_129;
      if ( *(uint32_t *)&v64[4 * v10] > 1u )
      {
        if ( EC_POINT_dbl((int *)a1, v60, *(uint32_t **)v72[v10], a7) == 0 )
          goto LABEL_129;
        if ( (unsigned int)(1 << (v64[4 * v10] - 1)) > 1 )
        {
          v48 = 1;
          while ( EC_POINT_add(
                    (int *)a1,
                    *(uint32_t **)(v72[v10] + 4 * v48),
                    *(uint32_t **)(v72[v10] + 4 * v48 - 4),
                    v60,
                    a7) != 0 )
          {
            if ( 1 << (v64[4 * v10] - 1) <= (unsigned int)++v48 )
              goto LABEL_131;
          }
LABEL_129:
          v10 = 0;
          goto LABEL_21;
        }
      }
LABEL_131:
      ++v10;
    }
    v10 = 0;
    if ( EC_POINTs_make_affine((int *)a1, v70, (uint32_t **)v58, a7) != 0 )
    {
      v49 = 1;
      v66 = v65 - 1;
      v69 = 0;
      while ( v66 >= 0 )
      {
        if ( v49 == 0 )
        {
          v56 = EC_POINT_dbl((int *)a1, a2, a2, a7);
          v49 = 0;
          if ( v56 == 0 )
            goto LABEL_129;
        }
        for ( i = 0; i != v78; ++i )
        {
          if ( v66 < v71[i] )
          {
            v51 = (uint8_t *)(v63[i]);
            v52 = (char)v51[v66];
            if ( v51[v66] != 0 )
            {
              v53 = (unsigned int)v52 >> 31;
              if ( v52 < 0 )
                v52 = -v52;
              if ( v53 != v69 )
              {
                if ( v49 == 0 )
                {
                  v54 = EC_POINT_invert((int *)a1, a2, a7);
                  v49 = 0;
                  if ( v54 == 0 )
                    goto LABEL_129;
                }
                v69 ^= 1u;
              }
              if ( v49 != 0 )
              {
                if ( EC_POINT_copy(a2, *(uint32_t **)(v72[i] + 4 * (v52 >> 1))) == 0 )
                  goto LABEL_129;
                v49 = 0;
              }
              else
              {
                v55 = EC_POINT_add((int *)a1, a2, a2, *(uint32_t **)(v72[i] + 4 * (v52 >> 1)), a7);
                v49 = 0;
                if ( v55 == 0 )
                  goto LABEL_129;
              }
            }
          }
        }
        --v66;
      }
      if ( v49 != 0 )
      {
        v10 = EC_POINT_set_to_infinity(a1, a2) != 0;
      }
      else
      {
        v10 = 1;
        if ( v69 != 0 )
          v10 = EC_POINT_invert((int *)a1, a2, a7) != 0;
      }
    }
  }
LABEL_21:
  if ( v77 != nullptr )
    BN_CTX_free(v77);
  if ( v60 != nullptr )
    EC_POINT_free(v60);
  if ( v64 != nullptr )
    CRYPTO_free(v64);
  if ( v71 != nullptr )
    CRYPTO_free(v71);
  if ( v63 != nullptr )
  {
    v16 = *v63;
    if ( *v63 != nullptr )
    {
      v17 = v63;
      do
      {
        ++v17;
        CRYPTO_free(v16);
        v16 = *v17;
      }
      while ( *v17 != nullptr );
    }
    CRYPTO_free(v63);
  }
  if ( v58 != nullptr )
  {
    v18 = *(uint8_t **)v58;
    if ( *(uint32_t *)v58 != 0 )
    {
      v19 = (uint8_t **)v58;
      do
      {
        ++v19;
        EC_POINT_clear_free(v18);
        v18 = *v19;
      }
      while ( *v19 != nullptr );
    }
    CRYPTO_free(v58);
  }
  if ( v72 == nullptr )
    return v10;
  CRYPTO_free(v72);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: ec_wNAF_precompute_mult  (binary VA: 0x19a5470)
// Original: ec_wNAF_precompute_mult
// ----------------------------------------------------------------------------
bool ec_wNAF_precompute_mult(int a1, int *a2)
{
  int *v2;
  int *v3;
  int **v4;
  int **v5;
  uint8_t *v6;
  unsigned int v7;
  int i;
  uint8_t *v9;
  uint32_t *v10;
  uint32_t **v11;
  void **v13;
  uint32_t **v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  uint8_t *v19;
  bool v20;
  int **v21;
  uint8_t *v22;
  void **v23;
  uint8_t *v24;
  int v25;
  int v26;
  uint32_t *v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;

  v2 = (int *)a1;
  v3 = a2;
  EC_EX_DATA_free_data((void **)(a1 + 68), sub_19A4250, (void (*)(void *))sub_19A4640, sub_19A4580);
  v20 = false;
  if ( a1 == 0 )
    return v20;
  v4 = (int **)CRYPTO_malloc(28, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = v4;
  if ( v4 == nullptr )
  {
    ERR_put_error(16, 196, 65, &unk_1B15112, 0);
    return v20;
  }
  *v4 = (int *)a1;
  v4[1] = (int *)((uint32_t *)byte_8);
  v4[2] = nullptr;
  v4[3] = (int *)((uint32_t *)&loc_4);
  v4[4] = nullptr;
  v4[5] = nullptr;
  v4[6] = (int *)(&dword_0 + 1);
  v27 = (uint32_t *)EC_GROUP_get0_generator(a1);
  if ( v27 == nullptr )
  {
    ERR_put_error(16, 188, 113, &unk_1B15112, 0);
    v19 = nullptr;
    v23 = nullptr;
    v24 = nullptr;
    v22 = nullptr;
LABEL_18:
    if ( v3 != nullptr )
      BN_CTX_end(v3);
    if ( v23 != nullptr )
      BN_CTX_free(v23);
    goto LABEL_22;
  }
  v23 = nullptr;
  if ( a2 != nullptr )
  {
LABEL_5:
    BN_CTX_start((int)(uintptr_t)(v3));
    v6 = BN_CTX_get(v3);
    if ( v6 != nullptr && (v18 = (uint32_t *)(v6), EC_GROUP_get_order(a1, v6)) )
    {
      if ( v18[1] != 0 )
      {
        v7 = BN_num_bits(v18);
        v29 = 8;
        v31 = 4;
        if ( v7 > 0x31F )
        {
          v29 = v7 < 0x7D0 ? 16 : 32;
          v31 = 6 - (v7 < 0x7D0);
        }
        v30 = (v7 + 7) >> 3;
        v26 = v30 * v29;
        v19 = CRYPTO_malloc(4 * v30 * v29 + 4, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v19 != nullptr )
        {
          *(uint32_t *)&v19[4 * v26] = 0;
          if ( v26 != 0 )
          {
            v21 = v5;
            for ( i = 0; i != v26; ++i )
            {
              v9 = EC_POINT_new((int *)a1);
              *(uint32_t *)&v19[4 * i] = (uint32_t)(uintptr_t)(v9);
              if ( v9 == nullptr )
              {
                v5 = v21;
                goto LABEL_16;
              }
            }
            v5 = v21;
          }
          v22 = EC_POINT_new((int *)a1);
          if ( v22 != nullptr && (v24 = EC_POINT_new((int *)a1)) != nullptr )
          {
            v20 = false;
            if ( EC_POINT_copy(v24, v27) != 0 )
            {
              if ( v30 != 0 )
              {
                v25 = (int)(uintptr_t)(v5);
                v28 = 0;
                v14 = (uint32_t **)v19;
LABEL_43:
                if ( EC_POINT_dbl((int *)a1, v22, v24, (int)(uintptr_t)(v3)) != 0 && EC_POINT_copy(*v14, v24) != 0 )
                {
                  ++v14;
                  v15 = 1;
                  while ( EC_POINT_add((int *)a1, *v14, v22, *(v14 - 1), (int)(uintptr_t)(v3)) != 0 )
                  {
                    ++v15;
                    ++v14;
                    if ( v15 == v29 )
                    {
                      if ( v28 < v30 - 1 )
                      {
                        if ( EC_POINT_dbl((int *)a1, v24, v22, (int)(uintptr_t)(v3)) != 0 )
                        {
                          v16 = 6;
                          while ( EC_POINT_dbl((int *)a1, v24, v24, (int)(uintptr_t)(v3)) != 0 )
                          {
                            if ( --v16 == 0 )
                              goto LABEL_58;
                          }
                        }
                        break;
                      }
LABEL_58:
                      if ( ++v28 != v30 )
                        goto LABEL_43;
                      v2 = (int *)a1;
                      v5 = (int **)v25;
                      goto LABEL_60;
                    }
                  }
                }
                v5 = (int **)v25;
                v20 = false;
              }
              else
              {
LABEL_60:
                v20 = false;
                if ( EC_POINTs_make_affine(v2, v26, (uint32_t **)v19, (int)(uintptr_t)(v3)) != 0 )
                {
                  v5[2] = (int *)v30;
                  v5[3] = (int *)v31;
                  v5[5] = (int *)v26;
                  *v5 = v2;
                  v5[1] = (int *)((uint32_t *)byte_8);
                  v5[4] = (int *)v19;
                  v17 = EC_EX_DATA_set_data(
                          (uint32_t *)(a1 + 68),
                          (int)(uintptr_t)(v5),
                          (int)(uintptr_t)(sub_19A4250),
                          (int)(uintptr_t)((void (*)(uint32_t *))sub_19A4640),
                          (int)(uintptr_t)(sub_19A4580));
                  v19 = nullptr;
                  v20 = v17 != 0;
                  if ( v17 != 0 )
                    v5 = nullptr;
                }
              }
            }
          }
          else
          {
            ERR_put_error(16, 188, 65, &unk_1B15112, 0);
            v20 = false;
            v24 = nullptr;
          }
        }
        else
        {
LABEL_16:
          ERR_put_error(16, 188, 65, &unk_1B15112, 0);
          v20 = false;
          v24 = nullptr;
          v22 = nullptr;
        }
      }
      else
      {
        ERR_put_error(16, 188, 114, &unk_1B15112, 0);
        v20 = false;
        v19 = nullptr;
        v24 = nullptr;
        v22 = nullptr;
      }
    }
    else
    {
      v20 = false;
      v19 = nullptr;
      v24 = nullptr;
      v22 = nullptr;
    }
    goto LABEL_18;
  }
  v13 = (void **)BN_CTX_new();
  v23 = v13;
  if ( v13 != nullptr )
  {
    v3 = (int *)v13;
    goto LABEL_5;
  }
  v22 = nullptr;
  v19 = nullptr;
  v24 = nullptr;
LABEL_22:
  if ( v5 != nullptr )
    sub_19A4640(v5);
  if ( v19 != nullptr )
  {
    v10 = *(uint32_t **)v19;
    if ( *(uint32_t *)v19 != 0 )
    {
      v11 = (uint32_t **)v19;
      do
      {
        ++v11;
        EC_POINT_free(v10);
        v10 = *v11;
      }
      while ( *v11 != nullptr );
    }
    CRYPTO_free(v19);
  }
  if ( v22 != nullptr )
    EC_POINT_free(v22);
  if ( v24 != nullptr )
    EC_POINT_free(v24);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: ec_wNAF_have_precompute_mult  (binary VA: 0x19a5b00)
// Original: ec_wNAF_have_precompute_mult
// ----------------------------------------------------------------------------
bool ec_wNAF_have_precompute_mult(int a1)
{
  return EC_EX_DATA_get_data(*(uint32_t **)(a1 + 68), (int)(uintptr_t)(sub_19A4250), (int)(uintptr_t)((void (*)(uint32_t *))sub_19A4640), (int)(uintptr_t)(sub_19A4580)) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: ECParameters_print  (binary VA: 0x19a6030)
// Original: ECParameters_print
// ----------------------------------------------------------------------------
int ECParameters_print(int a1, int a2)
{
  int v2;
  void *v3;

  v2 = 0;
  v3 = (void *)EVP_PKEY_new();
  if ( v3 != nullptr && EVP_PKEY_set1_EC_KEY((char *)v3, a2) != 0 )
  {
    v2 = EVP_PKEY_print_params(a1, v3, 4, 0);
    EVP_PKEY_free(v3);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ECParameters_print_fp  (binary VA: 0x19a60b0)
// Original: ECParameters_print_fp
// ----------------------------------------------------------------------------
int ECParameters_print_fp(int a1, int a2)
{
  void *v2;
  uint8_t *v3;
  int v4;

  v2 = BIO_s_file();
  v3 = BIO_new((int)(uintptr_t)(v2));
  if ( v3 != nullptr )
  {
    BIO_ctrl(v3, 106, 0, a1);
    v4 = ECParameters_print((int)(uintptr_t)(v3), a2);
    BIO_free(v3);
  }
  else
  {
    v4 = 0;
    ERR_put_error(16, 148, 32, &unk_1B15112, 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ECPKParameters_print  (binary VA: 0x19a6170)
// Original: ECPKParameters_print
// ----------------------------------------------------------------------------
int ECPKParameters_print(uint32_t *a1, int a2, signed int a3)
{
  void **v3;
  void **v4;
  void **v5;
  int v6;
  int v8;
  int v9;
  int curve_name;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  size_t n;
  const char *v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  typedef uint32_t *_g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_basis_type;
  typedef void **_g4_t_v70;
  typedef void **_g4_t_v71;
  typedef uint8_t *_g4_t_v72;
  typedef void *_g4_t_v73;
  typedef void **_g4_t_v74;
  typedef void **_g4_t_v75;
  typedef int _g4_t_field_type;
  typedef int _g4_t_seed_len;
  typedef int _g4_t_point_conversion_form;
  typedef int _g4_t_v79;
  typedef char _g4_t_s;
  typedef uint8_t _g4_t_v81[139];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v61)) > _g4_s0 ? (12u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v62)) > _g4_s1 ? (12u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v63)) > _g4_s2 ? (12u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v64)) > _g4_s3 ? (12u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v65)) > _g4_s4 ? (12u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v66)) > _g4_s5 ? (12u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v67)) > _g4_s6 ? (20u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v68)) > _g4_s7 ? (20u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_basis_type)) > _g4_s8 ? (20u + sizeof(_g4_t_basis_type)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v70)) > _g4_s9 ? (24u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v71)) > _g4_s10 ? (28u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v72)) > _g4_s11 ? (32u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v73)) > _g4_s12 ? (32u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v74)) > _g4_s13 ? (36u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v75)) > _g4_s14 ? (40u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_field_type)) > _g4_s15 ? (44u + sizeof(_g4_t_field_type)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_seed_len)) > _g4_s16 ? (52u + sizeof(_g4_t_seed_len)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_point_conversion_form)) > _g4_s17 ? (56u + sizeof(_g4_t_point_conversion_form)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v79)) > _g4_s18 ? (60u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_s)) > _g4_s19 ? (64u + sizeof(_g4_t_s)) : _g4_s19,
    _g4_s21 = (65u + sizeof(_g4_t_v81)) > _g4_s20 ? (65u + sizeof(_g4_t_v81)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 20u);
  _g4_t_basis_type &basis_type = *reinterpret_cast<_g4_t_basis_type *>(_g4_sf + 20u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 24u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 28u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 36u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_field_type &field_type = *reinterpret_cast<_g4_t_field_type *>(_g4_sf + 44u);
  _g4_t_seed_len &seed_len = *reinterpret_cast<_g4_t_seed_len *>(_g4_sf + 52u);
  _g4_t_point_conversion_form &point_conversion_form = *reinterpret_cast<_g4_t_point_conversion_form *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 65u);

  if ( a2 == 0 )
  {
    v74 = nullptr;
    v71 = nullptr;
    v75 = nullptr;
    v70 = nullptr;
    v4 = nullptr;
    v5 = nullptr;
    v3 = nullptr;
    v6 = 67;
    v72 = nullptr;
    goto LABEL_7;
  }
  v3 = (void **)BN_CTX_new();
  if ( v3 == nullptr )
  {
    v74 = nullptr;
    v71 = nullptr;
    v75 = nullptr;
    v70 = nullptr;
    v4 = nullptr;
    v5 = nullptr;
    v6 = 65;
    v72 = nullptr;
    goto LABEL_7;
  }
  if ( EC_GROUP_get_asn1_flag(a2) == 0 )
  {
    v8 = EC_GROUP_method_of(a2);
    field_type = EC_METHOD_get_field_type(v8);
    v5 = (void **)BN_new();
    if ( v5 == nullptr )
    {
      v74 = nullptr;
      v71 = nullptr;
      v75 = nullptr;
      v70 = nullptr;
      v4 = nullptr;
      v6 = 65;
      v72 = nullptr;
      goto LABEL_7;
    }
    v4 = (void **)BN_new();
    if ( v4 == nullptr )
    {
      v74 = nullptr;
      v71 = nullptr;
      v75 = nullptr;
      v70 = nullptr;
      v6 = 65;
      v72 = nullptr;
      goto LABEL_7;
    }
    v70 = (void **)BN_new();
    if ( v70 == nullptr )
    {
      v74 = nullptr;
      v71 = nullptr;
      v75 = nullptr;
      v6 = 65;
      v72 = nullptr;
      goto LABEL_7;
    }
    v71 = (void **)BN_new();
    if ( v71 == nullptr )
    {
      v74 = nullptr;
      v75 = nullptr;
      v6 = 65;
      v72 = nullptr;
      goto LABEL_7;
    }
    v74 = (void **)BN_new();
    if ( v74 == nullptr )
    {
      v75 = nullptr;
      v6 = 65;
      v72 = nullptr;
      goto LABEL_7;
    }
    if ( field_type == 407 )
    {
      if ( EC_GROUP_get_curve_GF2m(a2, (int)(uintptr_t)(v5), (int)(uintptr_t)(v4), (int)(uintptr_t)(v70), (int)(uintptr_t)(v3)) == 0 )
        goto LABEL_35;
    }
    else if ( EC_GROUP_get_curve_GFp(a2, (int)(uintptr_t)(v5), (int)(uintptr_t)(v4), (int)(uintptr_t)(v70), (int)(uintptr_t)(v3)) == 0 )
    {
      goto LABEL_35;
    }
    v9 = EC_GROUP_get0_generator(a2);
    if ( v9 != 0 )
    {
      v61 = (uint32_t *)v9;
      if ( EC_GROUP_get_order(a2, v71) && EC_GROUP_get_cofactor(a2, v74) )
      {
        point_conversion_form = EC_GROUP_get_point_conversion_form(a2);
        v75 = EC_POINT_point2bn(a2, v61, point_conversion_form, nullptr, (int)(uintptr_t)(v3));
        if ( v75 != nullptr )
        {
          v14 = BN_num_bits(v5);
          v15 = v14 + 14;
          v16 = v14 + 7;
          if ( v16 >= 0 )
            v15 = v16;
          v62 = v15 >> 3;
          v17 = BN_num_bits(v4);
          v18 = v17 + 14;
          v19 = v17 + 7 < 0;
          v20 = v17 + 7;
          v21 = v62;
          if ( v19 )
            v20 = v18;
          v22 = v20 >> 3;
          if ( v22 >= v62 )
            v21 = v22;
          v63 = v21;
          v23 = BN_num_bits(v70);
          v24 = v23 + 14;
          v19 = v23 + 7 < 0;
          v25 = v23 + 7;
          v26 = v63;
          if ( v19 )
            v25 = v24;
          v27 = v25 >> 3;
          if ( v63 < v27 )
            v26 = v27;
          v64 = v26;
          v28 = BN_num_bits(v75);
          v29 = v28 + 14;
          v19 = v28 + 7 < 0;
          v30 = v28 + 7;
          v31 = v64;
          if ( v19 )
            v30 = v29;
          v32 = v30 >> 3;
          if ( v64 < v32 )
            v31 = v32;
          v65 = v31;
          v33 = BN_num_bits(v71);
          v34 = v33 + 14;
          v19 = v33 + 7 < 0;
          v35 = v33 + 7;
          v36 = v65;
          if ( v19 )
            v35 = v34;
          v37 = v35 >> 3;
          if ( v65 < v37 )
            v36 = v37;
          v66 = v36;
          v38 = BN_num_bits(v74);
          v39 = v38 + 14;
          v40 = v38 + 7;
          if ( v40 < 0 )
            v40 = v39;
          v41 = v40 >> 3;
          if ( v66 >= v41 )
            v41 = v66;
          v73 = (void *)v41;
          v79 = EC_GROUP_get0_seed(a2);
          seed_len = 0;
          if ( v79 != 0 )
            seed_len = EC_GROUP_get_seed_len(a2);
          v72 = CRYPTO_malloc((int)(uintptr_t)(v73) + 10, (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v72 != nullptr )
          {
            v42 = BIO_indent(a1, a3, 128);
            v6 = 32;
            if ( v42 == 0 )
              goto LABEL_7;
            v43 = (int)(uintptr_t)(OBJ_nid2sn(field_type));
            v46 = BIO_printf(v44, v45, (int)(uintptr_t)(a1), "Field Type: %s\n", v43);
            v6 = 32;
            if ( v46 <= 0 )
              goto LABEL_7;
            if ( field_type == 407 )
            {
              basis_type = EC_GROUP_get_basis_type(a2);
              v6 = 32;
              if ( basis_type == 0 )
                goto LABEL_7;
              v56 = BIO_indent(a1, a3, 128);
              v6 = 32;
              if ( v56 == 0 )
                goto LABEL_7;
              v57 = (int)(uintptr_t)(OBJ_nid2sn(basis_type));
              v60 = BIO_printf(v58, v59, (int)(uintptr_t)(a1), "Basis Type: %s\n", v57);
              v6 = 32;
              if ( v60 <= 0 )
                goto LABEL_7;
              v47 = ASN1_bn_print(a1, "Polynomial:", v5, v72, a3);
            }
            else
            {
              v47 = ASN1_bn_print(a1, "Prime:", v5, v72, a3);
            }
            v6 = 32;
            if ( v47 != 0 )
            {
              v48 = ASN1_bn_print(a1, "A:   ", v4, v72, a3);
              v6 = 32;
              if ( v48 != 0 )
              {
                v49 = ASN1_bn_print(a1, "B:   ", v70, v72, a3);
                v6 = 32;
                if ( v49 != 0 )
                {
                  if ( point_conversion_form == 2 )
                  {
                    v51 = ASN1_bn_print(a1, "Generator (compressed):", v75, v72, a3);
                  }
                  else
                  {
                    v50 = (char *)(point_conversion_form == 4 ? "Generator (uncompressed):" : "Generator (hybrid):");
                    v51 = ASN1_bn_print(a1, v50, v75, v72, a3);
                  }
                  v6 = 32;
                  if ( v51 != 0 )
                  {
                    v52 = ASN1_bn_print(a1, "Order: ", v71, v72, a3);
                    v6 = 32;
                    if ( v52 != 0 )
                    {
                      v53 = ASN1_bn_print(a1, "Cofactor: ", v74, v72, a3);
                      v6 = 32;
                      if ( v53 != 0 )
                      {
                        if ( v79 == 0 )
                          goto LABEL_41;
                        if ( a3 == 0 )
                          goto LABEL_94;
                        n = 128;
                        if ( a3 <= 128 )
                          n = a3;
                        a3 = n;
                        memset(&s, 32, n);
                        if ( BIO_write(a1, (int)(uintptr_t)(&s), a3) > 0 )
                        {
LABEL_94:
                          if ( BIO_printf(v6, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(a1), "%s", "Seed:") > 0 )
                          {
                            v68 = 0;
                            while ( v68 != seed_len )
                            {
                              if ( v68 % 0xF != 0
                                || (s = 10, memset(v81, 32, a3 + 4), BIO_write(a1, (int)(uintptr_t)(&s), a3 + 5) > 0) )
                              {
                                ++v68;
                                v55 = (const char *)&unk_1B15112;
                                if ( seed_len != v68 )
                                  v55 = ":";
                                if ( BIO_printf(
                                       v68,
                                       (int)(uintptr_t)(a1),
                                       (int)(uintptr_t)(a1),
                                       "%02x%s",
                                       *(uint8_t *)(v79 + v68 - 1),
                                       v55) > 0 )
                                  continue;
                              }
                              goto LABEL_102;
                            }
                            if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) > 0 )
                              goto LABEL_41;
                          }
                        }
LABEL_102:
                        v6 = 32;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v6 = 65;
          }
        }
        else
        {
          v6 = 16;
          v72 = nullptr;
        }
LABEL_7:
        ERR_put_error(16, 149, v6, &unk_1B15112, 0);
        v67 = 0;
        goto LABEL_8;
      }
    }
LABEL_35:
    v75 = nullptr;
    v6 = 16;
    v72 = nullptr;
    goto LABEL_7;
  }
  if ( BIO_indent(a1, a3, 128) == 0
    || (curve_name = EC_GROUP_get_curve_name(a2)) == 0
    || (v11 = (int)(uintptr_t)(OBJ_nid2sn(curve_name)), BIO_printf(v12, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1), "ASN1 OID: %s", v11) <= 0) )
  {
    v74 = nullptr;
    v71 = nullptr;
    v75 = nullptr;
    v70 = nullptr;
    v4 = nullptr;
    v5 = nullptr;
    v6 = 32;
    v72 = nullptr;
    goto LABEL_7;
  }
  v4 = nullptr;
  v5 = nullptr;
  v74 = nullptr;
  v71 = nullptr;
  v75 = nullptr;
  v70 = nullptr;
  if ( BIO_printf(v13, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1), (char *)&a0[1]) <= 0 )
  {
    v6 = 32;
    v72 = nullptr;
    goto LABEL_7;
  }
  v72 = nullptr;
LABEL_41:
  v67 = 1;
LABEL_8:
  if ( v5 != nullptr )
    BN_free(v5);
  if ( v4 != nullptr )
    BN_free(v4);
  if ( v70 != nullptr )
    BN_free(v70);
  if ( v75 != nullptr )
    BN_free(v75);
  if ( v71 != nullptr )
    BN_free(v71);
  if ( v74 != nullptr )
    BN_free(v74);
  if ( v3 != nullptr )
    BN_CTX_free(v3);
  if ( v72 != nullptr )
    CRYPTO_free(v72);
  return v67;
}

// ----------------------------------------------------------------------------
// Function: ECPKParameters_print_fp  (binary VA: 0x19a6d40)
// Original: ECPKParameters_print_fp
// ----------------------------------------------------------------------------
int ECPKParameters_print_fp(int a1, int a2, size_t a3)
{
  void *v3;
  uint8_t *v4;
  int v5;

  v3 = BIO_s_file();
  v4 = BIO_new((int)(uintptr_t)(v3));
  if ( v4 != nullptr )
  {
    BIO_ctrl(v4, 106, 0, a1);
    v5 = ECPKParameters_print(v4, a2, a3);
    BIO_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(16, 150, 7, &unk_1B15112, 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_group_set_curve  (binary VA: 0x19a6e00)
// Original: ec_GFp_mont_group_set_curve
// ----------------------------------------------------------------------------
int ec_GFp_mont_group_set_curve(int a1, int a2, int a3, int a4, void **a5)
{
  void **v5;
  char *v6;
  uint32_t *v7;
  void **v8;
  void **v10;
  uint32_t *v11;
  void **v12;
  int v13;

  v5 = a5;
  if ( *(uint32_t *)(a1 + 160) != 0 )
  {
    BN_MONT_CTX_free(*(void **)(a1 + 160));
    *(uint32_t *)(a1 + 160) = 0;
  }
  if ( *(uint32_t *)(a1 + 164) != 0 )
  {
    BN_free(*(void ***)(a1 + 164));
    *(uint32_t *)(a1 + 164) = 0;
  }
  v12 = nullptr;
  if ( a5 == nullptr )
  {
    v10 = (void **)BN_CTX_new();
    v12 = v10;
    v13 = 0;
    if ( v10 == nullptr )
      return v13;
    v5 = v10;
  }
  v6 = (char *)BN_MONT_CTX_new();
  v13 = 0;
  if ( v6 != nullptr )
  {
    if ( BN_MONT_CTX_set(v6, a2, v5) != 0 )
    {
      v7 = BN_new();
      if ( v7 != nullptr )
      {
        v11 = v7;
        v8 = BN_value_one();
        if ( BN_mod_mul_montgomery(v11, v8, v6 + 4, v6, v5) != 0 )
        {
          *(uint32_t *)(a1 + 160) = (uint32_t)(uintptr_t)(v6);
          *(uint32_t *)(a1 + 164) = (uint32_t)(uintptr_t)(v11);
          v6 = nullptr;
          v13 = ec_GFp_simple_group_set_curve(a1, a2, a3, a4, v5);
          if ( v13 == 0 )
          {
            BN_MONT_CTX_free(*(void **)(a1 + 160));
            *(uint32_t *)(a1 + 160) = 0;
            BN_free(*(void ***)(a1 + 164));
            *(uint32_t *)(a1 + 164) = 0;
            v6 = nullptr;
          }
        }
      }
    }
    else
    {
      ERR_put_error(16, 189, 3, &unk_1B15112, 0);
    }
  }
  if ( v12 != nullptr )
    BN_CTX_free(v12);
  if ( v6 != nullptr )
    BN_MONT_CTX_free(v6);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_group_clear_finish  (binary VA: 0x19a6fe0)
// Original: ec_GFp_mont_group_clear_finish
// ----------------------------------------------------------------------------
int ec_GFp_mont_group_clear_finish(int a1)
{
  if ( *(uint32_t *)(a1 + 160) != 0 )
  {
    BN_MONT_CTX_free(*(void **)(a1 + 160));
    *(uint32_t *)(a1 + 160) = 0;
  }
  if ( *(uint32_t *)(a1 + 164) != 0 )
  {
    BN_clear_free(*(uint8_t ***)(a1 + 164));
    *(uint32_t *)(a1 + 164) = 0;
  }
  return (int)(uintptr_t)(ec_GFp_simple_group_clear_finish(a1));
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_group_finish  (binary VA: 0x19a7050)
// Original: ec_GFp_mont_group_finish
// ----------------------------------------------------------------------------
int ec_GFp_mont_group_finish(int a1)
{
  if ( *(uint32_t *)(a1 + 160) != 0 )
  {
    BN_MONT_CTX_free(*(void **)(a1 + 160));
    *(uint32_t *)(a1 + 160) = 0;
  }
  if ( *(uint32_t *)(a1 + 164) != 0 )
  {
    BN_free(*(void ***)(a1 + 164));
    *(uint32_t *)(a1 + 164) = 0;
  }
  return ((ec_GFp_simple_group_finish(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_group_init  (binary VA: 0x19a70c0)
// Original: ec_GFp_mont_group_init
// ----------------------------------------------------------------------------
int ec_GFp_mont_group_init(int a1)
{
  int result;

  result = ec_GFp_simple_group_init(a1);
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_field_set_to_one  (binary VA: 0x19a7110)
// Original: ec_GFp_mont_field_set_to_one
// ----------------------------------------------------------------------------
bool ec_GFp_mont_field_set_to_one(int a1, uint32_t *a2)
{
  if ( *(uint32_t *)(a1 + 164) != 0 )
    return BN_copy(a2, *(uint32_t **)(a1 + 164)) != nullptr;
  ERR_put_error(16, 209, 111, &unk_1B15112, 0);
  return false;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_field_decode  (binary VA: 0x19a7190)
// Original: ec_GFp_mont_field_decode
// ----------------------------------------------------------------------------
int ec_GFp_mont_field_decode(int a1, int a2, int a3, int a4)
{
  if ( *(uint32_t *)(a1 + 160) != 0 )
    return BN_from_montgomery(a2, a3, *(uint32_t *)(a1 + 160), a4);
  ERR_put_error(16, 133, 111, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_field_encode  (binary VA: 0x19a7210)
// Original: ec_GFp_mont_field_encode
// ----------------------------------------------------------------------------
int ec_GFp_mont_field_encode(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = *(uint32_t *)(a1 + 160);
  if ( v4 != 0 )
    return BN_mod_mul_montgomery(a2, a3, v4 + 4, *(uint32_t *)(a1 + 160), a4);
  ERR_put_error(16, 134, 111, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_field_sqr  (binary VA: 0x19a72a0)
// Original: ec_GFp_mont_field_sqr
// ----------------------------------------------------------------------------
int ec_GFp_mont_field_sqr(int a1, int a2, int a3, int a4)
{
  if ( *(uint32_t *)(a1 + 160) != 0 )
    return BN_mod_mul_montgomery(a2, a3, a3, *(uint32_t *)(a1 + 160), a4);
  ERR_put_error(16, 132, 111, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_field_mul  (binary VA: 0x19a7320)
// Original: ec_GFp_mont_field_mul
// ----------------------------------------------------------------------------
int ec_GFp_mont_field_mul(int a1, int a2, int a3, int a4, int a5)
{
  if ( *(uint32_t *)(a1 + 160) != 0 )
    return BN_mod_mul_montgomery(a2, a3, a4, *(uint32_t *)(a1 + 160), a5);
  ERR_put_error(16, 131, 111, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_mont_group_copy  (binary VA: 0x19a73b0)
// Original: ec_GFp_mont_group_copy
// ----------------------------------------------------------------------------
int ec_GFp_mont_group_copy(int a1, int a2)
{
  int v2;
  int v3;
  void **v4;

  if ( *(uint32_t *)(a1 + 160) != 0 )
  {
    BN_MONT_CTX_free(*(void **)(a1 + 160));
    *(uint32_t *)(a1 + 160) = 0;
  }
  if ( *(uint32_t *)(a1 + 164) != 0 )
  {
    BN_clear_free(*(uint8_t ***)(a1 + 164));
    *(uint32_t *)(a1 + 164) = 0;
  }
  v2 = 0;
  if ( ec_GFp_simple_group_copy(a1, a2) != 0 )
  {
    if ( *(uint32_t *)(a2 + 160) != 0 )
    {
      v3 = (int)(uintptr_t)(BN_MONT_CTX_new());
      *(uint32_t *)(a1 + 160) = v3;
      if ( v3 == 0 )
        return v2;
      if ( BN_MONT_CTX_copy(v3, *(uint32_t *)(a2 + 160)) == 0 )
        goto LABEL_12;
    }
    v2 = 1;
    if ( *(uint32_t *)(a2 + 164) != 0 )
    {
      v4 = BN_dup(*(uint32_t **)(a2 + 164));
      *(uint32_t *)(a1 + 164) = (uint32_t)(uintptr_t)(v4);
      if ( v4 == nullptr )
      {
LABEL_12:
        v2 = 0;
        if ( *(uint32_t *)(a1 + 160) != 0 )
        {
          BN_MONT_CTX_free(*(void **)(a1 + 160));
          *(uint32_t *)(a1 + 160) = 0;
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_nist_field_sqr  (binary VA: 0x19a74d0)
// Original: ec_GFp_nist_field_sqr
// ----------------------------------------------------------------------------
bool ec_GFp_nist_field_sqr(int a1, int a2, int a3, void **a4)
{
  void **v4;
  void **v5;
  int v6;
  bool result;
  void **v8;
  int v9;
  void **v10;
  void *v11;

  v4 = a4;
  if ( a2 == 0 || a1 == 0 || a3 == 0 )
  {
    ERR_put_error(16, 201, 134, &unk_1B15112, 0);
    return false;
  }
  v5 = nullptr;
  if ( a4 == nullptr )
  {
    v4 = (void **)BN_CTX_new();
    result = false;
    if ( v4 == nullptr )
      return result;
    v5 = v4;
  }
  v10 = v5;
  v6 = BN_sqr(a2, a3, v4);
  result = false;
  v8 = v10;
  if ( v6 != 0 )
  {
    v9 = (*(int (**)(int, int, int, void **))(a1 + 168))(a2, a2, a1 + 72, v4);
    v8 = v10;
    result = v9 != 0;
  }
  if ( v8 != nullptr )
  {
    v11 = (void *)result;
    BN_CTX_free(v8);
    return (bool)v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_nist_field_mul  (binary VA: 0x19a75f0)
// Original: ec_GFp_nist_field_mul
// ----------------------------------------------------------------------------
bool ec_GFp_nist_field_mul(int a1, int a2, int a3, int a4, void **a5)
{
  int v5;
  void **v6;
  bool result;
  void **v8;
  int v9;
  void **v10;
  int v11;
  void **v12;
  int v13;
  bool v14;

  v5 = a1;
  v6 = a5;
  if ( a2 == 0 || a1 == 0 || a4 == 0 || a3 == 0 )
  {
    ERR_put_error(16, 200, 67, &unk_1B15112, 0);
    return false;
  }
  v8 = nullptr;
  if ( a5 == nullptr )
  {
    v6 = (void **)BN_CTX_new();
    result = false;
    v5 = a1;
    if ( v6 == nullptr )
      return result;
    v8 = v6;
  }
  v12 = v8;
  v13 = v5;
  v9 = BN_mul(a2, a3, a4, v6);
  result = false;
  v10 = v12;
  if ( v9 != 0 )
  {
    v11 = (*(int (**)(int, int, int, void **))(v13 + 168))(a2, a2, v13 + 72, v6);
    v10 = v12;
    result = v11 != 0;
  }
  if ( v10 != nullptr )
  {
    v14 = result;
    BN_CTX_free(v10);
    return v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_nist_group_set_curve  (binary VA: 0x19a7710)
// Original: ec_GFp_nist_group_set_curve
// ----------------------------------------------------------------------------
int ec_GFp_nist_group_set_curve(int a1, uint32_t *a2, int a3, int a4, int *a5)
{
  int *v5;
  void **v6;
  int v7;
  uint32_t *v8;
  uint32_t *v10;
  void **v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;

  v5 = a5;
  v6 = nullptr;
  if ( a5 == nullptr )
  {
    v11 = (void **)BN_CTX_new();
    v7 = 0;
    v6 = v11;
    if ( v11 == nullptr )
      return v7;
    v5 = (int *)v11;
  }
  v7 = 0;
  BN_CTX_start((int)(uintptr_t)(v5));
  if ( BN_CTX_get(v5) != nullptr )
  {
    v8 = (uint32_t *)BN_get0_nist_prime_192();
    if ( BN_ucmp(v8, a2) == 0 )
    {
      *(uint32_t *)(a1 + 168) = (uint32_t)(uintptr_t)(BN_nist_mod_192);
LABEL_5:
      v7 = ec_GFp_simple_group_set_curve(a1, a2, a3, a4, v5);
      goto LABEL_6;
    }
    v10 = (uint32_t *)BN_get0_nist_prime_224();
    if ( BN_ucmp(v10, a2) == 0 )
    {
      *(uint32_t *)(a1 + 168) = (uint32_t)(uintptr_t)(BN_nist_mod_224);
      goto LABEL_5;
    }
    v12 = (uint32_t *)BN_get0_nist_prime_256();
    if ( BN_ucmp(v12, a2) == 0 )
    {
      *(uint32_t *)(a1 + 168) = (uint32_t)(uintptr_t)(BN_nist_mod_256);
      goto LABEL_5;
    }
    v13 = (uint32_t *)BN_get0_nist_prime_384();
    if ( BN_ucmp(v13, a2) == 0 )
    {
      *(uint32_t *)(a1 + 168) = (uint32_t)(uintptr_t)(BN_nist_mod_384);
      goto LABEL_5;
    }
    v14 = (uint32_t *)BN_get0_nist_prime_521();
    if ( BN_ucmp(v14, a2) == 0 )
    {
      *(uint32_t *)(a1 + 168) = (uint32_t)(uintptr_t)(BN_nist_mod_521);
      goto LABEL_5;
    }
    ERR_put_error(16, 202, 135, &unk_1B15112, 0);
  }
LABEL_6:
  BN_CTX_end(v5);
  if ( v6 != nullptr )
    BN_CTX_free(v6);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_nist_group_copy  (binary VA: 0x19a78e0)
// Original: ec_GFp_nist_group_copy
// ----------------------------------------------------------------------------
int ec_GFp_nist_group_copy(int a1, int a2)
{
  *(uint32_t *)(a1 + 168) = *(uint32_t *)(a2 + 168);
  return ec_GFp_simple_group_copy(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_is_at_infinity  (binary VA: 0x19a7940)
// Original: ec_GFp_simple_is_at_infinity
// ----------------------------------------------------------------------------
bool ec_GFp_simple_is_at_infinity(int a1, int a2)
{
  return *(uint32_t *)(a2 + 48) == 0;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_field_sqr  (binary VA: 0x19a7950)
// Original: ec_GFp_simple_field_sqr
// ----------------------------------------------------------------------------
int ec_GFp_simple_field_sqr(int a1, int a2, int a3, int a4)
{
  return BN_mod_sqr(a2, a3, a1 + 72, a4);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_field_mul  (binary VA: 0x19a7990)
// Original: ec_GFp_simple_field_mul
// ----------------------------------------------------------------------------
int ec_GFp_simple_field_mul(int a1, int a2, int a3, int a4, int a5)
{
  return BN_mod_mul(a2, a3, a4, a1 + 72, a5);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_set_to_infinity  (binary VA: 0x19a79e0)
// Original: ec_GFp_simple_point_set_to_infinity
// ----------------------------------------------------------------------------
int ec_GFp_simple_point_set_to_infinity(int a1, int a2)
{
  *(uint32_t *)(a2 + 64) = 0;
  BN_set_word((uint32_t *)(a2 + 44), 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_get_Jprojective_coordinates_GFp  (binary VA: 0x19a7a20)
// Original: ec_GFp_simple_get_Jprojective_coordinates_GFp
// ----------------------------------------------------------------------------
bool ec_GFp_simple_get_Jprojective_coordinates_GFp(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, void **a6)
{
  void **v6;
  void **v7;
  int v8;
  bool v9;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  void **v14;
  void **v15;
  void *v16;
  void **v17;
  void **v18;

  v6 = a6;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 144) != 0 )
  {
    v7 = nullptr;
    if ( a6 == nullptr )
    {
      v14 = (void **)BN_CTX_new();
      v9 = false;
      v7 = v14;
      if ( v14 == nullptr )
        return v9;
      v6 = v14;
    }
    if ( a3 == nullptr
      || (v15 = v7,
          v8 = G4_VCALL<int>(a1, 144, a3, a2 + 1, v6),
          v9 = false,
          v7 = v15,
          v8 != 0) )
    {
      if ( a4 == nullptr
        || (v17 = v7,
            v11 = G4_VCALL<int>(a1, 144, a4, a2 + 6, v6),
            v9 = false,
            v7 = v17,
            v11 != 0) )
      {
        v9 = true;
        if ( a5 != nullptr )
        {
          v18 = v7;
          v9 = G4_VCALL<int>(a1, 144, a5, a2 + 11, v6) != 0;
          v7 = v18;
        }
      }
    }
    if ( v7 != nullptr )
    {
      v16 = (void *)v9;
      BN_CTX_free(v7);
      return (bool)v16;
    }
  }
  else if ( a3 == nullptr || (v12 = BN_copy(a3, a2 + 1), v9 = false, v12 != nullptr) )
  {
    if ( a4 == nullptr || (v13 = BN_copy(a4, a2 + 6), v9 = false, v13 != nullptr) )
    {
      v9 = true;
      if ( a5 != nullptr )
        return BN_copy(a5, a2 + 11) != nullptr;
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_get_curve  (binary VA: 0x19a7be0)
// Original: ec_GFp_simple_group_get_curve
// ----------------------------------------------------------------------------
int ec_GFp_simple_group_get_curve(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, void **a5)
{
  uint32_t *v5;
  int result;
  bool v7;
  void **v8;
  int v9;
  int v10;
  uint32_t *v11;
  void **v12;
  void *v13;
  void **v14;

  if ( a2 == nullptr || (v5 = BN_copy(a2, a1 + 18), result = 0, v5 != nullptr) )
  {
    v7 = a3 != nullptr;
    if ( a4 != nullptr || (result = 1, a3 != nullptr) )
    {
      if ( *(uint32_t *)(*a1 + 144) != 0 )
      {
        v8 = nullptr;
        if ( a5 == nullptr )
        {
          v8 = (void **)BN_CTX_new();
          result = 0;
          v7 = a3 != nullptr;
          if ( v8 == nullptr )
            return result;
          a5 = v8;
        }
        if ( !v7
          || (v12 = v8,
              v9 = G4_VCALL<int>(a1, 144, a3, a1 + 29, a5),
              result = 0,
              v8 = v12,
              v9 != 0) )
        {
          result = 1;
          if ( a4 != nullptr )
          {
            v14 = v8;
            v10 = G4_VCALL<int>(a1, 144, a4, a1 + 34, a5);
            v8 = v14;
            result = v10 != 0;
          }
        }
        if ( v8 != nullptr )
        {
          v13 = (void *)result;
          BN_CTX_free(v8);
          return (int)(uintptr_t)(v13);
        }
      }
      else if ( a3 == nullptr || (v11 = BN_copy(a3, a1 + 29), result = 0, v11 != nullptr) )
      {
        result = 1;
        if ( a4 != nullptr )
          return BN_copy(a4, a1 + 34) != nullptr;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_clear_finish  (binary VA: 0x19a7d80)
// Original: ec_GFp_simple_point_clear_finish
// ----------------------------------------------------------------------------
void * ec_GFp_simple_point_clear_finish(int a1)
{
  void *result;

  BN_clear_free((uint8_t **)(a1 + 4));
  BN_clear_free((uint8_t **)(a1 + 24));
  result = BN_clear_free((uint8_t **)(a1 + 44));
  *(uint32_t *)(a1 + 64) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_clear_finish  (binary VA: 0x19a7dd0)
// Original: ec_GFp_simple_group_clear_finish
// ----------------------------------------------------------------------------
void * ec_GFp_simple_group_clear_finish(uint8_t **a1)
{
  BN_clear_free(a1 + 18);
  BN_clear_free(a1 + 29);
  return BN_clear_free(a1 + 34);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_get_affine_coordinates  (binary VA: 0x19a7e20)
// Original: ec_GFp_simple_point_get_affine_coordinates
// ----------------------------------------------------------------------------
bool ec_GFp_simple_point_get_affine_coordinates(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  int *v5;
  bool v6;
  int (*v7)(int, uint8_t *, uint32_t *, int *);
  uint32_t *v8;
  int (*v10)(int, uint32_t *, uint32_t *, int *);
  void **v11;
  uint8_t *v12;
  int v13;
  void **v14;
  uint8_t *v15;
  uint8_t *v16;
  uint8_t *v17;

  v5 = a5;
  if ( EC_POINT_is_at_infinity(a1, a2) != 0 )
  {
    v6 = false;
    ERR_put_error(16, 167, 106, &unk_1B15112, 0);
    return v6;
  }
  v14 = nullptr;
  if ( a5 == nullptr )
  {
    v11 = (void **)BN_CTX_new();
    v6 = false;
    v14 = v11;
    if ( v11 == nullptr )
      return v6;
    v5 = (int *)v11;
  }
  v6 = false;
  BN_CTX_start((int)(uintptr_t)(v5));
  v12 = BN_CTX_get(v5);
  v16 = BN_CTX_get(v5);
  v17 = BN_CTX_get(v5);
  v15 = BN_CTX_get(v5);
  if ( v15 != nullptr )
  {
    v7 = *(int (**)(int, uint8_t *, uint32_t *, int *))(*(uint32_t *)a1 + 144);
    if ( v7 != nullptr )
    {
      if ( v7(a1, v12, a2 + 11, v5) == 0 )
        goto LABEL_17;
      v8 = (uint32_t *)(v12);
    }
    else
    {
      v8 = a2 + 11;
    }
    if ( v8[1] == 1 && *(uint32_t *)*v8 == 1 && v8[3] == 0 )
    {
      v10 = *(int (**)(int, uint32_t *, uint32_t *, int *))(*(uint32_t *)a1 + 144);
      if ( v10 != nullptr )
      {
        if ( a3 == nullptr || (v6 = false, v10(a1, a3, a2 + 1, v5) != 0) )
        {
          v6 = true;
          if ( a4 != nullptr )
            v6 = G4_VCALL<int>(a1, 144, a4, a2 + 6, v5) != 0;
        }
      }
      else if ( a3 == nullptr || (v6 = false, BN_copy(a3, a2 + 1) != nullptr) )
      {
        v6 = true;
        if ( a4 != nullptr )
          v6 = BN_copy(a4, a2 + 6) != nullptr;
      }
      goto LABEL_17;
    }
    v13 = a1 + 72;
    if ( BN_mod_inverse(v16, v8, a1 + 72, v5) != 0 )
    {
      if ( *(uint32_t *)(*(uint32_t *)a1 + 140) != 0 )
      {
        v6 = false;
        if ( BN_mod_sqr(v17, v16, v13, v5) == 0 )
          goto LABEL_17;
      }
      else
      {
        v6 = false;
        if ( G4_VCALL<int>(a1, 132, v17, v16, v5) == 0 )
          goto LABEL_17;
      }
      if ( a3 != nullptr )
      {
        v6 = false;
        if ( G4_VCALL<int>(a1, 128, a3, a2 + 1, v17, v5) == 0 )
          goto LABEL_17;
      }
      v6 = true;
      if ( a4 == nullptr )
        goto LABEL_17;
      if ( *(uint32_t *)(*(uint32_t *)a1 + 140) != 0 )
      {
        v6 = false;
        if ( BN_mod_mul(v15, v17, v16, v13, v5) == 0 )
          goto LABEL_17;
      }
      else
      {
        LOWORD(v6) = 0;
        if ( G4_VCALL<int>(a1, 128, v15, v17, v16, v5) == 0 )
          goto LABEL_17;
      }
      v6 = G4_VCALL<int>(a1, 128, a4, a2 + 6, v15, v5) != 0;
    }
    else
    {
      v6 = false;
      ERR_put_error(16, 167, 3, &unk_1B15112, 0);
    }
  }
LABEL_17:
  BN_CTX_end(v5);
  if ( v14 != nullptr )
    BN_CTX_free(v14);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_dbl  (binary VA: 0x19a8250)
// Original: ec_GFp_simple_dbl
// ----------------------------------------------------------------------------
bool ec_GFp_simple_dbl(uint32_t *a1, int a2, uint32_t *a3, int *a4)
{
  int *v4;
  uint32_t *v6;
  int v7;
  int v8;
  void **v9;
  void **v10;
  bool v11;
  uint8_t *v12;
  uint8_t *v13;
  int (*v14)(uint32_t *, uint8_t *, uint32_t *, int *);
  uint8_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint8_t *v18;
  int (*v19)(uint32_t *, uint8_t *, uint8_t *, uint32_t *, int *);

  v4 = a4;
  if ( EC_POINT_is_at_infinity((int)(uintptr_t)(a1), a3) != 0 )
  {
    BN_set_word((uint32_t *)(a2 + 44), 0);
    v11 = true;
    *(uint32_t *)(a2 + 64) = 0;
    return v11;
  }
  v10 = nullptr;
  v19 = *(int (**)(uint32_t *, uint8_t *, uint8_t *, uint32_t *, int *))(*a1 + 128);
  v14 = *(int (**)(uint32_t *, uint8_t *, uint32_t *, int *))(*a1 + 132);
  if ( a4 == nullptr )
  {
    v9 = (void **)BN_CTX_new();
    v10 = v9;
    v11 = false;
    if ( v9 == nullptr )
      return v11;
    v4 = (int *)v9;
  }
  BN_CTX_start((int)(uintptr_t)(v4));
  v13 = BN_CTX_get(v4);
  v15 = BN_CTX_get(v4);
  v18 = BN_CTX_get(v4);
  v12 = BN_CTX_get(v4);
  v11 = false;
  if ( v12 == nullptr )
    goto LABEL_7;
  v17 = a1 + 18;
  if ( a3[16] != 0 )
  {
    v16 = a3 + 1;
    if ( v14(a1, v13, a3 + 1, v4) == 0
      || BN_mod_lshift1_quick(v15, v13, v17) == 0
      || BN_mod_add_quick(v13, v13, v15, v17) == 0 )
    {
      goto LABEL_7;
    }
    v8 = BN_mod_add_quick(v15, v13, a1 + 29, v17);
  }
  else
  {
    if ( a1[39] == 0 )
    {
      v16 = a3 + 1;
      if ( v14(a1, v13, a3 + 1, v4) == 0
        || BN_mod_lshift1_quick(v15, v13, v17) == 0
        || BN_mod_add_quick(v13, v13, v15, v17) == 0
        || v14(a1, v15, a3 + 11, v4) == 0
        || v14(a1, v15, (uint32_t *)(v15), v4) == 0
        || v19(a1, v15, v15, a1 + 29, v4) == 0
        || BN_mod_add_quick(v15, v15, v13, v17) == 0 )
      {
        goto LABEL_7;
      }
      goto LABEL_17;
    }
    if ( v14(a1, v15, a3 + 11, v4) == 0 )
      goto LABEL_7;
    v16 = a3 + 1;
    if ( BN_mod_add_quick(v13, a3 + 1, v15, v17) == 0
      || BN_mod_sub_quick(v18, v16, v15, v17) == 0
      || v19(a1, v15, v13, (uint32_t *)(v18), v4) == 0
      || BN_mod_lshift1_quick(v13, v15, v17) == 0 )
    {
      goto LABEL_7;
    }
    v8 = BN_mod_add_quick(v15, v13, v15, v17);
  }
  if ( v8 == 0 )
    goto LABEL_7;
LABEL_17:
  if ( a3[16] != 0 )
  {
    v6 = a3 + 6;
    v11 = false;
    if ( BN_copy(v13, a3 + 6) != nullptr )
    {
LABEL_19:
      v11 = false;
      if ( BN_mod_lshift1_quick(a2 + 44, v13, v17) != 0 )
      {
        *(uint32_t *)(a2 + 64) = 0;
        if ( v14(a1, v12, v6, v4) != 0
          && v19(a1, v18, (uint8_t *)(v16), (uint32_t *)(v12), v4) != 0
          && BN_mod_lshift_quick(v18, v18, 2, v17) != 0
          && BN_mod_lshift1_quick(v13, v18, v17) != 0 )
        {
          v7 = a2 + 4;
          if ( v14(a1, (uint8_t *)(a2 + 4), (uint32_t *)(v15), v4) != 0
            && BN_mod_sub_quick(v7, v7, v13, v17) != 0
            && v14(a1, v13, (uint32_t *)(v12), v4) != 0
            && BN_mod_lshift_quick(v12, v13, 3, v17) != 0
            && BN_mod_sub_quick(v13, v18, v7, v17) != 0 )
          {
            v11 = false;
            if ( v19(a1, v13, v15, (uint32_t *)(v13), v4) != 0 )
              v11 = BN_mod_sub_quick(a2 + 24, v13, v12, v17) != 0;
          }
        }
      }
    }
  }
  else
  {
    v6 = a3 + 6;
    v11 = false;
    if ( v19(a1, v13, (uint8_t *)a3 + 24, a3 + 11, v4) != 0 )
      goto LABEL_19;
  }
LABEL_7:
  BN_CTX_end(v4);
  if ( v10 != nullptr )
    BN_CTX_free(v10);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_get_degree  (binary VA: 0x19a8890)
// Original: ec_GFp_simple_group_get_degree
// ----------------------------------------------------------------------------
int ec_GFp_simple_group_get_degree(int a1)
{
  return BN_num_bits((uint32_t *)(a1 + 72));
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_oct2point  (binary VA: 0x19a88c0)
// Original: ec_GFp_simple_oct2point
// ----------------------------------------------------------------------------
int ec_GFp_simple_oct2point(int a1, uint32_t *a2, uint8_t *a3, int a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  bool v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  void **v17;
  uint8_t *v18;
  int v19;
  int v20;
  void **v21;
  uint32_t *v22;
  void **v23;
  void **v24;

  v5 = a4;
  if ( a4 == 0 )
  {
    ERR_put_error(16, 103, 100, &unk_1B15112, 0);
    return v5;
  }
  v6 = *a3 & 0xFE;
  if ( v6 != 2 && (*a3 & 0xFE) != 0 && v6 != 6 && v6 != 4 )
    goto LABEL_7;
  v7 = *a3 & 1;
  if ( v6 == 4 || (*a3 & 0xFE) == 0 )
  {
    if ( (*a3 & 1) != 0 )
    {
LABEL_7:
      v5 = 0;
      ERR_put_error(16, 103, 102, &unk_1B15112, 0);
      return v5;
    }
    if ( (*a3 & 0xFE) == 0 )
    {
      if ( a4 == 1 )
        return EC_POINT_set_to_infinity(a1, a2);
      goto LABEL_7;
    }
  }
  v22 = (uint32_t *)(a1 + 72);
  v9 = BN_num_bits((uint32_t *)(a1 + 72));
  v10 = v9 + 14;
  v11 = v9 + 7 < 0;
  v12 = v9 + 7;
  v13 = a3;
  if ( !v11 )
    v10 = v12;
  v14 = v10 >> 3;
  v15 = v14 + 1;
  if ( v6 != 2 )
    v15 = 2 * v14 + 1;
  if ( v15 != a4 )
    goto LABEL_7;
  v21 = nullptr;
  if ( a5 == nullptr )
  {
    v20 = v14;
    v17 = (void **)BN_CTX_new();
    v5 = 0;
    v21 = v17;
    v14 = v20;
    v13 = a3;
    if ( v17 == nullptr )
      return v5;
    a5 = (int *)v17;
  }
  v19 = v14;
  v18 = v13;
  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = 0;
  v24 = (void **)BN_CTX_get(a5);
  v23 = (void **)BN_CTX_get(a5);
  if ( v23 == nullptr || BN_bin2bn(v18 + 1, v19, v24) == nullptr )
    goto LABEL_24;
  if ( BN_ucmp(v24, v22) >= 0 )
    goto LABEL_23;
  if ( v6 == 2 )
  {
    if ( EC_POINT_set_compressed_coordinates_GFp(a1, a2, (int)(uintptr_t)(v24), v7, (int)(uintptr_t)(a5)) != 0 )
      goto LABEL_39;
  }
  else
  {
    if ( BN_bin2bn(&v18[v19 + 1], v19, v23) == nullptr )
      goto LABEL_24;
    if ( BN_ucmp(v23, v22) >= 0 )
    {
LABEL_23:
      ERR_put_error(16, 103, 102, &unk_1B15112, 0);
      goto LABEL_24;
    }
    if ( v6 == 6 )
    {
      v16 = 0;
      if ( (int)(uintptr_t)(v23[1]) > 0 )
        v16 = (*(uint8_t *)*v23 & 1) != 0;
      if ( v16 != v7 )
      {
        v5 = 0;
        ERR_put_error(16, 103, 102, &unk_1B15112, 0);
        goto LABEL_24;
      }
    }
    v5 = 0;
    if ( EC_POINT_set_affine_coordinates_GFp(a1, a2, (int)(uintptr_t)(v24), (int)(uintptr_t)(v23), (int)(uintptr_t)(a5)) != 0 )
    {
LABEL_39:
      v5 = 1;
      if ( EC_POINT_is_on_curve(a1, a2, (int)(uintptr_t)(a5)) == 0 )
      {
        LOWORD(v5) = 0;
        ERR_put_error(16, 103, 107, &unk_1B15112, 0);
      }
    }
  }
LABEL_24:
  BN_CTX_end(a5);
  if ( v21 != nullptr )
    BN_CTX_free(v21);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point2oct  (binary VA: 0x19a8cb0)
// Original: ec_GFp_simple_point2oct
// ----------------------------------------------------------------------------
unsigned int ec_GFp_simple_point2oct(int a1, uint32_t *a2, int a3, uint8_t *a4, unsigned int a5, int *a6)
{
  unsigned int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  uint8_t *v18;
  void **v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  uint8_t *v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  int v29;
  void **v30;
  unsigned int v31;
  unsigned int v32;
  uint32_t *v33;
  uint8_t *v34;

  if ( a3 != 4 && a3 != 2 && a3 != 6 )
  {
    v6 = 0;
    ERR_put_error(16, 104, 104, &unk_1B15112, 0);
    return v6;
  }
  if ( EC_POINT_is_at_infinity(a1, a2) != 0 )
  {
    v6 = 1;
    if ( a4 != nullptr )
    {
      if ( a5 != 0 )
      {
        *a4 = 0;
      }
      else
      {
        LOWORD(v6) = 0;
        ERR_put_error(16, 104, 100, &unk_1B15112, 0);
      }
    }
    return v6;
  }
  v8 = BN_num_bits((uint32_t *)(a1 + 72));
  v9 = v8 + 14;
  v10 = v8 + 7;
  if ( v10 >= 0 )
    v9 = v10;
  v11 = v9 >> 3;
  v6 = v11 + 1;
  if ( a3 != 2 )
    v6 = 2 * v11 + 1;
  if ( a4 != nullptr )
  {
    if ( v6 > a5 )
    {
      v6 = 0;
      ERR_put_error(16, 104, 100, &unk_1B15112, 0);
      return v6;
    }
    v30 = nullptr;
    if ( a6 == nullptr )
    {
      v29 = v11;
      v19 = (void **)BN_CTX_new();
      v30 = v19;
      v11 = v29;
      if ( v19 == nullptr )
        return 0;
      a6 = (int *)v19;
    }
    v28 = v11;
    BN_CTX_start((int)(uintptr_t)(a6));
    v34 = BN_CTX_get(a6);
    v12 = BN_CTX_get(a6);
    v33 = (uint32_t *)(v12);
    if ( v12 == nullptr || EC_POINT_get_affine_coordinates_GFp(a1, a2, (int)(uintptr_t)(v34), (int)(uintptr_t)(v12), (int)(uintptr_t)(a6)) == 0 )
    {
LABEL_37:
      BN_CTX_end(a6);
      if ( v30 != nullptr )
      {
        v6 = 0;
        BN_CTX_free(v30);
        return v6;
      }
      return 0;
    }
    if ( (a3 == 6 || a3 == 2) && (int)v33[1] > 0 && (*(uint8_t *)*v33 & 1) != 0 )
      *a4 = a3 + 1;
    else
      *a4 = a3;
    v13 = BN_num_bits(v34);
    v14 = v13 + 14;
    v15 = v13 + 7;
    if ( v15 < 0 )
      v15 = v14;
    v16 = v15 >> 3;
    v17 = v28 - v16;
    v31 = v28 - v16;
    if ( v28 >= v16 )
    {
      v18 = a4;
      if ( v17 != 0 )
      {
        do
        {
          --v17;
          *++v18 = 0;
        }
        while ( v17 != 0 );
        v27 = v31 + 1;
      }
      else
      {
        v27 = 1;
      }
      v32 = v28 + 1;
      if ( v28 + 1 == v27 + BN_bn2bin(v34, &a4[v27]) )
      {
        if ( a3 != 4 && a3 != 6 )
          goto LABEL_33;
        v20 = BN_num_bits(v33);
        v21 = v20 + 14;
        v22 = v20 + 7;
        if ( v22 < 0 )
          v22 = v21;
        v23 = v22 >> 3;
        v24 = v28 - v23;
        if ( v28 >= v23 )
        {
          v25 = &a4[v28];
          v26 = v28 - v23;
          if ( v24 != 0 )
          {
            do
            {
              --v26;
              *++v25 = 0;
            }
            while ( v26 != 0 );
            v32 += v24;
          }
          v32 += BN_bn2bin(v33, &a4[v32]);
LABEL_33:
          if ( v32 == v6 )
          {
            BN_CTX_end(a6);
            if ( v30 != nullptr )
              BN_CTX_free(v30);
            return v6;
          }
        }
      }
    }
    ERR_put_error(16, 104, 68, &unk_1B15112, 0);
    goto LABEL_37;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_set_Jprojective_coordinates_GFp  (binary VA: 0x19a9090)
// Original: ec_GFp_simple_set_Jprojective_coordinates_GFp
// ----------------------------------------------------------------------------
int ec_GFp_simple_set_Jprojective_coordinates_GFp(int a1, int a2, int a3, int a4, int a5, void **a6)
{
  void **v6;
  void **v7;
  int v8;
  int v9;
  int (*v11)(int, int, int, void **);
  int v12;
  int v13;
  int (*v14)(int, int, int, void **);
  int v15;
  int v16;
  int (*v17)(int, int, int, void **);
  int (*v18)(int, int, void **);
  int v19;
  void **v20;
  int v21;
  int v22;
  int v23;
  bool v24;

  v6 = a6;
  v7 = nullptr;
  if ( a6 == nullptr )
  {
    v20 = (void **)BN_CTX_new();
    v9 = 0;
    v7 = v20;
    if ( v20 == nullptr )
      return v9;
    v6 = v20;
  }
  if ( a3 == 0
    || (v8 = BN_nnmod(a2 + 4, a3, a1 + 72, v6), v9 = 0, v8 != 0)
    && ((v11 = *(int (**)(int, int, int, void **))(*(uint32_t *)a1 + 140)) == nullptr
     || (v12 = v11(a1, a2 + 4, a2 + 4, v6), v9 = 0, v12 != 0)) )
  {
    if ( a4 == 0
      || (v13 = BN_nnmod(a2 + 24, a4, a1 + 72, v6), v9 = 0, v13 != 0)
      && ((v14 = *(int (**)(int, int, int, void **))(*(uint32_t *)a1 + 140)) == nullptr
       || (v15 = v14(a1, a2 + 24, a2 + 24, v6), v9 = 0, v15 != 0)) )
    {
      v9 = 1;
      if ( a5 != 0 )
      {
        v23 = a2 + 44;
        v16 = BN_nnmod(a2 + 44, a5, a1 + 72, v6);
        v9 = 0;
        if ( v16 != 0 )
        {
          v24 = false;
          if ( *(uint32_t *)(a2 + 48) == 1 && **(uint32_t **)(a2 + 44) == 1 )
            v24 = *(uint32_t *)(a2 + 56) == 0;
          v17 = *(int (**)(int, int, int, void **))(*(uint32_t *)a1 + 140);
          if ( v17 == nullptr )
            goto LABEL_20;
          if ( v24 )
          {
            v18 = *(int (**)(int, int, void **))(*(uint32_t *)a1 + 148);
            if ( v18 != nullptr )
            {
              v19 = v18(a1, v23, v6);
              v9 = 0;
              if ( v19 == 0 )
                goto LABEL_4;
              goto LABEL_20;
            }
          }
          v21 = v17(a1, v23, v23, v6);
          v9 = 0;
          if ( v21 != 0 )
          {
LABEL_20:
            *(uint32_t *)(a2 + 64) = v24;
            v9 = 1;
          }
        }
      }
    }
  }
LABEL_4:
  if ( v7 != nullptr )
  {
    v22 = v9;
    BN_CTX_free(v7);
    return v22;
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_set_compressed_coordinates  (binary VA: 0x19a92c0)
// Original: ec_GFp_simple_set_compressed_coordinates
// ----------------------------------------------------------------------------
bool ec_GFp_simple_set_compressed_coordinates(int a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7)
{
  int *v7;
  void **v8;
  bool v9;
  int (*v11)(uint32_t *, uint8_t *, uint32_t *, int *);
  int (*v12)(uint32_t *, uint8_t *, uint32_t *, int *);
  int v13;
  int v14;
  int v15;
  int v16;
  void **v17;
  int v18;
  int v19;
  unsigned int error;
  int v21;
  uint8_t *v22;
  int v23;
  uint8_t *v24;
  uint8_t *v25;
  uint8_t *v26;

  v7 = (int *)a7;
  v8 = nullptr;
  ERR_clear_error(a1, a2);
  if ( a7 == 0 )
  {
    v17 = (void **)BN_CTX_new();
    v9 = false;
    v8 = v17;
    if ( v17 == nullptr )
      return v9;
    v7 = (int *)v17;
  }
  v9 = false;
  BN_CTX_start((int)(uintptr_t)(v7));
  v26 = BN_CTX_get(v7);
  v25 = BN_CTX_get(v7);
  v24 = BN_CTX_get(v7);
  v22 = BN_CTX_get(v7);
  if ( v22 != nullptr )
  {
    v23 = (int)(uintptr_t)(a3 + 18);
    if ( BN_nnmod(v24, a5, a3 + 18, v7) != 0 )
    {
      if ( *(uint32_t *)(*a3 + 144) != 0 )
      {
        if ( BN_mod_sqr(v25, a5, v23, v7) == 0 || BN_mod_mul(v26, v25, a5, v23, v7) == 0 )
          goto LABEL_4;
      }
      else if ( G4_VCALL<int>(a3, 132, v25, a5, v7) == 0
             || G4_VCALL<int>(a3, 128, v26, v25, a5, v7) == 0 )
      {
        goto LABEL_4;
      }
      if ( a3[39] != 0 )
      {
        v9 = false;
        if ( BN_mod_lshift1_quick(v25, v24, v23) == 0
          || BN_mod_add_quick(v25, v25, v24, v23) == 0
          || BN_mod_sub_quick(v26, v26, v25, v23) == 0 )
        {
          goto LABEL_4;
        }
      }
      else
      {
        v11 = *(int (**)(uint32_t *, uint8_t *, uint32_t *, int *))(*a3 + 144);
        if ( v11 != nullptr )
        {
          v9 = false;
          if ( v11(a3, v25, a3 + 29, v7) == 0 || BN_mod_mul(v25, v25, v24, v23, v7) == 0 )
            goto LABEL_4;
        }
        else
        {
          v9 = false;
          if ( G4_VCALL<int>(a3, 128, v25, a3 + 29, v24, v7) == 0 )
            goto LABEL_4;
        }
        v9 = false;
        if ( BN_mod_add_quick(v26, v26, v25, v23) == 0 )
          goto LABEL_4;
      }
      v12 = *(int (**)(uint32_t *, uint8_t *, uint32_t *, int *))(*a3 + 144);
      if ( v12 != nullptr )
      {
        v9 = false;
        if ( v12(a3, v25, a3 + 34, v7) == 0 || BN_mod_add_quick(v26, v26, v25, v23) == 0 )
          goto LABEL_4;
      }
      else
      {
        v9 = false;
        if ( BN_mod_add_quick(v26, v26, a3 + 34, v23) == 0 )
          goto LABEL_4;
      }
      if ( BN_mod_sqrt(v22, (int)(uintptr_t)(v26), v23, (int)(uintptr_t)(v7)) != 0 )
      {
        v13 = *((uint32_t *)v22 + 1);
        v14 = 0;
        if ( v13 > 0 )
          v14 = (**(uint8_t **)v22 & 1) != 0;
        v15 = a6 != 0;
        if ( v14 == v15 )
          goto LABEL_40;
        if ( v13 == 0 )
        {
          v9 = false;
          v16 = BN_kronecker(v24, v23, v7);
          if ( v16 != -2 )
          {
            if ( v16 == 1 )
              ERR_put_error(16, 169, 109, &unk_1B15112, 0);
            else
              ERR_put_error(16, 169, 110, &unk_1B15112, 0);
          }
          goto LABEL_4;
        }
        v18 = BN_usub(v22, v23, v22);
        v9 = false;
        v15 = a6 != 0;
        if ( v18 != 0 )
        {
LABEL_40:
          v19 = 0;
          if ( *((int *)v22 + 1) > 0 )
            v19 = (**(uint8_t **)v22 & 1) != 0;
          if ( v19 == v15 )
          {
            v9 = EC_POINT_set_affine_coordinates_GFp((int)(uintptr_t)(a3), a4, (int)(uintptr_t)(v24), (int)(uintptr_t)(v22), (int)(uintptr_t)(v7)) != 0;
          }
          else
          {
            v9 = false;
            ERR_put_error(16, 169, 68, &unk_1B15112, 0);
          }
        }
      }
      else
      {
        error = ERR_peek_last_error();
        if ( HIBYTE(error) == 3 && (error & 0xFFF) == 0x6F )
        {
          ERR_clear_error(v21, 3);
          v9 = false;
          ERR_put_error(16, 169, 110, &unk_1B15112, 0);
        }
        else
        {
          v9 = false;
          ERR_put_error(16, 169, 3, &unk_1B15112, 0);
        }
      }
    }
  }
LABEL_4:
  BN_CTX_end(v7);
  if ( v8 != nullptr )
    BN_CTX_free(v8);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_finish  (binary VA: 0x19a9880)
// Original: ec_GFp_simple_point_finish
// ----------------------------------------------------------------------------
void ec_GFp_simple_point_finish(void **a1)
{
  BN_free(a1 + 1);
  BN_free(a1 + 6);
  BN_free(a1 + 11);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_finish  (binary VA: 0x19a98d0)
// Original: ec_GFp_simple_group_finish
// ----------------------------------------------------------------------------
void ec_GFp_simple_group_finish(void **a1)
{
  BN_free(a1 + 18);
  BN_free(a1 + 29);
  BN_free(a1 + 34);
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_init  (binary VA: 0x19a9920)
// Original: ec_GFp_simple_point_init
// ----------------------------------------------------------------------------
int ec_GFp_simple_point_init(uint32_t *a1)
{
  BN_init(a1 + 1);
  BN_init(a1 + 6);
  BN_init(a1 + 11);
  a1[16] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_init  (binary VA: 0x19a9980)
// Original: ec_GFp_simple_group_init
// ----------------------------------------------------------------------------
int ec_GFp_simple_group_init(uint32_t *a1)
{
  BN_init(a1 + 18);
  BN_init(a1 + 29);
  BN_init(a1 + 34);
  a1[39] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_check_discriminant  (binary VA: 0x19a99e0)
// Original: ec_GFp_simple_group_check_discriminant
// ----------------------------------------------------------------------------
bool ec_GFp_simple_group_check_discriminant(uint32_t *a1, int *a2)
{
  int *v2;
  void **v3;
  int (*v4)(uint32_t *, uint32_t *, uint32_t *, int *);
  uint32_t *v6;
  bool v7;
  uint32_t *v8;
  uint32_t *v9;
  uint8_t *v10;
  uint8_t *v11;

  v2 = a2;
  v3 = nullptr;
  if ( a2 == nullptr )
  {
    v3 = (void **)BN_CTX_new();
    v2 = (int *)v3;
    if ( v3 == nullptr )
    {
      ERR_put_error(16, 165, 65, &unk_1B15112, 0);
      return false;
    }
  }
  BN_CTX_start((int)(uintptr_t)(v2));
  v8 = (uint32_t *)(BN_CTX_get(v2));
  v9 = (uint32_t *)(BN_CTX_get(v2));
  v10 = BN_CTX_get(v2);
  v11 = BN_CTX_get(v2);
  v7 = false;
  if ( BN_CTX_get(v2) != nullptr )
  {
    v4 = *(int (**)(uint32_t *, uint32_t *, uint32_t *, int *))(*a1 + 144);
    if ( v4 != nullptr )
    {
      if ( v4(a1, v8, a1 + 29, v2) != 0
        && G4_VCALL<int>(a1, 144, v9, a1 + 34, v2) != 0 )
      {
        goto LABEL_9;
      }
    }
    else if ( BN_copy(v8, a1 + 29) != nullptr && BN_copy(v9, a1 + 34) != nullptr )
    {
LABEL_9:
      if ( v8[1] != 0 )
      {
        v7 = true;
        if ( v9[1] != 0 )
        {
          v6 = a1 + 18;
          v7 = false;
          if ( BN_mod_sqr(v10, v8, a1 + 18, v2) != 0
            && BN_mod_mul(v11, v10, v8, v6, v2) != 0
            && BN_lshift(v10, v11, 2) != 0
            && BN_mod_sqr(v11, v9, v6, v2) != 0
            && BN_mul_word(v11, 27) != 0
            && BN_mod_add(v8, v10, v11, v6, v2) != 0 )
          {
            v7 = v8[1] != 0;
          }
        }
      }
      else
      {
        v7 = v9[1] != 0;
      }
    }
  }
  BN_CTX_end(v2);
  if ( v3 != nullptr )
    BN_CTX_free(v3);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_copy  (binary VA: 0x19a9cb0)
// Original: ec_GFp_simple_point_copy
// ----------------------------------------------------------------------------
int ec_GFp_simple_point_copy(uint32_t *a1, uint32_t *a2)
{
  int v2;

  v2 = 0;
  if ( BN_copy(a1 + 1, a2 + 1) != nullptr && BN_copy(a1 + 6, a2 + 6) != nullptr && BN_copy(a1 + 11, a2 + 11) != nullptr )
  {
    LOWORD(v2) = 1;
    a1[16] = a2[16];
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_copy  (binary VA: 0x19a9d40)
// Original: ec_GFp_simple_group_copy
// ----------------------------------------------------------------------------
int ec_GFp_simple_group_copy(uint32_t *a1, uint32_t *a2)
{
  int v2;

  v2 = 0;
  if ( BN_copy(a1 + 18, a2 + 18) != nullptr
    && BN_copy(a1 + 29, a2 + 29) != nullptr
    && BN_copy(a1 + 34, a2 + 34) != nullptr )
  {
    LOWORD(v2) = 1;
    a1[39] = a2[39];
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_points_make_affine  (binary VA: 0x19a9de0)
// Original: ec_GFp_simple_points_make_affine
// ----------------------------------------------------------------------------
int ec_GFp_simple_points_make_affine(int a1, unsigned int a2, int a3, int *a4)
{
  int v4;
  uint32_t *v5;
  unsigned int v6;
  unsigned int v8;
  uint8_t *v9;
  unsigned int v10;
  int v11;
  int v12;
  int i;
  unsigned int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int (*v20)(int, uint32_t, uint32_t, int *);
  unsigned int j;
  int v22;
  int v23;
  uint32_t *v24;
  int (*v25)(int, uint32_t *, int *);
  unsigned int v26;
  uint32_t *v27;
  unsigned int v28;
  uint8_t *v29;
  void **v30;
  uint8_t *v31;
  uint32_t *v32;

  v4 = 1;
  if ( a2 != 0 )
  {
    v30 = nullptr;
    if ( a4 == nullptr )
    {
      v18 = (int *)(BN_CTX_new());
      LOWORD(v4) = 0;
      a4 = v18;
      if ( v18 == nullptr )
        return v4;
      v30 = (void **)v18;
    }
    BN_CTX_start((int)(uintptr_t)(a4));
    v31 = BN_CTX_get(a4);
    v29 = BN_CTX_get(a4);
    if ( v29 != nullptr && v31 != nullptr )
    {
      v8 = 8;
      v28 = 2;
      if ( a2 > 1 )
      {
        LOBYTE(v8) = 1;
        do
          v8 *= 2;
        while ( a2 > v8 );
        v28 = 2 * v8;
        v8 *= 8;
      }
      v4 = 0;
      v9 = CRYPTO_malloc(v8, (int)(uintptr_t)(&unk_1B15112), 0);
      v5 = (uint32_t *)(v9);
      if ( v9 == nullptr )
        goto LABEL_5;
      *(uint32_t *)v9 = 0;
      v10 = v28 >> 1;
      v11 = (v28 >> 1) - 1;
      v12 = v11;
      if ( v28 >> 1 != 1 )
      {
        do
          v5[v12--] = 0;
        while ( v12 != 0 );
      }
      for ( i = 0; i != a2; ++i )
        v5[v10 + i] = *(uint32_t *)(a3 + 4 * i) + 44;
      v26 = a2 + v10;
      if ( a2 + v10 < v28 )
      {
        v14 = a2 + v10;
        do
          v5[v14++] = 0;
        while ( v14 < v28 );
      }
      if ( v28 >> 1 != 1 )
      {
        do
        {
          v15 = BN_new();
          v5[v11] = (uint32_t)(uintptr_t)(v15);
          if ( v15 == nullptr )
          {
LABEL_37:
            v4 = 0;
            goto LABEL_5;
          }
          v16 = v5[2 * v11];
          if ( v16 != 0 )
          {
            v17 = v5[2 * v11 + 1];
            if ( v17 != 0 && *(uint32_t *)(v17 + 4) != 0 )
            {
              if ( *(uint32_t *)(v16 + 4) != 0 )
              {
                if ( G4_VCALL<int>(a1, 128, v15, v16, v5[2 * v11 + 1], a4) == 0 )
                {
                  v4 = 0;
                  goto LABEL_5;
                }
              }
              else if ( BN_copy(v15, (uint32_t *)v5[2 * v11 + 1]) == nullptr )
              {
                goto LABEL_37;
              }
            }
            else if ( BN_copy(v15, (uint32_t *)v5[2 * v11]) == nullptr )
            {
              goto LABEL_37;
            }
          }
          --v11;
        }
        while ( v11 != 0 );
      }
      v19 = v5[1];
      if ( *(uint32_t *)(v19 + 4) != 0 && BN_mod_inverse(v19, v19, a1 + 72, a4) == 0 )
      {
        v4 = 0;
        ERR_put_error(16, 137, 3, &unk_1B15112, 0);
        goto LABEL_5;
      }
      v20 = *(int (**)(int, uint32_t, uint32_t, int *))(*(uint32_t *)a1 + 140);
      if ( v20 != nullptr )
      {
        v4 = 0;
        if ( v20(a1, v5[1], v5[1], a4) == 0
          || G4_VCALL<int>(a1, 140, v5[1], v5[1], a4) == 0 )
        {
          goto LABEL_5;
        }
      }
      if ( v26 > 2 )
      {
        for ( j = 2; v26 > j; j += 2 )
        {
          v22 = v5[j + 1];
          if ( v22 != 0 && *(uint32_t *)(v22 + 4) != 0 )
          {
            if ( G4_VCALL<int>(a1, 128, v31, v5[j >> 1], v22, a4) == 0
              || G4_VCALL<int>(a1, 128, v29, v5[j >> 1], v5[j], a4) == 0
              || BN_copy((uint32_t *)v5[j], v31) == nullptr )
            {
              goto LABEL_37;
            }
            if ( BN_copy((uint32_t *)v5[j + 1], v29) == nullptr )
            {
              v4 = 0;
              goto LABEL_5;
            }
          }
          else if ( BN_copy((uint32_t *)v5[j], (uint32_t *)v5[j >> 1]) == nullptr )
          {
            goto LABEL_37;
          }
        }
      }
      v23 = 0;
      v32 = v5;
      do
      {
        v24 = *(uint32_t **)(a3 + 4 * v23);
        if ( v24[12] != 0 )
        {
          v27 = v24 + 11;
          if ( G4_VCALL<int>(a1, 132, v29, v24 + 11, a4) == 0
            || G4_VCALL<int>(a1, 128, v24 + 1, v24 + 1, v29, a4) == 0
            || G4_VCALL<int>(a1, 128, v29, v29, v27, a4) == 0
            || G4_VCALL<int>(a1, 128, v24 + 6, v24 + 6, v29, a4) == 0 )
          {
LABEL_71:
            v5 = v32;
            v4 = 0;
            goto LABEL_5;
          }
          v25 = *(int (**)(int, uint32_t *, int *))(*(uint32_t *)a1 + 148);
          if ( v25 != nullptr )
          {
            if ( v25(a1, v27, a4) == 0 )
              goto LABEL_71;
          }
          else if ( BN_set_word(v27, 1) == 0 )
          {
            v5 = v32;
            v4 = 0;
            goto LABEL_5;
          }
          v24[16] = 1;
        }
        ++v23;
      }
      while ( v23 != a2 );
      v5 = v32;
      v4 = 1;
    }
    else
    {
      v4 = 0;
      v5 = nullptr;
      v28 = 0;
    }
LABEL_5:
    BN_CTX_end(a4);
    if ( v30 != nullptr )
      BN_CTX_free(v30);
    if ( v5 != nullptr )
    {
      v6 = v28 >> 1;
      while ( --v6 != 0 )
      {
        while ( v5[v6] != 0 )
        {
          BN_clear_free((uint8_t **)v5[v6--]);
          if ( v6 == 0 )
            goto LABEL_12;
        }
      }
LABEL_12:
      CRYPTO_free(v5);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_make_affine  (binary VA: 0x19aa380)
// Original: ec_GFp_simple_make_affine
// ----------------------------------------------------------------------------
int ec_GFp_simple_make_affine(int a1, uint32_t *a2, int *a3)
{
  int *v3;
  int v4;
  uint8_t *v6;
  int *v7;
  int v8;
  void **v9;
  uint8_t *v10;

  v3 = a3;
  v4 = 1;
  if ( a2[16] == 0 && EC_POINT_is_at_infinity(a1, a2) == 0 )
  {
    v9 = nullptr;
    if ( a3 == nullptr )
    {
      v7 = (int *)(BN_CTX_new());
      LOWORD(v4) = 0;
      v3 = v7;
      if ( v7 == nullptr )
        return v4;
      v9 = (void **)v7;
    }
    v4 = 0;
    BN_CTX_start((int)(uintptr_t)(v3));
    v10 = BN_CTX_get(v3);
    v6 = BN_CTX_get(v3);
    if ( v6 != nullptr )
    {
      v8 = (int)(uintptr_t)(v6);
      if ( EC_POINT_get_affine_coordinates_GFp(a1, a2, (int)(uintptr_t)(v10), (int)(uintptr_t)(v6), (int)(uintptr_t)(v3)) != 0
        && EC_POINT_set_affine_coordinates_GFp(a1, a2, (int)(uintptr_t)(v10), v8, (int)(uintptr_t)(v3)) != 0 )
      {
        LOWORD(v4) = 1;
        if ( a2[16] == 0 )
        {
          LOWORD(v4) = 0;
          ERR_put_error(16, 102, 68, &unk_1B15112, 0);
        }
      }
    }
    BN_CTX_end(v3);
    if ( v9 != nullptr )
      BN_CTX_free(v9);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_cmp  (binary VA: 0x19aa500)
// Original: ec_GFp_simple_cmp
// ----------------------------------------------------------------------------
int ec_GFp_simple_cmp(int a1, int *a2, int *a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int *v23;
  int *v24;
  void **v25;
  int *v26;
  int *v27;
  int (*v28)(int, int *, int *, int *);
  int *v29;
  int (*v30)(int, int *, int *, int *, int *);
  int *v31;
  int *v32;

  v4 = a4;
  if ( EC_POINT_is_at_infinity(a1, a2) != 0 )
    return EC_POINT_is_at_infinity(a1, a3) == 0;
  v5 = EC_POINT_is_at_infinity(a1, a3);
  v6 = 1;
  if ( v5 == 0 )
  {
    if ( a2[16] != 0 && a3[16] != 0 )
    {
      v11 = BN_cmp(a2 + 1, a3 + 1);
      v6 = 1;
      if ( v11 == 0 )
        return BN_cmp(a2 + 6, a3 + 6) != 0;
      return v6;
    }
    v25 = nullptr;
    v30 = *(int (**)(int, int *, int *, int *, int *))(*(uint32_t *)a1 + 128);
    v28 = *(int (**)(int, int *, int *, int *))(*(uint32_t *)a1 + 132);
    if ( a4 == nullptr )
    {
      v18 = (int *)(BN_CTX_new());
      v4 = v18;
      if ( v18 == nullptr )
        return -1;
      v25 = (void **)v18;
    }
    BN_CTX_start((int)(uintptr_t)(v4));
    v31 = (int *)BN_CTX_get(v4);
    v32 = (int *)BN_CTX_get(v4);
    v29 = (int *)BN_CTX_get(v4);
    v7 = (int *)BN_CTX_get(v4);
    v8 = -1;
    if ( v7 == nullptr )
      goto LABEL_14;
    v26 = a2 + 1;
    if ( a3[16] == 0 )
    {
      v23 = v7;
      v12 = v28(a1, v7, a3 + 11, v4);
      v8 = -1;
      if ( v12 == 0 )
        goto LABEL_14;
      v13 = v30(a1, v31, v26, v23, v4);
      v8 = -1;
      v7 = v23;
      if ( v13 == 0 )
        goto LABEL_14;
      v26 = v31;
    }
    v27 = a3 + 1;
    if ( a2[16] == 0 )
    {
      v24 = v7;
      v14 = v28(a1, v29, a2 + 11, v4);
      v8 = -1;
      if ( v14 == 0 )
        goto LABEL_14;
      v15 = v30(a1, v32, v27, v29, v4);
      v8 = -1;
      v7 = v24;
      if ( v15 == 0 )
        goto LABEL_14;
      v27 = v32;
    }
    v22 = v7;
    v9 = BN_cmp(v26, v27);
    v8 = 1;
    if ( v9 != 0 )
      goto LABEL_14;
    if ( a3[16] != 0 )
    {
      v26 = a2 + 6;
    }
    else
    {
      v19 = v30(a1, v22, v22, a3 + 11, v4);
      v8 = -1;
      if ( v19 == 0 )
        goto LABEL_14;
      v20 = v30(a1, v31, a2 + 6, v22, v4);
      v8 = -1;
      if ( v20 == 0 )
        goto LABEL_14;
    }
    if ( a2[16] != 0 )
    {
      v27 = a3 + 6;
LABEL_13:
      v8 = BN_cmp(v26, v27) != 0;
      goto LABEL_14;
    }
    v16 = v30(a1, v29, v29, a2 + 11, v4);
    v8 = -1;
    if ( v16 != 0 )
    {
      v17 = v30(a1, v32, a3 + 6, v29, v4);
      v8 = -1;
      if ( v17 != 0 )
        goto LABEL_13;
    }
LABEL_14:
    v21 = v8;
    BN_CTX_end(v4);
    v6 = v21;
    if ( v25 != nullptr )
    {
      BN_CTX_free(v25);
      return v21;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_is_on_curve  (binary VA: 0x19aa8d0)
// Original: ec_GFp_simple_is_on_curve
// ----------------------------------------------------------------------------
int ec_GFp_simple_is_on_curve(uint32_t *a1, uint32_t *a2, int *a3)
{
  int *v3;
  int v4;
  uint8_t *v5;
  int v7;
  int *v8;
  uint8_t *v9;
  void **v10;
  uint8_t *v11;
  int (*v12)(uint32_t *, uint8_t *, uint32_t *, int *);
  uint32_t *v13;
  uint8_t *v14;
  int (*v15)(uint32_t *, uint8_t *, uint8_t *, uint32_t *, int *);
  uint8_t *v16;
  uint32_t *v17;

  v3 = a3;
  v4 = 1;
  if ( EC_POINT_is_at_infinity((int)(uintptr_t)(a1), a2) != 0 )
    return v4;
  v10 = nullptr;
  v15 = *(int (**)(uint32_t *, uint8_t *, uint8_t *, uint32_t *, int *))(*a1 + 128);
  v12 = *(int (**)(uint32_t *, uint8_t *, uint32_t *, int *))(*a1 + 132);
  if ( a3 == nullptr )
  {
    v8 = (int *)(BN_CTX_new());
    v3 = v8;
    if ( v8 == nullptr )
      return -1;
    v10 = (void **)v8;
  }
  v4 = -1;
  BN_CTX_start((int)(uintptr_t)(v3));
  v11 = BN_CTX_get(v3);
  v14 = BN_CTX_get(v3);
  v16 = BN_CTX_get(v3);
  v5 = BN_CTX_get(v3);
  if ( v5 != nullptr )
  {
    v13 = a2 + 1;
    v9 = v5;
    if ( v12(a1, v11, a2 + 1, v3) != 0 )
    {
      v17 = a1 + 18;
      if ( a2[16] != 0 )
      {
        if ( BN_mod_add_quick(v11, v11, a1 + 29, v17) != 0 && v15(a1, v11, v11, v13, v3) != 0 )
        {
          v7 = BN_mod_add_quick(v11, v11, a1 + 34, v17);
LABEL_24:
          if ( v7 != 0 )
          {
            v4 = -1;
            if ( v12(a1, v14, a2 + 6, v3) != 0 )
              v4 = BN_ucmp(v14, v11) == 0;
          }
        }
      }
      else if ( v12(a1, v14, a2 + 11, v3) != 0 && v12(a1, v16, (uint32_t *)(v14), v3) != 0 && v15(a1, v9, v16, (uint32_t *)(v14), v3) != 0 )
      {
        if ( a1[39] != 0 )
        {
          if ( BN_mod_lshift1_quick(v14, v16, v17) == 0
            || BN_mod_add_quick(v14, v14, v16, v17) == 0
            || BN_mod_sub_quick(v11, v11, v14, v17) == 0 )
          {
            goto LABEL_7;
          }
        }
        else if ( v15(a1, v14, v16, a1 + 29, v3) == 0 || BN_mod_add_quick(v11, v11, v14, v17) == 0 )
        {
          goto LABEL_7;
        }
        if ( v15(a1, v11, v11, v13, v3) != 0 )
        {
          v4 = -1;
          if ( v15(a1, v14, (uint8_t *)a1 + 136, (uint32_t *)(v9), v3) != 0 )
          {
            v7 = BN_mod_add_quick(v11, v11, v14, v17);
            goto LABEL_24;
          }
        }
      }
    }
  }
LABEL_7:
  BN_CTX_end(v3);
  if ( v10 != nullptr )
    BN_CTX_free(v10);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_invert  (binary VA: 0x19aac90)
// Original: ec_GFp_simple_invert
// ----------------------------------------------------------------------------
int ec_GFp_simple_invert(int a1, uint32_t *a2)
{
  int v2;
  int v3;

  v2 = EC_POINT_is_at_infinity(a1, a2);
  v3 = 1;
  if ( v2 == 0 && a2[7] != 0 )
    return BN_usub(a2 + 6, a1 + 72, a2 + 6);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_add  (binary VA: 0x19aad10)
// Original: ec_GFp_simple_add
// ----------------------------------------------------------------------------
int ec_GFp_simple_add(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5)
{
  int *v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  bool v39;
  int v40;
  void **v41;
  uint8_t *v42;
  uint32_t *v43;
  uint8_t *v44;
  int (*v45)(int *, uint32_t *, uint32_t *, int *);
  int *v46;
  uint8_t *v47;
  uint8_t *v48;
  int (*v49)(int *, uint32_t *, uint32_t *, uint32_t *, int *);
  uint8_t *v50;
  uint32_t *v51;

  v5 = (int *)a5;
  if ( a3 == a4 )
    return EC_POINT_dbl(a1, a2, a3, a5);
  v6 = EC_POINT_is_at_infinity((int)(uintptr_t)(a1), a3);
  v38 = a4;
  if ( v6 != 0 )
    return EC_POINT_copy(a2, v38);
  if ( EC_POINT_is_at_infinity((int)(uintptr_t)(a1), a4) != 0 )
  {
    v38 = a3;
    return EC_POINT_copy(a2, v38);
  }
  v41 = nullptr;
  v49 = *(int (**)(int *, uint32_t *, uint32_t *, uint32_t *, int *))(*a1 + 128);
  v45 = *(int (**)(int *, uint32_t *, uint32_t *, int *))(*a1 + 132);
  if ( a5 == 0 )
  {
    v13 = (int *)(BN_CTX_new());
    v10 = 0;
    v5 = v13;
    if ( v13 == nullptr )
      return v10;
    v41 = (void **)v13;
  }
  BN_CTX_start((int)(uintptr_t)(v5));
  v43 = (uint32_t *)(BN_CTX_get(v5));
  v44 = BN_CTX_get(v5);
  v47 = BN_CTX_get(v5);
  v48 = BN_CTX_get(v5);
  v50 = BN_CTX_get(v5);
  v51 = (uint32_t *)(BN_CTX_get(v5));
  v42 = BN_CTX_get(v5);
  if ( v42 == nullptr )
    goto LABEL_24;
  if ( a4[16] != 0 )
  {
    if ( BN_copy(v44, a3 + 1) == nullptr || BN_copy(v47, a3 + 6) == nullptr )
      goto LABEL_24;
  }
  else
  {
    v12 = v45(a1, v43, a4 + 11, v5);
    v8 = false;
    if ( v12 == 0 )
      goto LABEL_21;
    v18 = v49(a1, (uint32_t *)(v44), a3 + 1, v43, v5);
    v8 = false;
    if ( v18 == 0 )
      goto LABEL_21;
    v19 = v49(a1, v43, v43, a4 + 11, v5);
    v8 = false;
    if ( v19 == 0 )
      goto LABEL_21;
    v20 = v49(a1, (uint32_t *)(v47), a3 + 6, v43, v5);
    v8 = false;
    if ( v20 == 0 )
      goto LABEL_21;
  }
  if ( a3[16] != 0 )
  {
    if ( BN_copy(v48, a4 + 1) != nullptr && BN_copy(v50, a4 + 6) != nullptr )
      goto LABEL_12;
LABEL_24:
    v8 = false;
    goto LABEL_21;
  }
  v14 = v45(a1, v43, a3 + 11, v5);
  v8 = false;
  if ( v14 == 0 )
    goto LABEL_21;
  v15 = v49(a1, (uint32_t *)(v48), a4 + 1, v43, v5);
  v8 = false;
  if ( v15 == 0 )
    goto LABEL_21;
  v16 = v49(a1, v43, v43, a3 + 11, v5);
  v8 = false;
  if ( v16 == 0 )
    goto LABEL_21;
  v17 = v49(a1, (uint32_t *)(v50), a4 + 6, v43, v5);
  v8 = false;
  if ( v17 == 0 )
    goto LABEL_21;
LABEL_12:
  v46 = a1 + 18;
  v7 = BN_mod_sub_quick(v51, v44, v48, a1 + 18);
  v8 = false;
  if ( v7 == 0 )
    goto LABEL_21;
  v9 = BN_mod_sub_quick(v42, v47, v50, v46);
  v8 = false;
  if ( v9 == 0 )
    goto LABEL_21;
  if ( v51[1] != 0 )
  {
    v21 = BN_mod_add_quick(v44, v44, v48, v46);
    v8 = false;
    if ( v21 == 0 )
      goto LABEL_21;
    v22 = BN_mod_add_quick(v47, v47, v50, v46);
    v8 = false;
    if ( v22 == 0 )
      goto LABEL_21;
    if ( a3[16] != 0 )
    {
      if ( a4[16] != 0 )
      {
        v36 = BN_copy(a2 + 11, v51);
        v8 = false;
        if ( v36 == nullptr )
          goto LABEL_21;
        goto LABEL_45;
      }
      v23 = BN_copy(v43, a4 + 11);
    }
    else
    {
      if ( a4[16] == 0 )
      {
        v35 = v49(a1, v43, a3 + 11, a4 + 11, v5);
        v8 = false;
        if ( v35 == 0 )
          goto LABEL_21;
LABEL_44:
        v24 = v49(a1, a2 + 11, v43, v51, v5);
        v8 = false;
        if ( v24 == 0 )
          goto LABEL_21;
LABEL_45:
        a2[16] = 0;
        v25 = v45(a1, v43, (uint32_t *)(v42), v5);
        v8 = false;
        if ( v25 != 0 )
        {
          v26 = v45(a1, (uint32_t *)(v50), v51, v5);
          v8 = false;
          if ( v26 != 0 )
          {
            v27 = v49(a1, (uint32_t *)(v48), (uint32_t *)(v44), (uint32_t *)(v50), v5);
            v8 = false;
            if ( v27 != 0 )
            {
              v28 = BN_mod_sub_quick(a2 + 1, v43, v48, v46);
              v8 = false;
              if ( v28 != 0 )
              {
                v29 = BN_mod_lshift1_quick(v43, a2 + 1, v46);
                v8 = false;
                if ( v29 != 0 )
                {
                  v30 = BN_mod_sub_quick(v43, v48, v43, v46);
                  v8 = false;
                  if ( v30 != 0 )
                  {
                    v31 = v49(a1, v43, v43, (uint32_t *)(v42), v5);
                    v8 = false;
                    if ( v31 != 0 )
                    {
                      v32 = v49(a1, v51, (uint32_t *)(v50), v51, v5);
                      v8 = false;
                      if ( v32 != 0 )
                      {
                        v33 = v49(a1, (uint32_t *)(v44), (uint32_t *)(v47), v51, v5);
                        v8 = false;
                        if ( v33 != 0 )
                        {
                          v34 = BN_mod_sub_quick(v43, v43, v44, v46);
                          v8 = false;
                          if ( v34 != 0 )
                          {
                            if ( (int)v43[1] <= 0
                              || (*(uint8_t *)*v43 & 1) == 0
                              || (v37 = BN_add(v43, v43, v46), v8 = false, v37 != 0) )
                            {
                              v8 = BN_rshift1(a2 + 6, v43) != 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_21;
      }
      v23 = BN_copy(v43, a3 + 11);
    }
    v8 = false;
    if ( v23 == nullptr )
      goto LABEL_21;
    goto LABEL_44;
  }
  if ( *((uint32_t *)v42 + 1) == 0 )
  {
    BN_CTX_end(v5);
    v10 = EC_POINT_dbl(a1, a2, a3, (int)(uintptr_t)(v5));
    goto LABEL_22;
  }
  BN_set_word(a2 + 11, 0);
  a2[16] = 0;
  v8 = true;
LABEL_21:
  v39 = v8;
  BN_CTX_end(v5);
  v10 = v39;
LABEL_22:
  if ( v41 != nullptr )
  {
    v40 = v10;
    BN_CTX_free(v41);
    return v40;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_point_set_affine_coordinates  (binary VA: 0x19ab520)
// Original: ec_GFp_simple_point_set_affine_coordinates
// ----------------------------------------------------------------------------
int ec_GFp_simple_point_set_affine_coordinates(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  void **v5;

  if ( a4 != 0 && a3 != 0 )
  {
    v5 = BN_value_one();
    return EC_POINT_set_Jprojective_coordinates_GFp(a1, a2, a3, a4, (int)(uintptr_t)(v5), a5);
  }
  else
  {
    ERR_put_error(16, 168, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ec_GFp_simple_group_set_curve  (binary VA: 0x19ab5d0)
// Original: ec_GFp_simple_group_set_curve
// ----------------------------------------------------------------------------
int ec_GFp_simple_group_set_curve(uint32_t *a1, uint32_t *a2, int a3, int a4, int *a5)
{
  int *v5;
  int v6;
  int (*v7)(uint32_t *, uint32_t *, int *, int *);
  int (*v9)(uint32_t *, uint32_t *, uint32_t *, int *);
  int *v10;
  void **v11;
  int *v12;
  uint32_t *v13;

  v5 = a5;
  if ( BN_num_bits(a2) <= 2 || (int)a2[1] <= 0 || (*(uint8_t *)*a2 & 1) == 0 )
  {
    v6 = 0;
    ERR_put_error(16, 166, 103, &unk_1B15112, 0);
    return v6;
  }
  v11 = nullptr;
  if ( a5 == nullptr )
  {
    v10 = (int *)(BN_CTX_new());
    v6 = 0;
    v5 = v10;
    if ( v10 == nullptr )
      return v6;
    v11 = (void **)v10;
  }
  v6 = 0;
  BN_CTX_start((int)(uintptr_t)(v5));
  v12 = (int *)BN_CTX_get(v5);
  if ( v12 != nullptr )
  {
    v13 = a1 + 18;
    if ( BN_copy(a1 + 18, a2) != nullptr )
    {
      BN_set_negative((unsigned int)(uintptr_t)(v13), 0);
      if ( BN_nnmod(v12, a3, a2, v5) != 0 )
      {
        v7 = *(int (**)(uint32_t *, uint32_t *, int *, int *))(*a1 + 140);
        if ( v7 != nullptr )
        {
          if ( v7(a1, a1 + 29, v12, v5) == 0 )
            goto LABEL_10;
LABEL_15:
          v6 = 0;
          if ( BN_nnmod(a1 + 34, a4, a2, v5) != 0 )
          {
            v9 = *(int (**)(uint32_t *, uint32_t *, uint32_t *, int *))(*a1 + 140);
            if ( v9 == nullptr || v9(a1, a1 + 34, a1 + 34, v5) != 0 )
            {
              v6 = 0;
              if ( BN_add_word(v12, 3) != 0 )
              {
                LOWORD(v6) = 1;
                a1[39] = BN_cmp(v12, v13) == 0;
              }
            }
          }
          goto LABEL_10;
        }
        if ( BN_copy(a1 + 29, v12) != nullptr )
          goto LABEL_15;
      }
    }
  }
LABEL_10:
  BN_CTX_end(v5);
  if ( v11 != nullptr )
    BN_CTX_free(v11);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_19AB8C0  (binary VA: 0x19ab8c0)
// Original: sub_19AB8C0
// ----------------------------------------------------------------------------
int sub_19AB8C0(uint8_t *a1)
{
  if ( *((uint32_t *)a1 + 1) != 0 )
    ENGINE_finish(*((uint32_t *)a1 + 1));
  CRYPTO_free_ex_data(13, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 16));
  OPENSSL_cleanse(a1, 0x18u);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19AB990  (binary VA: 0x19ab990)
// Original: sub_19AB990
// ----------------------------------------------------------------------------
uint32_t * sub_19AB990()
{
  uint32_t *v0;
  uint32_t *v1;
  int default_ECDH;
  int ECDH;
  void *v5;

  v0 = (uint32_t *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = v0;
  if ( v0 != nullptr )
  {
    *v0 = 0;
    v0[3] = ECDH_get_default_method();
    v1[1] = 0;
    default_ECDH = ENGINE_get_default_ECDH();
    v1[1] = default_ECDH;
    if ( default_ECDH != 0 )
    {
      ECDH = ENGINE_get_ECDH(default_ECDH);
      v1[3] = ECDH;
      if ( ECDH == 0 )
      {
        ERR_put_error(43, 101, 38, &unk_1B15112, 0);
        ENGINE_finish(v1[1]);
        v5 = v1;
        v1 = nullptr;
        CRYPTO_free(v5);
        return v1;
      }
    }
    else
    {
      ECDH = v1[3];
    }
    v1[2] = *(uint32_t *)(ECDH + 8);
    CRYPTO_new_ex_data(13, (int)(uintptr_t)(v1), (int)(uintptr_t)(v1 + 4));
  }
  else
  {
    ERR_put_error(43, 101, 65, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19ABAB0  (binary VA: 0x19abab0)
// Original: sub_19ABAB0
// ----------------------------------------------------------------------------
uint32_t * sub_19ABAB0(int a1)
{
  if ( a1 != 0 )
    return sub_19AB990();
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: ecdh_check  (binary VA: 0x19abad0)
// Original: ecdh_check
// ----------------------------------------------------------------------------
uint32_t * ecdh_check(int a1)
{
  uint32_t *result;
  uint32_t *v2;

  result = (uint32_t *)EC_KEY_get_key_method_data(a1, (int)(uintptr_t)(sub_19ABAB0), (int)(uintptr_t)(sub_19AB8C0), (int)(uintptr_t)(sub_19AB8C0));
  if ( result == nullptr )
  {
    result = sub_19AB990();
    if ( result != nullptr )
    {
      v2 = result;
      EC_KEY_insert_key_method_data(a1, (int)(uintptr_t)(result), (int)(uintptr_t)(sub_19ABAB0), (int)(uintptr_t)(sub_19AB8C0), (int)(uintptr_t)(sub_19AB8C0));
      return v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19ABCA0  (binary VA: 0x19abca0)
// Original: sub_19ABCA0
// ----------------------------------------------------------------------------
int sub_19ABCA0(void *dest, signed int a2, int a3, int a4, int (*a5)(uint8_t *, size_t, void *, signed int *))
{
  int v5;
  int *v6;
  int *v7;
  int v8;
  int *v9;
  uint8_t *v10;
  int v11;
  int degree;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  uint8_t *s;
  int v19;
  size_t v20;
  size_t n;
  size_t v22;
  size_t v23;
  unsigned int v24;
  size_t v25;
  uint8_t *v26;
  signed int v27;
  uint8_t *v28;

  v5 = a4;
  if ( a2 < 0 )
  {
    ERR_put_error(43, 100, 65, &unk_1B15112, 0);
    return -1;
  }
  v6 = (int *)(BN_CTX_new());
  v7 = v6;
  if ( v6 != nullptr )
  {
    BN_CTX_start((int)(uintptr_t)(v6));
    v26 = BN_CTX_get(v7);
    v28 = BN_CTX_get(v7);
    v8 = EC_KEY_get0_private_key(v5);
    if ( v8 != 0 )
    {
      v22 = v8;
      v9 = (int *)EC_KEY_get0_group(v5);
      v10 = EC_POINT_new(v9);
      if ( v10 != nullptr )
      {
        if ( EC_POINT_mul((int)(uintptr_t)(v9), (int)(uintptr_t)(v10), 0, a3, v22, (int)(uintptr_t)(v7)) != 0 )
        {
          v11 = EC_GROUP_method_of((int)(uintptr_t)(v9));
          if ( EC_METHOD_get_field_type(v11) == 406 )
          {
            if ( EC_POINT_get_affine_coordinates_GFp((int)(uintptr_t)(v9), v10, (int)(uintptr_t)(v26), (int)(uintptr_t)(v28), (int)(uintptr_t)(v7)) != 0 )
              goto LABEL_8;
          }
          else if ( EC_POINT_get_affine_coordinates_GF2m((int)(uintptr_t)(v9), v10, (int)(uintptr_t)(v26), (int)(uintptr_t)(v28), (int)(uintptr_t)(v7)) != 0 )
          {
LABEL_8:
            degree = EC_GROUP_get_degree((int)(uintptr_t)(v9));
            v13 = degree + 7;
            if ( degree + 7 < 0 )
              v13 = degree + 14;
            v23 = v13 >> 3;
            v14 = BN_num_bits(v26);
            v15 = v14 + 7;
            if ( v14 + 7 < 0 )
              v15 = v14 + 14;
            v16 = v15 >> 3;
            if ( v23 >= v16 )
            {
              v24 = v16;
              s = CRYPTO_malloc(v23, (int)(uintptr_t)(&unk_1B15112), 0);
              if ( s != nullptr )
              {
                memset(s, 0, v23 - v24);
                if ( BN_bn2bin(v26, &s[v23 - v24]) == v24 )
                {
                  if ( a5 != nullptr )
                  {
                    v19 = a5(s, v23, dest, &a2);
                    v27 = a2;
                    if ( v19 == 0 )
                    {
                      ERR_put_error(43, 100, 102, &unk_1B15112, 0);
                      v27 = -1;
                    }
                  }
                  else
                  {
                    v20 = a2;
                    if ( v23 < a2 )
                    {
                      a2 = v23;
                      v20 = v23;
                    }
                    v25 = v20;
                    memcpy(dest, s, v20);
                    v27 = v25;
                  }
                }
                else
                {
                  ERR_put_error(43, 100, 3, &unk_1B15112, 0);
                  v27 = -1;
                }
              }
              else
              {
                ERR_put_error(43, 100, 65, &unk_1B15112, 0);
                v27 = -1;
              }
              goto LABEL_17;
            }
            n = 68;
LABEL_16:
            s = nullptr;
            ERR_put_error(43, 100, n, &unk_1B15112, 0);
            v27 = -1;
LABEL_17:
            EC_POINT_free(v10);
            goto LABEL_18;
          }
        }
        n = 101;
        goto LABEL_16;
      }
      ERR_put_error(43, 100, 65, &unk_1B15112, 0);
    }
    else
    {
      ERR_put_error(43, 100, 100, &unk_1B15112, 0);
    }
    if ( v7 != nullptr )
    {
      s = nullptr;
      v27 = -1;
LABEL_18:
      BN_CTX_end(v7);
      BN_CTX_free((void **)v7);
      if ( s != nullptr )
        CRYPTO_free(s);
      return v27;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AC100  (binary VA: 0x19ac100)
// Original: sub_19AC100
// ----------------------------------------------------------------------------
int sub_19AC100(uint8_t *a1)
{
  if ( *((uint32_t *)a1 + 1) != 0 )
    ENGINE_finish(*((uint32_t *)a1 + 1));
  CRYPTO_free_ex_data(12, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 16));
  OPENSSL_cleanse(a1, 0x18u);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19AC1D0  (binary VA: 0x19ac1d0)
// Original: sub_19AC1D0
// ----------------------------------------------------------------------------
uint32_t * sub_19AC1D0()
{
  uint32_t *v0;
  uint32_t *v1;
  int default_ECDSA;
  int ECDSA;
  void *v5;

  v0 = (uint32_t *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = v0;
  if ( v0 != nullptr )
  {
    *v0 = 0;
    v0[3] = ECDSA_get_default_method();
    v1[1] = 0;
    default_ECDSA = ENGINE_get_default_ECDSA();
    v1[1] = default_ECDSA;
    if ( default_ECDSA != 0 )
    {
      ECDSA = ENGINE_get_ECDSA(default_ECDSA);
      v1[3] = ECDSA;
      if ( ECDSA == 0 )
      {
        ERR_put_error(42, 100, 38, &unk_1B15112, 0);
        ENGINE_finish(v1[1]);
        v5 = v1;
        v1 = nullptr;
        CRYPTO_free(v5);
        return v1;
      }
    }
    else
    {
      ECDSA = v1[3];
    }
    v1[2] = *(uint32_t *)(ECDSA + 16);
    CRYPTO_new_ex_data(12, (int)(uintptr_t)(v1), (int)(uintptr_t)(v1 + 4));
  }
  else
  {
    ERR_put_error(42, 100, 65, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AC2F0  (binary VA: 0x19ac2f0)
// Original: sub_19AC2F0
// ----------------------------------------------------------------------------
uint32_t * sub_19AC2F0(int a1)
{
  if ( a1 != 0 )
    return sub_19AC1D0();
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: ecdsa_check  (binary VA: 0x19ac310)
// Original: ecdsa_check
// ----------------------------------------------------------------------------
uint32_t * ecdsa_check(int a1)
{
  uint32_t *result;
  uint32_t *v2;

  result = (uint32_t *)EC_KEY_get_key_method_data(a1, (int)(uintptr_t)(sub_19AC2F0), (int)(uintptr_t)(sub_19AC100), (int)(uintptr_t)(sub_19AC100));
  if ( result == nullptr )
  {
    result = sub_19AC1D0();
    if ( result != nullptr )
    {
      v2 = result;
      EC_KEY_insert_key_method_data(a1, (int)(uintptr_t)(result), (int)(uintptr_t)(sub_19AC2F0), (int)(uintptr_t)(sub_19AC100), (int)(uintptr_t)(sub_19AC100));
      return v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AC5C0  (binary VA: 0x19ac5c0)
// Original: sub_19AC5C0
// ----------------------------------------------------------------------------
int sub_19AC5C0(uint8_t *a1, int a2, uint32_t **a3, int a4)
{
  int *v4;
  int v5;
  int *v6;
  int *v7;
  int v8;
  uint32_t *v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  void **v20;
  int v21;

  if ( a4 == 0
    || (v4 = (int *)EC_KEY_get0_group(a4)) == nullptr
    || (v5 = EC_KEY_get0_public_key(a4)) == 0
    || a3 == nullptr )
  {
    ERR_put_error(42, 102, 103, &unk_1B15112, 0);
    return -1;
  }
  v6 = (int *)(BN_CTX_new());
  v7 = v6;
  if ( v6 == nullptr )
  {
    ERR_put_error(42, 102, 65, &unk_1B15112, 0);
    return -1;
  }
  BN_CTX_start((int)(uintptr_t)(v6));
  v16 = BN_CTX_get(v7);
  v19 = BN_CTX_get(v7);
  v18 = BN_CTX_get(v7);
  v20 = (void **)BN_CTX_get(v7);
  v13 = BN_CTX_get(v7);
  if ( v13 == nullptr )
  {
LABEL_33:
    ERR_put_error(42, 102, 3, &unk_1B15112, 0);
    v8 = -1;
    goto LABEL_11;
  }
  if ( EC_GROUP_get_order((int)(uintptr_t)(v4), v16) )
  {
    if ( (*a3)[1] != 0 && (*a3)[3] == 0 && BN_ucmp(*a3, v16) < 0 )
    {
      v10 = a3[1];
      if ( v10[1] != 0 && v10[3] == 0 && BN_ucmp(a3[1], v16) < 0 )
      {
        if ( BN_mod_inverse(v18, a3[1], v16, v7) != 0 )
        {
          v21 = BN_num_bits(v16);
          if ( v21 < 8 * a2 )
            a2 = (v21 + 7) / 8;
          if ( BN_bin2bn(a1, a2, v20) != nullptr
            && (v21 >= 8 * a2 || BN_rshift(v20, v20, 8 - (v21 & 7)) != 0)
            && BN_mod_mul(v19, v20, v18, v16, v7) != 0
            && BN_mod_mul(v18, *a3, v18, v16, v7) != 0 )
          {
            v17 = EC_POINT_new(v4);
            if ( v17 != nullptr )
            {
              if ( EC_POINT_mul((int)(uintptr_t)(v4), (int)(uintptr_t)(v17), (int)(uintptr_t)(v19), v5, (int)(uintptr_t)(v18), (int)(uintptr_t)(v7)) != 0 )
              {
                v11 = EC_GROUP_method_of((int)(uintptr_t)(v4));
                if ( EC_METHOD_get_field_type(v11) == 406 )
                {
                  if ( EC_POINT_get_affine_coordinates_GFp((int)(uintptr_t)(v4), v17, (int)(uintptr_t)(v13), 0, (int)(uintptr_t)(v7)) != 0 )
                  {
LABEL_30:
                    if ( BN_nnmod(v19, v13, v16, v7) != 0 )
                    {
                      v12 = BN_ucmp(v19, *a3) == 0;
                    }
                    else
                    {
                      ERR_put_error(42, 102, 3, &unk_1B15112, 0);
                      v12 = -1;
                    }
                    goto LABEL_32;
                  }
                }
                else if ( EC_POINT_get_affine_coordinates_GF2m((int)(uintptr_t)(v4), v17, (int)(uintptr_t)(v13), 0, (int)(uintptr_t)(v7)) != 0 )
                {
                  goto LABEL_30;
                }
              }
              ERR_put_error(42, 102, 16, &unk_1B15112, 0);
              v12 = -1;
LABEL_32:
              v15 = v12;
              BN_CTX_end(v7);
              BN_CTX_free((void **)v7);
              EC_POINT_free(v17);
              return v15;
            }
            ERR_put_error(42, 102, 65, &unk_1B15112, 0);
            v8 = -1;
            goto LABEL_11;
          }
        }
        goto LABEL_33;
      }
    }
    ERR_put_error(42, 102, 100, &unk_1B15112, 0);
    v8 = 0;
  }
  else
  {
    ERR_put_error(42, 102, 16, &unk_1B15112, 0);
    v8 = -1;
  }
LABEL_11:
  v14 = v8;
  BN_CTX_end(v7);
  BN_CTX_free((void **)v7);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: sub_19ACB00  (binary VA: 0x19acb00)
// Original: sub_19ACB00
// ----------------------------------------------------------------------------
int sub_19ACB00(int a1, void **a2, uint8_t ***a3, uint8_t ***a4)
{
  uint8_t **v4;
  void **v5;
  uint8_t **v6;
  int v7;
  int v9;
  uint8_t *v10;
  uint8_t **v11;
  int *v12;
  void **v13;

  if ( a1 != 0 )
  {
    v12 = (int *)EC_KEY_get0_group(a1);
    if ( v12 != nullptr )
    {
      v13 = a2;
      if ( a2 == nullptr )
      {
        v13 = (void **)BN_CTX_new();
        if ( v13 == nullptr )
        {
          v7 = 0;
          ERR_put_error(42, 103, 65, &unk_1B15112, 0);
          return v7;
        }
      }
      v4 = (uint8_t **)BN_new();
      v11 = (uint8_t **)BN_new();
      v5 = (void **)BN_new();
      v6 = (uint8_t **)BN_new();
      if ( v11 != nullptr && v4 != nullptr && v6 != nullptr && v5 != nullptr )
      {
        v10 = EC_POINT_new(v12);
        if ( v10 != nullptr && EC_GROUP_get_order((int)(uintptr_t)(v12), v5) )
        {
          do
          {
            do
            {
              if ( BN_rand_range(v4, v5) == 0 )
              {
                ERR_put_error(42, 103, 104, &unk_1B15112, 0);
                goto LABEL_8;
              }
            }
            while ( v4[1] == nullptr );
            if ( EC_POINT_mul((int)(uintptr_t)(v12), (int)(uintptr_t)(v10), (int)(uintptr_t)(v4), 0, 0, (int)(uintptr_t)(v13)) == 0 )
              goto LABEL_41;
            v9 = EC_GROUP_method_of((int)(uintptr_t)(v12));
            if ( EC_METHOD_get_field_type(v9) == 406 )
            {
              if ( EC_POINT_get_affine_coordinates_GFp((int)(uintptr_t)(v12), v10, (int)(uintptr_t)(v6), 0, (int)(uintptr_t)(v13)) == 0 )
                goto LABEL_41;
            }
            else if ( EC_POINT_get_affine_coordinates_GF2m((int)(uintptr_t)(v12), v10, (int)(uintptr_t)(v6), 0, (int)(uintptr_t)(v13)) == 0 )
            {
              goto LABEL_41;
            }
            if ( BN_nnmod(v11, v6, v5, v13) == 0 )
              goto LABEL_43;
          }
          while ( v11[1] == nullptr );
          if ( BN_mod_inverse(v4, v4, v5, v13) == 0 )
          {
LABEL_43:
            ERR_put_error(42, 103, 3, &unk_1B15112, 0);
            goto LABEL_8;
          }
          if ( *a4 != nullptr )
            BN_clear_free(*a4);
          if ( *a3 != nullptr )
            BN_clear_free(*a3);
          *a4 = v11;
          *a3 = v4;
          v7 = 1;
          goto LABEL_12;
        }
LABEL_41:
        ERR_put_error(42, 103, 16, &unk_1B15112, 0);
      }
      else
      {
        ERR_put_error(42, 103, 65, &unk_1B15112, 0);
        v10 = nullptr;
      }
LABEL_8:
      if ( v4 != nullptr )
        BN_clear_free(v4);
      v7 = 0;
      if ( v11 != nullptr )
        BN_clear_free(v11);
LABEL_12:
      if ( a2 == nullptr )
        BN_CTX_free(v13);
      if ( v5 != nullptr )
        BN_free(v5);
      if ( v10 != nullptr )
        EC_POINT_free(v10);
      if ( v6 != nullptr )
        BN_clear_free(v6);
      return v7;
    }
  }
  ERR_put_error(42, 103, 67, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19ACEE0  (binary VA: 0x19acee0)
// Original: sub_19ACEE0
// ----------------------------------------------------------------------------
uint32_t ** sub_19ACEE0(uint8_t *a1, int a2, void *a3, uint32_t *a4, int a5)
{
  uint32_t *v5;
  int v6;
  uint32_t **v7;
  void **v8;
  void **v9;
  int v10;
  int v11;
  typedef void *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t **_g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef void **_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef void *_g4_t_v22;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v14)) > _g4_s1 ? (0u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v15)) > _g4_s2 ? (36u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v18)) > _g4_s5 ? (44u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v20)) > _g4_s7 ? (52u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v21)) > _g4_s8 ? (56u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v22)) > _g4_s9 ? (76u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  v22 = nullptr;
  v5 = ecdsa_check(a5);
  v17 = EC_KEY_get0_group(a5);
  v21 = EC_KEY_get0_private_key(a5);
  if ( v21 != 0 && v17 != 0 && v5 != nullptr )
  {
    v6 = ECDSA_SIG_new();
    v7 = (uint32_t **)v6;
    if ( v6 != 0 )
    {
      v20 = *(uint32_t *)(v6 + 4);
      v8 = (void **)BN_CTX_new();
      if ( v8 != nullptr )
      {
        v9 = (void **)BN_new();
        if ( v9 != nullptr )
        {
          v16 = (uint8_t **)BN_new();
          if ( v16 != nullptr )
          {
            v19 = (void **)BN_new();
            if ( v19 != nullptr )
            {
              if ( !EC_GROUP_get_order(v17, v9) )
              {
                ERR_put_error(42, 101, 16, &unk_1B15112, 0);
                goto LABEL_39;
              }
              v10 = BN_num_bits(v9);
              if ( v10 < 8 * a2 )
              {
                v11 = v10 + 7;
                if ( v10 + 7 < 0 )
                  v11 = v10 + 14;
                a2 = v11 >> 3;
              }
              v15 = v10;
              if ( BN_bin2bn(a1, a2, v19) == nullptr || v15 < 8 * a2 && BN_rshift(v19, v19, 8 - (v15 & 7)) == 0 )
              {
LABEL_45:
                ERR_put_error(42, 101, 3, &unk_1B15112, 0);
                goto LABEL_39;
              }
              while ( 1 )
              {
                if ( a3 == nullptr || a4 == nullptr )
                {
                  if ( ECDSA_sign_setup(a5, v8, &v22, v7) == 0 )
                  {
                    ERR_put_error(42, 101, 42, &unk_1B15112, 0);
                    goto LABEL_39;
                  }
                  v18 = v22;
                }
                else
                {
                  if ( BN_copy(*v7, a4) == nullptr )
                  {
                    ERR_put_error(42, 101, 65, &unk_1B15112, 0);
LABEL_39:
                    v14 = v7;
                    v7 = nullptr;
                    ECDSA_SIG_free(v14);
LABEL_36:
                    BN_CTX_free(v8);
                    if ( v19 != nullptr )
                      BN_clear_free((uint8_t **)v19);
                    goto LABEL_28;
                  }
                  v18 = a3;
                }
                if ( BN_mod_mul(v16, v21, *v7, v9, v8) == 0
                  || BN_mod_add_quick(v20, v16, v19, v9) == 0
                  || BN_mod_mul(v20, v20, v18, v9, v8) == 0 )
                {
                  goto LABEL_45;
                }
                if ( *(uint32_t *)(v20 + 4) != 0 )
                  goto LABEL_36;
                if ( a4 != nullptr && a3 != nullptr )
                {
                  ERR_put_error(42, 101, 106, &unk_1B15112, 0);
                  goto LABEL_39;
                }
              }
            }
          }
        }
        else
        {
          v16 = nullptr;
        }
      }
      else
      {
        v9 = nullptr;
        v16 = nullptr;
      }
      ERR_put_error(42, 101, 65, &unk_1B15112, 0);
      v13 = v7;
      v7 = nullptr;
      ECDSA_SIG_free(v13);
      if ( v8 != nullptr )
      {
        v19 = nullptr;
        goto LABEL_36;
      }
LABEL_28:
      if ( v16 != nullptr )
        BN_clear_free(v16);
      if ( v9 != nullptr )
        BN_free(v9);
      if ( v22 != nullptr )
        BN_clear_free((uint8_t **)v22);
    }
    else
    {
      ERR_put_error(42, 101, 65, &unk_1B15112, 0);
    }
  }
  else
  {
    v7 = nullptr;
    ERR_put_error(42, 101, 67, &unk_1B15112, 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: engine_unlocked_init  (binary VA: 0x19ad6e0)
// Original: engine_unlocked_init
// ----------------------------------------------------------------------------
int engine_unlocked_init(uint32_t *a1)
{
  int result;
  int v2;
  int (*v3)(uint32_t *);

  result = 1;
  v2 = a1[23];
  if ( v2 == 0 )
  {
    v3 = (int (*)(uint32_t *))a1[14];
    if ( v3 != nullptr )
    {
      result = v3(a1);
      if ( result == 0 )
        return result;
      v2 = a1[23];
    }
  }
  ++a1[22];
  a1[23] = v2 + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: engine_unlocked_finish  (binary VA: 0x19ad720)
// Original: engine_unlocked_finish
// ----------------------------------------------------------------------------
int engine_unlocked_finish(uint32_t *a1, int a2)
{
  bool v2;
  int (*v3)(uint32_t *);
  int v4;

  v2 = a1[23]-- == 1;
  if ( !v2 || (v3 = (int (*)(uint32_t *))a1[15]) == nullptr )
  {
    v4 = 1;
LABEL_6:
    if ( engine_free_util(a1, 0) == 0 )
    {
      v4 = 0;
      ERR_put_error(38, 191, 106, &unk_1B15112, 0);
    }
    return v4;
  }
  if ( a2 != 0 )
  {
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    v4 = ((int (*)(uint32_t *))a1[15])(a1);
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v4 = v3(a1);
  }
  if ( v4 != 0 )
    goto LABEL_6;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_19AD9E0  (binary VA: 0x19ad9e0)
// Original: sub_19AD9E0
// ----------------------------------------------------------------------------
int sub_19AD9E0(void (**a1)(void))
{
  (*a1)();
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: engine_set_all_null  (binary VA: 0x19adb30)
// Original: engine_set_all_null
// ----------------------------------------------------------------------------
uint32_t * engine_set_all_null(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[20] = 0;
  a1[21] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: engine_free_util  (binary VA: 0x19adbb0)
// Original: engine_free_util
// ----------------------------------------------------------------------------
int engine_free_util(uint32_t *a1, int a2)
{
  int result;
  int v3;
  bool v4;
  int v5;
  void (*v6)(uint32_t *);

  if ( a1 == nullptr )
  {
    ERR_put_error(38, 108, 67, &unk_1B15112, 0);
    return 0;
  }
  if ( a2 != 0 )
  {
    v5 = CRYPTO_add_lock(a1 + 22, -1, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    result = 1;
    if ( v5 > 0 )
      return result;
  }
  else
  {
    result = 1;
    v3 = a1[22] - 1;
    v4 = a1[22] == 1;
    a1[22] = v3;
    if ( v3 >= 0 && !v4 )
      return result;
  }
  engine_pkey_meths_free(a1);
  engine_pkey_asn1_meths_free(a1);
  v6 = (void (*)(uint32_t *))a1[13];
  if ( v6 != nullptr )
    v6(a1);
  CRYPTO_free_ex_data(9, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 24));
  CRYPTO_free(a1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: engine_cleanup_add_first  (binary VA: 0x19adcf0)
// Original: engine_cleanup_add_first
// ----------------------------------------------------------------------------
uint8_t * engine_cleanup_add_first(int a1)
{
  int v1;
  uint8_t *result;

  if ( dword_21405F8 != 0 || (result = (uint8_t *)sk_new_null(v1, 0), dword_21405F8 = (int)(uintptr_t)(result), result != nullptr) )
  {
    result = CRYPTO_malloc(4, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( result != nullptr )
    {
      *(uint32_t *)result = a1;
      return (uint8_t *)sk_insert(dword_21405F8, result, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: engine_cleanup_add_last  (binary VA: 0x19add70)
// Original: engine_cleanup_add_last
// ----------------------------------------------------------------------------
uint8_t * engine_cleanup_add_last(int a1, int a2)
{
  uint8_t *result;

  if ( dword_21405F8 != 0 || (result = (uint8_t *)sk_new_null(0, a1), dword_21405F8 = (int)(uintptr_t)(result), result != nullptr) )
  {
    result = CRYPTO_malloc(4, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( result != nullptr )
    {
      *(uint32_t *)result = a2;
      return (uint8_t *)sk_push(dword_21405F8, result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AE140  (binary VA: 0x19ae140)
// Original: sub_19AE140
// ----------------------------------------------------------------------------
int sub_19AE140()
{
  return ((engine_table_cleanup(&dword_2140600)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19AE170  (binary VA: 0x19ae170)
// Original: sub_19AE170
// ----------------------------------------------------------------------------
int sub_19AE170(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  const char *s;
  size_t n;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  result = *(uint32_t *)(a4 + 4);
  if ( result == 0 )
  {
    v5 = 0;
    for ( result = sk_num(a2); v5 < result; result = sk_num(a2) )
    {
      v6 = sk_value(a2, v5);
      (*(void (**)(int, uint32_t *, uint32_t, int))(v6 + 48))(v6, v10, 0, a1);
      v9 = v10[0];
      s = *(const char **)(v10[0] + 12);
      n = strlen(s);
      if ( n == *(uint32_t *)(a4 + 12) && strncasecmp(s, *(const char **)(a4 + 8), n) == 0 )
      {
        *(uint32_t *)a4 = v6;
        *(uint32_t *)(a4 + 4) = v9;
        return v9;
      }
      ++v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: engine_pkey_asn1_meths_free  (binary VA: 0x19ae4e0)
// Original: engine_pkey_asn1_meths_free
// ----------------------------------------------------------------------------
char * engine_pkey_asn1_meths_free(int a1)
{
  char *result;
  char *v2;
  char *v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  result = *(char **)(a1 + 48);
  if ( result != nullptr )
  {
    result = (char *)((int (*)(int, uint32_t, int *, uint32_t))result)(a1, 0, v5, 0);
    v2 = result;
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v3 = nullptr;
      do
      {
        while ( 1 )
        {
          result = (char *)(*(int (**)(int, void **, uint32_t, uint32_t))(a1 + 48))(
                             a1,
                             &v4,
                             0,
                             *(uint32_t *)(v5[0] + 4 * (uint32_t)(uintptr_t)(v3)));
          if ( result != nullptr )
            break;
          if ( ++v3 == v2 )
            return result;
        }
        ++v3;
        result = (char *)EVP_PKEY_asn1_free((void **)v4);
      }
      while ( v3 != v2 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AE730  (binary VA: 0x19ae730)
// Original: sub_19AE730
// ----------------------------------------------------------------------------
int sub_19AE730()
{
  return ((engine_table_cleanup(&unk_2140604)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19AE8F0  (binary VA: 0x19ae8f0)
// Original: sub_19AE8F0
// ----------------------------------------------------------------------------
int sub_19AE8F0()
{
  return ((engine_table_cleanup(&unk_2140608)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19AEAB0  (binary VA: 0x19aeab0)
// Original: sub_19AEAB0
// ----------------------------------------------------------------------------
int sub_19AEAB0()
{
  return ((engine_table_cleanup(&unk_214060C)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19AEC70  (binary VA: 0x19aec70)
// Original: sub_19AEC70
// ----------------------------------------------------------------------------
int sub_19AEC70()
{
  return ((engine_table_cleanup(&unk_2140610)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_19AEE30  (binary VA: 0x19aee30)
// Original: sub_19AEE30
// ----------------------------------------------------------------------------
int sub_19AEE30()
{
  return ((engine_table_cleanup(&unk_2140614)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: engine_pkey_meths_free  (binary VA: 0x19af110)
// Original: engine_pkey_meths_free
// ----------------------------------------------------------------------------
char * engine_pkey_meths_free(int a1)
{
  char *result;
  char *v2;
  char *v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  result = *(char **)(a1 + 44);
  if ( result != nullptr )
  {
    result = (char *)((int (*)(int, uint32_t, int *, uint32_t))result)(a1, 0, v5, 0);
    v2 = result;
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v3 = nullptr;
      do
      {
        while ( 1 )
        {
          result = (char *)(*(int (**)(int, void **, uint32_t, uint32_t))(a1 + 44))(
                             a1,
                             &v4,
                             0,
                             *(uint32_t *)(v5[0] + 4 * (uint32_t)(uintptr_t)(v3)));
          if ( result != nullptr )
            break;
          if ( ++v3 == v2 )
            return result;
        }
        ++v3;
        result = (char *)EVP_PKEY_meth_free(v4);
      }
      while ( v3 != v2 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF1A0  (binary VA: 0x19af1a0)
// Original: sub_19AF1A0
// ----------------------------------------------------------------------------
unsigned int sub_19AF1A0(uint32_t *a1)
{
  unsigned int v1;

  v1 = (*a1 >> 12) & 0xFFF ^ *a1 ^ HIBYTE(*a1);
  return v1 ^ (13 * (v1 % 0x13));
}

// ----------------------------------------------------------------------------
// Function: sub_19AF1E0  (binary VA: 0x19af1e0)
// Original: sub_19AF1E0
// ----------------------------------------------------------------------------
int sub_19AF1E0(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF1F0  (binary VA: 0x19af1f0)
// Original: sub_19AF1F0
// ----------------------------------------------------------------------------
int sub_19AF1F0(int a1, int *a2)
{
  int result;
  int *v4;
  int *v5;

  result = *a2;
  if ( *a2 != 0 )
  {
    v4 = a2;
    do
    {
      if ( a1 != 0 )
        *v4 = (a1 << 24) | result;
      v5 = v4;
      v4 += 2;
      (*(void (**)(int *))(dword_2140620 + 12))(v5);
      result = *v4;
    }
    while ( *v4 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF260  (binary VA: 0x19af260)
// Original: sub_19AF260
// ----------------------------------------------------------------------------
int sub_19AF260(int result)
{
  void **v1;
  int i;

  v1 = (void **)result;
  if ( result != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      if ( v1[i + 34] != nullptr && ((int)(uintptr_t)(v1[i + 50]) & 1) != 0 )
      {
        CRYPTO_free(v1[i + 34]);
        v1[i + 34] = nullptr;
      }
      v1[i + 50] = nullptr;
    }
    return CRYPTO_free(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF2D0  (binary VA: 0x19af2d0)
// Original: sub_19AF2D0
// ----------------------------------------------------------------------------
int * sub_19AF2D0()
{
  int *v0;

  CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  v0 = (int *)(uintptr_t)(off_20CB818);
  off_20CB818 = (uint32_t)(uintptr_t)((int *)((char *)off_20CB818 + 1));
  CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF360  (binary VA: 0x19af360)
// Original: sub_19AF360
// ----------------------------------------------------------------------------
void sub_19AF360()
{
  CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( dword_214062C != 0 )
  {
    lh_free((void *)dword_214062C);
    dword_214062C = 0;
  }
  CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19AF3F0  (binary VA: 0x19af3f0)
// Original: sub_19AF3F0
// ----------------------------------------------------------------------------
void sub_19AF3F0(uint32_t *a1)
{
  if ( a1 != nullptr && *a1 != 0 && CRYPTO_add_lock(&dword_2140624, -1, 1, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
    *a1 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF470  (binary VA: 0x19af470)
// Original: sub_19AF470
// ----------------------------------------------------------------------------
int sub_19AF470(int a1)
{
  int v1;

  CRYPTO_lock(9, 1, &unk_1B15112, 0);
  v1 = dword_2140628;
  if ( a1 != 0 && dword_2140628 == 0 )
  {
    CRYPTO_push_info("int_thread_get (err.c)", &unk_1B15112, 0);
    dword_2140628 = (uint32_t)(uintptr_t)(lh_new(sub_19AF660, sub_19AF630));
    CRYPTO_pop_info();
    v1 = dword_2140628;
  }
  if ( v1 != 0 )
    ++dword_2140624;
  CRYPTO_lock(10, 1, &unk_1B15112, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF550  (binary VA: 0x19af550)
// Original: sub_19AF550
// ----------------------------------------------------------------------------
int sub_19AF550(int a1)
{
  int v1;

  CRYPTO_lock(9, 1, &unk_1B15112, 0);
  v1 = dword_214062C;
  if ( a1 != 0 && dword_214062C == 0 )
  {
    CRYPTO_push_info("int_err_get (err.c)", &unk_1B15112, 0);
    dword_214062C = (uint32_t)(uintptr_t)(lh_new(sub_19AF1A0, sub_19AF1E0));
    CRYPTO_pop_info();
    v1 = dword_214062C;
  }
  CRYPTO_lock(10, 1, &unk_1B15112, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF630  (binary VA: 0x19af630)
// Original: sub_19AF630
// ----------------------------------------------------------------------------
int sub_19AF630(void *a1, void *a2)
{
  return CRYPTO_THREADID_cmp(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19AF660  (binary VA: 0x19af660)
// Original: sub_19AF660
// ----------------------------------------------------------------------------
int sub_19AF660(int a1)
{
  return 13 * CRYPTO_THREADID_hash(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19AF690  (binary VA: 0x19af690)
// Original: sub_19AF690
// ----------------------------------------------------------------------------
void sub_19AF690()
{
  if ( dword_2140620 == 0 )
  {
    CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dword_2140620 == 0 )
      dword_2140620 = (int)(uintptr_t)(&off_203F760);
    CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19AF730  (binary VA: 0x19af730)
// Original: sub_19AF730
// ----------------------------------------------------------------------------
int sub_19AF730(int a1)
{
  int v1;
  int v2;

  sub_19AF690();
  v1 = 0;
  v2 = (*(int (**)(uint32_t))dword_2140620)(0);
  if ( v2 != 0 )
  {
    CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = lh_delete(v2, a1);
    CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF7E0  (binary VA: 0x19af7e0)
// Original: sub_19AF7E0
// ----------------------------------------------------------------------------
int sub_19AF7E0(int a1)
{
  int result;
  int v2;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  sub_19AF690();
  result = (*(int (**)(uint32_t))(dword_2140620 + 20))(0);
  v3 = result;
  if ( result != 0 )
  {
    CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v2 = lh_delete(v3, a1);
    if ( dword_2140624 == 1 && dword_2140628 != 0 && lh_num_items(dword_2140628) == 0 )
    {
      lh_free((void *)dword_2140628);
      dword_2140628 = 0;
    }
    CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    result = (*(int (**)(int *))(dword_2140620 + 24))(&v3);
    if ( v2 != 0 )
      return sub_19AF260(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF8E0  (binary VA: 0x19af8e0)
// Original: sub_19AF8E0
// ----------------------------------------------------------------------------
int sub_19AF8E0(int a1)
{
  int v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v1 = 0;
  sub_19AF690();
  v3 = (*(int (**)(int))(dword_2140620 + 20))(1);
  if ( v3 != 0 )
  {
    CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = (int)(uintptr_t)(lh_insert(v3, a1));
    CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    (*(void (**)(int *))(dword_2140620 + 24))(&v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AF9A0  (binary VA: 0x19af9a0)
// Original: sub_19AF9A0
// ----------------------------------------------------------------------------
int sub_19AF9A0(int a1)
{
  int v1;
  int v2;

  sub_19AF690();
  v1 = 0;
  v2 = (*(int (**)(int))dword_2140620)(1);
  if ( v2 != 0 )
  {
    CRYPTO_lock(9, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = (int)(uintptr_t)(lh_insert(v2, a1));
    CRYPTO_lock(10, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AFA50  (binary VA: 0x19afa50)
// Original: sub_19AFA50
// ----------------------------------------------------------------------------
int sub_19AFA50(int a1)
{
  int v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v1 = 0;
  sub_19AF690();
  v3 = (*(int (**)(uint32_t))(dword_2140620 + 20))(0);
  if ( v3 != 0 )
  {
    CRYPTO_lock(5, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = (int)(uintptr_t)(lh_retrieve(v3, a1));
    CRYPTO_lock(6, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    (*(void (**)(int *))(dword_2140620 + 24))(&v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19AFB10  (binary VA: 0x19afb10)
// Original: sub_19AFB10
// ----------------------------------------------------------------------------
int sub_19AFB10(int a1)
{
  int v1;
  int v2;

  sub_19AF690();
  v1 = 0;
  v2 = (*(int (**)(uint32_t))dword_2140620)(0);
  if ( v2 != 0 )
  {
    CRYPTO_lock(5, 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = (int)(uintptr_t)(lh_retrieve(v2, a1));
    CRYPTO_lock(6, 1, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B0530  (binary VA: 0x19b0530)
// Original: sub_19B0530
// ----------------------------------------------------------------------------
int sub_19B0530(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  uint32_t *state;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  void *v13;
  uint32_t *v14;
  int v16;
  bool v17;

  v17 = a1 != 0;
  state = (uint32_t *)(ERR_get_state());
  if ( a2 != 0 && v17 )
  {
    if ( a3 != nullptr )
      *a3 = (uint32_t)(uintptr_t)(&unk_1B15112);
    if ( a4 != nullptr )
      *a4 = 0;
    if ( a5 != nullptr )
      *a5 = (uint32_t)(uintptr_t)(&unk_1B15112);
    result = 68;
    if ( a6 != nullptr )
      *a6 = 0;
  }
  else
  {
    v8 = state[99];
    v9 = state[98];
    result = 0;
    if ( v8 != v9 )
    {
      if ( a2 == 0 )
        v9 = (v8 + 1) % 16;
      result = state[v9 + 18];
      if ( v17 )
      {
        state[99] = v9;
        state[v9 + 18] = 0;
      }
      if ( a4 != nullptr && a3 != nullptr )
      {
        if ( state[v9 + 66] != 0 )
        {
          *a3 = state[v9 + 66];
          *a4 = state[v9 + 82];
        }
        else
        {
          *a3 = (uint32_t)(uintptr_t)("NA");
          *a4 = 0;
        }
      }
      if ( a5 != nullptr )
      {
        v10 = state[v9 + 34];
        if ( v10 != 0 )
        {
          *a5 = v10;
          if ( a6 != nullptr )
            *a6 = state[v9 + 50];
        }
        else
        {
          *a5 = (uint32_t)(uintptr_t)(&unk_1B15112);
          if ( a6 != nullptr )
            *a6 = 0;
        }
      }
      else if ( v17 )
      {
        v11 = v9 + 32;
        v12 = v9 + 48;
        v13 = (void *)state[v9 + 34];
        if ( v13 != nullptr && (state[v12 + 2] & 1) != 0 )
        {
          v16 = result;
          v14 = state;
          CRYPTO_free(v13);
          state = v14;
          v14[v11 + 2] = 0;
          result = v16;
        }
        state[v12 + 2] = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_add_all_algorithms_noconf  (binary VA: 0x19b0e50)
// Original: OPENSSL_add_all_algorithms_noconf
// ----------------------------------------------------------------------------
int OPENSSL_add_all_algorithms_noconf()
{
  OPENSSL_cpuid_setup();
  OpenSSL_add_all_ciphers();
  return OpenSSL_add_all_digests();
}

// ----------------------------------------------------------------------------
// Function: OpenSSL_add_all_ciphers  (binary VA: 0x19b0e80)
// Original: OpenSSL_add_all_ciphers
// ----------------------------------------------------------------------------
int OpenSSL_add_all_ciphers()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
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
  int v48;
  int v49;
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
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;

  v0 = (int)(uintptr_t)(EVP_des_cfb64());
  EVP_add_cipher(v0);
  v1 = (int)(uintptr_t)(EVP_des_cfb1());
  EVP_add_cipher(v1);
  v2 = (int)(uintptr_t)(EVP_des_cfb8());
  EVP_add_cipher(v2);
  v3 = (int)(uintptr_t)(EVP_des_ede_cfb64());
  EVP_add_cipher(v3);
  v4 = (int)(uintptr_t)(EVP_des_ede3_cfb64());
  EVP_add_cipher(v4);
  v5 = (int)(uintptr_t)(EVP_des_ede3_cfb1());
  EVP_add_cipher(v5);
  v6 = (int)(uintptr_t)(EVP_des_ede3_cfb8());
  EVP_add_cipher(v6);
  v7 = (int)(uintptr_t)(EVP_des_ofb());
  EVP_add_cipher(v7);
  v8 = (int)(uintptr_t)(EVP_des_ede_ofb());
  EVP_add_cipher(v8);
  v9 = (int)(uintptr_t)(EVP_des_ede3_ofb());
  EVP_add_cipher(v9);
  v10 = (int)(uintptr_t)(EVP_desx_cbc());
  EVP_add_cipher(v10);
  OBJ_NAME_add("DESX", 32770, "DESX-CBC");
  OBJ_NAME_add("desx", 32770, "DESX-CBC");
  v11 = (int)(uintptr_t)(EVP_des_cbc());
  EVP_add_cipher(v11);
  OBJ_NAME_add("DES", 32770, "DES-CBC");
  OBJ_NAME_add("des", 32770, "DES-CBC");
  v12 = (int)(uintptr_t)(EVP_des_ede_cbc());
  EVP_add_cipher(v12);
  v13 = (int)(uintptr_t)(EVP_des_ede3_cbc());
  EVP_add_cipher(v13);
  OBJ_NAME_add("DES3", 32770, "DES-EDE3-CBC");
  OBJ_NAME_add("des3", 32770, "DES-EDE3-CBC");
  v14 = (int)(uintptr_t)(EVP_des_ecb());
  EVP_add_cipher(v14);
  v15 = (int)(uintptr_t)(EVP_des_ede());
  EVP_add_cipher(v15);
  v16 = (int)(uintptr_t)(EVP_des_ede3());
  EVP_add_cipher(v16);
  v17 = (int)(uintptr_t)(EVP_rc4());
  EVP_add_cipher(v17);
  v18 = (int)(uintptr_t)(EVP_rc4_40());
  EVP_add_cipher(v18);
  v19 = (int)(uintptr_t)(EVP_idea_ecb());
  EVP_add_cipher(v19);
  v20 = (int)(uintptr_t)(EVP_idea_cfb64());
  EVP_add_cipher(v20);
  v21 = (int)(uintptr_t)(EVP_idea_ofb());
  EVP_add_cipher(v21);
  v22 = (int)(uintptr_t)(EVP_idea_cbc());
  EVP_add_cipher(v22);
  OBJ_NAME_add("IDEA", 32770, "IDEA-CBC");
  OBJ_NAME_add("idea", 32770, "IDEA-CBC");
  v23 = (int)(uintptr_t)(EVP_seed_ecb());
  EVP_add_cipher(v23);
  v24 = (int)(uintptr_t)(EVP_seed_cfb128());
  EVP_add_cipher(v24);
  v25 = (int)(uintptr_t)(EVP_seed_ofb());
  EVP_add_cipher(v25);
  v26 = (int)(uintptr_t)(EVP_seed_cbc());
  EVP_add_cipher(v26);
  OBJ_NAME_add("SEED", 32770, "SEED-CBC");
  OBJ_NAME_add("seed", 32770, "SEED-CBC");
  v27 = (int)(uintptr_t)(EVP_rc2_ecb());
  EVP_add_cipher(v27);
  v28 = (int)(uintptr_t)(EVP_rc2_cfb64());
  EVP_add_cipher(v28);
  v29 = (int)(uintptr_t)(EVP_rc2_ofb());
  EVP_add_cipher(v29);
  v30 = (int)(uintptr_t)(EVP_rc2_cbc());
  EVP_add_cipher(v30);
  v31 = (int)(uintptr_t)(EVP_rc2_40_cbc());
  EVP_add_cipher(v31);
  v32 = (int)(uintptr_t)(EVP_rc2_64_cbc());
  EVP_add_cipher(v32);
  OBJ_NAME_add("RC2", 32770, "RC2-CBC");
  OBJ_NAME_add("rc2", 32770, "RC2-CBC");
  v33 = (int)(uintptr_t)(EVP_bf_ecb());
  EVP_add_cipher(v33);
  v34 = (int)(uintptr_t)(EVP_bf_cfb64());
  EVP_add_cipher(v34);
  v35 = (int)(uintptr_t)(EVP_bf_ofb());
  EVP_add_cipher(v35);
  v36 = (int)(uintptr_t)(EVP_bf_cbc());
  EVP_add_cipher(v36);
  OBJ_NAME_add("BF", 32770, "BF-CBC");
  OBJ_NAME_add("bf", 32770, "BF-CBC");
  OBJ_NAME_add("blowfish", 32770, "BF-CBC");
  v37 = (int)(uintptr_t)(EVP_cast5_ecb());
  EVP_add_cipher(v37);
  v38 = (int)(uintptr_t)(EVP_cast5_cfb64());
  EVP_add_cipher(v38);
  v39 = (int)(uintptr_t)(EVP_cast5_ofb());
  EVP_add_cipher(v39);
  v40 = (int)(uintptr_t)(EVP_cast5_cbc());
  EVP_add_cipher(v40);
  OBJ_NAME_add("CAST", 32770, "CAST5-CBC");
  OBJ_NAME_add("cast", 32770, "CAST5-CBC");
  OBJ_NAME_add("CAST-cbc", 32770, "CAST5-CBC");
  OBJ_NAME_add("cast-cbc", 32770, "CAST5-CBC");
  v41 = (int)(uintptr_t)(EVP_aes_128_ecb());
  EVP_add_cipher(v41);
  v42 = (int)(uintptr_t)(EVP_aes_128_cbc());
  EVP_add_cipher(v42);
  v43 = (int)(uintptr_t)(EVP_aes_128_cfb128());
  EVP_add_cipher(v43);
  v44 = (int)(uintptr_t)(EVP_aes_128_cfb1());
  EVP_add_cipher(v44);
  v45 = (int)(uintptr_t)(EVP_aes_128_cfb8());
  EVP_add_cipher(v45);
  v46 = (int)(uintptr_t)(EVP_aes_128_ofb());
  EVP_add_cipher(v46);
  OBJ_NAME_add("AES128", 32770, "AES-128-CBC");
  OBJ_NAME_add("aes128", 32770, "AES-128-CBC");
  v47 = (int)(uintptr_t)(EVP_aes_192_ecb());
  EVP_add_cipher(v47);
  v48 = (int)(uintptr_t)(EVP_aes_192_cbc());
  EVP_add_cipher(v48);
  v49 = (int)(uintptr_t)(EVP_aes_192_cfb128());
  EVP_add_cipher(v49);
  v50 = (int)(uintptr_t)(EVP_aes_192_cfb1());
  EVP_add_cipher(v50);
  v51 = (int)(uintptr_t)(EVP_aes_192_cfb8());
  EVP_add_cipher(v51);
  v52 = (int)(uintptr_t)(EVP_aes_192_ofb());
  EVP_add_cipher(v52);
  OBJ_NAME_add("AES192", 32770, "AES-192-CBC");
  OBJ_NAME_add("aes192", 32770, "AES-192-CBC");
  v53 = (int)(uintptr_t)(EVP_aes_256_ecb());
  EVP_add_cipher(v53);
  v54 = (int)(uintptr_t)(EVP_aes_256_cbc());
  EVP_add_cipher(v54);
  v55 = (int)(uintptr_t)(EVP_aes_256_cfb128());
  EVP_add_cipher(v55);
  v56 = (int)(uintptr_t)(EVP_aes_256_cfb1());
  EVP_add_cipher(v56);
  v57 = (int)(uintptr_t)(EVP_aes_256_cfb8());
  EVP_add_cipher(v57);
  v58 = (int)(uintptr_t)(EVP_aes_256_ofb());
  EVP_add_cipher(v58);
  OBJ_NAME_add("AES256", 32770, "AES-256-CBC");
  OBJ_NAME_add("aes256", 32770, "AES-256-CBC");
  v59 = (int)(uintptr_t)(EVP_camellia_128_ecb());
  EVP_add_cipher(v59);
  v60 = (int)(uintptr_t)(EVP_camellia_128_cbc());
  EVP_add_cipher(v60);
  v61 = (int)(uintptr_t)(EVP_camellia_128_cfb128());
  EVP_add_cipher(v61);
  v62 = (int)(uintptr_t)(EVP_camellia_128_cfb1());
  EVP_add_cipher(v62);
  v63 = (int)(uintptr_t)(EVP_camellia_128_cfb8());
  EVP_add_cipher(v63);
  v64 = (int)(uintptr_t)(EVP_camellia_128_ofb());
  EVP_add_cipher(v64);
  OBJ_NAME_add("CAMELLIA128", 32770, "CAMELLIA-128-CBC");
  OBJ_NAME_add("camellia128", 32770, "CAMELLIA-128-CBC");
  v65 = (int)(uintptr_t)(EVP_camellia_192_ecb());
  EVP_add_cipher(v65);
  v66 = (int)(uintptr_t)(EVP_camellia_192_cbc());
  EVP_add_cipher(v66);
  v67 = (int)(uintptr_t)(EVP_camellia_192_cfb128());
  EVP_add_cipher(v67);
  v68 = (int)(uintptr_t)(EVP_camellia_192_cfb1());
  EVP_add_cipher(v68);
  v69 = (int)(uintptr_t)(EVP_camellia_192_cfb8());
  EVP_add_cipher(v69);
  v70 = (int)(uintptr_t)(EVP_camellia_192_ofb());
  EVP_add_cipher(v70);
  OBJ_NAME_add("CAMELLIA192", 32770, "CAMELLIA-192-CBC");
  OBJ_NAME_add("camellia192", 32770, "CAMELLIA-192-CBC");
  v71 = (int)(uintptr_t)(EVP_camellia_256_ecb());
  EVP_add_cipher(v71);
  v72 = (int)(uintptr_t)(EVP_camellia_256_cbc());
  EVP_add_cipher(v72);
  v73 = (int)(uintptr_t)(EVP_camellia_256_cfb128());
  EVP_add_cipher(v73);
  v74 = (int)(uintptr_t)(EVP_camellia_256_cfb1());
  EVP_add_cipher(v74);
  v75 = (int)(uintptr_t)(EVP_camellia_256_cfb8());
  EVP_add_cipher(v75);
  v76 = (int)(uintptr_t)(EVP_camellia_256_ofb());
  EVP_add_cipher(v76);
  OBJ_NAME_add("CAMELLIA256", 32770, "CAMELLIA-256-CBC");
  return OBJ_NAME_add("camellia256", 32770, "CAMELLIA-256-CBC");
}

// ----------------------------------------------------------------------------
// Function: OpenSSL_add_all_digests  (binary VA: 0x19b1600)
// Original: OpenSSL_add_all_digests
// ----------------------------------------------------------------------------
int OpenSSL_add_all_digests()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v0 = (int)(uintptr_t)(EVP_md4());
  EVP_add_digest(v0);
  v1 = (int)(uintptr_t)(EVP_md5());
  EVP_add_digest(v1);
  OBJ_NAME_add("ssl2-md5", 32769, "MD5");
  OBJ_NAME_add("ssl3-md5", 32769, "MD5");
  v2 = (int)(uintptr_t)(EVP_sha());
  EVP_add_digest(v2);
  v3 = (int)(uintptr_t)(EVP_dss());
  EVP_add_digest(v3);
  v4 = (int)(uintptr_t)(EVP_sha1());
  EVP_add_digest(v4);
  OBJ_NAME_add("ssl3-sha1", 32769, "SHA1");
  OBJ_NAME_add("RSA-SHA1-2", 32769, "RSA-SHA1");
  v5 = (int)(uintptr_t)(EVP_dss1());
  EVP_add_digest(v5);
  OBJ_NAME_add("DSA-SHA1-old", 32769, "DSA-SHA1");
  OBJ_NAME_add("DSS1", 32769, "DSA-SHA1");
  OBJ_NAME_add("dss1", 32769, "DSA-SHA1");
  v6 = (int)(uintptr_t)(EVP_ecdsa());
  EVP_add_digest(v6);
  v7 = (int)(uintptr_t)(EVP_mdc2());
  EVP_add_digest(v7);
  v8 = (int)(uintptr_t)(EVP_ripemd160());
  EVP_add_digest(v8);
  OBJ_NAME_add("ripemd", 32769, "RIPEMD160");
  OBJ_NAME_add("rmd160", 32769, "RIPEMD160");
  v9 = (int)(uintptr_t)(EVP_sha224());
  EVP_add_digest(v9);
  v10 = (int)(uintptr_t)(EVP_sha256());
  EVP_add_digest(v10);
  v11 = (int)(uintptr_t)(EVP_sha384());
  EVP_add_digest(v11);
  v12 = (int)(uintptr_t)(EVP_sha512());
  EVP_add_digest(v12);
  v13 = (int)(uintptr_t)(EVP_whirlpool());
  return EVP_add_digest(v13);
}

// ----------------------------------------------------------------------------
// Function: sub_19B2170  (binary VA: 0x19b2170)
// Original: sub_19B2170
// ----------------------------------------------------------------------------
int sub_19B2170(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    AES_cfb8_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2210  (binary VA: 0x19b2210)
// Original: sub_19B2210
// ----------------------------------------------------------------------------
int sub_19B2210(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    AES_cfb8_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B22B0  (binary VA: 0x19b22b0)
// Original: sub_19B22B0
// ----------------------------------------------------------------------------
int sub_19B22B0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    AES_cfb8_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2350  (binary VA: 0x19b2350)
// Original: sub_19B2350
// ----------------------------------------------------------------------------
int sub_19B2350(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v8;
  int v10;
  int v11;

  v4 = 0x8000000;
  v5 = a4;
  if ( a4 < 0x8000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v8 = 8 * v5;
    if ( (*(uint8_t *)(a1 + 93) & 0x20) != 0 )
      v8 = v5;
    v5 -= v4;
    v10 = a3;
    v11 = a2;
    AES_cfb1_encrypt(a3, a2, v8, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2400  (binary VA: 0x19b2400)
// Original: sub_19B2400
// ----------------------------------------------------------------------------
int sub_19B2400(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v8;
  int v10;
  int v11;

  v4 = 0x8000000;
  v5 = a4;
  if ( a4 < 0x8000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v8 = 8 * v5;
    if ( (*(uint8_t *)(a1 + 93) & 0x20) != 0 )
      v8 = v5;
    v5 -= v4;
    v10 = a3;
    v11 = a2;
    AES_cfb1_encrypt(a3, a2, v8, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B24B0  (binary VA: 0x19b24b0)
// Original: sub_19B24B0
// ----------------------------------------------------------------------------
int sub_19B24B0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v8;
  int v10;
  int v11;

  v4 = 0x8000000;
  v5 = a4;
  if ( a4 < 0x8000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v8 = 8 * v5;
    if ( (*(uint8_t *)(a1 + 93) & 0x20) != 0 )
      v8 = v5;
    v5 -= v4;
    v10 = a3;
    v11 = a2;
    AES_cfb1_encrypt(a3, a2, v8, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2560  (binary VA: 0x19b2560)
// Original: sub_19B2560
// ----------------------------------------------------------------------------
int sub_19B2560(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      AES_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B25E0  (binary VA: 0x19b25e0)
// Original: sub_19B25E0
// ----------------------------------------------------------------------------
int sub_19B25E0(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      AES_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2660  (binary VA: 0x19b2660)
// Original: sub_19B2660
// ----------------------------------------------------------------------------
int sub_19B2660(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      AES_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B26E0  (binary VA: 0x19b26e0)
// Original: sub_19B26E0
// ----------------------------------------------------------------------------
int sub_19B26E0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      AES_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    AES_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B27E0  (binary VA: 0x19b27e0)
// Original: sub_19B27E0
// ----------------------------------------------------------------------------
int sub_19B27E0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      AES_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    AES_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B28E0  (binary VA: 0x19b28e0)
// Original: sub_19B28E0
// ----------------------------------------------------------------------------
int sub_19B28E0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      AES_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    AES_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B29E0  (binary VA: 0x19b29e0)
// Original: sub_19B29E0
// ----------------------------------------------------------------------------
int sub_19B29E0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    AES_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2A80  (binary VA: 0x19b2a80)
// Original: sub_19B2A80
// ----------------------------------------------------------------------------
int sub_19B2A80(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    AES_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2B20  (binary VA: 0x19b2b20)
// Original: sub_19B2B20
// ----------------------------------------------------------------------------
int sub_19B2B20(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    AES_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2BC0  (binary VA: 0x19b2bc0)
// Original: sub_19B2BC0
// ----------------------------------------------------------------------------
int sub_19B2BC0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      AES_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    AES_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2CB0  (binary VA: 0x19b2cb0)
// Original: sub_19B2CB0
// ----------------------------------------------------------------------------
int sub_19B2CB0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      AES_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    AES_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2DA0  (binary VA: 0x19b2da0)
// Original: sub_19B2DA0
// ----------------------------------------------------------------------------
int sub_19B2DA0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      AES_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    AES_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B2E90  (binary VA: 0x19b2e90)
// Original: sub_19B2E90
// ----------------------------------------------------------------------------
int sub_19B2E90(uint32_t *a1, int a2, int a3, int a4)
{
  if ( a4 != 0 || (*(uint32_t *)(*a1 + 16) & 0xF0007u) - 3 <= 1 )
  {
    if ( (int)AES_set_encrypt_key(a2, 8 * a1[22], a1[24]) >= 0 )
      return 1;
  }
  else if ( (int)AES_set_decrypt_key(a2, 8 * a1[22], a1[24]) >= 0 )
  {
    return 1;
  }
  ERR_put_error(6, 133, 143, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3190  (binary VA: 0x19b3190)
// Original: sub_19B3190
// ----------------------------------------------------------------------------
int sub_19B3190(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      BF_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3210  (binary VA: 0x19b3210)
// Original: sub_19B3210
// ----------------------------------------------------------------------------
int sub_19B3210(int a1, int a2)
{
  int v2;

  v2 = EVP_CIPHER_CTX_key_length(a1);
  BF_set_key(*(uint32_t *)(a1 + 96), v2, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3260  (binary VA: 0x19b3260)
// Original: sub_19B3260
// ----------------------------------------------------------------------------
int sub_19B3260(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      BF_ofb64_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    BF_ofb64_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3360  (binary VA: 0x19b3360)
// Original: sub_19B3360
// ----------------------------------------------------------------------------
int sub_19B3360(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    BF_cfb64_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3400  (binary VA: 0x19b3400)
// Original: sub_19B3400
// ----------------------------------------------------------------------------
int sub_19B3400(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      BF_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    BF_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3570  (binary VA: 0x19b3570)
// Original: sub_19B3570
// ----------------------------------------------------------------------------
int sub_19B3570(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    Camellia_cfb8_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3610  (binary VA: 0x19b3610)
// Original: sub_19B3610
// ----------------------------------------------------------------------------
int sub_19B3610(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    Camellia_cfb8_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B36B0  (binary VA: 0x19b36b0)
// Original: sub_19B36B0
// ----------------------------------------------------------------------------
int sub_19B36B0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    Camellia_cfb8_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3750  (binary VA: 0x19b3750)
// Original: sub_19B3750
// ----------------------------------------------------------------------------
int sub_19B3750(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v8;
  int v10;
  int v11;

  v4 = 0x8000000;
  v5 = a4;
  if ( a4 < 0x8000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v8 = 8 * v5;
    if ( (*(uint8_t *)(a1 + 93) & 0x20) != 0 )
      v8 = v5;
    v5 -= v4;
    v10 = a3;
    v11 = a2;
    Camellia_cfb1_encrypt(a3, a2, v8, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3800  (binary VA: 0x19b3800)
// Original: sub_19B3800
// ----------------------------------------------------------------------------
int sub_19B3800(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v8;
  int v10;
  int v11;

  v4 = 0x8000000;
  v5 = a4;
  if ( a4 < 0x8000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v8 = 8 * v5;
    if ( (*(uint8_t *)(a1 + 93) & 0x20) != 0 )
      v8 = v5;
    v5 -= v4;
    v10 = a3;
    v11 = a2;
    Camellia_cfb1_encrypt(a3, a2, v8, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B38B0  (binary VA: 0x19b38b0)
// Original: sub_19B38B0
// ----------------------------------------------------------------------------
int sub_19B38B0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v8;
  int v10;
  int v11;

  v4 = 0x8000000;
  v5 = a4;
  if ( a4 < 0x8000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v8 = 8 * v5;
    if ( (*(uint8_t *)(a1 + 93) & 0x20) != 0 )
      v8 = v5;
    v5 -= v4;
    v10 = a3;
    v11 = a2;
    Camellia_cfb1_encrypt(a3, a2, v8, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3960  (binary VA: 0x19b3960)
// Original: sub_19B3960
// ----------------------------------------------------------------------------
int sub_19B3960(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      Camellia_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B39E0  (binary VA: 0x19b39e0)
// Original: sub_19B39E0
// ----------------------------------------------------------------------------
int sub_19B39E0(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      Camellia_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3A60  (binary VA: 0x19b3a60)
// Original: sub_19B3A60
// ----------------------------------------------------------------------------
int sub_19B3A60(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      Camellia_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3AE0  (binary VA: 0x19b3ae0)
// Original: sub_19B3AE0
// ----------------------------------------------------------------------------
int sub_19B3AE0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      Camellia_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    Camellia_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3BE0  (binary VA: 0x19b3be0)
// Original: sub_19B3BE0
// ----------------------------------------------------------------------------
int sub_19B3BE0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      Camellia_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    Camellia_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3CE0  (binary VA: 0x19b3ce0)
// Original: sub_19B3CE0
// ----------------------------------------------------------------------------
int sub_19B3CE0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      Camellia_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    Camellia_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3DE0  (binary VA: 0x19b3de0)
// Original: sub_19B3DE0
// ----------------------------------------------------------------------------
int sub_19B3DE0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    Camellia_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3E80  (binary VA: 0x19b3e80)
// Original: sub_19B3E80
// ----------------------------------------------------------------------------
int sub_19B3E80(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    Camellia_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3F20  (binary VA: 0x19b3f20)
// Original: sub_19B3F20
// ----------------------------------------------------------------------------
int sub_19B3F20(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    Camellia_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B3FC0  (binary VA: 0x19b3fc0)
// Original: sub_19B3FC0
// ----------------------------------------------------------------------------
int sub_19B3FC0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      Camellia_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    Camellia_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B40B0  (binary VA: 0x19b40b0)
// Original: sub_19B40B0
// ----------------------------------------------------------------------------
int sub_19B40B0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      Camellia_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    Camellia_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B41A0  (binary VA: 0x19b41a0)
// Original: sub_19B41A0
// ----------------------------------------------------------------------------
int sub_19B41A0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      Camellia_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    Camellia_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4290  (binary VA: 0x19b4290)
// Original: sub_19B4290
// ----------------------------------------------------------------------------
int sub_19B4290(int a1, int a2)
{
  if ( (int)Camellia_set_key(a2, 8 * *(uint32_t *)(a1 + 88), *(uint32_t *)(a1 + 96)) >= 0 )
    return 1;
  ERR_put_error(6, 159, 157, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4550  (binary VA: 0x19b4550)
// Original: sub_19B4550
// ----------------------------------------------------------------------------
int sub_19B4550(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      CAST_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B45D0  (binary VA: 0x19b45d0)
// Original: sub_19B45D0
// ----------------------------------------------------------------------------
int sub_19B45D0(int a1, int a2)
{
  int v2;

  v2 = EVP_CIPHER_CTX_key_length(a1);
  CAST_set_key(*(uint32_t *)(a1 + 96), v2, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4620  (binary VA: 0x19b4620)
// Original: sub_19B4620
// ----------------------------------------------------------------------------
int sub_19B4620(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      CAST_ofb64_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    CAST_ofb64_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4720  (binary VA: 0x19b4720)
// Original: sub_19B4720
// ----------------------------------------------------------------------------
int sub_19B4720(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    CAST_cfb64_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B47C0  (binary VA: 0x19b47c0)
// Original: sub_19B47C0
// ----------------------------------------------------------------------------
int sub_19B47C0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      CAST_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    CAST_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4930  (binary VA: 0x19b4930)
// Original: sub_19B4930
// ----------------------------------------------------------------------------
int sub_19B4930(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;

  v4 = -1;
  if ( a2 != 6 )
    return v4;
  v6 = RAND_bytes(a4, 8);
  v4 = 0;
  if ( v6 <= 0 )
    return v4;
  DES_set_odd_parity(a4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B49A0  (binary VA: 0x19b49a0)
// Original: sub_19B49A0
// ----------------------------------------------------------------------------
int sub_19B49A0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;
  int v13;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v12 = v8;
      v11 = v7;
      v13 = v5;
      v7 += 0x40000000;
      v8 += 0x40000000;
      DES_cfb_encrypt(v11, v12, 8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v5 = v13;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    DES_cfb_encrypt(a3, a2, 8, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4AA0  (binary VA: 0x19b4aa0)
// Original: sub_19B4AA0
// ----------------------------------------------------------------------------
int sub_19B4AA0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  char v8;
  unsigned int v9;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint8_t _g4_t_v14[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v13)) > _g4_s2 ? (30u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v14)) > _g4_s3 ? (31u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);

  v4 = 0x8000000;
  if ( a4 < 0x8000000 )
    v4 = a4;
  v12 = v4;
  v5 = v4;
  if ( a4 >= v4 )
  {
    do
    {
      if ( a4 == 0 )
        break;
      v11 = 8 * v5;
      if ( 8 * v5 != 0 )
      {
        v6 = 0;
        do
        {
          v7 = v6 >> 3;
          v13 = -(((int)*(uint8_t *)(a3 + (v6 >> 3)) >> (~(uint8_t)v6 & 7)) & 1) & 0x80;
          DES_cfb_encrypt(&v13, v14, 1, 1, *(uint32_t *)(a1 + 96), a1 + 32, *(uint32_t *)(a1 + 8));
          v8 = v6++ & 7;
          *(uint8_t *)(a2 + v7) = ((v14[0] & 0x80) >> v8) | *(uint8_t *)(a2 + v7) & ~(128 >> v8);
        }
        while ( v6 != v11 );
      }
      a4 -= v12;
      v9 = a4;
      a3 += v12;
      a2 += v12;
      if ( v12 <= a4 )
        v9 = v12;
      v12 = v9;
      v5 = v9;
    }
    while ( a4 >= v9 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4BE0  (binary VA: 0x19b4be0)
// Original: sub_19B4BE0
// ----------------------------------------------------------------------------
int sub_19B4BE0(int a1, uint8_t *a2)
{
  DES_set_key_unchecked(a2, *(uint32_t **)(a1 + 96));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4C20  (binary VA: 0x19b4c20)
// Original: sub_19B4C20
// ----------------------------------------------------------------------------
int sub_19B4C20(int *a1, int a2, uint8_t *a3, unsigned int a4)
{
  unsigned int v4;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = &v5[a2 - (uint32_t)(uintptr_t)(a3)];
      v8 = v5;
      v5 += v4;
      DES_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4CA0  (binary VA: 0x19b4ca0)
// Original: sub_19B4CA0
// ----------------------------------------------------------------------------
int sub_19B4CA0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      DES_ofb64_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    DES_ofb64_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4DA0  (binary VA: 0x19b4da0)
// Original: sub_19B4DA0
// ----------------------------------------------------------------------------
int sub_19B4DA0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      DES_cfb64_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    DES_cfb64_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B4EB0  (binary VA: 0x19b4eb0)
// Original: sub_19B4EB0
// ----------------------------------------------------------------------------
int sub_19B4EB0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      DES_ncbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    DES_ncbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5060  (binary VA: 0x19b5060)
// Original: sub_19B5060
// ----------------------------------------------------------------------------
int sub_19B5060(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v8 = v5;
      v6 = v5 + a2 - a3;
      v5 += v4;
      DES_ecb3_encrypt(v8, v6, a1[24], a1[24] + 128, a1[24] + 256, a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B50F0  (binary VA: 0x19b50f0)
// Original: sub_19B50F0
// ----------------------------------------------------------------------------
int sub_19B50F0(int a1, uint8_t *a2)
{
  DES_set_key_unchecked(a2, *(uint32_t **)(a1 + 96));
  DES_set_key_unchecked(a2 + 8, (uint32_t *)(*(uint32_t *)(a1 + 96) + 128));
  DES_set_key_unchecked(a2 + 16, (uint32_t *)(*(uint32_t *)(a1 + 96) + 256));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5170  (binary VA: 0x19b5170)
// Original: sub_19B5170
// ----------------------------------------------------------------------------
int sub_19B5170(int a1, uint8_t *a2)
{
  uint8_t *v2;
  unsigned int v3;
  uint16_t *v4;
  int v5;
  uint16_t *v6;
  uint16_t *v7;

  DES_set_key_unchecked(a2, *(uint32_t **)(a1 + 96));
  DES_set_key_unchecked(a2 + 8, (uint32_t *)(*(uint32_t *)(a1 + 96) + 128));
  v2 = *(uint8_t **)(a1 + 96);
  v3 = 128;
  v4 = (uint16_t *)(v2 + 256);
  if ( ((unsigned int)(uintptr_t)(v2 + 256) & 1) != 0 )
  {
    v4 = (uint16_t *)(v2 + 257);
    v2[256] = *v2;
    ++v2;
    v3 = 127;
    if ( ((uint8_t)(uintptr_t)(v4) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
  {
    goto LABEL_3;
  }
  v3 -= 2;
  *v4 = *(uint16_t *)v2;
  v2 += 2;
  ++v4;
LABEL_3:
  v5 = 0;
  std::memcpy(v4, v2, 4 * (v3 >> 2));
  v7 = (uint16_t *)(&v2[4 * (v3 >> 2)]);
  v6 = &v4[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v6 = *v7;
    v5 = 1;
  }
  if ( (v3 & 1) != 0 )
    LOBYTE(v6[v5]) = v7[v5];
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5250  (binary VA: 0x19b5250)
// Original: sub_19B5250
// ----------------------------------------------------------------------------
int sub_19B5250(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;
  int v13;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v12 = v8;
      v11 = v7;
      v13 = v5;
      v7 += 0x40000000;
      v8 += 0x40000000;
      DES_ede3_cfb_encrypt(
        v11,
        v12,
        8,
        0x40000000,
        *(uint32_t *)(v5 + 96),
        *(uint32_t *)(v5 + 96) + 128,
        *(uint32_t *)(v5 + 96) + 256,
        a1 + 32,
        *(uint32_t *)(v5 + 8));
      v5 = v13;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    DES_ede3_cfb_encrypt(
      a3,
      a2,
      8,
      v4,
      *(uint32_t *)(v5 + 96),
      *(uint32_t *)(v5 + 96) + 128,
      *(uint32_t *)(v5 + 96) + 256,
      v5 + 32,
      *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5370  (binary VA: 0x19b5370)
// Original: sub_19B5370
// ----------------------------------------------------------------------------
int sub_19B5370(int a1, int a2, int a3, int a4)
{
  unsigned int i;
  unsigned int v5;
  int v6;
  char v7;
  typedef char _g4_t_v9;
  typedef uint8_t _g4_t_v10[29];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v10)) > _g4_s1 ? (13u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 13u);

  if ( a4 != 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      v5 = i >> 3;
      v6 = *(uint32_t *)(a1 + 8);
      v9 = -(((int)*(uint8_t *)(a3 + (i >> 3)) >> (~(uint8_t)i & 7)) & 1) & 0x80;
      DES_ede3_cfb_encrypt(
        &v9,
        v10,
        1,
        1,
        *(uint32_t *)(a1 + 96),
        *(uint32_t *)(a1 + 96) + 128,
        *(uint32_t *)(a1 + 96) + 256,
        a1 + 32,
        v6);
      v7 = i & 7;
      *(uint8_t *)(a2 + v5) = ((v10[0] & 0x80) >> v7) | *(uint8_t *)(a2 + v5) & ~(128 >> v7);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5460  (binary VA: 0x19b5460)
// Original: sub_19B5460
// ----------------------------------------------------------------------------
int sub_19B5460(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;

  v4 = a4;
  v5 = a2;
  v6 = a3;
  if ( a4 > 0x3FFFFFFF )
  {
    DES_ede3_ofb64_encrypt(
      a3,
      a2,
      0x40000000,
      *(uint32_t *)(a1 + 96),
      *(uint32_t *)(a1 + 96) + 128,
      *(uint32_t *)(a1 + 96) + 256,
      a1 + 32,
      a1 + 80);
    v4 = a4 - 0x40000000;
    v6 = a3 + 0x40000000;
    v5 = a2 + 0x40000000;
  }
  if ( v4 != 0 )
    DES_ede3_ofb64_encrypt(
      v6,
      v5,
      v4,
      *(uint32_t *)(a1 + 96),
      *(uint32_t *)(a1 + 96) + 128,
      *(uint32_t *)(a1 + 96) + 256,
      a1 + 32,
      a1 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5550  (binary VA: 0x19b5550)
// Original: sub_19B5550
// ----------------------------------------------------------------------------
int sub_19B5550(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;

  v4 = a4;
  v5 = a2;
  v6 = a3;
  if ( a4 > 0x3FFFFFFF )
  {
    DES_ede3_cfb64_encrypt(
      a3,
      a2,
      0x40000000,
      *(uint32_t *)(a1 + 96),
      *(uint32_t *)(a1 + 96) + 128,
      *(uint32_t *)(a1 + 96) + 256,
      a1 + 32,
      a1 + 80,
      *(uint32_t *)(a1 + 8));
    v4 = a4 - 0x40000000;
    v6 = a3 + 0x40000000;
    v5 = a2 + 0x40000000;
  }
  if ( v4 != 0 )
    DES_ede3_cfb64_encrypt(
      v6,
      v5,
      v4,
      *(uint32_t *)(a1 + 96),
      *(uint32_t *)(a1 + 96) + 128,
      *(uint32_t *)(a1 + 96) + 256,
      a1 + 32,
      a1 + 80,
      *(uint32_t *)(a1 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5650  (binary VA: 0x19b5650)
// Original: sub_19B5650
// ----------------------------------------------------------------------------
int sub_19B5650(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;

  v4 = a4;
  v5 = a2;
  v6 = a3;
  if ( a4 > 0x3FFFFFFF )
  {
    DES_ede3_cbc_encrypt(
      a3,
      a2,
      0x40000000,
      *(uint32_t *)(a1 + 96),
      *(uint32_t *)(a1 + 96) + 128,
      *(uint32_t *)(a1 + 96) + 256,
      a1 + 32,
      *(uint32_t *)(a1 + 8));
    v4 = a4 - 0x40000000;
    v6 = a3 + 0x40000000;
    v5 = a2 + 0x40000000;
  }
  if ( v4 != 0 )
    DES_ede3_cbc_encrypt(
      v6,
      v5,
      v4,
      *(uint32_t *)(a1 + 96),
      *(uint32_t *)(a1 + 96) + 128,
      *(uint32_t *)(a1 + 96) + 256,
      a1 + 32,
      *(uint32_t *)(a1 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5740  (binary VA: 0x19b5740)
// Original: sub_19B5740
// ----------------------------------------------------------------------------
int sub_19B5740(int a1, int a2, int a3, int a4)
{
  int v4;

  v4 = -1;
  if ( a2 == 6 )
  {
    v4 = 0;
    if ( (int)RAND_bytes(a4, *(uint32_t *)(a1 + 88)) > 0 )
    {
      LOWORD(v4) = 1;
      DES_set_odd_parity(a4);
      if ( *(int *)(a1 + 88) > 15 )
      {
        DES_set_odd_parity(a4 + 8);
        if ( *(int *)(a1 + 88) > 23 )
          DES_set_odd_parity(a4 + 16);
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5960  (binary VA: 0x19b5960)
// Original: sub_19B5960
// ----------------------------------------------------------------------------
int sub_19B5960(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v8 = v5;
      v6 = v5 + a2 - a3;
      v5 += v4;
      idea_ecb_encrypt(v8, v6, a1[24]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B59E0  (binary VA: 0x19b59e0)
// Original: sub_19B59E0
// ----------------------------------------------------------------------------
int sub_19B59E0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      idea_ofb64_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    idea_ofb64_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5AE0  (binary VA: 0x19b5ae0)
// Original: sub_19B5AE0
// ----------------------------------------------------------------------------
int sub_19B5AE0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    idea_cfb64_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5B80  (binary VA: 0x19b5b80)
// Original: sub_19B5B80
// ----------------------------------------------------------------------------
int sub_19B5B80(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      idea_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    idea_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5C70  (binary VA: 0x19b5c70)
// Original: sub_19B5C70
// ----------------------------------------------------------------------------
int sub_19B5C70(int a1, int a2, int a3, int a4)
{
  uint8_t v5[228];

  if ( a4 != 0 || (EVP_CIPHER_CTX_flags(a1) & 0xF0007) == 4 || (EVP_CIPHER_CTX_flags(a1) & 0xF0007) == 3 )
  {
    idea_set_encrypt_key(a2, *(uint32_t *)(a1 + 96));
  }
  else
  {
    idea_set_encrypt_key(a2, v5);
    idea_set_decrypt_key(v5, *(uint32_t *)(a1 + 96));
    OPENSSL_cleanse(v5, 0xD8u);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5DD0  (binary VA: 0x19b5dd0)
// Original: sub_19B5DD0
// ----------------------------------------------------------------------------
int sub_19B5DD0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5DE0  (binary VA: 0x19b5de0)
// Original: sub_19B5DE0
// ----------------------------------------------------------------------------
int sub_19B5DE0(int a1, void *dest, void *src, size_t n)
{
  if ( src != dest )
    memcpy(dest, src, n);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B5E40  (binary VA: 0x19b5e40)
// Original: sub_19B5E40
// ----------------------------------------------------------------------------
int sub_19B5E40(int a1, int a2)
{
  int v2;
  int v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v2 = 0;
  v7 = 0;
  if ( a2 != 0 )
  {
    v2 = EVP_CIPHER_CTX_iv_length(a1);
    if ( (unsigned int)v2 > 0x10 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "l <= sizeof(iv)");
    if ( v2 != ASN1_TYPE_get_int_octetstring(a2, (int)(uintptr_t)(&v7), v8, v2) )
      return -1;
    switch ( v7 )
    {
      case 58:
        v6 = 16;
        v4 = 128;
        break;
      case 120:
        v6 = 8;
        v4 = 64;
        break;
      case 160:
        v6 = 5;
        v4 = 40;
        break;
      default:
        v2 = -1;
        ERR_put_error(6, 109, 108, (int)(uintptr_t)(&unk_1B15112), 0);
        return v2;
    }
    if ( v2 > 0 )
    {
      v5 = v4;
      EVP_CipherInit_ex(a1, 0, 0, 0, v8, -1);
      v4 = v5;
    }
    EVP_CIPHER_CTX_ctrl(a1, 3, v4, 0);
    EVP_CIPHER_CTX_set_key_length(a1, v6);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6000  (binary VA: 0x19b6000)
// Original: sub_19B6000
// ----------------------------------------------------------------------------
int sub_19B6000(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t v6[4];

  v2 = 0;
  if ( a2 != 0 )
  {
    v3 = 58;
    EVP_CIPHER_CTX_ctrl(a1, 2, 0, v6);
    if ( v6[0] != 128 )
    {
      LOWORD(v3) = 120;
      if ( v6[0] != 64 )
      {
        LOWORD(v3) = 160;
        if ( v6[0] != 40 )
          v3 = 0;
      }
    }
    v4 = EVP_CIPHER_CTX_iv_length(a1);
    return ASN1_TYPE_set_int_octetstring(a2, v3, a1 + 16, v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19B60B0  (binary VA: 0x19b60b0)
// Original: sub_19B60B0
// ----------------------------------------------------------------------------
int sub_19B60B0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;
  int v13;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v12 = v8;
      v11 = v7;
      v13 = v5;
      v7 += 0x40000000;
      v8 += 0x40000000;
      RC2_cbc_encrypt(v11, v12, 0x40000000, *(uint32_t *)(v5 + 96) + 4, a1 + 32, *(uint32_t *)(v5 + 8));
      v5 = v13;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    RC2_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96) + 4, v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B61B0  (binary VA: 0x19b61b0)
// Original: sub_19B61B0
// ----------------------------------------------------------------------------
int sub_19B61B0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = **(uint32_t **)(a1 + 96);
  v3 = EVP_CIPHER_CTX_key_length(a1);
  RC2_set_key(*(uint32_t *)(a1 + 96) + 4, v3, a2, v2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6210  (binary VA: 0x19b6210)
// Original: sub_19B6210
// ----------------------------------------------------------------------------
int sub_19B6210(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v8 = v5;
      v6 = v5 + a2 - a3;
      v5 += v4;
      RC2_ecb_encrypt(v8, v6, a1[24] + 4, a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6290  (binary VA: 0x19b6290)
// Original: sub_19B6290
// ----------------------------------------------------------------------------
int sub_19B6290(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;
  int v13;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v12 = v8;
      v11 = v7;
      v13 = v5;
      v7 += 0x40000000;
      v8 += 0x40000000;
      RC2_ofb64_encrypt(v11, v12, 0x40000000, *(uint32_t *)(v5 + 96) + 4, a1 + 32, a1 + 80);
      v5 = v13;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    RC2_ofb64_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96) + 4, v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6390  (binary VA: 0x19b6390)
// Original: sub_19B6390
// ----------------------------------------------------------------------------
int sub_19B6390(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    RC2_cfb64_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96) + 4, a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6440  (binary VA: 0x19b6440)
// Original: sub_19B6440
// ----------------------------------------------------------------------------
int sub_19B6440(int a1, int a2, int a3, uint32_t *a4)
{
  int result;
  uint32_t *v5;

  switch ( a2 )
  {
    case 0:
      v5 = *(uint32_t **)(a1 + 96);
      *v5 = 8 * EVP_CIPHER_CTX_key_length(a1);
      return 1;
    case 2:
      *a4 = **(uint32_t **)(a1 + 96);
      return 1;
    case 3:
      result = 0;
      if ( a3 > 0 )
      {
        **(uint32_t **)(a1 + 96) = a3;
        return 1;
      }
      break;
    default:
      return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19B65B0  (binary VA: 0x19b65b0)
// Original: sub_19B65B0
// ----------------------------------------------------------------------------
int sub_19B65B0(int a1, int a2, int a3, int a4)
{
  RC4(*(uint32_t *)(a1 + 96), a4, a3, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6600  (binary VA: 0x19b6600)
// Original: sub_19B6600
// ----------------------------------------------------------------------------
int sub_19B6600(int a1, int a2)
{
  int v2;

  v2 = EVP_CIPHER_CTX_key_length(a1);
  RC4_set_key(*(uint32_t *)(a1 + 96), v2, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6690  (binary VA: 0x19b6690)
// Original: sub_19B6690
// ----------------------------------------------------------------------------
int sub_19B6690(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v8;

  v4 = *(uint32_t *)(*a1 + 4);
  if ( v4 <= a4 )
  {
    v5 = a3;
    do
    {
      v6 = v5 + a2 - a3;
      v8 = v5;
      v5 += v4;
      SEED_ecb_encrypt(v8, v6, a1[24], a1[2]);
    }
    while ( a4 - v4 >= v5 - a3 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6710  (binary VA: 0x19b6710)
// Original: sub_19B6710
// ----------------------------------------------------------------------------
int sub_19B6710(int a1, int a2)
{
  SEED_set_key(a2, *(uint32_t *)(a1 + 96));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6750  (binary VA: 0x19b6750)
// Original: sub_19B6750
// ----------------------------------------------------------------------------
int sub_19B6750(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      SEED_ofb128_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, a1 + 80);
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    SEED_ofb128_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, v5 + 80);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6850  (binary VA: 0x19b6850)
// Original: sub_19B6850
// ----------------------------------------------------------------------------
int sub_19B6850(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v9;
  int v10;
  int v11;

  v4 = 0x40000000;
  v5 = a4;
  if ( a4 < 0x40000000 )
    v4 = a4;
  while ( v5 >= v4 && v5 != 0 )
  {
    v9 = v5;
    v10 = a3;
    v11 = a2;
    v5 -= v4;
    SEED_cfb128_encrypt(a3, a2, v9, *(uint32_t *)(a1 + 96), a1 + 32, a1 + 80, *(uint32_t *)(a1 + 8));
    a3 = v4 + v10;
    a2 = v4 + v11;
    if ( v4 > v5 )
      v4 = v5;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B68F0  (binary VA: 0x19b68f0)
// Original: sub_19B68F0
// ----------------------------------------------------------------------------
int sub_19B68F0(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      SEED_cbc_encrypt(v11, v8, 0x40000000, *(uint32_t *)(v5 + 96), a1 + 32, *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    SEED_cbc_encrypt(a3, a2, v4, *(uint32_t *)(v5 + 96), v5 + 32, *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6A60  (binary VA: 0x19b6a60)
// Original: sub_19B6A60
// ----------------------------------------------------------------------------
int sub_19B6A60(int a1, int a2, int a3, unsigned int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v11;
  int v12;

  v4 = a4;
  v5 = a1;
  if ( a4 > 0x3FFFFFFF )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v11 = v7;
      v12 = v5;
      v7 += 0x40000000;
      DES_xcbc_encrypt(
        v11,
        v8,
        0x40000000,
        *(uint32_t *)(v5 + 96),
        a1 + 32,
        *(uint32_t *)(v5 + 96) + 128,
        *(uint32_t *)(v5 + 96) + 136,
        *(uint32_t *)(v5 + 8));
      v8 += 0x40000000;
      v5 = v12;
    }
    while ( v6 > 0x3FFFFFFF );
    v4 = a4 & 0x3FFFFFFF;
    v9 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v9;
    a2 += v9;
  }
  if ( v4 != 0 )
    DES_xcbc_encrypt(
      a3,
      a2,
      v4,
      *(uint32_t *)(v5 + 96),
      v5 + 32,
      *(uint32_t *)(v5 + 96) + 128,
      *(uint32_t *)(v5 + 96) + 136,
      *(uint32_t *)(v5 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B6B70  (binary VA: 0x19b6b70)
// Original: sub_19B6B70
// ----------------------------------------------------------------------------
int sub_19B6B70(int a1, int a2)
{
  int v2;
  int v3;

  DES_set_key_unchecked((uint8_t *)a2, *(uint32_t **)(a1 + 96));
  v2 = *(uint32_t *)(a1 + 96);
  *(uint32_t *)(v2 + 128) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(v2 + 132) = *(uint32_t *)(a2 + 12);
  v3 = *(uint32_t *)(a1 + 96);
  *(uint32_t *)(v3 + 136) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(v3 + 140) = *(uint32_t *)(a2 + 20);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19B8C30  (binary VA: 0x19b8c30)
// Original: sub_19B8C30
// ----------------------------------------------------------------------------
int sub_19B8C30(int a1, int a2)
{
  return SHA1_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8C60  (binary VA: 0x19b8c60)
// Original: sub_19B8C60
// ----------------------------------------------------------------------------
int sub_19B8C60(int a1, void *a2, size_t a3)
{
  return SHA1_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B8CA0  (binary VA: 0x19b8ca0)
// Original: sub_19B8CA0
// ----------------------------------------------------------------------------
int sub_19B8CA0(int a1)
{
  return SHA1_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8CF0  (binary VA: 0x19b8cf0)
// Original: sub_19B8CF0
// ----------------------------------------------------------------------------
int sub_19B8CF0(int a1, int a2)
{
  return SHA1_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8D20  (binary VA: 0x19b8d20)
// Original: sub_19B8D20
// ----------------------------------------------------------------------------
int sub_19B8D20(int a1, void *a2, size_t a3)
{
  return SHA1_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B8D60  (binary VA: 0x19b8d60)
// Original: sub_19B8D60
// ----------------------------------------------------------------------------
int sub_19B8D60(int a1)
{
  return SHA1_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8DB0  (binary VA: 0x19b8db0)
// Original: sub_19B8DB0
// ----------------------------------------------------------------------------
int sub_19B8DB0(int a1, int a2)
{
  return SHA1_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8DE0  (binary VA: 0x19b8de0)
// Original: sub_19B8DE0
// ----------------------------------------------------------------------------
int sub_19B8DE0(int a1, void *a2, size_t a3)
{
  return SHA1_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B8E20  (binary VA: 0x19b8e20)
// Original: sub_19B8E20
// ----------------------------------------------------------------------------
int sub_19B8E20(int a1)
{
  return SHA1_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8E70  (binary VA: 0x19b8e70)
// Original: sub_19B8E70
// ----------------------------------------------------------------------------
int sub_19B8E70(int a1, int a2)
{
  return MD4_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8EA0  (binary VA: 0x19b8ea0)
// Original: sub_19B8EA0
// ----------------------------------------------------------------------------
int sub_19B8EA0(int a1, void *a2, size_t a3)
{
  return MD4_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B8EE0  (binary VA: 0x19b8ee0)
// Original: sub_19B8EE0
// ----------------------------------------------------------------------------
int sub_19B8EE0(int a1)
{
  return MD4_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8F30  (binary VA: 0x19b8f30)
// Original: sub_19B8F30
// ----------------------------------------------------------------------------
int sub_19B8F30(int a1, uint32_t *a2)
{
  return MD5_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8F60  (binary VA: 0x19b8f60)
// Original: sub_19B8F60
// ----------------------------------------------------------------------------
int sub_19B8F60(int a1, char *a2, size_t a3)
{
  return MD5_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B8FA0  (binary VA: 0x19b8fa0)
// Original: sub_19B8FA0
// ----------------------------------------------------------------------------
int sub_19B8FA0(int a1)
{
  return MD5_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B8FF0  (binary VA: 0x19b8ff0)
// Original: sub_19B8FF0
// ----------------------------------------------------------------------------
int sub_19B8FF0(int a1, int a2)
{
  return MDC2_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9020  (binary VA: 0x19b9020)
// Original: sub_19B9020
// ----------------------------------------------------------------------------
int sub_19B9020(int a1, void *a2, size_t a3)
{
  return MDC2_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9060  (binary VA: 0x19b9060)
// Original: sub_19B9060
// ----------------------------------------------------------------------------
int sub_19B9060(int a1)
{
  return MDC2_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B90B0  (binary VA: 0x19b90b0)
// Original: sub_19B90B0
// ----------------------------------------------------------------------------
int sub_19B90B0(int a1, int a2)
{
  return RIPEMD160_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B90E0  (binary VA: 0x19b90e0)
// Original: sub_19B90E0
// ----------------------------------------------------------------------------
int sub_19B90E0(int a1, void *a2, size_t a3)
{
  return RIPEMD160_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9120  (binary VA: 0x19b9120)
// Original: sub_19B9120
// ----------------------------------------------------------------------------
int sub_19B9120(int a1)
{
  return RIPEMD160_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9170  (binary VA: 0x19b9170)
// Original: sub_19B9170
// ----------------------------------------------------------------------------
int sub_19B9170(int a1, int a2)
{
  return SHA_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B91A0  (binary VA: 0x19b91a0)
// Original: sub_19B91A0
// ----------------------------------------------------------------------------
int sub_19B91A0(int a1, void *a2, size_t a3)
{
  return SHA_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B91E0  (binary VA: 0x19b91e0)
// Original: sub_19B91E0
// ----------------------------------------------------------------------------
int sub_19B91E0(int a1)
{
  return SHA_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9230  (binary VA: 0x19b9230)
// Original: sub_19B9230
// ----------------------------------------------------------------------------
int sub_19B9230(int a1, int a2)
{
  return SHA512_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9260  (binary VA: 0x19b9260)
// Original: sub_19B9260
// ----------------------------------------------------------------------------
int sub_19B9260(int a1, void *a2, size_t a3)
{
  return SHA512_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B92A0  (binary VA: 0x19b92a0)
// Original: sub_19B92A0
// ----------------------------------------------------------------------------
int sub_19B92A0(int a1)
{
  return SHA512_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B92D0  (binary VA: 0x19b92d0)
// Original: sub_19B92D0
// ----------------------------------------------------------------------------
int sub_19B92D0(int a1)
{
  return SHA384_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9300  (binary VA: 0x19b9300)
// Original: sub_19B9300
// ----------------------------------------------------------------------------
int sub_19B9300(int a1, int a2)
{
  return SHA256_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9330  (binary VA: 0x19b9330)
// Original: sub_19B9330
// ----------------------------------------------------------------------------
int sub_19B9330(int a1, void *a2, size_t a3)
{
  return SHA256_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9370  (binary VA: 0x19b9370)
// Original: sub_19B9370
// ----------------------------------------------------------------------------
int sub_19B9370(int a1)
{
  return SHA256_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B93A0  (binary VA: 0x19b93a0)
// Original: sub_19B93A0
// ----------------------------------------------------------------------------
int sub_19B93A0(int a1)
{
  return SHA224_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B93D0  (binary VA: 0x19b93d0)
// Original: sub_19B93D0
// ----------------------------------------------------------------------------
int sub_19B93D0(int a1, int a2)
{
  return SHA1_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9400  (binary VA: 0x19b9400)
// Original: sub_19B9400
// ----------------------------------------------------------------------------
int sub_19B9400(int a1, void *a2, size_t a3)
{
  return SHA1_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9440  (binary VA: 0x19b9440)
// Original: sub_19B9440
// ----------------------------------------------------------------------------
int sub_19B9440(int a1)
{
  return SHA1_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9510  (binary VA: 0x19b9510)
// Original: sub_19B9510
// ----------------------------------------------------------------------------
bool sub_19B9510(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, int a6)
{
  uint32_t *digestbyname;
  int *v9;
  int v10;
  int (*v11)(int *, int);
  int v12;
  int v13;
  int v14;
  int (*v16)(int *, int);
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t v22[4];

  digestbyname = a3;
  if ( *(uint32_t *)(a1 + 16) == 0 )
  {
    v18 = (int)(uintptr_t)(EVP_PKEY_CTX_new(a5, a4));
    *(uint32_t *)(a1 + 16) = v18;
    if ( v18 == 0 )
      return false;
  }
  if ( a3 == nullptr )
  {
    if ( (int)EVP_PKEY_get_default_digest_nid(a5, v22) <= 0
      || (v21 = (int)(uintptr_t)(OBJ_nid2sn(v22[0])), (digestbyname = (uint32_t *)EVP_get_digestbyname(v21)) == nullptr) )
    {
      ERR_put_error(6, 161, 158, (int)(uintptr_t)(&unk_1B15112), 0);
      return false;
    }
  }
  v9 = *(int **)(a1 + 16);
  v10 = *v9;
  if ( a6 != 0 )
  {
    v16 = *(int (**)(int *, int))(v10 + 68);
    if ( v16 != nullptr )
    {
      v17 = v16(v9, a1);
      v13 = 0;
      if ( v17 <= 0 )
        return v13;
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 16) = 128;
    }
    else
    {
      v19 = EVP_PKEY_verify_init(*(uint32_t *)(a1 + 16));
      v13 = 0;
      if ( v19 <= 0 )
        return v13;
    }
  }
  else
  {
    v11 = *(int (**)(int *, int))(v10 + 60);
    if ( v11 != nullptr )
    {
      v12 = v11(v9, a1);
      v13 = 0;
      if ( v12 <= 0 )
        return v13;
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 16) = 64;
    }
    else
    {
      v20 = EVP_PKEY_sign_init(*(uint32_t *)(a1 + 16));
      v13 = 0;
      if ( v20 <= 0 )
        return v13;
    }
  }
  v14 = EVP_PKEY_CTX_ctrl(*(uint32_t *)(a1 + 16), -1, 248, 1, 0, digestbyname);
  v13 = 0;
  if ( v14 > 0 )
  {
    if ( a2 != nullptr )
      *a2 = *(uint32_t *)(a1 + 16);
    return EVP_DigestInit_ex(a1, digestbyname, a4) != 0;
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_19B9A90  (binary VA: 0x19b9a90)
// Original: sub_19B9A90
// ----------------------------------------------------------------------------
int sub_19B9A90(int a1, int a2)
{
  return WHIRLPOOL_Final(a2, *(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9AC0  (binary VA: 0x19b9ac0)
// Original: sub_19B9AC0
// ----------------------------------------------------------------------------
int sub_19B9AC0(int a1, int a2, int a3)
{
  return WHIRLPOOL_Update(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9B00  (binary VA: 0x19b9b00)
// Original: sub_19B9B00
// ----------------------------------------------------------------------------
int sub_19B9B00(int a1)
{
  return WHIRLPOOL_Init(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: sub_19B9B50  (binary VA: 0x19b9b50)
// Original: sub_19B9B50
// ----------------------------------------------------------------------------
int sub_19B9B50(uint32_t *a1, int *a2)
{
  int v3;

  v3 = *a2;
  if ( a1[1] != 0 )
    return ((int (*)(uint32_t, uint32_t, uint32_t, int))a2[1])(0, a1[2], a1[3], v3);
  else
    return ((int (*)(uint32_t, uint32_t, uint32_t, int))a2[1])(a1[3], a1[2], 0, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9BB0  (binary VA: 0x19b9bb0)
// Original: sub_19B9BB0
// ----------------------------------------------------------------------------
int sub_19B9BB0(uint32_t *a1, int *a2)
{
  int v3;

  v3 = *a2;
  if ( a1[1] != 0 )
    return ((int (*)(uint32_t, uint32_t, uint32_t, int))a2[1])(0, a1[2], a1[3], v3);
  else
    return ((int (*)(uint32_t, uint32_t, uint32_t, int))a2[1])(a1[3], a1[2], 0, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_19B9F80  (binary VA: 0x19b9f80)
// Original: sub_19B9F80
// ----------------------------------------------------------------------------
int sub_19B9F80(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v6;
  int v7;
  int v8;

  BIO_indent(a1, a3, 128);
  v6 = (int)(uintptr_t)(OBJ_nid2ln(*a2));
  BIO_printf(v7, v8, (int)(uintptr_t)(a1), "%s algorithm \"%s\" unsupported\n", a4, v6);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19BA000  (binary VA: 0x19ba000)
// Original: sub_19BA000
// ----------------------------------------------------------------------------
int sub_19BA000(uint32_t *a1, int a2, char *a3, size_t a4)
{
  int v6;
  void (*v7)(uint32_t *);
  uint32_t *str;
  int result;
  int v10;
  int v11[4];

  v11[0] = 0;
  if ( a1 == nullptr )
  {
LABEL_11:
    if ( a3 != nullptr )
      str = (uint32_t *)EVP_PKEY_asn1_find_str((void **)v11, a3, a4);
    else
      str = (uint32_t *)EVP_PKEY_asn1_find(v11, a2);
    if ( a1 == nullptr && v11[0] != 0 )
      ENGINE_finish((uint32_t *)v11[0]);
    if ( str != nullptr )
    {
      result = 1;
      if ( a1 != nullptr )
      {
        v10 = v11[0];
        a1[3] = (uint32_t)(uintptr_t)(str);
        a1[4] = v10;
        *a1 = *str;
        a1[1] = a2;
      }
    }
    else
    {
      ERR_put_error(6, 158, 156, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    return result;
  }
  if ( a1[5] != 0 )
  {
    v6 = a1[3];
    if ( v6 != 0 )
    {
      v7 = *(void (**)(uint32_t *))(v6 + 80);
      if ( v7 != nullptr )
      {
        v7(a1);
        a1[5] = 0;
      }
    }
    if ( a1[4] != 0 )
    {
      ENGINE_finish((uint32_t *)a1[4]);
      a1[4] = 0;
    }
  }
  if ( a1[1] != a2 || (result = 1, a1[3] == 0) )
  {
    if ( a1[4] != 0 )
    {
      ENGINE_finish((uint32_t *)a1[4]);
      a1[4] = 0;
    }
    goto LABEL_11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19BBE10  (binary VA: 0x19bbe10)
// Original: sub_19BBE10
// ----------------------------------------------------------------------------
int sub_19BBE10(int a1, int a2, int a3)
{
  int v3;

  v3 = *(uint32_t *)(a3 + 4);
  **(uint32_t **)(v3 + 32) = a1;
  *(uint32_t *)(*(uint32_t *)(v3 + 32) + 4) = a2;
  return (*(int (**)(int))(v3 + 28))(v3);
}

// ----------------------------------------------------------------------------
// Function: evp_pkey_set_cb_translate  (binary VA: 0x19bc220)
// Original: evp_pkey_set_cb_translate
// ----------------------------------------------------------------------------
uint32_t * evp_pkey_set_cb_translate(uint32_t *a1, int a2)
{
  a1[1] = a2;
  *a1 = 2;
  a1[2] = (uint32_t)(uintptr_t)(sub_19BBE10);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19BC320  (binary VA: 0x19bc320)
// Original: sub_19BC320
// ----------------------------------------------------------------------------
int sub_19BC320(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}


