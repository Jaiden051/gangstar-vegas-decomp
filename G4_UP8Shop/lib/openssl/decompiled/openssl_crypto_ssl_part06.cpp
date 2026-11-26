#include "Core/Utils/DecompTypes.h"
#include "openssl_crypto_ssl_part06.h"

// ----------------------------------------------------------------------------
// Function: AES_unwrap_key  (binary VA: 0x1a34a10)
// Original: AES_unwrap_key
// ----------------------------------------------------------------------------
int AES_unwrap_key(uint32_t *a1, void *s2, char *dest, int *a4, int a5)
{
  int v5;
  unsigned int v6;
  unsigned int v7;
  uint8_t *v8;
  size_t v9;
  char *v10;
  const void *v11;
  int v12;
  typedef uint8_t *_g4_t_s1;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_s1)) > _g4_s0 ? (12u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_n)) > _g4_s1 ? (16u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v16)) > _g4_s2 ? (28u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v18)) > _g4_s4 ? (36u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v5 = -1;
  v6 = a5 - 8;
  n = a5 - 8;
  if ( (((uint8_t)a5 - 8) & 7) != 0 || v6 <= 7 )
    return v5;
  v17 = *a4;
  v18 = a4[1];
  v7 = 6 * (v6 >> 3);
  memcpy(dest, a4 + 2, n);
  v16 = 6;
  v8 = (uint8_t *)&v17;
  do
  {
    v9 = 0;
    do
    {
      v10 = &dest[a5 - 16 - v9];
      HIBYTE(v18) = v7 ^ v8[7];
      if ( v7 > 0xFF )
      {
        BYTE2(v18) = v8[6] ^ BYTE1(v7);
        BYTE1(v18) = v8[5] ^ BYTE2(v7);
        LOBYTE(v18) = v8[4] ^ HIBYTE(v7);
      }
      v9 += 8;
      v19 = *(uint32_t *)v10;
      v20 = *((uint32_t *)v10 + 1);
      s1 = v8;
      AES_decrypt(v8, v8, a1);
      --v7;
      *(uint32_t *)v10 = v19;
      *((uint32_t *)v10 + 1) = v20;
      v8 = s1;
    }
    while ( n > v9 );
    --v16;
  }
  while ( v16 != 0 );
  v11 = &unk_1D334FC;
  if ( s2 != nullptr )
    v11 = s2;
  v12 = memcmp(s1, v11, 8u);
  v5 = a5 - 8;
  if ( v12 == 0 )
    return v5;
  OPENSSL_cleanse((uint8_t *)dest, n);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_BOOLEAN  (binary VA: 0x1a34b80)
// Original: i2d_ASN1_BOOLEAN
// ----------------------------------------------------------------------------
int i2d_ASN1_BOOLEAN(char a1, uint8_t **a2)
{
  int v2;
  uint8_t *v3;
  typedef uint8_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = ASN1_object_size(0, 1, 1);
  if ( a2 != nullptr )
  {
    v5 = *a2;
    ASN1_put_object(&v5, 0, 1, 1, 0);
    v3 = v5;
    *v5 = a1;
    *a2 = v3 + 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_BOOLEAN  (binary VA: 0x1a34c20)
// Original: d2i_ASN1_BOOLEAN
// ----------------------------------------------------------------------------
int d2i_ASN1_BOOLEAN(int *a1, uint8_t **a2, int a3)
{
  int result;
  uint8_t *v4;
  int16_t v5;
  typedef uint8_t *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v6 = *a2;
  if ( (ASN1_get_object(&v6, &v7, &v8, &v9, a3) & 0x80u) != 0 )
  {
    v5 = 102;
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    v5 = 117;
LABEL_9:
    ERR_put_error(13, 142, v5, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  if ( v7 != 1 )
  {
    v5 = 106;
    goto LABEL_9;
  }
  result = (uint8_t)*v6;
  v4 = v6 + 1;
  if ( a1 != nullptr )
    *a1 = result;
  *a2 = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_type_bytes  (binary VA: 0x1a34d00)
// Original: d2i_ASN1_type_bytes
// ----------------------------------------------------------------------------
int d2i_ASN1_type_bytes(int *a1, void **a2, int a3, int a4)
{
  int16_t v4;
  size_t *v5;
  int v7;
  size_t v8;
  uint8_t *v9;
  void *v10;
  int v11;
  uint8_t *v12;
  typedef void **_g4_t_dest;
  typedef uint8_t *_g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v14)) > _g4_s1 ? (44u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v15)) > _g4_s2 ? (44u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_src)) > _g4_s3 ? (48u + sizeof(_g4_t_src)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_n)) > _g4_s4 ? (52u + sizeof(_g4_t_n)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v18)) > _g4_s5 ? (56u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v19)) > _g4_s6 ? (60u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 48u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  src = *a2;
  if ( (ASN1_get_object((uint8_t **)&src, (int *)&n, &v18, v19, a3) & 0x80u) != 0 )
  {
    v4 = 0;
LABEL_3:
    v5 = nullptr;
    ERR_put_error(13, 149, v4, (int)(uintptr_t)(&unk_1B15112), 0);
    return (int)(uintptr_t)(v5);
  }
  v4 = 153;
  if ( v18 > 31 )
    goto LABEL_3;
  v7 = ASN1_tag2bit(v18);
  v4 = 169;
  if ( (v7 & a4) == 0 )
    goto LABEL_3;
  if ( v18 == 3 )
    return d2i_ASN1_BIT_STRING(a1, (char **)a2, a3);
  if ( a1 != nullptr && (v5 = (size_t *)*a1, *a1 != 0) || (v5 = (size_t *)(ASN1_STRING_new())) != nullptr )
  {
    v8 = n;
    v9 = nullptr;
    if ( n != 0 )
    {
      v12 = CRYPTO_malloc(n + 1, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v12 == nullptr )
      {
        ERR_put_error(13, 149, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( a1 != nullptr && v5 == (size_t *)*a1 )
          return 0;
        dest = (void **)v5;
        v5 = nullptr;
        ASN1_STRING_free(dest);
        return (int)(uintptr_t)(v5);
      }
      v15 = v12;
      memcpy(v12, src, n);
      v9 = v15;
      v15[n] = 0;
      v8 = n;
      src = (char *)src + n;
    }
    v10 = (void *)v5[2];
    if ( v10 != nullptr )
    {
      v14 = v9;
      CRYPTO_free(v10);
      v8 = n;
      v9 = v14;
    }
    *v5 = v8;
    v11 = v18;
    v5[2] = (size_t)v9;
    v5[1] = v11;
    if ( a1 != nullptr )
      *a1 = (int)(uintptr_t)(v5);
    *a2 = src;
  }
  return (int)(uintptr_t)(v5);
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_bytes  (binary VA: 0x1a34f10)
// Original: i2d_ASN1_bytes
// ----------------------------------------------------------------------------
int i2d_ASN1_bytes(int a1, void **a2, int a3, char a4)
{
  int v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_dest;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_dest)) > _g4_s2 ? (28u + sizeof(_g4_t_dest)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 28u);

  v4 = 0;
  if ( a1 != 0 )
  {
    if ( a3 == 3 )
    {
      return i2d_ASN1_BIT_STRING(a1, a2);
    }
    else
    {
      v7 = *(uint32_t *)a1;
      v4 = ASN1_object_size(0, *(uint32_t *)a1, a3);
      v5 = v7;
      if ( a2 != nullptr )
      {
        dest = *a2;
        v8 = v4;
        ASN1_put_object((uint8_t **)&dest, (unsigned int)(a3 - 16) <= 1, v5, a3, a4);
        memcpy(dest, *(const void **)(a1 + 8), *(uint32_t *)a1);
        *a2 = (char *)dest + *(uint32_t *)a1;
        return v8;
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_bytes  (binary VA: 0x1a35000)
// Original: d2i_ASN1_bytes
// ----------------------------------------------------------------------------
uint32_t * d2i_ASN1_bytes(uint32_t **a1, void **a2, int a3, int a4, int a5)
{
  uint32_t *v5;
  int object;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int16_t v12;
  void *v13;
  void *v14;
  size_t n;
  void *v16;
  uint8_t *v17;
  uint8_t *dest;
  int16_t v20; // bp
  typedef int _g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef void *_g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[2];
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef signed int _g4_t_v36;
  typedef char *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef void **_g4_t_v39;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_src)) > _g4_s2 ? (20u + sizeof(_g4_t_src)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v27)) > _g4_s6 ? (36u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v28)) > _g4_s7 ? (40u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v29)) > _g4_s8 ? (44u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v30)) > _g4_s9 ? (48u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v31)) > _g4_s10 ? (52u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v32)) > _g4_s11 ? (60u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v33)) > _g4_s12 ? (64u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v34)) > _g4_s13 ? (68u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v35)) > _g4_s14 ? (72u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v36)) > _g4_s15 ? (76u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v37)) > _g4_s16 ? (80u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v38)) > _g4_s17 ? (84u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v39)) > _g4_s18 ? (88u + sizeof(_g4_t_v39)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);

  if ( a1 == nullptr || (v5 = *a1, *a1 == nullptr) )
  {
    v5 = ASN1_STRING_new();
    if ( v5 == nullptr )
      return v5;
  }
  src = *a2;
  object = ASN1_get_object((uint8_t **)&src, (int *)&v24, &v25, &v26, a3);
  v7 = object & 0x80;
  if ( (object & 0x80) != 0 )
  {
    v20 = 102;
    goto LABEL_42;
  }
  if ( v25 != a4 )
  {
    v20 = 168;
    goto LABEL_42;
  }
  if ( (object & 0x20) == 0 )
  {
    n = v24;
    if ( v24 == 0 )
    {
      v16 = (void *)v5[2];
      v17 = nullptr;
      if ( v16 != nullptr )
      {
        v21 = v7;
        CRYPTO_free(v16);
        n = v24;
        v17 = (uint8_t *)v21;
      }
LABEL_26:
      *v5 = n;
      v5[2] = (uint32_t)(uintptr_t)(v17);
      v5[1] = a4;
      v14 = src;
LABEL_27:
      if ( a1 != nullptr )
        *a1 = v5;
      *a2 = v14;
      return v5;
    }
    dest = (uint8_t *)v5[2];
    if ( (signed int)v24 > *v5 )
    {
      if ( dest != nullptr )
      {
        CRYPTO_free((void *)v5[2]);
        n = v24;
      }
    }
    else if ( dest != nullptr )
    {
LABEL_35:
      v22 = dest;
      memcpy(dest, src, n);
      v17 = v22;
      v22[v24] = 0;
      n = v24;
      src = (char *)src + v24;
      goto LABEL_26;
    }
    dest = CRYPTO_malloc(n + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dest == nullptr )
    {
      v20 = 65;
      goto LABEL_42;
    }
    n = v24;
    goto LABEL_35;
  }
  v34 = a4;
  v39 = a2;
  v31[0] = (uint32_t)(uintptr_t)(src);
  v36 = v24;
  v8 = (char *)src + a3;
  v33 = object;
  if ( a3 == 0 )
    v8 = (char *)(object & 0x80);
  v35 = a5;
  v37 = v8;
  v27 = nullptr;
  v28 = 0;
  v30 = 0;
  v29 = nullptr;
  v9 = 0;
  while ( (object & 1) == 0 )
  {
    if ( v36 <= 0 )
      goto LABEL_17;
LABEL_10:
    v38 = v31[0];
    if ( d2i_ASN1_bytes(&v27, v31, &v37[-v31[0]], v34, v35) == 0 )
    {
      v32 = 13;
      v12 = 13;
      goto LABEL_37;
    }
    if ( BUF_MEM_grow_clean(&v28, v9 + *(uint32_t *)v27) == 0 )
    {
      v32 = 7;
      v12 = 7;
      goto LABEL_37;
    }
    memcpy((char *)v29 + v9, *((const void **)v27 + 2), *(uint32_t *)v27);
    LOBYTE(object) = v33;
    if ( (v33 & 1) == 0 )
      v36 += v38 - v31[0];
    v9 += *(uint32_t *)v27;
  }
  LOBYTE(v10) = ASN1_const_check_infinite_end(v31, (int)(uintptr_t)(&v37[-v31[0]]));
  v31[1] = v10;
  if ( v10 == 0 )
    goto LABEL_10;
LABEL_17:
  LOBYTE(v11) = asn1_const_Finish((int)(uintptr_t)(v31));
  v12 = v32;
  if ( v11 != 0 )
  {
    v13 = (void *)v5[2];
    *v5 = v9;
    if ( v13 != nullptr )
      CRYPTO_free(v13);
    v5[2] = (uint32_t)(uintptr_t)(v29);
    if ( v27 != nullptr )
      ASN1_STRING_free((void **)v27);
    v14 = (void *)v31[0];
    goto LABEL_27;
  }
LABEL_37:
  ERR_put_error(13, 105, v12, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v27 != nullptr )
    ASN1_STRING_free((void **)v27);
  if ( v29 != nullptr )
    CRYPTO_free(v29);
  v20 = 0;
LABEL_42:
  if ( a1 == nullptr || *a1 != v5 )
    ASN1_STRING_free((void **)v5);
  ERR_put_error(13, 143, v20, (int)(uintptr_t)(&unk_1B15112), 0);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: ASN1_mbstring_ncopy  (binary VA: 0x1a35770)
// Original: ASN1_mbstring_ncopy
// ----------------------------------------------------------------------------
int ASN1_mbstring_ncopy(uint32_t **a1, char *s, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v11;
  uint32_t *v12;
  void *v13;
  int v14;
  uint8_t *v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int (*_g4_t_v20)(unsigned int, int);
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v18)) > _g4_s1 ? (36u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v19)) > _g4_s2 ? (36u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v21)) > _g4_s4 ? (47u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v22)) > _g4_s5 ? (52u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v23)) > _g4_s6 ? (56u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v24)) > _g4_s7 ? (60u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v25)) > _g4_s8 ? (64u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 47u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);

  v7 = a6;
  v8 = a7;
  v22 = 0;
  if ( a3 == -1 )
    a3 = strlen(s);
  if ( a5 == 0 )
    a5 = 10246;
  switch ( a4 )
  {
    case 4096:
      v24 = 0;
      if ( sub_1A354D0((uint8_t *)s, a3, 4096, (int (*)(unsigned int, int))sub_1A35410, (int)(uintptr_t)(&v24)) < 0 )
      {
        v9 = -1;
        ERR_put_error(13, 122, 134, (int)(uintptr_t)(&unk_1B15112), 0);
        return v9;
      }
      break;
    case 4097:
      v24 = a3;
      break;
    case 4098:
      if ( (a3 & 1) != 0 )
      {
        v9 = -1;
        ERR_put_error(13, 122, 129, (int)(uintptr_t)(&unk_1B15112), 0);
        return v9;
      }
      v24 = a3 >> 1;
      break;
    case 4100:
      if ( (a3 & 3) != 0 )
      {
        v9 = -1;
        ERR_put_error(13, 122, 133, (int)(uintptr_t)(&unk_1B15112), 0);
        return v9;
      }
      v24 = a3 >> 2;
      break;
    default:
      v9 = -1;
      ERR_put_error(13, 122, 160, (int)(uintptr_t)(&unk_1B15112), 0);
      return v9;
  }
  if ( v7 > 0 && v7 > v24 )
  {
    ERR_put_error(13, 122, 152, (int)(uintptr_t)(&unk_1B15112), 0);
    v17 = v7;
    v9 = -1;
    BIO_snprintf(v25, 32, "%ld", v17);
    ERR_add_error_data(2, "minsize=", v25);
    return v9;
  }
  if ( v8 > 0 && v8 < v24 )
  {
    v9 = -1;
    ERR_put_error(13, 122, 151, (int)(uintptr_t)(&unk_1B15112), 0);
    BIO_snprintf(v25, 32, "%ld", v8);
    ERR_add_error_data(2, "maxsize=", v25);
    return v9;
  }
  if ( sub_1A354D0((uint8_t *)s, a3, a4, (int (*)(unsigned int, int))sub_1A35680, (int)(uintptr_t)(&a5)) < 0 )
  {
    v9 = -1;
    ERR_put_error(13, 122, 124, (int)(uintptr_t)(&unk_1B15112), 0);
    return v9;
  }
  v11 = 4097;
  v9 = 19;
  if ( (a5 & 2) == 0 )
  {
    LOWORD(v9) = 22;
    if ( (a5 & 0x10) == 0 )
    {
      LOWORD(v9) = 20;
      if ( (a5 & 4) == 0 )
      {
        LOBYTE(v11) = 2;
        LOWORD(v9) = 30;
        if ( (a5 & 0x800) == 0 )
        {
          v11 = (a5 & 0x100) == 0 ? 4096 : 4100;
          v9 = (a5 & 0x100) == 0 ? 12 : 28;
        }
      }
    }
  }
  if ( a1 == nullptr )
    return v9;
  v12 = *a1;
  if ( *a1 != nullptr )
  {
    v13 = (void *)v12[2];
    if ( v13 != nullptr )
    {
      *v12 = 0;
      v18 = v11;
      CRYPTO_free(v13);
      v12[2] = 0;
      v11 = v18;
    }
    v12[1] = v9;
    v21 = 0;
  }
  else
  {
    v19 = v11;
    v12 = ASN1_STRING_type_new(v9);
    v11 = v19;
    if ( v12 == nullptr )
      goto LABEL_45;
    v21 = 1;
    *a1 = v12;
  }
  if ( a4 == v11 )
  {
    if ( ASN1_STRING_set((int)(uintptr_t)(v12), s, a3) != 0 )
      return v9;
LABEL_45:
    v9 = -1;
    ERR_put_error(13, 122, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v9;
  }
  if ( v11 == 4097 )
  {
    v14 = v24;
    v22 = v24;
    v20 = (int (*)(unsigned int, int))sub_1A35420;
  }
  else if ( v11 > 4097 )
  {
    if ( v11 == 4098 )
    {
      v14 = 2 * v24;
      v20 = (int (*)(unsigned int, int))sub_1A35440;
      v22 = 2 * v24;
    }
    else
    {
      v14 = 4 * v24;
      v20 = (int (*)(unsigned int, int))sub_1A35480;
      v22 = 4 * v24;
    }
  }
  else
  {
    v22 = 0;
    sub_1A354D0((uint8_t *)s, a3, a4, (int (*)(unsigned int, int))sub_1A35620, (int)(uintptr_t)(&v22));
    v14 = v22;
    v20 = (int (*)(unsigned int, int))sub_1A355D0;
  }
  v23 = CRYPTO_malloc(v14 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v23 == nullptr )
  {
    if ( v21 != 0 )
      ASN1_STRING_free((void **)v12);
    goto LABEL_45;
  }
  *v12 = v22;
  v15 = v23;
  v16 = v22;
  v12[2] = (uint32_t)(uintptr_t)(v23);
  v15[v16] = 0;
  sub_1A354D0((uint8_t *)s, a3, a4, v20, (int)(uintptr_t)(&v23));
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ASN1_mbstring_copy  (binary VA: 0x1a35dc0)
// Original: ASN1_mbstring_copy
// ----------------------------------------------------------------------------
int ASN1_mbstring_copy(uint32_t **a1, char *a2, size_t a3, int a4, int a5)
{
  return ASN1_mbstring_ncopy(a1, a2, a3, a4, a5, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_PRINTABLE_type  (binary VA: 0x1a35e20)
// Original: ASN1_PRINTABLE_type
// ----------------------------------------------------------------------------
int ASN1_PRINTABLE_type(uint8_t *a1, int a2)
{
  int v2;
  uint8_t *v3;
  int result;
  uint8_t *v5;
  int v6;
  uint8_t v7;
  bool v8;
  int v9;

  v2 = a2;
  v3 = a1;
  if ( a2 <= 0 )
    v2 = -1;
  result = 19;
  if ( a1 != nullptr )
  {
    v5 = &a1[v2];
    v6 = 0;
    v9 = 0;
LABEL_5:
    v7 = *v3;
    while ( v7 != 0 )
    {
      if ( v3 == v5 )
        break;
      ++v3;
      if ( (unsigned int)v7 - 65 > 0x19 && (unsigned int)v7 - 97 > 0x19 )
      {
        if ( v7 == 32 )
          goto LABEL_5;
        if ( (unsigned int)v7 - 48 > 9
          && v7 != 40
          && v7 != 39
          && v7 != 43
          && v7 != 41
          && v7 != 45
          && v7 != 44
          && v7 != 47
          && v7 != 46
          && v7 != 61
          && v7 != 58 )
        {
          if ( v7 == 63 )
            goto LABEL_5;
          v9 = 1;
        }
      }
      v8 = (v7 & 0x80u) == 0;
      v7 = *v3;
      if ( !v8 )
        v6 = 1;
    }
    result = 20;
    if ( v6 == 0 )
      return v9 == 0 ? 19 : 22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_UNIVERSALSTRING_to_string  (binary VA: 0x1a35f00)
// Original: ASN1_UNIVERSALSTRING_to_string
// ----------------------------------------------------------------------------
int ASN1_UNIVERSALSTRING_to_string(int a1)
{
  int result;
  int v2;
  uint8_t *v3;
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  int v7;
  char v8;
  int v9;

  result = 0;
  if ( *(uint32_t *)(a1 + 4) == 28 )
  {
    v2 = *(uint32_t *)a1;
    if ( (*(uint32_t *)a1 & 3) == 0 )
    {
      v3 = *(uint8_t **)(a1 + 8);
      if ( v2 <= 0 )
      {
        v6 = *(uint8_t **)(a1 + 8);
LABEL_17:
        *v6 = 0;
        v9 = *(uint32_t *)a1 / 4;
        *(uint32_t *)a1 = v9;
        *(uint32_t *)(a1 + 4) = ASN1_PRINTABLE_type(*(uint8_t **)(a1 + 8), v9);
        return 1;
      }
      result = *(uint32_t *)a1 & 3;
      if ( *v3 == 0 && v3[1] == 0 && v3[2] == 0 )
      {
        v4 = *(uint8_t **)(a1 + 8);
        v5 = 0;
        while ( 1 )
        {
          v5 += 4;
          v4 += 4;
          if ( v2 <= v5 )
            break;
          if ( *v4 != 0 || v4[1] != 0 || v4[2] != 0 )
            return 0;
        }
        v6 = *(uint8_t **)(a1 + 8);
        if ( v2 > 3 )
        {
          v7 = 3;
          while ( 1 )
          {
            v8 = v3[v7];
            v7 += 4;
            *v6++ = v8;
            if ( *(uint32_t *)a1 <= v7 )
              break;
            v3 = *(uint8_t **)(a1 + 8);
          }
        }
        goto LABEL_17;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_generate_v3  (binary VA: 0x1a36810)
// Original: ASN1_generate_v3
// ----------------------------------------------------------------------------
unsigned int * ASN1_generate_v3(char *a1, int a2)
{
  unsigned int *v2;
  int v3;
  int *v4;
  int v6;
  int *section;
  int i;
  int v9;
  int v10;
  uint32_t *v11;
  char *v12;
  char object;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int *v21;
  int j;
  char *v23;
  int v24;
  int v25;
  char **v26;
  uint32_t *v27;
  int *v28;
  uint32_t *v29;
  int v30;
  int v31;
  uint8_t *v32;
  typedef char _g4_t_dest;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_n;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef void *_g4_t_src;
  typedef void *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef uint32_t _g4_t_v49[3];
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef uint32_t _g4_t_v55[100];
  typedef int _g4_t_v56;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v34)) > _g4_s1 ? (32u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v35)) > _g4_s2 ? (36u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_n)) > _g4_s3 ? (36u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v37)) > _g4_s4 ? (40u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v38)) > _g4_s5 ? (40u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v39)) > _g4_s6 ? (44u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v40)) > _g4_s7 ? (44u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v41)) > _g4_s8 ? (60u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_src)) > _g4_s9 ? (64u + sizeof(_g4_t_src)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v43)) > _g4_s10 ? (68u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v44)) > _g4_s11 ? (72u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v45)) > _g4_s12 ? (76u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v46)) > _g4_s13 ? (80u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v47)) > _g4_s14 ? (84u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v48)) > _g4_s15 ? (88u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v49)) > _g4_s16 ? (92u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v50)) > _g4_s17 ? (104u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v51)) > _g4_s18 ? (108u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v52)) > _g4_s19 ? (112u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v53)) > _g4_s20 ? (116u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v54)) > _g4_s21 ? (120u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v55)) > _g4_s22 ? (124u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (524u + sizeof(_g4_t_v56)) > _g4_s23 ? (524u + sizeof(_g4_t_v56)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 104u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 120u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 124u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 524u);

  v2 = nullptr;
  v41 = nullptr;
  v50 = -1;
  v51 = -1;
  v53 = 1;
  v56 = 0;
  if ( CONF_parse_list(a1, 44, 1, (int (*)(char *, int, int))sub_1A362A0, (int)(uintptr_t)(&v50)) != 0 )
    return v2;
  v37 = v52;
  if ( v52 - 16 > 1 )
  {
    v3 = v53;
    v4 = v54;
    v2 = (unsigned int *)ASN1_TYPE_new();
    if ( v2 != nullptr )
    {
      if ( v4 == nullptr )
        v4 = (int *)&unk_1B15112;
      switch ( v37 )
      {
        case 1u:
          if ( v3 != 1 )
          {
            ERR_put_error(13, 179, 190, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_9;
          }
          v49[1] = 0;
          v49[0] = 0;
          v49[2] = (uint32_t)(uintptr_t)(v4);
          if ( X509V3_get_value_bool((int)(uintptr_t)(v49), v2 + 1) != 0 )
            goto LABEL_89;
          ERR_put_error(13, 179, 176, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_8;
        case 2u:
        case 0xAu:
          if ( v3 != 1 )
          {
            ERR_put_error(13, 179, 185, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_9;
          }
          v28 = s2i_ASN1_INTEGER(0, v4);
          v2[1] = (unsigned int)(uintptr_t)(v28);
          if ( v28 != nullptr )
            goto LABEL_89;
          ERR_put_error(13, 179, 180, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_8;
        case 3u:
        case 4u:
          v27 = ASN1_STRING_new();
          v2[1] = (unsigned int)(uintptr_t)(v27);
          if ( v27 == nullptr )
          {
            ERR_put_error(13, 179, 65, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_9;
          }
          if ( v3 == 3 )
          {
            v32 = string_to_hex((char *)v4, &v48);
            if ( v32 == nullptr )
            {
              ERR_put_error(13, 179, 178, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_8;
            }
            *(uint32_t *)(v2[1] + 8) = (uint32_t)(uintptr_t)(v32);
            *(uint32_t *)v2[1] = (uint32_t)(uintptr_t)(v48);
            *(uint32_t *)(v2[1] + 4) = v37;
          }
          else
          {
            if ( v3 != 1 )
            {
              if ( v37 != 3 || v3 != 4 )
              {
                ERR_put_error(13, 179, 175, (int)(uintptr_t)(&unk_1B15112), 0);
                goto LABEL_9;
              }
              if ( CONF_parse_list((char *)v4, 44, 1, (int (*)(char *, int, int))sub_1A36710, (int)(uintptr_t)(v27)) != 0 )
                goto LABEL_89;
              ERR_put_error(13, 179, 188, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_8:
              ERR_add_error_data(2, "string=", v4);
LABEL_9:
              dest = (char)(uintptr_t)v2;
              v2 = nullptr;
              ASN1_TYPE_free(dest);
              return v2;
            }
            ASN1_STRING_set((int)(uintptr_t)(v27), (char *)v4, -1);
          }
          if ( v37 == 3 )
          {
            *(uint32_t *)(v2[1] + 12) &= 0xFFFFFFF0;
            *(uint32_t *)(v2[1] + 12) |= 8u;
          }
          goto LABEL_89;
        case 5u:
          if ( *(uint8_t *)v4 == 0 )
            goto LABEL_89;
          ERR_put_error(13, 179, 182, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_9;
        case 6u:
          if ( v3 != 1 )
          {
            ERR_put_error(13, 179, 191, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_9;
          }
          v26 = OBJ_txt2obj((char *)v4, 0);
          v2[1] = (unsigned int)(uintptr_t)(v26);
          if ( v26 != nullptr )
            goto LABEL_89;
          ERR_put_error(13, 179, 183, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_8;
        case 0xCu:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x16u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Eu:
          if ( v3 == 1 )
          {
            v30 = 4097;
          }
          else
          {
            v30 = 4096;
            if ( v3 != 2 )
            {
              ERR_put_error(13, 179, 177, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_9;
            }
          }
          v34 = v30;
          v31 = ASN1_tag2bit(v37);
          if ( ASN1_mbstring_copy((uint32_t **)v2 + 1, (char *)v4, 0xFFFFFFFF, v34, v31) <= 0 )
            goto LABEL_108;
          goto LABEL_89;
        case 0x17u:
        case 0x18u:
          if ( v3 != 1 )
          {
            ERR_put_error(13, 179, 193, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_9;
          }
          v29 = ASN1_STRING_new();
          v2[1] = (unsigned int)(uintptr_t)(v29);
          if ( v29 == nullptr || ASN1_STRING_set((int)(uintptr_t)(v29), (char *)v4, -1) == 0 )
          {
LABEL_108:
            ERR_put_error(13, 179, 65, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_8;
          }
          *(uint32_t *)(v2[1] + 4) = v37;
          if ( ASN1_TIME_check((int *)v2[1]) == 0 )
          {
            ERR_put_error(13, 179, 184, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_8;
          }
LABEL_89:
          *v2 = v37;
          goto LABEL_34;
        default:
          ERR_put_error(13, 179, 196, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_8;
      }
    }
    ERR_put_error(13, 179, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v2;
  }
  if ( a2 == 0 )
  {
    ERR_put_error(13, 178, 192, (int)(uintptr_t)(&unk_1B15112), 0);
    return v2;
  }
  v6 = (int)(uintptr_t)(v54);
  v48 = nullptr;
  v35 = (int *)(sk_new_null());
  if ( v35 == nullptr )
  {
    section = nullptr;
    v2 = nullptr;
    goto LABEL_28;
  }
  if ( v6 != 0 )
  {
    section = (int *)X509V3_get_section(a2, v6);
    if ( section == nullptr )
    {
      v2 = nullptr;
      goto LABEL_28;
    }
    for ( i = 0; i < sk_num((int)(uintptr_t)(section)); ++i )
    {
      v9 = sk_value(section, i);
      v10 = (int)(uintptr_t)(ASN1_generate_v3(*(char **)(v9 + 8), a2));
      if ( v10 == 0 || sk_push(v35, v10) == 0 )
        goto LABEL_27;
    }
  }
  else
  {
    section = nullptr;
  }
  if ( v37 == 17 )
    v39 = i2d_ASN1_SET_ANY((int)(uintptr_t)(v35), &v48);
  else
    v39 = i2d_ASN1_SEQUENCE_ANY((int)(uintptr_t)(v35), &v48);
  if ( v39 < 0 )
  {
LABEL_27:
    v2 = nullptr;
  }
  else
  {
    v2 = (unsigned int *)ASN1_TYPE_new();
    if ( v2 != nullptr )
    {
      v11 = ASN1_STRING_type_new(v37);
      v2[1] = (unsigned int)(uintptr_t)(v11);
      if ( v11 != nullptr )
      {
        *v2 = v37;
        v11[2] = (uint32_t)(uintptr_t)(v48);
        *(uint32_t *)v2[1] = v39;
        v48 = nullptr;
LABEL_31:
        sk_pop_free((void **)v35, (void (*)(uint32_t))ASN1_TYPE_free);
        goto LABEL_32;
      }
    }
  }
LABEL_28:
  if ( v48 != nullptr )
    CRYPTO_free(v48);
  if ( v35 != nullptr )
    goto LABEL_31;
LABEL_32:
  if ( section != nullptr )
    X509V3_section_free(a2, (int)(uintptr_t)(section));
LABEL_34:
  if ( v2 == nullptr || v50 == -1 && v56 == 0 )
    return v2;
  n = i2d_ASN1_TYPE((int)(uintptr_t)(v2), &v41);
  ASN1_TYPE_free((char)(uintptr_t)v2);
  src = v41;
  if ( v50 == -1 )
  {
    v14 = n;
    v38 = 0;
  }
  else
  {
    v12 = nullptr;
    v2 = nullptr;
    object = ASN1_get_object((uint8_t **)&src, &v45, &v46, &v47, n);
    if ( object < 0 )
      goto LABEL_39;
    n += (uint8_t *)v41 - (uint8_t *)src;
    if ( (object & 1) != 0 )
    {
      v45 = 0;
      v24 = 0;
      v38 = 2;
    }
    else
    {
      v24 = v45;
      v38 = object & 0x20;
    }
    v14 = ASN1_object_size(0, v24, v50);
  }
  if ( v56 > 0 )
  {
    v15 = 0;
    v16 = (int *)(&v55[5 * v56 - 5]);
    v17 = v14;
    do
    {
      v18 = v16[3] + v17;
      v19 = *v16;
      v16[4] = v18;
      ++v15;
      v16 -= 5;
      v17 = ASN1_object_size(0, v18, v19);
    }
    while ( v56 > v15 );
    v14 = v17;
  }
  v20 = (char *)(CRYPTO_malloc(v14, (int)(uintptr_t)(&unk_1B15112), 0));
  v2 = nullptr;
  v12 = v20;
  if ( v20 != nullptr )
  {
    v43 = v20;
    if ( v56 > 0 )
    {
      v40 = v14;
      v21 = (int *)(v55);
      for ( j = 0; j < v56; ++j )
      {
        ASN1_put_object((uint8_t **)&v43, v21[2], v21[4], *v21, v21[1]);
        if ( v21[3] != 0 )
        {
          v23 = (char *)v43;
          *(uint8_t *)v43 = 0;
          v43 = v23 + 1;
        }
        v21 += 5;
      }
      v14 = v40;
    }
    if ( v50 != -1 )
    {
      if ( v51 != 0 )
      {
        ASN1_put_object((uint8_t **)&v43, v38, v45, v50, v51);
      }
      else
      {
        v25 = 32;
        if ( (unsigned int)(v50 - 16) > 1 )
          v25 = v38;
        ASN1_put_object((uint8_t **)&v43, v25, v45, v50, v51);
      }
    }
    memcpy(v43, src, n);
    v44 = v12;
    v2 = (unsigned int *)d2i_ASN1_TYPE(nullptr, &v44, v14);
  }
LABEL_39:
  if ( v41 != nullptr )
    CRYPTO_free(v41);
  if ( v12 == nullptr )
    return v2;
  CRYPTO_free(v12);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_generate_nconf  (binary VA: 0x1a372c0)
// Original: ASN1_generate_nconf
// ----------------------------------------------------------------------------
unsigned int * ASN1_generate_nconf(char *a1, int a2)
{
  int v3[7];

  if ( a2 == 0 )
    return ASN1_generate_v3(a1, 0);
  X509V3_set_nconf((int)(uintptr_t)(v3), a2);
  return ASN1_generate_v3(a1, (int)(uintptr_t)(v3));
}

// ----------------------------------------------------------------------------
// Function: ASN1_seq_unpack  (binary VA: 0x1a37330)
// Original: ASN1_seq_unpack
// ----------------------------------------------------------------------------
int ASN1_seq_unpack(int a1, int a2, int a3, int a4)
{
  int result;
  uint32_t v5[4];

  v5[0] = a1;
  result = (int)(uintptr_t)(d2i_ASN1_SET(0, v5, a2, a3, a4, 16, 0));
  if ( result == 0 )
  {
    ERR_put_error(13, 127, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_seq_pack  (binary VA: 0x1a373d0)
// Original: ASN1_seq_pack
// ----------------------------------------------------------------------------
uint8_t * ASN1_seq_pack(int a1, int a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  uint8_t *v6;
  uint8_t *v7;
  typedef uint8_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v4 = i2d_ASN1_SET(a1, 0, a2, 16, 0, 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0);
    v7 = v6;
    if ( v6 != nullptr )
    {
      v9 = v6;
      i2d_ASN1_SET(a1, &v9, a2, 16, 0, 0);
      if ( a4 != nullptr )
        *a4 = v5;
      if ( a3 != nullptr )
        *a3 = (uint32_t)(uintptr_t)(v7);
    }
    else
    {
      ERR_put_error(13, 126, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v7 = nullptr;
    ERR_put_error(13, 126, 112, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ASN1_unpack_string  (binary VA: 0x1a37530)
// Original: ASN1_unpack_string
// ----------------------------------------------------------------------------
int ASN1_unpack_string(int *a1, int (*a2)(uint32_t, uint32_t *, int))
{
  int result;
  typedef int _g4_t_v3;
  typedef uint32_t _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v4)) > _g4_s1 ? (60u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 60u);

  v3 = *a1;
  v4[0] = a1[2];
  result = a2(0, v4, v3);
  if ( result == 0 )
  {
    ERR_put_error(13, 136, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_pack_string  (binary VA: 0x1a375b0)
// Original: ASN1_pack_string
// ----------------------------------------------------------------------------
int * ASN1_pack_string(int a1, int (*a2)(int, uint8_t **), int **a3)
{
  int *v3;
  int v4;
  uint8_t *v5;
  int *v7;
  typedef uint8_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  if ( a3 == nullptr || (v3 = *a3, *a3 == nullptr) )
  {
    v7 = (int *)(ASN1_STRING_new());
    v3 = v7;
    if ( v7 == nullptr )
    {
      ERR_put_error(13, 124, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v3;
    }
    if ( a3 != nullptr )
      *a3 = v7;
  }
  v4 = a2(a1, nullptr);
  *v3 = v4;
  if ( v4 != 0 )
  {
    v5 = CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0);
    v8 = v5;
    if ( v5 != nullptr )
    {
      v3[2] = (int)(uintptr_t)(v5);
      a2(a1, &v8);
    }
    else
    {
      v3 = nullptr;
      ERR_put_error(13, 124, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v3 = nullptr;
    ERR_put_error(13, 124, 112, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_pack  (binary VA: 0x1a37700)
// Original: ASN1_item_pack
// ----------------------------------------------------------------------------
void ** ASN1_item_pack(int a1, int a2, void ***a3)
{
  void **v3;
  int v4;
  void **v6;

  if ( a3 == nullptr || (v3 = *a3, *a3 == nullptr) )
  {
    v6 = (void **)ASN1_STRING_new();
    v3 = v6;
    if ( v6 == nullptr )
    {
      ERR_put_error(13, 198, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v3;
    }
    if ( a3 != nullptr )
      *a3 = v6;
  }
  if ( v3[2] != nullptr )
  {
    CRYPTO_free(v3[2]);
    v3[2] = nullptr;
  }
  v4 = ASN1_item_i2d(a1, v3 + 2, a2);
  *v3 = (void *)v4;
  if ( v4 != 0 )
  {
    if ( v3[2] == nullptr )
    {
      v3 = nullptr;
      ERR_put_error(13, 198, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v3 = nullptr;
    ERR_put_error(13, 198, 112, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_unpack  (binary VA: 0x1a37840)
// Original: ASN1_item_unpack
// ----------------------------------------------------------------------------
int ASN1_item_unpack(int *a1, int a2)
{
  int result;
  typedef char *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = (char *)a1[2];
  result = ASN1_item_d2i(nullptr, &v3, *a1, a2);
  if ( result == 0 )
  {
    ERR_put_error(13, 199, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_PBEPARAM  (binary VA: 0x1a38340)
// Original: d2i_PBEPARAM
// ----------------------------------------------------------------------------
int d2i_PBEPARAM(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PBEPARAM_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PBEPARAM  (binary VA: 0x1a38380)
// Original: i2d_PBEPARAM
// ----------------------------------------------------------------------------
int i2d_PBEPARAM(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PBEPARAM_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS5_pbe_set0_algor  (binary VA: 0x1a38420)
// Original: PKCS5_pbe_set0_algor
// ----------------------------------------------------------------------------
int PKCS5_pbe_set0_algor(int a1, unsigned int a2, int a3, void *src, int a5)
{
  int v5;
  int n;
  int *v7;
  int v8;
  void *dest;
  void *v11;
  char **v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v14)) > _g4_s1 ? (44u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v5 = a3;
  n = a5;
  v14 = nullptr;
  v7 = (int *)PBEPARAM_new();
  if ( v7 != nullptr )
  {
    if ( a3 <= 0 )
      v5 = 2048;
    if ( ASN1_INTEGER_set(v7[1], v5) != 0 )
    {
      if ( a5 == 0 )
        n = 8;
      if ( ASN1_STRING_set(*v7, nullptr, n) != 0 )
      {
        dest = (void *)ASN1_STRING_data(*v7);
        if ( src != nullptr )
        {
          memcpy(dest, src, n);
        }
        else if ( RAND_pseudo_bytes((int)(uintptr_t)(dest), n) < 0 )
        {
          goto LABEL_9;
        }
        if ( ASN1_item_pack((int)(uintptr_t)(v7), (int)PBEPARAM_it, (void ***)&v14) != nullptr )
        {
          PBEPARAM_free((char)(uintptr_t)v7);
          v11 = v14;
          v12 = OBJ_nid2obj(a2);
          v13 = (int)(uintptr_t)(v11);
          v8 = 1;
          if ( X509_ALGOR_set0(a1, (int)(uintptr_t)(v12), 16, v13) != 0 )
            return v8;
          goto LABEL_10;
        }
      }
    }
    ERR_put_error(13, 215, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
    PBEPARAM_free((char)(uintptr_t)v7);
    goto LABEL_10;
  }
  ERR_put_error(13, 215, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_10:
  v8 = 0;
  if ( v14 != nullptr )
    ASN1_STRING_free((void **)v14);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: PKCS5_pbe_set  (binary VA: 0x1a385f0)
// Original: PKCS5_pbe_set
// ----------------------------------------------------------------------------
int PKCS5_pbe_set(unsigned int a1, int a2, void *a3, int a4)
{
  int v4;
  int v5;
  char v7;

  v4 = X509_ALGOR_new();
  v5 = v4;
  if ( v4 != 0 )
  {
    if ( PKCS5_pbe_set0_algor(v4, a1, a2, a3, a4) == 0 )
    {
      v7 = v5;
      v5 = 0;
      X509_ALGOR_free(v7);
    }
  }
  else
  {
    ERR_put_error(13, 202, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: d2i_PBE2PARAM  (binary VA: 0x1a38690)
// Original: d2i_PBE2PARAM
// ----------------------------------------------------------------------------
int d2i_PBE2PARAM(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PBE2PARAM_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PBE2PARAM  (binary VA: 0x1a386d0)
// Original: i2d_PBE2PARAM
// ----------------------------------------------------------------------------
int i2d_PBE2PARAM(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PBE2PARAM_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_PBKDF2PARAM  (binary VA: 0x1a38770)
// Original: d2i_PBKDF2PARAM
// ----------------------------------------------------------------------------
int d2i_PBKDF2PARAM(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PBKDF2PARAM_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PBKDF2PARAM  (binary VA: 0x1a387b0)
// Original: i2d_PBKDF2PARAM
// ----------------------------------------------------------------------------
int i2d_PBKDF2PARAM(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PBKDF2PARAM_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS5_pbe2_set_iv  (binary VA: 0x1a38850)
// Original: PKCS5_pbe2_set_iv
// ----------------------------------------------------------------------------
char *** PKCS5_pbe2_set_iv(uint32_t *a1, int a2, void *a3, int a4, void *src, unsigned int a6)
{
  int v6;
  char **v7;
  int v8;
  int v9;
  int v10;
  size_t n;
  int *v12;
  uint8_t *v13;
  int v14;
  int v15;
  char **v16;
  char ***v17;
  char ***v18;
  int v19;
  char ***v20;
  int v21;
  uint32_t *v23;
  int v24;
  int v25;
  typedef char ***_g4_t_v26;
  typedef void **_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef uint8_t _g4_t_dest[16];
  typedef int _g4_t_v30[42];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_dest)) > _g4_s3 ? (20u + sizeof(_g4_t_dest)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);

  v6 = a4;
  v28 = EVP_CIPHER_type((int)(uintptr_t)(a1));
  if ( v28 == 0 )
  {
    LOBYTE(v9) = 0;
    LOBYTE(v12) = 0;
    ERR_put_error(13, 167, 108, (int)(uintptr_t)(&unk_1B15112), 0);
    LOBYTE(v20) = 0;
    v27 = nullptr;
    goto LABEL_35;
  }
  v7 = OBJ_nid2obj(v28);
  v8 = PBE2PARAM_new();
  v9 = v8;
  if ( v8 == 0 || (v26 = *(char ****)(v8 + 4), *v26 = v7, v10 = ASN1_TYPE_new(), v26[1] = (char **)v10, v10 == 0) )
  {
    v27 = nullptr;
    LOBYTE(v12) = 0;
    LOBYTE(v20) = 0;
    ERR_put_error(13, 167, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_35;
  }
  if ( EVP_CIPHER_iv_length((int)(uintptr_t)(a1)) != 0 )
  {
    if ( src != nullptr )
    {
      n = EVP_CIPHER_iv_length((int)(uintptr_t)(a1));
      memcpy(dest, src, n);
    }
    else
    {
      v25 = EVP_CIPHER_iv_length((int)(uintptr_t)(a1));
      if ( RAND_pseudo_bytes((int)(uintptr_t)(dest), v25) < 0 )
      {
        v27 = nullptr;
        LOBYTE(v12) = 0;
        LOBYTE(v20) = 0;
        goto LABEL_35;
      }
    }
  }
  EVP_CIPHER_CTX_init(v30);
  EVP_CipherInit_ex(v30, a1, nullptr, 0, dest, 0);
  if ( EVP_CIPHER_param_to_asn1((int)(uintptr_t)(v30), (int)(uintptr_t)(v26[1])) < 0 )
  {
    LOBYTE(v20) = 0;
    ERR_put_error(13, 167, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    LOBYTE(v12) = 0;
    EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(v30));
    v27 = nullptr;
    goto LABEL_35;
  }
  if ( a6 == -1 && EVP_CIPHER_CTX_ctrl((int)(uintptr_t)(v30), 7, 0, (int)(uintptr_t)(&a6)) <= 0 )
  {
    ERR_clear_error();
    a6 = 163;
  }
  EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(v30));
  v12 = (int *)PBKDF2PARAM_new();
  if ( v12 == nullptr )
  {
    v27 = nullptr;
    LOBYTE(v20) = 0;
    ERR_put_error(13, 167, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_35;
  }
  v27 = (void **)ASN1_STRING_type_new(4);
  if ( v27 == nullptr )
  {
    LOBYTE(v20) = 0;
    ERR_put_error(13, 167, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_35;
  }
  if ( a4 == 0 )
    v6 = 8;
  v13 = CRYPTO_malloc(v6, (int)(uintptr_t)(&unk_1B15112), 0);
  v27[2] = v13;
  if ( v13 == nullptr )
    goto LABEL_33;
  *v27 = (void *)v6;
  if ( a3 != nullptr )
  {
    memcpy(v13, a3, v6);
  }
  else if ( RAND_pseudo_bytes((int)(uintptr_t)(v13), v6) < 0 )
  {
    goto LABEL_33;
  }
  v14 = 2048;
  if ( a2 > 0 )
    v14 = a2;
  if ( ASN1_INTEGER_set(v12[1], v14) == 0 )
    goto LABEL_33;
  *(uint32_t *)(*v12 + 4) = (uint32_t)(uintptr_t)(v27);
  *(uint32_t *)*v12 = 4;
  if ( v28 != 37
    || (v23 = ASN1_STRING_type_new(2), v12[2] = (int)(uintptr_t)(v23), v23 != nullptr)
    && (v24 = EVP_CIPHER_key_length((int)(uintptr_t)(a1)), ASN1_INTEGER_set(v12[2], v24) != 0) )
  {
    if ( a6 != 163 )
    {
      v15 = X509_ALGOR_new();
      v12[3] = v15;
      if ( v15 == 0 )
        goto LABEL_32;
      v16 = OBJ_nid2obj(a6);
      X509_ALGOR_set0(v12[3], (int)(uintptr_t)(v16), 5, 0);
    }
    v17 = *(char ****)v9;
    *v17 = OBJ_nid2obj(0x45u);
    v18 = *(char ****)v9;
    v19 = ASN1_TYPE_new();
    v18[1] = (char **)v19;
    if ( v19 != 0
      && ASN1_item_pack((int)(uintptr_t)(v12), (int)PBKDF2PARAM_it, (void ***)(*(uint32_t *)(*(uint32_t *)v9 + 4) + 4)) != nullptr )
    {
      **(uint32_t **)(*(uint32_t *)v9 + 4) = 16;
      PBKDF2PARAM_free((char)(uintptr_t)v12);
      v20 = (char ***)X509_ALGOR_new();
      if ( v20 != nullptr )
      {
        v21 = ASN1_TYPE_new();
        v20[1] = (char **)v21;
        if ( v21 != 0 )
        {
          *v20 = OBJ_nid2obj(0xA1u);
          if ( ASN1_item_pack(v9, (int)PBE2PARAM_it, (void ***)v20[1] + 1) != nullptr )
          {
            *v20[1] = (char *)&word_10;
            PBE2PARAM_free(v9);
            return v20;
          }
        }
      }
      v27 = nullptr;
      LOBYTE(v12) = 0;
      goto LABEL_34;
    }
  }
LABEL_32:
  v27 = nullptr;
LABEL_33:
  LOBYTE(v20) = 0;
LABEL_34:
  ERR_put_error(13, 167, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_35:
  PBE2PARAM_free(v9);
  ASN1_STRING_free(v27);
  PBKDF2PARAM_free((char)(uintptr_t)v12);
  X509_ALGOR_free(0);
  X509_ALGOR_free((char)(uintptr_t)v20);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS5_pbe2_set  (binary VA: 0x1a38dd0)
// Original: PKCS5_pbe2_set
// ----------------------------------------------------------------------------
char *** PKCS5_pbe2_set(uint32_t *a1, int a2, void *a3, int a4)
{
  return PKCS5_pbe2_set_iv(a1, a2, a3, a4, nullptr, 0xFFFFFFFF);
}

// ----------------------------------------------------------------------------
// Function: X509_INFO_new  (binary VA: 0x1a38e20)
// Original: X509_INFO_new
// ----------------------------------------------------------------------------
uint32_t * X509_INFO_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(44, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    result[3] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 1;
    *result = 0;
    result[1] = 0;
    result[2] = 0;
  }
  else
  {
    ERR_put_error(13, 170, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_INFO_free  (binary VA: 0x1a38ed0)
// Original: X509_INFO_free
// ----------------------------------------------------------------------------
void X509_INFO_free(void *a1)
{
  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 10, -1, 4, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    if ( *(uint32_t *)a1 != 0 )
      X509_free(*(uint32_t *)a1);
    if ( *((uint32_t *)a1 + 1) != 0 )
      X509_CRL_free(*((uint32_t *)a1 + 1));
    if ( *((uint32_t *)a1 + 2) != 0 )
      X509_PKEY_free(*((void **)a1 + 2));
    if ( *((uint32_t *)a1 + 9) != 0 )
      CRYPTO_free(*((void **)a1 + 9));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_PKEY  (binary VA: 0x1a38f80)
// Original: i2d_X509_PKEY
// ----------------------------------------------------------------------------
int i2d_X509_PKEY()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_PKEY_new  (binary VA: 0x1a38f90)
// Original: X509_PKEY_new
// ----------------------------------------------------------------------------
uint32_t * X509_PKEY_new()
{
  uint8_t *v0;
  uint32_t *v1;
  int v2;
  uint32_t *v3;

  v0 = CRYPTO_malloc(52, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = (uint32_t *)(v0);
  if ( v0 != nullptr )
  {
    *(uint32_t *)v0 = 0;
    v2 = X509_ALGOR_new();
    v1[1] = v2;
    if ( v2 != 0 && (v3 = ASN1_STRING_type_new(4), v1[2] = (uint32_t)(uintptr_t)(v3), v3 != nullptr) )
    {
      v1[3] = 0;
      v1[4] = 0;
      v1[5] = 0;
      v1[6] = 0;
      v1[7] = 0;
      v1[8] = 0;
      v1[9] = 0;
      v1[10] = 0;
      v1[11] = 0;
      v1[12] = 1;
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(13, 173, 65, (int)(uintptr_t)(&unk_1B15112), 112);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509_PKEY_free  (binary VA: 0x1a39090)
// Original: X509_PKEY_free
// ----------------------------------------------------------------------------
void X509_PKEY_free(void *a1)
{
  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 12, -1, 5, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    if ( *((uint32_t *)a1 + 1) != 0 )
      X509_ALGOR_free(*((uint32_t *)a1 + 1));
    if ( *((uint32_t *)a1 + 2) != 0 )
      ASN1_STRING_free(*((void ***)a1 + 2));
    if ( *((uint32_t *)a1 + 3) != 0 )
      EVP_PKEY_free(*((void **)a1 + 3));
    if ( *((uint32_t *)a1 + 5) != 0 && *((uint32_t *)a1 + 6) != 0 )
      CRYPTO_free(*((void **)a1 + 5));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_PKEY  (binary VA: 0x1a39150)
// Original: d2i_X509_PKEY
// ----------------------------------------------------------------------------
int * d2i_X509_PKEY(int **a1, int *a2, int a3)
{
  char *v3;
  int *v4;
  char *v5;
  char *v6;
  int16_t v7;
  int v8;
  unsigned int v10;
  char *v11;
  int cipherbyname;
  uint32_t *v13;
  int v14;
  int v15;
  typedef int *_g4_t_dest;
  typedef char *_g4_t_v17[2];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v17)) > _g4_s1 ? (36u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v18)) > _g4_s2 ? (44u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v19)) > _g4_s3 ? (60u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v20)) > _g4_s4 ? (64u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v21)) > _g4_s5 ? (68u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v22)) > _g4_s6 ? (72u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v23)) > _g4_s7 ? (76u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);

  v22 = a2;
  v18 = 58;
  v3 = (char *)*a2;
  v21 = (char *)*a2;
  if ( a1 == nullptr || (v4 = *a1, *a1 == nullptr) )
  {
    v4 = (int *)(X509_PKEY_new());
    if ( v4 == nullptr )
    {
      v23 = 75;
      ERR_put_error(13, 159, v18, (int)(uintptr_t)(&unk_1B15112), 75);
      asn1_add_error(*a2, (int)(uintptr_t)(&v21[-*a2]));
      return v4;
    }
    v3 = (char *)*a2;
  }
  v17[0] = v3;
  v5 = nullptr;
  v6 = &v3[a3];
  if ( a3 != 0 )
    v5 = v6;
  v20 = v5;
  if ( asn1_GetSequence((int)(uintptr_t)(v17), &a3) != 0 )
  {
    v21 = v17[0];
    if ( d2i_X509_ALGOR(v4 + 1, v17, v19) == 0 )
    {
      v23 = 79;
      v7 = v18;
      v8 = 79;
      goto LABEL_7;
    }
    v19 += v21 - v17[0];
    v21 = v17[0];
    if ( d2i_ASN1_OCTET_STRING(v4 + 2, v17, v19) == 0 )
    {
      v23 = 80;
      v7 = v18;
      v8 = 80;
      goto LABEL_7;
    }
    v19 += v21 - v17[0];
    v10 = OBJ_obj2nid(*(uint32_t *)v4[1]);
    v11 = OBJ_nid2ln(v10);
    cipherbyname = EVP_get_cipherbyname((int)(uintptr_t)(v11));
    v4[7] = cipherbyname;
    if ( cipherbyname == 0 )
    {
      v18 = 165;
      v23 = 87;
      v7 = 165;
      v8 = 87;
      goto LABEL_7;
    }
    v13 = *(uint32_t **)(v4[1] + 4);
    if ( *v13 == 4 )
    {
      v14 = v13[1];
      if ( *(int *)v14 > 16 )
      {
        v18 = 135;
        v23 = 96;
        v7 = 135;
        v8 = 96;
        goto LABEL_7;
      }
      memcpy(v4 + 8, *(const void **)(v14 + 8), *(uint32_t *)v14);
    }
    else
    {
      v4[8] = 0;
      v4[9] = 0;
      v4[10] = 0;
      v4[11] = 0;
    }
    LOBYTE(v15) = asn1_const_Finish((int)(uintptr_t)(v17));
    if ( v15 != 0 )
    {
      *a2 = (int)(uintptr_t)(v17[0]);
      if ( a1 != nullptr )
        *a1 = v4;
      return v4;
    }
    v23 = 104;
    v7 = v18;
    v8 = 104;
  }
  else
  {
    v23 = 78;
    v7 = v18;
    v8 = 78;
  }
LABEL_7:
  ERR_put_error(13, 159, v7, (int)(uintptr_t)(&unk_1B15112), v8);
  asn1_add_error(*a2, (int)(uintptr_t)(&v21[-*a2]));
  if ( a1 == nullptr || v4 != *a1 )
  {
    dest = v4;
    v4 = nullptr;
    X509_PKEY_free(dest);
    return v4;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_add  (binary VA: 0x1a39620)
// Original: BN_GF2m_add
// ----------------------------------------------------------------------------
int BN_GF2m_add(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int i;
  int v7;
  int v8;
  int result;
  int v10;

  v3 = a3;
  v4 = a2;
  v5 = a3[1];
  if ( a2[1] >= v5 )
  {
    v4 = a3;
    v5 = a2[1];
    v3 = a2;
  }
  if ( a1[2] < v5 && bn_expand2((int)(uintptr_t)(a1), v5) == 0 )
    return 0;
  for ( i = 0; v4[1] > i; ++i )
    *(uint32_t *)(*a1 + 4 * i) = *(uint32_t *)(*v3 + 4 * i) ^ *(uint32_t *)(*v4 + 4 * i);
  v7 = v3[1];
  if ( i < v7 )
  {
    v8 = 4 * i;
    do
    {
      ++i;
      *(uint32_t *)(*a1 + v8) = *(uint32_t *)(*v3 + v8);
      v7 = v3[1];
      v8 += 4;
    }
    while ( v7 > i );
  }
  a1[1] = v7;
  result = 1;
  if ( v7 > 0 )
  {
    v10 = *a1 + 4 * v7 - 4 - 4 * v7;
    do
    {
      if ( *(uint32_t *)(v10 + 4 * v7) != 0 )
        break;
      --v7;
    }
    while ( v7 != 0 );
    a1[1] = v7;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_arr  (binary VA: 0x1a39710)
// Original: BN_GF2m_mod_arr
// ----------------------------------------------------------------------------
int BN_GF2m_mod_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int v3;
  int v4;
  int i;
  uint32_t *v6;
  unsigned int *v7;
  unsigned int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int *v16;
  unsigned int v17;
  unsigned int k;
  uint32_t *v19;
  int v20;
  int result;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int *v26;
  int v27;
  uint32_t *v28;
  int j;

  v3 = *a3;
  if ( *a3 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( a2 == a1 )
  {
    v4 = a1[1];
  }
  else
  {
    v4 = a2[1];
    if ( v4 > a1[2] )
    {
      if ( bn_expand2((int)(uintptr_t)(a1), a2[1]) == 0 )
        return 0;
      v4 = a2[1];
    }
    if ( v4 > 0 )
    {
      for ( i = 0; i < v4; ++i )
      {
        *(uint32_t *)(*a1 + 4 * i) = *(uint32_t *)(*a2 + 4 * i);
        v4 = a2[1];
      }
    }
    a1[1] = v4;
    v3 = *a3;
  }
  v6 = (uint32_t *)*a1;
  v27 = v4 - 1;
  for ( j = v3 / 32; j < v27; v6[v27 - j - 1] ^= v8 << (32 - v14) )
  {
    while ( 1 )
    {
      v7 = &v6[v27];
      v8 = *v7;
      if ( *v7 != 0 )
        break;
      --v27;
LABEL_11:
      if ( j >= v27 )
        goto LABEL_20;
    }
    *v7 = 0;
    v9 = a3[1];
    if ( v9 != 0 )
    {
      v10 = a3;
      do
      {
        v11 = *a3 - v9;
        v12 = v11 % 32;
        v13 = v27 - v11 / 32;
        v6[v13] ^= v8 >> v12;
        if ( v12 != 0 )
          v6[v13 - 1] ^= v8 << (32 - v12);
        ++v10;
        v9 = v10[1];
      }
      while ( v9 != 0 );
    }
    v14 = *a3 % 32;
    v6[v27 - j] ^= v8 >> v14;
    if ( v14 == 0 )
      goto LABEL_11;
  }
LABEL_20:
  if ( j == v27 )
  {
    v15 = *a3 % 32;
    v16 = &v6[j];
    v17 = *v16;
    for ( k = *v16 >> v15; k != 0; k = *v16 >> v15 )
    {
      if ( v15 != 0 )
      {
        *v16 = v17 << (32 - v15) >> (32 - v15);
        v19 = a3;
        *v6 ^= k;
        v20 = a3[1];
        if ( v20 != 0 )
          goto LABEL_32;
      }
      else
      {
        v19 = a3;
        *v16 = 0;
        *v6 ^= k;
        v20 = a3[1];
        if ( v20 != 0 )
        {
LABEL_32:
          v24 = v20;
          v28 = v19;
          v26 = v16;
          do
          {
            v6[v24 / 32] ^= k << (v24 % 32);
            v25 = k >> (32 - v24 % 32);
            if ( v25 != 0 && v24 % 32 != 0 )
              v6[v24 / 32 + 1] ^= v25;
            ++v28;
            v24 = v28[1];
          }
          while ( v24 != 0 );
          v16 = v26;
        }
      }
      v15 = *a3 % 32;
      v17 = *v16;
    }
  }
  result = 1;
  v22 = a1[1];
  if ( v22 > 0 )
  {
    v23 = *a1 + 4 * v22 - 4 - 4 * v22;
    do
    {
      if ( *(uint32_t *)(v23 + 4 * v22) != 0 )
        break;
      --v22;
    }
    while ( v22 != 0 );
    result = 1;
    a1[1] = v22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_sqr_arr  (binary VA: 0x1a39a00)
// Original: BN_GF2m_mod_sqr_arr
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_sqr_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  bool v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v15;
  int v16;

  BN_CTX_start((int)(uintptr_t)(a4));
  v4 = false;
  v5 = (uint32_t *)(BN_CTX_get(a4));
  if ( v5 != nullptr )
  {
    v6 = a2[1];
    if ( 2 * v6 > v5[2] )
    {
      if ( bn_expand2((int)(uintptr_t)(v5), 2 * v6) == 0 )
      {
LABEL_13:
        BN_CTX_end(a4);
        return v4;
      }
      v6 = a2[1];
    }
    v7 = v6 - 1;
    v16 = v6 - 1;
    if ( v6 - 1 >= 0 )
    {
      v8 = 8 * v7 + 4;
      v15 = 4 * v7;
      do
      {
        --v16;
        v9 = *(uint32_t *)(*a2 + v15);
        v10 = v15;
        v15 -= 4;
        *(uint32_t *)(*v5 + v8) = (dword_1D335A0[(v9 >> 20) & 0xF] << 8)
                              | (dword_1D335A0[HIBYTE(v9) & 0xF] << 16)
                              | dword_1D335A0[HIWORD(v9) & 0xF]
                              | (dword_1D335A0[v9 >> 28] << 24);
        v11 = *(uint32_t *)(*a2 + v10);
        *(uint32_t *)(*v5 + v8 - 4) = (dword_1D335A0[(uint8_t)v11 >> 4] << 8)
                                  | dword_1D335A0[v11 & 0xF]
                                  | (dword_1D335A0[(v11 >> 8) & 0xF] << 16)
                                  | (dword_1D335A0[(uint16_t)v11 >> 12] << 24);
        v8 -= 8;
      }
      while ( v16 != -1 );
      v6 = a2[1];
    }
    v12 = 2 * v6;
    v5[1] = v12;
    if ( v12 > 0 )
    {
      v13 = *v5 + 4 * v12 - 4 - 4 * v12;
      do
      {
        if ( *(uint32_t *)(v13 + 4 * v12) != 0 )
          break;
        --v12;
      }
      while ( v12 != 0 );
      v5[1] = v12;
    }
    v4 = BN_GF2m_mod_arr(a1, v5, a3) != 0;
    goto LABEL_13;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_mul_arr  (binary VA: 0x1a39bb0)
// Original: BN_GF2m_mod_mul_arr
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_mul_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  bool v5;
  uint8_t *v6;
  uint32_t *v7;
  int v8;
  int i;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  typedef int _g4_t_j;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_j)) > _g4_s0 ? (4u + sizeof(_g4_t_j)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v26)) > _g4_s6 ? (40u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v27)) > _g4_s7 ? (44u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v28)) > _g4_s8 ? (48u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v29)) > _g4_s9 ? (52u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v30)) > _g4_s10 ? (56u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v31)) > _g4_s11 ? (60u + sizeof(_g4_t_v31)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);

  if ( a2 == a3 )
    return BN_GF2m_mod_sqr_arr(a1, a2, a4, a5);
  v5 = false;
  BN_CTX_start((int)(uintptr_t)(a5));
  v6 = BN_CTX_get(a5);
  v7 = (uint32_t *)(v6);
  if ( v6 != nullptr )
  {
    v8 = a3[1] + a2[1] + 4;
    if ( v8 <= *((uint32_t *)v6 + 2) || bn_expand2((int)(uintptr_t)(v6), a3[1] + a2[1] + 4) != 0 )
    {
      v7[1] = v8;
      if ( v8 > 0 )
      {
        for ( i = 0; i < v8; ++i )
          *(uint32_t *)(*v7 + 4 * i) = 0;
      }
      v10 = a3[1];
      if ( v10 > 0 )
      {
        v22 = 0;
        v25 = 0;
        v11 = a2[1];
        do
        {
          v23 = 0;
          v24 = *(uint32_t *)(*a3 + v22);
          if ( v10 != v25 + 1 )
            v23 = *(uint32_t *)(*a3 + v22 + 4);
          if ( v11 > 0 )
          {
            v12 = 0;
            for ( j = 0; j < v11; j += 2 )
            {
              v13 = 0;
              v21 = *(uint32_t *)(*a2 + v12);
              if ( v11 != j + 1 )
                v13 = *(uint32_t *)(*a2 + v12 + 4);
              sub_1A39440(v31, &v30, v13, v23);
              sub_1A39440(&v29, &v28, v21, v24);
              sub_1A39440(&v26, &v27, v21 ^ v13, v24 ^ v23);
              v30 ^= v31[0] ^ v26 ^ v29;
              v29 = v30 ^ v27 ^ v28 ^ v31[0] ^ v26;
              v14 = 4;
              *(uint32_t *)(*v7 + v22 + v12) ^= v28;
              do
              {
                v15 = (uint32_t *)(*v7 + v14 + v22 + v12);
                v16 = *(int *)((char *)&v28 + v14);
                v14 += 4;
                *v15 ^= v16;
              }
              while ( v14 != 16 );
              v12 += 8;
              v11 = a2[1];
            }
            v10 = a3[1];
          }
          v25 += 2;
          v22 += 8;
        }
        while ( v10 > v25 );
      }
      v17 = v7[1];
      if ( v17 > 0 )
      {
        v18 = *v7 + 4 * v17 - 4 - 4 * v17;
        do
        {
          if ( *(uint32_t *)(v18 + 4 * v17) != 0 )
            break;
          --v17;
        }
        while ( v17 != 0 );
        v7[1] = v17;
      }
      v5 = BN_GF2m_mod_arr(a1, v7, a4) != 0;
    }
  }
  BN_CTX_end(a5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_exp_arr  (binary VA: 0x1a39e40)
// Original: BN_GF2m_mod_exp_arr
// ----------------------------------------------------------------------------
int BN_GF2m_mod_exp_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  int *v5;
  int v6;
  bool v7;
  uint8_t *v8;
  uint32_t *v9;
  int v11;

  v5 = a5;
  v6 = a3[1];
  if ( v6 == 0 )
    return BN_set_word(a1, 1);
  if ( v6 == 1 && *(uint32_t *)*a3 == 1 )
    return BN_copy(a1, a2) != nullptr;
  v7 = false;
  BN_CTX_start((int)(uintptr_t)(a5));
  v8 = BN_CTX_get(a5);
  v9 = (uint32_t *)(v8);
  if ( v8 != nullptr && BN_GF2m_mod_arr(v8, a2, a4) != 0 )
  {
    v11 = BN_num_bits(a3) - 2;
    if ( v11 >= 0 )
    {
      do
      {
        if ( !BN_GF2m_mod_sqr_arr(v9, v9, a4, a5)
          || BN_is_bit_set(a3, v11) != 0 && !BN_GF2m_mod_mul_arr(v9, v9, a2, a4, a5) )
        {
          v5 = a5;
          v7 = false;
          goto LABEL_5;
        }
        --v11;
      }
      while ( v11 != -1 );
      v5 = a5;
    }
    v7 = BN_copy(a1, v9) != nullptr;
  }
LABEL_5:
  BN_CTX_end(v5);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_sqrt_arr  (binary VA: 0x1a39fc0)
// Original: BN_GF2m_mod_sqrt_arr
// ----------------------------------------------------------------------------
int BN_GF2m_mod_sqrt_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  uint8_t *v5;
  uint32_t *v7;

  if ( *a3 != 0 )
  {
    v4 = 0;
    BN_CTX_start((int)(uintptr_t)(a4));
    v5 = BN_CTX_get(a4);
    if ( v5 != nullptr )
    {
      v7 = (uint32_t *)(v5);
      if ( BN_set_bit(v5, *a3 - 1) != 0 )
        v4 = BN_GF2m_mod_exp_arr(a1, a2, v7, a3, a4);
    }
    BN_CTX_end(a4);
  }
  else
  {
    v4 = 1;
    BN_set_word(a1, 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_solve_quad_arr  (binary VA: 0x1a3a090)
// Original: BN_GF2m_mod_solve_quad_arr
// ----------------------------------------------------------------------------
int BN_GF2m_mod_solve_quad_arr(uint32_t *a1, uint32_t *a2, int *a3, int *a4)
{
  int *v4;
  uint8_t *v5;
  int v6;
  bool i;
  int v9;
  bool v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint8_t *v14;
  uint8_t *v15;
  void **v16;
  int v17;

  v4 = a4;
  if ( *a3 != 0 )
  {
    BN_CTX_start((int)(uintptr_t)(a4));
    v12 = (uint32_t *)(BN_CTX_get(a4));
    v5 = BN_CTX_get(a4);
    v13 = (uint32_t *)(BN_CTX_get(a4));
    v10 = false;
    if ( v13 != nullptr && BN_GF2m_mod_arr(v12, a2, a3) != 0 )
    {
      if ( v12[1] != 0 )
      {
        if ( (*a3 & 1) != 0 )
        {
          if ( BN_copy(v5, v12) != nullptr )
          {
            if ( *a3 > 2 )
            {
              v6 = 1;
              for ( i = BN_GF2m_mod_sqr_arr(v5, v5, a3, a4); ; i = BN_GF2m_mod_sqr_arr(v5, v5, a3, a4) )
              {
                if ( !i || !BN_GF2m_mod_sqr_arr(v5, v5, a3, a4) || BN_GF2m_add(v5, v5, v12) == 0 )
                {
                  v4 = a4;
                  v10 = false;
                  goto LABEL_15;
                }
                if ( (*a3 - 1) / 2 < ++v6 )
                  break;
              }
              v4 = a4;
            }
LABEL_33:
            v10 = false;
            if ( BN_GF2m_mod_sqr_arr(v13, v5, a3, v4) && BN_GF2m_add(v13, v5, v13) != 0 )
            {
              if ( BN_ucmp(v13, v12) != 0 )
                ERR_put_error(3, 135, 116, (int)(uintptr_t)(&unk_1B15112), 0);
              else
                v10 = BN_copy(a1, v5) != nullptr;
            }
          }
        }
        else
        {
          v16 = (void **)BN_CTX_get(a4);
          v14 = BN_CTX_get(a4);
          v15 = BN_CTX_get(a4);
          v10 = false;
          if ( v15 != nullptr )
          {
            v17 = 0;
            do
            {
              if ( BN_rand(v16, *a3, 0, 0) == 0 )
                goto LABEL_31;
              if ( BN_GF2m_mod_arr(v16, v16, a3) == 0 )
                goto LABEL_31;
              BN_set_word(v5, 0);
              if ( BN_copy(v13, v16) == nullptr )
                goto LABEL_31;
              if ( *a3 > 1 )
              {
                v11 = 1;
                while ( BN_GF2m_mod_sqr_arr(v5, v5, a3, a4)
                     && BN_GF2m_mod_sqr_arr(v14, v13, a3, a4)
                     && BN_GF2m_mod_mul_arr(v15, v14, v12, a3, a4)
                     && BN_GF2m_add(v5, v5, v15) != 0
                     && BN_GF2m_add(v13, v14, v16) != 0 )
                {
                  if ( *a3 <= ++v11 )
                    goto LABEL_37;
                }
LABEL_31:
                v10 = false;
                goto LABEL_15;
              }
LABEL_37:
              ++v17;
              v9 = v13[1];
            }
            while ( v17 <= 49 && v9 == 0 );
            if ( v9 != 0 )
              goto LABEL_33;
            ERR_put_error(3, 135, 113, (int)(uintptr_t)(&unk_1B15112), 0);
            v10 = false;
          }
        }
      }
      else
      {
        BN_set_word(a1, 0);
        v10 = true;
      }
    }
LABEL_15:
    BN_CTX_end(v4);
    return v10;
  }
  BN_set_word(a1, 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_poly2arr  (binary VA: 0x1a3a4f0)
// Original: BN_GF2m_poly2arr
// ----------------------------------------------------------------------------
int BN_GF2m_poly2arr(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;

  result = 0;
  v4 = a1[1];
  if ( v4 != 0 )
  {
    v8 = v4 - 1;
    if ( v4 - 1 >= 0 )
    {
      do
      {
        v5 = *(uint32_t *)(*a1 + 4 * v8);
        if ( v5 != 0 )
        {
          v6 = 0x80000000;
          v7 = 31;
          while ( 1 )
          {
            if ( (v6 & v5) != 0 )
            {
              if ( a3 > result )
                *(uint32_t *)(a2 + 4 * result) = v7 + 32 * v8;
              ++result;
            }
            if ( --v7 == -1 )
              break;
            v6 >>= 1;
            v5 = *(uint32_t *)(*a1 + 4 * v8);
          }
        }
        --v8;
      }
      while ( v8 != -1 );
    }
    if ( a3 > result )
      *(uint32_t *)(a2 + 4 * result++) = -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_solve_quad  (binary VA: 0x1a3a5b0)
// Original: BN_GF2m_mod_solve_quad
// ----------------------------------------------------------------------------
int BN_GF2m_mod_solve_quad(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  int *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = BN_num_bits(a3) + 1;
  v5 = (int *)CRYPTO_malloc(4 * v4, (int)(uintptr_t)(&unk_1B15112), 0);
  result = 0;
  if ( v5 != nullptr )
  {
    v7 = BN_GF2m_poly2arr(a3, (int)(uintptr_t)(v5), v4);
    if ( v7 <= v4 && v7 != 0 )
    {
      v8 = BN_GF2m_mod_solve_quad_arr(a1, a2, v5, a4);
    }
    else
    {
      v9 = v7;
      ERR_put_error(3, 134, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      v8 = v9;
    }
    v10 = v8;
    CRYPTO_free(v5);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_sqrt  (binary VA: 0x1a3a6a0)
// Original: BN_GF2m_mod_sqrt
// ----------------------------------------------------------------------------
int BN_GF2m_mod_sqrt(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  uint8_t *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = BN_num_bits(a3) + 1;
  v5 = CRYPTO_malloc(4 * v4, (int)(uintptr_t)(&unk_1B15112), 0);
  result = 0;
  if ( v5 != nullptr )
  {
    v7 = BN_GF2m_poly2arr(a3, (int)(uintptr_t)(v5), v4);
    if ( v7 <= v4 && v7 != 0 )
    {
      v8 = BN_GF2m_mod_sqrt_arr(a1, a2, v5, a4);
    }
    else
    {
      v9 = v7;
      ERR_put_error(3, 137, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      v8 = v9;
    }
    v10 = v8;
    CRYPTO_free(v5);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_exp  (binary VA: 0x1a3a790)
// Original: BN_GF2m_mod_exp
// ----------------------------------------------------------------------------
int BN_GF2m_mod_exp(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  int v5;
  uint8_t *v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  v5 = BN_num_bits(a4) + 1;
  v6 = CRYPTO_malloc(4 * v5, (int)(uintptr_t)(&unk_1B15112), 0);
  result = 0;
  if ( v6 != nullptr )
  {
    v8 = BN_GF2m_poly2arr(a4, (int)(uintptr_t)(v6), v5);
    if ( v8 <= v5 && v8 != 0 )
    {
      v9 = BN_GF2m_mod_exp_arr(a1, a2, a3, v6, a5);
    }
    else
    {
      v10 = v8;
      ERR_put_error(3, 132, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      v9 = v10;
    }
    v11 = v9;
    CRYPTO_free(v6);
    return v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_sqr  (binary VA: 0x1a3a890)
// Original: BN_GF2m_mod_sqr
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_sqr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  uint8_t *v5;
  bool result;
  int v7;
  bool v8;
  int v9;
  bool v10;

  v4 = BN_num_bits(a3) + 1;
  v5 = CRYPTO_malloc(4 * v4, (int)(uintptr_t)(&unk_1B15112), 0);
  result = false;
  if ( v5 != nullptr )
  {
    v7 = BN_GF2m_poly2arr(a3, (int)(uintptr_t)(v5), v4);
    if ( v7 <= v4 && v7 != 0 )
    {
      v8 = BN_GF2m_mod_sqr_arr(a1, a2, v5, a4);
    }
    else
    {
      v9 = v7;
      ERR_put_error(3, 136, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      v8 = v9;
    }
    v10 = v8;
    CRYPTO_free(v5);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_mul  (binary VA: 0x1a3a980)
// Original: BN_GF2m_mod_mul
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_mul(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  int v5;
  uint8_t *v6;
  bool result;
  int v8;
  bool v9;
  int v10;
  bool v11;

  v5 = BN_num_bits(a4) + 1;
  v6 = CRYPTO_malloc(4 * v5, (int)(uintptr_t)(&unk_1B15112), 0);
  result = false;
  if ( v6 != nullptr )
  {
    v8 = BN_GF2m_poly2arr(a4, (int)(uintptr_t)(v6), v5);
    if ( v8 <= v5 && v8 != 0 )
    {
      v9 = BN_GF2m_mod_mul_arr(a1, a2, a3, v6, a5);
    }
    else
    {
      v10 = v8;
      ERR_put_error(3, 133, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      v9 = v10;
    }
    v11 = v9;
    CRYPTO_free(v6);
    return v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod  (binary VA: 0x1a3aa80)
// Original: BN_GF2m_mod
// ----------------------------------------------------------------------------
int BN_GF2m_mod(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int v3;
  uint8_t *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = BN_num_bits(a3) + 1;
  v4 = CRYPTO_malloc(4 * v3, (int)(uintptr_t)(&unk_1B15112), 0);
  result = 0;
  if ( v4 != nullptr )
  {
    v6 = BN_GF2m_poly2arr(a3, (int)(uintptr_t)(v4), v3);
    if ( v6 <= v3 && v6 != 0 )
    {
      v7 = BN_GF2m_mod_arr(a1, a2, v4);
    }
    else
    {
      v8 = v6;
      ERR_put_error(3, 131, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      v7 = v8;
    }
    v9 = v7;
    CRYPTO_free(v4);
    return v9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_inv  (binary VA: 0x1a3ab70)
// Original: BN_GF2m_mod_inv
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_inv(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int *v4;
  int *v5;
  int *v6;
  int v8;
  int *v9;
  int *v10;
  int *v11;
  int v12;
  int *v13;
  int v14;
  int *v15;
  bool v16;

  v4 = a4;
  BN_CTX_start((int)(uintptr_t)(a4));
  v5 = (int *)BN_CTX_get(a4);
  v15 = (int *)BN_CTX_get(a4);
  v6 = (int *)BN_CTX_get(a4);
  v13 = (int *)BN_CTX_get(a4);
  v16 = false;
  if ( v13 != nullptr && BN_set_word(v5, 1) != 0 && BN_GF2m_mod(v6, a2, a3) != 0 && BN_copy(v13, a3) != nullptr )
  {
    v8 = v6[1];
    if ( v8 != 0 )
    {
      v9 = v13;
      while ( 1 )
      {
        if ( v8 > 0 && ((v12 = *(uint32_t *)*v6) & 1) != 0 )
        {
          if ( v8 == 1 && v12 == 1 )
          {
            v4 = a4;
            v16 = BN_copy(a1, v5) != nullptr;
            break;
          }
          v14 = BN_num_bits(v6);
          if ( v14 < BN_num_bits(v9) )
          {
            v10 = v6;
            v6 = v9;
            v9 = v10;
            v11 = v5;
            v5 = v15;
            v15 = v11;
          }
          if ( BN_GF2m_add(v6, v6, v9) == 0 || BN_GF2m_add(v5, v5, v15) == 0 )
          {
LABEL_21:
            v4 = a4;
            v16 = false;
            break;
          }
        }
        else if ( BN_rshift1(v6, v6) == 0
               || v5[1] > 0 && (*(uint8_t *)*v5 & 1) != 0 && BN_GF2m_add(v5, v5, a3) == 0
               || BN_rshift1(v5, v5) == 0 )
        {
          goto LABEL_21;
        }
        v8 = v6[1];
      }
    }
  }
  BN_CTX_end(v4);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_div  (binary VA: 0x1a3ad30)
// Original: BN_GF2m_mod_div
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_div(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  bool v5;
  uint8_t *v6;

  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = false;
  v6 = BN_CTX_get(a5);
  if ( v6 != nullptr && BN_GF2m_mod_inv(v6, a3, a4, a5) )
    v5 = BN_GF2m_mod_mul(a1, a2, v6, a4, a5);
  BN_CTX_end(a5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_arr2poly  (binary VA: 0x1a3ade0)
// Original: BN_GF2m_arr2poly
// ----------------------------------------------------------------------------
int BN_GF2m_arr2poly(int *a1, uint32_t *a2)
{
  int *v2;
  int result;
  int v4;

  v2 = a1;
  BN_set_word(a2, 0);
  result = 1;
  v4 = *a1;
  if ( *a1 != -1 )
  {
    do
    {
      if ( BN_set_bit(a2, v4) == 0 )
        return 0;
      v4 = *++v2;
    }
    while ( *v2 != -1 );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_div_arr  (binary VA: 0x1a3ae50)
// Original: BN_GF2m_mod_div_arr
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_div_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4, int *a5)
{
  bool v5;
  uint8_t *v6;
  uint32_t *v7;

  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = false;
  v6 = BN_CTX_get(a5);
  v7 = (uint32_t *)(v6);
  if ( v6 != nullptr && BN_GF2m_arr2poly(a4, v6) != 0 )
    v5 = BN_GF2m_mod_div(a1, a2, a3, v7, a5);
  BN_CTX_end(a5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_GF2m_mod_inv_arr  (binary VA: 0x1a3aef0)
// Original: BN_GF2m_mod_inv_arr
// ----------------------------------------------------------------------------
bool BN_GF2m_mod_inv_arr(uint32_t *a1, uint32_t *a2, int *a3, int *a4)
{
  bool v4;
  uint8_t *v5;
  uint32_t *v6;

  BN_CTX_start((int)(uintptr_t)(a4));
  v4 = false;
  v5 = BN_CTX_get(a4);
  v6 = (uint32_t *)(v5);
  if ( v5 != nullptr && BN_GF2m_arr2poly(a3, v5) != 0 )
    v4 = BN_GF2m_mod_inv(a1, a2, v6, a4);
  BN_CTX_end(a4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_GENCB_call  (binary VA: 0x1a3b060)
// Original: BN_GENCB_call
// ----------------------------------------------------------------------------
int BN_GENCB_call(uint32_t *a1, int a2, int a3)
{
  int result;
  void (*v4)(int, int, uint32_t);

  result = 1;
  if ( a1 != nullptr )
  {
    if ( *a1 == 1 )
    {
      v4 = (void (*)(int, int, uint32_t))a1[2];
      if ( v4 != nullptr )
      {
        v4(a2, a3, a1[1]);
        return 1;
      }
    }
    else
    {
      result = 0;
      if ( *a1 == 2 )
        return ((int (*)(int, int, uint32_t *))a1[2])(a2, a3, a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_is_prime_fasttest_ex  (binary VA: 0x1a3b0f0)
// Original: BN_is_prime_fasttest_ex
// ----------------------------------------------------------------------------
int BN_is_prime_fasttest_ex(int *a1, int a2, int *a3, int a4, uint32_t *a5)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int *v11;
  int *v12;
  unsigned int *v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int *v18;
  int *v19;
  char *v20;
  int *v21;
  int *v22;
  unsigned int **v23;
  int v24;
  int *v25;

  v5 = 0;
  v6 = a2;
  v7 = (uint32_t *)(BN_value_one());
  if ( BN_cmp(a1, v7) <= 0 )
    return v5;
  if ( a2 == 0 )
  {
    LOWORD(v6) = 2;
    if ( BN_num_bits(a1) <= 1299 )
    {
      LOWORD(v6) = 3;
      if ( BN_num_bits(a1) <= 849 )
      {
        LOWORD(v6) = 4;
        if ( BN_num_bits(a1) <= 649 )
        {
          LOWORD(v6) = 5;
          if ( BN_num_bits(a1) <= 549 )
          {
            LOWORD(v6) = 6;
            if ( BN_num_bits(a1) <= 449 )
            {
              LOWORD(v6) = 7;
              if ( BN_num_bits(a1) <= 399 )
              {
                LOWORD(v6) = 8;
                if ( BN_num_bits(a1) <= 349 )
                {
                  LOWORD(v6) = 9;
                  if ( BN_num_bits(a1) <= 299 )
                  {
                    LOWORD(v6) = 12;
                    if ( BN_num_bits(a1) <= 249 )
                    {
                      LOWORD(v6) = 15;
                      if ( BN_num_bits(a1) <= 199 )
                        v6 = 9 * (BN_num_bits(a1) < 150) + 18;
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
  v5 = 0;
  v8 = a1[1];
  if ( v8 <= 0 )
    return v5;
  v9 = *(uint32_t *)*a1;
  if ( (v9 & 1) == 0 )
  {
    if ( v8 == 1 && v9 == 2 )
      return a1[3] == 0;
    return v5;
  }
  if ( a4 == 0 )
    goto LABEL_72;
  v16 = (int *)word_1D335E2;
  do
  {
    if ( BN_mod_word(a1, *(uint16_t *)v16) == 0 )
      return 0;
    v16 = (int *)((char *)v16 + 2);
  }
  while ( v16 != (int *)(uintptr_t)(&dword_1D345E0) );
  if ( BN_GENCB_call(a5, 1, -1) != 0 )
  {
LABEL_72:
    v11 = a3;
    if ( a3 != nullptr || (v11 = (int *)(BN_CTX_new())) != nullptr )
    {
      BN_CTX_start((int)(uintptr_t)(v11));
      v19 = a1;
      if ( a1[3] != 0 )
      {
        v5 = -1;
        v12 = (int *)BN_CTX_get(v11);
        v20 = nullptr;
        if ( v12 == nullptr )
          goto LABEL_39;
        v18 = v12;
        BN_copy(v12, a1);
        v19 = v18;
        v18[3] = 0;
      }
      v5 = -1;
      v21 = (int *)BN_CTX_get(v11);
      v23 = (unsigned int **)BN_CTX_get(v11);
      v22 = (int *)BN_CTX_get(v11);
      v20 = nullptr;
      if ( v22 != nullptr && BN_copy(v21, v19) != nullptr && BN_sub_word((unsigned int **)v21, 1u) != 0 )
      {
        v5 = 0;
        if ( v21[1] != 0 )
        {
          LOWORD(v5) = 1;
          while ( BN_is_bit_set(v21, v5) == 0 )
            ++v5;
          v24 = v5;
          v17 = v5;
          v5 = -1;
          v20 = nullptr;
          if ( BN_rshift(v23, (unsigned int **)v21, v17) != 0 )
          {
            v13 = (unsigned int *)BN_MONT_CTX_new();
            v20 = (char *)v13;
            if ( v13 != nullptr && BN_MONT_CTX_set(v13, (int **)v19, v11) )
            {
              if ( v6 <= 0 )
              {
                v5 = 1;
              }
              else
              {
                v25 = v11;
                v14 = 0;
                while ( 1 )
                {
                  if ( BN_pseudo_rand_range(v22, v21) == 0
                    || BN_add_word((unsigned int **)v22, 1u) == 0
                    || BN_mod_exp_mont(v22, v22, (int)(uintptr_t)(v23), v19, v25, v20) == 0 )
                  {
LABEL_64:
                    v11 = v25;
                    v5 = -1;
                    goto LABEL_39;
                  }
                  if ( (v22[1] != 1 || *(uint32_t *)*v22 != 1 || v22[3] != 0) && BN_cmp(v22, v21) != 0 )
                    break;
LABEL_36:
                  if ( BN_GENCB_call(a5, 1, v14) == 0 )
                    goto LABEL_64;
                  if ( ++v14 == v6 )
                  {
                    v11 = v25;
                    v5 = 1;
                    goto LABEL_39;
                  }
                }
                v15 = v24;
                while ( --v15 != 0 )
                {
                  if ( !BN_mod_mul(v22, (int)(uintptr_t)(v22), (int)(uintptr_t)(v22), (unsigned int)(uintptr_t)(v19), v25) )
                    goto LABEL_64;
                  if ( v22[1] == 1 && *(uint32_t *)*v22 == 1 && v22[3] == 0 )
                    break;
                  if ( BN_cmp(v22, v21) == 0 )
                    goto LABEL_36;
                }
                v11 = v25;
                v5 = 0;
              }
            }
          }
        }
      }
LABEL_39:
      BN_CTX_end(v11);
      if ( a3 == nullptr )
        BN_CTX_free((void **)v11);
      if ( v20 == nullptr )
        return v5;
      BN_MONT_CTX_free((void **)v20);
      return v5;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: BN_is_prime_ex  (binary VA: 0x1a3b680)
// Original: BN_is_prime_ex
// ----------------------------------------------------------------------------
int BN_is_prime_ex(int *a1, int a2, int *a3, uint32_t *a4)
{
  return BN_is_prime_fasttest_ex(a1, a2, a3, 0, a4);
}

// ----------------------------------------------------------------------------
// Function: BN_generate_prime_ex  (binary VA: 0x1a3b6d0)
// Original: BN_generate_prime_ex
// ----------------------------------------------------------------------------
int BN_generate_prime_ex(unsigned int **a1, int a2, int a3, int *a4, int *a5, uint32_t *a6)
{
  int *v7;
  int v8;
  int *v9;
  int *v10;
  int *v12;
  int v13;
  int *v14;
  int i;
  int v16;
  int v17;
  int *v18;
  int v19;
  int *v20;
  unsigned int v21;
  int is_prime_fasttest;
  int v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int *v28;
  int *v29;
  int v30;
  int v31;
  int *v32;
  void **v33;
  uint32_t *v34;
  int v35;
  int *v36;
  int v37;
  int v38;
  int v39;

  v31 = 2;
  if ( a2 <= 1299 )
  {
    v31 = 3;
    if ( a2 <= 849 )
    {
      v31 = 4;
      if ( a2 <= 649 )
      {
        v31 = 5;
        if ( a2 <= 549 )
        {
          v31 = 6;
          if ( a2 <= 449 )
          {
            v31 = 7;
            if ( a2 <= 399 )
            {
              v31 = 8;
              if ( a2 <= 349 )
              {
                v31 = 9;
                if ( a2 <= 299 )
                {
                  v31 = 12;
                  if ( a2 <= 249 )
                  {
                    v31 = 15;
                    if ( a2 <= 199 )
                      v31 = 9 * (a2 < 150) + 18;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = (int *)(BN_CTX_new());
  v8 = 0;
  v9 = v7;
  if ( v7 == nullptr )
    return v8;
  BN_CTX_start((int)(uintptr_t)(v7));
  v32 = (int *)BN_CTX_get(v9);
  if ( v32 == nullptr )
  {
LABEL_10:
    BN_CTX_end(v9);
    BN_CTX_free((void **)v9);
    return v8;
  }
  while ( 1 )
  {
    if ( a4 == nullptr )
    {
      if ( !sub_1A3AF80(a1, a2) )
        goto LABEL_60;
      goto LABEL_46;
    }
    if ( a3 == 0 )
    {
      BN_CTX_start((int)(uintptr_t)(v9));
      v12 = (int *)BN_CTX_get(v9);
      if ( v12 != nullptr )
      {
        v28 = v12;
        if ( BN_rand((void **)a1, a2, 0, 1) != 0
          && BN_div(nullptr, v28, __SPAIR64__((unsigned int)(uintptr_t)(a4), (unsigned int)(uintptr_t)(a1)), v9) != 0 )
        {
          LOBYTE(v13) = BN_sub((int)(uintptr_t)(a1), (int *)a1, v28);
          if ( v13 != 0 )
          {
            if ( a5 != nullptr )
            {
              if ( BN_add((int)(uintptr_t)(a1), (int *)a1, a5) != 0 )
                goto LABEL_18;
            }
            else if ( BN_add_word(a1, 1u) != 0 )
            {
LABEL_18:
              v34 = a6;
              v14 = v9;
              for ( i = 1; ; i = 1 )
              {
                while ( (unsigned int)BN_mod_word(a1, (uint16_t)word_1D335E0[i]) > 1 )
                {
                  if ( ++i > 2047 )
                  {
                    v9 = v14;
                    a6 = v34;
                    BN_CTX_end(v9);
                    goto LABEL_46;
                  }
                }
                if ( BN_add((int)(uintptr_t)(a1), (int *)a1, a4) == 0 )
                  break;
              }
LABEL_67:
              v9 = v14;
            }
          }
        }
      }
LABEL_9:
      v8 = 0;
      BN_CTX_end(v9);
      goto LABEL_10;
    }
    BN_CTX_start((int)(uintptr_t)(v9));
    v36 = (int *)BN_CTX_get(v9);
    v33 = (void **)BN_CTX_get(v9);
    v10 = (int *)BN_CTX_get(v9);
    if ( v10 == nullptr )
      goto LABEL_9;
    v27 = v10;
    if ( BN_rshift1(v10, a4) == 0 )
      goto LABEL_9;
    if ( BN_rand(v33, a2 - 1, 0, 1) == 0 )
      goto LABEL_9;
    if ( BN_div(nullptr, v36, __SPAIR64__((unsigned int)(uintptr_t)(v27), (unsigned int)(uintptr_t)(v33)), v9) == 0 )
      goto LABEL_9;
    LOBYTE(v16) = BN_sub((int)(uintptr_t)(v33), (int *)v33, v36);
    if ( v16 == 0 )
      goto LABEL_9;
    if ( a5 != nullptr )
    {
      if ( BN_rshift1(v36, a5) == 0 )
        goto LABEL_9;
      v17 = BN_add((int)(uintptr_t)(v33), (int *)v33, v36);
      v18 = v27;
      if ( v17 == 0 )
        goto LABEL_9;
    }
    else
    {
      v26 = BN_add_word((unsigned int **)v33, 1u);
      v18 = v27;
      if ( v26 == 0 )
        goto LABEL_9;
    }
    v29 = v18;
    if ( BN_lshift1((int **)a1, (int **)v33) == 0 || BN_add_word(a1, 1u) == 0 )
      goto LABEL_9;
    v39 = (int)(uintptr_t)(a6);
    v19 = 1;
    v14 = v9;
    v37 = v8;
    v20 = v29;
    do
    {
      while ( 1 )
      {
        v21 = (uint16_t)word_1D335E0[v19];
        v30 = v19;
        if ( BN_mod_word(a1, v21) != 0 && BN_mod_word(v33, v21) != 0 )
          break;
        if ( BN_add((int)(uintptr_t)(a1), (int *)a1, a4) == 0 || BN_add((int)(uintptr_t)(v33), (int *)v33, v20) == 0 )
          goto LABEL_67;
        v19 = 1;
      }
      v19 = v30 + 1;
    }
    while ( v30 + 1 <= 2047 );
    v9 = v14;
    v8 = v37;
    a6 = (uint32_t *)v39;
    BN_CTX_end(v9);
LABEL_46:
    v38 = v8 + 1;
    if ( BN_GENCB_call(a6, 0, v8) == 0 )
      goto LABEL_60;
    if ( a3 != 0 )
      break;
    is_prime_fasttest = BN_is_prime_fasttest_ex((int *)a1, v31, v9, 0, a6);
    if ( is_prime_fasttest == -1 )
      goto LABEL_60;
    if ( is_prime_fasttest != 0 )
    {
LABEL_59:
      v8 = 1;
      BN_CTX_end(v9);
      BN_CTX_free((void **)v9);
      return v8;
    }
LABEL_50:
    v8 = v38;
  }
  if ( BN_rshift1(v32, (int *)a1) != 0 )
  {
    v35 = v8;
    v23 = 0;
    while ( 1 )
    {
      v24 = BN_is_prime_fasttest_ex((int *)a1, 1, v9, 0, a6);
      if ( v24 == -1 )
        break;
      if ( v24 == 0 )
        goto LABEL_50;
      v25 = BN_is_prime_fasttest_ex(v32, 1, v9, 0, a6);
      if ( v25 == -1 )
        break;
      if ( v25 == 0 )
        goto LABEL_50;
      if ( BN_GENCB_call(a6, 2, v35) == 0 )
        break;
      if ( v31 <= ++v23 )
        goto LABEL_59;
    }
  }
LABEL_60:
  v8 = 0;
  BN_CTX_end(v9);
  BN_CTX_free((void **)v9);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_get_attr_count  (binary VA: 0x1a3d920)
// Original: CMS_signed_get_attr_count
// ----------------------------------------------------------------------------
int CMS_signed_get_attr_count(int a1)
{
  return X509at_get_attr_count(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_get_attr_by_NID  (binary VA: 0x1a3d950)
// Original: CMS_signed_get_attr_by_NID
// ----------------------------------------------------------------------------
int CMS_signed_get_attr_by_NID(int a1, unsigned int a2, int a3)
{
  return X509at_get_attr_by_NID(*(int **)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_get_attr_by_OBJ  (binary VA: 0x1a3d990)
// Original: CMS_signed_get_attr_by_OBJ
// ----------------------------------------------------------------------------
int CMS_signed_get_attr_by_OBJ(int a1, int a2, int a3)
{
  return X509at_get_attr_by_OBJ(*(int **)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_get_attr  (binary VA: 0x1a3d9d0)
// Original: CMS_signed_get_attr
// ----------------------------------------------------------------------------
int CMS_signed_get_attr(int a1, int a2)
{
  return X509at_get_attr(*(int **)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_delete_attr  (binary VA: 0x1a3da00)
// Original: CMS_signed_delete_attr
// ----------------------------------------------------------------------------
int CMS_signed_delete_attr(int a1, int a2)
{
  return X509at_delete_attr(*(int **)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_add1_attr  (binary VA: 0x1a3da30)
// Original: CMS_signed_add1_attr
// ----------------------------------------------------------------------------
bool CMS_signed_add1_attr(int a1, int a2)
{
  return X509at_add1_attr((int **)(a1 + 12), a2) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_add1_attr_by_OBJ  (binary VA: 0x1a3da70)
// Original: CMS_signed_add1_attr_by_OBJ
// ----------------------------------------------------------------------------
bool CMS_signed_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_OBJ((int **)(a1 + 12), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_add1_attr_by_NID  (binary VA: 0x1a3dac0)
// Original: CMS_signed_add1_attr_by_NID
// ----------------------------------------------------------------------------
bool CMS_signed_add1_attr_by_NID(int a1, unsigned int a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_NID((int **)(a1 + 12), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_add1_attr_by_txt  (binary VA: 0x1a3db10)
// Original: CMS_signed_add1_attr_by_txt
// ----------------------------------------------------------------------------
bool CMS_signed_add1_attr_by_txt(int a1, char *a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_txt((int **)(a1 + 12), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_signed_get0_data_by_OBJ  (binary VA: 0x1a3db60)
// Original: CMS_signed_get0_data_by_OBJ
// ----------------------------------------------------------------------------
int CMS_signed_get0_data_by_OBJ(int a1, int a2, int a3, int a4)
{
  return X509at_get0_data_by_OBJ(*(int **)(a1 + 12), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_get_attr_count  (binary VA: 0x1a3dba0)
// Original: CMS_unsigned_get_attr_count
// ----------------------------------------------------------------------------
int CMS_unsigned_get_attr_count(int a1)
{
  return X509at_get_attr_count(*(uint32_t *)(a1 + 24));
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_get_attr_by_NID  (binary VA: 0x1a3dbd0)
// Original: CMS_unsigned_get_attr_by_NID
// ----------------------------------------------------------------------------
int CMS_unsigned_get_attr_by_NID(int a1, unsigned int a2, int a3)
{
  return X509at_get_attr_by_NID(*(int **)(a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_get_attr_by_OBJ  (binary VA: 0x1a3dc10)
// Original: CMS_unsigned_get_attr_by_OBJ
// ----------------------------------------------------------------------------
int CMS_unsigned_get_attr_by_OBJ(int a1, int a2, int a3)
{
  return X509at_get_attr_by_OBJ(*(int **)(a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_get_attr  (binary VA: 0x1a3dc50)
// Original: CMS_unsigned_get_attr
// ----------------------------------------------------------------------------
int CMS_unsigned_get_attr(int a1, int a2)
{
  return X509at_get_attr(*(int **)(a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_delete_attr  (binary VA: 0x1a3dc80)
// Original: CMS_unsigned_delete_attr
// ----------------------------------------------------------------------------
int CMS_unsigned_delete_attr(int a1, int a2)
{
  return X509at_delete_attr(*(int **)(a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_add1_attr  (binary VA: 0x1a3dcb0)
// Original: CMS_unsigned_add1_attr
// ----------------------------------------------------------------------------
bool CMS_unsigned_add1_attr(int a1, int a2)
{
  return X509at_add1_attr((int **)(a1 + 24), a2) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_add1_attr_by_OBJ  (binary VA: 0x1a3dcf0)
// Original: CMS_unsigned_add1_attr_by_OBJ
// ----------------------------------------------------------------------------
bool CMS_unsigned_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_OBJ((int **)(a1 + 24), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_add1_attr_by_NID  (binary VA: 0x1a3dd40)
// Original: CMS_unsigned_add1_attr_by_NID
// ----------------------------------------------------------------------------
bool CMS_unsigned_add1_attr_by_NID(int a1, unsigned int a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_NID((int **)(a1 + 24), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_add1_attr_by_txt  (binary VA: 0x1a3dd90)
// Original: CMS_unsigned_add1_attr_by_txt
// ----------------------------------------------------------------------------
bool CMS_unsigned_add1_attr_by_txt(int a1, char *a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_txt((int **)(a1 + 24), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: CMS_unsigned_get0_data_by_OBJ  (binary VA: 0x1a3dde0)
// Original: CMS_unsigned_get0_data_by_OBJ
// ----------------------------------------------------------------------------
int CMS_unsigned_get0_data_by_OBJ(int a1, int a2, int a3, int a4)
{
  return X509at_get0_data_by_OBJ(*(int **)(a1 + 24), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: CMS_EncryptedData_set1_key  (binary VA: 0x1a3e820)
// Original: CMS_EncryptedData_set1_key
// ----------------------------------------------------------------------------
int CMS_EncryptedData_set1_key(int *a1, char **a2, const void *a3, char **a4)
{
  int v4;

  if ( a4 == nullptr || a3 == nullptr )
  {
    ERR_put_error(46, 123, 130, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a2 != nullptr )
  {
    v4 = ASN1_item_new((int)(uintptr_t)(&CMS_EncryptedData_it));
    a1[1] = v4;
    if ( v4 == 0 )
    {
      ERR_put_error(46, 123, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    *a1 = (int)(uintptr_t)(OBJ_nid2obj(0x1Au));
    *(uint32_t *)a1[1] = 0;
  }
  else if ( OBJ_obj2nid(*a1) != 26 )
  {
    ERR_put_error(46, 123, 122, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return cms_EncryptedContent_init(*(char ****)(a1[1] + 4), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: CMS_stream  (binary VA: 0x1a3e9c0)
// Original: CMS_stream
// ----------------------------------------------------------------------------
int CMS_stream(uint32_t *a1, int *a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = 0;
  v3 = (int *)CMS_get0_content(a2);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = *v3;
    if ( v5 != 0 || (v5 = ASN1_OCTET_STRING_new(), *v4 = v5, v5 != 0) )
    {
      *(uint32_t *)(v5 + 12) |= 0x10u;
      v2 = 1;
      *(uint32_t *)(*v4 + 12) &= ~0x20u;
      *a1 = *v4 + 8;
    }
    else
    {
      ERR_put_error(46, 155, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: d2i_CMS_bio  (binary VA: 0x1a3ea70)
// Original: d2i_CMS_bio
// ----------------------------------------------------------------------------
int d2i_CMS_bio(uint32_t *a1, int *a2)
{
  return ASN1_item_d2i_bio((int)CMS_ContentInfo_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_CMS_bio  (binary VA: 0x1a3eab0)
// Original: i2d_CMS_bio
// ----------------------------------------------------------------------------
int i2d_CMS_bio(uint32_t *a1, int a2)
{
  return ASN1_item_i2d_bio((int)CMS_ContentInfo_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_CMS  (binary VA: 0x1a3eaf0)
// Original: PEM_read_bio_CMS
// ----------------------------------------------------------------------------
int PEM_read_bio_CMS(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  return PEM_ASN1_read_bio(
           (int (*)(int, void **, int))d2i_CMS_ContentInfo,
           (char *)&off_1B8A460,
           a1,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_CMS  (binary VA: 0x1a3eb40)
// Original: PEM_read_CMS
// ----------------------------------------------------------------------------
int PEM_read_CMS(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)(d2i_CMS_ContentInfo), (char *)&off_1B8A460, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_CMS  (binary VA: 0x1a3eb90)
// Original: PEM_write_bio_CMS
// ----------------------------------------------------------------------------
bool PEM_write_bio_CMS(uint32_t *a1, int a2)
{
  return PEM_ASN1_write_bio(
           (int (*)(int, char **))i2d_CMS_ContentInfo,
           (char *)&off_1B8A460,
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_CMS  (binary VA: 0x1a3ec00)
// Original: PEM_write_CMS
// ----------------------------------------------------------------------------
bool PEM_write_CMS(int a1, int a2)
{
  return PEM_ASN1_write(
           (int (*)(int, char **))i2d_CMS_ContentInfo,
           (char *)&off_1B8A460,
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: BIO_new_CMS  (binary VA: 0x1a3ec70)
// Original: BIO_new_CMS
// ----------------------------------------------------------------------------
int BIO_new_CMS(int a1, int a2)
{
  return BIO_new_NDEF(a1, a2, CMS_ContentInfo_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_CMS_bio_stream  (binary VA: 0x1a3ecb0)
// Original: i2d_CMS_bio_stream
// ----------------------------------------------------------------------------
int i2d_CMS_bio_stream(int a1, int a2, int a3, int a4)
{
  return i2d_ASN1_bio_stream(a1, a2, a3, a4, CMS_ContentInfo_it);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_CMS_stream  (binary VA: 0x1a3ed00)
// Original: PEM_write_bio_CMS_stream
// ----------------------------------------------------------------------------
int PEM_write_bio_CMS_stream(int a1, int a2, int a3, int a4)
{
  return PEM_write_bio_ASN1_stream(a1, a2, a3, a4, &off_1B8A460, CMS_ContentInfo_it);
}

// ----------------------------------------------------------------------------
// Function: DH_generate_parameters_ex  (binary VA: 0x1a406f0)
// Original: DH_generate_parameters_ex
// ----------------------------------------------------------------------------
int DH_generate_parameters_ex(int a1, int a2, int a3, uint32_t *a4)
{
  int (*v4)(int, int, int, uint32_t *);
  int *v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int *v16;
  int *v17;
  int *v18;
  int v19;
  int *v20;
  int *v21;

  v4 = *(int (**)(int, int, int, uint32_t *))(*(uint32_t *)(a1 + 68) + 32);
  if ( v4 != nullptr )
    return v4(a1, a2, a3, a4);
  v6 = (int *)(BN_CTX_new());
  v20 = v6;
  if ( v6 == nullptr )
  {
    ERR_put_error(5, 106, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  BN_CTX_start((int)(uintptr_t)(v6));
  v21 = (int *)BN_CTX_get(v20);
  v7 = (int *)BN_CTX_get(v20);
  if ( v7 == nullptr )
    goto LABEL_20;
  if ( v21 == nullptr )
    goto LABEL_20;
  if ( *(uint32_t *)(a1 + 8) == 0 )
  {
    v17 = v7;
    v13 = BN_new();
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v13);
    v7 = v17;
    if ( v13 == nullptr )
      goto LABEL_20;
  }
  if ( *(uint32_t *)(a1 + 12) == 0 )
  {
    v18 = v7;
    v14 = BN_new();
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v14);
    v7 = v18;
    if ( v14 == nullptr )
      goto LABEL_20;
  }
  if ( a3 <= 1 )
  {
    ERR_put_error(5, 106, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_20;
  }
  if ( a3 == 2 )
  {
    v16 = v7;
    v12 = BN_set_word(v21, 24);
    v9 = v16;
    if ( v12 != 0 )
    {
      v15 = 11;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
  if ( a3 == 5 )
  {
    v16 = v7;
    v11 = BN_set_word(v21, 10);
    v9 = v16;
    if ( v11 != 0 )
    {
      v15 = 3;
      goto LABEL_13;
    }
LABEL_20:
    ERR_put_error(5, 106, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    v10 = 0;
    goto LABEL_21;
  }
  v16 = v7;
  v8 = BN_set_word(v21, 2);
  v9 = v16;
  if ( v8 == 0 )
    goto LABEL_20;
  v15 = 1;
LABEL_13:
  if ( BN_set_word(v9, v15) == 0
    || BN_generate_prime_ex(*(unsigned int ***)(a1 + 8), a2, 1, v21, v16, a4) == 0
    || BN_GENCB_call(a4, 3, 0) == 0
    || BN_set_word(*(uint32_t **)(a1 + 12), a3) == 0 )
  {
    goto LABEL_20;
  }
  v10 = 1;
LABEL_21:
  v19 = v10;
  BN_CTX_end(v20);
  BN_CTX_free((void **)v20);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: DSA_generate_parameters_ex  (binary VA: 0x1a41380)
// Original: DSA_generate_parameters_ex
// ----------------------------------------------------------------------------
int DSA_generate_parameters_ex(int a1, int a2, void *a3, size_t a4, int *a5, int *a6, uint32_t *a7)
{
  int (*v7)(int, int, void *, size_t, int *, int *, uint32_t *);
  uint32_t *v9;
  uint32_t *v10;

  v7 = *(int (**)(int, int, void *, size_t, int *, int *, uint32_t *))(*(uint32_t *)(a1 + 60) + 40);
  if ( v7 != nullptr )
    return v7(a1, a2, a3, a4, a5, a6, a7);
  if ( a2 <= 2047 )
  {
    v10 = (uint32_t *)(EVP_sha1());
    return dsa_builtin_paramgen((void ***)a1, a2, 0xA0u, v10, a3, a4, a5, a6, a7);
  }
  else
  {
    v9 = (uint32_t *)(EVP_sha256());
    return dsa_builtin_paramgen((void ***)a1, a2, 0x100u, v9, a3, a4, a5, a6, a7);
  }
}

// ----------------------------------------------------------------------------
// Function: DSA_generate_key  (binary VA: 0x1a41470)
// Original: DSA_generate_key
// ----------------------------------------------------------------------------
char DSA_generate_key(int a1)
{
  int (*v1)(int);
  char result;
  int *v3;
  int *v4;
  uint32_t *v5;
  int *v6;
  int v7;
  void **v8;
  int v9;
  typedef void **_g4_t_v10;
  typedef char _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef g4_int128_t _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v11)) > _g4_s1 ? (0u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v12)) > _g4_s2 ? (0u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v13)) > _g4_s3 ? (0u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v14)) > _g4_s4 ? (0u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v15)) > _g4_s5 ? (16u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v1 = *(int (**)(int))(*(uint32_t *)(a1 + 60) + 44);
  if ( v1 != nullptr )
    return v1(a1);
  v3 = (int *)(BN_CTX_new());
  if ( v3 == nullptr )
  {
    v4 = nullptr;
LABEL_21:
    result = 0;
    goto LABEL_15;
  }
  v4 = *(int **)(a1 + 28);
  if ( v4 != nullptr || (v4 = (int *)(BN_new())) != nullptr )
  {
    while ( BN_rand_range(v4, *(int **)(a1 + 16)) != 0 )
    {
      if ( v4[1] != 0 )
      {
        v5 = *(uint32_t **)(a1 + 24);
        if ( v5 != nullptr || (v5 = BN_new()) != nullptr )
        {
          v6 = v4;
          if ( (*(uint8_t *)(a1 + 40) & 2) == 0 )
          {
            v12 = v5;
            BN_init(&v15);
            v9 = v4[4];
            v15 = *(g4_int128_t *)v4;
            v5 = v12;
            v16 = v9 & 0xFFFFFFFE | v16 & 1 | 6;
            v6 = (int *)&v15;
          }
          v10 = (void **)v5;
          v7 = BN_mod_exp(v5, *(unsigned int ***)(a1 + 20), (int)(uintptr_t)(v6), *(unsigned int ***)(a1 + 12), v3);
          result = 0;
          v8 = v10;
          if ( v7 != 0 )
          {
            *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v4);
            *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(v10);
            result = 1;
          }
          if ( *(uint32_t *)(a1 + 24) == 0 )
          {
            v14 = result;
            BN_free(v8);
            result = v14;
          }
        }
        else
        {
          result = 0;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_21;
  }
  result = 0;
LABEL_15:
  if ( v4 != nullptr && *(uint32_t *)(a1 + 28) == 0 )
  {
    v13 = result;
    BN_free((void **)v4);
    result = v13;
  }
  if ( v3 != nullptr )
  {
    v11 = result;
    BN_CTX_free((void **)v3);
    return v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_ctrl  (binary VA: 0x1a42480)
// Original: ENGINE_ctrl
// ----------------------------------------------------------------------------
unsigned int ENGINE_ctrl(int a1, int a2, unsigned int a3, char *s2, int a5)
{
  int (*v5)(int, int, unsigned int, char *, int);
  unsigned int result;
  unsigned int *v7;
  unsigned int v8;
  int v9;
  const char *s;
  size_t v11;
  int v12;
  const char *v13;
  size_t v14;
  int *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  unsigned int *v19;
  const char *v20;
  int v21;
  int v22;
  uint32_t *v23;

  if ( a1 == 0 )
  {
    ERR_put_error(38, 142, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  v21 = *(uint32_t *)(a1 + 88);
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = *(int (**)(int, int, unsigned int, char *, int))(a1 + 64);
  if ( v21 <= 0 )
  {
    ERR_put_error(38, 142, 130, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  result = v5 != nullptr;
  if ( a2 != 10 )
  {
    if ( a2 < 10 || a2 > 18 )
    {
      if ( v5 != nullptr )
        return v5(a1, a2, a3, s2, a5);
      ERR_put_error(38, 142, 120, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    else
    {
      if ( v5 == nullptr )
      {
        ERR_put_error(38, 142, 120, (int)(uintptr_t)(&unk_1B15112), 0);
        return -1;
      }
      if ( (*(uint8_t *)(a1 + 84) & 2) != 0 )
        return v5(a1, a2, a3, s2, a5);
      if ( a2 == 11 )
      {
        v18 = *(uint32_t **)(a1 + 80);
        result = 0;
        if ( v18 != nullptr && *v18 != 0 && v18[1] != 0 )
          return *v18;
      }
      else
      {
        if ( a2 != 15 && a2 != 13 && a2 != 17 )
          goto LABEL_19;
        if ( s2 == nullptr )
        {
          ERR_put_error(38, 172, 67, (int)(uintptr_t)(&unk_1B15112), 0);
          return -1;
        }
        if ( a2 == 13 )
        {
          v16 = *(uint32_t **)(a1 + 80);
          v23 = v16;
          if ( v16 == nullptr )
            goto LABEL_39;
          v17 = *v16;
          if ( *v16 == 0 || v16[1] == 0 )
            goto LABEL_39;
          v22 = 0;
          v20 = (const char *)v16[1];
          while ( strcmp(v20, s2) != 0 )
          {
            v17 = v16[4];
            if ( v17 != 0 )
            {
              v16 += 4;
              ++v22;
              v20 = (const char *)v16[1];
              if ( v20 != nullptr )
                continue;
            }
            goto LABEL_39;
          }
          if ( v17 != 0 )
          {
            return v23[4 * v22];
          }
          else
          {
LABEL_39:
            ERR_put_error(38, 172, 137, (int)(uintptr_t)(&unk_1B15112), 0);
            return -1;
          }
        }
        else
        {
LABEL_19:
          v7 = *(unsigned int **)(a1 + 80);
          if ( v7 == nullptr )
            goto LABEL_49;
          v8 = *v7;
          v9 = 0;
          if ( *v7 != 0 && v7[1] != 0 && v8 < a3 )
          {
            v19 = *(unsigned int **)(a1 + 80);
            do
            {
              v19 += 4;
              ++v9;
              v8 = *v19;
              if ( *v19 == 0 )
                goto LABEL_49;
            }
            while ( v19[1] != 0 && a3 > v8 );
          }
          if ( a3 != v8 )
          {
LABEL_49:
            ERR_put_error(38, 172, 138, (int)(uintptr_t)(&unk_1B15112), 0);
            return -1;
          }
          switch ( a2 )
          {
            case 12:
              result = 0;
              v15 = (int *)&v7[4 * v9 + 4];
              if ( *v15 != 0 && v15[1] != 0 )
                result = *v15;
              break;
            case 14:
              result = strlen((const char *)v7[4 * v9 + 1]);
              break;
            case 15:
              v13 = (const char *)v7[4 * v9 + 1];
              v14 = strlen(v13);
              result = BIO_snprintf(s2, v14 + 1, "%s", v13);
              break;
            case 16:
              v12 = 4 * v9;
              result = 0;
              if ( v7[v12 + 2] != 0 )
                result = strlen((const char *)v7[v12 + 2]);
              break;
            case 17:
              s = (const char *)v7[4 * v9 + 2];
              if ( s != nullptr )
              {
                v11 = strlen(s);
                result = BIO_snprintf(s2, v11 + 1, "%s", s);
              }
              else
              {
                result = BIO_snprintf(s2, 1, "%s", &unk_1B15112);
              }
              break;
            case 18:
              result = v7[4 * v9 + 3];
              break;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_cmd_is_executable  (binary VA: 0x1a42960)
// Original: ENGINE_cmd_is_executable
// ----------------------------------------------------------------------------
bool ENGINE_cmd_is_executable(int a1, unsigned int a2)
{
  signed int v2;

  v2 = ENGINE_ctrl(a1, 18, a2, nullptr, 0);
  if ( v2 >= 0 )
    return (v2 & 7) != 0;
  ERR_put_error(38, 170, 138, (int)(uintptr_t)(&unk_1B15112), 0);
  return false;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_ctrl_cmd  (binary VA: 0x1a429f0)
// Original: ENGINE_ctrl_cmd
// ----------------------------------------------------------------------------
bool ENGINE_ctrl_cmd(int a1, char *a2, unsigned int a3, char *a4, int a5, int a6)
{
  unsigned int v6;

  if ( a2 != nullptr && a1 != 0 )
  {
    if ( *(uint32_t *)(a1 + 64) != 0 && (int)(v6 = ENGINE_ctrl(a1, 13, 0, a2, 0)) > 0 )
    {
      return (int)ENGINE_ctrl(a1, v6, a3, a4, a5) > 0;
    }
    else if ( a6 != 0 )
    {
      ERR_clear_error();
      return true;
    }
    else
    {
      ERR_put_error(38, 178, 137, (int)(uintptr_t)(&unk_1B15112), 0);
      return false;
    }
  }
  else
  {
    ERR_put_error(38, 178, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
}

// ----------------------------------------------------------------------------
// Function: ENGINE_ctrl_cmd_string  (binary VA: 0x1a42b10)
// Original: ENGINE_ctrl_cmd_string
// ----------------------------------------------------------------------------
bool ENGINE_ctrl_cmd_string(int a1, char *a2, char *nptr, int a4)
{
  int v4;
  unsigned int v5;
  signed int v6;
  unsigned int v8;
  signed int v9;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_endptr)) > _g4_s0 ? (12u + sizeof(_g4_t_endptr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 12u);

  if ( a2 == nullptr || a1 == 0 )
  {
    ERR_put_error(38, 171, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( *(uint32_t *)(a1 + 64) != 0 && (v4 = ENGINE_ctrl(a1, 13, 0, a2, 0), v5 = v4, v4 > 0) )
  {
    if ( !ENGINE_cmd_is_executable(a1, v4) )
    {
      ERR_put_error(38, 171, 134, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v6 = ENGINE_ctrl(a1, 18, v5, nullptr, 0);
    if ( v6 < 0 )
      goto LABEL_22;
    if ( (v6 & 4) != 0 )
    {
      if ( nptr != nullptr )
      {
        ERR_put_error(38, 171, 136, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
      v9 = ENGINE_ctrl(a1, v5, 0, nullptr, 0);
      return v9 > 0;
    }
    if ( nptr != nullptr )
    {
      if ( (v6 & 2) != 0 )
      {
        v9 = ENGINE_ctrl(a1, v5, 0, nptr, 0);
        return v9 > 0;
      }
      if ( (v6 & 1) != 0 )
      {
        v8 = strtol(nptr, &endptr, 10);
        if ( nptr == endptr || *endptr != 0 )
        {
          ERR_put_error(38, 171, 133, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v9 = ENGINE_ctrl(a1, v5, v8, nullptr, 0);
        return v9 > 0;
      }
LABEL_22:
      ERR_put_error(38, 171, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    ERR_put_error(38, 171, 135, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else if ( a4 != 0 )
  {
    ERR_clear_error();
    return 1;
  }
  else
  {
    ERR_put_error(38, 171, 137, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: PEM_X509_INFO_read_bio  (binary VA: 0x1a42e20)
// Original: PEM_X509_INFO_read_bio
// ----------------------------------------------------------------------------
int * PEM_X509_INFO_read_bio(uint32_t *a1, int *a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  uint32_t *v4;
  void *v5;
  void *v6;
  int j;
  void *v8;
  int v10;
  char *s;
  size_t v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  signed int v17;
  bool v18;
  int EVP_CIPHER_INFO;
  void *v20;
  uint32_t *v21;
  signed int v22;
  uint32_t *v23;
  signed int v24;
  typedef void *_g4_t_i;
  typedef void *_g4_t_v26;
  typedef int (*_g4_t_v27)(uint32_t, uint32_t, uint32_t);
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef uint32_t **_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef void *_g4_t_v36;
  typedef void *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v29)) > _g4_s4 ? (16u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v30)) > _g4_s5 ? (16u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v31)) > _g4_s6 ? (16u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v32)) > _g4_s7 ? (24u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v33)) > _g4_s8 ? (28u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v34)) > _g4_s9 ? (40u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v35)) > _g4_s10 ? (44u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v36)) > _g4_s11 ? (48u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v37)) > _g4_s12 ? (52u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v38)) > _g4_s13 ? (56u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v39)) > _g4_s14 ? (60u + sizeof(_g4_t_v39)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);

  v34 = nullptr;
  v35 = nullptr;
  v36 = nullptr;
  v32 = a2;
  if ( a2 != nullptr || (v32 = (int *)(sk_new_null())) != nullptr )
  {
    v4 = X509_INFO_new();
    if ( v4 == nullptr )
      goto LABEL_26;
    v5 = nullptr;
    while ( 2 )
    {
      v26 = v5;
      if ( PEM_read_bio(a1, &v34, &v35, &v36, (char **)&v38) != 0 )
      {
        for ( i = v26; ; i = (void *)(((int (*)(int *, char **, int))d2i_DSAPrivateKey)) )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v6 = v34;
                    if ( strcmp((const char *)v34, "CERTIFICATE") != 0
                      && strcmp((const char *)v34, "X509 CERTIFICATE") != 0 )
                    {
                      break;
                    }
                    if ( *v4 == 0 )
                    {
                      v33 = (uint32_t **)v4;
                      s = v35;
                      v5 = (void *)(((int (*)(int *, char **, int))d2i_X509));
                      v12 = 0;
                      goto LABEL_56;
                    }
                    if ( sk_push(v32, (int)(uintptr_t)(v4)) == 0 )
                      goto LABEL_52;
                    v4 = X509_INFO_new();
                    if ( v4 == nullptr )
                      goto LABEL_26;
                    i = (void *)(((int (*)(int *, char **, int))d2i_X509));
                  }
                  if ( strcmp((const char *)v34, "TRUSTED CERTIFICATE") != 0 )
                    break;
                  if ( *v4 == 0 )
                  {
                    v33 = (uint32_t **)v4;
                    s = v35;
                    v5 = (void *)(d2i_X509_AUX);
                    v12 = 0;
                    goto LABEL_56;
                  }
                  if ( sk_push(v32, (int)(uintptr_t)(v4)) == 0 )
                    goto LABEL_52;
                  v4 = X509_INFO_new();
                  if ( v4 == nullptr )
                    goto LABEL_26;
                  i = (void *)(d2i_X509_AUX);
                }
                if ( strcmp((const char *)v34, "X509 CRL") != 0 )
                  break;
                if ( v4[1] == 0 )
                {
                  s = v35;
                  v33 = (uint32_t **)(v4 + 1);
                  v5 = (void *)(d2i_X509_CRL);
                  v12 = 0;
                  goto LABEL_56;
                }
                if ( sk_push(v32, (int)(uintptr_t)(v4)) == 0 )
                  goto LABEL_52;
                v4 = X509_INFO_new();
                if ( v4 == nullptr )
                  goto LABEL_26;
                i = (void *)(d2i_X509_CRL);
              }
              if ( strcmp((const char *)v34, "RSA PRIVATE KEY") != 0 )
                break;
              if ( v4[2] == 0 )
              {
                v4[9] = 0;
                v4[8] = 0;
                v15 = X509_PKEY_new();
                s = v35;
                v4[2] = (uint32_t)(uintptr_t)(v15);
                v16 = v15;
                v17 = strlen(s);
                v5 = i;
                v18 = v17 > 10;
                if ( i == nullptr )
                  goto LABEL_60;
                v33 = (uint32_t **)(v16 + 3);
                v12 = 6;
                if ( v18 )
                  goto LABEL_77;
                goto LABEL_56;
              }
              if ( sk_push(v32, (int)(uintptr_t)(v4)) == 0 )
                goto LABEL_52;
              v4 = X509_INFO_new();
              if ( v4 == nullptr )
                goto LABEL_26;
            }
            if ( strcmp((const char *)v34, "DSA PRIVATE KEY") == 0 )
              break;
            if ( strcmp((const char *)v34, "EC PRIVATE KEY") != 0 )
            {
              v5 = nullptr;
              goto LABEL_61;
            }
            if ( v4[2] == 0 )
            {
              v4[9] = 0;
              v4[8] = 0;
              v21 = X509_PKEY_new();
              s = v35;
              v4[2] = (uint32_t)(uintptr_t)(v21);
              v33 = (uint32_t **)(v21 + 3);
              v12 = 408;
              v22 = strlen(s);
              v5 = (void *)(((uint32_t * (*)(int *, char **, int))d2i_ECPrivateKey));
              if ( v22 > 10 )
                goto LABEL_77;
LABEL_56:
              v27 = (int (*)(uint32_t, uint32_t, uint32_t))v5;
              if ( PEM_get_EVP_CIPHER_INFO(s, v39) != 0 && PEM_do_header(v39, (char *)v36, (size_t *)&v38, a3, a4) != 0 )
              {
                v37 = v36;
                if ( v12 != 0 )
                {
                  v13 = d2i_PrivateKey(v12, v33, (int)(uintptr_t)(&v37), v38);
                  v5 = (void *)(v27);
                  if ( v13 != nullptr )
                    goto LABEL_60;
                }
                else
                {
                  v14 = v27((uint32_t)(uintptr_t)(v33), (uint32_t)(uintptr_t)(&v37), v38);
                  v5 = (void *)(v27);
                  if ( v14 != 0 )
                    goto LABEL_60;
                }
                v10 = 0;
                ERR_put_error(9, 116, 13, (int)(uintptr_t)(&unk_1B15112), 0);
                goto LABEL_53;
              }
              goto LABEL_52;
            }
            if ( sk_push(v32, (int)(uintptr_t)(v4)) == 0 )
              goto LABEL_52;
            v4 = X509_INFO_new();
            if ( v4 == nullptr )
              goto LABEL_26;
            i = (void *)(((uint32_t * (*)(int *, char **, int))d2i_ECPrivateKey));
          }
          if ( v4[2] == 0 )
            break;
          if ( sk_push(v32, (int)(uintptr_t)(v4)) == 0 )
            goto LABEL_52;
          v4 = X509_INFO_new();
          if ( v4 == nullptr )
            goto LABEL_26;
        }
        v4[9] = 0;
        v4[8] = 0;
        v23 = X509_PKEY_new();
        s = v35;
        v4[2] = (uint32_t)(uintptr_t)(v23);
        v33 = (uint32_t **)(v23 + 3);
        v24 = strlen(s);
        v5 = (void *)(((int (*)(int *, char **, int))d2i_DSAPrivateKey));
        if ( v24 <= 10 )
        {
          v5 = (void *)(((int (*)(int *, char **, int))d2i_DSAPrivateKey));
          v12 = 116;
          goto LABEL_56;
        }
LABEL_77:
        v31 = v5;
        EVP_CIPHER_INFO = PEM_get_EVP_CIPHER_INFO(s, v4 + 3);
        v5 = v31;
        if ( EVP_CIPHER_INFO != 0 )
        {
          v20 = v36;
          v36 = nullptr;
          v4[9] = (uint32_t)(uintptr_t)(v20);
          v4[8] = v38;
LABEL_60:
          v6 = v34;
LABEL_61:
          if ( v6 != nullptr )
          {
            v28 = v5;
            CRYPTO_free(v6);
            v5 = v28;
          }
          if ( v35 != nullptr )
          {
            v29 = v5;
            CRYPTO_free(v35);
            v5 = v29;
          }
          if ( v36 != nullptr )
          {
            v30 = v5;
            CRYPTO_free(v36);
            v5 = v30;
          }
          v34 = nullptr;
          v35 = nullptr;
          v36 = nullptr;
          continue;
        }
      }
      else
      {
        v10 = 0;
        if ( (ERR_peek_last_error() & 0xFFF) != 0x6C )
          goto LABEL_53;
        ERR_clear_error();
        if ( *v4 == 0 && v4[1] == 0 && v4[2] == 0 && v4[9] == 0 )
        {
          v10 = 1;
LABEL_53:
          X509_INFO_free(v4);
          if ( v10 != 0 )
            goto LABEL_32;
          goto LABEL_26;
        }
        if ( sk_push(v32, (int)(uintptr_t)(v4)) != 0 )
          goto LABEL_32;
      }
      break;
    }
LABEL_52:
    v10 = 0;
    goto LABEL_53;
  }
  ERR_put_error(9, 116, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_26:
  for ( j = 0; j < sk_num((int)(uintptr_t)(v32)); ++j )
  {
    v8 = (void *)sk_value(v32, j);
    X509_INFO_free(v8);
  }
  if ( v32 != a2 )
    sk_free((void **)v32);
  v32 = nullptr;
LABEL_32:
  if ( v34 != nullptr )
    CRYPTO_free(v34);
  if ( v35 != nullptr )
    CRYPTO_free(v35);
  if ( v36 != nullptr )
    CRYPTO_free(v36);
  return v32;
}

// ----------------------------------------------------------------------------
// Function: PEM_X509_INFO_read  (binary VA: 0x1a43500)
// Original: PEM_X509_INFO_read
// ----------------------------------------------------------------------------
int * PEM_X509_INFO_read(int a1, int *a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  void *v4;
  uint8_t *v5;
  int *bio;

  v4 = BIO_s_file();
  v5 = BIO_new((int)(uintptr_t)(v4));
  if ( v5 != nullptr )
  {
    BIO_ctrl(v5, 106, 0, a1);
    bio = PEM_X509_INFO_read_bio(v5, a2, a3, a4);
    BIO_free(v5);
  }
  else
  {
    bio = nullptr;
    ERR_put_error(9, 115, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio;
}

// ----------------------------------------------------------------------------
// Function: PEM_X509_INFO_write_bio  (binary VA: 0x1a435d0)
// Original: PEM_X509_INFO_write_bio
// ----------------------------------------------------------------------------
bool PEM_X509_INFO_write_bio(uint32_t *a1, int *a2, int a3, int a4, int a5, int a6, char *a7)
{
  bool v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  typedef int _g4_t_v12;
  typedef size_t _g4_t_v13;
  typedef char *_g4_t_s;
  typedef uint8_t _g4_t_v15[140];
  typedef char _g4_t_v16[1052];
  enum : size_t {
    _g4_s0 = 1280u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s)) > _g4_s2 ? (12u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (160u + sizeof(_g4_t_v16)) > _g4_s4 ? (160u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 160u);

  v7 = a3;
  if ( a3 == 0 || (v8 = EVP_CIPHER_nid(a3), OBJ_nid2sn(v8) != nullptr) )
  {
    v9 = a2[2];
    if ( v9 == 0 )
    {
LABEL_10:
      v7 = true;
      if ( *a2 != 0 )
        v7 = PEM_write_bio_X509(a1, *a2) > 0;
      goto LABEL_12;
    }
    v12 = a2[9];
    if ( v12 == 0 || (int)(v13 = a2[8]) <= 0 )
    {
      v7 = false;
      if ( PEM_write_bio_RSAPrivateKey((int)(uintptr_t)(a1), *(uint32_t *)(*(uint32_t *)(v9 + 12) + 20), a3, a4, a5, a6, a7) <= 0 )
        goto LABEL_12;
      goto LABEL_10;
    }
    if ( a3 == 0 )
    {
      ERR_put_error(9, 117, 127, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_12;
    }
    v10 = EVP_CIPHER_nid(a2[3]);
    s = OBJ_nid2sn(v10);
    if ( s != nullptr )
    {
      if ( strlen(s) + 2 * *(uint32_t *)(a3 + 12) + 36 > 0x400 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "strlen(objstr)+23+2*enc->iv_len+13 <= sizeof buf");
      v16[0] = 0;
      PEM_proc_type(v16, 10);
      v7 = false;
      PEM_dek_info(v16, s, *(uint32_t *)(a3 + 12), (int)(uintptr_t)(a2 + 4));
      if ( PEM_write_bio(a1, "RSA PRIVATE KEY", v16, v12, v13) > 0 )
        goto LABEL_10;
LABEL_12:
      OPENSSL_cleanse(v15, 0x8Cu);
      OPENSSL_cleanse((uint8_t *)v16, 0x400u);
      return v7;
    }
  }
  v7 = false;
  ERR_put_error(9, 117, 113, (int)(uintptr_t)(&unk_1B15112), 0);
  goto LABEL_12;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_item_pack_safebag  (binary VA: 0x1a43860)
// Original: PKCS12_item_pack_safebag
// ----------------------------------------------------------------------------
char *** PKCS12_item_pack_safebag(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4;
  char ***v5;
  char ***v6;

  v4 = PKCS12_BAGS_new();
  if ( v4 != 0 && (*(uint32_t *)v4 = (uint32_t)(uintptr_t)(OBJ_nid2obj(a3)), ASN1_item_pack(a1, a2, (void ***)(v4 + 4)) != nullptr) )
  {
    v5 = (char ***)PKCS12_SAFEBAG_new();
    v6 = v5;
    if ( v5 != nullptr )
    {
      v5[1] = (char **)v4;
      *v5 = OBJ_nid2obj(a4);
    }
    else
    {
      ERR_put_error(35, 117, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v6 = nullptr;
    ERR_put_error(35, 117, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_MAKE_KEYBAG  (binary VA: 0x1a43960)
// Original: PKCS12_MAKE_KEYBAG
// ----------------------------------------------------------------------------
char *** PKCS12_MAKE_KEYBAG(char **a1)
{
  char ***v1;

  v1 = (char ***)PKCS12_SAFEBAG_new();
  if ( v1 != nullptr )
  {
    *v1 = OBJ_nid2obj(0x96u);
    v1[1] = a1;
  }
  else
  {
    ERR_put_error(35, 112, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_MAKE_SHKEYBAG  (binary VA: 0x1a439e0)
// Original: PKCS12_MAKE_SHKEYBAG
// ----------------------------------------------------------------------------
char *** PKCS12_MAKE_SHKEYBAG(unsigned int a1, char *a2, size_t a3, void *a4, int a5, int a6, int a7)
{
  int v7;
  char ***v8;
  char *v9;
  int **v10;
  int cipherbyname;

  v7 = a1;
  v8 = (char ***)PKCS12_SAFEBAG_new();
  if ( v8 != nullptr )
  {
    *v8 = OBJ_nid2obj(0x97u);
    v9 = OBJ_nid2sn(a1);
    cipherbyname = EVP_get_cipherbyname((int)(uintptr_t)(v9));
    if ( cipherbyname != 0 )
      v7 = -1;
    v10 = PKCS8_encrypt(v7, cipherbyname, a2, a3, a4, a5, a6, a7);
    v8[1] = (char **)v10;
    if ( v10 == nullptr )
    {
      v8 = nullptr;
      ERR_put_error(35, 113, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    ERR_put_error(35, 113, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_pack_p7data  (binary VA: 0x1a43af0)
// Original: PKCS12_pack_p7data
// ----------------------------------------------------------------------------
int PKCS12_pack_p7data(int a1)
{
  int v1;
  uint32_t *v2;

  v1 = PKCS7_new();
  if ( v1 != 0 )
  {
    *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(OBJ_nid2obj(0x15u));
    v2 = ASN1_STRING_type_new(4);
    *(uint32_t *)(v1 + 20) = (uint32_t)(uintptr_t)(v2);
    if ( v2 != nullptr )
    {
      if ( ASN1_item_pack(a1, (int)(uintptr_t)(&PKCS12_SAFEBAGS_it), (void ***)(v1 + 20)) == nullptr )
      {
        v1 = 0;
        ERR_put_error(35, 114, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      v1 = 0;
      ERR_put_error(35, 114, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    ERR_put_error(35, 114, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_unpack_p7data  (binary VA: 0x1a43bf0)
// Original: PKCS12_unpack_p7data
// ----------------------------------------------------------------------------
int PKCS12_unpack_p7data(int a1)
{
  if ( OBJ_obj2nid(*(uint32_t *)(a1 + 16)) == 21 )
    return ASN1_item_unpack(*(int **)(a1 + 20), (int)(uintptr_t)(&PKCS12_SAFEBAGS_it));
  ERR_put_error(35, 131, 121, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_pack_p7encdata  (binary VA: 0x1a43c80)
// Original: PKCS12_pack_p7encdata
// ----------------------------------------------------------------------------
int PKCS12_pack_p7encdata(unsigned int a1, char *a2, size_t a3, void *a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  char *v9;
  uint32_t *cipherbyname;
  char ***v11;
  int v12;
  char **v13;

  v7 = PKCS7_new();
  v8 = v7;
  if ( v7 != 0 )
  {
    if ( PKCS7_set_type(v7, 0x1Au) )
    {
      v9 = OBJ_nid2sn(a1);
      cipherbyname = (uint32_t *)EVP_get_cipherbyname((int)(uintptr_t)(v9));
      if ( cipherbyname != nullptr )
        v11 = PKCS5_pbe2_set(cipherbyname, a6, a4, a5);
      else
        v11 = (char ***)PKCS5_pbe_set(a1, a6, a4, a5);
      if ( v11 != nullptr )
      {
        X509_ALGOR_free(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v8 + 20) + 4) + 4));
        *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v8 + 20) + 4) + 4) = (uint32_t)(uintptr_t)(v11);
        ASN1_STRING_free(*(void ***)(*(uint32_t *)(*(uint32_t *)(v8 + 20) + 4) + 8));
        v12 = *(uint32_t *)(*(uint32_t *)(v8 + 20) + 4);
        v13 = PKCS12_item_i2d_encrypt((int *)v11, (int)(uintptr_t)(&PKCS12_SAFEBAGS_it), a2, a3, a7, 1);
        *(uint32_t *)(v12 + 8) = (uint32_t)(uintptr_t)(v13);
        if ( v13 == nullptr )
        {
          v8 = 0;
          ERR_put_error(35, 115, 103, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
      else
      {
        v8 = 0;
        ERR_put_error(35, 115, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      v8 = 0;
      ERR_put_error(35, 115, 120, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    ERR_put_error(35, 115, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_unpack_p7encdata  (binary VA: 0x1a43e90)
// Original: PKCS12_unpack_p7encdata
// ----------------------------------------------------------------------------
int PKCS12_unpack_p7encdata(int a1, char *a2, size_t a3)
{
  int v3;
  int v4;

  v3 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  v4 = 0;
  if ( v3 == 26 )
    return PKCS12_item_decrypt_d2i(
             *(int **)(*(uint32_t *)(*(uint32_t *)(a1 + 20) + 4) + 4),
             (int)(uintptr_t)(&PKCS12_SAFEBAGS_it),
             a2,
             a3,
             *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 20) + 4) + 8),
             1);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_decrypt_skey  (binary VA: 0x1a43f10)
// Original: PKCS12_decrypt_skey
// ----------------------------------------------------------------------------
int PKCS12_decrypt_skey(int a1, char *a2, int a3)
{
  return PKCS8_decrypt(*(int **)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: PKCS12_pack_authsafes  (binary VA: 0x1a43f50)
// Original: PKCS12_pack_authsafes
// ----------------------------------------------------------------------------
bool PKCS12_pack_authsafes(int a1, int a2)
{
  return ASN1_item_pack(a2, (int)(uintptr_t)(&PKCS12_AUTHSAFES_it), (void ***)(*(uint32_t *)(a1 + 8) + 20)) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_unpack_authsafes  (binary VA: 0x1a43fa0)
// Original: PKCS12_unpack_authsafes
// ----------------------------------------------------------------------------
int PKCS12_unpack_authsafes(int a1)
{
  if ( OBJ_obj2nid(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 16)) == 21 )
    return ASN1_item_unpack(*(int **)(*(uint32_t *)(a1 + 8) + 20), (int)(uintptr_t)(&PKCS12_AUTHSAFES_it));
  ERR_put_error(35, 130, 121, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS12  (binary VA: 0x1a44040)
// Original: d2i_PKCS12
// ----------------------------------------------------------------------------
int d2i_PKCS12(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS12_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS12  (binary VA: 0x1a44080)
// Original: i2d_PKCS12
// ----------------------------------------------------------------------------
int i2d_PKCS12(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS12_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_new  (binary VA: 0x1a440c0)
// Original: PKCS12_new
// ----------------------------------------------------------------------------
int PKCS12_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS12_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_free  (binary VA: 0x1a440f0)
// Original: PKCS12_free
// ----------------------------------------------------------------------------
int PKCS12_free(char a1)
{
  return ASN1_item_free(a1, PKCS12_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS12_MAC_DATA  (binary VA: 0x1a44120)
// Original: d2i_PKCS12_MAC_DATA
// ----------------------------------------------------------------------------
int d2i_PKCS12_MAC_DATA(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS12_MAC_DATA_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS12_MAC_DATA  (binary VA: 0x1a44160)
// Original: i2d_PKCS12_MAC_DATA
// ----------------------------------------------------------------------------
int i2d_PKCS12_MAC_DATA(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS12_MAC_DATA_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_MAC_DATA_new  (binary VA: 0x1a441a0)
// Original: PKCS12_MAC_DATA_new
// ----------------------------------------------------------------------------
int PKCS12_MAC_DATA_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS12_MAC_DATA_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_MAC_DATA_free  (binary VA: 0x1a441d0)
// Original: PKCS12_MAC_DATA_free
// ----------------------------------------------------------------------------
int PKCS12_MAC_DATA_free(char a1)
{
  return ASN1_item_free(a1, PKCS12_MAC_DATA_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS12_BAGS  (binary VA: 0x1a44200)
// Original: d2i_PKCS12_BAGS
// ----------------------------------------------------------------------------
int d2i_PKCS12_BAGS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS12_BAGS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS12_BAGS  (binary VA: 0x1a44240)
// Original: i2d_PKCS12_BAGS
// ----------------------------------------------------------------------------
int i2d_PKCS12_BAGS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS12_BAGS_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_BAGS_new  (binary VA: 0x1a44280)
// Original: PKCS12_BAGS_new
// ----------------------------------------------------------------------------
int PKCS12_BAGS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS12_BAGS_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_BAGS_free  (binary VA: 0x1a442b0)
// Original: PKCS12_BAGS_free
// ----------------------------------------------------------------------------
int PKCS12_BAGS_free(char a1)
{
  return ASN1_item_free(a1, PKCS12_BAGS_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS12_SAFEBAG  (binary VA: 0x1a442e0)
// Original: d2i_PKCS12_SAFEBAG
// ----------------------------------------------------------------------------
int d2i_PKCS12_SAFEBAG(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS12_SAFEBAG_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS12_SAFEBAG  (binary VA: 0x1a44320)
// Original: i2d_PKCS12_SAFEBAG
// ----------------------------------------------------------------------------
int i2d_PKCS12_SAFEBAG(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS12_SAFEBAG_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_SAFEBAG_new  (binary VA: 0x1a44360)
// Original: PKCS12_SAFEBAG_new
// ----------------------------------------------------------------------------
int PKCS12_SAFEBAG_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS12_SAFEBAG_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_SAFEBAG_free  (binary VA: 0x1a44390)
// Original: PKCS12_SAFEBAG_free
// ----------------------------------------------------------------------------
int PKCS12_SAFEBAG_free(char a1)
{
  return ASN1_item_free(a1, PKCS12_SAFEBAG_it);
}

// ----------------------------------------------------------------------------
// Function: RAND_query_egd_bytes  (binary VA: 0x1a443c0)
// Original: RAND_query_egd_bytes
// ----------------------------------------------------------------------------
int RAND_query_egd_bytes(char *s, int a2, int a3)
{
  unsigned int v3;
  char *p_addr;
  char *v5;
  socklen_t v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  ssize_t v12;
  int v13;
  int v14;
  int v15;
  int v17;
  ssize_t v18;
  int v19;
  int v20;
  int v21;
  uint8_t v22;
  uint8_t *v23;
  uint8_t *v24;
  ssize_t v25;
  int v26;
  int v27;
  int v28;
  typedef int _g4_t_fd;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_buf[2];
  typedef struct sockaddr _g4_t_addr;
  typedef uint8_t _g4_t_v33[283];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (8u + sizeof(_g4_t_fd)) > _g4_s0 ? (8u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_buf)) > _g4_s2 ? (16u + sizeof(_g4_t_buf)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_addr)) > _g4_s3 ? (18u + sizeof(_g4_t_addr)) : _g4_s3,
    _g4_s5 = (129u + sizeof(_g4_t_v33)) > _g4_s4 ? (129u + sizeof(_g4_t_v33)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_buf &buf = *reinterpret_cast<_g4_t_buf *>(_g4_sf + 16u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 18u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 129u);

  v3 = 110;
  p_addr = (char *)&addr;
  if ( ((unsigned int)(uintptr_t)(&addr) & 2) != 0 )
  {
    p_addr = addr.sa_data;
    LOBYTE(v3) = 108;
  }
  memset(p_addr, 0, 4 * (v3 >> 2));
  v5 = &p_addr[4 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *(uint16_t *)v5 = 0;
  addr.sa_family = 1;
  v30 = -1;
  if ( strlen(s) > 0x6B )
    return v30;
  BUF_strlcpy(addr.sa_data, s, 0x6Cu);
  v6 = strlen(s) + 2;
  v7 = socket(1, 1, 0);
  if ( v7 == -1 )
    return v30;
  do
  {
    while ( 1 )
    {
      if ( connect(v7, &addr, v6) == 0 || (v17 = *(uint32_t *)__errno(v9, v8)) == 106 )
      {
        v30 = 0;
        if ( a3 <= 0 )
          goto LABEL_18;
LABEL_9:
        v10 = -1;
        if ( a3 <= 255 )
          v10 = a3;
        buf[0] = 1;
        buf[1] = v10;
        v11 = 0;
        do
        {
          v12 = write(v7, &buf[v11], 2 - v11);
          if ( v12 >= 0 )
          {
            v11 += v12;
          }
          else
          {
            v15 = *(uint32_t *)__errno(v14, v13);
            if ( v15 != 4 && v15 != 11 )
            {
LABEL_17:
              v30 = -1;
              goto LABEL_18;
            }
          }
        }
        while ( v11 != 2 );
        LOWORD(v11) = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = read(v7, buf, 1u);
            if ( v18 == 0 )
              goto LABEL_18;
            if ( v18 <= 0 )
              break;
            v11 += v18;
LABEL_29:
            if ( v11 == 1 )
            {
              v22 = buf[0];
              if ( buf[0] != 0 )
              {
                v23 = (uint8_t *)(v30 + a2);
                if ( a2 == 0 )
                  v23 = v33;
                fd = v7;
                LOWORD(v11) = 0;
                v24 = v23;
                while ( v22 != v11 )
                {
                  v25 = read(fd, &v24[v11], v22 - v11);
                  if ( v25 == 0 )
                  {
                    v7 = fd;
                    goto LABEL_18;
                  }
                  if ( v25 > 0 )
                  {
                    v11 += v25;
                  }
                  else
                  {
                    v28 = *(uint32_t *)__errno(v27, v26);
                    if ( v28 != 4 && v28 != 11 )
                    {
                      v7 = fd;
                      goto LABEL_17;
                    }
                  }
                  v22 = buf[0];
                }
                v30 += v11;
                a3 -= v11;
                v7 = fd;
                if ( a2 == 0 )
                  RAND_seed((int)(uintptr_t)(v33), v11);
                if ( a3 > 0 )
                  goto LABEL_9;
              }
              goto LABEL_18;
            }
          }
          v21 = *(uint32_t *)__errno(v20, v19);
          if ( v21 == 4 )
            goto LABEL_29;
          if ( v21 != 11 )
            goto LABEL_17;
        }
      }
      if ( v17 <= 106 )
        break;
      if ( (unsigned int)(v17 - 114) > 1 )
        goto LABEL_24;
    }
  }
  while ( v17 == 4 || v17 == 11 );
LABEL_24:
  v30 = 0;
LABEL_18:
  close(v7);
  return v30;
}

// ----------------------------------------------------------------------------
// Function: RAND_egd_bytes  (binary VA: 0x1a446a0)
// Original: RAND_egd_bytes
// ----------------------------------------------------------------------------
int RAND_egd_bytes(char *a1, int a2)
{
  int v2;
  int egd_bytes;

  v2 = 0;
  egd_bytes = RAND_query_egd_bytes(a1, 0, a2);
  if ( egd_bytes > 0 && RAND_status() == 1 )
    return egd_bytes;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: RAND_egd  (binary VA: 0x1a44700)
// Original: RAND_egd
// ----------------------------------------------------------------------------
int RAND_egd(char *a1)
{
  return RAND_egd_bytes(a1, 255);
}

// ----------------------------------------------------------------------------
// Function: d2i_EXTENDED_KEY_USAGE  (binary VA: 0x1a450b0)
// Original: d2i_EXTENDED_KEY_USAGE
// ----------------------------------------------------------------------------
int d2i_EXTENDED_KEY_USAGE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&EXTENDED_KEY_USAGE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_EXTENDED_KEY_USAGE  (binary VA: 0x1a450f0)
// Original: i2d_EXTENDED_KEY_USAGE
// ----------------------------------------------------------------------------
int i2d_EXTENDED_KEY_USAGE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&EXTENDED_KEY_USAGE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_SET  (binary VA: 0x1a453c0)
// Original: i2d_ASN1_SET
// ----------------------------------------------------------------------------
int i2d_ASN1_SET(int *a1, void **a2, void (*a3)(int, void **), int a4, char a5, int a6)
{
  int v6;
  void (*v7)(int, void **);
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int j;
  int v15;
  int v17;
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  int i;
  int v22;
  uint8_t *v23;
  int v24;
  size_t v25;
  uint8_t *v26;
  int v27;
  int v28;
  uint8_t *v29;
  int v30;
  typedef size_t _g4_t_nmemb;
  typedef int _g4_t_v32;
  typedef void (*_g4_t_n)(int, void **);
  typedef int *_g4_t_na;
  typedef size_t _g4_t_nb;
  typedef void (*_g4_t_v36)(int, void **);
  typedef void *_g4_t_src;
  typedef int _g4_t_v38;
  typedef void *_g4_t_base;
  typedef uint8_t *_g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef void *_g4_t_dest[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_nmemb)) > _g4_s0 ? (4u + sizeof(_g4_t_nmemb)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v32)) > _g4_s1 ? (44u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_n)) > _g4_s2 ? (48u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_na)) > _g4_s3 ? (48u + sizeof(_g4_t_na)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_nb)) > _g4_s4 ? (48u + sizeof(_g4_t_nb)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v36)) > _g4_s5 ? (52u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_src)) > _g4_s6 ? (56u + sizeof(_g4_t_src)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v38)) > _g4_s7 ? (60u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_base)) > _g4_s8 ? (64u + sizeof(_g4_t_base)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v40)) > _g4_s9 ? (72u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v41)) > _g4_s10 ? (76u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_dest)) > _g4_s11 ? (92u + sizeof(_g4_t_dest)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_nmemb &nmemb = *reinterpret_cast<_g4_t_nmemb *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 48u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 48u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_base &base = *reinterpret_cast<_g4_t_base *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 92u);

  v6 = (int)(uintptr_t)(a1);
  v7 = a3;
  v38 = 0;
  if ( a1 != nullptr )
  {
    v8 = sk_num((int)(uintptr_t)(a1));
    v9 = 0;
    v10 = v8 - 1;
    if ( v8 - 1 >= 0 )
    {
      v11 = 0;
      do
      {
        v12 = sk_value(a1, v10--);
        v11 += ((int (*)(int, uint32_t))a3)(v12, 0);
      }
      while ( v10 != -1 );
      v9 = v11;
      v6 = (int)(uintptr_t)(a1);
      v7 = a3;
    }
    v32 = v9;
    v38 = ASN1_object_size(1, v9, a4);
    if ( a2 != nullptr )
    {
      dest[0] = *a2;
      ASN1_put_object((uint8_t **)dest, 1, v32, a4, a5);
      if ( a6 != 0 && sk_num(v6) > 1 )
      {
        v40 = (uint8_t *)(dest[0]);
        v17 = sk_num(v6);
        v18 = CRYPTO_malloc(8 * v17, (int)(uintptr_t)(&unk_1B15112), 0);
        base = v18;
        if ( v18 == nullptr )
          goto LABEL_23;
        v41 = v18;
        na = (int *)v6;
        v36 = v7;
        v19 = 0;
        v20 = v18;
        for ( i = sk_num((int)(uintptr_t)(na)); v19 < i; i = sk_num((int)(uintptr_t)(na)) )
        {
          *(void **)v20 = dest[0];
          nmemb = v19++;
          v22 = sk_value(na, nmemb);
          v36(v22, dest);
          *((uint32_t *)v20 + 1) = (uint32_t)(uintptr_t)((char *)dest[0] - *(uint32_t *)v20);
          v20 += 8;
        }
        v23 = (uint8_t *)(dest[0]);
        v24 = (int)(uintptr_t)(na);
        *a2 = dest[0];
        nb = v23 - v40;
        v25 = sk_num(v24);
        qsort(base, v25, 8u, (__compar_fn_t)((int (*)(int, int))sub_1A45360));
        v26 = CRYPTO_malloc(nb, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v26 != nullptr )
        {
          v27 = v24;
          dest[0] = v26;
          v28 = 0;
          src = v26;
          v29 = v41;
          while ( v28 < sk_num(v27) )
          {
            ++v28;
            memcpy(dest[0], *(const void **)v29, *((uint32_t *)v29 + 1));
            v30 = *((uint32_t *)v29 + 1);
            v29 += 8;
            dest[0] = (char *)dest[0] + v30;
          }
          memcpy(v40, src, nb);
          CRYPTO_free(src);
          CRYPTO_free(base);
        }
        else
        {
LABEL_23:
          ERR_put_error(13, 188, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
      else
      {
        n = v7;
        v13 = (int *)v6;
        for ( j = 0; j < sk_num((int)(uintptr_t)(v13)); ++j )
        {
          v15 = sk_value(v13, j);
          n(v15, dest);
        }
        *a2 = dest[0];
      }
    }
  }
  return v38;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_SET  (binary VA: 0x1a456e0)
// Original: d2i_ASN1_SET
// ----------------------------------------------------------------------------
int * d2i_ASN1_SET(int **a1, int *a2, int a3, int (*a4)(uint32_t, uint8_t **, int), int a5, int a6, int a7)
{
  void (*v7)(uint32_t);
  int *v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;
  int object;
  uint8_t *v14;
  uint8_t *v15;
  bool v16;
  int v17;
  uint8_t *v18;
  typedef void **_g4_t_v19;
  typedef uint8_t *_g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v20)) > _g4_s1 ? (52u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v21)) > _g4_s2 ? (64u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v22)) > _g4_s3 ? (68u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v23)) > _g4_s4 ? (72u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v24)) > _g4_s5 ? (76u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);

  v7 = (void (*)(uint32_t))a5;
  if ( a1 == nullptr || (v8 = *a1, *a1 == nullptr) )
  {
    v8 = (int *)(sk_new_null());
    if ( v8 == nullptr )
    {
      ERR_put_error(13, 148, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v8;
    }
  }
  v9 = nullptr;
  v10 = (uint8_t *)*a2;
  v11 = nullptr;
  v20[0] = (uint8_t *)*a2;
  if ( a3 != 0 )
  {
    v11 = &v10[a3];
    v9 = &v10[a3];
  }
  v25 = v11;
  object = ASN1_get_object(v20, &v24, &v22, &v23, v9 - v10);
  v21 = object;
  if ( (object & 0x80u) == 0 )
  {
    if ( v23 == a7 )
    {
      if ( v22 == a6 )
      {
        v14 = v20[0];
        v15 = &v20[0][v24];
        if ( &v20[0][v24] <= v25 )
        {
          if ( object == 33 )
          {
            v24 = *a2 + a3 - (unsigned int)(uintptr_t)(v20[0]);
            v15 = &v20[0][v24];
          }
          v25 = v15;
          while ( v15 > v14 )
          {
            if ( (v21 & 1) != 0 )
            {
              LOBYTE(v18) = ASN1_const_check_infinite_end(v20, v24);
              v20[1] = v18;
              v16 = v18 != nullptr;
            }
            else
            {
              v16 = v24 <= 0;
            }
            if ( v16 )
            {
              v14 = v20[0];
              break;
            }
            v17 = a4(0, v20, v24);
            if ( v17 == 0 )
            {
              v7 = (void (*)(uint32_t))a5;
              ERR_put_error(13, 148, 113, (int)(uintptr_t)(&unk_1B15112), 0);
              asn1_add_error(*a2, (int)(uintptr_t)(&v20[0][-*a2]));
              goto LABEL_6;
            }
            if ( sk_push(v8, v17) == 0 )
            {
              v7 = (void (*)(uint32_t))a5;
              goto LABEL_6;
            }
            v14 = v20[0];
            v15 = v25;
          }
          if ( a1 != nullptr )
            *a1 = v8;
          *a2 = (int)(uintptr_t)(v14);
          return v8;
        }
        ERR_put_error(13, 148, 136, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        ERR_put_error(13, 148, 104, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      ERR_put_error(13, 148, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
LABEL_6:
  if ( a1 != nullptr && v8 == *a1 )
    return nullptr;
  if ( v7 != nullptr )
  {
    v19 = (void **)v8;
    v8 = nullptr;
    sk_pop_free(v19, v7);
    return v8;
  }
  sk_free((void **)v8);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_bio_stream  (binary VA: 0x1a46ba0)
// Original: i2d_ASN1_bio_stream
// ----------------------------------------------------------------------------
int i2d_ASN1_bio_stream(uint32_t *a1, int a2, uint32_t *a3, int16_t a4, int a5)
{
  uint32_t *v5;
  uint32_t *v6;
  int v7;

  if ( (a4 & 0x1000) != 0 )
  {
    v5 = (uint32_t *)BIO_new_NDEF(a1, a2, a5);
    v6 = v5;
    if ( v5 == nullptr )
    {
      ERR_put_error(13, 211, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    SMIME_crlf_copy(a3, v5, a4);
    BIO_ctrl(v6, 11, 0, 0);
    while ( 1 )
    {
      v7 = BIO_pop(v6);
      BIO_free(v6);
      if ( a1 == (uint32_t *)v7 )
        break;
      v6 = (uint32_t *)v7;
    }
  }
  else
  {
    ASN1_item_i2d_bio(a5, a1, a2);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_ASN1_stream  (binary VA: 0x1a46da0)
// Original: PEM_write_bio_ASN1_stream
// ----------------------------------------------------------------------------
int PEM_write_bio_ASN1_stream(int a1, int a2, uint32_t *a3, int a4, uint32_t *a5, int16_t a6, const char *a7, int a8)
{
  int v8;
  int v9;
  int v10;

  BIO_printf(a2, a1, (int)(uintptr_t)(a3), "-----BEGIN %s-----\n", a7);
  v8 = sub_1A46CB0(a3, a4, a5, a6, a8);
  BIO_printf(v9, v10, (int)(uintptr_t)(a3), "-----END %s-----\n", a7);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: BIO_new_NDEF  (binary VA: 0x1a479e0)
// Original: BIO_new_NDEF
// ----------------------------------------------------------------------------
int BIO_new_NDEF(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint8_t *v6;
  uint32_t *v7;
  int v8;
  int v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v12)) > _g4_s1 ? (20u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v3 = *(uint32_t *)(a3 + 16);
  if ( v3 != 0 && *(uint32_t *)(v3 + 16) != 0 )
  {
    v4 = (uint32_t *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
    v5 = (int)(uintptr_t)(BIO_f_asn1());
    v6 = BIO_new(v5);
    v7 = BIO_push(v6, a1);
    if ( v6 != nullptr
      && v4 != nullptr
      && v7 != nullptr
      && (v11 = v7,
          BIO_asn1_set_prefix(v6, sub_1A478B0, sub_1A47750),
          BIO_asn1_set_suffix(v6, sub_1A477B0, sub_1A47970),
          v12 = v11,
          v13 = 0,
          v14 = 0,
          (*(int (**)(int, int *, int, uint32_t **))(v3 + 16))(10, &a2, a3, &v12) > 0) )
    {
      v10 = a2;
      v4[3] = (uint32_t)(uintptr_t)(v11);
      *v4 = v10;
      v4[1] = a3;
      v4[2] = v13;
      v4[4] = v14;
      BIO_ctrl(v6, 153, 0, (int)(uintptr_t)(v4));
      return v13;
    }
    else
    {
      if ( v6 != nullptr )
        BIO_free(v6);
      v8 = 0;
      if ( v4 != nullptr )
        CRYPTO_free(v4);
    }
  }
  else
  {
    v8 = 0;
    ERR_put_error(13, 208, 202, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: BIO_f_base64  (binary VA: 0x1a48c30)
// Original: BIO_f_base64
// ----------------------------------------------------------------------------
void * BIO_f_base64()
{
  return &unk_20D00A0;
}

// ----------------------------------------------------------------------------
// Function: BIO_f_asn1  (binary VA: 0x1a49410)
// Original: BIO_f_asn1
// ----------------------------------------------------------------------------
void * BIO_f_asn1()
{
  return &unk_20D00E0;
}

// ----------------------------------------------------------------------------
// Function: BIO_asn1_set_prefix  (binary VA: 0x1a49430)
// Original: BIO_asn1_set_prefix
// ----------------------------------------------------------------------------
int BIO_asn1_set_prefix(uint32_t *a1, int a2, int a3)
{
  uint32_t v4[5];

  v4[0] = a2;
  v4[1] = a3;
  return BIO_ctrl(a1, 149, 0, (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: BIO_asn1_get_prefix  (binary VA: 0x1a49480)
// Original: BIO_asn1_get_prefix
// ----------------------------------------------------------------------------
int BIO_asn1_get_prefix(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  uint32_t v4[5];

  result = BIO_ctrl(a1, 150, 0, (int)(uintptr_t)(v4));
  if ( result > 0 )
  {
    *a2 = v4[0];
    *a3 = v4[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_asn1_set_suffix  (binary VA: 0x1a494e0)
// Original: BIO_asn1_set_suffix
// ----------------------------------------------------------------------------
int BIO_asn1_set_suffix(uint32_t *a1, int a2, int a3)
{
  uint32_t v4[5];

  v4[0] = a2;
  v4[1] = a3;
  return BIO_ctrl(a1, 151, 0, (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: BIO_asn1_get_suffix  (binary VA: 0x1a49530)
// Original: BIO_asn1_get_suffix
// ----------------------------------------------------------------------------
int BIO_asn1_get_suffix(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  uint32_t v4[5];

  result = BIO_ctrl(a1, 152, 0, (int)(uintptr_t)(v4));
  if ( result > 0 )
  {
    *a2 = v4[0];
    *a3 = v4[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default  (binary VA: 0x1b11240)
// Original: ENGINE_set_default
// ----------------------------------------------------------------------------
bool ENGINE_set_default(uint32_t *a1, int16_t a2)
{
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  if ( (a2 & 0x40) != 0 )
  {
    v5 = ENGINE_set_default_ciphers(a1);
    v2 = 0;
    if ( v5 == 0 )
      return v2;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_3:
      if ( (a2 & 1) == 0 )
        goto LABEL_4;
      goto LABEL_20;
    }
  }
  else if ( (a2 & 0x80) == 0 )
  {
    goto LABEL_3;
  }
  v6 = ENGINE_set_default_digests(a1);
  v2 = 0;
  if ( v6 == 0 )
    return v2;
  if ( (a2 & 1) != 0 )
  {
LABEL_20:
    v7 = ENGINE_set_default_RSA(a1);
    v2 = 0;
    if ( v7 == 0 )
      return v2;
  }
LABEL_4:
  if ( (a2 & 2) == 0 )
  {
    if ( (a2 & 4) == 0 )
      goto LABEL_6;
LABEL_22:
    v8 = ENGINE_set_default_DH((int)(uintptr_t)(a1));
    v2 = 0;
    if ( v8 == 0 )
      return v2;
    if ( (a2 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_24;
  }
  v4 = ENGINE_set_default_DSA((int)(uintptr_t)(a1));
  v2 = 0;
  if ( v4 == 0 )
    return v2;
  if ( (a2 & 4) != 0 )
    goto LABEL_22;
LABEL_6:
  if ( (a2 & 0x10) != 0 )
  {
LABEL_24:
    v9 = ENGINE_set_default_ECDH((int)(uintptr_t)(a1));
    v2 = 0;
    if ( v9 == 0 )
      return v2;
  }
LABEL_7:
  if ( (a2 & 0x20) == 0 || (v10 = ENGINE_set_default_ECDSA((int)(uintptr_t)(a1)), v2 = 0, v10 != 0) )
  {
    if ( (a2 & 8) == 0 || (v11 = ENGINE_set_default_RAND(a1), v2 = 0, v11 != 0) )
    {
      if ( (a2 & 0x200) == 0 || (v12 = ENGINE_set_default_pkey_meths((int)(uintptr_t)(a1)), v2 = 0, v12 != 0) )
      {
        v2 = 1;
        if ( (a2 & 0x400) != 0 )
          return ENGINE_set_default_pkey_asn1_meths((int)(uintptr_t)(a1)) != 0;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_string  (binary VA: 0x1b11400)
// Original: ENGINE_set_default_string
// ----------------------------------------------------------------------------
bool ENGINE_set_default_string(uint32_t *a1, char *a2)
{
  int v3[4];

  v3[0] = 0;
  if ( CONF_parse_list(a2, 44, 1, (int (*)(char *, int, int))sub_1B10FC0, (int)(uintptr_t)(v3)) != 0 )
    return ENGINE_set_default(a1, v3[0]);
  ERR_put_error(38, 189, 150, (int)(uintptr_t)(&unk_1B15112), 0);
  ERR_add_error_data(2, "str=", a2);
  return false;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_complete  (binary VA: 0x1b114c0)
// Original: ENGINE_register_complete
// ----------------------------------------------------------------------------
int ENGINE_register_complete(uint32_t *a1)
{
  ENGINE_register_ciphers(a1);
  ENGINE_register_digests(a1);
  ENGINE_register_RSA(a1);
  ENGINE_register_DSA((int)(uintptr_t)(a1));
  ENGINE_register_DH((int)(uintptr_t)(a1));
  ENGINE_register_ECDH((int)(uintptr_t)(a1));
  ENGINE_register_ECDSA((int)(uintptr_t)(a1));
  ENGINE_register_RAND(a1);
  ENGINE_register_pkey_meths((int)(uintptr_t)(a1));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_complete  (binary VA: 0x1b11530)
// Original: ENGINE_register_all_complete
// ----------------------------------------------------------------------------
int ENGINE_register_all_complete()
{
  uint32_t *i;

  for ( i = (uint32_t *)ENGINE_get_first(); i != nullptr; i = (uint32_t *)ENGINE_get_next(i) )
    ENGINE_register_complete(i);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_load_privkey_function  (binary VA: 0x1b11580)
// Original: ENGINE_set_load_privkey_function
// ----------------------------------------------------------------------------
int ENGINE_set_load_privkey_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 68) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_load_pubkey_function  (binary VA: 0x1b115a0)
// Original: ENGINE_set_load_pubkey_function
// ----------------------------------------------------------------------------
int ENGINE_set_load_pubkey_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 72) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_load_ssl_client_cert_function  (binary VA: 0x1b115c0)
// Original: ENGINE_set_load_ssl_client_cert_function
// ----------------------------------------------------------------------------
int ENGINE_set_load_ssl_client_cert_function(int a1, int a2)
{
  *(uint32_t *)(a1 + 76) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_load_privkey_function  (binary VA: 0x1b115e0)
// Original: ENGINE_get_load_privkey_function
// ----------------------------------------------------------------------------
int ENGINE_get_load_privkey_function(int a1)
{
  return *(uint32_t *)(a1 + 68);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_load_pubkey_function  (binary VA: 0x1b115f0)
// Original: ENGINE_get_load_pubkey_function
// ----------------------------------------------------------------------------
int ENGINE_get_load_pubkey_function(int a1)
{
  return *(uint32_t *)(a1 + 72);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ssl_client_cert_function  (binary VA: 0x1b11600)
// Original: ENGINE_get_ssl_client_cert_function
// ----------------------------------------------------------------------------
int ENGINE_get_ssl_client_cert_function(int a1)
{
  return *(uint32_t *)(a1 + 76);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_load_private_key  (binary VA: 0x1b11610)
// Original: ENGINE_load_private_key
// ----------------------------------------------------------------------------
int ENGINE_load_private_key(int a1, int a2, int a3, int a4)
{
  int (*v4)(int, int, int, int);
  int result;

  if ( a1 != 0 )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( *(uint32_t *)(a1 + 92) != 0 )
    {
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      v4 = *(int (**)(int, int, int, int))(a1 + 68);
      if ( v4 != nullptr )
      {
        result = v4(a1, a2, a3, a4);
        if ( result == 0 )
        {
          ERR_put_error(38, 150, 128, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
      else
      {
        ERR_put_error(38, 150, 125, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_put_error(38, 150, 117, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(38, 150, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_load_public_key  (binary VA: 0x1b117a0)
// Original: ENGINE_load_public_key
// ----------------------------------------------------------------------------
int ENGINE_load_public_key(int a1, int a2, int a3, int a4)
{
  int (*v4)(int, int, int, int);
  int result;

  if ( a1 != 0 )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( *(uint32_t *)(a1 + 92) != 0 )
    {
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      v4 = *(int (**)(int, int, int, int))(a1 + 72);
      if ( v4 != nullptr )
      {
        result = v4(a1, a2, a3, a4);
        if ( result == 0 )
        {
          ERR_put_error(38, 151, 129, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
      else
      {
        ERR_put_error(38, 151, 125, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_put_error(38, 151, 117, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(38, 151, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_load_ssl_client_cert  (binary VA: 0x1b11930)
// Original: ENGINE_load_ssl_client_cert
// ----------------------------------------------------------------------------
int ENGINE_load_ssl_client_cert(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int (*v8)(int, int, int, int, int, int, int, int);

  if ( a1 != 0 )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( *(uint32_t *)(a1 + 92) != 0 )
    {
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      v8 = *(int (**)(int, int, int, int, int, int, int, int))(a1 + 76);
      if ( v8 != nullptr )
      {
        return v8(a1, a2, a3, a4, a5, a6, a7, a8);
      }
      else
      {
        ERR_put_error(38, 194, 125, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_put_error(38, 194, 117, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(38, 194, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS12_parse  (binary VA: 0x1b11d20)
// Original: PKCS12_parse
// ----------------------------------------------------------------------------
int PKCS12_parse(int a1, char *a2, int *a3, int *a4, int **a5)
{
  void **v5;
  int *v6;
  int i;
  int v8;
  int v9;
  int *v10;
  int v11;
  int *v13;
  void **v14;
  void **v15;

  v5 = (void **)a3;
  if ( a1 == 0 )
  {
    ERR_put_error(35, 118, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a3 != nullptr )
    *a3 = 0;
  if ( a4 != nullptr )
    *a4 = 0;
  if ( a2 != nullptr && *a2 != 0 )
  {
    if ( PKCS12_verify_mac(a1, a2, -1) == 0 )
    {
LABEL_51:
      v11 = 0;
      ERR_put_error(35, 118, 113, (int)(uintptr_t)(&unk_1B15112), 0);
      v15 = nullptr;
LABEL_22:
      if ( v5 != nullptr && *v5 != nullptr )
        EVP_PKEY_free(*v5);
      if ( a4 != nullptr && *a4 != 0 )
        X509_free(*a4);
      if ( v11 != 0 )
        X509_free(*a4);
      if ( v15 != nullptr )
        sk_pop_free(v15, (void (*)(uint32_t))((int (*)(char))X509_free));
      return 0;
    }
  }
  else
  {
    a2 = nullptr;
    if ( PKCS12_verify_mac(a1, nullptr, 0) == 0 )
    {
      a2 = (char *)&unk_1B15112;
      if ( PKCS12_verify_mac(a1, (char *)&unk_1B15112, 0) == 0 )
        goto LABEL_51;
    }
  }
  v15 = (void **)sk_new_null();
  if ( v15 == nullptr )
  {
    ERR_put_error(35, 118, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v6 = (int *)PKCS12_unpack_authsafes(a1);
  if ( v6 == nullptr )
  {
LABEL_21:
    v11 = 0;
    ERR_put_error(35, 118, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_22;
  }
  for ( i = 0; i < sk_num((int)(uintptr_t)(v6)); ++i )
  {
    v8 = sk_value(v6, i);
    v9 = OBJ_obj2nid(*(uint32_t *)(v8 + 16));
    if ( v9 == 21 )
    {
      v10 = (int *)PKCS12_unpack_p7data(v8);
      if ( v10 == nullptr )
        goto LABEL_20;
    }
    else
    {
      if ( v9 != 26 )
        continue;
      v10 = (int *)PKCS12_unpack_p7encdata(v8, a2, 0xFFFFFFFF);
      if ( v10 == nullptr )
      {
LABEL_20:
        v5 = (void **)a3;
        sk_pop_free((void **)v6, (void (*)(uint32_t))PKCS7_free);
        goto LABEL_21;
      }
    }
    if ( sub_1B11AA0(v10, a2, a3, (int *)v15) == 0 )
    {
      v14 = (void **)v10;
      v5 = (void **)a3;
      sk_pop_free(v14, (void (*)(uint32_t))PKCS12_SAFEBAG_free);
      sk_pop_free((void **)v6, (void (*)(uint32_t))PKCS7_free);
      goto LABEL_21;
    }
    sk_pop_free((void **)v10, (void (*)(uint32_t))PKCS12_SAFEBAG_free);
  }
  v5 = (void **)a3;
  sk_pop_free((void **)v6, (void (*)(uint32_t))PKCS7_free);
  while ( 1 )
  {
    v11 = sk_pop((int *)v15);
    if ( v11 == 0 )
      break;
    if ( a3 != nullptr && a4 != nullptr && *a3 != 0 && *a4 == 0 && X509_check_private_key(v11, (uint32_t *)*a3) )
    {
      *a4 = v11;
    }
    else if ( a5 != nullptr )
    {
      v13 = *a5;
      if ( *a5 == nullptr )
      {
        v13 = (int *)(sk_new_null());
        *a5 = v13;
        if ( v13 == nullptr )
          goto LABEL_22;
      }
      if ( sk_push(v13, v11) == 0 )
        goto LABEL_22;
    }
    else
    {
      X509_free(v11);
    }
  }
  sk_pop_free(v15, (void (*)(uint32_t))((int (*)(char))X509_free));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_gen_mac  (binary VA: 0x1b12130)
// Original: PKCS12_gen_mac
// ----------------------------------------------------------------------------
int PKCS12_gen_mac(int a1, char *a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int *v6;
  int v7;
  int *v8;
  unsigned int v9;
  char *v10;
  int digestbyname;
  uint32_t *v12;
  int v13;
  int v14;
  typedef size_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20[64];
  typedef int _g4_t_v21[55];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v21)) > _g4_s5 ? (80u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  if ( OBJ_obj2nid(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 16)) == 21 )
  {
    v5 = *(uint32_t *)(a1 + 4);
    v17 = 1;
    v6 = *(int **)(v5 + 4);
    v7 = v6[2];
    v19 = *v6;
    v8 = *(int **)(v5 + 8);
    v18 = v7;
    if ( v8 != nullptr )
    {
      v17 = ASN1_INTEGER_get(v8);
      v5 = *(uint32_t *)(a1 + 4);
    }
    v9 = OBJ_obj2nid(***(uint32_t ***)v5);
    v10 = OBJ_nid2sn(v9);
    digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v10));
    v12 = (uint32_t *)digestbyname;
    if ( digestbyname != 0 )
    {
      v13 = 0;
      v14 = EVP_MD_size(digestbyname);
      if ( v14 >= 0 )
      {
        v16 = v14;
        if ( PKCS12_key_gen_asc(a2, a3, v18, v19, 3, v17, v14, v20, v12) != 0 )
        {
          HMAC_CTX_init(v21);
          HMAC_Init_ex(v21, v20, v16, v12, nullptr);
          HMAC_Update(
            (int)(uintptr_t)(v21),
            *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 20) + 8),
            **(uint32_t **)(*(uint32_t *)(a1 + 8) + 20));
          HMAC_Final((int)(uintptr_t)(v21), a4, a5);
          v13 = 1;
          HMAC_CTX_cleanup(v21);
        }
        else
        {
          ERR_put_error(35, 107, 107, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
    else
    {
      v13 = 0;
      ERR_put_error(35, 107, 118, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v13 = 0;
    ERR_put_error(35, 107, 121, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_verify_mac  (binary VA: 0x1b12390)
// Original: PKCS12_verify_mac
// ----------------------------------------------------------------------------
bool PKCS12_verify_mac(int a1, char *a2, int a3)
{
  int v3;
  bool result;
  typedef int _g4_t_v5;
  typedef int _g4_t_s1[16];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s1)) > _g4_s1 ? (16u + sizeof(_g4_t_s1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 16u);

  if ( *(uint32_t *)(a1 + 4) != 0 )
  {
    if ( PKCS12_gen_mac(a1, a2, a3, (int)(uintptr_t)(s1), &v5) != 0 )
    {
      v3 = *(uint32_t *)(**(uint32_t **)(a1 + 4) + 4);
      result = false;
      if ( *(uint32_t *)v3 == v5 )
        return memcmp(s1, *(const void **)(v3 + 8), *(uint32_t *)v3) == 0;
    }
    else
    {
      ERR_put_error(35, 126, 109, (int)(uintptr_t)(&unk_1B15112), 0);
      return false;
    }
  }
  else
  {
    ERR_put_error(35, 126, 108, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_setup_mac  (binary VA: 0x1b124b0)
// Original: PKCS12_setup_mac
// ----------------------------------------------------------------------------
int PKCS12_setup_mac(int a1, int a2, void *src, int a4, int a5)
{
  int n;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint8_t *v10;
  char ***v11;
  unsigned int v12;
  int v13;
  int v14;
  int v16;
  int v17;

  n = a4;
  v6 = PKCS12_MAC_DATA_new();
  v7 = 0;
  v8 = v6;
  *(uint32_t *)(a1 + 4) = v6;
  if ( v6 != 0 )
  {
    if ( a2 > 1 )
    {
      v9 = ASN1_STRING_type_new(2);
      *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v9);
      if ( v9 == nullptr || ASN1_INTEGER_set(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 8), a2) == 0 )
        goto LABEL_16;
      v8 = *(uint32_t *)(a1 + 4);
    }
    if ( a4 == 0 )
      n = 8;
    **(uint32_t **)(v8 + 4) = n;
    v17 = *(uint32_t *)(*(uint32_t *)(a1 + 4) + 4);
    v10 = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(v17 + 8) = (uint32_t)(uintptr_t)(v10);
    if ( v10 != nullptr )
    {
      if ( src != nullptr )
      {
        memcpy(*(void **)(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4) + 8), src, n);
      }
      else
      {
        v16 = RAND_pseudo_bytes(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4) + 8), n);
        v7 = 0;
        if ( v16 < 0 )
          return v7;
      }
      v11 = ***(char ******)(a1 + 4);
      v12 = EVP_MD_type(a5);
      *v11 = OBJ_nid2obj(v12);
      v13 = ***(uint32_t ***)(a1 + 4);
      v14 = ASN1_TYPE_new();
      *(uint32_t *)(v13 + 4) = v14;
      if ( v14 != 0 )
      {
        v7 = 1;
        **(uint32_t **)(***(uint32_t ***)(a1 + 4) + 4) = 5;
        return v7;
      }
    }
LABEL_16:
    ERR_put_error(35, 122, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_set_mac  (binary VA: 0x1b126d0)
// Original: PKCS12_set_mac
// ----------------------------------------------------------------------------
int PKCS12_set_mac(int a1, char *a2, int a3, void *a4, int a5, int a6, void *a7)
{
  void *v7;
  int v8;
  int result;
  typedef size_t _g4_t_v10;
  typedef char _g4_t_s[64];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s)) > _g4_s1 ? (16u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  v7 = a7;
  if ( a7 == nullptr )
    v7 = EVP_sha1();
  if ( PKCS12_setup_mac(a1, a6, a4, a5, (int)(uintptr_t)(v7)) != 0 )
  {
    if ( PKCS12_gen_mac(a1, a2, a3, (int)(uintptr_t)(s), &v10) != 0 )
    {
      v8 = ASN1_STRING_set(*(uint32_t *)(**(uint32_t **)(a1 + 4) + 4), s, v10);
      result = 1;
      if ( v8 == 0 )
      {
        ERR_put_error(35, 123, 111, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      ERR_put_error(35, 123, 109, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(35, 123, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RAND_load_file  (binary VA: 0x1b12860)
// Original: RAND_load_file
// ----------------------------------------------------------------------------
int RAND_load_file(char *filename, size_t n)
{
  int v2;
  int v4;
  int i;
  size_t v6;
  signed int v7;
  struct stat buf;
  typedef signed int _g4_t_v8;
  typedef FILE *_g4_t_stream;
  typedef uint8_t _g4_t_v11[1052];
  enum : size_t {
    _g4_s0 = 1232u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_stream)) > _g4_s1 ? (12u + sizeof(_g4_t_stream)) : _g4_s1,
    _g4_s3 = (112u + sizeof(_g4_t_v11)) > _g4_s2 ? (112u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 112u);

  v2 = n;
  if ( filename == nullptr )
    return 0;
  if ( stat(filename, &buf) < 0 )
    return 0;
  RAND_add((int)(uintptr_t)(&buf), 96, 0);
  if ( n == 0 )
    return 0;
  stream = fopen(filename, "rb");
  if ( stream == nullptr )
    return 0;
  if ( (buf.st_mode & 0x6000) != 0 )
  {
    if ( n == -1 )
      v2 = 2048;
    setvbuf(stream, nullptr, 2, 0);
  }
  v4 = 0;
  if ( v2 > 0 )
    goto LABEL_13;
LABEL_18:
  v6 = 1024;
  for ( i = 1024; ; v6 = i )
  {
    v7 = fread(v11, 1u, v6, stream);
    if ( v7 <= 0 )
      break;
    v8 = v7;
    RAND_add((int)(uintptr_t)(v11), i, COERCE__INT64((double)v7));
    v4 += v8;
    if ( v2 <= 0 )
      goto LABEL_18;
    v2 -= i;
    if ( v2 <= 0 )
      break;
LABEL_13:
    i = 1024;
    if ( v2 <= 1024 )
      i = v2;
  }
  fclose(stream);
  OPENSSL_cleanse(v11, 0x400u);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: RAND_write_file  (binary VA: 0x1b129e0)
// Original: RAND_write_file
// ----------------------------------------------------------------------------
int RAND_write_file(char *filename)
{
  int v1;
  FILE *s;
  int result;
  int v4;
  struct stat buf;
  typedef signed int _g4_t_v5;
  typedef uint8_t _g4_t_ptr[1036];
  enum : size_t {
    _g4_s0 = 1232u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (112u + sizeof(_g4_t_ptr)) > _g4_s1 ? (112u + sizeof(_g4_t_ptr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 112u);

  if ( stat(filename, &buf) != -1 )
  {
    v1 = buf.st_mode & 0xF000;
    if ( v1 == 0x2000 || v1 == 24576 )
      return 1;
  }
  s = fopen(filename, "wb");
  result = 0;
  if ( s != nullptr )
  {
    chmod(filename, 0x180u);
    v4 = RAND_bytes((int)(uintptr_t)(ptr), 1024);
    v5 = fwrite(ptr, 1u, 0x400u, s);
    fclose(s);
    OPENSSL_cleanse(ptr, 0x400u);
    result = -1;
    if ( v4 > 0 )
    {
      result = 0;
      if ( v5 >= 0 )
        return v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RAND_file_name  (binary VA: 0x1b12b10)
// Original: RAND_file_name
// ----------------------------------------------------------------------------
char * RAND_file_name(char *a1, unsigned int a2)
{
  char *v2;
  char *s;
  char *v5;

  v2 = a1;
  s = nullptr;
  if ( OPENSSL_issetugid() == 0 && (v5 = getenv("RANDFILE"), s = v5, v5 != nullptr) && *v5 != 0 && strlen(v5) + 1 < a2 )
  {
    if ( a2 <= BUF_strlcpy(a1, s, a2) )
      return nullptr;
  }
  else
  {
    if ( OPENSSL_issetugid() == 0 )
      s = getenv("HOME");
    if ( s != nullptr && *s != 0 && a2 > strlen(s) + 6 )
    {
      BUF_strlcpy(a1, s, a2);
      BUF_strlcat(a1, "/", a2);
      BUF_strlcat(a1, ".rnd", a2);
    }
    else
    {
      *a1 = 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_verify_cert_error_string  (binary VA: 0x1b12c40)
// Original: X509_verify_cert_error_string
// ----------------------------------------------------------------------------
const char * X509_verify_cert_error_string(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "ok";
      break;
    case 2:
      result = "unable to get issuer certificate";
      break;
    case 3:
      result = "unable to get certificate CRL";
      break;
    case 4:
      result = "unable to decrypt certificate's signature";
      break;
    case 5:
      result = "unable to decrypt CRL's signature";
      break;
    case 6:
      result = "unable to decode issuer public key";
      break;
    case 7:
      result = "certificate signature failure";
      break;
    case 8:
      result = "CRL signature failure";
      break;
    case 9:
      result = "certificate is not yet valid";
      break;
    case 10:
      result = "certificate has expired";
      break;
    case 11:
      result = "CRL is not yet valid";
      break;
    case 12:
      result = "CRL has expired";
      break;
    case 13:
      result = "format error in certificate's notBefore field";
      break;
    case 14:
      result = "format error in certificate's notAfter field";
      break;
    case 15:
      result = "format error in CRL's lastUpdate field";
      break;
    case 16:
      result = "format error in CRL's nextUpdate field";
      break;
    case 17:
      result = "out of memory";
      break;
    case 18:
      result = "self signed certificate";
      break;
    case 19:
      result = "self signed certificate in certificate chain";
      break;
    case 20:
      result = "unable to get local issuer certificate";
      break;
    case 21:
      result = "unable to verify the first certificate";
      break;
    case 22:
      result = "certificate chain too long";
      break;
    case 23:
      result = "certificate revoked";
      break;
    case 24:
      result = "invalid CA certificate";
      break;
    case 25:
      result = "path length constraint exceeded";
      break;
    case 26:
      result = "unsupported certificate purpose";
      break;
    case 27:
      result = "certificate not trusted";
      break;
    case 28:
      result = "certificate rejected";
      break;
    case 29:
      result = "subject issuer mismatch";
      break;
    case 30:
      result = "authority and subject key identifier mismatch";
      break;
    case 31:
      result = "authority and issuer serial number mismatch";
      break;
    case 32:
      result = "key usage does not include certificate signing";
      break;
    case 33:
      result = "unable to get CRL issuer certificate";
      break;
    case 34:
      result = "unhandled critical extension";
      break;
    case 35:
      result = "key usage does not include CRL signing";
      break;
    case 36:
      result = "unhandled critical CRL extension";
      break;
    case 37:
      result = "invalid non-CA certificate (has CA markings)";
      break;
    case 38:
      result = "proxy path length constraint exceeded";
      break;
    case 39:
      result = "key usage does not include digital signature";
      break;
    case 40:
      result = "proxy certificates not allowed, please set the appropriate flag";
      break;
    case 41:
      result = "invalid or inconsistent certificate extension";
      break;
    case 42:
      result = "invalid or inconsistent certificate policy extension";
      break;
    case 43:
      result = "no explicit policy";
      break;
    case 44:
      result = "Different CRL scope";
      break;
    case 45:
      result = "Unsupported extension feature";
      break;
    case 46:
      result = "RFC 3779 resource not subset of parent's resources";
      break;
    case 47:
      result = "permitted subtree violation";
      break;
    case 48:
      result = "excluded subtree violation";
      break;
    case 49:
      result = "name constraints minimum and maximum not supported";
      break;
    case 50:
      result = "application verification failure";
      break;
    case 51:
      result = "unsupported name constraint type";
      break;
    case 52:
      result = "unsupported or invalid name constraint syntax";
      break;
    case 53:
      result = "unsupported or invalid name syntax";
      break;
    case 54:
      result = "CRL path validation error";
      break;
    default:
      BIO_snprintf(&unk_2143080, 100, "error number %ld", a1);
      result = (const char *)&unk_2143080;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_add_localkeyid  (binary VA: 0x1b12f50)
// Original: PKCS12_add_localkeyid
// ----------------------------------------------------------------------------
bool PKCS12_add_localkeyid(int a1, char *a2, size_t a3)
{
  return X509at_add1_attr_by_NID((int **)(a1 + 8), 0x9Du, 4, a2, a3) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS8_add_keyusage  (binary VA: 0x1b12fa0)
// Original: PKCS8_add_keyusage
// ----------------------------------------------------------------------------
bool PKCS8_add_keyusage(int a1, char a2)
{
  char v3[13];

  v3[0] = a2;
  return X509at_add1_attr_by_NID((int **)(a1 + 16), 0x53u, 3, v3, 1u) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_add_friendlyname_asc  (binary VA: 0x1b13000)
// Original: PKCS12_add_friendlyname_asc
// ----------------------------------------------------------------------------
bool PKCS12_add_friendlyname_asc(int a1, char *a2, size_t a3)
{
  return X509at_add1_attr_by_NID((int **)(a1 + 8), 0x9Cu, 4097, a2, a3) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_add_friendlyname_uni  (binary VA: 0x1b13050)
// Original: PKCS12_add_friendlyname_uni
// ----------------------------------------------------------------------------
bool PKCS12_add_friendlyname_uni(int a1, char *a2, size_t a3)
{
  return X509at_add1_attr_by_NID((int **)(a1 + 8), 0x9Cu, 4098, a2, a3) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_add_CSPName_asc  (binary VA: 0x1b130a0)
// Original: PKCS12_add_CSPName_asc
// ----------------------------------------------------------------------------
bool PKCS12_add_CSPName_asc(int a1, char *a2, size_t a3)
{
  return X509at_add1_attr_by_NID((int **)(a1 + 8), 0x1A1u, 4097, a2, a3) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_get_attr_gen  (binary VA: 0x1b130f0)
// Original: PKCS12_get_attr_gen
// ----------------------------------------------------------------------------
int PKCS12_get_attr_gen(int *a1, int a2)
{
  int i;
  int *v3;
  int result;
  int v5;

  if ( a1 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a1)); ++i )
    {
      v3 = (int *)sk_value(a1, i);
      if ( OBJ_obj2nid(*v3) == a2 )
      {
        v5 = sk_num(v3[2]);
        result = 0;
        if ( v5 != 0 )
          return sk_value((int *)v3[2], 0);
        return result;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_get_friendlyname  (binary VA: 0x1b13180)
// Original: PKCS12_get_friendlyname
// ----------------------------------------------------------------------------
uint8_t * PKCS12_get_friendlyname(int a1)
{
  int attr_gen;
  uint8_t *result;

  attr_gen = PKCS12_get_attr_gen(*(int **)(a1 + 8), 156);
  result = nullptr;
  if ( attr_gen != 0 && *(uint32_t *)attr_gen == 30 )
    return OPENSSL_uni2asc(*(uint32_t *)(*(uint32_t *)(attr_gen + 4) + 8), **(uint32_t **)(attr_gen + 4));
  return result;
}


