#include "Core/Utils/DecompTypes.h"
#include "openssl_crypto_ssl_part01.h"

// ----------------------------------------------------------------------------
// Function: ssl3_do_write  (binary VA: 0x12e6b00)
// Original: ssl3_do_write
// ----------------------------------------------------------------------------
int ssl3_do_write(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  void (*v6)(int, uint32_t, int, uint32_t, int, uint32_t *, uint32_t);

  v2 = ssl3_write_bytes(a1, a2, a1[18] + *(uint32_t *)(a1[15] + 4), a1[17]);
  v3 = v2;
  if ( v2 < 0 )
    return -1;
  if ( a2 == 22 )
    ssl3_finish_mac(a1, a1[18] + *(uint32_t *)(a1[15] + 4), v2);
  v4 = a1[17];
  if ( v4 == v3 )
  {
    v6 = (void (*)(int, uint32_t, int, uint32_t, int, uint32_t *, uint32_t))a1[25];
    result = 1;
    if ( v6 != nullptr )
    {
      v6(1, *a1, a2, *(uint32_t *)(a1[15] + 4), a1[18] + v3, a1, a1[26]);
      return 1;
    }
  }
  else
  {
    a1[18] += v3;
    a1[17] = v4 - v3;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_finished  (binary VA: 0x12e6c00)
// Original: ssl3_send_finished
// ----------------------------------------------------------------------------
int ssl3_send_finished(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  uint8_t *v6;
  signed int n;

  if ( a1[13] == a2 )
  {
    v6 = *(uint8_t **)(a1[15] + 4);
    n = (*(int (**)(uint32_t *, int, int, int))(*(uint32_t *)(a1[2] + 100) + 20))(a1, a4, a5, a1[22] + 564);
    *(uint32_t *)(a1[22] + 692) = n;
    memcpy(v6 + 4, (const void *)(a1[22] + 564), n);
    if ( a1[1] == 4096 )
    {
      if ( n > 64 )
        OpenSSLDie(&unk_1B15112, 0, "i <= EVP_MAX_MD_SIZE");
      memcpy((void *)(a1[22] + 916), (const void *)(a1[22] + 564), n);
      *(uint8_t *)(a1[22] + 980) = n;
    }
    else
    {
      if ( n > 64 )
        OpenSSLDie(&unk_1B15112, 0, "i <= EVP_MAX_MD_SIZE");
      memcpy((void *)(a1[22] + 981), (const void *)(a1[22] + 564), n);
      *(uint8_t *)(a1[22] + 1045) = n;
    }
    *v6 = 20;
    v6[1] = BYTE2(n);
    v6[2] = BYTE1(n);
    v6[3] = n;
    a1[17] = n + 4;
    a1[18] = 0;
    a1[13] = a3;
  }
  return ssl3_do_write(a1, 22);
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_finished  (binary VA: 0x12e6da0)
// Original: ssl3_get_finished
// ----------------------------------------------------------------------------
int ssl3_get_finished(int a1, int a2, int a3)
{
  int result;
  int v4;
  size_t *v5;
  signed int n;
  int v7;
  typedef void *_g4_t_src;
  typedef uint32_t _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_src)) > _g4_s0 ? (12u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  result = (*(int (**)(int, int, int, int, int, uint32_t *))(*(uint32_t *)(a1 + 8) + 48))(a1, a2, a3, 20, 64, v9);
  if ( v9[0] != 0 )
  {
    v4 = *(uint32_t *)(a1 + 88);
    if ( *(uint32_t *)(v4 + 384) == 0 )
    {
      ERR_put_error(20, 140, 154, &unk_1B15112, 0);
      v7 = 10;
      goto LABEL_5;
    }
    *(uint32_t *)(v4 + 384) = 0;
    v5 = *(size_t **)(a1 + 88);
    n = v5[206];
    if ( n != result )
    {
      ERR_put_error(20, 140, 111, &unk_1B15112, 0);
      v7 = 50;
LABEL_5:
      ssl3_send_alert(a1, 2, v7);
      return 0;
    }
    src = v5 + 174;
    if ( memcmp(*(const void **)(a1 + 64), v5 + 174, v5[206]) != 0 )
    {
      ERR_put_error(20, 140, 149, &unk_1B15112, 0);
      v7 = 51;
      goto LABEL_5;
    }
    if ( *(uint32_t *)(a1 + 4) == 0x2000 )
    {
      if ( n > 64 )
        OpenSSLDie(&unk_1B15112, 0, "i <= EVP_MAX_MD_SIZE");
      memcpy(v5 + 229, src, n);
      *(uint8_t *)(*(uint32_t *)(a1 + 88) + 980) = n;
      return 1;
    }
    else
    {
      if ( n > 64 )
        OpenSSLDie(&unk_1B15112, 0, "i <= EVP_MAX_MD_SIZE");
      memcpy((char *)v5 + 981, src, n);
      *(uint8_t *)(*(uint32_t *)(a1 + 88) + 1045) = n;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_change_cipher_spec  (binary VA: 0x12e6ff0)
// Original: ssl3_send_change_cipher_spec
// ----------------------------------------------------------------------------
int ssl3_send_change_cipher_spec(uint32_t *a1, int a2, int a3)
{
  if ( a1[13] == a2 )
  {
    **(uint8_t **)(a1[15] + 4) = 1;
    a1[17] = 1;
    a1[18] = 0;
    a1[13] = a3;
  }
  return ssl3_do_write(a1, 20);
}

// ----------------------------------------------------------------------------
// Function: ssl3_output_cert_chain  (binary VA: 0x12e7050)
// Original: ssl3_output_cert_chain
// ----------------------------------------------------------------------------
int ssl3_output_cert_chain(int a1, int a2)
{
  bool v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t _g4_t_v24[84];
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v18)) > _g4_s1 ? (0u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v20)) > _g4_s3 ? (4u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v21)) > _g4_s4 ? (8u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v22)) > _g4_s5 ? (12u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v23)) > _g4_s6 ? (20u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v25)) > _g4_s8 ? (108u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);

  v2 = true;
  v3 = a1;
  if ( (*(uint8_t *)(a1 + 260) & 8) == 0 )
  {
    v3 = a1;
    v2 = *(uint32_t *)(*(uint32_t *)(a1 + 228) + 148) != 0;
  }
  v4 = *(uint32_t *)(v3 + 60);
  if ( BUF_MEM_grow_clean(v4, 10) != 0 )
  {
    if ( a2 == 0 )
    {
      v6 = 7;
LABEL_8:
      v21 = v4;
      v8 = 0;
      while ( v8 < sk_num(*(uint32_t *)(*(uint32_t *)(a1 + 228) + 148)) )
      {
        v18 = sk_value(*(uint32_t *)(*(uint32_t *)(a1 + 228) + 148), v8);
        v9 = i2d_X509(v18, 0);
        v19 = v9 + v6 + 3;
        v10 = v9;
        if ( BUF_MEM_grow_clean(v21, v19) == 0 )
          goto LABEL_21;
        ++v8;
        v23 = (uint8_t *)(*(uint32_t *)(v21 + 4) + v6);
        *v23 = BYTE2(v10);
        v23[1] = BYTE1(v10);
        v23[2] = v10;
        v23 += 3;
        i2d_X509(v18, &v23);
        v6 = v19;
      }
      v11 = *(uint8_t **)(v21 + 4);
      v11[4] = (unsigned int)(v6 - 7) >> 16;
      v11[6] = v6 - 7;
      v11[5] = (uint16_t)(v6 - 7) >> 8;
      v12 = *(uint8_t **)(v21 + 4);
      v12[1] = (unsigned int)(v6 - 4) >> 16;
      *v12 = 11;
      v12[2] = (uint16_t)(v6 - 4) >> 8;
      v12[3] = v6 - 4;
      return v6;
    }
    if ( v2 )
    {
      v5 = i2d_X509(a2, 0);
      v6 = v5 + 10;
      v17 = v5;
      if ( BUF_MEM_grow_clean(v4, v5 + 10) != 0 )
      {
        v7 = *(uint8_t **)(v4 + 4);
        v7[7] = BYTE2(v17);
        v7[9] = v17;
        v7[8] = BYTE1(v17);
        v23 = v7 + 10;
        i2d_X509(a2, &v23);
        goto LABEL_8;
      }
LABEL_21:
      ERR_put_error(20, 296, 7, &unk_1B15112, 0);
      return 0;
    }
    else
    {
      if ( X509_STORE_CTX_init(v24, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 12), a2, 0) != 0 )
      {
        X509_verify_cert(v24);
        ERR_clear_error();
        v22 = v4;
        v20 = 7;
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= sk_num(v25) )
          {
            v4 = v22;
            v6 = v20;
            X509_STORE_CTX_cleanup(v24);
            goto LABEL_8;
          }
          v15 = sk_value(v25, v14);
          v16 = i2d_X509(v15, 0);
          if ( BUF_MEM_grow_clean(v22, v16 + v20 + 3) == 0 )
            break;
          ++v14;
          v23 = (uint8_t *)(*(uint32_t *)(v22 + 4) + v20);
          *v23 = BYTE2(v16);
          v23[1] = BYTE1(v16);
          v23[2] = v16;
          v23 += 3;
          i2d_X509(v15, &v23);
          v20 += v16 + 3;
        }
        v6 = 0;
        ERR_put_error(20, 296, 7, &unk_1B15112, 0);
        X509_STORE_CTX_cleanup(v24);
        return v6;
      }
      ERR_put_error(20, 147, 11, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(20, 147, 7, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_message  (binary VA: 0x12e7480)
// Original: ssl3_get_message
// ----------------------------------------------------------------------------
int ssl3_get_message(uint32_t *a1, int a2, int a3, int a4, unsigned int a5, uint32_t *a6)
{
  int v6;
  int result;
  int v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  void (*v13)(uint32_t, uint32_t, int, uint32_t, int, uint32_t *, uint32_t);
  int i;
  int v15;
  void (*v16)(uint32_t, uint32_t, int, uint8_t *, int, uint32_t *, uint32_t);
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v6 = a1[22];
  if ( *(uint32_t *)(v6 + 852) != 0 )
  {
    *(uint32_t *)(v6 + 852) = 0;
    if ( a4 >= 0 && *(uint32_t *)(a1[22] + 832) != a4 )
      goto LABEL_39;
    *a6 = 1;
    a1[16] = *(uint32_t *)(a1[15] + 4) + 4;
    result = *(uint32_t *)(a1[22] + 828);
    a1[17] = result;
    return result;
  }
  v8 = a1[15];
  v21 = a1[13];
  v9 = *(uint8_t **)(v8 + 4);
  if ( v21 != a2 )
  {
    v10 = a1[17];
    v11 = a1[16];
    v20 = v10;
LABEL_7:
    v12 = *(uint32_t *)(v6 + 828) - v20;
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        result = (*(int (**)(uint32_t *, int, int, int, uint32_t))(a1[2] + 52))(a1, 22, v11 + v10, v12, 0);
        if ( result <= 0 )
          break;
        v12 -= result;
        v10 = result + a1[17];
        a1[17] = v10;
        if ( v12 <= 0 )
        {
          v8 = a1[15];
          goto LABEL_13;
        }
      }
LABEL_11:
      a1[6] = 3;
      *a6 = 0;
    }
    else
    {
LABEL_13:
      ssl3_finish_mac(a1, *(uint32_t *)(v8 + 4), v10 + 4);
      v13 = (void (*)(uint32_t, uint32_t, int, uint32_t, int, uint32_t *, uint32_t))a1[25];
      if ( v13 != nullptr )
        v13(0, *a1, 22, *(uint32_t *)(a1[15] + 4), a1[17] + 4, a1, a1[26]);
      *a6 = 1;
      return a1[17];
    }
    return result;
  }
LABEL_17:
  for ( i = a1[17]; ; a1[17] = i )
  {
    if ( i <= 3 )
      goto LABEL_26;
    LOBYTE(v15) = *v9;
    if ( a1[9] != 0 || (uint8_t)v15 != 0 || v9[1] != 0 || v9[2] != 0 || v9[3] != 0 )
      break;
    v16 = (void (*)(uint32_t, uint32_t, int, uint8_t *, int, uint32_t *, uint32_t))a1[25];
    a1[17] = 0;
    if ( v16 != nullptr )
    {
      v16(0, *a1, 22, v9, 4, a1, a1[26]);
      goto LABEL_17;
    }
    i = 0;
LABEL_26:
    result = (*(int (**)(uint32_t *, int, uint8_t *, int, uint32_t))(a1[2] + 52))(a1, 22, &v9[i], 4 - i, 0);
    if ( result <= 0 )
      goto LABEL_11;
    i = a1[17] + result;
  }
  if ( a4 < 0 )
  {
    if ( (uint8_t)v15 == 1 && v21 == 8576 )
    {
      v15 = 1;
      if ( a3 == 8577 )
      {
        ssl3_init_finished_mac(a1);
        v15 = *v9;
      }
    }
    else
    {
      v15 = (uint8_t)v15;
    }
LABEL_30:
    *(uint32_t *)(a1[22] + 832) = v15;
    v17 = v9[3] | (v9[2] << 8) | (v9[1] << 16);
    if ( v17 > a5 )
    {
      ERR_put_error(20, 142, 152, &unk_1B15112, 0);
      v19 = 47;
      goto LABEL_40;
    }
    if ( v17 != 0 && BUF_MEM_grow_clean(a1[15], v17 + 4) == 0 )
    {
      ERR_put_error(20, 142, 7, &unk_1B15112, 0);
      goto LABEL_35;
    }
    v20 = 0;
    *(uint32_t *)(a1[22] + 828) = v17;
    v8 = a1[15];
    a1[13] = a3;
    v6 = a1[22];
    v10 = 0;
    v18 = *(uint32_t *)(v8 + 4);
    a1[17] = 0;
    v11 = v18 + 4;
    a1[16] = v11;
    goto LABEL_7;
  }
  v15 = (uint8_t)v15;
  if ( (uint8_t)v15 == a4 )
    goto LABEL_30;
LABEL_39:
  ERR_put_error(20, 142, 244, &unk_1B15112, 0);
  v19 = 10;
LABEL_40:
  ssl3_send_alert(a1, 2, v19);
LABEL_35:
  *a6 = 0;
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ssl_cert_type  (binary VA: 0x12e7820)
// Original: ssl_cert_type
// ----------------------------------------------------------------------------
char ssl_cert_type(int a1, int *a2)
{
  int *pubkey;
  int v3;
  char result;
  char v5;

  pubkey = a2;
  if ( a2 == nullptr )
  {
    pubkey = (int *)X509_get_pubkey(a1);
    if ( pubkey == nullptr )
    {
      result = -1;
LABEL_14:
      v5 = result;
      EVP_PKEY_free(pubkey);
      return v5;
    }
  }
  v3 = *pubkey;
  result = 0;
  if ( *pubkey != 6 )
  {
    result = 2;
    if ( v3 != 116 )
    {
      result = 5;
      if ( v3 != 408 )
      {
        if ( v3 == 850 || v3 == 812 )
        {
          result = 6;
        }
        else if ( v3 == 851 || (result = -1, v3 == 811) )
        {
          result = 7;
        }
      }
    }
  }
  if ( a2 == nullptr )
    goto LABEL_14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_verify_alarm_type  (binary VA: 0x12e78e0)
// Original: ssl_verify_alarm_type
// ----------------------------------------------------------------------------
int ssl_verify_alarm_type(int a1)
{
  int result;

  result = 46;
  if ( (unsigned int)(a1 - 2) <= 0x30 )
    return byte_1CFAB00[a1 - 2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_setup_read_buffer  (binary VA: 0x12e7910)
// Original: ssl3_setup_read_buffer
// ----------------------------------------------------------------------------
int ssl3_setup_read_buffer(uint32_t *a1)
{
  int v1;
  int v2;
  size_t v3;
  bool v4;
  int v5;
  int v6;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v13;
  uint32_t *v14;

  v1 = SSL_version(a1);
  v2 = 33104;
  v3 = 16720;
  if ( v1 != 65279 )
  {
    v4 = SSL_version(a1) == 256;
    v2 = 8 * v4 + 33096;
    v3 = 8 * v4 + 16712;
  }
  v5 = a1[22];
  v6 = *(uint32_t *)(v5 + 236);
  if ( v6 == 0 )
  {
    v8 = a1[64];
    if ( (v8 & 0x20) != 0 )
    {
      *(uint32_t *)(v5 + 232) = 1;
      v3 = v2;
      v8 = a1[64];
    }
    v13 = a1[57];
    if ( (v8 & 0x20000) == 0 )
      v3 += 1024;
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    v9 = *(uint32_t **)(v13 + 352);
    if ( v9 != nullptr && v3 == *v9 && (v11 = (uint32_t *)v9[2]) != nullptr )
    {
      v9[2] = *v11;
      if ( v9[1]-- == 1 )
        *v9 = 0;
      v14 = v11;
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      v10 = (int)(uintptr_t)(v14);
    }
    else
    {
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      v10 = (int)(uintptr_t)(CRYPTO_malloc(v3, (int)(uintptr_t)(&unk_1B15112), 0));
      if ( v10 == 0 )
      {
        ERR_put_error(20, 156, 65, &unk_1B15112, 0);
        return 0;
      }
    }
    *(uint32_t *)(a1[22] + 236) = v10;
    *(uint32_t *)(a1[22] + 240) = v3;
    v6 = *(uint32_t *)(a1[22] + 236);
  }
  a1[19] = v6;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_setup_write_buffer  (binary VA: 0x12e7ae0)
// Original: ssl3_setup_write_buffer
// ----------------------------------------------------------------------------
int ssl3_setup_write_buffer(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  bool v4;
  int result;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  size_t v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v15;
  uint32_t *v16;

  v1 = SSL_version(a1);
  v2 = 97;
  v3 = 14;
  if ( v1 != 65279 )
  {
    v4 = SSL_version(a1) == 256;
    v2 = 9 * v4 + 88;
    v3 = 9 * v4 + 5;
  }
  result = 1;
  if ( *(uint32_t *)(a1[22] + 252) == 0 )
  {
    v6 = a1[69] + v3;
    v7 = a1[64];
    v8 = v6 + 83;
    v9 = v6 + 1107;
    if ( (v7 & 0x20000) == 0 )
      v8 = v9;
    v10 = v8 + v2;
    if ( (v7 & 0x800) == 0 )
      v8 = v10;
    v15 = a1[57];
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    v11 = *(uint32_t **)(v15 + 348);
    if ( v11 != nullptr && v8 == *v11 && (v13 = (uint32_t *)v11[2]) != nullptr )
    {
      v11[2] = *v13;
      if ( v11[1]-- == 1 )
        *v11 = 0;
      v16 = v13;
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      v12 = (int)(uintptr_t)(v16);
    }
    else
    {
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      v12 = (int)(uintptr_t)(CRYPTO_malloc(v8, (int)(uintptr_t)(&unk_1B15112), 0));
      if ( v12 == 0 )
      {
        ERR_put_error(20, 291, 65, &unk_1B15112, 0);
        return 0;
      }
    }
    *(uint32_t *)(a1[22] + 252) = v12;
    *(uint32_t *)(a1[22] + 256) = v8;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_setup_buffers  (binary VA: 0x12e7ca0)
// Original: ssl3_setup_buffers
// ----------------------------------------------------------------------------
bool ssl3_setup_buffers(uint32_t *a1)
{
  int buffer;
  int v2;

  buffer = ssl3_setup_read_buffer(a1);
  v2 = 0;
  if ( buffer != 0 )
    return ssl3_setup_write_buffer(a1) != 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ssl3_release_write_buffer  (binary VA: 0x12e7cf0)
// Original: ssl3_release_write_buffer
// ----------------------------------------------------------------------------
int ssl3_release_write_buffer(int a1)
{
  int v1;
  unsigned int *v2;
  unsigned int v3;
  unsigned int *v4;
  unsigned int v6;
  int v7;

  v1 = *(uint32_t *)(a1 + 88);
  v2 = *(unsigned int **)(v1 + 252);
  if ( v2 != nullptr )
  {
    v3 = *(uint32_t *)(v1 + 256);
    v7 = *(uint32_t *)(a1 + 228);
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    v4 = *(unsigned int **)(v7 + 348);
    if ( v4 != nullptr && (v3 == *v4 || *v4 == 0) && v3 > 3 && v4[1] < *(uint32_t *)(v7 + 344) )
    {
      v6 = v4[2];
      *v4 = v3;
      *v2 = v6;
      v4[2] = (unsigned int)(uintptr_t)(v2);
      ++v4[1];
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
    }
    else
    {
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      CRYPTO_free(v2);
    }
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 252) = 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_release_read_buffer  (binary VA: 0x12e7e20)
// Original: ssl3_release_read_buffer
// ----------------------------------------------------------------------------
int ssl3_release_read_buffer(int a1)
{
  int v1;
  unsigned int *v2;
  unsigned int v3;
  unsigned int *v4;
  unsigned int v6;
  int v7;

  v1 = *(uint32_t *)(a1 + 88);
  v2 = *(unsigned int **)(v1 + 236);
  if ( v2 != nullptr )
  {
    v3 = *(uint32_t *)(v1 + 240);
    v7 = *(uint32_t *)(a1 + 228);
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    v4 = *(unsigned int **)(v7 + 352);
    if ( v4 != nullptr && (v3 == *v4 || *v4 == 0) && v3 > 3 && v4[1] < *(uint32_t *)(v7 + 344) )
    {
      v6 = v4[2];
      *v4 = v3;
      *v2 = v6;
      v4[2] = (unsigned int)(uintptr_t)(v2);
      ++v4[1];
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
    }
    else
    {
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      CRYPTO_free(v2);
    }
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 236) = 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_change_cipher_state  (binary VA: 0x12e7f50)
// Original: ssl3_change_cipher_state
// ----------------------------------------------------------------------------
int ssl3_change_cipher_state(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  char *v11;
  signed int n;
  int result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_src;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[24];
  typedef uint8_t _g4_t_v46[60];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v31)) > _g4_s2 ? (8u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v32)) > _g4_s3 ? (8u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v33)) > _g4_s4 ? (8u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v34)) > _g4_s5 ? (12u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v35)) > _g4_s6 ? (12u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v36)) > _g4_s7 ? (16u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v37)) > _g4_s8 ? (20u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_dest)) > _g4_s9 ? (24u + sizeof(_g4_t_dest)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v39)) > _g4_s10 ? (28u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v40)) > _g4_s11 ? (32u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_src)) > _g4_s12 ? (36u + sizeof(_g4_t_src)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v42)) > _g4_s13 ? (40u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v43)) > _g4_s14 ? (44u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v44)) > _g4_s15 ? (56u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v45)) > _g4_s16 ? (72u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v46)) > _g4_s17 ? (96u + sizeof(_g4_t_v46)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);

  v2 = *(uint32_t **)(a1 + 88);
  v3 = v2[224];
  v34 = *(uint32_t *)(v2[209] + 32);
  v37 = v2[223];
  if ( v3 == 0 )
    OpenSSLDie(&unk_1B15112, 0, "m");
  v4 = v2[227];
  v5 = 0;
  if ( v4 != 0 )
    v5 = *(uint32_t *)(v4 + 8);
  if ( (a2 & 1) != 0 )
  {
    v31 = 1;
    v36 = *(uint32_t *)(a1 + 128);
    if ( v36 != 0 )
    {
LABEL_6:
      ssl_replace_hash(a1 + 132, v3);
      if ( *(uint32_t *)(a1 + 136) != 0 )
      {
        COMP_CTX_free(*(void **)(a1 + 136));
        *(uint32_t *)(a1 + 136) = 0;
      }
      if ( v5 == 0 )
      {
        v7 = *(uint32_t **)(a1 + 88);
        goto LABEL_11;
      }
      v6 = (int)(uintptr_t)(COMP_CTX_new(v5));
      *(uint32_t *)(a1 + 136) = v6;
      if ( v6 != 0 )
      {
        v7 = *(uint32_t **)(a1 + 88);
        if ( v7[72] == 0 )
        {
          v7[72] = (uint32_t)(uintptr_t)(CRYPTO_malloc(0x4000u, (int)(uintptr_t)(&unk_1B15112), 0));
          v7 = *(uint32_t **)(a1 + 88);
          if ( v7[72] == 0 )
            goto LABEL_41;
        }
LABEL_11:
        v7[2] = 0;
        v7[3] = 0;
        v8 = *(uint32_t **)(a1 + 88);
        dest = v8 + 5;
        if ( v31 == 0 )
          goto LABEL_19;
        goto LABEL_12;
      }
LABEL_44:
      ERR_put_error(20, 129, 142, &unk_1B15112, 0);
      return 0;
    }
    v26 = (int)(uintptr_t)(CRYPTO_malloc(0x8Cu, (int)(uintptr_t)(&unk_1B15112), 0));
    *(uint32_t *)(a1 + 128) = v26;
    if ( v26 != 0 )
    {
      EVP_CIPHER_CTX_init(v26);
      v31 = 0;
      v36 = *(uint32_t *)(a1 + 128);
      goto LABEL_6;
    }
LABEL_41:
    ERR_put_error(20, 129, 65, &unk_1B15112, 0);
    return 0;
  }
  v32 = 1;
  v36 = *(uint32_t *)(a1 + 140);
  if ( v36 == 0 )
  {
    v25 = (int)(uintptr_t)(CRYPTO_malloc(0x8Cu, (int)(uintptr_t)(&unk_1B15112), 0));
    *(uint32_t *)(a1 + 140) = v25;
    if ( v25 == 0 )
      goto LABEL_41;
    EVP_CIPHER_CTX_init(v25);
    v32 = 0;
    v36 = *(uint32_t *)(a1 + 140);
  }
  ssl_replace_hash(a1 + 144, v3);
  if ( *(uint32_t *)(a1 + 148) != 0 )
  {
    COMP_CTX_free(*(void **)(a1 + 148));
    *(uint32_t *)(a1 + 148) = 0;
  }
  if ( v5 != 0 )
  {
    v9 = (int)(uintptr_t)(COMP_CTX_new(v5));
    *(uint32_t *)(a1 + 148) = v9;
    if ( v9 == 0 )
      goto LABEL_44;
  }
  v10 = *(uint32_t *)(a1 + 88);
  *(uint32_t *)(v10 + 84) = 0;
  *(uint32_t *)(v10 + 88) = 0;
  v8 = *(uint32_t **)(a1 + 88);
  dest = v8 + 24;
  if ( v32 != 0 )
  {
LABEL_12:
    EVP_CIPHER_CTX_cleanup(v36);
    v8 = *(uint32_t **)(a1 + 88);
  }
LABEL_19:
  v11 = (char *)v8[222];
  n = EVP_MD_size(v3);
  result = 0;
  if ( n < 0 )
    return result;
  v35 = v34 & 2;
  v14 = EVP_CIPHER_key_length(v37);
  v33 = v14;
  if ( v35 != 0 )
  {
    v15 = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 836);
    v16 = 5;
    if ( (*(uint8_t *)(v15 + 32) & 8) == 0 )
      v16 = (*(uint32_t *)(v15 + 20) == 1) + 7;
    if ( v16 <= v14 )
      v14 = v16;
    v33 = v14;
  }
  v17 = EVP_CIPHER_iv_length(v37);
  v18 = v17;
  if ( a2 != 33 && a2 != 18 )
  {
    src = &v11[n];
    v22 = v33 + 2 * n;
    v39 = &v11[v22];
    v23 = v17 + v33 + v22;
    v24 = *(uint32_t *)(a1 + 88);
    v40 = &v11[v23];
    v42 = v24 + 160;
    v43 = v24 + 192;
    if ( v18 + v23 <= *(uint32_t *)(v24 + 884) )
      goto LABEL_29;
LABEL_33:
    ERR_put_error(20, 129, 68, &unk_1B15112, 0);
    return 0;
  }
  src = v11;
  v39 = &v11[2 * n];
  v19 = 2 * n + 2 * v33;
  v20 = &v11[v19];
  v29 = v19 + 2 * v18;
  v21 = *(uint32_t *)(a1 + 88);
  v40 = v20;
  v42 = v21 + 192;
  v43 = v21 + 160;
  if ( v29 > *(uint32_t *)(v21 + 884) )
    goto LABEL_33;
LABEL_29:
  v30 = v18;
  EVP_MD_CTX_init(v45);
  memcpy(dest, src, n);
  if ( v35 != 0 )
  {
    v27 = (int)(uintptr_t)(EVP_md5());
    EVP_DigestInit_ex(v45, v27, 0);
    EVP_DigestUpdate(v45, v39, v33);
    EVP_DigestUpdate(v45, v42, 32);
    EVP_DigestUpdate(v45, v43, 32);
    EVP_DigestFinal_ex(v45, v46, 0);
    v39 = (char *)(v46);
    if ( v30 > 0 )
    {
      v28 = (int)(uintptr_t)(EVP_md5());
      EVP_DigestInit_ex(v45, v28, 0);
      EVP_DigestUpdate(v45, v42, 32);
      EVP_DigestUpdate(v45, v43, 32);
      EVP_DigestFinal_ex(v45, v44, 0);
      v40 = (char *)(v44);
    }
  }
  *(uint32_t *)(*(uint32_t *)(a1 + 192) + 4) = 0;
  EVP_CipherInit_ex(v36, v37, 0, (int)(uintptr_t)(v39), v40, a2 & 2);
  OPENSSL_cleanse(v46, 0x20u);
  OPENSSL_cleanse(v44, 0x10u);
  EVP_MD_CTX_cleanup(v45);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_cleanup_key_block  (binary VA: 0x12e85b0)
// Original: ssl3_cleanup_key_block
// ----------------------------------------------------------------------------
int ssl3_cleanup_key_block(int a1)
{
  int result;
  void *v2;

  result = *(uint32_t *)(a1 + 88);
  v2 = *(void **)(result + 888);
  if ( v2 != nullptr )
  {
    OPENSSL_cleanse(v2, *(uint32_t *)(result + 884));
    CRYPTO_free(*(void **)(*(uint32_t *)(a1 + 88) + 888));
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 888) = 0;
    result = *(uint32_t *)(a1 + 88);
  }
  *(uint32_t *)(result + 884) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_setup_key_block  (binary VA: 0x12e8630)
// Original: ssl3_setup_key_block
// ----------------------------------------------------------------------------
int ssl3_setup_key_block(int a1)
{
  int v1;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  __m128i v7;
  __m128i v8;
  unsigned int v9;
  __m128i v10;
  unsigned int v11;
  unsigned int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef signed int _g4_t_v18;
  typedef size_t _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[28];
  typedef uint8_t _g4_t_v25[20];
  typedef uint8_t _g4_t_v26[24];
  typedef uint8_t _g4_t_v27[36];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v19)) > _g4_s1 ? (36u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v20)) > _g4_s2 ? (44u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v21)) > _g4_s3 ? (52u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v22)) > _g4_s4 ? (56u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v23)) > _g4_s5 ? (60u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v24)) > _g4_s6 ? (64u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v25)) > _g4_s7 ? (92u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v26)) > _g4_s8 ? (112u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v27)) > _g4_s9 ? (136u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);

  v1 = 1;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 88) + 884) != 0 )
    return v1;
  if ( ssl_cipher_get_evp(*(uint32_t *)(a1 + 192), &v21, &v22, 0, 0, &v23) != 0 )
  {
    v1 = 0;
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 892) = v21;
    v3 = v22;
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 896) = v22;
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 908) = v23;
    v4 = EVP_MD_size(v3);
    if ( v4 >= 0 )
    {
      v5 = EVP_CIPHER_key_length(v21) + v4;
      v18 = 2 * (EVP_CIPHER_iv_length(v21) + v5);
      ssl3_cleanup_key_block(a1);
      v20 = (char *)CRYPTO_malloc(v18, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v20 != nullptr )
      {
        *(uint32_t *)(*(uint32_t *)(a1 + 88) + 884) = v18;
        *(uint32_t *)(*(uint32_t *)(a1 + 88) + 888) = (uint32_t)(uintptr_t)(v20);
        EVP_MD_CTX_init(v26);
        EVP_MD_CTX_init(v27);
        if ( v18 <= 0 )
        {
LABEL_29:
          v1 = 1;
          OPENSSL_cleanse(v25, 0x14u);
          EVP_MD_CTX_cleanup(v26);
          EVP_MD_CTX_cleanup(v27);
LABEL_21:
          if ( (*(uint8_t *)(a1 + 257) & 8) == 0 )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 88) + 224) = 1;
            v16 = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 180);
            if ( v16 != 0 )
            {
              v17 = *(uint32_t *)(v16 + 20);
              if ( v17 == 32 )
              {
                *(uint32_t *)(*(uint32_t *)(a1 + 88) + 224) = 0;
                v17 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 192) + 180) + 20);
              }
              if ( v17 == 4 )
                *(uint32_t *)(*(uint32_t *)(a1 + 88) + 224) = 0;
            }
          }
          return v1;
        }
        v19 = v18;
        v6 = 1;
        while ( 1 )
        {
          if ( v6 != 0 )
          {
            if ( v6 <= 0xF || 16 * (v6 >> 4) == 0 )
              break;
            v7 = _mm_cvtsi32_si128((uint8_t)(v6 + 64));
            v8 = _mm_unpacklo_epi8(v7, v7);
            v9 = 0;
            v10 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v8, v8), 0);
            do
            {
              v11 = v9++;
              *(__m128i *)&v24[16 * v11] = v10;
            }
            while ( v6 >> 4 > v9 );
            v12 = 16 * (v6 >> 4);
            if ( v12 != v6 )
            {
              v13 = v6 + 64;
              goto LABEL_15;
            }
          }
LABEL_16:
          v14 = (int)(uintptr_t)(EVP_sha1());
          EVP_DigestInit_ex(v27, v14, 0);
          EVP_DigestUpdate(v27, v24, v6);
          EVP_DigestUpdate(v27, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
          EVP_DigestUpdate(v27, *(uint32_t *)(a1 + 88) + 160, 32);
          EVP_DigestUpdate(v27, *(uint32_t *)(a1 + 88) + 192, 32);
          EVP_DigestFinal_ex(v27, v25, 0);
          v15 = (int)(uintptr_t)(EVP_md5());
          EVP_DigestInit_ex(v26, v15, 0);
          EVP_DigestUpdate(v26, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
          EVP_DigestUpdate(v26, v25, 20);
          if ( v18 >= (int)(16 * v6) )
          {
            EVP_DigestFinal_ex(v26, v20, 0);
          }
          else
          {
            EVP_DigestFinal_ex(v26, v25, 0);
            memcpy(v20, v25, v19);
          }
          v20 += 16;
          if ( v6 == ((unsigned int)(v18 - 1) >> 4) + 1 )
            goto LABEL_29;
          ++v6;
          v19 -= 16;
          if ( v6 == 17 )
          {
            v1 = 0;
            ERR_put_error(20, 238, 68, &unk_1B15112, 0);
            goto LABEL_21;
          }
        }
        v12 = 0;
        v13 = v6 + 64;
        do
LABEL_15:
          v24[v12++] = v13;
        while ( v12 < v6 );
        goto LABEL_16;
      }
      ERR_put_error(20, 157, 65, &unk_1B15112, 0);
    }
    return v1;
  }
  LOWORD(v1) = 0;
  ERR_put_error(20, 157, 138, &unk_1B15112, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_enc  (binary VA: 0x12e8b50)
// Original: ssl3_enc
// ----------------------------------------------------------------------------
int ssl3_enc(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  signed int v12;

  if ( a2 == 0 )
  {
    v2 = (uint32_t *)a1[32];
    v3 = a1[22] + 268;
    if ( v2 != nullptr )
      goto LABEL_3;
LABEL_14:
    memmove(*(void **)(v3 + 12), *(const void **)(v3 + 16), *(uint32_t *)(v3 + 4));
    *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 + 12);
    return 1;
  }
  v2 = (uint32_t *)a1[35];
  v3 = a1[22] + 304;
  if ( v2 == nullptr )
    goto LABEL_14;
LABEL_3:
  v4 = EVP_CIPHER_CTX_cipher(v2);
  if ( a1[48] == 0 || v4 == 0 )
    goto LABEL_14;
  v10 = *(uint32_t *)(v3 + 4);
  v12 = EVP_CIPHER_block_size(*v2);
  v5 = v10;
  if ( v12 == 1 || a2 == 0 )
  {
    if ( a2 != 0 )
    {
      EVP_Cipher(v2, *(uint32_t *)(v3 + 12), *(uint32_t *)(v3 + 16), v10);
      return 1;
    }
    if ( v10 == 0 || v10 % (unsigned int)v12 != 0 )
    {
      ERR_put_error(20, 134, 129, &unk_1B15112, 0);
      ssl3_send_alert(a1, 2, 21);
      return 0;
    }
  }
  else
  {
    v8 = v12 - v10 % v12;
    v9 = *(uint32_t *)(v3 + 16);
    v5 = v8 + v10;
    *(uint32_t *)(v3 + 4) += v8;
    *(uint8_t *)(v9 + v8 + v10 - 1) = v8 - 1;
  }
  v11 = v5;
  EVP_Cipher(v2, *(uint32_t *)(v3 + 12), *(uint32_t *)(v3 + 16), v5);
  if ( v12 == 1 || a2 != 0 )
    return 1;
  result = -1;
  v7 = *(uint8_t *)(*(uint32_t *)(v3 + 12) + v11 - 1) + 1;
  if ( v12 >= v7 )
  {
    *(uint32_t *)(v3 + 4) -= v7;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_free_digest_list  (binary VA: 0x12e8d60)
// Original: ssl3_free_digest_list
// ----------------------------------------------------------------------------
int ssl3_free_digest_list(int a1)
{
  int result;

  result = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 380);
  if ( result != 0 )
  {
    if ( *(uint32_t *)result != 0 )
    {
      EVP_MD_CTX_destroy(*(void **)result);
      result = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 380);
    }
    if ( *(uint32_t *)(result + 4) != 0 )
    {
      EVP_MD_CTX_destroy(*(void **)(result + 4));
      result = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 380);
    }
    if ( *(uint32_t *)(result + 8) != 0 )
    {
      EVP_MD_CTX_destroy(*(void **)(result + 8));
      result = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 380);
    }
    if ( *(uint32_t *)(result + 12) != 0 )
    {
      EVP_MD_CTX_destroy(*(void **)(result + 12));
      result = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 380);
    }
    CRYPTO_free((void *)result);
    result = *(uint32_t *)(a1 + 88);
    *(uint32_t *)(result + 380) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_init_finished_mac  (binary VA: 0x12e8e00)
// Original: ssl3_init_finished_mac
// ----------------------------------------------------------------------------
int ssl3_init_finished_mac(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 88);
  if ( *(uint32_t *)(v1 + 376) != 0 )
  {
    BIO_free(*(void **)(v1 + 376));
    v1 = *(uint32_t *)(a1 + 88);
  }
  if ( *(uint32_t *)(v1 + 380) != 0 )
  {
    ssl3_free_digest_list(a1);
    v1 = *(uint32_t *)(a1 + 88);
  }
  v2 = (int)(uintptr_t)(BIO_s_mem());
  *(uint32_t *)(v1 + 376) = (uint32_t)(uintptr_t)(BIO_new(v2));
  return BIO_ctrl(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 376), 9, 1, 0);
}

// ----------------------------------------------------------------------------
// Function: ssl3_finish_mac  (binary VA: 0x12e8ea0)
// Original: ssl3_finish_mac
// ----------------------------------------------------------------------------
int ssl3_finish_mac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;

  v3 = *(uint32_t *)(a1 + 88);
  v4 = *(uint32_t *)(v3 + 376);
  if ( v4 != 0 )
    return BIO_write(v4, a2, a3);
  v6 = **(uint32_t **)(v3 + 380);
  if ( v6 != 0 )
  {
    EVP_DigestUpdate(v6, a2, a3);
    v3 = *(uint32_t *)(a1 + 88);
  }
  v7 = *(uint32_t *)(*(uint32_t *)(v3 + 380) + 4);
  if ( v7 != 0 )
  {
    EVP_DigestUpdate(v7, a2, a3);
    v3 = *(uint32_t *)(a1 + 88);
  }
  v8 = *(uint32_t *)(*(uint32_t *)(v3 + 380) + 8);
  if ( v8 != 0 )
  {
    EVP_DigestUpdate(v8, a2, a3);
    v3 = *(uint32_t *)(a1 + 88);
  }
  result = *(uint32_t *)(*(uint32_t *)(v3 + 380) + 12);
  if ( result != 0 )
    return EVP_DigestUpdate(result, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_digest_cached_records  (binary VA: 0x12e8f90)
// Original: ssl3_digest_cached_records
// ----------------------------------------------------------------------------
int ssl3_digest_cached_records(int a1)
{
  uint32_t *v1;
  int i;
  bool v3;
  int v4;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v10)) > _g4_s4 ? (24u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v11)) > _g4_s5 ? (28u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  ssl3_free_digest_list(a1);
  v6 = *(uint32_t *)(a1 + 88);
  *(uint32_t *)(v6 + 380) = (uint32_t)(uintptr_t)(CRYPTO_malloc(0x10u, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = *(uint32_t **)(*(uint32_t *)(a1 + 88) + 380);
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v8 = BIO_ctrl(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 376), 3, 0, &v11);
  if ( v8 <= 0 )
  {
    ERR_put_error(20, 293, 332, &unk_1B15112, 0);
    return 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v3 = ssl_get_handshake_digest(i, &v10, &v9) == 0;
      v4 = *(uint32_t *)(a1 + 88);
      if ( v3 )
        break;
      if ( (v10 & *(uint32_t *)(*(uint32_t *)(v4 + 836) + 36)) != 0 && v9 != 0 )
      {
        v7 = (uint32_t *)(*(uint32_t *)(v4 + 380) + 4 * i);
        *v7 = (uint32_t)(uintptr_t)(EVP_MD_CTX_create());
        EVP_DigestInit_ex(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + 4 * i), v9, 0);
        EVP_DigestUpdate(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + 4 * i), v11, v8);
      }
      else
      {
        *(uint32_t *)(*(uint32_t *)(v4 + 380) + 4 * i) = 0;
      }
    }
    BIO_free(*(void **)(v4 + 376));
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 376) = 0;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl3_cert_verify_mac  (binary VA: 0x12e9150)
// Original: ssl3_cert_verify_mac
// ----------------------------------------------------------------------------
int ssl3_cert_verify_mac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[24];
  typedef uint8_t _g4_t_v17[76];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v3 = *(uint32_t *)(a1 + 88);
  if ( *(uint32_t *)(v3 + 376) != 0 )
  {
    if ( ssl3_digest_cached_records(a1) == 0 )
      return 0;
    v14 = 0;
    v3 = *(uint32_t *)(a1 + 88);
  }
  else
  {
    v14 = 0;
  }
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(uint32_t *)(*(uint32_t *)(v3 + 380) + 4 * v5);
    if ( v6 != 0 )
    {
      v7 = EVP_MD_CTX_md(v6);
      if ( a2 == EVP_MD_type(v7) )
        break;
      v4 = v14;
    }
    v5 = v4 + 1;
    v14 = v4 + 1;
    if ( (unsigned int)(v4 + 1) > 3 )
      goto LABEL_10;
    v3 = *(uint32_t *)(a1 + 88);
    ++v4;
  }
  v12 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + 4 * v14);
  if ( v12 == 0 )
  {
LABEL_10:
    ERR_put_error(20, 285, 324, &unk_1B15112, 0);
    return 0;
  }
  EVP_MD_CTX_init(v16);
  EVP_MD_CTX_copy_ex(v16, v12);
  v9 = EVP_MD_CTX_md(v16);
  v10 = EVP_MD_size(v9);
  if ( v10 < 0 )
    return 0;
  v13 = 48 / v10 * v10;
  EVP_DigestUpdate(v16, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
  EVP_DigestUpdate(v16, a66666666666666 /* "666666666666666666666666666666666666666666666666" */, v13);
  EVP_DigestFinal_ex(v16, v17, &v14);
  v11 = EVP_MD_CTX_md(v16);
  EVP_DigestInit_ex(v16, v11, 0);
  EVP_DigestUpdate(v16, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
  EVP_DigestUpdate(v16, asc_20C4700, v13);
  EVP_DigestUpdate(v16, v17, v14);
  EVP_DigestFinal_ex(v16, a3, &v15);
  EVP_MD_CTX_cleanup(v16);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: ssl3_final_finish_mac  (binary VA: 0x12e9380)
// Original: ssl3_final_finish_mac
// ----------------------------------------------------------------------------
int ssl3_final_finish_mac(int a1, int a2, int a3, int a4)
{
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
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[24];
  typedef uint8_t _g4_t_v30[76];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v25)) > _g4_s4 ? (12u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v27)) > _g4_s6 ? (16u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v28)) > _g4_s7 ? (20u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v29)) > _g4_s8 ? (24u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v30)) > _g4_s9 ? (48u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);

  v4 = *(uint32_t *)(a1 + 88);
  if ( *(uint32_t *)(v4 + 376) != 0 )
  {
    v21 = 0;
    v24 = 0;
    if ( ssl3_digest_cached_records(a1) == 0 )
      goto LABEL_11;
    v27 = 0;
    v4 = *(uint32_t *)(a1 + 88);
  }
  else
  {
    v27 = 0;
  }
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(uint32_t *)(*(uint32_t *)(v4 + 380) + 4 * v6);
    if ( v7 != 0 )
    {
      v8 = EVP_MD_CTX_md(v7);
      if ( EVP_MD_type(v8) == 4 )
        break;
      v5 = v27;
    }
    v6 = v5 + 1;
    v27 = v5 + 1;
    if ( (unsigned int)(v5 + 1) > 3 )
      goto LABEL_10;
    v4 = *(uint32_t *)(a1 + 88);
    ++v5;
  }
  v25 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + 4 * v27);
  if ( v25 == 0 )
  {
LABEL_10:
    ERR_put_error(20, 285, 324, &unk_1B15112, 0);
    v21 = 0;
    v24 = 0;
    goto LABEL_11;
  }
  EVP_MD_CTX_init(v29);
  EVP_MD_CTX_copy_ex(v29, v25);
  v18 = EVP_MD_CTX_md(v29);
  v19 = EVP_MD_size(v18);
  v21 = 0;
  v24 = 0;
  if ( v19 >= 0 )
  {
    v26 = 48 / v19 * v19;
    if ( a2 != 0 )
      EVP_DigestUpdate(v29, a2, a3);
    EVP_DigestUpdate(v29, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
    EVP_DigestUpdate(v29, a66666666666666 /* "666666666666666666666666666666666666666666666666" */, v26);
    EVP_DigestFinal_ex(v29, v30, &v27);
    v20 = EVP_MD_CTX_md(v29);
    EVP_DigestInit_ex(v29, v20, 0);
    EVP_DigestUpdate(v29, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
    EVP_DigestUpdate(v29, asc_20C4700, v26);
    EVP_DigestUpdate(v29, v30, v27);
    EVP_DigestFinal_ex(v29, a4, &v28);
    EVP_MD_CTX_cleanup(v29);
    v24 = v28;
    v21 = v28;
  }
LABEL_11:
  v9 = *(uint32_t *)(a1 + 88);
  if ( *(uint32_t *)(v9 + 376) != 0 )
  {
    if ( ssl3_digest_cached_records(a1) != 0 )
    {
      v27 = 0;
      v9 = *(uint32_t *)(a1 + 88);
      goto LABEL_14;
    }
    return v24;
  }
  v27 = 0;
LABEL_14:
  v10 = 0;
  v11 = 0;
  while ( 2 )
  {
    v12 = *(uint32_t *)(*(uint32_t *)(v9 + 380) + 4 * v11);
    if ( v12 == 0 )
    {
LABEL_19:
      v11 = v10 + 1;
      v27 = v10 + 1;
      if ( (unsigned int)(v10 + 1) > 3 )
        goto LABEL_20;
      v9 = *(uint32_t *)(a1 + 88);
      ++v10;
      continue;
    }
    break;
  }
  v13 = EVP_MD_CTX_md(v12);
  if ( EVP_MD_type(v13) != 64 )
  {
    v10 = v27;
    goto LABEL_19;
  }
  v22 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + 4 * v27);
  if ( v22 == 0 )
  {
LABEL_20:
    ERR_put_error(20, 285, 324, &unk_1B15112, 0);
    return v24;
  }
  EVP_MD_CTX_init(v29);
  EVP_MD_CTX_copy_ex(v29, v22);
  v15 = EVP_MD_CTX_md(v29);
  v16 = EVP_MD_size(v15);
  if ( v16 < 0 )
    return v24;
  v23 = 48 / v16 * v16;
  if ( a2 != 0 )
    EVP_DigestUpdate(v29, a2, a3);
  EVP_DigestUpdate(v29, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
  EVP_DigestUpdate(v29, a66666666666666 /* "666666666666666666666666666666666666666666666666" */, v23);
  EVP_DigestFinal_ex(v29, v30, &v27);
  v17 = EVP_MD_CTX_md(v29);
  EVP_DigestInit_ex(v29, v17, 0);
  EVP_DigestUpdate(v29, *(uint32_t *)(a1 + 192) + 20, *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16));
  EVP_DigestUpdate(v29, asc_20C4700, v23);
  EVP_DigestUpdate(v29, v30, v27);
  EVP_DigestFinal_ex(v29, v21 + a4, &v28);
  EVP_MD_CTX_cleanup(v29);
  return v28 + v24;
}

// ----------------------------------------------------------------------------
// Function: ssl3_record_sequence_update  (binary VA: 0x12e9820)
// Original: ssl3_record_sequence_update
// ----------------------------------------------------------------------------
uint8_t * ssl3_record_sequence_update(uint8_t *a1)
{
  uint8_t *result;
  char v2;
  char v3;
  char v4;
  char v5;
  char v6;
  char v7;
  char v8;

  result = a1;
  v2 = a1[7] + 1;
  a1[7] = v2;
  if ( v2 == 0 )
  {
    v3 = a1[6] + 1;
    a1[6] = v3;
    if ( v3 == 0 )
    {
      v4 = a1[5] + 1;
      a1[5] = v4;
      if ( v4 == 0 )
      {
        v5 = a1[4] + 1;
        a1[4] = v5;
        if ( v5 == 0 )
        {
          v6 = a1[3] + 1;
          a1[3] = v6;
          if ( v6 == 0 )
          {
            v7 = a1[2] + 1;
            a1[2] = v7;
            if ( v7 == 0 )
            {
              v8 = a1[1] + 1;
              a1[1] = v8;
              if ( v8 == 0 )
                ++*a1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_generate_master_secret  (binary VA: 0x12e9ac0)
// Original: ssl3_generate_master_secret
// ----------------------------------------------------------------------------
int ssl3_generate_master_secret(int a1, int a2, int a3, int a4)
{
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[24];
  typedef uint8_t _g4_t_v13[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v9)) > _g4_s3 ? (8u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v10)) > _g4_s4 ? (12u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v11)) > _g4_s5 ? (20u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v12)) > _g4_s6 ? (24u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v13)) > _g4_s7 ? (48u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  EVP_MD_CTX_init(v12);
  EVP_DigestInit_ex(v12, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 144), 0);
  EVP_DigestUpdate(v12, "A", 1);
  EVP_DigestUpdate(v12, a3, a4);
  EVP_DigestUpdate(v12, *(uint32_t *)(a1 + 88) + 192, 32);
  EVP_DigestUpdate(v12, *(uint32_t *)(a1 + 88) + 160, 32);
  EVP_DigestFinal_ex(v12, v13, &v11);
  EVP_DigestInit_ex(v12, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 140), 0);
  EVP_DigestUpdate(v12, a3, a4);
  EVP_DigestUpdate(v12, v13, v11);
  EVP_DigestFinal_ex(v12, a2, &v11);
  v7 = v11 + a2;
  v6 = v11;
  EVP_DigestInit_ex(v12, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 144), 0);
  EVP_DigestUpdate(v12, "BB", 2);
  EVP_DigestUpdate(v12, a3, a4);
  EVP_DigestUpdate(v12, *(uint32_t *)(a1 + 88) + 192, 32);
  EVP_DigestUpdate(v12, *(uint32_t *)(a1 + 88) + 160, 32);
  EVP_DigestFinal_ex(v12, v13, &v11);
  EVP_DigestInit_ex(v12, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 140), 0);
  EVP_DigestUpdate(v12, a3, a4);
  EVP_DigestUpdate(v12, v13, v11);
  EVP_DigestFinal_ex(v12, v7, &v11);
  v4 = v11 + v7;
  v8 = v6 + v11;
  v10 = v4;
  EVP_DigestInit_ex(v12, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 144), 0);
  EVP_DigestUpdate(v12, "CCC", 3);
  EVP_DigestUpdate(v12, a3, a4);
  EVP_DigestUpdate(v12, *(uint32_t *)(a1 + 88) + 192, 32);
  EVP_DigestUpdate(v12, *(uint32_t *)(a1 + 88) + 160, 32);
  EVP_DigestFinal_ex(v12, v13, &v11);
  EVP_DigestInit_ex(v12, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 140), 0);
  EVP_DigestUpdate(v12, a3, a4);
  EVP_DigestUpdate(v12, v13, v11);
  EVP_DigestFinal_ex(v12, v10, &v11);
  v9 = v11 + v8;
  EVP_MD_CTX_cleanup(v12);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ssl3_alert_code  (binary VA: 0x12e9e70)
// Original: ssl3_alert_code
// ----------------------------------------------------------------------------
int ssl3_alert_code(unsigned int a1)
{
  int result;

  result = -1;
  if ( a1 <= 0x73 )
    return byte_1CFAB40[a1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_default_timeout  (binary VA: 0x12e9ea0)
// Original: ssl3_default_timeout
// ----------------------------------------------------------------------------
int ssl3_default_timeout()
{
  return 7200;
}

// ----------------------------------------------------------------------------
// Function: ssl3_num_ciphers  (binary VA: 0x12e9eb0)
// Original: ssl3_num_ciphers
// ----------------------------------------------------------------------------
int ssl3_num_ciphers()
{
  return 90;
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_cipher  (binary VA: 0x12e9ec0)
// Original: ssl3_get_cipher
// ----------------------------------------------------------------------------
char * ssl3_get_cipher(unsigned int a1)
{
  char *result;

  result = nullptr;
  if ( a1 <= 0x59 )
    return (char *)&ssl3_ciphers - 48 * a1 + 4272;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_pending  (binary VA: 0x12e9ef0)
// Original: ssl3_pending
// ----------------------------------------------------------------------------
int ssl3_pending(int a1)
{
  int result;
  int v2;

  result = 0;
  if ( *(uint32_t *)(a1 + 56) != 241 )
  {
    v2 = *(uint32_t *)(a1 + 88);
    if ( *(uint32_t *)(v2 + 268) == 23 )
      return *(uint32_t *)(v2 + 272);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_new  (binary VA: 0x12e9f20)
// Original: ssl3_new
// ----------------------------------------------------------------------------
int ssl3_new(int a1)
{
  int v1;
  int result;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
  int v6;

  v1 = (int)(uintptr_t)(CRYPTO_malloc(0x41Cu, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != 0 )
  {
    v3 = (uint16_t *)v1;
    v4 = 1052;
    if ( (v1 & 1) != 0 )
    {
      *(uint8_t *)v1 = 0;
      v3 = (uint16_t *)(v1 + 1);
      LOWORD(v4) = 1051;
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
      *(uint32_t *)(v1 + 296) = 0;
      *(uint32_t *)(v1 + 300) = 0;
      *(uint32_t *)(v1 + 332) = 0;
      *(uint32_t *)(v1 + 336) = 0;
      v6 = *(uint32_t *)(a1 + 8);
      *(uint32_t *)(a1 + 88) = v1;
      (*(void (**)(int))(v6 + 8))(a1);
      return 1;
    }
    *(uint8_t *)v5 = 0;
    goto LABEL_8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_free  (binary VA: 0x12ea020)
// Original: ssl3_free
// ----------------------------------------------------------------------------
void ssl3_free(int a1)
{
  int v1;
  void *v2;

  if ( a1 != 0 )
  {
    ssl3_cleanup_key_block(a1);
    v1 = *(uint32_t *)(a1 + 88);
    if ( *(uint32_t *)(v1 + 236) != 0 )
    {
      ssl3_release_read_buffer(a1);
      v1 = *(uint32_t *)(a1 + 88);
    }
    if ( *(uint32_t *)(v1 + 252) != 0 )
    {
      ssl3_release_write_buffer(a1);
      v1 = *(uint32_t *)(a1 + 88);
    }
    if ( *(uint32_t *)(v1 + 288) != 0 )
    {
      CRYPTO_free(*(void **)(v1 + 288));
      v1 = *(uint32_t *)(a1 + 88);
    }
    if ( *(uint32_t *)(v1 + 840) != 0 )
    {
      DH_free(*(void **)(v1 + 840));
      v1 = *(uint32_t *)(a1 + 88);
    }
    if ( *(uint32_t *)(v1 + 844) != 0 )
    {
      EC_KEY_free(*(void **)(v1 + 844));
      v1 = *(uint32_t *)(a1 + 88);
    }
    v2 = *(void **)(v1 + 876);
    if ( v2 != nullptr )
    {
      sk_pop_free(v2, (int)(uintptr_t)(X509_NAME_free));
      v1 = *(uint32_t *)(a1 + 88);
    }
    if ( *(uint32_t *)(v1 + 376) != 0 )
    {
      BIO_free(*(void **)(v1 + 376));
      v1 = *(uint32_t *)(a1 + 88);
    }
    if ( *(uint32_t *)(v1 + 380) != 0 )
    {
      ssl3_free_digest_list(a1);
      v1 = *(uint32_t *)(a1 + 88);
    }
    OPENSSL_cleanse((void *)v1, 0x41Cu);
    CRYPTO_free(*(void **)(a1 + 88));
    *(uint32_t *)(a1 + 88) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl3_clear  (binary VA: 0x12ea130)
// Original: ssl3_clear
// ----------------------------------------------------------------------------
int ssl3_clear(uint32_t *a1)
{
  void **v1;
  void *v2;
  void *v3;
  unsigned int v4;
  void **v5;
  int v6;
  int result;
  void *v8;
  void *v9;
  void *v10;

  ssl3_cleanup_key_block((int)(uintptr_t)(a1));
  v1 = (void **)a1[22];
  if ( v1[219] != nullptr )
  {
    sk_pop_free(v1[219], (int)(uintptr_t)(X509_NAME_free));
    v1 = (void **)a1[22];
  }
  if ( v1[72] != nullptr )
  {
    CRYPTO_free(v1[72]);
    *(uint32_t *)(a1[22] + 288) = 0;
    v1 = (void **)a1[22];
  }
  if ( v1[210] != nullptr )
  {
    DH_free(v1[210]);
    v1 = (void **)a1[22];
  }
  if ( v1[211] != nullptr )
  {
    EC_KEY_free(v1[211]);
    v1 = (void **)a1[22];
  }
  v2 = v1[94];
  v8 = v1[63];
  v9 = v1[60];
  v3 = v1[59];
  v10 = v1[64];
  if ( v2 != nullptr )
  {
    BIO_free(v2);
    *(uint32_t *)(a1[22] + 376) = 0;
    v1 = (void **)a1[22];
  }
  if ( v1[95] != nullptr )
  {
    ssl3_free_digest_list((int)(uintptr_t)(a1));
    v1 = (void **)a1[22];
  }
  v4 = 1052;
  if ( ((uint8_t)(uintptr_t)(v1) & 1) != 0 )
  {
    *(uint8_t *)v1 = 0;
    v1 = (void **)((char *)v1 + 1);
    LOBYTE(v4) = 27;
    if ( ((uint8_t)(uintptr_t)(v1) & 2) == 0 )
      goto LABEL_15;
  }
  else if ( ((uint8_t)(uintptr_t)(v1) & 2) == 0 )
  {
    goto LABEL_15;
  }
  *(uint16_t *)v1 = 0;
  v4 -= 2;
  v1 = (void **)((char *)v1 + 2);
LABEL_15:
  memset(v1, 0, 4 * (v4 >> 2));
  v5 = &v1[v4 >> 2];
  if ( (v4 & 2) != 0 )
  {
    *(uint16_t *)v5 = 0;
    v5 = (void **)((char *)v5 + 2);
  }
  if ( (v4 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  *(uint32_t *)(a1[22] + 236) = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(a1[22] + 252) = (uint32_t)(uintptr_t)(v8);
  *(uint32_t *)(a1[22] + 240) = (uint32_t)(uintptr_t)(v9);
  *(uint32_t *)(a1[22] + 256) = (uint32_t)(uintptr_t)(v10);
  ssl_free_wbio_buffer(a1);
  v6 = a1[22];
  a1[20] = 0;
  *(uint32_t *)(v6 + 404) = 0;
  *(uint32_t *)(a1[22] + 408) = 0;
  *(uint32_t *)(a1[22] + 412) = 0;
  result = a1[22];
  *(uint32_t *)(result + 416) = 0;
  *a1 = 768;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_ctrl  (binary VA: 0x12ea300)
// Original: ssl3_ctrl
// ----------------------------------------------------------------------------
int ssl3_ctrl(int a1, int a2, int a3, char *a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *s;

  if ( (a2 == 5 || a2 == 2 || a2 == 6 || a2 == 3) && ssl_cert_inst(a1 + 152) == 0 )
  {
    v4 = 0;
    ERR_put_error(20, 213, 65, &unk_1B15112, 0);
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        v6 = *(uint32_t *)(a1 + 152);
        v4 = 0;
        if ( v6 != 0 && *(uint32_t *)(v6 + 24) == 0 )
        {
          v7 = *(uint32_t *)(v6 + 52);
          LOWORD(v4) = 1;
          if ( v7 != 0 )
            return EVP_PKEY_size(v7) > 64;
        }
        return v4;
      case 2:
        if ( a4 == nullptr )
          goto LABEL_56;
        v4 = RSAPrivateKey_dup(a4);
        if ( v4 != 0 )
        {
          v8 = *(uint32_t *)(a1 + 152);
          if ( *(uint32_t *)(v8 + 24) != 0 )
          {
            RSA_free(*(void **)(v8 + 24));
            v8 = *(uint32_t *)(a1 + 152);
          }
          *(uint32_t *)(v8 + 24) = v4;
          return 1;
        }
        else
        {
          ERR_put_error(20, 213, 4, &unk_1B15112, 0);
        }
        return v4;
      case 3:
        if ( a4 == nullptr )
          goto LABEL_56;
        v9 = DHparams_dup(a4);
        v4 = v9;
        if ( v9 != 0 )
        {
          if ( (*(uint8_t *)(a1 + 258) & 0x10) != 0 || DH_generate_key(v9) != 0 )
          {
            v10 = *(uint32_t *)(a1 + 152);
            if ( *(uint32_t *)(v10 + 32) != 0 )
            {
              DH_free(*(void **)(v10 + 32));
              v10 = *(uint32_t *)(a1 + 152);
            }
            *(uint32_t *)(v10 + 32) = v4;
            return 1;
          }
          else
          {
            s = (char *)v4;
            v4 = 0;
            DH_free(s);
            ERR_put_error(20, 213, 5, &unk_1B15112, 0);
          }
        }
        else
        {
          ERR_put_error(20, 213, 5, &unk_1B15112, 0);
        }
        return v4;
      case 4:
        if ( a4 != nullptr )
        {
          if ( EC_KEY_up_ref(a4) == 0 )
          {
LABEL_62:
            v4 = 0;
            ERR_put_error(20, 213, 43, &unk_1B15112, 0);
            return v4;
          }
          if ( (*(uint8_t *)(a1 + 258) & 8) == 0 && EC_KEY_generate_key(a4) == 0 )
          {
            EC_KEY_free(a4);
            goto LABEL_62;
          }
          v11 = *(uint32_t *)(a1 + 152);
          if ( *(uint32_t *)(v11 + 40) != 0 )
          {
            EC_KEY_free(*(void **)(v11 + 40));
            v11 = *(uint32_t *)(a1 + 152);
          }
          *(uint32_t *)(v11 + 40) = (uint32_t)(uintptr_t)(a4);
          v4 = 1;
        }
        else
        {
LABEL_56:
          v4 = 0;
          ERR_put_error(20, 213, 67, &unk_1B15112, 0);
        }
        break;
      case 5:
      case 6:
      case 7:
        v4 = 0;
        ERR_put_error(20, 213, 66, &unk_1B15112, 0);
        return v4;
      case 8:
        return *(uint32_t *)(a1 + 108);
      case 10:
        return *(uint32_t *)(*(uint32_t *)(a1 + 88) + 412);
      case 11:
        v13 = *(uint32_t *)(a1 + 88);
        v4 = *(uint32_t *)(v13 + 412);
        *(uint32_t *)(v13 + 412) = 0;
        return v4;
      case 12:
        return *(uint32_t *)(*(uint32_t *)(a1 + 88) + 408);
      case 13:
        return **(uint32_t **)(a1 + 88);
      case 55:
        if ( a3 != 0 )
        {
          v4 = 0;
          ERR_put_error(20, 213, 320, &unk_1B15112, 0);
        }
        else
        {
          if ( *(uint32_t *)(a1 + 288) != 0 )
            CRYPTO_free(*(void **)(a1 + 288));
          *(uint32_t *)(a1 + 288) = 0;
          v4 = 1;
          if ( a4 != nullptr )
          {
            if ( strlen(a4) > 0xFF )
            {
              LOWORD(v4) = 0;
              ERR_put_error(20, 213, 319, &unk_1B15112, 0);
            }
            else
            {
              v12 = (int)(uintptr_t)(BUF_strdup(a4));
              *(uint32_t *)(a1 + 288) = v12;
              if ( v12 == 0 )
              {
                v4 = 0;
                ERR_put_error(20, 213, 68, &unk_1B15112, 0);
              }
            }
          }
        }
        return v4;
      case 57:
        *(uint32_t *)(a1 + 284) = (uint32_t)(uintptr_t)(a4);
        return 1;
      case 65:
        v4 = 1;
        *(uint32_t *)(a1 + 296) = a3;
        return v4;
      case 66:
        v4 = 1;
        *(uint32_t *)a4 = *(uint32_t *)(a1 + 308);
        return v4;
      case 67:
        *(uint32_t *)(a1 + 308) = (uint32_t)(uintptr_t)(a4);
        return 1;
      case 68:
        v4 = 1;
        *(uint32_t *)a4 = *(uint32_t *)(a1 + 304);
        return v4;
      case 69:
        *(uint32_t *)(a1 + 304) = (uint32_t)(uintptr_t)(a4);
        return 1;
      case 70:
        *(uint32_t *)a4 = *(uint32_t *)(a1 + 312);
        return *(uint32_t *)(a1 + 316);
      case 71:
        if ( *(uint32_t *)(a1 + 312) != 0 )
          CRYPTO_free(*(void **)(a1 + 312));
        *(uint32_t *)(a1 + 312) = (uint32_t)(uintptr_t)(a4);
        *(uint32_t *)(a1 + 316) = a3;
        return 1;
      default:
        return 0;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ssl3_callback_ctrl  (binary VA: 0x12ea870)
// Original: ssl3_callback_ctrl
// ----------------------------------------------------------------------------
int ssl3_callback_ctrl(int a1, int a2, int a3)
{
  if ( (unsigned int)(a2 - 5) > 1 || ssl_cert_inst(a1 + 152) != 0 )
  {
    if ( a2 == 6 )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 152) + 36) = a3;
    }
    else if ( a2 <= 6 )
    {
      if ( a2 == 5 )
        *(uint32_t *)(*(uint32_t *)(a1 + 152) + 28) = a3;
    }
    else if ( a2 == 7 )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 152) + 44) = a3;
    }
    else if ( a2 == 56 )
    {
      *(uint32_t *)(a1 + 280) = a3;
    }
  }
  else
  {
    ERR_put_error(20, 233, 65, &unk_1B15112, 0);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl3_ctx_ctrl  (binary VA: 0x12ea950)
// Original: ssl3_ctx_ctrl
// ----------------------------------------------------------------------------
char ssl3_ctx_ctrl(int a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  char result;
  int v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  int v11;

  v4 = *(uint32_t *)(a1 + 176);
  switch ( a2 )
  {
    case 1:
      result = 0;
      if ( *(uint32_t *)(v4 + 24) == 0 )
      {
        result = 1;
        if ( *(uint32_t *)(v4 + 52) != 0 )
          return EVP_PKEY_size(*(uint32_t *)(v4 + 52)) > 64;
      }
      return result;
    case 2:
      if ( a4 != nullptr && (v6 = RSAPrivateKey_dup(a4)) != 0 )
      {
        if ( *(uint32_t *)(v4 + 24) != 0 )
          RSA_free(*(void **)(v4 + 24));
        *(uint32_t *)(v4 + 24) = v6;
        return 1;
      }
      else
      {
        ERR_put_error(20, 133, 4, &unk_1B15112, 0);
        return 0;
      }
    case 3:
      v7 = (void *)DHparams_dup(a4);
      v8 = v7;
      if ( v7 != nullptr )
      {
        if ( (*(uint8_t *)(a1 + 166) & 0x10) != 0 || DH_generate_key(v7) != 0 )
        {
          if ( *(uint32_t *)(v4 + 32) != 0 )
            DH_free(*(void **)(v4 + 32));
          *(uint32_t *)(v4 + 32) = (uint32_t)(uintptr_t)(v8);
          return 1;
        }
        else
        {
          ERR_put_error(20, 133, 5, &unk_1B15112, 0);
          DH_free(v8);
          return 0;
        }
      }
      else
      {
        ERR_put_error(20, 133, 5, &unk_1B15112, 0);
        return 0;
      }
    case 4:
      if ( a4 == nullptr )
        goto LABEL_40;
      v9 = (void *)EC_KEY_dup(a4);
      v10 = v9;
      if ( v9 != nullptr )
      {
        if ( (*(uint8_t *)(a1 + 166) & 8) == 0 && EC_KEY_generate_key(v9) == 0 )
        {
          EC_KEY_free(v10);
LABEL_40:
          ERR_put_error(20, 133, 43, &unk_1B15112, 0);
          return 0;
        }
        if ( *(uint32_t *)(v4 + 40) != 0 )
          EC_KEY_free(*(void **)(v4 + 40));
        *(uint32_t *)(v4 + 40) = (uint32_t)(uintptr_t)(v10);
        return 1;
      }
      else
      {
        ERR_put_error(20, 133, 16, &unk_1B15112, 0);
        return 0;
      }
    case 5:
    case 6:
    case 7:
      ERR_put_error(20, 133, 66, &unk_1B15112, 0);
      return 0;
    case 14:
      v11 = *(uint32_t *)(a1 + 148);
      if ( v11 != 0 || (v11 = (int)(uintptr_t)(sk_new_null()), *(uint32_t *)(a1 + 148) = v11, result = 0, v11 != 0) )
      {
        sk_push(v11, a4);
        return 1;
      }
      return result;
    case 54:
      *(uint32_t *)(a1 + 260) = (uint32_t)(uintptr_t)(a4);
      return 1;
    case 58:
    case 59:
      result = 48;
      if ( a4 != nullptr )
      {
        if ( a3 == 48 )
        {
          if ( a2 == 59 )
          {
            *(uint32_t *)(a1 + 264) = *a4;
            *(uint32_t *)(a1 + 268) = a4[1];
            *(uint32_t *)(a1 + 272) = a4[2];
            *(uint32_t *)(a1 + 276) = a4[3];
            *(uint32_t *)(a1 + 280) = a4[4];
            *(uint32_t *)(a1 + 284) = a4[5];
            *(uint32_t *)(a1 + 288) = a4[6];
            *(uint32_t *)(a1 + 292) = a4[7];
            *(uint32_t *)(a1 + 296) = a4[8];
            *(uint32_t *)(a1 + 300) = a4[9];
            *(uint32_t *)(a1 + 304) = a4[10];
            *(uint32_t *)(a1 + 308) = a4[11];
          }
          else
          {
            *a4 = *(uint32_t *)(a1 + 264);
            a4[1] = *(uint32_t *)(a1 + 268);
            a4[2] = *(uint32_t *)(a1 + 272);
            a4[3] = *(uint32_t *)(a1 + 276);
            a4[4] = *(uint32_t *)(a1 + 280);
            a4[5] = *(uint32_t *)(a1 + 284);
            a4[6] = *(uint32_t *)(a1 + 288);
            a4[7] = *(uint32_t *)(a1 + 292);
            a4[8] = *(uint32_t *)(a1 + 296);
            a4[9] = *(uint32_t *)(a1 + 300);
            a4[10] = *(uint32_t *)(a1 + 304);
            a4[11] = *(uint32_t *)(a1 + 308);
          }
          return 1;
        }
        else
        {
          ERR_put_error(20, 133, 325, &unk_1B15112, 0);
          return 0;
        }
      }
      return result;
    case 64:
      *(uint32_t *)(a1 + 320) = (uint32_t)(uintptr_t)(a4);
      return 1;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl3_ctx_callback_ctrl  (binary VA: 0x12eadc0)
// Original: ssl3_ctx_callback_ctrl
// ----------------------------------------------------------------------------
int ssl3_ctx_callback_ctrl(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;

  v3 = (uint32_t *)a1[44];
  switch ( a2 )
  {
    case 5:
      v3[7] = a3;
      return 1;
    case 6:
      v3[9] = a3;
      return 1;
    case 7:
      v3[11] = a3;
      return 1;
    case 53:
      a1[64] = a3;
      return 1;
    case 63:
      a1[79] = a3;
      return 1;
    case 72:
      a1[78] = a3;
      return 1;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_cipher_by_char  (binary VA: 0x12eae60)
// Original: ssl3_get_cipher_by_char
// ----------------------------------------------------------------------------
uint32_t * ssl3_get_cipher_by_char(uint8_t *a1)
{
  uint32_t *result;
  typedef uint8_t _g4_t_v2[8];
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  v3 = (*a1 << 8) | a1[1] | 0x3000000;
  result = (uint32_t *)OBJ_bsearch_ssl_cipher_id(v2, &ssl3_ciphers, 90);
  if ( result != nullptr && *result == 0 )
    return nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_put_cipher_by_char  (binary VA: 0x12eaec0)
// Original: ssl3_put_cipher_by_char
// ----------------------------------------------------------------------------
int ssl3_put_cipher_by_char(int a1, uint8_t *a2)
{
  int result;
  int v3;

  result = 2;
  if ( a2 != nullptr )
  {
    v3 = *(uint32_t *)(a1 + 8);
    result = 0;
    if ( (v3 & 0xFF000000) == 0x3000000 )
    {
      a2[1] = v3;
      *a2 = BYTE1(v3);
      return 2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_choose_cipher  (binary VA: 0x12eaf10)
// Original: ssl3_choose_cipher
// ----------------------------------------------------------------------------
int ssl3_choose_cipher(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int curve_name;
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
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  bool v34;
  int v35;
  int field_type;
  int v37;
  int v38;
  uint8_t *v39;
  int v40;
  int v41;
  uint8_t *v42;
  int v43;
  char v44;
  int v45;
  char v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  bool v52;
  int v53;
  int v54;
  int v55;
  int16_t v56;
  int v57;

  v3 = a3;
  v4 = a2;
  v56 = 0;
  v5 = (uint32_t *)a1[38];
  if ( (a1[64] & 0x400000) == 0 )
  {
    v4 = a3;
    v3 = a2;
  }
  v57 = v4;
  v53 = v3;
  v6 = 0;
  if ( (int)sk_num(v3) <= 0 )
    return 0;
  while ( 1 )
  {
    v7 = sk_value(v53, v6);
    ssl_set_cert_masks(v5, v7);
    v8 = *(uint32_t *)(v7 + 12);
    v47 = *(uint32_t *)(v7 + 16);
    if ( (v8 & 0x100) != 0 && a1[56] == 0 )
      goto LABEL_42;
    v52 = false;
    if ( (*(uint8_t *)(v7 + 32) & 2) != 0 )
    {
      if ( (v8 & v5[4]) != 0 )
        v52 = (v5[5] & v47) != 0;
    }
    else if ( (v5[2] & v8) != 0 )
    {
      v52 = (v5[3] & v47) != 0;
    }
    if ( (v47 & 0x50) == 0 )
      goto LABEL_31;
    v48 = a1[38];
    v54 = *(uint32_t *)(v48 + 88);
    if ( v54 == 0 )
      goto LABEL_31;
    v9 = (uint32_t *)a1[48];
    if ( v9[53] != 0 && v9[54] != 0 && *(uint32_t *)v54 != 0 )
    {
      v10 = *(uint32_t *)(*(uint32_t *)v54 + 24);
      if ( v10 != 0 )
      {
        v11 = *(uint32_t *)(v10 + 4);
        if ( v11 != 0 )
        {
          v12 = *(uint8_t **)(v11 + 8);
          if ( v12 != nullptr && (uint8_t)(*v12 - 2) <= 1u )
          {
            v32 = *(uint32_t *)(*(uint32_t *)(v48 + 92) + 20);
            if ( v32 != 0 )
            {
              v33 = *(int **)(v32 + 4);
              v34 = v33 == nullptr;
              v35 = *v33;
              if ( !v34 )
              {
                if ( v35 != 0 )
                {
                  v45 = *(uint32_t *)(v7 + 12);
                  field_type = EC_METHOD_get_field_type(v35);
                  LOBYTE(v8) = v45;
                  if ( field_type == 406 )
                  {
                    v38 = a1[48];
                    v50 = *(uint32_t *)(v38 + 212);
                    if ( v50 != 0 )
                    {
                      v39 = *(uint8_t **)(v38 + 216);
                      if ( *v39 != 1 )
                      {
                        v55 = v6;
                        v40 = 0;
                        while ( ++v40 != v50 )
                        {
                          if ( v39[v40] == 1 )
                          {
LABEL_85:
                            v6 = v55;
                            goto LABEL_69;
                          }
                        }
LABEL_77:
                        v6 = v55;
                        v52 = false;
                      }
LABEL_69:
                      v48 = a1[38];
                      if ( *(uint32_t *)(v48 + 88) == 0 )
                        goto LABEL_31;
                      v9 = (uint32_t *)a1[48];
                      goto LABEL_18;
                    }
LABEL_68:
                    v52 = false;
                    goto LABEL_69;
                  }
                  v35 = **(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a1[38] + 92) + 20) + 4);
                }
                else
                {
                  v35 = 0;
                }
              }
            }
            else
            {
              v35 = *loc_4;
            }
            v46 = v8;
            v37 = EC_METHOD_get_field_type(v35);
            LOBYTE(v8) = v46;
            if ( v37 == 407 )
            {
              v41 = a1[48];
              v51 = *(uint32_t *)(v41 + 212);
              if ( v51 != 0 )
              {
                v42 = *(uint8_t **)(v41 + 216);
                if ( *v42 == 2 )
                  goto LABEL_69;
                v55 = v6;
                v43 = 0;
                while ( ++v43 != v51 )
                {
                  if ( v42[v43] == 2 )
                    goto LABEL_85;
                }
                goto LABEL_77;
              }
            }
            goto LABEL_68;
          }
        }
      }
    }
LABEL_18:
    if ( v9[55] == 0 || v9[56] == 0 )
      goto LABEL_31;
    v13 = *(uint32_t *)(*(uint32_t *)(v48 + 92) + 20);
    if ( v13 == 0 || (v14 = *(uint32_t *)(v13 + 4)) == 0 )
    {
LABEL_55:
      v52 = false;
      goto LABEL_31;
    }
    v44 = v8;
    curve_name = EC_GROUP_get_curve_name(v14);
    if ( curve_name != 0 || (v16 = **(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a1[38] + 92) + 20) + 4)) == 0 )
    {
      HIBYTE(v56) = tls1_ec_nid2curve_id(curve_name);
      LOBYTE(v56) = 0;
      LOBYTE(v8) = v44;
LABEL_58:
      if ( v56 == 0 )
      {
        v52 = false;
        v56 = 0;
        goto LABEL_31;
      }
      goto LABEL_27;
    }
    v17 = EC_METHOD_get_field_type(v16);
    LOBYTE(v8) = v44;
    if ( v17 == 406 )
    {
      v56 = 511;
    }
    else
    {
      v18 = EC_METHOD_get_field_type(**(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a1[38] + 92) + 20) + 4));
      LOBYTE(v8) = v44;
      if ( v18 != 407 )
        goto LABEL_58;
      v56 = 767;
    }
LABEL_27:
    v19 = a1[48];
    v49 = *(uint32_t *)(v19 + 220) >> 1;
    if ( v49 == 0 )
      goto LABEL_55;
    v20 = *(uint32_t *)(v19 + 224);
    v21 = 0;
    while ( *(uint16_t *)(v20 + 2 * v21) != v56 )
    {
      if ( ++v21 == v49 )
      {
        v52 = false;
        break;
      }
    }
LABEL_31:
    if ( (v8 & 0x80) == 0 )
      goto LABEL_50;
    v22 = *(uint32_t *)(a1[38] + 40);
    if ( v22 == 0 )
      goto LABEL_50;
    v23 = a1[48];
    if ( *(uint32_t *)(v23 + 220) == 0 || *(uint32_t *)(v23 + 224) == 0 )
      goto LABEL_50;
    v24 = *(uint32_t *)(v22 + 4);
    if ( v24 != 0 )
    {
      v25 = EC_GROUP_get_curve_name(v24);
      if ( v25 == 0 && **(uint32_t **)(*(uint32_t *)(a1[38] + 40) + 4) != 0 )
        break;
      HIBYTE(v56) = tls1_ec_nid2curve_id(v25);
      LOBYTE(v56) = 0;
LABEL_40:
      if ( v56 != 0 )
        goto LABEL_46;
      v56 = 0;
    }
LABEL_42:
    if ( ++v6 >= sk_num(v53) )
      return 0;
  }
  if ( EC_METHOD_get_field_type(**(uint32_t **)(*(uint32_t *)(a1[38] + 40) + 4)) == 406 )
  {
    HIBYTE(v56) = 1;
    goto LABEL_45;
  }
  if ( EC_METHOD_get_field_type(**(uint32_t **)(*(uint32_t *)(a1[38] + 40) + 4)) != 407 )
    goto LABEL_40;
  HIBYTE(v56) = 2;
LABEL_45:
  LOBYTE(v56) = -1;
LABEL_46:
  v27 = a1[48];
  v28 = *(uint32_t *)(v27 + 220) >> 1;
  if ( v28 == 0 )
    goto LABEL_42;
  v29 = *(uint32_t *)(v27 + 224);
  v30 = 0;
  while ( *(uint16_t *)(v29 + 2 * v30) != v56 )
  {
    if ( ++v30 == v28 )
      goto LABEL_42;
  }
LABEL_50:
  if ( !v52 )
    goto LABEL_42;
  v31 = sk_find(v57, v7);
  if ( v31 < 0 )
    goto LABEL_42;
  return sk_value(v57, v31);
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_req_cert_type  (binary VA: 0x12eb520)
// Original: ssl3_get_req_cert_type
// ----------------------------------------------------------------------------
int ssl3_get_req_cert_type(int *a1, uint8_t *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = *(uint32_t *)(*(uint32_t *)(a1[22] + 836) + 12);
  if ( (v2 & 0xA) != 0 )
  {
    *a2 = 3;
    a2[1] = 4;
    v9 = 6;
    v8 = 5;
    v7 = 4;
    result = 4;
    v4 = 3;
    v5 = 2;
    v6 = 2;
    if ( *a1 != 768 )
      goto LABEL_3;
  }
  else
  {
    v5 = 0;
    v9 = 4;
    v8 = 3;
    v7 = 2;
    result = 2;
    v4 = 1;
    v6 = 0;
    if ( *a1 != 768 )
      goto LABEL_3;
  }
  if ( (v2 & 0xE) != 0 )
  {
    a2[v5] = 5;
    v6 = result;
    a2[v4] = 6;
    v5 = v7;
    v4 = v8;
    result = v9;
  }
LABEL_3:
  a2[v5] = 1;
  a2[v4] = 2;
  if ( (v2 & 0x60) != 0 )
  {
    if ( *a1 <= 768 )
      return result;
    a2[result] = 65;
    a2[v6 + 3] = 66;
    result = v6 + 4;
  }
  if ( *a1 > 768 )
    a2[result++] = 64;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_shutdown  (binary VA: 0x12eb640)
// Original: ssl3_shutdown
// ----------------------------------------------------------------------------
int ssl3_shutdown(uint32_t *a1)
{
  int v1;
  int result;

  if ( a1[11] != 0 || a1[13] == 0x4000 )
  {
    a1[12] = 3;
    return 1;
  }
  v1 = a1[12];
  if ( (v1 & 1) != 0 )
  {
    if ( *(uint32_t *)(a1[22] + 396) == 0 )
    {
      if ( (v1 & 2) != 0
        || ((*(void (**)(uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t))(a1[2] + 52))(a1, 0, 0, 0, 0),
            v1 = a1[12],
            result = -1,
            (v1 & 2) != 0) )
      {
        result = 0;
        if ( v1 == 3 )
          return *(uint32_t *)(a1[22] + 396) == 0;
      }
      return result;
    }
    result = (*(int (**)(uint32_t *))(a1[2] + 60))(a1);
    if ( result == -1 )
      return result;
  }
  else
  {
    a1[12] = v1 | 1;
    ssl3_send_alert(a1, 1, 0);
    result = -1;
    if ( *(uint32_t *)(a1[22] + 396) != 0 )
      return result;
  }
  result = 0;
  if ( a1[12] == 3 )
    return *(uint32_t *)(a1[22] + 396) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_renegotiate  (binary VA: 0x12eb780)
// Original: ssl3_renegotiate
// ----------------------------------------------------------------------------
char ssl3_renegotiate(int a1)
{
  char result;
  int v2;

  result = 1;
  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 88);
    result = 0;
    if ( (*(uint8_t *)v2 & 1) == 0 )
    {
      *(uint32_t *)(v2 + 404) = 1;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_renegotiate_check  (binary VA: 0x12eb7b0)
// Original: ssl3_renegotiate_check
// ----------------------------------------------------------------------------
int ssl3_renegotiate_check(int a1)
{
  uint32_t *v1;
  int v2;
  int v4;

  v1 = *(uint32_t **)(a1 + 88);
  v2 = 0;
  if ( v1[101] != 0 && v1[62] == 0 && v1[66] == 0 && (SSL_state(a1) & 0x3000) == 0 )
  {
    v4 = *(uint32_t *)(a1 + 88);
    *(uint32_t *)(a1 + 52) = 12292;
    LOWORD(v2) = 1;
    *(uint32_t *)(v4 + 404) = 0;
    ++*(uint32_t *)(*(uint32_t *)(a1 + 88) + 412);
    ++*(uint32_t *)(*(uint32_t *)(a1 + 88) + 408);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ssl3_read  (binary VA: 0x12eb850)
// Original: ssl3_read
// ----------------------------------------------------------------------------
int ssl3_read(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int result;
  int v7;
  int v8;

  *(uint32_t *)__errno(a1, a2) = 0;
  v5 = a3[22];
  if ( *(uint32_t *)(v5 + 404) != 0 )
  {
    ssl3_renegotiate_check((int)(uintptr_t)(a3));
    v5 = a3[22];
  }
  *(uint32_t *)(v5 + 416) = 1;
  result = (*(int (**)(uint32_t *, int, int, int, uint32_t))(a3[2] + 52))(a3, 23, a4, a5, 0);
  v7 = a3[22];
  if ( result == -1 && *(uint32_t *)(v7 + 416) == 2 )
  {
    v8 = a3[2];
    ++a3[7];
    result = (*(int (**)(uint32_t *, int, int, int, uint32_t))(v8 + 52))(a3, 23, a4, a5, 0);
    --a3[7];
  }
  else
  {
    *(uint32_t *)(v7 + 416) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_write  (binary VA: 0x12eb930)
// Original: ssl3_write
// ----------------------------------------------------------------------------
int ssl3_write(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  int v8;

  *(uint32_t *)__errno(a1, a2) = 0;
  v5 = a3[22];
  if ( *(uint32_t *)(v5 + 404) != 0 )
  {
    ssl3_renegotiate_check((int)(uintptr_t)(a3));
    v5 = a3[22];
  }
  if ( (*(uint8_t *)v5 & 4) == 0 )
    return (*(int (**)(uint32_t *, int, int, int))(a3[2] + 56))(a3, 23, a4, a5);
  v6 = a3[4];
  if ( v6 != a3[5] )
    return (*(int (**)(uint32_t *, int, int, int))(a3[2] + 56))(a3, 23, a4, a5);
  if ( *(uint32_t *)(v5 + 4) == 0 )
  {
    result = ssl3_write_bytes(a3, 23, a4, a5);
    if ( result <= 0 )
      return result;
    *(uint32_t *)(a3[22] + 4) = result;
    v6 = a3[4];
  }
  a3[6] = 2;
  result = BIO_ctrl(v6, 11, 0, 0);
  if ( result > 0 )
  {
    a3[6] = 1;
    ssl_free_wbio_buffer(a3);
    *(uint32_t *)a3[22] &= ~4u;
    v8 = a3[22];
    result = *(uint32_t *)(v8 + 4);
    *(uint32_t *)(v8 + 4) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_peek  (binary VA: 0x12eba40)
// Original: ssl3_peek
// ----------------------------------------------------------------------------
int ssl3_peek(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int result;
  int v7;
  int v8;

  *(uint32_t *)__errno(a1, a2) = 0;
  v5 = a3[22];
  if ( *(uint32_t *)(v5 + 404) != 0 )
  {
    ssl3_renegotiate_check((int)(uintptr_t)(a3));
    v5 = a3[22];
  }
  *(uint32_t *)(v5 + 416) = 1;
  result = (*(int (**)(uint32_t *, int, int, int, int))(a3[2] + 52))(a3, 23, a4, a5, 1);
  v7 = a3[22];
  if ( result == -1 && *(uint32_t *)(v7 + 416) == 2 )
  {
    v8 = a3[2];
    ++a3[7];
    result = (*(int (**)(uint32_t *, int, int, int, int))(v8 + 52))(a3, 23, a4, a5, 1);
    --a3[7];
  }
  else
  {
    *(uint32_t *)(v7 + 416) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_read_n  (binary VA: 0x12ebb70)
// Original: ssl3_read_n
// ----------------------------------------------------------------------------
int ssl3_read_n(int a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v5;
  signed int n;
  int v7;
  uint8_t *v8;
  char *src;
  char *v10;
  uint32_t *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  signed int v17;
  int v18;
  char *dest;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  signed int v26;
  uint32_t *v27;

  v4 = a2;
  if ( a2 <= 0 )
    return v4;
  v5 = *(uint32_t **)(a1 + 88);
  v27 = v5;
  v24 = v5[59];
  if ( v24 == 0 )
  {
    if ( ssl3_setup_read_buffer((uint32_t *)a1) == 0 )
      return -1;
    v24 = v27[59];
    v5 = v27;
  }
  n = v5[62];
  v7 = -(v24 + 5) & 7;
  v21 = v7;
  if ( a4 == 0 )
  {
    if ( n != 0 )
    {
      v8 = (uint8_t *)(v27[61] + v24);
      if ( v7 != 0 && n > 4 && *v8 == 23 && ((uint8_t)v8[4] | ((uint8_t)v8[3] << 8)) > 0x7Fu )
      {
        memmove((void *)(v7 + v24), (const void *)(v27[61] + v24), n);
        v27[61] = v21;
        v8 = (uint8_t *)(v27[59] + v21);
      }
    }
    else
    {
      v27[61] = v7;
      v8 = (uint8_t *)(v7 + v24);
    }
    *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(v8);
    *(uint32_t *)(a1 + 80) = 0;
  }
  if ( (SSL_version(a1) == 65279 || SSL_version(a1) == 256) && a2 > n && n > 0 )
  {
    v4 = n;
    v18 = 0;
LABEL_25:
    *(uint32_t *)(a1 + 80) += v4;
    v27[62] = v18;
    v27[61] += v4;
    return v4;
  }
  if ( a2 <= n )
  {
    v18 = n - a2;
    goto LABEL_25;
  }
  v25 = *(uint32_t *)(a1 + 80);
  src = *(char **)(a1 + 76);
  v10 = (char *)(v27[59] + v21);
  if ( src == v10 )
  {
    v12 = v27[61];
    v11 = v27;
  }
  else
  {
    dest = (char *)(v27[59] + v21);
    memmove(dest, src, n + v25);
    v11 = v27;
    v10 = dest;
    v12 = v21 + v25;
    *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(dest);
    v27[61] = v21 + v25;
  }
  v13 = v11[60] - v12;
  v22 = v13;
  if ( a2 > v13 )
  {
    v4 = -1;
    ERR_put_error(20, 149, 68, &unk_1B15112, 0);
  }
  else
  {
    if ( *(uint32_t *)(a1 + 96) != 0 && a2 <= a3 )
    {
      v13 = a3;
      if ( v22 < a3 )
        v13 = v22;
      v26 = a2;
      v23 = v13;
      v14 = v10;
    }
    else
    {
      v23 = a2;
      v26 = a2;
      v14 = v10;
    }
    while ( 1 )
    {
      *(uint32_t *)__errno(v10, v13) = 0;
      v15 = *(uint32_t *)(a1 + 12);
      if ( v15 == 0 )
        break;
      *(uint32_t *)(a1 + 24) = 3;
      v16 = BIO_read(v15, &v14[n + v25], v23 - n);
      if ( v16 <= 0 )
        goto LABEL_31;
      n += v16;
      if ( SSL_version(a1) == 65279 || SSL_version(a1) == 256 )
      {
        v17 = v26;
        if ( v26 > n )
          v17 = n;
        goto LABEL_29;
      }
      if ( v26 <= n )
      {
        v17 = v26;
LABEL_29:
        v27[61] += v17;
        v27[62] = n - v17;
        *(uint32_t *)(a1 + 24) = 1;
        *(uint32_t *)(a1 + 80) += v17;
        return v17;
      }
    }
    ERR_put_error(20, 149, 211, &unk_1B15112, 0);
    v16 = -1;
LABEL_31:
    v4 = v16;
    v27[62] = n;
    if ( (*(uint8_t *)(a1 + 260) & 0x10) != 0 && v25 + n == 0 )
      ssl3_release_read_buffer(a1);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ssl3_do_uncompress  (binary VA: 0x12ebf00)
// Original: ssl3_do_uncompress
// ----------------------------------------------------------------------------
int ssl3_do_uncompress(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;

  v1 = *(uint32_t **)(a1 + 88);
  v2 = COMP_expand_block(*(uint32_t *)(a1 + 136), v1[72], 0x4000, v1[70], v1[68]);
  v3 = 0;
  if ( v2 >= 0 )
  {
    v1[68] = v2;
    v1[70] = v1[72];
    LOBYTE(v3) = 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ssl3_do_compress  (binary VA: 0x12ebf70)
// Original: ssl3_do_compress
// ----------------------------------------------------------------------------
int ssl3_do_compress(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;

  v1 = *(uint32_t **)(a1 + 88);
  v2 = COMP_compress_block(*(uint32_t *)(a1 + 148), v1[79], 17408, v1[80], v1[77]);
  v3 = 0;
  if ( v2 >= 0 )
  {
    v1[77] = v2;
    v1[80] = v1[79];
    LOBYTE(v3) = 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ssl3_write_pending  (binary VA: 0x12ebfe0)
// Original: ssl3_write_pending
// ----------------------------------------------------------------------------
int ssl3_write_pending(int a1, int a2, int a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  int result;
  int v8;
  int v9;
  int v10;

  v6 = *(uint32_t **)(a3 + 88);
  if ( v6[90] <= a6 && (v6[93] == a5 || (*(uint8_t *)(a3 + 260) & 2) != 0) && v6[91] == a4 )
  {
    while ( 1 )
    {
      *(uint32_t *)__errno(a1, a2) = 0;
      v9 = *(uint32_t *)(a3 + 16);
      if ( v9 != 0 )
      {
        *(uint32_t *)(a3 + 24) = 2;
        result = BIO_write(v9, v6[65] + v6[63], v6[66]);
        v8 = v6[66];
        if ( v8 == result )
          goto LABEL_11;
      }
      else
      {
        ERR_put_error(20, 159, 128, &unk_1B15112, 0);
        result = -1;
        v8 = v6[66];
        if ( v8 == -1 )
        {
LABEL_11:
          v6[66] = 0;
          v6[65] += result;
          if ( (*(uint8_t *)(a3 + 260) & 0x10) != 0 )
            ssl3_release_write_buffer(a3);
          v10 = *(uint32_t *)(a3 + 88);
          *(uint32_t *)(a3 + 24) = 1;
          return *(uint32_t *)(v10 + 368);
        }
      }
      if ( result <= 0 )
        break;
      a2 = v8 - result;
      v6[65] += result;
      v6[66] = a2;
    }
    if ( *(uint32_t *)a3 == 256 || *(uint32_t *)a3 == 65279 )
      v6[66] = 0;
  }
  else
  {
    ERR_put_error(20, 159, 127, &unk_1B15112, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_write_bytes  (binary VA: 0x12ec5d0)
// Original: ssl3_write_bytes
// ----------------------------------------------------------------------------
int ssl3_write_bytes(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  size_t v6;
  size_t v7;
  int result;
  size_t v9;

  v4 = *(uint32_t *)(a1 + 88);
  *(uint32_t *)(a1 + 24) = 1;
  v5 = *(uint32_t *)(v4 + 356);
  *(uint32_t *)(v4 + 356) = 0;
  if ( (SSL_state(a1) & 0x3000) != 0 && *(uint32_t *)(a1 + 28) == 0 )
  {
    result = (*(int (**)(int))(a1 + 32))(a1);
    if ( result < 0 )
      return result;
    if ( result == 0 )
    {
      ERR_put_error(20, 158, 229, &unk_1B15112, 0);
      return -1;
    }
  }
  v6 = a4 - v5;
  if ( a2 == 23 )
  {
    while ( 1 )
    {
      v9 = *(uint32_t *)(a1 + 276);
      if ( v6 <= v9 )
        v9 = v6;
      result = sub_12EC180((uint32_t *)a1, 23, (void *)(v5 + a3), v9, 0);
      if ( result <= 0 )
        break;
      if ( v6 == result || (*(uint8_t *)(a1 + 260) & 1) != 0 )
        goto LABEL_18;
      v6 -= result;
      v5 += result;
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = *(uint32_t *)(a1 + 276);
      if ( v6 <= v7 )
        v7 = v6;
      result = sub_12EC180((uint32_t *)a1, a2, (void *)(v5 + a3), v7, 0);
      if ( result <= 0 )
        break;
      if ( v6 == result )
      {
LABEL_18:
        result += v5;
        *(uint32_t *)(*(uint32_t *)(a1 + 88) + 228) = 0;
        return result;
      }
      v6 -= result;
      v5 += result;
    }
  }
  *(uint32_t *)(*(uint32_t *)(a1 + 88) + 356) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_do_change_cipher_spec  (binary VA: 0x12ec720)
// Original: ssl3_do_change_cipher_spec
// ----------------------------------------------------------------------------
int ssl3_do_change_cipher_spec(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v1 = *(uint32_t *)(a1 + 88);
  v2 = (*(uint32_t *)(a1 + 52) & 0x2000) == 0 ? 17 : 33;
  if ( *(uint32_t *)(v1 + 888) == 0 )
  {
    v10 = *(uint32_t *)(a1 + 192);
    if ( v10 == 0 )
    {
      ERR_put_error(20, 292, 133, &unk_1B15112, 0);
      return 0;
    }
    *(uint32_t *)(v10 + 180) = *(uint32_t *)(v1 + 836);
    v11 = (*(int (**)(int))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 8))(a1);
    v4 = 0;
    if ( v11 == 0 )
      return v4;
  }
  v3 = (*(int (**)(int, int))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 16))(a1, v2);
  v4 = 0;
  if ( v3 != 0 )
  {
    v5 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 100);
    if ( (*(uint8_t *)(a1 + 53) & 0x10) != 0 )
    {
      v6 = *(uint32_t *)(v5 + 40);
      v7 = *(uint32_t *)(v5 + 44);
    }
    else
    {
      v6 = *(uint32_t *)(v5 + 32);
      v7 = *(uint32_t *)(v5 + 36);
    }
    v8 = *(uint32_t *)(a1 + 88);
    *(uint32_t *)(v8 + 824) = (*(int (**)(int, int, int, int))(v5 + 20))(a1, v6, v7, v8 + 696);
    return 1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_alert  (binary VA: 0x12ec840)
// Original: ssl3_send_alert
// ----------------------------------------------------------------------------
int ssl3_send_alert(uint32_t *a1, int a2, int a3)
{
  int v3;
  char v4;
  int result;
  char v6;

  v3 = (*(int (**)(int))(*(uint32_t *)(a1[2] + 100) + 48))(a3);
  if ( v3 == 70 )
  {
    v4 = 40;
    if ( *a1 == 768 )
    {
      if ( a2 != 2 )
        goto LABEL_4;
LABEL_9:
      if ( a1[48] != 0 )
      {
        v6 = v4;
        SSL_CTX_remove_session(a1[57], a1[48]);
        v4 = v6;
      }
      goto LABEL_4;
    }
  }
  result = -1;
  if ( v3 < 0 )
    return result;
  v4 = v3;
  if ( a2 == 2 )
    goto LABEL_9;
LABEL_4:
  *(uint32_t *)(a1[22] + 396) = 1;
  *(uint8_t *)(a1[22] + 400) = a2;
  *(uint8_t *)(a1[22] + 401) = v4;
  result = -1;
  if ( *(uint32_t *)(a1[22] + 264) == 0 )
    return (*(int (**)(uint32_t *))(a1[2] + 60))(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_read_bytes  (binary VA: 0x12ec920)
// Original: ssl3_read_bytes
// ----------------------------------------------------------------------------
int ssl3_read_bytes(uint32_t *a1, int a2, uint8_t *dest, signed int a4, int a5)
{
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  void (*v13)(uint32_t, uint32_t, int, int, int, uint32_t *, uint32_t);
  void (*v14)(uint32_t, uint32_t, uint32_t);
  int result;
  int v16;
  unsigned int v17;
  uint8_t *v18;
  int16_t v19;
  int v20;
  int v21;
  bool v22; // cc
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  void (*v33)(uint32_t, uint32_t, int, int, int, uint32_t *, uint32_t);
  unsigned int *v34;
  unsigned int v35;
  int v36;
  unsigned int *i;
  char v38;
  int v39;
  int rbio;
  int v41;
  char *v42;
  char v43;
  unsigned int v44;
  int v45;
  int v46;
  void (*v47)(uint32_t, uint32_t, int, int, int, uint32_t *, uint32_t);
  int v48;
  size_t v49;
  int v50;
  size_t v51;
  int buffer;
  int v53;
  int v54;
  bool v55;
  typedef size_t _g4_t_n;
  typedef int16_t _g4_t_v57;
  typedef void *_g4_t_v58;
  typedef uint16_t _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef void *_g4_t_s2;
  typedef void (*_g4_t_v68)(uint32_t, uint32_t, uint32_t);
  typedef uint8_t _g4_t_s1[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_n)) > _g4_s0 ? (12u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v57)) > _g4_s1 ? (12u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v58)) > _g4_s2 ? (16u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v59)) > _g4_s3 ? (16u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v60)) > _g4_s4 ? (20u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v61)) > _g4_s5 ? (20u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v62)) > _g4_s6 ? (24u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v63)) > _g4_s7 ? (24u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v64)) > _g4_s8 ? (28u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v65)) > _g4_s9 ? (28u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v66)) > _g4_s10 ? (32u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_s2)) > _g4_s11 ? (36u + sizeof(_g4_t_s2)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v68)) > _g4_s12 ? (40u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_s1)) > _g4_s13 ? (48u + sizeof(_g4_t_s1)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);

  if ( *(uint32_t *)(a1[22] + 236) == 0 )
  {
    buffer = ssl3_setup_read_buffer(a1);
    result = -1;
    if ( buffer == 0 )
      return result;
  }
  if ( a2 != 23 && a2 != 0 && a2 != 22 || a5 != 0 && a2 != 23 )
  {
    ERR_put_error(20, 148, 68, &unk_1B15112, 0);
    return -1;
  }
  if ( a2 == 22 )
  {
    v41 = a1[22];
    if ( *(uint32_t *)(v41 + 352) != 0 )
    {
      result = 0;
      v42 = (char *)(v41 + 348);
      if ( a4 <= 0 )
        goto LABEL_119;
      while ( 1 )
      {
        v43 = *v42++;
        dest[result++] = v43;
        --*(uint32_t *)(a1[22] + 352);
        v41 = a1[22];
        if ( result == a4 )
          break;
        if ( *(uint32_t *)(v41 + 352) == 0 )
          return result;
      }
      if ( *(uint32_t *)(v41 + 352) != 0 )
      {
LABEL_119:
        v44 = 0;
        do
        {
          *(uint8_t *)(v41 + v44 + 348) = v42[v44];
          v41 = a1[22];
          ++v44;
        }
        while ( *(uint32_t *)(v41 + 352) > v44 );
      }
      return result;
    }
  }
  if ( a1[7] == 0 && (SSL_state(a1) & 0x3000) != 0 )
  {
    result = ((int (*)(uint32_t *))a1[8])(a1);
    if ( result < 0 )
      return result;
    if ( result == 0 )
    {
LABEL_141:
      ERR_put_error(20, 148, 229, &unk_1B15112, 0);
      return -1;
    }
  }
  v5 = (uint32_t *)a1[22];
  v68 = nullptr;
  while ( 1 )
  {
    a1[6] = 1;
    v6 = v5[68];
    if ( v6 == 0 )
      break;
    v7 = v5;
    if ( a1[14] == 241 )
      break;
LABEL_10:
    if ( v7[96] != 0 && v5[67] != 22 )
    {
      ERR_put_error(20, 148, 145, &unk_1B15112, 0);
      v30 = 10;
      goto LABEL_55;
    }
    if ( (a1[12] & 2) != 0 )
    {
      v5[68] = 0;
      a1[6] = 1;
      return 0;
    }
    v8 = v5[67];
    if ( v8 == a2 )
    {
      if ( (SSL_state(a1) & 0x3000) != 0 && a2 == 23 && a1[32] == 0 )
      {
        ERR_put_error(20, 148, 100, &unk_1B15112, 0);
        v30 = 10;
        goto LABEL_55;
      }
      result = a4;
      if ( a4 > 0 )
      {
        v49 = v5[68];
        if ( a4 <= v49 )
          v49 = a4;
        memcpy(dest, (const void *)(v5[69] + v5[70]), v49);
        if ( a5 == 0 )
        {
          v50 = v5[68];
          v5[69] += v49;
          v51 = v50 - v49;
          v5[68] = v51;
          if ( v51 == 0 )
          {
            a1[14] = 240;
            v5[69] = 0;
            if ( (a1[65] & 0x10) != 0 )
              ssl3_release_read_buffer((int)(uintptr_t)(a1));
          }
        }
        return v49;
      }
      return result;
    }
    if ( v8 == 22 )
    {
      v63 = 4;
      v61 = v7 + 87;
      v34 = v7 + 88;
      goto LABEL_82;
    }
    if ( v8 == 21 )
    {
      v63 = 2;
      v61 = v7 + 85;
      v34 = v7 + 86;
LABEL_82:
      v35 = *v34;
      if ( v63 - *v34 <= v6 )
        v6 = v63 - *v34;
      v65 = v6;
      if ( v6 != 0 )
      {
        v36 = v5[69];
        for ( i = v34; ; v35 = *i )
        {
          v38 = *(uint8_t *)(v5[70] + v36++);
          *((uint8_t *)v61 + v35) = v38;
          *i = v35 + 1;
          --v5[68];
          v9 = v65-- == 1;
          v5[69] = v36;
          if ( v9 )
            break;
        }
        v35 = *i;
      }
      if ( v63 > v35 )
        goto LABEL_26;
    }
    if ( a1[9] != 0 )
    {
      v9 = SSL_state(a1) == 3;
      v10 = a1[22];
      if ( v9
        && *(uint32_t *)(v10 + 1048) == 0
        && (int)*a1 > 768
        && *(uint32_t *)(v10 + 352) > 3u
        && *(uint8_t *)(v10 + 348) == 1
        && (v45 = a1[48]) != 0
        && *(uint32_t *)(v45 + 180) != 0
        && (*(uint8_t *)(a1[57] + 166) & 4) == 0 )
      {
        v5[68] = 0;
        ssl3_send_alert(a1, 1, 100);
        v5 = (uint32_t *)a1[22];
      }
      else
      {
LABEL_18:
        if ( *(uint32_t *)(v10 + 344) > 1u )
        {
          v11 = *(uint8_t *)(v10 + 340);
          *(uint32_t *)(v10 + 344) = 0;
          v12 = *(uint8_t *)(v10 + 341);
          v13 = (void (*)(uint32_t, uint32_t, int, int, int, uint32_t *, uint32_t))a1[25];
          if ( v13 != nullptr )
            v13(0, *a1, 21, a1[22] + 340, 2, a1, a1[26]);
          v14 = (void (*)(uint32_t, uint32_t, uint32_t))a1[52];
          if ( v14 != nullptr || (v14 = *(void (**)(uint32_t, uint32_t, uint32_t))(a1[57] + 156)) != nullptr )
          {
LABEL_22:
            v58 = (void *)(v14);
            v14((uint32_t)(uintptr_t)(a1), 16388, v12 | (v11 << 8));
            v68 = (void (*)(uint32_t, uint32_t, uint32_t))v58;
          }
          else if ( v68 != nullptr )
          {
            v14 = v68;
            goto LABEL_22;
          }
          if ( v11 != 1 )
          {
            if ( v11 != 2 )
            {
              ERR_put_error(20, 148, 246, &unk_1B15112, 0);
              v30 = 47;
              goto LABEL_55;
            }
            v53 = a1[22];
            a1[6] = 1;
            *(uint32_t *)(v53 + 392) = v12;
            ERR_put_error(20, 148, v12 + 1000, &unk_1B15112, 0);
            BIO_snprintf(s1, 16, "%d", v12);
            ERR_add_error_data(2, "SSL alert number ", s1);
            v54 = a1[48];
            a1[12] |= 2u;
            SSL_CTX_remove_session(a1[57], v54);
            return 0;
          }
          *(uint32_t *)(a1[22] + 388) = v12;
          if ( v12 == 0 )
          {
            a1[12] |= 2u;
            return 0;
          }
          if ( v12 == 100 )
          {
            ERR_put_error(20, 148, 339, &unk_1B15112, 0);
            v30 = 40;
            goto LABEL_55;
          }
          goto LABEL_26;
        }
        if ( (a1[12] & 1) != 0 )
        {
          a1[6] = 1;
          v5[68] = 0;
          return 0;
        }
        v39 = v5[67];
        if ( v39 == 20 )
        {
          if ( v5[68] != 1 || v5[69] != 0 || *(uint8_t *)(v46 = v5[70]) != 1 )
          {
            ERR_put_error(20, 148, 103, &unk_1B15112, 0);
            v30 = 47;
            goto LABEL_55;
          }
          if ( *(uint32_t *)(v10 + 836) == 0 )
          {
            ERR_put_error(20, 148, 133, &unk_1B15112, 0);
            v30 = 10;
            goto LABEL_55;
          }
          v5[68] = 0;
          v47 = (void (*)(uint32_t, uint32_t, int, int, int, uint32_t *, uint32_t))a1[25];
          if ( v47 != nullptr )
            v47(0, *a1, 20, v46, 1, a1, a1[26]);
          *(uint32_t *)(a1[22] + 384) = 1;
          if ( ssl3_do_change_cipher_spec((int)(uintptr_t)(a1)) == 0 )
            return -1;
          goto LABEL_26;
        }
        if ( *(uint32_t *)(v10 + 352) <= 3u || a1[7] != 0 )
        {
          if ( v39 >= 20 )
          {
            if ( v39 <= 22 )
            {
              ERR_put_error(20, 148, 68, &unk_1B15112, 0);
              v30 = 10;
              goto LABEL_55;
            }
            if ( v39 == 23 )
            {
              if ( *(uint32_t *)(v10 + 416) != 0
                && *(uint32_t *)(v10 + 408) != 0
                && (((v48 = a1[13]) & 0x1000) != 0 && v48 > 4367 && v48 <= 4384
                 || (v48 & 0x2000) != 0 && v48 <= 8480 && v48 > 8463) )
              {
                *(uint32_t *)(v10 + 416) = 2;
                return -1;
              }
LABEL_153:
              ERR_put_error(20, 148, 245, &unk_1B15112, 0);
              v30 = 10;
              goto LABEL_55;
            }
          }
          if ( *a1 != 769 )
            goto LABEL_153;
          v5[68] = 0;
          v5 = (uint32_t *)a1[22];
        }
        else
        {
          if ( (a1[13] & 0xFFF) == 3 && (*(uint8_t *)v10 & 1) == 0 )
          {
            v55 = a1[9] == 0;
            a1[10] = 1;
            a1[13] = v55 ? 4096 : 0x2000;
          }
LABEL_104:
          result = ((int (*)(uint32_t *))a1[8])(a1);
          if ( result < 0 )
            return result;
          if ( result == 0 )
            goto LABEL_141;
          if ( (a1[65] & 4) != 0 )
          {
LABEL_26:
            v5 = (uint32_t *)a1[22];
          }
          else
          {
            v5 = (uint32_t *)a1[22];
            if ( v5[62] == 0 )
            {
              a1[6] = 3;
              rbio = SSL_get_rbio(a1);
              BIO_clear_flags(rbio, 15);
              BIO_set_flags(rbio, 9);
              return -1;
            }
          }
        }
      }
    }
    else
    {
      v10 = a1[22];
      if ( *(uint32_t *)(v10 + 352) <= 3u )
        goto LABEL_18;
      if ( *(uint8_t *)(v10 + 348) != 0 )
        goto LABEL_18;
      v31 = a1[48];
      if ( v31 == 0 || *(uint32_t *)(v31 + 180) == 0 )
        goto LABEL_18;
      *(uint32_t *)(v10 + 352) = 0;
      v32 = a1[22];
      if ( (*(uint32_t *)(v32 + 348) & 0xFFFFFF00) != 0 )
      {
        ERR_put_error(20, 148, 105, &unk_1B15112, 0);
        v30 = 50;
        goto LABEL_55;
      }
      v33 = (void (*)(uint32_t, uint32_t, int, int, int, uint32_t *, uint32_t))a1[25];
      if ( v33 != nullptr )
        v33(0, *a1, 22, v32 + 348, 4, a1, a1[26]);
      if ( SSL_state(a1) != 3 )
        goto LABEL_26;
      v5 = (uint32_t *)a1[22];
      if ( (*(uint8_t *)v5 & 1) == 0 && v5[101] == 0 )
      {
        ssl3_renegotiate((int)(uintptr_t)(a1));
        if ( ssl3_renegotiate_check((int)(uintptr_t)(a1)) == 0 )
          goto LABEL_26;
        goto LABEL_104;
      }
    }
  }
  v16 = 0;
  v66 = a1[48];
  v64 = 17728;
  if ( (a1[64] & 0x20) != 0 )
  {
    if ( v5[58] == 0 )
    {
      ERR_put_error(20, 143, 68, &unk_1B15112, 0);
      return -1;
    }
    v64 = 34112;
    v16 = 0x4000;
  }
  s2 = nullptr;
  v62 = 0;
  v60 = v16;
  while ( 2 )
  {
    if ( a1[14] == 241 )
    {
      v17 = a1[20];
      if ( v17 > 4 )
      {
LABEL_41:
        if ( v17 - 5 < v6 )
        {
          result = ssl3_read_n((int)(uintptr_t)(a1), v6, v6, 1);
          if ( result <= 0 )
            return result;
        }
        v20 = a1[19];
        a1[14] = 240;
        v21 = v20 + 5;
        v22 = v5[68] <= v64;
        v5[71] = v21;
        if ( !v22 )
        {
          ERR_put_error(20, 143, 150, &unk_1B15112, 0);
          v30 = 22;
          goto LABEL_55;
        }
        v5[70] = v21;
        v23 = 0;
        v24 = (**(int (***)(uint32_t *, uint32_t))(a1[2] + 100))(a1, 0);
        if ( v24 <= 0 )
        {
          if ( v24 == 0 )
            return -1;
          LOWORD(v23) = 1;
        }
        if ( v66 != 0 && a1[32] != 0 && EVP_MD_CTX_md(a1[33]) != 0 && v62 == 0 )
        {
          v25 = EVP_MD_CTX_md(a1[33]);
          v26 = EVP_MD_size(v25);
          if ( v26 < 0 )
            OpenSSLDie(&unk_1B15112, 0, "mac_size >= 0");
          v27 = v5[68];
          if ( v27 > v26 + v60 + 17408 )
            v23 = 1;
          if ( v27 < v26 )
          {
            v5[68] = 0;
            v23 = 1;
          }
          else
          {
            v28 = v27 - v26;
            v5[68] = v28;
            s2 = (void *)(v5[70] + v28);
          }
          n = v26;
          v29 = (*(int (**)(uint32_t *, uint8_t *, uint32_t))(*(uint32_t *)(a1[2] + 100) + 4))(a1, s1, 0);
          if ( s2 == nullptr || v29 < 0 || memcmp(s1, s2, n) != 0 )
          {
LABEL_54:
            ERR_put_error(20, 143, 281, &unk_1B15112, 0);
            v30 = 20;
            goto LABEL_55;
          }
        }
        else
        {
          v62 = 1;
        }
        if ( v23 != 0 )
          goto LABEL_54;
        if ( a1[34] != 0 )
        {
          if ( v5[68] > (unsigned int)(v60 + 17408) )
          {
            ERR_put_error(20, 143, 140, &unk_1B15112, 0);
            v30 = 22;
            goto LABEL_55;
          }
          if ( ssl3_do_uncompress((int)(uintptr_t)(a1)) == 0 )
          {
            ERR_put_error(20, 143, 107, &unk_1B15112, 0);
            v30 = 30;
            goto LABEL_55;
          }
        }
        if ( v5[68] > (unsigned int)(v60 + 0x4000) )
        {
          ERR_put_error(20, 143, 146, &unk_1B15112, 0);
          v30 = 22;
          goto LABEL_55;
        }
        v5[69] = 0;
        a1[20] = 0;
        v6 = v5[68];
        if ( v6 != 0 )
        {
          v7 = (uint32_t *)a1[22];
          goto LABEL_10;
        }
        continue;
      }
    }
    break;
  }
  result = ssl3_read_n((int)(uintptr_t)(a1), 5, *(uint32_t *)(a1[22] + 240), 0);
  if ( result <= 0 )
    return result;
  v18 = (uint8_t *)a1[19];
  a1[14] = 241;
  v5[67] = *v18;
  v19 = __builtin_bswap16(*(uint16_t *)(v18 + 1));
  v6 = v18[4] | (v18[3] << 8);
  v5[68] = v6;
  if ( a1[67] != 0 || v19 == *a1 )
  {
    if ( v19 >> 8 != 3 )
    {
      ERR_put_error(20, 143, 267, &unk_1B15112, 0);
      return -1;
    }
    if ( v6 > *(uint32_t *)(a1[22] + 240) - 5 )
    {
      ERR_put_error(20, 143, 198, &unk_1B15112, 0);
      v30 = 22;
      goto LABEL_55;
    }
    v17 = a1[20];
    goto LABEL_41;
  }
  v57 = v19;
  v59 = v19;
  ERR_put_error(20, 143, 267, &unk_1B15112, 0);
  v30 = 70;
  if ( (uint16_t)(*(uint16_t *)a1 ^ v57) >> 8 == 0 )
    *a1 = v59;
LABEL_55:
  ssl3_send_alert(a1, 2, v30);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_dispatch_alert  (binary VA: 0x12ed9e0)
// Original: ssl3_dispatch_alert
// ----------------------------------------------------------------------------
int ssl3_dispatch_alert(uint32_t *a1)
{
  int v1;
  int v2;
  void (*v3)(int, uint32_t, int, int, int, uint32_t *, uint32_t);
  void (*v4)(uint32_t *, int, int);

  *(uint32_t *)(a1[22] + 396) = 0;
  v1 = sub_12EC180(a1, 21, (void *)(a1[22] + 400), 2u, 0);
  v2 = a1[22];
  if ( v1 <= 0 )
  {
    *(uint32_t *)(v2 + 396) = 1;
  }
  else
  {
    if ( *(uint8_t *)(v2 + 400) == 2 )
      BIO_ctrl(a1[4], 11, 0, 0);
    v3 = (void (*)(int, uint32_t, int, int, int, uint32_t *, uint32_t))a1[25];
    if ( v3 != nullptr )
      v3(1, *a1, 21, a1[22] + 400, 2, a1, a1[26]);
    v4 = (void (*)(uint32_t *, int, int))a1[52];
    if ( v4 != nullptr || (v4 = *(void (**)(uint32_t *, int, int))(a1[57] + 156)) != nullptr )
      v4(a1, 16392, *(uint8_t *)(a1[22] + 401) | (*(uint8_t *)(a1[22] + 400) << 8));
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_hello_request  (binary VA: 0x12edb70)
// Original: ssl3_send_hello_request
// ----------------------------------------------------------------------------
int ssl3_send_hello_request(uint32_t *a1)
{
  uint8_t *v1;

  if ( a1[13] == 8480 )
  {
    v1 = *(uint8_t **)(a1[15] + 4);
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    a1[13] = 8481;
    a1[17] = 4;
    a1[18] = 0;
  }
  return ssl3_do_write(a1, 22);
}

// ----------------------------------------------------------------------------
// Function: ssl3_check_client_hello  (binary VA: 0x12edbd0)
// Original: ssl3_check_client_hello
// ----------------------------------------------------------------------------
char ssl3_check_client_hello(uint32_t *a1)
{
  char result;
  int v2;
  void *v3;
  uint32_t v4[4];

  result = (*(int (**)(uint32_t *, int, int, int, uint32_t, uint32_t *))(a1[2] + 48))(a1, 8576, 8577, -1, a1[66], v4);
  if ( v4[0] != 0 )
  {
    *(uint32_t *)(a1[22] + 852) = 1;
    v2 = a1[22];
    result = 1;
    if ( *(uint32_t *)(v2 + 832) == 1 )
    {
      v3 = *(void **)(v2 + 840);
      result = 2;
      if ( v3 != nullptr )
      {
        DH_free(v3);
        *(uint32_t *)(a1[22] + 840) = 0;
        return 2;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_server_hello  (binary VA: 0x12edc80)
// Original: ssl3_send_server_hello
// ----------------------------------------------------------------------------
int ssl3_send_server_hello(uint32_t *a1)
{
  int v2;
  uint32_t *v3;
  signed int n;
  uint8_t *v5;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  int v9;

  if ( a1[13] == 8496 )
  {
    v2 = *(uint32_t *)(a1[15] + 4);
    *(uint8_t *)(v2 + 4) = BYTE1(*a1);
    *(uint8_t *)(v2 + 5) = *a1;
    v3 = (uint32_t *)(a1[22] + 160);
    *(uint32_t *)(v2 + 6) = *v3;
    *(uint32_t *)(v2 + 10) = v3[1];
    *(uint32_t *)(v2 + 14) = v3[2];
    *(uint32_t *)(v2 + 18) = v3[3];
    *(uint32_t *)(v2 + 22) = v3[4];
    *(uint32_t *)(v2 + 26) = v3[5];
    *(uint32_t *)(v2 + 30) = v3[6];
    *(uint32_t *)(v2 + 34) = v3[7];
    if ( (*(uint8_t *)(a1[57] + 32) & 2) == 0 && a1[27] == 0 )
      *(uint32_t *)(a1[48] + 68) = 0;
    n = *(uint32_t *)(a1[48] + 68);
    if ( n > 32 )
      goto LABEL_14;
    *(uint8_t *)(v2 + 38) = n;
    memcpy((void *)(v2 + 39), (const void *)(a1[48] + 72), n);
    v5 = (uint8_t *)(ssl3_put_cipher_by_char(*(uint32_t *)(a1[22] + 836), (uint8_t *)(v2 + 39 + n)) + v2 + 39 + n);
    v6 = *(uint32_t **)(a1[22] + 908);
    if ( v6 != nullptr )
      *v5 = *v6;
    else
      *v5 = 0;
    v7 = v5 + 1;
    if ( (int)ssl_prepare_serverhello_tlsext(a1) <= 0 )
    {
      ERR_put_error(20, 242, 275, &unk_1B15112, 0);
      return -1;
    }
    v8 = (int)(uintptr_t)(ssl_add_serverhello_tlsext(a1, v7, v2 + 0x4000));
    if ( v8 == 0 )
    {
LABEL_14:
      ERR_put_error(20, 242, 68, &unk_1B15112, 0);
      return -1;
    }
    v9 = v8 - (v2 + 4);
    *(uint8_t *)v2 = 2;
    *(uint8_t *)(v2 + 3) = v9;
    *(uint8_t *)(v2 + 1) = BYTE2(v9);
    *(uint8_t *)(v2 + 2) = BYTE1(v9);
    a1[13] = 8497;
    a1[17] = v8 - v2;
    a1[18] = 0;
  }
  return ssl3_do_write(a1, 22);
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_server_done  (binary VA: 0x12eecc0)
// Original: ssl3_send_server_done
// ----------------------------------------------------------------------------
int ssl3_send_server_done(uint32_t *a1)
{
  uint8_t *v1;

  if ( a1[13] == 8560 )
  {
    v1 = *(uint8_t **)(a1[15] + 4);
    *v1 = 14;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    a1[13] = 8561;
    a1[17] = 4;
    a1[18] = 0;
  }
  return ssl3_do_write(a1, 22);
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_server_key_exchange  (binary VA: 0x12eed20)
// Original: ssl3_send_server_key_exchange
// ----------------------------------------------------------------------------
int ssl3_send_server_key_exchange(int a1)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int32_t v7;
  int32_t v8;
  int v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  int32_t v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  uint8_t *v19;
  int32_t v20;
  int v21;
  int v22;
  int v24;
  int v25;
  int v26;
  int v27;
  int32_t v28;
  int v29;
  void *v30;
  int curve_name;
  int v32;
  void *v33;
  int v34;
  const char *v35;
  size_t v36;
  char *v37;
  int *sign_pkey;
  int v39;
  int (*v40)(int, int, int);
  int v41;
  int v42;
  int v43;
  int (*v44)(int, int, int);
  int (*v45)(int, int, int);
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  typedef int32_t _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t *_g4_t_v60;
  typedef uint32_t _g4_t_v61[3];
  typedef int _g4_t_v62;
  typedef __m128i _g4_t_v63[2];
  typedef uint8_t _g4_t_v64[24];
  typedef uint8_t _g4_t_v65[48];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v46)) > _g4_s0 ? (4u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v50)) > _g4_s4 ? (24u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v51)) > _g4_s5 ? (28u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v52)) > _g4_s6 ? (32u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v53)) > _g4_s7 ? (32u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v54)) > _g4_s8 ? (36u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v55)) > _g4_s9 ? (36u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v56)) > _g4_s10 ? (40u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v57)) > _g4_s11 ? (40u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v58)) > _g4_s12 ? (40u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v59)) > _g4_s13 ? (44u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v60)) > _g4_s14 ? (44u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v61)) > _g4_s15 ? (48u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v62)) > _g4_s16 ? (60u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v63)) > _g4_s17 ? (64u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v64)) > _g4_s18 ? (100u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v65)) > _g4_s19 ? (124u + sizeof(_g4_t_v65)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 124u);

  EVP_MD_CTX_init(v64);
  v1 = a1;
  if ( *(uint32_t *)(a1 + 52) != 8528 )
    goto LABEL_28;
  v2 = *(uint32_t **)(a1 + 88);
  v3 = v2;
  v4 = v2[209];
  v56 = *(uint32_t *)(v4 + 12);
  v63[0] = g4_to_m128i(0);
  v5 = *(uint32_t **)(a1 + 152);
  v59 = *(uint32_t *)(a1 + 60);
  if ( (v56 & 1) != 0 )
  {
    v6 = v5[6];
    if ( v6 != 0 )
    {
LABEL_4:
      v52 = *(uint32_t *)(v6 + 16);
g4_m128_lane<int32_t>(v63[0], 0) = v52;
      v7 = *(uint32_t *)(v6 + 20);
      v2[220] = 1;
g4_m128_lane<int32_t>(v63[0], 1) = v7;
      goto LABEL_5;
    }
    v40 = (int (*)(int, int, int))v5[7];
    if ( v40 != nullptr )
    {
      v41 = v40(a1, *(uint32_t *)(v4 + 32) & 2, (*(uint32_t *)(v4 + 32) & 8) == 0 ? 1024 : 512);
      v6 = v41;
      if ( v41 != 0 )
      {
        RSA_up_ref(v41);
        v5[6] = v6;
        v2 = *(uint32_t **)(a1 + 88);
        goto LABEL_4;
      }
      ERR_put_error(20, 155, 282, &unk_1B15112, 0);
    }
    else
    {
      ERR_put_error(20, 155, 172, &unk_1B15112, 0);
    }
LABEL_87:
    v43 = 40;
    v48 = nullptr;
    goto LABEL_78;
  }
  if ( (v56 & 8) == 0 )
  {
    if ( (v56 & 0x80u) == 0 )
    {
      if ( (v56 & 0x100) == 0 )
      {
        ERR_put_error(20, 155, 250, &unk_1B15112, 0);
        goto LABEL_87;
      }
      v10 = strlen(*(const char **)(*(uint32_t *)(a1 + 228) + 332)) + 2;
      LOBYTE(v47) = 0;
      v49 = 0;
      v48 = nullptr;
    }
    else
    {
      v29 = v5[10];
      if ( v29 == 0 )
      {
        v45 = (int (*)(int, int, int))v5[11];
        if ( v45 == nullptr
          || (v29 = v45(a1, *(uint32_t *)(v4 + 32) & 2, (*(uint32_t *)(v4 + 32) & 8) == 0 ? 1024 : 512)) == 0 )
        {
          ERR_put_error(20, 155, 311, &unk_1B15112, 0);
          goto LABEL_87;
        }
        v2 = *(uint32_t **)(a1 + 88);
      }
      v30 = (void *)v2[211];
      if ( v30 != nullptr )
      {
        EC_KEY_free(v30);
        goto LABEL_73;
      }
      if ( EC_KEY_up_ref(v29) == 0
        || ((*(uint32_t *)(*(uint32_t *)(a1 + 88) + 844) = v29, EC_KEY_get0_public_key(v29) == 0)
         || EC_KEY_get0_private_key(v29) == 0
         || (*(uint8_t *)(a1 + 258) & 8) != 0)
        && EC_KEY_generate_key(v29) == 0
        || (v55 = EC_KEY_get0_group(v29)) == 0
        || EC_KEY_get0_public_key(v29) == 0
        || EC_KEY_get0_private_key(v29) == 0 )
      {
        v33 = nullptr;
        ERR_put_error(20, 155, 43, &unk_1B15112, 0);
        goto LABEL_68;
      }
      if ( (*(uint8_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 836) + 32) & 2) != 0 && (int)EC_GROUP_get_degree(v55) > 163 )
      {
        v33 = nullptr;
        ERR_put_error(20, 155, 310, &unk_1B15112, 0);
        goto LABEL_68;
      }
      curve_name = EC_GROUP_get_curve_name(v55);
      v47 = tls1_ec_nid2curve_id(curve_name);
      if ( v47 == 0 )
      {
        v33 = nullptr;
        ERR_put_error(20, 155, 315, &unk_1B15112, 0);
        goto LABEL_68;
      }
      v32 = EC_KEY_get0_public_key(v29);
      v53 = EC_POINT_point2oct(v55, v32, 4, 0, 0, 0);
      v48 = (void *)CRYPTO_malloc(v53, (int)(uintptr_t)(&unk_1B15112), 0);
      v33 = (void *)BN_CTX_new();
      if ( v33 == nullptr || v48 == nullptr )
      {
        ERR_put_error(20, 155, 65, &unk_1B15112, 0);
        goto LABEL_66;
      }
      v34 = EC_KEY_get0_public_key(v29);
      v49 = EC_POINT_point2oct(v55, v34, 4, v48, v53, v33);
      if ( v49 == 0 )
      {
        ERR_put_error(20, 155, 43, &unk_1B15112, 0);
        goto LABEL_66;
      }
      BN_CTX_free(v33);
      v10 = v49 + 4;
      memset(v63, 0, 16);
      v3 = *(uint32_t **)(a1 + 88);
    }
    v61[0] = 0;
    v52 = 0;
LABEL_11:
    v15 = v3[209];
    v16 = 0;
    v54 = nullptr;
    if ( (*(uint8_t *)(v15 + 16) & 4) != 0 || (*(uint8_t *)(v15 + 13) & 1) != 0 )
      goto LABEL_13;
    sign_pkey = (int *)ssl_get_sign_pkey(a1, v15);
    v54 = sign_pkey;
    if ( sign_pkey != nullptr )
    {
      v16 = EVP_PKEY_size(sign_pkey);
LABEL_13:
      v50 = v10 + 4;
      if ( BUF_MEM_grow_clean(v59, v10 + 4 + v16) != 0 )
      {
        v61[0] = 0;
        v60 = *(uint8_t **)(*(uint32_t *)(a1 + 60) + 4);
        v51 = v60 + 4;
        v17 = (char *)(v60 + 4);
        if ( v52 != 0 )
        {
          v18 = 0;
          do
          {
            *v17 = BYTE1(g4_m128_lane<int32_t>(v63[1], v18 + 1));
            v17[1] =g4_m128_lane<int32_t>(v63[1], v61[0] + 1);
            v19 = (uint8_t *)(v17 + 2);
            BN_bn2bin(g4_m128_lane<int32_t>(v63[0], v61[0]), v19);
            v17 = (char *)(&v19[g4_m128_lane<int32_t>(v63[1], v61[0] + 1)]);
            v18 = v61[0] + 1;
            v20 =g4_m128_lane<int32_t>(v63[0], ++v61[0]);
          }
          while ( v20 != 0 );
        }
        if ( (v56 & 0x80u) != 0 )
        {
          *v17 = 3;
          v17[3] = v49;
          v17[1] = 0;
          v17[2] = v47;
          v37 = v17 + 4;
          memcpy(v37, v48, v49);
          CRYPTO_free(v48);
          v17 = &v37[v49];
        }
        if ( (v56 & 0x100) != 0 )
        {
          *v17 = (uint16_t)strlen(*(const char **)(*(uint32_t *)(a1 + 228) + 332)) >> 8;
          v17[1] = strlen(*(const char **)(*(uint32_t *)(a1 + 228) + 332));
          v57 = v17 + 2;
          v35 = *(const char **)(*(uint32_t *)(a1 + 228) + 332);
          v36 = strlen(v35);
          strncpy(v57, v35, v36);
          v17 = &v57[strlen(*(const char **)(*(uint32_t *)(a1 + 228) + 332))];
        }
        if ( v54 == nullptr )
          goto LABEL_27;
        v21 = *v54;
        if ( *v54 == 6 )
        {
          EVP_DigestInit_ex(v64, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 140), 0);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 192, 32);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 160, 32);
          EVP_DigestUpdate(v64, v51, v10);
          EVP_DigestFinal_ex(v64, v65, v61);
          v58 = v61[0];
          EVP_DigestInit_ex(v64, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 144), 0);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 192, 32);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 160, 32);
          EVP_DigestUpdate(v64, v51, v10);
          EVP_DigestFinal_ex(v64, &v65[v58], v61);
          if ( (int)RSA_sign(114, v65, v61[0] + v58, v17 + 2, &v62, v54[5]) > 0 )
          {
            *v17 = BYTE1(v62);
            v17[1] = v62;
            v10 += v62 + 2;
            v50 = v10 + 4;
            goto LABEL_27;
          }
          v33 = nullptr;
          ERR_put_error(20, 155, 4, &unk_1B15112, 0);
          goto LABEL_66;
        }
        if ( v21 == 116 )
        {
          v39 = (int)(uintptr_t)(EVP_dss1());
          EVP_DigestInit_ex(v64, v39, 0);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 192, 32);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 160, 32);
          EVP_DigestUpdate(v64, v51, v10);
          if ( EVP_SignFinal(v64, v17 + 2, v61, v54) != 0 )
            goto LABEL_26;
          v33 = nullptr;
          ERR_put_error(20, 155, 10, &unk_1B15112, 0);
          goto LABEL_66;
        }
        if ( v21 == 408 )
        {
          v22 = (int)(uintptr_t)(EVP_ecdsa());
          EVP_DigestInit_ex(v64, v22, 0);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 192, 32);
          EVP_DigestUpdate(v64, *(uint32_t *)(a1 + 88) + 160, 32);
          EVP_DigestUpdate(v64, v51, v10);
          if ( EVP_SignFinal(v64, v17 + 2, v61, v54) != 0 )
          {
LABEL_26:
            *v17 = BYTE1(v61[0]);
            v17[1] = v61[0];
            v10 += v61[0] + 2;
            v50 = v10 + 4;
LABEL_27:
            v60[1] = BYTE2(v10);
            v60[3] = v10;
            *v60 = 12;
            v60[2] = BYTE1(v10);
            v1 = a1;
            *(uint32_t *)(a1 + 68) = v50;
            *(uint32_t *)(a1 + 72) = 0;
LABEL_28:
            *(uint32_t *)(v1 + 52) = 8529;
            EVP_MD_CTX_cleanup(v64);
            return ssl3_do_write((uint32_t *)a1, 22);
          }
          v33 = nullptr;
          ERR_put_error(20, 155, 42, &unk_1B15112, 0);
          goto LABEL_66;
        }
        ERR_put_error(20, 155, 251, &unk_1B15112, 0);
        v43 = 40;
        goto LABEL_78;
      }
      v33 = nullptr;
      ERR_put_error(20, 155, 7, &unk_1B15112, 0);
LABEL_66:
      if ( v48 != nullptr )
        CRYPTO_free(v48);
      goto LABEL_68;
    }
    v43 = 50;
LABEL_78:
    v33 = nullptr;
    ssl3_send_alert((uint32_t *)a1, 2, v43);
    goto LABEL_66;
  }
  v24 = v5[8];
  if ( v24 == 0 )
  {
    v44 = (int (*)(int, int, int))v5[9];
    if ( v44 == nullptr || (v24 = v44(a1, *(uint32_t *)(v4 + 32) & 2, (*(uint32_t *)(v4 + 32) & 8) == 0 ? 1024 : 512)) == 0 )
    {
      ERR_put_error(20, 155, 171, &unk_1B15112, 0);
      goto LABEL_87;
    }
    v2 = *(uint32_t **)(a1 + 88);
  }
  if ( v2[210] != 0 )
  {
    DH_free(nullptr);
LABEL_73:
    v33 = nullptr;
    ERR_put_error(20, 155, 68, &unk_1B15112, 0);
    goto LABEL_68;
  }
  v46 = v24;
  v25 = DHparams_dup(v24);
  v26 = v25;
  if ( v25 != 0 )
  {
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 840) = v25;
    v27 = *(uint32_t *)(v46 + 20);
    if ( v27 != 0 && *(uint32_t *)(v46 + 24) != 0 && (*(uint8_t *)(a1 + 258) & 0x10) == 0 )
    {
      *(uint32_t *)(v26 + 20) = (uint32_t)(uintptr_t)(BN_dup(v27));
      v42 = (int)(uintptr_t)(BN_dup(*(uint32_t *)(v46 + 24)));
      *(uint32_t *)(v26 + 24) = v42;
      v28 = *(uint32_t *)(v26 + 20);
      if ( v28 != 0 && v42 != 0 )
        goto LABEL_38;
    }
    else if ( DH_generate_key(v26) != 0 )
    {
      v28 = *(uint32_t *)(v26 + 20);
LABEL_38:
g4_m128_lane<int64_t>(v63[0], 0) = *(uint64_t *)(v26 + 8);
      v52 =g4_m128_lane<int32_t>(v63[0], 0);
g4_m128_lane<int32_t>(v63[0], 2) = v28;
LABEL_5:
      v61[0] = 0;
      if ( v52 != 0 )
      {
        v8 = v52;
        v9 = 0;
        v10 = 0;
        do
        {
          v11 = BN_num_bits(v8);
          v12 = v11 + 14;
          v13 = v11 + 7;
          if ( v13 < 0 )
            v13 = v12;
g4_m128_lane<int32_t>(v63[1], v9 + 1) = v13 >> 3;
          v14 =g4_m128_lane<int32_t>(v63[1], v61[0] + 1);
          v9 = v61[0] + 1;
          v61[0] = v9;
          v10 += v14 + 2;
          v8 =g4_m128_lane<int32_t>(v63[0], v9);
        }
        while ( v8 != 0 );
        LOBYTE(v47) = 0;
        v49 = 0;
        v48 = nullptr;
        v3 = *(uint32_t **)(a1 + 88);
      }
      else
      {
        LOBYTE(v47) = 0;
        v49 = 0;
        v48 = nullptr;
        v10 = 0;
        v3 = *(uint32_t **)(a1 + 88);
      }
      goto LABEL_11;
    }
  }
  v33 = nullptr;
  ERR_put_error(20, 155, 5, &unk_1B15112, 0);
LABEL_68:
  BN_CTX_free(v33);
  EVP_MD_CTX_cleanup(v64);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_certificate_request  (binary VA: 0x12efbc0)
// Original: ssl3_send_certificate_request
// ----------------------------------------------------------------------------
int ssl3_send_certificate_request(int a1)
{
  int v2;
  int v3;
  int req_cert_type;
  unsigned int client_CA_list;
  char v6;
  char v7;
  int v8;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v20)) > _g4_s6 ? (44u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  if ( *(uint32_t *)(a1 + 52) != 8544 )
    return ssl3_do_write((uint32_t *)a1, 22);
  v2 = 0;
  v16 = *(uint32_t *)(a1 + 60);
  v3 = *(uint32_t *)(v16 + 4);
  v20[0] = v3 + 5;
  req_cert_type = ssl3_get_req_cert_type((int *)a1, (uint8_t *)(v3 + 5));
  *(uint8_t *)(v3 + 4) = req_cert_type;
  v19 = req_cert_type;
  v20[0] += req_cert_type + 2;
  v15 = req_cert_type + 3;
  client_CA_list = SSL_get_client_CA_list(a1);
  v6 = 0;
  v17 = client_CA_list;
  v18 = 0;
  if ( client_CA_list == 0 )
  {
LABEL_12:
    v20[0] = *(uint32_t *)(v16 + 4) + v19 + 5;
    *(uint8_t *)v20[0] = client_CA_list;
    *(uint8_t *)(v20[0] + 1) = v6;
    v11 = *(uint8_t **)(v16 + 4);
    v11[1] = BYTE2(v15);
    *v11 = 13;
    v11[2] = BYTE1(v15);
    v11[3] = v15;
    v12 = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(a1 + 72) = 0;
    *(uint32_t *)(a1 + 68) = v15 + 4;
    v13 = (uint8_t *)(*(uint32_t *)(v12 + 4) + v15 + 4);
    *v13 = 14;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    *(uint32_t *)(a1 + 68) += 4;
    v20[0] = (uint32_t)(uintptr_t)(v13 + 4);
    *(uint32_t *)(a1 + 52) = 8545;
    return ssl3_do_write((uint32_t *)a1, 22);
  }
  while ( 1 )
  {
    if ( v2 >= sk_num(client_CA_list) )
    {
      client_CA_list = v18 >> 8;
      v6 = v18;
      goto LABEL_12;
    }
    v14 = sk_value(v17, v2);
    v9 = i2d_X509_NAME(v14, 0);
    if ( BUF_MEM_grow_clean(v16, v9 + v15 + 4 + 2) == 0 )
      break;
    v10 = (uint8_t *)(*(uint32_t *)(v16 + 4) + v15 + 4);
    v20[0] = (uint32_t)(uintptr_t)(v10);
    if ( (*(uint8_t *)(a1 + 259) & 0x20) != 0 )
    {
      i2d_X509_NAME(v14, v20);
      v10[1] = v9 - 2;
      *v10 = (uint16_t)(v9 - 2) >> 8;
    }
    else
    {
      v7 = v9;
      v8 = v9 >> 8;
      v9 += 2;
      *v10 = v8;
      *(uint8_t *)(v20[0] + 1) = v7;
      v20[0] += 2;
      i2d_X509_NAME(v14, v20);
    }
    v15 += v9;
    v18 += v9;
    ++v2;
    client_CA_list = v17;
  }
  ERR_put_error(20, 150, 7, &unk_1B15112, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_server_certificate  (binary VA: 0x12efe10)
// Original: ssl3_send_server_certificate
// ----------------------------------------------------------------------------
int ssl3_send_server_certificate(uint32_t *a1)
{
  int server_send_cert;
  int v3;

  if ( a1[13] == 8512 )
  {
    server_send_cert = ssl_get_server_send_cert(a1);
    if ( server_send_cert == 0 )
    {
      v3 = *(uint32_t *)(a1[22] + 836);
      if ( *(uint32_t *)(v3 + 16) != 32 || (*(uint8_t *)(v3 + 12) & 0x10) != 0 )
      {
        ERR_put_error(20, 154, 68, &unk_1B15112, 0);
        return 0;
      }
    }
    a1[17] = ssl3_output_cert_chain((int)(uintptr_t)(a1), server_send_cert);
    a1[13] = 8513;
    a1[18] = 0;
  }
  return ssl3_do_write(a1, 22);
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_newsession_ticket  (binary VA: 0x12f1a10)
// Original: ssl3_send_newsession_ticket
// ----------------------------------------------------------------------------
int ssl3_send_newsession_ticket(uint32_t *a1)
{
  int v1;
  int v3;
  void *v4;
  uint8_t *v5;
  int (*v6)(uint32_t *, int *, uint8_t *, int *, int *, int);
  char *v7;
  size_t n;
  char *v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  typedef char *_g4_t_v15;
  typedef size_t _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef void *_g4_t_dest;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_src[16];
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[35];
  typedef int _g4_t_v28[55];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_dest)) > _g4_s4 ? (40u + sizeof(_g4_t_dest)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_src)) > _g4_s7 ? (52u + sizeof(_g4_t_src)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v23)) > _g4_s8 ? (68u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v24)) > _g4_s9 ? (72u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v25)) > _g4_s10 ? (76u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v26)) > _g4_s11 ? (80u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v27)) > _g4_s12 ? (84u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (224u + sizeof(_g4_t_v28)) > _g4_s13 ? (224u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 224u);

  if ( a1[13] != 8688 )
    return ssl3_do_write(a1, 22);
  v18 = (uint32_t *)a1[92];
  v1 = -1;
  v3 = i2d_SSL_SESSION(a1[48], 0);
  v16 = v3;
  if ( v3 <= 65280 && BUF_MEM_grow(a1[15], v3 + 138) != 0 )
  {
    v4 = (void *)CRYPTO_malloc(v16, (int)(uintptr_t)(&unk_1B15112), 0);
    v17 = v4;
    if ( v4 != nullptr )
    {
      dest = v4;
      i2d_SSL_SESSION(a1[48], &dest);
      v5 = *(uint8_t **)(a1[15] + 4);
      *v5 = 4;
      dest = v5 + 4;
      EVP_CIPHER_CTX_init(v27);
      HMAC_CTX_init(v28);
      v6 = (int (*)(uint32_t *, int *, uint8_t *, int *, int *, int))v18[78];
      if ( v6 != nullptr )
      {
        if ( v6(a1, &v23, src, v27, v28, 1) < 0 )
        {
          CRYPTO_free(v17);
          return v1;
        }
      }
      else
      {
        RAND_pseudo_bytes(src, 16);
        v13 = (int)(uintptr_t)(EVP_aes_128_cbc());
        EVP_EncryptInit_ex((int)(uintptr_t)(v27), v13, 0, (int)(uintptr_t)(v18 + 74), src);
        v14 = (int)(uintptr_t)(EVP_sha256());
        HMAC_Init_ex((int)(uintptr_t)(v28), v18 + 70, 0x10u, v14, 0);
        v23 = v18[66];
        v24 = v18[67];
        v25 = v18[68];
        v26 = v18[69];
      }
      v7 = (char *)dest;
      *(uint8_t *)dest = *(uint8_t *)(a1[48] + 239);
      v7[1] = *(uint16_t *)(a1[48] + 238);
      v7[2] = BYTE1(*(uint32_t *)(a1[48] + 236));
      v7[3] = *(uint32_t *)(a1[48] + 236);
      *(uint32_t *)(v7 + 6) = v23;
      *(uint32_t *)(v7 + 10) = v24;
      *(uint32_t *)(v7 + 14) = v25;
      *(uint32_t *)(v7 + 18) = v26;
      v15 = v7 + 6;
      dest = v7 + 22;
      n = EVP_CIPHER_CTX_iv_length(v27);
      memcpy(dest, src, n);
      v9 = (char *)dest;
      dest = &v9[EVP_CIPHER_CTX_iv_length(v27)];
      EVP_EncryptUpdate((int)(uintptr_t)(v27), (int)(uintptr_t)(dest), (int)(uintptr_t)(&v20), v17, v16);
      dest = (char *)dest + v20;
      EVP_EncryptFinal(v27, dest, &v20);
      dest = (char *)dest + v20;
      EVP_CIPHER_CTX_cleanup(v27);
      HMAC_Update(v28, v15, (uint8_t *)dest - (uint8_t *)(v15));
      HMAC_Final(v28, dest, &v21);
      HMAC_CTX_cleanup(v28);
      v10 = *(uint32_t *)(a1[15] + 4);
      v20 = (int)(uintptr_t)(dest) + v21 - v10;
      dest = (void *)(v10 + 1);
      *(uint8_t *)(v10 + 1) = (unsigned int)(v20 - 4) >> 16;
      *((uint8_t *)dest + 1) = (uint16_t)(v20 - 4) >> 8;
      *((uint8_t *)dest + 2) = v20 - 4;
      v11 = v20;
      v12 = (char *)dest;
      *((uint8_t *)dest + 7) = (uint16_t)(v20 - 10) >> 8;
      v12[8] = v11 - 10;
      a1[17] = v11;
      a1[13] = 8689;
      a1[18] = 0;
      dest = v12 + 9;
      CRYPTO_free(v17);
      return ssl3_do_write(a1, 22);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_cert_status  (binary VA: 0x12f1e10)
// Original: ssl3_send_cert_status
// ----------------------------------------------------------------------------
int ssl3_send_cert_status(int a1)
{
  int result;
  int v2;
  uint8_t *v3;
  int v4;

  if ( *(uint32_t *)(a1 + 52) != 8704 )
    return ssl3_do_write((uint32_t *)a1, 22);
  v2 = BUF_MEM_grow(*(uint32_t *)(a1 + 60), *(uint32_t *)(a1 + 316) + 8);
  result = -1;
  if ( v2 != 0 )
  {
    v3 = *(uint8_t **)(*(uint32_t *)(a1 + 60) + 4);
    *v3 = 22;
    v3[1] = (unsigned int)(*(uint32_t *)(a1 + 316) + 4) >> 16;
    v3[2] = (uint16_t)(*(uint16_t *)(a1 + 316) + 4) >> 8;
    v3[3] = *(uint32_t *)(a1 + 316) + 4;
    v3[4] = *(uint32_t *)(a1 + 296);
    v3[5] = *(uint16_t *)(a1 + 318);
    v3[6] = BYTE1(*(uint32_t *)(a1 + 316));
    v3[7] = *(uint32_t *)(a1 + 316);
    memcpy(v3 + 8, *(const void **)(a1 + 312), *(uint32_t *)(a1 + 316));
    v4 = *(uint32_t *)(a1 + 316);
    *(uint32_t *)(a1 + 52) = 8705;
    *(uint32_t *)(a1 + 72) = 0;
    *(uint32_t *)(a1 + 68) = v4 + 8;
    return ssl3_do_write((uint32_t *)a1, 22);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_library_init  (binary VA: 0x12f1f10)
// Original: SSL_library_init
// ----------------------------------------------------------------------------
int SSL_library_init()
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

  v0 = (int)(uintptr_t)(EVP_des_cbc());
  EVP_add_cipher(v0);
  v1 = (int)(uintptr_t)(EVP_des_ede3_cbc());
  EVP_add_cipher(v1);
  v2 = (int)(uintptr_t)(EVP_idea_cbc());
  EVP_add_cipher(v2);
  v3 = (int)(uintptr_t)(EVP_rc4());
  EVP_add_cipher(v3);
  v4 = (int)(uintptr_t)(EVP_rc2_cbc());
  EVP_add_cipher(v4);
  v5 = (int)(uintptr_t)(EVP_rc2_40_cbc());
  EVP_add_cipher(v5);
  v6 = (int)(uintptr_t)(EVP_aes_128_cbc());
  EVP_add_cipher(v6);
  v7 = (int)(uintptr_t)(EVP_aes_192_cbc());
  EVP_add_cipher(v7);
  v8 = (int)(uintptr_t)(EVP_aes_256_cbc());
  EVP_add_cipher(v8);
  v9 = (int)(uintptr_t)(EVP_camellia_128_cbc());
  EVP_add_cipher(v9);
  v10 = (int)(uintptr_t)(EVP_camellia_256_cbc());
  EVP_add_cipher(v10);
  v11 = (int)(uintptr_t)(EVP_seed_cbc());
  EVP_add_cipher(v11);
  v12 = (int)(uintptr_t)(EVP_md5());
  EVP_add_digest(v12);
  OBJ_NAME_add("ssl2-md5", 32769, "MD5");
  OBJ_NAME_add("ssl3-md5", 32769, "MD5");
  v13 = (int)(uintptr_t)(EVP_sha1());
  EVP_add_digest(v13);
  OBJ_NAME_add("ssl3-sha1", 32769, "SHA1");
  OBJ_NAME_add("RSA-SHA1-2", 32769, "RSA-SHA1");
  v14 = (int)(uintptr_t)(EVP_sha224());
  EVP_add_digest(v14);
  v15 = (int)(uintptr_t)(EVP_sha256());
  EVP_add_digest(v15);
  v16 = (int)(uintptr_t)(EVP_sha384());
  EVP_add_digest(v16);
  v17 = (int)(uintptr_t)(EVP_sha512());
  EVP_add_digest(v17);
  v18 = (int)(uintptr_t)(EVP_dss1());
  EVP_add_digest(v18);
  OBJ_NAME_add("DSA-SHA1-old", 32769, "DSA-SHA1");
  OBJ_NAME_add("DSS1", 32769, "DSA-SHA1");
  OBJ_NAME_add("dss1", 32769, "DSA-SHA1");
  v19 = (int)(uintptr_t)(EVP_ecdsa());
  EVP_add_digest(v19);
  SSL_COMP_get_compression_methods();
  ssl_load_ciphers();
  return 1;
}

// ----------------------------------------------------------------------------
// Function: i2d_SSL_SESSION  (binary VA: 0x12f2ec0)
// Original: i2d_SSL_SESSION
// ----------------------------------------------------------------------------
int i2d_SSL_SESSION(int *a1, uint32_t *a2)
{
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
  typedef int _g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint8_t _g4_t_v37[16];
  typedef uint32_t _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t _g4_t_v45[4];
  typedef uint32_t _g4_t_v46[4];
  typedef uint32_t _g4_t_v47[4];
  typedef uint32_t _g4_t_v48[4];
  typedef uint32_t _g4_t_v49[4];
  typedef uint32_t _g4_t_v50[4];
  typedef uint32_t _g4_t_v51[4];
  typedef uint32_t _g4_t_v52[4];
  typedef uint32_t _g4_t_v53[4];
  typedef uint32_t _g4_t_v54[4];
  typedef uint32_t _g4_t_v55[4];
  typedef uint32_t _g4_t_v56[4];
  typedef uint32_t _g4_t_v57[4];
  typedef uint32_t _g4_t_v58[4];
  typedef uint32_t _g4_t_v59[4];
  typedef uint32_t _g4_t_v60[7];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v23)) > _g4_s1 ? (44u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v24)) > _g4_s2 ? (48u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v25)) > _g4_s3 ? (52u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v26)) > _g4_s4 ? (56u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v27)) > _g4_s5 ? (60u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v28)) > _g4_s6 ? (64u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v29)) > _g4_s7 ? (68u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v30)) > _g4_s8 ? (72u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v31)) > _g4_s9 ? (76u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v32)) > _g4_s10 ? (80u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v33)) > _g4_s11 ? (84u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v34)) > _g4_s12 ? (88u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v35)) > _g4_s13 ? (92u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v36)) > _g4_s14 ? (96u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v37)) > _g4_s15 ? (112u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v38)) > _g4_s16 ? (128u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v39)) > _g4_s17 ? (144u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v40)) > _g4_s18 ? (152u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v41)) > _g4_s19 ? (160u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (168u + sizeof(_g4_t_v42)) > _g4_s20 ? (168u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v43)) > _g4_s21 ? (176u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (184u + sizeof(_g4_t_v44)) > _g4_s22 ? (184u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (192u + sizeof(_g4_t_v45)) > _g4_s23 ? (192u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v46)) > _g4_s24 ? (208u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v47)) > _g4_s25 ? (224u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (240u + sizeof(_g4_t_v48)) > _g4_s26 ? (240u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (256u + sizeof(_g4_t_v49)) > _g4_s27 ? (256u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (272u + sizeof(_g4_t_v50)) > _g4_s28 ? (272u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (288u + sizeof(_g4_t_v51)) > _g4_s29 ? (288u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (304u + sizeof(_g4_t_v52)) > _g4_s30 ? (304u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (320u + sizeof(_g4_t_v53)) > _g4_s31 ? (320u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (336u + sizeof(_g4_t_v54)) > _g4_s32 ? (336u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (352u + sizeof(_g4_t_v55)) > _g4_s33 ? (352u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (368u + sizeof(_g4_t_v56)) > _g4_s34 ? (368u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (384u + sizeof(_g4_t_v57)) > _g4_s35 ? (384u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (400u + sizeof(_g4_t_v58)) > _g4_s36 ? (400u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (416u + sizeof(_g4_t_v59)) > _g4_s37 ? (416u + sizeof(_g4_t_v59)) : _g4_s37,
    _g4_s39 = (432u + sizeof(_g4_t_v60)) > _g4_s38 ? (432u + sizeof(_g4_t_v60)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 144u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 152u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 168u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 184u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 192u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 208u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 224u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 240u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 256u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 272u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 288u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 304u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 320u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 336u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 352u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 368u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 384u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 400u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 416u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 432u);

  v35 = 0;
  if ( a1 == nullptr || a1[45] == 0 && a1[46] == 0 )
    return v35;
  v45[0] = 8;
  v45[2] = (uint32_t)(uintptr_t)(&v39);
  v45[1] = 2;
  ASN1_INTEGER_set(v45, 1);
  v46[2] = (uint32_t)(uintptr_t)(&v40);
  v2 = *a1;
  v46[0] = 8;
  v46[1] = 2;
  ASN1_INTEGER_set(v46, v2);
  v47[2] = (uint32_t)(uintptr_t)(v37);
  v3 = a1[45];
  v47[1] = 4;
  if ( v3 != 0 )
    v4 = *(uint32_t *)(v3 + 8);
  else
    v4 = a1[46];
  if ( *a1 == 2 )
  {
    v47[0] = 3;
    v37[2] = v4;
    v37[0] = BYTE2(v4);
    v37[1] = BYTE1(v4);
  }
  else
  {
    v47[0] = 2;
    v37[0] = BYTE1(v4);
    v37[1] = v4;
  }
  if ( a1[44] != 0 )
  {
    v36 = a1[44];
    v48[0] = 1;
    v48[1] = 4;
    v48[2] = (uint32_t)(uintptr_t)(&v36);
  }
  v5 = a1[4];
  v49[1] = 4;
  v49[0] = v5;
  v49[2] = (uint32_t)(uintptr_t)(a1 + 5);
  v50[0] = a1[17];
  v50[2] = (uint32_t)(uintptr_t)(a1 + 18);
  v51[0] = a1[26];
  v51[2] = (uint32_t)(uintptr_t)(a1 + 27);
  v52[0] = a1[1];
  v52[2] = (uint32_t)(uintptr_t)(a1 + 2);
  v6 = a1[43];
  v50[1] = 4;
  v51[1] = 4;
  v52[1] = 4;
  if ( v6 == 0 )
  {
    v7 = a1[42];
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_68:
    v54[0] = 8;
    v54[1] = 2;
    v54[2] = (uint32_t)(uintptr_t)(&v42);
    ASN1_INTEGER_set(v54, v7);
    v8 = a1[40];
    if ( v8 == 0 )
      goto LABEL_12;
    goto LABEL_69;
  }
  v53[0] = 8;
  v53[1] = 2;
  v53[2] = (uint32_t)(uintptr_t)(&v41);
  ASN1_INTEGER_set(v53, v6);
  v7 = a1[42];
  if ( v7 != 0 )
    goto LABEL_68;
LABEL_11:
  v8 = a1[40];
  if ( v8 != 0 )
  {
LABEL_69:
    v55[0] = 8;
    v55[1] = 2;
    v55[2] = (uint32_t)(uintptr_t)(&v43);
    ASN1_INTEGER_set(v55, v8);
  }
LABEL_12:
  v9 = a1[52];
  if ( v9 != 0 )
  {
    v56[0] = strlen((const char *)a1[52]);
    v56[1] = 4;
    v56[2] = v9;
  }
  v10 = a1[57];
  if ( v10 != 0 )
  {
    v11 = a1[58];
    v58[1] = 4;
    v58[0] = v11;
    v58[2] = v10;
  }
  if ( a1[59] > 0 )
  {
    v22 = a1[59];
    v57[0] = 8;
    v57[1] = 2;
    v57[2] = (uint32_t)(uintptr_t)(&v44);
    ASN1_INTEGER_set(v57, v22);
  }
  v12 = a1[35];
  if ( v12 != 0 )
  {
    v59[0] = strlen((const char *)a1[35]);
    v59[1] = 4;
    v59[2] = v12;
  }
  v13 = a1[36];
  if ( v13 != 0 )
  {
    v60[0] = strlen((const char *)a1[36]);
    v60[1] = 4;
    v60[2] = v13;
  }
  v14 = i2d_ASN1_INTEGER(v45, 0);
  v15 = i2d_ASN1_INTEGER(v46, 0) + v14;
  v16 = i2d_ASN1_OCTET_STRING(v47, 0) + v15;
  v17 = i2d_ASN1_OCTET_STRING(v50, 0) + v16;
  v18 = i2d_ASN1_OCTET_STRING(v49, 0) + v17;
  if ( a1[1] != 0 )
    v18 += i2d_ASN1_OCTET_STRING(v52, 0);
  v27 = 0;
  if ( a1[43] != 0 )
  {
    v27 = i2d_ASN1_INTEGER(v53, 0);
    v18 += ASN1_object_size(1, v27, 1);
  }
  v26 = 0;
  if ( a1[42] != 0 )
  {
    v26 = i2d_ASN1_INTEGER(v54, 0);
    v18 += ASN1_object_size(1, v26, 2);
  }
  v19 = a1[39];
  v29 = 0;
  if ( v19 != 0 )
  {
    v29 = i2d_X509(v19, 0);
    v18 += ASN1_object_size(1, v29, 3);
  }
  v30 = i2d_ASN1_OCTET_STRING(v51, 0);
  v20 = ASN1_object_size(1, v30, 4) + v18;
  v25 = 0;
  if ( a1[40] != 0 )
  {
    v25 = i2d_ASN1_INTEGER(v55, 0);
    v20 += ASN1_object_size(1, v25, 5);
  }
  v28 = 0;
  if ( a1[59] > 0 )
  {
    v28 = i2d_ASN1_INTEGER(v57, 0);
    v20 += ASN1_object_size(1, v28, 9);
  }
  v31 = 0;
  if ( a1[57] != 0 )
  {
    v31 = i2d_ASN1_OCTET_STRING(v58, 0);
    v20 += ASN1_object_size(1, v31, 10);
  }
  v32 = 0;
  if ( a1[52] != 0 )
  {
    v32 = i2d_ASN1_OCTET_STRING(v56, 0);
    v20 += ASN1_object_size(1, v32, 6);
  }
  v24 = 0;
  if ( a1[44] != 0 )
  {
    v24 = i2d_ASN1_OCTET_STRING(v48, 0);
    v20 += ASN1_object_size(1, v24, 11);
  }
  v34 = 0;
  if ( a1[35] != 0 )
  {
    v34 = i2d_ASN1_OCTET_STRING(v59, 0);
    v20 += ASN1_object_size(1, v34, 7);
  }
  v33 = 0;
  if ( a1[36] != 0 )
  {
    v33 = i2d_ASN1_OCTET_STRING(v60, 0);
    v20 += ASN1_object_size(1, v33, 8);
  }
  v35 = ASN1_object_size(1, v20, 16);
  if ( a2 != nullptr )
  {
    v38[0] = *a2;
    ASN1_put_object(v38, 1, v20, 16, 0);
    i2d_ASN1_INTEGER(v45, v38);
    i2d_ASN1_INTEGER(v46, v38);
    i2d_ASN1_OCTET_STRING(v47, v38);
    i2d_ASN1_OCTET_STRING(v50, v38);
    i2d_ASN1_OCTET_STRING(v49, v38);
    if ( a1[1] != 0 )
    {
      v23 = (uint8_t *)v38[0];
      i2d_ASN1_OCTET_STRING(v52, v38);
      *v23 = *v23 & 0x20 | 0x80;
      if ( a1[43] == 0 )
      {
LABEL_47:
        if ( a1[42] == 0 )
          goto LABEL_48;
        goto LABEL_74;
      }
    }
    else if ( a1[43] == 0 )
    {
      goto LABEL_47;
    }
    ASN1_put_object(v38, 1, v27, 1, 128);
    i2d_ASN1_INTEGER(v53, v38);
    if ( a1[42] == 0 )
    {
LABEL_48:
      if ( a1[39] == 0 )
        goto LABEL_50;
      goto LABEL_49;
    }
LABEL_74:
    ASN1_put_object(v38, 1, v26, 2, 128);
    i2d_ASN1_INTEGER(v54, v38);
    if ( a1[39] == 0 )
    {
LABEL_50:
      ASN1_put_object(v38, 1, v30, 4, 128);
      i2d_ASN1_OCTET_STRING(v51, v38);
      if ( a1[40] != 0 )
      {
        ASN1_put_object(v38, 1, v25, 5, 128);
        i2d_ASN1_INTEGER(v55, v38);
        if ( a1[52] == 0 )
          goto LABEL_53;
      }
      else if ( a1[52] == 0 )
      {
LABEL_53:
        if ( a1[35] != 0 )
        {
          ASN1_put_object(v38, 1, v34, 7, 128);
          i2d_ASN1_OCTET_STRING(v59, v38);
        }
        if ( a1[36] != 0 )
        {
          ASN1_put_object(v38, 1, v33, 8, 128);
          i2d_ASN1_OCTET_STRING(v60, v38);
        }
        if ( a1[59] > 0 )
        {
          ASN1_put_object(v38, 1, v28, 9, 128);
          i2d_ASN1_INTEGER(v57, v38);
        }
        if ( a1[57] != 0 )
        {
          ASN1_put_object(v38, 1, v31, 10, 128);
          i2d_ASN1_OCTET_STRING(v58, v38);
        }
        if ( a1[44] != 0 )
        {
          ASN1_put_object(v38, 1, v24, 11, 128);
          i2d_ASN1_OCTET_STRING(v48, v38);
        }
        *a2 = v38[0];
        return v35;
      }
      ASN1_put_object(v38, 1, v32, 6, 128);
      i2d_ASN1_OCTET_STRING(v56, v38);
      goto LABEL_53;
    }
LABEL_49:
    ASN1_put_object(v38, 1, v29, 3, 128);
    i2d_X509(a1[39], v38);
    goto LABEL_50;
  }
  return v35;
}

// ----------------------------------------------------------------------------
// Function: d2i_SSL_SESSION  (binary VA: 0x12f3ad0)
// Original: d2i_SSL_SESSION
// ----------------------------------------------------------------------------
int * d2i_SSL_SESSION(int **a1, uint32_t *a2, int a3)
{
  uint8_t *v3;
  int *v4;
  uint8_t *v5;
  uint8_t *v6;
  int v7;
  int v8;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;
  int v13;
  size_t v14;
  size_t v15;
  size_t v16;
  uint8_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  uint8_t *v20;
  int v21;
  int v22;
  int v23;
  int object;
  int v25;
  int v26;
  int v27;
  uint8_t *v28;
  size_t v29;
  int v30;
  int v31;
  int v32;
  void *v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t _g4_t_v48[4];
  typedef uint32_t _g4_t_v49[4];
  typedef uint32_t _g4_t_v50[2];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef void *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint8_t *_g4_t_v56;
  typedef uint32_t _g4_t_v57[2];
  typedef int _g4_t_v58;
  typedef uint8_t *_g4_t_v59;
  typedef uint8_t *_g4_t_v60;
  typedef uint8_t *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v35)) > _g4_s1 ? (36u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v36)) > _g4_s2 ? (36u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v37)) > _g4_s3 ? (36u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v38)) > _g4_s4 ? (36u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v39)) > _g4_s5 ? (36u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v40)) > _g4_s6 ? (36u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v41)) > _g4_s7 ? (36u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v43)) > _g4_s9 ? (36u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v44)) > _g4_s10 ? (36u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v45)) > _g4_s11 ? (40u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v46)) > _g4_s12 ? (40u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v47)) > _g4_s13 ? (44u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v48)) > _g4_s14 ? (48u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v49)) > _g4_s15 ? (64u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v50)) > _g4_s16 ? (80u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v51)) > _g4_s17 ? (88u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v52)) > _g4_s18 ? (92u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v53)) > _g4_s19 ? (96u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v54)) > _g4_s20 ? (104u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v55)) > _g4_s21 ? (112u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v56)) > _g4_s22 ? (120u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v57)) > _g4_s23 ? (128u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v58)) > _g4_s24 ? (136u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v59)) > _g4_s25 ? (152u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v60)) > _g4_s26 ? (156u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v61)) > _g4_s27 ? (160u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v62)) > _g4_s28 ? (164u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v63)) > _g4_s29 ? (168u + sizeof(_g4_t_v63)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 104u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 112u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 136u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 152u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 156u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 160u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 164u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 168u);

  v62 = a2;
  v58 = 58;
  v3 = (uint8_t *)*a2;
  v61 = (uint8_t *)*a2;
  if ( a1 == nullptr || (v4 = *a1, *a1 == nullptr) )
  {
    v4 = (int *)SSL_SESSION_new();
    if ( v4 == nullptr )
    {
      v63 = 364;
      ERR_put_error(13, 103, v58, &unk_1B15112, 364);
      asn1_add_error(*a2, &v61[-*a2]);
      return v4;
    }
    v3 = (uint8_t *)*a2;
  }
  v57[0] = (uint32_t)(uintptr_t)(v3);
  v48[0] = (uint32_t)(uintptr_t)(&v53);
  v5 = &v3[a3];
  v49[0] = (uint32_t)(uintptr_t)(&v55);
  v6 = nullptr;
  if ( a3 != 0 )
    v6 = v5;
  v60 = v6;
  if ( asn1_GetSequence(v57, &a3) == 0 )
  {
    v63 = 370;
    v7 = v58;
    v8 = 370;
    goto LABEL_7;
  }
  v61 = (uint8_t *)v57[0];
  v54 = nullptr;
  v53 = 0;
  if ( d2i_ASN1_INTEGER(v48, v57, v59) == 0 )
  {
    v63 = 373;
    v7 = v58;
    v8 = 373;
    goto LABEL_7;
  }
  v10 = (uint8_t *)v57[0];
  v11 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v59 = v11;
  if ( v54 != nullptr )
  {
    CRYPTO_free(v54);
    v54 = nullptr;
    v53 = 0;
    v10 = (uint8_t *)v57[0];
    v11 = v59;
  }
  v61 = v10;
  if ( d2i_ASN1_INTEGER(v48, v57, v11) == 0 )
  {
    v63 = 377;
    v7 = v58;
    v8 = 377;
    goto LABEL_7;
  }
  v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v47 = ASN1_INTEGER_get(v48[0]);
  *v4 = v47;
  if ( v54 != nullptr )
  {
    CRYPTO_free(v54);
    v54 = nullptr;
    v53 = 0;
  }
  v61 = (uint8_t *)v57[0];
  v56 = nullptr;
  v55 = 0;
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v59) == 0 )
  {
    v63 = 383;
    v7 = v58;
    v8 = 383;
    goto LABEL_7;
  }
  v12 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v45 = (uint8_t *)v57[0];
  v59 = v12;
  if ( v47 == 2 )
  {
    if ( v55 != 3 )
    {
LABEL_21:
      v58 = 137;
      v8 = v63;
      v7 = 137;
      goto LABEL_7;
    }
    v13 = (v56[1] << 8) | (*v56 << 16) | v56[2] | 0x2000000;
  }
  else
  {
    if ( v47 <= 767 )
    {
      v58 = 254;
      v8 = v63;
      v7 = 254;
      goto LABEL_7;
    }
    if ( v55 != 2 )
      goto LABEL_21;
    v13 = (*v56 << 8) | v56[1] | 0x3000000;
  }
  v4[46] = v13;
  v4[45] = 0;
  v61 = v45;
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v12) == 0 )
  {
    v63 = 416;
    v7 = v58;
    v8 = 416;
    goto LABEL_7;
  }
  v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v14 = v55;
  if ( v55 > 32 )
  {
    v55 = 32;
    v14 = 32;
  }
  v4[17] = v14;
  memcpy(v4 + 18, v56, v14);
  v61 = (uint8_t *)v57[0];
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v59) == 0 )
  {
    v63 = 431;
    v7 = v58;
    v8 = 431;
    goto LABEL_7;
  }
  v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v15 = 48;
  if ( v55 <= 48 )
    v15 = v55;
  v4[4] = v15;
  memcpy(v4 + 5, v56, v15);
  v16 = 0;
  v55 = 0;
  if ( v59 == nullptr )
    goto LABEL_37;
  v46 = *(uint8_t *)v57[0];
  if ( (*(uint8_t *)v57[0] & 0xDF) != 0x80 )
    goto LABEL_37;
  *(uint8_t *)v57[0] = v46 & 0x20 | 4;
  v61 = (uint8_t *)v57[0];
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v59) == 0 )
  {
    v63 = 458;
    *v61 = v46;
    v8 = v63;
    v7 = v58;
    goto LABEL_7;
  }
  v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  *v61 = v46;
  v16 = v55;
  if ( v55 > 8 )
  {
    v4[1] = 8;
    v16 = 8;
  }
  else
  {
LABEL_37:
    v4[1] = v16;
  }
  memcpy(v4 + 2, v56, v16);
  if ( v56 != nullptr )
    CRYPTO_free(v56);
  v53 = 0;
  if ( v59 != nullptr && *(uint8_t *)v57[0] == 0xA1 )
  {
    v61 = (uint8_t *)v57[0];
    object = ASN1_get_object(v57, v50, &v51, &v52, v59);
    if ( (object & 0x80u) != 0 )
    {
      v58 = 59;
      v63 = 467;
      v7 = 59;
      v8 = 467;
      goto LABEL_7;
    }
    if ( object == 33 )
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
    v35 = object;
    if ( d2i_ASN1_INTEGER(v48, v57, v50[0]) == 0 )
    {
      v63 = 467;
      v7 = v58;
      v8 = 467;
      goto LABEL_7;
    }
    if ( v35 == 33 )
    {
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
      if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
      {
        v58 = 63;
        v63 = 467;
        v7 = 63;
        v8 = 467;
        goto LABEL_7;
      }
    }
    v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  }
  if ( v54 != nullptr )
  {
    v4[43] = ASN1_INTEGER_get(v48[0]);
    CRYPTO_free(v54);
    v54 = nullptr;
  }
  else
  {
    v4[43] = time(nullptr);
  }
  v53 = 0;
  if ( v59 != nullptr && *(uint8_t *)v57[0] == 0xA2 )
  {
    v61 = (uint8_t *)v57[0];
    v25 = ASN1_get_object(v57, v50, &v51, &v52, v59);
    if ( (v25 & 0x80u) != 0 )
    {
      v58 = 59;
      v63 = 477;
      v7 = 59;
      v8 = 477;
      goto LABEL_7;
    }
    if ( v25 == 33 )
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
    v36 = v25;
    if ( d2i_ASN1_INTEGER(v48, v57, v50[0]) == 0 )
    {
      v63 = 477;
      v7 = v58;
      v8 = 477;
      goto LABEL_7;
    }
    if ( v36 == 33 )
    {
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
      if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
      {
        v58 = 63;
        v63 = 477;
        v7 = 63;
        v8 = 477;
        goto LABEL_7;
      }
    }
    v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  }
  if ( v54 != nullptr )
  {
    v4[42] = ASN1_INTEGER_get(v48[0]);
    CRYPTO_free(v54);
    v54 = nullptr;
    v53 = 0;
  }
  else
  {
    v4[42] = 3;
  }
  if ( v4[39] != 0 )
  {
    X509_free(v4[39]);
    v4[39] = 0;
  }
  v17 = v59;
  if ( v59 == nullptr )
  {
    v55 = 0;
    v56 = nullptr;
    goto LABEL_54;
  }
  v18 = (uint8_t *)v57[0];
  if ( *(uint8_t *)v57[0] == 0xA3 )
  {
    v61 = (uint8_t *)v57[0];
    v27 = ASN1_get_object(v57, v50, &v51, &v52, v59);
    if ( (v27 & 0x80u) != 0 )
    {
      v58 = 59;
      v63 = 491;
      v7 = 59;
      v8 = 491;
      goto LABEL_7;
    }
    if ( v27 == 33 )
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
    v37 = v27;
    if ( d2i_X509(v4 + 39, v57, v50[0]) == 0 )
    {
      v63 = 491;
      v7 = v58;
      v8 = 491;
      goto LABEL_7;
    }
    if ( v37 == 33 )
    {
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
      if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
      {
        v58 = 63;
        v63 = 491;
        v7 = 63;
        v8 = 491;
        goto LABEL_7;
      }
    }
    v18 = (uint8_t *)v57[0];
    v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
    v17 = v59;
    v55 = 0;
    v56 = nullptr;
    if ( v59 != nullptr )
      goto LABEL_53;
LABEL_54:
    v4[26] = 0;
    goto LABEL_55;
  }
  v55 = 0;
  v56 = nullptr;
LABEL_53:
  if ( *v18 != 0xA4 )
    goto LABEL_54;
  v61 = v18;
  v26 = ASN1_get_object(v57, v50, &v51, &v52, v17);
  if ( (v26 & 0x80u) != 0 )
  {
    v58 = 59;
    v63 = 495;
    v7 = 59;
    v8 = 495;
    goto LABEL_7;
  }
  if ( v26 == 33 )
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
  v38 = v26;
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v50[0]) == 0 )
  {
    v63 = 495;
    v7 = v58;
    v8 = 495;
    goto LABEL_7;
  }
  if ( v38 == 33 )
  {
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
    if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
    {
      v58 = 63;
      v63 = 495;
      v7 = 63;
      v8 = 495;
      goto LABEL_7;
    }
  }
  v28 = v56;
  v17 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v59 = v17;
  if ( v56 == nullptr )
    goto LABEL_54;
  v29 = v55;
  if ( v55 > 32 )
  {
    v58 = 271;
    v8 = v63;
    v7 = 271;
    goto LABEL_7;
  }
  v4[26] = v55;
  memcpy(v4 + 27, v28, v29);
  CRYPTO_free(v56);
  v56 = nullptr;
  v55 = 0;
  v17 = v59;
LABEL_55:
  v53 = 0;
  if ( v17 != nullptr && *(uint8_t *)v57[0] == 0xA5 )
  {
    v61 = (uint8_t *)v57[0];
    v31 = ASN1_get_object(v57, v50, &v51, &v52, v17);
    if ( (v31 & 0x80u) != 0 )
    {
      v58 = 59;
      v63 = 515;
      v7 = 59;
      v8 = 515;
      goto LABEL_7;
    }
    if ( v31 == 33 )
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
    v39 = v31;
    if ( d2i_ASN1_INTEGER(v48, v57, v50[0]) == 0 )
    {
      v63 = 515;
      v7 = v58;
      v8 = 515;
      goto LABEL_7;
    }
    if ( v39 == 33 )
    {
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
      if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
      {
        v58 = 63;
        v63 = 515;
        v7 = 63;
        v8 = 515;
        goto LABEL_7;
      }
    }
    v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  }
  if ( v54 != nullptr )
  {
    v4[40] = ASN1_INTEGER_get(v48[0]);
    CRYPTO_free(v54);
    v54 = nullptr;
    v53 = 0;
  }
  else
  {
    v4[40] = 0;
  }
  v19 = v59;
  v55 = 0;
  v56 = nullptr;
  if ( v59 == nullptr || *(uint8_t *)v57[0] != 0xA6 )
    goto LABEL_60;
  v61 = (uint8_t *)v57[0];
  v21 = ASN1_get_object(v57, v50, &v51, &v52, v59);
  if ( (v21 & 0x80u) != 0 )
  {
    v58 = 59;
    v63 = 527;
    v7 = 59;
    v8 = 527;
    goto LABEL_7;
  }
  if ( v21 == 33 )
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
  v41 = v21;
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v50[0]) == 0 )
  {
    v63 = 527;
    v7 = v58;
    v8 = 527;
    goto LABEL_7;
  }
  if ( v41 == 33 )
  {
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
    if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
    {
      v58 = 63;
      v63 = 527;
      v7 = 63;
      v8 = 527;
      goto LABEL_7;
    }
  }
  v19 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v59 = v19;
  if ( v56 != nullptr )
  {
    v4[52] = (int)(uintptr_t)(BUF_strndup((char *)v56, v55));
    CRYPTO_free(v56);
    v19 = v59;
  }
  else
  {
LABEL_60:
    v4[52] = 0;
  }
  v55 = 0;
  v56 = nullptr;
  if ( v19 == nullptr || *(uint8_t *)v57[0] != 0xA7 )
    goto LABEL_62;
  v61 = (uint8_t *)v57[0];
  v22 = ASN1_get_object(v57, v50, &v51, &v52, v19);
  if ( (v22 & 0x80u) != 0 )
  {
    v58 = 59;
    v63 = 542;
    v7 = 59;
    v8 = 542;
    goto LABEL_7;
  }
  if ( v22 == 33 )
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
  v42 = v22;
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v50[0]) == 0 )
  {
    v63 = 542;
    v7 = v58;
    v8 = 542;
    goto LABEL_7;
  }
  if ( v42 == 33 )
  {
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
    if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
    {
      v58 = 63;
      v63 = 542;
      v7 = 63;
      v8 = 542;
      goto LABEL_7;
    }
  }
  v19 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v59 = v19;
  if ( v56 != nullptr )
  {
    v4[35] = (int)(uintptr_t)(BUF_strndup((char *)v56, v55));
    CRYPTO_free(v56);
    v56 = nullptr;
    v55 = 0;
    v19 = v59;
  }
  else
  {
LABEL_62:
    v4[35] = 0;
  }
  v53 = 0;
  if ( v19 != nullptr && *(uint8_t *)v57[0] == 0xA9 )
  {
    v61 = (uint8_t *)v57[0];
    v30 = ASN1_get_object(v57, v50, &v51, &v52, v19);
    if ( (v30 & 0x80u) != 0 )
    {
      v58 = 59;
      v63 = 556;
      v7 = 59;
      v8 = 556;
      goto LABEL_7;
    }
    if ( v30 == 33 )
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
    v44 = v30;
    if ( d2i_ASN1_INTEGER(v48, v57, v50[0]) == 0 )
    {
      v63 = 556;
      v7 = v58;
      v8 = 556;
      goto LABEL_7;
    }
    if ( v44 == 33 )
    {
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
      if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
      {
        v58 = 63;
        v63 = 556;
        v7 = 63;
        v8 = 556;
        goto LABEL_7;
      }
    }
    v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  }
  if ( v54 != nullptr )
  {
    v4[59] = ASN1_INTEGER_get(v48[0]);
    CRYPTO_free(v54);
    v54 = nullptr;
    v53 = 0;
  }
  else if ( v4[58] != 0 && v4[17] != 0 )
  {
    v4[59] = -1;
  }
  else
  {
    v4[59] = 0;
  }
  v20 = v59;
  v55 = 0;
  v56 = nullptr;
  if ( v59 == nullptr || *(uint8_t *)v57[0] != 0xAA )
    goto LABEL_68;
  v61 = (uint8_t *)v57[0];
  v23 = ASN1_get_object(v57, v50, &v51, &v52, v59);
  if ( (v23 & 0x80u) != 0 )
  {
    v58 = 59;
    v63 = 568;
    v7 = 59;
    v8 = 568;
    goto LABEL_7;
  }
  if ( v23 == 33 )
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
  v43 = v23;
  if ( d2i_ASN1_OCTET_STRING(v49, v57, v50[0]) == 0 )
  {
    v63 = 568;
    v7 = v58;
    v8 = 568;
    goto LABEL_7;
  }
  if ( v43 == 33 )
  {
    v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
    if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
    {
      v58 = 63;
      v63 = 568;
      v7 = 63;
      v8 = 568;
      goto LABEL_7;
    }
  }
  v20 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
  v59 = v20;
  if ( v56 != nullptr )
  {
    v4[57] = (int)(uintptr_t)(v56);
    v4[58] = v55;
  }
  else
  {
LABEL_68:
    v4[57] = 0;
  }
  v55 = 0;
  v56 = nullptr;
  if ( v20 != nullptr && *(uint8_t *)v57[0] == 0xAB )
  {
    v61 = (uint8_t *)v57[0];
    v32 = ASN1_get_object(v57, v50, &v51, &v52, v20);
    if ( (v32 & 0x80u) != 0 )
    {
      v58 = 59;
      v63 = 582;
      v7 = 59;
      v8 = 582;
      goto LABEL_7;
    }
    if ( v32 == 33 )
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0] - 2]);
    v40 = v32;
    if ( d2i_ASN1_OCTET_STRING(v49, v57, v50[0]) == 0 )
    {
      v63 = 582;
      v7 = v58;
      v8 = 582;
      goto LABEL_7;
    }
    if ( v40 == 33 )
    {
      v50[0] = (uint32_t)(uintptr_t)(&v61[(uint32_t)(uintptr_t)(v59) - v57[0]]);
      if ( ASN1_const_check_infinite_end(v57, v50[0]) == 0 )
      {
        v58 = 63;
        v63 = 582;
        v7 = 63;
        v8 = 582;
        goto LABEL_7;
      }
    }
    v59 = &v61[(uint32_t)(uintptr_t)(v59) - v57[0]];
    v33 = v56;
    if ( v56 != nullptr )
    {
      v4[44] = *v56;
      CRYPTO_free(v33);
      v56 = nullptr;
    }
  }
  if ( asn1_const_Finish(v57) != 0 )
  {
    *a2 = v57[0];
    if ( a1 != nullptr )
      *a1 = v4;
    return v4;
  }
  v63 = 591;
  v7 = v58;
  v8 = 591;
LABEL_7:
  ERR_put_error(13, 103, v7, &unk_1B15112, v8);
  asn1_add_error(*a2, &v61[-*a2]);
  if ( a1 == nullptr || v4 != *a1 )
  {
    v34 = v4;
    v4 = nullptr;
    SSL_SESSION_free(v34);
    return v4;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_ex_data_X509_STORE_CTX_idx  (binary VA: 0x12f52f0)
// Original: SSL_get_ex_data_X509_STORE_CTX_idx
// ----------------------------------------------------------------------------
int SSL_get_ex_data_X509_STORE_CTX_idx()
{
  CRYPTO_lock(5, 12, &unk_1B15112, 0);
  if ( (int32_t)dword_20C5860 < 0 )
  {
    CRYPTO_lock(6, 12, &unk_1B15112, 0);
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    if ( (int32_t)dword_20C5860 < 0 )
      dword_20C5860 = X509_STORE_CTX_get_ex_new_index(0, "SSL for verify callback", 0, 0, 0);
    CRYPTO_lock(10, 12, &unk_1B15112, 0);
  }
  else
  {
    CRYPTO_lock(6, 12, &unk_1B15112, 0);
  }
  return dword_20C5860;
}

// ----------------------------------------------------------------------------
// Function: ssl_cert_new  (binary VA: 0x12f5400)
// Original: ssl_cert_new
// ----------------------------------------------------------------------------
int ssl_cert_new()
{
  int v0;
  int v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  v0 = (int)(uintptr_t)(CRYPTO_malloc(0x74u, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = v0;
  if ( v0 == 0 )
  {
    ERR_put_error(20, 162, 65, &unk_1B15112, 0);
    return v1;
  }
  v2 = (uint16_t *)v0;
  v3 = 116;
  if ( (v0 & 1) != 0 )
  {
    *(uint8_t *)v0 = 0;
    v2 = (uint16_t *)(v0 + 1);
    LOBYTE(v3) = 115;
  }
  if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
  {
    *v2 = 0;
    v3 -= 2;
    ++v2;
  }
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v4++ = 0;
    if ( (v3 & 1) == 0 )
      goto LABEL_8;
  }
  else if ( (v3 & 1) == 0 )
  {
LABEL_8:
    *(uint32_t *)(v0 + 112) = 1;
    *(uint32_t *)v0 = v0 + 48;
    return v1;
  }
  *(uint8_t *)v4 = 0;
  goto LABEL_8;
}

// ----------------------------------------------------------------------------
// Function: ssl_cert_dup  (binary VA: 0x12f54f0)
// Original: ssl_cert_dup
// ----------------------------------------------------------------------------
int ssl_cert_dup(uint32_t *a1)
{
  int v1;
  int v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
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
  void *v29;

  v1 = (int)(uintptr_t)(CRYPTO_malloc(0x74u, (int)(uintptr_t)(&unk_1B15112), 0));
  v2 = v1;
  if ( v1 == 0 )
  {
    ERR_put_error(20, 221, 65, &unk_1B15112, 0);
    return v2;
  }
  v3 = (uint16_t *)v1;
  v4 = 116;
  if ( (v1 & 1) != 0 )
  {
    *(uint8_t *)v1 = 0;
    v3 = (uint16_t *)(v1 + 1);
    LOBYTE(v4) = 115;
  }
  if ( ((uint8_t)(uintptr_t)(v3) & 2) != 0 )
  {
    *v3 = 0;
    v4 -= 2;
    ++v3;
  }
  memset(v3, 0, 4 * (v4 >> 2));
  v5 = &v3[2 * (v4 >> 2)];
  if ( (v4 & 2) == 0 )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_54;
  }
  *v5++ = 0;
  if ( (v4 & 1) != 0 )
LABEL_54:
    *(uint8_t *)v5 = 0;
LABEL_8:
  *(uint32_t *)v1 = v1 + 8 * ((*a1 - (int)(uintptr_t)(a1 + 12)) >> 3) + 48;
  *(uint32_t *)(v1 + 4) = a1[1];
  *(uint32_t *)(v1 + 8) = a1[2];
  *(uint32_t *)(v1 + 12) = a1[3];
  *(uint32_t *)(v1 + 16) = a1[4];
  *(uint32_t *)(v1 + 20) = a1[5];
  if ( a1[6] != 0 )
  {
    RSA_up_ref(a1[6]);
    *(uint32_t *)(v2 + 24) = a1[6];
  }
  *(uint32_t *)(v2 + 28) = a1[7];
  if ( a1[8] == 0 )
    goto LABEL_18;
  v6 = DHparams_dup(a1[8]);
  *(uint32_t *)(v2 + 32) = v6;
  if ( v6 == 0 )
  {
    ERR_put_error(20, 221, 5, &unk_1B15112, 0);
    goto LABEL_58;
  }
  v7 = a1[8];
  if ( *(uint32_t *)(v7 + 24) != 0 )
  {
    v8 = (int)(uintptr_t)(BN_dup(*(uint32_t *)(v7 + 24)));
    if ( v8 == 0 )
      goto LABEL_57;
    *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24) = v8;
    v7 = a1[8];
  }
  v9 = *(uint32_t *)(v7 + 20);
  if ( v9 != 0 )
  {
    v10 = (int)(uintptr_t)(BN_dup(v9));
    if ( v10 == 0 )
    {
LABEL_57:
      ERR_put_error(20, 221, 3, &unk_1B15112, 0);
      goto LABEL_58;
    }
    *(uint32_t *)(*(uint32_t *)(v2 + 32) + 20) = v10;
  }
LABEL_18:
  *(uint32_t *)(v2 + 36) = a1[9];
  if ( a1[10] == 0 || (v11 = (int)(uintptr_t)(EC_KEY_dup(a1[10])), *(uint32_t *)(v2 + 40) = v11, v11 != 0) )
  {
    *(uint32_t *)(v2 + 44) = a1[11];
    v12 = a1[12];
    if ( v12 != 0 )
    {
      *(uint32_t *)(v2 + 48) = v12;
      CRYPTO_add_lock(v12 + 16, 1, 3, &unk_1B15112, 0);
    }
    v13 = a1[13];
    if ( v13 != 0 )
    {
      *(uint32_t *)(v2 + 52) = v13;
      CRYPTO_add_lock(v13 + 8, 1, 10, &unk_1B15112, 0);
    }
    v14 = a1[14];
    if ( v14 != 0 )
    {
      *(uint32_t *)(v2 + 56) = v14;
      CRYPTO_add_lock(v14 + 16, 1, 3, &unk_1B15112, 0);
    }
    v15 = a1[15];
    if ( v15 != 0 )
    {
      *(uint32_t *)(v2 + 60) = v15;
      CRYPTO_add_lock(v15 + 8, 1, 10, &unk_1B15112, 0);
    }
    v16 = a1[16];
    if ( v16 != 0 )
    {
      *(uint32_t *)(v2 + 64) = v16;
      CRYPTO_add_lock(v16 + 16, 1, 3, &unk_1B15112, 0);
    }
    v17 = a1[17];
    if ( v17 != 0 )
    {
      *(uint32_t *)(v2 + 68) = v17;
      CRYPTO_add_lock(v17 + 8, 1, 10, &unk_1B15112, 0);
    }
    v18 = a1[18];
    if ( v18 != 0 )
    {
      *(uint32_t *)(v2 + 72) = v18;
      CRYPTO_add_lock(v18 + 16, 1, 3, &unk_1B15112, 0);
    }
    v19 = a1[19];
    if ( v19 != 0 )
    {
      *(uint32_t *)(v2 + 76) = v19;
      CRYPTO_add_lock(v19 + 8, 1, 10, &unk_1B15112, 0);
    }
    v20 = a1[20];
    if ( v20 != 0 )
    {
      *(uint32_t *)(v2 + 80) = v20;
      CRYPTO_add_lock(v20 + 16, 1, 3, &unk_1B15112, 0);
    }
    v21 = a1[21];
    if ( v21 != 0 )
    {
      *(uint32_t *)(v2 + 84) = v21;
      CRYPTO_add_lock(v21 + 8, 1, 10, &unk_1B15112, 0);
    }
    v22 = a1[22];
    if ( v22 != 0 )
    {
      *(uint32_t *)(v2 + 88) = v22;
      CRYPTO_add_lock(v22 + 16, 1, 3, &unk_1B15112, 0);
    }
    v23 = a1[23];
    if ( v23 != 0 )
    {
      *(uint32_t *)(v2 + 92) = v23;
      CRYPTO_add_lock(v23 + 8, 1, 10, &unk_1B15112, 0);
    }
    v24 = a1[24];
    if ( v24 != 0 )
    {
      *(uint32_t *)(v2 + 96) = v24;
      CRYPTO_add_lock(v24 + 16, 1, 3, &unk_1B15112, 0);
    }
    v25 = a1[25];
    if ( v25 != 0 )
    {
      *(uint32_t *)(v2 + 100) = v25;
      CRYPTO_add_lock(v25 + 8, 1, 10, &unk_1B15112, 0);
      ERR_put_error(20, 221, 274, &unk_1B15112, 0);
    }
    v26 = a1[26];
    if ( v26 != 0 )
    {
      *(uint32_t *)(v2 + 104) = v26;
      CRYPTO_add_lock(v26 + 16, 1, 3, &unk_1B15112, 0);
    }
    v27 = a1[27];
    if ( v27 != 0 )
    {
      *(uint32_t *)(v2 + 108) = v27;
      CRYPTO_add_lock(v27 + 8, 1, 10, &unk_1B15112, 0);
      ERR_put_error(20, 221, 274, &unk_1B15112, 0);
    }
    *(uint32_t *)(v2 + 112) = 1;
    return v2;
  }
  ERR_put_error(20, 221, 16, &unk_1B15112, 0);
LABEL_58:
  if ( *(uint32_t *)(v2 + 24) != 0 )
    RSA_free(*(void **)(v2 + 24));
  if ( *(uint32_t *)(v2 + 32) != 0 )
    DH_free(*(void **)(v2 + 32));
  if ( *(uint32_t *)(v2 + 40) != 0 )
    EC_KEY_free(*(void **)(v2 + 40));
  if ( *(uint32_t *)(v2 + 48) != 0 )
    X509_free(*(uint32_t *)(v2 + 48));
  if ( *(uint32_t *)(v2 + 52) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 52));
  if ( *(uint32_t *)(v2 + 56) != 0 )
    X509_free(*(uint32_t *)(v2 + 56));
  if ( *(uint32_t *)(v2 + 60) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 60));
  if ( *(uint32_t *)(v2 + 64) != 0 )
    X509_free(*(uint32_t *)(v2 + 64));
  if ( *(uint32_t *)(v2 + 68) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 68));
  if ( *(uint32_t *)(v2 + 72) != 0 )
    X509_free(*(uint32_t *)(v2 + 72));
  if ( *(uint32_t *)(v2 + 76) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 76));
  if ( *(uint32_t *)(v2 + 80) != 0 )
    X509_free(*(uint32_t *)(v2 + 80));
  if ( *(uint32_t *)(v2 + 84) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 84));
  if ( *(uint32_t *)(v2 + 88) != 0 )
    X509_free(*(uint32_t *)(v2 + 88));
  if ( *(uint32_t *)(v2 + 92) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 92));
  if ( *(uint32_t *)(v2 + 96) != 0 )
    X509_free(*(uint32_t *)(v2 + 96));
  if ( *(uint32_t *)(v2 + 100) != 0 )
    EVP_PKEY_free(*(void **)(v2 + 100));
  if ( *(uint32_t *)(v2 + 104) != 0 )
    X509_free(*(uint32_t *)(v2 + 104));
  v29 = *(void **)(v2 + 108);
  v2 = 0;
  if ( v29 == nullptr )
    return v2;
  EVP_PKEY_free(v29);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl_cert_free  (binary VA: 0x12f5c40)
// Original: ssl_cert_free
// ----------------------------------------------------------------------------
void ssl_cert_free(void **a1)
{
  if ( a1 != nullptr && (int)CRYPTO_add_lock(a1 + 28, -1, 13, &unk_1B15112, 0) <= 0 )
  {
    if ( a1[6] != nullptr )
      RSA_free(a1[6]);
    if ( a1[8] != nullptr )
      DH_free(a1[8]);
    if ( a1[10] != nullptr )
      EC_KEY_free(a1[10]);
    if ( a1[12] != nullptr )
      X509_free(a1[12]);
    if ( a1[13] != nullptr )
      EVP_PKEY_free(a1[13]);
    if ( a1[14] != nullptr )
      X509_free(a1[14]);
    if ( a1[15] != nullptr )
      EVP_PKEY_free(a1[15]);
    if ( a1[16] != nullptr )
      X509_free(a1[16]);
    if ( a1[17] != nullptr )
      EVP_PKEY_free(a1[17]);
    if ( a1[18] != nullptr )
      X509_free(a1[18]);
    if ( a1[19] != nullptr )
      EVP_PKEY_free(a1[19]);
    if ( a1[20] != nullptr )
      X509_free(a1[20]);
    if ( a1[21] != nullptr )
      EVP_PKEY_free(a1[21]);
    if ( a1[22] != nullptr )
      X509_free(a1[22]);
    if ( a1[23] != nullptr )
      EVP_PKEY_free(a1[23]);
    if ( a1[24] != nullptr )
      X509_free(a1[24]);
    if ( a1[25] != nullptr )
      EVP_PKEY_free(a1[25]);
    if ( a1[26] != nullptr )
      X509_free(a1[26]);
    if ( a1[27] != nullptr )
      EVP_PKEY_free(a1[27]);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: ssl_cert_inst  (binary VA: 0x12f5dd0)
// Original: ssl_cert_inst
// ----------------------------------------------------------------------------
int ssl_cert_inst(int *a1)
{
  int v1;
  int v3;

  if ( a1 != nullptr )
  {
    v1 = 1;
    if ( *a1 == 0 )
    {
      v3 = ssl_cert_new();
      *a1 = v3;
      if ( v3 == 0 )
      {
        LOWORD(v1) = 0;
        ERR_put_error(20, 222, 65, &unk_1B15112, 0);
      }
    }
  }
  else
  {
    v1 = 0;
    ERR_put_error(20, 222, 67, &unk_1B15112, 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ssl_sess_cert_new  (binary VA: 0x12f5e90)
// Original: ssl_sess_cert_new
// ----------------------------------------------------------------------------
int ssl_sess_cert_new()
{
  int v0;
  int v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  v0 = (int)(uintptr_t)(CRYPTO_malloc(0x5Cu, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = v0;
  if ( v0 == 0 )
  {
    ERR_put_error(20, 225, 65, &unk_1B15112, 0);
    return v1;
  }
  v2 = (uint16_t *)v0;
  v3 = 92;
  if ( (v0 & 1) != 0 )
  {
    *(uint8_t *)v0 = 0;
    v2 = (uint16_t *)(v0 + 1);
    LOBYTE(v3) = 91;
  }
  if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
  {
    *v2 = 0;
    v3 -= 2;
    ++v2;
  }
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v4++ = 0;
    if ( (v3 & 1) == 0 )
      goto LABEL_8;
  }
  else if ( (v3 & 1) == 0 )
  {
LABEL_8:
    *(uint32_t *)(v0 + 88) = 1;
    *(uint32_t *)(v0 + 8) = v0 + 12;
    return v1;
  }
  *(uint8_t *)v4 = 0;
  goto LABEL_8;
}

// ----------------------------------------------------------------------------
// Function: ssl_sess_cert_free  (binary VA: 0x12f5f90)
// Original: ssl_sess_cert_free
// ----------------------------------------------------------------------------
void ssl_sess_cert_free(void **a1)
{
  if ( a1 != nullptr && (int)CRYPTO_add_lock(a1 + 22, -1, 15, &unk_1B15112, 0) <= 0 )
  {
    if ( *a1 != nullptr )
      sk_pop_free(*a1, (int)(uintptr_t)((int (*)(char))X509_free));
    if ( a1[3] != nullptr )
      X509_free(a1[3]);
    if ( a1[5] != nullptr )
      X509_free(a1[5]);
    if ( a1[7] != nullptr )
      X509_free(a1[7]);
    if ( a1[9] != nullptr )
      X509_free(a1[9]);
    if ( a1[11] != nullptr )
      X509_free(a1[11]);
    if ( a1[13] != nullptr )
      X509_free(a1[13]);
    if ( a1[15] != nullptr )
      X509_free(a1[15]);
    if ( a1[17] != nullptr )
      X509_free(a1[17]);
    if ( a1[19] != nullptr )
      RSA_free(a1[19]);
    if ( a1[20] != nullptr )
      DH_free(a1[20]);
    if ( a1[21] != nullptr )
      EC_KEY_free(a1[21]);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: ssl_set_peer_cert_type  (binary VA: 0x12f60c0)
// Original: ssl_set_peer_cert_type
// ----------------------------------------------------------------------------
int ssl_set_peer_cert_type(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl_verify_cert_chain  (binary VA: 0x12f60e0)
// Original: ssl_verify_cert_chain
// ----------------------------------------------------------------------------
int ssl_verify_cert_chain(uint32_t *a1, int a2)
{
  int v2;
  int v4;
  int v5;
  const char *v6;
  int v7;
  int v8;
  int v9;
  int (*v10)(uint8_t *, uint32_t);
  typedef uint8_t _g4_t_v11[100];
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (108u + sizeof(_g4_t_v12)) > _g4_s1 ? (108u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 108u);

  v2 = 0;
  if ( a2 != 0 && sk_num(a2) != 0 )
  {
    v4 = sk_value(a2, 0);
    if ( X509_STORE_CTX_init(v11, *(uint32_t *)(a1[57] + 12), v4, a2) != 0 )
    {
      v5 = SSL_get_ex_data_X509_STORE_CTX_idx();
      X509_STORE_CTX_set_ex_data(v11, v5, a1);
      v6 = "ssl_client";
      if ( a1[9] == 0 )
        v6 = "ssl_server";
      X509_STORE_CTX_set_default(v11, v6);
      v7 = a1[28];
      v8 = X509_STORE_CTX_get0_param(v11);
      X509_VERIFY_PARAM_set1(v8, v7);
      if ( a1[51] != 0 )
        X509_STORE_CTX_set_verify_cb(v11, a1[51]);
      v9 = a1[57];
      v10 = *(int (**)(uint8_t *, uint32_t))(v9 + 100);
      if ( v10 != nullptr )
        v2 = v10(v11, *(uint32_t *)(v9 + 104));
      else
        v2 = X509_verify_cert(v11);
      a1[59] = v12;
      X509_STORE_CTX_cleanup(v11);
    }
    else
    {
      ERR_put_error(20, 207, 11, &unk_1B15112, 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_dup_CA_list  (binary VA: 0x12f6270)
// Original: SSL_dup_CA_list
// ----------------------------------------------------------------------------
void * SSL_dup_CA_list(int a1)
{
  int v1;
  void *v2;
  int v3;
  int v4;

  v1 = 0;
  v2 = (void *)sk_new_null();
  while ( 1 )
  {
    if ( v1 >= sk_num(a1) )
      return v2;
    v3 = sk_value(a1, v1);
    v4 = X509_NAME_dup(v3);
    if ( v4 == 0 || sk_push(v2, v4) == 0 )
      break;
    ++v1;
  }
  sk_pop_free(v2, (int)(uintptr_t)(X509_NAME_free));
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_client_CA_list  (binary VA: 0x12f6300)
// Original: SSL_set_client_CA_list
// ----------------------------------------------------------------------------
int SSL_set_client_CA_list(int a1, int a2)
{
  if ( *(uint32_t *)(a1 + 248) != 0 )
    sk_pop_free(*(void **)(a1 + 248), (int)(uintptr_t)(X509_NAME_free));
  *(uint32_t *)(a1 + 248) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_client_CA_list  (binary VA: 0x12f6350)
// Original: SSL_CTX_set_client_CA_list
// ----------------------------------------------------------------------------
int SSL_CTX_set_client_CA_list(int a1, int a2)
{
  if ( *(uint32_t *)(a1 + 160) != 0 )
    sk_pop_free(*(void **)(a1 + 160), (int)(uintptr_t)(X509_NAME_free));
  *(uint32_t *)(a1 + 160) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_client_CA_list  (binary VA: 0x12f63a0)
// Original: SSL_CTX_get_client_CA_list
// ----------------------------------------------------------------------------
int SSL_CTX_get_client_CA_list(int a1)
{
  return *(uint32_t *)(a1 + 160);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_client_CA_list  (binary VA: 0x12f63b0)
// Original: SSL_get_client_CA_list
// ----------------------------------------------------------------------------
int SSL_get_client_CA_list(int *a1)
{
  int result;
  int v2;

  if ( a1[1] == 4096 )
  {
    result = 0;
    if ( *a1 >> 8 == 3 )
    {
      v2 = a1[22];
      if ( v2 != 0 )
        return *(uint32_t *)(v2 + 876);
    }
  }
  else
  {
    result = a1[62];
    if ( result == 0 )
      return *(uint32_t *)(a1[57] + 160);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_add_client_CA  (binary VA: 0x12f6400)
// Original: SSL_add_client_CA
// ----------------------------------------------------------------------------
int SSL_add_client_CA(int a1, int a2)
{
  int v2;
  int subject_name;
  int v4;
  int v5;
  int v7;

  v2 = 0;
  if ( a2 != 0 )
  {
    if ( *(uint32_t *)(a1 + 248) != 0 || (v7 = (int)(uintptr_t)(sk_new_null()), *(uint32_t *)(a1 + 248) = v7, v7 != 0) )
    {
      v2 = 0;
      subject_name = X509_get_subject_name(a2);
      v4 = X509_NAME_dup(subject_name);
      v5 = v4;
      if ( v4 != 0 )
      {
        LOWORD(v2) = 1;
        if ( sk_push(*(uint32_t *)(a1 + 248), v4) == 0 )
        {
          LOWORD(v2) = 0;
          X509_NAME_free(v5);
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_add_client_CA  (binary VA: 0x12f64b0)
// Original: SSL_CTX_add_client_CA
// ----------------------------------------------------------------------------
int SSL_CTX_add_client_CA(int a1, int a2)
{
  int v2;
  int subject_name;
  int v4;
  int v5;
  int v7;

  v2 = 0;
  if ( a2 != 0 )
  {
    if ( *(uint32_t *)(a1 + 160) != 0 || (v7 = (int)(uintptr_t)(sk_new_null()), *(uint32_t *)(a1 + 160) = v7, v7 != 0) )
    {
      v2 = 0;
      subject_name = X509_get_subject_name(a2);
      v4 = X509_NAME_dup(subject_name);
      v5 = v4;
      if ( v4 != 0 )
      {
        LOWORD(v2) = 1;
        if ( sk_push(*(uint32_t *)(a1 + 160), v4) == 0 )
        {
          LOWORD(v2) = 0;
          X509_NAME_free(v5);
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_load_client_CA_file  (binary VA: 0x12f6560)
// Original: SSL_load_client_CA_file
// ----------------------------------------------------------------------------
void * SSL_load_client_CA_file(int a1)
{
  int v1;
  void *v2;
  int subject_name;
  int v5;
  int v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v9[0] = 0;
  v7 = (void *)sk_new(sub_12F52C0);
  v1 = (int)(uintptr_t)(BIO_s_file());
  v8 = (void *)BIO_new(v1);
  if ( v8 == nullptr || v7 == nullptr )
  {
LABEL_15:
    ERR_put_error(20, 185, 65, &unk_1B15112, 0);
    goto LABEL_4;
  }
  if ( BIO_ctrl(v8, 108, 3, a1) == 0 )
  {
LABEL_4:
    v2 = nullptr;
    goto LABEL_5;
  }
  v2 = nullptr;
  while ( PEM_read_bio_X509((int)(uintptr_t)(v8), (int)(uintptr_t)(v9), 0, nullptr) != 0 )
  {
    if ( v2 == nullptr )
    {
      v2 = (void *)sk_new_null();
      if ( v2 == nullptr )
        goto LABEL_15;
    }
    subject_name = X509_get_subject_name(v9[0]);
    if ( subject_name == 0 || (v5 = X509_NAME_dup(subject_name), v6 = v5, v5 == 0) )
    {
      sk_pop_free(v2, (int)(uintptr_t)(X509_NAME_free));
      goto LABEL_4;
    }
    if ( (int)sk_find(v7, v5) < 0 )
    {
      sk_push(v7, v6);
      sk_push(v2, v6);
    }
    else
    {
      X509_NAME_free(v6);
    }
  }
LABEL_5:
  if ( v7 != nullptr )
    sk_free(v7);
  if ( v8 != nullptr )
    BIO_free(v8);
  if ( v9[0] != 0 )
    X509_free(v9[0]);
  if ( v2 != nullptr )
    ERR_clear_error();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_add_file_cert_subjects_to_stack  (binary VA: 0x12f6730)
// Original: SSL_add_file_cert_subjects_to_stack
// ----------------------------------------------------------------------------
int SSL_add_file_cert_subjects_to_stack(int a1, int a2)
{
  int v2;
  int v3;
  int subject_name;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v10[0] = 0;
  v8 = sk_set_cmp_func(a1, sub_12F52C0);
  v2 = (int)(uintptr_t)(BIO_s_file());
  v9 = (void *)BIO_new(v2);
  if ( v9 != nullptr )
  {
    v3 = 0;
    if ( BIO_ctrl(v9, 108, 3, a2) != 0 )
    {
      while ( PEM_read_bio_X509((int)(uintptr_t)(v9), (int)(uintptr_t)(v10), 0, nullptr) != 0 )
      {
        subject_name = X509_get_subject_name(v10[0]);
        if ( subject_name == 0 || (v5 = X509_NAME_dup(subject_name), v6 = v5, v5 == 0) )
        {
          v3 = 0;
          goto LABEL_10;
        }
        if ( (int)sk_find(a1, v5) < 0 )
          sk_push(a1, v6);
        else
          X509_NAME_free(v6);
      }
      ERR_clear_error();
      v3 = 1;
    }
LABEL_10:
    BIO_free(v9);
  }
  else
  {
    v3 = 0;
    ERR_put_error(20, 216, 65, &unk_1B15112, 0);
  }
  if ( v10[0] != 0 )
    X509_free(v10[0]);
  sk_set_cmp_func(a1, v8);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: SSL_add_dir_cert_subjects_to_stack  (binary VA: 0x12f68b0)
// Original: SSL_add_dir_cert_subjects_to_stack
// ----------------------------------------------------------------------------
const char * SSL_add_dir_cert_subjects_to_stack(int a1, char *s)
{
  int v2;
  int v3;
  const char *v4;
  int v5;
  int v6;
  uint32_t *v8;
  typedef size_t _g4_t_v9;
  typedef int _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[1036];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  v10[0] = 0;
  CRYPTO_lock(9, 24, &unk_1B15112, 0);
  while ( 1 )
  {
    v4 = (const char *)OPENSSL_DIR_read((int)(uintptr_t)(v10), s);
    if ( v4 == nullptr )
      break;
    v9 = strlen(s);
    if ( v9 + strlen(v4) + 2 > 0x400 )
    {
      v4 = nullptr;
      ERR_put_error(20, 215, 270, &unk_1B15112, 0);
      goto LABEL_8;
    }
    if ( (unsigned int)(BIO_snprintf(v11, 1024, "%s/%s", s, v4) - 1) > 0x3FE
      || SSL_add_file_cert_subjects_to_stack(a1, (int)(uintptr_t)(v11)) == 0 )
    {
      v4 = nullptr;
      goto LABEL_8;
    }
  }
  LOWORD(v4) = 1;
  if ( *(uint32_t *)__errno(v3, v2) != 0 )
  {
    v8 = (uint32_t *)__errno(v6, v5);
    LOWORD(v4) = 0;
    ERR_put_error(2, 10, *v8, &unk_1B15112, 0);
    ERR_add_error_data(3, "OPENSSL_DIR_read(&ctx, '", s, "')");
    ERR_put_error(20, 215, 2, &unk_1B15112, 0);
  }
LABEL_8:
  if ( v10[0] != 0 )
    OPENSSL_DIR_end(v10);
  CRYPTO_lock(10, 24, &unk_1B15112, 0);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ssl_load_ciphers  (binary VA: 0x12f74e0)
// Original: ssl_load_ciphers
// ----------------------------------------------------------------------------
int ssl_load_ciphers()
{
  int digestbyname;
  int str;
  int result;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);

  dword_2116F20 = EVP_get_cipherbyname("DES-CBC");
  dword_2116F24 = EVP_get_cipherbyname("DES-EDE3-CBC");
  dword_2116F28 = EVP_get_cipherbyname("RC4");
  dword_2116F2C = EVP_get_cipherbyname("RC2-CBC");
  dword_2116F30 = EVP_get_cipherbyname("IDEA-CBC");
  dword_2116F38 = EVP_get_cipherbyname("AES-128-CBC");
  dword_2116F3C = EVP_get_cipherbyname("AES-256-CBC");
  dword_2116F40 = EVP_get_cipherbyname("CAMELLIA-128-CBC");
  dword_2116F44 = EVP_get_cipherbyname("CAMELLIA-256-CBC");
  dword_2116F48 = EVP_get_cipherbyname("gost89-cnt");
  dword_2116F4C = EVP_get_cipherbyname("SEED-CBC");
  dword_2116F50 = EVP_get_digestbyname("MD5");
  dword_2116F60 = EVP_MD_size(dword_2116F50);
  if ( (int32_t)dword_2116F60 < 0 )
    OpenSSLDie(&unk_1B15112, 0, "ssl_mac_secret_size[SSL_MD_MD5_IDX] >= 0");
  dword_2116F54 = EVP_get_digestbyname("SHA1");
  dword_2116F64 = EVP_MD_size(dword_2116F54);
  if ( (int32_t)dword_2116F64 < 0 )
    OpenSSLDie(&unk_1B15112, 0, "ssl_mac_secret_size[SSL_MD_SHA1_IDX] >= 0");
  digestbyname = EVP_get_digestbyname("md_gost94");
  dword_2116F58 = digestbyname;
  if ( digestbyname != 0 )
  {
    dword_2116F68 = EVP_MD_size(digestbyname);
    if ( (int32_t)dword_2116F68 < 0 )
      OpenSSLDie(&unk_1B15112, 0, "ssl_mac_secret_size[SSL_MD_GOST94_IDX] >= 0");
  }
  dword_2116F5C = EVP_get_digestbyname("gost-mac");
  v3 = 0;
  str = EVP_PKEY_asn1_find_str(0, "gost-mac", 0xFFFFFFFF);
  if ( str != 0 )
    EVP_PKEY_asn1_get0_info(&v3, 0, 0, 0, 0, str);
  result = v3;
  dword_20C587C = v3;
  if ( v3 != 0 )
    dword_2116F6C = 32;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_cipher_get_evp  (binary VA: 0x12f7760)
// Original: ssl_cipher_get_evp
// ----------------------------------------------------------------------------
bool ssl_cipher_get_evp(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  bool result;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  uint32_t *v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t _g4_t_v16[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);

  result = false;
  v7 = *(uint32_t *)(a1 + 180);
  if ( v7 == 0 )
    return result;
  if ( a6 != nullptr )
  {
    CRYPTO_lock(5, 16, &unk_1B15112, 0);
    if ( dword_2116F70 != 0 )
    {
      CRYPTO_lock(6, 16, &unk_1B15112, 0);
    }
    else
    {
      CRYPTO_lock(6, 16, &unk_1B15112, 0);
      CRYPTO_lock(9, 16, &unk_1B15112, 0);
      if ( dword_2116F70 == 0 )
      {
        CRYPTO_mem_ctrl(3);
        dword_2116F70 = (uint32_t)(uintptr_t)(sk_new(sub_12F6AC0));
        if ( dword_2116F70 != 0 )
        {
          v13 = (int)(uintptr_t)(CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0));
          if ( v13 != 0 )
          {
            v15 = (uint32_t *)v13;
            v14 = (uint32_t *)COMP_zlib();
            v15[2] = (uint32_t)(uintptr_t)(v14);
            if ( v14 != nullptr && *v14 == 0 )
            {
              CRYPTO_free(v15);
            }
            else
            {
              *v15 = 1;
              v15[1] = v14[1];
              sk_push(dword_2116F70, v15);
            }
          }
        }
        CRYPTO_mem_ctrl(2);
      }
      CRYPTO_lock(10, 16, &unk_1B15112, 0);
    }
    *a6 = 0;
    v16[0] = *(uint32_t *)(a1 + 176);
    if ( dword_2116F70 != 0 )
    {
      v8 = sk_find(dword_2116F70, v16);
      if ( v8 < 0 )
        *a6 = 0;
      else
        *a6 = sk_value(dword_2116F70, v8);
    }
  }
  if ( a3 == nullptr || a2 == nullptr )
    return false;
  v9 = *(uint32_t *)(v7 + 20);
  if ( v9 != 32 )
  {
    switch ( v9 )
    {
      case 1u:
        v12 = 0;
        break;
      case 2u:
        v12 = 1;
        break;
      case 4u:
        v12 = 2;
        break;
      case 8u:
        v12 = 3;
        break;
      case 0x10u:
        v12 = 4;
        break;
      case 0x40u:
        v12 = 6;
        break;
      case 0x80u:
        v12 = 7;
        break;
      case 0x100u:
        v12 = 8;
        break;
      case 0x200u:
        v12 = 9;
        break;
      case 0x400u:
        v12 = 10;
        break;
      case 0x800u:
        v12 = 11;
        break;
      default:
        *a2 = 0;
        goto LABEL_18;
    }
    *a2 = (&dword_2116F20)[v12];
    v10 = *(uint32_t *)(v7 + 24) - 1;
    if ( v10 > 7 )
      goto LABEL_37;
    goto LABEL_19;
  }
  *a2 = (uint32_t)(uintptr_t)(EVP_enc_null());
LABEL_18:
  v10 = *(uint32_t *)(v7 + 24) - 1;
  if ( v10 > 7 )
  {
LABEL_37:
    *a3 = 0;
    if ( a4 != nullptr )
      *a4 = 0;
    if ( a5 != nullptr )
      *a5 = 0;
    goto LABEL_24;
  }
LABEL_19:
  v11 = dword_1CFAE40[v10];
  if ( v11 > 4 )
    goto LABEL_37;
  *a3 = (&dword_2116F50)[v11];
  if ( a4 != nullptr )
    *a4 = dword_20C5870[v11];
  if ( a5 != nullptr )
    *a5 = (&dword_2116F60)[v11];
LABEL_24:
  result = false;
  if ( *a2 != 0 && *a3 != 0 )
  {
    result = true;
    if ( a4 != nullptr )
      return *a4 != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_get_handshake_digest  (binary VA: 0x12f7ba0)
// Original: ssl_get_handshake_digest
// ----------------------------------------------------------------------------
int ssl_get_handshake_digest(unsigned int a1, int *a2, int *a3)
{
  int result;
  int v4;
  int v5;

  result = 0;
  if ( a1 <= 3 )
  {
    v4 = dword_1CFAE60[a1];
    if ( v4 != 0 )
    {
      v5 = (&dword_2116F50)[a1];
      *a2 = v4;
      *a3 = v5;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_create_cipher_list  (binary VA: 0x12f7be0)
// Original: ssl_create_cipher_list
// ----------------------------------------------------------------------------
int ssl_create_cipher_list(int a1, void **a2, void **a3, char *a4)
{
  int v4;
  int str;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  size_t v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *i;
  int v28;
  uint32_t *v29;
  uint32_t *v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  char *v36;
  uint32_t *k;
  void *v38;
  int v40;
  int v41;
  typedef void *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t **_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_j;
  typedef uint32_t _g4_t_v73[4];
  typedef uint32_t _g4_t_v74[4];
  typedef uint32_t _g4_t_v75[7];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v43)) > _g4_s1 ? (32u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v44)) > _g4_s2 ? (32u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v45)) > _g4_s3 ? (36u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v46)) > _g4_s4 ? (40u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v47)) > _g4_s5 ? (44u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v48)) > _g4_s6 ? (48u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v49)) > _g4_s7 ? (52u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v50)) > _g4_s8 ? (56u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v51)) > _g4_s9 ? (60u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v52)) > _g4_s10 ? (64u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v53)) > _g4_s11 ? (68u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v54)) > _g4_s12 ? (76u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v55)) > _g4_s13 ? (80u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v56)) > _g4_s14 ? (80u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v57)) > _g4_s15 ? (80u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v58)) > _g4_s16 ? (84u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v59)) > _g4_s17 ? (88u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v60)) > _g4_s18 ? (88u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v61)) > _g4_s19 ? (88u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v62)) > _g4_s20 ? (92u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v63)) > _g4_s21 ? (96u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v64)) > _g4_s22 ? (96u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v65)) > _g4_s23 ? (96u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v66)) > _g4_s24 ? (100u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v67)) > _g4_s25 ? (100u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v68)) > _g4_s26 ? (100u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v69)) > _g4_s27 ? (104u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v70)) > _g4_s28 ? (104u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v71)) > _g4_s29 ? (108u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_j)) > _g4_s30 ? (108u + sizeof(_g4_t_j)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v73)) > _g4_s31 ? (112u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v74)) > _g4_s32 ? (128u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v75)) > _g4_s33 ? (144u + sizeof(_g4_t_v75)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 100u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 100u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 108u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 108u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 112u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);

  v4 = 0;
  v73[0] = 0;
  v74[0] = 0;
  if ( a4 == nullptr || a2 == nullptr || a3 == nullptr )
    return v4;
  v75[0] = 0;
  str = EVP_PKEY_asn1_find_str(0, "gost94", 0xFFFFFFFF);
  if ( str != 0 )
    EVP_PKEY_asn1_get0_info(v75, 0, 0, 0, 0, str);
  v6 = -(v75[0] == 0);
  v75[0] = 0;
  v63 = (v6 & 0x100) + 40;
  v7 = EVP_PKEY_asn1_find_str(0, "gost2001", 0xFFFFFFFF);
  if ( v7 != 0 )
    EVP_PKEY_asn1_get0_info(v75, 0, 0, 0, 0, v7);
  v8 = v63;
  BYTE1(v8) = BYTE1(v63) | 2;
  if ( v75[0] != 0 )
    v8 = v63;
  v64 = v8;
  v9 = (v8 & 0x300) == 768;
  v10 = -535;
  v11 = 534;
  if ( !v9 )
  {
    v10 = -23;
    v11 = 22;
  }
  v62 = v10;
  v66 = (&dword_2116F20)[0];
  v69 = v11;
  v71 = dword_2116F2C == 0 ? 8 : 0;
  v59 = dword_2116F30 == 0 ? 0x10 : 0;
  v55 = dword_2116F38 == 0 ? 0x40 : 0;
  v53 = dword_2116F3C == 0 ? 0x80 : 0;
  v52 = dword_2116F40 == 0 ? 0x100 : 0;
  v51 = dword_2116F44 == 0 ? 0x200 : 0;
  v50 = dword_2116F48 == 0 ? 0x400 : 0;
  v49 = dword_2116F4C == 0 ? 0x800 : 0;
  v46 = (&dword_2116F50)[0];
  v48 = dword_2116F54 == 0 ? 2 : 0;
  v47 = dword_2116F58 == 0 ? 4 : 0;
  v12 = 8;
  if ( dword_2116F5C != 0 )
    v12 = dword_20C587C == 0 ? 8 : 0;
  v43 = dword_2116F24 == 0 ? 2 : 0;
  v45 = dword_2116F28 == 0 ? 4 : 0;
  v58 = (*(int (**)(void))(a1 + 84))();
  v54 = (uint32_t *)CRYPTO_malloc(20 * v58, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v54 == nullptr )
  {
LABEL_87:
    v4 = 0;
    ERR_put_error(20, 166, 65, &unk_1B15112, 0);
    return v4;
  }
  v67 = v49 | v50 | v51 | v52 | v53 | v55 | v59 | v71 | v45 | v43 | (v66 == 0);
  v56 = 0;
  v13 = v12 | v47 | v48 | (v46 == 0);
  v14 = 0;
  v60 = v13;
  if ( v58 > 0 )
  {
    do
    {
      v15 = (uint32_t *)(*(int (**)(int))(a1 + 88))(v14);
      if ( v15 != nullptr
        && *v15 != 0
        && (v69 & v15[3]) == 0
        && (v64 & v15[4]) == 0
        && (v67 & v15[5]) == 0
        && (v60 & v15[6]) == 0 )
      {
        v16 = v56++;
        v17 = &v54[5 * v16];
        *v17 = (uint32_t)(uintptr_t)(v15);
        v17[3] = 0;
        v17[4] = 0;
        v17[1] = 0;
      }
      ++v14;
    }
    while ( v14 != v58 );
    if ( v56 != 0 )
    {
      v18 = v54;
      v54[4] = 0;
      if ( v56 != 1 )
      {
        v19 = v56 - 1;
        v54[3] = (uint32_t)(uintptr_t)(v54 + 5);
        if ( v56 != 2 )
        {
          v20 = 1;
          do
          {
            ++v20;
            v18[9] = (uint32_t)(uintptr_t)(v18);
            v18[8] = (uint32_t)(uintptr_t)(v18 + 10);
            v18 += 5;
          }
          while ( v20 < v19 );
        }
        v18 = &v54[5 * v19];
        v18[4] = (uint32_t)(uintptr_t)(&v54[5 * v56 - 10]);
      }
      v18[3] = 0;
      v73[0] = (uint32_t)(uintptr_t)(v54);
      v74[0] = (uint32_t)(uintptr_t)(v18);
    }
  }
  sub_12F6AE0(128, 0, 0, 0, 0, 0, 1, -1, v73, v74);
  sub_12F6AE0(128, 0, 0, 0, 0, 0, 3, -1, v73, v74);
  sub_12F6AE0(0, 0, 192, 0, 0, 0, 1, -1, v73, v74);
  sub_12F6AE0(0, 0, 0, 0, 0, 0, 1, -1, v73, v74);
  sub_12F6AE0(0, 0, 0, 1, 0, 0, 4, -1, v73, v74);
  sub_12F6AE0(0, 4, 0, 0, 0, 0, 4, -1, v73, v74);
  sub_12F6AE0(0, 16, 0, 0, 0, 0, 4, -1, v73, v74);
  sub_12F6AE0(1, 0, 0, 0, 0, 0, 4, -1, v73, v74);
  sub_12F6AE0(256, 0, 0, 0, 0, 0, 4, -1, v73, v74);
  sub_12F6AE0(16, 0, 0, 0, 0, 0, 4, -1, v73, v74);
  sub_12F6AE0(0, 0, 4, 0, 0, 0, 4, -1, v73, v74);
  v21 = (uint32_t *)v73[0];
  if ( v73[0] != 0 )
  {
    v22 = 0;
    do
    {
      if ( v21[1] != 0 && v22 < *(uint32_t *)(*v21 + 40) )
        v22 = *(uint32_t *)(*v21 + 40);
      v21 = (uint32_t *)v21[3];
    }
    while ( v21 != nullptr );
    v23 = 4 * v22 + 4;
    v24 = v23;
  }
  else
  {
    v24 = 4;
    v23 = 4;
    v22 = 0;
  }
  v44 = v23;
  v25 = (uint32_t *)CRYPTO_malloc(v24, (int)(uintptr_t)(&unk_1B15112), 0);
  v26 = v25;
  if ( v25 == nullptr )
  {
    ERR_put_error(20, 231, 65, &unk_1B15112, 0);
    v4 = 0;
    CRYPTO_free(v54);
    return v4;
  }
  memset(v25, 0, v44);
  for ( i = (uint32_t *)v73[0]; i != nullptr; i = (uint32_t *)i[3] )
  {
    if ( i[1] != 0 )
      ++v26[*(uint32_t *)(*i + 40)];
  }
  do
  {
    if ( (int)v26[v22] > 0 )
      sub_12F6AE0(0, 0, 0, 0, 0, 0, 4, v22, v73, v74);
    --v22;
  }
  while ( v22 != -1 );
  CRYPTO_free(v26);
  sub_12F6AE0(0, 0, 0, 0, 0, 0, 3, -1, v73, v74);
  v28 = (int)(uintptr_t)(CRYPTO_malloc(4 * v58 + 272, (int)(uintptr_t)(&unk_1B15112), 0));
  v57 = (uint32_t **)v28;
  if ( v28 == 0 )
  {
    CRYPTO_free(v54);
    goto LABEL_87;
  }
  v29 = (uint32_t *)v28;
  v30 = (uint32_t *)v73[0];
  v65 = ~v64;
  v68 = ~v67;
  v61 = ~v60;
  v70 = v29;
  if ( v73[0] != 0 )
  {
    do
    {
      *v29 = *v30;
      v30 = (uint32_t *)v30[3];
      ++v29;
    }
    while ( v30 != nullptr );
    v70 = v29;
  }
  v31 = (int *)&unk_2037010;
  for ( j = 0; j != 67; ++j )
  {
    v32 = *(v31 - 1);
    v33 = *v31;
    v34 = v31[1];
    v35 = v31[2];
    if ( (v32 == 0 || (v32 & v62) != 0)
      && (v33 == 0 || (v33 & v65) != 0)
      && (v34 == 0 || (v34 & v68) != 0)
      && (v35 == 0 || (v35 & v61) != 0) )
    {
      *v70++ = (uint32_t)(uintptr_t)((char *)&unk_2037000 + 48 * j);
    }
    v31 += 12;
  }
  *v70 = 0;
  v9 = memcmp(a4, "DEFAULT", 7u) == 0;
  v36 = a4;
  if ( v9 )
  {
    v40 = sub_12F6E20("ALL:!aNULL:!eNULL:!SSLv2", v73, v74, v57);
    v36 = a4 + 7;
    if ( a4[7] == 58 )
      v36 = a4 + 8;
    if ( v40 == 0 )
    {
      CRYPTO_free(v57);
LABEL_81:
      v4 = 0;
      CRYPTO_free(v54);
      return v4;
    }
  }
  if ( *v36 != 0 )
  {
    v41 = sub_12F6E20(v36, v73, v74, v57);
    CRYPTO_free(v57);
    if ( v41 == 0 )
      goto LABEL_81;
  }
  else
  {
    CRYPTO_free(v57);
  }
  v4 = (int)(uintptr_t)(sk_new_null());
  if ( v4 != 0 )
  {
    for ( k = (uint32_t *)v73[0]; k != nullptr; k = (uint32_t *)k[3] )
    {
      while ( k[1] == 0 )
      {
        k = (uint32_t *)k[3];
        if ( k == nullptr )
          goto LABEL_70;
      }
      sk_push(v4, *k);
    }
LABEL_70:
    CRYPTO_free(v54);
    v38 = (void *)sk_dup(v4);
    if ( v38 != nullptr )
    {
      if ( *a2 != nullptr )
        sk_free(*a2);
      *a2 = (void *)v4;
      if ( *a3 != nullptr )
        sk_free(*a3);
      *a3 = v38;
      sk_set_cmp_func(v38, ssl_cipher_ptr_id_cmp);
      sk_sort(*a3);
    }
    else
    {
      v42 = (void *)v4;
      v4 = 0;
      sk_free(v42);
    }
  }
  else
  {
    CRYPTO_free(v54);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: SSL_CIPHER_description  (binary VA: 0x12f87b0)
// Original: SSL_CIPHER_description
// ----------------------------------------------------------------------------
const char * SSL_CIPHER_description(uint32_t *a1, int a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  const char *v5;
  const char *v6;
  const char *v7;
  const char *v8;
  const char *v9;
  const char *v10;
  unsigned int v12;
  const char *v13;
  const char *v14;
  const char *v15;
  const char *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;

  v17 = a1[6];
  v12 = a1[3];
  v3 = a1[4];
  v4 = a1[5];
  v19 = a1[8] & 2;
  if ( (a1[8] & 8) != 0 )
  {
    v22 = 1;
    v21 = 512;
    v20 = 5;
  }
  else
  {
    v22 = 0;
    v21 = 1024;
    v20 = (v4 == 1) + 7;
  }
  v5 = (const char *)&unk_1B15112;
  if ( v19 != 0 )
    v5 = " export";
  v15 = v5;
  v16 = "SSLv2";
  if ( (a1[7] & 1) == 0 )
  {
    v6 = "unknown";
    if ( (a1[7] & 2) != 0 )
      v6 = "SSLv3";
    v16 = v6;
  }
  v7 = "KRB5";
  if ( v12 != 16 )
  {
    if ( v12 > 0x10 )
    {
      v7 = "ECDH/ECDSA";
      if ( v12 == 64 )
        goto LABEL_15;
      if ( v12 <= 0x40 )
      {
        v7 = "ECDH/RSA";
        if ( v12 == 32 )
          goto LABEL_15;
      }
      else
      {
        v7 = "ECDH";
        if ( v12 == 128 )
          goto LABEL_15;
        v7 = "PSK";
        if ( v12 == 256 )
          goto LABEL_15;
      }
LABEL_61:
      v7 = "unknown";
      goto LABEL_15;
    }
    v7 = "DH/RSA";
    if ( v12 == 2 )
      goto LABEL_15;
    if ( v12 <= 2 )
    {
      if ( v12 != 1 )
        goto LABEL_61;
      v7 = "RSA";
      if ( v19 != 0 )
      {
        v7 = "RSA(512)";
        if ( v21 != 512 )
          v7 = "RSA(1024)";
      }
    }
    else
    {
      v7 = "DH/DSS";
      if ( v12 == 4 )
        goto LABEL_15;
      if ( v12 != 8 )
        goto LABEL_61;
      v7 = "DH";
      if ( v19 != 0 )
      {
        v7 = "DH(512)";
        if ( v21 != 512 )
          v7 = "DH(1024)";
      }
    }
  }
LABEL_15:
  v8 = "DH";
  if ( v3 == 8 )
    goto LABEL_21;
  if ( v3 > 8 )
  {
    v8 = "KRB5";
    if ( v3 == 32 )
      goto LABEL_21;
    if ( v3 <= 0x20 )
    {
      v8 = "ECDH";
      if ( v3 == 16 )
        goto LABEL_21;
    }
    else
    {
      v8 = "ECDSA";
      if ( v3 == 64 )
        goto LABEL_21;
      v8 = "PSK";
      if ( v3 == 128 )
        goto LABEL_21;
    }
LABEL_44:
    v8 = "unknown";
    goto LABEL_21;
  }
  v8 = "DSS";
  if ( v3 != 2 )
  {
    v8 = "None";
    if ( v3 != 4 )
    {
      v8 = "RSA";
      if ( v3 != 1 )
        goto LABEL_44;
    }
  }
LABEL_21:
  v9 = "None";
  if ( v4 == 32 )
    goto LABEL_28;
  if ( v4 <= 0x20 )
  {
    if ( v4 != 4 )
    {
      if ( v4 <= 4 )
      {
        if ( v4 == 1 )
        {
          if ( v22 == 0 || (v9 = "DES(40)", v19 == 0) )
            v9 = "DES(56)";
          goto LABEL_28;
        }
        v9 = "3DES(168)";
        if ( v4 == 2 )
          goto LABEL_28;
      }
      else
      {
        if ( v4 == 8 )
        {
          v9 = "RC2(128)";
          if ( v19 != 0 )
          {
            v9 = "RC2(40)";
            if ( v20 != 5 )
              v9 = "RC2(56)";
          }
          goto LABEL_28;
        }
        v9 = "IDEA(128)";
        if ( v4 == 16 )
          goto LABEL_28;
      }
LABEL_27:
      v9 = "unknown";
      goto LABEL_28;
    }
    if ( v19 != 0 )
    {
      v9 = "RC4(40)";
      if ( v20 != 5 )
        v9 = "RC4(56)";
    }
    else
    {
      v9 = "RC4(64)";
      if ( (a1[9] & 2) == 0 )
        v9 = "RC4(128)";
    }
  }
  else
  {
    v9 = "Camellia(128)";
    if ( v4 == 256 )
      goto LABEL_28;
    if ( v4 > 0x100 )
    {
      v9 = "Camellia(256)";
      if ( v4 != 512 )
      {
        v9 = "SEED(128)";
        if ( v4 != 2048 )
          goto LABEL_27;
      }
    }
    else
    {
      v9 = "AES(128)";
      if ( v4 != 64 )
      {
        v9 = "AES(256)";
        if ( v4 != 128 )
          goto LABEL_27;
      }
    }
  }
LABEL_28:
  v10 = "MD5";
  if ( v17 != 1 )
  {
    v10 = "unknown";
    if ( v17 == 2 )
      v10 = "SHA1";
  }
  if ( a2 != 0 )
  {
    if ( a3 > 127 )
    {
      v18 = a3;
LABEL_34:
      BIO_snprintf(a2, v18, "%-23s %s Kx=%-8s Au=%-4s Enc=%-9s Mac=%-4s%s\n", a1[1], v16, v7, v8, v9, v10, v15);
      return (const char *)a2;
    }
    return "Buffer too small";
  }
  else
  {
    v14 = v8;
    v13 = v9;
    a2 = (int)(uintptr_t)(CRYPTO_malloc(0x80u, (int)(uintptr_t)(&unk_1B15112), 0));
    v8 = v14;
    v9 = v13;
    if ( a2 != 0 )
    {
      v18 = 128;
      goto LABEL_34;
    }
    return "OPENSSL_malloc Error";
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_CIPHER_get_version  (binary VA: 0x12f8c90)
// Original: SSL_CIPHER_get_version
// ----------------------------------------------------------------------------
const char * SSL_CIPHER_get_version(int a1)
{
  const char *result;
  int v2;

  result = "(NONE)";
  if ( a1 != 0 )
  {
    v2 = *(uint8_t *)(a1 + 11);
    result = "TLSv1/SSLv3";
    if ( v2 != 3 )
    {
      result = "SSLv2";
      if ( v2 != 2 )
        return "unknown";
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CIPHER_get_name  (binary VA: 0x12f8cd0)
// Original: SSL_CIPHER_get_name
// ----------------------------------------------------------------------------
const char * SSL_CIPHER_get_name(int a1)
{
  const char *result;

  result = "(NONE)";
  if ( a1 != 0 )
    return *(const char **)(a1 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CIPHER_get_bits  (binary VA: 0x12f8cf0)
// Original: SSL_CIPHER_get_bits
// ----------------------------------------------------------------------------
int SSL_CIPHER_get_bits(int a1, uint32_t *a2)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    if ( a2 != nullptr )
      *a2 = *(uint32_t *)(a1 + 44);
    return *(uint32_t *)(a1 + 40);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_comp_find  (binary VA: 0x12f8d10)
// Original: ssl3_comp_find
// ----------------------------------------------------------------------------
uint32_t * ssl3_comp_find(int a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;

  if ( a2 == 0 || a1 == 0 )
    return nullptr;
  v4 = sk_num(a1);
  result = nullptr;
  if ( v4 > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      result = (uint32_t *)sk_value(a1, v3);
      if ( *result == a2 )
        break;
      if ( ++v3 == v4 )
        return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_COMP_get_compression_methods  (binary VA: 0x12f8d90)
// Original: SSL_COMP_get_compression_methods
// ----------------------------------------------------------------------------
int SSL_COMP_get_compression_methods()
{
  uint32_t *v1;
  uint32_t *v2;

  CRYPTO_lock(5, 16, &unk_1B15112, 0);
  if ( dword_2116F70 != 0 )
  {
    CRYPTO_lock(6, 16, &unk_1B15112, 0);
  }
  else
  {
    CRYPTO_lock(6, 16, &unk_1B15112, 0);
    CRYPTO_lock(9, 16, &unk_1B15112, 0);
    if ( dword_2116F70 == 0 )
    {
      CRYPTO_mem_ctrl(3);
      dword_2116F70 = (uint32_t)(uintptr_t)(sk_new(sub_12F6AC0));
      if ( dword_2116F70 != 0 )
      {
        v1 = (uint32_t *)CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v1 != nullptr )
        {
          v2 = (uint32_t *)COMP_zlib();
          v1[2] = (uint32_t)(uintptr_t)(v2);
          if ( v2 != nullptr && *v2 == 0 )
          {
            CRYPTO_free(v1);
          }
          else
          {
            *v1 = 1;
            v1[1] = v2[1];
            sk_push(dword_2116F70, v1);
          }
        }
      }
      CRYPTO_mem_ctrl(2);
    }
    CRYPTO_lock(10, 16, &unk_1B15112, 0);
  }
  return dword_2116F70;
}

// ----------------------------------------------------------------------------
// Function: SSL_COMP_add_compression_method  (binary VA: 0x12f8f00)
// Original: SSL_COMP_add_compression_method
// ----------------------------------------------------------------------------
int SSL_COMP_add_compression_method(int a1, uint32_t *a2)
{
  int result;
  uint32_t *v3;
  void *v4;
  uint32_t *v5;
  uint32_t *v6;

  result = 1;
  if ( a2 != nullptr && *a2 != 0 )
  {
    if ( (unsigned int)(a1 - 193) > 0x3E )
    {
      ERR_put_error(20, 165, 307, &unk_1B15112, 0);
      return 0;
    }
    CRYPTO_mem_ctrl(3);
    v3 = (uint32_t *)CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0);
    *v3 = a1;
    v3[2] = (uint32_t)(uintptr_t)(a2);
    v4 = v3;
    CRYPTO_lock(5, 16, &unk_1B15112, 0);
    if ( dword_2116F70 != 0 )
    {
      CRYPTO_lock(6, 16, &unk_1B15112, 0);
    }
    else
    {
      CRYPTO_lock(6, 16, &unk_1B15112, 0);
      CRYPTO_lock(9, 16, &unk_1B15112, 0);
      if ( dword_2116F70 == 0 )
      {
        CRYPTO_mem_ctrl(3);
        dword_2116F70 = (uint32_t)(uintptr_t)(sk_new(sub_12F6AC0));
        if ( dword_2116F70 != 0 )
        {
          v5 = (uint32_t *)CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v5 != nullptr )
          {
            v6 = (uint32_t *)COMP_zlib();
            v5[2] = (uint32_t)(uintptr_t)(v6);
            if ( v6 != nullptr && *v6 == 0 )
            {
              CRYPTO_free(v5);
            }
            else
            {
              *v5 = 1;
              v5[1] = v6[1];
              sk_push(dword_2116F70, v5);
            }
          }
        }
        CRYPTO_mem_ctrl(2);
      }
      CRYPTO_lock(10, 16, &unk_1B15112, 0);
    }
    if ( dword_2116F70 == 0 )
      goto LABEL_10;
    if ( (int)sk_find(dword_2116F70, v4) >= 0 )
    {
      CRYPTO_free(v4);
      CRYPTO_mem_ctrl(2);
      ERR_put_error(20, 165, 309, &unk_1B15112, 0);
      return 1;
    }
    if ( dword_2116F70 != 0 && sk_push(dword_2116F70, v4) != 0 )
    {
      CRYPTO_mem_ctrl(2);
      return 0;
    }
    else
    {
LABEL_10:
      CRYPTO_free(v4);
      CRYPTO_mem_ctrl(2);
      ERR_put_error(20, 165, 65, &unk_1B15112, 0);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_COMP_get_name  (binary VA: 0x12f9210)
// Original: SSL_COMP_get_name
// ----------------------------------------------------------------------------
int SSL_COMP_get_name(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_load_error_strings  (binary VA: 0x12f9230)
// Original: SSL_load_error_strings
// ----------------------------------------------------------------------------
int SSL_load_error_strings()
{
  ERR_load_crypto_strings();
  return ERR_load_SSL_strings();
}

// ----------------------------------------------------------------------------
// Function: ssl_undefined_function  (binary VA: 0x12f9280)
// Original: ssl_undefined_function
// ----------------------------------------------------------------------------
int ssl_undefined_function()
{
  ERR_put_error(20, 197, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_ssl_version  (binary VA: 0x12f9340)
// Original: SSL_CTX_set_ssl_version
// ----------------------------------------------------------------------------
int SSL_CTX_set_ssl_version(int a1, uint32_t *a2)
{
  char *v2;
  int cipher_list;

  v2 = "SSLv2";
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(a2);
  if ( *a2 != 2 )
    v2 = "ALL:!aNULL:!eNULL:!SSLv2";
  cipher_list = ssl_create_cipher_list((int)(uintptr_t)(a2), (void **)(a1 + 4), (void **)(a1 + 8), v2);
  if ( cipher_list != 0 && (int)sk_num(cipher_list) > 0 )
    return 1;
  ERR_put_error(20, 170, 230, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_session_id_context  (binary VA: 0x12f93f0)
// Original: SSL_CTX_set_session_id_context
// ----------------------------------------------------------------------------
int SSL_CTX_set_session_id_context(int a1, void *src, size_t n)
{
  if ( n > 0x20 )
  {
    ERR_put_error(20, 219, 273, &unk_1B15112, 0);
    return 0;
  }
  else
  {
    *(uint32_t *)(a1 + 196) = n;
    memcpy((void *)(a1 + 200), src, n);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_set_session_id_context  (binary VA: 0x12f9470)
// Original: SSL_set_session_id_context
// ----------------------------------------------------------------------------
int SSL_set_session_id_context(int a1, void *src, size_t n)
{
  if ( n > 0x20 )
  {
    ERR_put_error(20, 218, 273, &unk_1B15112, 0);
    return 0;
  }
  else
  {
    *(uint32_t *)(a1 + 156) = n;
    memcpy((void *)(a1 + 160), src, n);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_generate_session_id  (binary VA: 0x12f94f0)
// Original: SSL_CTX_set_generate_session_id
// ----------------------------------------------------------------------------
int SSL_CTX_set_generate_session_id(int a1, int a2)
{
  CRYPTO_lock(9, 12, &unk_1B15112, 0);
  *(uint32_t *)(a1 + 236) = a2;
  CRYPTO_lock(10, 12, &unk_1B15112, 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_generate_session_id  (binary VA: 0x12f9570)
// Original: SSL_set_generate_session_id
// ----------------------------------------------------------------------------
int SSL_set_generate_session_id(int a1, int a2)
{
  CRYPTO_lock(9, 16, &unk_1B15112, 0);
  *(uint32_t *)(a1 + 196) = a2;
  CRYPTO_lock(10, 16, &unk_1B15112, 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_has_matching_session_id  (binary VA: 0x12f95f0)
// Original: SSL_has_matching_session_id
// ----------------------------------------------------------------------------
bool SSL_has_matching_session_id(uint32_t *a1, void *src, size_t n)
{
  bool result;
  int v4;
  typedef uint32_t _g4_t_v5[17];
  typedef size_t _g4_t_v6;
  typedef uint8_t _g4_t_dest[180];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (68u + sizeof(_g4_t_v6)) > _g4_s1 ? (68u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_dest)) > _g4_s2 ? (72u + sizeof(_g4_t_dest)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 68u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 72u);

  result = false;
  if ( n <= 0x20 )
  {
    v5[0] = *a1;
    v6 = n;
    memcpy(dest, src, n);
    if ( n <= 0xF && v5[0] == 2 )
    {
      memset(&dest[n], 0, 16 - n);
      v6 = 16;
    }
    CRYPTO_lock(5, 12, &unk_1B15112, 0);
    v4 = (int)(uintptr_t)(lh_retrieve(*(uint32_t *)(a1[57] + 16), v5));
    CRYPTO_lock(6, 12, &unk_1B15112, 0);
    return v4 != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_purpose  (binary VA: 0x12f9730)
// Original: SSL_CTX_set_purpose
// ----------------------------------------------------------------------------
int SSL_CTX_set_purpose(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_purpose(*(uint32_t *)(a1 + 240), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_purpose  (binary VA: 0x12f9760)
// Original: SSL_set_purpose
// ----------------------------------------------------------------------------
int SSL_set_purpose(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_purpose(*(uint32_t *)(a1 + 112), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_trust  (binary VA: 0x12f9790)
// Original: SSL_CTX_set_trust
// ----------------------------------------------------------------------------
int SSL_CTX_set_trust(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_trust(*(uint32_t *)(a1 + 240), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_trust  (binary VA: 0x12f97c0)
// Original: SSL_set_trust
// ----------------------------------------------------------------------------
int SSL_set_trust(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_trust(*(uint32_t *)(a1 + 112), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set1_param  (binary VA: 0x12f97f0)
// Original: SSL_CTX_set1_param
// ----------------------------------------------------------------------------
int SSL_CTX_set1_param(int a1, int a2)
{
  return X509_VERIFY_PARAM_set1(*(uint32_t *)(a1 + 240), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set1_param  (binary VA: 0x12f9820)
// Original: SSL_set1_param
// ----------------------------------------------------------------------------
int SSL_set1_param(int a1, int a2)
{
  return X509_VERIFY_PARAM_set1(*(uint32_t *)(a1 + 112), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_bio  (binary VA: 0x12f9850)
// Original: SSL_set_bio
// ----------------------------------------------------------------------------
int SSL_set_bio(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;

  v3 = *(uint32_t *)(a1 + 20);
  if ( v3 != 0 && v3 == *(uint32_t *)(a1 + 16) )
  {
    *(uint32_t *)(a1 + 16) = *(uint32_t *)(v3 + 36);
    *(uint32_t *)(v3 + 36) = 0;
  }
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 != 0 && v4 != a2 )
    BIO_free_all(*(void **)(a1 + 12));
  result = *(uint32_t *)(a1 + 16);
  if ( result != 0 && result != a3 && result != *(uint32_t *)(a1 + 12) )
    result = (int)(uintptr_t)(BIO_free_all(*(void **)(a1 + 16)));
  *(uint32_t *)(a1 + 12) = a2;
  *(uint32_t *)(a1 + 16) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_rbio  (binary VA: 0x12f98e0)
// Original: SSL_get_rbio
// ----------------------------------------------------------------------------
int SSL_get_rbio(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_wbio  (binary VA: 0x12f98f0)
// Original: SSL_get_wbio
// ----------------------------------------------------------------------------
int SSL_get_wbio(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_rfd  (binary VA: 0x12f9900)
// Original: SSL_get_rfd
// ----------------------------------------------------------------------------
int SSL_get_rfd(int a1)
{
  int rbio;
  int type;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);

  v4 = -1;
  rbio = SSL_get_rbio(a1);
  type = (int)(uintptr_t)(BIO_find_type(rbio, 256));
  if ( type != 0 )
    BIO_ctrl(type, 105, 0, &v4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_fd  (binary VA: 0x12f9970)
// Original: SSL_get_fd
// ----------------------------------------------------------------------------
int SSL_get_fd(int a1)
{
  return SSL_get_rfd(a1);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_wfd  (binary VA: 0x12f99a0)
// Original: SSL_get_wfd
// ----------------------------------------------------------------------------
int SSL_get_wfd(int a1)
{
  int wbio;
  int type;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);

  v4 = -1;
  wbio = SSL_get_wbio(a1);
  type = (int)(uintptr_t)(BIO_find_type(wbio, 256));
  if ( type != 0 )
    BIO_ctrl(type, 105, 0, &v4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_fd  (binary VA: 0x12f9a10)
// Original: SSL_set_fd
// ----------------------------------------------------------------------------
int SSL_set_fd(int a1, int a2)
{
  int v2;
  int v3;

  v2 = (int)(uintptr_t)(BIO_s_socket());
  v3 = (int)(uintptr_t)(BIO_new(v2));
  if ( v3 != 0 )
  {
    BIO_int_ctrl(v3, 104, 0, a2);
    SSL_set_bio(a1, v3, v3);
    return 1;
  }
  else
  {
    ERR_put_error(20, 192, 7, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_set_wfd  (binary VA: 0x12f9ab0)
// Original: SSL_set_wfd
// ----------------------------------------------------------------------------
int SSL_set_wfd(int a1, int a2)
{
  int v2;
  int v3;
  int rbio;
  int v5;

  if ( *(uint32_t *)(a1 + 12) != 0
    && BIO_method_type(*(uint32_t *)(a1 + 12)) == 1285
    && BIO_ctrl(*(uint32_t *)(a1 + 12), 105, 0, 0) == a2 )
  {
    rbio = SSL_get_rbio(a1);
  }
  else
  {
    v2 = (int)(uintptr_t)(BIO_s_socket());
    v3 = (int)(uintptr_t)(BIO_new(v2));
    rbio = v3;
    if ( v3 == 0 )
    {
      ERR_put_error(20, 196, 7, &unk_1B15112, 0);
      return 0;
    }
    BIO_int_ctrl(v3, 104, 0, a2);
  }
  v5 = SSL_get_rbio(a1);
  SSL_set_bio(a1, v5, rbio);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_rfd  (binary VA: 0x12f9bd0)
// Original: SSL_set_rfd
// ----------------------------------------------------------------------------
int SSL_set_rfd(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int wbio;
  int v8;

  if ( *(uint32_t *)(a1 + 16) != 0
    && BIO_method_type(*(uint32_t *)(a1 + 16)) == 1285
    && BIO_ctrl(*(uint32_t *)(a1 + 16), 105, 0, 0) == a2 )
  {
    wbio = SSL_get_wbio(a1);
    v8 = SSL_get_wbio(a1);
    SSL_set_bio(a1, v8, wbio);
    return 1;
  }
  else
  {
    v2 = (int)(uintptr_t)(BIO_s_socket());
    v3 = (int)(uintptr_t)(BIO_new(v2));
    v4 = v3;
    if ( v3 != 0 )
    {
      BIO_int_ctrl(v3, 104, 0, a2);
      v5 = SSL_get_wbio(a1);
      SSL_set_bio(a1, v4, v5);
      return 1;
    }
    else
    {
      ERR_put_error(20, 194, 7, &unk_1B15112, 0);
      return 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_get_finished  (binary VA: 0x12f9d10)
// Original: SSL_get_finished
// ----------------------------------------------------------------------------
unsigned int SSL_get_finished(int a1, void *dest, unsigned int a3)
{
  unsigned int v3;
  int v4;
  size_t n;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 88);
  n = a3;
  if ( v4 != 0 )
  {
    v3 = *(uint32_t *)(v4 + 692);
    if ( a3 > v3 )
      n = *(uint32_t *)(v4 + 692);
    memcpy(dest, (const void *)(v4 + 564), n);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_peer_finished  (binary VA: 0x12f9d70)
// Original: SSL_get_peer_finished
// ----------------------------------------------------------------------------
unsigned int SSL_get_peer_finished(int a1, void *dest, unsigned int a3)
{
  unsigned int v3;
  int v4;
  size_t n;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 88);
  n = a3;
  if ( v4 != 0 )
  {
    v3 = *(uint32_t *)(v4 + 824);
    if ( a3 > v3 )
      n = *(uint32_t *)(v4 + 824);
    memcpy(dest, (const void *)(v4 + 696), n);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_verify_mode  (binary VA: 0x12f9dd0)
// Original: SSL_get_verify_mode
// ----------------------------------------------------------------------------
int SSL_get_verify_mode(int a1)
{
  return *(uint32_t *)(a1 + 200);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_verify_depth  (binary VA: 0x12f9de0)
// Original: SSL_get_verify_depth
// ----------------------------------------------------------------------------
int SSL_get_verify_depth(int a1)
{
  return X509_VERIFY_PARAM_get_depth(*(uint32_t *)(a1 + 112));
}

// ----------------------------------------------------------------------------
// Function: SSL_get_verify_callback  (binary VA: 0x12f9e10)
// Original: SSL_get_verify_callback
// ----------------------------------------------------------------------------
int SSL_get_verify_callback(int a1)
{
  return *(uint32_t *)(a1 + 204);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_verify_mode  (binary VA: 0x12f9e20)
// Original: SSL_CTX_get_verify_mode
// ----------------------------------------------------------------------------
int SSL_CTX_get_verify_mode(int a1)
{
  return *(uint32_t *)(a1 + 192);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_verify_depth  (binary VA: 0x12f9e30)
// Original: SSL_CTX_get_verify_depth
// ----------------------------------------------------------------------------
int SSL_CTX_get_verify_depth(int a1)
{
  return X509_VERIFY_PARAM_get_depth(*(uint32_t *)(a1 + 240));
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_verify_callback  (binary VA: 0x12f9e60)
// Original: SSL_CTX_get_verify_callback
// ----------------------------------------------------------------------------
int SSL_CTX_get_verify_callback(int a1)
{
  return *(uint32_t *)(a1 + 232);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_verify  (binary VA: 0x12f9e70)
// Original: SSL_set_verify
// ----------------------------------------------------------------------------
int SSL_set_verify(int a1, int a2, int a3)
{
  int result;

  result = a1;
  *(uint32_t *)(a1 + 200) = a2;
  if ( a3 != 0 )
    *(uint32_t *)(a1 + 204) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_verify_depth  (binary VA: 0x12f9e90)
// Original: SSL_set_verify_depth
// ----------------------------------------------------------------------------
int SSL_set_verify_depth(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_depth(*(uint32_t *)(a1 + 112), a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_read_ahead  (binary VA: 0x12f9ec0)
// Original: SSL_set_read_ahead
// ----------------------------------------------------------------------------
int SSL_set_read_ahead(int a1, int a2)
{
  *(uint32_t *)(a1 + 96) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_read_ahead  (binary VA: 0x12f9ed0)
// Original: SSL_get_read_ahead
// ----------------------------------------------------------------------------
int SSL_get_read_ahead(int a1)
{
  return *(uint32_t *)(a1 + 96);
}

// ----------------------------------------------------------------------------
// Function: SSL_pending  (binary VA: 0x12f9ee0)
// Original: SSL_pending
// ----------------------------------------------------------------------------
int SSL_pending(int a1)
{
  return (*(int (**)(int))(*(uint32_t *)(a1 + 8) + 80))(a1);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_peer_certificate  (binary VA: 0x12f9f00)
// Original: SSL_get_peer_certificate
// ----------------------------------------------------------------------------
int SSL_get_peer_certificate(int a1)
{
  int v1;
  int v2;

  if ( a1 == 0 )
    return 0;
  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 == 0 )
    return 0;
  v2 = *(uint32_t *)(v1 + 156);
  if ( v2 != 0 )
    CRYPTO_add_lock(v2 + 16, 1, 3, &unk_1B15112, 0);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_peer_cert_chain  (binary VA: 0x12f9f80)
// Original: SSL_get_peer_cert_chain
// ----------------------------------------------------------------------------
int SSL_get_peer_cert_chain(int a1)
{
  int v1;
  int v2;

  if ( a1 == 0 )
    return 0;
  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 == 0 )
    return 0;
  v2 = *(uint32_t *)(v1 + 152);
  if ( v2 != 0 )
    return *(uint32_t *)v2;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_copy_session_id  (binary VA: 0x12f9fc0)
// Original: SSL_copy_session_id
// ----------------------------------------------------------------------------
int SSL_copy_session_id(int a1, uint32_t *a2)
{
  int session;
  int v3;
  int v4;
  int v5;
  void **v6;

  session = SSL_get_session(a2);
  SSL_set_session(a1, session);
  v3 = *(uint32_t *)(a1 + 8);
  if ( v3 != a2[2] )
  {
    (*(void (**)(int))(v3 + 12))(a1);
    v4 = a2[2];
    *(uint32_t *)(a1 + 8) = v4;
    (*(void (**)(int))(v4 + 4))(a1);
  }
  v5 = a2[38];
  v6 = *(void ***)(a1 + 152);
  if ( v5 != 0 )
  {
    CRYPTO_add_lock(v5 + 112, 1, 13, &unk_1B15112, 0);
    *(uint32_t *)(a1 + 152) = a2[38];
  }
  else
  {
    *(uint32_t *)(a1 + 152) = 0;
  }
  if ( v6 != nullptr )
    ssl_cert_free(v6);
  return SSL_set_session_id_context(a1, a2 + 40, a2[39]);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_check_private_key  (binary VA: 0x12fa0b0)
// Original: SSL_CTX_check_private_key
// ----------------------------------------------------------------------------
int SSL_CTX_check_private_key(int a1)
{
  int **v1;
  int *v2;
  int v3;
  int v4;

  if ( a1 != 0 && (v1 = *(int ***)(a1 + 176)) != nullptr && (v2 = *v1, v3 = *v2, *v2 != 0) )
  {
    v4 = v2[1];
    if ( v4 != 0 )
    {
      return X509_check_private_key(v3, v4);
    }
    else
    {
      ERR_put_error(20, 168, 190, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(20, 168, 177, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_check_private_key  (binary VA: 0x12fa170)
// Original: SSL_check_private_key
// ----------------------------------------------------------------------------
int SSL_check_private_key(int a1)
{
  int **v1;
  int *v2;
  int v3;
  int v4;

  if ( a1 != 0 )
  {
    v1 = *(int ***)(a1 + 152);
    if ( v1 != nullptr && (v2 = *v1, v3 = *v2, *v2 != 0) )
    {
      v4 = v2[1];
      if ( v4 != 0 )
      {
        return X509_check_private_key(v3, v4);
      }
      else
      {
        ERR_put_error(20, 163, 190, &unk_1B15112, 0);
        return 0;
      }
    }
    else
    {
      ERR_put_error(20, 163, 177, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(20, 163, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_get_default_timeout  (binary VA: 0x12fa260)
// Original: SSL_get_default_timeout
// ----------------------------------------------------------------------------
int SSL_get_default_timeout(int a1)
{
  return (*(int (**)(void))(*(uint32_t *)(a1 + 8) + 96))();
}

// ----------------------------------------------------------------------------
// Function: SSL_read  (binary VA: 0x12fa280)
// Original: SSL_read
// ----------------------------------------------------------------------------
int SSL_read(int a1, int a2, int a3)
{
  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    if ( (*(uint8_t *)(a1 + 48) & 2) != 0 )
    {
      *(uint32_t *)(a1 + 24) = 1;
      return 0;
    }
    else
    {
      return (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 8) + 24))(a1, a2, a3);
    }
  }
  else
  {
    ERR_put_error(20, 223, 276, &unk_1B15112, 0);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_peek  (binary VA: 0x12fa310)
// Original: SSL_peek
// ----------------------------------------------------------------------------
int SSL_peek(int a1, int a2, int a3)
{
  int result;

  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    result = 0;
    if ( (*(uint8_t *)(a1 + 48) & 2) == 0 )
      return (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 8) + 28))(a1, a2, a3);
  }
  else
  {
    ERR_put_error(20, 270, 276, &unk_1B15112, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_write  (binary VA: 0x12fa390)
// Original: SSL_write
// ----------------------------------------------------------------------------
int SSL_write(int a1, int a2, int a3)
{
  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    if ( (*(uint8_t *)(a1 + 48) & 1) != 0 )
    {
      *(uint32_t *)(a1 + 24) = 1;
      ERR_put_error(20, 208, 207, &unk_1B15112, 0);
      return -1;
    }
    else
    {
      return (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 8) + 32))(a1, a2, a3);
    }
  }
  else
  {
    ERR_put_error(20, 208, 276, &unk_1B15112, 0);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_renegotiate  (binary VA: 0x12fa450)
// Original: SSL_renegotiate
// ----------------------------------------------------------------------------
int SSL_renegotiate(int a1)
{
  if ( *(uint32_t *)(a1 + 40) == 0 )
    *(uint32_t *)(a1 + 40) = 1;
  return (*(int (**)(int))(*(uint32_t *)(a1 + 8) + 40))(a1);
}

// ----------------------------------------------------------------------------
// Function: SSL_renegotiate_pending  (binary VA: 0x12fa480)
// Original: SSL_renegotiate_pending
// ----------------------------------------------------------------------------
bool SSL_renegotiate_pending(int a1)
{
  return *(uint32_t *)(a1 + 40) != 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_callback_ctrl  (binary VA: 0x12fa490)
// Original: SSL_callback_ctrl
// ----------------------------------------------------------------------------
char SSL_callback_ctrl(int a1, int a2, int a3)
{
  if ( a2 != 15 )
    return (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 8) + 108))(a1, a2, a3);
  *(uint32_t *)(a1 + 100) = a3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sessions  (binary VA: 0x12fa4d0)
// Original: SSL_CTX_sessions
// ----------------------------------------------------------------------------
int SSL_CTX_sessions(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_ctrl  (binary VA: 0x12fa4e0)
// Original: SSL_CTX_ctrl
// ----------------------------------------------------------------------------
char SSL_CTX_ctrl(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;

  switch ( a2 )
  {
    case 16:
      a1[47] = a4;
      LOBYTE(v4) = 1;
      break;
    case 20:
      LOBYTE(v4) = lh_num_items(a1[4]);
      break;
    case 21:
      v4 = a1[13];
      break;
    case 22:
      v4 = a1[15];
      break;
    case 23:
      v4 = a1[14];
      break;
    case 24:
      v4 = a1[16];
      break;
    case 25:
      v4 = a1[18];
      break;
    case 26:
      v4 = a1[17];
      break;
    case 27:
      v4 = a1[22];
      break;
    case 28:
      v4 = a1[23];
      break;
    case 29:
      v4 = a1[19];
      break;
    case 30:
      v4 = a1[20];
      break;
    case 31:
      v4 = a1[21];
      break;
    case 32:
      v4 = a3 | a1[41];
      a1[41] = v4;
      break;
    case 33:
      v4 = a3 | a1[42];
      a1[42] = v4;
      break;
    case 40:
      v4 = a1[45];
      break;
    case 41:
      v4 = a1[45];
      a1[45] = a3;
      break;
    case 42:
      v4 = a1[5];
      a1[5] = a3;
      break;
    case 43:
      v4 = a1[5];
      break;
    case 44:
      v4 = a1[8];
      a1[8] = a3;
      break;
    case 45:
      v4 = a1[8];
      break;
    case 50:
      v4 = a1[43];
      break;
    case 51:
      v4 = a1[43];
      a1[43] = a3;
      break;
    case 52:
      LOBYTE(v4) = 0;
      if ( (unsigned int)(a3 - 512) <= 0x3E00 )
      {
        a1[62] = a3;
        LOBYTE(v4) = 1;
      }
      break;
    case 77:
      v4 = a1[41] & ~a3;
      a1[41] = v4;
      break;
    case 78:
      v4 = a1[42] & ~a3;
      a1[42] = v4;
      break;
    default:
      LOBYTE(v4) = G4_VCALL<int>(a1, 68, a2, a3, a4);
      break;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_callback_ctrl  (binary VA: 0x12fa6d0)
// Original: SSL_CTX_callback_ctrl
// ----------------------------------------------------------------------------
char SSL_CTX_callback_ctrl(uint32_t *a1, int a2, int a3)
{
  if ( a2 != 15 )
    return G4_VCALL<int>(a1, 112, a2, a3);
  a1[46] = a3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl_cipher_id_cmp  (binary VA: 0x12fa710)
// Original: ssl_cipher_id_cmp
// ----------------------------------------------------------------------------
int ssl_cipher_id_cmp(int a1, int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 8) != *(uint32_t *)(a2 + 8) )
    return 2 * (*(uint32_t *)(a1 + 8) - *(uint32_t *)(a2 + 8) > 0) - 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_cipher_ptr_id_cmp  (binary VA: 0x12fa760)
// Original: ssl_cipher_ptr_id_cmp
// ----------------------------------------------------------------------------
int ssl_cipher_ptr_id_cmp(int a1, int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 8) != *(uint32_t *)(*(uint32_t *)a2 + 8) )
    return 2 * (*(uint32_t *)(*(uint32_t *)a1 + 8) - *(uint32_t *)(*(uint32_t *)a2 + 8) > 0) - 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_ciphers  (binary VA: 0x12fa790)
// Original: SSL_get_ciphers
// ----------------------------------------------------------------------------
int SSL_get_ciphers(int a1)
{
  int result;
  int v2;

  if ( a1 == 0 )
    return 0;
  result = *(uint32_t *)(a1 + 116);
  if ( result == 0 )
  {
    v2 = *(uint32_t *)(a1 + 228);
    if ( v2 != 0 )
      return *(uint32_t *)(v2 + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_get_ciphers_by_id  (binary VA: 0x12fa7c0)
// Original: ssl_get_ciphers_by_id
// ----------------------------------------------------------------------------
int ssl_get_ciphers_by_id(int a1)
{
  int result;
  int v2;

  if ( a1 == 0 )
    return 0;
  result = *(uint32_t *)(a1 + 120);
  if ( result == 0 )
  {
    v2 = *(uint32_t *)(a1 + 228);
    if ( v2 != 0 )
      return *(uint32_t *)(v2 + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_cipher_list  (binary VA: 0x12fa7f0)
// Original: SSL_get_cipher_list
// ----------------------------------------------------------------------------
int SSL_get_cipher_list(int a1, int a2)
{
  int v2;
  int ciphers;
  int v4;
  int v5;

  v2 = 0;
  if ( a1 != 0 )
  {
    ciphers = SSL_get_ciphers(a1);
    v4 = ciphers;
    if ( ciphers != 0 && sk_num(ciphers) > a2 )
    {
      v5 = sk_value(v4, a2);
      if ( v5 != 0 )
        return *(uint32_t *)(v5 + 4);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_cipher_list  (binary VA: 0x12fa870)
// Original: SSL_CTX_set_cipher_list
// ----------------------------------------------------------------------------
int SSL_CTX_set_cipher_list(int a1, char *a2)
{
  int cipher_list;
  int v3;
  int v4;

  cipher_list = ssl_create_cipher_list(*(uint32_t *)a1, (void **)(a1 + 4), (void **)(a1 + 8), a2);
  v3 = 0;
  if ( cipher_list == 0 )
    return v3;
  v4 = sk_num(cipher_list);
  v3 = 1;
  if ( v4 != 0 )
    return v3;
  ERR_put_error(20, 269, 185, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_cipher_list  (binary VA: 0x12fa900)
// Original: SSL_set_cipher_list
// ----------------------------------------------------------------------------
int SSL_set_cipher_list(int a1, char *a2)
{
  int cipher_list;
  int v3;
  int v4;

  cipher_list = ssl_create_cipher_list(**(uint32_t **)(a1 + 228), (void **)(a1 + 116), (void **)(a1 + 120), a2);
  v3 = 0;
  if ( cipher_list == 0 )
    return v3;
  v4 = sk_num(cipher_list);
  v3 = 1;
  if ( v4 != 0 )
    return v3;
  ERR_put_error(20, 271, 185, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_shared_ciphers  (binary VA: 0x12fa9a0)
// Original: SSL_get_shared_ciphers
// ----------------------------------------------------------------------------
char * SSL_get_shared_ciphers(int a1, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  const char *s;
  signed int v7;
  char *dest;
  int v10;

  v3 = *(uint32_t *)(a1 + 192);
  if ( v3 == 0 )
    return nullptr;
  v4 = *(uint32_t *)(v3 + 188);
  v10 = v4;
  if ( a3 <= 1 || v4 == 0 )
    return nullptr;
  v5 = 0;
  dest = a2;
  while ( 1 )
  {
    if ( v5 >= sk_num(v10) )
    {
      *(dest - 1) = 0;
      return a2;
    }
    s = *(const char **)(sk_value(v10, v5) + 4);
    v7 = strlen(s);
    if ( a3 <= v7 )
      break;
    ++v5;
    strcpy(dest, s);
    dest[v7] = 58;
    dest += v7 + 1;
    a3 += ~v7;
  }
  dest[-(a2 != dest)] = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: ssl_cipher_list_to_bytes  (binary VA: 0x12faaa0)
// Original: ssl_cipher_list_to_bytes
// ----------------------------------------------------------------------------
int ssl_cipher_list_to_bytes(uint32_t *a1, int a2, int a3, int (*a4)(void *, int))
{
  int result;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;

  result = 0;
  if ( a2 != 0 )
  {
    v5 = 0;
    v6 = a3;
    if ( a4 != nullptr )
    {
      while ( v5 < sk_num(a2) )
      {
        v7 = (uint8_t *)sk_value(a2, v5);
        if ( (v7[13] & 1) == 0 && (char)v7[16] >= 0 || a1[55] != 0 )
          v6 += a4(v7, v6);
        ++v5;
      }
    }
    else
    {
      v9 = a3;
      while ( v5 < sk_num(a2) )
      {
        v8 = sk_value(a2, v5);
        if ( (*(uint8_t *)(v8 + 13) & 1) == 0 && *(char *)(v8 + 16) >= 0 || a1[55] != 0 )
          v9 += (*(int (**)(int, int))(a1[2] + 76))(v8, v9);
        ++v5;
      }
      v6 = v9;
    }
    if ( a3 == v6 )
    {
      v6 = a3;
    }
    else if ( a1[10] == 0 )
    {
      if ( a4 != nullptr )
        v6 += a4(&unk_20C5880, v6);
      else
        v6 += (*(int (**)(void *, int))(a1[2] + 76))(&unk_20C5880, v6);
    }
    return v6 - a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_bytes_to_cipher_list  (binary VA: 0x12fabe0)
// Original: ssl_bytes_to_cipher_list
// ----------------------------------------------------------------------------
void * ssl_bytes_to_cipher_list(uint32_t *a1, uint8_t *a2, int a3, uint32_t *a4)
{
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v11;
  uint8_t *v12;
  uint8_t *v13;
  int i;
  int v15;
  int v16;
  void *v17;

  v4 = a1[22];
  if ( v4 != 0 )
    *(uint32_t *)(v4 + 1048) = 0;
  v5 = (*(int (**)(uint32_t, uint32_t))(a1[2] + 76))(0, 0);
  if ( a3 % v5 != 0 )
  {
    ERR_put_error(20, 161, 151, &unk_1B15112, 0);
    return nullptr;
  }
  if ( a4 != nullptr && (v17 = (void *)*a4, *a4 != 0) )
    sk_zero(*a4);
  else
    v17 = (void *)sk_new_null();
  if ( a3 <= 0 )
  {
LABEL_18:
    if ( a4 != nullptr )
      *a4 = (uint32_t)(uintptr_t)(v17);
    return v17;
  }
  v6 = &a2[v5];
  if ( v5 != 3 )
  {
    v7 = v5;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = a1[22];
        if ( v9 != 0 && *(v6 - 2) == 0 && *(v6 - 1) == 0xFF )
          break;
        v8 = (*(int (**)(uint8_t *))(a1[2] + 72))(&v6[-v5]);
        if ( v8 != 0 && sk_push(v17, v8) == 0 )
          goto LABEL_38;
        v7 += v5;
        v6 += v5;
        if ( a3 <= v7 - v5 )
          goto LABEL_18;
      }
      if ( a1[10] != 0 )
        break;
      v7 += v5;
      *(uint32_t *)(v9 + 1048) = 1;
      v6 += v5;
      if ( a3 <= v7 - v5 )
        goto LABEL_18;
    }
    v11 = a1;
    goto LABEL_23;
  }
  v12 = a2 + 3;
  v13 = a2;
  for ( i = 3; ; i += 3 )
  {
    v16 = a1[22];
    if ( v16 != 0 && *v13 == 0 && *(v12 - 2) == 0 && *(v12 - 1) == 0xFF )
      break;
    v15 = (*(int (**)(uint8_t *))(a1[2] + 72))(v13);
    if ( v15 != 0 && sk_push(v17, v15) == 0 )
    {
LABEL_38:
      ERR_put_error(20, 161, 65, &unk_1B15112, 0);
      goto LABEL_24;
    }
LABEL_30:
    v12 += 3;
    v13 += 3;
    if ( a3 <= i )
      goto LABEL_18;
  }
  if ( a1[10] == 0 )
  {
    *(uint32_t *)(v16 + 1048) = 1;
    goto LABEL_30;
  }
  v11 = a1;
LABEL_23:
  ERR_put_error(20, 161, 345, &unk_1B15112, 0);
  ssl3_send_alert(v11, 2, 40);
LABEL_24:
  if ( a4 == nullptr || *a4 == 0 )
  {
    sk_free(v17);
    return nullptr;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_servername  (binary VA: 0x12faec0)
// Original: SSL_get_servername
// ----------------------------------------------------------------------------
int SSL_get_servername(int a1, int a2)
{
  int result;
  int v3;

  result = 0;
  if ( a2 == 0 )
  {
    v3 = *(uint32_t *)(a1 + 192);
    result = *(uint32_t *)(a1 + 288);
    if ( v3 != 0 && result == 0 )
      return *(uint32_t *)(v3 + 208);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_servername_type  (binary VA: 0x12faf00)
// Original: SSL_get_servername_type
// ----------------------------------------------------------------------------
int SSL_get_servername_type(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 == 0 )
    return -1;
  result = 0;
  if ( *(uint32_t *)(a1 + 288) == 0 )
    return -(*(uint32_t *)(v1 + 208) == 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_free  (binary VA: 0x12faf30)
// Original: SSL_CTX_free
// ----------------------------------------------------------------------------
void SSL_CTX_free(char *a1)
{
  void *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;

  if ( a1 != nullptr && (int)CRYPTO_add_lock(a1 + 96, -1, 12, &unk_1B15112, 0) <= 0 )
  {
    if ( *((uint32_t *)a1 + 60) != 0 )
      X509_VERIFY_PARAM_free(*((void **)a1 + 60));
    if ( *((uint32_t *)a1 + 4) != 0 )
      SSL_CTX_flush_sessions(a1, 0);
    CRYPTO_free_ex_data(2, a1, a1 + 128);
    if ( *((uint32_t *)a1 + 4) != 0 )
      lh_free(*((void **)a1 + 4));
    if ( *((uint32_t *)a1 + 3) != 0 )
      X509_STORE_free(*((void **)a1 + 3));
    if ( *((uint32_t *)a1 + 1) != 0 )
      sk_free(*((void **)a1 + 1));
    if ( *((uint32_t *)a1 + 2) != 0 )
      sk_free(*((void **)a1 + 2));
    if ( *((uint32_t *)a1 + 44) != 0 )
      ssl_cert_free(*((void ***)a1 + 44));
    if ( *((uint32_t *)a1 + 40) != 0 )
      sk_pop_free(*((void **)a1 + 40), (int)(uintptr_t)(X509_NAME_free));
    if ( *((uint32_t *)a1 + 37) != 0 )
      sk_pop_free(*((void **)a1 + 37), (int)(uintptr_t)((int (*)(char))X509_free));
    v1 = *((void **)a1 + 83);
    *((uint32_t *)a1 + 38) = 0;
    if ( v1 != nullptr )
      CRYPTO_free(v1);
    v2 = *((uint32_t **)a1 + 87);
    if ( v2 != nullptr )
    {
      v3 = (uint32_t *)v2[2];
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)*v3;
          CRYPTO_free(v3);
          if ( v4 == nullptr )
            break;
          v3 = v4;
        }
      }
      CRYPTO_free(v2);
    }
    v5 = *((uint32_t **)a1 + 88);
    if ( v5 != nullptr )
    {
      v6 = (uint32_t *)v5[2];
      if ( v6 != nullptr )
      {
        while ( 1 )
        {
          v7 = (uint32_t *)*v6;
          CRYPTO_free(v6);
          if ( v7 == nullptr )
            break;
          v6 = v7;
        }
      }
      CRYPTO_free(v5);
    }
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_new  (binary VA: 0x12fb0e0)
// Original: SSL_CTX_new
// ----------------------------------------------------------------------------
int SSL_CTX_new(int a1)
{
  int v1;
  int v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
  uint16_t *v6;
  unsigned int v7;
  uint16_t *v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int digestbyname;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  char *v21;

  if ( a1 == 0 )
  {
    v2 = 0;
    ERR_put_error(20, 169, 196, &unk_1B15112, 0);
    return v2;
  }
  if ( SSL_get_ex_data_X509_STORE_CTX_idx() < 0 )
  {
    v2 = 0;
    ERR_put_error(20, 169, 269, &unk_1B15112, 0);
    goto LABEL_35;
  }
  v1 = (int)(uintptr_t)(CRYPTO_malloc(0x164u, (int)(uintptr_t)(&unk_1B15112), 0));
  v2 = v1;
  if ( v1 == 0 )
    goto LABEL_35;
  v3 = (uint16_t *)v1;
  v4 = 356;
  if ( (v1 & 1) != 0 )
  {
    *(uint8_t *)v1 = 0;
    v3 = (uint16_t *)(v1 + 1);
    LOBYTE(v4) = 99;
  }
  if ( ((uint8_t)(uintptr_t)(v3) & 2) != 0 )
  {
    *v3 = 0;
    v4 -= 2;
    ++v3;
  }
  memset(v3, 0, 4 * (v4 >> 2));
  v5 = &v3[2 * (v4 >> 2)];
  if ( (v4 & 2) == 0 )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_10;
    goto LABEL_41;
  }
  *v5++ = 0;
  if ( (v4 & 1) != 0 )
LABEL_41:
    *(uint8_t *)v5 = 0;
LABEL_10:
  v6 = (uint16_t *)(v1 + 52);
  *(uint32_t *)v1 = a1;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint32_t *)(v1 + 32) = 2;
  *(uint32_t *)(v1 + 20) = 20480;
  *(uint32_t *)(v1 + 24) = 0;
  *(uint32_t *)(v1 + 28) = 0;
  *(uint32_t *)(v1 + 36) = (*(int (**)(void))(a1 + 96))();
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)(v2 + 44) = 0;
  *(uint32_t *)(v2 + 48) = 0;
  *(uint32_t *)(v2 + 236) = 0;
  v7 = 44;
  if ( ((v2 + 52) & 1) != 0 )
  {
    *(uint8_t *)(v2 + 52) = 0;
    v6 = (uint16_t *)(v2 + 53);
    LOBYTE(v7) = 43;
  }
  if ( ((uint8_t)(uintptr_t)(v6) & 2) != 0 )
  {
    *v6 = 0;
    v7 -= 2;
    ++v6;
  }
  memset(v6, 0, 4 * (v7 >> 2));
  v8 = &v6[2 * (v7 >> 2)];
  if ( (v7 & 2) == 0 )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_16;
    goto LABEL_38;
  }
  *v8++ = 0;
  if ( (v7 & 1) != 0 )
LABEL_38:
    *(uint8_t *)v8 = 0;
LABEL_16:
  *(uint32_t *)(v2 + 96) = 1;
  *(uint32_t *)(v2 + 244) = 0;
  *(uint32_t *)(v2 + 156) = 0;
  *(uint32_t *)(v2 + 100) = 0;
  *(uint32_t *)(v2 + 104) = 0;
  *(uint32_t *)(v2 + 172) = 102400;
  *(uint32_t *)(v2 + 180) = 0;
  *(uint32_t *)(v2 + 184) = 0;
  *(uint32_t *)(v2 + 188) = 0;
  *(uint32_t *)(v2 + 192) = 0;
  *(uint32_t *)(v2 + 196) = 0;
  *(uint32_t *)(v2 + 232) = 0;
  v9 = ssl_cert_new();
  *(uint32_t *)(v2 + 176) = v9;
  if ( v9 == 0 )
    goto LABEL_35;
  *(uint32_t *)(v2 + 108) = 0;
  *(uint32_t *)(v2 + 112) = 0;
  *(uint32_t *)(v2 + 116) = 0;
  *(uint32_t *)(v2 + 120) = 0;
  *(uint32_t *)(v2 + 124) = 0;
  v10 = (int)(uintptr_t)(lh_new(sub_12F9250, sub_12F92D0));
  *(uint32_t *)(v2 + 16) = v10;
  if ( v10 == 0 )
    goto LABEL_35;
  v11 = (int)(uintptr_t)(X509_STORE_new());
  *(uint32_t *)(v2 + 12) = v11;
  if ( v11 == 0 )
    goto LABEL_35;
  v12 = "SSLv2";
  if ( *(uint32_t *)a1 != 2 )
    v12 = "ALL:!aNULL:!eNULL:!SSLv2";
  ssl_create_cipher_list(*(uint32_t *)v2, (void **)(v2 + 4), (void **)(v2 + 8), v12);
  if ( *(uint32_t *)(v2 + 4) == 0 || (int)sk_num(*(uint32_t *)(v2 + 4)) <= 0 )
  {
    ERR_put_error(20, 169, 161, &unk_1B15112, 0);
    goto LABEL_36;
  }
  v13 = (int)(uintptr_t)(X509_VERIFY_PARAM_new());
  *(uint32_t *)(v2 + 240) = v13;
  if ( v13 == 0 )
    goto LABEL_35;
  digestbyname = EVP_get_digestbyname("ssl2-md5");
  *(uint32_t *)(v2 + 136) = digestbyname;
  if ( digestbyname == 0 )
  {
    ERR_put_error(20, 169, 241, &unk_1B15112, 0);
    goto LABEL_36;
  }
  v15 = EVP_get_digestbyname("ssl3-md5");
  *(uint32_t *)(v2 + 140) = v15;
  if ( v15 == 0 )
  {
    ERR_put_error(20, 169, 242, &unk_1B15112, 0);
    goto LABEL_36;
  }
  v16 = EVP_get_digestbyname("ssl3-sha1");
  *(uint32_t *)(v2 + 144) = v16;
  if ( v16 == 0 )
  {
    ERR_put_error(20, 169, 243, &unk_1B15112, 0);
    goto LABEL_36;
  }
  v17 = (int)(uintptr_t)(sk_new_null());
  *(uint32_t *)(v2 + 160) = v17;
  if ( v17 == 0 )
    goto LABEL_35;
  CRYPTO_new_ex_data(2, v2, v2 + 128);
  *(uint32_t *)(v2 + 148) = 0;
  *(uint32_t *)(v2 + 152) = SSL_COMP_get_compression_methods();
  *(uint32_t *)(v2 + 248) = 0x4000;
  *(uint32_t *)(v2 + 256) = 0;
  *(uint32_t *)(v2 + 260) = 0;
  if ( (int)RAND_pseudo_bytes(v2 + 264, 16) <= 0
    || (int)RAND_bytes(v2 + 280, 16) <= 0
    || (int)RAND_bytes(v2 + 296, 16) <= 0 )
  {
    *(uint32_t *)(v2 + 164) |= 0x4000u;
  }
  *(uint32_t *)(v2 + 316) = 0;
  *(uint32_t *)(v2 + 320) = 0;
  *(uint32_t *)(v2 + 332) = 0;
  *(uint32_t *)(v2 + 336) = 0;
  *(uint32_t *)(v2 + 340) = 0;
  *(uint32_t *)(v2 + 344) = 32;
  v18 = (uint32_t *)CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)(v2 + 352) = (uint32_t)(uintptr_t)(v18);
  if ( v18 == nullptr )
  {
LABEL_35:
    ERR_put_error(20, 169, 65, &unk_1B15112, 0);
    if ( v2 == 0 )
      return v2;
LABEL_36:
    v21 = (char *)v2;
    v2 = 0;
    SSL_CTX_free(v21);
    return v2;
  }
  *v18 = 0;
  *(uint32_t *)(*(uint32_t *)(v2 + 352) + 4) = 0;
  *(uint32_t *)(*(uint32_t *)(v2 + 352) + 8) = 0;
  v19 = (uint32_t *)CRYPTO_malloc(0xCu, (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)(v2 + 348) = (uint32_t)(uintptr_t)(v19);
  if ( v19 == nullptr )
  {
    CRYPTO_free(*(void **)(v2 + 352));
    goto LABEL_35;
  }
  *v19 = 0;
  *(uint32_t *)(*(uint32_t *)(v2 + 348) + 4) = 0;
  *(uint32_t *)(*(uint32_t *)(v2 + 348) + 8) = 0;
  *(uint32_t *)(v2 + 164) |= 4u;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_default_passwd_cb  (binary VA: 0x12fb730)
// Original: SSL_CTX_set_default_passwd_cb
// ----------------------------------------------------------------------------
int SSL_CTX_set_default_passwd_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 108) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_default_passwd_cb_userdata  (binary VA: 0x12fb740)
// Original: SSL_CTX_set_default_passwd_cb_userdata
// ----------------------------------------------------------------------------
int SSL_CTX_set_default_passwd_cb_userdata(int a1, int a2)
{
  *(uint32_t *)(a1 + 112) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_cert_verify_callback  (binary VA: 0x12fb750)
// Original: SSL_CTX_set_cert_verify_callback
// ----------------------------------------------------------------------------
int SSL_CTX_set_cert_verify_callback(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 100) = a2;
  *(uint32_t *)(a1 + 104) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_verify  (binary VA: 0x12fb770)
// Original: SSL_CTX_set_verify
// ----------------------------------------------------------------------------
int SSL_CTX_set_verify(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 192) = a2;
  *(uint32_t *)(a1 + 232) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_verify_depth  (binary VA: 0x12fb790)
// Original: SSL_CTX_set_verify_depth
// ----------------------------------------------------------------------------
int SSL_CTX_set_verify_depth(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_depth(*(uint32_t *)(a1 + 240), a2);
}

// ----------------------------------------------------------------------------
// Function: ssl_set_cert_masks  (binary VA: 0x12fb7c0)
// Original: ssl_set_cert_masks
// ----------------------------------------------------------------------------
void ssl_set_cert_masks(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  bool v16;
  int v17;
  __m128i v18;
  int v19;
  void *pubkey;
  void *v21;
  unsigned int v22;
  int *v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  bool v28;
  bool v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  void *v33;
  int v34;
  bool v35;
  bool v36;
  int v37;
  bool v38;
  bool v39;
  bool v40;
  bool v41;
  int v42;
  int v43;
  bool v44;
  int v45;
  int v46;
  const char *v47;
  bool v48;
  int v49;
  bool v50;
  int v51;
  bool v52;
  unsigned int v53;
  int v54;
  unsigned int v55;

  if ( a1 == 0 )
    return;
  v2 = *(uint32_t *)(a1 + 24);
  v3 = *(uint32_t *)(a1 + 28);
  v4 = (*(uint32_t *)(a2 + 32) & 8) == 0 ? 1024 : 512;
  if ( v2 != 0 )
  {
    v35 = true;
    v36 = true;
    if ( v3 != 0 )
      goto LABEL_4;
  }
  else
  {
    v35 = v3 != 0;
    v36 = true;
    if ( v3 != 0 )
      goto LABEL_4;
  }
  v36 = false;
  if ( v35 )
    v36 = v4 >= 8 * RSA_size(v2);
LABEL_4:
  v5 = *(uint32_t *)(a1 + 32);
  v6 = *(uint32_t *)(a1 + 36);
  if ( v5 != 0 )
  {
    v38 = true;
    v40 = true;
    if ( v6 != 0 )
      goto LABEL_6;
  }
  else
  {
    v38 = v6 != 0;
    v40 = true;
    if ( v6 != 0 )
      goto LABEL_6;
  }
  v40 = false;
  if ( v38 )
    v40 = v4 >= 8 * DH_size(v5);
LABEL_6:
  v39 = true;
  if ( *(uint32_t *)(a1 + 40) == 0 )
    v39 = *(uint32_t *)(a1 + 44) != 0;
  if ( *(uint32_t *)(a1 + 48) != 0 && *(uint32_t *)(a1 + 52) != 0 )
  {
    v54 = 1;
    v37 = 1;
    v41 = v4 >= 8 * EVP_PKEY_size(*(uint32_t *)(a1 + 52));
  }
  else
  {
    v54 = 0;
    v37 = 0;
    v41 = false;
  }
  v7 = false;
  if ( *(uint32_t *)(a1 + 56) != 0 )
  {
    v7 = *(uint32_t *)(a1 + 60) != 0;
    v8 = 1;
    if ( *(uint32_t *)(a1 + 60) == 0 )
      v8 = v54;
    v54 = v8;
  }
  v50 = false;
  if ( *(uint32_t *)(a1 + 64) != 0 )
    v50 = *(uint32_t *)(a1 + 68) != 0;
  v42 = 0;
  v52 = false;
  if ( *(uint32_t *)(a1 + 72) != 0 )
  {
    v9 = *(uint32_t *)(a1 + 76);
    if ( v9 != 0 )
    {
      v28 = v7;
      v10 = EVP_PKEY_size(v9);
      v42 = 1;
      v7 = v28;
      v52 = v4 >= 8 * v10;
    }
  }
  v43 = 0;
  v44 = false;
  if ( *(uint32_t *)(a1 + 80) != 0 )
  {
    v11 = *(uint32_t *)(a1 + 84);
    if ( v11 != 0 )
    {
      v29 = v7;
      v12 = EVP_PKEY_size(v11);
      v43 = 1;
      v7 = v29;
      v44 = v4 >= 8 * v12;
    }
  }
  v48 = false;
  v46 = *(uint32_t *)(a1 + 88);
  if ( v46 != 0 )
    v48 = *(uint32_t *)(a1 + 92) != 0;
  v13 = 0;
  v14 = 256;
  if ( *(uint32_t *)(a1 + 104) != 0 )
  {
    v14 = *(uint32_t *)(a1 + 108) == 0 ? 256 : 768;
    v13 = *(uint32_t *)(a1 + 108) != 0 ? 0x200 : 0;
  }
  if ( *(uint32_t *)(a1 + 96) != 0 )
  {
    if ( *(uint32_t *)(a1 + 100) != 0 )
      v13 = 512;
    else
      v14 = v13;
  }
  else
  {
    v14 = v13;
  }
  if ( v37 != 0 || v7 && v35 )
    v13 |= 1u;
  v15 = 1;
  if ( !v41 )
  {
    v15 = 0;
    if ( v36 )
      v15 = v54;
  }
  if ( v40 )
    v15 |= 8u;
  if ( v38 )
    v13 |= 8u;
  if ( v42 != 0 )
    v13 |= 2u;
  v16 = !v52;
  v53 = 4;
  if ( !v16 )
    v15 |= 2u;
  if ( v43 != 0 )
    v13 |= 4u;
  if ( v44 )
    v15 |= 4u;
  v17 = 6;
  if ( v54 != 0 )
  {
    v14 |= 1u;
    v53 = 5;
    LOBYTE(v17) = 7;
  }
  if ( v50 )
  {
    v53 = v17;
    v55 = v14 | 6;
    if ( !v48 )
      goto LABEL_50;
LABEL_55:
    v30 = v15;
    X509_check_purpose(v46, -1, 0);
    v19 = v46;
    v49 = 1;
    v51 = 1;
    if ( (*(uint8_t *)(v46 + 40) & 2) != 0 )
    {
      v51 = *(uint32_t *)(v46 + 44) & 0x80;
      v49 = *(uint32_t *)(v46 + 44) & 8;
      v19 = v46;
    }
    pubkey = (void *)X509_get_pubkey(v19);
    v21 = pubkey;
    v45 = 0;
    v22 = v30;
    if ( pubkey != nullptr )
    {
      v33 = pubkey;
      v45 = EVP_PKEY_bits(pubkey);
      v21 = v33;
      v22 = v30;
    }
    v31 = v22;
    EVP_PKEY_free(v21);
    v15 = v31;
    v23 = *(int **)(v46 + 4);
    v24 = 0;
    if ( v23 != nullptr )
    {
      v25 = *v23;
      if ( v25 != 0 )
      {
        v24 = OBJ_obj2nid(v25);
        v15 = v31;
      }
    }
    if ( v49 != 0 )
    {
      v32 = v15;
      v34 = v24;
      v47 = (const char *)OBJ_nid2ln(v24);
      if ( v47 != nullptr )
      {
        v26 = (char *)(strstr(v47, "WithRSA"));
        v15 = v32;
        v27 = v34;
        if ( v26 != nullptr )
        {
          v13 |= 0x20u;
          v55 |= 0x10u;
          if ( v45 <= 163 )
          {
            v15 = v32 | 0x20;
            v53 |= 0x10u;
          }
        }
      }
      else
      {
        ERR_clear_error(v34, v32);
        v15 = v32;
        v27 = v34;
      }
      if ( v27 == 416 )
      {
        v13 |= 0x40u;
        v55 |= 0x10u;
        if ( v45 <= 163 )
        {
          v15 |= 0x40u;
          v53 |= 0x10u;
        }
      }
    }
    if ( v51 != 0 )
    {
      v55 |= 0x40u;
      v53 |= 0x40u;
    }
    goto LABEL_50;
  }
  v55 = v14 | 4;
  if ( v48 )
    goto LABEL_55;
LABEL_50:
  if ( v39 )
  {
    v13 |= 0x80u;
    LOBYTE(v15) = v15 | 0x80;
  }
  *(uint32_t *)(a1 + 4) = 1;
g4_m128_lane<int64_t>(v18, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v55)), 0);
g4_m128_lane<int64_t>(v18, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v53)), 0);
  *(__m128i *)(a1 + 8) = _mm_or_si128(v18, G4_BITCAST<__m128i>(xmmword_1C7CB40));
}

// ----------------------------------------------------------------------------
// Function: ssl_check_srvr_ecc_cert_and_alg  (binary VA: 0x12fbd90)
// Original: ssl_check_srvr_ecc_cert_and_alg
// ----------------------------------------------------------------------------
int ssl_check_srvr_ecc_cert_and_alg(int a1, int a2)
{
  int v2;
  int v3;
  void *pubkey;
  void *v5;
  void *v6;
  int *v7;
  int v8;
  int v9;
  const char *haystack;
  int v12;
  int v13;
  void *v14;
  void *v15;
  int v16;

  v2 = *(uint32_t *)(a2 + 12);
  v16 = *(uint32_t *)(a2 + 16);
  if ( (*(uint8_t *)(a2 + 32) & 2) != 0 )
  {
    v3 = 0;
    pubkey = (void *)X509_get_pubkey(a1);
    if ( pubkey == nullptr )
      return v3;
    v14 = pubkey;
    v5 = (void *)EVP_PKEY_bits(pubkey);
    v6 = v14;
    v15 = v5;
    EVP_PKEY_free(v6);
    if ( (int)(uintptr_t)(v15) > 163 )
      return v3;
  }
  X509_check_purpose(a1, -1, 0);
  v7 = *(int **)(a1 + 4);
  v8 = 0;
  if ( v7 != nullptr )
  {
    v9 = *v7;
    if ( v9 != 0 )
      v8 = OBJ_obj2nid(v9);
  }
  if ( (v2 & 0x60) != 0 )
  {
    if ( (*(uint8_t *)(a1 + 40) & 2) != 0 && (*(uint8_t *)(a1 + 44) & 8) == 0 )
    {
      v3 = 0;
      ERR_put_error(20, 279, 317, &unk_1B15112, 0);
      return v3;
    }
    if ( (v2 & 0x40) != 0 && v8 != 416 )
    {
      v3 = 0;
      ERR_put_error(20, 279, 323, &unk_1B15112, 0);
      return v3;
    }
    if ( (v2 & 0x20) != 0 )
    {
      haystack = (const char *)OBJ_nid2ln(v8);
      if ( haystack != nullptr )
      {
        if ( strstr(haystack, "WithRSA") != nullptr )
          goto LABEL_17;
      }
      else
      {
        ERR_clear_error(v13, v12);
      }
      v3 = 0;
      ERR_put_error(20, 279, 322, &unk_1B15112, 0);
      return v3;
    }
  }
LABEL_17:
  v3 = 1;
  if ( (v16 & 0x40) != 0 && (*(uint8_t *)(a1 + 40) & 2) != 0 && *(char *)(a1 + 44) >= 0 )
  {
    LOWORD(v3) = 0;
    ERR_put_error(20, 279, 318, &unk_1B15112, 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ssl_get_server_send_cert  (binary VA: 0x12fbfa0)
// Original: ssl_get_server_send_cert
// ----------------------------------------------------------------------------
int ssl_get_server_send_cert(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = *(uint32_t *)(a1 + 152);
  ssl_set_cert_masks(v1, *(uint32_t *)(*(uint32_t *)(a1 + 88) + 836));
  v2 = 5;
  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 836);
  v4 = *(uint32_t *)(v3 + 12);
  v5 = *(uint32_t *)(v3 + 16);
  if ( (v4 & 0x60) != 0 )
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  if ( (v5 & 0x40) != 0 )
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  LOBYTE(v2) = 3;
  if ( (v4 & 2) != 0 )
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  LOBYTE(v2) = 4;
  if ( (v4 & 4) != 0 )
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  LOBYTE(v2) = 2;
  if ( (v5 & 2) != 0 )
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  if ( (v5 & 1) != 0 )
  {
    v2 = *(uint32_t *)(v1 + 48) == 0;
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  }
  result = 0;
  if ( (v5 & 0x20) == 0 )
  {
    v2 = 6;
    if ( (v5 & 0x100) == 0 )
    {
      LOBYTE(v2) = 7;
      if ( (v5 & 0x200) == 0 )
      {
        ERR_put_error(20, 182, 68, &unk_1B15112, 0);
        return 0;
      }
    }
    return *(uint32_t *)(v1 + 8 * v2 + 48);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_get_sign_pkey  (binary VA: 0x12fc0a0)
// Original: ssl_get_sign_pkey
// ----------------------------------------------------------------------------
int ssl_get_sign_pkey(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  int result;

  v2 = *(uint32_t *)(a2 + 16);
  v3 = *(uint32_t **)(a1 + 152);
  if ( (v2 & 2) == 0 || (result = v3[17]) == 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      result = v3[15];
      if ( result == 0 )
        return v3[13];
    }
    else if ( (v2 & 0x40) == 0 || (result = v3[23]) == 0 )
    {
      ERR_put_error(20, 183, 68, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_update_cache  (binary VA: 0x12fc130)
// Original: ssl_update_cache
// ----------------------------------------------------------------------------
char ssl_update_cache(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  time_t v6;
  int v8;

  v2 = a1[48];
  if ( *(uint32_t *)(v2 + 68) == 0 )
    return v2;
  v3 = a1[92];
  v4 = *(uint32_t *)(v3 + 32);
  v5 = v4 & a2;
  if ( (v4 & a2) != 0 && a1[27] == 0 )
  {
    if ( (v4 & 0x200) != 0 )
    {
LABEL_5:
      v2 = *(uint32_t *)(v3 + 40);
      if ( v2 != 0 )
      {
        v8 = v5;
        CRYPTO_add_lock(a1[48] + 164, 1, 14, &unk_1B15112, 0);
        v2 = (*(int (**)(uint32_t *, uint32_t))(a1[92] + 40))(a1, a1[48]);
        v5 = v8;
        if ( v2 == 0 )
        {
          SSL_SESSION_free((void *)a1[48]);
          v5 = v8;
        }
      }
      goto LABEL_8;
    }
    v2 = SSL_CTX_add_session(v3, v2);
    v5 = v4 & a2;
    if ( v2 != 0 )
    {
      v3 = a1[92];
      goto LABEL_5;
    }
  }
LABEL_8:
  if ( (v4 & 0x80) == 0 && a2 == v5 )
  {
    v2 = a1[92];
    if ( (a2 & 1) != 0 )
      LOBYTE(v2) = *(uint8_t *)(v2 + 60) == 0xFF;
    else
      LOBYTE(v2) = *(uint8_t *)(v2 + 72) == 0xFF;
    if ( (uint8_t)v2 != 0 )
    {
      v6 = time(nullptr);
      LOBYTE(v2) = SSL_CTX_flush_sessions(a1[92], v6);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_ssl_method  (binary VA: 0x12fc2a0)
// Original: SSL_get_ssl_method
// ----------------------------------------------------------------------------
int SSL_get_ssl_method(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_ssl_method  (binary VA: 0x12fc2b0)
// Original: SSL_set_ssl_method
// ----------------------------------------------------------------------------
int SSL_set_ssl_method(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;

  result = 1;
  v3 = *(uint32_t *)(a1 + 8);
  if ( v3 != a2 )
  {
    v4 = *(uint32_t *)(a1 + 32);
    v5 = -1;
    if ( v4 != 0 )
      v5 = v4 == *(uint32_t *)(v3 + 20);
    if ( *(uint32_t *)v3 == *(uint32_t *)a2 )
    {
      *(uint32_t *)(a1 + 8) = a2;
      result = 1;
      if ( v5 != 1 )
      {
LABEL_6:
        if ( v5 == 0 )
          *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 16);
        return result;
      }
    }
    else
    {
      (*(void (**)(int))(v3 + 12))(a1);
      *(uint32_t *)(a1 + 8) = a2;
      result = (*(int (**)(int))(a2 + 4))(a1);
      if ( v5 != 1 )
        goto LABEL_6;
    }
    *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_undefined_void_function  (binary VA: 0x12fc340)
// Original: ssl_undefined_void_function
// ----------------------------------------------------------------------------
int ssl_undefined_void_function()
{
  ERR_put_error(20, 244, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl_undefined_const_function  (binary VA: 0x12fc390)
// Original: ssl_undefined_const_function
// ----------------------------------------------------------------------------
int ssl_undefined_const_function()
{
  ERR_put_error(20, 243, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl_bad_method  (binary VA: 0x12fc3e0)
// Original: ssl_bad_method
// ----------------------------------------------------------------------------
int ssl_bad_method()
{
  ERR_put_error(20, 160, 66, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_version  (binary VA: 0x12fc430)
// Original: SSL_get_version
// ----------------------------------------------------------------------------
const char * SSL_get_version(int *a1)
{
  int v1;
  const char *result;

  v1 = *a1;
  result = "TLSv1";
  if ( *a1 != 769 )
  {
    result = "SSLv3";
    if ( v1 != 768 )
    {
      result = "SSLv2";
      if ( v1 != 2 )
        return "unknown";
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_clear_cipher_ctx  (binary VA: 0x12fc470)
// Original: ssl_clear_cipher_ctx
// ----------------------------------------------------------------------------
int ssl_clear_cipher_ctx(void **a1)
{
  int result;

  if ( a1[32] != nullptr )
  {
    EVP_CIPHER_CTX_cleanup(a1[32]);
    CRYPTO_free(a1[32]);
    a1[32] = nullptr;
  }
  if ( a1[35] != nullptr )
  {
    EVP_CIPHER_CTX_cleanup(a1[35]);
    CRYPTO_free(a1[35]);
    a1[35] = nullptr;
  }
  if ( a1[34] != nullptr )
  {
    COMP_CTX_free(a1[34]);
    a1[34] = nullptr;
  }
  result = (int)(uintptr_t)(a1[37]);
  if ( result != 0 )
  {
    COMP_CTX_free(a1[37]);
    a1[37] = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_certificate  (binary VA: 0x12fc520)
// Original: SSL_get_certificate
// ----------------------------------------------------------------------------
int SSL_get_certificate(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 152);
  if ( v1 != 0 )
    return **(uint32_t **)v1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_privatekey  (binary VA: 0x12fc540)
// Original: SSL_get_privatekey
// ----------------------------------------------------------------------------
int SSL_get_privatekey(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 152);
  if ( v1 != 0 )
    return *(uint32_t *)(*(uint32_t *)v1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_current_cipher  (binary VA: 0x12fc560)
// Original: SSL_get_current_cipher
// ----------------------------------------------------------------------------
int SSL_get_current_cipher(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 180);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_current_compression  (binary VA: 0x12fc580)
// Original: SSL_get_current_compression
// ----------------------------------------------------------------------------
int SSL_get_current_compression(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 148);
  if ( v1 != 0 )
    return *(uint32_t *)v1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_current_expansion  (binary VA: 0x12fc5a0)
// Original: SSL_get_current_expansion
// ----------------------------------------------------------------------------
int SSL_get_current_expansion(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 136);
  if ( v1 != 0 )
    return *(uint32_t *)v1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl_init_wbio_buffer  (binary VA: 0x12fc5c0)
// Original: ssl_init_wbio_buffer
// ----------------------------------------------------------------------------
int ssl_init_wbio_buffer(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;

  v2 = *(uint32_t *)(a1 + 20);
  if ( v2 != 0 )
  {
    if ( v2 == *(uint32_t *)(a1 + 16) )
      *(uint32_t *)(a1 + 16) = BIO_pop(*(uint32_t *)(a1 + 20));
  }
  else
  {
    v5 = (int)(uintptr_t)(BIO_f_buffer());
    v3 = 0;
    v6 = (int)(uintptr_t)(BIO_new(v5));
    v2 = v6;
    if ( v6 == 0 )
      return v3;
    *(uint32_t *)(a1 + 20) = v6;
  }
  BIO_ctrl(v2, 1, 0, 0);
  if ( BIO_int_ctrl(v2, 117, 1, 0) != 0 )
  {
    if ( a2 != 0 )
    {
      v3 = 1;
      if ( *(uint32_t *)(a1 + 16) != v2 )
        *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(BIO_push(v2, *(uint32_t *)(a1 + 16)));
    }
    else
    {
      v3 = 1;
      if ( *(uint32_t *)(a1 + 16) == v2 )
        *(uint32_t *)(a1 + 16) = BIO_pop(v2);
    }
  }
  else
  {
    v3 = 0;
    ERR_put_error(20, 184, 7, &unk_1B15112, 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ssl_free_wbio_buffer  (binary VA: 0x12fc700)
// Original: ssl_free_wbio_buffer
// ----------------------------------------------------------------------------
void * ssl_free_wbio_buffer(int a1)
{
  void *result;

  result = *(void **)(a1 + 20);
  if ( result != nullptr )
  {
    if ( result == *(void **)(a1 + 16) )
    {
      *(uint32_t *)(a1 + 16) = BIO_pop(*(uint32_t *)(a1 + 20));
      result = *(void **)(a1 + 20);
    }
    result = (void *)BIO_free(result);
    *(uint32_t *)(a1 + 20) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_quiet_shutdown  (binary VA: 0x12fc760)
// Original: SSL_CTX_set_quiet_shutdown
// ----------------------------------------------------------------------------
int SSL_CTX_set_quiet_shutdown(int a1, int a2)
{
  *(uint32_t *)(a1 + 244) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_quiet_shutdown  (binary VA: 0x12fc780)
// Original: SSL_CTX_get_quiet_shutdown
// ----------------------------------------------------------------------------
int SSL_CTX_get_quiet_shutdown(int a1)
{
  return *(uint32_t *)(a1 + 244);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_quiet_shutdown  (binary VA: 0x12fc790)
// Original: SSL_set_quiet_shutdown
// ----------------------------------------------------------------------------
int SSL_set_quiet_shutdown(int a1, int a2)
{
  *(uint32_t *)(a1 + 44) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_quiet_shutdown  (binary VA: 0x12fc7a0)
// Original: SSL_get_quiet_shutdown
// ----------------------------------------------------------------------------
int SSL_get_quiet_shutdown(int a1)
{
  return *(uint32_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_shutdown  (binary VA: 0x12fc7b0)
// Original: SSL_set_shutdown
// ----------------------------------------------------------------------------
int SSL_set_shutdown(int a1, int a2)
{
  *(uint32_t *)(a1 + 48) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_shutdown  (binary VA: 0x12fc7c0)
// Original: SSL_get_shutdown
// ----------------------------------------------------------------------------
int SSL_get_shutdown(int a1)
{
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: SSL_version  (binary VA: 0x12fc7d0)
// Original: SSL_version
// ----------------------------------------------------------------------------
int SSL_version(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_ctrl  (binary VA: 0x12fc7e0)
// Original: SSL_ctrl
// ----------------------------------------------------------------------------
char SSL_ctrl(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  switch ( a2 )
  {
    case 16:
      a1[26] = a4;
      LOBYTE(v4) = 1;
      break;
    case 17:
      if ( SSL_version((int)(uintptr_t)(a1)) == 65279 || (v6 = SSL_version((int)(uintptr_t)(a1)), LOBYTE(v4) = 0, v6 == 256) )
      {
        *(uint32_t *)(a1[23] + 600) = a3;
        LOBYTE(v4) = a3;
      }
      break;
    case 32:
      v7 = a1[64] | a3;
      a1[64] = v7;
      LOBYTE(v4) = v7;
      break;
    case 33:
      v8 = a1[65] | a3;
      a1[65] = v8;
      LOBYTE(v4) = v8;
      break;
    case 40:
      v4 = a1[24];
      break;
    case 41:
      v4 = a1[24];
      a1[24] = a3;
      break;
    case 50:
      v4 = a1[66];
      break;
    case 51:
      v4 = a1[66];
      a1[66] = a3;
      break;
    case 52:
      LOBYTE(v4) = 0;
      if ( (unsigned int)(a3 - 512) <= 0x3E00 )
      {
        a1[69] = a3;
        LOBYTE(v4) = 1;
      }
      break;
    case 76:
      v9 = a1[22];
      LOBYTE(v4) = 0;
      if ( v9 != 0 )
        v4 = *(uint32_t *)(v9 + 1048);
      break;
    case 77:
      v10 = a1[64] & ~a3;
      a1[64] = v10;
      LOBYTE(v4) = v10;
      break;
    case 78:
      v5 = a1[65] & ~a3;
      a1[65] = v5;
      LOBYTE(v4) = v5;
      break;
    default:
      LOBYTE(v4) = (*(int (**)(uint32_t *, int, int, int))(a1[2] + 64))(a1, a2, a3, a4);
      break;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_SSL_CTX  (binary VA: 0x12fc970)
// Original: SSL_get_SSL_CTX
// ----------------------------------------------------------------------------
int SSL_get_SSL_CTX(int a1)
{
  return *(uint32_t *)(a1 + 228);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_SSL_CTX  (binary VA: 0x12fc980)
// Original: SSL_set_SSL_CTX
// ----------------------------------------------------------------------------
int SSL_set_SSL_CTX(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uint32_t *)(a1 + 228) != a2 )
  {
    if ( a2 == 0 )
      v2 = *(uint32_t *)(a1 + 368);
    if ( *(uint32_t *)(a1 + 152) != 0 )
      ssl_cert_free(*(void ***)(a1 + 152));
    *(uint32_t *)(a1 + 152) = ssl_cert_dup(*(uint32_t **)(v2 + 176));
    CRYPTO_add_lock(v2 + 96, 1, 12, &unk_1B15112, 0);
    if ( *(uint32_t *)(a1 + 228) != 0 )
      SSL_CTX_free(*(char **)(a1 + 228));
    *(uint32_t *)(a1 + 228) = v2;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_default_verify_paths  (binary VA: 0x12fca50)
// Original: SSL_CTX_set_default_verify_paths
// ----------------------------------------------------------------------------
int SSL_CTX_set_default_verify_paths(int a1)
{
  return X509_STORE_set_default_paths(*(uint32_t *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_load_verify_locations  (binary VA: 0x12fca80)
// Original: SSL_CTX_load_verify_locations
// ----------------------------------------------------------------------------
int SSL_CTX_load_verify_locations(int a1, int a2, int a3)
{
  return X509_STORE_load_locations(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_info_callback  (binary VA: 0x12fcac0)
// Original: SSL_set_info_callback
// ----------------------------------------------------------------------------
int SSL_set_info_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 208) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_info_callback  (binary VA: 0x12fcae0)
// Original: SSL_get_info_callback
// ----------------------------------------------------------------------------
int SSL_get_info_callback(int a1)
{
  return *(uint32_t *)(a1 + 208);
}

// ----------------------------------------------------------------------------
// Function: SSL_state  (binary VA: 0x12fcaf0)
// Original: SSL_state
// ----------------------------------------------------------------------------
int SSL_state(int a1)
{
  return *(uint32_t *)(a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: SSL_do_handshake  (binary VA: 0x12fcb00)
// Original: SSL_do_handshake
// ----------------------------------------------------------------------------
int SSL_do_handshake(int a1)
{
  int result;
  int v2;

  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    (*(void (**)(int))(*(uint32_t *)(a1 + 8) + 44))(a1);
    if ( (SSL_state(a1) & 0x3000) != 0 )
      return (*(int (**)(int))(a1 + 32))(a1);
    v2 = SSL_state(a1);
    result = 1;
    if ( (v2 & 0x4000) != 0 )
      return (*(int (**)(int))(a1 + 32))(a1);
  }
  else
  {
    ERR_put_error(20, 180, 144, &unk_1B15112, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_shutdown  (binary VA: 0x12fcbb0)
// Original: SSL_shutdown
// ----------------------------------------------------------------------------
int SSL_shutdown(int a1)
{
  int v1;
  int result;

  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    v1 = SSL_state(a1);
    result = 1;
    if ( (v1 & 0x3000) == 0 )
      return (*(int (**)(int))(*(uint32_t *)(a1 + 8) + 36))(a1);
  }
  else
  {
    ERR_put_error(20, 224, 276, &unk_1B15112, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_verify_result  (binary VA: 0x12fcc50)
// Original: SSL_set_verify_result
// ----------------------------------------------------------------------------
int SSL_set_verify_result(int a1, int a2)
{
  *(uint32_t *)(a1 + 236) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_verify_result  (binary VA: 0x12fcc70)
// Original: SSL_get_verify_result
// ----------------------------------------------------------------------------
int SSL_get_verify_result(int a1)
{
  return *(uint32_t *)(a1 + 236);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_ex_new_index  (binary VA: 0x12fcc80)
// Original: SSL_get_ex_new_index
// ----------------------------------------------------------------------------
int SSL_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(1, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_ex_data  (binary VA: 0x12fccd0)
// Original: SSL_set_ex_data
// ----------------------------------------------------------------------------
int SSL_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data(a1 + 240, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_ex_data  (binary VA: 0x12fcd10)
// Original: SSL_get_ex_data
// ----------------------------------------------------------------------------
int SSL_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data(a1 + 240, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_ex_new_index  (binary VA: 0x12fcd40)
// Original: SSL_CTX_get_ex_new_index
// ----------------------------------------------------------------------------
int SSL_CTX_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(2, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_ex_data  (binary VA: 0x12fcd90)
// Original: SSL_CTX_set_ex_data
// ----------------------------------------------------------------------------
int SSL_CTX_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data(a1 + 128, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_ex_data  (binary VA: 0x12fcdd0)
// Original: SSL_CTX_get_ex_data
// ----------------------------------------------------------------------------
int SSL_CTX_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data(a1 + 128, a2);
}

// ----------------------------------------------------------------------------
// Function: ssl_ok  (binary VA: 0x12fce00)
// Original: ssl_ok
// ----------------------------------------------------------------------------
int ssl_ok()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_cert_store  (binary VA: 0x12fce10)
// Original: SSL_CTX_get_cert_store
// ----------------------------------------------------------------------------
int SSL_CTX_get_cert_store(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_cert_store  (binary VA: 0x12fce20)
// Original: SSL_CTX_set_cert_store
// ----------------------------------------------------------------------------
int SSL_CTX_set_cert_store(int a1, int a2)
{
  if ( *(uint32_t *)(a1 + 12) != 0 )
    X509_STORE_free(*(void **)(a1 + 12));
  *(uint32_t *)(a1 + 12) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: SSL_want  (binary VA: 0x12fce60)
// Original: SSL_want
// ----------------------------------------------------------------------------
int SSL_want(int a1)
{
  return *(uint32_t *)(a1 + 24);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_error  (binary VA: 0x12fce70)
// Original: SSL_get_error
// ----------------------------------------------------------------------------
char SSL_get_error(int a1, int a2)
{
  char result;
  unsigned int v3;
  int rbio;
  int v5;
  int v6;
  int retry_reason;
  int v8;
  int v9;

  result = 0;
  if ( a2 <= 0 )
  {
    v3 = ERR_peek_error();
    if ( v3 != 0 )
      return 4 * (HIBYTE(v3) == 2) + 1;
    if ( a2 != 0 )
    {
      if ( SSL_want(a1) != 3 )
        goto LABEL_19;
      rbio = SSL_get_rbio(a1);
      v5 = BIO_test_flags(rbio, 1);
      result = 2;
      if ( v5 != 0 )
        return result;
      v6 = BIO_test_flags(rbio, 2);
      result = 3;
      if ( v6 != 0 )
        return result;
      if ( BIO_test_flags(rbio, 4) == 0 )
      {
LABEL_19:
        if ( SSL_want(a1) != 2 )
          return (SSL_want(a1) != 4) + 4;
        rbio = SSL_get_wbio(a1);
        v8 = BIO_test_flags(rbio, 2);
        result = 3;
        if ( v8 != 0 )
          return result;
        v9 = BIO_test_flags(rbio, 1);
        result = 2;
        if ( v9 != 0 )
          return result;
        if ( BIO_test_flags(rbio, 4) == 0 )
          return (SSL_want(a1) != 4) + 4;
      }
      retry_reason = BIO_get_retry_reason(rbio);
      result = 7;
      if ( retry_reason != 2 )
        return 3 * (retry_reason == 3) + 5;
    }
    else
    {
      result = 6;
      if ( *(uint32_t *)a1 != 2 )
      {
        result = 5;
        if ( (*(uint8_t *)(a1 + 48) & 2) != 0 )
          return 6 - (*(uint32_t *)(*(uint32_t *)(a1 + 88) + 388) != 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_tmp_rsa_callback  (binary VA: 0x12fd030)
// Original: SSL_CTX_set_tmp_rsa_callback
// ----------------------------------------------------------------------------
char SSL_CTX_set_tmp_rsa_callback(uint32_t *a1, int a2)
{
  return SSL_CTX_callback_ctrl(a1, 5, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_tmp_rsa_callback  (binary VA: 0x12fd070)
// Original: SSL_set_tmp_rsa_callback
// ----------------------------------------------------------------------------
char SSL_set_tmp_rsa_callback(int a1, int a2)
{
  return SSL_callback_ctrl(a1, 5, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_tmp_dh_callback  (binary VA: 0x12fd0b0)
// Original: SSL_CTX_set_tmp_dh_callback
// ----------------------------------------------------------------------------
char SSL_CTX_set_tmp_dh_callback(uint32_t *a1, int a2)
{
  return SSL_CTX_callback_ctrl(a1, 6, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_tmp_dh_callback  (binary VA: 0x12fd0f0)
// Original: SSL_set_tmp_dh_callback
// ----------------------------------------------------------------------------
char SSL_set_tmp_dh_callback(int a1, int a2)
{
  return SSL_callback_ctrl(a1, 6, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_tmp_ecdh_callback  (binary VA: 0x12fd130)
// Original: SSL_CTX_set_tmp_ecdh_callback
// ----------------------------------------------------------------------------
char SSL_CTX_set_tmp_ecdh_callback(uint32_t *a1, int a2)
{
  return SSL_CTX_callback_ctrl(a1, 7, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_tmp_ecdh_callback  (binary VA: 0x12fd170)
// Original: SSL_set_tmp_ecdh_callback
// ----------------------------------------------------------------------------
char SSL_set_tmp_ecdh_callback(int a1, int a2)
{
  return SSL_callback_ctrl(a1, 7, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_psk_identity_hint  (binary VA: 0x12fd1b0)
// Original: SSL_CTX_use_psk_identity_hint
// ----------------------------------------------------------------------------
bool SSL_CTX_use_psk_identity_hint(int a1, char *s)
{
  int v2;

  if ( s != nullptr && strlen(s) > 0x80 )
  {
    ERR_put_error(20, 272, 146, &unk_1B15112, 0);
    return false;
  }
  else
  {
    if ( *(uint32_t *)(a1 + 332) != 0 )
      CRYPTO_free(*(void **)(a1 + 332));
    if ( s != nullptr )
    {
      v2 = (int)(uintptr_t)(BUF_strdup(s));
      *(uint32_t *)(a1 + 332) = v2;
      return v2 != 0;
    }
    else
    {
      *(uint32_t *)(a1 + 332) = 0;
      return true;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_use_psk_identity_hint  (binary VA: 0x12fd280)
// Original: SSL_use_psk_identity_hint
// ----------------------------------------------------------------------------
bool SSL_use_psk_identity_hint(int a1, char *s)
{
  bool result;
  int v3;

  result = false;
  if ( a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 192);
    result = true;
    if ( v3 != 0 )
    {
      if ( s != nullptr && strlen(s) > 0x80 )
      {
        ERR_put_error(20, 273, 146, &unk_1B15112, 0);
        return false;
      }
      else
      {
        if ( *(uint32_t *)(v3 + 140) != 0 )
        {
          CRYPTO_free(*(void **)(v3 + 140));
          v3 = *(uint32_t *)(a1 + 192);
        }
        if ( s != nullptr )
        {
          *(uint32_t *)(v3 + 140) = (uint32_t)(uintptr_t)(BUF_strdup(s));
          return *(uint32_t *)(*(uint32_t *)(a1 + 192) + 140) != 0;
        }
        else
        {
          *(uint32_t *)(v3 + 140) = 0;
          return true;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_psk_identity_hint  (binary VA: 0x12fd370)
// Original: SSL_get_psk_identity_hint
// ----------------------------------------------------------------------------
int SSL_get_psk_identity_hint(int a1)
{
  int v1;

  if ( a1 == 0 )
    return 0;
  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 140);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_get_psk_identity  (binary VA: 0x12fd3a0)
// Original: SSL_get_psk_identity
// ----------------------------------------------------------------------------
int SSL_get_psk_identity(int a1)
{
  int v1;

  if ( a1 == 0 )
    return 0;
  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 144);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_psk_client_callback  (binary VA: 0x12fd3d0)
// Original: SSL_set_psk_client_callback
// ----------------------------------------------------------------------------
int SSL_set_psk_client_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 220) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_psk_client_callback  (binary VA: 0x12fd3f0)
// Original: SSL_CTX_set_psk_client_callback
// ----------------------------------------------------------------------------
int SSL_CTX_set_psk_client_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 336) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_psk_server_callback  (binary VA: 0x12fd410)
// Original: SSL_set_psk_server_callback
// ----------------------------------------------------------------------------
int SSL_set_psk_server_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 224) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_psk_server_callback  (binary VA: 0x12fd430)
// Original: SSL_CTX_set_psk_server_callback
// ----------------------------------------------------------------------------
int SSL_CTX_set_psk_server_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 340) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_msg_callback  (binary VA: 0x12fd450)
// Original: SSL_CTX_set_msg_callback
// ----------------------------------------------------------------------------
char SSL_CTX_set_msg_callback(uint32_t *a1, int a2)
{
  return SSL_CTX_callback_ctrl(a1, 15, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_msg_callback  (binary VA: 0x12fd490)
// Original: SSL_set_msg_callback
// ----------------------------------------------------------------------------
char SSL_set_msg_callback(int a1, int a2)
{
  return SSL_callback_ctrl(a1, 15, a2);
}

// ----------------------------------------------------------------------------
// Function: ssl_clear_hash_ctx  (binary VA: 0x12fd4d0)
// Original: ssl_clear_hash_ctx
// ----------------------------------------------------------------------------
void * ssl_clear_hash_ctx(void **a1)
{
  void *result;

  result = *a1;
  if ( *a1 != nullptr )
    result = (void *)EVP_MD_CTX_destroy(*a1);
  *a1 = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_replace_hash  (binary VA: 0x12fd510)
// Original: ssl_replace_hash
// ----------------------------------------------------------------------------
int ssl_replace_hash(void **a1, int a2)
{
  int result;

  ssl_clear_hash_ctx(a1);
  result = (int)(uintptr_t)(EVP_MD_CTX_create());
  *a1 = (void *)result;
  if ( a2 != 0 )
  {
    EVP_DigestInit_ex(result, a2, 0);
    return (int)(uintptr_t)(*a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_connect_state  (binary VA: 0x12fd570)
// Original: SSL_set_connect_state
// ----------------------------------------------------------------------------
void * SSL_set_connect_state(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 20480;
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(v1 + 20);
  ssl_clear_cipher_ctx((void **)a1);
  ssl_clear_hash_ctx((void **)(a1 + 132));
  return ssl_clear_hash_ctx((void **)(a1 + 144));
}

// ----------------------------------------------------------------------------
// Function: SSL_connect  (binary VA: 0x12fd5e0)
// Original: SSL_connect
// ----------------------------------------------------------------------------
int SSL_connect(int a1)
{
  if ( *(uint32_t *)(a1 + 32) == 0 )
    SSL_set_connect_state(a1);
  return (*(int (**)(int))(*(uint32_t *)(a1 + 8) + 20))(a1);
}

// ----------------------------------------------------------------------------
// Function: SSL_set_accept_state  (binary VA: 0x12fd630)
// Original: SSL_set_accept_state
// ----------------------------------------------------------------------------
void * SSL_set_accept_state(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(a1 + 36) = 1;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 24576;
  *(uint32_t *)(a1 + 32) = *(uint32_t *)(v1 + 16);
  ssl_clear_cipher_ctx((void **)a1);
  ssl_clear_hash_ctx((void **)(a1 + 132));
  return ssl_clear_hash_ctx((void **)(a1 + 144));
}

// ----------------------------------------------------------------------------
// Function: SSL_accept  (binary VA: 0x12fd6a0)
// Original: SSL_accept
// ----------------------------------------------------------------------------
int SSL_accept(int a1)
{
  if ( *(uint32_t *)(a1 + 32) == 0 )
    SSL_set_accept_state(a1);
  return (*(int (**)(int))(*(uint32_t *)(a1 + 8) + 16))(a1);
}

// ----------------------------------------------------------------------------
// Function: SSL_free  (binary VA: 0x12fd6f0)
// Original: SSL_free
// ----------------------------------------------------------------------------
void SSL_free(char *a1)
{
  void *v1;
  int v2;
  int v3;

  if ( a1 != nullptr && (int)CRYPTO_add_lock(a1 + 252, -1, 16, &unk_1B15112, 0) <= 0 )
  {
    if ( *((uint32_t *)a1 + 28) != 0 )
      X509_VERIFY_PARAM_free(*((void **)a1 + 28));
    CRYPTO_free_ex_data(1, a1, a1 + 240);
    v1 = *((void **)a1 + 5);
    if ( v1 != nullptr )
    {
      if ( v1 == *((void **)a1 + 4) )
      {
        *((uint32_t *)a1 + 4) = BIO_pop(*((uint32_t *)a1 + 5));
        v1 = *((void **)a1 + 5);
      }
      BIO_free(v1);
      *((uint32_t *)a1 + 5) = 0;
    }
    if ( *((uint32_t *)a1 + 3) != 0 )
      BIO_free_all(*((void **)a1 + 3));
    v2 = *((uint32_t *)a1 + 4);
    if ( v2 != 0 && v2 != *((uint32_t *)a1 + 3) )
      BIO_free_all(*((void **)a1 + 4));
    if ( *((uint32_t *)a1 + 15) != 0 )
      BUF_MEM_free(*((void **)a1 + 15));
    if ( *((uint32_t *)a1 + 29) != 0 )
      sk_free(*((void **)a1 + 29));
    if ( *((uint32_t *)a1 + 30) != 0 )
      sk_free(*((void **)a1 + 30));
    if ( *((uint32_t *)a1 + 48) != 0 )
    {
      ssl_clear_bad_session(a1);
      SSL_SESSION_free(*((void **)a1 + 48));
    }
    ssl_clear_cipher_ctx((void **)a1);
    ssl_clear_hash_ctx((void **)a1 + 33);
    ssl_clear_hash_ctx((void **)a1 + 36);
    if ( *((uint32_t *)a1 + 38) != 0 )
      ssl_cert_free(*((void ***)a1 + 38));
    if ( *((uint32_t *)a1 + 72) != 0 )
      CRYPTO_free(*((void **)a1 + 72));
    if ( *((uint32_t *)a1 + 92) != 0 )
      SSL_CTX_free(*((char **)a1 + 92));
    if ( *((uint32_t *)a1 + 82) != 0 )
      CRYPTO_free(*((void **)a1 + 82));
    if ( *((uint32_t *)a1 + 84) != 0 )
      CRYPTO_free(*((void **)a1 + 84));
    if ( *((uint32_t *)a1 + 85) != 0 )
      CRYPTO_free(*((void **)a1 + 85));
    if ( *((uint32_t *)a1 + 77) != 0 )
      sk_pop_free(*((void **)a1 + 77), (int)(uintptr_t)(X509_EXTENSION_free));
    if ( *((uint32_t *)a1 + 76) != 0 )
      sk_pop_free(*((void **)a1 + 76), (int)(uintptr_t)(OCSP_RESPID_free));
    if ( *((uint32_t *)a1 + 78) != 0 )
      CRYPTO_free(*((void **)a1 + 78));
    if ( *((uint32_t *)a1 + 62) != 0 )
      sk_pop_free(*((void **)a1 + 62), (int)(uintptr_t)(X509_NAME_free));
    v3 = *((uint32_t *)a1 + 2);
    if ( v3 != 0 )
      (*(void (**)(char *))(v3 + 12))(a1);
    if ( *((uint32_t *)a1 + 57) != 0 )
      SSL_CTX_free(*((char **)a1 + 57));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_clear  (binary VA: 0x12fd940)
// Original: SSL_clear
// ----------------------------------------------------------------------------
bool SSL_clear(int a1)
{
  int v1;
  bool v2;
  int v3;
  void *v4;
  int v5;
  int v6;
  int v8;

  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    if ( ssl_clear_bad_session(a1) != 0 )
    {
      SSL_SESSION_free(*(void **)(a1 + 192));
      *(uint32_t *)(a1 + 192) = 0;
    }
    v1 = *(uint32_t *)(a1 + 40);
    *(uint32_t *)(a1 + 212) = 0;
    *(uint32_t *)(a1 + 108) = 0;
    *(uint32_t *)(a1 + 48) = 0;
    if ( v1 == 0 )
    {
      v2 = *(uint32_t *)(a1 + 36) == 0;
      *(uint32_t *)(a1 + 4) = 0;
      *(uint32_t *)(a1 + 52) = v2 ? 20480 : 24576;
      v3 = **(uint32_t **)(a1 + 8);
      *(uint32_t *)(a1 + 24) = 1;
      *(uint32_t *)a1 = v3;
      *(uint32_t *)(a1 + 272) = v3;
      v4 = *(void **)(a1 + 60);
      *(uint32_t *)(a1 + 56) = 240;
      if ( v4 != nullptr )
      {
        BUF_MEM_free(v4);
        *(uint32_t *)(a1 + 60) = 0;
      }
      ssl_clear_cipher_ctx((void **)a1);
      ssl_clear_hash_ctx((void **)(a1 + 132));
      ssl_clear_hash_ctx((void **)(a1 + 144));
      v5 = *(uint32_t *)(a1 + 28);
      *(uint32_t *)(a1 + 268) = 0;
      if ( v5 != 0 )
      {
        v6 = *(uint32_t *)(a1 + 8);
      }
      else
      {
        v6 = *(uint32_t *)(a1 + 8);
        if ( *(uint32_t *)(a1 + 192) == 0 && v6 != **(uint32_t **)(a1 + 228) )
        {
          (*(void (**)(int))(v6 + 12))(a1);
          v8 = **(uint32_t **)(a1 + 228);
          *(uint32_t *)(a1 + 8) = v8;
          return (*(int (**)(int))(v8 + 4))(a1) != 0;
        }
      }
      (*(void (**)(int))(v6 + 8))(a1);
      return true;
    }
    ERR_put_error(20, 164, 68, &unk_1B15112, 0);
    return false;
  }
  else
  {
    ERR_put_error(20, 164, 188, &unk_1B15112, 0);
    return false;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_new  (binary VA: 0x12fdb00)
// Original: SSL_new
// ----------------------------------------------------------------------------
int SSL_new(int *a1)
{
  int v1;
  int v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;

  if ( a1 == nullptr )
  {
    v2 = 0;
    ERR_put_error(20, 186, 195, &unk_1B15112, 0);
    return v2;
  }
  if ( *a1 == 0 )
  {
    v2 = 0;
    ERR_put_error(20, 186, 228, &unk_1B15112, 0);
    return v2;
  }
  v1 = (int)(uintptr_t)(CRYPTO_malloc(0x174u, (int)(uintptr_t)(&unk_1B15112), 0));
  v2 = v1;
  if ( v1 != 0 )
  {
    v3 = (uint16_t *)v1;
    v4 = 372;
    if ( (v1 & 1) != 0 )
    {
      *(uint8_t *)v1 = 0;
      v3 = (uint16_t *)(v1 + 1);
      LOBYTE(v4) = 115;
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
      {
LABEL_10:
        *(uint32_t *)(v1 + 256) = a1[41];
        *(uint32_t *)(v1 + 260) = a1[42];
        *(uint32_t *)(v1 + 264) = a1[43];
        if ( a1[44] != 0 )
        {
          v6 = ssl_cert_dup((uint32_t *)a1[44]);
          *(uint32_t *)(v2 + 152) = v6;
          if ( v6 == 0 )
          {
LABEL_22:
            if ( *(uint32_t *)(v2 + 228) != 0 )
              SSL_CTX_free(*(char **)(v2 + 228));
            CRYPTO_free((void *)v2);
            goto LABEL_25;
          }
        }
        else
        {
          *(uint32_t *)(v1 + 152) = 0;
        }
        *(uint32_t *)(v2 + 96) = a1[45];
        *(uint32_t *)(v2 + 100) = a1[46];
        *(uint32_t *)(v2 + 104) = a1[47];
        *(uint32_t *)(v2 + 200) = a1[48];
        v7 = a1[49];
        *(uint32_t *)(v2 + 156) = v7;
        if ( v7 > 0x20 )
          OpenSSLDie(&unk_1B15112, 0, "s->sid_ctx_length <= sizeof s->sid_ctx");
        *(uint32_t *)(v2 + 160) = a1[50];
        *(uint32_t *)(v2 + 164) = a1[51];
        *(uint32_t *)(v2 + 168) = a1[52];
        *(uint32_t *)(v2 + 172) = a1[53];
        *(uint32_t *)(v2 + 176) = a1[54];
        *(uint32_t *)(v2 + 180) = a1[55];
        *(uint32_t *)(v2 + 184) = a1[56];
        *(uint32_t *)(v2 + 188) = a1[57];
        *(uint32_t *)(v2 + 204) = a1[58];
        *(uint32_t *)(v2 + 196) = a1[59];
        v8 = (int)(uintptr_t)(X509_VERIFY_PARAM_new());
        *(uint32_t *)(v2 + 112) = v8;
        if ( v8 != 0 )
        {
          X509_VERIFY_PARAM_inherit(v8, a1[60]);
          *(uint32_t *)(v2 + 44) = a1[61];
          *(uint32_t *)(v2 + 276) = a1[62];
          CRYPTO_add_lock(a1 + 24, 1, 12, &unk_1B15112, 0);
          *(uint32_t *)(v2 + 228) = (uint32_t)(uintptr_t)(a1);
          *(uint32_t *)(v2 + 280) = 0;
          *(uint32_t *)(v2 + 284) = 0;
          *(uint32_t *)(v2 + 320) = 0;
          *(uint32_t *)(v2 + 296) = -1;
          *(uint32_t *)(v2 + 300) = 0;
          *(uint32_t *)(v2 + 304) = 0;
          *(uint32_t *)(v2 + 308) = 0;
          *(uint32_t *)(v2 + 312) = 0;
          *(uint32_t *)(v2 + 316) = -1;
          CRYPTO_add_lock(a1 + 24, 1, 12, &unk_1B15112, 0);
          *(uint32_t *)(v2 + 368) = (uint32_t)(uintptr_t)(a1);
          *(uint32_t *)(v2 + 236) = 0;
          v9 = *a1;
          *(uint32_t *)(v2 + 8) = *a1;
          if ( (*(int (**)(int))(v9 + 4))(v2) != 0 )
          {
            *(uint32_t *)(v2 + 252) = 1;
            *(uint32_t *)(v2 + 36) = *(uint32_t *)(*a1 + 16) != (uint32_t)(uintptr_t)(ssl_undefined_function);
            SSL_clear(v2);
            CRYPTO_new_ex_data(1, v2, v2 + 240);
            *(uint32_t *)(v2 + 220) = a1[84];
            *(uint32_t *)(v2 + 224) = a1[85];
            return v2;
          }
        }
        if ( *(uint32_t *)(v2 + 152) != 0 )
          ssl_cert_free(*(void ***)(v2 + 152));
        goto LABEL_22;
      }
    }
    else if ( (v4 & 1) == 0 )
    {
      goto LABEL_10;
    }
    *(uint8_t *)v5 = 0;
    goto LABEL_10;
  }
LABEL_25:
  ERR_put_error(20, 186, 65, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_dup  (binary VA: 0x12fdf50)
// Original: SSL_dup
// ----------------------------------------------------------------------------
int SSL_dup(uint32_t *a1)
{
  int *SSL_CTX;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int ahead;
  int verify_callback;
  int verify_mode;
  int verify_depth;
  int info_callback;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int i;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  char *v23;
  int v24;

  SSL_CTX = (int *)SSL_get_SSL_CTX((int)(uintptr_t)(a1));
  v2 = (uint32_t *)SSL_new(SSL_CTX);
  v3 = (int)(uintptr_t)(v2);
  if ( v2 == nullptr )
    return v3;
  *v2 = *a1;
  v2[1] = a1[1];
  v4 = a1[2];
  *(uint32_t *)(v3 + 8) = v4;
  if ( a1[48] != 0 )
  {
    SSL_copy_session_id(v3, a1);
  }
  else
  {
    (*(void (**)(int))(v4 + 12))(v3);
    v20 = a1[2];
    *(uint32_t *)(v3 + 8) = v20;
    (*(void (**)(int))(v20 + 4))(v3);
    v21 = (uint32_t *)a1[38];
    if ( v21 != nullptr )
    {
      if ( *(uint32_t *)(v3 + 152) != 0 )
      {
        ssl_cert_free(*(void ***)(v3 + 152));
        v21 = (uint32_t *)a1[38];
      }
      v22 = ssl_cert_dup(v21);
      *(uint32_t *)(v3 + 152) = v22;
      if ( v22 == 0 )
        goto LABEL_5;
    }
    SSL_set_session_id_context(v3, a1 + 40, a1[39]);
  }
  *(uint32_t *)(v3 + 256) = a1[64];
  *(uint32_t *)(v3 + 260) = a1[65];
  LOBYTE(v5) = SSL_ctrl(a1, 50, 0, 0);
  SSL_ctrl((uint32_t *)v3, 51, v5, 0);
  ahead = SSL_get_read_ahead((int)(uintptr_t)(a1));
  SSL_set_read_ahead(v3, ahead);
  *(uint32_t *)(v3 + 100) = a1[25];
  *(uint32_t *)(v3 + 104) = a1[26];
  verify_callback = SSL_get_verify_callback((int)(uintptr_t)(a1));
  verify_mode = SSL_get_verify_mode((int)(uintptr_t)(a1));
  SSL_set_verify(v3, verify_mode, verify_callback);
  verify_depth = SSL_get_verify_depth((int)(uintptr_t)(a1));
  SSL_set_verify_depth(v3, verify_depth);
  *(uint32_t *)(v3 + 196) = a1[49];
  info_callback = SSL_get_info_callback((int)(uintptr_t)(a1));
  SSL_set_info_callback(v3, info_callback);
  *(uint32_t *)(v3 + 232) = a1[58];
  if ( CRYPTO_dup_ex_data(1, v3 + 240, a1 + 60) == 0 )
    goto LABEL_5;
  v12 = a1[3];
  if ( v12 != 0 && BIO_ctrl(v12, 12, 0, v3 + 12) == 0 )
    goto LABEL_5;
  v13 = a1[4];
  if ( v13 != 0 )
  {
    if ( v13 == a1[3] )
    {
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 + 12);
      goto LABEL_12;
    }
    if ( BIO_ctrl(v13, 12, 0, v3 + 16) == 0 )
    {
LABEL_5:
      v23 = (char *)v3;
      v3 = 0;
      SSL_free(v23);
      return v3;
    }
  }
LABEL_12:
  *(uint32_t *)(v3 + 24) = a1[6];
  *(uint32_t *)(v3 + 28) = a1[7];
  *(uint32_t *)(v3 + 32) = a1[8];
  *(uint32_t *)(v3 + 36) = a1[9];
  *(uint32_t *)(v3 + 40) = a1[10];
  *(uint32_t *)(v3 + 44) = a1[11];
  *(uint32_t *)(v3 + 48) = a1[12];
  *(uint32_t *)(v3 + 52) = a1[13];
  *(uint32_t *)(v3 + 56) = a1[14];
  *(uint32_t *)(v3 + 68) = 0;
  *(uint32_t *)(v3 + 108) = a1[27];
  X509_VERIFY_PARAM_inherit(*(uint32_t *)(v3 + 112), a1[28]);
  if ( a1[29] != 0 )
  {
    v14 = (int)(uintptr_t)(sk_dup(a1[29]));
    *(uint32_t *)(v3 + 116) = v14;
    if ( v14 == 0 )
      goto LABEL_5;
  }
  if ( a1[30] != 0 )
  {
    v15 = (int)(uintptr_t)(sk_dup(a1[30]));
    *(uint32_t *)(v3 + 120) = v15;
    if ( v15 == 0 )
      goto LABEL_5;
  }
  if ( a1[62] == 0 )
    return v3;
  v16 = (int)(uintptr_t)(sk_dup(a1[62]));
  v17 = v16;
  if ( v16 == 0 )
    goto LABEL_5;
  *(uint32_t *)(v3 + 248) = v16;
  for ( i = 0; i < sk_num(v17); ++i )
  {
    v24 = sk_value(v17, i);
    v19 = X509_NAME_dup(v24);
    if ( sk_set(v17, i, v19) == 0 )
    {
      X509_NAME_free(v24);
      goto LABEL_5;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OBJ_bsearch_ssl_cipher_id  (binary VA: 0x12fe2a0)
// Original: OBJ_bsearch_ssl_cipher_id
// ----------------------------------------------------------------------------
int OBJ_bsearch_ssl_cipher_id(int a1, int a2, int a3)
{
  return OBJ_bsearch(a1, a2, a3, 48, sub_12FA730);
}

// ----------------------------------------------------------------------------
// Function: SSL_get_session  (binary VA: 0x12fe360)
// Original: SSL_get_session
// ----------------------------------------------------------------------------
int SSL_get_session(int a1)
{
  return *(uint32_t *)(a1 + 192);
}

// ----------------------------------------------------------------------------
// Function: SSL_get1_session  (binary VA: 0x12fe370)
// Original: SSL_get1_session
// ----------------------------------------------------------------------------
int SSL_get1_session(int a1)
{
  int v1;

  CRYPTO_lock(9, 14, &unk_1B15112, 0);
  v1 = *(uint32_t *)(a1 + 192);
  if ( v1 != 0 )
    ++*(uint32_t *)(v1 + 164);
  CRYPTO_lock(10, 14, &unk_1B15112, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_get_ex_new_index  (binary VA: 0x12fe400)
// Original: SSL_SESSION_get_ex_new_index
// ----------------------------------------------------------------------------
int SSL_SESSION_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(3, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_set_ex_data  (binary VA: 0x12fe450)
// Original: SSL_SESSION_set_ex_data
// ----------------------------------------------------------------------------
int SSL_SESSION_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data(a1 + 192, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_get_ex_data  (binary VA: 0x12fe490)
// Original: SSL_SESSION_get_ex_data
// ----------------------------------------------------------------------------
int SSL_SESSION_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data(a1 + 192, a2);
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_new  (binary VA: 0x12fe4c0)
// Original: SSL_SESSION_new
// ----------------------------------------------------------------------------
uint32_t * SSL_SESSION_new()
{
  int v0;
  uint32_t *v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  v0 = (int)(uintptr_t)(CRYPTO_malloc(0xF0u, (int)(uintptr_t)(&unk_1B15112), 0));
  v1 = (uint32_t *)v0;
  if ( v0 == 0 )
  {
    ERR_put_error(20, 189, 65, &unk_1B15112, 0);
    return v1;
  }
  v2 = (uint16_t *)v0;
  v3 = 240;
  if ( (v0 & 1) != 0 )
  {
    *(uint8_t *)v0 = 0;
    v2 = (uint16_t *)(v0 + 1);
    LOBYTE(v3) = -17;
  }
  if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
  {
    *v2 = 0;
    v3 -= 2;
    ++v2;
  }
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v4++ = 0;
    if ( (v3 & 1) == 0 )
      goto LABEL_8;
  }
  else if ( (v3 & 1) == 0 )
  {
LABEL_8:
    *(uint32_t *)(v0 + 160) = 1;
    *(uint32_t *)(v0 + 164) = 1;
    *(uint32_t *)(v0 + 168) = 304;
    *(uint32_t *)(v0 + 172) = time(nullptr);
    v1[50] = 0;
    v1[51] = 0;
    v1[44] = 0;
    v1[52] = 0;
    v1[53] = 0;
    v1[54] = 0;
    v1[55] = 0;
    v1[56] = 0;
    CRYPTO_new_ex_data(3, v1, v1 + 48);
    v1[35] = 0;
    v1[36] = 0;
    return v1;
  }
  *(uint8_t *)v4 = 0;
  goto LABEL_8;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_get_id  (binary VA: 0x12fe660)
// Original: SSL_SESSION_get_id
// ----------------------------------------------------------------------------
int SSL_SESSION_get_id(int a1, uint32_t *a2)
{
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 68);
  return a1 + 72;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_free  (binary VA: 0x12fe680)
// Original: SSL_SESSION_free
// ----------------------------------------------------------------------------
void SSL_SESSION_free(char *a1)
{
  void *v1;
  void *v2;

  if ( a1 != nullptr && (int)CRYPTO_add_lock(a1 + 164, -1, 14, &unk_1B15112, 0) <= 0 )
  {
    CRYPTO_free_ex_data(3, a1, a1 + 192);
    OPENSSL_cleanse(a1 + 8, 8u);
    OPENSSL_cleanse(a1 + 20, 0x30u);
    OPENSSL_cleanse(a1 + 72, 0x20u);
    if ( *((uint32_t *)a1 + 38) != 0 )
      ssl_sess_cert_free(*((void ***)a1 + 38));
    if ( *((uint32_t *)a1 + 39) != 0 )
      X509_free(*((uint32_t *)a1 + 39));
    if ( *((uint32_t *)a1 + 47) != 0 )
      sk_free(*((void **)a1 + 47));
    if ( *((uint32_t *)a1 + 52) != 0 )
      CRYPTO_free(*((void **)a1 + 52));
    if ( *((uint32_t *)a1 + 57) != 0 )
      CRYPTO_free(*((void **)a1 + 57));
    v1 = *((void **)a1 + 54);
    *((uint32_t *)a1 + 53) = 0;
    if ( v1 != nullptr )
      CRYPTO_free(v1);
    v2 = *((void **)a1 + 56);
    *((uint32_t *)a1 + 55) = 0;
    if ( v2 != nullptr )
      CRYPTO_free(v2);
    if ( *((uint32_t *)a1 + 35) != 0 )
      CRYPTO_free(*((void **)a1 + 35));
    if ( *((uint32_t *)a1 + 36) != 0 )
      CRYPTO_free(*((void **)a1 + 36));
    OPENSSL_cleanse(a1, 0xF0u);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_remove_session  (binary VA: 0x12fe930)
// Original: SSL_CTX_remove_session
// ----------------------------------------------------------------------------
int SSL_CTX_remove_session(uint32_t *a1, uint32_t *a2)
{
  int v2;
  char *v4;
  uint32_t *v5;
  uint32_t *v6;
  char *v7;
  void (*v8)(uint32_t *, char *);
  uint32_t *v9;
  char *v10;

  v2 = 0;
  if ( a2 != nullptr && a2[17] != 0 )
  {
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    if ( a2 == (uint32_t *)lh_retrieve(a1[4], a2) )
    {
      v4 = (char *)lh_delete(a1[4], a2);
      v5 = (uint32_t *)a2[51];
      if ( v5 != nullptr )
      {
        v9 = (uint32_t *)a2[50];
        if ( v9 != nullptr )
        {
          v6 = a1 + 6;
          if ( v5 == a1 + 7 )
          {
            if ( v9 == v6 )
            {
              a1[6] = 0;
              a1[7] = 0;
            }
            else
            {
              a1[7] = (uint32_t)(uintptr_t)(v9);
              *(uint32_t *)(a2[50] + 204) = (uint32_t)(uintptr_t)(v5);
            }
          }
          else if ( v9 == v6 )
          {
            a1[6] = (uint32_t)(uintptr_t)(v5);
            *(uint32_t *)(a2[51] + 200) = (uint32_t)(uintptr_t)(v9);
          }
          else
          {
            v5[50] = (uint32_t)(uintptr_t)(v9);
            *(uint32_t *)(a2[50] + 204) = a2[51];
          }
          a2[51] = 0;
          a2[50] = 0;
        }
      }
      v10 = v4;
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      v7 = v10;
      *((uint32_t *)v10 + 37) = 1;
      v8 = (void (*)(uint32_t *, char *))a1[11];
      if ( v8 != nullptr )
      {
        v8(a1, v10);
        v7 = v10;
      }
      SSL_SESSION_free(v7);
      return 1;
    }
    else
    {
      CRYPTO_lock(10, 12, &unk_1B15112, 0);
      return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ssl_get_new_session  (binary VA: 0x12feb10)
// Original: ssl_get_new_session
// ----------------------------------------------------------------------------
int ssl_get_new_session(int a1, int a2)
{
  char *v2;
  int result;
  int v4;
  int v5;
  int v6;
  void *v7;
  void *v8;
  size_t v9;
  int v10;
  int (*v11)(int, char *, size_t *);
  int v12;
  void *v13;
  size_t v14;
  size_t v15;
  typedef int (*_g4_t_v16)(int, char *, size_t *);
  typedef size_t _g4_t_v17;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  v2 = (char *)SSL_SESSION_new();
  result = 0;
  if ( v2 != nullptr )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 368) + 36);
    if ( v4 != 0 )
      *((uint32_t *)v2 + 42) = v4;
    else
      *((uint32_t *)v2 + 42) = SSL_get_default_timeout(a1);
    if ( *(uint32_t *)(a1 + 192) != 0 )
    {
      SSL_SESSION_free(*(char **)(a1 + 192));
      *(uint32_t *)(a1 + 192) = 0;
    }
    if ( a2 == 0 )
    {
      *((uint32_t *)v2 + 17) = 0;
      goto LABEL_31;
    }
    v5 = *(uint32_t *)a1;
    if ( *(uint32_t *)a1 == 2 )
    {
      *(uint32_t *)v2 = 2;
      *((uint32_t *)v2 + 17) = 16;
      if ( *(uint32_t *)(a1 + 320) != 0 )
      {
LABEL_14:
        *((uint32_t *)v2 + 17) = 0;
LABEL_15:
        if ( *(uint32_t *)(a1 + 288) != 0 )
        {
          v6 = (int)(uintptr_t)(BUF_strdup(*(char **)(a1 + 288)));
          *((uint32_t *)v2 + 52) = v6;
          if ( v6 == 0 )
            goto LABEL_27;
        }
        if ( *(uint32_t *)(a1 + 328) != 0 )
        {
          if ( *((uint32_t *)v2 + 54) != 0 )
            CRYPTO_free(*((void **)v2 + 54));
          v7 = (void *)CRYPTO_malloc(*(uint32_t *)(a1 + 324), (int)(uintptr_t)(&unk_1B15112), 0);
          *((uint32_t *)v2 + 54) = (uint32_t)(uintptr_t)(v7);
          if ( v7 == nullptr )
            goto LABEL_46;
          *((uint32_t *)v2 + 53) = *(uint32_t *)(a1 + 324);
          memcpy(v7, *(const void **)(a1 + 328), *(uint32_t *)(a1 + 324));
        }
        if ( *(uint32_t *)(a1 + 336) != 0 )
        {
          if ( *((uint32_t *)v2 + 56) != 0 )
            CRYPTO_free(*((void **)v2 + 56));
          v8 = (void *)CRYPTO_malloc(*(uint32_t *)(a1 + 332), (int)(uintptr_t)(&unk_1B15112), 0);
          *((uint32_t *)v2 + 56) = (uint32_t)(uintptr_t)(v8);
          if ( v8 != nullptr )
          {
            *((uint32_t *)v2 + 55) = *(uint32_t *)(a1 + 332);
            memcpy(v8, *(const void **)(a1 + 336), *(uint32_t *)(a1 + 332));
            v9 = *(uint32_t *)(a1 + 156);
            if ( v9 > 0x20 )
            {
LABEL_27:
              ERR_put_error(20, 181, 68, &unk_1B15112, 0);
LABEL_28:
              SSL_SESSION_free(v2);
              return 0;
            }
LABEL_32:
            memcpy(v2 + 108, (const void *)(a1 + 160), v9);
            *((uint32_t *)v2 + 26) = *(uint32_t *)(a1 + 156);
            v10 = *(uint32_t *)a1;
            *(uint32_t *)(a1 + 192) = (uint32_t)(uintptr_t)(v2);
            *(uint32_t *)v2 = v10;
            *((uint32_t *)v2 + 40) = 0;
            return 1;
          }
LABEL_46:
          ERR_put_error(20, 181, 65, &unk_1B15112, 0);
          goto LABEL_28;
        }
LABEL_31:
        v9 = *(uint32_t *)(a1 + 156);
        if ( v9 > 0x20 )
          goto LABEL_27;
        goto LABEL_32;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 768:
          *(uint32_t *)v2 = 768;
          *((uint32_t *)v2 + 17) = 32;
          break;
        case 769:
          *(uint32_t *)v2 = 769;
          *((uint32_t *)v2 + 17) = 32;
          break;
        case 256:
          *(uint32_t *)v2 = 256;
          *((uint32_t *)v2 + 17) = 32;
          break;
        case 65279:
          *(uint32_t *)v2 = 65279;
          *((uint32_t *)v2 + 17) = 32;
          break;
        default:
          ERR_put_error(20, 181, 259, &unk_1B15112, 0);
          goto LABEL_28;
      }
      if ( *(uint32_t *)(a1 + 320) != 0 )
        goto LABEL_14;
    }
    CRYPTO_lock(5, 12, &unk_1B15112, 0);
    v11 = *(int (**)(int, char *, size_t *))(a1 + 196);
    if ( v11 == nullptr )
    {
      v11 = *(int (**)(int, char *, size_t *))(*(uint32_t *)(a1 + 368) + 236);
      if ( v11 == nullptr )
        v11 = (int (*)(int, char *, size_t *))sub_12FE2F0;
    }
    v16 = v11;
    CRYPTO_lock(6, 12, &unk_1B15112, 0);
    v17 = *((uint32_t *)v2 + 17);
    v12 = v16(a1, v2 + 72, &v17);
    v13 = v2 + 72;
    if ( v12 == 0 )
    {
      ERR_put_error(20, 181, 301, &unk_1B15112, 0);
      goto LABEL_28;
    }
    v14 = v17;
    if ( v17 == 0 || (v15 = *((uint32_t *)v2 + 17), v17 > v15) )
    {
      ERR_put_error(20, 181, 303, &unk_1B15112, 0);
      goto LABEL_28;
    }
    if ( v17 < v15 && *(uint32_t *)a1 == 2 )
    {
      memset(&v2[v17 + 72], 0, v15 - v17);
      v14 = *((uint32_t *)v2 + 17);
      v13 = v2 + 72;
    }
    else
    {
      *((uint32_t *)v2 + 17) = v17;
    }
    if ( SSL_has_matching_session_id((uint32_t *)a1, v13, v14) )
    {
      ERR_put_error(20, 181, 302, &unk_1B15112, 0);
      goto LABEL_28;
    }
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_add_session  (binary VA: 0x12fefc0)
// Original: SSL_CTX_add_session
// ----------------------------------------------------------------------------
int SSL_CTX_add_session(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  void (*v17)(uint32_t *, int);
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;

  CRYPTO_add_lock(a2 + 164, 1, 14, &unk_1B15112, 0);
  CRYPTO_lock(9, 12, &unk_1B15112, 0);
  v2 = (int)(uintptr_t)(lh_insert(a1[4], a2));
  if ( v2 == a2 || v2 == 0 )
  {
    if ( v2 != 0 )
    {
      v3 = 0;
      SSL_SESSION_free((char *)v2);
      goto LABEL_4;
    }
    v20 = a1 + 6;
  }
  else
  {
    v5 = *(uint32_t **)(v2 + 204);
    v20 = a1 + 6;
    if ( v5 != nullptr )
    {
      v18 = *(uint32_t **)(v2 + 200);
      if ( v18 != nullptr )
      {
        if ( v5 == a1 + 7 )
        {
          if ( v18 == v20 )
          {
            a1[6] = 0;
            a1[7] = 0;
          }
          else
          {
            a1[7] = (uint32_t)(uintptr_t)(v18);
            *(uint32_t *)(*(uint32_t *)(v2 + 200) + 204) = (uint32_t)(uintptr_t)(v5);
          }
        }
        else if ( v18 == v20 )
        {
          a1[6] = (uint32_t)(uintptr_t)(v5);
          *(uint32_t *)(*(uint32_t *)(v2 + 204) + 200) = (uint32_t)(uintptr_t)(v20);
        }
        else
        {
          v5[50] = (uint32_t)(uintptr_t)(v18);
          *(uint32_t *)(*(uint32_t *)(v2 + 200) + 204) = *(uint32_t *)(v2 + 204);
        }
        *(uint32_t *)(v2 + 204) = 0;
        *(uint32_t *)(v2 + 200) = 0;
      }
    }
    SSL_SESSION_free((char *)v2);
  }
  v6 = *(uint32_t **)(a2 + 204);
  if ( v6 != nullptr )
  {
    v7 = *(uint32_t **)(a2 + 200);
    if ( v7 != nullptr )
    {
      if ( v6 == a1 + 7 )
      {
        if ( v7 == v20 )
        {
          a1[6] = 0;
          a1[7] = 0;
        }
        else
        {
          a1[7] = (uint32_t)(uintptr_t)(v7);
          *(uint32_t *)(*(uint32_t *)(a2 + 200) + 204) = (uint32_t)(uintptr_t)(v6);
        }
      }
      else if ( v7 == v20 )
      {
        a1[6] = (uint32_t)(uintptr_t)(v6);
        *(uint32_t *)(*(uint32_t *)(a2 + 204) + 200) = (uint32_t)(uintptr_t)(v20);
      }
      else
      {
        v6[50] = (uint32_t)(uintptr_t)(v7);
        *(uint32_t *)(*(uint32_t *)(a2 + 200) + 204) = *(uint32_t *)(a2 + 204);
      }
      *(uint32_t *)(a2 + 204) = 0;
      *(uint32_t *)(a2 + 200) = 0;
    }
  }
  v8 = a1[6];
  if ( v8 != 0 )
  {
    *(uint32_t *)(a2 + 204) = v8;
    *(uint32_t *)(v8 + 200) = a2;
    *(uint32_t *)(a2 + 200) = (uint32_t)(uintptr_t)(v20);
    a1[6] = a2;
  }
  else
  {
    a1[6] = a2;
    a1[7] = a2;
    *(uint32_t *)(a2 + 200) = (uint32_t)(uintptr_t)(v20);
    *(uint32_t *)(a2 + 204) = (uint32_t)(uintptr_t)(a1 + 7);
  }
  LOBYTE(v9) = SSL_CTX_ctrl(a1, 43, 0, 0);
  v21 = a1 + 7;
  if ( v9 > 0 )
  {
    while ( 1 )
    {
      LOBYTE(v10) = SSL_CTX_ctrl(a1, 20, 0, 0);
      v11 = v10;
      LOBYTE(v12) = SSL_CTX_ctrl(a1, 43, 0, 0);
      if ( v11 <= v12 )
        break;
      v13 = (uint32_t *)a1[7];
      if ( v13 == nullptr || v13[17] == 0 || v13 != (uint32_t *)lh_retrieve(a1[4], a1[7]) )
        break;
      v14 = lh_delete(a1[4], v13);
      v15 = (uint32_t *)v13[51];
      if ( v15 != nullptr )
      {
        v16 = (uint32_t *)v13[50];
        if ( v16 != nullptr )
        {
          if ( v15 == v21 )
          {
            if ( v16 == v20 )
            {
              a1[6] = 0;
              a1[7] = 0;
            }
            else
            {
              a1[7] = (uint32_t)(uintptr_t)(v16);
              *(uint32_t *)(v13[50] + 204) = (uint32_t)(uintptr_t)(v21);
            }
          }
          else if ( v16 == v20 )
          {
            a1[6] = (uint32_t)(uintptr_t)(v15);
            *(uint32_t *)(v13[51] + 200) = (uint32_t)(uintptr_t)(v20);
          }
          else
          {
            v15[50] = (uint32_t)(uintptr_t)(v16);
            *(uint32_t *)(v13[50] + 204) = v13[51];
          }
          v13[51] = 0;
          v13[50] = 0;
        }
      }
      *(uint32_t *)(v14 + 148) = 1;
      v17 = (void (*)(uint32_t *, int))a1[11];
      if ( v17 != nullptr )
      {
        v19 = v14;
        v17(a1, v14);
        v14 = v19;
      }
      SSL_SESSION_free((char *)v14);
      ++a1[21];
    }
  }
  v3 = 1;
LABEL_4:
  CRYPTO_lock(10, 12, &unk_1B15112, 0);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ssl_get_prev_session  (binary VA: 0x12ff3c0)
// Original: ssl_get_prev_session
// ----------------------------------------------------------------------------
int ssl_get_prev_session(int a1, void *src, int n, int a4)
{
  int v4;
  int v6;
  int v7;
  int v8;
  size_t v9;
  int v10;
  int v11;
  time_t v12;
  uint32_t *v13;
  int v14;
  bool v15; // cc
  int v16;
  int v17;
  int (*v18)(int, void *, int, int *);
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  typedef int *_g4_t_v23;
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[18];
  typedef uint8_t _g4_t_dest[168];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v25)) > _g4_s2 ? (28u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v26)) > _g4_s3 ? (32u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (104u + sizeof(_g4_t_dest)) > _g4_s4 ? (104u + sizeof(_g4_t_dest)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 104u);

  v4 = 0;
  v24[0] = 0;
  if ( n > 32 )
    return v4;
  v6 = tls1_process_ticket(a1, src, n, a4, (int)(uintptr_t)(v24));
  v7 = v24[0];
  if ( v6 == -1 )
  {
    v8 = 1;
    goto LABEL_6;
  }
  if ( v6 == 0 )
  {
LABEL_5:
    v8 = 0;
    goto LABEL_6;
  }
  if ( n == 0 )
  {
    if ( v24[0] == 0 )
      return 0;
LABEL_12:
    v9 = *(uint32_t *)(v7 + 104);
    v8 = 0;
    if ( v9 != *(uint32_t *)(a1 + 156) )
      goto LABEL_6;
    v23 = (int *)v7;
    v10 = memcmp((const void *)(v7 + 108), (const void *)(a1 + 160), v9);
    v7 = (int)(uintptr_t)(v23);
    if ( v10 != 0 )
      goto LABEL_6;
    if ( (*(uint8_t *)(a1 + 200) & 1) != 0 && v9 == 0 )
    {
      LOWORD(v8) = 1;
      ERR_put_error(20, 217, 277, &unk_1B15112, 0);
      v7 = v24[0];
    }
    else
    {
      if ( v23[45] == 0 )
      {
        v21 = v23[46];
        HIBYTE(v26[0]) = v21;
        LOBYTE(v26[0]) = HIBYTE(v21);
        BYTE1(v26[0]) = BYTE2(v21);
        BYTE2(v26[0]) = BYTE1(v21);
        v22 = *v23 <= 767 ? (uint32_t *)((char *)v26 + 1) : (uint32_t *)((char *)v26 + 2);
        v23[45] = (*(int (**)(uint32_t *))(*(uint32_t *)(a1 + 8) + 72))(v22);
        v7 = v24[0];
        if ( *(uint32_t *)(v24[0] + 180) == 0 )
          goto LABEL_5;
      }
      v11 = *(uint32_t *)(v7 + 168);
      v12 = time(nullptr);
      v13 = (uint32_t *)v24[0];
      v14 = a1;
      v15 = v11 < v12 - *(uint32_t *)(v24[0] + 172);
      v16 = *(uint32_t *)(a1 + 368);
      if ( !v15 )
      {
        ++*(uint32_t *)(v16 + 88);
        if ( *(uint32_t *)(a1 + 192) != 0 )
        {
          SSL_SESSION_free(*(char **)(a1 + 192));
          v13 = (uint32_t *)v24[0];
          v14 = a1;
        }
        *(uint32_t *)(v14 + 192) = (uint32_t)(uintptr_t)(v13);
        *(uint32_t *)(v14 + 236) = v13[40];
        return 1;
      }
      ++*(uint32_t *)(v16 + 80);
      v8 = 0;
      SSL_CTX_remove_session(*(uint32_t **)(a1 + 368), v13);
      v7 = v24[0];
    }
LABEL_6:
    if ( v7 != 0 )
      SSL_SESSION_free((char *)v7);
    v4 = -1;
    if ( v8 != 0 )
      return v4;
    return 0;
  }
  if ( v24[0] != 0 )
    goto LABEL_12;
  if ( (*(uint8_t *)(*(uint32_t *)(a1 + 368) + 33) & 1) == 0 )
  {
    v26[0] = *(uint32_t *)a1;
    v26[17] = n;
    memcpy(dest, src, n);
    CRYPTO_lock(5, 12, &unk_1B15112, 0);
    v17 = (int)(uintptr_t)(lh_retrieve(*(uint32_t *)(*(uint32_t *)(a1 + 368) + 16), v26));
    v24[0] = v17;
    if ( v17 != 0 )
      CRYPTO_add_lock(v17 + 164, 1, 14, &unk_1B15112, 0);
    CRYPTO_lock(6, 12, &unk_1B15112, 0);
    v7 = v24[0];
  }
  if ( v7 != 0 )
    goto LABEL_12;
  v4 = 0;
  v25 = 1;
  v24[0] = 0;
  ++*(uint32_t *)(*(uint32_t *)(a1 + 368) + 76);
  v18 = *(int (**)(int, void *, int, int *))(*(uint32_t *)(a1 + 368) + 48);
  if ( v18 == nullptr )
    return v4;
  v7 = v18(a1, src, n, &v25);
  v24[0] = v7;
  if ( v7 == 0 )
    return v4;
  v19 = a1;
  ++*(uint32_t *)(*(uint32_t *)(a1 + 368) + 92);
  if ( v25 != 0 )
  {
    CRYPTO_add_lock(v7 + 164, 1, 14, &unk_1B15112, 0);
    v7 = v24[0];
    v19 = a1;
  }
  v20 = *(uint32_t *)(v19 + 368);
  if ( (*(uint8_t *)(v20 + 33) & 2) == 0 )
  {
    SSL_CTX_add_session((uint32_t *)v20, v7);
    v7 = v24[0];
  }
  if ( v7 != 0 )
    goto LABEL_12;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_session  (binary VA: 0x12ff7f0)
// Original: SSL_set_session
// ----------------------------------------------------------------------------
bool SSL_set_session(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  bool result;
  int v5;

  if ( a2 != nullptr )
  {
    v2 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 228) + 92))(*a2);
    if ( v2 == 0 )
    {
      v2 = (*(int (**)(uint32_t))(*(uint32_t *)(a1 + 8) + 92))(*a2);
      if ( v2 == 0 )
      {
        ERR_put_error(20, 195, 240, &unk_1B15112, 0);
        return false;
      }
    }
    if ( *(uint32_t *)(a1 + 8) != v2 )
    {
      v3 = SSL_set_ssl_method(a1, v2);
      result = false;
      if ( v3 == 0 )
        return result;
      v5 = *(uint32_t *)(*(uint32_t *)(a1 + 228) + 36);
      if ( v5 != 0 )
        a2[42] = v5;
      else
        a2[42] = SSL_get_default_timeout(a1);
    }
    CRYPTO_add_lock(a2 + 41, 1, 14, &unk_1B15112, 0);
    if ( *(uint32_t *)(a1 + 192) != 0 )
      SSL_SESSION_free(*(char **)(a1 + 192));
    *(uint32_t *)(a1 + 192) = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(a1 + 236) = a2[40];
    return true;
  }
  else
  {
    if ( *(uint32_t *)(a1 + 192) != 0 )
    {
      SSL_SESSION_free(*(char **)(a1 + 192));
      *(uint32_t *)(a1 + 192) = 0;
    }
    result = true;
    if ( *(uint32_t *)(a1 + 8) != **(uint32_t **)(a1 + 228) )
      return SSL_set_ssl_method(a1, **(uint32_t **)(a1 + 228)) != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_set_timeout  (binary VA: 0x12ff980)
// Original: SSL_SESSION_set_timeout
// ----------------------------------------------------------------------------
int SSL_SESSION_set_timeout(int a1, int a2)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 168) = a2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_get_timeout  (binary VA: 0x12ff9a0)
// Original: SSL_SESSION_get_timeout
// ----------------------------------------------------------------------------
int SSL_SESSION_get_timeout(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 168);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_get_time  (binary VA: 0x12ff9c0)
// Original: SSL_SESSION_get_time
// ----------------------------------------------------------------------------
int SSL_SESSION_get_time(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 172);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_SESSION_set_time  (binary VA: 0x12ff9e0)
// Original: SSL_SESSION_set_time
// ----------------------------------------------------------------------------
int SSL_SESSION_set_time(int a1, int a2)
{
  int result;

  result = a2;
  if ( a1 == 0 )
    return 0;
  *(uint32_t *)(a1 + 172) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_timeout  (binary VA: 0x12ffa00)
// Original: SSL_CTX_set_timeout
// ----------------------------------------------------------------------------
int SSL_CTX_set_timeout(int a1, int a2)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    result = *(uint32_t *)(a1 + 36);
    *(uint32_t *)(a1 + 36) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_timeout  (binary VA: 0x12ffa20)
// Original: SSL_CTX_get_timeout
// ----------------------------------------------------------------------------
int SSL_CTX_get_timeout(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 36);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_session_secret_cb  (binary VA: 0x12ffa30)
// Original: SSL_set_session_secret_cb
// ----------------------------------------------------------------------------
int SSL_set_session_secret_cb(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 360) = a2;
    *(uint32_t *)(a1 + 364) = a3;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_session_ticket_ext_cb  (binary VA: 0x12ffa60)
// Original: SSL_set_session_ticket_ext_cb
// ----------------------------------------------------------------------------
int SSL_set_session_ticket_ext_cb(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 352) = a2;
    *(uint32_t *)(a1 + 356) = a3;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_set_session_ticket_ext  (binary VA: 0x12ffa90)
// Original: SSL_set_session_ticket_ext
// ----------------------------------------------------------------------------
int SSL_set_session_ticket_ext(int a1, void *src, size_t n)
{
  int result;
  uint16_t *v4;

  result = 0;
  if ( *(int *)a1 > 768 )
  {
    if ( *(uint32_t *)(a1 + 348) != 0 )
    {
      CRYPTO_free(*(void **)(a1 + 348));
      *(uint32_t *)(a1 + 348) = 0;
    }
    v4 = (uint16_t *)CRYPTO_malloc(n + 8, (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(a1 + 348) = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
    {
      if ( src != nullptr )
      {
        *v4 = n;
        *(uint32_t *)(*(uint32_t *)(a1 + 348) + 4) = *(uint32_t *)(a1 + 348) + 8;
        memcpy(*(void **)(*(uint32_t *)(a1 + 348) + 4), src, n);
      }
      else
      {
        *v4 = 0;
        *(uint32_t *)(*(uint32_t *)(a1 + 348) + 4) = 0;
      }
      return 1;
    }
    else
    {
      ERR_put_error(20, 294, 65, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_flush_sessions  (binary VA: 0x12ffbb0)
// Original: SSL_CTX_flush_sessions
// ----------------------------------------------------------------------------
int SSL_CTX_flush_sessions(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  typedef uint32_t _g4_t_v5[2];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  v5[0] = a1;
  v6 = *(uint32_t *)(a1 + 16);
  result = v6;
  if ( v6 != 0 )
  {
    v5[1] = a2;
    CRYPTO_lock(9, 12, &unk_1B15112, 0);
    v3 = v6;
    v4 = *(uint32_t *)(v6 + 32);
    *(uint32_t *)(v6 + 32) = 0;
    lh_doall_arg(v3, sub_12FE800, v5);
    *(uint32_t *)(v6 + 32) = v4;
    return ((CRYPTO_lock(10, 12, &unk_1B15112, 0)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_clear_bad_session  (binary VA: 0x12ffc70)
// Original: ssl_clear_bad_session
// ----------------------------------------------------------------------------
int ssl_clear_bad_session(int a1)
{
  int v1;

  v1 = 0;
  if ( *(uint32_t *)(a1 + 192) != 0
    && (*(uint8_t *)(a1 + 48) & 1) == 0
    && (SSL_state(a1) & 0x3000) == 0
    && (SSL_state(a1) & 0x4000) == 0 )
  {
    LOWORD(v1) = 1;
    SSL_CTX_remove_session(*(uint32_t **)(a1 + 228), *(uint32_t **)(a1 + 192));
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sess_set_new_cb  (binary VA: 0x12ffcf0)
// Original: SSL_CTX_sess_set_new_cb
// ----------------------------------------------------------------------------
int SSL_CTX_sess_set_new_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 40) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sess_get_new_cb  (binary VA: 0x12ffd00)
// Original: SSL_CTX_sess_get_new_cb
// ----------------------------------------------------------------------------
int SSL_CTX_sess_get_new_cb(int a1)
{
  return *(uint32_t *)(a1 + 40);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sess_set_remove_cb  (binary VA: 0x12ffd10)
// Original: SSL_CTX_sess_set_remove_cb
// ----------------------------------------------------------------------------
int SSL_CTX_sess_set_remove_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 44) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sess_get_remove_cb  (binary VA: 0x12ffd20)
// Original: SSL_CTX_sess_get_remove_cb
// ----------------------------------------------------------------------------
int SSL_CTX_sess_get_remove_cb(int a1)
{
  return *(uint32_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sess_set_get_cb  (binary VA: 0x12ffd30)
// Original: SSL_CTX_sess_set_get_cb
// ----------------------------------------------------------------------------
int SSL_CTX_sess_set_get_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 48) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_sess_get_get_cb  (binary VA: 0x12ffd40)
// Original: SSL_CTX_sess_get_get_cb
// ----------------------------------------------------------------------------
int SSL_CTX_sess_get_get_cb(int a1)
{
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_info_callback  (binary VA: 0x12ffd50)
// Original: SSL_CTX_set_info_callback
// ----------------------------------------------------------------------------
int SSL_CTX_set_info_callback(int a1, int a2)
{
  *(uint32_t *)(a1 + 156) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_info_callback  (binary VA: 0x12ffd70)
// Original: SSL_CTX_get_info_callback
// ----------------------------------------------------------------------------
int SSL_CTX_get_info_callback(int a1)
{
  return *(uint32_t *)(a1 + 156);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_client_cert_cb  (binary VA: 0x12ffd80)
// Original: SSL_CTX_set_client_cert_cb
// ----------------------------------------------------------------------------
int SSL_CTX_set_client_cert_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 116) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_get_client_cert_cb  (binary VA: 0x12ffd90)
// Original: SSL_CTX_get_client_cert_cb
// ----------------------------------------------------------------------------
int SSL_CTX_get_client_cert_cb(int a1)
{
  return *(uint32_t *)(a1 + 116);
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_cookie_generate_cb  (binary VA: 0x12ffda0)
// Original: SSL_CTX_set_cookie_generate_cb
// ----------------------------------------------------------------------------
int SSL_CTX_set_cookie_generate_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 120) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_set_cookie_verify_cb  (binary VA: 0x12ffdb0)
// Original: SSL_CTX_set_cookie_verify_cb
// ----------------------------------------------------------------------------
int SSL_CTX_set_cookie_verify_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 124) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_SSL_SESSION  (binary VA: 0x12ffdc0)
// Original: PEM_read_bio_SSL_SESSION
// ----------------------------------------------------------------------------
int PEM_read_bio_SSL_SESSION(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)static_cast<int *(*)(int **, uint32_t *, int)>(d2i_SSL_SESSION), "SSL SESSION PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_SSL_SESSION  (binary VA: 0x12ffe10)
// Original: PEM_read_SSL_SESSION
// ----------------------------------------------------------------------------
int PEM_read_SSL_SESSION(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)static_cast<int *(*)(int **, uint32_t *, int)>(d2i_SSL_SESSION), (char *)"SSL SESSION PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_SSL_SESSION  (binary VA: 0x12ffe60)
// Original: PEM_write_bio_SSL_SESSION
// ----------------------------------------------------------------------------
int PEM_write_bio_SSL_SESSION(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int *, uint32_t *))i2d_SSL_SESSION), "SSL SESSION PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_SSL_SESSION  (binary VA: 0x12ffed0)
// Original: PEM_write_SSL_SESSION
// ----------------------------------------------------------------------------
int PEM_write_SSL_SESSION(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int *, uint32_t *))i2d_SSL_SESSION), "SSL SESSION PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: tls1_default_timeout  (binary VA: 0x13002b0)
// Original: tls1_default_timeout
// ----------------------------------------------------------------------------
int tls1_default_timeout()
{
  return 7200;
}

// ----------------------------------------------------------------------------
// Function: tls1_new  (binary VA: 0x13002c0)
// Original: tls1_new
// ----------------------------------------------------------------------------
int tls1_new(int a1)
{
  int v1;
  int v2;

  v1 = ssl3_new(a1);
  v2 = 0;
  if ( v1 != 0 )
  {
    (*(void (**)(int))(*(uint32_t *)(a1 + 8) + 8))(a1);
    return 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: tls1_free  (binary VA: 0x1300310)
// Original: tls1_free
// ----------------------------------------------------------------------------
void tls1_free(int a1)
{
  if ( *(uint32_t *)(a1 + 348) != 0 )
    CRYPTO_free(*(void **)(a1 + 348));
  ssl3_free(a1);
}

// ----------------------------------------------------------------------------
// Function: tls1_clear  (binary VA: 0x1300360)
// Original: tls1_clear
// ----------------------------------------------------------------------------
int tls1_clear(uint32_t *a1)
{
  int result;

  result = ssl3_clear(a1);
  *a1 = 769;
  return result;
}

// ----------------------------------------------------------------------------
// Function: tls1_ec_curve_id2nid  (binary VA: 0x13003a0)
// Original: tls1_ec_curve_id2nid
// ----------------------------------------------------------------------------
int tls1_ec_curve_id2nid(int a1)
{
  int result;

  result = 0;
  if ( (unsigned int)(a1 - 1) <= 0x18 )
    return dword_1CFB0C0[a1 - 1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: tls1_ec_nid2curve_id  (binary VA: 0x13003d0)
// Original: tls1_ec_nid2curve_id
// ----------------------------------------------------------------------------
char tls1_ec_nid2curve_id(int a1)
{
  char result;

  result = 2;
  if ( a1 != 722 )
  {
    if ( a1 <= 722 )
    {
      result = 18;
      if ( a1 != 711 )
      {
        if ( a1 <= 711 )
        {
          result = 15;
          if ( a1 != 708 )
          {
            if ( a1 <= 708 )
            {
              result = 19;
              if ( a1 != 409 )
              {
                result = 23;
                if ( a1 != 415 )
                  return 0;
              }
            }
            else
            {
              result = 16;
              if ( a1 != 709 )
                return 17;
            }
          }
        }
        else
        {
          result = 22;
          if ( a1 != 714 )
          {
            if ( a1 <= 714 )
            {
              result = 20;
              if ( a1 != 712 )
                return 21;
            }
            else
            {
              result = 25;
              if ( a1 != 716 )
              {
                result = 24;
                if ( a1 >= 716 )
                {
                  result = 1;
                  if ( a1 != 721 )
                    return 0;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      result = 8;
      if ( a1 == 728 )
        return result;
      if ( a1 <= 728 )
      {
        result = 5;
        if ( a1 != 725 )
        {
          if ( a1 <= 725 )
          {
            result = 3;
            if ( a1 != 723 )
              return 4;
          }
          else
          {
            result = 6;
            if ( a1 != 726 )
              return 7;
          }
        }
      }
      else
      {
        result = 11;
        if ( a1 == 731 )
          return result;
        if ( a1 <= 731 )
        {
          result = 9;
          if ( a1 != 729 )
            return 10;
        }
        else
        {
          result = 13;
          if ( a1 != 733 )
          {
            result = 12;
            if ( a1 >= 733 )
            {
              result = 14;
              if ( a1 != 734 )
                return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_add_clienthello_tlsext  (binary VA: 0x1300540)
// Original: ssl_add_clienthello_tlsext
// ----------------------------------------------------------------------------
char * ssl_add_clienthello_tlsext(int a1, uint8_t *a2, unsigned int a3)
{
  uint8_t *v3;
  uint8_t *v4;
  const char *v5;
  size_t v6;
  unsigned int v7;
  uint8_t *v8;
  char *v9;
  size_t v10;
  const void *v11;
  unsigned int v12;
  uint8_t *v13;
  uint8_t *v14;
  const void *v15;
  char v16;
  int v17;
  uint16_t *v18;
  void *v19;
  size_t v20;
  uint8_t *v21;
  char *v22;
  char *v23;
  int16_t v24;
  uint8_t *v26;
  int i;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  char *v32;
  int v33;
  int v34;
  uint8_t *v35;
  int v36;
  int16_t v37;
  typedef int _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef void *_g4_t_v47[4];
  typedef uint32_t _g4_t_v48[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v40)) > _g4_s2 ? (44u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v41)) > _g4_s3 ? (44u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v42)) > _g4_s4 ? (44u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v43)) > _g4_s5 ? (44u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v44)) > _g4_s6 ? (52u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v45)) > _g4_s7 ? (56u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v46)) > _g4_s8 ? (56u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v47)) > _g4_s9 ? (64u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v48)) > _g4_s10 ? (80u + sizeof(_g4_t_v48)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);

  v3 = a2;
  v47[0] = a2;
  if ( *(uint32_t *)(a1 + 272) != 768 || *(uint32_t *)(*(uint32_t *)(a1 + 88) + 1048) != 0 )
  {
    v4 = a2 + 2;
    v47[0] = a2 + 2;
    if ( (unsigned int)(uintptr_t)(a2 + 2) >= a3 )
      return nullptr;
    v5 = *(const char **)(a1 + 288);
    if ( v5 != nullptr )
    {
      v45 = a3 - (uint32_t)(uintptr_t)(v4) - 9;
      if ( v45 < 0 )
        return nullptr;
      v6 = strlen(v5);
      if ( v6 > v45 )
        return nullptr;
      a2[10] = v6;
      a2[2] = 0;
      a2[3] = 0;
      a2[4] = (uint16_t)(v6 + 5) >> 8;
      a2[8] = 0;
      a2[5] = v6 + 5;
      a2[7] = v6 + 3;
      v47[0] = a2 + 11;
      a2[6] = (uint16_t)(v6 + 3) >> 8;
      a2[9] = BYTE1(v6);
      v40 = v6;
      memcpy(a2 + 11, *(const void **)(a1 + 288), v6);
      v4 = &a2[v40 + 11];
      v47[0] = v4;
    }
    if ( *(uint32_t *)(a1 + 40) != 0 )
    {
      if ( ssl_add_clienthello_renegotiate_ext(a1, 0, v48, 0) == 0 )
        goto LABEL_63;
      if ( (int)(a3 - (uint32_t)(uintptr_t)(a2) - 4 - v48[0]) < 0 )
        return nullptr;
      *(uint8_t *)v47[0] = -1;
      *((uint8_t *)v47[0] + 1) = 1;
      v26 = (uint8_t *)(v47[0]);
      v47[0] = (char *)v47[0] + 2;
      v26[2] = BYTE1(v48[0]);
      *((uint8_t *)v47[0] + 1) = v48[0];
      v47[0] = (char *)v47[0] + 2;
      if ( ssl_add_clienthello_renegotiate_ext(a1, v47[0], v48, v48[0]) == 0 )
        goto LABEL_63;
      v4 = (uint8_t *)((char *)v47[0] + v48[0]);
      v47[0] = (char *)v47[0] + v48[0];
    }
    if ( *(uint32_t *)(a1 + 328) != 0 && *(uint32_t *)a1 != 65279 )
    {
      if ( (int)(a3 - (uint32_t)(uintptr_t)(v4) - 5) < 0 )
        return nullptr;
      v7 = *(uint32_t *)(a1 + 324);
      if ( v7 > a3 - (unsigned int)(uintptr_t)(v4) - 5 )
        return nullptr;
      if ( v7 > 0xFF )
        goto LABEL_63;
      *v4 = 0;
      *((uint8_t *)v47[0] + 1) = 11;
      v8 = (uint8_t *)(v47[0]);
      v47[0] = (char *)v47[0] + 2;
      v8[2] = (uint16_t)(*(uint16_t *)(a1 + 324) + 1) >> 8;
      *((uint8_t *)v47[0] + 1) = *(uint32_t *)(a1 + 324) + 1;
      v9 = (char *)v47[0];
      *((uint8_t *)v47[0] + 2) = *(uint32_t *)(a1 + 324);
      v10 = *(uint32_t *)(a1 + 324);
      v11 = *(const void **)(a1 + 328);
      v47[0] = v9 + 3;
      memcpy(v9 + 3, v11, v10);
      v4 = (uint8_t *)((char *)v47[0] + *(uint32_t *)(a1 + 324));
      v47[0] = v4;
    }
    if ( *(uint32_t *)(a1 + 336) == 0 || *(uint32_t *)a1 == 65279 )
    {
LABEL_20:
      SSL_ctrl((uint32_t *)a1, 32, 0, 0);
      if ( (v16 & 0x40) != 0 )
        goto LABEL_31;
      v17 = *(uint32_t *)(a1 + 192);
      if ( *(uint32_t *)(a1 + 40) != 0 )
      {
        if ( v17 == 0 )
          goto LABEL_60;
      }
      else
      {
        if ( v17 == 0 )
          goto LABEL_60;
        if ( *(uint32_t *)(v17 + 228) != 0 )
        {
          v20 = *(uint32_t *)(v17 + 232);
LABEL_27:
          if ( v20 != 0 )
          {
LABEL_28:
            if ( (int)(a3 - (unsigned int)(uintptr_t)(v47[0]) - 4 - v20) < 0 )
              return nullptr;
            *(uint8_t *)v47[0] = 0;
            *((uint8_t *)v47[0] + 1) = 35;
            v21 = (uint8_t *)(v47[0]);
            v47[0] = (char *)v47[0] + 2;
            v21[2] = BYTE1(v20);
            *((uint8_t *)v47[0] + 1) = v20;
            v22 = (char *)v47[0] + 2;
            v47[0] = (char *)v47[0] + 2;
            if ( v20 != 0 )
            {
              v42 = v20;
              memcpy(v22, *(const void **)(*(uint32_t *)(a1 + 192) + 228), v20);
              v47[0] = (char *)v47[0] + v42;
            }
            goto LABEL_31;
          }
LABEL_60:
          v18 = *(uint16_t **)(a1 + 348);
          if ( v18 != nullptr )
          {
LABEL_61:
            if ( *((uint32_t *)v18 + 1) != 0 )
              goto LABEL_62;
LABEL_31:
            if ( *(uint32_t *)(a1 + 296) != 1 )
              goto LABEL_32;
            v46 = 0;
            if ( *(uint32_t *)a1 == 65279 )
              goto LABEL_32;
            for ( i = 0; i < sk_num(*(uint32_t *)(a1 + 304)); ++i )
            {
              v28 = sk_value(*(uint32_t *)(a1 + 304), i);
              v29 = i2d_OCSP_RESPID(v28, 0);
              if ( v29 <= 0 )
                return nullptr;
              v46 += v29 + 2;
            }
            v30 = *(uint32_t *)(a1 + 308);
            if ( v30 != 0 )
            {
              v44 = i2d_X509_EXTENSIONS(v30, 0);
              if ( v44 < 0 )
                return nullptr;
            }
            else
            {
              v44 = 0;
            }
            if ( (int)(a3 - (unsigned int)(uintptr_t)(v47[0]) - 7 - v44 - v46) >= 0 )
            {
              *(uint8_t *)v47[0] = 0;
              *((uint8_t *)v47[0] + 1) = 5;
              v31 = (uint8_t *)(v47[0]);
              v47[0] = (char *)v47[0] + 2;
              if ( v46 + v44 <= 65520 )
              {
                v31[2] = (uint16_t)(v46 + v44 + 5) >> 8;
                *((uint8_t *)v47[0] + 1) = v46 + v44 + 5;
                v32 = (char *)v47[0];
                *((uint8_t *)v47[0] + 2) = 1;
                v47[0] = v32 + 3;
                v32[3] = BYTE1(v46);
                v33 = a1;
                *((uint8_t *)v47[0] + 1) = v46;
                v47[0] = (char *)v47[0] + 2;
                v34 = 0;
                while ( 1 )
                {
                  v43 = v33;
                  if ( v34 >= sk_num(*(uint32_t *)(v33 + 304)) )
                    break;
                  v38 = v34;
                  v35 = (uint8_t *)(v47[0]);
                  ++v34;
                  v36 = sk_value(*(uint32_t *)(v43 + 304), v38);
                  v47[0] = (char *)v47[0] + 2;
                  v37 = i2d_OCSP_RESPID(v36, v47);
                  v35[1] = v37;
                  *v35 = HIBYTE(v37);
                  v33 = v43;
                }
                v3 = a2;
                *(uint8_t *)v47[0] = BYTE1(v44);
                *((uint8_t *)v47[0] + 1) = v44;
                v23 = (char *)v47[0] + 2;
                v47[0] = (char *)v47[0] + 2;
                if ( v44 != 0 )
                {
                  i2d_X509_EXTENSIONS(*(uint32_t *)(v43 + 308), v47);
LABEL_32:
                  v23 = (char *)v47[0];
                }
                v24 = (uint16_t)(uintptr_t)(v23) - (uint16_t)(uintptr_t)(v3) - 2;
                if ( v23 - (char *)(v3 != (uint8_t *)(intptr_t)(2)) )
                {
                  v3[1] = v24;
                  *v3 = HIBYTE(v24);
                  return v23;
                }
                return (char *)(v3);
              }
            }
            return nullptr;
          }
LABEL_62:
          v20 = 0;
          goto LABEL_28;
        }
      }
      v18 = *(uint16_t **)(a1 + 348);
      if ( v18 == nullptr )
        goto LABEL_62;
      if ( *((uint32_t *)v18 + 1) == 0 )
        goto LABEL_61;
      v41 = *v18;
      *(uint32_t *)(v17 + 228) = (uint32_t)(uintptr_t)(CRYPTO_malloc(v41, (int)(uintptr_t)(&unk_1B15112), 0));
      v19 = *(void **)(*(uint32_t *)(a1 + 192) + 228);
      if ( v19 == nullptr )
        return nullptr;
      memcpy(v19, *(const void **)(*(uint32_t *)(a1 + 348) + 4), v41);
      v20 = v41;
      *(uint32_t *)(*(uint32_t *)(a1 + 192) + 232) = v41;
      goto LABEL_27;
    }
    if ( (int)(a3 - (uint32_t)(uintptr_t)(v4) - 6) < 0 )
      return nullptr;
    v12 = *(uint32_t *)(a1 + 332);
    if ( v12 > a3 - (unsigned int)(uintptr_t)(v4) - 6 )
      return nullptr;
    if ( v12 <= 0xFFFC )
    {
      *v4 = 0;
      *((uint8_t *)v47[0] + 1) = 10;
      v13 = (uint8_t *)(v47[0]);
      v47[0] = (char *)v47[0] + 2;
      v13[2] = (uint16_t)(*(uint16_t *)(a1 + 332) + 2) >> 8;
      *((uint8_t *)v47[0] + 1) = *(uint32_t *)(a1 + 332) + 2;
      v14 = (uint8_t *)(v47[0]);
      v47[0] = (char *)v47[0] + 2;
      v14[2] = BYTE1(*(uint32_t *)(a1 + 332));
      *((uint8_t *)v47[0] + 1) = *(uint32_t *)(a1 + 332);
      v15 = *(const void **)(a1 + 336);
      v39 = *(uint32_t *)(a1 + 332);
      v47[0] = (char *)v47[0] + 2;
      memcpy(v47[0], v15, v39);
      v47[0] = (char *)v47[0] + *(uint32_t *)(a1 + 332);
      goto LABEL_20;
    }
LABEL_63:
    v3 = nullptr;
    ERR_put_error(20, 277, 68, &unk_1B15112, 0);
    return (char *)(v3);
  }
  return (char *)(a2);
}

// ----------------------------------------------------------------------------
// Function: ssl_add_serverhello_tlsext  (binary VA: 0x1300c70)
// Original: ssl_add_serverhello_tlsext
// ----------------------------------------------------------------------------
char * ssl_add_serverhello_tlsext(int a1, uint8_t *a2, unsigned int a3)
{
  uint8_t *v3;
  char *v4;
  unsigned int v5;
  char *v6;
  int16_t v7;
  int v9;
  uint8_t *v10;
  int v11;
  char v12;
  int v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef uint8_t *_g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  v3 = a2;
  if ( *(uint32_t *)a1 == 768 && *(uint32_t *)(*(uint32_t *)(a1 + 88) + 1048) == 0 )
    return (char *)(a2);
  v4 = (char *)(a2 + 2);
  if ( (unsigned int)(uintptr_t)(a2 + 2) >= a3 )
    return nullptr;
  if ( *(uint32_t *)(a1 + 108) == 0 && *(uint32_t *)(a1 + 292) == 1 && *(uint32_t *)(*(uint32_t *)(a1 + 192) + 208) != 0 )
  {
    if ( (int)(a3 - (uint32_t)(uintptr_t)(v4)) <= 3 )
      return nullptr;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    v4 = (char *)(a2 + 6);
  }
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 88) + 1048) != 0 )
  {
    if ( ssl_add_serverhello_renegotiate_ext(a1, 0, v17, 0) == 0 )
      goto LABEL_36;
    v9 = v17[0];
    if ( (int)(a3 - (uint32_t)(uintptr_t)(a2) - 4 - v17[0]) < 0 )
      return nullptr;
    v4[3] = v17[0];
    *v4 = -1;
    v4[1] = 1;
    v4[2] = BYTE1(v9);
    v10 = (uint8_t *)(v4 + 4);
    v11 = ssl_add_serverhello_renegotiate_ext(a1, v10, v17, v9);
    v3 = a2;
    if ( v11 == 0 )
      goto LABEL_36;
    v4 = (char *)(&v10[v17[0]]);
  }
  if ( *(uint32_t *)(a1 + 328) == 0 || *(uint32_t *)a1 == 65279 )
    goto LABEL_11;
  if ( (int)(a3 - (uint32_t)(uintptr_t)(v4) - 5) < 0 )
    return nullptr;
  v5 = *(uint32_t *)(a1 + 324);
  if ( v5 > a3 - (unsigned int)(uintptr_t)(v4) - 5 )
    return nullptr;
  if ( v5 > 0xFF )
  {
LABEL_36:
    ERR_put_error(20, 278, 68, &unk_1B15112, 0);
    return nullptr;
  }
  *v4 = 0;
  v4[1] = 11;
  v4[2] = (uint16_t)(*(uint16_t *)(a1 + 324) + 1) >> 8;
  v4[3] = *(uint32_t *)(a1 + 324) + 1;
  v4[4] = *(uint32_t *)(a1 + 324);
  v6 = v4 + 5;
  v14 = v3;
  memcpy(v6, *(const void **)(a1 + 328), *(uint32_t *)(a1 + 324));
  v4 = &v6[*(uint32_t *)(a1 + 324)];
  v3 = v14;
LABEL_11:
  if ( *(uint32_t *)(a1 + 320) != 0 )
  {
    v15 = v3;
    SSL_ctrl((uint32_t *)a1, 32, 0, 0);
    v3 = v15;
    if ( (v12 & 0x40) == 0 )
    {
      if ( (int)(a3 - (uint32_t)(uintptr_t)(v4)) <= 3 )
        return nullptr;
      *v4 = 0;
      v4[1] = 35;
      v4[2] = 0;
      v4[3] = 0;
      v4 += 4;
    }
  }
  if ( *(uint32_t *)(a1 + 300) != 0 )
  {
    if ( (int)(a3 - (uint32_t)(uintptr_t)(v4)) <= 3 )
      return nullptr;
    *v4 = 0;
    v4[1] = 5;
    v4[2] = 0;
    v4[3] = 0;
    v4 += 4;
  }
  if ( (unsigned int)*(uint16_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 836) + 8) - 128 > 1 )
    goto LABEL_16;
  v16 = v3;
  LOBYTE(v13) = SSL_ctrl((uint32_t *)a1, 32, 0, 0);
  v3 = v16;
  if ( v13 >= 0 )
    goto LABEL_16;
  if ( (int)(a3 - (uint32_t)(uintptr_t)(v4)) > 35 )
  {
    *v4 = -3;
    v4[1] = -24;
    v4[2] = 0;
    v4[3] = 32;
    v4[4] = 48;
    v4[5] = 30;
    v4[6] = 48;
    v4[7] = 8;
    v4[8] = 6;
    v4[9] = 6;
    v4[10] = 42;
    v4[11] = -123;
    v4[12] = 3;
    v4[13] = 2;
    v4[14] = 2;
    v4[15] = 9;
    v4[16] = 48;
    v4[17] = 8;
    v4[18] = 6;
    v4[19] = 6;
    v4[20] = 42;
    v4[21] = -123;
    v4[22] = 3;
    v4[23] = 2;
    v4[24] = 2;
    v4[25] = 22;
    v4[26] = 48;
    v4[27] = 8;
    v4[28] = 6;
    v4[29] = 6;
    v4[30] = 42;
    v4[31] = -123;
    v4[32] = 3;
    v4[33] = 2;
    v4[34] = 2;
    v4[35] = 23;
    v4 += 36;
LABEL_16:
    v7 = (uint16_t)(uintptr_t)(v4) - (uint16_t)(uintptr_t)(v3) - 2;
    if ( v4 - (char *)(v3 != (uint8_t *)(intptr_t)(2)) )
    {
      v3[1] = v7;
      *v3 = HIBYTE(v7);
      return v4;
    }
    return (char *)(v3);
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: ssl_parse_clienthello_tlsext  (binary VA: 0x1301030)
// Original: ssl_parse_clienthello_tlsext
// ----------------------------------------------------------------------------
int ssl_parse_clienthello_tlsext(uint32_t *a1, unsigned int *a2, int a3, int a4, uint32_t *a5)
{
  uint32_t *v5;
  unsigned int v6;
  bool v7;
  int16_t v8; // di
  int16_t v9;
  uint8_t *v10;
  uint16_t v11; // di
  uint16_t v12; // di
  uint16_t v13;
  uint32_t *v14;
  int v15;
  uint16_t v16;
  size_t v17;
  unsigned int v18;
  int v19;
  int result;
  size_t v21;
  int16_t v22; // di
  int16_t v23;
  int v24;
  size_t v25;
  unsigned int v26;
  int16_t v27;
  int16_t v28;
  int v29;
  int v30;
  int v31;
  size_t v32;
  int v33;
  void *v34;
  int v35;
  int (*v36)(uint32_t *, uint8_t *, unsigned int, uint32_t);
  uint16_t v37;
  int v38;
  int v39;
  uint8_t *v40;
  int v41;
  unsigned int v42;
  int v43;
  uint8_t *v44;
  int v45;
  int v46;
  uint8_t *v47;
  int v48;
  int v49;
  int v50;
  bool v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef const char *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint16_t _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef size_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef uint8_t _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint16_t _g4_t_v74;
  typedef uint16_t _g4_t_v75;
  typedef char _g4_t_v76;
  typedef int _g4_t_v77;
  typedef size_t _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint32_t _g4_t_v80[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v54)) > _g4_s2 ? (8u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v55)) > _g4_s3 ? (8u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v56)) > _g4_s4 ? (8u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v57)) > _g4_s5 ? (8u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v58)) > _g4_s6 ? (8u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v59)) > _g4_s7 ? (8u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v60)) > _g4_s8 ? (8u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v61)) > _g4_s9 ? (8u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v62)) > _g4_s10 ? (8u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v63)) > _g4_s11 ? (12u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v64)) > _g4_s12 ? (12u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v65)) > _g4_s13 ? (12u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v66)) > _g4_s14 ? (12u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v67)) > _g4_s15 ? (16u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v68)) > _g4_s16 ? (28u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v69)) > _g4_s17 ? (32u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v70)) > _g4_s18 ? (32u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v71)) > _g4_s19 ? (36u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v72)) > _g4_s20 ? (40u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v73)) > _g4_s21 ? (40u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v74)) > _g4_s22 ? (40u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v75)) > _g4_s23 ? (44u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v76)) > _g4_s24 ? (44u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v77)) > _g4_s25 ? (44u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v78)) > _g4_s26 ? (44u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v79)) > _g4_s27 ? (44u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v80)) > _g4_s28 ? (48u + sizeof(_g4_t_v80)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);

  v5 = a1;
  v6 = *a2;
  v7 = *a2 < a3 + a4 - 2;
  a1[73] = 0;
  a1[74] = -1;
  if ( !v7 )
    goto LABEL_31;
  v71 = v6 + 2;
  if ( v6 + 2 > a3 + a4 - (unsigned int)__builtin_bswap16(*(uint16_t *)v6) )
    goto LABEL_31;
  if ( v71 > a3 + a4 - 4 )
  {
    v67 = 0;
    goto LABEL_76;
  }
  v8 = *(uint8_t *)(v6 + 4);
  v72 = *(uint8_t *)(v6 + 2);
  v68 = *(uint8_t *)(v6 + 3);
  v9 = *(uint8_t *)(v6 + 5);
  v10 = (uint8_t *)(v6 + 6);
  v11 = v9 | (v8 << 8);
  v69 = v11;
  if ( a4 + a3 < (unsigned int)(uintptr_t)(&v10[v11]) )
    goto LABEL_31;
  v75 = v11;
  v67 = 0;
  v12 = v68 | (v72 << 8);
  v13 = v75;
  v14 = a1;
  do
  {
    if ( v14[70] != 0 )
    {
      v63 = v13;
      v53 = v14;
      ((void (*)(uint32_t *, uint32_t, uint32_t, uint8_t *, unsigned int, uint32_t))v14[70])(
        v14,
        0,
        v12,
        v10,
        v69,
        v14[71]);
      v14 = v53;
      v13 = v63;
    }
    switch ( v12 )
    {
      case 0u:
        if ( v13 > 1u )
        {
          v69 = (uint16_t)(v13 - 2);
          v15 = *(uint8_t *)(v71 + 5) | (*(uint8_t *)(v71 + 4) << 8);
          if ( v15 > v69 )
          {
LABEL_95:
            *a5 = 50;
            return 0;
          }
          if ( (*(uint8_t *)(v71 + 5) | (*(uint8_t *)(v71 + 4) << 8)) <= 3u )
          {
LABEL_29:
            if ( v15 == 0 )
            {
              v10 = (uint8_t *)(v71 + 6);
              goto LABEL_39;
            }
          }
          else
          {
            v76 = *(uint8_t *)(v71 + 6);
            v16 = __builtin_bswap16(*(uint16_t *)(v71 + 7));
            v17 = v16;
            if ( v16 <= v15 - 3 )
            {
              v73 = v14[73];
              v18 = v71 + 9;
              v19 = v15 - 3;
              v52 = v14;
              while ( 1 )
              {
                if ( v73 != 0 || v76 != 0 )
                  goto LABEL_19;
                if ( v52[27] == 0 )
                  break;
                v24 = v52[48];
                if ( *(uint32_t *)(v24 + 208) != 0 )
                {
                  v65 = v19;
                  v55 = *(const char **)(v24 + 208);
                  v25 = strlen(v55);
                  v19 = v65;
                  if ( v25 == v17 )
                  {
                    v31 = strncmp(v55, (const char *)v18, v17);
                    v19 = v65;
                    v73 = v31 == 0;
                  }
                }
                v15 = v19 - v17;
                v52[73] = v73;
                if ( v15 <= 3 )
                {
LABEL_28:
                  v14 = v52;
                  goto LABEL_29;
                }
LABEL_20:
                v19 = v15 - 3;
                v76 = *(uint8_t *)v18;
                v22 = *(uint8_t *)(v18 + 2);
                v23 = *(uint8_t *)(v18 + 1) << 8;
                v18 += 3;
                v16 = v22 | v23;
                v17 = v16;
                if ( v19 < v16 )
                  goto LABEL_51;
              }
              v77 = v52[48];
              if ( *(uint32_t *)(v77 + 208) != 0 )
                goto LABEL_70;
              if ( v16 > 0xFFu )
              {
                *a5 = 112;
                return 0;
              }
              v64 = v19;
              result = (int)(uintptr_t)(CRYPTO_malloc(v17 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
              *(uint32_t *)(v77 + 208) = result;
              if ( result == 0 )
              {
                *a5 = 80;
                return result;
              }
              memcpy(*(void **)(v52[48] + 208), (const void *)v18, v17);
              *(uint8_t *)(*(uint32_t *)(v52[48] + 208) + v17) = 0;
              v54 = *(char **)(v52[48] + 208);
              v21 = strlen(v54);
              v19 = v64;
              if ( v17 != v21 )
              {
                CRYPTO_free(v54);
                *(uint32_t *)(v52[48] + 208) = 0;
                *a5 = 112;
                return 0;
              }
              v73 = 1;
              v52[73] = 1;
LABEL_19:
              v15 = v19 - v17;
              if ( v15 <= 3 )
                goto LABEL_28;
              goto LABEL_20;
            }
          }
LABEL_51:
          *a5 = 50;
          return 0;
        }
        goto LABEL_82;
      case 0xBu:
        if ( *v14 == 65279 )
          goto LABEL_39;
        v32 = v69 - 1;
        if ( v69 - 1 == *(uint8_t *)(v71 + 4) )
        {
          if ( v14[27] != 0 )
            goto LABEL_39;
          v33 = v14[48];
          v34 = *(void **)(v33 + 216);
          if ( v34 != nullptr )
          {
            v57 = v14;
            CRYPTO_free(v34);
            v14 = v57;
            *(uint32_t *)(v57[48] + 216) = 0;
            v33 = v57[48];
            v32 = v69 - 1;
          }
          *(uint32_t *)(v33 + 212) = 0;
          v35 = v14[48];
          v66 = v32;
          v58 = v14;
          result = (int)(uintptr_t)(CRYPTO_malloc(v32, (int)(uintptr_t)(&unk_1B15112), 0));
          *(uint32_t *)(v35 + 216) = result;
          if ( result != 0 )
          {
            *(uint32_t *)(v58[48] + 212) = v66;
            memcpy(*(void **)(v58[48] + 216), (const void *)(v71 + 5), v66);
            v14 = v58;
            goto LABEL_39;
          }
          *a5 = 80;
          return result;
        }
        goto LABEL_51;
      case 0xAu:
        if ( *v14 == 65279 )
          goto LABEL_39;
        v78 = v69 - 2;
        if ( v69 - 2 == *(uint8_t *)(v71 + 5) + (*(uint8_t *)(v71 + 4) << 8) )
        {
          if ( v14[27] != 0 )
            goto LABEL_39;
          v29 = v14[48];
          if ( *(uint32_t *)(v29 + 224) == 0 )
          {
            *(uint32_t *)(v29 + 220) = 0;
            v30 = v14[48];
            v56 = v14;
            result = (int)(uintptr_t)(CRYPTO_malloc(v78, (int)(uintptr_t)(&unk_1B15112), 0));
            *(uint32_t *)(v30 + 224) = result;
            if ( result != 0 )
            {
              *(uint32_t *)(v56[48] + 220) = v78;
              memcpy(*(void **)(v56[48] + 224), (const void *)(v71 + 6), v78);
              v14 = v56;
              goto LABEL_39;
            }
            goto LABEL_61;
          }
          goto LABEL_70;
        }
LABEL_82:
        *a5 = 50;
        return 0;
      case 0x23u:
        v36 = (int (*)(uint32_t *, uint8_t *, unsigned int, uint32_t))v14[88];
        if ( v36 == nullptr )
          goto LABEL_39;
        v59 = v14;
        result = v36(v14, v10, v69, v14[89]);
        v14 = v59;
        if ( result != 0 )
          goto LABEL_39;
LABEL_61:
        *a5 = 80;
        return result;
      case 0xFF01:
        v60 = v14;
        v39 = ssl_parse_clienthello_renegotiate_ext(v14, v10, v69, a5);
        v14 = v60;
        if ( v39 != 0 )
        {
          v67 = 1;
          goto LABEL_39;
        }
        return 0;
      default:
        break;
    }
    if ( v12 != 5 || *v14 == 65279 || *(uint32_t *)(v14[57] + 316) == 0 )
      goto LABEL_39;
    if ( v13 <= 4u )
      goto LABEL_82;
    v37 = v13 - 1;
    v38 = *(uint8_t *)(v71 + 4);
    v14[74] = v38;
    if ( v38 != 1 )
    {
      v10 = (uint8_t *)(v71 + 5);
      v14[74] = -1;
      v69 = v37;
      goto LABEL_39;
    }
    v42 = *(uint8_t *)(v71 + 6) | (*(uint8_t *)(v71 + 5) << 8);
    v74 = v37 - 2;
    if ( v42 > (uint16_t)(v37 - 2) )
      goto LABEL_82;
    if ( (*(uint8_t *)(v71 + 6) | (*(uint8_t *)(v71 + 5) << 8)) == 0 )
    {
      v40 = (uint8_t *)(v71 + 7);
      goto LABEL_78;
    }
    if ( (*(uint8_t *)(v71 + 6) | (*(uint8_t *)(v71 + 5) << 8)) <= 3u )
      goto LABEL_70;
    v43 = *(uint8_t *)(v71 + 8) | (*(uint8_t *)(v71 + 7) << 8);
    v79 = v42 - v43 - 2;
    if ( v79 < 0 )
      goto LABEL_95;
    v74 = v37 - 4 - __builtin_bswap16(*(uint16_t *)(v71 + 7));
    v70 = v14;
    v44 = (uint8_t *)(v71 + 9);
    while ( 1 )
    {
      v80[0] = (uint32_t)(uintptr_t)(v44);
      v45 = d2i_OCSP_RESPID(0, v80, v43);
      v46 = v45;
      if ( v45 == 0 )
        goto LABEL_82;
      v47 = &v44[v43];
      if ( v47 != (uint8_t *)v80[0] )
      {
        OCSP_RESPID_free(v45);
LABEL_70:
        *a5 = 50;
        return 0;
      }
      v48 = v70[76];
      if ( v48 == 0 && (v62 = v46, v48 = (int)(uintptr_t)(sk_new_null()), v70[76] = v48, v46 = v62, v48 == 0)
        || (v62 = v46, sk_push(v48, v46) == 0) )
      {
        OCSP_RESPID_free(v62);
        *a5 = 80;
        return 0;
      }
      if ( v79 <= 0 )
        break;
      if ( v79 <= 3 )
        goto LABEL_70;
      v49 = *v47;
      v50 = v47[1];
      v44 = v47 + 2;
      v43 = v50 | (v49 << 8);
      v51 = -2 - v43 + v79 < 0;
      v79 += -2 - v43;
      v74 = v74 - v43 - 2;
      if ( v51 )
        goto LABEL_95;
    }
    v40 = v47;
    v14 = v70;
    if ( v74 <= 1u )
      goto LABEL_51;
LABEL_78:
    v69 = (uint16_t)(v74 - 2);
    if ( v69 != (v40[1] | (*v40 << 8)) )
      goto LABEL_82;
    v10 = v40 + 2;
    v80[0] = (uint32_t)(uintptr_t)(v40 + 2);
    if ( v74 != 2 )
    {
      v61 = v14;
      v41 = d2i_X509_EXTENSIONS(0, v80, v69);
      v14 = v61;
      v61[77] = v41;
      if ( v41 == 0 || (uint8_t *)v80[0] != &v10[v69] )
        goto LABEL_82;
    }
LABEL_39:
    v26 = (unsigned int)(uintptr_t)(&v10[v69]);
    v71 = v26;
    if ( v26 > a3 + a4 - 4 )
    {
      v5 = v14;
LABEL_76:
      *a2 = v71;
      goto LABEL_42;
    }
    v12 = __builtin_bswap16(*(uint16_t *)v26);
    v27 = *(uint8_t *)(v26 + 3);
    v28 = *(uint8_t *)(v26 + 2) << 8;
    v10 = (uint8_t *)(v26 + 4);
    v13 = v27 | v28;
    v69 = v13;
  }
  while ( a4 + a3 >= (unsigned int)(uintptr_t)(&v10[v13]) );
  v5 = v14;
LABEL_42:
  if ( v67 != 0 )
    return 1;
LABEL_31:
  result = 1;
  if ( v5[10] != 0 && (*((uint8_t *)v5 + 258) & 4) == 0 )
  {
    *a5 = 40;
    ERR_put_error(20, 302, 338, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_parse_serverhello_tlsext  (binary VA: 0x1301a10)
// Original: ssl_parse_serverhello_tlsext
// ----------------------------------------------------------------------------
int ssl_parse_serverhello_tlsext(int a1, uint16_t **a2, int a3, int a4, uint32_t *a5)
{
  uint16_t *v5;
  int result;
  unsigned int v7;
  uint16_t v8; // di
  int v9;
  uint16_t v10;
  size_t v11;
  int v12;
  void *v13;
  int (*v14)(int, unsigned int, int, uint32_t);
  char v15;
  int v16;
  uint16_t v17;
  size_t v18;
  size_t n;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;

  v5 = *a2;
  if ( (unsigned int)(uintptr_t)(*a2) < a3 + a4 - 2 )
  {
    v7 = (unsigned int)(uintptr_t)(v5 + 1);
    v22 = (unsigned int)(uintptr_t)(v5) + __builtin_bswap16(*v5) + 2;
    if ( v22 == a3 + a4 )
    {
      v24 = 0;
      v23 = 0;
      while ( v7 <= a3 + a4 - 4 )
      {
        v21 = v7 + 4;
        v8 = __builtin_bswap16(*(uint16_t *)(v7 + 2));
        v9 = v8;
        v20 = v8 + v7 + 4;
        if ( v22 < v20 )
          goto LABEL_39;
        v10 = __builtin_bswap16(*(uint16_t *)v7);
        if ( *(uint32_t *)(a1 + 280) != 0 )
        {
          v17 = v10;
          (*(void (**)(int, int, uint32_t, unsigned int, uint32_t, uint32_t))(a1 + 280))(
            a1,
            1,
            v10,
            v21,
            v8,
            *(uint32_t *)(a1 + 284));
          v9 = v8;
          v10 = v17;
        }
        if ( v10 != 0 )
        {
          switch ( v10 )
          {
            case 0xBu:
              if ( *(uint32_t *)a1 != 65279 )
              {
                v11 = *(uint8_t *)(v7 + 4);
                if ( v9 - 1 != v11 )
                  goto LABEL_42;
                *(uint32_t *)(*(uint32_t *)(a1 + 192) + 212) = 0;
                v12 = *(uint32_t *)(a1 + 192);
                v13 = *(void **)(v12 + 216);
                if ( v13 != nullptr )
                {
                  v18 = v11;
                  CRYPTO_free(v13);
                  v12 = *(uint32_t *)(a1 + 192);
                  v11 = v18;
                }
                n = v11;
                result = (int)(uintptr_t)(CRYPTO_malloc(v11, (int)(uintptr_t)(&unk_1B15112), 0));
                *(uint32_t *)(v12 + 216) = result;
                if ( result == 0 )
                {
                  *a5 = 80;
                  return result;
                }
                *(uint32_t *)(*(uint32_t *)(a1 + 192) + 212) = n;
                memcpy(*(void **)(*(uint32_t *)(a1 + 192) + 216), (const void *)(v7 + 5), n);
              }
              break;
            case 0x23u:
              v14 = *(int (**)(int, unsigned int, int, uint32_t))(a1 + 352);
              if ( v14 != nullptr )
              {
                result = v14(a1, v21, v9, *(uint32_t *)(a1 + 356));
                if ( result == 0 )
                {
                  *a5 = 80;
                  return result;
                }
              }
              SSL_ctrl((uint32_t *)a1, 32, 0, 0);
              if ( (v15 & 0x40) != 0 || v8 != 0 )
              {
                *a5 = 110;
                return 0;
              }
              *(uint32_t *)(a1 + 320) = 1;
              break;
            case 5u:
              if ( *(uint32_t *)a1 != 65279 )
              {
                if ( v8 != 0 || *(uint32_t *)(a1 + 296) == -1 )
                {
                  *a5 = 110;
                  return 0;
                }
                *(uint32_t *)(a1 + 300) = 1;
              }
              break;
            case 0xFF01:
              if ( ssl_parse_serverhello_renegotiate_ext(a1, v21, v9, a5) == 0 )
                return 0;
              v24 = 1;
              break;
            default:
              break;
          }
        }
        else
        {
          if ( v8 != 0 || *(uint32_t *)(a1 + 288) == 0 )
          {
            *a5 = 112;
            return 0;
          }
          v23 = 1;
        }
        v7 = v20;
      }
      if ( v7 != v22 )
      {
LABEL_42:
        *a5 = 50;
        return 0;
      }
      if ( v23 == 0 || *(uint32_t *)(a1 + 108) != 0 || *(uint32_t *)(a1 + 288) == 0 )
        goto LABEL_38;
      v16 = *(uint32_t *)(a1 + 192);
      if ( *(uint32_t *)(v16 + 208) != 0 )
      {
        *a5 = 50;
        return 0;
      }
      *(uint32_t *)(v16 + 208) = (uint32_t)(uintptr_t)(BUF_strdup(*(char **)(a1 + 288)));
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 192) + 208) != 0 )
      {
LABEL_38:
        *a2 = (uint16_t *)v7;
LABEL_39:
        if ( v24 == 0 )
          goto LABEL_2;
        return 1;
      }
      else
      {
        *a5 = 112;
        return 0;
      }
    }
    else
    {
      *a5 = 50;
      return 0;
    }
  }
  else
  {
LABEL_2:
    result = 1;
    if ( (*(uint32_t *)(a1 + 256) & 0x40004) == 0 )
    {
      *a5 = 40;
      ERR_put_error(20, 303, 338, &unk_1B15112, 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_prepare_clienthello_tlsext  (binary VA: 0x1301e90)
// Original: ssl_prepare_clienthello_tlsext
// ----------------------------------------------------------------------------
int ssl_prepare_clienthello_tlsext(int a1)
{
  int v1;
  int ciphers;
  int v3;
  int result;
  uint8_t *v5;
  int v6;
  __m128i *v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  v1 = 0;
  ciphers = SSL_get_ciphers(a1);
  while ( 1 )
  {
    if ( v1 >= sk_num(ciphers) )
      return 1;
    v3 = sk_value(ciphers, v1);
    if ( (*(uint8_t *)(v3 + 12) & 0xE0) != 0 || (*(uint32_t *)(v3 + 16) & 0x40) != 0 )
      break;
    ++v1;
  }
  result = 1;
  if ( *(uint32_t *)a1 == 769 )
  {
    if ( *(uint32_t *)(a1 + 328) != 0 )
      CRYPTO_free(*(void **)(a1 + 328));
    v5 = (uint8_t *)CRYPTO_malloc(3u, (int)(uintptr_t)(&unk_1B15112), 0);
    v6 = a1;
    *(uint32_t *)(a1 + 328) = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      *(uint32_t *)(a1 + 324) = 3;
      *v5 = 0;
      *(uint8_t *)(*(uint32_t *)(a1 + 328) + 1) = 1;
      *(uint8_t *)(*(uint32_t *)(a1 + 328) + 2) = 2;
      if ( *(uint32_t *)(a1 + 336) != 0 )
      {
        CRYPTO_free(*(void **)(a1 + 336));
        v6 = a1;
      }
      *(uint32_t *)(v6 + 332) = 50;
      v7 = (__m128i *)CRYPTO_malloc(0x32u, (int)(uintptr_t)(&unk_1B15112), 0);
      *(uint32_t *)(a1 + 336) = (uint32_t)(uintptr_t)(v7);
      if ( v7 != nullptr )
      {
g4_m128_lane<int8_t>(v7[2], 0) = 0;
g4_m128_lane<int8_t>(v7[2], 1) = 17;
        v8 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1C7CB50), G4_BITCAST<__m128i>(xmmword_1C7CB60));
        v9 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1C7CB50), G4_BITCAST<__m128i>(xmmword_1C7CB60));
        v10 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v8, v9), _mm_unpackhi_epi16(v8, v9));
g4_m128_lane<int8_t>(v7[2], 2) = 0;
        v11 = _mm_unpacklo_epi16(G4_BITCAST<__m128i>(xmmword_1C7CB70), G4_BITCAST<__m128i>(xmmword_1C7CB80));
        v12 = _mm_unpackhi_epi16(G4_BITCAST<__m128i>(xmmword_1C7CB70), G4_BITCAST<__m128i>(xmmword_1C7CB80));
        v13 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v11, v12), _mm_unpackhi_epi16(v11, v12));
        v14 = _mm_unpackhi_epi8(v10, v13);
        v15 = _mm_unpacklo_epi8(v10, v13);
        v16 = _mm_unpacklo_epi8(v15, v14);
        v17 = _mm_unpackhi_epi8(v15, v14);
        v18 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v16, v17), _mm_unpackhi_epi8(v16, v17));
g4_m128_lane<int8_t>(v7[2], 3) = 18;
        *v7 = _mm_unpacklo_epi8(g4_m128_from<__m128i>(0LL), v18);
        v7[1] = _mm_unpackhi_epi8(g4_m128_from<__m128i>(0LL), v18);
g4_m128_lane<int8_t>(v7[2], 4) = 0;
g4_m128_lane<int8_t>(v7[2], 5) = 19;
g4_m128_lane<int8_t>(v7[2], 6) = 0;
g4_m128_lane<int8_t>(v7[2], 7) = 20;
g4_m128_lane<int8_t>(v7[2], 8) = 0;
g4_m128_lane<int8_t>(v7[2], 9) = 21;
g4_m128_lane<int8_t>(v7[2], 10) = 0;
g4_m128_lane<int8_t>(v7[2], 11) = 22;
g4_m128_lane<int8_t>(v7[2], 12) = 0;
g4_m128_lane<int8_t>(v7[2], 13) = 23;
g4_m128_lane<int8_t>(v7[2], 14) = 0;
g4_m128_lane<int8_t>(v7[2], 15) = 24;
g4_m128_lane<int8_t>(v7[3], 0) = 0;
g4_m128_lane<int8_t>(v7[3], 1) = 25;
        return 1;
      }
      *(uint32_t *)(a1 + 332) = 0;
    }
    ERR_put_error(20, 281, 65, &unk_1B15112, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_prepare_serverhello_tlsext  (binary VA: 0x13020e0)
// Original: ssl_prepare_serverhello_tlsext
// ----------------------------------------------------------------------------
int ssl_prepare_serverhello_tlsext(int a1)
{
  int v1;
  int v2;
  int result;
  uint8_t *v4;

  v1 = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 836);
  v2 = *(uint32_t *)(v1 + 16);
  if ( (*(uint8_t *)(v1 + 12) & 0xE0) != 0 || (result = 1, (v2 & 0x40) != 0) )
  {
    result = 1;
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 192) + 216) != 0 )
    {
      if ( *(uint32_t *)(a1 + 328) != 0 )
        CRYPTO_free(*(void **)(a1 + 328));
      v4 = (uint8_t *)CRYPTO_malloc(3u, (int)(uintptr_t)(&unk_1B15112), 0);
      *(uint32_t *)(a1 + 328) = (uint32_t)(uintptr_t)(v4);
      if ( v4 != nullptr )
      {
        *(uint32_t *)(a1 + 324) = 3;
        *v4 = 0;
        *(uint8_t *)(*(uint32_t *)(a1 + 328) + 1) = 1;
        *(uint8_t *)(*(uint32_t *)(a1 + 328) + 2) = 2;
        return 1;
      }
      else
      {
        ERR_put_error(20, 282, 65, &unk_1B15112, 0);
        return -1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_check_clienthello_tlsext  (binary VA: 0x13021e0)
// Original: ssl_check_clienthello_tlsext
// ----------------------------------------------------------------------------
int ssl_check_clienthello_tlsext(uint32_t *a1)
{
  int v1;
  int (*v2)(uint32_t *, int *, uint32_t);
  int v3;
  int v4;
  int (*v5)(uint32_t *, uint32_t);
  int v6;
  int v7;
  int result;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);

  v9 = 112;
  v1 = a1[57];
  if ( v1 != 0 && (v2 = *(int (**)(uint32_t *, int *, uint32_t))(v1 + 256)) != nullptr
    || (v1 = a1[92], v3 = 3, v1 != 0) && (v2 = *(int (**)(uint32_t *, int *, uint32_t))(v1 + 256)) != nullptr )
  {
    v3 = v2(a1, &v9, *(uint32_t *)(v1 + 260));
  }
  if ( a1[74] != -1 )
  {
    v4 = a1[57];
    if ( v4 != 0 )
    {
      v5 = *(int (**)(uint32_t *, uint32_t))(v4 + 316);
      if ( v5 != nullptr )
      {
        v6 = v5(a1, *(uint32_t *)(v4 + 320));
        if ( v6 == 2 )
        {
          v9 = 80;
          v7 = 80;
          goto LABEL_12;
        }
        if ( v6 != 3 )
        {
          if ( v6 != 0 )
            goto LABEL_14;
          a1[75] = a1[78] != 0;
          if ( v3 == 2 )
          {
LABEL_11:
            v7 = v9;
LABEL_12:
            ssl3_send_alert(a1, 2, v7);
            return -1;
          }
LABEL_15:
          if ( v3 == 3 )
          {
            a1[73] = 0;
            return 1;
          }
          else
          {
            result = 1;
            if ( v3 == 1 )
            {
              ssl3_send_alert(a1, 1, v9);
              return 1;
            }
          }
          return result;
        }
      }
    }
  }
  a1[75] = 0;
LABEL_14:
  if ( v3 == 2 )
    goto LABEL_11;
  goto LABEL_15;
}

// ----------------------------------------------------------------------------
// Function: ssl_check_serverhello_tlsext  (binary VA: 0x1302380)
// Original: ssl_check_serverhello_tlsext
// ----------------------------------------------------------------------------
int ssl_check_serverhello_tlsext(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int (*v5)(int, int *, uint32_t);
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);

  v15 = 112;
  v1 = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 836);
  v2 = *(uint32_t *)(v1 + 12);
  v3 = *(uint32_t *)(v1 + 16);
  if ( *(uint32_t *)(a1 + 328) != 0
    && *(uint32_t *)(a1 + 324) != 0
    && (v11 = *(uint32_t *)(a1 + 192), (v12 = *(uint8_t **)(v11 + 216)) != nullptr)
    && (v13 = *(uint32_t *)(v11 + 212)) != 0
    && ((v2 & 0xE0) != 0 || (v3 & 0x40) != 0)
    && (v14 = 0, *v12 != 0) )
  {
    while ( ++v14 != v13 )
    {
      if ( v12[v14] == 0 )
        goto LABEL_3;
    }
    ERR_put_error(20, 280, 157, &unk_1B15112, 0);
    return -1;
  }
  else
  {
LABEL_3:
    v4 = *(uint32_t *)(a1 + 228);
    if ( v4 != 0 && (v5 = *(int (**)(int, int *, uint32_t))(v4 + 256)) != nullptr
      || (v4 = *(uint32_t *)(a1 + 368), v6 = 0, v4 != 0)
      && (v5 = *(int (**)(int, int *, uint32_t))(v4 + 256)) != nullptr )
    {
      v6 = v5(a1, &v15, *(uint32_t *)(v4 + 260));
    }
    if ( *(uint32_t *)(a1 + 296) != -1 && *(uint32_t *)(a1 + 300) == 0 )
    {
      v7 = *(uint32_t *)(a1 + 228);
      if ( v7 != 0 && *(uint32_t *)(v7 + 316) != 0 )
      {
        if ( *(uint32_t *)(a1 + 312) != 0 )
        {
          CRYPTO_free(*(void **)(a1 + 312));
          *(uint32_t *)(a1 + 312) = 0;
          v7 = *(uint32_t *)(a1 + 228);
        }
        *(uint32_t *)(a1 + 316) = -1;
        v8 = (*(int (**)(int, uint32_t))(v7 + 316))(a1, *(uint32_t *)(v7 + 320));
        if ( v8 == 0 )
        {
          v15 = 113;
          v9 = 113;
LABEL_14:
          ssl3_send_alert((uint32_t *)a1, 2, v9);
          return -1;
        }
        if ( v8 < 0 )
        {
          v15 = 80;
          v9 = 80;
          goto LABEL_14;
        }
      }
    }
    if ( v6 == 2 )
    {
      v9 = v15;
      goto LABEL_14;
    }
    if ( v6 == 3 )
    {
      *(uint32_t *)(a1 + 292) = 0;
      return 1;
    }
    else
    {
      result = 1;
      if ( v6 == 1 )
      {
        ssl3_send_alert((uint32_t *)a1, 1, v15);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: tls1_process_ticket  (binary VA: 0x13025f0)
// Original: tls1_process_ticket
// ----------------------------------------------------------------------------
int tls1_process_ticket(int *a1, char *src, size_t a3, unsigned int a4, int **a5)
{
  char v5;
  int v6;
  uint16_t *v7;
  uint8_t *v8;
  unsigned int v9;
  uint8_t *v10;
  int16_t v11;
  uint8_t v12; // di
  uint16_t v13; // si
  int v14;
  int result;
  char v16;

  SSL_ctrl(a1, 32, 0, 0);
  if ( (v5 & 0x40) == 0 )
  {
    v6 = *a1;
    if ( a4 != 0 && v6 > 768 )
    {
      v7 = (uint16_t *)&src[a3];
      if ( (unsigned int)(uintptr_t)(&src[a3]) >= a4 )
        return -1;
      if ( v6 == 65279 )
      {
        v7 = (uint16_t *)((char *)v7 + *(uint8_t *)v7 + 1);
        if ( a4 <= (unsigned int)(uintptr_t)(v7) )
          return -1;
      }
      v8 = (uint8_t *)v7 + __builtin_bswap16(*v7) + 2;
      if ( a4 <= (unsigned int)(uintptr_t)(v8) )
        return -1;
      v9 = (unsigned int)(uintptr_t)(&v8[*v8 + 1]);
      if ( a4 < v9 )
        return -1;
      v10 = (uint8_t *)(v9 + 2);
      if ( a4 > (unsigned int)(uintptr_t)(v10) )
      {
        while ( 1 )
        {
          v14 = (int)(uintptr_t)(v10 + 4);
          if ( a4 < (unsigned int)(uintptr_t)(v10 + 4) )
            break;
          v11 = *v10;
          v12 = v10[1];
          v13 = __builtin_bswap16(*((uint16_t *)v10 + 1));
          v10 = (uint8_t *)(v14 + v13);
          if ( a4 < (unsigned int)(uintptr_t)(v10) )
            break;
          if ( (v12 | (uint16_t)(v11 << 8)) == 35 )
          {
            SSL_ctrl(a1, 32, 0, 0);
            if ( (v16 & 0x40) != 0 )
              return 1;
            if ( v13 != 0 )
            {
              result = 0;
              if ( a1[90] == 0 )
                return sub_12FFF40((int)(uintptr_t)(a1), v14, v13, src, a3, a5);
            }
            else
            {
              a1[80] = 1;
              return 0;
            }
            return result;
          }
        }
      }
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl_add_clienthello_renegotiate_ext  (binary VA: 0x1302800)
// Original: ssl_add_clienthello_renegotiate_ext
// ----------------------------------------------------------------------------
int ssl_add_clienthello_renegotiate_ext(int a1, uint8_t *a2, uint32_t *a3, int a4)
{
  uint8_t v4;

  if ( a2 == nullptr )
    goto LABEL_4;
  v4 = *(uint8_t *)(*(uint32_t *)(a1 + 88) + 980);
  if ( v4 < a4 )
  {
    *a2 = v4;
    memcpy(a2 + 1, (const void *)(*(uint32_t *)(a1 + 88) + 916), *(uint8_t *)(*(uint32_t *)(a1 + 88) + 980));
LABEL_4:
    *a3 = *(uint8_t *)(*(uint32_t *)(a1 + 88) + 980) + 1;
    return 1;
  }
  ERR_put_error(20, 298, 335, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl_parse_clienthello_renegotiate_ext  (binary VA: 0x13028b0)
// Original: ssl_parse_clienthello_renegotiate_ext
// ----------------------------------------------------------------------------
int ssl_parse_clienthello_renegotiate_ext(int a1, uint8_t *a2, int a3, uint32_t *a4)
{
  int v4;
  int v5;

  if ( a3 > 0 && (v4 = *a2) + 1 == a3 )
  {
    v5 = *(uint32_t *)(a1 + 88);
    if ( *(uint8_t *)(v5 + 980) == v4
      && memcmp(a2 + 1, (const void *)(v5 + 916), *(uint8_t *)(v5 + 980)) == 0 )
    {
      *(uint32_t *)(v5 + 1048) = 1;
      return 1;
    }
    else
    {
      ERR_put_error(20, 300, 337, &unk_1B15112, 0);
      *a4 = 40;
      return 0;
    }
  }
  else
  {
    ERR_put_error(20, 300, 336, &unk_1B15112, 0);
    *a4 = 47;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl_add_serverhello_renegotiate_ext  (binary VA: 0x13029c0)
// Original: ssl_add_serverhello_renegotiate_ext
// ----------------------------------------------------------------------------
int ssl_add_serverhello_renegotiate_ext(int a1, uint8_t *a2, uint32_t *a3, int a4)
{
  int v4;
  uint8_t v5;
  uint8_t v6;

  if ( a2 != nullptr )
  {
    v4 = *(uint32_t *)(a1 + 88);
    v5 = *(uint8_t *)(v4 + 980);
    v6 = *(uint8_t *)(v4 + 1045);
    if ( v5 + v6 >= a4 )
    {
      ERR_put_error(20, 299, 335, &unk_1B15112, 0);
      return 0;
    }
    *a2 = v6 + v5;
    memcpy(a2 + 1, (const void *)(*(uint32_t *)(a1 + 88) + 916), *(uint8_t *)(*(uint32_t *)(a1 + 88) + 980));
    memcpy(
      &a2[*(uint8_t *)(*(uint32_t *)(a1 + 88) + 980) + 1],
      (const void *)(*(uint32_t *)(a1 + 88) + 981),
      *(uint8_t *)(*(uint32_t *)(a1 + 88) + 1045));
  }
  *a3 = *(uint8_t *)(*(uint32_t *)(a1 + 88) + 980) + *(uint8_t *)(*(uint32_t *)(a1 + 88) + 1045) + 1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ssl_parse_serverhello_renegotiate_ext  (binary VA: 0x1302ad0)
// Original: ssl_parse_serverhello_renegotiate_ext
// ----------------------------------------------------------------------------
int ssl_parse_serverhello_renegotiate_ext(int a1, uint8_t *a2, int a3, uint32_t *a4)
{
  int v4;
  uint8_t v5; // di
  uint8_t v6;
  int v7;
  int v8;
  int v9;
  size_t n;

  v4 = *(uint32_t *)(a1 + 88);
  v5 = *(uint8_t *)(v4 + 980);
  v6 = *(uint8_t *)(v4 + 1045);
  v7 = v5 + v6;
  if ( v7 != 0 )
  {
    if ( v5 == 0 )
      OpenSSLDie(&unk_1B15112, 0, "!expected_len || s->s3->previous_client_finished_len");
    if ( v6 == 0 )
      OpenSSLDie(&unk_1B15112, 0, "!expected_len || s->s3->previous_server_finished_len");
  }
  if ( a3 <= 0 )
  {
    ERR_put_error(20, 301, 336, &unk_1B15112, 0);
  }
  else
  {
    v8 = *a2;
    if ( v8 + 1 != a3 )
    {
      ERR_put_error(20, 301, 336, &unk_1B15112, 0);
      *a4 = 47;
      return 0;
    }
    if ( v8 != v7
      || (v9 = *(uint32_t *)(a1 + 88), n = *(uint8_t *)(v9 + 980),
                                     memcmp(a2 + 1, (const void *)(v9 + 916), n) != 0) )
    {
      ERR_put_error(20, 301, 337, &unk_1B15112, 0);
      *a4 = 40;
      return 0;
    }
    if ( memcmp(&a2[n + 1], (const void *)(v9 + 981), *(uint8_t *)(v9 + 1045)) == 0 )
    {
      *(uint32_t *)(v9 + 1048) = 1;
      return 1;
    }
    ERR_put_error(20, 301, 337, &unk_1B15112, 0);
  }
  *a4 = 47;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ssl3_client_hello  (binary VA: 0x13066e0)
// Original: ssl3_client_hello
// ----------------------------------------------------------------------------
int ssl3_client_hello(int a1)
{
  uint32_t *v1;
  int v2;
  int result;
  uint32_t *v4;
  int new_session;
  uint8_t *v6;
  time_t v7;
  int v8;
  uint32_t *v9;
  uint8_t *v10;
  signed int n;
  int ciphers;
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  uint8_t *v18;
  int v19;
  int v20;
  char *v21;
  char *v22;
  signed int v23;
  uint8_t *v24;
  uint32_t *v25;
  uint8_t *v26;
  int v27;

  v1 = (uint32_t *)a1;
  v2 = *(uint32_t *)(*(uint32_t *)(a1 + 60) + 4);
  if ( *(uint32_t *)(a1 + 52) != 4368 )
    return ssl3_do_write(v1, 22);
  v4 = *(uint32_t **)(a1 + 192);
  if ( v4 != nullptr && *v4 == *(uint32_t *)a1 && (v4[17] != 0 || v4[57] != 0) && v4[37] == 0
    || (new_session = ssl_get_new_session(a1, 0), result = -1, new_session != 0) )
  {
    v6 = *(uint8_t **)(a1 + 88);
    v7 = time(nullptr);
    v6[192] = HIBYTE(v7);
    v6[195] = v7;
    v6[193] = BYTE2(v7);
    v6[194] = BYTE1(v7);
    v8 = RAND_pseudo_bytes(v6 + 196, 28);
    result = -1;
    if ( v8 > 0 )
    {
      *(uint8_t *)(v2 + 4) = BYTE1(*(uint32_t *)a1);
      *(uint8_t *)(v2 + 5) = *(uint32_t *)a1;
      v9 = *(uint32_t **)(a1 + 88);
      *(uint32_t *)(a1 + 272) = *(uint32_t *)a1;
      *(uint32_t *)(v2 + 6) = v9[48];
      *(uint32_t *)(v2 + 10) = v9[49];
      *(uint32_t *)(v2 + 14) = v9[50];
      *(uint32_t *)(v2 + 18) = v9[51];
      *(uint32_t *)(v2 + 22) = v9[52];
      *(uint32_t *)(v2 + 26) = v9[53];
      *(uint32_t *)(v2 + 30) = v9[54];
      *(uint32_t *)(v2 + 34) = v9[55];
      if ( *(uint32_t *)(a1 + 40) != 0 )
      {
        *(uint8_t *)(v2 + 38) = 0;
        v10 = (uint8_t *)(v2 + 39);
      }
      else
      {
        v10 = (uint8_t *)(v2 + 39);
        n = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 68);
        *(uint8_t *)(v2 + 38) = n;
        if ( n != 0 )
        {
          if ( n > 32 )
            goto LABEL_31;
          v23 = n;
          memcpy((void *)(v2 + 39), (const void *)(*(uint32_t *)(a1 + 192) + 72), n);
          v10 += v23;
        }
      }
      ciphers = SSL_get_ciphers(a1);
      v13 = ssl_cipher_list_to_bytes((uint32_t *)a1, ciphers, (int)(uintptr_t)(v10 + 2), nullptr);
      if ( v13 == 0 )
      {
        ERR_put_error(20, 131, 181, &unk_1B15112, 0);
        return -1;
      }
      v10[1] = v13;
      *v10 = BYTE1(v13);
      v14 = &v10[v13 + 2];
      if ( (*(uint8_t *)(a1 + 258) & 2) != 0 || (v15 = *(uint32_t *)(*(uint32_t *)(a1 + 228) + 152)) == 0 )
      {
        *v14 = 1;
        v26 = v14 + 1;
      }
      else
      {
        v24 = v14;
        v16 = sk_num(v15);
        *v24 = v16 + 1;
        v26 = v24 + 1;
        if ( v16 > 0 )
        {
          v27 = v2;
          v17 = 0;
          v18 = v24;
          v19 = a1;
          v20 = v16;
          do
          {
            v25 = (uint32_t *)v19;
            v18[v17 + 1] = *(uint32_t *)sk_value(*(uint32_t *)(*(uint32_t *)(v19 + 228) + 152), v17);
            ++v17;
            v19 = (int)(uintptr_t)(v25);
          }
          while ( v17 != v20 );
          v2 = v27;
          v1 = v25;
          v26 += v17;
        }
      }
      *v26 = 0;
      if ( ssl_prepare_clienthello_tlsext((int)(uintptr_t)(v1)) <= 0 )
      {
        ERR_put_error(20, 131, 226, &unk_1B15112, 0);
        return -1;
      }
      v21 = ssl_add_clienthello_tlsext((int)(uintptr_t)(v1), v26 + 1, v2 + 0x4000);
      if ( v21 != nullptr )
      {
        v22 = &v21[-v2 - 4];
        *(uint8_t *)v2 = 1;
        *(uint8_t *)(v2 + 3) = (uint8_t)(uintptr_t)(v22);
        *(uint8_t *)(v2 + 1) = BYTE2(v22);
        *(uint8_t *)(v2 + 2) = BYTE1(v22);
        v1[13] = 4369;
        v1[17] = (uint32_t)(uintptr_t)(&v21[-v2]);
        v1[18] = 0;
        return ssl3_do_write(v1, 22);
      }
LABEL_31:
      ERR_put_error(20, 131, 68, &unk_1B15112, 0);
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_new_session_ticket  (binary VA: 0x1306ab0)
// Original: ssl3_get_new_session_ticket
// ----------------------------------------------------------------------------
int ssl3_get_new_session_ticket(uint32_t *a1)
{
  int result;
  int v2;
  int v3;
  uint8_t *v4;
  size_t n;
  int v6;
  void *dest;
  const void *src;
  int v9;
  int v10;
  uint32_t v11[4];

  result = (*(int (**)(uint32_t *, int, int, int, int, uint32_t *))(a1[2] + 48))(a1, 4576, 4577, -1, 0x4000, v11);
  if ( v11[0] == 0 )
    return result;
  v2 = a1[22];
  v3 = *(uint32_t *)(v2 + 832);
  if ( v3 == 20 )
  {
    *(uint32_t *)(v2 + 852) = 1;
    return 1;
  }
  if ( v3 != 4 )
  {
    ERR_put_error(20, 283, 114, &unk_1B15112, 0);
    v10 = 10;
    goto LABEL_13;
  }
  if ( result <= 5
    || (v4 = (uint8_t *)a1[16],
        *(uint32_t *)(a1[48] + 236) = *v4 << 24,
        *(uint32_t *)(a1[48] + 236) |= v4[1] << 16,
        *(uint32_t *)(a1[48] + 236) |= v4[2] << 8,
        *(uint32_t *)(a1[48] + 236) |= v4[3],
        (n = v4[5] | (v4[4] << 8)) + 6 != result) )
  {
    ERR_put_error(20, 283, 159, &unk_1B15112, 0);
    v10 = 2;
LABEL_13:
    ssl3_send_alert(a1, 2, v10);
    return -1;
  }
  v6 = a1[48];
  if ( *(uint32_t *)(v6 + 228) != 0 )
  {
    CRYPTO_free(*(void **)(v6 + 228));
    *(uint32_t *)(a1[48] + 232) = 0;
    v6 = a1[48];
  }
  *(uint32_t *)(v6 + 228) = (uint32_t)(uintptr_t)(CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0));
  dest = *(void **)(a1[48] + 228);
  if ( dest != nullptr )
  {
    src = v4 + 6;
    memcpy(dest, src, n);
    *(uint32_t *)(a1[48] + 232) = n;
    v9 = (int)(uintptr_t)(EVP_sha256());
    EVP_Digest(src, n, a1[48] + 72, a1[48] + 68, v9, 0);
    return 1;
  }
  else
  {
    ERR_put_error(20, 283, 65, &unk_1B15112, 0);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_cert_status  (binary VA: 0x1309370)
// Original: ssl3_get_cert_status
// ----------------------------------------------------------------------------
int ssl3_get_cert_status(uint32_t *a1)
{
  unsigned int v1;
  int v2;
  uint8_t *v3;
  size_t v4;
  void *v5;
  int v6;
  int v7;
  int (*v8)(uint32_t *, uint32_t);
  int v9;
  int v11;
  typedef uint8_t *_g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v1 = (*(int (**)(uint32_t *, int, int, int, int, uint32_t *))(a1[2] + 48))(a1, 4592, 4593, 22, 0x4000, v13);
  v2 = v1;
  if ( v13[0] != 0 )
  {
    if ( v1 <= 3 )
      goto LABEL_14;
    v3 = (uint8_t *)a1[16];
    if ( *v3 != 1 )
    {
      ERR_put_error(20, 289, 329, &unk_1B15112, 0);
      v11 = 50;
      goto LABEL_13;
    }
    v4 = (uint8_t)v3[3] | ((uint8_t)v3[2] << 8) | ((uint8_t)v3[1] << 16);
    if ( v4 + 4 != v2 )
    {
LABEL_14:
      ERR_put_error(20, 289, 159, &unk_1B15112, 0);
      v11 = 50;
      goto LABEL_13;
    }
    v5 = (void *)a1[78];
    if ( v5 != nullptr )
    {
      v12 = (uint8_t *)a1[16];
      CRYPTO_free(v5);
      v3 = v12;
    }
    v6 = (int)(uintptr_t)(BUF_memdup(v3 + 4, v4));
    a1[78] = v6;
    if ( v6 == 0 )
    {
LABEL_12:
      ERR_put_error(20, 289, 65, &unk_1B15112, 0);
      v11 = 80;
LABEL_13:
      v2 = -1;
      ssl3_send_alert(a1, 2, v11);
      return v2;
    }
    v7 = a1[57];
    a1[79] = v4;
    v2 = 1;
    v8 = *(int (**)(uint32_t *, uint32_t))(v7 + 316);
    if ( v8 != nullptr )
    {
      v9 = v8(a1, *(uint32_t *)(v7 + 320));
      if ( v9 == 0 )
      {
        ERR_put_error(20, 289, 328, &unk_1B15112, 0);
        v11 = 113;
        goto LABEL_13;
      }
      if ( v9 >= 0 )
        return v2;
      goto LABEL_12;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ssl3_get_server_done  (binary VA: 0x1309590)
// Original: ssl3_get_server_done
// ----------------------------------------------------------------------------
int ssl3_get_server_done(uint32_t *a1)
{
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  result = (*(int (**)(uint32_t *, int, int, int, int, int *))(a1[2] + 48))(a1, 4448, 4449, 14, 30, &v2);
  if ( v2 != 0 )
  {
    if ( result > 0 )
    {
      ssl3_send_alert(a1, 2, 50);
      ERR_put_error(20, 145, 159, &unk_1B15112, 0);
      return -1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_client_key_exchange  (binary VA: 0x1309650)
// Original: ssl3_send_client_key_exchange
// ----------------------------------------------------------------------------
int ssl3_send_client_key_exchange(int a1)
{
  uint8_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int degree;
  size_t v14;
  int v15;
  int v16;
  int v17;
  size_t v18;
  int v19;
  uint32_t *v20;
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
  int digestbyname;
  size_t v32;
  void *v33;
  size_t v34;
  int (*v35)(int, uint32_t, char *, int, uint8_t *, int);
  size_t v36;
  uint32_t *v37;
  size_t v38;
  uint8_t *v39;
  int v40;
  void *v41;
  size_t v42;
  int v43;
  int v44;
  char *v45; // kr00_4
  uint32_t *pubkey;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef int _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef void *_g4_t_v58;
  typedef void *_g4_t_v59;
  typedef size_t _g4_t_v60;
  typedef size_t _g4_t_v61;
  typedef size_t _g4_t_v62;
  typedef void *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef void *_g4_t_v69;
  typedef void *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef void *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef void *_g4_t_v74;
  typedef uint8_t *_g4_t_v75;
  typedef void *_g4_t_v76;
  typedef void *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint8_t _g4_t_v81[32];
  typedef char _g4_t_src[128];
  typedef uint8_t _g4_t_v83[2];
  typedef uint8_t _g4_t_s[538];
  enum : size_t {
    _g4_s0 = 816u,
    _g4_s1 = (0u + sizeof(_g4_t_v47)) > _g4_s0 ? (0u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v48)) > _g4_s1 ? (0u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v49)) > _g4_s2 ? (0u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v50)) > _g4_s3 ? (0u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v51)) > _g4_s4 ? (0u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v52)) > _g4_s5 ? (0u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v53)) > _g4_s6 ? (0u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v54)) > _g4_s7 ? (0u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v55)) > _g4_s8 ? (0u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v56)) > _g4_s9 ? (0u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v57)) > _g4_s10 ? (0u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v58)) > _g4_s11 ? (4u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v59)) > _g4_s12 ? (4u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v60)) > _g4_s13 ? (4u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v61)) > _g4_s14 ? (4u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v62)) > _g4_s15 ? (4u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (8u + sizeof(_g4_t_v63)) > _g4_s16 ? (8u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v64)) > _g4_s17 ? (12u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v65)) > _g4_s18 ? (12u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v66)) > _g4_s19 ? (12u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v67)) > _g4_s20 ? (16u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v68)) > _g4_s21 ? (16u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v69)) > _g4_s22 ? (16u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v70)) > _g4_s23 ? (20u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v71)) > _g4_s24 ? (20u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v72)) > _g4_s25 ? (20u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v73)) > _g4_s26 ? (20u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v74)) > _g4_s27 ? (24u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v75)) > _g4_s28 ? (24u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v76)) > _g4_s29 ? (24u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (24u + sizeof(_g4_t_v77)) > _g4_s30 ? (24u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v78)) > _g4_s31 ? (28u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v79)) > _g4_s32 ? (32u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v80)) > _g4_s33 ? (44u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v81)) > _g4_s34 ? (48u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_src)) > _g4_s35 ? (80u + sizeof(_g4_t_src)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v83)) > _g4_s36 ? (208u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (210u + sizeof(_g4_t_s)) > _g4_s37 ? (210u + sizeof(_g4_t_s)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 20u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 24u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 24u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 28u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 48u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 80u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 208u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 210u);

  if ( *(uint32_t *)(a1 + 52) != 4480 )
    return ssl3_do_write((uint32_t *)a1, 22);
  v1 = *(uint8_t **)(*(uint32_t *)(a1 + 60) + 4);
  v74 = v1 + 4;
  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 836) + 12);
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 0xE) != 0 )
    {
      v19 = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 152);
      if ( v19 != 0 )
      {
        if ( *(uint32_t *)(v19 + 80) != 0 )
        {
          v52 = *(uint32_t *)(v19 + 80);
          v20 = (uint32_t *)DHparams_dup(v52);
          v71 = v20;
          if ( v20 != nullptr && DH_generate_key(v20) != 0 )
          {
            v21 = DH_compute_key(v74, *(uint32_t *)(v52 + 20), v71);
            if ( v21 > 0 )
            {
              v66 = *(uint32_t *)(a1 + 192);
              v53 = v21;
              *(uint32_t *)(v66 + 16) = (*(int (**)(int, int, void *, int))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100)
                                                                                + 12))(
                                        a1,
                                        v66 + 20,
                                        v74,
                                        v21);
              memset(v74, 0, v53);
              v22 = BN_num_bits(v71[5]);
              v23 = v22 + 14;
              v24 = v22 + 7;
              if ( v24 < 0 )
                v24 = v23;
              v1[5] = v24 >> 3;
              v1[4] = v24 >> 11;
              v54 = v24 >> 3;
              BN_bn2bin(v71[5], v1 + 6);
              DH_free(v71);
              v9 = v54 + 2;
              goto LABEL_15;
            }
          }
          ERR_put_error(20, 152, 5, &unk_1B15112, 0);
        }
        else
        {
          ssl3_send_alert((uint32_t *)a1, 2, 40);
          ERR_put_error(20, 152, 238, &unk_1B15112, 0);
        }
      }
      else
      {
        ssl3_send_alert((uint32_t *)a1, 2, 10);
        ERR_put_error(20, 152, 244, &unk_1B15112, 0);
      }
      goto LABEL_77;
    }
    if ( (v2 & 0xE0) != 0 )
    {
      v63 = nullptr;
      v11 = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 152);
      v12 = *(uint32_t *)(v11 + 84);
      if ( v12 == 0
        && ((pubkey = (uint32_t *)X509_get_pubkey(*(uint32_t *)(v11 + 52)), v63 = pubkey, pubkey == nullptr)
         || *pubkey != 408
         || (v12 = pubkey[5]) == 0)
        || (v49 = v12, v68 = EC_KEY_get0_group(v12), (v64 = EC_KEY_get0_public_key(v49)) == 0)
        || v68 == 0 )
      {
        ERR_put_error(20, 152, 68, &unk_1B15112, 0);
        v70 = nullptr;
        goto LABEL_57;
      }
      v70 = (void *)EC_KEY_new();
      if ( v70 == nullptr )
      {
        ERR_put_error(20, 152, 65, &unk_1B15112, 0);
        goto LABEL_57;
      }
      if ( EC_KEY_set_group(v70, v68) == 0 )
      {
        ERR_put_error(20, 152, 16, &unk_1B15112, 0);
        goto LABEL_57;
      }
      if ( EC_KEY_generate_key(v70) == 0
        || (degree = EC_GROUP_get_degree(v68)) <= 0
        || (int)(v14 = ECDH_compute_key(v74, (degree + 7) >> 3, v64, v70, 0)) <= 0 )
      {
        ERR_put_error(20, 152, 43, &unk_1B15112, 0);
        goto LABEL_57;
      }
      v78 = *(uint32_t *)(a1 + 192);
      v50 = v14;
      *(uint32_t *)(v78 + 16) = (*(int (**)(int, int, void *, size_t))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 12))(
                                a1,
                                v78 + 20,
                                v74,
                                v14);
      memset(v74, 0, v50);
      v15 = EC_KEY_get0_public_key(v70);
      v65 = EC_POINT_point2oct(v68, v15, 4, 0, 0, 0);
      v76 = (void *)CRYPTO_malloc(v65, (int)(uintptr_t)(&unk_1B15112), 0);
      v16 = (int)(uintptr_t)(BN_CTX_new());
      if ( v16 == 0 || v76 == nullptr )
      {
        v59 = (void *)v16;
        ERR_put_error(20, 152, 65, &unk_1B15112, 0);
        BN_CTX_free(v59);
        if ( v76 != nullptr )
          CRYPTO_free(v76);
        goto LABEL_61;
      }
      v58 = (void *)v16;
      v17 = EC_KEY_get0_public_key(v70);
      v18 = EC_POINT_point2oct(v68, v17, 4, v76, v65, v58);
      v1[4] = v18;
      v51 = v18;
      memcpy(v1 + 5, v76, v18);
      BN_CTX_free(v58);
      CRYPTO_free(v76);
      EC_KEY_free(v70);
      EVP_PKEY_free(v63);
      v9 = v51 + 1;
LABEL_15:
      v1[3] = v9;
      *v1 = 16;
      v1[1] = BYTE2(v9);
      v1[2] = BYTE1(v9);
      *(uint32_t *)(a1 + 52) = 4481;
      *(uint32_t *)(a1 + 68) = v9 + 4;
      *(uint32_t *)(a1 + 72) = 0;
      return ssl3_do_write((uint32_t *)a1, 22);
    }
    if ( (v2 & 0x200) != 0 )
    {
      v26 = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 152);
      v27 = *(uint32_t *)(v26 + 68);
      if ( v27 != 0 || (v27 = *(uint32_t *)(v26 + 60)) != 0 )
      {
        v69 = (void *)X509_get_pubkey(v27);
        v77 = (void *)EVP_PKEY_CTX_new(v69, 0);
        EVP_PKEY_encrypt_init(v77);
        RAND_bytes(v81, 32);
        if ( *(uint32_t *)(*(uint32_t *)(a1 + 88) + 856) != 0
          && *(uint32_t *)(**(uint32_t **)(a1 + 152) + 4) != 0
          && (int)EVP_PKEY_derive_set_peer(v77, *(uint32_t *)(**(uint32_t **)(a1 + 152) + 4)) <= 0 )
        {
          ERR_clear_error(v29, v28);
        }
        v72 = (void *)EVP_MD_CTX_create();
        v30 = (int)(uintptr_t)(OBJ_nid2sn(809));
        digestbyname = EVP_get_digestbyname(v30);
        EVP_DigestInit(v72, digestbyname);
        EVP_DigestUpdate(v72, *(uint32_t *)(a1 + 88) + 192, 32);
        EVP_DigestUpdate(v72, *(uint32_t *)(a1 + 88) + 160, 32);
        EVP_DigestFinal_ex(v72, src, &v80);
        EVP_MD_CTX_destroy(v72);
        if ( (int)EVP_PKEY_CTX_ctrl(v77, -1, 256, 8, 8, src) >= 0 )
        {
          v1[4] = 48;
          v79 = 255;
          if ( (int)EVP_PKEY_encrypt(v77, v83, &v79, v81, 32) >= 0 )
          {
            v32 = v79;
            if ( v79 <= 0x7F )
            {
              v1[5] = v79;
              v33 = v1 + 6;
              v34 = v32 + 2;
            }
            else
            {
              v1[5] = -127;
              v1[6] = v32;
              v33 = v1 + 7;
              v34 = v32 + 3;
            }
            v55 = v34;
            memcpy(v33, v83, v32);
            if ( (int)EVP_PKEY_CTX_ctrl(v77, -1, -1, 2, 2, 0) > 0 )
              **(uint32_t **)(a1 + 88) |= 0x10u;
            EVP_PKEY_CTX_free(v77);
            v73 = *(uint32_t *)(a1 + 192);
            *(uint32_t *)(v73 + 16) = (*(int (**)(int, int, uint8_t *, int))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100)
                                                                               + 12))(
                                      a1,
                                      v73 + 20,
                                      v81,
                                      32);
            EVP_PKEY_free(v69);
            v9 = v55;
            goto LABEL_15;
          }
        }
        ERR_put_error(20, 152, 274, &unk_1B15112, 0);
      }
      else
      {
        ERR_put_error(20, 152, 330, &unk_1B15112, 0);
      }
      goto LABEL_77;
    }
    if ( (v2 & 0x100) == 0 )
    {
      ssl3_send_alert((uint32_t *)a1, 2, 40);
LABEL_87:
      ERR_put_error(20, 152, 68, &unk_1B15112, 0);
LABEL_77:
      v63 = nullptr;
      v70 = nullptr;
      goto LABEL_57;
    }
    v35 = *(int (**)(int, uint32_t, char *, int, uint8_t *, int))(a1 + 220);
    if ( v35 == nullptr )
    {
      ERR_put_error(20, 152, 224, &unk_1B15112, 0);
      goto LABEL_77;
    }
    v36 = v35(a1, *(uint32_t *)(*(uint32_t *)(a1 + 228) + 332), src, 128, v83, 516);
    if ( v36 > 0x100 )
    {
      ERR_put_error(20, 152, 68, &unk_1B15112, 0);
    }
    else if ( v36 != 0 )
    {
      v60 = v36;
      memmove(&s[v36 + 2], v83, v36);
      v83[0] = BYTE1(v60);
      v83[1] = v60;
      memset(s, 0, v60);
      v38 = v60;
      v39 = &s[v60];
      *v39 = BYTE1(v60);
      v39[1] = v60;
      v40 = *(uint32_t *)(a1 + 192);
      v41 = *(void **)(v40 + 140);
      if ( v41 != nullptr )
      {
        CRYPTO_free(v41);
        v40 = *(uint32_t *)(a1 + 192);
        v38 = v60;
      }
      v61 = v38;
      *(uint32_t *)(v40 + 140) = (uint32_t)(uintptr_t)(BUF_strdup(*(char **)(*(uint32_t *)(a1 + 228) + 332)));
      v42 = v61;
      v43 = *(uint32_t *)(a1 + 192);
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 228) + 332) == 0 || *(uint32_t *)(v43 + 140) != 0 )
      {
        if ( *(uint32_t *)(v43 + 144) != 0 )
        {
          CRYPTO_free(*(void **)(v43 + 144));
          v43 = *(uint32_t *)(a1 + 192);
          v42 = v61;
        }
        v62 = v42;
        *(uint32_t *)(v43 + 144) = (uint32_t)(uintptr_t)(BUF_strdup(src));
        v44 = *(uint32_t *)(a1 + 192);
        if ( *(uint32_t *)(v44 + 144) != 0 )
        {
          v57 = *(uint32_t *)(a1 + 192);
          *(uint32_t *)(v57 + 16) = (*(int (**)(int, int, uint8_t *, size_t))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100)
                                                                                + 12))(
                                    a1,
                                    v44 + 20,
                                    v83,
                                    2 * v62 + 4);
          v45 = &src[strlen(src)];
          v1[5] = (uint8_t)(uintptr_t)(v45) - (uint8_t)(uintptr_t)(src);
          v1[4] = (uint16_t)((uint16_t)(uintptr_t)(v45) - (uint16_t)(uintptr_t)(src)) >> 8;
          memcpy(v1 + 6, src, v45 - src);
          OPENSSL_cleanse(src, 0x80u);
          OPENSSL_cleanse(v83, 0x204u);
          v9 = v45 - src + 2;
          goto LABEL_15;
        }
      }
      ERR_put_error(20, 152, 65, &unk_1B15112, 0);
    }
    else
    {
      ERR_put_error(20, 152, 223, &unk_1B15112, 0);
    }
    OPENSSL_cleanse(src, 0x80u);
    OPENSSL_cleanse(v83, 0x204u);
    ssl3_send_alert((uint32_t *)a1, 2, 40);
    v63 = nullptr;
    v70 = nullptr;
    goto LABEL_57;
  }
  v3 = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 152);
  v4 = *(uint32_t *)(v3 + 76);
  if ( v4 == 0 )
  {
    v37 = (uint32_t *)X509_get_pubkey(*(uint32_t *)(v3 + 12));
    if ( v37 != nullptr && *v37 == 6 && v37[5] != 0 )
    {
      v56 = v37[5];
      EVP_PKEY_free(v37);
      v4 = v56;
      goto LABEL_4;
    }
    goto LABEL_87;
  }
LABEL_4:
  v5 = *(uint32_t *)(a1 + 272);
  v47 = v4;
  v83[0] = BYTE1(v5);
  v83[1] = v5;
  if ( (int)RAND_bytes(s, 46) > 0 )
  {
    *(uint32_t *)(*(uint32_t *)(a1 + 192) + 16) = 48;
    v6 = v1 + 6;
    if ( *(int *)a1 < 769 )
      v6 = v1 + 4;
    v75 = v6;
    v7 = RSA_public_encrypt(48, v83, v6, v47, 1);
    v8 = *(uint32_t *)(a1 + 256);
    if ( (v8 & 0x8000000) != 0 )
    {
      ++v75[1];
      v8 = *(uint32_t *)(a1 + 256);
    }
    if ( (v8 & 0x10000000) != 0 )
      v83[0] = 112;
    if ( v7 > 0 )
    {
      if ( *(int *)a1 > 768 )
      {
        v1[5] = v7;
        v25 = v7 >> 8;
        v7 += 2;
        v1[4] = v25;
      }
      v67 = *(uint32_t *)(a1 + 192);
      v48 = v7;
      *(uint32_t *)(v67 + 16) = (*(int (**)(int, int, uint8_t *, int))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 12))(
                                a1,
                                v67 + 20,
                                v83,
                                48);
      OPENSSL_cleanse(v83, 0x30u);
      v9 = v48;
      goto LABEL_15;
    }
    ERR_put_error(20, 152, 119, &unk_1B15112, 0);
    goto LABEL_77;
  }
  v63 = nullptr;
  v70 = nullptr;
LABEL_57:
  BN_CTX_free(nullptr);
  if ( v70 != nullptr )
LABEL_61:
    EC_KEY_free(v70);
  EVP_PKEY_free(v63);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_client_verify  (binary VA: 0x130a520)
// Original: ssl3_send_client_verify
// ----------------------------------------------------------------------------
int ssl3_send_client_verify(int a1)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  unsigned int v11;
  uint8_t *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  typedef uint8_t *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef uint32_t _g4_t_v20[2];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[76];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v21)) > _g4_s4 ? (40u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v22)) > _g4_s5 ? (44u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v23)) > _g4_s6 ? (60u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v24)) > _g4_s7 ? (80u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);

  v19 = 0;
  v18 = nullptr;
  if ( *(uint32_t *)(a1 + 52) != 4496 )
    goto LABEL_2;
  v17 = *(uint8_t **)(*(uint32_t *)(a1 + 60) + 4);
  v2 = *(int **)(**(uint32_t **)(a1 + 152) + 4);
  v18 = (void *)EVP_PKEY_CTX_new(v2, 0);
  EVP_PKEY_sign_init(v18);
  v3 = (int)(uintptr_t)(EVP_sha1());
  if ( (int)EVP_PKEY_CTX_ctrl(v18, -1, 248, 1, 0, v3) <= 0 )
    ERR_clear_error(v5, v4);
  else
    (*(void (**)(int, int, uint8_t *))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 28))(a1, 64, v23);
  v6 = *v2;
  if ( *v2 == 6 )
  {
    (*(void (**)(int, int, uint8_t *))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 28))(a1, 4, v22);
    if ( (int)RSA_sign(114, v22, 36, v17 + 6, &v19, v2[5]) <= 0 )
    {
      ERR_put_error(20, 153, 4, &unk_1B15112, 0);
      goto LABEL_23;
    }
    v13 = v19;
    v14 = v19 >> 8;
    goto LABEL_17;
  }
  if ( v6 == 116 )
  {
    if ( DSA_sign(v2[1], v23, 20, (uint8_t)(uintptr_t)(v17) + 6, v20, v2[5]) == 0 )
    {
      ERR_put_error(20, 153, 10, &unk_1B15112, 0);
      goto LABEL_23;
    }
    v12 = v17;
    v15 = v20[0];
    v16 = v20[0] >> 8;
    v17[5] = v20[0];
    v17[4] = v16;
    v11 = v15 + 2;
LABEL_13:
    v12[3] = v11;
    v12[1] = BYTE2(v11);
    *v12 = 15;
    v12[2] = BYTE1(v11);
    *(uint32_t *)(a1 + 52) = 4497;
    *(uint32_t *)(a1 + 68) = v11 + 4;
    *(uint32_t *)(a1 + 72) = 0;
LABEL_2:
    EVP_PKEY_CTX_free(v18);
    return ssl3_do_write((uint32_t *)a1, 22);
  }
  if ( v6 == 408 )
  {
    if ( ECDSA_sign(v2[1], v23, 20, v17 + 6, v20, v2[5]) == 0 )
    {
      ERR_put_error(20, 153, 42, &unk_1B15112, 0);
      goto LABEL_23;
    }
    v13 = v20[0];
    v14 = v20[0] >> 8;
LABEL_17:
    v12 = v17;
    v17[5] = v13;
    v17[4] = v14;
    v11 = v13 + 2;
    goto LABEL_13;
  }
  if ( (unsigned int)(v6 - 811) <= 1 )
  {
    v21 = 64;
    (*(void (**)(int, int, uint8_t *))(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 100) + 28))(a1, 809, v22);
    if ( (int)EVP_PKEY_sign(v18, v24, &v21, v22, 32) > 0 )
    {
      v20[0] = 0;
      v7 = 0;
      v8 = 63;
      do
      {
        v9 = v24[v8--];
        v17[v7 + 6] = v9;
        v10 = v20[0];
        v7 = ++v20[0];
      }
      while ( v8 != -1 );
      v11 = v10 + 3;
      v17[5] = v7;
      v17[4] = BYTE1(v7);
      v12 = v17;
      goto LABEL_13;
    }
  }
  ERR_put_error(20, 153, 68, &unk_1B15112, 0);
LABEL_23:
  EVP_PKEY_CTX_free(v18);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ssl3_check_cert_and_algorithm  (binary VA: 0x130a910)
// Original: ssl3_check_cert_and_algorithm
// ----------------------------------------------------------------------------
int ssl3_check_cert_and_algorithm(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int16_t v6; // bp
  int v8;
  int v9;
  int v10;
  int v11;
  void *pubkey;
  int v13;
  int v14;
  int v15;

  v1 = *(uint32_t *)(a1[22] + 836);
  v2 = *(uint32_t *)(v1 + 16);
  v11 = *(uint32_t *)(v1 + 12);
  v3 = 1;
  if ( (v2 & 0x2C) == 0 && (v11 & 0x100) == 0 )
  {
    v4 = *(uint32_t **)(a1[48] + 152);
    if ( v4 == nullptr )
    {
      ERR_put_error(20, 130, 68, &unk_1B15112, 0);
      return 0;
    }
    v14 = v4[19];
    v15 = v4[20];
    v5 = v4[1];
    v13 = v5;
    if ( v5 == 5 )
    {
      v9 = ssl_check_srvr_ecc_cert_and_alg(v4[13], v1);
      v3 = 1;
      if ( v9 != 0 )
        return v3;
      ERR_put_error(20, 130, 304, &unk_1B15112, 0);
      goto LABEL_8;
    }
    pubkey = (void *)X509_get_pubkey(v4[2 * v5 + 3]);
    v6 = X509_certificate_type(v4[2 * v13 + 3], pubkey);
    EVP_PKEY_free(pubkey);
    if ( (v2 & 1) != 0 && (v6 & 0x11) != 0x11 )
    {
      ERR_put_error(20, 130, 170, &unk_1B15112, 0);
LABEL_8:
      ssl3_send_alert(a1, 2, 40);
      return 0;
    }
    if ( (v2 & 2) != 0 && (v6 & 0x12) != 0x12 )
    {
      ERR_put_error(20, 130, 165, &unk_1B15112, 0);
      goto LABEL_8;
    }
    if ( (v11 & 1) != 0 && (v6 & 0x21) != 0x21 && v14 == 0 )
    {
      ERR_put_error(20, 130, 169, &unk_1B15112, 0);
      goto LABEL_8;
    }
    if ( (v11 & 8) != 0 && (v6 & 0x44) != 0x44 && v15 == 0 )
    {
      ERR_put_error(20, 130, 163, &unk_1B15112, 0);
      goto LABEL_8;
    }
    if ( (v11 & 2) != 0 && (v6 & 0x104) != 0x104 )
    {
      ERR_put_error(20, 130, 164, &unk_1B15112, 0);
      goto LABEL_8;
    }
    if ( (v11 & 4) != 0 && (v6 & 0x204) != 0x204 )
    {
      ERR_put_error(20, 130, 162, &unk_1B15112, 0);
      goto LABEL_8;
    }
    v3 = 1;
    if ( (*(uint8_t *)(*(uint32_t *)(a1[22] + 836) + 32) & 2) != 0 && (v6 & 0x1000) == 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        if ( v14 == 0
          || (v8 = RSA_size(v14), v3 = 1, ((*(uint32_t *)(*(uint32_t *)(a1[22] + 836) + 32) & 8) == 0 ? 1024 : 512) < 8 * v8) )
        {
          ERR_put_error(20, 130, 167, &unk_1B15112, 0);
          goto LABEL_8;
        }
      }
      else
      {
        if ( (v11 & 0xE) == 0 )
        {
          ERR_put_error(20, 130, 250, &unk_1B15112, 0);
          goto LABEL_8;
        }
        if ( v15 == 0
          || (v10 = DH_size(v15), v3 = 1,
                                  ((*(uint32_t *)(*(uint32_t *)(a1[22] + 836) + 32) & 8) == 0 ? 1024 : 512) < 8 * v10) )
        {
          ERR_put_error(20, 130, 166, &unk_1B15112, 0);
          goto LABEL_8;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ssl3_check_finished  (binary VA: 0x130adb0)
// Original: ssl3_check_finished
// ----------------------------------------------------------------------------
int ssl3_check_finished(uint32_t *a1)
{
  int result;
  int v2;
  uint32_t v3[4];

  result = 1;
  if ( *(uint32_t *)(a1[48] + 228) != 0 )
  {
    result = (*(int (**)(uint32_t *, int, int, int, uint32_t, uint32_t *))(a1[2] + 48))(
               a1,
               4400,
               4401,
               -1,
               a1[66],
               v3);
    if ( v3[0] != 0 )
    {
      *(uint32_t *)(a1[22] + 852) = 1;
      v2 = *(uint32_t *)(a1[22] + 832);
      if ( v2 == 4 )
        return 2;
      result = 1;
      if ( v2 == 20 )
        return 2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl_do_client_cert_cb  (binary VA: 0x130ae40)
// Original: ssl_do_client_cert_cb
// ----------------------------------------------------------------------------
int ssl_do_client_cert_cb(int a1, int a2, int a3)
{
  int (*v3)(int, int, int);
  int result;

  v3 = *(int (**)(int, int, int))(*(uint32_t *)(a1 + 228) + 116);
  result = 0;
  if ( v3 != nullptr )
    return v3(a1, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ssl3_send_client_certificate  (binary VA: 0x130ae80)
// Original: ssl3_send_client_certificate
// ----------------------------------------------------------------------------
int ssl3_send_client_certificate(uint32_t *a1)
{
  int v1;
  uint32_t **v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v11 = 0;
  v1 = a1[13];
  v12 = nullptr;
  switch ( v1 )
  {
    case 4464:
      v3 = (uint32_t **)a1[38];
      if ( v3 != nullptr )
      {
        v4 = *v3;
        if ( *v4 != 0 && v4[1] != 0 )
        {
LABEL_9:
          v5 = a1[22];
          a1[13] = 4467;
          v6 = 0;
          if ( *(uint32_t *)(v5 + 856) != 2 )
            v6 = **(uint32_t **)a1[38];
          a1[17] = ssl3_output_cert_chain((int)(uintptr_t)(a1), v6);
          a1[18] = 0;
          return ssl3_do_write(a1, 22);
        }
      }
      a1[13] = 4465;
LABEL_13:
      v7 = ssl_do_client_cert_cb((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), (int)(uintptr_t)(&v12));
      v8 = v7;
      if ( v7 < 0 )
      {
        a1[6] = 4;
        return -1;
      }
      a1[6] = 1;
      if ( v7 == 1 )
      {
        if ( v12 != nullptr && (v10 = v11, v11 != 0) )
        {
          a1[13] = 4465;
          LOWORD(v8) = 0;
          if ( SSL_use_certificate(a1, v10) != 0 )
            v8 = SSL_use_PrivateKey(a1, v12) != 0;
        }
        else
        {
          v8 = false;
          ERR_put_error(20, 151, 106, &unk_1B15112, 0);
        }
      }
      if ( v11 != 0 )
        X509_free(v11);
      if ( v12 != nullptr )
        EVP_PKEY_free(v12);
      if ( !v8 )
      {
        v9 = a1[22];
        if ( *a1 == 768 )
        {
          *(uint32_t *)(v9 + 856) = 0;
          ssl3_send_alert(a1, 1, 41);
          return 1;
        }
        *(uint32_t *)(v9 + 856) = 2;
      }
      goto LABEL_9;
    case 4465:
      goto LABEL_13;
    case 4466:
      goto LABEL_9;
    default:
      return ssl3_do_write(a1, 22);
  }
}

// ----------------------------------------------------------------------------
// Function: ERR_load_SSL_strings  (binary VA: 0x130b090)
// Original: ERR_load_SSL_strings
// ----------------------------------------------------------------------------
int ERR_load_SSL_strings()
{
  int result;

  result = ERR_func_error_string(dword_20C5940);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20C5940);
    return ERR_load_strings(0, &unk_20C5FC0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_certificate  (binary VA: 0x130bb00)
// Original: SSL_use_certificate
// ----------------------------------------------------------------------------
int SSL_use_certificate(int a1, int a2)
{
  uint32_t *v2;
  int *pubkey;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v11;
  int v12;
  int *v13;

  if ( a2 == 0 )
  {
    ERR_put_error(20, 198, 67, &unk_1B15112, 0);
    return 0;
  }
  if ( ssl_cert_inst((int *)(a1 + 152)) == 0 )
  {
    ERR_put_error(20, 198, 65, &unk_1B15112, 0);
    return 0;
  }
  v2 = *(uint32_t **)(a1 + 152);
  pubkey = (int *)X509_get_pubkey(a2);
  v13 = pubkey;
  if ( pubkey == nullptr )
  {
    ERR_put_error(20, 191, 268, &unk_1B15112, 0);
    return 0;
  }
  LOBYTE(v4) = ssl_cert_type(a2, pubkey);
  if ( v4 < 0 )
  {
    ERR_put_error(20, 191, 247, &unk_1B15112, 0);
    EVP_PKEY_free(v13);
    return 0;
  }
  v5 = v4 + 6;
  v6 = v2[2 * v4 + 13];
  if ( v6 != 0 )
  {
    EVP_PKEY_copy_parameters(v13, v6);
    ERR_clear_error(v8, v7);
    v9 = (uint32_t *)v2[2 * v5 + 1];
    if ( *v9 != 6 )
      goto LABEL_7;
    if ( (RSA_flags(v9[5]) & 1) == 0 )
    {
      v9 = (uint32_t *)v2[2 * v5 + 1];
LABEL_7:
      if ( X509_check_private_key(a2, v9) == 0 )
      {
        EVP_PKEY_free((void *)v2[2 * v5 + 1]);
        v2[2 * v5 + 1] = 0;
        ERR_clear_error(v12, v11);
      }
    }
  }
  EVP_PKEY_free(v13);
  if ( v2[2 * v5] != 0 )
    X509_free(v2[2 * v5]);
  CRYPTO_add_lock(a2 + 16, 1, 3, &unk_1B15112, 0);
  v2[2 * v5] = a2;
  v2[1] = 0;
  *v2 = (uint32_t)(uintptr_t)(&v2[2 * v5]);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_certificate_file  (binary VA: 0x130bd60)
// Original: SSL_use_certificate_file
// ----------------------------------------------------------------------------
int SSL_use_certificate_file(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  int bio_X509;
  int v7;
  int v9;

  v3 = (int)(uintptr_t)(BIO_s_file());
  v4 = (void *)BIO_new(v3);
  if ( v4 == nullptr )
  {
    ERR_put_error(20, 200, 7, &unk_1B15112, 0);
    return 0;
  }
  if ( (int)BIO_ctrl(v4, 108, 3, a2) <= 0 )
  {
    ERR_put_error(20, 200, 2, &unk_1B15112, 0);
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    bio_X509 = d2i_X509_bio(v4, 0);
    v7 = 13;
  }
  else
  {
    if ( a3 != 1 )
    {
      ERR_put_error(20, 200, 124, &unk_1B15112, 0);
      goto LABEL_6;
    }
    bio_X509 = PEM_read_bio_X509(
                 (int)(uintptr_t)(v4),
                 0,
                 *(uint32_t *)(*(uint32_t *)(a1 + 228) + 108),
                 *(char **)(*(uint32_t *)(a1 + 228) + 112));
    v7 = 9;
  }
  if ( bio_X509 != 0 )
  {
    v9 = bio_X509;
    v5 = SSL_use_certificate(a1, bio_X509);
    X509_free(v9);
    goto LABEL_10;
  }
  ERR_put_error(20, 200, v7, &unk_1B15112, 0);
LABEL_6:
  v5 = 0;
LABEL_10:
  BIO_free(v4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_certificate_ASN1  (binary VA: 0x130bf40)
// Original: SSL_use_certificate_ASN1
// ----------------------------------------------------------------------------
int SSL_use_certificate_ASN1(int a1, char a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = d2i_X509(0, &a2, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = SSL_use_certificate(a1, v3);
    X509_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(20, 199, 13, &unk_1B15112, 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_RSAPrivateKey  (binary VA: 0x130bff0)
// Original: SSL_use_RSAPrivateKey
// ----------------------------------------------------------------------------
int SSL_use_RSAPrivateKey(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  void *pubkey;

  v2 = a2;
  if ( a2 != 0 )
  {
    if ( ssl_cert_inst((int *)(a1 + 152)) != 0 )
    {
      v3 = (int)(uintptr_t)(EVP_PKEY_new());
      if ( v3 != 0 )
      {
        RSA_up_ref(a2);
        EVP_PKEY_assign((char *)v3, 6u, a2);
        v4 = *(uint32_t **)(a1 + 152);
        LOBYTE(v5) = ssl_cert_type(0, (int *)v3);
        if ( v5 < 0 )
        {
          v2 = 0;
          ERR_put_error(20, 193, 247, &unk_1B15112, 0);
        }
        else
        {
          v6 = v5 + 6;
          v7 = v4[2 * v5 + 12];
          if ( v7 == 0
            || (pubkey = (void *)X509_get_pubkey(v7),
                EVP_PKEY_copy_parameters(pubkey, v3),
                EVP_PKEY_free(pubkey),
                ERR_clear_error(v9, v8),
                *(uint32_t *)v3 == 6)
            && (RSA_flags(*(uint32_t *)(v3 + 20)) & 1) != 0
            || X509_check_private_key(v4[2 * v6], v3) != 0 )
          {
            if ( v4[2 * v6 + 1] != 0 )
              EVP_PKEY_free((void *)v4[2 * v6 + 1]);
            CRYPTO_add_lock(v3 + 8, 1, 10, &unk_1B15112, 0);
            v4[2 * v6 + 1] = v3;
            v4[1] = 0;
            *v4 = (uint32_t)(uintptr_t)(&v4[2 * v6]);
            v2 = 1;
          }
          else
          {
            X509_free(v4[2 * v6]);
            v4[2 * v6] = 0;
            v2 = 0;
          }
        }
        EVP_PKEY_free((void *)v3);
      }
      else
      {
        v2 = 0;
        ERR_put_error(20, 204, 6, &unk_1B15112, 0);
      }
    }
    else
    {
      v2 = 0;
      ERR_put_error(20, 204, 65, &unk_1B15112, 0);
    }
  }
  else
  {
    ERR_put_error(20, 204, 67, &unk_1B15112, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_RSAPrivateKey_file  (binary VA: 0x130c260)
// Original: SSL_use_RSAPrivateKey_file
// ----------------------------------------------------------------------------
int SSL_use_RSAPrivateKey_file(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  int bio_RSAPrivateKey;
  int v8;
  void *v9;

  v3 = (int)(uintptr_t)(BIO_s_file());
  v4 = (void *)BIO_new(v3);
  if ( v4 == nullptr )
  {
    v5 = 0;
    ERR_put_error(20, 206, 7, &unk_1B15112, 0);
    return v5;
  }
  if ( (int)BIO_ctrl(v4, 108, 3, a2) <= 0 )
  {
    v5 = 0;
    ERR_put_error(20, 206, 2, &unk_1B15112, 0);
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    bio_RSAPrivateKey = d2i_RSAPrivateKey_bio(v4, 0);
    v8 = 13;
LABEL_9:
    if ( bio_RSAPrivateKey != 0 )
    {
      v9 = (void *)bio_RSAPrivateKey;
      v5 = SSL_use_RSAPrivateKey(a1, bio_RSAPrivateKey);
      RSA_free(v9);
    }
    else
    {
      v5 = 0;
      ERR_put_error(20, 206, v8, &unk_1B15112, 0);
    }
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    bio_RSAPrivateKey = PEM_read_bio_RSAPrivateKey(
                          v4,
                          0,
                          *(uint32_t *)(*(uint32_t *)(a1 + 228) + 108),
                          *(uint32_t *)(*(uint32_t *)(a1 + 228) + 112));
    v8 = 9;
    goto LABEL_9;
  }
  v5 = 0;
  ERR_put_error(20, 206, 124, &unk_1B15112, 0);
LABEL_6:
  BIO_free(v4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_RSAPrivateKey_ASN1  (binary VA: 0x130c450)
// Original: SSL_use_RSAPrivateKey_ASN1
// ----------------------------------------------------------------------------
int SSL_use_RSAPrivateKey_ASN1(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v7 = a2;
  v3 = d2i_RSAPrivateKey(0, &v7, a3);
  v4 = (void *)v3;
  if ( v3 != 0 )
  {
    v5 = SSL_use_RSAPrivateKey(a1, v3);
    RSA_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(20, 205, 13, &unk_1B15112, 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_PrivateKey  (binary VA: 0x130c500)
// Original: SSL_use_PrivateKey
// ----------------------------------------------------------------------------
int SSL_use_PrivateKey(int a1, int *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void *pubkey;

  if ( a2 != nullptr )
  {
    if ( ssl_cert_inst((int *)(a1 + 152)) != 0 )
    {
      v2 = *(uint32_t **)(a1 + 152);
      LOBYTE(v3) = ssl_cert_type(0, a2);
      if ( v3 < 0 )
      {
        ERR_put_error(20, 193, 247, &unk_1B15112, 0);
        return 0;
      }
      else
      {
        v4 = v3 + 6;
        v5 = v2[2 * v3 + 12];
        if ( v5 == 0
          || (pubkey = (void *)X509_get_pubkey(v5),
              EVP_PKEY_copy_parameters(pubkey, a2),
              EVP_PKEY_free(pubkey),
              ERR_clear_error(v7, v6),
              *a2 == 6)
          && (RSA_flags(a2[5]) & 1) != 0
          || X509_check_private_key(v2[2 * v4], a2) != 0 )
        {
          if ( v2[2 * v4 + 1] != 0 )
            EVP_PKEY_free((void *)v2[2 * v4 + 1]);
          CRYPTO_add_lock(a2 + 2, 1, 10, &unk_1B15112, 0);
          v2[2 * v4 + 1] = (uint32_t)(uintptr_t)(a2);
          v2[1] = 0;
          *v2 = (uint32_t)(uintptr_t)(&v2[2 * v4]);
          return 1;
        }
        else
        {
          X509_free(v2[2 * v4]);
          v2[2 * v4] = 0;
          return 0;
        }
      }
    }
    else
    {
      ERR_put_error(20, 201, 65, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(20, 201, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_use_PrivateKey_file  (binary VA: 0x130c700)
// Original: SSL_use_PrivateKey_file
// ----------------------------------------------------------------------------
int SSL_use_PrivateKey_file(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  int *bio_PrivateKey;
  int v8;
  int *v9;

  v3 = (int)(uintptr_t)(BIO_s_file());
  v4 = (void *)BIO_new(v3);
  if ( v4 == nullptr )
  {
    v5 = 0;
    ERR_put_error(20, 203, 7, &unk_1B15112, 0);
    return v5;
  }
  if ( (int)BIO_ctrl(v4, 108, 3, a2) <= 0 )
  {
    v5 = 0;
    ERR_put_error(20, 203, 2, &unk_1B15112, 0);
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    bio_PrivateKey = (int *)PEM_read_bio_PrivateKey(
                              (int)(uintptr_t)(v4),
                              0,
                              *(uint32_t *)(*(uint32_t *)(a1 + 228) + 108),
                              *(char **)(*(uint32_t *)(a1 + 228) + 112));
    v8 = 9;
LABEL_9:
    if ( bio_PrivateKey != nullptr )
    {
      v9 = bio_PrivateKey;
      v5 = SSL_use_PrivateKey(a1, bio_PrivateKey);
      EVP_PKEY_free(v9);
    }
    else
    {
      v5 = 0;
      ERR_put_error(20, 203, v8, &unk_1B15112, 0);
    }
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    bio_PrivateKey = (int *)d2i_PrivateKey_bio(v4, 0);
    v8 = 13;
    goto LABEL_9;
  }
  v5 = 0;
  ERR_put_error(20, 203, 124, &unk_1B15112, 0);
LABEL_6:
  BIO_free(v4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_use_PrivateKey_ASN1  (binary VA: 0x130c8e0)
// Original: SSL_use_PrivateKey_ASN1
// ----------------------------------------------------------------------------
int SSL_use_PrivateKey_ASN1(size_t a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v8 = a3;
  v4 = (int *)d2i_PrivateKey(a1, 0, &v8, a4);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v6 = SSL_use_PrivateKey(a2, v4);
    EVP_PKEY_free(v5);
  }
  else
  {
    v6 = 0;
    ERR_put_error(20, 202, 13, &unk_1B15112, 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_certificate  (binary VA: 0x130c9a0)
// Original: SSL_CTX_use_certificate
// ----------------------------------------------------------------------------
int SSL_CTX_use_certificate(int a1, int a2)
{
  uint32_t *v2;
  int *pubkey;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v11;
  int v12;
  int *v13;

  if ( a2 == 0 )
  {
    ERR_put_error(20, 171, 67, &unk_1B15112, 0);
    return 0;
  }
  if ( ssl_cert_inst((int *)(a1 + 176)) == 0 )
  {
    ERR_put_error(20, 171, 65, &unk_1B15112, 0);
    return 0;
  }
  v2 = *(uint32_t **)(a1 + 176);
  pubkey = (int *)X509_get_pubkey(a2);
  v13 = pubkey;
  if ( pubkey == nullptr )
  {
    ERR_put_error(20, 191, 268, &unk_1B15112, 0);
    return 0;
  }
  LOBYTE(v4) = ssl_cert_type(a2, pubkey);
  if ( v4 < 0 )
  {
    ERR_put_error(20, 191, 247, &unk_1B15112, 0);
    EVP_PKEY_free(v13);
    return 0;
  }
  v5 = v4 + 6;
  v6 = v2[2 * v4 + 13];
  if ( v6 != 0 )
  {
    EVP_PKEY_copy_parameters(v13, v6);
    ERR_clear_error(v8, v7);
    v9 = (uint32_t *)v2[2 * v5 + 1];
    if ( *v9 != 6 )
      goto LABEL_7;
    if ( (RSA_flags(v9[5]) & 1) == 0 )
    {
      v9 = (uint32_t *)v2[2 * v5 + 1];
LABEL_7:
      if ( X509_check_private_key(a2, v9) == 0 )
      {
        EVP_PKEY_free((void *)v2[2 * v5 + 1]);
        v2[2 * v5 + 1] = 0;
        ERR_clear_error(v12, v11);
      }
    }
  }
  EVP_PKEY_free(v13);
  if ( v2[2 * v5] != 0 )
    X509_free(v2[2 * v5]);
  CRYPTO_add_lock(a2 + 16, 1, 3, &unk_1B15112, 0);
  v2[2 * v5] = a2;
  v2[1] = 0;
  *v2 = (uint32_t)(uintptr_t)(&v2[2 * v5]);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_certificate_file  (binary VA: 0x130cc00)
// Original: SSL_CTX_use_certificate_file
// ----------------------------------------------------------------------------
int SSL_CTX_use_certificate_file(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  int bio_X509;
  int v7;
  int v9;

  v3 = (int)(uintptr_t)(BIO_s_file());
  v4 = (void *)BIO_new(v3);
  if ( v4 == nullptr )
  {
    ERR_put_error(20, 173, 7, &unk_1B15112, 0);
    return 0;
  }
  if ( (int)BIO_ctrl(v4, 108, 3, a2) <= 0 )
  {
    ERR_put_error(20, 173, 2, &unk_1B15112, 0);
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    bio_X509 = d2i_X509_bio(v4, 0);
    v7 = 13;
  }
  else
  {
    if ( a3 != 1 )
    {
      ERR_put_error(20, 173, 124, &unk_1B15112, 0);
      goto LABEL_6;
    }
    bio_X509 = PEM_read_bio_X509((int)(uintptr_t)(v4), 0, *(uint32_t *)(a1 + 108), *(char **)(a1 + 112));
    v7 = 9;
  }
  if ( bio_X509 != 0 )
  {
    v9 = bio_X509;
    v5 = SSL_CTX_use_certificate(a1, bio_X509);
    X509_free(v9);
    goto LABEL_10;
  }
  ERR_put_error(20, 173, v7, &unk_1B15112, 0);
LABEL_6:
  v5 = 0;
LABEL_10:
  BIO_free(v4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_certificate_ASN1  (binary VA: 0x130cde0)
// Original: SSL_CTX_use_certificate_ASN1
// ----------------------------------------------------------------------------
int SSL_CTX_use_certificate_ASN1(int a1, int a2, ...)
{
  int v2;
  int v3;
  int v4;
  va_list va;

  va_start(va, a2);
  v2 = d2i_X509(0, g4_va_cast<char *>(va), a2);
  v3 = v2;
  if ( v2 != 0 )
  {
    v4 = SSL_CTX_use_certificate(a1, v2);
    X509_free(v3);
  }
  else
  {
    v4 = 0;
    ERR_put_error(20, 172, 13, &unk_1B15112, 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_RSAPrivateKey  (binary VA: 0x130ce90)
// Original: SSL_CTX_use_RSAPrivateKey
// ----------------------------------------------------------------------------
int SSL_CTX_use_RSAPrivateKey(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  void *pubkey;

  v2 = a2;
  if ( a2 != 0 )
  {
    if ( ssl_cert_inst((int *)(a1 + 176)) != 0 )
    {
      v3 = (int)(uintptr_t)(EVP_PKEY_new());
      if ( v3 != 0 )
      {
        RSA_up_ref(a2);
        EVP_PKEY_assign((char *)v3, 6u, a2);
        v4 = *(uint32_t **)(a1 + 176);
        LOBYTE(v5) = ssl_cert_type(0, (int *)v3);
        if ( v5 < 0 )
        {
          v2 = 0;
          ERR_put_error(20, 193, 247, &unk_1B15112, 0);
        }
        else
        {
          v6 = v5 + 6;
          v7 = v4[2 * v5 + 12];
          if ( v7 == 0
            || (pubkey = (void *)X509_get_pubkey(v7),
                EVP_PKEY_copy_parameters(pubkey, v3),
                EVP_PKEY_free(pubkey),
                ERR_clear_error(v9, v8),
                *(uint32_t *)v3 == 6)
            && (RSA_flags(*(uint32_t *)(v3 + 20)) & 1) != 0
            || X509_check_private_key(v4[2 * v6], v3) != 0 )
          {
            if ( v4[2 * v6 + 1] != 0 )
              EVP_PKEY_free((void *)v4[2 * v6 + 1]);
            CRYPTO_add_lock(v3 + 8, 1, 10, &unk_1B15112, 0);
            v4[2 * v6 + 1] = v3;
            v4[1] = 0;
            *v4 = (uint32_t)(uintptr_t)(&v4[2 * v6]);
            v2 = 1;
          }
          else
          {
            X509_free(v4[2 * v6]);
            v4[2 * v6] = 0;
            v2 = 0;
          }
        }
        EVP_PKEY_free((void *)v3);
      }
      else
      {
        v2 = 0;
        ERR_put_error(20, 177, 6, &unk_1B15112, 0);
      }
    }
    else
    {
      v2 = 0;
      ERR_put_error(20, 177, 65, &unk_1B15112, 0);
    }
  }
  else
  {
    ERR_put_error(20, 177, 67, &unk_1B15112, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_RSAPrivateKey_file  (binary VA: 0x130d100)
// Original: SSL_CTX_use_RSAPrivateKey_file
// ----------------------------------------------------------------------------
int SSL_CTX_use_RSAPrivateKey_file(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  int bio_RSAPrivateKey;
  int v8;
  void *v9;

  v3 = (int)(uintptr_t)(BIO_s_file());
  v4 = (void *)BIO_new(v3);
  if ( v4 == nullptr )
  {
    v5 = 0;
    ERR_put_error(20, 179, 7, &unk_1B15112, 0);
    return v5;
  }
  if ( (int)BIO_ctrl(v4, 108, 3, a2) <= 0 )
  {
    v5 = 0;
    ERR_put_error(20, 179, 2, &unk_1B15112, 0);
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    bio_RSAPrivateKey = d2i_RSAPrivateKey_bio(v4, 0);
    v8 = 13;
LABEL_9:
    if ( bio_RSAPrivateKey != 0 )
    {
      v9 = (void *)bio_RSAPrivateKey;
      v5 = SSL_CTX_use_RSAPrivateKey(a1, bio_RSAPrivateKey);
      RSA_free(v9);
    }
    else
    {
      v5 = 0;
      ERR_put_error(20, 179, v8, &unk_1B15112, 0);
    }
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    bio_RSAPrivateKey = PEM_read_bio_RSAPrivateKey(v4, 0, *(uint32_t *)(a1 + 108), *(uint32_t *)(a1 + 112));
    v8 = 9;
    goto LABEL_9;
  }
  v5 = 0;
  ERR_put_error(20, 179, 124, &unk_1B15112, 0);
LABEL_6:
  BIO_free(v4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_RSAPrivateKey_ASN1  (binary VA: 0x130d2e0)
// Original: SSL_CTX_use_RSAPrivateKey_ASN1
// ----------------------------------------------------------------------------
int SSL_CTX_use_RSAPrivateKey_ASN1(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v7 = a2;
  v3 = d2i_RSAPrivateKey(0, &v7, a3);
  v4 = (void *)v3;
  if ( v3 != 0 )
  {
    v5 = SSL_CTX_use_RSAPrivateKey(a1, v3);
    RSA_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(20, 178, 13, &unk_1B15112, 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_PrivateKey  (binary VA: 0x130d390)
// Original: SSL_CTX_use_PrivateKey
// ----------------------------------------------------------------------------
int SSL_CTX_use_PrivateKey(int a1, int *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void *pubkey;

  if ( a2 != nullptr )
  {
    if ( ssl_cert_inst((int *)(a1 + 176)) != 0 )
    {
      v2 = *(uint32_t **)(a1 + 176);
      LOBYTE(v3) = ssl_cert_type(0, a2);
      if ( v3 < 0 )
      {
        ERR_put_error(20, 193, 247, &unk_1B15112, 0);
        return 0;
      }
      else
      {
        v4 = v3 + 6;
        v5 = v2[2 * v3 + 12];
        if ( v5 == 0
          || (pubkey = (void *)X509_get_pubkey(v5),
              EVP_PKEY_copy_parameters(pubkey, a2),
              EVP_PKEY_free(pubkey),
              ERR_clear_error(v7, v6),
              *a2 == 6)
          && (RSA_flags(a2[5]) & 1) != 0
          || X509_check_private_key(v2[2 * v4], a2) != 0 )
        {
          if ( v2[2 * v4 + 1] != 0 )
            EVP_PKEY_free((void *)v2[2 * v4 + 1]);
          CRYPTO_add_lock(a2 + 2, 1, 10, &unk_1B15112, 0);
          v2[2 * v4 + 1] = (uint32_t)(uintptr_t)(a2);
          v2[1] = 0;
          *v2 = (uint32_t)(uintptr_t)(&v2[2 * v4]);
          return 1;
        }
        else
        {
          X509_free(v2[2 * v4]);
          v2[2 * v4] = 0;
          return 0;
        }
      }
    }
    else
    {
      ERR_put_error(20, 174, 65, &unk_1B15112, 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(20, 174, 67, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_PrivateKey_file  (binary VA: 0x130d590)
// Original: SSL_CTX_use_PrivateKey_file
// ----------------------------------------------------------------------------
int SSL_CTX_use_PrivateKey_file(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  int v5;
  int *bio_PrivateKey;
  int v8;
  int *v9;

  v3 = (int)(uintptr_t)(BIO_s_file());
  v4 = (void *)BIO_new(v3);
  if ( v4 == nullptr )
  {
    v5 = 0;
    ERR_put_error(20, 176, 7, &unk_1B15112, 0);
    return v5;
  }
  if ( (int)BIO_ctrl(v4, 108, 3, a2) <= 0 )
  {
    v5 = 0;
    ERR_put_error(20, 176, 2, &unk_1B15112, 0);
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    bio_PrivateKey = (int *)PEM_read_bio_PrivateKey((int)(uintptr_t)(v4), 0, *(uint32_t *)(a1 + 108), *(char **)(a1 + 112));
    v8 = 9;
LABEL_9:
    if ( bio_PrivateKey != nullptr )
    {
      v9 = bio_PrivateKey;
      v5 = SSL_CTX_use_PrivateKey(a1, bio_PrivateKey);
      EVP_PKEY_free(v9);
    }
    else
    {
      v5 = 0;
      ERR_put_error(20, 176, v8, &unk_1B15112, 0);
    }
    goto LABEL_6;
  }
  if ( a3 == 2 )
  {
    bio_PrivateKey = (int *)d2i_PrivateKey_bio(v4, 0);
    v8 = 13;
    goto LABEL_9;
  }
  v5 = 0;
  ERR_put_error(20, 176, 124, &unk_1B15112, 0);
LABEL_6:
  BIO_free(v4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_PrivateKey_ASN1  (binary VA: 0x130d770)
// Original: SSL_CTX_use_PrivateKey_ASN1
// ----------------------------------------------------------------------------
int SSL_CTX_use_PrivateKey_ASN1(size_t a1, int a2, int a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v8 = a3;
  v4 = (int *)d2i_PrivateKey(a1, 0, &v8, a4);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v6 = SSL_CTX_use_PrivateKey(a2, v4);
    EVP_PKEY_free(v5);
  }
  else
  {
    v6 = 0;
    ERR_put_error(20, 175, 13, &unk_1B15112, 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: SSL_CTX_use_certificate_chain_file  (binary VA: 0x130d830)
// Original: SSL_CTX_use_certificate_chain_file
// ----------------------------------------------------------------------------
int SSL_CTX_use_certificate_chain_file(int a1, int a2, int a3, int a4)
{
  int v4;
  void *v5;
  int bio_X509_AUX;
  int v8;
  int bio_X509;
  int v10;
  unsigned int error;
  int v12;
  int v13;
  int v14;

  ERR_clear_error(a1, a2);
  v4 = (int)(uintptr_t)(BIO_s_file());
  v5 = (void *)BIO_new(v4);
  if ( v5 == nullptr )
  {
    ERR_put_error(20, 220, 7, &unk_1B15112, 0);
    return 0;
  }
  if ( (int)BIO_ctrl(v5, 108, 3, a4) <= 0 )
  {
    ERR_put_error(20, 220, 2, &unk_1B15112, 0);
LABEL_18:
    v13 = 0;
    goto LABEL_7;
  }
  bio_X509_AUX = PEM_read_bio_X509_AUX((int)(uintptr_t)(v5), 0, *(uint32_t *)(a3 + 108), *(char **)(a3 + 112));
  v14 = bio_X509_AUX;
  if ( bio_X509_AUX == 0 )
  {
    ERR_put_error(20, 220, 9, &unk_1B15112, 0);
    goto LABEL_18;
  }
  v13 = SSL_CTX_use_certificate(a3, bio_X509_AUX);
  if ( ERR_peek_error() == 0 )
  {
    if ( v13 == 0 )
      goto LABEL_6;
    if ( *(uint32_t *)(a3 + 148) != 0 )
    {
      sk_pop_free(*(void **)(a3 + 148), (int)(uintptr_t)((int (*)(char))X509_free));
      *(uint32_t *)(a3 + 148) = 0;
    }
    while ( 1 )
    {
      bio_X509 = PEM_read_bio_X509((int)(uintptr_t)(v5), 0, *(uint32_t *)(a3 + 108), *(char **)(a3 + 112));
      v10 = bio_X509;
      if ( bio_X509 == 0 )
        break;
      LOBYTE(v8) = SSL_CTX_ctrl((uint32_t *)a3, 14, 0, bio_X509);
      if ( v8 == 0 )
      {
        X509_free(v10);
        v13 = 0;
        goto LABEL_6;
      }
    }
    error = ERR_peek_last_error();
    if ( HIBYTE(error) == 9 && (error & 0xFFF) == 0x6C )
    {
      ERR_clear_error(v12, 9);
      goto LABEL_6;
    }
  }
  v13 = 0;
LABEL_6:
  X509_free(v14);
LABEL_7:
  BIO_free(v5);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: tls1_change_cipher_state  (binary VA: 0x130df10)
// Original: tls1_change_cipher_state
// ----------------------------------------------------------------------------
int tls1_change_cipher_state(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  size_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  size_t v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  void *v20;
  unsigned int v21;
  int v22;
  int v23;
  size_t v24;
  int v25;
  unsigned int v26;
  size_t v27;
  size_t v28;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  bool v35; // cc
  int v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef const char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef void *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef size_t *_g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef unsigned int _g4_t_i;
  typedef int _g4_t_v70[4];
  typedef int _g4_t_v71[4];
  typedef uint8_t _g4_t_s[32];
  typedef char _g4_t_v73[32];
  typedef uint8_t _g4_t_v74[32];
  typedef char _g4_t_v75[44];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v42)) > _g4_s1 ? (8u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v43)) > _g4_s2 ? (12u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v44)) > _g4_s3 ? (16u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v47)) > _g4_s6 ? (28u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v48)) > _g4_s7 ? (28u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v49)) > _g4_s8 ? (32u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v50)) > _g4_s9 ? (36u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v51)) > _g4_s10 ? (36u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v52)) > _g4_s11 ? (40u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v53)) > _g4_s12 ? (40u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v54)) > _g4_s13 ? (40u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v55)) > _g4_s14 ? (44u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v56)) > _g4_s15 ? (44u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v57)) > _g4_s16 ? (48u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v58)) > _g4_s17 ? (48u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v59)) > _g4_s18 ? (52u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v60)) > _g4_s19 ? (52u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v61)) > _g4_s20 ? (52u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v62)) > _g4_s21 ? (56u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v63)) > _g4_s22 ? (56u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v64)) > _g4_s23 ? (56u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v65)) > _g4_s24 ? (60u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v66)) > _g4_s25 ? (60u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v67)) > _g4_s26 ? (60u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v68)) > _g4_s27 ? (60u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_i)) > _g4_s28 ? (60u + sizeof(_g4_t_i)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v70)) > _g4_s29 ? (64u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v71)) > _g4_s30 ? (80u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_s)) > _g4_s31 ? (96u + sizeof(_g4_t_s)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v73)) > _g4_s32 ? (128u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v74)) > _g4_s33 ? (160u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v75)) > _g4_s34 ? (192u + sizeof(_g4_t_v75)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 128u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 160u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 192u);

  v2 = *(uint32_t **)(a1 + 88);
  v3 = v2[209];
  v46 = v2[223];
  v52 = v2[225];
  v4 = v2[227];
  v65 = *(uint32_t *)(v3 + 32);
  v55 = v2[224];
  if ( (a2 & 1) == 0 )
  {
    if ( (*(uint8_t *)(v3 + 36) & 4) != 0 )
      *(uint32_t *)(a1 + 124) |= 2u;
    else
      *(uint32_t *)(a1 + 124) &= ~2u;
    v44 = *(uint32_t *)(a1 + 140);
    v9 = 1;
    if ( v44 == 0 )
    {
      v40 = (int)(uintptr_t)(CRYPTO_malloc(0x8Cu, (int)(uintptr_t)(&unk_1B15112), 0));
      *(uint32_t *)(a1 + 140) = v40;
      if ( v40 == 0 )
        goto LABEL_81;
      EVP_CIPHER_CTX_init(v40);
      v44 = *(uint32_t *)(a1 + 140);
      v9 = 0;
    }
    v47 = ssl_replace_hash((void **)(a1 + 144), 0);
    if ( *(uint32_t *)(a1 + 148) != 0 )
    {
      COMP_CTX_free(*(void **)(a1 + 148));
      *(uint32_t *)(a1 + 148) = 0;
    }
    if ( v4 == 0 || (v10 = (int)(uintptr_t)(COMP_CTX_new(*(uint32_t *)(v4 + 8))), *(uint32_t *)(a1 + 148) = v10, v10 != 0) )
    {
      v11 = a1;
      if ( *(uint32_t *)a1 != 65279 )
      {
        v12 = *(uint32_t *)(a1 + 88);
        v11 = a1;
        *(uint32_t *)(v12 + 84) = 0;
        *(uint32_t *)(v12 + 88) = 0;
      }
      v8 = *(size_t **)(v11 + 88);
      v59 = v8 + 24;
      v62 = v8 + 23;
      if ( v9 != 0 )
        goto LABEL_13;
      goto LABEL_24;
    }
    goto LABEL_85;
  }
  if ( (*(uint8_t *)(v3 + 36) & 4) != 0 )
    *(uint32_t *)(a1 + 124) |= 1u;
  else
    *(uint32_t *)(a1 + 124) &= ~1u;
  v44 = *(uint32_t *)(a1 + 128);
  v5 = 1;
  if ( v44 == 0 )
  {
    v38 = (int)(uintptr_t)(CRYPTO_malloc(0x8Cu, (int)(uintptr_t)(&unk_1B15112), 0));
    *(uint32_t *)(a1 + 128) = v38;
    if ( v38 != 0 )
    {
      EVP_CIPHER_CTX_init(v38);
      v44 = *(uint32_t *)(a1 + 128);
      v5 = 0;
      goto LABEL_5;
    }
LABEL_81:
    ERR_put_error(20, 209, 65, &unk_1B15112, 0);
    return 0;
  }
LABEL_5:
  v47 = ssl_replace_hash((void **)(a1 + 132), 0);
  if ( *(uint32_t *)(a1 + 136) != 0 )
  {
    COMP_CTX_free(*(void **)(a1 + 136));
    *(uint32_t *)(a1 + 136) = 0;
  }
  if ( v4 == 0 )
  {
    v7 = (uint32_t *)a1;
    v8 = *(size_t **)(a1 + 88);
    goto LABEL_10;
  }
  v6 = (int)(uintptr_t)(COMP_CTX_new(*(uint32_t *)(v4 + 8)));
  v7 = (uint32_t *)a1;
  *(uint32_t *)(a1 + 136) = v6;
  if ( v6 == 0 )
  {
LABEL_85:
    ERR_put_error(20, 209, 142, &unk_1B15112, 0);
    return 0;
  }
  v8 = *(size_t **)(a1 + 88);
  if ( v8[72] == 0 )
  {
    v39 = (int)(uintptr_t)(CRYPTO_malloc(0x4540u, (int)(uintptr_t)(&unk_1B15112), 0));
    v7 = (uint32_t *)a1;
    v8[72] = v39;
    v8 = *(size_t **)(a1 + 88);
    if ( v8[72] == 0 )
      goto LABEL_81;
  }
LABEL_10:
  if ( *v7 != 65279 )
  {
    v8[2] = 0;
    v8[3] = 0;
    v8 = (size_t *)v7[22];
  }
  v59 = v8 + 5;
  v62 = v8 + 4;
  if ( v5 != 0 )
  {
LABEL_13:
    EVP_CIPHER_CTX_cleanup(v44);
    v8 = *(size_t **)(a1 + 88);
  }
LABEL_24:
  v66 = v65 & 2;
  v13 = (char *)v8[222];
  v14 = v8[226];
  *v62 = v14;
  v15 = EVP_CIPHER_key_length(v46);
  v50 = v15;
  if ( v66 != 0 )
  {
    v16 = *(uint32_t *)(*(uint32_t *)(a1 + 88) + 836);
    v17 = 5;
    if ( (*(uint8_t *)(v16 + 32) & 8) == 0 )
      v17 = (*(uint32_t *)(v16 + 20) == 1) + 7;
    if ( v17 <= v15 )
      v15 = v17;
    v50 = v15;
  }
  v43 = EVP_CIPHER_iv_length(v46);
  if ( a2 != 33 && a2 != 18 )
  {
    v19 = &v13[v14];
    v41 = 0;
    v27 = v50 + 2 * v14;
    v57 = &v13[v27];
    v28 = v43 + v50 + v27;
    v42 = &v13[v28];
    v49 = "server write key";
    if ( (signed int)(v43 + v28) <= *(uint32_t *)(*(uint32_t *)(a1 + 88) + 884) )
      goto LABEL_33;
LABEL_53:
    ERR_put_error(20, 209, 68, &unk_1B15112, 0);
    return 0;
  }
  v57 = &v13[2 * v14];
  v41 = 1;
  v18 = 2 * v14 + 2 * v50;
  v42 = &v13[v18];
  v19 = v13;
  v49 = "client write key";
  if ( v18 + 2 * v43 > *(uint32_t *)(*(uint32_t *)(a1 + 88) + 884) )
    goto LABEL_53;
LABEL_33:
  memcpy(v59, v19, v14);
  v20 = (void *)EVP_PKEY_new_mac_key(v52, 0, v59, *v62);
  EVP_DigestSignInit(v47, 0, v55, 0, v20);
  EVP_PKEY_free(v20);
  if ( v66 != 0 )
  {
    v21 = 0;
    v67 = EVP_CIPHER_key_length(v46);
    v22 = *(uint32_t *)(a1 + 88);
    v48 = v22 + 160;
    v45 = v22 + 192;
    v23 = 0;
    v60 = *(uint32_t *)(*(uint32_t *)(v22 + 836) + 36);
    while ( ssl_get_handshake_digest(v21, v70, v71) != 0 )
    {
      v23 -= ((v60 & (v70[0] << 8)) == 0) - 1;
      ++v21;
    }
    v53 = v50 / v23;
    memset(s, 0, v67);
    v24 = v67;
    v68 = 0;
    v63 = v24;
    while ( ssl_get_handshake_digest(v68, v70, v71) != 0 )
    {
      if ( ((v70[0] << 8) & v60) != 0 )
      {
        if ( v71[0] == 0 )
        {
LABEL_76:
          ERR_put_error(20, 284, 326, &unk_1B15112, 0);
          return 0;
        }
        if ( sub_130DAC0(v71[0], v57, v53 + (v50 & 1), (int)(uintptr_t)(v49), 16, v45, 32, v48, 32, 0, 0, v73, v63) == 0 )
          return 0;
        v57 += v53;
        if ( (int)v63 > 0 )
        {
          v25 = 0;
          if ( v63 <= 0xF )
            goto LABEL_88;
          if ( 16 * (v63 >> 4) == 0 )
            goto LABEL_88;
          v26 = 0;
          do
          {
            ++v26;
            *(__m128i *)&s[v25] = _mm_xor_si128(*(__m128i *)&v73[v25], *(__m128i *)&s[v25]);
            v25 += 16;
          }
          while ( v63 >> 4 > v26 );
          v25 = 16 * (v63 >> 4);
          if ( v63 != v25 )
          {
LABEL_88:
            do
            {
              s[v25] ^= v73[v25];
              ++v25;
            }
            while ( (int)v63 > v25 );
          }
        }
      }
      ++v68;
    }
    if ( v43 <= 0 )
    {
      v57 = (char *)(s);
    }
    else
    {
      v58 = 2 * v43;
      v30 = *(uint32_t *)(a1 + 88);
      v51 = v30 + 160;
      v54 = v30 + 192;
      v31 = 0;
      v56 = *(uint32_t *)(*(uint32_t *)(v30 + 836) + 36);
      while ( ssl_get_handshake_digest(v31, v70, v71) != 0 )
        ++v31;
      memset(v74, 0, v58);
      for ( i = 0; ssl_get_handshake_digest(i, v70, v71) != 0; ++i )
      {
        if ( ((v70[0] << 8) & v56) != 0 )
        {
          if ( v71[0] == 0 )
            goto LABEL_76;
          if ( sub_130DAC0(v71[0], &unk_1CFB149, 0, (int)(uintptr_t)("IV block"), 8, v54, 32, v51, 32, 0, 0, v75, v58) == 0 )
            return 0;
          v32 = 1;
          if ( v58 > 0 )
            v32 = 2 * v43;
          v64 = v32;
          v33 = v32 >> 4;
          v34 = 16 * (v32 >> 4);
          v35 = v32 <= 0xF;
          v61 = v34;
          v36 = 0;
          if ( v35 )
            goto LABEL_89;
          if ( v34 == 0 )
            goto LABEL_89;
          v37 = 0;
          do
          {
            ++v37;
            *(__m128i *)&v74[v36] = _mm_xor_si128(*(__m128i *)&v74[v36], *(__m128i *)&v75[v36]);
            v36 += 16;
          }
          while ( v33 > v37 );
          v36 = v61;
          if ( v64 != v61 )
          {
LABEL_89:
            do
            {
              v74[v36] ^= v75[v36];
              ++v36;
            }
            while ( v36 < v58 );
          }
        }
      }
      v42 = (char *)(v74);
      v57 = (char *)(s);
      if ( v41 == 0 )
      {
        v57 = (char *)(s);
        v42 = (char *)(&v74[v43]);
      }
    }
  }
  *(uint32_t *)(*(uint32_t *)(a1 + 192) + 4) = 0;
  EVP_CipherInit_ex(v44, v46, 0, (int)(uintptr_t)(v57), v42, a2 & 2);
  OPENSSL_cleanse(s, 0x20u);
  OPENSSL_cleanse(v73, 0x20u);
  OPENSSL_cleanse(v74, 0x20u);
  OPENSSL_cleanse(v75, 0x20u);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: tls1_setup_key_block  (binary VA: 0x130e920)
// Original: tls1_setup_key_block
// ----------------------------------------------------------------------------
int tls1_setup_key_block(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int i;
  int v12;
  unsigned int v13;
  char *v14;
  int v15;
  unsigned int v16;
  int v17;
  signed int v18;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef unsigned int _g4_t_j;
  typedef int _g4_t_v33[4];
  typedef int _g4_t_v34[3];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v24)) > _g4_s2 ? (28u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v26)) > _g4_s4 ? (44u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v28)) > _g4_s6 ? (48u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v29)) > _g4_s7 ? (52u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v30)) > _g4_s8 ? (56u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v31)) > _g4_s9 ? (60u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_j)) > _g4_s10 ? (60u + sizeof(_g4_t_j)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v33)) > _g4_s11 ? (64u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v34)) > _g4_s12 ? (80u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v35)) > _g4_s13 ? (92u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v36)) > _g4_s14 ? (96u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v37)) > _g4_s15 ? (100u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v38)) > _g4_s16 ? (104u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v39)) > _g4_s17 ? (108u + sizeof(_g4_t_v39)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);

  result = 1;
  v38 = 0;
  v39 = 0;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 88) + 884) != 0 )
    return result;
  LOBYTE(v2) = ssl_cipher_get_evp(*(uint32_t *)(a1 + 192), &v35, &v36, &v38, &v39, &v37);
  if ( v2 == 0 )
  {
    ERR_put_error(20, 211, 138, &unk_1B15112, 0);
    return 0;
  }
  v3 = v35;
  *(uint32_t *)(*(uint32_t *)(a1 + 88) + 892) = v35;
  *(uint32_t *)(*(uint32_t *)(a1 + 88) + 896) = v36;
  *(uint32_t *)(*(uint32_t *)(a1 + 88) + 900) = v38;
  *(uint32_t *)(*(uint32_t *)(a1 + 88) + 904) = v39;
  v4 = EVP_CIPHER_key_length(v3);
  v5 = v4 + v39;
  v30 = 2 * (EVP_CIPHER_iv_length(v35) + v5);
  ssl3_cleanup_key_block(a1);
  v6 = (int)(uintptr_t)(CRYPTO_malloc(v30, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v6 == 0
    || (*(uint32_t *)(*(uint32_t *)(a1 + 88) + 884) = v30,
        *(uint32_t *)(*(uint32_t *)(a1 + 88) + 888) = v6,
        (v7 = (int)(uintptr_t)(CRYPTO_malloc(v30, (int)(uintptr_t)(&unk_1B15112), 0))) == 0) )
  {
    ERR_put_error(20, 211, 65, &unk_1B15112, 0);
    return 0;
  }
  v31 = (void *)v6;
  v26 = (char *)v7;
  v8 = *(uint32_t *)(a1 + 192);
  v9 = *(uint32_t *)(a1 + 88);
  v28 = (char *)(v8 + 20);
  v25 = *(uint32_t *)(v8 + 16);
  v24 = v9 + 192;
  v23 = v9 + 160;
  v29 = *(uint32_t *)(*(uint32_t *)(v9 + 836) + 36);
  v10 = 0;
  for ( i = 0; ssl_get_handshake_digest(i, v33, v34) != 0; ++i )
    v10 -= ((v29 & (v33[0] << 8)) == 0) - 1;
  v12 = v10;
  v13 = (unsigned int)(uintptr_t)(v31);
  v14 = v26;
  v27 = v25 / v12;
  memset(v31, 0, v30);
  for ( j = 0; ssl_get_handshake_digest(j, v33, v34) != 0; ++j )
  {
    if ( ((v33[0] << 8) & v29) != 0 )
    {
      if ( v34[0] == 0 )
      {
        ERR_put_error(20, 284, 326, &unk_1B15112, 0);
LABEL_33:
        v20 = 0;
        goto LABEL_31;
      }
      if ( sub_130DAC0(v34[0], v28, v27 + (v25 & 1), (int)(uintptr_t)("key expansion"), 13, v23, 32, v24, 32, 0, 0, v14, v30) == 0 )
        goto LABEL_33;
      v28 += v27;
      if ( (int)v30 > 0 )
      {
        if ( 16 * (v30 >> 4) == 0 || (unsigned int)(uintptr_t)(v14) <= v13 + 16 && v13 <= (unsigned int)(uintptr_t)(v14 + 16) || v30 <= 0xF )
        {
          v17 = 0;
          v18 = v30;
          do
          {
LABEL_20:
            *(uint8_t *)(v13 + v17) ^= v14[v17];
            ++v17;
          }
          while ( v18 > v17 );
          continue;
        }
        v15 = 0;
        v16 = 0;
        do
        {
          ++v16;
          *(__m128i *)(v13 + v15) = _mm_xor_si128(*(__m128i *)&v14[v15], *(__m128i *)(v13 + v15));
          v15 += 16;
        }
        while ( v30 >> 4 > v16 );
        v17 = 16 * (v30 >> 4);
        if ( v30 != v17 )
        {
          v18 = v30;
          goto LABEL_20;
        }
      }
    }
  }
  if ( (*(uint8_t *)(a1 + 257) & 8) != 0 )
  {
    v20 = 1;
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)(a1 + 88) + 224) = 1;
    v19 = *(uint32_t *)(*(uint32_t *)(a1 + 192) + 180);
    v20 = 1;
    if ( v19 != 0 )
    {
      v21 = *(uint32_t *)(v19 + 20);
      if ( v21 == 32 )
      {
        *(uint32_t *)(*(uint32_t *)(a1 + 88) + 224) = 0;
        v21 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 192) + 180) + 20);
      }
      v20 = 1;
      if ( v21 == 4 )
        *(uint32_t *)(*(uint32_t *)(a1 + 88) + 224) = 0;
    }
  }
LABEL_31:
  v22 = v20;
  OPENSSL_cleanse(v14, v30);
  CRYPTO_free(v14);
  return v22;
}

// ----------------------------------------------------------------------------
// Function: tls1_enc  (binary VA: 0x130ee10)
// Original: tls1_enc
// ----------------------------------------------------------------------------
int tls1_enc(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int result;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  bool v16;
  int v17;
  uint32_t *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  uint32_t *v22;
  int v23;
  int v24;
  bool v25;

  if ( a2 != 0 )
  {
    if ( EVP_MD_CTX_md(*(uint32_t *)(a1 + 144)) != 0 )
    {
      v2 = EVP_MD_CTX_md(*(uint32_t *)(a1 + 144));
      if ( (int)EVP_MD_size(v2) < 0 )
        OpenSSLDie(&unk_1B15112, 0, "n >= 0");
    }
    v3 = *(uint32_t **)(a1 + 140);
    v4 = *(uint32_t *)(a1 + 88) + 304;
    v22 = v3;
    if ( v3 == nullptr )
      goto LABEL_6;
    v5 = EVP_CIPHER_CTX_cipher(v3);
    if ( *(uint32_t *)(a1 + 192) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( EVP_MD_CTX_md(*(uint32_t *)(a1 + 132)) != 0 )
    {
      v7 = EVP_MD_CTX_md(*(uint32_t *)(a1 + 132));
      if ( (int)EVP_MD_size(v7) < 0 )
        OpenSSLDie(&unk_1B15112, 0, "n >= 0");
    }
    v8 = *(uint32_t **)(a1 + 128);
    v4 = *(uint32_t *)(a1 + 88) + 268;
    v22 = v8;
    if ( v8 == nullptr )
      goto LABEL_6;
    v5 = EVP_CIPHER_CTX_cipher(v8);
    if ( *(uint32_t *)(a1 + 192) == 0 )
      goto LABEL_6;
  }
  if ( v5 == 0 )
  {
LABEL_6:
    memmove(*(void **)(v4 + 12), *(const void **)(v4 + 16), *(uint32_t *)(v4 + 4));
    *(uint32_t *)(v4 + 16) = *(uint32_t *)(v4 + 12);
    return 1;
  }
  v9 = *(uint32_t *)(v4 + 4);
  v19 = EVP_CIPHER_block_size(*v22);
  v25 = v19 != 1;
  if ( v19 != 1 && a2 != 0 )
  {
    v10 = v9;
    v20 = v19 - v9 % (int)v19;
    v11 = v20 - 1;
    if ( (*(uint8_t *)(a1 + 257) & 2) != 0 && (**(uint8_t **)(a1 + 88) & 8) != 0 )
      v11 = v20;
    v9 += v20;
    if ( v10 < v9 )
    {
      do
        *(uint8_t *)(*(uint32_t *)(v4 + 16) + v10++) = v11;
      while ( v10 != v9 );
    }
    *(uint32_t *)(v4 + 4) += v20;
  }
  else
  {
    if ( a2 != 0 )
    {
      EVP_Cipher(v22, *(uint32_t *)(v4 + 12), *(uint32_t *)(v4 + 16), v9);
      return 1;
    }
    if ( v9 == 0 || v9 % v19 != 0 )
    {
      ERR_put_error(20, 210, 129, &unk_1B15112, 0);
      ssl3_send_alert((uint32_t *)a1, 2, 21);
      return 0;
    }
  }
  EVP_Cipher(v22, *(uint32_t *)(v4 + 12), *(uint32_t *)(v4 + 16), v9);
  if ( !v25 || a2 != 0 )
    return 1;
  v21 = *(uint8_t *)(*(uint32_t *)(v4 + 12) + v9 - 1);
  v23 = v21 + 1;
  if ( (*(uint8_t *)(a1 + 257) & 2) != 0 && *(uint32_t *)(a1 + 136) == 0 )
  {
    v18 = *(uint32_t **)(a1 + 88);
    v14 = memcmp(v18 + 2, &unk_1CFB140, 8u);
    v15 = (uint8_t *)(v18);
    if ( v14 == 0 && (v21 & 1) == 0 )
    {
      *v18 |= 8u;
      v15 = *(uint8_t **)(a1 + 88);
    }
    v16 = (*v15 & 8) == 0;
    v17 = v21;
    if ( v16 )
      v17 = v21 + 1;
    v23 = v17;
  }
  v24 = *(uint32_t *)(v4 + 4);
  result = -1;
  if ( v23 <= v24 )
  {
    v12 = v9 - v23;
    if ( v9 - v23 >= v9 )
    {
LABEL_32:
      *(uint32_t *)(v4 + 4) = v24 - v23;
      return 1;
    }
    v13 = *(uint32_t *)(v4 + 12);
    if ( v21 == *(uint8_t *)(v13 + v12) )
    {
      while ( ++v12 != v9 )
      {
        if ( v21 != *(uint8_t *)(v13 + v12) )
          return -1;
      }
      goto LABEL_32;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: tls1_cert_verify_mac  (binary VA: 0x130f1d0)
// Original: tls1_cert_verify_mac
// ----------------------------------------------------------------------------
int tls1_cert_verify_mac(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[36];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);

  v3 = *(uint32_t *)(a1 + 88);
  if ( *(uint32_t *)(v3 + 376) != 0 )
  {
    if ( ssl3_digest_cached_records(a1) == 0 )
      return 0;
    v3 = *(uint32_t *)(a1 + 88);
  }
  if ( **(uint32_t **)(v3 + 380) != 0 )
  {
    v4 = EVP_MD_CTX_md(**(uint32_t **)(v3 + 380));
    if ( EVP_MD_type(v4) == a2 )
    {
      v10 = 0;
      goto LABEL_18;
    }
    v3 = *(uint32_t *)(a1 + 88);
  }
  if ( *(uint32_t *)(*(uint32_t *)(v3 + 380) + 4) != 0 )
  {
    v5 = EVP_MD_CTX_md(*(uint32_t *)(*(uint32_t *)(v3 + 380) + 4));
    if ( EVP_MD_type(v5) == a2 )
    {
      v10 = 4;
      goto LABEL_18;
    }
    v3 = *(uint32_t *)(a1 + 88);
  }
  if ( *(uint32_t *)(*(uint32_t *)(v3 + 380) + 8) != 0 )
  {
    v6 = EVP_MD_CTX_md(*(uint32_t *)(*(uint32_t *)(v3 + 380) + 8));
    if ( EVP_MD_type(v6) == a2 )
    {
      v10 = 8;
      goto LABEL_18;
    }
    v3 = *(uint32_t *)(a1 + 88);
  }
  v7 = *(uint32_t *)(*(uint32_t *)(v3 + 380) + 12);
  if ( v7 == 0 )
    goto LABEL_15;
  v8 = EVP_MD_CTX_md(v7);
  if ( EVP_MD_type(v8) != a2 )
    goto LABEL_15;
  v10 = 12;
LABEL_18:
  v11 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + v10);
  if ( v11 == 0 )
  {
LABEL_15:
    ERR_put_error(20, 286, 324, &unk_1B15112, 0);
    return 0;
  }
  EVP_MD_CTX_init(v13);
  EVP_MD_CTX_copy_ex(v13, v11);
  EVP_DigestFinal_ex(v13, a3, &v12);
  EVP_MD_CTX_cleanup(v13);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: tls1_final_finish_mac  (binary VA: 0x130f360)
// Original: tls1_final_finish_mac
// ----------------------------------------------------------------------------
int tls1_final_finish_mac(int a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v9;
  int v10;
  int v11;
  int j;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_i;
  typedef int _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char _g4_t_v28[24];
  typedef uint8_t _g4_t_v29[24];
  typedef int _g4_t_v30[35];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_i)) > _g4_s8 ? (40u + sizeof(_g4_t_i)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v24)) > _g4_s10 ? (64u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v25)) > _g4_s11 ? (68u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v26)) > _g4_s12 ? (72u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v27)) > _g4_s13 ? (76u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v28)) > _g4_s14 ? (80u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v29)) > _g4_s15 ? (104u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v30)) > _g4_s16 ? (128u + sizeof(_g4_t_v30)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);

  if ( *(uint32_t *)(*(uint32_t *)(a1 + 88) + 376) != 0 )
  {
    v4 = ssl3_digest_cached_records(a1);
    v5 = 0;
    if ( v4 == 0 )
      return v5;
  }
  v6 = 0;
  EVP_MD_CTX_init(v29);
  v15 = 0;
  v17 = v30;
  while ( ssl_get_handshake_digest(v6, &v26, &v27) != 0 )
  {
    if ( (v26 & *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 836) + 36)) != 0 )
    {
      v7 = EVP_MD_size(v27);
      if ( v7 >= 0 && v7 <= (char *)v30 - (char *)v17 + 128 )
      {
        v14 = v7;
        EVP_MD_CTX_copy_ex(v29, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 380) + 4 * v6));
        EVP_DigestFinal_ex(v29, v17, &v25);
        v13 = 1;
        if ( v14 == v25 )
          v13 = v15;
        v17 = (int *)((char *)v17 + v25);
        v15 = v13;
      }
      else
      {
        v15 = 1;
      }
    }
    ++v6;
  }
  v9 = 0;
  v10 = 0;
  v11 = *(uint32_t *)(a1 + 192);
  v16 = *(uint32_t *)(v11 + 16);
  v20 = (char *)(v11 + 20);
  v18 = (char *)v17 - (char *)v30;
  v21 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 88) + 836) + 36);
  while ( ssl_get_handshake_digest(v9, v23, &v24) != 0 )
  {
    v10 -= ((v21 & (v23[0] << 8)) == 0) - 1;
    ++v9;
  }
  v19 = v16 / v10;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  for ( i = 0; ; ++i )
  {
    if ( ssl_get_handshake_digest(i, v23, &v24) == 0 )
    {
      EVP_MD_CTX_cleanup(v29);
      return v15 == 0 ? 0xC : 0;
    }
    if ( ((v23[0] << 8) & v21) == 0 )
      continue;
    if ( v24 == 0 )
      break;
    if ( sub_130DAC0(v24, v20, v19 + (v16 & 1), a2, a3, (int)(uintptr_t)(v30), v18, 0, 0, 0, 0, v28, 12) == 0 )
      goto LABEL_27;
    v20 += v19;
    for ( j = 0; j != 12; ++j )
      *((uint8_t *)a4 + j) ^= v28[j];
  }
  ERR_put_error(20, 284, 326, &unk_1B15112, 0);
LABEL_27:
  EVP_MD_CTX_cleanup(v29);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: tls1_mac  (binary VA: 0x130f690)
// Original: tls1_mac
// ----------------------------------------------------------------------------
int tls1_mac(int *a1, int a2, int a3)
{
  int v3;
  uint8_t *v4;
  uint32_t *v5;
  uint16_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int16_t v12;
  char v13;
  char v14;
  char v15;
  char v16;
  char v17;
  char v18;
  char v19;
  typedef uint16_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[5];
  typedef uint16_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[36];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v22)) > _g4_s1 ? (24u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v23)) > _g4_s2 ? (28u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v24)) > _g4_s3 ? (28u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v25)) > _g4_s4 ? (40u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v26)) > _g4_s5 ? (44u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v27)) > _g4_s6 ? (48u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (59u + sizeof(_g4_t_v28)) > _g4_s7 ? (59u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v29)) > _g4_s8 ? (64u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v30)) > _g4_s9 ? (72u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 59u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);

  v3 = a1[22];
  if ( a3 != 0 )
  {
    v25 = a1[31] & 2;
    v4 = (uint8_t *)a1[36];
    v26 = v4;
    v5 = (uint32_t *)(v3 + 304);
    v6 = (uint16_t *)(v3 + 84);
  }
  else
  {
    v25 = a1[31] & 1;
    v4 = (uint8_t *)a1[33];
    v26 = v4;
    v5 = (uint32_t *)(v3 + 268);
    v6 = (uint16_t *)(v3 + 8);
  }
  v23 = v5;
  v7 = EVP_MD_CTX_md(v4);
  v8 = EVP_MD_size(v7);
  v9 = v23;
  if ( v8 < 0 )
    OpenSSLDie(&unk_1B15112, 0, "t >= 0");
  v27 = v8;
  v28[0] = *v23;
  v10 = *a1;
  v28[2] = *a1;
  v28[1] = BYTE1(v10);
  v22 = v23[1];
  v28[3] = BYTE1(v22);
  v28[4] = v22;
  if ( v25 == 0 )
  {
    EVP_MD_CTX_copy(v30, v26);
    v10 = *a1;
    v26 = v30;
    v9 = v23;
  }
  if ( v10 == 256 || v10 == 65279 )
  {
    v11 = a1[23];
    if ( a3 != 0 )
      v12 = *(uint16_t *)(v11 + 522);
    else
      v12 = *(uint16_t *)(v11 + 520);
    LOBYTE(v29[0]) = HIBYTE(v12);
    HIBYTE(v29[0]) = v12;
    *(uint32_t *)&v29[1] = *(uint32_t *)(v6 + 1);
    v29[3] = v6[3];
    v21 = v29;
  }
  else
  {
    v21 = v6;
  }
  v24 = v9;
  EVP_DigestUpdate(v26, v21, 8);
  EVP_DigestUpdate(v26, v28, 5);
  EVP_DigestUpdate(v26, v24[4], v24[1]);
  if ( (int)EVP_DigestSignFinal(v26, a2, &v27) <= 0 )
    OpenSSLDie(&unk_1B15112, 0, "t > 0");
  if ( v25 == 0 )
    EVP_MD_CTX_cleanup(v30);
  if ( *a1 != 256 && *a1 != 65279 )
  {
    v13 = *((uint8_t *)v6 + 7) + 1;
    *((uint8_t *)v6 + 7) = v13;
    if ( v13 == 0 )
    {
      v14 = *((uint8_t *)v6 + 6) + 1;
      *((uint8_t *)v6 + 6) = v14;
      if ( v14 == 0 )
      {
        v15 = *((uint8_t *)v6 + 5) + 1;
        *((uint8_t *)v6 + 5) = v15;
        if ( v15 == 0 )
        {
          v16 = *((uint8_t *)v6 + 4) + 1;
          *((uint8_t *)v6 + 4) = v16;
          if ( v16 == 0 )
          {
            v17 = *((uint8_t *)v6 + 3) + 1;
            *((uint8_t *)v6 + 3) = v17;
            if ( v17 == 0 )
            {
              v18 = *((uint8_t *)v6 + 2) + 1;
              *((uint8_t *)v6 + 2) = v18;
              if ( v18 == 0 )
              {
                v19 = *((uint8_t *)v6 + 1) + 1;
                *((uint8_t *)v6 + 1) = v19;
                if ( v19 == 0 )
                  ++*(uint8_t *)v6;
              }
            }
          }
        }
      }
    }
  }
  return v27;
}

// ----------------------------------------------------------------------------
// Function: tls1_generate_master_secret  (binary VA: 0x130f990)
// Original: tls1_generate_master_secret
// ----------------------------------------------------------------------------
int tls1_generate_master_secret(int a1, int a2, char *a3, int a4)
{
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  uint16_t *v8;
  unsigned int v9;
  uint16_t *v10;
  unsigned int i;
  int j;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[4];
  typedef int _g4_t_v21[4];
  typedef __m128i _g4_t_v22;
  typedef __m128i _g4_t_v23[2];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v22)) > _g4_s8 ? (64u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v23)) > _g4_s9 ? (80u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  v4 = 0;
  v5 = 0;
  v6 = *(uint32_t *)(a1 + 88);
  v19 = *(uint32_t *)(a1 + 192);
  v16 = v19 + 20;
  v15 = v6 + 160;
  v14 = v6 + 192;
  v18 = *(uint32_t *)(*(uint32_t *)(v6 + 836) + 36);
  while ( ssl_get_handshake_digest(v5, v20, v21) != 0 )
  {
    v4 -= ((v18 & (v20[0] << 8)) == 0) - 1;
    ++v5;
  }
  v7 = a4 / v4;
  v8 = (uint16_t *)(v19 + 20);
  v9 = 48;
  v17 = v7;
  if ( (v16 & 1) != 0 )
  {
    *(uint8_t *)(v19 + 20) = 0;
    v8 = (uint16_t *)(v19 + 21);
    v9 = 47;
  }
  if ( ((uint8_t)(uintptr_t)(v8) & 2) != 0 )
  {
    *v8 = 0;
    v9 -= 2;
    ++v8;
  }
  memset(v8, 0, 4 * (v9 >> 2));
  v10 = &v8[2 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
    *v10++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v10 = 0;
  for ( i = 0; ssl_get_handshake_digest(i, v20, v21) != 0; ++i )
  {
    if ( ((v20[0] << 8) & v18) != 0 )
    {
      if ( v21[0] == 0 )
      {
        ERR_put_error(20, 284, 326, &unk_1B15112, 0);
        return 48;
      }
      if ( sub_130DAC0(v21[0], a3, v17 + (a4 & 1), (int)(uintptr_t)("master secret"), 13, v14, 32, 0, 0, v15, 32,g4_m128_ptr<int8_t>(v22), 48) == 0 )
        return 48;
      a3 += v17;
      if ( (unsigned int)(uintptr_t)(v23) < v16 || (unsigned int)(uintptr_t)(&v22) > v19 + 36 )
      {
        *(__m128i *)(v19 + 20) = _mm_xor_si128(*(__m128i *)(v19 + 20), v22);
        *(__m128i *)(v19 + 36) = _mm_xor_si128(*(__m128i *)(v19 + 36), v23[0]);
        *(__m128i *)(v19 + 52) = _mm_xor_si128(*(__m128i *)(v19 + 52), v23[1]);
      }
      else
      {
        for ( j = 0; j != 48; ++j )
          *(uint8_t *)(v16 + j) ^=g4_m128_lane<uint8_t>(v22, j);
      }
    }
  }
  return 48;
}

// ----------------------------------------------------------------------------
// Function: tls1_alert_code  (binary VA: 0x130fc10)
// Original: tls1_alert_code
// ----------------------------------------------------------------------------
int tls1_alert_code(unsigned int a1)
{
  int result;

  result = -1;
  if ( a1 <= 0x73 )
    return byte_1CFB160[a1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_new_lockid  (binary VA: 0x19819b0)
// Original: CRYPTO_get_new_lockid
// ----------------------------------------------------------------------------
int CRYPTO_get_new_lockid(char *a1)
{
  int v1;
  void *v2;
  int v3;

  if ( (dword_214051C != 0 || (dword_214051C = (uint32_t)(uintptr_t)(sk_new_null()), dword_214051C != 0))
    && (v1 = (int)(uintptr_t)(BUF_strdup(a1)), v2 = (void *)v1, v1 != 0) )
  {
    v3 = sk_push(dword_214051C, v1);
    if ( v3 != 0 )
    {
      return v3 + 41;
    }
    else
    {
      CRYPTO_free(v2);
      return 0;
    }
  }
  else
  {
    ERR_put_error(15, 101, 65, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_num_locks  (binary VA: 0x1981a80)
// Original: CRYPTO_num_locks
// ----------------------------------------------------------------------------
int CRYPTO_num_locks()
{
  return 41;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_dynlock_create_callback  (binary VA: 0x1981a90)
// Original: CRYPTO_get_dynlock_create_callback
// ----------------------------------------------------------------------------
int CRYPTO_get_dynlock_create_callback()
{
  return dword_2140520;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_dynlock_lock_callback  (binary VA: 0x1981ab0)
// Original: CRYPTO_get_dynlock_lock_callback
// ----------------------------------------------------------------------------
int CRYPTO_get_dynlock_lock_callback()
{
  return dword_214052C;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_dynlock_destroy_callback  (binary VA: 0x1981ad0)
// Original: CRYPTO_get_dynlock_destroy_callback
// ----------------------------------------------------------------------------
int CRYPTO_get_dynlock_destroy_callback()
{
  return dword_2140528;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_dynlock_create_callback  (binary VA: 0x1981af0)
// Original: CRYPTO_set_dynlock_create_callback
// ----------------------------------------------------------------------------
int CRYPTO_set_dynlock_create_callback(int a1)
{
  dword_2140520 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_dynlock_lock_callback  (binary VA: 0x1981b10)
// Original: CRYPTO_set_dynlock_lock_callback
// ----------------------------------------------------------------------------
int CRYPTO_set_dynlock_lock_callback(int a1)
{
  dword_214052C = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_dynlock_destroy_callback  (binary VA: 0x1981b30)
// Original: CRYPTO_set_dynlock_destroy_callback
// ----------------------------------------------------------------------------
int CRYPTO_set_dynlock_destroy_callback(int a1)
{
  dword_2140528 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_locking_callback  (binary VA: 0x1981b50)
// Original: CRYPTO_get_locking_callback
// ----------------------------------------------------------------------------
int CRYPTO_get_locking_callback()
{
  return dword_2140530;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_add_lock_callback  (binary VA: 0x1981b70)
// Original: CRYPTO_get_add_lock_callback
// ----------------------------------------------------------------------------
int CRYPTO_get_add_lock_callback()
{
  return dword_2140534;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_locking_callback  (binary VA: 0x1981b90)
// Original: CRYPTO_set_locking_callback
// ----------------------------------------------------------------------------
int CRYPTO_set_locking_callback(int a1)
{
  dword_2140530 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_add_lock_callback  (binary VA: 0x1981bb0)
// Original: CRYPTO_set_add_lock_callback
// ----------------------------------------------------------------------------
int CRYPTO_set_add_lock_callback(int a1)
{
  dword_2140534 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_set_numeric  (binary VA: 0x1981bd0)
// Original: CRYPTO_THREADID_set_numeric
// ----------------------------------------------------------------------------
uint32_t * CRYPTO_THREADID_set_numeric(uint32_t *a1, int a2)
{
  *a1 = 0;
  a1[1] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_set_pointer  (binary VA: 0x1981bf0)
// Original: CRYPTO_THREADID_set_pointer
// ----------------------------------------------------------------------------
uint32_t * CRYPTO_THREADID_set_pointer(uint32_t *a1, int a2)
{
  *a1 = a2;
  a1[1] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_set_callback  (binary VA: 0x1981c00)
// Original: CRYPTO_THREADID_set_callback
// ----------------------------------------------------------------------------
int CRYPTO_THREADID_set_callback(int a1)
{
  int result;

  result = 0;
  if ( dword_2140538 == 0 )
  {
    dword_2140538 = a1;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_get_callback  (binary VA: 0x1981c30)
// Original: CRYPTO_THREADID_get_callback
// ----------------------------------------------------------------------------
int CRYPTO_THREADID_get_callback()
{
  return dword_2140538;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_current  (binary VA: 0x1981c50)
// Original: CRYPTO_THREADID_current
// ----------------------------------------------------------------------------
uint32_t * CRYPTO_THREADID_current(int a1, int a2, uint32_t *a3)
{
  int v4;
  int v5;

  if ( dword_2140538 != 0 )
    return (uint32_t *)((int (*)(uint32_t *))dword_2140538)(a3);
  if ( dword_214053C != 0 )
  {
    v4 = ((int (*)(void))dword_214053C)();
    return CRYPTO_THREADID_set_numeric(a3, v4);
  }
  else
  {
    v5 = (int)(uintptr_t)(__errno(a1, a2));
    return CRYPTO_THREADID_set_pointer(a3, v5);
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_cmp  (binary VA: 0x1981cd0)
// Original: CRYPTO_THREADID_cmp
// ----------------------------------------------------------------------------
int CRYPTO_THREADID_cmp(void *s1, void *s2)
{
  return memcmp(s1, s2, 8u);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_cpy  (binary VA: 0x1981d10)
// Original: CRYPTO_THREADID_cpy
// ----------------------------------------------------------------------------
uint32_t * CRYPTO_THREADID_cpy(uint32_t *a1, uint32_t *a2)
{
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_THREADID_hash  (binary VA: 0x1981d30)
// Original: CRYPTO_THREADID_hash
// ----------------------------------------------------------------------------
int CRYPTO_THREADID_hash(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_id_callback  (binary VA: 0x1981d40)
// Original: CRYPTO_get_id_callback
// ----------------------------------------------------------------------------
int CRYPTO_get_id_callback()
{
  return dword_214053C;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_id_callback  (binary VA: 0x1981d60)
// Original: CRYPTO_set_id_callback
// ----------------------------------------------------------------------------
int CRYPTO_set_id_callback(int a1)
{
  dword_214053C = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_thread_id  (binary VA: 0x1981d80)
// Original: CRYPTO_thread_id
// ----------------------------------------------------------------------------
__pid_t CRYPTO_thread_id()
{
  if ( dword_214053C != 0 )
    return ((int (*)(void))dword_214053C)();
  else
    return getpid();
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_lock_name  (binary VA: 0x1981dc0)
// Original: CRYPTO_get_lock_name
// ----------------------------------------------------------------------------
const char * CRYPTO_get_lock_name(int a1)
{
  const char *result;
  int v2;

  result = "dynamic";
  if ( a1 >= 0 )
  {
    if ( a1 > 40 )
    {
      v2 = sk_num(dword_214051C);
      result = "ERROR";
      if ( a1 - 41 <= v2 )
        return (const char *)sk_value(dword_214051C, a1 - 41);
    }
    else
    {
      return (const char *)(uintptr_t)(off_203E9C0[a1]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_lock  (binary VA: 0x1981f00)
// Original: CRYPTO_lock
// ----------------------------------------------------------------------------
void CRYPTO_lock(int a1, int a2, int a3, int a4)
{
  int dynlock_value;

  if ( a2 < 0 )
  {
    if ( dword_214052C != 0 )
    {
      dynlock_value = CRYPTO_get_dynlock_value(a2);
      if ( dynlock_value == 0 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "pointer != NULL");
      ((void (*)(int, int, int, int))dword_214052C)(a1, dynlock_value, a3, a4);
      CRYPTO_destroy_dynlockid(a2);
    }
  }
  else if ( dword_2140530 != 0 )
  {
    ((void (*)(int, int, int, int))dword_2140530)(a1, a2, a3, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_add_lock  (binary VA: 0x1981fe0)
// Original: CRYPTO_add_lock
// ----------------------------------------------------------------------------
int CRYPTO_add_lock(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v6;
  int v7;

  if ( dword_2140534 != 0 )
    return ((int (*)(uint32_t *, int, int, int, int))dword_2140534)(a1, a2, a3, a4, a5);
  CRYPTO_lock(9, a3, a4, a5);
  v6 = *a1 + a2;
  *a1 = v6;
  v7 = v6;
  CRYPTO_lock(10, a3, a4, a5);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_dynlock_value  (binary VA: 0x19820a0)
// Original: CRYPTO_get_dynlock_value
// ----------------------------------------------------------------------------
int CRYPTO_get_dynlock_value(int a1)
{
  int v1;
  uint32_t *v3;
  uint32_t *v4;

  v1 = a1;
  if ( a1 != 0 )
    v1 = ~a1;
  CRYPTO_lock(9, 29, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( dword_2140524 != 0
    && v1 < sk_num(dword_2140524)
    && (v3 = (uint32_t *)sk_value(dword_2140524, v1), v4 = v3, v3 != nullptr) )
  {
    ++*v3;
    CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
    return v4[1];
  }
  else
  {
    CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_destroy_dynlockid  (binary VA: 0x1982180)
// Original: CRYPTO_destroy_dynlockid
// ----------------------------------------------------------------------------
void CRYPTO_destroy_dynlockid(int a1)
{
  int v1;
  int *v2;
  int *v3;
  int v4;

  v1 = a1;
  if ( a1 != 0 )
    v1 = ~a1;
  if ( dword_2140528 != 0 )
  {
    CRYPTO_lock(9, 29, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dword_2140524 != 0
      && v1 < sk_num(dword_2140524)
      && (v2 = (int *)sk_value(dword_2140524, v1), v3 = v2, v2 != nullptr)
      && (v4 = *v2 - 1, *v3 = v4, v4 <= 0) )
    {
      sk_set(dword_2140524, v1, 0);
      CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
      ((void (*)(int, void *, uint32_t))dword_2140528)(v3[1], &unk_1B15112, 0);
      CRYPTO_free(v3);
    }
    else
    {
      CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_new_dynlockid  (binary VA: 0x19822b0)
// Original: CRYPTO_get_new_dynlockid
// ----------------------------------------------------------------------------
int CRYPTO_get_new_dynlockid()
{
  uint32_t *v0;
  uint32_t *v1;
  int v2;
  int v3;
  int v4;

  if ( dword_2140520 == 0 )
  {
    ERR_put_error(15, 103, 100, &unk_1B15112, 0);
    return 0;
  }
  CRYPTO_lock(9, 29, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( dword_2140524 == 0 )
  {
    dword_2140524 = (uint32_t)(uintptr_t)(sk_new_null());
    if ( dword_2140524 == 0 )
    {
      CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_12;
    }
  }
  CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
  v0 = (uint32_t *)CRYPTO_malloc(8u, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = v0;
  if ( v0 == nullptr )
  {
LABEL_12:
    ERR_put_error(15, 103, 65, &unk_1B15112, 0);
    return 0;
  }
  *v0 = 1;
  v2 = ((int (*)(void *, uint32_t))dword_2140520)(&unk_1B15112, 0);
  v1[1] = v2;
  if ( v2 == 0 )
  {
    CRYPTO_free(v1);
    goto LABEL_12;
  }
  CRYPTO_lock(9, 29, (int)(uintptr_t)(&unk_1B15112), 0);
  v3 = sk_find(dword_2140524, 0);
  v4 = v3;
  if ( v3 == -1 )
  {
    v4 = sk_push(dword_2140524, v1) - 1;
    CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v4 == -1 )
    {
      ((void (*)(uint32_t, void *, uint32_t))dword_2140528)(v1[1], &unk_1B15112, 0);
      CRYPTO_free(v1);
      return 1;
    }
  }
  else
  {
    sk_set(dword_2140524, v3, v1);
    CRYPTO_lock(10, 29, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return ~v4;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_ex_data_implementation  (binary VA: 0x1982b40)
// Original: CRYPTO_get_ex_data_implementation
// ----------------------------------------------------------------------------
int CRYPTO_get_ex_data_implementation()
{
  int result;

  result = dword_2140540;
  if ( dword_2140540 == 0 )
  {
    sub_1982560();
    return dword_2140540;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_ex_data_implementation  (binary VA: 0x1982b80)
// Original: CRYPTO_set_ex_data_implementation
// ----------------------------------------------------------------------------
int CRYPTO_set_ex_data_implementation(int a1)
{
  int v1;

  CRYPTO_lock(9, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = 0;
  if ( dword_2140540 == 0 )
  {
    LOWORD(v1) = 1;
    dword_2140540 = a1;
  }
  CRYPTO_lock(10, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_ex_data_new_class  (binary VA: 0x1982c10)
// Original: CRYPTO_ex_data_new_class
// ----------------------------------------------------------------------------
int CRYPTO_ex_data_new_class()
{
  if ( dword_2140540 == 0 )
    sub_1982560();
  return (*(int (**)(void))dword_2140540)();
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_cleanup_all_ex_data  (binary VA: 0x1982c50)
// Original: CRYPTO_cleanup_all_ex_data
// ----------------------------------------------------------------------------
int CRYPTO_cleanup_all_ex_data()
{
  if ( dword_2140540 == 0 )
    sub_1982560();
  return (*(int (**)(void))(dword_2140540 + 4))();
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_ex_new_index  (binary VA: 0x1982c90)
// Original: CRYPTO_get_ex_new_index
// ----------------------------------------------------------------------------
int CRYPTO_get_ex_new_index(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;

  v6 = dword_2140540;
  if ( dword_2140540 == 0 )
  {
    sub_1982560();
    v6 = dword_2140540;
  }
  return (*(int (**)(int, int, int, int, int, int))(v6 + 8))(a1, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_new_ex_data  (binary VA: 0x1982d00)
// Original: CRYPTO_new_ex_data
// ----------------------------------------------------------------------------
int CRYPTO_new_ex_data(int a1, int a2, int a3)
{
  int v3;

  v3 = dword_2140540;
  if ( dword_2140540 == 0 )
  {
    sub_1982560();
    v3 = dword_2140540;
  }
  return (*(int (**)(int, int, int))(v3 + 12))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_dup_ex_data  (binary VA: 0x1982d50)
// Original: CRYPTO_dup_ex_data
// ----------------------------------------------------------------------------
int CRYPTO_dup_ex_data(int a1, int a2, int a3)
{
  int v3;

  v3 = dword_2140540;
  if ( dword_2140540 == 0 )
  {
    sub_1982560();
    v3 = dword_2140540;
  }
  return (*(int (**)(int, int, int))(v3 + 16))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_free_ex_data  (binary VA: 0x1982da0)
// Original: CRYPTO_free_ex_data
// ----------------------------------------------------------------------------
int CRYPTO_free_ex_data(int a1, int a2, int a3)
{
  int v3;

  v3 = dword_2140540;
  if ( dword_2140540 == 0 )
  {
    sub_1982560();
    v3 = dword_2140540;
  }
  return (*(int (**)(int, int, int))(v3 + 20))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_ex_data  (binary VA: 0x1982df0)
// Original: CRYPTO_set_ex_data
// ----------------------------------------------------------------------------
int CRYPTO_set_ex_data(int *a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = *a1;
  if ( *a1 == 0 )
  {
    v3 = (int)(uintptr_t)(sk_new_null());
    *a1 = v3;
    if ( v3 == 0 )
    {
LABEL_6:
      ERR_put_error(15, 102, 65, &unk_1B15112, 0);
      return 0;
    }
  }
  v4 = sk_num(v3);
  if ( v4 <= a2 )
  {
    while ( sk_push(*a1, 0) != 0 )
    {
      if ( a2 < ++v4 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  sk_set(*a1, a2, a3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_ex_data  (binary VA: 0x1982ec0)
// Original: CRYPTO_get_ex_data
// ----------------------------------------------------------------------------
int CRYPTO_get_ex_data(uint32_t *a1, int a2)
{
  int v2;

  v2 = 0;
  if ( *a1 != 0 && sk_num(*a1) > a2 )
    return sk_value(*a1, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_mem_functions  (binary VA: 0x19835e0)
// Original: CRYPTO_set_mem_functions
// ----------------------------------------------------------------------------
int CRYPTO_set_mem_functions(void *a1, void *a2, void *a3)
{
  int result;

  result = 0;
  if ( dword_20CB54C != 0 )
  {
    if ( a2 != nullptr && a1 != nullptr )
    {
      if ( a3 != nullptr )
      {
        off_20CB554 = (uint32_t)(uintptr_t)(a1);
        off_20CB568 = (uint32_t)(uintptr_t)((int (*)(size_t))sub_1983550);
        off_20CB558 = (uint32_t)(uintptr_t)(a2);
        off_20CB55C = (uint32_t)(uintptr_t)(a3);
        off_20CB56C = (uint32_t)(uintptr_t)((int (*)(void *, size_t))sub_1983580);
        off_20CB560 = (uint32_t)(uintptr_t)(a1);
        off_20CB564 = (uint32_t)(uintptr_t)(a3);
        off_20CB570 = (uint32_t)(uintptr_t)((int (*)(size_t))sub_19835B0);
        return 1;
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
// Function: CRYPTO_set_mem_ex_functions  (binary VA: 0x1983680)
// Original: CRYPTO_set_mem_ex_functions
// ----------------------------------------------------------------------------
char CRYPTO_set_mem_ex_functions(int (*a1)(size_t), int (*a2)(void *, size_t), void *a3)
{
  char result;

  result = 0;
  if ( dword_20CB54C != 0 )
  {
    if ( a2 != nullptr && a1 != nullptr )
    {
      if ( a3 != nullptr )
      {
        off_20CB554 = (uint32_t)(uintptr_t)(nullptr);
        off_20CB568 = (uint32_t)(uintptr_t)(a1);
        off_20CB558 = (uint32_t)(uintptr_t)(nullptr);
        off_20CB56C = (uint32_t)(uintptr_t)(a2);
        off_20CB55C = (uint32_t)(uintptr_t)(a3);
        off_20CB560 = (uint32_t)(uintptr_t)(nullptr);
        off_20CB570 = (uint32_t)(uintptr_t)(a1);
        off_20CB564 = (uint32_t)(uintptr_t)(a3);
        return 1;
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
// Function: CRYPTO_set_locked_mem_functions  (binary VA: 0x1983720)
// Original: CRYPTO_set_locked_mem_functions
// ----------------------------------------------------------------------------
int CRYPTO_set_locked_mem_functions(void *a1, void *a2)
{
  int result;

  result = 0;
  if ( dword_20CB54C != 0 )
  {
    if ( a2 != nullptr && a1 != nullptr )
    {
      off_20CB560 = (uint32_t)(uintptr_t)(a1);
      off_20CB570 = (uint32_t)(uintptr_t)((int (*)(size_t))sub_19835B0);
      off_20CB564 = (uint32_t)(uintptr_t)(a2);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_locked_mem_ex_functions  (binary VA: 0x1983770)
// Original: CRYPTO_set_locked_mem_ex_functions
// ----------------------------------------------------------------------------
char CRYPTO_set_locked_mem_ex_functions(int (*a1)(size_t), void *a2)
{
  char result;

  result = 0;
  if ( dword_20CB54C != 0 )
  {
    if ( a2 != nullptr && a1 != nullptr )
    {
      off_20CB560 = (uint32_t)(uintptr_t)(nullptr);
      off_20CB570 = (uint32_t)(uintptr_t)(a1);
      off_20CB55C = (uint32_t)(uintptr_t)(a2);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_mem_debug_functions  (binary VA: 0x19837c0)
// Original: CRYPTO_set_mem_debug_functions
// ----------------------------------------------------------------------------
int CRYPTO_set_mem_debug_functions(int a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( dword_20CB550 != 0 )
  {
    dword_2140548 = a1;
    dword_214054C = a2;
    dword_2140550 = a3;
    dword_2140554 = a4;
    dword_2140558 = a5;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_mem_functions  (binary VA: 0x1983810)
// Original: CRYPTO_get_mem_functions
// ----------------------------------------------------------------------------
void CRYPTO_get_mem_functions(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  void *v3;
  void *v4;

  if ( a1 != nullptr )
  {
    v3 = nullptr;
    if ( (char *)off_20CB568 == (char *)sub_1983550 )
      v3 = (void *)(uintptr_t)(off_20CB554);
    *a1 = (uint32_t)(uintptr_t)(v3);
  }
  if ( a2 != nullptr )
  {
    v4 = nullptr;
    if ( (char *)off_20CB56C == (char *)sub_1983580 )
      v4 = (void *)(uintptr_t)(off_20CB558);
    *a2 = (uint32_t)(uintptr_t)(v4);
  }
  if ( a3 != nullptr )
    *a3 = off_20CB55C;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_mem_ex_functions  (binary VA: 0x1983890)
// Original: CRYPTO_get_mem_ex_functions
// ----------------------------------------------------------------------------
void CRYPTO_get_mem_ex_functions(int (**a1)(size_t), int (**a2)(void *, size_t), uint32_t *a3)
{
  int (*v3)(size_t);
  int (*v4)(void *, size_t);

  if ( a1 != nullptr )
  {
    v3 = (int (*)(size_t))(uintptr_t)(off_20CB568);
    if ( (char *)off_20CB568 == (char *)sub_1983550 )
      v3 = nullptr;
    *a1 = v3;
  }
  if ( a2 != nullptr )
  {
    v4 = (int (*)(void *, size_t))(uintptr_t)(off_20CB56C);
    if ( (char *)off_20CB56C == (char *)sub_1983580 )
      v4 = nullptr;
    *a2 = v4;
  }
  if ( a3 != nullptr )
    *a3 = off_20CB55C;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_locked_mem_functions  (binary VA: 0x1983910)
// Original: CRYPTO_get_locked_mem_functions
// ----------------------------------------------------------------------------
void CRYPTO_get_locked_mem_functions(uint32_t *a1, uint32_t *a2)
{
  void *v2;

  if ( a1 != nullptr )
  {
    v2 = nullptr;
    if ( (char *)off_20CB570 == (char *)sub_19835B0 )
      v2 = (void *)(uintptr_t)(off_20CB560);
    *a1 = (uint32_t)(uintptr_t)(v2);
  }
  if ( a2 != nullptr )
    *a2 = off_20CB564;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_locked_mem_ex_functions  (binary VA: 0x1983970)
// Original: CRYPTO_get_locked_mem_ex_functions
// ----------------------------------------------------------------------------
void CRYPTO_get_locked_mem_ex_functions(int (**a1)(size_t), uint32_t *a2)
{
  int (*v2)(size_t);

  if ( a1 != nullptr )
  {
    v2 = (int (*)(size_t))(uintptr_t)(off_20CB570);
    if ( (char *)off_20CB570 == (char *)sub_19835B0 )
      v2 = nullptr;
    *a1 = v2;
  }
  if ( a2 != nullptr )
    *a2 = off_20CB564;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_mem_debug_functions  (binary VA: 0x19839d0)
// Original: CRYPTO_get_mem_debug_functions
// ----------------------------------------------------------------------------
uint32_t * CRYPTO_get_mem_debug_functions(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  uint32_t *result;

  result = a5;
  if ( a1 != nullptr )
    *a1 = dword_2140548;
  if ( a2 != nullptr )
    *a2 = dword_214054C;
  if ( a3 != nullptr )
    *a3 = dword_2140550;
  if ( a4 != nullptr )
    *a4 = dword_2140554;
  if ( a5 != nullptr )
    *a5 = dword_2140558;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_malloc_locked  (binary VA: 0x1983a60)
// Original: CRYPTO_malloc_locked
// ----------------------------------------------------------------------------
uint8_t * CRYPTO_malloc_locked(int a1, int a2, int a3)
{
  uint8_t *result;
  uint8_t *v4;

  result = nullptr;
  if ( a1 > 0 )
  {
    dword_20CB54C = 0;
    if ( dword_2140548 != 0 )
    {
      dword_20CB550 = 0;
      ((void (*)(uint32_t, int, int, int, uint32_t))dword_2140548)(0, a1, a2, a3, 0);
    }
    result = (uint8_t *)G4_MEM_CALL((uintptr_t)(off_20CB570), a1);
    if ( dword_2140548 != 0 )
    {
      v4 = result;
      ((void (*)(uint8_t *, int, int, int, int))dword_2140548)(result, a1, a2, a3, 1);
      result = v4;
    }
    if ( result != nullptr && a1 > 2048 )
      *result = cleanse_ctr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_free_locked  (binary VA: 0x1983b40)
// Original: CRYPTO_free_locked
// ----------------------------------------------------------------------------
int CRYPTO_free_locked(void *ptr)
{
  int result;

  if ( dword_2140550 != 0 )
    ((void (*)(void *, uint32_t))dword_2140550)(ptr, 0);
  ((void (*)(void *))off_20CB564)(ptr);
  result = dword_2140550;
  if ( dword_2140550 != 0 )
    return ((int (*)(uint32_t, int))dword_2140550)(0, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_malloc  (binary VA: 0x1983bb0)
// Original: CRYPTO_malloc
// ----------------------------------------------------------------------------
uint8_t * CRYPTO_malloc(int a1, int a2, int a3)
{
  uint8_t *result;
  uint8_t *v4;

  result = nullptr;
  if ( a1 > 0 )
  {
    dword_20CB54C = 0;
    if ( dword_2140548 != 0 )
    {
      dword_20CB550 = 0;
      ((void (*)(uint32_t, int, int, int, uint32_t))dword_2140548)(0, a1, a2, a3, 0);
    }
    result = (uint8_t *)G4_MEM_CALL((uintptr_t)(off_20CB568), a1);
    if ( dword_2140548 != 0 )
    {
      v4 = result;
      ((void (*)(uint8_t *, int, int, int, int))dword_2140548)(result, a1, a2, a3, 1);
      result = v4;
    }
    if ( result != nullptr && a1 > 2048 )
      *result = cleanse_ctr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_strdup  (binary VA: 0x1983c90)
// Original: CRYPTO_strdup
// ----------------------------------------------------------------------------
char * CRYPTO_strdup(char *s, int a2, int a3)
{
  size_t v3;
  char *v4;

  v3 = strlen(s);
  v4 = (char *)(CRYPTO_malloc(v3 + 1, a2, a3));
  strcpy(v4, s);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_realloc  (binary VA: 0x1983d00)
// Original: CRYPTO_realloc
// ----------------------------------------------------------------------------
uint8_t * CRYPTO_realloc(void *a1, int a2, int a3, int a4)
{
  uint8_t *result;
  uint8_t *v5;

  if ( a1 == nullptr )
    return CRYPTO_malloc(a2, a3, a4);
  result = nullptr;
  if ( a2 > 0 )
  {
    if ( dword_214054C != 0 )
      ((void (*)(void *, uint32_t, int, int, int, uint32_t))dword_214054C)(a1, 0, a2, a3, a4, 0);
    result = (uint8_t *)G4_MEM_CALL((uintptr_t)(off_20CB56C), a1, a2);
    if ( dword_214054C != 0 )
    {
      v5 = result;
      ((void (*)(void *, uint8_t *, int, int, int, int))dword_214054C)(a1, result, a2, a3, a4, 1);
      return v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_realloc_clean  (binary VA: 0x1983df0)
// Original: CRYPTO_realloc_clean
// ----------------------------------------------------------------------------
uint8_t * CRYPTO_realloc_clean(void *ptr, size_t n, int a3, int a4, int a5)
{
  void *v5;
  void *dest;

  if ( ptr == nullptr )
    return CRYPTO_malloc(a3, a4, a5);
  v5 = nullptr;
  if ( a3 > 0 )
  {
    if ( dword_214054C != 0 )
      ((void (*)(void *, uint32_t, int, int, int, uint32_t))dword_214054C)(ptr, 0, a3, a4, a5, 0);
    dest = (void *)G4_MEM_CALL((uintptr_t)(off_20CB568), a3);
    v5 = dest;
    if ( dest != nullptr )
    {
      memcpy(dest, ptr, n);
      OPENSSL_cleanse(ptr, n);
      ((void (*)(void *))off_20CB55C)(ptr);
    }
    if ( dword_214054C != 0 )
      ((void (*)(void *, void *, int, int, int, int))dword_214054C)(ptr, v5, a3, a4, a5, 1);
  }
  return (uint8_t *)(v5);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_free  (binary VA: 0x1983f10)
// Original: CRYPTO_free
// ----------------------------------------------------------------------------
int CRYPTO_free(void *ptr)
{
  int result;

  if ( dword_2140550 != 0 )
    ((void (*)(void *, uint32_t))dword_2140550)(ptr, 0);
  ((void (*)(void *))off_20CB55C)(ptr);
  result = dword_2140550;
  if ( dword_2140550 != 0 )
    return ((int (*)(uint32_t, int))dword_2140550)(0, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_remalloc  (binary VA: 0x1983f80)
// Original: CRYPTO_remalloc
// ----------------------------------------------------------------------------
uint8_t * CRYPTO_remalloc(void *a1, size_t a2)
{
  if ( a1 != nullptr )
    CRYPTO_free(a1);
  return CRYPTO_malloc(a2, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_set_mem_debug_options  (binary VA: 0x1983fd0)
// Original: CRYPTO_set_mem_debug_options
// ----------------------------------------------------------------------------
int CRYPTO_set_mem_debug_options(int a1)
{
  int result;

  result = dword_2140554;
  if ( dword_2140554 != 0 )
    return ((int (*)(int))dword_2140554)(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_get_mem_debug_options  (binary VA: 0x1984000)
// Original: CRYPTO_get_mem_debug_options
// ----------------------------------------------------------------------------
int CRYPTO_get_mem_debug_options()
{
  int result;

  result = 0;
  if ( dword_2140558 != 0 )
    return ((int (*)(void))dword_2140558)();
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_mem_ctrl  (binary VA: 0x1984640)
// Original: CRYPTO_mem_ctrl
// ----------------------------------------------------------------------------
int CRYPTO_mem_ctrl(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;
  uint32_t v6[5];

  v1 = dword_2140560;
  CRYPTO_lock(9, 20, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( a1 == 1 )
  {
    dword_2140560 = 3;
    dword_2140564 = 0;
  }
  else if ( a1 <= 1 )
  {
    if ( a1 == 0 )
    {
      dword_2140560 = 0;
      dword_2140564 = 0;
    }
  }
  else if ( a1 == 2 )
  {
    if ( (dword_2140560 & 1) != 0 )
    {
      v5 = dword_2140564;
      if ( dword_2140564 != 0 )
      {
        --dword_2140564;
        if ( v5 == 1 )
        {
          dword_2140560 |= 2u;
          CRYPTO_lock(10, 27, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
  }
  else if ( a1 == 3 && (dword_2140560 & 1) != 0 )
  {
    CRYPTO_THREADID_current(v3, v2, v6);
    if ( dword_2140564 == 0 || CRYPTO_THREADID_cmp((&dword_2140568), v6) != 0 )
    {
      CRYPTO_lock(10, 20, (int)(uintptr_t)(&unk_1B15112), 0);
      CRYPTO_lock(9, 27, (int)(uintptr_t)(&unk_1B15112), 0);
      CRYPTO_lock(9, 20, (int)(uintptr_t)(&unk_1B15112), 0);
      dword_2140560 &= ~2u;
      CRYPTO_THREADID_cpy((&dword_2140568), v6);
    }
    ++dword_2140564;
  }
  CRYPTO_lock(10, 20, (int)(uintptr_t)(&unk_1B15112), 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_is_mem_check_on  (binary VA: 0x1984850)
// Original: CRYPTO_is_mem_check_on
// ----------------------------------------------------------------------------
bool CRYPTO_is_mem_check_on(int a1, int a2)
{
  bool result;
  bool v3;
  typedef bool _g4_t_v4;
  typedef uint32_t _g4_t_v5[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);

  result = false;
  if ( (dword_2140560 & 1) != 0 )
  {
    CRYPTO_THREADID_current(a1, a2, v5);
    CRYPTO_lock(5, 20, (int)(uintptr_t)(&unk_1B15112), 0);
    v3 = true;
    if ( (dword_2140560 & 2) == 0 )
      v3 = CRYPTO_THREADID_cmp((&dword_2140568), v5) != 0;
    v4 = v3;
    CRYPTO_lock(6, 20, (int)(uintptr_t)(&unk_1B15112), 0);
    return v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_dbg_set_options  (binary VA: 0x1984920)
// Original: CRYPTO_dbg_set_options
// ----------------------------------------------------------------------------
int CRYPTO_dbg_set_options(int a1)
{
  dword_2140570 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_dbg_get_options  (binary VA: 0x1984940)
// Original: CRYPTO_dbg_get_options
// ----------------------------------------------------------------------------
int CRYPTO_dbg_get_options()
{
  return dword_2140570;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_push_info  (binary VA: 0x1984960)
// Original: CRYPTO_push_info_
// ----------------------------------------------------------------------------
int CRYPTO_push_info(int a1, int a2, int a3, int a4, int a5)
{
  int v6;
  uint32_t *v7;
  int v8;
  int v9;

  if ( !CRYPTO_is_mem_check_on(a1, a2) )
    return 0;
  CRYPTO_mem_ctrl(3);
  v7 = (uint32_t *)(CRYPTO_malloc(28, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v7 != nullptr )
  {
    v8 = dword_2140574;
    if ( dword_2140574 != 0 || (dword_2140574 = (uint32_t)(uintptr_t)(lh_new(sub_1984140, sub_1984500)), dword_2140574 != 0) )
    {
      CRYPTO_THREADID_current(v8, v6, v7);
      v7[6] = 1;
      v7[2] = a4;
      v7[3] = a5;
      v7[4] = a3;
      v7[5] = 0;
      v9 = (int)(uintptr_t)(lh_insert(dword_2140574, v7));
      if ( v9 != 0 )
        v7[5] = v9;
    }
    else
    {
      CRYPTO_free(v7);
    }
  }
  CRYPTO_mem_ctrl(2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_pop_info  (binary VA: 0x1984a60)
// Original: CRYPTO_pop_info
// ----------------------------------------------------------------------------
bool CRYPTO_pop_info(int a1, int a2)
{
  bool v2;
  int v3;
  int v4;

  v2 = false;
  if ( CRYPTO_is_mem_check_on(a1, a2) )
  {
    CRYPTO_mem_ctrl(3);
    v2 = sub_1984590(v4, v3) != nullptr;
    CRYPTO_mem_ctrl(2);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_remove_all_info  (binary VA: 0x1984ac0)
// Original: CRYPTO_remove_all_info
// ----------------------------------------------------------------------------
int CRYPTO_remove_all_info(int a1, int a2)
{
  int v2;
  int v4;
  int v5;

  v2 = 0;
  if ( !CRYPTO_is_mem_check_on(a1, a2) )
    return 0;
  CRYPTO_mem_ctrl(3);
  while ( sub_1984590(v5, v4) != nullptr )
    ++v2;
  CRYPTO_mem_ctrl(2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_dbg_malloc  (binary VA: 0x1984b20)
// Original: CRYPTO_dbg_malloc
// ----------------------------------------------------------------------------
int CRYPTO_dbg_malloc(int a1, int a2, void *a3, int a4, int a5, int a6, char a7)
{
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t v18[7];

  result = a7 & 0x7F;
  if ( result == 1 && a3 != nullptr )
  {
    result = CRYPTO_is_mem_check_on(a1, a2);
    if ( result != 0 )
    {
      CRYPTO_mem_ctrl(3);
      v10 = (uint32_t *)(CRYPTO_malloc(36, (int)(uintptr_t)(&unk_1B15112), 0));
      if ( v10 != nullptr )
      {
        if ( dword_2140578 != 0 || (dword_2140578 = (uint32_t)(uintptr_t)(lh_new(sub_19840C0, sub_19840B0)), dword_2140578 != 0) )
        {
          *v10 = (uint32_t)(uintptr_t)(a3);
          v10[2] = a5;
          v10[3] = a6;
          v10[1] = a4;
          v11 = dword_2140570;
          if ( (dword_2140570 & 2) != 0 )
          {
            CRYPTO_THREADID_current(v9, v8, v10 + 4);
            v11 = dword_2140570;
          }
          else
          {
            v10[4] = 0;
            v10[5] = 0;
          }
          v12 = dword_214057C;
          v10[6] = dword_214057C;
          v13 = v12 + 1;
          dword_214057C = v13;
          if ( (v11 & 1) != 0 )
            v10[7] = time(nullptr);
          else
            v10[7] = 0;
          CRYPTO_THREADID_current(v9, v13, v18);
          v14 = dword_2140574;
          v10[8] = 0;
          if ( v14 != 0 )
          {
            v15 = (int)(uintptr_t)(lh_retrieve(v14, v18));
            if ( v15 != 0 )
            {
              v10[8] = v15;
              ++*(uint32_t *)(v15 + 24);
            }
          }
          v16 = (uint32_t *)lh_insert(dword_2140578, v10);
          if ( v16 != nullptr )
          {
            v17 = v16[8];
            if ( v17 != 0 )
              --*(uint32_t *)(v17 + 24);
            CRYPTO_free(v16);
          }
        }
        else
        {
          CRYPTO_free(a3);
          CRYPTO_free(v10);
        }
        return CRYPTO_mem_ctrl(2);
      }
      else
      {
        CRYPTO_free(a3);
        return CRYPTO_mem_ctrl(2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_dbg_free  (binary VA: 0x1984d00)
// Original: CRYPTO_dbg_free
// ----------------------------------------------------------------------------
int CRYPTO_dbg_free(int a1, int a2, int a3, int a4)
{
  int result;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  uint32_t v8[10];

  result = a4;
  if ( a4 == 0 && a3 != 0 )
  {
    result = CRYPTO_is_mem_check_on(a1, a2);
    if ( result != 0 )
    {
      result = dword_2140578;
      if ( dword_2140578 != 0 )
      {
        CRYPTO_mem_ctrl(3);
        v8[0] = a3;
        v5 = (uint32_t *)lh_delete(dword_2140578, v8);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v7 = (uint32_t *)v5[8];
          if ( v7 != nullptr )
            sub_1984530(v7);
          CRYPTO_free(v6);
        }
        return CRYPTO_mem_ctrl(2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_dbg_realloc  (binary VA: 0x1984da0)
// Original: CRYPTO_dbg_realloc
// ----------------------------------------------------------------------------
void CRYPTO_dbg_realloc(int a1, int a2, int a3, void *a4, int a5, int a6, int a7, int a8)
{
  uint32_t *v8;
  int v9[12];

  if ( a8 == 1 && a4 != nullptr )
  {
    if ( a3 != 0 )
    {
      if ( CRYPTO_is_mem_check_on(a1, a2) )
      {
        CRYPTO_mem_ctrl(3);
        v9[0] = a3;
        v8 = (uint32_t *)lh_delete(dword_2140578, v9);
        if ( v8 != nullptr )
        {
          *v8 = (uint32_t)(uintptr_t)(a4);
          v8[1] = a5;
          lh_insert(dword_2140578, v8);
        }
        CRYPTO_mem_ctrl(2);
      }
    }
    else
    {
      CRYPTO_dbg_malloc(a1, a2, a4, a5, a6, a7, 129);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_mem_leaks  (binary VA: 0x1984e90)
// Original: CRYPTO_mem_leaks
// ----------------------------------------------------------------------------
int CRYPTO_mem_leaks(int a1)
{
  int result;
  int v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  if ( dword_2140578 != 0 || (result = dword_2140574, dword_2140574 != 0) )
  {
    CRYPTO_mem_ctrl(3);
    v3 = a1;
    v5 = 0;
    v4 = 0;
    if ( dword_2140578 != 0 && (lh_doall_arg(dword_2140578, sub_19844F0, &v3), v4 != 0) )
    {
      BIO_printf(a1, "%ld bytes leaked in %d chunks\n", v5, v4);
    }
    else
    {
      CRYPTO_lock(9, 20, (int)(uintptr_t)(&unk_1B15112), 0);
      v2 = dword_2140560;
      dword_2140560 = 0;
      if ( dword_2140578 != 0 )
      {
        lh_free((void *)dword_2140578);
        dword_2140578 = 0;
      }
      if ( dword_2140574 != 0 && lh_num_items(dword_2140574) == 0 )
      {
        lh_free((void *)dword_2140574);
        dword_2140574 = 0;
      }
      dword_2140560 = v2;
      CRYPTO_lock(10, 20, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    return CRYPTO_mem_ctrl(2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_mem_leaks_fp  (binary VA: 0x1985020)
// Original: CRYPTO_mem_leaks_fp
// ----------------------------------------------------------------------------
int CRYPTO_mem_leaks_fp(int a1)
{
  int result;
  int v2;
  void *v3;

  result = dword_2140578;
  if ( dword_2140578 != 0 )
  {
    CRYPTO_mem_ctrl(3);
    v2 = (int)(uintptr_t)(BIO_s_file());
    v3 = (void *)BIO_new(v2);
    result = CRYPTO_mem_ctrl(2);
    if ( v3 != nullptr )
    {
      BIO_ctrl(v3, 106, 0, a1);
      CRYPTO_mem_leaks((int)(uintptr_t)(v3));
      return BIO_free(v3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_mem_leaks_cb  (binary VA: 0x19850b0)
// Original: CRYPTO_mem_leaks_cb
// ----------------------------------------------------------------------------
void CRYPTO_mem_leaks_cb(char a1)
{
  if ( dword_2140578 != 0 )
  {
    CRYPTO_lock(9, 27, (int)(uintptr_t)(&unk_1B15112), 0);
    lh_doall_arg(dword_2140578, sub_1984100, &a1);
    CRYPTO_lock(10, 27, (int)(uintptr_t)(&unk_1B15112), 0);
  }
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_dup  (binary VA: 0x19852f0)
// Original: ASN1_INTEGER_dup
// ----------------------------------------------------------------------------
int ASN1_INTEGER_dup(int a1)
{
  return (int)(uintptr_t)(ASN1_STRING_dup(a1));
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_cmp  (binary VA: 0x1985320)
// Original: ASN1_INTEGER_cmp
// ----------------------------------------------------------------------------
int ASN1_INTEGER_cmp(int a1, int a2)
{
  int v2;
  int v3;
  int result;

  v2 = *(uint32_t *)(a1 + 4) & 0x100;
  v3 = *(uint32_t *)(a2 + 4) & 0x100;
  if ( v3 != v2 )
    return v2 == 0 ? 1 : -1;
  result = ASN1_STRING_cmp(a1, a2);
  if ( v3 != 0 )
    return -result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_UINTEGER  (binary VA: 0x1985800)
// Original: d2i_ASN1_UINTEGER
// ----------------------------------------------------------------------------
size_t * d2i_ASN1_UINTEGER(size_t **a1, void **a2, int a3)
{
  size_t *v3;
  int v4;
  size_t *v6;
  uint8_t *v7;
  size_t n;
  size_t v9;
  void *v10;
  char *src;
  typedef size_t *_g4_t_dest;
  typedef uint8_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef size_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18[16];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v14)) > _g4_s2 ? (44u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v15)) > _g4_s3 ? (48u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v16)) > _g4_s4 ? (52u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v17)) > _g4_s5 ? (56u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v18)) > _g4_s6 ? (60u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  if ( a1 == nullptr || (v3 = *a1, *a1 == nullptr) )
  {
    v6 = (size_t *)ASN1_STRING_type_new(2);
    v3 = v6;
    if ( v6 == nullptr )
      return v3;
    v6[1] = 2;
  }
  v15 = *a2;
  if ( (ASN1_get_object(&v15, &v16, &v17, v18, a3) & 0x80u) != 0 )
  {
    v4 = 102;
    goto LABEL_5;
  }
  v4 = 115;
  if ( v17 != 2 )
  {
LABEL_5:
    ERR_put_error(13, 150, v4, &unk_1B15112, 0);
    if ( a1 != nullptr && *a1 == v3 )
      return nullptr;
    dest = v3;
    v3 = nullptr;
    ASN1_STRING_free(dest);
    return v3;
  }
  v7 = CRYPTO_malloc(v16 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v7 == nullptr )
  {
    v4 = 65;
    goto LABEL_5;
  }
  n = v16;
  v3[1] = 2;
  v9 = n;
  if ( n != 0 )
  {
    src = (char *)v15;
    if ( *(uint8_t *)v15 == 0 && n != 1 )
    {
      src = (char *)v15 + 1;
      --n;
      v15 = (char *)v15 + 1;
      v16 = n;
    }
    v14 = v7;
    memcpy(v7, src, n);
    v9 = v16;
    v7 = v14;
    v15 = (char *)v15 + v16;
  }
  v10 = (void *)v3[2];
  if ( v10 != nullptr )
  {
    v13 = v7;
    CRYPTO_free(v10);
    v9 = v16;
    v7 = v13;
  }
  v3[2] = (size_t)v7;
  *v3 = v9;
  if ( a1 != nullptr )
    *a1 = v3;
  *a2 = v15;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_set  (binary VA: 0x19859d0)
// Original: ASN1_INTEGER_set
// ----------------------------------------------------------------------------
int ASN1_INTEGER_set(int a1, int a2)
{
  int v2;
  bool v3; // cc
  uint8_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  uint8_t v15[33];

  v2 = a2;
  v3 = *(uint32_t *)a1 <= 4;
  *(uint32_t *)(a1 + 4) = 2;
  if ( v3 )
  {
    if ( *(uint32_t *)(a1 + 8) != 0 )
      CRYPTO_free(*(void **)(a1 + 8));
    v4 = CRYPTO_malloc(5, (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v4);
    if ( v4 == nullptr )
      goto LABEL_21;
    *(uint32_t *)v4 = 0;
    v4[4] = 0;
  }
  v14 = *(uint32_t *)(a1 + 8);
  if ( v14 != 0 )
  {
    if ( a2 < 0 )
    {
      v2 = -a2;
      *(uint32_t *)(a1 + 4) = 258;
    }
    else
    {
      v5 = 0;
      if ( a2 == 0 )
      {
LABEL_19:
        *(uint32_t *)a1 = v5;
        return 1;
      }
    }
    v15[0] = v2;
    if ( v2 >> 8 != 0 )
    {
      v15[1] = BYTE1(v2);
      v6 = v2 >> 16;
      if ( v2 >> 16 != 0 )
      {
        v7 = v2 >> 24;
        v15[2] = v6;
        if ( v7 != 0 )
        {
          v13 = 3;
          v15[3] = v7;
          goto LABEL_13;
        }
        v12 = 3;
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 1;
    }
    v13 = v12 - 1;
LABEL_13:
    v8 = v13;
    v9 = 0;
    while ( 1 )
    {
      *(uint8_t *)(v14 + v9++) = v15[v8];
      if ( --v8 < 0 )
        break;
      v14 = *(uint32_t *)(a1 + 8);
    }
    v10 = 0;
    if ( v13 >= 0 )
      v10 = v13;
    v5 = v10 + 1;
    goto LABEL_19;
  }
LABEL_21:
  ERR_put_error(13, 118, 65, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_get  (binary VA: 0x1985b50)
// Original: ASN1_INTEGER_get
// ----------------------------------------------------------------------------
int ASN1_INTEGER_get(int *a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int i;
  int v7;
  int v8;

  result = 0;
  if ( a1 != nullptr )
  {
    v2 = a1[1];
    if ( v2 == 258 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      result = -1;
      if ( v2 != 2 )
        return result;
    }
    v4 = *a1;
    result = -1;
    if ( *a1 <= 4 )
    {
      v5 = a1[2];
      result = 0;
      if ( v5 != 0 )
      {
        if ( v4 > 0 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v7 = result << 8;
            v8 = *(uint8_t *)(v5 + i);
            result = v7 | v8;
          }
        }
        if ( v3 != 0 )
          return -result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_to_ASN1_INTEGER  (binary VA: 0x1985bc0)
// Original: BN_to_ASN1_INTEGER
// ----------------------------------------------------------------------------
int * BN_to_ASN1_INTEGER(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  int *v11;

  v2 = a2;
  if ( a2 == nullptr )
  {
    v2 = (int *)ASN1_STRING_type_new(2);
    if ( v2 == nullptr )
    {
      ERR_put_error(13, 139, 58, &unk_1B15112, 0);
      return v2;
    }
  }
  v3 = -(*(uint32_t *)(a1 + 12) == 0);
  LOBYTE(v3) = 0;
  v2[1] = v3 + 258;
  v4 = BN_num_bits(a1);
  v5 = 0;
  v6 = 3;
  if ( v4 != 0 )
  {
    v7 = v4 / 8;
    v5 = v7 + 1;
    v6 = v7 + 4;
  }
  if ( v6 >= *v2 )
  {
    v8 = CRYPTO_realloc((void *)v2[2], v5 + 4, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v8 == nullptr )
    {
      ERR_put_error(13, 139, 65, &unk_1B15112, 0);
      if ( a2 == v2 )
        return nullptr;
      v11 = v2;
      v2 = nullptr;
      ASN1_STRING_free(v11);
      return v2;
    }
    v2[2] = (int)(uintptr_t)(v8);
  }
  else
  {
    v8 = (uint8_t *)v2[2];
  }
  v9 = BN_bn2bin(a1, v8);
  *v2 = v9;
  if ( v9 == 0 )
  {
    *(uint8_t *)v2[2] = 0;
    *v2 = 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_to_BN  (binary VA: 0x1985d40)
// Original: ASN1_INTEGER_to_BN
// ----------------------------------------------------------------------------
int ASN1_INTEGER_to_BN(uint32_t *a1, int a2)
{
  int result;
  int v3;

  result = (int)(uintptr_t)(BN_bin2bn(a1[2], *a1, a2));
  if ( result != 0 )
  {
    if ( a1[1] == 258 )
    {
      v3 = result;
      BN_set_negative(result, 1);
      return v3;
    }
  }
  else
  {
    ERR_put_error(13, 119, 105, &unk_1B15112, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_get_count  (binary VA: 0x1985e30)
// Original: EVP_PKEY_asn1_get_count
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_get_count()
{
  int result;

  result = 10;
  if ( dword_2140580 != 0 )
    return sk_num(dword_2140580) + 10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_get0  (binary VA: 0x1985e60)
// Original: EVP_PKEY_asn1_get0
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_get0(int a1)
{
  int result;

  result = 0;
  if ( a1 >= 0 )
  {
    if ( a1 > 9 )
      return sk_value(dword_2140580, a1 - 10);
    else
      return (int)*(&off_20CB580 + a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_find  (binary VA: 0x1985eb0)
// Original: EVP_PKEY_asn1_find
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_find(uint32_t *a1, int a2)
{
  int v3;
  int v4;
  int *v5;
  int pkey_asn1_meth_engine;
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t _g4_t_v9[31];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  while ( 1 )
  {
    v8 = v9;
    v9[0] = a2;
    if ( dword_2140580 != 0 )
    {
      v4 = sk_find(dword_2140580, v9);
      if ( v4 >= 0 )
      {
        v3 = sk_value(dword_2140580, v4);
        if ( v3 == 0 )
          goto LABEL_9;
        goto LABEL_3;
      }
    }
    v5 = (int *)OBJ_bsearch(&v8, &off_20CB580, 10, 4, sub_1985E10);
    if ( v5 == nullptr )
      break;
    v3 = *v5;
    if ( *v5 == 0 )
      goto LABEL_9;
LABEL_3:
    if ( (*(uint8_t *)(v3 + 8) & 1) == 0 )
      goto LABEL_9;
    a2 = *(uint32_t *)(v3 + 4);
  }
  v3 = 0;
LABEL_9:
  if ( a1 == nullptr )
    return v3;
  pkey_asn1_meth_engine = ENGINE_get_pkey_asn1_meth_engine(a2);
  if ( pkey_asn1_meth_engine != 0 )
  {
    *a1 = pkey_asn1_meth_engine;
    return ENGINE_get_pkey_asn1_meth(pkey_asn1_meth_engine, a2);
  }
  *a1 = 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_find_str  (binary VA: 0x1985fc0)
// Original: EVP_PKEY_asn1_find_str
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_find_str(void **a1, char *s, size_t n)
{
  int str;
  int i;
  int v6;
  const char *v7;
  typedef void *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  if ( n == -1 )
    n = strlen(s);
  if ( a1 != nullptr )
  {
    str = ENGINE_pkey_asn1_find_str(&v8, s, n);
    if ( str != 0 )
    {
      if ( ENGINE_init(v8) == 0 )
        str = 0;
      ENGINE_free(v8);
      *a1 = v8;
      return str;
    }
    *a1 = nullptr;
  }
  for ( i = 0; i < EVP_PKEY_asn1_get_count(); ++i )
  {
    v6 = EVP_PKEY_asn1_get0(i);
    str = v6;
    if ( (*(uint8_t *)(v6 + 8) & 1) == 0 )
    {
      v7 = *(const char **)(v6 + 12);
      if ( strlen(v7) == n && strncasecmp(v7, s, n) == 0 )
        return str;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_add0  (binary VA: 0x19860d0)
// Original: EVP_PKEY_asn1_add0
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_add0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = dword_2140580;
  if ( dword_2140580 != 0 || (v5 = (int)(uintptr_t)(sk_new(sub_1985DF0)), v3 = 0, v1 = v5, dword_2140580 = v5, v5 != 0) )
  {
    v2 = sk_push(v1, a1);
    v3 = 0;
    if ( v2 != 0 )
    {
      sk_sort(dword_2140580);
      return 1;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_get0_info  (binary VA: 0x1986140)
// Original: EVP_PKEY_asn1_get0_info
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_get0_info(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  int result;

  result = 0;
  if ( a6 != nullptr )
  {
    if ( a1 != nullptr )
      *a1 = *a6;
    if ( a2 != nullptr )
      *a2 = a6[1];
    if ( a3 != nullptr )
      *a3 = a6[2];
    if ( a4 != nullptr )
      *a4 = a6[4];
    result = 1;
    if ( a5 != nullptr )
      *a5 = a6[3];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get0_asn1  (binary VA: 0x19861c0)
// Original: EVP_PKEY_get0_asn1
// ----------------------------------------------------------------------------
int EVP_PKEY_get0_asn1(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_copy  (binary VA: 0x19861d0)
// Original: EVP_PKEY_asn1_copy
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY_asn1_copy(uint32_t *a1, uint32_t *a2)
{
  a1[5] = a2[5];
  a1[6] = a2[6];
  a1[7] = a2[7];
  a1[8] = a2[8];
  a1[9] = a2[9];
  a1[10] = a2[10];
  a1[11] = a2[11];
  a1[23] = a2[23];
  a1[22] = a2[22];
  a1[12] = a2[12];
  a1[13] = a2[13];
  a1[14] = a2[14];
  a1[15] = a2[15];
  a1[16] = a2[16];
  a1[17] = a2[17];
  a1[18] = a2[18];
  a1[19] = a2[19];
  a1[20] = a2[20];
  a1[21] = a2[21];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_free  (binary VA: 0x1986250)
// Original: EVP_PKEY_asn1_free
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_free(void **a1)
{
  int result;

  if ( a1 != nullptr && ((uint8_t)(uintptr_t)(a1)[2] & 2) != 0 )
  {
    if ( a1[3] != nullptr )
      CRYPTO_free(a1[3]);
    if ( a1[4] != nullptr )
      CRYPTO_free(a1[4]);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_new  (binary VA: 0x19862b0)
// Original: EVP_PKEY_asn1_new
// ----------------------------------------------------------------------------
void ** EVP_PKEY_asn1_new(void *a1, int a2, char *a3, char *a4)
{
  void **v4;
  void **v5;
  int v6;
  int v7;
  void **v9;

  v4 = (void **)CRYPTO_malloc(96, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = v4;
  if ( v4 != nullptr )
  {
    *v4 = a1;
    v4[1] = a1;
    v4[2] = (void *)(a2 | 2);
    if ( a4 != nullptr )
    {
      v6 = (int)(uintptr_t)(BUF_strdup(a4));
      v5[4] = (void *)v6;
      if ( v6 == 0 )
        goto LABEL_10;
      if ( a3 != nullptr )
      {
LABEL_5:
        v7 = (int)(uintptr_t)(BUF_strdup(a3));
        v5[3] = (void *)v7;
        if ( v7 != 0 )
        {
LABEL_6:
          v5[5] = nullptr;
          v5[6] = nullptr;
          v5[7] = nullptr;
          v5[8] = nullptr;
          v5[9] = nullptr;
          v5[10] = nullptr;
          v5[11] = nullptr;
          v5[23] = nullptr;
          v5[22] = nullptr;
          v5[12] = nullptr;
          v5[13] = nullptr;
          v5[14] = nullptr;
          v5[15] = nullptr;
          v5[16] = nullptr;
          v5[17] = nullptr;
          v5[18] = nullptr;
          v5[19] = nullptr;
          v5[20] = nullptr;
          v5[21] = nullptr;
          return v5;
        }
LABEL_10:
        v9 = v5;
        v5 = nullptr;
        EVP_PKEY_asn1_free(v9);
        return v5;
      }
    }
    else
    {
      v4[4] = nullptr;
      if ( a3 != nullptr )
        goto LABEL_5;
    }
    v5[3] = nullptr;
    goto LABEL_6;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_add_alias  (binary VA: 0x1986420)
// Original: EVP_PKEY_asn1_add_alias
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_add_alias(void *a1, void *a2)
{
  void **v2;
  int result;

  v2 = EVP_PKEY_asn1_new(a2, 1, nullptr, nullptr);
  result = 0;
  if ( v2 != nullptr )
  {
    v2[1] = a1;
    return EVP_PKEY_asn1_add0((int)(uintptr_t)(v2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_set_public  (binary VA: 0x1986480)
// Original: EVP_PKEY_asn1_set_public
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY_asn1_set_public(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  a1[5] = a2;
  a1[6] = a3;
  a1[7] = a4;
  a1[8] = a5;
  a1[12] = a6;
  a1[13] = a7;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_set_private  (binary VA: 0x19864b0)
// Original: EVP_PKEY_asn1_set_private
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY_asn1_set_private(uint32_t *a1, int a2, int a3, int a4)
{
  a1[9] = a2;
  a1[10] = a3;
  a1[11] = a4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_set_param  (binary VA: 0x19864d0)
// Original: EVP_PKEY_asn1_set_param
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY_asn1_set_param(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  a1[14] = a2;
  a1[15] = a3;
  a1[16] = a4;
  a1[17] = a5;
  a1[18] = a6;
  a1[19] = a7;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_set_free  (binary VA: 0x1986500)
// Original: EVP_PKEY_asn1_set_free
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_set_free(int a1, int a2)
{
  *(uint32_t *)(a1 + 80) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_asn1_set_ctrl  (binary VA: 0x1986510)
// Original: EVP_PKEY_asn1_set_ctrl
// ----------------------------------------------------------------------------
int EVP_PKEY_asn1_set_ctrl(int a1, int a2)
{
  *(uint32_t *)(a1 + 84) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_check_infinite_end  (binary VA: 0x1986520)
// Original: ASN1_check_infinite_end
// ----------------------------------------------------------------------------
char ASN1_check_infinite_end(uint32_t *a1, int a2)
{
  char result;
  uint8_t *v3;

  result = 1;
  if ( a2 > 0 )
  {
    result = 0;
    if ( a2 != 1 )
    {
      v3 = (uint8_t *)*a1;
      if ( *(uint8_t *)*a1 == 0 && v3[1] == 0 )
      {
        *a1 = (uint32_t)(uintptr_t)(v3 + 2);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_const_check_infinite_end  (binary VA: 0x1986560)
// Original: ASN1_const_check_infinite_end
// ----------------------------------------------------------------------------
char ASN1_const_check_infinite_end(uint32_t *a1, int a2)
{
  char result;
  uint8_t *v3;

  result = 1;
  if ( a2 > 0 )
  {
    result = 0;
    if ( a2 != 1 )
    {
      v3 = (uint8_t *)*a1;
      if ( *(uint8_t *)*a1 == 0 && v3[1] == 0 )
      {
        *a1 = (uint32_t)(uintptr_t)(v3 + 2);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_get_object  (binary VA: 0x1986620)
// Original: ASN1_get_object
// ----------------------------------------------------------------------------
int ASN1_get_object(uint8_t **a1, int *a2, int *a3, int *a4, int a5)
{
  uint32_t *v5;
  char *v6;
  char v7;
  int v8;
  char *v10;
  int v11;
  int v12;
  char v13;
  char v14;
  int v15;
  uint8_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  bool v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  uint8_t *v29;
  int v30;
  char v31;
  uint32_t *v32;

  v5 = (uint32_t *)(a1);
  v6 = (char *)(*a1);
  if ( a5 == 0 )
    goto LABEL_4;
  v7 = *v6;
  v8 = *v6 & 0x1F;
  if ( v8 == 31 )
  {
    if ( a5 == 1 )
      goto LABEL_4;
    v10 = v6 + 1;
    v11 = 0;
    v28 = v7;
    v12 = a5 - 1;
    while ( 1 )
    {
      v13 = *v10;
      if ( *v10 >= 0 )
        break;
      ++v10;
      if ( --v12 != 0 )
      {
        v11 = (v11 << 7) | v13 & 0x7F;
        if ( v11 <= 0xFFFFFF )
          continue;
      }
      goto LABEL_4;
    }
    v23 = v12 - 1;
    v22 = v12 == 1;
    v5 = (uint32_t *)(a1);
    v7 = v28;
    v25 = v23;
    if ( v22 )
      goto LABEL_4;
    v29 = (uint8_t *)(v10 + 1);
    v8 = (v11 << 7) | *v10 & 0x7F;
  }
  else
  {
    v25 = a5 - 1;
    if ( a5 == 1 )
      goto LABEL_4;
    v29 = (uint8_t *)(v6 + 1);
  }
  *a3 = v8;
  *a4 = v7 & 0xC0;
  if ( v25 <= 0 )
    goto LABEL_4;
  v14 = *v29;
  if ( *v29 == 0x80 )
  {
    v16 = v29 + 1;
    v15 = 0;
    v26 = 1;
  }
  else
  {
    v15 = v14 & 0x7F;
    v16 = v29 + 1;
    if ( v14 < 0 )
    {
      if ( (unsigned int)v15 > 4 || v25 == 1 )
        goto LABEL_4;
      v31 = v7;
      v27 = v25 - v15;
      v18 = 0;
      v19 = v15 - 1;
      v32 = v5;
      while ( v19 != -1 )
      {
        --v19;
        v20 = v18 << 8;
        v21 = *v16++;
        v18 = v20 | v21;
        if ( v27 + v19 == 0 )
          goto LABEL_4;
      }
      v30 = v18;
      v5 = v32;
      v7 = v31;
      v15 = v30;
    }
    if ( v15 < 0 )
    {
LABEL_4:
      ERR_put_error(13, 114, 123, &unk_1B15112, 0);
      return 128;
    }
    v26 = 0;
  }
  v17 = v7 & 0x20;
  *a2 = v15;
  if ( *v5 - (int)(uintptr_t)(v16) + a5 < v15 )
  {
    v24 = v17;
    ERR_put_error(13, 114, 155, &unk_1B15112, 0);
    v17 = v24;
    LOBYTE(v17) = v24 | 0x80;
  }
  *v5 = (uint32_t)(uintptr_t)(v16);
  return v26 | v17;
}

// ----------------------------------------------------------------------------
// Function: ASN1_put_object  (binary VA: 0x1986890)
// Original: ASN1_put_object
// ----------------------------------------------------------------------------
uint8_t ** ASN1_put_object(uint8_t **a1, int a2, int a3, int a4, char a5)
{
  int v5;
  uint8_t *v6;
  char v7;
  uint8_t *v8;
  int v9;
  int v10;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  int i;
  int v17;
  int v18;

  v5 = a4;
  v6 = *a1;
  v7 = a5 & 0xC0 | (a2 != 0 ? 0x20 : 0);
  if ( a4 > 30 )
  {
    v14 = a4;
    *v6 = v7 | 0x1F;
    v15 = v6 + 1;
    for ( i = 0; ; ++i )
    {
      v14 >>= 7;
      if ( v14 == 0 )
        break;
    }
    v18 = i + 1;
    v17 = i;
    do
    {
      v15[i] = v5 & 0x7F;
      if ( i != v17 )
        v15[i] = v5 & 0x7F | 0x80;
      --i;
      v5 >>= 7;
    }
    while ( i + 1 > 0 );
    v8 = &v15[v18];
    if ( a2 != 2 )
      goto LABEL_3;
LABEL_18:
    *v8 = 0x80;
    *a1 = v8 + 1;
    return a1;
  }
  *v6 = v7 | a4 & 0x1F;
  v8 = v6 + 1;
  if ( a2 == 2 )
    goto LABEL_18;
LABEL_3:
  v9 = 0;
  v10 = a3;
  if ( a3 > 127 )
  {
    while ( 1 )
    {
      v10 >>= 8;
      v12 = v9 + 1;
      if ( v10 == 0 )
        break;
      ++v9;
    }
    *v8 = v12 | 0x80;
    v13 = a3;
    do
    {
      v8[v9-- + 1] = v13;
      v13 >>= 8;
    }
    while ( v9 + 1 > 0 );
    *a1 = &v8[v12 + 1];
    return a1;
  }
  else
  {
    *v8 = a3;
    *a1 = v8 + 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: ASN1_put_eoc  (binary VA: 0x19869a0)
// Original: ASN1_put_eoc
// ----------------------------------------------------------------------------
int ASN1_put_eoc(uint8_t **a1)
{
  uint8_t *v1;

  v1 = *a1;
  *v1 = 0;
  v1[1] = 0;
  *a1 = v1 + 2;
  return 2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_object_size  (binary VA: 0x19869c0)
// Original: ASN1_object_size
// ----------------------------------------------------------------------------
int ASN1_object_size(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;

  v3 = a2;
  v4 = a3;
  v5 = a2 + 1;
  if ( a3 > 30 )
  {
    do
    {
      ++v5;
      v7 = v4 >> 7;
      if ( v7 == 0 )
        break;
      ++v5;
      v4 = v7 >> 7;
    }
    while ( v4 != 0 );
  }
  if ( a1 == 2 )
    return v5 + 3;
  result = v5 + 1;
  if ( a2 > 127 )
  {
    do
    {
      ++result;
      v3 >>= 8;
    }
    while ( v3 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_set  (binary VA: 0x1986b00)
// Original: ASN1_STRING_set
// ----------------------------------------------------------------------------
int ASN1_STRING_set(int a1, char *s, signed int a3)
{
  signed int n;
  void *v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v9;
  int v10;

  n = a3;
  if ( a3 < 0 )
  {
    v7 = 0;
    if ( s == nullptr )
      return v7;
    n = strlen(s);
  }
  if ( n > *(uint32_t *)a1 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 != nullptr )
    {
      v9 = *(uint32_t *)(a1 + 8);
      v5 = CRYPTO_realloc(v4, n + 1, (int)(uintptr_t)(&unk_1B15112), 0);
      *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v5);
      v6 = v9;
      goto LABEL_5;
    }
LABEL_10:
    v5 = CRYPTO_malloc(n + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v5);
    v6 = 0;
LABEL_5:
    if ( v5 == nullptr )
    {
      v10 = v6;
      ERR_put_error(13, 186, 65, &unk_1B15112, 0);
      *(uint32_t *)(a1 + 8) = v10;
      return 0;
    }
    goto LABEL_6;
  }
  if ( *(uint32_t *)(a1 + 8) == 0 )
    goto LABEL_10;
LABEL_6:
  *(uint32_t *)a1 = n;
  v7 = 1;
  if ( s != nullptr )
  {
    memcpy(*(void **)(a1 + 8), s, n);
    *(uint8_t *)(*(uint32_t *)(a1 + 8) + n) = 0;
    return 1;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_copy  (binary VA: 0x1986c60)
// Original: ASN1_STRING_copy
// ----------------------------------------------------------------------------
int ASN1_STRING_copy(int a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a2 != 0 )
  {
    *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
    if ( ASN1_STRING_set(a1, *(char **)(a2 + 8), *(uint32_t *)a2) != 0 )
    {
      LOWORD(v2) = 1;
      *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_set0  (binary VA: 0x1986cd0)
// Original: ASN1_STRING_set0
// ----------------------------------------------------------------------------
int ASN1_STRING_set0(int a1, int a2, int a3)
{
  if ( *(uint32_t *)(a1 + 8) != 0 )
    CRYPTO_free(*(void **)(a1 + 8));
  *(uint32_t *)(a1 + 8) = a2;
  *(uint32_t *)a1 = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_type_new  (binary VA: 0x1986d20)
// Original: ASN1_STRING_type_new
// ----------------------------------------------------------------------------
uint32_t * ASN1_STRING_type_new(int a1)
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(16, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    *result = 0;
    result[1] = a1;
    result[2] = 0;
    result[3] = 0;
  }
  else
  {
    ERR_put_error(13, 130, 65, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_new  (binary VA: 0x1986dc0)
// Original: ASN1_STRING_new
// ----------------------------------------------------------------------------
uint32_t * ASN1_STRING_new()
{
  return ASN1_STRING_type_new(4);
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_free  (binary VA: 0x1986df0)
// Original: ASN1_STRING_free
// ----------------------------------------------------------------------------
int ASN1_STRING_free(void **a1)
{
  int result;

  if ( a1 != nullptr )
  {
    if ( a1[2] != nullptr && ((uint8_t)(uintptr_t)(a1)[3] & 0x10) == 0 )
      CRYPTO_free(a1[2]);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_dup  (binary VA: 0x1986e50)
// Original: ASN1_STRING_dup
// ----------------------------------------------------------------------------
void ** ASN1_STRING_dup(int a1)
{
  void **v1;
  void **v2;
  void **v4;

  v1 = nullptr;
  if ( a1 != 0 )
  {
    v2 = (void **)ASN1_STRING_new();
    v1 = v2;
    if ( v2 != nullptr && ASN1_STRING_copy((int)(uintptr_t)(v2), a1) == 0 )
    {
      v4 = v1;
      v1 = nullptr;
      ASN1_STRING_free(v4);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_cmp  (binary VA: 0x1986ec0)
// Original: ASN1_STRING_cmp
// ----------------------------------------------------------------------------
int ASN1_STRING_cmp(int a1, int a2)
{
  int result;

  result = *(uint32_t *)a1 - *(uint32_t *)a2;
  if ( *(uint32_t *)a1 == *(uint32_t *)a2 )
  {
    result = memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), *(uint32_t *)a1);
    if ( result == 0 )
      return *(uint32_t *)(a1 + 4) - *(uint32_t *)(a2 + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_length  (binary VA: 0x1986fc0)
// Original: ASN1_STRING_length
// ----------------------------------------------------------------------------
int ASN1_STRING_length(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_length_set  (binary VA: 0x1986fd0)
// Original: ASN1_STRING_length_set
// ----------------------------------------------------------------------------
uint32_t * ASN1_STRING_length_set(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_type  (binary VA: 0x1986fe0)
// Original: ASN1_STRING_type
// ----------------------------------------------------------------------------
int ASN1_STRING_type(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_data  (binary VA: 0x1986ff0)
// Original: ASN1_STRING_data
// ----------------------------------------------------------------------------
int ASN1_STRING_data(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: d2i_PrivateKey  (binary VA: 0x1987000)
// Original: d2i_PrivateKey
// ----------------------------------------------------------------------------
uint32_t * d2i_PrivateKey(size_t a1, uint32_t **a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int (*v6)(uint32_t *, int, int);
  int v7;
  char *v9;

  if ( a2 != nullptr && (v4 = *a2, *a2 != nullptr) )
  {
    if ( v4[4] != 0 )
    {
      ENGINE_finish(v4[4]);
      v4[4] = 0;
    }
  }
  else
  {
    v4 = (uint32_t *)EVP_PKEY_new();
    if ( v4 == nullptr )
    {
      ERR_put_error(13, 154, 6, &unk_1B15112, 0);
      return v4;
    }
  }
  if ( EVP_PKEY_set_type((char *)v4, a1) != 0 )
  {
    v5 = v4[3];
    v6 = *(int (**)(uint32_t *, int, int))(v5 + 88);
    if ( v6 != nullptr )
    {
      if ( v6(v4, a3, a4) != 0 )
        goto LABEL_12;
      v5 = v4[3];
    }
    if ( *(uint32_t *)(v5 + 36) != 0 )
    {
      v7 = d2i_PKCS8_PRIV_KEY_INFO(0, a3, a4);
      if ( v7 != 0 )
      {
        EVP_PKEY_free(v4);
        v4 = (uint32_t *)EVP_PKCS82PKEY(v7);
        PKCS8_PRIV_KEY_INFO_free(v7);
LABEL_12:
        if ( a2 != nullptr )
          *a2 = v4;
        return v4;
      }
    }
    else
    {
      ERR_put_error(13, 154, 13, &unk_1B15112, 0);
    }
  }
  else
  {
    ERR_put_error(13, 154, 163, &unk_1B15112, 0);
  }
  if ( a2 != nullptr && *a2 == v4 )
    return nullptr;
  v9 = (char *)v4;
  v4 = nullptr;
  EVP_PKEY_free(v9);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: d2i_AutoPrivateKey  (binary VA: 0x19871c0)
// Original: d2i_AutoPrivateKey
// ----------------------------------------------------------------------------
uint32_t * d2i_AutoPrivateKey(uint32_t **a1, uint32_t *a2, int a3)
{
  void *v3;
  int v4;
  int v5;
  uint32_t *result;
  int v7;
  typedef size_t _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v10[0] = *a2;
  v3 = (void *)d2i_ASN1_SEQUENCE_ANY(0, v10, a3);
  if ( sk_num(v3) == 6 )
  {
    v5 = 116;
    goto LABEL_4;
  }
  if ( sk_num(v3) == 4 )
  {
    v5 = 408;
    goto LABEL_4;
  }
  v4 = sk_num(v3);
  v5 = 6;
  if ( v4 != 3 )
  {
LABEL_4:
    v8 = v5;
    sk_pop_free(v3, (int)(uintptr_t)(ASN1_TYPE_free));
    return d2i_PrivateKey(v8, a1, (int)(uintptr_t)(a2), a3);
  }
  v7 = d2i_PKCS8_PRIV_KEY_INFO(0, a2, a3);
  sk_pop_free(v3, (int)(uintptr_t)(ASN1_TYPE_free));
  if ( v7 != 0 )
  {
    v9 = (uint32_t *)EVP_PKCS82PKEY(v7);
    PKCS8_PRIV_KEY_INFO_free(v7);
    result = v9;
    if ( a1 != nullptr )
      *a1 = v9;
  }
  else
  {
    ERR_put_error(13, 207, 167, &unk_1B15112, 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8_PRIV_KEY_INFO  (binary VA: 0x1987380)
// Original: d2i_PKCS8_PRIV_KEY_INFO
// ----------------------------------------------------------------------------
int d2i_PKCS8_PRIV_KEY_INFO(int a1, int a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, &PKCS8_PRIV_KEY_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8_PRIV_KEY_INFO  (binary VA: 0x19873c0)
// Original: i2d_PKCS8_PRIV_KEY_INFO
// ----------------------------------------------------------------------------
int i2d_PKCS8_PRIV_KEY_INFO(int a1, int a2)
{
  return ASN1_item_i2d(a1, a2, &PKCS8_PRIV_KEY_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: PKCS8_PRIV_KEY_INFO_new  (binary VA: 0x1987400)
// Original: PKCS8_PRIV_KEY_INFO_new
// ----------------------------------------------------------------------------
int PKCS8_PRIV_KEY_INFO_new()
{
  return ASN1_item_new(&PKCS8_PRIV_KEY_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: PKCS8_PRIV_KEY_INFO_free  (binary VA: 0x1987430)
// Original: PKCS8_PRIV_KEY_INFO_free
// ----------------------------------------------------------------------------
int PKCS8_PRIV_KEY_INFO_free(char a1)
{
  return ASN1_item_free(a1, &PKCS8_PRIV_KEY_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: PKCS8_pkey_set0  (binary VA: 0x1987460)
// Original: PKCS8_pkey_set0
// ----------------------------------------------------------------------------
int PKCS8_pkey_set0(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;

  if ( a3 < 0 || (v7 = ASN1_INTEGER_set(a1[1], a3), v8 = 0, v7 != 0) )
  {
    if ( a6 != 0 )
    {
      v9 = (uint32_t *)ASN1_OCTET_STRING_new();
      v8 = 0;
      v10 = v9;
      if ( v9 == nullptr )
        return v8;
      v9[2] = a6;
      v11 = v9 + 2;
      LOBYTE(v8) = 4;
      *v9 = a7;
      v12 = 16;
      if ( *a1 != 1 )
        v12 = v8;
      ASN1_TYPE_set(a1[3], v12, v10);
    }
    else
    {
      v11 = nullptr;
    }
    v13 = X509_ALGOR_set0(a1[2], a2, a4, a5);
    v8 = 1;
    if ( v13 == 0 )
    {
      LOBYTE(v8) = 0;
      if ( v11 != nullptr )
        *v11 = 0;
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: PKCS8_pkey_get0  (binary VA: 0x1987540)
// Original: PKCS8_pkey_get0
// ----------------------------------------------------------------------------
int PKCS8_pkey_get0(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5)
{
  uint32_t *v5;
  int result;

  if ( a1 != nullptr )
    *a1 = **(uint32_t **)(a5 + 8);
  v5 = *(uint32_t **)(a5 + 12);
  if ( *v5 == 4 )
  {
    *(uint32_t *)a5 = 0;
    if ( a2 != nullptr )
    {
LABEL_7:
      *a2 = *(uint32_t *)(v5[1] + 8);
      *a3 = **(uint32_t **)(*(uint32_t *)(a5 + 12) + 4);
    }
  }
  else
  {
    result = 0;
    if ( *v5 != 16 )
      return result;
    *(uint32_t *)a5 = 1;
    if ( a2 != nullptr )
      goto LABEL_7;
  }
  result = 1;
  if ( a4 != nullptr )
    *a4 = *(uint32_t *)(a5 + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_tag2bit  (binary VA: 0x1987b80)
// Original: ASN1_tag2bit
// ----------------------------------------------------------------------------
int ASN1_tag2bit(unsigned int a1)
{
  int result;

  result = 0;
  if ( a1 <= 0x1E )
    return dword_1D21DA0[a1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_ex_d2i  (binary VA: 0x1988660)
// Original: ASN1_item_ex_d2i
// ----------------------------------------------------------------------------
int ASN1_item_ex_d2i(int *a1, char **a2, int a3, int a4, int a5, int a6, char a7, uint8_t *a8)
{
  int v8;
  int v9;
  char v10;
  int v11;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  char *v24;
  int v25;
  int v26;
  uint8_t *v27;
  int v28;
  char *v29;
  char v30;
  int v31;
  int v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int (*_g4_t_v44)(int, int *, int, uint32_t);
  typedef int _g4_t_v45;
  typedef int _g4_t_field_ptr;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef unsigned int _g4_t_v53[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v34)) > _g4_s0 ? (8u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v35)) > _g4_s1 ? (8u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v36)) > _g4_s2 ? (8u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v39)) > _g4_s5 ? (12u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v40)) > _g4_s6 ? (16u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v41)) > _g4_s7 ? (16u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v42)) > _g4_s8 ? (20u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v43)) > _g4_s9 ? (24u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v44)) > _g4_s10 ? (28u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v45)) > _g4_s11 ? (32u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_field_ptr)) > _g4_s12 ? (32u + sizeof(_g4_t_field_ptr)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v47)) > _g4_s13 ? (40u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (47u + sizeof(_g4_t_v48)) > _g4_s14 ? (47u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (53u + sizeof(_g4_t_v49)) > _g4_s15 ? (53u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (54u + sizeof(_g4_t_v50)) > _g4_s16 ? (54u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (55u + sizeof(_g4_t_v51)) > _g4_s17 ? (55u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v52)) > _g4_s18 ? (56u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v53)) > _g4_s19 ? (60u + sizeof(_g4_t_v53)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_field_ptr &field_ptr = *reinterpret_cast<_g4_t_field_ptr *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 47u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 53u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 54u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 55u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);

  v8 = 0;
  v9 = a4;
  v52 = nullptr;
  v10 = a7;
  v11 = *(uint32_t *)(a4 + 16);
  if ( a1 != nullptr )
  {
    v44 = nullptr;
    if ( v11 != 0 )
      v44 = *(int (**)(int, int *, int, uint32_t))(v11 + 16);
    v8 = 0;
    switch ( *(uint8_t *)a4 )
    {
      case 0:
        v28 = *(uint32_t *)(a4 + 8);
        if ( v28 == 0 )
          return sub_1988000(a1, a2, a3, a4, a5, a6, a7, a8);
        if ( a7 != 0 || a5 != -1 )
        {
          ERR_put_error(13, 120, 170, &unk_1B15112, 0);
          goto LABEL_63;
        }
        return sub_1989590(a3, v28, 0, a8);
      case 1:
      case 6:
        v52 = *a2;
        v45 = a3;
        if ( a5 == -1 )
        {
          a6 = 0;
          a5 = 16;
        }
        v20 = sub_19875E0(&a3, nullptr, nullptr, &v50, &v51, &v52, a3, a5, a6, a7, (int)(uintptr_t)(a8));
        if ( v20 == 0 )
          goto LABEL_70;
        if ( v20 == -1 )
          return -1;
        if ( v11 != 0 && (*(uint8_t *)(v11 + 4) & 4) != 0 )
        {
          v48 = 1;
          a3 = v45 + *a2 - v52;
        }
        else
        {
          v48 = v50;
        }
        if ( v51 == 0 )
        {
          ERR_put_error(13, 120, 149, &unk_1B15112, 0);
          goto LABEL_63;
        }
        if ( *a1 == 0 && ASN1_item_ex_new(a1, v9) == 0 )
          goto LABEL_70;
        if ( v44 != nullptr && v44(4, a1, v9, 0) == 0 )
          goto LABEL_25;
        v42 = *(uint32_t *)(v9 + 8);
        v41 = 0;
        if ( *(int *)(v9 + 12) <= 0 )
          goto LABEL_89;
        v47 = v9;
        while ( 1 )
        {
          v23 = (uint32_t *)asn1_do_adb(a1, v42, 1);
          v16 = v23;
          if ( v23 == nullptr )
          {
            v9 = v47;
            goto LABEL_63;
          }
          field_ptr = asn1_get_field_ptr(a1, v23);
          if ( a3 == 0 )
          {
            v9 = v47;
            goto LABEL_89;
          }
          v24 = v52;
          if ( a3 > 1 && *v52 == 0 && v52[1] == 0 )
            break;
          LOBYTE(v21) = 0;
          if ( *(uint32_t *)(v47 + 12) - 1 != v41 )
            v21 = *v16 & 1;
          v22 = sub_1989590(a3, v16, v21, a8);
          if ( v22 == 0 )
          {
            v9 = v47;
LABEL_98:
            ASN1_item_ex_free(a1, v9);
            goto LABEL_95;
          }
          if ( v22 == -1 )
            ASN1_template_free(field_ptr, v16);
          else
            a3 += v24 - v52;
          ++v41;
          v42 += 20;
          if ( *(uint32_t *)(v47 + 12) <= v41 )
          {
            v9 = v47;
LABEL_89:
            if ( v50 != 0 )
            {
              if ( a3 <= 1 || *v52 != 0 || v52[1] != 0 )
              {
                ERR_put_error(13, 120, 137, &unk_1B15112, 0);
                goto LABEL_63;
              }
              v52 += 2;
            }
            goto LABEL_52;
          }
        }
        v9 = v47;
        v52 += 2;
        if ( v50 == 0 )
        {
          ERR_put_error(13, 120, 159, &unk_1B15112, 0);
          goto LABEL_63;
        }
        v50 = 0;
        a3 -= 2;
LABEL_52:
        if ( v48 == 0 && a3 != 0 )
        {
          ERR_put_error(13, 120, 148, &unk_1B15112, 0);
          goto LABEL_63;
        }
        if ( v41 < *(uint32_t *)(v9 + 12) )
        {
          v43 = v9;
          v25 = v42;
          while ( 1 )
          {
            v27 = (uint8_t *)asn1_do_adb(a1, v25, 1);
            v16 = (uint32_t *)(v27);
            if ( v27 == nullptr )
            {
              v9 = v43;
              goto LABEL_63;
            }
            if ( (*v27 & 1) == 0 )
              break;
            v26 = asn1_get_field_ptr(a1, v27);
            ASN1_template_free(v26, v16);
            ++v41;
            v25 += 20;
            if ( *(uint32_t *)(v43 + 12) <= v41 )
            {
              v9 = v43;
              goto LABEL_103;
            }
          }
          v9 = v43;
          ERR_put_error(13, 120, 121, &unk_1B15112, 0);
          goto LABEL_98;
        }
LABEL_103:
        if ( asn1_enc_save((int)(uintptr_t)(a1), *a2, v52 - *a2, v9) != 0 )
          goto LABEL_23;
        goto LABEL_25;
      case 2:
        if ( v44 != nullptr )
        {
          v34 = a7;
          v15 = v44(4, a1, a4, 0);
          v10 = v34;
          if ( v15 == 0 )
            goto LABEL_25;
        }
        if ( *a1 == 0 )
        {
          v38 = v10;
          v33 = ASN1_item_ex_new(a1, v9);
          v10 = v38;
          if ( v33 == 0 )
            goto LABEL_70;
        }
        v16 = *(uint32_t **)(v9 + 8);
        v40 = 0;
        v52 = *a2;
        v17 = *(uint32_t *)(v9 + 12);
        if ( v17 <= 0 )
          goto LABEL_21;
        while ( 1 )
        {
          v35 = v10;
          asn1_get_field_ptr(a1, v16);
          v18 = sub_1989590(a3, v16, 1, a8);
          v10 = v35;
          if ( v18 != -1 )
            break;
          ++v40;
          v16 += 5;
          v17 = *(uint32_t *)(v9 + 12);
          if ( v17 <= v40 )
            goto LABEL_21;
        }
        if ( v18 <= 0 )
        {
          ERR_put_error(13, 120, 58, &unk_1B15112, 0);
          ASN1_item_ex_free(a1, v9);
          if ( v16 == nullptr )
            goto LABEL_64;
LABEL_95:
          ERR_add_error_data(4, "Field=", v16[3], ", Type=", *(uint32_t *)(v9 + 24));
          return 0;
        }
        v17 = *(uint32_t *)(v9 + 12);
LABEL_21:
        if ( v17 == v40 )
        {
          if ( v10 == 0 )
          {
            ERR_put_error(13, 120, 143, &unk_1B15112, 0);
            goto LABEL_63;
          }
          ASN1_item_ex_free(a1, v9);
          return -1;
        }
        else
        {
          asn1_set_choice_selector(a1, v40, v9);
LABEL_23:
          *a2 = v52;
          v8 = 1;
          if ( v44 != nullptr )
          {
            v19 = v44(5, a1, v9, 0);
            v8 = 1;
            if ( v19 == 0 )
            {
LABEL_25:
              ERR_put_error(13, 120, 100, &unk_1B15112, 0);
LABEL_63:
              ASN1_item_ex_free(a1, v9);
LABEL_64:
              ERR_add_error_data(2, "Type=", *(uint32_t *)(v9 + 24));
              return 0;
            }
          }
        }
        return v8;
      case 3:
        if ( a7 != 0 )
        {
          v52 = *a2;
          v13 = a5;
          if ( a5 == -1 )
            v13 = *(uint32_t *)(a4 + 4);
          v14 = sub_19875E0(nullptr, nullptr, nullptr, nullptr, nullptr, &v52, a3, v13, a6, 1, (int)(uintptr_t)(a8));
          if ( v14 == 0 )
            goto LABEL_70;
          if ( v14 == -1 )
            return -1;
        }
        if ( a5 == -1 )
        {
          v31 = (*(int (**)(int *, char **, int))(v11 + 8))(a1, a2, a3);
        }
        else
        {
          v29 = *a2;
          v30 = **a2;
          if ( v52 == nullptr )
          {
LABEL_70:
            ERR_put_error(13, 120, 58, &unk_1B15112, 0);
            goto LABEL_63;
          }
          *v29 = *(uint8_t *)(v9 + 4) | *v52 & 0x20;
          v39 = v29;
          v37 = v30;
          v31 = (*(int (**)(int *, char **, int))(v11 + 8))(a1, a2, a3);
          *v39 = v37;
        }
        v8 = 1;
        if ( v31 == 0 )
          goto LABEL_70;
        break;
      case 4:
        return (*(int (**)(int *, char **, int, int, int, int, uint32_t, uint8_t *))(v11 + 16))(
                 a1,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8);
      case 5:
        v52 = *a2;
        v36 = a7;
        if ( sub_19875E0(nullptr, v53, &v49, nullptr, nullptr, &v52, a3, -1, 0, 1, (int)(uintptr_t)(a8)) == 0 )
          goto LABEL_70;
        if ( v49 != 0 )
        {
          v8 = -1;
          if ( v36 != 0 )
            return v8;
          ERR_put_error(13, 120, 139, &unk_1B15112, 0);
        }
        else
        {
          if ( (ASN1_tag2bit(v53[0]) & *(uint32_t *)(v9 + 4)) != 0 )
            return sub_1988000(a1, a2, a3, v9, v53[0], 0, 0, a8);
          v8 = -1;
          if ( v36 != 0 )
            return v8;
          ERR_put_error(13, 120, 140, &unk_1B15112, 0);
        }
        goto LABEL_63;
      default:
        return v8;
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: ASN1_template_d2i  (binary VA: 0x1989820)
// Original: ASN1_template_d2i
// ----------------------------------------------------------------------------
int ASN1_template_d2i(int *a1, char **a2, int a3, int *a4)
{
  uint8_t v5[36];

  v5[0] = 0;
  return sub_1989590(a1, a2, a3, a4, 0, v5);
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_d2i  (binary VA: 0x1989860)
// Original: ASN1_item_d2i
// ----------------------------------------------------------------------------
int ASN1_item_d2i(int *a1, char **a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[36];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);

  v4 = a1;
  v8 = 0;
  v9[0] = 0;
  if ( a1 == nullptr )
    v4 = &v8;
  v5 = ASN1_item_ex_d2i(v4, a2, a3, a4, -1, 0, 0, v9);
  v6 = 0;
  if ( v5 > 0 )
    return *v4;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_ex_i2d  (binary VA: 0x1989cf0)
// Original: ASN1_item_ex_i2d
// ----------------------------------------------------------------------------
int ASN1_item_ex_i2d(int *a1, void **a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  uint8_t *v10;
  int choice_selector;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int i;
  int v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef void (*_g4_t_v27)(int, int *, int, uint32_t);
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v25)) > _g4_s2 ? (40u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v26)) > _g4_s3 ? (40u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v27)) > _g4_s4 ? (44u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v28)) > _g4_s5 ? (52u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v29)) > _g4_s6 ? (56u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v30)) > _g4_s7 ? (60u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v31)) > _g4_s8 ? (76u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);

  v5 = a3;
  v6 = a1;
  v7 = *(uint32_t *)(a3 + 16);
  if ( *(uint8_t *)a3 == 0 || (v8 = 0, *a1 != 0) )
  {
    v27 = nullptr;
    if ( v7 != 0 )
      v27 = *(void (**)(int, int *, int, uint32_t))(v7 + 16);
    v8 = 0;
    switch ( *(uint8_t *)a3 )
    {
      case 0:
        v13 = *(uint32_t *)(a3 + 8);
        v24 = a5;
        v23 = a4;
        if ( v13 == 0 )
          return sub_1989B70(a1, a2, a3, v23, v24);
        return sub_198A1C0(v13, a4, a5);
      case 1:
        v29 = 1;
        goto LABEL_21;
      case 2:
        if ( v27 == nullptr || (v8 = 0, ((int (*)(int, int *, int, uint32_t))v27)(6, a1, a3, 0) != 0) )
        {
          choice_selector = asn1_get_choice_selector(a1, a3);
          if ( choice_selector >= 0 && choice_selector < *(uint32_t *)(a3 + 12) )
          {
            v19 = *(uint32_t *)(a3 + 8) + 20 * choice_selector;
            asn1_get_field_ptr(a1, v19);
            return sub_198A1C0(v19, -1, a5);
          }
          else
          {
            v8 = 0;
            if ( v27 != nullptr )
              v27(7, a1, a3, 0);
          }
        }
        return v8;
      case 3:
        if ( a2 == nullptr )
          return (*(int (**)(int, uint32_t))(v7 + 12))(*a1, 0);
        v10 = (uint8_t *)(*a2);
        v8 = (*(int (**)(int, void **))(v7 + 12))(*a1, a2);
        if ( a4 != -1 )
          *v10 = a4 | a5 | *v10 & 0x20;
        return v8;
      case 4:
        return (*(int (**)(int *, void **, int, int, int))(v7 + 20))(a1, a2, a3, a4, a5);
      case 5:
        v23 = -1;
        v24 = a5;
        return sub_1989B70(a1, a2, a3, v23, v24);
      case 6:
        v29 = 2 - ((a5 & 0x800) == 0);
LABEL_21:
        v12 = asn1_enc_restore(v31, a2, a1, a3);
        v8 = v12;
        if ( v12 < 0 )
        {
          v8 = 0;
        }
        else
        {
          if ( v12 != 0 )
            return v31[0];
          v31[0] = 0;
          if ( a4 == -1 )
          {
            a5 &= 0xFFFFFF3F;
            a4 = 16;
          }
          if ( v27 == nullptr || ((int (*)(int, int *, int, uint32_t))v27)(6, a1, a3, 0) != 0 )
          {
            v25 = 0;
            if ( *(int *)(a3 + 12) <= 0 )
            {
              v16 = v31[0];
            }
            else
            {
              v30 = v8;
              v14 = *(uint32_t *)(a3 + 8);
              do
              {
                v17 = (int)(uintptr_t)(asn1_do_adb(a1, v14, 1));
                v18 = v17;
                if ( v17 == 0 )
                  return v30;
                asn1_get_field_ptr(a1, v17);
                v14 += 20;
                v15 = sub_198A1C0(v18, -1, a5);
                v16 = v31[0] + v15;
                ++v25;
                v31[0] = v16;
              }
              while ( *(uint32_t *)(a3 + 12) > v25 );
              v8 = v30;
              v5 = a3;
            }
            v28 = ASN1_object_size(v29, v16, a4);
            if ( a2 == nullptr )
              goto LABEL_55;
            ASN1_put_object((uint8_t **)a2, v29, v31[0], a4, a5);
            if ( *(int *)(v5 + 12) > 0 )
            {
              v30 = v8;
              v26 = 0;
              v20 = *(uint32_t *)(v5 + 8);
              for ( i = (int)(uintptr_t)(asn1_do_adb(a1, v20, 1)); ; i = (int)(uintptr_t)(asn1_do_adb(a1, v20, 1)) )
              {
                v22 = i;
                if ( i == 0 )
                  return v30;
                v20 += 20;
                asn1_get_field_ptr(a1, i);
                sub_198A1C0(v22, -1, a5);
                if ( *(uint32_t *)(v5 + 12) <= ++v26 )
                  break;
              }
              v8 = v30;
              v6 = a1;
            }
            if ( v29 == 2 )
              ASN1_put_eoc((uint8_t **)a2);
            if ( v27 != nullptr )
            {
              if ( ((int (*)(int, int *, int, uint32_t))v27)(7, v6, v5, 0) != 0 )
                v8 = v28;
            }
            else
            {
LABEL_55:
              v8 = v28;
            }
          }
        }
        break;
      default:
        return v8;
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: ASN1_template_i2d  (binary VA: 0x198a7b0)
// Original: ASN1_template_i2d
// ----------------------------------------------------------------------------
int ASN1_template_i2d(int *a1, void **a2, int *a3)
{
  return sub_198A1C0(a1, a2, a3, -1, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_i2d  (binary VA: 0x198a8f0)
// Original: ASN1_item_i2d
// ----------------------------------------------------------------------------
int ASN1_item_i2d(int a1, void **a2, int a3)
{
  return sub_198A7E0(a1, a2, a3, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_ndef_i2d  (binary VA: 0x198a910)
// Original: ASN1_item_ndef_i2d
// ----------------------------------------------------------------------------
int ASN1_item_ndef_i2d(int a1, void **a2, int a3)
{
  return sub_198A7E0(a1, a2, a3, 2048);
}

// ----------------------------------------------------------------------------
// Function: ASN1_primitive_free  (binary VA: 0x198a930)
// Original: ASN1_primitive_free
// ----------------------------------------------------------------------------
void ** ASN1_primitive_free(void **a1, int a2)
{
  void **result;
  void **v3;
  int v4;
  int (*v5)(void **, int);
  int v6;

  result = (void **)a2;
  v3 = a1;
  if ( a2 != 0 )
  {
    v4 = *(uint32_t *)(a2 + 16);
    if ( v4 != 0 )
    {
      v5 = *(int (**)(void **, int))(v4 + 12);
      if ( v5 != nullptr )
        return (void **)v5(a1, a2);
    }
    if ( *(uint8_t *)a2 == 5 )
    {
      result = (void **)*a1;
      if ( *a1 == nullptr )
        return result;
      goto LABEL_15;
    }
    v6 = *(uint32_t *)(a2 + 4);
    if ( v6 == 1 )
    {
LABEL_19:
      result = *(void ***)(a2 + 20);
      *v3 = result;
      return result;
    }
    if ( *a1 == nullptr )
      return result;
LABEL_9:
    if ( v6 != 1 )
    {
      if ( v6 <= 1 )
      {
        if ( v6 == -4 )
        {
          ASN1_primitive_free(v3, 0);
          result = (void **)CRYPTO_free(*v3);
          *v3 = nullptr;
          return result;
        }
      }
      else
      {
        if ( v6 == 5 )
        {
LABEL_16:
          *v3 = nullptr;
          return result;
        }
        if ( v6 == 6 )
        {
          result = (ASN1_OBJECT_free(*v3), (void **)0);
          *v3 = nullptr;
          return result;
        }
      }
      result = (void **)*v3;
LABEL_15:
      result = (void **)ASN1_STRING_free(result);
      *v3 = nullptr;
      goto LABEL_16;
    }
    if ( a2 == 0 )
    {
      *v3 = (void *)-1;
      return result;
    }
    goto LABEL_19;
  }
  v6 = *(uint32_t *)*a1;
  v3 = (void **)((char *)*a1 + 4);
  if ( *v3 != nullptr )
    goto LABEL_9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_template_free  (binary VA: 0x198acb0)
// Original: ASN1_template_free
// ----------------------------------------------------------------------------
int ASN1_template_free(void **a1, int a2)
{
  int v2;
  void *v3;
  uint32_t v5[8];

  if ( (*(uint32_t *)a2 & 6) == 0 )
    return sub_198AA60((int)(uintptr_t)(a1), *(uint8_t **)(a2 + 16), *(uint32_t *)a2 & 0x400);
  v2 = 0;
  v3 = *a1;
  while ( v2 < sk_num(v3) )
  {
    v5[0] = sk_value(v3, v2++);
    sub_198AA60((int)(uintptr_t)(v5), *(uint8_t **)(a2 + 16), 0);
  }
  sk_free(v3);
  *a1 = nullptr;
  return (int)(uintptr_t)(a1);
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_ex_free  (binary VA: 0x198ad50)
// Original: ASN1_item_ex_free
// ----------------------------------------------------------------------------
int ASN1_item_ex_free(int a1, uint8_t *a2)
{
  return sub_198AA60(a1, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_free  (binary VA: 0x198ad70)
// Original: ASN1_item_free
// ----------------------------------------------------------------------------
int ASN1_item_free(char a1, uint8_t *a2)
{
  return sub_198AA60((int)(uintptr_t)(&a1), a2, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_primitive_new  (binary VA: 0x198ad90)
// Original: ASN1_primitive_new
// ----------------------------------------------------------------------------
int ASN1_primitive_new(uint32_t *a1, int a2)
{
  int v2;
  int (*v3)(uint32_t *, int);
  int result;
  int v5;
  uint32_t *v6;
  uint32_t *v7;

  if ( a2 != 0 )
  {
    v2 = *(uint32_t *)(a2 + 16);
    if ( v2 != 0 )
    {
      v3 = *(int (**)(uint32_t *, int))(v2 + 8);
      if ( v3 != nullptr )
        return v3(a1, a2);
    }
    if ( *(uint8_t *)a2 != 5 )
    {
      v5 = *(uint32_t *)(a2 + 4);
      switch ( v5 )
      {
        case 1:
          *a1 = *(uint32_t *)(a2 + 20);
          return 1;
        case 5:
          *a1 = 1;
          return 1;
        case 6:
          *a1 = (uint32_t)(uintptr_t)(OBJ_nid2obj(0));
          return 1;
        case -4:
          v7 = (uint32_t *)(CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0));
          result = 0;
          if ( v7 != nullptr )
          {
            v7[1] = 0;
            *v7 = -1;
            *a1 = (uint32_t)(uintptr_t)(v7);
            return v7 != nullptr;
          }
          return result;
        default:
LABEL_13:
          v6 = ASN1_STRING_type_new(v5);
          if ( v6 != nullptr && *(uint8_t *)a2 == 5 )
            v6[3] |= 0x40u;
          *a1 = (uint32_t)(uintptr_t)(v6);
          v7 = v6;
          return v7 != nullptr;
      }
    }
  }
  v5 = -1;
  goto LABEL_13;
}

// ----------------------------------------------------------------------------
// Function: ASN1_template_new  (binary VA: 0x198b240)
// Original: ASN1_template_new
// ----------------------------------------------------------------------------
int ASN1_template_new(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  void (*v8)(int *, int);
  int v9;
  uint32_t *v10;

  v3 = a2[4];
  v4 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    if ( (v4 & 0x306) != 0 )
      goto LABEL_13;
    if ( *(uint8_t *)v3 > 6u )
      return 1;
    while ( 1 )
    {
      switch ( *(uint8_t *)v3 )
      {
        case 0:
          v10 = *(uint32_t **)(v3 + 8);
          if ( v10 == nullptr )
          {
            v7 = *(uint32_t *)(v3 + 16);
            if ( v7 != 0 )
            {
LABEL_12:
              v8 = *(void (**)(int *, int))(v7 + 16);
              if ( v8 != nullptr )
              {
LABEL_17:
                v8(a1, v3);
                return 1;
              }
            }
            else if ( *(uint32_t *)(v3 + 4) == 1 )
            {
              *a1 = *(uint32_t *)(v3 + 20);
              return 1;
            }
LABEL_13:
            *a1 = 0;
            return 1;
          }
          if ( (*v10 & 0x306) != 0 )
            goto LABEL_13;
          v3 = v10[4];
          if ( *(uint8_t *)v3 > 6u )
            return 1;
          break;
        case 1:
        case 2:
        case 3:
        case 6:
          goto LABEL_13;
        case 4:
          v9 = *(uint32_t *)(v3 + 16);
          if ( v9 != 0 )
          {
            v8 = *(void (**)(int *, int))(v9 + 12);
            if ( v8 != nullptr )
              goto LABEL_17;
          }
          goto LABEL_13;
        case 5:
          v7 = *(uint32_t *)(v3 + 16);
          if ( v7 != 0 )
            goto LABEL_12;
          goto LABEL_13;
        default:
          abort();
      }
    }
  }
  if ( (v4 & 0x300) != 0 )
    goto LABEL_13;
  if ( (v4 & 6) == 0 )
    return sub_198AEB0(a1, v3, v2, *a2 & 0x400);
  v6 = (int)(uintptr_t)(sk_new_null(v2, v3));
  if ( v6 != 0 )
  {
    *a1 = v6;
    return 1;
  }
  else
  {
    ERR_put_error(13, 133, 65, &unk_1B15112, 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_ex_new  (binary VA: 0x198b3c0)
// Original: ASN1_item_ex_new
// ----------------------------------------------------------------------------
int ASN1_item_ex_new(int *a1, int a2)
{
  int v2;

  return sub_198AEB0(a1, a2, v2, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_new  (binary VA: 0x198b3e0)
// Original: ASN1_item_new
// ----------------------------------------------------------------------------
int ASN1_item_new(int a1)
{
  int v1;
  int v2;
  int v4[4];

  v4[0] = 0;
  v1 = ASN1_item_ex_new(v4, a1);
  v2 = 0;
  if ( v1 > 0 )
    return v4[0];
  return v2;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_INTEGER  (binary VA: 0x198b420)
// Original: d2i_ASN1_INTEGER
// ----------------------------------------------------------------------------
int d2i_ASN1_INTEGER(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_INTEGER_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_INTEGER  (binary VA: 0x198b460)
// Original: i2d_ASN1_INTEGER
// ----------------------------------------------------------------------------
int i2d_ASN1_INTEGER(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_INTEGER_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_new  (binary VA: 0x198b4a0)
// Original: ASN1_INTEGER_new
// ----------------------------------------------------------------------------
int ASN1_INTEGER_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_INTEGER_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_INTEGER_free  (binary VA: 0x198b4d0)
// Original: ASN1_INTEGER_free
// ----------------------------------------------------------------------------
int ASN1_INTEGER_free(char a1)
{
  return ASN1_item_free(a1, ASN1_INTEGER_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_ENUMERATED  (binary VA: 0x198b500)
// Original: d2i_ASN1_ENUMERATED
// ----------------------------------------------------------------------------
int d2i_ASN1_ENUMERATED(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_ENUMERATED_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_ENUMERATED  (binary VA: 0x198b540)
// Original: i2d_ASN1_ENUMERATED
// ----------------------------------------------------------------------------
int i2d_ASN1_ENUMERATED(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_ENUMERATED_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_ENUMERATED_new  (binary VA: 0x198b580)
// Original: ASN1_ENUMERATED_new
// ----------------------------------------------------------------------------
int ASN1_ENUMERATED_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_ENUMERATED_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_ENUMERATED_free  (binary VA: 0x198b5b0)
// Original: ASN1_ENUMERATED_free
// ----------------------------------------------------------------------------
int ASN1_ENUMERATED_free(char a1)
{
  return ASN1_item_free(a1, ASN1_ENUMERATED_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_BIT_STRING  (binary VA: 0x198b5e0)
// Original: d2i_ASN1_BIT_STRING
// ----------------------------------------------------------------------------
int d2i_ASN1_BIT_STRING(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_BIT_STRING_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_BIT_STRING  (binary VA: 0x198b620)
// Original: i2d_ASN1_BIT_STRING
// ----------------------------------------------------------------------------
int i2d_ASN1_BIT_STRING(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_BIT_STRING_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_BIT_STRING_new  (binary VA: 0x198b660)
// Original: ASN1_BIT_STRING_new
// ----------------------------------------------------------------------------
int ASN1_BIT_STRING_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_BIT_STRING_it));
}


