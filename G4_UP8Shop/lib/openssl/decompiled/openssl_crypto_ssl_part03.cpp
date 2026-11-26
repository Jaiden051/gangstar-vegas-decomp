#include "Core/Utils/DecompTypes.h"
#include "openssl_crypto_ssl_part03.h"

// ----------------------------------------------------------------------------
// Function: ERR_load_strings  (binary VA: 0x19afe60)
// Original: ERR_load_strings
// ----------------------------------------------------------------------------
int ERR_load_strings(int a1, int *a2)
{
  ERR_load_ERR_strings();
  return sub_19AF1F0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ERR_unload_strings  (binary VA: 0x19afea0)
// Original: ERR_unload_strings
// ----------------------------------------------------------------------------
int ERR_unload_strings(int a1, int *a2)
{
  int result;
  int *v3;
  int *v4;

  result = *a2;
  if ( *a2 != 0 )
  {
    v3 = a2;
    do
    {
      if ( a1 != 0 )
        *v3 = (a1 << 24) | result;
      v4 = v3;
      v3 += 2;
      (*(void (**)(int *))(dword_2140620 + 16))(v4);
      result = *v3;
    }
    while ( *v3 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_free_strings  (binary VA: 0x19aff10)
// Original: ERR_free_strings
// ----------------------------------------------------------------------------
int ERR_free_strings()
{
  sub_19AF690();
  return (*(int (**)(void))(dword_2140620 + 4))();
}

// ----------------------------------------------------------------------------
// Function: ERR_get_string_table  (binary VA: 0x19aff40)
// Original: ERR_get_string_table
// ----------------------------------------------------------------------------
int ERR_get_string_table()
{
  sub_19AF690();
  return (*(int (**)(uint32_t))dword_2140620)(0);
}

// ----------------------------------------------------------------------------
// Function: ERR_get_err_state_table  (binary VA: 0x19aff70)
// Original: ERR_get_err_state_table
// ----------------------------------------------------------------------------
int ERR_get_err_state_table()
{
  sub_19AF690();
  return (*(int (**)(uint32_t))(dword_2140620 + 20))(0);
}

// ----------------------------------------------------------------------------
// Function: ERR_release_err_state_table  (binary VA: 0x19affa0)
// Original: ERR_release_err_state_table
// ----------------------------------------------------------------------------
int ERR_release_err_state_table(int a1)
{
  sub_19AF690();
  return (*(int (**)(int))(dword_2140620 + 24))(a1);
}

// ----------------------------------------------------------------------------
// Function: ERR_lib_error_string  (binary VA: 0x19affd0)
// Original: ERR_lib_error_string
// ----------------------------------------------------------------------------
int ERR_lib_error_string(int a1)
{
  int v1;
  unsigned int v3[5];

  sub_19AF690();
  v3[0] = a1 & 0xFF000000;
  v1 = (*(int (**)(unsigned int *))(dword_2140620 + 8))(v3);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: ERR_func_error_string  (binary VA: 0x19b0020)
// Original: ERR_func_error_string
// ----------------------------------------------------------------------------
int ERR_func_error_string(int a1)
{
  int v1;
  unsigned int v3[5];

  sub_19AF690();
  v3[0] = a1 & 0xFFFFF000;
  v1 = (*(int (**)(unsigned int *))(dword_2140620 + 8))(v3);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: ERR_reason_error_string  (binary VA: 0x19b0070)
// Original: ERR_reason_error_string
// ----------------------------------------------------------------------------
int ERR_reason_error_string(int a1)
{
  int v1;
  int result;
  uint32_t v3[2];

  sub_19AF690();
  v3[0] = a1 & 0xFF000FFF;
  v1 = (*(int (**)(uint32_t *))(dword_2140620 + 8))(v3);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 4);
  v3[0] = a1 & 0xFFF;
  v1 = (*(int (**)(uint32_t *))(dword_2140620 + 8))(v3);
  result = 0;
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_error_string_n  (binary VA: 0x19b00f0)
// Original: ERR_error_string_n
// ----------------------------------------------------------------------------
const char * ERR_error_string_n(unsigned int a1, char *s, unsigned int a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  const char *result;
  char *v8;
  char *v9;
  typedef uint8_t *_g4_t_v10;
  typedef uint8_t *_g4_t_v11;
  typedef uint8_t _g4_t_v12[64];
  typedef uint8_t _g4_t_v13[64];
  typedef uint8_t _g4_t_v14[76];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v13)) > _g4_s3 ? (80u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (144u + sizeof(_g4_t_v14)) > _g4_s4 ? (144u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 80u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 144u);

  v3 = (uint8_t *)ERR_lib_error_string(a1);
  v4 = (uint8_t *)ERR_func_error_string(a1);
  v5 = ERR_reason_error_string(a1);
  v6 = (uint8_t *)v5;
  if ( v3 == nullptr )
  {
    v10 = (uint8_t *)v5;
    BIO_snprintf(v12, 64, "lib(%lu)", HIBYTE(a1));
    v6 = v10;
  }
  if ( v4 == nullptr )
  {
    v11 = v6;
    BIO_snprintf(v13, 64, "func(%lu)", (a1 >> 12) & 0xFFF);
    v6 = v11;
  }
  if ( v6 == nullptr )
  {
    BIO_snprintf(v14, 64, "reason(%lu)", a1 & 0xFFF);
    v6 = v14;
  }
  if ( v4 == nullptr )
    v4 = v13;
  if ( v3 == nullptr )
    v3 = v12;
  BIO_snprintf(s, a3, "error:%08lX:%s:%s:%s", a1, v3, v4, v6);
  result = (const char *)strlen(s);
  if ( result == (const char *)(a3 - 1) && a3 > 4 )
  {
    result = s;
    v8 = &s[a3 - 5];
    do
    {
      v9 = (char *)(strchr(result, 58));
      if ( v9 == nullptr || v9 > v8 )
      {
        *v8 = 58;
        v9 = v8;
      }
      ++v8;
      result = v9 + 1;
    }
    while ( v8 != &s[a3 - 1] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_error_string  (binary VA: 0x19b02f0)
// Original: ERR_error_string
// ----------------------------------------------------------------------------
char * ERR_error_string(unsigned int a1, char *a2)
{
  char *v2;

  v2 = a2;
  if ( a2 == nullptr )
    v2 = (char *)&unk_2141A20;
  ERR_error_string_n(a1, v2, 0x100u);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ERR_remove_thread_state  (binary VA: 0x19b0340)
// Original: ERR_remove_thread_state
// ----------------------------------------------------------------------------
int ERR_remove_thread_state(int a1, int a2, uint32_t *a3)
{
  uint32_t v4[101];

  if ( a3 != nullptr )
    CRYPTO_THREADID_cpy(v4, a3);
  else
    CRYPTO_THREADID_current(a1, a2, v4);
  sub_19AF690();
  return (*(int (**)(uint32_t *))(dword_2140620 + 36))(v4);
}

// ----------------------------------------------------------------------------
// Function: ERR_remove_state  (binary VA: 0x19b03c0)
// Original: ERR_remove_state
// ----------------------------------------------------------------------------
int ERR_remove_state(int a1, int a2)
{
  return ERR_remove_thread_state(a1, a2, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_get_state  (binary VA: 0x19b03f0)
// Original: ERR_get_state
// ----------------------------------------------------------------------------
void * ERR_get_state()
{
  int v0;
  int v1;
  void *v2;
  uint8_t *v4;
  int v5;
  int i;
  int v7;
  typedef uint32_t _g4_t_v8[2];
  typedef uint32_t _g4_t_v9[103];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  sub_19AF690();
  CRYPTO_THREADID_current(v1, v0, v8);
  CRYPTO_THREADID_cpy(v9, v8);
  v2 = (void *)(*(int (**)(uint32_t *))(dword_2140620 + 28))(v9);
  if ( v2 == nullptr )
  {
    v4 = CRYPTO_malloc(400, (int)(uintptr_t)(&unk_1B15112), 0);
    v5 = (int)(uintptr_t)(v4);
    v2 = &unk_2141B20;
    if ( v4 != nullptr )
    {
      CRYPTO_THREADID_cpy(v4, v8);
      *(uint32_t *)(v5 + 392) = 0;
      *(uint32_t *)(v5 + 396) = 0;
      for ( i = 0; i != 16; ++i )
      {
        *(uint32_t *)(v5 + 4 * i + 136) = 0;
        *(uint32_t *)(v5 + 4 * i + 200) = 0;
      }
      v7 = (*(int (**)(int))(dword_2140620 + 32))(v5);
      v2 = (void *)(*(int (**)(int))(dword_2140620 + 28))(v5);
      if ( v2 == (void *)v5 )
      {
        if ( v7 != 0 )
          sub_19AF260(v7);
      }
      else
      {
        v2 = &unk_2141B20;
        sub_19AF260(v5);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ERR_peek_last_error_line_data  (binary VA: 0x19b0740)
// Original: ERR_peek_last_error_line_data
// ----------------------------------------------------------------------------
int ERR_peek_last_error_line_data(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  return sub_19B0530(0, 1, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ERR_peek_last_error_line  (binary VA: 0x19b0750)
// Original: ERR_peek_last_error_line
// ----------------------------------------------------------------------------
int ERR_peek_last_error_line(uint32_t *a1, uint32_t *a2)
{
  return sub_19B0530(0, 1, a1, a2, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_peek_last_error  (binary VA: 0x19b0790)
// Original: ERR_peek_last_error
// ----------------------------------------------------------------------------
int ERR_peek_last_error()
{
  return sub_19B0530(0, 1, nullptr, nullptr, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_peek_error_line_data  (binary VA: 0x19b07d0)
// Original: ERR_peek_error_line_data
// ----------------------------------------------------------------------------
int ERR_peek_error_line_data(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  return sub_19B0530(0, 0, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ERR_peek_error_line  (binary VA: 0x19b07e0)
// Original: ERR_peek_error_line
// ----------------------------------------------------------------------------
int ERR_peek_error_line(uint32_t *a1, uint32_t *a2)
{
  return sub_19B0530(0, 0, a1, a2, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_peek_error  (binary VA: 0x19b0820)
// Original: ERR_peek_error
// ----------------------------------------------------------------------------
int ERR_peek_error()
{
  return sub_19B0530(0, 0, nullptr, nullptr, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_get_error_line_data  (binary VA: 0x19b0860)
// Original: ERR_get_error_line_data
// ----------------------------------------------------------------------------
int ERR_get_error_line_data(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  return sub_19B0530(1, 0, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ERR_get_error_line  (binary VA: 0x19b0870)
// Original: ERR_get_error_line
// ----------------------------------------------------------------------------
int ERR_get_error_line(uint32_t *a1, uint32_t *a2)
{
  return sub_19B0530(1, 0, a1, a2, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_get_error  (binary VA: 0x19b08b0)
// Original: ERR_get_error
// ----------------------------------------------------------------------------
int ERR_get_error()
{
  return sub_19B0530(1, 0, nullptr, nullptr, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_clear_error  (binary VA: 0x19b08f0)
// Original: ERR_clear_error
// ----------------------------------------------------------------------------
uint32_t * ERR_clear_error()
{
  int v0;
  uint32_t *result;
  uint32_t *v2;
  uint32_t *v3;
  void *v4;

  v0 = 0;
  result = (uint32_t *)(ERR_get_state());
  v2 = result;
  v3 = result;
  do
  {
    v4 = (void *)v3[34];
    v3[2] = 0;
    v3[18] = 0;
    if ( v4 != nullptr && (v3[50] & 1) != 0 )
    {
      result = (uint32_t *)CRYPTO_free(v4);
      v3[34] = 0;
    }
    ++v0;
    v3[50] = 0;
    v3[66] = 0;
    v3[82] = -1;
    ++v3;
  }
  while ( v0 != 16 );
  v2[99] = 0;
  v2[98] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_put_error  (binary VA: 0x19b0990)
// Original: ERR_put_error
// ----------------------------------------------------------------------------
uint32_t * ERR_put_error(int a1, int16_t a2, int16_t a3, int a4, int a5)
{
  uint32_t *result;
  int v6;
  bool v7;
  int v8;
  void *v9;
  uint32_t *v10;

  result = (uint32_t *)(ERR_get_state());
  v6 = (result[98] + 1) % 16;
  v7 = v6 == result[99];
  v8 = v6;
  result[98] = v6;
  if ( v7 )
    result[99] = (v6 + 1) % 16;
  result[v6 + 2] = 0;
  result[v6 + 18] = (a1 << 24) | a3 & 0xFFF | ((a2 & 0xFFF) << 12);
  result[v6 + 66] = a4;
  result[v6 + 82] = a5;
  v9 = (void *)result[v6 + 34];
  if ( v9 != nullptr && (result[v6 + 50] & 1) != 0 )
  {
    v10 = result;
    CRYPTO_free(v9);
    result = v10;
    v8 = v10[98];
    v10[v8 + 34] = 0;
  }
  result[v8 + 50] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_get_next_error_library  (binary VA: 0x19b0aa0)
// Original: ERR_get_next_error_library
// ----------------------------------------------------------------------------
int ERR_get_next_error_library()
{
  sub_19AF690();
  return (*(int (**)(void))(dword_2140620 + 40))();
}

// ----------------------------------------------------------------------------
// Function: ERR_set_error_data  (binary VA: 0x19b0ad0)
// Original: ERR_set_error_data
// ----------------------------------------------------------------------------
uint32_t * ERR_set_error_data(int a1, int a2)
{
  uint32_t *result;
  int v3;
  int v4;
  int v5;
  void *v6;
  uint32_t *v7;

  result = (uint32_t *)(ERR_get_state());
  v3 = result[98];
  if ( v3 == 0 )
    v3 = 15;
  v4 = v3 + 32;
  v5 = v3 + 48;
  v6 = (void *)result[v3 + 34];
  if ( v6 != nullptr && (result[v5 + 2] & 1) != 0 )
  {
    v7 = result;
    CRYPTO_free(v6);
    result = v7;
  }
  result[v4 + 2] = a1;
  result[v5 + 2] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_add_error_data  (binary VA: 0x19b0b50)
// Original: ERR_add_error_data
// ----------------------------------------------------------------------------
uint8_t * ERR_add_error_data(int a1, ...)
{
  uint8_t *result;
  va_list v2;
  int v3;
  const char **v4;
  char *v5;
  uint8_t *v6;
  int i;
  int v8;
  void *v9;
  va_list va;

  va_start(va, a1);
  result = CRYPTO_malloc(81, (int)(uintptr_t)(&unk_1B15112), 0);
  v9 = result;
  if ( result != nullptr )
  {
    *result = 0;
    va_copy(v2, va);
    if ( a1 > 0 )
    {
      v8 = 80;
      v3 = 0;
      for ( i = 0; i != a1; ++i )
      {
        v5 = va_arg(v2, char *);
        if ( v5 != nullptr )
        {
          v3 += strlen(v5);
          if ( v3 > v8 )
          {
            v6 = CRYPTO_realloc(v9, v3 + 21, (int)(uintptr_t)(&unk_1B15112), 0);
            if ( v6 == nullptr )
              return (uint8_t *)CRYPTO_free(v9);
            v9 = v6;
            v8 = v3 + 20;
          }
          BUF_strlcat((char *)v9, v5, v8 + 1);
        }
      }
    }
    return (uint8_t *)(ERR_set_error_data((int)(uintptr_t)(v9), 3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_set_mark  (binary VA: 0x19b0c70)
// Original: ERR_set_mark
// ----------------------------------------------------------------------------
char ERR_set_mark()
{
  uint32_t *state;
  int v1;
  char result;

  state = (uint32_t *)(ERR_get_state());
  v1 = state[98];
  result = 0;
  if ( state[99] != v1 )
  {
    state[v1 + 2] |= 1u;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_pop_to_mark  (binary VA: 0x19b0cb0)
// Original: ERR_pop_to_mark
// ----------------------------------------------------------------------------
int ERR_pop_to_mark()
{
  uint32_t *state;
  int v1;
  int v2;
  int v3;
  void *v4;
  int v5;

  state = (uint32_t *)(ERR_get_state());
  v1 = state[98];
  v2 = state[99];
  while ( 1 )
  {
    if ( v2 == v1 )
      return 0;
    v3 = state[v1 + 2];
    if ( (v3 & 1) != 0 )
      break;
    v4 = (void *)state[v1 + 34];
    state[v1 + 2] = 0;
    state[v1 + 18] = 0;
    v5 = v1 + 48;
    if ( v4 != nullptr && (state[v5 + 2] & 1) != 0 )
    {
      CRYPTO_free(v4);
      v1 = state[98];
      state[v1 + 34] = 0;
      v5 = v1 + 48;
      v2 = state[99];
    }
    state[v5 + 2] = 0;
    state[v1 + 66] = 0;
    state[v1-- + 82] = -1;
    state[98] = v1;
    if ( v1 == -1 )
    {
      state[98] = 15;
      v1 = 15;
    }
  }
  state[v1 + 2] = v3 & 0xFFFFFFFE;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_crypto_strings  (binary VA: 0x19b0da0)
// Original: ERR_load_crypto_strings
// ----------------------------------------------------------------------------
int ERR_load_crypto_strings()
{
  ERR_load_ERR_strings();
  ERR_load_BN_strings();
  ERR_load_RSA_strings();
  ERR_load_DH_strings();
  ERR_load_EVP_strings();
  ERR_load_BUF_strings();
  ERR_load_OBJ_strings();
  ERR_load_PEM_strings();
  ERR_load_DSA_strings();
  ERR_load_X509_strings();
  ERR_load_ASN1_strings();
  ERR_load_CONF_strings();
  ERR_load_CRYPTO_strings();
  ERR_load_COMP_strings();
  ERR_load_EC_strings();
  ERR_load_ECDSA_strings();
  ERR_load_ECDH_strings();
  ERR_load_BIO_strings();
  ERR_load_PKCS7_strings();
  ERR_load_X509V3_strings();
  ERR_load_PKCS12_strings();
  ERR_load_RAND_strings();
  ERR_load_DSO_strings();
  ERR_load_TS_strings();
  ERR_load_ENGINE_strings();
  ERR_load_OCSP_strings();
  ERR_load_UI_strings();
  ERR_load_CMS_strings();
  return ERR_load_COMP_strings();
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_init  (binary VA: 0x19b17e0)
// Original: EVP_MD_CTX_init
// ----------------------------------------------------------------------------
int EVP_MD_CTX_init(uint8_t *a1)
{
  uint16_t *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  v1 = (uint16_t *)(a1);
  v2 = 24;
  if ( ((uint8_t)(uintptr_t)a1 & 1) != 0 )
  {
    *a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v2) = 23;
    if ( ((unsigned int)(uintptr_t)(a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  result = 0;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_create  (binary VA: 0x19b1840)
// Original: EVP_MD_CTX_create
// ----------------------------------------------------------------------------
uint8_t * EVP_MD_CTX_create()
{
  uint8_t *v0;
  uint8_t *v1;

  v0 = CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = v0;
  if ( v0 != nullptr )
    EVP_MD_CTX_init(v0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestInit_ex  (binary VA: 0x19b18a0)
// Original: EVP_DigestInit_ex
// ----------------------------------------------------------------------------
int EVP_DigestInit_ex(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *digest_engine;
  int v5;
  uint32_t *digest;
  uint32_t *v7;
  bool v8;
  int v9;
  int v10;
  int result;
  uint8_t *v12;

  v3 = a2;
  digest_engine = a3;
  EVP_MD_CTX_clear_flags(a1, 2);
  v5 = *(uint32_t *)(a1 + 4);
  if ( v5 != 0 && *(uint32_t *)a1 != 0 )
  {
    if ( a2 == nullptr || *a2 == **(uint32_t **)a1 )
      goto LABEL_16;
    goto LABEL_5;
  }
  if ( a2 != nullptr )
  {
    if ( v5 == 0 )
    {
LABEL_6:
      if ( a3 != nullptr )
      {
        if ( ENGINE_init(a3) == 0 )
        {
          ERR_put_error(6, 128, 134, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
      else
      {
        digest_engine = (uint32_t *)ENGINE_get_digest_engine(*a2);
        if ( digest_engine == nullptr )
        {
          *(uint32_t *)(a1 + 4) = 0;
          goto LABEL_10;
        }
      }
      digest = (uint32_t *)ENGINE_get_digest(digest_engine, *a2);
      if ( digest == nullptr )
      {
        ERR_put_error(6, 128, 134, (int)(uintptr_t)(&unk_1B15112), 0);
        ENGINE_finish(digest_engine);
        return 0;
      }
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(digest_engine);
      v3 = digest;
LABEL_10:
      v7 = *(uint32_t **)a1;
      if ( *(uint32_t **)a1 == v3 )
        goto LABEL_16;
      if ( v7 == nullptr )
        goto LABEL_14;
      goto LABEL_12;
    }
LABEL_5:
    ENGINE_finish(*(uint32_t **)(a1 + 4));
    goto LABEL_6;
  }
  v7 = *(uint32_t **)a1;
  if ( *(uint32_t *)a1 == 0 )
  {
    ERR_put_error(6, 128, 139, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
LABEL_12:
  if ( v7[17] != 0 )
    CRYPTO_free(*(void **)(a1 + 12));
LABEL_14:
  v8 = (*(uint8_t *)(a1 + 9) & 1) == 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  if ( v8 && v3[17] != 0 )
  {
    *(uint32_t *)(a1 + 20) = v3[5];
    v12 = CRYPTO_malloc(v3[17], (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v12);
    if ( v12 == nullptr )
    {
      ERR_put_error(6, 128, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
LABEL_16:
  v9 = *(uint32_t *)(a1 + 16);
  if ( v9 == 0 || (v10 = EVP_PKEY_CTX_ctrl(v9, -1, 248, 7, 0, a1)) == -2 )
  {
    result = 1;
    if ( (*(uint8_t *)(a1 + 9) & 1) != 0 )
      return result;
    return G4_VCALL<int>(a1, 16);
  }
  result = 0;
  if ( v10 > 0 )
  {
    result = 1;
    if ( (*(uint8_t *)(a1 + 9) & 1) == 0 )
      return G4_VCALL<int>(a1, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestInit  (binary VA: 0x19b1b50)
// Original: EVP_DigestInit
// ----------------------------------------------------------------------------
int EVP_DigestInit(uint8_t *a1, uint32_t *a2)
{
  EVP_MD_CTX_init(a1);
  return EVP_DigestInit_ex((int)(uintptr_t)(a1), a2, nullptr);
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestUpdate  (binary VA: 0x19b1ba0)
// Original: EVP_DigestUpdate
// ----------------------------------------------------------------------------
int EVP_DigestUpdate(int a1, int a2, int a3)
{
  return (*(int (**)(int, int, int))(a1 + 20))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestFinal_ex  (binary VA: 0x19b1bd0)
// Original: EVP_DigestFinal_ex
// ----------------------------------------------------------------------------
int EVP_DigestFinal_ex(void **a1, int a2, uint32_t *a3)
{
  int v3;
  uint32_t *v4;
  void (*v5)(void **);

  if ( *((int *)*a1 + 2) > 64 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->digest->md_size <= EVP_MAX_MD_SIZE");
  v3 = (*((int (**)(void **, int))*a1 + 6))(a1, a2);
  if ( a3 != nullptr )
    *a3 = *((uint32_t *)*a1 + 2);
  v4 = (uint32_t *)(*a1);
  v5 = *((void (**)(void **))*a1 + 8);
  if ( v5 != nullptr )
  {
    v5(a1);
    EVP_MD_CTX_set_flags(a1, 2);
    v4 = (uint32_t *)(*a1);
  }
  memset(a1[3], 0, v4[17]);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_cleanup  (binary VA: 0x19b1ca0)
// Original: EVP_MD_CTX_cleanup
// ----------------------------------------------------------------------------
int EVP_MD_CTX_cleanup(int a1)
{
  uint16_t *v1;
  int v2;
  unsigned int v3;
  uint16_t *v4;

  v1 = (uint16_t *)a1;
  v2 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( *(uint32_t *)(v2 + 32) == 0 )
      goto LABEL_19;
    if ( EVP_MD_CTX_test_flags(a1, 2) == 0 )
      G4_VCALL<void>(a1, 32);
    v2 = *(uint32_t *)a1;
    if ( *(uint32_t *)a1 != 0 )
    {
LABEL_19:
      if ( *(uint32_t *)(v2 + 68) != 0 && *(uint32_t *)(a1 + 12) != 0 && EVP_MD_CTX_test_flags(a1, 4) == 0 )
      {
        OPENSSL_cleanse(*(uint8_t **)(a1 + 12), *(uint32_t *)(*(uint32_t *)a1 + 68));
        CRYPTO_free(*(void **)(a1 + 12));
      }
    }
  }
  if ( *(uint32_t *)(a1 + 16) != 0 )
    EVP_PKEY_CTX_free(*(void **)(a1 + 16));
  if ( *(uint32_t *)(a1 + 4) != 0 )
    ENGINE_finish(*(uint32_t **)(a1 + 4));
  v3 = 24;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v3) = 23;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_13;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_13;
  }
  *v1 = 0;
  v3 -= 2;
  ++v1;
LABEL_13:
  memset(v1, 0, 4 * (v3 >> 2));
  v4 = &v1[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v4++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_destroy  (binary VA: 0x19b1dd0)
// Original: EVP_MD_CTX_destroy
// ----------------------------------------------------------------------------
int EVP_MD_CTX_destroy(void *a1)
{
  EVP_MD_CTX_cleanup((int)(uintptr_t)(a1));
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: EVP_Digest  (binary VA: 0x19b1e10)
// Original: EVP_Digest
// ----------------------------------------------------------------------------
bool EVP_Digest(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  bool v6;
  void *v8[6];

  v6 = false;
  EVP_MD_CTX_init(v8);
  EVP_MD_CTX_set_flags(v8, 1);
  if ( EVP_DigestInit_ex((int)(uintptr_t)(v8), a5, a6) != 0 && EVP_DigestUpdate((int)(uintptr_t)(v8), a1, a2) != 0 )
    v6 = EVP_DigestFinal_ex(v8, a3, a4) != 0;
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v8));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_copy_ex  (binary VA: 0x19b1ec0)
// Original: EVP_MD_CTX_copy_ex
// ----------------------------------------------------------------------------
int EVP_MD_CTX_copy_ex(int *a1, int *a2)
{
  int v2;
  void *dest;
  int v4;
  int v5;
  int v6;
  int (*v7)(int *, int *);
  int result;
  uint8_t *v9;

  if ( a2 == nullptr || (v2 = *a2, *a2 == 0) )
  {
    ERR_put_error(6, 110, 111, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a2[1] != 0 )
  {
    if ( ENGINE_init((uint32_t *)a2[1]) == 0 )
    {
      ERR_put_error(6, 110, 38, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v2 = *a2;
  }
  dest = nullptr;
  if ( *a1 == v2 )
  {
    dest = (void *)a1[3];
    EVP_MD_CTX_set_flags(a1, 4);
  }
  EVP_MD_CTX_cleanup((int)(uintptr_t)(a1));
  v4 = *a2;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  if ( a2[3] != 0 )
  {
    v5 = *(uint32_t *)(v4 + 68);
    if ( v5 != 0 )
    {
      if ( dest != nullptr )
      {
        a1[3] = (int)(uintptr_t)(dest);
      }
      else
      {
        v9 = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
        a1[3] = (int)(uintptr_t)(v9);
        dest = v9;
        if ( v9 == nullptr )
        {
          ERR_put_error(6, 110, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v4 = *a1;
      }
      memcpy(dest, (const void *)a2[3], *(uint32_t *)(v4 + 68));
    }
  }
  a1[5] = a2[5];
  if ( a2[4] != 0 && (v6 = (int)(uintptr_t)(EVP_PKEY_CTX_dup(a2[4])), a1[4] = v6, v6 == 0) )
  {
    EVP_MD_CTX_cleanup((int)(uintptr_t)(a1));
    return 0;
  }
  else
  {
    v7 = *(int (**)(int *, int *))(*a1 + 28);
    result = 1;
    if ( v7 != nullptr )
      return v7(a1, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_copy  (binary VA: 0x19b20d0)
// Original: EVP_MD_CTX_copy
// ----------------------------------------------------------------------------
int EVP_MD_CTX_copy(int *a1, int *a2)
{
  EVP_MD_CTX_init(a1);
  return EVP_MD_CTX_copy_ex(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestFinal  (binary VA: 0x19b2110)
// Original: EVP_DigestFinal
// ----------------------------------------------------------------------------
int EVP_DigestFinal(void **a1, int a2, uint32_t *a3)
{
  int v3;

  v3 = EVP_DigestFinal_ex(a1, a2, a3);
  EVP_MD_CTX_cleanup((int)(uintptr_t)(a1));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_128_cbc  (binary VA: 0x19b2f50)
// Original: EVP_aes_128_cbc
// ----------------------------------------------------------------------------
void * EVP_aes_128_cbc()
{
  return &unk_20AC820;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_128_cfb128  (binary VA: 0x19b2f70)
// Original: EVP_aes_128_cfb128
// ----------------------------------------------------------------------------
void * EVP_aes_128_cfb128()
{
  return &unk_20AC860;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_128_ofb  (binary VA: 0x19b2f90)
// Original: EVP_aes_128_ofb
// ----------------------------------------------------------------------------
void * EVP_aes_128_ofb()
{
  return &unk_20AC8A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_128_ecb  (binary VA: 0x19b2fb0)
// Original: EVP_aes_128_ecb
// ----------------------------------------------------------------------------
void * EVP_aes_128_ecb()
{
  return &unk_20AC8E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_192_cbc  (binary VA: 0x19b2fd0)
// Original: EVP_aes_192_cbc
// ----------------------------------------------------------------------------
void * EVP_aes_192_cbc()
{
  return &unk_20AC920;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_192_cfb128  (binary VA: 0x19b2ff0)
// Original: EVP_aes_192_cfb128
// ----------------------------------------------------------------------------
void * EVP_aes_192_cfb128()
{
  return &unk_20AC960;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_192_ofb  (binary VA: 0x19b3010)
// Original: EVP_aes_192_ofb
// ----------------------------------------------------------------------------
void * EVP_aes_192_ofb()
{
  return &unk_20AC9A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_192_ecb  (binary VA: 0x19b3030)
// Original: EVP_aes_192_ecb
// ----------------------------------------------------------------------------
void * EVP_aes_192_ecb()
{
  return &unk_20AC9E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_256_cbc  (binary VA: 0x19b3050)
// Original: EVP_aes_256_cbc
// ----------------------------------------------------------------------------
void * EVP_aes_256_cbc()
{
  return &unk_20ACA20;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_256_cfb128  (binary VA: 0x19b3070)
// Original: EVP_aes_256_cfb128
// ----------------------------------------------------------------------------
void * EVP_aes_256_cfb128()
{
  return &unk_20ACA60;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_256_ofb  (binary VA: 0x19b3090)
// Original: EVP_aes_256_ofb
// ----------------------------------------------------------------------------
void * EVP_aes_256_ofb()
{
  return &unk_20ACAA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_256_ecb  (binary VA: 0x19b30b0)
// Original: EVP_aes_256_ecb
// ----------------------------------------------------------------------------
void * EVP_aes_256_ecb()
{
  return &unk_20ACAE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_128_cfb1  (binary VA: 0x19b30d0)
// Original: EVP_aes_128_cfb1
// ----------------------------------------------------------------------------
void * EVP_aes_128_cfb1()
{
  return &unk_20ACB20;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_192_cfb1  (binary VA: 0x19b30f0)
// Original: EVP_aes_192_cfb1
// ----------------------------------------------------------------------------
void * EVP_aes_192_cfb1()
{
  return &unk_20ACB60;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_256_cfb1  (binary VA: 0x19b3110)
// Original: EVP_aes_256_cfb1
// ----------------------------------------------------------------------------
void * EVP_aes_256_cfb1()
{
  return &unk_20ACBA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_128_cfb8  (binary VA: 0x19b3130)
// Original: EVP_aes_128_cfb8
// ----------------------------------------------------------------------------
void * EVP_aes_128_cfb8()
{
  return &unk_20ACBE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_192_cfb8  (binary VA: 0x19b3150)
// Original: EVP_aes_192_cfb8
// ----------------------------------------------------------------------------
void * EVP_aes_192_cfb8()
{
  return &unk_20ACC20;
}

// ----------------------------------------------------------------------------
// Function: EVP_aes_256_cfb8  (binary VA: 0x19b3170)
// Original: EVP_aes_256_cfb8
// ----------------------------------------------------------------------------
void * EVP_aes_256_cfb8()
{
  return &unk_20ACC60;
}

// ----------------------------------------------------------------------------
// Function: EVP_bf_cbc  (binary VA: 0x19b34f0)
// Original: EVP_bf_cbc
// ----------------------------------------------------------------------------
void * EVP_bf_cbc()
{
  return &unk_20ACCA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_bf_cfb64  (binary VA: 0x19b3510)
// Original: EVP_bf_cfb64
// ----------------------------------------------------------------------------
void * EVP_bf_cfb64()
{
  return &unk_20ACCE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_bf_ofb  (binary VA: 0x19b3530)
// Original: EVP_bf_ofb
// ----------------------------------------------------------------------------
void * EVP_bf_ofb()
{
  return &unk_20ACD20;
}

// ----------------------------------------------------------------------------
// Function: EVP_bf_ecb  (binary VA: 0x19b3550)
// Original: EVP_bf_ecb
// ----------------------------------------------------------------------------
void * EVP_bf_ecb()
{
  return &unk_20ACD60;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_128_cbc  (binary VA: 0x19b4310)
// Original: EVP_camellia_128_cbc
// ----------------------------------------------------------------------------
void * EVP_camellia_128_cbc()
{
  return &unk_20ACDA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_128_cfb128  (binary VA: 0x19b4330)
// Original: EVP_camellia_128_cfb128
// ----------------------------------------------------------------------------
void * EVP_camellia_128_cfb128()
{
  return &unk_20ACDE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_128_ofb  (binary VA: 0x19b4350)
// Original: EVP_camellia_128_ofb
// ----------------------------------------------------------------------------
void * EVP_camellia_128_ofb()
{
  return &unk_20ACE20;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_128_ecb  (binary VA: 0x19b4370)
// Original: EVP_camellia_128_ecb
// ----------------------------------------------------------------------------
void * EVP_camellia_128_ecb()
{
  return &unk_20ACE60;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_192_cbc  (binary VA: 0x19b4390)
// Original: EVP_camellia_192_cbc
// ----------------------------------------------------------------------------
void * EVP_camellia_192_cbc()
{
  return &unk_20ACEA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_192_cfb128  (binary VA: 0x19b43b0)
// Original: EVP_camellia_192_cfb128
// ----------------------------------------------------------------------------
void * EVP_camellia_192_cfb128()
{
  return &unk_20ACEE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_192_ofb  (binary VA: 0x19b43d0)
// Original: EVP_camellia_192_ofb
// ----------------------------------------------------------------------------
void * EVP_camellia_192_ofb()
{
  return &unk_20ACF20;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_192_ecb  (binary VA: 0x19b43f0)
// Original: EVP_camellia_192_ecb
// ----------------------------------------------------------------------------
void * EVP_camellia_192_ecb()
{
  return &unk_20ACF60;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_256_cbc  (binary VA: 0x19b4410)
// Original: EVP_camellia_256_cbc
// ----------------------------------------------------------------------------
void * EVP_camellia_256_cbc()
{
  return &unk_20ACFA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_256_cfb128  (binary VA: 0x19b4430)
// Original: EVP_camellia_256_cfb128
// ----------------------------------------------------------------------------
void * EVP_camellia_256_cfb128()
{
  return &unk_20ACFE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_256_ofb  (binary VA: 0x19b4450)
// Original: EVP_camellia_256_ofb
// ----------------------------------------------------------------------------
void * EVP_camellia_256_ofb()
{
  return &unk_20AD020;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_256_ecb  (binary VA: 0x19b4470)
// Original: EVP_camellia_256_ecb
// ----------------------------------------------------------------------------
void * EVP_camellia_256_ecb()
{
  return &unk_20AD060;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_128_cfb1  (binary VA: 0x19b4490)
// Original: EVP_camellia_128_cfb1
// ----------------------------------------------------------------------------
void * EVP_camellia_128_cfb1()
{
  return &unk_20AD0A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_192_cfb1  (binary VA: 0x19b44b0)
// Original: EVP_camellia_192_cfb1
// ----------------------------------------------------------------------------
void * EVP_camellia_192_cfb1()
{
  return &unk_20AD0E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_256_cfb1  (binary VA: 0x19b44d0)
// Original: EVP_camellia_256_cfb1
// ----------------------------------------------------------------------------
void * EVP_camellia_256_cfb1()
{
  return &unk_20AD120;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_128_cfb8  (binary VA: 0x19b44f0)
// Original: EVP_camellia_128_cfb8
// ----------------------------------------------------------------------------
void * EVP_camellia_128_cfb8()
{
  return &unk_20AD160;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_192_cfb8  (binary VA: 0x19b4510)
// Original: EVP_camellia_192_cfb8
// ----------------------------------------------------------------------------
void * EVP_camellia_192_cfb8()
{
  return &unk_20AD1A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_camellia_256_cfb8  (binary VA: 0x19b4530)
// Original: EVP_camellia_256_cfb8
// ----------------------------------------------------------------------------
void * EVP_camellia_256_cfb8()
{
  return &unk_20AD1E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_cast5_cbc  (binary VA: 0x19b48b0)
// Original: EVP_cast5_cbc
// ----------------------------------------------------------------------------
void * EVP_cast5_cbc()
{
  return &unk_20AD220;
}

// ----------------------------------------------------------------------------
// Function: EVP_cast5_cfb64  (binary VA: 0x19b48d0)
// Original: EVP_cast5_cfb64
// ----------------------------------------------------------------------------
void * EVP_cast5_cfb64()
{
  return &unk_20AD260;
}

// ----------------------------------------------------------------------------
// Function: EVP_cast5_ofb  (binary VA: 0x19b48f0)
// Original: EVP_cast5_ofb
// ----------------------------------------------------------------------------
void * EVP_cast5_ofb()
{
  return &unk_20AD2A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_cast5_ecb  (binary VA: 0x19b4910)
// Original: EVP_cast5_ecb
// ----------------------------------------------------------------------------
void * EVP_cast5_ecb()
{
  return &unk_20AD2E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_cbc  (binary VA: 0x19b4fa0)
// Original: EVP_des_cbc
// ----------------------------------------------------------------------------
void * EVP_des_cbc()
{
  return &unk_20AD320;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_cfb64  (binary VA: 0x19b4fc0)
// Original: EVP_des_cfb64
// ----------------------------------------------------------------------------
void * EVP_des_cfb64()
{
  return &unk_20AD360;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ofb  (binary VA: 0x19b4fe0)
// Original: EVP_des_ofb
// ----------------------------------------------------------------------------
void * EVP_des_ofb()
{
  return &unk_20AD3A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ecb  (binary VA: 0x19b5000)
// Original: EVP_des_ecb
// ----------------------------------------------------------------------------
void * EVP_des_ecb()
{
  return &unk_20AD3E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_cfb1  (binary VA: 0x19b5020)
// Original: EVP_des_cfb1
// ----------------------------------------------------------------------------
void * EVP_des_cfb1()
{
  return &unk_20AD420;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_cfb8  (binary VA: 0x19b5040)
// Original: EVP_des_cfb8
// ----------------------------------------------------------------------------
void * EVP_des_cfb8()
{
  return &unk_20AD460;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede_cbc  (binary VA: 0x19b57e0)
// Original: EVP_des_ede_cbc
// ----------------------------------------------------------------------------
void * EVP_des_ede_cbc()
{
  return &unk_20AD4A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede_cfb64  (binary VA: 0x19b5800)
// Original: EVP_des_ede_cfb64
// ----------------------------------------------------------------------------
void * EVP_des_ede_cfb64()
{
  return &unk_20AD4E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede_ofb  (binary VA: 0x19b5820)
// Original: EVP_des_ede_ofb
// ----------------------------------------------------------------------------
void * EVP_des_ede_ofb()
{
  return &unk_20AD520;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede_ecb  (binary VA: 0x19b5840)
// Original: EVP_des_ede_ecb
// ----------------------------------------------------------------------------
void * EVP_des_ede_ecb()
{
  return &unk_20AD560;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3_cbc  (binary VA: 0x19b5860)
// Original: EVP_des_ede3_cbc
// ----------------------------------------------------------------------------
void * EVP_des_ede3_cbc()
{
  return &unk_20AD5A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3_cfb64  (binary VA: 0x19b5880)
// Original: EVP_des_ede3_cfb64
// ----------------------------------------------------------------------------
void * EVP_des_ede3_cfb64()
{
  return &unk_20AD5E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3_ofb  (binary VA: 0x19b58a0)
// Original: EVP_des_ede3_ofb
// ----------------------------------------------------------------------------
void * EVP_des_ede3_ofb()
{
  return &unk_20AD620;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3_ecb  (binary VA: 0x19b58c0)
// Original: EVP_des_ede3_ecb
// ----------------------------------------------------------------------------
void * EVP_des_ede3_ecb()
{
  return &unk_20AD660;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3_cfb1  (binary VA: 0x19b58e0)
// Original: EVP_des_ede3_cfb1
// ----------------------------------------------------------------------------
void * EVP_des_ede3_cfb1()
{
  return &unk_20AD6A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3_cfb8  (binary VA: 0x19b5900)
// Original: EVP_des_ede3_cfb8
// ----------------------------------------------------------------------------
void * EVP_des_ede3_cfb8()
{
  return &unk_20AD6E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede  (binary VA: 0x19b5920)
// Original: EVP_des_ede
// ----------------------------------------------------------------------------
void * EVP_des_ede()
{
  return &unk_20AD560;
}

// ----------------------------------------------------------------------------
// Function: EVP_des_ede3  (binary VA: 0x19b5940)
// Original: EVP_des_ede3
// ----------------------------------------------------------------------------
void * EVP_des_ede3()
{
  return &unk_20AD660;
}

// ----------------------------------------------------------------------------
// Function: EVP_idea_cbc  (binary VA: 0x19b5d50)
// Original: EVP_idea_cbc
// ----------------------------------------------------------------------------
void * EVP_idea_cbc()
{
  return &unk_20AD720;
}

// ----------------------------------------------------------------------------
// Function: EVP_idea_cfb64  (binary VA: 0x19b5d70)
// Original: EVP_idea_cfb64
// ----------------------------------------------------------------------------
void * EVP_idea_cfb64()
{
  return &unk_20AD760;
}

// ----------------------------------------------------------------------------
// Function: EVP_idea_ofb  (binary VA: 0x19b5d90)
// Original: EVP_idea_ofb
// ----------------------------------------------------------------------------
void * EVP_idea_ofb()
{
  return &unk_20AD7A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_idea_ecb  (binary VA: 0x19b5db0)
// Original: EVP_idea_ecb
// ----------------------------------------------------------------------------
void * EVP_idea_ecb()
{
  return &unk_20AD7E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_enc_null  (binary VA: 0x19b5e20)
// Original: EVP_enc_null
// ----------------------------------------------------------------------------
void * EVP_enc_null()
{
  return &unk_203F7A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc2_cbc  (binary VA: 0x19b64f0)
// Original: EVP_rc2_cbc
// ----------------------------------------------------------------------------
void * EVP_rc2_cbc()
{
  return &unk_203F7E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc2_cfb64  (binary VA: 0x19b6510)
// Original: EVP_rc2_cfb64
// ----------------------------------------------------------------------------
void * EVP_rc2_cfb64()
{
  return &unk_203F820;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc2_ofb  (binary VA: 0x19b6530)
// Original: EVP_rc2_ofb
// ----------------------------------------------------------------------------
void * EVP_rc2_ofb()
{
  return &unk_203F860;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc2_ecb  (binary VA: 0x19b6550)
// Original: EVP_rc2_ecb
// ----------------------------------------------------------------------------
void * EVP_rc2_ecb()
{
  return &unk_203F8A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc2_64_cbc  (binary VA: 0x19b6570)
// Original: EVP_rc2_64_cbc
// ----------------------------------------------------------------------------
void * EVP_rc2_64_cbc()
{
  return &unk_203F8E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc2_40_cbc  (binary VA: 0x19b6590)
// Original: EVP_rc2_40_cbc
// ----------------------------------------------------------------------------
void * EVP_rc2_40_cbc()
{
  return &unk_203F920;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc4  (binary VA: 0x19b6650)
// Original: EVP_rc4
// ----------------------------------------------------------------------------
void * EVP_rc4()
{
  return &unk_203F960;
}

// ----------------------------------------------------------------------------
// Function: EVP_rc4_40  (binary VA: 0x19b6670)
// Original: EVP_rc4_40
// ----------------------------------------------------------------------------
void * EVP_rc4_40()
{
  return &unk_203F9A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_seed_cbc  (binary VA: 0x19b69e0)
// Original: EVP_seed_cbc
// ----------------------------------------------------------------------------
void * EVP_seed_cbc()
{
  return &unk_203F9E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_seed_cfb128  (binary VA: 0x19b6a00)
// Original: EVP_seed_cfb128
// ----------------------------------------------------------------------------
void * EVP_seed_cfb128()
{
  return &unk_203FA20;
}

// ----------------------------------------------------------------------------
// Function: EVP_seed_ofb  (binary VA: 0x19b6a20)
// Original: EVP_seed_ofb
// ----------------------------------------------------------------------------
void * EVP_seed_ofb()
{
  return &unk_203FA60;
}

// ----------------------------------------------------------------------------
// Function: EVP_seed_ecb  (binary VA: 0x19b6a40)
// Original: EVP_seed_ecb
// ----------------------------------------------------------------------------
void * EVP_seed_ecb()
{
  return &unk_203FAA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_desx_cbc  (binary VA: 0x19b6bf0)
// Original: EVP_desx_cbc
// ----------------------------------------------------------------------------
void * EVP_desx_cbc()
{
  return &unk_20AD820;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_init  (binary VA: 0x19b6c10)
// Original: EVP_CIPHER_CTX_init
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_init(uint8_t *a1)
{
  uint16_t *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  v1 = (uint16_t *)(a1);
  v2 = 140;
  if ( ((uint8_t)(uintptr_t)a1 & 1) != 0 )
  {
    *a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v2) = -117;
    if ( ((unsigned int)(uintptr_t)(a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  result = 0;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_new  (binary VA: 0x19b6c70)
// Original: EVP_CIPHER_CTX_new
// ----------------------------------------------------------------------------
uint8_t * EVP_CIPHER_CTX_new()
{
  uint8_t *v0;
  uint8_t *v1;

  v0 = CRYPTO_malloc(140, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = v0;
  if ( v0 != nullptr )
    EVP_CIPHER_CTX_init(v0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncryptUpdate  (binary VA: 0x19b6cd0)
// Original: EVP_EncryptUpdate
// ----------------------------------------------------------------------------
bool EVP_EncryptUpdate(uint32_t *a1, int a2, int *a3, char *src, int a5)
{
  int v5;
  int v6;
  int v7;
  size_t n;
  int v9;
  int v10;
  bool result;
  int v12;
  int v13;
  int v14;

  v5 = a5;
  if ( a5 <= 0 )
  {
    *a3 = 0;
    return a5 == 0;
  }
  v6 = a1[3];
  if ( v6 == 0 && (a1[26] & a5) == 0 )
  {
    v13 = G4_VCALL<int>(a1, 24, a2, src, a5);
    result = v13 != 0;
    if ( v13 == 0 )
      v5 = 0;
    *a3 = v5;
    return result;
  }
  v7 = *(uint32_t *)(*a1 + 4);
  if ( v7 > 32 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "bl <= (int)sizeof(ctx->buf)");
  if ( v6 != 0 )
  {
    if ( v7 > a5 + v6 )
    {
      memcpy((char *)a1 + v6 + 48, src, a5);
      a1[3] += a5;
      *a3 = 0;
      return 1;
    }
    v14 = v7 - v6;
    memcpy((char *)a1 + v6 + 48, src, v7 - v6);
    v12 = G4_VCALL<int>(a1, 24, a2, a1 + 12, v7);
    result = 0;
    if ( v12 == 0 )
      return result;
    v5 = a5 - v14;
    src += v14;
    a2 += v7;
    *a3 = v7;
  }
  else
  {
    *a3 = 0;
  }
  n = v5 & (v7 - 1);
  v9 = v5 - n;
  if ( v9 > 0 )
  {
    v10 = G4_VCALL<int>(a1, 24, a2, src, v9);
    result = 0;
    if ( v10 == 0 )
      return result;
    *a3 += v9;
  }
  if ( n != 0 )
    memcpy(a1 + 12, &src[v9], n);
  a1[3] = n;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncryptFinal_ex  (binary VA: 0x19b6ed0)
// Original: EVP_EncryptFinal_ex
// ----------------------------------------------------------------------------
int EVP_EncryptFinal_ex(int a1, int a2, unsigned int *a3)
{
  unsigned int v3;
  unsigned int v4;
  int result;
  char v6;

  v3 = *(uint32_t *)(*(uint32_t *)a1 + 4);
  if ( v3 > 0x20 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "b <= sizeof ctx->buf");
  if ( v3 == 1 )
  {
LABEL_5:
    *a3 = 0;
    return 1;
  }
  v4 = *(uint32_t *)(a1 + 12);
  if ( (*(uint8_t *)(a1 + 93) & 1) != 0 )
  {
    if ( v4 != 0 )
    {
      ERR_put_error(6, 127, 138, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    goto LABEL_5;
  }
  if ( v3 > v4 )
  {
    v6 = v3 - v4;
    do
      *(uint8_t *)(a1 + v4++ + 48) = v6;
    while ( v3 != v4 );
  }
  result = G4_VCALL<int>(a1, 24, a2, a1 + 48, v3);
  if ( result != 0 )
    *a3 = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncryptFinal  (binary VA: 0x19b6fc0)
// Original: EVP_EncryptFinal
// ----------------------------------------------------------------------------
int EVP_EncryptFinal(int a1, int a2, unsigned int *a3)
{
  return EVP_EncryptFinal_ex(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_DecryptUpdate  (binary VA: 0x19b7000)
// Original: EVP_DecryptUpdate
// ----------------------------------------------------------------------------
bool EVP_DecryptUpdate(int a1, char *dest, int *a3, char *a4, signed int a5)
{
  char *v5;
  bool v6;
  bool result;
  size_t n;
  int v9;

  v5 = a4;
  if ( a5 <= 0 )
  {
    *a3 = 0;
    return a5 == 0;
  }
  else if ( (*(uint8_t *)(a1 + 93) & 1) != 0 )
  {
    return EVP_EncryptUpdate((uint32_t *)a1, (int)(uintptr_t)(dest), a3, a4, a5);
  }
  else
  {
    n = *(uint32_t *)(*(uint32_t *)a1 + 4);
    if ( n > 0x20 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "b <= sizeof ctx->final");
    v9 = 0;
    if ( *(uint32_t *)(a1 + 100) != 0 )
    {
      memcpy(dest, (const void *)(a1 + 108), n);
      v9 = 1;
      dest += n;
      v5 = a4;
    }
    v6 = EVP_EncryptUpdate((uint32_t *)a1, (int)(uintptr_t)(dest), a3, v5, a5);
    result = false;
    if ( v6 )
    {
      if ( n <= 1 || *(uint32_t *)(a1 + 12) != 0 )
      {
        *(uint32_t *)(a1 + 100) = 0;
      }
      else
      {
        *a3 -= n;
        *(uint32_t *)(a1 + 100) = 1;
        memcpy((void *)(a1 + 108), &dest[*a3], n);
      }
      result = true;
      if ( v9 != 0 )
        *a3 += n;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CipherUpdate  (binary VA: 0x19b71c0)
// Original: EVP_CipherUpdate
// ----------------------------------------------------------------------------
bool EVP_CipherUpdate(uint32_t *a1, char *a2, int *a3, char *a4, size_t a5)
{
  if ( a1[2] != 0 )
    return EVP_EncryptUpdate(a1, (int)(uintptr_t)(a2), a3, a4, a5);
  else
    return EVP_DecryptUpdate((int)(uintptr_t)(a1), a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: EVP_DecryptFinal_ex  (binary VA: 0x19b7230)
// Original: EVP_DecryptFinal_ex
// ----------------------------------------------------------------------------
int EVP_DecryptFinal_ex(int a1, int a2, int *a3)
{
  unsigned int v3;
  int result;
  signed int v5;
  signed int v6;
  uint8_t *v7;
  int v8;
  int i;

  *a3 = 0;
  v3 = *(uint32_t *)(*(uint32_t *)a1 + 4);
  result = 1;
  if ( (*(uint8_t *)(a1 + 93) & 1) != 0 )
  {
    if ( *(uint32_t *)(a1 + 12) != 0 )
    {
      ERR_put_error(6, 101, 138, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else if ( v3 > 1 )
  {
    if ( *(uint32_t *)(a1 + 12) != 0 || *(uint32_t *)(a1 + 100) == 0 )
    {
      ERR_put_error(6, 101, 109, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    else
    {
      if ( v3 > 0x20 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "b <= sizeof ctx->final");
      v5 = *(uint8_t *)(a1 + v3 + 107);
      if ( (int)v3 >= v5 )
      {
        v6 = 0;
        v7 = (uint8_t *)(a1 + v3 + 107);
        if ( *v7 != 0 )
        {
          while ( (uint8_t)*v7 == v5 )
          {
            ++v6;
            --v7;
            if ( v5 <= v6 )
            {
              v8 = *(uint32_t *)(*(uint32_t *)a1 + 4) - v5;
              if ( v8 > 0 )
              {
                for ( i = 0; i != v8; ++i )
                  *(uint8_t *)(a2 + i) = *(uint8_t *)(a1 + i + 108);
              }
              *a3 = v8;
              return 1;
            }
          }
        }
      }
      ERR_put_error(6, 101, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_DecryptFinal  (binary VA: 0x19b73f0)
// Original: EVP_DecryptFinal
// ----------------------------------------------------------------------------
int EVP_DecryptFinal(int a1, int a2, int *a3)
{
  return EVP_DecryptFinal_ex(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_CipherFinal  (binary VA: 0x19b7430)
// Original: EVP_CipherFinal
// ----------------------------------------------------------------------------
int EVP_CipherFinal(int a1, int a2, unsigned int *a3)
{
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return EVP_EncryptFinal(a1, a2, a3);
  else
    return EVP_DecryptFinal(a1, a2, (int *)a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_CipherFinal_ex  (binary VA: 0x19b7480)
// Original: EVP_CipherFinal_ex
// ----------------------------------------------------------------------------
int EVP_CipherFinal_ex(int a1, int a2, unsigned int *a3)
{
  if ( *(uint32_t *)(a1 + 8) != 0 )
    return EVP_EncryptFinal_ex(a1, a2, a3);
  else
    return EVP_DecryptFinal_ex(a1, a2, (int *)a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_cleanup  (binary VA: 0x19b74d0)
// Original: EVP_CIPHER_CTX_cleanup
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_cleanup(int a1)
{
  uint16_t *v1;
  int (*v2)(int);
  int v3;
  int result;
  unsigned int v5;
  uint16_t *v6;

  v1 = (uint16_t *)a1;
  if ( *(uint32_t *)a1 == 0 )
    goto LABEL_6;
  v2 = *(int (**)(int))(*(uint32_t *)a1 + 28);
  if ( v2 == nullptr || (v3 = v2(a1), result = 0, v3 != 0) )
  {
    if ( *(uint32_t *)(a1 + 96) != 0 )
    {
      OPENSSL_cleanse(*(uint8_t **)(a1 + 96), *(uint32_t *)(*(uint32_t *)a1 + 32));
LABEL_6:
      if ( *(uint32_t *)(a1 + 96) != 0 )
        CRYPTO_free(*(void **)(a1 + 96));
    }
    if ( *(uint32_t *)(a1 + 4) != 0 )
      ENGINE_finish(*(uint32_t **)(a1 + 4));
    v5 = 140;
    if ( (a1 & 1) != 0 )
    {
      *(uint8_t *)a1 = 0;
      LOBYTE(v5) = -117;
      v1 = (uint16_t *)(a1 + 1);
    }
    if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
    {
      *v1 = 0;
      v5 -= 2;
      ++v1;
    }
    memset(v1, 0, 4 * (v5 >> 2));
    v6 = &v1[2 * (v5 >> 2)];
    if ( (v5 & 2) != 0 )
    {
      *v6++ = 0;
      if ( (v5 & 1) == 0 )
        return 1;
    }
    else if ( (v5 & 1) == 0 )
    {
      return 1;
    }
    *(uint8_t *)v6 = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_free  (binary VA: 0x19b75b0)
// Original: EVP_CIPHER_CTX_free
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_free(void *a1)
{
  int result;

  if ( a1 != nullptr )
  {
    EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(a1));
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_set_padding  (binary VA: 0x19b75f0)
// Original: EVP_CIPHER_CTX_set_padding
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_set_padding(int a1, int a2)
{
  if ( a2 != 0 )
    *(uint32_t *)(a1 + 92) &= ~0x100u;
  else
    *(uint32_t *)(a1 + 92) |= 0x100u;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_ctrl  (binary VA: 0x19b7620)
// Original: EVP_CIPHER_CTX_ctrl
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_ctrl(int a1, int a2, int a3, int a4)
{
  int (*v4)(int, int, int, int);
  int result;

  if ( *(uint32_t *)a1 != 0 )
  {
    v4 = *(int (**)(int, int, int, int))(*(uint32_t *)a1 + 44);
    if ( v4 != nullptr )
    {
      result = v4(a1, a2, a3, a4);
      if ( result == -1 )
      {
        ERR_put_error(6, 124, 133, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      ERR_put_error(6, 124, 132, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(6, 124, 131, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_set_key_length  (binary VA: 0x19b7720)
// Original: EVP_CIPHER_CTX_set_key_length
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_set_key_length(uint32_t *a1, int a2)
{
  int v2;
  int result;

  v2 = *(uint32_t *)(*a1 + 16);
  if ( (v2 & 0x80) != 0 )
    return EVP_CIPHER_CTX_ctrl((int)(uintptr_t)(a1), 1, a2, 0);
  result = 1;
  if ( a1[22] != a2 )
  {
    if ( a2 > 0 && (v2 & 8) != 0 )
    {
      a1[22] = a2;
    }
    else
    {
      ERR_put_error(6, 122, 130, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CipherInit_ex  (binary VA: 0x19b77e0)
// Original: EVP_CipherInit_ex
// ----------------------------------------------------------------------------
int EVP_CipherInit_ex(uint32_t *a1, uint32_t *a2, uint32_t *cipher_engine, int a4, void *src, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *cipher;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v17;
  uint8_t *v18;
  size_t n;
  size_t v20;

  v6 = a2;
  if ( a6 == -1 )
  {
    v7 = a1[2];
    if ( a1[1] == 0 )
      goto LABEL_24;
  }
  else
  {
    v7 = a6 != 0;
    a1[2] = v7;
    if ( a1[1] == 0 )
    {
LABEL_24:
      if ( a2 != nullptr )
        goto LABEL_6;
      v8 = (uint32_t *)*a1;
      if ( *a1 == 0 )
      {
        ERR_put_error(6, 123, 131, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
LABEL_12:
      v12 = v8[1];
      if ( v12 != 8 && v12 != 1 && v12 != 16 )
        OpenSSLDie(
          (const char *)&unk_1B15112,
          0,
          "ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16");
      if ( (EVP_CIPHER_CTX_flags(a1) & 0x10) == 0 )
      {
        v17 = EVP_CIPHER_CTX_flags(a1) & 0xF0007;
        v15 = 0;
        switch ( v17 )
        {
          case 0:
          case 1:
            break;
          case 2:
            goto LABEL_36;
          case 3:
          case 4:
            a1[20] = 0;
LABEL_36:
            if ( (int)EVP_CIPHER_CTX_iv_length(a1) > 16 )
              OpenSSLDie((const char *)&unk_1B15112, 0, "EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)");
            if ( src != nullptr )
            {
              n = EVP_CIPHER_CTX_iv_length(a1);
              memcpy(a1 + 4, src, n);
            }
            v20 = EVP_CIPHER_CTX_iv_length(a1);
            memcpy(a1 + 8, a1 + 4, v20);
            break;
          default:
            return v15;
        }
      }
      v13 = (uint32_t *)*a1;
      if ( a4 != 0 || (v13[4] & 0x20) != 0 )
      {
        v14 = ((int (*)(uint32_t *, int, void *, int))v13[5])(a1, a4, src, v7);
        v15 = 0;
        if ( v14 == 0 )
          return v15;
        v13 = (uint32_t *)*a1;
      }
      a1[3] = 0;
      a1[25] = 0;
      v15 = 1;
      a1[26] = v13[1] - 1;
      return v15;
    }
  }
  v8 = (uint32_t *)*a1;
  if ( *a1 == 0 )
    goto LABEL_24;
  if ( a2 == nullptr || *a2 == *v8 )
    goto LABEL_12;
LABEL_6:
  EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(a1));
  a1[2] = v7;
  if ( cipher_engine != nullptr )
  {
    if ( ENGINE_init(cipher_engine) == 0 )
      goto LABEL_40;
LABEL_8:
    cipher = (uint32_t *)ENGINE_get_cipher(cipher_engine, *a2);
    if ( cipher == nullptr )
      goto LABEL_40;
    v6 = cipher;
    a1[1] = (uint32_t)(uintptr_t)(cipher_engine);
    *a1 = (uint32_t)(uintptr_t)(cipher);
    v10 = cipher[8];
    if ( v10 == 0 )
      goto LABEL_10;
LABEL_33:
    v18 = CRYPTO_malloc(v10, (int)(uintptr_t)(&unk_1B15112), 0);
    a1[24] = (uint32_t)(uintptr_t)(v18);
    if ( v18 == nullptr )
    {
      ERR_put_error(6, 123, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v8 = (uint32_t *)*a1;
    goto LABEL_11;
  }
  cipher_engine = (uint32_t *)ENGINE_get_cipher_engine(*a2);
  if ( cipher_engine != nullptr )
    goto LABEL_8;
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(a2);
  v10 = a2[8];
  if ( v10 != 0 )
    goto LABEL_33;
LABEL_10:
  a1[24] = 0;
  v8 = v6;
LABEL_11:
  v11 = v6[2];
  a1[23] = 0;
  a1[22] = v11;
  if ( (v8[4] & 0x40) == 0 )
    goto LABEL_12;
  if ( EVP_CIPHER_CTX_ctrl((int)(uintptr_t)(a1), 0, 0, 0) != 0 )
  {
    v8 = (uint32_t *)*a1;
    goto LABEL_12;
  }
LABEL_40:
  ERR_put_error(6, 123, 134, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_DecryptInit_ex  (binary VA: 0x19b7b80)
// Original: EVP_DecryptInit_ex
// ----------------------------------------------------------------------------
int EVP_DecryptInit_ex(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, void *a5)
{
  return EVP_CipherInit_ex(a1, a2, a3, a4, a5, 0);
}

// ----------------------------------------------------------------------------
// Function: EVP_EncryptInit_ex  (binary VA: 0x19b7bd0)
// Original: EVP_EncryptInit_ex
// ----------------------------------------------------------------------------
int EVP_EncryptInit_ex(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, void *a5)
{
  return EVP_CipherInit_ex(a1, a2, a3, a4, a5, 1);
}

// ----------------------------------------------------------------------------
// Function: EVP_CipherInit  (binary VA: 0x19b7c20)
// Original: EVP_CipherInit
// ----------------------------------------------------------------------------
int EVP_CipherInit(uint8_t *a1, uint32_t *a2, int a3, void *a4, int a5)
{
  if ( a2 != nullptr )
    EVP_CIPHER_CTX_init(a1);
  return EVP_CipherInit_ex(a1, a2, nullptr, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: EVP_DecryptInit  (binary VA: 0x19b7c90)
// Original: EVP_DecryptInit
// ----------------------------------------------------------------------------
int EVP_DecryptInit(uint8_t *a1, uint32_t *a2, int a3, void *a4)
{
  return EVP_CipherInit(a1, a2, a3, a4, 0);
}

// ----------------------------------------------------------------------------
// Function: EVP_EncryptInit  (binary VA: 0x19b7ce0)
// Original: EVP_EncryptInit
// ----------------------------------------------------------------------------
int EVP_EncryptInit(uint8_t *a1, uint32_t *a2, int a3, void *a4)
{
  return EVP_CipherInit(a1, a2, a3, a4, 1);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_rand_key  (binary VA: 0x19b7d30)
// Original: EVP_CIPHER_CTX_rand_key
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_rand_key(uint32_t *a1, int a2)
{
  if ( (*(uint8_t *)(*a1 + 17) & 2) != 0 )
    return EVP_CIPHER_CTX_ctrl((int)(uintptr_t)(a1), 6, 0, a2);
  else
    return RAND_bytes(a2, a1[22]) > 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_copy  (binary VA: 0x19b7da0)
// Original: EVP_CIPHER_CTX_copy
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_copy(int a1, int *a2)
{
  int *v2;
  uint16_t *v3;
  unsigned int v4;
  int v5;
  uint16_t *v6;
  int *v7;
  int v8;
  int v9;
  int result;
  uint8_t *dest;

  if ( a2 == nullptr || *a2 == 0 )
  {
    ERR_put_error(6, 163, 111, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a2[1] != 0 && ENGINE_init((uint32_t *)a2[1]) == 0 )
  {
    ERR_put_error(6, 163, 38, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v2 = a2;
  EVP_CIPHER_CTX_cleanup(a1);
  v3 = (uint16_t *)a1;
  v4 = 140;
  if ( (a1 & 1) != 0 )
  {
    v2 = (int *)((char *)a2 + 1);
    *(uint8_t *)a1 = *(uint8_t *)a2;
    v3 = (uint16_t *)(a1 + 1);
    v4 = 139;
  }
  if ( ((uint8_t)(uintptr_t)(v3) & 2) != 0 )
  {
    v4 -= 2;
    *v3 = *(uint16_t *)v2;
    v2 = (int *)((char *)v2 + 2);
    ++v3;
  }
  v5 = 0;
  std::memcpy(v3, v2, 4 * (v4 >> 2));
  v7 = &v2[v4 >> 2];
  v6 = &v3[2 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
  {
    *v6 = *(uint16_t *)v7;
    v5 = 1;
    if ( (v4 & 1) == 0 )
      goto LABEL_11;
  }
  else if ( (v4 & 1) == 0 )
  {
LABEL_11:
    v8 = *a2;
    if ( a2[24] == 0 || (v9 = *(uint32_t *)(v8 + 32)) == 0 )
    {
      result = 1;
      if ( (*(uint8_t *)(v8 + 17) & 4) == 0 )
        return result;
      return (*(int (**)(int *, int, uint32_t, int))(v8 + 44))(a2, 8, 0, a1);
    }
    dest = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(a1 + 96) = (uint32_t)(uintptr_t)(dest);
    if ( dest == nullptr )
    {
      ERR_put_error(6, 163, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    memcpy(dest, (const void *)a2[24], *(uint32_t *)(*a2 + 32));
    v8 = *a2;
    result = 1;
    if ( (*(uint8_t *)(*a2 + 17) & 4) != 0 )
      return (*(int (**)(int *, int, uint32_t, int))(v8 + 44))(a2, 8, 0, a1);
    return result;
  }
  LOBYTE(v6[v5]) = *((uint8_t *)v7 + v5 * 2);
  goto LABEL_11;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_EVP_strings  (binary VA: 0x19b7fe0)
// Original: ERR_load_EVP_strings
// ----------------------------------------------------------------------------
int ERR_load_EVP_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CBAC0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CBAC0);
    return ERR_load_strings(0, &dword_20CBCC0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_param_to_asn1  (binary VA: 0x19b8040)
// Original: EVP_CIPHER_param_to_asn1
// ----------------------------------------------------------------------------
int EVP_CIPHER_param_to_asn1(int a1, int a2)
{
  int (*v2)(int, int);

  v2 = *(int (**)(int, int))(*(uint32_t *)a1 + 36);
  if ( v2 != nullptr )
    return v2(a1, a2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_asn1_to_param  (binary VA: 0x19b8070)
// Original: EVP_CIPHER_asn1_to_param
// ----------------------------------------------------------------------------
int EVP_CIPHER_asn1_to_param(int a1, int a2)
{
  int (*v2)(int, int);

  v2 = *(int (**)(int, int))(*(uint32_t *)a1 + 40);
  if ( v2 != nullptr )
    return v2(a1, a2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_block_size  (binary VA: 0x19b80a0)
// Original: EVP_CIPHER_block_size
// ----------------------------------------------------------------------------
int EVP_CIPHER_block_size(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_block_size  (binary VA: 0x19b80b0)
// Original: EVP_CIPHER_CTX_block_size
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_block_size(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: EVP_Cipher  (binary VA: 0x19b80c0)
// Original: EVP_Cipher
// ----------------------------------------------------------------------------
int EVP_Cipher(int a1, int a2, int a3, int a4)
{
  return G4_VCALL<int>(a1, 24, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_cipher  (binary VA: 0x19b80f0)
// Original: EVP_CIPHER_CTX_cipher
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_cipher(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_flags  (binary VA: 0x19b8100)
// Original: EVP_CIPHER_flags
// ----------------------------------------------------------------------------
int EVP_CIPHER_flags(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_flags  (binary VA: 0x19b8110)
// Original: EVP_CIPHER_CTX_flags
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_flags(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_get_app_data  (binary VA: 0x19b8120)
// Original: EVP_CIPHER_CTX_get_app_data
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_get_app_data(int a1)
{
  return *(uint32_t *)(a1 + 84);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_set_app_data  (binary VA: 0x19b8130)
// Original: EVP_CIPHER_CTX_set_app_data
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_set_app_data(int a1, int a2)
{
  *(uint32_t *)(a1 + 84) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_iv_length  (binary VA: 0x19b8140)
// Original: EVP_CIPHER_iv_length
// ----------------------------------------------------------------------------
int EVP_CIPHER_iv_length(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_iv_length  (binary VA: 0x19b8150)
// Original: EVP_CIPHER_CTX_iv_length
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_iv_length(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_set_asn1_iv  (binary VA: 0x19b8160)
// Original: EVP_CIPHER_set_asn1_iv
// ----------------------------------------------------------------------------
int EVP_CIPHER_set_asn1_iv(int a1, int a2)
{
  int result;
  size_t v3;

  result = 0;
  if ( a2 != 0 )
  {
    v3 = EVP_CIPHER_CTX_iv_length(a1);
    if ( v3 > 0x10 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "j <= sizeof(c->iv)");
    return ASN1_TYPE_set_octetstring(a2, (char *)(a1 + 16), v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_get_asn1_iv  (binary VA: 0x19b81f0)
// Original: EVP_CIPHER_get_asn1_iv
// ----------------------------------------------------------------------------
int EVP_CIPHER_get_asn1_iv(int a1, int a2)
{
  signed int n;
  unsigned int v3;

  n = 0;
  if ( a2 != 0 )
  {
    v3 = EVP_CIPHER_CTX_iv_length(a1);
    n = v3;
    if ( v3 > 0x10 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "l <= sizeof(c->iv)");
    if ( v3 == ASN1_TYPE_get_octetstring(a2, (void *)(a1 + 16), v3) )
    {
      if ( n > 0 )
        memcpy((void *)(a1 + 32), (const void *)(a1 + 16), n);
    }
    else
    {
      return -1;
    }
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_key_length  (binary VA: 0x19b82b0)
// Original: EVP_CIPHER_key_length
// ----------------------------------------------------------------------------
int EVP_CIPHER_key_length(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_key_length  (binary VA: 0x19b82c0)
// Original: EVP_CIPHER_CTX_key_length
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_key_length(int a1)
{
  return *(uint32_t *)(a1 + 88);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_nid  (binary VA: 0x19b82d0)
// Original: EVP_CIPHER_nid
// ----------------------------------------------------------------------------
int EVP_CIPHER_nid(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_type  (binary VA: 0x19b82e0)
// Original: EVP_CIPHER_type
// ----------------------------------------------------------------------------
int EVP_CIPHER_type(int a1)
{
  int v1;
  int v2;
  uint32_t *v4;

  v1 = EVP_CIPHER_nid(a1);
  v2 = v1;
  if ( v1 == 429 )
    return 429;
  if ( v1 > 429 )
  {
    if ( v1 != 654 )
    {
      if ( v1 > 654 )
      {
        if ( v1 <= 657 )
        {
          if ( v1 >= 656 )
            return 30;
          return 429;
        }
        if ( v1 <= 659 )
          return 30;
        goto LABEL_14;
      }
      if ( v1 != 651 )
      {
        if ( v1 > 651 )
        {
          if ( v1 != 652 )
            return 421;
          return 429;
        }
        if ( v1 == 650 )
          return 421;
        goto LABEL_14;
      }
    }
    return 425;
  }
  switch ( v1 )
  {
    case 5:
    case 97:
      return 5;
    case 30:
    case 61:
      return 30;
    case 37:
    case 98:
    case 166:
      return 37;
    case 421:
      return 421;
    case 425:
      return 425;
    default:
LABEL_14:
      v4 = (uint32_t *)OBJ_nid2obj(v1);
      if ( v4 != nullptr )
      {
        if ( v4[4] == 0 )
          v2 = 0;
      }
      else
      {
        v2 = 0;
      }
      ASN1_OBJECT_free(v4);
      return v2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_nid  (binary VA: 0x19b84c0)
// Original: EVP_CIPHER_CTX_nid
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_nid(int a1)
{
  return **(uint32_t **)a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_block_size  (binary VA: 0x19b84d0)
// Original: EVP_MD_block_size
// ----------------------------------------------------------------------------
int EVP_MD_block_size(int a1)
{
  return *(uint32_t *)(a1 + 64);
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_type  (binary VA: 0x19b84e0)
// Original: EVP_MD_type
// ----------------------------------------------------------------------------
int EVP_MD_type(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_pkey_type  (binary VA: 0x19b84f0)
// Original: EVP_MD_pkey_type
// ----------------------------------------------------------------------------
int EVP_MD_pkey_type(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_size  (binary VA: 0x19b8500)
// Original: EVP_MD_size
// ----------------------------------------------------------------------------
int EVP_MD_size(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 8);
  ERR_put_error(6, 162, 159, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_flags  (binary VA: 0x19b8560)
// Original: EVP_MD_flags
// ----------------------------------------------------------------------------
int EVP_MD_flags(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_md  (binary VA: 0x19b8570)
// Original: EVP_MD_CTX_md
// ----------------------------------------------------------------------------
int EVP_MD_CTX_md(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)a1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_set_flags  (binary VA: 0x19b8590)
// Original: EVP_MD_CTX_set_flags
// ----------------------------------------------------------------------------
int EVP_MD_CTX_set_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_clear_flags  (binary VA: 0x19b85a0)
// Original: EVP_MD_CTX_clear_flags
// ----------------------------------------------------------------------------
int EVP_MD_CTX_clear_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) &= ~a2;
  return ~a2;
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_CTX_test_flags  (binary VA: 0x19b85b0)
// Original: EVP_MD_CTX_test_flags
// ----------------------------------------------------------------------------
int EVP_MD_CTX_test_flags(int a1, int a2)
{
  return *(uint32_t *)(a1 + 8) & a2;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_set_flags  (binary VA: 0x19b85c0)
// Original: EVP_CIPHER_CTX_set_flags
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_set_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 92) |= a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_clear_flags  (binary VA: 0x19b85d0)
// Original: EVP_CIPHER_CTX_clear_flags
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_clear_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 92) &= ~a2;
  return ~a2;
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_CTX_test_flags  (binary VA: 0x19b85e0)
// Original: EVP_CIPHER_CTX_test_flags
// ----------------------------------------------------------------------------
int EVP_CIPHER_CTX_test_flags(int a1, int a2)
{
  return *(uint32_t *)(a1 + 92) & a2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKCS82PKEY  (binary VA: 0x19b85f0)
// Original: EVP_PKCS82PKEY
// ----------------------------------------------------------------------------
int EVP_PKCS82PKEY(int a1)
{
  int v1;
  size_t v2;
  int (*v3)(int, int);
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[80];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v6)) > _g4_s1 ? (44u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v7)) > _g4_s2 ? (48u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 44u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 48u);

  v1 = 0;
  if ( PKCS8_pkey_get0(&v6, nullptr, nullptr, nullptr, a1) != 0 )
  {
    v1 = (int)(uintptr_t)(EVP_PKEY_new());
    if ( v1 == 0 )
    {
      ERR_put_error(6, 111, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v1;
    }
    v2 = OBJ_obj2nid(v6);
    if ( EVP_PKEY_set_type((char *)v1, v2) != 0 )
    {
      v3 = *(int (**)(int, int))(*(uint32_t *)(v1 + 12) + 36);
      if ( v3 != nullptr )
      {
        if ( v3(v1, a1) != 0 )
          return v1;
        ERR_put_error(6, 111, 145, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        ERR_put_error(6, 111, 144, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      ERR_put_error(6, 111, 118, (int)(uintptr_t)(&unk_1B15112), 0);
      i2t_ASN1_OBJECT(v7, 80, v6);
      ERR_add_error_data(2, "TYPE=", v7);
    }
    v5 = (char *)v1;
    v1 = 0;
    EVP_PKEY_free(v5);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY2PKCS8_broken  (binary VA: 0x19b87d0)
// Original: EVP_PKEY2PKCS8_broken
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY2PKCS8_broken(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int (*v5)(uint32_t *, int);
  char v7;

  v2 = (uint32_t *)PKCS8_PRIV_KEY_INFO_new();
  v3 = v2;
  if ( v2 == nullptr )
  {
    ERR_put_error(6, 113, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3;
  }
  *v2 = a2;
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 == 0 )
  {
    ERR_put_error(6, 113, 118, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_8;
  }
  v5 = *(int (**)(uint32_t *, int))(v4 + 40);
  if ( v5 == nullptr )
  {
    ERR_put_error(6, 113, 144, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_8;
  }
  if ( v5(v3, a1) == 0 )
  {
    ERR_put_error(6, 113, 146, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_8:
    v7 = (char)(uintptr_t)(v3);
    v3 = nullptr;
    PKCS8_PRIV_KEY_INFO_free(v7);
    return v3;
  }
  RAND_add(*(uint32_t *)(*(uint32_t *)(v3[3] + 4) + 8), **(uint32_t **)(v3[3] + 4), 0);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY2PKCS8  (binary VA: 0x19b8940)
// Original: EVP_PKEY2PKCS8
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY2PKCS8(int a1)
{
  return EVP_PKEY2PKCS8_broken(a1, 0);
}

// ----------------------------------------------------------------------------
// Function: PKCS8_set_broken  (binary VA: 0x19b8970)
// Original: PKCS8_set_broken
// ----------------------------------------------------------------------------
uint32_t * PKCS8_set_broken(uint32_t *a1, int a2)
{
  uint32_t *result;
  uint32_t *v3;

  result = a1;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      v3 = (uint32_t *)a1[3];
      *a1 = 1;
      *v3 = 16;
    }
    else
    {
      ERR_put_error(6, 112, 117, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
  }
  else
  {
    *a1 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get_attr_count  (binary VA: 0x19b89f0)
// Original: EVP_PKEY_get_attr_count
// ----------------------------------------------------------------------------
int EVP_PKEY_get_attr_count(int a1)
{
  return X509at_get_attr_count(*(uint32_t *)(a1 + 28));
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get_attr_by_NID  (binary VA: 0x19b8a20)
// Original: EVP_PKEY_get_attr_by_NID
// ----------------------------------------------------------------------------
int EVP_PKEY_get_attr_by_NID(int a1, int a2, int a3)
{
  return X509at_get_attr_by_NID(*(uint32_t *)(a1 + 28), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get_attr_by_OBJ  (binary VA: 0x19b8a60)
// Original: EVP_PKEY_get_attr_by_OBJ
// ----------------------------------------------------------------------------
int EVP_PKEY_get_attr_by_OBJ(int a1, int a2, int a3)
{
  return X509at_get_attr_by_OBJ(*(uint32_t *)(a1 + 28), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get_attr  (binary VA: 0x19b8aa0)
// Original: EVP_PKEY_get_attr
// ----------------------------------------------------------------------------
int EVP_PKEY_get_attr(int a1, int a2)
{
  return X509at_get_attr(*(uint32_t *)(a1 + 28), a2);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_delete_attr  (binary VA: 0x19b8ad0)
// Original: EVP_PKEY_delete_attr
// ----------------------------------------------------------------------------
int EVP_PKEY_delete_attr(int a1, int a2)
{
  return X509at_delete_attr(*(uint32_t *)(a1 + 28), a2);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_add1_attr  (binary VA: 0x19b8b00)
// Original: EVP_PKEY_add1_attr
// ----------------------------------------------------------------------------
bool EVP_PKEY_add1_attr(int a1, int a2)
{
  return X509at_add1_attr(a1 + 28, a2) != 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_add1_attr_by_OBJ  (binary VA: 0x19b8b40)
// Original: EVP_PKEY_add1_attr_by_OBJ
// ----------------------------------------------------------------------------
bool EVP_PKEY_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, int a5)
{
  return X509at_add1_attr_by_OBJ(a1 + 28, a2, a3, a4, a5) != 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_add1_attr_by_NID  (binary VA: 0x19b8b90)
// Original: EVP_PKEY_add1_attr_by_NID
// ----------------------------------------------------------------------------
bool EVP_PKEY_add1_attr_by_NID(int a1, int a2, int a3, char *a4, int a5)
{
  return X509at_add1_attr_by_NID(a1 + 28, a2, a3, a4, a5) != 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_add1_attr_by_txt  (binary VA: 0x19b8be0)
// Original: EVP_PKEY_add1_attr_by_txt
// ----------------------------------------------------------------------------
bool EVP_PKEY_add1_attr_by_txt(int a1, int a2, int a3, char *a4, int a5)
{
  return X509at_add1_attr_by_txt(a1 + 28, a2, a3, a4, a5) != 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_dss  (binary VA: 0x19b8cd0)
// Original: EVP_dss
// ----------------------------------------------------------------------------
void * EVP_dss()
{
  return &unk_20AD860;
}

// ----------------------------------------------------------------------------
// Function: EVP_dss1  (binary VA: 0x19b8d90)
// Original: EVP_dss1
// ----------------------------------------------------------------------------
void * EVP_dss1()
{
  return &unk_20AD8C0;
}

// ----------------------------------------------------------------------------
// Function: EVP_ecdsa  (binary VA: 0x19b8e50)
// Original: EVP_ecdsa
// ----------------------------------------------------------------------------
void * EVP_ecdsa()
{
  return &unk_20AD920;
}

// ----------------------------------------------------------------------------
// Function: EVP_md4  (binary VA: 0x19b8f10)
// Original: EVP_md4
// ----------------------------------------------------------------------------
void * EVP_md4()
{
  return &unk_20AD980;
}

// ----------------------------------------------------------------------------
// Function: EVP_md5  (binary VA: 0x19b8fd0)
// Original: EVP_md5
// ----------------------------------------------------------------------------
void * EVP_md5()
{
  return &unk_20AD9E0;
}

// ----------------------------------------------------------------------------
// Function: EVP_mdc2  (binary VA: 0x19b9090)
// Original: EVP_mdc2
// ----------------------------------------------------------------------------
void * EVP_mdc2()
{
  return &unk_20ADA40;
}

// ----------------------------------------------------------------------------
// Function: EVP_ripemd160  (binary VA: 0x19b9150)
// Original: EVP_ripemd160
// ----------------------------------------------------------------------------
void * EVP_ripemd160()
{
  return &unk_20ADAA0;
}

// ----------------------------------------------------------------------------
// Function: EVP_sha  (binary VA: 0x19b9210)
// Original: EVP_sha
// ----------------------------------------------------------------------------
void * EVP_sha()
{
  return &unk_20ADB00;
}

// ----------------------------------------------------------------------------
// Function: EVP_sha1  (binary VA: 0x19b9470)
// Original: EVP_sha1
// ----------------------------------------------------------------------------
void * EVP_sha1()
{
  return &unk_20ADB60;
}

// ----------------------------------------------------------------------------
// Function: EVP_sha224  (binary VA: 0x19b9490)
// Original: EVP_sha224
// ----------------------------------------------------------------------------
void * EVP_sha224()
{
  return &unk_20ADBC0;
}

// ----------------------------------------------------------------------------
// Function: EVP_sha256  (binary VA: 0x19b94b0)
// Original: EVP_sha256
// ----------------------------------------------------------------------------
void * EVP_sha256()
{
  return &unk_20ADC20;
}

// ----------------------------------------------------------------------------
// Function: EVP_sha384  (binary VA: 0x19b94d0)
// Original: EVP_sha384
// ----------------------------------------------------------------------------
void * EVP_sha384()
{
  return &unk_20ADC80;
}

// ----------------------------------------------------------------------------
// Function: EVP_sha512  (binary VA: 0x19b94f0)
// Original: EVP_sha512
// ----------------------------------------------------------------------------
void * EVP_sha512()
{
  return &unk_20ADCE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestSignInit  (binary VA: 0x19b96e0)
// Original: EVP_DigestSignInit
// ----------------------------------------------------------------------------
bool EVP_DigestSignInit(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5)
{
  return sub_19B9510(a1, a2, a3, a4, a5, 0);
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestVerifyInit  (binary VA: 0x19b9730)
// Original: EVP_DigestVerifyInit
// ----------------------------------------------------------------------------
bool EVP_DigestVerifyInit(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5)
{
  return sub_19B9510(a1, a2, a3, a4, a5, 1);
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestSignFinal  (binary VA: 0x19b9780)
// Original: EVP_DigestSignFinal
// ----------------------------------------------------------------------------
bool EVP_DigestSignFinal(int *a1, int a2, int a3)
{
  int v3;
  int (*v4)(int, uint32_t, int, int *);
  int v5;
  int v7;
  typedef bool _g4_t_v8;
  typedef bool _g4_t_v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11[4];
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[76];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v9)) > _g4_s1 ? (15u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  v3 = a1[4];
  v4 = *(int (**)(int, uint32_t, int, int *))(*(uint32_t *)v3 + 64);
  v9 = v4 != nullptr;
  if ( a2 != 0 )
  {
    v8 = v4 != nullptr;
    v5 = 0;
    EVP_MD_CTX_init(v11);
    if ( EVP_MD_CTX_copy_ex((int *)v11, a1) != 0 )
    {
      if ( v8 )
      {
        v5 = G4_VCALL<int>(v12, 64, a2, a3, v11);
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v11));
        if ( v5 == 0 )
          return v5;
      }
      else
      {
        v5 = EVP_DigestFinal_ex(v11, (int)(uintptr_t)(v13), &v10);
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v11));
        if ( v5 == 0 )
          return v5;
      }
      if ( !v9 )
        return EVP_PKEY_sign(a1[4], a2, a3, v13, v10) > 0;
    }
  }
  else if ( v4 != nullptr )
  {
    return v4(v3, 0, a3, a1) > 0;
  }
  else
  {
    v5 = 0;
    v7 = EVP_MD_size(*a1);
    if ( v7 >= 0 )
      return EVP_PKEY_sign(a1[4], 0, a3, 0, v7) > 0;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: EVP_DigestVerifyFinal  (binary VA: 0x19b9960)
// Original: EVP_DigestVerifyFinal
// ----------------------------------------------------------------------------
int EVP_DigestVerifyFinal(int a1, int a2, int a3)
{
  int v3;
  typedef int _g4_t_v5;
  typedef bool _g4_t_v6;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[76];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v9)) > _g4_s4 ? (40u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v10)) > _g4_s5 ? (48u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  v3 = -1;
  v5 = *(uint32_t *)(**(uint32_t **)(a1 + 16) + 72);
  EVP_MD_CTX_init(v8);
  if ( EVP_MD_CTX_copy_ex((int *)v8, (int *)a1) != 0 )
  {
    v6 = v5 != 0;
    if ( v6 )
      v3 = G4_VCALL<int>(v9, 72, a2, a3, v8);
    else
      v3 = EVP_DigestFinal_ex(v8, (int)(uintptr_t)(v10), &v7);
    EVP_MD_CTX_cleanup((int)(uintptr_t)(v8));
    if ( v3 != 0 && !v6 )
      return EVP_PKEY_verify(*(uint32_t *)(a1 + 16), a2, a3, v10, v7);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_whirlpool  (binary VA: 0x19b9b30)
// Original: EVP_whirlpool
// ----------------------------------------------------------------------------
void * EVP_whirlpool()
{
  return &unk_203FAE0;
}

// ----------------------------------------------------------------------------
// Function: EVP_add_cipher  (binary VA: 0x19b9c10)
// Original: EVP_add_cipher
// ----------------------------------------------------------------------------
int EVP_add_cipher(uint32_t *a1)
{
  int v1;
  int result;
  int v3;

  v1 = (int)(uintptr_t)(OBJ_nid2sn(*a1));
  result = OBJ_NAME_add(v1, 2, a1);
  if ( result != 0 )
  {
    check_defer(*a1);
    v3 = (int)(uintptr_t)(OBJ_nid2ln(*a1));
    return OBJ_NAME_add(v3, 2, a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_add_digest  (binary VA: 0x19b9c90)
// Original: EVP_add_digest
// ----------------------------------------------------------------------------
int EVP_add_digest(uint32_t *a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = (int)(uintptr_t)(OBJ_nid2sn(*a1));
  result = OBJ_NAME_add(v1, 1, a1);
  if ( result != 0 )
  {
    check_defer(*a1);
    v3 = (int)(uintptr_t)(OBJ_nid2ln(*a1));
    result = OBJ_NAME_add(v3, 1, a1);
    if ( result != 0 )
    {
      v4 = a1[1];
      if ( v4 != 0 && v4 != *a1 )
      {
        v5 = (int)(uintptr_t)(OBJ_nid2sn(a1[1]));
        result = OBJ_NAME_add(v5, 32769, v1);
        if ( result != 0 )
        {
          check_defer(a1[1]);
          v6 = (int)(uintptr_t)(OBJ_nid2ln(a1[1]));
          return OBJ_NAME_add(v6, 32769, v1);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_get_cipherbyname  (binary VA: 0x19b9d70)
// Original: EVP_get_cipherbyname
// ----------------------------------------------------------------------------
int EVP_get_cipherbyname(int a1)
{
  return OBJ_NAME_get(a1, 2);
}

// ----------------------------------------------------------------------------
// Function: EVP_get_digestbyname  (binary VA: 0x19b9da0)
// Original: EVP_get_digestbyname
// ----------------------------------------------------------------------------
int EVP_get_digestbyname(int a1)
{
  return OBJ_NAME_get(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: EVP_cleanup  (binary VA: 0x19b9dd0)
// Original: EVP_cleanup
// ----------------------------------------------------------------------------
int EVP_cleanup()
{
  OBJ_NAME_cleanup(2);
  OBJ_NAME_cleanup(1);
  OBJ_NAME_cleanup(-1);
  EVP_PBE_cleanup();
  if ( obj_cleanup_defer == 2 )
  {
    obj_cleanup_defer = 0;
    OBJ_cleanup();
  }
  return OBJ_sigid_free();
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_do_all  (binary VA: 0x19b9e40)
// Original: EVP_CIPHER_do_all
// ----------------------------------------------------------------------------
int EVP_CIPHER_do_all(int a1, int a2)
{
  uint32_t v3[5];

  v3[1] = a1;
  v3[0] = a2;
  return ((OBJ_NAME_do_all(2, sub_19B9B50, v3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: EVP_CIPHER_do_all_sorted  (binary VA: 0x19b9e90)
// Original: EVP_CIPHER_do_all_sorted
// ----------------------------------------------------------------------------
int EVP_CIPHER_do_all_sorted(int a1, int a2)
{
  uint32_t v3[5];

  v3[1] = a1;
  v3[0] = a2;
  return OBJ_NAME_do_all_sorted(2, sub_19B9B50, v3);
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_do_all  (binary VA: 0x19b9ee0)
// Original: EVP_MD_do_all
// ----------------------------------------------------------------------------
int EVP_MD_do_all(int a1, int a2)
{
  uint32_t v3[5];

  v3[1] = a1;
  v3[0] = a2;
  return ((OBJ_NAME_do_all(1, sub_19B9BB0, v3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: EVP_MD_do_all_sorted  (binary VA: 0x19b9f30)
// Original: EVP_MD_do_all_sorted
// ----------------------------------------------------------------------------
int EVP_MD_do_all_sorted(int a1, int a2)
{
  uint32_t v3[5];

  v3[1] = a1;
  v3[0] = a2;
  return OBJ_NAME_do_all_sorted(1, sub_19B9BB0, v3);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_bits  (binary VA: 0x19ba160)
// Original: EVP_PKEY_bits
// ----------------------------------------------------------------------------
int EVP_PKEY_bits(int a1)
{
  int result;
  int v2;
  int (*v3)(int);

  result = 0;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 12);
    if ( v2 != 0 )
    {
      v3 = *(int (**)(int))(v2 + 52);
      if ( v3 != nullptr )
        return v3(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_size  (binary VA: 0x19ba190)
// Original: EVP_PKEY_size
// ----------------------------------------------------------------------------
int EVP_PKEY_size(int a1)
{
  int result;
  int v2;
  int (*v3)(int);

  result = 0;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 12);
    if ( v2 != 0 )
    {
      v3 = *(int (**)(int))(v2 + 48);
      if ( v3 != nullptr )
        return v3(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_save_parameters  (binary VA: 0x19ba1c0)
// Original: EVP_PKEY_save_parameters
// ----------------------------------------------------------------------------
int EVP_PKEY_save_parameters(uint32_t *a1, int a2)
{
  int result;

  if ( *a1 == 116 || (result = 0, *a1 == 408) )
  {
    result = a1[6];
    if ( a2 >= 0 )
      a1[6] = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_missing_parameters  (binary VA: 0x19ba1f0)
// Original: EVP_PKEY_missing_parameters
// ----------------------------------------------------------------------------
int EVP_PKEY_missing_parameters(int a1)
{
  int result;
  int v2;
  int (*v3)(int);

  result = 0;
  v2 = *(uint32_t *)(a1 + 12);
  if ( v2 != 0 )
  {
    v3 = *(int (**)(int))(v2 + 64);
    if ( v3 != nullptr )
      return v3(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_copy_parameters  (binary VA: 0x19ba220)
// Original: EVP_PKEY_copy_parameters
// ----------------------------------------------------------------------------
int EVP_PKEY_copy_parameters(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  int (*v4)(uint32_t *, uint32_t *);

  if ( *a1 == *a2 )
  {
    if ( EVP_PKEY_missing_parameters((int)(uintptr_t)(a2)) != 0 )
    {
      ERR_put_error(6, 103, 103, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    else
    {
      v3 = a2[3];
      result = 0;
      if ( v3 != 0 )
      {
        v4 = *(int (**)(uint32_t *, uint32_t *))(v3 + 68);
        if ( v4 != nullptr )
          return v4(a1, a2);
      }
    }
  }
  else
  {
    ERR_put_error(6, 103, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_cmp_parameters  (binary VA: 0x19ba2f0)
// Original: EVP_PKEY_cmp_parameters
// ----------------------------------------------------------------------------
int EVP_PKEY_cmp_parameters(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  int (*v4)(uint32_t *, uint32_t *);

  result = -1;
  if ( *a1 == *a2 )
  {
    v3 = a1[3];
    if ( v3 != 0 && (v4 = *(int (**)(uint32_t *, uint32_t *))(v3 + 72)) != nullptr )
      return v4(a1, a2);
    else
      return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_cmp  (binary VA: 0x19ba330)
// Original: EVP_PKEY_cmp
// ----------------------------------------------------------------------------
int EVP_PKEY_cmp(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  int (*v4)(uint32_t *, uint32_t *);
  int (*v5)(uint32_t *, uint32_t *);

  result = -1;
  if ( *a1 == *a2 )
  {
    v3 = a1[3];
    if ( v3 == 0 )
      return -2;
    v4 = *(int (**)(uint32_t *, uint32_t *))(v3 + 72);
    if ( v4 != nullptr )
    {
      result = v4(a1, a2);
      if ( result <= 0 )
        return result;
      v3 = a1[3];
    }
    v5 = *(int (**)(uint32_t *, uint32_t *))(v3 + 28);
    if ( v5 == nullptr )
      return -2;
    return v5(a1, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_new  (binary VA: 0x19ba390)
// Original: EVP_PKEY_new
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(32, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 1;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    result[7] = 0;
    result[6] = 1;
  }
  else
  {
    ERR_put_error(6, 106, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_set_type  (binary VA: 0x19ba440)
// Original: EVP_PKEY_set_type
// ----------------------------------------------------------------------------
int EVP_PKEY_set_type(char *a1, size_t a2)
{
  return sub_19BA000(a1, a2, nullptr, 0xFFFFFFFF);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_set_type_str  (binary VA: 0x19ba460)
// Original: EVP_PKEY_set_type_str
// ----------------------------------------------------------------------------
int EVP_PKEY_set_type_str(char *a1, char *a2, size_t a3)
{
  return sub_19BA000(a1, 0, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_assign  (binary VA: 0x19ba480)
// Original: EVP_PKEY_assign
// ----------------------------------------------------------------------------
bool EVP_PKEY_assign(char *a1, size_t a2, int a3)
{
  int v3;
  int v4;

  v3 = EVP_PKEY_set_type(a1, a2);
  v4 = 0;
  if ( v3 != 0 )
  {
    *((uint32_t *)a1 + 5) = a3;
    return a3 != 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get0  (binary VA: 0x19ba4e0)
// Original: EVP_PKEY_get0
// ----------------------------------------------------------------------------
int EVP_PKEY_get0(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_set1_RSA  (binary VA: 0x19ba4f0)
// Original: EVP_PKEY_set1_RSA
// ----------------------------------------------------------------------------
bool EVP_PKEY_set1_RSA(char *a1, int a2)
{
  bool v2;

  v2 = EVP_PKEY_assign(a1, 6u, a2);
  if ( v2 )
    RSA_up_ref(a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get1_RSA  (binary VA: 0x19ba550)
// Original: EVP_PKEY_get1_RSA
// ----------------------------------------------------------------------------
int EVP_PKEY_get1_RSA(uint32_t *a1)
{
  if ( *a1 == 6 )
  {
    RSA_up_ref(a1[5]);
    return a1[5];
  }
  else
  {
    ERR_put_error(6, 121, 127, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_set1_DSA  (binary VA: 0x19ba5d0)
// Original: EVP_PKEY_set1_DSA
// ----------------------------------------------------------------------------
bool EVP_PKEY_set1_DSA(char *a1, int a2)
{
  bool v2;

  v2 = EVP_PKEY_assign(a1, 0x74u, a2);
  if ( v2 )
    DSA_up_ref(a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get1_DSA  (binary VA: 0x19ba630)
// Original: EVP_PKEY_get1_DSA
// ----------------------------------------------------------------------------
int EVP_PKEY_get1_DSA(uint32_t *a1)
{
  if ( *a1 == 116 )
  {
    DSA_up_ref(a1[5]);
    return a1[5];
  }
  else
  {
    ERR_put_error(6, 120, 129, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_set1_EC_KEY  (binary VA: 0x19ba6b0)
// Original: EVP_PKEY_set1_EC_KEY
// ----------------------------------------------------------------------------
bool EVP_PKEY_set1_EC_KEY(char *a1, int a2)
{
  bool v2;

  v2 = EVP_PKEY_assign(a1, 0x198u, a2);
  if ( v2 )
    EC_KEY_up_ref(a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get1_EC_KEY  (binary VA: 0x19ba710)
// Original: EVP_PKEY_get1_EC_KEY
// ----------------------------------------------------------------------------
int EVP_PKEY_get1_EC_KEY(uint32_t *a1)
{
  if ( *a1 == 408 )
  {
    EC_KEY_up_ref(a1[5]);
    return a1[5];
  }
  else
  {
    ERR_put_error(6, 131, 142, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_set1_DH  (binary VA: 0x19ba790)
// Original: EVP_PKEY_set1_DH
// ----------------------------------------------------------------------------
bool EVP_PKEY_set1_DH(char *a1, int a2)
{
  bool v2;

  v2 = EVP_PKEY_assign(a1, 0x1Cu, a2);
  if ( v2 )
    DH_up_ref(a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get1_DH  (binary VA: 0x19ba7f0)
// Original: EVP_PKEY_get1_DH
// ----------------------------------------------------------------------------
int EVP_PKEY_get1_DH(uint32_t *a1)
{
  if ( *a1 == 28 )
  {
    DH_up_ref(a1[5]);
    return a1[5];
  }
  else
  {
    ERR_put_error(6, 119, 128, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_type  (binary VA: 0x19ba870)
// Original: EVP_PKEY_type
// ----------------------------------------------------------------------------
int EVP_PKEY_type(int a1)
{
  int *v1;
  int v2;
  typedef uint32_t *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v1 = (int *)EVP_PKEY_asn1_find(&v4, a1);
  v2 = 0;
  if ( v1 != nullptr )
    v2 = *v1;
  if ( v4 != nullptr )
    ENGINE_finish(v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_id  (binary VA: 0x19ba8d0)
// Original: EVP_PKEY_id
// ----------------------------------------------------------------------------
int EVP_PKEY_id(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_base_id  (binary VA: 0x19ba8e0)
// Original: EVP_PKEY_base_id
// ----------------------------------------------------------------------------
int EVP_PKEY_base_id(int *a1)
{
  return EVP_PKEY_type(*a1);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_free  (binary VA: 0x19ba910)
// Original: EVP_PKEY_free
// ----------------------------------------------------------------------------
void EVP_PKEY_free(void *a1)
{
  int v1;
  void (*v2)(void *);

  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 2, -1, 10, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    v1 = *((uint32_t *)a1 + 3);
    if ( v1 != 0 )
    {
      v2 = *(void (**)(void *))(v1 + 80);
      if ( v2 != nullptr )
      {
        v2(a1);
        *((uint32_t *)a1 + 5) = 0;
      }
    }
    if ( *((uint32_t *)a1 + 4) != 0 )
    {
      ENGINE_finish(*((uint32_t **)a1 + 4));
      *((uint32_t *)a1 + 4) = 0;
    }
    if ( *((uint32_t *)a1 + 7) != 0 )
      sk_pop_free(*((void **)a1 + 7), (int)(uintptr_t)(X509_ATTRIBUTE_free));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_print_public  (binary VA: 0x19ba9d0)
// Original: EVP_PKEY_print_public
// ----------------------------------------------------------------------------
int EVP_PKEY_print_public(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int (*v5)(uint32_t *, uint32_t *, int, int);

  v4 = a2[3];
  if ( v4 != 0 && (v5 = *(int (**)(uint32_t *, uint32_t *, int, int))(v4 + 32)) != nullptr )
    return v5(a1, a2, a3, a4);
  else
    return sub_19B9F80(a1, a2, a3, (int)(uintptr_t)("Public Key"));
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_print_private  (binary VA: 0x19baa60)
// Original: EVP_PKEY_print_private
// ----------------------------------------------------------------------------
int EVP_PKEY_print_private(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int (*v5)(uint32_t *, uint32_t *, int, int);

  v4 = a2[3];
  if ( v4 != 0 && (v5 = *(int (**)(uint32_t *, uint32_t *, int, int))(v4 + 44)) != nullptr )
    return v5(a1, a2, a3, a4);
  else
    return sub_19B9F80(a1, a2, a3, (int)(uintptr_t)("Private Key"));
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_print_params  (binary VA: 0x19baaf0)
// Original: EVP_PKEY_print_params
// ----------------------------------------------------------------------------
int EVP_PKEY_print_params(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int (*v5)(uint32_t *, uint32_t *, int, int);

  v4 = a2[3];
  if ( v4 != 0 && (v5 = *(int (**)(uint32_t *, uint32_t *, int, int))(v4 + 76)) != nullptr )
    return v5(a1, a2, a3, a4);
  else
    return sub_19B9F80(a1, a2, a3, (int)(uintptr_t)("Parameters"));
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_get_default_digest_nid  (binary VA: 0x19bab80)
// Original: EVP_PKEY_get_default_digest_nid
// ----------------------------------------------------------------------------
int EVP_PKEY_get_default_digest_nid(int a1, int a2)
{
  int v2;
  int (*v3)(int, int, uint32_t, int);

  v2 = *(uint32_t *)(a1 + 12);
  if ( v2 != 0 && (v3 = *(int (**)(int, int, uint32_t, int))(v2 + 84)) != nullptr )
    return v3(a1, 3, 0, a2);
  else
    return -2;
}

// ----------------------------------------------------------------------------
// Function: EVP_SignFinal  (binary VA: 0x19babc0)
// Original: EVP_SignFinal
// ----------------------------------------------------------------------------
int EVP_SignFinal(int *a1, int a2, int *a3, uint32_t *a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  void *v8;
  void *v9;
  int (*v11)(uint32_t, uint8_t *, int, int, int *, uint32_t);
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14[6];
  typedef uint8_t _g4_t_v15[92];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  *a3 = 0;
  EVP_MD_CTX_init(v14);
  EVP_MD_CTX_copy_ex((int *)v14, a1);
  EVP_DigestFinal_ex(v14, (int)(uintptr_t)(v15), &v12);
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v14));
  v4 = (uint32_t *)*a1;
  v5 = 0;
  if ( (*(uint8_t *)(*a1 + 12) & 4) != 0 )
  {
    v7 = 0;
    v13 = EVP_PKEY_size((int)(uintptr_t)(a4));
    v8 = (void *)EVP_PKEY_CTX_new(a4, 0);
    v9 = v8;
    if ( v8 != nullptr
      && (int)EVP_PKEY_sign_init(v8) > 0
      && (int)EVP_PKEY_CTX_ctrl(v9, -1, 248, 1, 0, *a1) > 0
      && (int)EVP_PKEY_sign(v9, a2, &v13, v15, v12) > 0 )
    {
      LOWORD(v7) = 1;
      *a3 = v13;
    }
    EVP_PKEY_CTX_free(v9);
    return v7;
  }
  while ( 1 )
  {
    v6 = v4[v5 + 11];
    if ( v6 == 0 )
    {
LABEL_5:
      v7 = 0;
      ERR_put_error(6, 107, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      return v7;
    }
    if ( *a4 == v6 )
      break;
    if ( ++v5 == 4 )
      goto LABEL_5;
  }
  v11 = (int (*)(uint32_t, uint8_t *, int, int, int *, uint32_t))v4[9];
  if ( v11 == nullptr )
  {
    v7 = 0;
    ERR_put_error(6, 107, 104, (int)(uintptr_t)(&unk_1B15112), 0);
    return v7;
  }
  return v11(*v4, v15, v12, a2, a3, a4[5]);
}

// ----------------------------------------------------------------------------
// Function: EVP_VerifyFinal  (binary VA: 0x19badd0)
// Original: EVP_VerifyFinal
// ----------------------------------------------------------------------------
int EVP_VerifyFinal(int *a1, int a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  void *v8;
  void *v9;
  int (*v11)(uint32_t, uint8_t *, int, int, int, uint32_t);
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13[6];
  typedef uint8_t _g4_t_v14[76];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  EVP_MD_CTX_init(v13);
  EVP_MD_CTX_copy_ex((int *)v13, a1);
  EVP_DigestFinal_ex(v13, (int)(uintptr_t)(v14), &v12);
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v13));
  v4 = (uint32_t *)*a1;
  v5 = 0;
  if ( (*(uint8_t *)(*a1 + 12) & 4) != 0 )
  {
    v8 = (void *)EVP_PKEY_CTX_new(a4, 0);
    v9 = v8;
    v7 = -1;
    if ( v8 != nullptr && (int)EVP_PKEY_verify_init(v8) > 0 && (int)EVP_PKEY_CTX_ctrl(v9, -1, 248, 1, 0, *a1) > 0 )
      v7 = EVP_PKEY_verify(v9, a2, a3, v14, v12);
    EVP_PKEY_CTX_free(v9);
  }
  else
  {
    while ( 1 )
    {
      v6 = v4[v5 + 11];
      if ( v6 == 0 )
      {
LABEL_5:
        v7 = -1;
        ERR_put_error(6, 108, 110, (int)(uintptr_t)(&unk_1B15112), 0);
        return v7;
      }
      if ( *a4 == v6 )
        break;
      if ( ++v5 == 4 )
        goto LABEL_5;
    }
    v11 = (int (*)(uint32_t, uint8_t *, int, int, int, uint32_t))v4[10];
    if ( v11 != nullptr )
    {
      return v11(*v4, v14, v12, a2, a3, a4[5]);
    }
    else
    {
      v7 = 0;
      ERR_put_error(6, 108, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_sign_init  (binary VA: 0x19bafd0)
// Original: EVP_PKEY_sign_init
// ----------------------------------------------------------------------------
int EVP_PKEY_sign_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 40) != 0 )
  {
    a1[4] = 8;
    v2 = *(int (**)(int *))(v1 + 36);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 141, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_sign  (binary VA: 0x19bb080)
// Original: EVP_PKEY_sign
// ----------------------------------------------------------------------------
int EVP_PKEY_sign(int *a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v5;
  int (*v6)(int *, int, unsigned int *, int, int);
  unsigned int v7;

  if ( a1 != nullptr
    && (v5 = *a1, *a1 != 0)
    && (v6 = *(int (**)(int *, int, unsigned int *, int, int))(v5 + 40)) != nullptr )
  {
    if ( a1[4] == 8 )
    {
      if ( (*(uint8_t *)(v5 + 4) & 2) != 0 )
      {
        v7 = EVP_PKEY_size(a1[2]);
        if ( a2 == 0 )
        {
          *a3 = v7;
          return 1;
        }
        if ( v7 > *a3 )
        {
          ERR_put_error(6, 140, 155, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v6 = *(int (**)(int *, int, unsigned int *, int, int))(*a1 + 40);
      }
      return v6(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(6, 140, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 140, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_verify_init  (binary VA: 0x19bb1e0)
// Original: EVP_PKEY_verify_init
// ----------------------------------------------------------------------------
int EVP_PKEY_verify_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 48) != 0 )
  {
    a1[4] = 16;
    v2 = *(int (**)(int *))(v1 + 44);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 143, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_verify  (binary VA: 0x19bb290)
// Original: EVP_PKEY_verify
// ----------------------------------------------------------------------------
int EVP_PKEY_verify(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int (*v5)(uint32_t *, int, int, int, int);

  if ( a1 != nullptr && *a1 != 0 && (v5 = *(int (**)(uint32_t *, int, int, int, int))(*a1 + 48)) != nullptr )
  {
    if ( a1[4] == 16 )
    {
      return v5(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(6, 142, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 142, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_verify_recover_init  (binary VA: 0x19bb360)
// Original: EVP_PKEY_verify_recover_init
// ----------------------------------------------------------------------------
int EVP_PKEY_verify_recover_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 56) != 0 )
  {
    a1[4] = 32;
    v2 = *(int (**)(int *))(v1 + 52);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 145, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_verify_recover  (binary VA: 0x19bb410)
// Original: EVP_PKEY_verify_recover
// ----------------------------------------------------------------------------
int EVP_PKEY_verify_recover(int *a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v5;
  int (*v6)(int *, int, unsigned int *, int, int);
  unsigned int v7;

  if ( a1 != nullptr
    && (v5 = *a1, *a1 != 0)
    && (v6 = *(int (**)(int *, int, unsigned int *, int, int))(v5 + 56)) != nullptr )
  {
    if ( a1[4] == 32 )
    {
      if ( (*(uint8_t *)(v5 + 4) & 2) != 0 )
      {
        v7 = EVP_PKEY_size(a1[2]);
        if ( a2 == 0 )
        {
          *a3 = v7;
          return 1;
        }
        if ( v7 > *a3 )
        {
          ERR_put_error(6, 144, 155, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v6 = *(int (**)(int *, int, unsigned int *, int, int))(*a1 + 56);
      }
      return v6(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(6, 144, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 144, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_encrypt_init  (binary VA: 0x19bb570)
// Original: EVP_PKEY_encrypt_init
// ----------------------------------------------------------------------------
int EVP_PKEY_encrypt_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 80) != 0 )
  {
    a1[4] = 256;
    v2 = *(int (**)(int *))(v1 + 76);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 139, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_encrypt  (binary VA: 0x19bb620)
// Original: EVP_PKEY_encrypt
// ----------------------------------------------------------------------------
int EVP_PKEY_encrypt(int *a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v5;
  int (*v6)(int *, int, unsigned int *, int, int);
  unsigned int v7;

  if ( a1 != nullptr
    && (v5 = *a1, *a1 != 0)
    && (v6 = *(int (**)(int *, int, unsigned int *, int, int))(v5 + 80)) != nullptr )
  {
    if ( a1[4] == 256 )
    {
      if ( (*(uint8_t *)(v5 + 4) & 2) != 0 )
      {
        v7 = EVP_PKEY_size(a1[2]);
        if ( a2 == 0 )
        {
          *a3 = v7;
          return 1;
        }
        if ( v7 > *a3 )
        {
          ERR_put_error(6, 105, 155, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v6 = *(int (**)(int *, int, unsigned int *, int, int))(*a1 + 80);
      }
      return v6(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(6, 105, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 105, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_decrypt_init  (binary VA: 0x19bb780)
// Original: EVP_PKEY_decrypt_init
// ----------------------------------------------------------------------------
int EVP_PKEY_decrypt_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 88) != 0 )
  {
    a1[4] = 512;
    v2 = *(int (**)(int *))(v1 + 84);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 138, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_decrypt  (binary VA: 0x19bb830)
// Original: EVP_PKEY_decrypt
// ----------------------------------------------------------------------------
int EVP_PKEY_decrypt(int *a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v5;
  int (*v6)(int *, int, unsigned int *, int, int);
  unsigned int v7;

  if ( a1 != nullptr
    && (v5 = *a1, *a1 != 0)
    && (v6 = *(int (**)(int *, int, unsigned int *, int, int))(v5 + 88)) != nullptr )
  {
    if ( a1[4] == 512 )
    {
      if ( (*(uint8_t *)(v5 + 4) & 2) != 0 )
      {
        v7 = EVP_PKEY_size(a1[2]);
        if ( a2 == 0 )
        {
          *a3 = v7;
          return 1;
        }
        if ( v7 > *a3 )
        {
          ERR_put_error(6, 104, 155, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v6 = *(int (**)(int *, int, unsigned int *, int, int))(*a1 + 88);
      }
      return v6(a1, a2, a3, a4, a5);
    }
    else
    {
      ERR_put_error(6, 104, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 104, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_derive_init  (binary VA: 0x19bb990)
// Original: EVP_PKEY_derive_init
// ----------------------------------------------------------------------------
int EVP_PKEY_derive_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 96) != 0 )
  {
    a1[4] = 1024;
    v2 = *(int (**)(int *))(v1 + 92);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 154, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_derive_set_peer  (binary VA: 0x19bba40)
// Original: EVP_PKEY_derive_set_peer
// ----------------------------------------------------------------------------
int EVP_PKEY_derive_set_peer(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int (*v3)(int, int, uint32_t, uint32_t *);
  int v4;
  int result;
  uint32_t *v6;
  uint32_t *v7;

  if ( a1 != 0
    && (v2 = *(uint32_t **)a1, *(uint32_t *)a1 != 0)
    && (v2[24] != 0 || v2[20] != 0 || v2[22] != 0)
    && (v3 = (int (*)(int, int, uint32_t, uint32_t *))v2[25]) != nullptr )
  {
    v4 = *(uint32_t *)(a1 + 16);
    if ( v4 == 256 || v4 == 1024 || v4 == 512 )
    {
      result = v3(a1, 2, 0, a2);
      if ( result > 0 )
      {
        if ( result == 2 )
        {
          return 1;
        }
        else
        {
          v6 = *(uint32_t **)(a1 + 8);
          if ( v6 != nullptr )
          {
            if ( *v6 == *a2 )
            {
              if ( EVP_PKEY_missing_parameters((int)(uintptr_t)(a2)) != 0 || EVP_PKEY_cmp_parameters(*(uint32_t **)(a1 + 8), a2) != 0 )
              {
                if ( *(uint32_t *)(a1 + 12) != 0 )
                  EVP_PKEY_free(*(void **)(a1 + 12));
                v7 = *(uint32_t **)a1;
                *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(a2);
                result = ((int (*)(int, int, int, uint32_t *))v7[25])(a1, 2, 1, a2);
                if ( result <= 0 )
                {
                  *(uint32_t *)(a1 + 12) = 0;
                }
                else
                {
                  CRYPTO_add_lock(a2 + 2, 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
                  return 1;
                }
              }
              else
              {
                ERR_put_error(6, 155, 153, (int)(uintptr_t)(&unk_1B15112), 0);
                return -1;
              }
            }
            else
            {
              ERR_put_error(6, 155, 101, (int)(uintptr_t)(&unk_1B15112), 0);
              return -1;
            }
          }
          else
          {
            ERR_put_error(6, 155, 154, (int)(uintptr_t)(&unk_1B15112), 0);
            return -1;
          }
        }
      }
    }
    else
    {
      ERR_put_error(6, 155, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 155, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_derive  (binary VA: 0x19bbcc0)
// Original: EVP_PKEY_derive
// ----------------------------------------------------------------------------
int EVP_PKEY_derive(int *a1, int a2, unsigned int *a3)
{
  int v3;
  int (*v4)(int *, int, unsigned int *);
  unsigned int v5;

  if ( a1 != nullptr
    && (v3 = *a1, *a1 != 0)
    && (v4 = *(int (**)(int *, int, unsigned int *))(v3 + 96)) != nullptr )
  {
    if ( a1[4] == 1024 )
    {
      if ( (*(uint8_t *)(v3 + 4) & 2) != 0 )
      {
        v5 = EVP_PKEY_size(a1[2]);
        if ( a2 == 0 )
        {
          *a3 = v5;
          return 1;
        }
        if ( v5 > *a3 )
        {
          ERR_put_error(6, 153, 155, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v4 = *(int (**)(int *, int, unsigned int *))(*a1 + 96);
      }
      return v4(a1, a2, a3);
    }
    else
    {
      ERR_put_error(6, 153, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 153, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_paramgen_init  (binary VA: 0x19bbe40)
// Original: EVP_PKEY_paramgen_init
// ----------------------------------------------------------------------------
int EVP_PKEY_paramgen_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 24) != 0 )
  {
    a1[4] = 2;
    v2 = *(int (**)(int *))(v1 + 20);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 149, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_paramgen  (binary VA: 0x19bbef0)
// Original: EVP_PKEY_paramgen
// ----------------------------------------------------------------------------
int EVP_PKEY_paramgen(uint32_t *a1, void **a2)
{
  int (*v2)(uint32_t *, void *);
  int result;
  uint32_t *v4;
  int v5;

  if ( a1 != nullptr && *a1 != 0 && (v2 = *(int (**)(uint32_t *, void *))(*a1 + 24)) != nullptr )
  {
    if ( a1[4] == 2 )
    {
      if ( a2 != nullptr )
      {
        if ( *a2 != nullptr )
        {
          result = v2(a1, *a2);
        }
        else
        {
          v4 = EVP_PKEY_new();
          *a2 = v4;
          result = G4_VCALL<int>(a1, 24, v4);
        }
        if ( result <= 0 )
        {
          v5 = result;
          EVP_PKEY_free(*a2);
          *a2 = nullptr;
          return v5;
        }
      }
      else
      {
        return -1;
      }
    }
    else
    {
      ERR_put_error(6, 148, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 148, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_keygen_init  (binary VA: 0x19bc020)
// Original: EVP_PKEY_keygen_init
// ----------------------------------------------------------------------------
int EVP_PKEY_keygen_init(int *a1)
{
  int v1;
  int (*v2)(int *);
  int result;

  if ( a1 != nullptr && (v1 = *a1, *a1 != 0) && *(uint32_t *)(v1 + 32) != 0 )
  {
    a1[4] = 4;
    v2 = *(int (**)(int *))(v1 + 28);
    result = 1;
    if ( v2 != nullptr )
    {
      result = v2(a1);
      if ( result <= 0 )
        a1[4] = 0;
    }
  }
  else
  {
    ERR_put_error(6, 147, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_keygen  (binary VA: 0x19bc0d0)
// Original: EVP_PKEY_keygen
// ----------------------------------------------------------------------------
int EVP_PKEY_keygen(uint32_t *a1, void **a2)
{
  int (*v2)(uint32_t *, void *);
  int result;
  uint32_t *v4;
  int v5;

  if ( a1 != nullptr && *a1 != 0 && (v2 = *(int (**)(uint32_t *, void *))(*a1 + 32)) != nullptr )
  {
    if ( a1[4] == 4 )
    {
      if ( a2 != nullptr )
      {
        if ( *a2 != nullptr )
        {
          result = v2(a1, *a2);
        }
        else
        {
          v4 = EVP_PKEY_new();
          *a2 = v4;
          result = G4_VCALL<int>(a1, 32, v4);
        }
        if ( result <= 0 )
        {
          v5 = result;
          EVP_PKEY_free(*a2);
          *a2 = nullptr;
          return v5;
        }
      }
      else
      {
        return -1;
      }
    }
    else
    {
      ERR_put_error(6, 146, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(6, 146, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_set_cb  (binary VA: 0x19bc200)
// Original: EVP_PKEY_CTX_set_cb
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_set_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 28) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get_cb  (binary VA: 0x19bc210)
// Original: EVP_PKEY_CTX_get_cb
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get_cb(int a1)
{
  return *(uint32_t *)(a1 + 28);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get_keygen_info  (binary VA: 0x19bc250)
// Original: EVP_PKEY_CTX_get_keygen_info
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get_keygen_info(int a1, int a2)
{
  int result;

  if ( a2 == -1 )
    return *(uint32_t *)(a1 + 36);
  result = 0;
  if ( a2 >= 0 && a2 <= *(uint32_t *)(a1 + 36) )
    return *(uint32_t *)(*(uint32_t *)(a1 + 32) + 4 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_new_mac_key  (binary VA: 0x19bc280)
// Original: EVP_PKEY_new_mac_key
// ----------------------------------------------------------------------------
void * EVP_PKEY_new_mac_key(int a1, int a2, int a3, int a4)
{
  int *v4;
  void *result;
  typedef void *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v6 = nullptr;
  v4 = (int *)EVP_PKEY_CTX_new_id(a1, a2);
  result = nullptr;
  if ( v4 != nullptr )
  {
    if ( EVP_PKEY_keygen_init(v4) > 0 && (int)EVP_PKEY_CTX_ctrl(v4, -1, 4, 6, a4, a3) > 0 )
      EVP_PKEY_keygen(v4, &v6);
    EVP_PKEY_CTX_free(v4);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_find  (binary VA: 0x19bc360)
// Original: EVP_PKEY_meth_find
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_find(int a1)
{
  int v1;
  int v2;
  typedef uint32_t *_g4_t_v4;
  typedef uint32_t _g4_t_v5[30];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  v5[0] = a1;
  v4 = v5;
  if ( app_pkey_methods != 0 )
  {
    v1 = sk_find(app_pkey_methods, v5);
    if ( v1 >= 0 )
      return sk_value(app_pkey_methods, v1);
  }
  v2 = OBJ_bsearch(&v4, &off_20CBEB8, 5, 4, sub_19BC340);
  if ( v2 != 0 )
    return *(uint32_t *)v2;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_new  (binary VA: 0x19bc410)
// Original: EVP_PKEY_meth_new
// ----------------------------------------------------------------------------
uint32_t * EVP_PKEY_meth_new(int a1, int a2)
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(108, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    result[2] = 0;
    *result = a1;
    result[3] = 0;
    result[1] = a2 | 1;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0;
    result[15] = 0;
    result[16] = 0;
    result[17] = 0;
    result[18] = 0;
    result[19] = 0;
    result[20] = 0;
    result[21] = 0;
    result[22] = 0;
    result[23] = 0;
    result[24] = 0;
    result[25] = 0;
    result[26] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_free  (binary VA: 0x19bc510)
// Original: EVP_PKEY_meth_free
// ----------------------------------------------------------------------------
void * EVP_PKEY_meth_free(void *a1)
{
  void *result;

  result = a1;
  if ( a1 != nullptr && (*((uint8_t *)a1 + 4) & 1) != 0 )
    return (void *)CRYPTO_free(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_add0  (binary VA: 0x19bc540)
// Original: EVP_PKEY_meth_add0
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_add0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = app_pkey_methods;
  if ( app_pkey_methods != 0 || (v5 = (int)(uintptr_t)(sk_new(sub_19BC320)), v3 = 0, v1 = v5, app_pkey_methods = v5, v5 != 0) )
  {
    v2 = sk_push(v1, a1);
    v3 = 0;
    if ( v2 != 0 )
    {
      sk_sort(app_pkey_methods);
      return 1;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_free  (binary VA: 0x19bc5c0)
// Original: EVP_PKEY_CTX_free
// ----------------------------------------------------------------------------
void EVP_PKEY_CTX_free(void **a1)
{
  void (*v1)(void **);

  if ( a1 != nullptr )
  {
    if ( *a1 != nullptr )
    {
      v1 = *((void (**)(void **))*a1 + 4);
      if ( v1 != nullptr )
        v1(a1);
    }
    if ( a1[2] != nullptr )
      EVP_PKEY_free(a1[2]);
    if ( a1[3] != nullptr )
      EVP_PKEY_free(a1[3]);
    if ( a1[1] != nullptr )
      ENGINE_finish(a1[1]);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_dup  (binary VA: 0x19bc630)
// Original: EVP_PKEY_CTX_dup
// ----------------------------------------------------------------------------
void ** EVP_PKEY_CTX_dup(void **a1)
{
  void **v1;
  void **v2;
  uint32_t *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  void **v8;

  if ( *a1 == nullptr || *((uint32_t *)*a1 + 3) == 0 )
    return nullptr;
  if ( a1[1] != nullptr && ENGINE_init(a1[1]) == 0 )
  {
    v2 = nullptr;
    ERR_put_error(6, 156, 38, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v1 = (void **)CRYPTO_malloc(40, (int)(uintptr_t)(&unk_1B15112), 0);
    v2 = v1;
    if ( v1 != nullptr )
    {
      *v1 = *a1;
      v1[1] = a1[1];
      v3 = (uint32_t *)(a1[2]);
      v4 = nullptr;
      if ( v3 != nullptr )
      {
        CRYPTO_add_lock(v3 + 2, 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
        v4 = a1[2];
      }
      v2[2] = v4;
      v5 = (uint32_t *)(a1[3]);
      v6 = nullptr;
      if ( v5 != nullptr )
      {
        CRYPTO_add_lock(v5 + 2, 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
        v6 = a1[3];
      }
      v2[3] = v6;
      v2[5] = nullptr;
      v2[6] = nullptr;
      v2[4] = a1[4];
      if ( (*((int (**)(void **, void **))*a1 + 3))(v2, a1) <= 0 )
      {
        v8 = v2;
        v2 = nullptr;
        EVP_PKEY_CTX_free(v8);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_new_id  (binary VA: 0x19bc9f0)
// Original: EVP_PKEY_CTX_new_id
// ----------------------------------------------------------------------------
void ** EVP_PKEY_CTX_new_id(int a1, uint32_t *a2)
{
  return sub_19BC7B0(nullptr, a2, a1);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_new  (binary VA: 0x19bca00)
// Original: EVP_PKEY_CTX_new
// ----------------------------------------------------------------------------
void ** EVP_PKEY_CTX_new(uint32_t *a1, uint32_t *a2)
{
  return sub_19BC7B0(a1, a2, -1);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_ctrl  (binary VA: 0x19bca20)
// Original: EVP_PKEY_CTX_ctrl
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_ctrl(int a1, int a2, int a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  int (*v7)(int, int, int, int);
  int result;
  int v9;

  if ( a1 == 0 )
    goto LABEL_10;
  v6 = *(uint32_t **)a1;
  if ( *(uint32_t *)a1 == 0 )
    goto LABEL_10;
  v7 = (int (*)(int, int, int, int))v6[25];
  if ( v7 == nullptr )
    goto LABEL_10;
  if ( a2 == -1 || (result = -1, *v6 == a2) )
  {
    v9 = *(uint32_t *)(a1 + 16);
    if ( v9 == 0 )
    {
      ERR_put_error(6, 137, 149, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
    if ( a3 != -1 && (v9 & a3) == 0 )
    {
      ERR_put_error(6, 137, 148, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
    result = v7(a1, a4, a5, a6);
    if ( result == -2 )
    {
LABEL_10:
      ERR_put_error(6, 137, 147, (int)(uintptr_t)(&unk_1B15112), 0);
      return -2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_ctrl_str  (binary VA: 0x19bcbb0)
// Original: EVP_PKEY_CTX_ctrl_str
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_ctrl_str(int a1, const char *a2, int a3)
{
  int (*v3)(int, const char *, int);
  int digestbyname;

  if ( a1 != 0
    && *(uint32_t *)a1 != 0
    && (v3 = *(int (**)(int, const char *, int))(*(uint32_t *)a1 + 104)) != nullptr )
  {
    if ( strcmp(a2, "digest") == 0 )
    {
      if ( a3 != 0 && (digestbyname = EVP_get_digestbyname(a3)) != 0 )
      {
        return EVP_PKEY_CTX_ctrl(a1, -1, 248, 1, 0, digestbyname);
      }
      else
      {
        ERR_put_error(6, 150, 152, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      return v3(a1, a2, a3);
    }
  }
  else
  {
    ERR_put_error(6, 150, 147, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get_operation  (binary VA: 0x19bccf0)
// Original: EVP_PKEY_CTX_get_operation
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get_operation(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_set0_keygen_info  (binary VA: 0x19bcd00)
// Original: EVP_PKEY_CTX_set0_keygen_info
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_set0_keygen_info(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 32) = a2;
  *(uint32_t *)(a1 + 36) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_set_data  (binary VA: 0x19bcd20)
// Original: EVP_PKEY_CTX_set_data
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_set_data(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get_data  (binary VA: 0x19bcd30)
// Original: EVP_PKEY_CTX_get_data
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get_data(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get0_pkey  (binary VA: 0x19bcd40)
// Original: EVP_PKEY_CTX_get0_pkey
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get0_pkey(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get0_peerkey  (binary VA: 0x19bcd50)
// Original: EVP_PKEY_CTX_get0_peerkey
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get0_peerkey(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_set_app_data  (binary VA: 0x19bcd60)
// Original: EVP_PKEY_CTX_set_app_data
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_set_app_data(int a1, int a2)
{
  *(uint32_t *)(a1 + 24) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_CTX_get_app_data  (binary VA: 0x19bcd70)
// Original: EVP_PKEY_CTX_get_app_data
// ----------------------------------------------------------------------------
int EVP_PKEY_CTX_get_app_data(int a1)
{
  return *(uint32_t *)(a1 + 24);
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_init  (binary VA: 0x19bcd80)
// Original: EVP_PKEY_meth_set_init
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_init(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_copy  (binary VA: 0x19bcd90)
// Original: EVP_PKEY_meth_set_copy
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_copy(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_cleanup  (binary VA: 0x19bcda0)
// Original: EVP_PKEY_meth_set_cleanup
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_cleanup(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_paramgen  (binary VA: 0x19bcdb0)
// Original: EVP_PKEY_meth_set_paramgen
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_paramgen(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 20) = a2;
  *(uint32_t *)(a1 + 24) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_keygen  (binary VA: 0x19bcdd0)
// Original: EVP_PKEY_meth_set_keygen
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_keygen(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 28) = a2;
  *(uint32_t *)(a1 + 32) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_sign  (binary VA: 0x19bcdf0)
// Original: EVP_PKEY_meth_set_sign
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_sign(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 36) = a2;
  *(uint32_t *)(a1 + 40) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_verify  (binary VA: 0x19bce10)
// Original: EVP_PKEY_meth_set_verify
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_verify(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 44) = a2;
  *(uint32_t *)(a1 + 48) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_verify_recover  (binary VA: 0x19bce30)
// Original: EVP_PKEY_meth_set_verify_recover
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_verify_recover(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 52) = a2;
  *(uint32_t *)(a1 + 56) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_signctx  (binary VA: 0x19bce50)
// Original: EVP_PKEY_meth_set_signctx
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_signctx(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 60) = a2;
  *(uint32_t *)(a1 + 64) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_verifyctx  (binary VA: 0x19bce70)
// Original: EVP_PKEY_meth_set_verifyctx
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_verifyctx(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 68) = a2;
  *(uint32_t *)(a1 + 72) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_encrypt  (binary VA: 0x19bce90)
// Original: EVP_PKEY_meth_set_encrypt
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_encrypt(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 76) = a2;
  *(uint32_t *)(a1 + 80) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_decrypt  (binary VA: 0x19bceb0)
// Original: EVP_PKEY_meth_set_decrypt
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_decrypt(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 84) = a2;
  *(uint32_t *)(a1 + 88) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_derive  (binary VA: 0x19bced0)
// Original: EVP_PKEY_meth_set_derive
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_derive(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 92) = a2;
  *(uint32_t *)(a1 + 96) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_PKEY_meth_set_ctrl  (binary VA: 0x19bcef0)
// Original: EVP_PKEY_meth_set_ctrl
// ----------------------------------------------------------------------------
int EVP_PKEY_meth_set_ctrl(int a1, int a2, int a3)
{
  *(uint32_t *)(a1 + 100) = a2;
  *(uint32_t *)(a1 + 104) = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: HMAC_Init_ex  (binary VA: 0x19bd5d0)
// Original: HMAC_Init_ex
// ----------------------------------------------------------------------------
bool HMAC_Init_ex(uint32_t *a1, void *src, signed int n, uint32_t *a4, uint32_t *a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  signed int v8;
  int i;
  int *v10;
  int v12;
  int j;
  int v14;
  typedef void **_g4_t_v15;
  typedef uint8_t _g4_t_v16[156];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  v5 = a4;
  if ( a4 != nullptr )
  {
    *a1 = (uint32_t)(uintptr_t)(a4);
    v6 = 1;
  }
  else
  {
    v5 = (uint32_t *)*a1;
    v6 = 0;
  }
  if ( src != nullptr )
  {
    v7 = EVP_MD_block_size((int)(uintptr_t)(v5));
    if ( v7 > 128 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "j <= (int)sizeof(ctx->key)");
    if ( v7 < n )
    {
      v15 = (void **)(a1 + 1);
      if ( EVP_DigestInit_ex((int)(uintptr_t)(a1 + 1), v5, a5) == 0
        || EVP_DigestUpdate((int)(uintptr_t)(v15), (int)(uintptr_t)(src), n) == 0
        || EVP_DigestFinal_ex(v15, (int)(uintptr_t)(a1 + 20), a1 + 19) == 0 )
      {
        return false;
      }
      v8 = a1[19];
    }
    else
    {
      if ( (unsigned int)n > 0x80 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "len>=0 && len<=(int)sizeof(ctx->key)");
      memcpy(a1 + 20, src, n);
      a1[19] = n;
      v8 = n;
    }
    if ( v8 != 128 )
      memset((char *)a1 + v8 + 80, 0, 128 - v8);
LABEL_10:
    for ( i = 0; i != 128; ++i )
      v16[i] = *((uint8_t *)a1 + i + 80) ^ 0x36;
    v10 = (int *)(a1 + 7);
    if ( EVP_DigestInit_ex((int)(uintptr_t)(a1 + 7), v5, a5) != 0 )
    {
      v12 = EVP_MD_block_size((int)(uintptr_t)(v5));
      if ( EVP_DigestUpdate((int)(uintptr_t)(a1 + 7), (int)(uintptr_t)(v16), v12) != 0 )
      {
        for ( j = 0; j != 128; ++j )
          v16[j] = *((uint8_t *)a1 + j + 80) ^ 0x5C;
        if ( EVP_DigestInit_ex((int)(uintptr_t)(a1 + 13), v5, a5) != 0 )
        {
          v14 = EVP_MD_block_size((int)(uintptr_t)(v5));
          if ( EVP_DigestUpdate((int)(uintptr_t)(a1 + 13), (int)(uintptr_t)(v16), v14) != 0 )
            return EVP_MD_CTX_copy_ex(a1 + 1, v10) != 0;
        }
      }
    }
    return false;
  }
  v10 = (int *)(a1 + 7);
  if ( v6 != 0 )
    goto LABEL_10;
  return EVP_MD_CTX_copy_ex(a1 + 1, v10) != 0;
}

// ----------------------------------------------------------------------------
// Function: HMAC_Update  (binary VA: 0x19bd8a0)
// Original: HMAC_Update
// ----------------------------------------------------------------------------
int HMAC_Update(int a1, int a2, int a3)
{
  return EVP_DigestUpdate(a1 + 4, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: HMAC_Final  (binary VA: 0x19bd8e0)
// Original: HMAC_Final
// ----------------------------------------------------------------------------
bool HMAC_Final(int a1, int a2, uint32_t *a3)
{
  int *v3;
  int v4;
  int v5;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v3 = (int *)(a1 + 4);
  v4 = EVP_DigestFinal_ex((void **)(a1 + 4), (int)(uintptr_t)(v10), &v9);
  v5 = 0;
  if ( v4 != 0 )
  {
    v7 = EVP_MD_CTX_copy_ex(v3, (int *)(a1 + 52));
    v5 = 0;
    if ( v7 != 0 )
    {
      v8 = EVP_DigestUpdate((int)(uintptr_t)(v3), (int)(uintptr_t)(v10), v9);
      v5 = 0;
      if ( v8 != 0 )
        return EVP_DigestFinal_ex((void **)v3, a2, a3) != 0;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: HMAC_CTX_init  (binary VA: 0x19bd9c0)
// Original: HMAC_CTX_init
// ----------------------------------------------------------------------------
int HMAC_CTX_init(uint8_t *a1)
{
  EVP_MD_CTX_init(a1 + 28);
  EVP_MD_CTX_init(a1 + 52);
  return EVP_MD_CTX_init(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: HMAC_Init  (binary VA: 0x19bda10)
// Original: HMAC_Init
// ----------------------------------------------------------------------------
bool HMAC_Init(uint8_t *a1, void *a2, size_t a3, uint32_t *a4)
{
  if ( a4 != nullptr && a2 != nullptr )
    HMAC_CTX_init(a1);
  return HMAC_Init_ex(a1, a2, a3, a4, nullptr);
}

// ----------------------------------------------------------------------------
// Function: HMAC_CTX_copy  (binary VA: 0x19bda90)
// Original: HMAC_CTX_copy
// ----------------------------------------------------------------------------
int HMAC_CTX_copy(int a1, int a2)
{
  int v2;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  int v7;
  uint16_t *v8;
  uint16_t *v9;

  v2 = 0;
  if ( EVP_MD_CTX_copy((int *)(a1 + 28), (int *)(a2 + 28)) != 0
    && EVP_MD_CTX_copy((int *)(a1 + 52), (int *)(a2 + 52)) != 0
    && EVP_MD_CTX_copy((int *)(a1 + 4), (int *)(a2 + 4)) != 0 )
  {
    v4 = (uint16_t *)(a2 + 80);
    v5 = 128;
    v6 = (uint16_t *)(a1 + 80);
    if ( ((a1 + 80) & 1) != 0 )
    {
      v6 = (uint16_t *)(a1 + 81);
      *(uint8_t *)(a1 + 80) = *(uint8_t *)(a2 + 80);
      v4 = (uint16_t *)(a2 + 81);
      v5 = 127;
    }
    if ( ((uint8_t)(uintptr_t)(v6) & 2) != 0 )
    {
      v5 -= 2;
      *v6++ = *v4++;
    }
    v7 = 0;
    std::memcpy(v6, v4, 4 * (v5 >> 2));
    v9 = &v4[2 * (v5 >> 2)];
    v8 = &v6[2 * (v5 >> 2)];
    if ( (v5 & 2) != 0 )
    {
      *v8 = *v9;
      v7 = 1;
    }
    if ( (v5 & 1) != 0 )
      LOBYTE(v8[v7]) = v9[v7];
    v2 = 1;
    *(uint32_t *)(a1 + 76) = *(uint32_t *)(a2 + 76);
    *(uint32_t *)a1 = *(uint32_t *)a2;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: HMAC_CTX_cleanup  (binary VA: 0x19bdbb0)
// Original: HMAC_CTX_cleanup
// ----------------------------------------------------------------------------
int HMAC_CTX_cleanup(uint8_t *a1)
{
  uint16_t *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  v1 = (uint16_t *)(a1);
  EVP_MD_CTX_cleanup((int)(uintptr_t)(a1 + 28));
  EVP_MD_CTX_cleanup((int)(uintptr_t)(a1 + 52));
  EVP_MD_CTX_cleanup((int)(uintptr_t)(a1 + 4));
  v2 = 208;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    *a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v2) = -49;
    if ( ((unsigned int)(uintptr_t)(a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  result = 0;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: HMAC_CTX_set_flags  (binary VA: 0x19bdd30)
// Original: HMAC_CTX_set_flags
// ----------------------------------------------------------------------------
int HMAC_CTX_set_flags(int a1, int a2)
{
  EVP_MD_CTX_set_flags(a1 + 28, a2);
  EVP_MD_CTX_set_flags(a1 + 52, a2);
  return EVP_MD_CTX_set_flags(a1 + 4, a2);
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_init  (binary VA: 0x19c0c20)
// Original: OBJ_NAME_init
// ----------------------------------------------------------------------------
bool OBJ_NAME_init()
{
  bool result;

  result = true;
  if ( dword_2141D00 == 0 )
  {
    CRYPTO_mem_ctrl(3);
    dword_2141D00 = (int)(uintptr_t)(lh_new((int (*)(char *))sub_19C0AB0, (int (**)(const char *, const char *))sub_19C0B90));
    CRYPTO_mem_ctrl(2);
    return dword_2141D00 != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_new_index  (binary VA: 0x19c0ca0)
// Original: OBJ_NAME_new_index
// ----------------------------------------------------------------------------
int OBJ_NAME_new_index(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;

  v3 = dword_2141D04;
  if ( dword_2141D04 == 0 )
  {
    CRYPTO_mem_ctrl(3);
    dword_2141D04 = (uint32_t)(uintptr_t)(sk_new_null(v9, v8));
    CRYPTO_mem_ctrl(2);
    v3 = dword_2141D04;
    if ( dword_2141D04 == 0 )
      return 0;
  }
  v10 = dword_20CBECC++;
  v4 = sk_num(v3);
  if ( v4 < dword_20CBECC )
  {
    while ( 1 )
    {
      CRYPTO_mem_ctrl(3);
      v5 = (uint32_t *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
      CRYPTO_mem_ctrl(2);
      if ( v5 == nullptr )
        break;
      *v5 = (uint32_t)(uintptr_t)(lh_strhash);
      v5[1] = (uint32_t)(uintptr_t)((int (*)(const char* _Nonnull, const char* _Nonnull))strcmp);
      v5[2] = 0;
      CRYPTO_mem_ctrl(3);
      ++v4;
      sk_push(dword_2141D04, v5);
      CRYPTO_mem_ctrl(2);
      if ( dword_20CBECC <= v4 )
        goto LABEL_8;
    }
    ERR_put_error(8, 106, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
LABEL_8:
  v7 = (uint32_t *)sk_value(dword_2141D04, v10);
  if ( a1 != 0 )
    *v7 = a1;
  if ( a2 != 0 )
    v7[1] = a2;
  if ( a3 == 0 )
    return v10;
  v7[2] = a3;
  return v10;
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_get  (binary VA: 0x19c0e50)
// Original: OBJ_NAME_get
// ----------------------------------------------------------------------------
int OBJ_NAME_get(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int result;
  bool v6;
  typedef unsigned int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);

  if ( a1 == 0 )
    return 0;
  v2 = (uint32_t *)dword_2141D00;
  if ( dword_2141D00 != 0 )
  {
LABEL_3:
    v8 = a1;
    v7 = a2 & 0xFFFF7FFF;
    v3 = 11;
    while ( 1 )
    {
      v4 = lh_retrieve(v2, (int)(uintptr_t)(&v7));
      if ( v4 == nullptr )
        break;
      if ( (a2 & 0x8000) != 0 || v4[1] == 0 )
        return v4[3];
      if ( --v3 == 0 )
        return 0;
      v8 = v4[3];
      v2 = (uint32_t *)dword_2141D00;
    }
    return 0;
  }
  v6 = OBJ_NAME_init();
  result = 0;
  if ( v6 )
  {
    v2 = (uint32_t *)dword_2141D00;
    goto LABEL_3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_add  (binary VA: 0x19c0f00)
// Original: OBJ_NAME_add
// ----------------------------------------------------------------------------
bool OBJ_NAME_add(int a1, int a2, int a3)
{
  uint32_t *v3;
  bool result;
  int *v5;
  int v6;
  bool v7;

  if ( dword_2141D00 != 0 || (v7 = OBJ_NAME_init(), result = false, v7) )
  {
    v3 = (uint32_t *)(CRYPTO_malloc(16, (int)(uintptr_t)(&unk_1B15112), 0));
    result = false;
    if ( v3 != nullptr )
    {
      v3[2] = a1;
      v3[1] = a2 & 0x8000;
      *v3 = a2 & 0xFFFF7FFF;
      v3[3] = a3;
      v5 = lh_insert((uint32_t *)dword_2141D00, (int)(uintptr_t)(v3));
      if ( v5 != nullptr )
      {
        if ( dword_2141D04 != 0 && sk_num(dword_2141D04) > *v5 )
        {
          v6 = sk_value(dword_2141D04, *v5);
          (*(void (**)(int, int, int))(v6 + 8))(v5[2], *v5, v5[3]);
        }
        CRYPTO_free(v5);
        return true;
      }
      else
      {
        return *(uint32_t *)(dword_2141D00 + 92) == 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_remove  (binary VA: 0x19c1010)
// Original: OBJ_NAME_remove
// ----------------------------------------------------------------------------
int OBJ_NAME_remove(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v6;
  uint32_t v7[4];

  v2 = 0;
  if ( dword_2141D00 != 0 )
  {
    v7[2] = a1;
    v3 = a2;
    BYTE1(v3) = BYTE1(a2) & 0x7F;
    v7[0] = v3;
    v4 = (uint32_t *)lh_delete(dword_2141D00, (int)(uintptr_t)(v7));
    if ( v4 != nullptr )
    {
      if ( dword_2141D04 != 0 && sk_num(dword_2141D04) > *v4 )
      {
        v6 = sk_value(dword_2141D04, *v4);
        (*(void (**)(uint32_t, uint32_t, uint32_t))(v6 + 8))(v4[2], *v4, v4[3]);
      }
      v2 = 1;
      CRYPTO_free(v4);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_do_all  (binary VA: 0x19c1120)
// Original: OBJ_NAME_do_all
// ----------------------------------------------------------------------------
void OBJ_NAME_do_all(int a1, int a2, int a3)
{
  uint32_t v3[6];

  v3[0] = a1;
  v3[1] = a2;
  v3[2] = a3;
  lh_doall_arg((uint32_t *)dword_2141D00, (void (*)(uint32_t, int))sub_19C0B30, (int)(uintptr_t)(v3));
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_do_all_sorted  (binary VA: 0x19c1170)
// Original: OBJ_NAME_do_all_sorted
// ----------------------------------------------------------------------------
int OBJ_NAME_do_all_sorted(int a1, void (*a2)(int, int), int a3)
{
  int v3;
  signed int i;
  int v5;
  typedef int _g4_t_v7;
  typedef size_t _g4_t_nmemb;
  typedef void *_g4_t_base;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_nmemb)) > _g4_s1 ? (8u + sizeof(_g4_t_nmemb)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_base)) > _g4_s2 ? (12u + sizeof(_g4_t_base)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_nmemb &nmemb = *reinterpret_cast<_g4_t_nmemb *>(_g4_sf + 8u);
  _g4_t_base &base = *reinterpret_cast<_g4_t_base *>(_g4_sf + 12u);

  v7 = a1;
  v3 = lh_num_items(dword_2141D00);
  base = CRYPTO_malloc(4 * v3, (int)(uintptr_t)(&unk_1B15112), 0);
  nmemb = 0;
  OBJ_NAME_do_all(a1, (int)(uintptr_t)(sub_19C0B60), (int)(uintptr_t)(&v7));
  qsort(base, nmemb, 4u, (__compar_fn_t)sub_19C0A70);
  if ( (int)nmemb > 0 )
  {
    for ( i = 0; i < (int)nmemb; ++i )
    {
      v5 = *((uint32_t *)base + i);
      a2(v5, a3);
    }
  }
  return CRYPTO_free(base);
}

// ----------------------------------------------------------------------------
// Function: OBJ_NAME_cleanup  (binary VA: 0x19c1250)
// Original: OBJ_NAME_cleanup
// ----------------------------------------------------------------------------
uint32_t * OBJ_NAME_cleanup(int a1)
{
  uint32_t *result;
  int v2;

  result = (uint32_t *)dword_2141D00;
  if ( dword_2141D00 != 0 )
  {
    v2 = *(uint32_t *)(dword_2141D00 + 32);
    *(uint32_t *)(dword_2141D00 + 32) = 0;
    dword_2141D08 = a1;
    lh_doall(result, (void (*)(uint32_t))sub_19C10D0);
    result = (uint32_t *)dword_2141D00;
    if ( a1 < 0 )
    {
      lh_free((void **)dword_2141D00);
      result = (uint32_t *)sk_pop_free((void *)dword_2141D04, (int)(uintptr_t)(sub_19C0A40));
      dword_2141D00 = 0;
      dword_2141D04 = 0;
    }
    else
    {
      *(uint32_t *)(dword_2141D00 + 32) = v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_cleanup  (binary VA: 0x19c1680)
// Original: OBJ_cleanup
// ----------------------------------------------------------------------------
void OBJ_cleanup()
{
  uint32_t *v0;

  if ( obj_cleanup_defer != 0 )
  {
    obj_cleanup_defer = 2;
  }
  else
  {
    v0 = (uint32_t *)dword_2141D10;
    if ( dword_2141D10 != 0 )
    {
      *(uint32_t *)(dword_2141D10 + 32) = 0;
      lh_doall(v0, (void (*)(uint32_t))sub_19C1300);
      lh_doall((uint32_t *)dword_2141D10, (void (*)(uint32_t))sub_19C1320);
      lh_doall((uint32_t *)dword_2141D10, (void (*)(uint32_t))sub_19C1330);
      lh_free((void **)dword_2141D10);
      dword_2141D10 = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: OBJ_new_nid  (binary VA: 0x19c1720)
// Original: OBJ_new_nid
// ----------------------------------------------------------------------------
int OBJ_new_nid(int a1)
{
  int result;

  result = dword_20CBED0;
  dword_20CBED0 += a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_add_object  (binary VA: 0x19c1740)
// Original: OBJ_add_object
// ----------------------------------------------------------------------------
int OBJ_add_object(int a1)
{
  uint32_t *v1;
  int i;
  uint32_t *v3;
  int *v4;
  int result;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;

  v8 = nullptr;
  v9 = nullptr;
  v10 = nullptr;
  v11 = nullptr;
  if ( dword_2141D10 == 0 )
  {
    dword_2141D10 = (int)(uintptr_t)(lh_new((int (*)(char *))sub_19C1460, (int (**)(const char *, const char *))sub_19C1560));
    if ( dword_2141D10 == 0 )
      return 0;
  }
  v1 = (uint32_t *)OBJ_dup(a1);
  if ( v1 != nullptr )
  {
    v11 = CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v11 == nullptr
      || v1[3] != 0 && *(uint32_t *)(a1 + 16) != 0 && (v8 = CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0)) == nullptr )
    {
      v6 = nullptr;
    }
    else
    {
      if ( (*v1 == 0 || (v9 = CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0)) != nullptr)
        && (v1[1] == 0 || (v10 = CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0)) != nullptr) )
      {
        for ( i = 0; i != 4; ++i )
        {
          v3 = (uint32_t *)((&v8)[i]);
          if ( v3 != nullptr )
          {
            *v3 = i;
            v3[1] = (uint32_t)(uintptr_t)(v1);
            v4 = lh_insert((uint32_t *)dword_2141D10, (int)(uintptr_t)(v3));
            if ( v4 != nullptr )
              CRYPTO_free(v4);
          }
        }
        v1[5] &= 0xFFFFFFF2;
        return v1[2];
      }
      v6 = v8;
    }
    ERR_put_error(8, 105, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v6 = nullptr;
  }
  v7 = 0;
  if ( v6 == nullptr )
    goto LABEL_21;
  while ( 1 )
  {
    CRYPTO_free(v6);
LABEL_21:
    if ( ++v7 == 4 )
      break;
    while ( 1 )
    {
      v6 = (&v8)[v7];
      if ( v6 != nullptr )
        break;
      if ( ++v7 == 4 )
        goto LABEL_24;
    }
  }
LABEL_24:
  result = 0;
  if ( v1 != nullptr )
  {
    CRYPTO_free(v1);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_nid2obj  (binary VA: 0x19c1940)
// Original: OBJ_nid2obj
// ----------------------------------------------------------------------------
char ** OBJ_nid2obj(unsigned int a1)
{
  int v1;
  uint32_t *v3;
  typedef uint32_t _g4_t_v4[2];
  typedef char _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( a1 <= 0x37C )
  {
    if ( a1 == 0 || off_203FC20[6 * a1 + 2] != 0 )
      return (char **)(&off_203FC20[6 * a1]);
    v1 = 0;
    ERR_put_error(8, 103, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char **)v1;
  }
  v1 = 0;
  if ( dword_2141D10 == 0 )
    return (char **)v1;
  v6 = a1;
  v4[0] = 3;
  v4[1] = (uint32_t)(uintptr_t)(&v5);
  v3 = lh_retrieve((uint32_t *)dword_2141D10, (int)(uintptr_t)(v4));
  if ( v3 == nullptr )
  {
    ERR_put_error(8, 103, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char **)v1;
  }
  return (char **)v3[1];
}

// ----------------------------------------------------------------------------
// Function: OBJ_nid2sn  (binary VA: 0x19c1a40)
// Original: OBJ_nid2sn
// ----------------------------------------------------------------------------
char * OBJ_nid2sn(unsigned int a1)
{
  int v1;
  uint32_t *v3;
  typedef uint32_t _g4_t_v4[2];
  typedef char _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( a1 <= 0x37C )
  {
    if ( a1 == 0 || off_203FC20[6 * a1 + 2] != 0 )
      return (char *)(uintptr_t)(off_203FC20[6 * a1]);
    v1 = 0;
    ERR_put_error(8, 104, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char *)v1;
  }
  v1 = 0;
  if ( dword_2141D10 == 0 )
    return (char *)v1;
  v6 = a1;
  v4[0] = 3;
  v4[1] = (uint32_t)(uintptr_t)(&v5);
  v3 = lh_retrieve((uint32_t *)dword_2141D10, (int)(uintptr_t)(v4));
  if ( v3 == nullptr )
  {
    ERR_put_error(8, 104, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char *)v1;
  }
  return *(char **)v3[1];
}

// ----------------------------------------------------------------------------
// Function: OBJ_nid2ln  (binary VA: 0x19c1b40)
// Original: OBJ_nid2ln
// ----------------------------------------------------------------------------
char * OBJ_nid2ln(unsigned int a1)
{
  int v1;
  uint32_t *v3;
  typedef uint32_t _g4_t_v4[2];
  typedef char _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( a1 <= 0x37C )
  {
    if ( a1 == 0 || off_203FC20[6 * a1 + 2] != 0 )
      return (char *)(uintptr_t)(off_203FC20[6 * a1 + 1]);
    v1 = 0;
    ERR_put_error(8, 102, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char *)v1;
  }
  v1 = 0;
  if ( dword_2141D10 == 0 )
    return (char *)v1;
  v6 = a1;
  v4[0] = 3;
  v4[1] = (uint32_t)(uintptr_t)(&v5);
  v3 = lh_retrieve((uint32_t *)dword_2141D10, (int)(uintptr_t)(v4));
  if ( v3 == nullptr )
  {
    ERR_put_error(8, 102, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char *)v1;
  }
  return *(char **)(v3[1] + 4);
}

// ----------------------------------------------------------------------------
// Function: OBJ_bsearch_ex  (binary VA: 0x19c1c50)
// Original: OBJ_bsearch_ex_
// ----------------------------------------------------------------------------
int OBJ_bsearch_ex(int a1, int a2, int a3, int a4, int (*a5)(int, int), char a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  int v13;

  v6 = a3;
  v13 = 0;
  if ( a3 == 0 )
    return v13;
  if ( a3 > 0 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = (v7 + v6) >> 1;
        v13 = a2 + v8 * a4;
        v9 = a5(a1, v13);
        if ( v9 >= 0 )
          break;
        v6 = (v7 + v6) >> 1;
        if ( v7 >= v8 )
          goto LABEL_8;
      }
      if ( v9 == 0 )
        goto LABEL_13;
      v7 = v8 + 1;
    }
    while ( v8 + 1 < v6 );
LABEL_8:
    v10 = 0;
    if ( (a6 & 1) != 0 )
      return a2 + v8 * a4;
    return v10;
  }
  v8 = 0;
LABEL_13:
  if ( (a6 & 2) == 0 )
    return v13;
  if ( v8 != 0 )
  {
    v12 = a2 + a4 * (v8 - 1);
    do
    {
      if ( a5(a1, v12) != 0 )
        break;
      v12 -= a4;
      --v8;
    }
    while ( v8 != 0 );
  }
  return a2 + a4 * v8;
}

// ----------------------------------------------------------------------------
// Function: OBJ_bsearch  (binary VA: 0x19c1d30)
// Original: OBJ_bsearch_
// ----------------------------------------------------------------------------
int OBJ_bsearch(int a1, int a2, int a3, int a4, int (*a5)(int, int))
{
  return OBJ_bsearch_ex(a1, a2, a3, a4, a5, 0);
}

// ----------------------------------------------------------------------------
// Function: OBJ_sn2nid  (binary VA: 0x19c1d80)
// Original: OBJ_sn2nid
// ----------------------------------------------------------------------------
int OBJ_sn2nid(int a1)
{
  uint32_t *v1;
  int result;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v4;
  typedef uint32_t _g4_t_v5[2];
  typedef uint32_t _g4_t_v6[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);

  v6[0] = a1;
  v4 = v6;
  if ( dword_2141D10 != 0 )
  {
    v5[1] = (uint32_t)(uintptr_t)(v6);
    v5[0] = 1;
    v1 = lh_retrieve((uint32_t *)dword_2141D10, (int)(uintptr_t)(v5));
    if ( v1 != nullptr )
      return *(uint32_t *)(v1[1] + 8);
  }
  v3 = (uint32_t *)OBJ_bsearch((int)(uintptr_t)(&v4), (int)(uintptr_t)(&unk_1D27EE0), 886, 4, (int (*)(int, int))sub_19C1380);
  result = 0;
  if ( v3 != nullptr )
    return dword_203FC28[6 * *v3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_ln2nid  (binary VA: 0x19c1e30)
// Original: OBJ_ln2nid
// ----------------------------------------------------------------------------
int OBJ_ln2nid(int a1)
{
  uint32_t *v1;
  int result;
  uint32_t *v3;
  typedef char *_g4_t_v4;
  typedef uint32_t _g4_t_v5[2];
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v7 = a1;
  v4 = &v6;
  if ( dword_2141D10 != 0 )
  {
    v5[1] = (uint32_t)(uintptr_t)(&v6);
    v5[0] = 2;
    v1 = lh_retrieve((uint32_t *)dword_2141D10, (int)(uintptr_t)(v5));
    if ( v1 != nullptr )
      return *(uint32_t *)(v1[1] + 8);
  }
  v3 = (uint32_t *)OBJ_bsearch((int)(uintptr_t)(&v4), (int)(uintptr_t)(&unk_1D27100), 886, 4, (int (*)(int, int))sub_19C13C0);
  result = 0;
  if ( v3 != nullptr )
    return dword_203FC28[6 * *v3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_txt2obj  (binary VA: 0x19c1ee0)
// Original: OBJ_txt2obj
// ----------------------------------------------------------------------------
char ** OBJ_txt2obj(char *a1, int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  uint8_t *v5;
  void *v6;
  typedef int _g4_t_v8;
  typedef size_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  if ( a2 == 0 )
  {
    v2 = OBJ_sn2nid((int)(uintptr_t)(a1));
    if ( v2 != 0 )
      return OBJ_nid2obj(v2);
    v2 = OBJ_ln2nid((int)(uintptr_t)(a1));
    if ( v2 != 0 )
      return OBJ_nid2obj(v2);
  }
  v3 = a2d_ASN1_OBJECT(0, 0, a1, -1);
  v4 = v3;
  v8 = 0;
  if ( v3 > 0 )
  {
    v9 = ASN1_object_size(0, v3, 6);
    v5 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
    v6 = v5;
    if ( v5 != nullptr )
    {
      v10 = (int)(uintptr_t)(v5);
      ASN1_put_object((uint8_t **)&v10, 0, v4, 6, 0);
      a2d_ASN1_OBJECT(v10, v4, a1, -1);
      v11 = v6;
      v8 = (int)(uintptr_t)(d2i_ASN1_OBJECT(0, &v11, v9));
      CRYPTO_free(v6);
    }
  }
  return (char **)v8;
}

// ----------------------------------------------------------------------------
// Function: OBJ_obj2nid  (binary VA: 0x19c2040)
// Original: OBJ_obj2nid
// ----------------------------------------------------------------------------
int OBJ_obj2nid(int a1)
{
  int v1;
  uint32_t *v2;
  uint32_t *v4;
  uint32_t v5[3];

  v1 = 0;
  if ( a1 == 0 )
    return v1;
  v1 = *(uint32_t *)(a1 + 8);
  if ( v1 != 0 )
    return v1;
  if ( dword_2141D10 != 0 )
  {
    v5[1] = a1;
    v5[0] = 0;
    v2 = lh_retrieve((uint32_t *)dword_2141D10, (int)(uintptr_t)(v5));
    if ( v2 != nullptr )
      return *(uint32_t *)(v2[1] + 8);
  }
  v4 = (uint32_t *)OBJ_bsearch((int)(uintptr_t)(&a1), (int)(uintptr_t)(&unk_1D263E0), 840, 4, (int (*)(int, int))sub_19C1400);
  if ( v4 == nullptr )
    return v1;
  return dword_203FC28[6 * *v4];
}

// ----------------------------------------------------------------------------
// Function: OBJ_txt2nid  (binary VA: 0x19c2100)
// Original: OBJ_txt2nid
// ----------------------------------------------------------------------------
int OBJ_txt2nid(char *a1)
{
  char **v1;
  int v2;

  v1 = OBJ_txt2obj(a1, 0);
  v2 = OBJ_obj2nid((int)(uintptr_t)(v1));
  ASN1_OBJECT_free(v1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OBJ_obj2txt  (binary VA: 0x19c2160)
// Original: OBJ_obj2txt
// ----------------------------------------------------------------------------
size_t OBJ_obj2txt(char *a1, signed int a2, int a3, int a4)
{
  char *v4;
  unsigned int v5;
  int v6;
  char v7;
  int v8;
  unsigned int v10;
  const char *s;
  char *v12;
  signed int v13;
  signed int v14;
  unsigned int v15;
  unsigned int v16;
  signed int v17;
  char *v18;
  signed int v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef void **_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25[54];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (38u + sizeof(_g4_t_v25)) > _g4_s5 ? (38u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 38u);

  if ( a3 == 0 || (v4 = *(char **)(a3 + 16)) == nullptr )
  {
    *a1 = 0;
    return 0;
  }
  if ( a4 == 0 )
  {
    v15 = OBJ_obj2nid(a3);
    v16 = v15;
    if ( v15 != 0 )
    {
      v18 = OBJ_nid2ln(v15);
      if ( v18 != nullptr || (v18 = OBJ_nid2sn(v16)) != nullptr )
      {
        if ( a1 != nullptr )
          BUF_strlcpy(a1, v18, a2);
        return strlen(v18);
      }
    }
    v4 = *(char **)(a3 + 16);
  }
  v21 = *(uint32_t *)(a3 + 12);
  if ( v21 <= 0 )
    return 0;
  v24 = 1;
  v23 = 0;
  v22 = nullptr;
  while ( 2 )
  {
    v5 = 0;
    v6 = 0;
LABEL_7:
    v7 = *v4;
    --v21;
    if ( *v4 >= 0 )
    {
LABEL_8:
      v8 = v7 & 0x7F;
      if ( v6 != 0 )
        goto LABEL_24;
LABEL_9:
      v5 |= v8;
      ++v4;
      if ( v7 >= 0 )
        goto LABEL_26;
      goto LABEL_10;
    }
    while ( 1 )
    {
      if ( v21 == 0 )
        goto LABEL_16;
      v8 = v7 & 0x7F;
      if ( v6 == 0 )
        goto LABEL_9;
LABEL_24:
      v20 = v7;
      if ( BN_add_word(v22, v8) == 0 )
        goto LABEL_16;
      ++v4;
      if ( v20 >= 0 )
        break;
LABEL_10:
      if ( v5 > (unsigned int)(uintptr_t)(&unk_1FFFFFF) && v6 == 0 )
      {
        if ( v22 == nullptr )
        {
          v22 = (void **)BN_new();
          if ( v22 == nullptr )
            return -1;
        }
        if ( BN_set_word(v22, v5) == 0 )
          goto LABEL_16;
        v6 = 1;
LABEL_15:
        if ( BN_lshift(v22, v22, 7) == 0 )
          goto LABEL_16;
        goto LABEL_7;
      }
      if ( v6 != 0 )
        goto LABEL_15;
      v7 = *v4;
      --v21;
      v5 <<= 7;
      if ( *v4 >= 0 )
        goto LABEL_8;
    }
LABEL_26:
    if ( v24 == 0 )
      goto LABEL_35;
    if ( v5 <= 0x4F )
    {
      v10 = v5 / 0x28;
      v5 %= 0x28u;
LABEL_31:
      if ( a2 > 0 && a1 != nullptr )
      {
        --a2;
        *a1++ = v10 + 48;
      }
      ++v23;
LABEL_35:
      if ( v6 != 0 )
      {
        s = (const char *)BN_bn2dec(v22);
        v12 = (char *)s;
        if ( s == nullptr )
          goto LABEL_16;
        v13 = strlen(s);
        if ( a1 != nullptr )
        {
          if ( a2 > 0 )
          {
            --a2;
            *a1++ = 46;
          }
          BUF_strlcpy(a1, v12, a2);
          if ( a2 >= v13 )
          {
            a1 += v13;
            a2 -= v13;
          }
          else
          {
            v14 = a2;
            a2 = 0;
            a1 += v14;
          }
        }
        v23 += v13 + 1;
        CRYPTO_free(v12);
      }
      else
      {
        BIO_snprintf(v25, 26, ".%lu", v5);
        v17 = strlen(v25);
        if ( a2 > 0 && a1 != nullptr )
        {
          BUF_strlcpy(a1, v25, a2);
          if ( a2 >= v17 )
          {
            a1 += v17;
            a2 -= v17;
          }
          else
          {
            v19 = a2;
            a2 = 0;
            a1 += v19;
          }
        }
        v23 += v17;
      }
      if ( v21 <= 0 )
        goto LABEL_17;
      v24 = 0;
      continue;
    }
    break;
  }
  if ( v6 == 0 )
  {
    v5 -= 80;
LABEL_30:
    LOBYTE(v10) = 2;
    goto LABEL_31;
  }
  if ( BN_sub_word(v22, 80) != 0 )
    goto LABEL_30;
LABEL_16:
  v23 = -1;
LABEL_17:
  if ( v22 != nullptr )
    BN_free(v22);
  return v23;
}

// ----------------------------------------------------------------------------
// Function: OBJ_create  (binary VA: 0x19c2550)
// Original: OBJ_create
// ----------------------------------------------------------------------------
int OBJ_create(char *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  void *v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = 0;
  v4 = a2d_ASN1_OBJECT(0, 0, a1, -1);
  v5 = v4;
  if ( v4 > 0 )
  {
    v6 = CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v6 != nullptr )
    {
      v12 = v5;
      v7 = nullptr;
      v8 = a2d_ASN1_OBJECT((int)(uintptr_t)(v6), v12, a1, -1);
      if ( v8 != 0 )
      {
        v13 = v8;
        v10 = OBJ_new_nid(1);
        v11 = (int)(uintptr_t)(ASN1_OBJECT_create(v10, v6, v13, a2, a3));
        v7 = (void *)v11;
        if ( v11 != 0 )
          v3 = OBJ_add_object(v11);
      }
      ASN1_OBJECT_free(v7);
      CRYPTO_free(v6);
    }
    else
    {
      ERR_put_error(8, 100, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OBJ_create_objects  (binary VA: 0x19c2690)
// Original: OBJ_create_objects
// ----------------------------------------------------------------------------
int OBJ_create_objects(uint32_t *a1)
{
  int v1;
  int v2;
  char v3;
  char *v4;
  char v5;
  uint8_t *i;
  char v7; // di
  uint8_t *v8;
  uint8_t v9;
  uint8_t *v10;
  uint8_t v11; // di
  typedef char _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef char _g4_t_v16[540];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  v14 = 0;
  v15 = nullptr;
  while ( 1 )
  {
    v1 = BIO_gets(a1, (int)(uintptr_t)(v16), 512);
    if ( v1 <= 0 )
      return v14;
    v16[v1 - 1] = 0;
    v13 = v16[0];
    v2 = isalnum((uint8_t)v16[0]);
    v3 = v13;
    if ( v2 == 0 )
      return v14;
    if ( (uint8_t)(v13 - 48) <= 9u || (v5 = v13, v4 = v16, v13 == 46) )
    {
      v4 = v16;
      do
      {
        do
          v5 = *++v4;
        while ( (uint8_t)(*v4 - 48) <= 9u );
      }
      while ( v5 == 46 );
      v3 = v13;
    }
    i = nullptr;
    if ( v5 != 0 )
    {
      *v4 = 0;
      for ( i = (uint8_t *)(v4 + 1); ; ++i )
      {
        v7 = *i;
        if ( isspace(*i) == 0 )
          break;
      }
      v8 = i;
      if ( v7 != 0 )
      {
        do
        {
          v9 = v8[1];
          if ( v9 == 0 )
          {
            v3 = v16[0];
            v15 = nullptr;
            goto LABEL_15;
          }
          ++v8;
        }
        while ( isspace(v9) == 0 );
        *v8 = 0;
        v10 = v8 + 1;
        v15 = v10;
        while ( 1 )
        {
          v11 = *v10;
          if ( isspace(*v10) == 0 )
            break;
          ++v10;
        }
        v15 = v10;
        v3 = v16[0];
        if ( v11 == 0 )
        {
          v15 = nullptr;
          if ( v16[0] != 0 )
            goto LABEL_16;
          return v14;
        }
      }
      else
      {
        v3 = v16[0];
        i = nullptr;
      }
    }
LABEL_15:
    if ( v3 == 0 )
      return v14;
LABEL_16:
    if ( OBJ_create(v16, (int)(uintptr_t)(i), (int)(uintptr_t)(v15)) == 0 )
      return v14;
    ++v14;
  }
}

// ----------------------------------------------------------------------------
// Function: ERR_load_OBJ_strings  (binary VA: 0x19c2840)
// Original: ERR_load_OBJ_strings
// ----------------------------------------------------------------------------
int ERR_load_OBJ_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CBEE0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CBEE0);
    return ERR_load_strings(0, &dword_20CBF20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_dup  (binary VA: 0x19c28a0)
// Original: OBJ_dup
// ----------------------------------------------------------------------------
size_t * OBJ_dup(int a1)
{
  size_t *v1;
  size_t *v3;
  uint8_t *dest;
  uint8_t *v5;
  size_t n;
  void *v7;
  uint8_t *v8;
  size_t v9;
  size_t v10;
  void *v11;
  size_t v12;
  size_t v13;

  v1 = (size_t *)a1;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 20) & 1) != 0 )
  {
    v3 = (size_t *)ASN1_OBJECT_new();
    if ( v3 == nullptr )
    {
      v1 = nullptr;
      ERR_put_error(8, 101, 13, (int)(uintptr_t)(&unk_1B15112), 0);
      return v1;
    }
    dest = CRYPTO_malloc(*(uint32_t *)(a1 + 12), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dest != nullptr )
    {
      if ( *(uint32_t *)(a1 + 16) != 0 )
        memcpy(dest, *(const void **)(a1 + 16), *(uint32_t *)(a1 + 12));
      v3[4] = (size_t)dest;
      v3[3] = *(uint32_t *)(a1 + 12);
      v3[2] = *(uint32_t *)(a1 + 8);
      *v3 = 0;
      v3[1] = 0;
      if ( *(uint32_t *)(a1 + 4) == 0 )
      {
        v7 = nullptr;
        goto LABEL_11;
      }
      v9 = strlen(*(const char **)(a1 + 4)) + 1;
      v5 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
      n = v9;
      if ( v5 != nullptr )
      {
        v10 = (size_t)v5;
        memcpy(v5, *(const void **)(a1 + 4), n);
        v7 = (void *)v10;
        v3[1] = v10;
LABEL_11:
        if ( *(uint32_t *)a1 == 0 )
        {
LABEL_14:
          v1 = v3;
          v3[5] = *(uint32_t *)(a1 + 20) | 0xD;
          return v1;
        }
        v11 = v7;
        v13 = strlen(*(const char **)a1) + 1;
        v8 = CRYPTO_malloc(v13, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v8 != nullptr )
        {
          v12 = (size_t)v8;
          memcpy(v8, *(const void **)a1, v13);
          *v3 = v12;
          goto LABEL_14;
        }
        ERR_put_error(8, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v11 != nullptr )
          CRYPTO_free(v11);
        goto LABEL_19;
      }
    }
    ERR_put_error(8, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dest == nullptr )
    {
LABEL_16:
      v1 = nullptr;
      CRYPTO_free(v3);
      return v1;
    }
LABEL_19:
    CRYPTO_free(dest);
    goto LABEL_16;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: OBJ_cmp  (binary VA: 0x19c2b00)
// Original: OBJ_cmp
// ----------------------------------------------------------------------------
int OBJ_cmp(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 12) - *(uint32_t *)(a2 + 12);
  if ( result == 0 )
    return memcmp(*(const void **)(a1 + 16), *(const void **)(a2 + 16), *(uint32_t *)(a1 + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_find_sigid_algs  (binary VA: 0x19c2be0)
// Original: OBJ_find_sigid_algs
// ----------------------------------------------------------------------------
int OBJ_find_sigid_algs(int a1, uint32_t *a2, uint32_t *a3)
{
  int v3;
  int v4;
  int result;
  uint32_t v6[3];

  v6[0] = a1;
  if ( sig_app != 0 && (v3 = sk_find(sig_app, v6)) >= 0 && (v4 = sk_value(sig_app, v3)) != 0
    || (v4 = OBJ_bsearch((int)(uintptr_t)(v6), (int)(uintptr_t)(&unk_1D2A380), 29, 12, (int (*)(int, int))sub_19C2B50),
        result = 0,
        v4 != 0) )
  {
    *a2 = *(uint32_t *)(v4 + 4);
    *a3 = *(uint32_t *)(v4 + 8);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OBJ_find_sigid_by_algs  (binary VA: 0x19c2ca0)
// Original: OBJ_find_sigid_by_algs
// ----------------------------------------------------------------------------
int OBJ_find_sigid_by_algs(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int result;
  uint32_t **v6;
  typedef uint8_t *_g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v9 = a2;
  v10 = a3;
  v7 = v8;
  if ( sigx_app != 0 )
  {
    v3 = sk_find(sigx_app, v8);
    if ( v3 >= 0 )
    {
      v4 = (uint32_t *)sk_value(sigx_app, v3);
      v7 = (uint8_t *)(v4);
LABEL_4:
      *a1 = *v4;
      return 1;
    }
  }
  v6 = (uint32_t **)OBJ_bsearch((int)(uintptr_t)(&v7), (int)(uintptr_t)(&off_2044FE0), 29, 4, sub_19C2BD0);
  result = 0;
  if ( v6 != nullptr )
  {
    v4 = *v6;
    goto LABEL_4;
  }
  return result;
}

static int g4_loc_19C2BB0(const int *const *a, const int *const *b)
{
  int d = (*a)[1] - (*b)[1];
  return d ? d : ((*a)[2] - (*b)[2]);
}

// ----------------------------------------------------------------------------
// Function: OBJ_add_sigid  (binary VA: 0x19c2d50)
// Original: OBJ_add_sigid
// ----------------------------------------------------------------------------
int OBJ_add_sigid(int a1, int a2, int a3)
{
  uint32_t *v3;
  void *v4;
  int v6;

  if ( sig_app == 0 )
  {
    sig_app = (uint32_t)(uintptr_t)(sk_new(sub_19C2B60));
    if ( sig_app == 0 )
      return 0;
  }
  if ( sigx_app == 0 )
  {
    sigx_app = (uint32_t)(uintptr_t)(sk_new((void *)&g4_loc_19C2BB0));
    if ( sigx_app == 0 )
      return 0;
  }
  v3 = (uint32_t *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
  v4 = v3;
  v6 = 0;
  if ( v3 != nullptr )
  {
    *v3 = a1;
    v3[1] = a2;
    v3[2] = a3;
    if ( sk_push(sig_app, v3) != 0 )
    {
      if ( sk_push(sigx_app, v4) != 0 )
      {
        sk_sort(sig_app);
        sk_sort(sigx_app);
        return 1;
      }
    }
    else
    {
      CRYPTO_free(v4);
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: OBJ_sigid_free  (binary VA: 0x19c2e90)
// Original: OBJ_sigid_free
// ----------------------------------------------------------------------------
int OBJ_sigid_free()
{
  int result;

  if ( sig_app != 0 )
  {
    sk_pop_free(sig_app, (int)(uintptr_t)(sub_19C2B80));
    sig_app = (uint32_t)(uintptr_t)(nullptr);
  }
  result = (int)sigx_app;
  if ( sigx_app != 0 )
  {
    result = sk_free(sigx_app);
    sigx_app = (uint32_t)(uintptr_t)(nullptr);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_SIGNATURE  (binary VA: 0x19c2f00)
// Original: d2i_OCSP_SIGNATURE
// ----------------------------------------------------------------------------
int d2i_OCSP_SIGNATURE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_SIGNATURE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_SIGNATURE  (binary VA: 0x19c2f40)
// Original: i2d_OCSP_SIGNATURE
// ----------------------------------------------------------------------------
int i2d_OCSP_SIGNATURE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_SIGNATURE_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_SIGNATURE_new  (binary VA: 0x19c2f80)
// Original: OCSP_SIGNATURE_new
// ----------------------------------------------------------------------------
int OCSP_SIGNATURE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_SIGNATURE_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_SIGNATURE_free  (binary VA: 0x19c2fb0)
// Original: OCSP_SIGNATURE_free
// ----------------------------------------------------------------------------
int OCSP_SIGNATURE_free(char a1)
{
  return ASN1_item_free(a1, OCSP_SIGNATURE_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_CERTID  (binary VA: 0x19c2fe0)
// Original: d2i_OCSP_CERTID
// ----------------------------------------------------------------------------
int d2i_OCSP_CERTID(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_CERTID_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_CERTID  (binary VA: 0x19c3020)
// Original: i2d_OCSP_CERTID
// ----------------------------------------------------------------------------
int i2d_OCSP_CERTID(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_CERTID_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_CERTID_new  (binary VA: 0x19c3060)
// Original: OCSP_CERTID_new
// ----------------------------------------------------------------------------
int OCSP_CERTID_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_CERTID_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_CERTID_free  (binary VA: 0x19c3090)
// Original: OCSP_CERTID_free
// ----------------------------------------------------------------------------
int OCSP_CERTID_free(char a1)
{
  return ASN1_item_free(a1, OCSP_CERTID_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_ONEREQ  (binary VA: 0x19c30c0)
// Original: d2i_OCSP_ONEREQ
// ----------------------------------------------------------------------------
int d2i_OCSP_ONEREQ(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_ONEREQ_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_ONEREQ  (binary VA: 0x19c3100)
// Original: i2d_OCSP_ONEREQ
// ----------------------------------------------------------------------------
int i2d_OCSP_ONEREQ(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_ONEREQ_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_ONEREQ_new  (binary VA: 0x19c3140)
// Original: OCSP_ONEREQ_new
// ----------------------------------------------------------------------------
int OCSP_ONEREQ_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_ONEREQ_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_ONEREQ_free  (binary VA: 0x19c3170)
// Original: OCSP_ONEREQ_free
// ----------------------------------------------------------------------------
int OCSP_ONEREQ_free(char a1)
{
  return ASN1_item_free(a1, OCSP_ONEREQ_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_REQINFO  (binary VA: 0x19c31a0)
// Original: d2i_OCSP_REQINFO
// ----------------------------------------------------------------------------
int d2i_OCSP_REQINFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_REQINFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_REQINFO  (binary VA: 0x19c31e0)
// Original: i2d_OCSP_REQINFO
// ----------------------------------------------------------------------------
int i2d_OCSP_REQINFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_REQINFO_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_REQINFO_new  (binary VA: 0x19c3220)
// Original: OCSP_REQINFO_new
// ----------------------------------------------------------------------------
int OCSP_REQINFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_REQINFO_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_REQINFO_free  (binary VA: 0x19c3250)
// Original: OCSP_REQINFO_free
// ----------------------------------------------------------------------------
int OCSP_REQINFO_free(char a1)
{
  return ASN1_item_free(a1, OCSP_REQINFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_REQUEST  (binary VA: 0x19c3280)
// Original: d2i_OCSP_REQUEST
// ----------------------------------------------------------------------------
int d2i_OCSP_REQUEST(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_REQUEST_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_REQUEST  (binary VA: 0x19c32c0)
// Original: i2d_OCSP_REQUEST
// ----------------------------------------------------------------------------
int i2d_OCSP_REQUEST(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_REQUEST_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_REQUEST_new  (binary VA: 0x19c3300)
// Original: OCSP_REQUEST_new
// ----------------------------------------------------------------------------
int OCSP_REQUEST_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_REQUEST_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_REQUEST_free  (binary VA: 0x19c3330)
// Original: OCSP_REQUEST_free
// ----------------------------------------------------------------------------
int OCSP_REQUEST_free(char a1)
{
  return ASN1_item_free(a1, OCSP_REQUEST_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_RESPBYTES  (binary VA: 0x19c3360)
// Original: d2i_OCSP_RESPBYTES
// ----------------------------------------------------------------------------
int d2i_OCSP_RESPBYTES(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_RESPBYTES_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_RESPBYTES  (binary VA: 0x19c33a0)
// Original: i2d_OCSP_RESPBYTES
// ----------------------------------------------------------------------------
int i2d_OCSP_RESPBYTES(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_RESPBYTES_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPBYTES_new  (binary VA: 0x19c33e0)
// Original: OCSP_RESPBYTES_new
// ----------------------------------------------------------------------------
int OCSP_RESPBYTES_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_RESPBYTES_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPBYTES_free  (binary VA: 0x19c3410)
// Original: OCSP_RESPBYTES_free
// ----------------------------------------------------------------------------
int OCSP_RESPBYTES_free(char a1)
{
  return ASN1_item_free(a1, OCSP_RESPBYTES_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_RESPONSE  (binary VA: 0x19c3440)
// Original: d2i_OCSP_RESPONSE
// ----------------------------------------------------------------------------
int d2i_OCSP_RESPONSE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_RESPONSE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_RESPONSE  (binary VA: 0x19c3480)
// Original: i2d_OCSP_RESPONSE
// ----------------------------------------------------------------------------
int i2d_OCSP_RESPONSE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_RESPONSE_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPONSE_new  (binary VA: 0x19c34c0)
// Original: OCSP_RESPONSE_new
// ----------------------------------------------------------------------------
int OCSP_RESPONSE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_RESPONSE_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPONSE_free  (binary VA: 0x19c34f0)
// Original: OCSP_RESPONSE_free
// ----------------------------------------------------------------------------
int OCSP_RESPONSE_free(char a1)
{
  return ASN1_item_free(a1, OCSP_RESPONSE_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_RESPID  (binary VA: 0x19c3520)
// Original: d2i_OCSP_RESPID
// ----------------------------------------------------------------------------
int d2i_OCSP_RESPID(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_RESPID_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_RESPID  (binary VA: 0x19c3560)
// Original: i2d_OCSP_RESPID
// ----------------------------------------------------------------------------
int i2d_OCSP_RESPID(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_RESPID_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPID_new  (binary VA: 0x19c35a0)
// Original: OCSP_RESPID_new
// ----------------------------------------------------------------------------
int OCSP_RESPID_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_RESPID_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPID_free  (binary VA: 0x19c35d0)
// Original: OCSP_RESPID_free
// ----------------------------------------------------------------------------
int OCSP_RESPID_free(char a1)
{
  return ASN1_item_free(a1, OCSP_RESPID_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_REVOKEDINFO  (binary VA: 0x19c3600)
// Original: d2i_OCSP_REVOKEDINFO
// ----------------------------------------------------------------------------
int d2i_OCSP_REVOKEDINFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_REVOKEDINFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_REVOKEDINFO  (binary VA: 0x19c3640)
// Original: i2d_OCSP_REVOKEDINFO
// ----------------------------------------------------------------------------
int i2d_OCSP_REVOKEDINFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_REVOKEDINFO_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_REVOKEDINFO_new  (binary VA: 0x19c3680)
// Original: OCSP_REVOKEDINFO_new
// ----------------------------------------------------------------------------
int OCSP_REVOKEDINFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_REVOKEDINFO_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_REVOKEDINFO_free  (binary VA: 0x19c36b0)
// Original: OCSP_REVOKEDINFO_free
// ----------------------------------------------------------------------------
int OCSP_REVOKEDINFO_free(char a1)
{
  return ASN1_item_free(a1, OCSP_REVOKEDINFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_CERTSTATUS  (binary VA: 0x19c36e0)
// Original: d2i_OCSP_CERTSTATUS
// ----------------------------------------------------------------------------
int d2i_OCSP_CERTSTATUS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_CERTSTATUS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_CERTSTATUS  (binary VA: 0x19c3720)
// Original: i2d_OCSP_CERTSTATUS
// ----------------------------------------------------------------------------
int i2d_OCSP_CERTSTATUS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_CERTSTATUS_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_CERTSTATUS_new  (binary VA: 0x19c3760)
// Original: OCSP_CERTSTATUS_new
// ----------------------------------------------------------------------------
int OCSP_CERTSTATUS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_CERTSTATUS_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_CERTSTATUS_free  (binary VA: 0x19c3790)
// Original: OCSP_CERTSTATUS_free
// ----------------------------------------------------------------------------
int OCSP_CERTSTATUS_free(char a1)
{
  return ASN1_item_free(a1, OCSP_CERTSTATUS_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_SINGLERESP  (binary VA: 0x19c37c0)
// Original: d2i_OCSP_SINGLERESP
// ----------------------------------------------------------------------------
int d2i_OCSP_SINGLERESP(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_SINGLERESP_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_SINGLERESP  (binary VA: 0x19c3800)
// Original: i2d_OCSP_SINGLERESP
// ----------------------------------------------------------------------------
int i2d_OCSP_SINGLERESP(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_SINGLERESP_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_SINGLERESP_new  (binary VA: 0x19c3840)
// Original: OCSP_SINGLERESP_new
// ----------------------------------------------------------------------------
int OCSP_SINGLERESP_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_SINGLERESP_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_SINGLERESP_free  (binary VA: 0x19c3870)
// Original: OCSP_SINGLERESP_free
// ----------------------------------------------------------------------------
int OCSP_SINGLERESP_free(char a1)
{
  return ASN1_item_free(a1, OCSP_SINGLERESP_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_RESPDATA  (binary VA: 0x19c38a0)
// Original: d2i_OCSP_RESPDATA
// ----------------------------------------------------------------------------
int d2i_OCSP_RESPDATA(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_RESPDATA_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_RESPDATA  (binary VA: 0x19c38e0)
// Original: i2d_OCSP_RESPDATA
// ----------------------------------------------------------------------------
int i2d_OCSP_RESPDATA(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_RESPDATA_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPDATA_new  (binary VA: 0x19c3920)
// Original: OCSP_RESPDATA_new
// ----------------------------------------------------------------------------
int OCSP_RESPDATA_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_RESPDATA_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_RESPDATA_free  (binary VA: 0x19c3950)
// Original: OCSP_RESPDATA_free
// ----------------------------------------------------------------------------
int OCSP_RESPDATA_free(char a1)
{
  return ASN1_item_free(a1, OCSP_RESPDATA_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_BASICRESP  (binary VA: 0x19c3980)
// Original: d2i_OCSP_BASICRESP
// ----------------------------------------------------------------------------
int d2i_OCSP_BASICRESP(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_BASICRESP_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_BASICRESP  (binary VA: 0x19c39c0)
// Original: i2d_OCSP_BASICRESP
// ----------------------------------------------------------------------------
int i2d_OCSP_BASICRESP(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_BASICRESP_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_BASICRESP_new  (binary VA: 0x19c3a00)
// Original: OCSP_BASICRESP_new
// ----------------------------------------------------------------------------
int OCSP_BASICRESP_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_BASICRESP_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_BASICRESP_free  (binary VA: 0x19c3a30)
// Original: OCSP_BASICRESP_free
// ----------------------------------------------------------------------------
int OCSP_BASICRESP_free(char a1)
{
  return ASN1_item_free(a1, OCSP_BASICRESP_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_CRLID  (binary VA: 0x19c3a60)
// Original: d2i_OCSP_CRLID
// ----------------------------------------------------------------------------
int d2i_OCSP_CRLID(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_CRLID_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_CRLID  (binary VA: 0x19c3aa0)
// Original: i2d_OCSP_CRLID
// ----------------------------------------------------------------------------
int i2d_OCSP_CRLID(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_CRLID_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_CRLID_new  (binary VA: 0x19c3ae0)
// Original: OCSP_CRLID_new
// ----------------------------------------------------------------------------
int OCSP_CRLID_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_CRLID_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_CRLID_free  (binary VA: 0x19c3b10)
// Original: OCSP_CRLID_free
// ----------------------------------------------------------------------------
int OCSP_CRLID_free(char a1)
{
  return ASN1_item_free(a1, OCSP_CRLID_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_OCSP_SERVICELOC  (binary VA: 0x19c3b40)
// Original: d2i_OCSP_SERVICELOC
// ----------------------------------------------------------------------------
int d2i_OCSP_SERVICELOC(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OCSP_SERVICELOC_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OCSP_SERVICELOC  (binary VA: 0x19c3b80)
// Original: i2d_OCSP_SERVICELOC
// ----------------------------------------------------------------------------
int i2d_OCSP_SERVICELOC(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OCSP_SERVICELOC_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_SERVICELOC_new  (binary VA: 0x19c3bc0)
// Original: OCSP_SERVICELOC_new
// ----------------------------------------------------------------------------
int OCSP_SERVICELOC_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OCSP_SERVICELOC_it));
}

// ----------------------------------------------------------------------------
// Function: OCSP_SERVICELOC_free  (binary VA: 0x19c3bf0)
// Original: OCSP_SERVICELOC_free
// ----------------------------------------------------------------------------
int OCSP_SERVICELOC_free(char a1)
{
  return ASN1_item_free(a1, OCSP_SERVICELOC_it);
}

// ----------------------------------------------------------------------------
// Function: ERR_load_OCSP_strings  (binary VA: 0x19c3c20)
// Original: ERR_load_OCSP_strings
// ----------------------------------------------------------------------------
int ERR_load_OCSP_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CBF40);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CBF40);
    return ERR_load_strings(0, &dword_20CBFE0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_X509_REQ  (binary VA: 0x19c3c80)
// Original: PEM_read_bio_X509_REQ
// ----------------------------------------------------------------------------
int PEM_read_bio_X509_REQ(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_X509_REQ), "CERTIFICATE REQUEST", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_X509_REQ  (binary VA: 0x19c3cd0)
// Original: PEM_read_X509_REQ
// ----------------------------------------------------------------------------
int PEM_read_X509_REQ(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_X509_REQ, "CERTIFICATE REQUEST", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_X509_REQ  (binary VA: 0x19c3d20)
// Original: PEM_write_bio_X509_REQ
// ----------------------------------------------------------------------------
int PEM_write_bio_X509_REQ(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_X509_REQ), "CERTIFICATE REQUEST", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_X509_REQ  (binary VA: 0x19c3d90)
// Original: PEM_write_X509_REQ
// ----------------------------------------------------------------------------
int PEM_write_X509_REQ(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_X509_REQ), "CERTIFICATE REQUEST", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_X509_REQ_NEW  (binary VA: 0x19c3e00)
// Original: PEM_write_bio_X509_REQ_NEW
// ----------------------------------------------------------------------------
int PEM_write_bio_X509_REQ_NEW(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_X509_REQ), "NEW CERTIFICATE REQUEST", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_X509_REQ_NEW  (binary VA: 0x19c3e70)
// Original: PEM_write_X509_REQ_NEW
// ----------------------------------------------------------------------------
int PEM_write_X509_REQ_NEW(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_X509_REQ), "NEW CERTIFICATE REQUEST", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_X509_CRL  (binary VA: 0x19c3ee0)
// Original: PEM_read_bio_X509_CRL
// ----------------------------------------------------------------------------
int PEM_read_bio_X509_CRL(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_X509_CRL), "X509 CRL", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_X509_CRL  (binary VA: 0x19c3f30)
// Original: PEM_read_X509_CRL
// ----------------------------------------------------------------------------
int PEM_read_X509_CRL(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_X509_CRL, "X509 CRL", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_X509_CRL  (binary VA: 0x19c3f80)
// Original: PEM_write_bio_X509_CRL
// ----------------------------------------------------------------------------
int PEM_write_bio_X509_CRL(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_X509_CRL), "X509 CRL", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_X509_CRL  (binary VA: 0x19c3ff0)
// Original: PEM_write_X509_CRL
// ----------------------------------------------------------------------------
int PEM_write_X509_CRL(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_X509_CRL), "X509 CRL", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_PKCS7  (binary VA: 0x19c4060)
// Original: PEM_read_bio_PKCS7
// ----------------------------------------------------------------------------
int PEM_read_bio_PKCS7(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_PKCS7), "PKCS7", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_PKCS7  (binary VA: 0x19c40b0)
// Original: PEM_read_PKCS7
// ----------------------------------------------------------------------------
int PEM_read_PKCS7(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_PKCS7, "PKCS7", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PKCS7  (binary VA: 0x19c4100)
// Original: PEM_write_bio_PKCS7
// ----------------------------------------------------------------------------
int PEM_write_bio_PKCS7(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_PKCS7), "PKCS7", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PKCS7  (binary VA: 0x19c4170)
// Original: PEM_write_PKCS7
// ----------------------------------------------------------------------------
int PEM_write_PKCS7(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_PKCS7), "PKCS7", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_NETSCAPE_CERT_SEQUENCE  (binary VA: 0x19c41e0)
// Original: PEM_read_bio_NETSCAPE_CERT_SEQUENCE
// ----------------------------------------------------------------------------
int PEM_read_bio_NETSCAPE_CERT_SEQUENCE(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_NETSCAPE_CERT_SEQUENCE), "CERTIFICATE", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_NETSCAPE_CERT_SEQUENCE  (binary VA: 0x19c4230)
// Original: PEM_read_NETSCAPE_CERT_SEQUENCE
// ----------------------------------------------------------------------------
int PEM_read_NETSCAPE_CERT_SEQUENCE(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_NETSCAPE_CERT_SEQUENCE, "CERTIFICATE", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_NETSCAPE_CERT_SEQUENCE  (binary VA: 0x19c4280)
// Original: PEM_write_bio_NETSCAPE_CERT_SEQUENCE
// ----------------------------------------------------------------------------
int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_NETSCAPE_CERT_SEQUENCE), "CERTIFICATE", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_NETSCAPE_CERT_SEQUENCE  (binary VA: 0x19c42f0)
// Original: PEM_write_NETSCAPE_CERT_SEQUENCE
// ----------------------------------------------------------------------------
int PEM_write_NETSCAPE_CERT_SEQUENCE(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_NETSCAPE_CERT_SEQUENCE), "CERTIFICATE", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_RSAPrivateKey  (binary VA: 0x19c4360)
// Original: PEM_read_bio_RSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_read_bio_RSAPrivateKey(int a1, void **a2, int a3, char *a4)
{
  uint32_t *bio_PrivateKey;
  int v5;
  void *v6;

  bio_PrivateKey = (uint32_t *)PEM_read_bio_PrivateKey(a1, 0, a3, a4);
  v5 = 0;
  v6 = bio_PrivateKey;
  if ( bio_PrivateKey != nullptr )
  {
    v5 = EVP_PKEY_get1_RSA(bio_PrivateKey);
    EVP_PKEY_free(v6);
    if ( v5 != 0 && a2 != nullptr )
    {
      RSA_free(*a2);
      *a2 = (void *)v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_RSAPrivateKey  (binary VA: 0x19c43f0)
// Original: PEM_read_RSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_read_RSAPrivateKey(int a1, void **a2, int a3, char *a4)
{
  uint32_t *PrivateKey;
  int v5;
  void *v6;

  PrivateKey = (uint32_t *)PEM_read_PrivateKey(a1, 0, a3, a4);
  v5 = 0;
  v6 = PrivateKey;
  if ( PrivateKey != nullptr )
  {
    v5 = EVP_PKEY_get1_RSA(PrivateKey);
    EVP_PKEY_free(v6);
    if ( v5 != 0 && a2 != nullptr )
    {
      RSA_free(*a2);
      *a2 = (void *)v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_RSAPrivateKey  (binary VA: 0x19c4480)
// Original: PEM_write_bio_RSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_write_bio_RSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int, void **))i2d_RSAPrivateKey), "RSA PRIVATE KEY", a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_RSAPrivateKey  (binary VA: 0x19c44f0)
// Original: PEM_write_RSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_write_RSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int, void **))i2d_RSAPrivateKey), "RSA PRIVATE KEY", a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_RSAPublicKey  (binary VA: 0x19c4560)
// Original: PEM_read_bio_RSAPublicKey
// ----------------------------------------------------------------------------
int PEM_read_bio_RSAPublicKey(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)((int (*)(int *, char **, int))d2i_RSAPublicKey), "RSA PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_RSAPublicKey  (binary VA: 0x19c45b0)
// Original: PEM_read_RSAPublicKey
// ----------------------------------------------------------------------------
int PEM_read_RSAPublicKey(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)((int (*)(int *, char **, int))d2i_RSAPublicKey), "RSA PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_RSAPublicKey  (binary VA: 0x19c4600)
// Original: PEM_write_bio_RSAPublicKey
// ----------------------------------------------------------------------------
int PEM_write_bio_RSAPublicKey(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int, void **))i2d_RSAPublicKey), "RSA PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_RSAPublicKey  (binary VA: 0x19c4670)
// Original: PEM_write_RSAPublicKey
// ----------------------------------------------------------------------------
int PEM_write_RSAPublicKey(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int, void **))i2d_RSAPublicKey), "RSA PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_RSA_PUBKEY  (binary VA: 0x19c46e0)
// Original: PEM_read_bio_RSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_bio_RSA_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_RSA_PUBKEY), "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_RSA_PUBKEY  (binary VA: 0x19c4730)
// Original: PEM_read_RSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_RSA_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_RSA_PUBKEY, "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_RSA_PUBKEY  (binary VA: 0x19c4780)
// Original: PEM_write_bio_RSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_bio_RSA_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_RSA_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_RSA_PUBKEY  (binary VA: 0x19c47f0)
// Original: PEM_write_RSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_RSA_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_RSA_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_DSAPrivateKey  (binary VA: 0x19c4860)
// Original: PEM_read_bio_DSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_read_bio_DSAPrivateKey(int a1, void **a2, int a3, char *a4)
{
  uint32_t *bio_PrivateKey;
  int v5;
  void *v6;

  bio_PrivateKey = (uint32_t *)PEM_read_bio_PrivateKey(a1, 0, a3, a4);
  v5 = 0;
  v6 = bio_PrivateKey;
  if ( bio_PrivateKey != nullptr )
  {
    v5 = EVP_PKEY_get1_DSA(bio_PrivateKey);
    EVP_PKEY_free(v6);
    if ( v5 != 0 && a2 != nullptr )
    {
      DSA_free(*a2);
      *a2 = (void *)v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_DSAPrivateKey  (binary VA: 0x19c48f0)
// Original: PEM_write_bio_DSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_write_bio_DSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int, void **))i2d_DSAPrivateKey), "DSA PRIVATE KEY", a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_DSAPrivateKey  (binary VA: 0x19c4960)
// Original: PEM_write_DSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_write_DSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int, void **))i2d_DSAPrivateKey), "DSA PRIVATE KEY", a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_DSA_PUBKEY  (binary VA: 0x19c49d0)
// Original: PEM_read_bio_DSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_bio_DSA_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_DSA_PUBKEY), "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_DSA_PUBKEY  (binary VA: 0x19c4a20)
// Original: PEM_read_DSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_DSA_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_DSA_PUBKEY, "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_DSA_PUBKEY  (binary VA: 0x19c4a70)
// Original: PEM_write_bio_DSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_bio_DSA_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_DSA_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_DSA_PUBKEY  (binary VA: 0x19c4ae0)
// Original: PEM_write_DSA_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_DSA_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_DSA_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_DSAPrivateKey  (binary VA: 0x19c4b50)
// Original: PEM_read_DSAPrivateKey
// ----------------------------------------------------------------------------
int PEM_read_DSAPrivateKey(int a1, void **a2, int a3, char *a4)
{
  uint32_t *PrivateKey;
  int v5;
  void *v6;

  PrivateKey = (uint32_t *)PEM_read_PrivateKey(a1, 0, a3, a4);
  v5 = 0;
  v6 = PrivateKey;
  if ( PrivateKey != nullptr )
  {
    v5 = EVP_PKEY_get1_DSA(PrivateKey);
    EVP_PKEY_free(v6);
    if ( v5 != 0 && a2 != nullptr )
    {
      DSA_free(*a2);
      *a2 = (void *)v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_DSAparams  (binary VA: 0x19c4be0)
// Original: PEM_read_bio_DSAparams
// ----------------------------------------------------------------------------
int PEM_read_bio_DSAparams(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)((int (*)(int *, char **, int))d2i_DSAparams), "DSA PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_DSAparams  (binary VA: 0x19c4c30)
// Original: PEM_read_DSAparams
// ----------------------------------------------------------------------------
int PEM_read_DSAparams(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)((int (*)(int *, char **, int))d2i_DSAparams), "DSA PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_DSAparams  (binary VA: 0x19c4c80)
// Original: PEM_write_bio_DSAparams
// ----------------------------------------------------------------------------
int PEM_write_bio_DSAparams(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int, void **))i2d_DSAparams), "DSA PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_DSAparams  (binary VA: 0x19c4cf0)
// Original: PEM_write_DSAparams
// ----------------------------------------------------------------------------
int PEM_write_DSAparams(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int, void **))i2d_DSAparams), "DSA PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_ECPrivateKey  (binary VA: 0x19c4d60)
// Original: PEM_read_bio_ECPrivateKey
// ----------------------------------------------------------------------------
int PEM_read_bio_ECPrivateKey(int a1, char **a2, int a3, char *a4)
{
  uint32_t *bio_PrivateKey;
  int v5;
  void *v6;

  bio_PrivateKey = (uint32_t *)PEM_read_bio_PrivateKey(a1, 0, a3, a4);
  v5 = 0;
  v6 = bio_PrivateKey;
  if ( bio_PrivateKey != nullptr )
  {
    v5 = EVP_PKEY_get1_EC_KEY(bio_PrivateKey);
    EVP_PKEY_free(v6);
    if ( v5 != 0 && a2 != nullptr )
    {
      EC_KEY_free(*a2);
      *a2 = (char *)v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_ECPKParameters  (binary VA: 0x19c4df0)
// Original: PEM_read_bio_ECPKParameters
// ----------------------------------------------------------------------------
int PEM_read_bio_ECPKParameters(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_ECPKParameters), "EC PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_ECPKParameters  (binary VA: 0x19c4e40)
// Original: PEM_read_ECPKParameters
// ----------------------------------------------------------------------------
int PEM_read_ECPKParameters(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_ECPKParameters, "EC PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_ECPKParameters  (binary VA: 0x19c4e90)
// Original: PEM_write_bio_ECPKParameters
// ----------------------------------------------------------------------------
int PEM_write_bio_ECPKParameters(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_ECPKParameters), "EC PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_ECPKParameters  (binary VA: 0x19c4f00)
// Original: PEM_write_ECPKParameters
// ----------------------------------------------------------------------------
int PEM_write_ECPKParameters(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_ECPKParameters), "EC PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_ECPrivateKey  (binary VA: 0x19c4f70)
// Original: PEM_write_bio_ECPrivateKey
// ----------------------------------------------------------------------------
int PEM_write_bio_ECPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int *, void **))i2d_ECPrivateKey), "EC PRIVATE KEY", a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_ECPrivateKey  (binary VA: 0x19c4fe0)
// Original: PEM_write_ECPrivateKey
// ----------------------------------------------------------------------------
int PEM_write_ECPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int *, void **))i2d_ECPrivateKey), "EC PRIVATE KEY", a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_EC_PUBKEY  (binary VA: 0x19c5050)
// Original: PEM_read_bio_EC_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_bio_EC_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_EC_PUBKEY), "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_EC_PUBKEY  (binary VA: 0x19c50a0)
// Original: PEM_read_EC_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_EC_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_EC_PUBKEY, "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_EC_PUBKEY  (binary VA: 0x19c50f0)
// Original: PEM_write_bio_EC_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_bio_EC_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_EC_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_EC_PUBKEY  (binary VA: 0x19c5160)
// Original: PEM_write_EC_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_EC_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_EC_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_ECPrivateKey  (binary VA: 0x19c51d0)
// Original: PEM_read_ECPrivateKey
// ----------------------------------------------------------------------------
int PEM_read_ECPrivateKey(int a1, char **a2, int a3, char *a4)
{
  uint32_t *PrivateKey;
  int v5;
  void *v6;

  PrivateKey = (uint32_t *)PEM_read_PrivateKey(a1, 0, a3, a4);
  v5 = 0;
  v6 = PrivateKey;
  if ( PrivateKey != nullptr )
  {
    v5 = EVP_PKEY_get1_EC_KEY(PrivateKey);
    EVP_PKEY_free(v6);
    if ( v5 != 0 && a2 != nullptr )
    {
      EC_KEY_free(*a2);
      *a2 = (char *)v5;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_DHparams  (binary VA: 0x19c5260)
// Original: PEM_read_bio_DHparams
// ----------------------------------------------------------------------------
int PEM_read_bio_DHparams(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)((int (*)(int *, char **, int))d2i_DHparams), "DH PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_DHparams  (binary VA: 0x19c52b0)
// Original: PEM_read_DHparams
// ----------------------------------------------------------------------------
int PEM_read_DHparams(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)((int (*)(int *, char **, int))d2i_DHparams), "DH PARAMETERS", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_DHparams  (binary VA: 0x19c5300)
// Original: PEM_write_bio_DHparams
// ----------------------------------------------------------------------------
int PEM_write_bio_DHparams(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)((int (*)(int, void **))i2d_DHparams), "DH PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_DHparams  (binary VA: 0x19c5370)
// Original: PEM_write_DHparams
// ----------------------------------------------------------------------------
int PEM_write_DHparams(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)((int (*)(int, void **))i2d_DHparams), "DH PARAMETERS", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_PUBKEY  (binary VA: 0x19c53e0)
// Original: PEM_read_bio_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_bio_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read_bio((int)(uintptr_t)(d2i_PUBKEY), "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_PUBKEY  (binary VA: 0x19c5430)
// Original: PEM_read_PUBKEY
// ----------------------------------------------------------------------------
int PEM_read_PUBKEY(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read(d2i_PUBKEY, "PUBLIC KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PUBKEY  (binary VA: 0x19c5480)
// Original: PEM_write_bio_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_bio_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write_bio((int)(uintptr_t)(i2d_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PUBKEY  (binary VA: 0x19c54f0)
// Original: PEM_write_PUBKEY
// ----------------------------------------------------------------------------
int PEM_write_PUBKEY(int a1, int a2)
{
  return PEM_ASN1_write((int)(uintptr_t)(i2d_PUBKEY), "PUBLIC KEY", a1, a2, 0, 0, 0, 0, nullptr);
}

// ----------------------------------------------------------------------------
// Function: ERR_load_PEM_strings  (binary VA: 0x19c5560)
// Original: ERR_load_PEM_strings
// ----------------------------------------------------------------------------
int ERR_load_PEM_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CC0E0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CC0E0);
    return ERR_load_strings(0, &dword_20CC240);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_def_callback  (binary VA: 0x19c55c0)
// Original: PEM_def_callback
// ----------------------------------------------------------------------------
int PEM_def_callback(void *dest, signed int a2, int a3, char *s)
{
  size_t n;
  signed int v5;
  int result;
  const char *v7;
  int i;
  int pw_prompt;
  const char *v10;

  n = a2;
  if ( s != nullptr )
  {
    v5 = strlen(s);
    if ( v5 <= a2 )
      n = v5;
    memcpy(dest, s, n);
    return n;
  }
  else
  {
    pw_prompt = (int)(uintptr_t)(EVP_get_pw_prompt());
    v7 = "Enter PEM pass phrase:";
    if ( pw_prompt != 0 )
      v7 = (const char *)pw_prompt;
    v10 = v7;
    for ( i = EVP_read_pw_string_min(dest, 4, a2, v7, a3); i == 0; i = EVP_read_pw_string_min(dest, 4, a2, v10, a3) )
    {
      result = strlen((const char *)dest);
      if ( result > 3 )
        return result;
      fprintf(stderr, "phrase is too short, needs to be at least %d chars\n", 4);
    }
    ERR_put_error(9, 100, 109, (int)(uintptr_t)(&unk_1B15112), 0);
    memset(dest, 0, a2);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: PEM_proc_type  (binary VA: 0x19c5700)
// Original: PEM_proc_type
// ----------------------------------------------------------------------------
int PEM_proc_type(char *a1, int a2)
{
  char *v2;

  v2 = "ENCRYPTED";
  if ( a2 != 10 )
  {
    v2 = "MIC-CLEAR";
    if ( a2 != 30 )
    {
      v2 = "MIC-ONLY";
      if ( a2 != 20 )
        v2 = "BAD-TYPE";
    }
  }
  BUF_strlcat(a1, "Proc-Type: 4,", 0x400u);
  BUF_strlcat(a1, v2, 0x400u);
  return BUF_strlcat(a1, (char *)&a0[1], 0x400u);
}

// ----------------------------------------------------------------------------
// Function: PEM_dek_info  (binary VA: 0x19c57b0)
// Original: PEM_dek_info
// ----------------------------------------------------------------------------
size_t PEM_dek_info(char *s, char *a2, int a3, int a4)
{
  size_t result;
  int v5;
  char *v6;
  int v7;

  BUF_strlcat(s, "DEK-Info: ", 0x400u);
  BUF_strlcat(s, a2, 0x400u);
  BUF_strlcat(s, ",", 0x400u);
  result = strlen(s);
  v7 = result + 2 * a3;
  if ( v7 <= 1023 )
  {
    if ( a3 <= 0 )
    {
      v7 = result;
    }
    else
    {
      v5 = 0;
      v6 = &s[result];
      do
      {
        v6[2 * v5] = a0123456789abcd_1 /* "0123456789ABCDEF" */[(*(char *)(a4 + v5) >> 4) & 0xF];
        v6[2 * v5 + 1] = a0123456789abcd_1 /* "0123456789ABCDEF" */[*(uint8_t *)(a4 + v5) & 0xF];
        ++v5;
      }
      while ( v5 != a3 );
    }
    result = v7;
    s[v7] = 10;
    s[v7 + 1] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_ASN1_read  (binary VA: 0x19c58a0)
// Original: PEM_ASN1_read
// ----------------------------------------------------------------------------
int PEM_ASN1_read(int a1, char *a2, int a3, int a4, int a5, char *a6)
{
  void *v6;
  uint8_t *v7;
  int bio;

  v6 = BIO_s_file();
  v7 = BIO_new((int)(uintptr_t)(v6));
  if ( v7 != nullptr )
  {
    BIO_ctrl(v7, 106, 0, a3);
    bio = PEM_ASN1_read_bio(a1, a2, (int)(uintptr_t)(v7), a4, a5, a6);
    BIO_free(v7);
  }
  else
  {
    bio = 0;
    ERR_put_error(9, 102, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio;
}

// ----------------------------------------------------------------------------
// Function: PEM_do_header  (binary VA: 0x19c5980)
// Original: PEM_do_header
// ----------------------------------------------------------------------------
int PEM_do_header(uint32_t *a1, char *a2, size_t *a3, int (*a4)(uint8_t *, int, uint32_t, char *), char *a5)
{
  int result;
  int v6;
  void *v7;
  int v8;
  size_t v9;
  typedef size_t _g4_t_v10;
  typedef int _g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef uint8_t _g4_t_v13[32];
  typedef int _g4_t_v14[35];
  typedef uint8_t _g4_t_dest[1052];
  enum : size_t {
    _g4_s0 = 1328u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v14)) > _g4_s4 ? (68u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (208u + sizeof(_g4_t_dest)) > _g4_s5 ? (208u + sizeof(_g4_t_dest)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 208u);

  v10 = *a3;
  result = 1;
  if ( *a1 != 0 )
  {
    if ( a4 != nullptr )
      v6 = a4(dest, 1024, 0, a5);
    else
      v6 = PEM_def_callback(dest, 1024, 0, a5);
    if ( v6 <= 0 )
    {
      ERR_put_error(9, 106, 104, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    else
    {
      v7 = EVP_md5();
      EVP_BytesToKey(*a1, v7, a1 + 1, dest, v6, 1, v13, 0);
      v12 = v10;
      EVP_CIPHER_CTX_init(v14);
      EVP_DecryptInit_ex(v14, (uint32_t *)*a1, nullptr, (int)(uintptr_t)(v13), a1 + 1);
      EVP_DecryptUpdate((int)(uintptr_t)(v14), a2, &v11, a2, v10);
      v8 = EVP_DecryptFinal_ex((int)(uintptr_t)(v14), (int)(uintptr_t)(&a2[v11]), (int *)&v12);
      EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(v14));
      OPENSSL_cleanse(dest, 0x400u);
      OPENSSL_cleanse(v13, 0x20u);
      v9 = v11 + v12;
      v12 += v11;
      if ( v8 != 0 )
      {
        *a3 = v9;
        return 1;
      }
      else
      {
        ERR_put_error(9, 106, 101, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_get_EVP_CIPHER_INFO  (binary VA: 0x19c5bb0)
// Original: PEM_get_EVP_CIPHER_INFO
// ----------------------------------------------------------------------------
int PEM_get_EVP_CIPHER_INFO(uint8_t *a1, int *a2)
{
  int result;
  char v3;
  uint8_t *v4;
  bool v5;
  uint8_t *v6;
  char v7;
  int cipherbyname;
  int v9;
  int i;
  uint8_t *v11;
  char v12;
  int v13;
  int v14;
  int v15;
  char v16;
  uint8_t *v17;
  int v18;

  result = 1;
  *a2 = 0;
  if ( a1 != nullptr && *a1 != 0 && *a1 != 10 )
  {
    if ( memcmp(a1, "Proc-Type: ", 0xBu) != 0 )
    {
      ERR_put_error(9, 107, 107, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    result = 0;
    if ( a1[11] == 52 )
    {
      result = 0;
      if ( a1[12] == 44 )
      {
        v17 = a1 + 13;
        if ( memcmp(a1 + 13, "ENCRYPTED", 9u) != 0 )
        {
          ERR_put_error(9, 107, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v3 = a1[13];
        if ( v3 != 10 )
        {
          v4 = a1 + 13;
          if ( v3 != 0 )
          {
            do
              v3 = *++v4;
            while ( *v4 != 0 && v3 != 10 );
            v17 = v4;
          }
        }
        if ( v3 == 0 )
        {
          ERR_put_error(9, 107, 112, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        v5 = memcmp(v17 + 1, "DEK-Info: ", 0xAu) == 0;
        v6 = v17 + 11;
        if ( !v5 )
        {
          ERR_put_error(9, 107, 105, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
        while ( 1 )
        {
          v7 = *v6;
          if ( (uint8_t)(*v6 - 65) > 0x19u && v7 != 45 && (uint8_t)(v7 - 48) > 9u )
            break;
          ++v6;
        }
        *v6 = 0;
        v16 = v7;
        cipherbyname = EVP_get_cipherbyname((int)(uintptr_t)(v17 + 11));
        *a2 = cipherbyname;
        *v6 = v16;
        if ( cipherbyname != 0 )
        {
          v9 = *(uint32_t *)(cipherbyname + 12);
          if ( v9 > 0 )
          {
            for ( i = 0; i != v9; ++i )
              *((uint8_t *)a2 + i + 4) = 0;
          }
          result = 1;
          v18 = 2 * v9;
          if ( 2 * v9 > 0 )
          {
            LOBYTE(result) = 0;
            v11 = v6;
            while ( 1 )
            {
              v12 = v11[result + 1];
              v13 = v12 - 48;
              if ( (uint8_t)(v12 - 48) > 9u )
              {
                v13 = v12 - 55;
                if ( (uint8_t)(v12 - 65) > 5u )
                {
                  if ( (uint8_t)(v12 - 97) > 5u )
                  {
                    ERR_put_error(9, 101, 103, (int)(uintptr_t)(&unk_1B15112), 0);
                    return 0;
                  }
                  v13 = v12 - 87;
                }
              }
              v14 = result >> 1;
              v15 = -((result++ & 1) == 0);
              *((uint8_t *)a2 + v14 + 4) |= v13 << (v15 & 4);
              if ( result == v18 )
                return 1;
            }
          }
        }
        else
        {
          ERR_put_error(9, 107, 114, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio  (binary VA: 0x19c5ee0)
// Original: PEM_write_bio
// ----------------------------------------------------------------------------
int PEM_write_bio(uint32_t *a1, char *s, char *a3, int a4, signed int a5)
{
  int16_t v5; // di
  int v7;
  signed int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef size_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[27];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v26)) > _g4_s8 ? (60u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v27)) > _g4_s9 ? (64u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);

  EVP_EncodeInit(v27);
  v5 = 7;
  v22 = strlen(s);
  if ( BIO_write(a1, (int)(uintptr_t)("-----BEGIN "), 11) != 11 )
    goto LABEL_2;
  v7 = BIO_write(a1, (int)(uintptr_t)(s), v22);
  if ( v7 != v22 )
    goto LABEL_2;
  v18 = v7;
  if ( BIO_write(a1, (int)(uintptr_t)("-----\n"), 6) != 6 )
    goto LABEL_2;
  v8 = strlen(a3);
  v9 = v18;
  if ( v8 > 0 )
  {
    if ( BIO_write(a1, (int)(uintptr_t)(a3), v8) != v8 )
      goto LABEL_2;
    v10 = BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1);
    v9 = v18;
    if ( v10 != 1 )
      goto LABEL_2;
  }
  v19 = v9;
  v25 = CRYPTO_malloc(0x2000, (int)(uintptr_t)(&unk_1B15112), 0);
  v11 = v19;
  if ( v25 == nullptr )
  {
    v5 = 65;
    goto LABEL_2;
  }
  if ( a5 > 0 )
  {
    v23 = 0;
    v24 = 0;
    v12 = a5;
    while ( 1 )
    {
      v13 = 5120;
      if ( v12 <= 5120 )
        v13 = v12;
      EVP_EncodeUpdate((int)(uintptr_t)(v27), (int)(uintptr_t)(v25), (int)(uintptr_t)(&v26), (void *)(v23 + a4), v13);
      v14 = 0;
      if ( v26 != 0 )
      {
        v15 = BIO_write(a1, (int)(uintptr_t)(v25), v26);
        v14 = v26;
        if ( v15 != v26 )
          break;
      }
      v12 -= v13;
      v24 += v14;
      v23 += v13;
      if ( v12 <= 0 )
      {
        v11 = v19;
        goto LABEL_18;
      }
    }
LABEL_16:
    v5 = 7;
    OPENSSL_cleanse(v25, 0x2000u);
    CRYPTO_free(v25);
LABEL_2:
    ERR_put_error(9, 114, v5, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v24 = 0;
LABEL_18:
  v20 = v11;
  EVP_EncodeFinal(v27, v25, &v26);
  v16 = v20;
  if ( v26 > 0 )
  {
    v17 = BIO_write(a1, (int)(uintptr_t)(v25), v26);
    v16 = v20;
    if ( v17 != v26 )
      goto LABEL_16;
  }
  v21 = v16;
  OPENSSL_cleanse(v25, 0x2000u);
  v5 = 7;
  CRYPTO_free(v25);
  if ( BIO_write(a1, (int)(uintptr_t)("-----END "), 9) != 9
    || v21 != BIO_write(a1, (int)(uintptr_t)(s), v21)
    || BIO_write(a1, (int)(uintptr_t)("-----\n"), 6) != 6 )
  {
    goto LABEL_2;
  }
  return v26 + v24;
}

// ----------------------------------------------------------------------------
// Function: PEM_write  (binary VA: 0x19c62c0)
// Original: PEM_write
// ----------------------------------------------------------------------------
int PEM_write(int a1, char *a2, char *a3, int a4, size_t a5)
{
  void *v5;
  uint8_t *v6;
  int v7;

  v5 = BIO_s_file();
  v6 = BIO_new((int)(uintptr_t)(v5));
  if ( v6 != nullptr )
  {
    BIO_ctrl(v6, 106, 0, a1);
    v7 = PEM_write_bio(v6, a2, a3, a4, a5);
    BIO_free(v6);
  }
  else
  {
    v7 = 0;
    ERR_put_error(9, 113, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: PEM_ASN1_write_bio  (binary VA: 0x19c6390)
// Original: PEM_ASN1_write_bio
// ----------------------------------------------------------------------------
bool PEM_ASN1_write_bio(int (*a1)(int, char **), char *a2, uint32_t *a3, int a4, uint32_t *a5, uint8_t *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9)
{
  unsigned int v9;
  int v10;
  size_t v11;
  char *v12;
  char *v13;
  int v14;
  void *v15;
  signed int v16;
  bool v17;
  typedef char *_g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[32];
  typedef uint32_t _g4_t_v25[35];
  typedef uint8_t _g4_t_s[1052];
  enum : size_t {
    _g4_s0 = 1344u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v20)) > _g4_s1 ? (24u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v21)) > _g4_s2 ? (28u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v22)) > _g4_s3 ? (32u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v23)) > _g4_s4 ? (36u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v24)) > _g4_s5 ? (52u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v25)) > _g4_s6 ? (84u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (224u + sizeof(_g4_t_s)) > _g4_s7 ? (224u + sizeof(_g4_t_s)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 224u);

  if ( a5 != nullptr )
  {
    v9 = EVP_CIPHER_nid((int)(uintptr_t)(a5));
    v19 = OBJ_nid2sn(v9);
    if ( v19 == nullptr )
    {
      ERR_put_error(9, 105, 113, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_17;
    }
  }
  else
  {
    v19 = nullptr;
  }
  v10 = a1(a4, nullptr);
  v11 = v10;
  if ( v10 < 0 )
  {
    ERR_put_error(9, 105, 13, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_17:
    v17 = false;
    OPENSSL_cleanse(v24, 0x20u);
    OPENSSL_cleanse(v23, 0x10u);
    OPENSSL_cleanse((uint8_t *)v25, 0x8Cu);
    OPENSSL_cleanse(s, 0x400u);
    return v17;
  }
  v12 = (char *)(CRYPTO_malloc(v10 + 20, (int)(uintptr_t)(&unk_1B15112), 0));
  v13 = v12;
  if ( v12 == nullptr )
  {
    ERR_put_error(9, 105, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_17;
  }
  v22 = v12;
  v14 = a1(a4, &v22);
  v20 = v14;
  if ( a5 != nullptr )
  {
    if ( a6 == nullptr )
    {
      if ( a8 != nullptr )
        a7 = a8(s, 1024, 1, a9);
      else
        a7 = PEM_def_callback(s, 1024, 1, a9);
      if ( a7 <= 0 )
      {
        v17 = false;
        ERR_put_error(9, 105, 111, (int)(uintptr_t)(&unk_1B15112), 0);
        OPENSSL_cleanse(v24, 0x20u);
        goto LABEL_14;
      }
      v14 = v20;
      a6 = s;
    }
    RAND_add(v13, v14, 0);
    if ( (int)a5[3] > 16 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "enc->iv_len <= (int)sizeof(iv)");
    if ( (int)RAND_pseudo_bytes(v23, a5[3]) < 0 )
    {
      v17 = false;
      OPENSSL_cleanse(v24, 0x20u);
      goto LABEL_14;
    }
    v15 = EVP_md5();
    EVP_BytesToKey(a5, v15, v23, a6, a7, 1, v24, 0);
    if ( a6 == s )
      OPENSSL_cleanse(s, 0x400u);
    if ( strlen(v19) + 2 * a5[3] + 36 > 0x400 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "strlen(objstr)+23+2*enc->iv_len+13 <= sizeof buf");
    s[0] = 0;
    PEM_proc_type((char *)s, 10);
    PEM_dek_info((char *)s, v19, a5[3], (int)(uintptr_t)(v23));
    EVP_CIPHER_CTX_init(v25);
    EVP_EncryptInit_ex(v25, a5, nullptr, (int)(uintptr_t)(v24), v23);
    EVP_EncryptUpdate(v25, (int)(uintptr_t)(v13), &v21, v13, v20);
    EVP_EncryptFinal_ex((int)(uintptr_t)(v25), (int)(uintptr_t)(&v13[v21]), &v20);
    EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(v25));
    v20 += v21;
    v16 = PEM_write_bio(a3, a2, (char *)s, (int)(uintptr_t)(v13), v20);
  }
  else
  {
    s[0] = 0;
    v16 = PEM_write_bio(a3, a2, (char *)s, (int)(uintptr_t)(v13), v14);
  }
  v20 = v16;
  v17 = v16 > 0;
  OPENSSL_cleanse(v24, 0x20u);
LABEL_14:
  OPENSSL_cleanse(v23, 0x10u);
  OPENSSL_cleanse((uint8_t *)v25, 0x8Cu);
  OPENSSL_cleanse(s, 0x400u);
  OPENSSL_cleanse((uint8_t *)v13, v11);
  CRYPTO_free(v13);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: PEM_ASN1_write  (binary VA: 0x19c6940)
// Original: PEM_ASN1_write
// ----------------------------------------------------------------------------
bool PEM_ASN1_write(int (*a1)(int, char **), char *a2, int a3, int a4, uint32_t *a5, uint8_t *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9)
{
  void *v9;
  uint8_t *v10;
  bool v11;

  v9 = BIO_s_file();
  v10 = BIO_new((int)(uintptr_t)(v9));
  if ( v10 != nullptr )
  {
    BIO_ctrl(v10, 106, 0, a3);
    v11 = PEM_ASN1_write_bio(a1, a2, v10, a4, a5, a6, a7, a8, a9);
    BIO_free(v10);
  }
  else
  {
    v11 = false;
    ERR_put_error(9, 104, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio  (binary VA: 0x19c6a30)
// Original: PEM_read_bio
// ----------------------------------------------------------------------------
int PEM_read_bio(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, char **a5)
{
  uint32_t *v5;
  int v6;
  size_t v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  size_t v15;
  size_t v16;
  char *v17;
  uint32_t *v18;
  typedef size_t _g4_t_v19;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_s1;
  typedef char *_g4_t_s1a;
  typedef void **_g4_t_v26;
  typedef uint8_t **_g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef uint8_t _g4_t_v30[96];
  typedef uint8_t _g4_t_src[9];
  typedef char _g4_t_s2[2];
  typedef char _g4_t_s[273];
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_n)) > _g4_s1 ? (4u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v22)) > _g4_s3 ? (8u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v23)) > _g4_s4 ? (12u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_s1)) > _g4_s5 ? (16u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_s1a)) > _g4_s6 ? (16u + sizeof(_g4_t_s1a)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v26)) > _g4_s7 ? (20u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v27)) > _g4_s8 ? (24u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v28)) > _g4_s9 ? (40u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v29)) > _g4_s10 ? (44u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v30)) > _g4_s11 ? (48u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_src)) > _g4_s12 ? (144u + sizeof(_g4_t_src)) : _g4_s12,
    _g4_s14 = (153u + sizeof(_g4_t_s2)) > _g4_s13 ? (153u + sizeof(_g4_t_s2)) : _g4_s13,
    _g4_s15 = (155u + sizeof(_g4_t_s)) > _g4_s14 ? (155u + sizeof(_g4_t_s)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 16u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 144u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 153u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 155u);

  v29 = nullptr;
  v26 = (void **)BUF_MEM_new();
  v22 = BUF_MEM_new();
  v5 = BUF_MEM_new();
  v27 = (uint8_t **)v5;
  if ( v22 == nullptr || v26 == nullptr || v5 == nullptr )
  {
    BUF_MEM_free(v26);
    BUF_MEM_free(v22);
    BUF_MEM_free(v27);
    ERR_put_error(9, 109, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  s[243] = 0;
  while ( 1 )
  {
    v6 = BIO_gets(a1, (int)(uintptr_t)(src), 254);
    if ( v6 <= 0 )
    {
      ERR_put_error(9, 109, 108, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_12;
    }
    do
    {
      if ( (char)src[v6] > 32 )
        break;
      --v6;
    }
    while ( v6 != -1 );
    src[v6 + 1] = 10;
    src[v6 + 2] = 0;
    if ( memcmp(src, "-----BEGIN ", 0xBu) == 0 )
    {
      v7 = strlen(s);
      if ( memcmp(&src[v7 + 5], "-----\n", 6u) == 0 )
        break;
    }
  }
  v19 = v7;
  if ( BUF_MEM_grow((unsigned int *)v26, v7 + 9) == 0 )
    goto LABEL_11;
  memcpy(v26[1], s, v19 - 6);
  *((char *)v26[1] + v19 - 6) = 0;
  if ( BUF_MEM_grow(v22, 0x100u) == 0 )
    goto LABEL_11;
  s1 = nullptr;
  *(uint8_t *)v22[1] = 0;
  while ( 1 )
  {
    v9 = BIO_gets(a1, (int)(uintptr_t)(src), 254);
    if ( v9 <= 0 )
      goto LABEL_24;
    do
    {
      if ( (char)src[v9] > 32 )
        break;
      --v9;
    }
    while ( v9 != -1 );
    src[v9 + 1] = 10;
    src[v9 + 2] = 0;
    v10 = v9 + 2;
    if ( src[0] == 10 )
    {
LABEL_24:
      v11 = 0;
      goto LABEL_25;
    }
    n = v9 + 2;
    v23 = &s1[v10];
    if ( BUF_MEM_grow(v22, (unsigned int)(uintptr_t)(&s1[v10 + 9])) == 0 )
      goto LABEL_11;
    if ( memcmp(src, "-----END ", 9u) == 0 )
      break;
    memcpy(&s1[v22[1]], src, n);
    s1 = v23;
    v23[v22[1]] = 0;
  }
  v11 = 1;
LABEL_25:
  v29 = nullptr;
  if ( BUF_MEM_grow((unsigned int *)v27, 0x400u) == 0 )
  {
LABEL_11:
    ERR_put_error(9, 109, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_12;
  }
  *v27[1] = 0;
  if ( v11 != 0 )
  {
    v18 = (uint32_t *)(v27);
    v27 = (uint8_t **)v22;
    v29 = s1;
    v22 = v18;
  }
  else
  {
    while ( 1 )
    {
      v12 = BIO_gets(a1, (int)(uintptr_t)(src), 254);
      if ( v12 <= 0 )
        break;
      do
      {
        if ( (char)src[v12] > 32 )
          break;
        --v12;
      }
      while ( v12 != -1 );
      src[v12 + 1] = 10;
      src[v12 + 2] = 0;
      v13 = v12 + 2;
      if ( memcmp(src, "-----END ", 9u) == 0 )
      {
        s1a = (char *)v26[1];
        v15 = strlen(s1a);
        v16 = v15;
        goto LABEL_41;
      }
      if ( v13 > 65 )
        goto LABEL_47;
      v21 = v12 + 2;
      if ( BUF_MEM_grow_clean((size_t *)v27, (size_t)&v29[v13 + 9]) == 0 )
        goto LABEL_11;
      memcpy(&v27[1][(uint32_t)(uintptr_t)(v29)], src, v21);
      v29[(uint32_t)(uintptr_t)(v27[1]) + v21] = 0;
      v29 += v21;
      if ( v21 != 65 )
      {
        src[0] = 0;
        v14 = BIO_gets(a1, (int)(uintptr_t)(src), 254);
        if ( v14 > 0 )
        {
          do
          {
            if ( (char)src[v14] > 32 )
              break;
            --v14;
          }
          while ( v14 != -1 );
          src[v14 + 1] = 10;
          src[v14 + 2] = 0;
        }
        break;
      }
    }
  }
  s1a = (char *)v26[1];
  v15 = strlen(s1a);
  if ( memcmp(src, "-----END ", 9u) != 0 )
    goto LABEL_47;
  v16 = v15;
LABEL_41:
  if ( strncmp(s1a, s2, v15) != 0 || memcmp(&src[v16 + 9], "-----\n", 6u) != 0 )
  {
LABEL_47:
    ERR_put_error(9, 109, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_12;
  }
  EVP_DecodeInit(v30);
  if ( (int)EVP_DecodeUpdate(v30, v27[1], &v29, v27[1], v29) < 0
    || (int)EVP_DecodeFinal(v30, &v27[1][(uint32_t)(uintptr_t)(v29)], &v28) < 0 )
  {
    ERR_put_error(9, 109, 100, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_12;
  }
  v17 = &v29[v28];
  v29 += v28;
  if ( v29 == nullptr )
  {
LABEL_12:
    BUF_MEM_free(v26);
    BUF_MEM_free(v22);
    BUF_MEM_free(v27);
    return 0;
  }
  *a2 = (uint32_t)(uintptr_t)(v26[1]);
  *a3 = v22[1];
  *a4 = (uint32_t)(uintptr_t)(v27[1]);
  *a5 = v17;
  CRYPTO_free(v26);
  CRYPTO_free(v22);
  CRYPTO_free(v27);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PEM_read  (binary VA: 0x19c70b0)
// Original: PEM_read
// ----------------------------------------------------------------------------
int PEM_read(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, char **a5)
{
  void *v5;
  uint8_t *v6;
  int bio;

  v5 = BIO_s_file();
  v6 = BIO_new((int)(uintptr_t)(v5));
  if ( v6 != nullptr )
  {
    BIO_ctrl(v6, 106, 0, a1);
    bio = PEM_read_bio(v6, a2, a3, a4, a5);
    BIO_free(v6);
  }
  else
  {
    bio = 0;
    ERR_put_error(9, 108, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio;
}

// ----------------------------------------------------------------------------
// Function: PEM_bytes_read_bio  (binary VA: 0x19c7210)
// Original: PEM_bytes_read_bio
// ----------------------------------------------------------------------------
int PEM_bytes_read_bio(void **a1, int *a2, char **a3, char *s2, uint32_t *a5, int (*a6)(uint8_t *, int, uint32_t, char *), char *a7)
{
  char *v7;
  int result;
  bool v9;
  bool v10;
  signed int v11;
  int v12;
  int v13;
  signed int v14;
  int str;
  int16_t v16;
  typedef char *_g4_t_s1;
  typedef void *_g4_t_v18;
  typedef void *_g4_t_i;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[12];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_s1)) > _g4_s0 ? (8u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_i)) > _g4_s2 ? (16u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);

  s1 = nullptr;
  v18 = nullptr;
  for ( i = nullptr; PEM_read_bio(a5, &s1, &v18, &i, (char **)&v20) != 0; CRYPTO_free(i) )
  {
    v7 = s1;
    if ( strcmp(s1, s2) == 0 )
      goto LABEL_7;
    if ( strcmp(s2, "ANY PRIVATE KEY") == 0 )
    {
      if ( strcmp(v7, "ENCRYPTED PRIVATE KEY") == 0 )
        goto LABEL_7;
      if ( strcmp(v7, "PRIVATE KEY") == 0 )
        goto LABEL_7;
      v14 = pem_check_suffix(v7, "PRIVATE KEY");
      if ( v14 > 0 )
      {
        str = EVP_PKEY_asn1_find_str(nullptr, v7, v14);
        if ( str != 0 && *(uint32_t *)(str + 88) != 0 )
          goto LABEL_7;
      }
LABEL_33:
      v7 = s1;
      goto LABEL_27;
    }
    if ( strcmp(s2, "PARAMETERS") == 0 )
    {
      v11 = pem_check_suffix(v7, "PARAMETERS");
      if ( v11 > 0 )
      {
        v12 = EVP_PKEY_asn1_find_str((void **)&v21, v7, v11);
        if ( v12 != 0 )
        {
          v13 = *(uint32_t *)(v12 + 56);
          if ( v21 != 0 )
            ENGINE_finish((uint32_t *)v21);
          if ( v13 != 0 )
          {
LABEL_7:
            if ( PEM_get_EVP_CIPHER_INFO(v18, v22) != 0 && PEM_do_header(v22, (char *)i, (size_t *)&v20, a6, a7) != 0 )
            {
              *a1 = i;
              *a2 = v20;
              if ( a3 != nullptr )
                *a3 = s1;
              else
                CRYPTO_free(s1);
              CRYPTO_free(v18);
              return 1;
            }
            else
            {
              CRYPTO_free(s1);
              CRYPTO_free(v18);
              CRYPTO_free(i);
              return 0;
            }
          }
        }
      }
      goto LABEL_33;
    }
    v10 = strcmp(v7, "X509 CERTIFICATE") == 0;
    v9 = !v10;
    if ( v10 && strcmp(s2, "CERTIFICATE") == 0 )
      goto LABEL_7;
    if ( strcmp(v7, "NEW CERTIFICATE REQUEST") == 0 && strcmp(s2, "CERTIFICATE REQUEST") == 0 )
      goto LABEL_7;
    v10 = strcmp(v7, "CERTIFICATE") == 0;
    if ( v10 && strcmp(s2, "TRUSTED CERTIFICATE") == 0 )
      goto LABEL_7;
    if ( !v9 && strcmp(s2, "TRUSTED CERTIFICATE") == 0
      || v10 && strcmp(s2, "PKCS7") == 0
      || strcmp(v7, "PKCS #7 SIGNED DATA") == 0 && strcmp(s2, "PKCS7") == 0
      || v10 && strcmp(s2, (const char *)&off_1B8A460) == 0
      || strcmp(v7, "PKCS7") == 0 && strcmp(s2, (const char *)&off_1B8A460) == 0 )
    {
      goto LABEL_7;
    }
LABEL_27:
    CRYPTO_free(v7);
    CRYPTO_free(v18);
  }
  v16 = ERR_peek_error();
  result = 0;
  if ( (v16 & 0xFFF) == 0x6C )
  {
    ERR_add_error_data(2, "Expecting: ", s2);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_ASN1_read_bio  (binary VA: 0x19c7630)
// Original: PEM_ASN1_read_bio
// ----------------------------------------------------------------------------
int PEM_ASN1_read_bio(int (*a1)(int, void **, int), char *a2, uint32_t *a3, int a4, int (*a5)(uint8_t *, int, uint32_t, char *), char *a6)
{
  int v6;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v6 = 0;
  v8 = nullptr;
  v9 = nullptr;
  if ( PEM_bytes_read_bio(&v9, v10, nullptr, a2, a3, a5, a6) != 0 )
  {
    v8 = v9;
    v6 = a1(a4, &v8, v10[0]);
    if ( v6 == 0 )
      ERR_put_error(9, 103, 13, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_free(v9);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_PrivateKey  (binary VA: 0x19c7710)
// Original: PEM_read_bio_PrivateKey
// ----------------------------------------------------------------------------
uint32_t * PEM_read_bio_PrivateKey(uint32_t *a1, void **a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  signed int v12;
  size_t *str;
  int v14;
  char v15; // si
  int v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef char _g4_t_dest[1052];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v21)) > _g4_s4 ? (12u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v23)) > _g4_s6 ? (20u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v24)) > _g4_s7 ? (24u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_dest)) > _g4_s9 ? (32u + sizeof(_g4_t_dest)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 32u);

  v22 = nullptr;
  v23 = nullptr;
  v24 = nullptr;
  v4 = PEM_bytes_read_bio(&v24, (int *)&v25, &v22, "ANY PRIVATE KEY", a1, a3, a4);
  v5 = 0;
  if ( v4 != 0 )
  {
    v23 = v24;
    if ( strcmp(v22, "PRIVATE KEY") == 0 )
    {
      v14 = d2i_PKCS8_PRIV_KEY_INFO(0, (int)(uintptr_t)(&v23), v25);
      v15 = v14;
      if ( v14 == 0 )
        goto LABEL_27;
      v16 = EVP_PKCS82PKEY(v14);
      if ( a2 != nullptr )
      {
        if ( *a2 != nullptr )
        {
          v20 = v16;
          EVP_PKEY_free(*a2);
          v16 = v20;
        }
        *a2 = (void *)v16;
      }
      v21 = (uint32_t *)v16;
      PKCS8_PRIV_KEY_INFO_free(v15);
      v10 = v21;
    }
    else if ( strcmp(v22, "ENCRYPTED PRIVATE KEY") == 0 )
    {
      v6 = d2i_X509_SIG(0, &v23, v25);
      if ( v6 == 0 )
        goto LABEL_27;
      if ( a3 != nullptr )
        v7 = a3((uint8_t *)dest, 1024, 0, a4);
      else
        v7 = PEM_def_callback(dest, 1024, 0, a4);
      if ( v7 <= 0 )
      {
        ERR_put_error(9, 123, 104, (int)(uintptr_t)(&unk_1B15112), 0);
        X509_SIG_free(v6);
        v10 = nullptr;
        goto LABEL_15;
      }
      v8 = PKCS8_decrypt(v6, dest, v7);
      X509_SIG_free(v6);
      if ( v8 == 0 )
        goto LABEL_27;
      v9 = EVP_PKCS82PKEY(v8);
      if ( a2 != nullptr )
      {
        if ( *a2 != nullptr )
        {
          v17 = v9;
          EVP_PKEY_free(*a2);
          v9 = v17;
        }
        *a2 = (void *)v9;
      }
      v18 = (uint32_t *)v9;
      PKCS8_PRIV_KEY_INFO_free(v8);
      v10 = v18;
    }
    else
    {
      v12 = pem_check_suffix(v22, "PRIVATE KEY");
      if ( v12 <= 0 )
        goto LABEL_27;
      str = (size_t *)EVP_PKEY_asn1_find_str(nullptr, v22, v12);
      if ( str == nullptr || str[22] == 0 )
        goto LABEL_27;
      v10 = d2i_PrivateKey(*str, (uint32_t **)a2, (int)(uintptr_t)(&v23), v25);
    }
    if ( v10 != nullptr )
    {
LABEL_15:
      v19 = v10;
      CRYPTO_free(v22);
      OPENSSL_cleanse((uint8_t *)v24, v25);
      CRYPTO_free(v24);
      return v19;
    }
LABEL_27:
    ERR_put_error(9, 123, 13, (int)(uintptr_t)(&unk_1B15112), 0);
    v10 = nullptr;
    goto LABEL_15;
  }
  return (uint32_t *)v5;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PrivateKey  (binary VA: 0x19c7a50)
// Original: PEM_write_bio_PrivateKey
// ----------------------------------------------------------------------------
int PEM_write_bio_PrivateKey(uint32_t *a1, int a2, uint32_t *a3, uint8_t *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  int v7;
  char v9[92];

  v7 = *(uint32_t *)(a2 + 12);
  if ( v7 == 0 || *(uint32_t *)(v7 + 40) != 0 )
    return PEM_write_bio_PKCS8PrivateKey(a1, a2);
  BIO_snprintf(v9, 80, "%s PRIVATE KEY", *(uint32_t *)(v7 + 12));
  return PEM_ASN1_write_bio((int (*)(int, char **))i2d_PrivateKey, v9, a1, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_Parameters  (binary VA: 0x19c7b80)
// Original: PEM_read_bio_Parameters
// ----------------------------------------------------------------------------
uint32_t * PEM_read_bio_Parameters(uint32_t *a1, void **a2)
{
  uint32_t *v2;
  signed int v3;
  int (*v4)(uint32_t *, void **, int);
  typedef size_t _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
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

  v6 = 0;
  v7 = nullptr;
  v8 = nullptr;
  v2 = nullptr;
  if ( PEM_bytes_read_bio(&v8, v9, (char **)&v6, "PARAMETERS", a1, nullptr, nullptr) != 0 )
  {
    v7 = v8;
    v3 = pem_check_suffix((char *)v6, "PARAMETERS");
    if ( v3 > 0 )
    {
      v2 = EVP_PKEY_new();
      if ( v2 != nullptr )
      {
        if ( EVP_PKEY_set_type_str((char *)v2, (char *)v6, v3) != 0 )
        {
          v4 = *(int (**)(uint32_t *, void **, int))(v2[3] + 56);
          if ( v4 != nullptr && v4(v2, &v7, v9[0]) != 0 )
          {
            if ( a2 != nullptr )
            {
              if ( *a2 != nullptr )
                EVP_PKEY_free(*a2);
              *a2 = v2;
            }
            goto LABEL_13;
          }
        }
        EVP_PKEY_free(v2);
      }
    }
    v2 = nullptr;
    ERR_put_error(9, 140, 13, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_13:
    CRYPTO_free((void *)v6);
    CRYPTO_free(v8);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_Parameters  (binary VA: 0x19c7cf0)
// Original: PEM_write_bio_Parameters
// ----------------------------------------------------------------------------
bool PEM_write_bio_Parameters(uint32_t *a1, int a2)
{
  bool result;
  int v3;
  char v4[80];

  result = false;
  v3 = *(uint32_t *)(a2 + 12);
  if ( v3 != 0 && *(uint32_t *)(v3 + 60) != 0 )
  {
    BIO_snprintf(v4, 80, "%s PARAMETERS", *(uint32_t *)(v3 + 12));
    return PEM_ASN1_write_bio(
             *(int (**)(int, char **))(*(uint32_t *)(a2 + 12) + 60),
             v4,
             a1,
             a2,
             nullptr,
             nullptr,
             0,
             nullptr,
             nullptr);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_PrivateKey  (binary VA: 0x19c7dc0)
// Original: PEM_read_PrivateKey
// ----------------------------------------------------------------------------
uint32_t * PEM_read_PrivateKey(int a1, void **a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  void *v4;
  uint8_t *v5;
  uint32_t *bio_PrivateKey;

  v4 = BIO_s_file();
  v5 = BIO_new((int)(uintptr_t)(v4));
  if ( v5 != nullptr )
  {
    BIO_ctrl(v5, 106, 0, a1);
    bio_PrivateKey = PEM_read_bio_PrivateKey(v5, a2, a3, a4);
    BIO_free(v5);
  }
  else
  {
    bio_PrivateKey = nullptr;
    ERR_put_error(9, 124, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio_PrivateKey;
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PrivateKey  (binary VA: 0x19c7e90)
// Original: PEM_write_PrivateKey
// ----------------------------------------------------------------------------
int PEM_write_PrivateKey(int a1, int a2, uint32_t *a3, uint8_t *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  uint32_t *v7;
  uint32_t *v8;
  int v9;

  v7 = BIO_new_fp(a1, 0);
  v8 = v7;
  if ( v7 != nullptr )
  {
    v9 = PEM_write_bio_PrivateKey(v7, a2, a3, a4, a5, a6, a7);
    BIO_free(v8);
  }
  else
  {
    v9 = 0;
    ERR_put_error(9, 139, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_X509  (binary VA: 0x19c7f60)
// Original: PEM_read_bio_X509
// ----------------------------------------------------------------------------
int PEM_read_bio_X509(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  return PEM_ASN1_read_bio((int (*)(int, void **, int))d2i_X509, "CERTIFICATE", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_X509  (binary VA: 0x19c7fb0)
// Original: PEM_read_X509
// ----------------------------------------------------------------------------
int PEM_read_X509(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)((int (*)(int *, char **, int))d2i_X509), "CERTIFICATE", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_X509  (binary VA: 0x19c8000)
// Original: PEM_write_bio_X509
// ----------------------------------------------------------------------------
bool PEM_write_bio_X509(uint32_t *a1, int a2)
{
  return PEM_ASN1_write_bio(
           (int (*)(int, char **))i2d_X509,
           "CERTIFICATE",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_X509  (binary VA: 0x19c8070)
// Original: PEM_write_X509
// ----------------------------------------------------------------------------
bool PEM_write_X509(int a1, int a2)
{
  return PEM_ASN1_write(
           (int (*)(int, char **))i2d_X509,
           "CERTIFICATE",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_X509_AUX  (binary VA: 0x19c80e0)
// Original: PEM_read_bio_X509_AUX
// ----------------------------------------------------------------------------
int PEM_read_bio_X509_AUX(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  return PEM_ASN1_read_bio((int (*)(int, void **, int))d2i_X509_AUX, "TRUSTED CERTIFICATE", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_X509_AUX  (binary VA: 0x19c8130)
// Original: PEM_read_X509_AUX
// ----------------------------------------------------------------------------
int PEM_read_X509_AUX(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)(d2i_X509_AUX), "TRUSTED CERTIFICATE", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_X509_AUX  (binary VA: 0x19c8180)
// Original: PEM_write_bio_X509_AUX
// ----------------------------------------------------------------------------
bool PEM_write_bio_X509_AUX(uint32_t *a1, int a2)
{
  return PEM_ASN1_write_bio(
           (int (*)(int, char **))i2d_X509_AUX,
           "TRUSTED CERTIFICATE",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_X509_AUX  (binary VA: 0x19c81f0)
// Original: PEM_write_X509_AUX
// ----------------------------------------------------------------------------
bool PEM_write_X509_AUX(int a1, int a2)
{
  return PEM_ASN1_write(
           (int (*)(int, char **))i2d_X509_AUX,
           "TRUSTED CERTIFICATE",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_X509_CERT_PAIR  (binary VA: 0x19c8260)
// Original: PEM_read_bio_X509_CERT_PAIR
// ----------------------------------------------------------------------------
int PEM_read_bio_X509_CERT_PAIR(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  return PEM_ASN1_read_bio((int (*)(int, void **, int))d2i_X509_CERT_PAIR, "CERTIFICATE PAIR", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_X509_CERT_PAIR  (binary VA: 0x19c82b0)
// Original: PEM_read_X509_CERT_PAIR
// ----------------------------------------------------------------------------
int PEM_read_X509_CERT_PAIR(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)(d2i_X509_CERT_PAIR), "CERTIFICATE PAIR", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_X509_CERT_PAIR  (binary VA: 0x19c8300)
// Original: PEM_write_bio_X509_CERT_PAIR
// ----------------------------------------------------------------------------
bool PEM_write_bio_X509_CERT_PAIR(uint32_t *a1, int a2)
{
  return PEM_ASN1_write_bio(
           (int (*)(int, char **))i2d_X509_CERT_PAIR,
           "CERTIFICATE PAIR",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_X509_CERT_PAIR  (binary VA: 0x19c8370)
// Original: PEM_write_X509_CERT_PAIR
// ----------------------------------------------------------------------------
bool PEM_write_X509_CERT_PAIR(int a1, int a2)
{
  return PEM_ASN1_write(
           (int (*)(int, char **))i2d_X509_CERT_PAIR,
           "CERTIFICATE PAIR",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7  (binary VA: 0x19c8530)
// Original: d2i_PKCS7
// ----------------------------------------------------------------------------
int d2i_PKCS7(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7  (binary VA: 0x19c8570)
// Original: i2d_PKCS7
// ----------------------------------------------------------------------------
int i2d_PKCS7(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_new  (binary VA: 0x19c85b0)
// Original: PKCS7_new
// ----------------------------------------------------------------------------
int PKCS7_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_it));
}


