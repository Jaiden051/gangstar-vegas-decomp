#include "Core/Utils/DecompTypes.h"
#include "openssl_internal_2.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_1A4E760  (binary VA: 0x1a4e760)
// Original: sub_1A4E760
// ----------------------------------------------------------------------------
bool sub_1A4E760(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return Curl_raw_equal(a1, a2) != 0;
  else
    return a2 == 0 && a1 == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4E9D0  (binary VA: 0x1a4e9d0)
// Original: sub_1A4E9D0
// ----------------------------------------------------------------------------
int sub_1A4E9D0(uint32_t *a1)
{
  void *v1;
  int result;

  v1 = (void *)a1[1];
  result = 1;
  if ( v1 != nullptr )
  {
    Curl_ossl_session_free(v1);
    a1[1] = 0;
    a1[3] = 0;
    Curl_free_ssl_config(a1 + 5);
    Curl_safefree(*a1);
    *a1 = 0;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F1B0  (binary VA: 0x1a4f1b0)
// Original: sub_1A4F1B0
// ----------------------------------------------------------------------------
bool sub_1A4F1B0(int a1, void *a2, unsigned int a3)
{
  void *v5;
  uint8_t *v6;
  bool result;
  size_t n;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v5 = BIO_s_mem();
  v6 = BIO_new((int)(uintptr_t)(v5));
  result = true;
  if ( v6 != nullptr )
  {
    v9 = X509_NAME_print_ex((int)(uintptr_t)(v6), a1, 0, 0x30000u);
    BIO_ctrl(v6, 115, 0, (int)(uintptr_t)(v10));
    n = *(uint32_t *)v10[0];
    if ( *(uint32_t *)v10[0] >= a3 )
      n = a3 - 1;
    memcpy(a2, *(const void **)(v10[0] + 4), n);
    *((uint8_t *)a2 + n) = 0;
    BIO_free(v6);
    return v9 == 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F290  (binary VA: 0x1a4f290)
// Original: sub_1A4F290
// ----------------------------------------------------------------------------
int sub_1A4F290(int a1, int a2)
{
  int current_cert;
  int subject_name;
  uint8_t v5[268];

  current_cert = X509_STORE_CTX_get_current_cert(a2);
  subject_name = X509_get_subject_name(current_cert);
  sub_1A4F1B0(subject_name, v5, 0x100u);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F2E0  (binary VA: 0x1a4f2e0)
// Original: sub_1A4F2E0
// ----------------------------------------------------------------------------
char sub_1A4F2E0(int *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int error;
  int current_cipher;
  const char *name;
  char v11;
  const char *v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14[268];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v3 = *a1;
  v4 = (int)(uintptr_t)(&a1[6 * a2 + 82]);
  ERR_clear_error();
  v5 = SSL_connect(*(uint32_t *)(v4 + 12));
  if ( v5 == 1 )
  {
    *(uint32_t *)(v4 + 20) = 4;
    current_cipher = SSL_get_current_cipher(*(uint32_t *)(v4 + 12));
    name = SSL_CIPHER_get_name(current_cipher);
    Curl_infof(v3, "SSL connection using %s\n", name);
    return 0;
  }
  else
  {
    LOBYTE(v6) = SSL_get_error(*(uint32_t *)(v4 + 12), v5);
    if ( v6 == 2 )
    {
      *(uint32_t *)(v4 + 20) = 2;
      return 0;
    }
    else if ( v6 == 3 )
    {
      *(uint32_t *)(v4 + 20) = 3;
      return 0;
    }
    else
    {
      *(uint32_t *)(v4 + 20) = 1;
      error = ERR_get_error();
      if ( error == 336060550 || error == 336134278 )
      {
        ERR_error_string_n(error, v14, 0x100u);
        v11 = 60;
        v12 = "SSL certificate problem, verify that the CA cert is OK. Details:\n";
      }
      else
      {
        if ( error == 0 )
        {
          Curl_failf(v3, "Unknown SSL protocol error in connection to %s:%ld ", a1[32], a1[38]);
          return 35;
        }
        ERR_error_string_n(error, v14, 0x100u);
        v11 = 35;
        v12 = (const char *)&unk_1B15112;
      }
      v13 = v11;
      Curl_failf(v3, "%s%s", v12, v14);
      return v13;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F4A0  (binary VA: 0x1a4f4a0)
// Original: sub_1A4F4A0
// ----------------------------------------------------------------------------
int sub_1A4F4A0(int a1, int a2, const char *s, void *src, size_t n)
{
  size_t v5;
  uint8_t *v6;
  int v7;
  int *v8;
  int v9;
  int v11;

  v5 = strlen(s);
  v6 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v5 + n + 2);
  v7 = 27;
  if ( v6 != nullptr )
  {
    curl_msnprintf((int)(uintptr_t)(v6), v5 + n + 2, (int)(uintptr_t)("%s:"), s);
    memcpy(&v6[v5 + 1], src, n);
    v6[v5 + 1 + n] = 0;
    v8 = curl_slist_append(*(uint32_t *)(*(uint32_t *)(a1 + 34456) + 4 * a2), (int)(uintptr_t)(v6));
    if ( v8 != nullptr )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 34456) + 4 * a2) = (uint32_t)(uintptr_t)(v8);
      v9 = 0;
    }
    else
    {
      curl_slist_free_all(*(uint32_t **)(*(uint32_t *)(a1 + 34456) + 4 * a2));
      v9 = 27;
    }
    v11 = v9;
    ((void (*)(uint8_t *))Curl_cfree)(v6);
    return v11;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F5D0  (binary VA: 0x1a4f5d0)
// Original: sub_1A4F5D0
// ----------------------------------------------------------------------------
int sub_1A4F5D0(int a1, int a2, const char *a3, char *s)
{
  size_t v6;

  v6 = strlen(s);
  return sub_1A4F4A0(a1, a2, a3, s, v6);
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F630  (binary VA: 0x1a4f630)
// Original: sub_1A4F630
// ----------------------------------------------------------------------------
char * sub_1A4F630(int a1, int a2, int a3, int a4, uint8_t *a5, int a6)
{
  size_t v6;
  char *result;
  char *v9;
  typedef int _g4_t_v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char _g4_t_v15[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v12)) > _g4_s2 ? (36u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v15)) > _g4_s3 ? (48u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);

  v6 = 3 * a6 + 1;
  result = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v6);
  v12 = result;
  if ( result != nullptr )
  {
    curl_msnprintf((int)(uintptr_t)(v15), 32, (int)(uintptr_t)("%s(%s)"), a3, a4);
    if ( a6 > 0 )
    {
      v9 = v12;
      do
      {
        v11 = (char *)v6;
        v6 -= 3;
        v10 = (int)(uintptr_t)(v9);
        v9 += 3;
        curl_msnprintf(v10, (int)(uintptr_t)(v11), (int)(uintptr_t)("%02x:"), *a5++);
      }
      while ( v6 != 1 );
    }
    Curl_infof(a1, "   %s: %s\n", v15, v12);
    sub_1A4F5D0(a1, a2, v15, v12);
    return (char *)((int (*)(char *))Curl_cfree)(v12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F740  (binary VA: 0x1a4f740)
// Original: sub_1A4F740
// ----------------------------------------------------------------------------
int sub_1A4F740(int a1, int a2, int *a3)
{
  int v3;
  void *v4;
  int object;
  bool v6;
  const char *v7;
  unsigned int *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  const char *v12;
  char v13;
  int v14;
  typedef int _g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  typedef int _g4_t_i;
  typedef unsigned int *_g4_t_v21;
  typedef char _g4_t_v22[128];
  typedef char _g4_t_v23[540];
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_i)) > _g4_s2 ? (12u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v21)) > _g4_s3 ? (44u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (176u + sizeof(_g4_t_v23)) > _g4_s5 ? (176u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 176u);

  if ( sk_num((int)(uintptr_t)(a3)) <= 0 )
    return 1;
  for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
  {
    v3 = sk_value(a3, i);
    v4 = BIO_s_mem();
    v17 = BIO_new((int)(uintptr_t)(v4));
    if ( v17 == nullptr )
      return 1;
    object = X509_EXTENSION_get_object(v3);
    i2t_ASN1_OBJECT(v22, 128, object);
    v6 = !X509_EXTENSION_get_critical(v3);
    v7 = (const char *)&unk_1B15112;
    if ( !v6 )
      v7 = "(critical)";
    Curl_infof(a1, "%s: %s\n", v22, v7);
    if ( X509V3_EXT_print(v17, v3, 0, 0) == 0 )
      ASN1_STRING_print(v17, *(int **)(v3 + 8));
    BIO_ctrl(v17, 115, 0, (int)(uintptr_t)(&v21));
    v8 = v21;
    v9 = *v21;
    if ( *v21 != 0 )
    {
      v16 = (int)(uintptr_t)(v23);
      v10 = 0;
      while ( 1 )
      {
        v11 = v8[1];
        v12 = (const char *)&unk_1B15112;
        v13 = *(uint8_t *)(v11 + v10);
        if ( v13 == 10 )
        {
          ++v10;
          v12 = ", ";
          v13 = *(uint8_t *)(v11 + v10);
        }
        if ( v13 == 32 )
          break;
LABEL_19:
        if ( v10 >= v9 )
        {
LABEL_17:
          ++v10;
          v9 = *v8;
          if ( *v8 <= v10 )
            goto LABEL_18;
        }
        else
        {
          ++v10;
          v14 = curl_msnprintf(v16, (int)(uintptr_t)(&v23[-v16 + 512]), (int)(uintptr_t)("%s%c"), v12, v13);
          v8 = v21;
          v16 += v14;
          v9 = *v21;
          if ( *v21 <= v10 )
            goto LABEL_18;
        }
      }
      while ( v10 < v9 )
      {
        ++v10;
        v13 = *(uint8_t *)(v11 + v10);
        if ( v13 != 32 )
          goto LABEL_19;
      }
      goto LABEL_17;
    }
LABEL_18:
    Curl_infof(a1, "  %s\n", v23);
    sub_1A4F5D0(a1, a2, v22, v23);
    BIO_free(v17);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4F9D0  (binary VA: 0x1a4f9d0)
// Original: sub_1A4F9D0
// ----------------------------------------------------------------------------
bool sub_1A4F9D0(char *a1, char *a2, int a3)
{
  char v4;
  char *v5;
  char v6; // bp
  char v7;
  bool result;

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == 0 )
      return *a1 == 0;
    v5 = a2 + 1;
    if ( v4 == 42 )
      break;
    v6 = Curl_raw_toupper(v4);
    v7 = *a1++;
    if ( v6 != (uint8_t)Curl_raw_toupper(v7) )
      return false;
    a2 = v5;
  }
  result = true;
  if ( a2[1] != 0 )
  {
    while ( *a1 != 0 )
    {
      if ( sub_1A4F9D0(a3, v5) == 1 )
        return true;
      ++a1;
    }
    return false;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4FA70  (binary VA: 0x1a4fa70)
// Original: sub_1A4FA70
// ----------------------------------------------------------------------------
int sub_1A4FA70(int a1, char *a2, int a3, int a4)
{
  int result;
  char v6; // di
  int v7;
  int v8;
  int v9;
  char v10;
  void **v11;
  int v12;
  char v13;
  int v14;
  int v15;

  result = 1;
  if ( a1 > 9 )
  {
    v6 = a2[a1 - 1];
    LOBYTE(result) = 0;
    do
    {
      if ( (uint8_t)(a2[result] - 48) > 9u )
        return 2;
      ++result;
    }
    while ( result != 10 );
    v7 = a2[1] + 10 * *a2 - 528;
    if ( v7 <= 49 )
      v7 += 100;
    v8 = a2[3] + 10 * a2[2] - 528;
    result = 3;
    if ( (unsigned int)(a2[3] + 10 * a2[2] - 529) <= 0xB )
    {
      v12 = 0;
      v14 = a2[5] + 10 * a2[4] - 528;
      v15 = a2[7] + 10 * a2[6] - 528;
      v9 = a2[9] + 10 * a2[8] - 528;
      v13 = a2[10];
      if ( (uint8_t)(v13 - 48) <= 9u )
      {
        v10 = a2[11];
        if ( v10 > 47 && v10 <= 57 )
          v12 = v10 + 10 * v13 - 528;
      }
      v11 = (void **)(&off_1B838CA);
      if ( v6 != 90 )
        v11 = (void **)&unk_1B15112;
      curl_msnprintf(a3, a4, (int)(uintptr_t)("%04d-%02d-%02d %02d:%02d:%02d %s"), v7 + 1900, v8, v14, v15, v9, v12, v11);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4FC10  (binary VA: 0x1a4fc10)
// Original: sub_1A4FC10
// ----------------------------------------------------------------------------
int sub_1A4FC10(uint8_t *a1)
{
  int v2;

  v2 = 1;
  if ( a1 != nullptr && *a1 != 0 && Curl_raw_equal(a1, "PEM") == 0 )
  {
    LOWORD(v2) = 2;
    if ( Curl_raw_equal(a1, "DER") == 0 )
    {
      LOWORD(v2) = 42;
      if ( Curl_raw_equal(a1, "ENG") == 0 )
        return Curl_raw_equal(a1, "P12") == 0 ? -1 : 0x2B;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4FCC0  (binary VA: 0x1a4fcc0)
// Original: sub_1A4FCC0
// ----------------------------------------------------------------------------
size_t sub_1A4FCC0(char *dest, int a2, int a3, char *s)
{
  signed int v4;
  int v5;

  if ( a3 != 0 )
  {
    curl_mfprintf(((int)(uintptr_t)stderr), "%s\n", dest);
    return 0;
  }
  else
  {
    v4 = strlen(s);
    v5 = 0;
    if ( v4 < a2 )
    {
      strcpy(dest, s);
      return strlen(dest);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4FD50  (binary VA: 0x1a4fd50)
// Original: sub_1A4FD50
// ----------------------------------------------------------------------------
int sub_1A4FD50(int a1, int a2, int a3, char *a4, size_t a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  const char *v10;
  size_t v11;
  const char *v13;
  typedef char _g4_t_v14;
  typedef uint8_t _g4_t_v16[1036];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (11u + sizeof(_g4_t_v14)) > _g4_s0 ? (11u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 11u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  v6 = 50;
  v7 = a2 >> 8;
  v8 = *a6;
  if ( v7 != 0 && (LOBYTE(v6) = 63, v7 == 3) )
  {
    if ( a3 != 0 )
    {
      v13 = "TLS change cipher, ";
      if ( a3 != 20 )
      {
        v13 = "TLS alert, ";
        if ( a3 != 21 )
        {
          v13 = "TLS handshake, ";
          if ( a3 != 22 )
          {
            v13 = "TLS app data, ";
            if ( a3 != 23 )
              v13 = "TLS Unknown, ";
          }
        }
      }
      v6 = 51;
      v14 = *a4;
      v9 = *a4;
    }
    else
    {
      v6 = 51;
      v14 = *a4;
      v13 = (const char *)&unk_1B15112;
      v9 = *a4;
    }
    switch ( v14 )
    {
      case 0:
        v10 = "Hello request";
        break;
      case 1:
        v10 = "Client hello";
        break;
      case 2:
        v10 = "Server hello";
        break;
      case 11:
        v10 = "CERT";
        break;
      case 12:
        v10 = "Server key exchange";
        break;
      case 13:
        v10 = "Request CERT";
        break;
      case 14:
        v10 = "Server finished";
        break;
      case 15:
        v10 = "CERT verify";
        break;
      case 16:
        v10 = "Client key exchange";
        break;
      case 20:
        v10 = "Finished";
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
    v9 = *a4;
    if ( v7 != 0 )
    {
      v13 = (const char *)&unk_1B15112;
LABEL_5:
      v10 = "Unknown";
    }
    else
    {
      switch ( *a4 )
      {
        case 0:
          v13 = (const char *)&unk_1B15112;
          v10 = "Error";
          break;
        case 1:
          v13 = (const char *)&unk_1B15112;
          v10 = "Client hello";
          break;
        case 2:
          v13 = (const char *)&unk_1B15112;
          v10 = "Client key";
          break;
        case 3:
          v13 = (const char *)&unk_1B15112;
          v10 = "Client finished";
          break;
        case 4:
          v13 = (const char *)&unk_1B15112;
          v10 = "Server hello";
          break;
        case 5:
          v13 = (const char *)&unk_1B15112;
          v10 = "Server verify";
          break;
        case 6:
          v13 = (const char *)&unk_1B15112;
          v10 = "Server finished";
          break;
        case 7:
          v13 = (const char *)&unk_1B15112;
          v10 = "Request CERT";
          break;
        case 8:
          v13 = (const char *)&unk_1B15112;
          v10 = "Client CERT";
          break;
        default:
          v13 = (const char *)&unk_1B15112;
          goto LABEL_5;
      }
    }
  }
  v11 = curl_msnprintf((int)(uintptr_t)(v16), 1024, (int)(uintptr_t)("SSLv%c, %s%s (%d):\n"), v6, v13, v10, v9);
  Curl_debug(v8, 0, v16, v11, 0);
  return Curl_debug(v8, (a1 == 1) + 5, a4, a5, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1A50070  (binary VA: 0x1a50070)
// Original: sub_1A50070
// ----------------------------------------------------------------------------
unsigned int sub_1A50070(unsigned int a1, void *a2, size_t a3, char *a4, size_t a5, int a6, int *a7)
{
  unsigned int result;

  result = a1;
  if ( a7 != nullptr && *a7 != 0 && a1 <= 1 && *(uint32_t *)(*a7 + 368) != 0 )
    return sub_1A4FD50(a1, (int)(uintptr_t)(a2), a3, a4, a5, a7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A50100  (binary VA: 0x1a50100)
// Original: sub_1A50100
// ----------------------------------------------------------------------------
int sub_1A50100(int a1, int a2, int *a3, uint32_t *a4)
{
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef char _g4_t_v12[1052];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  if ( *a3 > 0 )
  {
    v5 = (int)(uintptr_t)(v12);
    v6 = 0;
    do
    {
      v8 = *(uint8_t *)(*a4 + v6);
      v9 = a4;
      ++v6;
      v5 += curl_msnprintf(v5, (int)(uintptr_t)(&v12[-v5 + 1024]), (int)(uintptr_t)("%02x:"), v8);
      a4 = v9;
    }
    while ( v6 < *a3 );
  }
  Curl_infof(a1, " Signature: %s\n", v12);
  return sub_1A4F5D0(a1, a2, "Signature", v12);
}

// ----------------------------------------------------------------------------
// Function: sub_1A501D0  (binary VA: 0x1a501d0)
// Original: sub_1A501D0
// ----------------------------------------------------------------------------
bool sub_1A501D0(char *a1, char *a2)
{
  bool result;
  int v5;
  int v6;

  result = false;
  if ( a1 != nullptr )
  {
    if ( a2 != nullptr && *a1 != 0 )
    {
      if ( *a2 != 0 )
      {
        v5 = Curl_raw_equal(a2, a1);
        result = true;
        if ( v5 == 0 )
          return sub_1A4F9D0(a2, a1, v6);
      }
    }
    else
    {
      return false;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A50250  (binary VA: 0x1a50250)
// Original: sub_1A50250
// ----------------------------------------------------------------------------
int * sub_1A50250(int a1, int *a2, char a3)
{
  int v3;
  int peer_certificate;
  int v5;
  int *v6;
  char *v8;
  void *v9;
  int subject_name;
  int issuer_name;
  int v12;
  int *serialNumber;
  uint8_t *v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  uint32_t *pubkey;
  uint32_t *v21;
  int v22;
  void *v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  int ext_d2i;
  int v29;
  int v30;
  uint32_t *v31;
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
  uint32_t *v66;
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
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  uint32_t *v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  uint32_t *v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int index_by_NID;
  int entry;
  int data;
  size_t *v115;
  char *v116;
  FILE *v117;
  FILE *v118;
  int X509;
  int verify_result;
  int v121;
  int v122;
  char *v123;
  int v124;
  const void *v125;
  int v126;
  typedef void *_g4_t_s1;
  typedef char _g4_t_s1a;
  typedef int _g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef size_t _g4_t_v133;
  typedef int _g4_t_n;
  typedef int _g4_t_v135;
  typedef int **_g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int *_g4_t_v140;
  typedef signed int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int *_g4_t_peer_cert_chain;
  typedef int _g4_t_v145;
  typedef char *_g4_t_v146;
  typedef char *_g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_s2;
  typedef char *_g4_t_s;
  typedef uint8_t _g4_t_v151[284];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s1a)) > _g4_s1 ? (0u + sizeof(_g4_t_s1a)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v129)) > _g4_s2 ? (44u + sizeof(_g4_t_v129)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v130)) > _g4_s3 ? (44u + sizeof(_g4_t_v130)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v131)) > _g4_s4 ? (48u + sizeof(_g4_t_v131)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v132)) > _g4_s5 ? (48u + sizeof(_g4_t_v132)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v133)) > _g4_s6 ? (52u + sizeof(_g4_t_v133)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_n)) > _g4_s7 ? (52u + sizeof(_g4_t_n)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v135)) > _g4_s8 ? (52u + sizeof(_g4_t_v135)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v137)) > _g4_s9 ? (60u + sizeof(_g4_t_v137)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v138)) > _g4_s10 ? (60u + sizeof(_g4_t_v138)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v139)) > _g4_s11 ? (64u + sizeof(_g4_t_v139)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v140)) > _g4_s12 ? (64u + sizeof(_g4_t_v140)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v142)) > _g4_s13 ? (76u + sizeof(_g4_t_v142)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v143)) > _g4_s14 ? (76u + sizeof(_g4_t_v143)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_peer_cert_chain)) > _g4_s15 ? (80u + sizeof(_g4_t_peer_cert_chain)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v145)) > _g4_s16 ? (80u + sizeof(_g4_t_v145)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v146)) > _g4_s17 ? (84u + sizeof(_g4_t_v146)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v147)) > _g4_s18 ? (84u + sizeof(_g4_t_v147)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v148)) > _g4_s19 ? (88u + sizeof(_g4_t_v148)) : _g4_s19,
    _g4_s21 = (152u + sizeof(_g4_t_s2)) > _g4_s20 ? (152u + sizeof(_g4_t_s2)) : _g4_s20,
    _g4_s22 = (156u + sizeof(_g4_t_s)) > _g4_s21 ? (156u + sizeof(_g4_t_s)) : _g4_s21,
    _g4_s23 = (160u + sizeof(_g4_t_v151)) > _g4_s22 ? (160u + sizeof(_g4_t_v151)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 0u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 44u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 44u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 48u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 48u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 52u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 52u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 52u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 60u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 60u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 64u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 64u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 76u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 76u);
  _g4_t_peer_cert_chain &peer_cert_chain = *reinterpret_cast<_g4_t_peer_cert_chain *>(_g4_sf + 80u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 80u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 84u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 84u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 88u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 152u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 156u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 160u);

  v3 = *(uint32_t *)a1;
  if ( *(uint8_t *)(*(uint32_t *)a1 + 597) != 0 )
  {
    v8 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x2000);
    if ( v8 != nullptr )
    {
      peer_cert_chain = (int *)SSL_get_peer_cert_chain(a2[3]);
      if ( peer_cert_chain != nullptr )
      {
        v142 = sk_num((int)(uintptr_t)(peer_cert_chain));
        Curl_ssl_free_certinfo(v3);
        *(uint32_t *)(v3 + 34452) = v142;
        v9 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), v142, 4));
        if ( v9 != nullptr )
        {
          *(uint32_t *)(v3 + 34456) = (uint32_t)(uintptr_t)(v9);
          Curl_infof(v3, "--- Certificate chain\n");
          if ( v142 > 0 )
          {
            v133 = 0;
            v131 = v3;
            while ( 1 )
            {
              v139 = sk_value(peer_cert_chain, v133);
              subject_name = X509_get_subject_name(v139);
              sub_1A4F1B0(subject_name, v8, 0x2000u);
              Curl_infof(v131, "%2d Subject: %s\n", v133, v8);
              sub_1A4F5D0(v131, v133, "Subject", v8);
              issuer_name = X509_get_issuer_name(v139);
              sub_1A4F1B0(issuer_name, v8, 0x2000u);
              Curl_infof(v131, "   Issuer: %s\n", v8);
              sub_1A4F5D0(v131, v133, "Issuer", v8);
              v12 = ASN1_INTEGER_get(**(int ***)v139);
              Curl_infof(v131, "   Version: %lu (0x%lx)\n", v12 + 1, v12);
              curl_msnprintf((int)(uintptr_t)(v8), 0x2000, (int)(uintptr_t)(&off_1B92AE5), v12);
              sub_1A4F5D0(v131, v133, "Version", v8);
              serialNumber = (int *)X509_get_serialNumber(v139);
              if ( *serialNumber <= 4 )
                break;
              *v8 = 0;
              v14 = (uint8_t *)(v8 + 1);
              if ( serialNumber[1] == 258 )
              {
                v8[1] = 45;
                v14 = (uint8_t *)(v8 + 2);
              }
              v15 = *serialNumber;
              if ( *serialNumber > 0 )
              {
                v146 = v8;
                v16 = 0;
                v17 = serialNumber;
                do
                {
                  ++v16;
                  v18 = 10;
                  if ( v16 != v15 )
                    v18 = 58;
                  s1 = v14;
                  v14 += 3;
                  curl_msnprintf((int)(uintptr_t)(s1), 3, (int)(uintptr_t)("%02x%c"), *(uint8_t *)(v17[2] + v16 - 1), v18);
                  v15 = *v17;
                }
                while ( -4 * v16 + 0x2000 > 3 && v16 < v15 );
                v8 = v146;
              }
              if ( v15 != 0 )
              {
                Curl_infof(v131, "   Serial Number: %s\n", v8);
LABEL_54:
                if ( *v8 != 0 )
                  sub_1A4F5D0(v131, v133, "Serial Number", v8);
                goto LABEL_27;
              }
              *v8 = 0;
LABEL_27:
              v137 = *(int ***)v139;
              if ( (int)i2t_ASN1_OBJECT(v8, 0x2000, **(uint32_t **)(*(uint32_t *)v139 + 8)) <= 0x1FFF )
              {
                Curl_infof(v131, "   Signature Algorithm: %s\n", v8);
                sub_1A4F5D0(v131, v133, "Signature Algorithm", v8);
              }
              sub_1A4FA70(
                ***(uint32_t ***)(*(uint32_t *)v139 + 16),
                *(char **)(**(uint32_t **)(*(uint32_t *)v139 + 16) + 8),
                (int)(uintptr_t)(v8),
                0x2000);
              Curl_infof(v131, "   Start date: %s\n", v8);
              sub_1A4F5D0(v131, v133, "Start date", v8);
              v19 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v139 + 16) + 4);
              sub_1A4FA70(*(uint32_t *)v19, *(char **)(v19 + 8), (int)(uintptr_t)(v8), 0x2000);
              Curl_infof(v131, "   Expire date: %s\n", v8);
              sub_1A4F5D0(v131, v133, "Expire date", v8);
              if ( (int)i2t_ASN1_OBJECT(v8, 0x2000, *(uint32_t *)*v137[6]) <= 0x1FFF )
              {
                Curl_infof(v131, "   Public Key Algorithm: %s\n", v8);
                sub_1A4F5D0(v131, v133, "Public Key Algorithm", v8);
              }
              pubkey = (uint32_t *)X509_get_pubkey(v139);
              v21 = pubkey;
              if ( pubkey != nullptr )
              {
                v22 = *pubkey;
                switch ( v22 )
                {
                  case 28:
                    v93 = v21[5];
                    if ( *(uint32_t *)(v93 + 8) != 0 )
                    {
                      v94 = BN_num_bits(*(uint32_t **)(v93 + 8));
                      v95 = v94 + 14;
                      v96 = v94 + 7;
                      if ( v96 >= 0 )
                        v95 = v96;
                      v97 = v95 >> 3;
                      if ( v97 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 8), v8);
                        v8[v97] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)("dh"), (int)(uintptr_t)("p"), (uint8_t *)v8, v97);
                      }
                      v93 = v21[5];
                    }
                    if ( *(uint32_t *)(v93 + 12) != 0 )
                    {
                      v98 = BN_num_bits(*(uint32_t **)(v93 + 12));
                      v99 = v98 + 14;
                      v100 = v98 + 7;
                      if ( v100 >= 0 )
                        v99 = v100;
                      v101 = v99 >> 3;
                      if ( v101 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 12), v8);
                        v8[v101] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)("dh"), (int)(uintptr_t)("g"), (uint8_t *)v8, v101);
                      }
                      v93 = v21[5];
                    }
                    if ( *(uint32_t *)(v93 + 24) != 0 )
                    {
                      v102 = BN_num_bits(*(uint32_t **)(v93 + 24));
                      v103 = v102 + 14;
                      v104 = v102 + 7;
                      if ( v104 >= 0 )
                        v103 = v104;
                      v105 = v103 >> 3;
                      if ( v105 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 24), v8);
                        v8[v105] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)("dh"), (int)(uintptr_t)("priv_key"), (uint8_t *)v8, v105);
                      }
                      v93 = v21[5];
                    }
                    v106 = *(uint32_t **)(v93 + 20);
                    if ( v106 != nullptr )
                    {
                      v107 = BN_num_bits(v106);
                      v108 = v107 + 14;
                      v109 = v107 + 7;
                      if ( v109 >= 0 )
                        v108 = v109;
                      v110 = v108 >> 3;
                      if ( v110 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 20), v8);
                        v8[v110] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)("dh"), (int)(uintptr_t)("pub_key"), (uint8_t *)v8, v110);
                      }
                    }
                    break;
                  case 116:
                    v71 = v21[5];
                    if ( *(uint32_t *)(v71 + 12) != 0 )
                    {
                      v72 = BN_num_bits(*(uint32_t **)(v71 + 12));
                      v73 = v72 + 14;
                      v74 = v72 + 7;
                      if ( v74 >= 0 )
                        v73 = v74;
                      v75 = v73 >> 3;
                      if ( v75 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 12), v8);
                        v8[v75] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&off_1B840D6), (int)(uintptr_t)("p"), (uint8_t *)v8, v75);
                      }
                      v71 = v21[5];
                    }
                    if ( *(uint32_t *)(v71 + 16) != 0 )
                    {
                      v76 = BN_num_bits(*(uint32_t **)(v71 + 16));
                      v77 = v76 + 14;
                      v78 = v76 + 7;
                      if ( v78 >= 0 )
                        v77 = v78;
                      v79 = v77 >> 3;
                      if ( v79 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 16), v8);
                        v8[v79] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&off_1B840D6), (int)(uintptr_t)("q"), (uint8_t *)v8, v79);
                      }
                      v71 = v21[5];
                    }
                    if ( *(uint32_t *)(v71 + 20) != 0 )
                    {
                      v80 = BN_num_bits(*(uint32_t **)(v71 + 20));
                      v81 = v80 + 14;
                      v82 = v80 + 7;
                      if ( v82 >= 0 )
                        v81 = v82;
                      v83 = v81 >> 3;
                      if ( v83 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 20), v8);
                        v8[v83] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&off_1B840D6), (int)(uintptr_t)("g"), (uint8_t *)v8, v83);
                      }
                      v71 = v21[5];
                    }
                    if ( *(uint32_t *)(v71 + 28) != 0 )
                    {
                      v84 = BN_num_bits(*(uint32_t **)(v71 + 28));
                      v85 = v84 + 14;
                      v86 = v84 + 7;
                      if ( v86 >= 0 )
                        v85 = v86;
                      v87 = v85 >> 3;
                      if ( v87 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 28), v8);
                        v8[v87] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&off_1B840D6), (int)(uintptr_t)("priv_key"), (uint8_t *)v8, v87);
                      }
                      v71 = v21[5];
                    }
                    v88 = *(uint32_t **)(v71 + 24);
                    if ( v88 != nullptr )
                    {
                      v89 = BN_num_bits(v88);
                      v90 = v89 + 14;
                      v91 = v89 + 7;
                      if ( v91 >= 0 )
                        v90 = v91;
                      v92 = v90 >> 3;
                      if ( v92 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 24), v8);
                        v8[v92] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&off_1B840D6), (int)(uintptr_t)("pub_key"), (uint8_t *)v8, v92);
                      }
                    }
                    break;
                  case 6:
                    v35 = BN_num_bits(*(uint32_t **)(v21[5] + 16));
                    Curl_infof(v131, "   RSA Public Key (%d bits)\n", v35);
                    v36 = BN_num_bits(*(uint32_t **)(v21[5] + 16));
                    curl_msnprintf((int)(uintptr_t)(v8), 0x2000, (int)(uintptr_t)("%d"), v36);
                    sub_1A4F5D0(v131, v133, "RSA Public Key", v8);
                    v37 = v21[5];
                    if ( *(uint32_t *)(v37 + 16) != 0 )
                    {
                      v38 = BN_num_bits(*(uint32_t **)(v37 + 16));
                      v39 = v38 + 14;
                      v40 = v38 + 7;
                      if ( v40 >= 0 )
                        v39 = v40;
                      v41 = v39 >> 3;
                      if ( v41 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 16), v8);
                        v8[v41] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("n"), (uint8_t *)v8, v41);
                      }
                      v37 = v21[5];
                    }
                    if ( *(uint32_t *)(v37 + 20) != 0 )
                    {
                      v42 = BN_num_bits(*(uint32_t **)(v37 + 20));
                      v43 = v42 + 14;
                      v44 = v42 + 7;
                      if ( v44 >= 0 )
                        v43 = v44;
                      v45 = v43 >> 3;
                      if ( v45 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 20), v8);
                        v8[v45] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("e"), (uint8_t *)v8, v45);
                      }
                      v37 = v21[5];
                    }
                    if ( *(uint32_t *)(v37 + 24) != 0 )
                    {
                      v46 = BN_num_bits(*(uint32_t **)(v37 + 24));
                      v47 = v46 + 14;
                      v48 = v46 + 7;
                      if ( v48 >= 0 )
                        v47 = v48;
                      v49 = v47 >> 3;
                      if ( v49 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 24), v8);
                        v8[v49] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("d"), (uint8_t *)v8, v49);
                      }
                      v37 = v21[5];
                    }
                    if ( *(uint32_t *)(v37 + 28) != 0 )
                    {
                      v50 = BN_num_bits(*(uint32_t **)(v37 + 28));
                      v51 = v50 + 14;
                      v52 = v50 + 7;
                      if ( v52 >= 0 )
                        v51 = v52;
                      v53 = v51 >> 3;
                      if ( v53 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 28), v8);
                        v8[v53] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("p"), (uint8_t *)v8, v53);
                      }
                      v37 = v21[5];
                    }
                    if ( *(uint32_t *)(v37 + 32) != 0 )
                    {
                      v54 = BN_num_bits(*(uint32_t **)(v37 + 32));
                      v55 = v54 + 14;
                      v56 = v54 + 7;
                      if ( v56 >= 0 )
                        v55 = v56;
                      v57 = v55 >> 3;
                      if ( v57 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 32), v8);
                        v8[v57] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("q"), (uint8_t *)v8, v57);
                      }
                      v37 = v21[5];
                    }
                    if ( *(uint32_t *)(v37 + 36) != 0 )
                    {
                      v58 = BN_num_bits(*(uint32_t **)(v37 + 36));
                      v59 = v58 + 14;
                      v60 = v58 + 7;
                      if ( v60 >= 0 )
                        v59 = v60;
                      v61 = v59 >> 3;
                      if ( v61 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 36), v8);
                        v8[v61] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("dmp1"), (uint8_t *)v8, v61);
                      }
                      v37 = v21[5];
                    }
                    if ( *(uint32_t *)(v37 + 40) != 0 )
                    {
                      v62 = BN_num_bits(*(uint32_t **)(v37 + 40));
                      v63 = v62 + 14;
                      v64 = v62 + 7;
                      if ( v64 >= 0 )
                        v63 = v64;
                      v65 = v63 >> 3;
                      if ( v65 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 40), v8);
                        v8[v65] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("dmq1"), (uint8_t *)v8, v65);
                      }
                      v37 = v21[5];
                    }
                    v66 = *(uint32_t **)(v37 + 44);
                    if ( v66 != nullptr )
                    {
                      v67 = BN_num_bits(v66);
                      v68 = v67 + 14;
                      v69 = v67 + 7;
                      if ( v69 >= 0 )
                        v68 = v69;
                      v70 = v68 >> 3;
                      if ( v70 <= 0x1FFF )
                      {
                        BN_bn2bin(*(uint32_t **)(v21[5] + 44), v8);
                        v8[v70] = 0;
                        sub_1A4F630(v131, v133, (int)(uintptr_t)(&unk_1B840DA), (int)(uintptr_t)("iqmp"), (uint8_t *)v8, v70);
                      }
                    }
                    break;
                  default:
                    break;
                }
                EVP_PKEY_free(v21);
              }
              else
              {
                Curl_infof(v131, "   Unable to load public key\n");
              }
              sub_1A4F740(v131, v133, v137[9]);
              sub_1A50100(v131, v133, *(int **)(v139 + 8), (uint32_t *)(*(uint32_t *)(v139 + 8) + 8));
              v23 = BIO_s_mem();
              v24 = BIO_new((int)(uintptr_t)(v23));
              PEM_write_bio_X509(v24, v139);
              BIO_ctrl(v24, 115, 0, (int)(uintptr_t)(&s));
              Curl_infof(v131, "%s\n", *((uint32_t *)s + 1));
              sub_1A4F4A0(v131, v133, "Cert", *((void **)s + 1), *(uint32_t *)s);
              BIO_free(v24);
              if ( ++v133 == v142 )
              {
                v3 = v131;
                goto LABEL_38;
              }
            }
            v34 = ASN1_INTEGER_get(serialNumber);
            Curl_infof(v131, "   Serial Number: %ld (0x%lx)\n", v34, v34);
            curl_msnprintf((int)(uintptr_t)(v8), 0x2000, (int)(uintptr_t)(&off_1B92AE5), v34);
            goto LABEL_54;
          }
        }
      }
LABEL_38:
      ((void (*)(char *))Curl_cfree)(v8);
    }
  }
  *(uint32_t *)(v3 + 544) = 1;
  peer_certificate = SSL_get_peer_certificate(a2[3]);
  a2[4] = peer_certificate;
  if ( peer_certificate == 0 )
  {
    v6 = (int *)((uint32_t *)(&word_32 + 1));
    if ( a3 != 0 )
      Curl_failf(v3, "SSL: couldn't get peer certificate!");
    return v6;
  }
  Curl_infof(v3, "Server certificate:\n");
  v5 = X509_get_subject_name(a2[4]);
  if ( sub_1A4F1B0(v5, v151, 0x100u) )
  {
    if ( a3 != 0 )
      Curl_failf(v3, "SSL: couldn't get X509-subject!");
    v6 = (int *)(&dword_20 + 3);
    X509_free(a2[4]);
    a2[4] = 0;
    return v6;
  }
  Curl_infof(v3, "\t subject: %s\n", v151);
  v25 = **(uint32_t **)(*(uint32_t *)a2[4] + 16);
  sub_1A4FA70(*(uint32_t *)v25, *(char **)(v25 + 8), (int)(uintptr_t)(v151), 256);
  Curl_infof(v3, "\t start date: %s\n", v151);
  v26 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a2[4] + 16) + 4);
  sub_1A4FA70(*(uint32_t *)v26, *(char **)(v26 + 8), (int)(uintptr_t)(v151), 256);
  Curl_infof(v3, "\t expire date: %s\n", v151);
  if ( *(uint32_t *)(v3 + 552) != 0 )
  {
    v138 = a2[4];
    v143 = *(uint32_t *)a1;
    v27 = Curl_inet_pton(a1, (int)(uintptr_t)(&s2), 2, *(char **)(a1 + 128), &s2);
    n = v27 != 0 ? 4 : 0;
    v129 = v27 == 0 ? 2 : 7;
    ext_d2i = X509_get_ext_d2i(v138, 85, 0, 0);
    v140 = (int *)ext_d2i;
    if ( ext_d2i != 0 )
    {
      v132 = sk_num(ext_d2i);
      if ( v132 <= 0 )
      {
        GENERAL_NAMES_free((char)(uintptr_t)(v140));
      }
      else
      {
        v148 = v3;
        v145 = -1;
        v29 = 0;
        v30 = v129;
        do
        {
          v31 = (uint32_t *)sk_value(v140, v29);
          if ( *v31 == v30 )
          {
            v130 = v31;
            v147 = (char *)ASN1_STRING_data(v31[1]);
            v32 = ASN1_STRING_length(v130[1]);
            if ( v30 == 2 )
            {
              v145 = 0;
              if ( v32 == strlen(v147) && sub_1A501D0(v147, *(char **)(a1 + 128)) )
              {
LABEL_48:
                v3 = v148;
                GENERAL_NAMES_free((char)(uintptr_t)(v140));
                Curl_infof(v143, "\t subjectAltName: %s matched\n", *(uint32_t *)(a1 + 132));
                goto LABEL_49;
              }
            }
            else
            {
              v145 = 0;
              if ( v32 == n && memcmp(v147, &s2, n) == 0 )
                goto LABEL_48;
            }
          }
          ++v29;
        }
        while ( v132 > v29 );
        v3 = v148;
        GENERAL_NAMES_free((char)(uintptr_t)(v140));
        if ( v145 == 0 )
        {
          v6 = (int *)((uint32_t *)(&word_32 + 1));
          Curl_infof(v143, "\t subjectAltName does not match %s\n", *(uint32_t *)(a1 + 132));
LABEL_174:
          X509_free(a2[4]);
          a2[4] = 0;
          return v6;
        }
      }
    }
    s = (char *)&unk_1B15112;
    v111 = -1;
    v6 = (int *)X509_get_subject_name(v138);
    if ( v6 == nullptr )
    {
      v123 = s;
      goto LABEL_168;
    }
    while ( 1 )
    {
      index_by_NID = X509_NAME_get_index_by_NID(v6, 0xDu, v111);
      if ( index_by_NID < 0 )
        break;
      v111 = index_by_NID;
    }
    if ( v111 < 0
      || (entry = X509_NAME_get_entry((int **)v6, v111),
          data = X509_NAME_ENTRY_get_data(entry),
          v115 = (size_t *)data,
          data == 0) )
    {
      v123 = s;
      v6 = nullptr;
      goto LABEL_168;
    }
    if ( ASN1_STRING_type(data) == 12 )
    {
      v124 = ASN1_STRING_length((int)(uintptr_t)(v115));
      v135 = v124;
      if ( v124 >= 0 )
      {
        v116 = (char *)(CRYPTO_malloc(v124 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
        s = v116;
        if ( v116 == nullptr )
          goto LABEL_191;
        v125 = (const void *)ASN1_STRING_data((int)(uintptr_t)(v115));
        memcpy(s, v125, v135);
        s[v135] = 0;
      }
    }
    else
    {
      v135 = ASN1_STRING_to_UTF8(&s, v115);
    }
    v123 = s;
    v116 = s;
    if ( s != nullptr )
    {
      v6 = nullptr;
      if ( strlen(s) != v135 )
      {
        LOWORD(v6) = 51;
        Curl_failf(v143, "SSL: illegal cert name field");
        v123 = s;
      }
LABEL_168:
      if ( v123 == (char *)&unk_1B15112 )
      {
        s = nullptr;
        v123 = nullptr;
      }
      if ( v6 != nullptr )
      {
LABEL_171:
        if ( v123 != nullptr )
          CRYPTO_free(v123);
        if ( v6 != nullptr )
          goto LABEL_174;
        goto LABEL_49;
      }
LABEL_192:
      if ( v123 != nullptr )
      {
        if ( sub_1A501D0(v123, *(char **)(a1 + 128)) )
        {
          v6 = nullptr;
          Curl_infof(v143, "\t common name: %s (matched)\n", s);
          v123 = s;
        }
        else
        {
          if ( *(int *)(v143 + 552) <= 1 )
          {
            v6 = nullptr;
            Curl_infof(v143, "\t common name: %s (does not match '%s')\n", s, *(uint32_t *)(a1 + 132));
          }
          else
          {
            v6 = (int *)((uint32_t *)(&word_32 + 1));
            Curl_failf(
              v143,
              "SSL: certificate subject name '%s' does not match target host name '%s'",
              s,
              *(uint32_t *)(a1 + 132));
          }
          v123 = s;
        }
      }
      else
      {
        v6 = (int *)((uint32_t *)(&word_32 + 1));
        Curl_failf(v143, "SSL: unable to obtain common name from peer certificate");
        v123 = s;
      }
      goto LABEL_171;
    }
LABEL_191:
    v123 = v116;
    goto LABEL_192;
  }
LABEL_49:
  v33 = X509_get_issuer_name(a2[4]);
  if ( sub_1A4F1B0(v33, v151, 0x100u) )
  {
    v6 = (int *)(&dword_20 + 3);
    if ( a3 != 0 )
      Curl_failf(v3, "SSL: couldn't get X509-issuer name!");
LABEL_52:
    X509_free(a2[4]);
    a2[4] = 0;
    a2[5] = 5;
    return v6;
  }
  Curl_infof(v3, "\t issuer: %s\n", v151);
  if ( *(uint32_t *)(v3 + 832) == 0 )
    goto LABEL_202;
  v117 = fopen(*(const char **)(v3 + 832), "r");
  v118 = v117;
  if ( v117 != nullptr )
  {
    X509 = PEM_read_X509((int)(uintptr_t)(v117), 0, 0, nullptr);
    if ( X509 != 0 )
    {
      fclose(v118);
      if ( X509_check_issued(X509, a2[4]) != 0 )
      {
        if ( a3 != 0 )
          Curl_failf(v3, "SSL: Certificate issuer check failed (%s)\n", *(uint32_t *)(v3 + 832));
        X509_free(a2[4]);
        s1a = X509;
        v6 = (int *)(&dword_50 + 3);
        X509_free(s1a);
        a2[4] = 0;
        return v6;
      }
      Curl_infof(v3, "\t SSL certificate issuer check ok (%s)\n", *(uint32_t *)(v3 + 832));
      X509_free(X509);
LABEL_202:
      verify_result = SSL_get_verify_result(a2[3]);
      v121 = verify_result;
      *(uint32_t *)(v3 + 544) = verify_result;
      if ( verify_result != 0 )
      {
        if ( *(uint32_t *)(v3 + 548) != 0 )
        {
          v6 = (int *)((uint32_t *)(&word_32 + 1));
          if ( a3 != 0 )
          {
            v122 = (int)(uintptr_t)(X509_verify_cert_error_string(verify_result));
            Curl_failf(v3, "SSL certificate verify result: %s (%ld)", v122, v121);
          }
        }
        else
        {
          v6 = nullptr;
          v126 = (int)(uintptr_t)(X509_verify_cert_error_string(verify_result));
          Curl_infof(v3, "\t SSL certificate verify result: %s (%ld), continuing anyway.\n", v126, v121);
        }
      }
      else
      {
        v6 = nullptr;
        Curl_infof(v3, "\t SSL certificate verify ok.\n");
      }
      goto LABEL_52;
    }
    if ( a3 != 0 )
      Curl_failf(v3, "SSL: Unable to read issuer cert (%s)\n", *(uint32_t *)(v3 + 832));
    v6 = (int *)(&dword_50 + 3);
    X509_free(a2[4]);
    X509_free(0);
    fclose(v118);
  }
  else
  {
    if ( a3 != 0 )
      Curl_failf(v3, "SSL: Unable to open issuer cert (%s)\n", *(uint32_t *)(v3 + 832));
    v6 = (int *)(&dword_50 + 3);
    X509_free(a2[4]);
    a2[4] = 0;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1A519B0  (binary VA: 0x1a519b0)
// Original: sub_1A519B0
// ----------------------------------------------------------------------------
int sub_1A519B0(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int *v6;
  int result;
  int v8;
  int v9;
  int v10;
  unsigned int error;
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char _g4_t_v14[132];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  ERR_clear_error();
  v5 = 0x7FFFFFFF;
  if ( a4 >= 0 )
    v5 = a4;
  v6 = &a1[6 * a2];
  result = SSL_write(v6[85], a3, v5);
  if ( result < 0 )
  {
    LOBYTE(v8) = SSL_get_error(v6[85], result);
    if ( v8 > 3 )
    {
      if ( v8 == 5 )
      {
        v12 = *(uint32_t *)__errno(v10, v9);
        Curl_failf(*a1, "SSL_write() returned SYSCALL, errno = %d", v12);
        goto LABEL_9;
      }
    }
    else
    {
      if ( v8 >= 2 )
      {
        *a5 = 81;
        return -1;
      }
      if ( v8 == 1 )
      {
        error = ERR_get_error();
        v13 = ERR_error_string(error, v14);
        Curl_failf(*a1, "SSL_write() error: %s", v13);
        goto LABEL_9;
      }
    }
    Curl_failf(*a1, "SSL_write() return error %d", v8);
LABEL_9:
    *a5 = 55;
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A51B00  (binary VA: 0x1a51b00)
// Original: sub_1A51B00
// ----------------------------------------------------------------------------
int sub_1A51B00(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v10;
  unsigned int error;
  int v12;
  int v13;
  int v14;
  char *v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17[132];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v17)) > _g4_s1 ? (24u + sizeof(_g4_t_v17)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);

  ERR_clear_error();
  v5 = 0x7FFFFFFF;
  if ( a4 >= 0 )
    v5 = a4;
  v6 = &a1[6 * a2];
  v7 = SSL_read(v6[85], a3, v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    LOBYTE(v10) = SSL_get_error(v6[85], v7);
    if ( v10 > 3 )
    {
      if ( v10 == 6 )
        return v8;
    }
    else
    {
      if ( v10 >= 2 )
      {
        v8 = -1;
        *a5 = 81;
        return v8;
      }
      if ( v10 == 0 )
        return v8;
    }
    error = ERR_get_error();
    v14 = *(uint32_t *)__errno(v13, v12);
    v15 = ERR_error_string(error, v17);
    v16 = v14;
    v8 = -1;
    Curl_failf(*a1, "SSL read: %s, errno %d", v15, v16);
    *a5 = 56;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_1A51D90  (binary VA: 0x1a51d90)
// Original: sub_1A51D90
// ----------------------------------------------------------------------------
char sub_1A51D90(void **a1, int a2, char a3, uint8_t *a4)
{
  int v4;
  int *v5;
  int v6;
  char *v7;
  unsigned int v8;
  int v9;
  int v10;
  int *v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  FILE *v19;
  char *v20;
  uint32_t *v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  const char *v27;
  const char *v28;
  int v29;
  int v30;
  int v31;
  FILE *v32;
  unsigned int v33;
  char *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  char *v39;
  int v40;
  char *v41;
  int v42;
  char **v43;
  int v44;
  const char *v45;
  const char *v46;
  int certificate;
  uint32_t *privatekey;
  char *v49;
  const char *v50;
  char *v51;
  unsigned int v52;
  char *v53;
  char **v54;
  int *private_key;
  const char *v56;
  int (*v57)(int, uint32_t, uint32_t);
  int v58;
  int v59;
  int v60;
  int v61;
  unsigned int v62;
  char *v63;
  unsigned int error;
  char *v65;
  int *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  unsigned int v72;
  char *v73;
  int v74;
  typedef int _g4_t_v76;
  typedef char *_g4_t_v77;
  typedef FILE *_g4_t_streamb;
  typedef FILE *_g4_t_streamc;
  typedef FILE *_g4_t_streamd;
  typedef FILE *_g4_t_stream;
  typedef FILE *_g4_t_streama;
  typedef char _g4_t_streame;
  typedef char _g4_t_streamf;
  typedef int _g4_t_v85;
  typedef void *_g4_t_v86;
  typedef char *_g4_t_v87;
  typedef void *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef char *_g4_t_filename;
  typedef char *_g4_t_v93;
  typedef uint8_t *_g4_t_v94;
  typedef void *_g4_t_v95;
  typedef uint32_t *_g4_t_pubkey;
  typedef void *_g4_t_v97;
  typedef int *_g4_t_v98;
  typedef char *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef char _g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef void *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef char _g4_t_v108[4];
  typedef int _g4_t_v109;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v76)) > _g4_s0 ? (8u + sizeof(_g4_t_v76)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v77)) > _g4_s1 ? (12u + sizeof(_g4_t_v77)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_streamb)) > _g4_s2 ? (40u + sizeof(_g4_t_streamb)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_streamc)) > _g4_s3 ? (40u + sizeof(_g4_t_streamc)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_streamd)) > _g4_s4 ? (40u + sizeof(_g4_t_streamd)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_stream)) > _g4_s5 ? (40u + sizeof(_g4_t_stream)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_streama)) > _g4_s6 ? (40u + sizeof(_g4_t_streama)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_streame)) > _g4_s7 ? (40u + sizeof(_g4_t_streame)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_streamf)) > _g4_s8 ? (40u + sizeof(_g4_t_streamf)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v85)) > _g4_s9 ? (44u + sizeof(_g4_t_v85)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v86)) > _g4_s10 ? (48u + sizeof(_g4_t_v86)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v87)) > _g4_s11 ? (48u + sizeof(_g4_t_v87)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v88)) > _g4_s12 ? (52u + sizeof(_g4_t_v88)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v89)) > _g4_s13 ? (56u + sizeof(_g4_t_v89)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v90)) > _g4_s14 ? (60u + sizeof(_g4_t_v90)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v91)) > _g4_s15 ? (64u + sizeof(_g4_t_v91)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_filename)) > _g4_s16 ? (68u + sizeof(_g4_t_filename)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v93)) > _g4_s17 ? (68u + sizeof(_g4_t_v93)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v94)) > _g4_s18 ? (72u + sizeof(_g4_t_v94)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v95)) > _g4_s19 ? (72u + sizeof(_g4_t_v95)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_pubkey)) > _g4_s20 ? (72u + sizeof(_g4_t_pubkey)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v97)) > _g4_s21 ? (72u + sizeof(_g4_t_v97)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v98)) > _g4_s22 ? (76u + sizeof(_g4_t_v98)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v99)) > _g4_s23 ? (80u + sizeof(_g4_t_v99)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v100)) > _g4_s24 ? (84u + sizeof(_g4_t_v100)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v101)) > _g4_s25 ? (88u + sizeof(_g4_t_v101)) : _g4_s25,
    _g4_s27 = (95u + sizeof(_g4_t_v102)) > _g4_s26 ? (95u + sizeof(_g4_t_v102)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v103)) > _g4_s27 ? (100u + sizeof(_g4_t_v103)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v104)) > _g4_s28 ? (104u + sizeof(_g4_t_v104)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v105)) > _g4_s29 ? (108u + sizeof(_g4_t_v105)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v106)) > _g4_s30 ? (112u + sizeof(_g4_t_v106)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v107)) > _g4_s31 ? (116u + sizeof(_g4_t_v107)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v108)) > _g4_s32 ? (120u + sizeof(_g4_t_v108)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v109)) > _g4_s33 ? (124u + sizeof(_g4_t_v109)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 12u);
  _g4_t_streamb &streamb = *reinterpret_cast<_g4_t_streamb *>(_g4_sf + 40u);
  _g4_t_streamc &streamc = *reinterpret_cast<_g4_t_streamc *>(_g4_sf + 40u);
  _g4_t_streamd &streamd = *reinterpret_cast<_g4_t_streamd *>(_g4_sf + 40u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 40u);
  _g4_t_streama &streama = *reinterpret_cast<_g4_t_streama *>(_g4_sf + 40u);
  _g4_t_streame &streame = *reinterpret_cast<_g4_t_streame *>(_g4_sf + 40u);
  _g4_t_streamf &streamf = *reinterpret_cast<_g4_t_streamf *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 52u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 56u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 60u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 64u);
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 68u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 68u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 72u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 72u);
  _g4_t_pubkey &pubkey = *reinterpret_cast<_g4_t_pubkey *>(_g4_sf + 72u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 72u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 76u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 80u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 84u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 88u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 95u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 100u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 104u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 108u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 112u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 116u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 120u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 124u);

  v4 = a2;
  v5 = (int *)a1;
  v86 = *a1;
  v6 = (int)(uintptr_t)(&a1[6 * a2 + 82]);
  v89 = a2 + 76;
  v88 = a1[a2 + 76];
  if ( a1[6 * a2 + 83] == (char *)&dword_0 + 2 )
  {
    *a4 = 1;
    LOBYTE(v11) = 0;
    return (char)(uintptr_t)(v11);
  }
  v7 = (char *)a1[6 * a2 + 87];
  v8 = (unsigned int)(uintptr_t)(v7 - 1);
  if ( v7 != nullptr )
    goto LABEL_3;
  if ( (int)Curl_timeleft(v86, 0, 1) < 0 )
  {
    Curl_failf((int)(uintptr_t)(v86), "SSL connection timeout");
    LOBYTE(v11) = 28;
    return (char)(uintptr_t)(v11);
  }
  v90 = *v5;
  v103 = nullptr;
  v101 = v5[v89];
  Curl_ossl_seed(v90);
  v18 = *(uint32_t *)(v90 + 540);
  if ( v18 == 2 )
  {
    v19 = (FILE *)SSLv2_client_method();
    v102 = 0;
  }
  else if ( v18 == 3 )
  {
    v19 = (FILE *)SSLv3_client_method();
    v102 = 0;
  }
  else
  {
    if ( v18 == 1 )
      v19 = (FILE *)TLSv1_client_method();
    else
      v19 = (FILE *)SSLv23_client_method();
    v102 = 1;
  }
  v20 = *(char **)(v6 + 8);
  if ( v20 != nullptr )
  {
    streamb = v19;
    SSL_CTX_free(v20);
    v19 = streamb;
  }
  v21 = (uint32_t *)SSL_CTX_new((int)(uintptr_t)(v19));
  *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v21);
  if ( v21 == nullptr )
  {
    v33 = ERR_peek_error();
    v34 = ERR_error_string(v33, nullptr);
    Curl_failf(v90, "SSL: couldn't create a context: %s", v34);
    LOBYTE(v11) = 27;
    return (char)(uintptr_t)(v11);
  }
  if ( *(uint32_t *)(v90 + 368) != 0 && *(uint8_t *)(v90 + 676) != 0 )
  {
    LOBYTE(v31) = SSL_CTX_callback_ctrl(v21, 15, (int)(uintptr_t)(sub_1A50070));
    if ( v31 != 0 )
    {
      LOBYTE(v35) = SSL_CTX_ctrl(*(uint32_t **)(v6 + 8), 16, 0, (int)(uintptr_t)(v5));
      if ( v35 == 0 )
        Curl_infof(v90, "SSL: couldn't set callback argument!\n");
      v21 = *(uint32_t **)(v6 + 8);
    }
    else
    {
      Curl_infof(v90, "SSL: couldn't set callback!\n");
      v21 = *(uint32_t **)(v6 + 8);
    }
  }
  SSL_CTX_ctrl(v21, 32, -2147463169, 0);
  if ( *(uint32_t *)(v90 + 540) == 0 )
    SSL_CTX_ctrl(*(uint32_t **)(v6 + 8), 32, 0x1000000, 0);
  filename = *(char **)(v90 + 724);
  if ( filename != nullptr )
  {
    v94 = *(uint8_t **)(v90 + 728);
  }
  else
  {
    v94 = *(uint8_t **)(v90 + 728);
    if ( v94 == nullptr )
      goto LABEL_52;
  }
  v99 = *(char **)(v90 + 772);
  v100 = *(uint32_t *)(v90 + 764);
  v98 = *(int **)(v6 + 8);
  v91 = *v5;
  v22 = sub_1A4FC10(v94);
  if ( v22 == 42 || filename != nullptr )
  {
    v23 = *(uint32_t *)(v91 + 768);
    if ( v23 != 0 )
    {
      streamc = (FILE *)v22;
      SSL_CTX_set_default_passwd_cb_userdata((int)(uintptr_t)(v98), v23);
      SSL_CTX_set_default_passwd_cb((int)(uintptr_t)(v98), (int)(uintptr_t)(sub_1A4FCC0));
      v22 = (int)(uintptr_t)(streamc);
    }
    switch ( v22 )
    {
      case 1:
        v36 = SSL_CTX_use_certificate_chain_file((int)(uintptr_t)(v98), (int)(uintptr_t)(filename), (int)(uintptr_t)(v98), (int)(uintptr_t)(filename));
        v37 = 0;
        if ( v36 == 1 )
          break;
        goto LABEL_97;
      case 2:
        v40 = SSL_CTX_use_certificate_file((int)(uintptr_t)(v98), (int)(uintptr_t)(filename), 2);
        v37 = 0;
        if ( v40 != 1 )
        {
LABEL_97:
          v41 = "unable to use client certificate (no key found or wrong pass phrase?)";
LABEL_98:
          Curl_failf(v91, v41);
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        break;
      case 42:
        v42 = *(uint32_t *)(v91 + 34152);
        if ( v42 == 0 )
        {
          v41 = "crypto engine not set, can't load certificate";
          goto LABEL_98;
        }
        *(uint32_t *)v108 = (uint32_t)(uintptr_t)(filename);
        v109 = 0;
        if ( ENGINE_ctrl(v42, 13, 0, "LOAD_CERT_CTRL", 0) == 0 )
        {
          v41 = "ssl engine does not support loading certificates";
          goto LABEL_98;
        }
        if ( !ENGINE_ctrl_cmd(*(uint32_t *)(v91 + 34152), "LOAD_CERT_CTRL", 0, v108, 0, 1) )
        {
          error = ERR_get_error();
          v77 = ERR_error_string(error, nullptr);
          v76 = (int)(uintptr_t)(filename);
          v51 = "ssl engine cannot load client cert with id '%s' [%s]";
LABEL_135:
          Curl_failf(v91, v51, v76, v77);
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        if ( v109 == 0 )
        {
          v65 = "ssl engine didn't initialized the certificate properly.";
          goto LABEL_170;
        }
        if ( SSL_CTX_use_certificate((int)(uintptr_t)(v98), v109) != 1 )
        {
          Curl_failf(v91, "unable to set client certificate");
          X509_free(v109);
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        X509_free(v109);
        v37 = 0;
        break;
      case 43:
        v107 = 0;
        v32 = fopen(filename, "rb");
        if ( v32 == nullptr )
        {
          Curl_failf(v91, "could not open PKCS12 file '%s'", filename);
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        streamd = v32;
        v95 = (void *)d2i_PKCS12_fp((int)(uintptr_t)(v32), nullptr);
        fclose(streamd);
        if ( v95 == nullptr )
        {
          Curl_failf(v91, "error reading PKCS12 file '%s'", filename);
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        PKCS12_PBE_add();
        if ( PKCS12_parse((int)(uintptr_t)(v95), *(char **)(v91 + 768), (int)(uintptr_t)(&v106), (int)(uintptr_t)(&v105), (int)(uintptr_t)(&v107)) == 0 )
        {
          v52 = ERR_get_error();
          v53 = ERR_error_string(v52, nullptr);
          Curl_failf(v91, "could not parse PKCS12 file, check password, OpenSSL error %s", v53);
          PKCS12_free((char)(uintptr_t)(v95));
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        PKCS12_free((char)(uintptr_t)(v95));
        if ( SSL_CTX_use_certificate((int)(uintptr_t)(v98), v105) != 1 )
        {
          Curl_failf(v91, "unable to use client certificate (no key found or wrong pass phrase?)");
          goto LABEL_84;
        }
        if ( SSL_CTX_use_PrivateKey((int)(uintptr_t)(v98), (int *)v106) != 1 )
        {
          Curl_failf(v91, "unable to use private key from PKCS12 file '%s'", filename);
          goto LABEL_84;
        }
        if ( SSL_CTX_check_private_key((int)(uintptr_t)(v98)) == 0 )
        {
          Curl_failf(v91, "private key from PKCS12 file '%s' does not match certificate in same file", filename);
          goto LABEL_84;
        }
        if ( v107 != 0 && sk_num(v107) != 0 )
        {
          v97 = (void *)v4;
          v66 = v5;
          v67 = v6;
          v68 = 0;
          if ( sk_num(v107) > 0 )
          {
            while ( 1 )
            {
              v69 = sk_value((int *)v107, v68);
              LOBYTE(v70) = SSL_CTX_ctrl(v98, 14, 0, v69);
              if ( v70 == 0 )
              {
                Curl_failf(v91, "cannot add certificate to certificate chain");
                goto LABEL_84;
              }
              v71 = sk_value((int *)v107, v68);
              if ( SSL_CTX_add_client_CA((int)(uintptr_t)(v98), v71) == 0 )
                break;
              if ( ++v68 >= sk_num(v107) )
                goto LABEL_178;
            }
            Curl_failf(v91, "cannot add certificate to client CA list");
LABEL_84:
            EVP_PKEY_free(v106);
            X509_free(v105);
            LOBYTE(v11) = 58;
            return (char)(uintptr_t)(v11);
          }
LABEL_178:
          v6 = v67;
          v5 = v66;
          v4 = (int)(uintptr_t)(v97);
        }
        EVP_PKEY_free(v106);
        X509_free(v105);
        v37 = 1;
        break;
      default:
        Curl_failf(v91, "not supported file type '%s' for certificate", v94);
        LOBYTE(v11) = 58;
        return (char)(uintptr_t)(v11);
    }
    stream = (FILE *)v37;
    v38 = sub_1A4FC10(v99);
    switch ( v38 )
    {
      case 1:
        if ( stream == nullptr )
        {
          v49 = filename;
          if ( v100 != 0 )
            v49 = (char *)v100;
          v100 = (int)(uintptr_t)(v49);
LABEL_131:
          if ( SSL_CTX_use_PrivateKey_file((int)(uintptr_t)(v98), v100, v38) != 1 )
          {
            v50 = "PEM";
            if ( v99 != nullptr )
              v50 = v99;
            v76 = v100;
            v77 = (char *)v50;
            v51 = "unable to set private key file: '%s' type %s";
            goto LABEL_135;
          }
        }
LABEL_122:
        v93 = (char *)SSL_new(v98);
        if ( v93 != nullptr )
        {
          certificate = SSL_get_certificate((int)(uintptr_t)(v93));
          v105 = certificate;
          if ( certificate != 0 )
          {
            pubkey = (uint32_t *)X509_get_pubkey(certificate);
            privatekey = (uint32_t *)SSL_get_privatekey((int)(uintptr_t)(v93));
            EVP_PKEY_copy_parameters(pubkey, privatekey);
            EVP_PKEY_free(pubkey);
          }
          SSL_free(v93);
          if ( SSL_CTX_check_private_key((int)(uintptr_t)(v98)) != 0 )
            break;
          Curl_failf(v91, "Private key does not match the certificate public key");
        }
        else
        {
          Curl_failf(v91, "unable to create an SSL structure");
        }
LABEL_95:
        LOBYTE(v11) = 58;
        return (char)(uintptr_t)(v11);
      case 2:
        goto LABEL_131;
      case 42:
        if ( *(uint32_t *)(v91 + 34152) != 0 )
        {
          v54 = UI_OpenSSL();
          private_key = (int *)ENGINE_load_private_key(*(uint32_t *)(v91 + 34152), v100, v54, *(uint32_t *)(v91 + 768));
          v39 = "failed to load private key from crypto engine";
          if ( private_key == nullptr )
            goto LABEL_94;
          streama = (FILE *)private_key;
          if ( SSL_CTX_use_PrivateKey((int)(uintptr_t)(v98), private_key) != 1 )
          {
            Curl_failf(v91, "unable to set private key");
            EVP_PKEY_free(streama);
            LOBYTE(v11) = 58;
            return (char)(uintptr_t)(v11);
          }
          EVP_PKEY_free(streama);
          goto LABEL_122;
        }
        v65 = "crypto engine not set, can't load private key";
LABEL_170:
        Curl_failf(v91, v65);
        LOBYTE(v11) = 58;
        return (char)(uintptr_t)(v11);
      case 43:
        if ( stream == nullptr )
        {
          Curl_failf(v91, "file type P12 for private key not supported");
          LOBYTE(v11) = 58;
          return (char)(uintptr_t)(v11);
        }
        goto LABEL_122;
      default:
        v39 = "not supported file type for private key";
LABEL_94:
        Curl_failf(v91, v39);
        goto LABEL_95;
    }
  }
LABEL_52:
  if ( *(uint32_t *)(v90 + 812) != 0 && SSL_CTX_set_cipher_list(*(uint32_t *)(v6 + 8), *(char **)(v90 + 812)) == 0 )
  {
    Curl_failf(v90, "failed setting cipher list");
    LOBYTE(v11) = 59;
    return (char)(uintptr_t)(v11);
  }
  v25 = *(uint32_t *)(v90 + 808);
  if ( v25 != 0 )
  {
    v26 = *(uint32_t *)(v90 + 804);
LABEL_56:
    if ( SSL_CTX_load_verify_locations(*(uint32_t *)(v6 + 8), v25, v26) != 0 )
    {
      Curl_infof(v90, "successfully set certificate verify locations:\n");
    }
    else
    {
      if ( *(uint32_t *)(v90 + 548) != 0 )
      {
        v27 = *(const char **)(v90 + 804);
        if ( v27 == nullptr )
          v27 = "none";
        v28 = *(const char **)(v90 + 808);
        if ( v28 == nullptr )
          v28 = "none";
        Curl_failf(v90, "error setting certificate verify locations:\n  CAfile: %s\n  CApath: %s\n", v28, v27);
        LOBYTE(v11) = 77;
        return (char)(uintptr_t)(v11);
      }
      Curl_infof(v90, "error setting certificate verify locations, continuing anyway:\n");
    }
    v45 = *(const char **)(v90 + 804);
    if ( v45 == nullptr )
      v45 = "none";
    v46 = *(const char **)(v90 + 808);
    if ( v46 == nullptr )
      v46 = "none";
    Curl_infof(v90, "  CAfile: %s\n  CApath: %s\n", v46, v45);
    goto LABEL_109;
  }
  v26 = *(uint32_t *)(v90 + 804);
  if ( v26 != 0 )
    goto LABEL_56;
LABEL_109:
  if ( *(uint32_t *)(v90 + 828) != 0 )
  {
    v43 = X509_LOOKUP_file();
    v44 = X509_STORE_add_lookup(*(uint32_t *)(*(uint32_t *)(v6 + 8) + 12), (int)(uintptr_t)(v43));
    if ( v44 == 0 || X509_load_crl_file(v44, *(uint32_t *)(v90 + 828), 1) == 0 )
    {
      Curl_failf(v90, "error loading CRL file: %s\n", *(uint32_t *)(v90 + 828));
      LOBYTE(v11) = 82;
      return (char)(uintptr_t)(v11);
    }
    Curl_infof(v90, "successfully load CRL file:\n");
    X509_STORE_set_flags(*(uint32_t *)(*(uint32_t *)(v6 + 8) + 12), 12);
    v56 = *(const char **)(v90 + 828);
    if ( v56 == nullptr )
      v56 = "none";
    Curl_infof(v90, "  CRLfile: %s\n", v56);
  }
  SSL_CTX_set_verify(*(uint32_t *)(v6 + 8), *(uint32_t *)(v90 + 548) != 0, (int)(uintptr_t)(sub_1A4F290));
  v57 = *(int (**)(int, uint32_t, uint32_t))(v90 + 588);
  if ( v57 != nullptr )
  {
    v58 = v57(v90, *(uint32_t *)(v6 + 8), *(uint32_t *)(v90 + 592));
    if ( v58 != 0 )
    {
      streamf = v58;
      Curl_failf(v90, "error signaled by ssl ctx callback");
      LOBYTE(v11) = streamf;
      return (char)(uintptr_t)(v11);
    }
  }
  if ( *(uint32_t *)(v6 + 12) != 0 )
    SSL_free(*(char **)(v6 + 12));
  v59 = SSL_new(*(int **)(v6 + 8));
  *(uint32_t *)(v6 + 12) = v59;
  if ( v59 == 0 )
  {
    Curl_failf(v90, "SSL: couldn't create a context (handle)!");
    LOBYTE(v11) = 27;
    return (char)(uintptr_t)(v11);
  }
  SSL_set_connect_state(v59);
  *(uint32_t *)(v6 + 16) = 0;
  if ( Curl_inet_pton(v61, v60, 2, (char *)v5[32], &v104) == 0 && v102 != 0 )
  {
    LOBYTE(v74) = SSL_ctrl(*(uint32_t **)(v6 + 12), 55, 0, v5[32]);
    if ( v74 == 0 )
      Curl_infof(v90, "WARNING: failed to configure server name indication (SNI) TLS extension\n");
  }
  if ( Curl_ssl_getsessionid(v5, &v103, nullptr) == 0 )
  {
    if ( !SSL_set_session(*(uint32_t *)(v6 + 12), v103) )
    {
      v62 = ERR_get_error();
      v63 = ERR_error_string(v62, nullptr);
      Curl_failf(v90, "SSL: SSL_set_session failed: %s", v63);
      LOBYTE(v11) = 35;
      return (char)(uintptr_t)(v11);
    }
    Curl_infof(v90, "SSL re-using session ID\n");
  }
  if ( SSL_set_fd(*(uint32_t *)(v6 + 12), v101) == 0 )
  {
    v72 = ERR_get_error();
    v73 = ERR_error_string(v72, nullptr);
    Curl_failf(v90, "SSL: SSL_set_fd failed: %s", v73);
    LOBYTE(v11) = 35;
    return (char)(uintptr_t)(v11);
  }
  *(uint32_t *)(v6 + 20) = 1;
  v7 = (char *)((uint8_t *)(&dword_0 + 1));
  v8 = 0;
  while ( 1 )
  {
LABEL_3:
    if ( v8 > 2 )
    {
      if ( v7 != (char *)&loc_4 )
      {
        if ( v7 != (char *)(uintptr_t)(uint8_t *)&loc_4 + 1 )
        {
          *a4 = 0;
LABEL_46:
          *(uint32_t *)(v6 + 20) = 0;
          LOBYTE(v11) = 0;
          return (char)(uintptr_t)(v11);
        }
LABEL_70:
        *(uint32_t *)(v6 + 4) = 2;
        v5[v89 + 2] = (int)(uintptr_t)(sub_1A51B00);
        v5[v4 + 80] = (int)(uintptr_t)(sub_1A519B0);
        *a4 = 1;
        goto LABEL_46;
      }
      v29 = *(uint32_t *)(v6 + 12);
      v85 = *v5;
      v107 = 0;
      v87 = (char *)SSL_get1_session(v29);
      if ( Curl_ssl_getsessionid(v5, &v107, nullptr) == 0 )
      {
        if ( v87 == (char *)v107 )
        {
          SSL_SESSION_free(v87);
LABEL_67:
          if ( *(uint32_t *)(v85 + 548) != 0 )
          {
            v11 = sub_1A50250((int)(uintptr_t)(v5), (int *)v6, 1);
            if ( v11 != nullptr )
              return (char)(uintptr_t)(v11);
          }
          else
          {
            sub_1A50250((int)(uintptr_t)(v5), (int *)v6, 0);
          }
          *(uint32_t *)(v6 + 20) = 5;
          goto LABEL_70;
        }
        Curl_infof(v85, "old SSL session ID is stale, removing\n");
        Curl_ssl_delsessionid((int)(uintptr_t)(v5), v107);
      }
      v30 = Curl_ssl_addsessionid((int)(uintptr_t)(v5), (int)(uintptr_t)(v87), 0);
      if ( v30 != 0 )
      {
        streame = v30;
        Curl_failf(v85, "failed to store ssl session");
        LOBYTE(v11) = streame;
        return (char)(uintptr_t)(v11);
      }
      goto LABEL_67;
    }
    v9 = Curl_timeleft(v86, 0, 1);
    if ( v9 < 0 )
      goto LABEL_47;
    v10 = *(uint32_t *)(v6 + 20);
    if ( (unsigned int)(v10 - 2) <= 1 )
    {
      v12 = v10 == 3;
      v13 = -1;
      v14 = -1;
      if ( v12 )
        v13 = (int)(uintptr_t)(v88);
      else
        v14 = (int)(uintptr_t)(v88);
      if ( a3 != 0 )
        v9 = 0;
      v15 = Curl_socket_ready(v14, v13, v9);
      if ( v15 < 0 )
      {
        v24 = (uint32_t *)__errno(v17, v16);
        Curl_failf((int)(uintptr_t)(v86), "select/poll on SSL socket, errno: %d", *v24);
        LOBYTE(v11) = 35;
        return (char)(uintptr_t)(v11);
      }
      if ( v15 == 0 )
        break;
    }
    LOBYTE(v11) = sub_1A4F2E0(v5, v4);
    if ( v11 == nullptr )
    {
      v7 = *(char **)(v6 + 20);
      v8 = (unsigned int)(uintptr_t)(v7 - 1);
      if ( a3 == 0 || v8 > 2 )
        continue;
    }
    return (char)(uintptr_t)(v11);
  }
  if ( a3 != 0 )
  {
    *a4 = 0;
    LOBYTE(v11) = 0;
    return (char)(uintptr_t)(v11);
  }
LABEL_47:
  Curl_failf((int)(uintptr_t)(v86), "SSL connection timeout");
  LOBYTE(v11) = 28;
  return (char)(uintptr_t)(v11);
}

// ----------------------------------------------------------------------------
// Function: sub_1A53B60  (binary VA: 0x1a53b60)
// Original: sub_1A53B60
// ----------------------------------------------------------------------------
int sub_1A53B60(int a1)
{
  const char **i;
  const char *s;
  int v3;
  int v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10[256];
  typedef uint8_t _g4_t_v11[284];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v10)) > _g4_s2 ? (32u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (288u + sizeof(_g4_t_v11)) > _g4_s3 ? (288u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 288u);

  for ( i = *(const char ***)(a1 + 936); i != nullptr; i = (const char **)i[1] )
  {
    s = *i;
    if ( *i != nullptr && *s != 45 && sscanf(s, "%255[^:]:%d:%255s", v10, &v9, v11) == 3 )
    {
      v3 = (int)(uintptr_t)(Curl_str2addr(v11, v9));
      if ( v3 != 0 )
      {
        v7 = v3;
        Curl_infof(a1, "Added %s:%d:%s to DNS cache\n", v10, v9, v11);
        v4 = v7;
        if ( *(uint32_t *)(a1 + 16) != 0 )
        {
          Curl_share_lock(a1, 3, 2);
          v4 = v7;
        }
        v5 = Curl_cache_addr((int **)a1, v4, v10, v9);
        if ( *(uint32_t *)(a1 + 16) != 0 )
          Curl_share_unlock(a1, 3);
        if ( v5 == 0 )
          return 27;
      }
      else
      {
        Curl_infof(a1, "Resolve %s found illegal!\n", *i);
      }
    }
  }
  *(uint32_t *)(a1 + 936) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A56290  (binary VA: 0x1a56290)
// Original: sub_1A56290
// ----------------------------------------------------------------------------
int sub_1A56290(int a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  char v19; // di
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  const char *v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef int *_g4_t_v42;
  typedef char *_g4_t_v43[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v35)) > _g4_s5 ? (16u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v36)) > _g4_s6 ? (20u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v37)) > _g4_s7 ? (24u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (31u + sizeof(_g4_t_v38)) > _g4_s8 ? (31u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v39)) > _g4_s9 ? (32u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (54u + sizeof(_g4_t_v40)) > _g4_s10 ? (54u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (55u + sizeof(_g4_t_v41)) > _g4_s11 ? (55u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v42)) > _g4_s12 ? (56u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v43)) > _g4_s13 ? (60u + sizeof(_g4_t_v43)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 31u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 54u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 55u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);

  *(uint32_t *)(a1 + 1188) = 1;
  v42 = nullptr;
  v43[0] = nullptr;
  v2 = Curl_pretransfer(a1);
  if ( v2 != 0 )
    return v2;
  v35 = a1;
LABEL_3:
  v41 = 1;
  Curl_pgrsTime(v35, 7);
  v2 = Curl_connect(v35, &v42, &v40, &v41);
  if ( v2 != 0 )
  {
LABEL_35:
    v16 = v35;
    goto LABEL_36;
  }
  if ( v40 != 0 )
  {
    v16 = v35;
    LOWORD(v2) = 6;
    Curl_disconnect(v42, 0);
    goto LABEL_36;
  }
  if ( *(uint8_t *)(v35 + 701) != 0 )
    goto LABEL_101;
  v2 = Curl_do(&v42, &v40);
  if ( v2 == 0 )
  {
    v36 = (uint32_t *)(v42);
    v3 = *v42;
    if ( *(uint8_t *)(*v42 + 896) != 0 )
    {
      v4 = *(uint32_t *)(v3 + 34272);
      if ( v4 == 4 || v4 == 6 )
      {
LABEL_101:
        v16 = v35;
        *((uint8_t *)v42 + 436) = 0;
        v2 = Curl_done(&v42, 0, 0);
        goto LABEL_36;
      }
    }
    v41 = 0;
    v5 = v42[123];
    if ( v5 == -1 && v42[124] == -1 || (v38 = 1, *(uint8_t *)(v3 + 258) == 0) && *(uint8_t *)(v3 + 667) != 0 )
    {
LABEL_60:
      v18 = Curl_retry_request((int)(uintptr_t)(v36), v43);
      goto LABEL_61;
    }
    while ( 1 )
    {
      v6 = *(uint32_t *)(v3 + 232);
      v7 = v36[253];
      v8 = v36[124];
      if ( v7 != 0 )
        LOBYTE(v6) = v6 & 0xFC | v7 & 3;
      v39 = v6 & 2;
      if ( (v6 & 2) != 0 && (*(uint64_t *)(v3 + 456) == 0 || *(uint64_t *)(v3 + 456) > *(uint64_t *)(v3 + 1016)) )
      {
        v9 = 1000;
        *(uint32_t *)(v3 + 232) &= ~8u;
        goto LABEL_17;
      }
      v9 = 1000;
      if ( *(uint8_t *)(v3 + 669) == 0 || *(uint64_t *)(v3 + 456) == 0 )
        goto LABEL_54;
      if ( *(uint64_t *)(v3 + 456) >= *(uint64_t *)(v3 + 1016) )
        break;
      v28 = *(uint32_t *)(v3 + 608);
      v34 = v6;
      if ( v28 == 0 )
        v28 = 0x4000;
      v9 = Curl_sleep_time(*(uint64_t *)(v3 + 456), *(uint64_t *)(v3 + 1016), v28);
      LOBYTE(v6) = v34;
      if ( v9 >= 1000 )
        v9 = 1000;
      v8 = -1;
      if ( v39 != 0 )
LABEL_55:
        *(uint32_t *)(v3 + 232) |= 8u;
LABEL_17:
      v37 = v6 & 1;
      if ( (v6 & 1) != 0 && (*(uint64_t *)(v3 + 464) == 0 || *(uint64_t *)(v3 + 464) > *(uint64_t *)(v3 + 1008)) )
      {
        v10 = *(uint32_t *)(v3 + 232) & 0xFFFFFFFB;
        *(uint32_t *)(v3 + 232) = v10;
        goto LABEL_20;
      }
      if ( *(uint8_t *)(v3 + 669) == 0 && *(uint64_t *)(v3 + 464) != 0 && *(uint64_t *)(v3 + 464) < *(uint64_t *)(v3 + 1008) )
      {
        v26 = 0x4000;
        if ( *(uint32_t *)(v3 + 608) != 0 )
          v26 = *(uint32_t *)(v3 + 608);
        v33 = v9;
        v27 = Curl_sleep_time(*(uint64_t *)(v3 + 464), *(uint64_t *)(v3 + 1008), v26);
        v9 = v33;
        if ( v27 < v33 )
          v9 = v27;
        v10 = *(uint32_t *)(v3 + 232);
        if ( v37 == 0 )
          goto LABEL_48;
LABEL_47:
        v10 |= 4u;
        *(uint32_t *)(v3 + 232) = v10;
        goto LABEL_48;
      }
      v10 = *(uint32_t *)(v3 + 232);
      if ( (v6 & 1) != 0 )
        goto LABEL_47;
LABEL_48:
      v5 = -1;
LABEL_20:
      if ( (v10 & 0x10) != 0 )
        v5 = -1;
      if ( (v10 & 0x20) != 0 )
        v8 = -1;
      if ( v38 == 0 || v8 == -1 && v5 == -1 )
      {
        v30 = v9;
        v11 = Curl_timeleft(v3, v3 + 76, 0);
        v12 = v30;
        if ( v11 < 0 )
        {
          v16 = v35;
          v22 = 28;
          goto LABEL_78;
        }
        if ( v11 != 0 && v11 < v30 )
          v12 = v11;
      }
      else
      {
        v12 = 0;
      }
      if ( Curl_socket_ready(v5, v8, v12) == -1 )
      {
        if ( *(uint32_t *)__errno(v14, v13) != 4 )
        {
          v36 = (uint32_t *)(v42);
          v2 = 56;
          goto LABEL_60;
        }
      }
      else
      {
        v15 = Curl_readwrite((int)(uintptr_t)(v36), (bool *)&v41);
        if ( v15 != 0 )
        {
          if ( v15 != 56 )
          {
            v22 = v15;
            v16 = v35;
            goto LABEL_78;
          }
          v2 = 56;
          v18 = Curl_retry_request((int)(uintptr_t)(v42), v43);
LABEL_61:
          if ( v18 != 0 )
          {
            v16 = v35;
            v22 = v18;
            goto LABEL_78;
          }
          if ( v43[0] == nullptr )
          {
            if ( v2 != 0 )
            {
              v16 = v35;
              v22 = v2;
            }
            else if ( *(uint32_t *)(v35 + 244) != 0 )
            {
              v43[0] = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(v35 + 244)));
              if ( v43[0] != nullptr )
              {
                v19 = 1;
                v20 = 3;
                goto LABEL_64;
              }
              v16 = v35;
              v22 = 27;
            }
            else
            {
              if ( *(uint32_t *)(v35 + 240) == 0 )
              {
                v19 = 0;
                v20 = 0;
                goto LABEL_64;
              }
              v43[0] = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(v35 + 240)));
              if ( v43[0] != nullptr )
              {
                v19 = 1;
                v20 = 1;
                goto LABEL_64;
              }
              v16 = v35;
              v22 = 27;
            }
LABEL_78:
            v23 = (int)(uintptr_t)(v42);
            v24 = v42[77];
            *((uint8_t *)v42 + 436) = 1;
            if ( v24 != -1 )
            {
              v31 = v22;
              Curl_closesocket(v23, v24);
              v42[77] = -1;
              v22 = v31;
            }
            v32 = v22;
            Curl_done(&v42, v22, 0);
            v25 = v32;
            goto LABEL_81;
          }
          v19 = 1;
          v20 = 2;
LABEL_64:
          v21 = Curl_done(&v42, 0, 0);
          if ( v19 == 0 || v21 != 0 )
          {
            v16 = v35;
            v25 = v21;
LABEL_81:
            v2 = v25;
            goto LABEL_36;
          }
          v2 = Curl_follow(v35, v43[0], v20);
          if ( v2 != 0 )
            goto LABEL_35;
          v43[0] = nullptr;
          if ( v20 == 1 )
            return Curl_posttransfer();
          goto LABEL_3;
        }
        v38 = 0;
      }
      if ( v41 != 0 )
      {
        v2 = 0;
        v18 = Curl_retry_request((int)(uintptr_t)(v42), v43);
        goto LABEL_61;
      }
      v5 = v36[123];
    }
    v9 = 1000;
LABEL_54:
    v8 = -1;
    if ( (v6 & 2) != 0 )
      goto LABEL_55;
    goto LABEL_17;
  }
  v16 = v35;
  if ( v42 != nullptr )
    Curl_done(&v42, v2, 0);
LABEL_36:
  if ( v43[0] != nullptr )
    ((void (*)(char *))Curl_cfree)(v43[0]);
  if ( v2 == 0 )
    return Curl_posttransfer();
  if ( *(uint8_t *)(v16 + 34028) == 0 )
  {
    v29 = curl_easy_strerror(v2);
    if ( v29 != nullptr )
      Curl_failf(v16, "%s", v29);
    else
      Curl_failf(v16, "unspecified error %d", v2);
  }
  Curl_posttransfer();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A56CC0  (binary VA: 0x1a56cc0)
// Original: sub_1A56CC0
// ----------------------------------------------------------------------------
int sub_1A56CC0(int *a1, int a2)
{
  int v3;
  int v5;
  int v6;

  v3 = *a1;
  if ( v3 != 0 )
  {
    ((void (*)(int))Curl_cfree)(v3);
    *a1 = 0;
  }
  v5 = 0;
  if ( a2 != 0 )
  {
    v6 = ((int (*)(uint32_t, int))Curl_cstrdup)(0, a2);
    v5 = 27;
    if ( v6 != 0 )
    {
      *a1 = v6;
      LOBYTE(v5) = 0;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: nullsub_875  (binary VA: 0x1a56d38)
// Original: nullsub_875
// ----------------------------------------------------------------------------
void nullsub_875()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1A56D40  (binary VA: 0x1a56d40)
// Original: sub_1A56D40
// ----------------------------------------------------------------------------
char sub_1A56D40(int a1)
{
  int64_t v2; // rax
  char *v3;
  char result;

  HIDWORD(v2) = *(uint32_t *)(a1 + 472);
  LODWORD(v2) = *(uint32_t *)(a1 + 476);
  *(uint32_t *)(a1 + 34240) = HIDWORD(v2);
  *(uint32_t *)(a1 + 34244) = v2;
  if ( v2 != 0 || *(uint32_t *)(a1 + 792) != 0 )
  {
    if ( *(uint8_t *)(a1 + 34234) != 0 )
    {
      ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 34236));
      HIDWORD(v2) = *(uint32_t *)(a1 + 34240);
      LODWORD(v2) = *(uint32_t *)(a1 + 34244);
    }
    if ( v2 != 0 )
      v3 = (char *)curl_maprintf("%llu-", HIDWORD(v2), (uint32_t)v2);
    else
      v3 = (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), *(const char **)(a1 + 792)));
    *(uint32_t *)(a1 + 34236) = (uint32_t)(uintptr_t)(v3);
    result = 27;
    *(uint8_t *)(a1 + 34234) = v3 != nullptr;
    if ( v3 != nullptr )
    {
      *(uint8_t *)(a1 + 34233) = 1;
      return 0;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 34233) = 0;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A56E20  (binary VA: 0x1a56e20)
// Original: sub_1A56E20
// ----------------------------------------------------------------------------
uint32_t * sub_1A56E20(uint32_t *result, char a2)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;

  v3 = (int)(uintptr_t)(result);
  if ( result != nullptr )
  {
    result = (uint32_t *)*result;
    if ( result != nullptr )
    {
      while ( 1 )
      {
        v4 = (uint32_t *)result[2];
        v5 = (uint32_t *)*result;
        if ( a2 != 0 )
          *((uint8_t *)v5 + 34205) = 1;
        v6 = result;
        Curl_multi_handlePipeBreak(v5);
        result = (uint32_t *)Curl_llist_remove(v3, v6, 0);
        if ( v4 == nullptr )
          break;
        result = v4;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A56E90  (binary VA: 0x1a56e90)
// Original: sub_1A56E90
// ----------------------------------------------------------------------------
int sub_1A56E90(const char *a1, const char *s)
{
  char *v2;
  int result;
  size_t v4;
  bool v5; // cc
  size_t v6;
  size_t v7;
  const char *v8;
  size_t v9;
  size_t v11;

  v9 = strlen(s);
  v2 = (char *)(strchr(a1, 58));
  if ( v2 != nullptr )
    v11 = v2 - a1;
  else
    v11 = strlen(a1);
  result = 0;
  if ( v9 != 0 )
  {
    v4 = 0;
    while ( strchr(", ", s[v4]) != nullptr )
    {
      if ( v9 <= ++v4 )
      {
        result = 0;
        v5 = v9 <= v4;
        if ( v9 == v4 )
          return result;
LABEL_6:
        v6 = v4;
        if ( !v5 )
        {
          do
          {
            if ( strchr(", ", s[v6]) != nullptr )
              break;
            ++v6;
          }
          while ( v9 > v6 );
        }
        v7 = (s[v4] == 46) + v4;
        if ( v6 - v7 <= v11 )
        {
          v8 = &a1[v7 + v11 - v6];
          if ( Curl_raw_nequal(&s[v7], v8, v6 - v7) != 0 )
          {
            result = 1;
            if ( v6 - v7 == v11 || *(v8 - 1) == 46 )
              return result;
          }
        }
        v4 = v6 + 1;
        result = 0;
        if ( v9 <= v6 + 1 )
          return result;
      }
    }
    result = 0;
    v5 = v9 <= v4;
    if ( v9 == v4 )
      return result;
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A57030  (binary VA: 0x1a57030)
// Original: sub_1A57030
// ----------------------------------------------------------------------------
int sub_1A57030(int result)
{
  int *v1;

  v1 = (int *)result;
  if ( result != 0 )
  {
    Curl_ssl_close(result, 0);
    Curl_ssl_close((int)(uintptr_t)(v1), 1);
    if ( v1[77] != -1 )
      Curl_closesocket(v1, v1[77]);
    if ( v1[76] != -1 )
      Curl_closesocket(v1, v1[76]);
    Curl_safefree(v1[65]);
    Curl_safefree(v1[66]);
    Curl_safefree(v1[67]);
    Curl_safefree(v1[68]);
    Curl_safefree(v1[125]);
    Curl_safefree(v1[126]);
    Curl_safefree(v1[128]);
    Curl_safefree(v1[127]);
    Curl_safefree(v1[134]);
    Curl_safefree(v1[129]);
    Curl_safefree(v1[130]);
    Curl_safefree(v1[131]);
    Curl_safefree(v1[132]);
    Curl_safefree(v1[133]);
    Curl_safefree(v1[220]);
    Curl_safefree(v1[30]);
    Curl_safefree(v1[34]);
    Curl_safefree(v1[141]);
    Curl_llist_destroy(v1[137], 0);
    Curl_llist_destroy(v1[138], 0);
    Curl_llist_destroy(v1[139], 0);
    Curl_llist_destroy(v1[140], 0);
    Curl_safefree(v1[256]);
    Curl_free_ssl_config(v1 + 94);
    return ((int (*)(int *))Curl_cfree)(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A57220  (binary VA: 0x1a57220)
// Original: sub_1A57220
// ----------------------------------------------------------------------------
int sub_1A57220(const char *s, int *a2, int *a3)
{
  char *v4;
  char *v5;
  uint8_t *v6;
  uint8_t *v7;
  size_t n;

  if ( s != nullptr )
  {
    v4 = (char *)(strchr(s, 58));
    v5 = v4;
    if ( v4 != nullptr )
    {
      n = v4 - s;
      v6 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v4 - s + 1);
      v7 = v6;
      if ( v6 != nullptr )
      {
        memcpy(v6, s, n);
        v7[n] = 0;
        Curl_safefree(*a2);
        *a2 = (int)(uintptr_t)(v7);
        return sub_1A56CC0(a3, (int)(uintptr_t)(v5 + 1));
      }
      else
      {
        return 27;
      }
    }
    else
    {
      return sub_1A56CC0(a2, (int)(uintptr_t)(s));
    }
  }
  else
  {
    Curl_safefree(*a2);
    *a2 = 0;
    Curl_safefree(*a3);
    *a3 = 0;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A579F0  (binary VA: 0x1a579f0)
// Original: sub_1A579F0
// ----------------------------------------------------------------------------
int sub_1A579F0(int a1)
{
  int v1;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v1 = -1;
  curlx_tvnow(v12);
  v10 = v12[0];
  v3 = *(uint32_t **)(a1 + 1192);
  v11 = v12[1];
  if ( v3 != nullptr && (int)v3[1] > 0 )
  {
    v9 = -1;
    v4 = 0;
    do
    {
      v5 = *(uint32_t *)(*v3 + 4 * v4);
      if ( v5 != 0 && *(uint8_t *)(v5 + 48) == 0 )
      {
        v6 = curlx_tvdiff(v10, v11, *(uint32_t *)(v5 + 288), *(uint32_t *)(v5 + 292));
        if ( v9 < v6 )
        {
          v1 = v4;
          v9 = v6;
        }
        v3 = *(uint32_t **)(a1 + 1192);
        if ( v3 == nullptr )
          break;
      }
      ++v4;
    }
    while ( v3[1] > v4 );
    if ( v1 != -1 )
    {
      v7 = *(uint32_t **)(*v3 + 4 * v1);
      *v7 = a1;
      Curl_disconnect((int)(uintptr_t)(v7), 0);
      *(uint32_t *)(**(uint32_t **)(a1 + 1192) + 4 * v1) = 0;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A57AF0  (binary VA: 0x1a57af0)
// Original: sub_1A57AF0
// ----------------------------------------------------------------------------
void sub_1A57AF0(int a1, int a2)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;

  v3 = *(uint32_t *)(a1 + 1192);
  v4 = *(uint32_t *)(v3 + 4);
  if ( v4 > 0 )
  {
    v5 = *(uint32_t **)v3;
    v6 = 0;
    if ( *v5 == 0 )
    {
LABEL_8:
      *(uint32_t *)(a2 + 52) = v6;
      *(uint8_t *)(a2 + 48) = 1;
      if ( v6 == -1 )
        return;
      goto LABEL_9;
    }
    while ( ++v6 != v4 )
    {
      if ( v5[v6] == 0 )
        goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( v4 == 0 )
  {
LABEL_6:
    v7 = a2;
    v6 = sub_1A579F0(a1);
    if ( v6 == -1 )
    {
      Curl_infof(a1, "This connection did not fit in the connection cache\n");
      *(uint32_t *)(v7 + 52) = -1;
      *(uint8_t *)(v7 + 48) = 1;
      return;
    }
    Curl_infof(
      a1,
      "Connection (#%ld) was killed to make room (holds %ld)\n",
      v6,
      *(uint32_t *)(*(uint32_t *)(a1 + 1192) + 4));
    a2 = v7;
    *(uint32_t *)(v7 + 52) = v6;
    *(uint8_t *)(v7 + 48) = 1;
    goto LABEL_9;
  }
  *(uint32_t *)(a2 + 52) = 0;
  *(uint8_t *)(a2 + 48) = 1;
  v6 = 0;
LABEL_9:
  *(uint32_t *)(**(uint32_t **)(a1 + 1192) + 4 * v6) = a2;
  *(uint32_t *)a2 = a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A57BE0  (binary VA: 0x1a57be0)
// Original: sub_1A57BE0
// ----------------------------------------------------------------------------
int sub_1A57BE0(int a1, int *a2, uint8_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  uint8_t *v8;
  char v9;
  int v10;
  int v11;
  int v12;
  size_t v13;
  int v14;
  int v15;
  uint8_t *v16;
  int v17;
  const char *s;
  char *v19;
  char *v20;
  size_t v21;
  char v22;
  int v23;
  char *v24;
  char ***v25;
  char **v26;
  unsigned int v27;
  const char *v28;
  char *v29;
  const char *v30;
  int v31;
  int v32;
  uint8_t *v33;
  char *v34;
  char *v35;
  int v36;
  int v37;
  char *v38;
  int v39;
  char **v40;
  char *v41;
  int v42;
  int v43;
  char *v44;
  int v45;
  char v46;
  const char *v47;
  const char *v48;
  const char *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v55;
  char *v56;
  const char *v57;
  size_t v58;
  char *v59;
  unsigned int v60;
  int v61;
  size_t v62;
  bool v63;
  const char *v64;
  const char *v65;
  const char *v66;
  const char *v67;
  const char *v68;
  unsigned int v69;
  size_t v70;
  char *v71;
  int v72;
  uint8_t v73;
  const char *v74;
  char *v75;
  char *v76;
  int v77;
  char **v78;
  char *v79;
  char *v80;
  char v81;
  uint32_t *v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int *v87;
  int v88;
  int v89;
  int *v90;
  int v91;
  int v92;
  const char *v93;
  char v94;
  char v95;
  int v96;
  uint8_t *v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  typedef char *_g4_t_n;
  typedef char _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef void *_g4_t_src;
  typedef char *_g4_t_srcb;
  typedef uint8_t _g4_t_srca;
  typedef unsigned int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef const char *_g4_t_haystack;
  typedef char *_g4_t_haystacka;
  typedef char *_g4_t_haystackb;
  typedef char *_g4_t_haystackc;
  typedef size_t _g4_t_v117;
  typedef char *_g4_t_v118;
  typedef char _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char *_g4_t_v121;
  typedef char *_g4_t_v122;
  typedef char *_g4_t_v123;
  typedef char *_g4_t_v124;
  typedef uint32_t _g4_t_v125[4];
  typedef char _g4_t_v126;
  typedef char *_g4_t_endptr;
  typedef char _g4_t_v128[256];
  typedef char _g4_t_v129[256];
  typedef char _g4_t_dest[256];
  typedef char _g4_t_v131[284];
  enum : size_t {
    _g4_s0 = 1232u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_na)) > _g4_s1 ? (8u + sizeof(_g4_t_na)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_nb)) > _g4_s2 ? (8u + sizeof(_g4_t_nb)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_src)) > _g4_s3 ? (56u + sizeof(_g4_t_src)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_srcb)) > _g4_s4 ? (56u + sizeof(_g4_t_srcb)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_srca)) > _g4_s5 ? (56u + sizeof(_g4_t_srca)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v109)) > _g4_s6 ? (60u + sizeof(_g4_t_v109)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v110)) > _g4_s7 ? (60u + sizeof(_g4_t_v110)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_haystack)) > _g4_s8 ? (72u + sizeof(_g4_t_haystack)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_haystacka)) > _g4_s9 ? (72u + sizeof(_g4_t_haystacka)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_haystackb)) > _g4_s10 ? (72u + sizeof(_g4_t_haystackb)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_haystackc)) > _g4_s11 ? (72u + sizeof(_g4_t_haystackc)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v117)) > _g4_s12 ? (76u + sizeof(_g4_t_v117)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v118)) > _g4_s13 ? (76u + sizeof(_g4_t_v118)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v119)) > _g4_s14 ? (76u + sizeof(_g4_t_v119)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v120)) > _g4_s15 ? (80u + sizeof(_g4_t_v120)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v121)) > _g4_s16 ? (80u + sizeof(_g4_t_v121)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v122)) > _g4_s17 ? (80u + sizeof(_g4_t_v122)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v123)) > _g4_s18 ? (80u + sizeof(_g4_t_v123)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v124)) > _g4_s19 ? (84u + sizeof(_g4_t_v124)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v125)) > _g4_s20 ? (88u + sizeof(_g4_t_v125)) : _g4_s20,
    _g4_s22 = (107u + sizeof(_g4_t_v126)) > _g4_s21 ? (107u + sizeof(_g4_t_v126)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_endptr)) > _g4_s22 ? (108u + sizeof(_g4_t_endptr)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v128)) > _g4_s23 ? (112u + sizeof(_g4_t_v128)) : _g4_s23,
    _g4_s25 = (368u + sizeof(_g4_t_v129)) > _g4_s24 ? (368u + sizeof(_g4_t_v129)) : _g4_s24,
    _g4_s26 = (624u + sizeof(_g4_t_dest)) > _g4_s25 ? (624u + sizeof(_g4_t_dest)) : _g4_s25,
    _g4_s27 = (880u + sizeof(_g4_t_v131)) > _g4_s26 ? (880u + sizeof(_g4_t_v131)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 8u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 56u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 56u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 56u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 60u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 60u);
  _g4_t_haystack &haystack = *reinterpret_cast<_g4_t_haystack *>(_g4_sf + 72u);
  _g4_t_haystacka &haystacka = *reinterpret_cast<_g4_t_haystacka *>(_g4_sf + 72u);
  _g4_t_haystackb &haystackb = *reinterpret_cast<_g4_t_haystackb *>(_g4_sf + 72u);
  _g4_t_haystackc &haystackc = *reinterpret_cast<_g4_t_haystackc *>(_g4_sf + 72u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 76u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 76u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 76u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 80u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 80u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 80u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 80u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 84u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 88u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 107u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 108u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 112u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 368u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 624u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 880u);

  v3 = 3;
  *a3 = 0;
  if ( *(uint32_t *)(a1 + 916) == 0 )
    return v3;
  LOWORD(v3) = 27;
  v4 = ((int (*)(int, int))Curl_ccalloc)(1, 1036);
  v5 = v4;
  if ( v4 == 0 )
    return v3;
  *(uint32_t *)(v4 + 304) = -1;
  *(uint32_t *)(v4 + 480) = (uint32_t)(uintptr_t)(&off_2046780);
  *(uint32_t *)(v4 + 308) = -1;
  *(uint32_t *)(v4 + 52) = -1;
  *(uint32_t *)(v4 + 152) = -1;
  *(uint8_t *)(v4 + 436) = 1;
  curlx_tvnow(v125);
  v6 = v125[1];
  *(uint32_t *)(v5 + 296) = v125[0];
  *(uint32_t *)(v5 + 300) = v6;
  *(uint32_t *)v5 = a1;
  v7 = *(uint32_t *)(a1 + 600);
  *(uint32_t *)(v5 + 276) = v7;
  v8 = *(uint8_t **)(a1 + 788);
  if ( v8 != nullptr && *v8 != 0 )
  {
    *(uint8_t *)(v5 + 438) = 1;
    v9 = 1;
    if ( v7 <= 1 )
      goto LABEL_7;
  }
  else
  {
    *(uint8_t *)(v5 + 438) = 0;
  }
  v9 = 0;
LABEL_7:
  *(uint8_t *)(v5 + 439) = v9;
  *(uint8_t *)(v5 + 441) = *(uint32_t *)(a1 + 844) != 0;
  *(uint8_t *)(v5 + 448) = *(uint8_t *)(a1 + 654);
  *(uint8_t *)(v5 + 440) = *(uint32_t *)(a1 + 836) != 0;
  *(uint8_t *)(v5 + 452) = *(uint8_t *)(a1 + 680);
  *(uint8_t *)(v5 + 453) = *(uint8_t *)(a1 + 681);
  *(uint32_t *)(v5 + 1016) = *(uint32_t *)(a1 + 548);
  *(uint32_t *)(v5 + 1020) = *(uint32_t *)(a1 + 552);
  *(uint32_t *)(v5 + 488) = *(uint32_t *)(a1 + 624);
  if ( *(uint32_t *)(a1 + 8) == 0
    || (uint8_t)Curl_multi_canPipeline(*(uint32_t *)(a1 + 8)) == 0
    || *(uint32_t *)(v5 + 564) != 0
    || (v55 = ((int (*)(int, int))Curl_ccalloc)(0x4000, 1), *(uint32_t *)(v5 + 564) = v55, v55 != 0) )
  {
    *(uint32_t *)(v5 + 548) = (uint32_t)(uintptr_t)(Curl_llist_alloc(((uint32_t)(uintptr_t)(&g4_noop_ret0))));
    *(uint32_t *)(v5 + 552) = (uint32_t)(uintptr_t)(Curl_llist_alloc(((uint32_t)(uintptr_t)(&g4_noop_ret0))));
    *(uint32_t *)(v5 + 556) = (uint32_t)(uintptr_t)(Curl_llist_alloc(((uint32_t)(uintptr_t)(&g4_noop_ret0))));
    v10 = (int)(uintptr_t)(Curl_llist_alloc(((uint32_t)(uintptr_t)(&g4_noop_ret0))));
    v11 = *(uint32_t *)(v5 + 548);
    *(uint32_t *)(v5 + 560) = v10;
    if ( v11 == 0 || *(uint32_t *)(v5 + 552) == 0 || *(uint32_t *)(v5 + 556) == 0 || v10 == 0 )
      goto LABEL_127;
    if ( *(uint32_t *)(a1 + 744) == 0
      || (v12 = ((int (*)(uint32_t))Curl_cstrdup)(*(uint32_t *)(a1 + 744)), *(uint32_t *)(v5 + 1024) = v12, v12 != 0) )
    {
      v3 = 27;
      *(uint32_t *)(v5 + 1032) = *(uint32_t *)(a1 + 336);
      *(uint16_t *)(v5 + 1028) = *(uint16_t *)(a1 + 332);
      *(uint32_t *)(v5 + 40) = *(uint32_t *)(a1 + 392);
      *(uint32_t *)(v5 + 44) = *(uint32_t *)(a1 + 396);
      *a2 = v5;
      v13 = strlen(*(const char **)(a1 + 916));
      v14 = 258;
      if ( v13 >= 0x100 )
        v14 = v13 + 2;
      src = (void *)v14;
      Curl_safefree(*(uint32_t *)(a1 + 34224));
      v15 = ((int (*)(void *))Curl_cmalloc)(src);
      *(uint32_t *)(a1 + 34224) = v15;
      if ( v15 == 0 )
        return v3;
      *(uint32_t *)(a1 + 34228) = v15;
      v16 = (uint8_t *)((int (*)(void *))Curl_cmalloc)(src);
      *(uint32_t *)(v5 + 120) = (uint32_t)(uintptr_t)(v16);
      if ( v16 == nullptr )
        return v3;
      *(uint32_t *)(v5 + 128) = (uint32_t)(uintptr_t)(v16);
      *v16 = 0;
      v17 = *(uint32_t *)(a1 + 34228);
      n = v131;
      if ( sscanf(*(const char **)(a1 + 916), "%15[^:]:%[^\n]") == 2 && Curl_raw_equal(v131, "file") != 0 )
      {
        if ( *(uint8_t *)v17 != 47
          || (v120 = 0, haystack = "file", *(uint8_t *)(v17 + 1) == 47)
          && (memmove((void *)v17, (const void *)(v17 + 2), strlen((const char *)(v17 + 2)) + 1), *(uint8_t *)v17 != 47) )
        {
          v56 = (char *)(strchr((const char *)v17, 47));
          v120 = 0;
          haystack = "file";
          if ( v56 != nullptr )
          {
            v57 = &v56[v56[1] == 47];
            v58 = strlen(v57);
            memmove((void *)v17, v57, v58 + 1);
          }
        }
      }
      else
      {
        *(uint8_t *)v17 = 0;
        n = v131;
        v120 = 0;
        haystack = v131;
        if ( sscanf(*(const char **)(a1 + 916), "%15[^\n:]://%[^\n/?]%[^\n]") <= 1 )
        {
          nb = *(uint32_t *)(v5 + 128);
          if ( sscanf(*(const char **)(a1 + 916), "%[^\n/?]%[^\n]") <= 0 )
          {
            v3 = 3;
            Curl_failf(a1, "<url> malformed", nb);
            return v3;
          }
          v120 = 1;
          haystack = (const char *)&off_1B93428;
          if ( Curl_raw_nequal("FTP.", *(uint32_t *)(v5 + 128), 4) == 0 )
          {
            haystack = "DICT";
            if ( Curl_raw_nequal("DICT.", *(uint32_t *)(v5 + 128), 5) == 0 )
            {
              haystack = "LDAP";
              if ( Curl_raw_nequal("LDAP.", *(uint32_t *)(v5 + 128), 5) == 0 )
              {
                v63 = Curl_raw_nequal("IMAP.", *(uint32_t *)(v5 + 128), 5) == 0;
                v64 = "IMAP";
                if ( v63 )
                  v64 = "http";
                haystack = v64;
              }
            }
          }
        }
      }
      s = *(const char **)(v5 + 128);
      v19 = (char *)(strchr(s, 64));
      if ( v19 != nullptr )
        v20 = strchr(v19 + 1, 63);
      else
        v20 = (char *)(strchr(s, 63));
      if ( v20 != nullptr )
      {
        v117 = strlen(v20);
        v21 = strlen((const char *)v17);
        memmove((void *)(v17 + v117 + 1), (const void *)v17, v21 + 1);
        memcpy((void *)(v17 + 1), v20, v117);
        *(uint8_t *)v17 = 47;
        *v20 = 0;
        v22 = *(uint8_t *)v17;
      }
      else
      {
        v22 = *(uint8_t *)v17;
        if ( *(uint8_t *)v17 == 0 )
        {
          *(uint16_t *)v17 = 47;
          v22 = 47;
        }
      }
      if ( v22 == 63 )
      {
        v62 = strlen((const char *)v17);
        memmove((void *)(v17 + 1), (const void *)v17, v62 + 1);
        *(uint8_t *)v17 = 47;
      }
      if ( **(uint8_t **)(v5 + 128) == 91 )
      {
        v59 = (char *)(strstr(*(const char **)(v5 + 128), "%25"));
        if ( v59 != nullptr )
        {
          v60 = strtoul(v59 + 3, &endptr, 10);
          if ( *endptr == 93 )
          {
            srcb = endptr;
            v109 = v60;
            v70 = strlen(endptr);
            memmove(v59, srcb, v70 + 1);
            if ( *(uint8_t *)(a1 + 33996) == 0 )
              *(uint32_t *)(v5 + 112) = v109;
          }
          else
          {
            Curl_infof(a1, "Invalid IPv6 address format\n", na);
          }
        }
      }
      v23 = *(uint32_t *)(a1 + 872);
      if ( v23 != 0 )
        *(uint32_t *)(v5 + 112) = v23;
      v24 = (char *)(strchr((const char *)v17, 35));
      if ( v24 != nullptr )
        *v24 = 0;
      v25 = (char ***)(uintptr_t)(((uint32_t)(uintptr_t)&off_20B0D78));
      v26 = (char **)(&Curl_handler_http);
      while ( Curl_raw_equal(*v26, haystack) == 0 )
      {
        v26 = *++v25;
        if ( *v25 == nullptr )
          goto LABEL_124;
      }
      v27 = (unsigned int)(uintptr_t)(v26[14]);
      if ( (v27 & *(uint32_t *)(a1 + 876)) == 0 || *(uint8_t *)(a1 + 33996) != 0 && (v27 & *(uint32_t *)(a1 + 880)) == 0 )
      {
LABEL_124:
        v3 = 1;
        Curl_failf(a1, "Protocol %s not supported or disabled in libcurl", (char)(uintptr_t)(haystack));
        return v3;
      }
      *(uint32_t *)(v5 + 484) = (uint32_t)(uintptr_t)(v26);
      *(uint32_t *)(v5 + 480) = (uint32_t)(uintptr_t)(v26);
      if ( v120 != 0 )
      {
        n = *(char **)(a1 + 916);
        v61 = curl_maprintf("%s://%s", *v26);
        if ( v61 == 0 )
        {
          v3 = 27;
          Curl_safefree(0);
          return v3;
        }
        *(uint32_t *)(a1 + 916) = v61;
        *(uint8_t *)(a1 + 920) = 1;
      }
      v28 = *(const char **)(v5 + 128);
      v29 = (char *)(strchr(v28, 64));
      v128[0] = 0;
      v129[0] = 0;
      if ( v29 != nullptr )
      {
        *(uint8_t *)(v5 + 455) = 1;
        *(uint32_t *)(v5 + 128) = (uint32_t)(uintptr_t)(v29 + 1);
        if ( *(uint32_t *)(a1 + 672) != 2 )
        {
          *(uint8_t *)(v5 + 440) = 1;
          if ( *v28 == 58 )
          {
            n = v129;
            sscanf(v28, ":%255[^@]");
          }
          else
          {
            n = v128;
            sscanf(v28, "%255[^:@]:%255[^@]");
          }
          if ( v128[0] != 0 )
          {
            v65 = (const char *)curl_easy_unescape(a1, v128, 0, 0);
            v66 = v65;
            v3 = 27;
            if ( v65 == nullptr )
              return v3;
            if ( strlen(v65) <= 0xFF )
              strcpy(v128, v66);
            ((void (*)(const char *))Curl_cfree)(v66);
          }
          if ( v129[0] != 0 )
          {
            v67 = (const char *)curl_easy_unescape(a1, v129, 0, 0);
            v68 = v67;
            v3 = 27;
            if ( v67 == nullptr )
              return v3;
            if ( strlen(v67) <= 0xFF )
              strcpy(v129, v68);
            ((void (*)(const char *))Curl_cfree)(v68);
          }
        }
      }
      if ( *(uint8_t *)(v5 + 441) != 0 )
      {
        memset(dest, 0, sizeof(dest));
        memset(v131, 0, 256);
        v30 = *(const char **)(a1 + 844);
        if ( v30 != nullptr )
        {
          strncpy(dest, v30, 0x100u);
          dest[255] = 0;
        }
        if ( *(uint32_t *)(a1 + 848) != 0 )
        {
          strncpy(v131, *(const char **)(a1 + 848), 0x100u);
          v131[255] = 0;
        }
        v3 = 27;
        v31 = (int)(uintptr_t)(curl_easy_unescape(a1, dest, 0, 0));
        *(uint32_t *)(v5 + 268) = v31;
        if ( v31 == 0 )
          return v3;
        v32 = (int)(uintptr_t)(curl_easy_unescape(a1, v131, 0, 0));
        *(uint32_t *)(v5 + 272) = v32;
        if ( v32 == 0 )
          return v3;
      }
      if ( *(uint32_t *)(a1 + 788) != 0 )
      {
        haystacka = (char *)((int (*)(uint32_t))Curl_cstrdup)(*(uint32_t *)(a1 + 788));
        if ( haystacka == nullptr )
        {
          v3 = 27;
          Curl_failf(a1, "memory shortage", (char)(uintptr_t)(n));
          return v3;
        }
      }
      else
      {
        haystacka = nullptr;
      }
      v33 = *(uint8_t **)(a1 + 852);
      if ( v33 != nullptr
        && *v33 != 0
        && (Curl_raw_equal("*", *(uint32_t *)(a1 + 852)) != 0 || (uint8_t)sub_1A56E90() != 0) )
      {
        if ( haystacka == nullptr )
        {
LABEL_140:
          *(uint8_t *)(v5 + 438) = 0;
          *(uint8_t *)(v5 + 439) = 0;
          *(uint8_t *)(v5 + 441) = 0;
          *(uint8_t *)(v5 + 448) = 0;
          v40 = *(char ***)(v5 + 480);
          haystacka = nullptr;
          goto LABEL_75;
        }
LABEL_139:
        ((void (*)(char *))Curl_cfree)(haystacka);
        goto LABEL_140;
      }
      if ( haystacka == nullptr )
      {
        v123 = (char *)curl_getenv("no_proxy");
        if ( (v123 != nullptr || (v123 = (char *)curl_getenv("NO_PROXY")) != nullptr)
          && *v123 != 0
          && (Curl_raw_equal("*", v123) != 0 || (uint8_t)sub_1A56E90() != 0) )
        {
          goto LABEL_225;
        }
        v78 = *(char ***)(v5 + 480);
        v79 = v131;
        haystackb = v131;
        v80 = *v78;
        v81 = **v78;
        if ( v81 != 0 )
        {
          do
          {
            ++v80;
            *v79++ = tolower(v81);
            v81 = *v80;
          }
          while ( *v80 != 0 );
          haystackb = v79;
        }
        strcpy(haystackb, "_proxy");
        haystacka = (char *)curl_getenv(v131);
        if ( haystacka == nullptr
          && (Curl_raw_equal("http_proxy", v131) != 0
           || (Curl_strntoupper(v131, v131, 128), (haystacka = (char *)curl_getenv(v131)) == nullptr))
          || *haystacka == 0 )
        {
          haystacka = (char *)curl_getenv("all_proxy");
          if ( haystacka == nullptr )
            haystacka = (char *)curl_getenv("ALL_PROXY");
        }
        if ( v123 != nullptr )
LABEL_225:
          ((void (*)(char *))Curl_cfree)(v123);
        if ( haystacka == nullptr )
          goto LABEL_140;
      }
      if ( *haystacka == 0 || (*(uint8_t *)(*(uint32_t *)(v5 + 480) + 60) & 0x10) != 0 )
        goto LABEL_139;
      v34 = strstr(haystacka, "://");
      v35 = haystacka;
      if ( v34 != nullptr )
      {
        v35 = v34 + 3;
        if ( Curl_raw_nequal("socks5h", haystacka, 7) != 0 )
        {
          *(uint32_t *)(v5 + 276) = 7;
        }
        else if ( Curl_raw_nequal("socks5", haystacka, 6) != 0 )
        {
          *(uint32_t *)(v5 + 276) = 5;
        }
        else if ( Curl_raw_nequal("socks4a", haystacka, 7) != 0 )
        {
          *(uint32_t *)(v5 + 276) = 6;
        }
        else if ( Curl_raw_nequal("socks4", haystacka, 6) != 0 )
        {
          *(uint32_t *)(v5 + 276) = 4;
        }
      }
      v118 = strchr(v35, 64);
      if ( v118 != nullptr && (v131[0] = 0, n = dest, sscanf(v35, "%255[^:@]:%255[^@]") > 0) )
      {
        Curl_safefree(*(uint32_t *)(v5 + 268));
        v36 = (int)(uintptr_t)(curl_easy_unescape(a1, dest, 0, 0));
        *(uint32_t *)(v5 + 268) = v36;
        if ( v36 == 0
          || (Curl_safefree(*(uint32_t *)(v5 + 272)),
              v37 = (int)(uintptr_t)(curl_easy_unescape(a1, v131, 0, 0)),
              *(uint32_t *)(v5 + 272) = v37,
              v37 == 0)
          || (*(uint8_t *)(v5 + 441) = 1, (v35 = (char *)((int (*)(char *))Curl_cstrdup)(v118 + 1)) == nullptr) )
        {
          v3 = 27;
          ((void (*)(char *))Curl_cfree)(haystacka);
          return v3;
        }
        ((void (*)(char *))Curl_cfree)(haystacka);
        v124 = v35;
      }
      else
      {
        v124 = haystacka;
      }
      v121 = v35;
      if ( *v35 == 91 )
      {
        v73 = v35[1];
        v121 = ++v35;
        if ( v73 == 0 )
          goto LABEL_181;
        while ( 1 )
        {
          srca = v73;
          if ( isxdigit(v73) == 0 && srca != 58 && srca != 37 && srca != 46 )
            break;
          v73 = *++v35;
          if ( *v35 == 0 )
            goto LABEL_181;
        }
        if ( srca == 93 )
          *v35++ = 0;
        else
LABEL_181:
          Curl_infof(a1, "Invalid IPv6 address format\n", (char)(uintptr_t)(n));
      }
      v38 = strchr(v35, 58);
      if ( v38 != nullptr )
      {
        *v38 = 0;
        *(uint32_t *)(v5 + 152) = strtol(v38 + 1, nullptr, 10);
      }
      else
      {
        v71 = strchr(v121, 47);
        if ( v71 != nullptr )
          *v71 = 0;
        v72 = *(uint32_t *)(a1 + 272);
        if ( v72 != 0 )
          *(uint32_t *)(v5 + 152) = v72;
      }
      v3 = 27;
      v39 = ((int (*)(char *))Curl_cstrdup)(v121);
      *(uint32_t *)(v5 + 136) = v39;
      *(uint32_t *)(v5 + 144) = v39;
      ((void (*)(char *))Curl_cfree)(v124);
      if ( *(uint32_t *)(v5 + 136) == 0 )
        return v3;
      v40 = *(char ***)(v5 + 480);
      if ( *(uint32_t *)(v5 + 276) <= 1u )
      {
        if ( ((uint8_t)(uintptr_t)(v40)[14] & 1) == 0 )
        {
          *(uint32_t *)(v5 + 480) = (uint32_t)(uintptr_t)(&Curl_handler_http);
          v40 = (char **)(&Curl_handler_http);
        }
        *(uint8_t *)(v5 + 439) = 1;
      }
      *(uint8_t *)(v5 + 438) = 1;
LABEL_75:
      *(uint32_t *)(v5 + 116) = 1;
      v41 = v40[1];
      if ( v41 != nullptr )
      {
        v3 = ((int (*)(int))v41)(v5);
        if ( v3 != 0 )
        {
          Curl_safefree(haystacka);
          return v3;
        }
        v40 = *(char ***)(v5 + 480);
      }
      if ( *(int *)(v5 + 152) < 0 )
        *(uint32_t *)(v5 + 152) = (uint32_t)(uintptr_t)(v40[13]);
      v42 = *(uint32_t *)(v5 + 484);
      v43 = *(uint32_t *)(v42 + 52);
      *(uint32_t *)(v5 + 320) = (uint32_t)(uintptr_t)(((ssize_t (*)(int *, int, void *, size_t, uint32_t *))Curl_send_plain));
      *(uint16_t *)(v5 + 156) = v43;
      *(uint32_t *)(v5 + 312) = (uint32_t)(uintptr_t)(Curl_recv_plain);
      *(uint32_t *)(v5 + 316) = (uint32_t)(uintptr_t)(Curl_recv_plain);
      *(uint32_t *)(v5 + 324) = (uint32_t)(uintptr_t)(((ssize_t (*)(int *, int, void *, size_t, uint32_t *))Curl_send_plain));
      if ( ((uint8_t)(uintptr_t)(v40)[15] & 0x10) != 0 )
      {
        v3 = ((int (*)(int, char **))v40[5])(v5, &endptr);
        if ( v3 == 0 )
        {
          *(uint32_t *)v5 = a1;
          *(uint8_t *)(v5 + 445) = 1;
          sub_1A57AF0();
          v3 = sub_1A56D40();
          if ( v3 != 0 )
            (*(void (**)(int, int, uint32_t))(*(uint32_t *)(v5 + 480) + 12))(v5, v3, 0);
          else
            Curl_setup_transfer(v5, -1, -1, -1, 0, 0, -1, 0);
        }
        return v3;
      }
      if ( (*(uint8_t *)(v42 + 60) & 1) != 0 && *(uint8_t *)(v5 + 439) != 0 )
        *(uint8_t *)(v5 + 448) = 1;
      if ( sscanf(*(const char **)(v5 + 128), "[%*45[0123456789abcdefABCDEF:.]%c", &v126) == 1 && v126 == 93 )
      {
        v74 = *(const char **)(v5 + 128);
        *(uint8_t *)(v5 + 442) = 1;
        *(uint32_t *)(v5 + 128) = (uint32_t)(uintptr_t)(++v74);
        v75 = (char *)(strchr(v74, 93));
        v44 = v75;
        if ( v75 != nullptr )
        {
          *v75 = 0;
          v63 = v75[1] == 58;
          v44 = nullptr;
          v76 = v75 + 1;
          if ( v63 )
            v44 = v76;
        }
      }
      else
      {
        v44 = (char *)(strrchr(*(const char **)(v5 + 128), 58));
      }
      v45 = *(uint32_t *)(a1 + 292);
      if ( v45 != 0 && *(uint8_t *)(a1 + 34036) != 0 )
      {
        *(uint16_t *)(v5 + 156) = v45;
        if ( v44 != nullptr )
          *v44 = 0;
        if ( *(uint8_t *)(v5 + 439) != 0 )
        {
          memset(v131, 0, 12);
          if ( *(uint8_t *)(v5 + 460) != 0 )
          {
            v46 = 65;
            if ( *(uint8_t *)(a1 + 655) == 0 )
              v46 = *(uint8_t *)(a1 + 657) == 0 ? 73 : 68;
            curl_msnprintf(v131, 12, ";type=%c", v46);
          }
          v47 = "/";
          v48 = (const char *)&unk_1B15112;
          if ( *(uint8_t *)(a1 + 34232) == 0 )
            v47 = (const char *)&unk_1B15112;
          v49 = (const char *)&unk_1B15112;
          if ( *(uint8_t *)(v5 + 442) != 0 )
          {
            v48 = "]";
            v49 = "[";
          }
          v3 = 27;
          v50 = curl_maprintf(
                  "%s://%s%s%s:%hu%s%s%s",
                  **(uint32_t **)(v5 + 484),
                  v49,
                  *(uint32_t *)(v5 + 128),
                  v48,
                  *(uint16_t *)(v5 + 156),
                  v47,
                  *(uint32_t *)(a1 + 34228),
                  v131);
          if ( v50 == 0 )
            return v3;
          if ( *(uint8_t *)(a1 + 920) != 0 )
            ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(a1 + 916));
          *(uint32_t *)(a1 + 916) = v50;
          *(uint8_t *)(a1 + 920) = 1;
        }
      }
      else if ( v44 != nullptr )
      {
        v69 = strtoul(v44 + 1, &endptr, 10);
        if ( v44 + 1 == endptr || *endptr != 0 )
        {
          if ( v69 == 0 )
            *v44 = 0;
        }
        else
        {
          if ( v69 > 0xFFFF )
          {
            v3 = 3;
            Curl_failf(a1, "Port number too large: %lu", v69);
            return v3;
          }
          *v44 = 0;
          *(uint16_t *)(v5 + 156) = curlx_ultous(v69);
        }
      }
      if ( *(uint32_t *)(a1 + 836) != 0 )
      {
        strncpy(v128, *(const char **)(a1 + 836), 0x100u);
        v128[255] = 0;
      }
      if ( *(uint32_t *)(a1 + 840) != 0 )
      {
        strncpy(v129, *(const char **)(a1 + 840), 0x100u);
        v129[255] = 0;
      }
      *(uint8_t *)(v5 + 454) = 0;
      if ( *(uint32_t *)(a1 + 672) != 0 )
      {
        if ( Curl_parsenetrc(*(uint32_t *)(v5 + 128), v128, v129, *(char **)(a1 + 780)) != 0 )
        {
          Curl_infof(a1, "Couldn't find host %s in the .netrc file; using defaults\n", *(uint32_t *)(v5 + 128));
        }
        else
        {
          *(uint8_t *)(v5 + 454) = 1;
          *(uint8_t *)(v5 + 440) = 1;
        }
      }
      if ( (*(uint8_t *)(*(uint32_t *)(v5 + 480) + 60) & 0x20) == 0 || *(uint8_t *)(v5 + 440) != 0 )
      {
        v51 = ((int (*)(char *))Curl_cstrdup)(v128);
        *(uint32_t *)(v5 + 260) = v51;
        if ( v51 != 0 )
        {
          *(uint32_t *)(v5 + 264) = ((int (*)(char *))Curl_cstrdup)(v129);
          v52 = *(uint32_t *)(v5 + 260);
          goto LABEL_112;
        }
LABEL_203:
        *(uint32_t *)(v5 + 264) = 0;
        return 27;
      }
      v77 = ((int (*)(const char *))Curl_cstrdup)("anonymous");
      *(uint32_t *)(v5 + 260) = v77;
      if ( v77 == 0 )
        goto LABEL_203;
      *(uint32_t *)(v5 + 264) = ((int (*)(const char *))Curl_cstrdup)("ftp@example.com");
      v52 = *(uint32_t *)(v5 + 260);
LABEL_112:
      v3 = 27;
      if ( v52 == 0 )
        return v3;
      if ( *(uint32_t *)(v5 + 264) == 0 )
        return v3;
      v122 = (char *)(v5 + 376);
      *(uint32_t *)(a1 + 556) = *(uint32_t *)(a1 + 804);
      *(uint32_t *)(a1 + 560) = *(uint32_t *)(a1 + 808);
      *(uint32_t *)(a1 + 564) = *(uint32_t *)(a1 + 828);
      *(uint32_t *)(a1 + 568) = *(uint32_t *)(a1 + 832);
      *(uint32_t *)(a1 + 572) = *(uint32_t *)(a1 + 820);
      *(uint32_t *)(a1 + 576) = *(uint32_t *)(a1 + 816);
      *(uint32_t *)(a1 + 580) = *(uint32_t *)(a1 + 812);
      if ( (uint8_t)Curl_clone_ssl_config(a1 + 540, v5 + 376) == 0 )
        return v3;
      if ( *(uint8_t *)(a1 + 679) != 0 && *(uint8_t *)(a1 + 33996) == 0
        || (v119 = ((int (*)(void))((int (*)(uint32_t *, int))sub_1A5C85C))(), (int)(v82 = *(uint32_t **)(a1 + 1192))[1] <= 0) )
      {
LABEL_117:
        sub_1A57AF0();
        goto LABEL_118;
      }
      v83 = 0;
      while ( 1 )
      {
        v84 = 4 * v83;
        v85 = *(uint32_t *)(*v82 + 4 * v83);
        if ( v85 == 0 )
          goto LABEL_235;
        v86 = *(uint32_t *)(*(uint32_t *)(v85 + 548) + 12) + *(uint32_t *)(*(uint32_t *)(v85 + 552) + 12);
        if ( *(uint32_t *)(v85 + 52) == -1 )
          *(uint32_t *)(v85 + 52) = v83;
        if ( v86 == 0 && *(uint8_t *)(v85 + 48) == 0 )
        {
          if ( (*(uint8_t *)(*(uint32_t *)(v85 + 480) + 58) & 4) != 0
            || (v96 = Curl_socket_ready(*(uint32_t *)(v85 + 304), -1, 0), v86 = 0, v84 = 4 * v83, v96 != 0) )
          {
            *(uint32_t *)v85 = a1;
            v110 = v84;
            Curl_infof(a1, "Connection #%ld seems to be dead!\n", v83);
            Curl_disconnect(v85, 1);
            *(uint32_t *)(**(uint32_t **)(a1 + 1192) + v110) = 0;
            goto LABEL_235;
          }
        }
        if ( v119 != 0 )
        {
          v87 = **(int ***)(v85 + 548);
          v88 = 0;
          if ( v87 != nullptr )
            v88 = *v87;
          v89 = 0;
          v90 = **(int ***)(v85 + 552);
          if ( v90 != nullptr )
            v89 = *v90;
          if ( v88 != 0 )
          {
            if ( (uint8_t)sub_1A5C85C(v89, *(uint32_t *)(v85 + 480)) == 0 )
              goto LABEL_235;
          }
          else if ( v89 != 0 && (uint8_t)sub_1A5C85C(v89, *(uint32_t *)(v85 + 480)) == 0 )
          {
            goto LABEL_235;
          }
        }
        else
        {
          if ( v86 != 0 )
            goto LABEL_235;
          if ( *(uint32_t *)(v85 + 304) == -1 || *(uint8_t *)(v85 + 436) != 0 )
          {
            Curl_infof(a1, "Connection #%ld isn't open enough, can't reuse\n", *(uint32_t *)(v85 + 52));
            goto LABEL_235;
          }
        }
        v91 = *(uint32_t *)(*(uint32_t *)(v5 + 480) + 60);
        if ( (((uint8_t)v91 ^ (uint8_t)*(uint32_t *)(*(uint32_t *)(v85 + 480) + 60)) & 1) != 0 )
          goto LABEL_235;
        haystackc = (char *)(*(uint32_t *)(*(uint32_t *)(v5 + 480) + 60) & 1);
        if ( (v91 & 1) != 0
          && (*(uint32_t *)(a1 + 548) != *(uint32_t *)(v85 + 1016) || *(uint32_t *)(a1 + 552) != *(uint32_t *)(v85 + 1020)) )
        {
          goto LABEL_235;
        }
        if ( *(uint8_t *)(v5 + 438) != *(uint8_t *)(v85 + 438) || v119 == 0 && *(uint8_t *)(v85 + 48) != 0 )
          goto LABEL_235;
        v92 = *(uint32_t *)(v5 + 1024);
        if ( v92 != 0 || *(uint16_t *)(v5 + 1028) != 0 )
        {
          if ( *(uint16_t *)(v85 + 1028) != *(uint16_t *)(v5 + 1028) )
            goto LABEL_235;
          if ( *(uint32_t *)(v85 + 1032) != *(uint32_t *)(v5 + 1032) )
            goto LABEL_235;
          v93 = *(const char **)(v85 + 1024);
          if ( v93 == nullptr || v92 == 0 || strcmp(v93, *(const char **)(v5 + 1024)) != 0 )
            goto LABEL_235;
        }
        if ( *(uint8_t *)(v5 + 439) != 0
          && haystackc == nullptr
          && (*(uint8_t *)(v85 + 439) == 0
           || *(uint8_t *)(v5 + 448) == 0
           || *(uint8_t *)(v85 + 448) == 0
           || Curl_raw_equal(*(uint32_t *)(v5 + 144), *(uint32_t *)(v85 + 144)) == 0
           || *(uint32_t *)(v5 + 152) != *(uint32_t *)(v85 + 152)) )
        {
          if ( *(uint8_t *)(v85 + 438) != 0
            && *(uint32_t *)(v5 + 276) == *(uint32_t *)(v85 + 276)
            && *(uint8_t *)(v5 + 448) == *(uint8_t *)(v85 + 448)
            && Curl_raw_equal(*(uint32_t *)(v5 + 144), *(uint32_t *)(v85 + 144)) != 0
            && *(uint32_t *)(v5 + 152) == *(uint32_t *)(v85 + 152) )
          {
            goto LABEL_270;
          }
          goto LABEL_235;
        }
        if ( Curl_raw_equal(**(uint32_t **)(v5 + 480), **(uint32_t **)(v85 + 480)) != 0
          && Curl_raw_equal(*(uint32_t *)(v5 + 128), *(uint32_t *)(v85 + 128)) != 0
          && *(uint16_t *)(v5 + 156) == *(uint16_t *)(v85 + 156) )
        {
          v100 = *(uint32_t *)(v5 + 480);
          if ( (*(uint8_t *)(v100 + 60) & 1) == 0 )
            goto LABEL_309;
          if ( (uint8_t)Curl_ssl_config_matches(v122, v85 + 376) != 0 && *(uint32_t *)(v85 + 332) == 2 )
            break;
        }
LABEL_235:
        ++v83;
        v82 = *(uint32_t **)(a1 + 1192);
        if ( v83 >= v82[1] )
          goto LABEL_117;
      }
      v100 = *(uint32_t *)(v5 + 480);
LABEL_309:
      v101 = *(uint32_t *)(v100 + 56);
      if ( ((v101 & 4) != 0 || (v101 & 1) != 0 && *(uint32_t *)(a1 + 34112) == 8)
        && (curl_strequal(*(char **)(v5 + 260), *(char **)(v85 + 260)) == 0
         || curl_strequal(*(char **)(v5 + 264), *(char **)(v85 + 264)) == 0) )
      {
        goto LABEL_235;
      }
LABEL_270:
      *(uint8_t *)(v85 + 48) = 1;
      if ( *(uint32_t *)(v5 + 136) != 0 )
        ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v5 + 136));
      Curl_free_ssl_config(v122);
      *(uint32_t *)v85 = *(uint32_t *)v5;
      v94 = *(uint8_t *)(v5 + 440);
      *(uint8_t *)(v85 + 440) = v94;
      if ( v94 != 0 )
      {
        Curl_safefree(*(uint32_t *)(v85 + 260));
        Curl_safefree(*(uint32_t *)(v85 + 264));
        *(uint32_t *)(v85 + 260) = *(uint32_t *)(v5 + 260);
        *(uint32_t *)(v85 + 264) = *(uint32_t *)(v5 + 264);
        *(uint32_t *)(v5 + 260) = 0;
        *(uint32_t *)(v5 + 264) = 0;
      }
      v95 = *(uint8_t *)(v5 + 441);
      *(uint8_t *)(v85 + 441) = v95;
      if ( v95 != 0 )
      {
        Curl_safefree(*(uint32_t *)(v85 + 268));
        Curl_safefree(*(uint32_t *)(v85 + 272));
        *(uint32_t *)(v85 + 268) = *(uint32_t *)(v5 + 268);
        *(uint32_t *)(v85 + 272) = *(uint32_t *)(v5 + 272);
        *(uint32_t *)(v5 + 268) = 0;
        *(uint32_t *)(v5 + 272) = 0;
      }
      if ( *(uint8_t *)(v85 + 438) != 0 )
      {
        ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v85 + 120));
        *(g4_int128_t *)(v85 + 120) = *(g4_int128_t *)(v5 + 120);
      }
      else
      {
        ((void (*)(uint32_t))Curl_cfree)(*(uint32_t *)(v5 + 120));
      }
      Curl_persistconninfo(v85);
      *(uint8_t *)(v85 + 437) = 1;
      Curl_safefree(*(uint32_t *)(v5 + 260));
      Curl_safefree(*(uint32_t *)(v5 + 264));
      Curl_safefree(*(uint32_t *)(v5 + 268));
      Curl_safefree(*(uint32_t *)(v5 + 272));
      Curl_llist_destroy(*(uint32_t *)(v5 + 548), 0);
      Curl_llist_destroy(*(uint32_t *)(v5 + 552), 0);
      Curl_llist_destroy(*(uint32_t *)(v5 + 556), 0);
      Curl_llist_destroy(*(uint32_t *)(v5 + 560), 0);
      Curl_safefree(*(uint32_t *)(v5 + 564));
      ((void (*)(int))Curl_cfree)(v5);
      *a2 = v85;
      Curl_infof(a1, "Re-using existing connection! (#%ld) with host %s\n", *(uint32_t *)(v85 + 52));
      v5 = v85;
LABEL_118:
      v3 = sub_1A56D40();
      if ( v3 == 0 )
      {
        *(uint32_t *)(v5 + 584) = *(uint32_t *)(a1 + 352);
        *(uint32_t *)(v5 + 588) = *(uint32_t *)(a1 + 280);
        *(uint32_t *)(v5 + 576) = *(uint32_t *)(a1 + 320);
        *(uint32_t *)(v5 + 580) = *(uint32_t *)(a1 + 400);
        v53 = Curl_timeleft(a1, 0, 1);
        if ( *(uint8_t *)(v5 + 437) != 0 )
        {
          *a3 = 0;
          if ( *(uint8_t *)(v5 + 438) != 0 )
            sub_1A5C81F(v5 + 132);
          return v3;
        }
        sub_1A5C81F(v5 + 132);
        v97 = *(uint8_t **)(v5 + 144);
        if ( v97 != nullptr && *v97 != 0 )
        {
          sub_1A5C81F(v5 + 148);
          v102 = Curl_resolv_timeout(v5, *(uint32_t *)(v5 + 144), *(uint32_t *)(v5 + 152), &endptr, v53);
          if ( v102 != 1 )
          {
            if ( v102 != -2 )
            {
              if ( endptr == nullptr )
              {
                v3 = 5;
                Curl_failf(a1, "Couldn't resolve proxy '%s'", *(uint32_t *)(v5 + 148));
              }
              goto LABEL_300;
            }
            goto LABEL_318;
          }
          *a3 = 1;
        }
        else
        {
          v98 = *(uint16_t *)(v5 + 156);
          *(uint32_t *)(v5 + 152) = v98;
          v99 = Curl_resolv_timeout(v5, *(uint32_t *)(v5 + 128), v98, &endptr, v53);
          if ( v99 == 1 )
          {
            *a3 = 1;
          }
          else
          {
            if ( v99 != -2 )
            {
              if ( endptr == nullptr )
              {
                v3 = 6;
                Curl_failf(a1, "Couldn't resolve host '%s'", *(uint32_t *)(v5 + 132));
              }
              goto LABEL_300;
            }
LABEL_318:
            v3 = 28;
          }
        }
LABEL_300:
        *(uint32_t *)(v5 + 56) = (uint32_t)(uintptr_t)(endptr);
      }
      return v3;
    }
  }
  v11 = *(uint32_t *)(v5 + 548);
LABEL_127:
  Curl_llist_destroy(v11, 0);
  v3 = 27;
  Curl_llist_destroy(*(uint32_t *)(v5 + 552), 0);
  Curl_llist_destroy(*(uint32_t *)(v5 + 556), 0);
  Curl_llist_destroy(*(uint32_t *)(v5 + 560), 0);
  Curl_safefree(*(uint32_t *)(v5 + 564));
  Curl_safefree(*(uint32_t *)(v5 + 1024));
  Curl_safefree(v5);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5C81F  (binary VA: 0x1a5c81f)
// Original: sub_1A5C81F
// ----------------------------------------------------------------------------
void sub_1A5C81F(int a1, char *a2, char **a3)
{
  char v3;

  *a3 = a2;
  while ( 1 )
  {
    v3 = *a2;
    if ( *a2 == 0 )
      break;
    ++a2;
    if ( v3 < 0 )
    {
      Curl_infof(a1, "IDN support not present, can't parse Unicode domains");
      return;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A5C85C  (binary VA: 0x1a5c85c)
// Original: sub_1A5C85C
// ----------------------------------------------------------------------------
int sub_1A5C85C(uint32_t *a1, int a2)
{
  int v2;
  int v4;
  int v5;

  v2 = 0;
  if ( (*(uint8_t *)(a2 + 56) & 1) != 0 )
  {
    v4 = a1[2];
    if ( v4 != 0 && (uint8_t)Curl_multi_canPipeline(v4) != 0 )
    {
      v5 = a1[133];
      if ( v5 == 5 || (--v5, v5 == 0) )
      {
        LOBYTE(v5) = a1[134] != 1;
        return v5;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: curlx_ultous  (binary VA: 0x1a5c8b0)
// Original: curlx_ultous
// ----------------------------------------------------------------------------
int curlx_ultous(uint16_t a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: curlx_ultouc  (binary VA: 0x1a5c8c0)
// Original: curlx_ultouc
// ----------------------------------------------------------------------------
int curlx_ultouc(uint8_t a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: curlx_uztosi  (binary VA: 0x1a5c8d0)
// Original: curlx_uztosi
// ----------------------------------------------------------------------------
int curlx_uztosi(int a1)
{
  return a1 & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: curlx_sltosi  (binary VA: 0x1a5c8e0)
// Original: curlx_sltosi
// ----------------------------------------------------------------------------
int curlx_sltosi(int a1)
{
  return a1 & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: curlx_sltoui  (binary VA: 0x1a5c8f0)
// Original: curlx_sltoui
// ----------------------------------------------------------------------------
int curlx_sltoui(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: curlx_sltous  (binary VA: 0x1a5c900)
// Original: curlx_sltous
// ----------------------------------------------------------------------------
int curlx_sltous(uint16_t a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: curlx_uztosz  (binary VA: 0x1a5c910)
// Original: curlx_uztosz
// ----------------------------------------------------------------------------
int curlx_uztosz(int a1)
{
  return a1 & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: curlx_sotouz  (binary VA: 0x1a5c920)
// Original: curlx_sotouz
// ----------------------------------------------------------------------------
int curlx_sotouz(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5CA10  (binary VA: 0x1a5ca10)
// Original: sub_1A5CA10
// ----------------------------------------------------------------------------
int sub_1A5CA10(int a1, int a2, int a3)
{
  int v5;
  unsigned int v6;

  while ( 1 )
  {
    v5 = 1000;
    if ( a3 <= 1000 )
      v5 = a3;
    v6 = Curl_socket_ready(-1, a2, v5);
    if ( Curl_pgrsUpdate(a1) != 0 )
      return 3;
    if ( v6 == -1 )
      return -1;
    if ( v6 != 0 )
      break;
    a3 -= 1000;
    if ( a3 <= 0 )
      return 1;
  }
  return (v6 >> 1) & 2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5CAB0  (binary VA: 0x1a5cab0)
// Original: sub_1A5CAB0
// ----------------------------------------------------------------------------
int sub_1A5CAB0(int fd, uint32_t *a2)
{
  int v3;
  int v4;
  int v5;
  int result;
  typedef int _g4_t_optval;
  typedef socklen_t _g4_t_optlen[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_optval)) > _g4_s0 ? (8u + sizeof(_g4_t_optval)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_optlen)) > _g4_s1 ? (12u + sizeof(_g4_t_optlen)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 8u);
  _g4_t_optlen &optlen = *reinterpret_cast<_g4_t_optlen *>(_g4_sf + 12u);

  optval = 0;
  optlen[0] = 4;
  v3 = getsockopt(fd, 1, 4, &optval, optlen);
  v5 = optval;
  if ( v3 != 0 )
  {
    v3 = (int)(uintptr_t)(__errno(v4, optval));
    v5 = *(uint32_t *)v3;
  }
  LOBYTE(v3) = v5 == 106;
  LOBYTE(v4) = v5 == 0;
  result = v4 | v3;
  if ( a2 != nullptr )
    *a2 = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5CB30  (binary VA: 0x1a5cb30)
// Original: sub_1A5CB30
// ----------------------------------------------------------------------------
int sub_1A5CB30(uint8_t *a1, char *a2, int a3, uint32_t *a4)
{
  int16_t v5;
  int result;
  char *v7;
  char *v8;

  v5 = *(uint16_t *)a1;
  if ( v5 == 1 )
  {
    curl_msnprintf((int)(uintptr_t)(a2), 46, (int)(uintptr_t)("%s"), a1 + 2);
    *a4 = 0;
    return 1;
  }
  else if ( v5 == 2 && (v8 = a2, v7 = Curl_inet_ntop(a3, (int)(uintptr_t)(a2), 2, a1 + 4, a2, 0x2Eu), a2 = v8, v7 != nullptr) )
  {
    *a4 = (uint16_t)__builtin_rotateright16(*((uint16_t *)a1 + 1), 8);
    return 1;
  }
  else
  {
    *a2 = 0;
    result = 0;
    *a4 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5D130  (binary VA: 0x1a5d130)
// Original: sub_1A5D130
// ----------------------------------------------------------------------------
int sub_1A5D130(int *a1, int a2, int a3, int *a4, uint8_t *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  socklen_t n;
  int (*v10)(uint32_t, uint32_t, uint32_t *);
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int (*v16)(uint32_t, int, uint32_t);
  int v17;
  const char *v18;
  int v20;
  int v21;
  int v22;
  socklen_t v23;
  int v24;
  socklen_t v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  char v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int *v39;
  int v40;
  int v41;
  int v42;
  int *v43;
  int v44;
  int v45;
  int v46;
  int *v47;
  int v48;
  int v49;
  int v50;
  size_t v51;
  int v52;
  int v53;
  int v54;
  bool v55; // cc
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int *v63;
  int v64;
  int v65;
  int v66;
  int v67;
  typedef int _g4_t_domain;
  typedef char *_g4_t_domaina;
  typedef int _g4_t_v70;
  typedef int _g4_t_fd;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint16_t _g4_t_v74;
  typedef char _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int *_g4_t_v81;
  typedef socklen_t _g4_t_len;
  typedef struct sockaddr _g4_t_addr[8];
  typedef struct sockaddr _g4_t_v84[8];
  typedef uint32_t _g4_t_v85[3];
  typedef socklen_t _g4_t_v86;
  typedef struct sockaddr _g4_t_dest;
  typedef uint32_t _g4_t_v88[71];
  enum : size_t {
    _g4_s0 = 816u,
    _g4_s1 = (4u + sizeof(_g4_t_domain)) > _g4_s0 ? (4u + sizeof(_g4_t_domain)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_domaina)) > _g4_s1 ? (4u + sizeof(_g4_t_domaina)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v70)) > _g4_s2 ? (12u + sizeof(_g4_t_v70)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_fd)) > _g4_s3 ? (16u + sizeof(_g4_t_fd)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v72)) > _g4_s4 ? (20u + sizeof(_g4_t_v72)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v73)) > _g4_s5 ? (24u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v74)) > _g4_s6 ? (28u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v75)) > _g4_s7 ? (31u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v76)) > _g4_s8 ? (32u + sizeof(_g4_t_v76)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v77)) > _g4_s9 ? (36u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v78)) > _g4_s10 ? (40u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v79)) > _g4_s11 ? (44u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v80)) > _g4_s12 ? (52u + sizeof(_g4_t_v80)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v81)) > _g4_s13 ? (56u + sizeof(_g4_t_v81)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_len)) > _g4_s14 ? (60u + sizeof(_g4_t_len)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_addr)) > _g4_s15 ? (64u + sizeof(_g4_t_addr)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v84)) > _g4_s16 ? (192u + sizeof(_g4_t_v84)) : _g4_s16,
    _g4_s18 = (320u + sizeof(_g4_t_v85)) > _g4_s17 ? (320u + sizeof(_g4_t_v85)) : _g4_s17,
    _g4_s19 = (332u + sizeof(_g4_t_v86)) > _g4_s18 ? (332u + sizeof(_g4_t_v86)) : _g4_s18,
    _g4_s20 = (336u + sizeof(_g4_t_dest)) > _g4_s19 ? (336u + sizeof(_g4_t_dest)) : _g4_s19,
    _g4_s21 = (464u + sizeof(_g4_t_v88)) > _g4_s20 ? (464u + sizeof(_g4_t_v88)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_domain &domain = *reinterpret_cast<_g4_t_domain *>(_g4_sf + 4u);
  _g4_t_domaina &domaina = *reinterpret_cast<_g4_t_domaina *>(_g4_sf + 4u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 16u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 31u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 40u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_len &len = *reinterpret_cast<_g4_t_len *>(_g4_sf + 60u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 192u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 320u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 332u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 336u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 464u);

  v5 = 17;
  v6 = (int)(uintptr_t)(a1);
  v70 = *a1;
  *a4 = -1;
  v7 = a1[29];
  v8 = *(uint32_t *)(a2 + 4);
  v85[0] = v8;
  v85[1] = v7;
  if ( v7 != 2 )
    v5 = *(uint32_t *)(a2 + 12);
  n = *(uint32_t *)(a2 + 16);
  v85[2] = v5;
  v86 = n;
  if ( n > 0x80 )
  {
    v86 = 128;
    n = 128;
  }
  domain = v8;
  memcpy(&dest, *(const void **)(a2 + 24), n);
  *a5 = 0;
  v10 = *(int (**)(uint32_t, uint32_t, uint32_t *))(v70 + 384);
  if ( v10 != nullptr )
    fd = v10(*(uint32_t *)(v70 + 388), 0, v85);
  else
    fd = socket(domain, v7, v5);
  v12 = 0;
  if ( fd == -1 )
    return v12;
  if ( (uint8_t)sub_1A5CB30((uint8_t *)&dest, (char *)(v6 + 158), v11, (uint32_t *)(v6 + 204)) == 0 )
  {
    v80 = *(uint32_t *)__errno(v14, v13);
    v22 = Curl_strerror(v21, v20, v6, v80);
    Curl_failf(v70, "sa_addr inet_ntop() failed with errno %d: %s", v80, v22);
    Curl_closesocket(v6, fd);
    return 0;
  }
  v15 = v6 + 64;
  *(uint32_t *)(v6 + 64) = *(uint32_t *)(v6 + 158);
  *(uint32_t *)(v6 + 68) = *(uint32_t *)(v6 + 162);
  *(uint32_t *)(v6 + 72) = *(uint32_t *)(v6 + 166);
  *(uint32_t *)(v6 + 76) = *(uint32_t *)(v6 + 170);
  *(uint32_t *)(v6 + 80) = *(uint32_t *)(v6 + 174);
  *(uint32_t *)(v6 + 84) = *(uint32_t *)(v6 + 178);
  *(uint32_t *)(v6 + 88) = *(uint32_t *)(v6 + 182);
  *(uint32_t *)(v6 + 92) = *(uint32_t *)(v6 + 186);
  *(uint32_t *)(v6 + 96) = *(uint32_t *)(v6 + 190);
  *(uint32_t *)(v6 + 100) = *(uint32_t *)(v6 + 194);
  *(uint32_t *)(v6 + 104) = *(uint32_t *)(v6 + 198);
  *(uint16_t *)(v6 + 108) = *(uint16_t *)(v6 + 202);
  Curl_infof(v70, "  Trying %s... ", v6 + 64);
  Curl_persistconninfo((int *)v6);
  if ( *(uint8_t *)(v70 + 698) != 0 )
  {
    v29 = *(uint32_t *)v6;
    len = *(uint8_t *)(*(uint32_t *)v6 + 698);
    if ( setsockopt(fd, 6, 1, &len, 4u) < 0 )
    {
      v47 = (int *)__errno(v31, v30);
      v50 = Curl_strerror(v49, v48, v6, *v47);
      Curl_infof(v29, "Could not set TCP_NODELAY: %s\n", v50);
    }
    else
    {
      Curl_infof(v29, "TCP_NODELAY set\n");
    }
  }
  v16 = *(int (**)(uint32_t, int, uint32_t))(v70 + 376);
  if ( v16 != nullptr )
  {
    v17 = v16(*(uint32_t *)(v70 + 380), fd, 0);
    v80 = v17;
    if ( v17 == 2 )
    {
      v75 = 1;
    }
    else
    {
      v75 = 0;
      if ( v17 != 0 )
        goto LABEL_28;
    }
  }
  else
  {
    v75 = 0;
  }
  v73 = v85[0];
  v72 = *(uint32_t *)v6;
  v81 = nullptr;
  memset(v88, 0, 256);
  v74 = *(uint16_t *)(v72 + 332);
  v76 = *(uint32_t *)(v72 + 336);
  v18 = *(const char **)(v72 + 744);
  if ( v74 != 0 || v18 != nullptr )
  {
    memset(addr, 0, sizeof(addr));
    if ( v18 != nullptr && (domaina = (char *)v18, strlen(v18) <= 0xFE) )
    {
      if ( Curl_if2ip(v73, domaina, v88, 256) != 0 )
      {
        Curl_infof(v72, "Local Interface %s is ip %s using address family %i\n", domaina, v88, v73);
        v51 = strlen(domaina);
        if ( setsockopt(fd, 1, 25, domaina, v51 + 1) != 0 )
        {
          v64 = *(uint32_t *)__errno(v53, v52);
          v67 = Curl_strerror(v66, v65, v6, v64);
          Curl_infof(v72, "SO_BINDTODEVICE %s failed with errno %d: %s; will do regular bind\n", domaina, v64, v67);
        }
      }
      else
      {
        v62 = *(uint32_t *)(v6 + 488);
        if ( v73 == 2 )
          *(uint32_t *)(v6 + 488) = 1;
        Curl_resolv((int ***)v6, domaina, 0, (int *)&v81);
        v63 = v81;
        *(uint32_t *)(v6 + 488) = v62;
        if ( v63 == nullptr )
        {
          Curl_failf(v72, "Couldn't bind to '%s'", domaina);
LABEL_44:
          v12 = 45;
          Curl_closesocket(v6, fd);
          return v12;
        }
        Curl_printable_address(*v63, (char *)v88, 256);
        Curl_infof(v72, "Name '%s' family %i resolved to '%s' family %i\n", domaina, v73, v88, *(uint32_t *)(*v81 + 4));
        Curl_resolv_unlock(v72, v81);
      }
      v23 = 0;
      if ( v73 != 2 || Curl_inet_pton((int)(uintptr_t)(v88), v52, 2, (char *)v88, &addr[0].sa_data[2]) <= 0 )
      {
LABEL_23:
        v77 = v6;
        v24 = v6 + 64;
        v25 = v23;
        v26 = v76;
        while ( bind(fd, addr, v25) < 0 )
        {
          if ( --v26 <= 0 )
          {
            v6 = v77;
            v43 = (int *)__errno(v28, v27);
            v44 = *v43;
            *(uint32_t *)(v72 + 34032) = *v43;
            v46 = Curl_strerror(v45, v72, v77, v44);
            Curl_failf(v72, "bind failed with errno %d: %s", v44, v46);
            goto LABEL_44;
          }
          Curl_infof(v72, "Bind to local port %hu failed, trying next\n", v74++);
          if ( addr[0].sa_family == 2 )
            *(uint16_t *)addr[0].sa_data = __builtin_rotateright16(v74, 8);
        }
        memset(v84, 0, sizeof(v84));
        v15 = v24;
        len = 128;
        v6 = v77;
        if ( getsockname(fd, v84, &len) >= 0 )
        {
          Curl_infof(v72, "Local port: %hu\n", v74);
          *(uint8_t *)(v77 + 459) = 1;
          goto LABEL_15;
        }
        v39 = (int *)__errno(v38, v37);
        v40 = *v39;
        *(uint32_t *)(v72 + 34032) = *v39;
        v42 = Curl_strerror(v41, v72, v77, v40);
        Curl_failf(v72, "getsockname() failed with errno %d: %s", v40, v42);
        goto LABEL_44;
      }
    }
    else
    {
      v23 = 0;
      if ( v73 != 2 )
        goto LABEL_23;
    }
    addr[0].sa_family = 2;
    LOWORD(v23) = 16;
    *(uint16_t *)addr[0].sa_data = __builtin_rotateright16(v74, 8);
    goto LABEL_23;
  }
LABEL_15:
  curlx_nonblock(fd, 1);
  if ( v75 != 0 )
  {
LABEL_16:
    *a5 = 1;
    Curl_infof(v70, "connected\n");
    Curl_updateconninfo(v6, fd);
LABEL_17:
    v12 = 0;
    *a4 = fd;
    return v12;
  }
  v32 = 0;
  if ( *(uint32_t *)(v6 + 116) == 1 )
  {
    v32 = connect(fd, &dest, v86);
    curlx_tvnow(&v78);
    v55 = *(uint32_t *)(v6 + 472) <= 1;
    v56 = v78;
    v57 = v79;
    *(uint32_t *)(v6 + 468) = v79;
    *(uint32_t *)(v6 + 464) = v56;
    if ( !v55 )
      Curl_expire(v70, *(uint32_t *)(v6 + 476));
    if ( v32 == -1 )
    {
      v58 = *(uint32_t *)__errno(v54, v57);
      v80 = v58;
      if ( v58 != 11 && v58 != 115 )
      {
        v61 = Curl_strerror(v60, v59, v6, v58);
        Curl_failf(v70, "Failed to connect to %s: %s", v15, v61);
        *(uint32_t *)(v70 + 34032) = v80;
        goto LABEL_34;
      }
      v32 = sub_1A5CA10(v6, fd, a3);
      if ( v32 == 3 )
      {
LABEL_28:
        Curl_closesocket(v6, fd);
        return 42;
      }
    }
    if ( v32 == 1 && *(uint32_t *)(v70 + 1188) == 2 )
      goto LABEL_17;
  }
LABEL_34:
  v33 = sub_1A5CAB0(fd, &v80);
  if ( v32 == 0 )
  {
    if ( v33 != 0 )
      goto LABEL_16;
  }
  else if ( v32 == 1 )
  {
    Curl_infof(v70, "Timeout\n");
LABEL_39:
    Curl_closesocket(v6, fd);
    return 0;
  }
  v35 = v80;
  *(uint32_t *)(v70 + 34032) = v80;
  v36 = Curl_strerror(v70, v34, v6, v35);
  Curl_infof(v70, "%s\n", v36);
  goto LABEL_39;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5DFD0  (binary VA: 0x1a5dfd0)
// Original: sub_1A5DFD0
// ----------------------------------------------------------------------------
int sub_1A5DFD0(uint8_t *a1, int a2, uint32_t *a3)
{
  char v4; // bp
  int result;
  int v6;
  uint8_t *v7;
  int v8;
  uint8_t *i;
  uint8_t *v10;

  v4 = a1[3];
  result = 1;
  if ( a1[2] == 8 && (v4 & 0xE0) == 0 )
  {
    v6 = a2 - 10;
    v10 = a1 + 10;
    if ( (v4 & 4) != 0 )
    {
      result = 2;
      if ( v6 <= 1 )
        return result;
      v8 = *((uint16_t *)a1 + 5);
      if ( v6 <= v8 + 1 )
        return result;
      v6 = v6 - v8 - 2;
      v10 += v8 + 2;
    }
    if ( (v4 & 8) != 0 )
    {
      result = 2;
      if ( v6 == 0 )
        return result;
      if ( *v10 != 0 )
      {
        v7 = v10;
        do
        {
          if ( --v6 == 0 )
            return 2;
          ++v7;
        }
        while ( *v7 != 0 );
        v10 = v7;
      }
      --v6;
      ++v10;
    }
    if ( (v4 & 0x10) != 0 )
    {
      result = 2;
      if ( v6 == 0 )
        return result;
      for ( i = v10; *i != 0; ++i )
      {
        if ( --v6 == 0 )
          return 2;
      }
      --v6;
    }
    if ( (v4 & 2) == 0 )
    {
LABEL_26:
      *a3 = a2 - v6;
      return 0;
    }
    result = 2;
    if ( v6 > 1 )
    {
      v6 -= 2;
      goto LABEL_26;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5E100  (binary VA: 0x1a5e100)
// Original: sub_1A5E100
// ----------------------------------------------------------------------------
int sub_1A5E100(int a1, int a2)
{
  if ( a2 != 0 )
    Curl_failf(a1, "Error while processing content unencoding: %s", a2);
  else
    Curl_failf(a1, "Error while processing content unencoding: Unknown failure within decompression software.");
  return 61;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5E160  (binary VA: 0x1a5e160)
// Original: sub_1A5E160
// ----------------------------------------------------------------------------
int sub_1A5E160(int *a1, int a2)
{
  uint8_t **v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int (*v8)(char *, int, size_t, uint32_t);
  int v10;
  int (*v11)(char *, int, size_t, uint32_t);
  int v12;
  char *v13;
  int v14;
  int v15;

  v2 = (uint8_t **)(a2 + 136);
  v14 = *(uint32_t *)(a2 + 140);
  v15 = *(uint32_t *)(a2 + 136);
  v13 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x4000u);
  v12 = 1;
  if ( v13 == nullptr )
  {
    inflateEnd(v2);
    *(uint32_t *)(a2 + 132) = 0;
    return 27;
  }
  while ( 1 )
  {
    *(uint32_t *)(a2 + 152) = 0x4000;
    *(uint32_t *)(a2 + 148) = (uint32_t)(uintptr_t)(v13);
    v4 = inflate(v2, 2);
    v5 = v4;
    if ( v4 <= 1 )
      break;
    if ( v4 != -3 || v12 == 0 || (inflateEnd(v2), inflateInit2_(v2, -15, "1.2.3", 56) != 0) )
    {
      ((void (*)(char *))Curl_cfree)(v13);
LABEL_15:
      v10 = sub_1A5E100(*a1, *(uint32_t *)(a2 + 160));
      inflateEnd(v2);
      *(uint32_t *)(a2 + 132) = 0;
      return v10;
    }
    *(uint32_t *)(a2 + 136) = v15;
    *(uint32_t *)(a2 + 140) = v14;
LABEL_7:
    v12 = 0;
  }
  v6 = *(uint32_t *)(a2 + 152);
  if ( v6 != 0x4000 && *(uint8_t *)(a2 + 217) == 0 )
  {
    v8 = Curl_client_write((int)(uintptr_t)(a1), 1, v13, 0x4000 - v6);
    if ( v8 != nullptr )
    {
      v11 = v8;
      ((void (*)(char *))Curl_cfree)(v13);
      inflateEnd(v2);
      *(uint32_t *)(a2 + 132) = 0;
      return (int)(uintptr_t)(v11);
    }
  }
  if ( v5 != 1 )
  {
    if ( *(uint32_t *)(a2 + 140) == 0 )
    {
      ((void (*)(char *))Curl_cfree)(v13);
      return 0;
    }
    goto LABEL_7;
  }
  ((void (*)(char *))Curl_cfree)(v13);
  if ( inflateEnd(v2) != 0 )
    goto LABEL_15;
  inflateEnd(v2);
  *(uint32_t *)(a2 + 132) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A5E8D0  (binary VA: 0x1a5e8d0)
// Original: sub_1A5E8D0
// ----------------------------------------------------------------------------
int sub_1A5E8D0(uint32_t *a1)
{
  int v2;

  v2 = a1[7];
  if ( v2 != 0 )
    ((void (*)(int))Curl_cfree)(v2);
  if ( a1[4] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a1[4]);
  if ( a1[3] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a1[3]);
  if ( a1[1] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a1[1]);
  if ( a1[2] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a1[2]);
  if ( a1[10] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a1[10]);
  if ( a1[9] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a1[9]);
  return ((int (*)(uint32_t *))Curl_cfree)(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A5E960  (binary VA: 0x1a5e960)
// Original: sub_1A5E960
// ----------------------------------------------------------------------------
int sub_1A5E960(int a1)
{
  void *v1;
  const char *v2;
  const char *v3;
  const char *v4;
  uint8_t *v5;
  const char *v6;
  const char *v7;
  const char *v8;
  const char *v10;
  const char *v11;

  v1 = *(void **)(a1 + 8);
  if ( v1 == nullptr )
    v1 = &unk_1B15112;
  v2 = "TRUE";
  v3 = "TRUE";
  if ( *(uint8_t *)(a1 + 44) == 0 )
    v3 = "FALSE";
  v4 = "/";
  if ( *(uint32_t *)(a1 + 12) != 0 )
    v4 = *(const char **)(a1 + 12);
  v10 = v4;
  v5 = *(uint8_t **)(a1 + 16);
  if ( *(uint8_t *)(a1 + 32) == 0 )
    v2 = "FALSE";
  v6 = "unknown";
  v11 = v2;
  if ( v5 != nullptr )
    v6 = *(const char **)(a1 + 16);
  v7 = (const char *)&unk_1B15112;
  if ( *(uint8_t *)(a1 + 32) != 0 && v5 != nullptr && *v5 != 46 )
    v7 = ".";
  v8 = "#HttpOnly_";
  if ( *(uint8_t *)(a1 + 46) == 0 )
    v8 = (const char *)&unk_1B15112;
  return curl_maprintf(
           "%s%s%s\t%s\t%s\t%s\t%lld\t%s\t%s",
           v8,
           v7,
           v6,
           v11,
           v10,
           v3,
           *(uint32_t *)(a1 + 20),
           *(uint32_t *)(a1 + 24),
           *(uint32_t *)(a1 + 4),
           v1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A5EA80  (binary VA: 0x1a5ea80)
// Original: sub_1A5EA80
// ----------------------------------------------------------------------------
int sub_1A5EA80(int a1, int *a2)
{
  int v2;
  size_t v3;
  size_t v4;
  int v5;

  v2 = *a2;
  v3 = 0;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 12) != 0 )
    v3 = strlen(*(const char **)(*(uint32_t *)a1 + 12));
  if ( *(uint32_t *)(v2 + 12) == 0 )
  {
    v4 = 0;
    return -(v4 < v3);
  }
  v4 = strlen(*(const char **)(v2 + 12));
  v5 = 1;
  if ( v3 >= v4 )
    return -(v4 < v3);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A60610  (binary VA: 0x1a60610)
// Original: sub_1A60610
// ----------------------------------------------------------------------------
uint8_t * sub_1A60610(int a1, char *a2)
{
  uint8_t *v2;
  char *v3;
  char v4;
  int v5;
  char *v6;
  int v8[8];

  v2 = nullptr;
  v3 = (char *)curl_easy_unescape(a1, a2, 0, (int)(uintptr_t)(v8));
  if ( v3 != nullptr )
  {
    v2 = (uint8_t *)(malloc(2 * v8[0] + 1));
    if ( v2 != nullptr )
    {
      v4 = *v3;
      v5 = 0;
      if ( *v3 != 0 )
      {
        v6 = v3;
        do
        {
          if ( (uint8_t)(v4 - 33) > 0x5Du || v4 == 39 || v4 == 92 || v4 == 34 )
            v2[v5++] = 92;
          ++v6;
          v2[v5] = v4;
          v4 = *v6;
          ++v5;
        }
        while ( *v6 != 0 );
      }
      v2[v5] = 0;
      free(v3);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A606C0  (binary VA: 0x1a606c0)
// Original: sub_1A606C0
// ----------------------------------------------------------------------------
int sub_1A606C0(int *a1, uint8_t *a2)
{
  int v2;
  const char *v3;
  char *v4;
  const char *v5;
  char *v6;
  const char *v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  int result;
  int v13;
  int v14;
  char *v15;
  char *v16;
  char *v17;
  const char *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  char v23;
  char *v24;
  char *v25;
  char *v26;
  char *s;
  char *ptr;
  char *ptrc;
  void *ptra;
  void *ptrd;
  char *ptrb;
  void *ptre;
  char *v34;
  int v35;
  int v36;

  v2 = *a1;
  v35 = a1[76];
  v36 = *a1 + 44;
  v3 = *(const char **)(*a1 + 34228);
  *a2 = 1;
  if ( Curl_raw_nequal(v3, "/MATCH:", 7) != 0
    || Curl_raw_nequal(v3, "/M:", 3) != 0
    || Curl_raw_nequal(v3, "/FIND:", 6) != 0 )
  {
    v4 = (char *)(strchr(v3, 58));
    v34 = v4;
    if ( v4 != nullptr )
    {
      v5 = nullptr;
      ptr = v4 + 1;
      v6 = strchr(v4 + 1, 58);
      v7 = v6;
      v8 = ptr;
      if ( v6 != nullptr )
      {
        v7 = v6 + 1;
        *v6 = 0;
        v9 = strchr(v6 + 1, 58);
        v5 = v9;
        v8 = ptr;
        if ( v9 != nullptr )
        {
          v5 = v9 + 1;
          *v9 = 0;
          v10 = strchr(v9 + 1, 58);
          v8 = ptr;
          if ( v10 != nullptr )
            *v10 = 0;
        }
      }
      if ( v8 != nullptr && v34[1] != 0 )
      {
        if ( v7 != nullptr )
          goto LABEL_10;
        goto LABEL_22;
      }
    }
    else
    {
      v5 = nullptr;
      v7 = nullptr;
    }
    Curl_infof(v2, "lookup word is missing");
    v8 = "default";
    if ( v7 != nullptr )
    {
LABEL_10:
      if ( *v7 == 0 )
        v7 = "!";
      if ( v5 != nullptr )
        goto LABEL_13;
      goto LABEL_23;
    }
LABEL_22:
    v7 = "!";
    if ( v5 != nullptr )
    {
LABEL_13:
      if ( *v5 == 0 )
        v5 = ".";
      goto LABEL_15;
    }
LABEL_23:
    v5 = ".";
LABEL_15:
    v11 = (char *)(sub_1A60610(v2, v8));
    result = 27;
    if ( v11 == nullptr )
      return result;
    ptrc = v11;
    v13 = Curl_sendf(v35, a1, "CLIENT libcurl 7.21.7\r\nMATCH %s %s %s\r\nQUIT\r\n", v7, v5, v11);
    s = ptrc;
LABEL_17:
    ptra = (void *)v13;
    free(s);
    v14 = (int)(uintptr_t)(ptra);
    if ( ptra == nullptr )
      goto LABEL_24;
    Curl_failf(v2, "Failed sending DICT request");
    return (int)(uintptr_t)(ptra);
  }
  if ( Curl_raw_nequal(v3, "/DEFINE:", 8) != 0
    || Curl_raw_nequal(v3, "/D:", 3) != 0
    || Curl_raw_nequal(v3, "/LOOKUP:", 8) != 0 )
  {
    v15 = (char *)(strchr(v3, 58));
    v16 = v15;
    if ( v15 != nullptr )
    {
      ptrb = v15 + 1;
      v17 = strchr(v15 + 1, 58);
      v18 = v17;
      v19 = ptrb;
      if ( v17 != nullptr )
      {
        v18 = v17 + 1;
        *v17 = 0;
        v20 = strchr(v17 + 1, 58);
        v19 = ptrb;
        if ( v20 != nullptr )
          *v20 = 0;
      }
      if ( v19 != nullptr && v16[1] != 0 )
        goto LABEL_35;
    }
    else
    {
      v18 = nullptr;
    }
    Curl_infof(v2, "lookup word is missing");
    v19 = "default";
LABEL_35:
    if ( v18 != nullptr )
    {
      if ( *v18 == 0 )
        v18 = "!";
    }
    else
    {
      v18 = "!";
    }
    v21 = (char *)(sub_1A60610(v2, v19));
    result = 27;
    if ( v21 == nullptr )
      return result;
    v13 = Curl_sendf(v35, a1, "CLIENT libcurl 7.21.7\r\nDEFINE %s %s\r\nQUIT\r\n", v18, v21);
    s = v21;
    goto LABEL_17;
  }
  v22 = (char *)(strchr(v3, 47));
  result = 0;
  if ( v22 != nullptr )
  {
    v23 = v22[1];
    v24 = v22 + 1;
    if ( v23 != 0 )
    {
      v25 = v22 + 2;
      v26 = v22 + 1;
      do
      {
        if ( v23 == 58 )
          *v26 = 32;
        v26 = v25++;
        v23 = *(v25 - 1);
      }
      while ( v23 != 0 );
    }
    v14 = Curl_sendf(v35, a1, "CLIENT libcurl 7.21.7\r\n%s\r\nQUIT\r\n", v24);
    if ( v14 != 0 )
    {
      ptre = (void *)v14;
      Curl_failf(v2, "Failed sending DICT request");
      return (int)(uintptr_t)(ptre);
    }
LABEL_24:
    ptrd = (void *)v14;
    Curl_setup_transfer(a1, 0, -1, 0, v36, -1, 0);
    return (int)(uintptr_t)(ptrd);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A60E50  (binary VA: 0x1a60e50)
// Original: sub_1A60E50
// ----------------------------------------------------------------------------
int sub_1A60E50(int a1)
{
  int v1;

  v1 = *(uint32_t *)(*(uint32_t *)a1 + 34260);
  Curl_safefree(*(uint32_t *)(v1 + 4));
  if ( *(uint32_t *)(v1 + 8) != -1 )
    close(*(uint32_t *)(v1 + 8));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A60EA0  (binary VA: 0x1a60ea0)
// Original: sub_1A60EA0
// ----------------------------------------------------------------------------
int sub_1A60EA0(int *a1, uint8_t *a2)
{
  int v2;
  const char *v3;
  int v4;
  const char **v5;
  int v6;
  const char **v8;

  v2 = *a1;
  v3 = (const char *)(curl_easy_unescape(*a1, *(char **)(*a1 + 34228), 0, nullptr));
  v4 = 27;
  if ( v3 != nullptr )
  {
    Curl_reset_reqproto(a1);
    v5 = *(const char ***)(v2 + 34260);
    if ( v5 != nullptr )
    {
      Curl_safefree((int)(uintptr_t)(v5[1]));
      if ( v5[2] != (const char *)-1 )
        close((int)(uintptr_t)(v5[2]));
      *v5 = nullptr;
      v5[1] = nullptr;
      v5[2] = (const char *)-1;
    }
    else
    {
      v8 = (const char **)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 12);
      v5 = v8;
      if ( v8 == nullptr )
      {
        ((void (*)(const char *))Curl_cfree)(v3);
        return 27;
      }
      *(uint32_t *)(v2 + 34260) = (uint32_t)(uintptr_t)(v8);
    }
    v6 = open(v3, 0);
    v5[2] = (const char *)v6;
    *v5 = v3;
    v5[1] = v3;
    if ( *(uint8_t *)(v2 + 669) == 0 && v6 == -1 )
    {
      Curl_failf(v2, "Couldn't open file %s", *(uint32_t *)(v2 + 34228));
      sub_1A60E50((int)(uintptr_t)(a1));
      return 37;
    }
    else
    {
      v4 = 0;
      *a2 = 1;
    }
  }
  return v4;
}



// ============================================================================
// Address:   0x1a61010 (size: 2706 bytes)
// Symbol:    sub_1A61010
// Demangled: sub_1A61010
// ============================================================================
int (*sub_1A61010(int *a1, uint8_t *a2))(char *, int, size_t, uint32_t)
{
  int v2;
  int v3;
  __time_t tv_sec;
  int v5;
  const char *v6;
  int64_t v7; // rax
  char *v8;
  uint8_t i;
  int64_t v10; // rax
  int64_t v11; // rdi
  int (*v12)(char *, int, size_t, uint32_t);
  int v14;
  const char **v15;
  int fd;
  const char *v17;
  int v18;
  int v19;
  size_t v20;
  const void *v21;
  size_t v22;
  ssize_t v23;
  int (*v25)(char *, int, size_t, uint32_t);
  int v26;
  __uid_t v27;
  __off_t v28;
  int v29;
  int v30;
  __off_t st_size;
  struct stat buf;
  struct stat v54;
  struct tm tm_v54;
  int64_t v55; // 0:esi.4,4:edi.4
  uint64_t v56; // 0:esi.4,4:edi.4
  typedef uint8_t _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int64_t _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int64_t _g4_t_v37;
  typedef int64_t _g4_t_v38;
  typedef int64_t _g4_t_ptr;
  typedef int64_t _g4_t_ptra;
  typedef FILE *_g4_t_stream;
  typedef FILE *_g4_t_streama;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_endptr;
  typedef size_t _g4_t_n;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v33)) > _g4_s1 ? (4u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v34)) > _g4_s2 ? (8u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v35)) > _g4_s3 ? (8u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v36)) > _g4_s4 ? (16u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v37)) > _g4_s5 ? (16u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v38)) > _g4_s6 ? (16u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_ptr)) > _g4_s7 ? (24u + sizeof(_g4_t_ptr)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_ptra)) > _g4_s8 ? (24u + sizeof(_g4_t_ptra)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_stream)) > _g4_s9 ? (36u + sizeof(_g4_t_stream)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_streama)) > _g4_s10 ? (36u + sizeof(_g4_t_streama)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v43)) > _g4_s11 ? (40u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v44)) > _g4_s12 ? (40u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v46)) > _g4_s14 ? (44u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (51u + sizeof(_g4_t_v47)) > _g4_s15 ? (51u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v48)) > _g4_s16 ? (52u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v49)) > _g4_s17 ? (56u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v50)) > _g4_s18 ? (60u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_endptr)) > _g4_s19 ? (72u + sizeof(_g4_t_endptr)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_n)) > _g4_s20 ? (76u + sizeof(_g4_t_n)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 24u);
  _g4_t_ptra &ptra = *reinterpret_cast<_g4_t_ptra *>(_g4_sf + 24u);
  _g4_t_stream &stream = *reinterpret_cast<_g4_t_stream *>(_g4_sf + 36u);
  _g4_t_streama &streama = *reinterpret_cast<_g4_t_streama *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 51u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 72u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 76u);

  v34 = *a1;
  curlx_tvnow(&v49);
  v2 = v50;
  v3 = v49;
  *a2 = 1;
  v45 = v2;
  v43 = v3;
  Curl_initinfo(v34);
  Curl_pgrsStartNow(v34);
  if ( *(uint8_t *)(v34 + 669) != 0 )
  {
    v14 = *a1;
    v15 = *(const char ***)(*a1 + 34260);
    v33 = (char *)(strchr(*v15, 47));
    curlx_tvnow(&v49);
    v44 = v49;
    v46 = v50;
    a1[146] = *(uint32_t *)(v14 + 352);
    a1[147] = *(uint32_t *)(v14 + 280);
    v12 = (int (*)(char *, int, size_t, uint32_t))(dword_24 + 1);
    *(uint32_t *)(*a1 + 252) = v14 + 1216;
    if ( v33 == nullptr || v33[1] == 0 )
      return v12;
    if ( *(uint64_t *)(v14 + 34240) != 0 )
    {
      v17 = "ab";
    }
    else
    {
      fd = open(*v15, 577, *(uint32_t *)(*a1 + 712));
      if ( fd < 0 )
        goto LABEL_89;
      close(fd);
      v17 = "wb";
    }
    streama = fopen(*v15, v17);
    if ( streama != nullptr )
    {
      v18 = *(uint32_t *)(v14 + 444);
      if ( (v18 & *(uint32_t *)(v14 + 440)) != 0xFFFFFFFF )
        Curl_pgrsSetUploadSize(v14, *(uint32_t *)(v14 + 440), v18);
      if ( *(int *)(v14 + 34244) < 0 )
      {
        if ( fstat(fileno(streama), &v54) != 0 )
        {
          v12 = (int (*)(char *, int, size_t, uint32_t))(&dword_14 + 3);
          fclose(streama);
          Curl_failf(v14, "Can't get the size of %s", *v15);
          return v12;
        }
        st_size = v54.st_size;
        *(uint32_t *)(v14 + 34244) = v54.st_blksize;
        *(uint32_t *)(v14 + 34240) = st_size;
      }
      v37 = 0;
      while ( 1 )
      {
        v19 = Curl_fillreadbuffer((int)(uintptr_t)(a1), (char *)&reinterpret_cast<G4Elf32Sym *>(stru_3FF4)->st_info, &n);
        if ( v19 != 0 )
        {
LABEL_82:
          v12 = (int (*)(char *, int, size_t, uint32_t))v19;
          goto LABEL_40;
        }
        if ( (int)n <= 0 )
          break;
        v20 = n;
        v21 = (const void *)(v14 + 1216);
        v35 = *(uint64_t *)(v14 + 34240);
        if ( v35 != 0 )
        {
          if ( v35 < n )
          {
            v21 = (const void *)(v14 + v35 + 1216);
            v20 = n - v35;
            *(uint32_t *)(v14 + 34240) = 0;
            *(uint32_t *)(v14 + 34244) = 0;
          }
          else
          {
            v20 = 0;
            *(uint64_t *)(v14 + 34240) = v35 - n;
            v21 = (const void *)(v14 + 1216);
          }
        }
        if ( v20 != fwrite(v21, 1u, v20, streama) )
        {
          v12 = (int (*)(char *, int, size_t, uint32_t))(&dword_34 + 3);
          goto LABEL_40;
        }
        v37 += v20;
        Curl_pgrsSetUploadCounter(v14, v37, HIDWORD(v37));
        if ( Curl_pgrsUpdate(a1) != 0 )
        {
          v12 = (int (*)(char *, int, size_t, uint32_t))word_2A;
          goto LABEL_40;
        }
        v19 = Curl_speedcheck(v14, v44, v46);
        if ( v19 != 0 )
          goto LABEL_82;
      }
      v12 = nullptr;
      if ( Curl_pgrsUpdate(a1) != 0 )
        v12 = (int (*)(char *, int, size_t, uint32_t))word_2A;
LABEL_40:
      fclose(streama);
      return v12;
    }
LABEL_89:
    v12 = (int (*)(char *, int, size_t, uint32_t))(&dword_14 + 3);
    Curl_failf(v14, "Can't open %s for writing", *v15);
    return v12;
  }
  stream = *(FILE **)(*(uint32_t *)(*a1 + 34260) + 8);
  if ( fstat((int)(uintptr_t)(stream), &buf) == -1 )
  {
    v47 = 0;
    ptr = 0;
  }
  else
  {
    ptr = *(uint64_t *)&buf.st_size;
    tv_sec = buf.st_ctim.tv_sec;
    v47 = 1;
    v5 = *(uint32_t *)(v34 + 34236);
    *(uint32_t *)(v34 + 34312) = buf.st_ctim.tv_sec;
    if ( v5 == 0 && *(uint32_t *)(v34 + 524) != 0 && (uint8_t)Curl_meets_timecondition(v34, tv_sec) == 0 )
    {
      *a2 = 1;
      return nullptr;
    }
  }
  v48 = (char *)(v34 + 1216);
  if ( *(uint8_t *)(v34 + 667) != 0 && *(uint8_t *)(v34 + 664) != 0 && v47 != 0 )
  {
    curl_msnprintf((int)(uintptr_t)(v48), 16385, (int)(uintptr_t)("Content-Length: %lld\r\n"), ptr);
    v12 = Curl_client_write((int)(uintptr_t)(a1), 3, v48, 0);
    if ( v12 == nullptr )
    {
      v12 = Curl_client_write((int)(uintptr_t)(a1), 3, "Accept-ranges: bytes\r\n", 0);
      if ( v12 == nullptr )
      {
        v12 = (int (*)(char *, int, size_t, uint32_t))Curl_gmtime(buf.st_ctim.tv_sec, (int)(uintptr_t)(&tm_v54));
        if ( v12 == nullptr )
        {
          v27 = 6;
          if ( tm_v54.tm_wday != 0 )
            v27 = tm_v54.tm_wday - 1;
          curl_msnprintf(
            (int)(uintptr_t)(v48),
            0x3FFF,
            (int)(uintptr_t)("Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n"),
            *(&Curl_wkday + v27),
            tm_v54.tm_mday,
            (&Curl_month)[tm_v54.tm_mon],
            tm_v54.tm_year + 1900,
            tm_v54.tm_hour,
            tm_v54.tm_min,
            tm_v54.tm_sec);
          v12 = Curl_client_write((int)(uintptr_t)(a1), 3, v48, 0);
          Curl_pgrsSetDownloadSize(v34, ptr, HIDWORD(ptr));
        }
      }
    }
    return v12;
  }
  v36 = *a1;
  if ( *(uint8_t *)(*a1 + 34233) == 0 || (v6 = *(const char **)(*a1 + 34236)) == nullptr )
  {
    *(uint32_t *)(v36 + 32) = -1;
    *(uint32_t *)(v36 + 36) = -1;
    goto LABEL_18;
  }
  v7 = strtoll(v6, &endptr, 0);
  v8 = endptr;
  v55 = v7;
  for ( i = *endptr; *v8 != 0; i = *v8 )
  {
    v32 = i;
    if ( isspace(i) == 0 && v32 != 45 )
      break;
    endptr = ++v8;
  }
  v10 = strtoll(v8, (char **)&n, 0);
  if ( endptr == (char *)n )
  {
    v10 = -1;
  }
  else if ( (HIDWORD(v10) & (unsigned int)v10) != 0xFFFFFFFF )
  {
    goto LABEL_14;
  }
  if ( v55 >= 0 )
  {
    *(uint64_t *)(v36 + 34240) = v55;
    goto LABEL_18;
  }
LABEL_14:
  if ( v55 < 0 )
    *(uint64_t *)(v36 + 32) = -v55;
  else
    *(uint64_t *)(v36 + 32) = v10 - v55 + 1;
  *(uint64_t *)(v36 + 34240) = v55;
LABEL_18:
  LODWORD(v11) = *(uint32_t *)(v34 + 34244);
  HIDWORD(v11) = *(uint32_t *)(v34 + 34240);
  if ( (int)v11 < 0 )
  {
    if ( v47 == 0 )
    {
      v12 = (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 2);
      Curl_failf(v34, "Can't get the size of file.");
      return v12;
    }
    LODWORD(v11) = (*(uint64_t *)&buf.st_size + __PAIR64__(v11, HIDWORD(v11))) >> 32;
    HIDWORD(v11) += buf.st_size;
    *(uint64_t *)(v34 + 34240) = __PAIR64__(v11, HIDWORD(v11));
  }
  if ( ptr < __SPAIR64__(v11, HIDWORD(v11)) )
  {
    v12 = (int (*)(char *, int, size_t, uint32_t))dword_24;
    Curl_failf(v34, "failed to resume file:// transfer");
  }
  else
  {
    v38 = *(uint64_t *)(v34 + 32);
    if ( *(int64_t *)(v34 + 32) <= 0 )
      v38 = ptr - __PAIR64__(v11, HIDWORD(v11));
    if ( v47 != 0 )
    {
      v12 = nullptr;
      if ( v38 == 0 )
        return v12;
      Curl_pgrsSetDownloadSize(v34, v38, HIDWORD(v38));
      HIDWORD(v11) = *(uint32_t *)(v34 + 34240);
      LODWORD(v11) = *(uint32_t *)(v34 + 34244);
    }
    if ( v11 == 0
      || (v28 = lseek((int)(uintptr_t)(stream), SHIDWORD(v11), 0),
          v29 = v28 ^ HIDWORD(v11) | v11 ^ (v28 >> 31),
          v12 = (int (*)(char *, int, size_t, uint32_t))dword_24,
          v29 == 0) )
    {
      Curl_pgrsTime(v34, 5);
      ptra = 0;
      while ( 1 )
      {
        v22 = v38 > 16382 ? 0x3FFF : v38;
        v23 = read((int)(uintptr_t)(stream), v48, v22);
        if ( v23 <= 0 )
          break;
        *(uint8_t *)(v34 + v23 + 1216) = 0;
        if ( v38 == 0 )
          break;
        HIDWORD(v56) = v23 >> 31;
        LODWORD(v56) = v23;
        v38 -= v23;
        v25 = Curl_client_write((int)(uintptr_t)(a1), 1, v48, v23);
        if ( v25 != nullptr )
          return v25;
        ptra += v56;
        Curl_pgrsSetDownloadCounter(v34, ptra, HIDWORD(ptra));
        if ( Curl_pgrsUpdate(a1) != 0 )
        {
          v26 = 42;
          goto LABEL_53;
        }
        v30 = Curl_speedcheck(v34, v43, v45);
        if ( v30 != 0 )
        {
          v26 = v30;
          goto LABEL_53;
        }
      }
      v26 = 0;
LABEL_53:
      v12 = (int (*)(char *, int, size_t, uint32_t))word_2A;
      if ( Curl_pgrsUpdate(a1) == 0 )
        return (int (*)(char *, int, size_t, uint32_t))v26;
    }
  }
  return v12;
}
// ----------------------------------------------------------------------------
// Function: sub_1A61BB0  (binary VA: 0x1a61bb0)
// Original: sub_1A61BB0
// ----------------------------------------------------------------------------
uint32_t * sub_1A61BB0(int a1, int a2, int a3)
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1u, 0x40u));
  if ( result != nullptr )
  {
    if ( a1 != 0 )
      result[3] = a1;
    if ( a2 != 0 )
      result[6] = a2;
    result[8] = 1;
    if ( a3 != 0 )
    {
      result[15] = *(uint32_t *)(a3 + 60);
      *(uint32_t *)(a3 + 60) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A61C40  (binary VA: 0x1a61c40)
// Original: sub_1A61C40
// ----------------------------------------------------------------------------
size_t sub_1A61C40(int a1, void *ptr, size_t n)
{
  uint32_t *v3;
  FILE *stream;
  size_t result;
  FILE *v7;
  int (*v8)(void *, int, size_t, uint32_t);
  void *v9;

  v3 = *(uint32_t **)a1;
  if ( *(uint32_t *)(*(uint32_t *)a1 + 4) == 2 )
  {
    v8 = *(int (**)(void *, int, size_t, uint32_t))(a1 + 12);
    result = 0;
    if ( v8 == nullptr )
      return result;
    result = v8(ptr, 1, n, v3[2]);
    if ( n < result )
    {
      v7 = *(FILE **)(a1 + 8);
      if ( v7 == nullptr )
        goto LABEL_7;
      goto LABEL_6;
    }
LABEL_4:
    if ( result != 0 )
      return result;
    v7 = *(FILE **)(a1 + 8);
    if ( v7 != nullptr )
    {
LABEL_6:
      fclose(v7);
      *(uint32_t *)(a1 + 8) = 0;
    }
LABEL_7:
    *(uint32_t *)a1 = **(uint32_t **)a1;
    return 0;
  }
  stream = *(FILE **)(a1 + 8);
  if ( stream != nullptr
    || (v9 = ptr,
        stream = fopen((const char *)v3[2], "rb"),
        *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(stream),
        result = 0xFFFFFFFF,
        ptr = v9,
        stream != nullptr) )
  {
    result = fread(ptr, 1u, n, stream);
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A61D30  (binary VA: 0x1a61d30)
// Original: sub_1A61D30
// ----------------------------------------------------------------------------
int sub_1A61D30(const char *s)
{
  const char *v1;
  const char *v2;
  char *(*v3)(const char *);
  char *v4;
  char *v5;
  char *v6;
  int v7;

  v1 = (const char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), s));
  v2 = v1;
  if ( v1 == nullptr )
    return 0;
  v3 = (char *(*)(const char *))(uintptr_t)(Curl_cstrdup);
  v4 = (char *)(strrchr(v1, 47));
  v5 = (char *)(strrchr(v2, 92));
  if ( v5 != nullptr )
  {
    v6 = v5 + 1;
    if ( v4 != nullptr )
    {
      v6 = v4 + 1;
      if ( v4 <= v5 )
        v6 = v5 + 1;
    }
  }
  else if ( v4 != nullptr )
  {
    v6 = v4 + 1;
  }
  else
  {
    v6 = (char *)v2;
  }
  v7 = (int)(uintptr_t)(v3(v6));
  ((void (*)(const char *))Curl_cfree)(v2);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A61DF0  (binary VA: 0x1a61df0)
// Original: sub_1A61DF0
// ----------------------------------------------------------------------------
int sub_1A61DF0(uint32_t **a1, unsigned int a2, char *s, size_t n, uint64_t *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  unsigned int v9;
  uint32_t *v10;
  void *v12;
  unsigned int v14;
  struct stat buf;

  v6 = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 0x10u));
  v7 = v6;
  v8 = 27;
  v9 = a2;
  if ( v6 == nullptr )
    return v8;
  *v6 = 0;
  if ( a2 <= 1 )
  {
    if ( n == 0 )
    {
      n = strlen(s);
      v9 = a2;
    }
    v14 = v9;
    v12 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), n + 1));
    v7[2] = (uint32_t)(uintptr_t)(v12);
    if ( v12 == nullptr )
    {
      v8 = 27;
      ((void (*)(uint32_t *))Curl_cfree)(v7);
      return v8;
    }
    memcpy(v12, s, n);
    v7[3] = n;
    *(uint8_t *)(v7[2] + n) = 0;
    v9 = v14;
    v7[1] = v14;
    v10 = *a1;
    if ( *a1 != nullptr )
      goto LABEL_4;
  }
  else
  {
    v6[2] = (uint32_t)(uintptr_t)(s);
    v6[1] = a2;
    v10 = *a1;
    if ( *a1 != nullptr )
    {
LABEL_4:
      *v10 = (uint32_t)(uintptr_t)(v7);
      *a1 = v7;
      goto LABEL_5;
    }
  }
  *a1 = v7;
LABEL_5:
  v8 = 0;
  if ( a5 != nullptr )
  {
    if ( v9 == 3 )
    {
      if ( curl_strequal("-", (char *)v7[2]) == 0 && stat((const char *)v7[2], &buf) == 0 )
        *a5 += *(uint64_t *)&buf.st_size;
    }
    else
    {
      *a5 += n;
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_1A61FC0  (binary VA: 0x1a61fc0)
// Original: sub_1A61FC0
// ----------------------------------------------------------------------------
int sub_1A61FC0(uint32_t **a1, uint64_t *a2, char *a3, ...)
{
  char s[4100];
  va_list va;

  va_start(va, a3);
  curl_mvsnprintf(s, 4096, a3, g4_va_cast<unsigned int *>(va));
  return sub_1A61DF0(a1, 0, s, 0, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A62050  (binary VA: 0x1a62050)
// Original: sub_1A62050
// ----------------------------------------------------------------------------
char * sub_1A62050(const char *s, size_t a2)
{
  size_t n;
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  char v8;

  if ( a2 != 0 )
  {
    n = a2;
    v4 = 0;
    v8 = 0;
  }
  else
  {
    if ( s == nullptr )
      return (char *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cstrdup), (const char *)&unk_1B15112));
    n = strlen(s);
    v8 = 1;
    v4 = 1;
  }
  v5 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), n + v4);
  v6 = v5;
  if ( v5 != nullptr )
  {
    memcpy(v5, s, n);
    if ( v8 != 0 )
      v6[n] = 0;
  }
  return (char *)(v6);
}



// ============================================================================
// Address:   0x1a63500 (size: 623 bytes)
// Symbol:    sub_1A63500
// Demangled: sub_1A63500
// ============================================================================
int (*sub_1A63500(int *a1, uint8_t *a2))(char *, int, size_t, uint32_t)
{
  char * s;
  size_t v3;
  int i;
  char *v5;
  int (*result)(char *, int, size_t, uint32_t);
  size_t v7;
  int v8;
  int (*v9)(char *, int, size_t, uint32_t);
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int (*_g4_t_v13)(char *, int, size_t, uint32_t);
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v14)) > _g4_s2 ? (0u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v15)) > _g4_s3 ? (4u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v17)) > _g4_s5 ? (12u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v16 = *a1;
  v15 = a1[76];
  s = (char *)(*(const char **)(*a1 + 34228));
  *a2 = 1;
  if ( strlen(s) <= 2 )
  {
    v7 = 0;
    v17 = 0;
    v5 = (char *)&unk_1B15112;
LABEL_9:
    v8 = curlx_uztosz(v7);
    while ( 1 )
    {
      v10 = Curl_write((int)(uintptr_t)(a1), v15, (int)(uintptr_t)(v5), v8, (int *)&v18);
      if ( v10 != 0 )
      {
        v12 = v10;
        Curl_failf(v16, "Failed sending Gopher request");
        Curl_safefree(v17);
        return (int (*)(char *, int, size_t, uint32_t))v12;
      }
      v9 = Curl_client_write((int)(uintptr_t)(a1), 2, v5, v18);
      if ( v9 != nullptr )
      {
        v13 = v9;
        Curl_safefree(v17);
        return v13;
      }
      v8 -= v18;
      if ( v8 <= 0 )
        break;
      v5 += v18;
      Curl_socket_ready(-1, v15, 100);
    }
    Curl_safefree(v17);
    v11 = Curl_sendf(v15, a1, "\r\n");
    if ( v11 != 0 )
    {
      v14 = v11;
      Curl_failf(v16, "Failed sending Gopher request");
      return (int (*)(char *, int, size_t, uint32_t))v14;
    }
    else
    {
      result = Curl_client_write((int)(uintptr_t)(a1), 2, "\r\n", 2u);
      if ( result == nullptr )
      {
        Curl_setup_transfer(a1, 0, -1, 0, v16 + 44, -1, 0);
        return nullptr;
      }
    }
    return result;
  }
  v3 = strlen(s + 2);
  if ( v3 != 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      while ( s[i + 2] != 63 )
      {
        if ( ++i == v3 )
          goto LABEL_7;
      }
      s[i + 2] = 9;
    }
  }
LABEL_7:
  v5 = (char *)(curl_easy_unescape(v16, (char *)s + 2, 0, v19));
  result = (int (*)(char *, int, size_t, uint32_t))(&dword_18 + 3);
  if ( v5 != nullptr )
  {
    v7 = strlen(v5);
    v17 = (int)(uintptr_t)(v5);
    goto LABEL_9;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_1A63770  (binary VA: 0x1a63770)
// Original: sub_1A63770
// ----------------------------------------------------------------------------
int sub_1A63770(uint8_t *a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *(uint32_t *)a1;
  v2 = 0;
  v3 = *(uint32_t *)(*(uint32_t *)a1 + 132);
  if ( *(uint8_t *)(*(uint32_t *)a1 + 660) != 0
    && v3 > 399
    && (*(uint64_t *)(v1 + 34240) == 0 || v3 != 416 || *(uint32_t *)(v1 + 532) != 1) )
  {
    if ( v3 == 407 || (v2 = 1, v3 == 401) )
    {
      if ( v3 == 401 )
      {
        v2 = 1;
        if ( a1[440] == 0 )
          return v2;
      }
      else
      {
        v2 = 1;
        if ( a1[441] == 0 )
          return v2;
      }
      return *(uint8_t *)(v1 + 34144);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63820  (binary VA: 0x1a63820)
// Original: sub_1A63820
// ----------------------------------------------------------------------------
int sub_1A63820(int a1, uint32_t *a2)
{
  *a2 = *(uint32_t *)(a1 + 304);
  return 0x10000;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63840  (binary VA: 0x1a63840)
// Original: sub_1A63840
// ----------------------------------------------------------------------------
int sub_1A63840(int a1, uint8_t *a2)
{
  int result;

  result = Curl_ssl_connect_nonblocking((uint32_t *)a1, 0, a2);
  if ( result != 0 )
    *(uint8_t *)(a1 + 436) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63890  (binary VA: 0x1a63890)
// Original: sub_1A63890
// ----------------------------------------------------------------------------
size_t sub_1A63890(void *dest, int a2, int a3, uint32_t *a4)
{
  size_t n;
  int v5;
  int v7;
  int v8;
  int v9;

  n = 0;
  v5 = *(uint32_t *)(*a4 + 34260);
  if ( *(uint64_t *)(v5 + 4) != 0 )
  {
    n = a3 * a2;
    *(uint8_t *)(*a4 + 259) = *(uint32_t *)(v5 + 76) == 1;
    if ( *(uint64_t *)(v5 + 4) > (int64_t)n )
    {
      memcpy(dest, *(const void **)(v5 + 12), n);
      *(uint32_t *)(v5 + 12) += n;
      *(uint64_t *)(v5 + 4) -= n;
    }
    else
    {
      memcpy(dest, *(const void **)(v5 + 12), *(uint32_t *)(v5 + 4));
      v7 = *(uint32_t *)(v5 + 68);
      n = *(uint32_t *)(v5 + 4);
      if ( *(uint64_t *)(v5 + 68) != 0 )
      {
        v8 = *(uint32_t *)(v5 + 64);
        *(uint32_t *)(v5 + 8) = *(uint32_t *)(v5 + 72);
        v9 = *(uint32_t *)(v5 + 56);
        *(uint32_t *)(v5 + 12) = v8;
        *(uint32_t *)(v5 + 4) = v7;
        a4[146] = v9;
        a4[147] = *(uint32_t *)(v5 + 60);
        *(uint32_t *)(v5 + 68) = 0;
        ++*(uint32_t *)(v5 + 76);
        *(uint32_t *)(v5 + 72) = 0;
      }
      else
      {
        *(uint32_t *)(v5 + 4) = 0;
        *(uint32_t *)(v5 + 8) = 0;
      }
    }
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_1A639C0  (binary VA: 0x1a639c0)
// Original: sub_1A639C0
// ----------------------------------------------------------------------------
void * sub_1A639C0(char *a1)
{
  char i;
  const char *s;
  uint8_t j;
  char *v4;
  int v5;
  void *v6;

  for ( i = *a1; *a1 != 58; i = *++a1 )
  {
    if ( i == 0 )
      break;
  }
  s = &a1[-(i == 0) + 1];
  for ( j = *s; *s != 0; j = *++s )
  {
    if ( isspace(j) == 0 )
      break;
  }
  v4 = (char *)(strchr(s, 13));
  if ( v4 != nullptr || (v4 = (char *)(strchr(s, 10))) != nullptr || (v6 = nullptr, (v4 = (char *)(strchr(s, 0))) != nullptr) )
  {
    if ( v4 > s )
    {
      do
      {
        if ( isspace((uint8_t)*v4) == 0 )
          break;
        --v4;
      }
      while ( v4 != s );
    }
    v5 = v4 - s;
    v6 = (void *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), v5 + 2));
    if ( v6 != nullptr )
    {
      memcpy(v6, s, v5 + 1);
      *((uint8_t *)v6 + v5 + 1) = 0;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63CA0  (binary VA: 0x1a63ca0)
// Original: sub_1A63CA0
// ----------------------------------------------------------------------------
int sub_1A63CA0(uint32_t *a1, uint32_t *a2, int a3)
{
  int result;
  int v4;

  result = 0;
  if ( (*(uint8_t *)(a1[120] + 60) & 1) != 0 && a3 != 0 )
  {
    v4 = a1[87];
    if ( v4 == 3 )
    {
      *a2 = a1[76];
      return 0x10000;
    }
    else if ( v4 == 2 )
    {
      *a2 = a1[76];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63D00  (binary VA: 0x1a63d00)
// Original: sub_1A63D00
// ----------------------------------------------------------------------------
int sub_1A63D00(int a1, int a2, size_t n)
{
  unsigned int v5;
  unsigned int v6;
  int v8;
  unsigned int v9;
  int v10;
  void *dest;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;

  v5 = n + *(uint32_t *)(a2 + 80);
  v6 = *(uint32_t *)(a1 + 1212);
  if ( v5 < v6 )
  {
    dest = *(void **)(a2 + 76);
    goto LABEL_9;
  }
  if ( v5 <= 0x19000 )
  {
    v8 = 2 * v6;
    v9 = (3 * v5) >> 1;
    v14 = *(uint32_t *)(a1 + 1208);
    if ( v9 >= 2 * v6 )
      v8 = v9;
    v16 = *(uint32_t *)(a2 + 76);
    v15 = v8;
    v10 = ((int (*)(uint32_t, int))Curl_crealloc)(*(uint32_t *)(a1 + 1208), v8);
    if ( v10 == 0 )
    {
      Curl_failf(a1, "Failed to alloc memory for big header!");
      return 27;
    }
    *(uint32_t *)(a1 + 1212) = v15;
    *(uint32_t *)(a1 + 1208) = v10;
    dest = (void *)(v16 - v14 + v10);
    *(uint32_t *)(a2 + 76) = (uint32_t)(uintptr_t)(dest);
LABEL_9:
    memcpy(dest, *(const void **)(a2 + 88), n);
    v12 = *(uint32_t *)(a2 + 76);
    *(uint32_t *)(a2 + 80) += n;
    v13 = (uint8_t *)(v12 + n);
    *(uint32_t *)(a2 + 76) = (uint32_t)(uintptr_t)(v13);
    *v13 = 0;
    return 0;
  }
  Curl_failf(a1, "Avoided giant realloc for header (max is %d)!", 102400);
  return 27;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63E20  (binary VA: 0x1a63e20)
// Original: sub_1A63E20
// ----------------------------------------------------------------------------
char sub_1A63E20(int a1, int a2)
{
  int v3;
  const char *v4;
  size_t v5;

  v3 = a1;
  if ( a1 == 0 )
    return Curl_raw_nequal("HTTP/", a2, 5) != 0;
  while ( 1 )
  {
    v4 = *(const char **)v3;
    v5 = strlen(*(const char **)v3);
    if ( Curl_raw_nequal(v4, a2, v5) != 0 )
      break;
    v3 = *(uint32_t *)(v3 + 4);
    if ( v3 == 0 )
      return Curl_raw_nequal("HTTP/", a2, 5) != 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A63EA0  (binary VA: 0x1a63ea0)
// Original: sub_1A63EA0
// ----------------------------------------------------------------------------
int sub_1A63EA0(int a1)
{
  int v1;
  int result;
  int v4;
  char v5; // bp
  bool v6;
  int v7;
  int64_t v8;
  int64_t v9;

  v1 = *(uint32_t *)a1;
  v7 = *(uint32_t *)(*(uint32_t *)a1 + 34260);
  result = 0;
  if ( v7 != 0 )
  {
    v4 = *(uint32_t *)(v1 + 532);
    if ( v4 == 1 || v4 == 5 )
      return 0;
    v9 = 0;
    v5 = *(uint8_t *)(a1 + 450);
    v8 = *(uint64_t *)(v7 + 32);
    v6 = false;
    if ( v5 == 0 )
    {
      switch ( v4 )
      {
        case 3:
          v9 = *(uint64_t *)(v7 + 4);
          v6 = (HIDWORD(v9) & (unsigned int)v9) == -1;
          break;
        case 4:
          v9 = *(uint64_t *)(v1 + 440);
          v6 = (HIDWORD(v9) & (unsigned int)v9) == -1;
          break;
        case 2:
          v9 = *(uint64_t *)(v1 + 324);
          v6 = false;
          if ( (HIDWORD(v9) & (unsigned int)v9) == 0xFFFFFFFF )
          {
            v6 = true;
            if ( *(uint32_t *)(v1 + 316) != 0 )
            {
              v9 = strlen(*(const char **)(v1 + 316));
              v6 = false;
            }
          }
          break;
        default:
          v6 = true;
          v9 = -1;
          break;
      }
    }
    *(uint8_t *)(a1 + 451) = 0;
    if ( v9 > v8 || v6 )
    {
      if ( *(uint32_t *)(v1 + 34132) == 8 || *(uint32_t *)(v1 + 34116) == 8 )
      {
        if ( v9 - v8 <= 1999 || *(uint32_t *)(a1 + 592) != 0 )
        {
          result = 0;
          if ( v5 == 0 )
            *(uint8_t *)(a1 + 451) = 1;
          return result;
        }
        result = 0;
        if ( *(uint8_t *)(a1 + 436) != 0 )
          return result;
        Curl_infof(v1, "NTLM send, close instead of sending %lld bytes\n", v9 - v8);
      }
      result = 0;
      *(uint8_t *)(a1 + 436) = 1;
      *(uint32_t *)(v1 + 20) = 0;
      *(uint32_t *)(v1 + 24) = 0;
      if ( v8 != 0 )
        return Curl_readrewind(a1);
    }
    else
    {
      result = 0;
      if ( v8 != 0 )
        return Curl_readrewind(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A64290  (binary VA: 0x1a64290)
// Original: sub_1A64290
// ----------------------------------------------------------------------------
int sub_1A64290(int a1, int a2, int a3, char *a4, char a5)
{
  int v7;
  int v8;
  int result;
  int v10;
  char v11;
  size_t v12;
  int v13;
  char v14;
  const char *v15;
  char v16;
  const char *v17;
  void *v18;
  const char *v19;
  int v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v27)) > _g4_s6 ? (44u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  v7 = *(uint32_t *)a1;
  v8 = *(uint32_t *)(a2 + 4);
  switch ( v8 )
  {
    case 1:
      if ( a5 == 0 )
      {
        if ( *(uint8_t *)(a1 + 440) != 0 )
        {
          v20 = Curl_checkheaders(v7, "Authorization:");
          v11 = a5;
          if ( v20 == 0 )
          {
            v24 = *(uint32_t *)a1;
            v25 = (int *)(a1 + 512);
            v21 = *(uint32_t *)(a1 + 260);
            v26 = *(uint32_t *)(a1 + 264);
            goto LABEL_12;
          }
        }
LABEL_8:
        *(uint8_t *)(a2 + 12) = 1;
        goto LABEL_4;
      }
      if ( *(uint8_t *)(a1 + 441) == 0 )
        goto LABEL_8;
      v10 = Curl_checkheaders(v7, "Proxy-authorization:");
      v11 = a5;
      if ( v10 != 0 )
        goto LABEL_8;
      v24 = *(uint32_t *)a1;
      v25 = (int *)(a1 + 500);
      v21 = *(uint32_t *)(a1 + 268);
      v26 = *(uint32_t *)(a1 + 272);
LABEL_12:
      v22 = v11;
      curl_msnprintf(v24 + 1216, 16385, (int)(uintptr_t)("%s:%s"), v21, v26);
      v12 = strlen((const char *)(v24 + 1216));
      v13 = Curl_base64_encode(v24, (char *)(v24 + 1216), v12, (int)(uintptr_t)(v27));
      result = 27;
      v14 = v22;
      if ( v13 != 0 )
      {
        if ( *v25 != 0 )
        {
          ((void (*)(int))Curl_cfree)(*v25);
          v14 = v22;
        }
        v15 = "Proxy-";
        v23 = v14;
        if ( v14 == 0 )
          v15 = (const char *)&unk_1B15112;
        *v25 = curl_maprintf("%sAuthorization: Basic %s\r\n", v15, v27[0]);
        ((void (*)(int))Curl_cfree)(v27[0]);
        result = 27;
        v16 = v23;
        if ( *v25 != 0 )
        {
          *(uint8_t *)(a2 + 12) = 1;
          v17 = "Basic";
LABEL_20:
          if ( v16 != 0 )
          {
            v18 = *(void **)(a1 + 268);
            if ( v18 == nullptr )
              v18 = &unk_1B15112;
            v19 = "Proxy";
          }
          else
          {
            v18 = *(void **)(a1 + 260);
            if ( v18 == nullptr )
              v18 = &unk_1B15112;
            v19 = "Server";
          }
          Curl_infof(v7, "%s auth using %s with user '%s'\n", v19, v17, v18);
          *(uint8_t *)(a2 + 13) = *(uint8_t *)(a2 + 12) ^ 1;
          return 0;
        }
      }
      return result;
    case 2:
      result = Curl_output_digest(a1, a5, a3, a4);
      v17 = "Digest";
      v16 = a5;
      if ( result != 0 )
        return result;
      goto LABEL_20;
    case 8:
      result = Curl_output_ntlm(a1, a5);
      v17 = "NTLM";
      v16 = a5;
      if ( result != 0 )
        return result;
      goto LABEL_20;
    default:
LABEL_4:
      *(uint8_t *)(a2 + 13) = 0;
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A65140  (binary VA: 0x1a65140)
// Original: sub_1A65140
// ----------------------------------------------------------------------------
int sub_1A65140(int a1, int a2, char **a3)
{
  int v3;
  int result;
  int v6;
  int v7;

  v3 = *(uint32_t *)(a1 + 536);
  *(uint8_t *)(a1 + 34204) = 0;
  if ( v3 == 2
    || (result = 0, v3 != 1) && ((v6 = *(uint32_t *)(a2 + 280)) == 11 || v6 != 10 && *(uint32_t *)(a1 + 34200) != 10) )
  {
    v7 = Curl_checkheaders(a1, "Expect:");
    if ( v7 != 0 )
    {
      *(uint8_t *)(a1 + 34204) = Curl_compareheader(v7, "Expect:", "100-continue");
      return 0;
    }
    else
    {
      result = Curl_add_bufferf(a3, "Expect: 100-continue\r\n");
      if ( result == 0 )
        *(uint8_t *)(a1 + 34204) = 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A688E0  (binary VA: 0x1a688e0)
// Original: sub_1A688E0
// ----------------------------------------------------------------------------
int sub_1A688E0(int *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  v2 = *a1;
  if ( v2 != 0 )
    ((void (*)(int))Curl_cfree)(v2);
  v3 = a1[1];
  *a1 = 0;
  if ( v3 != 0 )
    ((void (*)(int))Curl_cfree)(v3);
  v4 = a1[2];
  a1[1] = 0;
  if ( v4 != 0 )
    ((void (*)(int))Curl_cfree)(v4);
  v5 = a1[5];
  a1[2] = 0;
  if ( v5 != 0 )
    ((void (*)(int))Curl_cfree)(v5);
  v6 = a1[6];
  a1[5] = 0;
  if ( v6 != 0 )
    ((void (*)(int))Curl_cfree)(v6);
  result = a1[7];
  a1[6] = 0;
  if ( result != 0 )
    result = ((int (*)(int))Curl_cfree)(result);
  a1[7] = 0;
  a1[8] = 0;
  a1[3] = 0;
  *((uint8_t *)a1 + 16) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A689A0  (binary VA: 0x1a689a0)
// Original: sub_1A689A0
// ----------------------------------------------------------------------------
int sub_1A689A0(int a1, int a2)
{
  int v3;
  int v5;
  int result;
  int v7;

  v3 = 0;
  do
  {
    v5 = *(uint8_t *)(a1 + v3++);
    v7 = a2;
    a2 += 2;
    result = curl_msnprintf(v7, 3, (int)(uintptr_t)("%02x"), v5);
  }
  while ( v3 != 16 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A69630  (binary VA: 0x1a69630)
// Original: sub_1A69630
// ----------------------------------------------------------------------------
int sub_1A69630(uint8_t *a1, uint32_t *a2)
{
  char v3;
  uint8_t v4; // di
  uint8_t v5;
  char v6;
  uint8_t v7; // di
  uint8_t v8;
  uint8_t v10[20];

  v3 = a1[1] >> 1;
  v10[0] = *a1;
  v10[1] = v3 | (v10[0] << 7);
  v4 = a1[3];
  v10[2] = (a1[2] >> 2) | (a1[1] << 6);
  v5 = a1[4];
  v10[3] = (v4 >> 3) | (32 * a1[2]);
  v6 = (v5 >> 4) | (16 * v4);
  v7 = a1[5];
  v10[4] = v6;
  v8 = a1[6];
  v10[5] = (v7 >> 5) | (8 * a1[4]);
  v10[6] = (v8 >> 6) | (4 * v7);
  v10[7] = 2 * v8;
  DES_set_odd_parity((int)(uintptr_t)(v10));
  return DES_set_key(v10, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A69700  (binary VA: 0x1a69700)
// Original: sub_1A69700
// ----------------------------------------------------------------------------
unsigned int sub_1A69700(uint8_t *a1, uint8_t *a2, uint8_t *a3)
{
  uint32_t v6[35];

  sub_1A69630(a1, v6);
  DES_ecb_encrypt(a2, a3, (int)(uintptr_t)(v6), 1);
  sub_1A69630(a1 + 7, v6);
  DES_ecb_encrypt(a2, a3 + 8, (int)(uintptr_t)(v6), 1);
  sub_1A69630(a1 + 14, v6);
  return DES_ecb_encrypt(a2, a3 + 16, (int)(uintptr_t)(v6), 1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A697E0  (binary VA: 0x1a697e0)
// Original: sub_1A697E0
// ----------------------------------------------------------------------------
int sub_1A697E0(const char *s, int a2)
{
  size_t v3;
  char *v4;
  int result;
  char v6;
  int v8[30];

  v3 = strlen(s);
  v4 = (char *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 2 * v3);
  result = 27;
  if ( v4 != nullptr )
  {
    if ( v3 != 0 )
    {
      LOBYTE(result) = 0;
      do
      {
        v6 = s[result];
        v4[2 * result + 1] = 0;
        v4[2 * result++] = v6;
      }
      while ( result != v3 );
    }
    MD4_Init((int)(uintptr_t)(v8));
    MD4_Update((int)(uintptr_t)(v8), v4, 2 * v3);
    MD4_Final((int *)a2, v8);
    *(uint32_t *)(a2 + 16) = 0;
    *(uint8_t *)(a2 + 20) = 0;
    ((void (*)(char *))Curl_cfree)(v4);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B4E0  (binary VA: 0x1a6b4e0)
// Original: sub_1A6B4E0
// ----------------------------------------------------------------------------
int sub_1A6B4E0(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return ((int (*)(int))Curl_cfree)(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B510  (binary VA: 0x1a6b510)
// Original: sub_1A6B510
// ----------------------------------------------------------------------------
bool sub_1A6B510(uint32_t *a1, int a2, uint32_t *a3)
{
  return *a1 == *a3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B530  (binary VA: 0x1a6b530)
// Original: sub_1A6B530
// ----------------------------------------------------------------------------
int sub_1A6B530(uint32_t *a1, int a2, int a3)
{
  return *a1 % a3;
}

// ----------------------------------------------------------------------------
// Function: nullsub_876  (binary VA: 0x1a6b558)
// Original: nullsub_876
// ----------------------------------------------------------------------------
void nullsub_876()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B560  (binary VA: 0x1a6b560)
// Original: sub_1A6B560
// ----------------------------------------------------------------------------
void sub_1A6B560(int a1, void *a2)
{
  G4_MEM_CALL((uintptr_t)(Curl_cfree), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B590  (binary VA: 0x1a6b590)
// Original: sub_1A6B590
// ----------------------------------------------------------------------------
int sub_1A6B590(int *a1, uint32_t *a2)
{
  uint32_t *v3;
  int result;
  int v5;
  int v6;
  int inserted;

  v3 = (uint32_t *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 8u));
  result = 3;
  if ( v3 != nullptr )
  {
    v5 = 0;
    *v3 = *a2;
    v3[1] = a2[1];
    if ( Curl_llist_count((int)(uintptr_t)(a1)) != 0 )
    {
      v6 = *a1;
      if ( *a1 != 0 )
      {
        while ( (int)curlx_tvdiff(**(uint32_t **)v6, *(uint32_t *)(*(uint32_t *)v6 + 4), *v3, v3[1]) <= 0 )
        {
          v5 = v6;
          if ( *(uint32_t *)(v6 + 8) == 0 )
            break;
          v6 = *(uint32_t *)(v6 + 8);
        }
      }
    }
    inserted = Curl_llist_insert_next(a1, v5, (int)(uintptr_t)(v3));
    result = 0;
    if ( inserted == 0 )
    {
      G4_MEM_CALL((uintptr_t)(Curl_cfree), v3);
      return 3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B670  (binary VA: 0x1a6b670)
// Original: sub_1A6B670
// ----------------------------------------------------------------------------
int sub_1A6B670(int result, uint32_t *a2, int a3)
{
  if ( *a2 != a3 )
  {
    *a2 = a3;
    if ( a3 == 15 )
    {
      result = *(uint32_t *)(result + 8);
      --*(uint32_t *)(result + 68);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B690  (binary VA: 0x1a6b690)
// Original: sub_1A6B690
// ----------------------------------------------------------------------------
int sub_1A6B690(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v7;
  uint32_t *v8;
  int v11;

  v11 = a4[8547];
  v4 = *(uint32_t **)v11;
  if ( *(uint32_t *)v11 != 0 )
  {
    while ( 1 )
    {
      v5 = (uint32_t *)v4[2];
      if ( (int)curlx_tvdiff(*(uint32_t *)*v4, *(uint32_t *)(*v4 + 4), a1, a2) > 0 )
        break;
      Curl_llist_remove(v11, v4, 0);
      if ( v5 == nullptr )
        break;
      v4 = v5;
    }
  }
  if ( *(uint32_t *)(v11 + 12) != 0 )
  {
    v7 = *(uint32_t **)v11;
    v8 = **(uint32_t ***)v11;
    a4[8539] = *v8;
    a4[8540] = v8[1];
    Curl_llist_remove(v11, v7, 0);
    *a3 = (uint32_t)(uintptr_t)(Curl_splayinsert(a4[8539], a4[8540], *a3, a4 + 8541));
    return 0;
  }
  else
  {
    a4[8539] = 0;
    a4[8540] = 0;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B7C0  (binary VA: 0x1a6b7c0)
// Original: sub_1A6B7C0
// ----------------------------------------------------------------------------
int sub_1A6B7C0(int *a1, int *a2)
{
  int v3;
  int v4;
  int result;
  int v6;
  uint32_t v8[5];

  curlx_tvnow(v8);
  v3 = v8[0];
  v4 = v8[1];
  result = (int)(uintptr_t)(Curl_splay(0, 0, *a1));
  *a1 = result;
  if ( v3 > *(uint32_t *)(result + 12) || v3 >= *(uint32_t *)(result + 12) && v4 >= *(uint32_t *)(result + 16) )
  {
    *a2 = 0;
  }
  else
  {
    result = curlx_tvdiff(*(uint32_t *)(result + 12), *(uint32_t *)(result + 16), v3, v4);
    v6 = 1;
    if ( result != 0 )
      v6 = result;
    *a2 = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B880  (binary VA: 0x1a6b880)
// Original: sub_1A6B880
// ----------------------------------------------------------------------------
int sub_1A6B880(int *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v2 = 0;
  if ( a1[28] == 0 )
    return v2;
  if ( a1[22] != 0 )
  {
    sub_1A6B7C0(a1 + 22, &v10);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v4 = a1[22];
      if ( *(uint32_t *)(v4 + 12) != a1[30] || *(uint32_t *)(v4 + 16) != a1[31] )
      {
        v5 = *(uint32_t *)(v4 + 12);
        v6 = *(uint32_t *)(v4 + 16);
        v7 = a1[29];
        a1[30] = v5;
        a1[31] = v6;
        return ((int (*)(int *, int, int))a1[28])(a1, v3, v7);
      }
      return v2;
    }
  }
  else
  {
    v10 = -1;
  }
  if ( a1[30] != 0 || (v2 = 0, a1[31] != 0) )
  {
    v9 = a1[29];
    a1[30] = 0;
    a1[31] = 0;
    return ((int (*)(int *, int, int))a1[28])(a1, -1, v9);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6B950  (binary VA: 0x1a6b950)
// Original: sub_1A6B950
// ----------------------------------------------------------------------------
int sub_1A6B950(uint32_t *a1, uint32_t *a2)
{
  int v3;
  int result;
  uint32_t *v5;
  int v6;
  int v7;

  v3 = a1[2];
  result = 0;
  if ( *(uint8_t *)(v3 + 34205) == 0 )
  {
    v5 = (uint32_t *)a1[3];
    if ( v5 != nullptr )
    {
      v6 = a1[4];
      if ( (unsigned int)(v6 - 2) <= 0xC )
      {
        *v5 = v3;
        v6 = a1[4];
      }
      switch ( v6 )
      {
        case 3:
        case 4:
          v7 = a1[3];
          *a2 = *(uint32_t *)(v7 + 304);
          result = (uint16_t)-(*(uint8_t *)(v7 + 449) == 0) + 1;
          break;
        case 5:
          result = Curl_protocol_getsock(a1[3], (int)(uintptr_t)(a2), 5);
          break;
        case 7:
        case 8:
          result = Curl_doing_getsock(a1[3], (int)(uintptr_t)(a2), 5);
          break;
        case 9:
          *a2 = *(uint32_t *)(a1[3] + 308);
          result = 0x10000;
          break;
        case 10:
        case 11:
        case 12:
          result = Curl_single_getsock((int *)a1[3], a2, 5);
          break;
        default:
          result = 0;
          break;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6BA70  (binary VA: 0x1a6ba70)
// Original: sub_1A6BA70
// ----------------------------------------------------------------------------
uint32_t * sub_1A6BA70(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  int *v13;
  uint32_t *result;
  int v15;
  int v16;
  int *v17;
  int *v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_n;
  typedef int *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_src[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v25)) > _g4_s6 ? (20u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v29)) > _g4_s8 ? (32u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v30)) > _g4_s9 ? (32u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v31)) > _g4_s10 ? (32u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v32)) > _g4_s11 ? (36u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v33)) > _g4_s12 ? (36u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v34)) > _g4_s13 ? (36u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_n)) > _g4_s14 ? (40u + sizeof(_g4_t_n)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v36)) > _g4_s15 ? (44u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v37)) > _g4_s16 ? (44u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v38)) > _g4_s17 ? (52u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v39)) > _g4_s18 ? (56u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_src)) > _g4_s19 ? (60u + sizeof(_g4_t_src)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 60u);

  v2 = 0;
  memset(src, 255, 20);
  v23 = sub_1A6B950(a2, src);
  while ( (((1 << v2) | (1 << (v2 + 16))) & v23) != 0 )
  {
    v38 = src[v2];
    v3 = Curl_hash_pick(*(int **)(a1 + 92), (int)(uintptr_t)(&v38), 4);
    v4 = v3;
    v5 = ((1 << v2) & v23) != 0;
    if ( ((1 << (v2 + 16)) & v23) != 0 )
      v5 |= 2u;
    if ( v3 == 0 )
    {
      v30 = *(int **)(a1 + 92);
      v33 = a2[2];
      v39 = v38;
      v4 = Curl_hash_pick(v30, (int)(uintptr_t)(&v39), 4);
      if ( v4 == 0 )
      {
        result = (uint32_t *)G4_MEM_CALL((uintptr_t)(Curl_ccalloc), 1, 20);
        if ( result == nullptr )
          return result;
        *result = v33;
        result[3] = v39;
        v22 = result;
        v16 = Curl_hash_add(v30, &v39, 4u, (int)(uintptr_t)(result));
        v4 = (int)(uintptr_t)(v22);
        if ( v16 == 0 )
          return (uint32_t *)((int (*)(uint32_t *))Curl_cfree)(v22);
      }
LABEL_7:
      v20 = v4;
      (*(void (**)(uint32_t, int, int, uint32_t, uint32_t))(a1 + 76))(
        a2[2],
        v38,
        v5,
        *(uint32_t *)(a1 + 80),
        *(uint32_t *)(v4 + 16));
      *(uint32_t *)(v20 + 8) = v5;
      goto LABEL_8;
    }
    if ( *(uint32_t *)(v3 + 8) != v5 )
      goto LABEL_7;
LABEL_8:
    if ( ++v2 == 5 )
    {
      n = 20;
      goto LABEL_10;
    }
  }
  n = 4 * v2;
LABEL_10:
  v6 = 0;
  v7 = a2;
  if ( (int)a2[14] > 0 )
  {
    while ( 2 )
    {
      v8 = v7[v6 + 9];
      v38 = v8;
      if ( v2 != 0 )
      {
        v9 = 0;
        if ( v8 == src[0] )
        {
LABEL_28:
          v38 = -1;
          goto LABEL_25;
        }
        while ( ++v9 != v2 )
        {
          if ( v8 == src[v9] )
            goto LABEL_28;
        }
      }
      if ( v8 == -1 )
        goto LABEL_25;
      v21 = v7;
      v10 = (int *)Curl_hash_pick(*(int **)(a1 + 92), (int)(uintptr_t)(&v38), 4);
      v7 = v21;
      if ( v10 == nullptr )
        goto LABEL_25;
      v28 = *v10;
      v11 = *(uint32_t *)(*(uint32_t *)(*v10 + 12) + 12);
      v24 = v11;
      if ( v11 != 0 )
      {
        v12 = *(int **)(v11 + 552);
        v32 = 1;
        v36 = v12;
        if ( v12 != nullptr && (unsigned int)v12[3] > 1 )
        {
          v32 = 0;
          if ( v28 == v21[2] )
          {
            v17 = (int *)*v12;
            v19 = *v36;
            if ( *v36 != 0 )
            {
              v37 = *v17;
              if ( v28 == *v17 )
              {
                *v10 = **(uint32_t **)(v19 + 8);
                goto LABEL_22;
              }
            }
            else
            {
              v37 = 1179403647;
            }
            v32 = 0;
            *v10 = v37;
          }
        }
LABEL_22:
        v13 = *(int **)(v24 + 548);
        v29 = v13;
        if ( v13 != nullptr && (unsigned int)v13[3] > 1 )
        {
          if ( *v10 == v21[2] )
          {
            v18 = (int *)*v13;
            v34 = *v29;
            if ( *v29 != 0 )
            {
              v31 = *v18;
              if ( *v10 == *v18 )
              {
                *v10 = **(uint32_t **)(v34 + 8);
                goto LABEL_25;
              }
            }
            else
            {
              v31 = 1179403647;
            }
            *v10 = v31;
          }
LABEL_25:
          if ( v7[14] <= ++v6 )
            goto LABEL_26;
          continue;
        }
        if ( v32 == 0 )
          goto LABEL_25;
      }
      break;
    }
    (*(void (**)(uint32_t, int, int, uint32_t, int))(a1 + 76))(v21[2], v38, 4, *(uint32_t *)(a1 + 80), v10[4]);
    v25 = *(int **)(a1 + 92);
    v39 = v38;
    v15 = Curl_hash_pick(v25, (int)(uintptr_t)(&v39), 4);
    v7 = v21;
    if ( v15 != 0 )
    {
      Curl_hash_delete(v25, (int)(uintptr_t)(&v39), 4);
      v7 = v21;
    }
    goto LABEL_25;
  }
LABEL_26:
  result = (uint32_t *)(memcpy(a2 + 9, src, n));
  a2[14] = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6C5F0  (binary VA: 0x1a6c5f0)
// Original: sub_1A6C5F0
// ----------------------------------------------------------------------------
int sub_1A6C5F0(int a1)
{
  uint32_t *v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t ***v8;
  typedef unsigned int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef uint32_t **_g4_t_v11;
  typedef uint32_t _g4_t_v12[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v2 = *(uint32_t **)(a1 + 548);
  v11 = (uint32_t **)*v2;
  v9 = v2[3] + *(uint32_t *)(*(uint32_t *)(a1 + 552) + 12);
  if ( *(uint8_t *)(a1 + 546) != 0 )
  {
    v5 = *(uint32_t **)(a1 + 556);
    v10 = 5;
    v6 = (uint32_t *)*v5;
  }
  else
  {
    v3 = 0;
    if ( v2[3] + *(uint32_t *)(*(uint32_t *)(a1 + 552) + 12) != 0 )
      return v3;
    v5 = *(uint32_t **)(a1 + 556);
    v10 = 1;
    v6 = (uint32_t *)*v5;
  }
  v3 = 0;
  if ( v10 <= v9 || v6 == nullptr )
    return v3;
  while ( 1 )
  {
    ++v3;
    Curl_llist_move(v5, (int)(uintptr_t)(v6), v2, v2[1]);
    Curl_pgrsTime(*v6, 4);
    v5 = *(uint32_t **)(a1 + 556);
    v6 = (uint32_t *)*v5;
    if ( v10 <= v3 + v9 || v6 == nullptr )
      break;
    v2 = *(uint32_t **)(a1 + 548);
  }
  curlx_tvnow(v12);
  v7 = v12[1];
  *(uint32_t *)(a1 + 288) = v12[0];
  v8 = *(uint32_t ****)(a1 + 548);
  *(uint32_t *)(a1 + 292) = v7;
  if ( *v8 == v11 )
    return v3;
  *(uint8_t *)(a1 + 545) = 0;
  Curl_expire(**v8, 1);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6C730  (binary VA: 0x1a6c730)
// Original: sub_1A6C730
// ----------------------------------------------------------------------------
int sub_1A6C730(int a1, int a2, int a3, int *a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  int *v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  bool v21;
  uint32_t *v22;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  uint32_t *v30;
  uint32_t ***v31;
  int v32;
  uint32_t *v33;
  int is_connected;
  int v35;
  int v36;
  int *v37;
  int v38;
  unsigned int v39;
  uint32_t *v40;
  int v41;
  int v42;
  int v43;
  uint8_t *v44;
  int v45;
  int v46;
  int v47;
  uint32_t *v48;
  int v49;
  int v50;
  uint32_t *v51;
  uint32_t *v52;
  int v53;
  int v54;
  int v55;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  uint32_t *v66;
  uint32_t *v67;
  uint32_t **v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  char *v77;
  int v78;
  int v79;
  int v80;
  int64_t v119; // 0:edx.4,4:eax.4
  int64_t v120; // 0:edx.4,4:eax.4
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef char _g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef bool _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef char _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef char _g4_t_v116;
  typedef bool _g4_t_v117;
  typedef char *_g4_t_v118[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v81)) > _g4_s0 ? (0u + sizeof(_g4_t_v81)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v82)) > _g4_s1 ? (0u + sizeof(_g4_t_v82)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v83)) > _g4_s2 ? (4u + sizeof(_g4_t_v83)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v84)) > _g4_s3 ? (40u + sizeof(_g4_t_v84)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v85)) > _g4_s4 ? (40u + sizeof(_g4_t_v85)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v86)) > _g4_s5 ? (40u + sizeof(_g4_t_v86)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v87)) > _g4_s6 ? (40u + sizeof(_g4_t_v87)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v88)) > _g4_s7 ? (40u + sizeof(_g4_t_v88)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v89)) > _g4_s8 ? (40u + sizeof(_g4_t_v89)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v90)) > _g4_s9 ? (40u + sizeof(_g4_t_v90)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v91)) > _g4_s10 ? (40u + sizeof(_g4_t_v91)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v92)) > _g4_s11 ? (40u + sizeof(_g4_t_v92)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v93)) > _g4_s12 ? (40u + sizeof(_g4_t_v93)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v94)) > _g4_s13 ? (40u + sizeof(_g4_t_v94)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v96)) > _g4_s14 ? (40u + sizeof(_g4_t_v96)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v97)) > _g4_s15 ? (40u + sizeof(_g4_t_v97)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v98)) > _g4_s16 ? (40u + sizeof(_g4_t_v98)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v99)) > _g4_s17 ? (40u + sizeof(_g4_t_v99)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v100)) > _g4_s18 ? (44u + sizeof(_g4_t_v100)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v101)) > _g4_s19 ? (48u + sizeof(_g4_t_v101)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v102)) > _g4_s20 ? (48u + sizeof(_g4_t_v102)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v103)) > _g4_s21 ? (48u + sizeof(_g4_t_v103)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v104)) > _g4_s22 ? (48u + sizeof(_g4_t_v104)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v105)) > _g4_s23 ? (48u + sizeof(_g4_t_v105)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v106)) > _g4_s24 ? (48u + sizeof(_g4_t_v106)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v107)) > _g4_s25 ? (52u + sizeof(_g4_t_v107)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v108)) > _g4_s26 ? (56u + sizeof(_g4_t_v108)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v109)) > _g4_s27 ? (56u + sizeof(_g4_t_v109)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v110)) > _g4_s28 ? (56u + sizeof(_g4_t_v110)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v111)) > _g4_s29 ? (56u + sizeof(_g4_t_v111)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v112)) > _g4_s30 ? (60u + sizeof(_g4_t_v112)) : _g4_s30,
    _g4_s32 = (71u + sizeof(_g4_t_v113)) > _g4_s31 ? (71u + sizeof(_g4_t_v113)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v114)) > _g4_s32 ? (72u + sizeof(_g4_t_v114)) : _g4_s32,
    _g4_s34 = (73u + sizeof(_g4_t_v115)) > _g4_s33 ? (73u + sizeof(_g4_t_v115)) : _g4_s33,
    _g4_s35 = (74u + sizeof(_g4_t_v116)) > _g4_s34 ? (74u + sizeof(_g4_t_v116)) : _g4_s34,
    _g4_s36 = (75u + sizeof(_g4_t_v117)) > _g4_s35 ? (75u + sizeof(_g4_t_v117)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v118)) > _g4_s36 ? (76u + sizeof(_g4_t_v118)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 0u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 40u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 40u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 48u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 56u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 56u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 56u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 56u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 60u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 71u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 72u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 73u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 74u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 75u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 76u);

  v4 = a1;
  v5 = a4;
  v115 = 0;
  v6 = a4[2];
  v117 = false;
  v7 = 2;
  if ( *(uint32_t *)(v6 + 34460) != -1059136595 )
    return v7;
  if ( *(uint8_t *)(v6 + 34205) != 0 )
  {
    LOWORD(v7) = 0;
    Curl_infof(v6, "Pipe broke: handle 0x%p, url = %s\n", a4, *(uint32_t *)(v6 + 34228));
    v4 = a1;
    if ( (unsigned int)v5[4] <= 0xE )
    {
      v7 = -1;
      sub_1A6B670(v5[2], v5 + 4, 1);
      v5[5] = 0;
      v4 = a1;
    }
    *(uint8_t *)(v6 + 34205) = 0;
    v5[3] = 0;
    v12 = v5[4];
    goto LABEL_12;
  }
  v9 = (int *)a4[3];
  v10 = a4[4];
  if ( v9 != nullptr )
  {
    if ( v10 <= 1 || v10 <= 0xE && (*v9 = v6, v10 = v5[4], v5[3] != 0) )
    {
      if ( v10 == 0 )
      {
LABEL_9:
        v84 = v4;
        v11 = Curl_pretransfer(v6);
        v5[5] = v11;
        v4 = v84;
        if ( v11 != 0 )
        {
LABEL_10:
          v10 = v5[4];
          v101 = 0;
          v12 = v10;
          v7 = 0;
          goto LABEL_11;
        }
        sub_1A6B670(v5[2], v5 + 4, 1);
        *(uint32_t *)(v6 + 1188) = 2;
        goto LABEL_32;
      }
      if ( v10 <= 0xE )
      {
        v85 = v4;
        v14 = Curl_timeleft((uint32_t *)v6, &a2, v10 <= 6) < 0;
        v4 = v85;
        v10 = v5[4];
        if ( v14 )
        {
          if ( v10 == 2 )
          {
            v74 = curlx_tvdiff(a2, a3, *(uint32_t *)(v6 + 1080), *(uint32_t *)(v6 + 1084));
            Curl_failf(v6, "Resolving timed out after %ld milliseconds", v74);
            v16 = v85;
          }
          else
          {
            if ( v10 == 3 )
            {
              v73 = curlx_tvdiff(a2, a3, *(uint32_t *)(v6 + 1080), *(uint32_t *)(v6 + 1084));
              Curl_failf(v6, "Connection timed out after %ld milliseconds", v73);
            }
            else
            {
              v102 = *(uint32_t *)(v6 + 20);
              v107 = *(uint32_t *)(v6 + 24);
              v108 = *(uint32_t *)(v6 + 44);
              v112 = *(uint32_t *)(v6 + 48);
              v15 = curlx_tvdiff(a2, a3, *(uint32_t *)(v6 + 1080), *(uint32_t *)(v6 + 1084));
              Curl_failf(
                v6,
                "Operation timed out after %ld milliseconds with %lld out of %lld bytes received",
                v15,
                v108,
                v112,
                v102,
                v107);
            }
            v16 = v85;
          }
          v7 = 0;
          *(uint8_t *)(v5[3] + 436) = 1;
          v5[5] = 28;
          v86 = v16;
          sub_1A6B670(v5[2], v5 + 4, 15);
          v12 = v5[4];
          v4 = v86;
LABEL_12:
          if ( v12 == 15 )
          {
            if ( *(uint32_t *)(v6 + 4) == 3 )
            {
              *(uint32_t *)v6 = 0;
              *(uint32_t *)(v6 + 4) = 0;
            }
            v13 = v5[5];
            v5[6] = 1;
            v5[7] = v6;
            v5[8] = v13;
            v7 = Curl_llist_insert_next(*(uint32_t **)(v4 + 72), *(uint32_t *)(*(uint32_t *)(v4 + 72) + 4), (int)(uintptr_t)(v5 + 6)) == 0
               ? 3
               : 0;
            sub_1A6B670(v5[2], v5 + 4, 16);
          }
          return v7;
        }
      }
    }
  }
  v7 = 4;
  switch ( v10 )
  {
    case 0u:
      goto LABEL_9;
    case 1u:
      v92 = v4;
      Curl_pgrsTime(v6, 7);
      v35 = Curl_connect(v6, v5 + 3, &v114, &v115);
      v5[5] = v35;
      v4 = v92;
      if ( v35 != 0 )
        goto LABEL_10;
      v36 = v5[3];
      v37 = *(int **)(v36 + 548);
      v104 = v37[3];
      v110 = *v37;
      v38 = *(uint32_t *)(*(uint32_t *)(v36 + 552) + 12);
      v100 = v36;
      if ( (uint8_t)Curl_isPipeliningEnabled(v6) != 0
        && (v39 = v104 + v38) != 0
        && (*(uint8_t *)(v100 + 546) == 0 || v39 > 4) )
      {
        v40 = *(uint32_t **)(v100 + 556);
      }
      else
      {
        v40 = *(uint32_t **)(v100 + 548);
      }
      v105 = Curl_addHandleToPipeline(v6, v40);
      v4 = v92;
      if ( v40 == *(uint32_t **)(v100 + 548) && v110 != *v40 )
      {
        *(uint8_t *)(v100 + 545) = 0;
        Curl_expire(*(uint32_t **)*v40, 1);
        v4 = v92;
      }
      v5[5] = v105;
      if ( v105 != 0 )
        goto LABEL_10;
      if ( v114 != 0 )
      {
        v84 = v4;
        sub_1A6B670(v5[2], v5 + 4, 2);
        goto LABEL_25;
      }
      if ( v115 != 0 )
      {
        v32 = v5[2];
        v33 = (uint32_t *)(v5 + 4);
        v81 = 7 - (*(uint8_t *)(v4 + 96) != 0);
        goto LABEL_76;
      }
      v33 = (uint32_t *)(v5 + 4);
      v32 = v5[2];
      if ( *(uint8_t *)(v5[3] + 449) != 0 )
        goto LABEL_168;
      v81 = 3;
      goto LABEL_76;
    case 2u:
      v5[5] = 6;
      v101 = 1;
      goto LABEL_64;
    case 3u:
      v91 = v4;
      is_connected = Curl_is_connected(v5[3], 0, &v113);
      v21 = v113 == 0;
      v5[5] = is_connected;
      v4 = v91;
      if ( v21 )
        goto LABEL_115;
      if ( is_connected == 0 )
      {
        is_connected = Curl_protocol_connect(v5[3], &v115);
        v5[5] = is_connected;
        v4 = v91;
LABEL_115:
        if ( is_connected == 0 )
        {
          if ( v113 == 0 )
            goto LABEL_10;
          if ( v115 != 0 )
            goto LABEL_136;
          v33 = (uint32_t *)(v5 + 4);
          v32 = v5[2];
          if ( *(uint8_t *)(v5[3] + 449) != 0 )
LABEL_168:
            v81 = 4;
          else
            v81 = 5;
          goto LABEL_76;
        }
      }
      v10 = v5[4];
      v101 = 1;
      v12 = v10;
      v7 = 0;
      goto LABEL_11;
    case 4u:
      v84 = v4;
      v42 = Curl_http_connect(v5[3], &v115);
      v43 = v5[3];
      v5[5] = v42;
      v4 = v84;
      if ( *(uint8_t *)(v43 + 458) != 0 )
      {
        v44 = *(uint8_t **)(v6 + 268);
        if ( v44 != nullptr )
          *v44 = 0;
        *(uint8_t *)(v6 + 34028) = 0;
        v33 = (uint32_t *)(v5 + 4);
        v5[5] = 0;
        v32 = v5[2];
        v81 = 1;
LABEL_76:
        v84 = v4;
        goto LABEL_59;
      }
      if ( v42 == 0 && *(uint8_t *)(v43 + 449) == 0 )
      {
        sub_1A6B670(v5[2], v5 + 4, 3);
        goto LABEL_25;
      }
      goto LABEL_10;
    case 5u:
      v93 = v4;
      v41 = Curl_protocol_connecting(v5[3], &v115);
      v5[5] = v41;
      v4 = v93;
      if ( v41 != 0 )
      {
        Curl_posttransfer();
        Curl_done((int **)v5 + 3, v5[5], 1u);
        goto LABEL_81;
      }
      if ( v115 == 0 )
        goto LABEL_10;
LABEL_136:
      v84 = v4;
      sub_1A6B670(v5[2], v5 + 4, 7 - (*(uint8_t *)(v4 + 96) != 0));
      goto LABEL_32;
    case 6u:
      v50 = v5[3];
      v101 = 0;
      v111 = v50;
      if ( *(uint8_t *)(v50 + 545) != 0 )
        goto LABEL_64;
      v51 = **(uint32_t ***)(v50 + 548);
      if ( v51 == nullptr )
        goto LABEL_64;
      v7 = 0;
      if ( v6 != *v51 )
        goto LABEL_46;
      v52 = (uint32_t *)(v5 + 4);
      *(uint8_t *)(v111 + 545) = 1;
      v53 = v5[2];
      v82 = 7;
      goto LABEL_97;
    case 7u:
      if ( *(uint8_t *)(v6 + 701) != 0 )
      {
        *(uint8_t *)(v5[3] + 436) = 0;
        v84 = v4;
        sub_1A6B670(v5[2], v5 + 4, 14);
        v5[5] = 0;
        goto LABEL_25;
      }
      v84 = v4;
      v60 = Curl_do((int **)v5 + 3, &v116);
      v5[5] = v60;
      v4 = v84;
      if ( v60 == 0 )
      {
        if ( v116 == 0 )
        {
          if ( *(uint8_t *)(v6 + 896) == 0 || (v61 = *(uint32_t *)(v6 + 34272)) != 4 && v61 != 6 )
          {
            sub_1A6B670(v5[2], v5 + 4, 8);
            goto LABEL_25;
          }
          Curl_done((int **)v5 + 3, 0, 0);
          sub_1A6B670(v5[2], v5 + 4, 14);
          goto LABEL_32;
        }
        v48 = (uint32_t *)(v5 + 4);
        v49 = v5[2];
        if ( *(uint8_t *)(v5[3] + 444) == 0 )
        {
LABEL_92:
          sub_1A6B670(v49, v48, 10);
          goto LABEL_32;
        }
LABEL_161:
        v84 = v4;
        sub_1A6B670(v49, v48, 9);
        goto LABEL_25;
      }
      if ( v60 == 55 )
      {
        v72 = v5[3];
        if ( *(uint8_t *)(v72 + 437) != 0 )
        {
          v118[0] = nullptr;
          v75 = Curl_retry_request(v72, v118);
          v4 = v84;
          if ( v75 != 0 )
          {
            v5[5] = v75;
          }
          else if ( v118[0] != nullptr )
          {
            Curl_posttransfer();
            v79 = Curl_done((int **)v5 + 3, v5[5], 0);
            v80 = v84;
            if ( v79 == 55 || v79 == 0 )
            {
              v79 = Curl_follow(v6, v118[0], 2);
              v80 = v84;
              if ( v79 == 0 )
              {
                sub_1A6B670(v5[2], v5 + 4, 1);
                v5[5] = 0;
LABEL_32:
                v10 = v5[4];
                v101 = 0;
                v12 = v10;
                v7 = -1;
                v4 = v84;
LABEL_11:
                if ( v10 <= 0xE )
                {
LABEL_46:
                  if ( v5[5] != 0 )
                  {
                    *(uint8_t *)(v6 + 34205) = 0;
                    v28 = v5[3];
                    if ( v28 != 0 )
                    {
                      *(uint8_t *)(v28 + 545) = 0;
                      *(uint8_t *)(v5[3] + 544) = 0;
                      v88 = v4;
                      Curl_removeHandleFromPipeline(v6, *(uint32_t **)(v5[3] + 548));
                      Curl_removeHandleFromPipeline(v6, *(uint32_t **)(v5[3] + 552));
                      Curl_removeHandleFromPipeline(v6, *(uint32_t **)(v5[3] + 560));
                      sub_1A6C5F0(v5[3]);
                      v4 = v88;
                    }
                    if ( v101 != 0 )
                    {
                      v97 = v4;
                      Curl_disconnect(v5[3], 0);
                      v5[3] = 0;
                      v4 = v97;
                    }
                    v89 = v4;
                    sub_1A6B670(v5[2], v5 + 4, 15);
                    v12 = v5[4];
                    v4 = v89;
                  }
                  else
                  {
                    v54 = v5[3];
                    if ( v54 != 0 )
                    {
                      v96 = v4;
                      v55 = Curl_pgrsUpdate(v54);
                      v4 = v96;
                      if ( v55 != 0 )
                        v5[5] = 42;
                      v12 = v5[4];
                    }
                    else
                    {
                      v12 = v10;
                    }
                  }
                }
                goto LABEL_12;
              }
            }
            v5[5] = v79;
            v84 = v80;
            G4_MEM_CALL((uintptr_t)(Curl_cfree), v118[0]);
LABEL_25:
            v10 = v5[4];
            v101 = 0;
            v12 = v10;
            v7 = 0;
            v4 = v84;
            goto LABEL_11;
          }
        }
      }
      v93 = v4;
      Curl_posttransfer();
      Curl_done((int **)v5 + 3, v5[5], 0);
      goto LABEL_81;
    case 8u:
      v84 = v4;
      v47 = Curl_protocol_doing(v5[3], &v116);
      v5[5] = v47;
      v4 = v84;
      if ( v47 != 0 )
        goto LABEL_140;
      if ( v116 == 0 )
        goto LABEL_10;
      v48 = (uint32_t *)(v5 + 4);
      v49 = v5[2];
      if ( *(uint8_t *)(v5[3] + 444) == 0 )
        goto LABEL_92;
      goto LABEL_161;
    case 9u:
      v84 = v4;
      v45 = Curl_is_connected(v5[3], 1, &v113);
      v21 = v113 == 0;
      v5[5] = v45;
      v4 = v84;
      if ( v21 )
        goto LABEL_10;
      v46 = Curl_do_more((uint32_t *)v5[3]);
      v5[5] = v46;
      v4 = v84;
      if ( v46 == 0 )
      {
        sub_1A6B670(v5[2], v5 + 4, 10);
        goto LABEL_32;
      }
LABEL_140:
      v93 = v4;
      Curl_posttransfer();
      Curl_done((int **)v5 + 3, v5[5], 0);
LABEL_81:
      v10 = v5[4];
      v101 = 1;
      v12 = v10;
      v7 = 0;
      v4 = v93;
      goto LABEL_11;
    case 0xAu:
      v29 = v5[3];
      v103 = *(uint32_t **)(v29 + 548);
      v30 = (uint32_t *)*v103;
      if ( *v103 == 0 )
        goto LABEL_58;
      while ( v6 != *v30 )
      {
        v30 = (uint32_t *)v30[2];
        if ( v30 == nullptr )
          goto LABEL_58;
      }
      v90 = v4;
      Curl_llist_move(v103, (int)(uintptr_t)(v30), *(uint32_t **)(v29 + 552), *(uint32_t *)(*(uint32_t *)(v29 + 552) + 4));
      v31 = *(uint32_t ****)(v29 + 548);
      v4 = v90;
      if ( *v31 != nullptr )
      {
        *(uint8_t *)(v29 + 545) = 0;
        Curl_expire(**v31, 1);
        v29 = v5[3];
        v4 = v90;
      }
      else
      {
        v29 = v5[3];
      }
LABEL_58:
      v84 = v4;
      sub_1A6C5F0(v29);
      v32 = v5[2];
      v33 = (uint32_t *)(v5 + 4);
      v81 = 11;
LABEL_59:
      sub_1A6B670(v32, v33, v81);
      goto LABEL_32;
    case 0xBu:
      v26 = v5[3];
      v101 = 0;
      v109 = v26;
      if ( *(uint8_t *)(v26 + 544) != 0 || (v27 = **(uint32_t ***)(v26 + 552)) == nullptr )
      {
LABEL_64:
        v7 = 0;
        goto LABEL_46;
      }
      v7 = 0;
      if ( v6 != *v27 )
        goto LABEL_46;
      v52 = (uint32_t *)(v5 + 4);
      *(uint8_t *)(v109 + 544) = 1;
      v53 = v5[2];
      v82 = 12;
LABEL_97:
      v94 = v4;
      v7 = -1;
      sub_1A6B670(v53, v52, v82);
      v10 = v5[4];
      v4 = v94;
      v12 = v10;
      goto LABEL_11;
    case 0xCu:
      v119 = *(uint64_t *)(v6 + 456);
      if ( v119 > 0 && v119 < *(uint64_t *)(v6 + 1016) )
      {
        v84 = v4;
        sub_1A6B670(v5[2], v5 + 4, 13);
        v24 = *(uint32_t *)(v6 + 608);
        if ( v24 == 0 )
          v24 = 0x4000;
        v25 = Curl_sleep_time(*(uint64_t *)(v6 + 456), *(uint64_t *)(v6 + 1016), v24);
        Curl_expire((uint32_t *)v6, v25);
        goto LABEL_25;
      }
      v120 = *(uint64_t *)(v6 + 464);
      if ( v120 > 0 && v120 < *(uint64_t *)(v6 + 1008) )
      {
        v84 = v4;
        sub_1A6B670(v5[2], v5 + 4, 13);
        v57 = *(uint32_t *)(v6 + 608);
        if ( v57 == 0 )
          v57 = 0x4000;
        v83 = (char *)Curl_sleep_time(*(uint64_t *)(v6 + 464), *(uint64_t *)(v6 + 1008), v57);
        Curl_expire((uint32_t *)v6, (int)(uintptr_t)(v83));
        goto LABEL_25;
      }
      v84 = v4;
      v5[5] = Curl_readwrite(v5[3], &v117);
      v58 = *(uint32_t *)(v6 + 232);
      v4 = v84;
      if ( (v58 & 1) == 0 )
      {
        *(uint8_t *)(v5[3] + 544) = 0;
        v58 = *(uint32_t *)(v6 + 232);
      }
      if ( (v58 & 2) == 0 )
        *(uint8_t *)(v5[3] + 545) = 0;
      if ( v5[5] != 0 )
      {
        v59 = v5[3];
        if ( (*(uint8_t *)(*(uint32_t *)(v59 + 480) + 60) & 2) == 0 )
          *(uint8_t *)(v59 + 436) = 1;
        Curl_posttransfer();
        Curl_done((int **)v5 + 3, v5[5], 0);
        goto LABEL_25;
      }
      if ( !v117 )
        goto LABEL_10;
      v62 = v5[3];
      v118[0] = nullptr;
      v63 = Curl_retry_request(v62, v118);
      v5[5] = v63;
      v106 = false;
      if ( v63 == 0 )
        v106 = v118[0] != nullptr;
      Curl_posttransfer();
      v64 = v5[3];
      v65 = v84;
      v66 = *(uint32_t **)(v64 + 552);
      v67 = (uint32_t *)*v66;
      if ( *v66 != 0 )
      {
        while ( v6 != *v67 )
        {
          v67 = (uint32_t *)v67[2];
          if ( v67 == nullptr )
            goto LABEL_149;
        }
        Curl_llist_move(v66, (int)(uintptr_t)(v67), *(uint32_t **)(v64 + 560), *(uint32_t *)(*(uint32_t *)(v64 + 560) + 4));
        v64 = v5[3];
        v65 = v84;
      }
LABEL_149:
      v68 = **(uint32_t ****)(v64 + 552);
      if ( v68 != nullptr )
      {
        v99 = v65;
        Curl_expire(*v68, 1);
        v64 = v5[3];
        v65 = v99;
      }
      v84 = v65;
      v69 = 2;
      sub_1A6C5F0(v64);
      v70 = v84;
      if ( *(uint32_t *)(v6 + 244) != 0 )
      {
        if ( !v106 )
        {
          v118[0] = *(char **)(v6 + 244);
          LOWORD(v69) = 3;
          *(uint32_t *)(v6 + 244) = 0;
        }
      }
      else if ( !v106 )
      {
        v77 = *(char **)(v6 + 240);
        if ( v77 != nullptr )
        {
          v118[0] = *(char **)(v6 + 240);
          *(uint32_t *)(v6 + 240) = 0;
          v78 = Curl_follow(v6, v77, 1);
          v5[5] = v78;
          v70 = v84;
          if ( v78 != 0 )
          {
            ((void (*)(int, char *))Curl_cfree)(v84, v118[0]);
            v70 = v84;
          }
        }
        v84 = v70;
        sub_1A6B670(v5[2], v5 + 4, 14);
        goto LABEL_32;
      }
      v71 = Curl_done((int **)v5 + 3, 0, 0);
      v5[5] = v71;
      v4 = v84;
      if ( v71 == 0 )
      {
        v76 = Curl_follow(v6, v118[0], v69);
        v5[5] = v76;
        v4 = v84;
        if ( v76 == 0 )
        {
          sub_1A6B670(v5[2], v5 + 4, 1);
          goto LABEL_32;
        }
      }
      if ( v118[0] == nullptr )
        goto LABEL_10;
      v84 = v4;
      G4_MEM_CALL((uintptr_t)(Curl_cfree), v118[0]);
      goto LABEL_25;
    case 0xDu:
      v84 = v4;
      Curl_pgrsUpdate(v5[3]);
      v4 = v84;
      if ( *(uint64_t *)(v6 + 456) != 0 && *(uint64_t *)(v6 + 456) <= *(uint64_t *)(v6 + 1016)
        || *(uint64_t *)(v6 + 464) != 0 && *(uint64_t *)(v6 + 464) <= *(uint64_t *)(v6 + 1008) )
      {
        goto LABEL_10;
      }
      sub_1A6B670(v5[2], v5 + 4, 12);
      goto LABEL_25;
    case 0xEu:
      v17 = v5[3];
      v7 = 0;
      if ( v17 != 0 )
      {
        v87 = v4;
        Curl_removeHandleFromPipeline(v6, *(uint32_t **)(v17 + 552));
        Curl_removeHandleFromPipeline(v6, *(uint32_t **)(v5[3] + 560));
        sub_1A6C5F0(v5[3]);
        v18 = -(*(uint8_t *)(v5[3] + 457) == 0);
        v19 = Curl_done((int **)v5 + 3, 0, 0);
        v20 = v5[3];
        v5[5] = v19;
        v21 = v20 == 0;
        v7 = ~v18;
        v4 = v87;
        if ( !v21 )
          v5[3] = 0;
      }
      v22 = (uint32_t *)(v5 + 4);
      if ( *(uint8_t *)(v6 + 896) != 0 && *(uint32_t *)(v6 + 34272) != 6 )
      {
        v84 = v4;
        sub_1A6B670(v5[2], v22, 0);
        goto LABEL_32;
      }
      v98 = v4;
      sub_1A6B670(v5[2], v22, 15);
      v10 = v5[4];
      v101 = 0;
      v12 = v10;
      v4 = v98;
      goto LABEL_11;
    case 0xFu:
      v5[3] = 0;
      v84 = v4;
      Curl_expire((uint32_t *)v6, 0);
      goto LABEL_25;
    case 0x10u:
      return 0;
    default:
      return v7;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A6DAD0  (binary VA: 0x1a6dad0)
// Original: sub_1A6DAD0
// ----------------------------------------------------------------------------
int sub_1A6DAD0(int a1, char a2, int a3, int a4, uint32_t *a5)
{
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int *v18;
  uint32_t *v19;
  int **v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int **v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v29)) > _g4_s3 ? (8u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v33)) > _g4_s7 ? (28u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v34)) > _g4_s8 ? (44u + sizeof(_g4_t_v34)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);

  curlx_tvnow(&v32);
  v7 = v32;
  v8 = v33;
  if ( a2 != 0 )
  {
    v16 = curl_multi_perform((int *)a1, a5);
    v11 = v16;
    v17 = *(uint32_t **)(a1 + 4);
    if ( v17 == (uint32_t *)(a1 + 4) )
      return v11;
    v29 = v16;
    do
    {
      sub_1A6BA70(a1, v17);
      v17 = (uint32_t *)*v17;
    }
    while ( v17 != (uint32_t *)(a1 + 4) );
    return v29;
  }
  else
  {
    if ( a3 == -1 || (v26 = v33, v9 = (int *)Curl_hash_pick(*(int **)(a1 + 92), (int)(uintptr_t)(&a3), 4), v8 = v26, v9 == nullptr) )
    {
      v13 = 0;
    }
    else
    {
      v10 = *v9;
      v11 = 4;
      v28 = v10;
      if ( *(uint32_t *)(v10 + 34460) != -1059136595 )
        return v11;
      v18 = *(int **)(v10 + 616);
      v19 = (uint32_t *)v18[3];
      if ( v19 == nullptr
        || ((a4 & 2) != 0 && (v20 = (int **)v19[137]) != nullptr && (v21 = *v20) != nullptr
         || (a4 & 1) != 0 && (v25 = (int **)v19[138]) != nullptr && (v21 = *v25) != nullptr)
        && (v28 = *v21, v18 = *(int **)(*v21 + 616), (v19 = (uint32_t *)v18[3]) == nullptr) )
      {
        v22 = v26;
      }
      else
      {
        if ( (*(uint8_t *)(v19[120] + 60) & 8) == 0 )
          v19[252] = a4;
        v22 = v26;
        v18 = *(int **)(v28 + 616);
      }
      while ( 1 )
      {
        v23 = sub_1A6C730(a1, v7, v22, v18);
        if ( v23 != -1 )
          break;
        v18 = *(int **)(v28 + 616);
      }
      v8 = v22;
      v13 = v23;
      v24 = *(uint32_t *)(*(uint32_t *)(v28 + 616) + 12);
      if ( v24 != 0 && (*(uint8_t *)(*(uint32_t *)(v24 + 480) + 60) & 8) == 0 )
        *(uint32_t *)(v24 + 1008) = 0;
      if ( v13 <= 0 )
      {
        v27 = v8;
        sub_1A6BA70(a1, *(uint32_t **)(v28 + 616));
        v8 = v27;
      }
    }
    v31 = v7;
    v30 = v8 + 40000;
    if ( v8 + 40000 > 999999 )
    {
      v31 = v7 + 1;
      v30 = v8 - 960000;
    }
    while ( 1 )
    {
      *(uint32_t *)(a1 + 88) = (uint32_t)(uintptr_t)(Curl_splaygetbest(v31, v30, *(uint32_t *)(a1 + 88), v34));
      if ( v34[0] == 0 )
        break;
      v14 = *(uint32_t *)(v34[0] + 20);
      sub_1A6B690(v31, v30, (uint32_t *)(a1 + 88), (uint32_t *)v14);
      if ( v34[0] == 0 )
        break;
      if ( v14 != 0 )
      {
        do
          v15 = sub_1A6C730(a1, v31, v30, *(int **)(v14 + 616));
        while ( v15 == -1 );
        v13 = v15;
        if ( v15 <= 0 )
          sub_1A6BA70(a1, *(uint32_t **)(v14 + 616));
      }
    }
    *a5 = *(uint32_t *)(a1 + 68);
    return v13;
  }
}

// ----------------------------------------------------------------------------
// Function: curlx_nonblock  (binary VA: 0x1a6ea90)
// Original: curlx_nonblock
// ----------------------------------------------------------------------------
int curlx_nonblock()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6F1D0  (binary VA: 0x1a6f1d0)
// Original: sub_1A6F1D0
// ----------------------------------------------------------------------------
int sub_1A6F1D0(char *a1, int64_t a2)
{
  int64_t v3; // rax
  int64_t v4; // rax
  int64_t v5; // rdi

  v3 = a2;
  if ( a2 > 0 )
  {
    if ( a2 / 3600 > 99 )
    {
      v4 = a2 / 86400;
      v5 = a2 / 86400;
      if ( v4 > 999 )
        LODWORD(v3) = curl_msnprintf((int)(uintptr_t)(a1), 9, (int)(uintptr_t)("%7lldd"), (uint32_t)v5, HIDWORD(v4));
      else
        LODWORD(v3) = curl_msnprintf((int)(uintptr_t)(a1), 9, (int)(uintptr_t)("%3lldd %02lldh"), v5, a2 % 86400 / 3600);
    }
    else
    {
      LODWORD(v3) = curl_msnprintf(
                      (int)(uintptr_t)(a1),
                      9,
                      (int)(uintptr_t)("%2lld:%02lld:%02lld"),
                      a2 / 3600,
                      a2 % 3600 / 60,
                      a2 + -3600 * (a2 / 3600) - 60 * (a2 % 3600 / 60));
    }
  }
  else
  {
    strcpy(a1, "--:--:--");
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A6F3F0  (binary VA: 0x1a6f3f0)
// Original: sub_1A6F3F0
// ----------------------------------------------------------------------------
int sub_1A6F3F0(int64_t a1, int a2)
{
  if ( SHIDWORD(a1) > 0 )
    goto LABEL_7;
  if ( a1 <= 99999 )
  {
    curl_msnprintf(a2, 6, (int)(uintptr_t)("%5lld"), a1);
    return (int)(uintptr_t)(a2);
  }
  if ( (unsigned int)a1 <= 0x9C3FFF )
  {
    curl_msnprintf(a2, 6, (int)(uintptr_t)("%4lldk"), a1 >> 10);
    return (int)(uintptr_t)(a2);
  }
  if ( (unsigned int)a1 > 0x63FFFFF )
  {
LABEL_7:
    if ( a1 > 0x270FFFFFFLL )
    {
      if ( SHIDWORD(a1) <= 24 )
      {
        curl_msnprintf(
          a2,
          6,
          (int)(uintptr_t)("%2lld.%0lldG"),
          (unsigned int)((uint64_t)a1 >> 30),
          SHIDWORD(a1) >> 30,
          ((unsigned int)a1 & 0x3FFFFFFF) / 107374182LL);
      }
      else if ( SHIDWORD(a1) <= 2499 )
      {
        curl_msnprintf(a2, 6, (int)(uintptr_t)("%4lldG"), a1 >> 30);
      }
      else if ( SHIDWORD(a1) <= 2559999 )
      {
        curl_msnprintf(a2, 6, (int)(uintptr_t)("%4lldT"), __PAIR64__(SHIDWORD(a1) >> 31, SHIDWORD(a1) >> 8));
      }
      else
      {
        curl_msnprintf(a2, 6, (int)(uintptr_t)("%4lldP"), __PAIR64__(SHIDWORD(a1) >> 31, SHIDWORD(a1) >> 18));
      }
    }
    else
    {
      curl_msnprintf(a2, 6, (int)(uintptr_t)("%4lldM"), a1 >> 20);
    }
  }
  else
  {
    curl_msnprintf(
      a2,
      6,
      (int)(uintptr_t)("%2lld.%0lldM"),
      (unsigned int)((uint64_t)a1 >> 20),
      SHIDWORD(a1) >> 20,
      ((unsigned int)a1 & 0xFFFFF) / 104857LL);
  }
  return (int)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A709F0  (binary VA: 0x1a709f0)
// Original: sub_1A709F0
// ----------------------------------------------------------------------------
int sub_1A709F0(int a1, int a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef struct timeval _g4_t_timeout;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_timeout)) > _g4_s4 ? (24u + sizeof(_g4_t_timeout)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_timeout &timeout = *reinterpret_cast<_g4_t_timeout *>(_g4_sf + 24u);

  v4 = 0;
  if ( a1 != 0 )
  {
    if ( a1 < 0 )
    {
      *(uint32_t *)__errno(a3, a2) = 22;
      return -1;
    }
    else
    {
      curlx_tvnow(&v13);
      v5 = a1;
      v11 = v13;
      v12 = v14;
      while ( 1 )
      {
        timeout.tv_sec = v5 / 1000;
        timeout.tv_usec = 1000 * (v5 % 1000);
        v7 = select(0, nullptr, nullptr, nullptr, &timeout);
        v4 = v7;
        if ( v7 != -1 )
          break;
        v6 = *(uint32_t *)__errno(v9, v8);
        if ( v6 == 4 || v6 == 0 )
        {
          curlx_tvnow(&v13);
          v5 = a1 - curlx_tvdiff(v13, v14, v11, v12);
          if ( v5 > 0 )
            continue;
        }
        return v4;
      }
      if ( v7 != 0 )
        return -1;
    }
  }
  return v4;
}



// ============================================================================
// Address:   0x1a72820 (size: 142 bytes)
// Symbol:    curlx_tvnow
// Demangled: curlx_tvnow
// ============================================================================
struct timeval *curlx_tvnow(struct timeval *a1)
{
  typedef struct timeval _g4_t_tv;
  typedef struct timespec _g4_t_tp;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_tv)) > _g4_s0 ? (0u + sizeof(_g4_t_tv)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_tp)) > _g4_s1 ? (8u + sizeof(_g4_t_tp)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 0u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 8u);

  if ( clock_gettime(1, &tp) != 0 )
  {
    gettimeofday(&tv, nullptr);
  }
  else
  {
    tv.tv_sec = tp.tv_sec;
    tv.tv_usec = tp.tv_nsec / 1000;
  }
  *a1 = tv;
  return a1;
}
// ----------------------------------------------------------------------------
// Function: curlx_tvdiff  (binary VA: 0x1a728b0)
// Original: curlx_tvdiff
// ----------------------------------------------------------------------------
int curlx_tvdiff(int a1, int a2, int a3, int a4)
{
  return 1000 * (a1 - a3) + (a2 - a4) / 1000;
}

// ----------------------------------------------------------------------------
// Function: curlx_tvdiff_secs  (binary VA: 0x1a728e0)
// Original: curlx_tvdiff_secs
// ----------------------------------------------------------------------------
long double curlx_tvdiff_secs(int a1, int a2, int a3, int a4)
{
  return (double)(a2 - a4) * 0.000001 + (double)(a1 - a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1A72930  (binary VA: 0x1a72930)
// Original: sub_1A72930
// ----------------------------------------------------------------------------
int sub_1A72930(uint8_t *a1, int a2)
{
  int v3;
  int v4;
  char v5;
  int v6;
  char v7;
  int result;

  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(uint8_t *)(a2 + v3);
    v6 = 0;
    if ( v5 == 65 )
      goto LABEL_11;
    while ( 1 )
    {
      v7 = byte_1D36320[++v6];
      if ( v7 == 0 )
        break;
      if ( v7 == v5 )
        goto LABEL_11;
    }
    if ( v5 == 0 )
    {
LABEL_11:
      v4 = v6 + (v4 << 6);
    }
    else if ( v5 == 61 )
    {
      v4 <<= 6;
    }
    ++v3;
  }
  while ( v3 != 4 );
  a1[2] = curlx_ultouc(v4);
  a1[1] = curlx_ultouc(BYTE1(v4));
  result = curlx_ultouc(BYTE2(v4));
  *a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A731F0  (binary VA: 0x1a731f0)
// Original: sub_1A731F0
// ----------------------------------------------------------------------------
int sub_1A731F0(int a1)
{
  int result;

  result = a1;
  if ( *(uint8_t *)(a1 + 12) == 20 && *(uint8_t *)(a1 + 13) == 2 )
  {
    *(uint8_t *)(a1 + 12) = 29;
    *(uint8_t *)(a1 + 13) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A73210  (binary VA: 0x1a73210)
// Original: sub_1A73210
// ----------------------------------------------------------------------------
unsigned int sub_1A73210(hkClass::Self *a1, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2)
{
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *i;
  unsigned int result;
  hkClass::Self *Parent;
  int v6;
  uint8_t *v7;
  int j;
  hkClassMember::Self *DeclaredMember;
  hkString::Self **MemberByName;

  for ( i = a2; ; i = a2 )
  {
    result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
               i,
               (unsigned int)(uintptr_t)(a1),
               0);
    if ( (result & 1) != 0 )
      break;
    hkMapBase_unsigned_long_unsigned_l_393416::insert(
      i,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (unsigned int)(uintptr_t)(a1),
      result | 1);
    Parent = a1;
    v6 = *((uint16_t *)hkClass::getMemberByName((hkClass::Self *)&hkClassVersion1Class, "hasVtable") + 9);
    while ( hkClass::getParent(Parent) != 0 )
    {
      *(uint32_t *)((char *)Parent + v6) = 0;
      Parent = (hkClass::Self *)hkClass::getParent(Parent);
    }
    v7 = (uint8_t *)((char *)Parent + v6);
    if ( *v7 != 0 )
    {
      MemberByName = hkClass::getMemberByName((hkClass::Self *)&hkClassVersion1Class, "numImplementedInterfaces");
      ++*(uint32_t *)((char *)Parent + *((uint16_t *)MemberByName + 9));
    }
    *(uint32_t *)v7 = 0;
    for ( j = 0; j < hkClass::getNumDeclaredMembers(a1); ++j )
    {
      DeclaredMember = (hkClassMember::Self *)hkClass::getDeclaredMember(a1, j);
      if ( *((uint32_t *)DeclaredMember + 1) != 0 )
      {
        hkClassMember::getStructClass(DeclaredMember);
        sub_1A73210();
      }
    }
    result = hkClass::getParent(a1);
    if ( result == 0 )
      break;
    a1 = (hkClass::Self *)hkClass::getParent(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A73350  (binary VA: 0x1a73350)
// Original: sub_1A73350
// ----------------------------------------------------------------------------
unsigned int sub_1A73350(hkClass::Self *Parent, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, int a3, void (*a4)(hkClassMember::Self *))
{
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *i;
  unsigned int result;
  int j;
  hkClassMember::Self *DeclaredMember;

  for ( i = a2; ; i = a2 )
  {
    result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
               i,
               (unsigned int)(uintptr_t)(Parent),
               0);
    if ( (result & a3) != 0 )
      break;
    hkMapBase_unsigned_long_unsigned_l_393416::insert(
      i,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (unsigned int)(uintptr_t)(Parent),
      a3 | result);
    for ( j = 0; j < hkClass::getNumDeclaredMembers(Parent); ++j )
    {
      DeclaredMember = (hkClassMember::Self *)hkClass::getDeclaredMember(Parent, j);
      if ( hkClassMember::getClass(DeclaredMember) != 0 )
        sub_1A73350(a3, a4);
      a4(DeclaredMember);
    }
    result = hkClass::getParent(Parent);
    if ( result == 0 )
      break;
    Parent = (hkClass::Self *)hkClass::getParent(Parent);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A73420  (binary VA: 0x1a73420)
// Original: sub_1A73420
// ----------------------------------------------------------------------------
int sub_1A73420(int a1)
{
  int result;
  int v2;
  int16_t v3;

  result = a1;
  v2 = *(uint8_t *)(a1 + 12);
  if ( v2 == 19 )
  {
    v2 = *(uint8_t *)(a1 + 13);
    *(uint16_t *)(a1 + 16) |= 0x400u;
    *(uint8_t *)(a1 + 12) = v2;
    *(uint8_t *)(a1 + 13) = 0;
  }
  if ( v2 == 24 || v2 == 31 )
  {
    v3 = *(uint16_t *)(a1 + 16);
    if ( (v3 & 8) != 0 )
    {
      v3 &= ~8u;
      *(uint8_t *)(a1 + 13) = 4;
      *(uint16_t *)(a1 + 16) = v3;
    }
    if ( (v3 & 0x10) != 0 )
    {
      *(uint8_t *)(a1 + 13) = 6;
      *(uint16_t *)(a1 + 16) = v3 & 0xFFEF;
      v3 &= ~0x10u;
    }
    if ( (v3 & 0x20) != 0 )
    {
      *(uint8_t *)(a1 + 13) = 8;
      *(uint16_t *)(a1 + 16) = v3 & 0xFFDF;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A76EE0  (binary VA: 0x1a76ee0)
// Original: sub_1A76EE0
// ----------------------------------------------------------------------------
hkHardwareInfo::Self * sub_1A76EE0()
{
  uint32_t *address;
  hkHardwareInfo::Self *v1;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v1 = (hkHardwareInfo::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                           *(uint32_t *)(*address + 44),
                           16);
  hkHardwareInfo::Construct(v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A76F30  (binary VA: 0x1a76f30)
// Original: sub_1A76F30
// ----------------------------------------------------------------------------
uint32_t * sub_1A76F30()
{
  dword_21425E0 = (int)(uintptr_t)("hkHardwareInfo");
  dword_21425E4 = (int)(uintptr_t)(sub_1A76EE0);
  dword_21425EC = (int)(uintptr_t)(&hkSingleton<hkHardwareInfo::Self>::s_instance);
  dword_21425E8 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_21425E0);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: defaultPopDispatchFunc  (binary VA: 0x1a796e0)
// Original: defaultPopDispatchFunc
// ----------------------------------------------------------------------------
int defaultPopDispatchFunc(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, int, int, int))(a1 + 16 * (*(uint8_t *)(a3 + 1) + 15) + 20))(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: defaultFinishDispatchFunc  (binary VA: 0x1a79720)
// Original: defaultFinishDispatchFunc
// ----------------------------------------------------------------------------
int defaultFinishDispatchFunc(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, int, int, int))(a1 + 16 * (*(uint8_t *)(a3 + 1) + 15) + 24))(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_1A79760  (binary VA: 0x1a79760)
// Original: sub_1A79760
// ----------------------------------------------------------------------------
int sub_1A79760()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A79770  (binary VA: 0x1a79770)
// Original: sub_1A79770
// ----------------------------------------------------------------------------
int sub_1A79770()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A7F9E0  (binary VA: 0x1a7f9e0)
// Original: sub_1A7F9E0
// ----------------------------------------------------------------------------
uint32_t * sub_1A7F9E0()
{
  uint32_t *address;
  uint32_t *result;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                       *(uint32_t *)(*address + 44),
                       20);
  result[1] = -65535;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20B0EC8);
  result[3] = 0;
  result[4] = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A7FBE0  (binary VA: 0x1a7fbe0)
// Original: sub_1A7FBE0
// ----------------------------------------------------------------------------
uint32_t * sub_1A7FBE0()
{
  dword_2142600 = (int)(uintptr_t)("hkVtableClassRegistry");
  dword_2142604 = (int)(uintptr_t)(sub_1A7F9E0);
  dword_214260C = (int)(uintptr_t)(&hkSingleton<hkVtableClassRegistry::Self>::s_instance);
  dword_2142608 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_2142600);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: sub_1A812A0  (binary VA: 0x1a812a0)
// Original: sub_1A812A0
// ----------------------------------------------------------------------------
int sub_1A812A0(hkString::Self *a1, int a2)
{
  int v2;
  int v3;

  v2 = hkOstream::opShl(a2, (hkString::Self *)"Module( str=r'''");
  v3 = hkOstream::opShl(v2, a1);
  return hkOstream::opShl(v3, (hkString::Self *)"''' )\n");
}

// ----------------------------------------------------------------------------
// Function: sub_1A812F0  (binary VA: 0x1a812f0)
// Original: sub_1A812F0
// ----------------------------------------------------------------------------
int sub_1A812F0(hkString::Self *a1, int a2)
{
  char *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  hkOstream::Self *v7;
  int v8;
  int result;
  uint32_t v10[9];

  v2 = *(char **)(**(uint32_t **)(a2 + 4) + 4 * *(uint32_t *)(a2 + 8));
  v10[0] = (uint32_t)(uintptr_t)(a1);
  v3 = (char *)a1 + hkString::lastIndexOf(a1, &byte_9[1]);
  v4 = *(uint32_t *)a2;
  v10[1] = (uint32_t)(uintptr_t)(v3);
  v5 = hkOstream::opShl(v4, (hkString::Self *)"Location( loc=");
  v6 = hkOstream::opShl(v5, v2);
  v7 = (hkOstream::Self *)hkOstream::opShl(v6, (hkString::Self *)", str=r\"\"\"");
  v8 = opShl(v7, (const hkSubString::Self *)v10);
  result = hkOstream::opShl(v8, (hkString::Self *)"\"\"\" )\n");
  ++*(uint32_t *)(a2 + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A821C0  (binary VA: 0x1a821c0)
// Original: sub_1A821C0
// ----------------------------------------------------------------------------
int sub_1A821C0()
{
  int result;
  int v1;
  ssize_t v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  unsigned int v7;
  char v8;
  char *v9;
  unsigned int v10;
  char v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_buf[4124];
  enum : size_t {
    _g4_s0 = 4208u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_buf)) > _g4_s1 ? (16u + sizeof(_g4_t_buf)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_buf &buf = *reinterpret_cast<_g4_t_buf *>(_g4_sf + 16u);

  dword_2142630 = 2;
  dword_2142620 = 0;
  dword_2142624 = 0;
  dword_2142610 = 1;
  result = open("/proc/cpuinfo", 0);
  v1 = result;
  if ( result < 0 )
    return result;
  while ( 1 )
  {
    v2 = read(v1, buf, 0x1000u);
    if ( v2 >= 0 )
      break;
    if ( *(uint32_t *)__errno(v4, v3) != 4 )
      return close(v1);
  }
  v5 = (char *)(&buf[v2]);
  close(v1);
  v12 = 0;
  v6 = (char *)(buf);
LABEL_4:
  while ( 1 )
  {
    v7 = (unsigned int)(uintptr_t)(memmem(v6, v5 - v6, "processor", 9));
    if ( v7 == 0 )
      break;
    v6 = (char *)(v7 + 9);
    if ( (v7 <= (unsigned int)(uintptr_t)(buf) || *(uint8_t *)(v7 - 1) == 10) && v5 > v6 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( v8 != 9 )
        goto LABEL_11;
      while ( ++v6 != v5 )
      {
        v8 = *v6;
        if ( *v6 != 9 )
        {
LABEL_11:
          if ( v8 != 32 )
          {
            if ( v8 == 58 )
            {
              ++v12;
              ++v6;
            }
            goto LABEL_4;
          }
        }
      }
    }
  }
  result = v12;
  dword_2142610 = v12;
  if ( v12 != 0 )
  {
    dword_2142630 = 2;
    return result;
  }
  v12 = 0;
  v9 = (char *)(buf);
LABEL_20:
  while ( 2 )
  {
    v10 = (unsigned int)(uintptr_t)(memmem(v9, v5 - v9, "Processor", 9));
    if ( v10 != 0 )
    {
      v9 = (char *)(v10 + 9);
      if ( v10 > (unsigned int)(uintptr_t)(buf) && *(uint8_t *)(v10 - 1) != 10 || v5 <= v9 )
        continue;
      v11 = *(uint8_t *)(v10 + 9);
      if ( v11 == 9 )
        goto LABEL_25;
      while ( 1 )
      {
        if ( v11 != 32 )
        {
          if ( v11 == 58 )
          {
            ++v12;
            ++v9;
          }
          goto LABEL_20;
        }
        do
        {
LABEL_25:
          if ( ++v9 == v5 )
            goto LABEL_20;
          v11 = *v9;
        }
        while ( *v9 == 9 );
      }
    }
    break;
  }
  result = 1;
  dword_2142630 = 2;
  if ( v12 != 0 )
    result = v12;
  dword_2142610 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A82460  (binary VA: 0x1a82460)
// Original: sub_1A82460
// ----------------------------------------------------------------------------
void sub_1A82460()
{
  hkClass::Construct(
    (hkClass::Self *)&hkClassVersion1Class,
    "hkClass",
    nullptr,
    36,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkClassVersion1::Members,
    7,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&hkClassVersion2Class,
    "hkClass",
    nullptr,
    36,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkClassVersion2::Members,
    7,
    nullptr,
    nullptr,
    0,
    0);
  dword_20D0370 = (int)(uintptr_t)(&off_2046B80);
  dword_20D0388 = (int)(uintptr_t)(&off_2046B80);
  hkClass::Construct(
    (hkClass::Self *)&hkClassMemberVersion1Class,
    "hkClassMember",
    nullptr,
    20,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2046B80,
    3,
    (const hkClassMember::Self *)&off_20D0320,
    8,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&unk_21427C0,
    "hkClassEnumItem",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkClassEnumVersion1::Item::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&hkClassEnumVersion1Class,
    "hkClassEnum",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkClassEnumVersion1::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  *(uintptr_t *)(unk_20D0290) = (uintptr_t)(hkClassMemberVersion3TypeEnum);
  *(uintptr_t *)(unk_20D02A8) = (uintptr_t)(hkClassMemberVersion3TypeEnum);
  *(uintptr_t *)(unk_20D02D8) = (uintptr_t)(hkClassMemberVersion3FlagValuesEnum[0]);
  hkClass::Construct(
    (hkClass::Self *)&hkClassMemberVersion3Class,
    "hkClassMember",
    nullptr,
    24,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20469A0,
    3,
    (const hkClassMember::Self *)&hkClassMemberVersion3::Members,
    9,
    nullptr,
    nullptr,
    0,
    0);
  *(uintptr_t *)(unk_20D0208) = (uintptr_t)(hkClassVersion3FlagValuesEnum[0]);
  hkClass::Construct(
    (hkClass::Self *)&hkClassVersion3Class,
    "hkClass",
    nullptr,
    48,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2046960,
    2,
    (const hkClassMember::Self *)&hkClassVersion3::Members,
    10,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1A84260  (binary VA: 0x1a84260)
// Original: sub_1A84260
// ----------------------------------------------------------------------------
bool * sub_1A84260(bool *a1, int a2, int a3)
{
  bool *result;
  unsigned int v4;
  unsigned int v5;
  bool v6;

  result = a1;
  v4 = *(uint32_t *)(a2 + 4);
  v5 = *(uint32_t *)(a3 + 4);
  v6 = v4 < v5;
  if ( v4 == v5 )
    v6 = *(uint32_t *)(a2 + 8) > *(uint32_t *)(a3 + 8);
  *a1 = v6;
  return result;
}



// ============================================================================
// Address:   0x1a84ff0 (size: 327 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIPN21hkTrackerScanSnapshot5BlockEPF6hkBoolPKS2_S6_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkTrackerScanSnapshot::Block *,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)>(hkTrackerScanSnapshot::Block * *,int,int,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*))
// ============================================================================
int hkAlgorithm::quickSortRecursive_40560c(
        int a1,
        int a2,
        int a3,
        void (*a4)(uint8_t *))
{
  int i;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_j;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void (*_g4_t_v17)(uint8_t *);
  typedef uint8_t _g4_t_v18[9];
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_j)) > _g4_s4 ? (16u + sizeof(_g4_t_j)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v16)) > _g4_s6 ? (20u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v18)) > _g4_s8 ? (39u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19 = &a1;
  v12 = a1;
  v11 = a2;
  v10 = a3;
  v17 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v10;
    v6 = i + 1;
    for ( j = i + 1; ; v6 = j )
    {
      v13 = v6 - 1;
      v17(v18);
      if ( v18[0] == 0 )
      {
        v7 = (uint32_t *)(v12 + 4 * v5);
        while ( 1 )
        {
          v15 = v7--;
          v17(v18);
          if ( v18[0] == 0 )
            break;
          --v5;
        }
        if ( v13 > v5 )
          break;
        if ( v13 != v5 )
        {
          v9 = v15;
          v16 = *v15;
          *v9 = *(uint32_t *)(v12 + 4 * j - 4);
          *(uint32_t *)(v12 + 4 * j - 4) = v16;
        }
        --v5;
        v13 = j;
        if ( v5 < j )
          break;
      }
      ++j;
    }
    if ( v11 < v5 )
      break;
    result = v13;
    if ( v10 <= v13 )
      return result;
LABEL_10:
    v11 = result;
  }
  hkAlgorithm::quickSortRecursive_40560c(
    v12,
    v11,
    v5,
    v17);
  result = v13;
  if ( v10 > v13 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x1a853f0 (size: 327 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIPKN21hkTrackerScanSnapshot5BlockEPF6hkBoolS4_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkTrackerScanSnapshot::Block const*,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)>(hkTrackerScanSnapshot::Block const* *,int,int,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*))
// ============================================================================
int hkAlgorithm::quickSortRecursive_c3f13a(
        int a1,
        int a2,
        int a3,
        void (*a4)(uint8_t *))
{
  int i;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_j;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void (*_g4_t_v17)(uint8_t *);
  typedef uint8_t _g4_t_v18[9];
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_j)) > _g4_s4 ? (16u + sizeof(_g4_t_j)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v16)) > _g4_s6 ? (20u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v18)) > _g4_s8 ? (39u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19 = &a1;
  v12 = a1;
  v11 = a2;
  v10 = a3;
  v17 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v10;
    v6 = i + 1;
    for ( j = i + 1; ; v6 = j )
    {
      v13 = v6 - 1;
      v17(v18);
      if ( v18[0] == 0 )
      {
        v7 = (uint32_t *)(v12 + 4 * v5);
        while ( 1 )
        {
          v15 = v7--;
          v17(v18);
          if ( v18[0] == 0 )
            break;
          --v5;
        }
        if ( v13 > v5 )
          break;
        if ( v13 != v5 )
        {
          v9 = v15;
          v16 = *v15;
          *v9 = *(uint32_t *)(v12 + 4 * j - 4);
          *(uint32_t *)(v12 + 4 * j - 4) = v16;
        }
        --v5;
        v13 = j;
        if ( v5 < j )
          break;
      }
      ++j;
    }
    if ( v11 < v5 )
      break;
    result = v13;
    if ( v10 <= v13 )
      return result;
LABEL_10:
    v11 = result;
  }
  hkAlgorithm::quickSortRecursive_c3f13a(
    v12,
    v11,
    v5,
    v17);
  result = v13;
  if ( v10 > v13 )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_1A86750  (binary VA: 0x1a86750)
// Original: sub_1A86750
// ----------------------------------------------------------------------------
int sub_1A86750()
{
  uint32_t *address;
  int v1;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v1 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 32);
  *(uint32_t *)(v1 + 4) = -65535;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A64C8);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v1 + 8));
  *(uint32_t *)(v1 + 24) = 1;
  *(uint32_t *)(v1 + 28) = 1;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A867C0  (binary VA: 0x1a867c0)
// Original: sub_1A867C0
// ----------------------------------------------------------------------------
uint32_t * sub_1A867C0()
{
  dword_2142800 = (int)(uintptr_t)("hkTypeInfoRegistry");
  dword_2142804 = (int)(uintptr_t)(sub_1A86750);
  dword_214280C = (int)(uintptr_t)(&hkSingleton<hkTypeInfoRegistry::Self>::s_instance);
  dword_2142808 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_2142800);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: sub_1A86980  (binary VA: 0x1a86980)
// Original: sub_1A86980
// ----------------------------------------------------------------------------
int sub_1A86980()
{
  uint32_t *address;
  int v1;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v1 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 28);
  *(uint32_t *)(v1 + 4) = -65535;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A66A8);
  *(uint32_t *)(v1 + 8) = (uint32_t)(uintptr_t)("hk_2014.1.0-r1");
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct((hkString::Self **)(v1 + 12));
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20A66E8);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A86A00  (binary VA: 0x1a86a00)
// Original: sub_1A86A00
// ----------------------------------------------------------------------------
uint32_t * sub_1A86A00()
{
  dword_2142820 = (int)(uintptr_t)("hkDefaultClassNameRegistry");
  dword_2142824 = (int)(uintptr_t)(sub_1A86980);
  dword_214282C = (int)(uintptr_t)(&hkSingleton<hkDefaultClassNameRegistry::Self>::s_instance);
  dword_2142828 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_2142820);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: sub_1A86B30_edx_eax_b4977d  (binary VA: 0x1a86b30)
// Original: sub_1A86B30
// ----------------------------------------------------------------------------
int64_t sub_1A86B30_edx_eax_b4977d(int a1, uint8_t *a2)
{
  int i;
  int v3;
  int v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int64_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef uint8_t _g4_t_v21[264];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v17)) > _g4_s3 ? (4u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v19)) > _g4_s4 ? (8u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v20)) > _g4_s5 ? (8u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v21)) > _g4_s6 ? (16u + sizeof(_g4_t_v21)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);

  for ( i = a1; ; i = a1 )
  {
    v3 = G4_VCALL<int>(i, 32, v21, 64);
    if ( v3 == 0 )
      break;
    if ( v3 > 0 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = v21[v4];
        if ( v5 != 32 && (uint8_t)(v5 - 9) > 1u && v5 != 13 )
          break;
        if ( ++v4 == v3 )
          goto LABEL_23;
      }
      G4_VCALL<void>(a1, 28, v4);
      break;
    }
LABEL_23:
    G4_VCALL<void>(a1, 28, v3);
  }
  *a2 = 0;
  v14 = G4_VCALL<int>(a1, 32, v21, 255);
  if ( v14 != 0 )
  {
    if ( v21[0] == 43 )
    {
      v6 = 2;
      v7 = 3;
      v8 = 4;
      v9 = 1;
    }
    else if ( v21[0] == 45 )
    {
      v6 = 2;
      v7 = 3;
      v9 = 1;
      *a2 = 1;
      v8 = 4;
    }
    else
    {
      v6 = 1;
      v7 = 2;
      v8 = 3;
      v9 = 0;
    }
    if ( v14 > v8 )
    {
      v15 = 10;
      if ( v21[v9] == 48 )
      {
        v20 = v21[v6];
        if ( (v20 & 0xDF) == 0x58 )
        {
          v17 = v21[v7];
          if ( (uint8_t)(v17 - 48) <= 9u || (uint8_t)((v17 & 0xDF) - 65) <= 5u )
          {
            v9 = v7;
            v15 = 16;
            goto LABEL_16;
          }
        }
LABEL_38:
        v15 = (uint8_t)(v20 - 48) < 0xAu ? 8 : 10;
        if ( (uint8_t)(v20 - 48) < 0xAu )
          v9 = v6;
      }
LABEL_16:
      v19 = 0;
      v10 = v15;
      do
      {
        v11 = (char)v21[v9];
        if ( (uint8_t)(v21[v9] - 48) <= 9u )
        {
          v16 = v11 - 48;
        }
        else if ( (uint8_t)(v11 - 66) > 4u )
        {
          if ( (uint8_t)(v11 - 98) > 4u )
            goto LABEL_25;
          v16 = v11 - 87;
        }
        else
        {
          v16 = v11 - 55;
        }
        if ( v16 >= v10 )
          break;
        ++v9;
        v19 = v19 * v10 + v16;
      }
      while ( v9 != v14 );
      goto LABEL_25;
    }
    if ( v14 > v7 )
    {
      if ( v21[v9] == 48 )
      {
        v20 = v21[v6];
        goto LABEL_38;
      }
    }
    else if ( v9 >= v14 )
    {
      v19 = 0;
LABEL_25:
      G4_VCALL<void>(a1, 28, v9);
      return v19;
    }
    v15 = 10;
    goto LABEL_16;
  }
  G4_VCALL<void>(a1, 28, 1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A86E10  (binary VA: 0x1a86e10)
// Original: sub_1A86E10
// ----------------------------------------------------------------------------
int sub_1A86E10(int a1, int a2, int a3, int a4, int16_t a5)
{
  int i;
  int v6;
  int v7;
  char v8;
  int v9;
  char *v10;
  char v11;
  uint8_t v14[268];
  float v15;

  for ( i = a1; ; i = a1 )
  {
    v6 = G4_VCALL<int>(i, 32, v14, 64);
    if ( v6 == 0 )
      break;
    if ( v6 > 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = v14[v7];
        if ( v8 != 32 && (uint8_t)(v8 - 9) > 1u && v8 != 13 )
          break;
        if ( ++v7 == v6 )
          goto LABEL_24;
      }
      G4_VCALL<void>(a1, 28, v7);
      break;
    }
LABEL_24:
    G4_VCALL<void>(a1, 28, v6);
  }
  v9 = G4_VCALL<int>(a1, 32, v14, 255);
  if ( v9 == 0 || (uint8_t)(a5 - 48) > 9u && (uint8_t)(a5 - 43) > 3u )
  {
    G4_VCALL<void>(a3, 28, 1);
    return -1082130432;
  }
  v10 = (char *)&dword_0 + 1;
  if ( v9 <= 1 )
  {
    G4_VCALL<void>(a3, 28, 1);
    HIBYTE(a5) = 0;
    goto LABEL_23;
  }
  do
  {
    while ( 1 )
    {
      v11 = v14[(uint32_t)(uintptr_t)(v10)];
      if ( (uint8_t)(v11 - 48) > 9u && v11 != 43 && v11 != 45 && (v11 & 0xDF) != 0x45 )
      {
        if ( (v11 & 0xFD) != 0x2C )
          goto LABEL_22;
        goto LABEL_18;
      }
      if ( (v11 & 0xFD) != 0x2C )
        break;
LABEL_18:
      v14[(uint32_t)(uintptr_t)(v10++)] = 46;
      if ( v10 == (char *)v9 )
        goto LABEL_22;
    }
    ++v10;
  }
  while ( v10 != (char *)v9 );
LABEL_22:
  G4_VCALL<void>(a3, 28, v10);
  *((uint8_t *)&a5 + (uint32_t)(uintptr_t)(v10)) = 0;
LABEL_23:
  v15 = hkString::atof((hkString::Self *)v14);
  return LODWORD(v15);
}

// ----------------------------------------------------------------------------
// Function: opShl  (binary VA: 0x1a89150)
// Original: operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * opShl(hkOstream::Self *a1, const char **a2)
{
  hkOstream::write(a1, *a2, a2[1] - *a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A91530  (binary VA: 0x1a91530)
// Original: sub_1A91530
// ----------------------------------------------------------------------------
bool sub_1A91530(int a1, int a2)
{
  return *(uint32_t *)(a1 + 8) < *(uint32_t *)(a2 + 8);
}



// ============================================================================
// Address:   0x1a91a50 (size: 386 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN22hkDefaultMemoryTracker10ClassAllocEPFjRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkDefaultMemoryTracker::ClassAlloc,unsigned int (*)(hkDefaultMemoryTracker::ClassAlloc const&,hkDefaultMemoryTracker::ClassAlloc const&)>(hkDefaultMemoryTracker::ClassAlloc *,int,int,unsigned int (*)(hkDefaultMemoryTracker::ClassAlloc const&,hkDefaultMemoryTracker::ClassAlloc const&))
// ============================================================================
hkDefaultMemoryTracker::ClassAlloc::Self *hkAlgorithm::quickSortRecursive_13cdfb(
        hkAlgorithm::Self *self,
        hkDefaultMemoryTracker::ClassAlloc::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkDefaultMemoryTracker::ClassAlloc::Self *result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  hkDefaultMemoryTracker::ClassAlloc::Self *v9;
  char *v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  typedef unsigned int (*_g4_t_v15)(const hkDefaultMemoryTracker::ClassAlloc::Self *, const hkDefaultMemoryTracker::ClassAlloc::Self *);
  typedef hkDefaultMemoryTracker::ClassAlloc::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef hkDefaultMemoryTracker::ClassAlloc::Self *_g4_t_i;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v20)) > _g4_s5 ? (24u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);

  for ( result = a2; ; a2 = result )
  {
    v5 = a3;
    v6 = (uint32_t *)((char *)self + 16 * (((int)(uintptr_t)(result) + a3) >> 1));
    v22[0] = *v6;
    v22[1] = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    v22[2] = v7;
    v22[3] = v8;
    v18 = (int *)((char *)self + 16 * (uint32_t)(uintptr_t)(a2));
    v9 = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)a2 + 1);
    for ( i = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)a2 + 1); ; v9 = i )
    {
      v16 = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)v9 - 1);
      if ( a4(v18, (char *)v22) == 0 )
      {
        v10 = (char *)self + 16 * v5;
        while ( 1 )
        {
          v20 = (int *)v10;
          v11 = a4((int *)(v22), v10);
          v10 -= 16;
          if ( v11 == 0 )
            break;
          --v5;
        }
        if ( (int)(uintptr_t)(v16) > v5 )
          break;
        if ( v16 != (hkDefaultMemoryTracker::ClassAlloc::Self *)v5 )
        {
          v12 = v20;
          v13 = v20[1];
          v17 = v20[2];
          v21 = v20[3];
          v14 = *v12;
          *v12 = *v18;
          v12[1] = v18[1];
          v12[2] = v18[2];
          v12[3] = v18[3];
          *v18 = v14;
          v18[2] = v17;
          v18[1] = v13;
          v18[3] = v21;
        }
        --v5;
        v16 = i;
        if ( v5 < (int)(uintptr_t)(i) )
          break;
      }
      i = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)i + 1);
      v18 += 4;
    }
    if ( (int)(uintptr_t)(a2) < v5 )
      break;
    result = v16;
    if ( a3 <= (int)(uintptr_t)(v16) )
      return result;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_13cdfb(
    self,
    a2,
    v5,
    a4);
  result = v16;
  if ( a3 > (int)(uintptr_t)(v16) )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_1A91BE0  (binary VA: 0x1a91be0)
// Original: sub_1A91BE0
// ----------------------------------------------------------------------------
hkDefaultMemoryTracker::ClassAlloc::Self * sub_1A91BE0(hkAlgorithm::Self *a1, int a2)
{
  hkDefaultMemoryTracker::ClassAlloc::Self *v2;
  unsigned int v3;
  unsigned int *v4;
  hkDefaultMemoryTracker::ClassAlloc::Self *i;
  int *v6;
  unsigned int v7;
  int v8;
  hkDefaultMemoryTracker::ClassAlloc::Self *result;
  char *j;
  int v11;
  unsigned int v12;
  unsigned int *k;
  int *v14;
  int v15;
  unsigned int v16;
  int v17;
  hkDefaultMemoryTracker::ClassAlloc::Self *v18;
  int v19;
  int v20;
  hkDefaultMemoryTracker::ClassAlloc::Self *v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  hkDefaultMemoryTracker::ClassAlloc::Self *v28;
  hkDefaultMemoryTracker::ClassAlloc::Self *v29;
  int v30;
  int v31;
  char *v32;

  v29 = nullptr;
  v31 = a2;
  v2 = nullptr;
  while ( 1 )
  {
    v3 = *((uint32_t *)a1 + 4 * (((int)(uintptr_t)(v2) + a2) >> 1) + 2);
    v4 = (unsigned int *)((char *)a1 + 16 * (uint32_t)(uintptr_t)(v2) + 8);
    v32 = (char *)v2 + 1;
    v18 = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)v2 + 1);
    for ( i = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)v2 + 1); ; i = v18 )
    {
      v28 = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)i - 1);
      if ( *v4 >= v3 )
      {
        v6 = (int *)((char *)a1 + 16 * a2);
        v7 = v6[2];
        if ( v7 > v3 )
        {
          v8 = (int)(uintptr_t)(a1) + 16 * a2 - 8;
          do
          {
            v6 = (int *)(v8 - 8);
            v8 -= 16;
            v7 = *(uint32_t *)(v8 + 16);
            --a2;
          }
          while ( v7 > v3 );
        }
        if ( a2 < (int)(uintptr_t)(v28) )
          break;
        if ( (hkDefaultMemoryTracker::ClassAlloc::Self *)a2 != v28 )
        {
          v20 = *v6;
          v23 = v6[1];
          v25 = v6[3];
          *v6 = *(v4 - 2);
          v6[1] = *(v4 - 1);
          v6[2] = *v4;
          v6[3] = v4[1];
          *(v4 - 2) = v20;
          *(v4 - 1) = v23;
          *v4 = v7;
          v4[1] = v25;
        }
        --a2;
        v28 = v18;
        if ( a2 < (int)(uintptr_t)(v18) )
          break;
      }
      v18 = (hkDefaultMemoryTracker::ClassAlloc::Self *)((char *)v18 + 1);
      v4 += 4;
    }
    v30 = a2;
    if ( (int)(uintptr_t)(v29) < a2 )
    {
      for ( j = v32; ; j = (char *)v21 + 1 )
      {
        v19 = (int)(uintptr_t)(j);
        v11 = v30;
        v12 = *((uint32_t *)a1 + 4 * (((int)(uintptr_t)(v29) + v30) >> 1) + 2);
        for ( k = (unsigned int *)((char *)a1 + 16 * (uint32_t)(uintptr_t)(v29) + 8); ; k += 4 )
        {
          v21 = (hkDefaultMemoryTracker::ClassAlloc::Self *)(v19 - 1);
          if ( v12 <= *k )
          {
            v14 = (int *)((char *)a1 + 16 * v11);
            v26 = v14[2];
            if ( v26 > v12 )
            {
              v15 = (int)(uintptr_t)(a1) + 16 * v11 - 8;
              do
              {
                v14 = (int *)(v15 - 8);
                v15 -= 16;
                --v11;
              }
              while ( v12 < *(uint32_t *)(v15 + 16) );
              v26 = *(uint32_t *)(v15 + 16);
            }
            if ( v11 < (int)(uintptr_t)(v21) )
              break;
            if ( (hkDefaultMemoryTracker::ClassAlloc::Self *)v11 != v21 )
            {
              v16 = v14[1];
              v22 = *v14;
              *v14 = *(k - 2);
              v14[1] = *(k - 1);
              v14[2] = *k;
              v24 = v11;
              v17 = v14[3];
              v14[3] = k[1];
              *(k - 2) = v22;
              k[1] = v17;
              *(k - 1) = v16;
              *k = v26;
              v11 = v24;
            }
            --v11;
            v21 = (hkDefaultMemoryTracker::ClassAlloc::Self *)v19;
            if ( v11 < v19 )
              break;
          }
          ++v19;
        }
        if ( (int)(uintptr_t)(v29) < v11 )
          hkAlgorithm::quickSortRecursive_13cdfb(
            a1,
            v29,
            v11,
            (int (*)(int *, char *))sub_1A91530);
        if ( v30 <= (int)(uintptr_t)(v21) )
          break;
        v29 = v21;
      }
    }
    result = v28;
    if ( v31 <= (int)(uintptr_t)(v28) )
      break;
    v29 = v28;
    v2 = v28;
    a2 = v31;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A91E80  (binary VA: 0x1a91e80)
// Original: sub_1A91E80
// ----------------------------------------------------------------------------
int sub_1A91E80()
{
  dword_2142834 = 16;
  dword_2142830 = (int)((uint32_t)(uintptr_t)&off_2096CE8);
  dword_2142838 = 0;
  dword_214283C = 0;
  return __cxa_atexit((void (*)(void *))sub_6B1E30, &dword_2142830, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1A93F10  (binary VA: 0x1a93f10)
// Original: sub_1A93F10
// ----------------------------------------------------------------------------
void sub_1A93F10()
{
  hkClass::Construct(
    (hkClass::Self *)&hkDefaultMemoryTrackerClass,
    "hkDefaultMemoryTracker",
    (const hkClass::Self *)&hkReferencedObjectClass,
    128,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1A963C0  (binary VA: 0x1a963c0)
// Original: sub_1A963C0
// ----------------------------------------------------------------------------
int sub_1A963C0(int a1, int *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v16[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v3 = a1;
  v5 = a2[1];
  v6 = *((uint32_t *)a3 + 1);
  if ( v6 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v12);
    v3 = a1;
    v6 = *((uint32_t *)a3 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a3 + 4 * v6) = v5;
  ++*((uint32_t *)a3 + 1);
  v7 = a2[1];
  v14 = *(uint32_t *)(v3 + 4);
  v8 = a2[2] & 0x3FFFFFFF;
  v9 = v7 + v14;
  if ( v7 + v14 > v8 )
  {
    v10 = 2 * v8;
    v13 = v3;
    if ( v10 < v9 )
      v10 = v7 + v14;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v16, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v10, 1);
    v3 = v13;
    v9 = a2[1] + v14;
  }
  a2[1] = v9;
  hkString::memCpy((hkString::Self *)(*a2 + v7), *(void **)v3, *(uint32_t *)(v3 + 4) - 1);
  result = a2[1];
  *(uint8_t *)(*a2 + result - 1) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdGskImpl_hkcdGsk_Vector4ShapeInte_315686::linearCast_hkcdGsk_Cache_b79ca7  (binary VA: 0x1aa11e0)
// Original: hkcdGskImpl<hkcdGsk_Vector4ShapeInterface>::linearCast<hkcdGsk::Cache>
// ----------------------------------------------------------------------------
int hkcdGskImpl_hkcdGsk_Vector4ShapeInte_315686::linearCast_hkcdGsk_Cache_b79ca7(__m128 *a1, int a2, uint32_t *a3, int *a4, int a5, int a6, float *a7, int *a8)
{
  float v8; // xmm0_4
  __m128 *v10;
  float v11; // xmm6_4
  uint8_t v12;
  int v13;
  float v14; // xmm5_4
  __m128 v15;
  int32_t *v16;
  bool v17;
  int v18;
  int v19;
  float *v20;
  float *v21;
  __m128i v22;
  float v23; // xmm3_4
  float v24; // xmm2_4
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  float v29; // xmm4_4
  __m128i v30;
  float v31; // xmm6_4
  int v32;
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35;
  float v36; // xmm5_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm3_4
  __m128i v40;
  float v41; // xmm0_4
  __m128 v42;
  __m128 v43;
  __m128 v44;
  __m128i v45;
  int v46;
  int v47; // xmm2_4
  __m128 v48;
  float v49; // xmm1_4
  bool v50;
  __m128 v51;
  int v52;
  __m128 v53;
  float v54; // xmm1_4
  float v55; // xmm5_4
  float v56; // xmm0_4
  float v57; // xmm5_4
  __m128 v58;
  float v59; // xmm4_4
  float v60; // xmm6_4
  int v61; // xmm3_4
  float v62; // xmm4_4
  float v63; // xmm4_4
  float *v64;
  int v65;
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  int v69; // xmm0_4
  float v70; // xmm0_4
  float v71; // xmm0_4
  __m128i v72;
  char v73;
  float v74; // xmm6_4
  float *m128_f32;
  float v76; // xmm5_4
  float v77; // xmm0_4
  float v78; // xmm4_4
  float v79; // xmm1_4
  float v80;
  float v81; // xmm5_4
  float v82; // xmm4_4
  float v83; // xmm3_4
  float v84; // xmm5_4
  float v85; // xmm1_4
  float v86; // xmm2_4
  char v87;
  typedef float _g4_t_v88;
  typedef int _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef int32_t _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef double _g4_t_v101;
  typedef double _g4_t_v102;
  typedef float _g4_t_v103;
  typedef unsigned int _g4_t_v104;
  typedef unsigned int _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef float _g4_t_v109;
  typedef int _g4_t_v110;
  typedef __m128 *_g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef int _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef __m128 _g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119[7];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v88)) > _g4_s0 ? (8u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v89)) > _g4_s1 ? (12u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v90)) > _g4_s2 ? (16u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v91)) > _g4_s3 ? (20u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v92)) > _g4_s4 ? (24u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v93)) > _g4_s5 ? (28u + sizeof(_g4_t_v93)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v94)) > _g4_s6 ? (36u + sizeof(_g4_t_v94)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v95)) > _g4_s7 ? (40u + sizeof(_g4_t_v95)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v96)) > _g4_s8 ? (44u + sizeof(_g4_t_v96)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v97)) > _g4_s9 ? (48u + sizeof(_g4_t_v97)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v98)) > _g4_s10 ? (52u + sizeof(_g4_t_v98)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v99)) > _g4_s11 ? (56u + sizeof(_g4_t_v99)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v100)) > _g4_s12 ? (60u + sizeof(_g4_t_v100)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v101)) > _g4_s13 ? (64u + sizeof(_g4_t_v101)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v102)) > _g4_s14 ? (72u + sizeof(_g4_t_v102)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v103)) > _g4_s15 ? (80u + sizeof(_g4_t_v103)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v104)) > _g4_s16 ? (84u + sizeof(_g4_t_v104)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v105)) > _g4_s17 ? (88u + sizeof(_g4_t_v105)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v106)) > _g4_s18 ? (92u + sizeof(_g4_t_v106)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v107)) > _g4_s19 ? (96u + sizeof(_g4_t_v107)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v108)) > _g4_s20 ? (100u + sizeof(_g4_t_v108)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v109)) > _g4_s21 ? (104u + sizeof(_g4_t_v109)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v110)) > _g4_s22 ? (108u + sizeof(_g4_t_v110)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v111)) > _g4_s23 ? (112u + sizeof(_g4_t_v111)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v112)) > _g4_s24 ? (116u + sizeof(_g4_t_v112)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v113)) > _g4_s25 ? (120u + sizeof(_g4_t_v113)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v114)) > _g4_s26 ? (124u + sizeof(_g4_t_v114)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v115)) > _g4_s27 ? (128u + sizeof(_g4_t_v115)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v116)) > _g4_s28 ? (144u + sizeof(_g4_t_v116)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v117)) > _g4_s29 ? (160u + sizeof(_g4_t_v117)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v118)) > _g4_s30 ? (176u + sizeof(_g4_t_v118)) : _g4_s30,
    _g4_s32 = (192u + sizeof(_g4_t_v119)) > _g4_s31 ? (192u + sizeof(_g4_t_v119)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 16u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 20u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 24u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 28u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 40u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 44u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 48u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 52u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 56u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 60u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 64u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 72u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 80u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 84u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 88u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 92u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 96u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 100u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 104u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 108u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 112u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 116u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 120u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 124u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 128u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 144u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 160u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 176u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 192u);

  v8 = (float)((float)(*(float *)(a5 + 20) * *(float *)(a5 + 20)) + (float)(*(float *)(a5 + 16) * *(float *)(a5 + 16)))
     + (float)(*(float *)(a5 + 24) * *(float *)(a5 + 24));
  v106 = 1.4210855e-14f;
  v88 = v8;
  if ( v8 < 1.4210855e-14f )
    return 0;
  v10 = a1 + 2;
  v94 = *(float *)(a5 + 96);
  v11 = *(float *)(a5 + 100);
  v12 = *(uint8_t *)(a6 + 4);
  v116 = v12 & 3;
  v114 = (int)v12 >> 6;
  v115 = *(float *)&v114;
  v95 = v11;
  v13 = a6;
  v103 = *(float *)a5;
  v114 += a6;
  v14 = *(float *)(a5 + 8);
  v105 = *(unsigned int *)(a5 + 4);
  *(float *)&v104 = v14;
g4_m128_raw(v15) = *(unsigned int *)(a5 + 12);
  do
  {
    ++v13;
    ++v10;
    v16 = (int32_t *)(*a3 + 16 * *(uint8_t *)(v13 - 1));
    v17 = v13 == v114;
g4_m128_lane<int32_t>(v10[-1], 0) = *v16;
g4_m128_lane<int32_t>(v10[-1], 1) = v16[1];
g4_m128_lane<int32_t>(v10[-1], 2) = v16[2];
g4_m128_lane<int32_t>(v10[-1], 3) = v16[3];
  }
  while ( !v17 );
  v18 = a6 + ((int)*(uint8_t *)(a6 + 4) >> 6);
  v19 = *a4;
  v20 = v119;
  v114 = v18 + v116;
  do
  {
    ++v18;
    v20 += 4;
    v17 = v18 == v114;
    v21 = (float *)(16 * *(uint8_t *)(v18 - 1) + v19);
    *(v20 - 4) = *v21;
    *(v20 - 3) = v21[1];
    *(v20 - 2) = v21[2];
    *(v20 - 1) = v21[3];
  }
  while ( !v17 );
g4_m128_raw(v22) = LODWORD(v103);
  *(float *)g4_m128_ptr<int32_t>(v22) = v103 -g4_m128_lane<float>(a1[2], 0);
  v23 = *(float *)&v105 -g4_m128_lane<float>(a1[2], 1);
  v24 = *(float *)&v104 -g4_m128_lane<float>(a1[2], 2);
  *(float *)&v110 =g4_m128_lane<float>(v15, 0) -g4_m128_lane<float>(a1[2], 3);
  v25 = _mm_unpacklo_ps(G4_BITCAST<__m128>(v104), v15);
  v26 = _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v103)), G4_BITCAST<__m128>(v105));
  v111 = a1 + 10;
g4_m128_lane<uint64_t>(v27, 0) =g4_m128_lane<uint64_t>(v26, 0);
g4_m128_lane<uint64_t>(v27, 1) =g4_m128_lane<uint64_t>(v25, 0);
  v28 = _mm_sub_ps(v27, a1[2]);
  _mm_storel_ps(&v102, v25);
  _mm_storel_ps(&v101, v26);
  v29 = 0.0;
  a1[10] = v28;
  v30 = v22;
  *(float *)g4_m128_ptr<int32_t>(v30) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(v23 * v23))
                          + (float)(v24 * v24);
  if ( *(float *)g4_m128_ptr<int32_t>(v30) > 0.0 )
  {
    v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
    v32 = ((_mm_cvtsi128_si32(v30) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v30) >> 1));
    v33 = (float)(*(float *)&v32 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v30)) * *(float *)&v32)
                * (float)(*(float *)&v32 * *(float *)&v32));
    v34 = (float)((float)((float)(*(float *)&v32 * 1.5)
                        - (float)((float)(v31 * *(float *)&v32) * (float)(*(float *)&v32 * *(float *)&v32)))
                * 1.5)
        - (float)((float)(v31 * v33) * (float)(v33 * v33));
    v29 = (float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34));
  }
  v115 = 0.0;
  v116 = 1;
  v92 = 0.0;
  v91 = 0.0;
  *(float *)&v114 = *(float *)g4_m128_ptr<int32_t>(v22) * v29;
  v90 = 0.0;
  v89 = 0;
  v99 = 0.0;
  v113 = v23 * v29;
  v93 = 0;
  v112 = v24 * v29;
  v100 = v29 * *(float *)&v110;
g4_m128_raw(v117) = 0;
  v107 = 10000000.0;
  while ( (float)(v107 * v107) > v95 )
  {
    G4_VCALL<void>(a2, 8, a3, v111, a4, a5 + 32, &v117, &v118, v119);
    v35 = v115;
    v36 =g4_m128_lane<float>(v117, 0) - v119[0];
    v37 =g4_m128_lane<float>(v117, 1) - v119[1];
    v38 =g4_m128_lane<float>(v117, 2) - v119[2];
    v17 = LODWORD(v115) == 0;
g4_m128_lane<float>(v117, 0) =g4_m128_lane<float>(v117, 0) - v119[0];
g4_m128_lane<float>(v117, 1) =g4_m128_lane<float>(v117, 1) - v119[1];
g4_m128_lane<float>(v117, 2) =g4_m128_lane<float>(v117, 2) - v119[2];
    a1[LODWORD(v115) + 2] = v117;
    if ( v17 )
    {
      v108 =g4_m128_lane<uint32_t>(a1[10], 0);
      v109 =g4_m128_lane<float>(a1[10], 1);
      v110 =g4_m128_lane<int32_t>(a1[10], 2);
      v39 = *(float *)&v110;
g4_m128_raw(v40) = v108;
    }
    else
    {
g4_m128_raw(v72) =g4_m128_lane<uint32_t>(a1[10], 0);
      v73 = byte_1D373E7[LODWORD(v35)] & 2;
      v74 =g4_m128_lane<float>(a1[10], 1);
      v110 = (int)(uintptr_t)(&a1[(byte_1D373E7[LODWORD(v35)] & 1) + 2]);
      v108 =g4_m128_lane<uint32_t>(v72, 0);
      m128_f32 =g4_m128_ptr<float>(a1[v73 + 2]);
      v76 = (float)(v36 * *(float *)g4_m128_ptr<int32_t>(v72)) + (float)(v37 * v74);
      v77 =g4_m128_lane<float>(a1[10], 2);
      v78 = (float)(*m128_f32 * *(float *)g4_m128_ptr<int32_t>(v72)) + (float)(m128_f32[1] * v74);
      v79 = m128_f32[2] * v77;
      v80 = *(float *)&v110;
      v81 = v76 + (float)(v38 * v77);
      v82 = v78 + v79;
      v83 =g4_m128_lane<float>(a1[2], 2) * v77;
      v84 = v81 + v106;
      v85 =g4_m128_lane<float>(a1[2], 1) * v74;
      *(float *)&v110 = (float)(*(float *)(v110 + 4) * v74) + (float)(*(float *)v110 * *(float *)g4_m128_ptr<int32_t>(v72));
      v86 = (float)((float)(g4_m128_lane<float>(a1[2], 0) * *(float *)g4_m128_ptr<int32_t>(v72)) + v85) + v83;
      v39 = v77;
      v50 = v84 < v86;
      v17 = v84 == v86;
      v40 = v72;
      v110 = 2 * (v84 > (float)((float)(*(float *)(LODWORD(v80) + 8) * v77) + *(float *)&v110));
      v110 |= !v50 && !v17;
      v87 = 4 * (v84 > v82);
      v109 = v74;
      if ( v84 > 0.0 )
        v87 = 4 * (v84 > v82) + 8;
      LOBYTE(v110) = v87 | v110;
      v110 &= 7u;
      v17 = v110 == 7;
      *(float *)&v110 = v77;
      if ( !v17 )
        --LODWORD(v35);
    }
    LODWORD(v115) = LODWORD(v35) + 1;
    v41 = (float)((float)((float)(v103 - (float)((float)(*(float *)&v114 * v94) +g4_m128_lane<float>(v117, 0)))
                        * *(float *)g4_m128_ptr<int32_t>(v40))
                + (float)((float)(*(float *)&v105 - (float)((float)(v113 * v94) +g4_m128_lane<float>(v117, 1))) * v109))
        + (float)((float)(*(float *)&v104 - (float)((float)(v112 * v94) +g4_m128_lane<float>(v117, 2))) * v39);
    if ( v41 > 0.0 )
    {
g4_m128_raw(v42) = *(unsigned int *)(a5 + 16);
      v45 = v40;
g4_m128_raw(v43) = *(unsigned int *)(a5 + 20);
g4_m128_raw(v44) = *(unsigned int *)(a5 + 24);
      *(float *)g4_m128_ptr<int32_t>(v45) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) *g4_m128_lane<float>(v42, 0))
                                      + (float)(v109 *g4_m128_lane<float>(v43, 0)))
                              + (float)(v39 *g4_m128_lane<float>(v44, 0));
      if ( *(float *)g4_m128_ptr<int32_t>(v45) >= 0.0 )
        return 0;
      v46 = _mm_cvtsi128_si32(v45);
      v47 = (2130706432 - v46) & ((v46 ^ (v46 + 2139095040)) >> 31);
g4_m128_raw(v48) = LODWORD(v99);
      v49 = (float)((float)(2.0
                          - (float)(*(float *)g4_m128_ptr<int32_t>(v45)
                                  * (float)((float)(2.0
                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v45)
                                                          * (float)((float)(2.0
                                                                          - (float)(*(float *)g4_m128_ptr<int32_t>(v45)
                                                                                  * *(float *)&v47))
                                                                  * *(float *)&v47)))
                                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)&v47))
                                                  * *(float *)&v47))))
                  * (float)((float)(2.0
                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v45)
                                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)&v47))
                                                  * *(float *)&v47)))
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)&v47)) * *(float *)&v47)))
          * v41;
      v50 = (float)(v99 - v49) < 1.0;
      v99 = v99 - v49;
g4_m128_lane<float>(v48, 0) = v99;
      v51 = v48;
      if ( !v50 )
        return 0;
g4_m128_lane<float>(v44, 0) = (float)(g4_m128_lane<float>(v44, 0) * v99) + *(float *)(a5 + 8);
g4_m128_lane<float>(v51, 0) = (float)(v99 * *(float *)(a5 + 28)) + *(float *)(a5 + 12);
g4_m128_lane<float>(v42, 0) = (float)(g4_m128_lane<float>(v42, 0) * v99) + *(float *)a5;
g4_m128_lane<float>(v43, 0) = (float)(g4_m128_lane<float>(v43, 0) * v99) + *(float *)(a5 + 4);
      v91 = v112;
      v89 = v114;
      _mm_storel_ps(&v102, _mm_unpacklo_ps(v44, v51));
      v103 =g4_m128_lane<float>(v42, 0);
      v105 =g4_m128_lane<uint32_t>(v43, 0);
      v104 =g4_m128_lane<uint32_t>(v44, 0);
      v92 = v100;
      v90 = v113;
      _mm_storel_ps(&v101, _mm_unpacklo_ps(v42, v43));
    }
    v52 = (int)(uintptr_t)(v111);
    a1[6] = _mm_loadh_ps(&v102);
    if ( hkcdGskBase::reduceDimension(a1, (int *)&v115, &v116, v52, nullptr) != 0 )
      break;
    v53 = _mm_xor_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(a1[10]), 0), *(__m128 *)&dword_1C7C1B0);
    v54 = -g4_m128_lane<float>(a1[10], 1);
    v55 =g4_m128_lane<float>(a1[10], 3);
    v56 = -g4_m128_lane<float>(a1[10], 2);
    *v111 = _mm_xor_ps(a1[10], G4_BITCAST<__m128>(xmmword_1C7C2A0));
    v58 = v53;
    v57 = -v55;
g4_m128_lane<float>(v58, 0) = (float)((float)(g4_m128_lane<float>(v53, 0) *g4_m128_lane<float>(v53, 0)) + (float)(v54 * v54)) + (float)(v56 * v56);
    v59 = 0.0;
    if (g4_m128_lane<float>(v58, 0) > 0.0 )
    {
      v60 = 0.5 *g4_m128_lane<float>(v58, 0);
      v61 = ((_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v58))) + 2139095040) >> 31)
          & (1597463174 - (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v58))) >> 1));
      v62 = (float)(1.5 * *(float *)&v61)
          - (float)((float)(v60 * *(float *)&v61) * (float)(*(float *)&v61 * *(float *)&v61));
      v59 = (float)(1.5 * (float)((float)(1.5 * v62) - (float)((float)(v60 * v62) * (float)(v62 * v62))))
          - (float)((float)(v60 * (float)((float)(1.5 * v62) - (float)((float)(v60 * v62) * (float)(v62 * v62))))
                  * (float)((float)((float)(1.5 * v62) - (float)((float)(v60 * v62) * (float)(v62 * v62)))
                          * (float)((float)(1.5 * v62) - (float)((float)(v60 * v62) * (float)(v62 * v62)))));
    }
    *(float *)&v114 =g4_m128_lane<float>(v53, 0) * v59;
    v113 = v54 * v59;
    v100 = v57 * v59;
    v112 = v56 * v59;
    if ( SLODWORD(v115) > 0 )
    {
      v63 = v54;
      v64 = (float *)a1;
      v98 =g4_m128_lane<int32_t>(v53, 0);
      v65 = 0;
      v97 = v54;
      v96 = v56;
      v66 = v107;
      do
      {
        v67 =g4_m128_lane<float>(a1[6], 0) - v64[8];
        v68 =g4_m128_lane<float>(a1[6], 1) - v64[9];
        ++v65;
        v64 += 4;
        v66 = fminf(
                v66,
                fabs(
                  (float)((float)(v67 * *(float *)&v114) + (float)(v68 * v63))
                + (float)((float)(g4_m128_lane<float>(a1[6], 2) - v64[6]) * v112)));
      }
      while ( v65 != LODWORD(v115) );
      v107 = v66;
      v54 = v97;
      v56 = v96;
g4_m128_lane<int32_t>(v53, 0) = v98;
    }
    v106 = v106 + v106;
    if ( v106 > (float)((float)((float)((float)(g4_m128_lane<float>(v53, 0) - *(float *)&v108)
                                      * (float)(g4_m128_lane<float>(v53, 0) - *(float *)&v108))
                              + (float)((float)(v54 - v109) * (float)(v54 - v109)))
                      + (float)((float)(v56 - *(float *)&v110) * (float)(v56 - *(float *)&v110)))
      && ++v93 > 2 )
    {
      break;
    }
  }
  if ( *a7 <= v99 )
    return 0;
  v69 = ((_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v88))) + 2139095040) >> 31)
      & (1597463174 - (_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v88))) >> 1));
  v70 = (float)(*(float *)&v69 * 1.5)
      - (float)((float)((float)(0.5 * v88) * *(float *)&v69) * (float)(*(float *)&v69 * *(float *)&v69));
  v71 = (float)(v70 * 1.5) - (float)((float)((float)(0.5 * v88) * v70) * (float)(v70 * v70));
  if ( (float)((float)((float)(v71 * 1.5) - (float)((float)((float)(0.5 * v88) * v71) * (float)(v71 * v71)))
             * 0.00000011920929f) > (float)(1.0 - v99) )
    return 0;
  *a7 = v99;
  *a8 = v89;
  *((float *)a8 + 1) = v90;
  *((float *)a8 + 2) = v91;
  *((float *)a8 + 3) = v92;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkcdGskImpl_hkcdGskBase_RayCastShape_4e4547::linearCast_hkcdGskBase_RayCastShape_d2d3b5  (binary VA: 0x1aa2c20)
// Original: hkcdGskImpl<hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>>::linearCast<hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>>
// ----------------------------------------------------------------------------
int hkcdGskImpl_hkcdGskBase_RayCastShape_4e4547::linearCast_hkcdGskBase_RayCastShape_d2d3b5(__m128 *a1, int a2, int32_t **a3, int a4, float *a5, int a6, float *a7, float *a8)
{
  float v9; // xmm2_4
  int32_t *v10;
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  __m128i v14;
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  __m128i v18;
  float v19; // xmm6_4
  int v20;
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  int v24;
  float v25; // xmm5_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  bool v28;
  float v29; // xmm2_4
  __m128i v30;
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm6_4
  float v34; // xmm5_4
  float v35; // xmm4_4
  __m128i v36;
  int v37;
  int v38; // xmm2_4
  float v39; // xmm7_4
  __m128 v40;
  __m128 v41;
  __m128 v42;
  float v43; // xmm1_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  __m128 v47;
  float v48; // xmm4_4
  float v49; // xmm6_4
  int v50;
  int v51;
  float v52; // xmm4_4
  float v53; // xmm4_4
  float *v54;
  int v55;
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm1_4
  int v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm6_4
  float *m128_f32;
  float v64; // xmm5_4
  float v65; // xmm0_4
  float v66; // xmm4_4
  float v67; // xmm1_4
  float *v68;
  float v69; // xmm5_4
  float v70; // xmm2_4
  bool v71;
  uint8_t v72;
  bool v73; // cc
  typedef float _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef int _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int32_t _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef uint8_t _g4_t_v98;
  typedef float _g4_t_v99;
  typedef double _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef __m128 _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105[7];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v74)) > _g4_s0 ? (8u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v75)) > _g4_s1 ? (12u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v76)) > _g4_s2 ? (16u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v77)) > _g4_s3 ? (20u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v78)) > _g4_s4 ? (24u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v79)) > _g4_s5 ? (28u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v80)) > _g4_s6 ? (32u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v81)) > _g4_s7 ? (36u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v82)) > _g4_s8 ? (40u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v83)) > _g4_s9 ? (44u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v84)) > _g4_s10 ? (48u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v85)) > _g4_s11 ? (52u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v86)) > _g4_s12 ? (56u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v87)) > _g4_s13 ? (60u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v88)) > _g4_s14 ? (64u + sizeof(_g4_t_v88)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v89)) > _g4_s15 ? (68u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v90)) > _g4_s16 ? (72u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v91)) > _g4_s17 ? (76u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v92)) > _g4_s18 ? (80u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v93)) > _g4_s19 ? (84u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v94)) > _g4_s20 ? (88u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v95)) > _g4_s21 ? (92u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v96)) > _g4_s22 ? (96u + sizeof(_g4_t_v96)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v97)) > _g4_s23 ? (96u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v98)) > _g4_s24 ? (96u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v99)) > _g4_s25 ? (100u + sizeof(_g4_t_v99)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v100)) > _g4_s26 ? (104u + sizeof(_g4_t_v100)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v101)) > _g4_s27 ? (112u + sizeof(_g4_t_v101)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v102)) > _g4_s28 ? (128u + sizeof(_g4_t_v102)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v103)) > _g4_s29 ? (144u + sizeof(_g4_t_v103)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v104)) > _g4_s30 ? (160u + sizeof(_g4_t_v104)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v105)) > _g4_s31 ? (176u + sizeof(_g4_t_v105)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 12u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 16u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 20u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 24u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 28u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 32u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 40u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 48u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 64u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 72u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 76u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 80u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 84u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 88u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 96u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 96u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 100u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 112u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 128u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 144u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 160u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 176u);

  v88 = 1.4210855e-14f;
  v74 = (float)((float)(a5[5] * a5[5]) + (float)(a5[4] * a5[4])) + (float)(a5[6] * a5[6]);
  if ( v74 < 1.4210855e-14f )
    return 0;
  v101 = 0;
  v9 = a5[25];
  v102 = 0;
  v81 = v9;
  v10 = *a3;
  v91 = *a5;
g4_m128_raw(v14) = *(unsigned int *)a5;
  v93 = a5[1];
  v80 = a5[24];
  v11 = a5[2];
  v92 = v11;
  v12 = a5[3];
g4_m128_lane<int32_t>(a1[2], 0) = **a3;
  v13 = v12;
g4_m128_lane<int32_t>(a1[2], 1) = v10[1];
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) -g4_m128_lane<float>(a1[2], 0);
  v15 = v93 -g4_m128_lane<float>(a1[2], 1);
  v86 = v12;
g4_m128_lane<int32_t>(a1[2], 2) = v10[2];
  v16 = v11 -g4_m128_lane<float>(a1[2], 2);
  v18 = v14;
g4_m128_lane<int32_t>(a1[2], 3) = v10[3];
  v17 = v13 -g4_m128_lane<float>(a1[2], 3);
g4_m128_lane<int32_t>(a1[10], 0) =g4_m128_lane<int32_t>(v14, 0);
g4_m128_lane<float>(a1[10], 1) = v15;
g4_m128_lane<float>(a1[10], 2) = v16;
  v96 = v17;
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v15 * v15))
                          + (float)(v16 * v16);
g4_m128_lane<float>(a1[10], 3) = v17;
  if ( *(float *)g4_m128_ptr<int32_t>(v18) <= 0.0 )
  {
    v23 = 0.0;
  }
  else
  {
    v19 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
    v20 = ((_mm_cvtsi128_si32(v18) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v18) >> 1));
    v21 = (float)(*(float *)&v20 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * *(float *)&v20)
                * (float)(*(float *)&v20 * *(float *)&v20));
    v22 = (float)((float)((float)(*(float *)&v20 * 1.5)
                        - (float)((float)(v19 * *(float *)&v20) * (float)(*(float *)&v20 * *(float *)&v20)))
                * 1.5)
        - (float)((float)(v19 * v21) * (float)(v21 * v21));
    v23 = (float)(1.5 * v22) - (float)((float)(v19 * v22) * (float)(v22 * v22));
  }
  v102 = 1;
  v78 = 0.0;
  v77 = 0.0;
  v76 = 0.0;
  *(float *)&v100 = *(float *)g4_m128_ptr<int32_t>(v14) * v23;
  v75 = 0;
  v84 = 0.0;
  v79 = 0;
  v90 = v15 * v23;
  v99 = v16 * v23;
  v85 = v23 * v96;
g4_m128_raw(v103) = 0;
  v89 = 10000000.0;
  while ( (float)(v89 * v89) > v81 )
  {
    G4_VCALL<void>(a2, 8, a3, a1 + 10, a4, (unsigned int *)a5 + 8, &v103, &v104, v105);
    v24 = v101;
    v25 =g4_m128_lane<float>(v103, 0) - v105[0];
    v26 =g4_m128_lane<float>(v103, 1) - v105[1];
    v27 =g4_m128_lane<float>(v103, 2) - v105[2];
    v28 = v101 == 0;
g4_m128_lane<float>(v103, 0) =g4_m128_lane<float>(v103, 0) - v105[0];
g4_m128_lane<float>(v103, 1) =g4_m128_lane<float>(v103, 1) - v105[1];
g4_m128_lane<float>(v103, 2) =g4_m128_lane<float>(v103, 2) - v105[2];
    a1[v101 + 2] = v103;
    if ( v28 )
    {
      v94 =g4_m128_lane<float>(a1[10], 0);
      v95 =g4_m128_lane<float>(a1[10], 1);
      v97 =g4_m128_lane<float>(a1[10], 2);
      v29 = v95;
g4_m128_raw(v30) = LODWORD(v94);
      v31 = v97;
    }
    else
    {
      v62 =g4_m128_lane<float>(a1[10], 1);
      v94 =g4_m128_lane<float>(a1[10], 0);
      m128_f32 =g4_m128_ptr<float>(a1[(byte_1D373E7[v24] & 2) + 2]);
      v64 = (float)(v25 * v94) + (float)(v26 * v62);
      v65 =g4_m128_lane<float>(a1[10], 2);
      v66 = (float)(*m128_f32 * v94) + (float)(m128_f32[1] * v62);
      v67 = m128_f32[2] * v65;
      v68 =g4_m128_ptr<float>(a1[(byte_1D373E7[v24] & 1) + 2]);
      v69 = (float)(v64 + (float)(v27 * v65)) + v88;
      v70 = (float)((float)(g4_m128_lane<float>(a1[2], 0) * v94) + (float)(g4_m128_lane<float>(a1[2], 1) * v62))
          + (float)(g4_m128_lane<float>(a1[2], 2) * v65);
      v31 = v65;
      v71 = v69 < v70;
      v28 = v69 == v70;
      v29 = v62;
      v98 = (!v71 && !v28)
          | (2 * (v69 > (float)((float)((float)(v68[1] * v62) + (float)(*v68 * v94)) + (float)(v68[2] * v65))));
      v72 = 4 * (v69 > (float)(v66 + v67));
      v73 = v69 <= 0.0;
g4_m128_raw(v30) = LODWORD(v94);
      v95 = v62;
      if ( !v73 )
        v72 += 8;
      v28 = ((v72 | v98) & 7) == 7;
      v97 =g4_m128_lane<float>(a1[10], 2);
      if ( !v28 )
        --v24;
    }
    v101 = v24 + 1;
    v32 = (float)((float)((float)(v91 - (float)((float)(*(float *)&v100 * v80) +g4_m128_lane<float>(v103, 0)))
                        * *(float *)g4_m128_ptr<int32_t>(v30))
                + (float)((float)(v93 - (float)((float)(v90 * v80) +g4_m128_lane<float>(v103, 1))) * v29))
        + (float)((float)(v92 - (float)((float)(v99 * v80) +g4_m128_lane<float>(v103, 2))) * v31);
    if ( v32 > 0.0 )
    {
      v33 = a5[4];
      v36 = v30;
      v34 = a5[5];
      v35 = a5[6];
      *(float *)g4_m128_ptr<int32_t>(v36) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v36) * v33) + (float)(v29 * v34))
                              + (float)(v31 * v35);
      if ( *(float *)g4_m128_ptr<int32_t>(v36) >= 0.0 )
        return 0;
      v37 = _mm_cvtsi128_si32(v36);
      v38 = (2130706432 - v37) & ((v37 ^ (v37 + 2139095040)) >> 31);
      v39 = v84
          - (float)((float)((float)(2.0
                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v36)
                                          * (float)((float)(2.0
                                                          - (float)(*(float *)g4_m128_ptr<int32_t>(v36)
                                                                  * (float)((float)(2.0
                                                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v36)
                                                                                          * *(float *)&v38))
                                                                          * *(float *)&v38)))
                                                  * (float)((float)(2.0
                                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v38))
                                                          * *(float *)&v38))))
                          * (float)((float)(2.0
                                          - (float)(*(float *)g4_m128_ptr<int32_t>(v36)
                                                  * (float)((float)(2.0
                                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v38))
                                                          * *(float *)&v38)))
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v38))
                                          * *(float *)&v38)))
                  * v32);
      v84 = v39;
      if ( v39 >= 1.0 )
        return 0;
      v93 = (float)(v34 * v39) + a5[1];
      v91 = (float)(v33 * v39) + *a5;
      v77 = v99;
      v92 = (float)(v35 * v39) + a5[2];
      v86 = (float)(v39 * a5[7]) + a5[3];
      v78 = v85;
      v76 = v90;
      v75 = LODWORD(v100);
    }
g4_m128_lane<uint64_t>(v40, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v91)), g4_m128_from<__m128>(LODWORD(v93))), 0);
    v41 = _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v92)), g4_m128_from<__m128>(LODWORD(v86)));
    _mm_storel_ps(&v100, v41);
g4_m128_lane<uint64_t>(v40, 1) =g4_m128_lane<uint64_t>(v41, 0);
    a1[6] = v40;
    if ( hkcdGskBase::reduceDimension(a1, &v101, &v102, (int)(uintptr_t)(&a1[10]), nullptr) != 0 )
      break;
    v42 = _mm_xor_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(a1[10]), 0), *(__m128 *)&dword_1C7C1B0);
    v43 = -g4_m128_lane<float>(a1[10], 1);
    v44 =g4_m128_lane<float>(a1[10], 3);
    v45 = -g4_m128_lane<float>(a1[10], 2);
    a1[10] = _mm_xor_ps(a1[10], G4_BITCAST<__m128>(xmmword_1C7C2A0));
    v47 = v42;
    v46 = -v44;
g4_m128_lane<float>(v47, 0) = (float)((float)(g4_m128_lane<float>(v42, 0) *g4_m128_lane<float>(v42, 0)) + (float)(v43 * v43)) + (float)(v45 * v45);
    v48 = 0.0;
    if (g4_m128_lane<float>(v47, 0) > 0.0 )
    {
      v49 = 0.5 *g4_m128_lane<float>(v47, 0);
      v50 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v47))) >> 1;
      v51 = (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v47))) + 2139095040) >> 31;
      v52 = (float)(1.5 * COERCE_FLOAT(v51 & (1597463174 - v50)))
          - (float)((float)((float)(0.5 *g4_m128_lane<float>(v47, 0)) * COERCE_FLOAT(v51 & (1597463174 - v50)))
                  * (float)(COERCE_FLOAT(v51 & (1597463174 - v50)) * COERCE_FLOAT(v51 & (1597463174 - v50))));
      v48 = (float)(1.5 * (float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52))))
          - (float)((float)(v49 * (float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52))))
                  * (float)((float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52)))
                          * (float)((float)(1.5 * v52) - (float)((float)(v49 * v52) * (float)(v52 * v52)))));
    }
    v90 = v43 * v48;
    *(float *)&v100 =g4_m128_lane<float>(v42, 0) * v48;
    v85 = v46 * v48;
    v99 = v45 * v48;
    if ( v101 > 0 )
    {
      v53 = v43 * v48;
      v87 =g4_m128_lane<int32_t>(v42, 0);
      v54 = (float *)a1;
      v55 = 0;
      v83 = v43;
      v82 = v45;
      v56 = v89;
      do
      {
        v57 =g4_m128_lane<float>(a1[6], 0) - v54[8];
        v58 =g4_m128_lane<float>(a1[6], 1) - v54[9];
        ++v55;
        v54 += 4;
        v56 = fminf(
                v56,
                fabs(
                  (float)((float)(v57 * *(float *)&v100) + (float)(v58 * v53))
                + (float)((float)(g4_m128_lane<float>(a1[6], 2) - v54[6]) * v99)));
      }
      while ( v55 != v101 );
      v89 = v56;
      v43 = v83;
      v45 = v82;
g4_m128_lane<int32_t>(v42, 0) = v87;
    }
    v88 = v88 + v88;
    if ( v88 > (float)((float)((float)((float)(g4_m128_lane<float>(v42, 0) - v94) * (float)(g4_m128_lane<float>(v42, 0) - v94))
                             + (float)((float)(v43 - v95) * (float)(v43 - v95)))
                     + (float)((float)(v45 - v97) * (float)(v45 - v97)))
      && ++v79 > 2 )
    {
      break;
    }
  }
  if ( *a7 <= v84 )
    return 0;
  v59 = ((_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v74))) + 2139095040) >> 31)
      & (1597463174 - (_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v74))) >> 1));
  v60 = (float)(*(float *)&v59 * 1.5)
      - (float)((float)((float)(0.5 * v74) * *(float *)&v59) * (float)(*(float *)&v59 * *(float *)&v59));
  v61 = (float)(v60 * 1.5) - (float)((float)((float)(0.5 * v74) * v60) * (float)(v60 * v60));
  if ( (float)((float)((float)(v61 * 1.5) - (float)((float)((float)(0.5 * v74) * v61) * (float)(v61 * v61)))
             * 0.00000011920929f) > (float)(1.0 - v84) )
    return 0;
  *a7 = v84;
  *(uint32_t *)a8 = v75;
  a8[1] = v76;
  a8[2] = v77;
  a8[3] = v78;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1AAFC30  (binary VA: 0x1aafc30)
// Original: sub_1AAFC30
// ----------------------------------------------------------------------------
uint32_t * sub_1AAFC30()
{
  hkcdRayCastTriangle::g_defaultTolerance = 961656599;
  hkcdRayCastTriangle::g_tolerance[0] = 961656599;
  return (uint32_t *)(hkcdRayCastTriangle::g_tolerance);
}

// ----------------------------------------------------------------------------
// Function: sub_1AAFC60  (binary VA: 0x1aafc60)
// Original: sub_1AAFC60
// ----------------------------------------------------------------------------
int sub_1AAFC60(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1AAFC80  (binary VA: 0x1aafc80)
// Original: sub_1AAFC80
// ----------------------------------------------------------------------------
int sub_1AAFC80(int a1, int a2)
{
  { hkMemoryMeshBody::Construct((uint32_t *)(uintptr_t)(a1)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_1AAFCD0  (binary VA: 0x1aafcd0)
// Original: sub_1AAFCD0
// ----------------------------------------------------------------------------
uint32_t * sub_1AAFCD0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkMemoryMeshBodyClass,
    "hkMemoryMeshBody",
    (const hkClass::Self *)&hkMeshBodyClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkMemoryMeshBody::Members,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkMemoryMeshBody::Construct((uint32_t *)&v1);
  hkMemoryMeshBodyTypeInfo[1] = (uint32_t)(uintptr_t)("!hkMemoryMeshBody");
  hkMemoryMeshBodyTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1AAFC80);
  hkMemoryMeshBodyTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1AAFC60);
  hkMemoryMeshBodyTypeInfo[0] = (uint32_t)(uintptr_t)("hkMemoryMeshBody");
  hkMemoryMeshBodyTypeInfo[4] = v1;
  hkMemoryMeshBodyTypeInfo[5] = 112;
  return hkMemoryMeshBodyTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1AB3E80  (binary VA: 0x1ab3e80)
// Original: sub_1AB3E80
// ----------------------------------------------------------------------------
int sub_1AB3E80(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: nullsub_877  (binary VA: 0x1ab3ea8)
// Original: nullsub_877
// ----------------------------------------------------------------------------
void nullsub_877()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1AB3EB0  (binary VA: 0x1ab3eb0)
// Original: sub_1AB3EB0
// ----------------------------------------------------------------------------
uint32_t * sub_1AB3EB0(uint32_t *a1)
{
  return hkIndexedTransformSet::Construct(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1AB3EE0  (binary VA: 0x1ab3ee0)
// Original: sub_1AB3EE0
// ----------------------------------------------------------------------------
int sub_1AB3EE0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               2 * (result & 0x3FFFFFFF));
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1AB3F80  (binary VA: 0x1ab3f80)
// Original: sub_1AB3F80
// ----------------------------------------------------------------------------
uint32_t * sub_1AB3F80()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkIndexedTransformSetClass,
    "hkIndexedTransformSet",
    (const hkClass::Self *)&hkReferencedObjectClass,
    72,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20B18C0,
    6,
    nullptr,
    nullptr,
    0,
    2u);
  hkIndexedTransformSet::Construct(&v1);
  *(uintptr_t *)(unk_21429B4) = (uintptr_t)("!hkIndexedTransformSet");
  *(uintptr_t *)(unk_21429B8) = (uintptr_t)(sub_1AB3EB0);
  *(uintptr_t *)(unk_21429BC) = (uintptr_t)(sub_1AB3E80);
  hkIndexedTransformSetTypeInfo = (uint32_t)(uintptr_t)("hkIndexedTransformSet");
  *(uintptr_t *)(unk_21429C0) = (uintptr_t)(v1);
  *(uintptr_t *)(unk_21429C4) = (uintptr_t)(72);
  hkClass::Construct(
    (hkClass::Self *)&hkMeshBoneIndexMappingClass,
    "hkMeshBoneIndexMapping",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2046F24,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkMeshBoneIndexMappingTypeInfo[0] = (uint32_t)(uintptr_t)("hkMeshBoneIndexMapping");
  hkMeshBoneIndexMappingTypeInfo[1] = (uint32_t)(uintptr_t)("!hkMeshBoneIndexMapping");
  hkMeshBoneIndexMappingTypeInfo[4] = 0;
  hkMeshBoneIndexMappingTypeInfo[5] = 12;
  hkMeshBoneIndexMappingTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkMeshBoneIndexMappingTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1AB3EE0);
  return hkMeshBoneIndexMappingTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1AB4130  (binary VA: 0x1ab4130)
// Original: sub_1AB4130
// ----------------------------------------------------------------------------
void sub_1AB4130()
{
  hkClass::Construct(
    (hkClass::Self *)&hkMeshBodyClass,
    "hkMeshBody",
    (const hkClass::Self *)&hkReferencedObjectClass,
    8,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2046F3C,
    1,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: nullsub_878  (binary VA: 0x1ab41d8)
// Original: nullsub_878
// ----------------------------------------------------------------------------
void nullsub_878()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_879  (binary VA: 0x1ab41e8)
// Original: nullsub_879
// ----------------------------------------------------------------------------
void nullsub_879()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1AB41F0  (binary VA: 0x1ab41f0)
// Original: sub_1AB41F0
// ----------------------------------------------------------------------------
int sub_1AB41F0(uint32_t *a1)
{
  int result;

  result = a1[4];
  a1[3] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a1[2],
               2 * (result & 0x3FFFFFFF));
  a1[2] = 0;
  a1[4] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1AB42D0  (binary VA: 0x1ab42d0)
// Original: sub_1AB42D0
// ----------------------------------------------------------------------------
void sub_1AB42D0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkMeshMaterialClass,
    "hkMeshMaterial",
    (const hkClass::Self *)&hkReferencedObjectClass,
    8,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  dword_20D0568 = (int)hkMeshSectionPrimitiveTypeEnum[0];
  dword_20D05E0 = (int)hkMeshSectionMeshSectionIndexTypeEnum;
  hkClass::Construct(
    (hkClass::Self *)&hkMeshSectionClass,
    "hkMeshSection",
    nullptr,
    44,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2046FA0,
    2,
    (const hkClassMember::Self *)&off_20D0560,
    11,
    nullptr,
    nullptr,
    0,
    2u);
  hkMeshSectionTypeInfo = (uint32_t)(uintptr_t)("hkMeshSection");
  *(uintptr_t *)(unk_2142AF4) = (uintptr_t)("!hkMeshSection");
  *(uintptr_t *)(unk_2142AF8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142B00) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142B04) = (uintptr_t)(44);
  *(uintptr_t *)(unk_2142AFC) = (uintptr_t)((&g4_noop_ret0));
  dword_20D04D0 = (int)hkMeshSectionPrimitiveTypeEnum[0];
  dword_20D0500 = (int)hkMeshSectionMeshSectionIndexTypeEnum;
  hkClass::Construct(
    (hkClass::Self *)&hkMeshSectionCinfoClass,
    "hkMeshSectionCinfo",
    nullptr,
    44,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20D0480,
    9,
    nullptr,
    nullptr,
    0,
    2u);
  hkMeshSectionCinfoTypeInfo = (uint32_t)(uintptr_t)("hkMeshSectionCinfo");
  *(uintptr_t *)(unk_2142A94) = (uintptr_t)("!hkMeshSectionCinfo");
  *(uintptr_t *)(unk_2142AA0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142AA4) = (uintptr_t)(44);
  *(uintptr_t *)(unk_2142A98) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_2142A9C) = (uintptr_t)(sub_1AB41F0);
  hkClass::Construct(
    (hkClass::Self *)&hkMeshShapeClass,
    "hkMeshShape",
    (const hkClass::Self *)&hkReferencedObjectClass,
    8,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2046F60,
    1,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1AB4570  (binary VA: 0x1ab4570)
// Original: sub_1AB4570
// ----------------------------------------------------------------------------
bool sub_1AB4570(int a1, int a2)
{
  bool result;
  uint8_t v3;
  uint8_t v4;

  result = true;
  v3 = *(uint8_t *)(a1 + 2);
  v4 = *(uint8_t *)(a2 + 2);
  if ( v4 <= v3 )
  {
    result = false;
    if ( v3 == v4 )
      return *(uint8_t *)(a1 + 3) < *(uint8_t *)(a2 + 3);
  }
  return result;
}



// ============================================================================
// Address:   0x1ab4b10 (size: 326 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN14hkVertexFormat7ElementEPFbRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkVertexFormat::Element,bool (*)(hkVertexFormat::Element const&,hkVertexFormat::Element const&)>(hkVertexFormat::Element *,int,int,bool (*)(hkVertexFormat::Element const&,hkVertexFormat::Element const&))
// ============================================================================
hkVertexFormat::Element::Self *hkAlgorithm::quickSortRecursive_b39128(
        hkAlgorithm::Self *self,
        hkVertexFormat::Element::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkVertexFormat::Element::Self *result;
  int v5;
  int v6;
  hkVertexFormat::Element::Self *v7;
  char *v8;
  char v9;
  int v10;
  int v11;
  typedef bool (*_g4_t_v12)(const hkVertexFormat::Element::Self *, const hkVertexFormat::Element::Self *);
  typedef hkVertexFormat::Element::Self *_g4_t_v13;
  typedef hkVertexFormat::Element::Self *_g4_t_i;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_i)) > _g4_s2 ? (16u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  for ( result = a2; ; a2 = result )
  {
    v5 = ((int)(uintptr_t)(result) + a3) >> 1;
    v6 = a3;
    v17[0] = *((uint32_t *)self + 2 * v5);
    v17[1] = *((uint32_t *)self + 2 * v5 + 1);
    v15 = (int *)((char *)self + 8 * (uint32_t)(uintptr_t)(a2));
    v7 = (hkVertexFormat::Element::Self *)((char *)a2 + 1);
    for ( i = (hkVertexFormat::Element::Self *)((char *)a2 + 1); ; v7 = i )
    {
      v13 = (hkVertexFormat::Element::Self *)((char *)v7 - 1);
      if ( (uint8_t)a4(v15, (char *)v17) == 0 )
      {
        v8 = (char *)self + 8 * v6;
        while ( 1 )
        {
          v16 = (int *)v8;
          v9 = a4((int *)(v17), v8);
          v8 -= 8;
          if ( v9 == 0 )
            break;
          --v6;
        }
        if ( (int)(uintptr_t)(v13) > v6 )
          break;
        if ( v13 != (hkVertexFormat::Element::Self *)v6 )
        {
          v10 = *v16;
          *v16 = *v15;
          v11 = v16[1];
          v17[4] = v10;
          v17[5] = v11;
          v16[1] = v15[1];
          *v15 = v10;
          v15[1] = v11;
        }
        --v6;
        v13 = i;
        if ( v6 < (int)(uintptr_t)(i) )
          break;
      }
      i = (hkVertexFormat::Element::Self *)((char *)i + 1);
      v15 += 2;
    }
    if ( (int)(uintptr_t)(a2) < v6 )
      break;
    result = v13;
    if ( a3 <= (int)(uintptr_t)(v13) )
      return result;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_b39128(
    self,
    a2,
    v6,
    a4,
    v12);
  result = v13;
  if ( a3 > (int)(uintptr_t)(v13) )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: InternalInertiaTensorComputer::compProjectionIntegrals  (binary VA: 0x1ab8450)
// Original: InternalInertiaTensorComputer::compProjectionIntegrals
// ----------------------------------------------------------------------------
InternalInertiaTensorComputer::Self * InternalInertiaTensorComputer::compProjectionIntegrals(InternalInertiaTensorComputer::Self *self, const hkVector4f::Self *a2)
{
  InternalInertiaTensorComputer::Self *result;
  uint32_t *v3;
  float *v4;
  int v5;
  float *v6;
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;

  result = self;
  v3 = (uint32_t *)(&unk_1D375B8);
  v4 = (float *)a2;
  v5 = *(uint32_t *)self;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  v34 = 0.0;
  v33 = 0.0;
  v32 = 0.0;
  v29 = 0.0;
  v28 = 0.0;
  v27 = 0.0;
  v26 = 0.0;
  v25 = 0.0;
  v24 = 0.0;
  v23 = 0.0;
  v22 = 0.0;
  v21 = 0.0;
  v6 = (float *)((char *)a2 + 16);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_2:
  if ( v5 == 1 )
  {
    v7 = v6[2];
    v8 = *v6;
    v9 = *v4;
    v10 = v4[2];
  }
  else
  {
    v7 = *v6;
    v8 = v6[1];
    v9 = v4[1];
    v10 = *v4;
  }
  while ( 1 )
  {
    ++v3;
    v4 += 4;
    v19 = v10 * (float)(v10 * v10);
    v18 = (float)(v9 * v9) * v9;
    v11 = (float)(2.0 * v7) * v10;
    v30 = (float)((float)(3.0 * (float)(v7 * v7)) + v11) + (float)(v10 * v10);
    v20 = (float)(v11 + (float)(v7 * v7)) + (float)(3.0 * (float)(v10 * v10));
    v21 = (float)((float)(v8 - v9) * (float)(v7 + v10)) + v21;
    *((float *)self + 1) = v21;
    v12 = (float)((float)(v7 + v10) * v7) + (float)(v10 * v10);
    v13 = v19 + (float)(v12 * v7);
    v22 = (float)(v12 * (float)(v8 - v9)) + v22;
    *((float *)self + 8) = v22;
    v23 = (float)((float)(v8 - v9) * v13) + v23;
    *((float *)self + 9) = v23;
    v24 = (float)((float)((float)(v13 * v7) + (float)((float)(v10 * v10) * (float)(v10 * v10))) * (float)(v8 - v9))
        + v24;
    *((float *)self + 10) = v24;
    v25 = v25 + (float)(2.0 * (float)(v8 - v9));
    *((float *)self + 11) = v25;
    v14 = v18 + (float)((float)((float)((float)(v8 + v9) * v8) + (float)(v9 * v9)) * v8);
    v26 = (float)((float)((float)((float)(v8 + v9) * v8) + (float)(v9 * v9)) * (float)(v7 - v10)) + v26;
    *((float *)self + 12) = v26;
    v27 = (float)((float)(v7 - v10) * v14) + v27;
    *((float *)self + 13) = v27;
    v28 = (float)((float)((float)(v14 * v8) + (float)((float)(v9 * v9) * (float)(v9 * v9))) * (float)(v7 - v10)) + v28;
    *((float *)self + 14) = v28;
    v29 = v29 + (float)(2.0 * (float)(v7 - v10));
    *((float *)self + 15) = v29;
    v15 = v30 * v10;
    v31 = (float)((float)((float)(v30 * v8) + (float)(v20 * v9)) * (float)(v8 - v9)) + v32;
    *((float *)self + 2) = v31;
    v16 = (float)((float)((float)((float)((float)(v19 * 4.0) + (float)(v20 * v7)) * v9)
                        + (float)((float)((float)(4.0 * (float)((float)(v7 * v7) * v7)) + v15) * v8))
                * (float)(v8 - v9))
        + v33;
    *((float *)self + 3) = v16;
    v17 = (float)((float)((float)((float)((float)((float)((float)((float)(2.0 * (float)(v8 * v8)) * v9)
                                                        + (float)((float)(v8 * v8) * v8))
                                                + (float)((float)(3.0 * v8) * (float)(v9 * v9)))
                                        + (float)(4.0 * v18))
                                * v10)
                        + (float)((float)((float)((float)((float)((float)((float)(v8 * v8) * 3.0) * v9)
                                                        + (float)((float)((float)(v8 * v8) * v8) * 4.0))
                                                + (float)((float)(v8 * 2.0) * (float)(v9 * v9)))
                                        + v18)
                                * v7))
                * (float)(v7 - v10))
        + v34;
    *((float *)self + 4) = v17;
    if ( v3 == (uint32_t *)&unk_1D375C4 )
      break;
    v33 = (float)((float)((float)((float)((float)(v19 * 4.0) + (float)(v20 * v7)) * v9)
                        + (float)((float)((float)(4.0 * (float)((float)(v7 * v7) * v7)) + v15) * v8))
                * (float)(v8 - v9))
        + v33;
    v34 = (float)((float)((float)((float)((float)((float)((float)((float)(2.0 * (float)(v8 * v8)) * v9)
                                                        + (float)((float)(v8 * v8) * v8))
                                                + (float)((float)(3.0 * v8) * (float)(v9 * v9)))
                                        + (float)(4.0 * v18))
                                * v10)
                        + (float)((float)((float)((float)((float)((float)((float)(v8 * v8) * 3.0) * v9)
                                                        + (float)((float)((float)(v8 * v8) * v8) * 4.0))
                                                + (float)((float)(v8 * 2.0) * (float)(v9 * v9)))
                                        + v18)
                                * v7))
                * (float)(v7 - v10))
        + v34;
    v32 = v31;
    v6 = (float *)((char *)a2 + 16 * *v3);
    if ( v5 != 0 )
      goto LABEL_2;
LABEL_6:
    v7 = v6[1];
    v8 = v6[2];
    v9 = v4[2];
    v10 = v4[1];
  }
  *((float *)self + 1) = v21 * 0.5;
  *((float *)self + 10) = v24 * 0.05f;
  *((float *)self + 8) = v22 * 0.16666667f;
  *((float *)self + 12) = v26 * -0.16666667f;
  *((float *)self + 9) = v23 * 0.083333336f;
  *((float *)self + 3) = v16 * 0.016666668f;
  *((float *)self + 11) = v25 + v25;
  *((float *)self + 13) = v27 * -0.083333336f;
  *((float *)self + 14) = v28 * -0.05f;
  *((float *)self + 15) = v29 * -2.0;
  *((float *)self + 2) = v31 * 0.041666668f;
  *((float *)self + 4) = v17 * -0.016666668f;
  return result;
}

// ----------------------------------------------------------------------------
// Function: InternalInertiaTensorComputer::compFaceIntegrals  (binary VA: 0x1ab89c0)
// Original: InternalInertiaTensorComputer::compFaceIntegrals
// ----------------------------------------------------------------------------
int * InternalInertiaTensorComputer::compFaceIntegrals(InternalInertiaTensorComputer::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  float v3; // xmm2_4
  float v4; // xmm7_4
  float v5; // xmm5_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm1_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;

  InternalInertiaTensorComputer::compProjectionIntegrals(self, a2);
  v3 = *(float *)a3;
  v4 = *((float *)a3 + 1);
  v5 = *((float *)a3 + 2);
  v6 = -(float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * v4))
              + (float)(*((float *)a2 + 2) * v5));
  if ( *(uint32_t *)self != 0 )
  {
    if ( *(uint32_t *)self == 1 )
    {
      v4 = *((float *)a3 + 2);
      v5 = *(float *)a3;
      v3 = *((float *)a3 + 1);
    }
    else
    {
      v4 = *(float *)a3;
      v3 = *((float *)a3 + 2);
      v5 = *((float *)a3 + 1);
    }
  }
  v7 = 1.0 / v3;
  v30 = v5 * v5;
  v8 = *((float *)self + 14);
  v29 = v7 * v7;
  v9 = v7;
  v28 = (float)(v7 * v7) * v7;
  *((float *)self + 20) = *((float *)self + 8) * v7;
  v11 = *((float *)self + 10);
  v12 = *((float *)self + 12);
  *((float *)self + 21) = *((float *)self + 9) * v9;
  *((float *)self + 22) = v9 * v11;
  v27 = v11 * v4;
  *((float *)self + 23) = *((float *)self + 11) * v9;
  *((float *)self + 24) = v9 * v12;
  *((float *)self + 25) = *((float *)self + 13) * v9;
  v25 = v9;
  *((float *)self + 26) = v9 * v8;
  v26 = v8 * v5;
  *((float *)self + 27) = *((float *)self + 15) * v9;
  v13 = *((float *)self + 1) * v6;
  v14 = (float)(*((float *)self + 8) * v4) + (float)(v12 * v5);
  v23 = (float)(2.0 * v4) * v5;
  v24 = *((float *)self + 9) * v4;
  v15 = (float)((float)(v23 * *((float *)self + 2)) + (float)(v24 * v4))
      + (float)((float)(*((float *)self + 13) * v5) * v5);
  v16 = v5 * v5;
  *((float *)self + 28) = (float)-v29 * (float)(v14 + v13);
  *((float *)self + 29) = (float)((float)((float)((float)(2.0 * v14) + v13) * v6) + v15) * v28;
  v17 = (float)(3.0 * (float)(v4 * v4)) * v5;
  v18 = v5 * *((float *)self + 2);
  v19 = (float)((float)((float)((float)(v17 * *((float *)self + 3)) + (float)((float)(v4 * v4) * v27))
                      + (float)((float)((float)(3.0 * v4) * v16) * *((float *)self + 4)))
              + (float)(v26 * v16))
      + (float)(v15 * (float)(3.0 * v6));
  *((uint32_t *)self + 31) = 0x40000000;
  v20 = (float)((float)((float)(v14 * 3.0) + v13) * (float)(v6 * v6)) + v19;
  *((float *)self + 16) = v25 * *((float *)self + 3);
  v21 = *((float *)self + 13) * v6;
  *((float *)self + 30) = v20 * (float)-(float)(v29 * v29);
  v22 = *((float *)self + 8) * v6;
  *((float *)self + 17) = (float)((float)((float)(*((float *)self + 4) * v4) + v26) + v21) * (float)-v29;
  *((float *)self + 18) = (float)((float)((float)((float)(v23 * *((float *)self + 3)) + (float)(v27 * v4))
                                        + (float)(v30 * *((float *)self + 4)))
                                + (float)((float)(v22 + (float)((float)(v24 + v18) * 2.0)) * v6))
                        * v28;
  return (int *)(&dword_1C7C1B0);
}

// ----------------------------------------------------------------------------
// Function: InternalInertiaTensorComputer::compVolumeIntegrals  (binary VA: 0x1ab8d40)
// Original: InternalInertiaTensorComputer::compVolumeIntegrals
// ----------------------------------------------------------------------------
void * InternalInertiaTensorComputer::compVolumeIntegrals(__m128 *self, const hkGeometry::Self *a2, const hkVector4f::Self *a3)
{
  __m128 *v3;
  int v4;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128i v11;
  uint32_t *v12;
  float v13; // xmm1_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float *v16;
  float *v17;
  float *v18;
  float v19;
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  int v25;
  int32_t v26;
  int v27; // xmm1_4
  float v28; // xmm4_4
  int v29;
  __m128 v30;
  float v31; // xmm3_4
  __m128 v32;
  __m128 v33;
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  __m128 v37;
  float v38; // xmm5_4
  __m128 v39;
  __m128 v40;
  __m128 v41;
  __m128 v42;
  uint64_t v43; // xmm5_8
  __m128 v44;
  float v45;
  float v46; // xmm3_4
  float v47;
  float v48;
  float v49; // xmm1_4
  float v50; // xmm4_4
  float v51; // xmm7_4
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm2_4
  typedef int _g4_t_v56;
  typedef const hkVector4f::Self *_g4_t_v57;
  typedef const hkVector4f::Self *_g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int32_t _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v56)) > _g4_s0 ? (0u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v57)) > _g4_s1 ? (4u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v58)) > _g4_s2 ? (4u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v59)) > _g4_s3 ? (8u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v60)) > _g4_s4 ? (8u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v61)) > _g4_s5 ? (8u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v62)) > _g4_s6 ? (12u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v63)) > _g4_s7 ? (12u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v64)) > _g4_s8 ? (16u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v65)) > _g4_s9 ? (20u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v66)) > _g4_s10 ? (24u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v67)) > _g4_s11 ? (28u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v68)) > _g4_s12 ? (32u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v69)) > _g4_s13 ? (36u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v70)) > _g4_s14 ? (40u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v71)) > _g4_s15 ? (44u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v72)) > _g4_s16 ? (48u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v73)) > _g4_s17 ? (52u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v74)) > _g4_s18 ? (56u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v75)) > _g4_s19 ? (60u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v76)) > _g4_s20 ? (64u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v77)) > _g4_s21 ? (68u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v78)) > _g4_s22 ? (72u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v79)) > _g4_s23 ? (76u + sizeof(_g4_t_v79)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);

  v3 = self;
  v4 = *((uint32_t *)a2 + 6);
  v56 = v4;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  if ( v4 <= 0 )
  {
    v54 = 0.0;
    v53 = 0.0;
    v52 = 0.0;
    v51 = 0.0;
    v50 = 0.0;
    v60 = 0.0;
    v48 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(0LL)));
    v63 = 0.0;
    v49 = 0.0;
    v47 = v48;
    v45 = v48;
    v46 = 0.0;
  }
  else
  {
    v62 = 0;
    do
    {
g4_m128_raw(v11) = *(unsigned int *)a3;
      v12 = (uint32_t *)(*((uint32_t *)a2 + 5) + 16 * v62);
      v13 = *((float *)a3 + 1);
      v14 = *((float *)a3 + 2);
      v15 = *((float *)a3 + 3);
      v16 = (float *)(*((uint32_t *)a2 + 2) + 16 * *v12);
      v68 = *v16 + *(float *)g4_m128_ptr<int32_t>(v11);
      v69 = v13 + v16[1];
      v70 = v16[2] + v14;
      v71 = v16[3] + v15;
      v17 = (float *)(*((uint32_t *)a2 + 2) + 16 * v12[1]);
      v72 = *v17 + *(float *)g4_m128_ptr<int32_t>(v11);
      v73 = v13 + v17[1];
      v74 = v17[2] + v14;
      v75 = v17[3] + v15;
      v18 = (float *)(*((uint32_t *)a2 + 2) + 16 * v12[2]);
      *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) + *v18;
      v76 =g4_m128_lane<int32_t>(v11, 0);
      v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      v77 = *((float *)a3 + 1) + v18[1];
      v78 = v14 + v18[2];
      v20 = v15 + v18[3];
      v67 = 0.0;
      v79 = v20;
      v64 = (float)((float)(v73 - v69) * (float)(v78 - v70)) - (float)((float)(v74 - v70) * (float)(v77 - v69));
      v65 = (float)((float)(v74 - v70) * (float)(v19 - v68)) - (float)((float)(v78 - v70) * (float)(v72 - v68));
      v66 = (float)((float)(v72 - v68) * (float)(v77 - v69)) - (float)((float)(v73 - v69) * (float)(v19 - v68));
      v21 = (float)((float)(v64 * v64) + (float)(v65 * v65)) + (float)(v66 * v66);
      if ( v21 > 0.0 )
      {
        v22 = fsqrt(v21);
        if ( __builtin_isnan(v22) )
        {
          v58 = a3;
          v61 = sqrtf((float)((float)(v64 * v64) + (float)(v65 * v65)) + (float)(v66 * v66));
          a3 = v58;
          v22 = v61;
        }
        v65 = v65 * (float)(1.0 / v22);
        v64 = v64 * (float)(1.0 / v22);
        v23 = fabs(v64);
        v66 = v66 * (float)(1.0 / v22);
        v67 = (float)(1.0 / v22) * v67;
        v24 = fabs(v65);
        v25 = 1;
        if ( fabs(v65) < v23 )
        {
          v24 = v23;
          LOBYTE(v25) = 0;
        }
        v57 = a3;
        if ( fabs(v66) >= v24 )
          v25 = 2;
g4_m128_lane<int32_t>(*(self), 0) = v25;
        InternalInertiaTensorComputer::compFaceIntegrals(
          (InternalInertiaTensorComputer::Self *)self,
          (const hkVector4f::Self *)&v68,
          (const hkVector4f::Self *)&v64);
        v26 =g4_m128_lane<int32_t>(*(self), 0);
        v27 = *((uint32_t *)self + 28);
        v28 = *((float *)self + 21);
        v29 = 2 -g4_m128_lane<int32_t>(*(self), 0);
        *((uint32_t *)self + 21) = *((uint32_t *)self + 24);
g4_m128_raw(v30) = *((unsigned int *)self + 22);
        a3 = v57;
        *((uint32_t *)self + 22) = v27;
        v31 = *((float *)self + 29);
g4_m128_raw(v32) = *((unsigned int *)self + 26);
        *((float *)self + 24) = v28;
        *((uint32_t *)self + 28) =g4_m128_lane<int32_t>(v30, 0);
        *((float *)self + 26) = v31;
        *((uint32_t *)self + 29) =g4_m128_lane<int32_t>(v32, 0);
g4_m128_raw(v33) = LODWORD(v64);
        *((float *)self + 32) = (float)(*((float *)self + v29 + 20) * v64) + *((float *)self + 32);
        if ( v26 != 0 )
        {
          if ( v26 == 1 )
          {
            v35 = *((float *)self + 27);
            v34 = v31;
            v31 = v28;
            v28 = *((float *)self + 25);
          }
          else
          {
            v34 = *((float *)self + 25);
            v35 = *((float *)self + 27);
          }
        }
        else
        {
          v35 = *((float *)self + 27);
          v34 = v28;
          v28 = v31;
          v31 = *((float *)self + 25);
        }
        v59 = v67;
        v36 = (float)(v35 * v67) + *((float *)self + 39);
        *((float *)self + 36) = (float)(v28 *g4_m128_lane<float>(v33, 0)) + *((float *)self + 36);
g4_m128_raw(v37) = LODWORD(v65);
        v38 = v34 * v65;
        *((float *)self + 39) = v36;
        *((float *)self + 37) = v38 + *((float *)self + 37);
g4_m128_raw(v39) = LODWORD(v66);
        *((float *)self + 38) = (float)(v31 * v66) + *((float *)self + 38);
        if ( v26 != 0 )
        {
          if ( v26 == 1 )
          {
g4_m128_raw(v41) = *((unsigned int *)self + 31);
            v40 = v30;
            v30 = v32;
g4_m128_raw(v32) = *((unsigned int *)self + 30);
          }
          else
          {
g4_m128_raw(v40) = *((unsigned int *)self + 30);
g4_m128_raw(v41) = *((unsigned int *)self + 31);
          }
        }
        else
        {
g4_m128_raw(v41) = *((unsigned int *)self + 31);
          v40 = v32;
          v32 = v30;
g4_m128_raw(v30) = *((unsigned int *)self + 30);
        }
g4_m128_lane<uint64_t>(v42, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v33, v32), 0);
        v43 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v39, g4_m128_from<__m128>(LODWORD(v59))), 0);
g4_m128_lane<uint64_t>(v44, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v30, v37), 0);
g4_m128_lane<uint64_t>(v42, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v40, v41), 0);
g4_m128_lane<uint64_t>(v44, 1) = v43;
        *(self + 10) = _mm_add_ps(_mm_mul_ps(v42, v44), *(self + 10));
        if ( v26 != 0 )
        {
          if ( v26 == 1 )
          {
g4_m128_raw(v6) = *((unsigned int *)self + 17);
g4_m128_raw(v7) = *((unsigned int *)self + 18);
g4_m128_raw(v8) = *((unsigned int *)self + 16);
          }
          else
          {
g4_m128_raw(v6) = *((unsigned int *)self + 16);
g4_m128_raw(v7) = *((unsigned int *)self + 17);
g4_m128_raw(v8) = *((unsigned int *)self + 18);
          }
        }
        else
        {
g4_m128_raw(v6) = *((unsigned int *)self + 18);
g4_m128_raw(v7) = *((unsigned int *)self + 16);
g4_m128_raw(v8) = *((unsigned int *)self + 17);
        }
g4_m128_lane<uint64_t>(v9, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v33, v7), 0);
g4_m128_lane<uint64_t>(v10, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, v37), 0);
g4_m128_lane<uint64_t>(v9, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v8), 0);
g4_m128_lane<uint64_t>(v10, 1) = v43;
        *(self + 11) = _mm_add_ps(_mm_mul_ps(v9, v10), *(self + 11));
      }
      ++v62;
    }
    while ( v62 != v56 );
    v3 = self;
    v45 = *((float *)self + 37);
    v46 = *((float *)self + 36);
    v47 = *((float *)self + 38);
    v63 = *((float *)self + 41);
    v48 = *((float *)self + 40);
    v60 = *((float *)self + 43);
    v49 = *((float *)self + 39);
    v50 = *((float *)self + 42);
    v51 = *((float *)self + 44);
    v52 = *((float *)self + 45);
    v53 = *((float *)self + 46);
    v54 = *((float *)self + 47);
  }
g4_m128_lane<float>(v3[9], 0) = v46 * 0.5;
g4_m128_lane<float>(v3[9], 3) = v49 * 0.5;
g4_m128_lane<float>(v3[9], 1) = v45 * 0.5;
g4_m128_lane<float>(v3[10], 2) = v50 * 0.33333334f;
g4_m128_lane<float>(v3[9], 2) = v47 * 0.5;
g4_m128_lane<float>(v3[11], 0) = v51 * 0.5;
g4_m128_lane<float>(v3[11], 1) = v52 * 0.5;
g4_m128_lane<float>(v3[11], 2) = v53 * 0.5;
g4_m128_lane<float>(v3[10], 0) = v48 * 0.33333334f;
g4_m128_lane<float>(v3[11], 3) = 0.5 * v54;
g4_m128_lane<float>(v3[10], 1) = v63 * 0.33333334f;
g4_m128_lane<float>(v3[10], 3) = 0.33333334f * v60;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: InternalInertiaTensorComputer::computeInertialTensorInternal  (binary VA: 0x1ab93c0)
// Original: InternalInertiaTensorComputer::computeInertialTensorInternal
// ----------------------------------------------------------------------------
int InternalInertiaTensorComputer::computeInertialTensorInternal(float *a1, float *a2, float *a3, float *a4, int a5)
{
  float v5; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15;
  float v16;
  float v17;
  float v18;

  v5 = 1.0 / a1[32];
  v7 = a1[36] * v5;
  *a4 = v7;
  v8 = a1[37] * v5;
  a4[1] = v8;
  v9 = a1[38] * v5;
  a4[2] = v9;
  a4[3] = v5 * a1[39];
  v17 = a1[40];
  v15 = a1[42];
  v10 = *a3;
  v16 = v8 * v8;
  v18 = a1[41];
  v11 = *a2;
  v12 = (float)(a1[44] * (float)-*a3) + (float)((float)(v7 * v8) * *a2);
  v13 = (float)(a1[45] * (float)-*a3) + (float)((float)(v8 * v9) * *a2);
  v14 = (float)(a1[46] * (float)-*a3) + (float)((float)(v9 * v7) * *a2);
  *(float *)a5 = (float)((float)(v18 + v15) * *a3) - (float)((float)(v16 + (float)(v9 * v9)) * *a2);
  *(float *)(a5 + 4) = v12;
  *(float *)(a5 + 16) = v12;
  *(float *)(a5 + 8) = v14;
  *(float *)(a5 + 32) = v14;
  *(uint32_t *)(a5 + 12) = 0;
  *(float *)(a5 + 24) = v13;
  *(uint32_t *)(a5 + 28) = 0;
  *(float *)(a5 + 36) = v13;
  *(uint32_t *)(a5 + 44) = 0;
  *(float *)(a5 + 20) = (float)((float)(v15 + v17) * v10) - (float)((float)((float)(v9 * v9) + (float)(v7 * v7)) * v11);
  *(float *)(a5 + 40) = (float)((float)(v18 + v17) * v10) - (float)((float)(v16 + (float)(v7 * v7)) * v11);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: InternalInertiaTensorComputer::compGeometryAabb  (binary VA: 0x1ab95a0)
// Original: InternalInertiaTensorComputer::compGeometryAabb
// ----------------------------------------------------------------------------
hkVector4f::Self * InternalInertiaTensorComputer::compGeometryAabb(InternalInertiaTensorComputer::Self *self, const float *a2, int a3, float *a4, hkVector4f::Self *a5)
{
  hkVector4f::Self *result;
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  const float *v16;
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24;
  float v25;

  *a4 = 0.0;
  a4[1] = 0.0;
  a4[2] = 0.0;
  a4[3] = 0.0;
  *(uint32_t *)a5 = 0;
  *((uint32_t *)a5 + 1) = 0;
  *((uint32_t *)a5 + 2) = 0;
  *((uint32_t *)a5 + 3) = 0;
  result = (hkVector4f::Self *)&g_vectorfConstants;
  v6 = 3.40282e38f;
  v7 = 3.40282e38f;
  v24 = 3.40282e38f;
  v8 = 3.40282e38f;
  v9 = -3.40282e38f;
  v10 = -3.40282e38f;
  v11 = -3.40282e38f;
  v12 = -3.40282e38f;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    v25 = -3.40282e38f;
    v13 = 3.40282e38f;
    v14 = 3.40282e38f;
    v16 = nullptr;
    v17 = 3.40282e38f;
    v18 = 3.40282e38f;
    do
    {
      v16 = (const float *)((char *)v16 + 1);
      v17 = fminf(*(float *)self, v17);
      v13 = fminf(*((float *)self + 1), v13);
      v14 = fminf(*((float *)self + 2), v14);
      v18 = fminf(*((float *)self + 3), v18);
      v9 = fmaxf(*(float *)self, v9);
      v10 = fmaxf(*((float *)self + 1), v10);
      v11 = fmaxf(*((float *)self + 2), v11);
      v19 = *((float *)self + 3);
      self = (InternalInertiaTensorComputer::Self *)((char *)self + a3);
      v12 = fmaxf(v19, v25);
      v25 = v12;
    }
    while ( v16 != a2 );
    v24 = v17;
    v20 = v18;
    v7 = v14;
    v8 = v20;
    v6 = v13;
  }
  else if ( a2 == nullptr )
  {
    return result;
  }
  v21 = v9 - v24;
  v22 = v10 - v6;
  v23 = v11 - v7;
  result = a5;
  *a4 = v24 + (float)(0.5 * v21);
  a4[1] = (float)(0.5 * v22) + v6;
  a4[2] = (float)(0.5 * v23) + v7;
  a4[3] = (float)(0.5 * (float)(v12 - v8)) + v8;
  *(float *)a5 = v21;
  *((float *)a5 + 1) = v22;
  *((float *)a5 + 2) = v23;
  *((float *)a5 + 3) = v12 - v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_880  (binary VA: 0x1abbd78)
// Original: nullsub_880
// ----------------------------------------------------------------------------
void nullsub_880()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_881  (binary VA: 0x1abbd88)
// Original: nullsub_881
// ----------------------------------------------------------------------------
void nullsub_881()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_882  (binary VA: 0x1abbd98)
// Original: nullsub_882
// ----------------------------------------------------------------------------
void nullsub_882()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABBE00  (binary VA: 0x1abbe00)
// Original: sub_1ABBE00
// ----------------------------------------------------------------------------
uint32_t * sub_1ABBE00()
{
  hkClass::Construct(
    (hkClass::Self *)&hkMeshVertexBufferClass,
    "hkMeshVertexBuffer",
    (const hkClass::Self *)&hkReferencedObjectClass,
    8,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2047240,
    2,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  dword_20D0688 = (int)hkVertexFormatComponentTypeEnum[0];
  dword_20D06B8 = (int)hkVertexFormatComponentUsageEnum[0];
  dword_20D06E8 = (int)hkVertexFormatHintFlagsEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkVertexFormatElementClass,
    "hkVertexFormatElement",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20D0680,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkVertexFormatElementTypeInfo = (uint32_t)(uintptr_t)("hkVertexFormatElement");
  *(uintptr_t *)(unk_2142BF4) = (uintptr_t)("!hkVertexFormat::Element");
  *(uintptr_t *)(unk_2142BF8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142C00) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2142C04) = (uintptr_t)(8);
  *(uintptr_t *)(unk_2142BFC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkVertexFormatClass,
    "hkVertexFormat",
    nullptr,
    260,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_20470A0,
    4,
    (const hkClassMember::Self *)&off_20B1960,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkVertexFormatTypeInfo[0] = (uint32_t)(uintptr_t)("hkVertexFormat");
  hkVertexFormatTypeInfo[1] = (uint32_t)(uintptr_t)("!hkVertexFormat");
  hkVertexFormatTypeInfo[4] = 0;
  hkVertexFormatTypeInfo[5] = 260;
  hkVertexFormatTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkVertexFormatTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkVertexFormatTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABC020  (binary VA: 0x1abc020)
// Original: sub_1ABC020
// ----------------------------------------------------------------------------
int sub_1ABC020(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int64_t v11;

  v1 = a1;
  v2 = a1[12];
  v11 = (unsigned int)(uintptr_t)(a1);
  result = v2 - 1;
  if ( v2 - 1 <= 0 )
    return result;
  do
  {
    ++HIDWORD(v11);
    if ( SHIDWORD(v11) >= v2 )
      goto LABEL_11;
    v4 = v1;
    v10 = HIDWORD(v11);
    do
    {
      while ( 1 )
      {
        v7 = v1[1];
        v8 = v4[4];
        v9 = *(uint32_t *)(v8 + 48);
        if ( *(uint32_t *)(v7 + 48) >= v9 )
        {
          if ( *(uint32_t *)(v7 + 48) == v9
            && (float)((float)((float)(*(float *)(v8 + 16) * *(float *)(v8 + 16))
                             + (float)(*(float *)(v8 + 20) * *(float *)(v8 + 20)))
                     + (float)(*(float *)(v8 + 24) * *(float *)(v8 + 24))) > (float)((float)((float)(*(float *)(v7 + 16) * *(float *)(v7 + 16))
                                                                                           + (float)(*(float *)(v7 + 20) * *(float *)(v7 + 20)))
                                                                                   + (float)(*(float *)(v7 + 24)
                                                                                           * *(float *)(v7 + 24))) )
          {
            break;
          }
          v5 = *v1;
          *v1 = v4[3];
          v1[1] = v4[4];
          v6 = v1[2];
          v1[2] = v4[5];
          v4[4] = v7;
          v4[3] = v5;
          v4[5] = v6;
          v2 = *(uint32_t *)(v11 + 48);
        }
        ++v10;
        v4 += 3;
        if ( v10 >= v2 )
          goto LABEL_10;
      }
      ++v10;
      v4 += 3;
    }
    while ( v10 < v2 );
LABEL_10:
    result = v2 - 1;
LABEL_11:
    v1 += 3;
  }
  while ( SHIDWORD(v11) < result );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABC130  (binary VA: 0x1abc130)
// Original: sub_1ABC130
// ----------------------------------------------------------------------------
int sub_1ABC130(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float *v14;
  int result;
  float v16; // xmm1_4
  float v17; // xmm0_4
  __m128i v18;
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  int v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  __m128i v27;
  int v28;
  __m128i v29;
  float v30; // xmm1_4
  float v31; // xmm1_4
  __m128i v32;
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm7_4
  float v40; // xmm0_4
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;

  v47 = a2[8];
  v4 = *a3 - a2[4];
  v5 = a3[1] - a2[5];
  v6 = a3[2] - a2[6];
  v45 = *a2;
  v43 = a2[1];
  v49 = a2[11];
  v7 = a2[2];
  v51 = v7;
  v8 = (float)((float)(*a2 * v4) + (float)(v43 * v5)) + (float)(v7 * v6);
  v9 = (float)((float)(v4 * v4) + (float)(v5 * v5)) + (float)(v6 * v6);
  v44 = v4 - (float)(*a2 * v8);
  v41 = v5 - (float)(v43 * v8);
  v53 = a2[3];
  v42 = v6 - (float)(v7 * v8);
  v10 = (float)(a3[3] - a2[7]) - (float)(v53 * v8);
  v48 = v8 * v8;
  v11 = a1[12];
  v12 = a1[13];
  v13 = a1[14];
  v14 = a2 + 10;
  if ( (float)((float)((float)(v44 * v11) + (float)(v41 * v12)) + (float)(v42 * v13)) > 0.0 )
    v14 = a2 + 9;
  v50 = *v14;
  if ( *v14 <= 0.0 )
  {
    *(float *)&result = COERCE_FLOAT(&g_vectorfConstants);
    if ( (float)((float)((float)(v47 * v47) + 1.0) * v48) >= v9 )
      goto LABEL_19;
LABEL_12:
    if ( v49 >= 1.0 )
      goto LABEL_9;
    goto LABEL_13;
  }
  *(float *)&result = COERCE_FLOAT(&g_vectorfConstants);
  v46 = (float)(v7 * v12) - (float)(v43 * v13);
  v16 = (float)(v13 * v45) - (float)(v7 * v11);
  v17 = (float)(v11 * v43) - (float)(v12 * v45);
g4_m128_raw(v18) = LODWORD(v46);
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v16 * v16))
                          + (float)(v17 * v17);
  if ( *(float *)g4_m128_ptr<int32_t>(v18) > 0.00000011920929f )
  {
    v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v18);
    v22 = ((_mm_cvtsi128_si32(v18) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v18) >> 1));
    v23 = (float)(1.5 * *(float *)&v22)
        - (float)((float)(*(float *)&v22 * *(float *)&v22) * (float)(v21 * *(float *)&v22));
    v24 = (float)(1.5 * v23) - (float)((float)(v23 * v23) * (float)(v21 * v23));
    v25 = (float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24));
    v16 = v16 * v25;
    v17 = v17 * v25;
    v46 = v46 * v25;
    v52 = v25 * 0.0;
    v20 = (float)((float)(v44 * v46) + (float)(v41 * v16)) + (float)(v42 * v17);
    v19 = v20 * v20;
    if ( (float)((float)(v47 * v47) * v48) >= (float)(v20 * v20) )
    {
      v44 = v44 - (float)(v46 * v20);
      v41 = v41 - (float)(v16 * v20);
      v10 = v10 - (float)(v20 * v52);
      v26 = v42 - (float)(v17 * v20);
      v20 = 0.0;
      v19 = 0.0;
      v42 = v26;
    }
  }
  else
  {
    v19 = 0.0;
    v52 = 0.0;
    v20 = 0.0;
  }
  if ( (float)((float)((float)(v47 + v50) * (float)(v47 + v50)) * v48) < (float)((float)(v9 - v19) - v48) )
    goto LABEL_12;
  if ( v20 != 0.0 )
  {
    v44 = v46 * v20;
    v41 = v16 * v20;
    v42 = v17 * v20;
    v10 = v52 * v20;
    if ( v49 >= 1.0 )
    {
LABEL_9:
      *a4 = a2[4] + v44;
      a4[1] = v41 + a2[5];
      a4[2] = v42 + a2[6];
      a4[3] = v10 + a2[7];
      return result;
    }
LABEL_13:
g4_m128_raw(v27) = LODWORD(v44);
    *(float *)g4_m128_ptr<int32_t>(v27) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v27)) + (float)(v41 * v41))
                            + (float)(v42 * v42);
    if ( *(float *)g4_m128_ptr<int32_t>(v27) >= 0.00000011920929f && *(float *)g4_m128_ptr<int32_t>(v27) > (float)(0.001f * v9) )
    {
      v28 = _mm_cvtsi128_si32(v27);
g4_m128_raw(v29) = 0x40000000u;
      result = (2130706432 - v28) & ((v28 ^ (v28 + 2139095040)) >> 31);
      v30 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v27)
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)&result))
                                  * *(float *)&result)))
          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)&result)) * *(float *)&result);
      *(float *)g4_m128_ptr<int32_t>(v29) = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * v30);
      v32 = v29;
      *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v29) * v30;
      v31 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v32) * v9;
      if ( *(float *)g4_m128_ptr<int32_t>(v32) > 0.0 )
      {
        result = ((_mm_cvtsi128_si32(v32) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v32) >> 1));
        v33 = (float)(*(float *)&result * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * *(float *)&result)
                    * (float)(*(float *)&result * *(float *)&result));
        v34 = (float)(v33 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * v33) * (float)(v33 * v33));
        v31 = (float)((float)(1.5 * v34)
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v32)) * v34) * (float)(v34 * v34)))
            * *(float *)g4_m128_ptr<int32_t>(v32);
      }
      v35 = (float)((float)(1.0 - v49) * v31) + v49;
      v36 = v44 * v35;
      v37 = v41 * v35;
      v38 = v42 * v35;
      v39 = v10 * v35;
      v40 = (float)((float)(v45 * (float)(v44 * v35)) + (float)(v43 * (float)(v41 * v35)))
          + (float)(v51 * (float)(v42 * v35));
      v41 = v37 - (float)(v43 * v40);
      v44 = v36 - (float)(v45 * v40);
      v10 = v39 - (float)(v40 * v53);
      v42 = v38 - (float)(v51 * v40);
    }
    goto LABEL_9;
  }
LABEL_19:
  *a4 = a2[4];
  a4[1] = a2[5];
  a4[2] = a2[6];
  result = *((int *)a2 + 7);
  a4[3] = *(float *)&result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABC7A0  (binary VA: 0x1abc7a0)
// Original: sub_1ABC7A0
// ----------------------------------------------------------------------------
int sub_1ABC7A0(int a1, int a2, int a3, float *a4, float *a5)
{
  float v7; // xmm5_4
  __m128i v8;
  __m128 v9;
  __m128 v10;
  __m128i v11;
  int v12;
  float *v13;
  float v15; // xmm5_4
  int v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm7_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm5_4
  __m128 v25;
  __m128 v26;
  float v27; // xmm0_4
  uint8_t v28;
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  __m128i v32;
  float v33; // xmm3_4
  g4_int128_t v34;
  float v35; // xmm5_4
  int v36;
  int v37;
  float v38; // xmm3_4
  int v39;
  float v40; // xmm4_4
  float v41; // xmm4_4
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  uint8_t v54;
  float v55;
  float v56;
  float v57;
  int v58;
  float v59;
  float v60;

  v7 = *(float *)(a3 + 8);
g4_m128_raw(v9) = *(unsigned int *)(a2 + 8);
  v53 = *(float *)(a2 + 4);
  v51 = *(float *)(a3 + 4);
g4_m128_raw(v8) = LODWORD(v53);
  v52 =g4_m128_lane<float>(v9, 0);
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)(v53 * v7) - (float)(*(float *)(a2 + 8) * v51);
  v47 = *(float *)a2;
  v48 = v7;
g4_m128_lane<float>(v9, 0) = (float)(g4_m128_lane<float>(v9, 0) * *(float *)a3) - (float)(v7 * *(float *)a2);
g4_m128_raw(v10) = LODWORD(v51);
  v50 = *(float *)a3;
g4_m128_lane<float>(v10, 0) = (float)(v51 * *(float *)a2) - (float)(v53 * *(float *)a3);
  v11 = v8;
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)g4_m128_ptr<int32_t>(v8))
                                  + (float)(g4_m128_lane<float>(v9, 0) *g4_m128_lane<float>(v9, 0)))
                          + (float)(g4_m128_lane<float>(v10, 0) *g4_m128_lane<float>(v10, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(v11) <= 0.00000011920929f )
  {
    v12 = *(uint32_t *)(a1 + 56);
LABEL_3:
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 60) + 36) + 16 * ((a2 - *(uint32_t *)(v12 + 72)) >> 6) + 12) = 2;
    v58 = a1;
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 60) + 36) + 16 * ((a3 - *(uint32_t *)(*(uint32_t *)(a1 + 56) + 72)) >> 6) + 12) = 2;
    v13 = *(float **)(a1 + 56);
    if ( *(uint32_t *)(a2 + 48) > *(uint32_t *)(a3 + 48) )
    {
      sub_1ABC130(v13, (float *)a3, a4, a5);
      return sub_1ABC130(*(float **)(v58 + 56), (float *)a2, a5, a5);
    }
    else
    {
      sub_1ABC130(v13, (float *)a2, a4, a5);
      return sub_1ABC130(*(float **)(v58 + 56), (float *)a3, a5, a5);
    }
  }
  v15 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v11);
  v16 = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
  v17 = (float)(1.5 * *(float *)&v16)
      - (float)((float)(v15 * *(float *)&v16) * (float)(*(float *)&v16 * *(float *)&v16));
  v18 = (float)(1.5 * v17) - (float)((float)(v15 * v17) * (float)(v17 * v17));
  v19 = (float)(1.5 * v18) - (float)((float)(v15 * v18) * (float)(v18 * v18));
  v20 = *(float *)(a3 + 16);
  v43 = v19;
  v44 =g4_m128_lane<float>(v9, 0) * v19;
  v45 = *(float *)g4_m128_ptr<int32_t>(v8) * v19;
  v42 =g4_m128_lane<float>(v10, 0) * v19;
  v21 =g4_m128_lane<float>(v10, 0) * v19;
  v22 = *(float *)(a3 + 20);
  v46 = (float)((float)(v51 * v22) + (float)(v50 * v20)) + (float)(v48 * *(float *)(a3 + 24));
  v23 = (float)((float)(v47 * *(float *)(a2 + 16)) + (float)(v53 * *(float *)(a2 + 20)))
      + (float)(v52 * *(float *)(a2 + 24));
  v24 = (float)((float)((float)((float)(v20 + *(float *)(a2 + 16)) * (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v19))
                      + (float)((float)(v22 + *(float *)(a2 + 20)) * (float)(g4_m128_lane<float>(v9, 0) * v19)))
              + (float)((float)(*(float *)(a2 + 24) + *(float *)(a3 + 24)) * (float)(g4_m128_lane<float>(v10, 0) * v19)))
      * 0.5;
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0) * v24;
  v59 = *(float *)g4_m128_ptr<int32_t>(v8) * v24;
  v26 = v10;
  v25 = v9;
  v12 = *(uint32_t *)(a1 + 56);
g4_m128_lane<float>(v25, 0) = (float)((float)(g4_m128_lane<float>(v9, 0) + (float)((float)((float)(v48 * v45) - (float)(v50 * v21)) * v23))
                          + (float)((float)((float)(v47 * v21) - (float)(v52 * v45)) * v46))
                  * v43;
  v60 = (float)((float)((float)((float)((float)(v51 * v21) - (float)(v48 * v44)) * v23) + v59)
              + (float)((float)((float)(v52 * v44) - (float)(v53 * v21)) * v46))
      * v43;
g4_m128_lane<float>(v26, 0) = (float)((float)((float)(g4_m128_lane<float>(v10, 0) * v24)
                                  + (float)((float)((float)(v50 * v44) - (float)(v51 * v45)) * v23))
                          + (float)((float)((float)(v53 * v45) - (float)(v47 * v44)) * v46))
                  * v43;
  v49 = (float)((float)((float)(v23 * 0.0) + (float)(v24 * 0.0)) + (float)(0.0 * v46)) * v43;
  v54 = (fabs(v60) > *(float *)(v12 + 32)) | (2 * (fabs(g4_m128_lane<float>(v25, 0)) > *(float *)(v12 + 36)));
  v27 = fabs(g4_m128_lane<float>(v26, 0));
  v28 = 4 * (v27 > *(float *)(v12 + 40));
  if ( fabs(v49) > *(float *)(v12 + 44) )
    v28 = 4 * (v27 > *(float *)(v12 + 40)) + 8;
  if ( ((v28 | v54) & 7) != 0 )
    goto LABEL_3;
  v29 = a4[1] -g4_m128_lane<float>(v25, 0);
  v30 = a4[2] -g4_m128_lane<float>(v26, 0);
  v31 = *a4 - v60;
  v55 = (float)((float)(v29 * v29) + (float)(v31 * v31)) + (float)(v30 * v30);
  v56 = (float)((float)(v44 * *(float *)(v12 + 52)) + (float)(v45 * *(float *)(v12 + 48)))
      + (float)(*(float *)(v12 + 56) * v42);
g4_m128_raw(v32) = LODWORD(v45);
  *(float *)g4_m128_ptr<int32_t>(v32) = (float)((float)(v45 * v31) + (float)(v29 * v44)) + (float)(v30 * v42);
  if ( (float)(v56 * *(float *)g4_m128_ptr<int32_t>(v32)) <= 0.0 )
    v33 = (float)(*(float *)(a2 + 32) + *(float *)(a3 + 32))
        + (float)((float)(*(float *)(a2 + 40) + *(float *)(a3 + 40)) * v56);
  else
    v33 = (float)(*(float *)(a2 + 32) + *(float *)(a3 + 32))
        + (float)((float)(*(float *)(a2 + 36) + *(float *)(a3 + 36)) * v56);
  if ( (float)((float)((float)(v33 * 0.5) * (float)(v33 * 0.5))
             * (float)(v55 - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)g4_m128_ptr<int32_t>(v32)))) < (float)(*(float *)g4_m128_ptr<int32_t>(v32)
                                                                                                  * *(float *)g4_m128_ptr<int32_t>(v32)) )
  {
    v35 = (float)(*(float *)(a3 + 44) + *(float *)(a2 + 44)) * 0.5;
    if ( v35 < 1.0 && (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)g4_m128_ptr<int32_t>(v32)) > (float)(v55 * 0.001f) )
    {
      v36 = _mm_cvtsi128_si32(v32);
      v37 = (2130706432 - v36) & ((v36 ^ (v36 + 2139095040)) >> 31);
      v57 = fabs(
              (float)((float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v32)
                                    * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)&v37))
                                            * *(float *)&v37)))
                    * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)&v37)) * *(float *)&v37))
            * (float)(2.0
                    - (float)(*(float *)g4_m128_ptr<int32_t>(v32)
                            * (float)((float)(2.0
                                            - (float)(*(float *)g4_m128_ptr<int32_t>(v32)
                                                    * (float)((float)(2.0
                                                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)&v37))
                                                            * *(float *)&v37)))
                                    * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)&v37))
                                            * *(float *)&v37)))));
      v38 = 0.0;
      if ( v55 > 0.0 )
      {
        v39 = ((_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v55))) + 2139095040) >> 31)
            & (1597463174 - (_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v55))) >> 1));
        v40 = (float)(1.5 * *(float *)&v39)
            - (float)((float)((float)(0.5 * v55) * *(float *)&v39) * (float)(*(float *)&v39 * *(float *)&v39));
        v41 = (float)(1.5 * v40) - (float)((float)((float)(0.5 * v55) * v40) * (float)(v40 * v40));
        v38 = (float)((float)(1.5 * v41) - (float)((float)((float)(0.5 * v55) * v41) * (float)(v41 * v41))) * v55;
      }
      *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v32)
                              * (float)((float)((float)(v57 * v38) * (float)(1.0 - v35)) + v35);
    }
    *a5 = (float)(v45 * *(float *)g4_m128_ptr<int32_t>(v32)) + v60;
    a5[1] = (float)(v44 * *(float *)g4_m128_ptr<int32_t>(v32)) +g4_m128_lane<float>(v25, 0);
    a5[2] = (float)(v42 * *(float *)g4_m128_ptr<int32_t>(v32)) +g4_m128_lane<float>(v26, 0);
    a5[3] = (float)((float)(0.0 * v43) * *(float *)g4_m128_ptr<int32_t>(v32)) + v49;
    return (int)(uintptr_t)(a5);
  }
  else
  {
    *(uint64_t *)&v34 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v60)), v25), 0);
    *((uint64_t *)&v34 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v26, g4_m128_from<__m128>(LODWORD(v49))), 0);
    *(g4_int128_t *)a5 = v34;
    return (int)(uintptr_t)(a5);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1ABCFB0  (binary VA: 0x1abcfb0)
// Original: sub_1ABCFB0
// ----------------------------------------------------------------------------
int sub_1ABCFB0(uint32_t *a1, float *a2, float *a3, float *a4, int a5, float *a6, float *a7)
{
  int v7;
  int v9;
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  __m128i v16;
  int result;
  float v18; // xmm6_4
  float v19; // xmm7_4
  int v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  int v26;
  uint8_t v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  uint8_t v38;
  int v39;
  int v40;
  float v41;
  float v42;
  float v43;
  int v44;
  uint8_t v45;
  int v46;

  v7 = (int)(uintptr_t)(a2);
  v9 = (int)(uintptr_t)(a3);
  v10 = a3[1];
  v11 = a4[2];
  v36 = a3[2];
  v46 = (int)(uintptr_t)(a4);
  v35 = a4[1];
  v12 = *a4;
  v13 = (float)(v10 * v11) - (float)(v36 * v35);
  v34 = *a3;
  v37 = v10;
  v14 = (float)(v36 * *a4) - (float)(*a3 * v11);
  v33 = a2[2];
  v15 = (float)(v35 * *a3) - (float)(v10 * *a4);
  v32 = a2[1];
g4_m128_raw(v16) = *(unsigned int *)a2;
  v43 = *(float *)g4_m128_ptr<int32_t>(v16);
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * v13) + (float)(v32 * v14)) + (float)(v33 * v15);
  if ( fabs(*(float *)g4_m128_ptr<int32_t>(v16)) < 0.00000011920929f )
    goto LABEL_2;
  v28 = (float)((float)(v35 * a4[5]) + (float)(a4[4] * v12)) + (float)(a4[6] * v11);
  v31 = (float)((float)(v34 * a3[4]) + (float)(v10 * a3[5])) + (float)(v36 * a3[6]);
  v18 = (float)((float)(v43 * a2[4]) + (float)(v32 * a2[5])) + (float)(v33 * a2[6]);
  v29 = (float)((float)((float)(v35 * v33) - (float)(v32 * v11)) * v31) + (float)(v13 * v18);
  v19 = (float)(v14 * v18) + (float)((float)((float)(v11 * v43) - (float)(v33 * v12)) * v31);
  v41 = (float)((float)((float)((float)(v12 * v32) - (float)(v35 * v43)) * v31) + (float)(v15 * v18))
      + (float)((float)((float)(v37 * v43) - (float)(v34 * v32)) * v28);
  v20 = (2130706432 - _mm_cvtsi128_si32(v16)) & ((_mm_cvtsi128_si32(v16) ^ (_mm_cvtsi128_si32(v16) + 2139095040)) >> 31);
  v21 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v16)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)&v20)) * *(float *)&v20)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)&v20)) * *(float *)&v20);
  v22 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v16) * v21)) * v21;
  v23 = (float)((float)((float)(v18 * 0.0) + (float)(0.0 * v31)) + (float)(0.0 * v28)) * v22;
  v24 = (float)(v19 + (float)((float)((float)(v34 * v33) - (float)(v36 * v43)) * v28)) * v22;
  v30 = (float)((float)((float)((float)(v36 * v32) - (float)(v37 * v33)) * v28) + v29) * v22;
  v25 = fabs(v41 * v22);
  v42 = v41 * v22;
  v45 = (fabs(v30) > *(float *)(a1[14] + 32)) | (2 * (fabs(v24) > *(float *)(a1[14] + 36)));
  v26 = a1[14];
  v38 = 4 * (v25 > *(float *)(v26 + 40)) + 8;
  v27 = 4 * (v25 > *(float *)(v26 + 40));
  if ( fabs(v23) > *(float *)(a1[14] + 44) )
    v27 = v38;
  if ( ((v27 | v45) & 7) != 0 )
  {
LABEL_2:
    if ( a5 != 0 )
    {
      sub_1ABC020(a1);
      v7 = a1[1];
      v9 = a1[4];
      v46 = a1[7];
    }
    v40 = v9;
    *(uint32_t *)(*(uint32_t *)(a1[15] + 36) + 16 * ((v7 - *(uint32_t *)(a1[14] + 72)) >> 6) + 12) = 1;
    *(uint32_t *)(*(uint32_t *)(a1[15] + 36) + 16 * ((v9 - *(uint32_t *)(a1[14] + 72)) >> 6) + 12) = 1;
    *(uint32_t *)(*(uint32_t *)(a1[15] + 36) + 16 * ((v46 - *(uint32_t *)(a1[14] + 72)) >> 6) + 12) = 1;
    v44 = a1[12];
    sub_1ABC7A0((int)(uintptr_t)(a1), v7, v9, a6, a7);
    result = a1[12];
    v39 = result;
    if ( result == v44 )
    {
      result = sub_1ABC7A0((int)(uintptr_t)(a1), v7, v46, a7, a7);
      if ( v39 == a1[12] )
        return sub_1ABC7A0((int)(uintptr_t)(a1), v40, v46, a7, a7);
    }
  }
  else
  {
    *a7 = v30;
    a7[1] = v24;
    a7[2] = v42;
    a7[3] = v23;
    return (int)(uintptr_t)(a7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABE0B0  (binary VA: 0x1abe0b0)
// Original: sub_1ABE0B0
// ----------------------------------------------------------------------------
void * sub_1ABE0B0(float *a1, int a2, float *a3, float *a4, float *a5)
{
  int v5;
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  void *result;
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm7_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm6_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;

  if ( a2 <= 0 )
  {
    v24 = -2.7222561e38f;
    result = &g_vectorfConstants;
    v21 = 0.0;
    v23 = -2.7222561e38f;
    v22 = -2.7222561e38f;
    v19 = -2.7222561e38f;
    v20 = 0.0;
    v18 = 0.0;
  }
  else
  {
    v5 = 0;
    v6 = -1.3611281e38f;
    v40 = 1.3611281e38f;
    v36 = 1.3611281e38f;
    v39 = 1.3611281e38f;
    v38 = 1.3611281e38f;
    v7 = -1.3611281e38f;
    v37 = -1.3611281e38f;
    v41 = -1.3611281e38f;
    do
    {
      v8 = *a1;
      ++v5;
      v9 = a1[1];
      a1 += 4;
      v10 = *(a1 - 2);
      v11 = (float)((float)(a4[8] * v8) + (float)(a4[9] * v9)) + (float)(a4[10] * v10);
      v12 = (float)((float)(a4[4] * v8) + (float)(a4[5] * v9)) + (float)(a4[6] * v10);
      v13 = (float)((float)(v8 * *a4) + (float)(v9 * a4[1])) + (float)(v10 * a4[2]);
      v14 = fminf(v38, v13);
      v6 = fmaxf(v6, v13);
      v15 = fmaxf(v41, v12);
      v37 = fmaxf(v37, v11);
      v39 = fminf(v39, v12);
      v38 = v14;
      v41 = v15;
      v36 = fminf(v36, v11);
      v7 = fmaxf(v7, 0.0);
      v40 = fminf(v40, 0.0);
    }
    while ( v5 != a2 );
    v16 = v7;
    result = &g_vectorfConstants;
    v18 = v14 + v6;
    v19 = v6 - v14;
    v20 = v39 + v15;
    v21 = v36 + v37;
    v22 = v15 - v39;
    v23 = v37 - v36;
    v24 = v16 - v40;
  }
  v25 = v18 * 0.5;
  v26 = v20 * 0.5;
  v27 = v21 * 0.5;
  *a3 = v19 * 0.5;
  a3[1] = v22 * 0.5;
  a3[2] = v23 * 0.5;
  a3[3] = 0.5 * v24;
  v28 = *a4 * v25;
  *a5 = v28;
  v29 = a4[1] * v25;
  a5[1] = v29;
  v30 = a4[2] * v25;
  a5[2] = v30;
  v31 = v25 * a4[3];
  a5[3] = v31;
  v32 = (float)(a4[4] * v26) + v28;
  *a5 = v32;
  v33 = (float)(a4[5] * v26) + v29;
  a5[1] = v33;
  v34 = (float)(a4[6] * v26) + v30;
  a5[2] = v34;
  v35 = (float)(v26 * a4[7]) + v31;
  a5[3] = v35;
  *a5 = (float)(a4[8] * v27) + v32;
  a5[1] = (float)(a4[9] * v27) + v33;
  a5[2] = (float)(a4[10] * v27) + v34;
  a5[3] = (float)(v27 * a4[11]) + v35;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABE3F0  (binary VA: 0x1abe3f0)
// Original: sub_1ABE3F0
// ----------------------------------------------------------------------------
float * sub_1ABE3F0(float *a1, float *a2, int a3, int a4)
{
  float v4; // xmm6_4
  __m128i v7;
  float v8; // xmm5_4
  int v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  __m128 v21;
  float v22; // xmm1_4
  __m128 v23;
  __m128i v24;
  float v25; // xmm5_4
  int v26;
  float v27; // xmm1_4
  float v28; // xmm0_4
  __m128 v29;
  __m128i v30;
  float v31; // xmm3_4
  float v32; // xmm0_4
  __m128i v33;
  float v34; // xmm5_4
  int v35;
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47[4];
  typedef float _g4_t_v48[4];
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef __m128 _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v41)) > _g4_s0 ? (4u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v42)) > _g4_s1 ? (12u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v43)) > _g4_s2 ? (16u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v45)) > _g4_s4 ? (24u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v46)) > _g4_s5 ? (28u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v47)) > _g4_s6 ? (32u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v48)) > _g4_s7 ? (48u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v49)) > _g4_s8 ? (64u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v50)) > _g4_s9 ? (68u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v51)) > _g4_s10 ? (72u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v52)) > _g4_s11 ? (76u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v53)) > _g4_s12 ? (80u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v54)) > _g4_s13 ? (96u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v55)) > _g4_s14 ? (100u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v56)) > _g4_s15 ? (104u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v57)) > _g4_s16 ? (108u + sizeof(_g4_t_v57)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 96u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 100u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 104u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);

  v4 = 0.0;
  v49 = *(float *)a4;
  v50 = *(float *)(a4 + 4);
g4_m128_raw(v7) = LODWORD(v49);
  v51 = *(float *)(a4 + 8);
  v52 = *(float *)(a4 + 12);
g4_m128_lane<int32_t>(v53, 3) = *(uint32_t *)(a4 + 28);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v50 * v50))
                         + (float)(v51 * v51);
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
  {
    v8 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v7);
    v9 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v10 = (float)(*(float *)&v9 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&v9) * (float)(*(float *)&v9 * *(float *)&v9));
    v11 = (float)(v10 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v10) * (float)(v10 * v10));
    v4 = (float)(1.5 * v11) - (float)((float)(v8 * v11) * (float)(v11 * v11));
  }
  v45 = *(float *)a4;
  v50 = v50 * v4;
  v12 = *(float *)(a4 + 4);
  v13 = v51 * v4;
  v14 = *(float *)(a4 + 20);
  v49 = v49 * v4;
  v15 = *(float *)(a4 + 16);
  v52 = v4 * v52;
  v16 = *(float *)(a4 + 8);
  v51 = v13;
  v17 = *(float *)(a4 + 24);
  v43 = v14;
  v44 = v12;
  v42 = v16;
  v18 = (float)((float)(v45 * v15) + (float)(v12 * v14)) + (float)(v16 * v17);
  v19 = v14 - (float)(v12 * v18);
  v46 = v15 - (float)(v45 * v18);
g4_m128_raw(v21) =g4_m128_lane<uint32_t>(v53, 3);
  v20 = v17 - (float)(v16 * v18);
g4_m128_lane<float>(v21, 0) =g4_m128_lane<float>(v53, 3) - (float)(v18 * *(float *)(a4 + 12));
g4_m128_raw(v24) = LODWORD(v46);
  v41 = v20;
  v22 = v20 * v20;
g4_m128_raw(v23) = 0;
  *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)g4_m128_ptr<int32_t>(v24)) + (float)(v19 * v19))
                          + v22;
  if ( *(float *)g4_m128_ptr<int32_t>(v24) > 0.0 )
  {
    v25 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v24);
    v26 = ((_mm_cvtsi128_si32(v24) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v24) >> 1));
g4_m128_raw(v23) = 0x3FC00000u;
    v27 = (float)(*(float *)&v26 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * *(float *)&v26)
                * (float)(*(float *)&v26 * *(float *)&v26));
    v28 = (float)(v27 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * v27) * (float)(v27 * v27));
g4_m128_lane<float>(v23, 0) = (float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28));
  }
g4_m128_lane<uint64_t>(v29, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v46)), g4_m128_from<__m128>(LODWORD(v19))), 0);
g4_m128_lane<uint64_t>(v29, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v41)), v21), 0);
g4_m128_raw(v30) = LODWORD(v44);
  v53 = _mm_mul_ps(v29, _mm_shuffle_ps(v23, v23, 0));
  *(float *)g4_m128_ptr<int32_t>(v30) = (float)(v44 * v17) - (float)(v43 * v42);
  v31 = (float)(v42 * v15) - (float)(v17 * v45);
  v32 = (float)(v45 * v43) - (float)(v44 * v15);
  v33 = v30;
  *(float *)g4_m128_ptr<int32_t>(v33) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v30) * *(float *)g4_m128_ptr<int32_t>(v30)) + (float)(v31 * v31))
                          + (float)(v32 * v32);
  if ( *(float *)g4_m128_ptr<int32_t>(v33) <= 0.0 )
  {
    v39 = 0.0;
    v38 = 0.0;
  }
  else
  {
    v34 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v33);
    v35 = ((_mm_cvtsi128_si32(v33) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v33) >> 1));
    v36 = (float)(*(float *)&v35 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v33)) * *(float *)&v35)
                * (float)(*(float *)&v35 * *(float *)&v35));
    v37 = (float)((float)((float)(*(float *)&v35 * 1.5)
                        - (float)((float)(v34 * *(float *)&v35) * (float)(*(float *)&v35 * *(float *)&v35)))
                * 1.5)
        - (float)((float)(v34 * v36) * (float)(v36 * v36));
    v38 = (float)(1.5 * v37) - (float)((float)(v34 * v37) * (float)(v37 * v37));
    v39 = 0.0 * v38;
  }
  v57 = v39;
  v54 = *(float *)g4_m128_ptr<int32_t>(v30) * v38;
  v55 = v31 * v38;
  v56 = v38 * v32;
  sub_1ABE0B0(a2, a3, v48, &v49, v47);
  *a1 = (float)(v48[0] * v48[1]) * v48[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABE7F0  (binary VA: 0x1abe7f0)
// Original: sub_1ABE7F0
// ----------------------------------------------------------------------------
int sub_1ABE7F0(uint32_t *a1, float *a2, float *a3, int a4)
{
  float v4; // xmm0_4
  __m128i v5;
  float v6; // xmm3_4
  float v7; // xmm2_4
  int result;
  float v9; // xmm0_4
  __m128i v10;
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  unsigned int v15;
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  __m128i v27;
  __m128 v28;
  __m128 v29;
  __m128 v30;
  unsigned int v31;
  __m128i m128_i128;
  float v33; // xmm5_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __m128 v36;
  float v37; // xmm0_4
  float v38; // xmm1_4
  __m128 v39;
  __m128i v40;
  float v41; // xmm3_4
  float v42; // xmm1_4
  __m128i v43;
  float v44; // xmm5_4
  float v45; // xmm4_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  float v48; // xmm0_4
  float v49;
  float v50;
  float v51;

  *(uint32_t *)a4 = *a1;
  *(uint32_t *)(a4 + 4) = a1[1];
  *(uint32_t *)(a4 + 8) = a1[2];
  *(uint32_t *)(a4 + 12) = a1[3];
  v4 = *a3;
g4_m128_raw(v5) = *(unsigned int *)a2;
  *(float *)g4_m128_ptr<int32_t>(v5) = (float)(*(float *)g4_m128_ptr<int32_t>(v5) * *a3) + *(float *)a4;
  *(uint32_t *)a4 =g4_m128_lane<int32_t>(v5, 0);
  v6 = (float)(a2[1] * v4) + *(float *)(a4 + 4);
  *(float *)(a4 + 4) = v6;
  v7 = (float)(a2[2] * v4) + *(float *)(a4 + 8);
  *(float *)(a4 + 8) = v7;
  *(float *)(a4 + 12) = (float)(v4 * a2[3]) + *(float *)(a4 + 12);
  *(uint32_t *)(a4 + 16) = a1[4];
  *(uint32_t *)(a4 + 20) = a1[5];
  *(uint32_t *)(a4 + 24) = a1[6];
  result = a1[7];
  *(float *)(a4 + 28) = *(float *)&result;
  v9 = *a3;
  *(float *)(a4 + 16) = (float)(a2[4] * *a3) + *(float *)(a4 + 16);
  *(float *)(a4 + 20) = (float)(a2[5] * v9) + *(float *)(a4 + 20);
  *(float *)(a4 + 24) = (float)(a2[6] * v9) + *(float *)(a4 + 24);
  *(float *)(a4 + 28) = (float)(v9 * a2[7]) + *(float *)(a4 + 28);
  v10 = v5;
  *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5)) + (float)(v6 * v6))
                          + (float)(v7 * v7);
  v11 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v10) > 0.0 )
  {
    result = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
    v12 = (float)(*(float *)&result * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * *(float *)&result)
                * (float)(*(float *)&result * *(float *)&result));
    v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v12) * (float)(v12 * v12));
    v11 = (float)(1.5 * v13) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v13) * (float)(v13 * v13));
  }
  v14 = v6 * v11;
  v15 = *(uint32_t *)(a4 + 28);
  v16 = *(float *)g4_m128_ptr<int32_t>(v5) * v11;
  v17 = v7 * v11;
  v18 = v11 * *(float *)(a4 + 12);
  v49 = v14;
  v19 = v14;
  v20 = v16;
  v21 = v16;
  v51 = v17;
  v22 = v17;
  v50 = v16;
  *(float *)a4 = v16;
  v23 = v14;
  *(float *)(a4 + 4) = v14;
  *(float *)(a4 + 8) = v17;
g4_m128_raw(v28) = *(unsigned int *)(a4 + 16);
g4_m128_raw(v29) = *(unsigned int *)(a4 + 20);
  *(float *)(a4 + 12) = v18;
  v24 = (float)(v21 *g4_m128_lane<float>(v28, 0)) + (float)(v23 *g4_m128_lane<float>(v29, 0));
g4_m128_raw(v30) = *(unsigned int *)(a4 + 24);
  v25 = v24 + (float)(v22 *g4_m128_lane<float>(v30, 0));
  v26 = v20;
  v27 = _mm_cvtsi32_si128(v15);
g4_m128_lane<float>(v28, 0) =g4_m128_lane<float>(v28, 0) - (float)(v26 * v25);
g4_m128_lane<float>(v29, 0) =g4_m128_lane<float>(v29, 0) - (float)(v19 * v25);
g4_m128_lane<float>(v30, 0) =g4_m128_lane<float>(v30, 0) - (float)(v51 * v25);
  *(float *)g4_m128_ptr<int32_t>(v27) = *(float *)g4_m128_ptr<int32_t>(v27) - (float)(v25 * v18);
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v28));
  v31 = _mm_cvtsi128_si32(v27);
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v28, 0) *g4_m128_lane<float>(v28, 0))
                                        + (float)(g4_m128_lane<float>(v29, 0) *g4_m128_lane<float>(v29, 0)))
                                + (float)(g4_m128_lane<float>(v30, 0) *g4_m128_lane<float>(v30, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) <= 0.0 )
  {
g4_m128_raw(v36) = 0;
  }
  else
  {
    v33 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    result = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
g4_m128_raw(v36) = 0x3FC00000u;
    v34 = (float)(*(float *)&result * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&result)
                * (float)(*(float *)&result * *(float *)&result));
    v35 = (float)(v34 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v34) * (float)(v34 * v34));
g4_m128_lane<float>(v36, 0) = (float)(1.5 * v35) - (float)((float)(v33 * v35) * (float)(v35 * v35));
  }
  v37 =g4_m128_lane<float>(v28, 0) *g4_m128_lane<float>(v36, 0);
  v38 =g4_m128_lane<float>(v29, 0) *g4_m128_lane<float>(v36, 0);
g4_m128_lane<uint64_t>(v39, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v28, v29), 0);
g4_m128_lane<uint64_t>(v39, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v30, g4_m128_from<__m128>(_mm_cvtsi32_si128(v31))), 0);
  *(__m128 *)(a4 + 16) = _mm_mul_ps(v39, _mm_shuffle_ps(v36, v36, 0));
g4_m128_raw(v40) = LODWORD(v49);
  *(float *)g4_m128_ptr<int32_t>(v40) = (float)(v49 * (float)(g4_m128_lane<float>(v30, 0) *g4_m128_lane<float>(v36, 0))) - (float)(v51 * v38);
  v41 = (float)(v51 * (float)(g4_m128_lane<float>(v28, 0) *g4_m128_lane<float>(v36, 0)))
      - (float)((float)(g4_m128_lane<float>(v30, 0) *g4_m128_lane<float>(v36, 0)) * v50);
  v42 = (float)(v38 * v50) - (float)(v37 * v49);
  v43 = v40;
  *(float *)g4_m128_ptr<int32_t>(v43) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) * *(float *)g4_m128_ptr<int32_t>(v40)) + (float)(v41 * v41))
                          + (float)(v42 * v42);
  if ( *(float *)g4_m128_ptr<int32_t>(v43) <= 0.0 )
  {
    v48 = 0.0;
    v47 = 0.0;
  }
  else
  {
    v44 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v43);
    result = ((_mm_cvtsi128_si32(v43) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v43) >> 1));
    v45 = (float)(*(float *)&result * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v43)) * *(float *)&result)
                * (float)(*(float *)&result * *(float *)&result));
    v46 = (float)((float)((float)(*(float *)&result * 1.5)
                        - (float)((float)(v44 * *(float *)&result) * (float)(*(float *)&result * *(float *)&result)))
                * 1.5)
        - (float)((float)(v44 * v45) * (float)(v45 * v45));
    v47 = (float)(1.5 * v46) - (float)((float)(v44 * v46) * (float)(v46 * v46));
    v48 = 0.0 * v47;
  }
  *(float *)(a4 + 44) = v48;
  *(float *)(a4 + 32) = *(float *)g4_m128_ptr<int32_t>(v40) * v47;
  *(float *)(a4 + 36) = v41 * v47;
  *(float *)(a4 + 40) = v42 * v47;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABEC10  (binary VA: 0x1abec10)
// Original: sub_1ABEC10
// ----------------------------------------------------------------------------
float * sub_1ABEC10(float *a1, float *a2, int a3, uint32_t *a4, uint32_t *a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  __m128 *v13;
  __m128i v14;
  float v15; // xmm6_4
  float v16; // xmm5_4
  int v17; // xmm3_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  int v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  int v23;
  float v24; // xmm2_4
  bool v25; // cc
  int v27;
  float v28; // xmm0_4
  uint32_t *v68;
  typedef int _g4_t_v29;
  typedef __m128 _g4_t_v30;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float *_g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43[4];
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46[4];
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[15];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v32)) > _g4_s2 ? (44u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v33)) > _g4_s3 ? (48u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v34)) > _g4_s4 ? (56u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v35)) > _g4_s5 ? (56u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v36)) > _g4_s6 ? (56u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v37)) > _g4_s7 ? (60u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v38)) > _g4_s8 ? (60u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v39)) > _g4_s9 ? (60u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v40)) > _g4_s10 ? (60u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v42)) > _g4_s11 ? (76u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v43)) > _g4_s12 ? (80u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v44)) > _g4_s13 ? (96u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v45)) > _g4_s14 ? (112u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v46)) > _g4_s15 ? (128u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v47)) > _g4_s16 ? (144u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v48)) > _g4_s17 ? (148u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v49)) > _g4_s18 ? (152u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v50)) > _g4_s19 ? (156u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v51)) > _g4_s20 ? (160u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v52)) > _g4_s21 ? (164u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v53)) > _g4_s22 ? (168u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v54)) > _g4_s23 ? (172u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v55)) > _g4_s24 ? (176u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v56)) > _g4_s25 ? (180u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v57)) > _g4_s26 ? (184u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v58)) > _g4_s27 ? (188u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v59)) > _g4_s28 ? (192u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v60)) > _g4_s29 ? (196u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v61)) > _g4_s30 ? (200u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v62)) > _g4_s31 ? (204u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (208u + sizeof(_g4_t_v63)) > _g4_s32 ? (208u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (212u + sizeof(_g4_t_v64)) > _g4_s33 ? (212u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (216u + sizeof(_g4_t_v65)) > _g4_s34 ? (216u + sizeof(_g4_t_v65)) : _g4_s34,
    _g4_s36 = (220u + sizeof(_g4_t_v66)) > _g4_s35 ? (220u + sizeof(_g4_t_v66)) : _g4_s35,
    _g4_s37 = (224u + sizeof(_g4_t_v67)) > _g4_s36 ? (224u + sizeof(_g4_t_v67)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 144u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 148u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 156u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 164u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 168u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 172u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 196u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 200u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 204u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 208u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 212u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 216u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 220u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 224u);

  v5 = a5;
  v43[0] = 0.001f;
  sub_1ABE3F0(a1, a2, a3, (int)(uintptr_t)(a4));
  v29 = 20;
  *a5 = *a4;
  a5[1] = a4[1];
  a5[2] = a4[2];
  a5[3] = a4[3];
  a5[4] = a4[4];
  a5[5] = a4[5];
  a5[6] = a4[6];
  a5[7] = a4[7];
  a5[8] = a4[8];
  a5[9] = a4[9];
  a5[10] = a4[10];
  a5[11] = a4[11];
  while ( 1 )
  {
    v6 = v5[6];
    v55 = *v5;
    v56 = v5[1];
    v57 = v5[2];
    v58 = v5[3];
    v62 = v5[7];
    v7 = v5[4];
    v63 = v5[8];
    v64 = v5[9];
    v65 = v5[10];
    v66 = v5[11];
    v67[0] = *v5;
    v67[1] = v5[1];
    v8 = v5[5];
    v67[2] = v5[2];
    v9 = v5[3];
    v59 = v7;
    v61 = v6;
    v67[3] = v9;
    v60 = v8;
    v67[4] = v7;
    v67[6] = v6;
    v67[7] = v62;
    v67[5] = v8;
    sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v5));
    v32 = 0;
    v34 = &v47;
    v33 = v42;
    v68 = v5;
    v30 = _mm_shuffle_ps(g4_m128_from<__m128>(0xBF800000), g4_m128_from<__m128>(0xBF800000), 0);
    do
    {
      v10 = &v67[v32];
      v11 = 0;
      v12 = &v68[v32];
      do
      {
        v37 = v12;
        *(float *)&v10[v11] = *(float *)&v10[v11] + 0.0001f;
        sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v67));
        v13 = (__m128 *)v34;
        v12 = v37;
        v34[v11] = (float)(v42 - v33) * 10000.001f;
        v10[v11] = v37[v11];
        ++v11;
      }
      while ( v11 != 3 );
      v34 += 4;
      v32 += 4;
      *v13 = _mm_mul_ps(v30, *v13);
    }
    while ( v32 != 8 );
g4_m128_raw(v14) = v51;
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)((float)(v47 * v47) + (float)(v48 * v48)) + (float)(v49 * v49))
                            + (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14))
                                            + (float)(v52 * v52))
                                    + (float)(v53 * v53));
    if ( *(float *)g4_m128_ptr<int32_t>(v14) > 1.0 )
    {
      v15 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v14) > 0.0 )
      {
        v16 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v14);
        v17 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
        v18 = (float)(1.5
                    * (float)((float)(1.5 * *(float *)&v17)
                            - (float)((float)(v16 * *(float *)&v17) * (float)(*(float *)&v17 * *(float *)&v17))))
            - (float)((float)(v16
                            * (float)((float)(1.5 * *(float *)&v17)
                                    - (float)((float)(v16 * *(float *)&v17) * (float)(*(float *)&v17 * *(float *)&v17))))
                    * (float)((float)((float)(1.5 * *(float *)&v17)
                                    - (float)((float)(v16 * *(float *)&v17) * (float)(*(float *)&v17 * *(float *)&v17)))
                            * (float)((float)(1.5 * *(float *)&v17)
                                    - (float)((float)(v16 * *(float *)&v17) * (float)(*(float *)&v17 * *(float *)&v17)))));
        v15 = (float)(1.5 * v18) - (float)((float)(v16 * v18) * (float)(v18 * v18));
      }
      v49 = v49 * v15;
      v47 = v47 * v15;
      v48 = v48 * v15;
      v53 = v53 * v15;
      v50 = v50 * v15;
      *(float *)&v51 = *(float *)&v51 * v15;
      v52 = v52 * v15;
      v54 = v15 * v54;
    }
    sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v68));
    v35 = v42;
    sub_1ABE7F0(v68, &v47, v43, (int)(uintptr_t)(v67));
    sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v67));
    v38 = v42;
    if ( v35 <= v42 )
    {
      v27 = 20;
      v28 = v43[0];
      v45 = v43[0];
      while ( 1 )
      {
        v44 = (float)(v28 + 0.0) * 0.5;
        sub_1ABE7F0(v68, &v47, &v44, (int)(uintptr_t)(v67));
        sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v67));
        v21 = v42;
        if ( v35 > v42 && v38 > v42 )
          break;
        if ( --v27 == 0 )
        {
          v19 = -1.0;
          v5 = v68;
          goto LABEL_29;
        }
        v28 = v44;
      }
      v5 = v68;
    }
    else
    {
      v19 = v43[0];
      v20 = 20;
      v44 = v43[0];
      while ( 1 )
      {
        v45 = v19 * 1.2f;
        sub_1ABE7F0(v68, &v47, &v45, (int)(uintptr_t)(v67));
        sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v67));
        if ( v42 > v38 )
          break;
        v19 = v45;
        --v20;
        v44 = v45;
        if ( v20 == 0 )
        {
LABEL_28:
          v5 = v68;
          goto LABEL_29;
        }
        v38 = v42;
      }
      v21 = v38;
      v5 = v68;
      v38 = v42;
    }
    v19 = -1.0;
    if ( v44 >= 0.0 )
    {
      v22 = v45;
      if ( v44 <= v45 && v21 <= v35 && v21 <= v38 )
      {
        v68 = v5;
        v19 = v44;
        v23 = 20;
        v39 = 0.0;
        v36 = v21;
        while ( 1 )
        {
          v24 = v22 - v19;
          if ( (float)(v19 - v39) > v24 )
            break;
          v46[0] = (float)(v24 * 0.38196602f) + v19;
          sub_1ABE7F0(v5, &v47, v46, (int)(uintptr_t)(v67));
          sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v67));
          if ( v36 <= v42 )
          {
            v45 = v46[0];
            v19 = v44;
            goto LABEL_23;
          }
          --v23;
          v19 = v46[0];
          v39 = v44;
          v44 = v46[0];
          v36 = v42;
          if ( v23 == 0 )
            goto LABEL_28;
LABEL_24:
          v22 = v45;
        }
        v46[0] = v19 - (float)((float)(v19 - v39) * 0.38196602f);
        sub_1ABE7F0(v5, &v47, v46, (int)(uintptr_t)(v67));
        sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v67));
        if ( v36 <= v42 )
        {
          v39 = v46[0];
          v19 = v44;
        }
        else
        {
          v45 = v44;
          v19 = v46[0];
          v44 = v46[0];
          v36 = v42;
        }
LABEL_23:
        if ( --v23 == 0 )
          goto LABEL_28;
        goto LABEL_24;
      }
    }
LABEL_29:
    v43[0] = v19;
    if ( v19 < 0.0 )
      return a1;
    sub_1ABE7F0(v5, &v47, v43, (int)(uintptr_t)(v5));
    v40 = *a1;
    sub_1ABE3F0(&v42, a2, a3, (int)(uintptr_t)(v5));
    v25 = v42 <= v40;
    *a1 = v42;
    if ( !v25 )
      break;
    if ( v43[0] >= 0.0000011920929f && --v29 != 0 )
      continue;
    return a1;
  }
  *a1 = v40;
  *v5 = v55;
  v5[1] = v56;
  v5[2] = v57;
  v5[3] = v58;
  v5[4] = v59;
  v5[5] = v60;
  v5[6] = v61;
  v5[7] = v62;
  v5[8] = v63;
  v5[9] = v64;
  v5[10] = v65;
  v5[11] = v66;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABFFA0  (binary VA: 0x1abffa0)
// Original: sub_1ABFFA0
// ----------------------------------------------------------------------------
void sub_1ABFFA0()
{
  dword_2142C90 = 925353388;
}

// ----------------------------------------------------------------------------
// Function: sub_1ABFFC0  (binary VA: 0x1abffc0)
// Original: sub_1ABFFC0
// ----------------------------------------------------------------------------
float * sub_1ABFFC0(int a1, float *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  bool v6;
  __m128i v7;
  float v8; // xmm3_4
  int v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12;
  float *result;
  float v14; // xmm3_4
  uint32_t *i;
  int v16;
  int v17;
  int v18;
  float v19;
  int v20;
  int v21;
  float v22; // xmm3_4
  float v23; // xmm7_4
  unsigned int *v24;
  float *v25;
  __m128i v26;
  float v27; // xmm4_4
  float v28; // xmm0_4
  int v29;
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  float *v38;
  int v39;
  float v40; // xmm4_4
  int v41;
  float v42; // xmm6_4
  float v43; // xmm3_4
  float v44; // xmm5_4
  float v45; // xmm5_4
  float *v46;
  int v47;
  int v48;
  int v49;
  float v50; // xmm7_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  bool v54;
  int v55;
  float *v56;
  float *v57;
  float v58; // xmm1_4
  int v59;
  int v60;
  float *v61;
  uint32_t *v62;
  float v63; // xmm4_4
  float v64; // xmm3_4
  float v65; // xmm2_4
  float v66; // xmm0_4
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm6_4
  float v70; // xmm0_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  __m128i v73;
  float v74; // xmm3_4
  float v75; // xmm1_4
  float v76; // xmm5_4
  __m128i v77;
  int v78;
  float v79; // xmm0_4
  float v80; // xmm4_4
  float v81; // xmm3_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  float *v84;
  float v85; // xmm4_4
  float v86; // xmm5_4
  float v87; // xmm6_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm4_4
  float v91; // xmm3_4
  float v92; // xmm5_4
  float v93; // xmm6_4
  typedef int _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef int _g4_t_v98;
  typedef float *_g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float *_g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef int _g4_t_v112;
  typedef uint32_t *_g4_t_v113;
  typedef int _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float *_g4_t_v118;
  typedef float *_g4_t_v119;
  typedef uint8_t _g4_t_v120[12];
  typedef float _g4_t_v121[4];
  typedef unsigned int _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float *_g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef uint8_t _g4_t_v129[64];
  typedef float _g4_t_v130[131];
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (12u + sizeof(_g4_t_v94)) > _g4_s0 ? (12u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v95)) > _g4_s1 ? (20u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v96)) > _g4_s2 ? (24u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v97)) > _g4_s3 ? (28u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v98)) > _g4_s4 ? (28u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v99)) > _g4_s5 ? (32u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v100)) > _g4_s6 ? (32u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v101)) > _g4_s7 ? (36u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v102)) > _g4_s8 ? (40u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v103)) > _g4_s9 ? (40u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v104)) > _g4_s10 ? (44u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v105)) > _g4_s11 ? (44u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v106)) > _g4_s12 ? (48u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v107)) > _g4_s13 ? (48u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v108)) > _g4_s14 ? (48u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v109)) > _g4_s15 ? (52u + sizeof(_g4_t_v109)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v110)) > _g4_s16 ? (52u + sizeof(_g4_t_v110)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v111)) > _g4_s17 ? (52u + sizeof(_g4_t_v111)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v112)) > _g4_s18 ? (52u + sizeof(_g4_t_v112)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v113)) > _g4_s19 ? (56u + sizeof(_g4_t_v113)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v114)) > _g4_s20 ? (56u + sizeof(_g4_t_v114)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v115)) > _g4_s21 ? (56u + sizeof(_g4_t_v115)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v116)) > _g4_s22 ? (56u + sizeof(_g4_t_v116)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v117)) > _g4_s23 ? (56u + sizeof(_g4_t_v117)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v118)) > _g4_s24 ? (56u + sizeof(_g4_t_v118)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v119)) > _g4_s25 ? (56u + sizeof(_g4_t_v119)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v120)) > _g4_s26 ? (64u + sizeof(_g4_t_v120)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v121)) > _g4_s27 ? (76u + sizeof(_g4_t_v121)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v122)) > _g4_s28 ? (92u + sizeof(_g4_t_v122)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v123)) > _g4_s29 ? (96u + sizeof(_g4_t_v123)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v124)) > _g4_s30 ? (100u + sizeof(_g4_t_v124)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v125)) > _g4_s31 ? (104u + sizeof(_g4_t_v125)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v126)) > _g4_s32 ? (108u + sizeof(_g4_t_v126)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v127)) > _g4_s33 ? (112u + sizeof(_g4_t_v127)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v128)) > _g4_s34 ? (116u + sizeof(_g4_t_v128)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v129)) > _g4_s35 ? (124u + sizeof(_g4_t_v129)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v130)) > _g4_s36 ? (188u + sizeof(_g4_t_v130)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 12u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 20u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 24u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 28u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 28u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 32u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 32u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 36u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 44u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 52u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 56u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 64u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 76u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 92u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 96u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 100u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 104u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 108u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 112u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 116u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 124u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 188u);

  v2 = a1;
  v3 = *(uint32_t *)(a1 + 52);
  if ( v3 == (*(uint32_t *)(v2 + 56) & 0x3FFFFFFF) )
  {
    v118 = a2;
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v2 + 48),
      &word_10);
    v3 = *(uint32_t *)(v2 + 52);
    a2 = v118;
  }
  v4 = (uint32_t *)(*(uint32_t *)(v2 + 48) + 16 * v3);
  *v4 = *(uint32_t *)a2;
  v4[1] = *((uint32_t *)a2 + 1);
  v4[2] = *((uint32_t *)a2 + 2);
  v4[3] = *((uint32_t *)a2 + 3);
  v5 = *(uint32_t *)(v2 + 52) + 1;
  v6 = *(uint32_t *)(v2 + 52) - 1 < 0;
  *(uint32_t *)(v2 + 52) = v5;
  if ( v5 == 2 )
  {
    v63 = *(float *)v2 + *a2;
    v64 = *(float *)(v2 + 4);
    v65 = *(float *)(v2 + 8);
    v66 = *(float *)(v2 + 12);
    *(float *)v2 = v63;
    v67 = v64 + a2[1];
    *(float *)(v2 + 4) = v67;
    v68 = v65 + a2[2];
    v69 = v63 * 0.5;
    *(float *)(v2 + 8) = v68;
    v70 = v66 + a2[3];
    v71 = v68 * 0.5;
    *(float *)v2 = v63 * 0.5;
    *(float *)(v2 + 4) = v67 * 0.5;
    v72 = v70 * 0.5;
    *(float *)(v2 + 8) = v71;
    *(float *)(v2 + 12) = v72;
g4_m128_raw(v73) = *(unsigned int *)a2;
    *(float *)g4_m128_ptr<int32_t>(v73) = *(float *)g4_m128_ptr<int32_t>(v73) - v69;
    v74 = a2[1] - (float)(v67 * 0.5);
    v75 = a2[2] - v71;
    v76 = a2[3] - v72;
    *(uint32_t *)(v2 + 16) =g4_m128_lane<int32_t>(v73, 0);
    v7 = v73;
    *(float *)(v2 + 20) = v74;
    *(float *)(v2 + 24) = v75;
    *(float *)(v2 + 28) = v76;
    *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v73) * *(float *)g4_m128_ptr<int32_t>(v73)) + (float)(v74 * v74))
                           + (float)(v75 * v75);
    *(uint32_t *)(v2 + 12) =g4_m128_lane<int32_t>(v7, 0);
  }
  else
  {
    if ( v6 ^ __OFSUB__(v5, 2) | (v5 == 2) )
    {
      if ( v5 == 1 )
      {
        *(float *)v2 = *a2;
        *(float *)(v2 + 4) = a2[1];
        *(float *)(v2 + 8) = a2[2];
g4_m128_raw(v7) = 0u;
        *(uint32_t *)(v2 + 12) = 0;
        goto LABEL_7;
      }
      goto LABEL_51;
    }
    if ( v5 > 4 )
    {
LABEL_51:
g4_m128_raw(v7) = *(unsigned int *)(v2 + 12);
      goto LABEL_7;
    }
    v97 = *(float *)v2;
    v22 = *a2 - *(float *)v2;
    v96 = *(float *)(v2 + 4);
    v95 = *(float *)(v2 + 8);
    v106 = *(float *)(v2 + 12);
    v110 = a2[1] - v96;
    v23 = a2[2] - v95;
    v104 = a2[3] - v106;
    if ( v5 == 3 )
    {
      v24 = (unsigned int *)v121;
      v25 = (float *)&v122;
    }
    else
    {
      v24 = &v122;
      v25 = v121;
    }
g4_m128_raw(v26) = *(unsigned int *)(v2 + 16);
    v27 = *(float *)(v2 + 20);
    v99 = a2;
    *v24 = *(uint32_t *)(v2 + 16);
    v24[1] = *(uint32_t *)(v2 + 20);
    v24[2] = *(uint32_t *)(v2 + 24);
    v24[3] = *(uint32_t *)(v2 + 28);
    v102 = (float *)v24;
    v28 = (float)(v22 * *(float *)g4_m128_ptr<int32_t>(v26)) + (float)(v110 * v27);
    *(float *)g4_m128_ptr<int32_t>(v26) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26)) + (float)(v27 * v27))
                            + (float)(*(float *)(v2 + 24) * *(float *)(v2 + 24));
    v29 = _mm_cvtsi128_si32(v26);
    v114 = (2130706432 - v29) & ((v29 ^ (v29 + 2139095040)) >> 31);
    v30 = (float)(v28 + (float)(*(float *)(v2 + 24) * v23))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                                * (float)((float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                                                                                * *(float *)&v114))
                                                                * *(float *)&v114)))
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v114))
                                                * *(float *)&v114))))
                * (float)((float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v114))
                                                * *(float *)&v114)))
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v114)) * *(float *)&v114)));
    *v102 = v30 * *v102;
    v102[1] = v102[1] * v30;
    *(float *)g4_m128_ptr<int32_t>(v26) = v102[2] * v30;
    v31 = v30 * v102[3];
    v102[2] = *(float *)g4_m128_ptr<int32_t>(v26);
    v102[3] = v31;
    *v25 = v22;
    v25[1] = v110;
    v25[2] = v23;
    v25[3] = v104;
    *v25 = v22 - *v102;
    v25[1] = v110 - v102[1];
    v25[2] = v23 - v102[2];
    v25[3] = v104 - v102[3];
    v105 = v121[0];
    v103 = v121[1];
    v101 = v121[2];
    v32 = *(float *)&v122;
    v115 = v124;
    v33 = (float)((float)(v121[0] * v121[0]) + (float)(v121[1] * v121[1])) + (float)(v121[2] * v121[2]);
    if ( v33 > v106 )
    {
      v127 = v5;
      v126 = (float *)v129;
      v34 = *(uint32_t *)(v2 + 48);
      v128 = -2147483644;
      v35 = 0;
      v116 = 16 * v5;
      do
      {
        v36 = (uint32_t *)(&v129[v35]);
        *v36 = *(uint32_t *)(v34 + v35);
        v36[1] = *(uint32_t *)(v34 + v35 + 4);
        v36[2] = *(uint32_t *)(v34 + v35 + 8);
        v37 = *(uint32_t *)(v34 + v35 + 12);
        v35 += 16;
        v36[3] = v37;
      }
      while ( v35 != v116 );
      *(uint32_t *)(v2 + 52) = 0;
      sub_1ABFFC0(v37, v99);
      v100 = 3.40282e38f;
      if ( v127 > 0 )
      {
        v117 = *(float *)(v2 + 4);
        v38 = v126;
        v111 = *(float *)(v2 + 8);
        v39 = 0;
        v40 = *(float *)v2;
        v107 = 3.40282e38f;
        v41 = -1;
        do
        {
          v42 = *v38;
          if ( *(float *)(v2 + 32) <= (float)((float)((float)((float)(*v38 - v40) * (float)(*v38 - v40))
                                                    + (float)((float)(v38[1] - v117) * (float)(v38[1] - v117)))
                                            + (float)((float)(v38[2] - v111) * (float)(v38[2] - v111))) )
          {
            v43 = v38[1];
            v44 = v38[2];
            if ( v107 > (float)((float)((float)(v42 * v105) + (float)(v43 * v103)) + (float)(v44 * v101)) )
            {
              v107 = (float)((float)(v42 * v105) + (float)(v43 * v103)) + (float)(v44 * v101);
              v41 = v39;
            }
          }
          ++v39;
          v38 += 4;
        }
        while ( v39 != v127 );
        v98 = v41;
        v45 = *(float *)(v2 + 32);
        if ( v41 == -1 )
        {
LABEL_33:
          v46 = v126;
          v47 = v39;
          v48 = 0;
          v49 = -1;
          v50 = v45;
          do
          {
            v51 = *v46;
            if ( v50 <= (float)((float)((float)((float)(*v46 - v40) * (float)(*v46 - v40))
                                      + (float)((float)(v46[1] - v117) * (float)(v46[1] - v117)))
                              + (float)((float)(v46[2] - v111) * (float)(v46[2] - v111))) )
            {
              v52 = v46[1];
              v53 = v46[2];
              if ( v100 > (float)((float)((float)(v51 * v105) + (float)(v52 * v103)) + (float)(v53 * v101)) )
              {
                v100 = (float)((float)(v51 * v105) + (float)(v52 * v103)) + (float)(v53 * v101);
                v49 = v48;
              }
            }
            ++v48;
            v46 += 4;
          }
          while ( v48 != v47 );
          v108 = v49;
          v54 = v49 == -1;
          v55 = v47;
          if ( !v54 )
          {
            v56 = v126;
            if ( v48 <= 3 )
            {
              hkErrStream::Construct((hkErrStream::Self *)v120, (hkString::Self *)v130, 512);
              hkOstream::opShl(
                (int)(uintptr_t)(v120),
                (hkString::Self *)"SphereFinder::SimplexBoundingSphere::Expand has found a non-minimal simplex without any internal points.");
              if ( hkError::messageError(
                     (hkError::Self *)0x4C74CCB1,
                     (int)(uintptr_t)(v130),
                     "ConvexHull/hkGeometryUtility.cpp",
                     (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_4F4)->st_size + 3,
                     v94) != 0 )
                __builtin_debugtrap();
              hkErrStream::Destroy((hkErrStream::Self *)v120);
              v56 = v126;
            }
            sub_1ABFFC0(v48, &v56[4 * v108]);
            v55 = v127;
            v57 = &v126[4 * (3 - v98 - v108)];
            v58 = v57[2] - *(float *)(v2 + 8);
            if ( *(float *)(v2 + 32) <= (float)((float)((float)((float)(*v57 - *(float *)v2)
                                                              * (float)(*v57 - *(float *)v2))
                                                      + (float)((float)(v57[1] - *(float *)(v2 + 4))
                                                              * (float)(v57[1] - *(float *)(v2 + 4))))
                                              + (float)(v58 * v58)) )
            {
              hkErrStream::Construct((hkErrStream::Self *)v120, (hkString::Self *)v130, 512);
              hkOstream::opShl(
                (int)(uintptr_t)(v120),
                (hkString::Self *)"SphereFinder::SimplexBoundingSphere::Expand has found a non-minimal simplex without any internal points.");
              if ( hkError::messageError(
                     (hkError::Self *)0x4C74CCB1,
                     (int)(uintptr_t)(v130),
                     "ConvexHull/hkGeometryUtility.cpp",
                     (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_504)->st_name + 3,
                     v94) != 0 )
                __builtin_debugtrap();
              hkErrStream::Destroy((hkErrStream::Self *)v120);
              v55 = v127;
            }
          }
          if ( v55 > 1 )
          {
            v59 = 0;
            do
            {
              while ( v59 == v108 || v59 == v98 )
              {
                if ( v55 - 1 <= ++v59 )
                  goto LABEL_49;
              }
              v60 = *(uint32_t *)(v2 + 132);
              v61 = &v126[4 * v59];
              if ( v60 == (*(uint32_t *)(v2 + 136) & 0x3FFFFFFF) )
              {
                v119 = &v126[4 * v59];
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)(v2 + 128),
                  &word_10);
                v60 = *(uint32_t *)(v2 + 132);
                v61 = v119;
              }
              v62 = (uint32_t *)(*(uint32_t *)(v2 + 128) + 16 * v60);
              ++v59;
              *v62 = *(uint32_t *)v61;
              v62[1] = *((uint32_t *)v61 + 1);
              v62[2] = *((uint32_t *)v61 + 2);
              v55 = v127;
              v62[3] = *((uint32_t *)v61 + 3);
              ++*(uint32_t *)(v2 + 132);
            }
            while ( v55 - 1 > v59 );
          }
          goto LABEL_49;
        }
        sub_1ABFFC0(v126, &v126[4 * v41]);
        v39 = v127;
        if ( v127 > 0 )
        {
          v117 = *(float *)(v2 + 4);
          v40 = *(float *)v2;
          v111 = *(float *)(v2 + 8);
          v45 = *(float *)(v2 + 32);
          goto LABEL_33;
        }
      }
LABEL_49:
      v127 = 0;
      if ( v128 >= 0 )
        (*(void (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v126,
          16 * v128);
      goto LABEL_51;
    }
g4_m128_raw(v77) = v122;
    *(float *)g4_m128_ptr<int32_t>(v77) = (float)((float)(*(float *)&v122 * *(float *)&v122) + (float)(v123 * v123))
                            + (float)(v124 * v124);
    v78 = _mm_cvtsi128_si32(v77);
    v112 = (2130706432 - v78) & ((v78 ^ (v78 + 2139095040)) >> 31);
    v79 = (float)((float)((float)(v33 + *(float *)g4_m128_ptr<int32_t>(v77)) - v106) * 0.5)
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v77)
                                * (float)((float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v77)
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v77)
                                                                                * *(float *)&v112))
                                                                * *(float *)&v112)))
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * *(float *)&v112))
                                                * *(float *)&v112))))
                * (float)((float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v77)
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * *(float *)&v112))
                                                * *(float *)&v112)))
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v77) * *(float *)&v112)) * *(float *)&v112)));
    v80 = v96 + (float)(v123 * v79);
    v123 = v123 * v79;
    *(float *)&v122 = *(float *)&v122 * v79;
    v124 = v124 * v79;
    v81 = (float)(v32 * v79) + v97;
    v82 = (float)(v115 * v79) + v95;
    v125 = v79 * v125;
    v83 = v125 + v106;
    *(float *)(v2 + 4) = v96 + v123;
    *(float *)v2 = v81;
    *(float *)(v2 + 8) = v82;
    *(float *)(v2 + 12) = v83;
g4_m128_raw(v7) = *(unsigned int *)a2;
    *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) - v81)
                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v7) - v81))
                                   + (float)((float)(a2[1] - v80) * (float)(a2[1] - v80)))
                           + (float)((float)(a2[2] - v82) * (float)(a2[2] - v82));
    *(uint32_t *)(v2 + 12) =g4_m128_lane<int32_t>(v7, 0);
    if ( v5 == 3 )
    {
      v84 = *(float **)(v2 + 48);
      v85 = v84[4];
      v86 = v84[5];
      v87 = v84[6];
      v88 = *v84 - v85;
      v89 = v84[1] - v86;
      v90 = v85 - v84[8];
      v91 = v84[2] - v87;
      v92 = v86 - v84[9];
      v93 = v87 - v84[10];
      *(uint32_t *)(v2 + 28) = 0;
      *(float *)(v2 + 16) = (float)(v89 * v93) - (float)(v91 * v92);
      *(float *)(v2 + 20) = (float)(v91 * v90) - (float)(v93 * v88);
      *(float *)(v2 + 24) = (float)(v88 * v92) - (float)(v89 * v90);
    }
  }
LABEL_7:
  v8 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
  {
    v9 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v10 = (float)(*(float *)&v9 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&v9) * (float)(*(float *)&v9 * *(float *)&v9));
    v11 = (float)(v10 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v10) * (float)(v10 * v10));
    v8 = (float)((float)(1.5 * v11) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v11) * (float)(v11 * v11)))
       * *(float *)g4_m128_ptr<int32_t>(v7);
  }
  v12 = *(uint32_t *)(v2 + 132);
  result = v130;
  v14 = (float)(v8 + *(float *)&dword_2142C90) * (float)(v8 + *(float *)&dword_2142C90);
  *(float *)(v2 + 32) = v14;
  if ( v12 > 0 )
  {
    v113 = nullptr;
    v109 = v2;
    for ( i = nullptr; ; i = v113 )
    {
      v16 = *(uint32_t *)(v2 + 128);
      result = (float *)(16 * (uint32_t)(uintptr_t)(i) + v16);
      v17 = v12;
      if ( v14 > (float)((float)((float)((float)(*result - *(float *)v2) * (float)(*result - *(float *)v2))
                               + (float)((float)(result[1] - *(float *)(v2 + 4))
                                       * (float)(result[1] - *(float *)(v2 + 4))))
                       + (float)((float)(result[2] - *(float *)(v2 + 8)) * (float)(result[2] - *(float *)(v2 + 8)))) )
      {
        v113 = (uint32_t *)((char *)v113 + 1);
        if ( (int)(uintptr_t)(v113) >= v12 )
          return result;
      }
      else
      {
        v18 = v12 - 1;
        v130[0] = *result;
        v130[1] = result[1];
        v130[2] = result[2];
        v19 = result[3];
        *(uint32_t *)(v2 + 132) = v18;
        v130[3] = v19;
        if ( v113 != (uint32_t *)v18 )
        {
          v18 = 16 * v18 + v16;
          v20 = *(uint32_t *)v18;
          result[1] = *(float *)(v18 + 4);
          *(uint32_t *)result = v20;
          v21 = *(uint32_t *)(v18 + 8);
          result[3] = *(float *)(v18 + 12);
          *((uint32_t *)result + 2) = v21;
        }
        result = (float *)sub_1ABFFC0(v18, v130);
        v113 = (uint32_t *)((char *)v113 + 1);
        v17 = *(uint32_t *)(v109 + 132);
        if ( (int)(uintptr_t)(v113) >= v17 )
          return result;
      }
      v12 = v17;
      v14 = *(float *)(v109 + 32);
      v2 = v109;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1AC0B90  (binary VA: 0x1ac0b90)
// Original: sub_1AC0B90
// ----------------------------------------------------------------------------
float * sub_1AC0B90(int a1, int *a2, int a3, int a4)
{
  float *result;
  uint32_t *v6;
  uint32_t *v7;
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
  float *v18;
  int v19;
  int i;
  float v21; // xmm1_4
  int v22;
  float *j;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v34)) > _g4_s4 ? (16u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v35)) > _g4_s5 ? (20u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v36)) > _g4_s6 ? (24u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v37)) > _g4_s7 ? (28u + sizeof(_g4_t_v37)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);

  result = (float *)a4;
  if ( a4 <= 0 )
  {
    *(uint32_t *)(a1 + 8) = a4;
LABEL_14:
    if ( a3 > 0 )
    {
      v17 = a4;
      v18 = (float *)(a2 - 4);
      v19 = 0;
      for ( i = a1; ; v17 = *(uint32_t *)(i + 8) )
      {
        result = (float *)(i + 176 * v17 + 16);
        v21 = v18[6] - result[2];
        if ( result[8] <= (float)((float)((float)((float)(v18[4] - *result) * (float)(v18[4] - *result))
                                        + (float)((float)(v18[5] - result[1]) * (float)(v18[5] - result[1])))
                                + (float)(v21 * v21)) )
        {
          v34 = *((uint32_t *)v18 + 4);
          v35 = *((uint32_t *)v18 + 5);
          v36 = *((uint32_t *)v18 + 6);
          v37 = *((uint32_t *)v18 + 7);
          v22 = v19;
          for ( j = v18; v22 != 0; j -= 4 )
          {
            --v22;
            j[4] = *j;
            j[5] = j[1];
            j[6] = j[2];
            j[7] = j[3];
          }
          v33 = i;
          *a2 = v34;
          a2[1] = v35;
          a2[2] = v36;
          a2[3] = v37;
          result = (float *)sub_1AC0B90(v19, a4 + 1);
          i = v33;
        }
        ++v19;
        v18 += 4;
        if ( v19 == a3 )
          break;
      }
    }
    return result;
  }
  v6 = (uint32_t *)(a1 + 176 * (a4 - 1) + 16);
  v7 = (uint32_t *)(a1 + 176 * a4 + 16);
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  v7[4] = v6[4];
  v7[5] = v6[5];
  v7[6] = v6[6];
  v7[7] = v6[7];
  v8 = v7[14];
  v7[8] = v6[8];
  if ( (v8 & 0x3FFFFFFF) < v6[13] )
  {
    if ( v8 >= 0 )
      (*(void (**)(void))(hkContainerHeapAllocator::s_alloc + 20))();
    v34 = 16 * v6[13];
    v9 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           &v34);
    v16 = v34;
    v7[12] = v9;
    v7[14] = v16 / 16;
    v10 = v6[13];
    v29 = v10;
  }
  else
  {
    v9 = v7[12];
    v29 = v6[13];
    v10 = v29;
  }
  v7[13] = v10;
  v11 = v6[12];
  v28 = 16 * v10;
  v12 = 0;
  if ( v29 > 0 )
  {
    do
    {
      *(uint32_t *)(v9 + v12) = *(uint32_t *)(v11 + v12);
      *(uint32_t *)(v9 + v12 + 4) = *(uint32_t *)(v11 + v12 + 4);
      *(uint32_t *)(v9 + v12 + 8) = *(uint32_t *)(v11 + v12 + 8);
      *(uint32_t *)(v9 + v12 + 12) = *(uint32_t *)(v11 + v12 + 12);
      v12 += 16;
    }
    while ( v12 != v28 );
  }
  if ( (v7[34] & 0x3FFFFFFF) >= v6[33] )
  {
    v13 = v7[32];
    v30 = v6[33];
    v15 = v30;
  }
  else
  {
    if ( (int)v7[34] >= 0 )
      (*(void (**)(void))(hkContainerHeapAllocator::s_alloc + 20))();
    v34 = 16 * v6[33];
    v13 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            &v34);
    v14 = v34;
    v7[32] = v13;
    v7[34] = v14 / 16;
    v15 = v6[33];
    v30 = v15;
  }
  v7[33] = v15;
  v24 = v6[32];
  v25 = v15;
  v26 = 0;
  v27 = 16 * v25;
  if ( v30 > 0 )
  {
    do
    {
      *(uint32_t *)(v13 + v26) = *(uint32_t *)(v24 + v26);
      *(uint32_t *)(v13 + v26 + 4) = *(uint32_t *)(v24 + v26 + 4);
      *(uint32_t *)(v13 + v26 + 8) = *(uint32_t *)(v24 + v26 + 8);
      *(uint32_t *)(v13 + v26 + 12) = *(uint32_t *)(v24 + v26 + 12);
      v26 += 16;
    }
    while ( v26 != v27 );
  }
  sub_1ABFFC0((int)(uintptr_t)(v7), (float *)a2 - 4);
  result = (float *)a1;
  *(uint32_t *)(a1 + 8) = a4;
  if ( a4 <= 3 )
    goto LABEL_14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1AC6680  (binary VA: 0x1ac6680)
// Original: sub_1AC6680
// ----------------------------------------------------------------------------
bool * sub_1AC6680(bool *a1, int a2, int a3)
{
  *a1 = *(float *)(a3 + 4) > *(float *)(a2 + 4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1AC66A0  (binary VA: 0x1ac66a0)
// Original: sub_1AC66A0
// ----------------------------------------------------------------------------
bool * sub_1AC66A0(bool *a1, int a2, int a3)
{
  *a1 = *(float *)(a3 + 16) > *(float *)(a2 + 16);
  return a1;
}



// ============================================================================
// Address:   0x1acc460 (size: 448 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveI10hkVector4fPF6hkBoolRS1_S3_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkVector4f,hkBool (*)(hkVector4f&,hkVector4f&)>(hkVector4f *,int,int,hkBool (*)(hkVector4f&,hkVector4f&))
// ============================================================================
int hkAlgorithm::quickSortRecursive_d8fa7c(
        int a1,
        int a2,
        int a3,
        void (*a4)(char *))
{
  int i;
  int v5;
  int *v6;
  int v7;
  int v8;
  int j;
  uint32_t *v10;
  int result;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef void (*_g4_t_v26)(char *);
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int *_g4_t_v36;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v21)) > _g4_s5 ? (16u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v22)) > _g4_s6 ? (20u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v25)) > _g4_s9 ? (28u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v26)) > _g4_s10 ? (40u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (47u + sizeof(_g4_t_v27)) > _g4_s11 ? (47u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v28)) > _g4_s12 ? (48u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v29)) > _g4_s13 ? (52u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v30)) > _g4_s14 ? (56u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v31)) > _g4_s15 ? (60u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v32)) > _g4_s16 ? (64u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v33)) > _g4_s17 ? (68u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v34)) > _g4_s18 ? (72u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v35)) > _g4_s19 ? (76u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v36)) > _g4_s20 ? (88u + sizeof(_g4_t_v36)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 47u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);

  v36 = &a1;
  v19 = a1;
  v17 = a2;
  v16 = a3;
  v26 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v16;
    v6 = (int *)(16 * ((v16 + i) >> 1) + v19);
    v28 = *v6;
    v29 = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    v30 = v7;
    v31 = v8;
    v22 = (int *)(v19 + 16 * i);
    v23 = i + 1;
    for ( j = i + 1; ; j = v23 )
    {
      v20 = j - 1;
      v26(&v27);
      if ( v27 == 0 )
      {
        v10 = (uint32_t *)(16 * v5 + v19);
        while ( 1 )
        {
          v24 = v10;
          v26(&v27);
          v10 -= 4;
          if ( v27 == 0 )
            break;
          --v5;
        }
        if ( v20 > v5 )
          break;
        if ( v20 != v5 )
        {
          v12 = v24;
          v13 = v24[1];
          v35 = v24[3];
          v18 = v35;
          v21 = v13;
          v33 = v13;
          v25 = *v24;
          v32 = v25;
          v15 = *v22;
          v34 = v12[2];
          v14 = v34;
          *v12 = v15;
          v12[1] = v22[1];
          v12[2] = v22[2];
          v12[3] = v22[3];
          v22[2] = v14;
          *v22 = v25;
          v22[1] = v21;
          v22[3] = v18;
        }
        --v5;
        v20 = v23;
        if ( v5 < v23 )
          break;
      }
      ++v23;
      v22 += 4;
    }
    if ( v17 < v5 )
      break;
    result = v20;
    if ( v16 <= v20 )
      return result;
LABEL_10:
    v17 = result;
  }
  hkAlgorithm::quickSortRecursive_d8fa7c(v19, v17, v5, v26);
  result = v20;
  if ( v16 > v20 )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_1ACC620  (binary VA: 0x1acc620)
// Original: sub_1ACC620
// ----------------------------------------------------------------------------
int sub_1ACC620(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int i;
  hkVector4f::Self *v10;
  int result;
  hkVector4f::Self *v12;
  int v13;
  int v14;
  hkVector4f::Self *v15;
  int j;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  hkVector4f::Self *k;
  hkVector4f::Self *v22;
  hkVector4f::Self *v23;
  int v24;
  hkVector4f::Self *v25;
  int v26;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef hkVector4f::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v34;
  typedef hkVector4f::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef hkVector4f::Self *_g4_t_v37;
  typedef hkVector4f::Self *_g4_t_v38;
  typedef hkVector4f::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef hkVector4f::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef hkVector4f::Self *_g4_t_v43;
  typedef hkVector4f::Self *_g4_t_v44;
  typedef char _g4_t_v45;
  typedef uint32_t _g4_t_v46[4];
  typedef uint32_t _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef hkVector4f::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int *_g4_t_v52;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v34)) > _g4_s5 ? (24u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v35)) > _g4_s6 ? (24u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v36)) > _g4_s7 ? (24u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v37)) > _g4_s8 ? (32u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v38)) > _g4_s9 ? (36u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v39)) > _g4_s10 ? (36u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v40)) > _g4_s11 ? (40u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v41)) > _g4_s12 ? (40u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v42)) > _g4_s13 ? (40u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v43)) > _g4_s14 ? (44u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v44)) > _g4_s15 ? (44u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (55u + sizeof(_g4_t_v45)) > _g4_s16 ? (55u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v46)) > _g4_s17 ? (56u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v47)) > _g4_s18 ? (72u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v48)) > _g4_s19 ? (88u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v49)) > _g4_s20 ? (92u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v50)) > _g4_s21 ? (96u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v51)) > _g4_s22 ? (100u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v52)) > _g4_s23 ? (112u + sizeof(_g4_t_v52)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 55u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);

  v3 = a2;
  v52 = &a3;
  v29 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = (uint32_t *)(16 * ((v3 + v4) >> 1) + a1);
    v46[0] = *v5;
    v46[1] = v5[1];
    v6 = v5[2];
    v7 = v5[3];
    v46[2] = v6;
    v46[3] = v7;
    v30 = (hkVector4f::Self *)(v4 + 1);
    v38 = (hkVector4f::Self *)(a1 + 16 * v4);
    v40 = v4 + 1;
    v8 = v3;
    for ( i = v4 + 1; ; i = v40 )
    {
      v32 = i - 1;
      hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates((hkGeomConvexHullBuilder::Self *)&v45, v38, (hkVector4f::Self *)v46);
      if ( v45 == 0 )
      {
        v10 = (hkVector4f::Self *)(16 * v8 + a1);
        while ( 1 )
        {
          v43 = v10;
          hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates(
            (hkGeomConvexHullBuilder::Self *)&v45,
            (hkVector4f::Self *)v46,
            v10);
          v10 = (hkVector4f::Self *)((char *)v10 - 16);
          if ( v45 == 0 )
            break;
          --v8;
        }
        if ( v32 > v8 )
          break;
        if ( v32 != v8 )
        {
          v12 = v43;
          v13 = *((uint32_t *)v43 + 2);
          v44 = *((hkVector4f::Self **)v43 + 1);
          v49 = v44;
          v51 = *((uint32_t *)v12 + 3);
          v34 = v51;
          v50 = v13;
          v48 = *(uint32_t *)v12;
          v14 = v48;
          *(uint32_t *)v12 = *(uint32_t *)v38;
          *((uint32_t *)v12 + 1) = *((uint32_t *)v38 + 1);
          *((uint32_t *)v12 + 2) = *((uint32_t *)v38 + 2);
          *((uint32_t *)v12 + 3) = *((uint32_t *)v38 + 3);
          *(uint32_t *)v38 = v14;
          *((uint32_t *)v38 + 1) = (uint32_t)(uintptr_t)(v44);
          *((uint32_t *)v38 + 2) = v13;
          *((uint32_t *)v38 + 3) = v34;
        }
        --v8;
        v32 = v40;
        if ( v8 < v40 )
          break;
      }
      ++v40;
      v38 = (hkVector4f::Self *)((char *)v38 + 16);
    }
    v28 = v8;
    if ( v29 < v8 )
    {
      v15 = v30;
      for ( j = v29; ; j = (int)(uintptr_t)(v35) )
      {
        v17 = v28;
        v39 = v15;
        v18 = (uint32_t *)(a1 + 16 * ((j + v28) >> 1));
        v47[0] = *v18;
        v47[1] = v18[1];
        v19 = v18[2];
        v20 = v18[3];
        v47[2] = v19;
        v47[3] = v20;
        v37 = (hkVector4f::Self *)(a1 + 16 * j);
        for ( k = v15; ; k = v39 )
        {
          v35 = (hkVector4f::Self *)((char *)k - 1);
          hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates(
            (hkGeomConvexHullBuilder::Self *)&v45,
            v37,
            (hkVector4f::Self *)v47);
          if ( v45 == 0 )
          {
            v22 = (hkVector4f::Self *)(16 * v17 + a1);
            while ( 1 )
            {
              v41 = v22;
              hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates(
                (hkGeomConvexHullBuilder::Self *)&v45,
                (hkVector4f::Self *)v47,
                v22);
              v22 = (hkVector4f::Self *)((char *)v22 - 16);
              if ( v45 == 0 )
                break;
              --v17;
            }
            if ( (int)(uintptr_t)(v35) > v17 )
              break;
            if ( v35 != (hkVector4f::Self *)v17 )
            {
              v23 = v41;
              v24 = *((uint32_t *)v41 + 2);
              v51 = *((uint32_t *)v41 + 3);
              v31 = v51;
              v36 = v24;
              v50 = v24;
              v42 = *(uint32_t *)v41;
              v48 = v42;
              v26 = *(uint32_t *)v37;
              v49 = *((hkVector4f::Self **)v23 + 1);
              v25 = v49;
              *(uint32_t *)v23 = v26;
              *((uint32_t *)v23 + 1) = *((uint32_t *)v37 + 1);
              *((uint32_t *)v23 + 2) = *((uint32_t *)v37 + 2);
              *((uint32_t *)v23 + 3) = *((uint32_t *)v37 + 3);
              *((uint32_t *)v37 + 1) = (uint32_t)(uintptr_t)(v25);
              *(uint32_t *)v37 = v42;
              *((uint32_t *)v37 + 2) = v36;
              *((uint32_t *)v37 + 3) = v31;
            }
            --v17;
            v35 = v39;
            if ( v17 < (int)(uintptr_t)(v39) )
              break;
          }
          v39 = (hkVector4f::Self *)((char *)v39 + 1);
          v37 = (hkVector4f::Self *)((char *)v37 + 16);
        }
        if ( v29 < v17 )
          hkAlgorithm::quickSortRecursive_d8fa7c(
            a1,
            v29,
            v17,
            (void (*)(char *))hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates);
        if ( v28 <= (int)(uintptr_t)(v35) )
          break;
        v29 = (int)(uintptr_t)(v35);
        v15 = (hkVector4f::Self *)((char *)v35 + 1);
      }
    }
    result = v32;
    if ( a2 <= v32 )
      break;
    v29 = v32;
    v4 = v32;
    v3 = a2;
  }
  return result;
}


