#include "Core/Utils/DecompTypes.h"
#include "openssl_internal_0_part03.h"

// ----------------------------------------------------------------------------
// Function: sub_19BC340  (binary VA: 0x19bc340)
// Original: sub_19BC340
// ----------------------------------------------------------------------------
int sub_19BC340(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19BC7B0  (binary VA: 0x19bc7b0)
// Original: sub_19BC7B0
// ----------------------------------------------------------------------------
void ** sub_19BC7B0(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  uint32_t *pkey_meth_engine;
  int pkey_meth;
  void **v7;
  void **v8;
  int v9;
  int (*v10)(void **);
  int *v12;
  void **v13;
  int v14;

  v3 = a3;
  if ( a3 == -1 )
  {
    if ( a1 == nullptr )
      return nullptr;
    v12 = (int *)a1[3];
    if ( v12 == nullptr )
      return nullptr;
    pkey_meth_engine = (uint32_t *)a1[4];
    v3 = *v12;
    if ( pkey_meth_engine != nullptr )
    {
LABEL_4:
      if ( ENGINE_init(pkey_meth_engine) == 0 )
      {
        v8 = nullptr;
        ERR_put_error(6, 157, 38, (int)(uintptr_t)(&unk_1B15112), 0);
        return v8;
      }
      goto LABEL_5;
    }
  }
  else if ( a1 != nullptr )
  {
    pkey_meth_engine = (uint32_t *)a1[4];
    if ( pkey_meth_engine != nullptr )
      goto LABEL_4;
  }
  if ( a2 != nullptr )
  {
    pkey_meth_engine = a2;
    goto LABEL_4;
  }
  pkey_meth_engine = (uint32_t *)ENGINE_get_pkey_meth_engine(v3);
  if ( pkey_meth_engine != nullptr )
  {
LABEL_5:
    pkey_meth = ENGINE_get_pkey_meth((int)(uintptr_t)(pkey_meth_engine), v3);
    goto LABEL_6;
  }
  pkey_meth = EVP_PKEY_meth_find(v3);
LABEL_6:
  if ( pkey_meth != 0 )
  {
    v14 = pkey_meth;
    v7 = (void **)CRYPTO_malloc(40, (int)(uintptr_t)(&unk_1B15112), 0);
    v8 = v7;
    v9 = v14;
    if ( v7 != nullptr )
    {
      v7[1] = pkey_meth_engine;
      *v7 = (void *)v14;
      v7[4] = nullptr;
      v7[2] = a1;
      v7[3] = nullptr;
      v7[7] = nullptr;
      if ( a1 != nullptr )
      {
        CRYPTO_add_lock(a1 + 2, 1, 10, (int)(uintptr_t)(&unk_1B15112), 0);
        v9 = v14;
      }
      v8[5] = nullptr;
      v10 = *(int (**)(void **))(v9 + 8);
      if ( v10 != nullptr && v10(v8) <= 0 )
      {
        v13 = v8;
        v8 = nullptr;
        EVP_PKEY_CTX_free(v13);
      }
    }
    else
    {
      if ( pkey_meth_engine != nullptr )
        ENGINE_finish(pkey_meth_engine);
      ERR_put_error(6, 157, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v8 = nullptr;
    ERR_put_error(6, 157, 156, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19BCF10  (binary VA: 0x19bcf10)
// Original: sub_19BCF10
// ----------------------------------------------------------------------------
int sub_19BCF10()
{
  return 64;
}

// ----------------------------------------------------------------------------
// Function: sub_19BCF20  (binary VA: 0x19bcf20)
// Original: sub_19BCF20
// ----------------------------------------------------------------------------
int sub_19BCF20(int a1, int a2, int a3, uint32_t *a4)
{
  if ( a2 != 3 )
    return -2;
  *a4 = 64;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19BCF40  (binary VA: 0x19bcf40)
// Original: sub_19BCF40
// ----------------------------------------------------------------------------
int sub_19BCF40(int a1, void **a2)
{
  int v2;
  uint8_t *dest;

  v2 = *(uint32_t *)(a1 + 20);
  if ( a2 != nullptr )
  {
    if ( *a2 != nullptr )
    {
      memcpy(*a2, *(const void **)(v2 + 8), *(uint32_t *)v2);
      *a2 = (char *)*a2 + *(uint32_t *)v2;
    }
    else
    {
      dest = CRYPTO_malloc(*(uint32_t *)v2, (int)(uintptr_t)(&unk_1B15112), 0);
      *a2 = dest;
      memcpy(dest, *(const void **)(v2 + 8), *(uint32_t *)v2);
    }
  }
  return *(uint32_t *)v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19BCFE0  (binary VA: 0x19bcfe0)
// Original: sub_19BCFE0
// ----------------------------------------------------------------------------
int sub_19BCFE0(char *a1, char **a2, size_t a3)
{
  int v3;
  int v4;

  v3 = 0;
  v4 = ASN1_OCTET_STRING_new();
  if ( v4 != 0 && ASN1_OCTET_STRING_set(v4, *a2, a3) != 0 )
  {
    LOWORD(v3) = 1;
    EVP_PKEY_assign(a1, 0x357u, v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD060  (binary VA: 0x19bd060)
// Original: sub_19BD060
// ----------------------------------------------------------------------------
int sub_19BD060(int a1)
{
  int result;
  int v2;

  result = a1;
  v2 = *(uint32_t *)(a1 + 20);
  if ( v2 != 0 )
  {
    if ( *(uint32_t *)(v2 + 8) != 0 )
      OPENSSL_cleanse(*(uint8_t **)(v2 + 8), *(uint32_t *)v2);
    return ASN1_OCTET_STRING_free(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD0B0  (binary VA: 0x19bd0b0)
// Original: sub_19BD0B0
// ----------------------------------------------------------------------------
int sub_19BD0B0(int *a1, int a2, int a3, char *a4)
{
  int *v4;
  int result;

  v4 = (int *)a1[5];
  switch ( a2 )
  {
    case 1:
      *v4 = (int)(uintptr_t)(a4);
      return 1;
    case 6:
      if ( a4 != nullptr || (result = 0, a3 <= 0) )
      {
        result = 0;
        if ( a3 >= -1 )
          return ASN1_OCTET_STRING_set((int)(uintptr_t)(v4 + 1), a4, a3) != 0;
      }
      break;
    case 7:
      HMAC_Init_ex((int)(uintptr_t)(v4 + 5), *(void **)(*(uint32_t *)(a1[2] + 20) + 8), **(uint32_t **)(a1[2] + 20), *v4, a1[1]);
      return 1;
    default:
      return -2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD190  (binary VA: 0x19bd190)
// Original: sub_19BD190
// ----------------------------------------------------------------------------
int sub_19BD190(int a1, int a2, int *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v8 = *(uint32_t *)(a1 + 20);
  v4 = 0;
  v5 = EVP_MD_CTX_md(a4);
  v6 = EVP_MD_size(v5);
  if ( v6 >= 0 )
  {
    *a3 = v6;
    LOWORD(v4) = 1;
    if ( a2 != 0 )
    {
      HMAC_Final(v8 + 20, a2, v9);
      *a3 = v9[0];
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD220  (binary VA: 0x19bd220)
// Original: sub_19BD220
// ----------------------------------------------------------------------------
int sub_19BD220(int a1, int a2)
{
  EVP_MD_CTX_set_flags(a2, 256);
  *(uint32_t *)(a2 + 20) = (uint32_t)(uintptr_t)(sub_19BD270);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD270  (binary VA: 0x19bd270)
// Original: sub_19BD270
// ----------------------------------------------------------------------------
int sub_19BD270(int a1, int a2, int a3)
{
  HMAC_Update(*(uint32_t *)(*(uint32_t *)(a1 + 16) + 20) + 20, a2, a3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD2B0  (binary VA: 0x19bd2b0)
// Original: sub_19BD2B0
// ----------------------------------------------------------------------------
int sub_19BD2B0(int a1, char *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 20);
  if ( *(uint32_t *)(v3 + 12) != 0 )
  {
    v4 = (int)(uintptr_t)(ASN1_OCTET_STRING_dup(v3 + 4));
    if ( v4 != 0 )
    {
      LOWORD(v2) = 1;
      EVP_PKEY_assign(a2, 0x357u, v4);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD320  (binary VA: 0x19bd320)
// Original: sub_19BD320
// ----------------------------------------------------------------------------
int sub_19BD320(int a1)
{
  int v1;
  void *v2;
  size_t v3;

  v1 = *(uint32_t *)(a1 + 20);
  HMAC_CTX_cleanup(v1 + 20);
  v2 = *(void **)(v1 + 12);
  if ( v2 != nullptr )
  {
    v3 = *(uint32_t *)(v1 + 4);
    if ( v3 != 0 )
    {
      OPENSSL_cleanse(*(uint8_t **)(v1 + 12), v3);
      v2 = *(void **)(v1 + 12);
    }
    CRYPTO_free(v2);
    *(uint32_t *)(v1 + 12) = 0;
  }
  return CRYPTO_free((void *)v1);
}

// ----------------------------------------------------------------------------
// Function: sub_19BD3A0  (binary VA: 0x19bd3a0)
// Original: sub_19BD3A0
// ----------------------------------------------------------------------------
int sub_19BD3A0(int a1)
{
  uint32_t *v1;
  int result;

  v1 = (uint32_t *)(CRYPTO_malloc(228, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[3] = 0;
    v1[1] = 0;
    v1[4] = 0;
    v1[2] = 4;
    HMAC_CTX_init(v1 + 5);
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v1);
    *(uint32_t *)(a1 + 36) = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD440  (binary VA: 0x19bd440)
// Original: sub_19BD440
// ----------------------------------------------------------------------------
int sub_19BD440(int *a1, const char *a2, char *a3)
{
  int result;
  char *v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  result = 0;
  if ( a3 != nullptr )
  {
    if ( strcmp(a2, "key") == 0 )
    {
      return sub_19BD0B0(a1, 6, -1, a3);
    }
    else
    {
      result = -2;
      if ( strcmp(a2, "hexkey") == 0 )
      {
        v4 = (char *)string_to_hex(a3, (int)(uintptr_t)(v6));
        result = 0;
        if ( v4 != nullptr )
        {
          v5 = sub_19BD0B0(a1, 6, v6[0], v4);
          CRYPTO_free(v4);
          return v5;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19BD530  (binary VA: 0x19bd530)
// Original: sub_19BD530
// ----------------------------------------------------------------------------
bool sub_19BD530(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;
  char *v7;

  v2 = sub_19BD3A0(a1);
  v3 = 0;
  if ( v2 != 0 )
  {
    v5 = *(uint32_t **)(a1 + 20);
    v6 = *(uint32_t **)(a2 + 20);
    *v5 = *v6;
    HMAC_CTX_init(v5 + 5);
    HMAC_CTX_copy(v5 + 5, v6 + 5);
    v7 = (char *)v6[3];
    v3 = 1;
    if ( v7 != nullptr )
      return ASN1_OCTET_STRING_set((int)(uintptr_t)(v5 + 1), v7, v6[1]) != 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: HMAC  (binary VA: 0x19bdc40)
// Original: HMAC
// ----------------------------------------------------------------------------
void * HMAC(uint32_t *a1, void *a2, size_t a3, int a4, int a5, void *a6, uint32_t *a7)
{
  void *v7;
  uint8_t v9[208];

  v7 = a6;
  if ( a6 == nullptr )
    v7 = &unk_2141CC0;
  HMAC_CTX_init(v9);
  if ( !HMAC_Init(v9, a2, a3, a1) || HMAC_Update((int)(uintptr_t)(v9), a4, a5) == 0 || !HMAC_Final((int)(uintptr_t)(v9), (int)(uintptr_t)(v7), a7) )
    return nullptr;
  HMAC_CTX_cleanup(v9);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: idea_encrypt  (binary VA: 0x19bdda0)
// Original: idea_encrypt
// ----------------------------------------------------------------------------
int idea_encrypt(unsigned int *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  int16_t v4; // si
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int16_t v34; // si
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int16_t v64; // si
  int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  unsigned int v69;
  int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  int v85;
  int v86;
  unsigned int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int16_t v94; // si
  int v95;
  unsigned int v96;
  unsigned int v97;
  int v98;
  unsigned int v99;
  int v100;
  int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  unsigned int v108;
  unsigned int v109;
  int v110;
  unsigned int v111;
  unsigned int v112;
  int v113;
  unsigned int v114;
  int v115;
  int v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  unsigned int v124;
  int v125;
  int v126;
  int v127;
  unsigned int v128;
  uint16_t v129;
  int result;
  int v131;
  uint16_t v132;
  uint16_t v133;
  int v134;
  uint16_t v135;
  uint16_t v136;
  int v137;
  uint16_t v138;
  uint16_t v139;
  int v140;
  uint16_t v141;
  uint16_t v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;

  v2 = HIWORD(*a1);
  v3 = *a2 * v2;
  if ( v3 != 0 )
    v4 = v3 - HIWORD(v3) - ((unsigned int)((uint16_t)v3 - HIWORD(v3)) >> 16);
  else
    v4 = 1 - *a2 - v2;
  v151 = a2[1] + *a1;
  v5 = a2[3];
  v6 = (uint16_t)a1[1];
  v143 = a2[2] + HIWORD(a1[1]);
  if ( v6 * v5 != 0 )
    v7 = (uint16_t)(v6 * v5)
       - ((unsigned int)(v6 * v5) >> 16)
       - (((uint16_t)(v6 * v5) - ((unsigned int)(v6 * v5) >> 16)) >> 16);
  else
    LOWORD(v7) = 1 - v5 - v6;
  v8 = a2[4];
  v9 = v8 * (uint16_t)(v4 ^ v143);
  if ( v9 != 0 )
    v10 = (uint16_t)v9 - HIWORD(v9) - ((unsigned int)((uint16_t)v9 - HIWORD(v9)) >> 16);
  else
    v10 = 1 - v8 - (uint16_t)(v4 ^ v143);
  v11 = a2[5];
  v131 = (uint16_t)(v10 + (v7 ^ v151));
  if ( v11 * v131 != 0 )
    v12 = (uint16_t)(v11 * v131)
        - ((unsigned int)(v11 * v131) >> 16)
        - (((uint16_t)(v11 * v131) - ((unsigned int)(v11 * v131) >> 16)) >> 16);
  else
    v12 = 1 - v11 - v131;
  v13 = v12 + v10;
  v14 = (uint16_t)(v12 ^ v4);
  v132 = v13 ^ v7;
  v15 = a2[6];
  v16 = v151 ^ v13;
  v17 = v143 ^ v12;
  if ( v15 * v14 != 0 )
  {
    v18 = (uint16_t)(v15 * v14) - ((unsigned int)(v15 * v14) >> 16);
    v19 = v18 - HIWORD(v18);
  }
  else
  {
    LOWORD(v19) = 1 - v15 - v14;
  }
  v152 = a2[7] + v17;
  v144 = a2[8] + v16;
  v20 = a2[9];
  v21 = v20 * v132;
  if ( v21 != 0 )
    v22 = (uint16_t)v21 - HIWORD(v21) - ((unsigned int)((uint16_t)v21 - HIWORD(v21)) >> 16);
  else
    LOWORD(v22) = 1 - v20 - v132;
  v23 = a2[10];
  v24 = v23 * (uint16_t)(v19 ^ v144);
  if ( v24 != 0 )
    v25 = (uint16_t)v24 - HIWORD(v24) - ((unsigned int)((uint16_t)v24 - HIWORD(v24)) >> 16);
  else
    v25 = 1 - v23 - (uint16_t)(v19 ^ v144);
  v26 = a2[11];
  v27 = v26 * (uint16_t)(v25 + (v22 ^ v152));
  if ( v27 != 0 )
    v28 = (uint16_t)v27 - HIWORD(v27) - ((unsigned int)((uint16_t)v27 - HIWORD(v27)) >> 16);
  else
    v28 = 1 - v26 - (uint16_t)(v25 + (v22 ^ v152));
  v29 = v28 + v25;
  v30 = (uint16_t)(v28 ^ v19);
  v133 = v29 ^ v22;
  v31 = a2[12];
  v32 = v152 ^ v29;
  v33 = v144 ^ v28;
  if ( v31 * v30 != 0 )
    v34 = v31 * v30
        - ((unsigned int)(v31 * v30) >> 16)
        - (((uint16_t)(v31 * v30) - ((unsigned int)(v31 * v30) >> 16)) >> 16);
  else
    v34 = 1 - v31 - v30;
  v145 = a2[14] + v32;
  v153 = a2[13] + v33;
  v35 = a2[15];
  v36 = v35 * v133;
  if ( v36 != 0 )
    v37 = (uint16_t)v36 - HIWORD(v36) - ((unsigned int)((uint16_t)v36 - HIWORD(v36)) >> 16);
  else
    LOWORD(v37) = 1 - v35 - v133;
  v38 = a2[16];
  v39 = v38 * (uint16_t)(v34 ^ v145);
  if ( v39 != 0 )
    v40 = (uint16_t)v39 - HIWORD(v39) - ((unsigned int)((uint16_t)v39 - HIWORD(v39)) >> 16);
  else
    v40 = 1 - v38 - (uint16_t)(v34 ^ v145);
  v41 = a2[17];
  v134 = (uint16_t)(v40 + (v37 ^ v153));
  if ( v41 * v134 != 0 )
    v42 = (uint16_t)(v41 * v134)
        - ((unsigned int)(v41 * v134) >> 16)
        - (((uint16_t)(v41 * v134) - ((unsigned int)(v41 * v134) >> 16)) >> 16);
  else
    v42 = 1 - v41 - v134;
  v43 = v42 + v40;
  v44 = (uint16_t)(v42 ^ v34);
  v135 = v43 ^ v37;
  v45 = a2[18];
  v46 = v153 ^ v43;
  v47 = v145 ^ v42;
  if ( v45 * v44 != 0 )
  {
    v48 = (uint16_t)(v45 * v44) - ((unsigned int)(v45 * v44) >> 16);
    v49 = v48 - HIWORD(v48);
  }
  else
  {
    LOWORD(v49) = 1 - v45 - v44;
  }
  v154 = a2[19] + v47;
  v146 = a2[20] + v46;
  v50 = a2[21];
  v51 = v50 * v135;
  if ( v51 != 0 )
    v52 = (uint16_t)v51 - HIWORD(v51) - ((unsigned int)((uint16_t)v51 - HIWORD(v51)) >> 16);
  else
    LOWORD(v52) = 1 - v50 - v135;
  v53 = a2[22];
  v54 = v53 * (uint16_t)(v49 ^ v146);
  if ( v54 != 0 )
    v55 = (uint16_t)v54 - HIWORD(v54) - ((unsigned int)((uint16_t)v54 - HIWORD(v54)) >> 16);
  else
    v55 = 1 - v53 - (uint16_t)(v49 ^ v146);
  v56 = a2[23];
  v57 = v56 * (uint16_t)(v55 + (v52 ^ v154));
  if ( v57 != 0 )
    v58 = (uint16_t)v57 - HIWORD(v57) - ((unsigned int)((uint16_t)v57 - HIWORD(v57)) >> 16);
  else
    v58 = 1 - v56 - (uint16_t)(v55 + (v52 ^ v154));
  v59 = v58 + v55;
  v60 = (uint16_t)(v58 ^ v49);
  v136 = v59 ^ v52;
  v61 = a2[24];
  v62 = v154 ^ v59;
  v63 = v146 ^ v58;
  if ( v61 * v60 != 0 )
    v64 = v61 * v60
        - ((unsigned int)(v61 * v60) >> 16)
        - (((uint16_t)(v61 * v60) - ((unsigned int)(v61 * v60) >> 16)) >> 16);
  else
    v64 = 1 - v61 - v60;
  v147 = a2[26] + v62;
  v155 = a2[25] + v63;
  v65 = a2[27];
  v66 = v65 * v136;
  if ( v66 != 0 )
    v67 = (uint16_t)v66 - HIWORD(v66) - ((unsigned int)((uint16_t)v66 - HIWORD(v66)) >> 16);
  else
    LOWORD(v67) = 1 - v65 - v136;
  v68 = a2[28];
  v69 = v68 * (uint16_t)(v64 ^ v147);
  if ( v69 != 0 )
    v70 = (uint16_t)v69 - HIWORD(v69) - ((unsigned int)((uint16_t)v69 - HIWORD(v69)) >> 16);
  else
    v70 = 1 - v68 - (uint16_t)(v64 ^ v147);
  v71 = a2[29];
  v137 = (uint16_t)(v70 + (v67 ^ v155));
  if ( v71 * v137 != 0 )
    v72 = (uint16_t)(v71 * v137)
        - ((unsigned int)(v71 * v137) >> 16)
        - (((uint16_t)(v71 * v137) - ((unsigned int)(v71 * v137) >> 16)) >> 16);
  else
    v72 = 1 - v71 - v137;
  v73 = v72 + v70;
  v74 = (uint16_t)(v72 ^ v64);
  v138 = v73 ^ v67;
  v75 = a2[30];
  v76 = v155 ^ v73;
  v77 = v147 ^ v72;
  if ( v75 * v74 != 0 )
  {
    v78 = (uint16_t)(v75 * v74) - ((unsigned int)(v75 * v74) >> 16);
    v79 = v78 - HIWORD(v78);
  }
  else
  {
    LOWORD(v79) = 1 - v75 - v74;
  }
  v156 = a2[31] + v77;
  v148 = a2[32] + v76;
  v80 = a2[33];
  v81 = v80 * v138;
  if ( v81 != 0 )
    v82 = (uint16_t)v81 - HIWORD(v81) - ((unsigned int)((uint16_t)v81 - HIWORD(v81)) >> 16);
  else
    LOWORD(v82) = 1 - v80 - v138;
  v83 = a2[34];
  v84 = v83 * (uint16_t)(v79 ^ v148);
  if ( v84 != 0 )
    v85 = (uint16_t)v84 - HIWORD(v84) - ((unsigned int)((uint16_t)v84 - HIWORD(v84)) >> 16);
  else
    v85 = 1 - v83 - (uint16_t)(v79 ^ v148);
  v86 = a2[35];
  v87 = v86 * (uint16_t)(v85 + (v82 ^ v156));
  if ( v87 != 0 )
    v88 = (uint16_t)v87 - HIWORD(v87) - ((unsigned int)((uint16_t)v87 - HIWORD(v87)) >> 16);
  else
    v88 = 1 - v86 - (uint16_t)(v85 + (v82 ^ v156));
  v89 = v88 + v85;
  v90 = (uint16_t)(v88 ^ v79);
  v139 = v89 ^ v82;
  v91 = a2[36];
  v92 = v156 ^ v89;
  v93 = v148 ^ v88;
  if ( v91 * v90 != 0 )
    v94 = v91 * v90
        - ((unsigned int)(v91 * v90) >> 16)
        - (((uint16_t)(v91 * v90) - ((unsigned int)(v91 * v90) >> 16)) >> 16);
  else
    v94 = 1 - v91 - v90;
  v149 = a2[38] + v92;
  v157 = a2[37] + v93;
  v95 = a2[39];
  v96 = v95 * v139;
  if ( v96 != 0 )
    v97 = (uint16_t)v96 - HIWORD(v96) - ((unsigned int)((uint16_t)v96 - HIWORD(v96)) >> 16);
  else
    LOWORD(v97) = 1 - v95 - v139;
  v98 = a2[40];
  v99 = v98 * (uint16_t)(v94 ^ v149);
  if ( v99 != 0 )
    v100 = (uint16_t)v99 - HIWORD(v99) - ((unsigned int)((uint16_t)v99 - HIWORD(v99)) >> 16);
  else
    v100 = 1 - v98 - (uint16_t)(v94 ^ v149);
  v101 = a2[41];
  v140 = (uint16_t)(v100 + (v97 ^ v157));
  if ( v101 * v140 != 0 )
    v102 = (uint16_t)(v101 * v140)
         - ((unsigned int)(v101 * v140) >> 16)
         - (((uint16_t)(v101 * v140) - ((unsigned int)(v101 * v140) >> 16)) >> 16);
  else
    v102 = 1 - v101 - v140;
  v103 = v102 + v100;
  v104 = (uint16_t)(v102 ^ v94);
  v141 = v103 ^ v97;
  v105 = a2[42];
  v106 = v157 ^ v103;
  v107 = v149 ^ v102;
  if ( v105 * v104 != 0 )
  {
    v108 = (uint16_t)(v105 * v104) - ((unsigned int)(v105 * v104) >> 16);
    v109 = v108 - HIWORD(v108);
  }
  else
  {
    LOWORD(v109) = 1 - v105 - v104;
  }
  v158 = a2[43] + v107;
  v150 = a2[44] + v106;
  v110 = a2[45];
  v111 = v110 * v141;
  if ( v111 != 0 )
    v112 = (uint16_t)v111 - HIWORD(v111) - ((unsigned int)((uint16_t)v111 - HIWORD(v111)) >> 16);
  else
    LOWORD(v112) = 1 - v110 - v141;
  v113 = a2[46];
  v114 = v113 * (uint16_t)(v109 ^ v150);
  if ( v114 != 0 )
    v115 = (uint16_t)v114 - HIWORD(v114) - ((unsigned int)((uint16_t)v114 - HIWORD(v114)) >> 16);
  else
    v115 = 1 - v113 - (uint16_t)(v109 ^ v150);
  v116 = a2[47];
  v117 = v116 * (uint16_t)(v115 + (v112 ^ v158));
  if ( v117 != 0 )
    v118 = (uint16_t)v117 - HIWORD(v117) - ((unsigned int)((uint16_t)v117 - HIWORD(v117)) >> 16);
  else
    v118 = 1 - v116 - (uint16_t)(v115 + (v112 ^ v158));
  v119 = v118 + v115;
  v120 = (uint16_t)(v118 ^ v109);
  v142 = v119 ^ v112;
  v121 = a2[48];
  v122 = v158 ^ v119;
  v123 = v150 ^ v118;
  if ( v121 * v120 != 0 )
    v124 = (uint16_t)(v121 * v120)
         - ((unsigned int)(v121 * v120) >> 16)
         - (((uint16_t)(v121 * v120) - ((unsigned int)(v121 * v120) >> 16)) >> 16);
  else
    v124 = 1 - v121 - v120;
  v125 = a2[49] + v122;
  v126 = a2[50] + v123;
  v127 = a2[51];
  v128 = v127 * v142;
  if ( v128 != 0 )
    v129 = v128 - HIWORD(v128) - ((unsigned int)((uint16_t)v128 - HIWORD(v128)) >> 16);
  else
    v129 = 1 - v127 - v142;
  result = (v126 << 16) | v129;
  *a1 = (uint16_t)v125 | (v124 << 16);
  a1[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: idea_cbc_encrypt  (binary VA: 0x19be740)
// Original: idea_cbc_encrypt
// ----------------------------------------------------------------------------
int idea_cbc_encrypt(int a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int a6)
{
  unsigned int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13; // eax^3
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  char v19; // si
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v27;
  uint8_t *v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  uint8_t *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  uint8_t *v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef uint8_t *_g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef uint8_t *_g4_t_v62;
  typedef uint8_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint8_t *_g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef char _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v54)) > _g4_s0 ? (4u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v57)) > _g4_s3 ? (12u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v58)) > _g4_s4 ? (16u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v59)) > _g4_s5 ? (32u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v60)) > _g4_s6 ? (52u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v61)) > _g4_s7 ? (52u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v62)) > _g4_s8 ? (52u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v63)) > _g4_s9 ? (52u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v64)) > _g4_s10 ? (56u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v65)) > _g4_s11 ? (56u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v66)) > _g4_s12 ? (56u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v67)) > _g4_s13 ? (56u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v68)) > _g4_s14 ? (60u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v69)) > _g4_s15 ? (60u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v70)) > _g4_s16 ? (60u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v71)) > _g4_s17 ? (72u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v72)) > _g4_s18 ? (76u + sizeof(_g4_t_v72)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);

  if ( a6 != 0 )
  {
    v6 = __builtin_bswap32(*(uint32_t *)a5);
    v60 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
    v68 = a3 - 8;
    v64 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v7 = a2;
      v8 = a1;
      do
      {
        v9 = *(uint8_t *)(v8 + 4);
        v10 = *(uint8_t *)(v8 + 5) << 16;
        v71 = v6 ^ __builtin_bswap32(*(uint32_t *)v8);
        v11 = *(uint8_t *)(v8 + 7) | v10 | (v9 << 24);
        v12 = *(uint8_t *)(v8 + 6) << 8;
        v8 += 8;
        v72 = v60 ^ (v12 | v11);
        idea_encrypt(&v71, a4);
        v6 = v71;
        v13 = HIBYTE(v71);
        v7[3] = v71;
        *v7 = v13;
        v7[1] = BYTE2(v6);
        v7[2] = BYTE1(v6);
        v60 = v72;
        v7[4] = HIBYTE(v72);
        v7[5] = BYTE2(v60);
        v7[6] = BYTE1(v60);
        v7[7] = v60;
        v7 += 8;
        v64 -= 8;
      }
      while ( v64 >= 0 );
      v14 = 8 * (v68 >> 3) + 8;
      a1 += v14;
      a2 += v14;
      v64 = a3 - 8 * (v68 >> 3) - 16;
    }
    if ( v64 == -8 )
    {
      v58 = BYTE2(v6);
      v65 = HIBYTE(v6);
      v69 = HIBYTE(v60);
      v59 = BYTE1(v6);
      v19 = v6;
      v23 = HIWORD(v60);
      v24 = v60 >> 8;
      v25 = (uint8_t)v60;
    }
    else
    {
      v15 = v64 + 8 + a1;
      switch ( v64 )
      {
        case -7:
          v51 = v64 + 8 + a1;
          v16 = 0;
          v52 = 0;
          goto LABEL_29;
        case -6:
          v16 = 0;
          v50 = 0;
          goto LABEL_28;
        case -5:
          v48 = v64 + 8 + a1;
          v16 = 0;
          v49 = 0;
          goto LABEL_27;
        case -4:
          v16 = 0;
          goto LABEL_26;
        case -3:
          v46 = v64 + 8 + a1;
          v47 = 0;
          goto LABEL_25;
        case -2:
          v45 = 0;
          goto LABEL_24;
        case -1:
          v44 = *(uint8_t *)--v15;
          v45 = v44 << 8;
LABEL_24:
          v46 = v15 - 1;
          v47 = v45 | (*(uint8_t *)(v15 - 1) << 16);
LABEL_25:
          v15 = v46 - 1;
          v16 = v47 | (*(uint8_t *)(v46 - 1) << 24);
LABEL_26:
          v48 = v15 - 1;
          v49 = *(uint8_t *)(v15 - 1);
LABEL_27:
          v15 = v48 - 1;
          v50 = v49 | (*(uint8_t *)(v48 - 1) << 8);
LABEL_28:
          v51 = v15 - 1;
          v52 = v50 | (*(uint8_t *)(v15 - 1) << 16);
LABEL_29:
          v17 = v52 | (*(uint8_t *)(v51 - 1) << 24);
          break;
        default:
          v16 = 0;
          v17 = 0;
          break;
      }
      v71 = v17 ^ v6;
      v72 = v60 ^ v16;
      idea_encrypt(&v71, a4);
      v18 = v71;
      v19 = v71;
      v65 = HIBYTE(v71);
      *a2 = HIBYTE(v71);
      a2[3] = v18;
      a2[1] = BYTE2(v18);
      v58 = BYTE2(v18);
      v20 = v18;
      v21 = v72;
      v20 >>= 8;
      v22 = v72;
      a2[2] = v20;
      v59 = v20;
      a2[4] = HIBYTE(v22);
      v69 = HIBYTE(v22);
      v23 = HIWORD(v22);
      a2[5] = BYTE2(v22);
      v24 = v22 >> 8;
      a2[6] = BYTE1(v22);
      v25 = v21;
      a2[7] = v21;
    }
    *(uint8_t *)a5 = v65;
    *(uint8_t *)(a5 + 5) = v23;
    *(uint8_t *)(a5 + 1) = v58;
    *(uint8_t *)(a5 + 6) = v24;
    *(uint8_t *)(a5 + 2) = v59;
    *(uint8_t *)(a5 + 3) = v19;
    *(uint8_t *)(a5 + 4) = v69;
    *(uint8_t *)(a5 + 7) = v25;
    return v25;
  }
  else
  {
    v27 = __builtin_bswap32(*(uint32_t *)a5);
    v61 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
    v70 = a3 - 8;
    v66 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v28 = a2;
      v29 = a1;
      while ( 1 )
      {
        v30 = *(uint8_t *)(v29 + 4);
        v31 = __builtin_bswap32(*(uint32_t *)v29);
        v32 = *(uint8_t *)(v29 + 5);
        v71 = v31;
        v57 = v28;
        v55 = v27;
        v33 = (*(uint8_t *)(v29 + 6) << 8) | *(uint8_t *)(v29 + 7) | (v32 << 16) | (v30 << 24);
        v72 = v33;
        idea_encrypt(&v71, a4);
        v34 = v71 ^ v55;
        v29 += 8;
        v54 = v72 ^ v61;
        v35 = (v71 ^ v55) >> 24;
        v57[3] = v71 ^ v55;
        *v57 = v35;
        v57[1] = BYTE2(v34);
        v57[4] = HIBYTE(v54);
        v57[5] = BYTE2(v54);
        v57[6] = BYTE1(v54);
        v57[2] = BYTE1(v34);
        v57[7] = v54;
        v28 = v57 + 8;
        v66 -= 8;
        if ( v66 < 0 )
          break;
        v61 = v33;
        v27 = v31;
      }
      v61 = v33;
      v27 = v31;
      v36 = 8 * (v70 >> 3) + 8;
      a1 += v36;
      a2 += v36;
      v66 = a3 - 8 * (v70 >> 3) - 16;
    }
    if ( v66 != -8 )
    {
      v37 = *(uint8_t *)(a1 + 4);
      v38 = __builtin_bswap32(*(uint32_t *)a1);
      v39 = *(uint8_t *)(a1 + 5);
      v71 = v38;
      v56 = v27;
      v40 = (*(uint8_t *)(a1 + 6) << 8) | *(uint8_t *)(a1 + 7) | (v39 << 16) | (v37 << 24);
      v72 = v40;
      idea_encrypt(&v71, a4);
      v41 = v71 ^ v56;
      v42 = v72 ^ v61;
      v43 = &a2[v66 + 8];
      switch ( v66 )
      {
        case -7:
          v63 = &a2[v66 + 8];
          goto LABEL_36;
        case -6:
          goto LABEL_35;
        case -5:
          v62 = &a2[v66 + 8];
          goto LABEL_34;
        case -4:
          goto LABEL_33;
        case -3:
          v67 = &a2[v66 + 8];
          goto LABEL_32;
        case -2:
          goto LABEL_31;
        case -1:
          *--v43 = BYTE1(v42);
LABEL_31:
          v67 = v43 - 1;
          *(v43 - 1) = BYTE2(v42);
LABEL_32:
          v43 = v67 - 1;
          *(v67 - 1) = HIBYTE(v42);
LABEL_33:
          *(v43 - 1) = v41;
          v62 = v43 - 1;
LABEL_34:
          v43 = v62 - 1;
          *(v62 - 1) = BYTE1(v41);
LABEL_35:
          v63 = v43 - 1;
          *(v43 - 1) = BYTE2(v41);
LABEL_36:
          v53 = v63;
          v61 = v40;
          *(v53 - 1) = HIBYTE(v41);
          v27 = v38;
          break;
        default:
          v61 = v40;
          v27 = v38;
          break;
      }
    }
    *(uint8_t *)a5 = HIBYTE(v27);
    *(uint8_t *)(a5 + 3) = v27;
    *(uint8_t *)(a5 + 1) = BYTE2(v27);
    *(uint8_t *)(a5 + 2) = BYTE1(v27);
    *(uint8_t *)(a5 + 4) = HIBYTE(v61);
    *(uint8_t *)(a5 + 5) = BYTE2(v61);
    *(uint8_t *)(a5 + 6) = BYTE1(v61);
    *(uint8_t *)(a5 + 7) = v61;
    return (uint8_t)v61;
  }
}

// ----------------------------------------------------------------------------
// Function: idea_cfb64_encrypt  (binary VA: 0x19bede0)
// Original: idea_cfb64_encrypt
// ----------------------------------------------------------------------------
int * idea_cfb64_encrypt(char *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6, int a7)
{
  uint8_t *v8;
  int v9;
  char v10;
  char v11;
  bool v12;
  unsigned int v13;
  char v14; // ecx^3
  unsigned int v15;
  unsigned int v16;
  uint8_t *v18;
  char v19;
  unsigned int v20;
  char v21; // ecx^3
  unsigned int v22;
  unsigned int v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v27)) > _g4_s3 ? (8u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v8 = a2;
  v9 = *a6;
  if ( a7 != 0 )
  {
    if ( a3 != 0 )
    {
      v27 = a3;
      do
      {
        if ( v9 == 0 )
        {
          v28 = __builtin_bswap32(*(uint32_t *)a5);
          v25 = v8;
          v29 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
          idea_encrypt(&v28, a4);
          v20 = v28;
          v21 = HIBYTE(v28);
          *(uint8_t *)(a5 + 3) = v28;
          *(uint8_t *)a5 = v21;
          *(uint8_t *)(a5 + 1) = BYTE2(v20);
          v22 = v20 >> 8;
          v23 = v29;
          *(uint8_t *)(a5 + 2) = v22;
          *(uint8_t *)(a5 + 7) = v23;
          *(uint8_t *)(a5 + 4) = HIBYTE(v23);
          *(uint8_t *)(a5 + 5) = BYTE2(v23);
          *(uint8_t *)(a5 + 6) = BYTE1(v23);
          v8 = v25;
        }
        v18 = (uint8_t *)(a5 + v9);
        v19 = *a1 ^ *(uint8_t *)(a5 + v9);
        *v8 = v19;
        ++a1;
        ++v8;
        v9 = ((uint8_t)v9 + 1) & 7;
        v12 = v27-- == 1;
        *v18 = v19;
      }
      while ( !v12 );
    }
  }
  else
  {
    v26 = a3;
    if ( a3 != 0 )
    {
      v24 = a2;
      do
      {
        if ( v9 == 0 )
        {
          v28 = __builtin_bswap32(*(uint32_t *)a5);
          v29 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
          idea_encrypt(&v28, a4);
          v13 = v28;
          v14 = HIBYTE(v28);
          *(uint8_t *)(a5 + 3) = v28;
          *(uint8_t *)a5 = v14;
          *(uint8_t *)(a5 + 1) = BYTE2(v13);
          v15 = v13 >> 8;
          v16 = v29;
          *(uint8_t *)(a5 + 2) = v15;
          *(uint8_t *)(a5 + 7) = v16;
          *(uint8_t *)(a5 + 4) = HIBYTE(v16);
          *(uint8_t *)(a5 + 5) = BYTE2(v16);
          *(uint8_t *)(a5 + 6) = BYTE1(v16);
        }
        v10 = *a1++;
        v11 = *(uint8_t *)(a5 + v9);
        *(uint8_t *)(a5 + v9) = v10;
        v9 = ((uint8_t)v9 + 1) & 7;
        *v24 = v10 ^ v11;
        v12 = v26-- == 1;
        ++v24;
      }
      while ( !v12 );
    }
  }
  *a6 = v9;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: idea_options  (binary VA: 0x19beff0)
// Original: idea_options
// ----------------------------------------------------------------------------
const char * idea_options()
{
  return "idea(int)";
}

// ----------------------------------------------------------------------------
// Function: idea_ecb_encrypt  (binary VA: 0x19bf010)
// Original: idea_ecb_encrypt
// ----------------------------------------------------------------------------
unsigned int idea_ecb_encrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3)
{
  unsigned int v3;
  char v4; // edx^3
  unsigned int v5;
  unsigned int result;
  typedef unsigned int _g4_t_v7;
  typedef unsigned int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v7 = __builtin_bswap32(*a1);
  v8 = __builtin_bswap32(a1[1]);
  idea_encrypt(&v7, a3);
  v3 = v7;
  v4 = HIBYTE(v7);
  a2[3] = v7;
  *a2 = v4;
  a2[1] = BYTE2(v3);
  v5 = v3 >> 8;
  result = v8;
  a2[2] = v5;
  a2[7] = result;
  a2[4] = HIBYTE(result);
  a2[5] = BYTE2(result);
  a2[6] = BYTE1(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: idea_ofb64_encrypt  (binary VA: 0x19bf0d0)
// Original: idea_ofb64_encrypt
// ----------------------------------------------------------------------------
int * idea_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6)
{
  int v6;
  int v7;
  int i;
  char v11;
  unsigned int v12;
  int v13;
  char v14; // edi^3
  typedef uint8_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (25u + sizeof(_g4_t_v21)) > _g4_s5 ? (25u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (26u + sizeof(_g4_t_v22)) > _g4_s6 ? (26u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (27u + sizeof(_g4_t_v23)) > _g4_s7 ? (27u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (29u + sizeof(_g4_t_v25)) > _g4_s9 ? (29u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (30u + sizeof(_g4_t_v26)) > _g4_s10 ? (30u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (31u + sizeof(_g4_t_v27)) > _g4_s11 ? (31u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 25u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 26u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 27u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 29u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 30u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 31u);

  v6 = *a6;
  v7 = *(uint8_t *)(a5 + 4);
  v18 = __builtin_bswap32(*(uint32_t *)a5);
  v23 = v18;
  v19 = (*(uint8_t *)(a5 + 6) << 8)
      | *(uint8_t *)(a5 + 7)
      | (*(uint8_t *)(a5 + 5) << 16)
      | (v7 << 24);
  v20 = HIBYTE(v18);
  v21 = BYTE2(v18);
  v22 = BYTE1(v18);
  v24 = HIBYTE(v19);
  v25 = BYTE2(v19);
  v26 = BYTE1(v19);
  v27 = v19;
  if ( a3 != 0 )
  {
    v17 = 0;
    for ( i = a3; i != 0; --i )
    {
      if ( v6 == 0 )
      {
        v16 = a2;
        idea_encrypt(&v18, a4);
        ++v17;
        v23 = v18;
        a2 = v16;
        v20 = HIBYTE(v18);
        v21 = BYTE2(v18);
        v22 = BYTE1(v18);
        v27 = v19;
        v24 = HIBYTE(v19);
        v25 = BYTE2(v19);
        v26 = BYTE1(v19);
      }
      v11 = *a1 ^ *(&v20 + v6);
      v6 = ((uint8_t)v6 + 1) & 7;
      *a2 = v11;
      ++a1;
      ++a2;
    }
    if ( v17 != 0 )
    {
      v12 = v18;
      v13 = v19;
      v14 = HIBYTE(v18);
      *(uint8_t *)(a5 + 3) = v18;
      *(uint8_t *)a5 = v14;
      *(uint8_t *)(a5 + 1) = BYTE2(v12);
      *(uint8_t *)(a5 + 4) = HIBYTE(v13);
      *(uint8_t *)(a5 + 5) = BYTE2(v13);
      *(uint8_t *)(a5 + 6) = BYTE1(v13);
      *(uint8_t *)(a5 + 2) = BYTE1(v12);
      *(uint8_t *)(a5 + 7) = v13;
    }
  }
  *a6 = v6;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: idea_set_encrypt_key  (binary VA: 0x19bf2b0)
// Original: idea_set_encrypt_key
// ----------------------------------------------------------------------------
int * idea_set_encrypt_key(uint8_t *a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *result;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;

  v2 = a2;
  v3 = *a1 << 8;
  *a2 = v3;
  *a2 = v3 | a1[1];
  v4 = a1[2] << 8;
  a2[1] = v4;
  v5 = v4 | a1[3];
  a2[1] = v5;
  v6 = a1[4] << 8;
  a2[2] = v6;
  v7 = v6 | a1[5];
  a2[2] = v7;
  v8 = a1[6] << 8;
  a2[3] = v8;
  a2[3] = v8 | a1[7];
  v9 = a1[8] << 8;
  a2[4] = v9;
  a2[4] = v9 | a1[9];
  v10 = a1[10] << 8;
  a2[5] = v10;
  a2[5] = v10 | a1[11];
  v11 = a1[12] << 8;
  a2[6] = v11;
  a2[6] = v11 | a1[13];
  v12 = a1[14] << 8;
  a2[7] = v12;
  a2[7] = v12 | a1[15];
  for ( result = a2 + 8; ; result += 8 )
  {
    *result = (uint16_t)(((uint16_t)v5 << 9) | (v7 >> 7));
    v14 = v2[3];
    result[1] = (uint16_t)(((uint16_t)v7 << 9) | (v14 >> 7));
    v15 = v2[4];
    result[2] = (uint16_t)(((uint16_t)v14 << 9) | (v15 >> 7));
    v16 = v2[5];
    result[3] = (uint16_t)(((uint16_t)v15 << 9) | (v16 >> 7));
    v17 = v2[6];
    result[4] = (uint16_t)(((uint16_t)v16 << 9) | (v17 >> 7));
    v18 = v2[7];
    result[5] = (uint16_t)(((uint16_t)v17 << 9) | (v18 >> 7));
    v19 = *v2;
    if ( result == a2 + 48 )
      break;
    v2 += 8;
    result[6] = (uint16_t)(((uint16_t)v18 << 9) | (v19 >> 7));
    result[7] = (uint16_t)((v5 >> 7) | ((uint16_t)v19 << 9));
    v5 = v2[1];
    v7 = v2[2];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: idea_set_decrypt_key  (binary VA: 0x19bf430)
// Original: idea_set_decrypt_key
// ----------------------------------------------------------------------------
int idea_set_decrypt_key(int *a1, int *a2)
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
  int result;
  int v19;
  int v20;
  int *v21;
  int *v22;

  v22 = a2;
  v21 = a1 + 48;
  while ( 1 )
  {
    v2 = 0;
    v3 = *v21;
    if ( *v21 != 0 )
    {
      v2 = 1;
      v4 = 65537 % v3;
      if ( 65537 % v3 != 0 )
      {
        v19 = 1;
        v5 = (65537 - 65537 % v3) / v3;
        v6 = 0;
        while ( 1 )
        {
          v7 = v6 - v19 * v5;
          v8 = v3 % v4;
          v5 = (v3 - v3 % v4) / v4;
          if ( v3 % v4 == 0 )
            break;
          v6 = v19;
          v3 = v4;
          v19 = v7;
          v4 = v8;
        }
        v2 = v7 + (v7 < 0 ? 0x10001 : 0);
      }
    }
    *v22 = v2;
    v9 = 0;
    v22[1] = (uint16_t)-*((uint16_t *)v21 + 4);
    v22[2] = (uint16_t)-*((uint16_t *)v21 + 2);
    v10 = v21[3];
    if ( v10 != 0 )
    {
      LOWORD(v9) = 1;
      v11 = 65537 % v10;
      if ( 65537 % v10 != 0 )
      {
        v20 = 1;
        v12 = (65537 - 65537 % v10) / v10;
        v13 = 0;
        while ( 1 )
        {
          v14 = v13 - v20 * v12;
          v15 = v10 % v11;
          v12 = (v10 - v10 % v11) / v11;
          if ( v10 % v11 == 0 )
            break;
          v13 = v20;
          v10 = v11;
          v20 = v14;
          v11 = v15;
        }
        v9 = v14 + (v14 < 0 ? 0x10001 : 0);
      }
    }
    v22[3] = v9;
    if ( v21 == a1 )
      break;
    v21 -= 6;
    v22[4] = v21[4];
    v22[5] = v21[5];
    v22 += 6;
  }
  v16 = a2[1];
  a2[1] = a2[2];
  a2[2] = v16;
  v17 = a2[50];
  result = a2[49];
  a2[50] = result;
  a2[49] = v17;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19BF5E0  (binary VA: 0x19bf5e0)
// Original: sub_19BF5E0
// ----------------------------------------------------------------------------
uint32_t * sub_19BF5E0(int a1, int a2, unsigned int *a3)
{
  unsigned int v4;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *i;
  int v8;
  uint32_t *v10;
  int (*v12)(uint32_t, int);

  v4 = (*(int (**)(int))(a1 + 8))(a2);
  ++*(uint32_t *)(a1 + 56);
  *a3 = v4;
  v5 = v4 % *(uint32_t *)(a1 + 24);
  if ( v5 < *(uint32_t *)(a1 + 20) )
    v5 = v4 % *(uint32_t *)(a1 + 16);
  v12 = *(int (**)(uint32_t, int))(a1 + 4);
  v6 = (uint32_t *)(*(uint32_t *)a1 + 4 * v5);
  for ( i = (uint32_t *)*v6; i != nullptr; i = (uint32_t *)i[1] )
  {
    ++*(uint32_t *)(a1 + 88);
    if ( i[2] == v4 )
    {
      ++*(uint32_t *)(a1 + 60);
      v10 = v6;
      v8 = v12(*i, a2);
      v6 = v10;
      if ( v8 == 0 )
        break;
    }
    v6 = i + 1;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: lh_strhash  (binary VA: 0x19bf670)
// Original: lh_strhash
// ----------------------------------------------------------------------------
int lh_strhash(char *a1)
{
  int result;
  char *v2;
  char v3;
  unsigned int v4;
  int v5;
  unsigned int v6;

  result = 0;
  v2 = a1;
  if ( a1 != nullptr )
  {
    v3 = *a1;
    if ( *a1 != 0 )
    {
      v4 = 0;
      v5 = 256;
      do
      {
        ++v2;
        v6 = v5 | v3;
        v5 += 256;
        v4 = __builtin_rotateleft32(v4, (v6 ^ (v6 >> 2)) & 0xF) ^ (v6 * v6);
        v3 = *v2;
      }
      while ( *v2 != 0 );
      return v4 ^ HIWORD(v4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: lh_new  (binary VA: 0x19bf6d0)
// Original: lh_new
// ----------------------------------------------------------------------------
uint32_t * lh_new(int (*a1)(char *a1), int (**a2)(const char *s1, const char *s2))
{
  int (*v2)(char *);
  int (**v3)(const char *, const char *);
  uint32_t *v4;
  uint8_t *v5;
  int v6;
  void *v8;

  v2 = a1;
  v3 = a2;
  v4 = (uint32_t *)(CRYPTO_malloc(96, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v4 != nullptr )
  {
    v5 = CRYPTO_malloc(64, (int)(uintptr_t)(&unk_1B15112), 0);
    *v4 = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      v6 = 0;
      while ( 1 )
      {
        *(uint32_t *)&v5[v6] = 0;
        v6 += 4;
        if ( v6 == 64 )
          break;
        v5 = (uint8_t *)*v4;
      }
      if ( a2 == nullptr )
        v3 = (int (**)(const char *, const char *))(uintptr_t)((int (*)(const char* _Nonnull, const char* _Nonnull))strcmp);
      if ( a1 == nullptr )
        v2 = lh_strhash;
      v4[1] = (uint32_t)(uintptr_t)(v3);
      v4[2] = (uint32_t)(uintptr_t)(v2);
      v4[3] = 8;
      v4[4] = 16;
      v4[5] = 0;
      v4[6] = 8;
      v4[7] = 512;
      v4[8] = 256;
      v4[9] = 0;
      v4[10] = 0;
      v4[11] = 0;
      v4[12] = 0;
      v4[13] = 0;
      v4[14] = 0;
      v4[15] = 0;
      v4[16] = 0;
      v4[17] = 0;
      v4[18] = 0;
      v4[19] = 0;
      v4[20] = 0;
      v4[21] = 0;
      v4[22] = 0;
      v4[23] = 0;
    }
    else
    {
      v8 = v4;
      v4 = nullptr;
      CRYPTO_free(v8);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: lh_free  (binary VA: 0x19bf820)
// Original: lh_free
// ----------------------------------------------------------------------------
void lh_free(void **a1)
{
  uint32_t *v1;
  unsigned int v2;
  uint32_t *v3;
  uint32_t *v4;

  if ( a1 != nullptr )
  {
    v1 = (uint32_t *)(*a1);
    if ( a1[3] != nullptr )
    {
      v2 = 0;
      do
      {
        v3 = (uint32_t *)v1[v2];
        if ( v3 != nullptr )
        {
          while ( 1 )
          {
            v4 = (uint32_t *)v3[1];
            CRYPTO_free(v3);
            if ( v4 == nullptr )
              break;
            v3 = v4;
          }
          v1 = (uint32_t *)(*a1);
        }
        ++v2;
      }
      while ( (unsigned int)(uintptr_t)(a1[3]) > v2 );
    }
    CRYPTO_free(v1);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: lh_insert  (binary VA: 0x19bf890)
// Original: lh_insert
// ----------------------------------------------------------------------------
int * lh_insert(uint32_t *a1, int a2)
{
  int v2;
  unsigned int v3;
  uint64_t v4; // rax
  int v5;
  int v6;
  int *v7;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  int **v11;
  int *v12;
  int **v13;
  int *result;
  int v15;
  unsigned int v16;
  uint8_t *v17;
  unsigned int v18;
  typedef int _g4_t_v19;
  typedef unsigned int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v20)) > _g4_s1 ? (28u + sizeof(_g4_t_v20)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v2 = (int)(uintptr_t)(a1);
  v3 = a1[3];
  v4 = (unsigned int)(a1[9] << 8);
  a1[23] = 0;
  if ( a1[7] <= (unsigned int)(v4 / v3) )
  {
    v5 = a1[6];
    a1[3] = v3 + 1;
    v6 = a1[5];
    ++a1[10];
    a1[5] = v6 + 1;
    v19 = v6;
    v7 = (int *)(*a1 + 4 * v6);
    v8 = (uint32_t *)(*a1 + 4 * (v6 + v5));
    *v8 = 0;
    v9 = *v7;
    v10 = a1[4];
    if ( *v7 != 0 )
    {
      do
      {
        while ( v19 != *(uint32_t *)(v9 + 8) % v10 )
        {
          *v7 = *(uint32_t *)(v9 + 4);
          *(uint32_t *)(v9 + 4) = *v8;
          *v8 = v9;
          v9 = *v7;
          if ( *v7 == 0 )
            goto LABEL_7;
        }
        v7 = (int *)(v9 + 4);
        v9 = *(uint32_t *)(v9 + 4);
      }
      while ( v9 != 0 );
LABEL_7:
      v2 = (int)(uintptr_t)(a1);
    }
    if ( *(uint32_t *)(v2 + 20) >= *(uint32_t *)(v2 + 24) )
    {
      v15 = *(uint32_t *)(v2 + 16);
      v16 = 2 * v15;
      v17 = CRYPTO_realloc(*(void **)v2, 8 * v15, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v17 != nullptr )
      {
        v18 = *(uint32_t *)(v2 + 16);
        if ( v16 > v18 )
        {
          do
            *(uint32_t *)&v17[4 * v18++] = 0;
          while ( v16 > v18 );
          v18 = *(uint32_t *)(v2 + 16);
        }
        *(uint32_t *)(v2 + 24) = v18;
        *(uint32_t *)(v2 + 16) = v16;
        ++*(uint32_t *)(v2 + 44);
        *(uint32_t *)(v2 + 20) = 0;
        *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v17);
      }
      else
      {
        ++*(uint32_t *)(v2 + 92);
        *(uint32_t *)(v2 + 20) = 0;
      }
    }
  }
  v11 = (int **)sub_19BF5E0(v2, a2, v20);
  v12 = *v11;
  v13 = v11;
  if ( *v11 != nullptr )
  {
    result = (int *)*v12;
    *v12 = a2;
    ++*(uint32_t *)(v2 + 68);
  }
  else
  {
    result = (int *)CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( result != nullptr )
    {
      result[1] = 0;
      *result = a2;
      result[2] = v20[0];
      *v13 = result;
      ++*(uint32_t *)(v2 + 64);
      ++*(uint32_t *)(v2 + 36);
      return nullptr;
    }
    else
    {
      ++*(uint32_t *)(v2 + 92);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: lh_delete  (binary VA: 0x19bfa30)
// Original: lh_delete
// ----------------------------------------------------------------------------
int lh_delete(int a1, int a2)
{
  int **v2;
  int *v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  unsigned int v10;
  uint8_t *v11;
  int *v12;
  int v13;
  unsigned int v15;
  unsigned int v16[4];

  *(uint32_t *)(a1 + 92) = 0;
  v2 = (int **)sub_19BF5E0(a1, a2, v16);
  v3 = *v2;
  if ( *v2 != nullptr )
  {
    *v2 = (int *)v3[1];
    v4 = *v3;
    CRYPTO_free(v3);
    v5 = *(uint32_t *)(a1 + 12);
    v6 = *(uint32_t *)(a1 + 36) - 1;
    ++*(uint32_t *)(a1 + 72);
    *(uint32_t *)(a1 + 36) = v6;
    if ( v5 > 0x10 && *(uint32_t *)(a1 + 32) >= (v6 << 8) / v5 )
    {
      v7 = (int *)(*(uint32_t *)a1 + 4 * (*(uint32_t *)(a1 + 24) + *(uint32_t *)(a1 + 20)) - 4);
      v8 = *v7;
      *v7 = 0;
      v9 = *(uint32_t *)(a1 + 20);
      if ( v9 != 0 )
      {
        v10 = v9 - 1;
        v11 = *(uint8_t **)a1;
        *(uint32_t *)(a1 + 20) = v10;
      }
      else
      {
        v11 = CRYPTO_realloc(*(void **)a1, 4 * *(uint32_t *)(a1 + 24), (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v11 == nullptr )
        {
          ++*(uint32_t *)(a1 + 92);
          return v4;
        }
        v15 = *(uint32_t *)(a1 + 24);
        ++*(uint32_t *)(a1 + 52);
        v15 >>= 1;
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v11);
        *(uint32_t *)(a1 + 24) = v15;
        v10 = v15 - 1;
        *(uint32_t *)(a1 + 16) >>= 1;
        *(uint32_t *)(a1 + 20) = v10;
      }
      v12 = (int *)&v11[4 * v10];
      --*(uint32_t *)(a1 + 12);
      ++*(uint32_t *)(a1 + 48);
      v13 = *v12;
      if ( *v12 != 0 )
      {
        while ( *(uint32_t *)(v13 + 4) != 0 )
          v13 = *(uint32_t *)(v13 + 4);
        *(uint32_t *)(v13 + 4) = v8;
      }
      else
      {
        *v12 = v8;
      }
    }
  }
  else
  {
    ++*(uint32_t *)(a1 + 76);
    return 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: lh_retrieve  (binary VA: 0x19bfb70)
// Original: lh_retrieve
// ----------------------------------------------------------------------------
uint32_t * lh_retrieve(uint32_t *a1, int a2)
{
  uint32_t *result;
  unsigned int v3[4];

  a1[23] = 0;
  result = (uint32_t *)*sub_19BF5E0((int)(uintptr_t)(a1), a2, v3);
  if ( result != nullptr )
  {
    result = (uint32_t *)*result;
    ++a1[20];
  }
  else
  {
    ++a1[21];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: lh_doall  (binary VA: 0x19bfbb0)
// Original: lh_doall
// ----------------------------------------------------------------------------
void lh_doall(uint32_t *a1, void (*a2)(uint32_t))
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;

  if ( a1 != nullptr )
  {
    v5 = a1[3] - 1;
    if ( v5 >= 0 )
    {
      v2 = 4 * a1[3] - 4;
      do
      {
        v3 = *(uint32_t **)(*a1 + v2);
        if ( v3 != nullptr )
        {
          while ( 1 )
          {
            v4 = (uint32_t *)v3[1];
            a2(*v3);
            if ( v4 == nullptr )
              break;
            v3 = v4;
          }
        }
        v2 -= 4;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: lh_doall_arg  (binary VA: 0x19bfc20)
// Original: lh_doall_arg
// ----------------------------------------------------------------------------
void lh_doall_arg(uint32_t *a1, void (*a2)(uint32_t, int), int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;

  if ( a1 != nullptr )
  {
    v5 = a1[3] - 1;
    if ( v5 >= 0 )
    {
      v6 = 4 * a1[3] - 4;
      do
      {
        v3 = *(uint32_t **)(*a1 + v6);
        if ( v3 != nullptr )
        {
          while ( 1 )
          {
            v4 = (uint32_t *)v3[1];
            a2(*v3, a3);
            if ( v4 == nullptr )
              break;
            v3 = v4;
          }
        }
        v6 -= 4;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: lh_num_items  (binary VA: 0x19bfca0)
// Original: lh_num_items
// ----------------------------------------------------------------------------
int lh_num_items(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 36);
  return result;
}

// ----------------------------------------------------------------------------
// Function: MD4_Init  (binary VA: 0x19bfcb0)
// Original: MD4_Init
// ----------------------------------------------------------------------------
int MD4_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 92;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 91;
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
  return 1;
}

// ----------------------------------------------------------------------------
// Function: md4_block_data_order  (binary VA: 0x19bfd40)
// Original: md4_block_data_order
// ----------------------------------------------------------------------------
int * md4_block_data_order(int *a1, int *a2, int *a3)
{
  int *result;
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
  bool v52;
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

  v56 = *a1;
  result = a3;
  v53 = a1[1];
  v54 = a1[2];
  v55 = a1[3];
  if ( a3 != nullptr )
  {
    result = a2;
    do
    {
      v57 = *result;
      v4 = result[1];
      v5 = __builtin_rotateleft32((v55 ^ v53 & (v54 ^ v55)) + v56 + *result, 3);
      v59 = result[2];
      v6 = __builtin_rotateleft32((v54 ^ v5 & (v53 ^ v54)) + v4 + v55, 7);
      v60 = result[3];
      v7 = __builtin_rotateleft32((v53 ^ v6 & (v5 ^ v53)) + v54 + v59, 11);
      v58 = v4;
      v61 = result[4];
      v62 = result[5];
      v8 = __builtin_rotateleft32(v53 + v60 + (v5 ^ v7 & (v5 ^ v6)), 19);
      v63 = result[6];
      v9 = __builtin_rotateleft32((v6 ^ v8 & (v6 ^ v7)) + v61 + v5, 3);
      v64 = result[7];
      v10 = __builtin_rotateleft32((v7 ^ v9 & (v7 ^ v8)) + v62 + v6, 7);
      v65 = result[8];
      v11 = __builtin_rotateleft32((v8 ^ v10 & (v8 ^ v9)) + v63 + v7, 11);
      v66 = result[9];
      v12 = __builtin_rotateleft32((v9 ^ v11 & (v9 ^ v10)) + v64 + v8, 19);
      v67 = result[10];
      v13 = __builtin_rotateleft32((v10 ^ v12 & (v10 ^ v11)) + v65 + v9, 3);
      v68 = result[11];
      v14 = __builtin_rotateleft32((v11 ^ v13 & (v11 ^ v12)) + v66 + v10, 7);
      v69 = result[12];
      v15 = __builtin_rotateleft32((v12 ^ v14 & (v12 ^ v13)) + v67 + v11, 11);
      v70 = result[13];
      v16 = __builtin_rotateleft32((v13 ^ v15 & (v13 ^ v14)) + v68 + v12, 19);
      v71 = result[14];
      v17 = __builtin_rotateleft32((v14 ^ v16 & (v14 ^ v15)) + v69 + v13, 3);
      v72 = result[15];
      v18 = __builtin_rotateleft32((v15 ^ v17 & (v15 ^ v16)) + v70 + v14, 7);
      result += 16;
      v19 = __builtin_rotateleft32((v16 ^ v18 & (v16 ^ v17)) + v71 + v15, 11);
      v20 = __builtin_rotateleft32((v17 ^ v19 & (v17 ^ v18)) + v72 + v16, 19);
      v21 = __builtin_rotateleft32(v57 + v17 + 1518500249 + (v18 & v19 | v20 & (v18 | v19)), 3);
      v22 = __builtin_rotateleft32(v61 + v18 + 1518500249 + (v19 & v20 | v21 & (v19 | v20)), 5);
      v23 = __builtin_rotateleft32(v65 + v19 + 1518500249 + (v20 & v21 | v22 & (v20 | v21)), 9);
      v24 = __builtin_rotateleft32(v69 + v20 + 1518500249 + (v21 & v22 | v23 & (v21 | v22)), 13);
      v25 = __builtin_rotateleft32(v4 + v21 + 1518500249 + (v22 & v23 | v24 & (v22 | v23)), 3);
      v26 = __builtin_rotateleft32(v62 + v22 + 1518500249 + (v23 & v24 | v25 & (v23 | v24)), 5);
      v27 = __builtin_rotateleft32(v66 + v23 + 1518500249 + (v24 & v25 | v26 & (v24 | v25)), 9);
      v28 = __builtin_rotateleft32(v70 + v24 + 1518500249 + (v25 & v26 | v27 & (v25 | v26)), 13);
      v29 = __builtin_rotateleft32(v59 + v25 + 1518500249 + (v26 & v27 | v28 & (v26 | v27)), 3);
      v30 = __builtin_rotateleft32(v63 + v26 + 1518500249 + (v27 & v28 | v29 & (v27 | v28)), 5);
      v31 = __builtin_rotateleft32(v67 + v27 + 1518500249 + (v28 & v29 | v30 & (v28 | v29)), 9);
      v32 = __builtin_rotateleft32(v71 + v28 + 1518500249 + (v29 & v30 | v31 & (v29 | v30)), 13);
      v33 = __builtin_rotateleft32(v60 + v29 + 1518500249 + (v30 & v31 | v32 & (v30 | v31)), 3);
      v34 = __builtin_rotateleft32(v64 + v30 + 1518500249 + (v31 & v32 | v33 & (v31 | v32)), 5);
      v35 = __builtin_rotateleft32(v68 + v31 + 1518500249 + (v32 & v33 | v34 & (v32 | v33)), 9);
      v36 = __builtin_rotateleft32(v72 + v32 + 1518500249 + (v33 & v34 | v35 & (v33 | v34)), 13);
      v37 = __builtin_rotateleft32(v57 + v33 + 1859775393 + (v36 ^ v34 ^ v35), 3);
      v38 = __builtin_rotateleft32(v65 + v34 + 1859775393 + (v37 ^ v35 ^ v36), 9);
      v39 = __builtin_rotateleft32((v38 ^ v36 ^ v37) + v61 + v35 + 1859775393, 11);
      v40 = __builtin_rotateleft32((v39 ^ v37 ^ v38) + v69 + v36 + 1859775393, 15);
      v41 = __builtin_rotateleft32((v40 ^ v38 ^ v39) + v59 + v37 + 1859775393, 3);
      v42 = __builtin_rotateleft32((v41 ^ v39 ^ v40) + v67 + v38 + 1859775393, 9);
      v43 = __builtin_rotateleft32(v63 + v39 + 1859775393 + (v42 ^ v40 ^ v41), 11);
      v44 = __builtin_rotateleft32((v43 ^ v41 ^ v42) + v71 + v40 + 1859775393, 15);
      v45 = __builtin_rotateleft32((v44 ^ v42 ^ v43) + v58 + v41 + 1859775393, 3);
      v46 = __builtin_rotateleft32(v66 + v42 + 1859775393 + (v45 ^ v43 ^ v44), 9);
      v47 = __builtin_rotateleft32((v46 ^ v44 ^ v45) + v62 + v43 + 1859775393, 11);
      v48 = __builtin_rotateleft32((v47 ^ v45 ^ v46) + v70 + v44 + 1859775393, 15);
      v49 = __builtin_rotateleft32(v60 + v45 + 1859775393 + (v48 ^ v46 ^ v47), 3);
      v50 = __builtin_rotateleft32(v68 + v46 + 1859775393 + (v49 ^ v47 ^ v48), 9);
      v51 = __builtin_rotateleft32(v64 + v47 + 1859775393 + (v50 ^ v48 ^ v49), 11);
      v56 += v49;
      v54 += v51;
      v55 += v50;
      v53 += __builtin_rotateleft32(v72 + v48 + 1859775393 + (v51 ^ v49 ^ v50), 15);
      *a1 = v56;
      v52 = a3 == (int *)((char *)&dword_0 + 1);
      a3 = (int *)((char *)a3 - 1);
      a1[1] = v53;
      a1[2] = v54;
      a1[3] = v55;
    }
    while ( !v52 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: MD4_Final  (binary VA: 0x19c0310)
// Original: MD4_Final
// ----------------------------------------------------------------------------
int MD4_Final(int *a1, int *a2)
{
  int v2;
  uint16_t *v3;
  size_t n;
  int v5;
  unsigned int v6;
  uint16_t *v7;

  v2 = a2[22];
  v3 = (uint16_t *)(a2 + 6);
  n = 55 - v2;
  v5 = v2 + 1;
  *((uint8_t *)a2 + v2 + 24) = 0x80;
  if ( (unsigned int)(v2 + 1) > 0x38 )
  {
    memset((char *)v3 + v5, 0, 63 - v2);
    md4_block_data_order(a2, a2 + 6, (int *)((char *)&dword_0 + 1));
    n = 56;
    v5 = 0;
  }
  memset((char *)v3 + v5, 0, n);
  a2[20] = a2[4];
  a2[21] = a2[5];
  md4_block_data_order(a2, a2 + 6, (int *)((char *)&dword_0 + 1));
  a2[22] = 0;
  v6 = 64;
  if ( ((uint8_t)(uintptr_t)v3 & 1) != 0 )
  {
    v3 = (uint16_t *)((char *)a2 + 25);
    *((uint8_t *)a2 + 24) = 0;
    LOBYTE(v6) = 63;
    if ( (((unsigned int)(uintptr_t)(a2) + 25) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( ((uint8_t)(uintptr_t)v3 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *v3 = 0;
  v6 -= 2;
  ++v3;
LABEL_5:
  memset(v3, 0, 4 * (v6 >> 2));
  v7 = &v3[2 * (v6 >> 2)];
  if ( (v6 & 2) != 0 )
    *v7++ = 0;
  if ( (v6 & 1) != 0 )
    *(uint8_t *)v7 = 0;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  return 1;
}

// ----------------------------------------------------------------------------
// Function: MD4_Transform  (binary VA: 0x19c0460)
// Original: MD4_Transform
// ----------------------------------------------------------------------------
int * MD4_Transform(int *a1, int *a2)
{
  return md4_block_data_order(a1, a2, (int *)((char *)&dword_0 + 1));
}

// ----------------------------------------------------------------------------
// Function: MD4_Update  (binary VA: 0x19c04a0)
// Original: MD4_Update
// ----------------------------------------------------------------------------
int MD4_Update(int a1, char *src, size_t a3)
{
  size_t v3;
  size_t v4;
  size_t v5;
  bool v6; // cc
  int v7;
  int v8;
  int v9;
  char *v10;
  uint16_t *v11;
  unsigned int v12;
  uint8_t *v13;
  size_t v14;
  size_t v16;
  int *n;
  char *v18;
  int *v19;

  v3 = a3;
  if ( a3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 16);
    v5 = v4 + 8 * a3;
    v6 = v4 <= v5;
    v7 = *(uint32_t *)(a1 + 20);
    if ( !v6 )
      ++v7;
    *(uint32_t *)(a1 + 16) = v5;
    v8 = *(uint32_t *)(a1 + 88);
    *(uint32_t *)(a1 + 20) = (a3 >> 29) + v7;
    v18 = src;
    if ( v8 != 0 )
    {
      v19 = (int *)(a1 + 24);
      if ( a3 <= 0x3F && a3 + v8 <= 0x3F )
      {
        memcpy((char *)v19 + v8, src, a3);
        *(uint32_t *)(a1 + 88) += a3;
        return 1;
      }
      v9 = 64 - v8;
      v3 = a3 - (64 - v8);
      memcpy((char *)v19 + v8, src, 64 - v8);
      md4_block_data_order((int *)a1, v19, (int *)((char *)&dword_0 + 1));
      *(uint32_t *)(a1 + 88) = 0;
      v10 = &src[v9];
      v11 = (uint16_t *)(a1 + 24);
      v18 = v10;
      v12 = 64;
      if ( ((uint8_t)(uintptr_t)v19 & 1) != 0 )
      {
        *(uint8_t *)(a1 + 24) = 0;
        v11 = (uint16_t *)(a1 + 25);
        LOBYTE(v12) = 63;
      }
      if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
      {
        *v11 = 0;
        v12 -= 2;
        ++v11;
      }
      memset(v11, 0, 4 * (v12 >> 2));
      v13 = (uint8_t *)(&v11[2 * (v12 >> 2)]);
      if ( (v12 & 2) == 0 )
      {
        if ( (v12 & 1) == 0 )
          goto LABEL_13;
LABEL_20:
        *v13 = 0;
        v14 = v3 >> 6;
        if ( v3 >> 6 == 0 )
        {
LABEL_14:
          if ( v3 == 0 )
            return 1;
LABEL_16:
          *(uint32_t *)(a1 + 88) = v3;
          memcpy((void *)(a1 + 24), v18, v3);
          return 1;
        }
LABEL_17:
        n = (int *)v14;
        v16 = v14 << 6;
        v3 -= v16;
        md4_block_data_order((int *)a1, (int *)v18, n);
        v18 += v16;
        if ( v3 == 0 )
          return 1;
        goto LABEL_16;
      }
      *(uint16_t *)v13 = 0;
      v13 += 2;
      if ( (v12 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_13:
    v14 = v3 >> 6;
    if ( v3 >> 6 == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19C0670  (binary VA: 0x19c0670)
// Original: sub_19C0670
// ----------------------------------------------------------------------------
unsigned int sub_19C0670(int a1, uint8_t *a2, unsigned int a3)
{
  unsigned int result;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int16_t v11; // edx^2
  unsigned int v12;
  unsigned int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[39];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (23u + sizeof(_g4_t_v19)) > _g4_s5 ? (23u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v23)) > _g4_s9 ? (36u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v24)) > _g4_s10 ? (40u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v25)) > _g4_s11 ? (44u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v26)) > _g4_s12 ? (48u + sizeof(_g4_t_v26)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 23u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);

  result = a3;
  if ( a3 != 0 )
  {
    v18 = 0;
    v19 = *(uint8_t *)(a1 + 12);
    v17 = *(uint8_t *)(a1 + 20);
    v20 = (uint8_t *)(a1 + 12);
    v21 = (uint8_t *)(a1 + 20);
    do
    {
      v6 = a2[5];
      v24 = (a2[3] << 24) | *a2 | (a2[2] << 16) | (a2[1] << 8);
      v7 = a2[6];
      v22 = v24;
      v16 = v24;
      v8 = (a2[7] << 24) | a2[4] | (v7 << 16) | (v6 << 8);
      a2 += 8;
      v25 = v8;
      v23 = v8;
      v15 = v8;
      *(uint8_t *)(a1 + 12) = v19 & 0x9F | 0x40;
      *(uint8_t *)(a1 + 20) = v17 & 0x9F | 0x20;
      DES_set_odd_parity((int)(uintptr_t)(v20));
      DES_set_key_unchecked(v20, v26);
      DES_encrypt1(&v22, v26, 1);
      DES_set_odd_parity((int)(uintptr_t)(v21));
      DES_set_key_unchecked(v21, v26);
      DES_encrypt1(&v24, v26, 1);
      v9 = v16 ^ v24;
      v10 = v15 ^ v25;
      v11 = HIWORD(v22) ^ HIWORD(v16);
      v14 = v23 ^ v15;
      v12 = (v22 ^ (unsigned int)v16) >> 8;
      v19 = v22 ^ v16;
      *(uint8_t *)(a1 + 12) = v22 ^ v16;
      *(uint8_t *)(a1 + 13) = v12;
      v17 = v9;
      *(uint8_t *)(a1 + 20) = v9;
      *(uint8_t *)(a1 + 15) = HIBYTE(v11);
      *(uint32_t *)(a1 + 16) = v10;
      *(uint8_t *)(a1 + 14) = v11;
      *(uint8_t *)(a1 + 21) = BYTE1(v9);
      v18 += 8;
      *(uint8_t *)(a1 + 23) = HIBYTE(v9);
      *(uint16_t *)(a1 + 24) = v14;
      v13 = HIWORD(v9);
      *(uint8_t *)(a1 + 26) = BYTE2(v14);
      result = v18;
      *(uint8_t *)(a1 + 22) = v13;
      *(uint8_t *)(a1 + 27) = HIBYTE(v14);
    }
    while ( a3 > v18 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: MDC2_Init  (binary VA: 0x19c0870)
// Original: MDC2_Init
// ----------------------------------------------------------------------------
int MDC2_Init(uint32_t *a1)
{
  *a1 = 0;
  a1[7] = 1;
  std::memcpy(a1 + 3, "RRRRRRRR%%%%%%%%", 16);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: MDC2_Update  (binary VA: 0x19c08b0)
// Original: MDC2_Update
// ----------------------------------------------------------------------------
int MDC2_Update(uint8_t *a1, char *src, size_t a3)
{
  size_t v3;
  int v4;
  int v5;
  unsigned int v6;
  size_t n;

  v3 = a3;
  v4 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( a3 + v4 <= 7 )
    {
      memcpy(&a1[v4 + 4], src, a3);
      *(uint32_t *)a1 += a3;
      return 1;
    }
    v5 = 8 - v4;
    v3 = a3 - (8 - v4);
    memcpy(&a1[v4 + 4], src, 8 - v4);
    *(uint32_t *)a1 = 0;
    src += v5;
    sub_19C0670((int)(uintptr_t)(a1), a1 + 4, 8u);
  }
  v6 = v3 & 0xFFFFFFF8;
  if ( (v3 & 0xFFFFFFF8) != 0 )
    sub_19C0670((int)(uintptr_t)(a1), (uint8_t *)src, v3 & 0xFFFFFFF8);
  n = v3 - v6;
  if ( n != 0 )
  {
    memcpy(a1 + 4, &src[v6], n);
    *(uint32_t *)a1 = n;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: MDC2_Final  (binary VA: 0x19c09a0)
// Original: MDC2_Final
// ----------------------------------------------------------------------------
int MDC2_Final(uint32_t *a1, int a2)
{
  int v2;

  v2 = *(uint32_t *)a2;
  if ( *(uint32_t *)(a2 + 28) == 2 )
  {
    *(uint8_t *)(a2 + v2++ + 4) = 0x80;
  }
  else if ( v2 == 0 )
  {
    goto LABEL_4;
  }
  memset((void *)(a2 + v2 + 4), 0, 8 - v2);
  sub_19C0670(a2, (uint8_t *)(a2 + 4), 8u);
LABEL_4:
  *a1 = *(uint32_t *)(a2 + 12);
  a1[1] = *(uint32_t *)(a2 + 16);
  a1[2] = *(uint32_t *)(a2 + 20);
  a1[3] = *(uint32_t *)(a2 + 24);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19C0A40  (binary VA: 0x19c0a40)
// Original: sub_19C0A40
// ----------------------------------------------------------------------------
int sub_19C0A40(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19C0A70  (binary VA: 0x19c0a70)
// Original: sub_19C0A70
// ----------------------------------------------------------------------------
int sub_19C0A70(int a1, int a2)
{
  return strcmp(*(const char **)(*(uint32_t *)a1 + 8), *(const char **)(*(uint32_t *)a2 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_19C0AB0  (binary VA: 0x19c0ab0)
// Original: sub_19C0AB0
// ----------------------------------------------------------------------------
int sub_19C0AB0(int a1)
{
  int (**v2)(uint32_t);

  if ( dword_2141D04 == 0 || sk_num(dword_2141D04) <= *(uint32_t *)a1 )
    return *(uint32_t *)a1 ^ lh_strhash(*(char **)(a1 + 8));
  v2 = (int (**)(uint32_t))sk_value(dword_2141D04, *(uint32_t *)a1);
  return *(uint32_t *)a1 ^ (*v2)(*(uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_19C0B30  (binary VA: 0x19c0b30)
// Original: sub_19C0B30
// ----------------------------------------------------------------------------
int sub_19C0B30(uint32_t *a1, int a2)
{
  int result;

  result = a2;
  if ( *a1 == *(uint32_t *)a2 )
    return (*(int (**)(uint32_t *, uint32_t))(a2 + 4))(a1, *(uint32_t *)(a2 + 8));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C0B60  (binary VA: 0x19c0b60)
// Original: sub_19C0B60
// ----------------------------------------------------------------------------
uint32_t * sub_19C0B60(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;

  result = a2;
  if ( *a1 == *a2 )
  {
    v3 = a2[1];
    *(uint32_t *)(a2[2] + 4 * v3) = (uint32_t)(uintptr_t)(a1);
    a2[1] = v3 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C0B90  (binary VA: 0x19c0b90)
// Original: sub_19C0B90
// ----------------------------------------------------------------------------
int sub_19C0B90(int a1, int a2)
{
  int result;
  int v3;

  result = *(uint32_t *)a1 - *(uint32_t *)a2;
  if ( *(uint32_t *)a1 == *(uint32_t *)a2 )
  {
    if ( dword_2141D04 != 0 && sk_num(dword_2141D04) > *(uint32_t *)a1 )
    {
      v3 = sk_value(dword_2141D04, *(uint32_t *)a1);
      return (*(int (**)(uint32_t, uint32_t))(v3 + 4))(*(uint32_t *)(a1 + 8), *(uint32_t *)(a2 + 8));
    }
    else
    {
      return strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C10D0  (binary VA: 0x19c10d0)
// Original: sub_19C10D0
// ----------------------------------------------------------------------------
int sub_19C10D0(int *a1)
{
  int result;

  result = (int)(uintptr_t)(a1);
  if ( a1 != nullptr && ((int32_t)dword_2141D08 < 0 || (int32_t)dword_2141D08 == *a1) )
    return OBJ_NAME_remove(a1[2], *a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C1300  (binary VA: 0x19c1300)
// Original: sub_19C1300
// ----------------------------------------------------------------------------
int sub_19C1300(int a1)
{
  int result;

  *(uint32_t *)(*(uint32_t *)(a1 + 4) + 8) = 0;
  result = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(result + 20) |= 0xDu;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C1320  (binary VA: 0x19c1320)
// Original: sub_19C1320
// ----------------------------------------------------------------------------
int sub_19C1320(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  ++*(uint32_t *)(result + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C1330  (binary VA: 0x19c1330)
// Original: sub_19C1330
// ----------------------------------------------------------------------------
int sub_19C1330(void *a1)
{
  int v1;

  v1 = *((uint32_t *)a1 + 1);
  if ( (*(uint32_t *)(v1 + 8))-- == 1 )
    ASN1_OBJECT_free(*((void **)a1 + 1));
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19C1380  (binary VA: 0x19c1380)
// Original: sub_19C1380
// ----------------------------------------------------------------------------
int sub_19C1380(const char ***a1, uint32_t *a2)
{
  return strcmp(**a1, off_203FC20[6 * *a2]);
}

// ----------------------------------------------------------------------------
// Function: sub_19C13C0  (binary VA: 0x19c13c0)
// Original: sub_19C13C0
// ----------------------------------------------------------------------------
int sub_19C13C0(int a1, uint32_t *a2)
{
  return strcmp(*(const char **)(*(uint32_t *)a1 + 4), (&off_203FC24)[6 * *a2]);
}

// ----------------------------------------------------------------------------
// Function: sub_19C1400  (binary VA: 0x19c1400)
// Original: sub_19C1400
// ----------------------------------------------------------------------------
int sub_19C1400(int a1, uint32_t *a2)
{
  char **v2;
  int result;

  v2 = (char **)(&off_203FC20[6 * *a2]);
  result = *(uint32_t *)(*(uint32_t *)a1 + 12) - (uint32_t)(uintptr_t)(v2[3]);
  if ( result == 0 )
    return memcmp(*(const void **)(*(uint32_t *)a1 + 16), v2[4], *(uint32_t *)(*(uint32_t *)a1 + 12));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C1460  (binary VA: 0x19c1460)
// Original: sub_19C1460
// ----------------------------------------------------------------------------
int sub_19C1460(int *a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8; // kr00_4
  int v9;
  int v10;

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 == 1 )
  {
    v10 = lh_strhash(*(char **)v2);
    v4 = *a1;
    return v10 & 0x3FFFFFFF | (v4 << 30);
  }
  if ( *a1 <= 1 )
  {
    if ( v1 != 0 )
      return 0;
    v5 = *(uint32_t *)(v2 + 12);
    v6 = *(uint8_t **)(v2 + 16);
    v10 = v5 << 20;
    v4 = 0;
    if ( v5 > 0 )
    {
      v7 = 0;
      do
      {
        v8 = v7;
        v7 += 3;
        v9 = *v6++;
        v10 ^= v9 << (v8 % 24);
      }
      while ( v7 != 3 * v5 );
      v4 = 0;
    }
    return v10 & 0x3FFFFFFF | (v4 << 30);
  }
  if ( v1 == 2 )
  {
    v10 = lh_strhash(*(char **)(v2 + 4));
    v4 = *a1;
    return v10 & 0x3FFFFFFF | (v4 << 30);
  }
  if ( v1 == 3 )
  {
    v4 = 3;
    v10 = *(uint32_t *)(v2 + 8);
    return v10 & 0x3FFFFFFF | (v4 << 30);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19C1560  (binary VA: 0x19c1560)
// Original: sub_19C1560
// ----------------------------------------------------------------------------
int sub_19C1560(int *a1, uint32_t *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  const char *s1;
  const char *s2;

  v2 = *a1;
  result = *a1 - *a2;
  if ( *a1 == *a2 )
  {
    v4 = a1[1];
    v5 = a2[1];
    switch ( v2 )
    {
      case 0:
        result = *(uint32_t *)(v4 + 12) - *(uint32_t *)(v5 + 12);
        if ( result == 0 )
          return memcmp(*(const void **)(v4 + 16), *(const void **)(v5 + 16), *(uint32_t *)(v4 + 12));
        break;
      case 1:
        s1 = *(const char **)v4;
        if ( *(uint32_t *)v4 != 0 )
        {
          s2 = *(const char **)v5;
          result = 1;
          if ( s2 == nullptr )
            return result;
          return strcmp(s1, s2);
        }
        return -1;
      case 2:
        s1 = *(const char **)(v4 + 4);
        if ( s1 != nullptr )
        {
          s2 = *(const char **)(v5 + 4);
          result = 1;
          if ( s2 == nullptr )
            return result;
          return strcmp(s1, s2);
        }
        return -1;
      case 3:
        return *(uint32_t *)(v4 + 8) - *(uint32_t *)(v5 + 8);
      default:
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: check_defer  (binary VA: 0x19c1650)
// Original: check_defer
// ----------------------------------------------------------------------------
void check_defer(int a1)
{
  if ( a1 > 892 && obj_cleanup_defer == 0 )
    obj_cleanup_defer = 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19C2B50  (binary VA: 0x19c2b50)
// Original: sub_19C2B50
// ----------------------------------------------------------------------------
int sub_19C2B50(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19C2B60  (binary VA: 0x19c2b60)
// Original: sub_19C2B60
// ----------------------------------------------------------------------------
int sub_19C2B60(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19C2B80  (binary VA: 0x19c2b80)
// Original: sub_19C2B80
// ----------------------------------------------------------------------------
int sub_19C2B80(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19C2BD0  (binary VA: 0x19c2bd0)
// Original: sub_19C2BD0
// ----------------------------------------------------------------------------
int sub_19C2BD0(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(*(uint32_t *)a1 + 4) - *(uint32_t *)(*(uint32_t *)a2 + 4);
  if ( result == 0 )
    return *(uint32_t *)(*(uint32_t *)a1 + 8) - *(uint32_t *)(*(uint32_t *)a2 + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: pem_check_suffix  (binary VA: 0x19c7180)
// Original: pem_check_suffix
// ----------------------------------------------------------------------------
int pem_check_suffix(char *s, char *s2)
{
  signed int v2;
  size_t v3;
  int v4;
  const char *v5;
  int v6;

  v2 = strlen(s);
  v3 = strlen(s2);
  v4 = 0;
  if ( v2 > (int)(v3 + 1) )
  {
    v5 = &s[v2 - v3];
    v6 = strcmp(v5, s2);
    v4 = 0;
    if ( v6 == 0 && *(v5 - 1) == 32 )
      return v5 - 1 - s;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_19C83E0  (binary VA: 0x19c83e0)
// Original: sub_19C83E0
// ----------------------------------------------------------------------------
int sub_19C83E0(int a1, uint32_t *a2, int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;

  switch ( a1 )
  {
    case 10:
      v5 = PKCS7_stream(a4 + 2, *a2);
      result = 0;
      if ( v5 > 0 )
      {
LABEL_10:
        v6 = (int)(uintptr_t)(PKCS7_dataInit(*a2, *a4));
        a4[1] = v6;
        return v6 != 0;
      }
      return result;
    case 11:
    case 13:
      return PKCS7_dataFinal(*a2, a4[1]) > 0;
    case 12:
      goto LABEL_10;
    default:
      return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19C8490  (binary VA: 0x19c8490)
// Original: sub_19C8490
// ----------------------------------------------------------------------------
int sub_19C8490(int a1, int a2)
{
  if ( a1 == 3 )
    X509_free(*(uint32_t *)(*(uint32_t *)a2 + 16));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19C84E0  (binary VA: 0x19c84e0)
// Original: sub_19C84E0
// ----------------------------------------------------------------------------
int sub_19C84E0(int a1, int a2)
{
  if ( a1 == 3 )
    EVP_PKEY_free(*(void **)(*(uint32_t *)a2 + 28));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19C8EB0  (binary VA: 0x19c8eb0)
// Original: sub_19C8EB0
// ----------------------------------------------------------------------------
int sub_19C8EB0(int a1, unsigned int a2)
{
  int v3;
  int *v4;
  char **v6;

  v6 = OBJ_nid2obj(a2);
  if ( v6 != nullptr )
  {
    v3 = 0;
    if ( a1 != 0 )
    {
      while ( v3 < sk_num(a1) )
      {
        v4 = (int *)sk_value(a1, v3);
        if ( OBJ_cmp(*v4, (int)(uintptr_t)(v6)) == 0 )
        {
          if ( v4[1] == 0 && sk_num(v4[2]) != 0 )
            return sk_value(v4[2], 0);
          return 0;
        }
        ++v3;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19C8F60  (binary VA: 0x19c8f60)
// Original: sub_19C8F60
// ----------------------------------------------------------------------------
int sub_19C8F60(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4)
{
  int *v4;
  int v5;
  void **v6;
  uint8_t *v7;
  typedef void *_g4_t_v9;
  typedef size_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v4 = (int *)EVP_PKEY_CTX_new(a4, nullptr);
  v5 = 0;
  v6 = (void **)v4;
  if ( v4 != nullptr )
  {
    if ( EVP_PKEY_decrypt_init(v4) > 0 )
    {
      if ( EVP_PKEY_CTX_ctrl((int)(uintptr_t)(v6), -1, 512, 4, 0, a3) <= 0 )
      {
        ERR_put_error(33, 133, 152, (int)(uintptr_t)(&unk_1B15112), 0);
        EVP_PKEY_CTX_free(v6);
        return v5;
      }
      if ( EVP_PKEY_decrypt((int *)v6, 0, v12, *(uint32_t *)(*(uint32_t *)(a3 + 12) + 8), **(uint32_t **)(a3 + 12)) > 0 )
      {
        v7 = CRYPTO_malloc(v12[0], (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v7 != nullptr )
        {
          v9 = v7;
          if ( EVP_PKEY_decrypt((int *)v6, (int)(uintptr_t)(v7), v12, *(uint32_t *)(*(uint32_t *)(a3 + 12) + 8), **(uint32_t **)(a3 + 12)) <= 0 )
          {
            ERR_put_error(33, 133, 6, (int)(uintptr_t)(&unk_1B15112), 0);
            EVP_PKEY_CTX_free(v6);
            CRYPTO_free(v9);
            return v5;
          }
          v5 = 1;
          *a1 = (uint32_t)(uintptr_t)(v9);
          *a2 = v12[0];
        }
        else
        {
          ERR_put_error(33, 133, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
    EVP_PKEY_CTX_free(v6);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_19C9170  (binary VA: 0x19c9170)
// Original: sub_19C9170
// ----------------------------------------------------------------------------
int sub_19C9170(int a1)
{
  unsigned int v2;
  int result;
  uint32_t *v4;

  if ( OBJ_obj2nid(*(uint32_t *)(a1 + 16)) == 21 )
    return *(uint32_t *)(a1 + 20);
  v2 = OBJ_obj2nid(*(uint32_t *)(a1 + 16)) - 21;
  result = 0;
  if ( v2 > 5 )
  {
    v4 = *(uint32_t **)(a1 + 20);
    if ( v4 != nullptr && *v4 == 4 )
      return v4[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19C91E0  (binary VA: 0x19c91e0)
// Original: sub_19C91E0
// ----------------------------------------------------------------------------
int sub_19C91E0(int *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v7;
  int *v8;
  char v9; // bp
  uint32_t *v10;
  int v11;
  char v12; // di
  int v13;
  uint32_t *v15;
  char v16; // bp
  int v17;
  int v18;

  v5 = 0;
  v7 = *a1;
  if ( v7 != 0 )
  {
    while ( v5 < sk_num(v7) )
    {
      v8 = (int *)sk_value(*a1, v5);
      v9 = (char)(uintptr_t)(v8);
      if ( OBJ_obj2nid(*v8) == a2 )
      {
        X509_ATTRIBUTE_free(v9);
        v15 = X509_ATTRIBUTE_create(a2, a4, a5);
        v11 = 0;
        v16 = (char)(uintptr_t)(v15);
        if ( v15 != nullptr )
        {
          v17 = sk_set(*a1, v5, v15);
          v11 = 1;
          if ( v17 == 0 )
          {
            X509_ATTRIBUTE_free(v16);
            return 0;
          }
        }
        return v11;
      }
      ++v5;
      v7 = *a1;
    }
  }
  else
  {
    v18 = (int)(uintptr_t)(sk_new_null(a3, a2));
    v11 = 0;
    *a1 = v18;
    if ( v18 == 0 )
      return v11;
  }
  v10 = X509_ATTRIBUTE_create(a2, a4, a5);
  v11 = 0;
  v12 = (char)(uintptr_t)(v10);
  if ( v10 == nullptr )
    return v11;
  v13 = sk_push(*a1, v10);
  v11 = 1;
  if ( v13 != 0 )
    return v11;
  X509_ATTRIBUTE_free(v12);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19C9310  (binary VA: 0x19c9310)
// Original: sub_19C9310
// ----------------------------------------------------------------------------
int sub_19C9310(int *a1, int **a2, int a3)
{
  int v5;
  int *type;
  int v7;

  while ( 1 )
  {
    type = BIO_find_type(a2, 520);
    v7 = (int)(uintptr_t)(type);
    if ( type == nullptr )
    {
      ERR_put_error(33, 127, 108, (int)(uintptr_t)(&unk_1B15112), 0);
      return v7;
    }
    BIO_ctrl(type, 120, 0, (int)(uintptr_t)(a1));
    if ( *a1 == 0 )
      break;
    v5 = EVP_MD_CTX_md(*a1);
    if ( EVP_MD_type(v5) == a3 )
      return v7;
    a2 = (int **)BIO_next(v7);
  }
  ERR_put_error(33, 127, 68, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19C9400  (binary VA: 0x19c9400)
// Original: sub_19C9400
// ----------------------------------------------------------------------------
int sub_19C9400(uint32_t **a1, int *a2)
{
  int v4;
  uint8_t *v5;
  unsigned int v6;
  char *v7;
  int digestbyname;
  uint32_t *v9;
  int result;

  v4 = (int)(uintptr_t)(BIO_f_md());
  v5 = BIO_new(v4);
  if ( v5 == nullptr )
  {
    ERR_put_error(33, 125, 32, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v6 = OBJ_obj2nid(*a2);
  v7 = OBJ_nid2sn(v6);
  digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v7));
  if ( digestbyname == 0 )
  {
    ERR_put_error(33, 125, 109, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
    BIO_free(v5);
    return 0;
  }
  BIO_ctrl(v5, 111, 0, digestbyname);
  if ( *a1 == nullptr )
  {
    *a1 = (uint32_t *)(v5);
    return 1;
  }
  v9 = BIO_push(*a1, v5);
  result = 1;
  if ( v9 == nullptr )
  {
    ERR_put_error(33, 125, 32, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RC2_encrypt  (binary VA: 0x19ccb30)
// Original: RC2_encrypt
// ----------------------------------------------------------------------------
int RC2_encrypt(int *a1, int a2)
{
  int v2;
  unsigned int v3;
  int result;
  unsigned int i;
  unsigned int v6;
  int16_t v7; // bp
  unsigned int v8;
  uint16_t v9; // bp
  unsigned int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v13 = 3;
  v12 = 5;
  v3 = HIWORD(*a1);
  LOWORD(result) = a1[1];
  LOWORD(v11) = *a1;
  for ( i = HIWORD(a1[1]); ; i += *(uint32_t *)(a2 + 4 * (result & 0x3F)) )
  {
    do
    {
      v6 = (uint16_t)(*(uint16_t *)v2 + (result & i) + v11 + (v3 & ~(uint16_t)i));
      v11 = (2 * v6) | (v6 >> 15);
      v3 = (4 * (uint16_t)((i & v11) + *(uint16_t *)(v2 + 4) + v3 + (result & ~(uint16_t)v11)))
         | ((uint16_t)((i & v11) + *(uint16_t *)(v2 + 4) + v3 + (result & ~(uint16_t)v11)) >> 14);
      v7 = i & ~(uint16_t)v3;
      v8 = *(uint32_t *)(v2 + 12) + i;
      v9 = (v3 & v11) + *(uint16_t *)(v2 + 8) + result + v7;
      v2 += 16;
      result = (8 * v9) | (v9 >> 13);
      v10 = (uint16_t)((v3 & ((8 * v9) | (v9 >> 13))) + v8 + (v11 & ~((8 * v9) | (v9 >> 13))));
      i = (32 * v10) | (v10 >> 11);
      --v12;
    }
    while ( v12 != 0 );
    if ( --v13 == 0 )
      break;
    v12 = (v13 == 2) + 5;
    v11 += *(uint32_t *)(a2 + 4 * (i & 0x3F));
    v3 += *(uint32_t *)(a2 + 4 * (v11 & 0x3F));
    result += *(uint32_t *)(a2 + 4 * (v3 & 0x3F));
  }
  result = (uint16_t)result;
  *a1 = (uint16_t)v11 | (v3 << 16);
  a1[1] = (uint16_t)result | (i << 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: RC2_decrypt  (binary VA: 0x19ccc80)
// Original: RC2_decrypt
// ----------------------------------------------------------------------------
int RC2_decrypt(int *a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int result;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  uint16_t *v13;
  int v14;
  int v15;

  v15 = 3;
  v13 = (uint16_t *)(a2 + 252);
  v14 = 5;
  v2 = a1[1];
  v9 = (uint16_t)*a1;
  v10 = (uint16_t)v2;
  v3 = HIWORD(*a1);
  v12 = HIWORD(v2);
  while ( 1 )
  {
    do
    {
      v12 = (uint16_t)((((uint16_t)v12 << 11) | (v12 >> 5)) - (v9 & ~(uint16_t)v10) - (v3 & v10) - *v13);
      v4 = (uint16_t)(((uint16_t)v10 << 13) | (v10 >> 3)) - (v12 & ~v3) - (v3 & v9) - *((uint32_t *)v13 - 1);
      v10 = (uint16_t)((((uint16_t)v10 << 13) | (v10 >> 3)) - (v12 & ~(uint16_t)v3) - (v3 & v9) - *(v13 - 2));
      v5 = (uint16_t)(((uint16_t)v3 << 14) | (v3 >> 2)) - (v10 & ~v9) - (v9 & v12) - *((uint32_t *)v13 - 2);
      v3 = (uint16_t)v5;
      v6 = (uint16_t)(((uint16_t)v9 << 15) | (v9 >> 1))
         - ((uint16_t)v5 & ~v12)
         - (v10 & v12)
         - *((uint32_t *)v13 - 3);
      v7 = v14-- == 1;
      v9 = (uint16_t)v6;
      v13 -= 8;
    }
    while ( !v7 );
    if ( --v15 == 0 )
      break;
    v14 = (v15 == 2) + 5;
    v11 = v12 - *(uint32_t *)(a2 + 4 * (v4 & 0x3F));
    v12 = (uint16_t)(v12 - *(uint16_t *)(a2 + 4 * (v4 & 0x3F)));
    v10 = (uint16_t)(v10 - *(uint16_t *)(a2 + 4 * (v5 & 0x3F)));
    v3 = (uint16_t)(v5 - *(uint16_t *)(a2 + 4 * (v6 & 0x3F)));
    v9 = (uint16_t)(v6 - *(uint16_t *)(a2 + 4 * (v11 & 0x3F)));
  }
  result = v10 | (v12 << 16);
  *a1 = v9 | ((uint16_t)v5 << 16);
  a1[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: RC2_cbc_encrypt  (binary VA: 0x19cce40)
// Original: RC2_cbc_encrypt
// ----------------------------------------------------------------------------
unsigned int RC2_cbc_encrypt(uint8_t *a1, int a2, int a3, int a4, uint8_t *a5, int a6)
{
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
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
        RC2_encrypt((int *)&v67, a4);
        v10 = v67;
        v11 = v68;
        v7 += 8;
        v12 = v67 >> 8;
        *v6 = v67;
        v6[1] = v12;
        v6[4] = v11;
        v6[2] = BYTE2(v10);
        v54 = v10;
        v6[3] = HIBYTE(v10);
        v58 = v11;
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
      RC2_encrypt((int *)&v67, a4);
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
        RC2_decrypt((int *)&v67, a4);
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
      RC2_decrypt((int *)&v67, a4);
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
// Function: RC2_ecb_encrypt  (binary VA: 0x19cd510)
// Original: RC2_ecb_encrypt
// ----------------------------------------------------------------------------
unsigned int RC2_ecb_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4)
{
  int16_t v4; // eax^2
  char v5;
  char v6; // edx^2
  unsigned int v7;
  unsigned int v8;
  unsigned int result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v10 = (a1[3] << 24) | *a1 | (a1[2] << 16) | (a1[1] << 8);
  v11 = (a1[7] << 24) | a1[4] | (a1[6] << 16) | (a1[5] << 8);
  if ( a4 != 0 )
    RC2_encrypt(&v10, a3);
  else
    RC2_decrypt(&v10, a3);
  v4 = HIWORD(v10);
  v5 = BYTE1(v10);
  *a2 = v10;
  a2[1] = v5;
  v6 = v4;
  a2[3] = HIBYTE(v4);
  v7 = v11;
  a2[4] = v11;
  a2[2] = v6;
  a2[5] = BYTE1(v7);
  v8 = HIWORD(v7);
  result = HIBYTE(v7);
  a2[6] = v8;
  a2[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: RC2_set_key  (binary VA: 0x19cd5f0)
// Original: RC2_set_key
// ----------------------------------------------------------------------------
uint8_t * RC2_set_key(uint8_t *a1, int a2, int a3, int a4)
{
  int v4;
  uint8_t *result;
  int v6;
  int i;
  char v8;
  uint8_t *v9;
  char v10;
  char v11;
  uint8_t v12;
  int v13;
  uint8_t v14;
  int j;
  int v16;
  int v17;
  int v18;
  int v19;

  v4 = a2;
  result = a1;
  if ( a2 > 128 )
    v4 = 128;
  *a1 = 0;
  if ( a4 <= 0 )
  {
    v19 = 0;
    LOBYTE(v17) = -1;
    v18 = 0;
    v6 = -1;
    v16 = 128;
  }
  else if ( a4 <= 1024 )
  {
    v16 = (a4 + 7) >> 3;
    v18 = 128 - v16;
    v6 = 127 - v16;
    v19 = 128 - v16;
    v17 = 255 >> (-(char)a4 & 7);
  }
  else
  {
    v19 = 0;
    LOBYTE(v17) = -1;
    v18 = 0;
    v16 = 128;
    v6 = -1;
  }
  if ( v4 <= 0 )
  {
    v8 = a1[v4 - 1];
LABEL_10:
    v9 = &a1[-v4];
    v10 = v8;
    do
    {
      v11 = byte_1D2A5E0[(uint8_t)(v9[v4] + v10)];
      a1[v4++] = v11;
      v10 = v11;
    }
    while ( v4 != 128 );
    result = a1;
    goto LABEL_13;
  }
  for ( i = 0; i != v4; ++i )
    a1[i] = *(uint8_t *)(a3 + i);
  v8 = a1[v4 - 1];
  if ( v4 != 128 )
    goto LABEL_10;
LABEL_13:
  v12 = byte_1D2A5E0[v17 & result[v19]];
  result[v19] = v12;
  if ( v18 != 0 )
  {
    v13 = v12;
    do
    {
      v14 = byte_1D2A5E0[v13 ^ (uint8_t)result[v16 + v6]];
      result[v6--] = v14;
      v13 = v14;
    }
    while ( v6 != -1 );
  }
  for ( j = 127; j != -1; j -= 2 )
    *(uint32_t *)&result[2 * j - 2] = *(uint16_t *)&result[j - 1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: RC2_cfb64_encrypt  (binary VA: 0x19cd7a0)
// Original: RC2_cfb64_encrypt
// ----------------------------------------------------------------------------
int * RC2_cfb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int *a6, int a7)
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
          RC2_encrypt(&v26, a4);
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
        RC2_encrypt(&v26, a4);
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
// Function: RC2_ofb64_encrypt  (binary VA: 0x19cd9a0)
// Original: RC2_ofb64_encrypt
// ----------------------------------------------------------------------------
int * RC2_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int *a6)
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
        RC2_encrypt(&v16, a4);
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
// Function: RC4  (binary VA: 0x19cdb90)
// Original: RC4
// ----------------------------------------------------------------------------
uint32_t * RC4(uint32_t *a1, unsigned int a2, uint8_t *a3, uint8_t *a4)
{
  uint32_t *result;
  int v5;
  int v6;
  uint8_t *v7;
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
  uint8_t *v31;
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
  int *v46;
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
  uint8_t *v73;
  int v74;
  int v75;
  int v76;
  uint8_t v77;
  uint8_t v78;
  uint8_t v79;
  uint8_t v80;
  uint8_t v81;
  uint8_t v82;
  uint8_t v83;
  int v84;
  char v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  int v89;
  char v90;

  result = a1;
  v5 = *a1;
  v6 = a1[1];
  if ( (((uint8_t)(uintptr_t)(a3) | (uint8_t)(uintptr_t)(a4)) & 3) != 0 )
  {
    v88 = a2 >> 3;
    if ( a2 >> 3 != 0 )
    {
      v86 = a2 >> 3;
      v7 = a4;
      v73 = a3;
      LOBYTE(v76) = a1[1];
      do
      {
        v8 = (uint8_t)(v5 + 1);
        v9 = a1[v8 + 2];
        v77 = v9 + v76;
        v10 = a1[v77 + 2];
        a1[v8 + 2] = v10;
        a1[v77 + 2] = v9;
        v11 = (uint8_t)(v8 + 1);
        *v7 = *v73 ^ a1[(uint8_t)(v10 + v9) + 2];
        v12 = a1[v11 + 2];
        v78 = v12 + v77;
        v13 = a1[v78 + 2];
        a1[v11 + 2] = v13;
        a1[v78 + 2] = v12;
        v14 = (uint8_t)(v11 + 1);
        v7[1] = v73[1] ^ a1[(uint8_t)(v13 + v12) + 2];
        v15 = a1[v14 + 2];
        v79 = v15 + v78;
        v16 = a1[v79 + 2];
        a1[v14 + 2] = v16;
        a1[v79 + 2] = v15;
        v17 = (uint8_t)(v14 + 1);
        v7[2] = v73[2] ^ a1[(uint8_t)(v16 + v15) + 2];
        v18 = a1[v17 + 2];
        v80 = v18 + v79;
        v19 = a1[v80 + 2];
        a1[v17 + 2] = v19;
        a1[v80 + 2] = v18;
        v20 = (uint8_t)(v17 + 1);
        v7[3] = v73[3] ^ a1[(uint8_t)(v19 + v18) + 2];
        v21 = a1[v20 + 2];
        v81 = v21 + v80;
        v22 = a1[v81 + 2];
        a1[v20 + 2] = v22;
        a1[v81 + 2] = v21;
        v23 = (uint8_t)(v20 + 1);
        v7[4] = v73[4] ^ a1[(uint8_t)(v22 + v21) + 2];
        v24 = a1[v23 + 2];
        v82 = v24 + v81;
        v25 = a1[v82 + 2];
        a1[v23 + 2] = v25;
        a1[v82 + 2] = v24;
        v26 = (uint8_t)(v23 + 1);
        v7[5] = v73[5] ^ a1[(uint8_t)(v25 + v24) + 2];
        v27 = a1[v26 + 2];
        v83 = v27 + v82;
        v28 = a1[v83 + 2];
        a1[v26 + 2] = v28;
        a1[v83 + 2] = v27;
        v5 = (uint8_t)(v26 + 1);
        v7[6] = v73[6] ^ a1[(uint8_t)(v28 + v27) + 2];
        v29 = a1[v5 + 2];
        v76 = (uint8_t)(v29 + v83);
        v30 = a1[v76 + 2];
        a1[v5 + 2] = v30;
        a1[v76 + 2] = v29;
        v31 = v73;
        v73 += 8;
        v7[7] = v31[7] ^ LOBYTE(a1[(uint8_t)(v30 + v29) + 2]);
        v7 += 8;
        --v86;
      }
      while ( v86 != 0 );
      v6 = v76;
      a4 += 8 * v88;
      a3 += 8 * v88;
    }
    v74 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      v5 = (uint8_t)(v5 + 1);
      v32 = a1[v5 + 2];
      v6 = (uint8_t)(v32 + v6);
      v33 = a1[v6 + 2];
      a1[v5 + 2] = v33;
      a1[v6 + 2] = v32;
      *a4 = *a3 ^ LOBYTE(a1[(uint8_t)(v33 + v32) + 2]);
      if ( v74 != 1 )
      {
        v5 = (uint8_t)(v5 + 1);
        v34 = a1[v5 + 2];
        v6 = (uint8_t)(v34 + v6);
        v35 = a1[v6 + 2];
        a1[v5 + 2] = v35;
        a1[v6 + 2] = v34;
        a4[1] = a3[1] ^ LOBYTE(a1[(uint8_t)(v35 + v34) + 2]);
        if ( v74 != 2 )
        {
          v5 = (uint8_t)(v5 + 1);
          v36 = a1[v5 + 2];
          v6 = (uint8_t)(v36 + v6);
          v37 = a1[v6 + 2];
          a1[v5 + 2] = v37;
          a1[v6 + 2] = v36;
          a4[2] = a3[2] ^ LOBYTE(a1[(uint8_t)(v37 + v36) + 2]);
          if ( v74 != 3 )
          {
            v5 = (uint8_t)(v5 + 1);
            v38 = a1[v5 + 2];
            v6 = (uint8_t)(v38 + v6);
            v39 = a1[v6 + 2];
            a1[v5 + 2] = v39;
            a1[v6 + 2] = v38;
            a4[3] = a3[3] ^ LOBYTE(a1[(uint8_t)(v39 + v38) + 2]);
            if ( v74 != 4 )
            {
              v5 = (uint8_t)(v5 + 1);
              v40 = a1[v5 + 2];
              v6 = (uint8_t)(v40 + v6);
              v41 = a1[v6 + 2];
              a1[v5 + 2] = v41;
              a1[v6 + 2] = v40;
              a4[4] = a3[4] ^ LOBYTE(a1[(uint8_t)(v41 + v40) + 2]);
              if ( v74 != 5 )
              {
                v5 = (uint8_t)(v5 + 1);
                v42 = a1[v5 + 2];
                v6 = (uint8_t)(v42 + v6);
                v43 = a1[v6 + 2];
                a1[v5 + 2] = v43;
                a1[v6 + 2] = v42;
                a4[5] = a3[5] ^ LOBYTE(a1[(uint8_t)(v43 + v42) + 2]);
                if ( v74 != 6 )
                {
                  v5 = (uint8_t)(v5 + 1);
                  v44 = a1[v5 + 2];
                  v6 = (uint8_t)(v44 + v6);
                  v45 = a1[v6 + 2];
                  a1[v5 + 2] = v45;
                  a1[v6 + 2] = v44;
                  a4[6] = a3[6] ^ a1[(uint8_t)(v45 + v44) + 2];
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
  while ( (a2 & 0xFFFFFFFC) != 0 )
  {
    v46 = (int *)a3;
    v47 = (uint8_t)(v5 + 1);
    a3 += 4;
    v75 = *v46;
    v48 = a1[v47 + 2];
    v49 = (uint8_t)(v48 + v6);
    v50 = a1[v49 + 2];
    a1[v49 + 2] = v48;
    a1[v47 + 2] = v50;
    v51 = (uint8_t)(v47 + 1);
    v52 = a1[(uint8_t)(v50 + v48) + 2];
    v53 = a1[v51 + 2];
    v54 = (uint8_t)(v53 + v49);
    v55 = a1[v54 + 2];
    a1[v54 + 2] = v53;
    a1[v51 + 2] = v55;
    v56 = (uint8_t)(v51 + 1);
    v57 = v52 | (a1[(uint8_t)(v55 + v53) + 2] << 8);
    v58 = a1[v56 + 2];
    v59 = (uint8_t)(v58 + v54);
    v60 = a1[v59 + 2];
    a1[v59 + 2] = v58;
    a1[v56 + 2] = v60;
    v5 = (uint8_t)(v56 + 1);
    v61 = (a1[(uint8_t)(v60 + v58) + 2] << 16) | v57;
    v62 = a1[v5 + 2];
    v6 = (uint8_t)(v62 + v59);
    v63 = a1[v6 + 2];
    a1[v6 + 2] = v62;
    a1[v5 + 2] = v63;
    *(uint32_t *)a4 = v75 ^ ((a1[(uint8_t)(v63 + v62) + 2] << 24) | v61);
    a4 += 4;
    a2 -= 4;
  }
  if ( a2 == 0 )
  {
LABEL_14:
    *a1 = v5;
    a1[1] = v6;
    return result;
  }
  v64 = a2 & 3;
  v84 = *(uint32_t *)a3;
  v87 = *(uint32_t *)a4;
  if ( v64 == 2 )
  {
    v85 = 8;
    v90 = 0;
    v89 = 0;
    goto LABEL_23;
  }
  if ( v64 == 3 )
  {
    v85 = 16;
    v5 = (uint8_t)(v5 + 1);
    v90 = 8;
    v66 = a1[v5 + 2];
    v6 = (uint8_t)(v66 + v6);
    v67 = a1[v6 + 2];
    a1[v6 + 2] = v66;
    a1[v5 + 2] = v67;
    v89 = a1[(uint8_t)(v67 + v66) + 2];
LABEL_23:
    v5 = (uint8_t)(v5 + 1);
    v68 = a1[v5 + 2];
    v6 = (uint8_t)(v68 + v6);
    v69 = a1[v6 + 2];
    a1[v6 + 2] = v68;
    a1[v5 + 2] = v69;
    v70 = v89 | (a1[(uint8_t)(v69 + v68) + 2] << v90);
LABEL_24:
    v5 = (uint8_t)(v5 + 1);
    v71 = a1[v5 + 2];
    v6 = (uint8_t)(v71 + v6);
    v72 = a1[v6 + 2];
    a1[v6 + 2] = v71;
    a1[v5 + 2] = v72;
    v65 = v70 | (a1[(uint8_t)(v72 + v71) + 2] << v85);
    goto LABEL_21;
  }
  v65 = 0;
  if ( v64 == 1 )
  {
    v85 = 0;
    v70 = 0;
    goto LABEL_24;
  }
LABEL_21:
  *(uint32_t *)a4 = v87 & ~(0xFFFFFFFF >> (8 * (4 - a2))) | (0xFFFFFFFF >> (8 * (4 - a2))) & (v84 ^ v65);
  *a1 = v5;
  a1[1] = v6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: RC4_options  (binary VA: 0x19ce280)
// Original: RC4_options
// ----------------------------------------------------------------------------
const char * RC4_options()
{
  return "rc4(ptr,int)";
}

// ----------------------------------------------------------------------------
// Function: RC4_set_key  (binary VA: 0x19ce2a0)
// Original: RC4_set_key
// ----------------------------------------------------------------------------
int * RC4_set_key(uint32_t *a1, int a2, int a3)
{
  int v3;
  int *result;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  uint8_t v13;
  int v14;
  uint8_t v15; // si
  int v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v3 = 0;
  *a1 = 0;
  a1[1] = 0;
  do
  {
    a1[v3 + 2] = v3;
    ++v3;
  }
  while ( v3 != 256 );
  result = (int *)(a1 + 2);
  LOBYTE(v5) = 0;
  v19 = 0;
  do
  {
    v6 = *result;
    v23 = 1;
    v7 = 0;
    v8 = (uint8_t)(*(uint8_t *)(a3 + v19) + *result + v5);
    if ( v19 + 1 != a2 )
    {
      v7 = v19 + 1;
      v23 = v19 + 2;
    }
    v22 = 1;
    *result = a1[v8 + 2];
    a1[v8 + 2] = v6;
    v20 = result[1];
    v9 = *(uint8_t *)(a3 + v7);
    v10 = 0;
    v11 = (uint8_t)(v9 + v20 + v8);
    if ( a2 != v23 )
    {
      v10 = v23;
      v22 = v23 + 1;
    }
    result[1] = a1[v11 + 2];
    a1[v11 + 2] = v20;
    v12 = result[2];
    v21 = 1;
    v13 = *(uint8_t *)(a3 + v10) + v11 + v12;
    v14 = 0;
    v15 = v13;
    if ( a2 != v22 )
    {
      v14 = v22;
      v21 = v22 + 1;
    }
    result[2] = a1[v13 + 2];
    a1[v13 + 2] = v12;
    v16 = result[3];
    v17 = *(uint8_t *)(a3 + v14);
    v18 = 0;
    v5 = (uint8_t)(v17 + v16 + v15);
    if ( a2 != v21 )
      v18 = v21;
    v19 = v18;
    result[3] = a1[v5 + 2];
    result += 4;
    a1[v5 + 2] = v16;
  }
  while ( result != (int *)(uintptr_t)(a1 + 258) );
  return result;
}


