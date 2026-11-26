#include "Core/Utils/DecompTypes.h"
#include "openssl_crypto_ssl_part05.h"

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_get_nm_flags  (binary VA: 0x19f76a0)
// Original: ASN1_PCTX_get_nm_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_get_nm_flags(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_set_nm_flags  (binary VA: 0x19f76b0)
// Original: ASN1_PCTX_set_nm_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_set_nm_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_get_cert_flags  (binary VA: 0x19f76c0)
// Original: ASN1_PCTX_get_cert_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_get_cert_flags(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_set_cert_flags  (binary VA: 0x19f76d0)
// Original: ASN1_PCTX_set_cert_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_set_cert_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_get_oid_flags  (binary VA: 0x19f76e0)
// Original: ASN1_PCTX_get_oid_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_get_oid_flags(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_set_oid_flags  (binary VA: 0x19f76f0)
// Original: ASN1_PCTX_set_oid_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_set_oid_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_get_str_flags  (binary VA: 0x19f7700)
// Original: ASN1_PCTX_get_str_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_get_str_flags(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_set_str_flags  (binary VA: 0x19f7710)
// Original: ASN1_PCTX_set_str_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_set_str_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_print  (binary VA: 0x19f8230)
// Original: ASN1_item_print
// ----------------------------------------------------------------------------
bool ASN1_item_print(uint32_t *a1, int *a2, int a3, int a4, int *a5)
{
  int *v5;
  int v6;

  v5 = a5;
  if ( a5 == nullptr )
    v5 = (int *)&default_pctx;
  v6 = 0;
  if ( (*v5 & 0x100) == 0 )
    v6 = *(uint32_t *)(a4 + 24);
  return sub_19F7980(a1, &a2, a3, a4, 0, v6, 0, v5);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_REVOKED  (binary VA: 0x19f8bb0)
// Original: d2i_X509_REVOKED
// ----------------------------------------------------------------------------
int d2i_X509_REVOKED(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_REVOKED_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_REVOKED  (binary VA: 0x19f8bf0)
// Original: i2d_X509_REVOKED
// ----------------------------------------------------------------------------
int i2d_X509_REVOKED(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_REVOKED_it));
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_new  (binary VA: 0x19f8c30)
// Original: X509_REVOKED_new
// ----------------------------------------------------------------------------
int X509_REVOKED_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_REVOKED_it));
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_free  (binary VA: 0x19f8c60)
// Original: X509_REVOKED_free
// ----------------------------------------------------------------------------
int X509_REVOKED_free(char a1)
{
  return ASN1_item_free(a1, X509_REVOKED_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CRL_INFO  (binary VA: 0x19f8c90)
// Original: d2i_X509_CRL_INFO
// ----------------------------------------------------------------------------
int d2i_X509_CRL_INFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_CRL_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CRL_INFO  (binary VA: 0x19f8cd0)
// Original: i2d_X509_CRL_INFO
// ----------------------------------------------------------------------------
int i2d_X509_CRL_INFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_CRL_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_INFO_new  (binary VA: 0x19f8d10)
// Original: X509_CRL_INFO_new
// ----------------------------------------------------------------------------
int X509_CRL_INFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_CRL_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_INFO_free  (binary VA: 0x19f8d40)
// Original: X509_CRL_INFO_free
// ----------------------------------------------------------------------------
int X509_CRL_INFO_free(char a1)
{
  return ASN1_item_free(a1, X509_CRL_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CRL  (binary VA: 0x19f8d70)
// Original: d2i_X509_CRL
// ----------------------------------------------------------------------------
int d2i_X509_CRL(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_CRL_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CRL  (binary VA: 0x19f8db0)
// Original: i2d_X509_CRL
// ----------------------------------------------------------------------------
int i2d_X509_CRL(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_CRL_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_new  (binary VA: 0x19f8df0)
// Original: X509_CRL_new
// ----------------------------------------------------------------------------
int X509_CRL_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_CRL_it));
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_free  (binary VA: 0x19f8e20)
// Original: X509_CRL_free
// ----------------------------------------------------------------------------
int X509_CRL_free(char a1)
{
  return ASN1_item_free(a1, X509_CRL_it);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_dup  (binary VA: 0x19f8e50)
// Original: X509_CRL_dup
// ----------------------------------------------------------------------------
int X509_CRL_dup(int a1)
{
  return ASN1_item_dup((int)X509_CRL_it, a1);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_add0_revoked  (binary VA: 0x19f8e80)
// Original: X509_CRL_add0_revoked
// ----------------------------------------------------------------------------
int X509_CRL_add0_revoked(int *a1, int a2)
{
  int v2;
  int *v3;

  v2 = *a1;
  v3 = *(int **)(*a1 + 20);
  if ( (v3 != nullptr || (v3 = (int *)(sk_new((int)(uintptr_t)(sub_19F8B70))), *(uint32_t *)(v2 + 20) = (uint32_t)(uintptr_t)(v3), v3 != nullptr))
    && sk_push(v3, a2) != 0 )
  {
    *(uint32_t *)(v2 + 36) = 1;
    return 1;
  }
  else
  {
    ERR_put_error(13, 169, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_verify  (binary VA: 0x19f8f30)
// Original: X509_CRL_verify
// ----------------------------------------------------------------------------
int X509_CRL_verify(int a1, int a2)
{
  int (*v2)(int, int);
  int result;

  v2 = *(int (**)(int, int))(*(uint32_t *)(a1 + 68) + 16);
  result = 0;
  if ( v2 != nullptr )
    return v2(a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get0_by_serial  (binary VA: 0x19f8f60)
// Original: X509_CRL_get0_by_serial
// ----------------------------------------------------------------------------
int X509_CRL_get0_by_serial(int a1, int a2, int a3)
{
  int (*v3)(int, int, int, uint32_t);
  int result;

  v3 = *(int (**)(int, int, int, uint32_t))(*(uint32_t *)(a1 + 68) + 12);
  result = 0;
  if ( v3 != nullptr )
    return v3(a1, a2, a3, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get0_by_cert  (binary VA: 0x19f8fa0)
// Original: X509_CRL_get0_by_cert
// ----------------------------------------------------------------------------
int X509_CRL_get0_by_cert(int a1, int a2, int a3)
{
  int (*v3)(int, int, int, int);
  int result;
  int serialNumber;
  int issuer_name;

  v3 = *(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 68) + 12);
  result = 0;
  if ( v3 != nullptr )
  {
    issuer_name = X509_get_issuer_name(a3);
    serialNumber = X509_get_serialNumber(a3);
    return v3(a1, a2, serialNumber, issuer_name);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_set_default_method  (binary VA: 0x19f9020)
// Original: X509_CRL_set_default_method
// ----------------------------------------------------------------------------
void * X509_CRL_set_default_method(void *a1)
{
  void *result;

  result = a1;
  if ( a1 == nullptr )
    result = &unk_20CDF04;
  off_20CDF00 = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_METHOD_new  (binary VA: 0x19f9050)
// Original: X509_CRL_METHOD_new
// ----------------------------------------------------------------------------
uint32_t * X509_CRL_METHOD_new(int a1, int a2, int a3, int a4)
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    *result = 1;
    result[1] = a1;
    result[2] = a2;
    result[3] = a3;
    result[4] = a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_METHOD_free  (binary VA: 0x19f90b0)
// Original: X509_CRL_METHOD_free
// ----------------------------------------------------------------------------
uint8_t * X509_CRL_METHOD_free(uint8_t *a1)
{
  uint8_t *result;

  result = a1;
  if ( (*a1 & 1) != 0 )
    return (uint8_t *)CRYPTO_free(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_set_meth_data  (binary VA: 0x19f90e0)
// Original: X509_CRL_set_meth_data
// ----------------------------------------------------------------------------
int X509_CRL_set_meth_data(int a1, int a2)
{
  *(uint32_t *)(a1 + 72) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_meth_data  (binary VA: 0x19f90f0)
// Original: X509_CRL_get_meth_data
// ----------------------------------------------------------------------------
int X509_CRL_get_meth_data(int a1)
{
  return *(uint32_t *)(a1 + 72);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_PUBKEY  (binary VA: 0x19f9350)
// Original: d2i_X509_PUBKEY
// ----------------------------------------------------------------------------
int d2i_X509_PUBKEY(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_PUBKEY_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_PUBKEY  (binary VA: 0x19f9390)
// Original: i2d_X509_PUBKEY
// ----------------------------------------------------------------------------
int i2d_X509_PUBKEY(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_PUBKEY_it));
}

// ----------------------------------------------------------------------------
// Function: X509_PUBKEY_new  (binary VA: 0x19f93d0)
// Original: X509_PUBKEY_new
// ----------------------------------------------------------------------------
int X509_PUBKEY_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_PUBKEY_it));
}

// ----------------------------------------------------------------------------
// Function: X509_PUBKEY_free  (binary VA: 0x19f9400)
// Original: X509_PUBKEY_free
// ----------------------------------------------------------------------------
int X509_PUBKEY_free(char a1)
{
  return ASN1_item_free(a1, X509_PUBKEY_it);
}

// ----------------------------------------------------------------------------
// Function: X509_PUBKEY_set  (binary VA: 0x19f9430)
// Original: X509_PUBKEY_set
// ----------------------------------------------------------------------------
int X509_PUBKEY_set(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int (*v5)(int, int);

  v2 = 0;
  if ( a1 == nullptr )
    return v2;
  v3 = X509_PUBKEY_new();
  if ( v3 == 0 )
    return v2;
  v4 = *(uint32_t *)(a2 + 12);
  if ( v4 == 0 )
  {
    ERR_put_error(11, 120, 111, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_11;
  }
  v5 = *(int (**)(int, int))(v4 + 24);
  if ( v5 == nullptr )
  {
    ERR_put_error(11, 120, 124, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_11;
  }
  if ( v5(v3, a2) == 0 )
  {
    ERR_put_error(11, 120, 126, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_11:
    v2 = 0;
    X509_PUBKEY_free(v3);
    return v2;
  }
  if ( *a1 != 0 )
    X509_PUBKEY_free(*a1);
  *a1 = v3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_PUBKEY_get  (binary VA: 0x19f9560)
// Original: X509_PUBKEY_get
// ----------------------------------------------------------------------------
char * X509_PUBKEY_get(int a1)
{
  char *v1;
  int v2;
  size_t v4;
  int (*v5)(char *, int);
  char *v6;

  v1 = nullptr;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 8);
    if ( v2 != 0 )
    {
      CRYPTO_add_lock((uint32_t *)(v2 + 8), 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
      return *(char **)(a1 + 8);
    }
    else if ( *(uint32_t *)(a1 + 4) != 0 )
    {
      v1 = (char *)EVP_PKEY_new();
      if ( v1 == nullptr )
      {
        ERR_put_error(11, 119, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        return v1;
      }
      v4 = OBJ_obj2nid(**(uint32_t **)a1);
      if ( EVP_PKEY_set_type(v1, v4) != 0 )
      {
        v5 = *(int (**)(char *, int))(*((uint32_t *)v1 + 3) + 20);
        if ( v5 != nullptr )
        {
          if ( v5(v1, a1) != 0 )
          {
            *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v1);
            CRYPTO_add_lock((uint32_t *)v1 + 2, 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
            return v1;
          }
          ERR_put_error(11, 119, 125, (int)(uintptr_t)(&unk_1B15112), 0);
        }
        else
        {
          ERR_put_error(11, 119, 124, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
      else
      {
        ERR_put_error(11, 119, 111, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      v6 = v1;
      v1 = nullptr;
      EVP_PKEY_free(v6);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: d2i_PUBKEY  (binary VA: 0x19f9740)
// Original: d2i_PUBKEY
// ----------------------------------------------------------------------------
char * d2i_PUBKEY(void **a1, char **a2, int a3)
{
  int v3;
  char *v4;
  char v5; // si

  v3 = d2i_X509_PUBKEY(nullptr, a2, a3);
  v4 = nullptr;
  v5 = v3;
  if ( v3 != 0 )
  {
    v4 = X509_PUBKEY_get(v3);
    X509_PUBKEY_free(v5);
    if ( v4 != nullptr && a1 != nullptr )
    {
      EVP_PKEY_free(*a1);
      *a1 = v4;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: i2d_PUBKEY  (binary VA: 0x19f97d0)
// Original: i2d_PUBKEY
// ----------------------------------------------------------------------------
int i2d_PUBKEY(int a1, void **a2)
{
  int v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v4 = 0;
  if ( a1 == 0 || X509_PUBKEY_set(&v4, a1) == 0 )
    return 0;
  v3 = i2d_X509_PUBKEY(v4, a2);
  X509_PUBKEY_free(v4);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: d2i_RSA_PUBKEY  (binary VA: 0x19f9860)
// Original: d2i_RSA_PUBKEY
// ----------------------------------------------------------------------------
int d2i_RSA_PUBKEY(void **a1, char **a2, int a3)
{
  char *v3;
  int result;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v6 = *a2;
  v3 = d2i_PUBKEY(nullptr, &v6, a3);
  result = 0;
  if ( v3 != nullptr )
  {
    v5 = EVP_PKEY_get1_RSA(v3);
    EVP_PKEY_free(v3);
    result = v5;
    if ( v5 != 0 )
    {
      *a2 = v6;
      if ( a1 != nullptr )
      {
        RSA_free(*a1);
        *a1 = (void *)v5;
        return v5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: i2d_RSA_PUBKEY  (binary VA: 0x19f9910)
// Original: i2d_RSA_PUBKEY
// ----------------------------------------------------------------------------
int i2d_RSA_PUBKEY(int a1, void **a2)
{
  int v2;
  char *v3;
  char *v4;

  v2 = 0;
  if ( a1 != 0 )
  {
    v3 = (char *)EVP_PKEY_new();
    v4 = v3;
    if ( v3 != nullptr )
    {
      EVP_PKEY_set1_RSA(v3, a1);
      v2 = i2d_PUBKEY((int)(uintptr_t)(v4), a2);
      EVP_PKEY_free(v4);
    }
    else
    {
      ERR_put_error(13, 165, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: d2i_DSA_PUBKEY  (binary VA: 0x19f99c0)
// Original: d2i_DSA_PUBKEY
// ----------------------------------------------------------------------------
int d2i_DSA_PUBKEY(void **a1, char **a2, int a3)
{
  char *v3;
  int result;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v6 = *a2;
  v3 = d2i_PUBKEY(nullptr, &v6, a3);
  result = 0;
  if ( v3 != nullptr )
  {
    v5 = EVP_PKEY_get1_DSA(v3);
    EVP_PKEY_free(v3);
    result = v5;
    if ( v5 != 0 )
    {
      *a2 = v6;
      if ( a1 != nullptr )
      {
        DSA_free(*a1);
        *a1 = (void *)v5;
        return v5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: i2d_DSA_PUBKEY  (binary VA: 0x19f9a70)
// Original: i2d_DSA_PUBKEY
// ----------------------------------------------------------------------------
int i2d_DSA_PUBKEY(int a1, void **a2)
{
  int v2;
  char *v3;
  char *v4;

  v2 = 0;
  if ( a1 != 0 )
  {
    v3 = (char *)EVP_PKEY_new();
    v4 = v3;
    if ( v3 != nullptr )
    {
      EVP_PKEY_set1_DSA(v3, a1);
      v2 = i2d_PUBKEY((int)(uintptr_t)(v4), a2);
      EVP_PKEY_free(v4);
    }
    else
    {
      ERR_put_error(13, 161, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: d2i_EC_PUBKEY  (binary VA: 0x19f9b20)
// Original: d2i_EC_PUBKEY
// ----------------------------------------------------------------------------
int d2i_EC_PUBKEY(char **a1, char **a2, int a3)
{
  char *v3;
  int result;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v6 = *a2;
  v3 = d2i_PUBKEY(nullptr, &v6, a3);
  result = 0;
  if ( v3 != nullptr )
  {
    v5 = EVP_PKEY_get1_EC_KEY(v3);
    EVP_PKEY_free(v3);
    result = v5;
    if ( v5 != 0 )
    {
      *a2 = v6;
      if ( a1 != nullptr )
      {
        EC_KEY_free(*a1);
        *a1 = (char *)v5;
        return v5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: i2d_EC_PUBKEY  (binary VA: 0x19f9bd0)
// Original: i2d_EC_PUBKEY
// ----------------------------------------------------------------------------
int i2d_EC_PUBKEY(int a1, void **a2)
{
  int v2;
  char *v3;
  char *v4;

  v2 = 0;
  if ( a1 != 0 )
  {
    v3 = (char *)EVP_PKEY_new();
    v4 = v3;
    if ( v3 != nullptr )
    {
      EVP_PKEY_set1_EC_KEY(v3, a1);
      v2 = i2d_PUBKEY((int)(uintptr_t)(v4), a2);
      EVP_PKEY_free(v4);
    }
    else
    {
      ERR_put_error(13, 181, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_PUBKEY_set0_param  (binary VA: 0x19f9c80)
// Original: X509_PUBKEY_set0_param
// ----------------------------------------------------------------------------
int X509_PUBKEY_set0_param(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;

  v6 = X509_ALGOR_set0(*a1, a2, a3, a4);
  v7 = 0;
  if ( v6 != 0 )
  {
    LOBYTE(v7) = 1;
    if ( a5 != 0 )
    {
      v8 = a1[1];
      if ( *(uint32_t *)(v8 + 8) != 0 )
      {
        CRYPTO_free(*(void **)(v8 + 8));
        v8 = a1[1];
      }
      *(uint32_t *)(v8 + 8) = a5;
      *(uint32_t *)a1[1] = a6;
      v7 = 1;
      *(uint32_t *)(a1[1] + 12) &= 0xFFFFFFF0;
      *(uint32_t *)(a1[1] + 12) |= 8u;
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: X509_PUBKEY_get0_param  (binary VA: 0x19f9d20)
// Original: X509_PUBKEY_get0_param
// ----------------------------------------------------------------------------
int X509_PUBKEY_get0_param(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5)
{
  if ( a1 != nullptr )
    *a1 = **(uint32_t **)a5;
  if ( a2 != nullptr )
  {
    *a2 = *(uint32_t *)(*(uint32_t *)(a5 + 4) + 8);
    *a3 = **(uint32_t **)(a5 + 4);
  }
  if ( a4 != nullptr )
    *a4 = *(uint32_t *)a5;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_REQ_INFO  (binary VA: 0x19f9dd0)
// Original: d2i_X509_REQ_INFO
// ----------------------------------------------------------------------------
int d2i_X509_REQ_INFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_REQ_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_REQ_INFO  (binary VA: 0x19f9e10)
// Original: i2d_X509_REQ_INFO
// ----------------------------------------------------------------------------
int i2d_X509_REQ_INFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_REQ_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_INFO_new  (binary VA: 0x19f9e50)
// Original: X509_REQ_INFO_new
// ----------------------------------------------------------------------------
int X509_REQ_INFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_REQ_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_INFO_free  (binary VA: 0x19f9e80)
// Original: X509_REQ_INFO_free
// ----------------------------------------------------------------------------
int X509_REQ_INFO_free(char a1)
{
  return ASN1_item_free(a1, X509_REQ_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_REQ  (binary VA: 0x19f9eb0)
// Original: d2i_X509_REQ
// ----------------------------------------------------------------------------
int d2i_X509_REQ(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_REQ_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_REQ  (binary VA: 0x19f9ef0)
// Original: i2d_X509_REQ
// ----------------------------------------------------------------------------
int i2d_X509_REQ(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_REQ_it));
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_new  (binary VA: 0x19f9f30)
// Original: X509_REQ_new
// ----------------------------------------------------------------------------
int X509_REQ_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_REQ_it));
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_free  (binary VA: 0x19f9f60)
// Original: X509_REQ_free
// ----------------------------------------------------------------------------
int X509_REQ_free(char a1)
{
  return ASN1_item_free(a1, X509_REQ_it);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_dup  (binary VA: 0x19f9f90)
// Original: X509_REQ_dup
// ----------------------------------------------------------------------------
int X509_REQ_dup(int a1)
{
  return ASN1_item_dup((int)X509_REQ_it, a1);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_SIG  (binary VA: 0x19f9fc0)
// Original: d2i_X509_SIG
// ----------------------------------------------------------------------------
int d2i_X509_SIG(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_SIG  (binary VA: 0x19fa000)
// Original: i2d_X509_SIG
// ----------------------------------------------------------------------------
int i2d_X509_SIG(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: X509_SIG_new  (binary VA: 0x19fa040)
// Original: X509_SIG_new
// ----------------------------------------------------------------------------
int X509_SIG_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: X509_SIG_free  (binary VA: 0x19fa070)
// Original: X509_SIG_free
// ----------------------------------------------------------------------------
int X509_SIG_free(char a1)
{
  return ASN1_item_free(a1, X509_SIG_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_NETSCAPE_SPKAC  (binary VA: 0x19fa0a0)
// Original: d2i_NETSCAPE_SPKAC
// ----------------------------------------------------------------------------
int d2i_NETSCAPE_SPKAC(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&NETSCAPE_SPKAC_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_NETSCAPE_SPKAC  (binary VA: 0x19fa0e0)
// Original: i2d_NETSCAPE_SPKAC
// ----------------------------------------------------------------------------
int i2d_NETSCAPE_SPKAC(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&NETSCAPE_SPKAC_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_NETSCAPE_SPKI  (binary VA: 0x19fa180)
// Original: d2i_NETSCAPE_SPKI
// ----------------------------------------------------------------------------
int d2i_NETSCAPE_SPKI(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&NETSCAPE_SPKI_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_NETSCAPE_SPKI  (binary VA: 0x19fa1c0)
// Original: i2d_NETSCAPE_SPKI
// ----------------------------------------------------------------------------
int i2d_NETSCAPE_SPKI(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&NETSCAPE_SPKI_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_VAL  (binary VA: 0x19fa260)
// Original: d2i_X509_VAL
// ----------------------------------------------------------------------------
int d2i_X509_VAL(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&X509_VAL_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_VAL  (binary VA: 0x19fa2a0)
// Original: i2d_X509_VAL
// ----------------------------------------------------------------------------
int i2d_X509_VAL(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&X509_VAL_it));
}

// ----------------------------------------------------------------------------
// Function: X509_VAL_new  (binary VA: 0x19fa2e0)
// Original: X509_VAL_new
// ----------------------------------------------------------------------------
int X509_VAL_new()
{
  return ASN1_item_new((int)(uintptr_t)(&X509_VAL_it));
}

// ----------------------------------------------------------------------------
// Function: X509_VAL_free  (binary VA: 0x19fa310)
// Original: X509_VAL_free
// ----------------------------------------------------------------------------
int X509_VAL_free(char a1)
{
  return ASN1_item_free(a1, X509_VAL_it);
}

// ----------------------------------------------------------------------------
// Function: BIO_dump_indent_cb  (binary VA: 0x19fbad0)
// Original: BIO_dump_indent_cb
// ----------------------------------------------------------------------------
int BIO_dump_indent_cb(int (*a1)(char *, size_t, int), int a2, int a3, int a4, int a5)
{
  signed int n;
  char v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  int i;
  int v17;
  int v18;
  int v19;
  int v20;
  size_t v21;
  size_t v22;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31[20];
  typedef char _g4_t_s[129];
  typedef char _g4_t_v33[317];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v25)) > _g4_s1 ? (44u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v26)) > _g4_s2 ? (60u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v27)) > _g4_s3 ? (64u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v28)) > _g4_s4 ? (68u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v29)) > _g4_s5 ? (72u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v30)) > _g4_s6 ? (92u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (106u + sizeof(_g4_t_v31)) > _g4_s7 ? (106u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (126u + sizeof(_g4_t_s)) > _g4_s8 ? (126u + sizeof(_g4_t_s)) : _g4_s8,
    _g4_s10 = (255u + sizeof(_g4_t_v33)) > _g4_s9 ? (255u + sizeof(_g4_t_v33)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 106u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 126u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 255u);

  n = a5;
  v30 = 0;
  if ( a4 > 0 )
  {
    v6 = *(uint8_t *)(a3 + a4 - 1);
    if ( v6 == 0 || v6 == 32 )
    {
      v7 = 0;
      v8 = a4;
      do
      {
        ++v7;
        if ( --v8 == 0 )
          break;
        v9 = *(uint8_t *)(a3 + v8 - 1);
      }
      while ( v9 == 0 || v9 == 32 );
      v30 = v7;
      a4 = v8;
    }
  }
  v25 = 16;
  if ( a5 < 0 )
  {
    n = 0;
  }
  else if ( a5 != 0 )
  {
    if ( a5 > 128 )
      n = 128;
    memset(s, 32, n);
    v10 = 6;
    if ( n <= 6 )
      v10 = n;
    v11 = n - v10;
    v12 = n - v10 + 3 < 0;
    v13 = n - v10 + 3;
    v14 = v11 + 6;
    if ( v12 )
      v13 = v14;
    v25 = 16 - (v13 >> 2);
  }
  s[n] = 0;
  v28 = 0;
  v15 = a4 / v25;
  if ( a4 / v25 * v25 < a4 )
    ++v15;
  v29 = v15;
  if ( v15 > 0 )
  {
    v26 = 0;
    v27 = 0;
    do
    {
      v33[0] = 0;
      BUF_strlcpy(v33, s, 0x121u);
      BIO_snprintf(v31, 20, "%04x - ", v26);
      BUF_strlcat(v33, v31, 0x121u);
      if ( v25 <= 0 )
      {
        BUF_strlcat(v33, "  ", 0x121u);
      }
      else
      {
        for ( i = 0; i != v25; ++i )
        {
          while ( v26 + i >= a4 )
          {
            ++i;
            BUF_strlcat(v33, "   ", 0x121u);
            if ( i == v25 )
              goto LABEL_27;
          }
          v17 = 45;
          if ( i != 7 )
            v17 = 32;
          v24 = *(uint8_t *)(a3 + v26 + i);
          BIO_snprintf(v31, 20, "%02x%c", v24, v17);
          BUF_strlcat(v33, v31, 0x121u);
        }
LABEL_27:
        BUF_strlcat(v33, "  ", 0x121u);
        if ( v26 < a4 )
        {
          v18 = v26;
          v19 = 0;
          do
          {
            v20 = *(uint8_t *)(a3 + v18);
            if ( (uint8_t)(v20 - 32) > 0x5Eu )
              v20 = 46;
            ++v19;
            BIO_snprintf(v31, 20, "%c", v20);
            BUF_strlcat(v33, v31, 0x121u);
            if ( v19 == v25 )
              break;
            ++v18;
          }
          while ( v18 != a4 );
        }
      }
      BUF_strlcat(v33, (char *)&a0[1], 0x121u);
      v21 = strlen(v33);
      v28 += a1(v33, v21, a2);
      v26 += v25;
      ++v27;
    }
    while ( v27 != v29 );
  }
  if ( v30 != 0 )
  {
    BIO_snprintf(v33, 289, "%s%04x - <SPACES/NULS>\n", s, v30 + a4);
    v22 = strlen(v33);
    v28 += a1(v33, v22, a2);
  }
  return v28;
}

// ----------------------------------------------------------------------------
// Function: BIO_dump_cb  (binary VA: 0x19fbf30)
// Original: BIO_dump_cb
// ----------------------------------------------------------------------------
int BIO_dump_cb(int (*a1)(char *, size_t, int), int a2, int a3, int a4)
{
  return BIO_dump_indent_cb(a1, a2, a3, a4, 0);
}

// ----------------------------------------------------------------------------
// Function: BIO_dump_fp  (binary VA: 0x19fbf80)
// Original: BIO_dump_fp
// ----------------------------------------------------------------------------
int BIO_dump_fp(int a1, int a2, int a3)
{
  return BIO_dump_cb((int (*)(char *, size_t, int))sub_19FBA90, a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: BIO_dump_indent_fp  (binary VA: 0x19fbfc0)
// Original: BIO_dump_indent_fp
// ----------------------------------------------------------------------------
int BIO_dump_indent_fp(int a1, int a2, int a3, int a4)
{
  return BIO_dump_indent_cb((int (*)(char *, size_t, int))sub_19FBA90, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: BIO_dump  (binary VA: 0x19fc010)
// Original: BIO_dump
// ----------------------------------------------------------------------------
int BIO_dump(int a1, int a2, int a3)
{
  return BIO_dump_cb((int (*)(char *, size_t, int))sub_19FBA50, a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: BIO_dump_indent  (binary VA: 0x19fc050)
// Original: BIO_dump_indent
// ----------------------------------------------------------------------------
int BIO_dump_indent(int a1, int a2, int a3, int a4)
{
  return BIO_dump_indent_cb((int (*)(char *, size_t, int))sub_19FBA50, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ERR_load_BIO_strings  (binary VA: 0x19fc0a0)
// Original: ERR_load_BIO_strings
// ----------------------------------------------------------------------------
int ERR_load_BIO_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CDF40);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CDF40);
    return ERR_load_strings(0, &dword_20CE060);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BIO_s_null  (binary VA: 0x19fc1c0)
// Original: BIO_s_null
// ----------------------------------------------------------------------------
void * BIO_s_null()
{
  return &unk_20CE160;
}

// ----------------------------------------------------------------------------
// Function: BN_uadd  (binary VA: 0x19fc1e0)
// Original: BN_uadd
// ----------------------------------------------------------------------------
int BN_uadd(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int *v10;
  int *v11;
  int v12;
  int i;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;

  v3 = a3;
  v4 = a2[1];
  v5 = a3[1];
  v6 = (uint32_t *)a1;
  if ( v4 < v5 )
  {
    v4 = a3[1];
    v5 = a2[1];
    v7 = a2;
    a2 = a3;
    v3 = v7;
  }
  if ( *(uint32_t *)(a1 + 8) <= v4 )
  {
    v18 = v3;
    v15 = bn_expand2(a1, v4 + 1);
    v3 = v18;
    v6 = (uint32_t *)a1;
    if ( v15 == 0 )
      return 0;
  }
  v6[1] = v4;
  v8 = v4 - v5;
  v16 = v5;
  v9 = 4 * v5;
  v17 = v6;
  v10 = (int *)(v9 + *v6);
  v11 = (int *)(*a2 + v9);
  if ( bn_add_words(*v6, *a2, *v3, v16) != 0 )
  {
    while ( v8 != 0 )
    {
      --v8;
      v12 = *v11++ + 1;
      *v10++ = v12;
      if ( v12 != 0 )
        goto LABEL_7;
    }
    *v10 = 1;
    ++v17[1];
  }
  else
  {
LABEL_7:
    if ( v10 != v11 && v8 != 0 )
    {
      for ( i = 0; i != v8; ++i )
        v10[i] = v11[i];
    }
  }
  v17[3] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BN_usub  (binary VA: 0x19fc310)
// Original: BN_usub
// ----------------------------------------------------------------------------
int BN_usub(int **a1, int a2, int *a3)
{
  int *v3;
  int *v4;
  int *v5;
  int v6;
  bool v7;
  unsigned int v8;
  unsigned int v9;
  bool v10;
  int result;
  int v12;
  int v13;
  int v14;
  int v15;
  int i;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v19 = *(uint32_t *)(a2 + 4);
  v20 = a3[1];
  v21 = v19 - v20;
  if ( v19 - v20 < 0 )
  {
    ERR_put_error(3, 115, 100, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( v19 > (int)(uintptr_t)(a1[2]) && bn_expand2((int)(uintptr_t)(a1), v19) == 0 )
    return 0;
  v3 = *(int **)a2;
  v18 = *a3;
  v4 = *a1;
  if ( v20 != 0 )
  {
    v17 = v20;
    v5 = *(int **)a2;
    v6 = 0;
    v7 = false;
    do
    {
      v8 = v5[v6];
      v9 = *(uint32_t *)(v18 + v6 * 4);
      if ( v7 )
        v7 = v8-- <= v9;
      else
        v7 = v8 < v9;
      v4[v6++] = v8 - v9;
      --v17;
    }
    while ( v17 != 0 );
    v10 = v7;
    v3 = &v5[v20];
    v4 += v20;
    if ( v10 )
    {
      result = 0;
      if ( v21 == 0 )
        return result;
      v12 = v19 - v20;
      do
      {
        v13 = *v3;
        --v12;
        ++v3;
        *v4++ = v13 - 1;
      }
      while ( v13 == 0 && v12 != 0 );
      v21 = v12;
    }
  }
  if ( v4 != v3 && v21 != 0 )
  {
    *v4 = *v3;
    if ( v21 != 1 )
    {
      v4[1] = v3[1];
      if ( v21 != 2 )
      {
        v4[2] = v3[2];
        if ( v21 != 3 )
        {
          v14 = v21 - 4;
          do
          {
            v15 = v3[3];
            v3 += 4;
            v4[3] = v15;
            v4 += 4;
            if ( v14 == 0 )
              break;
            *v4 = *v3;
            if ( v14 == 1 )
              break;
            v4[1] = v3[1];
            if ( v14 == 2 )
              break;
            v14 -= 4;
            v4[2] = v3[2];
          }
          while ( v14 != -1 );
        }
      }
    }
  }
  result = 1;
  a1[1] = (int *)v19;
  a1[3] = nullptr;
  if ( v19 > 0 )
  {
    for ( i = v19; i != 0; --i )
    {
      if ( (*a1)[v19 - 1 - v19 + i] != 0 )
        break;
    }
    a1[1] = (int *)i;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_add  (binary VA: 0x19fc530)
// Original: BN_add
// ----------------------------------------------------------------------------
int BN_add(int a1, int *a2, int *a3)
{
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;

  v3 = a2;
  v4 = a3;
  v5 = a2[3];
  if ( a3[3] == v5 )
  {
    v10 = a3[3];
    v7 = BN_uadd(a1, a2, a3);
    *(uint32_t *)(a1 + 12) = v10;
    return v7;
  }
  if ( v5 != 0 )
  {
    v3 = a3;
    v4 = a2;
    if ( BN_ucmp(a3, a2) >= 0 )
    {
LABEL_4:
      v6 = BN_usub((int **)a1, (int)(uintptr_t)(v3), v4);
      v7 = 0;
      if ( v6 != 0 )
      {
        *(uint32_t *)(a1 + 12) = 0;
        LOBYTE(v7) = 1;
      }
      return v7;
    }
  }
  else if ( BN_ucmp(a2, a3) >= 0 )
  {
    goto LABEL_4;
  }
  v9 = BN_usub((int **)a1, (int)(uintptr_t)(v4), v3);
  v7 = 0;
  if ( v9 != 0 )
  {
    *(uint32_t *)(a1 + 12) = 1;
    LOBYTE(v7) = 1;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: BN_sub  (binary VA: 0x19fc620)
// Original: BN_sub
// ----------------------------------------------------------------------------
char BN_sub(int a1, int *a2, int *a3)
{
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  char result;
  int v9;
  int v10;
  int v11;

  v3 = a2;
  v4 = a3;
  if ( a2[3] != 0 )
  {
    v5 = 1;
    if ( a3[3] != 0 )
    {
      v3 = a3;
      v4 = a2;
LABEL_4:
      v6 = v4[1];
      if ( v3[1] >= v6 )
        v6 = v3[1];
      if ( v6 > *(uint32_t *)(a1 + 8) && bn_expand2(a1, v6) == 0 )
        return 0;
      if ( BN_ucmp(v3, v4) < 0 )
      {
        v10 = BN_usub((int **)a1, (int)(uintptr_t)(v4), v3);
        result = 0;
        if ( v10 != 0 )
        {
          *(uint32_t *)(a1 + 12) = 1;
          return 1;
        }
      }
      else
      {
        v7 = BN_usub((int **)a1, (int)(uintptr_t)(v3), v4);
        result = 0;
        if ( v7 != 0 )
        {
          *(uint32_t *)(a1 + 12) = 0;
          return 1;
        }
      }
      return result;
    }
  }
  else
  {
    if ( a3[3] == 0 )
      goto LABEL_4;
    v5 = 0;
  }
  v11 = v5;
  v9 = BN_uadd(a1, a2, a3);
  result = 0;
  if ( v9 != 0 )
  {
    *(uint32_t *)(a1 + 12) = v11;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_free  (binary VA: 0x19fe550)
// Original: BN_BLINDING_free
// ----------------------------------------------------------------------------
int BN_BLINDING_free(void ***a1)
{
  int result;

  if ( a1 != nullptr )
  {
    if ( *a1 != nullptr )
      BN_free(*a1);
    if ( a1[1] != nullptr )
      BN_free(a1[1]);
    if ( a1[2] != nullptr )
      BN_free(a1[2]);
    if ( a1[3] != nullptr )
      BN_free(a1[3]);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_new  (binary VA: 0x19fe5c0)
// Original: BN_BLINDING_new
// ----------------------------------------------------------------------------
void *** BN_BLINDING_new(uint32_t *a1, uint32_t *a2, int a3)
{
  uint8_t *v3;
  void ***v4;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;
  void **v8;
  void **v9;
  void **v10;
  int v11;
  void ***v13;

  v3 = CRYPTO_malloc(44, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = (void ***)v3;
  if ( v3 == nullptr )
  {
    ERR_put_error(3, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v4;
  }
  v5 = (uint16_t *)(v3);
  v6 = 44;
  if ( ((uint8_t)(uintptr_t)v3 & 1) != 0 )
  {
    *v3 = 0;
    v5 = (uint16_t *)(v3 + 1);
    LOBYTE(v6) = 43;
  }
  if ( ((uint8_t)(uintptr_t)v5 & 2) != 0 )
  {
    *v5 = 0;
    v6 -= 2;
    ++v5;
  }
  memset(v5, 0, 4 * (v6 >> 2));
  v7 = &v5[2 * (v6 >> 2)];
  if ( (v6 & 2) == 0 )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
  *v7++ = 0;
  if ( (v6 & 1) != 0 )
LABEL_17:
    *(uint8_t *)v7 = 0;
LABEL_8:
  if ( (a1 == nullptr || (v8 = BN_dup(a1), *v4 = v8, v8 != nullptr))
    && (a2 == nullptr || (v9 = BN_dup(a2), v4[1] = v9, v9 != nullptr))
    && (v10 = BN_dup((uint32_t *)a3), v4[3] = v10, v10 != nullptr) )
  {
    if ( (*(uint8_t *)(a3 + 16) & 4) != 0 )
      v10[4] = (void *)((unsigned int)(uintptr_t)(v10[4]) | 4);
    v4[7] = (void **)&dword_20;
    CRYPTO_THREADID_current(v11, a3, v4 + 5);
  }
  else
  {
    v13 = v4;
    v4 = nullptr;
    BN_BLINDING_free(v13);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_convert_ex  (binary VA: 0x19fe740)
// Original: BN_BLINDING_convert_ex
// ----------------------------------------------------------------------------
bool BN_BLINDING_convert_ex(int a1, uint32_t *a2, int *a3, int a4)
{
  int v4;
  bool v5;
  bool v6;

  v4 = *a3;
  if ( *a3 != 0 && a3[1] != 0 )
  {
    v5 = true;
    if ( a2 != nullptr )
    {
      v6 = BN_copy(a2, (uint32_t *)a3[1]) == nullptr;
      v4 = *a3;
      v5 = !v6;
    }
    if ( BN_mod_mul(a1, a1, v4, a3[3], a4) == 0 )
      return false;
  }
  else
  {
    v5 = false;
    ERR_put_error(3, 100, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_convert  (binary VA: 0x19fe820)
// Original: BN_BLINDING_convert
// ----------------------------------------------------------------------------
bool BN_BLINDING_convert(int a1, int *a2, int a3)
{
  return BN_BLINDING_convert_ex(a1, nullptr, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_get_thread_id  (binary VA: 0x19fe860)
// Original: BN_BLINDING_get_thread_id
// ----------------------------------------------------------------------------
int BN_BLINDING_get_thread_id(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_set_thread_id  (binary VA: 0x19fe870)
// Original: BN_BLINDING_set_thread_id
// ----------------------------------------------------------------------------
int BN_BLINDING_set_thread_id(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_thread_id  (binary VA: 0x19fe880)
// Original: BN_BLINDING_thread_id
// ----------------------------------------------------------------------------
int BN_BLINDING_thread_id(int a1)
{
  return a1 + 20;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_get_flags  (binary VA: 0x19fe890)
// Original: BN_BLINDING_get_flags
// ----------------------------------------------------------------------------
int BN_BLINDING_get_flags(int a1)
{
  return *(uint32_t *)(a1 + 32);
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_set_flags  (binary VA: 0x19fe8a0)
// Original: BN_BLINDING_set_flags
// ----------------------------------------------------------------------------
int BN_BLINDING_set_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 32) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_create_param  (binary VA: 0x19fe8b0)
// Original: BN_BLINDING_create_param
// ----------------------------------------------------------------------------
void *** BN_BLINDING_create_param(void *a1, uint32_t *a2, int a3, int a4, void **a5, void **a6)
{
  void *v6;
  uint32_t *v7;
  void ***v8;
  void **v9;
  int v10;
  void **v12;
  void **v13;
  void **v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;

  v6 = a1;
  v7 = a2;
  v8 = (void ***)a1;
  if ( a1 == nullptr )
  {
    v8 = BN_BLINDING_new(nullptr, nullptr, a3);
    v7 = a2;
    if ( v8 == nullptr )
      return v8;
  }
  if ( *v8 != nullptr || (v16 = v7, v13 = (void **)BN_new(), *v8 = v13, v7 = v16, v13 != nullptr) )
  {
    if ( v8[1] != nullptr || (v17 = v7, v14 = (void **)BN_new(), v8[1] = v14, v7 = v17, v14 != nullptr) )
    {
      v9 = v8[2];
      if ( v7 != nullptr )
      {
        if ( v9 != nullptr )
        {
          v15 = v7;
          BN_free(v9);
          v7 = v15;
        }
        v9 = BN_dup(v7);
        v8[2] = v9;
      }
      if ( v9 != nullptr )
      {
        if ( a5 != nullptr )
          v8[10] = a5;
        if ( a6 != nullptr )
          v8[9] = a6;
        v10 = 33;
        while ( 1 )
        {
          if ( BN_rand_range(*v8, v8[3]) == 0 )
          {
LABEL_22:
            if ( a1 != nullptr )
              return v8;
            goto LABEL_23;
          }
          if ( BN_mod_inverse(v8[1], *v8, v8[3], a4) != 0 )
            break;
          if ( (ERR_peek_last_error() & 0xFFF) != 0x6C )
            goto LABEL_22;
          if ( --v10 == 0 )
          {
            v6 = a1;
            ERR_put_error(3, 128, 113, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_20;
          }
          ERR_clear_error();
        }
        v12 = v8[10];
        v6 = a1;
        if ( v12 != nullptr && v8[9] != nullptr )
        {
          if ( ((int (*)(void **, void **, void **, void **, int, void **))v12)(
                 *v8,
                 *v8,
                 v8[2],
                 v8[3],
                 a4,
                 v8[9]) == 0 )
            goto LABEL_20;
        }
        else if ( BN_mod_exp(*v8, *v8, v8[2], v8[3], a4) == 0 )
        {
          goto LABEL_20;
        }
        return v8;
      }
    }
  }
LABEL_20:
  if ( v6 != nullptr )
    return v8;
LABEL_23:
  BN_BLINDING_free(v8);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_update  (binary VA: 0x19feae0)
// Original: BN_BLINDING_update
// ----------------------------------------------------------------------------
int BN_BLINDING_update(int *a1, int a2)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  int v6;

  v2 = *a1;
  if ( *a1 == 0 || a1[1] == 0 )
  {
    v6 = 0;
    ERR_put_error(3, 103, 107, (int)(uintptr_t)(&unk_1B15112), 0);
    v3 = a1[7];
    goto LABEL_6;
  }
  v3 = a1[7] - 1;
  v4 = a1[7] == 1;
  a1[7] = v3;
  if ( v4 )
  {
    v5 = a1[8];
    if ( a1[2] != 0 && (v5 & 2) == 0 )
    {
      v4 = BN_BLINDING_create_param(a1, nullptr, 0, a2, nullptr, nullptr) == nullptr;
      v3 = a1[7];
      if ( !v4 )
      {
        v6 = 1;
        goto LABEL_6;
      }
LABEL_17:
      v6 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = a1[8];
  }
  v6 = 1;
  if ( (v5 & 1) == 0 )
  {
    if ( BN_mod_mul(v2, v2, v2, a1[3], a2) == 0 )
    {
      v3 = a1[7];
      LOWORD(v6) = 0;
      goto LABEL_6;
    }
    v4 = BN_mod_mul(a1[1], a1[1], a1[1], a1[3], a2) == 0;
    v3 = a1[7];
    if ( v4 )
      goto LABEL_17;
  }
LABEL_6:
  if ( v3 == 0 )
    a1[7] = 32;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_invert_ex  (binary VA: 0x19fec50)
// Original: BN_BLINDING_invert_ex
// ----------------------------------------------------------------------------
int BN_BLINDING_invert_ex(int a1, int a2, int *a3, int a4)
{
  int v4;
  int v5;

  if ( *a3 != 0 && (v4 = a3[1]) != 0 )
  {
    if ( a2 != 0 )
      v5 = BN_mod_mul(a1, a1, a2, a3[3], a4);
    else
      v5 = BN_mod_mul(a1, a1, v4, a3[3], a4);
    if ( v5 >= 0 && BN_BLINDING_update(a3, a4) == 0 )
      return 0;
  }
  else
  {
    v5 = 0;
    ERR_put_error(3, 101, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_BLINDING_invert  (binary VA: 0x19fed40)
// Original: BN_BLINDING_invert
// ----------------------------------------------------------------------------
int BN_BLINDING_invert(int a1, int *a2, int a3)
{
  return BN_BLINDING_invert_ex(a1, 0, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: BN_div  (binary VA: 0x19fed80)
// Original: BN_div
// ----------------------------------------------------------------------------
int BN_div(uint32_t *a1, uint32_t *a2, int64_t a3, int *a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  unsigned int **v8;
  uint8_t *v9;
  int v10;
  int v12;
  int v13;
  int v14;
  int v15;
  bool v16; // cc
  int v17;
  unsigned int v18;
  unsigned int v19;
  uint64_t v20; // xmm0_8
  bool v21;
  unsigned int v22;
  uint64_t v23; // rax
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  uint64_t v32; // rax
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
  typedef uint64_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint64_t _g4_t_v54;
  typedef signed int _g4_t_v55;
  typedef uint64_t _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef uint8_t *_g4_t_v58;
  typedef uint32_t **_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint64_t _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint64_t _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t **_g4_t_v66;
  typedef int *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef unsigned int *_g4_t_v73;
  typedef unsigned int *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef unsigned int *_g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef unsigned int **_g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef uint32_t *_g4_t_v86[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v47)) > _g4_s2 ? (8u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v48)) > _g4_s3 ? (8u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v49)) > _g4_s4 ? (8u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v50)) > _g4_s5 ? (8u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v51)) > _g4_s6 ? (12u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v52)) > _g4_s7 ? (16u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v53)) > _g4_s8 ? (16u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v54)) > _g4_s9 ? (16u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v55)) > _g4_s10 ? (16u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v56)) > _g4_s11 ? (16u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v57)) > _g4_s12 ? (28u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v58)) > _g4_s13 ? (28u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v59)) > _g4_s14 ? (32u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v60)) > _g4_s15 ? (32u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v61)) > _g4_s16 ? (32u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v62)) > _g4_s17 ? (40u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v63)) > _g4_s18 ? (48u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v64)) > _g4_s19 ? (48u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v65)) > _g4_s20 ? (48u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v66)) > _g4_s21 ? (56u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v67)) > _g4_s22 ? (56u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v68)) > _g4_s23 ? (60u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v69)) > _g4_s24 ? (60u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v70)) > _g4_s25 ? (60u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v71)) > _g4_s26 ? (64u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v72)) > _g4_s27 ? (64u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v73)) > _g4_s28 ? (64u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v74)) > _g4_s29 ? (68u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v75)) > _g4_s30 ? (68u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v76)) > _g4_s31 ? (72u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v77)) > _g4_s32 ? (72u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v78)) > _g4_s33 ? (76u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v79)) > _g4_s34 ? (76u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v80)) > _g4_s35 ? (80u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v81)) > _g4_s36 ? (80u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v82)) > _g4_s37 ? (84u + sizeof(_g4_t_v82)) : _g4_s37,
    _g4_s39 = (84u + sizeof(_g4_t_v83)) > _g4_s38 ? (84u + sizeof(_g4_t_v83)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v84)) > _g4_s39 ? (88u + sizeof(_g4_t_v84)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v85)) > _g4_s40 ? (92u + sizeof(_g4_t_v85)) : _g4_s40,
    _g4_s42 = (124u + sizeof(_g4_t_v86)) > _g4_s41 ? (124u + sizeof(_g4_t_v86)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 68u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 68u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 80u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 84u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 84u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 88u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 92u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 124u);

  v4 = a3;
  v5 = a4;
  v6 = *(uint32_t *)(a3 + 4);
  v7 = HIDWORD(a3);
  if ( v6 > 0 && *(uint32_t *)(*(uint32_t *)a3 + 4 * v6 - 4) == 0 )
  {
    v10 = 0;
    ERR_put_error(3, 107, 107, (int)(uintptr_t)(&unk_1B15112), 0);
    return v10;
  }
  if ( (*(uint8_t *)(a3 + 16) & 4) != 0 || (*(uint8_t *)(HIDWORD(a3) + 16) & 4) != 0 )
  {
    if ( *(uint32_t *)(HIDWORD(a3) + 4) == 0 )
    {
      v10 = 0;
      ERR_put_error(3, 138, 103, (int)(uintptr_t)(&unk_1B15112), 0);
      return v10;
    }
    BN_CTX_start((int)(uintptr_t)(a4));
    v59 = (uint32_t **)BN_CTX_get(a4);
    v67 = (int *)BN_CTX_get(a4);
    v58 = BN_CTX_get(a4);
    if ( a1 == nullptr )
      a1 = (uint32_t *)(BN_CTX_get(a4));
    if ( a1 == nullptr )
      goto LABEL_12;
    if ( v58 == nullptr )
      goto LABEL_12;
    v46 = BN_num_bits((uint32_t *)HIDWORD(a3)) % 32;
    if ( BN_lshift(v58, HIDWORD(a3), 32 - v46) == 0 )
      goto LABEL_12;
    v68 = 64 - v46;
    *((uint32_t *)v58 + 3) = 0;
    if ( BN_lshift(v67, a3, 64 - v46) == 0 )
      goto LABEL_12;
    v12 = v67[1];
    v67[3] = 0;
    v52 = *((uint32_t *)v58 + 1);
    if ( v12 > v52 + 1 )
    {
      if ( v12 >= v67[2] )
      {
        if ( bn_expand2((int)(uintptr_t)(v67), v12 + 1) == 0 )
          goto LABEL_12;
        v12 = v67[1];
      }
      *(uint32_t *)(*v67 + 4 * v12) = 0;
      v53 = v67[1] + 1;
      v67[1] = v53;
    }
    else
    {
      if ( v52 + 1 < v67[2] )
        goto LABEL_23;
      if ( bn_expand2((int)(uintptr_t)(v67), v52 + 2) == 0 )
        goto LABEL_12;
      v12 = v67[1];
      v14 = *((uint32_t *)v58 + 1);
      if ( v12 <= v14 + 1 )
      {
LABEL_23:
        v13 = 4 * v12;
        do
        {
          ++v12;
          *(uint32_t *)(*v67 + v13) = 0;
          v14 = *((uint32_t *)v58 + 1);
          v13 += 4;
        }
        while ( v12 <= v14 + 1 );
        v7 = HIDWORD(a3);
        v5 = a4;
      }
      v53 = v14 + 2;
      v67[1] = v14 + 2;
    }
    v85 = 0;
    v76 = *((uint32_t *)v58 + 1);
    v15 = v53 - v76;
    v62 = *v67;
    v83 = *(uint32_t *)(*(uint32_t *)v58 + 4 * v76 - 4);
    if ( v76 != 1 )
      v85 = *(uint32_t *)(*(uint32_t *)v58 + 4 * v76 - 8);
    v16 = v15 < a1[2];
    a1[3] = *(uint32_t *)(a3 + 12) ^ *(uint32_t *)(v7 + 12);
    if ( v16 || (v33 = bn_expand2((int)(uintptr_t)(a1), v15 + 1), v15 = v53 - v76, v33 != 0) )
    {
      v84 = v15 - 1;
      a1[1] = v15 - 1;
      v63 = *a1;
      v17 = v15 - 1;
      if ( v76 < (int)(uintptr_t)(v59[2]) )
      {
LABEL_31:
        v78 = (unsigned int *)(v63 + 4 * v84);
        if ( v17 != 0 )
          --v78;
        else
          a1[3] = 0;
        if ( v84 > 0 )
        {
          v80 = 0;
          v64 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(v85), 0);
          v71 = (uint32_t *)(v62 + 4 * v53 - 4);
          v74 = (unsigned int *)(v62 + 4 * v15);
          do
          {
            v18 = 0xFFFFFFFF;
            if ( v83 != *v71 )
            {
              v18 = *(uint64_t *)(v71 - 1) / (uint64_t)v83;
              v19 = *(uint64_t *)(v71 - 1) % (uint64_t)v83;
              v20 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*(v71 - 2)), 0);
              v54 = v18 * (uint64_t)v85;
              if ( v54 > __PAIR64__(v19, v20) )
              {
                --v18;
                v21 = __CFADD__(v83, v19);
                v22 = v83 + v19;
                if ( !v21 )
                {
                  v23 = v54;
                  do
                  {
                    v23 -= v64;
                    if ( __PAIR64__(v22 | HIDWORD(v20), v20) >= v23 )
                      break;
                    --v18;
                    v21 = __CFADD__(v83, v22);
                    v22 += v83;
                  }
                  while ( !v21 );
                }
              }
            }
            --v74;
            (*v59)[v76] = bn_mul_words(*v59, *(unsigned int **)v58, v76, v18);
            if ( bn_sub_words(v74, v74, *v59, v76 + 1) != 0 )
            {
              --v18;
              if ( bn_add_words(v74, v74, *(unsigned int **)v58, v76) != 0 )
                ++*v71;
            }
            ++v80;
            --v71;
            *v78-- = v18;
          }
          while ( v84 > v80 );
          v4 = a3;
        }
        v34 = v67[1];
        if ( v34 > 0 )
        {
          v35 = *v67 + 4 * v34 - 4 - 4 * v34;
          do
          {
            if ( *(uint32_t *)(v35 + 4 * v34) != 0 )
              break;
            --v34;
          }
          while ( v34 != 0 );
          v67[1] = v34;
        }
        if ( a2 != nullptr )
        {
          v36 = *(uint32_t *)(v4 + 12);
          BN_rshift(a2, v67, v68);
          if ( a2[1] != 0 )
            a2[3] = v36;
        }
        v37 = a1[1];
        if ( v37 > 0 )
        {
          v38 = *a1 + 4 * v37 - 4 - 4 * v37;
          do
          {
            if ( *(uint32_t *)(v38 + 4 * v37) != 0 )
              break;
            --v37;
          }
          while ( v37 != 0 );
          a1[1] = v37;
        }
        goto LABEL_102;
      }
      v49 = v15;
      v39 = bn_expand2((int)(uintptr_t)(v59), v76 + 1);
      v15 = v49;
      if ( v39 != 0 )
      {
        v17 = a1[1];
        goto LABEL_31;
      }
    }
LABEL_12:
    v10 = 0;
    BN_CTX_end(v5);
    return v10;
  }
  if ( *(uint32_t *)(HIDWORD(a3) + 4) == 0 )
  {
    v10 = 0;
    ERR_put_error(3, 107, 103, (int)(uintptr_t)(&unk_1B15112), 0);
    return v10;
  }
  if ( BN_ucmp((uint32_t *)a3, (uint32_t *)HIDWORD(a3)) >= 0 )
  {
    BN_CTX_start((int)(uintptr_t)(a4));
    v66 = (uint32_t **)BN_CTX_get(a4);
    v57 = (int *)BN_CTX_get(a4);
    v8 = (unsigned int **)BN_CTX_get(a4);
    v9 = (uint8_t *)(a1);
    v82 = v8;
    if ( a1 == nullptr )
      v9 = BN_CTX_get(a4);
    if ( v9 != nullptr && v82 != nullptr && v57 != nullptr && v66 != nullptr )
    {
      v47 = (int)(uintptr_t)(v9);
      v51 = BN_num_bits((uint32_t *)HIDWORD(a3)) % 32;
      if ( BN_lshift(v82, HIDWORD(a3), 32 - v51) != 0 )
      {
        v82[3] = nullptr;
        v24 = BN_lshift(v57, a3, 64 - v51);
        v25 = (uint32_t *)v47;
        if ( v24 != 0 )
        {
          v79 = 0;
          v57[3] = 0;
          v65 = (int)(uintptr_t)(v82[1]);
          v26 = v57[1];
          v86[3] = nullptr;
          v60 = v26;
          v55 = v26 - v65;
          v86[0] = (uint32_t *)(*v57 + 4 * (v26 - v65));
          v86[1] = (uint32_t *)v65;
          v86[2] = (uint32_t *)(v57[2] - (v26 - v65));
          v77 = (*v82)[v65 - 1];
          if ( v65 != 1 )
            v79 = (*v82)[v65 - 2];
          v69 = *v57;
          v16 = v55 < *(uint32_t *)(v47 + 8);
          *(uint32_t *)(v47 + 12) = *(uint32_t *)(a3 + 12) ^ *(uint32_t *)(HIDWORD(a3) + 12);
          if ( v16
            || (v40 = bn_expand2(v47, (__PAIR64__(v55, v47) + 0x100000000LL) >> 32), v25 = (uint32_t *)v47, v40 != 0) )
          {
            v72 = *v25;
            v25[1] = v55;
            if ( v65 < (int)(uintptr_t)(v66[2]) || (v50 = v25, v41 = bn_expand2((int)(uintptr_t)(v66), v65 + 1), v25 = v50, v41 != 0) )
            {
              v48 = v25;
              v81 = v55 - 1;
              v73 = (unsigned int *)(v72 + 4 * (v55 - 1));
              v27 = BN_ucmp(v86, v82);
              v28 = v48;
              if ( v27 < 0 )
              {
                --v48[1];
              }
              else
              {
                bn_sub_words(v86[0], v86[0], *v82, v65);
                *v73 = 1;
                v28 = v48;
              }
              if ( v28[1] != 0 )
                --v73;
              else
                v28[3] = 0;
              if ( v81 > 0 )
              {
                v75 = 0;
                v70 = (uint32_t *)(v69 + 4 * v60 - 4);
                v61 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(v79), 0);
                do
                {
                  v29 = 0xFFFFFFFF;
                  if ( *v70 != v77 )
                  {
                    v29 = *(uint64_t *)(v70 - 1) / (uint64_t)v77;
                    v30 = *(uint64_t *)(v70 - 1) % (uint64_t)v77;
                    v56 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*(v70 - 2)), 0);
                    v45 = v29 * (uint64_t)v79;
                    if ( v45 > __PAIR64__(v30, v56) )
                    {
                      --v29;
                      v31 = v77 + v30;
                      if ( !__CFADD__(v77, v30) )
                      {
                        v32 = v45;
                        do
                        {
                          v32 -= v61;
                          if ( __PAIR64__(v31 | HIDWORD(v56), v56) >= v32 )
                            break;
                          --v29;
                          v21 = __CFADD__(v77, v31);
                          v31 += v77;
                        }
                        while ( !v21 );
                      }
                    }
                  }
                  (*v66)[v65] = bn_mul_words(*v66, *v82, v65, v29);
                  --v86[0];
                  if ( bn_sub_words(v86[0], v86[0], *v66, v65 + 1) != 0 )
                  {
                    --v29;
                    if ( bn_add_words(v86[0], v86[0], *v82, v65) != 0 )
                      ++*v70;
                  }
                  ++v75;
                  --v70;
                  *v73-- = v29;
                }
                while ( v75 < v81 );
                v4 = a3;
                v5 = a4;
              }
              v42 = v57[1];
              if ( v42 > 0 )
              {
                v43 = *v57 + 4 * v42 - 4 - 4 * v42;
                do
                {
                  if ( *(uint32_t *)(v43 + 4 * v42) != 0 )
                    break;
                  --v42;
                }
                while ( v42 != 0 );
                v57[1] = v42;
              }
              if ( a2 != nullptr )
              {
                v44 = *(uint32_t *)(v4 + 12);
                BN_rshift(a2, v57, 64 - v51);
                if ( a2[1] != 0 )
                  a2[3] = v44;
              }
LABEL_102:
              v10 = 1;
              BN_CTX_end(v5);
              return v10;
            }
          }
        }
      }
    }
    goto LABEL_12;
  }
  if ( a2 == nullptr || (v10 = 0, BN_copy(a2, (uint32_t *)a3) != nullptr) )
  {
    v10 = 1;
    if ( a1 != nullptr )
      BN_set_word(a1, 0);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_BN_strings  (binary VA: 0x19ffa50)
// Original: ERR_load_BN_strings
// ----------------------------------------------------------------------------
int ERR_load_BN_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CE1A0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CE1A0);
    return ERR_load_strings(0, &dword_20CE300);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_exp  (binary VA: 0x19ffb80)
// Original: BN_exp
// ----------------------------------------------------------------------------
int BN_exp(uint32_t *a1, uint32_t *a2, int a3, int *a4)
{
  uint8_t *v4;
  int v5;
  uint8_t *v7;
  int v8;

  if ( (*(uint8_t *)(a3 + 16) & 4) != 0 )
  {
    v5 = -1;
    ERR_put_error(3, 123, 66, (int)(uintptr_t)(&unk_1B15112), 0);
    return v5;
  }
  BN_CTX_start((int)(uintptr_t)(a4));
  if ( a1 == (uint32_t *)a3 || (v7 = (uint8_t *)(a1), a1 == a2) )
  {
    v7 = BN_CTX_get(a4);
    v4 = BN_CTX_get(a4);
    if ( v4 == nullptr )
      goto LABEL_5;
  }
  else
  {
    v4 = BN_CTX_get(a4);
    if ( v4 == nullptr )
      goto LABEL_5;
  }
  if ( v7 != nullptr )
  {
    v5 = 0;
    if ( BN_copy(v4, a2) == nullptr )
      goto LABEL_6;
    v8 = BN_num_bits((uint32_t *)a3);
    if ( *(int *)(a3 + 4) > 0 && (**(uint8_t **)a3 & 1) != 0 )
    {
      if ( BN_copy(v7, a2) == nullptr )
        goto LABEL_6;
    }
    else
    {
      v5 = 0;
      if ( BN_set_word(v7, 1) == 0 )
        goto LABEL_6;
    }
    v5 = 1;
    if ( v8 <= 1 )
      goto LABEL_6;
    while ( BN_sqr(v4, v4, a4) != 0 && (BN_is_bit_set((uint32_t *)a3, v5) == 0 || BN_mul(v7, v7, v4, a4) != 0) )
    {
      if ( ++v5 == v8 )
      {
        v5 = 1;
        goto LABEL_6;
      }
    }
  }
LABEL_5:
  v5 = 0;
LABEL_6:
  if ( a1 != (uint32_t *)v7 )
    BN_copy(a1, v7);
  BN_CTX_end(a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp_recp  (binary VA: 0x19ffd80)
// Original: BN_mod_exp_recp
// ----------------------------------------------------------------------------
int BN_mod_exp_recp(uint32_t *a1, int a2, int a3, uint32_t *a4, int *a5)
{
  int *v5;
  int v6;
  uint8_t *v7;
  uint8_t *v8;
  int v10;
  int v11;
  int v12;
  char v13;
  int v14;
  typedef uint8_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[52];
  typedef uint32_t _g4_t_v25[35];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v21)) > _g4_s6 ? (20u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v22)) > _g4_s7 ? (24u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v23)) > _g4_s8 ? (28u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v25)) > _g4_s10 ? (96u + sizeof(_g4_t_v25)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);

  v5 = a5;
  if ( (*(uint8_t *)(a3 + 16) & 4) != 0 )
  {
    v6 = -1;
    ERR_put_error(3, 125, 66, (int)(uintptr_t)(&unk_1B15112), 0);
    return v6;
  }
  v18 = BN_num_bits((uint32_t *)a3);
  if ( v18 == 0 )
    return BN_set_word(a1, 1);
  v6 = 0;
  BN_CTX_start((int)(uintptr_t)(a5));
  v21 = (uint32_t *)(BN_CTX_get(a5));
  v7 = BN_CTX_get(a5);
  v15 = v7;
  v25[0] = (uint32_t)(uintptr_t)(v7);
  if ( v21 != nullptr && v7 != nullptr )
  {
    BN_RECP_CTX_init(v24);
    if ( a4[3] != 0 )
    {
      if ( BN_copy(v21, a4) == nullptr )
        goto LABEL_21;
      v21[3] = 0;
      if ( (int)BN_RECP_CTX_set(v24, v21) <= 0 )
        goto LABEL_21;
    }
    else if ( (int)BN_RECP_CTX_set(v24, a4) <= 0 )
    {
      goto LABEL_21;
    }
    v6 = 0;
    if ( BN_nnmod(v15, a2, a4, a5) != 0 )
    {
      if ( *((uint32_t *)v15 + 1) != 0 )
      {
        v20 = 6;
        if ( v18 <= 671 )
        {
          v20 = 5;
          if ( v18 <= 239 )
          {
            v20 = 4;
            if ( v18 <= 79 )
            {
              v20 = 1;
              if ( v18 <= 23 )
              {
LABEL_29:
                v6 = 0;
                if ( BN_set_word(a1, 1) != 0 )
                {
                  v23 = 1;
                  v22 = v18 - 1;
                  while ( 1 )
                  {
                    while ( BN_is_bit_set((uint32_t *)a3, v22) == 0 )
                    {
                      if ( v23 == 0 && BN_mod_mul_reciprocal(a1, a1, a1, v24, a5) == 0 )
                      {
                        v5 = a5;
                        v6 = 0;
                        goto LABEL_21;
                      }
                      if ( v22 == 0 )
                        goto LABEL_49;
                      --v22;
                    }
                    v19 = 1;
                    v17 = 0;
                    if ( v20 != 1 )
                    {
                      v10 = v22 - 1;
                      if ( v22 - 1 >= 0 )
                      {
                        v11 = 1;
                        v12 = v22 - 2;
                        do
                        {
                          if ( BN_is_bit_set((uint32_t *)a3, v10) != 0 )
                          {
                            v13 = v11 - v17;
                            v17 = v11;
                            v19 = (v19 << v13) | 1;
                          }
                          if ( ++v11 == v20 )
                            break;
                          v10 = v12--;
                        }
                        while ( v12 != -2 );
                      }
                    }
                    if ( v23 == 0 )
                      break;
LABEL_43:
                    if ( BN_mod_mul_reciprocal(a1, a1, v25[v19 >> 1], v24, a5) == 0 )
                      goto LABEL_50;
                    v22 += ~v17;
                    if ( v22 < 0 )
                    {
LABEL_49:
                      v5 = a5;
                      v6 = 1;
                      goto LABEL_21;
                    }
                    v23 = 0;
                  }
                  v14 = 0;
                  while ( BN_mod_mul_reciprocal(a1, a1, a1, v24, a5) != 0 )
                  {
                    if ( v17 < ++v14 )
                      goto LABEL_43;
                  }
LABEL_50:
                  v5 = a5;
                  v6 = 0;
                }
                goto LABEL_21;
              }
              v20 = 3;
            }
          }
        }
        v6 = 0;
        if ( BN_mod_mul_reciprocal(v21, v15, v15, v24, a5) != 0 )
        {
          v16 = 1 << (v20 - 1);
          if ( v16 > 1 )
          {
            LOWORD(v6) = 1;
            while ( 1 )
            {
              v8 = BN_CTX_get(a5);
              v25[v6] = (uint32_t)(uintptr_t)(v8);
              if ( v8 == nullptr || BN_mod_mul_reciprocal(v8, *(uint32_t *)&v24[4 * v6 + 48], v21, v24, a5) == 0 )
                break;
              if ( ++v6 == v16 )
                goto LABEL_29;
            }
            v6 = 0;
            goto LABEL_21;
          }
          goto LABEL_29;
        }
      }
      else
      {
        LOWORD(v6) = 1;
        BN_set_word(a1, 0);
      }
    }
  }
LABEL_21:
  BN_CTX_end(v5);
  BN_RECP_CTX_free(v24);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp_mont_consttime  (binary VA: 0x1a00230)
// Original: BN_mod_exp_mont_consttime
// ----------------------------------------------------------------------------
int BN_mod_exp_mont_consttime(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5, char *a6)
{
  int *v6;
  int v7;
  unsigned int v8;
  void **v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint8_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint8_t *v26;
  uint8_t v27;
  int i;
  int v29;
  int c;
  void *s;
  uint8_t *v32;
  uint8_t *v33;
  uint8_t *v34;
  int v35;
  char *v36;
  void *v37;
  int n;
  int v39;
  uint8_t *v40;
  uint32_t *v41;
  uint8_t *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint8_t *v47;

  v6 = a5;
  v35 = a4[1];
  if ( (*(uint8_t *)*a4 & 1) == 0 )
  {
    v12 = 0;
    ERR_put_error(3, 124, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    return v12;
  }
  v7 = BN_num_bits(a3);
  if ( v7 == 0 )
    return BN_set_word(a1, 1);
  BN_CTX_start((int)(uintptr_t)(a5));
  v40 = BN_CTX_get(a5);
  if ( v40 != nullptr )
  {
    v36 = a6;
    if ( a6 != nullptr )
      goto LABEL_5;
    v15 = (int)(uintptr_t)(BN_MONT_CTX_new());
    v36 = (char *)v15;
    if ( v15 != 0 )
    {
      if ( BN_MONT_CTX_set(v15, a4, a5) == 0 )
      {
        v42 = nullptr;
        v41 = nullptr;
        v11 = nullptr;
        n = 0;
        v37 = nullptr;
        v12 = 0;
        goto LABEL_29;
      }
LABEL_5:
      if ( v7 <= 937 )
      {
        if ( v7 > 306 )
        {
          v44 = 32;
          v46 = 32;
          v45 = 5;
        }
        else if ( v7 > 89 )
        {
          v44 = 16;
          v46 = 16;
          v45 = 4;
        }
        else
        {
          v14 = 8;
          if ( v7 < 23 )
            v14 = 2;
          v44 = v14;
          v46 = v14;
          v45 = 2 * (v7 >= 23) + 1;
        }
      }
      else
      {
        v44 = 64;
        v46 = 64;
        v45 = 6;
      }
      v43 = 4 * v35;
      n = 4 * v35 * v44;
      v8 = (unsigned int)(uintptr_t)(uintptr_t)(CRYPTO_malloc(n + 64, (int)(uintptr_t)(&unk_1B15112), 0));
      v37 = (void *)v8;
      if ( v8 == 0 )
      {
        v42 = nullptr;
        v41 = nullptr;
        v11 = nullptr;
        v12 = 0;
        goto LABEL_10;
      }
      s = (void *)((v8 & 0xFFFFFFC0) + 64);
      memset(s, 0, n);
      v9 = BN_value_one();
      v10 = BN_mod_mul_montgomery(v40, v9, v36 + 4, v36, a5);
      v11 = (uint8_t *)s;
      if ( v10 == 0 || (v16 = sub_19FFAB0(v40, v35, (int)(uintptr_t)(s), 0, v46), v11 = (uint8_t *)s, v16 == 0) )
      {
        v42 = nullptr;
        v41 = nullptr;
        v12 = 0;
        goto LABEL_10;
      }
      v41 = (uint32_t *)(BN_CTX_get(a5));
      v42 = BN_CTX_get(a5);
      v11 = (uint8_t *)s;
      if ( v42 != nullptr && v41 != nullptr )
      {
        if ( a2[3] != 0 || (v17 = BN_ucmp(a2, a4), v11 = (uint8_t *)s, v17 >= 0) )
        {
          v33 = v11;
          v18 = BN_div(nullptr, v42, __SPAIR64__((unsigned int)(uintptr_t)(a4), (unsigned int)(uintptr_t)(a2)), a5);
          v12 = 0;
          v11 = v33;
          if ( v18 == 0 )
            goto LABEL_10;
          v19 = v42;
        }
        else
        {
          v19 = (uint8_t *)(a2);
        }
        v34 = v11;
        v12 = 0;
        v20 = BN_mod_mul_montgomery(v42, v19, v36 + 4, v36, a5);
        v11 = v34;
        if ( v20 != 0 )
        {
          v21 = BN_copy(v41, v42);
          v11 = v34;
          if ( v21 != nullptr )
          {
            v22 = sub_19FFAB0(v42, v35, (int)(uintptr_t)(v34), 1, v46);
            v11 = v34;
            if ( v22 != 0 )
            {
              if ( v45 != 1 && v46 != 2 )
              {
                LOWORD(v12) = 2;
                do
                {
                  if ( BN_mod_mul_montgomery(v41, v42, v41, v36, a5) == 0
                    || sub_19FFAB0(v41, v35, (int)(uintptr_t)(v34), v12, v46) == 0 )
                  {
                    v11 = v34;
                    v12 = 0;
                    goto LABEL_10;
                  }
                  ++v12;
                }
                while ( v12 != v46 );
                v11 = v34;
              }
              v47 = v11;
              v23 = v45 * ((v45 + v7 - 1) / v45) - 1;
              while ( v23 >= 0 )
              {
                v39 = 0;
                v24 = 0;
                do
                {
                  if ( BN_mod_mul_montgomery(v40, v40, v40, v36, a5) == 0 )
                    goto LABEL_52;
                  c = v23;
                  ++v24;
                  --v23;
                  v39 = 2 * v39 + BN_is_bit_set(a3, c);
                }
                while ( v45 > v24 );
                if ( v35 <= v41[2] || bn_expand2((int)(uintptr_t)(v41), v35) != 0 )
                {
                  if ( v43 != 0 )
                  {
                    v25 = 0;
                    v26 = &v47[v39];
                    do
                    {
                      v27 = *v26;
                      v26 += v44;
                      *(uint8_t *)(*v41 + v25++) = v27;
                    }
                    while ( v25 != v43 );
                  }
                  v41[1] = v35;
                  if ( v35 > 0 )
                  {
                    for ( i = v35; i != 0; --i )
                    {
                      if ( *(uint32_t *)(-4 * v35 + *v41 + 4 * v35 - 4 + 4 * i) != 0 )
                        break;
                    }
                    v41[1] = i;
                  }
                  if ( BN_mod_mul_montgomery(v40, v40, v41, v36, a5) != 0 )
                    continue;
                }
LABEL_52:
                v11 = v47;
                v6 = a5;
                goto LABEL_53;
              }
              v6 = a5;
              v29 = BN_from_montgomery(a1, v40, v36, a5);
              v11 = v47;
              v12 = v29 != 0;
            }
          }
        }
      }
      else
      {
LABEL_53:
        v12 = 0;
      }
LABEL_10:
      if ( a6 != nullptr )
      {
LABEL_11:
        if ( v11 != nullptr )
        {
          OPENSSL_cleanse(v11, n);
          CRYPTO_free(v37);
        }
        if ( v42 != nullptr )
          BN_clear((int)(uintptr_t)(v42));
        if ( v41 != nullptr )
          BN_clear((int)(uintptr_t)(v41));
        goto LABEL_17;
      }
LABEL_29:
      v32 = v11;
      BN_MONT_CTX_free(v36);
      v11 = v32;
      goto LABEL_11;
    }
  }
  v12 = 0;
LABEL_17:
  BN_CTX_end(v6);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp_mont  (binary VA: 0x1a00910)
// Original: BN_mod_exp_mont
// ----------------------------------------------------------------------------
int BN_mod_exp_mont(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4, int *a5, char *a6)
{
  uint32_t *v6;
  int *v7;
  uint8_t *v9;
  int v10;
  uint32_t *v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  int i;
  uint8_t *v17;
  int v18;
  int v19;
  void **v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char v27;
  int v28;
  uint8_t *v29;
  bool v30;
  bool v31;
  uint8_t *v32;
  uint8_t *v33;
  int v34;
  int v35;
  int v36;
  uint32_t *v37;
  uint8_t *v38;
  uint8_t *v39;
  char *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint32_t v45[35];

  v6 = (uint32_t *)a3;
  v7 = a5;
  if ( (*(uint8_t *)(a3 + 16) & 4) != 0 )
    return BN_mod_exp_mont_consttime(a1, a2, (uint32_t *)a3, a4, a5, a6);
  if ( (int)a4[1] <= 0 || (*(uint8_t *)*a4 & 1) == 0 )
  {
    ERR_put_error(3, 109, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v36 = BN_num_bits((uint32_t *)a3);
  if ( v36 == 0 )
    return BN_set_word(a1, 1);
  BN_CTX_start((int)(uintptr_t)(a5));
  v39 = BN_CTX_get(a5);
  v38 = BN_CTX_get(a5);
  v9 = BN_CTX_get(a5);
  v45[0] = (uint32_t)(uintptr_t)(v9);
  if ( v38 != nullptr && v39 != nullptr && v9 != nullptr )
  {
    v40 = a6;
    if ( a6 != nullptr )
      goto LABEL_10;
    v33 = v9;
    v18 = (int)(uintptr_t)(BN_MONT_CTX_new());
    v40 = (char *)v18;
    if ( v18 != 0 )
    {
      v19 = BN_MONT_CTX_set(v18, a4, a5);
      v12 = false;
      v9 = v33;
      if ( v19 == 0 )
        goto LABEL_16;
LABEL_10:
      if ( a2[3] != 0 || (v29 = v9, v10 = BN_ucmp(a2, a4), v9 = v29, v10 >= 0) )
      {
        v32 = v9;
        v13 = BN_nnmod(v9, a2, a4, a5);
        v12 = false;
        v11 = (uint32_t *)(v32);
        if ( v13 == 0 )
          goto LABEL_15;
      }
      else
      {
        v11 = a2;
      }
      if ( v11[1] == 0 )
      {
        BN_set_word(a1, 0);
        v12 = true;
        goto LABEL_15;
      }
      v14 = BN_mod_mul_montgomery(v45[0], v11, v40 + 4, v40, a5);
      v12 = false;
      if ( v14 != 0 )
      {
        v42 = 6;
        if ( v36 <= 671 )
        {
          v42 = 5;
          if ( v36 <= 239 )
          {
            v42 = 4;
            if ( v36 <= 79 )
            {
              v42 = 1;
              if ( v36 <= 23 )
              {
LABEL_40:
                v20 = BN_value_one();
                v21 = BN_mod_mul_montgomery(v38, v20, v40 + 4, v40, a5);
                v12 = false;
                if ( v21 != 0 )
                {
                  v44 = 1;
                  v22 = v36 - 1;
                  v37 = v6;
                  v41 = v22;
                  while ( 1 )
                  {
                    while ( BN_is_bit_set(v37, v41) == 0 )
                    {
                      if ( v44 == 0 && BN_mod_mul_montgomery(v38, v38, v38, v40, a5) == 0 )
                        goto LABEL_55;
                      if ( v41 == 0 )
                        goto LABEL_62;
                      --v41;
                    }
                    v43 = 1;
                    v35 = 0;
                    if ( v42 != 1 )
                    {
                      v23 = v41 - 1;
                      if ( v41 - 1 >= 0 )
                      {
                        v24 = 1;
                        v25 = v41 - 2;
                        v26 = 1;
                        do
                        {
                          if ( BN_is_bit_set(v37, v23) != 0 )
                          {
                            v27 = v24 - v35;
                            v35 = v24;
                            v26 = (v26 << v27) | 1;
                          }
                          if ( ++v24 == v42 )
                            break;
                          v23 = v25--;
                        }
                        while ( v25 != -2 );
                        v43 = v26;
                      }
                    }
                    if ( v44 == 0 )
                    {
                      v28 = 0;
                      while ( BN_mod_mul_montgomery(v38, v38, v38, v40, a5) != 0 )
                      {
                        if ( v35 < ++v28 )
                          goto LABEL_59;
                      }
LABEL_55:
                      v7 = a5;
                      v12 = false;
                      goto LABEL_15;
                    }
LABEL_59:
                    if ( BN_mod_mul_montgomery(v38, v38, v45[v43 >> 1], v40, a5) == 0 )
                      goto LABEL_55;
                    v41 += ~v35;
                    if ( v41 < 0 )
                      break;
                    v44 = 0;
                  }
LABEL_62:
                  v7 = a5;
                  v12 = BN_from_montgomery(a1, v38, v40, a5) != 0;
                }
                goto LABEL_15;
              }
              v42 = 3;
            }
          }
        }
        v15 = BN_mod_mul_montgomery(v39, v45[0], v45[0], v40, a5);
        v12 = false;
        if ( v15 == 0 )
          goto LABEL_15;
        v34 = 1 << (v42 - 1);
        if ( v34 > 1 )
        {
          for ( i = 1; i != v34; ++i )
          {
            v17 = BN_CTX_get(a5);
            v45[i] = (uint32_t)(uintptr_t)(v17);
            if ( v17 == nullptr || BN_mod_mul_montgomery(v17, v45[i - 1], v39, v40, a5) == 0 )
            {
              v12 = false;
              goto LABEL_15;
            }
          }
          v6 = (uint32_t *)a3;
        }
        goto LABEL_40;
      }
LABEL_15:
      if ( a6 == nullptr )
      {
LABEL_16:
        v30 = v12;
        BN_MONT_CTX_free(v40);
        v12 = v30;
      }
LABEL_20:
      v31 = v12;
      BN_CTX_end(v7);
      return v31;
    }
  }
  v12 = false;
  goto LABEL_20;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp_mont_word  (binary VA: 0x1a00ee0)
// Original: BN_mod_exp_mont_word
// ----------------------------------------------------------------------------
int BN_mod_exp_mont_word(uint32_t *a1, unsigned int a2, int a3, unsigned int **a4, int *a5, char *a6)
{
  int v6;
  unsigned int v7;
  int v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;
  unsigned int v13;
  int v14;
  int is_bit_set;
  uint32_t *v16;
  int v17;
  bool v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  char *v25;
  char *v26;

  if ( (*(uint8_t *)(a3 + 16) & 4) != 0 )
  {
    v17 = -1;
    ERR_put_error(3, 117, 66, (int)(uintptr_t)(&unk_1B15112), 0);
    return v17;
  }
  v6 = (int)(uintptr_t)(a4[1]);
  if ( v6 <= 0 || ((v7 = **a4) & 1) == 0 )
  {
    v17 = 0;
    ERR_put_error(3, 117, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    return v17;
  }
  if ( v6 == 1 )
    a2 %= v7;
  v8 = BN_num_bits((uint32_t *)a3);
  if ( v8 == 0 )
    return BN_set_word(a1, 1);
  if ( a2 != 0 )
  {
    BN_CTX_start((int)(uintptr_t)(a5));
    v9 = BN_CTX_get(a5);
    v10 = BN_CTX_get(a5);
    v11 = BN_CTX_get(a5);
    v24 = (uint32_t *)(v11);
    if ( v10 != nullptr && v9 != nullptr && v11 != nullptr )
    {
      v25 = a6;
      if ( a6 != nullptr )
        goto LABEL_12;
      v22 = (int)(uintptr_t)(BN_MONT_CTX_new());
      v25 = (char *)v22;
      if ( v22 != 0 )
      {
        v19 = false;
        if ( BN_MONT_CTX_set(v22, a4, a5) == 0 )
          goto LABEL_45;
LABEL_12:
        v12 = v8 - 2;
        v13 = a2;
        v23 = 1;
        if ( v12 >= 0 )
        {
          v26 = v25 + 4;
          do
          {
            v14 = v13 * v13;
            if ( v13 * v13 / v13 == v13 )
            {
              if ( v23 != 0 )
              {
                v23 = 1;
                goto LABEL_19;
              }
            }
            else
            {
              if ( v23 != 0 )
              {
                if ( BN_set_word(v10, v13) == 0 || BN_mod_mul_montgomery(v10, v10, v26, v25, a5) == 0 )
                {
LABEL_43:
                  v19 = false;
                  goto LABEL_44;
                }
              }
              else
              {
                if ( BN_mul_word(v10, v13) == 0
                  || BN_div(nullptr, v24, __SPAIR64__((unsigned int)(uintptr_t)(a4), (unsigned int)(uintptr_t)(v10)), a5) == 0 )
                {
                  goto LABEL_43;
                }
                v16 = (uint32_t *)(v10);
                v10 = (uint8_t *)(v24);
                v24 = v16;
              }
              v14 = 1;
            }
            if ( BN_mod_mul_montgomery(v10, v10, v10, v25, a5) == 0 )
              goto LABEL_43;
            v23 = 0;
LABEL_19:
            is_bit_set = BN_is_bit_set((uint32_t *)a3, v12);
            v13 = v14;
            if ( is_bit_set != 0 )
            {
              if ( v14 == v14 * a2 / a2 )
              {
                v13 = v14 * a2;
              }
              else if ( v23 != 0 )
              {
                if ( BN_set_word(v10, v14) == 0 || BN_mod_mul_montgomery(v10, v10, v26, v25, a5) == 0 )
                  goto LABEL_43;
                v13 = a2;
                v23 = 0;
              }
              else
              {
                if ( BN_mul_word(v10, v14) == 0
                  || BN_div(nullptr, v24, __SPAIR64__((unsigned int)(uintptr_t)(a4), (unsigned int)(uintptr_t)(v10)), a5) == 0 )
                {
                  goto LABEL_43;
                }
                v20 = (uint32_t *)(v10);
                v13 = a2;
                v10 = (uint8_t *)(v24);
                v24 = v20;
              }
            }
            --v12;
          }
          while ( v12 != -1 );
        }
        if ( v13 == 1 )
        {
          if ( v23 == 0 )
          {
LABEL_50:
            v19 = BN_from_montgomery(a1, v10, v25, a5) != 0;
            goto LABEL_44;
          }
          v19 = BN_set_word(a1, 1) != 0;
        }
        else if ( v23 != 0 )
        {
          v19 = false;
          if ( BN_set_word(v10, v13) != 0 && BN_mod_mul_montgomery(v10, v10, v25 + 4, v25, a5) != 0 )
            goto LABEL_50;
        }
        else
        {
          v19 = false;
          if ( BN_mul_word(v10, v13) != 0 )
          {
            v21 = BN_div(nullptr, v24, __SPAIR64__((unsigned int)(uintptr_t)(a4), (unsigned int)(uintptr_t)(v10)), a5);
            v19 = false;
            v10 = (uint8_t *)(v24);
            if ( v21 != 0 )
              goto LABEL_50;
          }
        }
LABEL_44:
        if ( a6 == nullptr )
LABEL_45:
          BN_MONT_CTX_free(v25);
LABEL_34:
        BN_CTX_end(a5);
        return v19;
      }
    }
    v19 = false;
    goto LABEL_34;
  }
  BN_set_word(a1, 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp  (binary VA: 0x1a01410)
// Original: BN_mod_exp
// ----------------------------------------------------------------------------
int BN_mod_exp(uint32_t *a1, unsigned int **a2, int a3, unsigned int **a4, int *a5)
{
  if ( (int)(uintptr_t)(a4[1]) <= 0 || (*(uint8_t *)*a4 & 1) == 0 )
    return BN_mod_exp_recp(a1, (int)(uintptr_t)(a2), a3, a4, a5);
  if ( a2[1] != (unsigned int *)((char *)&dword_0 + 1) || a2[3] != nullptr || (*(uint8_t *)(a3 + 16) & 4) != 0 )
    return BN_mod_exp_mont(a1, a2, a3, a4, a5, nullptr);
  return BN_mod_exp_mont_word(a1, **a2, a3, a4, a5, nullptr);
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp_simple  (binary VA: 0x1a014e0)
// Original: BN_mod_exp_simple
// ----------------------------------------------------------------------------
int BN_mod_exp_simple(uint32_t *a1, int a2, int a3, int a4, int *a5)
{
  uint32_t *v5;
  int *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int i;
  uint8_t *v12;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint8_t *v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t v32[35];

  v5 = (uint32_t *)a3;
  v6 = a5;
  if ( (*(uint8_t *)(a3 + 16) & 4) != 0 )
  {
    ERR_put_error(3, 126, 66, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  v23 = BN_num_bits((uint32_t *)a3);
  if ( v23 == 0 )
    return BN_set_word(a1, 1);
  BN_CTX_start((int)(uintptr_t)(a5));
  v25 = BN_CTX_get(a5);
  v7 = BN_CTX_get(a5);
  v32[0] = (uint32_t)(uintptr_t)(v7);
  v8 = 0;
  if ( v25 != nullptr && v7 != nullptr )
  {
    v9 = BN_nnmod(v7, a2, a4, a5);
    v8 = 0;
    if ( v9 != 0 )
    {
      if ( *((uint32_t *)v7 + 1) != 0 )
      {
        v28 = 6;
        if ( v23 <= 671 )
        {
          v28 = 5;
          if ( v23 <= 239 )
          {
            v28 = 4;
            if ( v23 <= 79 )
            {
              v28 = 1;
              if ( v23 <= 23 )
              {
LABEL_24:
                v15 = BN_set_word(a1, 1);
                v8 = 0;
                if ( v15 != 0 )
                {
                  v31 = 1;
                  v26 = v5;
                  v29 = v23 - 1;
                  while ( 1 )
                  {
                    while ( BN_is_bit_set(v26, v29) == 0 )
                    {
                      if ( v31 == 0 && BN_mod_mul(a1, a1, a1, a4, a5) == 0 )
                      {
                        v6 = a5;
                        v8 = 0;
                        goto LABEL_15;
                      }
                      if ( v29 == 0 )
                        goto LABEL_46;
                      --v29;
                    }
                    v30 = 1;
                    v24 = 0;
                    if ( v28 != 1 )
                    {
                      v16 = v29 - 1;
                      if ( v29 - 1 >= 0 )
                      {
                        v17 = 1;
                        v18 = v29 - 2;
                        v19 = 1;
                        do
                        {
                          if ( BN_is_bit_set(v26, v16) != 0 )
                          {
                            v20 = v17 - v24;
                            v24 = v17;
                            v19 = (v19 << v20) | 1;
                          }
                          if ( ++v17 == v28 )
                            break;
                          v16 = v18--;
                        }
                        while ( v18 != -2 );
                        v30 = v19;
                      }
                    }
                    if ( v31 == 0 )
                      break;
LABEL_39:
                    if ( BN_mod_mul(a1, a1, v32[v30 >> 1], a4, a5) == 0 )
                      goto LABEL_47;
                    v29 += ~v24;
                    if ( v29 < 0 )
                    {
LABEL_46:
                      v6 = a5;
                      v8 = 1;
                      goto LABEL_15;
                    }
                    v31 = 0;
                  }
                  v21 = 0;
                  while ( BN_mod_mul(a1, a1, a1, a4, a5) != 0 )
                  {
                    if ( v24 < ++v21 )
                      goto LABEL_39;
                  }
LABEL_47:
                  v6 = a5;
                  v8 = 0;
                }
                goto LABEL_15;
              }
              v28 = 3;
            }
          }
        }
        v10 = BN_mod_mul(v25, v7, v7, a4, a5);
        v8 = 0;
        if ( v10 != 0 )
        {
          v27 = 1 << (v28 - 1);
          if ( v27 > 1 )
          {
            for ( i = 1; i != v27; ++i )
            {
              v12 = BN_CTX_get(a5);
              v32[i] = (uint32_t)(uintptr_t)(v12);
              if ( v12 == nullptr || BN_mod_mul(v12, v32[i - 1], v25, a4, a5) == 0 )
              {
                v8 = 0;
                goto LABEL_15;
              }
            }
            v5 = (uint32_t *)a3;
          }
          goto LABEL_24;
        }
      }
      else
      {
        BN_set_word(a1, 0);
        v8 = 1;
      }
    }
  }
LABEL_15:
  v22 = v8;
  BN_CTX_end(v6);
  return v22;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_exp2_mont  (binary VA: 0x1a01950)
// Original: BN_mod_exp2_mont
// ----------------------------------------------------------------------------
int BN_mod_exp2_mont(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int *a7, char *a8)
{
  uint32_t *v8;
  int *v9;
  uint8_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint8_t *v16;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint8_t *v23;
  int v24;
  int v25;
  void **v26;
  int v27;
  int v28;
  int v29;
  int i;
  int v31;
  int j;
  int v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  int64_t v37;
  int v38;
  int v39;
  char *v40;
  bool v41;
  int v42;
  int v43;
  uint8_t *v44;
  uint8_t *v45;
  int v46;
  char *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  uint32_t *v54;
  uint32_t v55[32];
  uint32_t *v56[35];

  v8 = a6;
  v9 = a7;
  if ( (*(uint8_t *)*a6 & 1) == 0 )
  {
    v13 = 0;
    ERR_put_error(3, 118, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    return v13;
  }
  LODWORD(v37) = BN_num_bits(a3);
  HIDWORD(v37) = BN_num_bits(a5);
  if ( v37 == 0 )
    return BN_set_word(a1, 1);
  BN_CTX_start((int)(uintptr_t)(a7));
  v45 = BN_CTX_get(a7);
  v44 = BN_CTX_get(a7);
  v55[0] = (uint32_t)(uintptr_t)(BN_CTX_get(a7));
  v10 = BN_CTX_get(a7);
  v56[0] = (uint32_t *)(v10);
  v11 = (uint32_t *)v55[0];
  if ( v44 != nullptr && v45 != nullptr && v55[0] != 0 && v10 != nullptr )
  {
    v47 = a8;
    if ( a8 != nullptr )
      goto LABEL_8;
    v24 = (int)(uintptr_t)(BN_MONT_CTX_new());
    v47 = (char *)v24;
    if ( v24 != 0 )
    {
      v13 = 0;
      v25 = BN_MONT_CTX_set(v24, a6, a7);
      v11 = (uint32_t *)v55[0];
      if ( v25 == 0 )
        goto LABEL_30;
LABEL_8:
      v48 = 6;
      if ( (int)v37 <= 671 )
      {
        v48 = 5;
        if ( (int)v37 <= 239 )
        {
          v48 = 4;
          if ( (int)v37 <= 79 )
            v48 = 2 * ((int)v37 > 23) + 1;
        }
      }
      v49 = 6;
      if ( SHIDWORD(v37) <= 671 )
      {
        v49 = 5;
        if ( SHIDWORD(v37) <= 239 )
        {
          v49 = 4;
          if ( SHIDWORD(v37) <= 79 )
            v49 = 2 * (SHIDWORD(v37) > 23) + 1;
        }
      }
      if ( a2[3] != 0 || (v34 = v11, v12 = BN_ucmp(a2, a6), v11 = v34, v12 >= 0) )
      {
        v35 = v11;
        v13 = 0;
        v14 = BN_div(nullptr, v11, __SPAIR64__((unsigned int)(uintptr_t)(a6), (unsigned int)(uintptr_t)(a2)), a7);
        v15 = v35;
        if ( v14 == 0 )
          goto LABEL_29;
      }
      else
      {
        v15 = a2;
      }
      if ( v15[1] != 0 )
      {
        v40 = v47 + 4;
        v13 = 0;
        if ( BN_mod_mul_montgomery(v55[0], v15, v47 + 4, v47, a7) == 0 )
          goto LABEL_29;
        if ( v48 != 1 )
        {
          if ( BN_mod_mul_montgomery(v45, v55[0], v55[0], v47, a7) == 0 )
            goto LABEL_29;
          v51 = 1 << (v48 - 1);
          if ( v51 > 1 )
          {
            v54 = a6;
            LOWORD(v13) = 1;
            do
            {
              v16 = BN_CTX_get(a7);
              v55[v13] = (uint32_t)(uintptr_t)(v16);
              if ( v16 == nullptr || BN_mod_mul_montgomery(v16, v55[v13 - 1], v45, v47, a7) == 0 )
                goto LABEL_28;
              ++v13;
            }
            while ( v13 != v51 );
            v8 = v54;
          }
        }
        if ( a4[3] != 0 || BN_ucmp(a4, v8) >= 0 )
        {
          v36 = v56[0];
          v18 = BN_div(nullptr, v56[0], __SPAIR64__((unsigned int)(uintptr_t)(v8), (unsigned int)(uintptr_t)(a4)), a7);
          v13 = 0;
          v19 = v36;
          if ( v18 == 0 )
            goto LABEL_29;
        }
        else
        {
          v19 = a4;
        }
        if ( v19[1] != 0 )
        {
          v20 = v56[0];
          v13 = 0;
          if ( BN_mod_mul_montgomery(v56[0], v19, v40, v47, a7) == 0 )
            goto LABEL_29;
          if ( v49 != 1 )
          {
            if ( BN_mod_mul_montgomery(v45, v20, v20, v47, a7) == 0 )
              goto LABEL_29;
            LOWORD(v13) = 1;
            v21 = v13 << (v49 - 1);
            if ( v21 > 1 )
            {
              v22 = 1;
              while ( 1 )
              {
                v23 = BN_CTX_get(a7);
                v56[v22] = (uint32_t *)(v23);
                if ( v23 == nullptr )
                {
                  v13 = 0;
                  goto LABEL_29;
                }
                if ( BN_mod_mul_montgomery(v23, v55[v22 + 31], v45, v47, a7) == 0 )
                  break;
                if ( ++v22 == v21 )
                  goto LABEL_56;
              }
LABEL_28:
              v13 = 0;
              goto LABEL_29;
            }
          }
LABEL_56:
          v26 = BN_value_one();
          v13 = 0;
          if ( BN_mod_mul_montgomery(v44, v26, v40, v47, a7) == 0 )
            goto LABEL_29;
          v27 = v37;
          if ( SHIDWORD(v37) >= (int)v37 )
            v27 = HIDWORD(v37);
          if ( v27 <= 0 )
          {
LABEL_93:
            v13 = BN_from_montgomery(a1, v44, v47, v9) != 0;
            goto LABEL_29;
          }
          v38 = v27 - 2;
          v43 = v27 - v49;
          v54 = nullptr;
          v28 = 0;
          v46 = 1;
          v52 = 0;
          v50 = v49 - v48;
          v29 = 0;
          while ( 1 )
          {
            v39 = v38 + 1;
            if ( v29 != 0 )
            {
              v41 = v38 + 1 == (uint32_t)(uintptr_t)(v54);
            }
            else
            {
              v41 = false;
              if ( BN_is_bit_set(a3, v39) != 0 )
              {
                for ( i = v43 + v50; BN_is_bit_set(a3, i) == 0; ++i )
                  ;
                v29 = 1;
                if ( i > v38 )
                {
                  v54 = (uint32_t *)i;
                  v41 = i == v39;
                }
                else
                {
                  v42 = v28;
                  v31 = v38;
                  do
                    v29 = 2 * v29 - ((BN_is_bit_set(a3, v31--) == 0) - 1);
                  while ( i <= v31 );
                  v28 = v42;
                  v54 = (uint32_t *)i;
                  v41 = i == v39 && v29 != 0;
                }
              }
            }
            if ( v28 == 0 && BN_is_bit_set(a5, v39) != 0 )
            {
              for ( j = v43; BN_is_bit_set(a5, j) == 0; ++j )
                ;
              v52 = j;
              v28 = 1;
              if ( v38 >= j )
              {
                v53 = v29;
                v33 = v38;
                do
                  v28 = 2 * v28 - ((BN_is_bit_set(a5, v33--) == 0) - 1);
                while ( v33 >= j );
                v29 = v53;
                v52 = j;
              }
            }
            if ( v41 )
            {
              if ( BN_mod_mul_montgomery(v44, v44, v55[v29 >> 1], v47, a7) == 0 )
                goto LABEL_78;
              v46 = 0;
              v29 = 0;
            }
            if ( v52 == v39 && v28 != 0 )
              break;
LABEL_65:
            if ( v38 == -1 )
            {
              v9 = a7;
              goto LABEL_93;
            }
            if ( v46 == 0 && BN_mod_mul_montgomery(v44, v44, v44, v47, a7) == 0 )
            {
LABEL_78:
              v9 = a7;
              v13 = 0;
              goto LABEL_29;
            }
            --v38;
            --v43;
          }
          if ( BN_mod_mul_montgomery(v44, v44, v56[v28 >> 1], v47, a7) != 0 )
          {
            v46 = 0;
            v28 = 0;
            goto LABEL_65;
          }
          v9 = a7;
          v13 = 0;
LABEL_29:
          if ( a8 == nullptr )
LABEL_30:
            BN_MONT_CTX_free(v47);
LABEL_34:
          BN_CTX_end(v9);
          return v13;
        }
      }
      v13 = 1;
      BN_set_word(a1, 0);
      goto LABEL_29;
    }
  }
  v13 = 0;
  goto LABEL_34;
}

// ----------------------------------------------------------------------------
// Function: BN_gcd  (binary VA: 0x1a021b0)
// Original: BN_gcd
// ----------------------------------------------------------------------------
bool BN_gcd(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int *v4;
  int *v5;
  bool v6;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  int v13;

  BN_CTX_start((int)(uintptr_t)(a4));
  v4 = (int *)BN_CTX_get(a4);
  v5 = (int *)BN_CTX_get(a4);
  if ( v5 == nullptr || v4 == nullptr )
    goto LABEL_2;
  v12 = v5;
  v6 = false;
  if ( BN_copy(v4, a2) != nullptr && BN_copy(v12, a3) != nullptr )
  {
    v4[3] = 0;
    v12[3] = 0;
    if ( BN_cmp(v4, v12) < 0 )
    {
      v8 = v4;
      v4 = v12;
    }
    else
    {
      v8 = v12;
    }
    v13 = 0;
    while ( 1 )
    {
      v9 = v8[1];
      if ( v9 == 0 )
      {
        if ( v13 == 0 || BN_lshift(v4, v4, v13) != 0 )
        {
          v6 = BN_copy(a1, v4) != nullptr;
          break;
        }
LABEL_2:
        v6 = false;
        break;
      }
      if ( v4[1] > 0 && (*(uint8_t *)*v4 & 1) != 0 )
      {
        if ( v9 <= 0 || (*(uint8_t *)*v8 & 1) == 0 )
        {
          if ( BN_rshift1(v8, v8) == 0 )
            goto LABEL_2;
          goto LABEL_16;
        }
        LOBYTE(v11) = BN_sub((int)(uintptr_t)(v4), v4, v8);
        if ( v11 == 0 )
          goto LABEL_2;
LABEL_25:
        if ( BN_rshift1(v4, v4) == 0 )
          goto LABEL_2;
LABEL_16:
        if ( BN_cmp(v4, v8) < 0 )
        {
          v10 = v4;
          v4 = v8;
          v8 = v10;
        }
      }
      else
      {
        if ( v9 > 0 && (*(uint8_t *)*v8 & 1) != 0 )
          goto LABEL_25;
        if ( BN_rshift1(v4, v4) == 0 || BN_rshift1(v8, v8) == 0 )
          goto LABEL_2;
        ++v13;
      }
    }
  }
  BN_CTX_end(a4);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_inverse  (binary VA: 0x1a02390)
// Original: BN_mod_inverse
// ----------------------------------------------------------------------------
void ** BN_mod_inverse(void **a1, int a2, int a3, int *a4)
{
  int *v4;
  int *v5;
  int *v6;
  uint8_t *v7;
  int *v8;
  uint32_t *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int *v15;
  int *v16;
  int v17;
  void **v18;
  int **v20;
  int *v21;
  uint32_t *v22;
  int v23;
  int *v24;
  int **v25;
  int **v26;
  int *v27;
  int v28;
  int **v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int *v36;
  int v37;
  int v38;
  typedef int64_t _g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int **_g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int **_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  typedef uint8_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef void **_g4_t_v56;
  typedef int *_g4_t_v57;
  typedef void **_g4_t_v58;
  typedef int *_g4_t_v59;
  typedef g4_int128_t _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef uint32_t _g4_t_v62[4];
  typedef unsigned int _g4_t_v63;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v40)) > _g4_s1 ? (32u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v41)) > _g4_s2 ? (32u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v42)) > _g4_s3 ? (32u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v43)) > _g4_s4 ? (32u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v44)) > _g4_s5 ? (36u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v45)) > _g4_s6 ? (36u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v46)) > _g4_s7 ? (40u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v47)) > _g4_s8 ? (40u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v48)) > _g4_s9 ? (44u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v49)) > _g4_s10 ? (44u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v50)) > _g4_s11 ? (44u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v51)) > _g4_s12 ? (48u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v52)) > _g4_s13 ? (48u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v53)) > _g4_s14 ? (48u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v54)) > _g4_s15 ? (52u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v55)) > _g4_s16 ? (52u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v56)) > _g4_s17 ? (56u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v57)) > _g4_s18 ? (56u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v58)) > _g4_s19 ? (64u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v59)) > _g4_s20 ? (68u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v60)) > _g4_s21 ? (80u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v61)) > _g4_s22 ? (96u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v62)) > _g4_s23 ? (100u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v63)) > _g4_s24 ? (116u + sizeof(_g4_t_v63)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);

  v4 = a4;
  if ( (*(uint8_t *)(a2 + 16) & 4) != 0 || (*(uint8_t *)(a3 + 16) & 4) != 0 )
  {
    BN_CTX_start((int)(uintptr_t)(a4));
    v5 = (int *)BN_CTX_get(a4);
    v40 = (int *)BN_CTX_get(a4);
    v44 = (int *)BN_CTX_get(a4);
    v51 = BN_CTX_get(a4);
    v6 = (int *)BN_CTX_get(a4);
    v46 = (int *)BN_CTX_get(a4);
    v7 = BN_CTX_get(a4);
    v8 = v40;
    if ( v7 == nullptr )
    {
      v56 = nullptr;
      goto LABEL_19;
    }
    v56 = a1;
    if ( a1 == nullptr )
    {
      v56 = (void **)BN_new();
      v8 = v40;
      if ( v56 == nullptr )
        goto LABEL_31;
    }
    v41 = v8;
    BN_set_word(v44, 1);
    BN_set_word(v46, 0);
    if ( BN_copy(v41, (uint32_t *)a2) == nullptr )
      goto LABEL_19;
    v9 = BN_copy(v5, (uint32_t *)a3);
    v10 = v41;
    if ( v9 == nullptr )
      goto LABEL_19;
    v5[3] = 0;
    v11 = v41[3];
    if ( v11 == 0 )
    {
      v12 = BN_ucmp(v41, v5);
      v10 = v41;
      if ( v12 < 0 )
      {
LABEL_11:
        if ( v10[1] != 0 )
        {
          v54 = -1;
          v14 = v10;
          while ( 1 )
          {
            v17 = v5[4];
            v60 = *(g4_int128_t *)v5;
            v61 = v17 & 0xFFFFFFFE | v61 & 1 | 6;
            LODWORD(v39) = (uint32_t)(uintptr_t)(&v60);
            HIDWORD(v39) = (uint32_t)(uintptr_t)(v14);
            if ( BN_div(v51, v6, v39, a4) == 0 || BN_mul(v5, v51, v44, a4) == 0 || BN_add((int)(uintptr_t)(v5), v5, v46) == 0 )
            {
              v4 = a4;
              goto LABEL_19;
            }
            v54 = -v54;
            if ( v6[1] == 0 )
              break;
            v15 = v5;
            v16 = v44;
            v5 = v14;
            v44 = v15;
            v14 = v6;
            v6 = v46;
            v46 = v16;
          }
          v31 = v14;
          v4 = a4;
          if ( v54 != -1 )
          {
LABEL_64:
            if ( v31[1] != 1 || *(uint32_t *)*v31 != 1 || v31[3] != 0 )
            {
              ERR_put_error(3, 139, 108, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_19;
            }
            if ( v44[3] != 0 || BN_ucmp(v44, (uint32_t *)a3) >= 0 )
            {
              if ( BN_nnmod(v56, v44, a3, v4) == 0 )
                goto LABEL_19;
            }
            else if ( BN_copy(v56, v44) == nullptr )
            {
              goto LABEL_19;
            }
            v18 = v56;
            goto LABEL_20;
          }
        }
        else
        {
          v31 = v5;
          v44 = v46;
        }
        v43 = v31;
        LOBYTE(v34) = BN_sub((int)(uintptr_t)(v44), (int *)a3, v44);
        v31 = v43;
        if ( v34 != 0 )
          goto LABEL_64;
LABEL_19:
        v18 = nullptr;
        if ( a1 != nullptr )
          goto LABEL_20;
LABEL_31:
        v18 = nullptr;
        BN_free(v56);
        goto LABEL_20;
      }
      v11 = v41[3];
    }
    v62[0] = *v10;
    v62[1] = v10[1];
    v62[2] = v10[2];
    v62[3] = v11;
    v42 = v10;
    v63 = v10[4] & 0xFFFFFFFE | v63 & 1 | 6;
    v13 = BN_nnmod(v10, v62, v5, a4);
    v10 = v42;
    if ( v13 == 0 )
      goto LABEL_19;
    goto LABEL_11;
  }
  BN_CTX_start((int)(uintptr_t)(a4));
  v20 = (int **)BN_CTX_get(a4);
  v21 = (int *)BN_CTX_get(a4);
  v52 = BN_CTX_get(a4);
  v45 = (int **)BN_CTX_get(a4);
  v59 = (int *)BN_CTX_get(a4);
  v47 = (int *)BN_CTX_get(a4);
  v57 = (int *)BN_CTX_get(a4);
  if ( v57 == nullptr )
  {
    v58 = nullptr;
    goto LABEL_28;
  }
  v58 = a1;
  if ( a1 == nullptr )
  {
    v58 = (void **)BN_new();
    if ( v58 == nullptr )
      goto LABEL_29;
  }
  BN_set_word(v52, 1);
  BN_set_word(v47, 0);
  if ( BN_copy(v21, (uint32_t *)a2) == nullptr || BN_copy(v20, (uint32_t *)a3) == nullptr )
    goto LABEL_28;
  v20[3] = nullptr;
  if ( (v21[3] != 0 || BN_ucmp(v21, v20) >= 0) && BN_nnmod(v21, v21, v20, a4) == 0 )
    goto LABEL_28;
  if ( *(int *)(a3 + 4) > 0 && (**(uint8_t **)a3 & 1) != 0 && BN_num_bits((uint32_t *)a3) <= 2048 )
  {
    v48 = v20;
    v22 = (uint32_t *)(v52);
    while ( v21[1] != 0 )
    {
      v23 = 0;
      while ( BN_is_bit_set(v21, v23) == 0 )
      {
        ++v23;
        if ( (int)v22[1] > 0 && (*(uint8_t *)*v22 & 1) != 0 && BN_uadd((int)(uintptr_t)(v22), v22, (uint32_t *)a3) == 0
          || BN_rshift1(v22, v22) == 0 )
        {
          goto LABEL_43;
        }
      }
      if ( v23 != 0 && BN_rshift(v21, v21, v23) == 0 )
        goto LABEL_43;
      v53 = v22;
      v36 = v21;
      v37 = 0;
      while ( BN_is_bit_set(v48, v37) == 0 )
      {
        ++v37;
        if ( v47[1] > 0 && (*(uint8_t *)*v47 & 1) != 0 && BN_uadd((int)(uintptr_t)(v47), v47, (uint32_t *)a3) == 0
          || BN_rshift1(v47, v47) == 0 )
        {
          goto LABEL_43;
        }
      }
      v38 = v37;
      v21 = v36;
      v22 = v53;
      if ( v38 != 0 && BN_rshift(v48, v48, v38) == 0 )
      {
LABEL_43:
        v4 = a4;
        goto LABEL_28;
      }
      if ( BN_ucmp(v21, v48) < 0 )
      {
        if ( BN_uadd((int)(uintptr_t)(v47), v47, v53) == 0 || BN_usub(v48, (int)(uintptr_t)(v48), v21) == 0 )
          goto LABEL_43;
      }
      else if ( BN_uadd((int)(uintptr_t)(v53), v53, v47) == 0 || BN_usub((int **)v21, (int)(uintptr_t)(v21), (int *)v48) == 0 )
      {
        goto LABEL_43;
      }
    }
    v20 = v48;
    v4 = a4;
LABEL_105:
    LOBYTE(v35) = BN_sub((int)(uintptr_t)(v47), (int *)a3, v47);
    if ( v35 != 0 )
      goto LABEL_101;
    goto LABEL_28;
  }
  if ( v21[1] == 0 )
    goto LABEL_105;
  v55 = -1;
  v24 = v59;
  while ( 1 )
  {
    v50 = BN_num_bits(v20);
    if ( v50 == BN_num_bits(v21) )
      goto LABEL_54;
    v49 = BN_num_bits(v20);
    if ( v49 != BN_num_bits(v21) + 1 )
    {
      if ( BN_div(v45, v24, __SPAIR64__((unsigned int)(uintptr_t)(v21), (unsigned int)(uintptr_t)(v20)), a4) == 0 )
        goto LABEL_84;
      goto LABEL_48;
    }
    if ( BN_lshift1(v57, v21) == 0 )
      goto LABEL_84;
    if ( BN_ucmp(v20, v57) >= 0 )
    {
      LOBYTE(v32) = BN_sub((int)(uintptr_t)(v24), (int *)v20, v57);
      if ( v32 == 0 || BN_add((int)(uintptr_t)(v45), v57, v21) == 0 )
      {
LABEL_84:
        v4 = a4;
        goto LABEL_28;
      }
      if ( BN_ucmp(v20, v45) < 0 )
      {
        if ( BN_set_word(v45, 2) == 0 )
          goto LABEL_84;
      }
      else
      {
        if ( BN_set_word(v45, 3) == 0 )
          goto LABEL_84;
        LOBYTE(v33) = BN_sub((int)(uintptr_t)(v24), v24, v21);
        if ( v33 == 0 )
          goto LABEL_84;
      }
LABEL_48:
      v25 = v45;
      if ( v45[1] != (int *)((char *)&dword_0 + 1) )
        goto LABEL_49;
      goto LABEL_57;
    }
LABEL_54:
    if ( BN_set_word(v45, 1) == 0 )
      goto LABEL_84;
    LOBYTE(v28) = BN_sub((int)(uintptr_t)(v24), (int *)v20, v21);
    if ( v28 == 0 )
      goto LABEL_84;
    v25 = v45;
    if ( v45[1] != (int *)((char *)&dword_0 + 1) )
    {
LABEL_49:
      if ( BN_mul(v20, v45, v52, a4) == 0 )
        goto LABEL_84;
LABEL_50:
      if ( BN_add((int)(uintptr_t)(v20), (int *)v20, v47) == 0 )
        goto LABEL_84;
      goto LABEL_51;
    }
LABEL_57:
    v29 = v25;
    v30 = **v25;
    if ( v30 != 1 )
    {
      if ( v30 == 2 )
      {
        if ( v45[3] == nullptr )
        {
          if ( BN_lshift1(v20, v52) == 0 )
            goto LABEL_84;
          goto LABEL_50;
        }
      }
      else if ( v30 == 4 && v45[3] == nullptr )
      {
        if ( BN_lshift(v20, v52, 2) == 0 )
          goto LABEL_84;
        goto LABEL_50;
      }
LABEL_60:
      if ( BN_copy(v20, v52) == nullptr || BN_mul_word(v20, **v45) == 0 )
        goto LABEL_84;
      goto LABEL_50;
    }
    if ( v29[3] != nullptr )
      goto LABEL_60;
    if ( BN_add((int)(uintptr_t)(v20), (int *)v52, v47) == 0 )
      goto LABEL_84;
LABEL_51:
    v55 = -v55;
    if ( v24[1] == 0 )
      break;
    v26 = v20;
    v27 = (int *)v52;
    v20 = (int **)v21;
    v52 = (uint8_t *)(v26);
    v21 = v24;
    v24 = v47;
    v47 = v27;
  }
  v4 = a4;
  v47 = (int *)v52;
  v20 = (int **)v21;
  if ( v55 == -1 )
    goto LABEL_105;
LABEL_101:
  if ( v20[1] != (int *)((char *)&dword_0 + 1) || **v20 != 1 || v20[3] != nullptr )
  {
    ERR_put_error(3, 110, 108, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_28;
  }
  if ( v47[3] != 0 || BN_ucmp(v47, (uint32_t *)a3) >= 0 )
  {
    if ( BN_nnmod(v58, v47, a3, v4) != 0 )
      goto LABEL_120;
LABEL_28:
    v18 = nullptr;
    if ( a1 == nullptr )
    {
LABEL_29:
      v18 = nullptr;
      BN_free(v58);
    }
  }
  else
  {
    if ( BN_copy(v58, v47) == nullptr )
      goto LABEL_28;
LABEL_120:
    v18 = v58;
  }
LABEL_20:
  BN_CTX_end(v4);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: BN_kronecker  (binary VA: 0x1a02ee0)
// Original: BN_kronecker
// ----------------------------------------------------------------------------
int BN_kronecker(uint32_t *a1, uint32_t *a2, int *a3)
{
  int **v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int *v10;
  int v11;
  int **v12;
  int v13;
  int v14;
  int **v15;
  int v16;
  int v17;

  BN_CTX_start((int)(uintptr_t)(a3));
  v3 = (int **)BN_CTX_get(a3);
  v15 = (int **)BN_CTX_get(a3);
  if ( v15 == nullptr )
  {
    v16 = -2;
LABEL_10:
    BN_CTX_end(a3);
    return v16;
  }
  if ( BN_copy(v3, a1) != nullptr && BN_copy(v15, a2) != nullptr )
  {
    v5 = (int)(uintptr_t)(v15[1]);
    if ( v5 == 0 )
    {
      v16 = 0;
      if ( v3[1] == (int *)((char *)&dword_0 + 1) )
        v16 = **v3 == 1;
      goto LABEL_10;
    }
    if ( (int)(uintptr_t)(v3[1]) <= 0 || (v6 = 0, (*(uint8_t *)*v3 & 1) == 0) )
    {
      if ( v5 <= 0 )
      {
LABEL_45:
        v16 = 0;
        goto LABEL_10;
      }
      v6 = 0;
      v16 = 0;
      if ( (*(uint8_t *)*v15 & 1) == 0 )
        goto LABEL_10;
    }
    while ( BN_is_bit_set(v15, v6) == 0 )
      ++v6;
    if ( BN_rshift(v15, v15, v6) != 0 )
    {
      v17 = 1;
      if ( (v6 & 1) != 0 )
      {
        v7 = 0;
        if ( v3[1] != nullptr )
          v7 = **v3 & 7;
        v17 = dword_1D2F320[v7];
      }
      if ( v15[3] != nullptr )
      {
        v15[3] = nullptr;
        v8 = -v17;
        if ( v3[3] == nullptr )
          v8 = v17;
        v17 = v8;
      }
      if ( v3[1] != nullptr )
      {
        while ( 1 )
        {
          for ( i = 0; BN_is_bit_set(v3, i) == 0; ++i )
            ;
          if ( BN_rshift(v3, v3, i) == 0 )
            goto LABEL_3;
          if ( (i & 1) != 0 )
          {
            v10 = v15[1];
            v13 = 0;
            if ( v10 != nullptr )
              v13 = **v15 & 7;
            v17 *= dword_1D2F320[v13];
          }
          else
          {
            v10 = v15[1];
          }
          if ( v3[3] != nullptr )
          {
            v11 = -1;
            if ( v3[1] != nullptr )
              v11 = ~**v3;
          }
          else
          {
            v11 = 0;
            if ( v3[1] != nullptr )
              v11 = **v3;
          }
          if ( v10 != nullptr && (**v15 & v11 & 2) != 0 )
            v17 = -v17;
          if ( BN_nnmod(v15, v15, v3, a3) == 0 )
            goto LABEL_3;
          v3[3] = nullptr;
          if ( v15[1] == nullptr )
          {
            v15 = v3;
            break;
          }
          v12 = v3;
          v3 = v15;
          v15 = v12;
        }
      }
      if ( v15[1] == (int *)((char *)&dword_0 + 1) && **v15 == 1 )
      {
        v14 = 0;
        if ( v15[3] == nullptr )
          v14 = v17;
        v16 = v14;
        goto LABEL_10;
      }
      goto LABEL_45;
    }
  }
LABEL_3:
  BN_CTX_end(a3);
  return -2;
}

// ----------------------------------------------------------------------------
// Function: BN_nnmod  (binary VA: 0x1a031d0)
// Original: BN_nnmod
// ----------------------------------------------------------------------------
int BN_nnmod(uint32_t *a1, int64_t a2, int *a3)
{
  int v3;
  int v4;
  void *v5;

  v3 = BN_div(nullptr, a1, a2, a3);
  v4 = 0;
  if ( v3 != 0 )
  {
    LOBYTE(v4) = 1;
    if ( a1[3] != 0 )
    {
      v5 = (void *)(((int (*)(int, int *, int *))BN_add));
      if ( *(uint32_t *)(HIDWORD(a2) + 12) != 0 )
        v5 = (void *)(((char (*)(int, int *, int *))BN_sub));
      return ((int (*)(uint32_t *, uint32_t *, uint32_t))v5)(a1, a1, HIDWORD(a2));
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_add  (binary VA: 0x1a03260)
// Original: BN_mod_add
// ----------------------------------------------------------------------------
int BN_mod_add(uint32_t *a1, int *a2, int *a3, unsigned int a4, int *a5)
{
  int v5;
  int v6;

  v5 = BN_add((int)(uintptr_t)(a1), a2, a3);
  v6 = 0;
  if ( v5 != 0 )
    return BN_nnmod(a1, __SPAIR64__(a4, (unsigned int)(uintptr_t)(a1)), a5);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_add_quick  (binary VA: 0x1a032d0)
// Original: BN_mod_add_quick
// ----------------------------------------------------------------------------
int BN_mod_add_quick(int **a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  int v7;

  v4 = BN_uadd((int)(uintptr_t)(a1), a2, a3);
  v5 = 0;
  if ( v4 != 0 )
  {
    v7 = BN_ucmp(a1, a4);
    v5 = 1;
    if ( v7 >= 0 )
      return BN_usub(a1, (int)(uintptr_t)(a1), a4);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_sub  (binary VA: 0x1a03360)
// Original: BN_mod_sub
// ----------------------------------------------------------------------------
int BN_mod_sub(uint32_t *a1, int *a2, int *a3, unsigned int a4, int *a5)
{
  int v5;
  int v6;

  LOBYTE(v5) = BN_sub((int)(uintptr_t)(a1), a2, a3);
  v6 = 0;
  if ( v5 != 0 )
    return BN_nnmod(a1, __SPAIR64__(a4, (unsigned int)(uintptr_t)(a1)), a5);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_sub_quick  (binary VA: 0x1a033d0)
// Original: BN_mod_sub_quick
// ----------------------------------------------------------------------------
int BN_mod_sub_quick(int *a1, int *a2, int *a3, int *a4)
{
  int v4;
  int v5;

  LOBYTE(v4) = BN_sub((int)(uintptr_t)(a1), a2, a3);
  v5 = 0;
  if ( v4 != 0 && (LOBYTE(v5) = 1, a1[3] != 0) )
    return BN_add((int)(uintptr_t)(a1), a1, a4);
  else
    return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_mul  (binary VA: 0x1a03450)
// Original: BN_mod_mul
// ----------------------------------------------------------------------------
bool BN_mod_mul(uint32_t *a1, int a2, int a3, unsigned int a4, int *a5)
{
  uint8_t *v5;
  uint8_t *v6;
  bool v8;

  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = BN_CTX_get(a5);
  v6 = v5;
  v8 = false;
  if ( v5 != nullptr )
  {
    if ( a2 == a3 )
    {
      if ( BN_sqr(v5, a2, a5) == 0 )
        goto LABEL_5;
      goto LABEL_4;
    }
    if ( BN_mul(v5, a2, a3, a5) != 0 )
LABEL_4:
      v8 = BN_nnmod(a1, __SPAIR64__(a4, (unsigned int)(uintptr_t)(v6)), a5) != 0;
  }
LABEL_5:
  BN_CTX_end(a5);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_sqr  (binary VA: 0x1a03520)
// Original: BN_mod_sqr
// ----------------------------------------------------------------------------
int BN_mod_sqr(uint32_t *a1, int a2, unsigned int a3, int *a4)
{
  int v4;
  int v5;

  v4 = BN_sqr(a1, a2, a4);
  v5 = 0;
  if ( v4 != 0 )
    return BN_div(nullptr, a1, __SPAIR64__(a3, (unsigned int)(uintptr_t)(a1)), a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_lshift1  (binary VA: 0x1a035a0)
// Original: BN_mod_lshift1
// ----------------------------------------------------------------------------
int BN_mod_lshift1(uint32_t *a1, int a2, unsigned int a3, int *a4)
{
  int v4;
  int v5;

  v4 = BN_lshift1(a1, a2);
  v5 = 0;
  if ( v4 != 0 )
    return BN_nnmod(a1, __SPAIR64__(a3, (unsigned int)(uintptr_t)(a1)), a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_lshift1_quick  (binary VA: 0x1a03600)
// Original: BN_mod_lshift1_quick
// ----------------------------------------------------------------------------
int BN_mod_lshift1_quick(int *a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v6;
  int v7;

  v3 = BN_lshift1(a1, a2);
  v4 = 0;
  if ( v3 != 0 )
  {
    v6 = BN_cmp(a1, a3);
    v4 = 1;
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = BN_sub((int)(uintptr_t)(a1), a1, a3);
      return v7;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_lshift_quick  (binary VA: 0x1a03680)
// Original: BN_mod_lshift_quick
// ----------------------------------------------------------------------------
int BN_mod_lshift_quick(int *a1, int *a2, int a3, int *a4)
{
  int v5;
  int v6;
  int v7;

  if ( a1 != a2 && BN_copy(a1, a2) == nullptr )
    return 0;
  while ( 1 )
  {
    if ( a3 <= 0 )
      return 1;
    v5 = BN_num_bits(a4);
    v6 = v5 - BN_num_bits(a1);
    if ( v6 < 0 )
      break;
    if ( v6 > a3 )
    {
      v6 = a3;
LABEL_13:
      if ( BN_lshift(a1, a1, v6) == 0 )
        return 0;
      a3 -= v6;
      goto LABEL_9;
    }
    if ( v6 != 0 )
      goto LABEL_13;
    if ( BN_lshift1(a1, a1) == 0 )
      return 0;
    --a3;
LABEL_9:
    if ( BN_cmp(a1, a4) >= 0 )
    {
      LOBYTE(v7) = BN_sub((int)(uintptr_t)(a1), a1, a4);
      if ( v7 == 0 )
        return 0;
    }
  }
  ERR_put_error(3, 119, 110, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_lshift  (binary VA: 0x1a037b0)
// Original: BN_mod_lshift
// ----------------------------------------------------------------------------
int BN_mod_lshift(int *a1, unsigned int a2, int a3, int *a4, int *a5)
{
  int v5;
  int *v7;
  void **v8;

  v5 = 0;
  if ( BN_nnmod(a1, __SPAIR64__((unsigned int)(uintptr_t)(a4), a2), a5) != 0 )
  {
    if ( a4[3] != 0 )
    {
      v7 = (int *)BN_dup(a4);
      v8 = (void **)v7;
      if ( v7 != nullptr )
      {
        v7[3] = 0;
        v5 = BN_mod_lshift_quick(a1, a1, a3, v7);
        BN_free(v8);
      }
    }
    else
    {
      return BN_mod_lshift_quick(a1, a1, a3, a4);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_mul_montgomery  (binary VA: 0x1a03c50)
// Original: BN_mod_mul_montgomery
// ----------------------------------------------------------------------------
bool BN_mod_mul_montgomery(unsigned int *a1, int a2, int a3, uint32_t *a4, int *a5)
{
  unsigned int **v5;
  unsigned int **v6;
  bool v8;

  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = (unsigned int **)BN_CTX_get(a5);
  v6 = v5;
  v8 = false;
  if ( v5 != nullptr )
  {
    if ( a2 == a3 )
    {
      if ( BN_sqr(v5, a2, a5) == 0 )
        goto LABEL_5;
      goto LABEL_4;
    }
    if ( BN_mul(v5, a2, a3, a5) != 0 )
LABEL_4:
      v8 = sub_1A03880(a1, v6, a4) != 0;
  }
LABEL_5:
  BN_CTX_end(a5);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: BN_from_montgomery  (binary VA: 0x1a03d10)
// Original: BN_from_montgomery
// ----------------------------------------------------------------------------
int BN_from_montgomery(unsigned int *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  unsigned int **v5;

  BN_CTX_start((int)(uintptr_t)(a4));
  v4 = 0;
  v5 = (unsigned int **)BN_CTX_get(a4);
  if ( v5 != nullptr && BN_copy(v5, a2) != nullptr )
    v4 = sub_1A03880(a1, v5, a3);
  BN_CTX_end(a4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_MONT_CTX_init  (binary VA: 0x1a03da0)
// Original: BN_MONT_CTX_init
// ----------------------------------------------------------------------------
uint32_t * BN_MONT_CTX_init(uint32_t *a1)
{
  uint32_t *result;

  *a1 = 0;
  BN_init(a1 + 1);
  BN_init(a1 + 6);
  result = BN_init(a1 + 11);
  a1[17] = 0;
  a1[16] = 0;
  a1[18] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_MONT_CTX_new  (binary VA: 0x1a03e10)
// Original: BN_MONT_CTX_new
// ----------------------------------------------------------------------------
uint8_t * BN_MONT_CTX_new()
{
  uint8_t *v0;
  uint8_t *v1;

  v0 = CRYPTO_malloc(76, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = v0;
  if ( v0 != nullptr )
  {
    BN_MONT_CTX_init(v0);
    *((uint32_t *)v1 + 18) = 1;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BN_MONT_CTX_free  (binary VA: 0x1a03e70)
// Original: BN_MONT_CTX_free
// ----------------------------------------------------------------------------
void BN_MONT_CTX_free(void **a1)
{
  if ( a1 != nullptr )
  {
    BN_free(a1 + 1);
    BN_free(a1 + 6);
    BN_free(a1 + 11);
    if ( ((uint8_t)(uintptr_t)(a1)[18] & 1) != 0 )
      CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: BN_MONT_CTX_set  (binary VA: 0x1a03ee0)
// Original: BN_MONT_CTX_set
// ----------------------------------------------------------------------------
bool BN_MONT_CTX_set(unsigned int *a1, int **a2, int *a3)
{
  void **v3;
  int v4;
  int v5;
  int v6;
  int v8;
  unsigned int v9;
  typedef uint32_t *_g4_t_v10;
  typedef bool _g4_t_v11;
  typedef uint32_t _g4_t_v12[2];
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  BN_CTX_start((int)(uintptr_t)(a3));
  v3 = (void **)BN_CTX_get(a3);
  v11 = false;
  if ( v3 != nullptr && BN_copy(a1 + 6, a2) != nullptr )
  {
    a1[9] = 0;
    v10 = a1 + 1;
    BN_init(v13);
    v13[0] = (uint32_t)(uintptr_t)(v12);
    v13[2] = 2;
    v13[3] = 0;
    v4 = BN_num_bits(a2);
    v5 = v4 + 62;
    v6 = v4 + 31;
    if ( v6 < 0 )
      v6 = v5;
    *a1 = v6 & 0xFFFFFFE0;
    BN_set_word(v10, 0);
    if ( BN_set_bit(v10, 32) != 0 )
    {
      v8 = **a2;
      v12[1] = 0;
      v12[0] = v8;
      v13[1] = v8 != 0;
      if ( BN_mod_inverse(v3, (int)(uintptr_t)(v10), (int)(uintptr_t)(v13), a3) != nullptr && BN_lshift(v3, v3, 32) != 0 )
      {
        if ( v3[1] != nullptr )
        {
          if ( BN_sub_word(v3, 1) == 0 )
            goto LABEL_6;
        }
        else if ( BN_set_word(v3, -1) == 0 )
        {
          goto LABEL_6;
        }
        v11 = false;
        if ( BN_div(v3, nullptr, __SPAIR64__(v13, (unsigned int)(uintptr_t)(v3)), a3) != 0 )
        {
          v9 = 0;
          if ( (int)(uintptr_t)(v3[1]) > 0 )
            v9 = *(uint32_t *)*v3;
          a1[16] = v9;
          a1[17] = 0;
          BN_set_word(v10, 0);
          v11 = false;
          if ( BN_set_bit(v10, 2 * *a1) != 0 )
            v11 = BN_div(nullptr, v10, __SPAIR64__((unsigned int)(uintptr_t)(a1 + 6), (unsigned int)(uintptr_t)(v10)), a3) != 0;
        }
      }
    }
  }
LABEL_6:
  BN_CTX_end(a3);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: BN_MONT_CTX_copy  (binary VA: 0x1a04140)
// Original: BN_MONT_CTX_copy
// ----------------------------------------------------------------------------
uint32_t * BN_MONT_CTX_copy(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;

  v2 = a1;
  if ( a1 != a2 )
  {
    if ( BN_copy(a1 + 1, a2 + 1) != nullptr
      && BN_copy(a1 + 6, a2 + 6) != nullptr
      && BN_copy(a1 + 11, a2 + 11) != nullptr )
    {
      *a1 = *a2;
      a1[16] = a2[16];
      a1[17] = a2[17];
    }
    else
    {
      return nullptr;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: BN_MONT_CTX_set_locked  (binary VA: 0x1a041e0)
// Original: BN_MONT_CTX_set_locked
// ----------------------------------------------------------------------------
void ** BN_MONT_CTX_set_locked(void ***a1, int a2, int **a3, int *a4)
{
  void **v4;
  unsigned int *v6;

  CRYPTO_lock(5, a2, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = *a1;
  if ( *a1 != nullptr )
  {
    CRYPTO_lock(6, a2, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    CRYPTO_lock(6, a2, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_lock(9, a2, (int)(uintptr_t)(&unk_1B15112), 0);
    v4 = *a1;
    if ( *a1 == nullptr )
    {
      v6 = (unsigned int *)BN_MONT_CTX_new();
      v4 = (void **)v6;
      if ( v6 != nullptr && !BN_MONT_CTX_set(v6, a3, a4) )
      {
        BN_MONT_CTX_free(v4);
        v4 = *a1;
      }
      else
      {
        *a1 = v4;
      }
    }
    CRYPTO_lock(10, a2, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: BN_mul  (binary VA: 0x1a05bd0)
// Original: BN_mul
// ----------------------------------------------------------------------------
int BN_mul(uint32_t *a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int i;
  int v9;
  unsigned int **v12;
  char v13;
  int v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;
  unsigned int **v24;

  v4 = *(uint32_t *)(a2 + 4);
  v5 = *(uint32_t *)(a3 + 4);
  if ( v5 == 0 || v4 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  BN_CTX_start((int)(uintptr_t)(a4));
  if ( a1 != (uint32_t *)a3 && (v6 = (int)(uintptr_t)(a1), a1 != (uint32_t *)a2)
    || (v15 = BN_CTX_get(a4), v9 = 0, v6 = (int)(uintptr_t)(v15), v15 != nullptr) )
  {
    *(uint32_t *)(v6 + 12) = *(uint32_t *)(a2 + 12) ^ *(uint32_t *)(a3 + 12);
    v7 = v4 - v5;
    if ( v4 == v5 && v4 == 8 )
    {
      if ( *(int *)(v6 + 8) <= 15 && bn_expand2(v6, 16) == 0 )
      {
        v9 = 0;
        goto LABEL_18;
      }
      *(uint32_t *)(v6 + 4) = 16;
      bn_mul_comba8(*(uint32_t **)v6, *(unsigned int **)a2, *(unsigned int **)a3);
      v21 = *(uint32_t *)(v6 + 4);
    }
    else
    {
      v21 = v4 + v5;
      if ( v5 <= 15 || v4 <= 15 || (unsigned int)(v7 + 1) > 2 )
      {
        if ( v21 > *(uint32_t *)(v6 + 8) && bn_expand2(v6, v21) == 0 )
        {
          v9 = 0;
          goto LABEL_18;
        }
        *(uint32_t *)(v6 + 4) = v21;
        bn_mul_normal(*(unsigned int **)v6, *(unsigned int **)a2, v4, *(unsigned int **)a3, v5);
        v21 = *(uint32_t *)(v6 + 4);
      }
      else
      {
        if ( v7 == -1 )
          v22 = BN_num_bits_word(v5);
        else
          v22 = BN_num_bits_word(v4);
        v12 = (unsigned int **)BN_CTX_get(a4);
        v9 = 0;
        v24 = v12;
        if ( v12 == nullptr )
          goto LABEL_18;
        v13 = v22 - 1;
        v23 = 1 << v13;
        if ( v5 > 1 << v13 || v4 > v23 )
        {
          v16 = 8 * (1 << v13);
          if ( v16 > (int)(uintptr_t)(v12[2]) )
          {
            v20 = 8 * (1 << v13);
            v18 = bn_expand2((int)(uintptr_t)(v12), v20);
            v16 = v20;
            if ( v18 == 0 )
            {
              v9 = 0;
              goto LABEL_18;
            }
          }
          if ( v16 > *(uint32_t *)(v6 + 8) && bn_expand2(v6, v16) == 0 )
          {
            v9 = 0;
            goto LABEL_18;
          }
          bn_mul_part_recursive(
            *(unsigned int **)v6,
            *(unsigned int **)a2,
            *(unsigned int **)a3,
            v23,
            v4 - v23,
            v5 - v23,
            *v24);
        }
        else
        {
          v14 = 4 * v23;
          if ( 4 * v23 > (int)(uintptr_t)(v12[2]) )
          {
            v17 = bn_expand2((int)(uintptr_t)(v12), 4 * v23);
            v9 = 0;
            v14 = 4 * v23;
            if ( v17 == 0 )
              goto LABEL_18;
          }
          if ( v14 > *(uint32_t *)(v6 + 8) && bn_expand2(v6, v14) == 0 )
          {
            v9 = 0;
            goto LABEL_18;
          }
          bn_mul_recursive(
            *(unsigned int **)v6,
            *(unsigned int **)a2,
            *(unsigned int **)a3,
            v23,
            v4 - v23,
            v5 - v23,
            *v24);
        }
        *(uint32_t *)(v6 + 4) = v21;
      }
    }
    if ( v21 > 0 )
    {
      for ( i = v21; i != 0; --i )
      {
        if ( *(uint32_t *)(*(uint32_t *)v6 + 4 * v21 - 4 - 4 * v21 + 4 * i) != 0 )
          break;
      }
      *(uint32_t *)(v6 + 4) = i;
    }
    v9 = 1;
    if ( a1 != (uint32_t *)v6 )
    {
      BN_copy(a1, (uint32_t *)v6);
      v9 = 1;
    }
  }
LABEL_18:
  v19 = v9;
  BN_CTX_end(a4);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: BN_get0_nist_prime_192  (binary VA: 0x1a06280)
// Original: BN_get0_nist_prime_192
// ----------------------------------------------------------------------------
void ** BN_get0_nist_prime_192()
{
  return (void **)(&off_2045C38);
}

// ----------------------------------------------------------------------------
// Function: BN_get0_nist_prime_224  (binary VA: 0x1a062a0)
// Original: BN_get0_nist_prime_224
// ----------------------------------------------------------------------------
void ** BN_get0_nist_prime_224()
{
  return (void **)(&off_2045C4C);
}

// ----------------------------------------------------------------------------
// Function: BN_get0_nist_prime_256  (binary VA: 0x1a062c0)
// Original: BN_get0_nist_prime_256
// ----------------------------------------------------------------------------
void ** BN_get0_nist_prime_256()
{
  return (void **)(&off_2045C60);
}

// ----------------------------------------------------------------------------
// Function: BN_get0_nist_prime_384  (binary VA: 0x1a062e0)
// Original: BN_get0_nist_prime_384
// ----------------------------------------------------------------------------
void ** BN_get0_nist_prime_384()
{
  return (void **)(&off_2045C74);
}

// ----------------------------------------------------------------------------
// Function: BN_get0_nist_prime_521  (binary VA: 0x1a06300)
// Original: BN_get0_nist_prime_521
// ----------------------------------------------------------------------------
void ** BN_get0_nist_prime_521()
{
  return (void **)(&off_2045C88);
}

// ----------------------------------------------------------------------------
// Function: BN_nist_mod_192  (binary VA: 0x1a06320)
// Original: BN_nist_mod_192
// ----------------------------------------------------------------------------
int BN_nist_mod_192(unsigned int **a1, unsigned int **a2, int a3, int *a4)
{
  unsigned int **v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int result;
  int v9;
  unsigned int *v10;
  int i;
  unsigned int *v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  int j;
  typedef unsigned int *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef unsigned int *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[9];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v28)) > _g4_s1 ? (0u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v30)) > _g4_s3 ? (24u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v31)) > _g4_s4 ? (28u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v32)) > _g4_s5 ? (32u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v33)) > _g4_s6 ? (36u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v34)) > _g4_s7 ? (40u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v35)) > _g4_s8 ? (44u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v36)) > _g4_s9 ? (48u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v37)) > _g4_s10 ? (52u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v38)) > _g4_s11 ? (56u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v39)) > _g4_s12 ? (60u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v40)) > _g4_s13 ? (64u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v41)) > _g4_s14 ? (68u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v42)) > _g4_s15 ? (72u + sizeof(_g4_t_v42)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);

  v4 = a2;
  v5 = a2[1];
  v6 = *a2;
  if ( a2[3] != nullptr )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C38, (unsigned int)(uintptr_t)(v4)), a4);
  v7 = BN_ucmp(a2, &off_2045C9C);
  v4 = a2;
  if ( v7 >= 0 )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C38, (unsigned int)(uintptr_t)(v4)), a4);
  v9 = BN_ucmp(&off_2045C38, a2);
  if ( v9 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( v9 <= 0 )
  {
    if ( a1 == a2 )
    {
      v10 = v6;
    }
    else
    {
      if ( (int)(uintptr_t)(a1[2]) <= 5 && bn_expand2((int)(uintptr_t)(a1), 6) == 0 )
        return 0;
      v10 = *a1;
      for ( i = 0; i != 6; ++i )
        v10[i] = v6[i];
    }
    v12 = &v36;
    if ( v5 != (unsigned int *)&loc_6 )
    {
      v29 = v5;
      v13 = 0;
      v14 = (int)(uintptr_t)(v5) - 6;
      do
      {
        *(&v36 + v13) = v6[v13 + 6];
        ++v13;
      }
      while ( v13 != v14 );
      v5 = v29;
      v12 = &v36 + v13;
    }
    v15 = 12 - (uint32_t)(uintptr_t)(v5);
    if ( v5 != (unsigned int *)&byte_9[3] )
    {
      do
      {
        --v15;
        *v12++ = 0;
      }
      while ( v15 != 0 );
    }
    v30 = v36;
    v32 = v36;
    v27 = v10;
    v31 = v37;
    v33 = v37;
    v34 = 0;
    v35 = 0;
    v16 = bn_add_words(v10, v10, &v30, 6);
    v32 = v38;
    v34 = v38;
    v30 = 0;
    v31 = 0;
    v33 = v39;
    v35 = v39;
    v17 = bn_add_words(v27, v27, &v30, 6) + v16;
    v30 = v40;
    v31 = v41;
    v32 = v40;
    v33 = v41;
    v34 = v40;
    v35 = v41;
    v18 = v17 + bn_add_words(v27, v27, &v30, 6);
    v19 = -1;
    v20 = v27;
    if ( v18 > 0 )
    {
      v21 = bn_sub_words(v27, v27, &dword_1D2F3A0[6 * v18 - 6], 6);
      v20 = v27;
      v19 = -v21;
    }
    v28 = (char *)v20;
    v22 = bn_sub_words(v42, v20, dword_1D2F3A0, 6);
    v23 = (uint32_t *)((unsigned int)(uintptr_t)(v28) & v19 & -v22 | (unsigned int)(uintptr_t)(v42) & ~(v19 & -v22));
    v24 = v28 - (char *)v23;
    v25 = v23 + 6;
    do
    {
      *(uint32_t *)((char *)v23 + v24) = *v23;
      ++v23;
    }
    while ( v23 != v25 );
    a1[1] = (uint32_t *)&loc_6;
    for ( j = 6; j != 0; --j )
    {
      if ( (*a1)[j - 1] != 0 )
        break;
    }
    a1[1] = (unsigned int *)j;
    return 1;
  }
  else
  {
    result = 1;
    if ( a1 != a2 )
      return BN_copy(a1, a2) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_nist_mod_224  (binary VA: 0x1a06660)
// Original: BN_nist_mod_224
// ----------------------------------------------------------------------------
int BN_nist_mod_224(unsigned int **a1, unsigned int **a2, int a3, int *a4)
{
  unsigned int **v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int result;
  int v9;
  unsigned int *v10;
  int i;
  unsigned int *v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int *v19;
  int v20;
  int (*v21)(uint32_t *, unsigned int *, unsigned int *, int);
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  int j;
  int v28;
  unsigned int v29;
  typedef unsigned int *_g4_t_v30;
  typedef unsigned int *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef uint32_t _g4_t_v56[10];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v31)) > _g4_s1 ? (0u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v32)) > _g4_s2 ? (4u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v33)) > _g4_s3 ? (8u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v34)) > _g4_s4 ? (8u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v35)) > _g4_s5 ? (8u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v36)) > _g4_s6 ? (12u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v37)) > _g4_s7 ? (16u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v38)) > _g4_s8 ? (16u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v39)) > _g4_s9 ? (20u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v40)) > _g4_s10 ? (24u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v41)) > _g4_s11 ? (28u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v42)) > _g4_s12 ? (44u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v43)) > _g4_s13 ? (48u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v44)) > _g4_s14 ? (52u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v45)) > _g4_s15 ? (56u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v46)) > _g4_s16 ? (60u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v47)) > _g4_s17 ? (64u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v48)) > _g4_s18 ? (68u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v49)) > _g4_s19 ? (72u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v50)) > _g4_s20 ? (76u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v51)) > _g4_s21 ? (80u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v52)) > _g4_s22 ? (84u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v53)) > _g4_s23 ? (88u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v54)) > _g4_s24 ? (92u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v55)) > _g4_s25 ? (96u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v56)) > _g4_s26 ? (100u + sizeof(_g4_t_v56)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);

  v4 = a2;
  v5 = a2[1];
  v6 = *a2;
  if ( a2[3] != nullptr )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C4C, (unsigned int)(uintptr_t)(v4)), a4);
  v7 = BN_ucmp(a2, &off_2045CB0);
  v4 = a2;
  if ( v7 >= 0 )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C4C, (unsigned int)(uintptr_t)(v4)), a4);
  v9 = BN_ucmp(&off_2045C4C, a2);
  if ( v9 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( v9 <= 0 )
  {
    if ( a1 == a2 )
    {
      v10 = v6;
    }
    else
    {
      if ( (int)(uintptr_t)(a1[2]) <= 6 && bn_expand2((int)(uintptr_t)(a1), 7) == 0 )
        return 0;
      v10 = *a1;
      for ( i = 0; i != 7; ++i )
        v10[i] = v6[i];
    }
    v12 = &v49;
    if ( v5 != (unsigned int *)((char *)&loc_6 + 1) )
    {
      v37 = v5;
      v13 = 0;
      v14 = (int)(uintptr_t)(v5) - 7;
      do
      {
        *(&v49 + v13) = v6[v13 + 7];
        ++v13;
      }
      while ( v13 != v14 );
      v5 = v37;
      v12 = &v49 + v13;
    }
    v15 = 14 - (uint32_t)(uintptr_t)(v5);
    if ( v5 != (unsigned int *)&byte_9[5] )
    {
      do
      {
        --v15;
        *v12++ = 0;
      }
      while ( v15 != 0 );
    }
    v38 = v49;
    v45 = v49;
    v39 = v50;
    v46 = v50;
    v40 = v51;
    v47 = v51;
    v30 = v10;
    v41 = v52;
    v48 = v52;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v33 = bn_add_words(v10, v10, &v42, 7);
    v16 = v53;
    v46 = v54;
    v32 = v54;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = v53;
    v36 = v55;
    v47 = v55;
    v48 = 0;
    v34 = v33 + bn_add_words(v30, v30, &v42, 7);
    v42 = v38;
    v43 = v39;
    v44 = v40;
    v45 = v41;
    v47 = v32;
    v46 = v16;
    v48 = v36;
    v17 = bn_sub_words(v30, v30, &v42, 7);
    v43 = v32;
    v35 = v34 - v17;
    v44 = v36;
    v42 = v16;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v18 = bn_sub_words(v30, v30, &v42, 7);
    v19 = v30;
    v20 = v35 - v18;
    v21 = bn_sub_words;
    if ( v20 > 0 )
    {
      v28 = bn_sub_words(v30, v30, &dword_1D2F400[7 * v20 - 7], 7);
      v19 = v30;
      v22 = -v28;
      v21 = bn_sub_words;
    }
    else
    {
      v22 = -1;
      if ( v20 != 0 )
      {
        v29 = -bn_add_words(v30, v30, &dword_1D2F400[7 * ~v20], 7);
        v19 = v30;
        v21 = (int (*)(uint32_t *, unsigned int *, unsigned int *, int))((unsigned int)(uintptr_t)((int (*)(uint32_t *, uint32_t *, uint32_t *, int))bn_sub_words) & v29
                                                                             | (unsigned int)(uintptr_t)((unsigned int (*)(uint32_t *, unsigned int *, unsigned int *, int))bn_add_words) & ~v29);
        v22 = v29;
      }
    }
    v31 = v19;
    v23 = v21(v56, v19, dword_1D2F400, 7);
    v24 = (uint32_t *)((unsigned int)(uintptr_t)(v31) & v22 & -v23 | (unsigned int)(uintptr_t)(v56) & ~(v22 & -v23));
    v25 = (char *)v31 - (char *)v24;
    v26 = v24 + 7;
    do
    {
      *(uint32_t *)((char *)v24 + v25) = *v24;
      ++v24;
    }
    while ( v24 != v26 );
    a1[1] = (uint32_t *)(&loc_6 + 1);
    for ( j = 7; j != 0; --j )
    {
      if ( (*a1)[j - 1] != 0 )
        break;
    }
    a1[1] = (unsigned int *)j;
    return 1;
  }
  else
  {
    result = 1;
    if ( a1 != a2 )
      return BN_copy(a1, a2) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_nist_mod_256  (binary VA: 0x1a06ac0)
// Original: BN_nist_mod_256
// ----------------------------------------------------------------------------
int BN_nist_mod_256(unsigned int **a1, unsigned int **a2, int a3, int *a4)
{
  unsigned int **v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int result;
  int v9;
  unsigned int *v10;
  int i;
  unsigned int *v12;
  unsigned int *v13;
  int v14;
  unsigned int v15;
  unsigned int *v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int *v30;
  int v31;
  int (*v32)(unsigned int *, unsigned int *, unsigned int *, int);
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  uint32_t *v37;
  int j;
  int v39;
  unsigned int v40;
  typedef unsigned int *_g4_t_v41;
  typedef unsigned int *_g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef unsigned int _g4_t_v72[11];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v42)) > _g4_s1 ? (8u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v43)) > _g4_s2 ? (20u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v46)) > _g4_s5 ? (20u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v47)) > _g4_s6 ? (20u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v48)) > _g4_s7 ? (20u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v49)) > _g4_s8 ? (20u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v50)) > _g4_s9 ? (24u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v51)) > _g4_s10 ? (28u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v52)) > _g4_s11 ? (32u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v53)) > _g4_s12 ? (36u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v54)) > _g4_s13 ? (40u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v55)) > _g4_s14 ? (44u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v56)) > _g4_s15 ? (48u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v57)) > _g4_s16 ? (52u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v58)) > _g4_s17 ? (56u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v59)) > _g4_s18 ? (60u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v60)) > _g4_s19 ? (64u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v61)) > _g4_s20 ? (68u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v62)) > _g4_s21 ? (72u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v63)) > _g4_s22 ? (76u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v64)) > _g4_s23 ? (80u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v65)) > _g4_s24 ? (84u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v66)) > _g4_s25 ? (88u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v67)) > _g4_s26 ? (92u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v68)) > _g4_s27 ? (96u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v69)) > _g4_s28 ? (100u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v70)) > _g4_s29 ? (104u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v71)) > _g4_s30 ? (108u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v72)) > _g4_s31 ? (112u + sizeof(_g4_t_v72)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 80u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 84u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 92u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 108u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);

  v4 = a2;
  v5 = a2[1];
  v6 = *a2;
  if ( a2[3] != nullptr )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C60, (unsigned int)(uintptr_t)(v4)), a4);
  v7 = BN_ucmp(a2, &off_2045CC4);
  v4 = a2;
  if ( v7 >= 0 )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C60, (unsigned int)(uintptr_t)(v4)), a4);
  v9 = BN_ucmp(&off_2045C60, a2);
  if ( v9 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( v9 <= 0 )
  {
    if ( a1 == a2 )
    {
      v10 = v6;
    }
    else
    {
      if ( (int)(uintptr_t)(a1[2]) <= 7 && bn_expand2((int)(uintptr_t)(a1), 8) == 0 )
        return 0;
      v10 = *a1;
      for ( i = 0; i != 8; ++i )
        v10[i] = v6[i];
    }
    v12 = &v64;
    if ( v5 != (unsigned int *)byte_8 )
    {
      v13 = nullptr;
      do
      {
        *(&v64 + (uint32_t)(uintptr_t)(v13)) = v6[(uint32_t)(uintptr_t)(v13) + 8];
        v13 = (unsigned int *)((char *)v13 + 1);
      }
      while ( v13 != v5 - 2 );
      v12 = &v64 + (uint32_t)(uintptr_t)(v13);
    }
    v14 = 16 - (uint32_t)(uintptr_t)(v5);
    if ( v5 != (unsigned int *)&word_10 )
    {
      do
      {
        --v14;
        *v12++ = 0;
      }
      while ( v14 != 0 );
    }
    v53 = v67;
    v59 = v67;
    v56 = 0;
    v54 = v68;
    v60 = v68;
    v57 = 0;
    v50 = v69;
    v61 = v69;
    v58 = 0;
    v51 = v70;
    v62 = v70;
    memset(v72, 0, 12);
    v52 = v71;
    v63 = v71;
    v72[3] = v68;
    v72[4] = v69;
    v72[5] = v70;
    v72[6] = v71;
    v72[7] = 0;
    v41 = v10;
    v43 = bn_add_words(&v56, &v56, v72, 8);
    v15 = 0;
    v16 = &v56;
    do
    {
      v17 = v15 | (2 * *v16);
      v18 = *v16;
      *v16 = v17;
      v15 = v18 >> 31;
      ++v16;
    }
    while ( v16 != &v64 );
    v19 = bn_add_words(v41, v41, &v56, 8);
    v20 = v15 | (2 * v43);
    v55 = v64;
    v56 = v64;
    v21 = v65;
    v22 = v20 + v19;
    v23 = v66;
    v62 = v51;
    v44 = v22;
    v63 = v52;
    v57 = v65;
    v58 = v66;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v24 = bn_add_words(v41, v41, &v56, 8);
    v58 = v53;
    v59 = v50;
    v60 = v51;
    v61 = v52;
    v62 = v50;
    v45 = v44 + v24;
    v63 = v55;
    v56 = v21;
    v57 = v23;
    v25 = bn_add_words(v41, v41, &v56, 8);
    v56 = v53;
    v57 = v54;
    v58 = v50;
    v46 = v45 + v25;
    v62 = v55;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v63 = v23;
    v26 = bn_sub_words(v41, v41, &v56, 8);
    v56 = v54;
    v57 = v50;
    v58 = v51;
    v59 = v52;
    v47 = v46 - v26;
    v63 = v53;
    v60 = 0;
    v61 = 0;
    v62 = v21;
    v27 = bn_sub_words(v41, v41, &v56, 8);
    v56 = v50;
    v57 = v51;
    v58 = v52;
    v59 = v55;
    v48 = v47 - v27;
    v63 = v54;
    v60 = v21;
    v61 = v23;
    v62 = 0;
    v28 = bn_sub_words(v41, v41, &v56, 8);
    v56 = v51;
    v57 = v52;
    v61 = v53;
    v49 = v48 - v28;
    v63 = v50;
    v58 = 0;
    v59 = v21;
    v60 = v23;
    v62 = 0;
    v29 = bn_sub_words(v41, v41, &v56, 8);
    v30 = v41;
    v31 = v49 - v29;
    v32 = bn_sub_words;
    if ( v31 > 0 )
    {
      v39 = bn_sub_words(v41, v41, &dword_1D2F440[8 * v31 - 8], 8);
      v30 = v41;
      v33 = -v39;
      v32 = bn_sub_words;
    }
    else
    {
      v33 = -1;
      if ( v31 != 0 )
      {
        v40 = -bn_add_words(v41, v41, &dword_1D2F440[8 * ~v31], 8);
        v30 = v41;
        v32 = (int (*)(uint32_t *, uint32_t *, uint32_t *, int))((unsigned int)(uintptr_t)((int (*)(uint32_t *, uint32_t *, uint32_t *, int))bn_sub_words) & v40
                                                                 | (unsigned int)(uintptr_t)((unsigned int (*)(uint32_t *, unsigned int *, unsigned int *, int))bn_add_words) & ~v40);
        v33 = v40;
      }
    }
    v42 = v30;
    v34 = v32(v72, v30, dword_1D2F440, 8);
    v35 = (uint32_t *)((unsigned int)(uintptr_t)(v42) & v33 & -v34 | (unsigned int)(uintptr_t)(v72) & ~(v33 & -v34));
    v36 = (char *)v42 - (char *)v35;
    v37 = v35 + 8;
    do
    {
      *(uint32_t *)((char *)v35 + v36) = *v35;
      ++v35;
    }
    while ( v35 != v37 );
    a1[1] = (uint32_t *)byte_8;
    for ( j = 8; j != 0; --j )
    {
      if ( (*a1)[j - 1] != 0 )
        break;
    }
    a1[1] = (unsigned int *)j;
    return 1;
  }
  else
  {
    result = 1;
    if ( a1 != a2 )
      return BN_copy(a1, a2) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_nist_mod_384  (binary VA: 0x1a07110)
// Original: BN_nist_mod_384
// ----------------------------------------------------------------------------
int BN_nist_mod_384(unsigned int **a1, unsigned int **a2, int a3, int *a4)
{
  unsigned int **v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int result;
  int v9;
  unsigned int *v10;
  int i;
  unsigned int *v12;
  unsigned int *v13;
  int v14;
  unsigned int v15;
  unsigned int *j;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int (*v26)(uint32_t *, unsigned int *, unsigned int *, int);
  bool v27;
  int v28;
  unsigned int *v29;
  int v30;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  int k;
  int v36;
  unsigned int v37;
  typedef unsigned int *_g4_t_v38;
  typedef unsigned int *_g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef uint32_t _g4_t_v65[15];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v39)) > _g4_s1 ? (0u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v40)) > _g4_s2 ? (12u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v42)) > _g4_s4 ? (20u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v43)) > _g4_s5 ? (24u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v44)) > _g4_s6 ? (28u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v45)) > _g4_s7 ? (32u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v46)) > _g4_s8 ? (36u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v47)) > _g4_s9 ? (40u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v48)) > _g4_s10 ? (44u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v49)) > _g4_s11 ? (48u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v50)) > _g4_s12 ? (52u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v51)) > _g4_s13 ? (56u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v52)) > _g4_s14 ? (60u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v53)) > _g4_s15 ? (64u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v54)) > _g4_s16 ? (68u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v55)) > _g4_s17 ? (72u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v56)) > _g4_s18 ? (76u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v57)) > _g4_s19 ? (80u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v58)) > _g4_s20 ? (84u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v59)) > _g4_s21 ? (88u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v60)) > _g4_s22 ? (92u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v61)) > _g4_s23 ? (96u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v62)) > _g4_s24 ? (100u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v63)) > _g4_s25 ? (104u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v64)) > _g4_s26 ? (108u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v65)) > _g4_s27 ? (112u + sizeof(_g4_t_v65)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 112u);

  v4 = a2;
  v5 = a2[1];
  v6 = *a2;
  if ( a2[3] != nullptr )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C74, (unsigned int)(uintptr_t)(v4)), a4);
  v7 = BN_ucmp(a2, &off_2045CD8);
  v4 = a2;
  if ( v7 >= 0 )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C74, (unsigned int)(uintptr_t)(v4)), a4);
  v9 = BN_ucmp(&off_2045C74, a2);
  if ( v9 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( v9 <= 0 )
  {
    if ( a1 == a2 )
    {
      v10 = v6;
    }
    else
    {
      if ( (int)(uintptr_t)(a1[2]) <= 11 && bn_expand2((int)(uintptr_t)(a1), 12) == 0 )
        return 0;
      v10 = *a1;
      for ( i = 0; i != 12; ++i )
        v10[i] = v6[i];
    }
    v12 = &v53;
    if ( v5 != (unsigned int *)&byte_9[3] )
    {
      v13 = nullptr;
      do
      {
        *(&v53 + (uint32_t)(uintptr_t)(v13)) = v6[(uint32_t)(uintptr_t)(v13) + 12];
        v13 = (unsigned int *)((char *)v13 + 1);
      }
      while ( v13 != v5 - 3 );
      v12 = &v53 + (uint32_t)(uintptr_t)(v13);
    }
    v14 = 24 - (uint32_t)(uintptr_t)(v5);
    if ( v5 != (unsigned int *)&dword_18 )
    {
      do
      {
        --v14;
        *v12++ = 0;
      }
      while ( v14 != 0 );
    }
    v15 = v62;
    v42 = v63;
    v43 = v64;
    v41 = v62;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v40 = 0;
    for ( j = &v41; ; v15 = *j )
    {
      *j++ = v40 | (2 * v15);
      v40 = v15 >> 31;
      if ( j == &v44 )
        break;
    }
    v38 = v10;
    v44 = v15 >> 31;
    v17 = bn_add_words(v10 + 4, v10 + 4, &v41, 8);
    v18 = bn_add_words(v38, v38, &v53, 12) + v17;
    v41 = v62;
    v42 = v63;
    v43 = v64;
    v44 = v53;
    v45 = v54;
    v46 = v55;
    v47 = v56;
    v48 = v57;
    v49 = v58;
    v50 = v59;
    v51 = v60;
    v52 = v61;
    v19 = bn_add_words(v38, v38, &v41, 12) + v18;
    v42 = v64;
    v44 = v61;
    v45 = v53;
    v46 = v54;
    v47 = v55;
    v48 = v56;
    v49 = v57;
    v50 = v58;
    v51 = v59;
    v41 = 0;
    v43 = 0;
    v52 = v60;
    v20 = bn_add_words(v38, v38, &v41, 12) + v19;
    v45 = v61;
    v46 = v62;
    v47 = v63;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v48 = v64;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v21 = bn_add_words(v38, v38, &v41, 12) + v20;
    v41 = v61;
    v44 = v62;
    v45 = v63;
    v42 = 0;
    v43 = 0;
    v46 = v64;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v22 = bn_add_words(v38, v38, &v41, 12) + v21;
    v41 = v64;
    v42 = v53;
    v43 = v54;
    v44 = v55;
    v45 = v56;
    v46 = v57;
    v47 = v58;
    v48 = v59;
    v49 = v60;
    v50 = v61;
    v51 = v62;
    v52 = v63;
    v23 = v22 - bn_sub_words(v38, v38, &v41, 12);
    v42 = v61;
    v43 = v62;
    v44 = v63;
    v41 = 0;
    v45 = v64;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v24 = v23 - bn_sub_words(v38, v38, &v41, 12);
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = v64;
    v45 = v64;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v25 = v24 - bn_sub_words(v38, v38, &v41, 12);
    v26 = bn_sub_words;
    v27 = v25 == 0;
    v28 = v25;
    v29 = v38;
    if ( v25 > 0 )
    {
      v36 = bn_sub_words(v38, v38, &dword_1D2F4E0[12 * v25 - 12], 12);
      v29 = v38;
      v30 = -v36;
      v26 = bn_sub_words;
    }
    else
    {
      v30 = -1;
      if ( !v27 )
      {
        v37 = -bn_add_words(v38, v38, &dword_1D2F4E0[12 * ~v28], 12);
        v29 = v38;
        v26 = (int (*)(uint32_t *, uint32_t *, uint32_t *, int))((unsigned int)(uintptr_t)((int (*)(uint32_t *, uint32_t *, uint32_t *, int))bn_sub_words) & v37
                                                                 | (unsigned int)(uintptr_t)((unsigned int (*)(uint32_t *, unsigned int *, unsigned int *, int))bn_add_words) & ~v37);
        v30 = v37;
      }
    }
    v39 = v29;
    v31 = v26(v65, v29, dword_1D2F4E0, 12);
    v32 = (uint32_t *)((unsigned int)(uintptr_t)(v39) & v30 & -v31 | (unsigned int)(uintptr_t)(v65) & ~(v30 & -v31));
    v33 = (char *)v39 - (char *)v32;
    v34 = v32 + 12;
    do
    {
      *(uint32_t *)((char *)v32 + v33) = *v32;
      ++v32;
    }
    while ( v32 != v34 );
    a1[1] = (uint32_t *)(byte_9 + 3);
    for ( k = 12; k != 0; --k )
    {
      if ( (*a1)[k - 1] != 0 )
        break;
    }
    a1[1] = (unsigned int *)k;
    return 1;
  }
  else
  {
    result = 1;
    if ( a1 != a2 )
      return BN_copy(a1, a2) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_nist_mod_521  (binary VA: 0x1a07810)
// Original: BN_nist_mod_521
// ----------------------------------------------------------------------------
int BN_nist_mod_521(unsigned int **a1, unsigned int **a2, int a3, int *a4)
{
  unsigned int *v4;
  int result;
  int v6;
  unsigned int *v7;
  int i;
  unsigned int *v9;
  unsigned int *v10;
  int v11;
  unsigned int v12;
  char *v13;
  unsigned int v14;
  int v15;
  char *v16;
  int v17;
  char *v18;
  int j;
  typedef unsigned int *_g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef char _g4_t_v24;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v21)) > _g4_s1 ? (28u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (92u + sizeof(_g4_t_v23)) > _g4_s3 ? (92u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (96u + sizeof(_g4_t_v24)) > _g4_s4 ? (96u + sizeof(_g4_t_v24)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);

  v20 = a2[1];
  v4 = *a2;
  if ( a2[3] != nullptr || BN_ucmp(a2, &off_2045CEC) >= 0 )
    return BN_nnmod(a1, __SPAIR64__(&off_2045C88, (unsigned int)(uintptr_t)(a2)), a4);
  v6 = BN_ucmp(&off_2045C88, a2);
  if ( v6 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( v6 <= 0 )
  {
    if ( a1 == a2 )
    {
      v7 = v4;
    }
    else
    {
      if ( (int)(uintptr_t)(a1[2]) <= 16 && bn_expand2((int)(uintptr_t)(a1), 17) == 0 )
        return 0;
      v7 = *a1;
      for ( i = 0; i != 17; ++i )
        v7[i] = v4[i];
    }
    v9 = &v21;
    if ( v20 != (unsigned int *)&word_10 )
    {
      v10 = nullptr;
      do
      {
        *(&v21 + (uint32_t)(uintptr_t)(v10)) = v4[(uint32_t)(uintptr_t)(v10) + 16];
        v10 = (unsigned int *)((char *)v10 + 1);
      }
      while ( v10 != v20 - 4 );
      v9 = &v21 + (uint32_t)(uintptr_t)(v10);
    }
    v11 = 33 - (uint32_t)(uintptr_t)(v20);
    if ( v20 != (unsigned int *)((char *)&dword_20 + 1) )
    {
      do
      {
        --v11;
        *v9++ = 0;
      }
      while ( v11 != 0 );
    }
    v12 = v21;
    v13 = &v22;
    do
    {
      v14 = v12;
      v12 = *(uint32_t *)v13;
      *((uint32_t *)v13 - 1) = (v14 >> 9) | (*(uint32_t *)v13 << 23);
      v13 += 4;
    }
    while ( v13 != &v24 );
    v23 = v12 >> 9;
    v7[16] &= 0x1FFu;
    bn_add_words(v7, v7, &v21, 17);
    v15 = bn_sub_words(&v21, v7, (&dword_1D2F5E0), 17);
    v16 = (char *)((unsigned int)(uintptr_t)(v7) & -v15 | (unsigned int)(uintptr_t)(&v21) & (v15 - 1));
    v17 = (char *)v7 - v16;
    v18 = v16 + 68;
    do
    {
      *(uint32_t *)&v16[v17] = *(uint32_t *)v16;
      v16 += 4;
    }
    while ( v16 != v18 );
    a1[1] = (uint32_t *)(&word_10 + 1);
    for ( j = 17; j != 0; --j )
    {
      if ( (*a1)[j - 1] != 0 )
        break;
    }
    a1[1] = (unsigned int *)j;
    return 1;
  }
  else
  {
    result = 1;
    if ( a1 != a2 )
      return BN_copy(a1, a2) != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_bn2hex  (binary VA: 0x1a07a90)
// Original: BN_bn2hex
// ----------------------------------------------------------------------------
uint8_t * BN_bn2hex(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int i;
  int v5;
  int v6;
  uint8_t *v8;
  int v9;
  int v10;
  uint8_t *v11;

  v11 = CRYPTO_malloc(8 * a1[1] + 2, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v11 != nullptr )
  {
    v8 = v11;
    if ( a1[3] != 0 )
    {
      *v11 = 45;
      v8 = v11 + 1;
    }
    v1 = a1[1];
    if ( v1 == 0 )
    {
      *v8++ = 48;
      v1 = a1[1];
    }
    v2 = v1 - 1;
    v10 = v2;
    if ( v2 >= 0 )
    {
      v9 = 4 * v2;
      v3 = 0;
      do
      {
        for ( i = 24; i != -8; i -= 8 )
        {
          v5 = *(uint32_t *)(*a1 + v9) >> i;
          v6 = v3 | (uint8_t)v5;
          v3 = 0;
          if ( v6 != 0 )
          {
            *v8 = *((uint8_t *)&dword_20B9FF4[-928260] + ((int)(uint8_t)v5 >> 4));
            v3 = 1;
            v8[1] = *((uint8_t *)&dword_20B9FF4[-928260] + (v5 & 0xF));
            v8 += 2;
          }
        }
        --v10;
        v9 -= 4;
      }
      while ( v10 != -1 );
    }
    *v8 = 0;
  }
  else
  {
    ERR_put_error(3, 105, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: BN_bn2dec  (binary VA: 0x1a07be0)
// Original: BN_bn2dec
// ----------------------------------------------------------------------------
uint8_t * BN_bn2dec(uint32_t *a1)
{
  int v1;
  int v2;
  uint8_t *v3;
  bool v4; // si
  void **v6;
  uint8_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  void *v12;
  int v13;
  void **v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;

  v1 = BN_num_bits(a1);
  v2 = 3 * v1 / 10 + 3 * v1 / 1000;
  v16 = v2 + 2;
  v15 = CRYPTO_malloc(4 * ((v2 + 2) / 9) + 4, (int)(uintptr_t)(&unk_1B15112), 0);
  v3 = CRYPTO_malloc(v2 + 5, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v15 == nullptr || v3 == nullptr )
  {
    ERR_put_error(3, 104, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    v14 = nullptr;
    v4 = v3 != nullptr;
    goto LABEL_4;
  }
  v4 = true;
  v6 = BN_dup(a1);
  v14 = v6;
  if ( v6 != nullptr )
  {
    if ( v6[1] == nullptr )
    {
      *v3 = 48;
      v3[1] = 0;
      v4 = false;
      goto LABEL_4;
    }
    if ( v6[3] != nullptr )
    {
      *v3 = 45;
      v7 = v3 + 1;
      v18 = -1;
      if ( v6[1] == nullptr )
      {
        v8 = (uint32_t *)(v15);
        v9 = *((uint32_t *)v15 - 1);
LABEL_18:
        v13 = v9;
        v10 = v16 + 3 + v18;
        v11 = v8 - 1;
        v17 = v16 + 3;
        BIO_snprintf(v7, v10, "%u", v13);
        for ( ; *v7 != 0; ++v7 )
          ;
        while ( v15 != (uint8_t *)v11 )
        {
          while ( 1 )
          {
            BIO_snprintf(v7, v17 + v3 - v7, "%09u", *--v11);
            if ( *v7 == 0 )
              break;
            do
              ++v7;
            while ( *v7 != 0 );
            if ( v15 == (uint8_t *)v11 )
              goto LABEL_24;
          }
        }
LABEL_24:
        v4 = false;
        goto LABEL_4;
      }
    }
    else
    {
      v7 = v3;
      v18 = 0;
    }
    v8 = (uint32_t *)(v15);
    do
    {
      v9 = BN_div_word(v14, 1000000000);
      *v8++ = v9;
    }
    while ( v14[1] != nullptr );
    goto LABEL_18;
  }
LABEL_4:
  if ( v15 != nullptr )
    CRYPTO_free(v15);
  if ( v14 != nullptr )
    BN_free(v14);
  if ( v4 )
  {
    v12 = v3;
    v3 = nullptr;
    CRYPTO_free(v12);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: BN_hex2bn  (binary VA: 0x1a07e60)
// Original: BN_hex2bn
// ----------------------------------------------------------------------------
int BN_hex2bn(void ***a1, uint8_t *a2)
{
  int i;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  void **v14;
  int v15;
  int v16;
  int v17;

  v16 = 0;
  if ( a2 == nullptr || *a2 == 0 )
    return v16;
  v17 = 0;
  if ( *a2 == 45 )
  {
    v17 = 1;
    ++a2;
  }
  for ( i = 0; isxdigit((uint8_t)a2[i]) != 0; ++i )
    ;
  v15 = i;
  v16 = i + v17;
  if ( a1 == nullptr )
    return v16;
  v14 = *a1;
  if ( *a1 != nullptr )
  {
    BN_set_word(v14, 0);
  }
  else
  {
    v14 = (void **)BN_new();
    if ( v14 == nullptr )
      return 0;
  }
  if ( (4 * i + 31) >> 5 > (int)(uintptr_t)(v14[2]) && bn_expand2((int)(uintptr_t)(v14), (4 * i + 31) >> 5) == 0 )
  {
    v16 = 0;
    if ( *a1 == nullptr )
      BN_free(v14);
    return v16;
  }
  if ( i == 0 )
  {
    v14[1] = nullptr;
    goto LABEL_27;
  }
  v13 = 0;
  v11 = i;
  do
  {
    v3 = 8;
    if ( v11 <= 8 )
      v3 = v11;
    v4 = 0;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v7 = (char)a2[v11 - v3 + v4];
        if ( (unsigned int)(v7 - 48) > 9 )
          break;
        v6 = v7 - 48;
LABEL_18:
        ++v4;
        v5 = v6 | (16 * v5);
        if ( v3 - v4 <= 0 )
          goto LABEL_22;
      }
      if ( (unsigned int)(v7 - 97) > 5 )
      {
        v10 = v7 - 65;
        v12 = v7 - 55;
        v6 = 0;
        if ( v10 <= 5 )
          v6 = v12;
        goto LABEL_18;
      }
      ++v4;
      v5 = (v7 - 87) | (16 * v5);
    }
    while ( v3 - v4 > 0 );
LABEL_22:
    v11 -= 8;
    *(uint32_t *)((char *)*v14 + v13) = v5;
    v13 += 4;
  }
  while ( v11 > 0 );
  v8 = ((unsigned int)(v15 - 1) >> 3) + 1;
  v14[1] = (void *)v8;
  do
  {
    if ( *((uint32_t *)*v14 + v8 - 1) != 0 )
      break;
    --v8;
  }
  while ( v8 != 0 );
  v14[1] = (void *)v8;
LABEL_27:
  v14[3] = (void *)v17;
  *a1 = v14;
  return v16;
}

// ----------------------------------------------------------------------------
// Function: BN_dec2bn  (binary VA: 0x1a080c0)
// Original: BN_dec2bn
// ----------------------------------------------------------------------------
int BN_dec2bn(uint32_t **a1, char *a2)
{
  int v2;
  char *v3;
  uint8_t v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;

  v2 = 0;
  v3 = a2;
  if ( a2 == nullptr )
    return v2;
  v4 = *a2;
  if ( *a2 == 0 )
    return v2;
  v16 = 0;
  if ( v4 == 45 )
  {
    v5 = 0;
    v3 = a2 + 1;
    v16 = 1;
    if ( (unsigned int)(uint8_t)a2[1] - 48 > 9 )
      goto LABEL_6;
  }
  else
  {
    v5 = 0;
    if ( (unsigned int)v4 - 48 > 9 )
      goto LABEL_6;
  }
  do
    ++v5;
  while ( (unsigned int)(uint8_t)v3[v5] - 48 <= 9 );
LABEL_6:
  v2 = v5 + v16;
  if ( a1 != nullptr )
  {
    v6 = *a1;
    if ( *a1 != nullptr )
    {
      BN_set_word(v6, 0);
      v2 = v5 + v16;
    }
    else
    {
      v6 = BN_new();
      v2 = v5 + v16;
      if ( v6 == nullptr )
        return 0;
    }
    if ( (4 * v5 + 31) >> 5 <= v6[2] || (v15 = v2, v13 = bn_expand2((int)(uintptr_t)(v6), (4 * v5 + 31) >> 5), v2 = v15, v13 != 0) )
    {
      v7 = 9 * (v5 / 9) - v5 + 9;
      if ( 9 * (v5 / 9) == v5 )
        v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = *v3;
        if ( *v3 == 0 )
          break;
        while ( 1 )
        {
          ++v7;
          ++v3;
          v8 = v9 + 10 * v8 - 48;
          if ( v7 != 9 )
            break;
          v14 = v2;
          BN_mul_word(v6, 1000000000);
          BN_add_word(v6, v8);
          v9 = *v3;
          v7 = 0;
          v8 = 0;
          v2 = v14;
          if ( *v3 == 0 )
            goto LABEL_16;
        }
      }
LABEL_16:
      v6[3] = v16;
      v10 = v6[1];
      if ( v10 > 0 )
      {
        v11 = *v6 + 4 * v10 - 4 - 4 * v10;
        do
        {
          if ( *(uint32_t *)(v11 + 4 * v10) != 0 )
            break;
          --v10;
        }
        while ( v10 != 0 );
        v6[1] = v10;
      }
      *a1 = v6;
    }
    else
    {
      v2 = 0;
      if ( *a1 == nullptr )
      {
        BN_free((void **)v6);
        return 0;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: BN_asc2bn  (binary VA: 0x1a082b0)
// Original: BN_asc2bn
// ----------------------------------------------------------------------------
int BN_asc2bn(void ***a1, char *a2)
{
  char v2;
  char *v3;
  int v4;
  int v5;
  char v7;
  int v8;

  v2 = *a2;
  v3 = a2;
  if ( *a2 == 45 )
  {
    v3 = a2 + 1;
    v2 = a2[1];
  }
  if ( v2 == 48 && ((v7 = v3[1]) == 120 || v7 == 88) )
  {
    v8 = BN_hex2bn(a1, v3 + 2);
    v5 = 0;
    if ( v8 == 0 )
      return v5;
  }
  else
  {
    v4 = BN_dec2bn(a1, v3);
    v5 = 0;
    if ( v4 == 0 )
      return v5;
  }
  v5 = 1;
  if ( *a2 == 45 )
    (*a1)[3] = &dword_0 + 1;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_print  (binary VA: 0x1a08360)
// Original: BN_print
// ----------------------------------------------------------------------------
int BN_print(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v10;
  int v11;

  if ( a2[3] == 0 || (v9 = BIO_write(a1, (int)(uintptr_t)("-"), 1), result = 0, v9 == 1) )
  {
    v2 = a2[1];
    if ( v2 == 0 )
    {
      v10 = BIO_write(a1, (int)(uintptr_t)(&a0[2]), 1);
      result = 0;
      if ( v10 != 1 )
        return result;
      v2 = a2[1];
    }
    v3 = v2 - 1;
    result = 1;
    v11 = v3;
    if ( v3 >= 0 )
    {
      v5 = 4 * v3;
      v6 = 0;
      while ( 2 )
      {
        for ( i = 28; i != -4; i -= 4 )
        {
          while ( 1 )
          {
            v8 = v6 | (*(uint32_t *)(*a2 + v5) >> i) & 0xF;
            v6 = 0;
            if ( v8 != 0 )
              break;
            i -= 4;
            if ( i == -4 )
              goto LABEL_10;
          }
          if ( BIO_write(a1, (int)(uint8_t)a0123456789abcd_3[(*(uint32_t *)(*a2 + v5) >> i) & 0xF], 1) != 1 )
            return 0;
          v6 = 1;
        }
LABEL_10:
        --v11;
        v5 -= 4;
        if ( v11 != -1 )
          continue;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_print_fp  (binary VA: 0x1a084a0)
// Original: BN_print_fp
// ----------------------------------------------------------------------------
int BN_print_fp(int a1, uint32_t *a2)
{
  int v2;
  void *v3;
  uint8_t *v4;

  v2 = 0;
  v3 = BIO_s_file();
  v4 = BIO_new((int)(uintptr_t)(v3));
  if ( v4 != nullptr )
  {
    BIO_ctrl(v4, 106, 0, a1);
    v2 = BN_print(v4, a2);
    BIO_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: BN_pseudo_rand  (binary VA: 0x1a089d0)
// Original: BN_pseudo_rand
// ----------------------------------------------------------------------------
int BN_pseudo_rand(void **a1, int a2, int a3, int a4)
{
  return sub_1A08750(1, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: BN_rand  (binary VA: 0x1a08a00)
// Original: BN_rand
// ----------------------------------------------------------------------------
int BN_rand(void **a1, int a2, int a3, int a4)
{
  return sub_1A08750(0, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: BN_bntest_rand  (binary VA: 0x1a08a30)
// Original: BN_bntest_rand
// ----------------------------------------------------------------------------
int BN_bntest_rand(void **a1, int a2, int a3, int a4)
{
  return sub_1A08750(2, a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: BN_rand_range  (binary VA: 0x1a08a60)
// Original: BN_rand_range
// ----------------------------------------------------------------------------
int BN_rand_range(int *a1, int *a2)
{
  return sub_1A08520(0, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: BN_pseudo_rand_range  (binary VA: 0x1a08a80)
// Original: BN_pseudo_rand_range
// ----------------------------------------------------------------------------
int BN_pseudo_rand_range(int *a1, int *a2)
{
  return sub_1A08520(1, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: BN_RECP_CTX_init  (binary VA: 0x1a08aa0)
// Original: BN_RECP_CTX_init
// ----------------------------------------------------------------------------
uint32_t * BN_RECP_CTX_init(uint32_t *a1)
{
  uint32_t *result;

  BN_init(a1);
  result = BN_init(a1 + 5);
  a1[10] = 0;
  a1[12] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_RECP_CTX_new  (binary VA: 0x1a08af0)
// Original: BN_RECP_CTX_new
// ----------------------------------------------------------------------------
uint8_t * BN_RECP_CTX_new()
{
  uint8_t *v0;
  uint8_t *v1;

  v0 = CRYPTO_malloc(52, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = v0;
  if ( v0 != nullptr )
  {
    BN_RECP_CTX_init(v0);
    *((uint32_t *)v1 + 12) = 1;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: BN_RECP_CTX_free  (binary VA: 0x1a08b50)
// Original: BN_RECP_CTX_free
// ----------------------------------------------------------------------------
void BN_RECP_CTX_free(void **a1)
{
  if ( a1 != nullptr )
  {
    BN_free(a1);
    BN_free(a1 + 5);
    if ( ((uint8_t)(uintptr_t)(a1)[12] & 1) != 0 )
      CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: BN_RECP_CTX_set  (binary VA: 0x1a08bb0)
// Original: BN_RECP_CTX_set
// ----------------------------------------------------------------------------
int BN_RECP_CTX_set(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;

  v2 = BN_copy(a1, a2);
  v3 = 0;
  if ( v2 != nullptr )
  {
    BN_set_word(a1 + 5, 0);
    a1[10] = BN_num_bits(a2);
    a1[11] = 0;
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: BN_reciprocal  (binary VA: 0x1a08c30)
// Original: BN_reciprocal
// ----------------------------------------------------------------------------
int BN_reciprocal(uint32_t *a1, unsigned int a2, int a3, int *a4)
{
  uint8_t *v4;
  int v5;

  BN_CTX_start((int)(uintptr_t)(a4));
  v4 = BN_CTX_get(a4);
  if ( v4 != nullptr )
  {
    v5 = -1;
    if ( BN_set_bit(v4, a3) != 0 && BN_div(a1, nullptr, __SPAIR64__(a2, (unsigned int)(uintptr_t)(v4)), a4) != 0 )
      v5 = a3;
  }
  else
  {
    v5 = -1;
  }
  BN_CTX_end(a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: BN_div_recp  (binary VA: 0x1a08ce0)
// Original: BN_div_recp
// ----------------------------------------------------------------------------
int BN_div_recp(uint32_t *a1, uint8_t *a2, uint32_t *a3, int *a4, int *a5)
{
  uint8_t *v5;
  uint32_t *v6;
  uint8_t *v7;
  uint8_t *v8;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int *v17;
  uint8_t *v18;
  uint8_t *v19;
  int v20;
  int v21;
  uint8_t *v22;

  BN_CTX_start((int)(uintptr_t)(a5));
  v22 = BN_CTX_get(a5);
  v5 = BN_CTX_get(a5);
  v6 = a1;
  v7 = v5;
  if ( a1 == nullptr )
  {
    v18 = v5;
    v6 = (uint32_t *)(BN_CTX_get(a5));
    v7 = v18;
  }
  v8 = a2;
  if ( a2 == nullptr )
  {
    v19 = v7;
    v8 = BN_CTX_get(a5);
    v7 = v19;
  }
  if ( v7 == nullptr || v22 == nullptr || v8 == nullptr || v6 == nullptr )
  {
LABEL_8:
    v20 = 0;
LABEL_9:
    BN_CTX_end(a5);
    return v20;
  }
  v16 = (int *)v7;
  if ( BN_ucmp(a3, a4) >= 0 )
  {
    v10 = BN_num_bits(a3);
    v11 = v16;
    v12 = 2 * a4[10];
    if ( v10 >= v12 )
      v12 = v10;
    v15 = v12;
    v13 = a4[11];
    if ( v13 != v12 )
    {
      v13 = BN_reciprocal(a4 + 5, (unsigned int)(uintptr_t)(a4), v12, a5);
      a4[11] = v13;
      v11 = v16;
    }
    v20 = 0;
    if ( v13 != -1 )
    {
      v17 = v11;
      if ( BN_rshift(v22, a3, a4[10]) != 0
        && BN_mul(v17, (int)(uintptr_t)(v22), (int)(uintptr_t)(a4 + 5), a5) != 0
        && BN_rshift(v6, v17, v15 - a4[10]) != 0 )
      {
        v6[3] = 0;
        if ( BN_mul(v17, (int)(uintptr_t)(a4), (int)(uintptr_t)(v6), a5) != 0 && BN_usub((int **)v8, (int)(uintptr_t)(a3), v17) != 0 )
        {
          *((uint32_t *)v8 + 3) = 0;
          v21 = 4;
          while ( BN_ucmp(v8, a4) >= 0 )
          {
            if ( --v21 == 0 )
            {
              ERR_put_error(3, 130, 101, (int)(uintptr_t)(&unk_1B15112), 0);
              v20 = 0;
              goto LABEL_9;
            }
            if ( BN_usub((int **)v8, (int)(uintptr_t)(v8), a4) == 0 || BN_add_word(v6, 1) == 0 )
              goto LABEL_8;
          }
          v14 = 0;
          if ( *((uint32_t *)v8 + 1) != 0 )
            v14 = a3[3];
          *((uint32_t *)v8 + 3) = v14;
          v20 = 1;
          v6[3] = a3[3] ^ a4[3];
        }
      }
    }
    goto LABEL_9;
  }
  BN_set_word(v6, 0);
  v20 = 0;
  if ( BN_copy(v8, a3) != nullptr )
  {
    BN_CTX_end(a5);
    return 1;
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_mul_reciprocal  (binary VA: 0x1a09030)
// Original: BN_mod_mul_reciprocal
// ----------------------------------------------------------------------------
int BN_mod_mul_reciprocal(uint8_t *a1, int a2, int a3, int *a4, int *a5)
{
  uint8_t *v5;
  int v7;

  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = BN_CTX_get(a5);
  v7 = 0;
  if ( v5 != nullptr )
  {
    if ( a3 == 0 )
    {
      v5 = (uint8_t *)a2;
      goto LABEL_5;
    }
    if ( a2 == a3 )
    {
      if ( BN_sqr(v5, a2, a5) == 0 )
        goto LABEL_6;
      goto LABEL_5;
    }
    if ( BN_mul(v5, a2, a3, a5) != 0 )
LABEL_5:
      v7 = BN_div_recp(nullptr, a1, v5, a4, a5);
  }
LABEL_6:
  BN_CTX_end(a5);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: BN_lshift1  (binary VA: 0x1a09120)
// Original: BN_lshift1
// ----------------------------------------------------------------------------
int BN_lshift1(int **a1, int **a2)
{
  int *v2;
  int result;
  int *v4;
  int *v5;
  int v6;
  unsigned int v7;
  int v8;
  int *v9;

  if ( a1 == a2 )
  {
    v9 = a1[1];
    if ( (int)(uintptr_t)(v9) >= (int)(uintptr_t)(a1[2]) && bn_expand2((int)(uintptr_t)(a1), (int)(uintptr_t)(v9) + 1) == 0 )
      return 0;
  }
  else
  {
    a1[3] = a2[3];
    v2 = a2[1];
    if ( (int)(uintptr_t)(v2) >= (int)(uintptr_t)(a1[2]) )
    {
      if ( bn_expand2((int)(uintptr_t)(a1), (int)(uintptr_t)(v2) + 1) == 0 )
        return 0;
      v2 = a2[1];
    }
    a1[1] = v2;
  }
  result = 1;
  v4 = *a2;
  v5 = *a1;
  if ( (int)(uintptr_t)(a2[1]) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *v4;
      ++v6;
      ++v4;
      *v5++ = v7 | (2 * v8);
      v7 = (unsigned int)v8 >> 31;
    }
    while ( (int)(uintptr_t)(a2[1]) > v6 );
    result = 1;
    if ( v8 < 0 )
    {
      *v5 = 1;
      a1[1] = (int *)((char *)a1[1] + 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_rshift1  (binary VA: 0x1a09220)
// Original: BN_rshift1
// ----------------------------------------------------------------------------
int BN_rshift1(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;

  v2 = a2[1];
  if ( v2 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( a2 != a1 )
  {
    if ( v2 > a1[2] )
    {
      if ( bn_expand2((int)(uintptr_t)(a1), a2[1]) == 0 )
        return 0;
      v2 = a2[1];
    }
    a1[1] = v2;
    a1[3] = a2[3];
    v2 = a2[1];
  }
  v3 = v2 - 1;
  v4 = *a2;
  v5 = *a1;
  if ( v3 >= 0 )
  {
    v6 = 0;
    do
    {
      v7 = v6 | (*(uint32_t *)(v4 + 4 * v3) >> 1);
      v8 = *(uint32_t *)(v4 + 4 * v3) & 1;
      *(uint32_t *)(v5 + 4 * v3--) = v7;
      v6 = -v8 & 0x80000000;
    }
    while ( v3 != -1 );
  }
  result = 1;
  v10 = a1[1];
  if ( v10 > 0 )
  {
    v11 = *a1 + 4 * v10 - 4 - 4 * v10;
    do
    {
      if ( *(uint32_t *)(v11 + 4 * v10) != 0 )
        break;
      --v10;
    }
    while ( v10 != 0 );
    result = 1;
    a1[1] = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_lshift  (binary VA: 0x1a09340)
// Original: BN_lshift
// ----------------------------------------------------------------------------
int BN_lshift(void **a1, int *a2, int a3)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  int result;
  int v8;
  int v9;
  char *v10;
  unsigned int v11;
  int v12;
  char *s;

  a1[3] = (void *)a2[3];
  v12 = a3 / 32;
  v3 = a2[1] + a3 / 32;
  if ( v3 >= (int)(uintptr_t)(a1[2]) )
  {
    if ( bn_expand2((int)(uintptr_t)(a1), v3 + 1) == 0 )
      return 0;
    v3 = a2[1] + v12;
  }
  v4 = *a2;
  v5 = (char *)*a1;
  s = v5;
  *(uint32_t *)&v5[4 * v3] = 0;
  if ( a3 % 32 != 0 )
  {
    v9 = a2[1] - 1;
    if ( v9 >= 0 )
    {
      v10 = &s[4 * a2[1] + 4 * v12];
      do
      {
        v11 = *(uint32_t *)(v4 + 4 * v9--);
        *(uint32_t *)v10 |= v11 >> (32 - a3 % 32);
        *((uint32_t *)v10 - 1) = v11 << (a3 % 32);
        v10 -= 4;
      }
      while ( v9 != -1 );
    }
  }
  else
  {
    v6 = a2[1] - 1;
    if ( v6 >= 0 )
    {
      do
      {
        *(uint32_t *)&v5[4 * v12 + 4 * v6] = *(uint32_t *)(v4 + 4 * v6);
        --v6;
      }
      while ( v6 != -1 );
    }
  }
  memset(s, 0, 4 * v12);
  result = 1;
  v8 = a2[1] + v12 + 1;
  a1[1] = (void *)v8;
  if ( v8 > 0 )
  {
    do
    {
      if ( *((uint32_t *)*a1 + v8 - 1) != 0 )
        break;
      --v8;
    }
    while ( v8 != 0 );
    result = 1;
    a1[1] = (void *)v8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_rshift  (binary VA: 0x1a094e0)
// Original: BN_rshift
// ----------------------------------------------------------------------------
int BN_rshift(unsigned int **a1, unsigned int **a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int *v7;
  unsigned int *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int *v15;
  int v16;

  v3 = a3 / 32;
  v4 = a3 % 32;
  v5 = (int)(uintptr_t)(a2[1]);
  if ( a3 / 32 >= v5 || v5 == 0 )
  {
    BN_set_word(a1, 0);
    return 1;
  }
  if ( a1 == a2 )
  {
    if ( a3 == 0 )
      return 1;
    v6 = v5 - v3;
  }
  else
  {
    a1[3] = a2[3];
    v6 = (int)(uintptr_t)(a2[1]) - v3;
    if ( v6 >= (int)(uintptr_t)(a1[2]) )
    {
      if ( bn_expand2((int)(uintptr_t)(a1), v6 + 1) == 0 )
        return 0;
      v6 = (int)(uintptr_t)(a2[1]) - v3;
    }
  }
  v7 = &(*a2)[v3];
  v8 = *a1;
  a1[1] = (unsigned int *)v6;
  if ( v4 != 0 )
  {
    v9 = *v7;
    if ( v6 != 1 )
    {
      v16 = v6 - 1;
      v15 = v7;
      v10 = 0;
      do
      {
        v11 = v9 >> v4;
        v9 = v15[v10 + 1];
        v8[v10++] = v11 | (v9 << (32 - a3 % 32));
      }
      while ( v10 != v16 );
      v8 += v10;
    }
    *v8 = v9 >> v4;
  }
  else
  {
    if ( v6 == 0 )
      return 1;
    do
    {
      --v6;
      *v8++ = *v7++;
    }
    while ( v6 != 0 );
  }
  v12 = (int)(uintptr_t)(a1[1]);
  if ( v12 <= 0 )
    return 1;
  v13 = (int)(uintptr_t)(&(*a1)[v12 - 1 - v12]);
  do
  {
    if ( *(uint32_t *)(v13 + 4 * v12) != 0 )
      break;
    --v12;
  }
  while ( v12 != 0 );
  a1[1] = (unsigned int *)v12;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: BN_sqr  (binary VA: 0x1a09a10)
// Original: BN_sqr
// ----------------------------------------------------------------------------
int BN_sqr(unsigned int **a1, unsigned int **a2, int *a3)
{
  int v3;
  unsigned int **v4;
  uint8_t *v5;
  int v6;
  unsigned int v8;
  int v9;
  char v10;
  uint64_t **v11;
  int v12;
  int v13;
  typedef uint8_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint64_t _g4_t_v18[17];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  v3 = (int)(uintptr_t)(a2[1]);
  if ( v3 <= 0 )
  {
    v6 = 1;
    a1[1] = nullptr;
    return v6;
  }
  BN_CTX_start((int)(uintptr_t)(a3));
  v4 = a1;
  if ( a2 == a1 )
    v4 = (unsigned int **)BN_CTX_get(a3);
  v5 = BN_CTX_get(a3);
  if ( v5 != nullptr && v4 != nullptr )
  {
    v16 = 2 * v3;
    if ( 2 * v3 <= (int)(uintptr_t)(v4[2]) || (v14 = v5, v9 = bn_expand2((int)(uintptr_t)(v4), 2 * v3), v5 = v14, v9 != 0) )
    {
      if ( v3 == 4 )
      {
        bn_sqr_comba4(*v4, *a2);
        v17 = 4;
        goto LABEL_14;
      }
      if ( v3 == 8 )
      {
        bn_sqr_comba8(*v4, *a2);
        v17 = 8;
        goto LABEL_14;
      }
      if ( v3 <= 15 )
      {
        bn_sqr_normal(*v4, *a2, v3, v18);
        v17 = v3;
LABEL_14:
        v4[3] = nullptr;
        v8 = (*a2)[v17 - 1];
        if ( v8 == (uint16_t)v8 )
          v4[1] = (unsigned int *)(v16 - 1);
        else
          v4[1] = (unsigned int *)v16;
        v6 = 1;
        if ( v4 != a1 )
          BN_copy(a1, v4);
        goto LABEL_6;
      }
      v15 = (int)(uintptr_t)(v5);
      v17 = v3;
      v10 = BN_num_bits_word(v3);
      v11 = (uint64_t **)v15;
      if ( v3 == 1 << (v10 - 1) )
      {
        if ( 4 * v3 <= *(uint32_t *)(v15 + 8) || (v13 = bn_expand2(v15, 4 * v3), v11 = (uint64_t **)v15, v13 != 0) )
        {
          bn_sqr_recursive(*v4, *a2, v3, *v11);
          goto LABEL_14;
        }
      }
      else if ( v16 <= *(uint32_t *)(v15 + 8) || (v12 = bn_expand2(v15, v16), v11 = (uint64_t **)v15, v12 != 0) )
      {
        bn_sqr_normal(*v4, *a2, v3, *v11);
        goto LABEL_14;
      }
    }
  }
  v6 = 0;
LABEL_6:
  BN_CTX_end(a3);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_sqrt  (binary VA: 0x1a09cf0)
// Original: BN_mod_sqrt
// ----------------------------------------------------------------------------
uint32_t * BN_mod_sqrt(uint32_t *a1, uint32_t *a2, int **a3, int *a4)
{
  int **v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int is_bit_set;
  int v12;
  int v13;
  uint32_t *v14;
  int i;
  bool v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  int (*v22)(void **, void **, int **);
  int j;
  void **v24;
  uint8_t **v25;
  int v26;
  void **v27;
  unsigned int **v28;
  unsigned int **v29;
  int v30;
  int *v31;
  int *v32;
  uint32_t *v33;
  uint32_t *v34;

  v4 = a3;
  v5 = a1;
  v6 = (int)(uintptr_t)(a3[1]);
  v7 = a2;
  if ( v6 <= 0 )
    goto LABEL_34;
  v8 = **a3;
  if ( (v8 & 1) == 0 )
  {
    if ( v6 == 1 && v8 == 2 )
    {
      v9 = a1;
      if ( a1 != nullptr || (v9 = BN_new(), v7 = a2, v9 != nullptr) )
      {
        is_bit_set = BN_is_bit_set(v7, 0);
        if ( BN_set_word(v9, is_bit_set) != 0 )
          return v9;
        goto LABEL_7;
      }
      goto LABEL_41;
    }
LABEL_34:
    v9 = nullptr;
    ERR_put_error(3, 121, 112, (int)(uintptr_t)(&unk_1B15112), 0);
    return v9;
  }
  if ( v6 == 1 && v8 == 1 )
    goto LABEL_34;
  v12 = a2[1];
  if ( v12 != 0 && (v12 != 1 || *(uint32_t *)*a2 != 1 || a2[3] != 0) )
  {
    BN_CTX_start((int)(uintptr_t)(a4));
    v28 = (unsigned int **)BN_CTX_get(a4);
    v33 = (uint32_t *)(BN_CTX_get(a4));
    v29 = (unsigned int **)BN_CTX_get(a4);
    v31 = (int *)BN_CTX_get(a4);
    v32 = (int *)BN_CTX_get(a4);
    v27 = (void **)BN_CTX_get(a4);
    v13 = (int)(uintptr_t)(a2);
    if ( v27 == nullptr )
      goto LABEL_41;
    v9 = a1;
    if ( a1 == nullptr )
    {
      v9 = BN_new();
      v13 = (int)(uintptr_t)(a2);
      if ( v9 == nullptr )
        goto LABEL_41;
    }
    if ( BN_nnmod(v28, __SPAIR64__((unsigned int)(uintptr_t)(a3), v13), a4) == 0 )
      goto LABEL_31;
    v14 = v9;
    for ( i = 1; BN_is_bit_set(a3, i) == 0; ++i )
      ;
    v30 = i;
    v16 = i == 1;
    v9 = v14;
    v5 = a1;
    if ( v16 )
    {
      if ( BN_rshift(v29, (unsigned int **)a3, 2) == 0 )
        goto LABEL_31;
      v29[3] = nullptr;
      if ( BN_add_word(v29, 1) == 0 || BN_mod_exp(v9, v28, (int)(uintptr_t)(v29), (unsigned int **)a3, a4) == 0 )
        goto LABEL_31;
      goto LABEL_59;
    }
    if ( v30 == 2 )
    {
      if ( BN_mod_lshift1_quick(v31, (int)(uintptr_t)(v28), (int *)a3) == 0 )
        goto LABEL_31;
      if ( BN_rshift(v29, (unsigned int **)a3, 3) == 0 )
        goto LABEL_31;
      v29[3] = nullptr;
      if ( BN_mod_exp(v33, (unsigned int **)v31, (int)(uintptr_t)(v29), (unsigned int **)a3, a4) == 0
        || BN_mod_sqr(v27, (int)(uintptr_t)(v33), (unsigned int)(uintptr_t)(a3), a4) == 0
        || !BN_mod_mul(v31, (int)(uintptr_t)(v31), (int)(uintptr_t)(v27), (unsigned int)(uintptr_t)(a3), a4)
        || BN_sub_word(v31, 1) == 0
        || !BN_mod_mul(v32, (int)(uintptr_t)(v28), (int)(uintptr_t)(v33), (unsigned int)(uintptr_t)(a3), a4)
        || !BN_mod_mul(v32, (int)(uintptr_t)(v32), (int)(uintptr_t)(v31), (unsigned int)(uintptr_t)(a3), a4) )
      {
        goto LABEL_31;
      }
      goto LABEL_58;
    }
    if ( BN_copy(v29, a3) == nullptr )
      goto LABEL_31;
    v34 = v9;
    v29[3] = nullptr;
    v17 = 2;
    while ( 1 )
    {
      if ( v17 <= 21 )
        goto LABEL_29;
      v21 = BN_num_bits(a3);
      if ( BN_pseudo_rand(v27, v21, 0, 0) == 0 )
        goto LABEL_30;
      if ( BN_ucmp(v27, a3) >= 0 )
      {
        v22 = (int (*)(void **, void **, int **))((char (*)(int, int *, int *))BN_sub);
        if ( a3[3] != nullptr )
          v22 = (int (*)(void **, void **, int **))BN_add;
        if ( v22(v27, v27, a3) == 0 )
        {
LABEL_30:
          v9 = v34;
          goto LABEL_31;
        }
      }
      if ( v27[1] == nullptr )
      {
LABEL_29:
        if ( BN_set_word(v27, v17) == 0 )
          goto LABEL_30;
      }
      v18 = BN_kronecker(v27, v29, a4);
      if ( v18 < -1 )
        goto LABEL_30;
      if ( v18 == 0 )
      {
        v9 = v34;
LABEL_67:
        ERR_put_error(3, 121, 112, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_31;
      }
      if ( v18 != 1 )
        break;
      if ( ++v17 == 82 )
      {
        v9 = v34;
LABEL_69:
        ERR_put_error(3, 121, 113, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_31;
      }
    }
    v9 = v34;
    v4 = a3;
    if ( v18 != -1 )
      goto LABEL_69;
    if ( BN_rshift(v29, v29, v30) == 0 || BN_mod_exp(v27, (unsigned int **)v27, (int)(uintptr_t)(v29), (unsigned int **)a3, a4) == 0 )
    {
LABEL_31:
      if ( v5 != v9 )
      {
        v25 = (uint8_t **)v9;
        v9 = nullptr;
        BN_clear_free(v25);
LABEL_42:
        BN_CTX_end(a4);
        return v9;
      }
      goto LABEL_41;
    }
    if ( v27[1] == (char *)&dword_0 + 1 && *(uint32_t *)*v27 == 1 && v27[3] == nullptr )
      goto LABEL_67;
    if ( BN_rshift1(v31, (int *)v29) == 0 )
      goto LABEL_31;
    if ( v31[1] != 0 )
    {
      if ( BN_mod_exp(v32, v28, (int)(uintptr_t)(v31), (unsigned int **)a3, a4) == 0 )
        goto LABEL_31;
      if ( v32[1] != 0 )
        goto LABEL_80;
    }
    else
    {
      if ( BN_nnmod(v31, __SPAIR64__((unsigned int)(uintptr_t)(a3), (unsigned int)(uintptr_t)(v28)), a4) == 0 )
        goto LABEL_31;
      if ( v31[1] != 0 )
      {
        if ( BN_set_word(v32, 1) == 0 )
          goto LABEL_31;
LABEL_80:
        if ( BN_mod_sqr(v33, (int)(uintptr_t)(v32), (unsigned int)(uintptr_t)(a3), a4) == 0
          || !BN_mod_mul(v33, (int)(uintptr_t)(v33), (int)(uintptr_t)(v28), (unsigned int)(uintptr_t)(a3), a4)
          || !BN_mod_mul(v32, (int)(uintptr_t)(v32), (int)(uintptr_t)(v28), (unsigned int)(uintptr_t)(a3), a4) )
        {
          goto LABEL_31;
        }
        while ( v33[1] != 1 || *(uint32_t *)*v33 != 1 || v33[3] != 0 )
        {
          if ( BN_mod_sqr(v31, (int)(uintptr_t)(v33), (unsigned int)(uintptr_t)(a3), a4) == 0 )
            goto LABEL_90;
          v20 = 1;
          while ( v31[1] != 1 || *(uint32_t *)*v31 != 1 || v31[3] != 0 )
          {
            if ( ++v20 == v30 )
            {
              v9 = v34;
              v5 = a1;
              goto LABEL_61;
            }
            if ( !BN_mod_mul(v31, (int)(uintptr_t)(v31), (int)(uintptr_t)(v31), (unsigned int)(uintptr_t)(a3), a4) )
              goto LABEL_90;
          }
          if ( BN_copy(v31, v27) == nullptr )
            goto LABEL_90;
          for ( j = v30 - v20 - 1; j > 0; j = v26 - 1 )
          {
            v26 = j;
            if ( BN_mod_sqr(v31, (int)(uintptr_t)(v31), (unsigned int)(uintptr_t)(a3), a4) == 0 )
              goto LABEL_90;
          }
          if ( !BN_mod_mul(v27, (int)(uintptr_t)(v31), (int)(uintptr_t)(v31), (unsigned int)(uintptr_t)(a3), a4)
            || !BN_mod_mul(v32, (int)(uintptr_t)(v32), (int)(uintptr_t)(v31), (unsigned int)(uintptr_t)(a3), a4)
            || !BN_mod_mul(v33, (int)(uintptr_t)(v33), (int)(uintptr_t)(v27), (unsigned int)(uintptr_t)(a3), a4) )
          {
LABEL_90:
            v9 = v34;
            v5 = a1;
            goto LABEL_31;
          }
          v30 = v20;
        }
        v9 = v34;
        v5 = a1;
LABEL_58:
        if ( BN_copy(v9, v32) == nullptr )
          goto LABEL_31;
LABEL_59:
        if ( BN_mod_sqr(v32, (int)(uintptr_t)(v9), (unsigned int)(uintptr_t)(v4), a4) == 0 )
          goto LABEL_31;
        if ( BN_cmp(v32, v28) != 0 )
        {
LABEL_61:
          ERR_put_error(3, 121, 111, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_31;
        }
        goto LABEL_42;
      }
    }
    BN_set_word(v34, 0);
    goto LABEL_42;
  }
  v9 = a1;
  if ( a1 == nullptr )
  {
    v9 = BN_new();
    v7 = a2;
    if ( v9 != nullptr )
    {
      v12 = a2[1];
      goto LABEL_37;
    }
LABEL_41:
    v9 = nullptr;
    goto LABEL_42;
  }
LABEL_37:
  v19 = false;
  if ( v12 == 1 && *(uint32_t *)*v7 == 1 )
    v19 = v7[3] == 0;
  if ( BN_set_word(v9, v19) == 0 )
  {
LABEL_7:
    if ( v9 == a1 )
    {
      return nullptr;
    }
    else
    {
      v24 = (void **)v9;
      v9 = nullptr;
      BN_free(v24);
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: BN_mod_word  (binary VA: 0x1a0a730)
// Original: BN_mod_word
// ----------------------------------------------------------------------------
int BN_mod_word(uint32_t *a1, unsigned int a2)
{
  uint64_t v2; // rax
  int v3;

  LODWORD(v2) = -1;
  if ( a2 != 0 )
  {
    LODWORD(v2) = 0;
    v3 = a1[1] - 1;
    if ( v3 >= 0 )
    {
      LODWORD(v2) = 0;
      do
      {
        HIDWORD(v2) = *(uint32_t *)(*a1 + 4 * v3--);
        v2 = __PAIR64__(v2, HIDWORD(v2)) % a2;
      }
      while ( v3 != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: BN_div_word  (binary VA: 0x1a0a7b0)
// Original: BN_div_word
// ----------------------------------------------------------------------------
int BN_div_word(uint32_t *a1, unsigned int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  uint32_t *v10;
  unsigned int v11;
  int v12;
  int v13;
  uint32_t *v14;
  unsigned int v15;
  char v16;

  result = -1;
  v3 = a1;
  if ( a2 != 0 )
  {
    result = 0;
    if ( a1[1] != 0 )
    {
      v4 = BN_num_bits_word(a2);
      v16 = 32 - v4;
      v15 = a2 << (32 - v4);
      v5 = BN_lshift((void **)a1, a1, 32 - v4);
      result = -1;
      if ( v5 != 0 )
      {
        v6 = a1[1];
        result = 0;
        v7 = v6 - 1;
        if ( v6 - 1 >= 0 )
        {
          v8 = 4 * v7;
          v9 = 0;
          v10 = a1;
          do
          {
            --v7;
            v11 = *(uint32_t *)(*v10 + v8);
            v14 = v10;
            v12 = bn_div_words(v9, v11, v15);
            v10 = v14;
            v9 = v11 - v12 * v15;
            *(uint32_t *)(*v14 + v8) = v12;
            v8 -= 4;
          }
          while ( v7 != -1 );
          v3 = v14;
          v6 = v14[1];
          result = v9 >> v16;
        }
        if ( v6 > 0 )
        {
          v13 = v6 - 1;
          if ( *(uint32_t *)(*v3 + 4 * v13) == 0 )
            v3[1] = v13;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_sub_word  (binary VA: 0x1a0a8d0)
// Original: BN_sub_word
// ----------------------------------------------------------------------------
int BN_sub_word(unsigned int **a1, unsigned int a2)
{
  int v2;
  unsigned int *v3;
  bool v4;
  unsigned int *v5;
  unsigned int v6;
  int v7;
  int v8;
  int v10;

  v2 = a2;
  v10 = 1;
  if ( a2 != 0 )
  {
    v3 = a1[1];
    if ( v3 != nullptr )
    {
      if ( a1[3] != nullptr )
      {
        a1[3] = nullptr;
        v10 = BN_add_word(a1, a2);
        a1[3] = (unsigned int *)(&dword_0 + 1);
        return v10;
      }
      v4 = v3 == (unsigned int *)((char *)&dword_0 + 1);
      v5 = *a1;
      v6 = **a1;
      if ( v4 )
      {
        v8 = 0;
        v7 = 0;
        if ( a2 > v6 )
        {
          *v5 = a2 - v6;
          a1[3] = (unsigned int *)(&dword_0 + 1);
          return v10;
        }
      }
      else if ( a2 <= v6 )
      {
        v8 = 0;
        v7 = 0;
      }
      else
      {
        v7 = 0;
        do
        {
          ++v7;
          *v5 = v6 - v2;
          v2 = 1;
          v8 = v7;
          v5 = &(*a1)[v7];
          v6 = *v5;
        }
        while ( *v5 == 0 );
      }
      *v5 = v6 - v2;
      if ( (*a1)[v8] != 0 )
      {
        return 1;
      }
      else
      {
        v10 = 1;
        if ( (unsigned int *)((char *)a1[1] - 1) == (unsigned int *)v7 )
          a1[1] = (unsigned int *)v7;
      }
    }
    else
    {
      v10 = BN_set_word(a1, a2);
      if ( v10 != 0 )
        BN_set_negative((unsigned int)(uintptr_t)(a1), 1);
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: BN_add_word  (binary VA: 0x1a0aa20)
// Original: BN_add_word
// ----------------------------------------------------------------------------
int BN_add_word(unsigned int **a1, unsigned int a2)
{
  int result;
  int v3;
  int v4;
  unsigned int *v5;
  unsigned int v6;
  bool v7; // cc
  int v8;
  int v9;
  unsigned int *v10;
  int *v11;
  int v12;

  result = 1;
  v3 = a2;
  if ( a2 != 0 )
  {
    v4 = (int)(uintptr_t)(a1[1]);
    if ( v4 == 0 )
      return BN_set_word(a1, a2);
    if ( a1[3] == nullptr )
    {
      v5 = *a1;
      if ( (*a1)[v4 - 1] == -1 && v4 >= (int)(uintptr_t)(a1[2]) )
      {
        if ( bn_expand2((int)(uintptr_t)(a1), v4 + 1) == 0 )
          return 0;
        v5 = *a1;
        v4 = (int)(uintptr_t)(a1[1]);
      }
      if ( v4 <= 0 )
      {
        v9 = 0;
        v8 = 0;
      }
      else
      {
        v6 = a2 + *v5;
        v7 = a2 <= v6;
        *v5 = v6;
        v8 = 0;
        if ( v7 )
          goto LABEL_10;
        while ( (int)(uintptr_t)(a1[1]) > ++v8 )
        {
          v11 = (int *)&(*a1)[v8];
          v12 = *v11 + 1;
          *v11 = v12;
          if ( v12 != 0 )
            goto LABEL_10;
        }
        v5 = *a1;
        v9 = v8;
        v3 = 1;
      }
      v5[v9] = v3;
LABEL_10:
      v10 = a1[1];
      result = 1;
      if ( v8 >= (int)(uintptr_t)(v10) )
        a1[1] = (unsigned int *)((char *)v10 + 1);
      return result;
    }
    a1[3] = nullptr;
    result = BN_sub_word(a1, a2);
    if ( a1[1] != nullptr )
      a1[3] = (unsigned int *)(a1[3] == nullptr);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BN_mul_word  (binary VA: 0x1a0ab50)
// Original: BN_mul_word
// ----------------------------------------------------------------------------
int BN_mul_word(int a1, unsigned int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;

  v2 = *(uint32_t *)(a1 + 4);
  v3 = 1;
  if ( v2 != 0 )
  {
    if ( a2 != 0 )
    {
      v4 = bn_mul_words(*(uint32_t **)a1, *(unsigned int **)a1, v2, a2);
      if ( v4 != 0 )
      {
        v5 = *(uint32_t *)(a1 + 4);
        if ( v5 >= *(uint32_t *)(a1 + 8) )
        {
          if ( bn_expand2(a1, v5 + 1) == 0 )
            return 0;
          v5 = *(uint32_t *)(a1 + 4);
        }
        v3 = 1;
        *(uint32_t *)(*(uint32_t *)a1 + 4 * v5) = v4;
        *(uint32_t *)(a1 + 4) = v5 + 1;
      }
    }
    else
    {
      BN_set_word((uint32_t *)a1, 0);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_BUF_strings  (binary VA: 0x1a0ac10)
// Original: ERR_load_BUF_strings
// ----------------------------------------------------------------------------
int ERR_load_BUF_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CE3A0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CE3A0);
    return ERR_load_strings(0, (int *)&unk_2141E2C);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_get0_RecipientInfos  (binary VA: 0x1a0d240)
// Original: CMS_get0_RecipientInfos
// ----------------------------------------------------------------------------
int CMS_get0_RecipientInfos(int *a1)
{
  int v1;

  v1 = sub_1A0D1C0(a1);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 8);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_type  (binary VA: 0x1a0d270)
// Original: CMS_RecipientInfo_type
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_type(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: CMS_EnvelopedData_create  (binary VA: 0x1a0d280)
// Original: CMS_EnvelopedData_create
// ----------------------------------------------------------------------------
int * CMS_EnvelopedData_create(int a1)
{
  int *v1;
  int *v2;
  int v3;
  uint32_t *v5;
  char ***v6;

  v1 = (int *)CMS_ContentInfo_new();
  v2 = v1;
  if ( v1 == nullptr )
    goto LABEL_10;
  if ( v1[1] != 0 )
  {
    v3 = sub_1A0D1C0(v1);
  }
  else
  {
    v5 = (uint32_t *)ASN1_item_new((int)(uintptr_t)(&CMS_EnvelopedData_it));
    v2[1] = (int)(uintptr_t)(v5);
    if ( v5 == nullptr )
    {
      ERR_put_error(46, 126, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
      CMS_ContentInfo_free(v2);
LABEL_10:
      v2 = nullptr;
      ERR_put_error(46, 124, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v2;
    }
    *v5 = 0;
    v6 = *(char ****)(v2[1] + 12);
    *v6 = OBJ_nid2obj(0x15u);
    ASN1_OBJECT_free((void *)*v2);
    *v2 = (int)(uintptr_t)(OBJ_nid2obj(0x17u));
    v3 = v2[1];
  }
  if ( v3 == 0 || cms_EncryptedContent_init(*(uint32_t *)(v3 + 12), a1, 0, 0) == 0 )
    goto LABEL_9;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CMS_add1_recipient_cert  (binary VA: 0x1a0d3d0)
// Original: CMS_add1_recipient_cert
// ----------------------------------------------------------------------------
uint32_t * CMS_add1_recipient_cert(int *a1, int a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int pubkey;
  int v6;
  int (*v7)(int, int, uint32_t, uint32_t *);
  int v8;
  char v10;
  int v11;
  int v12;

  v3 = nullptr;
  v12 = sub_1A0D1C0(a1);
  if ( v12 != 0 )
  {
    v3 = (uint32_t *)ASN1_item_new((int)CMS_RecipientInfo_it);
    if ( v3 != nullptr )
    {
      v4 = (uint32_t *)ASN1_item_new((int)(uintptr_t)(&CMS_KeyTransRecipientInfo_it));
      v3[1] = (uint32_t)(uintptr_t)(v4);
      if ( v4 != nullptr )
      {
        *v3 = 0;
        X509_check_purpose(a2, -1, -1);
        pubkey = X509_get_pubkey(a2);
        if ( pubkey == 0 )
        {
          ERR_put_error(46, 101, 113, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_13;
        }
        v11 = pubkey;
        CRYPTO_add_lock((uint32_t *)(a2 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
        v4[5] = v11;
        v4[4] = a2;
        *v4 = (a3 & 0x10000) != 0 ? 2 : 0;
        if ( cms_set1_SignerIdentifier(v4[1], a2, (a3 & 0x10000) != 0) == 0 )
        {
LABEL_13:
          v10 = (char)(uintptr_t)(v3);
          v3 = nullptr;
          ASN1_item_free(v10, CMS_RecipientInfo_it);
          return v3;
        }
        v6 = *(uint32_t *)(v11 + 12);
        if ( v6 != 0 )
        {
          v7 = *(int (**)(int, int, uint32_t, uint32_t *))(v6 + 84);
          if ( v7 != nullptr )
          {
            v8 = v7(v11, 7, 0, v3);
            if ( v8 == -2 )
            {
              ERR_put_error(46, 101, 125, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_13;
            }
            if ( v8 <= 0 )
            {
              ERR_put_error(46, 101, 111, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_13;
            }
          }
        }
        if ( sk_push(*(int **)(v12 + 8), (int)(uintptr_t)(v3)) != 0 )
          return v3;
      }
    }
    ERR_put_error(46, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v3 == nullptr )
      return v3;
    goto LABEL_13;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_ktri_get0_algs  (binary VA: 0x1a0d640)
// Original: CMS_RecipientInfo_ktri_get0_algs
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_ktri_get0_algs(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *v4;
  int result;

  if ( *a1 != 0 )
  {
    ERR_put_error(46, 142, 124, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    v4 = (uint32_t *)a1[1];
    if ( a2 != nullptr )
      *a2 = v4[5];
    if ( a3 != nullptr )
      *a3 = v4[4];
    result = 1;
    if ( a4 != nullptr )
      *a4 = v4[2];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_ktri_get0_signer_id  (binary VA: 0x1a0d6e0)
// Original: CMS_RecipientInfo_ktri_get0_signer_id
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_ktri_get0_signer_id(uint32_t *a1, int a2, int a3, int a4)
{
  if ( *a1 == 0 )
    return cms_SignerIdentifier_get0_signer_id(*(uint32_t *)(a1[1] + 4), a2, a3, a4);
  ERR_put_error(46, 143, 124, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_ktri_cert_cmp  (binary VA: 0x1a0d760)
// Original: CMS_RecipientInfo_ktri_cert_cmp
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_ktri_cert_cmp(uint32_t *a1, int a2)
{
  if ( *a1 == 0 )
    return cms_SignerIdentifier_cert_cmp(*(uint32_t *)(a1[1] + 4), a2);
  ERR_put_error(46, 139, 124, (int)(uintptr_t)(&unk_1B15112), 0);
  return -2;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_set0_pkey  (binary VA: 0x1a0d7d0)
// Original: CMS_RecipientInfo_set0_pkey
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_set0_pkey(uint32_t *a1, int a2)
{
  if ( *a1 != 0 )
  {
    ERR_put_error(46, 145, 124, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    *(uint32_t *)(a1[1] + 20) = a2;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_kekri_id_cmp  (binary VA: 0x1a0d840)
// Original: CMS_RecipientInfo_kekri_id_cmp
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_kekri_id_cmp(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t v5[7];

  if ( *a1 == 2 )
  {
    v3 = a1[1];
    v5[2] = a2;
    v5[1] = 4;
    v5[3] = 0;
    v5[0] = a3;
    return ASN1_OCTET_STRING_cmp((int)(uintptr_t)(v5), **(uint32_t **)(v3 + 4));
  }
  else
  {
    ERR_put_error(46, 138, 123, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: CMS_add0_recipient_key  (binary VA: 0x1a0d8d0)
// Original: CMS_add0_recipient_key
// ----------------------------------------------------------------------------
uint32_t * CMS_add0_recipient_key(int *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9;
  uint32_t *v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  char **v18;
  char v19;
  int v20;
  int v21;

  v9 = a2;
  v10 = nullptr;
  v11 = sub_1A0D1C0(a1);
  if ( v11 != 0 )
  {
    if ( a2 != 0 )
    {
      if ( a2 - 788 > 2 || (v13 = dword_1D318C0[a2 - 788]) == 0 )
      {
        v10 = nullptr;
        ERR_put_error(46, 100, 153, (int)(uintptr_t)(&unk_1B15112), 0);
        return v10;
      }
      if ( a4 != v13 )
        goto LABEL_6;
    }
    else
    {
      switch ( a4 )
      {
        case 16:
          v9 = 788;
          break;
        case 24:
          v9 = 789;
          break;
        case 32:
          v9 = 790;
          break;
        default:
LABEL_6:
          ERR_put_error(46, 100, 118, (int)(uintptr_t)(&unk_1B15112), 0);
          return v10;
      }
    }
    v20 = v11;
    v10 = (uint32_t *)ASN1_item_new((int)CMS_RecipientInfo_it);
    if ( v10 == nullptr )
      goto LABEL_17;
    v14 = ASN1_item_new((int)(uintptr_t)(&CMS_KEKRecipientInfo_it));
    v10[1] = v14;
    v15 = v14;
    v16 = v20;
    if ( v14 == 0 )
      goto LABEL_17;
    *v10 = 2;
    if ( a8 != 0 )
    {
      v21 = *(uint32_t *)(v14 + 4);
      *(uint32_t *)(v21 + 8) = ASN1_item_new((int)(uintptr_t)(&CMS_OtherKeyAttribute_it));
      v16 = v20;
      if ( *(uint32_t *)(*(uint32_t *)(v15 + 4) + 8) == 0 )
        goto LABEL_17;
    }
    if ( sk_push(*(int **)(v16 + 8), (int)(uintptr_t)(v10)) != 0 )
    {
      *(uint32_t *)(v15 + 16) = a3;
      *(uint32_t *)(v15 + 20) = a4;
      *(uint32_t *)v15 = 4;
      ASN1_STRING_set0(**(uint32_t **)(v15 + 4), a5, a6);
      *(uint32_t *)(*(uint32_t *)(v15 + 4) + 4) = a7;
      v17 = *(uint32_t **)(*(uint32_t *)(v15 + 4) + 8);
      if ( v17 != nullptr )
      {
        *v17 = a8;
        *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v15 + 4) + 8) + 4) = a9;
      }
      v18 = OBJ_nid2obj(v9);
      X509_ALGOR_set0(*(uint32_t *)(v15 + 8), (int)(uintptr_t)(v18), -1, 0);
    }
    else
    {
LABEL_17:
      ERR_put_error(46, 100, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v10 != nullptr )
      {
        v19 = (char)(uintptr_t)(v10);
        v10 = nullptr;
        ASN1_item_free(v19, CMS_RecipientInfo_it);
      }
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_kekri_get0_id  (binary VA: 0x1a0db60)
// Original: CMS_RecipientInfo_kekri_get0_id
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_kekri_get0_id(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int result;
  int v10;

  if ( *a1 == 2 )
  {
    v6 = a1[1];
    v7 = *(uint32_t **)(v6 + 4);
    if ( a2 != nullptr )
      *a2 = *(uint32_t *)(v6 + 8);
    if ( a3 != nullptr )
      *a3 = *v7;
    if ( a4 != nullptr )
      *a4 = v7[1];
    if ( a5 != nullptr )
    {
      v8 = (uint32_t *)v7[2];
      if ( v8 != nullptr )
        *a5 = *v8;
      else
        *a5 = 0;
    }
    result = 1;
    if ( a6 != nullptr )
    {
      v10 = v7[2];
      if ( v10 != 0 )
        *a6 = *(uint32_t *)(v10 + 4);
      else
        *a6 = 0;
    }
  }
  else
  {
    ERR_put_error(46, 137, 123, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_set0_key  (binary VA: 0x1a0dc50)
// Original: CMS_RecipientInfo_set0_key
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_set0_key(uint32_t *a1, int a2, int a3)
{
  int v3;

  if ( *a1 == 2 )
  {
    v3 = a1[1];
    *(uint32_t *)(v3 + 16) = a2;
    *(uint32_t *)(v3 + 20) = a3;
    return 1;
  }
  else
  {
    ERR_put_error(46, 144, 123, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: CMS_RecipientInfo_decrypt  (binary VA: 0x1a0dcc0)
// Original: CMS_RecipientInfo_decrypt
// ----------------------------------------------------------------------------
int CMS_RecipientInfo_decrypt(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int *v3;
  int v4;
  void **v5;
  uint8_t *v6;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  uint8_t *v12;
  int v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef int _g4_t_v18[64];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v15)) > _g4_s1 ? (0u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  if ( *a2 != 0 )
  {
    if ( *a2 != 2 )
    {
      v4 = 0;
      ERR_put_error(46, 134, 155, (int)(uintptr_t)(&unk_1B15112), 0);
      return v4;
    }
    v8 = a2[1];
    v9 = *(uint32_t *)(*(uint32_t *)(a1 + 4) + 12);
    if ( *(uint32_t *)(v8 + 16) == 0 )
    {
      v4 = 0;
      ERR_put_error(46, 135, 130, (int)(uintptr_t)(&unk_1B15112), 0);
      return v4;
    }
    v10 = OBJ_obj2nid(**(uint32_t **)(v8 + 8)) - 788;
    v11 = 0;
    if ( v10 <= 2 )
    {
      v11 = dword_1D318C0[v10];
      if ( *(uint32_t *)(v8 + 20) != v11 )
        goto LABEL_17;
    }
    else if ( *(uint32_t *)(v8 + 20) != 0 )
    {
LABEL_17:
      v4 = 0;
      ERR_put_error(46, 135, 118, (int)(uintptr_t)(&unk_1B15112), 0);
      return v4;
    }
    if ( **(int **)(v8 + 12) > 15 )
    {
      if ( AES_set_decrypt_key(*(uint8_t **)(v8 + 16), 8 * v11, v18) != 0 )
      {
        v4 = 0;
        ERR_put_error(46, 135, 115, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        v12 = CRYPTO_malloc(**(uint32_t **)(v8 + 12) - 8, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v12 != nullptr )
        {
          v15 = v12;
          v13 = AES_unwrap_key((int)(uintptr_t)(v18), nullptr, v12, *(uint32_t *)(*(uint32_t *)(v8 + 12) + 8), **(uint32_t **)(v8 + 12));
          if ( v13 <= 0 )
          {
            ERR_put_error(46, 135, 157, (int)(uintptr_t)(&unk_1B15112), 0);
            v4 = 0;
            CRYPTO_free(v15);
          }
          else
          {
            *(uint32_t *)(v9 + 16) = (uint32_t)(uintptr_t)(v15);
            *(uint32_t *)(v9 + 20) = v13;
            v4 = 1;
          }
        }
        else
        {
          v4 = 0;
          ERR_put_error(46, 135, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
    else
    {
      v4 = 0;
      ERR_put_error(46, 135, 117, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    OPENSSL_cleanse((uint8_t *)v18, 0xF4u);
    return v4;
  }
  v16 = a2[1];
  v2 = *(uint32_t **)(v16 + 20);
  if ( v2 != nullptr )
  {
    v3 = (int *)EVP_PKEY_CTX_new(v2, nullptr);
    v4 = 0;
    v5 = (void **)v3;
    if ( v3 != nullptr )
    {
      if ( EVP_PKEY_decrypt_init(v3) > 0 )
      {
        if ( EVP_PKEY_CTX_ctrl((int)(uintptr_t)(v5), -1, 512, 10, 0, (int)(uintptr_t)(a2)) <= 0 )
        {
          ERR_put_error(46, 140, 110, (int)(uintptr_t)(&unk_1B15112), 0);
        }
        else if ( EVP_PKEY_decrypt((int *)v5, 0, &v17, *(uint32_t *)(*(uint32_t *)(v16 + 12) + 8), **(uint32_t **)(v16 + 12)) > 0 )
        {
          v6 = CRYPTO_malloc(v17, (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v6 != nullptr )
          {
            v14 = v6;
            if ( EVP_PKEY_decrypt(
                   (int *)v5,
                   (int)(uintptr_t)(v6),
                   &v17,
                   *(uint32_t *)(*(uint32_t *)(v16 + 12) + 8),
                   **(uint32_t **)(v16 + 12)) <= 0 )
            {
              ERR_put_error(46, 140, 104, (int)(uintptr_t)(&unk_1B15112), 0);
              EVP_PKEY_CTX_free(v5);
              CRYPTO_free(v14);
              return v4;
            }
            v4 = 1;
            *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 12) + 16) = (uint32_t)(uintptr_t)(v14);
            *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 12) + 20) = v17;
          }
          else
          {
            ERR_put_error(46, 140, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          }
        }
      }
      EVP_PKEY_CTX_free(v5);
    }
  }
  else
  {
    v4 = 0;
    ERR_put_error(46, 140, 133, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_CMS_strings  (binary VA: 0x1a0e700)
// Original: ERR_load_CMS_strings
// ----------------------------------------------------------------------------
int ERR_load_CMS_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CE3E0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CE3E0);
    return ERR_load_strings(0, &dword_20CE600);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_CMS_ContentInfo  (binary VA: 0x1a0e8f0)
// Original: d2i_CMS_ContentInfo
// ----------------------------------------------------------------------------
int d2i_CMS_ContentInfo(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&CMS_ContentInfo_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_CMS_ContentInfo  (binary VA: 0x1a0e930)
// Original: i2d_CMS_ContentInfo
// ----------------------------------------------------------------------------
int i2d_CMS_ContentInfo(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&CMS_ContentInfo_it));
}

// ----------------------------------------------------------------------------
// Function: CMS_ContentInfo_new  (binary VA: 0x1a0e970)
// Original: CMS_ContentInfo_new
// ----------------------------------------------------------------------------
int CMS_ContentInfo_new()
{
  return ASN1_item_new((int)(uintptr_t)(&CMS_ContentInfo_it));
}

// ----------------------------------------------------------------------------
// Function: CMS_ContentInfo_free  (binary VA: 0x1a0e9a0)
// Original: CMS_ContentInfo_free
// ----------------------------------------------------------------------------
int CMS_ContentInfo_free(char a1)
{
  return ASN1_item_free(a1, CMS_ContentInfo_it);
}

// ----------------------------------------------------------------------------
// Function: CMS_ContentInfo_print_ctx  (binary VA: 0x1a0e9d0)
// Original: CMS_ContentInfo_print_ctx
// ----------------------------------------------------------------------------
bool CMS_ContentInfo_print_ctx(uint32_t *a1, int *a2, int a3, int *a4)
{
  return ASN1_item_print(a1, a2, a3, (int)CMS_ContentInfo_it, a4);
}

// ----------------------------------------------------------------------------
// Function: CMS_get0_type  (binary VA: 0x1a0ea20)
// Original: CMS_get0_type
// ----------------------------------------------------------------------------
int CMS_get0_type(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: CMS_get0_content  (binary VA: 0x1a0ea30)
// Original: CMS_get0_content
// ----------------------------------------------------------------------------
int CMS_get0_content(int *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int result;

  v1 = OBJ_obj2nid(*a1);
  v2 = v1;
  if ( v1 != 25 )
  {
    if ( v1 > 25 )
    {
      switch ( v1 )
      {
        case 26:
          return *(uint32_t *)(a1[1] + 4) + 8;
        case 205:
          return *(uint32_t *)(a1[1] + 20) + 4;
        case 786:
          return *(uint32_t *)(a1[1] + 12) + 4;
        default:
          goto LABEL_6;
      }
    }
    if ( v1 != 22 )
    {
      if ( v1 == 23 )
        return *(uint32_t *)(a1[1] + 12) + 8;
      result = (int)(uintptr_t)(a1 + 1);
      if ( v2 != 21 )
      {
LABEL_6:
        v3 = (uint32_t *)a1[1];
        if ( *v3 == 4 )
        {
          return (int)(uintptr_t)(v3 + 1);
        }
        else
        {
          ERR_put_error(46, 129, 152, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
      return result;
    }
  }
  return *(uint32_t *)(a1[1] + 8) + 4;
}

// ----------------------------------------------------------------------------
// Function: CMS_dataFinal  (binary VA: 0x1a0eb60)
// Original: CMS_dataFinal
// ----------------------------------------------------------------------------
int CMS_dataFinal(int *a1, int **a2)
{
  int *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int *type;
  int v9;
  typedef int *_g4_t_v10;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v2 = (int *)CMS_get0_content(a1);
  v3 = 0;
  v4 = v2;
  if ( v2 != nullptr )
  {
    v5 = *v2;
    if ( v5 != 0 && (*(uint8_t *)(v5 + 12) & 0x20) != 0 )
    {
      type = BIO_find_type(a2, 1025);
      if ( type == nullptr )
      {
        ERR_put_error(46, 110, 105, (int)(uintptr_t)(&unk_1B15112), 0);
        return v3;
      }
      v10 = type;
      v9 = BIO_ctrl(type, 3, 0, (int)(uintptr_t)(v11));
      BIO_set_flags((int)(uintptr_t)(v10), 512);
      BIO_ctrl(v10, 130, 0, 0);
      ASN1_STRING_set0(*v4, v11[0], v9);
      *(uint32_t *)(*v4 + 12) &= ~0x20u;
    }
    v6 = OBJ_obj2nid(*a1);
    if ( v6 != 23 )
    {
      if ( v6 <= 23 )
      {
        if ( v6 != 21 )
        {
          if ( v6 == 22 )
            return cms_SignedData_final(a1, a2);
          goto LABEL_9;
        }
      }
      else if ( v6 != 26 && v6 != 786 )
      {
        if ( v6 == 25 )
          return cms_DigestedData_do_final(a1, a2, 0);
LABEL_9:
        v3 = 0;
        ERR_put_error(46, 110, 156, (int)(uintptr_t)(&unk_1B15112), 0);
        return v3;
      }
    }
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: CMS_dataInit  (binary VA: 0x1a0edc0)
// Original: CMS_dataInit
// ----------------------------------------------------------------------------
uint32_t * CMS_dataInit(int *a1, uint8_t *a2)
{
  uint8_t *v2;
  int v3;
  uint32_t *inited;
  uint32_t *v6;

  v2 = a2;
  if ( a2 == nullptr )
  {
    v2 = cms_content_bio(a1);
    if ( v2 == nullptr )
    {
      ERR_put_error(46, 111, 127, (int)(uintptr_t)(&unk_1B15112), 0);
      return (uint32_t *)(v2);
    }
  }
  v3 = OBJ_obj2nid(*a1);
  if ( v3 == 23 )
  {
    inited = cms_EnvelopedData_init_bio((int)(uintptr_t)(a1));
    goto LABEL_15;
  }
  if ( v3 > 23 )
  {
    switch ( v3 )
    {
      case 25:
        inited = (uint32_t *)cms_DigestedData_init_bio(a1);
        break;
      case 26:
        inited = (uint32_t *)cms_EncryptedData_init_bio(a1);
        break;
      case 786:
        inited = (uint32_t *)cms_CompressedData_init_bio(a1);
        break;
      default:
LABEL_7:
        v2 = nullptr;
        ERR_put_error(46, 111, 156, (int)(uintptr_t)(&unk_1B15112), 0);
        return (uint32_t *)(v2);
    }
LABEL_15:
    if ( inited != nullptr )
      return BIO_push(inited, v2);
    goto LABEL_12;
  }
  if ( v3 == 21 )
    return (uint32_t *)(v2);
  if ( v3 != 22 )
    goto LABEL_7;
  inited = (uint32_t *)cms_SignedData_init_bio(a1);
  if ( inited != nullptr )
    return BIO_push(inited, v2);
LABEL_12:
  if ( a2 != nullptr )
    return nullptr;
  v6 = (uint32_t *)(v2);
  v2 = nullptr;
  BIO_free(v6);
  return (uint32_t *)(v2);
}

// ----------------------------------------------------------------------------
// Function: CMS_get0_eContentType  (binary VA: 0x1a0ef40)
// Original: CMS_get0_eContentType
// ----------------------------------------------------------------------------
int CMS_get0_eContentType(int *a1)
{
  int v1;

  v1 = sub_1A0E800(a1);
  if ( v1 != 0 )
    return *(uint32_t *)v1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: CMS_set1_eContentType  (binary VA: 0x1a0ef60)
// Original: CMS_set1_eContentType
// ----------------------------------------------------------------------------
int CMS_set1_eContentType(int *a1, int a2)
{
  int v2;
  int v3;
  void **v4;
  size_t *v5;
  size_t *v6;

  v2 = sub_1A0E800(a1);
  v3 = 0;
  v4 = (void **)v2;
  if ( v2 != 0 )
  {
    LOBYTE(v3) = 1;
    if ( a2 != 0 )
    {
      v5 = OBJ_dup(a2);
      v3 = 0;
      v6 = v5;
      if ( v5 != nullptr )
      {
        ASN1_OBJECT_free(*v4);
        *v4 = v6;
        return 1;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: CMS_is_detached  (binary VA: 0x1a0efd0)
// Original: CMS_is_detached
// ----------------------------------------------------------------------------
int CMS_is_detached(int *a1)
{
  uint32_t *v1;

  v1 = (uint32_t *)CMS_get0_content(a1);
  if ( v1 != nullptr )
    return *v1 == 0;
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: CMS_set_detached  (binary VA: 0x1a0f010)
// Original: CMS_set_detached
// ----------------------------------------------------------------------------
int CMS_set_detached(int *a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;

  v2 = 0;
  v3 = (int *)CMS_get0_content(a1);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = *v3;
    if ( a2 != 0 )
    {
      LOWORD(v2) = 1;
      if ( v5 != 0 )
      {
        ASN1_OCTET_STRING_free(v5);
        *v4 = 0;
      }
    }
    else if ( v5 != 0 || (v5 = ASN1_OCTET_STRING_new(), *v4 = v5, v5 != 0) )
    {
      *(uint32_t *)(v5 + 12) |= 0x20u;
      return 1;
    }
    else
    {
      ERR_put_error(46, 147, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CMS_add0_CertificateChoices  (binary VA: 0x1a0f3d0)
// Original: CMS_add0_CertificateChoices
// ----------------------------------------------------------------------------
int CMS_add0_CertificateChoices(int *a1)
{
  int **v1;
  int **v2;
  int v3;
  int v4;
  int *v6;
  char v7;

  v1 = (int **)sub_1A0E760(a1);
  v2 = v1;
  if ( v1 == nullptr )
    return 0;
  if ( *v1 != nullptr || (v6 = (int *)(sk_new_null()), v4 = 0, *v2 = v6, v6 != nullptr) )
  {
    v3 = ASN1_item_new((int)CMS_CertificateChoices_it);
    v4 = v3;
    if ( v3 != 0 && sk_push(*v2, v3) == 0 )
    {
      v7 = v4;
      v4 = 0;
      ASN1_item_free(v7, CMS_CertificateChoices_it);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CMS_add0_cert  (binary VA: 0x1a0f470)
// Original: CMS_add0_cert
// ----------------------------------------------------------------------------
int CMS_add0_cert(int *a1, int a2)
{
  int v2;
  int **v3;
  uint32_t *v4;
  uint32_t *v6;
  int v7;

  v2 = 0;
  v3 = (int **)sub_1A0E760(a1);
  if ( v3 == nullptr )
    return 0;
  while ( v2 < sk_num((int)(uintptr_t)(*v3)) )
  {
    v4 = (uint32_t *)sk_value(*v3, v2);
    if ( *v4 == 0 && X509_cmp(v4[1], a2) == 0 )
    {
      ERR_put_error(46, 164, 175, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    ++v2;
  }
  v6 = (uint32_t *)CMS_add0_CertificateChoices(a1);
  v7 = 0;
  if ( v6 == nullptr )
    return 0;
  *v6 = 0;
  v6[1] = a2;
  LOBYTE(v7) = 1;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: CMS_add1_cert  (binary VA: 0x1a0f540)
// Original: CMS_add1_cert
// ----------------------------------------------------------------------------
int CMS_add1_cert(int *a1, int a2)
{
  int v2;

  v2 = CMS_add0_cert(a1, a2);
  if ( v2 > 0 )
    CRYPTO_add_lock((uint32_t *)(a2 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CMS_add0_RevocationInfoChoice  (binary VA: 0x1a0f5c0)
// Original: CMS_add0_RevocationInfoChoice
// ----------------------------------------------------------------------------
int CMS_add0_RevocationInfoChoice(int *a1)
{
  int v1;
  int v2;
  int **v4;
  int v5;
  int *v6;
  char v7;

  v1 = OBJ_obj2nid(*a1);
  if ( v1 == 22 )
  {
    v4 = (int **)(a1[1] + 16);
  }
  else
  {
    if ( v1 != 23 )
    {
      v2 = 0;
      ERR_put_error(46, 132, 152, (int)(uintptr_t)(&unk_1B15112), 0);
      return v2;
    }
    v4 = (int **)(*(uint32_t *)(a1[1] + 4) + 4);
  }
  if ( v4 == nullptr )
    return 0;
  if ( *v4 != nullptr || (v6 = (int *)(sk_new_null()), v2 = 0, *v4 = v6, v6 != nullptr) )
  {
    v5 = ASN1_item_new((int)CMS_RevocationInfoChoice_it);
    v2 = v5;
    if ( v5 != 0 && sk_push(*v4, v5) == 0 )
    {
      v7 = v2;
      v2 = 0;
      ASN1_item_free(v7, CMS_RevocationInfoChoice_it);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CMS_add0_crl  (binary VA: 0x1a0f6c0)
// Original: CMS_add0_crl
// ----------------------------------------------------------------------------
int CMS_add0_crl(int *a1, int a2)
{
  uint32_t *v2;
  int result;

  v2 = (uint32_t *)CMS_add0_RevocationInfoChoice(a1);
  result = 0;
  if ( v2 != nullptr )
  {
    *v2 = 0;
    v2[1] = a2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_add1_crl  (binary VA: 0x1a0f700)
// Original: CMS_add1_crl
// ----------------------------------------------------------------------------
int CMS_add1_crl(int *a1, int a2)
{
  int v2;

  v2 = CMS_add0_crl(a1, a2);
  if ( v2 > 0 )
    CRYPTO_add_lock((uint32_t *)(a2 + 12), 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CMS_get1_certs  (binary VA: 0x1a0f780)
// Original: CMS_get1_certs
// ----------------------------------------------------------------------------
void ** CMS_get1_certs(int *a1)
{
  int **v1;
  int v2;
  uint32_t *v3;
  void **v5;

  v1 = (int **)sub_1A0E760(a1);
  if ( v1 == nullptr )
    return nullptr;
  v2 = 0;
  v5 = nullptr;
  while ( v2 < sk_num((int)(uintptr_t)(*v1)) )
  {
    v3 = (uint32_t *)sk_value(*v1, v2);
    if ( *v3 == 0 )
    {
      if ( v5 == nullptr )
      {
        v5 = (void **)sk_new_null();
        if ( v5 == nullptr )
          return v5;
      }
      if ( sk_push((int *)v5, v3[1]) == 0 )
      {
        sk_pop_free(v5, (void (*)(uint32_t))((int (*)(char))X509_free));
        return nullptr;
      }
      CRYPTO_add_lock((uint32_t *)(v3[1] + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    ++v2;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: CMS_get1_crls  (binary VA: 0x1a0f8a0)
// Original: CMS_get1_crls
// ----------------------------------------------------------------------------
void ** CMS_get1_crls(int *a1)
{
  int v1;
  int **v3;
  int v4;
  uint32_t *v5;
  void **v6;

  v1 = OBJ_obj2nid(*a1);
  if ( v1 == 22 )
  {
    v3 = (int **)(a1[1] + 16);
  }
  else
  {
    if ( v1 != 23 )
    {
      ERR_put_error(46, 132, 152, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    v3 = (int **)(*(uint32_t *)(a1[1] + 4) + 4);
  }
  if ( v3 == nullptr )
    return nullptr;
  v4 = 0;
  v6 = nullptr;
  while ( v4 < sk_num((int)(uintptr_t)(*v3)) )
  {
    v5 = (uint32_t *)sk_value(*v3, v4);
    if ( *v5 == 0 )
    {
      if ( v6 == nullptr )
      {
        v6 = (void **)sk_new_null();
        if ( v6 == nullptr )
          return v6;
      }
      if ( sk_push((int *)v6, v5[1]) == 0 )
      {
        sk_pop_free(v6, (void (*)(uint32_t))X509_CRL_free);
        return nullptr;
      }
      CRYPTO_add_lock((uint32_t *)(v5[1] + 12), 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    ++v4;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignedData_init  (binary VA: 0x1a0fb80)
// Original: CMS_SignedData_init
// ----------------------------------------------------------------------------
bool CMS_SignedData_init(int *a1)
{
  return sub_1A0FAA0(a1) != 0;
}

// ----------------------------------------------------------------------------
// Function: CMS_get0_SignerInfos  (binary VA: 0x1a0fe40)
// Original: CMS_get0_SignerInfos
// ----------------------------------------------------------------------------
int CMS_get0_SignerInfos(int *a1)
{
  int v1;

  v1 = sub_1A0FA20(a1);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 20);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: CMS_get0_signers  (binary VA: 0x1a0fe70)
// Original: CMS_get0_signers
// ----------------------------------------------------------------------------
int * CMS_get0_signers(int *a1)
{
  int *v1;
  int v2;
  int i;
  int v4;
  int v5;
  void **v7;
  int *v8;

  v1 = nullptr;
  v2 = 0;
  v8 = (int *)CMS_get0_SignerInfos(a1);
  for ( i = sk_num((int)(uintptr_t)(v8)); v2 < i; i = sk_num((int)(uintptr_t)(v8)) )
  {
    v4 = sk_value(v8, v2);
    v5 = *(uint32_t *)(v4 + 28);
    if ( v5 != 0 )
    {
      if ( v1 != nullptr )
      {
        if ( sk_push(v1, v5) == 0 )
          goto LABEL_9;
      }
      else
      {
        v1 = (int *)(sk_new_null());
        if ( v1 == nullptr )
          return v1;
        if ( sk_push(v1, *(uint32_t *)(v4 + 28)) == 0 )
        {
LABEL_9:
          v7 = (void **)v1;
          v1 = nullptr;
          sk_free(v7);
          return v1;
        }
      }
    }
    ++v2;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_set1_signer_cert  (binary VA: 0x1a0ff20)
// Original: CMS_SignerInfo_set1_signer_cert
// ----------------------------------------------------------------------------
int CMS_SignerInfo_set1_signer_cert(int a1, int a2)
{
  int result;

  if ( a2 != 0 )
  {
    CRYPTO_add_lock((uint32_t *)(a2 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( *(uint32_t *)(a1 + 32) != 0 )
      EVP_PKEY_free(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = X509_get_pubkey(a2);
  }
  result = *(uint32_t *)(a1 + 28);
  if ( result != 0 )
    result = X509_free(*(uint32_t *)(a1 + 28));
  *(uint32_t *)(a1 + 28) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_get0_signer_id  (binary VA: 0x1a0ffc0)
// Original: CMS_SignerInfo_get0_signer_id
// ----------------------------------------------------------------------------
char CMS_SignerInfo_get0_signer_id(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  return cms_SignerIdentifier_get0_signer_id(*(uint32_t **)(a1 + 4), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_cert_cmp  (binary VA: 0x1a10000)
// Original: CMS_SignerInfo_cert_cmp
// ----------------------------------------------------------------------------
int CMS_SignerInfo_cert_cmp(int a1, int a2)
{
  return cms_SignerIdentifier_cert_cmp(*(uint32_t **)(a1 + 4), a2);
}

// ----------------------------------------------------------------------------
// Function: CMS_set1_signers_certs  (binary VA: 0x1a10030)
// Original: CMS_set1_signers_certs
// ----------------------------------------------------------------------------
int CMS_set1_signers_certs(int *a1, int *a2, char a3)
{
  int v3;
  int i;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;

  v3 = sub_1A0FA20(a1);
  v14 = v3;
  if ( v3 == 0 )
    return -1;
  v18 = *(int **)(v3 + 12);
  v17 = 0;
  for ( i = 0; i < sk_num(*(uint32_t *)(v14 + 20)); ++i )
  {
    v5 = sk_value(*(int **)(v14 + 20), i);
    if ( *(uint32_t *)(v5 + 28) == 0 )
    {
      v6 = 0;
      v15 = v5;
      while ( 1 )
      {
        if ( v6 >= sk_num((int)(uintptr_t)(a2)) )
        {
          v8 = v15;
          goto LABEL_11;
        }
        v7 = sk_value(a2, v6);
        if ( CMS_SignerInfo_cert_cmp(v15, v7) == 0 )
          break;
        ++v6;
      }
      v13 = v7;
      v8 = v15;
      CMS_SignerInfo_set1_signer_cert(v15, v13);
      ++v17;
LABEL_11:
      if ( *(uint32_t *)(v8 + 28) == 0 && (a3 & 0x10) == 0 )
      {
        v9 = 0;
        v16 = v8;
        while ( v9 < sk_num((int)(uintptr_t)(v18)) )
        {
          v10 = (uint32_t *)sk_value(v18, v9);
          if ( *v10 == 0 )
          {
            v11 = v10[1];
            if ( CMS_SignerInfo_cert_cmp(v16, v11) == 0 )
            {
              CMS_SignerInfo_set1_signer_cert(v16, v11);
              ++v17;
              break;
            }
          }
          ++v9;
        }
      }
    }
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_get0_algs  (binary VA: 0x1a101d0)
// Original: CMS_SignerInfo_get0_algs
// ----------------------------------------------------------------------------
uint32_t * CMS_SignerInfo_get0_algs(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  uint32_t *result;

  result = a1;
  if ( a2 != nullptr )
    *a2 = a1[8];
  if ( a3 != nullptr )
    *a3 = a1[7];
  if ( a4 != nullptr )
    *a4 = a1[2];
  if ( a5 != nullptr )
  {
    result = (uint32_t *)a1[4];
    *a5 = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_sign  (binary VA: 0x1a10230)
// Original: CMS_SignerInfo_sign
// ----------------------------------------------------------------------------
int CMS_SignerInfo_sign(int a1)
{
  unsigned int v1;
  char *v2;
  uint32_t *digestbyname;
  int result;
  int v5;
  uint8_t *v6;
  int v7;
  char v8;
  int v9;
  typedef char _g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef size_t _g4_t_v13;
  typedef int _g4_t_v14[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  v12 = nullptr;
  v1 = OBJ_obj2nid(**(uint32_t **)(a1 + 8));
  v2 = OBJ_nid2sn(v1);
  digestbyname = (uint32_t *)EVP_get_digestbyname((int)(uintptr_t)(v2));
  result = 0;
  if ( digestbyname != nullptr )
  {
    EVP_MD_CTX_init(v14);
    if ( (int)CMS_signed_get_attr_by_NID(a1, 52, -1) < 0 )
    {
      v7 = X509_gmtime_adj(0, 0);
      v8 = v7;
      if ( v7 == 0
        || (v10 = v7, v9 = CMS_signed_add1_attr_by_NID(a1, 52, *(uint32_t *)(v7 + 4), (char *)v7, -1), v8 = v10, v9 <= 0) )
      {
        ASN1_TIME_free(v8);
        ERR_put_error(46, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_13;
      }
      ASN1_TIME_free(v10);
    }
    if ( EVP_DigestSignInit((int)(uintptr_t)(v14), &v11, digestbyname, nullptr, *(uint32_t *)(a1 + 32)) <= 0 )
      goto LABEL_13;
    if ( EVP_PKEY_CTX_ctrl(v11, -1, 8, 11, 0, a1) <= 0 )
      goto LABEL_12;
    v5 = ASN1_item_i2d(*(uint32_t *)(a1 + 12), &v12, (int)(uintptr_t)(&CMS_Attributes_Sign_it));
    if ( v12 == nullptr )
      goto LABEL_15;
    if ( EVP_DigestUpdate((int)(uintptr_t)(v14), (int)(uintptr_t)(v12), v5) > 0 && EVP_DigestSignFinal(v14, 0, (int)(uintptr_t)(&v13)) > 0 )
    {
      CRYPTO_free(v12);
      v6 = CRYPTO_malloc(v13, (int)(uintptr_t)(&unk_1B15112), 0);
      v12 = v6;
      if ( v6 == nullptr )
      {
LABEL_15:
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v14));
        return 0;
      }
      if ( EVP_DigestSignFinal(v14, (int)(uintptr_t)(v6), (int)(uintptr_t)(&v13)) > 0 )
      {
        if ( EVP_PKEY_CTX_ctrl(v11, -1, 8, 11, 1, a1) > 0 )
        {
          EVP_MD_CTX_cleanup((int)(uintptr_t)(v14));
          ASN1_STRING_set0(*(uint32_t *)(a1 + 20), (int)(uintptr_t)(v12), v13);
          return 1;
        }
LABEL_12:
        ERR_put_error(46, 151, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
LABEL_13:
    if ( v12 != nullptr )
      CRYPTO_free(v12);
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_verify  (binary VA: 0x1a10800)
// Original: CMS_SignerInfo_verify
// ----------------------------------------------------------------------------
int CMS_SignerInfo_verify(int a1)
{
  unsigned int v1;
  char *v2;
  int digestbyname;
  int v4;
  int v5;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef void *_g4_t_v10;
  typedef uint8_t _g4_t_v11[36];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v8)) > _g4_s1 ? (44u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v9)) > _g4_s2 ? (48u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v10)) > _g4_s3 ? (52u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v11)) > _g4_s4 ? (56u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);

  v10 = nullptr;
  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    v1 = OBJ_obj2nid(**(uint32_t **)(a1 + 8));
    v2 = OBJ_nid2sn(v1);
    digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v2));
    if ( digestbyname != 0 )
    {
      EVP_MD_CTX_init(v11);
      v7 = (uint32_t *)digestbyname;
      v4 = -1;
      if ( EVP_DigestVerifyInit((int)(uintptr_t)(v11), &v9, v7, nullptr, *(uint32_t *)(a1 + 32)) > 0 )
      {
        v5 = ASN1_item_i2d(*(uint32_t *)(a1 + 12), &v10, (int)(uintptr_t)(&CMS_Attributes_Verify_it));
        if ( v10 != nullptr )
        {
          v8 = EVP_DigestUpdate((int)(uintptr_t)(v11), (int)(uintptr_t)(v10), v5);
          CRYPTO_free(v10);
          if ( v8 > 0 )
          {
            v4 = EVP_DigestVerifyFinal((int)(uintptr_t)(v11), *(uint32_t *)(*(uint32_t *)(a1 + 20) + 8), **(uint32_t **)(a1 + 20));
            if ( v4 <= 0 )
              ERR_put_error(46, 152, 158, (int)(uintptr_t)(&unk_1B15112), 0);
          }
        }
      }
      EVP_MD_CTX_cleanup((int)(uintptr_t)(v11));
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v4 = -1;
    ERR_put_error(46, 152, 134, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CMS_SignerInfo_verify_content  (binary VA: 0x1a10b70)
// Original: CMS_SignerInfo_verify_content
// ----------------------------------------------------------------------------
int CMS_SignerInfo_verify_content(uint32_t **a1, int **a2)
{
  char **v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef void *_g4_t_v7[6];
  typedef uint8_t _g4_t_s1[76];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_s1)) > _g4_s3 ? (48u + sizeof(_g4_t_s1)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);

  EVP_MD_CTX_init(v7);
  if ( (int)CMS_signed_get_attr_count(a1) < 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = OBJ_nid2obj(0x33u);
    v3 = CMS_signed_get0_data_by_OBJ(a1, v2, -3, 4);
    if ( v3 == 0 )
    {
      ERR_put_error(46, 154, 114, (int)(uintptr_t)(&unk_1B15112), 0);
      v5 = -1;
      goto LABEL_8;
    }
  }
  v5 = -1;
  if ( cms_DigestAlgorithm_find_ctx((int *)v7, a2, a1[2]) == 0 )
    goto LABEL_8;
  if ( v3 == 0 )
  {
    v5 = EVP_VerifyFinal((int *)v7, a1[5][2], *a1[5], a1[8]);
    if ( v5 > 0 )
      goto LABEL_8;
LABEL_11:
    ERR_put_error(46, 154, 158, (int)(uintptr_t)(&unk_1B15112), 0);
    v5 = 0;
    goto LABEL_8;
  }
  if ( EVP_DigestFinal_ex(v7, (int)(uintptr_t)(s1), &v6) <= 0 )
  {
    ERR_put_error(46, 154, 147, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_8;
  }
  if ( *(uint32_t *)v3 != v6 )
  {
    ERR_put_error(46, 154, 120, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_8;
  }
  v5 = 1;
  if ( memcmp(s1, *(const void **)(v3 + 8), *(uint32_t *)v3) != 0 )
    goto LABEL_11;
LABEL_8:
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v7));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: CMS_add_smimecap  (binary VA: 0x1a10dc0)
// Original: CMS_add_smimecap
// ----------------------------------------------------------------------------
int CMS_add_smimecap(int a1, int a2)
{
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v5 = nullptr;
  v2 = 0;
  v3 = i2d_X509_ALGORS(a2, (void **)&v5);
  if ( v3 > 0 )
  {
    v2 = CMS_signed_add1_attr_by_NID(a1, 167, 16, v5, v3);
    CRYPTO_free(v5);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: CMS_add_simple_smimecap  (binary VA: 0x1a10e40)
// Original: CMS_add_simple_smimecap
// ----------------------------------------------------------------------------
int CMS_add_simple_smimecap(int **a1, unsigned int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char **v7;
  int *v8;

  if ( a3 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v3 = ASN1_INTEGER_new();
    v4 = 0;
    v5 = v3;
    if ( v3 == 0 || ASN1_INTEGER_set(v3, a3) == 0 )
      return v4;
  }
  v6 = X509_ALGOR_new();
  if ( v6 != 0 )
  {
    v7 = OBJ_nid2obj(a2);
    X509_ALGOR_set0(v6, (int)(uintptr_t)(v7), v5 == 0 ? -1 : 2, v5);
    v8 = *a1;
    if ( *a1 == nullptr && (v8 = (int *)(sk_new_null()), *a1 = v8, v8 == nullptr) || (v4 = 1, sk_push(v8, v6) == 0) )
    {
      v4 = 0;
      X509_ALGOR_free(v6);
    }
  }
  else
  {
    v4 = 0;
    if ( v5 != 0 )
      ASN1_INTEGER_free(v5);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CMS_add_standard_smimecap  (binary VA: 0x1a10f90)
// Original: CMS_add_standard_smimecap
// ----------------------------------------------------------------------------
bool CMS_add_standard_smimecap(int **a1)
{
  int v1;
  char *v3;

  v1 = 0;
  if ( sub_1A10F30(a1, 0x1ABu, -1) != 0 )
  {
    v3 = OBJ_nid2sn(0x329u);
    if ( EVP_get_digestbyname((int)(uintptr_t)(v3)) == 0 || CMS_add_simple_smimecap(a1, 0x329u, -1) != 0 )
    {
      v1 = 0;
      if ( sub_1A10F30(a1, 0x32Du, -1) != 0
        && sub_1A10F30(a1, 0x1A7u, -1) != 0
        && sub_1A10F30(a1, 0x1A3u, -1) != 0
        && sub_1A10F30(a1, 0x2Cu, -1) != 0
        && sub_1A10F30(a1, 0x25u, 128) != 0
        && sub_1A10F30(a1, 0x25u, 64) != 0
        && sub_1A10F30(a1, 0x1Fu, -1) != 0 )
      {
        return sub_1A10F30(a1, 0x25u, 40) != 0;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: CMS_add1_signer  (binary VA: 0x1a110f0)
// Original: CMS_add1_signer
// ----------------------------------------------------------------------------
uint32_t * CMS_add1_signer(int *a1, int a2, uint32_t *a3, int digestbyname, int a5)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int (*v12)(uint32_t *, int, uint32_t, int);
  int v13;
  int *v14;
  int v16;
  int *v17;
  int i;
  int v19;
  int v20;
  char **v21;
  char *v22;
  char *v23;
  int v24;
  uint32_t *v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v27)) > _g4_s1 ? (36u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v28)) > _g4_s2 ? (44u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v29)) > _g4_s3 ? (60u + sizeof(_g4_t_v29)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  if ( X509_check_private_key(a2, a3) )
  {
    v5 = nullptr;
    v6 = sub_1A0FAA0(a1);
    if ( v6 == 0 )
      return v5;
    v5 = (uint32_t *)ASN1_item_new((int)CMS_SignerInfo_it);
    if ( v5 == nullptr )
    {
      ERR_put_error(46, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_25:
      if ( v5 != nullptr )
      {
LABEL_26:
        v26 = (char)(uintptr_t)(v5);
        v5 = nullptr;
        ASN1_item_free(v26, CMS_SignerInfo_it);
      }
      return v5;
    }
    X509_check_purpose(a2, -1, -1);
    CRYPTO_add_lock(a3 + 2, 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_add_lock((uint32_t *)(a2 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    v5[8] = (uint32_t)(uintptr_t)(a3);
    v5[7] = a2;
    if ( (a5 & 0x10000) != 0 )
    {
      *v5 = 3;
      v7 = 1;
      if ( *(int *)v6 <= 2 )
        *(uint32_t *)v6 = 3;
    }
    else
    {
      *v5 = 1;
      v7 = 0;
    }
    if ( cms_set1_SignerIdentifier(v5[1], a2, v7) == 0 )
      goto LABEL_26;
    if ( digestbyname == 0 )
    {
      if ( EVP_PKEY_get_default_digest_nid((int)(uintptr_t)(a3), (int)(uintptr_t)(v29)) <= 0 )
        goto LABEL_26;
      v23 = OBJ_nid2sn((unsigned int)(uintptr_t)(v29[0]));
      digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v23));
      if ( digestbyname == 0 )
      {
        ERR_put_error(46, 102, 128, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_26;
      }
    }
    v8 = 0;
    cms_DigestAlgorithm_set(v5[2], digestbyname);
    v28 = (int)(uintptr_t)(v5);
    while ( v8 < sk_num(*(uint32_t *)(v6 + 4)) )
    {
      v9 = (uint32_t *)sk_value(*(int **)(v6 + 4), v8);
      X509_ALGOR_get0(v29, nullptr, nullptr, v9);
      v10 = OBJ_obj2nid((int)(uintptr_t)(v29[0]));
      if ( v10 == EVP_MD_type(digestbyname) )
        break;
      ++v8;
    }
    v5 = (uint32_t *)v28;
    if ( sk_num(*(uint32_t *)(v6 + 4)) == v8 )
    {
      v16 = X509_ALGOR_new();
      if ( v16 == 0 )
        goto LABEL_24;
      cms_DigestAlgorithm_set(v16, digestbyname);
      if ( sk_push(*(int **)(v6 + 4), v16) == 0 )
      {
        X509_ALGOR_free(v16);
        goto LABEL_24;
      }
    }
    v11 = a3[3];
    if ( v11 != 0 )
    {
      v12 = *(int (**)(uint32_t *, int, uint32_t, int))(v11 + 84);
      if ( v12 != nullptr )
      {
        v13 = v12(a3, 5, 0, v28);
        if ( v13 == -2 )
        {
          ERR_put_error(46, 102, 125, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_26;
        }
        if ( v13 <= 0 )
        {
          ERR_put_error(46, 102, 111, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_26;
        }
      }
    }
    if ( (a5 & 0x100) != 0 )
      goto LABEL_21;
    if ( *(uint32_t *)(v28 + 12) == 0 )
    {
      v25 = sk_new_null();
      *(uint32_t *)(v28 + 12) = (uint32_t)(uintptr_t)(v25);
      if ( v25 == nullptr )
        goto LABEL_24;
    }
    if ( (a5 & 0x200) != 0 )
    {
LABEL_20:
      if ( (a5 & 0x8000) != 0 )
      {
        v27 = v6;
        v17 = (int *)CMS_get0_SignerInfos(a1);
        for ( i = 0; ; ++i )
        {
          if ( i >= sk_num((int)(uintptr_t)(v17)) )
          {
            LOBYTE(v5) = v28;
            ERR_put_error(46, 108, 131, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_26;
          }
          v19 = sk_value(v17, i);
          v20 = v19;
          if ( v28 != v19
            && (int)CMS_signed_get_attr_count(v19) >= 0
            && OBJ_cmp(**(uint32_t **)(v28 + 8), **(uint32_t **)(v20 + 8)) == 0 )
          {
            break;
          }
        }
        v5 = (uint32_t *)v28;
        v6 = v27;
        v21 = OBJ_nid2obj(0x33u);
        v22 = (char *)CMS_signed_get0_data_by_OBJ(v20, v21, -3, 4);
        if ( v22 == nullptr )
        {
          ERR_put_error(46, 108, 114, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_26;
        }
        if ( CMS_signed_add1_attr_by_NID(v28, 51, 4, v22, -1) == 0
          || (a5 & 0x4000) == 0 && CMS_SignerInfo_sign(v28) == 0 )
        {
          goto LABEL_26;
        }
      }
LABEL_21:
      if ( (a5 & 2) != 0 || CMS_add1_cert(a1, a2) != 0 )
      {
        v14 = *(int **)(v6 + 20);
        if ( v14 != nullptr || (v14 = (int *)(sk_new_null()), *(uint32_t *)(v6 + 20) = (uint32_t)(uintptr_t)(v14), v14 != nullptr) )
        {
          if ( sk_push(v14, (int)(uintptr_t)(v5)) != 0 )
            return v5;
        }
      }
      goto LABEL_24;
    }
    v29[0] = nullptr;
    if ( CMS_add_standard_smimecap((int **)v29) )
    {
      v24 = CMS_add_smimecap(v28, (int)(uintptr_t)(v29[0]));
      sk_pop_free((void **)v29[0], (void (*)(uint32_t))X509_ALGOR_free);
      if ( v24 != 0 )
        goto LABEL_20;
    }
    else
    {
      sk_pop_free((void **)v29[0], (void (*)(uint32_t))X509_ALGOR_free);
    }
LABEL_24:
    ERR_put_error(46, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_25;
  }
  ERR_put_error(46, 102, 136, (int)(uintptr_t)(&unk_1B15112), 0);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_COMP_strings  (binary VA: 0x1a11740)
// Original: ERR_load_COMP_strings
// ----------------------------------------------------------------------------
int ERR_load_COMP_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CE880);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CE880);
    return ERR_load_strings(0, &dword_20CE8C0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_CONF_strings  (binary VA: 0x1a117a0)
// Original: ERR_load_CONF_strings
// ----------------------------------------------------------------------------
int ERR_load_CONF_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CE8E0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CE8E0);
    return ERR_load_strings(0, &dword_20CE9A0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_set_nconf  (binary VA: 0x1a11800)
// Original: CONF_set_nconf
// ----------------------------------------------------------------------------
int CONF_set_nconf(int a1, int a2)
{
  int v2;

  v2 = dword_2141E34;
  if ( dword_2141E34 == 0 )
  {
    v2 = (int)(uintptr_t)(NCONF_default());
    dword_2141E34 = v2;
  }
  (*(void (**)(int))(v2 + 8))(a1);
  *(uint32_t *)(a1 + 8) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: CONF_set_default_method  (binary VA: 0x1a11850)
// Original: CONF_set_default_method
// ----------------------------------------------------------------------------
int CONF_set_default_method(int a1)
{
  dword_2141E34 = a1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: CONF_free  (binary VA: 0x1a11920)
// Original: CONF_free
// ----------------------------------------------------------------------------
int CONF_free(int a1)
{
  uint8_t v2[16];

  CONF_set_nconf((int)(uintptr_t)(v2), a1);
  return NCONF_free_data((int)(uintptr_t)(v2));
}

// ----------------------------------------------------------------------------
// Function: CONF_load_bio  (binary VA: 0x1a11af0)
// Original: CONF_load_bio
// ----------------------------------------------------------------------------
int CONF_load_bio(int a1, int a2, int a3)
{
  int bio;
  int v4;
  typedef uint8_t _g4_t_v6[8];
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  CONF_set_nconf((int)(uintptr_t)(v6), a1);
  bio = NCONF_load_bio((int)(uintptr_t)(v6), a2, a3);
  v4 = 0;
  if ( bio != 0 )
    return v7;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CONF_load_fp  (binary VA: 0x1a11b50)
// Original: CONF_load_fp
// ----------------------------------------------------------------------------
int CONF_load_fp(int a1, int a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int bio;

  v3 = BIO_new_fp(a2, 0);
  v4 = v3;
  if ( v3 != nullptr )
  {
    bio = CONF_load_bio(a1, (int)(uintptr_t)(v3), a3);
    BIO_free(v4);
  }
  else
  {
    bio = 0;
    ERR_put_error(14, 103, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio;
}

// ----------------------------------------------------------------------------
// Function: CONF_load  (binary VA: 0x1a11c00)
// Original: CONF_load
// ----------------------------------------------------------------------------
int CONF_load(int a1, char *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int bio;

  v3 = BIO_new_file(a2, "rb");
  v4 = v3;
  if ( v3 != nullptr )
  {
    bio = CONF_load_bio(a1, (int)(uintptr_t)(v3), a3);
    BIO_free(v4);
  }
  else
  {
    bio = 0;
    ERR_put_error(14, 100, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio;
}

// ----------------------------------------------------------------------------
// Function: CONF_get_section  (binary VA: 0x1a11d50)
// Original: CONF_get_section
// ----------------------------------------------------------------------------
int CONF_get_section(int a1, int a2)
{
  int result;
  uint8_t v3[16];

  result = 0;
  if ( a1 != 0 )
  {
    CONF_set_nconf((int)(uintptr_t)(v3), a1);
    return NCONF_get_section((int)(uintptr_t)(v3), a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_get_string  (binary VA: 0x1a11e90)
// Original: CONF_get_string
// ----------------------------------------------------------------------------
int CONF_get_string(int a1, int a2, int a3)
{
  uint8_t v4[24];

  if ( a1 == 0 )
    return NCONF_get_string(0, a2, a3);
  CONF_set_nconf((int)(uintptr_t)(v4), a1);
  return NCONF_get_string((int)(uintptr_t)(v4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: CONF_get_number  (binary VA: 0x1a11fe0)
// Original: CONF_get_number
// ----------------------------------------------------------------------------
int CONF_get_number(int a1, int a2, int a3)
{
  int number_e;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[24];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);

  v5 = 0;
  if ( a1 != 0 )
  {
    CONF_set_nconf((int)(uintptr_t)(v6), a1);
    number_e = NCONF_get_number_e((int)(uintptr_t)(v6), a2, a3, &v5);
  }
  else
  {
    number_e = NCONF_get_number_e(0, a2, a3, &v5);
  }
  if ( number_e == 0 )
    ERR_clear_error();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: CONF_dump_bio  (binary VA: 0x1a121a0)
// Original: CONF_dump_bio
// ----------------------------------------------------------------------------
int CONF_dump_bio(int a1, int a2)
{
  uint8_t v3[16];

  CONF_set_nconf((int)(uintptr_t)(v3), a1);
  return NCONF_dump_bio((int)(uintptr_t)(v3), a2);
}

// ----------------------------------------------------------------------------
// Function: CONF_dump_fp  (binary VA: 0x1a121f0)
// Original: CONF_dump_fp
// ----------------------------------------------------------------------------
int CONF_dump_fp(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;

  v2 = BIO_new_fp(a2, 0);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v4 = CONF_dump_bio(a1, (int)(uintptr_t)(v2));
    BIO_free(v3);
  }
  else
  {
    v4 = 0;
    ERR_put_error(14, 104, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: DES_ede3_cfb64_encrypt  (binary VA: 0x1a12290)
// Original: DES_ede3_cfb64_encrypt
// ----------------------------------------------------------------------------
uint8_t * DES_ede3_cfb64_encrypt(uint8_t *a1, int64_t a2, int a3, int a4, int a5, uint8_t *a6, int *a7, int a8)
{
  uint8_t *result;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int16_t v17; // edx^2
  unsigned int v18;
  uint8_t v19;
  uint8_t *v20;
  uint8_t v21;
  int16_t v22; // ecx^2
  uint8_t v23;
  uint8_t v24; // edx^2
  unsigned int v25;
  unsigned int v26;
  typedef uint8_t *_g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v29)) > _g4_s2 ? (4u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v30)) > _g4_s3 ? (8u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v31)) > _g4_s4 ? (8u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);

  result = (uint8_t *)a2;
  v10 = *a7;
  if ( a8 != 0 )
  {
    if ( HIDWORD(a2) != 0 )
    {
      v31 = HIDWORD(a2);
      do
      {
        if ( v10 == 0 )
        {
          v29 = (a6[7] << 24) | a6[4] | (a6[6] << 16) | (a6[5] << 8);
          v32 = (a6[3] << 24) | *a6 | (a6[2] << 16) | (a6[1] << 8);
          v33 = v29;
          v27 = result;
          DES_encrypt3(&v32, a3, a4, a5);
          v22 = HIWORD(v32);
          v23 = BYTE1(v32);
          *a6 = v32;
          a6[1] = v23;
          v24 = v22;
          a6[3] = HIBYTE(v22);
          a6[4] = v33;
          v25 = v33 >> 8;
          a6[2] = v24;
          a6[5] = v25;
          v26 = HIBYTE(v33);
          a6[6] = BYTE2(v33);
          a6[7] = v26;
          result = v27;
        }
        v20 = &a6[v10];
        v21 = *a1 ^ a6[v10];
        *result = v21;
        ++a1;
        ++result;
        v10 = ((uint8_t)v10 + 1) & 7;
        v14 = v31-- == 1;
        *v20 = v21;
      }
      while ( !v14 );
    }
  }
  else
  {
    v30 = HIDWORD(a2);
    if ( HIDWORD(a2) != 0 )
    {
      v28 = (uint8_t *)a2;
      do
      {
        if ( v10 == 0 )
        {
          v15 = *a6 | (a6[2] << 16) | (a6[1] << 8);
          v16 = a6[3];
          v33 = (a6[7] << 24) | a6[4] | (a6[6] << 16) | (a6[5] << 8);
          v32 = (v16 << 24) | v15;
          DES_encrypt3(&v32, a3, a4, a5);
          v17 = HIWORD(v32);
          v18 = v33;
          v19 = BYTE1(v32);
          *a6 = v32;
          a6[4] = v18;
          a6[1] = v19;
          a6[3] = HIBYTE(v17);
          a6[5] = BYTE1(v18);
          a6[2] = v17;
          a6[6] = BYTE2(v18);
          a6[7] = HIBYTE(v18);
        }
        v11 = &a6[v10];
        v12 = (uint8_t)*a1;
        v10 = ((uint8_t)v10 + 1) & 7;
        v13 = *v11;
        *v11 = v12;
        result = (uint8_t *)(v12 ^ v13);
        ++a1;
        *v28 = (uint8_t)(uintptr_t)(result);
        v14 = v30-- == 1;
        ++v28;
      }
      while ( !v14 );
    }
  }
  *a7 = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_ede3_cfb_encrypt  (binary VA: 0x1a124e0)
// Original: DES_ede3_cfb_encrypt
// ----------------------------------------------------------------------------
void DES_ede3_cfb_encrypt(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7, uint8_t *a8, int a9)
{
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int j;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int i;
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
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef char *_g4_t_src;
  typedef char *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_dest;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v44)) > _g4_s2 ? (4u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v45)) > _g4_s3 ? (4u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v46)) > _g4_s4 ? (4u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v47)) > _g4_s5 ? (4u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v48)) > _g4_s6 ? (4u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v49)) > _g4_s7 ? (8u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v50)) > _g4_s8 ? (8u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v51)) > _g4_s9 ? (12u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v52)) > _g4_s10 ? (12u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v53)) > _g4_s11 ? (12u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v54)) > _g4_s12 ? (12u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v55)) > _g4_s13 ? (12u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v56)) > _g4_s14 ? (12u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v57)) > _g4_s15 ? (12u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v58)) > _g4_s16 ? (12u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v59)) > _g4_s17 ? (12u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v60)) > _g4_s18 ? (20u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v61)) > _g4_s19 ? (20u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v62)) > _g4_s20 ? (36u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v63)) > _g4_s21 ? (36u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_src)) > _g4_s22 ? (40u + sizeof(_g4_t_src)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v65)) > _g4_s23 ? (40u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v66)) > _g4_s24 ? (44u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v67)) > _g4_s25 ? (44u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v68)) > _g4_s26 ? (56u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v69)) > _g4_s27 ? (60u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_dest)) > _g4_s28 ? (64u + sizeof(_g4_t_dest)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v71)) > _g4_s29 ? (68u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v72)) > _g4_s30 ? (72u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v73)) > _g4_s31 ? (76u + sizeof(_g4_t_v73)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);

  if ( a3 <= 64 )
  {
    v9 = a3 + 7;
    v10 = (unsigned int)(a3 + 7) >> 3;
    v11 = (a8[3] << 24) | *a8 | (a8[2] << 16) | (a8[1] << 8);
    v12 = (a8[7] << 24) | a8[4] | (a8[6] << 16) | (a8[5] << 8);
    if ( a9 != 0 )
    {
      if ( a4 >= v10 )
      {
        if ( a3 >= 0 )
          v9 = a3;
        v65 = (char *)&dest + (v9 >> 3);
        v50 = (unsigned int)(a3 + 7) >> 3;
        v61 = a4 - v10;
        v18 = 4 * v10;
        v19 = (a8[3] << 24) | *a8 | (a8[2] << 16) | (a8[1] << 8);
        v63 = v18;
        while ( 1 )
        {
          v68 = v19;
          v69 = v12;
          DES_encrypt3(&v68, a5, a6, a7);
          v20 = v50 + a1;
          if ( v50 <= 8 )
          {
            switch ( v63 >> 2 )
            {
              case 0u:
                goto LABEL_26;
              case 1u:
                v45 = 0;
                v41 = 0;
                goto LABEL_88;
              case 2u:
                v39 = v50 + a1;
                v45 = 0;
                v40 = 0;
                goto LABEL_87;
              case 3u:
                v45 = 0;
                v59 = 0;
                goto LABEL_86;
              case 4u:
                v38 = v50 + a1;
                v45 = 0;
                goto LABEL_85;
              case 5u:
                v37 = 0;
                goto LABEL_84;
              case 6u:
                v35 = v50 + a1;
                v36 = 0;
                goto LABEL_83;
              case 7u:
                v48 = 0;
                goto LABEL_82;
              case 8u:
                v34 = *(uint8_t *)--v20;
                v48 = v34 << 24;
LABEL_82:
                v35 = v20 - 1;
                v36 = v48 | (*(uint8_t *)(v20 - 1) << 16);
LABEL_83:
                v20 = v35 - 1;
                v37 = v36 | (*(uint8_t *)(v35 - 1) << 8);
LABEL_84:
                v38 = v20 - 1;
                v45 = v37 | *(uint8_t *)(v20 - 1);
LABEL_85:
                v20 = v38 - 1;
                v59 = *(uint8_t *)(v38 - 1) << 24;
LABEL_86:
                v39 = v20 - 1;
                v40 = v59 | (*(uint8_t *)(v20 - 1) << 16);
LABEL_87:
                v20 = v39 - 1;
                v41 = v40 | (*(uint8_t *)(v39 - 1) << 8);
LABEL_88:
                v21 = v20 - 1;
                v22 = v41 | *(uint8_t *)(v20 - 1);
                break;
              default:
                abort();
            }
          }
          else
          {
LABEL_26:
            v21 = v50 + a1;
            v45 = 0;
            v22 = 0;
          }
          a1 = v50 + v21;
          v23 = v50 + a2;
          v67 = v68 ^ v22;
          v46 = v69 ^ v45;
          if ( v50 <= 8 )
          {
            switch ( v63 >> 2 )
            {
              case 0u:
                break;
              case 1u:
                v54 = v50 + a2;
                goto LABEL_37;
              case 2u:
                goto LABEL_36;
              case 3u:
                v53 = v50 + a2;
                goto LABEL_35;
              case 4u:
                goto LABEL_34;
              case 5u:
                v52 = v50 + a2;
                goto LABEL_33;
              case 6u:
                goto LABEL_32;
              case 7u:
                goto LABEL_31;
              case 8u:
                *(uint8_t *)--v23 = HIBYTE(v46);
LABEL_31:
                *(uint8_t *)--v23 = BYTE2(v46);
LABEL_32:
                v52 = v23 - 1;
                *(uint8_t *)(v23 - 1) = BYTE1(v46);
LABEL_33:
                v23 = v52 - 1;
                *(uint8_t *)(v52 - 1) = v46;
LABEL_34:
                v53 = v23 - 1;
                *(uint8_t *)(v23 - 1) = HIBYTE(v67);
LABEL_35:
                v23 = v53 - 1;
                *(uint8_t *)(v53 - 1) = BYTE2(v67);
LABEL_36:
                v54 = v23 - 1;
                *(uint8_t *)(v23 - 1) = BYTE1(v67);
LABEL_37:
                v23 = v54 - 1;
                *(uint8_t *)(v54 - 1) = v67;
                break;
              default:
                abort();
            }
          }
          a2 = v50 + v23;
          if ( a3 == 32 )
          {
            v19 = v12;
            v12 = v67;
          }
          else if ( a3 == 64 )
          {
            v12 = v46;
            v19 = v67;
          }
          else
          {
            dest = v19;
            v71 = v12;
            v72 = v67;
            v73 = v46;
            if ( (a3 & 7) != 0 )
            {
              memmove(&dest, v65, 9u);
              for ( i = 0; i != 8; *((uint8_t *)&v69 + i + 3) = ((int)*((uint8_t *)&dest + i) >> (8 - a3 % 8))
                                                            | v25 )
              {
                v25 = *((uint8_t *)&dest + i) << (a3 % 8);
                *((uint8_t *)&dest + i++) = v25;
              }
            }
            else
            {
              memmove(&dest, v65, 8u);
            }
            v19 = (HIBYTE(dest) << 24) | (uint8_t)dest | (BYTE2(dest) << 16) | (BYTE1(dest) << 8);
            v12 = (HIBYTE(v71) << 24) | (uint8_t)v71 | (BYTE2(v71) << 16) | (BYTE1(v71) << 8);
          }
          if ( v50 > v61 )
            break;
          v61 -= v50;
        }
        v11 = v19;
      }
    }
    else if ( a4 >= v10 )
    {
      if ( a3 >= 0 )
        v9 = a3;
      src = (char *)&dest + (v9 >> 3);
      v49 = (unsigned int)(a3 + 7) >> 3;
      v60 = a4 - v10;
      v62 = 4 * v10;
      while ( 1 )
      {
        v68 = v11;
        v42 = v11;
        v69 = v12;
        DES_encrypt3(&v68, a5, a6, a7);
        v13 = v49 + a1;
        if ( v49 <= 8 )
        {
          switch ( v62 >> 2 )
          {
            case 0u:
              goto LABEL_8;
            case 1u:
              v43 = 0;
              v33 = 0;
              goto LABEL_71;
            case 2u:
              v31 = v49 + a1;
              v43 = 0;
              v32 = 0;
              goto LABEL_70;
            case 3u:
              v43 = 0;
              v58 = 0;
              goto LABEL_69;
            case 4u:
              v30 = v49 + a1;
              v43 = 0;
              goto LABEL_68;
            case 5u:
              v29 = 0;
              goto LABEL_67;
            case 6u:
              v27 = v49 + a1;
              v28 = 0;
              goto LABEL_66;
            case 7u:
              v47 = 0;
              goto LABEL_65;
            case 8u:
              v26 = *(uint8_t *)--v13;
              v47 = v26 << 24;
LABEL_65:
              v27 = v13 - 1;
              v28 = v47 | (*(uint8_t *)(v13 - 1) << 16);
LABEL_66:
              v13 = v27 - 1;
              v29 = v28 | (*(uint8_t *)(v27 - 1) << 8);
LABEL_67:
              v30 = v13 - 1;
              v43 = v29 | *(uint8_t *)(v13 - 1);
LABEL_68:
              v13 = v30 - 1;
              v58 = *(uint8_t *)(v30 - 1) << 24;
LABEL_69:
              v31 = v13 - 1;
              v32 = v58 | (*(uint8_t *)(v13 - 1) << 16);
LABEL_70:
              v13 = v31 - 1;
              v33 = v32 | (*(uint8_t *)(v31 - 1) << 8);
LABEL_71:
              v51 = v13 - 1;
              v14 = v33 | *(uint8_t *)(v13 - 1);
              break;
            default:
              abort();
          }
        }
        else
        {
LABEL_8:
          v51 = v49 + a1;
          v43 = 0;
          v14 = 0;
        }
        a1 = v49 + v51;
        if ( a3 == 32 )
        {
          v11 = v12;
          v12 = v14;
        }
        else if ( a3 == 64 )
        {
          v12 = v43;
          v11 = v14;
        }
        else
        {
          dest = v42;
          v71 = v12;
          v72 = v14;
          v73 = v43;
          if ( (a3 & 7) != 0 )
          {
            memmove(&dest, src, 9u);
            for ( j = 0; j != 8; *((uint8_t *)&v69 + j + 3) = ((int)*((uint8_t *)&dest + j) >> (8 - a3 % 8)) | v16 )
            {
              v16 = *((uint8_t *)&dest + j) << (a3 % 8);
              *((uint8_t *)&dest + j++) = v16;
            }
          }
          else
          {
            memmove(&dest, src, 8u);
          }
          v11 = (HIBYTE(dest) << 24) | (uint8_t)dest | (BYTE2(dest) << 16) | (BYTE1(dest) << 8);
          v12 = (HIBYTE(v71) << 24) | (uint8_t)v71 | (BYTE2(v71) << 16) | (BYTE1(v71) << 8);
        }
        v66 = v14 ^ v68;
        v44 = v69 ^ v43;
        v17 = v49 + a2;
        if ( v49 <= 8 )
        {
          switch ( v62 >> 2 )
          {
            case 0u:
              break;
            case 1u:
              v57 = v49 + a2;
              goto LABEL_53;
            case 2u:
              goto LABEL_52;
            case 3u:
              v56 = v49 + a2;
              goto LABEL_51;
            case 4u:
              goto LABEL_50;
            case 5u:
              v55 = v49 + a2;
              goto LABEL_49;
            case 6u:
              goto LABEL_48;
            case 7u:
              goto LABEL_47;
            case 8u:
              *(uint8_t *)--v17 = HIBYTE(v44);
LABEL_47:
              *(uint8_t *)--v17 = BYTE2(v44);
LABEL_48:
              v55 = v17 - 1;
              *(uint8_t *)(v17 - 1) = BYTE1(v44);
LABEL_49:
              v17 = v55 - 1;
              *(uint8_t *)(v55 - 1) = v44;
LABEL_50:
              v56 = v17 - 1;
              *(uint8_t *)(v17 - 1) = HIBYTE(v66);
LABEL_51:
              v17 = v56 - 1;
              *(uint8_t *)(v56 - 1) = BYTE2(v66);
LABEL_52:
              v57 = v17 - 1;
              *(uint8_t *)(v17 - 1) = BYTE1(v66);
LABEL_53:
              v17 = v57 - 1;
              *(uint8_t *)(v57 - 1) = v66;
              break;
            default:
              abort();
          }
        }
        a2 = v49 + v17;
        if ( v49 > v60 )
          break;
        v60 -= v49;
      }
    }
    *(uint16_t *)a8 = v11;
    a8[3] = HIBYTE(v11);
    *((uint16_t *)a8 + 2) = v12;
    a8[6] = BYTE2(v12);
    a8[2] = BYTE2(v11);
    a8[7] = HIBYTE(v12);
  }
}

// ----------------------------------------------------------------------------
// Function: DES_cfb64_encrypt  (binary VA: 0x1a12ec0)
// Original: DES_cfb64_encrypt
// ----------------------------------------------------------------------------
int * DES_cfb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int *a6, int a7)
{
  int v8;
  int16_t v10; // eax^2
  uint8_t v11;
  uint8_t v12; // edx^2
  int v13;
  uint8_t v14;
  uint8_t v15;
  uint8_t *v16;
  uint8_t v17;
  uint8_t v18;
  bool v19;
  int16_t v20; // eax^2
  uint8_t v21;
  uint8_t v22; // edx^2
  int v23;
  typedef int _g4_t_i;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v27)) > _g4_s3 ? (28u + sizeof(_g4_t_v27)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);

  v8 = *a6;
  if ( a7 != 0 )
  {
    if ( a3 != 0 )
    {
      v25 = a3;
      do
      {
        if ( v8 == 0 )
        {
          v26 = (a5[3] << 24) | *a5 | (a5[2] << 16) | (a5[1] << 8);
          v27 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
          DES_encrypt1(&v26, a4, 1);
          v20 = HIWORD(v26);
          v21 = BYTE1(v26);
          *a5 = v26;
          a5[1] = v21;
          v22 = v20;
          a5[3] = HIBYTE(v20);
          v23 = v27;
          a5[2] = v22;
          *((uint32_t *)a5 + 1) = v23;
        }
        v16 = &a5[v8];
        v17 = a5[v8];
        v8 = ((uint8_t)v8 + 1) & 7;
        v18 = *a1 ^ v17;
        *a2++ = v18;
        v19 = v25-- == 1;
        ++a1;
        *v16 = v18;
      }
      while ( !v19 );
    }
  }
  else
  {
    for ( i = a3; i != 0; --i )
    {
      if ( v8 == 0 )
      {
        v26 = (a5[3] << 24) | *a5 | (a5[2] << 16) | (a5[1] << 8);
        v27 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
        DES_encrypt1(&v26, a4, 1);
        v10 = HIWORD(v26);
        v11 = BYTE1(v26);
        *a5 = v26;
        a5[1] = v11;
        v12 = v10;
        a5[3] = HIBYTE(v10);
        v13 = v27;
        a5[2] = v12;
        *((uint32_t *)a5 + 1) = v13;
      }
      v14 = *a1++;
      v15 = v14 ^ a5[v8];
      a5[v8] = v14;
      v8 = ((uint8_t)v8 + 1) & 7;
      *a2++ = v15;
    }
  }
  *a6 = v8;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: DES_cfb_encrypt  (binary VA: 0x1a130d0)
// Original: DES_cfb_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_cfb_encrypt(int a1, int a2, int a3, unsigned int a4, int a5, uint8_t *a6, int a7)
{
  unsigned int result;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int *v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int *p_dest;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  int v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef int _g4_t_dest;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v45)) > _g4_s2 ? (12u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v46)) > _g4_s3 ? (12u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v47)) > _g4_s4 ? (12u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v48)) > _g4_s5 ? (16u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v49)) > _g4_s6 ? (16u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v50)) > _g4_s7 ? (16u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v51)) > _g4_s8 ? (20u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v52)) > _g4_s9 ? (20u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v53)) > _g4_s10 ? (24u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v54)) > _g4_s11 ? (28u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v55)) > _g4_s12 ? (32u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v56)) > _g4_s13 ? (32u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v57)) > _g4_s14 ? (36u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v58)) > _g4_s15 ? (56u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v59)) > _g4_s16 ? (60u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_dest)) > _g4_s17 ? (64u + sizeof(_g4_t_dest)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v61)) > _g4_s18 ? (68u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v62)) > _g4_s19 ? (72u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v63)) > _g4_s20 ? (76u + sizeof(_g4_t_v63)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);

  result = a3 - 1;
  if ( (unsigned int)(a3 - 1) <= 0x3F )
  {
    v48 = a4;
    v57 = a3 >> 3;
    v53 = a3 & 7;
    v8 = (a6[3] << 24) | *a6 | (a6[2] << 16) | (a6[1] << 8);
    v9 = (a3 + 7) >> 3;
    v10 = (a6[7] << 24) | a6[4] | (a6[6] << 16) | (a6[5] << 8);
    if ( a7 != 0 )
    {
      v56 = (a6[3] << 24) | *a6 | (a6[2] << 16) | (a6[1] << 8);
      while ( v48 >= v9 )
      {
        v48 -= v9;
        v58 = v56;
        v59 = v10;
        DES_encrypt1(&v58, a5, 1);
        v16 = v9 + a1;
        switch ( v9 )
        {
          case 2u:
            v33 = v9 + a1;
            v17 = 0;
            v34 = 0;
            goto LABEL_56;
          case 3u:
            v17 = 0;
            v54 = 0;
            goto LABEL_55;
          case 4u:
            v32 = v9 + a1;
            v17 = 0;
            goto LABEL_54;
          case 5u:
            v31 = 0;
            goto LABEL_53;
          case 6u:
            v29 = v9 + a1;
            v30 = 0;
            goto LABEL_52;
          case 7u:
            v28 = 0;
            goto LABEL_51;
          case 8u:
            v35 = *(uint8_t *)--v16;
            v28 = v35 << 24;
LABEL_51:
            v29 = v16 - 1;
            v30 = v28 | (*(uint8_t *)(v16 - 1) << 16);
LABEL_52:
            v16 = v29 - 1;
            v31 = v30 | (*(uint8_t *)(v29 - 1) << 8);
LABEL_53:
            v32 = v16 - 1;
            v17 = v31 | *(uint8_t *)(v16 - 1);
LABEL_54:
            v16 = v32 - 1;
            v54 = *(uint8_t *)(v32 - 1) << 24;
LABEL_55:
            v33 = v16 - 1;
            v34 = v54 | (*(uint8_t *)(v16 - 1) << 16);
LABEL_56:
            v16 = v33 - 1;
            v18 = v34 | (*(uint8_t *)(v33 - 1) << 8);
            break;
          default:
            v17 = 0;
            v18 = 0;
            break;
        }
        a1 = v16 + v9 - 1;
        v19 = v58 ^ (v18 | *(uint8_t *)(v16 - 1));
        v20 = v9 + a2;
        v46 = v59 ^ v17;
        switch ( v9 )
        {
          case 2u:
            v26 = v9 + a2;
            goto LABEL_36;
          case 3u:
            goto LABEL_35;
          case 4u:
            v25 = v9 + a2;
            goto LABEL_34;
          case 5u:
            goto LABEL_33;
          case 6u:
            v24 = v9 + a2;
            goto LABEL_32;
          case 7u:
            goto LABEL_31;
          case 8u:
            *(uint8_t *)--v20 = HIBYTE(v46);
LABEL_31:
            v24 = v20 - 1;
            *(uint8_t *)(v20 - 1) = BYTE2(v46);
LABEL_32:
            v20 = v24 - 1;
            *(uint8_t *)(v24 - 1) = BYTE1(v46);
LABEL_33:
            v25 = v20 - 1;
            *(uint8_t *)(v20 - 1) = v46;
LABEL_34:
            v20 = v25 - 1;
            *(uint8_t *)(v25 - 1) = HIBYTE(v19);
LABEL_35:
            v26 = v20 - 1;
            *(uint8_t *)(v20 - 1) = BYTE2(v19);
LABEL_36:
            v20 = v26 - 1;
            *(uint8_t *)(v26 - 1) = BYTE1(v19);
            break;
          default:
            break;
        }
        *(uint8_t *)(v20 - 1) = v19;
        a2 = v20 + v9 - 1;
        if ( a3 == 32 )
        {
          v56 = v10;
          v10 = v19;
        }
        else if ( a3 == 64 )
        {
          v10 = v46;
          v56 = v19;
        }
        else
        {
          v62 = v19;
          v61 = v10;
          dest = v56;
          v63 = v46;
          if ( (a3 & 7) != 0 )
          {
            p_dest = &dest;
            do
            {
              *(uint8_t *)p_dest = ((int)*((uint8_t *)p_dest + v57 + 1) >> (8 - v53))
                               | (*((uint8_t *)p_dest + v57) << v53);
              p_dest = (int *)((char *)p_dest + 1);
            }
            while ( p_dest != &v62 );
          }
          else
          {
            memmove(&dest, (char *)&dest + v57, 8u);
          }
          v56 = (HIBYTE(dest) << 24) | (uint8_t)dest | (BYTE2(dest) << 16) | (BYTE1(dest) << 8);
          v10 = (HIBYTE(v61) << 24) | (uint8_t)v61 | (BYTE2(v61) << 16) | (BYTE1(v61) << 8);
        }
      }
      v8 = v56;
    }
    else
    {
      v55 = a4 - v9;
      if ( a4 >= v9 )
      {
        while ( 1 )
        {
          v58 = v8;
          v43 = v8;
          v59 = v10;
          DES_encrypt1(&v58, a5, 1);
          v11 = v9 + a1;
          switch ( v9 )
          {
            case 2u:
              v40 = v9 + a1;
              v44 = 0;
              v41 = 0;
              goto LABEL_70;
            case 3u:
              v44 = 0;
              v50 = 0;
              goto LABEL_69;
            case 4u:
              v39 = v9 + a1;
              v44 = 0;
              goto LABEL_68;
            case 5u:
              v38 = 0;
              goto LABEL_67;
            case 6u:
              v36 = v9 + a1;
              v37 = 0;
              goto LABEL_66;
            case 7u:
              v47 = 0;
              goto LABEL_65;
            case 8u:
              v42 = *(uint8_t *)--v11;
              v47 = v42 << 24;
LABEL_65:
              v36 = v11 - 1;
              v37 = v47 | (*(uint8_t *)(v11 - 1) << 16);
LABEL_66:
              v11 = v36 - 1;
              v38 = v37 | (*(uint8_t *)(v36 - 1) << 8);
LABEL_67:
              v39 = v11 - 1;
              v44 = v38 | *(uint8_t *)(v11 - 1);
LABEL_68:
              v11 = v39 - 1;
              v50 = *(uint8_t *)(v39 - 1) << 24;
LABEL_69:
              v40 = v11 - 1;
              v41 = v50 | (*(uint8_t *)(v11 - 1) << 16);
LABEL_70:
              v11 = v40 - 1;
              v51 = v41 | (*(uint8_t *)(v40 - 1) << 8);
              break;
            default:
              v44 = 0;
              v51 = 0;
              break;
          }
          v12 = v51 | *(uint8_t *)(v11 - 1);
          v49 = v12;
          a1 = v11 + v9 - 1;
          if ( a3 == 32 )
          {
            v8 = v10;
            v10 = v51 | *(uint8_t *)(v11 - 1);
          }
          else if ( a3 == 64 )
          {
            v10 = v44;
            v8 = v51 | *(uint8_t *)(v11 - 1);
          }
          else
          {
            dest = v43;
            v62 = v12;
            v61 = v10;
            v63 = v44;
            if ( (a3 & 7) != 0 )
            {
              v13 = &dest;
              do
              {
                *(uint8_t *)v13 = ((int)*((uint8_t *)v13 + v57 + 1) >> (8 - v53)) | (*((uint8_t *)v13 + v57) << v53);
                v13 = (int *)((char *)v13 + 1);
              }
              while ( v13 != &v62 );
            }
            else
            {
              memmove(&dest, (char *)&dest + v57, 8u);
            }
            v8 = (HIBYTE(dest) << 24) | (uint8_t)dest | (BYTE2(dest) << 16) | (BYTE1(dest) << 8);
            v10 = (HIBYTE(v61) << 24) | (uint8_t)v61 | (BYTE2(v61) << 16) | (BYTE1(v61) << 8);
          }
          v52 = v58 ^ v49;
          v45 = v59 ^ v44;
          v14 = v9 + a2;
          switch ( v9 )
          {
            case 2u:
              v23 = v9 + a2;
              goto LABEL_27;
            case 3u:
              goto LABEL_26;
            case 4u:
              v22 = v9 + a2;
              goto LABEL_25;
            case 5u:
              goto LABEL_24;
            case 6u:
              v21 = v9 + a2;
              goto LABEL_23;
            case 7u:
              goto LABEL_22;
            case 8u:
              *(uint8_t *)--v14 = HIBYTE(v45);
LABEL_22:
              v21 = v14 - 1;
              *(uint8_t *)(v14 - 1) = BYTE2(v45);
LABEL_23:
              v14 = v21 - 1;
              *(uint8_t *)(v21 - 1) = BYTE1(v45);
LABEL_24:
              v22 = v14 - 1;
              *(uint8_t *)(v14 - 1) = v45;
LABEL_25:
              v14 = v22 - 1;
              *(uint8_t *)(v22 - 1) = HIBYTE(v52);
LABEL_26:
              v23 = v14 - 1;
              *(uint8_t *)(v14 - 1) = BYTE2(v52);
LABEL_27:
              v14 = v23 - 1;
              *(uint8_t *)(v23 - 1) = BYTE1(v52);
              break;
            default:
              break;
          }
          *(uint8_t *)(v14 - 1) = v52;
          a2 = v14 + v9 - 1;
          if ( v9 > v55 )
            break;
          v55 -= v9;
        }
      }
    }
    *(uint16_t *)a6 = v8;
    a6[3] = HIBYTE(v8);
    *((uint16_t *)a6 + 2) = v10;
    a6[6] = BYTE2(v10);
    v15 = HIWORD(v8);
    result = HIBYTE(v10);
    a6[2] = v15;
    a6[7] = HIBYTE(v10);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_encrypt1  (binary VA: 0x1a138f0)
// Original: DES_encrypt1
// ----------------------------------------------------------------------------
int DES_encrypt1(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int **v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  int result;
  int **v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  int v71;
  unsigned int v72;
  int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;

  v3 = (*a1 ^ ((unsigned int)a1[1] >> 4)) & 0xF0F0F0F;
  v4 = v3 ^ *a1;
  v5 = a1[1] ^ (16 * v3);
  v6 = (uint16_t)(v5 ^ HIWORD(v4));
  v7 = v6 ^ v5;
  v8 = v4 ^ (v6 << 16);
  v9 = (v8 ^ (v7 >> 2)) & 0x33333333;
  v10 = v9 ^ v8;
  v11 = v7 ^ (4 * v9);
  v12 = (v11 ^ (v10 >> 8)) & 0xFF00FF;
  v13 = v12 ^ v11;
  v14 = v10 ^ (v12 << 8);
  v15 = (v14 ^ (v13 >> 1)) & 0x55555555;
  v16 = __builtin_rotateleft32(v15 ^ v14, 3);
  v17 = __builtin_rotateleft32(v13 ^ (2 * v15), 3);
  if ( a3 != 0 )
  {
    v65 = (int **)(&DES_SPtrans);
    v109 = v16 ^ *a2;
    v66 = __builtin_rotateleft32(v16 ^ a2[1], 28);
    v67 = (unsigned int)(uintptr_t)(v65[((v66 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v66 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v66 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v66 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v109 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v109 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v109 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v109 >> 26) + 384])
        ^ v17;
    v110 = v67 ^ a2[2];
    v68 = __builtin_rotateleft32(v67 ^ a2[3], 28);
    v69 = (unsigned int)(uintptr_t)(v65[((v68 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v68 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v68 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v68 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v110 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v110 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v110 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v110 >> 26) + 384])
        ^ v16;
    v111 = v69 ^ a2[4];
    v70 = __builtin_rotateleft32(v69 ^ a2[5], 28);
    v71 = (unsigned int)(uintptr_t)(v65[((v70 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v70 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v70 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v70 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v111 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v111 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v111 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v111 >> 26) + 384])
        ^ v67;
    v112 = v71 ^ a2[6];
    v72 = __builtin_rotateleft32(v71 ^ a2[7], 28);
    v73 = (unsigned int)(uintptr_t)(v65[((v72 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v72 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v72 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v72 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v112 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v112 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v112 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v112 >> 26) + 384])
        ^ v69;
    v113 = v73 ^ a2[8];
    v74 = __builtin_rotateleft32(v73 ^ a2[9], 28);
    v75 = (unsigned int)(uintptr_t)(v65[((v74 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v74 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v74 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v74 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v113 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v113 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v113 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v113 >> 26) + 384])
        ^ v71;
    v114 = v75 ^ a2[10];
    v76 = __builtin_rotateleft32(v75 ^ a2[11], 28);
    v77 = (unsigned int)(uintptr_t)(v65[((v76 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v76 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v76 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v76 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v114 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v114 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v114 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v114 >> 26) + 384])
        ^ v73;
    v115 = v77 ^ a2[12];
    v78 = __builtin_rotateleft32(v77 ^ a2[13], 28);
    v79 = (unsigned int)(uintptr_t)(v65[((v78 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v78 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v78 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v78 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v115 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v115 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v115 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v115 >> 26) + 384])
        ^ v75;
    v116 = v79 ^ a2[14];
    v80 = __builtin_rotateleft32(v79 ^ a2[15], 28);
    v81 = (unsigned int)(uintptr_t)(v65[((v80 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v80 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v80 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v80 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v116 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v116 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v116 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v116 >> 26) + 384])
        ^ v77;
    v117 = v81 ^ a2[16];
    v82 = __builtin_rotateleft32(v81 ^ a2[17], 28);
    v83 = (unsigned int)(uintptr_t)(v65[((v82 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v82 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v82 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v82 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v117 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v117 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v117 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v117 >> 26) + 384])
        ^ v79;
    v118 = v83 ^ a2[18];
    v84 = __builtin_rotateleft32(v83 ^ a2[19], 28);
    v85 = (unsigned int)(uintptr_t)(v65[((v84 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v84 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v84 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v84 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v118 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v118 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v118 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v118 >> 26) + 384])
        ^ v81;
    v119 = v85 ^ a2[20];
    v86 = __builtin_rotateleft32(v85 ^ a2[21], 28);
    v87 = (unsigned int)(uintptr_t)(v65[((v86 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v86 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v86 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v86 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v119 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v119 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v119 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v119 >> 26) + 384])
        ^ v83;
    v120 = v87 ^ a2[22];
    v88 = __builtin_rotateleft32(v87 ^ a2[23], 28);
    v89 = (unsigned int)(uintptr_t)(v65[((v88 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v88 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v88 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v88 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v120 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v120 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v120 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v120 >> 26) + 384])
        ^ v85;
    v121 = v89 ^ a2[24];
    v90 = __builtin_rotateleft32(v89 ^ a2[25], 28);
    v91 = (unsigned int)(uintptr_t)(v65[((v90 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v90 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v90 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v90 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v121 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v121 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v121 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v121 >> 26) + 384])
        ^ v87;
    v122 = v91 ^ a2[26];
    v92 = __builtin_rotateleft32(v91 ^ a2[27], 28);
    v46 = (unsigned int)(uintptr_t)(v65[((v92 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v92 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v92 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v92 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v122 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v122 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v122 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v122 >> 26) + 384])
        ^ v89;
    v123 = v46 ^ a2[28];
    v93 = __builtin_rotateleft32(v46 ^ a2[29], 28);
    v48 = (unsigned int)(uintptr_t)(v65[((v93 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v93 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v65[((uint8_t)v93 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v65[(v93 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v65[((v123 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v65[((uint16_t)v123 >> 10) + 128])
        ^ *(unsigned int *)((char *)v65 + (v123 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v65[(v123 >> 26) + 384])
        ^ v91;
    v49 = v48 ^ a2[30];
    v50 = a2[31];
  }
  else
  {
    v94 = v16 ^ a2[30];
    v18 = (int **)(&DES_SPtrans);
    v19 = __builtin_rotateleft32(v16 ^ a2[31], 28);
    v20 = (unsigned int)(uintptr_t)(v18[((v19 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v19 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v19 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v19 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v94 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v94 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v94 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v94 >> 26) + 384])
        ^ v17;
    v95 = v20 ^ a2[28];
    v21 = __builtin_rotateleft32(v20 ^ a2[29], 28);
    v22 = (unsigned int)(uintptr_t)(v18[((v21 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v21 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v21 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v21 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v95 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v95 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v95 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v95 >> 26) + 384])
        ^ v16;
    v96 = v22 ^ a2[26];
    v23 = __builtin_rotateleft32(v22 ^ a2[27], 28);
    v24 = (unsigned int)(uintptr_t)(v18[((v23 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v23 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v23 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v23 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v96 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v96 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v96 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v96 >> 26) + 384])
        ^ v20;
    v97 = v24 ^ a2[24];
    v25 = __builtin_rotateleft32(v24 ^ a2[25], 28);
    v26 = (unsigned int)(uintptr_t)(v18[((v25 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v25 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v25 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v25 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v97 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v97 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v97 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v97 >> 26) + 384])
        ^ v22;
    v98 = v26 ^ a2[22];
    v27 = __builtin_rotateleft32(v26 ^ a2[23], 28);
    v28 = (unsigned int)(uintptr_t)(v18[((v27 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v27 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v27 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v27 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v98 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v98 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v98 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v98 >> 26) + 384])
        ^ v24;
    v99 = v28 ^ a2[20];
    v29 = __builtin_rotateleft32(v28 ^ a2[21], 28);
    v30 = (unsigned int)(uintptr_t)(v18[((v29 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v29 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v29 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v29 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v99 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v99 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v99 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v99 >> 26) + 384])
        ^ v26;
    v100 = v30 ^ a2[18];
    v31 = __builtin_rotateleft32(v30 ^ a2[19], 28);
    v32 = (unsigned int)(uintptr_t)(v18[((v31 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v31 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v31 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v31 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v100 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v100 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v100 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v100 >> 26) + 384])
        ^ v28;
    v101 = v32 ^ a2[16];
    v33 = __builtin_rotateleft32(v32 ^ a2[17], 28);
    v34 = (unsigned int)(uintptr_t)(v18[((v33 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v33 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v33 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v33 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v101 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v101 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v101 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v101 >> 26) + 384])
        ^ v30;
    v102 = v34 ^ a2[14];
    v35 = __builtin_rotateleft32(v34 ^ a2[15], 28);
    v36 = (unsigned int)(uintptr_t)(v18[((v35 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v35 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v35 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v35 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v102 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v102 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v102 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v102 >> 26) + 384])
        ^ v32;
    v103 = v36 ^ a2[12];
    v37 = __builtin_rotateleft32(v36 ^ a2[13], 28);
    v38 = (unsigned int)(uintptr_t)(v18[((v37 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v37 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v37 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v37 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v103 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v103 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v103 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v103 >> 26) + 384])
        ^ v34;
    v104 = v38 ^ a2[10];
    v39 = __builtin_rotateleft32(v38 ^ a2[11], 28);
    v40 = (unsigned int)(uintptr_t)(v18[((v39 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v39 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v39 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v39 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v104 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v104 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v104 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v104 >> 26) + 384])
        ^ v36;
    v105 = v40 ^ a2[8];
    v41 = __builtin_rotateleft32(v40 ^ a2[9], 28);
    v42 = (unsigned int)(uintptr_t)(v18[((v41 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v41 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v41 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v41 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v105 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v105 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v105 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v105 >> 26) + 384])
        ^ v38;
    v106 = v42 ^ a2[6];
    v43 = __builtin_rotateleft32(v42 ^ a2[7], 28);
    v44 = (unsigned int)(uintptr_t)(v18[((v43 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v43 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v43 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v43 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v106 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v106 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v106 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v106 >> 26) + 384])
        ^ v40;
    v107 = v44 ^ a2[4];
    v45 = __builtin_rotateleft32(v44 ^ a2[5], 28);
    v46 = (unsigned int)(uintptr_t)(v18[((v45 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v45 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v45 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v45 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v107 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v107 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v107 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v107 >> 26) + 384])
        ^ v42;
    v108 = v46 ^ a2[2];
    v47 = __builtin_rotateleft32(v46 ^ a2[3], 28);
    v48 = (unsigned int)(uintptr_t)(v18[((v47 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v47 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v18[((uint8_t)v47 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v18[(v47 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v18[((v108 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v18[((uint16_t)v108 >> 10) + 128])
        ^ *(unsigned int *)((char *)v18 + (v108 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v18[(v108 >> 26) + 384])
        ^ v44;
    v49 = v48 ^ *a2;
    v50 = a2[1];
  }
  v51 = __builtin_rotateleft32(v48 ^ v50, 28);
  v52 = __builtin_rotateleft32(v48, 29);
  v53 = __builtin_rotateleft32(
          (unsigned int)(&DES_SPtrans)[((v51 >> 18) & 0x3F) + 320]
        ^ (unsigned int)(&DES_SPtrans)[((uint16_t)v51 >> 10) + 192]
        ^ (unsigned int)(&DES_SPtrans)[((uint8_t)v51 >> 2) + 64]
        ^ (unsigned int)(&DES_SPtrans)[(v51 >> 26) + 448]
        ^ (unsigned int)(&DES_SPtrans)[((v49 >> 18) & 0x3F) + 256]
        ^ (unsigned int)(&DES_SPtrans)[((uint16_t)v49 >> 10) + 128]
        ^ *(unsigned int *)((char *)&DES_SPtrans + (v49 & 0xFC))
        ^ (unsigned int)(&DES_SPtrans)[(v49 >> 26) + 384]
        ^ v46,
          29);
  v54 = (v52 ^ (v53 >> 1)) & 0x55555555;
  v55 = v54 ^ v52;
  v56 = v53 ^ (2 * v54);
  v57 = v56 ^ (v56 ^ (v55 >> 8)) & 0xFF00FF;
  v58 = v55 ^ (((v56 ^ (v55 >> 8)) & 0xFF00FF) << 8);
  v59 = v58 ^ (v58 ^ (v57 >> 2)) & 0x33333333;
  v60 = v57 ^ (4 * ((v58 ^ (v57 >> 2)) & 0x33333333));
  v61 = (uint16_t)(v60 ^ HIWORD(v59));
  v62 = v61 ^ v60;
  v63 = v59 ^ (v61 << 16);
  result = (v63 ^ (v62 >> 4)) & 0xF0F0F0F;
  *a1 = result ^ v63;
  a1[1] = v62 ^ (16 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_encrypt2  (binary VA: 0x1a149c0)
// Original: DES_encrypt2
// ----------------------------------------------------------------------------
uint32_t * DES_encrypt2(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int **v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int **v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;

  v3 = __builtin_rotateleft32(*a1, 3);
  v4 = __builtin_rotateleft32(a1[1], 3);
  if ( a3 != 0 )
  {
    v41 = (int **)(&DES_SPtrans);
    v85 = v3 ^ *a2;
    v42 = __builtin_rotateleft32(v3 ^ a2[1], 28);
    v43 = (unsigned int)(uintptr_t)(v41[((v42 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v42 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v42 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v42 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v85 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v85 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v85 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v85 >> 26) + 384])
        ^ v4;
    v86 = v43 ^ a2[2];
    v44 = __builtin_rotateleft32(v43 ^ a2[3], 28);
    v45 = (unsigned int)(uintptr_t)(v41[((v44 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v44 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v44 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v44 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v86 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v86 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v86 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v86 >> 26) + 384])
        ^ v3;
    v87 = v45 ^ a2[4];
    v46 = __builtin_rotateleft32(v45 ^ a2[5], 28);
    v47 = (unsigned int)(uintptr_t)(v41[((v46 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v46 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v46 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v46 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v87 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v87 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v87 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v87 >> 26) + 384])
        ^ v43;
    v88 = v47 ^ a2[6];
    v48 = __builtin_rotateleft32(v47 ^ a2[7], 28);
    v49 = (unsigned int)(uintptr_t)(v41[((v48 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v48 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v48 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v48 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v88 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v88 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v88 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v88 >> 26) + 384])
        ^ v45;
    v89 = v49 ^ a2[8];
    v50 = __builtin_rotateleft32(v49 ^ a2[9], 28);
    v51 = (unsigned int)(uintptr_t)(v41[((v50 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v50 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v50 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v50 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v89 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v89 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v89 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v89 >> 26) + 384])
        ^ v47;
    v90 = v51 ^ a2[10];
    v52 = __builtin_rotateleft32(v51 ^ a2[11], 28);
    v53 = (unsigned int)(uintptr_t)(v41[((v52 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v52 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v52 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v52 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v90 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v90 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v90 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v90 >> 26) + 384])
        ^ v49;
    v91 = v53 ^ a2[12];
    v54 = __builtin_rotateleft32(v53 ^ a2[13], 28);
    v55 = (unsigned int)(uintptr_t)(v41[((v54 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v54 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v54 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v54 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v91 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v91 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v91 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v91 >> 26) + 384])
        ^ v51;
    v92 = v55 ^ a2[14];
    v56 = __builtin_rotateleft32(v55 ^ a2[15], 28);
    v57 = (unsigned int)(uintptr_t)(v41[((v56 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v56 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v56 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v56 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v92 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v92 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v92 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v92 >> 26) + 384])
        ^ v53;
    v93 = v57 ^ a2[16];
    v58 = __builtin_rotateleft32(v57 ^ a2[17], 28);
    v59 = (unsigned int)(uintptr_t)(v41[((v58 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v58 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v58 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v58 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v93 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v93 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v93 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v93 >> 26) + 384])
        ^ v55;
    v94 = v59 ^ a2[18];
    v60 = __builtin_rotateleft32(v59 ^ a2[19], 28);
    v61 = (unsigned int)(uintptr_t)(v41[((v60 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v60 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v60 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v60 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v94 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v94 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v94 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v94 >> 26) + 384])
        ^ v57;
    v95 = v61 ^ a2[20];
    v62 = __builtin_rotateleft32(v61 ^ a2[21], 28);
    v63 = (unsigned int)(uintptr_t)(v41[((v62 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v62 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v62 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v62 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v95 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v95 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v95 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v95 >> 26) + 384])
        ^ v59;
    v96 = v63 ^ a2[22];
    v64 = __builtin_rotateleft32(v63 ^ a2[23], 28);
    v65 = (unsigned int)(uintptr_t)(v41[((v64 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v64 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v64 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v64 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v96 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v96 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v96 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v96 >> 26) + 384])
        ^ v61;
    v97 = v65 ^ a2[24];
    v66 = __builtin_rotateleft32(v65 ^ a2[25], 28);
    v67 = (unsigned int)(uintptr_t)(v41[((v66 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v66 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v66 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v66 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v97 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v97 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v97 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v97 >> 26) + 384])
        ^ v63;
    v98 = v67 ^ a2[26];
    v68 = __builtin_rotateleft32(v67 ^ a2[27], 28);
    v33 = (unsigned int)(uintptr_t)(v41[((v68 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v68 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v68 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v68 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v98 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v98 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v98 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v98 >> 26) + 384])
        ^ v65;
    v99 = v33 ^ a2[28];
    v69 = __builtin_rotateleft32(v33 ^ a2[29], 28);
    v35 = (unsigned int)(uintptr_t)(v41[((v69 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v69 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v41[((uint8_t)v69 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v41[(v69 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v41[((v99 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v41[((uint16_t)v99 >> 10) + 128])
        ^ *(unsigned int *)((char *)v41 + (v99 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v41[(v99 >> 26) + 384])
        ^ v67;
    v36 = v35 ^ a2[30];
    v37 = a2[31];
  }
  else
  {
    v70 = v3 ^ a2[30];
    v5 = (int **)(&DES_SPtrans);
    v6 = __builtin_rotateleft32(v3 ^ a2[31], 28);
    v7 = (unsigned int)(uintptr_t)(v5[((v6 >> 18) & 0x3F) + 320])
       ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v6 >> 10) + 192])
       ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v6 >> 2) + 64])
       ^ (unsigned int)(uintptr_t)(v5[(v6 >> 26) + 448])
       ^ (unsigned int)(uintptr_t)(v5[((v70 >> 18) & 0x3F) + 256])
       ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v70 >> 10) + 128])
       ^ *(unsigned int *)((char *)v5 + (v70 & 0xFC))
       ^ (unsigned int)(uintptr_t)(v5[(v70 >> 26) + 384])
       ^ v4;
    v71 = v7 ^ a2[28];
    v8 = __builtin_rotateleft32(v7 ^ a2[29], 28);
    v9 = (unsigned int)(uintptr_t)(v5[((v8 >> 18) & 0x3F) + 320])
       ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v8 >> 10) + 192])
       ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v8 >> 2) + 64])
       ^ (unsigned int)(uintptr_t)(v5[(v8 >> 26) + 448])
       ^ (unsigned int)(uintptr_t)(v5[((v71 >> 18) & 0x3F) + 256])
       ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v71 >> 10) + 128])
       ^ *(unsigned int *)((char *)v5 + (v71 & 0xFC))
       ^ (unsigned int)(uintptr_t)(v5[(v71 >> 26) + 384])
       ^ v3;
    v72 = v9 ^ a2[26];
    v10 = __builtin_rotateleft32(v9 ^ a2[27], 28);
    v11 = (unsigned int)(uintptr_t)(v5[((v10 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v10 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v10 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v10 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v72 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v72 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v72 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v72 >> 26) + 384])
        ^ v7;
    v73 = v11 ^ a2[24];
    v12 = __builtin_rotateleft32(v11 ^ a2[25], 28);
    v13 = (unsigned int)(uintptr_t)(v5[((v12 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v12 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v12 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v12 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v73 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v73 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v73 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v73 >> 26) + 384])
        ^ v9;
    v74 = v13 ^ a2[22];
    v14 = __builtin_rotateleft32(v13 ^ a2[23], 28);
    v15 = (unsigned int)(uintptr_t)(v5[((v14 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v14 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v14 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v14 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v74 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v74 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v74 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v74 >> 26) + 384])
        ^ v11;
    v75 = v15 ^ a2[20];
    v16 = __builtin_rotateleft32(v15 ^ a2[21], 28);
    v17 = (unsigned int)(uintptr_t)(v5[((v16 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v16 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v16 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v16 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v75 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v75 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v75 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v75 >> 26) + 384])
        ^ v13;
    v76 = v17 ^ a2[18];
    v18 = __builtin_rotateleft32(v17 ^ a2[19], 28);
    v19 = (unsigned int)(uintptr_t)(v5[((v18 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v18 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v18 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v18 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v76 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v76 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v76 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v76 >> 26) + 384])
        ^ v15;
    v77 = v19 ^ a2[16];
    v20 = __builtin_rotateleft32(v19 ^ a2[17], 28);
    v21 = (unsigned int)(uintptr_t)(v5[((v20 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v20 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v20 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v20 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v77 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v77 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v77 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v77 >> 26) + 384])
        ^ v17;
    v78 = v21 ^ a2[14];
    v22 = __builtin_rotateleft32(v21 ^ a2[15], 28);
    v23 = (unsigned int)(uintptr_t)(v5[((v22 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v22 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v22 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v22 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v78 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v78 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v78 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v78 >> 26) + 384])
        ^ v19;
    v79 = v23 ^ a2[12];
    v24 = __builtin_rotateleft32(v23 ^ a2[13], 28);
    v25 = (unsigned int)(uintptr_t)(v5[((v24 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v24 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v24 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v24 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v79 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v79 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v79 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v79 >> 26) + 384])
        ^ v21;
    v80 = v25 ^ a2[10];
    v26 = __builtin_rotateleft32(v25 ^ a2[11], 28);
    v27 = (unsigned int)(uintptr_t)(v5[((v26 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v26 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v26 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v26 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v80 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v80 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v80 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v80 >> 26) + 384])
        ^ v23;
    v81 = v27 ^ a2[8];
    v28 = __builtin_rotateleft32(v27 ^ a2[9], 28);
    v29 = (unsigned int)(uintptr_t)(v5[((v28 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v28 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v28 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v28 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v81 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v81 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v81 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v81 >> 26) + 384])
        ^ v25;
    v82 = v29 ^ a2[6];
    v30 = __builtin_rotateleft32(v29 ^ a2[7], 28);
    v31 = (unsigned int)(uintptr_t)(v5[((v30 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v30 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v30 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v30 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v82 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v82 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v82 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v82 >> 26) + 384])
        ^ v27;
    v83 = v31 ^ a2[4];
    v32 = __builtin_rotateleft32(v31 ^ a2[5], 28);
    v33 = (unsigned int)(uintptr_t)(v5[((v32 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v32 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v32 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v32 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v83 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v83 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v83 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v83 >> 26) + 384])
        ^ v29;
    v84 = v33 ^ a2[2];
    v34 = __builtin_rotateleft32(v33 ^ a2[3], 28);
    v35 = (unsigned int)(uintptr_t)(v5[((v34 >> 18) & 0x3F) + 320])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v34 >> 10) + 192])
        ^ (unsigned int)(uintptr_t)(v5[((uint8_t)v34 >> 2) + 64])
        ^ (unsigned int)(uintptr_t)(v5[(v34 >> 26) + 448])
        ^ (unsigned int)(uintptr_t)(v5[((v84 >> 18) & 0x3F) + 256])
        ^ (unsigned int)(uintptr_t)(v5[((uint16_t)v84 >> 10) + 128])
        ^ *(unsigned int *)((char *)v5 + (v84 & 0xFC))
        ^ (unsigned int)(uintptr_t)(v5[(v84 >> 26) + 384])
        ^ v31;
    v36 = v35 ^ *a2;
    v37 = a2[1];
  }
  v38 = __builtin_rotateleft32(v35 ^ v37, 28);
  v39 = (unsigned int)(&DES_SPtrans)[((v38 >> 18) & 0x3F) + 320]
      ^ (unsigned int)(&DES_SPtrans)[((uint16_t)v38 >> 10) + 192]
      ^ (unsigned int)(&DES_SPtrans)[((uint8_t)v38 >> 2) + 64]
      ^ (unsigned int)(&DES_SPtrans)[(v38 >> 26) + 448]
      ^ (unsigned int)(&DES_SPtrans)[((v36 >> 18) & 0x3F) + 256]
      ^ (unsigned int)(&DES_SPtrans)[((uint16_t)v36 >> 10) + 128]
      ^ *(unsigned int *)((char *)&DES_SPtrans + (v36 & 0xFC))
      ^ (unsigned int)(&DES_SPtrans)[(v36 >> 26) + 384]
      ^ v33;
  *a1 = __builtin_rotateleft32(v35, 29);
  a1[1] = __builtin_rotateleft32(v39, 29);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DES_encrypt3  (binary VA: 0x1a159c0)
// Original: DES_encrypt3
// ----------------------------------------------------------------------------
int DES_encrypt3(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int result;

  v4 = (*a1 ^ ((unsigned int)a1[1] >> 4)) & 0xF0F0F0F;
  v5 = v4 ^ *a1;
  v6 = a1[1] ^ (16 * v4);
  v7 = v6 ^ (uint16_t)(v6 ^ HIWORD(v5));
  v8 = v5 ^ ((uint16_t)(v6 ^ HIWORD(v5)) << 16);
  v9 = (v8 ^ (v7 >> 2)) & 0x33333333;
  v10 = v8 ^ v9;
  v11 = v7 ^ (4 * v9);
  v12 = v11 ^ (v11 ^ (v10 >> 8)) & 0xFF00FF;
  v13 = v10 ^ (((v11 ^ (v10 >> 8)) & 0xFF00FF) << 8);
  v14 = (v13 ^ (v12 >> 1)) & 0x55555555;
  *a1 = v14 ^ v13;
  a1[1] = v12 ^ (2 * v14);
  DES_encrypt2(a1, a2, 1);
  DES_encrypt2(a1, a3, 0);
  DES_encrypt2(a1, a4, 1);
  v15 = (*a1 ^ ((unsigned int)a1[1] >> 1)) & 0x55555555;
  v16 = v15 ^ *a1;
  v17 = a1[1] ^ (2 * v15);
  v18 = (v17 ^ (v16 >> 8)) & 0xFF00FF;
  v19 = v18 ^ v17;
  v20 = v16 ^ (v18 << 8);
  v21 = v20 ^ (v20 ^ (v19 >> 2)) & 0x33333333;
  v22 = v19 ^ (4 * ((v20 ^ (v19 >> 2)) & 0x33333333));
  v23 = (uint16_t)(v22 ^ HIWORD(v21));
  v24 = v23 ^ v22;
  v25 = v21 ^ (v23 << 16);
  result = (v25 ^ (v24 >> 4)) & 0xF0F0F0F;
  *a1 = result ^ v25;
  a1[1] = v24 ^ (16 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_decrypt3  (binary VA: 0x1a15b10)
// Original: DES_decrypt3
// ----------------------------------------------------------------------------
int DES_decrypt3(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int result;

  v4 = (*a1 ^ ((unsigned int)a1[1] >> 4)) & 0xF0F0F0F;
  v5 = v4 ^ *a1;
  v6 = a1[1] ^ (16 * v4);
  v7 = v6 ^ (uint16_t)(v6 ^ HIWORD(v5));
  v8 = v5 ^ ((uint16_t)(v6 ^ HIWORD(v5)) << 16);
  v9 = (v8 ^ (v7 >> 2)) & 0x33333333;
  v10 = v8 ^ v9;
  v11 = v7 ^ (4 * v9);
  v12 = v11 ^ (v11 ^ (v10 >> 8)) & 0xFF00FF;
  v13 = v10 ^ (((v11 ^ (v10 >> 8)) & 0xFF00FF) << 8);
  v14 = (v13 ^ (v12 >> 1)) & 0x55555555;
  *a1 = v14 ^ v13;
  a1[1] = v12 ^ (2 * v14);
  DES_encrypt2(a1, a4, 0);
  DES_encrypt2(a1, a3, 1);
  DES_encrypt2(a1, a2, 0);
  v15 = (*a1 ^ ((unsigned int)a1[1] >> 1)) & 0x55555555;
  v16 = v15 ^ *a1;
  v17 = a1[1] ^ (2 * v15);
  v18 = (v17 ^ (v16 >> 8)) & 0xFF00FF;
  v19 = v18 ^ v17;
  v20 = v16 ^ (v18 << 8);
  v21 = v20 ^ (v20 ^ (v19 >> 2)) & 0x33333333;
  v22 = v19 ^ (4 * ((v20 ^ (v19 >> 2)) & 0x33333333));
  v23 = (uint16_t)(v22 ^ HIWORD(v21));
  v24 = v23 ^ v22;
  v25 = v21 ^ (v23 << 16);
  result = (v25 ^ (v24 >> 4)) & 0xF0F0F0F;
  *a1 = result ^ v25;
  a1[1] = v24 ^ (16 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_ncbc_encrypt  (binary VA: 0x1a15c60)
// Original: DES_ncbc_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_ncbc_encrypt(uint8_t *a1, int a2, int a3, uint32_t *a4, uint8_t *a5, int a6)
{
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  char v12;
  int v13;
  uint8_t *v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int16_t v19; // kr00_2
  unsigned int v20;
  unsigned int v21;
  int16_t v22; // kr02_2
  unsigned int v23;
  unsigned int v24;
  int v26;
  uint8_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int16_t v32; // ecx^2
  unsigned int v33;
  bool v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint8_t *v44;
  int v45;
  uint8_t *v46;
  int v47;
  int v48;
  uint8_t *v49;
  int v50;
  int v51;
  typedef uint8_t *_g4_t_v52;
  typedef uint8_t _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef int _g4_t_v68;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v53)) > _g4_s1 ? (32u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v54)) > _g4_s2 ? (48u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v55)) > _g4_s3 ? (48u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v56)) > _g4_s4 ? (48u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v57)) > _g4_s5 ? (48u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v58)) > _g4_s6 ? (52u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v59)) > _g4_s7 ? (52u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v60)) > _g4_s8 ? (52u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v61)) > _g4_s9 ? (52u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v62)) > _g4_s10 ? (56u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v63)) > _g4_s11 ? (56u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v64)) > _g4_s12 ? (60u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v65)) > _g4_s13 ? (60u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v66)) > _g4_s14 ? (60u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v67)) > _g4_s15 ? (72u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v68)) > _g4_s16 ? (76u + sizeof(_g4_t_v68)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);

  if ( a6 != 0 )
  {
    v54 = (a5[3] << 24) | *a5 | (a5[2] << 16) | (a5[1] << 8);
    v64 = a3 - 8;
    v58 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
    v62 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v6 = (uint8_t *)a2;
      v7 = a1;
      do
      {
        v8 = v7[5];
        v9 = v7[6] << 16;
        v67 = v54 ^ ((v7[3] << 24) | *v7 | (v7[2] << 16) | (v7[1] << 8));
        v68 = v58 ^ ((v7[7] << 24) | v7[4] | v9 | (v8 << 8));
        v7 += 8;
        DES_encrypt1((int *)&v67, a4, 1);
        v10 = v67;
        v11 = v68;
        v12 = BYTE1(v67);
        *v6 = v67;
        v6[4] = v11;
        v6[1] = v12;
        v54 = v10;
        v6[2] = BYTE2(v10);
        v58 = v11;
        v6[3] = HIBYTE(v10);
        v6[5] = BYTE1(v11);
        v6[6] = BYTE2(v11);
        v6[7] = HIBYTE(v11);
        v6 += 8;
        v62 -= 8;
      }
      while ( v62 >= 0 );
      v13 = 8 * (v64 >> 3) + 8;
      a1 += v13;
      a2 += v13;
      v62 = a3 - 8 * (v64 >> 3) - 16;
    }
    if ( v62 == -8 )
    {
      v53 = BYTE2(v54);
      v15 = HIBYTE(v54);
      v23 = HIWORD(v58);
      v24 = HIBYTE(v58);
      v19 = v54;
      v22 = v58;
    }
    else
    {
      v14 = &a1[v62 + 8];
      switch ( v62 )
      {
        case -7:
          v49 = &a1[v62 + 8];
          v15 = 0;
          v50 = 0;
          goto LABEL_29;
        case -6:
          v15 = 0;
          v48 = 0;
          goto LABEL_28;
        case -5:
          v46 = &a1[v62 + 8];
          v15 = 0;
          v47 = 0;
          goto LABEL_27;
        case -4:
          v15 = 0;
          goto LABEL_26;
        case -3:
          v44 = &a1[v62 + 8];
          v45 = 0;
          goto LABEL_25;
        case -2:
          v43 = 0;
          goto LABEL_24;
        case -1:
          v42 = *--v14;
          v43 = v42 << 16;
LABEL_24:
          v44 = v14 - 1;
          v45 = v43 | (*(v14 - 1) << 8);
LABEL_25:
          v14 = v44 - 1;
          v15 = v45 | *(v44 - 1);
LABEL_26:
          v46 = v14 - 1;
          v47 = *(v14 - 1) << 24;
LABEL_27:
          v14 = v46 - 1;
          v48 = v47 | (*(v46 - 1) << 16);
LABEL_28:
          v49 = v14 - 1;
          v50 = v48 | (*(v14 - 1) << 8);
LABEL_29:
          v16 = v50 | *(v49 - 1);
          break;
        default:
          v15 = 0;
          v16 = 0;
          break;
      }
      v67 = v54 ^ v16;
      v68 = v58 ^ v15;
      DES_encrypt1((int *)&v67, a4, 1);
      v17 = v67;
      v18 = v67 >> 8;
      v19 = v67;
      *(uint8_t *)a2 = v67;
      *(uint8_t *)(a2 + 1) = v18;
      v20 = v17;
      v17 >>= 24;
      *(uint8_t *)(a2 + 3) = v17;
      LOBYTE(v15) = v17;
      v20 >>= 16;
      v21 = v68;
      *(uint8_t *)(a2 + 2) = v20;
      *(uint32_t *)(a2 + 4) = v21;
      v53 = v20;
      v22 = v21;
      v23 = HIWORD(v21);
      v24 = HIBYTE(v21);
    }
    *a5 = v19;
    a5[4] = v22;
    a5[1] = HIBYTE(v19);
    a5[2] = v53;
    a5[3] = v15;
    a5[5] = HIBYTE(v22);
    a5[6] = v23;
    a5[7] = v24;
    return v23;
  }
  else
  {
    v55 = (a5[3] << 24) | *a5 | (a5[2] << 16) | (a5[1] << 8);
    v65 = a3 - 8;
    v59 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
    v63 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v26 = a2;
      v27 = a1;
      while ( 1 )
      {
        v28 = v27[5];
        v29 = (v27[3] << 24) | *v27 | (v27[2] << 16) | (v27[1] << 8);
        v30 = v27[6];
        v67 = v29;
        v31 = (v27[7] << 24) | v27[4] | (v30 << 16) | (v28 << 8);
        v52 = v27 + 8;
        v68 = v31;
        DES_encrypt1((int *)&v67, a4, 0);
        v32 = HIWORD(v67) ^ HIWORD(v55);
        v60 = v68 ^ v59;
        v33 = (v67 ^ v55) >> 8;
        *(uint8_t *)v26 = v67 ^ v55;
        *(uint8_t *)(v26 + 1) = v33;
        *(uint8_t *)(v26 + 3) = HIBYTE(v32);
        *(uint8_t *)(v26 + 4) = v60;
        *(uint8_t *)(v26 + 2) = v32;
        *(uint16_t *)(v26 + 5) = *(uint16_t *)((char *)&v60 + 1);
        *(uint8_t *)(v26 + 7) = HIBYTE(v60);
        v26 += 8;
        v34 = v63 - 8 < 0;
        v63 -= 8;
        v27 = v52;
        if ( v34 )
          break;
        v59 = v31;
        v55 = v29;
      }
      v59 = v31;
      v55 = v29;
      v35 = 8 * (v65 >> 3) + 8;
      a1 += v35;
      a2 += v35;
      v63 = a3 - 8 * (v65 >> 3) - 16;
    }
    if ( v63 != -8 )
    {
      v36 = a1[5];
      v37 = (a1[3] << 24) | *a1 | (a1[2] << 16) | (a1[1] << 8);
      v38 = a1[6];
      v67 = v37;
      v39 = (a1[7] << 24) | a1[4] | (v38 << 16) | (v36 << 8);
      v68 = v39;
      DES_encrypt1((int *)&v67, a4, 0);
      v66 = v68 ^ v59;
      v40 = v63 + 8 + a2;
      v41 = v67 ^ v55;
      switch ( v63 )
      {
        case -7:
          v57 = v63 + 8 + a2;
          goto LABEL_36;
        case -6:
          goto LABEL_35;
        case -5:
          v56 = v63 + 8 + a2;
          goto LABEL_34;
        case -4:
          goto LABEL_33;
        case -3:
          v61 = v63 + 8 + a2;
          goto LABEL_32;
        case -2:
          goto LABEL_31;
        case -1:
          *(uint8_t *)--v40 = BYTE2(v66);
LABEL_31:
          v61 = v40 - 1;
          *(uint8_t *)(v40 - 1) = BYTE1(v66);
LABEL_32:
          v40 = v61 - 1;
          *(uint8_t *)(v61 - 1) = v66;
LABEL_33:
          v56 = v40 - 1;
          *(uint8_t *)(v40 - 1) = HIBYTE(v41);
LABEL_34:
          v40 = v56 - 1;
          *(uint8_t *)(v56 - 1) = BYTE2(v41);
LABEL_35:
          v57 = v40 - 1;
          *(uint8_t *)(v40 - 1) = BYTE1(v41);
LABEL_36:
          v51 = v57;
          v59 = v39;
          v55 = v37;
          *(uint8_t *)(v51 - 1) = v41;
          break;
        default:
          v59 = v39;
          v55 = v37;
          break;
      }
    }
    *a5 = v55;
    a5[4] = v59;
    a5[1] = BYTE1(v55);
    *((uint16_t *)a5 + 1) = HIWORD(v55);
    *(uint16_t *)(a5 + 5) = *(uint16_t *)((char *)&v59 + 1);
    a5[7] = HIBYTE(v59);
    return HIBYTE(v59);
  }
}

// ----------------------------------------------------------------------------
// Function: DES_ede3_cbc_encrypt  (binary VA: 0x1a16350)
// Original: DES_ede3_cbc_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_ede3_cbc_encrypt(uint8_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint8_t *a7, int a8)
{
  int v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  char v14;
  unsigned int v15;
  int v16;
  uint8_t *v17;
  int v18;
  int v19;
  int16_t v20; // edx^2
  unsigned int v21;
  int16_t v22; // di
  uint16_t v23; // kr00_2
  uint8_t v24;
  unsigned int v25;
  unsigned int v26;
  int v28;
  uint8_t *v29;
  int v30;
  uint8_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int16_t v36; // ecx^2
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint16_t v45; // kr02_2
  int v46;
  int v47;
  uint8_t *v48;
  int v49;
  uint8_t *v50;
  int v51;
  int v52;
  uint8_t *v53;
  int v54;
  int v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint8_t _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68;
  typedef uint8_t _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v56)) > _g4_s0 ? (8u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v57)) > _g4_s1 ? (12u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v58)) > _g4_s2 ? (12u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v59)) > _g4_s3 ? (12u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v60)) > _g4_s4 ? (12u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v61)) > _g4_s5 ? (32u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v62)) > _g4_s6 ? (48u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v63)) > _g4_s7 ? (48u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v64)) > _g4_s8 ? (48u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v65)) > _g4_s9 ? (48u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v66)) > _g4_s10 ? (52u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v67)) > _g4_s11 ? (52u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v68)) > _g4_s12 ? (52u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v69)) > _g4_s13 ? (56u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v70)) > _g4_s14 ? (60u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v71)) > _g4_s15 ? (60u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v72)) > _g4_s16 ? (60u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v73)) > _g4_s17 ? (72u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v74)) > _g4_s18 ? (76u + sizeof(_g4_t_v74)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);

  if ( a8 != 0 )
  {
    v8 = a2;
    v57 = (a7[3] << 24) | *a7 | (a7[2] << 16) | (a7[1] << 8);
    v9 = a1;
    v70 = a3 - 8;
    v62 = (a7[7] << 24) | a7[4] | (a7[6] << 16) | (a7[5] << 8);
    v66 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v10 = a2;
      v11 = a1;
      do
      {
        v12 = v11[5];
        v13 = v11[6] << 16;
        v73 = v57 ^ ((v11[3] << 24) | *v11 | (v11[2] << 16) | (v11[1] << 8));
        v74 = v62 ^ ((v11[7] << 24) | v11[4] | v13 | (v12 << 8));
        v11 += 8;
        DES_encrypt3(&v73, a4, a5, a6);
        v14 = BYTE1(v73);
        v15 = v74;
        v57 = v73;
        *(uint8_t *)v10 = v73;
        *(uint8_t *)(v10 + 4) = v15;
        *(uint8_t *)(v10 + 1) = v14;
        v62 = v15;
        *(uint16_t *)(v10 + 2) = HIWORD(v57);
        *(uint8_t *)(v10 + 5) = BYTE1(v15);
        *(uint8_t *)(v10 + 6) = BYTE2(v15);
        *(uint8_t *)(v10 + 7) = HIBYTE(v15);
        v10 += 8;
        v66 -= 8;
      }
      while ( v66 >= 0 );
      v16 = 8 * (v70 >> 3) + 8;
      v9 = &a1[v16];
      v8 = a2 + v16;
      v66 = a3 - 8 * (v70 >> 3) - 16;
    }
    if ( v66 == -8 )
    {
      v68 = v57;
      v45 = HIWORD(v57);
      v69 = HIBYTE(v45);
      v61 = v45;
      v24 = v62;
      LOBYTE(v57) = BYTE1(v62);
      v25 = HIWORD(v62);
      v26 = HIBYTE(v62);
      v23 = __PAIR16__(BYTE1(v57), v68);
    }
    else
    {
      v17 = &v9[v66 + 8];
      switch ( v66 )
      {
        case -7:
          v53 = &v9[v66 + 8];
          v18 = 0;
          v54 = 0;
          goto LABEL_29;
        case -6:
          v18 = 0;
          v52 = 0;
          goto LABEL_28;
        case -5:
          v50 = &v9[v66 + 8];
          v18 = 0;
          v51 = 0;
          goto LABEL_27;
        case -4:
          v18 = 0;
          goto LABEL_26;
        case -3:
          v48 = &v9[v66 + 8];
          v49 = 0;
          goto LABEL_25;
        case -2:
          v47 = 0;
          goto LABEL_24;
        case -1:
          v46 = *--v17;
          v47 = v46 << 16;
LABEL_24:
          v48 = v17 - 1;
          v49 = v47 | (*(v17 - 1) << 8);
LABEL_25:
          v17 = v48 - 1;
          v18 = v49 | *(v48 - 1);
LABEL_26:
          v50 = v17 - 1;
          v51 = *(v17 - 1) << 24;
LABEL_27:
          v17 = v50 - 1;
          v52 = v51 | (*(v50 - 1) << 16);
LABEL_28:
          v53 = v17 - 1;
          v54 = v52 | (*(v17 - 1) << 8);
LABEL_29:
          v19 = v54 | *(v53 - 1);
          break;
        default:
          v18 = 0;
          v19 = 0;
          break;
      }
      v73 = v57 ^ v19;
      v74 = v62 ^ v18;
      DES_encrypt3(&v73, a4, a5, a6);
      v20 = HIWORD(v73);
      v21 = v74;
      v22 = v74;
      v23 = v73;
      *(uint16_t *)v8 = v73;
      *(uint8_t *)(v8 + 4) = v22;
      v61 = v20;
      *(uint8_t *)(v8 + 2) = v20;
      LOBYTE(v57) = HIBYTE(v22);
      *(uint8_t *)(v8 + 5) = HIBYTE(v22);
      v69 = HIBYTE(v20);
      *(uint8_t *)(v8 + 3) = HIBYTE(v20);
      v24 = v21;
      v25 = HIWORD(v21);
      *(uint8_t *)(v8 + 6) = BYTE2(v21);
      v26 = HIBYTE(v21);
      *(uint8_t *)(v8 + 7) = HIBYTE(v21);
    }
    *a7 = v23;
    a7[4] = v24;
    a7[1] = HIBYTE(v23);
    a7[2] = v61;
    a7[5] = v57;
    a7[3] = v69;
    a7[7] = v26;
    a7[6] = v25;
    return v25;
  }
  else
  {
    v58 = (a7[3] << 24) | *a7 | (a7[2] << 16) | (a7[1] << 8);
    v28 = a2;
    v63 = (a7[7] << 24) | a7[4] | (a7[6] << 16) | (a7[5] << 8);
    v71 = a3 - 8;
    v67 = a3 - 8;
    v29 = a1;
    if ( a3 - 8 >= 0 )
    {
      v30 = a2;
      v31 = a1;
      while ( 1 )
      {
        v32 = v31[5];
        v33 = (v31[3] << 24) | *v31 | (v31[2] << 16) | (v31[1] << 8);
        v34 = v31[6];
        v73 = v33;
        v35 = (v31[7] << 24) | v31[4] | (v34 << 16) | (v32 << 8);
        v56 = v30;
        v74 = v35;
        DES_decrypt3(&v73, a4, a5, a6);
        v36 = HIWORD(v73) ^ HIWORD(v58);
        v64 = v74 ^ v63;
        v31 += 8;
        v37 = (v73 ^ (unsigned int)v58) >> 8;
        *(uint8_t *)v56 = v73 ^ v58;
        *(uint8_t *)(v56 + 1) = v37;
        *(uint8_t *)(v56 + 3) = HIBYTE(v36);
        *(uint8_t *)(v56 + 4) = v64;
        *(uint8_t *)(v56 + 2) = v36;
        *(uint16_t *)(v56 + 5) = *(uint16_t *)((char *)&v64 + 1);
        *(uint8_t *)(v56 + 7) = HIBYTE(v64);
        v30 = v56 + 8;
        v67 -= 8;
        if ( v67 < 0 )
          break;
        v63 = v35;
        v58 = v33;
      }
      v63 = v35;
      v58 = v33;
      v38 = 8 * (v71 >> 3) + 8;
      v29 = &a1[v38];
      v28 = v38 + a2;
      v67 = a3 - 8 * (v71 >> 3) - 16;
    }
    if ( v67 != -8 )
    {
      v39 = v29[5];
      v40 = (v29[3] << 24) | *v29 | (v29[2] << 16) | (v29[1] << 8);
      v41 = v29[6];
      v73 = v40;
      v42 = (v29[7] << 24) | v29[4] | (v41 << 16) | (v39 << 8);
      v74 = v42;
      DES_decrypt3(&v73, a4, a5, a6);
      v72 = v74 ^ v63;
      v43 = v73 ^ v58;
      v44 = v28 + v67 + 8;
      switch ( v67 )
      {
        case -7:
          v60 = v28 + v67 + 8;
          goto LABEL_36;
        case -6:
          goto LABEL_35;
        case -5:
          v59 = v28 + v67 + 8;
          goto LABEL_34;
        case -4:
          goto LABEL_33;
        case -3:
          v65 = v28 + v67 + 8;
          goto LABEL_32;
        case -2:
          goto LABEL_31;
        case -1:
          *(uint8_t *)--v44 = BYTE2(v72);
LABEL_31:
          v65 = v44 - 1;
          *(uint8_t *)(v44 - 1) = BYTE1(v72);
LABEL_32:
          v44 = v65 - 1;
          *(uint8_t *)(v65 - 1) = v72;
LABEL_33:
          v59 = v44 - 1;
          *(uint8_t *)(v44 - 1) = HIBYTE(v43);
LABEL_34:
          v44 = v59 - 1;
          *(uint8_t *)(v59 - 1) = BYTE2(v43);
LABEL_35:
          v60 = v44 - 1;
          *(uint8_t *)(v44 - 1) = BYTE1(v43);
LABEL_36:
          v55 = v60;
          v63 = v42;
          v58 = v40;
          *(uint8_t *)(v55 - 1) = v43;
          break;
        default:
          v63 = v42;
          v58 = v40;
          break;
      }
    }
    *a7 = v58;
    a7[4] = v63;
    a7[1] = BYTE1(v58);
    *((uint16_t *)a7 + 1) = HIWORD(v58);
    *(uint16_t *)(a7 + 5) = *(uint16_t *)((char *)&v63 + 1);
    a7[7] = HIBYTE(v63);
    return HIBYTE(v63);
  }
}

// ----------------------------------------------------------------------------
// Function: DES_ecb3_encrypt  (binary VA: 0x1a16a50)
// Original: DES_ecb3_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_ecb3_encrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, int a6)
{
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  char v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int result;
  typedef unsigned int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  v6 = *a1 | (a1[2] << 16) | (a1[1] << 8);
  v7 = a1[3] << 24;
  v15 = (a1[7] << 24) | a1[4] | (a1[6] << 16) | (a1[5] << 8);
  v14 = v7 | v6;
  if ( a6 != 0 )
    DES_encrypt3((int *)&v14, a3, a4, a5);
  else
    DES_decrypt3((int *)&v14, a3, a4, a5);
  v8 = v14;
  v9 = v15;
  v10 = BYTE1(v14);
  *a2 = v14;
  a2[4] = v9;
  a2[1] = v10;
  a2[3] = HIBYTE(v8);
  a2[5] = BYTE1(v9);
  v11 = HIWORD(v8);
  v12 = HIWORD(v9);
  a2[2] = v11;
  result = HIBYTE(v9);
  a2[6] = v12;
  a2[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_ede3_ofb64_encrypt  (binary VA: 0x1a16b40)
// Original: DES_ede3_ofb64_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_ede3_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint8_t *a7, int *a8)
{
  int v8;
  unsigned int result;
  int v10;
  int v11;
  char v14;
  unsigned int v15;
  typedef uint8_t *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);

  v8 = *a8;
  result = (a7[3] << 24) | *a7 | (a7[2] << 16) | (a7[1] << 8);
  v10 = a7[4];
  v19 = result;
  LOWORD(v21) = result;
  v17 = (a7[7] << 24) | v10 | (a7[6] << 16) | (a7[5] << 8);
  v20 = v17;
  BYTE2(v21) = BYTE2(result);
  HIBYTE(v21) = HIBYTE(result);
  v22 = v17;
  if ( a3 != 0 )
  {
    v11 = a3;
    v18 = 0;
    do
    {
      if ( v8 == 0 )
      {
        v16 = a2;
        DES_encrypt3((int *)&v19, a4, a5, a6);
        result = v19;
        v17 = v20;
        v21 = v19;
        ++v18;
        a2 = v16;
        v22 = v20;
      }
      v14 = *a1 ^ *((uint8_t *)&v21 + v8);
      v8 = ((uint8_t)v8 + 1) & 7;
      *a2 = v14;
      ++a1;
      ++a2;
      --v11;
    }
    while ( v11 != 0 );
    if ( v18 != 0 )
    {
      *(uint16_t *)a7 = result;
      a7[3] = HIBYTE(result);
      *((uint16_t *)a7 + 2) = v17;
      a7[6] = BYTE2(v17);
      v15 = HIWORD(result);
      result = HIBYTE(v17);
      a7[2] = v15;
      a7[7] = HIBYTE(v17);
    }
  }
  *a8 = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: DES_ofb64_encrypt  (binary VA: 0x1a16d40)
// Original: DES_ofb64_encrypt
// ----------------------------------------------------------------------------
int * DES_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint8_t *a5, int *a6)
{
  int v6;
  int i;
  char v10;
  int v11;
  typedef uint8_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v6 = *a6;
  v15 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
  v16 = (a5[3] << 24) | *a5 | (a5[2] << 16) | (a5[1] << 8);
  v17 = v15;
  v18 = v16;
  v19 = v15;
  if ( a3 != 0 )
  {
    v14 = 0;
    for ( i = a3; i != 0; --i )
    {
      if ( v6 == 0 )
      {
        v13 = a2;
        DES_encrypt1(&v16, a4, 1);
        ++v14;
        v18 = v16;
        a2 = v13;
        v19 = v17;
      }
      v10 = *a1 ^ *((uint8_t *)&v18 + v6);
      v6 = ((uint8_t)v6 + 1) & 7;
      *a2 = v10;
      ++a1;
      ++a2;
    }
    if ( v14 != 0 )
    {
      v11 = v17;
      *(uint32_t *)a5 = v16;
      *((uint32_t *)a5 + 1) = v11;
    }
  }
  *a6 = v6;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: DES_xcbc_encrypt  (binary VA: 0x1a16f30)
// Original: DES_xcbc_encrypt
// ----------------------------------------------------------------------------
unsigned int DES_xcbc_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint8_t *a5, uint8_t *a6, uint8_t *a7, int a8)
{
  int v8;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  uint8_t *v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  uint8_t v26; // si
  unsigned int v27;
  unsigned int v28;
  uint16_t v29; // kr00_2
  uint8_t *v31;
  uint8_t *v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint8_t *v46;
  int v47;
  uint8_t *v48;
  int v49;
  int v50;
  uint8_t *v51;
  int v52;
  uint8_t *v53;
  typedef uint8_t *_g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t *_g4_t_v57;
  typedef uint8_t *_g4_t_v58;
  typedef uint8_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint8_t _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint8_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint8_t _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint8_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v54)) > _g4_s0 ? (8u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v55)) > _g4_s1 ? (12u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v56)) > _g4_s2 ? (12u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v58)) > _g4_s4 ? (12u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v59)) > _g4_s5 ? (12u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v60)) > _g4_s6 ? (16u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v61)) > _g4_s7 ? (16u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v62)) > _g4_s8 ? (16u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v63)) > _g4_s9 ? (20u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v64)) > _g4_s10 ? (20u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v65)) > _g4_s11 ? (24u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v66)) > _g4_s12 ? (24u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v67)) > _g4_s13 ? (24u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v68)) > _g4_s14 ? (28u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v69)) > _g4_s15 ? (28u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v70)) > _g4_s16 ? (32u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v71)) > _g4_s17 ? (32u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v72)) > _g4_s18 ? (36u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v73)) > _g4_s19 ? (44u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v74)) > _g4_s20 ? (44u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v75)) > _g4_s21 ? (56u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v76)) > _g4_s22 ? (60u + sizeof(_g4_t_v76)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 60u);

  v65 = (a6[3] << 24) | *a6 | (a6[2] << 16) | (a6[1] << 8);
  v68 = (a6[7] << 24) | a6[4] | (a6[6] << 16) | (a6[5] << 8);
  v70 = (a7[3] << 24) | *a7 | (a7[2] << 16) | (a7[1] << 8);
  v72 = (a7[7] << 24) | a7[4] | (a7[6] << 16) | (a7[5] << 8);
  v8 = a5[1] << 8;
  v9 = *a5;
  if ( a8 != 0 )
  {
    v60 = (a5[3] << 24) | v9 | (a5[2] << 16) | v8;
    v73 = a3 - 8;
    v63 = a3 - 8;
    v55 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
    if ( a3 - 8 >= 0 )
    {
      v10 = a2;
      v11 = a1;
      do
      {
        v12 = (v11[3] << 24) | *v11 | (v11[2] << 16) | (v11[1] << 8);
        v13 = (v11[7] << 24) | v11[4] | (v11[6] << 16) | (v11[5] << 8);
        v11 += 8;
        v75 = v12 ^ v65 ^ v60;
        v76 = v13 ^ v68 ^ v55;
        DES_encrypt1(&v75, a4, 1);
        v14 = BYTE1(v75) ^ BYTE1(v70);
        v60 = v75 ^ v70;
        *v10 = v75 ^ v70;
        v10[1] = v14;
        *((uint16_t *)v10 + 1) = HIWORD(v60);
        v15 = v76 ^ v72;
        v10[4] = v76 ^ v72;
        v55 = v15;
        v10[5] = BYTE1(v15);
        v10[6] = BYTE2(v15);
        v10[7] = HIBYTE(v15);
        v10 += 8;
        v63 -= 8;
      }
      while ( v63 >= 0 );
      v16 = 8 * (v73 >> 3) + 8;
      a1 += v16;
      a2 += v16;
      v63 = a3 - 8 * (v73 >> 3) - 16;
    }
    if ( v63 == -8 )
    {
      v66 = v60;
      v43 = v60;
      v29 = *(uint16_t *)((char *)&v60 + 1);
      v61 = BYTE1(v55);
      v23 = HIBYTE(v43);
      v26 = v55;
      v27 = HIWORD(v55);
      v28 = HIBYTE(v55);
    }
    else
    {
      v17 = &a1[v63 + 8];
      switch ( v63 )
      {
        case -7:
          v51 = &a1[v63 + 8];
          v18 = 0;
          v52 = 0;
          goto LABEL_30;
        case -6:
          v18 = 0;
          v50 = 0;
          goto LABEL_29;
        case -5:
          v48 = &a1[v63 + 8];
          v18 = 0;
          v49 = 0;
          goto LABEL_28;
        case -4:
          v18 = 0;
          goto LABEL_27;
        case -3:
          v46 = &a1[v63 + 8];
          v47 = 0;
          goto LABEL_26;
        case -2:
          v45 = 0;
          goto LABEL_25;
        case -1:
          v44 = *--v17;
          v45 = v44 << 16;
LABEL_25:
          v46 = v17 - 1;
          v47 = v45 | (*(v17 - 1) << 8);
LABEL_26:
          v17 = v46 - 1;
          v18 = v47 | *(v46 - 1);
LABEL_27:
          v48 = v17 - 1;
          v49 = *(v17 - 1) << 24;
LABEL_28:
          v17 = v48 - 1;
          v50 = v49 | (*(v48 - 1) << 16);
LABEL_29:
          v51 = v17 - 1;
          v52 = v50 | (*(v17 - 1) << 8);
LABEL_30:
          v19 = v52 | *(v51 - 1);
          break;
        default:
          v18 = 0;
          v19 = 0;
          break;
      }
      v75 = v19 ^ v65 ^ v60;
      v76 = v18 ^ v68 ^ v55;
      DES_encrypt1(&v75, a4, 1);
      v20 = v75 ^ v70;
      v66 = v75 ^ v70;
      v21 = (v75 ^ (unsigned int)v70) >> 8;
      a2[1] = v21;
      v69 = v21;
      *a2 = v20;
      v22 = HIWORD(v20);
      v20 >>= 24;
      a2[2] = v22;
      a2[3] = v20;
      LOBYTE(v23) = v20;
      v24 = v76 ^ v72;
      v71 = v22;
      v25 = v76 ^ v72;
      a2[4] = v76 ^ v72;
      v27 = v25 >> 8;
      v26 = v24;
      a2[5] = v27;
      v61 = v27;
      LOBYTE(v27) = BYTE2(v24);
      a2[6] = BYTE2(v24);
      v28 = HIBYTE(v24);
      a2[7] = HIBYTE(v24);
      v29 = __PAIR16__(v71, v69);
    }
    *a5 = v66;
    a5[6] = v27;
    a5[1] = v29;
    a5[7] = v28;
    a5[2] = HIBYTE(v29);
    a5[3] = v23;
    a5[4] = v26;
    a5[5] = v61;
    return v61;
  }
  else
  {
    v56 = (a5[3] << 24) | v9 | (a5[2] << 16) | v8;
    v62 = a3 - 8;
    v64 = (a5[7] << 24) | a5[4] | (a5[6] << 16) | (a5[5] << 8);
    if ( a3 - 8 > 0 )
    {
      v31 = a2;
      v32 = a1;
      while ( 1 )
      {
        v33 = (v32[3] << 24) | *v32 | (v32[2] << 16) | (v32[1] << 8);
        v75 = v33 ^ v70;
        v34 = (v32[7] << 24) | v32[4] | (v32[6] << 16) | (v32[5] << 8);
        v76 = v34 ^ v72;
        v54 = v32 + 8;
        DES_encrypt1(&v75, a4, 0);
        v35 = v56 ^ v75 ^ v65;
        v74 = v64 ^ v76 ^ v68;
        *v31 = v35;
        v62 -= 8;
        v31[1] = BYTE1(v35);
        v31[3] = HIBYTE(v35);
        v31[4] = v74;
        v31[2] = BYTE2(v35);
        *(uint16_t *)(v31 + 5) = *(uint16_t *)((char *)&v74 + 1);
        v31[7] = HIBYTE(v74);
        v31 += 8;
        v32 = v54;
        if ( v62 <= 0 )
          break;
        v64 = v34;
        v56 = v33;
      }
      v64 = v34;
      v36 = (unsigned int)(a3 - 9) >> 3;
      v56 = v33;
      v37 = 8 * v36 + 8;
      a1 += v37;
      a2 += v37;
      v62 = a3 - 8 * v36 - 16;
    }
    if ( v62 != -8 )
    {
      v38 = (a1[3] << 24) | *a1 | (a1[2] << 16) | (a1[1] << 8);
      v75 = v38 ^ v70;
      v39 = (a1[7] << 24) | a1[4] | (a1[6] << 16) | (a1[5] << 8);
      v76 = v39 ^ v72;
      DES_encrypt1(&v75, a4, 0);
      v40 = v65;
      v67 = v64 ^ v76 ^ v68;
      v41 = &a2[v62 + 8];
      v42 = v56 ^ v75 ^ v40;
      if ( (unsigned int)v62 >= 0xFFFFFFF8 || v62 == 0 )
      {
        switch ( v62 )
        {
          case -7:
            v59 = &a2[v62 + 8];
            goto LABEL_38;
          case -6:
            goto LABEL_37;
          case -5:
            v58 = &a2[v62 + 8];
            goto LABEL_36;
          case -4:
            goto LABEL_35;
          case -3:
            v57 = &a2[v62 + 8];
            goto LABEL_34;
          case -2:
            goto LABEL_33;
          case -1:
            goto LABEL_32;
          case 0:
            *--v41 = HIBYTE(v67);
LABEL_32:
            *--v41 = BYTE2(v67);
LABEL_33:
            v57 = v41 - 1;
            *(v41 - 1) = BYTE1(v67);
LABEL_34:
            v41 = v57 - 1;
            *(v57 - 1) = v67;
LABEL_35:
            v58 = v41 - 1;
            *(v41 - 1) = HIBYTE(v42);
LABEL_36:
            v41 = v58 - 1;
            *(v58 - 1) = BYTE2(v42);
LABEL_37:
            v59 = v41 - 1;
            *(v41 - 1) = BYTE1(v42);
LABEL_38:
            v53 = v59;
            v64 = v39;
            v56 = v38;
            *(v53 - 1) = v42;
            break;
          default:
            abort();
        }
      }
      else
      {
        v64 = v39;
        v56 = v38;
      }
    }
    *a5 = v56;
    a5[4] = v64;
    a5[1] = BYTE1(v56);
    *((uint16_t *)a5 + 1) = HIWORD(v56);
    *(uint16_t *)(a5 + 5) = *(uint16_t *)((char *)&v64 + 1);
    a5[7] = HIBYTE(v64);
    return HIBYTE(v64);
  }
}

// ----------------------------------------------------------------------------
// Function: DH_check  (binary VA: 0x1a176d0)
// Original: DH_check
// ----------------------------------------------------------------------------
int DH_check(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int *v3;
  int **v4;
  int v6;
  int v7;
  int v8;

  *a2 = 0;
  v2 = BN_CTX_new();
  v8 = 0;
  if ( v2 == nullptr )
    return v8;
  v3 = (int *)(BN_new());
  if ( v3 != nullptr )
  {
    v4 = *(int ***)(a1 + 12);
    if ( v4[1] != (int *)((char *)&dword_0 + 1) )
    {
LABEL_4:
      *a2 |= 4u;
      goto LABEL_5;
    }
    v6 = **v4;
    if ( v6 == 2 )
    {
      if ( v4[3] != nullptr )
        goto LABEL_4;
      if ( BN_mod_word(*(uint32_t **)(a1 + 8), 0x18u) != 11 )
        goto LABEL_18;
    }
    else
    {
      if ( v6 != 5 || v4[3] != nullptr )
        goto LABEL_4;
      v7 = BN_mod_word(*(uint32_t **)(a1 + 8), 0xAu);
      if ( v7 != 7 && v7 != 3 )
LABEL_18:
        *a2 |= 8u;
    }
LABEL_5:
    if ( BN_is_prime_ex(*(uint32_t *)(a1 + 8), 0, v2, 0) != 0 )
    {
      v8 = 0;
      if ( BN_rshift1(v3, *(int **)(a1 + 8)) != 0 )
      {
        v8 = 1;
        if ( BN_is_prime_ex((int)(uintptr_t)(v3), 0, v2, 0) == 0 )
          *a2 |= 2u;
      }
    }
    else
    {
      *a2 |= 1u;
      v8 = 1;
    }
  }
  BN_CTX_free((void **)v2);
  if ( v3 != nullptr )
    BN_free((void **)v3);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: DH_check_pub_key  (binary VA: 0x1a17860)
// Original: DH_check_pub_key
// ----------------------------------------------------------------------------
int DH_check_pub_key(int a1, int *a2, uint32_t *a3)
{
  unsigned int **v3;
  int result;

  *a3 = 0;
  v3 = (unsigned int **)BN_new();
  result = 0;
  if ( v3 != nullptr )
  {
    BN_set_word(v3, 1);
    if ( BN_cmp(a2, v3) <= 0 )
      *a3 |= 1u;
    BN_copy(v3, *(uint32_t **)(a1 + 8));
    BN_sub_word(v3, 1u);
    if ( BN_cmp(a2, v3) >= 0 )
      *a3 |= 2u;
    BN_free((void **)v3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_DH_strings  (binary VA: 0x1a17920)
// Original: ERR_load_DH_strings
// ----------------------------------------------------------------------------
int ERR_load_DH_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CEA40);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CEA40);
    return ERR_load_strings(0, &dword_20CEAC0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_DSA_strings  (binary VA: 0x1a17dd0)
// Original: ERR_load_DSA_strings
// ----------------------------------------------------------------------------
int ERR_load_DSA_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CEB20);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CEB20);
    return ERR_load_strings(0, &dword_20CEBE0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_DSO_strings  (binary VA: 0x1a18f20)
// Original: ERR_load_DSO_strings
// ----------------------------------------------------------------------------
int ERR_load_DSO_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CEC80);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CEC80);
    return ERR_load_strings(0, &dword_20CEE20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EC_GF2m_simple_method  (binary VA: 0x1a1b300)
// Original: EC_GF2m_simple_method
// ----------------------------------------------------------------------------
void * EC_GF2m_simple_method()
{
  return &unk_20AF2C0;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_EC_strings  (binary VA: 0x1a1b320)
// Original: ERR_load_EC_strings
// ----------------------------------------------------------------------------
int ERR_load_EC_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CEEC0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CEEC0);
    return ERR_load_strings(0, &dword_20CF2A0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_ECDH_strings  (binary VA: 0x1a1bb10)
// Original: ERR_load_ECDH_strings
// ----------------------------------------------------------------------------
int ERR_load_ECDH_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CF400);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CF400);
    return ERR_load_strings(0, &dword_20CF420);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_ECDSA_SIG  (binary VA: 0x1a1bb70)
// Original: d2i_ECDSA_SIG
// ----------------------------------------------------------------------------
int d2i_ECDSA_SIG(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ECDSA_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ECDSA_SIG  (binary VA: 0x1a1bbb0)
// Original: i2d_ECDSA_SIG
// ----------------------------------------------------------------------------
int i2d_ECDSA_SIG(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ECDSA_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: ECDSA_SIG_new  (binary VA: 0x1a1bbf0)
// Original: ECDSA_SIG_new
// ----------------------------------------------------------------------------
int ECDSA_SIG_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ECDSA_SIG_it));
}

// ----------------------------------------------------------------------------
// Function: ECDSA_SIG_free  (binary VA: 0x1a1bc20)
// Original: ECDSA_SIG_free
// ----------------------------------------------------------------------------
int ECDSA_SIG_free(char a1)
{
  return ASN1_item_free(a1, ECDSA_SIG_it);
}

// ----------------------------------------------------------------------------
// Function: ERR_load_ECDSA_strings  (binary VA: 0x1a1bc50)
// Original: ERR_load_ECDSA_strings
// ----------------------------------------------------------------------------
int ERR_load_ECDSA_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CF440);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CF440);
    return ERR_load_strings(0, &dword_20CF480);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_ENGINE_strings  (binary VA: 0x1a1bcb0)
// Original: ERR_load_ENGINE_strings
// ----------------------------------------------------------------------------
int ERR_load_ENGINE_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CF4C0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CF4C0);
    return ERR_load_strings(0, &dword_20CF600);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_first  (binary VA: 0x1a1bd10)
// Original: ENGINE_get_first
// ----------------------------------------------------------------------------
int ENGINE_get_first()
{
  int v0;

  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  v0 = dword_2141E38;
  if ( dword_2141E38 != 0 )
    ++*(uint32_t *)(dword_2141E38 + 88);
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_last  (binary VA: 0x1a1bda0)
// Original: ENGINE_get_last
// ----------------------------------------------------------------------------
int ENGINE_get_last()
{
  int v0;

  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  v0 = dword_2141E3C;
  if ( dword_2141E3C != 0 )
    ++*(uint32_t *)(dword_2141E3C + 88);
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_next  (binary VA: 0x1a1be30)
// Original: ENGINE_get_next
// ----------------------------------------------------------------------------
int ENGINE_get_next(uint32_t *a1)
{
  int v1;

  if ( a1 != nullptr )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = a1[27];
    if ( v1 != 0 )
      ++*(uint32_t *)(v1 + 88);
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    ENGINE_free(a1);
  }
  else
  {
    v1 = 0;
    ERR_put_error(38, 115, 67, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_prev  (binary VA: 0x1a1bf00)
// Original: ENGINE_get_prev
// ----------------------------------------------------------------------------
int ENGINE_get_prev(uint32_t *a1)
{
  int v1;

  if ( a1 != nullptr )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = a1[26];
    if ( v1 != 0 )
      ++*(uint32_t *)(v1 + 88);
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    ENGINE_free(a1);
  }
  else
  {
    v1 = 0;
    ERR_put_error(38, 116, 67, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_add  (binary VA: 0x1a1bfd0)
// Original: ENGINE_add
// ----------------------------------------------------------------------------
int ENGINE_add(const char **a1)
{
  int v1;
  const char *s2;
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  int v9;

  if ( a1 == nullptr )
  {
    v7 = 0;
    ERR_put_error(38, 105, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return v7;
  }
  if ( *a1 == nullptr || a1[1] == nullptr )
    ERR_put_error(38, 105, 108, (int)(uintptr_t)(&unk_1B15112), 0);
  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  v9 = dword_2141E38;
  if ( dword_2141E38 != 0 )
  {
    s2 = *a1;
    v3 = dword_2141E38;
    do
    {
      v4 = strcmp(*(const char **)v3, s2);
      v3 = *(uint32_t *)(v3 + 108);
      v5 = v4 == 0;
    }
    while ( !v5 && v3 != 0 );
    if ( v5 )
    {
      ERR_put_error(38, 120, 103, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_13;
    }
    if ( v9 != 0 )
    {
      v6 = dword_2141E3C;
      if ( dword_2141E3C == 0 || *(uint32_t *)(dword_2141E3C + 108) != 0 )
        goto LABEL_12;
      *(uint32_t *)(dword_2141E3C + 108) = (uint32_t)(uintptr_t)(a1);
      a1[26] = (const char *)v6;
LABEL_18:
      ++a1[22];
      dword_2141E3C = (int)(uintptr_t)(a1);
      a1[27] = nullptr;
      v7 = 1;
      goto LABEL_14;
    }
  }
  if ( dword_2141E3C == 0 )
  {
    a1[26] = nullptr;
    dword_2141E38 = (int)(uintptr_t)(a1);
    engine_cleanup_add_last(v1, (int)(uintptr_t)(sub_1A1C3B0));
    goto LABEL_18;
  }
LABEL_12:
  ERR_put_error(38, 120, 110, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_13:
  v7 = 0;
  ERR_put_error(38, 105, 110, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_14:
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_remove  (binary VA: 0x1a1c220)
// Original: ENGINE_remove
// ----------------------------------------------------------------------------
int ENGINE_remove(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *i;
  int v3;
  int v4;
  int v5;

  if ( a1 != nullptr )
  {
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    v1 = (uint32_t *)dword_2141E38;
    for ( i = (uint32_t *)dword_2141E38; a1 != i && i != nullptr; i = (uint32_t *)i[27] )
      ;
    if ( i == nullptr )
    {
      v5 = 0;
      ERR_put_error(38, 121, 105, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_put_error(38, 123, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_15;
    }
    v3 = a1[27];
    if ( v3 != 0 )
      *(uint32_t *)(v3 + 104) = a1[26];
    v4 = a1[26];
    if ( v4 != 0 )
      *(uint32_t *)(v4 + 108) = a1[27];
    if ( a1 == v1 )
    {
      dword_2141E38 = a1[27];
      if ( a1 != (uint32_t *)dword_2141E3C )
        goto LABEL_14;
    }
    else if ( a1 != (uint32_t *)dword_2141E3C )
    {
LABEL_14:
      v5 = 1;
      engine_free_util(a1, 0);
LABEL_15:
      CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
      return v5;
    }
    dword_2141E3C = a1[26];
    goto LABEL_14;
  }
  ERR_put_error(38, 123, 67, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_by_id  (binary VA: 0x1a1c3f0)
// Original: ENGINE_by_id
// ----------------------------------------------------------------------------
int ENGINE_by_id(char *s1)
{
  int v1;
  uint32_t *v3;
  char *v4;

  if ( s1 == nullptr )
  {
    v1 = 0;
    ERR_put_error(38, 106, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return v1;
  }
  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = dword_2141E38;
  if ( dword_2141E38 != 0 )
  {
    while ( strcmp(s1, *(const char **)v1) != 0 )
    {
      v1 = *(uint32_t *)(v1 + 108);
      if ( v1 == 0 )
        goto LABEL_13;
    }
    if ( (*(uint8_t *)(v1 + 84) & 4) != 0 )
    {
      v3 = (uint32_t *)ENGINE_new();
      if ( v3 == nullptr )
        goto LABEL_13;
      *v3 = *(uint32_t *)v1;
      v3[1] = *(uint32_t *)(v1 + 4);
      v3[2] = *(uint32_t *)(v1 + 8);
      v3[3] = *(uint32_t *)(v1 + 12);
      v3[4] = *(uint32_t *)(v1 + 16);
      v3[5] = *(uint32_t *)(v1 + 20);
      v3[6] = *(uint32_t *)(v1 + 24);
      v3[7] = *(uint32_t *)(v1 + 28);
      v3[8] = *(uint32_t *)(v1 + 32);
      v3[9] = *(uint32_t *)(v1 + 36);
      v3[10] = *(uint32_t *)(v1 + 40);
      v3[11] = *(uint32_t *)(v1 + 44);
      v3[13] = *(uint32_t *)(v1 + 52);
      v3[14] = *(uint32_t *)(v1 + 56);
      v3[15] = *(uint32_t *)(v1 + 60);
      v3[16] = *(uint32_t *)(v1 + 64);
      v3[17] = *(uint32_t *)(v1 + 68);
      v3[18] = *(uint32_t *)(v1 + 72);
      v3[20] = *(uint32_t *)(v1 + 80);
      v3[21] = *(uint32_t *)(v1 + 84);
      v1 = (int)(uintptr_t)(v3);
    }
    else
    {
      ++*(uint32_t *)(v1 + 88);
    }
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    return v1;
  }
LABEL_13:
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( strcmp(s1, "dynamic") != 0 )
  {
    v4 = getenv("OPENSSL_ENGINES");
    if ( v4 == nullptr )
      v4 = "/usr/local/ssl/lib/engines";
    v1 = ENGINE_by_id("dynamic");
    if ( v1 == 0
      || ENGINE_ctrl_cmd_string(v1, (int)(uintptr_t)("ID"), s1, 0) == 0
      || ENGINE_ctrl_cmd_string(v1, (int)(uintptr_t)("DIR_LOAD"), "2", 0) == 0
      || ENGINE_ctrl_cmd_string(v1, (int)(uintptr_t)("DIR_ADD"), v4, 0) == 0
      || ENGINE_ctrl_cmd_string(v1, (int)(uintptr_t)("LOAD"), nullptr, 0) == 0 )
    {
      goto LABEL_21;
    }
    return v1;
  }
  v1 = 0;
LABEL_21:
  ENGINE_free((uint32_t *)v1);
  ERR_put_error(38, 106, 116, (int)(uintptr_t)(&unk_1B15112), 0);
  ERR_add_error_data(2, "id=", s1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_up_ref  (binary VA: 0x1a1c6d0)
// Original: ENGINE_up_ref
// ----------------------------------------------------------------------------
int ENGINE_up_ref(int a1)
{
  if ( a1 != 0 )
  {
    CRYPTO_add_lock((uint32_t *)(a1 + 88), 1, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    return 1;
  }
  else
  {
    ERR_put_error(38, 190, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_table_flags  (binary VA: 0x1a1c880)
// Original: ENGINE_get_table_flags
// ----------------------------------------------------------------------------
int ENGINE_get_table_flags()
{
  return dword_2141E40;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_table_flags  (binary VA: 0x1a1c8a0)
// Original: ENGINE_set_table_flags
// ----------------------------------------------------------------------------
int ENGINE_set_table_flags(int a1)
{
  dword_2141E40 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_ciphers  (binary VA: 0x1a1ce10)
// Original: ENGINE_unregister_ciphers
// ----------------------------------------------------------------------------
void ENGINE_unregister_ciphers(int a1)
{
  engine_table_unregister(&dword_2141E44, a1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_ciphers  (binary VA: 0x1a1ce40)
// Original: ENGINE_register_ciphers
// ----------------------------------------------------------------------------
int ENGINE_register_ciphers(uint32_t *a1)
{
  int (*v1)(uint32_t *, uint32_t, uint32_t **, uint32_t);
  int v2;
  int v3;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = (int (*)(uint32_t *, uint32_t, uint32_t **, uint32_t))a1[9];
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&dword_2141E44, (int)(uintptr_t)(sub_1A1CDE0), a1, v5, v3, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_ciphers  (binary VA: 0x1a1cee0)
// Original: ENGINE_register_all_ciphers
// ----------------------------------------------------------------------------
int ENGINE_register_all_ciphers()
{
  int result;
  uint32_t *i;

  result = ENGINE_get_first();
  for ( i = (uint32_t *)result; result != 0; i = (uint32_t *)result )
  {
    ENGINE_register_ciphers(i);
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_ciphers  (binary VA: 0x1a1cf20)
// Original: ENGINE_set_default_ciphers
// ----------------------------------------------------------------------------
int ENGINE_set_default_ciphers(uint32_t *a1)
{
  int (*v1)(uint32_t *, uint32_t, uint32_t **, uint32_t);
  int v2;
  int v3;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = (int (*)(uint32_t *, uint32_t, uint32_t **, uint32_t))a1[9];
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&dword_2141E44, (int)(uintptr_t)(sub_1A1CDE0), a1, v5, v3, 1);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_cipher_engine  (binary VA: 0x1a1cfc0)
// Original: ENGINE_get_cipher_engine
// ----------------------------------------------------------------------------
uint32_t * ENGINE_get_cipher_engine(int a1)
{
  return engine_table_select(&dword_2141E44, a1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_ciphers  (binary VA: 0x1a1cff0)
// Original: ENGINE_get_ciphers
// ----------------------------------------------------------------------------
int ENGINE_get_ciphers(int a1)
{
  return *(uint32_t *)(a1 + 36);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_cipher  (binary VA: 0x1a1d000)
// Original: ENGINE_get_cipher
// ----------------------------------------------------------------------------
int ENGINE_get_cipher(int a1, int a2)
{
  int (*ciphers)(int, int *, uint32_t, int);
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  ciphers = (int (*)(int, int *, uint32_t, int))ENGINE_get_ciphers(a1);
  if ( ciphers != nullptr && ciphers(a1, &v4, 0, a2) != 0 )
    return v4;
  ERR_put_error(38, 185, 146, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_ciphers  (binary VA: 0x1a1d0a0)
// Original: ENGINE_set_ciphers
// ----------------------------------------------------------------------------
int ENGINE_set_ciphers(int a1, int a2)
{
  *(uint32_t *)(a1 + 36) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_digests  (binary VA: 0x1a1d0f0)
// Original: ENGINE_unregister_digests
// ----------------------------------------------------------------------------
void ENGINE_unregister_digests(int a1)
{
  engine_table_unregister(&dword_2141E48, a1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_digests  (binary VA: 0x1a1d120)
// Original: ENGINE_register_digests
// ----------------------------------------------------------------------------
int ENGINE_register_digests(uint32_t *a1)
{
  int (*v1)(uint32_t *, uint32_t, uint32_t **, uint32_t);
  int v2;
  int v3;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = (int (*)(uint32_t *, uint32_t, uint32_t **, uint32_t))a1[10];
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&dword_2141E48, (int)(uintptr_t)(sub_1A1D0C0), a1, v5, v3, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_digests  (binary VA: 0x1a1d1c0)
// Original: ENGINE_register_all_digests
// ----------------------------------------------------------------------------
int ENGINE_register_all_digests()
{
  int result;
  uint32_t *i;

  result = ENGINE_get_first();
  for ( i = (uint32_t *)result; result != 0; i = (uint32_t *)result )
  {
    ENGINE_register_digests(i);
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_digests  (binary VA: 0x1a1d200)
// Original: ENGINE_set_default_digests
// ----------------------------------------------------------------------------
int ENGINE_set_default_digests(uint32_t *a1)
{
  int (*v1)(uint32_t *, uint32_t, uint32_t **, uint32_t);
  int v2;
  int v3;
  typedef uint32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = (int (*)(uint32_t *, uint32_t, uint32_t **, uint32_t))a1[10];
  v2 = 1;
  if ( v1 != nullptr )
  {
    v3 = v1(a1, 0, &v5, 0);
    if ( v3 > 0 )
      return engine_table_register(&dword_2141E48, (int)(uintptr_t)(sub_1A1D0C0), a1, v5, v3, 1);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_digest_engine  (binary VA: 0x1a1d2a0)
// Original: ENGINE_get_digest_engine
// ----------------------------------------------------------------------------
uint32_t * ENGINE_get_digest_engine(int a1)
{
  return engine_table_select(&dword_2141E48, a1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_digests  (binary VA: 0x1a1d2d0)
// Original: ENGINE_get_digests
// ----------------------------------------------------------------------------
int ENGINE_get_digests(int a1)
{
  return *(uint32_t *)(a1 + 40);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_digest  (binary VA: 0x1a1d2e0)
// Original: ENGINE_get_digest
// ----------------------------------------------------------------------------
int ENGINE_get_digest(int a1, int a2)
{
  int (*digests)(int, int *, uint32_t, int);
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  digests = (int (*)(int, int *, uint32_t, int))ENGINE_get_digests(a1);
  if ( digests != nullptr && digests(a1, &v4, 0, a2) != 0 )
    return v4;
  ERR_put_error(38, 186, 147, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_digests  (binary VA: 0x1a1d380)
// Original: ENGINE_set_digests
// ----------------------------------------------------------------------------
int ENGINE_set_digests(int a1, int a2)
{
  *(uint32_t *)(a1 + 40) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_RAND  (binary VA: 0x1a1d3d0)
// Original: ENGINE_unregister_RAND
// ----------------------------------------------------------------------------
void ENGINE_unregister_RAND(int a1)
{
  engine_table_unregister(&dword_2141E4C, a1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_RAND  (binary VA: 0x1a1d400)
// Original: ENGINE_register_RAND
// ----------------------------------------------------------------------------
int ENGINE_register_RAND(uint32_t *a1)
{
  int result;

  result = 1;
  if ( a1[7] != 0 )
    return engine_table_register(&dword_2141E4C, (int)(uintptr_t)(sub_1A1D3A0), a1, &dword_1D32304, 1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_RAND  (binary VA: 0x1a1d460)
// Original: ENGINE_register_all_RAND
// ----------------------------------------------------------------------------
int ENGINE_register_all_RAND()
{
  int result;
  uint32_t *i;

  result = ENGINE_get_first();
  for ( i = (uint32_t *)result; result != 0; i = (uint32_t *)result )
  {
    ENGINE_register_RAND(i);
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_RAND  (binary VA: 0x1a1d4a0)
// Original: ENGINE_set_default_RAND
// ----------------------------------------------------------------------------
int ENGINE_set_default_RAND(uint32_t *a1)
{
  int result;

  result = 1;
  if ( a1[7] != 0 )
    return engine_table_register(&dword_2141E4C, (int)(uintptr_t)(sub_1A1D3A0), a1, &dword_1D32304, 1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_default_RAND  (binary VA: 0x1a1d500)
// Original: ENGINE_get_default_RAND
// ----------------------------------------------------------------------------
uint32_t * ENGINE_get_default_RAND()
{
  return engine_table_select(&dword_2141E4C, 1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_RAND  (binary VA: 0x1a1d530)
// Original: ENGINE_get_RAND
// ----------------------------------------------------------------------------
int ENGINE_get_RAND(int a1)
{
  return *(uint32_t *)(a1 + 28);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_RAND  (binary VA: 0x1a1d540)
// Original: ENGINE_set_RAND
// ----------------------------------------------------------------------------
int ENGINE_set_RAND(int a1, int a2)
{
  *(uint32_t *)(a1 + 28) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_unregister_RSA  (binary VA: 0x1a1d590)
// Original: ENGINE_unregister_RSA
// ----------------------------------------------------------------------------
void ENGINE_unregister_RSA(int a1)
{
  engine_table_unregister((uint32_t **)&unk_2141E50, a1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_RSA  (binary VA: 0x1a1d5c0)
// Original: ENGINE_register_RSA
// ----------------------------------------------------------------------------
int ENGINE_register_RSA(uint32_t *a1)
{
  int result;

  result = 1;
  if ( a1[2] != 0 )
    return engine_table_register((uint32_t **)&unk_2141E50, (int)(uintptr_t)(sub_1A1D560), a1, (&dword_1D32308), 1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_register_all_RSA  (binary VA: 0x1a1d620)
// Original: ENGINE_register_all_RSA
// ----------------------------------------------------------------------------
int ENGINE_register_all_RSA()
{
  int result;
  uint32_t *i;

  result = ENGINE_get_first();
  for ( i = (uint32_t *)result; result != 0; i = (uint32_t *)result )
  {
    ENGINE_register_RSA(i);
    result = ENGINE_get_next(i);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_default_RSA  (binary VA: 0x1a1d660)
// Original: ENGINE_set_default_RSA
// ----------------------------------------------------------------------------
int ENGINE_set_default_RSA(uint32_t *a1)
{
  int result;

  result = 1;
  if ( a1[2] != 0 )
    return engine_table_register((uint32_t **)&unk_2141E50, (int)(uintptr_t)(sub_1A1D560), a1, (&dword_1D32308), 1, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_default_RSA  (binary VA: 0x1a1d6c0)
// Original: ENGINE_get_default_RSA
// ----------------------------------------------------------------------------
uint32_t * ENGINE_get_default_RSA()
{
  return engine_table_select((&dword_2141E50), 1);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_get_RSA  (binary VA: 0x1a1d6f0)
// Original: ENGINE_get_RSA
// ----------------------------------------------------------------------------
int ENGINE_get_RSA(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: ENGINE_set_RSA  (binary VA: 0x1a1d700)
// Original: ENGINE_set_RSA
// ----------------------------------------------------------------------------
int ENGINE_set_RSA(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ERR_print_errors_cb  (binary VA: 0x1a1d7d0)
// Original: ERR_print_errors_cb
// ----------------------------------------------------------------------------
signed int ERR_print_errors_cb(int a1, int a2, int (*a3)(char *, unsigned int, int), int a4)
{
  signed int result;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[2];
  typedef char _g4_t_v12[256];
  typedef char _g4_t_v13[4124];
  enum : size_t {
    _g4_s0 = 4496u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v10)) > _g4_s4 ? (36u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v11)) > _g4_s5 ? (40u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v12)) > _g4_s6 ? (48u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (304u + sizeof(_g4_t_v13)) > _g4_s7 ? (304u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 304u);

  CRYPTO_THREADID_current(a1, a2, v11);
  v6 = CRYPTO_THREADID_hash((int)(uintptr_t)(v11));
  do
  {
    result = ERR_get_error_line_data(&v7, &v9, &v8, &v10);
    if ( result == 0 )
      break;
    ERR_error_string_n(result, v12, 0x100u);
    v5 = &unk_1B15112;
    if ( (v10 & 2) != 0 )
      v5 = v8;
    BIO_snprintf(v13, 4096, "%lu:%s:%s:%d:%s\n", v6, v12, v7, v9, v5);
    result = a3(v13, strlen(v13), a4);
  }
  while ( result > 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_print_errors_fp  (binary VA: 0x1a1d900)
// Original: ERR_print_errors_fp
// ----------------------------------------------------------------------------
signed int ERR_print_errors_fp(int a1, int a2, int a3)
{
  return ERR_print_errors_cb(a1, a2, (int (*)(char *, unsigned int, int))sub_1A1D760, a3);
}

// ----------------------------------------------------------------------------
// Function: ERR_print_errors  (binary VA: 0x1a1d930)
// Original: ERR_print_errors
// ----------------------------------------------------------------------------
signed int ERR_print_errors(int a1, int a2, int a3)
{
  return ERR_print_errors_cb(a1, a2, (int (*)(char *, unsigned int, int))sub_1A1D720, a3);
}

// ----------------------------------------------------------------------------
// Function: BIO_f_cipher  (binary VA: 0x1a1e1b0)
// Original: BIO_f_cipher
// ----------------------------------------------------------------------------
void * BIO_f_cipher()
{
  return &unk_20CF760;
}

// ----------------------------------------------------------------------------
// Function: BIO_set_cipher  (binary VA: 0x1a1e1d0)
// Original: BIO_set_cipher
// ----------------------------------------------------------------------------
void BIO_set_cipher(uint32_t *a1, uint32_t *a2, int a3, void *a4, int a5)
{
  int (*v5)(uint32_t *, int, uint32_t *, int, int, uint32_t);
  void (*v6)(uint32_t *, int, uint32_t *, int, int, int);

  if ( a1 != nullptr )
  {
    v5 = (int (*)(uint32_t *, int, uint32_t *, int, int, uint32_t))a1[1];
    if ( v5 == nullptr || v5(a1, 6, a2, 4, a5, 0) > 0 )
    {
      a1[3] = 1;
      EVP_CipherInit_ex((uint32_t *)(a1[8] + 20), a2, nullptr, a3, a4, a5);
      v6 = (void (*)(uint32_t *, int, uint32_t *, int, int, int))a1[1];
      if ( v6 != nullptr )
        v6(a1, 6, a2, 4, a5, 1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: BIO_f_md  (binary VA: 0x1a1e740)
// Original: BIO_f_md
// ----------------------------------------------------------------------------
void * BIO_f_md()
{
  return &unk_20CF7A0;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncodeInit  (binary VA: 0x1a1e760)
// Original: EVP_EncodeInit
// ----------------------------------------------------------------------------
uint32_t * EVP_EncodeInit(uint32_t *a1)
{
  a1[1] = 48;
  *a1 = 0;
  a1[22] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncodeBlock  (binary VA: 0x1a1e780)
// Original: EVP_EncodeBlock
// ----------------------------------------------------------------------------
int EVP_EncodeBlock(uint8_t *a1, uint8_t *a2, int a3)
{
  int result;
  int v4;
  uint8_t *v6;
  unsigned int v7;
  char v8; // bp
  int v9;
  char v10;
  unsigned int v11;
  int v12;

  result = 0;
  v4 = a3;
  if ( a3 > 0 )
  {
    v12 = 0;
    v6 = a1 + 4;
    do
    {
      if ( v4 <= 2 )
      {
        if ( v4 == 2 )
        {
          v11 = (*a2 << 16) | (a2[1] << 8);
          *(v6 - 4) = byte_1D32320[v11 >> 18];
          *(v6 - 3) = byte_1D32320[(v11 >> 12) & 0x3F];
          v10 = byte_1D32320[(v11 >> 6) & 0x3F];
        }
        else
        {
          v9 = (16 * *a2) & 0x3F;
          *(v6 - 4) = byte_1D32320[*a2 >> 2];
          *(v6 - 3) = byte_1D32320[v9];
          v10 = 61;
        }
        a1 = v6;
        *(v6 - 2) = v10;
        *(v6 - 1) = 61;
      }
      else
      {
        a1 = v6;
        v7 = a2[2] | (a2[1] << 8) | (*a2 << 16);
        *(v6 - 4) = byte_1D32320[(unsigned int)((a2[1] << 8) | (*a2 << 16)) >> 18];
        *(v6 - 3) = byte_1D32320[(v7 >> 12) & 0x3F];
        v8 = byte_1D32320[(v7 >> 6) & 0x3F];
        *(v6 - 1) = byte_1D32320[v7 & 0x3F];
        *(v6 - 2) = v8;
      }
      v4 -= 3;
      v12 += 4;
      a2 += 3;
      v6 += 4;
    }
    while ( v4 > 0 );
    result = v12;
  }
  *a1 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncodeFinal  (binary VA: 0x1a1e8c0)
// Original: EVP_EncodeFinal
// ----------------------------------------------------------------------------
int EVP_EncodeFinal(int a1, uint8_t *a2, int *a3)
{
  int result;
  int v4;

  result = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    v4 = EVP_EncodeBlock(a2, (uint8_t *)(a1 + 8), *(uint32_t *)a1);
    a2[v4] = 10;
    a2[v4 + 1] = 0;
    *(uint32_t *)a1 = 0;
    result = v4 + 1;
  }
  *a3 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_EncodeUpdate  (binary VA: 0x1a1e930)
// Original: EVP_EncodeUpdate
// ----------------------------------------------------------------------------
void EVP_EncodeUpdate(int a1, uint8_t *a2, int *a3, uint8_t *src, size_t a5)
{
  signed int n;
  signed int *v6;
  uint8_t *v7;
  int v8;
  signed int v9;
  uint8_t *v10;
  int v11;
  signed int v12;
  uint8_t *v13;
  int v14;
  int v15;
  uint8_t *v16;
  signed int *v17;
  signed int *v18;
  int v19;

  n = a5;
  v6 = (signed int *)a1;
  v7 = src;
  *a3 = 0;
  if ( a5 != 0 )
  {
    v8 = *(uint32_t *)(a1 + 4);
    if ( v8 > 80 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->length <= (int)sizeof(ctx->enc_data)");
    v9 = *(uint32_t *)a1;
    if ( v8 > (int)(*(uint32_t *)a1 + a5) )
    {
      memcpy((void *)(a1 + v9 + 8), src, a5);
      *(uint32_t *)a1 += a5;
    }
    else
    {
      v19 = 0;
      if ( v9 != 0 )
      {
        v14 = v8 - v9;
        v7 = &src[v8 - v9];
        memcpy((void *)(a1 + v9 + 8), src, v8 - v9);
        n = a5 - v14;
        v15 = EVP_EncodeBlock(a2, (uint8_t *)(a1 + 8), *(uint32_t *)(a1 + 4));
        v6 = (signed int *)a1;
        v16 = &a2[v15];
        *(uint32_t *)a1 = 0;
        *v16 = 10;
        v16[1] = 0;
        a2 += v15 + 1;
        v19 = v15 + 1;
        v8 = *(uint32_t *)(a1 + 4);
      }
      if ( n >= v8 )
      {
        v10 = a2;
        do
        {
          v17 = v6;
          v11 = EVP_EncodeBlock(v10, v7, v8);
          v6 = v17;
          v12 = v17[1];
          v7 += v12;
          n -= v12;
          v13 = &v10[v11];
          *v13 = 10;
          v13[1] = 0;
          v10 += v11 + 1;
          v19 += v11 + 1;
          v8 = v17[1];
        }
        while ( v8 <= n );
      }
      if ( n != 0 )
      {
        v18 = v6;
        memcpy(v6 + 2, v7, n);
        v6 = v18;
      }
      *v6 = n;
      *a3 = v19;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_DecodeInit  (binary VA: 0x1a1eaf0)
// Original: EVP_DecodeInit
// ----------------------------------------------------------------------------
uint32_t * EVP_DecodeInit(uint32_t *a1)
{
  a1[1] = 30;
  *a1 = 0;
  a1[22] = 0;
  a1[23] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: EVP_DecodeBlock  (binary VA: 0x1a1eb10)
// Original: EVP_DecodeBlock
// ----------------------------------------------------------------------------
int EVP_DecodeBlock(uint8_t *a1, uint8_t *a2, int a3)
{
  uint8_t *v3;
  int i;
  int v7;
  int v8;
  int v9;
  uint8_t v10; // bp
  char v11; // di
  int v12;
  int v13;
  uint8_t v14;
  unsigned int v15;

  v3 = a2;
  for ( i = a3; byte_1D32380[*v3 & 0x7F] == -32 && i > 0; --i )
    ++v3;
  if ( i > 3 && ((uint8_t)byte_1D32380[v3[i - 1] & 0x7F] | 0x13) == 0xF3 )
  {
    while ( --i != 3 )
    {
      if ( ((uint8_t)byte_1D32380[v3[i - 1] & 0x7F] | 0x13) != 0xF3 )
        goto LABEL_12;
    }
    return -1;
  }
LABEL_12:
  if ( (i & 3) != 0 )
    return -1;
  if ( i > 0 )
  {
    v15 = 3 * ((unsigned int)(i - 1) >> 2) + 3;
    v13 = 0;
    while ( 1 )
    {
      v8 = (uint8_t)byte_1D32380[*v3 & 0x7F];
      v9 = v3[1] & 0x7F;
      v10 = byte_1D32380[v3[2] & 0x7F];
      v11 = v3[3];
      v3 += 4;
      v12 = (uint8_t)byte_1D32380[v9];
      v14 = byte_1D32380[v11 & 0x7F];
      if ( (((uint8_t)v8 | (uint8_t)v12) & 0x80) != 0 || ((v14 | v10) & 0x80) != 0 )
        break;
      v13 += 3;
      v7 = (v10 << 6) | v14 | (v12 << 12) | (v8 << 18);
      *a1 = BYTE2(v7);
      a1[1] = BYTE1(v7);
      a1[2] = v7;
      a1 += 3;
      if ( v13 == v15 )
        return v13;
    }
    return -1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_DecodeUpdate  (binary VA: 0x1a1ecc0)
// Original: EVP_DecodeUpdate
// ----------------------------------------------------------------------------
int EVP_DecodeUpdate(int a1, uint8_t *a2, uint32_t *a3, uint8_t *a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v20 = 0;
  v5 = *(uint32_t *)a1;
  v17 = *(uint32_t *)(a1 + 92);
  v6 = 0;
  v7 = *(uint32_t *)(a1 + 88);
  if ( a5 != 0 )
  {
    if ( v5 != 0 || (v20 = 0, v6 = 0, byte_1D32380[*a4 & 0x7F] != -14) )
    {
      if ( a5 <= 0 )
      {
        v20 = 0;
        v6 = 1;
        goto LABEL_25;
      }
      if ( v7 > 79 )
      {
        v20 = 0;
        v6 = -1;
        goto LABEL_25;
      }
      v8 = 1;
      v20 = 0;
      v19 = 0;
      v18 = -1;
      v15 = *(uint32_t *)(a1 + 88);
      while ( 1 )
      {
        v16 = a4[v8 - 1];
        v11 = (uint8_t)byte_1D32380[v16 & 0x7F];
        if ( (v11 | 0x13) == 0xF3 )
        {
          if ( v11 == 255 )
          {
LABEL_24:
            v7 = v15;
            v6 = -1;
            goto LABEL_25;
          }
        }
        else
        {
          if ( v5 > 79 )
            OpenSSLDie((const char *)&unk_1B15112, 0, "n < (int)sizeof(ctx->enc_data)");
          ++v15;
          *(uint8_t *)(a1 + v5++ + 8) = v16;
        }
        if ( v16 == 61 )
        {
          v13 = v18;
          if ( v18 == -1 )
            v13 = v5;
          ++v19;
          v18 = v13;
        }
        if ( v11 != 241 )
          break;
        v15 = 0;
        if ( v17 == 0 )
          goto LABEL_11;
        if ( v8 >= a5 )
        {
LABEL_28:
          v7 = v15;
          v6 = 1;
          goto LABEL_25;
        }
LABEL_21:
        ++v8;
        if ( v15 > 79 )
          goto LABEL_24;
      }
      if ( v11 == 240 )
      {
        v15 = 0;
        if ( v17 != 0 )
        {
          v17 = 0;
LABEL_20:
          if ( v8 >= a5 )
            goto LABEL_28;
          goto LABEL_21;
        }
      }
LABEL_11:
      if ( a5 == v8 && ((v14 = v5 & 3, v19 != 0) || (v19 = 0, (v5 & 3) == 0)) )
      {
        v19 = (*(uint8_t *)(a1 + v5 + 6) == 61) + (*(uint8_t *)(a1 + v5 + 7) == 61);
      }
      else
      {
        if ( v11 != 242 )
          goto LABEL_13;
        v14 = v5 & 3;
      }
      if ( v14 == 0 )
      {
LABEL_34:
        if ( v5 <= 0 )
        {
          v10 = true;
          v17 = 0;
          v9 = 0;
          v19 = 1;
LABEL_17:
          if ( *(uint32_t *)(a1 + 4) > v9 && v10 || (*(uint32_t *)(a1 + 4) = v9, v18 >= 0) )
          {
            v7 = v15;
            v6 = 0;
            goto LABEL_25;
          }
          a2 += v9;
          goto LABEL_20;
        }
        v17 = 0;
LABEL_15:
        v9 = EVP_DecodeBlock(a2, (uint8_t *)(a1 + 8), v5);
        if ( v9 < 0 )
        {
          v7 = v15;
          v5 = 0;
          v6 = 0;
          goto LABEL_25;
        }
        v20 += v9 - v19;
        v10 = v19 != 0;
        v5 = 0;
        goto LABEL_17;
      }
      v11 = 242;
LABEL_13:
      v17 = 0;
      if ( v5 <= 63 )
        goto LABEL_20;
      v17 = 1;
      if ( v11 != 242 )
        goto LABEL_15;
      goto LABEL_34;
    }
  }
LABEL_25:
  *a3 = v20;
  *(uint32_t *)(a1 + 88) = v7;
  *(uint32_t *)a1 = v5;
  *(uint32_t *)(a1 + 92) = v17;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: EVP_DecodeFinal  (binary VA: 0x1a1f050)
// Original: EVP_DecodeFinal
// ----------------------------------------------------------------------------
int EVP_DecodeFinal(int a1, uint8_t *a2, int *a3)
{
  int v3;
  int v5;

  *a3 = 0;
  v3 = 1;
  if ( *(uint32_t *)a1 != 0 )
  {
    v5 = EVP_DecodeBlock(a2, (uint8_t *)(a1 + 8), *(uint32_t *)a1);
    if ( v5 < 0 )
    {
      return -1;
    }
    else
    {
      *(uint32_t *)a1 = 0;
      *a3 = v5;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: EVP_set_pw_prompt  (binary VA: 0x1a1f0d0)
// Original: EVP_set_pw_prompt
// ----------------------------------------------------------------------------
char * EVP_set_pw_prompt(char *src)
{
  char *result;

  result = src;
  if ( src != nullptr )
  {
    result = strncpy((char *)&byte_2141E60, src, 0x4Fu);
    byte_2141EAF = 0;
  }
  else
  {
    byte_2141E60 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_get_pw_prompt  (binary VA: 0x1a1f120)
// Original: EVP_get_pw_prompt
// ----------------------------------------------------------------------------
char * EVP_get_pw_prompt()
{
  char *result;

  result = nullptr;
  if ( byte_2141E60 != 0 )
    return (char *)(&byte_2141E60);
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_read_pw_string_min  (binary VA: 0x1a1f140)
// Original: EVP_read_pw_string_min
// ----------------------------------------------------------------------------
int EVP_read_pw_string_min(int a1, int a2, int a3, char *a4, int a5)
{
  char *v5;
  void *v6;
  int v7;
  int v8;
  uint8_t v10[1036];

  v5 = a4;
  if ( a4 == nullptr && byte_2141E60 != 0 )
    v5 = (char *)(&byte_2141E60);
  v6 = (void *)UI_new();
  v7 = 1023;
  if ( a3 <= 1023 )
    v7 = a3;
  UI_add_input_string(v6, v5, 0, a1, a2, v7);
  if ( a5 != 0 )
    UI_add_verify_string(v6, v5);
  v8 = UI_process(v6);
  UI_free(v6);
  OPENSSL_cleanse(v10, 0x400u);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: EVP_read_pw_string  (binary VA: 0x1a1f270)
// Original: EVP_read_pw_string
// ----------------------------------------------------------------------------
int EVP_read_pw_string(int a1, int a2, char *a3, int a4)
{
  return EVP_read_pw_string_min(a1, 0, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: EVP_BytesToKey  (binary VA: 0x1a1f2c0)
// Original: EVP_BytesToKey
// ----------------------------------------------------------------------------
int EVP_BytesToKey(int a1, uint32_t *a2, int a3, int a4, int a5, unsigned int a6, uint8_t *a7, uint8_t *a8)
{
  int i;
  int v9;
  int v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21[6];
  typedef uint8_t _g4_t_v22[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v22)) > _g4_s7 ? (48u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);

  v20 = 0;
  v15 = *(uint32_t *)(a1 + 8);
  v18 = *(uint32_t *)(a1 + 12);
  if ( v15 > 32 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "nkey <= EVP_MAX_KEY_LENGTH");
  if ( v18 > 16 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "niv <= EVP_MAX_IV_LENGTH");
  if ( a4 == 0 )
    return v15;
  EVP_MD_CTX_init(v21);
  v17 = 0;
  while ( EVP_DigestInit_ex((int)(uintptr_t)(v21), a2, nullptr) != 0 )
  {
    if ( v17 != 0 )
      EVP_DigestUpdate((int)(uintptr_t)(v21), (int)(uintptr_t)(v22), v20);
    EVP_DigestUpdate((int)(uintptr_t)(v21), a4, a5);
    if ( a3 != 0 )
      EVP_DigestUpdate((int)(uintptr_t)(v21), a3, 8);
    EVP_DigestFinal_ex(v21, (int)(uintptr_t)(v22), &v20);
    if ( a6 > 1 )
    {
      for ( i = 1; i != a6; ++i )
      {
        EVP_DigestInit_ex((int)(uintptr_t)(v21), a2, nullptr);
        EVP_DigestUpdate((int)(uintptr_t)(v21), (int)(uintptr_t)(v22), v20);
        EVP_DigestFinal_ex(v21, (int)(uintptr_t)(v22), &v20);
      }
    }
    v9 = 0;
    if ( v15 != 0 )
    {
      v10 = v15;
      v11 = a7;
      v16 = v20;
      do
      {
        if ( v9 == v16 )
          break;
        if ( v11 != nullptr )
          *v11++ = v22[v9];
        ++v9;
        --v10;
      }
      while ( v10 != 0 );
      v15 = v10;
      a7 = v11;
    }
    if ( v18 != 0 && v9 != v20 )
    {
      v12 = v18;
      v13 = a8;
      v19 = v20;
      do
      {
        if ( v13 != nullptr )
          *v13++ = v22[v9];
        if ( --v12 == 0 )
          break;
        ++v9;
      }
      while ( v19 != v9 );
      v18 = v12;
      a8 = v13;
    }
    ++v17;
    if ( (v15 | v18) == 0 )
    {
      EVP_MD_CTX_cleanup((int)(uintptr_t)(v21));
      OPENSSL_cleanse(v22, 0x40u);
      return *(uint32_t *)(a1 + 8);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PBE_alg_add_type  (binary VA: 0x1a1f600)
// Original: EVP_PBE_alg_add_type
// ----------------------------------------------------------------------------
int EVP_PBE_alg_add_type(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t *v5;

  if ( dword_2141EB0 == 0 )
    dword_2141EB0 = (int)(uintptr_t)(uintptr_t)(sk_new((int)(uintptr_t)(sub_1A1F5E0)));
  v5 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v5 != nullptr )
  {
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    v5[3] = a4;
    v5[4] = a5;
    sk_push((int *)dword_2141EB0, (int)(uintptr_t)(v5));
    return 1;
  }
  else
  {
    ERR_put_error(6, 160, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: EVP_PBE_alg_add  (binary VA: 0x1a1f6e0)
// Original: EVP_PBE_alg_add
// ----------------------------------------------------------------------------
int EVP_PBE_alg_add(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;

  v4 = -1;
  if ( a2 != 0 )
    v4 = EVP_CIPHER_type(a2);
  v5 = -1;
  if ( a3 != 0 )
    v5 = EVP_MD_type(a3);
  return EVP_PBE_alg_add_type(0, a1, v4, v5, a4);
}

// ----------------------------------------------------------------------------
// Function: EVP_PBE_find  (binary VA: 0x1a1f760)
// Original: EVP_PBE_find
// ----------------------------------------------------------------------------
int EVP_PBE_find(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  int result;
  int v6;
  uint32_t *v7;
  uint32_t v8[8];

  result = 0;
  if ( a2 != 0 )
  {
    if ( (v8[1] = a2, v8[0] = a1, dword_2141EB0 != 0)
      && (v6 = sk_find(dword_2141EB0, (int)(uintptr_t)(v8))) != -1
      && (v7 = (uint32_t *)sk_value((int *)dword_2141EB0, v6)) != nullptr
      || (v7 = (uint32_t *)OBJ_bsearch((int)(uintptr_t)(v8), (int)(uintptr_t)(&unk_20AF3A0), 20, 20, (int (*)(int, int))sub_1A1F590),
          result = 0,
          v7 != nullptr) )
    {
      if ( a3 != nullptr )
        *a3 = v7[2];
      if ( a4 != nullptr )
        *a4 = v7[3];
      result = 1;
      if ( a5 != nullptr )
        *a5 = v7[4];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: EVP_PBE_CipherInit  (binary VA: 0x1a1f860)
// Original: EVP_PBE_CipherInit
// ----------------------------------------------------------------------------
int EVP_PBE_CipherInit(int a1, char *s, size_t a3, int a4, int a5, int a6)
{
  size_t v6;
  int v7;
  unsigned int v8;
  char *v9;
  int cipherbyname;
  unsigned int v11;
  char *v12;
  int digestbyname;
  int v14;
  int v15;
  typedef unsigned int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int (*_g4_t_v19)(int, char *, size_t, int, int, int, int);
  typedef char _g4_t_v20[92];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  v6 = a3;
  v7 = OBJ_obj2nid(a1);
  if ( EVP_PBE_find(0, v7, &v17, &v18, &v19) != 0 )
  {
    if ( s != nullptr )
    {
      if ( a3 != -1 )
      {
        v8 = v17;
        if ( v17 != -1 )
          goto LABEL_5;
LABEL_11:
        v11 = v18;
        cipherbyname = 0;
        if ( v18 != -1 )
          goto LABEL_7;
        goto LABEL_12;
      }
      v6 = strlen(s);
      v8 = v17;
      if ( v17 == -1 )
        goto LABEL_11;
    }
    else
    {
      v8 = v17;
      v6 = 0;
      if ( v17 == -1 )
        goto LABEL_11;
    }
LABEL_5:
    v9 = OBJ_nid2sn(v8);
    cipherbyname = EVP_get_cipherbyname((int)(uintptr_t)(v9));
    if ( cipherbyname == 0 )
    {
      ERR_put_error(6, 116, 160, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v11 = v18;
    if ( v18 != -1 )
    {
LABEL_7:
      v12 = OBJ_nid2sn(v11);
      digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v12));
      if ( digestbyname == 0 )
      {
        ERR_put_error(6, 116, 161, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
      goto LABEL_8;
    }
LABEL_12:
    digestbyname = 0;
LABEL_8:
    v14 = v19(a5, s, v6, a4, cipherbyname, digestbyname, a6);
    v15 = 1;
    if ( v14 == 0 )
    {
      ERR_put_error(6, 116, 120, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    return v15;
  }
  ERR_put_error(6, 116, 121, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( a1 != 0 )
    i2t_ASN1_OBJECT(v20, 80, a1);
  else
    BUF_strlcpy(v20, "NULL", 0x50u);
  ERR_add_error_data(2, "TYPE=", v20);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: EVP_PBE_cleanup  (binary VA: 0x1a1fb20)
// Original: EVP_PBE_cleanup
// ----------------------------------------------------------------------------
int EVP_PBE_cleanup()
{
  int result;

  result = sk_pop_free((void **)dword_2141EB0, (void (*)(uint32_t))sub_1A1F5B0);
  dword_2141EB0 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS5_PBE_add  (binary VA: 0x1a1fb60)
// Original: PKCS5_PBE_add
// ----------------------------------------------------------------------------
void PKCS5_PBE_add()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: PKCS5_PBE_keyivgen  (binary VA: 0x1a1fb70)
// Original: PKCS5_PBE_keyivgen
// ----------------------------------------------------------------------------
int PKCS5_PBE_keyivgen(uint32_t *a1, char *s, size_t a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7)
{
  int result;
  uint32_t *v8;
  int **v9;
  int **v10;
  int *v11;
  size_t v12;
  int i;
  size_t n;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef void *_g4_t_v23[6];
  typedef uint8_t _g4_t_dest[32];
  typedef uint8_t _g4_t_src[92];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v23)) > _g4_s7 ? (56u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_dest)) > _g4_s8 ? (80u + sizeof(_g4_t_dest)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_src)) > _g4_s9 ? (112u + sizeof(_g4_t_src)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 80u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 112u);

  if ( a4 != nullptr
    && *a4 == 16
    && (v8 = (uint32_t *)a4[1]) != nullptr
    && (v21 = v8[2], v9 = (int **)d2i_PBEPARAM(0, &v21, *v8), v10 = v9, v9 != nullptr) )
  {
    v11 = v9[1];
    v18 = 1;
    if ( v11 != nullptr )
      v18 = ASN1_INTEGER_get(v11);
    v12 = 0;
    v19 = (*v10)[2];
    v20 = **v10;
    if ( s != nullptr )
    {
      v12 = a3;
      if ( a3 == -1 )
        v12 = strlen(s);
    }
    EVP_MD_CTX_init(v23);
    EVP_DigestInit_ex((int)(uintptr_t)(v23), a6, nullptr);
    EVP_DigestUpdate((int)(uintptr_t)(v23), (int)(uintptr_t)(s), v12);
    EVP_DigestUpdate((int)(uintptr_t)(v23), v19, v20);
    PBEPARAM_free(v10);
    EVP_DigestFinal_ex(v23, (int)(uintptr_t)(src), nullptr);
    v17 = EVP_MD_size((int)(uintptr_t)(a6));
    result = 0;
    if ( v17 >= 0 )
    {
      if ( v18 > 1 )
      {
        for ( i = 1; i != v18; ++i )
        {
          EVP_DigestInit_ex((int)(uintptr_t)(v23), a6, nullptr);
          EVP_DigestUpdate((int)(uintptr_t)(v23), (int)(uintptr_t)(src), v17);
          EVP_DigestFinal_ex(v23, (int)(uintptr_t)(src), nullptr);
        }
      }
      EVP_MD_CTX_cleanup((int)(uintptr_t)(v23));
      if ( EVP_CIPHER_key_length((int)(uintptr_t)(a5)) > 64 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "EVP_CIPHER_key_length(cipher) <= (int)sizeof(md_tmp)");
      n = EVP_CIPHER_key_length((int)(uintptr_t)(a5));
      memcpy(dest, src, n);
      if ( EVP_CIPHER_iv_length((int)(uintptr_t)(a5)) > 16 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "EVP_CIPHER_iv_length(cipher) <= 16");
      v16 = EVP_CIPHER_iv_length((int)(uintptr_t)(a5));
      v15 = EVP_CIPHER_iv_length((int)(uintptr_t)(a5));
      memcpy(v22, &src[-v15 + 16], v16);
      EVP_CipherInit_ex(a1, a5, nullptr, (int)(uintptr_t)(dest), v22, a7);
      OPENSSL_cleanse(src, 0x40u);
      OPENSSL_cleanse(dest, 0x20u);
      OPENSSL_cleanse(v22, 0x10u);
      return 1;
    }
  }
  else
  {
    ERR_put_error(6, 117, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS5_PBKDF2_HMAC  (binary VA: 0x1a1fec0)
// Original: PKCS5_PBKDF2_HMAC
// ----------------------------------------------------------------------------
int PKCS5_PBKDF2_HMAC(char *s, size_t n, int a3, int a4, int a5, uint32_t *a6, int a7, char *a8)
{
  int result;
  signed int v10;
  int v11;
  int i;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef signed int _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef uint8_t _g4_t_src[64];
  typedef int _g4_t_v19[59];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_src)) > _g4_s5 ? (32u + sizeof(_g4_t_src)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v19)) > _g4_s6 ? (96u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);

  v14 = EVP_MD_size((int)(uintptr_t)(a6));
  result = 0;
  if ( v14 >= 0 )
  {
    HMAC_CTX_init(v19);
    if ( s != nullptr )
    {
      if ( n == -1 )
        n = strlen(s);
    }
    else
    {
      n = 0;
    }
    if ( a7 != 0 )
    {
      v16 = a7;
      v15 = 1;
      do
      {
        v10 = v14;
        if ( v16 <= v14 )
          v10 = v16;
        v17[0] = HIBYTE(v15);
        v17[1] = BYTE2(v15);
        v17[2] = BYTE1(v15);
        v17[3] = v15;
        HMAC_Init_ex(v19, s, n, a6, nullptr);
        HMAC_Update((int)(uintptr_t)(v19), a3, a4);
        HMAC_Update((int)(uintptr_t)(v19), (int)(uintptr_t)(v17), 4);
        HMAC_Final((int)(uintptr_t)(v19), (int)(uintptr_t)(src), nullptr);
        memcpy(a8, src, v10);
        if ( a5 > 1 )
        {
          v11 = 1;
          do
          {
            v13 = v11;
            HMAC(a6, s, n, (int)(uintptr_t)(src), v14, src, nullptr);
            if ( v10 > 0 )
            {
              for ( i = 0; i != v10; ++i )
                a8[i] ^= src[i];
            }
            v11 = v13 + 1;
          }
          while ( v13 + 1 != a5 );
        }
        ++v15;
        a8 += v10;
        v16 -= v10;
      }
      while ( v16 != 0 );
    }
    HMAC_CTX_cleanup(v19);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS5_PBKDF2_HMAC_SHA1  (binary VA: 0x1a20100)
// Original: PKCS5_PBKDF2_HMAC_SHA1
// ----------------------------------------------------------------------------
int PKCS5_PBKDF2_HMAC_SHA1(char *s, size_t a2, int a3, int a4, int a5, int a6, char *a7)
{
  uint32_t *v7;

  v7 = (uint32_t *)(EVP_sha1());
  return PKCS5_PBKDF2_HMAC(s, a2, a3, a4, a5, v7, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PKCS5_v2_PBE_keyivgen  (binary VA: 0x1a20160)
// Original: PKCS5_v2_PBE_keyivgen
// ----------------------------------------------------------------------------
int PKCS5_v2_PBE_keyivgen(uint32_t *a1, char *s, size_t a3, uint32_t *a4, int a5, int a6, int a7)
{
  uint32_t *v8;
  int **v9;
  int **digestbyname;
  int **v11;
  unsigned int v12;
  char *v13;
  uint32_t *cipherbyname;
  unsigned int v15;
  uint32_t *v16;
  int *v17;
  size_t v18;
  int v19;
  int *v20;
  int v21;
  char *v22;
  int *v23;
  int v24;
  typedef int **_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef uint8_t _g4_t_v33[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v31)) > _g4_s6 ? (40u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v32)) > _g4_s7 ? (44u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v33)) > _g4_s8 ? (48u + sizeof(_g4_t_v33)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);

  if ( a4 != nullptr
    && *a4 == 16
    && (v8 = (uint32_t *)a4[1]) != nullptr
    && (v31 = v8[2], v9 = (int **)d2i_PBE2PARAM(0, &v31, *v8), digestbyname = v9, v9 != nullptr) )
  {
    if ( OBJ_obj2nid(**v9) != 69 )
    {
      v11 = nullptr;
      ERR_put_error(6, 118, 124, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
      PBE2PARAM_free(digestbyname);
      PBKDF2PARAM_free(v11);
      return 0;
    }
    v12 = OBJ_obj2nid(*digestbyname[1]);
    v13 = OBJ_nid2sn(v12);
    cipherbyname = (uint32_t *)EVP_get_cipherbyname((int)(uintptr_t)(v13));
    if ( cipherbyname == nullptr )
    {
      v11 = nullptr;
      ERR_put_error(6, 118, 107, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    EVP_CipherInit_ex(a1, cipherbyname, nullptr, 0, nullptr, a7);
    if ( EVP_CIPHER_asn1_to_param((int)(uintptr_t)(a1), digestbyname[1][1]) < 0 )
    {
      v11 = nullptr;
      ERR_put_error(6, 118, 122, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    v15 = EVP_CIPHER_CTX_key_length((int)(uintptr_t)(a1));
    if ( v15 > 0x20 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "keylen <= sizeof key");
    v16 = (uint32_t *)(*digestbyname)[1];
    if ( v16 == nullptr || *v16 != 16 )
    {
      v11 = nullptr;
      ERR_put_error(6, 118, 114, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    v31 = *(uint32_t *)(v16[1] + 8);
    v26 = v15;
    v11 = (int **)d2i_PBKDF2PARAM(0, &v31, **(uint32_t **)((*digestbyname)[1] + 4));
    if ( v11 == nullptr )
    {
      ERR_put_error(6, 118, 114, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    PBE2PARAM_free(digestbyname);
    v17 = v11[2];
    v18 = v26;
    if ( v17 != nullptr )
    {
      v19 = ASN1_INTEGER_get(v17);
      v18 = v26;
      if ( v26 != v19 )
      {
        digestbyname = nullptr;
        ERR_put_error(6, 118, 123, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_9;
      }
    }
    v20 = v11[3];
    v21 = 163;
    if ( v20 != nullptr )
    {
      v27 = v18;
      v21 = OBJ_obj2nid(*v20);
      v18 = v27;
    }
    v28 = v18;
    if ( EVP_PBE_find(1, v21, nullptr, &v32, nullptr) == 0 )
    {
      digestbyname = nullptr;
      ERR_put_error(6, 118, 125, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    v22 = OBJ_nid2sn(v32);
    digestbyname = (int **)EVP_get_digestbyname((int)(uintptr_t)(v22));
    if ( digestbyname == nullptr )
    {
      ERR_put_error(6, 118, 125, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    if ( **v11 != 4 )
    {
      digestbyname = nullptr;
      ERR_put_error(6, 118, 126, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_9;
    }
    v23 = (int *)(*v11)[1];
    v30 = *v23;
    v29 = v23[2];
    v24 = ASN1_INTEGER_get(v11[1]);
    v25 = digestbyname;
    digestbyname = nullptr;
    if ( PKCS5_PBKDF2_HMAC(s, a3, v29, v30, v24, v25, v28, (char *)v33) == 0 )
      goto LABEL_9;
    EVP_CipherInit_ex(a1, nullptr, nullptr, (int)(uintptr_t)(v33), nullptr, a7);
    OPENSSL_cleanse(v33, v28);
    PBKDF2PARAM_free(v11);
    return 1;
  }
  else
  {
    ERR_put_error(6, 118, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_cbc128_encrypt  (binary VA: 0x1a20680)
// Original: CRYPTO_cbc128_encrypt
// ----------------------------------------------------------------------------
int CRYPTO_cbc128_encrypt(int a1, uint32_t *a2, unsigned int a3, int a4, uint32_t *a5, void (*a6)(uint32_t *, uint32_t *, int))
{
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  unsigned int v10;
  int i;
  unsigned int v12;
  unsigned int v13;
  int v14;
  uint32_t *v15;
  unsigned int v16;
  int result;

  v6 = a1;
  v7 = a5;
  if ( a3 <= 0xF )
  {
    v13 = a3;
    v15 = a2;
  }
  else
  {
    v8 = a1;
    v9 = a2;
    v10 = a3;
    while ( 1 )
    {
      for ( i = 0; i != 4; ++i )
        v9[i] = *(uint32_t *)(v8 + i * 4) ^ v7[i];
      v10 -= 16;
      v8 += 16;
      a6(v9, v9, a4);
      if ( v10 <= 0xF )
        break;
      v7 = v9;
      v9 += 4;
    }
    v12 = (a3 - 16) >> 4;
    v13 = a3 & 0xF;
    v14 = 4 * (v12 + 1);
    v7 = &a2[4 * v12];
    v6 = v14 * 4 + a1;
    v15 = &a2[v14];
  }
  if ( v13 != 0 )
  {
    v16 = 0;
    do
    {
      *((uint8_t *)v15 + v16) = *(uint8_t *)(v6 + v16) ^ *((uint8_t *)v7 + v16);
      ++v16;
    }
    while ( v13 > v16 && v16 <= 0xF );
    if ( v16 <= 0xF )
    {
      do
      {
        *((uint8_t *)v15 + v16) = *((uint8_t *)v7 + v16);
        ++v16;
      }
      while ( v16 != 16 );
    }
    a6(v15, v15, a4);
    v7 = v15;
  }
  *a5 = *v7;
  a5[1] = v7[1];
  a5[2] = v7[2];
  result = v7[3];
  a5[3] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_cbc128_decrypt  (binary VA: 0x1a20790)
// Original: CRYPTO_cbc128_decrypt
// ----------------------------------------------------------------------------
unsigned int CRYPTO_cbc128_decrypt(unsigned int a1, unsigned int a2, unsigned int a3, int a4, uint32_t *a5, void (*a6)(unsigned int, uint8_t *, int))
{
  uint32_t *v6;
  uint32_t *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int j;
  unsigned int v12;
  unsigned int v13;
  uint32_t *v14;
  unsigned int result;
  unsigned int v16;
  int i;
  typedef unsigned int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef uint8_t _g4_t_v24[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v19)) > _g4_s1 ? (19u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 19u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v6 = a5;
  if ( a1 == a2 )
  {
    if ( a3 <= 0xF )
    {
      v13 = a2;
      v20 = a3;
    }
    else
    {
      v22 = a3;
      v23 = a1;
      v16 = a1;
      do
      {
        a6(v16, v24, a4);
        for ( i = 0; i != 4; ++i )
        {
          v21 = *(uint32_t *)(v16 + i * 4);
          *(uint32_t *)(v23 + i * 4) = *(uint32_t *)&v24[i * 4] ^ a5[i];
          a5[i] = v21;
        }
        v22 -= 16;
        v16 += 16;
        v23 += 16;
      }
      while ( v22 > 0xF );
      v20 = a3 & 0xF;
      v13 = a1 + ((a3 - 16) & 0xFFFFFFF0) + 16;
      a2 = v13;
    }
  }
  else
  {
    if ( a3 <= 0xF )
    {
      v14 = a5;
      v20 = a3;
      v13 = a1;
    }
    else
    {
      v7 = a5;
      v8 = a2;
      v9 = a1;
      v10 = a3;
      while ( 1 )
      {
        v18 = v10;
        a6(v9, (uint8_t *)v8, a4);
        for ( j = 0; j != 4; ++j )
          *(uint32_t *)(v8 + j * 4) ^= v7[j];
        v10 = v18 - 16;
        v8 += 16;
        if ( v18 - 16 <= 0xF )
          break;
        v7 = (uint32_t *)v9;
        v9 += 16;
      }
      v6 = a5;
      v20 = a3 & 0xF;
      v12 = 16 * (((a3 - 16) >> 4) + 1);
      a2 += v12;
      v13 = v12 + a1;
      v14 = (uint32_t *)(a1 + 16 * ((a3 - 16) >> 4));
    }
    *v6 = *v14;
    v6[1] = v14[1];
    v6[2] = v14[2];
    v6[3] = v14[3];
  }
  result = v20;
  if ( v20 != 0 )
  {
    a6(v13, v24, a4);
    result = 0;
    do
    {
      v19 = *(uint8_t *)(v13 + result);
      *(uint8_t *)(a2 + result) = v24[result] ^ *((uint8_t *)v6 + result);
      *((uint8_t *)v6 + result++) = v19;
    }
    while ( v20 > result && result <= 0xF );
    if ( result <= 0xF )
    {
      do
      {
        *((uint8_t *)v6 + result) = *(uint8_t *)(v13 + result);
        ++result;
      }
      while ( result != 16 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_cfb128_encrypt  (binary VA: 0x1a20af0)
// Original: CRYPTO_cfb128_encrypt
// ----------------------------------------------------------------------------
char CRYPTO_cfb128_encrypt(char *a1, uint8_t *a2, unsigned int a3, int a4, int a5, unsigned int *a6, int a7, void (*a8)(int, int, int))
{
  int v8;
  unsigned int v9;
  unsigned int v10;
  char *v11;
  unsigned int v12;
  uint8_t *v13;
  uint8_t *v14;
  uint8_t *v15;
  char *v16;
  int v17;
  unsigned int v18;
  char *v19;
  uint8_t *v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  uint8_t *v24;
  char *v25;
  int v26;
  int v27;
  char v28;
  char v29;
  bool v30;
  char *v32;
  unsigned int v33;
  char *v34;
  uint8_t *v35;
  unsigned int v36;
  int v37;
  char v38;
  int v39;

  v8 = a5;
  v9 = *a6;
  LOBYTE(v10) = a7;
  if ( a7 != 0 )
  {
    if ( v9 != 0 )
    {
      LOBYTE(v10) = a3;
      if ( a3 != 0 )
      {
        v19 = a1;
        v20 = a2;
        v21 = a3;
        do
        {
          --v21;
          LOBYTE(v10) = *v19 ^ *(uint8_t *)(a5 + v9);
          *(uint8_t *)(a5 + v9) = v10;
          ++v19;
          *v20++ = v10;
          v9 = ((uint8_t)v9 + 1) & 0xF;
        }
        while ( v9 != 0 && v21 != 0 );
        a1 = v19;
        a2 = v20;
        a3 = v21;
        v8 = a5;
      }
    }
    v22 = a3;
    if ( a3 > 0xF )
    {
      v23 = a3;
      v24 = a2;
      v25 = a1;
      while ( 1 )
      {
        v34 = v25;
        v33 = v23;
        a8(v8, v8, a4);
        for ( ; v9 <= 0xF; v9 += 4 )
        {
          v26 = *(uint32_t *)(v8 + v9) ^ *(uint32_t *)&v34[v9];
          *(uint32_t *)(v8 + v9) = v26;
          *(uint32_t *)&v24[v9] = v26;
        }
        v23 = v33 - 16;
        v24 += 16;
        v25 = v34 + 16;
        if ( v33 - 16 <= 0xF )
          break;
        v9 = 0;
      }
      v22 = a3 & 0xF;
      v9 = 0;
      v10 = ((a3 - 16) & 0xFFFFFFF0) + 16;
      a2 += v10;
      a1 += v10;
    }
    if ( v22 != 0 )
    {
      a8(v8, v8, a4);
      v27 = v22;
      v10 = v9;
      do
      {
        v28 = *(uint8_t *)(v8 + v10) ^ a1[v10];
        --v27;
        *(uint8_t *)(v8 + v10) = v28;
        a2[v10++] = v28;
      }
      while ( v27 != 0 );
      *a6 = v22 + v9;
    }
    else
    {
      *a6 = v9;
    }
  }
  else
  {
    if ( v9 != 0 && a3 != 0 )
    {
      v11 = a1;
      v35 = a2;
      v12 = a3;
      do
      {
        --v12;
        v38 = *v11++;
        v13 = (uint8_t *)(a5 + v9);
        *v35 = *(uint8_t *)(a5 + v9) ^ v38;
        v14 = v35 + 1;
        v9 = ((uint8_t)v9 + 1) & 0xF;
        ++v35;
        *v13 = v38;
        if ( v9 == 0 )
        {
          a1 = v11;
          a2 = v35;
          a3 = v12;
          v8 = a5;
          goto LABEL_8;
        }
      }
      while ( v12 != 0 );
      a1 = v11;
      a2 = v14;
      v8 = a5;
      v39 = 0;
    }
    else
    {
LABEL_8:
      v39 = a3;
      if ( a3 > 0xF )
      {
        v36 = a3;
        v15 = a2;
        v16 = a1;
        while ( 1 )
        {
          v32 = v16;
          a8(v8, v8, a4);
          for ( ; v9 <= 0xF; v9 += 4 )
          {
            v17 = *(uint32_t *)&v32[v9];
            *(uint32_t *)&v15[v9] = v17 ^ *(uint32_t *)(v8 + v9);
            *(uint32_t *)(v8 + v9) = v17;
          }
          v36 -= 16;
          v15 += 16;
          v16 = v32 + 16;
          if ( v36 <= 0xF )
            break;
          v9 = 0;
        }
        v39 = a3 & 0xF;
        v18 = ((a3 - 16) & 0xFFFFFFF0) + 16;
        v9 = 0;
        a2 += v18;
        a1 += v18;
      }
    }
    LOBYTE(v10) = v39;
    if ( v39 != 0 )
    {
      a8(v8, v8, a4);
      v10 = v9;
      v37 = v39;
      do
      {
        v29 = a1[v10];
        v30 = v37-- == 1;
        a2[v10] = *(uint8_t *)(v8 + v10) ^ v29;
        *(uint8_t *)(v8 + v10++) = v29;
      }
      while ( !v30 );
      v9 += v39;
    }
    *a6 = v9;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_cfb128_1_encrypt  (binary VA: 0x1a20df0)
// Original: CRYPTO_cfb128_1_encrypt
// ----------------------------------------------------------------------------
int CRYPTO_cfb128_1_encrypt(int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, void (*a8)(uint32_t *, uint32_t *, int))
{
  int result;
  unsigned int i;
  uint8_t *v10;
  char v11;
  int v12;
  typedef char _g4_t_v13;
  typedef uint8_t _g4_t_v14[13];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v14)) > _g4_s1 ? (13u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 13u);

  result = a3;
  if ( a3 != 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v13 = -(((int)*(uint8_t *)(a1 + (i >> 3)) >> (~(uint8_t)i & 7)) & 1) & 0x80;
      sub_1A20980((int)(uintptr_t)(&v13), (int)(uintptr_t)(v14), 1, a4, a5, a7, a8);
      v10 = (uint8_t *)(a2 + (i >> 3));
      v11 = i & 7;
      v12 = ~(1 << (~(uint8_t)i & 7));
      LOBYTE(v12) = *v10 & v12;
      result = ((v14[0] & 0x80) >> v11) | v12;
      *v10 = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_cfb128_8_encrypt  (binary VA: 0x1a20ea0)
// Original: CRYPTO_cfb128_8_encrypt
// ----------------------------------------------------------------------------
int CRYPTO_cfb128_8_encrypt(int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, void (*a8)(uint32_t *, uint32_t *, int))
{
  int i;
  int v9;
  int v10;
  int result;

  if ( a3 != 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v9 = i + a2;
      v10 = i + a1;
      result = sub_1A20980(v10, v9, 8, a4, a5, a7, a8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CRYPTO_ofb128_encrypt  (binary VA: 0x1a20f10)
// Original: CRYPTO_ofb128_encrypt
// ----------------------------------------------------------------------------
unsigned int * CRYPTO_ofb128_encrypt(uint8_t *a1, uint8_t *a2, unsigned int a3, int a4, int a5, unsigned int *a6, void (*a7)(int, int, int))
{
  int v8;
  unsigned int v9;
  uint8_t *v10;
  unsigned int v11;
  uint8_t *v12;
  unsigned int v13;
  uint8_t *v14;
  uint8_t *v15;
  int i;
  uint8_t *v17;
  unsigned int v18;
  unsigned int v20;
  int j;
  unsigned int v22;
  uint8_t *v23;
  int v24;
  int v25;
  uint8_t *v26;

  v8 = a5;
  v9 = *a6;
  if ( *a6 != 0 && a3 != 0 )
  {
    v10 = a1;
    v11 = a3;
    do
    {
      --v11;
      *a2++ = *v10++ ^ *(uint8_t *)(a5 + v9);
      v9 = ((uint8_t)v9 + 1) & 0xF;
    }
    while ( v9 != 0 && v11 != 0 );
    a1 = v10;
    a3 = v11;
  }
  v25 = a3;
  if ( a3 > 0xF )
  {
    v12 = a2;
    v26 = a2;
    v13 = a3;
    v14 = a1;
    v15 = v12;
    i = a5;
    while ( 1 )
    {
      v24 = i;
      v22 = v13;
      a7(i, i, a4);
      for ( i = v24; v9 <= 0xF; v9 += 4 )
        *(uint32_t *)&v15[v9] = *(uint32_t *)&v14[v9] ^ *(uint32_t *)(v24 + v9);
      v13 = v22 - 16;
      v15 += 16;
      v14 += 16;
      if ( v22 - 16 <= 0xF )
        break;
      v9 = 0;
    }
    v17 = v26;
    v8 = v24;
    v25 = a3 & 0xF;
    v9 = 0;
    v18 = ((a3 - 16) & 0xFFFFFFF0) + 16;
    a1 += v18;
    a2 = &v17[v18];
  }
  if ( v25 != 0 )
  {
    v23 = a2;
    a7(v8, v8, a4);
    v20 = v9;
    for ( j = v25; j != 0; --j )
    {
      v23[v20] = a1[v20] ^ *(uint8_t *)(v8 + v20);
      ++v20;
    }
    *a6 = v25 + v9;
    return a6;
  }
  else
  {
    *a6 = v9;
    return a6;
  }
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8PrivateKey_bio  (binary VA: 0x1a21070)
// Original: d2i_PKCS8PrivateKey_bio
// ----------------------------------------------------------------------------
int d2i_PKCS8PrivateKey_bio(int a1, void **a2, int (*a3)(char *, int, uint32_t, char *), char *a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  typedef char _g4_t_dest;
  typedef char _g4_t_v10[1036];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v10)) > _g4_s1 ? (32u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  v4 = (int *)d2i_PKCS8_bio(a1, 0);
  if ( v4 == nullptr )
    return 0;
  if ( a3 != nullptr )
    v5 = a3(v10, 1024, 0, a4);
  else
    v5 = PEM_def_callback(v10, 1024, 0, a4);
  if ( v5 <= 0 )
  {
    ERR_put_error(9, 120, 104, (int)(uintptr_t)(&unk_1B15112), 0);
    dest = (char)(uintptr_t)(v4);
    v7 = 0;
    X509_SIG_free(dest);
  }
  else
  {
    v6 = PKCS8_decrypt(v4, v10, v5);
    X509_SIG_free((char)(uintptr_t)(v4));
    v7 = 0;
    if ( v6 != 0 )
    {
      v7 = EVP_PKCS82PKEY(v6);
      PKCS8_PRIV_KEY_INFO_free(v6);
      if ( v7 != 0 && a2 != nullptr )
      {
        if ( *a2 != nullptr )
          EVP_PKEY_free(*a2);
        *a2 = (void *)v7;
      }
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8PrivateKey_fp  (binary VA: 0x1a211c0)
// Original: d2i_PKCS8PrivateKey_fp
// ----------------------------------------------------------------------------
int d2i_PKCS8PrivateKey_fp(int a1, void **a2, int (*a3)(char *, int, uint32_t, char *), char *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;

  v4 = BIO_new_fp(a1, 0);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v6 = d2i_PKCS8PrivateKey_bio((int)(uintptr_t)(v4), a2, a3, a4);
    BIO_free(v5);
  }
  else
  {
    v6 = 0;
    ERR_put_error(9, 121, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_PKCS8  (binary VA: 0x1a21270)
// Original: PEM_read_bio_PKCS8
// ----------------------------------------------------------------------------
int PEM_read_bio_PKCS8(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  return PEM_ASN1_read_bio((int (*)(int, void **, int))d2i_X509_SIG, "ENCRYPTED PRIVATE KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_PKCS8  (binary VA: 0x1a212c0)
// Original: PEM_read_PKCS8
// ----------------------------------------------------------------------------
int PEM_read_PKCS8(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)((int (*)(int *, char **, int))d2i_X509_SIG), "ENCRYPTED PRIVATE KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PKCS8  (binary VA: 0x1a21310)
// Original: PEM_write_bio_PKCS8
// ----------------------------------------------------------------------------
bool PEM_write_bio_PKCS8(uint32_t *a1, int a2)
{
  return PEM_ASN1_write_bio(
           (int (*)(int, char **))i2d_X509_SIG,
           "ENCRYPTED PRIVATE KEY",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PKCS8  (binary VA: 0x1a21380)
// Original: PEM_write_PKCS8
// ----------------------------------------------------------------------------
bool PEM_write_PKCS8(int a1, int a2)
{
  return PEM_ASN1_write(
           (int (*)(int, char **))i2d_X509_SIG,
           "ENCRYPTED PRIVATE KEY",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_bio_PKCS8_PRIV_KEY_INFO  (binary VA: 0x1a213f0)
// Original: PEM_read_bio_PKCS8_PRIV_KEY_INFO
// ----------------------------------------------------------------------------
int PEM_read_bio_PKCS8_PRIV_KEY_INFO(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4)
{
  return PEM_ASN1_read_bio((int (*)(int, void **, int))d2i_PKCS8_PRIV_KEY_INFO, "PRIVATE KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_read_PKCS8_PRIV_KEY_INFO  (binary VA: 0x1a21440)
// Original: PEM_read_PKCS8_PRIV_KEY_INFO
// ----------------------------------------------------------------------------
int PEM_read_PKCS8_PRIV_KEY_INFO(int a1, int a2, int a3, char *a4)
{
  return PEM_ASN1_read((int)(uintptr_t)((int (*)(int, int, int))d2i_PKCS8_PRIV_KEY_INFO), "PRIVATE KEY", a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PKCS8_PRIV_KEY_INFO  (binary VA: 0x1a21490)
// Original: PEM_write_bio_PKCS8_PRIV_KEY_INFO
// ----------------------------------------------------------------------------
bool PEM_write_bio_PKCS8_PRIV_KEY_INFO(uint32_t *a1, int a2)
{
  return PEM_ASN1_write_bio(
           (int (*)(int, char **))i2d_PKCS8_PRIV_KEY_INFO,
           "PRIVATE KEY",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PKCS8PrivateKey  (binary VA: 0x1a21850)
// Original: PEM_write_PKCS8PrivateKey
// ----------------------------------------------------------------------------
int PEM_write_PKCS8PrivateKey(int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21780(a1, a2, 0, -1, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PKCS8PrivateKey_nid  (binary VA: 0x1a21870)
// Original: PEM_write_PKCS8PrivateKey_nid
// ----------------------------------------------------------------------------
int PEM_write_PKCS8PrivateKey_nid(int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21780(a1, a2, 0, a3, 0, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8PrivateKey_nid_fp  (binary VA: 0x1a218a0)
// Original: i2d_PKCS8PrivateKey_nid_fp
// ----------------------------------------------------------------------------
int i2d_PKCS8PrivateKey_nid_fp(int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21780(a1, a2, 1, a3, 0, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8PrivateKey_fp  (binary VA: 0x1a218d0)
// Original: i2d_PKCS8PrivateKey_fp
// ----------------------------------------------------------------------------
int i2d_PKCS8PrivateKey_fp(int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21780(a1, a2, 1, -1, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8PrivateKey_nid_bio  (binary VA: 0x1a218f0)
// Original: i2d_PKCS8PrivateKey_nid_bio
// ----------------------------------------------------------------------------
int i2d_PKCS8PrivateKey_nid_bio(uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21500(a1, a2, 1, a3, 0, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8PrivateKey_bio  (binary VA: 0x1a21920)
// Original: i2d_PKCS8PrivateKey_bio
// ----------------------------------------------------------------------------
int i2d_PKCS8PrivateKey_bio(uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21500(a1, a2, 1, -1, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PKCS8PrivateKey  (binary VA: 0x1a21940)
// Original: PEM_write_bio_PKCS8PrivateKey
// ----------------------------------------------------------------------------
int PEM_write_bio_PKCS8PrivateKey(uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21500(a1, a2, 0, -1, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_bio_PKCS8PrivateKey_nid  (binary VA: 0x1a21960)
// Original: PEM_write_bio_PKCS8PrivateKey_nid
// ----------------------------------------------------------------------------
int PEM_write_bio_PKCS8PrivateKey_nid(uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7)
{
  return sub_1A21500(a1, a2, 0, a3, 0, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: PEM_write_PKCS8_PRIV_KEY_INFO  (binary VA: 0x1a21990)
// Original: PEM_write_PKCS8_PRIV_KEY_INFO
// ----------------------------------------------------------------------------
bool PEM_write_PKCS8_PRIV_KEY_INFO(int a1, int a2)
{
  return PEM_ASN1_write(
           (int (*)(int, char **))i2d_PKCS8_PRIV_KEY_INFO,
           "PRIVATE KEY",
           a1,
           a2,
           nullptr,
           nullptr,
           0,
           nullptr,
           nullptr);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_attrib_smimecap  (binary VA: 0x1a21a00)
// Original: PKCS7_add_attrib_smimecap
// ----------------------------------------------------------------------------
int PKCS7_add_attrib_smimecap(int a1, int a2)
{
  void **v2;
  int v3;

  v2 = (void **)ASN1_STRING_new();
  v3 = (int)(uintptr_t)(v2);
  if ( v2 != nullptr )
  {
    *v2 = (void *)ASN1_item_i2d(a2, v2 + 2, (int)(uintptr_t)(&X509_ALGORS_it));
    return PKCS7_add_signed_attribute(a1, 167, 16, v3);
  }
  else
  {
    ERR_put_error(33, 118, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS7_get_smimecap  (binary VA: 0x1a21aa0)
// Original: PKCS7_get_smimecap
// ----------------------------------------------------------------------------
int PKCS7_get_smimecap(int a1)
{
  uint32_t *signed_attribute;
  int result;
  int *v3;
  typedef char *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  signed_attribute = (uint32_t *)PKCS7_get_signed_attribute(a1, 0xA7u);
  result = 0;
  if ( signed_attribute != nullptr && *signed_attribute == 16 )
  {
    v3 = (int *)signed_attribute[1];
    v4 = (char *)v3[2];
    return ASN1_item_d2i(nullptr, &v4, *v3, (int)(uintptr_t)(&X509_ALGORS_it));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_simple_smimecap  (binary VA: 0x1a21b10)
// Original: PKCS7_simple_smimecap
// ----------------------------------------------------------------------------
int PKCS7_simple_smimecap(int *a1, unsigned int a2, int a3)
{
  void **v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;

  v3 = (void **)X509_ALGOR_new();
  v4 = (uint32_t *)(v3);
  if ( v3 == nullptr )
    goto LABEL_9;
  ASN1_OBJECT_free(*v3);
  *v4 = (uint32_t)(uintptr_t)(OBJ_nid2obj(a2));
  if ( a3 > 0 )
  {
    v5 = ASN1_TYPE_new();
    v4[1] = v5;
    if ( v5 != 0 )
    {
      v6 = ASN1_INTEGER_new();
      v7 = v6;
      if ( v6 != 0 && ASN1_INTEGER_set(v6, a3) != 0 )
      {
        *(uint32_t *)(v4[1] + 4) = v7;
        *(uint32_t *)v4[1] = 2;
        goto LABEL_7;
      }
    }
LABEL_9:
    ERR_put_error(33, 119, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
LABEL_7:
  sk_push(a1, (int)(uintptr_t)(v4));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_attrib_content_type  (binary VA: 0x1a21c00)
// Original: PKCS7_add_attrib_content_type
// ----------------------------------------------------------------------------
int PKCS7_add_attrib_content_type(int a1, char **a2)
{
  char **v2;
  int signed_attribute;
  int v4;

  v2 = a2;
  signed_attribute = PKCS7_get_signed_attribute(a1, 0x32u);
  v4 = 0;
  if ( signed_attribute == 0 )
  {
    if ( a2 == nullptr )
      v2 = OBJ_nid2obj(0x15u);
    return PKCS7_add_signed_attribute(a1, 50, 6, (int)(uintptr_t)(v2));
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add0_attrib_signing_time  (binary VA: 0x1a21c90)
// Original: PKCS7_add0_attrib_signing_time
// ----------------------------------------------------------------------------
int PKCS7_add0_attrib_signing_time(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( a2 != 0 )
    return PKCS7_add_signed_attribute(a1, 52, 23, v2);
  v2 = X509_gmtime_adj(0, 0);
  if ( v2 != 0 )
    return PKCS7_add_signed_attribute(a1, 52, 23, v2);
  ERR_put_error(33, 135, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add1_attrib_digest  (binary VA: 0x1a21d20)
// Original: PKCS7_add1_attrib_digest
// ----------------------------------------------------------------------------
int PKCS7_add1_attrib_digest(int a1, char *s, size_t a3)
{
  int v3;
  int result;
  int v5;

  v3 = ASN1_OCTET_STRING_new();
  result = 0;
  if ( v3 != 0 )
  {
    if ( ASN1_STRING_set(v3, s, a3) == 0 || (v5 = PKCS7_add_signed_attribute(a1, 51, 4, v3), result = 1, v5 == 0) )
    {
      ASN1_OCTET_STRING_free(v3);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_PBE_add  (binary VA: 0x1a21db0)
// Original: PKCS12_PBE_add
// ----------------------------------------------------------------------------
void PKCS12_PBE_add()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_PBE_keyivgen  (binary VA: 0x1a21dc0)
// Original: PKCS12_PBE_keyivgen
// ----------------------------------------------------------------------------
int PKCS12_PBE_keyivgen(uint32_t *a1, char *a2, int a3, uint32_t *a4, uint32_t *a5, int a6, int a7)
{
  uint32_t *v8;
  int **v9;
  int **v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v20)) > _g4_s5 ? (48u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  if ( a4 != nullptr
    && *a4 == 16
    && (v8 = (uint32_t *)a4[1]) != nullptr
    && (v18 = v8[2], v9 = (int **)d2i_PBEPARAM(0, &v18, *v8), v10 = v9, v9 != nullptr) )
  {
    v11 = v9[1];
    v12 = 1;
    if ( v11 != nullptr )
      v12 = ASN1_INTEGER_get(v11);
    v16 = (*v10)[2];
    v17 = **v10;
    v13 = EVP_CIPHER_key_length((int)(uintptr_t)(a5));
    if ( PKCS12_key_gen_asc(a2, a3, v16, v17, 1, v12, v13, v20, a6) != 0 )
    {
      v14 = EVP_CIPHER_iv_length((int)(uintptr_t)(a5));
      if ( PKCS12_key_gen_asc(a2, a3, v16, v17, 2, v12, v14, v19, a6) != 0 )
      {
        PBEPARAM_free(v10);
        v15 = EVP_CipherInit_ex(a1, a5, nullptr, (int)(uintptr_t)(v20), v19, a7);
        OPENSSL_cleanse(v20, 0x20u);
        OPENSSL_cleanse(v19, 0x10u);
        return v15;
      }
      ERR_put_error(35, 120, 106, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(35, 120, 107, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    PBEPARAM_free(v10);
    return 0;
  }
  else
  {
    ERR_put_error(35, 120, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS12_pbe_crypt  (binary VA: 0x1a22050)
// Original: PKCS12_pbe_crypt
// ----------------------------------------------------------------------------
char * PKCS12_pbe_crypt(int *a1, char *a2, size_t a3, char *a4, size_t a5, char **a6, uint32_t *a7, int a8)
{
  int v8;
  char *v9;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[38];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v12)) > _g4_s1 ? (40u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v13)) > _g4_s2 ? (48u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v14)) > _g4_s3 ? (52u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);

  EVP_CIPHER_CTX_init(v14);
  if ( EVP_PBE_CipherInit(*a1, a2, a3, a1[1], (int)(uintptr_t)(v14), a8) != 0 )
  {
    v8 = EVP_CIPHER_CTX_block_size((int)(uintptr_t)(v14));
    v9 = (char *)(CRYPTO_malloc(a5 + v8, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v9 != nullptr )
    {
      EVP_CipherUpdate(v14, v9, &v13, a4, a5);
      v12 = v13;
      if ( EVP_CipherFinal_ex((int)(uintptr_t)(v14), (int)(uintptr_t)(&v9[v13]), (unsigned int *)&v13) != 0 )
      {
        if ( a7 != nullptr )
          *a7 = v13 + v12;
        if ( a6 != nullptr )
          *a6 = v9;
      }
      else
      {
        v11 = v9;
        v9 = nullptr;
        CRYPTO_free(v11);
        ERR_put_error(35, 119, 116, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      ERR_put_error(35, 119, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    EVP_CIPHER_CTX_cleanup((int)(uintptr_t)(v14));
  }
  else
  {
    v9 = nullptr;
    ERR_put_error(35, 119, 115, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_item_decrypt_d2i  (binary VA: 0x1a22260)
// Original: PKCS12_item_decrypt_d2i
// ----------------------------------------------------------------------------
int PKCS12_item_decrypt_d2i(int *a1, int a2, char *a3, size_t a4, int a5, int a6)
{
  int v6;
  typedef void *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef size_t _g4_t_v10[4];
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

  if ( PKCS12_pbe_crypt(a1, a3, a4, *(char **)(a5 + 8), *(uint32_t *)a5, (char **)&v8, v10, 0) != nullptr )
  {
    v9 = (char *)v8;
    v6 = ASN1_item_d2i(nullptr, &v9, v10[0], a2);
    if ( a6 != 0 )
      OPENSSL_cleanse((uint8_t *)v8, v10[0]);
    if ( v6 == 0 )
      ERR_put_error(35, 106, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_free(v8);
  }
  else
  {
    v6 = 0;
    ERR_put_error(35, 106, 117, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_item_i2d_encrypt  (binary VA: 0x1a22390)
// Original: PKCS12_item_i2d_encrypt
// ----------------------------------------------------------------------------
char ** PKCS12_item_i2d_encrypt(int *a1, int a2, char *a3, size_t a4, int a5, int a6)
{
  char **v6;
  size_t v7;
  typedef void *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v9 = nullptr;
  v6 = (char **)ASN1_STRING_type_new(4);
  if ( v6 != nullptr )
  {
    v7 = ASN1_item_i2d(a5, &v9, a2);
    if ( v9 != nullptr )
    {
      if ( PKCS12_pbe_crypt(a1, a3, a4, (char *)v9, v7, v6 + 2, v6, 1) != nullptr )
      {
        if ( a6 != 0 )
          OPENSSL_cleanse((uint8_t *)v9, v7);
        CRYPTO_free(v9);
      }
      else
      {
        ERR_put_error(35, 108, 103, (int)(uintptr_t)(&unk_1B15112), 0);
        v6 = nullptr;
        CRYPTO_free(v9);
      }
    }
    else
    {
      v6 = nullptr;
      ERR_put_error(35, 108, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    ERR_put_error(35, 108, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_key_gen_uni  (binary VA: 0x1a22510)
// Original: PKCS12_key_gen_uni
// ----------------------------------------------------------------------------
int PKCS12_key_gen_uni(int a1, int a2, int a3, int a4, char a5, int a6, int a7, char *dest, uint32_t *a9)
{
  int v9;
  int v10;
  int v11;
  uint8_t *src;
  void **v13;
  int v14;
  int i;
  uint8_t *v17;
  int j;
  int k;
  int v20;
  int m;
  size_t n;
  int ii;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef void **_g4_t_v35;
  typedef signed int _g4_t_v36;
  typedef int _g4_t_s;
  typedef uint8_t *_g4_t_sa;
  typedef uint8_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef uint8_t *_g4_t_v42;
  typedef void **_g4_t_v43;
  typedef void *_g4_t_v44[13];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v32)) > _g4_s4 ? (12u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v33)) > _g4_s5 ? (16u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v34)) > _g4_s6 ? (20u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v35)) > _g4_s7 ? (24u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v36)) > _g4_s8 ? (28u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_s)) > _g4_s9 ? (32u + sizeof(_g4_t_s)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_sa)) > _g4_s10 ? (32u + sizeof(_g4_t_sa)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v39)) > _g4_s11 ? (36u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v40)) > _g4_s12 ? (40u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v41)) > _g4_s13 ? (40u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v42)) > _g4_s14 ? (48u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v43)) > _g4_s15 ? (52u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v44)) > _g4_s16 ? (72u + sizeof(_g4_t_v44)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);

  EVP_MD_CTX_init(v44);
  v30 = EVP_MD_block_size((int)(uintptr_t)(a9));
  v9 = EVP_MD_size((int)(uintptr_t)(a9));
  v10 = 0;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v42 = CRYPTO_malloc(v30, (int)(uintptr_t)(&unk_1B15112), 0);
    src = CRYPTO_malloc(v11, (int)(uintptr_t)(&unk_1B15112), 0);
    v33 = CRYPTO_malloc(v30 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v40 = 0;
    s = v30 * ((v30 + a4 - 1) / v30);
    if ( a2 != 0 )
      v40 = v30 * ((v30 + a2 - 1) / v30);
    v36 = v40 + s;
    v39 = CRYPTO_malloc(v40 + s, (int)(uintptr_t)(&unk_1B15112), 0);
    v43 = (void **)BN_new();
    v13 = (void **)BN_new();
    v35 = v13;
    if ( src != nullptr && v42 != nullptr && v39 != nullptr && v33 != nullptr && v13 != nullptr && v43 != nullptr )
    {
      if ( v30 > 0 )
      {
        for ( i = 0; i != v30; ++i )
          v42[i] = a5;
      }
      v17 = v39;
      if ( s > 0 )
      {
        for ( j = 0; j != s; ++j )
          v39[j] = *(uint8_t *)(a3 + j % a4);
        v17 = &v39[j];
      }
      if ( v40 > 0 )
      {
        for ( k = 0; k != v40; ++k )
          v17[k] = *(uint8_t *)(a1 + k % a2);
      }
      v34 = -v11;
      do
      {
LABEL_24:
        EVP_DigestInit_ex((int)(uintptr_t)(v44), a9, nullptr);
        EVP_DigestUpdate((int)(uintptr_t)(v44), (int)(uintptr_t)(v42), v30);
        EVP_DigestUpdate((int)(uintptr_t)(v44), (int)(uintptr_t)(v39), v36);
        EVP_DigestFinal_ex(v44, (int)(uintptr_t)(src), nullptr);
        if ( a6 > 1 )
        {
          v31 = v11;
          v20 = (int)(uintptr_t)(src);
          for ( m = 1; m != a6; ++m )
          {
            EVP_DigestInit_ex((int)(uintptr_t)(v44), a9, nullptr);
            EVP_DigestUpdate((int)(uintptr_t)(v44), v20, v31);
            EVP_DigestFinal_ex(v44, v20, nullptr);
          }
          src = (uint8_t *)v20;
          v11 = v31;
        }
        n = a7;
        if ( a7 > v11 )
          n = v11;
        memcpy(dest, src, n);
        if ( a7 <= v11 )
        {
          v14 = 1;
          goto LABEL_9;
        }
        dest += v11;
        a7 += v34;
        if ( v30 > 0 )
        {
          for ( ii = 0; ii != v30; ++ii )
            v33[ii] = src[ii % v11];
        }
        if ( BN_bin2bn(v33, v30, v35) == nullptr || BN_add_word((unsigned int **)v35, 1u) == 0 )
          goto LABEL_8;
      }
      while ( v36 <= 0 );
      v32 = v30;
      v41 = &v39[-v30];
      while ( 1 )
      {
        sa = &v41[v32];
        if ( BN_bin2bn(&v41[v32], v30, v43) == nullptr || BN_add((int)(uintptr_t)(v43), (int *)v43, (int *)v35) == 0 )
          break;
        BN_bn2bin(v43, v33);
        v24 = BN_num_bits(v43);
        v25 = v24 + 14;
        v26 = v24 + 7;
        if ( v26 >= 0 )
          v25 = v26;
        v27 = v25 >> 3;
        if ( v30 < v27 )
        {
          BN_bn2bin(v43, v33);
          memcpy(sa, v33 + 1, v30);
        }
        else if ( v30 <= v27 )
        {
          BN_bn2bin(v43, sa);
        }
        else
        {
          v29 = v27;
          memset(sa, 0, v30 - v27);
          BN_bn2bin(v43, &v39[v32 - v29]);
        }
        v32 += v30;
        if ( v32 - v30 >= v36 )
          goto LABEL_24;
      }
    }
LABEL_8:
    ERR_put_error(35, 111, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    v14 = 0;
LABEL_9:
    v28 = v14;
    CRYPTO_free(src);
    CRYPTO_free(v33);
    CRYPTO_free(v42);
    CRYPTO_free(v39);
    BN_free(v43);
    BN_free(v35);
    EVP_MD_CTX_cleanup((int)(uintptr_t)(v44));
    return v28;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_key_gen_asc  (binary VA: 0x1a22ac0)
// Original: PKCS12_key_gen_asc
// ----------------------------------------------------------------------------
int PKCS12_key_gen_asc(char *a1, int a2, int a3, int a4, char a5, int a6, int a7, char *a8, uint32_t *a9)
{
  size_t v9;
  void *v10;
  int result;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef size_t _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  if ( a1 != nullptr )
  {
    if ( OPENSSL_asc2uni(a1, a2, (int)(uintptr_t)(&v13), (int)(uintptr_t)(v14)) == 0 )
    {
      ERR_put_error(35, 110, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v9 = v14[0];
    v10 = v13;
  }
  else
  {
    v13 = nullptr;
    v14[0] = 0;
    v10 = nullptr;
    v9 = 0;
  }
  result = PKCS12_key_gen_uni((int)(uintptr_t)(v10), v9, a3, a4, a5, a6, a7, a8, a9);
  if ( result <= 0 )
    return 0;
  if ( v13 != nullptr )
  {
    v12 = result;
    OPENSSL_cleanse((uint8_t *)v13, v14[0]);
    CRYPTO_free(v13);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS8_encrypt  (binary VA: 0x1a22bf0)
// Original: PKCS8_encrypt
// ----------------------------------------------------------------------------
int ** PKCS8_encrypt(int a1, int a2, char *a3, size_t a4, void *a5, int a6, int a7, int a8)
{
  int **v8;
  int *v9;
  void **v10;
  char **v11;
  char v13;

  v8 = (int **)X509_SIG_new();
  if ( v8 == nullptr )
  {
    ERR_put_error(35, 125, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_9;
  }
  if ( a1 == -1 )
    v9 = (int *)PKCS5_pbe2_set(a2, a7, a5, a6);
  else
    v9 = (int *)PKCS5_pbe_set(a1, a7, a5, a6);
  if ( v9 == nullptr )
  {
    ERR_put_error(35, 125, 13, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
    v13 = (char)(uintptr_t)(v8);
    v8 = nullptr;
    X509_SIG_free(v13);
    return v8;
  }
  X509_ALGOR_free((char)(uintptr_t)(*v8));
  v10 = (void **)v8[1];
  *v8 = v9;
  ASN1_STRING_free(v10);
  v11 = PKCS12_item_i2d_encrypt(v9, (int)(uintptr_t)(&PKCS8_PRIV_KEY_INFO_it), a3, a4, a8, 1);
  v8[1] = (int *)v11;
  if ( v11 == nullptr )
  {
    ERR_put_error(35, 125, 103, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_9;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS12_bio  (binary VA: 0x1a22ec0)
// Original: i2d_PKCS12_bio
// ----------------------------------------------------------------------------
int i2d_PKCS12_bio(uint32_t *a1, int a2)
{
  return ASN1_item_i2d_bio((int)(uintptr_t)(&PKCS12_it), a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS12_fp  (binary VA: 0x1a22f00)
// Original: i2d_PKCS12_fp
// ----------------------------------------------------------------------------
int i2d_PKCS12_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp((int)(uintptr_t)(&PKCS12_it), a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS12_bio  (binary VA: 0x1a22f40)
// Original: d2i_PKCS12_bio
// ----------------------------------------------------------------------------
int d2i_PKCS12_bio(uint32_t *a1, int *a2)
{
  return ASN1_item_d2i_bio((int)(uintptr_t)(&PKCS12_it), a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS12_fp  (binary VA: 0x1a22f80)
// Original: d2i_PKCS12_fp
// ----------------------------------------------------------------------------
int d2i_PKCS12_fp(int a1, int *a2)
{
  return ASN1_item_d2i_fp((int)(uintptr_t)(&PKCS12_it), a1, a2);
}

// ----------------------------------------------------------------------------
// Function: PKCS12_x5092certbag  (binary VA: 0x1a22fc0)
// Original: PKCS12_x5092certbag
// ----------------------------------------------------------------------------
int PKCS12_x5092certbag(int a1)
{
  return (int)(uintptr_t)(PKCS12_item_pack_safebag(a1, X509_it, 158, 152));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_x509crl2certbag  (binary VA: 0x1a23000)
// Original: PKCS12_x509crl2certbag
// ----------------------------------------------------------------------------
int PKCS12_x509crl2certbag(int a1)
{
  return (int)(uintptr_t)(PKCS12_item_pack_safebag(a1, X509_CRL_it, 160, 153));
}

// ----------------------------------------------------------------------------
// Function: PKCS12_certbag2x509  (binary VA: 0x1a23040)
// Original: PKCS12_certbag2x509
// ----------------------------------------------------------------------------
int PKCS12_certbag2x509(int a1)
{
  int v1;

  v1 = 0;
  if ( OBJ_obj2nid(*(uint32_t *)a1) == 152 && OBJ_obj2nid(**(uint32_t **)(a1 + 4)) == 158 )
    return ASN1_item_unpack(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4), X509_it);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: PKCS12_certbag2x509crl  (binary VA: 0x1a230c0)
// Original: PKCS12_certbag2x509crl
// ----------------------------------------------------------------------------
int PKCS12_certbag2x509crl(int a1)
{
  int v1;

  v1 = 0;
  if ( OBJ_obj2nid(*(uint32_t *)a1) == 153 && OBJ_obj2nid(**(uint32_t **)(a1 + 4)) == 160 )
    return ASN1_item_unpack(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4), X509_CRL_it);
  return v1;
}



// ============================================================================
// Address:   0x1a23dd0 (size: 22 bytes)
// Symbol:    RAND_SSLeay
// Demangled: RAND_SSLeay
// ============================================================================
int (**RAND_SSLeay())(int, int)
{
  return (int (**)(int, int))(uintptr_t)(rand_ssleay_meth);
}
// ----------------------------------------------------------------------------
// Function: RAND_poll  (binary VA: 0x1a23df0)
// Original: RAND_poll
// ----------------------------------------------------------------------------
int RAND_poll()
{
  unsigned int v0;
  unsigned int v1;
  uint64_t *v2;
  signed int v3;
  char *v4;
  char **v5;
  int egd_bytes;
  int v8;
  int v9;
  int v10;
  int v11;
  ssize_t v12;
  typedef int _g4_t_fd;
  typedef struct stat *_g4_t_v14;
  typedef signed int _g4_t_v15;
  typedef __pid_t _g4_t_v16;
  typedef __uid_t _g4_t_v17;
  typedef struct pollfd _g4_t_fds;
  typedef uint8_t _g4_t_buf[32];
  typedef uint64_t _g4_t_v20[38];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_fd)) > _g4_s0 ? (0u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_fds)) > _g4_s5 ? (24u + sizeof(_g4_t_fds)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_buf)) > _g4_s6 ? (32u + sizeof(_g4_t_buf)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v20)) > _g4_s7 ? (64u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_fds &fds = *reinterpret_cast<_g4_t_fds *>(_g4_sf + 24u);
  _g4_t_buf &buf = *reinterpret_cast<_g4_t_buf *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  v16 = getpid();
  v15 = 0;
  memset(v20, 0, 0x120u);
  v0 = 0;
  do
  {
    fd = open((const char *)(uintptr_t)off_2045E88[v0], 2304);
    if ( fd >= 0 )
    {
      v14 = (struct stat *)&v20[12 * v0];
      if ( fstat(fd, v14) == 0 )
      {
        if ( v0 == 0 )
          goto LABEL_23;
        v1 = 0;
        v2 = &v20[11];
        while ( *v2 != v14[1].st_dev || v14->st_dev != *(v2 - 11) )
        {
          ++v1;
          v2 += 12;
          if ( v1 == v0 )
            goto LABEL_23;
        }
        if ( v1 >= v0 )
        {
LABEL_23:
          fds.fd = fd;
          fds.events = 1;
          fds.revents = 0;
          if ( poll(&fds, 1u, 10) >= 0 && (fds.revents & 1) != 0 && (v12 = read(fd, &buf[v15], 32 - v15)) > 0 )
          {
            v15 += v12;
          }
          else if ( *(uint32_t *)__errno(v9, v8) != 4 )
          {
            __errno(v11, v10);
          }
        }
      }
      close(fd);
    }
    ++v0;
  }
  while ( v15 <= 31 && v0 <= 2 );
  v3 = v15;
  v4 = (char *)(uintptr_t)(off_20CF7E0[0]);
  if ( v15 <= 31 && off_20CF7E0[0] != 0 )
  {
    v5 = (char **)(off_20CF7E0);
    do
    {
      ++v5;
      egd_bytes = RAND_query_egd_bytes(v4, (int)(uintptr_t)(&buf[v3]), 32 - v3);
      if ( egd_bytes > 0 )
        v3 += egd_bytes;
      v4 = *v5;
    }
    while ( v3 <= 31 && v4 != nullptr );
  }
  if ( v3 != 0 )
  {
    RAND_add((int)(uintptr_t)(buf), 32, COERCE__INT64((double)v3));
    OPENSSL_cleanse(buf, v3);
  }
  v17 = v16;
  RAND_add((int)(uintptr_t)(&v17), 4, 0);
  v17 = getuid();
  RAND_add((int)(uintptr_t)(&v17), 4, 0);
  v17 = time(nullptr);
  RAND_add((int)(uintptr_t)(&v17), 4, 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: RSA_PKCS1_SSLeay  (binary VA: 0x1a25fd0)
// Original: RSA_PKCS1_SSLeay
// ----------------------------------------------------------------------------
char ** RSA_PKCS1_SSLeay()
{
  return (char **)(&off_20CF800);
}

// ----------------------------------------------------------------------------
// Function: RSA_generate_key_ex  (binary VA: 0x1a25ff0)
// Original: RSA_generate_key_ex
// ----------------------------------------------------------------------------
int RSA_generate_key_ex(int a1, int a2, uint32_t *a3, int a4)
{
  int (*v4)(int, int, uint32_t *, int);
  int *v6;
  int *v7;
  uint8_t *v8;
  uint32_t *v9;
  int v10;
  int i;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int *v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  int *v32;
  int v33;
  g4_int128_t *v34;
  g4_int128_t *v35;
  g4_int128_t *v36;
  g4_int128_t *v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef g4_int128_t *_g4_t_v52;
  typedef g4_int128_t _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef g4_int128_t _g4_t_v55 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v56;
  typedef g4_int128_t _g4_t_v57 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v58;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v39)) > _g4_s1 ? (4u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v40)) > _g4_s2 ? (4u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v41)) > _g4_s3 ? (4u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v42)) > _g4_s4 ? (4u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v43)) > _g4_s5 ? (4u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v44)) > _g4_s6 ? (4u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v45)) > _g4_s7 ? (8u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v46)) > _g4_s8 ? (8u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v47)) > _g4_s9 ? (8u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v48)) > _g4_s10 ? (16u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v49)) > _g4_s11 ? (20u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v50)) > _g4_s12 ? (28u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v51)) > _g4_s13 ? (32u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v52)) > _g4_s14 ? (36u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v53)) > _g4_s15 ? (48u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v54)) > _g4_s16 ? (64u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v55)) > _g4_s17 ? (68u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v56)) > _g4_s18 ? (84u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v57)) > _g4_s19 ? (88u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v58)) > _g4_s20 ? (104u + sizeof(_g4_t_v58)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 84u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 88u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);

  v4 = *(int (**)(int, int, uint32_t *, int))(*(uint32_t *)(a1 + 8) + 52);
  if ( v4 != nullptr )
    return v4(a1, a2, a3, a4);
  v6 = (int *)(BN_CTX_new());
  v7 = v6;
  if ( v6 != nullptr )
  {
    BN_CTX_start((int)(uintptr_t)(v6));
    v52 = (g4_int128_t *)BN_CTX_get(v7);
    v51 = (uint32_t *)(BN_CTX_get(v7));
    v48 = BN_CTX_get(v7);
    v8 = BN_CTX_get(v7);
    v9 = a3;
    if ( v8 == nullptr )
      goto LABEL_22;
    v49 = (a2 + 1) / 2;
    if ( *(uint32_t *)(a1 + 16) == 0 )
    {
      v20 = BN_new();
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v20);
      v9 = a3;
      if ( v20 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 24) == 0 )
    {
      v39 = v9;
      v21 = BN_new();
      *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(v21);
      v9 = v39;
      if ( v21 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 20) == 0 )
    {
      v40 = v9;
      v22 = BN_new();
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v22);
      v9 = v40;
      if ( v22 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 28) == 0 )
    {
      v41 = v9;
      v23 = BN_new();
      *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v23);
      v9 = v41;
      if ( v23 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 32) == 0 )
    {
      v42 = v9;
      v24 = BN_new();
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v24);
      v9 = v42;
      if ( v24 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 36) == 0 )
    {
      v43 = v9;
      v25 = BN_new();
      *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v25);
      v9 = v43;
      if ( v25 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 40) == 0 )
    {
      v44 = v9;
      v26 = BN_new();
      *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v26);
      v9 = v44;
      if ( v26 == nullptr )
        goto LABEL_22;
    }
    if ( *(uint32_t *)(a1 + 44) == 0 )
    {
      v38 = v9;
      v19 = BN_new();
      *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v19);
      v9 = v38;
      if ( v19 == nullptr )
        goto LABEL_22;
    }
    BN_copy(*(uint32_t **)(a1 + 20), v9);
    v50 = v7;
    v10 = 0;
    for ( i = BN_generate_prime_ex(*(uint32_t *)(a1 + 28), v49, 0, 0, 0, a4);
          ;
          i = BN_generate_prime_ex(*(uint32_t *)(a1 + 28), v49, 0, 0, 0, a4) )
    {
      if ( i == 0
        || (v12 = (int *)BN_value_one(), LOBYTE(v13) = BN_sub((int)(uintptr_t)(v48), *(int **)(a1 + 28), v12), v13 == 0)
        || !BN_gcd(v51, v48, *(uint32_t **)(a1 + 20), v50) )
      {
LABEL_21:
        v7 = v50;
        goto LABEL_22;
      }
      if ( v51[1] == 1 && *(uint32_t *)*v51 == 1 && v51[3] == 0 )
        break;
      if ( BN_GENCB_call(a4, 2, v10) == 0 )
        goto LABEL_21;
      ++v10;
    }
    v46 = v10;
    v7 = v50;
    v15 = BN_GENCB_call(a4, 3, 0);
    v16 = v46;
    if ( v15 == 0 )
      goto LABEL_22;
    while ( 1 )
    {
      v17 = 3;
      while ( 1 )
      {
        v47 = v16;
        if ( BN_generate_prime_ex(*(uint32_t *)(a1 + 32), a2 - v49, 0, 0, 0, a4) == 0 )
          goto LABEL_48;
        v18 = BN_cmp(*(int **)(a1 + 28), *(uint32_t **)(a1 + 32));
        v16 = v47;
        if ( v18 != 0 )
          break;
        if ( --v17 == 0 )
        {
          v7 = v50;
          ERR_put_error(4, 129, 120, (int)(uintptr_t)(&unk_1B15112), 0);
          v14 = 0;
          goto LABEL_23;
        }
      }
      v27 = (int *)BN_value_one();
      LOBYTE(v28) = BN_sub((int)(uintptr_t)(v48), *(int **)(a1 + 32), v27);
      if ( v28 == 0 || !BN_gcd(v51, v48, *(uint32_t **)(a1 + 20), v50) )
      {
LABEL_48:
        v7 = v50;
        goto LABEL_22;
      }
      if ( v51[1] == 1 && *(uint32_t *)*v51 == 1 && v51[3] == 0 )
        break;
      if ( BN_GENCB_call(a4, 2, v47) == 0 )
        goto LABEL_48;
      v16 = v47 + 1;
    }
    v7 = v50;
    if ( BN_GENCB_call(a4, 3, 1) == 0 )
      goto LABEL_22;
    if ( BN_cmp(*(int **)(a1 + 28), *(uint32_t **)(a1 + 32)) < 0 )
    {
      v29 = *(uint32_t *)(a1 + 28);
      *(uint32_t *)(a1 + 28) = *(uint32_t *)(a1 + 32);
      *(uint32_t *)(a1 + 32) = v29;
    }
    if ( BN_mul(*(uint32_t **)(a1 + 16), *(uint32_t *)(a1 + 28), *(uint32_t *)(a1 + 32), v50) == 0 )
      goto LABEL_22;
    v30 = (int *)BN_value_one();
    LOBYTE(v31) = BN_sub((int)(uintptr_t)(v51), *(int **)(a1 + 28), v30);
    if ( v31 == 0 )
      goto LABEL_22;
    v32 = (int *)BN_value_one();
    LOBYTE(v33) = BN_sub((int)(uintptr_t)(v48), *(int **)(a1 + 32), v32);
    if ( v33 == 0 || BN_mul(v52, (int)(uintptr_t)(v51), (int)(uintptr_t)(v48), v50) == 0 )
      goto LABEL_22;
    if ( (*(uint8_t *)(a1 + 61) & 1) == 0 )
    {
      v53 = *v52;
      v54 = v52[1] & 0xFFFFFFFE | v54 & 1 | 6;
      v52 = &v53;
    }
    if ( BN_mod_inverse(*(void ***)(a1 + 24), *(uint32_t *)(a1 + 20), (int)(uintptr_t)(v52), v50) == nullptr )
      goto LABEL_22;
    if ( (*(uint8_t *)(a1 + 61) & 1) != 0 )
    {
      v35 = *(g4_int128_t **)(a1 + 24);
    }
    else
    {
      v34 = *(g4_int128_t **)(a1 + 24);
      v35 = &v55;
      v55 = *v34;
      v56 = v34[1] & 0xFFFFFFFE | v56 & 1 | 6;
    }
    if ( BN_div(nullptr, *(uint32_t **)(a1 + 36), __SPAIR64__((unsigned int)(uintptr_t)(v51), (unsigned int)(uintptr_t)(v35)), v50) != 0
      && BN_div(nullptr, *(uint32_t **)(a1 + 40), __SPAIR64__((unsigned int)(uintptr_t)(v48), (unsigned int)(uintptr_t)(v35)), v50) != 0
      && ((*(uint8_t *)(a1 + 61) & 1) != 0
        ? (v37 = *(g4_int128_t **)(a1 + 28))
        : (v36 = *(g4_int128_t **)(a1 + 28), v57 = *v36, v58 = v36[1] & 0xFFFFFFFE | v58 & 1 | 6, v37 = &v57),
          BN_mod_inverse(*(void ***)(a1 + 44), *(uint32_t *)(a1 + 32), (int)(uintptr_t)(v37), v50) != nullptr) )
    {
      v14 = 1;
    }
    else
    {
LABEL_22:
      ERR_put_error(4, 129, 3, (int)(uintptr_t)(&unk_1B15112), 0);
      v14 = 0;
    }
LABEL_23:
    v45 = v14;
    BN_CTX_end(v7);
    BN_CTX_free((void **)v7);
    return v45;
  }
  else
  {
    ERR_put_error(4, 129, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_none  (binary VA: 0x1a26790)
// Original: RSA_padding_add_none
// ----------------------------------------------------------------------------
int RSA_padding_add_none(void *dest, int a2, void *src, int n)
{
  if ( n > a2 )
  {
    ERR_put_error(4, 107, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else if ( n < a2 )
  {
    ERR_put_error(4, 107, 122, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    memcpy(dest, src, n);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_check_none  (binary VA: 0x1a26840)
// Original: RSA_padding_check_none
// ----------------------------------------------------------------------------
int RSA_padding_check_none(char *s, int a2, void *src, int n)
{
  int v4;

  v4 = a2;
  if ( n > a2 )
  {
    v4 = -1;
    ERR_put_error(4, 111, 109, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    memset(s, 0, a2 - n);
    memcpy(&s[a2 - n], src, n);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: PKCS1_MGF1  (binary VA: 0x1a26900)
// Original: PKCS1_MGF1
// ----------------------------------------------------------------------------
int PKCS1_MGF1(int a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef void *_g4_t_v10[6];
  typedef uint8_t _g4_t_src[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_src)) > _g4_s4 ? (48u + sizeof(_g4_t_src)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 48u);

  EVP_MD_CTX_init(v10);
  v8 = EVP_MD_size((int)(uintptr_t)(a5));
  if ( v8 < 0 )
    return -1;
  if ( a2 > 0 )
  {
    v7 = 0;
    v5 = 0;
    while ( 1 )
    {
      v9[0] = HIBYTE(v5);
      v9[1] = BYTE2(v5);
      v9[2] = BYTE1(v5);
      v9[3] = v5;
      EVP_DigestInit_ex((int)(uintptr_t)(v10), a5, nullptr);
      EVP_DigestUpdate((int)(uintptr_t)(v10), a3, a4);
      EVP_DigestUpdate((int)(uintptr_t)(v10), (int)(uintptr_t)(v9), 4);
      if ( a2 < v8 + v7 )
        break;
      ++v5;
      EVP_DigestFinal_ex(v10, v7 + a1, nullptr);
      if ( a2 <= v8 + v7 )
        goto LABEL_8;
      v7 += v8;
    }
    EVP_DigestFinal_ex(v10, (int)(uintptr_t)(src), nullptr);
    memcpy((void *)(v7 + a1), src, a2 - v7);
  }
LABEL_8:
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v10));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_check_PKCS1_OAEP  (binary VA: 0x1a26a80)
// Original: RSA_padding_check_PKCS1_OAEP
// ----------------------------------------------------------------------------
size_t RSA_padding_check_PKCS1_OAEP(void *dest, int a2, void *src, size_t a4, int a5, int a6, int a7)
{
  size_t v7;
  int v8;
  size_t v9;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;
  uint32_t *v13;
  int i;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v19;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v21;
  typedef uint8_t *_g4_t_s1;
  typedef size_t _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[20];
  typedef uint8_t _g4_t_s2[48];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v21)) > _g4_s1 ? (44u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_s1)) > _g4_s2 ? (48u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v23)) > _g4_s3 ? (52u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v24)) > _g4_s4 ? (60u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v25)) > _g4_s5 ? (72u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_s2)) > _g4_s6 ? (92u + sizeof(_g4_t_s2)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 92u);

  v7 = a4;
  v8 = a5 - 1;
  if ( a5 - 1 <= 40 )
  {
    ERR_put_error(4, 122, 121, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  else
  {
    v9 = v8 - a4;
    if ( (int)(v8 - a4) < 0 )
    {
      v7 = a5 - 1;
      v24 = 1;
      v9 = 0;
    }
    else
    {
      v24 = 0;
    }
    v21 = a5 - 21;
    v10 = CRYPTO_malloc(a5 - 21 + a5 - 1, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v10 != nullptr )
    {
      v11 = &v10[v21];
      n = v9;
      v12 = &v10[v21 + v9];
      s1 = v10;
      memset(&v10[v21], 0, n);
      memcpy(v12, src, v7);
      v13 = (uint32_t *)(EVP_sha1());
      v23 = 0xFFFFFFFF;
      if ( PKCS1_MGF1((int)(uintptr_t)(v25), 20, (int)(uintptr_t)(v11 + 20), v21, v13) == 0 )
      {
        for ( i = 0; i != 20; ++i )
          v25[i] ^= v11[i];
        v15 = (uint32_t *)(EVP_sha1());
        v16 = PKCS1_MGF1((int)(uintptr_t)(s1), v21, (int)(uintptr_t)(v25), 20, v15);
        v23 = 0xFFFFFFFF;
        if ( v16 == 0 )
        {
          do
          {
            s1[v16] ^= v11[v16 + 20];
            ++v16;
          }
          while ( v21 > v16 );
          v17 = (uint32_t *)(EVP_sha1());
          EVP_Digest(a6, a7, (int)(uintptr_t)(s2), nullptr, v17, nullptr);
          if ( (v24 | memcmp(s1, s2, 0x14u)) != 0 )
            goto LABEL_11;
          do
          {
            if ( s1[i] != 0 )
              break;
            ++i;
          }
          while ( v21 > i );
          if ( i == v21 || s1[i] != 1 )
          {
LABEL_11:
            ERR_put_error(4, 122, 121, (int)(uintptr_t)(&unk_1B15112), 0);
            CRYPTO_free(s1);
            return -1;
          }
          else
          {
            v19 = i + 1;
            v23 = v21 - v19;
            if ( v21 - v19 > a2 )
            {
              ERR_put_error(4, 122, 109, (int)(uintptr_t)(&unk_1B15112), 0);
              v23 = 0xFFFFFFFF;
            }
            else
            {
              memcpy(dest, &s1[v19], v23);
            }
            CRYPTO_free(s1);
          }
        }
      }
    }
    else
    {
      ERR_put_error(4, 122, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
    return v23;
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_PKCS1_OAEP  (binary VA: 0x1a26de0)
// Original: RSA_padding_add_PKCS1_OAEP
// ----------------------------------------------------------------------------
int RSA_padding_add_PKCS1_OAEP(uint8_t *a1, int a2, void *src, int n, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint8_t *v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int i;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[48];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  if ( a2 - 41 <= n )
  {
    ERR_put_error(4, 121, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a2 - 1 <= 40 )
  {
    ERR_put_error(4, 121, 120, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  *a1 = 0;
  v6 = (uint32_t *)(EVP_sha1());
  v7 = a2 - 21;
  EVP_Digest(a5, a6, (int)(uintptr_t)(a1 + 21), nullptr, v6, nullptr);
  v14 = a2 - 1 - n;
  memset(a1 + 41, 0, v14 - 41);
  a1[v14] = 1;
  memcpy(&a1[a2 - n], src, n);
  if ( RAND_bytes((int)(uintptr_t)(a1 + 1), 20) <= 0 )
    return 0;
  v8 = CRYPTO_malloc(v7, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v8 == nullptr )
  {
    ERR_put_error(4, 121, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v9 = (uint32_t *)(EVP_sha1());
  if ( PKCS1_MGF1((int)(uintptr_t)(v8), v7, (int)(uintptr_t)(a1 + 1), 20, v9) < 0 )
    return 0;
  v10 = 0;
  do
  {
    a1[v10 + 21] ^= v8[v10];
    ++v10;
  }
  while ( v7 > v10 );
  v11 = (uint32_t *)(EVP_sha1());
  if ( PKCS1_MGF1((int)(uintptr_t)(v15), 20, (int)(uintptr_t)(a1 + 21), v7, v11) < 0 )
    return 0;
  for ( i = 0; i != 20; ++i )
    a1[i + 1] ^= v15[i];
  CRYPTO_free(v8);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_PKCS1_type_1  (binary VA: 0x1a27070)
// Original: RSA_padding_add_PKCS1_type_1
// ----------------------------------------------------------------------------
int RSA_padding_add_PKCS1_type_1(uint8_t *a1, int a2, void *src, int a4)
{
  size_t n;
  uint8_t *v5;

  if ( a2 - 10 <= a4 )
  {
    ERR_put_error(4, 108, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    *a1 = 0;
    a1[1] = 1;
    n = a2 - 3 - a4;
    memset(a1 + 2, 255, n);
    v5 = &a1[n + 2];
    *v5 = 0;
    memcpy(v5 + 1, src, a4);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_check_PKCS1_type_1  (binary VA: 0x1a27140)
// Original: RSA_padding_check_PKCS1_type_1
// ----------------------------------------------------------------------------
int RSA_padding_check_PKCS1_type_1(void *dest, int a2, uint8_t *a3, int a4, int a5)
{
  int v5;
  char *src;
  char v7;
  int v8;
  signed int n;

  if ( a4 + 1 == a5 && *a3 == 1 )
  {
    v5 = a4 - 1;
    src = (char *)(a3 + 1);
    if ( a4 - 1 <= 0 )
    {
      v8 = 0;
    }
    else
    {
      v7 = a3[1];
      v8 = 0;
      if ( v7 != -1 )
      {
LABEL_13:
        if ( v7 == 0 )
        {
          ++src;
LABEL_9:
          if ( v8 <= 7 )
          {
            n = -1;
            ERR_put_error(4, 112, 103, (int)(uintptr_t)(&unk_1B15112), 0);
          }
          else
          {
            n = v5 - (v8 + 1);
            if ( n > a2 )
            {
              n = -1;
              ERR_put_error(4, 112, 109, (int)(uintptr_t)(&unk_1B15112), 0);
            }
            else
            {
              memcpy(dest, src, n);
            }
          }
          return n;
        }
        n = -1;
        ERR_put_error(4, 112, 102, (int)(uintptr_t)(&unk_1B15112), 0);
        return n;
      }
      while ( 1 )
      {
        ++v8;
        ++src;
        if ( v5 <= v8 )
          break;
        v7 = *src;
        if ( *src != -1 )
          goto LABEL_13;
      }
    }
    if ( v8 != v5 )
      goto LABEL_9;
    n = -1;
    ERR_put_error(4, 112, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    return n;
  }
  ERR_put_error(4, 112, 106, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_PKCS1_type_2  (binary VA: 0x1a27310)
// Original: RSA_padding_add_PKCS1_type_2
// ----------------------------------------------------------------------------
int RSA_padding_add_PKCS1_type_2(uint8_t *a1, int a2, void *src, int n)
{
  uint8_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( a2 - 10 <= n )
  {
    ERR_put_error(4, 109, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  *a1 = 0;
  a1[1] = 2;
  v4 = a1 + 2;
  v5 = a2 - 3 - n;
  v6 = RAND_bytes((int)(uintptr_t)(a1 + 2), v5);
  v7 = 0;
  if ( v6 <= 0 )
    return v7;
  if ( v5 <= 0 )
  {
LABEL_8:
    *v4 = 0;
    memcpy(v4 + 1, src, n);
    return 1;
  }
  v8 = 0;
  do
  {
    while ( *v4 != 0 )
    {
      ++v8;
      ++v4;
      if ( v8 == v5 )
        goto LABEL_8;
    }
  }
  while ( RAND_bytes((int)(uintptr_t)(v4), 1) > 0 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_check_PKCS1_type_2  (binary VA: 0x1a27410)
// Original: RSA_padding_check_PKCS1_type_2
// ----------------------------------------------------------------------------
int RSA_padding_check_PKCS1_type_2(void *dest, int a2, uint8_t *a3, int a4, int a5)
{
  int v5;
  char *src;
  int v7;
  char v8;
  signed int n;

  if ( a4 + 1 == a5 && *a3 == 2 )
  {
    v5 = a4 - 1;
    if ( a4 - 1 <= 0 )
    {
      src = (char *)(a3 + 1);
      v7 = 0;
    }
    else
    {
      src = (char *)(a3 + 2);
      if ( a3[1] == 0 )
        goto LABEL_17;
      v7 = 0;
      while ( v5 > ++v7 )
      {
        v8 = *src++;
        if ( v8 == 0 )
          goto LABEL_9;
      }
    }
    if ( v7 == v5 )
    {
      n = -1;
      ERR_put_error(4, 113, 113, (int)(uintptr_t)(&unk_1B15112), 0);
      return n;
    }
LABEL_9:
    if ( v7 > 7 )
    {
      n = v5 - (v7 + 1);
      if ( n > a2 )
      {
        n = -1;
        ERR_put_error(4, 113, 109, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        memcpy(dest, src, n);
      }
      return n;
    }
LABEL_17:
    n = -1;
    ERR_put_error(4, 113, 103, (int)(uintptr_t)(&unk_1B15112), 0);
    return n;
  }
  ERR_put_error(4, 113, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_SSLv23  (binary VA: 0x1a275a0)
// Original: RSA_padding_add_SSLv23
// ----------------------------------------------------------------------------
int RSA_padding_add_SSLv23(uint8_t *a1, int a2, void *src, int n)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( a2 - 10 <= n )
  {
    ERR_put_error(4, 110, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  *a1 = 0;
  a1[1] = 2;
  v4 = (int)(uintptr_t)(a1 + 2);
  v5 = a2 - 11 - n;
  v6 = RAND_bytes((int)(uintptr_t)(a1 + 2), v5);
  v7 = 0;
  if ( v6 <= 0 )
    return v7;
  if ( v5 <= 0 )
  {
LABEL_8:
    *(uint32_t *)v4 = 50529027;
    *(uint32_t *)(v4 + 4) = 50529027;
    *(uint8_t *)(v4 + 8) = 0;
    memcpy((void *)(v4 + 9), src, n);
    return 1;
  }
  v8 = 0;
  do
  {
    while ( *(uint8_t *)v4 != 0 )
    {
      ++v8;
      ++v4;
      if ( v8 == v5 )
        goto LABEL_8;
    }
  }
  while ( RAND_bytes(v4, 1) > 0 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_check_SSLv23  (binary VA: 0x1a276b0)
// Original: RSA_padding_check_SSLv23
// ----------------------------------------------------------------------------
int RSA_padding_check_SSLv23(void *dest, int a2, uint8_t *a3, int a4, int a5)
{
  char *src;
  int v6;
  int v7;
  char v8;
  int v9;
  signed int n;

  if ( a4 <= 9 )
  {
    ERR_put_error(4, 114, 111, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  if ( a4 + 1 == a5 && *a3 == 2 )
  {
    src = (char *)(a3 + 1);
    v6 = a4 - 1;
    v7 = 0;
    do
    {
      v8 = *src++;
      if ( v8 == 0 )
        break;
      ++v7;
    }
    while ( v6 > v7 );
    if ( v7 <= 7 || v7 == v6 )
    {
      ERR_put_error(4, 114, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      v9 = -9;
      while ( src[v9] == 3 )
      {
        if ( ++v9 == -1 )
        {
          ERR_put_error(4, 114, 115, (int)(uintptr_t)(&unk_1B15112), 0);
          return -1;
        }
      }
      n = v6 - (v7 + 1);
      if ( n <= a2 )
      {
        memcpy(dest, src, n);
        return n;
      }
      ERR_put_error(4, 114, 109, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    return -1;
  }
  ERR_put_error(4, 114, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_hash_dir  (binary VA: 0x1a2bbc0)
// Original: X509_LOOKUP_hash_dir
// ----------------------------------------------------------------------------
char ** X509_LOOKUP_hash_dir()
{
  return (char **)(&x509_dir_lookup);
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_file  (binary VA: 0x1a2bbe0)
// Original: X509_LOOKUP_file
// ----------------------------------------------------------------------------
char ** X509_LOOKUP_file()
{
  return (char **)(&x509_file_lookup);
}

// ----------------------------------------------------------------------------
// Function: X509_load_cert_file  (binary VA: 0x1a2bc00)
// Original: X509_load_cert_file
// ----------------------------------------------------------------------------
int X509_load_cert_file(int a1, int a2, int a3)
{
  int i;
  void *v4;
  uint8_t *v5;
  uint32_t *v6;
  int bio_X509_AUX;
  char v9; // bp
  int v10;

  i = 1;
  if ( a2 != 0 )
  {
    v4 = BIO_s_file();
    v5 = BIO_new((int)(uintptr_t)(v4));
    v6 = (uint32_t *)(v5);
    if ( v5 != nullptr && BIO_ctrl(v5, 108, 3, a2) > 0 )
    {
      if ( a3 == 1 )
      {
        for ( i = 0; ; ++i )
        {
          bio_X509_AUX = PEM_read_bio_X509_AUX(v6, 0, nullptr, nullptr);
          v9 = bio_X509_AUX;
          if ( bio_X509_AUX == 0 )
            break;
          if ( X509_STORE_add_cert(*(uint32_t *)(a1 + 16), bio_X509_AUX) == 0 )
          {
            i = 0;
            goto LABEL_19;
          }
          X509_free(v9);
        }
        if ( (ERR_peek_last_error() & 0xFFF) == 0x6C && i != 0 )
        {
          ERR_clear_error();
        }
        else
        {
          i = 0;
          ERR_put_error(11, 111, 9, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
      else if ( a3 == 2 )
      {
        v10 = d2i_X509_bio((int)(uintptr_t)(v6), 0);
        v9 = v10;
        if ( v10 != 0 )
        {
          i = X509_STORE_add_cert(*(uint32_t *)(a1 + 16), v10);
LABEL_19:
          X509_free(v9);
          goto LABEL_8;
        }
        i = 0;
        ERR_put_error(11, 111, 13, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        i = 0;
        ERR_put_error(11, 111, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      i = 0;
      ERR_put_error(11, 111, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    if ( v6 != nullptr )
LABEL_8:
      BIO_free(v6);
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: X509_load_crl_file  (binary VA: 0x1a2be30)
// Original: X509_load_crl_file
// ----------------------------------------------------------------------------
int X509_load_crl_file(int a1, int a2, int a3)
{
  int i;
  void *v4;
  uint8_t *v5;
  uint32_t *v6;
  int bio_X509_CRL;
  char v9; // bp
  int v10;

  i = 1;
  if ( a2 != 0 )
  {
    v4 = BIO_s_file();
    v5 = BIO_new((int)(uintptr_t)(v4));
    v6 = (uint32_t *)(v5);
    if ( v5 != nullptr && BIO_ctrl(v5, 108, 3, a2) > 0 )
    {
      if ( a3 == 1 )
      {
        for ( i = 0; ; ++i )
        {
          bio_X509_CRL = PEM_read_bio_X509_CRL((int)(uintptr_t)(v6), 0, 0, nullptr);
          v9 = bio_X509_CRL;
          if ( bio_X509_CRL == 0 )
            break;
          if ( X509_STORE_add_crl(*(uint32_t *)(a1 + 16), bio_X509_CRL) == 0 )
          {
            i = 0;
            goto LABEL_19;
          }
          X509_CRL_free(v9);
        }
        if ( (ERR_peek_last_error() & 0xFFF) == 0x6C && i != 0 )
        {
          ERR_clear_error();
        }
        else
        {
          i = 0;
          ERR_put_error(11, 112, 9, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
      else if ( a3 == 2 )
      {
        v10 = d2i_X509_CRL_bio((int)(uintptr_t)(v6), 0);
        v9 = v10;
        if ( v10 != 0 )
        {
          i = X509_STORE_add_crl(*(uint32_t *)(a1 + 16), v10);
LABEL_19:
          X509_CRL_free(v9);
          goto LABEL_8;
        }
        i = 0;
        ERR_put_error(11, 112, 13, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        i = 0;
        ERR_put_error(11, 112, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      i = 0;
      ERR_put_error(11, 112, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    if ( v6 != nullptr )
LABEL_8:
      BIO_free(v6);
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: X509_load_cert_crl_file  (binary VA: 0x1a2c060)
// Original: X509_load_cert_crl_file
// ----------------------------------------------------------------------------
int X509_load_cert_crl_file(int a1, char *a2, int a3)
{
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int *v8;
  int *bio;

  if ( a3 != 1 )
    return X509_load_cert_file(a1, (int)(uintptr_t)(a2), a3);
  v5 = BIO_new_file(a2, "r");
  v6 = v5;
  if ( v5 == nullptr )
  {
    v3 = 0;
    ERR_put_error(11, 132, 2, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3;
  }
  bio = (int *)PEM_X509_INFO_read_bio((int)(uintptr_t)(v5), 0, 0, nullptr);
  BIO_free(v6);
  v3 = 0;
  v7 = 0;
  if ( bio == nullptr )
  {
    ERR_put_error(11, 132, 9, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3;
  }
  while ( v7 < sk_num((int)(uintptr_t)(bio)) )
  {
    v8 = (int *)sk_value(bio, v7);
    if ( *v8 != 0 )
    {
      ++v3;
      X509_STORE_add_cert(*(uint32_t *)(a1 + 16), *v8);
    }
    if ( v8[1] != 0 )
    {
      ++v3;
      X509_STORE_add_crl(*(uint32_t *)(a1 + 16), v8[1]);
    }
    ++v7;
  }
  sk_pop_free((void **)bio, (void (*)(uint32_t))X509_INFO_free);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_ext_count  (binary VA: 0x1a2c320)
// Original: X509_CRL_get_ext_count
// ----------------------------------------------------------------------------
int X509_CRL_get_ext_count(int a1)
{
  return X509v3_get_ext_count(*(uint32_t *)(*(uint32_t *)a1 + 24));
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_ext_by_NID  (binary VA: 0x1a2c350)
// Original: X509_CRL_get_ext_by_NID
// ----------------------------------------------------------------------------
int X509_CRL_get_ext_by_NID(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_NID(*(uint32_t *)(*(uint32_t *)a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_ext_by_OBJ  (binary VA: 0x1a2c390)
// Original: X509_CRL_get_ext_by_OBJ
// ----------------------------------------------------------------------------
int X509_CRL_get_ext_by_OBJ(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_OBJ(*(uint32_t *)(*(uint32_t *)a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_ext_by_critical  (binary VA: 0x1a2c3d0)
// Original: X509_CRL_get_ext_by_critical
// ----------------------------------------------------------------------------
int X509_CRL_get_ext_by_critical(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_critical(*(uint32_t *)(*(uint32_t *)a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_ext  (binary VA: 0x1a2c410)
// Original: X509_CRL_get_ext
// ----------------------------------------------------------------------------
int X509_CRL_get_ext(int a1, int a2)
{
  return X509v3_get_ext(*(uint32_t *)(*(uint32_t *)a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_delete_ext  (binary VA: 0x1a2c440)
// Original: X509_CRL_delete_ext
// ----------------------------------------------------------------------------
int X509_CRL_delete_ext(int a1, int a2)
{
  return X509v3_delete_ext(*(uint32_t *)(*(uint32_t *)a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_get_ext_d2i  (binary VA: 0x1a2c470)
// Original: X509_CRL_get_ext_d2i
// ----------------------------------------------------------------------------
int X509_CRL_get_ext_d2i(int a1, int a2, int a3, int a4)
{
  return X509V3_get_d2i(*(uint32_t *)(*(uint32_t *)a1 + 24), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_add1_ext_i2d  (binary VA: 0x1a2c4b0)
// Original: X509_CRL_add1_ext_i2d
// ----------------------------------------------------------------------------
int X509_CRL_add1_ext_i2d(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  return X509V3_add1_i2d(*a1 + 24, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_add_ext  (binary VA: 0x1a2c500)
// Original: X509_CRL_add_ext
// ----------------------------------------------------------------------------
bool X509_CRL_add_ext(uint32_t *a1, int a2, int a3)
{
  return X509v3_add_ext(*a1 + 24, a2, a3) != 0;
}

// ----------------------------------------------------------------------------
// Function: X509_get_ext_count  (binary VA: 0x1a2c540)
// Original: X509_get_ext_count
// ----------------------------------------------------------------------------
int X509_get_ext_count(int a1)
{
  return X509v3_get_ext_count(*(uint32_t *)(*(uint32_t *)a1 + 36));
}

// ----------------------------------------------------------------------------
// Function: X509_get_ext_by_NID  (binary VA: 0x1a2c570)
// Original: X509_get_ext_by_NID
// ----------------------------------------------------------------------------
int X509_get_ext_by_NID(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_NID(*(uint32_t *)(*(uint32_t *)a1 + 36), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_get_ext_by_OBJ  (binary VA: 0x1a2c5b0)
// Original: X509_get_ext_by_OBJ
// ----------------------------------------------------------------------------
int X509_get_ext_by_OBJ(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_OBJ(*(uint32_t *)(*(uint32_t *)a1 + 36), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_get_ext_by_critical  (binary VA: 0x1a2c5f0)
// Original: X509_get_ext_by_critical
// ----------------------------------------------------------------------------
int X509_get_ext_by_critical(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_critical(*(uint32_t *)(*(uint32_t *)a1 + 36), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_get_ext  (binary VA: 0x1a2c630)
// Original: X509_get_ext
// ----------------------------------------------------------------------------
int X509_get_ext(int a1, int a2)
{
  return X509v3_get_ext(*(uint32_t *)(*(uint32_t *)a1 + 36), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_delete_ext  (binary VA: 0x1a2c660)
// Original: X509_delete_ext
// ----------------------------------------------------------------------------
int X509_delete_ext(int a1, int a2)
{
  return X509v3_delete_ext(*(uint32_t *)(*(uint32_t *)a1 + 36), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_add_ext  (binary VA: 0x1a2c690)
// Original: X509_add_ext
// ----------------------------------------------------------------------------
bool X509_add_ext(uint32_t *a1, int a2, int a3)
{
  return X509v3_add_ext(*a1 + 36, a2, a3) != 0;
}

// ----------------------------------------------------------------------------
// Function: X509_get_ext_d2i  (binary VA: 0x1a2c6d0)
// Original: X509_get_ext_d2i
// ----------------------------------------------------------------------------
int X509_get_ext_d2i(int a1, int a2, int a3, int a4)
{
  return X509V3_get_d2i(*(uint32_t *)(*(uint32_t *)a1 + 36), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509_add1_ext_i2d  (binary VA: 0x1a2c710)
// Original: X509_add1_ext_i2d
// ----------------------------------------------------------------------------
int X509_add1_ext_i2d(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  return X509V3_add1_i2d(*a1 + 36, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_get_ext_count  (binary VA: 0x1a2c760)
// Original: X509_REVOKED_get_ext_count
// ----------------------------------------------------------------------------
int X509_REVOKED_get_ext_count(int a1)
{
  return X509v3_get_ext_count(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_get_ext_by_NID  (binary VA: 0x1a2c790)
// Original: X509_REVOKED_get_ext_by_NID
// ----------------------------------------------------------------------------
int X509_REVOKED_get_ext_by_NID(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_NID(*(uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_get_ext_by_OBJ  (binary VA: 0x1a2c7d0)
// Original: X509_REVOKED_get_ext_by_OBJ
// ----------------------------------------------------------------------------
int X509_REVOKED_get_ext_by_OBJ(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_OBJ(*(uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_get_ext_by_critical  (binary VA: 0x1a2c810)
// Original: X509_REVOKED_get_ext_by_critical
// ----------------------------------------------------------------------------
int X509_REVOKED_get_ext_by_critical(int a1, int a2, int a3)
{
  return X509v3_get_ext_by_critical(*(uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_get_ext  (binary VA: 0x1a2c850)
// Original: X509_REVOKED_get_ext
// ----------------------------------------------------------------------------
int X509_REVOKED_get_ext(int a1, int a2)
{
  return X509v3_get_ext(*(uint32_t *)(a1 + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_delete_ext  (binary VA: 0x1a2c880)
// Original: X509_REVOKED_delete_ext
// ----------------------------------------------------------------------------
int X509_REVOKED_delete_ext(int a1, int a2)
{
  return X509v3_delete_ext(*(uint32_t *)(a1 + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_add_ext  (binary VA: 0x1a2c8b0)
// Original: X509_REVOKED_add_ext
// ----------------------------------------------------------------------------
bool X509_REVOKED_add_ext(int a1, int a2, int a3)
{
  return X509v3_add_ext(a1 + 8, a2, a3) != 0;
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_get_ext_d2i  (binary VA: 0x1a2c8f0)
// Original: X509_REVOKED_get_ext_d2i
// ----------------------------------------------------------------------------
int X509_REVOKED_get_ext_d2i(int a1, int a2, int a3, int a4)
{
  return X509V3_get_d2i(*(uint32_t *)(a1 + 8), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509_REVOKED_add1_ext_i2d  (binary VA: 0x1a2c930)
// Original: X509_REVOKED_add1_ext_i2d
// ----------------------------------------------------------------------------
int X509_REVOKED_add1_ext_i2d(int a1, int a2, int a3, int a4, int a5)
{
  return X509V3_add1_i2d(a1 + 8, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: X509_to_X509_REQ  (binary VA: 0x1a2c980)
// Original: X509_to_X509_REQ
// ----------------------------------------------------------------------------
uint32_t * X509_to_X509_REQ(int a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint8_t *v6;
  int subject_name;
  void *pubkey;
  int v9;
  char v11;
  int v12;

  v3 = X509_REQ_new();
  v4 = (uint32_t *)v3;
  if ( v3 == 0 )
  {
    ERR_put_error(11, 126, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
    v11 = (char)(uintptr_t)(v4);
    v4 = nullptr;
    X509_REQ_free(v11);
    return v4;
  }
  v5 = *(uint32_t *)v3;
  **(uint32_t **)(*(uint32_t *)v3 + 12) = 1;
  v12 = *(uint32_t *)(v5 + 12);
  *(uint32_t *)(v12 + 8) = (uint32_t)(uintptr_t)(CRYPTO_malloc(1, (int)(uintptr_t)(&unk_1B15112), 0));
  v6 = *(uint8_t **)(*(uint32_t *)(v5 + 12) + 8);
  if ( v6 == nullptr )
    goto LABEL_9;
  *v6 = 0;
  subject_name = X509_get_subject_name(a1);
  if ( X509_REQ_set_subject_name(v4, subject_name) == 0 )
    goto LABEL_9;
  pubkey = (void *)X509_get_pubkey(a1);
  v9 = X509_REQ_set_pubkey(v4, pubkey);
  EVP_PKEY_free(pubkey);
  if ( v9 == 0 || a2 != 0 && X509_REQ_sign(v4, a2, a3) == 0 )
    goto LABEL_9;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_pubkey  (binary VA: 0x1a2cac0)
// Original: X509_REQ_get_pubkey
// ----------------------------------------------------------------------------
char * X509_REQ_get_pubkey(int a1)
{
  char *result;

  if ( a1 == 0 )
    return nullptr;
  result = nullptr;
  if ( *(uint32_t *)a1 != 0 )
    return X509_PUBKEY_get(*(uint32_t *)(*(uint32_t *)a1 + 20));
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_check_private_key  (binary VA: 0x1a2cb00)
// Original: X509_REQ_check_private_key
// ----------------------------------------------------------------------------
int X509_REQ_check_private_key(int a1, uint32_t *a2)
{
  char *pubkey;
  int v3;
  int v4;

  pubkey = X509_REQ_get_pubkey(a1);
  v3 = EVP_PKEY_cmp(pubkey, a2);
  if ( v3 == -1 )
  {
    v4 = 0;
    ERR_put_error(11, 144, 115, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_5;
  }
  if ( v3 > -1 )
  {
    if ( v3 == 0 )
    {
      v4 = 0;
      ERR_put_error(11, 144, 116, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_5;
    }
    v4 = 1;
    if ( v3 == 1 )
      goto LABEL_5;
LABEL_7:
    v4 = 0;
    goto LABEL_5;
  }
  if ( v3 != -2 )
    goto LABEL_7;
  if ( *a2 == 408 )
  {
    v4 = 0;
    ERR_put_error(11, 144, 16, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v4 = 0;
    if ( *a2 == 28 )
      ERR_put_error(11, 144, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    else
      ERR_put_error(11, 144, 117, (int)(uintptr_t)(&unk_1B15112), 0);
  }
LABEL_5:
  EVP_PKEY_free(pubkey);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_extension_nid  (binary VA: 0x1a2cc80)
// Original: X509_REQ_extension_nid
// ----------------------------------------------------------------------------
char X509_REQ_extension_nid(int a1)
{
  char result;
  uint32_t *v2;
  int v3;

  result = 0;
  if ( *(uint32_t *)off_20CF8D4 != 0 )
  {
    result = 1;
    if ( a1 != *(uint32_t *)off_20CF8D4 )
    {
      v2 = (uint32_t *)(uintptr_t)(off_20CF8D4);
      do
      {
        v3 = v2[1];
        if ( v3 == 0 )
          return 0;
        ++v2;
      }
      while ( a1 != v3 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_extension_nids  (binary VA: 0x1a2ccd0)
// Original: X509_REQ_get_extension_nids
// ----------------------------------------------------------------------------
void * X509_REQ_get_extension_nids()
{
  return (void *)(uintptr_t)(off_20CF8D4);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_set_extension_nids  (binary VA: 0x1a2ccf0)
// Original: X509_REQ_set_extension_nids
// ----------------------------------------------------------------------------
void * X509_REQ_set_extension_nids(void *a1)
{
  off_20CF8D4 = (uint32_t)(uintptr_t)(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_add_extensions_nid  (binary VA: 0x1a2cd10)
// Original: X509_REQ_add_extensions_nid
// ----------------------------------------------------------------------------
int X509_REQ_add_extensions_nid(int *a1, int a2, unsigned int a3)
{
  uint32_t *v3;
  void **v4;
  char ***v5;
  int *v6;
  int result;
  int v8;
  int *v9;
  int v10;
  uint32_t *v11;

  v3 = (uint32_t *)ASN1_TYPE_new();
  if ( v3 == nullptr || (v4 = (void **)ASN1_STRING_new(), v3[1] = (uint32_t)(uintptr_t)(v4), v4 == nullptr) )
  {
    LOBYTE(v5) = 0;
LABEL_6:
    X509_ATTRIBUTE_free((char)(uintptr_t)(v5));
    ASN1_TYPE_free((char)(uintptr_t)(v3));
    return 0;
  }
  *v3 = 16;
  *v4 = (void *)ASN1_item_i2d(a2, v4 + 2, (int)(uintptr_t)(&X509_EXTENSIONS_it));
  v5 = (char ***)X509_ATTRIBUTE_new();
  if ( v5 == nullptr )
    goto LABEL_6;
  v6 = (int *)(sk_new_null());
  v5[2] = (char **)v6;
  if ( v6 == nullptr || sk_push(v6, (int)(uintptr_t)(v3)) == 0 )
    goto LABEL_6;
  v5[1] = nullptr;
  *v5 = OBJ_nid2obj(a3);
  v8 = *a1;
  v9 = *(int **)(*a1 + 24);
  if ( v9 == nullptr )
  {
    v11 = sk_new_null();
    *(uint32_t *)(v8 + 24) = (uint32_t)(uintptr_t)(v11);
    if ( v11 == nullptr )
      goto LABEL_11;
    v9 = *(int **)(*a1 + 24);
  }
  v10 = sk_push(v9, (int)(uintptr_t)(v5));
  result = 1;
  if ( v10 == 0 )
  {
LABEL_11:
    LOBYTE(v3) = 0;
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_add_extensions  (binary VA: 0x1a2ce30)
// Original: X509_REQ_add_extensions
// ----------------------------------------------------------------------------
int X509_REQ_add_extensions(int *a1, int a2)
{
  return X509_REQ_add_extensions_nid(a1, a2, 0xACu);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_attr_count  (binary VA: 0x1a2ce70)
// Original: X509_REQ_get_attr_count
// ----------------------------------------------------------------------------
int X509_REQ_get_attr_count(int a1)
{
  return X509at_get_attr_count(*(uint32_t *)(*(uint32_t *)a1 + 24));
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_attr_by_NID  (binary VA: 0x1a2cea0)
// Original: X509_REQ_get_attr_by_NID
// ----------------------------------------------------------------------------
int X509_REQ_get_attr_by_NID(int a1, unsigned int a2, int a3)
{
  return X509at_get_attr_by_NID(*(int **)(*(uint32_t *)a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_attr_by_OBJ  (binary VA: 0x1a2cee0)
// Original: X509_REQ_get_attr_by_OBJ
// ----------------------------------------------------------------------------
int X509_REQ_get_attr_by_OBJ(int a1, int a2, int a3)
{
  return X509at_get_attr_by_OBJ(*(int **)(*(uint32_t *)a1 + 24), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_attr  (binary VA: 0x1a2cf20)
// Original: X509_REQ_get_attr
// ----------------------------------------------------------------------------
int X509_REQ_get_attr(int a1, int a2)
{
  return X509at_get_attr(*(int **)(*(uint32_t *)a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get_extensions  (binary VA: 0x1a2cf50)
// Original: X509_REQ_get_extensions
// ----------------------------------------------------------------------------
int X509_REQ_get_extensions(uint32_t *a1)
{
  unsigned int *v1;
  unsigned int v2;
  int result;
  int attr_by_NID;
  int attr;
  int v6;
  uint32_t *v7;
  int *v8;
  int v9;
  typedef char *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  if ( a1 == nullptr )
    return 0;
  if ( *a1 == 0 )
    return 0;
  v1 = (unsigned int *)off_20CF8D4;
  if ( off_20CF8D4 == 0 )
    return 0;
  v2 = *(uint32_t *)off_20CF8D4;
  result = 0;
  if ( *(uint32_t *)off_20CF8D4 == 0 )
    return result;
  while ( 1 )
  {
    attr_by_NID = X509_REQ_get_attr_by_NID((int)(uintptr_t)(a1), v2, -1);
    if ( attr_by_NID != -1 )
      break;
    v2 = *++v1;
    if ( *v1 == 0 )
      return 0;
  }
  attr = X509_REQ_get_attr((int)(uintptr_t)(a1), attr_by_NID);
  v6 = attr;
  if ( *(uint32_t *)(attr + 4) != 0 )
  {
    v7 = *(uint32_t **)(attr + 8);
  }
  else
  {
    v9 = sk_num(*(uint32_t *)(attr + 8));
    result = 0;
    if ( v9 == 0 )
      return result;
    v7 = (uint32_t *)sk_value(*(int **)(v6 + 8), 0);
  }
  result = 0;
  if ( v7 != nullptr && *v7 == 16 )
  {
    v8 = (int *)v7[1];
    v10 = (char *)v8[2];
    return ASN1_item_d2i(nullptr, &v10, *v8, (int)(uintptr_t)(&X509_EXTENSIONS_it));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_delete_attr  (binary VA: 0x1a2d040)
// Original: X509_REQ_delete_attr
// ----------------------------------------------------------------------------
int X509_REQ_delete_attr(int a1, int a2)
{
  return X509at_delete_attr(*(int **)(*(uint32_t *)a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_add1_attr  (binary VA: 0x1a2d070)
// Original: X509_REQ_add1_attr
// ----------------------------------------------------------------------------
bool X509_REQ_add1_attr(int a1, int a2)
{
  return X509at_add1_attr((int **)(*(uint32_t *)a1 + 24), a2) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_add1_attr_by_OBJ  (binary VA: 0x1a2d0b0)
// Original: X509_REQ_add1_attr_by_OBJ
// ----------------------------------------------------------------------------
bool X509_REQ_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_OBJ((int **)(*(uint32_t *)a1 + 24), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_add1_attr_by_NID  (binary VA: 0x1a2d100)
// Original: X509_REQ_add1_attr_by_NID
// ----------------------------------------------------------------------------
bool X509_REQ_add1_attr_by_NID(int a1, unsigned int a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_NID((int **)(*(uint32_t *)a1 + 24), a2, a3, a4, a5) != nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_add1_attr_by_txt  (binary VA: 0x1a2d150)
// Original: X509_REQ_add1_attr_by_txt
// ----------------------------------------------------------------------------
bool X509_REQ_add1_attr_by_txt(int a1, char *a2, int a3, char *a4, size_t a5)
{
  return X509at_add1_attr_by_txt((int **)(*(uint32_t *)a1 + 24), a2, a3, a4, a5) != nullptr;
}



// ============================================================================
// Address:   0x1a2d3e0 (size: 28 bytes)
// Symbol:    X509_TRUST_set_default
// Demangled: X509_TRUST_set_default
// ============================================================================
int (*X509_TRUST_set_default(int (*a1)(int, int)))(int, int)
{
  int (*result)(int, int);

  result = (int (*)(int, int))(uintptr_t)(off_20CF8E0);
  off_20CF8E0 = (uint32_t)(uintptr_t)(a1);
  return result;
}
// ----------------------------------------------------------------------------
// Function: X509_TRUST_get_count  (binary VA: 0x1a2d400)
// Original: X509_TRUST_get_count
// ----------------------------------------------------------------------------
int X509_TRUST_get_count()
{
  int result;

  result = 8;
  if ( dword_2142588 != 0 )
    return sk_num(dword_2142588) + 8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_get0  (binary VA: 0x1a2d430)
// Original: X509_TRUST_get0
// ----------------------------------------------------------------------------
char * X509_TRUST_get0(int a1)
{
  char *result;

  result = nullptr;
  if ( a1 >= 0 )
  {
    result = (char *)&unk_20CF900 + 24 * a1;
    if ( a1 > 7 )
      return (char *)sk_value((int *)dword_2142588, a1 - 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_get_by_id  (binary VA: 0x1a2d480)
// Original: X509_TRUST_get_by_id
// ----------------------------------------------------------------------------
int X509_TRUST_get_by_id(int a1)
{
  int result;
  int v2;
  uint32_t v3[9];

  result = a1 - 1;
  if ( (unsigned int)(a1 - 1) > 7 )
  {
    v3[0] = a1;
    if ( dword_2142588 == 0 )
      return -1;
    v2 = sk_find(dword_2142588, (int)(uintptr_t)(v3));
    if ( v2 == -1 )
      return -1;
    else
      return v2 + 8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_check_trust  (binary VA: 0x1a2d4d0)
// Original: X509_check_trust
// ----------------------------------------------------------------------------
char X509_check_trust(int a1, int a2, int a3)
{
  char result;
  int v4;
  char *v5;

  result = 1;
  if ( a2 != -1 )
  {
    v4 = X509_TRUST_get_by_id(a2);
    if ( v4 == -1 )
    {
      return G4_MEM_CALL((uintptr_t)(off_20CF8E0), a2, a1);
    }
    else
    {
      v5 = X509_TRUST_get0(v4);
      return (*((int (**)(char *, int, int))v5 + 2))(v5, a1, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_set  (binary VA: 0x1a2d560)
// Original: X509_TRUST_set
// ----------------------------------------------------------------------------
int X509_TRUST_set(int *a1, int a2)
{
  if ( X509_TRUST_get_by_id(a2) == -1 )
  {
    ERR_put_error(11, 141, 123, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    *a1 = a2;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_add  (binary VA: 0x1a2d5e0)
// Original: X509_TRUST_add
// ----------------------------------------------------------------------------
int X509_TRUST_add(int a1, int a2, int a3, char *a4, int a5, int a6)
{
  int v6;
  int v7;
  char *v8;
  char *v9;
  char *v10;
  int v11;
  int result;
  int *v13;
  int v14;
  char *v15;

  v6 = X509_TRUST_get_by_id(a1);
  v7 = v6;
  if ( v6 == -1 )
  {
    v15 = (char *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
    v9 = v15;
    if ( v15 == nullptr )
    {
LABEL_9:
      ERR_put_error(11, 133, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    *((uint32_t *)v15 + 1) = 1;
  }
  else
  {
    v8 = X509_TRUST_get0(v6);
    v9 = v8;
    if ( (v8[4] & 2) != 0 )
      CRYPTO_free(*((void **)v8 + 3));
  }
  v10 = BUF_strdup(a4);
  *((uint32_t *)v9 + 3) = (uint32_t)(uintptr_t)(v10);
  if ( v10 == nullptr )
    goto LABEL_9;
  v11 = *((uint32_t *)v9 + 1) & 1 | 2;
  *(uint32_t *)v9 = a1;
  *((uint32_t *)v9 + 1) = a2 & 0xFFFFFFFE | v11;
  *((uint32_t *)v9 + 2) = a3;
  *((uint32_t *)v9 + 4) = a5;
  *((uint32_t *)v9 + 5) = a6;
  result = 1;
  if ( v7 == -1 )
  {
    v13 = (int *)dword_2142588;
    if ( dword_2142588 == 0 )
    {
      v13 = (int *)(sk_new((int)(uintptr_t)(sub_1A2D1A0)));
      dword_2142588 = (int)(uintptr_t)(v13);
      if ( v13 == nullptr )
        goto LABEL_9;
    }
    v14 = sk_push(v13, (int)(uintptr_t)(v9));
    result = 1;
    if ( v14 == 0 )
      goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_cleanup  (binary VA: 0x1a2d770)
// Original: X509_TRUST_cleanup
// ----------------------------------------------------------------------------
int X509_TRUST_cleanup()
{
  int i;
  int v1;
  int result;

  for ( i = 0; i != 8; ++i )
  {
    v1 = 3 * i;
    sub_1A2D390((char *)&unk_20CF900 + 8 * v1);
  }
  result = sk_pop_free((void **)dword_2142588, (void (*)(uint32_t))sub_1A2D390);
  dword_2142588 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_get_flags  (binary VA: 0x1a2d7d0)
// Original: X509_TRUST_get_flags
// ----------------------------------------------------------------------------
int X509_TRUST_get_flags(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_get0_name  (binary VA: 0x1a2d7e0)
// Original: X509_TRUST_get0_name
// ----------------------------------------------------------------------------
int X509_TRUST_get0_name(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: X509_TRUST_get_trust  (binary VA: 0x1a2d7f0)
// Original: X509_TRUST_get_trust
// ----------------------------------------------------------------------------
int X509_TRUST_get_trust(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_set_object  (binary VA: 0x1a2dbd0)
// Original: X509_EXTENSION_set_object
// ----------------------------------------------------------------------------
int X509_EXTENSION_set_object(void **a1, int a2)
{
  if ( a2 == 0 || a1 == nullptr )
    return 0;
  ASN1_OBJECT_free(*a1);
  *a1 = OBJ_dup(a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_set_critical  (binary VA: 0x1a2dc30)
// Original: X509_EXTENSION_set_critical
// ----------------------------------------------------------------------------
int X509_EXTENSION_set_critical(int a1, int a2)
{
  int result;
  int v3;

  result = 0;
  if ( a1 != 0 )
  {
    v3 = -(a2 == 0);
    LOBYTE(v3) = -1;
    *(uint32_t *)(a1 + 4) = v3;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_set_data  (binary VA: 0x1a2dc50)
// Original: X509_EXTENSION_set_data
// ----------------------------------------------------------------------------
bool X509_EXTENSION_set_data(int a1, int a2)
{
  bool result;

  result = false;
  if ( a1 != 0 )
    return ASN1_STRING_set(*(uint32_t *)(a1 + 8), *(char **)(a2 + 8), *(uint32_t *)a2) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_create_by_OBJ  (binary VA: 0x1a2dca0)
// Original: X509_EXTENSION_create_by_OBJ
// ----------------------------------------------------------------------------
void ** X509_EXTENSION_create_by_OBJ(void ***a1, int a2, int a3, int a4)
{
  void **v4;
  char v6;

  if ( a1 != nullptr && (v4 = *a1, *a1 != nullptr) || (v4 = (void **)X509_EXTENSION_new()) != nullptr )
  {
    if ( X509_EXTENSION_set_object(v4, a2) != 0
      && X509_EXTENSION_set_critical((int)(uintptr_t)(v4), a3) != 0
      && X509_EXTENSION_set_data((int)(uintptr_t)(v4), a4) )
    {
      if ( a1 != nullptr && *a1 == nullptr )
        *a1 = v4;
    }
    else if ( a1 != nullptr && *a1 == v4 )
    {
      return nullptr;
    }
    else
    {
      v6 = (char)(uintptr_t)(v4);
      v4 = nullptr;
      X509_EXTENSION_free(v6);
    }
  }
  else
  {
    ERR_put_error(11, 109, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_create_by_NID  (binary VA: 0x1a2dd90)
// Original: X509_EXTENSION_create_by_NID
// ----------------------------------------------------------------------------
void ** X509_EXTENSION_create_by_NID(void ***a1, unsigned int a2, int a3, int a4)
{
  char **v4;
  char **v5;
  void **result;

  v4 = OBJ_nid2obj(a2);
  v5 = v4;
  if ( v4 != nullptr )
  {
    result = X509_EXTENSION_create_by_OBJ(a1, (int)(uintptr_t)(v4), a3, a4);
    if ( result == nullptr )
    {
      ASN1_OBJECT_free(v5);
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(11, 108, 109, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_get_object  (binary VA: 0x1a2de40)
// Original: X509_EXTENSION_get_object
// ----------------------------------------------------------------------------
int X509_EXTENSION_get_object(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)a1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_get_data  (binary VA: 0x1a2de60)
// Original: X509_EXTENSION_get_data
// ----------------------------------------------------------------------------
int X509_EXTENSION_get_data(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 8);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_EXTENSION_get_critical  (binary VA: 0x1a2de80)
// Original: X509_EXTENSION_get_critical
// ----------------------------------------------------------------------------
bool X509_EXTENSION_get_critical(int a1)
{
  bool result;

  result = false;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4) > 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_entry_count  (binary VA: 0x1a2dea0)
// Original: X509_NAME_entry_count
// ----------------------------------------------------------------------------
int X509_NAME_entry_count(int *a1)
{
  int result;

  result = 0;
  if ( a1 != nullptr )
    return sk_num(*a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_get_index_by_OBJ  (binary VA: 0x1a2ded0)
// Original: X509_NAME_get_index_by_OBJ
// ----------------------------------------------------------------------------
int X509_NAME_get_index_by_OBJ(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v5;
  int *v6;

  if ( a1 == nullptr )
    return -1;
  v3 = 0;
  v4 = (int *)*a1;
  if ( a3 >= 0 )
    v3 = a3 + 1;
  v5 = sk_num(*a1);
  if ( v3 >= v5 )
    return -1;
  while ( 1 )
  {
    v6 = (int *)sk_value(v4, v3);
    if ( OBJ_cmp(*v6, a2) == 0 )
      break;
    if ( ++v3 == v5 )
      return -1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_get_index_by_NID  (binary VA: 0x1a2df60)
// Original: X509_NAME_get_index_by_NID
// ----------------------------------------------------------------------------
int X509_NAME_get_index_by_NID(int *a1, unsigned int a2, int a3)
{
  char **v3;

  v3 = OBJ_nid2obj(a2);
  if ( v3 != nullptr )
    return X509_NAME_get_index_by_OBJ(a1, (int)(uintptr_t)(v3), a3);
  else
    return -2;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_get_entry  (binary VA: 0x1a2dfb0)
// Original: X509_NAME_get_entry
// ----------------------------------------------------------------------------
int X509_NAME_get_entry(int **a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a1 != nullptr && sk_num((int)(uintptr_t)(*a1)) > a2 && a2 >= 0 )
    return sk_value(*a1, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_delete_entry  (binary VA: 0x1a2e020)
// Original: X509_NAME_delete_entry
// ----------------------------------------------------------------------------
int X509_NAME_delete_entry(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;

  v2 = a2;
  v8 = 0;
  if ( a1 != 0 && sk_num(*(uint32_t *)a1) > a2 && a2 >= 0 )
  {
    v3 = *(int **)a1;
    v8 = sk_delete(*(int **)a1, a2);
    v4 = sk_num((int)(uintptr_t)(v3));
    *(uint32_t *)(a1 + 4) = 1;
    if ( a2 != v4 )
    {
      if ( a2 != 0 )
        v9 = *(uint32_t *)(sk_value(v3, a2 - 1) + 8);
      else
        v9 = *(uint32_t *)(v8 + 8) - 1;
      if ( *(uint32_t *)(sk_value(v3, a2) + 8) > v9 + 1 && a2 < v4 )
      {
        do
        {
          v7 = v2++;
          v5 = sk_value(v3, v7);
          --*(uint32_t *)(v5 + 8);
        }
        while ( v2 != v4 );
      }
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_add_entry  (binary VA: 0x1a2e100)
// Original: X509_NAME_add_entry
// ----------------------------------------------------------------------------
int X509_NAME_add_entry(int *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  int v17;
  char v18;
  bool v19;

  v4 = 0;
  v5 = a3;
  if ( a1 == nullptr )
    return v4;
  v6 = (int *)*a1;
  v7 = sk_num(*a1);
  if ( v7 >= a3 )
  {
    a1[1] = 1;
    if ( a3 < 0 )
      v5 = v7;
    if ( a4 != -1 )
      goto LABEL_4;
LABEL_14:
    v8 = 0;
    v19 = true;
    if ( v5 != 0 )
    {
      v8 = *(uint32_t *)(sk_value(v6, v5 - 1) + 8);
      v19 = false;
    }
    goto LABEL_7;
  }
  v5 = v7;
  a1[1] = 1;
  if ( a4 == -1 )
    goto LABEL_14;
LABEL_4:
  if ( v5 < v7 )
  {
    v8 = *(uint32_t *)(sk_value(v6, v5) + 8);
    v19 = v8 == 0;
  }
  else
  {
    v8 = 0;
    v19 = true;
    if ( v5 != 0 )
    {
      v14 = *(uint32_t *)(sk_value(v6, v5 - 1) + 8);
      v15 = v14 == -1;
      v8 = v14 + 1;
      v19 = v15;
    }
  }
LABEL_7:
  v17 = v8;
  v4 = 0;
  v9 = X509_NAME_ENTRY_dup(a2);
  if ( v9 != 0 )
  {
    *(uint32_t *)(v9 + 8) = v17;
    v18 = v9;
    if ( sk_insert((int)(uintptr_t)(v6), v9, v5) != 0 )
    {
      v4 = 1;
      if ( v19 )
      {
        v11 = sk_num((int)(uintptr_t)(v6));
        if ( v11 > v5 + 1 )
        {
          v12 = v11 - 1;
          do
          {
            v16 = v5++;
            v13 = sk_value(v6, v16);
            ++*(uint32_t *)(v13 + 8);
          }
          while ( v5 != v12 );
          return 1;
        }
      }
    }
    else
    {
      ERR_put_error(11, 113, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      X509_NAME_ENTRY_free(v18);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_set_object  (binary VA: 0x1a2e2f0)
// Original: X509_NAME_ENTRY_set_object
// ----------------------------------------------------------------------------
bool X509_NAME_ENTRY_set_object(void **a1, int a2)
{
  size_t *v2;

  if ( a2 != 0 && a1 != nullptr )
  {
    ASN1_OBJECT_free(*a1);
    v2 = OBJ_dup(a2);
    *a1 = v2;
    return v2 != nullptr;
  }
  else
  {
    ERR_put_error(11, 115, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_set_data  (binary VA: 0x1a2e380)
// Original: X509_NAME_ENTRY_set_data
// ----------------------------------------------------------------------------
bool X509_NAME_ENTRY_set_data(int *a1, int a2, char *s, int a4)
{
  int v4;
  size_t v5;
  int v6;
  int v8;
  int v9;
  int v10;

  v4 = 0;
  v5 = a4;
  if ( a1 != nullptr && (a4 == 0 || s != nullptr) )
  {
    if ( a2 > 0 && (a2 & 0x1000) != 0 )
    {
      v8 = OBJ_obj2nid(*a1);
      return ASN1_STRING_set_by_NID(a1 + 1, s, a4, a2, v8) != 0;
    }
    else
    {
      if ( a4 < 0 )
        v5 = strlen(s);
      v6 = ASN1_STRING_set(a1[1], s, v5);
      v4 = 0;
      if ( v6 != 0 )
      {
        LOBYTE(v4) = 1;
        if ( a2 != -1 )
        {
          if ( a2 == -2 )
          {
            v9 = a1[1];
            v10 = v4;
            *(uint32_t *)(v9 + 4) = ASN1_PRINTABLE_type(s, v5);
            return v10;
          }
          else
          {
            *(uint32_t *)(a1[1] + 4) = a2;
          }
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_create_by_OBJ  (binary VA: 0x1a2e490)
// Original: X509_NAME_ENTRY_create_by_OBJ
// ----------------------------------------------------------------------------
void ** X509_NAME_ENTRY_create_by_OBJ(void ***a1, int a2, int a3, char *a4, size_t a5)
{
  void **v5;
  char v7;

  if ( a1 != nullptr && (v5 = *a1, *a1 != nullptr) || (v5 = (void **)X509_NAME_ENTRY_new()) != nullptr )
  {
    if ( X509_NAME_ENTRY_set_object(v5, a2) && X509_NAME_ENTRY_set_data((int *)v5, a3, a4, a5) )
    {
      if ( a1 != nullptr && *a1 == nullptr )
        *a1 = v5;
    }
    else if ( a1 != nullptr && *a1 == v5 )
    {
      return nullptr;
    }
    else
    {
      v7 = (char)(uintptr_t)(v5);
      v5 = nullptr;
      X509_NAME_ENTRY_free(v7);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_create_by_NID  (binary VA: 0x1a2e550)
// Original: X509_NAME_ENTRY_create_by_NID
// ----------------------------------------------------------------------------
void ** X509_NAME_ENTRY_create_by_NID(void ***a1, unsigned int a2, int a3, char *a4, size_t a5)
{
  char **v5;
  char **v6;
  void **v7;

  v5 = OBJ_nid2obj(a2);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v7 = X509_NAME_ENTRY_create_by_OBJ(a1, (int)(uintptr_t)(v5), a3, a4, a5);
    ASN1_OBJECT_free(v6);
  }
  else
  {
    v7 = nullptr;
    ERR_put_error(11, 114, 109, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_add_entry_by_NID  (binary VA: 0x1a2e600)
// Original: X509_NAME_add_entry_by_NID
// ----------------------------------------------------------------------------
int X509_NAME_add_entry_by_NID(int *a1, unsigned int a2, int a3, char *a4, size_t a5, int a6, int a7)
{
  void **v7;
  int v8;
  char v9; // si

  v7 = X509_NAME_ENTRY_create_by_NID(nullptr, a2, a3, a4, a5);
  v8 = 0;
  v9 = (char)(uintptr_t)(v7);
  if ( v7 != nullptr )
  {
    v8 = X509_NAME_add_entry(a1, (int)(uintptr_t)(v7), a6, a7);
    X509_NAME_ENTRY_free(v9);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_create_by_txt  (binary VA: 0x1a2e690)
// Original: X509_NAME_ENTRY_create_by_txt
// ----------------------------------------------------------------------------
void ** X509_NAME_ENTRY_create_by_txt(void ***a1, char *a2, int a3, char *a4, size_t a5)
{
  char **v5;
  char **v6;
  void **v7;

  v5 = OBJ_txt2obj(a2, 0);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v7 = X509_NAME_ENTRY_create_by_OBJ(a1, (int)(uintptr_t)(v5), a3, a4, a5);
    ASN1_OBJECT_free(v6);
  }
  else
  {
    ERR_put_error(11, 131, 119, (int)(uintptr_t)(&unk_1B15112), 0);
    v7 = nullptr;
    ERR_add_error_data(2, "name=", a2);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_add_entry_by_txt  (binary VA: 0x1a2e760)
// Original: X509_NAME_add_entry_by_txt
// ----------------------------------------------------------------------------
int X509_NAME_add_entry_by_txt(int *a1, char *a2, int a3, char *a4, size_t a5, int a6, int a7)
{
  void **v7;
  int v8;
  char v9; // si

  v7 = X509_NAME_ENTRY_create_by_txt(nullptr, a2, a3, a4, a5);
  v8 = 0;
  v9 = (char)(uintptr_t)(v7);
  if ( v7 != nullptr )
  {
    v8 = X509_NAME_add_entry(a1, (int)(uintptr_t)(v7), a6, a7);
    X509_NAME_ENTRY_free(v9);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_add_entry_by_OBJ  (binary VA: 0x1a2e7f0)
// Original: X509_NAME_add_entry_by_OBJ
// ----------------------------------------------------------------------------
int X509_NAME_add_entry_by_OBJ(int *a1, int a2, int a3, char *a4, size_t a5, int a6, int a7)
{
  void **v7;
  int v8;
  char v9; // si

  v7 = X509_NAME_ENTRY_create_by_OBJ(nullptr, a2, a3, a4, a5);
  v8 = 0;
  v9 = (char)(uintptr_t)(v7);
  if ( v7 != nullptr )
  {
    v8 = X509_NAME_add_entry(a1, (int)(uintptr_t)(v7), a6, a7);
    X509_NAME_ENTRY_free(v9);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_get_object  (binary VA: 0x1a2e880)
// Original: X509_NAME_ENTRY_get_object
// ----------------------------------------------------------------------------
int X509_NAME_ENTRY_get_object(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)a1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_ENTRY_get_data  (binary VA: 0x1a2e8a0)
// Original: X509_NAME_ENTRY_get_data
// ----------------------------------------------------------------------------
int X509_NAME_ENTRY_get_data(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_get_text_by_OBJ  (binary VA: 0x1a2e8c0)
// Original: X509_NAME_get_text_by_OBJ
// ----------------------------------------------------------------------------
const void * X509_NAME_get_text_by_OBJ(int *a1, int a2, void *dest, int a4)
{
  int index_by_OBJ;
  size_t n;
  int entry;
  const void **data;

  index_by_OBJ = X509_NAME_get_index_by_OBJ(a1, a2, -1);
  n = 0xFFFFFFFF;
  if ( index_by_OBJ >= 0 )
  {
    entry = X509_NAME_get_entry((int **)a1, index_by_OBJ);
    data = (const void **)X509_NAME_ENTRY_get_data(entry);
    n = a4 - 1;
    if ( (int)(uintptr_t)(*data) < a4 )
      n = (size_t)*data;
    if ( dest != nullptr )
    {
      memcpy(dest, data[2], n);
      *((uint8_t *)dest + n) = 0;
    }
    else
    {
      return *data;
    }
  }
  return (const void *)n;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_get_text_by_NID  (binary VA: 0x1a2e970)
// Original: X509_NAME_get_text_by_NID
// ----------------------------------------------------------------------------
int X509_NAME_get_text_by_NID(int *a1, unsigned int a2, void *a3, int a4)
{
  char **v4;

  v4 = OBJ_nid2obj(a2);
  if ( v4 != nullptr )
    return (int)(uintptr_t)(uintptr_t)(X509_NAME_get_text_by_OBJ(a1, (int)(uintptr_t)(v4), a3, a4));
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_set_version  (binary VA: 0x1a2e9c0)
// Original: X509_REQ_set_version
// ----------------------------------------------------------------------------
int X509_REQ_set_version(int a1, int a2)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return ASN1_INTEGER_set(*(uint32_t *)(*(uint32_t *)a1 + 12), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_set_subject_name  (binary VA: 0x1a2ea00)
// Original: X509_REQ_set_subject_name
// ----------------------------------------------------------------------------
bool X509_REQ_set_subject_name(int a1, int a2)
{
  bool result;

  result = false;
  if ( a1 != 0 && *(uint32_t *)a1 != 0 )
    return X509_NAME_set((int *)(*(uint32_t *)a1 + 16), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_set_pubkey  (binary VA: 0x1a2ea40)
// Original: X509_REQ_set_pubkey
// ----------------------------------------------------------------------------
int X509_REQ_set_pubkey(int a1, int a2)
{
  int result;

  result = 0;
  if ( a1 != 0 && *(uint32_t *)a1 != 0 )
    return X509_PUBKEY_set((int *)(*(uint32_t *)a1 + 20), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_tree_level_count  (binary VA: 0x1a2ea80)
// Original: X509_policy_tree_level_count
// ----------------------------------------------------------------------------
int X509_policy_tree_level_count(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_tree_get0_level  (binary VA: 0x1a2ea90)
// Original: X509_policy_tree_get0_level
// ----------------------------------------------------------------------------
int X509_policy_tree_get0_level(uint32_t *a1, int a2)
{
  int result;

  result = 0;
  if ( a2 >= 0 && a1 != nullptr && a2 < a1[1] )
    return *a1 + 16 * a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_tree_get0_policies  (binary VA: 0x1a2eac0)
// Original: X509_policy_tree_get0_policies
// ----------------------------------------------------------------------------
int X509_policy_tree_get0_policies(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 12);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_tree_get0_user_policies  (binary VA: 0x1a2eae0)
// Original: X509_policy_tree_get0_user_policies
// ----------------------------------------------------------------------------
int X509_policy_tree_get0_user_policies(int a1)
{
  if ( a1 == 0 )
    return 0;
  if ( (*(uint8_t *)(a1 + 20) & 2) != 0 )
    return *(uint32_t *)(a1 + 12);
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: X509_policy_level_node_count  (binary VA: 0x1a2eb10)
// Original: X509_policy_level_node_count
// ----------------------------------------------------------------------------
int X509_policy_level_node_count(int a1)
{
  int v1;
  int v2;

  v1 = 0;
  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 4);
    v1 = *(uint32_t *)(a1 + 8) != 0;
    if ( v2 != 0 )
      v1 += sk_num(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_level_get0_node  (binary VA: 0x1a2eb60)
// Original: X509_policy_level_get0_node
// ----------------------------------------------------------------------------
int X509_policy_level_get0_node(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( a1 == 0 )
    return 0;
  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
  {
    if ( a2 == 0 )
      return result;
    v2 = a2 - 1;
  }
  return sk_value(*(int **)(a1 + 4), v2);
}

// ----------------------------------------------------------------------------
// Function: X509_policy_node_get0_policy  (binary VA: 0x1a2ebb0)
// Original: X509_policy_node_get0_policy
// ----------------------------------------------------------------------------
int X509_policy_node_get0_policy(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(*(uint32_t *)a1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_node_get0_qualifiers  (binary VA: 0x1a2ebd0)
// Original: X509_policy_node_get0_qualifiers
// ----------------------------------------------------------------------------
int X509_policy_node_get0_qualifiers(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(*(uint32_t *)a1 + 8);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_node_get0_parent  (binary VA: 0x1a2ebf0)
// Original: X509_policy_node_get0_parent
// ----------------------------------------------------------------------------
int X509_policy_node_get0_parent(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: d2i_BASIC_CONSTRAINTS  (binary VA: 0x1a303e0)
// Original: d2i_BASIC_CONSTRAINTS
// ----------------------------------------------------------------------------
int d2i_BASIC_CONSTRAINTS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&BASIC_CONSTRAINTS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_BASIC_CONSTRAINTS  (binary VA: 0x1a30420)
// Original: i2d_BASIC_CONSTRAINTS
// ----------------------------------------------------------------------------
int i2d_BASIC_CONSTRAINTS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&BASIC_CONSTRAINTS_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_PROXY_POLICY  (binary VA: 0x1a32fc0)
// Original: d2i_PROXY_POLICY
// ----------------------------------------------------------------------------
int d2i_PROXY_POLICY(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PROXY_POLICY_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PROXY_POLICY  (binary VA: 0x1a33000)
// Original: i2d_PROXY_POLICY
// ----------------------------------------------------------------------------
int i2d_PROXY_POLICY(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PROXY_POLICY_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_PROXY_CERT_INFO_EXTENSION  (binary VA: 0x1a330a0)
// Original: d2i_PROXY_CERT_INFO_EXTENSION
// ----------------------------------------------------------------------------
int d2i_PROXY_CERT_INFO_EXTENSION(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PROXY_CERT_INFO_EXTENSION_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PROXY_CERT_INFO_EXTENSION  (binary VA: 0x1a330e0)
// Original: i2d_PROXY_CERT_INFO_EXTENSION
// ----------------------------------------------------------------------------
int i2d_PROXY_CERT_INFO_EXTENSION(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PROXY_CERT_INFO_EXTENSION_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_PKEY_USAGE_PERIOD  (binary VA: 0x1a33260)
// Original: d2i_PKEY_USAGE_PERIOD
// ----------------------------------------------------------------------------
int d2i_PKEY_USAGE_PERIOD(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKEY_USAGE_PERIOD_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKEY_USAGE_PERIOD  (binary VA: 0x1a332a0)
// Original: i2d_PKEY_USAGE_PERIOD
// ----------------------------------------------------------------------------
int i2d_PKEY_USAGE_PERIOD(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKEY_USAGE_PERIOD_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_SXNETID  (binary VA: 0x1a33e30)
// Original: d2i_SXNETID
// ----------------------------------------------------------------------------
int d2i_SXNETID(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&SXNETID_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_SXNETID  (binary VA: 0x1a33e70)
// Original: i2d_SXNETID
// ----------------------------------------------------------------------------
int i2d_SXNETID(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&SXNETID_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_SXNET  (binary VA: 0x1a33f10)
// Original: d2i_SXNET
// ----------------------------------------------------------------------------
int d2i_SXNET(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&SXNET_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_SXNET  (binary VA: 0x1a33f50)
// Original: i2d_SXNET
// ----------------------------------------------------------------------------
int i2d_SXNET(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&SXNET_it));
}

// ----------------------------------------------------------------------------
// Function: AES_wrap_key  (binary VA: 0x1a348d0)
// Original: AES_wrap_key
// ----------------------------------------------------------------------------
int AES_wrap_key(uint32_t *a1, int *a2, uint32_t *a3, void *src, size_t n)
{
  int *v5;
  unsigned int v6;
  uint8_t *v7;
  int *v8;
  size_t v9;
  typedef uint8_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v5 = a2;
  if ( (n & 7) != 0 || n <= 7 )
    return -1;
  memcpy(a3 + 2, src, n);
  v6 = 1;
  if ( a2 == nullptr )
    v5 = (int *)&unk_1D334FC;
  v13 = *v5;
  v14 = v5[1];
  v12 = 6;
  v7 = (uint8_t *)&v13;
  do
  {
    v8 = (int *)(a3 + 2);
    v9 = 0;
    do
    {
      v15 = *v8;
      v16 = v8[1];
      v11 = v7;
      AES_encrypt(v7, v7, a1);
      v7 = v11;
      HIBYTE(v14) = v6 ^ v11[7];
      if ( v6 > 0xFF )
      {
        BYTE2(v14) = v11[6] ^ BYTE1(v6);
        BYTE1(v14) = v11[5] ^ BYTE2(v6);
        LOBYTE(v14) = v11[4] ^ HIBYTE(v6);
      }
      v9 += 8;
      *v8 = v15;
      v8[1] = v16;
      ++v6;
      v8 += 2;
    }
    while ( n > v9 );
    --v12;
  }
  while ( v12 != 0 );
  *a3 = *(uint32_t *)v11;
  a3[1] = *((uint32_t *)v11 + 1);
  return n + 8;
}


