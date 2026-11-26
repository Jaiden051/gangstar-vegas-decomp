#include "Core/Utils/DecompTypes.h"
#include "openssl_crypto_ssl_part04.h"

// ----------------------------------------------------------------------------
// Function: PKCS7_free  (binary VA: 0x19c85e0)
// Original: PKCS7_free
// ----------------------------------------------------------------------------
int PKCS7_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_NDEF  (binary VA: 0x19c8610)
// Original: i2d_PKCS7_NDEF
// ----------------------------------------------------------------------------
int i2d_PKCS7_NDEF(int a1, void **a2)
{
  return ASN1_item_ndef_i2d(a1, a2, (int)PKCS7_it);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_dup  (binary VA: 0x19c8650)
// Original: PKCS7_dup
// ----------------------------------------------------------------------------
int PKCS7_dup(int a1)
{
  return ASN1_item_dup(PKCS7_it, a1);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_SIGNED  (binary VA: 0x19c8680)
// Original: d2i_PKCS7_SIGNED
// ----------------------------------------------------------------------------
int d2i_PKCS7_SIGNED(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_SIGNED_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_SIGNED  (binary VA: 0x19c86c0)
// Original: i2d_PKCS7_SIGNED
// ----------------------------------------------------------------------------
int i2d_PKCS7_SIGNED(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_SIGNED_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNED_new  (binary VA: 0x19c8700)
// Original: PKCS7_SIGNED_new
// ----------------------------------------------------------------------------
int PKCS7_SIGNED_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_SIGNED_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNED_free  (binary VA: 0x19c8730)
// Original: PKCS7_SIGNED_free
// ----------------------------------------------------------------------------
int PKCS7_SIGNED_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_SIGNED_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_SIGNER_INFO  (binary VA: 0x19c8760)
// Original: d2i_PKCS7_SIGNER_INFO
// ----------------------------------------------------------------------------
int d2i_PKCS7_SIGNER_INFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_SIGNER_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_SIGNER_INFO  (binary VA: 0x19c87a0)
// Original: i2d_PKCS7_SIGNER_INFO
// ----------------------------------------------------------------------------
int i2d_PKCS7_SIGNER_INFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_SIGNER_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNER_INFO_new  (binary VA: 0x19c87e0)
// Original: PKCS7_SIGNER_INFO_new
// ----------------------------------------------------------------------------
int PKCS7_SIGNER_INFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_SIGNER_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNER_INFO_free  (binary VA: 0x19c8810)
// Original: PKCS7_SIGNER_INFO_free
// ----------------------------------------------------------------------------
int PKCS7_SIGNER_INFO_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_SIGNER_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_ISSUER_AND_SERIAL  (binary VA: 0x19c8840)
// Original: d2i_PKCS7_ISSUER_AND_SERIAL
// ----------------------------------------------------------------------------
int d2i_PKCS7_ISSUER_AND_SERIAL(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_ISSUER_AND_SERIAL_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_ISSUER_AND_SERIAL  (binary VA: 0x19c8880)
// Original: i2d_PKCS7_ISSUER_AND_SERIAL
// ----------------------------------------------------------------------------
int i2d_PKCS7_ISSUER_AND_SERIAL(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_ISSUER_AND_SERIAL_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ISSUER_AND_SERIAL_new  (binary VA: 0x19c88c0)
// Original: PKCS7_ISSUER_AND_SERIAL_new
// ----------------------------------------------------------------------------
int PKCS7_ISSUER_AND_SERIAL_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_ISSUER_AND_SERIAL_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ISSUER_AND_SERIAL_free  (binary VA: 0x19c88f0)
// Original: PKCS7_ISSUER_AND_SERIAL_free
// ----------------------------------------------------------------------------
int PKCS7_ISSUER_AND_SERIAL_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_ISSUER_AND_SERIAL_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_ENVELOPE  (binary VA: 0x19c8920)
// Original: d2i_PKCS7_ENVELOPE
// ----------------------------------------------------------------------------
int d2i_PKCS7_ENVELOPE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_ENVELOPE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_ENVELOPE  (binary VA: 0x19c8960)
// Original: i2d_PKCS7_ENVELOPE
// ----------------------------------------------------------------------------
int i2d_PKCS7_ENVELOPE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_ENVELOPE_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ENVELOPE_new  (binary VA: 0x19c89a0)
// Original: PKCS7_ENVELOPE_new
// ----------------------------------------------------------------------------
int PKCS7_ENVELOPE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_ENVELOPE_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ENVELOPE_free  (binary VA: 0x19c89d0)
// Original: PKCS7_ENVELOPE_free
// ----------------------------------------------------------------------------
int PKCS7_ENVELOPE_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_ENVELOPE_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_RECIP_INFO  (binary VA: 0x19c8a00)
// Original: d2i_PKCS7_RECIP_INFO
// ----------------------------------------------------------------------------
int d2i_PKCS7_RECIP_INFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_RECIP_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_RECIP_INFO  (binary VA: 0x19c8a40)
// Original: i2d_PKCS7_RECIP_INFO
// ----------------------------------------------------------------------------
int i2d_PKCS7_RECIP_INFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_RECIP_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_RECIP_INFO_new  (binary VA: 0x19c8a80)
// Original: PKCS7_RECIP_INFO_new
// ----------------------------------------------------------------------------
int PKCS7_RECIP_INFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_RECIP_INFO_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_RECIP_INFO_free  (binary VA: 0x19c8ab0)
// Original: PKCS7_RECIP_INFO_free
// ----------------------------------------------------------------------------
int PKCS7_RECIP_INFO_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_RECIP_INFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_ENC_CONTENT  (binary VA: 0x19c8ae0)
// Original: d2i_PKCS7_ENC_CONTENT
// ----------------------------------------------------------------------------
int d2i_PKCS7_ENC_CONTENT(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_ENC_CONTENT_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_ENC_CONTENT  (binary VA: 0x19c8b20)
// Original: i2d_PKCS7_ENC_CONTENT
// ----------------------------------------------------------------------------
int i2d_PKCS7_ENC_CONTENT(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_ENC_CONTENT_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ENC_CONTENT_new  (binary VA: 0x19c8b60)
// Original: PKCS7_ENC_CONTENT_new
// ----------------------------------------------------------------------------
int PKCS7_ENC_CONTENT_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_ENC_CONTENT_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ENC_CONTENT_free  (binary VA: 0x19c8b90)
// Original: PKCS7_ENC_CONTENT_free
// ----------------------------------------------------------------------------
int PKCS7_ENC_CONTENT_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_ENC_CONTENT_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_SIGN_ENVELOPE  (binary VA: 0x19c8bc0)
// Original: d2i_PKCS7_SIGN_ENVELOPE
// ----------------------------------------------------------------------------
int d2i_PKCS7_SIGN_ENVELOPE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_SIGN_ENVELOPE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_SIGN_ENVELOPE  (binary VA: 0x19c8c00)
// Original: i2d_PKCS7_SIGN_ENVELOPE
// ----------------------------------------------------------------------------
int i2d_PKCS7_SIGN_ENVELOPE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_SIGN_ENVELOPE_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGN_ENVELOPE_new  (binary VA: 0x19c8c40)
// Original: PKCS7_SIGN_ENVELOPE_new
// ----------------------------------------------------------------------------
int PKCS7_SIGN_ENVELOPE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_SIGN_ENVELOPE_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGN_ENVELOPE_free  (binary VA: 0x19c8c70)
// Original: PKCS7_SIGN_ENVELOPE_free
// ----------------------------------------------------------------------------
int PKCS7_SIGN_ENVELOPE_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_SIGN_ENVELOPE_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_ENCRYPT  (binary VA: 0x19c8ca0)
// Original: d2i_PKCS7_ENCRYPT
// ----------------------------------------------------------------------------
int d2i_PKCS7_ENCRYPT(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_ENCRYPT_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_ENCRYPT  (binary VA: 0x19c8ce0)
// Original: i2d_PKCS7_ENCRYPT
// ----------------------------------------------------------------------------
int i2d_PKCS7_ENCRYPT(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_ENCRYPT_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ENCRYPT_new  (binary VA: 0x19c8d20)
// Original: PKCS7_ENCRYPT_new
// ----------------------------------------------------------------------------
int PKCS7_ENCRYPT_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_ENCRYPT_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ENCRYPT_free  (binary VA: 0x19c8d50)
// Original: PKCS7_ENCRYPT_free
// ----------------------------------------------------------------------------
int PKCS7_ENCRYPT_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_ENCRYPT_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_DIGEST  (binary VA: 0x19c8d80)
// Original: d2i_PKCS7_DIGEST
// ----------------------------------------------------------------------------
int d2i_PKCS7_DIGEST(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&PKCS7_DIGEST_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_DIGEST  (binary VA: 0x19c8dc0)
// Original: i2d_PKCS7_DIGEST
// ----------------------------------------------------------------------------
int i2d_PKCS7_DIGEST(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&PKCS7_DIGEST_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_DIGEST_new  (binary VA: 0x19c8e00)
// Original: PKCS7_DIGEST_new
// ----------------------------------------------------------------------------
int PKCS7_DIGEST_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKCS7_DIGEST_it));
}

// ----------------------------------------------------------------------------
// Function: PKCS7_DIGEST_free  (binary VA: 0x19c8e30)
// Original: PKCS7_DIGEST_free
// ----------------------------------------------------------------------------
int PKCS7_DIGEST_free(char a1)
{
  return ASN1_item_free(a1, PKCS7_DIGEST_it);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_print_ctx  (binary VA: 0x19c8e60)
// Original: PKCS7_print_ctx
// ----------------------------------------------------------------------------
int PKCS7_print_ctx(int a1, char a2, int a3, int a4)
{
  return ASN1_item_print(a1, a2, a3, PKCS7_it, a4);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_dataInit  (binary VA: 0x19c9560)
// Original: PKCS7_dataInit
// ----------------------------------------------------------------------------
uint32_t * PKCS7_dataInit(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint8_t *v4;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int i;
  int *v17;
  int *v18;
  uint8_t *v19;
  int v20;
  uint32_t *pubkey;
  void *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *v28;
  uint8_t *v29;
  int v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char ***_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v32)) > _g4_s1 ? (0u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v34)) > _g4_s3 ? (4u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v35)) > _g4_s4 ? (8u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v36)) > _g4_s5 ? (8u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v37)) > _g4_s6 ? (12u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v38)) > _g4_s7 ? (16u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v39)) > _g4_s8 ? (16u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v40)) > _g4_s9 ? (20u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v41)) > _g4_s10 ? (36u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v42)) > _g4_s11 ? (40u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v43)) > _g4_s12 ? (44u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v44)) > _g4_s13 ? (48u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v45)) > _g4_s14 ? (64u + sizeof(_g4_t_v45)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);

  v2 = a1;
  v41 = nullptr;
  v3 = OBJ_obj2nid(a1[4]) - 21;
  a1[2] = 0;
  switch ( v3 )
  {
    case 0:
      v40 = 0;
      v38 = nullptr;
      v37 = 0;
      v8 = 0;
      v33 = nullptr;
      v35 = nullptr;
      goto LABEL_10;
    case 1:
      v24 = a1[5];
      v8 = *(uint32_t *)(v24 + 4);
      v40 = sub_19C9170(*(uint32_t *)(v24 + 20));
      v38 = nullptr;
      v37 = 0;
      v33 = nullptr;
      v35 = nullptr;
      goto LABEL_10;
    case 2:
      v25 = a1[5];
      v26 = *(uint32_t *)(v25 + 4);
      v27 = *(uint32_t *)(v25 + 8);
      v37 = v26;
      v38 = *(char ****)(v27 + 4);
      v33 = *(uint32_t **)(v27 + 12);
      if ( v33 == nullptr )
        goto LABEL_50;
      v40 = 0;
      v8 = 0;
      v35 = nullptr;
      goto LABEL_10;
    case 3:
      v6 = (uint32_t *)a1[5];
      v40 = 0;
      v35 = nullptr;
      v7 = v6[6];
      v8 = v6[1];
      v9 = v6[5];
      v37 = v7;
      v38 = *(char ****)(v9 + 4);
      v33 = *(uint32_t **)(v9 + 12);
      if ( v33 != nullptr )
        goto LABEL_10;
LABEL_50:
      v4 = nullptr;
      ERR_put_error(33, 105, 116, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_3;
    case 4:
      v23 = a1[5];
      v8 = 0;
      v35 = *(int **)(v23 + 4);
      v40 = sub_19C9170(*(uint32_t *)(v23 + 8));
      v38 = nullptr;
      v37 = 0;
      v33 = nullptr;
LABEL_10:
      v10 = 0;
      break;
    default:
      v4 = nullptr;
      ERR_put_error(33, 105, 112, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_3;
  }
  while ( v10 < sk_num(v8) )
  {
    v11 = (int *)sk_value(v8, v10);
    if ( sub_19C9400((uint32_t **)&v41, v11) == 0 )
      goto LABEL_44;
    ++v10;
  }
  if ( v35 != nullptr )
  {
    v4 = nullptr;
    if ( sub_19C9400((uint32_t **)&v41, v35) == 0 )
    {
LABEL_3:
      if ( v41 != nullptr )
        BIO_free_all(v41);
      a2 = nullptr;
      if ( v4 != nullptr )
        BIO_free_all(v4);
      return a2;
    }
  }
  if ( v33 == nullptr )
    goto LABEL_47;
  v12 = (int)(uintptr_t)(BIO_f_cipher());
  v4 = BIO_new(v12);
  if ( v4 == nullptr )
  {
    ERR_put_error(33, 105, 32, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_3;
  }
  BIO_ctrl(v4, 129, 0, (int)(uintptr_t)(&v42));
  v36 = EVP_CIPHER_key_length((int)(uintptr_t)(v33));
  v13 = EVP_CIPHER_iv_length((int)(uintptr_t)(v33));
  v14 = EVP_CIPHER_type((int)(uintptr_t)(v33));
  *v38 = OBJ_nid2obj(v14);
  if ( v13 > 0 && (int)RAND_pseudo_bytes(v44, v13) <= 0 )
    goto LABEL_3;
  if ( EVP_CipherInit_ex((uint32_t *)v42, v33, nullptr, 0, nullptr, 1) <= 0
    || EVP_CIPHER_CTX_rand_key((uint32_t *)v42, (int)(uintptr_t)(v45)) <= 0
    || EVP_CipherInit_ex((uint32_t *)v42, nullptr, nullptr, (int)(uintptr_t)(v45), v44, 1) <= 0 )
  {
    goto LABEL_3;
  }
  if ( v13 > 0 )
  {
    v15 = (int)(uintptr_t)(v38[1]);
    if ( v15 == 0 )
    {
      v15 = ASN1_TYPE_new();
      v38[1] = (char **)v15;
      if ( v15 == 0 )
        goto LABEL_3;
    }
    if ( EVP_CIPHER_param_to_asn1(v42, v15) < 0 )
      goto LABEL_3;
  }
  v39 = (uint32_t *)(v4);
  for ( i = 0; i < sk_num(v37); ++i )
  {
    v34 = sk_value(v37, i);
    pubkey = (uint32_t *)X509_get_pubkey(*(uint32_t *)(v34 + 16));
    v22 = pubkey;
    if ( pubkey == nullptr || (v17 = (int *)EVP_PKEY_CTX_new(pubkey, nullptr), v18 = v17, v17 == nullptr) )
    {
LABEL_38:
      v4 = (uint8_t *)(v39);
      goto LABEL_3;
    }
    if ( EVP_PKEY_encrypt_init(v17) <= 0 )
    {
LABEL_51:
      v20 = 0;
      goto LABEL_34;
    }
    if ( EVP_PKEY_CTX_ctrl((int)(uintptr_t)(v18), -1, 256, 3, 0, v34) <= 0 )
    {
      ERR_put_error(33, 132, 152, (int)(uintptr_t)(&unk_1B15112), 0);
      v20 = 0;
    }
    else
    {
      if ( EVP_PKEY_encrypt(v18, 0, &v43, (int)(uintptr_t)(v45), v36) <= 0 )
        goto LABEL_51;
      v19 = CRYPTO_malloc(v43, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v19 != nullptr )
      {
        v31 = v19;
        if ( EVP_PKEY_encrypt(v18, (int)(uintptr_t)(v19), &v43, (int)(uintptr_t)(v45), v36) <= 0 )
        {
          v4 = (uint8_t *)(v39);
          EVP_PKEY_free(v22);
          EVP_PKEY_CTX_free((void **)v18);
          CRYPTO_free(v31);
          goto LABEL_3;
        }
        ASN1_STRING_set0(*(uint32_t *)(v34 + 12), (int)(uintptr_t)(v31), v43);
        v20 = 1;
      }
      else
      {
        ERR_put_error(33, 132, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        v20 = 0;
      }
    }
LABEL_34:
    v32 = (void *)v20;
    EVP_PKEY_free(v22);
    EVP_PKEY_CTX_free((void **)v18);
    if ( v32 == nullptr )
      goto LABEL_38;
  }
  v2 = a1;
  OPENSSL_cleanse(v45, v36);
  if ( v41 != nullptr )
    BIO_push(v41, v39);
  else
    v41 = v39;
LABEL_47:
  if ( a2 == nullptr )
  {
    if ( OBJ_obj2nid(v2[4]) == 22 && PKCS7_ctrl(v2, 2, 0) != 0 )
    {
      v30 = (int)(uintptr_t)(BIO_s_null());
      a2 = (uint32_t *)(BIO_new(v30));
    }
    else
    {
      if ( v40 == 0 || *(int *)v40 <= 0 )
      {
LABEL_58:
        v28 = BIO_s_mem();
        v29 = BIO_new((int)(uintptr_t)(v28));
        a2 = (uint32_t *)(v29);
        if ( v29 != nullptr )
        {
          BIO_ctrl(v29, 130, 0, 0);
          goto LABEL_48;
        }
LABEL_44:
        v4 = nullptr;
        goto LABEL_3;
      }
      a2 = BIO_new_mem_buf(*(char **)(v40 + 8), *(uint32_t *)v40);
    }
    if ( a2 != nullptr )
      goto LABEL_48;
    goto LABEL_58;
  }
LABEL_48:
  if ( v41 != nullptr )
  {
    BIO_push(v41, a2);
    return (uint32_t *)(v41);
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_dataDecode  (binary VA: 0x19c9d00)
// Original: PKCS7_dataDecode
// ----------------------------------------------------------------------------
uint32_t * PKCS7_dataDecode(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4)
{
  int v4;
  int v6;
  int i;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  char *v11;
  int digestbyname;
  uint32_t *v13;
  int v14;
  int v15;
  unsigned int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  char *v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  void *v30;
  typedef int *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_cipherbyname;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef void *_g4_t_v38;
  typedef size_t _g4_t_v39[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_cipherbyname)) > _g4_s2 ? (12u + sizeof(_g4_t_cipherbyname)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v35)) > _g4_s4 ? (20u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v37)) > _g4_s6 ? (36u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v38)) > _g4_s7 ? (40u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v39)) > _g4_s8 ? (44u + sizeof(_g4_t_v39)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_cipherbyname &cipherbyname = *reinterpret_cast<_g4_t_cipherbyname *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);

  v37 = 0;
  v4 = OBJ_obj2nid(a1[4]);
  a1[2] = 0;
  if ( v4 == 23 )
  {
    v18 = a1[5];
    v19 = *(uint32_t *)(v18 + 4);
    v20 = *(uint32_t *)(v18 + 8);
    v35 = v19;
    v36 = *(uint32_t *)(v20 + 8);
    v34 = *(int **)(v20 + 4);
    v21 = OBJ_obj2nid(*v34);
    v22 = OBJ_nid2sn(v21);
    cipherbyname = (uint32_t *)EVP_get_cipherbyname((int)(uintptr_t)(v22));
    v32 = nullptr;
    if ( cipherbyname != nullptr )
      goto LABEL_20;
    goto LABEL_18;
  }
  if ( v4 == 24 )
  {
    v13 = (uint32_t *)a1[5];
    v14 = v13[6];
    v6 = v13[1];
    v15 = v13[5];
    v35 = v14;
    v34 = *(int **)(v15 + 4);
    v36 = *(uint32_t *)(v15 + 8);
    v16 = OBJ_obj2nid(*v34);
    v17 = OBJ_nid2sn(v16);
    cipherbyname = (uint32_t *)EVP_get_cipherbyname((int)(uintptr_t)(v17));
    if ( cipherbyname != nullptr )
      goto LABEL_8;
LABEL_18:
    ERR_put_error(33, 112, 111, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  if ( v4 != 22 )
  {
    ERR_put_error(33, 112, 112, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  v36 = sub_19C9170(*(uint32_t *)(a1[5] + 20));
  v35 = 0;
  v34 = nullptr;
  cipherbyname = nullptr;
  v6 = *(uint32_t *)(a1[5] + 4);
LABEL_8:
  v32 = nullptr;
  if ( v6 != 0 )
  {
    for ( i = 0; i < sk_num(v6); ++i )
    {
      v31 = (int *)sk_value(v6, i);
      v8 = (int)(uintptr_t)(BIO_f_md());
      v9 = BIO_new(v8);
      if ( v9 == nullptr )
      {
        v24 = nullptr;
        ERR_put_error(33, 112, 32, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_41;
      }
      v10 = OBJ_obj2nid(*v31);
      v11 = OBJ_nid2sn(v10);
      digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v11));
      if ( digestbyname == 0 )
      {
        v24 = nullptr;
        ERR_put_error(33, 112, 109, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_41;
      }
      BIO_ctrl(v9, 111, 0, digestbyname);
      if ( v32 != nullptr )
        BIO_push(v32, v9);
      else
        v32 = (uint32_t *)(v9);
    }
  }
  if ( cipherbyname == nullptr )
    goto LABEL_37;
LABEL_20:
  v38 = nullptr;
  v23 = (int)(uintptr_t)(BIO_f_cipher());
  v24 = BIO_new(v23);
  if ( v24 != nullptr )
  {
    v25 = 0;
    if ( a4 != 0 )
    {
      while ( 1 )
      {
        if ( v25 >= sk_num(v35) )
        {
          v9 = nullptr;
          ERR_put_error(33, 112, 115, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_41;
        }
        v26 = sk_value(v35, v25);
        if ( X509_NAME_cmp(**(uint32_t **)(v26 + 4), *(uint32_t *)(*(uint32_t *)a4 + 12)) == 0
          && ASN1_STRING_cmp(*(uint32_t *)(*(uint32_t *)a4 + 4), *(uint32_t *)(*(uint32_t *)(v26 + 4) + 4)) == 0 )
        {
          break;
        }
        ++v25;
      }
      if ( sub_19C8F60(&v38, v39, v26, a2) <= 0 )
        goto LABEL_52;
    }
    else
    {
      while ( 1 )
      {
        if ( v25 >= sk_num(v35) )
          goto LABEL_60;
        v29 = sk_value(v35, v25);
        if ( sub_19C8F60(&v38, v39, v29, a2) > 0 )
          break;
        ERR_clear_error();
        ++v25;
      }
      if ( v29 == 0 )
      {
LABEL_60:
        v9 = nullptr;
        ERR_put_error(33, 112, 146, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_41;
      }
    }
    v37 = 0;
    BIO_ctrl(v24, 129, 0, (int)(uintptr_t)(&v37));
    if ( EVP_CipherInit_ex((uint32_t *)v37, cipherbyname, nullptr, 0, nullptr, 0) <= 0
      || EVP_CIPHER_asn1_to_param(v37, v34[1]) < 0 )
    {
      goto LABEL_52;
    }
    v27 = EVP_CIPHER_CTX_key_length(v37);
    if ( v27 == v39[0] || EVP_CIPHER_CTX_set_key_length((uint32_t *)v37, v39[0]) != 0 )
    {
      if ( EVP_CipherInit_ex((uint32_t *)v37, nullptr, nullptr, (int)(uintptr_t)(v38), nullptr, 0) > 0 )
      {
        if ( v38 != nullptr )
        {
          OPENSSL_cleanse((uint8_t *)v38, v39[0]);
          CRYPTO_free(v38);
        }
        if ( v32 != nullptr )
          BIO_push(v32, v24);
        else
          v32 = (uint32_t *)(v24);
LABEL_37:
        if ( OBJ_obj2nid(a1[4]) != 22 || (v28 = a3, PKCS7_ctrl(a1, 2, 0) == 0) )
        {
          v28 = a3;
          if ( a3 == nullptr )
          {
            if ( *(int *)v36 <= 0 )
            {
              v30 = BIO_s_mem();
              v28 = (uint32_t *)(BIO_new((int)(uintptr_t)(v30)));
              BIO_ctrl(v28, 130, 0, 0);
            }
            else
            {
              v28 = BIO_new_mem_buf(*(char **)(v36 + 8), *(uint32_t *)v36);
            }
            if ( v28 == nullptr )
            {
              v24 = nullptr;
              goto LABEL_52;
            }
          }
        }
        BIO_push(v32, v28);
        return v32;
      }
LABEL_52:
      v9 = nullptr;
      goto LABEL_41;
    }
    v9 = nullptr;
    ERR_put_error(33, 112, 100, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v9 = nullptr;
    ERR_put_error(33, 112, 32, (int)(uintptr_t)(&unk_1B15112), 0);
  }
LABEL_41:
  if ( v32 != nullptr )
    BIO_free_all(v32);
  if ( v9 != nullptr )
    BIO_free_all(v9);
  if ( v24 == nullptr )
    return nullptr;
  BIO_free_all(v24);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNER_INFO_sign  (binary VA: 0x19ca420)
// Original: PKCS7_SIGNER_INFO_sign
// ----------------------------------------------------------------------------
int PKCS7_SIGNER_INFO_sign(int a1)
{
  unsigned int v1;
  char *v2;
  int digestbyname;
  int v4;
  uint32_t *v5;
  int v6;
  uint8_t *v7;
  typedef int _g4_t_v9;
  typedef void *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef int _g4_t_v12[9];
  enum : size_t {
    _g4_s0 = 144u,
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

  v10 = nullptr;
  v1 = OBJ_obj2nid(**(uint32_t **)(a1 + 8));
  v2 = OBJ_nid2sn(v1);
  digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v2));
  v4 = 0;
  v5 = (uint32_t *)digestbyname;
  if ( digestbyname != 0 )
  {
    EVP_MD_CTX_init(v12);
    if ( EVP_DigestSignInit((int)(uintptr_t)(v12), &v9, v5, nullptr, *(uint32_t *)(a1 + 28)) <= 0 )
      goto LABEL_12;
    if ( EVP_PKEY_CTX_ctrl(v9, -1, 8, 5, 0, a1) > 0 )
    {
      v6 = ASN1_item_i2d(*(uint32_t *)(a1 + 12), &v10, (int)(uintptr_t)(&PKCS7_ATTR_SIGN_it));
      if ( v10 == nullptr )
        goto LABEL_14;
      if ( EVP_DigestUpdate((int)(uintptr_t)(v12), (int)(uintptr_t)(v10), v6) <= 0
        || (CRYPTO_free(v10), EVP_DigestSignFinal(v12, 0, (int)(uintptr_t)(&v11)) <= 0) )
      {
LABEL_12:
        if ( v10 != nullptr )
          CRYPTO_free(v10);
        goto LABEL_14;
      }
      v7 = CRYPTO_malloc(v11, (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v7;
      if ( v7 == nullptr )
      {
LABEL_14:
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v12));
        return 0;
      }
      if ( EVP_DigestSignFinal(v12, (int)(uintptr_t)(v7), (int)(uintptr_t)(&v11)) <= 0 )
        goto LABEL_12;
      if ( EVP_PKEY_CTX_ctrl(v9, -1, 8, 5, 1, a1) > 0 )
      {
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v12));
        ASN1_STRING_set0(*(uint32_t *)(a1 + 20), (int)(uintptr_t)(v10), v11);
        return 1;
      }
    }
    ERR_put_error(33, 139, 152, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_12;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_get_issuer_and_serial  (binary VA: 0x19ca670)
// Original: PKCS7_get_issuer_and_serial
// ----------------------------------------------------------------------------
int PKCS7_get_issuer_and_serial(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  if ( OBJ_obj2nid(*(uint32_t *)(a1 + 16)) == 24 )
  {
    v3 = *(uint32_t *)(a1 + 20);
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)(v3 + 24);
      if ( v4 != 0 )
      {
        sk_value(v4, 0);
        if ( sk_num(v4) > a2 )
          return *(uint32_t *)(sk_value(v4, a2) + 4);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_get_signed_attribute  (binary VA: 0x19ca700)
// Original: PKCS7_get_signed_attribute
// ----------------------------------------------------------------------------
int PKCS7_get_signed_attribute(int a1, unsigned int a2)
{
  return sub_19C8EB0(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_dataFinal  (binary VA: 0x19ca710)
// Original: PKCS7_dataFinal
// ----------------------------------------------------------------------------
int PKCS7_dataFinal(uint32_t *a1, int **a2)
{
  int v2;
  int v4;
  int v5;
  int i;
  int v7;
  uint32_t *v8;
  int v9;
  int *type;
  int v11;
  int v12;
  char *v13;
  int v14;
  typedef char *_g4_t_v15;
  typedef void **_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef void *_g4_t_v19[6];
  typedef char _g4_t_s[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_s)) > _g4_s5 ? (48u + sizeof(_g4_t_s)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);

  EVP_MD_CTX_init(v19);
  v2 = OBJ_obj2nid(a1[4]);
  a1[2] = 0;
  switch ( v2 )
  {
    case 21:
      v16 = (void **)a1[5];
      goto LABEL_17;
    case 22:
      v12 = a1[5];
      v5 = *(uint32_t *)(v12 + 16);
      v16 = (void **)sub_19C9170(*(uint32_t *)(v12 + 20));
      if ( OBJ_obj2nid(*(uint32_t *)(*(uint32_t *)(a1[5] + 20) + 16)) == 21 && a1[3] != 0 )
      {
        ASN1_STRING_free(v16);
        *(uint32_t *)(*(uint32_t *)(a1[5] + 20) + 20) = 0;
      }
      goto LABEL_6;
    case 23:
      v16 = *(void ***)(*(uint32_t *)(a1[5] + 8) + 8);
      if ( v16 != nullptr )
        goto LABEL_17;
      v16 = (void **)ASN1_STRING_type_new(4);
      if ( v16 == nullptr )
        goto LABEL_47;
      *(uint32_t *)(*(uint32_t *)(a1[5] + 8) + 8) = (uint32_t)(uintptr_t)(v16);
      goto LABEL_17;
    case 24:
      v4 = a1[5];
      v5 = *(uint32_t *)(v4 + 16);
      v16 = *(void ***)(*(uint32_t *)(v4 + 20) + 8);
      if ( v16 != nullptr )
        goto LABEL_6;
      v16 = (void **)ASN1_STRING_type_new(4);
      if ( v16 != nullptr )
      {
        *(uint32_t *)(*(uint32_t *)(a1[5] + 20) + 8) = (uint32_t)(uintptr_t)(v16);
LABEL_6:
        if ( v5 != 0 )
        {
          for ( i = 0; i < sk_num(v5); ++i )
          {
            v7 = sk_value(v5, i);
            v8 = (uint32_t *)v7;
            if ( *(uint32_t *)(v7 + 28) != 0 )
            {
              v9 = OBJ_obj2nid(**(uint32_t **)(v7 + 8));
              if ( sub_19C9310((int *)&v17, a2, v9) == 0 )
                goto LABEL_15;
              EVP_MD_CTX_copy_ex((int *)v19, v17);
              if ( (int)sk_num(v8[3]) <= 0 )
              {
                v18 = EVP_PKEY_size(v8[7]);
                v13 = (char *)(CRYPTO_malloc(v18, (int)(uintptr_t)(&unk_1B15112), 0));
                if ( v13 == nullptr )
                  goto LABEL_15;
                v15 = v13;
                if ( EVP_SignFinal((int *)v19, (int)(uintptr_t)(v13), (int *)&v18, (uint32_t *)v8[7]) == 0 )
                {
                  v2 = 0;
                  ERR_put_error(33, 128, 6, (int)(uintptr_t)(&unk_1B15112), 0);
                  goto LABEL_3;
                }
                ASN1_STRING_set0(v8[5], (int)(uintptr_t)(v15), v18);
              }
              else
              {
                if ( PKCS7_get_signed_attribute((int)(uintptr_t)(v8), 0x34u) == 0 && PKCS7_add0_attrib_signing_time(v8, 0) == 0
                  || (EVP_DigestFinal_ex(v19, (int)(uintptr_t)(s), &v18), PKCS7_add1_attrib_digest((int)(uintptr_t)(v8), s, v18) == 0) )
                {
                  ERR_put_error(33, 136, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_15:
                  v2 = 0;
                  goto LABEL_3;
                }
                if ( PKCS7_SIGNER_INFO_sign((int)(uintptr_t)(v8)) == 0 )
                {
                  v2 = 0;
                  goto LABEL_3;
                }
              }
            }
          }
        }
        else
        {
LABEL_17:
          if ( v2 == 25 )
          {
            LOWORD(v2) = 0;
            v14 = OBJ_obj2nid(**(uint32_t **)(a1[5] + 4));
            if ( sub_19C9310((int *)&v17, a2, v14) == 0 )
              goto LABEL_3;
            EVP_DigestFinal_ex((void **)v17, (int)(uintptr_t)(s), &v18);
            ASN1_STRING_set(*(uint32_t *)(a1[5] + 12), s, v18);
          }
        }
        if ( OBJ_obj2nid(a1[4]) != 22 || (v2 = 1, PKCS7_ctrl(a1, 2, 0) == 0) )
        {
          v2 = 1;
          if ( ((uint8_t)(uintptr_t)(v16)[3] & 0x10) == 0 )
          {
            type = BIO_find_type(a2, 1025);
            if ( type != nullptr )
            {
              v11 = BIO_ctrl(type, 3, 0, (int)(uintptr_t)(&v18));
              BIO_set_flags((int)(uintptr_t)(type), 512);
              BIO_ctrl(type, 130, 0, 0);
              ASN1_STRING_set0((int)(uintptr_t)(v16), v18, v11);
            }
            else
            {
              LOWORD(v2) = 0;
              ERR_put_error(33, 128, 107, (int)(uintptr_t)(&unk_1B15112), 0);
            }
          }
        }
      }
      else
      {
LABEL_47:
        v2 = 0;
        ERR_put_error(33, 128, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      }
LABEL_3:
      EVP_MD_CTX_cleanup((int)(uintptr_t)(v19));
      return v2;
    case 25:
      v16 = (void **)sub_19C9170(*(uint32_t *)(a1[5] + 8));
      if ( OBJ_obj2nid(*(uint32_t *)(*(uint32_t *)(a1[5] + 8) + 16)) == 21 && a1[3] != 0 )
      {
        ASN1_STRING_free(v16);
        *(uint32_t *)(*(uint32_t *)(a1[5] + 8) + 20) = 0;
      }
      goto LABEL_17;
    default:
      v2 = 0;
      ERR_put_error(33, 128, 112, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_3;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS7_get_attribute  (binary VA: 0x19cad20)
// Original: PKCS7_get_attribute
// ----------------------------------------------------------------------------
int PKCS7_get_attribute(int a1, unsigned int a2)
{
  return sub_19C8EB0(*(uint32_t *)(a1 + 24), a2);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_digest_from_attributes  (binary VA: 0x19cad30)
// Original: PKCS7_digest_from_attributes
// ----------------------------------------------------------------------------
int PKCS7_digest_from_attributes(int a1)
{
  int v1;

  v1 = sub_19C8EB0(a1, 0x33u);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_signatureVerify  (binary VA: 0x19cad60)
// Original: PKCS7_signatureVerify
// ----------------------------------------------------------------------------
int PKCS7_signatureVerify(int **a1, int a2, int a3, int a4)
{
  unsigned int v4;
  int **i;
  int v6;
  int v7;
  int *type;
  int v9;
  int v10;
  int v12;
  int *v13;
  uint32_t *pubkey;
  void *v15;
  int v16;
  int v17;
  char *v18;
  uint32_t *digestbyname;
  int v20;
  typedef int *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef size_t _g4_t_n;
  typedef void *_g4_t_v24[6];
  typedef uint8_t _g4_t_s2[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_n)) > _g4_s2 ? (20u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_s2)) > _g4_s4 ? (48u + sizeof(_g4_t_s2)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);

  EVP_MD_CTX_init(v24);
  if ( OBJ_obj2nid(*(uint32_t *)(a2 + 16)) == 22 || OBJ_obj2nid(*(uint32_t *)(a2 + 16)) == 24 )
  {
    v4 = OBJ_obj2nid(**(uint32_t **)(a3 + 8));
    if ( a1 != nullptr )
    {
      for ( i = a1; i != nullptr; i = (int **)BIO_next(v9) )
      {
        type = BIO_find_type(i, 520);
        v9 = (int)(uintptr_t)(type);
        if ( type == nullptr )
          break;
        BIO_ctrl(type, 120, 0, (int)(uintptr_t)(&v21));
        if ( v21 == nullptr )
        {
          v10 = 0;
          ERR_put_error(33, 113, 68, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_12;
        }
        v6 = EVP_MD_CTX_md((int)(uintptr_t)(v21));
        if ( EVP_MD_type(v6) != v4 )
        {
          v7 = EVP_MD_CTX_md((int)(uintptr_t)(v21));
          if ( EVP_MD_pkey_type(v7) != v4 )
            continue;
        }
        EVP_MD_CTX_copy_ex((int *)v24, v21);
        v12 = *(uint32_t *)(a3 + 12);
        if ( v12 != 0 && sk_num(*(uint32_t *)(a3 + 12)) != 0 )
        {
          v22 = nullptr;
          EVP_DigestFinal_ex(v24, (int)(uintptr_t)(s2), &n);
          v17 = PKCS7_digest_from_attributes(v12);
          if ( v17 == 0 )
            break;
          if ( *(uint32_t *)v17 != n || memcmp(*(const void **)(v17 + 8), s2, n) != 0 )
          {
            v10 = -1;
            ERR_put_error(33, 113, 101, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_12;
          }
          v18 = OBJ_nid2sn(v4);
          digestbyname = (uint32_t *)EVP_get_digestbyname((int)(uintptr_t)(v18));
          EVP_DigestInit_ex((int)(uintptr_t)(v24), digestbyname, nullptr);
          v20 = ASN1_item_i2d(v12, &v22, (int)(uintptr_t)(&PKCS7_ATTR_VERIFY_it));
          if ( v20 <= 0 )
          {
            v10 = -1;
            ERR_put_error(33, 113, 13, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_12;
          }
          EVP_DigestUpdate((int)(uintptr_t)(v24), (int)(uintptr_t)(v22), v20);
          CRYPTO_free(v22);
        }
        v13 = *(int **)(a3 + 20);
        pubkey = (uint32_t *)X509_get_pubkey(a4);
        v15 = pubkey;
        if ( pubkey != nullptr )
        {
          v16 = EVP_VerifyFinal((int *)v24, v13[2], *v13, pubkey);
          EVP_PKEY_free(v15);
          if ( v16 <= 0 )
          {
            v10 = -1;
            ERR_put_error(33, 113, 105, (int)(uintptr_t)(&unk_1B15112), 0);
          }
          else
          {
            v10 = 1;
          }
        }
        else
        {
          v10 = -1;
        }
        goto LABEL_12;
      }
    }
    v10 = 0;
    ERR_put_error(33, 113, 108, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v10 = 0;
    ERR_put_error(33, 113, 114, (int)(uintptr_t)(&unk_1B15112), 0);
  }
LABEL_12:
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v24));
  return v10;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_dataVerify  (binary VA: 0x19cb120)
// Original: PKCS7_dataVerify
// ----------------------------------------------------------------------------
int PKCS7_dataVerify(int a1, void *a2, int **a3, int a4, int a5)
{
  int v5;
  int v6;
  int v8;

  if ( OBJ_obj2nid(*(uint32_t *)(a4 + 16)) == 22 || OBJ_obj2nid(*(uint32_t *)(a4 + 16)) == 24 )
  {
    v8 = *(uint32_t *)(*(uint32_t *)(a4 + 20) + 8);
    v5 = (int)(uintptr_t)(X509_find_by_issuer_and_serial(v8, **(uint32_t **)(a5 + 4), *(uint32_t *)(*(uint32_t *)(a5 + 4) + 4)));
    v6 = v5;
    if ( v5 != 0 )
    {
      if ( X509_STORE_CTX_init(a2, a1, v5, v8) != 0 )
      {
        X509_STORE_CTX_set_purpose(a2, 4);
        if ( (int)X509_verify_cert(a2) <= 0 )
        {
          ERR_put_error(33, 107, 11, (int)(uintptr_t)(&unk_1B15112), 0);
          X509_STORE_CTX_cleanup(a2);
          return 0;
        }
        else
        {
          X509_STORE_CTX_cleanup(a2);
          return PKCS7_signatureVerify(a3, a4, a5, v6);
        }
      }
      else
      {
        ERR_put_error(33, 107, 11, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      ERR_put_error(33, 107, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(33, 107, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set_signed_attributes  (binary VA: 0x19cb300)
// Original: PKCS7_set_signed_attributes
// ----------------------------------------------------------------------------
int PKCS7_set_signed_attributes(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  if ( *(uint32_t *)(a1 + 12) != 0 )
    sk_pop_free(*(void **)(a1 + 12), (int)(uintptr_t)(X509_ATTRIBUTE_free));
  v2 = 0;
  v3 = (int)(uintptr_t)(sk_dup(a2));
  *(uint32_t *)(a1 + 12) = v3;
  result = 0;
  if ( v3 != 0 )
  {
    while ( 1 )
    {
      if ( v2 >= sk_num(a2) )
        return 1;
      v5 = sk_value(a2, v2);
      v6 = X509_ATTRIBUTE_dup(v5);
      if ( sk_set(*(uint32_t *)(a1 + 12), v2, v6) == 0 )
        break;
      ++v2;
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set_attributes  (binary VA: 0x19cb3b0)
// Original: PKCS7_set_attributes
// ----------------------------------------------------------------------------
int PKCS7_set_attributes(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;

  if ( *(uint32_t *)(a1 + 24) != 0 )
    sk_pop_free(*(void **)(a1 + 24), (int)(uintptr_t)(X509_ATTRIBUTE_free));
  v2 = 0;
  v3 = (int)(uintptr_t)(sk_dup(a2));
  *(uint32_t *)(a1 + 24) = v3;
  result = 0;
  if ( v3 != 0 )
  {
    while ( 1 )
    {
      if ( v2 >= sk_num(a2) )
        return 1;
      v5 = sk_value(a2, v2);
      v6 = X509_ATTRIBUTE_dup(v5);
      if ( sk_set(*(uint32_t *)(a1 + 24), v2, v6) == 0 )
        break;
      ++v2;
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_signed_attribute  (binary VA: 0x19cb460)
// Original: PKCS7_add_signed_attribute
// ----------------------------------------------------------------------------
int PKCS7_add_signed_attribute(int a1, int a2, int a3, int a4)
{
  return sub_19C91E0((int *)(a1 + 12), a2, a3, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_attribute  (binary VA: 0x19cb480)
// Original: PKCS7_add_attribute
// ----------------------------------------------------------------------------
int PKCS7_add_attribute(int a1, int a2, int a3, int a4)
{
  return sub_19C91E0((int *)(a1 + 24), a2, a3, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ctrl  (binary VA: 0x19cb4a0)
// Original: PKCS7_ctrl
// ----------------------------------------------------------------------------
char PKCS7_ctrl(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = OBJ_obj2nid(a1[4]);
  if ( a2 == 1 )
  {
    if ( v3 != 22 )
    {
LABEL_10:
      ERR_put_error(33, 104, 104, (int)(uintptr_t)(&unk_1B15112), 0);
      LOBYTE(v3) = 0;
      return v3;
    }
    LOBYTE(v3) = 0;
    a1[3] = a3;
    if ( a3 != 0 )
    {
      v4 = OBJ_obj2nid(*(uint32_t *)(*(uint32_t *)(a1[5] + 20) + 16));
      LOBYTE(v3) = a3;
      if ( v4 == 21 )
      {
        ASN1_OCTET_STRING_free(*(uint32_t *)(*(uint32_t *)(a1[5] + 20) + 20));
        *(uint32_t *)(*(uint32_t *)(a1[5] + 20) + 20) = 0;
        LOBYTE(v3) = a3;
      }
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      ERR_put_error(33, 104, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      LOBYTE(v3) = 0;
      return v3;
    }
    if ( v3 != 22 )
      goto LABEL_10;
    v5 = a1[5];
    LOBYTE(v3) = 1;
    if ( v5 != 0 )
      v3 = *(uint32_t *)(*(uint32_t *)(v5 + 20) + 20) == 0;
    a1[3] = v3;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set_content  (binary VA: 0x19cb5e0)
// Original: PKCS7_set_content
// ----------------------------------------------------------------------------
int PKCS7_set_content(int a1, int a2)
{
  int v2;
  int v4;
  int v5;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  if ( v2 == 22 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(v4 + 20) != 0 )
    {
      PKCS7_free(*(uint32_t *)(v4 + 20));
      v4 = *(uint32_t *)(a1 + 20);
    }
    *(uint32_t *)(v4 + 20) = a2;
    return 1;
  }
  else if ( v2 == 25 )
  {
    v5 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(v5 + 8) != 0 )
    {
      PKCS7_free(*(uint32_t *)(v5 + 8));
      v5 = *(uint32_t *)(a1 + 20);
    }
    *(uint32_t *)(v5 + 8) = a2;
    return 1;
  }
  else
  {
    ERR_put_error(33, 109, 112, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set_type  (binary VA: 0x19cb6a0)
// Original: PKCS7_set_type
// ----------------------------------------------------------------------------
bool PKCS7_set_type(int a1, unsigned int a2)
{
  bool v2;
  int *v4;
  int *v5;
  char ***v6;
  uint32_t *v7;
  int *v8;
  int *v9;
  char ***v10;
  int *v11;
  char ***v12;

  *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(OBJ_nid2obj(a2));
  switch ( a2 )
  {
    case 0x15u:
      v7 = ASN1_STRING_type_new(4);
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v7);
      v2 = v7 != nullptr;
      break;
    case 0x16u:
      v8 = (int *)PKCS7_SIGNED_new();
      v2 = false;
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v8);
      if ( v8 != nullptr )
      {
        LOWORD(v2) = 1;
        if ( ASN1_INTEGER_set(*v8, 1) == 0 )
        {
          LOWORD(v2) = 0;
          PKCS7_SIGNED_free(*(uint32_t *)(a1 + 20));
          *(uint32_t *)(a1 + 20) = 0;
        }
      }
      break;
    case 0x17u:
      v9 = (int *)PKCS7_ENVELOPE_new();
      v2 = false;
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v9);
      if ( v9 != nullptr && ASN1_INTEGER_set(*v9, 0) != 0 )
      {
        v10 = *(char ****)(*(uint32_t *)(a1 + 20) + 8);
        *v10 = OBJ_nid2obj(0x15u);
        v2 = true;
      }
      break;
    case 0x18u:
      v11 = (int *)PKCS7_SIGN_ENVELOPE_new();
      v2 = false;
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v11);
      if ( v11 != nullptr )
      {
        ASN1_INTEGER_set(*v11, 1);
        if ( ASN1_INTEGER_set(**(uint32_t **)(a1 + 20), 1) != 0 )
        {
          v12 = *(char ****)(*(uint32_t *)(a1 + 20) + 20);
          *v12 = OBJ_nid2obj(0x15u);
          v2 = true;
        }
      }
      break;
    case 0x19u:
      v4 = (int *)PKCS7_DIGEST_new();
      v2 = false;
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v4);
      if ( v4 != nullptr )
        v2 = ASN1_INTEGER_set(*v4, 0) != 0;
      break;
    case 0x1Au:
      v5 = (int *)PKCS7_ENCRYPT_new();
      v2 = false;
      *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v5);
      if ( v5 != nullptr && ASN1_INTEGER_set(*v5, 0) != 0 )
      {
        v6 = *(char ****)(*(uint32_t *)(a1 + 20) + 4);
        *v6 = OBJ_nid2obj(0x15u);
        v2 = true;
      }
      break;
    default:
      v2 = false;
      ERR_put_error(33, 110, 112, (int)(uintptr_t)(&unk_1B15112), 0);
      break;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_content_new  (binary VA: 0x19cb8d0)
// Original: PKCS7_content_new
// ----------------------------------------------------------------------------
int PKCS7_content_new(int a1, unsigned int a2)
{
  int v2;
  int result;

  v2 = PKCS7_new();
  result = 0;
  if ( v2 != 0 )
  {
    if ( PKCS7_set_type(v2, a2) && PKCS7_set_content(a1, v2) != 0 )
    {
      return 1;
    }
    else
    {
      PKCS7_free(v2);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set0_type_other  (binary VA: 0x19cb940)
// Original: PKCS7_set0_type_other
// ----------------------------------------------------------------------------
int PKCS7_set0_type_other(int a1, unsigned int a2, int a3)
{
  *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(OBJ_nid2obj(a2));
  *(uint32_t *)(a1 + 20) = a3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_signer  (binary VA: 0x19cb990)
// Original: PKCS7_add_signer
// ----------------------------------------------------------------------------
bool PKCS7_add_signer(int a1, int a2)
{
  int v2;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int v11;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  if ( v2 == 22 || v2 == 24 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    v5 = 0;
    v11 = *(uint32_t *)(v4 + 16);
    v6 = *(uint32_t *)(v4 + 4);
    v7 = OBJ_obj2nid(**(uint32_t **)(a2 + 8));
    while ( v5 < sk_num(v6) )
    {
      v8 = (int *)sk_value(v6, v5);
      if ( OBJ_obj2nid(*v8) == v7 )
        return sk_push(v11, a2) != 0;
      ++v5;
    }
    v9 = X509_ALGOR_new();
    if ( v9 != 0 && (v10 = ASN1_TYPE_new(), *(uint32_t *)(v9 + 4) = v10, v10 != 0) )
    {
      *(uint32_t *)v9 = (uint32_t)(uintptr_t)(OBJ_nid2obj(v7));
      **(uint32_t **)(v9 + 4) = 5;
      if ( sk_push(v6, v9) != 0 )
        return sk_push(v11, a2) != 0;
      X509_ALGOR_free(v9);
      return false;
    }
    else
    {
      X509_ALGOR_free(v9);
      ERR_put_error(33, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return false;
    }
  }
  else
  {
    ERR_put_error(33, 103, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_certificate  (binary VA: 0x19cbb00)
// Original: PKCS7_add_certificate
// ----------------------------------------------------------------------------
int PKCS7_add_certificate(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int v6;
  int v7;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  if ( v2 == 22 || v2 == 24 )
  {
    v5 = (int *)(*(uint32_t *)(a1 + 20) + 8);
    if ( *v5 != 0 || (v7 = (int)(uintptr_t)(sk_new_null(v3, 0)), *v5 = v7, v7 != 0) )
    {
      CRYPTO_add_lock((uint32_t *)(a2 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
      v6 = sk_push(*v5, a2);
      result = 1;
      if ( v6 == 0 )
      {
        X509_free(a2);
        return 0;
      }
    }
    else
    {
      ERR_put_error(33, 100, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(33, 100, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_crl  (binary VA: 0x19cbc20)
// Original: PKCS7_add_crl
// ----------------------------------------------------------------------------
int PKCS7_add_crl(int a1, int a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int v6;
  int v7;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  if ( v2 == 22 || v2 == 24 )
  {
    v5 = (int *)(*(uint32_t *)(a1 + 20) + 12);
    if ( *v5 != 0 || (v7 = (int)(uintptr_t)(sk_new_null(0, v3)), *v5 = v7, v7 != 0) )
    {
      CRYPTO_add_lock((uint32_t *)(a2 + 12), 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
      v6 = sk_push(*v5, a2);
      result = 1;
      if ( v6 == 0 )
      {
        X509_CRL_free(a2);
        return 0;
      }
    }
    else
    {
      ERR_put_error(33, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(33, 101, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNER_INFO_set  (binary VA: 0x19cbd40)
// Original: PKCS7_SIGNER_INFO_set
// ----------------------------------------------------------------------------
int PKCS7_SIGNER_INFO_set(int a1, int a2, int a3, int a4)
{
  int v4;
  int issuer_name;
  int serialNumber;
  void **v8;
  unsigned int v9;
  char **v10;
  int v11;
  int (*v12)(int, int, uint32_t, int);
  int v13;
  int v14;

  v4 = 0;
  if ( ASN1_INTEGER_set(*(uint32_t *)a1, 1) != 0 )
  {
    issuer_name = X509_get_issuer_name(a2);
    if ( X509_NAME_set(*(int **)(a1 + 4), issuer_name) )
    {
      ASN1_STRING_free(*(void ***)(*(uint32_t *)(a1 + 4) + 4));
      v14 = *(uint32_t *)(a1 + 4);
      serialNumber = X509_get_serialNumber(a2);
      v8 = ASN1_STRING_dup(serialNumber);
      *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v8);
      if ( v8 != nullptr )
      {
        CRYPTO_add_lock((uint32_t *)(a3 + 8), 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
        *(uint32_t *)(a1 + 28) = a3;
        v9 = EVP_MD_type(a4);
        v10 = OBJ_nid2obj(v9);
        X509_ALGOR_set0(*(uint32_t *)(a1 + 8), (int)(uintptr_t)(v10), 5, 0);
        v11 = *(uint32_t *)(a3 + 12);
        if ( v11 == 0 )
          goto LABEL_10;
        v12 = *(int (**)(int, int, uint32_t, int))(v11 + 84);
        if ( v12 == nullptr )
          goto LABEL_10;
        v13 = v12(a3, 1, 0, a1);
        LOWORD(v4) = 1;
        if ( v13 <= 0 )
        {
          if ( v13 != -2 )
          {
            LOWORD(v4) = 0;
            ERR_put_error(33, 129, 147, (int)(uintptr_t)(&unk_1B15112), 0);
            return v4;
          }
LABEL_10:
          v4 = 0;
          ERR_put_error(33, 129, 148, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_signature  (binary VA: 0x19cbef0)
// Original: PKCS7_add_signature
// ----------------------------------------------------------------------------
int PKCS7_add_signature(int a1, int a2, int a3, int a4)
{
  int digestbyname;
  int v5;
  char *v7;
  typedef char _g4_t_v8;
  typedef unsigned int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v9)) > _g4_s1 ? (44u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  digestbyname = a4;
  if ( a4 == 0 )
  {
    v5 = 0;
    if ( EVP_PKEY_get_default_digest_nid(a3, (int)(uintptr_t)(v9)) <= 0 )
      return v5;
    v7 = OBJ_nid2sn(v9[0]);
    digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v7));
    if ( digestbyname == 0 )
    {
      ERR_put_error(33, 131, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return v5;
    }
  }
  v5 = PKCS7_SIGNER_INFO_new();
  if ( v5 != 0 && (PKCS7_SIGNER_INFO_set(v5, a2, a3, digestbyname) == 0 || !PKCS7_add_signer(a1, v5)) )
  {
    v8 = v5;
    v5 = 0;
    PKCS7_SIGNER_INFO_free(v8);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set_digest  (binary VA: 0x19cbff0)
// Original: PKCS7_set_digest
// ----------------------------------------------------------------------------
int PKCS7_set_digest(int a1, int a2)
{
  int v3;
  int v4;
  char ***v5;
  unsigned int v6;

  if ( OBJ_obj2nid(*(uint32_t *)(a1 + 16)) == 25 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 4);
    v4 = ASN1_TYPE_new();
    *(uint32_t *)(v3 + 4) = v4;
    if ( v4 != 0 )
    {
      **(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a1 + 20) + 4) + 4) = 5;
      v5 = *(char ****)(*(uint32_t *)(a1 + 20) + 4);
      v6 = EVP_MD_type(a2);
      *v5 = OBJ_nid2obj(v6);
      return 1;
    }
    else
    {
      ERR_put_error(33, 126, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(33, 126, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: PKCS7_get_signer_info  (binary VA: 0x19cc0f0)
// Original: PKCS7_get_signer_info
// ----------------------------------------------------------------------------
int PKCS7_get_signer_info(int a1)
{
  int v1;
  int v2;

  if ( OBJ_obj2nid(*(uint32_t *)(a1 + 16)) == 22 )
    return *(uint32_t *)(*(uint32_t *)(a1 + 20) + 16);
  v1 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  v2 = 0;
  if ( v1 == 24 )
    return *(uint32_t *)(*(uint32_t *)(a1 + 20) + 16);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_SIGNER_INFO_get0_algs  (binary VA: 0x19cc150)
// Original: PKCS7_SIGNER_INFO_get0_algs
// ----------------------------------------------------------------------------
uint32_t * PKCS7_SIGNER_INFO_get0_algs(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *result;

  result = a1;
  if ( a2 != nullptr )
    *a2 = a1[7];
  if ( a3 != nullptr )
    *a3 = a1[2];
  if ( a4 != nullptr )
  {
    result = (uint32_t *)a1[4];
    *a4 = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_RECIP_INFO_get0_alg  (binary VA: 0x19cc1a0)
// Original: PKCS7_RECIP_INFO_get0_alg
// ----------------------------------------------------------------------------
uint32_t * PKCS7_RECIP_INFO_get0_alg(int a1, uint32_t *a2)
{
  uint32_t *result;

  result = a2;
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_recipient_info  (binary VA: 0x19cc1c0)
// Original: PKCS7_add_recipient_info
// ----------------------------------------------------------------------------
bool PKCS7_add_recipient_info(int a1, int a2)
{
  int v2;
  int v4;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  if ( v2 == 23 )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 4);
  }
  else
  {
    if ( v2 != 24 )
    {
      ERR_put_error(33, 102, 113, (int)(uintptr_t)(&unk_1B15112), 0);
      return false;
    }
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 24);
  }
  return sk_push(v4, a2) != 0;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_RECIP_INFO_set  (binary VA: 0x19cc260)
// Original: PKCS7_RECIP_INFO_set
// ----------------------------------------------------------------------------
int PKCS7_RECIP_INFO_set(int a1, int a2)
{
  int v2;
  int issuer_name;
  int serialNumber;
  void **v6;
  uint32_t *pubkey;
  void *v8;
  int v9;
  int (*v10)(void *, int, uint32_t, int);
  int v11;
  void *v12;
  uint32_t *v13;
  void *v14;
  void *v15;

  v2 = 0;
  if ( ASN1_INTEGER_set(*(uint32_t *)a1, 0) != 0 )
  {
    issuer_name = X509_get_issuer_name(a2);
    if ( X509_NAME_set(*(int **)(a1 + 4), issuer_name) )
    {
      ASN1_STRING_free(*(void ***)(*(uint32_t *)(a1 + 4) + 4));
      v13 = *(uint32_t **)(a1 + 4);
      serialNumber = X509_get_serialNumber(a2);
      v6 = ASN1_STRING_dup(serialNumber);
      v13[1] = (uint32_t)(uintptr_t)(v6);
      if ( v6 != nullptr )
      {
        pubkey = (uint32_t *)X509_get_pubkey(a2);
        v8 = pubkey;
        if ( pubkey != nullptr
          && (v9 = pubkey[3]) != 0
          && (v10 = *(int (**)(void *, int, uint32_t, int))(v9 + 84)) != nullptr )
        {
          v14 = v8;
          v11 = v10(v8, 2, 0, a1);
          if ( v11 == -2 )
          {
            ERR_put_error(33, 130, 150, (int)(uintptr_t)(&unk_1B15112), 0);
            v12 = v14;
          }
          else
          {
            if ( v11 > 0 )
            {
              v2 = 1;
              EVP_PKEY_free(v14);
              CRYPTO_add_lock((uint32_t *)(a2 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
              *(uint32_t *)(a1 + 16) = a2;
              return v2;
            }
            ERR_put_error(33, 130, 149, (int)(uintptr_t)(&unk_1B15112), 0);
            v12 = v14;
          }
        }
        else
        {
          v15 = v8;
          v2 = 0;
          ERR_put_error(33, 130, 150, (int)(uintptr_t)(&unk_1B15112), 0);
          v12 = v15;
          if ( v15 == nullptr )
            return v2;
        }
        v2 = 0;
        EVP_PKEY_free(v12);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_add_recipient  (binary VA: 0x19cc460)
// Original: PKCS7_add_recipient
// ----------------------------------------------------------------------------
int PKCS7_add_recipient(int a1, int a2)
{
  int v2;
  char v4;

  v2 = PKCS7_RECIP_INFO_new();
  if ( v2 != 0 && (PKCS7_RECIP_INFO_set(v2, a2) == 0 || !PKCS7_add_recipient_info(a1, v2)) )
  {
    v4 = v2;
    v2 = 0;
    PKCS7_RECIP_INFO_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_cert_from_signer_info  (binary VA: 0x19cc4d0)
// Original: PKCS7_cert_from_signer_info
// ----------------------------------------------------------------------------
int PKCS7_cert_from_signer_info(int a1, int a2)
{
  int v2;
  int v3;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  v3 = 0;
  if ( v2 == 22 )
    return (int)(uintptr_t)(X509_find_by_issuer_and_serial(
             *(uint32_t *)(*(uint32_t *)(a1 + 20) + 8),
             **(uint32_t **)(a2 + 4),
             *(uint32_t *)(*(uint32_t *)(a2 + 4) + 4)));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_set_cipher  (binary VA: 0x19cc530)
// Original: PKCS7_set_cipher
// ----------------------------------------------------------------------------
int PKCS7_set_cipher(int a1, int a2)
{
  int v2;
  int v4;

  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16));
  if ( v2 == 23 )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 8);
    if ( EVP_CIPHER_type(a2) == 0 )
    {
LABEL_8:
      ERR_put_error(33, 108, 144, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
LABEL_6:
    *(uint32_t *)(v4 + 12) = a2;
    return 1;
  }
  if ( v2 == 24 )
  {
    v4 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 20);
    if ( EVP_CIPHER_type(a2) == 0 )
      goto LABEL_8;
    goto LABEL_6;
  }
  ERR_put_error(33, 108, 113, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: PKCS7_stream  (binary VA: 0x19cc620)
// Original: PKCS7_stream
// ----------------------------------------------------------------------------
int PKCS7_stream(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v4;

  v2 = OBJ_obj2nid(*(uint32_t *)(a2 + 16));
  switch ( v2 )
  {
    case 21:
      v4 = *(uint32_t **)(a2 + 20);
      goto LABEL_8;
    case 22:
      v4 = *(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 20) + 20);
LABEL_8:
      if ( v4 == nullptr )
        return 0;
      goto LABEL_9;
    case 23:
      v4 = *(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 8) + 8);
      if ( v4 != nullptr )
        goto LABEL_9;
      v4 = ASN1_STRING_type_new(4);
      *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 8) + 8) = (uint32_t)(uintptr_t)(v4);
      goto LABEL_8;
    case 24:
      v4 = *(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 20) + 8);
      if ( v4 == nullptr )
      {
        v4 = ASN1_STRING_type_new(4);
        *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 20) + 20) + 8) = (uint32_t)(uintptr_t)(v4);
        goto LABEL_8;
      }
LABEL_9:
      v4[3] |= 0x10u;
      *a1 = (uint32_t)(uintptr_t)(v4 + 2);
      return 1;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ERR_load_PKCS7_strings  (binary VA: 0x19cc6f0)
// Original: ERR_load_PKCS7_strings
// ----------------------------------------------------------------------------
int ERR_load_PKCS7_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CC340);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CC340);
    return ERR_load_strings(0, &dword_20CC4A0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PKCS8_decrypt  (binary VA: 0x19cc750)
// Original: PKCS8_decrypt
// ----------------------------------------------------------------------------
int PKCS8_decrypt(int *a1, char *a2, int a3)
{
  return PKCS12_item_decrypt_d2i(*a1, (int)(uintptr_t)(&PKCS8_PRIV_KEY_INFO_it), a2, a3, a1[1], 1);
}

// ----------------------------------------------------------------------------
// Function: ERR_load_PKCS12_strings  (binary VA: 0x19cc7a0)
// Original: ERR_load_PKCS12_strings
// ----------------------------------------------------------------------------
int ERR_load_PKCS12_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CC660);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CC660);
    return ERR_load_strings(0, &dword_20CC760);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_RAND_strings  (binary VA: 0x19cc800)
// Original: ERR_load_RAND_strings
// ----------------------------------------------------------------------------
int ERR_load_RAND_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CC818);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CC818);
    return ERR_load_strings(0, &dword_20CC830);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RAND_set_rand_method  (binary VA: 0x19cc860)
// Original: RAND_set_rand_method
// ----------------------------------------------------------------------------
int RAND_set_rand_method(int a1)
{
  if ( dword_2141D14 != 0 )
  {
    ENGINE_finish((uint32_t *)dword_2141D14);
    dword_2141D14 = 0;
  }
  dword_2141D18 = a1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: RAND_get_rand_method  (binary VA: 0x19cc8b0)
// Original: RAND_get_rand_method
// ----------------------------------------------------------------------------
int RAND_get_rand_method()
{
  int result;
  int default_RAND;
  uint32_t *v2;

  result = dword_2141D18;
  if ( dword_2141D18 == 0 )
  {
    default_RAND = (int)(uintptr_t)(ENGINE_get_default_RAND());
    v2 = (uint32_t *)default_RAND;
    if ( default_RAND != 0 )
    {
      result = ENGINE_get_RAND(default_RAND);
      dword_2141D18 = result;
      if ( result != 0 )
      {
        dword_2141D14 = (int)(uintptr_t)(v2);
        return result;
      }
      ENGINE_finish(v2);
    }
    result = (int)(uintptr_t)(RAND_SSLeay());
    dword_2141D18 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RAND_set_rand_engine  (binary VA: 0x19cc920)
// Original: RAND_set_rand_engine
// ----------------------------------------------------------------------------
int RAND_set_rand_engine(uint32_t *a1)
{
  int v1;
  int RAND;

  if ( a1 == nullptr )
  {
    RAND = 0;
LABEL_5:
    v1 = 1;
    RAND_set_rand_method(RAND);
    dword_2141D14 = (int)(uintptr_t)(a1);
    return v1;
  }
  v1 = 0;
  if ( ENGINE_init(a1) != 0 )
  {
    RAND = ENGINE_get_RAND(a1);
    if ( RAND == 0 )
    {
      ENGINE_finish(a1);
      return v1;
    }
    goto LABEL_5;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: RAND_cleanup  (binary VA: 0x19cc9b0)
// Original: RAND_cleanup
// ----------------------------------------------------------------------------
int RAND_cleanup()
{
  int rand_method;
  void (*v1)(void);

  rand_method = RAND_get_rand_method();
  if ( rand_method != 0 )
  {
    v1 = *(void (**)(void))(rand_method + 8);
    if ( v1 != nullptr )
      v1();
  }
  return RAND_set_rand_method(0);
}



// ============================================================================
// Address:   0x19cc9f0 (size: 54 bytes)
// Symbol:    RAND_seed
// Demangled: RAND_seed
// ============================================================================
int (*RAND_seed(int a1, int a2))(int, int)
{
  int (*result)(int, int);

  result = (int (*)(int, int))RAND_get_rand_method();
  if ( result != nullptr )
  {
    result = *(int (**)(int, int))result;
    if ( result != nullptr )
      return (int (*)(int, int))result(a1, a2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: RAND_add  (binary VA: 0x19cca30)
// Original: RAND_add
// ----------------------------------------------------------------------------
int RAND_add(int a1, int a2, int64_t a3)
{
  int result;

  result = RAND_get_rand_method();
  if ( result != 0 )
  {
    result = *(uint32_t *)(result + 12);
    if ( result != 0 )
      return ((int (*)(int, int, uint32_t, uint32_t))result)(a1, a2, a3, HIDWORD(a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RAND_bytes  (binary VA: 0x19cca80)
// Original: RAND_bytes
// ----------------------------------------------------------------------------
int RAND_bytes(int a1, int a2)
{
  int rand_method;
  int (*v3)(int, int);

  rand_method = RAND_get_rand_method();
  if ( rand_method != 0 && (v3 = *(int (**)(int, int))(rand_method + 4)) != nullptr )
    return v3(a1, a2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: RAND_pseudo_bytes  (binary VA: 0x19ccac0)
// Original: RAND_pseudo_bytes
// ----------------------------------------------------------------------------
int RAND_pseudo_bytes(int a1, int a2)
{
  int rand_method;
  int (*v3)(int, int);

  rand_method = RAND_get_rand_method();
  if ( rand_method != 0 && (v3 = *(int (**)(int, int))(rand_method + 16)) != nullptr )
    return v3(a1, a2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: RAND_status  (binary VA: 0x19ccb00)
// Original: RAND_status
// ----------------------------------------------------------------------------
int RAND_status()
{
  int rand_method;
  int result;
  int (*v2)(void);

  rand_method = RAND_get_rand_method();
  result = 0;
  if ( rand_method != 0 )
  {
    v2 = *(int (**)(void))(rand_method + 20);
    if ( v2 != nullptr )
      return v2();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_RSAPrivateKey  (binary VA: 0x19d0590)
// Original: d2i_RSAPrivateKey
// ----------------------------------------------------------------------------
int d2i_RSAPrivateKey(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&RSAPrivateKey_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_RSAPrivateKey  (binary VA: 0x19d05d0)
// Original: i2d_RSAPrivateKey
// ----------------------------------------------------------------------------
int i2d_RSAPrivateKey(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&RSAPrivateKey_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_RSAPublicKey  (binary VA: 0x19d0610)
// Original: d2i_RSAPublicKey
// ----------------------------------------------------------------------------
int d2i_RSAPublicKey(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&RSAPublicKey_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_RSAPublicKey  (binary VA: 0x19d0650)
// Original: i2d_RSAPublicKey
// ----------------------------------------------------------------------------
int i2d_RSAPublicKey(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&RSAPublicKey_it));
}

// ----------------------------------------------------------------------------
// Function: ERR_load_RSA_strings  (binary VA: 0x19d06f0)
// Original: ERR_load_RSA_strings
// ----------------------------------------------------------------------------
int ERR_load_RSA_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CC840);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CC840);
    return ERR_load_strings(0, &dword_20CC9E0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_set_default_method  (binary VA: 0x19d0750)
// Original: RSA_set_default_method
// ----------------------------------------------------------------------------
int RSA_set_default_method(int a1)
{
  dword_2141D1C = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: RSA_get_default_method  (binary VA: 0x19d0770)
// Original: RSA_get_default_method
// ----------------------------------------------------------------------------
int RSA_get_default_method()
{
  int result;

  result = dword_2141D1C;
  if ( dword_2141D1C == 0 )
  {
    result = (int)(uintptr_t)(RSA_PKCS1_SSLeay());
    dword_2141D1C = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_get_method  (binary VA: 0x19d07b0)
// Original: RSA_get_method
// ----------------------------------------------------------------------------
int RSA_get_method(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: RSA_set_method  (binary VA: 0x19d07c0)
// Original: RSA_set_method
// ----------------------------------------------------------------------------
int RSA_set_method(int a1, int a2)
{
  void (*v2)(int);
  void (*v3)(int);

  v2 = *(void (**)(int))(*(uint32_t *)(a1 + 8) + 32);
  if ( v2 != nullptr )
    v2(a1);
  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    ENGINE_finish(*(uint32_t **)(a1 + 12));
    *(uint32_t *)(a1 + 12) = 0;
  }
  *(uint32_t *)(a1 + 8) = a2;
  v3 = *(void (**)(int))(a2 + 28);
  if ( v3 != nullptr )
    v3(a1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: RSA_new_method  (binary VA: 0x19d0830)
// Original: RSA_new_method
// ----------------------------------------------------------------------------
uint32_t * RSA_new_method(uint32_t *a1)
{
  int default_RSA;
  uint32_t *v2;
  int RSA;
  int v4;
  int (*v5)(uint32_t *);
  void *v7;
  void *v8;
  void *v9;

  default_RSA = (int)(uintptr_t)(a1);
  v2 = (uint32_t *)(CRYPTO_malloc(88, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v2 == nullptr )
  {
    ERR_put_error(4, 106, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v2;
  }
  v2[2] = RSA_get_default_method();
  if ( a1 != nullptr )
  {
    if ( ENGINE_init(a1) == 0 )
    {
      ERR_put_error(4, 106, 38, (int)(uintptr_t)(&unk_1B15112), 0);
      v8 = v2;
      v2 = nullptr;
      CRYPTO_free(v8);
      return v2;
    }
    v2[3] = (uint32_t)(uintptr_t)(a1);
  }
  else
  {
    default_RSA = (int)(uintptr_t)(ENGINE_get_default_RSA());
    v2[3] = default_RSA;
    if ( default_RSA == 0 )
      goto LABEL_6;
  }
  RSA = ENGINE_get_RSA(default_RSA);
  v2[2] = RSA;
  if ( RSA == 0 )
  {
    ERR_put_error(4, 106, 38, (int)(uintptr_t)(&unk_1B15112), 0);
    ENGINE_finish((uint32_t *)v2[3]);
    v9 = v2;
    v2 = nullptr;
    CRYPTO_free(v9);
    return v2;
  }
LABEL_6:
  v4 = v2[2];
  *v2 = 0;
  v2[1] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[14] = 1;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[19] = 0;
  v2[15] = *(uint32_t *)(v4 + 36);
  if ( CRYPTO_new_ex_data(6, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 12)) == 0 )
  {
    if ( v2[3] != 0 )
      ENGINE_finish((uint32_t *)v2[3]);
    goto LABEL_12;
  }
  v5 = *(int (**)(uint32_t *))(v2[2] + 28);
  if ( v5 != nullptr && v5(v2) == 0 )
  {
    if ( v2[3] != 0 )
      ENGINE_finish((uint32_t *)v2[3]);
    CRYPTO_free_ex_data(6, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 12));
LABEL_12:
    v7 = v2;
    v2 = nullptr;
    CRYPTO_free(v7);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: RSA_new  (binary VA: 0x19d0a70)
// Original: RSA_new
// ----------------------------------------------------------------------------
uint32_t * RSA_new()
{
  return RSA_new_method(nullptr);
}

// ----------------------------------------------------------------------------
// Function: RSA_free  (binary VA: 0x19d0aa0)
// Original: RSA_free
// ----------------------------------------------------------------------------
void RSA_free(void *a1)
{
  void (*v1)(void *);

  if ( a1 != nullptr && CRYPTO_add_lock((uint32_t *)a1 + 14, -1, 9, (int)(uintptr_t)(&unk_1B15112), 0) <= 0 )
  {
    v1 = *(void (**)(void *))(*((uint32_t *)a1 + 2) + 32);
    if ( v1 != nullptr )
      v1(a1);
    if ( *((uint32_t *)a1 + 3) != 0 )
      ENGINE_finish(*((uint32_t **)a1 + 3));
    CRYPTO_free_ex_data(6, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1) + 48);
    if ( *((uint32_t *)a1 + 4) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 4));
    if ( *((uint32_t *)a1 + 5) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 5));
    if ( *((uint32_t *)a1 + 6) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 6));
    if ( *((uint32_t *)a1 + 7) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 7));
    if ( *((uint32_t *)a1 + 8) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 8));
    if ( *((uint32_t *)a1 + 9) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 9));
    if ( *((uint32_t *)a1 + 10) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 10));
    if ( *((uint32_t *)a1 + 11) != 0 )
      BN_clear_free(*((uint8_t ***)a1 + 11));
    if ( *((uint32_t *)a1 + 20) != 0 )
      BN_BLINDING_free(*((void **)a1 + 20));
    if ( *((uint32_t *)a1 + 21) != 0 )
      BN_BLINDING_free(*((void **)a1 + 21));
    if ( *((uint32_t *)a1 + 19) != 0 )
      CRYPTO_free_locked(*((void **)a1 + 19));
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_up_ref  (binary VA: 0x19d0bf0)
// Original: RSA_up_ref
// ----------------------------------------------------------------------------
bool RSA_up_ref(int a1)
{
  return CRYPTO_add_lock((uint32_t *)(a1 + 56), 1, 9, (int)(uintptr_t)(&unk_1B15112), 0) > 1;
}

// ----------------------------------------------------------------------------
// Function: RSA_get_ex_new_index  (binary VA: 0x19d0c40)
// Original: RSA_get_ex_new_index
// ----------------------------------------------------------------------------
int RSA_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(6, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: RSA_set_ex_data  (binary VA: 0x19d0c90)
// Original: RSA_set_ex_data
// ----------------------------------------------------------------------------
int RSA_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 48), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: RSA_get_ex_data  (binary VA: 0x19d0cd0)
// Original: RSA_get_ex_data
// ----------------------------------------------------------------------------
int RSA_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 48), a2);
}

// ----------------------------------------------------------------------------
// Function: RSA_size  (binary VA: 0x19d0d00)
// Original: RSA_size
// ----------------------------------------------------------------------------
int RSA_size(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = BN_num_bits(*(uint32_t **)(a1 + 16));
  v2 = v1 + 14;
  v3 = v1 + 7;
  if ( v3 < 0 )
    v3 = v2;
  return v3 >> 3;
}

// ----------------------------------------------------------------------------
// Function: RSA_public_encrypt  (binary VA: 0x19d0d40)
// Original: RSA_public_encrypt
// ----------------------------------------------------------------------------
int RSA_public_encrypt(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(int, int, int, int, int))(*(uint32_t *)(a4 + 8) + 4))(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: RSA_private_encrypt  (binary VA: 0x19d0d80)
// Original: RSA_private_encrypt
// ----------------------------------------------------------------------------
int RSA_private_encrypt(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(int, int, int, int, int))(*(uint32_t *)(a4 + 8) + 12))(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: RSA_private_decrypt  (binary VA: 0x19d0dc0)
// Original: RSA_private_decrypt
// ----------------------------------------------------------------------------
int RSA_private_decrypt(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(int, int, int, int, int))(*(uint32_t *)(a4 + 8) + 16))(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: RSA_public_decrypt  (binary VA: 0x19d0e00)
// Original: RSA_public_decrypt
// ----------------------------------------------------------------------------
int RSA_public_decrypt(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(int, int, int, int, int))(*(uint32_t *)(a4 + 8) + 8))(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: RSA_flags  (binary VA: 0x19d0e40)
// Original: RSA_flags
// ----------------------------------------------------------------------------
int RSA_flags(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(*(uint32_t *)(a1 + 8) + 36);
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_blinding_off  (binary VA: 0x19d0e60)
// Original: RSA_blinding_off
// ----------------------------------------------------------------------------
unsigned int RSA_blinding_off(int a1)
{
  unsigned int result;

  if ( *(uint32_t *)(a1 + 80) != 0 )
  {
    BN_BLINDING_free(*(void **)(a1 + 80));
    *(uint32_t *)(a1 + 80) = 0;
  }
  result = *(uint32_t *)(a1 + 60) & 0xFFFFFFF7;
  LOBYTE(result) = *(uint8_t *)(a1 + 60) & 0x77 | 0x80;
  *(uint32_t *)(a1 + 60) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_setup_blinding  (binary VA: 0x19d0eb0)
// Original: RSA_setup_blinding
// ----------------------------------------------------------------------------
int RSA_setup_blinding(int a1, int *a2)
{
  int *v2;
  void **v3;
  int *v4;
  g4_int128_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  g4_int128_t *v10;
  void **v11;
  void **v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void **_g4_t_v15;
  typedef int _g4_t_param;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef g4_int128_t _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_param)) > _g4_s3 ? (20u + sizeof(_g4_t_param)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v21)) > _g4_s8 ? (48u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v22)) > _g4_s9 ? (64u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_param &param = *reinterpret_cast<_g4_t_param *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  v2 = a2;
  if ( a2 == nullptr )
  {
    v2 = (int *)(BN_CTX_new());
    if ( v2 == nullptr )
      return 0;
  }
  BN_CTX_start((int)(uintptr_t)(v2));
  v3 = (void **)BN_CTX_get(v2);
  if ( v3 == nullptr )
  {
    ERR_put_error(4, 136, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    param = 0;
    goto LABEL_12;
  }
  v3 = *(void ***)(a1 + 20);
  if ( v3 == nullptr )
  {
    v17 = *(uint32_t *)(a1 + 24);
    if ( *(uint32_t *)(a1 + 28) != 0 && *(uint32_t *)(a1 + 24) != 0 && *(uint32_t *)(a1 + 32) != 0 )
    {
      v14 = *(uint32_t *)(a1 + 28);
      v13 = *(uint32_t *)(a1 + 32);
      BN_CTX_start((int)(uintptr_t)(v2));
      v20 = BN_CTX_get(v2);
      v19 = BN_CTX_get(v2);
      v18 = BN_CTX_get(v2);
      if ( v18 != nullptr
        && (v11 = BN_value_one(), BN_sub(v19, v14, v11) != 0)
        && (v12 = BN_value_one(), BN_sub(v18, v13, v12) != 0)
        && BN_mul(v20, v19, v18, v2) != 0 )
      {
        v15 = (void **)BN_mod_inverse(0, v17, v20, v2);
        BN_CTX_end(v2);
        if ( v15 != nullptr )
        {
          v3 = v15;
          goto LABEL_4;
        }
      }
      else
      {
        BN_CTX_end(v2);
      }
    }
    ERR_put_error(4, 136, 140, (int)(uintptr_t)(&unk_1B15112), 0);
    param = 0;
    goto LABEL_12;
  }
LABEL_4:
  if ( RAND_status() == 0 )
  {
    v4 = *(int **)(a1 + 24);
    if ( v4 != nullptr && *v4 != 0 )
      RAND_add(*v4, 4 * v4[2], 0);
  }
  if ( (*(uint8_t *)(a1 + 61) & 1) != 0 )
  {
    v5 = *(g4_int128_t **)(a1 + 16);
  }
  else
  {
    v10 = *(g4_int128_t **)(a1 + 16);
    v21 = *v10;
    v22 = v10[1] & 0xFFFFFFFE | v22 & 1 | 6;
    v5 = &v21;
  }
  param = (int)(uintptr_t)(BN_BLINDING_create_param(
            nullptr,
            (int)(uintptr_t)(v3),
            (int)(uintptr_t)(v5),
            (int)(uintptr_t)(v2),
            *(uint32_t *)(*(uint32_t *)(a1 + 8) + 24),
            *(uint32_t *)(a1 + 64)));
  if ( param != 0 )
  {
    v6 = (uint32_t *)BN_BLINDING_thread_id(param);
    CRYPTO_THREADID_current(v8, v7, v6);
  }
  else
  {
    ERR_put_error(4, 136, 3, (int)(uintptr_t)(&unk_1B15112), 0);
  }
LABEL_12:
  BN_CTX_end(v2);
  if ( a2 == nullptr )
    BN_CTX_free((void **)v2);
  if ( *(uint32_t *)(a1 + 20) != 0 )
    return param;
  BN_free(v3);
  return param;
}

// ----------------------------------------------------------------------------
// Function: RSA_blinding_on  (binary VA: 0x19d1210)
// Original: RSA_blinding_on
// ----------------------------------------------------------------------------
int RSA_blinding_on(int a1, int *a2)
{
  int v2;
  int result;
  int v4;

  if ( *(uint32_t *)(a1 + 80) != 0 )
    RSA_blinding_off(a1);
  v2 = RSA_setup_blinding(a1, a2);
  *(uint32_t *)(a1 + 80) = v2;
  result = 0;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 60) | 8;
    LOBYTE(v4) = *(uint8_t *)(a1 + 60) & 0x77 | 8;
    *(uint32_t *)(a1 + 60) = v4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_memory_lock  (binary VA: 0x19d1280)
// Original: RSA_memory_lock
// ----------------------------------------------------------------------------
int RSA_memory_lock(uint32_t *a1)
{
  int result;
  int v2;
  int v3;
  int i;
  int *v5;
  uint32_t *v6;
  char *dest;
  int j;
  int v9;
  int v10;
  uint8_t *v11;
  uint32_t v12[13];

  result = 1;
  v2 = a1[6];
  if ( v2 != 0 )
  {
    v12[1] = (uint32_t)(uintptr_t)(a1 + 7);
    v12[2] = (uint32_t)(uintptr_t)(a1 + 8);
    v12[3] = (uint32_t)(uintptr_t)(a1 + 9);
    v12[4] = (uint32_t)(uintptr_t)(a1 + 10);
    v12[5] = (uint32_t)(uintptr_t)(a1 + 11);
    v12[0] = (uint32_t)(uintptr_t)(a1 + 6);
    v3 = 1;
    for ( i = 0; ; v2 = *(uint32_t *)v12[i] )
    {
      ++i;
      v3 += *(uint32_t *)(v2 + 4);
      if ( i == 6 )
        break;
    }
    v11 = CRYPTO_malloc_locked(4 * v3 + 124, (int)(uintptr_t)(&unk_1B15112), 0);
    v5 = (int *)(a1 + 6);
    if ( v11 != nullptr )
    {
      v6 = (uint32_t *)(v11);
      dest = (char *)(v11 + 31);
      for ( j = 0; ; v5 = (int *)v12[j] )
      {
        v9 = *v5;
        *v5 = (int)(uintptr_t)(v6);
        *v6 = *(uint32_t *)v9;
        v6[1] = *(uint32_t *)(v9 + 4);
        v6[2] = *(uint32_t *)(v9 + 8);
        v6[3] = *(uint32_t *)(v9 + 12);
        *v6 = (uint32_t)(uintptr_t)(dest);
        v6[4] = 2;
        v10 = j;
        memcpy(dest, *(const void **)v9, 4 * *(uint32_t *)(v9 + 4));
        v6 += 5;
        dest += 4 * *(uint32_t *)(v9 + 4);
        BN_clear_free((uint8_t **)v9);
        j = v10 + 1;
        if ( v10 == 5 )
          break;
      }
      a1[19] = (uint32_t)(uintptr_t)(v11);
      a1[15] &= 0xFFFFFFF9;
      return 1;
    }
    else
    {
      ERR_put_error(4, 130, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_verify_PKCS1_PSS  (binary VA: 0x19d24c0)
// Original: RSA_verify_PKCS1_PSS
// ----------------------------------------------------------------------------
void * RSA_verify_PKCS1_PSS(int a1, int a2, uint32_t *a3, uint8_t *a4, int a5)
{
  uint8_t *v5;
  int n;
  void *result;
  int v8;
  char *v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21[6];
  typedef uint8_t _g4_t_s1[76];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v21)) > _g4_s5 ? (40u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_s1)) > _g4_s6 ? (64u + sizeof(_g4_t_s1)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 64u);

  v5 = a4;
  n = EVP_MD_size((int)(uintptr_t)(a3));
  result = nullptr;
  if ( n >= 0 )
  {
    if ( a5 == -1 )
    {
      a5 = n;
    }
    else if ( a5 < -2 )
    {
      ERR_put_error(4, 126, 136, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    v16 = ((uint8_t)BN_num_bits(*(uint32_t **)(a1 + 16)) - 1) & 7;
    v8 = RSA_size(a1);
    if ( (*a4 & (255 << v16)) != 0 )
    {
      ERR_put_error(4, 126, 133, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    if ( v16 == 0 )
    {
      v5 = a4 + 1;
      --v8;
    }
    if ( v8 <= n + a5 + 1 )
    {
      ERR_put_error(4, 126, 109, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    if ( v5[v8 - 1] != 0xBC )
    {
      ERR_put_error(4, 126, 134, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    v20 = v8 - n;
    v19 = v8 - n - 1;
    v9 = (char *)(CRYPTO_malloc(v19, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v9 == nullptr )
    {
      ERR_put_error(4, 126, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    v10 = PKCS1_MGF1(v9, v19, &v5[v19], n, a3);
    v11 = 0;
    if ( v10 < 0 )
    {
LABEL_32:
      v17 = (void *)v11;
      CRYPTO_free(v9);
      return v17;
    }
    if ( v19 > 0 )
    {
      LOBYTE(v11) = 1;
      do
      {
        v9[v11 - 1] ^= v5[v11 - 1];
        ++v11;
      }
      while ( v11 != v20 );
    }
    if ( v16 != 0 )
    {
      v12 = *v9 & (255 >> (8 - v16));
      *v9 = v12;
    }
    else
    {
      v12 = *v9;
    }
    if ( v12 != 0 )
    {
      v14 = 1;
    }
    else
    {
      if ( v20 - 2 <= 0 )
      {
LABEL_34:
        ERR_put_error(4, 126, 135, (int)(uintptr_t)(&unk_1B15112), 0);
        v11 = 0;
        goto LABEL_32;
      }
      v13 = 0;
      while ( 1 )
      {
        v12 = v9[++v13];
        if ( v12 != 0 )
          break;
        if ( v13 >= v20 - 2 )
          goto LABEL_34;
      }
      v14 = v13 + 1;
    }
    if ( v12 == 1 )
    {
      if ( a5 < 0 || v19 - v14 == a5 )
      {
        v18 = (void *)v14;
        EVP_MD_CTX_init(v21);
        EVP_DigestInit_ex((int)(uintptr_t)(v21), a3, nullptr);
        EVP_DigestUpdate((int)(uintptr_t)(v21), (int)(uintptr_t)(&unk_1D2A7A6), 8);
        EVP_DigestUpdate((int)(uintptr_t)(v21), a2, n);
        if ( (void *)v19 != v18 )
          EVP_DigestUpdate((int)(uintptr_t)(v21), (int)(uintptr_t)(v18) + (uint32_t)(uintptr_t)(v9), v19 - (uint32_t)(uintptr_t)(v18));
        EVP_DigestFinal(v21, (int)(uintptr_t)(s1), nullptr);
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v21));
        v15 = memcmp(s1, &v5[v19], n);
        v11 = 1;
        if ( v15 != 0 )
        {
          ERR_put_error(4, 126, 104, (int)(uintptr_t)(&unk_1B15112), 0);
          v11 = 0;
        }
      }
      else
      {
        ERR_put_error(4, 126, 136, (int)(uintptr_t)(&unk_1B15112), 0);
        v11 = 0;
      }
      goto LABEL_32;
    }
    goto LABEL_34;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_PKCS1_PSS  (binary VA: 0x19d2990)
// Original: RSA_padding_add_PKCS1_PSS
// ----------------------------------------------------------------------------
int RSA_padding_add_PKCS1_PSS(int a1, uint8_t *a2, int a3, uint32_t *a4, signed int a5)
{
  int v5;
  int v6;
  int result;
  int v8;
  uint8_t *v9;
  void *v10;
  int v11;
  uint8_t *v12;
  int i;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_v19[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);

  v5 = a5;
  v6 = EVP_MD_size((int)(uintptr_t)(a4));
  result = 0;
  if ( v6 < 0 )
    return result;
  if ( a5 == -1 )
  {
    v5 = v6;
  }
  else if ( a5 < -2 )
  {
    ERR_put_error(4, 125, 136, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v15 = ((uint8_t)BN_num_bits(*(uint32_t **)(a1 + 16)) - 1) & 7;
  v8 = RSA_size(a1);
  v16 = v8;
  if ( v15 == 0 )
  {
    v16 = v8 - 1;
    *a2++ = 0;
  }
  if ( v5 == -2 )
  {
    v5 = v16 - v6 - 2;
    if ( v5 > 0 )
    {
LABEL_9:
      v9 = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v9;
      if ( v9 == nullptr )
      {
        ERR_put_error(4, 125, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
      if ( RAND_bytes((int)(uintptr_t)(v9), v5) <= 0 )
      {
        result = 0;
LABEL_21:
        v14 = result;
        CRYPTO_free(v10);
        return v14;
      }
      v17 = v16 - v6 - 1;
      v18 = (int)(uintptr_t)(&a2[v17]);
      EVP_MD_CTX_init(v19);
      EVP_DigestInit_ex((int)(uintptr_t)(v19), a4, nullptr);
      EVP_DigestUpdate((int)(uintptr_t)(v19), (int)(uintptr_t)(&unk_1D2A7A6), 8);
      EVP_DigestUpdate((int)(uintptr_t)(v19), a3, v6);
      goto LABEL_12;
    }
  }
  else
  {
    if ( v16 <= v6 + v5 + 1 )
    {
      ERR_put_error(4, 125, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    if ( v5 > 0 )
      goto LABEL_9;
  }
  v17 = v16 - v6 - 1;
  v18 = (int)(uintptr_t)(&a2[v17]);
  EVP_MD_CTX_init(v19);
  v10 = nullptr;
  EVP_DigestInit_ex((int)(uintptr_t)(v19), a4, nullptr);
  EVP_DigestUpdate((int)(uintptr_t)(v19), (int)(uintptr_t)(&unk_1D2A7A6), 8);
  EVP_DigestUpdate((int)(uintptr_t)(v19), a3, v6);
  if ( v5 != 0 )
LABEL_12:
    EVP_DigestUpdate((int)(uintptr_t)(v19), (int)(uintptr_t)(v10), v5);
  EVP_DigestFinal(v19, v18, nullptr);
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v19));
  v11 = PKCS1_MGF1(a2, v17, v18, v6, a4);
  result = 0;
  if ( v11 == 0 )
  {
    v12 = &a2[v16 - v5 - v6 - 2];
    *v12 ^= 1u;
    if ( v5 > 0 )
    {
      for ( i = 0; i != v5; ++i )
        v12[i + 1] ^= *((uint8_t *)v10 + i);
    }
    if ( v15 != 0 )
      *a2 &= 255 >> (8 - v15);
    a2[v16 - 1] = -68;
    result = 1;
  }
  if ( v10 != nullptr )
    goto LABEL_21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_sign_ASN1_OCTET_STRING  (binary VA: 0x19d2d70)
// Original: RSA_sign_ASN1_OCTET_STRING
// ----------------------------------------------------------------------------
int RSA_sign_ASN1_OCTET_STRING(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  int v11;
  typedef size_t _g4_t_v13;
  typedef size_t _g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v14)) > _g4_s1 ? (44u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v15)) > _g4_s2 ? (60u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v16)) > _g4_s3 ? (64u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);

  v16[0] = a3;
  v16[1] = 4;
  v16[2] = a2;
  v6 = i2d_ASN1_OCTET_STRING((int)(uintptr_t)(v16), nullptr);
  v7 = RSA_size(a6);
  if ( v6 >= v7 - 10 )
  {
    v10 = 0;
    ERR_put_error(4, 118, 112, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v14 = v7 + 1;
    v8 = CRYPTO_malloc(v7 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v9 = v8;
    if ( v8 != nullptr )
    {
      v15 = v8;
      i2d_ASN1_OCTET_STRING((int)(uintptr_t)(v16), (void **)&v15);
      v13 = v6;
      v10 = 0;
      v11 = RSA_private_encrypt(v13, (int)(uintptr_t)(v9), a4, a6, 1);
      if ( v11 > 0 )
      {
        LOWORD(v10) = 1;
        *a5 = v11;
      }
      OPENSSL_cleanse(v9, v14);
      CRYPTO_free(v9);
    }
    else
    {
      v10 = 0;
      ERR_put_error(4, 118, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: RSA_verify_ASN1_OCTET_STRING  (binary VA: 0x19d2ef0)
// Original: RSA_verify_ASN1_OCTET_STRING
// ----------------------------------------------------------------------------
int RSA_verify_ASN1_OCTET_STRING(int a1, void *s1, int a3, int a4, size_t a5, int a6)
{
  int v6;
  char *v8;
  char *v9;
  int v10;
  size_t *v11;
  size_t *v12;
  size_t n;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v19)) > _g4_s2 ? (28u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v6 = RSA_size(a6);
  if ( v6 == a5 )
  {
    v8 = (char *)(CRYPTO_malloc(v6, (int)(uintptr_t)(&unk_1B15112), 0));
    v9 = v8;
    if ( v8 != nullptr )
    {
      v10 = RSA_public_decrypt(a5, a4, (int)(uintptr_t)(v8), a6, 1);
      if ( v10 > 0 )
      {
        v19 = v9;
        v11 = (size_t *)d2i_ASN1_OCTET_STRING(nullptr, &v19, v10);
        v12 = v11;
        if ( v11 != nullptr )
        {
          n = *v11;
          if ( n != a3 || (v14 = memcmp(s1, (const void *)v12[2], n), v15 = 1, v14 != 0) )
          {
            ERR_put_error(4, 120, 104, (int)(uintptr_t)(&unk_1B15112), 0);
            v15 = 0;
          }
          v17 = v15;
          ASN1_STRING_free((void **)v12);
          v16 = v17;
          goto LABEL_10;
        }
      }
      if ( v9 != nullptr )
      {
        v16 = 0;
LABEL_10:
        v18 = v16;
        OPENSSL_cleanse((uint8_t *)v9, a5);
        CRYPTO_free(v9);
        return v18;
      }
    }
    else
    {
      ERR_put_error(4, 120, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    return 0;
  }
  ERR_put_error(4, 120, 119, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: RSA_sign  (binary VA: 0x19d30b0)
// Original: RSA_sign
// ----------------------------------------------------------------------------
char RSA_sign(unsigned int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v6;
  int (*v7)(unsigned int, int, int, int, int *, int);
  char result;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef uint32_t _g4_t_v19[2];
  typedef char **_g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v20)) > _g4_s7 ? (40u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v21)) > _g4_s8 ? (48u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);

  v6 = a2;
  if ( (*(uint8_t *)(a6 + 60) & 0x40) != 0 )
  {
    v7 = *(int (**)(unsigned int, int, int, int, int *, int))(*(uint32_t *)(a6 + 8) + 44);
    if ( v7 != nullptr )
      return v7(a1, a2, a3, a4, a5, a6);
  }
  if ( a1 == 114 )
  {
    v15 = 36;
    if ( a3 != 36 )
    {
      ERR_put_error(4, 117, 131, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    v18[0] = (uint32_t)(uintptr_t)(&v20);
    v20 = OBJ_nid2obj(a1);
    if ( v20 == nullptr )
    {
      ERR_put_error(4, 117, 117, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    if ( *(uint32_t *)(*(uint32_t *)v18[0] + 12) == 0 )
    {
      ERR_put_error(4, 117, 116, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v19[1] = 0;
    *(uint32_t *)(v18[0] + 4) = (uint32_t)(uintptr_t)(v19);
    v19[0] = 5;
    v21[2] = a2;
    v18[1] = (uint32_t)(uintptr_t)(v21);
    v21[0] = a3;
    v15 = i2d_X509_SIG(v18, 0);
    v6 = 0;
  }
  v13 = v6;
  v16 = RSA_size(a6);
  v9 = v13;
  if ( v15 >= v16 - 10 )
  {
    ERR_put_error(4, 117, 112, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a1 == 114 )
  {
    v11 = nullptr;
  }
  else
  {
    v10 = CRYPTO_malloc(v16 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    v11 = v10;
    if ( v10 == nullptr )
    {
      ERR_put_error(4, 117, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v17 = v10;
    i2d_X509_SIG(v18, &v17);
    v9 = (int)(uintptr_t)(v11);
  }
  v12 = RSA_private_encrypt(v15, v9, a4, a6, 1);
  result = 0;
  if ( v12 > 0 )
  {
    result = 1;
    *a5 = v12;
  }
  if ( a1 != 114 )
  {
    v14 = result;
    OPENSSL_cleanse(v11, v16 + 1);
    CRYPTO_free(v11);
    return v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSA_verify  (binary VA: 0x19d3840)
// Original: RSA_verify
// ----------------------------------------------------------------------------
int RSA_verify(unsigned int a1, void *a2, size_t a3, int a4, size_t a5, int a6)
{
  int (*v6)(unsigned int, void *, size_t, int, size_t, int);

  if ( (*(uint8_t *)(a6 + 60) & 0x40) != 0
    && (v6 = *(int (**)(unsigned int, void *, size_t, int, size_t, int))(*(uint32_t *)(a6 + 8) + 48)) != nullptr )
  {
    return v6(a1, a2, a3, a4, a5, a6);
  }
  else
  {
    return int_rsa_verify(a1, a2, a3, nullptr, nullptr, a4, a5, a6);
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_add_X931  (binary VA: 0x19d38f0)
// Original: RSA_padding_add_X931
// ----------------------------------------------------------------------------
int RSA_padding_add_X931(uint8_t *a1, int a2, void *src, size_t n)
{
  size_t v4;
  uint8_t *v5;
  void *v6;

  v4 = a2 - n;
  if ( (int)(a2 - n - 2) < 0 )
  {
    ERR_put_error(4, 127, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  else
  {
    if ( v4 == 2 )
    {
      *a1 = 106;
      v6 = a1 + 1;
    }
    else
    {
      *a1 = 107;
      v5 = a1 + 1;
      if ( v4 != 3 )
      {
        v5 += v4 - 3;
        memset(a1 + 1, 187, v4 - 3);
      }
      *v5 = -70;
      v6 = v5 + 1;
    }
    memcpy(v6, src, n);
    *((uint8_t *)v6 + n) = -52;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: RSA_padding_check_X931  (binary VA: 0x19d39d0)
// Original: RSA_padding_check_X931
// ----------------------------------------------------------------------------
size_t RSA_padding_check_X931(void *dest, int a2, uint8_t *a3, int a4, int a5)
{
  char *src;
  size_t n;
  int v8;
  int v9;
  char v10;

  if ( a5 == a4 && (uint8_t)(*a3 - 106) <= 1u )
  {
    src = (char *)(a3 + 1);
    n = a5 - 2;
    if ( *a3 == 107 )
    {
      v8 = a5 - 3;
      if ( a5 - 3 <= 0 || a3[1] != 0xBB )
      {
LABEL_15:
        n = 0xFFFFFFFF;
        ERR_put_error(4, 128, 138, (int)(uintptr_t)(&unk_1B15112), 0);
        return n;
      }
      src = (char *)(a3 + 2);
      v9 = 0;
      while ( v8 > ++v9 )
      {
        v10 = *src++;
        if ( v10 == -70 )
          break;
        if ( v10 != -69 )
          goto LABEL_15;
      }
      n = v8 - v9;
    }
    if ( src[n] == -52 )
    {
      memcpy(dest, src, n);
    }
    else
    {
      n = 0xFFFFFFFF;
      ERR_put_error(4, 128, 139, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    n = 0xFFFFFFFF;
    ERR_put_error(4, 128, 137, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: RSA_X931_hash_id  (binary VA: 0x19d3b40)
// Original: RSA_X931_hash_id
// ----------------------------------------------------------------------------
char RSA_X931_hash_id(int a1)
{
  char result;

  result = 52;
  if ( a1 != 672 )
  {
    if ( a1 <= 672 )
    {
      result = 51;
      if ( a1 == 64 )
        return result;
    }
    else
    {
      result = 54;
      if ( a1 == 673 )
        return result;
      result = 53;
      if ( a1 == 674 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SHA1_Update  (binary VA: 0x19d7ab0)
// Original: SHA1_Update
// ----------------------------------------------------------------------------
int SHA1_Update(int a1, char *src, size_t a3)
{
  size_t n;
  size_t v4;
  size_t v5;
  bool v6; // cc
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  char *v11;
  uint16_t *v12;
  uint8_t *v13;
  size_t v14;
  size_t v16;
  void *dest;
  char *v18;
  int v19;

  n = a3;
  if ( a3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    v5 = v4 + 8 * a3;
    v6 = v4 <= v5;
    v7 = *(uint32_t *)(a1 + 24);
    if ( !v6 )
      ++v7;
    *(uint32_t *)(a1 + 20) = v5;
    v8 = *(uint32_t *)(a1 + 92);
    *(uint32_t *)(a1 + 24) = (a3 >> 29) + v7;
    v18 = src;
    if ( v8 != 0 )
    {
      v19 = a1 + 28;
      if ( a3 <= 0x3F && a3 + v8 <= 0x3F )
      {
        memcpy((void *)(v19 + v8), src, a3);
        *(uint32_t *)(a1 + 92) += a3;
        return 1;
      }
      v9 = 64 - v8;
      n = a3 - (64 - v8);
      memcpy((void *)(v19 + v8), src, 64 - v8);
      sub_19D63E0((int *)a1, v19, 1);
      v10 = 64;
      v11 = &src[v9];
      v12 = (uint16_t *)(a1 + 28);
      v18 = v11;
      *(uint32_t *)(a1 + 92) = 0;
      if ( (v19 & 1) != 0 )
      {
        *(uint8_t *)(a1 + 28) = 0;
        v12 = (uint16_t *)(a1 + 29);
        LOBYTE(v10) = 63;
      }
      if ( ((uint8_t)(uintptr_t)(v12) & 2) != 0 )
      {
        *v12 = 0;
        v10 -= 2;
        ++v12;
      }
      memset(v12, 0, 4 * (v10 >> 2));
      v13 = (uint8_t *)(&v12[2 * (v10 >> 2)]);
      if ( (v10 & 2) == 0 )
      {
        if ( (v10 & 1) == 0 )
          goto LABEL_13;
LABEL_20:
        *v13 = 0;
        v14 = n >> 6;
        if ( n >> 6 == 0 )
        {
LABEL_14:
          if ( n == 0 )
            return 1;
LABEL_16:
          *(uint32_t *)(a1 + 92) = n;
          memcpy((void *)(a1 + 28), v18, n);
          return 1;
        }
LABEL_17:
        dest = (void *)v14;
        v16 = v14 << 6;
        n -= v16;
        sub_19D63E0((int *)a1, (int)(uintptr_t)(v18), (int)(uintptr_t)(dest));
        v18 += v16;
        if ( n == 0 )
          return 1;
        goto LABEL_16;
      }
      *(uint16_t *)v13 = 0;
      v13 += 2;
      if ( (v10 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_13:
    v14 = n >> 6;
    if ( n >> 6 == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA1_Transform  (binary VA: 0x19d7c70)
// Original: SHA1_Transform
// ----------------------------------------------------------------------------
int SHA1_Transform(int *a1, int a2)
{
  return sub_19D63E0(a1, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: SHA1_Final  (binary VA: 0x19d7c90)
// Original: SHA1_Final
// ----------------------------------------------------------------------------
int SHA1_Final(uint8_t *a1, int a2)
{
  int v2;
  int v3;
  size_t n;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  uint16_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = *(uint32_t *)(a2 + 92);
  v3 = a2 + 28;
  n = 55 - v2;
  v5 = v2 + 1;
  *(uint8_t *)(a2 + v2 + 28) = 0x80;
  if ( (unsigned int)(v2 + 1) > 0x38 )
  {
    memset((void *)(v3 + v5), 0, 63 - v2);
    sub_19D63E0((int *)a2, v3, 1);
    n = 56;
    v5 = 0;
  }
  memset((void *)(v3 + v5), 0, n);
  v6 = *(uint32_t *)(a2 + 24);
  *(uint8_t *)(a2 + 87) = v6;
  *(uint8_t *)(a2 + 84) = HIBYTE(v6);
  *(uint8_t *)(a2 + 85) = BYTE2(v6);
  v7 = v6 >> 8;
  v8 = *(uint32_t *)(a2 + 20);
  *(uint8_t *)(a2 + 86) = v7;
  *(uint8_t *)(a2 + 91) = v8;
  *(uint8_t *)(a2 + 88) = HIBYTE(v8);
  *(uint8_t *)(a2 + 89) = BYTE2(v8);
  *(uint8_t *)(a2 + 90) = BYTE1(v8);
  sub_19D63E0((int *)a2, v3, 1);
  *(uint32_t *)(a2 + 92) = 0;
  v9 = 64;
  if ( (v3 & 1) != 0 )
  {
    v3 = a2 + 29;
    *(uint8_t *)(a2 + 28) = 0;
    LOBYTE(v9) = 63;
    if ( ((a2 + 29) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( (v3 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *(uint16_t *)v3 = 0;
  v9 -= 2;
  v3 += 2;
LABEL_5:
  memset((void *)v3, 0, 4 * (v9 >> 2));
  v10 = (uint16_t *)(v3 + 4 * (v9 >> 2));
  if ( (v9 & 2) != 0 )
    *v10++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v10 = 0;
  v11 = *(uint32_t *)a2;
  a1[3] = *(uint32_t *)a2;
  *a1 = HIBYTE(v11);
  a1[1] = BYTE2(v11);
  a1[2] = BYTE1(v11);
  v12 = *(uint32_t *)(a2 + 4);
  a1[7] = v12;
  a1[4] = HIBYTE(v12);
  a1[5] = BYTE2(v12);
  a1[6] = BYTE1(v12);
  v13 = *(uint32_t *)(a2 + 8);
  a1[11] = v13;
  a1[8] = HIBYTE(v13);
  a1[9] = BYTE2(v13);
  a1[10] = BYTE1(v13);
  v14 = *(uint32_t *)(a2 + 12);
  a1[15] = v14;
  a1[12] = HIBYTE(v14);
  a1[13] = BYTE2(v14);
  a1[14] = BYTE1(v14);
  v15 = *(uint32_t *)(a2 + 16);
  a1[19] = v15;
  a1[16] = HIBYTE(v15);
  a1[17] = BYTE2(v15);
  a1[18] = BYTE1(v15);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA1_Init  (binary VA: 0x19d7e70)
// Original: SHA1_Init
// ----------------------------------------------------------------------------
int SHA1_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 96;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 95;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v3++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  *(uint32_t *)a1 = 1732584193;
  *(uint32_t *)(a1 + 4) = -271733879;
  *(uint32_t *)(a1 + 8) = -1732584194;
  *(uint32_t *)(a1 + 12) = 271733878;
  *(uint32_t *)(a1 + 16) = -1009589776;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA256_Init  (binary VA: 0x19d9250)
// Original: SHA256_Init
// ----------------------------------------------------------------------------
int SHA256_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 112;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 111;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v3++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  *(uint32_t *)a1 = 1779033703;
  *(uint32_t *)(a1 + 4) = -1150833019;
  *(uint32_t *)(a1 + 8) = 1013904242;
  *(uint32_t *)(a1 + 12) = -1521486534;
  *(uint32_t *)(a1 + 16) = 1359893119;
  *(uint32_t *)(a1 + 20) = -1694144372;
  *(uint32_t *)(a1 + 24) = 528734635;
  *(uint32_t *)(a1 + 28) = 1541459225;
  *(uint32_t *)(a1 + 108) = 32;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA256_Update  (binary VA: 0x19d9300)
// Original: SHA256_Update
// ----------------------------------------------------------------------------
int SHA256_Update(int a1, char *src, size_t a3)
{
  size_t n;
  size_t v4;
  size_t v5;
  bool v6; // cc
  int v7;
  int v8;
  int v9;
  uint16_t *v10;
  unsigned int v11;
  uint8_t *v12;
  size_t v13;
  size_t v15;
  void *dest;
  int v17;

  n = a3;
  if ( a3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 32);
    v5 = v4 + 8 * a3;
    v6 = v4 <= v5;
    v7 = *(uint32_t *)(a1 + 36);
    if ( !v6 )
      ++v7;
    *(uint32_t *)(a1 + 32) = v5;
    v8 = *(uint32_t *)(a1 + 104);
    *(uint32_t *)(a1 + 36) = (a3 >> 29) + v7;
    if ( v8 != 0 )
    {
      v17 = a1 + 40;
      if ( a3 <= 0x3F && a3 + v8 <= 0x3F )
      {
        memcpy((void *)(v17 + v8), src, a3);
        *(uint32_t *)(a1 + 104) += a3;
        return 1;
      }
      v9 = 64 - v8;
      n = a3 - (64 - v8);
      memcpy((void *)(v17 + v8), src, 64 - v8);
      sub_19D7F00(a1, v17, 1);
      src += v9;
      v10 = (uint16_t *)(a1 + 40);
      *(uint32_t *)(a1 + 104) = 0;
      v11 = 64;
      if ( (v17 & 1) != 0 )
      {
        *(uint8_t *)(a1 + 40) = 0;
        v10 = (uint16_t *)(a1 + 41);
        LOBYTE(v11) = 63;
      }
      if ( ((uint8_t)(uintptr_t)(v10) & 2) != 0 )
      {
        *v10 = 0;
        v11 -= 2;
        ++v10;
      }
      memset(v10, 0, 4 * (v11 >> 2));
      v12 = (uint8_t *)(&v10[2 * (v11 >> 2)]);
      if ( (v11 & 2) == 0 )
      {
        if ( (v11 & 1) == 0 )
          goto LABEL_13;
LABEL_20:
        *v12 = 0;
        v13 = n >> 6;
        if ( n >> 6 == 0 )
        {
LABEL_14:
          if ( n == 0 )
            return 1;
LABEL_16:
          *(uint32_t *)(a1 + 104) = n;
          memcpy((void *)(a1 + 40), src, n);
          return 1;
        }
LABEL_17:
        dest = (void *)v13;
        v15 = v13 << 6;
        n -= v15;
        sub_19D7F00(a1, (int)(uintptr_t)(src), (int)(uintptr_t)(dest));
        src += v15;
        if ( n == 0 )
          return 1;
        goto LABEL_16;
      }
      *(uint16_t *)v12 = 0;
      v12 += 2;
      if ( (v11 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_13:
    v13 = n >> 6;
    if ( n >> 6 == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA256_Transform  (binary VA: 0x19d94f0)
// Original: SHA256_Transform
// ----------------------------------------------------------------------------
signed int SHA256_Transform(signed int a1, int a2)
{
  return sub_19D7F00(a1, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: SHA256_Final  (binary VA: 0x19d9510)
// Original: SHA256_Final
// ----------------------------------------------------------------------------
char SHA256_Final(uint8_t *a1, signed int a2)
{
  int v3;
  int v4;
  size_t n;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  uint16_t *v11;
  unsigned int v12;
  char result;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v3 = *(uint32_t *)(a2 + 104);
  v4 = a2 + 40;
  n = 55 - v3;
  v6 = v3 + 1;
  *(uint8_t *)(a2 + v3 + 40) = 0x80;
  if ( (unsigned int)(v3 + 1) > 0x38 )
  {
    memset((void *)(v4 + v6), 0, 63 - v3);
    sub_19D7F00(a2, v4, 1);
    n = 56;
    v6 = 0;
  }
  memset((void *)(v4 + v6), 0, n);
  v7 = *(uint32_t *)(a2 + 36);
  *(uint8_t *)(a2 + 99) = v7;
  *(uint8_t *)(a2 + 96) = HIBYTE(v7);
  *(uint8_t *)(a2 + 97) = BYTE2(v7);
  v8 = v7 >> 8;
  v9 = *(uint32_t *)(a2 + 32);
  *(uint8_t *)(a2 + 98) = v8;
  *(uint8_t *)(a2 + 103) = v9;
  *(uint8_t *)(a2 + 100) = HIBYTE(v9);
  *(uint8_t *)(a2 + 101) = BYTE2(v9);
  *(uint8_t *)(a2 + 102) = BYTE1(v9);
  sub_19D7F00(a2, v4, 1);
  *(uint32_t *)(a2 + 104) = 0;
  v10 = 64;
  if ( (v4 & 1) != 0 )
  {
    v4 = a2 + 41;
    *(uint8_t *)(a2 + 40) = 0;
    LOBYTE(v10) = 63;
    if ( ((a2 + 41) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *(uint16_t *)v4 = 0;
  v10 -= 2;
  v4 += 2;
LABEL_5:
  memset((void *)v4, 0, 4 * (v10 >> 2));
  v11 = (uint16_t *)(v4 + 4 * (v10 >> 2));
  if ( (v10 & 2) != 0 )
    *v11++ = 0;
  if ( (v10 & 1) != 0 )
    *(uint8_t *)v11 = 0;
  v12 = *(uint32_t *)(a2 + 108);
  if ( v12 == 28 )
  {
    v18 = 0;
    do
    {
      v19 = *(uint32_t *)(a2 + 4 * v18++);
      a1[3] = v19;
      *a1 = HIBYTE(v19);
      a1[1] = BYTE2(v19);
      a1[2] = BYTE1(v19);
      a1 += 4;
    }
    while ( v18 != 7 );
    return 1;
  }
  else if ( v12 == 32 )
  {
    v16 = 0;
    do
    {
      v17 = *(uint32_t *)(a2 + 4 * v16++);
      a1[3] = v17;
      *a1 = HIBYTE(v17);
      a1[1] = BYTE2(v17);
      a1[2] = BYTE1(v17);
      a1 += 4;
    }
    while ( v16 != 8 );
    return 1;
  }
  else
  {
    result = 0;
    if ( v12 <= 0x20 )
    {
      result = 1;
      if ( v12 >> 2 != 0 )
      {
        v14 = 0;
        do
        {
          v15 = *(uint32_t *)(a2 + 4 * v14++);
          a1[3] = v15;
          *a1 = HIBYTE(v15);
          a1[1] = BYTE2(v15);
          a1[2] = BYTE1(v15);
          a1 += 4;
        }
        while ( v14 < *(uint32_t *)(a2 + 108) >> 2 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SHA256  (binary VA: 0x19d9760)
// Original: SHA256
// ----------------------------------------------------------------------------
uint8_t * SHA256(char *a1, size_t a2, uint8_t *a3)
{
  uint8_t *v3;
  uint8_t v5[112];

  v3 = a3;
  if ( a3 == nullptr )
    v3 = (uint8_t *)(&unk_2141D40);
  SHA256_Init((int)(uintptr_t)(v5));
  SHA256_Update((int)(uintptr_t)(v5), a1, a2);
  SHA256_Final(v3, (signed int)(uintptr_t)(v5));
  OPENSSL_cleanse(v5, 0x70u);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: SHA512_Init  (binary VA: 0x19da3d0)
// Original: SHA512_Init
// ----------------------------------------------------------------------------
int SHA512_Init(uint32_t *a1)
{
  *a1 = -205731576;
  a1[1] = 1779033703;
  a1[2] = -2067093701;
  a1[3] = -1150833019;
  a1[4] = -23791573;
  a1[5] = 1013904242;
  a1[6] = 1595750129;
  a1[7] = -1521486534;
  a1[8] = -1377402159;
  a1[9] = 1359893119;
  a1[10] = 725511199;
  a1[11] = -1694144372;
  a1[12] = -79577749;
  a1[13] = 528734635;
  a1[14] = 327033209;
  a1[15] = 1541459225;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[52] = 0;
  a1[53] = 64;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA512_Final  (binary VA: 0x19da480)
// Original: SHA512_Final
// ----------------------------------------------------------------------------
int SHA512_Final(uint8_t *a1, int a2)
{
  int v2;
  uint8_t *v3;
  int v4;
  size_t n;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  char v10;
  unsigned int v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v2 = a2;
  v3 = a1;
  v22 = a2 + 80;
  v4 = *(uint32_t *)(a2 + 208);
  n = 111 - v4;
  v6 = v4 + 1;
  *(uint8_t *)(a2 + v4 + 80) = 0x80;
  if ( (unsigned int)(v4 + 1) > 0x70 )
  {
    v6 = 0;
    memset((void *)(a2 + v4 + 81), 0, 127 - v4);
    sub_19D98A0((int64_t *)a2, v22, 1);
    n = 112;
    v2 = a2;
  }
  v21 = v2;
  memset((void *)(v2 + v6 + 80), 0, n);
  v7 = *(uint32_t *)(v21 + 64);
  v8 = *(uint32_t *)(v21 + 68);
  *(uint8_t *)(v21 + 207) = v7;
  *(uint8_t *)(v21 + 206) = BYTE1(v7);
  *(uint8_t *)(v21 + 205) = BYTE2(v7);
  *(uint8_t *)(v21 + 204) = HIBYTE(v7);
  v9 = *(uint32_t *)(v21 + 72);
  *(uint8_t *)(v21 + 202) = BYTE1(v8);
  v10 = v8;
  *(uint8_t *)(v21 + 201) = BYTE2(v8);
  v11 = HIBYTE(v8);
  v12 = *(uint32_t *)(v21 + 76);
  *(uint8_t *)(v21 + 200) = v11;
  *(uint8_t *)(v21 + 203) = v10;
  *(uint8_t *)(v21 + 199) = v9;
  *(uint8_t *)(v21 + 198) = BYTE1(v9);
  *(uint8_t *)(v21 + 197) = BYTE2(v9);
  *(uint8_t *)(v21 + 196) = HIBYTE(v9);
  *(uint8_t *)(v21 + 194) = BYTE1(v12);
  *(uint8_t *)(v21 + 195) = v12;
  *(uint8_t *)(v21 + 193) = BYTE2(v12);
  *(uint8_t *)(v21 + 192) = HIBYTE(v12);
  sub_19D98A0((int64_t *)v21, v22, 1);
  result = 0;
  if ( a1 != nullptr )
  {
    v14 = *(uint32_t *)(v21 + 212);
    if ( v14 == 48 )
    {
      v18 = 0;
      do
      {
        v19 = *(uint32_t *)(v21 + 8 * v18 + 4);
        v20 = *(uint32_t *)(v21 + 8 * v18++);
        *v3 = HIBYTE(v19);
        v3[1] = BYTE2(v19);
        v3[2] = BYTE1(v19);
        v3[3] = v19;
        v3[4] = HIBYTE(v20);
        v3[5] = BYTE2(v20);
        v3[6] = BYTE1(v20);
        v3[7] = v20;
        v3 += 8;
      }
      while ( v18 != 6 );
      return 1;
    }
    else if ( v14 == 64 )
    {
      v15 = 0;
      do
      {
        v16 = *(uint32_t *)(v21 + 8 * v15 + 4);
        v17 = *(uint32_t *)(v21 + 8 * v15++);
        *v3 = HIBYTE(v16);
        v3[1] = BYTE2(v16);
        v3[2] = BYTE1(v16);
        v3[3] = v16;
        v3[4] = HIBYTE(v17);
        v3[5] = BYTE2(v17);
        v3[6] = BYTE1(v17);
        v3[7] = v17;
        v3 += 8;
      }
      while ( v15 != 8 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SHA512_Update  (binary VA: 0x19da730)
// Original: SHA512_Update
// ----------------------------------------------------------------------------
int SHA512_Update(int a1, char *src, size_t a3)
{
  size_t v3;
  uint64_t n; // rax
  char *v5;
  int v7;
  char *v8;
  void *dest;
  int v10;
  uint64_t v11;
  void *v12;

  v3 = a3;
  if ( a3 != 0 )
  {
    v11 = *(uint64_t *)(a1 + 64);
    n = v11 + 8LL * a3;
    if ( v11 > n )
      ++*(uint64_t *)(a1 + 72);
    *(uint32_t *)(a1 + 64) = n;
    LODWORD(n) = *(uint32_t *)(a1 + 208);
    *(uint32_t *)(a1 + 68) = HIDWORD(n);
    v12 = (void *)(a1 + 80);
    v5 = src;
    if ( (uint32_t)n != 0 )
    {
      HIDWORD(n) = 128 - n;
      LODWORD(n) = a1 + n + 80;
      if ( a3 < HIDWORD(n) )
      {
        memcpy((void *)n, src, a3);
        *(uint32_t *)(a1 + 208) += a3;
        return 1;
      }
      v10 = HIDWORD(n);
      memcpy((void *)n, src, HIDWORD(n));
      *(uint32_t *)(a1 + 208) = 0;
      v3 = a3 - v10;
      v5 = &src[v10];
      sub_19D98A0((int64_t *)a1, (int)(uintptr_t)(v12), 1);
      if ( a3 - v10 <= 0x7F )
      {
LABEL_5:
        if ( v3 == 0 )
          return 1;
LABEL_10:
        memcpy(v12, v5, v3);
        *(uint32_t *)(a1 + 208) = v3;
        return 1;
      }
    }
    else if ( a3 <= 0x7F )
    {
      goto LABEL_5;
    }
    v7 = (int)(uintptr_t)(v5);
    v8 = &v5[v3];
    dest = (void *)(v3 >> 7);
    v3 &= 0x7Fu;
    v5 = &v8[-v3];
    sub_19D98A0((int64_t *)a1, v7, (int)(uintptr_t)(dest));
    if ( v3 == 0 )
      return 1;
    goto LABEL_10;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA512_Transform  (binary VA: 0x19da8e0)
// Original: SHA512_Transform
// ----------------------------------------------------------------------------
int64_t * SHA512_Transform(int64_t *a1, int a2)
{
  return sub_19D98A0(a1, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: SHA512  (binary VA: 0x19da9a0)
// Original: SHA512
// ----------------------------------------------------------------------------
uint8_t * SHA512(char *a1, size_t a2, uint8_t *a3)
{
  uint8_t *v3;
  uint8_t v5[216];

  v3 = a3;
  if ( a3 == nullptr )
    v3 = (uint8_t *)(&unk_2141DA0);
  SHA512_Init(v5);
  SHA512_Update((int)(uintptr_t)(v5), a1, a2);
  SHA512_Final(v3, (int)(uintptr_t)(v5));
  OPENSSL_cleanse(v5, 0xD8u);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_TS_strings  (binary VA: 0x19dcbe0)
// Original: ERR_load_TS_strings
// ----------------------------------------------------------------------------
int ERR_load_TS_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CCB80);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CCB80);
    return ERR_load_strings(0, &dword_20CCD20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_UI_strings  (binary VA: 0x19dcc40)
// Original: ERR_load_UI_strings
// ----------------------------------------------------------------------------
int ERR_load_UI_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CCE40);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CCE40);
    return ERR_load_strings(0, &dword_20CCEC0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_set1_object  (binary VA: 0x19dd6a0)
// Original: X509_ATTRIBUTE_set1_object
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_set1_object(void **a1, int a2)
{
  if ( a2 == 0 || a1 == nullptr )
    return 0;
  ASN1_OBJECT_free(*a1);
  *a1 = OBJ_dup(a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_set1_data  (binary VA: 0x19dd700)
// Original: X509_ATTRIBUTE_set1_data
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_set1_data(int a1, int a2, char *a3, size_t a4)
{
  int v4;
  uint32_t *v6;
  int v7;
  char *v8;
  int v9;
  char *s;
  uint32_t *v11;
  int v12;

  v4 = 0;
  if ( a1 != 0 )
  {
    if ( (a2 & 0x1000) != 0 )
    {
      v9 = OBJ_obj2nid(*(uint32_t *)a1);
      v11 = (uint32_t *)ASN1_STRING_set_by_NID(0, a3, a4, a2, v9);
      if ( v11 == nullptr )
      {
        ERR_put_error(11, 138, 13, (int)(uintptr_t)(&unk_1B15112), 0);
        return v4;
      }
      v12 = v11[1];
    }
    else if ( a4 == -1 )
    {
      v12 = 0;
      v11 = nullptr;
    }
    else
    {
      v11 = ASN1_STRING_type_new(a2);
      if ( v11 == nullptr || ASN1_STRING_set((int)(uintptr_t)(v11), a3, a4) == 0 )
        goto LABEL_6;
      v12 = a2;
    }
    v6 = sk_new_null();
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v6);
    if ( v6 == nullptr )
      goto LABEL_6;
    *(uint32_t *)(a1 + 4) = 0;
    v4 = 1;
    if ( a2 == 0 )
      return v4;
    v7 = ASN1_TYPE_new();
    v8 = (char *)v7;
    if ( v7 == 0 )
      goto LABEL_6;
    if ( a4 == -1 && (a2 & 0x1000) == 0 )
    {
      if ( ASN1_TYPE_set1(v7, a2, a3) == 0 )
      {
LABEL_6:
        v4 = 0;
        ERR_put_error(11, 138, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        return v4;
      }
    }
    else
    {
      ASN1_TYPE_set(v7, v12, v11);
    }
    s = v8;
    v4 = 1;
    if ( sk_push(*(int **)(a1 + 8), (int)(uintptr_t)(s)) != 0 )
      return v4;
    goto LABEL_6;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_create_by_OBJ  (binary VA: 0x19dd900)
// Original: X509_ATTRIBUTE_create_by_OBJ
// ----------------------------------------------------------------------------
void ** X509_ATTRIBUTE_create_by_OBJ(void ***a1, int a2, int a3, char *a4, size_t a5)
{
  void **v5;
  char v7;

  if ( a1 != nullptr && (v5 = *a1, *a1 != nullptr) || (v5 = (void **)X509_ATTRIBUTE_new()) != nullptr )
  {
    if ( X509_ATTRIBUTE_set1_object(v5, a2) != 0 && X509_ATTRIBUTE_set1_data((int)(uintptr_t)(v5), a3, a4, a5) != 0 )
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
      X509_ATTRIBUTE_free(v7);
    }
  }
  else
  {
    ERR_put_error(11, 137, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_create_by_txt  (binary VA: 0x19dd9f0)
// Original: X509_ATTRIBUTE_create_by_txt
// ----------------------------------------------------------------------------
void ** X509_ATTRIBUTE_create_by_txt(void ***a1, char *a2, int a3, char *a4, size_t a5)
{
  char **v5;
  char **v6;
  void **v7;

  v5 = OBJ_txt2obj(a2, 0);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v7 = X509_ATTRIBUTE_create_by_OBJ(a1, (int)(uintptr_t)(v5), a3, a4, a5);
    ASN1_OBJECT_free(v6);
  }
  else
  {
    ERR_put_error(11, 140, 119, (int)(uintptr_t)(&unk_1B15112), 0);
    v7 = nullptr;
    ERR_add_error_data(2, "name=", a2);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_create_by_NID  (binary VA: 0x19ddb40)
// Original: X509_ATTRIBUTE_create_by_NID
// ----------------------------------------------------------------------------
void ** X509_ATTRIBUTE_create_by_NID(void ***a1, unsigned int a2, int a3, char *a4, size_t a5)
{
  char **v5;
  char **v6;
  void **result;

  v5 = OBJ_nid2obj(a2);
  v6 = v5;
  if ( v5 != nullptr )
  {
    result = X509_ATTRIBUTE_create_by_OBJ(a1, (int)(uintptr_t)(v5), a3, a4, a5);
    if ( result == nullptr )
    {
      ASN1_OBJECT_free(v6);
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(11, 136, 109, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_count  (binary VA: 0x19ddcf0)
// Original: X509_ATTRIBUTE_count
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_count(int a1)
{
  if ( *(uint32_t *)(a1 + 4) != 0 )
    return *(uint32_t *)(a1 + 8) != 0;
  else
    return sk_num(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_get0_object  (binary VA: 0x19ddd40)
// Original: X509_ATTRIBUTE_get0_object
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_get0_object(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)a1;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_get0_type  (binary VA: 0x19ddd60)
// Original: X509_ATTRIBUTE_get0_type
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_get0_type(int a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a1 != 0 && X509_ATTRIBUTE_count(a1) > a2 )
  {
    if ( *(uint32_t *)(a1 + 4) != 0 )
      return *(uint32_t *)(a1 + 8);
    else
      return sk_value(*(int **)(a1 + 8), a2);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_ATTRIBUTE_get0_data  (binary VA: 0x19ddde0)
// Original: X509_ATTRIBUTE_get0_data
// ----------------------------------------------------------------------------
int X509_ATTRIBUTE_get0_data(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = 0;
  v4 = X509_ATTRIBUTE_get0_type(a1, a2);
  v5 = v4;
  if ( v4 != 0 )
  {
    if ( ASN1_TYPE_get(v4) == a3 )
      return *(uint32_t *)(v5 + 4);
    else
      ERR_put_error(11, 139, 122, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_issuer_and_serial_hash  (binary VA: 0x19ddf50)
// Original: X509_issuer_and_serial_hash
// ----------------------------------------------------------------------------
int X509_issuer_and_serial_hash(int a1)
{
  char *s;
  uint32_t *v2;
  int v3;
  typedef size_t _g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  typedef void *_g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v7)) > _g4_s2 ? (40u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);

  EVP_MD_CTX_init(v7);
  s = (char *)X509_NAME_oneline(*(uint32_t *)(*(uint32_t *)a1 + 12), nullptr, 0);
  v5 = strlen(s);
  v2 = (uint32_t *)(EVP_md5());
  EVP_DigestInit_ex((int)(uintptr_t)(v7), v2, nullptr);
  EVP_DigestUpdate((int)(uintptr_t)(v7), (int)(uintptr_t)(s), v5);
  CRYPTO_free(s);
  EVP_DigestUpdate((int)(uintptr_t)(v7), *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 4) + 8), **(uint32_t **)(*(uint32_t *)a1 + 4));
  EVP_DigestFinal_ex(v7, (int)(uintptr_t)(v6), nullptr);
  v3 = (v6[3] << 24) | v6[0] | (v6[2] << 16) | (v6[1] << 8);
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v7));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_match  (binary VA: 0x19de060)
// Original: X509_CRL_match
// ----------------------------------------------------------------------------
int X509_CRL_match(int a1, int a2)
{
  return memcmp((const void *)(a1 + 44), (const void *)(a2 + 44), 0x14u);
}

// ----------------------------------------------------------------------------
// Function: X509_get_issuer_name  (binary VA: 0x19de0a0)
// Original: X509_get_issuer_name
// ----------------------------------------------------------------------------
int X509_get_issuer_name(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: X509_get_subject_name  (binary VA: 0x19de0b0)
// Original: X509_get_subject_name
// ----------------------------------------------------------------------------
int X509_get_subject_name(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: X509_get_serialNumber  (binary VA: 0x19de0c0)
// Original: X509_get_serialNumber
// ----------------------------------------------------------------------------
int X509_get_serialNumber(int a1)
{
  return *(uint32_t *)(*(uint32_t *)a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: X509_cmp  (binary VA: 0x19de0d0)
// Original: X509_cmp
// ----------------------------------------------------------------------------
int X509_cmp(int a1, int a2)
{
  X509_check_purpose(a1, -1, 0);
  X509_check_purpose(a2, -1, 0);
  return memcmp((const void *)(a1 + 80), (const void *)(a2 + 80), 0x14u);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_cmp  (binary VA: 0x19de150)
// Original: X509_NAME_cmp
// ----------------------------------------------------------------------------
int X509_NAME_cmp(int a1, int a2)
{
  int result;

  if ( (*(uint32_t *)(a1 + 12) == 0 || *(uint32_t *)(a1 + 4) != 0) && i2d_X509_NAME(a1, nullptr) < 0
    || (*(uint32_t *)(a2 + 12) == 0 || *(uint32_t *)(a2 + 4) != 0) && i2d_X509_NAME(a2, nullptr) < 0 )
  {
    return -2;
  }
  result = *(uint32_t *)(a1 + 16) - *(uint32_t *)(a2 + 16);
  if ( result == 0 )
    return memcmp(*(const void **)(a1 + 12), *(const void **)(a2 + 12), *(uint32_t *)(a1 + 16));
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_cmp  (binary VA: 0x19de200)
// Original: X509_CRL_cmp
// ----------------------------------------------------------------------------
int X509_CRL_cmp(int a1, int a2)
{
  return X509_NAME_cmp(*(uint32_t *)(*(uint32_t *)a1 + 8), *(uint32_t *)(*(uint32_t *)a2 + 8));
}

// ----------------------------------------------------------------------------
// Function: X509_subject_name_cmp  (binary VA: 0x19de240)
// Original: X509_subject_name_cmp
// ----------------------------------------------------------------------------
int X509_subject_name_cmp(int a1, int a2)
{
  return X509_NAME_cmp(*(uint32_t *)(*(uint32_t *)a1 + 20), *(uint32_t *)(*(uint32_t *)a2 + 20));
}

// ----------------------------------------------------------------------------
// Function: X509_issuer_name_cmp  (binary VA: 0x19de280)
// Original: X509_issuer_name_cmp
// ----------------------------------------------------------------------------
int X509_issuer_name_cmp(int a1, int a2)
{
  return X509_NAME_cmp(*(uint32_t *)(*(uint32_t *)a1 + 12), *(uint32_t *)(*(uint32_t *)a2 + 12));
}

// ----------------------------------------------------------------------------
// Function: X509_issuer_and_serial_cmp  (binary VA: 0x19de2c0)
// Original: X509_issuer_and_serial_cmp
// ----------------------------------------------------------------------------
int X509_issuer_and_serial_cmp(int *a1, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = *a1;
  v3 = *a2;
  result = ASN1_STRING_cmp(*(uint32_t *)(*a1 + 4), *(uint32_t *)(*a2 + 4));
  if ( result == 0 )
    return X509_NAME_cmp(*(uint32_t *)(v2 + 12), *(uint32_t *)(v3 + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_hash  (binary VA: 0x19de320)
// Original: X509_NAME_hash
// ----------------------------------------------------------------------------
int X509_NAME_hash(int a1)
{
  uint32_t *v1;
  uint8_t v3[32];

  i2d_X509_NAME(a1, nullptr);
  v1 = (uint32_t *)(EVP_sha1());
  EVP_Digest(*(uint32_t *)(a1 + 12), *(uint32_t *)(a1 + 16), (int)(uintptr_t)(v3), nullptr, v1, nullptr);
  return (v3[3] << 24) | v3[0] | (v3[2] << 16) | (v3[1] << 8);
}

// ----------------------------------------------------------------------------
// Function: X509_subject_name_hash  (binary VA: 0x19de3b0)
// Original: X509_subject_name_hash
// ----------------------------------------------------------------------------
int X509_subject_name_hash(int a1)
{
  return X509_NAME_hash(*(uint32_t *)(*(uint32_t *)a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: X509_issuer_name_hash  (binary VA: 0x19de3e0)
// Original: X509_issuer_name_hash
// ----------------------------------------------------------------------------
int X509_issuer_name_hash(int a1)
{
  return X509_NAME_hash(*(uint32_t *)(*(uint32_t *)a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_hash_old  (binary VA: 0x19de410)
// Original: X509_NAME_hash_old
// ----------------------------------------------------------------------------
int X509_NAME_hash_old(int a1)
{
  uint32_t *v1;
  uint8_t v3[28];

  i2d_X509_NAME(a1, nullptr);
  v1 = (uint32_t *)(EVP_md5());
  EVP_Digest(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 4), **(uint32_t **)(a1 + 8), (int)(uintptr_t)(v3), nullptr, v1, nullptr);
  return (v3[3] << 24) | v3[0] | (v3[2] << 16) | (v3[1] << 8);
}

// ----------------------------------------------------------------------------
// Function: X509_subject_name_hash_old  (binary VA: 0x19de4a0)
// Original: X509_subject_name_hash_old
// ----------------------------------------------------------------------------
int X509_subject_name_hash_old(int a1)
{
  return X509_NAME_hash_old(*(uint32_t *)(*(uint32_t *)a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: X509_issuer_name_hash_old  (binary VA: 0x19de4d0)
// Original: X509_issuer_name_hash_old
// ----------------------------------------------------------------------------
int X509_issuer_name_hash_old(int a1)
{
  return X509_NAME_hash_old(*(uint32_t *)(*(uint32_t *)a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: X509_find_by_issuer_and_serial  (binary VA: 0x19de500)
// Original: X509_find_by_issuer_and_serial
// ----------------------------------------------------------------------------
int * X509_find_by_issuer_and_serial(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[33];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v9)) > _g4_s3 ? (56u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);

  if ( a1 != nullptr )
  {
    v9[0] = (int)(uintptr_t)(&v6);
    v3 = 0;
    v7 = a3;
    v8 = a2;
    while ( v3 < sk_num((int)(uintptr_t)(a1)) )
    {
      v4 = (int *)sk_value(a1, v3);
      if ( X509_issuer_and_serial_cmp(v4, v9) == 0 )
        return v4;
      ++v3;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509_find_by_subject  (binary VA: 0x19de590)
// Original: X509_find_by_subject
// ----------------------------------------------------------------------------
int X509_find_by_subject(int *a1, int a2)
{
  int i;
  int v3;
  int subject_name;

  for ( i = 0; i < sk_num((int)(uintptr_t)(a1)); ++i )
  {
    v3 = sk_value(a1, i);
    subject_name = X509_get_subject_name(v3);
    if ( X509_NAME_cmp(subject_name, a2) == 0 )
      return v3;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_get_pubkey  (binary VA: 0x19de600)
// Original: X509_get_pubkey
// ----------------------------------------------------------------------------
int X509_get_pubkey(int a1)
{
  int result;

  if ( a1 == 0 )
    return 0;
  result = 0;
  if ( *(uint32_t *)a1 != 0 )
    return (int)(uintptr_t)(X509_PUBKEY_get(*(uint32_t *)(*(uint32_t *)a1 + 24)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_get0_pubkey_bitstr  (binary VA: 0x19de640)
// Original: X509_get0_pubkey_bitstr
// ----------------------------------------------------------------------------
int X509_get0_pubkey_bitstr(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 24) + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_check_private_key  (binary VA: 0x19de660)
// Original: X509_check_private_key
// ----------------------------------------------------------------------------
bool X509_check_private_key(int a1, uint32_t *a2)
{
  uint32_t *pubkey;
  int v3;
  bool v4;

  pubkey = (uint32_t *)X509_get_pubkey(a1);
  if ( pubkey != nullptr )
  {
    v3 = EVP_PKEY_cmp(pubkey, a2);
    if ( v3 == -1 )
    {
      v4 = false;
      ERR_put_error(11, 128, 115, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_7;
    }
    if ( v3 == 0 )
    {
      v4 = false;
      ERR_put_error(11, 128, 116, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_7;
    }
    if ( v3 != -2 )
    {
      v4 = v3 > 0;
LABEL_7:
      EVP_PKEY_free(pubkey);
      return v4;
    }
  }
  v4 = false;
  ERR_put_error(11, 128, 117, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( pubkey == nullptr )
    return v4;
  goto LABEL_7;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set_default_paths  (binary VA: 0x19de780)
// Original: X509_STORE_set_default_paths
// ----------------------------------------------------------------------------
int X509_STORE_set_default_paths(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (int)(uintptr_t)(X509_LOOKUP_file());
  v2 = X509_STORE_add_lookup(a1, v1);
  v3 = 0;
  if ( v2 != 0 )
  {
    X509_LOOKUP_ctrl(v2, 1, 0, 3, 0);
    v4 = (int)(uintptr_t)(X509_LOOKUP_hash_dir());
    v5 = X509_STORE_add_lookup(a1, v4);
    if ( v5 != 0 )
    {
      LOWORD(v3) = 1;
      X509_LOOKUP_ctrl(v5, 2, 0, 3, 0);
      ERR_clear_error();
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_load_locations  (binary VA: 0x19de840)
// Original: X509_STORE_load_locations
// ----------------------------------------------------------------------------
bool X509_STORE_load_locations(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;

  if ( a2 == 0
    || (v3 = (int)(uintptr_t)(X509_LOOKUP_file()), v4 = X509_STORE_add_lookup(a1, v3), v5 = 0, v4 != 0)
    && X509_LOOKUP_ctrl(v4, 1, a2, 1, 0) == 1 )
  {
    if ( a3 == 0 )
      return a2 != 0 || a3 != 0;
    v7 = (int)(uintptr_t)(X509_LOOKUP_hash_dir());
    v8 = X509_STORE_add_lookup(a1, v7);
    v5 = 0;
    if ( v8 != 0 && X509_LOOKUP_ctrl(v8, 2, a3, 1, 0) == 1 )
      return a2 != 0 || a3 != 0;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_get_default_private_dir  (binary VA: 0x19de930)
// Original: X509_get_default_private_dir
// ----------------------------------------------------------------------------
const char * X509_get_default_private_dir()
{
  return "/usr/local/ssl/private";
}

// ----------------------------------------------------------------------------
// Function: X509_get_default_cert_area  (binary VA: 0x19de950)
// Original: X509_get_default_cert_area
// ----------------------------------------------------------------------------
const char * X509_get_default_cert_area()
{
  return "/usr/local/ssl";
}

// ----------------------------------------------------------------------------
// Function: X509_get_default_cert_dir  (binary VA: 0x19de970)
// Original: X509_get_default_cert_dir
// ----------------------------------------------------------------------------
const char * X509_get_default_cert_dir()
{
  return "/usr/local/ssl/certs";
}

// ----------------------------------------------------------------------------
// Function: X509_get_default_cert_file  (binary VA: 0x19de990)
// Original: X509_get_default_cert_file
// ----------------------------------------------------------------------------
const char * X509_get_default_cert_file()
{
  return "/usr/local/ssl/cert.pem";
}

// ----------------------------------------------------------------------------
// Function: X509_get_default_cert_dir_env  (binary VA: 0x19de9b0)
// Original: X509_get_default_cert_dir_env
// ----------------------------------------------------------------------------
const char * X509_get_default_cert_dir_env()
{
  return "SSL_CERT_DIR";
}

// ----------------------------------------------------------------------------
// Function: X509_get_default_cert_file_env  (binary VA: 0x19de9d0)
// Original: X509_get_default_cert_file_env
// ----------------------------------------------------------------------------
const char * X509_get_default_cert_file_env()
{
  return "SSL_CERT_FILE";
}

// ----------------------------------------------------------------------------
// Function: ERR_load_X509_strings  (binary VA: 0x19de9f0)
// Original: ERR_load_X509_strings
// ----------------------------------------------------------------------------
int ERR_load_X509_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CCF00);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CCF00);
    return ERR_load_strings(0, &dword_20CD080);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_new  (binary VA: 0x19dec50)
// Original: X509_LOOKUP_new
// ----------------------------------------------------------------------------
uint32_t * X509_LOOKUP_new(int a1)
{
  uint32_t *v1;
  uint32_t *v2;
  int (*v3)(uint32_t *);
  void *v5;

  v1 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  v2 = v1;
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[1] = 0;
    v1[2] = a1;
    v1[3] = 0;
    v1[4] = 0;
    v3 = *(int (**)(uint32_t *))(a1 + 4);
    if ( v3 != nullptr && v3(v2) == 0 )
    {
      v5 = v2;
      v2 = nullptr;
      CRYPTO_free(v5);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_free  (binary VA: 0x19decf0)
// Original: X509_LOOKUP_free
// ----------------------------------------------------------------------------
void X509_LOOKUP_free(uint32_t *a1)
{
  int v1;
  void (*v2)(uint32_t *);

  if ( a1 != nullptr )
  {
    v1 = a1[2];
    if ( v1 != 0 )
    {
      v2 = *(void (**)(uint32_t *))(v1 + 8);
      if ( v2 != nullptr )
        v2(a1);
    }
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_init  (binary VA: 0x19ded40)
// Original: X509_LOOKUP_init
// ----------------------------------------------------------------------------
char X509_LOOKUP_init(int a1)
{
  char result;
  int v2;
  int (*v3)(int);

  result = 0;
  v2 = *(uint32_t *)(a1 + 8);
  if ( v2 != 0 )
  {
    v3 = *(int (**)(int))(v2 + 12);
    result = 1;
    if ( v3 != nullptr )
      return v3(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_shutdown  (binary VA: 0x19ded70)
// Original: X509_LOOKUP_shutdown
// ----------------------------------------------------------------------------
char X509_LOOKUP_shutdown(int a1)
{
  char result;
  int v2;
  int (*v3)(int);

  result = 0;
  v2 = *(uint32_t *)(a1 + 8);
  if ( v2 != 0 )
  {
    v3 = *(int (**)(int))(v2 + 16);
    result = 1;
    if ( v3 != nullptr )
      return v3(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_ctrl  (binary VA: 0x19deda0)
// Original: X509_LOOKUP_ctrl
// ----------------------------------------------------------------------------
int X509_LOOKUP_ctrl(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int (*v6)(int, int, int, int, int);
  int result;

  v5 = *(uint32_t *)(a1 + 8);
  if ( v5 == 0 )
    return -1;
  v6 = *(int (**)(int, int, int, int, int))(v5 + 20);
  result = 1;
  if ( v6 != nullptr )
    return v6(a1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_by_subject  (binary VA: 0x19dedf0)
// Original: X509_LOOKUP_by_subject
// ----------------------------------------------------------------------------
int X509_LOOKUP_by_subject(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int (*v6)(int, int, int, int);

  result = 0;
  v5 = *(uint32_t *)(a1 + 8);
  if ( v5 != 0 )
  {
    v6 = *(int (**)(int, int, int, int))(v5 + 24);
    if ( v6 != nullptr && *(uint32_t *)(a1 + 4) == 0 )
      return v6(a1, a2, a3, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_by_issuer_serial  (binary VA: 0x19dee40)
// Original: X509_LOOKUP_by_issuer_serial
// ----------------------------------------------------------------------------
int X509_LOOKUP_by_issuer_serial(int a1, int a2, int a3, int a4, int a5)
{
  int result;
  int v6;
  int (*v7)(int, int, int, int, int);

  result = 0;
  v6 = *(uint32_t *)(a1 + 8);
  if ( v6 != 0 )
  {
    v7 = *(int (**)(int, int, int, int, int))(v6 + 28);
    if ( v7 != nullptr )
      return v7(a1, a2, a3, a4, a5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_by_fingerprint  (binary VA: 0x19dee90)
// Original: X509_LOOKUP_by_fingerprint
// ----------------------------------------------------------------------------
int X509_LOOKUP_by_fingerprint(int a1, int a2, int a3, int a4, int a5)
{
  int result;
  int v6;
  int (*v7)(int, int, int, int, int);

  result = 0;
  v6 = *(uint32_t *)(a1 + 8);
  if ( v6 != 0 )
  {
    v7 = *(int (**)(int, int, int, int, int))(v6 + 32);
    if ( v7 != nullptr )
      return v7(a1, a2, a3, a4, a5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_LOOKUP_by_alias  (binary VA: 0x19deee0)
// Original: X509_LOOKUP_by_alias
// ----------------------------------------------------------------------------
int X509_LOOKUP_by_alias(int a1, int a2, int a3, int a4, int a5)
{
  int result;
  int v6;
  int (*v7)(int, int, int, int, int);

  result = 0;
  v6 = *(uint32_t *)(a1 + 8);
  if ( v6 != 0 )
  {
    v7 = *(int (**)(int, int, int, int, int))(v6 + 36);
    if ( v7 != nullptr )
      return v7(a1, a2, a3, a4, a5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_new  (binary VA: 0x19def30)
// Original: X509_STORE_new
// ----------------------------------------------------------------------------
uint8_t * X509_STORE_new()
{
  uint8_t *v0;
  int v1;
  void *v3;

  v0 = CRYPTO_malloc(72, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v0 != nullptr )
  {
    *((uint32_t *)v0 + 1) = (uint32_t)(uintptr_t)(sk_new((int)(uintptr_t)((int (*)(int **, uint32_t *))sub_19DEAB0)));
    *(uint32_t *)v0 = 1;
    *((uint32_t *)v0 + 2) = (uint32_t)(uintptr_t)(sk_new_null());
    *((uint32_t *)v0 + 4) = 0;
    *((uint32_t *)v0 + 5) = 0;
    v1 = (int)(uintptr_t)(X509_VERIFY_PARAM_new());
    *((uint32_t *)v0 + 3) = v1;
    if ( v1 != 0 )
    {
      *((uint32_t *)v0 + 6) = 0;
      *((uint32_t *)v0 + 7) = 0;
      *((uint32_t *)v0 + 8) = 0;
      *((uint32_t *)v0 + 9) = 0;
      *((uint32_t *)v0 + 10) = 0;
      *((uint32_t *)v0 + 11) = 0;
      *((uint32_t *)v0 + 12) = 0;
      *((uint32_t *)v0 + 13) = 0;
      *((uint32_t *)v0 + 14) = 0;
      if ( CRYPTO_new_ex_data(4, (int)(uintptr_t)(v0), (int)(uintptr_t)(v0 + 60)) != 0 )
      {
        *((uint32_t *)v0 + 17) = 1;
      }
      else
      {
        sk_free(*((void ***)v0 + 1));
        v3 = v0;
        v0 = nullptr;
        CRYPTO_free(v3);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_free  (binary VA: 0x19df030)
// Original: X509_STORE_free
// ----------------------------------------------------------------------------
void * X509_STORE_free(void *a1)
{
  void *result;
  int v2;
  int *v3;
  uint32_t *v4;

  result = a1;
  if ( a1 != nullptr )
  {
    v2 = 0;
    v3 = *((int **)a1 + 2);
    while ( v2 < sk_num((int)(uintptr_t)(v3)) )
    {
      v4 = (uint32_t *)sk_value(v3, v2++);
      X509_LOOKUP_shutdown((int)(uintptr_t)(v4));
      X509_LOOKUP_free(v4);
    }
    sk_free((void **)v3);
    sk_pop_free(*((void ***)a1 + 1), (void (*)(uint32_t))sub_19DEA50);
    CRYPTO_free_ex_data(4, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1) + 60);
    if ( *((uint32_t *)a1 + 3) != 0 )
      X509_VERIFY_PARAM_free(*((void **)a1 + 3));
    return (void *)CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_add_lookup  (binary VA: 0x19df100)
// Original: X509_STORE_add_lookup
// ----------------------------------------------------------------------------
int X509_STORE_add_lookup(int a1, int a2)
{
  int v2;
  int *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v7;

  v2 = 0;
  v3 = *(int **)(a1 + 8);
  while ( v2 < sk_num((int)(uintptr_t)(v3)) )
  {
    v4 = sk_value(v3, v2);
    if ( *(uint32_t *)(v4 + 8) == a2 )
      return v4;
    ++v2;
  }
  v5 = X509_LOOKUP_new(a2);
  v4 = (int)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    v5[4] = a1;
    if ( sk_push(*(int **)(a1 + 8), (int)(uintptr_t)(v5)) == 0 )
    {
      v7 = (uint32_t *)v4;
      v4 = 0;
      X509_LOOKUP_free(v7);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_OBJECT_up_ref_count  (binary VA: 0x19df190)
// Original: X509_OBJECT_up_ref_count
// ----------------------------------------------------------------------------
int X509_OBJECT_up_ref_count(int *a1)
{
  int result;

  result = *a1;
  if ( *a1 == 1 )
    return CRYPTO_add_lock((uint32_t *)(a1[1] + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( result == 2 )
    return CRYPTO_add_lock((uint32_t *)(a1[1] + 12), 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_OBJECT_free_contents  (binary VA: 0x19df220)
// Original: X509_OBJECT_free_contents
// ----------------------------------------------------------------------------
int X509_OBJECT_free_contents(int *a1)
{
  int result;

  result = *a1;
  if ( *a1 == 1 )
    return X509_free(a1[1]);
  if ( result == 2 )
    return X509_CRL_free(a1[1]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_OBJECT_idx_by_subject  (binary VA: 0x19df270)
// Original: X509_OBJECT_idx_by_subject
// ----------------------------------------------------------------------------
int X509_OBJECT_idx_by_subject(int *a1, int a2, int a3)
{
  return sub_19DEB40(a1, a2, a3, nullptr);
}

// ----------------------------------------------------------------------------
// Function: X509_OBJECT_retrieve_by_subject  (binary VA: 0x19df290)
// Original: X509_OBJECT_retrieve_by_subject
// ----------------------------------------------------------------------------
int X509_OBJECT_retrieve_by_subject(int *a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = X509_OBJECT_idx_by_subject(a1, a2, a3);
  result = 0;
  if ( v3 != -1 )
    return sk_value(a1, v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_get_by_subject  (binary VA: 0x19df2f0)
// Original: X509_STORE_get_by_subject
// ----------------------------------------------------------------------------
int X509_STORE_get_by_subject(int *a1, int a2, int a3, int *a4)
{
  int v4;
  int i;
  int v6;
  int result;
  typedef int *_g4_t_v8;
  typedef uint8_t _g4_t_v9[36];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v4 = *a1;
  CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  v8 = (int *)X509_OBJECT_retrieve_by_subject(*(int **)(v4 + 4), a2, a3);
  CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v8 == nullptr || a2 == 2 )
  {
    for ( i = a1[1]; i < sk_num(*(uint32_t *)(v4 + 8)); ++i )
    {
      v6 = sk_value(*(int **)(v4 + 8), i);
      result = X509_LOOKUP_by_subject(v6, a2, a3, (int)(uintptr_t)(v9));
      if ( result < 0 )
      {
        a1[1] = result;
        return result;
      }
      if ( result != 0 )
      {
        v8 = (int *)v9;
        a1[1] = 0;
        goto LABEL_8;
      }
    }
    result = 0;
    a1[1] = 0;
    if ( v8 == nullptr )
      return result;
  }
LABEL_8:
  *a4 = *v8;
  a4[1] = v8[1];
  X509_OBJECT_up_ref_count(a4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_get1_certs  (binary VA: 0x19df450)
// Original: X509_STORE_get1_certs
// ----------------------------------------------------------------------------
void ** X509_STORE_get1_certs(int *a1, int a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  typedef int *_g4_t_v9;
  typedef void **_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v10 = (void **)sk_new_null();
  CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  v2 = sub_19DEB40(*(int **)(*a1 + 4), 1, a2, &v11);
  if ( v2 < 0 )
  {
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( X509_STORE_get_by_subject(a1, 1, a2, v12) != 0 )
    {
      X509_OBJECT_free_contents(v12);
      CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      v2 = sub_19DEB40(*(int **)(*a1 + 4), 1, a2, &v11);
      if ( v2 >= 0 )
        goto LABEL_2;
      CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    sk_free(v10);
    return nullptr;
  }
LABEL_2:
  v3 = 0;
  v4 = a1;
  v5 = v2;
  if ( v11 <= 0 )
  {
LABEL_7:
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    return v10;
  }
  while ( 1 )
  {
    v9 = v4;
    v6 = *(uint32_t *)(sk_value(*(int **)(*v4 + 4), v3 + v5) + 4);
    CRYPTO_add_lock((uint32_t *)(v6 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    v7 = sk_push((int *)v10, v6);
    v4 = v9;
    if ( v7 == 0 )
      break;
    if ( v11 <= ++v3 )
      goto LABEL_7;
  }
  CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  X509_free(v6);
  sk_pop_free(v10, (void (*)(uint32_t))((int (*)(char))X509_free));
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_get1_crls  (binary VA: 0x19df6b0)
// Original: X509_STORE_get1_crls
// ----------------------------------------------------------------------------
void ** X509_STORE_get1_crls(int *a1, int a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef void **_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v6 = (void **)sk_new_null();
  CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  sub_19DEB40(*(int **)(*a1 + 4), 2, a2, &v7);
  CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( X509_STORE_get_by_subject(a1, 2, a2, v8) == 0 )
    goto LABEL_10;
  X509_OBJECT_free_contents(v8);
  CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = sub_19DEB40(*(int **)(*a1 + 4), 2, a2, &v7);
  if ( v5 < 0 )
  {
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_10:
    sk_free(v6);
    return nullptr;
  }
  v2 = 0;
  if ( v7 <= 0 )
  {
LABEL_8:
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    return v6;
  }
  else
  {
    while ( 1 )
    {
      v3 = *(uint32_t *)(sk_value(*(int **)(*a1 + 4), v2 + v5) + 4);
      CRYPTO_add_lock((uint32_t *)(v3 + 12), 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( sk_push((int *)v6, v3) == 0 )
        break;
      if ( v7 <= ++v2 )
        goto LABEL_8;
    }
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    X509_CRL_free(v3);
    sk_pop_free(v6, (void (*)(uint32_t))X509_CRL_free);
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_OBJECT_retrieve_match  (binary VA: 0x19df910)
// Original: X509_OBJECT_retrieve_match
// ----------------------------------------------------------------------------
int * X509_OBJECT_retrieve_match(int *a1, uint32_t *a2)
{
  int v2;
  int *result;
  typedef int *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v2 = sk_find((int)(uintptr_t)(a1), (int)(uintptr_t)(a2));
  result = nullptr;
  if ( v2 != -1 )
  {
    if ( (unsigned int)(*a2 - 1) <= 1 )
    {
      while ( v2 < sk_num((int)(uintptr_t)(a1)) )
      {
        v4 = (int *)sk_value(a1, v2);
        if ( sub_19DEAB0(&v4, &a2) != 0 )
          break;
        if ( *a2 == 1 )
        {
          if ( X509_cmp(v4[1], a2[1]) == 0 )
            return v4;
        }
        else if ( *a2 != 2 || X509_CRL_match(v4[1], a2[1]) == 0 )
        {
          return v4;
        }
        ++v2;
      }
      return nullptr;
    }
    else
    {
      return (int *)sk_value(a1, v2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_add_crl  (binary VA: 0x19dfa10)
// Original: X509_STORE_add_crl
// ----------------------------------------------------------------------------
int X509_STORE_add_crl(int a1, int a2)
{
  int *v2;
  int *v3;
  int v5;

  v5 = 0;
  if ( a2 != 0 )
  {
    v2 = (int *)CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      *v2 = 2;
      v2[1] = a2;
      CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      X509_OBJECT_up_ref_count(v3);
      if ( X509_OBJECT_retrieve_match(*(int **)(a1 + 4), v3) != nullptr )
      {
        X509_OBJECT_free_contents(v3);
        CRYPTO_free(v3);
        ERR_put_error(11, 125, 101, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        sk_push(*(int **)(a1 + 4), (int)(uintptr_t)(v3));
        v5 = 1;
      }
      CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(11, 125, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_add_cert  (binary VA: 0x19dfb80)
// Original: X509_STORE_add_cert
// ----------------------------------------------------------------------------
int X509_STORE_add_cert(int a1, int a2)
{
  int *v2;
  int *v3;
  int v5;

  v5 = 0;
  if ( a2 != 0 )
  {
    v2 = (int *)CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      *v2 = 1;
      v2[1] = a2;
      CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      X509_OBJECT_up_ref_count(v3);
      if ( X509_OBJECT_retrieve_match(*(int **)(a1 + 4), v3) != nullptr )
      {
        X509_OBJECT_free_contents(v3);
        CRYPTO_free(v3);
        ERR_put_error(11, 124, 101, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        sk_push(*(int **)(a1 + 4), (int)(uintptr_t)(v3));
        v5 = 1;
      }
      CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(11, 124, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get1_issuer  (binary VA: 0x19dfcf0)
// Original: X509_STORE_CTX_get1_issuer
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get1_issuer(uint32_t *a1, int a2, int a3)
{
  int issuer_name;
  int v4;
  int v6;
  int v7;
  int i;
  int *v9;
  int *v10;
  int subject_name;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  issuer_name = X509_get_issuer_name(a3);
  v4 = X509_STORE_get_by_subject((int *)a2, 1, issuer_name, &v14);
  if ( v4 == 1 )
  {
    if ( (*(int (**)(int, int, int))(a2 + 40))(a2, a3, v15) != 0 )
    {
      *a1 = v15;
      return 1;
    }
    else
    {
      X509_OBJECT_free_contents(&v14);
      CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      v6 = X509_OBJECT_idx_by_subject(*(int **)(*(uint32_t *)a2 + 4), 1, issuer_name);
      v7 = 0;
      if ( v6 != -1 )
      {
        v13 = issuer_name;
        for ( i = v6; ; ++i )
        {
          if ( i >= sk_num(*(uint32_t *)(*(uint32_t *)a2 + 4))
            || (v9 = (int *)sk_value(*(int **)(*(uint32_t *)a2 + 4), i), v10 = v9, *v9 != 1)
            || (subject_name = X509_get_subject_name(v9[1]), X509_NAME_cmp(v13, subject_name) != 0) )
          {
            v7 = 0;
            goto LABEL_16;
          }
          if ( (*(int (**)(int, int, int))(a2 + 40))(a2, a3, v10[1]) != 0 )
            break;
        }
        *a1 = v10[1];
        X509_OBJECT_up_ref_count(v10);
        v7 = 1;
      }
LABEL_16:
      v12 = v7;
      CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      return v12;
    }
  }
  else if ( v4 == -1 )
  {
    X509_OBJECT_free_contents(&v14);
    ERR_put_error(11, 146, 106, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  else if ( v4 != 0 )
  {
    X509_OBJECT_free_contents(&v14);
    return -1;
  }
  else
  {
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set_flags  (binary VA: 0x19dff10)
// Original: X509_STORE_set_flags
// ----------------------------------------------------------------------------
int X509_STORE_set_flags(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_flags(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set_depth  (binary VA: 0x19dff40)
// Original: X509_STORE_set_depth
// ----------------------------------------------------------------------------
int X509_STORE_set_depth(int a1, int a2)
{
  X509_VERIFY_PARAM_set_depth(*(uint32_t *)(a1 + 12), a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set_purpose  (binary VA: 0x19dff80)
// Original: X509_STORE_set_purpose
// ----------------------------------------------------------------------------
int X509_STORE_set_purpose(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_purpose(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set_trust  (binary VA: 0x19dffb0)
// Original: X509_STORE_set_trust
// ----------------------------------------------------------------------------
int X509_STORE_set_trust(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_trust(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set1_param  (binary VA: 0x19dffe0)
// Original: X509_STORE_set1_param
// ----------------------------------------------------------------------------
int X509_STORE_set1_param(int a1, int a2)
{
  return X509_VERIFY_PARAM_set1(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_set_verify_cb  (binary VA: 0x19e0010)
// Original: X509_STORE_set_verify_cb
// ----------------------------------------------------------------------------
int X509_STORE_set_verify_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_oneline  (binary VA: 0x19e0020)
// Original: X509_NAME_oneline
// ----------------------------------------------------------------------------
char * X509_NAME_oneline(int **a1, char *dest, signed int a3)
{
  int *v3;
  unsigned int v4;
  size_t v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  char *v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int i;
  char *v21;
  unsigned int *v23;
  typedef signed int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef size_t _g4_t_n;
  typedef const char *_g4_t_s;
  typedef signed int _g4_t_v28;
  typedef unsigned int *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34[108];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_n)) > _g4_s2 ? (16u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_s)) > _g4_s3 ? (20u + sizeof(_g4_t_s)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v32)) > _g4_s8 ? (40u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v34)) > _g4_s10 ? (48u + sizeof(_g4_t_v34)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 16u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);

  v29 = nullptr;
  if ( dest == nullptr )
  {
    v23 = BUF_MEM_new();
    v29 = v23;
    if ( v23 == nullptr )
    {
      ERR_put_error(11, 116, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return dest;
    }
    if ( BUF_MEM_grow(v23, 0xC8u) == 0 )
    {
LABEL_45:
      ERR_put_error(11, 116, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      BUF_MEM_free(v29);
      return nullptr;
    }
    a3 = 200;
    *(uint8_t *)v29[1] = 0;
  }
  v28 = 0;
  v25 = 0;
  if ( a1 == nullptr )
  {
    if ( v29 != nullptr )
    {
      dest = (char *)v29[1];
      CRYPTO_free(v29);
    }
    strncpy(dest, "NO X509_NAME", a3);
    dest[a3 - 1] = 0;
    return dest;
  }
  while ( v25 < sk_num((int)(uintptr_t)(*a1)) )
  {
    v3 = (int *)sk_value(*a1, v25);
    v4 = OBJ_obj2nid(*v3);
    if ( v4 != 0 && (s = OBJ_nid2sn(v4)) != nullptr )
    {
      v5 = strlen(s);
    }
    else
    {
      i2t_ASN1_OBJECT(v34, 80, *v3);
      s = v34;
      v5 = strlen(v34);
    }
    n = v5;
    v6 = (int *)v3[1];
    v7 = *v6;
    v8 = v6[2];
    if ( v6[1] != 27 || (v7 & 3) != 0 )
    {
      v33 = 1;
      v32 = 1;
      v31 = 1;
      v30 = 1;
      goto LABEL_9;
    }
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    if ( v7 <= 0 )
      goto LABEL_37;
    for ( i = 0; i != v7; ++i )
    {
      if ( *(uint8_t *)(v8 + i) != 0 )
        *(&v30 + (i & 3)) = 1;
    }
    if ( (v32 | v30 | v31) == 0 )
    {
LABEL_37:
      v32 = 0;
      v31 = 0;
      v30 = 0;
      v33 = 1;
LABEL_9:
      v9 = 0;
      if ( v7 <= 0 )
        goto LABEL_15;
      goto LABEL_10;
    }
    v33 = 1;
    v32 = 1;
    v31 = 1;
    v30 = 1;
LABEL_10:
    v10 = 0;
    v9 = 0;
    do
    {
      if ( *(&v30 + (v10 & 3)) != 0 )
      {
        v11 = v9 + 1;
        v9 += 4;
        if ( (uint8_t)(*(uint8_t *)(v8 + v10) - 32) <= 0x5Eu )
          v9 = v11;
      }
      ++v10;
    }
    while ( v10 != v7 );
LABEL_15:
    v24 = v28 + v9 + n + 2;
    if ( v29 != nullptr )
    {
      if ( BUF_MEM_grow(v29, v28 + v9 + n + 2 + 1) == 0 )
        goto LABEL_45;
      v12 = (char *)(v29[1] + v28);
    }
    else
    {
      if ( a3 <= v24 )
      {
        v21 = dest;
        goto LABEL_40;
      }
      v12 = &dest[v28];
    }
    *v12 = 47;
    v13 = v12 + 1;
    memcpy(v13, s, n);
    v14 = &v13[n];
    *v14 = 61;
    v15 = (uint8_t *)(v14 + 1);
    v16 = *(uint32_t *)(v3[1] + 8);
    if ( v7 > 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( *(&v30 + (v17 & 3)) == 0 )
          goto LABEL_21;
        v19 = *(uint8_t *)(v16 + v17);
        if ( (unsigned int)(v19 - 32) > 0x5E )
        {
          v18 = *(uint8_t *)(v16 + v17);
          *v15 = 92;
          v15[1] = 120;
          LOBYTE(v18) = a0123456789abcd /* "0123456789ABCDEF" */[v18 >> 4];
          v15[3] = byte_1D2BC68[v19 & 0xF];
          v15[2] = v18;
          v15 += 4;
LABEL_21:
          if ( ++v17 == v7 )
            break;
        }
        else
        {
          ++v17;
          *v15++ = v19;
          if ( v17 == v7 )
            break;
        }
      }
    }
    *v15 = 0;
    ++v25;
    v28 = v24;
  }
  v21 = dest;
  if ( v29 != nullptr )
  {
    v21 = (char *)v29[1];
    CRYPTO_free(v29);
  }
LABEL_40:
  dest = v21;
  if ( v25 == 0 )
    *v21 = 0;
  return dest;
}

// ----------------------------------------------------------------------------
// Function: X509_time_adj_ex  (binary VA: 0x19e09a0)
// Original: X509_time_adj_ex
// ----------------------------------------------------------------------------
int X509_time_adj_ex(int a1, int a2, int a3, time_t *a4)
{
  time_t v4;
  int v5;
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  if ( a4 != nullptr )
  {
    v4 = *a4;
    timer = *a4;
  }
  else
  {
    time(&timer);
    v4 = timer;
  }
  if ( a1 != 0 && (*(uint8_t *)(a1 + 12) & 0x40) == 0 )
  {
    v5 = *(uint32_t *)(a1 + 4);
    if ( v5 == 23 )
      return (int)(uintptr_t)(ASN1_UTCTIME_adj(a1, v4, a2, a3));
    if ( v5 == 24 )
      return (int)(uintptr_t)(ASN1_GENERALIZEDTIME_adj(a1, v4, a2, a3));
  }
  return (int)(uintptr_t)(ASN1_TIME_adj(a1, v4, a2, a3));
}

// ----------------------------------------------------------------------------
// Function: X509_time_adj  (binary VA: 0x19e0a70)
// Original: X509_time_adj
// ----------------------------------------------------------------------------
int X509_time_adj(int a1, int a2, time_t *a3)
{
  return X509_time_adj_ex(a1, 0, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_gmtime_adj  (binary VA: 0x19e0ab0)
// Original: X509_gmtime_adj
// ----------------------------------------------------------------------------
int X509_gmtime_adj(int a1, int a2)
{
  return X509_time_adj(a1, a2, nullptr);
}

// ----------------------------------------------------------------------------
// Function: X509_cmp_time  (binary VA: 0x19e0af0)
// Original: X509_cmp_time
// ----------------------------------------------------------------------------
int X509_cmp_time(int *a1, time_t *a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  char *v6;
  char v7;
  char *v8;
  uint8_t *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int16_t v15;
  int v16;
  int v17;
  char v18;
  typedef uint32_t _g4_t_v19[4];
  typedef char _g4_t_s1[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_s2[36];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s1)) > _g4_s1 ? (16u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_s2)) > _g4_s5 ? (40u + sizeof(_g4_t_s2)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 40u);

  v2 = *a1;
  v3 = a1[2];
  if ( a1[1] == 23 )
  {
    result = 0;
    if ( (unsigned int)(v2 - 11) > 6 )
      return result;
    *(uint32_t *)s1 = *(uint32_t *)v3;
    v21 = *(uint32_t *)(v3 + 4);
    v15 = *(uint16_t *)(v3 + 8);
    v6 = (char *)(v3 + 10);
    LOWORD(v22) = v15;
    v7 = *v6;
    v8 = (char *)&v22 + 2;
    if ( *v6 == 45 )
      goto LABEL_5;
  }
  else
  {
    result = 0;
    if ( v2 <= 12 )
      return result;
    *(uint32_t *)s1 = *(uint32_t *)v3;
    v21 = *(uint32_t *)(v3 + 4);
    v5 = *(uint32_t *)(v3 + 8);
    v6 = (char *)(v3 + 12);
    v22 = v5;
    v7 = *v6;
    v8 = &v23;
    if ( *v6 == 45 )
      goto LABEL_5;
  }
  if ( v7 == 90 || v7 == 43 )
  {
LABEL_5:
    *v8 = 48;
    v8[1] = 48;
    v9 = (uint8_t *)(v8 + 2);
    goto LABEL_6;
  }
  *v8 = v7;
  v8[1] = v6[1];
  v9 = (uint8_t *)(v8 + 2);
  if ( v6[2] == 46 )
  {
    v18 = v6[3];
    v6 += 3;
    if ( (uint8_t)(v18 - 48) <= 9u )
    {
      do
        ++v6;
      while ( (uint8_t)(*v6 - 48) <= 9u );
    }
  }
  else
  {
    v6 += 2;
  }
LABEL_6:
  *v9 = 90;
  v9[1] = 0;
  v10 = *v6;
  if ( *v6 == 90 )
  {
    v12 = 0;
  }
  else
  {
    if ( v10 != 45 )
    {
      result = 0;
      if ( v10 != 43 )
        return result;
    }
    v11 = 600 * v6[1] + 60 * v6[2] - 31680 + v6[4] + 10 * v6[3] - 528;
    if ( v10 == 45 )
      v12 = 60 * v11;
    else
      v12 = -60 * v11;
  }
  v13 = a1[1];
  v19[3] = 0;
  v19[1] = v13;
  v19[0] = 24;
  v19[2] = (uint32_t)(uintptr_t)(s2);
  v14 = X509_time_adj((int)(uintptr_t)(v19), v12, a2);
  result = 0;
  if ( v14 != 0 )
  {
    if ( a1[1] != 23 )
      goto LABEL_12;
    v16 = s1[1] + 10 * s1[0] - 528;
    if ( v16 <= 49 )
      v16 += 100;
    v17 = s2[1] + 10 * s2[0] - 528;
    if ( v17 <= 49 )
      v17 += 100;
    result = -1;
    if ( v16 >= v17 )
    {
      result = 1;
      if ( v16 <= v17 )
      {
LABEL_12:
        result = strcmp(s1, s2);
        if ( result == 0 )
          return -1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_cmp_current_time  (binary VA: 0x19e1cb0)
// Original: X509_cmp_current_time
// ----------------------------------------------------------------------------
int X509_cmp_current_time(int *a1)
{
  return X509_cmp_time(a1, nullptr);
}

// ----------------------------------------------------------------------------
// Function: X509_get_pubkey_parameters  (binary VA: 0x19e1ce0)
// Original: X509_get_pubkey_parameters
// ----------------------------------------------------------------------------
int X509_get_pubkey_parameters(uint32_t *a1, int *a2)
{
  int v2;
  int v3;
  int i;
  int v5;
  int pubkey;
  uint32_t *v7;
  int v9;
  int v10;
  uint32_t *v11;

  if ( a1 != nullptr )
  {
    v2 = EVP_PKEY_missing_parameters((int)(uintptr_t)(a1));
    v3 = 1;
    if ( v2 == 0 )
      return v3;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= sk_num((int)(uintptr_t)(a2)) )
    {
      ERR_put_error(11, 110, 107, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v5 = sk_value(a2, i);
    pubkey = X509_get_pubkey(v5);
    v7 = (uint32_t *)pubkey;
    if ( pubkey == 0 )
    {
      ERR_put_error(11, 110, 108, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    if ( EVP_PKEY_missing_parameters(pubkey) == 0 )
      break;
    EVP_PKEY_free(v7);
  }
  v9 = i - 1;
  if ( v9 >= 0 )
  {
    do
    {
      v10 = sk_value(a2, v9--);
      v11 = (uint32_t *)X509_get_pubkey(v10);
      EVP_PKEY_copy_parameters(v11, v7);
      EVP_PKEY_free(v11);
    }
    while ( v9 != -1 );
  }
  if ( a1 != nullptr )
    EVP_PKEY_copy_parameters(a1, v7);
  EVP_PKEY_free(v7);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_verify_cert  (binary VA: 0x19e1e50)
// Original: X509_verify_cert
// ----------------------------------------------------------------------------
int X509_verify_cert(int a1)
{
  void **v1;
  int v2;
  int v3;
  int i;
  int result;
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
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int (*v23)(int);
  int v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void **_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int (*_g4_t_v38)(uint32_t, int);
  typedef int _g4_t_v39;
  typedef int (*_g4_t_v40)(uint32_t, int);
  typedef void **_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int (*_g4_t_v47)(uint32_t, int);
  typedef bool _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef void **_g4_t_v52;
  typedef int _g4_t_v53[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v31)) > _g4_s3 ? (4u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v32)) > _g4_s4 ? (4u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v33)) > _g4_s5 ? (8u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v34)) > _g4_s6 ? (8u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v35)) > _g4_s7 ? (8u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v36)) > _g4_s8 ? (8u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v37)) > _g4_s9 ? (8u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v38)) > _g4_s10 ? (8u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v39)) > _g4_s11 ? (12u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v40)) > _g4_s12 ? (12u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v41)) > _g4_s13 ? (12u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v42)) > _g4_s14 ? (16u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v43)) > _g4_s15 ? (16u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v44)) > _g4_s16 ? (20u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v45)) > _g4_s17 ? (20u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v46)) > _g4_s18 ? (24u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v47)) > _g4_s19 ? (28u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v48)) > _g4_s20 ? (28u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v49)) > _g4_s21 ? (32u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v50)) > _g4_s22 ? (36u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v51)) > _g4_s23 ? (40u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v52)) > _g4_s24 ? (44u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v53)) > _g4_s25 ? (60u + sizeof(_g4_t_v53)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);

  v49 = *(uint32_t *)(a1 + 20);
  if ( *(uint32_t *)(a1 + 8) == 0 )
  {
    ERR_put_error(11, 127, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  v47 = *(int (**)(uint32_t, int))(a1 + 32);
  if ( *(uint32_t *)(a1 + 84) == 0 )
  {
    v16 = (int *)(sk_new_null());
    *(uint32_t *)(a1 + 84) = (uint32_t)(uintptr_t)(v16);
    if ( v16 == nullptr || sk_push(v16, *(uint32_t *)(a1 + 8)) == 0 )
    {
      v1 = nullptr;
      ERR_put_error(11, 127, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      v43 = 0;
      goto LABEL_67;
    }
    CRYPTO_add_lock((uint32_t *)(*(uint32_t *)(a1 + 8) + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    *(uint32_t *)(a1 + 80) = 1;
  }
  if ( *(uint32_t *)(a1 + 12) != 0 )
  {
    v1 = sk_dup(*(uint32_t *)(a1 + 12));
    if ( v1 == nullptr )
      goto LABEL_66;
  }
  else
  {
    v1 = nullptr;
  }
  v39 = sk_num(*(uint32_t *)(a1 + 84));
  v33 = sk_value(*(int **)(a1 + 84), v39 - 1);
  v44 = *(uint32_t *)(v49 + 24);
  if ( v39 <= v44 )
  {
    v42 = (int *)v1;
    do
    {
      X509_get_issuer_name(v33);
      if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v33, v33) != 0 || *(uint32_t *)(a1 + 12) == 0 )
        break;
      v2 = 0;
      v1 = (void **)v42;
      while ( 1 )
      {
        if ( v2 >= sk_num((int)(uintptr_t)(v42)) )
        {
          v53[0] = 0;
          goto LABEL_14;
        }
        v28 = sk_value(v42, v2);
        if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v33, v28) != 0 )
          break;
        ++v2;
      }
      v53[0] = v28;
      if ( v28 == 0 )
        break;
      if ( sk_push(*(int **)(a1 + 84), v28) == 0 )
      {
        v1 = (void **)v42;
LABEL_66:
        ERR_put_error(11, 127, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        v43 = 0;
LABEL_67:
        X509_get_pubkey_parameters(nullptr, *(int **)(a1 + 84));
        result = 0;
        goto LABEL_68;
      }
      CRYPTO_add_lock((uint32_t *)(v53[0] + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
      sk_delete_ptr(v42, v53[0]);
      v15 = v53[0];
      ++v39;
      ++*(uint32_t *)(a1 + 80);
      v33 = v15;
    }
    while ( v44 >= v39 );
    v1 = (void **)v42;
  }
LABEL_14:
  v34 = sk_num(*(uint32_t *)(a1 + 84)) - 1;
  v3 = sk_value(*(int **)(a1 + 84), v34);
  X509_get_subject_name(v3);
  v51 = 0;
  v43 = 0;
  if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v3, v3) != 0 )
  {
    if ( sk_num(*(uint32_t *)(a1 + 84)) == 1 )
    {
      v24 = (*(int (**)(int *, int, int))(a1 + 36))(v53, a1, v3);
      if ( v24 <= 0 )
      {
        *(uint32_t *)(a1 + 100) = 18;
        *(uint32_t *)(a1 + 104) = v3;
        *(uint32_t *)(a1 + 96) = v34;
      }
      else
      {
        v31 = v24;
        if ( X509_cmp(v3, v53[0]) == 0 )
        {
          X509_free(v3);
          v3 = v53[0];
          sk_set(*(int **)(a1 + 84), v34, v53[0]);
          *(uint32_t *)(a1 + 80) = 0;
          v51 = 0;
          goto LABEL_15;
        }
        *(uint32_t *)(a1 + 100) = 18;
        *(uint32_t *)(a1 + 104) = v3;
        *(uint32_t *)(a1 + 96) = v34;
        if ( v31 == 1 )
          X509_free(v53[0]);
      }
      v43 = 0;
      if ( v47(0, a1) == 0 )
        goto LABEL_67;
      v51 = 1;
      goto LABEL_15;
    }
    v43 = sk_pop(*(int **)(a1 + 84));
    --v39;
    --*(uint32_t *)(a1 + 80);
    v3 = sk_value(*(int **)(a1 + 84), v39 - 1);
  }
LABEL_15:
  if ( v44 >= v39 )
  {
    v35 = v1;
    for ( i = v39; v44 >= i; ++i )
    {
      X509_get_issuer_name(v3);
      if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v3, v3) != 0 )
        break;
      result = (*(int (**)(int *, int, int))(a1 + 36))(v53, a1, v3);
      if ( result < 0 )
        return result;
      if ( result == 0 )
        break;
      v3 = v53[0];
      if ( sk_push(*(int **)(a1 + 84), v53[0]) == 0 )
      {
        X509_free(v53[0]);
        ERR_put_error(11, 127, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    v39 = i;
    v1 = v35;
  }
  X509_get_issuer_name(v3);
  if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v3, v3) == 0 )
  {
    if ( v43 != 0 && (*(int (**)(int, int, int))(a1 + 40))(a1, v3, v43) != 0 )
    {
      sk_push(*(int **)(a1 + 84), v43);
      *(uint32_t *)(a1 + 80) = ++v39;
      *(uint32_t *)(a1 + 104) = v43;
      *(uint32_t *)(a1 + 100) = 19;
      v43 = 0;
    }
    else
    {
      v6 = 2;
      if ( *(uint32_t *)(a1 + 80) >= v39 )
        v6 = 20;
      *(uint32_t *)(a1 + 104) = v3;
      *(uint32_t *)(a1 + 100) = v6;
    }
    *(uint32_t *)(a1 + 96) = v39 - 1;
    if ( v47(0, a1) == 0 )
      goto LABEL_67;
    v51 = 1;
  }
  v40 = *(int (**)(uint32_t, int))(a1 + 32);
  v48 = false;
  v50 = 6;
  if ( *(uint32_t *)(a1 + 124) == 0 )
  {
    v25 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 12);
    v48 = true;
    if ( getenv("OPENSSL_ALLOW_PROXY_CERTS") == nullptr )
      v48 = (v25 & 0x40) != 0;
    v50 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 16);
  }
  if ( *(int *)(a1 + 80) > 0 )
  {
    v52 = v1;
    v45 = 0;
    v46 = 0;
    v36 = -1;
    v7 = 0;
    while ( 1 )
    {
      v13 = sk_value(*(int **)(a1 + 84), v7);
      if ( (*(uint8_t *)(*(uint32_t *)(a1 + 20) + 12) & 0x10) == 0
        && (*(uint8_t *)(v13 + 41) & 2) != 0
        && (*(uint32_t *)(a1 + 100) = 34, *(uint32_t *)(a1 + 96) = v7, *(uint32_t *)(a1 + 104) = v13, v40(0, a1) == 0)
        || !v48
        && (*(uint8_t *)(v13 + 41) & 4) != 0
        && (*(uint32_t *)(a1 + 100) = 40, *(uint32_t *)(a1 + 96) = v7, *(uint32_t *)(a1 + 104) = v13, v40(0, a1) == 0) )
      {
LABEL_90:
        v1 = v52;
        goto LABEL_67;
      }
      v14 = X509_check_ca(v13);
      if ( v36 == -1 )
      {
        v8 = *(uint32_t *)(a1 + 20);
        if ( v14 == 1 || (*(uint8_t *)(v8 + 12) & 0x20) == 0 || v14 == 0 )
          goto LABEL_38;
        goto LABEL_62;
      }
      if ( v36 != 0 )
        break;
      if ( v14 != 0 )
      {
        *(uint32_t *)(a1 + 100) = 37;
        goto LABEL_36;
      }
LABEL_37:
      v8 = *(uint32_t *)(a1 + 20);
LABEL_38:
      if ( *(int *)(v8 + 16) > 0 )
      {
        v9 = X509_check_purpose(v13, v50, v36 > 0);
        if ( v9 == 0 || v9 != 1 && (*(uint8_t *)(*(uint32_t *)(a1 + 20) + 12) & 0x20) != 0 )
        {
          *(uint32_t *)(a1 + 100) = 26;
          *(uint32_t *)(a1 + 96) = v7;
          *(uint32_t *)(a1 + 104) = v13;
          if ( v40(0, a1) == 0 )
            goto LABEL_90;
        }
      }
      if ( v7 <= 1 )
        goto LABEL_83;
      v10 = *(uint32_t *)(v13 + 40);
      if ( (v10 & 0x20) == 0 )
      {
        v11 = *(uint32_t *)(v13 + 32);
        if ( v11 != -1 && v45 > v46 + v11 + 1 )
        {
          *(uint32_t *)(a1 + 100) = 25;
          *(uint32_t *)(a1 + 96) = v7;
          *(uint32_t *)(a1 + 104) = v13;
          if ( v40(0, a1) == 0 )
            goto LABEL_90;
LABEL_83:
          v10 = *(uint32_t *)(v13 + 40);
          if ( (v10 & 0x20) != 0 )
            goto LABEL_48;
        }
        ++v45;
      }
LABEL_48:
      v36 = 1;
      if ( (v10 & 0x400) != 0 )
      {
        v12 = *(uint32_t *)(v13 + 36);
        if ( v12 != -1 && v7 > v12 )
        {
          *(uint32_t *)(a1 + 100) = 38;
          *(uint32_t *)(a1 + 96) = v7;
          *(uint32_t *)(a1 + 104) = v13;
          if ( v40(0, a1) == 0 )
            goto LABEL_90;
        }
        ++v46;
        v36 = 0;
      }
      if ( ++v7 >= *(uint32_t *)(a1 + 80) )
      {
        v1 = v52;
        goto LABEL_96;
      }
    }
    if ( v14 != 0 )
    {
      v8 = *(uint32_t *)(a1 + 20);
      if ( v14 == 1 || (*(uint8_t *)(v8 + 12) & 0x20) == 0 )
        goto LABEL_38;
    }
LABEL_62:
    *(uint32_t *)(a1 + 100) = 24;
LABEL_36:
    *(uint32_t *)(a1 + 96) = v7;
    *(uint32_t *)(a1 + 104) = v13;
    if ( v40(0, a1) == 0 )
      goto LABEL_90;
    goto LABEL_37;
  }
LABEL_96:
  v17 = sk_num(*(uint32_t *)(a1 + 84)) - 1;
  if ( v17 >= 0 )
  {
    v41 = v1;
    v18 = v17;
    while ( 1 )
    {
      v19 = sk_value(*(int **)(a1 + 84), v18);
      v37 = v19;
      if ( v18 == 0 || (*(uint8_t *)(v19 + 40) & 0x20) == 0 )
      {
        v20 = sk_num(*(uint32_t *)(a1 + 84)) - 1;
        if ( v20 > v18 )
          break;
      }
LABEL_107:
      if ( --v18 == -1 )
      {
        v1 = v41;
        goto LABEL_109;
      }
    }
    while ( 1 )
    {
      v21 = *(uint32_t *)(sk_value(*(int **)(a1 + 84), v20) + 76);
      if ( v21 != 0 )
      {
        v22 = NAME_CONSTRAINTS_check(v37, v21);
        if ( v22 != 0 )
        {
          *(uint32_t *)(a1 + 100) = v22;
          *(uint32_t *)(a1 + 96) = v18;
          *(uint32_t *)(a1 + 104) = v37;
          if ( (*(int (**)(uint32_t, int))(a1 + 32))(0, a1) == 0 )
            break;
        }
      }
      if ( --v20 == v18 )
        goto LABEL_107;
    }
    v1 = v41;
    goto LABEL_67;
  }
LABEL_109:
  if ( *(int *)(v49 + 20) > 0 )
  {
    v38 = *(int (**)(uint32_t, int))(a1 + 32);
    v32 = sk_num(*(uint32_t *)(a1 + 84)) - 1;
    v26 = sk_value(*(int **)(a1 + 84), v32);
    v27 = X509_check_trust(v26, *(uint32_t *)(*(uint32_t *)(a1 + 20) + 20), 0);
    if ( v27 != 1 )
    {
      *(uint32_t *)(a1 + 96) = v32;
      *(uint32_t *)(a1 + 104) = v26;
      *(uint32_t *)(a1 + 100) = (v27 == 2) + 27;
      if ( v38(0, a1) == 0 )
        goto LABEL_67;
    }
  }
  X509_get_pubkey_parameters(nullptr, *(int **)(a1 + 84));
  if ( (*(int (**)(int))(a1 + 44))(a1) == 0 )
    goto LABEL_67;
  v23 = *(int (**)(int))(a1 + 28);
  result = v23 != nullptr ? v23(a1) : sub_19E19F0(a1);
  if ( result == 0 )
    goto LABEL_67;
  if ( v51 == 0 && *(char *)(*(uint32_t *)(a1 + 20) + 12) < 0 )
  {
    result = (*(int (**)(int))(a1 + 60))(a1);
    if ( result == 0 )
      goto LABEL_67;
  }
LABEL_68:
  if ( v1 != nullptr )
  {
    v29 = result;
    sk_free(v1);
    result = v29;
  }
  if ( v43 != 0 )
  {
    v30 = result;
    X509_free(v43);
    return v30;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_ex_new_index  (binary VA: 0x19e2900)
// Original: X509_STORE_CTX_get_ex_new_index
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(5, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_ex_data  (binary VA: 0x19e2950)
// Original: X509_STORE_CTX_set_ex_data
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 128), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_ex_data  (binary VA: 0x19e2990)
// Original: X509_STORE_CTX_get_ex_data
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 128), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_error  (binary VA: 0x19e29c0)
// Original: X509_STORE_CTX_get_error
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_error(int a1)
{
  return *(uint32_t *)(a1 + 100);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_error  (binary VA: 0x19e29d0)
// Original: X509_STORE_CTX_set_error
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_error(int a1, int a2)
{
  *(uint32_t *)(a1 + 100) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_error_depth  (binary VA: 0x19e29e0)
// Original: X509_STORE_CTX_get_error_depth
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_error_depth(int a1)
{
  return *(uint32_t *)(a1 + 96);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_current_cert  (binary VA: 0x19e29f0)
// Original: X509_STORE_CTX_get_current_cert
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_current_cert(int a1)
{
  return *(uint32_t *)(a1 + 104);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_chain  (binary VA: 0x19e2a00)
// Original: X509_STORE_CTX_get_chain
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_chain(int a1)
{
  return *(uint32_t *)(a1 + 84);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get1_chain  (binary VA: 0x19e2a10)
// Original: X509_STORE_CTX_get1_chain
// ----------------------------------------------------------------------------
int * X509_STORE_CTX_get1_chain(int a1)
{
  int *v1;
  int i;
  int v3;

  v1 = nullptr;
  if ( *(uint32_t *)(a1 + 84) != 0 )
  {
    v1 = (int *)sk_dup(*(uint32_t *)(a1 + 84));
    if ( v1 != nullptr )
    {
      for ( i = 0; i < sk_num((int)(uintptr_t)(v1)); ++i )
      {
        v3 = sk_value(v1, i);
        CRYPTO_add_lock((uint32_t *)(v3 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get0_current_issuer  (binary VA: 0x19e2aa0)
// Original: X509_STORE_CTX_get0_current_issuer
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get0_current_issuer(int a1)
{
  return *(uint32_t *)(a1 + 108);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get0_current_crl  (binary VA: 0x19e2ab0)
// Original: X509_STORE_CTX_get0_current_crl
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get0_current_crl(int a1)
{
  return *(uint32_t *)(a1 + 112);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get0_parent_ctx  (binary VA: 0x19e2ac0)
// Original: X509_STORE_CTX_get0_parent_ctx
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get0_parent_ctx(int a1)
{
  return *(uint32_t *)(a1 + 124);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_cert  (binary VA: 0x19e2ad0)
// Original: X509_STORE_CTX_set_cert
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_cert(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_chain  (binary VA: 0x19e2ae0)
// Original: X509_STORE_CTX_set_chain
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_chain(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set0_crls  (binary VA: 0x19e2af0)
// Original: X509_STORE_CTX_set0_crls
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set0_crls(int a1, int a2)
{
  *(uint32_t *)(a1 + 16) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_purpose_inherit  (binary VA: 0x19e2b00)
// Original: X509_STORE_CTX_purpose_inherit
// ----------------------------------------------------------------------------
int X509_STORE_CTX_purpose_inherit(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;

  v4 = a3;
  v5 = a4;
  if ( a3 == 0 )
  {
    if ( a2 == 0 )
    {
      if ( a4 == 0 )
        goto LABEL_11;
      goto LABEL_6;
    }
    v4 = a2;
  }
  v6 = X509_PURPOSE_get_by_id(v4);
  if ( v6 == -1 )
    goto LABEL_17;
  v7 = (int)(uintptr_t)(X509_PURPOSE_get0(v6));
  if ( *(uint32_t *)(v7 + 4) == -1 )
  {
    v11 = X509_PURPOSE_get_by_id(a2);
    if ( v11 != -1 )
    {
      v7 = (int)(uintptr_t)(X509_PURPOSE_get0(v11));
      goto LABEL_4;
    }
LABEL_17:
    ERR_put_error(11, 134, 121, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
LABEL_4:
  if ( a4 == 0 )
  {
    v5 = *(uint32_t *)(v7 + 4);
    if ( v5 == 0 )
      goto LABEL_11;
  }
LABEL_6:
  if ( X509_TRUST_get_by_id(v5) == -1 )
  {
    ERR_put_error(11, 134, 120, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
LABEL_11:
  if ( v4 != 0 )
  {
    v9 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(v9 + 16) == 0 )
      *(uint32_t *)(v9 + 16) = v4;
  }
  result = 1;
  if ( v5 != 0 )
  {
    v10 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(v10 + 20) == 0 )
      *(uint32_t *)(v10 + 20) = v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_trust  (binary VA: 0x19e2c60)
// Original: X509_STORE_CTX_set_trust
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_trust(int a1, int a2)
{
  return X509_STORE_CTX_purpose_inherit(a1, 0, 0, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_purpose  (binary VA: 0x19e2ca0)
// Original: X509_STORE_CTX_set_purpose
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_purpose(int a1, int a2)
{
  return X509_STORE_CTX_purpose_inherit(a1, 0, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_new  (binary VA: 0x19e2ce0)
// Original: X509_STORE_CTX_new
// ----------------------------------------------------------------------------
uint8_t * X509_STORE_CTX_new()
{
  uint8_t *v0;
  uint8_t *v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  v0 = CRYPTO_malloc(136, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = v0;
  if ( v0 == nullptr )
  {
    ERR_put_error(11, 142, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v1;
  }
  v2 = (uint16_t *)(v0);
  v3 = 136;
  if ( ((uint8_t)(uintptr_t)(v0) & 1) != 0 )
  {
    *v0 = 0;
    v2 = (uint16_t *)(v0 + 1);
    LOBYTE(v3) = -121;
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
      return v1;
  }
  else if ( (v3 & 1) == 0 )
  {
    return v1;
  }
  *(uint8_t *)v4 = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_init  (binary VA: 0x19e2dc0)
// Original: X509_STORE_CTX_init
// ----------------------------------------------------------------------------
int X509_STORE_CTX_init(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v8;
  int (*v9)(int, int, int);
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void **(*v18)(int *, int);
  int v19;

  a1[2] = a3;
  *a1 = (uint32_t)(uintptr_t)(a2);
  a1[1] = 0;
  a1[3] = a4;
  a1[4] = 0;
  a1[20] = 0;
  a1[6] = 0;
  a1[19] = 0;
  a1[21] = 0;
  a1[25] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[22] = 0;
  a1[31] = 0;
  v4 = (int)(uintptr_t)(X509_VERIFY_PARAM_new());
  a1[5] = v4;
  if ( v4 == 0 )
    goto LABEL_4;
  if ( a2 != nullptr )
  {
    v5 = X509_VERIFY_PARAM_inherit(v4, a2[3]);
    a1[8] = a2[5];
    a1[18] = a2[14];
    if ( v5 == 0 )
      goto LABEL_4;
  }
  else
  {
    *(uint32_t *)(v4 + 8) |= 0x11u;
    a1[18] = 0;
  }
  v8 = X509_VERIFY_PARAM_lookup("default");
  if ( X509_VERIFY_PARAM_inherit(a1[5], v8) == 0 )
    goto LABEL_4;
  if ( a2 != nullptr )
  {
    v9 = (int (*)(int, int, int))a2[7];
    if ( v9 == nullptr )
      v9 = sub_19E06D0;
    a1[10] = (uint32_t)(uintptr_t)(v9);
    v10 = a2[6];
    if ( v10 != 0 )
      a1[9] = v10;
    else
      a1[9] = (uint32_t)(uintptr_t)(X509_STORE_CTX_get1_issuer);
    v11 = a2[5];
    if ( v11 != 0 )
      a1[8] = v11;
    else
      a1[8] = (uint32_t)(uintptr_t)(sub_19E04B0);
    v12 = a2[4];
    if ( v12 != 0 )
      a1[7] = v12;
    else
      a1[7] = (uint32_t)(uintptr_t)(sub_19E19F0);
    v13 = a2[8];
    if ( v13 != 0 )
      a1[11] = v13;
    else
      a1[11] = (uint32_t)(uintptr_t)(sub_19E16D0);
    v14 = a2[9];
    if ( v14 != 0 )
      a1[12] = v14;
    else
      a1[12] = 0;
    v15 = a2[10];
    if ( v15 != 0 )
      a1[13] = v15;
    else
      a1[13] = (uint32_t)(uintptr_t)(sub_19E3360);
    v16 = a2[11];
    if ( v16 != 0 )
      a1[14] = v16;
    else
      a1[14] = (uint32_t)(uintptr_t)(sub_19E08E0);
    v17 = a2[12];
    if ( v17 != 0 )
      a1[16] = v17;
    else
      a1[16] = (uint32_t)(uintptr_t)(X509_STORE_get1_certs);
    v18 = (void **(*)(int *, int))a2[13];
    if ( v18 != nullptr )
      goto LABEL_28;
  }
  else
  {
    a1[10] = (uint32_t)(uintptr_t)(sub_19E06D0);
    a1[9] = (uint32_t)(uintptr_t)(X509_STORE_CTX_get1_issuer);
    a1[8] = (uint32_t)(uintptr_t)(sub_19E04B0);
    a1[7] = (uint32_t)(uintptr_t)(sub_19E19F0);
    a1[11] = (uint32_t)(uintptr_t)(sub_19E16D0);
    a1[12] = 0;
    a1[13] = (uint32_t)(uintptr_t)(sub_19E3360);
    a1[14] = (uint32_t)(uintptr_t)(sub_19E08E0);
    a1[16] = (uint32_t)(uintptr_t)(X509_STORE_get1_certs);
  }
  v18 = X509_STORE_get1_crls;
LABEL_28:
  a1[17] = (uint32_t)(uintptr_t)(v18);
  a1[15] = (uint32_t)(uintptr_t)(sub_19E0760);
  v19 = CRYPTO_new_ex_data(5, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 32));
  v6 = 1;
  if ( v19 != 0 )
    return v6;
  CRYPTO_free(a1);
LABEL_4:
  ERR_put_error(11, 143, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_trusted_stack  (binary VA: 0x19e30e0)
// Original: X509_STORE_CTX_trusted_stack
// ----------------------------------------------------------------------------
int X509_STORE_CTX_trusted_stack(int a1, int a2)
{
  *(uint32_t *)(a1 + 24) = a2;
  *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(sub_19E04C0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_cleanup  (binary VA: 0x19e3100)
// Original: X509_STORE_CTX_cleanup
// ----------------------------------------------------------------------------
int X509_STORE_CTX_cleanup(int a1)
{
  void (*v1)(int);
  int result;

  v1 = *(void (**)(int))(a1 + 72);
  if ( v1 != nullptr )
    v1(a1);
  if ( *(uint32_t *)(a1 + 20) != 0 )
  {
    if ( *(uint32_t *)(a1 + 124) == 0 )
      X509_VERIFY_PARAM_free(*(void **)(a1 + 20));
    *(uint32_t *)(a1 + 20) = 0;
  }
  if ( *(uint32_t *)(a1 + 88) != 0 )
  {
    X509_policy_tree_free(*(void **)(a1 + 88));
    *(uint32_t *)(a1 + 88) = 0;
  }
  if ( *(uint32_t *)(a1 + 84) != 0 )
  {
    sk_pop_free(*(void ***)(a1 + 84), (void (*)(uint32_t))((int (*)(char))X509_free));
    *(uint32_t *)(a1 + 84) = 0;
  }
  result = CRYPTO_free_ex_data(5, a1, a1 + 128);
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_free  (binary VA: 0x19e31d0)
// Original: X509_STORE_CTX_free
// ----------------------------------------------------------------------------
int X509_STORE_CTX_free(void *a1)
{
  X509_STORE_CTX_cleanup((int)(uintptr_t)(a1));
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_depth  (binary VA: 0x19e3210)
// Original: X509_STORE_CTX_set_depth
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_depth(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_depth(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_flags  (binary VA: 0x19e3240)
// Original: X509_STORE_CTX_set_flags
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_flags(int a1, int a2)
{
  return X509_VERIFY_PARAM_set_flags(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_time  (binary VA: 0x19e3270)
// Original: X509_STORE_CTX_set_time
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_time(int a1, int a2, int a3)
{
  return X509_VERIFY_PARAM_set_time(*(uint32_t *)(a1 + 20), a3);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_verify_cb  (binary VA: 0x19e32a0)
// Original: X509_STORE_CTX_set_verify_cb
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_verify_cb(int a1, int a2)
{
  *(uint32_t *)(a1 + 32) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get0_policy_tree  (binary VA: 0x19e32b0)
// Original: X509_STORE_CTX_get0_policy_tree
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get0_policy_tree(int a1)
{
  return *(uint32_t *)(a1 + 88);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get_explicit_policy  (binary VA: 0x19e32c0)
// Original: X509_STORE_CTX_get_explicit_policy
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get_explicit_policy(int a1)
{
  return *(uint32_t *)(a1 + 92);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set_default  (binary VA: 0x19e32d0)
// Original: X509_STORE_CTX_set_default
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set_default(int a1, int a2)
{
  int v2;
  int result;

  v2 = X509_VERIFY_PARAM_lookup(a2);
  result = 0;
  if ( v2 != 0 )
    return X509_VERIFY_PARAM_inherit(*(uint32_t *)(a1 + 20), v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_get0_param  (binary VA: 0x19e3310)
// Original: X509_STORE_CTX_get0_param
// ----------------------------------------------------------------------------
int X509_STORE_CTX_get0_param(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: X509_STORE_CTX_set0_param  (binary VA: 0x19e3320)
// Original: X509_STORE_CTX_set0_param
// ----------------------------------------------------------------------------
int X509_STORE_CTX_set0_param(int a1, int a2)
{
  if ( *(uint32_t *)(a1 + 20) != 0 )
    X509_VERIFY_PARAM_free(*(void **)(a1 + 20));
  *(uint32_t *)(a1 + 20) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_free  (binary VA: 0x19e3750)
// Original: X509_VERIFY_PARAM_free
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_free(uint32_t *a1)
{
  void **v1;

  if ( a1 != nullptr )
  {
    v1 = (void **)a1[7];
    *a1 = 0;
    a1[4] = 0;
    a1[5] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[6] = -1;
    if ( v1 != nullptr )
    {
      sk_pop_free(v1, (void (*)(uint32_t))ASN1_OBJECT_free);
      a1[7] = 0;
    }
  }
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_new  (binary VA: 0x19e37d0)
// Original: X509_VERIFY_PARAM_new
// ----------------------------------------------------------------------------
uint32_t * X509_VERIFY_PARAM_new()
{
  uint8_t *v0;
  uint32_t *v1;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;
  void **v5;

  v0 = CRYPTO_malloc(32, (int)(uintptr_t)(&unk_1B15112), 0);
  v1 = (uint32_t *)(v0);
  v2 = (uint16_t *)(v0);
  v3 = 32;
  if ( ((uint8_t)(uintptr_t)(v0) & 1) != 0 )
  {
    v2 = (uint16_t *)(v0 + 1);
    *v0 = 0;
    LOBYTE(v3) = 31;
    if ( ((unsigned int)(uintptr_t)(v0 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v0) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v3 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v4++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  if ( v0 != nullptr )
  {
    v5 = *((void ***)v0 + 7);
    *v1 = 0;
    v1[4] = 0;
    v1[5] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[6] = -1;
    if ( v5 != nullptr )
    {
      sk_pop_free(v5, (void (*)(uint32_t))ASN1_OBJECT_free);
      v1[7] = 0;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set1_name  (binary VA: 0x19e38d0)
// Original: X509_VERIFY_PARAM_set1_name
// ----------------------------------------------------------------------------
bool X509_VERIFY_PARAM_set1_name(void **a1, char *a2)
{
  char *v2;

  if ( *a1 != nullptr )
    CRYPTO_free(*a1);
  v2 = BUF_strdup(a2);
  *a1 = v2;
  return v2 != nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set_flags  (binary VA: 0x19e3920)
// Original: X509_VERIFY_PARAM_set_flags
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set_flags(int a1, int a2)
{
  int v2;

  v2 = a2 | *(uint32_t *)(a1 + 12);
  *(uint32_t *)(a1 + 12) = v2;
  if ( (a2 & 0x780) != 0 )
  {
    LOBYTE(v2) = v2 | 0x80;
    *(uint32_t *)(a1 + 12) = v2;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_clear_flags  (binary VA: 0x19e3950)
// Original: X509_VERIFY_PARAM_clear_flags
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_clear_flags(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) &= ~a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_get_flags  (binary VA: 0x19e3970)
// Original: X509_VERIFY_PARAM_get_flags
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_get_flags(int a1)
{
  return *(uint32_t *)(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set_purpose  (binary VA: 0x19e3980)
// Original: X509_VERIFY_PARAM_set_purpose
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set_purpose(int a1, int a2)
{
  return X509_PURPOSE_set(a1 + 16, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set_trust  (binary VA: 0x19e39b0)
// Original: X509_VERIFY_PARAM_set_trust
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set_trust(int a1, int a2)
{
  return X509_TRUST_set(a1 + 20, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set_depth  (binary VA: 0x19e39e0)
// Original: X509_VERIFY_PARAM_set_depth
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set_depth(int a1, int a2)
{
  *(uint32_t *)(a1 + 24) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set_time  (binary VA: 0x19e39f0)
// Original: X509_VERIFY_PARAM_set_time
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set_time(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2;
  *(uint32_t *)(a1 + 12) |= 2u;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_add0_policy  (binary VA: 0x19e3a00)
// Original: X509_VERIFY_PARAM_add0_policy
// ----------------------------------------------------------------------------
bool X509_VERIFY_PARAM_add0_policy(int a1, int a2)
{
  int *v2;
  bool result;

  v2 = *(int **)(a1 + 28);
  if ( v2 != nullptr )
    return sk_push(v2, a2) != 0;
  v2 = (int *)(sk_new_null());
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v2);
  result = false;
  if ( v2 != nullptr )
    return sk_push(v2, a2) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set1_policies  (binary VA: 0x19e3a60)
// Original: X509_VERIFY_PARAM_set1_policies
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set1_policies(int a1, int *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  size_t *v6;
  size_t *v7;

  v2 = 0;
  if ( a1 == 0 )
    return v2;
  if ( *(uint32_t *)(a1 + 28) != 0 )
    sk_pop_free(*(void ***)(a1 + 28), (void (*)(uint32_t))ASN1_OBJECT_free);
  if ( a2 != nullptr )
  {
    v3 = sk_new_null();
    v4 = 0;
    *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v3);
    v2 = 0;
    if ( v3 == nullptr )
      return v2;
    while ( 1 )
    {
      if ( v4 >= sk_num((int)(uintptr_t)(a2)) )
      {
        *(uint32_t *)(a1 + 12) |= 0x80u;
        return 1;
      }
      v5 = sk_value(a2, v4);
      v6 = OBJ_dup(v5);
      v7 = v6;
      if ( v6 == nullptr )
        return 0;
      if ( sk_push(*(int **)(a1 + 28), (int)(uintptr_t)(v6)) == 0 )
        break;
      ++v4;
    }
    ASN1_OBJECT_free(v7);
    return 0;
  }
  else
  {
    *(uint32_t *)(a1 + 28) = 0;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_inherit  (binary VA: 0x19e3b70)
// Original: X509_VERIFY_PARAM_inherit
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_inherit(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;

  result = 1;
  if ( a2 != nullptr )
  {
    v3 = a1[2] | a2[2];
    if ( (v3 & 0x10) != 0 )
      a1[2] = 0;
    result = 1;
    if ( (v3 & 8) == 0 )
    {
      v4 = v3 & 1;
      if ( (v3 & 2) != 0 )
      {
        v5 = 1;
        a1[4] = a2[4];
        a1[5] = a2[5];
        a1[6] = a2[6];
        v11 = a1[3];
        goto LABEL_7;
      }
      v8 = a2[4];
      if ( v8 != 0 && ((v3 & 1) != 0 || a1[4] == 0) )
        a1[4] = v8;
      v9 = a2[5];
      if ( v9 != 0 && ((v3 & 1) != 0 || a1[5] == 0) )
        a1[5] = v9;
      v10 = a2[6];
      if ( v10 != -1 && ((v3 & 1) != 0 || a1[6] == -1) )
      {
        a1[6] = v10;
        v5 = 0;
        v11 = a1[3];
        if ( (v11 & 2) != 0 )
        {
LABEL_26:
          if ( (v3 & 4) == 0 )
            goto LABEL_8;
          goto LABEL_27;
        }
      }
      else
      {
        v5 = 0;
        v11 = a1[3];
        if ( (v11 & 2) != 0 )
          goto LABEL_26;
      }
LABEL_7:
      a1[1] = a2[1];
      a1[3] = v11 & 0xFFFFFFFD;
      if ( (v3 & 4) == 0 )
      {
LABEL_8:
        v6 = a1[3];
LABEL_9:
        a1[3] = a2[3] | v6;
        v7 = (int *)a2[7];
        if ( v5 != 0 )
          return X509_VERIFY_PARAM_set1_policies((int)(uintptr_t)(a1), v7) != 0;
        result = 1;
        if ( v7 != nullptr && (v4 != 0 || a1[7] == 0) )
          return X509_VERIFY_PARAM_set1_policies((int)(uintptr_t)(a1), v7) != 0;
        return result;
      }
LABEL_27:
      a1[3] = 0;
      v6 = 0;
      goto LABEL_9;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_set1  (binary VA: 0x19e3cf0)
// Original: X509_VERIFY_PARAM_set1
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_set1(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int result;

  v2 = a1[2];
  a1[2] = v2 | 1;
  result = X509_VERIFY_PARAM_inherit(a1, a2);
  a1[2] = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_get_depth  (binary VA: 0x19e3d40)
// Original: X509_VERIFY_PARAM_get_depth
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_get_depth(int a1)
{
  return *(uint32_t *)(a1 + 24);
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_add0_table  (binary VA: 0x19e3d50)
// Original: X509_VERIFY_PARAM_add0_table
// ----------------------------------------------------------------------------
bool X509_VERIFY_PARAM_add0_table(int a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int *v4;
  bool result;

  if ( dword_2141E20 != 0 )
  {
    v1 = sk_find(dword_2141E20, a1);
    v2 = v1;
    if ( v1 != -1 )
    {
      v3 = (uint32_t *)sk_value((int *)dword_2141E20, v1);
      X509_VERIFY_PARAM_free(v3);
      sk_delete((int *)dword_2141E20, v2);
    }
    v4 = (int *)dword_2141E20;
    return sk_push(v4, a1) != 0;
  }
  v4 = (int *)(sk_new((int)(uintptr_t)(sub_19E3710)));
  dword_2141E20 = (int)(uintptr_t)(v4);
  result = false;
  if ( v4 != nullptr )
    return sk_push(v4, a1) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_lookup  (binary VA: 0x19e3e10)
// Original: X509_VERIFY_PARAM_lookup
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_lookup(int a1)
{
  int v1;
  uint32_t v3[11];

  v3[0] = a1;
  if ( dword_2141E20 != 0 && (v1 = sk_find(dword_2141E20, (int)(uintptr_t)(v3))) != -1 )
    return sk_value((int *)dword_2141E20, v1);
  else
    return OBJ_bsearch((int)(uintptr_t)(v3), (int)(uintptr_t)(&off_2045580), 5, 32, (int (*)(int, int))sub_19E36E0);
}

// ----------------------------------------------------------------------------
// Function: X509_VERIFY_PARAM_table_cleanup  (binary VA: 0x19e3ea0)
// Original: X509_VERIFY_PARAM_table_cleanup
// ----------------------------------------------------------------------------
int X509_VERIFY_PARAM_table_cleanup()
{
  int result;

  result = dword_2141E20;
  if ( dword_2141E20 != 0 )
    result = sk_pop_free((void **)dword_2141E20, (void (*)(uint32_t))((int (*)(uint32_t *))X509_VERIFY_PARAM_free));
  dword_2141E20 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_certificate_type  (binary VA: 0x19e3ee0)
// Original: X509_certificate_type
// ----------------------------------------------------------------------------
int X509_certificate_type(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *pubkey;

  v2 = 0;
  if ( a1 != 0 )
  {
    pubkey = a2;
    if ( a2 != nullptr || (pubkey = (int *)X509_get_pubkey(a1)) != nullptr )
    {
      v2 = 18;
      v3 = *pubkey;
      if ( *pubkey != 116 )
      {
        if ( *pubkey <= 116 )
        {
          LOWORD(v2) = 49;
          if ( v3 != 6 )
          {
            LOWORD(v2) = 68;
            if ( v3 != 28 )
              v2 = 0;
          }
        }
        else
        {
          v2 = 88;
          if ( v3 != 408 )
          {
            if ( v3 < 408 || (v2 = 80, (unsigned int)(v3 - 811) > 1) )
              v2 = 0;
          }
        }
      }
      v4 = OBJ_obj2nid(**(uint32_t **)(a1 + 4));
      v5 = EVP_PKEY_type(v4);
      if ( v5 == 116 )
      {
        v2 |= 0x200u;
      }
      else if ( v5 == 408 )
      {
        v2 |= 0x400u;
      }
      else
      {
        v6 = v2;
        if ( v5 == 6 )
        {
          BYTE1(v6) = BYTE1(v2) | 1;
          v2 = v6;
        }
      }
      v7 = EVP_PKEY_size((int)(uintptr_t)(pubkey));
      v8 = v2;
      if ( (v7 - 128 < 0) ^ __OFADD__(-128, v7) | (v7 == 128) )
      {
        BYTE1(v8) = BYTE1(v2) | 0x10;
        v2 = v8;
      }
      if ( a2 == nullptr )
        EVP_PKEY_free(pubkey);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_verify  (binary VA: 0x19e4010)
// Original: X509_verify
// ----------------------------------------------------------------------------
int X509_verify(uint32_t *a1, int a2)
{
  return ASN1_item_verify(X509_CINF_it, a1[1], a1[2], *a1, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_verify  (binary VA: 0x19e4060)
// Original: X509_REQ_verify
// ----------------------------------------------------------------------------
int X509_REQ_verify(uint32_t *a1, int a2)
{
  return ASN1_item_verify(&X509_REQ_INFO_it, a1[1], a1[2], *a1, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_sign  (binary VA: 0x19e4100)
// Original: X509_sign
// ----------------------------------------------------------------------------
int X509_sign(uint32_t *a1, int a2, int a3)
{
  *(uint32_t *)(*a1 + 48) = 1;
  return ASN1_item_sign(X509_CINF_it, *(uint32_t *)(*a1 + 8), a1[1], a1[2], *a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_sign  (binary VA: 0x19e4160)
// Original: X509_REQ_sign
// ----------------------------------------------------------------------------
int X509_REQ_sign(uint32_t *a1, int a2, int a3)
{
  return ASN1_item_sign(&X509_REQ_INFO_it, a1[1], 0, a1[2], *a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_sign  (binary VA: 0x19e41c0)
// Original: X509_CRL_sign
// ----------------------------------------------------------------------------
int X509_CRL_sign(uint32_t *a1, int a2, int a3)
{
  *(uint32_t *)(*a1 + 36) = 1;
  return ASN1_item_sign(&X509_CRL_INFO_it, *(uint32_t *)(*a1 + 4), a1[1], a1[2], *a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_fp  (binary VA: 0x19e4280)
// Original: d2i_X509_fp
// ----------------------------------------------------------------------------
int d2i_X509_fp(int a1, int a2)
{
  return ASN1_item_d2i_fp(X509_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_fp  (binary VA: 0x19e42c0)
// Original: i2d_X509_fp
// ----------------------------------------------------------------------------
int i2d_X509_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp(X509_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_bio  (binary VA: 0x19e4300)
// Original: d2i_X509_bio
// ----------------------------------------------------------------------------
int d2i_X509_bio(int a1, int a2)
{
  return ASN1_item_d2i_bio(X509_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_bio  (binary VA: 0x19e4340)
// Original: i2d_X509_bio
// ----------------------------------------------------------------------------
int i2d_X509_bio(int a1, int a2)
{
  return ASN1_item_i2d_bio(X509_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CRL_fp  (binary VA: 0x19e4380)
// Original: d2i_X509_CRL_fp
// ----------------------------------------------------------------------------
int d2i_X509_CRL_fp(int a1, int a2)
{
  return ASN1_item_d2i_fp(&X509_CRL_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CRL_fp  (binary VA: 0x19e43c0)
// Original: i2d_X509_CRL_fp
// ----------------------------------------------------------------------------
int i2d_X509_CRL_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp(&X509_CRL_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_CRL_bio  (binary VA: 0x19e4400)
// Original: d2i_X509_CRL_bio
// ----------------------------------------------------------------------------
int d2i_X509_CRL_bio(int a1, int a2)
{
  return ASN1_item_d2i_bio(&X509_CRL_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_CRL_bio  (binary VA: 0x19e4440)
// Original: i2d_X509_CRL_bio
// ----------------------------------------------------------------------------
int i2d_X509_CRL_bio(int a1, int a2)
{
  return ASN1_item_i2d_bio(&X509_CRL_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_fp  (binary VA: 0x19e4480)
// Original: d2i_PKCS7_fp
// ----------------------------------------------------------------------------
int d2i_PKCS7_fp(int a1, int a2)
{
  return ASN1_item_d2i_fp(PKCS7_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_fp  (binary VA: 0x19e44c0)
// Original: i2d_PKCS7_fp
// ----------------------------------------------------------------------------
int i2d_PKCS7_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp(PKCS7_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS7_bio  (binary VA: 0x19e4500)
// Original: d2i_PKCS7_bio
// ----------------------------------------------------------------------------
int d2i_PKCS7_bio(int a1, int a2)
{
  return ASN1_item_d2i_bio(PKCS7_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS7_bio  (binary VA: 0x19e4540)
// Original: i2d_PKCS7_bio
// ----------------------------------------------------------------------------
int i2d_PKCS7_bio(int a1, int a2)
{
  return ASN1_item_i2d_bio(PKCS7_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_REQ_fp  (binary VA: 0x19e4580)
// Original: d2i_X509_REQ_fp
// ----------------------------------------------------------------------------
int d2i_X509_REQ_fp(int a1, int a2)
{
  return ASN1_item_d2i_fp(&X509_REQ_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_REQ_fp  (binary VA: 0x19e45c0)
// Original: i2d_X509_REQ_fp
// ----------------------------------------------------------------------------
int i2d_X509_REQ_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp(&X509_REQ_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_X509_REQ_bio  (binary VA: 0x19e4600)
// Original: d2i_X509_REQ_bio
// ----------------------------------------------------------------------------
int d2i_X509_REQ_bio(int a1, int a2)
{
  return ASN1_item_d2i_bio(&X509_REQ_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_X509_REQ_bio  (binary VA: 0x19e4640)
// Original: i2d_X509_REQ_bio
// ----------------------------------------------------------------------------
int i2d_X509_REQ_bio(int a1, int a2)
{
  return ASN1_item_i2d_bio(&X509_REQ_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_RSAPrivateKey_fp  (binary VA: 0x19e4680)
// Original: d2i_RSAPrivateKey_fp
// ----------------------------------------------------------------------------
int d2i_RSAPrivateKey_fp(int a1, int a2)
{
  return ASN1_item_d2i_fp(&RSAPrivateKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_RSAPrivateKey_fp  (binary VA: 0x19e46c0)
// Original: i2d_RSAPrivateKey_fp
// ----------------------------------------------------------------------------
int i2d_RSAPrivateKey_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp(&RSAPrivateKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_RSAPublicKey_fp  (binary VA: 0x19e4700)
// Original: d2i_RSAPublicKey_fp
// ----------------------------------------------------------------------------
int d2i_RSAPublicKey_fp(int a1, int a2)
{
  return ASN1_item_d2i_fp(&RSAPublicKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_RSA_PUBKEY_fp  (binary VA: 0x19e4740)
// Original: d2i_RSA_PUBKEY_fp
// ----------------------------------------------------------------------------
int d2i_RSA_PUBKEY_fp(int a1, int a2)
{
  return ASN1_d2i_fp(RSA_new, d2i_RSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_RSAPublicKey_fp  (binary VA: 0x19e4780)
// Original: i2d_RSAPublicKey_fp
// ----------------------------------------------------------------------------
int i2d_RSAPublicKey_fp(int a1, int a2)
{
  return ASN1_item_i2d_fp(&RSAPublicKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_RSA_PUBKEY_fp  (binary VA: 0x19e47c0)
// Original: i2d_RSA_PUBKEY_fp
// ----------------------------------------------------------------------------
int i2d_RSA_PUBKEY_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_RSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_RSAPrivateKey_bio  (binary VA: 0x19e4800)
// Original: d2i_RSAPrivateKey_bio
// ----------------------------------------------------------------------------
int d2i_RSAPrivateKey_bio(int a1, int a2)
{
  return ASN1_item_d2i_bio(&RSAPrivateKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_RSAPrivateKey_bio  (binary VA: 0x19e4840)
// Original: i2d_RSAPrivateKey_bio
// ----------------------------------------------------------------------------
int i2d_RSAPrivateKey_bio(int a1, int a2)
{
  return ASN1_item_i2d_bio(&RSAPrivateKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_RSAPublicKey_bio  (binary VA: 0x19e4880)
// Original: d2i_RSAPublicKey_bio
// ----------------------------------------------------------------------------
int d2i_RSAPublicKey_bio(int a1, int a2)
{
  return ASN1_item_d2i_bio(&RSAPublicKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_RSA_PUBKEY_bio  (binary VA: 0x19e48c0)
// Original: d2i_RSA_PUBKEY_bio
// ----------------------------------------------------------------------------
int d2i_RSA_PUBKEY_bio(int a1, int a2)
{
  return ASN1_d2i_bio(RSA_new, d2i_RSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_RSAPublicKey_bio  (binary VA: 0x19e4900)
// Original: i2d_RSAPublicKey_bio
// ----------------------------------------------------------------------------
int i2d_RSAPublicKey_bio(int a1, int a2)
{
  return ASN1_item_i2d_bio(&RSAPublicKey_it, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_RSA_PUBKEY_bio  (binary VA: 0x19e4940)
// Original: i2d_RSA_PUBKEY_bio
// ----------------------------------------------------------------------------
int i2d_RSA_PUBKEY_bio(int a1, int a2)
{
  return ASN1_i2d_bio(i2d_RSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_DSAPrivateKey_fp  (binary VA: 0x19e4980)
// Original: d2i_DSAPrivateKey_fp
// ----------------------------------------------------------------------------
int d2i_DSAPrivateKey_fp(int a1, int a2)
{
  return ASN1_d2i_fp(DSA_new, (int (*)(int *, char **, int))d2i_DSAPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_DSAPrivateKey_fp  (binary VA: 0x19e49c0)
// Original: i2d_DSAPrivateKey_fp
// ----------------------------------------------------------------------------
int i2d_DSAPrivateKey_fp(int a1, int a2)
{
  return ASN1_i2d_fp((int (*)(int, void **))i2d_DSAPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_DSA_PUBKEY_fp  (binary VA: 0x19e4a00)
// Original: d2i_DSA_PUBKEY_fp
// ----------------------------------------------------------------------------
int d2i_DSA_PUBKEY_fp(int a1, int a2)
{
  return ASN1_d2i_fp(DSA_new, d2i_DSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_DSA_PUBKEY_fp  (binary VA: 0x19e4a40)
// Original: i2d_DSA_PUBKEY_fp
// ----------------------------------------------------------------------------
int i2d_DSA_PUBKEY_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_DSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_DSAPrivateKey_bio  (binary VA: 0x19e4a80)
// Original: d2i_DSAPrivateKey_bio
// ----------------------------------------------------------------------------
int d2i_DSAPrivateKey_bio(int a1, int a2)
{
  return ASN1_d2i_bio(DSA_new, (int (*)(int *, char **, int))d2i_DSAPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_DSAPrivateKey_bio  (binary VA: 0x19e4ac0)
// Original: i2d_DSAPrivateKey_bio
// ----------------------------------------------------------------------------
int i2d_DSAPrivateKey_bio(int a1, int a2)
{
  return ASN1_i2d_bio((int (*)(int, void **))i2d_DSAPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_DSA_PUBKEY_bio  (binary VA: 0x19e4b00)
// Original: d2i_DSA_PUBKEY_bio
// ----------------------------------------------------------------------------
int d2i_DSA_PUBKEY_bio(int a1, int a2)
{
  return ASN1_d2i_bio(DSA_new, d2i_DSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_DSA_PUBKEY_bio  (binary VA: 0x19e4b40)
// Original: i2d_DSA_PUBKEY_bio
// ----------------------------------------------------------------------------
int i2d_DSA_PUBKEY_bio(int a1, int a2)
{
  return ASN1_i2d_bio(i2d_DSA_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_EC_PUBKEY_fp  (binary VA: 0x19e4b80)
// Original: d2i_EC_PUBKEY_fp
// ----------------------------------------------------------------------------
int d2i_EC_PUBKEY_fp(int a1, int a2)
{
  return ASN1_d2i_fp(EC_KEY_new, d2i_EC_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_EC_PUBKEY_fp  (binary VA: 0x19e4bc0)
// Original: i2d_EC_PUBKEY_fp
// ----------------------------------------------------------------------------
int i2d_EC_PUBKEY_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_EC_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_ECPrivateKey_fp  (binary VA: 0x19e4c00)
// Original: d2i_ECPrivateKey_fp
// ----------------------------------------------------------------------------
int d2i_ECPrivateKey_fp(int a1, int a2)
{
  return ASN1_d2i_fp(EC_KEY_new, (uint32_t *(*)(int *, char **, int))d2i_ECPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_ECPrivateKey_fp  (binary VA: 0x19e4c40)
// Original: i2d_ECPrivateKey_fp
// ----------------------------------------------------------------------------
int i2d_ECPrivateKey_fp(int a1, int a2)
{
  return ASN1_i2d_fp((int (*)(int *, void **))i2d_ECPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_EC_PUBKEY_bio  (binary VA: 0x19e4c80)
// Original: d2i_EC_PUBKEY_bio
// ----------------------------------------------------------------------------
int d2i_EC_PUBKEY_bio(int a1, int a2)
{
  return ASN1_d2i_bio(EC_KEY_new, d2i_EC_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_EC_PUBKEY_bio  (binary VA: 0x19e4cc0)
// Original: i2d_EC_PUBKEY_bio
// ----------------------------------------------------------------------------
int i2d_EC_PUBKEY_bio(int a1, int a2)
{
  return ASN1_i2d_bio(i2d_EC_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_ECPrivateKey_bio  (binary VA: 0x19e4d00)
// Original: d2i_ECPrivateKey_bio
// ----------------------------------------------------------------------------
int d2i_ECPrivateKey_bio(int a1, int a2)
{
  return ASN1_d2i_bio(EC_KEY_new, (uint32_t *(*)(int *, char **, int))d2i_ECPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_ECPrivateKey_bio  (binary VA: 0x19e4d40)
// Original: i2d_ECPrivateKey_bio
// ----------------------------------------------------------------------------
int i2d_ECPrivateKey_bio(int a1, int a2)
{
  return ASN1_i2d_bio((int (*)(int *, void **))i2d_ECPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_pubkey_digest  (binary VA: 0x19e4d80)
// Original: X509_pubkey_digest
// ----------------------------------------------------------------------------
bool X509_pubkey_digest(int a1, uint32_t *a2, int a3, uint32_t *a4)
{
  int *v4;
  bool result;

  v4 = (int *)X509_get0_pubkey_bitstr(a1);
  result = false;
  if ( v4 != nullptr )
    return EVP_Digest(v4[2], *v4, a3, a4, a2, nullptr);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_digest  (binary VA: 0x19e4de0)
// Original: X509_digest
// ----------------------------------------------------------------------------
int X509_digest(int a1, int a2, int a3, int a4)
{
  return ASN1_item_digest(X509_it, a2, a1, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509_CRL_digest  (binary VA: 0x19e4e30)
// Original: X509_CRL_digest
// ----------------------------------------------------------------------------
int X509_CRL_digest(int a1, int a2, int a3, int a4)
{
  return ASN1_item_digest(&X509_CRL_it, a2, a1, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_digest  (binary VA: 0x19e4e80)
// Original: X509_REQ_digest
// ----------------------------------------------------------------------------
int X509_REQ_digest(int a1, int a2, int a3, int a4)
{
  return ASN1_item_digest(&X509_REQ_it, a2, a1, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_digest  (binary VA: 0x19e4ed0)
// Original: X509_NAME_digest
// ----------------------------------------------------------------------------
int X509_NAME_digest(int a1, int a2, int a3, int a4)
{
  return ASN1_item_digest(X509_NAME_it, a2, a1, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: PKCS7_ISSUER_AND_SERIAL_digest  (binary VA: 0x19e4f20)
// Original: PKCS7_ISSUER_AND_SERIAL_digest
// ----------------------------------------------------------------------------
int PKCS7_ISSUER_AND_SERIAL_digest(int a1, int a2, int a3, int a4)
{
  return ASN1_item_digest(PKCS7_ISSUER_AND_SERIAL_it, a2, a1, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8_fp  (binary VA: 0x19e4f70)
// Original: d2i_PKCS8_fp
// ----------------------------------------------------------------------------
int d2i_PKCS8_fp(int a1, int a2)
{
  return ASN1_d2i_fp(X509_SIG_new, (int (*)(int *, char **, int))d2i_X509_SIG, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8_fp  (binary VA: 0x19e4fb0)
// Original: i2d_PKCS8_fp
// ----------------------------------------------------------------------------
int i2d_PKCS8_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_X509_SIG, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8_bio  (binary VA: 0x19e4ff0)
// Original: d2i_PKCS8_bio
// ----------------------------------------------------------------------------
int d2i_PKCS8_bio(int a1, int a2)
{
  return ASN1_d2i_bio(X509_SIG_new, (int (*)(int *, char **, int))d2i_X509_SIG, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8_bio  (binary VA: 0x19e5030)
// Original: i2d_PKCS8_bio
// ----------------------------------------------------------------------------
int i2d_PKCS8_bio(int a1, int a2)
{
  return ASN1_i2d_bio((int (*)(int, void **))i2d_X509_SIG, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8_PRIV_KEY_INFO_fp  (binary VA: 0x19e5070)
// Original: d2i_PKCS8_PRIV_KEY_INFO_fp
// ----------------------------------------------------------------------------
int d2i_PKCS8_PRIV_KEY_INFO_fp(int a1, int a2)
{
  return ASN1_d2i_fp(PKCS8_PRIV_KEY_INFO_new, (int (*)(int, int, int))d2i_PKCS8_PRIV_KEY_INFO, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8_PRIV_KEY_INFO_fp  (binary VA: 0x19e50b0)
// Original: i2d_PKCS8_PRIV_KEY_INFO_fp
// ----------------------------------------------------------------------------
int i2d_PKCS8_PRIV_KEY_INFO_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_PKCS8_PRIV_KEY_INFO, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8PrivateKeyInfo_fp  (binary VA: 0x19e50f0)
// Original: i2d_PKCS8PrivateKeyInfo_fp
// ----------------------------------------------------------------------------
int i2d_PKCS8PrivateKeyInfo_fp(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  char v4; // si

  v2 = 0;
  v3 = EVP_PKEY2PKCS8(a2);
  v4 = (char)(uintptr_t)(v3);
  if ( v3 != nullptr )
  {
    v2 = i2d_PKCS8_PRIV_KEY_INFO_fp(a1, (int)(uintptr_t)(v3));
    PKCS8_PRIV_KEY_INFO_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: i2d_PrivateKey_fp  (binary VA: 0x19e5150)
// Original: i2d_PrivateKey_fp
// ----------------------------------------------------------------------------
int i2d_PrivateKey_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_PrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PrivateKey_fp  (binary VA: 0x19e5190)
// Original: d2i_PrivateKey_fp
// ----------------------------------------------------------------------------
int d2i_PrivateKey_fp(int a1, int a2)
{
  return ASN1_d2i_fp(EVP_PKEY_new, d2i_AutoPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PUBKEY_fp  (binary VA: 0x19e51d0)
// Original: i2d_PUBKEY_fp
// ----------------------------------------------------------------------------
int i2d_PUBKEY_fp(int a1, int a2)
{
  return ASN1_i2d_fp(i2d_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PUBKEY_fp  (binary VA: 0x19e5210)
// Original: d2i_PUBKEY_fp
// ----------------------------------------------------------------------------
int d2i_PUBKEY_fp(int a1, int a2)
{
  return ASN1_d2i_fp(EVP_PKEY_new, d2i_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PKCS8_PRIV_KEY_INFO_bio  (binary VA: 0x19e5250)
// Original: d2i_PKCS8_PRIV_KEY_INFO_bio
// ----------------------------------------------------------------------------
int d2i_PKCS8_PRIV_KEY_INFO_bio(int a1, int a2)
{
  return ASN1_d2i_bio(PKCS8_PRIV_KEY_INFO_new, (int (*)(int, int, int))d2i_PKCS8_PRIV_KEY_INFO, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8_PRIV_KEY_INFO_bio  (binary VA: 0x19e5290)
// Original: i2d_PKCS8_PRIV_KEY_INFO_bio
// ----------------------------------------------------------------------------
int i2d_PKCS8_PRIV_KEY_INFO_bio(int a1, int a2)
{
  return ASN1_i2d_bio(i2d_PKCS8_PRIV_KEY_INFO, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PKCS8PrivateKeyInfo_bio  (binary VA: 0x19e52d0)
// Original: i2d_PKCS8PrivateKeyInfo_bio
// ----------------------------------------------------------------------------
int i2d_PKCS8PrivateKeyInfo_bio(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  char v4; // si

  v2 = 0;
  v3 = EVP_PKEY2PKCS8(a2);
  v4 = (char)(uintptr_t)(v3);
  if ( v3 != nullptr )
  {
    v2 = i2d_PKCS8_PRIV_KEY_INFO_bio(a1, (int)(uintptr_t)(v3));
    PKCS8_PRIV_KEY_INFO_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: i2d_PrivateKey_bio  (binary VA: 0x19e5330)
// Original: i2d_PrivateKey_bio
// ----------------------------------------------------------------------------
int i2d_PrivateKey_bio(int a1, int a2)
{
  return ASN1_i2d_bio(i2d_PrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PrivateKey_bio  (binary VA: 0x19e5370)
// Original: d2i_PrivateKey_bio
// ----------------------------------------------------------------------------
int d2i_PrivateKey_bio(int a1, int a2)
{
  return ASN1_d2i_bio(EVP_PKEY_new, d2i_AutoPrivateKey, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: i2d_PUBKEY_bio  (binary VA: 0x19e53b0)
// Original: i2d_PUBKEY_bio
// ----------------------------------------------------------------------------
int i2d_PUBKEY_bio(int a1, int a2)
{
  return ASN1_i2d_bio(i2d_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_PUBKEY_bio  (binary VA: 0x19e53f0)
// Original: d2i_PUBKEY_bio
// ----------------------------------------------------------------------------
int d2i_PUBKEY_bio(int a1, int a2)
{
  return ASN1_d2i_bio(EVP_PKEY_new, d2i_PUBKEY, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_policy_tree_free  (binary VA: 0x19e5d70)
// Original: X509_policy_tree_free
// ----------------------------------------------------------------------------
int X509_policy_tree_free(void ***a1)
{
  void **v1;
  int v2;
  int result;

  if ( a1 != nullptr )
  {
    sk_free(a1[3]);
    sk_pop_free(a1[4], (void (*)(uint32_t))sub_19E5C80);
    v1 = *a1;
    if ( (int)(uintptr_t)(a1[1]) > 0 )
    {
      v2 = 0;
      do
      {
        if ( *v1 != nullptr )
          X509_free((char)(uintptr_t)(*v1));
        if ( v1[1] != nullptr )
          sk_pop_free((void **)v1[1], (void (*)(uint32_t))policy_node_free);
        if ( v1[2] != nullptr )
          policy_node_free(v1[2]);
        ++v2;
        v1 += 4;
      }
      while ( (int)(uintptr_t)(a1[1]) > v2 );
    }
    if ( a1[2] != nullptr )
      sk_pop_free(a1[2], (void (*)(uint32_t))policy_data_free);
    CRYPTO_free(*a1);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_policy_check  (binary VA: 0x19e5e40)
// Original: X509_policy_check
// ----------------------------------------------------------------------------
int X509_policy_check(int **a1, uint32_t *a2, int *a3, int *a4, int16_t a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v15;
  uint8_t *s;
  int v17;
  char **v18;
  uint32_t *v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int *v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  int *v39;
  int *v40;
  int *v41;
  int v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int *v46;
  int v47;
  int j;
  int v49;
  uint8_t **v50;
  int v51;
  uint32_t *v52;
  int v53;
  int v54;
  int *v55;
  int sk;
  uint32_t *v57;
  int v58;
  int *v59;
  int v60;
  typedef int _g4_t_c;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef void *_g4_t_v70;
  typedef int *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef int *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_i;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int *_g4_t_v87;
  typedef void *_g4_t_v88[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_c)) > _g4_s0 ? (4u + sizeof(_g4_t_c)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v62)) > _g4_s1 ? (32u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v63)) > _g4_s2 ? (32u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v64)) > _g4_s3 ? (32u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v65)) > _g4_s4 ? (36u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v66)) > _g4_s5 ? (40u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v67)) > _g4_s6 ? (40u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v68)) > _g4_s7 ? (40u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v69)) > _g4_s8 ? (40u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v70)) > _g4_s9 ? (40u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v71)) > _g4_s10 ? (44u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v72)) > _g4_s11 ? (44u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v73)) > _g4_s12 ? (44u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v74)) > _g4_s13 ? (44u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v75)) > _g4_s14 ? (48u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v76)) > _g4_s15 ? (48u + sizeof(_g4_t_v76)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v77)) > _g4_s16 ? (48u + sizeof(_g4_t_v77)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v78)) > _g4_s17 ? (52u + sizeof(_g4_t_v78)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v79)) > _g4_s18 ? (52u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v80)) > _g4_s19 ? (52u + sizeof(_g4_t_v80)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v81)) > _g4_s20 ? (56u + sizeof(_g4_t_v81)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_i)) > _g4_s21 ? (56u + sizeof(_g4_t_i)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v83)) > _g4_s22 ? (60u + sizeof(_g4_t_v83)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v84)) > _g4_s23 ? (60u + sizeof(_g4_t_v84)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v85)) > _g4_s24 ? (64u + sizeof(_g4_t_v85)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v86)) > _g4_s25 ? (72u + sizeof(_g4_t_v86)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v87)) > _g4_s26 ? (76u + sizeof(_g4_t_v87)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v88)) > _g4_s27 ? (92u + sizeof(_g4_t_v88)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_c &c = *reinterpret_cast<_g4_t_c *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 72u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);

  v88[0] = nullptr;
  *a1 = nullptr;
  *a2 = 0;
  v75 = sk_num((int)(uintptr_t)(a3));
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( (a5 & 0x100) == 0 )
    v6 = v75 + 1;
  if ( (a5 & 0x200) == 0 )
    v7 = v75 + 1;
  v81 = v7;
  if ( (a5 & 0x400) == 0 )
    v5 = v75 + 1;
  v83 = v5;
  if ( v75 == 1 )
    return 1;
  v78 = v75 - 2;
  if ( v75 - 2 >= 0 )
  {
    v8 = v75 - 2;
    v66 = 1;
    do
    {
      v10 = sk_value(a3, v8);
      X509_check_purpose(v10, -1, -1);
      v11 = policy_cache_set(v10);
      if ( v11 == 0 )
        return 0;
      if ( (*(uint32_t *)(v10 + 40) & 0x800) != 0 )
      {
        v66 = -1;
      }
      else if ( v66 == 1 )
      {
        v12 = 2;
        if ( *(uint32_t *)(v11 + 4) != 0 )
          v12 = 1;
        v66 = v12;
      }
      if ( v6 > 0 )
      {
        v9 = *(uint32_t *)(v11 + 12);
        v6 = (__PAIR64__(v6, *(uint32_t *)(v10 + 40) & 0x20) - 1) >> 32;
        if ( v9 != -1 && v6 > v9 )
          v6 = v9;
      }
      --v8;
    }
    while ( v8 != -1 );
    if ( v66 != 1 )
    {
      if ( v6 != 0 || v66 != 2 )
      {
        v13 = 1;
        if ( v66 == 2 )
          return v13;
        return -(v66 != 0);
      }
      else
      {
        *a2 = 1;
        return -2;
      }
    }
  }
  v13 = 0;
  v15 = (int *)CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0);
  v85 = v15;
  if ( v15 == nullptr )
    return v13;
  v15[5] = 0;
  s = CRYPTO_malloc(16 * v75, (int)(uintptr_t)(&unk_1B15112), 0);
  *v85 = (int)(uintptr_t)(s);
  v85[1] = 0;
  v85[2] = 0;
  v85[3] = 0;
  v85[4] = 0;
  if ( s == nullptr )
  {
    CRYPTO_free(v85);
    return v13;
  }
  memset(s, 0, 16 * v75);
  v85[1] = v75;
  v17 = *v85;
  v18 = OBJ_nid2obj(0x2EAu);
  v19 = policy_data_new(nullptr, (int)(uintptr_t)(v18), 0);
  if ( v19 == nullptr || level_add_node(v17, v19, 0, v85) == 0 )
    goto LABEL_73;
  if ( v78 < 0 )
    goto LABEL_77;
  v20 = (int *)(v17 + 16);
  v21 = v6;
  v22 = v83;
  do
  {
    v62 = v21;
    v65 = v22;
    v23 = sk_value(a3, v78);
    v24 = (uint32_t *)policy_cache_set(v23);
    CRYPTO_add_lock((uint32_t *)(v23 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    *v20 = v23;
    v21 = v62;
    v22 = v65;
    if ( *v24 == 0 )
      v20[3] |= 0x200u;
    if ( v81 == 0 )
    {
      if ( v78 == 0 || (*(uint8_t *)(v23 + 40) & 0x20) == 0 )
        v20[3] |= 0x200u;
LABEL_41:
      if ( v65 == 0 )
        goto LABEL_42;
      goto LABEL_51;
    }
    v25 = v24[2];
    v81 = (__PAIR64__(v81, *(uint32_t *)(v23 + 40) & 0x20) - 1) >> 32;
    if ( v25 < 0 )
      goto LABEL_41;
    if ( v25 >= v81 )
      v25 = v81;
    v81 = v25;
    if ( v65 == 0 )
    {
LABEL_42:
      v20[3] |= 0x400u;
      goto LABEL_43;
    }
LABEL_51:
    v26 = v24[4];
    v22 = (__PAIR64__(v65, *(uint32_t *)(v23 + 40) & 0x20) - 1) >> 32;
    if ( v26 >= 0 && v26 < v22 )
      v22 = v24[4];
LABEL_43:
    --v78;
    v20 += 4;
  }
  while ( v78 != -1 );
  v6 = v62;
LABEL_77:
  if ( v6 != 0 )
  {
    if ( v85 != nullptr )
      goto LABEL_79;
    return 1;
  }
  *a2 = 1;
LABEL_79:
  v87 = (int *)*v85;
  v28 = v85[1];
  if ( v28 > 1 )
  {
    v27 = (uint32_t *)(v87 + 2);
    v79 = v87 + 4;
    v86 = 1;
    do
    {
      v84 = policy_cache_set(*v79);
      for ( i = 0; i < sk_num(*(uint32_t *)(v84 + 4)); ++i )
      {
        v35 = 0;
        v68 = sk_value(*(int **)(v84 + 4), i);
        v76 = 0;
        while ( v35 < sk_num(*(v27 - 1)) )
        {
          v36 = sk_value((int *)*(v27 - 1), v35);
          if ( policy_node_match(v79 - 4, v36, *(uint32_t *)(v68 + 4)) != 0 )
          {
            if ( level_add_node(v79, v68, v36, 0) == 0 )
              goto LABEL_73;
            v76 = 1;
          }
          ++v35;
        }
        if ( v76 == 0 && *v27 != 0 && level_add_node(v79, v68, *v27, 0) == 0 )
          goto LABEL_73;
      }
      v69 = 0;
      v37 = v79[3];
      if ( (v37 & 0x200) == 0 )
      {
        v72 = v27;
        while ( v69 < sk_num(*(v72 - 1)) )
        {
          v38 = (uint32_t *)sk_value((int *)*(v72 - 1), v69);
          if ( (*((uint8_t *)v79 - 3) & 4) == 0 && (*(uint8_t *)*v38 & 1) != 0 )
          {
            v46 = *(int **)(*v38 + 12);
            v47 = v38[2];
            if ( v47 != sk_num((int)(uintptr_t)(v46)) )
            {
              for ( j = 0; j < sk_num((int)(uintptr_t)(v46)); ++j )
              {
                v63 = sk_value(v46, j);
                if ( level_find_node(v79, v38, v63) == 0
                  && sub_19E5CB0((int)(uintptr_t)(v79), v84, v63, (uint32_t **)v38, (int)(uintptr_t)(v85)) == 0 )
                {
                  goto LABEL_73;
                }
              }
            }
          }
          else if ( v38[2] == 0 && sub_19E5CB0((int)(uintptr_t)(v79), v84, 0, (uint32_t **)v38, (int)(uintptr_t)(v85)) == 0 )
          {
            X509_policy_tree_free((void ***)v85);
            return 0;
          }
          ++v69;
        }
        v27 = v72;
        if ( *v72 != 0 && level_add_node(v79, *(uint32_t *)v84, *v72, 0) == 0 )
          goto LABEL_73;
        v37 = v79[3];
      }
      v39 = (int *)v79[1];
      if ( (v37 & 0x400) != 0 )
      {
        v49 = sk_num(v79[1]) - 1;
        if ( v49 >= 0 )
        {
          do
          {
            v50 = (uint8_t **)sk_value(v39, v49);
            if ( (**v50 & 3) != 0 )
            {
              --*((uint32_t *)v50[1] + 2);
              CRYPTO_free(v50);
              sk_delete(v39, v49);
            }
            --v49;
          }
          while ( v49 != -1 );
        }
      }
      v73 = v79;
      v40 = v79 - 3;
      v77 = v27;
      while ( 1 )
      {
        v41 = (int *)*v40;
        v42 = sk_num(*v40) - 1;
        if ( v42 >= 0 )
        {
          do
          {
            while ( 1 )
            {
              v43 = (uint32_t *)sk_value(v41, v42);
              if ( v43[2] == 0 )
                break;
              if ( --v42 == -1 )
                goto LABEL_112;
            }
            --*(uint32_t *)(v43[1] + 8);
            CRYPTO_free(v43);
            c = v42--;
            sk_delete(v41, c);
          }
          while ( v42 != -1 );
        }
LABEL_112:
        v44 = (uint32_t *)v40[1];
        if ( v44 != nullptr && v44[2] == 0 )
        {
          v45 = v44[1];
          if ( v45 != 0 )
          {
            --*(uint32_t *)(v45 + 8);
            v44 = (uint32_t *)v40[1];
          }
          CRYPTO_free(v44);
          v40[1] = 0;
        }
        v40 -= 4;
        if ( v73 - 4 == (int *)*v85 )
          break;
        v73 -= 4;
      }
      if ( *(v73 - 2) == 0 )
      {
        X509_policy_tree_free((void ***)v85);
        return *a2 == 0 ? 1 : -2;
      }
      ++v86;
      v79 += 4;
      v27 = v77 + 4;
      v28 = v85[1];
    }
    while ( v86 < v28 );
    v87 = v73 - 4;
  }
  v29 = v87[4 * v28 - 2];
  if ( v29 != 0 )
  {
    v30 = v85[3];
    if ( v30 == 0 )
    {
      v59 = (int *)policy_node_cmp_new();
      v85[3] = (int)(uintptr_t)(v59);
      if ( v59 != nullptr )
        goto LABEL_155;
      goto LABEL_73;
    }
    if ( sk_find(v30, v29) == -1 )
    {
      v59 = (int *)v85[3];
LABEL_155:
      if ( sk_push(v59, v29) == 0 )
      {
LABEL_73:
        X509_policy_tree_free((void ***)v85);
        return 0;
      }
    }
    v71 = (int *)v88;
    v87 = (int *)*v85;
    v28 = v85[1];
  }
  else
  {
    v71 = v85 + 3;
  }
  if ( v28 <= 1 )
    goto LABEL_134;
  v67 = v87[2];
  if ( v67 == 0 )
    goto LABEL_134;
  v80 = 1;
  v31 = v87 + 6;
  while ( 2 )
  {
    v32 = 0;
    while ( 2 )
    {
      if ( v32 < sk_num(*(v31 - 1)) )
      {
        v33 = sk_value((int *)*(v31 - 1), v32);
        if ( v67 == *(uint32_t *)(v33 + 4) )
        {
          if ( *v71 != 0 )
          {
            if ( sk_find(*v71, v33) == -1 )
            {
              v34 = (int *)*v71;
              goto LABEL_72;
            }
          }
          else
          {
            v34 = (int *)policy_node_cmp_new();
            *v71 = (int)(uintptr_t)(v34);
            if ( v34 == nullptr )
              goto LABEL_73;
LABEL_72:
            if ( sk_push(v34, v33) == 0 )
              goto LABEL_73;
          }
        }
        ++v32;
        continue;
      }
      break;
    }
    if ( ++v80 < v85[1] )
    {
      v31 += 4;
      v67 = *(v31 - 4);
      if ( v67 != 0 )
        continue;
    }
    break;
  }
LABEL_134:
  if ( v71 == (int *)v88 )
  {
    v74 = 2;
    v70 = v88[0];
  }
  else
  {
    v74 = 1;
    v70 = (void *)v85[3];
    v88[0] = v70;
  }
  if ( sk_num((int)(uintptr_t)(a4)) > 0 )
  {
    v51 = 0;
    v52 = *(uint32_t **)(*v85 + 16 * (v85[1] - 1) + 8);
    while ( v51 < sk_num((int)(uintptr_t)(a4)) )
    {
      v53 = sk_value(a4, v51);
      if ( OBJ_obj2nid(v53) == 746 )
      {
        v85[5] |= 2u;
        goto LABEL_161;
      }
      ++v51;
    }
    v54 = 0;
    while ( v54 < sk_num((int)(uintptr_t)(a4)) )
    {
      v64 = sk_value(a4, v54);
      sk = tree_find_sk(v70, v64);
      if ( sk != 0 )
      {
        v55 = (int *)v85[4];
        if ( v55 == nullptr )
        {
LABEL_150:
          v55 = (int *)(sk_new_null());
          v85[4] = (int)(uintptr_t)(v55);
          if ( v55 == nullptr )
            break;
        }
LABEL_143:
        if ( sk_push(v55, sk) == 0 )
          goto LABEL_73;
      }
      else if ( v52 != nullptr )
      {
        v57 = policy_data_new(nullptr, v64, *(uint32_t *)*v52 & 0x10);
        if ( v57 == nullptr )
          goto LABEL_73;
        v58 = *(uint32_t *)(*v52 + 8);
        *v57 = 12;
        v57[2] = v58;
        sk = level_add_node(0, v57, v52[1], v85);
        v55 = (int *)v85[4];
        if ( v55 == nullptr )
          goto LABEL_150;
        goto LABEL_143;
      }
      ++v54;
      continue;
    }
  }
LABEL_161:
  if ( v74 == 2 )
    sk_free((void **)v88[0]);
  v13 = 1;
  *a1 = v85;
  if ( *a2 != 0 )
  {
    v60 = X509_policy_tree_get0_user_policies(v85);
    return 3 * (sk_num(v60) > 0) - 2;
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: d2i_AUTHORITY_KEYID  (binary VA: 0x19e6a00)
// Original: d2i_AUTHORITY_KEYID
// ----------------------------------------------------------------------------
int d2i_AUTHORITY_KEYID(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&AUTHORITY_KEYID_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_AUTHORITY_KEYID  (binary VA: 0x19e6a40)
// Original: i2d_AUTHORITY_KEYID
// ----------------------------------------------------------------------------
int i2d_AUTHORITY_KEYID(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&AUTHORITY_KEYID_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_CERTIFICATEPOLICIES  (binary VA: 0x19e6e80)
// Original: d2i_CERTIFICATEPOLICIES
// ----------------------------------------------------------------------------
int d2i_CERTIFICATEPOLICIES(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&CERTIFICATEPOLICIES_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_CERTIFICATEPOLICIES  (binary VA: 0x19e6ec0)
// Original: i2d_CERTIFICATEPOLICIES
// ----------------------------------------------------------------------------
int i2d_CERTIFICATEPOLICIES(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&CERTIFICATEPOLICIES_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_POLICYINFO  (binary VA: 0x19e6f60)
// Original: d2i_POLICYINFO
// ----------------------------------------------------------------------------
int d2i_POLICYINFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)POLICYINFO_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_POLICYINFO  (binary VA: 0x19e6fa0)
// Original: i2d_POLICYINFO
// ----------------------------------------------------------------------------
int i2d_POLICYINFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)POLICYINFO_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_POLICYQUALINFO  (binary VA: 0x19e7010)
// Original: d2i_POLICYQUALINFO
// ----------------------------------------------------------------------------
int d2i_POLICYQUALINFO(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&POLICYQUALINFO_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_POLICYQUALINFO  (binary VA: 0x19e7050)
// Original: i2d_POLICYQUALINFO
// ----------------------------------------------------------------------------
int i2d_POLICYQUALINFO(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&POLICYQUALINFO_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_USERNOTICE  (binary VA: 0x19e70f0)
// Original: d2i_USERNOTICE
// ----------------------------------------------------------------------------
int d2i_USERNOTICE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&USERNOTICE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_USERNOTICE  (binary VA: 0x19e7130)
// Original: i2d_USERNOTICE
// ----------------------------------------------------------------------------
int i2d_USERNOTICE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&USERNOTICE_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_NOTICEREF  (binary VA: 0x19e71d0)
// Original: d2i_NOTICEREF
// ----------------------------------------------------------------------------
int d2i_NOTICEREF(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&NOTICEREF_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_NOTICEREF  (binary VA: 0x19e7210)
// Original: i2d_NOTICEREF
// ----------------------------------------------------------------------------
int i2d_NOTICEREF(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&NOTICEREF_it));
}

// ----------------------------------------------------------------------------
// Function: X509_POLICY_NODE_print  (binary VA: 0x19e7cd0)
// Original: X509_POLICY_NODE_print
// ----------------------------------------------------------------------------
int X509_POLICY_NODE_print(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  const char *v5;
  int *v6;
  int v8;

  v4 = *a2;
  BIO_printf(a3, v3, (int)(uintptr_t)(a1), "%*sPolicy: ", a3, (const char *)&unk_1B15112);
  i2a_ASN1_OBJECT(a1, *(uint32_t *)(v4 + 4));
  BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
  v5 = "Critical";
  if ( (*(uint8_t *)v4 & 0x10) == 0 )
    v5 = "Non Critical";
  v8 = a3 + 2;
  BIO_printf(a3, v8, (int)(uintptr_t)(a1), "%*s%s\n", v8, &unk_1B15112, v5);
  v6 = *(int **)(v4 + 8);
  if ( v6 != nullptr )
    return sub_19E6AE0(a1, v6, v8);
  else
    return BIO_printf(0, v8, (int)(uintptr_t)(a1), "%*sNo Qualifiers\n", v8, &unk_1B15112);
}

// ----------------------------------------------------------------------------
// Function: d2i_DIST_POINT_NAME  (binary VA: 0x19e8570)
// Original: d2i_DIST_POINT_NAME
// ----------------------------------------------------------------------------
int d2i_DIST_POINT_NAME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&DIST_POINT_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_DIST_POINT_NAME  (binary VA: 0x19e85b0)
// Original: i2d_DIST_POINT_NAME
// ----------------------------------------------------------------------------
int i2d_DIST_POINT_NAME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&DIST_POINT_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_DIST_POINT  (binary VA: 0x19e88c0)
// Original: d2i_DIST_POINT
// ----------------------------------------------------------------------------
int d2i_DIST_POINT(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)DIST_POINT_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_DIST_POINT  (binary VA: 0x19e8900)
// Original: i2d_DIST_POINT
// ----------------------------------------------------------------------------
int i2d_DIST_POINT(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)DIST_POINT_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_CRL_DIST_POINTS  (binary VA: 0x19e8c70)
// Original: d2i_CRL_DIST_POINTS
// ----------------------------------------------------------------------------
int d2i_CRL_DIST_POINTS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&CRL_DIST_POINTS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_CRL_DIST_POINTS  (binary VA: 0x19e8cb0)
// Original: i2d_CRL_DIST_POINTS
// ----------------------------------------------------------------------------
int i2d_CRL_DIST_POINTS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&CRL_DIST_POINTS_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_ISSUING_DIST_POINT  (binary VA: 0x19e8d50)
// Original: d2i_ISSUING_DIST_POINT
// ----------------------------------------------------------------------------
int d2i_ISSUING_DIST_POINT(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ISSUING_DIST_POINT_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ISSUING_DIST_POINT  (binary VA: 0x19e8d90)
// Original: i2d_ISSUING_DIST_POINT
// ----------------------------------------------------------------------------
int i2d_ISSUING_DIST_POINT(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ISSUING_DIST_POINT_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_GENERAL_NAME  (binary VA: 0x19e9160)
// Original: i2d_GENERAL_NAME
// ----------------------------------------------------------------------------
int i2d_GENERAL_NAME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&GENERAL_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_GENERAL_NAME  (binary VA: 0x19e91a0)
// Original: d2i_GENERAL_NAME
// ----------------------------------------------------------------------------
int d2i_GENERAL_NAME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&GENERAL_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_OTHERNAME  (binary VA: 0x19e91e0)
// Original: d2i_OTHERNAME
// ----------------------------------------------------------------------------
int d2i_OTHERNAME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&OTHERNAME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_OTHERNAME  (binary VA: 0x19e9220)
// Original: i2d_OTHERNAME
// ----------------------------------------------------------------------------
int i2d_OTHERNAME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&OTHERNAME_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_EDIPARTYNAME  (binary VA: 0x19e92c0)
// Original: d2i_EDIPARTYNAME
// ----------------------------------------------------------------------------
int d2i_EDIPARTYNAME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&EDIPARTYNAME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_EDIPARTYNAME  (binary VA: 0x19e9300)
// Original: i2d_EDIPARTYNAME
// ----------------------------------------------------------------------------
int i2d_EDIPARTYNAME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&EDIPARTYNAME_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_GENERAL_NAMES  (binary VA: 0x19e9400)
// Original: d2i_GENERAL_NAMES
// ----------------------------------------------------------------------------
int d2i_GENERAL_NAMES(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&GENERAL_NAMES_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_GENERAL_NAMES  (binary VA: 0x19e9440)
// Original: i2d_GENERAL_NAMES
// ----------------------------------------------------------------------------
int i2d_GENERAL_NAMES(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&GENERAL_NAMES_it));
}

// ----------------------------------------------------------------------------
// Function: d2i_ACCESS_DESCRIPTION  (binary VA: 0x19e9a00)
// Original: d2i_ACCESS_DESCRIPTION
// ----------------------------------------------------------------------------
int d2i_ACCESS_DESCRIPTION(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)ACCESS_DESCRIPTION_it);
}

// ----------------------------------------------------------------------------
// Function: i2d_ACCESS_DESCRIPTION  (binary VA: 0x19e9a40)
// Original: i2d_ACCESS_DESCRIPTION
// ----------------------------------------------------------------------------
int i2d_ACCESS_DESCRIPTION(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)ACCESS_DESCRIPTION_it);
}

// ----------------------------------------------------------------------------
// Function: d2i_AUTHORITY_INFO_ACCESS  (binary VA: 0x19e9d60)
// Original: d2i_AUTHORITY_INFO_ACCESS
// ----------------------------------------------------------------------------
int d2i_AUTHORITY_INFO_ACCESS(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&AUTHORITY_INFO_ACCESS_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_AUTHORITY_INFO_ACCESS  (binary VA: 0x19e9da0)
// Original: i2d_AUTHORITY_INFO_ACCESS
// ----------------------------------------------------------------------------
int i2d_AUTHORITY_INFO_ACCESS(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&AUTHORITY_INFO_ACCESS_it));
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get_count  (binary VA: 0x19eb350)
// Original: X509_PURPOSE_get_count
// ----------------------------------------------------------------------------
int X509_PURPOSE_get_count()
{
  int result;

  result = 9;
  if ( dword_2141E24 != 0 )
    return sk_num(dword_2141E24) + 9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get0  (binary VA: 0x19eb380)
// Original: X509_PURPOSE_get0
// ----------------------------------------------------------------------------
char * X509_PURPOSE_get0(int a1)
{
  char *result;

  result = nullptr;
  if ( a1 >= 0 )
  {
    if ( a1 > 8 )
      return (char *)sk_value((int *)dword_2141E24, a1 - 9);
    else
      return (char *)&unk_20CD160 + 28 * a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get_by_sname  (binary VA: 0x19eb3d0)
// Original: X509_PURPOSE_get_by_sname
// ----------------------------------------------------------------------------
int X509_PURPOSE_get_by_sname(char *s2)
{
  int i;
  char *v2;

  for ( i = 0; i < X509_PURPOSE_get_count(); ++i )
  {
    v2 = X509_PURPOSE_get0(i);
    if ( strcmp(*((const char **)v2 + 5), s2) == 0 )
      return i;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get_by_id  (binary VA: 0x19eb430)
// Original: X509_PURPOSE_get_by_id
// ----------------------------------------------------------------------------
int X509_PURPOSE_get_by_id(int a1)
{
  int result;
  int v2;
  uint32_t v3[10];

  result = a1 - 1;
  if ( (unsigned int)(a1 - 1) > 8 )
  {
    v3[0] = a1;
    if ( dword_2141E24 == 0 )
      return -1;
    v2 = sk_find(dword_2141E24, (int)(uintptr_t)(v3));
    if ( v2 == -1 )
      return -1;
    else
      return v2 + 9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_set  (binary VA: 0x19eb480)
// Original: X509_PURPOSE_set
// ----------------------------------------------------------------------------
int X509_PURPOSE_set(int *a1, int a2)
{
  if ( X509_PURPOSE_get_by_id(a2) == -1 )
  {
    ERR_put_error(34, 141, 146, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    *a1 = a2;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_add  (binary VA: 0x19eb500)
// Original: X509_PURPOSE_add
// ----------------------------------------------------------------------------
int X509_PURPOSE_add(int a1, int a2, int a3, int a4, char *a5, char *a6, int a7)
{
  int v7;
  int v8;
  char *v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int result;
  int *v15;
  int v16;
  uint8_t *v17;

  v7 = X509_PURPOSE_get_by_id(a1);
  v8 = v7;
  if ( v7 == -1 )
  {
    v17 = CRYPTO_malloc(28, (int)(uintptr_t)(&unk_1B15112), 0);
    v10 = (int)(uintptr_t)(v17);
    if ( v17 == nullptr )
    {
LABEL_10:
      ERR_put_error(34, 137, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    *((uint32_t *)v17 + 2) = 1;
  }
  else
  {
    v9 = X509_PURPOSE_get0(v7);
    v10 = (int)(uintptr_t)(v9);
    if ( (v9[8] & 2) != 0 )
    {
      CRYPTO_free(*((void **)v9 + 4));
      CRYPTO_free(*(void **)(v10 + 20));
    }
  }
  *(uint32_t *)(v10 + 16) = (uint32_t)(uintptr_t)(BUF_strdup(a5));
  v11 = BUF_strdup(a6);
  v12 = *(uint32_t *)(v10 + 16);
  *(uint32_t *)(v10 + 20) = (uint32_t)(uintptr_t)(v11);
  if ( v12 == 0 || v11 == nullptr )
    goto LABEL_10;
  v13 = *(uint32_t *)(v10 + 8) & 1 | 2;
  *(uint32_t *)v10 = a1;
  *(uint32_t *)(v10 + 8) = a3 & 0xFFFFFFFE | v13;
  *(uint32_t *)(v10 + 4) = a2;
  *(uint32_t *)(v10 + 12) = a4;
  *(uint32_t *)(v10 + 24) = a7;
  result = 1;
  if ( v8 == -1 )
  {
    v15 = (int *)dword_2141E24;
    if ( dword_2141E24 == 0 )
    {
      v15 = (int *)(sk_new((int)(uintptr_t)(sub_19EAEE0)));
      dword_2141E24 = (int)(uintptr_t)(v15);
      if ( v15 == nullptr )
        goto LABEL_10;
    }
    v16 = sk_push(v15, v10);
    result = 1;
    if ( v16 == 0 )
      goto LABEL_10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_cleanup  (binary VA: 0x19eb6c0)
// Original: X509_PURPOSE_cleanup
// ----------------------------------------------------------------------------
void X509_PURPOSE_cleanup()
{
  int v0;
  int v1;

  v0 = 0;
  sk_pop_free((void **)dword_2141E24, (void (*)(uint32_t))sub_19EB2F0);
  do
  {
    v1 = 28 * v0++;
    sub_19EB2F0((char *)&unk_20CD160 + v1);
  }
  while ( v0 != 9 );
  dword_2141E24 = 0;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get_id  (binary VA: 0x19eb720)
// Original: X509_PURPOSE_get_id
// ----------------------------------------------------------------------------
int X509_PURPOSE_get_id(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get0_name  (binary VA: 0x19eb730)
// Original: X509_PURPOSE_get0_name
// ----------------------------------------------------------------------------
int X509_PURPOSE_get0_name(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get0_sname  (binary VA: 0x19eb740)
// Original: X509_PURPOSE_get0_sname
// ----------------------------------------------------------------------------
int X509_PURPOSE_get0_sname(int a1)
{
  return *(uint32_t *)(a1 + 20);
}

// ----------------------------------------------------------------------------
// Function: X509_PURPOSE_get_trust  (binary VA: 0x19eb750)
// Original: X509_PURPOSE_get_trust
// ----------------------------------------------------------------------------
int X509_PURPOSE_get_trust(int a1)
{
  return *(uint32_t *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: X509_supported_extension  (binary VA: 0x19eb760)
// Original: X509_supported_extension
// ----------------------------------------------------------------------------
bool X509_supported_extension(int a1)
{
  int object;
  bool result;
  int v3[4];

  object = X509_EXTENSION_get_object(a1);
  v3[0] = OBJ_obj2nid(object);
  result = false;
  if ( v3[0] != 0 )
    return OBJ_bsearch((int)(uintptr_t)(v3), (int)(uintptr_t)(&unk_1D2BD20), 11, 4, (int (*)(int, int))sub_19EAF00) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_check_purpose  (binary VA: 0x19ebde0)
// Original: X509_check_purpose
// ----------------------------------------------------------------------------
int X509_check_purpose(int a1, int a2, int a3)
{
  int result;
  int v4;
  char *v5;

  if ( (*(uint8_t *)(a1 + 41) & 1) == 0 )
  {
    CRYPTO_lock(9, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( (*(uint8_t *)(a1 + 41) & 1) == 0 )
      sub_19EB7D0(a1);
    CRYPTO_lock(10, 3, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  result = 1;
  if ( a2 != -1 )
  {
    v4 = X509_PURPOSE_get_by_id(a2);
    result = -1;
    if ( v4 != -1 )
    {
      v5 = X509_PURPOSE_get0(v4);
      return (*((int (**)(char *, int, int))v5 + 3))(v5, a1, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509_check_ca  (binary VA: 0x19ebed0)
// Original: X509_check_ca
// ----------------------------------------------------------------------------
int X509_check_ca(int a1)
{
  if ( (*(uint8_t *)(a1 + 41) & 1) == 0 )
  {
    CRYPTO_lock(9, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( (*(uint8_t *)(a1 + 41) & 1) == 0 )
      sub_19EB7D0(a1);
    CRYPTO_lock(10, 3, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return sub_19EAF20(a1);
}

// ----------------------------------------------------------------------------
// Function: X509_check_akid  (binary VA: 0x19ebf70)
// Original: X509_check_akid
// ----------------------------------------------------------------------------
int X509_check_akid(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v5;
  int serialNumber;
  int v7;
  int *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int issuer_name;

  v2 = 0;
  if ( a2 != nullptr )
  {
    if ( *a2 == 0
      || *(uint32_t *)(a1 + 56) == 0
      || (v3 = ASN1_OCTET_STRING_cmp(*a2, *(uint32_t *)(a1 + 56)), v2 = 30, v3 == 0) )
    {
      v5 = a2[2];
      if ( v5 == 0
        || (serialNumber = X509_get_serialNumber(a1), v7 = ASN1_INTEGER_cmp(serialNumber, v5), v2 = 31, v7 == 0) )
      {
        v8 = (int *)a2[1];
        v9 = 0;
        if ( v8 != nullptr )
        {
          while ( v9 < sk_num((int)(uintptr_t)(v8)) )
          {
            v10 = (uint32_t *)sk_value(v8, v9);
            if ( *v10 == 4 )
            {
              v11 = v10[1];
              if ( v11 == 0 )
                return 0;
              issuer_name = X509_get_issuer_name(a1);
              return X509_NAME_cmp(v11, issuer_name) != 0 ? 0x1F : 0;
            }
            ++v9;
          }
        }
        return 0;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509_check_issued  (binary VA: 0x19ec060)
// Original: X509_check_issued
// ----------------------------------------------------------------------------
int X509_check_issued(int a1, int a2)
{
  int issuer_name;
  int subject_name;
  int v4;
  int v5;

  issuer_name = X509_get_issuer_name(a2);
  subject_name = X509_get_subject_name(a1);
  v4 = X509_NAME_cmp(subject_name, issuer_name);
  v5 = 29;
  if ( v4 == 0 )
  {
    if ( (*(uint8_t *)(a1 + 41) & 1) == 0 )
      sub_19EB7D0(a1);
    if ( (*(uint8_t *)(a2 + 41) & 1) == 0 )
      sub_19EB7D0(a2);
    if ( *(uint32_t *)(a2 + 60) == 0 || (v5 = X509_check_akid(a1, *(uint32_t **)(a2 + 60))) == 0 )
    {
      v5 = 0;
      if ( (*(uint8_t *)(a2 + 41) & 4) != 0 )
      {
        if ( (*(uint8_t *)(a1 + 40) & 2) != 0 )
          return (*(uint32_t *)(a1 + 44) & 0x80) == 0 ? 0x27 : 0;
      }
      else if ( (*(uint8_t *)(a1 + 40) & 2) != 0 )
      {
        return (*(uint32_t *)(a1 + 44) & 4) == 0 ? 0x20 : 0;
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_email_free  (binary VA: 0x19ed340)
// Original: X509_email_free
// ----------------------------------------------------------------------------
int X509_email_free(void **a1)
{
  return sk_pop_free(a1, (void (*)(uint32_t))sub_19EC220);
}

// ----------------------------------------------------------------------------
// Function: X509_REQ_get1_email  (binary VA: 0x19ed500)
// Original: X509_REQ_get1_email
// ----------------------------------------------------------------------------
void ** X509_REQ_get1_email(int a1)
{
  void **extensions;
  int *d2i;
  void **v3;

  extensions = (void **)X509_REQ_get_extensions(a1);
  d2i = (int *)X509V3_get_d2i(extensions, 85, 0, 0);
  v3 = sub_19ED440(*(uint32_t *)(*(uint32_t *)a1 + 16), d2i);
  sk_pop_free((void **)d2i, (void (*)(uint32_t))GENERAL_NAME_free);
  sk_pop_free(extensions, (void (*)(uint32_t))X509_EXTENSION_free);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_get1_email  (binary VA: 0x19ed5a0)
// Original: X509_get1_email
// ----------------------------------------------------------------------------
void ** X509_get1_email(int a1)
{
  int *ext_d2i;
  int subject_name;
  void **v3;

  ext_d2i = (int *)X509_get_ext_d2i(a1, 85, 0, 0);
  subject_name = X509_get_subject_name(a1);
  v3 = sub_19ED440(subject_name, ext_d2i);
  sk_pop_free((void **)ext_d2i, (void (*)(uint32_t))GENERAL_NAME_free);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509_get1_ocsp  (binary VA: 0x19ed620)
// Original: X509_get1_ocsp
// ----------------------------------------------------------------------------
void ** X509_get1_ocsp(int a1)
{
  int *ext_d2i;
  int i;
  int *v3;
  int v4;
  typedef void **_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v6 = nullptr;
  ext_d2i = (int *)X509_get_ext_d2i(a1, 177, 0, 0);
  if ( ext_d2i == nullptr )
    return nullptr;
  for ( i = 0; i < sk_num((int)(uintptr_t)(ext_d2i)); ++i )
  {
    v3 = (int *)sk_value(ext_d2i, i);
    if ( OBJ_obj2nid(*v3) == 178 )
    {
      v4 = v3[1];
      if ( *(uint32_t *)v4 == 6 && sub_19ED370(&v6, *(uint32_t **)(v4 + 4)) == 0 )
        break;
    }
  }
  AUTHORITY_INFO_ACCESS_free((char)(uintptr_t)(ext_d2i));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_X509V3_strings  (binary VA: 0x19edb60)
// Original: ERR_load_X509V3_strings
// ----------------------------------------------------------------------------
int ERR_load_X509V3_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CD260);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CD260);
    return ERR_load_strings(0, &dword_20CD480);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_CRYPTO_strings  (binary VA: 0x19edbc0)
// Original: ERR_load_CRYPTO_strings
// ----------------------------------------------------------------------------
int ERR_load_CRYPTO_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CD6C0);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CD6C0);
    return ERR_load_strings(0, &dword_20CD710);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: AES_cbc_encrypt  (binary VA: 0x19edc20)
// Original: AES_cbc_encrypt
// ----------------------------------------------------------------------------
int AES_cbc_encrypt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a6 != 0 )
    return CRYPTO_cbc128_encrypt(a1, a2, a3, a4, a5, AES_encrypt);
  else
    return CRYPTO_cbc128_decrypt(a1, a2, a3, a4, a5, AES_decrypt);
}

// ----------------------------------------------------------------------------
// Function: AES_cfb128_encrypt  (binary VA: 0x19edcc0)
// Original: AES_cfb128_encrypt
// ----------------------------------------------------------------------------
int AES_cfb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_encrypt(a1, a2, a3, a4, a5, a6, a7, AES_encrypt);
}

// ----------------------------------------------------------------------------
// Function: AES_cfb1_encrypt  (binary VA: 0x19edd20)
// Original: AES_cfb1_encrypt
// ----------------------------------------------------------------------------
int AES_cfb1_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_1_encrypt(a1, a2, a3, a4, a5, a6, a7, AES_encrypt);
}

// ----------------------------------------------------------------------------
// Function: AES_cfb8_encrypt  (binary VA: 0x19edd80)
// Original: AES_cfb8_encrypt
// ----------------------------------------------------------------------------
int AES_cfb8_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_8_encrypt(a1, a2, a3, a4, a5, a6, a7, AES_encrypt);
}

// ----------------------------------------------------------------------------
// Function: AES_set_encrypt_key  (binary VA: 0x19edde0)
// Original: AES_set_encrypt_key
// ----------------------------------------------------------------------------
int AES_set_encrypt_key(uint8_t *a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v10;
  int *i;
  unsigned int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  int *v36;
  unsigned int v37;
  unsigned int j;

  if ( a3 == nullptr || a1 == nullptr )
    return -1;
  if ( a2 != 192 && a2 != 128 )
  {
    v3 = -2;
    if ( a2 == 256 )
    {
      v36 = a3;
      a3[60] = 14;
      goto LABEL_7;
    }
    return v3;
  }
  v36 = a3;
  if ( a2 == 128 )
    a3[60] = 10;
  else
    a3[60] = 12;
LABEL_7:
  v4 = (a1[2] << 8) ^ a1[3] ^ (a1[1] << 16) ^ (*a1 << 24);
  *a3 = v4;
  v5 = (a1[6] << 8) ^ a1[7] ^ (a1[5] << 16) ^ (a1[4] << 24);
  a3[1] = v5;
  v35 = v5;
  v6 = (a1[10] << 8) ^ a1[11] ^ (a1[9] << 16) ^ (a1[8] << 24);
  a3[2] = v6;
  v7 = (a1[14] << 8) ^ a1[15] ^ (a1[13] << 16) ^ (a1[12] << 24);
  a3[3] = v7;
  if ( a2 == 128 )
  {
    v10 = 0;
    for ( i = v36; ; v6 = i[2] )
    {
      v12 = dword_1D2C160[BYTE1(v7)]
          & 0xFF0000
          ^ dword_1D2BD60[BYTE2(v7)]
          & 0xFF000000
          ^ LOBYTE(dword_1D2C960[HIBYTE(v7)])
          ^ dword_1D2C560[(uint8_t)v7]
          & 0xFF00
          ^ dword_1D2CD60[v10]
          ^ v4;
      i[4] = v12;
      v13 = v35 ^ v12;
      v14 = v13 ^ v6;
      i[5] = v13;
      i[6] = v14;
      i[7] = v7 ^ v14;
      if ( v10 == 9 )
        break;
      i += 4;
      ++v10;
      v7 = i[3];
      v35 = i[1];
      v4 = *i;
    }
  }
  else
  {
    a3[4] = (a1[18] << 8) ^ a1[19] ^ (a1[17] << 16) ^ (a1[16] << 24);
    v33 = (a1[22] << 8) ^ a1[23] ^ (a1[21] << 16) ^ (a1[20] << 24);
    a3[5] = v33;
    if ( a2 == 192 )
    {
      v15 = v36;
      v16 = 0;
      v37 = v7;
      v17 = v33;
      while ( 1 )
      {
        v19 = dword_20B9FF4[v16 - 930981] ^ v4;
        ++v16;
        v20 = dword_1D2C160[BYTE1(v17)]
            & 0xFF0000
            ^ dword_1D2BD60[BYTE2(v17)]
            & 0xFF000000
            ^ LOBYTE(dword_1D2C960[HIBYTE(v17)])
            ^ dword_1D2C560[(uint8_t)v17]
            & 0xFF00
            ^ v19;
        v15[6] = v20;
        v21 = v35 ^ v20;
        v22 = v21 ^ v6;
        v15[7] = v21;
        v15[8] = v22;
        v23 = v37 ^ v22;
        v15[9] = v23;
        if ( v16 == 8 )
          break;
        v18 = v15[4] ^ v23;
        v15[10] = v18;
        v15[11] = v17 ^ v18;
        v15 += 6;
        v17 = v15[5];
        v35 = v15[1];
        v4 = *v15;
        v6 = v15[2];
        v37 = v15[3];
      }
    }
    else
    {
      a3[6] = (a1[26] << 8) ^ a1[27] ^ (a1[25] << 16) ^ (a1[24] << 24);
      v8 = 0;
      v34 = (a1[30] << 8) ^ a1[31] ^ (a1[29] << 16) ^ (a1[28] << 24);
      a3[7] = v34;
      v24 = v36;
      for ( j = v7; ; j = v24[3] )
      {
        v28 = dword_20B9FF4[v8 - 930981] ^ v4;
        ++v8;
        v29 = dword_1D2C160[BYTE1(v34)]
            & 0xFF0000
            ^ dword_1D2BD60[BYTE2(v34)]
            & 0xFF000000
            ^ LOBYTE(dword_1D2C960[HIBYTE(v34)])
            ^ dword_1D2C560[(uint8_t)v34]
            & 0xFF00
            ^ v28;
        v24[8] = v29;
        v30 = v35 ^ v29;
        v31 = v30 ^ v6;
        v24[9] = v30;
        v24[10] = v31;
        v32 = j ^ v31;
        v24[11] = v32;
        if ( v8 == 7 )
          break;
        v25 = dword_1D2C560[BYTE1(v32)]
            & 0xFF00
            ^ dword_1D2C160[BYTE2(v32)]
            & 0xFF0000
            ^ v24[4]
            ^ LOBYTE(dword_1D2C960[(uint8_t)v32])
            ^ dword_1D2BD60[HIBYTE(v32)]
            & 0xFF000000;
        v24[12] = v25;
        v26 = v24[5] ^ v25;
        v24[13] = v26;
        v27 = v24[6] ^ v26;
        v24[14] = v27;
        v24[15] = v27 ^ v34;
        v24 += 8;
        v35 = v24[1];
        v34 = v24[7];
        v4 = *v24;
        v6 = v24[2];
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: AES_set_decrypt_key  (binary VA: 0x19ee2b0)
// Original: AES_set_decrypt_key
// ----------------------------------------------------------------------------
int AES_set_decrypt_key(uint8_t *a1, int a2, int *a3)
{
  int *v3;
  int result;
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;

  v3 = a3;
  result = AES_set_encrypt_key(a1, a2, a3);
  if ( result >= 0 )
  {
    v18 = a3[60];
    if ( 4 * v18 > 0 )
    {
      v5 = a3;
      v6 = &a3[4 * v18];
      v7 = 0;
      do
      {
        v8 = *v5;
        *v5 = *v6;
        *v6 = v8;
        v9 = v5[1];
        v5[1] = v6[1];
        v6[1] = v9;
        v10 = v5[2];
        v5[2] = v6[2];
        v6[2] = v10;
        v11 = v5[3];
        v7 += 4;
        v5[3] = v6[3];
        v6[3] = v11;
        v5 += 4;
        v6 -= 4;
      }
      while ( v7 < 4 * v18 - v7 );
      v3 = a3;
    }
    result = 0;
    if ( v18 > 1 )
    {
      v12 = v3;
      v19 = 1;
      do
      {
        v12 += 4;
        v13 = v12[1];
        *v12 = dword_1D2D5A0[LOBYTE(dword_1D2C960[(uint8_t)BYTE1(*v12)])]
             ^ dword_1D2D1A0[LOBYTE(dword_1D2C960[(uint8_t)BYTE2(*v12)])]
             ^ dword_1D2CDA0[LOBYTE(dword_1D2C960[HIBYTE(*v12)])]
             ^ dword_1D2D9A0[LOBYTE(dword_1D2C960[(uint8_t)*v12])];
        v14 = dword_1D2D5A0[LOBYTE(dword_1D2C960[BYTE1(v13)])]
            ^ dword_1D2D1A0[LOBYTE(dword_1D2C960[BYTE2(v13)])]
            ^ dword_1D2CDA0[LOBYTE(dword_1D2C960[HIBYTE(v13)])]
            ^ dword_1D2D9A0[LOBYTE(dword_1D2C960[(uint8_t)v13])];
        v15 = v12[2];
        v12[1] = v14;
        v16 = dword_1D2D5A0[LOBYTE(dword_1D2C960[BYTE1(v15)])]
            ^ dword_1D2D1A0[LOBYTE(dword_1D2C960[BYTE2(v15)])]
            ^ dword_1D2CDA0[LOBYTE(dword_1D2C960[HIBYTE(v15)])]
            ^ dword_1D2D9A0[LOBYTE(dword_1D2C960[(uint8_t)v15])];
        v17 = v12[3];
        v12[2] = v16;
        v12[3] = dword_1D2D5A0[LOBYTE(dword_1D2C960[BYTE1(v17)])]
               ^ dword_1D2D1A0[LOBYTE(dword_1D2C960[BYTE2(v17)])]
               ^ dword_1D2CDA0[LOBYTE(dword_1D2C960[HIBYTE(v17)])]
               ^ dword_1D2D9A0[LOBYTE(dword_1D2C960[(uint8_t)v17])];
        ++v19;
      }
      while ( v3[60] > v19 );
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: AES_encrypt  (binary VA: 0x19ee510)
// Original: AES_encrypt
// ----------------------------------------------------------------------------
int AES_encrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3)
{
  unsigned int v3;
  unsigned int i;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  uint32_t *v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int result;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  uint32_t *v22;
  int v23;

  v23 = (int)a3[60] >> 1;
  v22 = a3;
  v19 = *a3 ^ (a1[2] << 8) ^ a1[3] ^ (a1[1] << 16) ^ (*a1 << 24);
  v20 = a3[1] ^ (a1[6] << 8) ^ a1[7] ^ (a1[5] << 16) ^ (a1[4] << 24);
  v3 = a3[2] ^ (a1[10] << 8) ^ a1[11] ^ (a1[9] << 16) ^ (a1[8] << 24);
  for ( i = a3[3] ^ (a1[14] << 8) ^ a1[15] ^ (a1[13] << 16) ^ (a1[12] << 24);
        ;
        i = dword_1D2BD60[BYTE1(v5)]
          ^ dword_1D2C960[BYTE2(v18)]
          ^ v22[3]
          ^ dword_1D2C160[(uint8_t)v6]
          ^ dword_1D2C560[HIBYTE(v7)] )
  {
    v18 = dword_1D2BD60[BYTE1(v3)]
        ^ dword_1D2C960[BYTE2(v20)]
        ^ v22[4]
        ^ dword_1D2C160[(uint8_t)i]
        ^ dword_1D2C560[HIBYTE(v19)];
    v5 = dword_1D2BD60[BYTE1(i)]
       ^ dword_1D2C960[BYTE2(v3)]
       ^ v22[5]
       ^ dword_1D2C160[(uint8_t)v19]
       ^ dword_1D2C560[HIBYTE(v20)];
    v6 = dword_1D2BD60[BYTE1(v19)]
       ^ dword_1D2C960[BYTE2(i)]
       ^ v22[6]
       ^ dword_1D2C160[(uint8_t)v20]
       ^ dword_1D2C560[HIBYTE(v3)];
    v7 = dword_1D2BD60[BYTE1(v20)]
       ^ dword_1D2C960[BYTE2(v19)]
       ^ v22[7]
       ^ dword_1D2C160[(uint8_t)v3]
       ^ dword_1D2C560[HIBYTE(i)];
    v22 += 8;
    if ( --v23 == 0 )
      break;
    v19 = dword_1D2BD60[BYTE1(v6)]
        ^ dword_1D2C960[BYTE2(v5)]
        ^ *v22
        ^ dword_1D2C160[(uint8_t)v7]
        ^ dword_1D2C560[HIBYTE(v18)];
    v20 = dword_1D2BD60[BYTE1(v7)]
        ^ dword_1D2C960[BYTE2(v6)]
        ^ v22[1]
        ^ dword_1D2C160[(uint8_t)v18]
        ^ dword_1D2C560[HIBYTE(v5)];
    v3 = dword_1D2BD60[BYTE1(v18)]
       ^ dword_1D2C960[BYTE2(v7)]
       ^ v22[2]
       ^ dword_1D2C160[(uint8_t)v5]
       ^ dword_1D2C560[HIBYTE(v6)];
  }
  v21 = v5;
  v8 = v6;
  v9 = v7;
  v10 = (uint8_t)v7;
  v11 = &a3[8 * ((int)a3[60] >> 1) - 8];
  v12 = dword_1D2C560[BYTE1(v8)]
      & 0xFF00
      ^ dword_1D2C160[BYTE2(v5)]
      & 0xFF0000
      ^ v11[8]
      ^ LOBYTE(dword_1D2C960[v10])
      ^ dword_1D2BD60[HIBYTE(v18)]
      & 0xFF000000;
  a2[3] = v12;
  *a2 = HIBYTE(v12);
  a2[1] = BYTE2(v12);
  a2[2] = BYTE1(v12);
  v13 = dword_1D2C560[BYTE1(v9)]
      & 0xFF00
      ^ dword_1D2C160[BYTE2(v8)]
      & 0xFF0000
      ^ v11[9]
      ^ LOBYTE(dword_1D2C960[(uint8_t)v18])
      ^ dword_1D2BD60[HIBYTE(v21)]
      & 0xFF000000;
  a2[7] = *((uint8_t *)v11 + 36) ^ LOBYTE(dword_1D2C960[(uint8_t)v18]);
  a2[4] = HIBYTE(v13);
  a2[5] = BYTE2(v13);
  a2[6] = BYTE1(v13);
  v14 = dword_1D2C560[BYTE1(v18)]
      & 0xFF00
      ^ dword_1D2C160[BYTE2(v9)]
      & 0xFF0000
      ^ v11[10]
      ^ LOBYTE(dword_1D2C960[(uint8_t)v21])
      ^ dword_1D2BD60[HIBYTE(v8)]
      & 0xFF000000;
  a2[8] = HIBYTE(v14);
  v15 = dword_1D2BD60[HIBYTE(v9)];
  a2[11] = v14;
  a2[9] = BYTE2(v14);
  v16 = LOBYTE(dword_1D2C960[(uint8_t)v8]) ^ v15 & 0xFF000000;
  a2[10] = BYTE1(v14);
  result = dword_1D2C560[BYTE1(v21)] & 0xFF00 ^ dword_1D2C160[BYTE2(v18)] & 0xFF0000 ^ v11[11] ^ v16;
  a2[15] = result;
  a2[12] = HIBYTE(result);
  a2[13] = BYTE2(result);
  a2[14] = BYTE1(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: AES_decrypt  (binary VA: 0x19eea00)
// Original: AES_decrypt
// ----------------------------------------------------------------------------
int AES_decrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3)
{
  unsigned int v3;
  unsigned int i;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  uint32_t *v21;
  int v22;

  v22 = (int)a3[60] >> 1;
  v21 = a3;
  v17 = *a3 ^ (a1[2] << 8) ^ a1[3] ^ (a1[1] << 16) ^ (*a1 << 24);
  v19 = a3[1] ^ (a1[6] << 8) ^ a1[7] ^ (a1[5] << 16) ^ (a1[4] << 24);
  v3 = a3[2] ^ (a1[10] << 8) ^ a1[11] ^ (a1[9] << 16) ^ (a1[8] << 24);
  for ( i = a3[3] ^ (a1[14] << 8) ^ a1[15] ^ (a1[13] << 16) ^ (a1[12] << 24);
        ;
        i = dword_1D2D5A0[BYTE1(v5)]
          ^ dword_1D2D1A0[BYTE2(v6)]
          ^ v21[3]
          ^ dword_1D2D9A0[(uint8_t)v16]
          ^ dword_1D2CDA0[HIBYTE(v7)] )
  {
    v16 = dword_1D2D5A0[BYTE1(v3)]
        ^ dword_1D2D1A0[BYTE2(i)]
        ^ v21[4]
        ^ dword_1D2D9A0[(uint8_t)v19]
        ^ dword_1D2CDA0[HIBYTE(v17)];
    v5 = dword_1D2D5A0[BYTE1(i)]
       ^ dword_1D2D1A0[BYTE2(v17)]
       ^ v21[5]
       ^ dword_1D2D9A0[(uint8_t)v3]
       ^ dword_1D2CDA0[HIBYTE(v19)];
    v6 = dword_1D2D5A0[BYTE1(v17)]
       ^ dword_1D2D1A0[BYTE2(v19)]
       ^ v21[6]
       ^ dword_1D2D9A0[(uint8_t)i]
       ^ dword_1D2CDA0[HIBYTE(v3)];
    v7 = dword_1D2D5A0[BYTE1(v19)]
       ^ dword_1D2D1A0[BYTE2(v3)]
       ^ v21[7]
       ^ dword_1D2D9A0[(uint8_t)v17]
       ^ dword_1D2CDA0[HIBYTE(i)];
    v21 += 8;
    if ( --v22 == 0 )
      break;
    v17 = dword_1D2D5A0[BYTE1(v6)]
        ^ dword_1D2D1A0[BYTE2(v7)]
        ^ *v21
        ^ dword_1D2D9A0[(uint8_t)v5]
        ^ dword_1D2CDA0[HIBYTE(v16)];
    v19 = dword_1D2D5A0[BYTE1(v7)]
        ^ dword_1D2D1A0[BYTE2(v16)]
        ^ v21[1]
        ^ dword_1D2D9A0[(uint8_t)v6]
        ^ dword_1D2CDA0[HIBYTE(v5)];
    v3 = dword_1D2D5A0[BYTE1(v16)]
       ^ dword_1D2D1A0[BYTE2(v5)]
       ^ v21[2]
       ^ dword_1D2D9A0[(uint8_t)v7]
       ^ dword_1D2CDA0[HIBYTE(v6)];
  }
  v18 = v5;
  v20 = v6;
  v8 = v7;
  v9 = &a3[8 * ((int)a3[60] >> 1) - 8];
  v10 = v9[8]
      ^ ((uint8_t)byte_1D2DDA0[BYTE1(v20)] << 8)
      ^ ((uint8_t)byte_1D2DDA0[BYTE2(v8)] << 16)
      ^ (uint8_t)byte_1D2DDA0[(uint8_t)v5]
      ^ ((uint8_t)byte_1D2DDA0[HIBYTE(v16)] << 24);
  a2[3] = v10;
  *a2 = HIBYTE(v10);
  a2[1] = BYTE2(v10);
  a2[2] = BYTE1(v10);
  v11 = v9[9]
      ^ ((uint8_t)byte_1D2DDA0[BYTE1(v8)] << 8)
      ^ ((uint8_t)byte_1D2DDA0[BYTE2(v16)] << 16)
      ^ (uint8_t)byte_1D2DDA0[(uint8_t)v20]
      ^ ((uint8_t)byte_1D2DDA0[HIBYTE(v18)] << 24);
  a2[7] = *((uint8_t *)v9 + 36) ^ byte_1D2DDA0[(uint8_t)v20];
  a2[4] = HIBYTE(v11);
  a2[5] = BYTE2(v11);
  a2[6] = BYTE1(v11);
  v12 = v9[10]
      ^ ((uint8_t)byte_1D2DDA0[BYTE1(v16)] << 8)
      ^ ((uint8_t)byte_1D2DDA0[BYTE2(v18)] << 16)
      ^ (uint8_t)byte_1D2DDA0[(uint8_t)v8]
      ^ ((uint8_t)byte_1D2DDA0[HIBYTE(v20)] << 24);
  a2[8] = HIBYTE(v12);
  v13 = (uint8_t)byte_1D2DDA0[HIBYTE(v8)];
  a2[11] = v12;
  a2[9] = BYTE2(v12);
  v14 = (uint8_t)byte_1D2DDA0[(uint8_t)v16] ^ (v13 << 24);
  a2[10] = BYTE1(v12);
  result = v9[11]
         ^ ((uint8_t)byte_1D2DDA0[BYTE1(v18)] << 8)
         ^ ((uint8_t)byte_1D2DDA0[BYTE2(v20)] << 16)
         ^ v14;
  a2[15] = result;
  a2[12] = HIBYTE(result);
  a2[13] = BYTE2(result);
  a2[14] = BYTE1(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: AES_ecb_encrypt  (binary VA: 0x19eeed0)
// Original: AES_ecb_encrypt
// ----------------------------------------------------------------------------
int AES_ecb_encrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3, int a4)
{
  if ( a4 == 1 )
    return AES_encrypt(a1, a2, a3);
  else
    return AES_decrypt(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: AES_ofb128_encrypt  (binary VA: 0x19eef20)
// Original: AES_ofb128_encrypt
// ----------------------------------------------------------------------------
int AES_ofb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (int)(uintptr_t)(CRYPTO_ofb128_encrypt(a1, a2, a3, a4, a5, a6, AES_encrypt));
}

// ----------------------------------------------------------------------------
// Function: ASN1_BIT_STRING_set  (binary VA: 0x19eef80)
// Original: ASN1_BIT_STRING_set
// ----------------------------------------------------------------------------
int ASN1_BIT_STRING_set(int a1, char *s, size_t a3)
{
  return ASN1_STRING_set(a1, s, a3);
}

// ----------------------------------------------------------------------------
// Function: ASN1_BIT_STRING_set_bit  (binary VA: 0x19ef2b0)
// Original: ASN1_BIT_STRING_set_bit
// ----------------------------------------------------------------------------
int ASN1_BIT_STRING_set_bit(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  int v10;
  void *v11;
  char v12;
  uint8_t *v13;
  int v14;
  size_t v15;

  LOBYTE(v3) = 0;
  v4 = a2;
  if ( a3 != 0 )
    v3 = 1 << (~(uint8_t)a2 & 7);
  result = 0;
  if ( a1 != nullptr )
  {
    if ( a2 < 0 )
      v4 = a2 + 7;
    v6 = *a1;
    v7 = v4 >> 3;
    a1[3] &= 0xFFFFFFF0;
    v15 = v6;
    if ( v7 >= v6 || (v8 = (uint8_t *)a1[2]) == nullptr )
    {
      result = 1;
      if ( a3 == 0 )
        return result;
      v11 = (void *)a1[2];
      if ( v11 != nullptr )
      {
        v14 = v7 + 1;
        v12 = v3;
        v8 = CRYPTO_realloc_clean(v11, v15, v7 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        v12 = v3;
        v14 = v7 + 1;
        v8 = CRYPTO_malloc(v7 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      LOBYTE(v3) = v12;
      if ( v8 == nullptr )
      {
        ERR_put_error(13, 183, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
      if ( v14 - *a1 > 0 )
      {
        v13 = v8;
        memset(&v8[*a1], 0, v14 - *a1);
        v8 = v13;
        LOBYTE(v3) = v12;
      }
      a1[2] = (int)(uintptr_t)(v8);
      *a1 = v14;
    }
    v8[v7] = v3 | v8[v7] & ~(uint8_t)(1 << (~(uint8_t)a2 & 7));
    v9 = *a1;
    result = 1;
    if ( *a1 > 0 )
    {
      v10 = a1[2];
      if ( *(uint8_t *)(v10 + v9 - 1) == 0 )
      {
        do
          *a1 = --v9;
        while ( v9 != 0 && *(uint8_t *)(v10 + v9 - 1) == 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_BIT_STRING_get_bit  (binary VA: 0x19ef470)
// Original: ASN1_BIT_STRING_get_bit
// ----------------------------------------------------------------------------
bool ASN1_BIT_STRING_get_bit(int *a1, int a2)
{
  bool result;
  int v3;

  result = 0;
  if ( a1 != nullptr && a2 / 8 < *a1 )
  {
    v3 = a1[2];
    if ( v3 != 0 )
    {
      LOBYTE(result) = 1;
      return ((result << (~(uint8_t)a2 & 7)) & *(uint8_t *)(v3 + a2 / 8)) != 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_BIT_STRING_check  (binary VA: 0x19ef4b0)
// Original: ASN1_BIT_STRING_check
// ----------------------------------------------------------------------------
int ASN1_BIT_STRING_check(int *a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  char v6;
  bool v7;

  result = 1;
  if ( a1 != nullptr )
  {
    v4 = a1[2];
    if ( v4 != 0 && *a1 > 0 )
    {
      v5 = 0;
      do
      {
        v6 = -1;
        if ( a3 > v5 )
          v6 = ~*(uint8_t *)(a2 + v5);
        v7 = ((uint8_t)v6 & *(uint8_t *)(v4 + v5++)) == 0;
        result = v7;
      }
      while ( v7 && v5 < *a1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_d2i_bio  (binary VA: 0x19ef7c0)
// Original: ASN1_d2i_bio
// ----------------------------------------------------------------------------
int ASN1_d2i_bio(int a1, int (*a2)(int, uint32_t *, int), uint32_t *a3, int a4)
{
  int v4;
  int v5;
  typedef void *_g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v4 = 0;
  v7 = nullptr;
  v5 = sub_19EF510(a3, (size_t **)&v7);
  if ( v5 >= 0 )
  {
    v8[0] = *((uint32_t *)v7 + 1);
    v4 = a2(a4, v8, v5);
  }
  if ( v7 != nullptr )
    BUF_MEM_free(v7);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ASN1_d2i_fp  (binary VA: 0x19ef830)
// Original: ASN1_d2i_fp
// ----------------------------------------------------------------------------
int ASN1_d2i_fp(int a1, int (*a2)(int, uint32_t *, int), int a3, int a4)
{
  void *v4;
  uint8_t *v5;
  int v6;

  v4 = BIO_s_file();
  v5 = BIO_new((int)(uintptr_t)(v4));
  if ( v5 != nullptr )
  {
    BIO_ctrl(v5, 106, 0, a3);
    v6 = ASN1_d2i_bio(a1, a2, (uint32_t *)v5, a4);
    BIO_free(v5);
  }
  else
  {
    v6 = 0;
    ERR_put_error(13, 109, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_d2i_bio  (binary VA: 0x19ef900)
// Original: ASN1_item_d2i_bio
// ----------------------------------------------------------------------------
int ASN1_item_d2i_bio(int a1, uint32_t *a2, int *a3)
{
  int v3;
  int v4;
  typedef void *_g4_t_v6;
  typedef char *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v3 = 0;
  v6 = nullptr;
  v4 = sub_19EF510(a2, (size_t **)&v6);
  if ( v4 >= 0 )
  {
    v7 = *((char **)v6 + 1);
    v3 = ASN1_item_d2i(a3, &v7, v4, a1);
  }
  if ( v6 != nullptr )
    BUF_MEM_free(v6);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_d2i_fp  (binary VA: 0x19ef980)
// Original: ASN1_item_d2i_fp
// ----------------------------------------------------------------------------
int ASN1_item_d2i_fp(int a1, int a2, int *a3)
{
  void *v3;
  uint8_t *v4;
  int v5;

  v3 = BIO_s_file();
  v4 = BIO_new((int)(uintptr_t)(v3));
  if ( v4 != nullptr )
  {
    BIO_ctrl(v4, 106, 0, a2);
    v5 = ASN1_item_d2i_bio(a1, v4, a3);
    BIO_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(13, 206, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ASN1_digest  (binary VA: 0x19efa40)
// Original: ASN1_digest
// ----------------------------------------------------------------------------
int ASN1_digest(int (*a1)(int, uint8_t **), uint32_t *a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint8_t *v6;
  void *v7;
  typedef uint8_t *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v5 = a1(a3, nullptr);
  v6 = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v9 = v6;
    a1(a3, &v9);
    EVP_Digest((int)(uintptr_t)(v7), v5, a4, a5, a2, nullptr);
    CRYPTO_free(v7);
    return 1;
  }
  else
  {
    ERR_put_error(13, 184, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_digest  (binary VA: 0x19efb30)
// Original: ASN1_item_digest
// ----------------------------------------------------------------------------
int ASN1_item_digest(int a1, uint32_t *a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v6;
  typedef void *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v8 = nullptr;
  v5 = ASN1_item_i2d(a3, &v8, a1);
  v6 = 0;
  if ( v8 != nullptr )
  {
    EVP_Digest((int)(uintptr_t)(v8), v5, a4, a5, a2, nullptr);
    CRYPTO_free(v8);
    return 1;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ASN1_dup  (binary VA: 0x19efbc0)
// Original: ASN1_dup
// ----------------------------------------------------------------------------
int ASN1_dup(int (*a1)(int, uint8_t **), int (*a2)(uint32_t, void **, int), int a3)
{
  int v3;
  int v4;
  uint8_t *v5;
  void *v6;
  int v7;
  typedef uint8_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v3 = 0;
  if ( a3 != 0 )
  {
    v4 = a1(a3, nullptr);
    v5 = CRYPTO_malloc(v4 + 10, (int)(uintptr_t)(&unk_1B15112), 0);
    v6 = v5;
    if ( v5 != nullptr )
    {
      v9 = v5;
      v7 = a1(a3, &v9);
      v10 = v6;
      v3 = a2(0, &v10, v7);
      CRYPTO_free(v6);
    }
    else
    {
      ERR_put_error(13, 111, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_dup  (binary VA: 0x19efcb0)
// Original: ASN1_item_dup
// ----------------------------------------------------------------------------
int ASN1_item_dup(int a1, int a2)
{
  int v2;
  int v3;
  typedef void *_g4_t_v5;
  typedef char *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = 0;
  v5 = nullptr;
  if ( a2 != 0 )
  {
    v3 = ASN1_item_i2d(a2, &v5, a1);
    if ( v5 != nullptr )
    {
      v6 = (char *)v5;
      v2 = ASN1_item_d2i(nullptr, &v6, v3, a1);
      CRYPTO_free(v5);
    }
    else
    {
      ERR_put_error(13, 191, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_ENUMERATED_set  (binary VA: 0x19efd70)
// Original: ASN1_ENUMERATED_set
// ----------------------------------------------------------------------------
int ASN1_ENUMERATED_set(int a1, int a2)
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
  *(uint32_t *)(a1 + 4) = 10;
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
      *(uint32_t *)(a1 + 4) = 266;
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
  ERR_put_error(13, 112, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ASN1_ENUMERATED_get  (binary VA: 0x19efef0)
// Original: ASN1_ENUMERATED_get
// ----------------------------------------------------------------------------
int ASN1_ENUMERATED_get(int *a1)
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
    if ( v2 == 266 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      result = -1;
      if ( v2 != 10 )
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
// Function: BN_to_ASN1_ENUMERATED  (binary VA: 0x19eff60)
// Original: BN_to_ASN1_ENUMERATED
// ----------------------------------------------------------------------------
void ** BN_to_ASN1_ENUMERATED(uint32_t *a1, void **a2)
{
  void **v2;
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  int v8;
  void **v9;

  v2 = a2;
  if ( a2 == nullptr )
  {
    v2 = (void **)ASN1_STRING_type_new(10);
    if ( v2 == nullptr )
    {
      ERR_put_error(13, 138, 58, (int)(uintptr_t)(&unk_1B15112), 0);
      return v2;
    }
  }
  v3 = -(a1[3] == 0);
  LOBYTE(v3) = 0;
  v2[1] = (void *)(v3 + 266);
  v4 = BN_num_bits(a1);
  v5 = 0;
  if ( v4 == 0 )
  {
    if ( (int)(uintptr_t)(*v2) <= 3 )
      goto LABEL_4;
LABEL_9:
    v6 = (uint8_t *)(v2[2]);
    goto LABEL_6;
  }
  v8 = v4 / 8;
  v5 = v8 + 1;
  if ( v8 + 4 < (int)(uintptr_t)(*v2) )
    goto LABEL_9;
LABEL_4:
  v6 = CRYPTO_realloc(v2[2], v5 + 4, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v6 != nullptr )
  {
    v2[2] = v6;
LABEL_6:
    *v2 = (void *)BN_bn2bin(a1, v6);
    return v2;
  }
  ERR_put_error(13, 138, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( a2 == v2 )
    return nullptr;
  v9 = v2;
  v2 = nullptr;
  ASN1_STRING_free(v9);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_ENUMERATED_to_BN  (binary VA: 0x19f00d0)
// Original: ASN1_ENUMERATED_to_BN
// ----------------------------------------------------------------------------
void ** ASN1_ENUMERATED_to_BN(int a1, void **a2)
{
  void **result;
  void **v3;

  result = BN_bin2bn(*(uint8_t **)(a1 + 8), *(uint32_t *)a1, a2);
  if ( result != nullptr )
  {
    if ( *(uint32_t *)(a1 + 4) == 266 )
    {
      v3 = result;
      BN_set_negative((unsigned int)(uintptr_t)(result), 1);
      return v3;
    }
  }
  else
  {
    ERR_put_error(13, 113, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_check  (binary VA: 0x19f0180)
// Original: ASN1_GENERALIZEDTIME_check
// ----------------------------------------------------------------------------
int ASN1_GENERALIZEDTIME_check(int *a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  char v5; // si
  int v6;
  char v7;
  int v8;
  int v9;
  int v10;
  char v11; // bp
  char v12; // si
  int v13;
  char v14; // si
  int v15;
  int v16;
  int v17;
  char v18;

  result = 0;
  if ( a1[1] == 24 )
  {
    v2 = *a1;
    if ( *a1 > 12 )
    {
      v3 = a1[2];
      v4 = 0;
      while ( 1 )
      {
        do
        {
          v18 = *(uint8_t *)(v3 + v4);
          if ( (uint8_t)(v18 - 48) > 9u )
            return 0;
          v5 = *(uint8_t *)(v3 + v4 + 1);
          if ( (uint8_t)(v5 - 48) > 9u )
            return 0;
          v4 += 2;
          if ( v2 < v4 )
            return 0;
          v6 = v5 + 2 * (5 * v18 - 240) - 48;
          if ( v6 < dword_1D2DEA0[result] || v6 > dword_1D2DEE0[result] )
            return 0;
          if ( ++result == 7 )
            goto LABEL_25;
        }
        while ( result != 6 );
        v7 = *(uint8_t *)(v3 + v4);
        if ( v7 == 43 || v7 == 90 )
          break;
        if ( v7 == 45 )
        {
          v8 = a1[2];
          v17 = v4;
LABEL_16:
          result = 0;
          if ( v2 <= v17 + 4 )
            return result;
          v9 = v17 + 1;
          v10 = v8;
          while ( 1 )
          {
            v11 = *(uint8_t *)(v10 + v9);
            if ( (uint8_t)(v11 - 48) > 9u )
              break;
            v12 = *(uint8_t *)(v10 + v9 + 1);
            if ( (uint8_t)(v12 - 48) > 9u )
              break;
            v13 = v12 + 2 * (5 * v11 - 240) - 48;
            if ( v13 < *(int *)((char *)&dword_1D2DEBC + result) || v13 > *(int *)((char *)&dword_1D2DEFC + result) )
              break;
            result += 4;
            v9 += 2;
            if ( result == 8 )
            {
              v2 = *a1;
              return v9 == v2;
            }
          }
          return 0;
        }
      }
LABEL_25:
      v14 = *(uint8_t *)(v3 + v4);
      v8 = a1[2];
      v17 = v4;
      if ( v14 != 46 )
        goto LABEL_26;
      result = 0;
      v15 = v4 + 1;
      if ( v2 >= v4 + 1 && (uint8_t)(*(uint8_t *)(v8 + v4 + 1) - 48) <= 9u )
      {
        v16 = v4 + 1;
        do
          ++v16;
        while ( (uint8_t)(*(uint8_t *)(v8 + v16) - 48) <= 9u && v2 >= v16 );
        v14 = *(uint8_t *)(v8 + v16);
        result = 0;
        v17 = v16;
        if ( v15 != v16 )
        {
LABEL_26:
          if ( v14 == 90 )
          {
            v9 = v17 + 1;
            return v9 == v2;
          }
          else
          {
            if ( v14 == 45 )
              goto LABEL_16;
            result = 0;
            if ( v14 == 43 )
              goto LABEL_16;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_set_string  (binary VA: 0x19f03a0)
// Original: ASN1_GENERALIZEDTIME_set_string
// ----------------------------------------------------------------------------
int ASN1_GENERALIZEDTIME_set_string(int a1, char *s)
{
  int v2;
  int v3;
  int v4;
  size_t v6[4];

  v6[1] = 24;
  v6[0] = strlen(s);
  v6[2] = (size_t)s;
  v2 = ASN1_GENERALIZEDTIME_check((int *)v6);
  v3 = 0;
  if ( v2 != 0 )
  {
    LOBYTE(v3) = 1;
    if ( a1 != 0 )
    {
      v4 = ASN1_STRING_set(a1, s, v6[0]);
      v3 = 0;
      if ( v4 != 0 )
      {
        *(uint32_t *)(a1 + 4) = 24;
        LOBYTE(v3) = 1;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_adj  (binary VA: 0x19f0430)
// Original: ASN1_GENERALIZEDTIME_adj
// ----------------------------------------------------------------------------
size_t * ASN1_GENERALIZEDTIME_adj(size_t *a1, time_t a2, int a3, int a4)
{
  size_t *v4;
  int v5;
  uint32_t *v6;
  uint8_t *s;
  typedef struct tm _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);

  v4 = a1;
  v5 = a4;
  if ( a1 != nullptr || (v4 = (size_t *)(ASN1_STRING_type_new(24))) != nullptr )
  {
    v6 = (uint32_t *)OPENSSL_gmtime(&a2, &v9);
    if ( v6 != nullptr && (v5 == 0 && a3 == 0 || OPENSSL_gmtime_adj(v6, a3, v5) != 0) )
    {
      s = (uint8_t *)v4[2];
      if ( s == nullptr || *v4 <= 0x13 )
      {
        s = CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( s == nullptr )
        {
          v4 = nullptr;
          ERR_put_error(13, 216, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          return v4;
        }
        if ( v4[2] != 0 )
          CRYPTO_free((void *)v4[2]);
        v4[2] = (size_t)s;
      }
      BIO_snprintf(s, 20, "%04d%02d%02d%02d%02d%02dZ", v6[5] + 1900, v6[4] + 1, v6[3], v6[2], v6[1], *v6);
      *v4 = strlen(s);
      v4[1] = 24;
    }
    else
    {
      return nullptr;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_set  (binary VA: 0x19f05f0)
// Original: ASN1_GENERALIZEDTIME_set
// ----------------------------------------------------------------------------
size_t * ASN1_GENERALIZEDTIME_set(size_t *a1, time_t a2)
{
  return ASN1_GENERALIZEDTIME_adj(a1, a2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_i2d_bio  (binary VA: 0x19f0630)
// Original: ASN1_i2d_bio
// ----------------------------------------------------------------------------
int ASN1_i2d_bio(int (*a1)(int, uint8_t **), uint32_t *a2, int a3)
{
  int v3;
  uint8_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef uint8_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v3 = a1(a3, nullptr);
  v4 = CRYPTO_malloc(v3, (int)(uintptr_t)(&unk_1B15112), 0);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v11 = v4;
    a1(a3, &v11);
    v6 = 0;
    while ( 1 )
    {
      v10 = v6;
      v7 = BIO_write(a2, (int)(uintptr_t)(v5) + v6, v3);
      if ( v7 == v3 )
      {
        v8 = 1;
        goto LABEL_7;
      }
      if ( v7 <= 0 )
        break;
      v6 = v7 + v10;
      v3 -= v7;
    }
    v8 = 0;
LABEL_7:
    CRYPTO_free(v5);
    return v8;
  }
  else
  {
    ERR_put_error(13, 116, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: ASN1_i2d_fp  (binary VA: 0x19f0720)
// Original: ASN1_i2d_fp
// ----------------------------------------------------------------------------
int ASN1_i2d_fp(int (*a1)(int, uint8_t **), int a2, int a3)
{
  void *v3;
  uint8_t *v4;
  int v5;

  v3 = BIO_s_file();
  v4 = BIO_new((int)(uintptr_t)(v3));
  if ( v4 != nullptr )
  {
    BIO_ctrl(v4, 106, 0, a2);
    v5 = ASN1_i2d_bio(a1, v4, a3);
    BIO_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(13, 117, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_i2d_bio  (binary VA: 0x19f07e0)
// Original: ASN1_item_i2d_bio
// ----------------------------------------------------------------------------
int ASN1_item_i2d_bio(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  void *v5;
  int v6;
  int v8;
  typedef void *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v3 = 0;
  v9 = nullptr;
  v4 = ASN1_item_i2d(a3, &v9, a1);
  v5 = v9;
  if ( v9 != nullptr )
  {
    while ( 1 )
    {
      v6 = BIO_write(a2, (int)(uintptr_t)(v5) + v3, v4);
      if ( v6 == v4 )
      {
        v8 = 1;
        goto LABEL_7;
      }
      if ( v6 <= 0 )
        break;
      v3 += v6;
      v4 -= v6;
      v5 = v9;
    }
    v8 = 0;
LABEL_7:
    CRYPTO_free(v9);
  }
  else
  {
    v8 = 0;
    ERR_put_error(13, 192, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_i2d_fp  (binary VA: 0x19f08b0)
// Original: ASN1_item_i2d_fp
// ----------------------------------------------------------------------------
int ASN1_item_i2d_fp(int a1, int a2, int a3)
{
  void *v3;
  uint8_t *v4;
  int v5;

  v3 = BIO_s_file();
  v4 = BIO_new((int)(uintptr_t)(v3));
  if ( v4 != nullptr )
  {
    BIO_ctrl(v4, 106, 0, a2);
    v5 = ASN1_item_i2d_bio(a1, v4, a3);
    BIO_free(v4);
  }
  else
  {
    v5 = 0;
    ERR_put_error(13, 193, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_OBJECT  (binary VA: 0x19f0970)
// Original: i2d_ASN1_OBJECT
// ----------------------------------------------------------------------------
int i2d_ASN1_OBJECT(int a1, void **a2)
{
  int v2;
  typedef void *_g4_t_dest;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_dest)) > _g4_s0 ? (12u + sizeof(_g4_t_dest)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 12u);

  v2 = 0;
  if ( a1 != 0 && *(uint32_t *)(a1 + 16) != 0 )
  {
    v2 = ASN1_object_size(0, *(uint32_t *)(a1 + 12), 6);
    if ( a2 != nullptr )
    {
      dest = *a2;
      ASN1_put_object((uint8_t **)&dest, 0, *(uint32_t *)(a1 + 12), 6, 0);
      memcpy(dest, *(const void **)(a1 + 16), *(uint32_t *)(a1 + 12));
      *a2 = (char *)dest + *(uint32_t *)(a1 + 12);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_OBJECT_new  (binary VA: 0x19f11d0)
// Original: ASN1_OBJECT_new
// ----------------------------------------------------------------------------
uint32_t * ASN1_OBJECT_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    result[3] = 0;
    result[4] = 0;
    result[2] = 0;
    *result = 0;
    result[1] = 0;
    result[5] = 1;
  }
  else
  {
    ERR_put_error(13, 123, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_OBJECT_free  (binary VA: 0x19f1280)
// Original: ASN1_OBJECT_free
// ----------------------------------------------------------------------------
void ASN1_OBJECT_free(void *a1)
{
  int v1;

  if ( a1 != nullptr )
  {
    v1 = *((uint32_t *)a1 + 5);
    if ( (v1 & 4) != 0 )
    {
      if ( *(uint32_t *)a1 != 0 )
        CRYPTO_free(*(void **)a1);
      if ( *((uint32_t *)a1 + 1) != 0 )
        CRYPTO_free(*((void **)a1 + 1));
      *((uint32_t *)a1 + 1) = 0;
      *(uint32_t *)a1 = 0;
      v1 = *((uint32_t *)a1 + 5);
    }
    if ( (v1 & 8) != 0 )
    {
      if ( *((uint32_t *)a1 + 4) != 0 )
      {
        CRYPTO_free(*((void **)a1 + 4));
        v1 = *((uint32_t *)a1 + 5);
      }
      *((uint32_t *)a1 + 4) = 0;
      *((uint32_t *)a1 + 3) = 0;
    }
    if ( (v1 & 1) != 0 )
      CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_OBJECT  (binary VA: 0x19f14f0)
// Original: d2i_ASN1_OBJECT
// ----------------------------------------------------------------------------
uint32_t * d2i_ASN1_OBJECT(uint32_t **a1, int *a2, int a3)
{
  uint32_t *result;
  int16_t v4;
  typedef int _g4_t_v5;
  typedef size_t _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v5 = *a2;
  if ( (ASN1_get_object((uint8_t **)&v5, (int *)&v6, &v7, &v8, a3) & 0x80u) != 0 )
  {
    v4 = 102;
    goto LABEL_7;
  }
  if ( v7 != 6 )
  {
    v4 = 116;
LABEL_7:
    ERR_put_error(13, 147, v4, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  result = c2i_ASN1_OBJECT(a1, &v5, v6);
  if ( result != nullptr )
    *a2 = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_OBJECT_create  (binary VA: 0x19f15c0)
// Original: ASN1_OBJECT_create
// ----------------------------------------------------------------------------
size_t * ASN1_OBJECT_create(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[9];

  v6[5] = 13;
  v6[0] = a4;
  v6[1] = a5;
  v6[4] = a2;
  v6[2] = a1;
  v6[3] = a3;
  return OBJ_dup((int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: ASN1_OCTET_STRING_dup  (binary VA: 0x19f1620)
// Original: ASN1_OCTET_STRING_dup
// ----------------------------------------------------------------------------
void ** ASN1_OCTET_STRING_dup(int a1)
{
  return ASN1_STRING_dup(a1);
}

// ----------------------------------------------------------------------------
// Function: ASN1_OCTET_STRING_cmp  (binary VA: 0x19f1650)
// Original: ASN1_OCTET_STRING_cmp
// ----------------------------------------------------------------------------
int ASN1_OCTET_STRING_cmp(int a1, int a2)
{
  return ASN1_STRING_cmp(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ASN1_OCTET_STRING_set  (binary VA: 0x19f1680)
// Original: ASN1_OCTET_STRING_set
// ----------------------------------------------------------------------------
int ASN1_OCTET_STRING_set(int a1, char *s, size_t a3)
{
  return ASN1_STRING_set(a1, s, a3);
}

// ----------------------------------------------------------------------------
// Function: ASN1_sign  (binary VA: 0x19f16c0)
// Original: ASN1_sign
// ----------------------------------------------------------------------------
int ASN1_sign(int (*a1)(int, uint8_t **), int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7)
{
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  char **v11;
  uint8_t *v12;
  uint8_t *v13;
  unsigned int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[13];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);

  v7 = 0;
  v19 = 0;
  EVP_MD_CTX_init(v20);
  do
  {
    v8 = a2;
    if ( v7 != 0 )
      v8 = a3;
    if ( v8 != 0 )
    {
      v9 = *(uint32_t **)(v8 + 4);
      if ( a7[1] == 113 )
      {
        ASN1_TYPE_free(*(uint32_t *)(v8 + 4));
        *(uint32_t *)(v8 + 4) = 0;
      }
      else if ( v9 == nullptr || *v9 != 5 )
      {
        ASN1_TYPE_free(*(uint32_t *)(v8 + 4));
        v10 = (uint32_t *)ASN1_TYPE_new();
        *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v10);
        if ( v10 == nullptr )
          goto LABEL_28;
        *v10 = 5;
      }
      ASN1_OBJECT_free(*(void **)v8);
      v11 = OBJ_nid2obj(a7[1]);
      *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v11);
      if ( v11 == nullptr )
      {
        ERR_put_error(13, 128, 162, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_28:
        EVP_MD_CTX_cleanup((int)(uintptr_t)(v20));
        return v19;
      }
      if ( v11[3] == nullptr )
      {
        ERR_put_error(13, 128, 154, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_28;
      }
    }
    ++v7;
  }
  while ( v7 != 2 );
  v17 = a1(a5, nullptr);
  v12 = CRYPTO_malloc(v17, (int)(uintptr_t)(&unk_1B15112), 0);
  v16 = EVP_PKEY_size((int)(uintptr_t)(a6));
  v19 = v16;
  v13 = CRYPTO_malloc(v16, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v13 != nullptr && v12 != nullptr )
  {
    v18 = v12;
    a1(a5, &v18);
    EVP_DigestInit_ex((int)(uintptr_t)(v20), a7, nullptr);
    EVP_DigestUpdate((int)(uintptr_t)(v20), (int)(uintptr_t)(v12), v17);
    if ( EVP_SignFinal(v20, (int)(uintptr_t)(v13), &v19, a6) != 0 )
    {
      if ( *(uint32_t *)(a4 + 8) != 0 )
        CRYPTO_free(*(void **)(a4 + 8));
      *(uint32_t *)a4 = v19;
      v15 = *(uint32_t *)(a4 + 12) & 0xFFFFFFF0;
      *(uint32_t *)(a4 + 8) = (uint32_t)(uintptr_t)(v13);
      v13 = nullptr;
      *(uint32_t *)(a4 + 12) = v15 | 8;
    }
    else
    {
      v19 = 0;
      ERR_put_error(13, 128, 6, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v19 = 0;
    ERR_put_error(13, 128, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v20));
  if ( v12 != nullptr )
  {
    OPENSSL_cleanse(v12, v17);
    CRYPTO_free(v12);
  }
  if ( v13 != nullptr )
  {
    OPENSSL_cleanse(v13, v16);
    CRYPTO_free(v13);
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_sign  (binary VA: 0x19f19e0)
// Original: ASN1_item_sign
// ----------------------------------------------------------------------------
int ASN1_item_sign(int a1, int a2, int a3, int a4, int a5, uint32_t *a6, int a7)
{
  int digestbyname;
  int v8;
  char **v9;
  char **v10;
  uint8_t *v11;
  int *v13;
  int v14;
  int v15;
  unsigned int v16;
  char *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24[13];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v20)) > _g4_s2 ? (24u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v23)) > _g4_s5 ? (36u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v24)) > _g4_s6 ? (40u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);

  digestbyname = a7;
  v20 = nullptr;
  v21 = 0;
  if ( a7 != 0
    || EVP_PKEY_get_default_digest_nid((int)(uintptr_t)(a6), (int)(uintptr_t)(&v23)) > 0
    && (v17 = OBJ_nid2sn(v23), (digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v17))) != 0) )
  {
    if ( (*(uint8_t *)(digestbyname + 12) & 4) != 0 )
    {
      v13 = (int *)a6[3];
      if ( v13 == nullptr || (v14 = *v13, v15 = EVP_MD_type(digestbyname), OBJ_find_sigid_by_algs(&v22, v15, v14) == 0) )
      {
        ERR_put_error(13, 195, 198, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      v22 = *(uint32_t *)(digestbyname + 4);
    }
    v8 = (*(uint32_t *)(a6[3] + 8) & 4) == 0 ? -1 : 5;
    if ( a2 != 0 )
    {
      v9 = OBJ_nid2obj(v22);
      X509_ALGOR_set0(a2, (int)(uintptr_t)(v9), v8, 0);
    }
    if ( a3 != 0 )
    {
      v10 = OBJ_nid2obj(v22);
      X509_ALGOR_set0(a3, (int)(uintptr_t)(v10), v8, 0);
    }
    EVP_MD_CTX_init(v24);
    v19 = ASN1_item_i2d(a5, &v20, a1);
    v18 = EVP_PKEY_size((int)(uintptr_t)(a6));
    v21 = v18;
    v11 = CRYPTO_malloc(v18, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v11 != nullptr && v20 != nullptr )
    {
      EVP_DigestInit_ex((int)(uintptr_t)(v24), (uint32_t *)digestbyname, nullptr);
      EVP_DigestUpdate((int)(uintptr_t)(v24), (int)(uintptr_t)(v20), v19);
      if ( EVP_SignFinal(v24, (int)(uintptr_t)(v11), &v21, a6) != 0 )
      {
        if ( *(uint32_t *)(a4 + 8) != 0 )
          CRYPTO_free(*(void **)(a4 + 8));
        *(uint32_t *)a4 = v21;
        v16 = *(uint32_t *)(a4 + 12) & 0xFFFFFFF0;
        *(uint32_t *)(a4 + 8) = (uint32_t)(uintptr_t)(v11);
        v11 = nullptr;
        *(uint32_t *)(a4 + 12) = v16 | 8;
      }
      else
      {
        v21 = 0;
        ERR_put_error(13, 195, 6, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      v21 = 0;
      ERR_put_error(13, 195, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    EVP_MD_CTX_cleanup((int)(uintptr_t)(v24));
    if ( v20 != nullptr )
    {
      OPENSSL_cleanse((uint8_t *)v20, v19);
      CRYPTO_free(v20);
    }
    if ( v11 != nullptr )
    {
      OPENSSL_cleanse(v11, v18);
      CRYPTO_free(v11);
    }
    return v21;
  }
  else
  {
    ERR_put_error(13, 195, 201, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_print_ex  (binary VA: 0x19f2bd0)
// Original: X509_NAME_print_ex
// ----------------------------------------------------------------------------
int X509_NAME_print_ex(int a1, int a2, int a3, unsigned int a4)
{
  if ( a4 != 0 )
    return sub_19F2660((int (*)(int, const char *, int))sub_19F1DB0, a1, a2, a3, a4);
  else
    return X509_NAME_print(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_print_ex_fp  (binary VA: 0x19f2c40)
// Original: X509_NAME_print_ex_fp
// ----------------------------------------------------------------------------
int X509_NAME_print_ex_fp(int a1, int a2, int a3, unsigned int a4)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;

  if ( a4 != 0 )
    return sub_19F2660((int (*)(int, const char *, int))sub_19F1D50, a1, a2, a3, a4);
  v4 = BIO_new_fp(a1, 0);
  v5 = v4;
  if ( v4 == nullptr )
    return -1;
  v6 = X509_NAME_print(v4, a2);
  BIO_free(v5);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_print_ex  (binary VA: 0x19f2d00)
// Original: ASN1_STRING_print_ex
// ----------------------------------------------------------------------------
int ASN1_STRING_print_ex(int a1, int a2, int16_t a3)
{
  return sub_19F2260((int (*)(int, char *, int))sub_19F1DB0, a1, a3, a2);
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_print_ex_fp  (binary VA: 0x19f2d30)
// Original: ASN1_STRING_print_ex_fp
// ----------------------------------------------------------------------------
int ASN1_STRING_print_ex_fp(int a1, int a2, int16_t a3)
{
  return sub_19F2260((int (*)(int, char *, int))sub_19F1D50, a1, a3, a2);
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_to_UTF8  (binary VA: 0x19f2d60)
// Original: ASN1_STRING_to_UTF8
// ----------------------------------------------------------------------------
int ASN1_STRING_to_UTF8(uint32_t *a1, size_t *a2)
{
  unsigned int v2;
  int result;
  int v4;
  typedef char *_g4_t_v5;
  typedef size_t _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v7)) > _g4_s2 ? (44u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v8)) > _g4_s3 ? (48u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v9)) > _g4_s4 ? (56u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);

  v7 = (int)(uintptr_t)(&v8);
  if ( a2 == nullptr )
    return -1;
  v2 = a2[1];
  result = -1;
  if ( v2 <= 0x1E )
  {
    v4 = byte_1D2DF20[v2];
    if ( v4 != -1 )
    {
      BYTE1(v4) |= 0x10u;
      v6 = *a2;
      v5 = (char *)a2[2];
      v9 = 0;
      result = ASN1_mbstring_copy((int)(uintptr_t)(&v7), v5, v6, v4, 0x2000);
      if ( result >= 0 )
      {
        *a1 = v9;
        return v8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_set_default_mask  (binary VA: 0x19f2e50)
// Original: ASN1_STRING_set_default_mask
// ----------------------------------------------------------------------------
int ASN1_STRING_set_default_mask(int a1)
{
  dword_20CD720 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_get_default_mask  (binary VA: 0x19f2e70)
// Original: ASN1_STRING_get_default_mask
// ----------------------------------------------------------------------------
int ASN1_STRING_get_default_mask()
{
  return dword_20CD720;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_set_default_mask_asc  (binary VA: 0x19f2e90)
// Original: ASN1_STRING_set_default_mask_asc
// ----------------------------------------------------------------------------
int ASN1_STRING_set_default_mask_asc(const char *a1)
{
  int v1;
  int v3;
  unsigned int v4;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_endptr)) > _g4_s0 ? (12u + sizeof(_g4_t_endptr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 12u);

  if ( memcmp(a1, "MASK:", 5u) == 0 )
  {
    v1 = 0;
    if ( a1[5] != 0 )
    {
      v4 = strtoul(a1 + 5, &endptr, 0);
      if ( *endptr == 0 )
      {
        v1 = 1;
        ASN1_STRING_set_default_mask(v4);
      }
    }
  }
  else
  {
    v3 = -10241;
    if ( strcmp(a1, "nombstr") != 0 )
    {
      LOWORD(v3) = -5;
      if ( strcmp(a1, "pkix") != 0 )
      {
        v3 = 0x2000;
        if ( strcmp(a1, "utf8only") != 0 )
        {
          v1 = 0;
          if ( strcmp(a1, "default") != 0 )
            return v1;
          v3 = -1;
        }
      }
    }
    v1 = 1;
    ASN1_STRING_set_default_mask(v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_TABLE_get  (binary VA: 0x19f2fc0)
// Original: ASN1_STRING_TABLE_get
// ----------------------------------------------------------------------------
int ASN1_STRING_TABLE_get(int a1)
{
  int v1;
  int v3;
  uint32_t v4[5];

  v4[0] = a1;
  v1 = OBJ_bsearch((int)(uintptr_t)(v4), (int)(uintptr_t)(&unk_1D2DFC0), 19, 20, (int (*)(int, int))sub_19F2E10);
  if ( v1 == 0 && dword_2141E28 != 0 )
  {
    v3 = sk_find(dword_2141E28, (int)(uintptr_t)(v4));
    if ( v3 >= 0 )
      return sk_value((int *)dword_2141E28, v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_set_by_NID  (binary VA: 0x19f3060)
// Original: ASN1_STRING_set_by_NID
// ----------------------------------------------------------------------------
int ASN1_STRING_set_by_NID(int *a1, char *a2, size_t a3, int a4, int a5)
{
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v5 = a1;
  if ( a1 == nullptr )
    v5 = &v11;
  v11 = 0;
  v6 = ASN1_STRING_TABLE_get(a5);
  if ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 12);
    if ( (*(uint8_t *)(v6 + 16) & 2) == 0 )
      v7 &= dword_20CD720;
    v8 = ASN1_mbstring_ncopy((int)(uintptr_t)(v5), a2, a3, a4, v7, *(uint32_t *)(v6 + 4), *(uint32_t *)(v6 + 8));
  }
  else
  {
    v8 = ASN1_mbstring_copy((int)(uintptr_t)(v5), a2, a3, a4, dword_20CD720 & 0x2806);
  }
  v9 = 0;
  if ( v8 > 0 )
    return *v5;
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_TABLE_add  (binary VA: 0x19f3140)
// Original: ASN1_STRING_TABLE_add
// ----------------------------------------------------------------------------
int ASN1_STRING_TABLE_add(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5;
  uint32_t *v6;
  char v7;
  int v8;

  if ( dword_2141E28 == 0 )
  {
    dword_2141E28 = (int)(uintptr_t)(sk_new((int)(uintptr_t)(sub_19F2DF0)));
    if ( dword_2141E28 == 0 )
      goto LABEL_12;
  }
  v5 = a5 & 0xFFFFFFFE;
  v6 = (uint32_t *)ASN1_STRING_TABLE_get(a1);
  if ( v6 != nullptr )
  {
    v6[4] = v5 | v6[4] & 1;
    v7 = 0;
  }
  else
  {
    v6 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v6 == nullptr )
    {
LABEL_12:
      v8 = 0;
      ERR_put_error(13, 129, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v8;
    }
    *v6 = a1;
    v6[4] = v5 | 1;
    v7 = 1;
  }
  if ( a2 != -1 )
    v6[1] = a2;
  if ( a3 != -1 )
    v6[2] = a3;
  v6[3] = a4;
  v8 = 1;
  if ( v7 != 0 )
    sk_push((int *)dword_2141E28, (int)(uintptr_t)(v6));
  return v8;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_TABLE_cleanup  (binary VA: 0x19f3290)
// Original: ASN1_STRING_TABLE_cleanup
// ----------------------------------------------------------------------------
void ** ASN1_STRING_TABLE_cleanup()
{
  void **result;

  result = (void **)dword_2141E28;
  if ( dword_2141E28 != 0 )
  {
    dword_2141E28 = 0;
    return (void **)sk_pop_free(result, (void (*)(uint32_t))sub_19F2E20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: d2i_ASN1_TIME  (binary VA: 0x19f32d0)
// Original: d2i_ASN1_TIME
// ----------------------------------------------------------------------------
int d2i_ASN1_TIME(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&ASN1_TIME_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_ASN1_TIME  (binary VA: 0x19f3310)
// Original: i2d_ASN1_TIME
// ----------------------------------------------------------------------------
int i2d_ASN1_TIME(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&ASN1_TIME_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_new  (binary VA: 0x19f3350)
// Original: ASN1_TIME_new
// ----------------------------------------------------------------------------
int ASN1_TIME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ASN1_TIME_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_free  (binary VA: 0x19f3380)
// Original: ASN1_TIME_free
// ----------------------------------------------------------------------------
int ASN1_TIME_free(char a1)
{
  return ASN1_item_free(a1, ASN1_TIME_it);
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_adj  (binary VA: 0x19f33b0)
// Original: ASN1_TIME_adj
// ----------------------------------------------------------------------------
size_t * ASN1_TIME_adj(size_t *a1, time_t a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  size_t *result;
  int v9;
  typedef struct tm _g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);

  v4 = a3;
  v5 = a4;
  v6 = (int)(uintptr_t)(OPENSSL_gmtime(&a2, &v10));
  v7 = v6;
  if ( v6 != 0 )
  {
    if ( v5 == 0 && v4 == 0 || (v9 = OPENSSL_gmtime_adj(v6, v4, v5), result = nullptr, v9 != 0) )
    {
      if ( (unsigned int)(*(uint32_t *)(v7 + 20) - 50) <= 0x63 )
        return (size_t *)ASN1_UTCTIME_adj((int)(uintptr_t)(a1), a2, v4, v5);
      else
        return ASN1_GENERALIZEDTIME_adj(a1, a2, v4, v5);
    }
  }
  else
  {
    ERR_put_error(13, 217, 173, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_set  (binary VA: 0x19f3490)
// Original: ASN1_TIME_set
// ----------------------------------------------------------------------------
size_t * ASN1_TIME_set(size_t *a1, time_t a2)
{
  return ASN1_TIME_adj(a1, a2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_check  (binary VA: 0x19f34d0)
// Original: ASN1_TIME_check
// ----------------------------------------------------------------------------
int ASN1_TIME_check(int *a1)
{
  int v1;
  int result;

  v1 = a1[1];
  if ( v1 == 24 )
    return ASN1_GENERALIZEDTIME_check(a1);
  result = 0;
  if ( v1 == 23 )
    return ASN1_UTCTIME_check(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_to_generalizedtime  (binary VA: 0x19f3520)
// Original: ASN1_TIME_to_generalizedtime
// ----------------------------------------------------------------------------
int ASN1_TIME_to_generalizedtime(int a1, int *a2)
{
  int v2;
  char *v3;
  char *v4;
  int v6;
  unsigned int v7;

  v2 = 0;
  if ( ASN1_TIME_check((int *)a1) != 0 )
  {
    if ( a2 == nullptr || (v2 = *a2, *a2 == 0) )
    {
      v6 = ASN1_GENERALIZEDTIME_new();
      v2 = v6;
      if ( v6 == 0 )
        return v2;
      if ( a2 != nullptr )
        *a2 = v6;
    }
    if ( *(uint32_t *)(a1 + 4) == 24 )
    {
      if ( ASN1_STRING_set(v2, *(char **)(a1 + 8), *(uint32_t *)a1) == 0 )
        return 0;
    }
    else if ( ASN1_STRING_set(v2, nullptr, *(uint32_t *)a1 + 2) != 0 )
    {
      v3 = *(char **)(v2 + 8);
      if ( **(uint8_t **)(a1 + 8) > 0x34u )
        v4 = "19";
      else
        v4 = "20";
      v7 = *(uint32_t *)a1 + 3;
      BUF_strlcpy(v3, v4, v7);
      BUF_strlcat(v3, *(char **)(a1 + 8), v7);
    }
    else
    {
      return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_set_string  (binary VA: 0x19f3640)
// Original: ASN1_TIME_set_string
// ----------------------------------------------------------------------------
bool ASN1_TIME_set_string(int a1, char *s)
{
  bool result;
  int v3;
  typedef size_t _g4_t_v4;
  typedef int _g4_t_v5;
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v4 = strlen(s);
  v6 = s;
  v7 = 0;
  v5 = 23;
  if ( ASN1_TIME_check((int *)&v4) != 0 || (v5 = 24, v3 = ASN1_TIME_check((int *)&v4), result = false, v3 != 0) )
  {
    result = true;
    if ( a1 != 0 )
      return ASN1_STRING_copy(a1, (int)(uintptr_t)(&v4)) != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_get  (binary VA: 0x19f36f0)
// Original: ASN1_TYPE_get
// ----------------------------------------------------------------------------
int ASN1_TYPE_get(uint32_t *a1)
{
  if ( a1[1] != 0 )
    return *a1;
  else
    return 5 * (*a1 == 5);
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_set  (binary VA: 0x19f3710)
// Original: ASN1_TYPE_set
// ----------------------------------------------------------------------------
uint32_t * ASN1_TYPE_set(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *result;

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1[1] != 0 )
  {
    ASN1_primitive_free((void **)&a1, 0);
    v3 = a1;
  }
  *v3 = v4;
  if ( v4 == 1 )
  {
    result = (uint32_t *)(uint8_t)-(v5 != 0);
    a1[1] = (uint32_t)(uintptr_t)(result);
  }
  else
  {
    result = a1;
    a1[1] = v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_set1  (binary VA: 0x19f3790)
// Original: ASN1_TYPE_set1
// ----------------------------------------------------------------------------
int ASN1_TYPE_set1(uint32_t *a1, int a2, int a3)
{
  void **v3;
  int v4;
  size_t *v6;

  v3 = (void **)a3;
  if ( a3 == 0 || a2 == 1 )
    goto LABEL_5;
  if ( a2 == 6 )
  {
    v6 = OBJ_dup(a3);
    v4 = 0;
    if ( v6 != nullptr )
    {
      ASN1_TYPE_set(a1, 6, (int)(uintptr_t)(v6));
      return 1;
    }
  }
  else
  {
    v3 = ASN1_STRING_dup(a3);
    v4 = 0;
    if ( v3 != nullptr )
    {
LABEL_5:
      ASN1_TYPE_set(a1, a2, (int)(uintptr_t)(v3));
      return 1;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_cmp  (binary VA: 0x19f3830)
// Original: ASN1_TYPE_cmp
// ----------------------------------------------------------------------------
int ASN1_TYPE_cmp(int *a1, uint32_t *a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  if ( a2 == nullptr || a1 == nullptr )
    return -1;
  v2 = *a1;
  result = -1;
  if ( *a1 == *a2 )
  {
    result = 0;
    if ( v2 != 5 )
    {
      v5 = a2[1];
      v4 = a1[1];
      if ( v2 == 6 )
        return OBJ_cmp(v4, v5);
      else
        return ASN1_STRING_cmp(v4, v5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_check  (binary VA: 0x19f38b0)
// Original: ASN1_UTCTIME_check
// ----------------------------------------------------------------------------
int ASN1_UTCTIME_check(int *a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  char v5; // si
  int v6;
  char v7;
  char v8;
  char v9; // bp
  char v10; // si
  int v11;
  char v12;

  result = 0;
  if ( a1[1] != 23 )
    return result;
  v2 = *a1;
  v3 = a1[2];
  v4 = 0;
  if ( *a1 <= 10 )
    return result;
  while ( 1 )
  {
    do
    {
      v12 = *(uint8_t *)(v3 + v4);
      if ( (uint8_t)(v12 - 48) > 9u )
        return 0;
      v5 = *(uint8_t *)(v3 + v4 + 1);
      if ( (uint8_t)(v5 - 48) > 9u )
        return 0;
      v4 += 2;
      if ( v2 < v4 )
        return 0;
      v6 = v5 + 2 * (5 * v12 - 240) - 48;
      if ( v6 < dword_1D2E140[result] || v6 > dword_1D2E160[result] )
        return 0;
      if ( ++result == 6 )
        goto LABEL_15;
    }
    while ( result != 5 );
    v7 = *(uint8_t *)(v3 + v4);
    if ( v7 == 43 || v7 == 90 )
      break;
    if ( v7 == 45 )
      goto LABEL_18;
  }
LABEL_15:
  v8 = *(uint8_t *)(v3 + v4);
  if ( v8 == 90 )
    return ++v4 == v2;
  if ( v8 != 45 && v8 != 43 )
    return v4 == v2;
LABEL_18:
  result = 0;
  if ( v2 <= v4 + 4 )
    return result;
  ++v4;
  while ( 1 )
  {
    v9 = *(uint8_t *)(v3 + v4);
    if ( (uint8_t)(v9 - 48) > 9u )
      break;
    v10 = *(uint8_t *)(v3 + v4 + 1);
    if ( (uint8_t)(v10 - 48) > 9u )
      break;
    v11 = v10 + 2 * (5 * v9 - 240) - 48;
    if ( v11 < *(int *)((char *)&dword_1D2E158 + result) || v11 > *(int *)((char *)&dword_1D2E178 + result) )
      break;
    result += 4;
    v4 += 2;
    if ( result == 8 )
    {
      v2 = *a1;
      return v4 == v2;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_set_string  (binary VA: 0x19f3a30)
// Original: ASN1_UTCTIME_set_string
// ----------------------------------------------------------------------------
int ASN1_UTCTIME_set_string(int a1, char *s)
{
  int v2;
  int v3;
  int v4;
  size_t v6[4];

  v6[1] = 23;
  v6[0] = strlen(s);
  v6[2] = (size_t)s;
  v2 = ASN1_UTCTIME_check((int *)v6);
  v3 = 0;
  if ( v2 != 0 )
  {
    LOBYTE(v3) = 1;
    if ( a1 != 0 )
    {
      v4 = ASN1_STRING_set(a1, s, v6[0]);
      v3 = 0;
      if ( v4 != 0 )
      {
        *(uint32_t *)(a1 + 4) = 23;
        LOBYTE(v3) = 1;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_adj  (binary VA: 0x19f3ac0)
// Original: ASN1_UTCTIME_adj
// ----------------------------------------------------------------------------
size_t * ASN1_UTCTIME_adj(size_t *a1, time_t a2, int a3, int a4)
{
  size_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint8_t *s;
  typedef struct tm _g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);

  v4 = a1;
  v5 = a4;
  if ( a1 != nullptr || (v4 = (size_t *)(ASN1_STRING_type_new(23))) != nullptr )
  {
    v6 = (uint32_t *)OPENSSL_gmtime(&a2, &v10);
    if ( v6 == nullptr || (v5 != 0 || a3 != 0) && OPENSSL_gmtime_adj(v6, a3, v5) == 0 )
      return nullptr;
    v7 = v6[5];
    if ( (unsigned int)(v7 - 50) > 0x63 )
    {
      return nullptr;
    }
    else
    {
      s = (uint8_t *)v4[2];
      if ( s == nullptr || *v4 <= 0x13 )
      {
        s = CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( s == nullptr )
        {
          v4 = nullptr;
          ERR_put_error(13, 218, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          return v4;
        }
        if ( v4[2] != 0 )
          CRYPTO_free((void *)v4[2]);
        v4[2] = (size_t)s;
        v7 = v6[5];
      }
      BIO_snprintf(s, 20, "%02d%02d%02d%02d%02d%02dZ", v7 % 100, v6[4] + 1, v6[3], v6[2], v6[1], *v6);
      *v4 = strlen(s);
      v4[1] = 23;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_set  (binary VA: 0x19f3ca0)
// Original: ASN1_UTCTIME_set
// ----------------------------------------------------------------------------
size_t * ASN1_UTCTIME_set(size_t *a1, time_t a2)
{
  return ASN1_UTCTIME_adj(a1, a2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_cmp_time_t  (binary VA: 0x19f3ce0)
// Original: ASN1_UTCTIME_cmp_time_t
// ----------------------------------------------------------------------------
bool ASN1_UTCTIME_cmp_time_t(int a1, time_t a2)
{
  int v2;
  uint8_t *v3;
  char v4;
  int v5;
  int *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef struct tm _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);

  v2 = 0;
  v3 = *(uint8_t **)(a1 + 8);
  v4 = v3[12];
  if ( v4 != 90 )
  {
    v5 = 60 * ((uint8_t)v3[14] + 10 * (uint8_t)v3[13] - 480)
       + (uint8_t)v3[16]
       + 10 * (uint8_t)v3[15]
       - 528
       - 2880;
    if ( v4 == 45 )
      v2 = 60 * v5;
    else
      v2 = -60 * v5;
  }
  a2 += v2;
  v6 = (int *)OPENSSL_gmtime(&a2, &v17);
  v7 = *(uint8_t **)(a1 + 8);
  v8 = v7[1] + 10 * *v7 - 528;
  if ( v7[1] + 10 * (unsigned int)*v7 <= 0x241 )
    v8 = v7[1] + 10 * *v7 - 480 + 52;
  v9 = -1;
  if ( v8 >= v6[5] )
  {
    v9 = 1;
    if ( v8 <= v6[5] )
    {
      v10 = v6[4];
      v9 = -1;
      if ( v7[3] + 10 * v7[2] - 528 > v10 )
      {
        v9 = 1;
        if ( v10 >= v7[3] + 10 * v7[2] - 529 )
        {
          v11 = v6[3];
          v9 = -1;
          if ( v7[5] + 10 * v7[4] - 527 > v11 )
          {
            v9 = 1;
            if ( v11 >= v7[5] + 10 * v7[4] - 528 )
            {
              v12 = v6[2];
              v9 = -1;
              if ( v7[7] + 10 * v7[6] - 527 > v12 )
              {
                v9 = 1;
                if ( v12 >= v7[7] + 10 * v7[6] - 528 )
                {
                  v13 = v6[1];
                  v9 = -1;
                  if ( v7[9] + 10 * v7[8] - 527 > v13 )
                  {
                    v9 = 1;
                    if ( v13 >= v7[9] + 10 * v7[8] - 528 )
                    {
                      v14 = *v6;
                      v15 = v7[11] + 10 * v7[10] - 480;
                      v9 = -1;
                      if ( v15 - 47 > v14 )
                        return v14 < v15 - 48;
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
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ASN1_verify  (binary VA: 0x19f4430)
// Original: ASN1_verify
// ----------------------------------------------------------------------------
int ASN1_verify(int (*a1)(int, uint8_t **), int *a2, int *a3, int a4, uint32_t *a5)
{
  unsigned int v5;
  char *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  typedef uint8_t *_g4_t_v12;
  typedef uint32_t *_g4_t_digestbyname;
  typedef uint8_t *_g4_t_v14;
  typedef int _g4_t_v15[13];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_digestbyname)) > _g4_s1 ? (40u + sizeof(_g4_t_digestbyname)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v14)) > _g4_s2 ? (52u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v15)) > _g4_s3 ? (56u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_digestbyname &digestbyname = *reinterpret_cast<_g4_t_digestbyname *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);

  EVP_MD_CTX_init(v15);
  v5 = OBJ_obj2nid(*a2);
  v6 = OBJ_nid2sn(v5);
  digestbyname = (uint32_t *)EVP_get_digestbyname((int)(uintptr_t)(v6));
  if ( digestbyname != nullptr )
  {
    v7 = a1(a4, nullptr);
    v8 = CRYPTO_malloc(v7, (int)(uintptr_t)(&unk_1B15112), 0);
    v9 = v8;
    if ( v8 != nullptr )
    {
      v14 = v8;
      a1(a4, &v14);
      EVP_DigestInit_ex((int)(uintptr_t)(v15), digestbyname, nullptr);
      EVP_DigestUpdate((int)(uintptr_t)(v15), (int)(uintptr_t)(v9), v7);
      OPENSSL_cleanse(v9, v7);
      v12 = v9;
      v10 = 1;
      CRYPTO_free(v12);
      if ( EVP_VerifyFinal(v15, a3[2], *a3, a5) <= 0 )
      {
        LOWORD(v10) = 0;
        ERR_put_error(13, 137, 6, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      v10 = -1;
      ERR_put_error(13, 137, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v10 = -1;
    ERR_put_error(13, 137, 161, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v15));
  return v10;
}

// ----------------------------------------------------------------------------
// Function: ASN1_item_verify  (binary VA: 0x19f45f0)
// Original: ASN1_item_verify
// ----------------------------------------------------------------------------
int ASN1_item_verify(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5;
  char *v6;
  uint32_t *digestbyname;
  int v8;
  int v9;
  typedef size_t _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[13];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v12)) > _g4_s1 ? (44u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v13)) > _g4_s2 ? (48u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v14)) > _g4_s3 ? (52u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v15)) > _g4_s4 ? (56u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);

  v12 = nullptr;
  EVP_MD_CTX_init(v15);
  v5 = OBJ_obj2nid(*a2);
  if ( OBJ_find_sigid_algs(v5, &v13, &v14) != 0 )
  {
    v6 = OBJ_nid2sn(v13);
    digestbyname = (uint32_t *)EVP_get_digestbyname((int)(uintptr_t)(v6));
    if ( digestbyname != nullptr )
    {
      if ( EVP_PKEY_type(v14) == **(uint32_t **)(a5 + 12) )
      {
        if ( EVP_DigestInit_ex((int)(uintptr_t)(v15), digestbyname, nullptr) != 0 )
        {
          v8 = ASN1_item_i2d(a4, &v12, a1);
          if ( v12 != nullptr )
          {
            EVP_DigestUpdate((int)(uintptr_t)(v15), (int)(uintptr_t)(v12), v8);
            v11 = v8;
            v9 = 1;
            OPENSSL_cleanse((uint8_t *)v12, v11);
            CRYPTO_free(v12);
            if ( EVP_VerifyFinal(v15, a3[2], *a3, (uint32_t *)a5) <= 0 )
            {
              LOWORD(v9) = 0;
              ERR_put_error(13, 197, 6, (int)(uintptr_t)(&unk_1B15112), 0);
            }
          }
          else
          {
            v9 = -1;
            ERR_put_error(13, 197, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          }
        }
        else
        {
          v9 = 0;
          ERR_put_error(13, 197, 6, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
      else
      {
        v9 = -1;
        ERR_put_error(13, 197, 200, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      v9 = -1;
      ERR_put_error(13, 197, 161, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v9 = -1;
    ERR_put_error(13, 197, 199, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v15));
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ERR_load_ASN1_strings  (binary VA: 0x19f4880)
// Original: ERR_load_ASN1_strings
// ----------------------------------------------------------------------------
int ERR_load_ASN1_strings()
{
  int result;

  result = ERR_func_error_string(dword_20CD740);
  if ( result == 0 )
  {
    ERR_load_strings(0, &dword_20CD740);
    return ERR_load_strings(0, &dword_20CDB00);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_tag2str  (binary VA: 0x19f48e0)
// Original: ASN1_tag2str
// ----------------------------------------------------------------------------
const char * ASN1_tag2str(unsigned int a1)
{
  unsigned int v1;
  const char *result;

  v1 = a1;
  if ( a1 == 266 || a1 == 258 )
    BYTE1(v1) = BYTE1(a1) & 0xFE;
  result = "(unknown)";
  if ( v1 <= 0x1E )
    return (const char *)(uintptr_t)(off_2045960[v1]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_parse_dump  (binary VA: 0x19f54b0)
// Original: ASN1_parse_dump
// ----------------------------------------------------------------------------
int ASN1_parse_dump(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  return sub_19F4920(a1, &a2, a3, 0, 0, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: ASN1_parse  (binary VA: 0x19f54f0)
// Original: ASN1_parse
// ----------------------------------------------------------------------------
int ASN1_parse(uint32_t *a1, int a2, int a3, int a4)
{
  return sub_19F4920(a1, &a2, a3, 0, 0, a4, 0);
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_set_octetstring  (binary VA: 0x19f5530)
// Original: ASN1_TYPE_set_octetstring
// ----------------------------------------------------------------------------
int ASN1_TYPE_set_octetstring(uint32_t *a1, char *s, size_t a3)
{
  uint32_t *v3;
  int v4;
  int v5;

  v3 = ASN1_STRING_type_new(4);
  v4 = 0;
  v5 = (int)(uintptr_t)(v3);
  if ( v3 != nullptr && ASN1_STRING_set((int)(uintptr_t)(v3), s, a3) != 0 )
  {
    LOWORD(v4) = 1;
    ASN1_TYPE_set(a1, 4, v5);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_get_octetstring  (binary VA: 0x19f55b0)
// Original: ASN1_TYPE_get_octetstring
// ----------------------------------------------------------------------------
int ASN1_TYPE_get_octetstring(uint32_t *a1, void *dest, int a3)
{
  size_t n;
  int v4;
  int v5;

  n = a3;
  if ( *a1 == 4 && (v4 = a1[1]) != 0 )
  {
    v5 = *(uint32_t *)v4;
    if ( a3 > *(uint32_t *)v4 )
      n = *(uint32_t *)v4;
    memcpy(dest, *(const void **)(v4 + 8), n);
  }
  else
  {
    v5 = -1;
    ERR_put_error(13, 135, 109, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_set_int_octetstring  (binary VA: 0x19f5640)
// Original: ASN1_TYPE_set_int_octetstring
// ----------------------------------------------------------------------------
int ASN1_TYPE_set_int_octetstring(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef void *_g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[4];
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v14)) > _g4_s5 ? (64u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v13[2] = (uint32_t)(uintptr_t)(&v14);
  v12[2] = a3;
  v12[0] = a4;
  v13[0] = 32;
  v12[1] = 4;
  ASN1_INTEGER_set((int)(uintptr_t)(v13), a2);
  v4 = i2d_ASN1_INTEGER((int)(uintptr_t)(v13), nullptr);
  v9 = v4 + i2d_ASN1_bytes(v12, 0, 4, 0);
  v10 = ASN1_object_size(1, v9, 16);
  v5 = ASN1_STRING_new();
  v6 = 0;
  v7 = (int)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    if ( ASN1_STRING_set((int)(uintptr_t)(v5), nullptr, v10) != 0 )
    {
      *(uint32_t *)v7 = v10;
      v11 = *(void **)(v7 + 8);
      ASN1_put_object((uint8_t **)&v11, 1, v9, 16, 0);
      i2d_ASN1_INTEGER((int)(uintptr_t)(v13), &v11);
      i2d_ASN1_bytes(v12, &v11, 4, 0);
      ASN1_TYPE_set(a1, 16, v7);
      return 1;
    }
    else
    {
      ASN1_STRING_free((void **)v7);
      return 0;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TYPE_get_int_octetstring  (binary VA: 0x19f5810)
// Original: ASN1_TYPE_get_int_octetstring
// ----------------------------------------------------------------------------
int ASN1_TYPE_get_int_octetstring(uint32_t *a1, int *a2, void *dest, int a4)
{
  int *v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  size_t n;
  char *v13;
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16[3];
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char **_g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v20)) > _g4_s6 ? (52u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v21)) > _g4_s7 ? (56u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v22)) > _g4_s8 ? (60u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);

  if ( *a1 != 16 || (v4 = (int *)a1[1]) == nullptr )
  {
    v6 = nullptr;
    goto LABEL_21;
  }
  v14 = (char *)v4[2];
  v5 = *v4;
  v16[0] = v14;
  v15 = v5;
  v21 = &v14;
  v19 = &v14[v5];
  v16[2] = (char *)((uint8_t *)(dword_6C + 1));
  if ( asn1_GetSequence((int)(uintptr_t)(v16), &v15) == 0 )
  {
    v22 = 160;
    v6 = nullptr;
LABEL_21:
    v10 = -1;
    ERR_put_error(13, 134, 109, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_16;
  }
  v20 = v16[0];
  v6 = (int *)d2i_ASN1_INTEGER(nullptr, v16, v18);
  if ( v6 == nullptr )
    goto LABEL_21;
  v18 += v20 - v16[0];
  v20 = v16[0];
  v7 = d2i_ASN1_OCTET_STRING(nullptr, v16, v18);
  if ( v7 == 0 )
    goto LABEL_21;
  v8 = v18 + v20 - v16[0];
  v18 = v8;
  if ( (v17 & 1) != 0 )
  {
    LOBYTE(v13) = ASN1_const_check_infinite_end(v16, v8);
    v16[1] = v13;
    v9 = v13 == nullptr;
  }
  else
  {
    v9 = v8 > 0;
  }
  if ( v9 )
  {
    v10 = -1;
    ERR_put_error(13, 134, 109, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    if ( a2 != nullptr )
      *a2 = ASN1_INTEGER_get(v6);
    v10 = *(uint32_t *)v7;
    if ( dest != nullptr )
    {
      n = a4;
      if ( a4 > v10 )
        n = *(uint32_t *)v7;
      memcpy(dest, *(const void **)(v7 + 8), n);
    }
  }
  ASN1_STRING_free((void **)v7);
LABEL_16:
  if ( v6 != nullptr )
    ASN1_STRING_free((void **)v6);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: i2d_PrivateKey  (binary VA: 0x19f5a20)
// Original: i2d_PrivateKey
// ----------------------------------------------------------------------------
int i2d_PrivateKey(int a1, int a2)
{
  int v2;
  int (*v3)(int, int);
  uint32_t *v5;
  char v6; // di
  int v7;

  v2 = *(uint32_t *)(a1 + 12);
  if ( v2 == 0 )
  {
LABEL_7:
    ERR_put_error(13, 163, 167, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  v3 = *(int (**)(int, int))(v2 + 92);
  if ( v3 == nullptr )
  {
    if ( *(uint32_t *)(v2 + 40) != 0 )
    {
      v5 = EVP_PKEY2PKCS8(a1);
      v6 = (char)(uintptr_t)(v5);
      v7 = i2d_PKCS8_PRIV_KEY_INFO((int)(uintptr_t)(v5), a2);
      PKCS8_PRIV_KEY_INFO_free(v6);
      return v7;
    }
    goto LABEL_7;
  }
  return v3(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: d2i_NETSCAPE_CERT_SEQUENCE  (binary VA: 0x19f5b30)
// Original: d2i_NETSCAPE_CERT_SEQUENCE
// ----------------------------------------------------------------------------
int d2i_NETSCAPE_CERT_SEQUENCE(int *a1, char **a2, int a3)
{
  return ASN1_item_d2i(a1, a2, a3, (int)(uintptr_t)(&NETSCAPE_CERT_SEQUENCE_it));
}

// ----------------------------------------------------------------------------
// Function: i2d_NETSCAPE_CERT_SEQUENCE  (binary VA: 0x19f5b70)
// Original: i2d_NETSCAPE_CERT_SEQUENCE
// ----------------------------------------------------------------------------
int i2d_NETSCAPE_CERT_SEQUENCE(int a1, void **a2)
{
  return ASN1_item_i2d(a1, a2, (int)(uintptr_t)(&NETSCAPE_CERT_SEQUENCE_it));
}

// ----------------------------------------------------------------------------
// Function: ASN1_bn_print  (binary VA: 0x19f5c10)
// Original: ASN1_bn_print
// ----------------------------------------------------------------------------
bool ASN1_bn_print(uint32_t *a1, int a2, uint32_t **a3, uint8_t *a4, int a5)
{
  int v5;
  const char *v6;
  int v7;
  int v9;
  bool v10;
  const char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void *v16;
  int v17;

  v5 = 1;
  if ( a3 != nullptr )
  {
    v6 = "-";
    if ( a3[3] == nullptr )
      v6 = (const char *)&unk_1B15112;
    LOWORD(v5) = 0;
    if ( BIO_indent(a1, a5, 128) != 0 )
    {
      if ( a3[1] != nullptr )
      {
        if ( BN_num_bits(a3) <= 32 )
        {
          return BIO_printf(a2, v9, (int)(uintptr_t)(a1), "%s %s%lu (%s0x%lx)\n", a2, v6, **a3, v6, **a3) > 0;
        }
        else
        {
          v10 = *v6 == 45;
          *a4 = 0;
          v11 = " (Negative)";
          if ( !v10 )
            v11 = (const char *)&unk_1B15112;
          if ( BIO_printf((int)(uintptr_t)(a3), v9, (int)(uintptr_t)(a1), "%s%s", a2, v11) > 0 )
          {
            v17 = (int)(uintptr_t)(a4 + 1);
            v12 = BN_bn2bin(a3, a4 + 1);
            v14 = v12;
            if ( (char)a4[1] < 0 )
            {
              v14 = v12 + 1;
              v17 = (int)(uintptr_t)(a4);
            }
            if ( v14 <= 0 )
            {
              return BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) > 0;
            }
            else
            {
              v15 = 0;
              while ( v15 != 15 * (v15 / 15) || BIO_puts(a1, (int)(uintptr_t)(&a0[1])) > 0 && BIO_indent(a1, a5 + 4, 128) != 0 )
              {
                v16 = (void *)(++v15 == v14 ? (const char *)&unk_1B15112 : ":");
                if ( BIO_printf(v17, v13, (int)(uintptr_t)(a1), "%02x%s", *(uint8_t *)(v17 + v15 - 1), v16) <= 0 )
                  break;
                if ( v15 == v14 )
                  return BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) > 0;
              }
              return false;
            }
          }
        }
      }
      else
      {
        return BIO_printf(a2, v7, (int)(uintptr_t)(a1), "%s 0\n", a2) > 0;
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_ocspid_print  (binary VA: 0x19f5e70)
// Original: X509_ocspid_print
// ----------------------------------------------------------------------------
int X509_ocspid_print(int a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v5;
  const char *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int *v10;
  int v11;
  int v12;
  typedef size_t _g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v4 = 0;
  if ( BIO_printf(a2, a1, a3, "        Subject OCSP hash: ") > 0 )
  {
    v14 = i2d_X509_NAME(*(uint32_t *)(*(uint32_t *)a4 + 20), nullptr);
    v15 = CRYPTO_malloc(v14, (int)(uintptr_t)(&unk_1B15112), 0);
    v16 = v15;
    if ( v15 != nullptr )
    {
      i2d_X509_NAME(*(uint32_t *)(*(uint32_t *)a4 + 20), &v16);
      v5 = (uint32_t *)(EVP_sha1());
      EVP_Digest((int)(uintptr_t)(v15), v14, (int)(uintptr_t)(v17), nullptr, v5, nullptr);
      v6 = "%02X";
      do
      {
        if ( BIO_printf((int)(uintptr_t)(v6), (int)(uintptr_t)("%02X"), a3, "%02X", (uint8_t)v17[v4]) <= 0 )
        {
          CRYPTO_free(v15);
          return 0;
        }
        ++v4;
      }
      while ( v4 != 20 );
      LOWORD(v4) = 0;
      CRYPTO_free(v15);
      if ( BIO_printf(v7, v8, a3, "\n        Public key OCSP hash: ") > 0 )
      {
        v9 = (uint32_t *)(EVP_sha1());
        v10 = *(int **)(*(uint32_t *)(*(uint32_t *)a4 + 24) + 4);
        EVP_Digest(v10[2], *v10, (int)(uintptr_t)(v17), nullptr, v9, nullptr);
        while ( BIO_printf((int)(uintptr_t)("%02X"), v11, a3, "%02X", (uint8_t)v17[v4]) > 0 )
        {
          if ( ++v4 == 20 )
          {
            LOWORD(v4) = 1;
            BIO_printf(v12, v11, a3, (char *)&a0[1]);
            return v4;
          }
        }
        return 0;
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: X509_signature_print  (binary VA: 0x19f6050)
// Original: X509_signature_print
// ----------------------------------------------------------------------------
bool X509_signature_print(uint32_t *a1, int *a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  void *v6;
  int v8;

  v3 = 0;
  if ( BIO_puts(a1, (int)(uintptr_t)("    Signature Algorithm: ")) <= 0 || i2a_ASN1_OBJECT(a1, *a2) <= 0 )
    return false;
  v5 = *a3;
  v8 = a3[2];
  if ( *a3 > 0 )
  {
    while ( v3 != 18 * (v3 / 18) || BIO_write(a1, (int)(uintptr_t)("\n        "), 9) > 0 )
    {
      v6 = (void *)(++v3 == v5 ? (const char *)&unk_1B15112 : ":");
      if ( BIO_printf(v8, v4, (int)(uintptr_t)(a1), "%02x%s", *(uint8_t *)(v8 + v3 - 1), v6) <= 0 )
        break;
      if ( v3 == v5 )
        return BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) == 1;
    }
    return false;
  }
  return BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) == 1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_STRING_print  (binary VA: 0x19f6190)
// Original: ASN1_STRING_print
// ----------------------------------------------------------------------------
bool ASN1_STRING_print(uint32_t *a1, int *a2)
{
  bool result;
  int v3;
  int v4;
  int v5;
  char v6;
  uint8_t v7[108];

  result = false;
  if ( a2 != nullptr )
  {
    v3 = a2[2];
    result = true;
    if ( *a2 > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        while ( 1 )
        {
          v6 = *(uint8_t *)(v3 + v5);
          if ( v6 == 127 )
          {
            v6 = 46;
          }
          else if ( v6 != 10 && v6 <= 31 && v6 != 13 )
          {
            v6 = 46;
          }
          v7[v4++] = v6;
          if ( v4 > 79 )
            break;
          if ( *a2 <= ++v5 )
            goto LABEL_13;
        }
        if ( BIO_write(a1, (int)(uintptr_t)(v7), v4) <= 0 )
          return false;
        v4 = 0;
        ++v5;
      }
      while ( *a2 > v5 );
LABEL_13:
      result = true;
      if ( v4 != 0 )
        return BIO_write(a1, (int)(uintptr_t)(v7), v4) > 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_GENERALIZEDTIME_print  (binary VA: 0x19f6280)
// Original: ASN1_GENERALIZEDTIME_print
// ----------------------------------------------------------------------------
bool ASN1_GENERALIZEDTIME_print(uint32_t *a1, int *a2)
{
  int v2;
  char *v3;
  int v4;
  char *v5;
  unsigned int v6;
  char v7;
  char v8;
  uint8_t *v9;
  int v10;
  char v11;
  char v12;
  const char *v14;
  int v15;
  char v16;
  char v17;
  char v18;
  char v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v2 = *a2;
  v3 = (char *)a2[2];
  if ( *a2 > 11 )
  {
    v4 = 0;
    v16 = v3[v2 - 1];
    v5 = (char *)a2[2];
    while ( (uint8_t)(v3[v4] - 48) <= 9u )
    {
      if ( ++v4 == 12 )
      {
        v17 = *v3;
        v18 = v3[1];
        v19 = v3[2];
        v20 = v3[3];
        v6 = v3[5] + 10 * v3[4] - 529;
        if ( v6 > 0xB )
          break;
        v21 = v5[7] + 10 * v5[6] - 528;
        v22 = v5[9] + 10 * v5[8] - 528;
        v23 = v5[11] + 10 * v5[10] - 528;
        if ( v2 <= 13 || (v7 = v5[12]) <= 47 || v7 > 57 || (v8 = v5[13]) <= 47 || v8 > 57 )
        {
          v10 = 0;
          v9 = nullptr;
          v24 = 0;
        }
        else
        {
          v9 = nullptr;
          v24 = v5[13] + 10 * v5[12] - 528;
          v10 = 0;
          if ( v2 != 14 && v3[14] == 46 )
          {
            v9 = (uint8_t *)(v3 + 14);
            LOWORD(v10) = 1;
            if ( v2 != 15 )
            {
              v11 = v3[15];
              if ( v11 > 47 && v11 <= 57 )
              {
                v25 = v2 - 14;
                do
                {
                  if ( ++v10 == v25 )
                    break;
                  v12 = v3[v10 + 14];
                  if ( v12 <= 47 )
                    break;
                }
                while ( v12 <= 57 );
              }
            }
          }
        }
        v14 = " GMT";
        if ( v16 != 90 )
          v14 = (const char *)&unk_1B15112;
        v15 = 1000 * v17 + 100 * v18 - 52800 + 10 * v19 - 480;
        return BIO_printf(
                 v15,
                 v21,
                 (int)(uintptr_t)(a1),
                 "%s %2d %02d:%02d:%02d%.*s %d%s",
                 (&off_2045A20)[v6],
                 v21,
                 v22,
                 v23,
                 v24,
                 v10,
                 v9,
                 v15 + v20 - 48,
                 v14) > 0;
      }
    }
  }
  BIO_write(a1, (int)(uintptr_t)("Bad time value"), 14);
  return false;
}

// ----------------------------------------------------------------------------
// Function: ASN1_UTCTIME_print  (binary VA: 0x19f6500)
// Original: ASN1_UTCTIME_print
// ----------------------------------------------------------------------------
bool ASN1_UTCTIME_print(uint32_t *a1, int *a2)
{
  int v2;
  char *v3;
  int v4;
  char *v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  char v10;
  char v11;
  const char *v12;
  int v14;
  int v15;
  char v16;

  v2 = *a2;
  if ( *a2 > 9 )
  {
    v3 = (char *)a2[2];
    v16 = v3[v2 - 1];
    v4 = 0;
    while ( (uint8_t)(v3[v4] - 48) <= 9u )
    {
      if ( ++v4 == 10 )
      {
        v5 = (char *)a2[2];
        v6 = v3[1] + 10 * *v3 - 528;
        if ( v6 <= 49 )
          v6 += 100;
        v7 = v3[3] + 10 * v3[2] - 529;
        if ( v7 <= 0xB )
        {
          v14 = v5[5] + 10 * v5[4] - 528;
          v15 = v5[7] + 10 * v5[6] - 528;
          v8 = v5[9] + 10 * v5[8] - 528;
          v9 = 0;
          if ( v2 > 11 )
          {
            v10 = v5[10];
            if ( v10 > 47 && v10 <= 57 )
            {
              v11 = v5[11];
              if ( v11 > 47 && v11 <= 57 )
                v9 = v11 + 10 * v10 - 528;
            }
          }
          v12 = " GMT";
          if ( v16 != 90 )
            v12 = (const char *)&unk_1B15112;
          return BIO_printf(
                   (int)(uintptr_t)(&unk_1B15112),
                   v14,
                   (int)(uintptr_t)(a1),
                   "%s %2d %02d:%02d:%02d %d%s",
                   (&off_2045A20)[v7],
                   v14,
                   v15,
                   v8,
                   v9,
                   v6 + 1900,
                   v12) > 0;
        }
        break;
      }
    }
  }
  BIO_write(a1, (int)(uintptr_t)("Bad time value"), 14);
  return false;
}

// ----------------------------------------------------------------------------
// Function: ASN1_TIME_print  (binary VA: 0x19f66a0)
// Original: ASN1_TIME_print
// ----------------------------------------------------------------------------
bool ASN1_TIME_print(uint32_t *a1, int *a2)
{
  int v2;

  v2 = a2[1];
  if ( v2 == 23 )
    return ASN1_UTCTIME_print(a1, a2);
  if ( v2 == 24 )
    return ASN1_GENERALIZEDTIME_print(a1, a2);
  BIO_write(a1, (int)(uintptr_t)("Bad time value"), 14);
  return false;
}

// ----------------------------------------------------------------------------
// Function: X509_print_ex  (binary VA: 0x19f6710)
// Original: X509_print_ex
// ----------------------------------------------------------------------------
bool X509_print_ex(uint32_t *a1, int a2, unsigned int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  char v7;
  int v8;
  int v10;
  int *serialNumber;
  int v12;
  bool v13;
  const char *v14;
  int v15;
  int issuer_name;
  int v17;
  uint32_t *pubkey;
  int v19;
  void *v20;
  int subject_name;
  int v22;
  int v23;
  const char *v24;
  int *v25;
  char v26;
  int **v27;

  v4 = 0;
  v5 = a3;
  v6 = a4;
  if ( (a3 & 0xF0000) == 0x40000 )
    v4 = 12;
  v7 = 32;
  if ( (a3 & 0xF0000) == 0x40000 )
    v7 = 10;
  v26 = v7;
  if ( a3 == 0 )
    v4 = 16;
  v27 = *(int ***)a2;
  if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 2) != 0 )
      goto LABEL_9;
LABEL_24:
    v8 = 0;
    v10 = ASN1_INTEGER_get(**(int ***)a2);
    if ( BIO_printf((int)(uintptr_t)(a1), (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(a1), "%8sVersion: %lu (0x%lx)\n", &unk_1B15112, v10 + 1, v10) <= 0 )
      return v8;
    if ( (a4 & 4) != 0 )
      goto LABEL_10;
    goto LABEL_26;
  }
  v8 = 0;
  if ( BIO_write(a1, (int)(uintptr_t)("Certificate:\n"), 13) <= 0 || BIO_write(a1, (int)(uintptr_t)("    Data:\n"), 10) <= 0 )
    return v8;
  if ( (a4 & 2) == 0 )
    goto LABEL_24;
LABEL_9:
  if ( (a4 & 4) != 0 )
    goto LABEL_10;
LABEL_26:
  v8 = 0;
  if ( BIO_write(a1, (int)(uintptr_t)("        Serial Number:"), 22) <= 0 )
    return v8;
  serialNumber = (int *)X509_get_serialNumber(a2);
  v12 = (int)(uintptr_t)(serialNumber);
  if ( *serialNumber > 4 )
  {
    v13 = serialNumber[1] == 258;
    v14 = " (Negative)";
    if ( !v13 )
      v14 = (const char *)&unk_1B15112;
    v25 = (int *)v12;
    v8 = 0;
    if ( BIO_printf(v12, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(a1), "\n%12s%s", &unk_1B15112, v14) > 0 )
    {
      do
      {
        if ( v8 >= *v25 )
        {
          v6 = a4;
          goto LABEL_10;
        }
        ++v8;
        v15 = 10;
        if ( *v25 != v8 )
          v15 = 58;
      }
      while ( BIO_printf((int)(uintptr_t)("%02x%c"), v5, (int)(uintptr_t)(a1), "%02x%c", *(uint8_t *)(v25[2] + v8 - 1), v15) > 0 );
      return false;
    }
    return v8;
  }
  v22 = ASN1_INTEGER_get(serialNumber);
  v24 = (const char *)&unk_1B15112;
  if ( v22 < 0 )
  {
    v22 = -v22;
    v24 = "-";
  }
  v8 = 0;
  if ( BIO_printf((int)(uintptr_t)(a1), v23, (int)(uintptr_t)(a1), " %s%lu (%s0x%lx)\n", v24, v22, v24, v22) <= 0 )
    return v8;
LABEL_10:
  if ( (v6 & 8) != 0
    || (v8 = 0, BIO_printf((int)(uintptr_t)(a1), v5, (int)(uintptr_t)(a1), "%8sSignature Algorithm: ", &unk_1B15112) > 0)
    && i2a_ASN1_OBJECT(a1, *v27[2]) > 0
    && BIO_puts(a1, (int)(uintptr_t)(&a0[1])) > 0 )
  {
    if ( (v6 & 0x10) != 0
      || (v8 = 0, BIO_printf((int)(uintptr_t)(a1), v5, (int)(uintptr_t)(a1), "        Issuer:%c", v26) > 0)
      && (issuer_name = X509_get_issuer_name(a2), X509_NAME_print_ex((int)(uintptr_t)(a1), issuer_name, v4, a3) >= 0)
      && BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) > 0 )
    {
      if ( (v6 & 0x20) != 0
        || (v8 = 0, BIO_write(a1, (int)(uintptr_t)("        Validity\n"), 17) > 0)
        && BIO_write(a1, (int)(uintptr_t)("            Not Before: "), 24) > 0
        && ASN1_TIME_print(a1, **(int ***)(*(uint32_t *)a2 + 16))
        && BIO_write(a1, (int)(uintptr_t)("\n            Not After : "), 25) > 0
        && ASN1_TIME_print(a1, *(int **)(*(uint32_t *)(*(uint32_t *)a2 + 16) + 4))
        && BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) > 0 )
      {
        if ( (v6 & 0x40) != 0
          || (v8 = 0, BIO_printf((int)(uintptr_t)(a1), v5, (int)(uintptr_t)(a1), "        Subject:%c", v26) > 0)
          && (subject_name = X509_get_subject_name(a2), X509_NAME_print_ex((int)(uintptr_t)(a1), subject_name, v4, a3) >= 0)
          && BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) > 0 )
        {
          if ( (v6 & 0x80) == 0 )
          {
            v8 = 0;
            if ( BIO_write(a1, (int)(uintptr_t)("        Subject Public Key Info:\n"), 33) <= 0 )
              return v8;
            v8 = v6 & 0x80;
            if ( BIO_printf((int)(uintptr_t)(a1), v17, (int)(uintptr_t)(a1), "%12sPublic Key Algorithm: ", &unk_1B15112) <= 0
              || i2a_ASN1_OBJECT(a1, *(uint32_t *)*v27[6]) <= 0
              || BIO_puts(a1, (int)(uintptr_t)(&a0[1])) <= 0 )
            {
              return v8;
            }
            pubkey = (uint32_t *)X509_get_pubkey(a2);
            v20 = pubkey;
            if ( pubkey != nullptr )
            {
              EVP_PKEY_print_public(a1, pubkey, 16, 0);
              EVP_PKEY_free(v20);
            }
            else
            {
              BIO_printf((int)(uintptr_t)(a1), v19, (int)(uintptr_t)(a1), "%12sUnable to load Public Key\n", &unk_1B15112);
              ERR_print_errors(a1);
            }
          }
          if ( (v6 & 0x100) == 0 )
            X509V3_extensions_print(a1, "X509v3 extensions", v27[9], v6, 8);
          if ( (v6 & 0x200) != 0 || (v8 = 0, X509_signature_print(a1, *(int **)(a2 + 4), *(int **)(a2 + 8)) > 0) )
          {
            v8 = 1;
            if ( (v6 & 0x400) == 0 )
              return X509_CERT_AUX_print(a1, *(uint32_t *)(a2 + 100), 0) != 0;
          }
        }
      }
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: X509_print  (binary VA: 0x19f6e10)
// Original: X509_print
// ----------------------------------------------------------------------------
bool X509_print(uint32_t *a1, int a2)
{
  return X509_print_ex(a1, a2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: X509_print_ex_fp  (binary VA: 0x19f6e50)
// Original: X509_print_ex_fp
// ----------------------------------------------------------------------------
bool X509_print_ex_fp(int a1, int a2, unsigned int a3, int a4)
{
  void *v4;
  uint8_t *v5;
  bool v6;

  v4 = BIO_s_file();
  v5 = BIO_new((int)(uintptr_t)(v4));
  if ( v5 != nullptr )
  {
    BIO_ctrl(v5, 106, 0, a1);
    v6 = X509_print_ex(v5, a2, a3, a4);
    BIO_free(v5);
  }
  else
  {
    v6 = false;
    ERR_put_error(11, 118, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: X509_print_fp  (binary VA: 0x19f6f20)
// Original: X509_print_fp
// ----------------------------------------------------------------------------
bool X509_print_fp(int a1, int a2)
{
  return X509_print_ex_fp(a1, a2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: X509_NAME_print  (binary VA: 0x19f6f60)
// Original: X509_NAME_print
// ----------------------------------------------------------------------------
int X509_NAME_print(uint32_t *a1, int **a2)
{
  char *v2;
  uint8_t *v3;
  char v4;
  int v5;
  uint8_t *v7;
  int v8;
  char *v9;

  v2 = X509_NAME_oneline(a2, nullptr, 0);
  v9 = v2;
  if ( *v2 == 0 )
  {
    CRYPTO_free(v2);
    return 1;
  }
  v3 = (uint8_t *)(v2 + 1);
  v8 = (int)(uintptr_t)(v2 + 1);
  v4 = v2[1];
  while ( 1 )
  {
    while ( 1 )
    {
      while ( v4 != 47 )
      {
        if ( v4 == 0 )
          goto LABEL_5;
        v4 = *++v3;
      }
      v4 = v3[1];
      v7 = v3 + 1;
      if ( (uint8_t)(v4 - 65) > 0x19u )
        goto LABEL_16;
      if ( v3[2] == 61 || (uint8_t)(v3[2] - 65) <= 0x19u && v3[3] == 61 )
        break;
      ++v3;
    }
LABEL_5:
    if ( (uint8_t *)BIO_write(a1, v8, (int)(uintptr_t)(&v3[-v8])) != &v3[-v8] )
      break;
    if ( *v3 == 0 )
    {
LABEL_7:
      v5 = 1;
      goto LABEL_8;
    }
    if ( BIO_write(a1, (int)(uintptr_t)(", "), 2) != 2 )
      break;
    v7 = v3 + 1;
    v8 = (int)(uintptr_t)(v3 + 1);
    if ( *v3 == 0 )
      goto LABEL_7;
LABEL_16:
    v4 = v3[1];
    v3 = v7;
  }
  v5 = 0;
  ERR_put_error(11, 117, 7, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_8:
  CRYPTO_free(v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509_CERT_AUX_print  (binary VA: 0x19f70e0)
// Original: X509_CERT_AUX_print
// ----------------------------------------------------------------------------
int X509_CERT_AUX_print(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  char v6; // si
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  const char *v12;
  uint32_t *v13;
  int v15;
  int v16;
  char v17; // si
  int v18;
  typedef uint32_t *_g4_t_v19;
  typedef char _g4_t_v20[108];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  v3 = a2;
  v4 = a1;
  if ( a2 == 0 )
    return 1;
  if ( *(uint32_t *)a2 != 0 )
  {
    BIO_printf((int)(uintptr_t)(&unk_1B15112), a3, (int)(uintptr_t)(a1), "%*sTrusted Uses:\n%*s", a3, &unk_1B15112, a3 + 2, &unk_1B15112);
    v5 = 0;
    v6 = 1;
    while ( v5 < sk_num(*(uint32_t *)a2) )
    {
      if ( v6 == 0 )
        BIO_puts(a1, (int)(uintptr_t)(", "));
      v7 = sk_value(*(int **)a2, v5);
      OBJ_obj2txt(v20, 80, v7, 0);
      ++v5;
      BIO_puts(a1, (int)(uintptr_t)(v20));
      v6 = 0;
    }
    v3 = a2;
    v4 = a1;
    BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
    if ( *(uint32_t *)(a2 + 4) != 0 )
    {
LABEL_20:
      BIO_printf(a3, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(v4), "%*sRejected Uses:\n%*s", a3, &unk_1B15112, a3 + 2, &unk_1B15112);
      v19 = v4;
      v15 = 0;
      v16 = v3;
      v17 = 1;
      while ( v15 < sk_num(*(uint32_t *)(v16 + 4)) )
      {
        if ( v17 == 0 )
          BIO_puts(v19, (int)(uintptr_t)(", "));
        v18 = sk_value(*(int **)(v16 + 4), v15);
        OBJ_obj2txt(v20, 80, v18, 0);
        ++v15;
        BIO_puts(v19, (int)(uintptr_t)(v20));
        v17 = 0;
      }
      v3 = v16;
      v4 = v19;
      BIO_puts(v19, (int)(uintptr_t)(&a0[1]));
      goto LABEL_9;
    }
  }
  else
  {
    BIO_printf(a3, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(a1), "%*sNo Trusted Uses.\n", a3, &unk_1B15112);
    if ( *(uint32_t *)(a2 + 4) != 0 )
      goto LABEL_20;
  }
  BIO_printf(a3, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(v4), "%*sNo Rejected Uses.\n", a3, &unk_1B15112);
LABEL_9:
  v8 = *(uint32_t *)(v3 + 8);
  if ( v8 != 0 )
    BIO_printf(a3, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(v4), "%*sAlias: %s\n", a3, &unk_1B15112, *(uint32_t *)(v8 + 8));
  if ( *(uint32_t *)(v3 + 12) != 0 )
  {
    BIO_printf(a3, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(v4), "%*sKey Id: ", a3, &unk_1B15112);
    v9 = *(uint32_t *)(v3 + 12);
    if ( *(int *)v9 > 0 )
    {
      v10 = 0;
      v11 = **(uint8_t **)(v9 + 8);
      v12 = (const char *)&unk_1B15112;
      while ( 1 )
      {
        ++v10;
        BIO_printf(v11, (int)(uintptr_t)("%s%02X"), (int)(uintptr_t)(v4), "%s%02X", v12, v11);
        v13 = *(uint32_t **)(v3 + 12);
        if ( *v13 <= v10 )
          break;
        v11 = *(uint8_t *)(v13[2] + v10);
        v12 = ":";
        if ( v10 == 0 )
          v12 = (const char *)&unk_1B15112;
      }
    }
    BIO_write(v4, (int)(uintptr_t)(&a0[1]), 1);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_new  (binary VA: 0x19f75b0)
// Original: ASN1_PCTX_new
// ----------------------------------------------------------------------------
uint32_t * ASN1_PCTX_new()
{
  uint32_t *result;

  result = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( result != nullptr )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
  }
  else
  {
    ERR_put_error(13, 205, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_free  (binary VA: 0x19f7650)
// Original: ASN1_PCTX_free
// ----------------------------------------------------------------------------
int ASN1_PCTX_free(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_get_flags  (binary VA: 0x19f7680)
// Original: ASN1_PCTX_get_flags
// ----------------------------------------------------------------------------
int ASN1_PCTX_get_flags(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: ASN1_PCTX_set_flags  (binary VA: 0x19f7690)
// Original: ASN1_PCTX_set_flags
// ----------------------------------------------------------------------------
uint32_t * ASN1_PCTX_set_flags(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}


