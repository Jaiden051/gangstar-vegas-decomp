#include "Core/Utils/DecompTypes.h"
#include "openssl_internal_1_part02.h"

// ----------------------------------------------------------------------------
// Function: UI_dup_input_boolean  (binary VA: 0x1a27f50)
// Original: UI_dup_input_boolean
// ----------------------------------------------------------------------------
int UI_dup_input_boolean(int a1, char *a2, char *a3, char *a4, char *a5, int a6, int a7)
{
  char *v7;
  char *v8;
  char *v9;
  char *v10;

  if ( a2 == nullptr )
  {
    v7 = nullptr;
    if ( a3 != nullptr )
    {
LABEL_4:
      v8 = BUF_strdup(a3);
      if ( v8 == nullptr )
      {
        v9 = nullptr;
        ERR_put_error(40, 110, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_14;
      }
      if ( a4 != nullptr )
      {
LABEL_6:
        v9 = BUF_strdup(a4);
        if ( v9 == nullptr )
        {
LABEL_13:
          ERR_put_error(40, 110, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_14:
          if ( v7 != nullptr )
            CRYPTO_free(v7);
          if ( v8 != nullptr )
            CRYPTO_free(v8);
          if ( v9 != nullptr )
            CRYPTO_free(v9);
          return -1;
        }
LABEL_7:
        if ( a5 == nullptr )
        {
          v10 = nullptr;
          return sub_1A27B10(a1, (int)(uintptr_t)(v7), v8, v9, v10, 1, a6, a7);
        }
        v10 = BUF_strdup(a5);
        if ( v10 != nullptr )
          return sub_1A27B10(a1, (int)(uintptr_t)(v7), v8, v9, v10, 1, a6, a7);
        goto LABEL_13;
      }
LABEL_12:
      v9 = nullptr;
      goto LABEL_7;
    }
LABEL_11:
    v8 = nullptr;
    if ( a4 != nullptr )
      goto LABEL_6;
    goto LABEL_12;
  }
  v7 = BUF_strdup(a2);
  if ( v7 != nullptr )
  {
    if ( a3 != nullptr )
      goto LABEL_4;
    goto LABEL_11;
  }
  ERR_put_error(40, 110, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: UI_add_info_string  (binary VA: 0x1a28140)
// Original: UI_add_info_string
// ----------------------------------------------------------------------------
int UI_add_info_string(int a1, int a2)
{
  return sub_1A27A50(a1, a2, 0, 4, 0, 0, nullptr, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: UI_dup_info_string  (binary VA: 0x1a28190)
// Original: UI_dup_info_string
// ----------------------------------------------------------------------------
int UI_dup_info_string(int a1, char *a2)
{
  char *v2;

  if ( a2 == nullptr )
  {
    v2 = nullptr;
    return sub_1A27A50(a1, (int)(uintptr_t)(v2), 1, 4, 0, 0, nullptr, nullptr, nullptr);
  }
  v2 = BUF_strdup(a2);
  if ( v2 != nullptr )
    return sub_1A27A50(a1, (int)(uintptr_t)(v2), 1, 4, 0, 0, nullptr, nullptr, nullptr);
  ERR_put_error(40, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: UI_add_error_string  (binary VA: 0x1a28240)
// Original: UI_add_error_string
// ----------------------------------------------------------------------------
int UI_add_error_string(int a1, int a2)
{
  return sub_1A27A50(a1, a2, 0, 5, 0, 0, nullptr, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: UI_dup_error_string  (binary VA: 0x1a28290)
// Original: UI_dup_error_string
// ----------------------------------------------------------------------------
int UI_dup_error_string(int a1, char *a2)
{
  char *v2;

  if ( a2 == nullptr )
  {
    v2 = nullptr;
    return sub_1A27A50(a1, (int)(uintptr_t)(v2), 1, 5, 0, 0, nullptr, nullptr, nullptr);
  }
  v2 = BUF_strdup(a2);
  if ( v2 != nullptr )
    return sub_1A27A50(a1, (int)(uintptr_t)(v2), 1, 5, 0, 0, nullptr, nullptr, nullptr);
  ERR_put_error(40, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: UI_construct_prompt  (binary VA: 0x1a28340)
// Original: UI_construct_prompt
// ----------------------------------------------------------------------------
char * UI_construct_prompt(int a1, char *s, char *a3)
{
  int (*v3)(int, char *, char *);
  char *v4;
  size_t v6;
  unsigned int v7;
  typedef int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef char _g4_t_v10[2];
  typedef char _g4_t_v11[6];
  typedef char _g4_t_v12[19];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v10)) > _g4_s2 ? (17u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (19u + sizeof(_g4_t_v11)) > _g4_s3 ? (19u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (25u + sizeof(_g4_t_v12)) > _g4_s4 ? (25u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 17u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 19u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 25u);

  v3 = *(int (**)(int, char *, char *))(*(uint32_t *)a1 + 24);
  if ( v3 != nullptr )
    return (char *)v3(a1, s, a3);
  strcpy(v12, "Enter ");
  strcpy(v11, " for ");
  strcpy(v10, ":");
  if ( s == nullptr )
    return nullptr;
  v6 = strlen(s);
  if ( a3 != nullptr )
  {
    v8 = v6 + strlen(a3) + 13;
    v4 = (char *)(CRYPTO_malloc(v8, (int)(uintptr_t)(&unk_1B15112), 0));
    v9 = v8;
    BUF_strlcpy(v4, v12, v8);
    BUF_strlcat(v4, s, v8);
    BUF_strlcat(v4, v11, v8);
    BUF_strlcat(v4, a3, v8);
  }
  else
  {
    v7 = v6 + 8;
    v4 = (char *)(CRYPTO_malloc(v6 + 8, (int)(uintptr_t)(&unk_1B15112), 0));
    v9 = v7;
    BUF_strlcpy(v4, v12, v7);
    BUF_strlcat(v4, s, v7);
  }
  BUF_strlcat(v4, v10, v9);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: UI_add_user_data  (binary VA: 0x1a284f0)
// Original: UI_add_user_data
// ----------------------------------------------------------------------------
int UI_add_user_data(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(a1 + 8) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_get0_user_data  (binary VA: 0x1a28500)
// Original: UI_get0_user_data
// ----------------------------------------------------------------------------
int UI_get0_user_data(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: UI_process  (binary VA: 0x1a28510)
// Original: UI_process
// ----------------------------------------------------------------------------
int UI_process(int a1, int a2, int a3)
{
  int (*v3)(int);
  int v4;
  int i;
  int (*v6)(int, int);
  int v7;
  bool v8; // cc
  int v9;
  int (*v10)(int);
  int v11;
  int j;
  int (*v13)(int, int);
  int v14;
  int v15;
  int (*v16)(int);

  v3 = *(int (**)(int))(*(uint32_t *)a3 + 4);
  if ( v3 == nullptr || (v4 = -1, v3(a3) != 0) )
  {
    if ( (*(uint8_t *)(a3 + 21) & 1) != 0 )
      ERR_print_errors_cb(a1, a2, (int (*)(char *, unsigned int, int))sub_1A278F0, a3);
    for ( i = 0; ; ++i )
    {
      v8 = i < sk_num(*(uint32_t *)(a3 + 4));
      v9 = *(uint32_t *)a3;
      if ( !v8 )
        break;
      v6 = *(int (**)(int, int))(v9 + 8);
      if ( v6 != nullptr )
      {
        v7 = sk_value(*(int **)(a3 + 4), i);
        if ( v6(a3, v7) == 0 )
        {
LABEL_18:
          v4 = -1;
          goto LABEL_19;
        }
      }
    }
    v10 = *(int (**)(int))(v9 + 12);
    if ( v10 == nullptr || (v4 = -2, (v11 = v10(a3)) != -1) && (LOWORD(v4) = -1, v11 != 0) )
    {
      for ( j = 0; j < sk_num(*(uint32_t *)(a3 + 4)); ++j )
      {
        v13 = *(int (**)(int, int))(*(uint32_t *)a3 + 16);
        if ( v13 != nullptr )
        {
          v14 = sk_value(*(int **)(a3 + 4), j);
          v15 = v13(a3, v14);
          if ( v15 == -1 )
          {
            v4 = -2;
            goto LABEL_19;
          }
          if ( v15 == 0 )
            goto LABEL_18;
        }
      }
      v4 = 0;
    }
LABEL_19:
    v16 = *(int (**)(int))(*(uint32_t *)a3 + 20);
    if ( v16 != nullptr && v16(a3) == 0 )
      return -1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: UI_ctrl  (binary VA: 0x1a28640)
// Original: UI_ctrl
// ----------------------------------------------------------------------------
int UI_ctrl(int a1, int a2, int a3)
{
  int result;
  int v4;

  if ( a1 != 0 )
  {
    if ( a2 == 1 )
    {
      v4 = *(uint32_t *)(a1 + 20);
      result = (v4 & 0x100) != 0;
      if ( a3 != 0 )
        BYTE1(v4) |= 1u;
      else
        BYTE1(v4) &= ~1u;
      *(uint32_t *)(a1 + 20) = v4;
    }
    else if ( a2 == 2 )
    {
      return *(uint32_t *)(a1 + 20) & 1;
    }
    else
    {
      ERR_put_error(40, 111, 106, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  else
  {
    ERR_put_error(40, 111, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_get_ex_new_index  (binary VA: 0x1a28720)
// Original: UI_get_ex_new_index
// ----------------------------------------------------------------------------
int UI_get_ex_new_index(int a1, int a2, int a3, int a4, int a5)
{
  return CRYPTO_get_ex_new_index(11, a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: UI_set_ex_data  (binary VA: 0x1a28770)
// Original: UI_set_ex_data
// ----------------------------------------------------------------------------
int UI_set_ex_data(int a1, int a2, int a3)
{
  return CRYPTO_set_ex_data((int *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: UI_get_ex_data  (binary VA: 0x1a287b0)
// Original: UI_get_ex_data
// ----------------------------------------------------------------------------
int UI_get_ex_data(int a1, int a2)
{
  return CRYPTO_get_ex_data((uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: UI_set_default_method  (binary VA: 0x1a287e0)
// Original: UI_set_default_method
// ----------------------------------------------------------------------------
int UI_set_default_method(int a1)
{
  dword_2142334 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: UI_get_default_method  (binary VA: 0x1a28800)
// Original: UI_get_default_method
// ----------------------------------------------------------------------------
int UI_get_default_method()
{
  int result;

  result = dword_2142334;
  if ( dword_2142334 == 0 )
  {
    result = (int)(uintptr_t)(UI_OpenSSL());
    dword_2142334 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_new_method  (binary VA: 0x1a28840)
// Original: UI_new_method
// ----------------------------------------------------------------------------
uint32_t * UI_new_method(int a1)
{
  uint8_t *v1;
  uint32_t *v2;

  v1 = CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0);
  v2 = (uint32_t *)(v1);
  if ( v1 != nullptr )
  {
    if ( a1 != 0 )
      *(uint32_t *)v1 = a1;
    else
      *(uint32_t *)v1 = UI_get_default_method();
    v2[1] = 0;
    v2[2] = 0;
    v2[5] = 0;
    CRYPTO_new_ex_data(11, (int)(uintptr_t)(v2), (int)(uintptr_t)(v2 + 3));
  }
  else
  {
    ERR_put_error(40, 104, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: UI_new  (binary VA: 0x1a28910)
// Original: UI_new
// ----------------------------------------------------------------------------
uint32_t * UI_new()
{
  return UI_new_method(0);
}

// ----------------------------------------------------------------------------
// Function: UI_get_method  (binary VA: 0x1a28940)
// Original: UI_get_method
// ----------------------------------------------------------------------------
int UI_get_method(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: UI_set_method  (binary VA: 0x1a28950)
// Original: UI_set_method
// ----------------------------------------------------------------------------
int UI_set_method(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: UI_create_method  (binary VA: 0x1a28960)
// Original: UI_create_method
// ----------------------------------------------------------------------------
uint8_t * UI_create_method(char *a1)
{
  uint8_t *v1;
  uint8_t *v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;

  v1 = CRYPTO_malloc(28, (int)(uintptr_t)(&unk_1B15112), 0);
  v2 = v1;
  if ( v1 != nullptr )
  {
    v3 = (uint16_t *)(v1);
    v4 = 28;
    if ( ((uint8_t)(uintptr_t)v1 & 1) != 0 )
    {
      *v1 = 0;
      v3 = (uint16_t *)(v1 + 1);
      LOBYTE(v4) = 27;
    }
    if ( ((uint8_t)(uintptr_t)v3 & 2) != 0 )
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
      *(uint32_t *)v1 = (uint32_t)(uintptr_t)(BUF_strdup(a1));
      return v2;
    }
    *(uint8_t *)v5 = 0;
    goto LABEL_8;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: UI_destroy_method  (binary VA: 0x1a28a20)
// Original: UI_destroy_method
// ----------------------------------------------------------------------------
int UI_destroy_method(void **a1)
{
  CRYPTO_free(*a1);
  *a1 = nullptr;
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: UI_method_set_opener  (binary VA: 0x1a28a60)
// Original: UI_method_set_opener
// ----------------------------------------------------------------------------
int UI_method_set_opener(int a1, int a2)
{
  if ( a1 == 0 )
    return -1;
  *(uint32_t *)(a1 + 4) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_set_writer  (binary VA: 0x1a28a80)
// Original: UI_method_set_writer
// ----------------------------------------------------------------------------
int UI_method_set_writer(int a1, int a2)
{
  if ( a1 == 0 )
    return -1;
  *(uint32_t *)(a1 + 8) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_set_flusher  (binary VA: 0x1a28aa0)
// Original: UI_method_set_flusher
// ----------------------------------------------------------------------------
int UI_method_set_flusher(int a1, int a2)
{
  if ( a1 == 0 )
    return -1;
  *(uint32_t *)(a1 + 12) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_set_reader  (binary VA: 0x1a28ac0)
// Original: UI_method_set_reader
// ----------------------------------------------------------------------------
int UI_method_set_reader(int a1, int a2)
{
  if ( a1 == 0 )
    return -1;
  *(uint32_t *)(a1 + 16) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_set_closer  (binary VA: 0x1a28ae0)
// Original: UI_method_set_closer
// ----------------------------------------------------------------------------
int UI_method_set_closer(int a1, int a2)
{
  if ( a1 == 0 )
    return -1;
  *(uint32_t *)(a1 + 20) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_set_prompt_constructor  (binary VA: 0x1a28b00)
// Original: UI_method_set_prompt_constructor
// ----------------------------------------------------------------------------
int UI_method_set_prompt_constructor(int a1, int a2)
{
  if ( a1 == 0 )
    return -1;
  *(uint32_t *)(a1 + 24) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_get_opener  (binary VA: 0x1a28b20)
// Original: UI_method_get_opener
// ----------------------------------------------------------------------------
int UI_method_get_opener(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_get_writer  (binary VA: 0x1a28b40)
// Original: UI_method_get_writer
// ----------------------------------------------------------------------------
int UI_method_get_writer(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 8);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_get_flusher  (binary VA: 0x1a28b60)
// Original: UI_method_get_flusher
// ----------------------------------------------------------------------------
int UI_method_get_flusher(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 12);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_get_reader  (binary VA: 0x1a28b80)
// Original: UI_method_get_reader
// ----------------------------------------------------------------------------
int UI_method_get_reader(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 16);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_get_closer  (binary VA: 0x1a28ba0)
// Original: UI_method_get_closer
// ----------------------------------------------------------------------------
int UI_method_get_closer(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 20);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_method_get_prompt_constructor  (binary VA: 0x1a28bc0)
// Original: UI_method_get_prompt_constructor
// ----------------------------------------------------------------------------
int UI_method_get_prompt_constructor(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 24);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_get_string_type  (binary VA: 0x1a28be0)
// Original: UI_get_string_type
// ----------------------------------------------------------------------------
int UI_get_string_type(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_get_input_flags  (binary VA: 0x1a28bf0)
// Original: UI_get_input_flags
// ----------------------------------------------------------------------------
int UI_get_input_flags(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_get0_output_string  (binary VA: 0x1a28c00)
// Original: UI_get0_output_string
// ----------------------------------------------------------------------------
int UI_get0_output_string(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_get0_action_string  (binary VA: 0x1a28c20)
// Original: UI_get0_action_string
// ----------------------------------------------------------------------------
int UI_get0_action_string(uint32_t *a1)
{
  if ( a1 == nullptr )
    return 0;
  if ( *a1 == 1 || *a1 == 3 )
    return a1[4];
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_get0_result_string  (binary VA: 0x1a28c50)
// Original: UI_get0_result_string
// ----------------------------------------------------------------------------
int UI_get0_result_string(uint32_t *a1)
{
  int result;

  if ( a1 == nullptr )
    return 0;
  result = 0;
  if ( (unsigned int)(*a1 - 1) <= 1 )
    return a1[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_get0_result  (binary VA: 0x1a28c80)
// Original: UI_get0_result
// ----------------------------------------------------------------------------
int UI_get0_result(int a1, int a2)
{
  uint32_t *v2;

  if ( a2 < 0 )
  {
    ERR_put_error(40, 107, 103, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else if ( a2 >= sk_num(*(uint32_t *)(a1 + 4)) )
  {
    ERR_put_error(40, 107, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    v2 = (uint32_t *)sk_value(*(int **)(a1 + 4), a2);
    return UI_get0_result_string(v2);
  }
}

// ----------------------------------------------------------------------------
// Function: UI_get0_test_string  (binary VA: 0x1a28d50)
// Original: UI_get0_test_string
// ----------------------------------------------------------------------------
int UI_get0_test_string(uint32_t *a1)
{
  if ( a1 == nullptr )
    return 0;
  if ( *a1 == 2 )
    return a1[6];
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_get_result_minsize  (binary VA: 0x1a28d80)
// Original: UI_get_result_minsize
// ----------------------------------------------------------------------------
int UI_get_result_minsize(uint32_t *a1)
{
  int result;

  if ( a1 == nullptr )
    return -1;
  result = -1;
  if ( (unsigned int)(*a1 - 1) <= 1 )
    return a1[4];
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_get_result_maxsize  (binary VA: 0x1a28db0)
// Original: UI_get_result_maxsize
// ----------------------------------------------------------------------------
int UI_get_result_maxsize(uint32_t *a1)
{
  int result;

  if ( a1 == nullptr )
    return -1;
  result = -1;
  if ( (unsigned int)(*a1 - 1) <= 1 )
    return a1[5];
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_set_result  (binary VA: 0x1a28de0)
// Original: UI_set_result
// ----------------------------------------------------------------------------
int UI_set_result(int a1, unsigned int *a2, char *s)
{
  signed int v3;
  unsigned int v4;
  int result;
  uint8_t *v6;
  char v7;
  char *v8;
  const char *v9;
  int c;
  signed int v11;
  char *v12;
  typedef char *_g4_t_v13;
  typedef uint8_t _g4_t_v14[13];
  typedef uint8_t _g4_t_v15[41];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v14)) > _g4_s1 ? (22u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (35u + sizeof(_g4_t_v15)) > _g4_s2 ? (35u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 22u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 35u);

  v3 = strlen(s);
  *(uint32_t *)(a1 + 20) &= ~1u;
  if ( a2 == nullptr )
    return -1;
  v4 = *a2;
  if ( *a2 == 0 )
    return 0;
  if ( v4 <= 2 )
  {
    BIO_snprintf(v14, 13, "%d", a2[4]);
    BIO_snprintf(v15, 13, "%d", a2[5]);
    if ( v3 < (int)a2[4] )
    {
      *(uint32_t *)(a1 + 20) |= 1u;
      ERR_put_error(40, 105, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      v11 = a2[5];
      if ( v3 <= v11 )
      {
        v12 = (char *)a2[3];
        if ( v12 != nullptr )
        {
          BUF_strlcpy(v12, s, v11 + 1);
          return 0;
        }
        goto LABEL_23;
      }
      *(uint32_t *)(a1 + 20) |= 1u;
      ERR_put_error(40, 105, 100, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    ERR_add_error_data(5, "You must type in ", v14, " to ", v15, " characters");
    return -1;
  }
  if ( v4 != 3 )
    return 0;
  v6 = (uint8_t *)a2[3];
  if ( v6 == nullptr )
  {
LABEL_23:
    ERR_put_error(40, 105, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  *v6 = 0;
  result = 0;
  v7 = *s;
  if ( *s != 0 )
  {
    v8 = s;
    v13 = (char *)a2[5];
    while ( 1 )
    {
      c = v7;
      if ( strchr(v13, v7) != nullptr )
      {
        *(uint8_t *)a2[3] = *v13;
        return 0;
      }
      v9 = (const char *)a2[6];
      if ( strchr(v9, c) != nullptr )
        break;
      v7 = *++v8;
      if ( *v8 == 0 )
        return 0;
    }
    *(uint8_t *)a2[3] = *v9;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A29040  (binary VA: 0x1a29040)
// Original: sub_1A29040
// ----------------------------------------------------------------------------
int sub_1A29040(int a1)
{
  dword_2142340 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A29060  (binary VA: 0x1a29060)
// Original: sub_1A29060
// ----------------------------------------------------------------------------
int sub_1A29060()
{
  if ( (void *)dword_2142344 != stdin )
    fclose((FILE *)dword_2142344);
  if ( (void *)dword_2142348 != ((void *)stderr) )
    fclose((FILE *)dword_2142348);
  CRYPTO_lock(10, 31, (int)(uintptr_t)(&unk_1B15112), 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A290E0  (binary VA: 0x1a290e0)
// Original: sub_1A290E0
// ----------------------------------------------------------------------------
int sub_1A290E0(int a1, unsigned int *a2, int a3, int a4)
{
  int sig;
  int i;
  FILE *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v12;
  char *v13;
  bool v14;
  int v15;
  struct sigaction act;

  sig = 1;
  dword_2142340 = 0;
  dword_214234C = 0;
  memset(&act.sa_mask, 0, 12);
  act.sa_handler = (__sighandler_t)sub_1A29040;
  for ( i = 2; ; ++i )
  {
    if ( sig != 10 && sig != 12 && sig != 9 )
    {
      sigaction(sig, &act, (struct sigaction *)((char *)&unk_2142360 + 16 * sig));
      if ( i == 32 )
        break;
    }
    ++sig;
  }
  bsd_signal(28, 0);
  dword_214234C = 1;
  if ( a3 != 0
    || (dword_2142560 = dword_2142572,
        dword_2142564 = dword_2142576,
        dword_2142568 = dword_214257A,
        dword_214256C = dword_214257E,
        HIWORD(dword_2142564) = HIWORD(dword_2142576) & 0xFFF7,
        word_2142570 = word_2142582,
        dword_2142584 == 0)
    || (v14 = false, ioctl(*(int16_t *)(dword_2142344 + 14), 0x5406u, &dword_2142560) != -1) )
  {
    dword_214234C = 2;
    reinterpret_cast<uint8_t *>((&act.sa_mask))[12] = 0;
    v14 = false;
    if ( fgets(g4_unfortify_char_ptr(reinterpret_cast<char *>((&act.sa_mask)) + 12), 1023, (FILE *)dword_2142344) != nullptr )
    {
      v6 = (FILE *)dword_2142344;
      if ( (*(uint16_t *)(dword_2142344 + 12) & 0x60) == 0 )
      {
        v13 = (char *)(strchr(reinterpret_cast<const char *>((&act.sa_mask)) + 12, 10));
        if ( v13 != nullptr )
        {
          if ( a4 != 0 )
            *v13 = 0;
LABEL_30:
          v14 = UI_set_result(a1, a2, reinterpret_cast<char *>((&act.sa_mask)) + 12) >= 0;
        }
        else
        {
          while ( fgets((char *)&act, 4, v6) != nullptr )
          {
            if ( strchr((const char *)&act, 10) != nullptr )
              goto LABEL_30;
          }
          v14 = false;
        }
      }
    }
  }
  v7 = -1;
  if ( dword_2142340 != 2 )
    v7 = v14;
  v15 = v7;
  v8 = dword_214234C;
  if ( a3 == 0 )
  {
    fputc(10, (FILE *)dword_2142348);
    v8 = dword_214234C;
    if ( dword_214234C > 1 )
    {
      dword_2142560 = dword_2142572;
      dword_2142564 = dword_2142576;
      dword_2142568 = dword_214257A;
      dword_214256C = dword_214257E;
      word_2142570 = word_2142582;
      HIWORD(dword_2142564) = HIWORD(dword_2142576) | 8;
      if ( dword_2142584 != 0 )
      {
        v12 = ioctl(*(int16_t *)(dword_2142344 + 14), 0x5406u, &dword_2142560) == -1;
        v8 = dword_214234C;
        if ( v12 )
          v15 = 0;
      }
    }
  }
  v9 = 2;
  v10 = 1;
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      if ( v10 != 10 && v10 != 12 )
      {
        sigaction(v10, (const struct sigaction *)((char *)&unk_2142360 + 16 * v10), nullptr);
        if ( v9 == 32 )
          break;
      }
      ++v10;
      ++v9;
    }
  }
  OPENSSL_cleanse(reinterpret_cast<uint8_t *>((&act.sa_mask)) + 12, 0x400u);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: sub_1A29470  (binary VA: 0x1a29470)
// Original: sub_1A29470
// ----------------------------------------------------------------------------
int sub_1A29470(int a1, int a2)
{
  FILE *stream;
  const char *s;

  if ( (unsigned int)(UI_get_string_type(a2) - 4) <= 1 )
  {
    stream = (FILE *)dword_2142348;
    s = (const char *)UI_get0_output_string(a2);
    fputs(s, stream);
    fflush((FILE *)dword_2142348);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A294E0  (binary VA: 0x1a294e0)
// Original: sub_1A294E0
// ----------------------------------------------------------------------------
int sub_1A294E0(int a1, unsigned int *a2)
{
  int string_type;
  int result;
  FILE *stream;
  const char *s;
  char input_flags;
  FILE *v8;
  const char *v9;
  FILE *v10;
  const char *v11;
  int v12;
  char v13;
  const char *v14;
  const char *v15;
  int v16;
  int v17;

  string_type = UI_get_string_type((int)(uintptr_t)(a2));
  if ( string_type != 2 )
  {
    if ( string_type == 3 )
    {
      v8 = (FILE *)dword_2142348;
      v9 = (const char *)UI_get0_output_string((int)(uintptr_t)(a2));
      fputs(v9, v8);
      v10 = (FILE *)dword_2142348;
      v11 = (const char *)UI_get0_action_string(a2);
      fputs(v11, v10);
      fflush((FILE *)dword_2142348);
      input_flags = UI_get_input_flags((int)(uintptr_t)(a2));
      v17 = 0;
    }
    else
    {
      if ( string_type != 1 )
        return 1;
      stream = (FILE *)dword_2142348;
      s = (const char *)UI_get0_output_string((int)(uintptr_t)(a2));
      fputs(s, stream);
      fflush((FILE *)dword_2142348);
      input_flags = UI_get_input_flags((int)(uintptr_t)(a2));
      v17 = 1;
    }
    return sub_1A290E0(a1, a2, input_flags & 1, v17);
  }
  v12 = UI_get0_output_string((int)(uintptr_t)(a2));
  fprintf((FILE *)dword_2142348, "Verifying - %s", v12);
  fflush((FILE *)dword_2142348);
  v13 = UI_get_input_flags((int)(uintptr_t)(a2));
  result = sub_1A290E0(a1, a2, v13 & 1, 1);
  if ( result > 0 )
  {
    v14 = (const char *)UI_get0_test_string(a2);
    v15 = (const char *)UI_get0_result_string(a2);
    v16 = strcmp(v15, v14);
    result = 1;
    if ( v16 != 0 )
    {
      fwrite("Verify failure\n", 1u, 0xFu, (FILE *)dword_2142348);
      fflush((FILE *)dword_2142348);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A296C0  (binary VA: 0x1a296c0)
// Original: sub_1A296C0
// ----------------------------------------------------------------------------
int sub_1A296C0()
{
  int v0;
  int v1;
  int v2;
  int v4;
  int v5;

  CRYPTO_lock(9, 31, (int)(uintptr_t)(&unk_1B15112), 0);
  dword_2142584 = 1;
  dword_2142344 = (int)(uintptr_t)(fopen("/dev/tty", "r"));
  if ( dword_2142344 == 0 )
    dword_2142344 = ((int)(uintptr_t)stdin);
  dword_2142348 = (int)(uintptr_t)(fopen("/dev/tty", "w"));
  if ( dword_2142348 == 0 )
    dword_2142348 = ((int)(uintptr_t)stderr);
  v0 = 1;
  if ( ioctl(*(int16_t *)(dword_2142344 + 14), 0x5405u, &dword_2142572) == -1 )
  {
    if ( *(uint32_t *)__errno(v2, v1) == 25 )
    {
      dword_2142584 = 0;
    }
    else
    {
      v0 = 0;
      if ( *(uint32_t *)__errno(v5, v4) == 22 )
      {
        dword_2142584 = 0;
        LOWORD(v0) = 1;
      }
    }
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: UI_OpenSSL  (binary VA: 0x1a297f0)
// Original: UI_OpenSSL
// ----------------------------------------------------------------------------
char ** UI_OpenSSL()
{
  return (char **)(&off_20CF838);
}

// ----------------------------------------------------------------------------
// Function: whirlpool_block  (binary VA: 0x1a29810)
// Original: whirlpool_block
// ----------------------------------------------------------------------------
int whirlpool_block(int64_t *a1, int a2, int a3)
{
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
  int v88;
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
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int result;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  unsigned int v144;
  int v145;
  unsigned int v146;
  int64_t v147;
  int64_t v148;
  int64_t v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int64_t v156;
  int64_t v157;
  int64_t v158;
  int64_t v159;
  int *v160;
  int64_t v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int64_t v173;
  int64_t v174;
  int64_t v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  uint64_t v186;
  uint64_t v187;
  int64_t v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int64_t v199;
  int64_t v200;

  v162 = *a1;
  v163 = *((uint32_t *)a1 + 2);
  v164 = *((uint32_t *)a1 + 3);
  v165 = *((uint32_t *)a1 + 4);
  v166 = *((uint32_t *)a1 + 5);
  v167 = *((uint32_t *)a1 + 6);
  v168 = *((uint32_t *)a1 + 7);
  v169 = *((uint32_t *)a1 + 8);
  v170 = *((uint32_t *)a1 + 9);
  v171 = *((uint32_t *)a1 + 10);
  v172 = *((uint32_t *)a1 + 11);
  v173 = a1[6];
  v174 = a1[7];
  do
  {
    v188 = v162;
    v189 = v163;
    v175 = v162 ^ *(uint64_t *)a2;
    v190 = v164;
    v176 = *(uint32_t *)(a2 + 8) ^ v163;
    v177 = v164 ^ *(uint32_t *)(a2 + 12);
    v191 = v165;
    v178 = *(uint32_t *)(a2 + 16) ^ v165;
    v192 = v166;
    v179 = v166 ^ *(uint32_t *)(a2 + 20);
    v193 = v167;
    v194 = v168;
    v180 = v167 ^ *(uint32_t *)(a2 + 24);
    v181 = v168 ^ *(uint32_t *)(a2 + 28);
    v196 = v170;
    v182 = *(uint32_t *)(a2 + 32) ^ v169;
    v183 = *(uint32_t *)(a2 + 36) ^ v170;
    v198 = v172;
    v184 = v171 ^ *(uint32_t *)(a2 + 40);
    v185 = v172 ^ *(uint32_t *)(a2 + 44);
    v195 = v169;
    v197 = v171;
    v186 = v173 ^ *(uint64_t *)(a2 + 48);
    v199 = v173;
    v200 = v174;
    v187 = *(uint64_t *)(a2 + 56) ^ v174;
    v160 = (int *)(dword_1D32440);
    do
    {
      v3 = 4 * BYTE2(v199);
      v4 = 4 * BYTE1(v200);
      v5 = *(int *)((char *)&dword_1D32444[v4] + 3) ^ *(int *)((char *)&dword_1D32444[v3] + 2);
      v6 = *(int *)((char *)&dword_1D32448[v4] + 3) ^ *(int *)((char *)&dword_1D32444[v3 + 1] + 2);
      v7 = 4 * HIBYTE(v197);
      v8 = 4 * BYTE2(v200);
      v9 = *(int *)((char *)&dword_1D32444[v7] + 1) ^ v5;
      v10 = *(int *)((char *)&dword_1D32448[v7] + 1) ^ v6;
      v11 = 4 * (uint8_t)v196;
      v12 = dword_1D32444[v11] ^ v9;
      v13 = dword_1D32448[v11] ^ v10;
      v14 = 4 * BYTE1(v194);
      v15 = *(int *)((char *)&dword_1D32440[v14] + 3) ^ v12;
      v16 = *(int *)((char *)&dword_1D32444[v14] + 3) ^ v13;
      v17 = 4 * BYTE2(v192);
      v18 = *(int *)((char *)&dword_1D32440[v17] + 2) ^ v15;
      v19 = *(int *)((char *)&dword_1D32444[v17] + 2) ^ v16;
      v20 = 4 * HIBYTE(v190);
      v21 = *(int *)((char *)&dword_1D32440[v20] + 1) ^ v18;
      v22 = *(int *)((char *)&dword_1D32444[v20] + 1) ^ v19;
      v23 = 4 * (uint8_t)v188;
      v24 = v160[1024] ^ dword_1D32440[v23] ^ v21;
      v25 = v160[1025] ^ dword_1D32444[v23] ^ v22;
      v26 = 4 * BYTE1(v188);
      v27 = *(int *)((char *)&dword_1D32444[v26] + 3) ^ *(int *)((char *)&dword_1D32444[v8] + 2);
      v28 = *(int *)((char *)&dword_1D32448[v26] + 3) ^ *(int *)((char *)&dword_1D32444[v8 + 1] + 2);
      v29 = 4 * BYTE3(v199);
      v30 = *(int *)((char *)&dword_1D32444[v29] + 1) ^ v27;
      v31 = *(int *)((char *)&dword_1D32448[v29] + 1) ^ v28;
      v32 = 4 * (uint8_t)v198;
      v33 = dword_1D32444[v32] ^ v30;
      v34 = dword_1D32448[v32] ^ v31;
      v35 = 4 * BYTE1(v196);
      v36 = *(int *)((char *)&dword_1D32440[v35] + 3) ^ v33;
      v37 = *(int *)((char *)&dword_1D32444[v35] + 3) ^ v34;
      v38 = 4 * BYTE2(v194);
      v39 = *(int *)((char *)&dword_1D32440[v38] + 2) ^ v36;
      v40 = *(int *)((char *)&dword_1D32444[v38] + 2) ^ v37;
      v41 = 4 * HIBYTE(v192);
      v42 = *(int *)((char *)&dword_1D32440[v41] + 1) ^ v39;
      v43 = *(int *)((char *)&dword_1D32444[v41] + 1) ^ v40;
      v44 = 4 * (uint8_t)v189;
      v45 = dword_1D32440[v44] ^ v42;
      v46 = dword_1D32444[v44] ^ v43;
      v141 = dword_20B9FF4[4 * (uint8_t)v191 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v194) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v196) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE1(v198) - 925421] + 3)
           ^ dword_20B9FF4[4 * BYTE4(v199) - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE3(v200) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v189) + 1] + 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE2(v188) + 1] + 2);
      v47 = dword_20B9FF4[4 * (uint8_t)v191 - 925420]
          ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v194) - 925420] + 1)
          ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v196) - 925420] + 2)
          ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE1(v198) - 925420] + 3)
          ^ dword_20B9FF4[4 * BYTE4(v199) - 925419]
          ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE3(v200) - 925418] - 3)
          ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v189) + 1] + 3)
          ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v188) - 925418] - 2);
      v128 = dword_20B9FF4[4 * (uint8_t)v193 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v196) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v198) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v199) - 925421] + 3)
           ^ dword_20B9FF4[4 * BYTE4(v200) - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE3(v188) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v191) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v189) - 925419] - 2);
      v143 = dword_20B9FF4[4 * (uint8_t)v193 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v196) - 925420] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v198) - 925420] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v199) - 925420] + 3)
           ^ dword_20B9FF4[4 * BYTE4(v200) - 925419]
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE3(v188) - 925418] - 3)
           ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v191) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v189) - 925418] - 2);
      v130 = dword_20B9FF4[4 * (uint8_t)v195 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v198) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v199) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v200) - 925421] + 3)
           ^ dword_20B9FF4[4 * BYTE4(v188) - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v189) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v193) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v191) - 925419] - 2);
      v145 = dword_20B9FF4[4 * (uint8_t)v195 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v198) - 925420] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v199) - 925420] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v200) - 925420] + 3)
           ^ dword_20B9FF4[4 * BYTE4(v188) - 925419]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v189) - 925418] - 3)
           ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v193) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v191) - 925418] - 2);
      v132 = dword_20B9FF4[4 * (uint8_t)v197 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v199) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v200) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v188) - 925421] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v190 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v191) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v195) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v193) - 925419] - 2);
      v155 = dword_20B9FF4[4 * (uint8_t)v197 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v199) - 925420] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v200) - 925420] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v188) - 925420] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v190 - 925419]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v191) - 925418] - 3)
           ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v195) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v193) - 925418] - 2);
      LODWORD(v156) = *(int *)((char *)&dword_1D32440[4 * BYTE1(v197) + 1] + 3)
                    ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v195) - 925419] - 2);
      HIDWORD(v156) = *(int *)((char *)&dword_1D32444[4 * BYTE1(v197) + 1] + 3)
                    ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v195) - 925418] - 2);
      v157 = *(uint64_t *)&dword_20B9FF4[4 * (uint8_t)v199 - 925421]
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * HIBYTE(v200) - 925421] + 1)
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * BYTE6(v188) - 925421] + 2)
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * BYTE1(v190) - 925421] + 3)
           ^ *(uint64_t *)&dword_20B9FF4[4 * (uint8_t)v192 - 925420]
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * HIBYTE(v193) - 925419] - 3)
           ^ v156;
      LODWORD(v158) = *(int *)((char *)&dword_1D32440[4 * BYTE1(v199) + 1] + 3)
                    ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v197) - 925419] - 2);
      HIDWORD(v158) = *(int *)((char *)&dword_1D32444[4 * BYTE1(v199) + 1] + 3)
                    ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v197) - 925418] - 2);
      v159 = *(uint64_t *)((char *)&dword_20B9FF4[4 * BYTE2(v190) - 925421] + 2)
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * BYTE1(v192) - 925421] + 3)
           ^ *(uint64_t *)&dword_20B9FF4[4 * (uint8_t)v194 - 925420]
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * HIBYTE(v195) - 925419] - 3)
           ^ v158;
      LODWORD(v188) = v24;
      v48 = 4 * HIBYTE(v188);
      HIDWORD(v188) = v25;
      v189 = v45;
      v190 = v46;
      v192 = v47;
      v191 = v141;
      v193 = v128;
      v194 = v143;
      v195 = v130;
      v196 = v145;
      v197 = v132;
      v198 = v155;
      v199 = v157;
      v200 = *(uint64_t *)&dword_20B9FF4[4 * (uint8_t)v200 - 925421]
           ^ *(uint64_t *)((char *)&dword_20B9FF4[v48 - 925421] + 1)
           ^ v159;
      LODWORD(v147) = *(int *)((char *)&dword_1D32440[4 * BYTE1(v187) + 1] + 3)
                    ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v186) - 925419] - 2);
      HIDWORD(v147) = *(int *)((char *)&dword_1D32444[4 * BYTE1(v187) + 1] + 3)
                    ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v186) - 925418] - 2);
      v148 = *(uint64_t *)((char *)&dword_20B9FF4[4 * HIBYTE(v177) - 925421] + 1)
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * BYTE2(v179) - 925421] + 2)
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * BYTE1(v181) - 925421] + 3)
           ^ *(uint64_t *)&dword_20B9FF4[4 * (uint8_t)v183 - 925420]
           ^ *(uint64_t *)((char *)&dword_20B9FF4[4 * HIBYTE(v184) - 925419] - 3)
           ^ v147;
      LODWORD(v149) = v24 ^ dword_20B9FF4[4 * (uint8_t)v175 - 925421] ^ v148;
      v49 = 4 * BYTE2(v187);
      HIDWORD(v149) = v25 ^ dword_20B9FF4[4 * (uint8_t)v175 - 925420] ^ HIDWORD(v148);
      v50 = 4 * BYTE1(v175);
      v134 = *(int *)((char *)&dword_1D32444[v50] + 3) ^ *(int *)((char *)&dword_1D32444[v49] + 2);
      v51 = *(int *)((char *)&dword_1D32448[v50] + 3);
      v52 = 4 * BYTE3(v186);
      v135 = *(int *)((char *)&dword_1D32444[v52] + 1) ^ v134;
      v150 = *(int *)((char *)&dword_1D32448[v52] + 1) ^ v51 ^ *(int *)((char *)&dword_1D32444[v49 + 1] + 2);
      v53 = 4 * (uint8_t)v185;
      v54 = dword_1D32448[v53];
      v136 = dword_1D32444[v53] ^ v135;
      v55 = 4 * BYTE1(v183);
      v151 = v54 ^ v150;
      v56 = *(int *)((char *)&dword_1D32444[v55] + 3);
      v137 = *(int *)((char *)&dword_1D32440[v55] + 3) ^ v136;
      v57 = 4 * BYTE2(v181);
      v138 = *(int *)((char *)&dword_1D32440[v57] + 2) ^ v137;
      v152 = *(int *)((char *)&dword_1D32444[v57] + 2) ^ v56 ^ v151;
      v58 = 4 * HIBYTE(v179);
      v59 = *(int *)((char *)&dword_1D32444[v58] + 1);
      v139 = *(int *)((char *)&dword_1D32440[v58] + 1) ^ v138;
      v60 = 4 * (uint8_t)v176;
      v140 = v45 ^ dword_1D32440[v60] ^ v139;
      v153 = v46 ^ dword_1D32444[v60] ^ v59 ^ v152;
      v61 = 4 * BYTE1(v176);
      v62 = 4 * BYTE2(v175);
      v63 = *(int *)((char *)&dword_1D32448[v61] + 3);
      v64 = *(int *)((char *)&dword_1D32444[v61] + 3) ^ *(int *)((char *)&dword_1D32444[v62] + 2);
      v65 = 4 * BYTE3(v187);
      v66 = *(int *)((char *)&dword_1D32444[v65] + 1) ^ v64;
      v67 = *(int *)((char *)&dword_1D32448[v65] + 1) ^ v63 ^ *(int *)((char *)&dword_1D32444[v62 + 1] + 2);
      v68 = 4 * BYTE4(v186);
      v69 = dword_1D32444[v68] ^ v66;
      v70 = dword_1D32448[v68] ^ v67;
      v71 = 4 * BYTE1(v185);
      v72 = *(int *)((char *)&dword_1D32440[v71] + 3) ^ v69;
      v73 = *(int *)((char *)&dword_1D32444[v71] + 3) ^ v70;
      v74 = 4 * BYTE2(v183);
      v75 = *(int *)((char *)&dword_1D32440[v74] + 2) ^ v72;
      v76 = *(int *)((char *)&dword_1D32444[v74] + 2) ^ v73;
      v77 = 4 * HIBYTE(v181);
      v78 = *(int *)((char *)&dword_1D32440[v77] + 1) ^ v75;
      v79 = *(int *)((char *)&dword_1D32444[v77] + 1);
      v80 = 4 * (uint8_t)v178;
      v81 = v141 ^ dword_1D32440[v80] ^ v78;
      v154 = v47 ^ dword_1D32444[v80] ^ v79 ^ v76;
      v82 = 4 * BYTE2(v176);
      v83 = 4 * BYTE1(v178);
      v84 = 4 * BYTE1(v180);
      v85 = *(int *)((char *)&dword_1D32444[v83] + 3) ^ *(int *)((char *)&dword_1D32444[v82] + 2);
      v86 = *(int *)((char *)&dword_1D32448[v83] + 3) ^ *(int *)((char *)&dword_1D32448[v82] + 2);
      v87 = 4 * BYTE3(v175);
      v88 = *(int *)((char *)&dword_1D32444[v87] + 1) ^ v85;
      v89 = *(int *)((char *)&dword_1D32448[v87] + 1) ^ v86;
      v90 = 4 * BYTE4(v187);
      v91 = dword_1D32444[v90] ^ v88;
      v92 = dword_1D32448[v90] ^ v89;
      v93 = 4 * BYTE5(v186);
      v94 = *(int *)((char *)&dword_1D32440[v93] + 3) ^ v91;
      v95 = *(int *)((char *)&dword_1D32444[v93] + 3) ^ v92;
      v96 = 4 * BYTE2(v185);
      v97 = *(int *)((char *)&dword_1D32440[v96] + 2) ^ v94;
      v98 = *(int *)((char *)&dword_1D32444[v96] + 2) ^ v95;
      v99 = 4 * HIBYTE(v183);
      v100 = *(int *)((char *)&dword_1D32440[v99] + 1) ^ v97;
      v101 = *(int *)((char *)&dword_1D32444[v99] + 1) ^ v98;
      v102 = 4 * (uint8_t)v180;
      v103 = dword_1D32444[v102] ^ v101;
      v104 = v128 ^ dword_1D32440[v102] ^ v100;
      v105 = 4 * BYTE2(v178);
      v106 = v143 ^ v103;
      v107 = *(int *)((char *)&dword_1D32444[v84] + 3) ^ *(int *)((char *)&dword_1D32444[v105] + 2);
      v108 = *(int *)((char *)&dword_1D32448[v84] + 3) ^ *(int *)((char *)&dword_1D32444[v105 + 1] + 2);
      v109 = 4 * HIBYTE(v176);
      v110 = *(int *)((char *)&dword_1D32444[v109] + 1) ^ v107;
      v111 = *(int *)((char *)&dword_1D32448[v109] + 1) ^ v108;
      v112 = 4 * BYTE4(v175);
      v113 = dword_1D32444[v112] ^ v110;
      v114 = dword_1D32448[v112] ^ v111;
      v115 = 4 * BYTE5(v187);
      v116 = *(int *)((char *)&dword_1D32440[v115] + 3) ^ v113;
      v117 = *(int *)((char *)&dword_1D32444[v115] + 3) ^ v114;
      v118 = 4 * BYTE6(v186);
      v119 = *(int *)((char *)&dword_1D32440[v118] + 2) ^ v116;
      v120 = *(int *)((char *)&dword_1D32444[v118] + 2) ^ v117;
      v121 = 4 * HIBYTE(v185);
      v122 = *(int *)((char *)&dword_1D32440[v121] + 1) ^ v119;
      v123 = *(int *)((char *)&dword_1D32444[v121] + 1) ^ v120;
      v124 = 4 * (uint8_t)v182;
      v125 = v130 ^ dword_20B9FF4[v124 - 925421] ^ v122;
      v126 = v145 ^ dword_20B9FF4[v124 - 925420] ^ v123;
      v142 = v132
           ^ dword_20B9FF4[4 * (uint8_t)v184 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v186) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v187) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v175) - 925421] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v177 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v178) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v182) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v180) - 925419] - 2);
      v129 = v155
           ^ dword_20B9FF4[4 * (uint8_t)v184 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v186) - 925420] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v187) - 925420] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE5(v175) - 925420] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v177 - 925419]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v178) - 925418] - 3)
           ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v182) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v180) - 925418] - 2);
      v144 = v157
           ^ dword_20B9FF4[4 * (uint8_t)v186 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v187) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v175) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE1(v177) - 925421] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v179 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v180) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v184) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v182) - 925419] - 2);
      v131 = HIDWORD(v157)
           ^ dword_20B9FF4[4 * (uint8_t)v186 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v187) - 925420] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE6(v175) - 925420] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE1(v177) - 925420] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v179 - 925419]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v180) - 925418] - 3)
           ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v184) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v182) - 925418] - 2);
      v178 = v81;
      v146 = v200
           ^ dword_20B9FF4[4 * (uint8_t)v187 - 925421]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v175) - 925421] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v177) - 925421] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE1(v179) - 925421] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v181 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v182) - 925419] - 3)
           ^ *(int *)((char *)&dword_1D32440[4 * BYTE1(v186) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v184) - 925419] - 2);
      v133 = HIDWORD(v200)
           ^ dword_20B9FF4[4 * (uint8_t)v187 - 925420]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v175) - 925420] + 1)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v177) - 925420] + 2)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE1(v179) - 925420] + 3)
           ^ dword_20B9FF4[4 * (uint8_t)v181 - 925419]
           ^ *(int *)((char *)&dword_20B9FF4[4 * HIBYTE(v182) - 925418] - 3)
           ^ *(int *)((char *)&dword_1D32444[4 * BYTE1(v186) + 1] + 3)
           ^ *(int *)((char *)&dword_20B9FF4[4 * BYTE2(v184) - 925418] - 2);
      v175 = v149;
      v176 = v140;
      v177 = v153;
      v179 = v154;
      v180 = v104;
      v160 += 2;
      v184 = v142;
      v185 = v129;
      v186 = __PAIR64__(v131, v144);
      v187 = __PAIR64__(v133, v146);
      v181 = v106;
      v182 = v125;
      v183 = v126;
    }
    while ( v160 != (int *)&unk_1D32490 );
    v162 ^= v149 ^ *(uint64_t *)a2;
    *a1 = v162;
    v164 ^= *(uint32_t *)(a2 + 12) ^ v153;
    v163 ^= *(uint32_t *)(a2 + 8) ^ v140;
    *((uint32_t *)a1 + 2) = v163;
    *((uint32_t *)a1 + 3) = v164;
    v165 ^= *(uint32_t *)(a2 + 16) ^ v81;
    v166 ^= *(uint32_t *)(a2 + 20) ^ v154;
    *((uint32_t *)a1 + 4) = v165;
    *((uint32_t *)a1 + 5) = v166;
    v168 ^= *(uint32_t *)(a2 + 28) ^ v106;
    v167 ^= *(uint32_t *)(a2 + 24) ^ v104;
    *((uint32_t *)a1 + 6) = v167;
    *((uint32_t *)a1 + 7) = v168;
    v169 ^= *(uint32_t *)(a2 + 32) ^ v125;
    v170 ^= *(uint32_t *)(a2 + 36) ^ v126;
    *((uint32_t *)a1 + 8) = v169;
    *((uint32_t *)a1 + 9) = v170;
    v171 ^= *(uint32_t *)(a2 + 40) ^ v142;
    v172 ^= *(uint32_t *)(a2 + 44) ^ v129;
    *((uint32_t *)a1 + 10) = v171;
    *((uint32_t *)a1 + 11) = v172;
    HIDWORD(v173) ^= *(uint32_t *)(a2 + 52) ^ v131;
    LODWORD(v173) = *(uint32_t *)(a2 + 48) ^ v144 ^ v173;
    a1[6] = v173;
    LODWORD(v174) = *(uint32_t *)(a2 + 56) ^ v146 ^ v174;
    HIDWORD(v174) ^= *(uint32_t *)(a2 + 60) ^ v133;
    result = v174;
    a1[7] = v174;
    a2 += 64;
    --a3;
  }
  while ( a3 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B0E0  (binary VA: 0x1a2b0e0)
// Original: sub_1A2B0E0
// ----------------------------------------------------------------------------
int sub_1A2B0E0(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B110  (binary VA: 0x1a2b110)
// Original: sub_1A2B110
// ----------------------------------------------------------------------------
int sub_1A2B110(int a1)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;

  v1 = 0;
  v2 = (uint32_t *)(CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v2 != nullptr )
  {
    v3 = BUF_MEM_new();
    *v2 = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
    {
      v2[1] = 0;
      v1 = 1;
      *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v2);
    }
    else
    {
      CRYPTO_free(v2);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B1A0  (binary VA: 0x1a2b1a0)
// Original: sub_1A2B1A0
// ----------------------------------------------------------------------------
void * sub_1A2B1A0(int a1, int a2, int a3, uint32_t *a4)
{
  void *result;
  unsigned int *v5;
  size_t v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  struct stat buf;
  typedef void *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef struct stat *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef const char *_g4_t_v18;
  typedef int _g4_t_i;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t _g4_t_v24[2];
  typedef uint32_t _g4_t_v26[19];
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_i)) > _g4_s6 ? (32u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v20)) > _g4_s7 ? (40u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v21)) > _g4_s8 ? (44u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v22)) > _g4_s9 ? (52u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v23)) > _g4_s10 ? (56u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v24)) > _g4_s11 ? (60u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v26)) > _g4_s12 ? (164u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (240u + sizeof(_g4_t_v27)) > _g4_s13 ? (240u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (248u + sizeof(_g4_t_v28)) > _g4_s14 ? (248u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (268u + sizeof(_g4_t_v29)) > _g4_s15 ? (268u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (288u + sizeof(_g4_t_v30)) > _g4_s16 ? (288u + sizeof(_g4_t_v30)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 164u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 240u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 248u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 268u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 288u);

  result = nullptr;
  if ( a3 == 0 )
    return result;
  v22 = a2;
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
    {
      ERR_put_error(11, 103, 112, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    v26[0] = (uint32_t)(uintptr_t)(&v27);
    v28 = a3;
    v23 = v26;
    v18 = "r";
    v5 = BUF_MEM_new();
    if ( v5 != nullptr )
      goto LABEL_7;
LABEL_35:
    ERR_put_error(11, 103, 7, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  v30 = a3;
  v26[0] = (uint32_t)(uintptr_t)(&v29);
  v23 = v26;
  v18 = (const char *)&unk_1B15112;
  v5 = BUF_MEM_new();
  if ( v5 == nullptr )
    goto LABEL_35;
LABEL_7:
  v20 = *(uint32_t *)(a1 + 12);
  v17 = X509_NAME_hash(a3);
  for ( i = 0; ; ++i )
  {
    if ( i >= sk_num(*(uint32_t *)(v20 + 4)) )
    {
      v10 = 0;
      goto LABEL_37;
    }
    v15 = (uint32_t *)sk_value(*(int **)(v20 + 4), i);
    v6 = strlen((const char *)*v15);
    if ( BUF_MEM_grow(v5, v6 + 17) == 0 )
    {
      ERR_put_error(11, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = 0;
      goto LABEL_37;
    }
    if ( a2 == 2 && v15[2] != 0 )
    {
      v24[0] = v17;
      CRYPTO_lock(5, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      v7 = 0;
      v9 = sk_find(v15[2], (int)(uintptr_t)(v24));
      v21 = 0;
      if ( v9 >= 0 )
      {
        v21 = sk_value((int *)v15[2], v9);
        v7 = *(uint32_t *)(v21 + 4);
      }
      CRYPTO_lock(6, 11, (int)(uintptr_t)(&unk_1B15112), 0);
      BIO_snprintf((const void *)v5[1], v5[2], "%s%c%08lx.%s%d", *v15, 47, v17, v18, v7);
    }
    else
    {
      v21 = 0;
      v7 = 0;
      BIO_snprintf((const void *)v5[1], v5[2], "%s%c%08lx.%s%d", *v15, 47, v17, v18, 0);
    }
    while ( stat((const char *)v5[1], &buf) >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( X509_load_cert_file(a1, v5[1], v15[1]) == 0 )
          break;
      }
      else if ( X509_load_crl_file(a1, v5[1], v15[1]) == 0 )
      {
        break;
      }
      BIO_snprintf((const void *)v5[1], v5[2], "%s%c%08lx.%s%d", *v15, 47, v17, v18, ++v7);
    }
    CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    v8 = sk_find(*(uint32_t *)(*(uint32_t *)(a1 + 16) + 4), (int)(uintptr_t)(&v22));
    v16 = nullptr;
    if ( v8 != -1 )
      v16 = (struct stat *)sk_value(*(int **)(*(uint32_t *)(a1 + 16) + 4), v8);
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( a2 != 2 )
    {
      if ( v16 != nullptr )
        goto LABEL_32;
      continue;
    }
    CRYPTO_lock(9, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v21 == 0 )
    {
      v24[0] = v17;
      v11 = sk_find(v15[2], (int)(uintptr_t)(v24));
      if ( v11 < 0 )
        break;
      v21 = sk_value((int *)v15[2], v11);
      if ( v21 == 0 )
        break;
    }
    if ( *(uint32_t *)(v21 + 4) < v7 )
      *(uint32_t *)(v21 + 4) = v7;
LABEL_31:
    CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v16 != nullptr )
    {
LABEL_32:
      *a4 = v16->st_dev;
      a4[1] = HIDWORD(v16->st_dev);
      v10 = 1;
      goto LABEL_37;
    }
  }
  v12 = (uint32_t *)(CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0));
  *v12 = v17;
  v12[1] = v7;
  v14 = v12;
  if ( sk_push((int *)v15[2], (int)(uintptr_t)(v12)) != 0 )
    goto LABEL_31;
  CRYPTO_lock(10, 11, (int)(uintptr_t)(&unk_1B15112), 0);
  CRYPTO_free(v14);
  v10 = 0;
LABEL_37:
  v13 = (void *)v10;
  BUF_MEM_free(v5);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B780  (binary VA: 0x1a2b780)
// Original: sub_1A2B780
// ----------------------------------------------------------------------------
int sub_1A2B780(void *a1)
{
  if ( *(uint32_t *)a1 != 0 )
    CRYPTO_free(*(void **)a1);
  if ( *((uint32_t *)a1 + 2) != 0 )
    sk_pop_free(*((void ***)a1 + 2), (void (*)(uint32_t))sub_1A2B0E0);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B7E0  (binary VA: 0x1a2b7e0)
// Original: sub_1A2B7E0
// ----------------------------------------------------------------------------
int sub_1A2B7E0(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 12);
  if ( *(uint32_t *)(v1 + 4) != 0 )
    sk_pop_free(*(void ***)(v1 + 4), (void (*)(uint32_t))sub_1A2B780);
  if ( *(uint32_t *)v1 != 0 )
    BUF_MEM_free(*(void **)v1);
  return CRYPTO_free((void *)v1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B840  (binary VA: 0x1a2b840)
// Original: sub_1A2B840
// ----------------------------------------------------------------------------
int sub_1A2B840(uint32_t **a1, uint32_t **a2)
{
  int result;

  result = 1;
  if ( **a1 <= **a2 )
    return -(**a1 < **a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2B880  (binary VA: 0x1a2b880)
// Original: sub_1A2B880
// ----------------------------------------------------------------------------
int sub_1A2B880(int **a1, char *a2, char *a3)
{
  char v4;
  int i;
  const char *s;
  int v7;
  char *v8;
  char **v9;
  char **v10;
  char *v11;
  int *v12;
  size_t n;
  char *v15;
  char *src;

  src = a2;
  if ( a2 == nullptr || (v4 = *a2, v15 = a2 + 1, *a2 == 0) )
  {
    ERR_put_error(11, 100, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  while ( v4 != 0 && v4 != 58 )
LABEL_19:
    v4 = *v15++;
  n = v15 - 1 - src;
  if ( v15 - 1 == src )
  {
    src = v15;
    goto LABEL_19;
  }
  for ( i = 0; i < sk_num((int)(uintptr_t)(*a1)); ++i )
  {
    s = *(const char **)sk_value(*a1, i);
    if ( strlen(s) == n && strncmp(s, src, n) == 0 )
      break;
  }
  v7 = sk_num((int)(uintptr_t)(*a1));
  v8 = v15;
  if ( v7 > i )
  {
LABEL_18:
    src = v8;
    goto LABEL_19;
  }
  if ( *a1 == nullptr )
  {
    v12 = (int *)(sk_new_null());
    *a1 = v12;
    if ( v12 == nullptr )
    {
      ERR_put_error(11, 100, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  v9 = (char **)CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0);
  v10 = v9;
  if ( v9 != nullptr )
  {
    v9[1] = a3;
    v9[2] = (char *)sk_new((int)(uintptr_t)(sub_1A2B840));
    v11 = (char *)(CRYPTO_malloc(v15 - src, (int)(uintptr_t)(&unk_1B15112), 0));
    *v10 = v11;
    if ( v11 == nullptr || v10[2] == nullptr || (strncpy(v11, src, n), (*v10)[n] = 0, sk_push(*a1, (int)(uintptr_t)(v10)) == 0) )
    {
      sub_1A2B780(v10);
      return 0;
    }
    v8 = v15;
    if ( *(v15 - 1) == 0 )
      return 1;
    goto LABEL_18;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2BAE0  (binary VA: 0x1a2bae0)
// Original: sub_1A2BAE0
// ----------------------------------------------------------------------------
int sub_1A2BAE0(int a1, int a2, char *a3, char *a4)
{
  int v4;
  int result;
  const char *name;
  char *default_cert_dir;

  v4 = *(uint32_t *)(a1 + 12);
  result = 0;
  if ( a2 == 2 )
  {
    if ( a4 == (char *)(uintptr_t)((uint8_t *)&dword_0 + 3) )
    {
      name = X509_get_default_cert_dir_env();
      default_cert_dir = getenv(name);
      if ( default_cert_dir == nullptr )
        default_cert_dir = (char *)X509_get_default_cert_dir();
      result = sub_1A2B880((int **)(v4 + 4), default_cert_dir, (uint8_t *)&dword_0 + 1);
      if ( result == 0 )
      {
        ERR_put_error(11, 102, 103, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    }
    else
    {
      return sub_1A2B880((int **)(v4 + 4), a3, a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2C1F0  (binary VA: 0x1a2c1f0)
// Original: sub_1A2C1F0
// ----------------------------------------------------------------------------
bool sub_1A2C1F0(int a1, int a2, char *a3, int a4)
{
  const char *name;
  char *default_cert_file;

  if ( a2 != 1 )
    return 0;
  if ( a4 == 3 )
  {
    name = X509_get_default_cert_file_env();
    default_cert_file = getenv(name);
    if ( default_cert_file == nullptr )
      default_cert_file = (char *)X509_get_default_cert_file();
    if ( X509_load_cert_crl_file(a1, default_cert_file, 1) != 0 )
    {
      return 1;
    }
    else
    {
      ERR_put_error(11, 101, 104, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else if ( a4 == 1 )
  {
    return X509_load_cert_crl_file(a1, a3, 1) != 0;
  }
  else
  {
    return X509_load_cert_file(a1, (int)(uintptr_t)(a3), a4) != 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A2D1A0  (binary VA: 0x1a2d1a0)
// Original: sub_1A2D1A0
// ----------------------------------------------------------------------------
int sub_1A2D1A0(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2D1C0  (binary VA: 0x1a2d1c0)
// Original: sub_1A2D1C0
// ----------------------------------------------------------------------------
char sub_1A2D1C0(int a1, int a2)
{
  int **v2;
  char result;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;

  v2 = *(int ***)(a2 + 100);
  result = 3;
  if ( v2 != nullptr )
  {
    v4 = (int)(uintptr_t)(v2[1]);
    v5 = 0;
    if ( v4 != 0 )
    {
      while ( v5 < sk_num(v4) )
      {
        v6 = sk_value(v2[1], v5);
        if ( OBJ_obj2nid(v6) == a1 )
          return 2;
        ++v5;
        v4 = (int)(uintptr_t)(v2[1]);
      }
    }
    v7 = *v2;
    v8 = 0;
    if ( *v2 != nullptr )
    {
      while ( 1 )
      {
        if ( v8 >= sk_num((int)(uintptr_t)(v7)) )
          return 3;
        v9 = sk_value(*v2, v8);
        if ( OBJ_obj2nid(v9) == a1 )
          break;
        ++v8;
        v7 = *v2;
      }
      return 1;
    }
    else
    {
      return 3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2D2B0  (binary VA: 0x1a2d2b0)
// Original: sub_1A2D2B0
// ----------------------------------------------------------------------------
int sub_1A2D2B0(int a1, int a2)
{
  X509_check_purpose(a2, -1, 0);
  return (*(uint32_t *)(a2 + 40) & 0x20) == 0 ? 3 : 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2D310  (binary VA: 0x1a2d310)
// Original: sub_1A2D310
// ----------------------------------------------------------------------------
char sub_1A2D310(int a1, int a2)
{
  uint32_t *v2;

  v2 = *(uint32_t **)(a2 + 100);
  if ( v2 != nullptr && (*v2 != 0 || v2[1] != 0) )
    return sub_1A2D1C0(*(uint32_t *)(a1 + 16), a2);
  else
    return sub_1A2D2B0(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A2D360  (binary VA: 0x1a2d360)
// Original: sub_1A2D360
// ----------------------------------------------------------------------------
char sub_1A2D360(int a1, int a2)
{
  if ( *(uint32_t *)(a2 + 100) != 0 )
    return sub_1A2D1C0(*(uint32_t *)(a1 + 16), a2);
  else
    return 3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2D390  (binary VA: 0x1a2d390)
// Original: sub_1A2D390
// ----------------------------------------------------------------------------
void sub_1A2D390(void *a1)
{
  int v1;

  if ( a1 != nullptr )
  {
    v1 = *((uint32_t *)a1 + 1);
    if ( (v1 & 1) != 0 )
    {
      if ( (v1 & 2) != 0 )
        CRYPTO_free(*((void **)a1 + 3));
      CRYPTO_free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: X509v3_get_ext_count  (binary VA: 0x1a2d800)
// Original: X509v3_get_ext_count
// ----------------------------------------------------------------------------
int X509v3_get_ext_count(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return sk_num(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509v3_get_ext_by_OBJ  (binary VA: 0x1a2d830)
// Original: X509v3_get_ext_by_OBJ
// ----------------------------------------------------------------------------
int X509v3_get_ext_by_OBJ(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;

  if ( a1 == nullptr )
    return -1;
  v3 = 0;
  if ( a3 + 1 >= 0 )
    v3 = a3 + 1;
  v4 = sk_num((int)(uintptr_t)(a1));
  if ( v4 <= v3 )
    return -1;
  while ( 1 )
  {
    v5 = (int *)sk_value(a1, v3);
    if ( OBJ_cmp(*v5, a2) == 0 )
      break;
    if ( ++v3 == v4 )
      return -1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509v3_get_ext_by_NID  (binary VA: 0x1a2d8b0)
// Original: X509v3_get_ext_by_NID
// ----------------------------------------------------------------------------
int X509v3_get_ext_by_NID(int *a1, unsigned int a2, int a3)
{
  char **v3;

  v3 = OBJ_nid2obj(a2);
  if ( v3 != nullptr )
    return X509v3_get_ext_by_OBJ(a1, (int)(uintptr_t)(v3), a3);
  else
    return -2;
}

// ----------------------------------------------------------------------------
// Function: X509v3_get_ext_by_critical  (binary VA: 0x1a2d900)
// Original: X509v3_get_ext_by_critical
// ----------------------------------------------------------------------------
int X509v3_get_ext_by_critical(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v6;

  if ( a1 == nullptr )
    return -1;
  v3 = 0;
  if ( a3 + 1 >= 0 )
    v3 = a3 + 1;
  v6 = sk_num((int)(uintptr_t)(a1));
  if ( v6 <= v3 )
    return -1;
  while ( 1 )
  {
    v4 = *(uint32_t *)(sk_value(a1, v3) + 4);
    if ( a2 != 0 && v4 > 0 )
      break;
    if ( a2 == 0 && v4 <= 0 )
      break;
    if ( ++v3 == v6 )
      return -1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509v3_get_ext  (binary VA: 0x1a2d9a0)
// Original: X509v3_get_ext
// ----------------------------------------------------------------------------
int X509v3_get_ext(int *a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a1 != nullptr && sk_num((int)(uintptr_t)(a1)) > a2 && a2 >= 0 )
    return sk_value(a1, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509v3_delete_ext  (binary VA: 0x1a2da10)
// Original: X509v3_delete_ext
// ----------------------------------------------------------------------------
int X509v3_delete_ext(int *a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a1 != nullptr && sk_num((int)(uintptr_t)(a1)) > a2 && a2 >= 0 )
    return sk_delete(a1, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509v3_add_ext  (binary VA: 0x1a2da80)
// Original: X509v3_add_ext
// ----------------------------------------------------------------------------
void ** X509v3_add_ext(void ***a1, int a2, int a3)
{
  int v3;
  void **v4;
  int v5;
  int v6;
  int v7;
  void **v9;

  v3 = a3;
  if ( a1 == nullptr )
  {
    v4 = nullptr;
    ERR_put_error(11, 104, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return v4;
  }
  v4 = *a1;
  if ( *a1 == nullptr )
  {
    v4 = (void **)sk_new_null();
    if ( v4 == nullptr )
    {
      v7 = 0;
      goto LABEL_14;
    }
  }
  v5 = sk_num((int)(uintptr_t)(v4));
  if ( v5 < a3 )
  {
    v3 = v5;
  }
  else if ( a3 < 0 )
  {
    v3 = v5;
  }
  v6 = X509_EXTENSION_dup(a2);
  v7 = v6;
  if ( v6 == 0 )
    goto LABEL_16;
  if ( sk_insert((int)(uintptr_t)(v4), v6, v3) == 0 )
  {
LABEL_14:
    ERR_put_error(11, 104, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v7 != 0 )
      X509_EXTENSION_free(v7);
LABEL_16:
    if ( v4 != nullptr )
    {
      v9 = v4;
      v4 = nullptr;
      sk_free(v9);
    }
    return v4;
  }
  if ( *a1 == nullptr )
    *a1 = v4;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2EC10  (binary VA: 0x1a2ec10)
// Original: sub_1A2EC10
// ----------------------------------------------------------------------------
int sub_1A2EC10(int a1, int a2)
{
  return OBJ_cmp(*(uint32_t *)(**(uint32_t **)a1 + 4), *(uint32_t *)(**(uint32_t **)a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: policy_node_cmp_new  (binary VA: 0x1a2ec50)
// Original: policy_node_cmp_new
// ----------------------------------------------------------------------------
uint32_t * policy_node_cmp_new()
{
  return sk_new((int)(uintptr_t)(sub_1A2EC10));
}

// ----------------------------------------------------------------------------
// Function: tree_find_sk  (binary VA: 0x1a2ec80)
// Original: tree_find_sk
// ----------------------------------------------------------------------------
int tree_find_sk(int *a1, int a2)
{
  int v2;
  int result;
  typedef char *_g4_t_v4;
  typedef char _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);

  v6 = a2;
  v4 = &v5;
  v2 = sk_find((int)(uintptr_t)(a1), (int)(uintptr_t)(&v4));
  result = 0;
  if ( v2 != -1 )
    return sk_value(a1, v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: level_find_node  (binary VA: 0x1a2ece0)
// Original: level_find_node
// ----------------------------------------------------------------------------
uint32_t * level_find_node(int a1, int a2, int a3)
{
  int i;
  uint32_t *v4;

  for ( i = 0; i < sk_num(*(uint32_t *)(a1 + 4)); ++i )
  {
    v4 = (uint32_t *)sk_value(*(int **)(a1 + 4), i);
    if ( v4[1] == a2 && OBJ_cmp(*(uint32_t *)(*v4 + 4), a3) == 0 )
      return v4;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: policy_node_free  (binary VA: 0x1a2ed60)
// Original: policy_node_free
// ----------------------------------------------------------------------------
int policy_node_free(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: level_add_node  (binary VA: 0x1a2ed90)
// Original: level_add_node
// ----------------------------------------------------------------------------
int level_add_node(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  int *v7;
  void *v9;

  v4 = (uint32_t *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
  v5 = (int)(uintptr_t)(v4);
  if ( v4 == nullptr )
    return v5;
  *v4 = a2;
  v4[1] = a3;
  v4[2] = 0;
  if ( a1 != 0 )
  {
    if ( OBJ_obj2nid(*(uint32_t *)(a2 + 4)) == 746 )
    {
      if ( *(uint32_t *)(a1 + 8) != 0 )
      {
LABEL_13:
        v9 = (void *)v5;
        v5 = 0;
        policy_node_free(v9);
        return v5;
      }
      *(uint32_t *)(a1 + 8) = v5;
    }
    else
    {
      v6 = *(int **)(a1 + 4);
      if ( v6 == nullptr )
      {
        v6 = (int *)(policy_node_cmp_new());
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v6);
        if ( v6 == nullptr )
          goto LABEL_13;
      }
      if ( sk_push(v6, v5) == 0 )
        goto LABEL_13;
    }
  }
  if ( a4 != 0 )
  {
    v7 = *(int **)(a4 + 8);
    if ( v7 == nullptr )
    {
      v7 = (int *)(sk_new_null());
      *(uint32_t *)(a4 + 8) = (uint32_t)(uintptr_t)(v7);
      if ( v7 == nullptr )
        goto LABEL_13;
    }
    if ( sk_push(v7, a2) == 0 )
      goto LABEL_13;
  }
  if ( a3 != 0 )
    ++*(uint32_t *)(a3 + 8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: policy_node_match  (binary VA: 0x1a2eeb0)
// Original: policy_node_match
// ----------------------------------------------------------------------------
int policy_node_match(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v6;

  v3 = *a2;
  if ( (*(uint8_t *)(a1 + 13) & 4) != 0 )
    return OBJ_cmp(*(uint32_t *)(v3 + 4), a3) == 0;
  v4 = 0;
  if ( (*(uint8_t *)v3 & 3) == 0 )
    return OBJ_cmp(*(uint32_t *)(v3 + 4), a3) == 0;
  while ( 1 )
  {
    if ( v4 >= sk_num(*(uint32_t *)(v3 + 12)) )
      return 0;
    v6 = sk_value(*(int **)(v3 + 12), v4);
    if ( OBJ_cmp(v6, a3) == 0 )
      break;
    ++v4;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A2EF50  (binary VA: 0x1a2ef50)
// Original: sub_1A2EF50
// ----------------------------------------------------------------------------
int sub_1A2EF50(uint32_t *a1, int *a2, int a3)
{
  int result;
  int index_by_NID;
  uint32_t *v6;
  char v7; // di
  int entry;
  char v9; // di
  int data;
  void **v11;
  int v12;
  int v13;
  int *subject_name;

  if ( a1 != nullptr )
  {
    result = 1;
    if ( *a1 == 1 )
      return result;
    if ( a1[2] != 0 )
    {
      subject_name = (int *)X509_get_subject_name(a1[2]);
      goto LABEL_5;
    }
    v12 = a1[3];
    if ( v12 != 0 )
    {
      subject_name = *(int **)(*(uint32_t *)v12 + 16);
LABEL_5:
      index_by_NID = -1;
      do
      {
        index_by_NID = X509_NAME_get_index_by_NID(subject_name, 0x30u, index_by_NID);
        if ( index_by_NID < 0 )
          return 1;
        entry = X509_NAME_get_entry((int **)subject_name, index_by_NID);
        v9 = entry;
        data = X509_NAME_ENTRY_get_data(entry);
        v11 = ASN1_STRING_dup(data);
        if ( a3 != 0 )
        {
          v13 = index_by_NID--;
          X509_NAME_delete_entry((int)(uintptr_t)(subject_name), v13);
          X509_NAME_ENTRY_free(v9);
          if ( v11 == nullptr )
          {
LABEL_12:
            v7 = 0;
            ERR_put_error(34, 122, 65, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_13;
          }
        }
        else if ( v11 == nullptr )
        {
          goto LABEL_12;
        }
        v6 = (uint32_t *)GENERAL_NAME_new();
        v7 = (char)(uintptr_t)(v6);
        if ( v6 == nullptr )
          goto LABEL_12;
        v6[1] = (uint32_t)(uintptr_t)(v11);
        *v6 = 1;
      }
      while ( sk_push(a2, (int)(uintptr_t)(v6)) != 0 );
      v11 = nullptr;
      ERR_put_error(34, 122, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_13;
    }
  }
  v7 = 0;
  v11 = nullptr;
  ERR_put_error(34, 122, 125, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_13:
  GENERAL_NAME_free(v7);
  ASN1_STRING_free(v11);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: i2v_GENERAL_NAME  (binary VA: 0x1a2f140)
// Original: i2v_GENERAL_NAME
// ----------------------------------------------------------------------------
int i2v_GENERAL_NAME(int a1, int a2, int a3)
{
  int *v3;
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  char *v7;
  int v8;
  unsigned int v9;
  bool v10;
  char *v11;
  int v13;
  int v14;
  typedef uint8_t *_g4_t_v15;
  typedef uint8_t *_g4_t_v16;
  typedef char _g4_t_src[5];
  typedef char _g4_t_dest[268];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_src)) > _g4_s2 ? (27u + sizeof(_g4_t_src)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_dest)) > _g4_s3 ? (32u + sizeof(_g4_t_dest)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 27u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 32u);

  switch ( *(uint32_t *)a2 )
  {
    case 0:
      X509V3_add_value("othername", "<unsupported>", (int **)&a3);
      return a3;
    case 1:
      X509V3_add_value_uchar("email", *(char **)(*(uint32_t *)(a2 + 4) + 8), (int **)&a3);
      return a3;
    case 2:
      X509V3_add_value_uchar("DNS", *(char **)(*(uint32_t *)(a2 + 4) + 8), (int **)&a3);
      return a3;
    case 3:
      X509V3_add_value("X400Name", "<unsupported>", (int **)&a3);
      return a3;
    case 4:
      X509_NAME_oneline(*(int ***)(a2 + 4), dest, 256);
      X509V3_add_value("DirName", dest, (int **)&a3);
      return a3;
    case 5:
      X509V3_add_value("EdiPartyName", "<unsupported>", (int **)&a3);
      return a3;
    case 6:
      X509V3_add_value_uchar("URI", *(char **)(*(uint32_t *)(a2 + 4) + 8), (int **)&a3);
      return a3;
    case 7:
      v3 = *(int **)(a2 + 4);
      v4 = (uint8_t *)v3[2];
      v5 = *v3;
      if ( v5 == 4 )
      {
        BIO_snprintf(dest, 256, "%d.%d.%d.%d", *v4, v4[1], v4[2], v4[3]);
LABEL_11:
        X509V3_add_value("IP Address", dest, (int **)&a3);
        return a3;
      }
      if ( v5 == 16 )
      {
        dest[0] = 0;
        v15 = v4;
        BIO_snprintf(src, 5, "%X", v4[1] | (*v4 << 8));
        v6 = v15 + 2;
        strcat(dest, src);
        v7 = dest;
        v16 = v15 + 16;
        do
        {
          v8 = *(uint32_t *)v7;
          v7 += 4;
          v9 = ~v8 & (v8 - 16843009) & 0x80808080;
        }
        while ( v9 == 0 );
        v10 = (~v8 & (v8 - 16843009) & 0x8080) == 0;
        if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
          v9 >>= 16;
        v11 = v7 + 2;
        if ( !v10 )
          v11 = v7;
        *(uint16_t *)&v11[-__CFADD__((uint8_t)v9, (uint8_t)v9) - 3] = 58;
        if ( v16 != v6 )
        {
          while ( 1 )
          {
            v13 = *v6;
            v14 = v6[1];
            v6 += 2;
            BIO_snprintf(src, 5, "%X", v14 | (v13 << 8));
            strcat(dest, src);
            if ( v16 == v6 )
              break;
            *(uint16_t *)&dest[strlen(dest)] = 58;
          }
        }
        goto LABEL_11;
      }
      X509V3_add_value("IP Address", "<invalid>", (int **)&a3);
      return a3;
    case 8:
      i2t_ASN1_OBJECT(dest, 256, *(uint32_t *)(a2 + 4));
      X509V3_add_value("Registered ID", dest, (int **)&a3);
      return a3;
    default:
      return a3;
  }
}

// ----------------------------------------------------------------------------
// Function: i2v_GENERAL_NAMES  (binary VA: 0x1a2f4f0)
// Original: i2v_GENERAL_NAMES
// ----------------------------------------------------------------------------
uint32_t * i2v_GENERAL_NAMES(int a1, int *a2, int a3)
{
  int i;
  int v5;

  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    v5 = sk_value(a2, i);
    a3 = i2v_GENERAL_NAME(a1, v5, a3);
  }
  if ( a3 != 0 )
    return (uint32_t *)a3;
  else
    return sk_new_null();
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_print  (binary VA: 0x1a2f570)
// Original: GENERAL_NAME_print
// ----------------------------------------------------------------------------
int GENERAL_NAME_print(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  int *v4;
  uint8_t *v5;
  int v6;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;

  switch ( *a4 )
  {
    case 0:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "othername:<unsupported>");
      break;
    case 1:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "email:%s", *(uint32_t *)(a4[1] + 8));
      break;
    case 2:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "DNS:%s", *(uint32_t *)(a4[1] + 8));
      break;
    case 3:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "X400Name:<unsupported>");
      break;
    case 4:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "DirName: ");
      X509_NAME_print_ex((int)(uintptr_t)(a3), a4[1], 0, (unsigned int)(uintptr_t)(((uint8_t *)(uintptr_t)0x82031Fu)));
      break;
    case 5:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "EdiPartyName:<unsupported>");
      break;
    case 6:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "URI:%s", *(uint32_t *)(a4[1] + 8));
      break;
    case 7:
      v4 = (int *)a4[1];
      v5 = (uint8_t *)v4[2];
      v6 = *v4;
      if ( v6 == 4 )
      {
        BIO_printf(a2, a1, (int)(uintptr_t)(a3), "IP Address:%d.%d.%d.%d", *v5, v5[1], v5[2], v5[3]);
      }
      else if ( v6 == 16 )
      {
        BIO_printf(a2, a1, (int)(uintptr_t)(a3), "IP Address");
        v11 = v5 + 16;
        do
        {
          v9 = v5[1];
          v10 = v9 | (*v5 << 8);
          v5 += 2;
          BIO_printf(v9, v8, (int)(uintptr_t)(a3), ":%X", v10);
        }
        while ( v5 != v11 );
        BIO_puts(a3, (int)(uintptr_t)(&a0[1]));
      }
      else
      {
        BIO_printf(a2, a1, (int)(uintptr_t)(a3), "IP Address:<invalid>");
      }
      break;
    case 8:
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "Registered ID");
      i2a_ASN1_OBJECT(a3, a4[1]);
      break;
    default:
      return 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: a2i_GENERAL_NAME  (binary VA: 0x1a2f7b0)
// Original: a2i_GENERAL_NAME
// ----------------------------------------------------------------------------
uint32_t * a2i_GENERAL_NAME(uint32_t *a1, int a2, int a3, int a4, char *src, int a6)
{
  uint32_t *v6;
  char **v8;
  int v9;
  int v10;
  int *section;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  char ***v16;
  char s;
  void *v18;
  void *v19;
  uint32_t *v20;
  char *v21;
  int *v22;
  char *v23;
  size_t n;

  if ( src != nullptr )
  {
    v6 = a1;
    if ( a1 != nullptr || (v6 = (uint32_t *)GENERAL_NAME_new()) != nullptr )
    {
      switch ( a4 )
      {
        case 0:
          v23 = strchr(src, 59);
          if ( v23 != nullptr )
          {
            v14 = OTHERNAME_new();
            v6[1] = v14;
            if ( v14 != 0 )
            {
              ASN1_TYPE_free(*(uint32_t *)(v14 + 4));
              v20 = (uint32_t *)v6[1];
              v15 = (int)(uintptr_t)(ASN1_generate_v3(v23 + 1, a3));
              v20[1] = v15;
              if ( v15 != 0 )
              {
                n = v23 - src;
                v21 = (char *)(CRYPTO_malloc(n + 1, (int)(uintptr_t)(&unk_1B15112), 0));
                strncpy(v21, src, n);
                v21[n] = 0;
                v16 = (char ***)v6[1];
                *v16 = OBJ_txt2obj(v21, 0);
                CRYPTO_free(v21);
                if ( *(uint32_t *)v6[1] != 0 )
                  goto LABEL_11;
              }
            }
          }
          ERR_put_error(34, 164, 147, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_5;
        case 1:
        case 2:
        case 6:
          v12 = ASN1_STRING_type_new(22);
          v6[1] = (uint32_t)(uintptr_t)(v12);
          if ( v12 != nullptr )
          {
            v19 = v12;
            v13 = strlen(src);
            if ( ASN1_STRING_set((int)(uintptr_t)(v19), src, v13) != 0 )
              goto LABEL_11;
          }
          ERR_put_error(34, 164, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_5;
        case 4:
          v10 = X509_NAME_new();
          if ( v10 == 0 )
            goto LABEL_32;
          v18 = (void *)v10;
          section = (int *)X509V3_get_section(a3, src);
          if ( section != nullptr )
          {
            v22 = section;
            if ( X509V3_NAME_from_section((int)(uintptr_t)(v18), section, 4097) != 0 )
            {
              v6[1] = (uint32_t)(uintptr_t)(v18);
              X509V3_section_free(a3, v22);
              *v6 = a4;
              return v6;
            }
            X509_NAME_free((char)(uintptr_t)(v18));
            v6[1] = (uint32_t)(uintptr_t)(v18);
            X509V3_section_free(a3, v22);
          }
          else
          {
            ERR_put_error(34, 144, 150, (int)(uintptr_t)(&unk_1B15112), 0);
            ERR_add_error_data(2, "section=", src);
            X509_NAME_free((char)(uintptr_t)(v18));
          }
LABEL_32:
          ERR_put_error(34, 164, 149, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_5;
        case 7:
          if ( a6 != 0 )
            v9 = a2i_IPADDRESS_NC(src);
          else
            v9 = a2i_IPADDRESS(src);
          v6[1] = v9;
          if ( v9 != 0 )
            goto LABEL_11;
          ERR_put_error(34, 164, 118, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_16;
        case 8:
          v8 = OBJ_txt2obj(src, 0);
          if ( v8 != nullptr )
          {
            v6[1] = (uint32_t)(uintptr_t)(v8);
LABEL_11:
            *v6 = a4;
          }
          else
          {
            ERR_put_error(34, 164, 119, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_16:
            ERR_add_error_data(2, "value=", src);
LABEL_5:
            if ( a1 != nullptr )
            {
              v6 = nullptr;
            }
            else
            {
              s = (char)(uintptr_t)(v6);
              v6 = nullptr;
              GENERAL_NAME_free(s);
            }
          }
          break;
        default:
          ERR_put_error(34, 164, 167, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_5;
      }
    }
    else
    {
      ERR_put_error(34, 164, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    v6 = nullptr;
    ERR_put_error(34, 164, 124, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: v2i_GENERAL_NAME_ex  (binary VA: 0x1a2fc70)
// Original: v2i_GENERAL_NAME_ex
// ----------------------------------------------------------------------------
uint32_t * v2i_GENERAL_NAME_ex(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  char *src;
  char *s1;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  src = *(char **)(a4 + 8);
  s1 = *(char **)(a4 + 4);
  if ( src != nullptr )
  {
    v7 = name_cmp(s1, "email");
    v8 = 1;
    if ( v7 == 0 )
      return a2i_GENERAL_NAME(a1, a2, a3, v8, src, a5);
    v10 = name_cmp(s1, "URI");
    v8 = 6;
    if ( v10 == 0 )
      return a2i_GENERAL_NAME(a1, a2, a3, v8, src, a5);
    v11 = name_cmp(s1, "DNS");
    v8 = 2;
    if ( v11 == 0 )
      return a2i_GENERAL_NAME(a1, a2, a3, v8, src, a5);
    v12 = name_cmp(s1, "RID");
    v8 = 8;
    if ( v12 == 0 )
      return a2i_GENERAL_NAME(a1, a2, a3, v8, src, a5);
    v13 = name_cmp(s1, "IP");
    v8 = 7;
    if ( v13 != 0
      && (v14 = name_cmp(s1, "dirName"), v8 = 4, v14 != 0)
      && (v15 = name_cmp(s1, "otherName"), v8 = 0, v15 != 0) )
    {
      ERR_put_error(34, 117, 117, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_add_error_data(2, "name=", s1);
      return nullptr;
    }
    else
    {
      return a2i_GENERAL_NAME(a1, a2, a3, v8, src, a5);
    }
  }
  else
  {
    ERR_put_error(34, 117, 124, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: v2i_GENERAL_NAME  (binary VA: 0x1a2fe30)
// Original: v2i_GENERAL_NAME
// ----------------------------------------------------------------------------
uint32_t * v2i_GENERAL_NAME(int a1, int a2, int a3)
{
  return v2i_GENERAL_NAME_ex(nullptr, a1, a2, a3, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1A2FE80  (binary VA: 0x1a2fe80)
// Original: sub_1A2FE80
// ----------------------------------------------------------------------------
int * sub_1A2FE80(int a1, uint32_t *a2, int *a3)
{
  int v3;
  const char *v4;
  int v5;
  int ext_by_NID;
  int ext;
  void **v8;
  int j;
  int v10;
  uint32_t *v11;
  int i;
  int *v14;

  v14 = (int *)(sk_new_null());
  if ( v14 != nullptr )
  {
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        if ( i >= sk_num((int)(uintptr_t)(a3)) )
          return v14;
        v3 = sk_value(a3, i);
        if ( name_cmp(*(char **)(v3 + 4), "issuer") == 0 )
        {
          v4 = *(const char **)(v3 + 8);
          if ( v4 != nullptr && strcmp(v4, "copy") == 0 )
            break;
        }
        v11 = v2i_GENERAL_NAME(a1, (int)(uintptr_t)(a2), v3);
        if ( v11 == nullptr )
          goto LABEL_22;
        sk_push(v14, (int)(uintptr_t)(v11));
        ++i;
      }
      if ( a2 == nullptr )
        goto LABEL_21;
      if ( *a2 != 1 )
      {
        v5 = a2[1];
        if ( v5 == 0 )
        {
LABEL_21:
          ERR_put_error(34, 123, 127, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_22:
          sk_pop_free((void **)v14, (void (*)(uint32_t))GENERAL_NAME_free);
          return nullptr;
        }
        ext_by_NID = X509_get_ext_by_NID(v5, 85, -1);
        if ( ext_by_NID >= 0 )
        {
          ext = X509_get_ext(a2[1], ext_by_NID);
          if ( ext != 0 && (v8 = (void **)X509V3_EXT_d2i(ext)) != nullptr )
          {
            for ( j = 0; ; ++j )
            {
              if ( j >= sk_num((int)(uintptr_t)(v8)) )
              {
                sk_free(v8);
                goto LABEL_18;
              }
              v10 = sk_value((int *)v8, j);
              if ( sk_push(v14, v10) == 0 )
                break;
            }
            ERR_put_error(34, 123, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          }
          else
          {
            ERR_put_error(34, 123, 126, (int)(uintptr_t)(&unk_1B15112), 0);
          }
          goto LABEL_22;
        }
      }
LABEL_18:
      ;
    }
  }
  ERR_put_error(34, 153, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: sub_1A30110  (binary VA: 0x1a30110)
// Original: sub_1A30110
// ----------------------------------------------------------------------------
int * sub_1A30110(int a1, uint32_t *a2, int *a3)
{
  const char *v3;
  uint32_t *v4;
  int v5;
  const char *v6;
  int v7;
  int i;
  int *v10;

  v10 = (int *)(sk_new_null());
  if ( v10 != nullptr )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= sk_num((int)(uintptr_t)(a3)) )
        return v10;
      v5 = sk_value(a3, i);
      if ( name_cmp(*(char **)(v5 + 4), "email") == 0 )
      {
        v6 = *(const char **)(v5 + 8);
        if ( v6 != nullptr && strcmp(v6, "copy") == 0 )
          break;
      }
      if ( name_cmp(*(char **)(v5 + 4), "email") == 0 )
      {
        v3 = *(const char **)(v5 + 8);
        if ( v3 != nullptr && strcmp(v3, "move") == 0 )
        {
          v7 = sub_1A2EF50(a2, v10, 1);
LABEL_14:
          if ( v7 == 0 )
          {
LABEL_15:
            sk_pop_free((void **)v10, (void (*)(uint32_t))GENERAL_NAME_free);
            return nullptr;
          }
          continue;
        }
      }
      v4 = v2i_GENERAL_NAME(a1, (int)(uintptr_t)(a2), v5);
      if ( v4 == nullptr )
        goto LABEL_15;
      sk_push(v10, (int)(uintptr_t)(v4));
    }
    v7 = sub_1A2EF50(a2, v10, 0);
    goto LABEL_14;
  }
  ERR_put_error(34, 154, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: v2i_GENERAL_NAMES  (binary VA: 0x1a302a0)
// Original: v2i_GENERAL_NAMES
// ----------------------------------------------------------------------------
void ** v2i_GENERAL_NAMES(int a1, int a2, int *a3)
{
  void **v3;
  int i;
  int v5;
  uint32_t *v6;

  v3 = (void **)sk_new_null();
  if ( v3 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v5 = sk_value(a3, i);
      v6 = v2i_GENERAL_NAME(a1, a2, v5);
      if ( v6 == nullptr )
      {
        sk_pop_free(v3, (void (*)(uint32_t))GENERAL_NAME_free);
        return nullptr;
      }
      sk_push((int *)v3, (int)(uintptr_t)(v6));
    }
  }
  else
  {
    ERR_put_error(34, 118, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A30370  (binary VA: 0x1a30370)
// Original: sub_1A30370
// ----------------------------------------------------------------------------
int sub_1A30370(int a1, int a2, int a3)
{
  X509V3_add_value_bool("CA", *(uint32_t *)a2, (int **)&a3);
  X509V3_add_value_int("pathlen", *(uint32_t **)(a2 + 4), (int **)&a3);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: BASIC_CONSTRAINTS_new  (binary VA: 0x1a30460)
// Original: BASIC_CONSTRAINTS_new
// ----------------------------------------------------------------------------
int BASIC_CONSTRAINTS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&BASIC_CONSTRAINTS_it));
}

// ----------------------------------------------------------------------------
// Function: BASIC_CONSTRAINTS_free  (binary VA: 0x1a30490)
// Original: BASIC_CONSTRAINTS_free
// ----------------------------------------------------------------------------
int BASIC_CONSTRAINTS_free(char a1)
{
  return ASN1_item_free(a1, BASIC_CONSTRAINTS_it);
}

// ----------------------------------------------------------------------------
// Function: sub_1A304C0  (binary VA: 0x1a304c0)
// Original: sub_1A304C0
// ----------------------------------------------------------------------------
int sub_1A304C0(int a1, int a2, int *a3)
{
  int i;
  int v4;
  uint32_t *v6;
  int v7;

  v7 = BASIC_CONSTRAINTS_new();
  if ( v7 != 0 )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v4 = sk_value(a3, i);
      if ( strcmp(*(const char **)(v4 + 4), "CA") == 0 )
      {
        if ( X509V3_get_value_bool(v4, (uint32_t *)v7) == 0 )
          goto LABEL_9;
      }
      else
      {
        if ( strcmp(*(const char **)(v4 + 4), "pathlen") != 0 )
        {
          v6 = (uint32_t *)v4;
          ERR_put_error(34, 102, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          ERR_add_error_data(6, "section:", *v6, ",name:", v6[1], ",value:", v6[2]);
LABEL_9:
          BASIC_CONSTRAINTS_free(v7);
          return 0;
        }
        if ( X509V3_get_value_int(v4, (int **)(v7 + 4)) == 0 )
          goto LABEL_9;
      }
    }
  }
  else
  {
    ERR_put_error(34, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A30650  (binary VA: 0x1a30650)
// Original: sub_1A30650
// ----------------------------------------------------------------------------
int sub_1A30650(int a1, int a2)
{
  return CONF_get_section(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A30680  (binary VA: 0x1a30680)
// Original: sub_1A30680
// ----------------------------------------------------------------------------
int sub_1A30680(int a1, int a2, int a3)
{
  return CONF_get_string(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1A306C0  (binary VA: 0x1a306c0)
// Original: sub_1A306C0
// ----------------------------------------------------------------------------
int sub_1A306C0(int a1, int a2)
{
  return NCONF_get_section(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A306F0  (binary VA: 0x1a306f0)
// Original: sub_1A306F0
// ----------------------------------------------------------------------------
int sub_1A306F0(int a1, int a2, int a3)
{
  return NCONF_get_string(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1A30730  (binary VA: 0x1a30730)
// Original: sub_1A30730
// ----------------------------------------------------------------------------
int sub_1A30730(const char **a1)
{
  const char *v1;
  size_t v2;
  int v3;
  const char *i;

  v1 = *a1;
  v2 = strlen(*a1);
  v3 = 0;
  if ( v2 > 8 && memcmp(v1, "critical,", 9u) == 0 )
  {
    for ( i = v1 + 9; isspace(*(uint8_t *)i) != 0; ++i )
      ;
    v3 = 1;
    *a1 = i;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A307C0  (binary VA: 0x1a307c0)
// Original: sub_1A307C0
// ----------------------------------------------------------------------------
int sub_1A307C0(const char **a1)
{
  const char *v1;
  size_t v2;
  const char *v3;
  int v6;

  v1 = *a1;
  v2 = strlen(*a1);
  v6 = 0;
  if ( v2 > 3 )
  {
    if ( memcmp(v1, "DER:", 4u) == 0 )
    {
      v3 = v1 + 4;
      v6 = 1;
    }
    else
    {
      if ( v2 == 4 || memcmp(v1, "ASN1:", 5u) != 0 )
        return v6;
      v3 = v1 + 5;
      v6 = 2;
    }
    while ( isspace(*(uint8_t *)v3) != 0 )
      ++v3;
    *a1 = v3;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1A30860  (binary VA: 0x1a30860)
// Original: sub_1A30860
// ----------------------------------------------------------------------------
void ** sub_1A30860(char *a1, char *a2, int a3, int a4, int a5)
{
  char **v6;
  const char *v7;
  void **v8;
  void **v9;
  uint8_t *v10;
  void **v11;
  int v13;
  typedef char *_g4_t_v14;
  typedef void **_g4_t_v15;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v15)) > _g4_s1 ? (40u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v17)) > _g4_s2 ? (56u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v18)) > _g4_s3 ? (60u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  v6 = OBJ_txt2obj(a1, 0);
  if ( v6 == nullptr )
  {
    ERR_put_error(34, 116, 115, (int)(uintptr_t)(&unk_1B15112), 0);
    v14 = a1;
    v7 = "name=";
    goto LABEL_5;
  }
  if ( a4 == 1 )
  {
    v10 = string_to_hex(a2, &v17);
  }
  else
  {
    if ( a4 != 2 )
      goto LABEL_4;
    v18 = nullptr;
    v13 = (int)(uintptr_t)(ASN1_generate_v3(a2, a5));
    if ( v13 == 0 )
      goto LABEL_4;
    v17 = i2d_ASN1_TYPE(v13, (void **)&v18);
    ASN1_TYPE_free(v13);
    v10 = v18;
  }
  if ( v10 == nullptr )
  {
LABEL_4:
    ERR_put_error(34, 116, 116, (int)(uintptr_t)(&unk_1B15112), 0);
    v14 = a2;
    v7 = "value=";
LABEL_5:
    v8 = nullptr;
    ERR_add_error_data(2, v7, v14);
    v9 = nullptr;
    goto LABEL_10;
  }
  v11 = (void **)ASN1_STRING_type_new(4);
  v8 = v11;
  if ( v11 == nullptr )
  {
    ERR_put_error(34, 116, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    ASN1_OBJECT_free(v6);
    ASN1_STRING_free(nullptr);
    CRYPTO_free(v10);
    return nullptr;
  }
  v11[2] = v10;
  *v11 = (void *)v17;
  v9 = X509_EXTENSION_create_by_OBJ(nullptr, (int)(uintptr_t)(v6), a3, (int)(uintptr_t)(v11));
LABEL_10:
  v15 = v9;
  ASN1_OBJECT_free(v6);
  ASN1_STRING_free(v8);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: sub_1A30A70  (binary VA: 0x1a30a70)
// Original: sub_1A30A70
// ----------------------------------------------------------------------------
void ** sub_1A30A70(int a1, int (**a2)(int, uint8_t **), unsigned int a3, int a4, int a5)
{
  int v5;
  void **v6;
  void *v7;
  void **v8;
  uint8_t *v10;
  typedef void *_g4_t_v12;
  typedef uint8_t *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  if ( a1 == 0 )
  {
    v5 = (*a2)(a5, nullptr);
    v10 = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
    v12 = v10;
    if ( v10 != nullptr )
    {
      v13 = v10;
      (*a2)(a5, &v13);
      goto LABEL_3;
    }
LABEL_9:
    v8 = nullptr;
    ERR_put_error(34, 135, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v8;
  }
  v12 = nullptr;
  v5 = ASN1_item_i2d(a5, &v12, a1);
  if ( v5 < 0 )
    goto LABEL_9;
LABEL_3:
  v6 = (void **)ASN1_STRING_type_new(4);
  if ( v6 == nullptr )
    goto LABEL_9;
  v7 = v12;
  *v6 = (void *)v5;
  v6[2] = v7;
  v8 = X509_EXTENSION_create_by_NID(nullptr, a3, a4, (int)(uintptr_t)(v6));
  if ( v8 == nullptr )
    goto LABEL_9;
  ASN1_STRING_free(v6);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_1A30BB0  (binary VA: 0x1a30bb0)
// Original: sub_1A30BB0
// ----------------------------------------------------------------------------
void ** sub_1A30BB0(int a1, int a2, unsigned int a3, int a4, char *a5)
{
  void **v5;
  int nid;
  int v8;
  int v9;
  int (*v11)(int, int, char *);
  char *v12;
  char *v13;
  void **section;

  v5 = (void **)a3;
  if ( a3 != 0 )
  {
    nid = X509V3_EXT_get_nid(a3);
    v8 = nid;
    if ( nid == 0 )
    {
      v5 = nullptr;
      ERR_put_error(34, 151, 129, (int)(uintptr_t)(&unk_1B15112), 0);
      return v5;
    }
    if ( *(uint32_t *)(nid + 40) != 0 )
    {
      if ( *a5 == 64 )
        section = (void **)NCONF_get_section(a1, (int)(uintptr_t)(a5 + 1));
      else
        section = (void **)X509V3_parse_list(a5);
      if ( sk_num((int)(uintptr_t)(section)) <= 0 )
      {
        ERR_put_error(34, 151, 105, (int)(uintptr_t)(&unk_1B15112), 0);
        v5 = nullptr;
        v12 = OBJ_nid2sn(a3);
        ERR_add_error_data(4, "name=", v12, ",section=", a5);
        return v5;
      }
      v9 = (*(int (**)(int, int, void **))(v8 + 40))(v8, a2, section);
      if ( *a5 != 64 )
        sk_pop_free(section, (void (*)(uint32_t))X509V3_conf_free);
    }
    else
    {
      v11 = *(int (**)(int, int, char *))(nid + 32);
      if ( v11 == nullptr )
      {
        v11 = *(int (**)(int, int, char *))(v8 + 48);
        if ( v11 == nullptr )
        {
          ERR_put_error(34, 151, 103, (int)(uintptr_t)(&unk_1B15112), 0);
          v5 = nullptr;
          v13 = OBJ_nid2sn(a3);
          ERR_add_error_data(2, "name=", v13);
          return v5;
        }
        if ( *(uint32_t *)(a2 + 24) == 0 || *(uint32_t *)(a2 + 20) == 0 )
        {
          v5 = nullptr;
          ERR_put_error(34, 151, 136, (int)(uintptr_t)(&unk_1B15112), 0);
          return v5;
        }
      }
      v9 = v11(v8, a2, a5);
    }
    if ( v9 != 0 )
    {
      v5 = sub_1A30A70(*(uint32_t *)(v8 + 8), (int (**)(int, uint8_t **))(v8 + 24), a3, a4, v9);
      if ( *(uint32_t *)(v8 + 8) != 0 )
        ASN1_item_free(v9, *(uint8_t **)(v8 + 8));
      else
        (*(void (**)(int))(v8 + 16))(v9);
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(34, 151, 130, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_nconf  (binary VA: 0x1a30e90)
// Original: X509V3_EXT_nconf
// ----------------------------------------------------------------------------
void ** X509V3_EXT_nconf(int a1, int a2, char *a3, char *a4)
{
  int v4;
  int v5;
  unsigned int v6;
  void **result;
  char *v8;

  v4 = sub_1A30730((const char **)&a4);
  v5 = sub_1A307C0((const char **)&a4);
  if ( v5 != 0 )
    return sub_1A30860(a3, a4, v4, v5, a2);
  v8 = a4;
  v6 = OBJ_sn2nid((int)(uintptr_t)(a3));
  result = sub_1A30BB0(a1, a2, v6, v4, v8);
  if ( result == nullptr )
  {
    ERR_put_error(34, 152, 128, (int)(uintptr_t)(&unk_1B15112), 0);
    ERR_add_error_data(4, "name=", a3, ", value=", a4);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_nconf_nid  (binary VA: 0x1a30fa0)
// Original: X509V3_EXT_nconf_nid
// ----------------------------------------------------------------------------
void ** X509V3_EXT_nconf_nid(int a1, int a2, unsigned int a3, char *a4)
{
  int v4;
  char *v6;
  char *v7;
  int v8;

  v8 = sub_1A30730((const char **)&a4);
  v4 = sub_1A307C0((const char **)&a4);
  if ( v4 == 0 )
    return sub_1A30BB0(a1, a2, a3, v8, a4);
  v7 = a4;
  v6 = OBJ_nid2sn(a3);
  return sub_1A30860(v6, v7, v8, v4, a2);
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_i2d  (binary VA: 0x1a31050)
// Original: X509V3_EXT_i2d
// ----------------------------------------------------------------------------
void ** X509V3_EXT_i2d(unsigned int a1, int a2, int a3)
{
  int nid;

  nid = X509V3_EXT_get_nid(a1);
  if ( nid != 0 )
    return sub_1A30A70(*(uint32_t *)(nid + 8), (int (**)(int, uint8_t **))(nid + 24), a1, a2, a3);
  ERR_put_error(34, 136, 129, (int)(uintptr_t)(&unk_1B15112), 0);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_add_nconf_sk  (binary VA: 0x1a31100)
// Original: X509V3_EXT_add_nconf_sk
// ----------------------------------------------------------------------------
int X509V3_EXT_add_nconf_sk(int a1, int a2, int a3, void ***a4)
{
  int v4;
  int *section;
  int result;
  int v7;
  void **v8;

  v4 = 0;
  section = (int *)NCONF_get_section(a1, a3);
  result = 0;
  if ( section != nullptr )
  {
    while ( 1 )
    {
      if ( v4 >= sk_num((int)(uintptr_t)(section)) )
        return 1;
      v7 = sk_value(section, v4);
      v8 = X509V3_EXT_nconf(a1, a2, *(char **)(v7 + 4), *(char **)(v7 + 8));
      if ( v8 == nullptr )
        break;
      if ( a4 != nullptr )
        X509v3_add_ext(a4, (int)(uintptr_t)(v8), -1);
      ++v4;
      X509_EXTENSION_free((char)(uintptr_t)(v8));
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_add_nconf  (binary VA: 0x1a311d0)
// Original: X509V3_EXT_add_nconf
// ----------------------------------------------------------------------------
int X509V3_EXT_add_nconf(int a1, int a2, int a3, uint32_t *a4)
{
  void ***v4;

  v4 = nullptr;
  if ( a4 != nullptr )
    v4 = (void ***)(*a4 + 36);
  return X509V3_EXT_add_nconf_sk(a1, a2, a3, v4);
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_CRL_add_nconf  (binary VA: 0x1a31220)
// Original: X509V3_EXT_CRL_add_nconf
// ----------------------------------------------------------------------------
int X509V3_EXT_CRL_add_nconf(int a1, int a2, int a3, uint32_t *a4)
{
  void ***v4;

  v4 = nullptr;
  if ( a4 != nullptr )
    v4 = (void ***)(*a4 + 24);
  return X509V3_EXT_add_nconf_sk(a1, a2, a3, v4);
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_REQ_add_nconf  (binary VA: 0x1a31270)
// Original: X509V3_EXT_REQ_add_nconf
// ----------------------------------------------------------------------------
int X509V3_EXT_REQ_add_nconf(int a1, int a2, int a3, int *a4)
{
  void **v4;
  int result;
  typedef int _g4_t_v6;
  typedef void *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v4 = &v7;
  v7 = nullptr;
  if ( a4 == nullptr )
    v4 = nullptr;
  result = X509V3_EXT_add_nconf_sk(a1, a2, a3, (void ***)v4);
  if ( result != 0 && a4 != nullptr )
  {
    v6 = X509_REQ_add_extensions(a4, (int)(uintptr_t)(v7));
    sk_pop_free((void **)v7, (void (*)(uint32_t))X509_EXTENSION_free);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_get_string  (binary VA: 0x1a31320)
// Original: X509V3_get_string
// ----------------------------------------------------------------------------
int X509V3_get_string(int a1, int a2, int a3)
{
  int (**v3)(uint32_t, int, int);
  int (*v4)(uint32_t, int, int);

  if ( *(uint32_t *)(a1 + 24) != 0 )
  {
    v3 = *(int (***)(uint32_t, int, int))(a1 + 20);
    if ( v3 != nullptr )
    {
      v4 = *v3;
      if ( v4 != nullptr )
        return v4(*(uint32_t *)(a1 + 24), a2, a3);
    }
  }
  ERR_put_error(34, 143, 148, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509V3_get_section  (binary VA: 0x1a313a0)
// Original: X509V3_get_section
// ----------------------------------------------------------------------------
int X509V3_get_section(int a1, int a2)
{
  int v2;
  int (*v3)(uint32_t, int);

  if ( *(uint32_t *)(a1 + 24) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    if ( v2 != 0 )
    {
      v3 = *(int (**)(uint32_t, int))(v2 + 4);
      if ( v3 != nullptr )
        return v3(*(uint32_t *)(a1 + 24), a2);
    }
  }
  ERR_put_error(34, 142, 148, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509V3_string_free  (binary VA: 0x1a31420)
// Original: X509V3_string_free
// ----------------------------------------------------------------------------
int X509V3_string_free(int a1, int a2)
{
  int result;
  int (*v3)(uint32_t, int);

  result = a2;
  if ( a2 != 0 )
  {
    v3 = *(int (**)(uint32_t, int))(*(uint32_t *)(a1 + 20) + 8);
    if ( v3 != nullptr )
      return v3(*(uint32_t *)(a1 + 24), a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_section_free  (binary VA: 0x1a31450)
// Original: X509V3_section_free
// ----------------------------------------------------------------------------
int X509V3_section_free(int a1, int a2)
{
  int result;
  int (*v3)(uint32_t, int);

  result = a2;
  if ( a2 != 0 )
  {
    v3 = *(int (**)(uint32_t, int))(*(uint32_t *)(a1 + 20) + 12);
    if ( v3 != nullptr )
      return v3(*(uint32_t *)(a1 + 24), a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_set_nconf  (binary VA: 0x1a31480)
// Original: X509V3_set_nconf
// ----------------------------------------------------------------------------
int X509V3_set_nconf(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(&off_20CF9C0);
  *(uint32_t *)(a1 + 24) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_set_ctx  (binary VA: 0x1a314a0)
// Original: X509V3_set_ctx
// ----------------------------------------------------------------------------
uint32_t * X509V3_set_ctx(uint32_t *a1, int a2, int a3, int a4, int a5, int a6)
{
  a1[1] = a2;
  a1[2] = a3;
  a1[4] = a5;
  a1[3] = a4;
  *a1 = a6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_conf  (binary VA: 0x1a314d0)
// Original: X509V3_EXT_conf
// ----------------------------------------------------------------------------
void ** X509V3_EXT_conf(int a1, int a2, char *a3, char *a4)
{
  uint8_t v5[16];

  CONF_set_nconf((int)(uintptr_t)(v5), a1);
  return X509V3_EXT_nconf((int)(uintptr_t)(v5), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_conf_nid  (binary VA: 0x1a31530)
// Original: X509V3_EXT_conf_nid
// ----------------------------------------------------------------------------
void ** X509V3_EXT_conf_nid(int a1, int a2, unsigned int a3, char *a4)
{
  int v5[4];

  CONF_set_nconf((int)(uintptr_t)(v5), a1);
  return X509V3_EXT_nconf_nid((int)(uintptr_t)(v5), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509V3_set_conf_lhash  (binary VA: 0x1a31590)
// Original: X509V3_set_conf_lhash
// ----------------------------------------------------------------------------
int X509V3_set_conf_lhash(int a1, int a2)
{
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(&off_20CF9D0);
  *(uint32_t *)(a1 + 24) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_add_conf  (binary VA: 0x1a315b0)
// Original: X509V3_EXT_add_conf
// ----------------------------------------------------------------------------
int X509V3_EXT_add_conf(int a1, int a2, int a3, uint32_t *a4)
{
  uint8_t v5[16];

  CONF_set_nconf((int)(uintptr_t)(v5), a1);
  return X509V3_EXT_add_nconf((int)(uintptr_t)(v5), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_CRL_add_conf  (binary VA: 0x1a31610)
// Original: X509V3_EXT_CRL_add_conf
// ----------------------------------------------------------------------------
int X509V3_EXT_CRL_add_conf(int a1, int a2, int a3, uint32_t *a4)
{
  uint8_t v5[16];

  CONF_set_nconf((int)(uintptr_t)(v5), a1);
  return X509V3_EXT_CRL_add_nconf((int)(uintptr_t)(v5), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_REQ_add_conf  (binary VA: 0x1a31670)
// Original: X509V3_EXT_REQ_add_conf
// ----------------------------------------------------------------------------
int X509V3_EXT_REQ_add_conf(int a1, int a2, int a3, int *a4)
{
  uint8_t v5[16];

  CONF_set_nconf((int)(uintptr_t)(v5), a1);
  return X509V3_EXT_REQ_add_nconf((int)(uintptr_t)(v5), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_1A316D0  (binary VA: 0x1a316d0)
// Original: sub_1A316D0
// ----------------------------------------------------------------------------
int sub_1A316D0(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A316F0  (binary VA: 0x1a316f0)
// Original: sub_1A316F0
// ----------------------------------------------------------------------------
int sub_1A316F0(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A31710  (binary VA: 0x1a31710)
// Original: sub_1A31710
// ----------------------------------------------------------------------------
void * sub_1A31710(void *a1)
{
  void *result;

  result = a1;
  if ( (*((uint8_t *)a1 + 4) & 1) != 0 )
    return (void *)CRYPTO_free(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_add  (binary VA: 0x1a31740)
// Original: X509V3_EXT_add
// ----------------------------------------------------------------------------
int X509V3_EXT_add(int a1)
{
  int *v1;

  v1 = (int *)dword_214258C;
  if ( dword_214258C != 0 || (v1 = (int *)(sk_new((int)(uintptr_t)(sub_1A316D0))), dword_214258C = (int)(uintptr_t)(v1), v1 != nullptr) )
  {
    if ( sk_push(v1, a1) != 0 )
      return 1;
  }
  ERR_put_error(34, 104, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_get_nid  (binary VA: 0x1a317d0)
// Original: X509V3_EXT_get_nid
// ----------------------------------------------------------------------------
int X509V3_EXT_get_nid(int a1)
{
  int v1;
  int v2;
  int v4;
  typedef uint32_t *_g4_t_v5;
  typedef uint32_t _g4_t_v6[14];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  v1 = 0;
  v5 = v6;
  if ( a1 >= 0 )
  {
    v6[0] = a1;
    v2 = OBJ_bsearch((int)(uintptr_t)(&v5), (int)(uintptr_t)(&off_20CF9E0), 40, 4, (int (*)(int, int))sub_1A316F0);
    if ( v2 != 0 )
    {
      return *(uint32_t *)v2;
    }
    else if ( dword_214258C != 0 )
    {
      v4 = sk_find(dword_214258C, (int)(uintptr_t)(v6));
      if ( v4 != -1 )
        return sk_value((int *)dword_214258C, v4);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_get  (binary VA: 0x1a31890)
// Original: X509V3_EXT_get
// ----------------------------------------------------------------------------
int X509V3_EXT_get(int *a1)
{
  int v1;
  int result;

  v1 = OBJ_obj2nid(*a1);
  result = 0;
  if ( v1 != 0 )
    return X509V3_EXT_get_nid(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_add_list  (binary VA: 0x1a318d0)
// Original: X509V3_EXT_add_list
// ----------------------------------------------------------------------------
int X509V3_EXT_add_list(uint32_t *a1)
{
  int result;
  uint32_t *v2;

  result = 1;
  v2 = a1;
  if ( *a1 != -1 )
  {
    do
    {
      if ( X509V3_EXT_add((int)(uintptr_t)(v2)) == 0 )
        return 0;
      v2 += 14;
    }
    while ( *v2 != -1 );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_add_alias  (binary VA: 0x1a31930)
// Original: X509V3_EXT_add_alias
// ----------------------------------------------------------------------------
int X509V3_EXT_add_alias(int a1, int a2)
{
  uint32_t *nid;
  uint32_t *v3;

  nid = (uint32_t *)X509V3_EXT_get_nid(a2);
  if ( nid != nullptr )
  {
    v3 = (uint32_t *)(CRYPTO_malloc(56, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v3 != nullptr )
    {
      *v3 = *nid;
      v3[1] = nid[1];
      v3[2] = nid[2];
      v3[3] = nid[3];
      v3[4] = nid[4];
      v3[5] = nid[5];
      v3[6] = nid[6];
      v3[7] = nid[7];
      v3[8] = nid[8];
      v3[9] = nid[9];
      v3[10] = nid[10];
      v3[11] = nid[11];
      v3[12] = nid[12];
      v3[13] = nid[13];
      *v3 = a1;
      v3[1] |= 1u;
      return X509V3_EXT_add((int)(uintptr_t)(v3));
    }
    else
    {
      ERR_put_error(34, 106, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(34, 106, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_cleanup  (binary VA: 0x1a31a60)
// Original: X509V3_EXT_cleanup
// ----------------------------------------------------------------------------
int X509V3_EXT_cleanup()
{
  int result;

  result = sk_pop_free((void **)dword_214258C, (void (*)(uint32_t))sub_1A31710);
  dword_214258C = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_add_standard_extensions  (binary VA: 0x1a31aa0)
// Original: X509V3_add_standard_extensions
// ----------------------------------------------------------------------------
int X509V3_add_standard_extensions()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_d2i  (binary VA: 0x1a31ab0)
// Original: X509V3_EXT_d2i
// ----------------------------------------------------------------------------
int X509V3_EXT_d2i(int *a1)
{
  int v1;
  char **v2;
  char *v4[4];

  v1 = X509V3_EXT_get(a1);
  if ( v1 == 0 )
    return 0;
  v2 = (char **)a1[2];
  v4[0] = v2[2];
  if ( *(uint32_t *)(v1 + 8) != 0 )
    return ASN1_item_d2i(nullptr, v4, (int)(uintptr_t)(*v2), *(uint32_t *)(v1 + 8));
  else
    return (*(int (**)(uint32_t, char **, char *))(v1 + 20))(0, v4, *v2);
}

// ----------------------------------------------------------------------------
// Function: X509V3_get_d2i  (binary VA: 0x1a31b30)
// Original: X509V3_get_d2i
// ----------------------------------------------------------------------------
int X509V3_get_d2i(int *a1, int a2, bool *a3, int *a4)
{
  int v4;
  int v5;
  int *v6;
  int result;
  int *v8;

  if ( a1 == nullptr )
  {
LABEL_18:
    if ( a4 != nullptr )
      *a4 = -1;
    result = 0;
    if ( a3 != nullptr )
      *a3 = -1;
    return result;
  }
  if ( a4 != nullptr )
  {
    v4 = 0;
    v5 = *a4 + 1;
    if ( v5 < 0 )
      goto LABEL_5;
  }
  else
  {
    v5 = 0;
  }
  v4 = v5;
LABEL_5:
  v8 = nullptr;
  while ( v4 < sk_num((int)(uintptr_t)(a1)) )
  {
    v6 = (int *)sk_value(a1, v4);
    if ( OBJ_obj2nid(*v6) == a2 )
    {
      if ( a4 != nullptr )
      {
        v8 = v6;
        *a4 = v4;
        break;
      }
      if ( v8 != nullptr )
      {
        result = 0;
        if ( a3 != nullptr )
          *a3 = -2;
        return result;
      }
      v8 = v6;
    }
    ++v4;
  }
  if ( v8 == nullptr )
    goto LABEL_18;
  if ( a3 != nullptr )
    *a3 = X509_EXTENSION_get_critical((int)(uintptr_t)(v8));
  return X509V3_EXT_d2i(v8);
}

// ----------------------------------------------------------------------------
// Function: X509V3_add1_i2d  (binary VA: 0x1a31c60)
// Original: X509V3_add1_i2d
// ----------------------------------------------------------------------------
int X509V3_add1_i2d(int **a1, unsigned int a2, int a3, int a4, char a5)
{
  int v5;
  int ext_by_NID;
  int result;
  int16_t v8;
  void **v9;
  char v10;
  int *v11;

  v5 = a5 & 0xF;
  if ( v5 == 1 )
  {
    ext_by_NID = -1;
    goto LABEL_6;
  }
  ext_by_NID = X509v3_get_ext_by_NID(*a1, a2, -1);
  if ( ext_by_NID < 0 )
  {
    if ( v5 == 5 || v5 == 3 )
    {
      v8 = 102;
      goto LABEL_12;
    }
LABEL_6:
    v9 = X509V3_EXT_i2d(a2, a4, a3);
    if ( v9 != nullptr )
    {
      if ( ext_by_NID < 0 )
      {
        v11 = *a1;
        if ( *a1 != nullptr )
          return sk_push(v11, (int)(uintptr_t)(v9)) == 0 ? -1 : 1;
        v11 = (int *)(sk_new_null());
        *a1 = v11;
        if ( v11 != nullptr )
          return sk_push(v11, (int)(uintptr_t)(v9)) == 0 ? -1 : 1;
        else
          return -1;
      }
      else
      {
        v10 = sk_value(*a1, ext_by_NID);
        X509_EXTENSION_free(v10);
        return sk_set(*a1, ext_by_NID, (int)(uintptr_t)(v9)) == 0 ? -1 : 1;
      }
    }
    else
    {
      ERR_put_error(34, 140, 144, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  result = 1;
  if ( v5 == 4 )
    return result;
  v8 = 145;
  if ( (a5 & 0xF) != 0 )
  {
    if ( v5 == 5 )
      return sk_delete(*a1, ext_by_NID) == 0 ? -1 : 1;
    goto LABEL_6;
  }
LABEL_12:
  result = 0;
  if ( (a5 & 0x10) == 0 )
  {
    ERR_put_error(34, 140, v8, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A31E60  (binary VA: 0x1a31e60)
// Original: sub_1A31E60
// ----------------------------------------------------------------------------
int sub_1A31E60()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A31E70  (binary VA: 0x1a31e70)
// Original: sub_1A31E70
// ----------------------------------------------------------------------------
int sub_1A31E70()
{
  return ASN1_NULL_new();
}

// ----------------------------------------------------------------------------
// Function: sub_1A31E90  (binary VA: 0x1a31e90)
// Original: sub_1A31E90
// ----------------------------------------------------------------------------
int sub_1A31E90(int a1, void **a2)
{
  if ( a2 != nullptr )
  {
    memcpy(*a2, *(const void **)(a1 + 8), *(uint32_t *)a1);
    *a2 = (char *)*a2 + *(uint32_t *)a1;
  }
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A31EF0  (binary VA: 0x1a31ef0)
// Original: sub_1A31EF0
// ----------------------------------------------------------------------------
int sub_1A31EF0()
{
  return ASN1_OCTET_STRING_new();
}

// ----------------------------------------------------------------------------
// Function: sub_1A31F10  (binary VA: 0x1a31f10)
// Original: sub_1A31F10
// ----------------------------------------------------------------------------
int sub_1A31F10(void **a1)
{
  return ASN1_STRING_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A31F40  (binary VA: 0x1a31f40)
// Original: sub_1A31F40
// ----------------------------------------------------------------------------
bool sub_1A31F40(int a1, int a2, int a3, uint32_t *a4, int a5)
{
  int *v5;
  int v6;
  int v7;
  int v9;

  v5 = *(int **)a3;
  if ( *(uint32_t *)a3 == 0
    || (v6 = 0, BIO_printf(a1, (int)(uintptr_t)(v5), (int)(uintptr_t)(a4), "%*scrlUrl: ", a5, &unk_1B15112) > 0)
    && (LOBYTE(v7) = ASN1_STRING_print(a4, *(int **)a3), v7 != 0)
    && BIO_write(a4, (int)(uintptr_t)(&a0[1]), 1) > 0 )
  {
    v9 = *(uint32_t *)(a3 + 4);
    if ( v9 == 0
      || (v6 = 0, BIO_printf(v9, (int)(uintptr_t)(v5), (int)(uintptr_t)(a4), "%*scrlNum: ", a5, &unk_1B15112) > 0)
      && (int)i2a_ASN1_INTEGER(a4, *(uint32_t *)(a3 + 4)) > 0
      && BIO_write(a4, (int)(uintptr_t)(&a0[1]), 1) > 0 )
    {
      v6 = 1;
      if ( *(uint32_t *)(a3 + 8) != 0 )
      {
        LOWORD(v6) = 0;
        if ( BIO_printf(v9, (int)(uintptr_t)(v5), (int)(uintptr_t)(a4), "%*scrlTime: ", a5, &unk_1B15112) > 0
          && ASN1_GENERALIZEDTIME_print(a4, *(int **)(a3 + 8)) )
        {
          return BIO_write(a4, (int)(uintptr_t)(&a0[1]), 1) > 0;
        }
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_1A320D0  (binary VA: 0x1a320d0)
// Original: sub_1A320D0
// ----------------------------------------------------------------------------
bool sub_1A320D0(int a1, int a2, int a3, int a4, uint32_t *a5, int a6)
{
  int v6;
  int v7;

  v6 = BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*s", a6, (const char *)&unk_1B15112);
  v7 = 0;
  if ( v6 > 0 )
    return i2a_ASN1_OBJECT(a5, a4) > 0;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A32140  (binary VA: 0x1a32140)
// Original: sub_1A32140
// ----------------------------------------------------------------------------
int sub_1A32140(int a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v5 = 0;
  if ( BIO_printf((int)(uintptr_t)(&unk_1B15112), v4, (int)(uintptr_t)(a3), "%*sIssuer: ", a4, (const char *)&unk_1B15112) <= 0
    || X509_NAME_print_ex((int)(uintptr_t)(a3), *a2, 0, (unsigned int)(uintptr_t)(((uint8_t *)(uintptr_t)0x82031Fu))) <= 0 )
  {
    return v5;
  }
  while ( 1 )
  {
    if ( v5 >= sk_num(a2[1]) )
      return 1;
    v6 = sk_value((int *)a2[1], v5);
    if ( BIO_printf((int)(uintptr_t)("\n%*s"), v7, (int)(uintptr_t)(a3), "\n%*s", 2 * a4, &unk_1B15112) <= 0
      || i2a_ASN1_OBJECT(a3, *(uint32_t *)v6) <= 0
      || BIO_puts(a3, (int)(uintptr_t)(" - ")) <= 0
      || GENERAL_NAME_print(v9, v8, a3, *(uint32_t **)(v6 + 4)) <= 0 )
    {
      break;
    }
    ++v5;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A32280  (binary VA: 0x1a32280)
// Original: sub_1A32280
// ----------------------------------------------------------------------------
bool sub_1A32280(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;

  v6 = BIO_printf(a2, a1, a5, "%*s", a6, (const char *)&unk_1B15112);
  v7 = 0;
  if ( v6 > 0 )
    return i2a_ASN1_STRING(a5, a4) > 0;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A322F0  (binary VA: 0x1a322f0)
// Original: sub_1A322F0
// ----------------------------------------------------------------------------
void ** sub_1A322F0(void ***a1, char **a2, size_t a3)
{
  void **v3;

  if ( a1 == nullptr || (v3 = *a1, *a1 == nullptr) )
    v3 = (void **)ASN1_OCTET_STRING_new();
  if ( ASN1_OCTET_STRING_set((int)(uintptr_t)(v3), *a2, a3) != 0 )
  {
    *a2 += a3;
    if ( a1 != nullptr )
      *a1 = v3;
  }
  else
  {
    if ( v3 != nullptr && (a1 == nullptr || *a1 != v3) )
      ASN1_STRING_free(v3);
    v3 = nullptr;
    ERR_put_error(39, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A323C0  (binary VA: 0x1a323c0)
// Original: sub_1A323C0
// ----------------------------------------------------------------------------
bool sub_1A323C0(int a1, int a2, int a3, int *a4, uint32_t *a5, int a6)
{
  int v6;
  int v7;

  v6 = BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*s", a6, (const char *)&unk_1B15112);
  v7 = 0;
  if ( v6 > 0 )
    return ASN1_GENERALIZEDTIME_print(a5, a4);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A32430  (binary VA: 0x1a32430)
// Original: sub_1A32430
// ----------------------------------------------------------------------------
int sub_1A32430(int a1, int a2, int a3, int a4, uint32_t *a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*sPath Length Constraint: ", a6, (const char *)&unk_1B15112);
  if ( *(uint32_t *)a4 != 0 )
    i2a_ASN1_INTEGER(a5, *(uint32_t *)a4);
  else
    BIO_printf(v6, v7, (int)(uintptr_t)(a5), "infinite");
  BIO_puts(a5, (int)(uintptr_t)(&a0[1]));
  BIO_printf(v8, v9, (int)(uintptr_t)(a5), "%*sPolicy Language: ", a6, &unk_1B15112);
  i2a_ASN1_OBJECT(a5, **(uint32_t **)(a4 + 4));
  BIO_puts(a5, (int)(uintptr_t)(&a0[1]));
  v12 = *(uint32_t *)(*(uint32_t *)(a4 + 4) + 4);
  if ( v12 != 0 )
  {
    v13 = *(uint32_t *)(v12 + 8);
    if ( v13 != 0 )
      BIO_printf(v10, v11, (int)(uintptr_t)(a5), "%*sPolicy Text: %s\n", a6, &unk_1B15112, v13);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A32550  (binary VA: 0x1a32550)
// Original: sub_1A32550
// ----------------------------------------------------------------------------
int sub_1A32550(uint32_t *a1, int a2)
{
  char *v2;
  int result;
  uint8_t *v4;
  uint8_t *src;
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  size_t v9;
  uint8_t *v10;
  int v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v15;
  typedef size_t _g4_t_n;
  typedef uint8_t _g4_t_v17[2076];
  enum : size_t {
    _g4_s0 = 2192u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_n)) > _g4_s2 ? (44u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v17)) > _g4_s3 ? (48u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v15 = 0;
  if ( *(uint32_t *)a2 == 0 )
  {
    v11 = ASN1_OCTET_STRING_new();
    v15 = 1;
    *(uint32_t *)a2 = v11;
    if ( v11 == 0 )
    {
      ERR_put_error(34, 150, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_add_error_data(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      return 0;
    }
  }
  v2 = (char *)a1[2];
  if ( memcmp(v2, "hex:", 4u) == 0 )
  {
    src = string_to_hex(v2 + 4, &n);
    if ( src != nullptr )
    {
      v6 = CRYPTO_realloc(*(void **)(*(uint32_t *)a2 + 8), n + **(uint32_t **)a2 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v6 != nullptr )
      {
        *(uint32_t *)(*(uint32_t *)a2 + 8) = (uint32_t)(uintptr_t)(v6);
        memcpy((void *)(**(uint32_t **)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8)), src, n);
        **(uint32_t **)a2 += n;
        *(uint8_t *)(*(uint32_t *)(*(uint32_t *)a2 + 8) + **(uint32_t **)a2) = 0;
        CRYPTO_free(src);
        return 1;
      }
      CRYPTO_free(src);
      *(uint32_t *)(*(uint32_t *)a2 + 8) = 0;
      **(uint32_t **)a2 = 0;
      ERR_put_error(34, 150, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(34, 150, 113, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else if ( memcmp((const void *)a1[2], "file:", 5u) == 0 )
  {
    v7 = nullptr;
    v12 = BIO_new_file(v2 + 5, "r");
    if ( v12 != nullptr )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = BIO_read(v12, (int)(uintptr_t)(v17), 2048);
          v9 = v8;
          if ( v8 <= 0 )
            break;
          v10 = CRYPTO_realloc(*(void **)(*(uint32_t *)a2 + 8), v8 + **(uint32_t **)a2 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
          v7 = v10;
          if ( v10 == nullptr )
          {
            BIO_free_all(v12);
LABEL_23:
            ERR_put_error(34, 150, 65, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_6;
          }
          *(uint32_t *)(*(uint32_t *)a2 + 8) = (uint32_t)(uintptr_t)(v10);
          memcpy((void *)(**(uint32_t **)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8)), v17, v9);
          **(uint32_t **)a2 += v9;
          *(uint8_t *)(*(uint32_t *)(*(uint32_t *)a2 + 8) + **(uint32_t **)a2) = 0;
        }
        if ( v8 != 0 )
          break;
        if ( BIO_test_flags((int)(uintptr_t)(v12), 8) == 0 )
        {
          BIO_free_all(v12);
          if ( v7 != nullptr )
            return 1;
          goto LABEL_23;
        }
      }
      BIO_free_all(v12);
      ERR_put_error(34, 150, 32, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(34, 150, 32, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else if ( memcmp((const void *)a1[2], "text:", 5u) == 0 )
  {
    n = strlen(v2 + 5);
    v4 = CRYPTO_realloc(*(void **)(*(uint32_t *)a2 + 8), **(uint32_t **)a2 + n + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v4 != nullptr )
    {
      *(uint32_t *)(*(uint32_t *)a2 + 8) = (uint32_t)(uintptr_t)(v4);
      memcpy((void *)(**(uint32_t **)a2 + *(uint32_t *)(*(uint32_t *)a2 + 8)), (const void *)(a1[2] + 5), n);
      **(uint32_t **)a2 += n;
      *(uint8_t *)(*(uint32_t *)(*(uint32_t *)a2 + 8) + **(uint32_t **)a2) = 0;
      return 1;
    }
    *(uint32_t *)(*(uint32_t *)a2 + 8) = 0;
    **(uint32_t **)a2 = 0;
    ERR_put_error(34, 150, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    ERR_put_error(34, 150, 152, (int)(uintptr_t)(&unk_1B15112), 0);
  }
LABEL_6:
  ERR_add_error_data(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
  result = 0;
  if ( v15 != 0 )
  {
    ASN1_OCTET_STRING_free(*(uint32_t *)a2);
    *(uint32_t *)a2 = 0;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A32AA0  (binary VA: 0x1a32aa0)
// Original: sub_1A32AA0
// ----------------------------------------------------------------------------
int sub_1A32AA0(uint32_t *a1, char ***a2, int **a3, int a4)
{
  const char *v5;
  int result;
  char **v7;
  bool v8;
  int value_int;

  v5 = (const char *)a1[1];
  if ( strcmp(v5, "language") == 0 )
  {
    if ( *a2 != nullptr )
    {
      ERR_put_error(34, 150, 155, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_4:
      ERR_add_error_data(6, "section:", *a1, ",name:", a1[1], ",value:", a1[2]);
      return 0;
    }
    v7 = OBJ_txt2obj((char *)a1[2], 0);
    v8 = v7 == nullptr;
    *a2 = v7;
    result = 1;
    if ( v8 )
    {
      ERR_put_error(34, 150, 110, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_4;
    }
  }
  else if ( strcmp(v5, "pathlen") == 0 )
  {
    if ( *a3 != nullptr )
    {
      ERR_put_error(34, 150, 157, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_4;
    }
    value_int = X509V3_get_value_int((int)(uintptr_t)(a1), a3);
    result = 1;
    if ( value_int == 0 )
    {
      ERR_put_error(34, 150, 156, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_4;
    }
  }
  else if ( strcmp(v5, "policy") == 0 )
  {
    return sub_1A32550(a1, a4);
  }
  else
  {
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A32C90  (binary VA: 0x1a32c90)
// Original: sub_1A32C90
// ----------------------------------------------------------------------------
uint32_t * sub_1A32C90(int a1, int a2, char *a3)
{
  int v3;
  int i;
  uint32_t *v5;
  uint8_t *v6;
  int *section;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef char _g4_t_v19[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v17)) > _g4_s1 ? (20u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v3 = 0;
  v17 = nullptr;
  v18 = nullptr;
  *(uint32_t *)v19 = 0;
  v16 = (int *)X509V3_parse_list(a3);
  for ( i = sk_num((int)(uintptr_t)(v16)); v3 < i; i = sk_num((int)(uintptr_t)(v16)) )
  {
    v5 = (uint32_t *)sk_value(v16, v3);
    v6 = (uint8_t *)v5[1];
    if ( v6 == nullptr )
    {
LABEL_22:
      ERR_put_error(34, 155, 153, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_23:
      ERR_add_error_data(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
      goto LABEL_13;
    }
    if ( *v6 == 64 )
    {
      section = (int *)X509V3_get_section(a2, (int)(uintptr_t)(v6 + 1));
      if ( section == nullptr )
      {
        ERR_put_error(34, 155, 135, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_23;
      }
      v8 = 0;
      while ( sk_num((int)(uintptr_t)(section)) > v8 )
      {
        v9 = (uint32_t *)sk_value(section, v8++);
        if ( sub_1A32AA0(v9, (char ***)&v17, &v18, (int)(uintptr_t)(v19)) == 0 )
        {
          X509V3_section_free(a2, (int)(uintptr_t)(section));
          goto LABEL_13;
        }
      }
      X509V3_section_free(a2, (int)(uintptr_t)(section));
    }
    else
    {
      if ( v5[2] == 0 )
        goto LABEL_22;
      if ( sub_1A32AA0(v5, (char ***)&v17, &v18, (int)(uintptr_t)(v19)) == 0 )
        goto LABEL_23;
    }
    ++v3;
  }
  if ( v17 != nullptr )
  {
    v12 = OBJ_obj2nid((int)(uintptr_t)(v17));
    if ( (v12 == 665 || v12 == 667) && *(uint32_t *)v19 != 0 )
    {
      ERR_put_error(34, 155, 159, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      v13 = PROXY_CERT_INFO_EXTENSION_new();
      v10 = (uint32_t *)v13;
      if ( v13 != 0 )
      {
        **(uint32_t **)(v13 + 4) = (uint32_t)(uintptr_t)(v17);
        v14 = *(uint32_t *)(v13 + 4);
        v15 = *(uint32_t *)v19;
        v17 = nullptr;
        *(uint32_t *)v19 = 0;
        *(uint32_t *)(v14 + 4) = v15;
        *v10 = (uint32_t)(uintptr_t)(v18);
        v18 = nullptr;
        goto LABEL_20;
      }
      ERR_put_error(34, 155, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    ERR_put_error(34, 155, 154, (int)(uintptr_t)(&unk_1B15112), 0);
  }
LABEL_13:
  if ( v17 != nullptr )
  {
    ASN1_OBJECT_free(v17);
    v17 = nullptr;
  }
  if ( v18 != nullptr )
  {
    ASN1_INTEGER_free((char)(uintptr_t)(v18));
    v18 = nullptr;
  }
  if ( *(uint32_t *)v19 != 0 )
  {
    ASN1_OCTET_STRING_free(v19[0]);
    *(uint32_t *)v19 = 0;
  }
  v10 = nullptr;
LABEL_20:
  sk_pop_free((void **)v16, (void (*)(uint32_t))X509V3_conf_free);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: PROXY_POLICY_new  (binary VA: 0x1a33040)
// Original: PROXY_POLICY_new
// ----------------------------------------------------------------------------
int PROXY_POLICY_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PROXY_POLICY_it));
}

// ----------------------------------------------------------------------------
// Function: PROXY_POLICY_free  (binary VA: 0x1a33070)
// Original: PROXY_POLICY_free
// ----------------------------------------------------------------------------
int PROXY_POLICY_free(char a1)
{
  return ASN1_item_free(a1, PROXY_POLICY_it);
}

// ----------------------------------------------------------------------------
// Function: PROXY_CERT_INFO_EXTENSION_new  (binary VA: 0x1a33120)
// Original: PROXY_CERT_INFO_EXTENSION_new
// ----------------------------------------------------------------------------
int PROXY_CERT_INFO_EXTENSION_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PROXY_CERT_INFO_EXTENSION_it));
}

// ----------------------------------------------------------------------------
// Function: PROXY_CERT_INFO_EXTENSION_free  (binary VA: 0x1a33150)
// Original: PROXY_CERT_INFO_EXTENSION_free
// ----------------------------------------------------------------------------
int PROXY_CERT_INFO_EXTENSION_free(char a1)
{
  return ASN1_item_free(a1, PROXY_CERT_INFO_EXTENSION_it);
}

// ----------------------------------------------------------------------------
// Function: sub_1A33180  (binary VA: 0x1a33180)
// Original: sub_1A33180
// ----------------------------------------------------------------------------
int sub_1A33180(int a1, int a2, int a3, int **a4, uint32_t *a5, int a6)
{
  BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*s", a6, (const char *)&unk_1B15112);
  if ( *a4 != nullptr )
  {
    BIO_write(a5, (int)(uintptr_t)("Not Before: "), 12);
    ASN1_GENERALIZEDTIME_print(a5, *a4);
    if ( a4[1] == nullptr )
      return 1;
    BIO_write(a5, (int)(uintptr_t)(", "), 2);
  }
  if ( a4[1] != nullptr )
  {
    BIO_write(a5, (int)(uintptr_t)("Not After: "), 11);
    ASN1_GENERALIZEDTIME_print(a5, a4[1]);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PKEY_USAGE_PERIOD_new  (binary VA: 0x1a332e0)
// Original: PKEY_USAGE_PERIOD_new
// ----------------------------------------------------------------------------
int PKEY_USAGE_PERIOD_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PKEY_USAGE_PERIOD_it));
}

// ----------------------------------------------------------------------------
// Function: PKEY_USAGE_PERIOD_free  (binary VA: 0x1a33310)
// Original: PKEY_USAGE_PERIOD_free
// ----------------------------------------------------------------------------
int PKEY_USAGE_PERIOD_free(char a1)
{
  return ASN1_item_free(a1, PKEY_USAGE_PERIOD_it);
}

// ----------------------------------------------------------------------------
// Function: sub_1A33340  (binary VA: 0x1a33340)
// Original: sub_1A33340
// ----------------------------------------------------------------------------
int sub_1A33340(uint32_t *a1, int **a2, int a3, int a4, int a5)
{
  unsigned int v5;
  int result;

  v5 = a3 & 0xF0000;
  if ( (a3 & 0xF0000) == 0x10000 )
  {
    if ( a5 != 0 )
      BIO_printf((int)(uintptr_t)("%*s<Parse Error>"), a5, (int)(uintptr_t)(a1), "%*s<Parse Error>", a4, &unk_1B15112);
    else
      BIO_printf((int)(uintptr_t)("%*s<Not Supported>"), 0, (int)(uintptr_t)(a1), "%*s<Not Supported>", a4, &unk_1B15112);
    return 1;
  }
  else if ( v5 <= 0x10000 )
  {
    result = 0;
    if ( v5 != 0 )
      return 1;
  }
  else if ( v5 == 0x20000 )
  {
    return ASN1_parse_dump(a1, (*a2)[2], **a2, a4, -1);
  }
  else
  {
    if ( v5 != 196608 )
      return 1;
    return BIO_dump_indent((int)(uintptr_t)(a1), (*a2)[2], **a2, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_val_prn  (binary VA: 0x1a33470)
// Original: X509V3_EXT_val_prn
// ----------------------------------------------------------------------------
void X509V3_EXT_val_prn(int a1, int a2, uint32_t *a3, int *a4, int a5, int a6)
{
  int i;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  if ( a4 != nullptr )
  {
    if ( a6 == 0 || sk_num((int)(uintptr_t)(a4)) == 0 )
    {
      BIO_printf(a2, a1, (int)(uintptr_t)(a3), "%*s", a5, &unk_1B15112);
      if ( sk_num((int)(uintptr_t)(a4)) == 0 )
        BIO_puts(a3, (int)(uintptr_t)("<EMPTY>\n"));
    }
    for ( i = 0; i < sk_num((int)(uintptr_t)(a4)); ++i )
    {
      if ( a6 != 0 )
      {
        BIO_printf(v11, v12, (int)(uintptr_t)(a3), "%*s", a5, &unk_1B15112);
      }
      else if ( i > 0 )
      {
        BIO_printf(v11, v12, (int)(uintptr_t)(a3), ", ");
      }
      v7 = sk_value(a4, i);
      v9 = *(uint32_t *)(v7 + 4);
      v10 = *(uint32_t *)(v7 + 8);
      if ( v9 != 0 )
      {
        if ( v10 != 0 )
          BIO_printf(v9, v8, (int)(uintptr_t)(a3), "%s:%s", v9, v10);
        else
          BIO_puts(a3, v9);
      }
      else
      {
        BIO_puts(a3, v10);
      }
      if ( a6 != 0 )
        BIO_puts(a3, (int)(uintptr_t)(&a0[1]));
    }
  }
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_print  (binary VA: 0x1a33610)
// Original: X509V3_EXT_print
// ----------------------------------------------------------------------------
int X509V3_EXT_print(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  char **v5;
  int v6;
  int (*v7)(int, int);
  int v8;
  int v9;
  void *v10;
  int v11;
  uint8_t *v12;
  int (*v14)(int, int, uint32_t);
  int *v15;
  int v16;
  int (*v17)(int, int, uint32_t *, int);
  int v18;
  typedef void *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef char *_g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v21)) > _g4_s1 ? (44u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v22)) > _g4_s2 ? (60u + sizeof(_g4_t_v22)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);

  v4 = X509V3_EXT_get((int *)a2);
  if ( v4 == 0 )
    return sub_1A33340(a1, (int **)(a2 + 8), a3, a4, 0);
  v5 = *(char ***)(a2 + 8);
  v22[0] = v5[2];
  if ( *(uint32_t *)(v4 + 8) != 0 )
    v6 = ASN1_item_d2i(nullptr, v22, (int)(uintptr_t)(*v5), *(uint32_t *)(v4 + 8));
  else
    v6 = (*(int (**)(uint32_t, char **, char *))(v4 + 20))(0, v22, *v5);
  if ( v6 == 0 )
    return sub_1A33340(a1, (int **)(a2 + 8), a3, a4, 1);
  v7 = *(int (**)(int, int))(v4 + 28);
  if ( v7 == nullptr )
  {
    v14 = *(int (**)(int, int, uint32_t))(v4 + 36);
    if ( v14 != nullptr )
    {
      v11 = 0;
      v15 = (int *)v14(v4, v6, 0);
      if ( v15 != nullptr )
      {
        LOWORD(v11) = 1;
        v21 = v15;
        X509V3_EXT_val_prn(v16, (int)(uintptr_t)(a1), a1, v15, a4, *(uint32_t *)(v4 + 4) & 4);
        v15 = v21;
      }
    }
    else
    {
      v17 = *(int (**)(int, int, uint32_t *, int))(v4 + 44);
      v11 = 0;
      v15 = nullptr;
      if ( v17 != nullptr )
      {
        v18 = -(v17(v4, v6, a1, a4) == 0);
        v15 = nullptr;
        v11 = v18 + 1;
      }
    }
LABEL_13:
    sk_pop_free((void **)v15, (void (*)(uint32_t))X509V3_conf_free);
    v12 = *(uint8_t **)(v4 + 8);
    if ( v12 != nullptr )
      goto LABEL_8;
LABEL_14:
    (*(void (**)(int))(v4 + 16))(v6);
    return v11;
  }
  v8 = v7(v4, v6);
  v10 = (void *)v8;
  if ( v8 == 0 )
  {
    v11 = 0;
    v15 = nullptr;
    goto LABEL_13;
  }
  BIO_printf(a4, v9, (int)(uintptr_t)(a1), "%*s%s", a4, &unk_1B15112, v8);
  sk_pop_free(nullptr, (void (*)(uint32_t))X509V3_conf_free);
  v20 = v10;
  v11 = 1;
  CRYPTO_free(v20);
  v12 = *(uint8_t **)(v4 + 8);
  if ( v12 == nullptr )
    goto LABEL_14;
LABEL_8:
  ASN1_item_free(v6, v12);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: X509V3_extensions_print  (binary VA: 0x1a33830)
// Original: X509V3_extensions_print
// ----------------------------------------------------------------------------
int X509V3_extensions_print(uint32_t *a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int i;
  int v9;
  int v10;
  int v11;
  int object;
  bool critical;
  int v14;
  const char *v15;
  int v16;

  v5 = sk_num((int)(uintptr_t)(a3));
  v7 = 1;
  if ( v5 <= 0 )
    return v7;
  if ( a2 != 0 )
  {
    BIO_printf(1, v6, (int)(uintptr_t)(a1), "%*s%s:\n", a5, &unk_1B15112, a2);
    a5 += 4;
  }
  for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
  {
    v11 = sk_value(a3, i);
    if ( a5 != 0 && BIO_printf(v9, v10, (int)(uintptr_t)(a1), "%*s", a5, &unk_1B15112) <= 0 )
      return 0;
    object = X509_EXTENSION_get_object(v11);
    i2a_ASN1_OBJECT(a1, object);
    critical = X509_EXTENSION_get_critical(v11);
    v15 = "critical";
    if ( !critical )
      v15 = (const char *)&unk_1B15112;
    if ( BIO_printf((int)(uintptr_t)(v15), v14, (int)(uintptr_t)(a1), ": %s\n", v15) <= 0 )
      return 0;
    if ( X509V3_EXT_print(a1, v11, a4, a5 + 4) == 0 )
    {
      BIO_printf(a5 + 4, v16, (int)(uintptr_t)(a1), "%*s", a5 + 4, &unk_1B15112);
      ASN1_STRING_print(a1, *(int **)(v11 + 8));
    }
    if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) <= 0 )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_EXT_print_fp  (binary VA: 0x1a339f0)
// Original: X509V3_EXT_print_fp
// ----------------------------------------------------------------------------
int X509V3_EXT_print_fp(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  v4 = BIO_new_fp(a1, 0);
  v5 = 0;
  v6 = v4;
  if ( v4 != nullptr )
  {
    v5 = X509V3_EXT_print(v4, a2, a3, a4);
    BIO_free(v6);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: i2s_ASN1_OCTET_STRING  (binary VA: 0x1a33a70)
// Original: i2s_ASN1_OCTET_STRING
// ----------------------------------------------------------------------------
uint8_t * i2s_ASN1_OCTET_STRING(int a1, int a2)
{
  return hex_to_string(*(char **)(a2 + 8), *(uint32_t *)a2);
}

// ----------------------------------------------------------------------------
// Function: s2i_ASN1_OCTET_STRING  (binary VA: 0x1a33aa0)
// Original: s2i_ASN1_OCTET_STRING
// ----------------------------------------------------------------------------
char * s2i_ASN1_OCTET_STRING(int a1, int a2, char *a3)
{
  char *v3;
  uint8_t *v4;
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v7)) > _g4_s1 ? (44u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  v3 = (char *)ASN1_STRING_type_new(4);
  if ( v3 != nullptr )
  {
    v4 = string_to_hex(a3, &v7);
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
    {
      *(uint32_t *)v3 = v7;
    }
    else
    {
      v6 = v3;
      v3 = nullptr;
      ASN1_STRING_free((void **)v6);
    }
  }
  else
  {
    ERR_put_error(34, 112, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A33B40  (binary VA: 0x1a33b40)
// Original: sub_1A33B40
// ----------------------------------------------------------------------------
char * sub_1A33B40(int a1, uint32_t *a2, char *a3)
{
  void **v3;
  int v4;
  int *v5;
  uint32_t *v6;
  int v8;
  typedef void **_g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef char _g4_t_s[76];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v10)) > _g4_s1 ? (44u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_s)) > _g4_s2 ? (48u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);

  if ( strcmp(a3, "hash") != 0 )
    return s2i_ASN1_OCTET_STRING(a1, (int)(uintptr_t)(a2), a3);
  v3 = (void **)ASN1_STRING_type_new(4);
  if ( v3 == nullptr )
  {
    ERR_put_error(34, 115, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return (char *)v3;
  }
  if ( a2 == nullptr )
    goto LABEL_15;
  if ( *a2 != 1 )
  {
    v4 = a2[3];
    if ( v4 != 0 )
    {
      v5 = *(int **)(*(uint32_t *)(*(uint32_t *)v4 + 20) + 4);
    }
    else
    {
      v8 = a2[2];
      if ( v8 == 0 )
        goto LABEL_15;
      v5 = *(int **)(*(uint32_t *)(*(uint32_t *)v8 + 24) + 4);
    }
    if ( v5 != nullptr )
    {
      v6 = (uint32_t *)(EVP_sha1());
      EVP_Digest(v5[2], *v5, (int)(uintptr_t)(s), &v10, v6, nullptr);
      if ( ASN1_STRING_set((int)(uintptr_t)(v3), s, v10) != 0 )
        return (char *)v3;
      ERR_put_error(34, 115, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_14:
      v9 = v3;
      v3 = nullptr;
      ASN1_STRING_free(v9);
      return (char *)v3;
    }
LABEL_15:
    ERR_put_error(34, 115, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_14;
  }
  return (char *)v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A33D20  (binary VA: 0x1a33d20)
// Original: sub_1A33D20
// ----------------------------------------------------------------------------
int sub_1A33D20(int a1, int **a2, uint32_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int **i;
  uint32_t **v9;
  void *v10;
  int v11;
  int v12;
  int **v14;

  v4 = 0;
  v5 = ASN1_INTEGER_get(*a2);
  BIO_printf(v6, v7, (int)(uintptr_t)(a3), "%*sVersion: %ld (0x%lX)", a4, &unk_1B15112, v5 + 1, v5);
  for ( i = a2; ; i = v14 )
  {
    v14 = i;
    if ( v4 >= sk_num((int)(uintptr_t)(i[1])) )
      break;
    v9 = (uint32_t **)sk_value(v14[1], v4);
    v10 = (void *)i2s_ASN1_INTEGER(0, *v9);
    ++v4;
    BIO_printf(v11, v12, (int)(uintptr_t)(a3), "\n%*sZone: %s, User: ", a4, &unk_1B15112, v10);
    CRYPTO_free(v10);
    ASN1_STRING_print(a3, v9[1]);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SXNETID_new  (binary VA: 0x1a33eb0)
// Original: SXNETID_new
// ----------------------------------------------------------------------------
int SXNETID_new()
{
  return ASN1_item_new((int)(uintptr_t)(&SXNETID_it));
}

// ----------------------------------------------------------------------------
// Function: SXNETID_free  (binary VA: 0x1a33ee0)
// Original: SXNETID_free
// ----------------------------------------------------------------------------
int SXNETID_free(char a1)
{
  return ASN1_item_free(a1, SXNETID_it);
}

// ----------------------------------------------------------------------------
// Function: SXNET_new  (binary VA: 0x1a33f90)
// Original: SXNET_new
// ----------------------------------------------------------------------------
int SXNET_new()
{
  return ASN1_item_new((int)(uintptr_t)(&SXNET_it));
}

// ----------------------------------------------------------------------------
// Function: SXNET_free  (binary VA: 0x1a33fc0)
// Original: SXNET_free
// ----------------------------------------------------------------------------
int SXNET_free(char a1)
{
  return ASN1_item_free(a1, SXNET_it);
}

// ----------------------------------------------------------------------------
// Function: SXNET_get_id_INTEGER  (binary VA: 0x1a33ff0)
// Original: SXNET_get_id_INTEGER
// ----------------------------------------------------------------------------
int SXNET_get_id_INTEGER(int a1, int a2)
{
  int i;
  int *v3;

  for ( i = 0; ; ++i )
  {
    if ( i >= sk_num(*(uint32_t *)(a1 + 4)) )
      return 0;
    v3 = (int *)sk_value(*(int **)(a1 + 4), i);
    if ( ASN1_STRING_cmp(*v3, a2) == 0 )
      break;
  }
  return v3[1];
}

// ----------------------------------------------------------------------------
// Function: SXNET_get_id_ulong  (binary VA: 0x1a34070)
// Original: SXNET_get_id_ulong
// ----------------------------------------------------------------------------
int SXNET_get_id_ulong(int a1, int a2)
{
  void **v2;
  int id_INTEGER;

  v2 = (void **)ASN1_STRING_type_new(2);
  if ( v2 != nullptr && ASN1_INTEGER_set((int)(uintptr_t)(v2), a2) != 0 )
  {
    id_INTEGER = SXNET_get_id_INTEGER(a1, (int)(uintptr_t)(v2));
    ASN1_STRING_free(v2);
  }
  else
  {
    id_INTEGER = 0;
    ERR_put_error(34, 129, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    ASN1_STRING_free(v2);
  }
  return id_INTEGER;
}

// ----------------------------------------------------------------------------
// Function: SXNET_get_id_asc  (binary VA: 0x1a34120)
// Original: SXNET_get_id_asc
// ----------------------------------------------------------------------------
int SXNET_get_id_asc(int a1, int *a2)
{
  int *v2;
  void **v3;
  int id_INTEGER;

  v2 = s2i_ASN1_INTEGER(0, a2);
  v3 = (void **)v2;
  if ( v2 != nullptr )
  {
    id_INTEGER = SXNET_get_id_INTEGER(a1, (int)(uintptr_t)(v2));
    ASN1_STRING_free(v3);
  }
  else
  {
    id_INTEGER = 0;
    ERR_put_error(34, 128, 131, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return id_INTEGER;
}

// ----------------------------------------------------------------------------
// Function: SXNET_add_id_INTEGER  (binary VA: 0x1a341c0)
// Original: SXNET_add_id_INTEGER
// ----------------------------------------------------------------------------
int SXNET_add_id_INTEGER(int *a1, int a2, char *s, signed int a4)
{
  signed int v4;
  int v5;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int *v15;
  uint32_t *v16;
  char v17;
  int v18;

  v4 = a4;
  if ( a2 == 0 || a1 == nullptr || s == nullptr )
  {
    ERR_put_error(34, 126, 107, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a4 != -1 )
  {
    if ( a4 <= 64 )
      goto LABEL_6;
LABEL_16:
    ERR_put_error(34, 126, 132, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v4 = strlen(s);
  if ( v4 > 64 )
    goto LABEL_16;
LABEL_6:
  v5 = *a1;
  if ( *a1 != 0 )
    goto LABEL_7;
  v9 = (int *)SXNET_new();
  LOBYTE(v5) = (uint8_t)(uintptr_t)(v9);
  if ( v9 == nullptr )
  {
    LOBYTE(v7) = 0;
    goto LABEL_14;
  }
  v15 = v9;
  v10 = ASN1_INTEGER_set(*v9, 0);
  LOBYTE(v7) = 0;
  v5 = (int)(uintptr_t)(v15);
  if ( v10 == 0 )
  {
LABEL_14:
    v14 = v5;
    v17 = v7;
    ERR_put_error(34, 126, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    SXNETID_free(v17);
    SXNET_free(v14);
    *a1 = 0;
    return 0;
  }
  *a1 = (int)(uintptr_t)(v15);
LABEL_7:
  v12 = v5;
  if ( SXNET_get_id_INTEGER(v5, a2) != 0 )
  {
    ERR_put_error(34, 126, 133, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v7 = SXNETID_new();
  v5 = v12;
  if ( v7 == 0 )
    goto LABEL_14;
  if ( v4 == -1 )
  {
    v18 = v7;
    v4 = strlen(s);
    v7 = v18;
    v5 = v12;
  }
  v13 = v5;
  v16 = (uint32_t *)v7;
  v8 = ASN1_STRING_set(*(uint32_t *)(v7 + 4), s, v4);
  LOBYTE(v5) = v13;
  LOBYTE(v7) = (uint8_t)(uintptr_t)(v16);
  if ( v8 == 0 )
    goto LABEL_14;
  v11 = sk_push(*(int **)(v13 + 4), (int)(uintptr_t)(v16));
  LOBYTE(v5) = v13;
  LOBYTE(v7) = (uint8_t)(uintptr_t)(v16);
  if ( v11 == 0 )
    goto LABEL_14;
  *v16 = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SXNET_add_id_ulong  (binary VA: 0x1a34450)
// Original: SXNET_add_id_ulong
// ----------------------------------------------------------------------------
int SXNET_add_id_ulong(int *a1, int a2, char *a3, size_t a4)
{
  void **v4;

  v4 = (void **)ASN1_STRING_type_new(2);
  if ( v4 != nullptr && ASN1_INTEGER_set((int)(uintptr_t)(v4), a2) != 0 )
    return SXNET_add_id_INTEGER(a1, (int)(uintptr_t)(v4), a3, a4);
  ERR_put_error(34, 127, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  ASN1_STRING_free(v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SXNET_add_id_asc  (binary VA: 0x1a344f0)
// Original: SXNET_add_id_asc
// ----------------------------------------------------------------------------
int SXNET_add_id_asc(int *a1, int *a2, char *a3, size_t a4)
{
  int *v4;

  v4 = s2i_ASN1_INTEGER(0, a2);
  if ( v4 != nullptr )
    return SXNET_add_id_INTEGER(a1, (int)(uintptr_t)(v4), a3, a4);
  ERR_put_error(34, 125, 131, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A34580  (binary VA: 0x1a34580)
// Original: sub_1A34580
// ----------------------------------------------------------------------------
int sub_1A34580(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v6[8];

  v3 = 0;
  v6[0] = 0;
  while ( 1 )
  {
    if ( v3 >= sk_num((int)(uintptr_t)(a3)) )
      return v6[0];
    v4 = sk_value(a3, v3);
    if ( SXNET_add_id_asc(v6, *(int **)(v4 + 4), *(char **)(v4 + 8), 0xFFFFFFFF) == 0 )
      break;
    ++v3;
  }
  return 0;
}



// ============================================================================
// Address:   0x1a34610 (size: 58 bytes)
// Symbol:    OPENSSL_gmtime
// Demangled: OPENSSL_gmtime
// ============================================================================
struct tm *OPENSSL_gmtime(time_t *timer, struct tm *tp)
{
  gmtime_r(timer, tp);
  return tp;
}
// ----------------------------------------------------------------------------
// Function: OPENSSL_gmtime_adj  (binary VA: 0x1a34650)
// Original: OPENSSL_gmtime_adj
// ----------------------------------------------------------------------------
int OPENSSL_gmtime_adj(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v14 = a2 + a3 / 86400;
  v3 = a3 % 86400 + *a1 + 3600 * a1[2] + 60 * a1[1];
  v16 = v3;
  if ( v3 <= 86399 )
  {
    if ( v3 < 0 )
    {
      --v14;
      v16 = v3 + 86400;
    }
  }
  else
  {
    ++v14;
    v16 = v3 - 86400;
  }
  v18 = 0;
  v4 = v14
     + a1[3]
     + (367 * (a1[4] + 1) + 4404 * ((a1[4] - 13) / -12) - 734) / 12
     + 1461 * (a1[5] + (a1[4] - 13) / 12 + 6700) / 4
     - 3 * ((a1[5] + (a1[4] - 13) / 12 + 6800) / 100) / 4
     - 32075;
  if ( v4 >= 0 )
  {
    v5 = v4 + 68569;
    v6 = 146097 * (4 * v5 / 146097);
    v15 = 4 * v5 / 146097;
    v7 = v6 + 6;
    v8 = v6 + 3;
    if ( v8 < 0 )
      v8 = v7;
    v9 = v5 - (v8 >> 2);
    v10 = 4000 * (v9 + 1) / 1461001;
    v17 = v9 - 1461 * v10 / 4 + 31;
    v11 = 80 * v17 / 2447;
    v12 = v11 / 11 + v10 + 100 * v15 - 4900 - 1900;
    if ( v12 <= 0x1FA3 )
    {
      a1[5] = v12;
      v18 = 1;
      a1[4] = v11 - 12 * (v11 / 11) + 1;
      a1[2] = v16 / 3600;
      a1[3] = v17 + 2447 * v11 / -80;
      a1[1] = v16 / 60 % 60;
      *a1 = v16 % 60;
    }
  }
  return v18;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35410  (binary VA: 0x1a35410)
// Original: sub_1A35410
// ----------------------------------------------------------------------------
int sub_1A35410(int a1, uint32_t *a2)
{
  ++*a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35420  (binary VA: 0x1a35420)
// Original: sub_1A35420
// ----------------------------------------------------------------------------
int sub_1A35420(char a1, uint32_t *a2)
{
  *(uint8_t *)(*a2)++ = a1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35440  (binary VA: 0x1a35440)
// Original: sub_1A35440
// ----------------------------------------------------------------------------
int sub_1A35440(int16_t a1, uint8_t **a2)
{
  uint8_t *v2;

  v2 = *a2;
  *v2 = HIBYTE(a1);
  v2[1] = a1;
  *a2 += 2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35480  (binary VA: 0x1a35480)
// Original: sub_1A35480
// ----------------------------------------------------------------------------
int sub_1A35480(int a1, uint8_t **a2)
{
  uint8_t *v2;

  v2 = *a2;
  *v2 = HIBYTE(a1);
  v2[1] = BYTE2(a1);
  v2[2] = BYTE1(a1);
  v2[3] = a1;
  *a2 += 4;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A354D0  (binary VA: 0x1a354d0)
// Original: sub_1A354D0
// ----------------------------------------------------------------------------
int sub_1A354D0(uint8_t *a1, int a2, int a3, int (*a4)(unsigned int, int), int a5)
{
  int v5;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13[8];

  v5 = a2;
  result = 1;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      switch ( a3 )
      {
        case 4097:
          --v5;
          v13[0] = *a1++;
          break;
        case 4098:
          v11 = *a1;
          v5 -= 2;
          v12 = a1[1];
          a1 += 2;
          v13[0] = v12 | (v11 << 8);
          break;
        case 4100:
          v5 -= 4;
          v8 = a1[3] | (a1[1] << 16) | (*a1 << 24);
          v9 = a1[2];
          a1 += 4;
          v13[0] = (v9 << 8) | v8;
          break;
        default:
          LOBYTE(v10) = UTF8_getc(a1, v5, v13);
          if ( v10 < 0 )
            return -1;
          v5 -= v10;
          a1 += v10;
          break;
      }
      if ( a4 != nullptr )
      {
        result = a4(v13[0], a5);
        if ( result <= 0 )
          return result;
      }
      if ( v5 == 0 )
        return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A355D0  (binary VA: 0x1a355d0)
// Original: sub_1A355D0
// ----------------------------------------------------------------------------
int sub_1A355D0(unsigned int a1, uint8_t **a2)
{
  *a2 += UTF8_putc(*a2, 255, a1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35620  (binary VA: 0x1a35620)
// Original: sub_1A35620
// ----------------------------------------------------------------------------
int sub_1A35620(unsigned int a1, int *a2)
{
  int v2;
  int v3;

  v2 = *a2;
  v3 = UTF8_putc(nullptr, -1, a1) + v2;
  *a2 = v3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35680  (binary VA: 0x1a35680)
// Original: sub_1A35680
// ----------------------------------------------------------------------------
int sub_1A35680(unsigned int c, int *a2)
{
  int v2;
  int v3;
  int result;

  v2 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( c <= 0x7F
      && (c - 97 <= 0x19 || c - 65 <= 0x19 || c - 48 <= 9 || c == 32 || strchr("'()+,-./:=?", c) != nullptr) )
    {
      goto LABEL_7;
    }
    v2 &= ~2u;
  }
  if ( (v2 & 0x10) != 0 && c > 0x7F )
    v2 &= ~0x10u;
LABEL_7:
  if ( (v2 & 4) != 0 && c > 0xFF )
    v2 &= ~4u;
  if ( (v2 & 0x800) != 0 )
  {
    v3 = v2;
    if ( c > 0xFFFF )
    {
      BYTE1(v3) = BYTE1(v2) & 0xF7;
      v2 = v3;
    }
  }
  result = -1;
  if ( v2 != 0 )
  {
    *a2 = v2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A35FE0  (binary VA: 0x1a35fe0)
// Original: sub_1A35FE0
// ----------------------------------------------------------------------------
int sub_1A35FE0(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  bool v9;

  v6 = *a1;
  v9 = *a1 != -1;
  if ( a6 != 0 || *a1 == -1 )
  {
    v7 = a1[105];
    if ( v7 == 20 )
    {
      ERR_put_error(13, 176, 174, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    else
    {
      a1[105] = v7 + 1;
      if ( v9 )
      {
        a1[5 * v7 + 5] = v6;
        a1[5 * v7 + 6] = a1[1];
        *a1 = -1;
        a1[1] = -1;
      }
      else
      {
        a1[5 * v7 + 5] = a2;
        a1[5 * v7 + 6] = a3;
      }
      a1[5 * v7 + 7] = a4;
      a1[5 * v7 + 8] = a5;
      return 1;
    }
  }
  else
  {
    ERR_put_error(13, 176, 179, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A36100  (binary VA: 0x1a36100)
// Original: sub_1A36100
// ----------------------------------------------------------------------------
int sub_1A36100(const char *nptr, int a2, signed int *a3, uint32_t *a4)
{
  int v4;
  signed int v7;
  char *v8;
  char v9;
  typedef uint8_t _g4_t_v11[2];
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v11)) > _g4_s0 ? (10u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_endptr)) > _g4_s1 ? (12u + sizeof(_g4_t_endptr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 10u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 12u);

  v4 = 0;
  if ( nptr != nullptr )
  {
    v7 = strtoul(nptr, &endptr, 10);
    v8 = endptr;
    if ( endptr == nullptr || *endptr == 0 || endptr <= &nptr[a2] )
    {
      if ( v7 < 0 )
      {
        v4 = 0;
        ERR_put_error(13, 182, 187, (int)(uintptr_t)(&unk_1B15112), 0);
        return v4;
      }
      *a3 = v7;
      if ( v8 == nullptr || nptr - v8 + a2 == 0 || (v9 = *v8, *v8 == 67) )
      {
        v4 = 1;
        *a4 = 128;
        return v4;
      }
      if ( v9 <= 67 )
      {
        if ( v9 == 65 )
        {
          v4 = 1;
          *a4 = 64;
          return v4;
        }
      }
      else
      {
        if ( v9 == 80 )
        {
          v4 = 1;
          *a4 = 192;
          return v4;
        }
        if ( v9 == 85 )
        {
          v4 = 1;
          *a4 = 0;
          return v4;
        }
      }
      v11[0] = *v8;
      v11[1] = 0;
      v4 = 0;
      ERR_put_error(13, 182, 186, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_add_error_data(2, "Char=", v11);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A362A0  (binary VA: 0x1a362a0)
// Original: sub_1A362A0
// ----------------------------------------------------------------------------
int sub_1A362A0(char *s, signed int a2, signed int *a3)
{
  size_t n;
  char *v4;
  int v5;
  char **v6;
  signed int v7;
  int result;
  int v9;
  int v10;
  typedef const char *_g4_t_v11;
  typedef signed int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef signed int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  n = a2;
  if ( a2 <= 0 )
  {
    v12 = a2;
    v11 = nullptr;
    v13 = nullptr;
  }
  else
  {
    v4 = s;
    v5 = 0;
    if ( *s == 58 )
    {
      v12 = 0;
    }
    else
    {
      do
      {
        if ( ++v5 == a2 )
        {
          v12 = a2;
          v11 = nullptr;
          v13 = nullptr;
          goto LABEL_7;
        }
        ++v4;
      }
      while ( *v4 != 58 );
      v12 = v4 - s;
    }
    v11 = v4 + 1;
    v13 = (char *)(a2 + s - (v4 + 1));
  }
  n = v12;
  if ( v12 == -1 )
    n = strlen(s);
LABEL_7:
  v6 = (char **)(&off_2045FA0);
  dword_2142590 = (int)(uintptr_t)(&off_2045FA0);
  while ( v6[1] != (char *)n || strncmp(*v6, s, n) != 0 )
  {
    v6 += 3;
    dword_2142590 = (int)(uintptr_t)(v6);
    if ( v6 == (char **)&PBEPARAM_it )
      goto LABEL_43;
  }
  v7 = (signed int)(uintptr_t)(v6[2]);
  if ( v7 == -1 )
  {
LABEL_43:
    ERR_put_error(13, 177, 194, (int)(uintptr_t)(&unk_1B15112), 0);
    ERR_add_error_data(2, "tag=", s);
    return -1;
  }
  if ( (v7 & 0x10000) != 0 )
  {
    switch ( v7 )
    {
      case 65537:
        if ( *a3 == -1 )
          return sub_1A36100(v11, (int)(uintptr_t)(v13), a3, a3 + 1) == 0 ? -1 : 1;
        ERR_put_error(13, 177, 181, (int)(uintptr_t)(&unk_1B15112), 0);
        return -1;
      case 65538:
        v10 = sub_1A36100(v11, (int)(uintptr_t)(v13), &v14, v15);
        result = -1;
        if ( v10 != 0 )
        {
          v9 = sub_1A35FE0(a3, v14, v15[0], 1, 0, 0);
          goto LABEL_26;
        }
        return result;
      case 65540:
        v9 = sub_1A35FE0(a3, 3, 0, 0, 1, 1);
        goto LABEL_26;
      case 65541:
        v9 = sub_1A35FE0(a3, 4, 0, 0, 0, 1);
        goto LABEL_26;
      case 65542:
        v9 = sub_1A35FE0(a3, 16, 0, 1, 0, 1);
        goto LABEL_26;
      case 65543:
        v9 = sub_1A35FE0(a3, 17, 0, 1, 0, 1);
LABEL_26:
        result = v9 == 0 ? -1 : 1;
        break;
      case 65544:
        if ( memcmp(v11, "ASCII", 5u) == 0 )
        {
          a3[3] = 1;
          result = 1;
        }
        else if ( memcmp(v11, "UTF8", 4u) == 0 )
        {
          a3[3] = 2;
          result = 1;
        }
        else if ( memcmp(v11, "HEX", 3u) == 0 )
        {
          a3[3] = 3;
          result = 1;
        }
        else if ( memcmp(v11, "BITLIST", 3u) == 0 )
        {
          a3[3] = 4;
          result = 1;
        }
        else
        {
          ERR_put_error(13, 177, 195, (int)(uintptr_t)(&unk_1B15112), 0);
          result = -1;
        }
        break;
      default:
        result = 1;
        break;
    }
  }
  else
  {
    a3[2] = v7;
    result = 0;
    a3[4] = (signed int)(uintptr_t)(v11);
    if ( v11 == nullptr && s[v12] != 0 )
    {
      ERR_put_error(13, 177, 189, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A36710  (binary VA: 0x1a36710)
// Original: sub_1A36710
// ----------------------------------------------------------------------------
int sub_1A36710(char *nptr, int a2, int *a3)
{
  int v3;
  signed int v4;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_endptr)) > _g4_s0 ? (12u + sizeof(_g4_t_endptr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 12u);

  v3 = 0;
  if ( nptr != nullptr )
  {
    v4 = strtoul(nptr, &endptr, 10);
    if ( endptr == nullptr || *endptr == 0 || endptr == &nptr[a2] )
    {
      if ( v4 < 0 )
      {
        v3 = 0;
        ERR_put_error(13, 180, 187, (int)(uintptr_t)(&unk_1B15112), 0);
      }
      else
      {
        v3 = 1;
        if ( ASN1_BIT_STRING_set_bit(a3, v4, 1) == 0 )
        {
          LOWORD(v3) = 0;
          ERR_put_error(13, 180, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: i2a_ASN1_INTEGER  (binary VA: 0x1a378d0)
// Original: i2a_ASN1_INTEGER
// ----------------------------------------------------------------------------
int i2a_ASN1_INTEGER(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v9;
  uint8_t v10[30];

  v2 = 0;
  if ( a2 == 0 )
    return v2;
  v3 = 0;
  if ( (*(uint8_t *)(a2 + 5) & 1) != 0 )
  {
    v9 = BIO_write(a1, (int)(uintptr_t)("-"), 1);
    v2 = -1;
    if ( v9 != 1 )
      return v2;
    LOWORD(v3) = 1;
  }
  if ( *(uint32_t *)a2 == 0 )
  {
    v6 = v3 + 2;
    v7 = BIO_write(a1, (int)(uintptr_t)("00"), 2);
    v2 = -1;
    if ( v7 == 2 )
      return v6;
    return v2;
  }
  v4 = 0;
  if ( *(int *)a2 <= 0 )
    return v3;
  while ( 1 )
  {
    v5 = (uint8_t *)(*(uint32_t *)(a2 + 8) + v4);
    v10[0] = a0123456789abcd /* "0123456789ABCDEF" */[*v5 >> 4];
    v10[1] = a0123456789abcd /* "0123456789ABCDEF" */[*v5 & 0xF];
    if ( BIO_write(a1, (int)(uintptr_t)(v10), 2) != 2 )
      break;
    ++v4;
    v2 = v3 + 2;
    if ( *(uint32_t *)a2 <= v4 )
      return v2;
    if ( v4 != 0 && v4 == 35 * (v4 / 35) )
    {
      if ( BIO_write(a1, (int)(uintptr_t)("\\\n"), 2) != 2 )
        return -1;
      v3 += 4;
    }
    else
    {
      v3 += 2;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: a2i_ASN1_INTEGER  (binary VA: 0x1a37a60)
// Original: a2i_ASN1_INTEGER
// ----------------------------------------------------------------------------
int a2i_ASN1_INTEGER(uint32_t *a1, uint32_t *a2, uint8_t *a3, int a4)
{
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  int i;
  int v14;
  char v15; // bp
  int result;
  char v17;
  int v18;
  int v19;
  char v20;
  bool v21;
  int v22;
  int v23;
  uint8_t *ptr;
  signed int v25;

  a2[1] = 2;
  v4 = BIO_gets(a1, (int)(uintptr_t)(a3), a4);
  if ( v4 <= 0 )
  {
LABEL_41:
    ERR_put_error(13, 102, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v22 = 1;
  v25 = 0;
  v23 = 0;
  ptr = nullptr;
  while ( 1 )
  {
    v18 = v4;
    v5 = v4;
    v20 = a3[v4 - 1];
    if ( v20 == 10 )
    {
      v5 = v4 - 1;
      v18 = v5;
      a3[v5] = 0;
      if ( v4 == 1 )
        goto LABEL_41;
      v20 = a3[v5 - 1];
      if ( v20 != 13 )
        goto LABEL_5;
    }
    else if ( v20 != 13 )
    {
      goto LABEL_5;
    }
    v18 = --v5;
    a3[v5] = 0;
    if ( v5 == 0 )
      goto LABEL_41;
    v20 = a3[v5 - 1];
LABEL_5:
    v6 = a3;
    v7 = 0;
    while ( 1 )
    {
      v8 = v6;
      v17 = *v6;
      if ( (uint8_t)(*v6 - 97) > 5u && (uint8_t)(v17 - 48) > 9u && (uint8_t)(v17 - 65) > 5u )
        break;
      ++v7;
      ++v6;
      if ( v7 >= v5 )
      {
        v8 = &a3[v18];
        goto LABEL_11;
      }
    }
    v5 = v7;
LABEL_11:
    *v8 = 0;
    if ( v5 <= 1 )
      goto LABEL_41;
    v9 = a3;
    if ( v22 != 0 && *a3 == 48 && a3[1] == 48 )
    {
      v9 = a3 + 2;
      v5 -= 2;
    }
    v10 = v5 - (v20 == 92);
    v21 = v20 == 92;
    if ( (v10 & 1) != 0 )
    {
      ERR_put_error(13, 102, 145, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    v19 = v10 / 2;
    if ( v10 / 2 + v23 > v25 )
      break;
LABEL_20:
    v12 = 0;
    if ( v19 != 0 )
    {
      while ( 2 )
      {
        for ( i = 0; i != 2; ++i )
        {
          v14 = (uint8_t)v9[i];
          v15 = v14 - 48;
          if ( (unsigned int)(v14 - 48) > 9 )
          {
            if ( (unsigned int)(v14 - 97) > 5 )
            {
              if ( (unsigned int)(v14 - 65) > 5 )
              {
                ERR_put_error(13, 102, 141, (int)(uintptr_t)(&unk_1B15112), 0);
                return 0;
              }
              v15 = v14 - 55;
            }
            else
            {
              v15 = v14 - 87;
            }
          }
          ptr[v23 + v12] = v15 | (16 * ptr[v23 + v12]);
        }
        ++v12;
        v9 += 2;
        if ( v12 != v19 )
          continue;
        break;
      }
    }
    if ( !v21 )
    {
      *a2 = v10 / 2 + v23;
      a2[2] = (uint32_t)(uintptr_t)(ptr);
      return 1;
    }
    v4 = BIO_gets(a1, (int)(uintptr_t)(a3), a4);
    if ( v4 <= 0 )
      goto LABEL_41;
    v22 = 0;
    v23 += v10 / 2;
  }
  if ( ptr != nullptr )
    v11 = CRYPTO_realloc_clean(ptr, v25, v23 + 2 * v19, (int)(uintptr_t)(&unk_1B15112), 0);
  else
    v11 = CRYPTO_malloc(v23 + 2 * (v10 / 2), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v11 != nullptr )
  {
    ptr = v11;
    v25 = v23 + 2 * v19;
    goto LABEL_20;
  }
  ERR_put_error(13, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  result = 0;
  if ( ptr != nullptr )
  {
    CRYPTO_free(ptr);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: i2a_ASN1_STRING  (binary VA: 0x1a37e50)
// Original: i2a_ASN1_STRING
// ----------------------------------------------------------------------------
int i2a_ASN1_STRING(uint32_t *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  uint8_t *v5;
  uint8_t v7[30];

  v2 = 0;
  if ( a2 == nullptr )
    return v2;
  if ( *a2 == 0 )
    return 2 * (BIO_write(a1, (int)(uintptr_t)(&a0[2]), 1) == 1) - 1;
  if ( *a2 <= 0 )
    return v2;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = (uint8_t *)(a2[2] + v3);
    v7[0] = a0123456789abcd /* "0123456789ABCDEF" */[*v5 >> 4];
    v7[1] = a0123456789abcd /* "0123456789ABCDEF" */[*v5 & 0xF];
    if ( BIO_write(a1, (int)(uintptr_t)(v7), 2) != 2 )
      break;
    ++v3;
    v2 = v4 + 2;
    if ( *a2 <= v3 )
      return v2;
    if ( v3 != 0 && v3 == 35 * (v3 / 35) )
    {
      if ( BIO_write(a1, (int)(uintptr_t)("\\\n"), 2) != 2 )
        return -1;
      v4 += 4;
    }
    else
    {
      v4 += 2;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: a2i_ASN1_STRING  (binary VA: 0x1a37f90)
// Original: a2i_ASN1_STRING
// ----------------------------------------------------------------------------
int a2i_ASN1_STRING(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  int i;
  int v15;
  char v16; // bp
  int result;
  char v18;
  int v19;
  void *v20;
  char v21;
  int v22;
  int v23;

  v4 = BIO_gets(a1, a3, a4);
  if ( v4 > 0 )
  {
    v23 = 0;
    v19 = 0;
    v20 = nullptr;
    while ( 1 )
    {
      v5 = v4;
      v6 = v4;
      v18 = *(uint8_t *)(a3 + v4 - 1);
      if ( v18 == 10 )
      {
        v6 = v4 - 1;
        v5 = v6;
        *(uint8_t *)(a3 + v6) = 0;
        if ( v4 == 1 )
          goto LABEL_37;
        v18 = *(uint8_t *)(a3 + v6 - 1);
        if ( v18 != 13 )
          goto LABEL_5;
      }
      else if ( v18 != 13 )
      {
        goto LABEL_5;
      }
      v5 = --v6;
      *(uint8_t *)(a3 + v6) = 0;
      if ( v6 == 0 )
        goto LABEL_37;
      v18 = *(uint8_t *)(a3 + v6 - 1);
LABEL_5:
      v7 = v6 - 1;
      if ( v6 == 1 )
      {
LABEL_10:
        v8 = (uint8_t *)(v5 + a3);
      }
      else
      {
        while ( 1 )
        {
          v8 = (uint8_t *)(a3 + v7);
          v21 = *(uint8_t *)(a3 + v7);
          if ( (uint8_t)(v21 - 97) > 5u && (uint8_t)(v21 - 48) > 9u && (uint8_t)(v21 - 65) > 5u )
            break;
          if ( --v7 == 0 )
            goto LABEL_10;
        }
        v6 = v7;
      }
      *v8 = 0;
      if ( v6 == 1 )
        goto LABEL_37;
      v9 = v6 - (v18 == 92);
      if ( (v9 & 1) != 0 )
      {
        ERR_put_error(13, 103, 145, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
      v10 = v9 >> 1;
      v22 = v10 + v19;
      if ( v10 + v19 > v23 )
      {
        if ( v20 != nullptr )
          v11 = CRYPTO_realloc(v20, v19 + 2 * v10, (int)(uintptr_t)(&unk_1B15112), 0);
        else
          v11 = CRYPTO_malloc(v19 + 2 * v10, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v11 == nullptr )
        {
          ERR_put_error(13, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          result = 0;
          if ( v20 != nullptr )
          {
            CRYPTO_free(v20);
            return 0;
          }
          return result;
        }
        v20 = v11;
        v23 = v19 + 2 * v10;
      }
      v12 = 0;
      v13 = a3;
      if ( v10 > 0 )
      {
        while ( 2 )
        {
          for ( i = 0; i != 2; ++i )
          {
            v15 = *(uint8_t *)(v13 + i);
            v16 = v15 - 48;
            if ( (unsigned int)(v15 - 48) > 9 )
            {
              if ( (unsigned int)(v15 - 97) > 5 )
              {
                if ( (unsigned int)(v15 - 65) > 5 )
                {
                  ERR_put_error(13, 103, 141, (int)(uintptr_t)(&unk_1B15112), 0);
                  return 0;
                }
                v16 = v15 - 55;
              }
              else
              {
                v16 = v15 - 87;
              }
            }
            *((uint8_t *)v20 + v19 + v12) = v16 | (16 * *((uint8_t *)v20 + v19 + v12));
          }
          ++v12;
          v13 += 2;
          if ( v12 != v10 )
            continue;
          break;
        }
      }
      if ( v18 != 92 )
        goto LABEL_41;
      v4 = BIO_gets(a1, a3, a4);
      if ( v4 <= 0 )
      {
LABEL_37:
        ERR_put_error(13, 103, 150, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
      v19 += v10;
    }
  }
  v22 = 0;
  v20 = nullptr;
LABEL_41:
  *a2 = v22;
  a2[2] = (uint32_t)(uintptr_t)(v20);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: PBEPARAM_new  (binary VA: 0x1a383c0)
// Original: PBEPARAM_new
// ----------------------------------------------------------------------------
int PBEPARAM_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PBEPARAM_it));
}

// ----------------------------------------------------------------------------
// Function: PBEPARAM_free  (binary VA: 0x1a383f0)
// Original: PBEPARAM_free
// ----------------------------------------------------------------------------
int PBEPARAM_free(char a1)
{
  return ASN1_item_free(a1, PBEPARAM_it);
}

// ----------------------------------------------------------------------------
// Function: PBE2PARAM_new  (binary VA: 0x1a38710)
// Original: PBE2PARAM_new
// ----------------------------------------------------------------------------
int PBE2PARAM_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PBE2PARAM_it));
}

// ----------------------------------------------------------------------------
// Function: PBE2PARAM_free  (binary VA: 0x1a38740)
// Original: PBE2PARAM_free
// ----------------------------------------------------------------------------
int PBE2PARAM_free(char a1)
{
  return ASN1_item_free(a1, PBE2PARAM_it);
}

// ----------------------------------------------------------------------------
// Function: PBKDF2PARAM_new  (binary VA: 0x1a387f0)
// Original: PBKDF2PARAM_new
// ----------------------------------------------------------------------------
int PBKDF2PARAM_new()
{
  return ASN1_item_new((int)(uintptr_t)(&PBKDF2PARAM_it));
}

// ----------------------------------------------------------------------------
// Function: PBKDF2PARAM_free  (binary VA: 0x1a38820)
// Original: PBKDF2PARAM_free
// ----------------------------------------------------------------------------
int PBKDF2PARAM_free(char a1)
{
  return ASN1_item_free(a1, PBKDF2PARAM_it);
}

// ----------------------------------------------------------------------------
// Function: sub_1A39440  (binary VA: 0x1a39440)
// Original: sub_1A39440
// ----------------------------------------------------------------------------
int sub_1A39440(int *a1, int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4;
  unsigned int v5;
  int result;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  uint32_t v18[2];
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v18[1] = a3 & 0x3FFFFFFF;
  v18[0] = 0;
  v19 = 2 * (a3 & 0x3FFFFFFF);
  v22 = (4 * a3) ^ a3 & 0x3FFFFFFF;
  v21 = 4 * a3;
  v20 = a3 & 0x3FFFFFFF ^ v19;
  v24 = v20 ^ (4 * a3);
  v23 = (4 * a3) ^ v19;
  v4 = v18[(a4 >> 3) & 7];
  v5 = v18[(a4 >> 6) & 7];
  v8 = v18[(a4 >> 9) & 7];
  v9 = v18[(a4 >> 12) & 7];
  v10 = v18[(a4 >> 15) & 7];
  v11 = v18[(a4 >> 18) & 7];
  v12 = v18[(a4 >> 21) & 7];
  v13 = v18[HIBYTE(a4) & 7];
  v14 = v18[(a4 >> 27) & 7];
  v15 = v18[a4 >> 30];
  result = (v14 << 27)
         ^ (v13 << 24)
         ^ (v12 << 21)
         ^ (v11 << 18)
         ^ (v10 << 15)
         ^ (v9 << 12)
         ^ (v8 << 9)
         ^ (v5 << 6)
         ^ (8 * v4)
         ^ v18[a4 & 7]
         ^ (v15 << 30);
  v7 = (v14 >> 5)
     ^ (v13 >> 8)
     ^ (v12 >> 11)
     ^ (v11 >> 14)
     ^ (v10 >> 17)
     ^ (v9 >> 20)
     ^ (v8 >> 23)
     ^ (v15 >> 2)
     ^ (v5 >> 26)
     ^ (v4 >> 29);
  if ( (a3 & 0x40000000) != 0 )
  {
    result ^= a4 << 30;
    v7 ^= a4 >> 2;
  }
  if ( ((a3 >> 30) & 2) != 0 )
  {
    result ^= a4 << 31;
    v7 ^= a4 >> 1;
  }
  *a1 = v7;
  *a2 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3AF80  (binary VA: 0x1a3af80)
// Original: sub_1A3AF80
// ----------------------------------------------------------------------------
bool sub_1A3AF80(unsigned int **a1, int a2)
{
  int i;
  unsigned int v4;
  int v5;
  uint16_t v8[2061];

  while ( BN_rand((void **)a1, a2, 1, 1) != 0 )
  {
    for ( i = 0; i != 2047; ++i )
      v8[i] = BN_mod_word(a1, (uint16_t)word_1D335E2[i]);
    v4 = 0;
    while ( 2 )
    {
      v5 = 0;
      while ( (v4 + (uint16_t)v8[v5]) % (uint16_t)word_1D335E2[v5] > 1 )
      {
        if ( ++v5 == 2047 )
          return BN_add_word(a1, v4) != 0;
      }
      v4 += 2;
      if ( v4 != -17862 )
        continue;
      break;
    }
  }
  return false;
}

// ----------------------------------------------------------------------------
// Function: Camellia_Ekeygen  (binary VA: 0x1a3bd50)
// Original: Camellia_Ekeygen
// ----------------------------------------------------------------------------
int Camellia_Ekeygen(int a1, uint8_t *a2, int a3)
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
  int v14;
  int v15;
  int v16;
  int64_t v17; // rdi
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int64_t v31; // rdi
  int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  int64_t v51; // rdi
  int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  int v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  int v85;
  int v86;
  int64_t v87; // 0:edx.4,4:ecx.4
  int64_t v88; // 0:edx.4,4:ecx.4

  v75 = (a2[2] << 8) ^ a2[3] ^ (a2[1] << 16) ^ (*a2 << 24);
  *(uint32_t *)a3 = v75;
  v4 = (a2[6] << 8) ^ a2[7] ^ (a2[5] << 16) ^ (a2[4] << 24);
  *(uint32_t *)(a3 + 4) = v4;
  v76 = v4;
  v5 = (a2[10] << 8) ^ a2[11] ^ (a2[9] << 16) ^ (a2[8] << 24);
  *(uint32_t *)(a3 + 8) = v5;
  v70 = v5;
  v71 = (a2[14] << 8) ^ a2[15] ^ (a2[13] << 16) ^ (a2[12] << 24);
  *(uint32_t *)(a3 + 12) = v71;
  if ( a1 == 128 )
  {
    v66 = v71;
    v72 = v5;
    v10 = v4;
    v9 = v75;
    v78 = 0;
    v81 = 0;
  }
  else
  {
    v6 = (a2[18] << 8) ^ a2[19] ^ (a2[17] << 16) ^ (a2[16] << 24);
    *(uint32_t *)(a3 + 32) = v6;
    v7 = (a2[22] << 8) ^ a2[23] ^ (a2[21] << 16) ^ (a2[20] << 24);
    *(uint32_t *)(a3 + 36) = v7;
    if ( a1 == 192 )
    {
      v8 = ~v6;
      *(uint32_t *)(a3 + 40) = ~v6;
      v65 = ~v7;
      *(uint32_t *)(a3 + 44) = ~v7;
    }
    else
    {
      v8 = (a2[26] << 8) ^ a2[27] ^ (a2[25] << 16) ^ (a2[24] << 24);
      *(uint32_t *)(a3 + 40) = v8;
      v65 = (a2[30] << 8) ^ a2[31] ^ (a2[29] << 16) ^ (a2[28] << 24);
      *(uint32_t *)(a3 + 44) = v65;
    }
    v9 = v75 ^ v6;
    v10 = v76 ^ v7;
    v72 = v5 ^ v8;
    v66 = v71 ^ v65;
    v81 = v10 ^ v76;
    v78 = v9 ^ v75;
  }
  v11 = dword_1D34DE0[(uint8_t)((v9 ^ 0xA09E667F) >> 16)]
      ^ dword_1D351E0[(uint8_t)((uint16_t)(v9 ^ 0x667F) >> 8)]
      ^ dword_1D345E0[(v9 ^ 0xA09E667F) >> 24]
      ^ dword_1D349E0[(uint8_t)v9 ^ 0x7F];
  v12 = v11
      ^ dword_1D351E0[(uint8_t)((v10 ^ 0x3BCC908Bu) >> 16)]
      ^ dword_1D349E0[(uint8_t)((uint16_t)(v10 ^ 0x908B) >> 8)]
      ^ dword_1D34DE0[(v10 ^ 0x3BCC908Bu) >> 24]
      ^ dword_1D345E0[(uint8_t)v10 ^ 0x8B];
  v73 = v12 ^ v72;
  v54 = v66 ^ v12 ^ __builtin_rotateleft32(v11, 24);
  v59 = dword_1D34DE0[(uint8_t)((v73 ^ 0xB67AE858) >> 16)]
      ^ dword_1D351E0[(uint8_t)((uint16_t)(v73 ^ 0xE858) >> 8)]
      ^ dword_1D345E0[(v73 ^ 0xB67AE858) >> 24]
      ^ dword_1D349E0[(uint8_t)v73 ^ 0x58];
  v13 = v59
      ^ dword_1D351E0[(uint8_t)((v54 ^ 0x4CAA73B2u) >> 16)]
      ^ dword_1D349E0[(uint8_t)((uint16_t)(v54 ^ 0x73B2) >> 8)]
      ^ dword_1D34DE0[(v54 ^ 0x4CAA73B2u) >> 24]
      ^ dword_1D345E0[(uint8_t)v54 ^ 0xB2];
  v79 = v13 ^ v78;
  v60 = v13 ^ v81 ^ __builtin_rotateleft32(v59, 24);
  v67 = dword_1D34DE0[(uint8_t)((v79 ^ 0xC6EF372F) >> 16)]
      ^ dword_1D351E0[(uint8_t)((uint16_t)(v79 ^ 0x372F) >> 8)]
      ^ dword_1D345E0[(v79 ^ 0xC6EF372F) >> 24]
      ^ dword_1D349E0[(uint8_t)v79 ^ 0x2F];
  v14 = __builtin_rotateleft32(v67, 24) ^ v71 ^ v54;
  v15 = v67
      ^ dword_1D351E0[(uint8_t)((v60 ^ 0xE94F82BE) >> 16)]
      ^ dword_1D349E0[(uint8_t)((uint16_t)(v60 ^ 0x82BE) >> 8)]
      ^ dword_1D34DE0[(v60 ^ 0xE94F82BE) >> 24]
      ^ dword_1D345E0[(uint8_t)v60 ^ 0xBE];
  v74 = v15 ^ v5 ^ v73;
  v55 = v15 ^ v14;
  v68 = dword_1D34DE0[(uint8_t)((v74 ^ 0x54FF53A5) >> 16)]
      ^ dword_1D351E0[(uint8_t)((uint16_t)(v74 ^ 0x53A5) >> 8)]
      ^ dword_1D345E0[(v74 ^ 0x54FF53A5) >> 24]
      ^ dword_1D349E0[(uint8_t)v74 ^ 0xA5];
  v16 = v68
      ^ dword_1D351E0[(uint8_t)((v15 ^ v14 ^ 0xF1D36F1C) >> 16)]
      ^ dword_1D349E0[(uint8_t)((uint16_t)(v15 ^ v14 ^ 0x6F1C) >> 8)]
      ^ dword_1D34DE0[(v15 ^ v14 ^ 0xF1D36F1C) >> 24]
      ^ dword_1D345E0[(uint8_t)(v15 ^ v14) ^ 0x1C];
  HIDWORD(v17) = v16 ^ v79;
  LODWORD(v17) = v60 ^ v16 ^ __builtin_rotateleft32(v68, 24);
  v80 = v16 ^ v79;
  v69 = v17;
  if ( a1 == 128 )
  {
    *(uint32_t *)(a3 + 16) = HIDWORD(v17);
    *(uint32_t *)(a3 + 24) = v74;
    *(uint32_t *)(a3 + 28) = v55;
    HIDWORD(v17) = v17 >> 17;
    *(uint32_t *)(a3 + 20) = v17;
    v37 = (v74 >> 17) | ((uint32_t)v17 << 15);
    *(uint32_t *)(a3 + 52) = v37;
    LODWORD(v17) = (v74 << 15) | (v55 >> 17);
    *(uint32_t *)(a3 + 56) = v17;
    *(uint32_t *)(a3 + 48) = HIDWORD(v17);
    v38 = (v55 << 15) | (v80 >> 17);
    *(uint32_t *)(a3 + 60) = v38;
    v64 = (HIDWORD(v17) << 15) | (v37 >> 17);
    v39 = ((unsigned int)v17 >> 17) | (v37 << 15);
    *(uint32_t *)(a3 + 68) = v39;
    LODWORD(v17) = ((uint32_t)v17 << 15) | (v38 >> 17);
    HIDWORD(v17) = (v38 << 15) | (HIDWORD(v17) >> 17);
    *(uint32_t *)(a3 + 64) = v64;
    *(uint64_t *)(a3 + 72) = v17;
    v40 = v39;
    v41 = ((unsigned int)v17 >> 17) | (v39 << 15);
    *(uint32_t *)(a3 + 100) = v41;
    LODWORD(v17) = ((uint32_t)v17 << 15) | (HIDWORD(v17) >> 17);
    v42 = (v64 << 15) | (v40 >> 17);
    *(uint32_t *)(a3 + 96) = v42;
    HIDWORD(v17) = (v64 >> 17) | (HIDWORD(v17) << 15);
    HIDWORD(v88) = (v42 << 15) | (v41 >> 17);
    LODWORD(v88) = (v41 << 15) | ((unsigned int)v17 >> 17);
    *(uint32_t *)(a3 + 112) = HIDWORD(v88);
    LODWORD(v17) = ((uint32_t)v17 << 15) | (HIDWORD(v17) >> 17);
    HIDWORD(v17) = (v42 >> 17) | (HIDWORD(v17) << 15);
    *(uint64_t *)(a3 + 120) = v17;
    v43 = (4 * v88) | ((unsigned int)v17 >> 30);
    *(uint32_t *)(a3 + 116) = v88;
    LODWORD(v17) = (4 * v17) | (HIDWORD(v17) >> 30);
    v56 = 4 * HIDWORD(v17);
    HIDWORD(v17) = HIDWORD(v88);
    *(uint32_t *)(a3 + 160) = v43;
    *(uint32_t *)(a3 + 164) = v17;
    HIDWORD(v88) = v88 >> 30;
    *(uint32_t *)(a3 + 172) = HIDWORD(v88);
    HIDWORD(v17) = v56 | (HIDWORD(v17) >> 30);
    *(uint32_t *)(a3 + 168) = HIDWORD(v17);
    *(uint32_t *)(a3 + 196) = ((uint32_t)v17 << 17) | (HIDWORD(v17) >> 15);
    *(uint32_t *)(a3 + 200) = (HIDWORD(v17) << 17) | (HIDWORD(v88) >> 15);
    *(uint32_t *)(a3 + 204) = (v43 >> 15) | (HIDWORD(v88) << 17);
    *(uint32_t *)(a3 + 192) = (v43 << 17) | ((unsigned int)v17 >> 15);
    LODWORD(v88) = (v75 << 15) | (v76 >> 17);
    HIDWORD(v88) = (v76 << 15) | (v70 >> 17);
    v44 = (v70 << 15) | (v71 >> 17);
    *(uint64_t *)(a3 + 32) = v88;
    v45 = (v75 >> 17) | (v71 << 15);
    *(uint32_t *)(a3 + 40) = v44;
    *(uint32_t *)(a3 + 44) = v45;
    v46 = ((uint32_t)v88 << 30) | (HIDWORD(v88) >> 2);
    *(uint32_t *)(a3 + 80) = v46;
    HIDWORD(v88) = (HIDWORD(v88) << 30) | (v44 >> 2);
    *(uint32_t *)(a3 + 84) = HIDWORD(v88);
    v47 = ((unsigned int)v88 >> 2) | (v45 << 30);
    *(uint32_t *)(a3 + 92) = v47;
    v48 = (v44 << 30) | (((v75 >> 17) | (v71 << 15)) >> 2);
    v57 = (v46 << 15) | (HIDWORD(v88) >> 17);
    *(uint32_t *)(a3 + 88) = v48;
    LODWORD(v88) = (HIDWORD(v88) << 15) | (v48 >> 17);
    v49 = (v48 << 15) | (v47 >> 17);
    v50 = (v46 >> 17) | (v47 << 15);
    *(uint32_t *)(a3 + 104) = v49;
    *(uint32_t *)(a3 + 108) = v50;
    HIDWORD(v88) = (v57 << 17) | ((unsigned int)v88 >> 15);
    *(uint32_t *)(a3 + 128) = HIDWORD(v88);
    HIDWORD(v51) = ((uint32_t)v88 << 17) | (v49 >> 15);
    *(uint32_t *)(a3 + 132) = HIDWORD(v51);
    LODWORD(v51) = (v49 << 17) | (v50 >> 15);
    *(uint32_t *)(a3 + 136) = v51;
    v52 = (v57 >> 15) | (v50 << 17);
    *(uint32_t *)(a3 + 140) = v52;
    LODWORD(v88) = __SPAIR64__(HIDWORD(v88), HIDWORD(v51)) >> 15;
    *(uint32_t *)(a3 + 144) = v88;
    HIDWORD(v51) = v51 >> 15;
    v58 = (uint32_t)v51 << 17;
    LODWORD(v51) = v52;
    v53 = (HIDWORD(v88) >> 15) | (v52 << 17);
    LODWORD(v51) = v58 | ((unsigned int)v51 >> 15);
    *(uint32_t *)(a3 + 148) = HIDWORD(v51);
    *(uint32_t *)(a3 + 152) = v51;
    *(uint32_t *)(a3 + 156) = v53;
    *(uint32_t *)(a3 + 188) = ((unsigned int)v88 >> 15) | (v53 << 17);
    *(uint32_t *)(a3 + 176) = ((uint32_t)v88 << 17) | (HIDWORD(v51) >> 15);
    *(uint32_t *)(a3 + 180) = v51 >> 15;
    *(uint32_t *)(a3 + 184) = ((uint32_t)v51 << 17) | (v53 >> 15);
    return 3;
  }
  else
  {
    v86 = *(uint32_t *)(a3 + 36) ^ v17;
    v85 = *(uint32_t *)(a3 + 32) ^ v80;
    v82 = dword_1D34DE0[(uint8_t)((v85 ^ 0x10E527FAu) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(v85 ^ 0x27FA) >> 8)]
        ^ dword_1D345E0[(v85 ^ 0x10E527FAu) >> 24]
        ^ dword_1D349E0[(uint8_t)v85 ^ 0xFA];
    v18 = v82
        ^ dword_1D351E0[(uint8_t)((v86 ^ 0xDE682D1D) >> 16)]
        ^ dword_1D349E0[(uint8_t)((uint16_t)(v86 ^ 0x2D1D) >> 8)]
        ^ dword_1D34DE0[(v86 ^ 0xDE682D1D) >> 24]
        ^ dword_1D345E0[(uint8_t)v86 ^ 0x1D];
    v77 = v18 ^ *(uint32_t *)(a3 + 40) ^ v74;
    v61 = v18 ^ __builtin_rotateleft32(v82, 24) ^ *(uint32_t *)(a3 + 44) ^ v55;
    v83 = dword_1D34DE0[(uint8_t)((v77 ^ 0xB05688C2) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(v77 ^ 0x88C2) >> 8)]
        ^ dword_1D345E0[(v77 ^ 0xB05688C2) >> 24]
        ^ dword_1D349E0[(uint8_t)v77 ^ 0xC2];
    v19 = v83
        ^ dword_1D351E0[(uint8_t)((v61 ^ 0xB3E6C1FD) >> 16)]
        ^ dword_1D349E0[(uint8_t)((uint16_t)(v61 ^ 0xC1FD) >> 8)]
        ^ dword_1D34DE0[(v61 ^ 0xB3E6C1FD) >> 24]
        ^ dword_1D345E0[(uint8_t)v61 ^ 0xFD];
    v20 = v86 ^ v19 ^ __builtin_rotateleft32(v83, 24);
    *(uint32_t *)(a3 + 24) = v77;
    *(uint32_t *)(a3 + 28) = v61;
    *(uint32_t *)(a3 + 20) = v20;
    v21 = ((v19 ^ v85) << 30) | (v20 >> 2);
    *(uint32_t *)(a3 + 16) = v19 ^ v85;
    *(uint32_t *)(a3 + 80) = v21;
    v22 = (v77 >> 2) | (v20 << 30);
    v23 = (v77 << 30) | (v61 >> 2);
    *(uint32_t *)(a3 + 84) = v22;
    *(uint32_t *)(a3 + 88) = v23;
    v24 = (v61 << 30) | ((v19 ^ (unsigned int)v85) >> 2);
    *(uint32_t *)(a3 + 92) = v24;
    v84 = (v23 >> 2) | (v22 << 30);
    v25 = (v21 << 30) | (v22 >> 2);
    v26 = (v23 << 30) | (v24 >> 2);
    *(uint32_t *)(a3 + 160) = v25;
    *(uint32_t *)(a3 + 168) = v26;
    v27 = (v24 << 30) | (v21 >> 2);
    *(uint32_t *)(a3 + 172) = v27;
    *(uint32_t *)(a3 + 164) = v84;
    *(uint32_t *)(a3 + 264) = (v27 << 19) | (v25 >> 13);
    v28 = *(uint32_t *)(a3 + 32);
    *(uint32_t *)(a3 + 268) = (v84 >> 13) | (v25 << 19);
    v29 = *(uint32_t *)(a3 + 36) >> 17;
    *(uint32_t *)(a3 + 260) = (v26 << 19) | (v27 >> 13);
    HIDWORD(v87) = (v28 << 15) | v29;
    v30 = (v26 >> 13) | (v84 << 19);
    LODWORD(v87) = (*(uint32_t *)(a3 + 36) << 15) | (*(uint32_t *)(a3 + 40) >> 17);
    LODWORD(v31) = *(uint32_t *)(a3 + 44);
    HIDWORD(v31) = *(uint32_t *)(a3 + 40);
    *(uint32_t *)(a3 + 256) = v30;
    LODWORD(v31) = v31 >> 17;
    HIDWORD(v31) = *(uint32_t *)(a3 + 44);
    v32 = *(uint32_t *)(a3 + 32) >> 17;
    *(uint32_t *)(a3 + 32) = HIDWORD(v87);
    *(uint32_t *)(a3 + 36) = v87;
    HIDWORD(v31) = v32 | (HIDWORD(v31) << 15);
    *(uint64_t *)(a3 + 40) = v31;
    v33 = v87 >> 17;
    LODWORD(v87) = ((uint32_t)v87 << 15) | ((unsigned int)v31 >> 17);
    *(uint32_t *)(a3 + 68) = v87;
    v62 = (uint32_t)v31 << 15;
    LODWORD(v31) = HIDWORD(v31);
    *(uint32_t *)(a3 + 64) = v33;
    HIDWORD(v31) = (HIDWORD(v87) >> 17) | (HIDWORD(v31) << 15);
    LODWORD(v31) = v62 | ((unsigned int)v31 >> 17);
    *(uint64_t *)(a3 + 72) = v31;
    HIDWORD(v87) = (v33 << 30) | ((unsigned int)v87 >> 2);
    *(uint32_t *)(a3 + 144) = HIDWORD(v87);
    LODWORD(v87) = ((uint32_t)v87 << 30) | ((unsigned int)v31 >> 2);
    v63 = (uint32_t)v31 << 30;
    LODWORD(v31) = HIDWORD(v31);
    *(uint32_t *)(a3 + 148) = v87;
    HIDWORD(v31) = (v33 >> 2) | (HIDWORD(v31) << 30);
    LODWORD(v31) = v63 | ((unsigned int)v31 >> 2);
    *(uint64_t *)(a3 + 152) = v31;
    *(uint32_t *)(a3 + 216) = (4 * HIDWORD(v31)) | (HIDWORD(v87) >> 30);
    *(uint32_t *)(a3 + 220) = v87 >> 30;
    *(uint32_t *)(a3 + 208) = (4 * v87) | ((unsigned int)v31 >> 30);
    *(uint32_t *)(a3 + 212) = (4 * v31) | (HIDWORD(v31) >> 30);
    HIDWORD(v31) = (v80 << 15) | (v69 >> 17);
    LODWORD(v87) = (v74 >> 17) | (v69 << 15);
    *(uint32_t *)(a3 + 48) = HIDWORD(v31);
    *(uint32_t *)(a3 + 52) = v87;
    LODWORD(v31) = (v74 << 15) | (v55 >> 17);
    *(uint32_t *)(a3 + 56) = v31;
    v34 = (v55 << 15) | (v80 >> 17);
    *(uint32_t *)(a3 + 60) = v34;
    HIDWORD(v87) = (HIDWORD(v31) << 30) | ((unsigned int)v87 >> 2);
    *(uint32_t *)(a3 + 112) = HIDWORD(v87);
    *(uint32_t *)(a3 + 204) = HIDWORD(v87);
    LODWORD(v87) = ((unsigned int)v31 >> 2) | ((uint32_t)v87 << 30);
    *(uint32_t *)(a3 + 116) = v87;
    *(uint32_t *)(a3 + 192) = v87;
    LODWORD(v31) = ((uint32_t)v31 << 30) | (v34 >> 2);
    *(uint32_t *)(a3 + 120) = v31;
    *(uint32_t *)(a3 + 196) = v31;
    HIDWORD(v31) = (v34 << 30) | (HIDWORD(v31) >> 2);
    *(uint32_t *)(a3 + 124) = HIDWORD(v31);
    *(uint32_t *)(a3 + 200) = HIDWORD(v31);
    *(uint32_t *)(a3 + 232) = (HIDWORD(v31) << 17) | (HIDWORD(v87) >> 15);
    *(uint32_t *)(a3 + 236) = v87 >> 15;
    *(uint32_t *)(a3 + 228) = ((uint32_t)v31 << 17) | (HIDWORD(v31) >> 15);
    HIDWORD(v87) = (v76 << 13) | (v70 >> 19);
    *(uint32_t *)(a3 + 224) = ((unsigned int)v31 >> 15) | ((uint32_t)v87 << 17);
    LODWORD(v87) = (v70 << 13) | (v71 >> 19);
    LODWORD(v31) = (v71 << 13) | (v75 >> 19);
    *(uint32_t *)(a3 + 96) = HIDWORD(v87);
    *(uint32_t *)(a3 + 100) = v87;
    HIDWORD(v31) = (v76 >> 19) | (v75 << 13);
    *(uint64_t *)(a3 + 104) = v31;
    v35 = v87 >> 17;
    *(uint32_t *)(a3 + 128) = v35;
    LODWORD(v87) = ((uint32_t)v87 << 15) | ((unsigned int)v31 >> 17);
    *(uint32_t *)(a3 + 132) = v87;
    HIDWORD(v31) = (HIDWORD(v87) >> 17) | (HIDWORD(v31) << 15);
    LODWORD(v31) = ((uint32_t)v31 << 15) | (((v76 >> 19) | (v75 << 13)) >> 17);
    *(uint64_t *)(a3 + 136) = v31;
    HIDWORD(v87) = (v35 << 17) | ((unsigned int)v87 >> 15);
    *(uint32_t *)(a3 + 176) = HIDWORD(v87);
    LODWORD(v87) = ((uint32_t)v87 << 17) | ((unsigned int)v31 >> 15);
    *(uint32_t *)(a3 + 180) = v87;
    LODWORD(v31) = ((uint32_t)v31 << 17) | (HIDWORD(v31) >> 15);
    HIDWORD(v31) = (v35 >> 15) | (HIDWORD(v31) << 17);
    *(uint64_t *)(a3 + 184) = v31;
    *(uint32_t *)(a3 + 240) = (4 * v87) | ((unsigned int)v31 >> 30);
    *(uint32_t *)(a3 + 244) = (4 * v31) | (HIDWORD(v31) >> 30);
    *(uint32_t *)(a3 + 252) = v87 >> 30;
    *(uint32_t *)(a3 + 248) = (4 * HIDWORD(v31)) | (HIDWORD(v87) >> 30);
    return 4;
  }
}

// ----------------------------------------------------------------------------
// Function: Camellia_EncryptBlock_Rounds  (binary VA: 0x1a3cb60)
// Original: Camellia_EncryptBlock_Rounds
// ----------------------------------------------------------------------------
unsigned int Camellia_EncryptBlock_Rounds(int a1, uint8_t *a2, uint32_t *a3, uint8_t *a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v31;
  int v32;
  int v33;
  int v34;
  int i;
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

  v44 = (a2[2] << 8) ^ (a2[1] << 16) ^ (*a2 << 24) ^ *a3 ^ a2[3];
  v39 = (a2[6] << 8) ^ (a2[5] << 16) ^ (a2[4] << 24) ^ a3[1] ^ a2[7];
  v33 = (a2[10] << 8) ^ (a2[9] << 16) ^ (a2[8] << 24) ^ a3[2] ^ a2[11];
  v4 = a3 + 4;
  for ( i = (a2[14] << 8) ^ (a2[13] << 16) ^ (a2[12] << 24) ^ a3[3] ^ a2[15]; ; i = v22 ^ __builtin_rotateleft32(v5, 1) )
  {
    v7 = v4[1] ^ v39;
    v42 = dword_1D34DE0[(uint8_t)((*v4 ^ (unsigned int)v44) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(*(uint16_t *)v4 ^ v44) >> 8)]
        ^ dword_1D345E0[(*v4 ^ (unsigned int)v44) >> 24]
        ^ dword_1D349E0[(uint8_t)(*(uint8_t *)v4 ^ v44)];
    v8 = v42
       ^ dword_1D351E0[BYTE2(v7)]
       ^ dword_1D349E0[BYTE1(v7)]
       ^ dword_1D34DE0[HIBYTE(v7)]
       ^ dword_1D345E0[(uint8_t)v7];
    v9 = v8 ^ v33;
    v10 = i ^ v8 ^ __builtin_rotateleft32(v42, 24);
    v11 = v10 ^ v4[3];
    v31 = dword_1D34DE0[(uint8_t)((v8 ^ (unsigned int)v33 ^ v4[2]) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(v8 ^ v33 ^ *((uint16_t *)v4 + 4)) >> 8)]
        ^ dword_1D345E0[(v8 ^ (unsigned int)v33 ^ v4[2]) >> 24]
        ^ dword_1D349E0[(uint8_t)(v8 ^ v33 ^ *((uint8_t *)v4 + 8))];
    v12 = v31
        ^ dword_1D351E0[BYTE2(v11)]
        ^ dword_1D349E0[BYTE1(v11)]
        ^ dword_1D34DE0[HIBYTE(v11)]
        ^ dword_1D345E0[(uint8_t)v11];
    v36 = v12 ^ v39 ^ __builtin_rotateleft32(v31, 24);
    v13 = v12 ^ v44 ^ v4[4];
    v45 = v12 ^ v44;
    v14 = v4[5] ^ v36;
    v32 = dword_1D34DE0[BYTE2(v13)]
        ^ dword_1D351E0[BYTE1(v13)]
        ^ dword_1D345E0[HIBYTE(v13)]
        ^ dword_1D349E0[(uint8_t)v13];
    v15 = v32
        ^ dword_1D351E0[BYTE2(v14)]
        ^ dword_1D349E0[BYTE1(v14)]
        ^ dword_1D34DE0[HIBYTE(v14)]
        ^ dword_1D345E0[(uint8_t)v14];
    v34 = v15 ^ v9;
    v16 = v15 ^ v9 ^ v4[6];
    v40 = v15 ^ v10 ^ __builtin_rotateleft32(v32, 24);
    v17 = v4[7] ^ v40;
    v43 = dword_1D34DE0[BYTE2(v16)]
        ^ dword_1D351E0[BYTE1(v16)]
        ^ dword_1D345E0[HIBYTE(v16)]
        ^ dword_1D349E0[(uint8_t)v16];
    v18 = v43
        ^ dword_1D351E0[BYTE2(v17)]
        ^ dword_1D349E0[BYTE1(v17)]
        ^ dword_1D34DE0[HIBYTE(v17)]
        ^ dword_1D345E0[(uint8_t)v17];
    v46 = v18 ^ v45;
    v19 = v36 ^ v18 ^ __builtin_rotateleft32(v43, 24);
    v20 = v19 ^ v4[9];
    v37 = dword_1D34DE0[(uint8_t)((v4[8] ^ (unsigned int)v46) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(*((uint16_t *)v4 + 16) ^ v46) >> 8)]
        ^ dword_1D345E0[(v4[8] ^ (unsigned int)v46) >> 24]
        ^ dword_1D349E0[(uint8_t)(*((uint8_t *)v4 + 32) ^ v46)];
    v21 = v37
        ^ dword_1D351E0[BYTE2(v20)]
        ^ dword_1D349E0[BYTE1(v20)]
        ^ dword_1D34DE0[HIBYTE(v20)]
        ^ dword_1D345E0[(uint8_t)v20];
    v22 = v21 ^ v40 ^ __builtin_rotateleft32(v37, 24);
    v38 = v21 ^ v34;
    v41 = dword_1D34DE0[(uint8_t)((v21 ^ (unsigned int)v34 ^ v4[10]) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(v21 ^ v34 ^ *((uint16_t *)v4 + 20)) >> 8)]
        ^ dword_1D345E0[(v21 ^ (unsigned int)v34 ^ v4[10]) >> 24]
        ^ dword_1D349E0[(uint8_t)(v21 ^ v34 ^ *((uint8_t *)v4 + 40))];
    v23 = v41
        ^ dword_1D351E0[(uint8_t)(((unsigned int)v22 ^ v4[11]) >> 16)]
        ^ dword_1D349E0[(uint8_t)((uint16_t)(v22 ^ *((uint16_t *)v4 + 22)) >> 8)]
        ^ dword_1D34DE0[((unsigned int)v22 ^ v4[11]) >> 24]
        ^ dword_1D345E0[(uint8_t)(v22 ^ *((uint8_t *)v4 + 44))];
    v24 = v23 ^ v46;
    v25 = v19 ^ v23 ^ __builtin_rotateleft32(v41, 24);
    if ( v4 == &a3[16 * a1 - 12] )
      break;
    v39 = v25 ^ __builtin_rotateleft32(v24 & v4[12], 1);
    v33 = v38 ^ (v22 | v4[15]);
    v5 = v4[14] & v33;
    v6 = v4[13] | v39;
    v4 += 16;
    v44 = v24 ^ v6;
  }
  v26 = v4[12] ^ v38;
  v27 = v4[13] ^ v22;
  v28 = v4[14] ^ v24;
  v29 = v4[15] ^ v25;
  a4[3] = v26;
  *a4 = HIBYTE(v26);
  a4[15] = v29;
  a4[1] = BYTE2(v26);
  a4[2] = BYTE1(v26);
  a4[11] = v28;
  a4[4] = HIBYTE(v27);
  a4[5] = BYTE2(v27);
  a4[6] = BYTE1(v27);
  a4[7] = v27;
  a4[8] = HIBYTE(v28);
  a4[9] = BYTE2(v28);
  a4[10] = BYTE1(v28);
  a4[12] = HIBYTE(v29);
  a4[13] = BYTE2(v29);
  a4[14] = BYTE1(v29);
  return v29 >> 8;
}

// ----------------------------------------------------------------------------
// Function: Camellia_EncryptBlock  (binary VA: 0x1a3d100)
// Original: Camellia_EncryptBlock
// ----------------------------------------------------------------------------
unsigned int Camellia_EncryptBlock(int a1, uint8_t *a2, uint32_t *a3, uint8_t *a4)
{
  return Camellia_EncryptBlock_Rounds((a1 != 128) + 3, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: Camellia_DecryptBlock_Rounds  (binary VA: 0x1a3d150)
// Original: Camellia_DecryptBlock_Rounds
// ----------------------------------------------------------------------------
unsigned int Camellia_DecryptBlock_Rounds(int a1, uint8_t *a2, int a3, uint8_t *a4)
{
  uint32_t *i;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
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
  unsigned int v47;

  v44 = *(uint32_t *)(a3 + (a1 << 6)) ^ (a2[2] << 8) ^ a2[3] ^ (a2[1] << 16) ^ (*a2 << 24);
  v39 = *(uint32_t *)(a3 + (a1 << 6) + 4) ^ (a2[6] << 8) ^ a2[7] ^ (a2[5] << 16) ^ (a2[4] << 24);
  v32 = *(uint32_t *)(a3 + (a1 << 6) + 8) ^ (a2[10] << 8) ^ a2[11] ^ (a2[9] << 16) ^ (a2[8] << 24);
  v35 = *(uint32_t *)(a3 + (a1 << 6) + 12) ^ (a2[14] << 8) ^ a2[15] ^ (a2[13] << 16) ^ (a2[12] << 24);
  v47 = (unsigned int)((a1 << 6) - 64) >> 6;
  for ( i = (uint32_t *)(a3 + (a1 << 6)); ; v35 = v20 ^ __builtin_rotateleft32(*i & v32, 1) )
  {
    v5 = *(i - 1) ^ v39;
    v42 = dword_1D34DE0[(uint8_t)((*(i - 2) ^ (unsigned int)v44) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(*((uint16_t *)i - 4) ^ v44) >> 8)]
        ^ dword_1D345E0[(*(i - 2) ^ (unsigned int)v44) >> 24]
        ^ dword_1D349E0[(uint8_t)(*((uint8_t *)i - 8) ^ v44)];
    v6 = v42
       ^ dword_1D351E0[BYTE2(v5)]
       ^ dword_1D349E0[BYTE1(v5)]
       ^ dword_1D34DE0[HIBYTE(v5)]
       ^ dword_1D345E0[(uint8_t)v5];
    v7 = v6 ^ v32 ^ *(i - 4);
    v33 = v6 ^ v32;
    v8 = v35 ^ v6 ^ __builtin_rotateleft32(v42, 24);
    v9 = v8 ^ *(i - 3);
    v30 = dword_1D34DE0[BYTE2(v7)]
        ^ dword_1D351E0[BYTE1(v7)]
        ^ dword_1D345E0[HIBYTE(v7)]
        ^ dword_1D349E0[(uint8_t)v7];
    v10 = v30
        ^ dword_1D351E0[BYTE2(v9)]
        ^ dword_1D349E0[BYTE1(v9)]
        ^ dword_1D34DE0[HIBYTE(v9)]
        ^ dword_1D345E0[(uint8_t)v9];
    v11 = v10 ^ v44 ^ *(i - 6);
    v36 = v10 ^ v39 ^ __builtin_rotateleft32(v30, 24);
    v45 = v10 ^ v44;
    v12 = *(i - 5) ^ v36;
    v31 = dword_1D34DE0[BYTE2(v11)]
        ^ dword_1D351E0[BYTE1(v11)]
        ^ dword_1D345E0[HIBYTE(v11)]
        ^ dword_1D349E0[(uint8_t)v11];
    v13 = v31
        ^ dword_1D351E0[BYTE2(v12)]
        ^ dword_1D349E0[BYTE1(v12)]
        ^ dword_1D34DE0[HIBYTE(v12)]
        ^ dword_1D345E0[(uint8_t)v12];
    v34 = v13 ^ v33;
    v14 = v34 ^ *(i - 8);
    v40 = v13 ^ v8 ^ __builtin_rotateleft32(v31, 24);
    v15 = *(i - 7) ^ v40;
    v43 = dword_1D34DE0[BYTE2(v14)]
        ^ dword_1D351E0[BYTE1(v14)]
        ^ dword_1D345E0[HIBYTE(v14)]
        ^ dword_1D349E0[(uint8_t)v14];
    v16 = v43
        ^ dword_1D351E0[BYTE2(v15)]
        ^ dword_1D349E0[BYTE1(v15)]
        ^ dword_1D34DE0[HIBYTE(v15)]
        ^ dword_1D345E0[(uint8_t)v15];
    v46 = v16 ^ v45;
    v17 = v36 ^ v16 ^ __builtin_rotateleft32(v43, 24);
    v18 = v17 ^ *(i - 9);
    v37 = dword_1D34DE0[(uint8_t)((*(i - 10) ^ (unsigned int)v46) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(*((uint16_t *)i - 20) ^ v46) >> 8)]
        ^ dword_1D345E0[(*(i - 10) ^ (unsigned int)v46) >> 24]
        ^ dword_1D349E0[(uint8_t)(*((uint8_t *)i - 40) ^ v46)];
    v19 = v37
        ^ dword_1D351E0[BYTE2(v18)]
        ^ dword_1D349E0[BYTE1(v18)]
        ^ dword_1D34DE0[HIBYTE(v18)]
        ^ dword_1D345E0[(uint8_t)v18];
    v20 = v19 ^ v40 ^ __builtin_rotateleft32(v37, 24);
    v38 = v19 ^ v34;
    v41 = dword_1D34DE0[(uint8_t)((v19 ^ (unsigned int)v34 ^ *(i - 12)) >> 16)]
        ^ dword_1D351E0[(uint8_t)((uint16_t)(v19 ^ v34 ^ *((uint16_t *)i - 24)) >> 8)]
        ^ dword_1D345E0[(v19 ^ (unsigned int)v34 ^ *(i - 12)) >> 24]
        ^ dword_1D349E0[(uint8_t)(v19 ^ v34 ^ *((uint8_t *)i - 48))];
    v21 = v41
        ^ dword_1D351E0[(uint8_t)(((unsigned int)v20 ^ *(i - 11)) >> 16)]
        ^ dword_1D349E0[(uint8_t)((uint16_t)(v20 ^ *((uint16_t *)i - 22)) >> 8)]
        ^ dword_1D34DE0[((unsigned int)v20 ^ *(i - 11)) >> 24]
        ^ dword_1D345E0[(uint8_t)(v20 ^ *((uint8_t *)i - 44))];
    v22 = v21 ^ v46;
    v23 = v17 ^ v21 ^ __builtin_rotateleft32(v41, 24);
    if ( i == (uint32_t *)(a3 + (a1 << 6) - (v47 << 6)) )
      break;
    i -= 16;
    v39 = v23 ^ __builtin_rotateleft32(v22 & i[2], 1);
    v32 = v38 ^ (v20 | i[1]);
    v44 = v22 ^ (i[3] | v39);
  }
  v24 = a3 + (a1 << 6) - (v47 << 6);
  v25 = *(uint32_t *)(v24 - 64) ^ v38;
  v26 = *(uint32_t *)(v24 - 60) ^ v20;
  v27 = *(uint32_t *)(v24 - 56) ^ v22;
  v28 = *(uint32_t *)(v24 - 52) ^ v23;
  *a4 = HIBYTE(v25);
  a4[3] = v25;
  a4[1] = BYTE2(v25);
  a4[2] = BYTE1(v25);
  a4[11] = v27;
  a4[4] = HIBYTE(v26);
  a4[15] = v28;
  a4[5] = BYTE2(v26);
  a4[6] = BYTE1(v26);
  a4[7] = v26;
  a4[8] = HIBYTE(v27);
  a4[9] = BYTE2(v27);
  a4[10] = BYTE1(v27);
  a4[12] = HIBYTE(v28);
  a4[13] = BYTE2(v28);
  a4[14] = BYTE1(v28);
  return v28 >> 8;
}

// ----------------------------------------------------------------------------
// Function: Camellia_DecryptBlock  (binary VA: 0x1a3d720)
// Original: Camellia_DecryptBlock
// ----------------------------------------------------------------------------
unsigned int Camellia_DecryptBlock(int a1, uint8_t *a2, int a3, uint8_t *a4)
{
  return Camellia_DecryptBlock_Rounds((a1 != 128) + 3, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_1A3D770  (binary VA: 0x1a3d770)
// Original: sub_1A3D770
// ----------------------------------------------------------------------------
int sub_1A3D770(int a1, int **a2, int a3, int a4)
{
  int result;
  int *v5;
  int v6;
  uint32_t *v7;

  result = 1;
  if ( a2 != nullptr )
  {
    v5 = *a2;
    switch ( a1 )
    {
      case 10:
        v6 = CMS_stream(a4 + 8, *a2);
        result = 0;
        if ( v6 > 0 )
        {
LABEL_11:
          v7 = CMS_dataInit(v5, *(uint8_t **)a4);
          *(uint32_t *)(a4 + 4) = (uint32_t)(uintptr_t)(v7);
          return v7 != nullptr;
        }
        break;
      case 11:
      case 13:
        return CMS_dataFinal(*a2, *(int ***)(a4 + 4)) > 0;
      case 12:
        goto LABEL_11;
      default:
        return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3D830  (binary VA: 0x1a3d830)
// Original: sub_1A3D830
// ----------------------------------------------------------------------------
int sub_1A3D830(int a1, int *a2)
{
  int v3;

  if ( a1 == 3 )
  {
    v3 = *a2;
    if ( *(uint32_t *)(*a2 + 32) != 0 )
      EVP_PKEY_free(*(void **)(*a2 + 32));
    if ( *(uint32_t *)(v3 + 28) != 0 )
      X509_free(*(uint32_t *)(v3 + 28));
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3D890  (binary VA: 0x1a3d890)
// Original: sub_1A3D890
// ----------------------------------------------------------------------------
int sub_1A3D890(int a1, int **a2)
{
  int *v3;
  int v4;
  int v5;
  int v6;

  if ( a1 == 2 )
  {
    v3 = *a2;
    v4 = **a2;
    if ( v4 != 0 )
    {
      if ( v4 == 2 )
      {
        v6 = v3[1];
        if ( *(uint32_t *)(v6 + 16) != 0 )
        {
          OPENSSL_cleanse(*(uint8_t **)(v6 + 16), *(uint32_t *)(v6 + 20));
          CRYPTO_free(*(void **)(v6 + 16));
        }
      }
    }
    else
    {
      v5 = v3[1];
      if ( *(uint32_t *)(v5 + 20) != 0 )
        EVP_PKEY_free(*(void **)(v5 + 20));
      if ( *(uint32_t *)(v5 + 16) != 0 )
        X509_free(*(uint32_t *)(v5 + 16));
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: cms_CompressedData_create  (binary VA: 0x1a3de20)
// Original: cms_CompressedData_create
// ----------------------------------------------------------------------------
char *** cms_CompressedData_create(int a1)
{
  char ***v1;
  char **v2;
  char **v3;
  char ***v4;
  char v6;

  if ( a1 == 125 )
  {
    v1 = (char ***)CMS_ContentInfo_new();
    if ( v1 != nullptr )
    {
      v2 = (char **)ASN1_item_new((int)(uintptr_t)(&CMS_CompressedData_it));
      if ( v2 != nullptr )
      {
        *v1 = OBJ_nid2obj(0x312u);
        v1[1] = v2;
        *v2 = nullptr;
        v3 = OBJ_nid2obj(0x7Du);
        X509_ALGOR_set0((int)(uintptr_t)(v2[1]), (int)(uintptr_t)(v3), -1, 0);
        v4 = (char ***)v2[3];
        *v4 = OBJ_nid2obj(0x15u);
      }
      else
      {
        v6 = (char)(uintptr_t)(v1);
        v1 = nullptr;
        CMS_ContentInfo_free(v6);
      }
    }
  }
  else
  {
    v1 = nullptr;
    ERR_put_error(46, 105, 151, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: cms_CompressedData_init_bio  (binary VA: 0x1a3df20)
// Original: cms_CompressedData_init_bio
// ----------------------------------------------------------------------------
uint8_t * cms_CompressedData_init_bio(int *a1)
{
  void *v1;
  int v3[4];

  if ( OBJ_obj2nid(*a1) == 786 )
  {
    X509_ALGOR_get0(v3, nullptr, nullptr, *(uint32_t **)(a1[1] + 4));
    if ( OBJ_obj2nid(v3[0]) == 125 )
    {
      v1 = BIO_f_zlib();
      return BIO_new((int)(uintptr_t)(v1));
    }
    else
    {
      ERR_put_error(46, 106, 151, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(46, 106, 106, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: cms_DigestedData_create  (binary VA: 0x1a3e010)
// Original: cms_DigestedData_create
// ----------------------------------------------------------------------------
char *** cms_DigestedData_create(int a1)
{
  char ***v1;
  char **v2;
  char ***v3;
  char v5;

  v1 = (char ***)CMS_ContentInfo_new();
  if ( v1 != nullptr )
  {
    v2 = (char **)ASN1_item_new((int)(uintptr_t)(&CMS_DigestedData_it));
    if ( v2 != nullptr )
    {
      *v1 = OBJ_nid2obj(0x19u);
      v1[1] = v2;
      v3 = (char ***)v2[2];
      *v2 = nullptr;
      *v3 = OBJ_nid2obj(0x15u);
      cms_DigestAlgorithm_set((int)(uintptr_t)(v2[1]), a1);
    }
    else
    {
      v5 = (char)(uintptr_t)(v1);
      v1 = nullptr;
      CMS_ContentInfo_free(v5);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: cms_DigestedData_init_bio  (binary VA: 0x1a3e0c0)
// Original: cms_DigestedData_init_bio
// ----------------------------------------------------------------------------
uint32_t * cms_DigestedData_init_bio(int a1)
{
  return cms_DigestAlgorithm_init_bio(*(uint32_t **)(*(uint32_t *)(a1 + 4) + 4));
}

// ----------------------------------------------------------------------------
// Function: cms_DigestedData_do_final  (binary VA: 0x1a3e0f0)
// Original: cms_DigestedData_do_final
// ----------------------------------------------------------------------------
bool cms_DigestedData_do_final(int a1, int **a2, int a3)
{
  bool v3;
  int v4;
  int v6;
  typedef size_t _g4_t_v7;
  typedef void *_g4_t_v8[6];
  typedef char _g4_t_s1[76];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_s1)) > _g4_s2 ? (32u + sizeof(_g4_t_s1)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 32u);

  EVP_MD_CTX_init(v8);
  v3 = false;
  v4 = *(uint32_t *)(a1 + 4);
  if ( cms_DigestAlgorithm_find_ctx((int *)v8, a2, *(uint32_t **)(v4 + 4)) != 0
    && EVP_DigestFinal_ex(v8, (int)(uintptr_t)(s1), &v7) > 0 )
  {
    if ( a3 != 0 )
    {
      v6 = *(uint32_t *)(v4 + 12);
      if ( *(uint32_t *)v6 == v7 )
      {
        v3 = true;
        if ( memcmp(s1, *(const void **)(v6 + 8), *(uint32_t *)v6) != 0 )
        {
          LOWORD(v3) = 0;
          ERR_put_error(46, 117, 158, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
      else
      {
        ERR_put_error(46, 117, 121, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    else
    {
      v3 = ASN1_STRING_set(*(uint32_t *)(v4 + 12), s1, v7) != 0;
    }
  }
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v8));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: cms_EncryptedContent_init_bio  (binary VA: 0x1a3e280)
// Original: cms_EncryptedContent_init_bio
// ----------------------------------------------------------------------------
uint8_t * cms_EncryptedContent_init_bio(uint32_t *a1)
{
  int v1;
  void *v2;
  uint8_t *v3;
  bool v4;
  uint32_t *cipherbyname;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  uint8_t *v16;
  int v17;
  unsigned int v18;
  char *v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v21)) > _g4_s1 ? (32u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v22)) > _g4_s2 ? (36u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v23)) > _g4_s3 ? (36u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v24)) > _g4_s4 ? (40u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v25)) > _g4_s5 ? (44u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v26)) > _g4_s6 ? (60u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v27)) > _g4_s7 ? (64u + sizeof(_g4_t_v27)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);

  v1 = a1[3];
  v24 = (int *)a1[1];
  v2 = BIO_f_cipher();
  v3 = BIO_new((int)(uintptr_t)(v2));
  if ( v3 == nullptr )
  {
    ERR_put_error(46, 120, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3;
  }
  v4 = v1 != 0;
  BIO_ctrl(v3, 129, 0, (int)(uintptr_t)(&v26));
  if ( v4 )
  {
    cipherbyname = (uint32_t *)a1[3];
    if ( a1[4] != 0 )
      a1[3] = 0;
  }
  else
  {
    v18 = OBJ_obj2nid(*v24);
    v19 = OBJ_nid2sn(v18);
    cipherbyname = (uint32_t *)EVP_get_cipherbyname((int)(uintptr_t)(v19));
    if ( cipherbyname == nullptr )
    {
      ERR_put_error(46, 120, 148, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_35;
    }
  }
  if ( EVP_CipherInit_ex((uint32_t *)v26, cipherbyname, nullptr, 0, nullptr, v4) <= 0 )
  {
    ERR_put_error(46, 120, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_35;
  }
  if ( !v4 )
  {
    v25 = nullptr;
    if ( EVP_CIPHER_asn1_to_param(v26, v24[1]) > 0 )
      goto LABEL_8;
    ERR_put_error(46, 120, 102, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_35:
    v23 = 1;
    v6 = 0;
    goto LABEL_15;
  }
  v11 = EVP_CIPHER_CTX_cipher(v26);
  v12 = EVP_CIPHER_type(v11);
  *v24 = (int)(uintptr_t)(OBJ_nid2obj(v12));
  v13 = EVP_CIPHER_CTX_iv_length(v26);
  if ( v13 <= 0 )
  {
    v25 = nullptr;
  }
  else
  {
    v14 = RAND_pseudo_bytes((int)(uintptr_t)(v27), v13);
    v6 = 0;
    v23 = 1;
    if ( v14 <= 0 )
      goto LABEL_15;
    v25 = v27;
  }
  if ( a1[4] == 0 )
  {
    v15 = a1[5];
    if ( v15 == 0 )
    {
      v15 = EVP_CIPHER_CTX_key_length(v26);
      a1[5] = v15;
    }
    v16 = CRYPTO_malloc(v15, (int)(uintptr_t)(&unk_1B15112), 0);
    a1[4] = (uint32_t)(uintptr_t)(v16);
    if ( v16 != nullptr )
    {
      v17 = EVP_CIPHER_CTX_rand_key((uint32_t *)v26, (int)(uintptr_t)(v16));
      v6 = 0;
      v23 = 1;
      if ( v17 <= 0 )
        goto LABEL_15;
      v23 = 0;
LABEL_10:
      if ( EVP_CipherInit_ex((uint32_t *)v26, nullptr, nullptr, a1[4], v25, v4) <= 0 )
      {
        ERR_put_error(46, 120, 101, (int)(uintptr_t)(&unk_1B15112), 0);
        v6 = 0;
      }
      else
      {
        v6 = 1;
        if ( v25 != nullptr )
        {
          v7 = ASN1_TYPE_new();
          v24[1] = v7;
          if ( v7 != 0 )
          {
            v8 = EVP_CIPHER_param_to_asn1(v26, v7);
            v6 = 1;
            if ( v8 <= 0 )
            {
              ERR_put_error(46, 120, 102, (int)(uintptr_t)(&unk_1B15112), 0);
              v6 = 0;
            }
          }
          else
          {
            ERR_put_error(46, 120, 65, (int)(uintptr_t)(&unk_1B15112), 0);
            v6 = 0;
          }
        }
      }
      goto LABEL_15;
    }
    ERR_put_error(46, 120, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_35;
  }
LABEL_8:
  v22 = a1[5];
  if ( v22 == EVP_CIPHER_CTX_key_length(v26) )
  {
    v23 = 1;
    goto LABEL_10;
  }
  v23 = 1;
  if ( EVP_CIPHER_CTX_set_key_length((uint32_t *)v26, a1[5]) > 0 )
    goto LABEL_10;
  ERR_put_error(46, 120, 118, (int)(uintptr_t)(&unk_1B15112), 0);
  v6 = 0;
LABEL_15:
  v9 = (uint8_t *)a1[4];
  if ( v23 != 0 && v9 != nullptr )
  {
    v21 = v6;
    OPENSSL_cleanse(v9, a1[5]);
    CRYPTO_free((void *)a1[4]);
    a1[4] = 0;
    v6 = v21;
  }
  if ( v6 == 0 )
  {
    v20 = (uint32_t *)(v3);
    v3 = nullptr;
    BIO_free(v20);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: cms_EncryptedContent_init  (binary VA: 0x1a3e770)
// Original: cms_EncryptedContent_init
// ----------------------------------------------------------------------------
int cms_EncryptedContent_init(char ***a1, char **a2, const void *src, char **n)
{
  char **dest;
  int v5;

  a1[3] = a2;
  if ( src != nullptr )
  {
    dest = (char **)CRYPTO_malloc((int)(uintptr_t)(n), (int)(uintptr_t)(&unk_1B15112), 0);
    v5 = 0;
    a1[4] = dest;
    if ( dest == nullptr )
      return v5;
    memcpy(dest, src, (size_t)n);
  }
  a1[5] = n;
  v5 = 1;
  if ( a2 != nullptr )
  {
    *a1 = OBJ_nid2obj(0x15u);
    return 1;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: cms_EncryptedData_init_bio  (binary VA: 0x1a3e980)
// Original: cms_EncryptedData_init_bio
// ----------------------------------------------------------------------------
uint8_t * cms_EncryptedData_init_bio(int a1)
{
  uint32_t *v1;
  uint32_t *v2;

  v1 = *(uint32_t **)(a1 + 4);
  v2 = (uint32_t *)v1[1];
  if ( v2[3] != 0 && v1[2] != 0 )
    *v1 = 2;
  return cms_EncryptedContent_init_bio(v2);
}

// ----------------------------------------------------------------------------
// Function: SMIME_write_CMS  (binary VA: 0x1a3ed50)
// Original: SMIME_write_CMS
// ----------------------------------------------------------------------------
int SMIME_write_CMS(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = OBJ_obj2nid(*a2);
  v5 = CMS_get0_eContentType(a2);
  v6 = OBJ_obj2nid(v5);
  v7 = 0;
  if ( v4 == 22 )
    v7 = *(uint32_t *)(a2[1] + 4);
  return SMIME_write_ASN1(a1, a2, a3, a4, v4, v6, v7, CMS_ContentInfo_it);
}

// ----------------------------------------------------------------------------
// Function: SMIME_read_CMS  (binary VA: 0x1a3ede0)
// Original: SMIME_read_CMS
// ----------------------------------------------------------------------------
int SMIME_read_CMS(int a1, int a2)
{
  return SMIME_read_ASN1(a1, a2, CMS_ContentInfo_it);
}

// ----------------------------------------------------------------------------
// Function: sub_1A3EE20  (binary VA: 0x1a3ee20)
// Original: sub_1A3EE20
// ----------------------------------------------------------------------------
int sub_1A3EE20(int a1, int a2)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(a1 + 4) != 0 )
    return lh_delete(a2, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3EE60  (binary VA: 0x1a3ee60)
// Original: sub_1A3EE60
// ----------------------------------------------------------------------------
int sub_1A3EE60(char **a1)
{
  int v1;

  v1 = 4 * lh_strhash(*a1);
  return lh_strhash(a1[1]) ^ v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3EEB0  (binary VA: 0x1a3eeb0)
// Original: sub_1A3EEB0
// ----------------------------------------------------------------------------
void sub_1A3EEB0(void **a1)
{
  int *v1;
  int v2;
  void **v3;

  if ( a1[1] == nullptr )
  {
    v1 = (int *)a1[2];
    v2 = sk_num((int)(uintptr_t)(v1)) - 1;
    if ( v2 >= 0 )
    {
      do
      {
        v3 = (void **)sk_value(v1, v2--);
        CRYPTO_free(v3[2]);
        CRYPTO_free(v3[1]);
        CRYPTO_free(v3);
      }
      while ( v2 != -1 );
    }
    if ( v1 != nullptr )
      sk_free((void **)v1);
    CRYPTO_free(*a1);
    CRYPTO_free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A3EF70  (binary VA: 0x1a3ef70)
// Original: sub_1A3EF70
// ----------------------------------------------------------------------------
int sub_1A3EF70(const char **a1, const char **a2)
{
  int result;
  const char *s1;

  if ( *a1 == *a2 || (result = strcmp(*a1, *a2)) == 0 )
  {
    s1 = a1[1];
    if ( s1 != nullptr )
    {
      result = 1;
      if ( a2[1] != nullptr )
        return strcmp(s1, a2[1]);
    }
    else
    {
      return -(a2[1] != nullptr);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_get_section_ea1a3eff0  (binary VA: 0x1a3eff0)
// Original: CONF_get_section
// ----------------------------------------------------------------------------
uint32_t * CONF_get_section_ea1a3eff0(int a1, int a2)
{
  uint32_t *v2;
  uint32_t v4[6];

  if ( a2 == 0 || a1 == 0 )
    return nullptr;
  v4[0] = a2;
  v2 = *(uint32_t **)(a1 + 8);
  v4[1] = 0;
  return lh_retrieve(v2, (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: CONF_get_section_values  (binary VA: 0x1a3f040)
// Original: CONF_get_section_values
// ----------------------------------------------------------------------------
int CONF_get_section_values(int a1, int a2)
{
  uint32_t *section;

  section = (uint32_t *)(uintptr_t)(CONF_get_section(a1, a2));
  if ( section != nullptr )
    return section[2];
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: CONF_add_string  (binary VA: 0x1a3f080)
// Original: CONF_add_string
// ----------------------------------------------------------------------------
int CONF_add_string(int a1, uint32_t *a2, uint32_t *a3)
{
  int *v3;
  int v4;
  int *v6;
  void **v7;

  v3 = (int *)a2[2];
  v4 = 0;
  *a3 = *a2;
  if ( sk_push(v3, (int)(uintptr_t)(a3)) != 0 )
  {
    LOWORD(v4) = 1;
    v6 = lh_insert(*(uint32_t **)(a1 + 8), (int)(uintptr_t)(a3));
    v7 = (void **)v6;
    if ( v6 != nullptr )
    {
      sk_delete_ptr(v3, (int)(uintptr_t)(v6));
      CRYPTO_free(v7[1]);
      CRYPTO_free(v7[2]);
      CRYPTO_free(v7);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CONF_get_string  (binary VA: 0x1a3f130)
// Original: CONF_get_string
// ----------------------------------------------------------------------------
char * CONF_get_string(int a1, const char *a2, const char *name)
{
  const char *v3;
  uint32_t *v4;
  uint32_t *v5;
  char *result;
  typedef const char *_g4_t_v7;
  typedef const char *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);

  v3 = name;
  if ( name == nullptr )
    return nullptr;
  if ( a1 == 0 )
    return getenv(name);
  if ( a2 != nullptr )
  {
    v4 = *(uint32_t **)(a1 + 8);
    v8 = name;
    v7 = a2;
    v5 = lh_retrieve(v4, (int)(uintptr_t)(&v7));
    v3 = name;
    if ( v5 != nullptr )
      return (char *)v5[2];
    if ( strcmp(a2, "ENV") == 0 )
    {
      result = getenv(name);
      v3 = name;
      if ( result != nullptr )
        return result;
    }
  }
  v7 = "default";
  v8 = v3;
  v5 = lh_retrieve(*(uint32_t **)(a1 + 8), (int)(uintptr_t)(&v7));
  if ( v5 != nullptr )
    return (char *)v5[2];
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: CONF_new_data  (binary VA: 0x1a3f230)
// Original: CONF_new_data
// ----------------------------------------------------------------------------
bool CONF_new_data(int a1)
{
  bool result;
  uint32_t *v2;

  result = false;
  if ( a1 != 0 )
  {
    result = true;
    if ( *(uint32_t *)(a1 + 8) == 0 )
    {
      v2 = lh_new((int (*)(char *))sub_1A3EE60, (int (**)(const char *, const char *))sub_1A3EF70);
      *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v2);
      return v2 != nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CONF_free_data  (binary VA: 0x1a3f290)
// Original: CONF_free_data
// ----------------------------------------------------------------------------
void CONF_free_data(int a1)
{
  int v1;

  if ( a1 != 0 )
  {
    v1 = *(uint32_t *)(a1 + 8);
    if ( v1 != 0 )
    {
      *(uint32_t *)(v1 + 32) = 0;
      lh_doall_arg(*(uint32_t **)(a1 + 8), (void (*)(uint32_t, int))sub_1A3EE20, *(uint32_t *)(a1 + 8));
      lh_doall(*(uint32_t **)(a1 + 8), (void (*)(uint32_t))sub_1A3EEB0);
      lh_free(*(void ***)(a1 + 8));
    }
  }
}

// ----------------------------------------------------------------------------
// Function: CONF_new_section  (binary VA: 0x1a3f310)
// Original: CONF_new_section
// ----------------------------------------------------------------------------
char * CONF_new_section(int a1, char *src)
{
  char *v2;
  void **v3;
  uint8_t *v4;
  char *s;
  size_t n;

  v2 = nullptr;
  v3 = (void **)sk_new_null();
  if ( v3 != nullptr )
  {
    v2 = (char *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v2 != nullptr
      && (n = strlen(src) + 1, v4 = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0), *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v4), v4 != nullptr) )
    {
      memcpy(v4, src, n);
      *((uint32_t *)v2 + 1) = 0;
      *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(v3);
      if ( lh_insert(*(uint32_t **)(a1 + 8), (int)(uintptr_t)(v2)) != nullptr )
        OpenSSLDie((const char *)&unk_1B15112, 0, "vv == NULL");
    }
    else
    {
      sk_free(v3);
      if ( v2 != nullptr )
      {
        s = v2;
        v2 = nullptr;
        CRYPTO_free(s);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F420  (binary VA: 0x1a3f420)
// Original: sub_1A3F420
// ----------------------------------------------------------------------------
int sub_1A3F420(uint32_t *a1)
{
  int result;

  result = 0;
  if ( a1 != nullptr )
  {
    a1[2] = 0;
    *a1 = (uint32_t)(uintptr_t)(&off_20CFE80);
    a1[1] = (uint32_t)(uintptr_t)(&unk_20CFA80);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F460  (binary VA: 0x1a3f460)
// Original: sub_1A3F460
// ----------------------------------------------------------------------------
int sub_1A3F460(uint32_t *a1)
{
  int result;

  result = 0;
  if ( a1 != nullptr )
  {
    a1[2] = 0;
    *a1 = (uint32_t)(uintptr_t)(&off_20CFEC0);
    a1[1] = (uint32_t)(uintptr_t)(&unk_20CFC80);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F4A0  (binary VA: 0x1a3f4a0)
// Original: sub_1A3F4A0
// ----------------------------------------------------------------------------
int sub_1A3F4A0(int a1, uint8_t a2)
{
  return *(uint16_t *)(*(uint32_t *)(a1 + 4) + 2 * a2) & 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F4C0  (binary VA: 0x1a3f4c0)
// Original: sub_1A3F4C0
// ----------------------------------------------------------------------------
int sub_1A3F4C0(int a1, char a2)
{
  return a2 - 48;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F4D0  (binary VA: 0x1a3f4d0)
// Original: sub_1A3F4D0
// ----------------------------------------------------------------------------
int sub_1A3F4D0(int a1, int a2)
{
  lh_doall_arg(*(uint32_t **)(a1 + 8), (void (*)(uint32_t, int))sub_1A40550, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F510  (binary VA: 0x1a3f510)
// Original: sub_1A3F510
// ----------------------------------------------------------------------------
uint8_t * sub_1A3F510(int a1)
{
  uint8_t *v1;
  uint8_t *v2;
  void *v4;

  v1 = CRYPTO_malloc(16, (int)(uintptr_t)(&unk_1B15112), 0);
  v2 = v1;
  if ( v1 != nullptr && (*(int (**)(uint8_t *))(a1 + 8))(v1) == 0 )
  {
    v4 = v2;
    v2 = nullptr;
    CRYPTO_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3F580  (binary VA: 0x1a3f580)
// Original: sub_1A3F580
// ----------------------------------------------------------------------------
int sub_1A3F580(int a1, const char *a2, void **a3, char *s)
{
  char *v4;
  int result;
  size_t v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int16_t v11;
  char *v12;
  int16_t v13; // di
  int v14;
  char *i;
  char *v16;
  uint8_t v17;
  uint8_t v18;
  char *v19;
  char *v20;
  char *string;
  size_t v22;
  char v23;
  char *v24;
  int v25;
  char *v26;
  char *v27;
  char *v28;
  int v29;
  const char *v30;
  uint32_t *v32;
  int v33;
  char *v34;
  uint8_t v35;
  char v36;
  const char *v37;

  v4 = s;
  v32 = BUF_MEM_new();
  result = 0;
  if ( v32 == nullptr )
    return result;
  v6 = strlen(s);
  if ( BUF_MEM_grow(v32, v6 + 1) == 0 )
  {
LABEL_20:
    BUF_MEM_free(v32);
    return 0;
  }
  v7 = 0;
  v36 = 0;
  v8 = *(uint32_t *)(a1 + 4);
  v9 = *s;
  v10 = *s;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_4:
        while ( 1 )
        {
          v29 = v10;
          v11 = *(uint16_t *)(v8 + 2 * (uint8_t)v10);
          if ( (v11 & 0x40) == 0 )
            break;
          v12 = v4 + 1;
          while ( 1 )
          {
            v9 = v4[1];
            v10 = v9;
            v13 = *(uint16_t *)(v8 + 2 * (uint8_t)v9);
            if ( (v13 & 8) != 0 )
              break;
            if ( v9 == v29 )
              goto LABEL_14;
            if ( (v13 & 0x20) != 0 )
            {
              v9 = v12[1];
              v4 = v12 + 1;
              v10 = v9;
              if ( (*(uint8_t *)(v8 + 2 * (uint8_t)v9) & 8) != 0 )
              {
                if ( v9 != v29 )
                  goto LABEL_4;
                goto LABEL_13;
              }
            }
            else
            {
              v9 = *v12;
              v4 = v12;
            }
            v12 = v4 + 1;
            *(uint8_t *)(v32[1] + v7++) = v9;
            v8 = *(uint32_t *)(a1 + 4);
          }
          v4 = v12;
          if ( v9 == v29 )
          {
LABEL_13:
            v12 = v4;
LABEL_14:
            v9 = v12[1];
            v4 = v12 + 1;
            v10 = v9;
            continue;
          }
        }
        if ( (v11 & 0x400) == 0 )
          break;
        v14 = v4[1];
        for ( i = v4 + 1; (*(uint8_t *)(v8 + 2 * (uint8_t)v14) & 8) == 0; v14 = v16[1] )
        {
          if ( v14 == v29 )
          {
            v9 = i[1];
            v10 = v9;
            if ( v9 != v29 )
              goto LABEL_45;
            v16 = i + 1;
          }
          else
          {
            v9 = *i;
            v16 = i;
          }
          i = v16 + 1;
          *(uint8_t *)(v32[1] + v7++) = v9;
          v8 = *(uint32_t *)(a1 + 4);
        }
        if ( v14 == v29 )
        {
          v9 = i[1];
          v10 = v9;
LABEL_45:
          v4 = i + 1;
        }
        else
        {
          v9 = *i;
          v4 = i;
          v10 = *i;
        }
      }
      if ( (v11 & 0x20) == 0 )
        break;
      v17 = v4[1];
      if ( (*(uint8_t *)(v8 + 2 * v17) & 8) != 0 )
        goto LABEL_15;
      switch ( v17 )
      {
        case 'r':
          v17 = 13;
          break;
        case 'n':
          v17 = 10;
          break;
        case 'b':
          v17 = 8;
          break;
        case 't':
          v17 = 9;
          break;
        default:
          break;
      }
      *(uint8_t *)(v32[1] + v7++) = v17;
      v8 = *(uint32_t *)(a1 + 4);
      v9 = v4[2];
      v4 += 2;
      v10 = v9;
    }
    if ( (v11 & 8) != 0 )
      break;
    if ( v9 == 36 )
    {
      v18 = v4[1];
      if ( v18 == 123 )
      {
        v33 = 125;
      }
      else
      {
        if ( v18 != 40 )
        {
          v33 = 0;
          v30 = v4 + 1;
          goto LABEL_50;
        }
        v33 = 41;
      }
      v30 = v4 + 2;
      v18 = v4[2];
LABEL_50:
      v19 = (char *)v30;
      if ( (*(uint16_t *)(v8 + 2 * v18) & 0x107) != 0 )
      {
        do
          v18 = *++v19;
        while ( (*(uint16_t *)(v8 + 2 * (uint8_t)*v19) & 0x107) != 0 );
      }
      if ( v18 == 58 && v19[1] == 58 )
      {
        *v19 = 0;
        v35 = v19[2];
        v25 = *(uint32_t *)(a1 + 4);
        if ( (*(uint16_t *)(v25 + 2 * v35) & 0x107) != 0 )
        {
          v26 = v19 + 2;
          do
            v35 = *++v26;
          while ( (*(uint16_t *)(v25 + 2 * (uint8_t)*v26) & 0x107) != 0 );
          v37 = v30;
          v30 = v19 + 2;
          v20 = v19;
          v36 = 58;
          v19 = v26;
        }
        else
        {
          v37 = v30;
          v30 = v19 + 2;
          v20 = v19;
          v36 = 58;
          v19 += 2;
        }
      }
      else
      {
        v37 = a2;
        v35 = *v19;
        v20 = nullptr;
      }
      *v19 = 0;
      if ( v33 != 0 )
      {
        if ( (char)v35 != v33 )
        {
          ERR_put_error(14, 101, 102, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_20;
        }
        v34 = v19 + 1;
      }
      else
      {
        v34 = v19;
      }
      v27 = v20;
      string = CONF_get_string(a1, v37, v30);
      if ( v27 != nullptr )
        *v27 = v36;
      *v19 = v35;
      if ( string == nullptr )
      {
        ERR_put_error(14, 101, 104, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_20;
      }
      v28 = string;
      v22 = strlen(string);
      BUF_MEM_grow_clean(v32, *v32 + v4 - v34 + v22);
      v23 = *v28;
      if ( *v28 != 0 )
      {
        v24 = &v28[-v7];
        do
        {
          *(uint8_t *)(v32[1] + v7++) = v23;
          v23 = v24[v7];
        }
        while ( v23 != 0 );
      }
      v4 = v34;
      *v19 = v35;
      v8 = *(uint32_t *)(a1 + 4);
      v9 = *v34;
      v10 = *v34;
    }
    else
    {
      *(uint8_t *)(v32[1] + v7++) = v9;
      v8 = *(uint32_t *)(a1 + 4);
      v9 = *++v4;
      v10 = v9;
    }
  }
LABEL_15:
  *(uint8_t *)(v32[1] + v7) = 0;
  if ( *a3 != nullptr )
    CRYPTO_free(*a3);
  *a3 = (void *)v32[1];
  CRYPTO_free(v32);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3FA90  (binary VA: 0x1a3fa90)
// Original: sub_1A3FA90
// ----------------------------------------------------------------------------
int sub_1A3FA90(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    CONF_free_data(a1);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3FAC0  (binary VA: 0x1a3fac0)
// Original: sub_1A3FAC0
// ----------------------------------------------------------------------------
int sub_1A3FAC0(void *a1)
{
  int v1;
  int v2;

  v1 = sub_1A3FA90((int)(uintptr_t)(a1));
  v2 = 0;
  if ( v1 != 0 )
  {
    CRYPTO_free(a1);
    return 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3FB10  (binary VA: 0x1a3fb10)
// Original: sub_1A3FB10
// ----------------------------------------------------------------------------
uint8_t * sub_1A3FB10(int a1, uint8_t *a2)
{
  int16_t i;
  int v3;
  int v4;

  for ( i = *(uint16_t *)(a1 + 2 * *a2); ; i = *(uint16_t *)(a1 + 2 * v3) )
  {
    while ( (i & 0x20) != 0 )
    {
      while ( 1 )
      {
        i = *(uint16_t *)(a1 + 2 * a2[1]);
        if ( (i & 8) == 0 )
          break;
        ++a2;
        if ( (i & 0x20) == 0 )
          goto LABEL_5;
      }
      v4 = a2[2];
      a2 += 2;
      i = *(uint16_t *)(a1 + 2 * v4);
    }
LABEL_5:
    if ( (i & 0x307) == 0 )
      break;
    v3 = *++a2;
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A3FB60  (binary VA: 0x1a3fb60)
// Original: sub_1A3FB60
// ----------------------------------------------------------------------------
int sub_1A3FB60(int a1, uint32_t *a2, int *a3)
{
  char *v3;
  int v4;
  uint8_t *v5;
  int v6;
  int result;
  int v8;
  int s;
  signed int v10;
  char v11;
  signed int v12;
  char v13;
  int v14;
  uint8_t *v15;
  int v16;
  int v17;
  int16_t v18;
  uint8_t *v19;
  int16_t v20; // di
  int16_t v21;
  uint8_t *v22;
  int v23;
  char *v24;
  char *v25;
  uint8_t *i;
  uint8_t *v27;
  uint8_t v28;
  int v29;
  int16_t v30;
  int v31;
  char *v32;
  int v33;
  int16_t v34;
  uint8_t *v35;
  uint8_t v36;
  char *v37;
  uint8_t *v38;
  int v39;
  uint8_t *v40;
  char *v41;
  int v42;
  int16_t v43; // si
  char *v44;
  size_t v45;
  char *v46;
  size_t v47;
  int v48;
  uint32_t *section;
  char *v50;
  typedef int16_t _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef unsigned int *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint8_t _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef uint8_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef char *_g4_t_s1;
  typedef uint8_t _g4_t_v62[41];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v51)) > _g4_s0 ? (8u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v52)) > _g4_s1 ? (44u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v53)) > _g4_s2 ? (48u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v54)) > _g4_s3 ? (52u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v55)) > _g4_s4 ? (56u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v56)) > _g4_s5 ? (56u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v57)) > _g4_s6 ? (60u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v58)) > _g4_s7 ? (64u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v59)) > _g4_s8 ? (72u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v60)) > _g4_s9 ? (76u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_s1)) > _g4_s10 ? (92u + sizeof(_g4_t_s1)) : _g4_s10,
    _g4_s12 = (99u + sizeof(_g4_t_v62)) > _g4_s11 ? (99u + sizeof(_g4_t_v62)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 99u);

  s1 = nullptr;
  v59 = *(uint32_t *)(a1 + 8);
  v53 = BUF_MEM_new();
  if ( v53 != nullptr )
  {
    v3 = (char *)(CRYPTO_malloc(10, (int)(uintptr_t)(&unk_1B15112), 0));
    s1 = v3;
    if ( v3 == nullptr )
    {
      v51 = 65;
      goto LABEL_5;
    }
    BUF_strlcpy(v3, "default", 0xAu);
    LOBYTE(v4) = CONF_new_data(a1);
    if ( v4 == 0 )
    {
      v51 = 65;
LABEL_5:
      v5 = nullptr;
      ERR_put_error(14, 121, v51, (int)(uintptr_t)(&unk_1B15112), 0);
      v58 = 0;
      goto LABEL_6;
    }
    v60 = (uint32_t *)(CONF_new_section(a1, s1));
    if ( v60 == nullptr )
    {
      v51 = 103;
      goto LABEL_5;
    }
    v58 = 0;
    v54 = 0;
LABEL_23:
    v8 = 0;
    while ( 1 )
    {
      if ( BUF_MEM_grow(v53, v8 + 512) == 0 )
      {
        v5 = nullptr;
        ERR_put_error(14, 121, 7, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_6;
      }
      s = v53[1] + v8;
      *(uint8_t *)s = 0;
      BIO_gets(a2, s, 511);
      *(uint8_t *)(s + 511) = 0;
      v10 = strlen((const char *)s);
      if ( (v10 | v54) == 0 )
      {
        BUF_MEM_free(v53);
        result = 1;
        if ( s1 != nullptr )
        {
          CRYPTO_free(s1);
          return 1;
        }
        return result;
      }
      if ( v10 <= 0 )
      {
        v12 = v10;
LABEL_61:
        v54 = 1;
        if ( v10 != 0 )
          goto LABEL_32;
      }
      else
      {
        v11 = *(uint8_t *)(s + v10 - 1);
        if ( v11 != 10 )
        {
          v12 = v10;
          v54 = 1;
          if ( v11 != 13 )
            goto LABEL_32;
        }
        v12 = v10;
        while ( --v12 != 0 )
        {
          v13 = *(uint8_t *)(s + v12 - 1);
          if ( v13 != 10 && v13 != 13 )
          {
            if ( v10 != v12 )
              break;
            goto LABEL_61;
          }
        }
      }
      *(uint8_t *)(s + v12) = 0;
      ++v58;
      v54 = 0;
LABEL_32:
      v8 += v12;
      if ( v8 > 0
        && (v14 = *(uint32_t *)(a1 + 4),
            v15 = (uint8_t *)(v53[1] + v8 - 1),
            (*(uint8_t *)(v14 + 2 * *v15) & 0x20) != 0)
        && (v8 == 1 || (*(uint8_t *)(v14 + 2 * *(v15 - 1)) & 0x20) == 0) )
      {
        --v8;
LABEL_58:
        v54 = 1;
      }
      else
      {
        if ( v54 != 0 )
          goto LABEL_58;
        v16 = *(uint32_t *)(a1 + 4);
        v57 = (uint8_t *)v53[1];
        v55 = *v57;
        v17 = (char)*v57;
        v18 = *(uint16_t *)(v16 + 2 * *v57);
        v19 = v57;
        if ( (v18 & 0x800) == 0 )
        {
          if ( (v18 & 0x10) != 0 )
          {
            while ( 1 )
            {
              v17 = (char)*++v19;
              v20 = *(uint16_t *)(v16 + 2 * (uint8_t)v17);
              if ( (v20 & 0x800) != 0 )
                break;
              if ( (v20 & 0x10) == 0 )
                goto LABEL_63;
            }
          }
          else
          {
LABEL_63:
            while ( 1 )
            {
              v29 = v17;
              v30 = *(uint16_t *)(v16 + 2 * (uint8_t)v17);
              if ( (v30 & 0x80u) != 0 )
                break;
              if ( (v30 & 0x400) != 0 )
              {
                while ( 1 )
                {
                  v31 = (char)v19[1];
                  v32 = (char *)(v19 + 1);
                  if ( (*(uint8_t *)(v16 + 2 * (uint8_t)v31) & 8) != 0 )
                    break;
                  while ( v29 != v31 )
                  {
                    v31 = *++v32;
                    if ( (*(uint8_t *)(v16 + 2 * (uint8_t)v31) & 8) != 0 )
                      goto LABEL_74;
                  }
                  v17 = v32[1];
                  if ( v29 != v17 )
                    goto LABEL_82;
                  v19 = (uint8_t *)(v32 + 1);
                }
LABEL_74:
                if ( v29 != v31 )
                {
LABEL_75:
                  v19 = (uint8_t *)v32;
                  v17 = *v32;
                  continue;
                }
                v17 = v32[1];
LABEL_82:
                v19 = (uint8_t *)(v32 + 1);
              }
              else if ( (v30 & 0x40) != 0 )
              {
                while ( 1 )
                {
                  v32 = (char *)(v19 + 1);
                  v33 = (char)v19[1];
                  v34 = *(uint16_t *)(v16 + 2 * (uint8_t)v33);
                  if ( (v34 & 8) != 0 )
                    break;
                  if ( v29 == v33 )
                    goto LABEL_86;
                  v19 = (uint8_t *)v32;
                  if ( (v34 & 0x20) != 0 )
                  {
                    v17 = v32[1];
                    v19 = (uint8_t *)(v32 + 1);
                    if ( (*(uint8_t *)(v16 + 2 * (uint8_t)v17) & 8) != 0 )
                      goto LABEL_63;
                  }
                }
                if ( v29 != v33 )
                  goto LABEL_75;
LABEL_86:
                v19 = (uint8_t *)(v32 + 1);
                v17 = v32[1];
              }
              else if ( (v30 & 0x20) != 0 )
              {
                v17 = (char)v19[1];
                if ( (*(uint8_t *)(v16 + 2 * (uint8_t)v17) & 8) != 0 )
                {
                  ++v19;
                }
                else
                {
                  LOBYTE(v17) = v19[2];
                  v19 += 2;
                  v17 = (char)v17;
                }
              }
              else
              {
                if ( (v30 & 8) != 0 )
                {
                  LOBYTE(v21) = *(uint16_t *)(v16 + 2 * v55);
                  goto LABEL_43;
                }
                LOBYTE(v17) = *++v19;
                v17 = (char)v17;
              }
            }
          }
        }
        *v19 = 0;
        v16 = *(uint32_t *)(a1 + 4);
        v55 = *v57;
        v21 = *(uint16_t *)(v16 + 2 * *v57);
LABEL_43:
        v22 = v57;
        if ( (v21 & 0x18) == 0x10 )
        {
          do
            v21 = *(uint16_t *)(v16 + 2 * *++v22);
          while ( (v21 & 0x18) == 0x10 );
          v55 = *v22;
        }
        v8 = 0;
        if ( (v21 & 8) == 0 )
        {
          if ( v55 != 91 )
          {
            v35 = sub_1A3FB10(v16, v22);
            v36 = *v35;
            v37 = nullptr;
            v56 = (char *)v22;
            if ( *v35 == 58 && v35[1] == 58 )
            {
              v50 = (char *)(v35 + 2);
              *v35 = 0;
              v16 = *(uint32_t *)(a1 + 4);
              v35 = sub_1A3FB10(v16, v35 + 2);
              v36 = *v35;
              v56 = v50;
              v37 = (char *)v22;
            }
            v38 = v35;
            if ( (*(uint16_t *)(v16 + 2 * v36) & 0x18) == 0x10 )
            {
              do
                v36 = *++v38;
              while ( (*(uint16_t *)(v16 + 2 * *v38) & 0x18) == 0x10 );
            }
            if ( v36 == 61 )
            {
              *v35 = 0;
              v39 = v38[1];
              v40 = v38 + 1;
              v41 = (char *)(v38 + 1);
              v42 = *(uint32_t *)(a1 + 4);
              v43 = *(uint16_t *)(v42 + 2 * v39);
              if ( (v43 & 0x18) == 0x10 )
              {
                do
                  ++v41;
                while ( (*(uint16_t *)(v42 + 2 * (uint8_t)*v41) & 0x18) == 0x10 );
              }
              if ( (v43 & 8) == 0 )
              {
                do
                  ++v40;
                while ( (*(uint8_t *)(v42 + 2 * *v40) & 8) == 0 );
              }
              v44 = (char *)(v40 - 1);
              if ( v40 - 1 != (uint8_t *)v41 && (*(uint8_t *)(v42 + 2 * *(v40 - 1)) & 0x10) != 0 )
              {
                do
                  --v44;
                while ( v44 != v41 && (*(uint8_t *)(v42 + 2 * (uint8_t)*v44) & 0x10) != 0 );
              }
              v44[1] = 0;
              v5 = CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0);
              if ( v5 != nullptr )
              {
                if ( v37 == nullptr )
                  v37 = s1;
                v45 = strlen(v56);
                v46 = (char *)(CRYPTO_malloc(v45 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
                *((uint32_t *)v5 + 1) = (uint32_t)(uintptr_t)(v46);
                *((uint32_t *)v5 + 2) = 0;
                if ( v46 != nullptr )
                {
                  v52 = v46;
                  v47 = strlen(v56);
                  BUF_strlcpy(v52, v56, v47 + 1);
                  if ( sub_1A3F580(a1, v37, (void **)v5 + 2, v41) == 0 )
                    goto LABEL_6;
                  v48 = strcmp(v37, s1);
                  section = v60;
                  if ( v48 != 0 )
                  {
                    section = (uint32_t *)(uintptr_t)(CONF_get_section(a1, (int)(uintptr_t)(v37)));
                    if ( section == nullptr )
                    {
                      section = (uint32_t *)(CONF_new_section(a1, v37));
                      if ( section == nullptr )
                      {
                        ERR_put_error(14, 121, 103, (int)(uintptr_t)(&unk_1B15112), 0);
                        goto LABEL_6;
                      }
                    }
                  }
                  if ( CONF_add_string(a1, section, v5) != 0 )
                    goto LABEL_23;
                }
              }
              ERR_put_error(14, 121, 65, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_6;
            }
            v5 = nullptr;
            ERR_put_error(14, 121, 101, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_6;
          }
          v23 = v22[1];
          v24 = (char *)(v22 + 1);
          v25 = (char *)(v22 + 1);
          if ( (*(uint16_t *)(v16 + 2 * v23) & 0x18) == 0x10 )
          {
            do
              ++v24;
            while ( (*(uint16_t *)(v16 + 2 * (uint8_t)*v24) & 0x18) == 0x10 );
            v25 = v24;
          }
          i = (uint8_t *)v25;
          while ( 1 )
          {
            v27 = sub_1A3FB10(v16, i);
            v28 = *v27;
            for ( i = v27; (*(uint16_t *)(v16 + 2 * *i) & 0x18) == 0x10; v28 = *i )
              ++i;
            if ( v28 == 93 )
              break;
            if ( v28 == 0 )
            {
              v5 = nullptr;
              ERR_put_error(14, 121, 100, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_6;
            }
          }
          *v27 = 0;
          if ( sub_1A3F580(a1, nullptr, (void **)&s1, v25) == 0 )
          {
            v5 = nullptr;
LABEL_6:
            BUF_MEM_free(v53);
            goto LABEL_7;
          }
          v8 = 0;
          v60 = (uint32_t *)(uintptr_t)(CONF_get_section(a1, (int)(uintptr_t)(s1)));
          if ( v60 == nullptr )
          {
            v60 = (uint32_t *)(CONF_new_section(a1, s1));
            if ( v60 == nullptr )
            {
              v5 = nullptr;
              ERR_put_error(14, 121, 103, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_6;
            }
          }
        }
      }
    }
  }
  v5 = nullptr;
  ERR_put_error(14, 121, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  v58 = 0;
LABEL_7:
  if ( s1 != nullptr )
    CRYPTO_free(s1);
  if ( a3 != nullptr )
    *a3 = v58;
  BIO_snprintf(v62, 13, "%ld", v58);
  ERR_add_error_data(2, "line ", v62);
  v6 = *(uint32_t *)(a1 + 8);
  if ( v6 != v59 && v6 != 0 )
  {
    CONF_free(*(uint32_t *)(a1 + 8));
    *(uint32_t *)(a1 + 8) = 0;
  }
  result = 0;
  if ( v5 != nullptr )
  {
    if ( *((uint32_t *)v5 + 1) != 0 )
      CRYPTO_free(*((void **)v5 + 1));
    if ( *((uint32_t *)v5 + 2) != 0 )
      CRYPTO_free(*((void **)v5 + 2));
    CRYPTO_free(v5);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A40550  (binary VA: 0x1a40550)
// Original: sub_1A40550
// ----------------------------------------------------------------------------
int sub_1A40550(uint32_t *a1, int a2)
{
  int v2;

  v2 = a1[1];
  if ( v2 != 0 )
    return BIO_printf(v2, a2, a2, "[%s] %s=%s\n", *a1, a1[1], a1[2]);
  else
    return BIO_printf(0, a2, a2, "[[%s]]\n", *a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A405D0  (binary VA: 0x1a405d0)
// Original: sub_1A405D0
// ----------------------------------------------------------------------------
int sub_1A405D0(int a1, char *a2, int *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;

  v3 = BIO_new_file(a2, "rb");
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = sub_1A3FB60(a1, v3, a3);
    BIO_free(v4);
  }
  else
  {
    v5 = 0;
    if ( (ERR_peek_last_error() & 0xFFF) == 0x80 )
      ERR_put_error(14, 120, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    else
      ERR_put_error(14, 120, 2, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: NCONF_default  (binary VA: 0x1a406b0)
// Original: NCONF_default
// ----------------------------------------------------------------------------
char ** NCONF_default()
{
  return (char **)(&off_20CFE80);
}

// ----------------------------------------------------------------------------
// Function: NCONF_WIN32  (binary VA: 0x1a406d0)
// Original: NCONF_WIN32
// ----------------------------------------------------------------------------
char ** NCONF_WIN32()
{
  return (char **)(&off_20CFEC0);
}

// ----------------------------------------------------------------------------
// Function: dsa_builtin_paramgen  (binary VA: 0x1a40a20)
// Original: dsa_builtin_paramgen
// ----------------------------------------------------------------------------
int dsa_builtin_paramgen(void ***a1, unsigned int a2, unsigned int a3, uint32_t *a4, void *src, size_t a6, int *a7, int *a8, uint32_t *a9)
{
  unsigned int v9;
  unsigned int v10;
  size_t n;
  unsigned int v12;
  int *v13;
  int v14;
  size_t i;
  unsigned int v16;
  char v17;
  uint8_t *v18;
  uint8_t v19;
  int v20;
  int is_prime_fasttest;
  int v22;
  int v24;
  char v25;
  char *v26;
  char v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  int *v32;
  int v33;
  int v34;
  int *v35;
  void **v36;
  void **v37;
  typedef void **_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef int _g4_t_v42;
  typedef signed int _g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef void **_g4_t_v51;
  typedef int *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef uint8_t _g4_t_dest[32];
  typedef uint8_t _g4_t_v56[31];
  typedef char _g4_t_v57;
  typedef uint8_t _g4_t_v58[32];
  typedef uint8_t _g4_t_v59[60];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v39)) > _g4_s1 ? (4u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v40)) > _g4_s2 ? (8u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v41)) > _g4_s3 ? (12u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v42)) > _g4_s4 ? (12u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v43)) > _g4_s5 ? (16u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v44)) > _g4_s6 ? (20u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v45)) > _g4_s7 ? (24u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v46)) > _g4_s8 ? (28u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v47)) > _g4_s9 ? (36u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v48)) > _g4_s10 ? (48u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v49)) > _g4_s11 ? (52u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v50)) > _g4_s12 ? (56u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v51)) > _g4_s13 ? (60u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v52)) > _g4_s14 ? (64u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v53)) > _g4_s15 ? (68u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v54)) > _g4_s16 ? (72u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_dest)) > _g4_s17 ? (80u + sizeof(_g4_t_dest)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v56)) > _g4_s18 ? (112u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (143u + sizeof(_g4_t_v57)) > _g4_s19 ? (143u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v58)) > _g4_s20 ? (144u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v59)) > _g4_s21 ? (176u + sizeof(_g4_t_v59)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 72u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 112u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 143u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 144u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 176u);

  v9 = a3 >> 3;
  v10 = a2;
  n = a6;
  if ( a3 >> 3 != 28 && v9 != 20 )
  {
    v22 = 0;
    if ( v9 != 32 )
      return v22;
  }
  if ( a4 == nullptr )
  {
    a4 = (uint32_t *)(EVP_sha1());
    v10 = a2;
    n = a6;
  }
  v12 = 512;
  if ( v10 > 0x1FF )
  {
    v12 = (v10 + 63) & 0xFFFFFFC0;
    if ( v9 <= n )
      goto LABEL_7;
  }
  else if ( v9 <= n )
  {
    goto LABEL_7;
  }
  if ( n != 0 )
  {
    if ( n > v9 )
      n = a3 >> 3;
    v41 = n;
    v44 = (int *)(BN_CTX_new());
    if ( v44 != nullptr )
      goto LABEL_12;
LABEL_36:
    v47 = nullptr;
    v22 = 0;
    goto LABEL_37;
  }
LABEL_7:
  if ( n > v9 )
    n = a3 >> 3;
  v41 = n;
  if ( src != nullptr )
    memcpy(dest, src, n);
  v44 = (int *)(BN_CTX_new());
  if ( v44 == nullptr )
    goto LABEL_36;
LABEL_12:
  v47 = (char *)(BN_MONT_CTX_new());
  if ( v47 != nullptr )
  {
    BN_CTX_start((int)(uintptr_t)(v44));
    v51 = (void **)BN_CTX_get(v44);
    v40 = (uint32_t *)(BN_CTX_get(v44));
    v46 = (int *)BN_CTX_get(v44);
    v38 = (void **)BN_CTX_get(v44);
    v52 = (int *)BN_CTX_get(v44);
    v54 = (int *)BN_CTX_get(v44);
    v39 = (int *)BN_CTX_get(v44);
    v49 = (int *)BN_CTX_get(v44);
    v48 = v12 - 1;
    v13 = (int *)BN_value_one();
    if ( BN_lshift((void **)v49, v13, v12 - 1) != 0 )
    {
      v14 = 0;
      for ( i = v41; ; i = 0 )
      {
        v53 = v14 + 1;
        if ( BN_GENCB_call(a9, 0, v14) == 0 )
          break;
        v45 = 0;
        if ( i == 0 )
        {
          RAND_pseudo_bytes((int)(uintptr_t)(dest), v9);
          v45 = 1;
        }
        memcpy(v58, dest, v9);
        memcpy(v59, dest, v9);
        v16 = v9 - 1;
        if ( (int)(v9 - 1) >= 0 )
        {
          v17 = v58[v16] + 1;
          v58[v16] = v17;
          if ( v17 == 0 )
          {
            v18 = &v56[v9 + 30];
            do
            {
              if ( v18 == (uint8_t *)&v57 )
                break;
              v19 = *v18 + 1;
              *v18-- = v19;
            }
            while ( v19 == 0 );
          }
        }
        EVP_Digest((int)(uintptr_t)(dest), v9, (int)(uintptr_t)(v56), nullptr, a4, nullptr);
        EVP_Digest((int)(uintptr_t)(v58), v9, (int)(uintptr_t)(v59), nullptr, a4, nullptr);
        if ( a3 >> 3 != 0 )
        {
          v20 = 0;
          do
          {
            v56[v20] ^= v59[v20];
            ++v20;
          }
          while ( v9 != v20 );
        }
        v56[0] |= 0x80u;
        v56[v9 - 1] |= 1u;
        if ( BN_bin2bn(v56, v9, v38) == nullptr )
          break;
        is_prime_fasttest = BN_is_prime_fasttest_ex((int *)v38, 50, v44, v45, a9);
        if ( is_prime_fasttest > 0 )
        {
          if ( BN_GENCB_call(a9, 2, 0) != 0 && BN_GENCB_call(a9, 3, 0) != 0 )
          {
            v50 = 0;
            v24 = v9 - 1;
LABEL_44:
            BN_set_word(v46, 0);
            v42 = 0;
            v43 = 0;
            while ( 1 )
            {
              if ( v24 >= 0 )
              {
                v25 = v58[v24] + 1;
                v58[v24] = v25;
                if ( v25 == 0 )
                {
                  v26 = (char *)(&v58[v9 - 2]);
                  do
                  {
                    if ( v26 == &v57 )
                      break;
                    v27 = *v26 + 1;
                    *v26-- = v27;
                  }
                  while ( v27 == 0 );
                }
              }
              EVP_Digest((int)(uintptr_t)(v58), v9, (int)(uintptr_t)(v56), nullptr, a4, nullptr);
              if ( BN_bin2bn(v56, v9, v51) == nullptr
                || BN_lshift(v51, (int *)v51, v42) == 0
                || BN_add((int)(uintptr_t)(v46), v46, (int *)v51) == 0 )
              {
                break;
              }
              ++v43;
              v42 += 8 * v9;
              if ( (int)(v48 / 0xA0) < v43 )
              {
                if ( BN_mask_bits(v46, v48) == 0 )
                  goto LABEL_66;
                if ( BN_copy(v52, v46) == nullptr )
                  goto LABEL_66;
                if ( BN_add((int)(uintptr_t)(v52), v52, v49) == 0 )
                  goto LABEL_66;
                if ( BN_lshift1((int **)v51, (int **)v38) == 0 )
                  goto LABEL_66;
                if ( BN_div(nullptr, v54, __SPAIR64__((unsigned int)(uintptr_t)(v51), (unsigned int)(uintptr_t)(v52)), v44) == 0 )
                  goto LABEL_66;
                v28 = (int *)BN_value_one();
                LOBYTE(v29) = BN_sub((int)(uintptr_t)(v51), v54, v28);
                if ( v29 == 0 )
                  goto LABEL_66;
                LOBYTE(v30) = BN_sub((int)(uintptr_t)(v39), v52, (int *)v51);
                if ( v30 == 0 )
                  goto LABEL_66;
                if ( BN_cmp(v39, v49) >= 0 )
                {
                  v31 = BN_is_prime_fasttest_ex(v39, 50, v44, 1, a9);
                  if ( v31 > 0 )
                  {
                    if ( BN_GENCB_call(a9, 2, 1) != 0 )
                    {
                      v32 = (int *)BN_value_one();
                      LOBYTE(v33) = BN_sub((int)(uintptr_t)(v49), v39, v32);
                      if ( v33 != 0
                        && BN_div(v51, nullptr, __SPAIR64__((unsigned int)(uintptr_t)(v38), (unsigned int)(uintptr_t)(v49)), v44) != 0
                        && BN_set_word(v49, 2) != 0
                        && BN_MONT_CTX_set((unsigned int *)v47, (int **)v39, v44) )
                      {
                        v34 = 2;
                        while ( BN_mod_exp_mont(v40, v49, (int)(uintptr_t)(v51), v39, v44, v47) != 0 )
                        {
                          if ( v40[1] != 1 || *(uint32_t *)*v40 != 1 || v40[3] != 0 )
                          {
                            if ( BN_GENCB_call(a9, 3, 1) == 0 )
                              goto LABEL_66;
                            if ( a1[3] != nullptr )
                              BN_free(a1[3]);
                            if ( a1[4] != nullptr )
                              BN_free(a1[4]);
                            if ( a1[5] != nullptr )
                              BN_free(a1[5]);
                            v22 = 0;
                            a1[3] = BN_dup(v39);
                            a1[4] = BN_dup(v38);
                            v36 = BN_dup(v40);
                            v37 = a1[3];
                            a1[5] = v36;
                            if ( v37 != nullptr && a1[4] != nullptr && v36 != nullptr )
                            {
                              if ( a7 != nullptr )
                                *a7 = v50;
                              v22 = 1;
                              if ( a8 != nullptr )
                                *a8 = v34;
                            }
                            goto LABEL_67;
                          }
                          v35 = (int *)BN_value_one();
                          if ( BN_add((int)(uintptr_t)(v49), v49, v35) == 0 )
                            goto LABEL_66;
                          ++v34;
                        }
                      }
                    }
                    goto LABEL_66;
                  }
                  if ( v31 != 0 )
                    goto LABEL_66;
                }
                if ( ++v50 == 4096 )
                  goto LABEL_29;
                if ( BN_GENCB_call(a9, 0, v50) != 0 )
                  goto LABEL_44;
                goto LABEL_66;
              }
            }
          }
          break;
        }
        if ( is_prime_fasttest != 0 )
          break;
LABEL_29:
        v14 = v53;
      }
    }
  }
LABEL_66:
  v22 = 0;
LABEL_67:
  BN_CTX_end(v44);
  BN_CTX_free((void **)v44);
LABEL_37:
  if ( v47 == nullptr )
    return v22;
  BN_MONT_CTX_free((void **)v47);
  return v22;
}

// ----------------------------------------------------------------------------
// Function: sub_1A41630  (binary VA: 0x1a41630)
// Original: sub_1A41630
// ----------------------------------------------------------------------------
bool sub_1A41630(int a1, uint32_t *a2, int a3, int *a4)
{
  uint8_t *v7;
  bool v8;

  BN_CTX_start((int)(uintptr_t)(a4));
  v7 = BN_CTX_get(a4);
  v8 = false;
  if ( v7 != nullptr
    && G4_VCALL<int>(a1, 132, a2, a2, a4) != 0
    && G4_VCALL<int>(a1, 132, v7, a3, a4) != 0
    && G4_VCALL<int>(a1, 128, a3, a2, v7, a4) != 0
    && G4_VCALL<int>(a1, 132, a2, a2, a4) != 0
    && G4_VCALL<int>(a1, 132, v7, v7, a4) != 0
    && G4_VCALL<int>(a1, 128, v7, a1 + 136, v7, a4) != 0 )
  {
    v8 = BN_GF2m_add(a2, a2, v7) != 0;
  }
  BN_CTX_end(a4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_1A417A0  (binary VA: 0x1a417a0)
// Original: sub_1A417A0
// ----------------------------------------------------------------------------
bool sub_1A417A0(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int *a7)
{
  uint8_t *v8;
  bool v11;
  uint8_t *v12;

  BN_CTX_start((int)(uintptr_t)(a7));
  v12 = BN_CTX_get(a7);
  v8 = BN_CTX_get(a7);
  v11 = false;
  if ( v8 != nullptr
    && BN_copy(v12, a2) != nullptr
    && G4_VCALL<int>(a1, 128, a3, a3, a6, a7) != 0
    && G4_VCALL<int>(a1, 128, a4, a4, a5, a7) != 0
    && G4_VCALL<int>(a1, 128, v8, a3, a4, a7) != 0
    && BN_GF2m_add(a4, a4, a3) != 0
    && G4_VCALL<int>(a1, 132, a4, a4, a7) != 0
    && G4_VCALL<int>(a1, 128, a3, a4, v12, a7) != 0 )
  {
    v11 = BN_GF2m_add(a3, a3, v8) != 0;
  }
  BN_CTX_end(a7);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: sub_1A41940  (binary VA: 0x1a41940)
// Original: sub_1A41940
// ----------------------------------------------------------------------------
int sub_1A41940(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  uint32_t *v24;
  uint8_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  int v29;
  uint8_t *v30;
  int v31;
  int v32;
  uint32_t *v33;
  int v34;
  uint8_t *v35;

  if ( a2 == a4 )
  {
    ERR_put_error(16, 208, 112, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a3 == nullptr || a4 == nullptr || a3[1] == 0 || EC_POINT_is_at_infinity((int)(uintptr_t)(a1), a4) != 0 )
    return EC_POINT_set_to_infinity((int)(uintptr_t)(a1), a2);
  v7 = 0;
  if ( a4[16] != 0 )
  {
    BN_CTX_start((int)(uintptr_t)(a5));
    v25 = BN_CTX_get(a5);
    v24 = (uint32_t *)(BN_CTX_get(a5));
    v9 = 0;
    if ( v24 == nullptr )
      goto LABEL_11;
    v26 = a4 + 1;
    v10 = BN_GF2m_mod_arr(v25, a4 + 1, a1 + 23);
    v9 = 0;
    if ( v10 == 0 )
      goto LABEL_11;
    v11 = BN_set_word(v24, 1);
    v9 = 0;
    if ( v11 == 0 )
      goto LABEL_11;
    v27 = a2 + 6;
    v12 = G4_VCALL<int>(a1, 132, a2 + 6, v25, a5);
    v9 = 0;
    if ( v12 == 0 )
      goto LABEL_11;
    v28 = a2 + 1;
    v13 = G4_VCALL<int>(a1, 132, a2 + 1, v27, a5);
    v9 = 0;
    if ( v13 == 0 )
      goto LABEL_11;
    v14 = BN_GF2m_add(v28, v28, a1 + 34);
    v9 = 0;
    if ( v14 == 0 )
      goto LABEL_11;
    v15 = 0x40000000;
    v31 = a3[1];
    v29 = v31 - 1;
    v16 = *(uint32_t *)(*a3 + 4 * (v31 - 1));
    if ( v16 >= 0 )
    {
      v17 = 0x80000000;
      do
        v17 >>= 1;
      while ( (v16 & v17) == 0 );
      v15 = v17 >> 1;
      if ( v15 == 0 )
      {
        v15 = 0x80000000;
        v29 = v31 - 2;
      }
    }
    v34 = 4 * v29;
    v18 = v15;
    while ( v29 >= 0 )
    {
      v32 = *(uint32_t *)(*a3 + v34);
      do
      {
        if ( (v18 & v32) != 0 )
        {
          if ( !sub_1A417A0((int)(uintptr_t)(a1), v26, v25, v24, (int)(uintptr_t)(v28), (int)(uintptr_t)(v27), a5) || !sub_1A41630((int)(uintptr_t)(a1), v28, (int)(uintptr_t)(v27), a5) )
            goto LABEL_30;
        }
        else if ( !sub_1A417A0((int)(uintptr_t)(a1), v26, v28, v27, (int)(uintptr_t)(v25), (int)(uintptr_t)(v24), a5)
               || !sub_1A41630((int)(uintptr_t)(a1), v25, (int)(uintptr_t)(v24), a5) )
        {
          goto LABEL_30;
        }
        v18 >>= 1;
      }
      while ( v18 != 0 );
      --v29;
      v34 -= 4;
      v18 = 0x80000000;
    }
    if ( v24[1] == 0 )
    {
      BN_set_word(v28, 0);
      BN_set_word(v27, 0);
      v20 = EC_POINT_set_to_infinity((int)(uintptr_t)(a1), a2);
      v9 = 0;
      if ( v20 == 0 )
        goto LABEL_11;
      goto LABEL_39;
    }
    v33 = a4 + 6;
    if ( a2[7] != 0 )
    {
      BN_CTX_start((int)(uintptr_t)(a5));
      v30 = BN_CTX_get(a5);
      v21 = BN_CTX_get(a5);
      v22 = BN_CTX_get(a5);
      v35 = v22;
      if ( v22 == nullptr
        || BN_set_word(v22, 1) == 0
        || G4_VCALL<int>(a1, 128, v30, v24, v27, a5) == 0
        || G4_VCALL<int>(a1, 128, v24, v24, v26, a5) == 0
        || BN_GF2m_add(v24, v24, v25) == 0
        || G4_VCALL<int>(a1, 128, v27, v27, v26, a5) == 0
        || G4_VCALL<int>(a1, 128, v25, v27, v25, a5) == 0
        || BN_GF2m_add(v27, v27, v28) == 0
        || G4_VCALL<int>(a1, 128, v27, v27, v24, a5) == 0
        || G4_VCALL<int>(a1, 132, v21, v26, a5) == 0
        || BN_GF2m_add(v21, v21, v33) == 0
        || G4_VCALL<int>(a1, 128, v21, v21, v30, a5) == 0
        || BN_GF2m_add(v21, v21, v27) == 0
        || G4_VCALL<int>(a1, 128, v30, v30, v26, a5) == 0
        || G4_VCALL<int>(a1, 136, v30, v35, v30, a5) == 0
        || G4_VCALL<int>(a1, 128, v21, v30, v21, a5) == 0
        || G4_VCALL<int>(a1, 128, v28, v25, v30, a5) == 0
        || BN_GF2m_add(v27, v28, v26) == 0
        || G4_VCALL<int>(a1, 128, v27, v27, v21, a5) == 0
        || BN_GF2m_add(v27, v27, v33) == 0 )
      {
        BN_CTX_end(a5);
        v9 = 0;
        goto LABEL_11;
      }
      BN_CTX_end(a5);
    }
    else if ( BN_copy(v28, v26) == nullptr || BN_GF2m_add(v27, v26, v33) == 0 )
    {
LABEL_30:
      v9 = 0;
      goto LABEL_11;
    }
    v19 = BN_set_word(a2 + 11, 1);
    v9 = 0;
    if ( v19 != 0 )
    {
      a2[16] = 1;
LABEL_39:
      BN_set_negative((unsigned int)(uintptr_t)(v28), 0);
      BN_set_negative((unsigned int)(uintptr_t)(v27), 0);
      v9 = 1;
    }
LABEL_11:
    v23 = v9;
    BN_CTX_end(a5);
    return v23;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_mul  (binary VA: 0x1a42140)
// Original: ec_GF2m_simple_mul
// ----------------------------------------------------------------------------
int ec_GF2m_simple_mul(int a1, uint32_t *a2, uint32_t *a3, unsigned int a4, uint32_t **a5, int a6, int *a7)
{
  void **v7;
  uint32_t *v8;
  int v9;
  int have_precompute_mult;
  uint8_t *v12;
  int v13;
  void **v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint8_t *v18;
  bool v19;

  v7 = nullptr;
  v8 = a3;
  if ( a7 == nullptr )
  {
    v9 = 0;
    v14 = (void **)BN_CTX_new();
    v7 = v14;
    v8 = a3;
    if ( v14 == nullptr )
      return v9;
    a7 = (int *)v14;
  }
  v19 = v8 != nullptr;
  if ( a4 > 1 && v8 != nullptr
    || a4 > 2
    || a4 == 0
    && (v15 = v8, have_precompute_mult = EC_GROUP_have_precompute_mult(a1), v8 = v15, have_precompute_mult != 0) )
  {
    v9 = ec_wNAF_mul(a1, a2, v8, a4, a5, a6, (int)(uintptr_t)(a7));
  }
  else
  {
    v16 = v8;
    v9 = 0;
    v18 = EC_POINT_new((int *)a1);
    if ( v18 != nullptr )
    {
      v12 = EC_POINT_new((int *)a1);
      v17 = (uint32_t *)(v12);
      if ( v12 != nullptr && EC_POINT_set_to_infinity(a1, v12) != 0 )
      {
        if ( !v19
          || sub_1A41940((uint32_t *)a1, v18, v16, *(uint32_t **)(a1 + 4), a7) != 0
          && (v16[3] == 0 || G4_VCALL<int>(a1, 92, v18, a7) != 0)
          && (v9 = 0,
              G4_VCALL<int>(a1, 84, v17, v17, v18, a7) != 0) )
        {
          v13 = 0;
          if ( a4 != 0 )
          {
            while ( sub_1A41940((uint32_t *)a1, v18, *(uint32_t **)(a6 + 4 * v13), a5[v13], a7) != 0
                 && (*(uint32_t *)(*(uint32_t *)(a6 + 4 * v13) + 12) == 0
                  || (*(int (**)(int, uint8_t *, int *))(*(uint32_t *)a1 + 92))(a1, v18, a7) != 0)
                 && G4_VCALL<int>(a1, 84, v17, v17, v18, a7) != 0 )
            {
              if ( ++v13 == a4 )
                goto LABEL_32;
            }
            v9 = 0;
          }
          else
          {
LABEL_32:
            v9 = EC_POINT_copy(a2, v17) != 0;
          }
        }
      }
      EC_POINT_free(v18);
      if ( v17 != nullptr )
        EC_POINT_free(v17);
    }
  }
  if ( v7 != nullptr )
    BN_CTX_free(v7);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_precompute_mult  (binary VA: 0x1a42420)
// Original: ec_GF2m_precompute_mult
// ----------------------------------------------------------------------------
bool ec_GF2m_precompute_mult(int a1, int *a2)
{
  return ec_wNAF_precompute_mult(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_have_precompute_mult  (binary VA: 0x1a42450)
// Original: ec_GF2m_have_precompute_mult
// ----------------------------------------------------------------------------
bool ec_GF2m_have_precompute_mult(int a1)
{
  return ec_wNAF_have_precompute_mult(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A44730  (binary VA: 0x1a44730)
// Original: sub_1A44730
// ----------------------------------------------------------------------------
int sub_1A44730(int a1, uint32_t *a2, int *a3)
{
  int v3;
  const char *v4;
  int v5;
  const char *v6;
  int v7;
  int v8;
  void ***v9;
  int *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int *v14;
  int issuer_name;
  int serialNumber;
  int ext_by_NID;
  int *ext;
  bool v20;
  int *v21;
  int v22;
  char v23;
  void **v24;
  char v25;
  void **v26;

  v3 = 0;
  v25 = 0;
  v23 = 0;
  while ( v3 < sk_num((int)(uintptr_t)(a3)) )
  {
    v5 = sk_value(a3, v3);
    if ( strcmp(*(const char **)(v5 + 4), "keyid") == 0 )
    {
      v4 = *(const char **)(v5 + 8);
      v23 = 1;
      if ( v4 != nullptr )
        v23 = 2 - (strcmp(v4, "always") != 0);
    }
    else
    {
      if ( strcmp(*(const char **)(v5 + 4), "issuer") != 0 )
      {
        v22 = v5;
        ERR_put_error(34, 119, 120, (int)(uintptr_t)(&unk_1B15112), 0);
        ERR_add_error_data(2, "name=", *(uint32_t *)(v22 + 4));
        return 0;
      }
      v6 = *(const char **)(v5 + 8);
      v25 = 1;
      if ( v6 != nullptr )
        v25 = 2 - (strcmp(v6, "always") != 0);
    }
    ++v3;
  }
  if ( a2 != nullptr )
  {
    v7 = a2[1];
    if ( v7 != 0 )
    {
      v26 = nullptr;
      if ( v23 == 0 )
        goto LABEL_13;
      ext_by_NID = X509_get_ext_by_NID(v7, 82, -1);
      if ( ext_by_NID >= 0 && (ext = (int *)X509_get_ext(v7, ext_by_NID)) != nullptr )
      {
        v26 = (void **)X509V3_EXT_d2i(ext);
        v20 = v26 == nullptr;
        if ( v26 != nullptr )
          goto LABEL_14;
      }
      else
      {
        v20 = true;
        v26 = nullptr;
      }
      if ( v23 == 2 )
      {
        v9 = nullptr;
        ERR_put_error(34, 119, 123, (int)(uintptr_t)(&unk_1B15112), 0);
        return (int)(uintptr_t)(v9);
      }
      if ( v20 )
      {
LABEL_13:
        if ( v25 != 0 )
        {
LABEL_23:
          issuer_name = X509_get_issuer_name(v7);
          v8 = X509_NAME_dup(issuer_name);
          serialNumber = X509_get_serialNumber(v7);
          v24 = ASN1_STRING_dup(serialNumber);
          if ( v24 == nullptr || v8 == 0 )
          {
            ERR_put_error(34, 119, 122, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_26;
          }
LABEL_15:
          v9 = (void ***)AUTHORITY_KEYID_new();
          if ( v9 != nullptr )
          {
            if ( v8 == 0 )
            {
              v14 = nullptr;
              goto LABEL_21;
            }
            v10 = (int *)(sk_new_null());
            if ( v10 != nullptr )
            {
              v21 = v10;
              v11 = GENERAL_NAME_new();
              v12 = (uint32_t *)v11;
              if ( v11 != 0 )
              {
                v13 = sk_push(v21, v11);
                v14 = v21;
                if ( v13 != 0 )
                {
                  *v12 = 4;
                  v12[1] = v8;
LABEL_21:
                  v9[1] = (void **)v14;
                  v9[2] = v24;
                  *v9 = v26;
                  return (int)(uintptr_t)(v9);
                }
              }
            }
            ERR_put_error(34, 119, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          }
LABEL_26:
          v9 = nullptr;
          X509_NAME_free(v8);
          ASN1_STRING_free(v24);
          ASN1_STRING_free(v26);
          return (int)(uintptr_t)(v9);
        }
      }
LABEL_14:
      v8 = 0;
      v24 = nullptr;
      if ( v25 != 2 )
        goto LABEL_15;
      goto LABEL_23;
    }
    if ( *a2 == 1 )
      return AUTHORITY_KEYID_new();
  }
  v9 = nullptr;
  ERR_put_error(34, 119, 121, (int)(uintptr_t)(&unk_1B15112), 0);
  return (int)(uintptr_t)(v9);
}

// ----------------------------------------------------------------------------
// Function: sub_1A44B00  (binary VA: 0x1a44b00)
// Original: sub_1A44B00
// ----------------------------------------------------------------------------
uint32_t * sub_1A44B00(int a1, int a2, uint32_t *a3)
{
  char *v3;
  int v4;
  char *v5;

  if ( *(uint32_t *)a2 != 0 )
  {
    v3 = (char *)(hex_to_string(*(char **)(*(uint32_t *)a2 + 8), **(uint32_t **)a2));
    X509V3_add_value("keyid", v3, &a3);
    CRYPTO_free(v3);
  }
  if ( *(uint32_t *)(a2 + 4) != 0 )
    a3 = i2v_GENERAL_NAMES(0, *(int **)(a2 + 4), (int)(uintptr_t)(a3));
  v4 = *(uint32_t *)(a2 + 8);
  if ( v4 != 0 )
  {
    v5 = (char *)(hex_to_string(*(char **)(v4 + 8), *(uint32_t *)v4));
    X509V3_add_value("serial", v5, &a3);
    CRYPTO_free(v5);
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: i2v_ASN1_BIT_STRING  (binary VA: 0x1a44bd0)
// Original: i2v_ASN1_BIT_STRING
// ----------------------------------------------------------------------------
int i2v_ASN1_BIT_STRING(int a1, int *a2, int a3)
{
  int v3;

  if ( *(uint32_t *)(*(uint32_t *)(a1 + 52) + 4) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 52);
    do
    {
      if ( ASN1_BIT_STRING_get_bit(a2, *(uint32_t *)v3) )
        X509V3_add_value(*(char **)(v3 + 4), nullptr, (int **)&a3);
      v3 += 12;
    }
    while ( *(uint32_t *)(v3 + 4) != 0 );
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: v2i_ASN1_BIT_STRING  (binary VA: 0x1a44c60)
// Original: v2i_ASN1_BIT_STRING
// ----------------------------------------------------------------------------
void ** v2i_ASN1_BIT_STRING(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  const char *s1;
  const char *s2;
  int i;
  uint32_t *v9;
  void **v10;

  v10 = (void **)ASN1_STRING_type_new(3);
  if ( v10 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v3 = sk_value(a3, i);
      v9 = (uint32_t *)v3;
      v4 = *(uint32_t *)(a1 + 52);
      s1 = *(const char **)(v4 + 4);
      if ( s1 == nullptr )
        goto LABEL_14;
      s2 = *(const char **)(v3 + 4);
      while ( strcmp(*(const char **)(v4 + 8), s2) != 0 && strcmp(s1, s2) != 0 )
      {
        v4 += 12;
        s1 = *(const char **)(v4 + 4);
        if ( s1 == nullptr )
          goto LABEL_14;
      }
      if ( ASN1_BIT_STRING_set_bit((int *)v10, *(uint32_t *)v4, 1) == 0 )
      {
        ERR_put_error(34, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        ASN1_STRING_free(v10);
        return nullptr;
      }
      if ( *(uint32_t *)(v4 + 4) == 0 )
      {
LABEL_14:
        ERR_put_error(34, 101, 111, (int)(uintptr_t)(&unk_1B15112), 0);
        ERR_add_error_data(6, "section:", *v9, ",name:", v9[1], ",value:", v9[2]);
        ASN1_STRING_free(v10);
        return nullptr;
      }
    }
  }
  else
  {
    ERR_put_error(34, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: i2s_ASN1_ENUMERATED_TABLE  (binary VA: 0x1a44e60)
// Original: i2s_ASN1_ENUMERATED_TABLE
// ----------------------------------------------------------------------------
char * i2s_ASN1_ENUMERATED_TABLE(int a1, int *a2)
{
  int v2;
  uint32_t *v3;
  char *v4;
  char **v5;

  v2 = ASN1_ENUMERATED_get(a2);
  v3 = *(uint32_t **)(a1 + 52);
  v4 = (char *)v3[1];
  if ( v4 == nullptr )
    return (char *)i2s_ASN1_ENUMERATED(a1, (int)(uintptr_t)(a2));
  if ( *v3 != v2 )
  {
    v5 = (char **)(v3 + 4);
    while ( 1 )
    {
      v4 = *v5;
      if ( *v5 == nullptr )
        break;
      v5 += 3;
      if ( *(v5 - 4) == (char *)v2 )
        return BUF_strdup(v4);
    }
    return (char *)i2s_ASN1_ENUMERATED(a1, (int)(uintptr_t)(a2));
  }
  return BUF_strdup(v4);
}

// ----------------------------------------------------------------------------
// Function: sub_1A44ED0  (binary VA: 0x1a44ed0)
// Original: sub_1A44ED0
// ----------------------------------------------------------------------------
int sub_1A44ED0(int a1, int *a2, int a3)
{
  int i;
  int v4;
  char v6[108];

  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    v4 = sk_value(a2, i);
    i2t_ASN1_OBJECT(v6, 80, v4);
    X509V3_add_value(nullptr, v6, (int **)&a3);
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A44F60  (binary VA: 0x1a44f60)
// Original: sub_1A44F60
// ----------------------------------------------------------------------------
void ** sub_1A44F60(int a1, int a2, int *a3)
{
  int i;
  char **v4;
  uint32_t *v5;
  char *v6;
  void **v8;

  v8 = (void **)sk_new_null();
  if ( v8 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v5 = (uint32_t *)sk_value(a3, i);
      v6 = (char *)v5[2];
      if ( v6 == nullptr )
        v6 = (char *)v5[1];
      v4 = OBJ_txt2obj(v6, 0);
      if ( v4 == nullptr )
      {
        sk_pop_free(v8, (void (*)(uint32_t))ASN1_OBJECT_free);
        ERR_put_error(34, 103, 110, (int)(uintptr_t)(&unk_1B15112), 0);
        ERR_add_error_data(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
        return nullptr;
      }
      sk_push((int *)v8, (int)(uintptr_t)(v4));
    }
  }
  else
  {
    ERR_put_error(34, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: EXTENDED_KEY_USAGE_new  (binary VA: 0x1a45130)
// Original: EXTENDED_KEY_USAGE_new
// ----------------------------------------------------------------------------
int EXTENDED_KEY_USAGE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&EXTENDED_KEY_USAGE_it));
}

// ----------------------------------------------------------------------------
// Function: EXTENDED_KEY_USAGE_free  (binary VA: 0x1a45160)
// Original: EXTENDED_KEY_USAGE_free
// ----------------------------------------------------------------------------
int EXTENDED_KEY_USAGE_free(char a1)
{
  return ASN1_item_free(a1, EXTENDED_KEY_USAGE_it);
}

// ----------------------------------------------------------------------------
// Function: sub_1A45190  (binary VA: 0x1a45190)
// Original: sub_1A45190
// ----------------------------------------------------------------------------
void ** sub_1A45190(int a1, int a2, char *s)
{
  void **v3;
  size_t v4;

  if ( s == nullptr )
  {
    v3 = nullptr;
    ERR_put_error(34, 100, 107, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3;
  }
  v3 = (void **)ASN1_STRING_type_new(22);
  if ( v3 == nullptr )
    goto LABEL_6;
  v4 = strlen(s);
  if ( ASN1_STRING_set((int)(uintptr_t)(v3), s, v4) == 0 )
  {
    ASN1_STRING_free(v3);
LABEL_6:
    v3 = nullptr;
    ERR_put_error(34, 100, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A45270  (binary VA: 0x1a45270)
// Original: sub_1A45270
// ----------------------------------------------------------------------------
uint8_t * sub_1A45270(int a1, int a2)
{
  uint8_t *dest;

  if ( a2 == 0 )
    return nullptr;
  dest = nullptr;
  if ( *(uint32_t *)a2 != 0 )
  {
    dest = CRYPTO_malloc(*(uint32_t *)a2 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( dest != nullptr )
    {
      memcpy(dest, *(const void **)(a2 + 8), *(uint32_t *)a2);
      dest[*(uint32_t *)a2] = 0;
    }
    else
    {
      ERR_put_error(34, 149, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return dest;
}

// ----------------------------------------------------------------------------
// Function: sub_1A45330  (binary VA: 0x1a45330)
// Original: sub_1A45330
// ----------------------------------------------------------------------------
int * sub_1A45330(int a1, int a2, int *a3)
{
  return s2i_ASN1_INTEGER(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1A45360  (binary VA: 0x1a45360)
// Original: sub_1A45360
// ----------------------------------------------------------------------------
int sub_1A45360(int a1, int a2)
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
// Function: sub_1A45A10  (binary VA: 0x1a45a10)
// Original: sub_1A45A10
// ----------------------------------------------------------------------------
int sub_1A45A10(const char ***a1, const char ***a2)
{
  return strcmp(**a1, **a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A45A50  (binary VA: 0x1a45a50)
// Original: sub_1A45A50
// ----------------------------------------------------------------------------
int sub_1A45A50(const char ***a1, const char ***a2)
{
  return strcmp(**a1, **a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A45A90  (binary VA: 0x1a45a90)
// Original: sub_1A45A90
// ----------------------------------------------------------------------------
uint32_t * sub_1A45A90(char *a1, char *a2)
{
  char *v2;
  char *v3;
  char v4;
  char *v5;
  int c;
  char *v7;
  char *v8;
  char v9;
  char *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  char *v17;

  if ( a1 != nullptr )
  {
    v2 = BUF_strdup(a1);
    v3 = v2;
    if ( v2 == nullptr )
      return nullptr;
    v4 = *v2;
    if ( v4 != 0 )
    {
      v5 = v3;
      do
      {
        c = v4;
        if ( isupper(v4) != 0 )
          *v5 = tolower(c);
        v4 = *++v5;
      }
      while ( *v5 != 0 );
    }
    if ( a2 != nullptr )
    {
LABEL_9:
      v7 = BUF_strdup(a2);
      v17 = v7;
      if ( v7 != nullptr )
      {
        v8 = v7;
        v9 = *v7;
        if ( v9 != 0 )
        {
          v10 = v8;
          do
          {
            v11 = v9;
            if ( isupper(v9) != 0 )
              *v10 = tolower(v11);
            v9 = *++v10;
          }
          while ( *v10 != 0 );
        }
        goto LABEL_15;
      }
      return nullptr;
    }
  }
  else
  {
    v3 = nullptr;
    if ( a2 != nullptr )
      goto LABEL_9;
  }
  v17 = nullptr;
LABEL_15:
  v12 = (uint32_t *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
  v13 = v12;
  if ( v12 != nullptr )
  {
    *v12 = (uint32_t)(uintptr_t)(v3);
    v12[1] = (uint32_t)(uintptr_t)(v17);
    v14 = sk_new((int)(uintptr_t)(sub_1A45A10));
    v13[2] = (uint32_t)(uintptr_t)(v14);
    if ( v14 == nullptr )
      return nullptr;
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_1A45BC0  (binary VA: 0x1a45bc0)
// Original: sub_1A45BC0
// ----------------------------------------------------------------------------
const char * sub_1A45BC0(const char *a1)
{
  const char *s;
  uint8_t v2;
  char * v4;

  s = a1;
  v2 = *a1;
  if ( v2 == 0 )
    return nullptr;
  while ( v2 != 34 )
  {
    if ( isspace(v2) == 0 )
      goto LABEL_11;
    v2 = s[1];
    if ( v2 == 0 )
      return nullptr;
    ++s;
  }
  if ( s[1] == 0 )
    return nullptr;
  ++s;
LABEL_11:
  if ( s == nullptr )
    return s;
  v4 = (char *)(&s[strlen(s) - 1]);
  if ( s > v4 )
    return nullptr;
  while ( *v4 != 34 )
  {
    if ( isspace(*(uint8_t *)v4) == 0 )
      return s;
    *v4-- = 0;
    if ( s > v4 )
      return nullptr;
  }
  if ( s == v4 - 1 )
    return nullptr;
  *((char *)v4) = 0;
  return s;
}

// ----------------------------------------------------------------------------
// Function: sub_1A45C70  (binary VA: 0x1a45c70)
// Original: sub_1A45C70
// ----------------------------------------------------------------------------
int sub_1A45C70(void *a1)
{
  if ( *(uint32_t *)a1 != 0 )
    CRYPTO_free(*(void **)a1);
  if ( *((uint32_t *)a1 + 1) != 0 )
    CRYPTO_free(*((void **)a1 + 1));
  if ( *((uint32_t *)a1 + 2) != 0 )
    sk_pop_free(*((void ***)a1 + 2), (void (*)(uint32_t))sub_1A45CE0);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A45CE0  (binary VA: 0x1a45ce0)
// Original: sub_1A45CE0
// ----------------------------------------------------------------------------
int sub_1A45CE0(void **a1)
{
  if ( *a1 != nullptr )
    CRYPTO_free(*a1);
  if ( a1[1] != nullptr )
    CRYPTO_free(a1[1]);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A45D30  (binary VA: 0x1a45d30)
// Original: sub_1A45D30
// ----------------------------------------------------------------------------
int sub_1A45D30(uint32_t *a1, const char *s, int **a3)
{
  int v3;
  size_t n;
  int v6;
  char v7;
  void *v8;
  typedef size_t _g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef uint8_t *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v16;
  typedef int *_g4_t_v17;
  typedef const char *_g4_t_v18;
  typedef char _g4_t_v19[2];
  typedef char _g4_t_s1[1050];
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v13)) > _g4_s3 ? (30u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v14)) > _g4_s4 ? (31u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (50u + sizeof(_g4_t_s1)) > _g4_s9 ? (50u + sizeof(_g4_t_s1)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 50u);

  v10 = strlen(s);
  v17 = (int *)(sk_new_null());
  v13 = 1;
  v14 = 0;
  v12 = nullptr;
  v16 = 0;
  *a3 = v17;
  v18 = "\r\n";
  while ( 1 )
  {
    v3 = BIO_gets(a1, (int)(uintptr_t)(v19), 1024);
    if ( v3 <= 0 )
      return 0;
    n = v10;
    if ( v10 == -1 )
      n = strlen(s);
    if ( v3 > (int)(n + 1) && memcmp(v19, "--", 2u) == 0 && (v9 = n, strncmp(s1, s, n) == 0) )
    {
      if ( memcmp(&s1[v9], "--", 2u) == 0 )
      {
        sk_push(v17, (int)(uintptr_t)(v12));
        return 1;
      }
      ++v14;
      v13 = 1;
    }
    else if ( v14 != 0 )
    {
      v6 = 0;
      do
      {
        while ( 1 )
        {
          v7 = v19[v3 - 1];
          if ( v7 != 10 )
            break;
          --v3;
          v6 = 1;
          if ( v3 == 0 )
            goto LABEL_16;
        }
        if ( v7 != 13 )
          break;
        --v3;
      }
      while ( v3 != 0 );
LABEL_16:
      if ( v13 != 0 )
      {
        if ( v12 != nullptr )
          sk_push(v17, (int)(uintptr_t)(v12));
        v8 = BIO_s_mem();
        v12 = BIO_new((int)(uintptr_t)(v8));
        BIO_ctrl(v12, 130, 0, 0);
      }
      else if ( v16 != 0 )
      {
        BIO_write(v12, (int)(uintptr_t)(v18), 2);
      }
      v16 = v6;
      v13 = 0;
      if ( v3 != 0 )
        BIO_write(v12, (int)(uintptr_t)(v19), v3);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A45F80  (binary VA: 0x1a45f80)
// Original: sub_1A45F80
// ----------------------------------------------------------------------------
int sub_1A45F80(int **a1, char *a2, char *a3)
{
  char *v4;
  int v5;
  char *v6;
  char v7;
  char *v8;
  int c;
  char *v10;
  char *v11;
  uint32_t *v12;
  char *v14;

  if ( a2 != nullptr )
  {
    v4 = BUF_strdup(a2);
    v5 = 0;
    v14 = v4;
    if ( v4 == nullptr )
      return v5;
    v6 = v4;
    v7 = *v4;
    if ( v7 != 0 )
    {
      v8 = v6;
      do
      {
        c = v7;
        if ( isupper(v7) != 0 )
          *v8 = tolower(c);
        v7 = *++v8;
      }
      while ( *v8 != 0 );
    }
    if ( a3 != nullptr )
      goto LABEL_9;
  }
  else
  {
    v14 = nullptr;
    if ( a3 != nullptr )
    {
LABEL_9:
      v10 = BUF_strdup(a3);
      v5 = 0;
      v11 = v10;
      if ( v10 == nullptr )
        return v5;
      goto LABEL_10;
    }
  }
  v11 = nullptr;
LABEL_10:
  v12 = (uint32_t *)(CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0));
  v5 = 0;
  if ( v12 != nullptr )
  {
    v12[1] = (uint32_t)(uintptr_t)(v11);
    *v12 = (uint32_t)(uintptr_t)(v14);
    sk_push(*a1, (int)(uintptr_t)(v12));
    return 1;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A46070  (binary VA: 0x1a46070)
// Original: sub_1A46070
// ----------------------------------------------------------------------------
int * sub_1A46070(uint32_t *a1)
{
  char v1;
  int v2;
  int v3;
  const char *v4;
  uint8_t *v5;
  uint8_t *v6;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  typedef char _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef int **_g4_t_v14;
  typedef int _g4_t_v16;
  typedef int *_g4_t_v17;
  typedef uint8_t _g4_t_v18[1052];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  v17 = (int *)(sk_new((int)(uintptr_t)(sub_1A45A50)));
  v16 = 0;
  v14 = nullptr;
  do
  {
    if ( BIO_gets(a1, (int)(uintptr_t)(v18), 1024) <= 0 )
      break;
    v1 = v18[0];
    if ( v14 != nullptr )
    {
      v12 = v18[0];
      v2 = isspace(v18[0]);
      v3 = 3;
      v1 = v12;
      if ( v2 != 0 )
        continue;
    }
    v3 = 1;
    v13 = nullptr;
    v4 = (const char *)(v18);
    if ( v1 != 0 && v1 != 10 )
    {
      v5 = v18;
      if ( v1 != 13 )
      {
        while ( 1 )
        {
          switch ( v3 )
          {
            case 1:
              if ( v1 != 58 )
                goto LABEL_10;
              *v5 = 0;
              v13 = (char *)sub_1A45BC0(v4);
              v3 = 2;
              v4 = (const char *)(v5 + 1);
              v6 = v5 + 1;
              goto LABEL_11;
            case 2:
              if ( v1 == 59 )
              {
                *v5 = 0;
                v8 = (char *)sub_1A45BC0(v4);
                v14 = (int **)sub_1A45A90(v13, v8);
                sk_push(v17, (int)(uintptr_t)(v14));
                v4 = (const char *)(v5 + 1);
                v3 = 3;
                v6 = v5 + 1;
                v13 = nullptr;
              }
              else
              {
                v6 = v5 + 1;
                if ( v1 == 40 )
                {
                  v16 = 2;
                  v3 = 6;
                }
              }
              goto LABEL_11;
            case 3:
              if ( v1 != 61 )
                goto LABEL_10;
              *v5 = 0;
              v13 = (char *)sub_1A45BC0(v4);
              v3 = 4;
              v4 = (const char *)(v5 + 1);
              v6 = v5 + 1;
              goto LABEL_11;
            case 4:
              if ( v1 == 59 )
              {
                *v5 = 0;
                v9 = (char *)sub_1A45BC0(v4);
                sub_1A45F80(v14 + 2, v13, v9);
                v4 = (const char *)(v5 + 1);
                v3 = 3;
                v6 = v5 + 1;
                v13 = nullptr;
              }
              else
              {
                v6 = v5 + 1;
                if ( v1 == 34 )
                {
                  v3 = 5;
                }
                else if ( v1 == 40 )
                {
                  v16 = 4;
                  v3 = 6;
                }
              }
              goto LABEL_11;
            case 5:
              v6 = v5 + 1;
              if ( v1 == 34 )
                v3 = 4;
              goto LABEL_11;
            case 6:
              v6 = v5 + 1;
              if ( v1 != 41 )
                goto LABEL_11;
              v1 = v5[1];
              v3 = v16;
              if ( v1 == 0 )
                goto LABEL_18;
              goto LABEL_12;
            default:
LABEL_10:
              v6 = v5 + 1;
LABEL_11:
              v1 = v5[1];
              if ( v1 == 0 )
                goto LABEL_18;
LABEL_12:
              if ( v1 == 10 || v1 == 13 )
                goto LABEL_18;
              v5 = v6;
              break;
          }
        }
      }
    }
    v6 = v18;
LABEL_18:
    if ( v3 == 2 )
    {
      v10 = (char *)sub_1A45BC0(v4);
      v14 = (int **)sub_1A45A90(v13, v10);
      sk_push(v17, (int)(uintptr_t)(v14));
    }
    else if ( v3 == 4 )
    {
      v11 = (char *)sub_1A45BC0(v4);
      sub_1A45F80(v14 + 2, v13, v11);
    }
  }
  while ( v6 != v18 );
  return v17;
}

// ----------------------------------------------------------------------------
// Function: sub_1A46330  (binary VA: 0x1a46330)
// Original: sub_1A46330
// ----------------------------------------------------------------------------
int sub_1A46330(uint32_t *a1, int a2)
{
  int v4;
  uint8_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;

  v4 = (int)(uintptr_t)(BIO_f_base64());
  v5 = BIO_new(v4);
  v6 = (uint32_t *)(v5);
  if ( v5 != nullptr )
  {
    v7 = BIO_push(v5, a1);
    v8 = ASN1_item_d2i_bio(a2, v7, nullptr);
    if ( v8 == 0 )
      ERR_put_error(13, 209, 110, (int)(uintptr_t)(&unk_1B15112), 0);
    BIO_ctrl(v7, 11, 0, 0);
    BIO_pop(v7);
    BIO_free(v6);
  }
  else
  {
    v8 = 0;
    ERR_put_error(13, 209, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_1A46450  (binary VA: 0x1a46450)
// Original: sub_1A46450
// ----------------------------------------------------------------------------
int sub_1A46450(int *a1)
{
  int v2;
  int result;
  typedef const char *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  v4 = "content-type";
  v2 = sk_find((int)(uintptr_t)(a1), (int)(uintptr_t)(&v4));
  result = 0;
  if ( v2 >= 0 )
    return sk_value(a1, v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SMIME_read_ASN1  (binary VA: 0x1a464b0)
// Original: SMIME_read_ASN1
// ----------------------------------------------------------------------------
int SMIME_read_ASN1(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  const char *v5;
  int v6;
  int v8;
  int v9;
  const char *v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int *_g4_t_v14;
  typedef int *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef const char *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);

  v17 = nullptr;
  if ( a2 != nullptr )
    *a2 = 0;
  v14 = sub_1A46070(a1);
  if ( v14 == nullptr )
  {
    v6 = 0;
    ERR_put_error(13, 212, 207, (int)(uintptr_t)(&unk_1B15112), 0);
    return v6;
  }
  v3 = sub_1A46450(v14);
  v4 = v3;
  if ( v3 == 0 || (v5 = *(const char **)(v3 + 4)) == nullptr )
  {
    v6 = 0;
    sk_pop_free((void **)v14, (void (*)(uint32_t))sub_1A45C70);
    ERR_put_error(13, 212, 209, (int)(uintptr_t)(&unk_1B15112), 0);
    return v6;
  }
  if ( strcmp(v5, "multipart/signed") != 0 )
  {
    if ( strcmp(v5, "application/x-pkcs7-mime") == 0 || strcmp(v5, "application/pkcs7-mime") == 0 )
    {
      sk_pop_free((void **)v14, (void (*)(uint32_t))sub_1A45C70);
      v6 = sub_1A46330(a1, a3);
      if ( v6 == 0 )
        ERR_put_error(13, 212, 203, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(13, 212, 205, (int)(uintptr_t)(&unk_1B15112), 0);
      v6 = 0;
      ERR_add_error_data(2, "type: ", *(uint32_t *)(v4 + 4));
      sk_pop_free((void **)v14, (void (*)(uint32_t))sub_1A45C70);
    }
    return v6;
  }
  v18 = "boundary";
  v8 = sk_find(*(uint32_t *)(v4 + 8), (int)(uintptr_t)(&v18));
  if ( v8 < 0 || (v9 = sk_value(*(int **)(v4 + 8), v8)) == 0 || (v10 = *(const char **)(v9 + 4)) == nullptr )
  {
    v6 = 0;
    sk_pop_free((void **)v14, (void (*)(uint32_t))sub_1A45C70);
    ERR_put_error(13, 212, 211, (int)(uintptr_t)(&unk_1B15112), 0);
    return v6;
  }
  v11 = sub_1A45D30(a1, v10, (int **)&v17);
  sk_pop_free((void **)v14, (void (*)(uint32_t))sub_1A45C70);
  if ( v11 != 0 && sk_num((int)(uintptr_t)(v17)) == 2 )
  {
    v16 = (uint32_t *)sk_value((int *)v17, 1);
    v15 = sub_1A46070(v16);
    if ( v15 != nullptr )
    {
      v12 = sub_1A46450(v15);
      if ( v12 == 0 || *(uint32_t *)(v12 + 4) == 0 )
      {
        v6 = 0;
        sk_pop_free((void **)v15, (void (*)(uint32_t))sub_1A45C70);
        ERR_put_error(13, 212, 212, (int)(uintptr_t)(&unk_1B15112), 0);
        return v6;
      }
      if ( strcmp(*(const char **)(v12 + 4), "application/x-pkcs7-signature") == 0
        || strcmp(*(const char **)(v12 + 4), "application/pkcs7-signature") == 0 )
      {
        sk_pop_free((void **)v15, (void (*)(uint32_t))sub_1A45C70);
        v6 = sub_1A46330(v16, a3);
        if ( v6 != 0 )
        {
          if ( a2 != nullptr )
          {
            *a2 = sk_value((int *)v17, 0);
            BIO_free(v16);
            sk_free((void **)v17);
            return v6;
          }
        }
        else
        {
          ERR_put_error(13, 212, 204, (int)(uintptr_t)(&unk_1B15112), 0);
        }
        sk_pop_free((void **)v17, (void (*)(uint32_t))BIO_vfree);
        return v6;
      }
      v13 = v12;
      sk_pop_free((void **)v15, (void (*)(uint32_t))sub_1A45C70);
      ERR_put_error(13, 212, 213, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_add_error_data(2, "type: ", *(uint32_t *)(v13 + 4));
    }
    else
    {
      ERR_put_error(13, 212, 208, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  else
  {
    ERR_put_error(13, 212, 210, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  sk_pop_free((void **)v17, (void (*)(uint32_t))BIO_vfree);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SMIME_crlf_copy  (binary VA: 0x1a469e0)
// Original: SMIME_crlf_copy
// ----------------------------------------------------------------------------
int SMIME_crlf_copy(uint32_t *a1, uint32_t *a2, char a3)
{
  void *v3;
  int result;
  int v5;
  int v6;
  int v7;
  char v8; // di
  char v9;
  int v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint8_t *_g4_t_v12;
  typedef const char *_g4_t_v13;
  typedef uint8_t _g4_t_v14[1052];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v3 = BIO_f_buffer();
  v12 = BIO_new((int)(uintptr_t)(v3));
  result = 0;
  if ( v12 != nullptr )
  {
    v11 = BIO_push(v12, a2);
    if ( a3 < 0 )
    {
      while ( 1 )
      {
        v10 = BIO_read(a1, (int)(uintptr_t)(v14), 1024);
        if ( v10 <= 0 )
          break;
        BIO_write(v11, (int)(uintptr_t)(v14), v10);
      }
    }
    else
    {
      if ( (a3 & 1) != 0 )
        BIO_printf(v5, v6, (int)(uintptr_t)(v11), "Content-Type: text/plain\r\n\r\n");
      v13 = "\r\n";
LABEL_6:
      while ( 1 )
      {
        v7 = BIO_gets(a1, (int)(uintptr_t)(v14), 1024);
        if ( v7 <= 0 )
          break;
        v8 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v9 = v14[v7 - 1];
            if ( v9 != 10 )
              break;
            --v7;
            v8 = 1;
            if ( v7 == 0 )
            {
LABEL_12:
              if ( v8 == 0 )
                goto LABEL_6;
              goto LABEL_13;
            }
          }
          if ( v9 != 13 )
            break;
          if ( --v7 == 0 )
            goto LABEL_12;
        }
        BIO_write(v11, (int)(uintptr_t)(v14), v7);
        if ( v8 != 0 )
        {
LABEL_13:
          BIO_write(v11, (int)(uintptr_t)(v13), 2);
          continue;
        }
      }
    }
    BIO_ctrl(v11, 11, 0, 0);
    BIO_pop(v11);
    BIO_free(v12);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A46CB0  (binary VA: 0x1a46cb0)
// Original: sub_1A46CB0
// ----------------------------------------------------------------------------
int sub_1A46CB0(uint32_t *a1, int a2, uint32_t *a3, int16_t a4, int a5)
{
  int v7;
  uint8_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;

  v7 = (int)(uintptr_t)(BIO_f_base64());
  v8 = BIO_new(v7);
  v9 = (uint32_t *)(v8);
  if ( v8 != nullptr )
  {
    v10 = BIO_push(v8, a1);
    v11 = i2d_ASN1_bio_stream(v10, a2, a3, a4, a5);
    BIO_ctrl(v10, 11, 0, 0);
    BIO_pop(v10);
    BIO_free(v9);
  }
  else
  {
    v11 = 0;
    ERR_put_error(13, 210, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: SMIME_write_ASN1  (binary VA: 0x1a46e30)
// Original: SMIME_write_ASN1
// ----------------------------------------------------------------------------
int SMIME_write_ASN1(uint32_t *a1, void *a2, uint32_t *a3, int16_t a4, int a5, int a6, int *a7, int a8)
{
  int v8;
  const char *v9;
  int16_t *v10;
  const char *v11;
  const char *v12;
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
  char *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  signed int v34;
  char *v35;
  int digestbyname;
  int (*v37)(uint32_t, int, uint32_t, void **);
  int v38;
  int v39;
  uint32_t *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int (*v45)(int, void **, int, uint32_t **);
  int v46;
  uint32_t *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  const char *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef void *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef void *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint8_t _g4_t_v71[32];
  typedef char _g4_t_v72;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v64)) > _g4_s0 ? (12u + sizeof(_g4_t_v64)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v65)) > _g4_s1 ? (16u + sizeof(_g4_t_v65)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v66)) > _g4_s2 ? (28u + sizeof(_g4_t_v66)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v67)) > _g4_s3 ? (44u + sizeof(_g4_t_v67)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v68)) > _g4_s4 ? (48u + sizeof(_g4_t_v68)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v69)) > _g4_s5 ? (52u + sizeof(_g4_t_v69)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v70)) > _g4_s6 ? (56u + sizeof(_g4_t_v70)) : _g4_s6,
    _g4_s8 = (63u + sizeof(_g4_t_v71)) > _g4_s7 ? (63u + sizeof(_g4_t_v71)) : _g4_s7,
    _g4_s9 = (95u + sizeof(_g4_t_v72)) > _g4_s8 ? (95u + sizeof(_g4_t_v72)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 63u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 95u);

  v9 = "application/pkcs7-";
  if ( (a4 & 0x400) != 0 )
    v9 = "application/x-pkcs7-";
  v65 = (int)(uintptr_t)(v9);
  v10 = (int16_t *)(&a0[1]);
  if ( (a4 & 0x800) != 0 )
    v10 = (int16_t *)"\r\n";
  v64 = (int)(uintptr_t)(v10);
  if ( (a4 & 0x40) == 0 || a3 == nullptr )
  {
    if ( a5 == 23 )
    {
      v11 = "enveloped-data";
      v12 = "smime.p7m";
    }
    else if ( a5 == 22 )
    {
      v11 = "signed-receipt";
      v12 = "smime.p7m";
      if ( a6 != 204 )
      {
        v11 = "signed-data";
        if ( sk_num((int)(uintptr_t)(a7)) < 0 )
          v11 = "certs-only";
      }
    }
    else
    {
      v11 = "compressed-data";
      v12 = "smime.p7z";
      if ( a5 != 786 )
      {
        v12 = "smime.p7m";
        BIO_printf((int)(uintptr_t)(v10), v8, (int)(uintptr_t)(a1), "MIME-Version: 1.0%s", v10);
        BIO_printf(v13, v14, (int)(uintptr_t)(a1), "Content-Disposition: attachment;");
        BIO_printf(v15, v16, (int)(uintptr_t)(a1), " filename=\"%s\"%s", "smime.p7m", v64);
        BIO_printf(v65, v17, (int)(uintptr_t)(a1), "Content-Type: %smime;", v65);
        goto LABEL_10;
      }
    }
    BIO_printf((int)(uintptr_t)(v10), v8, (int)(uintptr_t)(a1), "MIME-Version: 1.0%s", v64);
    BIO_printf(v58, v59, (int)(uintptr_t)(a1), "Content-Disposition: attachment;");
    BIO_printf(v64, v60, (int)(uintptr_t)(a1), " filename=\"%s\"%s", v12, v64);
    BIO_printf(v65, v61, (int)(uintptr_t)(a1), "Content-Type: %smime;", v65);
    BIO_printf(v62, v63, (int)(uintptr_t)(a1), " smime-type=%s;", v11);
LABEL_10:
    BIO_printf(v18, v19, (int)(uintptr_t)(a1), " name=\"%s\"%s", v12, v64);
    BIO_printf(v64, v20, (int)(uintptr_t)(a1), "Content-Transfer-Encoding: base64%s%s", v64, v64);
    v23 = 0;
    if ( sub_1A46CB0(a1, (int)(uintptr_t)(a2), a3, a4, a8) != 0 )
    {
      LOWORD(v23) = 1;
      BIO_printf(v21, v22, (int)(uintptr_t)(a1), "%s", v64);
    }
    return v23;
  }
  RAND_pseudo_bytes((int)(uintptr_t)(v71), 32);
  v25 = (char *)(v71);
  do
  {
    v26 = *v25 & 0xF;
    v27 = v26 + 48;
    if ( (*v25 & 0xFu) > 9 )
      v27 = v26 + 55;
    *v25++ = v27;
  }
  while ( v25 != &v72 );
  v72 = 0;
  BIO_printf(v64, v27, (int)(uintptr_t)(a1), "MIME-Version: 1.0%s", v64);
  v28 = 0;
  BIO_printf(v29, v30, (int)(uintptr_t)(a1), "Content-Type: multipart/signed;");
  v31 = 0;
  BIO_printf(v65, v32, (int)(uintptr_t)(a1), " protocol=\"%ssignature\";", v65);
  BIO_puts(a1, (int)(uintptr_t)(" micalg=\""));
  v66 = 0;
  while ( v31 < sk_num((int)(uintptr_t)(a7)) )
  {
    if ( v28 != 0 )
      BIO_write(a1, (int)(uintptr_t)(","), 1);
    v33 = (int *)sk_value(a7, v31);
    v34 = OBJ_obj2nid(*v33);
    v35 = OBJ_nid2sn(v34);
    digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v35));
    if ( digestbyname != 0 )
    {
      v37 = *(int (**)(uint32_t, int, uint32_t, void **))(digestbyname + 72);
      if ( v37 != nullptr )
      {
        v38 = v37(0, 2, 0, &v67);
        if ( v38 > 0 )
        {
          BIO_puts(a1, (int)(uintptr_t)(v67));
          v28 = 1;
          CRYPTO_free(v67);
          goto LABEL_23;
        }
        if ( v38 != -2 )
          break;
      }
    }
    if ( v34 == 672 )
    {
      v57 = "sha-256";
      goto LABEL_46;
    }
    if ( v34 > 672 )
    {
      if ( v34 == 674 )
      {
        v57 = "sha-512";
        goto LABEL_46;
      }
      if ( v34 < 674 )
      {
        v57 = "sha-384";
LABEL_46:
        v28 = 1;
        BIO_puts(a1, (int)(uintptr_t)(v57));
        goto LABEL_23;
      }
      if ( v34 == 809 )
      {
        v40 = a1;
        BIO_puts(a1, (int)(uintptr_t)("gostr3411-94"));
        goto LABEL_38;
      }
    }
    else
    {
      if ( v34 == 4 )
      {
        v57 = "md5";
        goto LABEL_46;
      }
      if ( v34 == 64 )
      {
        v57 = "sha1";
        goto LABEL_46;
      }
    }
    v28 = 0;
    if ( v66 == 0 )
    {
      LOWORD(v28) = 1;
      BIO_puts(a1, (int)(uintptr_t)("unknown"));
      v66 = 1;
    }
LABEL_23:
    ++v31;
  }
  v40 = a1;
LABEL_38:
  BIO_printf((int)(uintptr_t)(v71), v39, (int)(uintptr_t)(v40), "\"; boundary=\"----%s\"%s%s", v71, v64, v64);
  BIO_printf(v41, v42, (int)(uintptr_t)(v40), "This is an S/MIME signed message%s%s", v64, v64);
  BIO_printf(v64, v43, (int)(uintptr_t)(v40), "------%s%s", v71, v64);
  v67 = a2;
  v44 = *(uint32_t *)(a8 + 16);
  if ( v44 != 0 && (v45 = *(int (**)(int, void **, int, uint32_t **))(v44 + 16)) != nullptr )
  {
    v68 = v40;
    v69 = nullptr;
    v70 = 0;
    v23 = 0;
    if ( v45(12, &v67, a8, &v68) > 0 )
    {
      SMIME_crlf_copy(a3, v69, a4);
      if ( (*(int (**)(int, void **, int, uint32_t **))(v44 + 16))(13, &v67, a8, &v68) > 0 )
      {
        v47 = (uint32_t *)(v69);
        if ( v40 != v69 )
        {
          do
          {
            v47 = (uint32_t *)BIO_pop(v47);
            BIO_free(v69);
            v69 = v47;
          }
          while ( v40 != v47 );
        }
        BIO_printf(v64, v46, (int)(uintptr_t)(v40), "%s------%s%s", v64, v71, v64);
        v23 = 1;
        BIO_printf(v65, v48, (int)(uintptr_t)(v40), "Content-Type: %ssignature;", v65);
        BIO_printf(v49, v50, (int)(uintptr_t)(v40), " name=\"smime.p7s\"%s", v64);
        BIO_printf(v64, v51, (int)(uintptr_t)(v40), "Content-Transfer-Encoding: base64%s", v64);
        BIO_printf(v52, v53, (int)(uintptr_t)(v40), "Content-Disposition: attachment;");
        BIO_printf(v54, v55, (int)(uintptr_t)(v40), " filename=\"smime.p7s\"%s%s", v64, v64);
        sub_1A46CB0(v40, (int)(uintptr_t)(a2), nullptr, 0, a8);
        BIO_printf((int)(uintptr_t)(v71), v56, (int)(uintptr_t)(v40), "%s------%s--%s%s", v64, v71, v64, v64);
      }
    }
  }
  else
  {
    v23 = 0;
    ERR_put_error(13, 214, 202, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v23;
}

// ----------------------------------------------------------------------------
// Function: SMIME_text  (binary VA: 0x1a475a0)
// Original: SMIME_text
// ----------------------------------------------------------------------------
bool SMIME_text(uint32_t *a1, uint32_t *a2)
{
  int *v2;
  int v3;
  const char *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef void **_g4_t_v8;
  typedef uint8_t _g4_t_v9[4124];
  enum : size_t {
    _g4_s0 = 4208u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v2 = sub_1A46070(a1);
  if ( v2 == nullptr )
  {
    ERR_put_error(13, 213, 207, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
  v8 = (void **)v2;
  v3 = sub_1A46450(v2);
  v7 = v3;
  if ( v3 == 0 || (v4 = *(const char **)(v3 + 4)) == nullptr )
  {
    ERR_put_error(13, 213, 206, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_10;
  }
  if ( strcmp(v4, "text/plain") != 0 )
  {
    ERR_put_error(13, 213, 205, (int)(uintptr_t)(&unk_1B15112), 0);
    ERR_add_error_data(2, "type: ", *(uint32_t *)(v7 + 4));
LABEL_10:
    sk_pop_free(v8, (void (*)(uint32_t))sub_1A45C70);
    return false;
  }
  sk_pop_free(v8, (void (*)(uint32_t))sub_1A45C70);
  while ( 1 )
  {
    v5 = BIO_read(a1, (int)(uintptr_t)(v9), 4096);
    if ( v5 <= 0 )
      break;
    BIO_write(a2, (int)(uintptr_t)(v9), v5);
  }
  return v5 == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A47750  (binary VA: 0x1a47750)
// Original: sub_1A47750
// ----------------------------------------------------------------------------
int sub_1A47750(int a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a4 != nullptr )
  {
    v5 = *a4;
    if ( *(uint32_t *)(*a4 + 20) != 0 )
      CRYPTO_free(*(void **)(*a4 + 20));
    *(uint32_t *)(v5 + 20) = 0;
    *a2 = 0;
    *a3 = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A477B0  (binary VA: 0x1a477b0)
// Original: sub_1A477B0
// ----------------------------------------------------------------------------
int sub_1A477B0(int a1, uint32_t *a2, uint32_t *a3, int **a4)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  uint32_t *v10;
  typedef void *_g4_t_v12;
  typedef uint32_t _g4_t_v13[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);

  v4 = 0;
  if ( a4 != nullptr )
  {
    v5 = *a4;
    v6 = (*a4)[1];
    v13[1] = (*a4)[2];
    v13[0] = v5[3];
    v13[2] = v5[4];
    if ( (*(int (**)(int, int *, int, uint32_t *))(*(uint32_t *)(v6 + 16) + 16))(11, v5, v5[1], v13) > 0 )
    {
      v7 = ASN1_item_ndef_i2d(*v5, nullptr, v5[1]);
      v8 = CRYPTO_malloc(v7, (int)(uintptr_t)(&unk_1B15112), 0);
      v5[5] = (int)(uintptr_t)(v8);
      v12 = v8;
      *a2 = (uint32_t)(uintptr_t)(v8);
      v9 = ASN1_item_ndef_i2d(*v5, &v12, v5[1]);
      v10 = (uint32_t *)v5[4];
      if ( *v10 != 0 )
      {
        *a2 = *v10;
        LOWORD(v4) = 1;
        *a3 = v9 + v5[5] - *(uint32_t *)v5[4];
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A478B0  (binary VA: 0x1a478b0)
// Original: sub_1A478B0
// ----------------------------------------------------------------------------
int sub_1A478B0(int a1, uint32_t *a2, uint32_t *a3, int **a4)
{
  int v4;
  int *v5;
  int v6;
  uint8_t *v7;
  int v8;
  typedef void *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v4 = 0;
  if ( a4 != nullptr )
  {
    v5 = *a4;
    v6 = ASN1_item_ndef_i2d(**a4, nullptr, (*a4)[1]);
    v7 = CRYPTO_malloc(v6, (int)(uintptr_t)(&unk_1B15112), 0);
    v5[5] = (int)(uintptr_t)(v7);
    v10 = v7;
    *a2 = (uint32_t)(uintptr_t)(v7);
    ASN1_item_ndef_i2d(*v5, &v10, v5[1]);
    v8 = *(uint32_t *)v5[4];
    if ( v8 != 0 )
    {
      LOWORD(v4) = 1;
      *a3 = v8 - *a2;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A47970  (binary VA: 0x1a47970)
// Original: sub_1A47970
// ----------------------------------------------------------------------------
int sub_1A47970(int a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;

  v4 = sub_1A47750(a1, a2, a3, a4);
  v5 = 0;
  if ( v4 != 0 )
  {
    CRYPTO_free((void *)*a4);
    *a4 = 0;
    return 1;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A47BA0  (binary VA: 0x1a47ba0)
// Original: sub_1A47BA0
// ----------------------------------------------------------------------------
int sub_1A47BA0(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_callback_ctrl(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A47BE0  (binary VA: 0x1a47be0)
// Original: sub_1A47BE0
// ----------------------------------------------------------------------------
int sub_1A47BE0(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    CRYPTO_free(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 20) = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A47C40  (binary VA: 0x1a47c40)
// Original: sub_1A47C40
// ----------------------------------------------------------------------------
char sub_1A47C40(uint32_t *a1)
{
  uint32_t *v1;
  char result;

  v1 = (uint32_t *)(CRYPTO_malloc(2652, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[1] = 0;
    v1[6] = 1;
    v1[5] = 1;
    v1[4] = 0;
    a1[3] = 1;
    a1[8] = (uint32_t)(uintptr_t)(v1);
    a1[5] = 0;
    a1[7] = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A47CD0  (binary VA: 0x1a47cd0)
// Original: sub_1A47CD0
// ----------------------------------------------------------------------------
int sub_1A47CD0(int a1, char *dest, signed int a3)
{
  signed int *v3;
  int v4;
  int v5;
  signed int n;
  int v7;
  bool v8;
  int v9;
  signed int v10;
  signed int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  signed int v16;
  signed int v17;
  int v19;
  char *v20;
  signed int *v21;
  char *v22;
  int v23;
  int v24;
  char *v25;
  signed int *v26;
  char v27;
  char *v28;
  int v29;
  int j;
  int v31;
  int i;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef signed int *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint8_t *_g4_t_src;
  typedef signed int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v34)) > _g4_s1 ? (0u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v35)) > _g4_s2 ? (0u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v36)) > _g4_s3 ? (0u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v37)) > _g4_s4 ? (0u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v38)) > _g4_s5 ? (4u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v39)) > _g4_s6 ? (4u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v40)) > _g4_s7 ? (8u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v41)) > _g4_s8 ? (12u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_src)) > _g4_s9 ? (16u + sizeof(_g4_t_src)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v43)) > _g4_s10 ? (20u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v44)) > _g4_s11 ? (24u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v45)) > _g4_s12 ? (24u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v46)) > _g4_s13 ? (44u + sizeof(_g4_t_v46)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);

  v44 = 0;
  if ( dest == nullptr )
    return v44;
  v3 = *(signed int **)(a1 + 32);
  if ( v3 == nullptr || *(uint32_t *)(a1 + 36) == 0 )
    return v44;
  BIO_clear_flags(a1, 15);
  if ( v3[4] != 2 )
  {
    v3[4] = 2;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    EVP_DecodeInit(v3 + 7);
  }
  v4 = *v3;
  v43 = 0;
  if ( *v3 > 0 )
  {
    v5 = v3[1];
    if ( v4 < v5 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
    n = v4 - v5;
    if ( n > a3 )
      n = a3;
    if ( v5 + n > 1501 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_off+i < (int)sizeof(ctx->buf)");
    memcpy(dest, (char *)v3 + v5 + 124, n);
    dest += n;
    v7 = n + v3[1];
    a3 -= n;
    v8 = v7 == *v3;
    v3[1] = v7;
    v43 = n;
    if ( v8 )
    {
      *v3 = 0;
      v3[1] = 0;
    }
  }
  if ( a3 <= 0 )
  {
    v45 = 0;
  }
  else
  {
    v45 = 0;
    if ( v3[6] <= 0 )
      goto LABEL_37;
    src = (uint8_t *)(v3 + 31);
LABEL_19:
    v9 = BIO_read(*(uint32_t **)(a1 + 36), (int)(uintptr_t)(v3) + v3[2] + 1626, 1024 - v3[2]);
    if ( v9 > 0 )
    {
      v10 = v3[2];
      goto LABEL_21;
    }
    if ( BIO_test_flags(*(uint32_t *)(a1 + 36), 8) == 0 )
    {
      v10 = v3[2];
      v3[6] = v9;
      v45 = v9;
      if ( v10 == 0 )
        goto LABEL_37;
      v9 = 0;
LABEL_21:
      v11 = v3[5];
      v12 = v9 + v10;
      v3[2] = v12;
      if ( v11 != 0 )
      {
        v33 = v12;
        v13 = BIO_test_flags(a1, -1);
        v12 = v33;
        if ( (v13 & 0x100) != 0 )
        {
          v3[2] = 0;
          v40 = (char *)v3 + 1626;
          goto LABEL_24;
        }
        if ( v3[5] != 0 )
        {
          v20 = (char *)v3 + 1626;
          v40 = (char *)v3 + 1626;
          if ( v33 <= 0 )
          {
            v28 = (char *)v3 + 1626;
            v24 = 0;
            v22 = (char *)v3 + 1626;
            goto LABEL_71;
          }
          v41 = (uint32_t *)(v3 + 7);
          v21 = v3;
          v22 = (char *)v3 + 1626;
          v23 = v33;
          v24 = 0;
          v25 = v20;
          v26 = v21;
          while ( 1 )
          {
            v27 = *v22++;
            if ( v27 != 10 )
              goto LABEL_46;
            if ( v26[3] != 0 )
            {
              ++v24;
              v26[3] = 0;
              v25 = v22;
              if ( v24 == v23 )
              {
LABEL_50:
                v3 = v26;
                v28 = v25;
                goto LABEL_51;
              }
            }
            else
            {
              v38 = v26;
              v36 = v25;
              if ( EVP_DecodeUpdate((int)(uintptr_t)(v41), src, v46, v25, v22 - v25) > 0 || v46[0] != 0 || v38[5] == 0 )
              {
                v31 = v23;
                v3 = v38;
                if ( v40 != v36 )
                {
                  v31 += v40 - v36;
                  if ( v31 > 0 )
                  {
                    for ( i = 0; i != v31; ++i )
                      *((uint8_t *)v38 + i + 1626) = v36[i];
                  }
                }
                v39 = v36;
                v37 = v31;
                EVP_DecodeInit(v41);
                v3[5] = 0;
                v28 = v39;
                v12 = v37;
LABEL_71:
                if ( v24 != v12 )
                {
                  v3[2] = 0;
                  goto LABEL_24;
                }
LABEL_51:
                if ( v28 == v40 )
                {
                  if ( v24 == 1024 )
                  {
                    v3[3] = 1;
                    v3[2] = 0;
                  }
                }
                else if ( v28 != v22 )
                {
                  v29 = v22 - v28;
                  if ( v29 > 0 )
                  {
                    for ( j = 0; j != v29; ++j )
                      *((uint8_t *)v3 + j + 1626) = v28[j];
                  }
                  v3[2] = v29;
                }
LABEL_18:
                if ( v3[6] <= 0 )
                  goto LABEL_37;
                goto LABEL_19;
              }
              EVP_DecodeInit(v41);
              v25 = v22;
              v26 = v38;
LABEL_46:
              if ( ++v24 == v23 )
                goto LABEL_50;
            }
          }
        }
      }
      v40 = (char *)v3 + 1626;
      if ( v12 <= 1023 && v3[6] > 0 )
        goto LABEL_18;
LABEL_24:
      v34 = v12;
      if ( (BIO_test_flags(a1, -1) & 0x100) != 0 )
      {
        v14 = v34 & 0xFFFFFFFC;
        v15 = EVP_DecodeBlock(src, v40, v34 & 0xFFFFFFFC);
        v16 = v15;
        if ( (int)(v34 & 0xFFFFFFFC) > 2 && *((uint8_t *)v3 + v14 + 1625) == 61 )
          v16 = v15 - 1 - (*((uint8_t *)v3 + v14 + 1624) == 61);
        if ( v14 != v34 )
        {
          v35 = v34 - v14;
          memmove(v40, (char *)v3 + v14 + 1626, v35);
          v3[2] = v35;
        }
        *v3 = 0;
        if ( v16 > 0 )
        {
          *v3 = v16;
          v3[1] = 0;
LABEL_32:
          if ( v16 > a3 )
            v16 = a3;
          memcpy(dest, src, v16);
          v43 += v16;
          v8 = *v3 == v16;
          v3[1] = v16;
          if ( v8 )
          {
            *v3 = 0;
            v3[1] = 0;
          }
          a3 -= v16;
          dest += v16;
          if ( a3 > 0 )
            goto LABEL_18;
          goto LABEL_37;
        }
        v3[1] = 0;
        if ( v16 < 0 )
        {
LABEL_65:
          *v3 = 0;
          v45 = 0;
          goto LABEL_37;
        }
      }
      else
      {
        v19 = EVP_DecodeUpdate((int)(uintptr_t)(v3 + 7), src, v3, v40, v34);
        v3[2] = 0;
        v3[1] = 0;
        if ( v19 < 0 )
          goto LABEL_65;
      }
      v16 = *v3;
      goto LABEL_32;
    }
    v45 = v9;
  }
LABEL_37:
  BIO_copy_next_retry(a1);
  v17 = v43;
  if ( v43 == 0 )
    return v45;
  return v17;
}

// ----------------------------------------------------------------------------
// Function: sub_1A482A0  (binary VA: 0x1a482a0)
// Original: sub_1A482A0
// ----------------------------------------------------------------------------
int sub_1A482A0(int a1, uint8_t *src, signed int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int n;
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
  int v21;
  int v22;
  int v23;

  v3 = *(int **)(a1 + 32);
  BIO_clear_flags(a1, 15);
  if ( v3[4] != 1 )
  {
    v3[4] = 1;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    EVP_EncodeInit(v3 + 7);
  }
  if ( v3[1] > 1501 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_off < (int)sizeof(ctx->buf)");
  v4 = *v3;
  if ( *v3 > 1502 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len <= (int)sizeof(ctx->buf)");
  v5 = v3[1];
  if ( v5 > v4 )
    OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
  v6 = v4 - v5;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v8 = BIO_write(*(uint32_t **)(a1 + 36), (int)(uintptr_t)(v3) + v5 + 124, v6);
      if ( v8 <= 0 )
      {
        v20 = v8;
        BIO_copy_next_retry(a1);
        return v20;
      }
      if ( v8 > v6 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "i <= n");
      v7 = v8 + v3[1];
      v3[1] = v7;
      if ( v7 > 1502 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_off <= (int)sizeof(ctx->buf)");
      if ( *v3 < v7 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
      v6 -= v8;
      if ( v6 <= 0 )
        break;
      v5 = v3[1];
    }
  }
  v3[1] = 0;
  *v3 = 0;
  if ( a3 <= 0 || src == nullptr )
    return 0;
  v22 = 0;
  while ( 1 )
  {
    n = 1024;
    if ( a3 <= 1024 )
      n = a3;
    if ( (BIO_test_flags(a1, -1) & 0x100) == 0 )
    {
      EVP_EncodeUpdate((int)(uintptr_t)(v3 + 7), (uint8_t *)v3 + 124, v3, src, n);
      v13 = *v3;
      if ( *v3 > 1502 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len <= (int)sizeof(ctx->buf)");
      if ( v13 < v3[1] )
LABEL_59:
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
      goto LABEL_55;
    }
    v10 = v3[2];
    if ( v10 > 0 )
    {
      if ( v10 > 3 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->tmp_len <= 3");
      n = 3 - v10;
      if ( 3 - v10 > a3 )
        n = a3;
      memcpy((char *)v3 + v10 + 1626, src, n);
      v22 += n;
      v11 = n + v3[2];
      v3[2] = v11;
      if ( v11 <= 2 )
        return v22;
      v12 = EVP_EncodeBlock((uint8_t *)v3 + 124, (uint8_t *)v3 + 1626, v11);
      v13 = v12;
      *v3 = v12;
      if ( v12 > 1502 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len <= (int)sizeof(ctx->buf)");
      if ( v3[1] > v12 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
      v3[2] = 0;
      goto LABEL_31;
    }
    if ( n <= 2 )
      break;
    n = 3 * (n / 3);
    v19 = EVP_EncodeBlock((uint8_t *)v3 + 124, src, n);
    v13 = v19;
    *v3 = v19;
    if ( v19 > 1502 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len <= (int)sizeof(ctx->buf)");
    if ( v3[1] > v19 )
      goto LABEL_59;
LABEL_55:
    v22 += n;
LABEL_31:
    src += n;
    v3[1] = 0;
    if ( v13 <= 0 )
      goto LABEL_43;
    v23 = n;
    v14 = 0;
    v15 = v13;
    while ( 1 )
    {
      v17 = BIO_write(*(uint32_t **)(a1 + 36), (int)(uintptr_t)(v3) + v14 + 124, v15);
      if ( v17 <= 0 )
      {
        v21 = v17;
        BIO_copy_next_retry(a1);
        result = v21;
        if ( v22 != 0 )
          return v22;
        return result;
      }
      if ( v15 < v17 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "i <= n");
      v15 -= v17;
      v16 = v3[1] + v17;
      v3[1] = v16;
      if ( v16 > 1502 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_off <= (int)sizeof(ctx->buf)");
      if ( v16 > *v3 )
        OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
      if ( v15 <= 0 )
        break;
      v14 = v3[1];
    }
    n = v23;
LABEL_43:
    a3 -= n;
    *v3 = 0;
    v3[1] = 0;
    if ( a3 <= 0 )
      return v22;
  }
  memcpy((char *)v3 + 1626, src, n);
  v3[2] = n;
  return n + v22;
}

// ----------------------------------------------------------------------------
// Function: sub_1A488A0  (binary VA: 0x1a488a0)
// Original: sub_1A488A0
// ----------------------------------------------------------------------------
char sub_1A488A0(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6; // si
  int v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v12;

  v4 = *(uint32_t *)(a1 + 32);
  if ( a2 == 11 )
  {
    v8 = *(uint32_t *)v4;
    v9 = *(uint32_t *)(v4 + 4);
    v12 = (uint8_t *)(v4 + 124);
    while ( v9 == v8 )
    {
LABEL_21:
      if ( (BIO_test_flags(a1, -1) & 0x100) != 0 )
      {
        if ( *(uint32_t *)(v4 + 8) == 0 )
          goto LABEL_35;
        v8 = EVP_EncodeBlock(v12, (uint8_t *)(v4 + 1626), *(uint32_t *)(v4 + 8));
        *(uint32_t *)v4 = v8;
        *(uint32_t *)(v4 + 4) = 0;
        *(uint32_t *)(v4 + 8) = 0;
        v9 = 0;
      }
      else
      {
        if ( *(uint32_t *)(v4 + 16) == 0 || *(uint32_t *)(v4 + 28) == 0 )
        {
LABEL_35:
          LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), 11, a3, a4);
          return v5;
        }
        *(uint32_t *)(v4 + 4) = 0;
        EVP_EncodeFinal(v4 + 28, v12, (int *)v4);
        v8 = *(uint32_t *)v4;
        v9 = *(uint32_t *)(v4 + 4);
      }
    }
    while ( 1 )
    {
      v5 = sub_1A482A0(a1, nullptr, 0);
      if ( v5 < 0 )
        break;
      if ( *(uint32_t *)(v4 + 4) == *(uint32_t *)v4 )
        goto LABEL_21;
    }
  }
  else if ( a2 <= 11 )
  {
    switch ( a2 )
    {
      case 1:
        *(uint32_t *)(v4 + 24) = 1;
        *(uint32_t *)(v4 + 20) = 1;
        *(uint32_t *)(v4 + 16) = 0;
        LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), 1, a3, a4);
        return v5;
      case 2:
        LOBYTE(v5) = 1;
        if ( *(int *)(v4 + 24) > 0 )
          LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), 2, a3, a4);
        break;
      case 10:
        v7 = *(uint32_t *)(v4 + 4);
        if ( *(uint32_t *)v4 < v7 )
          OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
        v5 = *(uint32_t *)v4 - v7;
        if ( v5 <= 0 )
          LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), 10, a3, a4);
        break;
      default:
LABEL_9:
        LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), a2, a3, a4);
        return v5;
    }
  }
  else
  {
    if ( a2 != 13 )
    {
      LOBYTE(v5) = 1;
      if ( a2 < 13 )
        return v5;
      if ( a2 == 101 )
      {
        BIO_clear_flags(a1, 15);
        v6 = BIO_ctrl(*(uint32_t **)(a1 + 36), 101, a3, a4);
        BIO_copy_next_retry(a1);
        LOBYTE(v5) = v6;
        return v5;
      }
      goto LABEL_9;
    }
    v10 = *(uint32_t *)(v4 + 4);
    if ( *(uint32_t *)v4 < v10 )
      OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buf_len >= ctx->buf_off");
    v5 = *(uint32_t *)v4 - v10;
    if ( v5 != 0 )
    {
      if ( v5 > 0 )
        return v5;
      goto LABEL_31;
    }
    if ( *(uint32_t *)(v4 + 16) == 0 || (LOBYTE(v5) = 1, *(uint32_t *)(v4 + 28) == 0) )
LABEL_31:
      LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), 13, a3, a4);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48BE0  (binary VA: 0x1a48be0)
// Original: sub_1A48BE0
// ----------------------------------------------------------------------------
int sub_1A48BE0(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return sub_1A482A0(a1, (uint8_t *)s, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A48C50  (binary VA: 0x1a48c50)
// Original: sub_1A48C50
// ----------------------------------------------------------------------------
int sub_1A48C50(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_callback_ctrl(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48C90  (binary VA: 0x1a48c90)
// Original: sub_1A48C90
// ----------------------------------------------------------------------------
int sub_1A48C90(uint32_t *a1)
{
  int result;
  void **v2;

  result = 0;
  v2 = (void **)a1[8];
  if ( v2 != nullptr )
  {
    if ( v2[1] != nullptr )
      CRYPTO_free(v2[1]);
    CRYPTO_free(v2);
    a1[3] = 0;
    a1[8] = 0;
    a1[5] = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48D00  (binary VA: 0x1a48d00)
// Original: sub_1A48D00
// ----------------------------------------------------------------------------
int sub_1A48D00(uint32_t *a1)
{
  uint8_t *v1;
  int v2;
  uint32_t *v3;
  uint8_t *v4;

  v1 = CRYPTO_malloc(64, (int)(uintptr_t)(&unk_1B15112), 0);
  v2 = 0;
  v3 = (uint32_t *)(v1);
  if ( v1 != nullptr )
  {
    v4 = CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0);
    v3[1] = (uint32_t)(uintptr_t)(v4);
    v2 = 0;
    if ( v4 != nullptr )
    {
      v3[2] = 20;
      v3[3] = 0;
      v3[4] = 0;
      v3[5] = 0;
      v3[6] = 0;
      v3[7] = 4;
      v3[12] = 0;
      v3[14] = 0;
      v3[13] = 0;
      *v3 = 0;
      v2 = 1;
      a1[3] = 1;
      a1[8] = (uint32_t)(uintptr_t)(v3);
      a1[5] = 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48DF0  (binary VA: 0x1a48df0)
// Original: sub_1A48DF0
// ----------------------------------------------------------------------------
int sub_1A48DF0(int a1, uint32_t *a2, void (*a3)(int, uint32_t *, uint32_t *, uint32_t *), int a4)
{
  int v4;
  int v7;
  int i;
  bool v9;
  int v10;

  v4 = 1;
  v7 = a2[13];
  if ( v7 > 0 )
  {
    for ( i = a2[14]; ; a2[14] = i )
    {
      v10 = BIO_write(*(uint32_t **)(a1 + 36), a2[12] + i, v7);
      v4 = v10;
      if ( v10 <= 0 )
        break;
      v7 = a2[13] - v10;
      v9 = a2[13] == v4;
      a2[13] = v7;
      if ( v7 < 0 || v9 )
      {
        if ( a3 != nullptr )
          a3(a1, a2 + 12, a2 + 13, a2 + 15);
        a2[14] = 0;
        *a2 = a4;
        return v4;
      }
      i = a2[14] + v4;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48EA0  (binary VA: 0x1a48ea0)
// Original: sub_1A48EA0
// ----------------------------------------------------------------------------
int sub_1A48EA0(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_gets(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48EE0  (binary VA: 0x1a48ee0)
// Original: sub_1A48EE0
// ----------------------------------------------------------------------------
int sub_1A48EE0(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_read(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A48F20  (binary VA: 0x1a48f20)
// Original: sub_1A48F20
// ----------------------------------------------------------------------------
int sub_1A48F20(int a1, int a2, int a3, int *a4)
{
  int result;
  int *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int (*v9)(int, int *, int *, int *);
  int v10;
  int v11;

  result = 0;
  v5 = *(int **)(a1 + 32);
  v6 = a3;
  if ( v5 != nullptr )
  {
    if ( a2 == 151 )
    {
      v5[10] = *a4;
      v5[11] = a4[1];
      return 1;
    }
    if ( a2 > 151 )
    {
      if ( a2 == 153 )
      {
        v5[15] = (int)(uintptr_t)(a4);
        return 1;
      }
      if ( a2 < 153 )
      {
        *a4 = v5[10];
        a4[1] = v5[11];
        return 1;
      }
      if ( a2 == 154 )
      {
        *a4 = v5[15];
        return 1;
      }
LABEL_7:
      v7 = *(uint32_t **)(a1 + 36);
      result = 0;
      if ( v7 != nullptr )
        return BIO_ctrl(v7, a2, a3, (int)(uintptr_t)(a4));
      return result;
    }
    if ( a2 == 149 )
    {
      v5[8] = *a4;
      v5[9] = a4[1];
      return 1;
    }
    if ( a2 > 149 )
    {
      *a4 = v5[8];
      a4[1] = v5[9];
      return 1;
    }
    if ( a2 != 11 )
      goto LABEL_7;
    if ( *(uint32_t *)(a1 + 36) == 0 )
      return result;
    v8 = *v5;
    if ( *v5 == 2 )
    {
      v9 = (int (*)(int, int *, int *, int *))v5[10];
      if ( v9 != nullptr )
      {
        v10 = v9(a1, v5 + 12, v5 + 13, v5 + 15);
        v6 = a3;
        if ( v10 == 0 )
          goto LABEL_18;
      }
      v8 = (v5[13] <= 0) + 5;
      *v5 = v8;
    }
    if ( v8 == 5 )
    {
      v11 = v6;
      result = sub_1A48DF0(a1, v5, (void (*)(int, uint32_t *, uint32_t *, uint32_t *))v5[11], 6);
      v6 = v11;
      if ( result <= 0 )
        return result;
      v8 = *v5;
    }
    if ( v8 == 6 )
      return BIO_ctrl(*(uint32_t **)(a1 + 36), 11, v6, (int)(uintptr_t)(a4));
LABEL_18:
    BIO_clear_flags(a1, 15);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A49120  (binary VA: 0x1a49120)
// Original: sub_1A49120
// ----------------------------------------------------------------------------
int sub_1A49120(int a1, int a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v7;
  bool v8; // cc
  int v9;
  bool v10;
  int (*v11)(int, int, int, int);
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v3 = a3;
  if ( a3 < 0 || a2 == 0 )
    return 0;
  v17 = 0;
  if ( *(uint32_t *)(a1 + 36) == 0 )
    return v17;
  v4 = *(uint32_t *)(a1 + 32);
  if ( v4 == 0 )
    return v17;
  v5 = *(uint32_t *)v4;
  while ( 2 )
  {
    if ( v5 > 4 )
    {
LABEL_7:
      BIO_clear_flags(a1, 15);
      return 0;
    }
LABEL_11:
    switch ( v5 )
    {
      case 0u:
        v11 = *(int (**)(int, int, int, int))(v4 + 32);
        if ( v11 != nullptr && v11(a1, v4 + 48, v4 + 52, v4 + 60) == 0 )
          goto LABEL_7;
        v5 = (*(uint32_t *)(v4 + 52) <= 0) + 1;
        *(uint32_t *)v4 = v5;
        continue;
      case 1u:
        v9 = sub_1A48DF0(a1, (uint32_t *)v4, *(void (**)(int, uint32_t *, uint32_t *, uint32_t *))(v4 + 36), 2);
        if ( v9 > 0 )
          goto LABEL_16;
        goto LABEL_30;
      case 2u:
        v7 = ASN1_object_size(0, v3, *(uint32_t *)(v4 + 28)) - v3;
        v8 = v7 <= *(uint32_t *)(v4 + 8);
        *(uint32_t *)(v4 + 16) = v7;
        if ( !v8 )
          OpenSSLDie((const char *)&unk_1B15112, 0, "ctx->buflen <= ctx->bufsize");
        v18 = *(uint8_t **)(v4 + 4);
        ASN1_put_object(&v18, 0, v3, *(uint32_t *)(v4 + 28), *(uint32_t *)(v4 + 24));
        *(uint32_t *)(v4 + 20) = v3;
        *(uint32_t *)v4 = 3;
        v5 = 3;
        goto LABEL_11;
      case 3u:
        v9 = BIO_write(*(uint32_t **)(a1 + 36), *(uint32_t *)(v4 + 12) + *(uint32_t *)(v4 + 4), *(uint32_t *)(v4 + 16));
        if ( v9 > 0 )
        {
          v10 = *(uint32_t *)(v4 + 16) == v9;
          *(uint32_t *)(v4 + 16) -= v9;
          if ( !v10 )
          {
            *(uint32_t *)(v4 + 12) += v9;
            v5 = *(uint32_t *)v4;
            continue;
          }
          *(uint32_t *)(v4 + 12) = 0;
          *(uint32_t *)v4 = 4;
          v5 = 4;
          goto LABEL_11;
        }
LABEL_30:
        v16 = v9;
        BIO_clear_flags(a1, 15);
        BIO_copy_next_retry(a1);
        v15 = v16;
        if ( v17 != 0 )
          return v17;
        return v15;
      case 4u:
        v12 = *(uint32_t *)(v4 + 20);
        if ( v3 <= v12 )
          v12 = v3;
        v13 = BIO_write(*(uint32_t **)(a1 + 36), a2, v12);
        if ( v13 <= 0 )
        {
LABEL_16:
          v5 = *(uint32_t *)v4;
          continue;
        }
        v17 += v13;
        v14 = *(uint32_t *)(v4 + 20) - v13;
        v3 -= v13;
        *(uint32_t *)(v4 + 20) = v14;
        if ( v14 == 0 )
          *(uint32_t *)v4 = 2;
        if ( v3 != 0 )
        {
          a2 += v13;
          v5 = *(uint32_t *)v4;
          continue;
        }
        BIO_clear_flags(a1, 15);
        BIO_copy_next_retry(a1);
        return v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A493C0  (binary VA: 0x1a493c0)
// Original: sub_1A493C0
// ----------------------------------------------------------------------------
int sub_1A493C0(int a1, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return sub_1A49120(a1, (int)(uintptr_t)(s), v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A4A7E0  (binary VA: 0x1a4a7e0)
// Original: sub_1A4A7E0
// ----------------------------------------------------------------------------
int sub_1A4A7E0(int a1, uint32_t *a2)
{
  if ( a2[1] != 0 )
    ((void (*)(uint32_t))Curl_cfree)(a2[1]);
  if ( *a2 != 0 )
    (*(void (**)(uint32_t))(a1 + 12))(*a2);
  return ((int (*)(uint32_t *))Curl_cfree)(a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A4AEE0  (binary VA: 0x1a4aee0)
// Original: sub_1A4AEE0
// ----------------------------------------------------------------------------
bool sub_1A4AEE0(uint32_t *a1, int a2)
{
  return a1[1] - *(uint32_t *)(a2 + 4) >= *a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4AF00  (binary VA: 0x1a4af00)
// Original: sub_1A4AF00
// ----------------------------------------------------------------------------
int sub_1A4AF00(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result == 0 )
  {
    Curl_freeaddrinfo(*a1);
    return ((int (*)(uint32_t *))Curl_cfree)(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4BC20  (binary VA: 0x1a4bc20)
// Original: sub_1A4BC20
// ----------------------------------------------------------------------------
int sub_1A4BC20(uint8_t *a1, uint32_t *a2)
{
  uint8_t *v3;
  uint8_t v4;
  int result;

  v3 = a1;
  v4 = *a1;
  result = 0;
  if ( (unsigned int)v4 - 48 <= 9 )
  {
    do
    {
      ++v3;
      result = (char)v4 + 10 * result - 48;
      v4 = *v3;
    }
    while ( (unsigned int)*v3 - 48 <= 9 );
    if ( result != 0 )
    {
      if ( v4 == 36 )
        *a2 = (uint32_t)(uintptr_t)(v3 + 1);
      else
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4BC70  (binary VA: 0x1a4bc70)
// Original: sub_1A4BC70
// ----------------------------------------------------------------------------
int sub_1A4BC70(uint8_t a1, uint32_t *a2)
{
  int result;

  result = -1;
  if ( a2[1] < a2[2] )
  {
    *(uint8_t *)(*a2)++ = a1;
    ++a2[1];
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4BCA0  (binary VA: 0x1a4bca0)
// Original: sub_1A4BCA0
// ----------------------------------------------------------------------------
int sub_1A4BCA0(uint8_t a1, uint32_t *a2)
{
  uint8_t *v2;
  int v3;
  unsigned int v4;

  v2 = (uint8_t *)*a2;
  if ( *a2 == 0 )
  {
    v2 = (uint8_t *)G4_MEM_CALL((uintptr_t)(Curl_cmalloc), 32);
    *a2 = (uint32_t)(uintptr_t)(v2);
    if ( v2 != nullptr )
    {
      a2[2] = 32;
      a2[1] = 0;
      v3 = 0;
      goto LABEL_3;
    }
    goto LABEL_9;
  }
  v3 = a2[1];
  v4 = a2[2];
  if ( v3 + 1 >= v4 )
  {
    v2 = (uint8_t *)((int (*)(uint32_t, unsigned int))Curl_crealloc)(*a2, 2 * v4);
    if ( v2 != nullptr )
    {
      *a2 = (uint32_t)(uintptr_t)(v2);
      v3 = a2[1];
      a2[2] *= 2;
      goto LABEL_3;
    }
LABEL_9:
    a2[3] = 1;
    return -1;
  }
LABEL_3:
  v2[v3] = a1;
  ++a2[1];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4BD60  (binary VA: 0x1a4bd60)
// Original: sub_1A4BD60
// ----------------------------------------------------------------------------
int sub_1A4BD60(uint8_t a1, uint32_t *a2)
{
  *(uint8_t *)(*a2)++ = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A4BDC0  (binary VA: 0x1a4bdc0)
// Original: sub_1A4BDC0
// ----------------------------------------------------------------------------
int sub_1A4BDC0(int a1, int (*a2)(uint32_t, int), char *a3, unsigned int *a4)
{
  int v4;
  uint8_t *v5;
  uint8_t v6;
  int v8;
  int v9;
  uint8_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  char *nptr;
  unsigned int v15;
  char v16;
  uint8_t v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint8_t *v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint8_t v28;
  int v29;
  char *v30;
  int64_t v32; // xmm0_8
  int v33;
  uint64_t v34; // xmm0_8
  int v35;
  bool v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  size_t v41;
  size_t v42;
  size_t v43;
  int v44;
  int v45;
  int v46;
  int v47;
  signed int v48;
  unsigned int v49;
  signed int v50;
  char *v51; // kr00_4
  unsigned int v52;
  uint8_t *v53;
  int v54;
  int v55;
  uint8_t *v56;
  uint8_t v57;
  uint64_t *v58;
  int64_t v59; // rdi
  int j;
  const char *v61;
  int v62;
  int v63;
  char *v64;
  uint64_t v65; // rax
  char *v66;
  int v67;
  int v68;
  int v69;
  char *v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  char *v76;
  char *k;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  bool v83;
  int v84;
  int i;
  uint8_t v86;
  int v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_s;
  typedef const char *_g4_t_sa;
  typedef const char *_g4_t_sb;
  typedef int _g4_t_sc;
  typedef int _g4_t_sd;
  typedef int _g4_t_se;
  typedef uint64_t _g4_t_sf;
  typedef int _g4_t_sg;
  typedef int _g4_t_sh;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef const char *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef char *_g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef char **_g4_t_v112;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef bool _g4_t_v117;
  typedef int _g4_t_v118;
  typedef bool _g4_t_v119;
  typedef int _g4_t_v120;
  typedef char *_g4_t_v121;
  typedef char *_g4_t_v122;
  typedef uint32_t _g4_t_format[8];
  typedef char _g4_t_v124[255];
  typedef char _g4_t_v125;
  typedef uint8_t _g4_t_v126[3612];
  enum : size_t {
    _g4_s0 = 4064u,
    _g4_s1 = (8u + sizeof(_g4_t_v88)) > _g4_s0 ? (8u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v89)) > _g4_s1 ? (12u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v90)) > _g4_s2 ? (12u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v91)) > _g4_s3 ? (12u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_s)) > _g4_s4 ? (16u + sizeof(_g4_t_s)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_sa)) > _g4_s5 ? (16u + sizeof(_g4_t_sa)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_sb)) > _g4_s6 ? (16u + sizeof(_g4_t_sb)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_sc)) > _g4_s7 ? (16u + sizeof(_g4_t_sc)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_sd)) > _g4_s8 ? (16u + sizeof(_g4_t_sd)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_se)) > _g4_s9 ? (16u + sizeof(_g4_t_se)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_sf)) > _g4_s10 ? (16u + sizeof(_g4_t_sf)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_sg)) > _g4_s11 ? (16u + sizeof(_g4_t_sg)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_sh)) > _g4_s12 ? (16u + sizeof(_g4_t_sh)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v102)) > _g4_s13 ? (28u + sizeof(_g4_t_v102)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v103)) > _g4_s14 ? (28u + sizeof(_g4_t_v103)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v104)) > _g4_s15 ? (28u + sizeof(_g4_t_v104)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v105)) > _g4_s16 ? (32u + sizeof(_g4_t_v105)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v106)) > _g4_s17 ? (32u + sizeof(_g4_t_v106)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v107)) > _g4_s18 ? (32u + sizeof(_g4_t_v107)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v108)) > _g4_s19 ? (32u + sizeof(_g4_t_v108)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v109)) > _g4_s20 ? (36u + sizeof(_g4_t_v109)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v110)) > _g4_s21 ? (36u + sizeof(_g4_t_v110)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v111)) > _g4_s22 ? (40u + sizeof(_g4_t_v111)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v112)) > _g4_s23 ? (40u + sizeof(_g4_t_v112)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v114)) > _g4_s24 ? (48u + sizeof(_g4_t_v114)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v115)) > _g4_s25 ? (48u + sizeof(_g4_t_v115)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v116)) > _g4_s26 ? (52u + sizeof(_g4_t_v116)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v117)) > _g4_s27 ? (60u + sizeof(_g4_t_v117)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v118)) > _g4_s28 ? (68u + sizeof(_g4_t_v118)) : _g4_s28,
    _g4_s30 = (75u + sizeof(_g4_t_v119)) > _g4_s29 ? (75u + sizeof(_g4_t_v119)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v120)) > _g4_s30 ? (76u + sizeof(_g4_t_v120)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v121)) > _g4_s31 ? (88u + sizeof(_g4_t_v121)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v122)) > _g4_s32 ? (92u + sizeof(_g4_t_v122)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_format)) > _g4_s33 ? (96u + sizeof(_g4_t_format)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v124)) > _g4_s34 ? (128u + sizeof(_g4_t_v124)) : _g4_s34,
    _g4_s36 = (383u + sizeof(_g4_t_v125)) > _g4_s35 ? (383u + sizeof(_g4_t_v125)) : _g4_s35,
    _g4_s37 = (384u + sizeof(_g4_t_v126)) > _g4_s36 ? (384u + sizeof(_g4_t_v126)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 16u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 16u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 16u);
  _g4_t_sd &sd = *reinterpret_cast<_g4_t_sd *>(_g4_sf + 16u);
  _g4_t_se &se = *reinterpret_cast<_g4_t_se *>(_g4_sf + 16u);
  _g4_t_sf &sf = *reinterpret_cast<_g4_t_sf *>(_g4_sf + 16u);
  _g4_t_sg &sg = *reinterpret_cast<_g4_t_sg *>(_g4_sf + 16u);
  _g4_t_sh &sh = *reinterpret_cast<_g4_t_sh *>(_g4_sf + 16u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 28u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 32u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 32u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 32u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 36u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 36u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 40u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 40u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 48u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 48u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 60u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 68u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 75u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 76u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 88u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 92u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 96u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 128u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 383u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 384u);

  v4 = 0;
  v122 = a3;
  v5 = (uint8_t *)a3;
  v102 = 0;
  v109 = (uint32_t *)(v126);
LABEL_2:
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == 0 )
      break;
    while ( 1 )
    {
      v122 = (char *)++v5;
      if ( v6 != 37 )
        break;
      if ( *v5 != 37 )
      {
        ++v102;
        v12 = sub_1A4BC20(v5, &v122);
        v13 = v102;
        v111 = 0;
        v89 = 0;
        if ( v12 != 0 )
          v13 = v12;
        s = v13;
        if ( v4 < v13 )
          v4 = v13;
        nptr = v122;
        v15 = 0;
        while ( 1 )
        {
          v16 = *nptr;
          v17 = *nptr - 32;
          if ( v17 > 0x5Au || byte_1D359A0[v17] == 0 )
            break;
          v22 = (uint8_t *)(nptr + 1);
          v122 = nptr + 1;
          switch ( v17 )
          {
            case 0u:
              v15 |= 1u;
              ++nptr;
              continue;
            case 1u:
            case 2u:
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xCu:
            case 0xFu:
            case 0x1Au:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
            case 0x1Fu:
            case 0x20u:
            case 0x21u:
            case 0x22u:
            case 0x23u:
            case 0x24u:
            case 0x25u:
            case 0x26u:
            case 0x27u:
            case 0x28u:
            case 0x29u:
            case 0x2Au:
            case 0x2Bu:
            case 0x2Du:
            case 0x2Eu:
            case 0x30u:
            case 0x31u:
            case 0x32u:
            case 0x33u:
            case 0x34u:
            case 0x35u:
            case 0x36u:
            case 0x37u:
            case 0x38u:
            case 0x39u:
            case 0x3Au:
            case 0x3Bu:
            case 0x3Cu:
            case 0x3Du:
            case 0x3Eu:
            case 0x3Fu:
            case 0x40u:
            case 0x41u:
            case 0x42u:
            case 0x43u:
            case 0x44u:
            case 0x45u:
            case 0x46u:
            case 0x47u:
            case 0x49u:
            case 0x4Au:
            case 0x4Bu:
            case 0x4Du:
            case 0x4Eu:
            case 0x4Fu:
            case 0x50u:
            case 0x52u:
            case 0x53u:
            case 0x54u:
            case 0x55u:
            case 0x56u:
            case 0x57u:
            case 0x58u:
            case 0x59u:
              ++nptr;
              continue;
            case 3u:
              v15 |= 8u;
              ++nptr;
              continue;
            case 0xAu:
              ++v102;
              v24 = sub_1A4BC20(v22, &v122);
              v15 |= 0x4000u;
              v25 = v102;
              if ( v24 != 0 )
                v25 = v24;
              v89 = v25;
              nptr = v122;
              if ( v4 < v89 )
                v4 = v89;
              continue;
            case 0xBu:
              v15 |= 2u;
              ++nptr;
              continue;
            case 0xDu:
              ++nptr;
              v15 = v15 & 0xFFFFFEFB | 4;
              continue;
            case 0xEu:
              if ( nptr[1] == 42 )
              {
                ++v102;
                v122 = nptr + 2;
                v79 = sub_1A4BC20((uint8_t *)nptr + 2, &v122);
                v15 |= 0x18000u;
                v80 = v102;
                nptr = v122;
                if ( v79 != 0 )
                  v80 = v79;
                v111 = v80;
                if ( v80 > v4 )
                  v4 = v80;
              }
              else
              {
                v15 |= 0x8000u;
                v111 = strtol((const char *)v22, &v122, 10);
                nptr = v122;
              }
              continue;
            case 0x10u:
              v23 = v15;
              if ( (v15 & 4) == 0 )
              {
                BYTE1(v23) = BYTE1(v15) | 1;
                v15 = v23;
              }
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x16u:
            case 0x17u:
            case 0x18u:
            case 0x19u:
              v15 |= 0x2000u;
              v89 = strtol(nptr, &v122, 10);
              nptr = v122;
              continue;
            case 0x2Cu:
              v15 |= 0x80u;
              ++nptr;
              continue;
            case 0x2Fu:
            case 0x51u:
              goto LABEL_29;
            case 0x48u:
              v15 |= 0x10u;
              ++nptr;
              continue;
            case 0x4Cu:
              if ( (v15 & 0x20) == 0 )
                goto LABEL_33;
LABEL_29:
              v15 |= 0x40u;
              ++nptr;
              break;
            case 0x5Au:
LABEL_33:
              v15 |= 0x20u;
              ++nptr;
              break;
            default:
              abort();
          }
        }
        v18 = s - 1;
        switch ( v16 )
        {
          case 'E':
            *(uint32_t *)&v126[24 * v18 + 512] = 7;
            v15 |= 0x41000u;
            break;
          case 'G':
            *(uint32_t *)&v126[24 * v18 + 512] = 7;
            v15 |= 0x81000u;
            break;
          case 'S':
            v15 |= 8u;
            goto LABEL_199;
          case 'X':
            *(uint32_t *)&v126[24 * v18 + 512] = 3;
            v15 |= 0x1800u;
            break;
          case 'c':
            *(uint32_t *)&v126[24 * v18 + 512] = 3;
            v15 |= 0x20000u;
            break;
          case 'd':
          case 'i':
            *(uint32_t *)&v126[24 * v18 + 512] = 3;
            break;
          case 'e':
            *(uint32_t *)&v126[24 * v18 + 512] = 7;
            v15 |= 0x40000u;
            break;
          case 'f':
            *(uint32_t *)&v126[24 * v18 + 512] = 7;
            break;
          case 'g':
            *(uint32_t *)&v126[24 * v18 + 512] = 7;
            v15 |= 0x80000u;
            break;
          case 'n':
            *(uint32_t *)&v126[24 * v18 + 512] = 4;
            break;
          case 'o':
            *(uint32_t *)&v126[24 * v18 + 512] = 3;
            v15 |= 0x400u;
            break;
          case 'p':
            *(uint32_t *)&v126[24 * v18 + 512] = 2;
            break;
          case 's':
LABEL_199:
            *(uint32_t *)&v126[24 * v18 + 512] = 1;
            break;
          case 'u':
            *(uint32_t *)&v126[24 * v18 + 512] = 3;
            v15 |= 0x200u;
            break;
          case 'x':
            *(uint32_t *)&v126[24 * v18 + 512] = 3;
            v15 |= 0x800u;
            break;
          default:
            *(uint32_t *)&v126[24 * v18 + 512] = 0;
            break;
        }
        v19 = (uint32_t *)(&v126[24 * v18 + 512]);
        v19[2] = v89;
        v19[1] = v15;
        v19[3] = v111;
        if ( (v15 & 0x4000) != 0 )
        {
          v18 = v89 - 1;
          v19[2] = v89 - 1;
          v20 = (uint32_t *)(&v126[24 * v89 + 488]);
          *v20 = 9;
          v20[1] = 0;
          v20[2] = 0;
          v20[3] = 0;
        }
        if ( (v15 & 0x10000) != 0 )
        {
          *(uint32_t *)&v126[24 * v18 + 524] = v111 - 1;
          v21 = (uint32_t *)(&v126[24 * v111 + 488]);
          *v21 = 9;
          v21[1] = 0;
          v21[2] = 0;
          v21[3] = 0;
        }
        *v109++ = (uint32_t)(uintptr_t)(v122 + 1);
        v5 = (uint8_t *)v122;
        goto LABEL_2;
      }
      v122 = (char *)++v5;
      v6 = *v5;
      if ( *v5 == 0 )
        goto LABEL_6;
    }
  }
LABEL_6:
  if ( v4 > 0 )
  {
    v8 = 0;
    v9 = 0;
    v103 = v4;
    do
    {
      if ( ++v9 < v103 )
      {
        v10 = &v126[24 * v9 + 512];
        if ( *(uint32_t *)v10 == 9 )
        {
          v48 = *a4++;
          *((uint64_t *)v10 + 2) = v48;
        }
      }
      v11 = (uint32_t *)(&v126[24 * v8 + 512]);
      switch ( *v11 )
      {
        case 0:
        case 1:
        case 2:
        case 4:
          v26 = *a4++;
          v11[4] = v26;
          break;
        case 3:
          v33 = v11[1];
          if ( (v33 & 0x240) == 0x240 || (v33 & 0x40) != 0 )
          {
            v49 = *a4;
            v11[5] = a4[1];
            v11[4] = v49;
            a4 += 2;
          }
          else if ( (v33 & 0x220) == 0x220 || (v33 & 0x20) == 0 && (v33 & 0x200) != 0 )
          {
            v34 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*a4++), 0);
            *((uint64_t *)v11 + 2) = v34;
          }
          else
          {
            v50 = *a4++;
            *((uint64_t *)v11 + 2) = v50;
          }
          break;
        case 7:
          v32 = *(uint64_t *)a4;
          a4 += 2;
          *((uint64_t *)v11 + 2) = v32;
          break;
        case 9:
          *v11 = 3;
          break;
        default:
          break;
      }
      ++v8;
    }
    while ( v9 != v103 );
  }
  v112 = (char **)v126;
  v121 = a3;
  v27 = 0;
  v28 = *a3;
  v29 = 0;
  v104 = "0123456789abcdefghijklmnopqrstuvwxyz";
  v30 = a3;
  while ( 1 )
  {
LABEL_51:
    if ( v28 == 0 )
      return v29;
    if ( v28 != 37 )
    {
      while ( a2(v28, a1) != -1 )
      {
        ++v29;
        v30 = v121 + 1;
        v121 = v30;
        v28 = *v30;
        if ( *v30 == 0 )
          break;
        if ( v28 == 37 )
          goto LABEL_51;
      }
      return v29;
    }
    v121 = v30 + 1;
    if ( v30[1] != 37 )
      break;
    v121 = v30 + 2;
    if ( a2(37, a1) == -1 )
      return v29;
    v30 = v121;
    ++v29;
    v28 = *v121;
  }
  v35 = sub_1A4BC20((uint8_t *)v30 + 1, &v121);
  v36 = v35 == 0;
  v37 = v35 - 1;
  v38 = v27;
  if ( !v36 )
    v38 = v37;
  v116 = v27 + 1;
  v39 = (uint32_t *)(&v126[24 * v38 + 512]);
  v90 = v39;
  v40 = v39[1];
  if ( (v40 & 0x4000) != 0 )
    v114 = *(uint32_t *)&v126[24 * v39[2] + 528];
  else
    v114 = v39[2];
  if ( (v40 & 0x10000) != 0 )
  {
    v116 = v27 + 2;
    v105 = *(uint32_t *)&v126[24 * v39[3] + 528];
  }
  else
  {
    v105 = -1;
    if ( (v40 & 0x8000) != 0 )
      v105 = v39[3];
  }
  v110 = v40 & 8;
  switch ( *v39 )
  {
    case 1:
      sa = (const char *)v39[4];
      if ( sa != nullptr )
      {
        v88 = v39[1];
        v41 = strlen(sa);
        LOBYTE(v40) = v88;
      }
      else
      {
        if ( v105 <= 4 && v105 != -1 )
        {
          v43 = 0;
          sa = (const char *)&unk_1B15112;
          v42 = 0;
          goto LABEL_78;
        }
        v40 &= ~8u;
        v41 = 5;
        sa = "(nil)";
        v90[1] = v40;
        v110 = v40 & 8;
      }
      v42 = v105;
      if ( v105 >= v41 || (v43 = v105, v105 == -1) )
      {
        v43 = v41;
        v42 = v41;
      }
LABEL_78:
      if ( v110 != 0 )
      {
        if ( a2(34, a1) == -1 )
          return v29;
        ++v29;
        v40 = v90[1];
      }
      v44 = v114 - v43;
      v45 = v114 - v43;
      if ( (v40 & 4) != 0 )
        goto LABEL_83;
      v45 = v44 - 1;
      if ( v44 <= 0 )
        goto LABEL_83;
      while ( a2(32, a1) != -1 )
      {
        --v45;
        ++v29;
        if ( v45 == -1 )
        {
LABEL_83:
          if ( v42 != 0 )
          {
            sb = &sa[-v29];
            while ( a2((uint8_t)sb[v29], a1) != -1 )
            {
              ++v29;
              if ( --v42 == 0 )
                goto LABEL_87;
            }
          }
          else
          {
LABEL_87:
            v46 = v90[1];
            if ( (v46 & 4) != 0 && v45 > 0 )
            {
              v47 = v45 - 1;
              while ( a2(32, a1) != -1 )
              {
                --v47;
                ++v29;
                if ( v47 == -1 )
                {
                  v46 = v90[1];
                  goto LABEL_93;
                }
              }
            }
            else
            {
LABEL_93:
              if ( (v46 & 8) == 0 )
                goto LABEL_96;
              if ( a2(34, a1) != -1 )
              {
                ++v29;
                goto LABEL_96;
              }
            }
          }
          return v29;
        }
      }
      return v29;
    case 2:
      HIDWORD(v59) = v39[4];
      if ( HIDWORD(v59) != 0 )
      {
        v61 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if ( (v40 & 0x1000) == 0 )
          v61 = "0123456789abcdefghijklmnopqrstuvwxyz";
        v117 = true;
        v104 = v61;
        v119 = false;
        LODWORD(v59) = 0;
        v62 = 16;
        v118 = 0;
        goto LABEL_151;
      }
      v82 = v114 - 5;
      if ( (v40 & 4) == 0 )
        goto LABEL_244;
      v83 = v82 < 0;
      v82 = v114 - 6;
      if ( v83 || v114 == 5 )
        goto LABEL_244;
      while ( a2(32, a1) != -1 )
      {
        --v82;
        ++v29;
        if ( v82 == -1 )
        {
LABEL_244:
          v84 = v29;
          for ( i = a2(40, a1); ; i = a2(v86, a1) )
          {
            if ( i == -1 )
              return v84;
            v86 = aNil /* "(nil)" */[++v84 - v29];
            if ( v86 == 0 )
              break;
          }
          v29 = v84;
          if ( (v90[1] & 4) != 0 || v82 <= 0 )
            goto LABEL_96;
          v87 = v82 - 1;
          while ( a2(32, a1) != -1 )
          {
            --v87;
            ++v84;
            if ( v87 == -1 )
            {
              v29 = v84;
              goto LABEL_96;
            }
          }
          return v84;
        }
      }
      return v29;
    case 3:
      HIDWORD(v59) = v39[4];
      LODWORD(v59) = v39[5];
      if ( (v40 & 0x20000) != 0 )
      {
        if ( (v40 & 4) != 0 || (--v114, v114 <= 0) )
        {
          se = v29;
        }
        else
        {
          sd = v39[4];
          for ( j = v114; j != 0; --j )
          {
            if ( a2(32, a1) == -1 )
              return v29;
            ++v29;
          }
          v114 = 0;
          BYTE4(v59) = sd;
          se = v29;
        }
        if ( a2(BYTE4(v59), a1) != -1 )
        {
          ++v29;
          if ( (v90[1] & 4) == 0 || v114 <= 1 )
            goto LABEL_96;
          while ( a2(32, a1) != -1 )
          {
            if ( ++v29 == v114 + se )
              goto LABEL_96;
          }
        }
        return v29;
      }
      if ( (v40 & 0x200) != 0 )
        goto LABEL_231;
      if ( (v40 & 0x400) != 0 )
      {
        v119 = v110 != 0;
        v117 = false;
        v62 = 8;
        v118 = 0;
      }
      else if ( (v40 & 0x800) != 0 )
      {
        v117 = v110 != 0;
        v119 = false;
        v62 = 16;
        v118 = 0;
        if ( (v40 & 0x1000) != 0 )
          v104 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        else
          v104 = "0123456789abcdefghijklmnopqrstuvwxyz";
      }
      else if ( (int)v59 >= 0 )
      {
LABEL_231:
        v117 = false;
        v119 = false;
        v62 = 10;
        v118 = 0;
      }
      else
      {
        HIDWORD(v59) = -HIDWORD(v59);
        v117 = false;
        v119 = false;
        v62 = 10;
        v118 = 1;
        LODWORD(v59) = (uint64_t)-__SPAIR64__(v59, HIDWORD(v59)) >> 32;
      }
LABEL_151:
      v63 = 1;
      if ( v105 != -1 )
        v63 = v105;
      v107 = v63;
      if ( v59 != 0 )
      {
        v120 = v29;
        sf = v62;
        v64 = &v125;
        do
        {
          *v64 = v104[__PAIR64__(v59, HIDWORD(v59)) % sf];
          v65 = __PAIR64__(v59, HIDWORD(v59)) / sf;
          HIDWORD(v59) = __PAIR64__(v59, HIDWORD(v59)) / sf;
          --v64;
          LODWORD(v59) = HIDWORD(v65);
        }
        while ( v65 != 0 );
        v66 = v64;
        v29 = v120;
        v67 = v66 - &v125;
      }
      else
      {
        v67 = 0;
        v66 = &v125;
      }
      v68 = v67 + v114;
      v69 = v107 + v67;
      sg = v68;
      if ( v119 )
      {
        if ( v69 <= 0 )
        {
          *v66 = 48;
          v70 = v66 - 1;
          --sg;
          goto LABEL_161;
        }
      }
      else
      {
        v70 = v66;
        if ( v69 <= 0 )
          goto LABEL_161;
      }
      sg -= v69;
      v70 = v66;
      v71 = v69 - (uint32_t)(uintptr_t)(v66);
      do
        *v70-- = 48;
      while ( (int)(uintptr_t)(&v70[v71]) > 0 );
LABEL_161:
      v72 = sg - 2;
      if ( !v117 )
        v72 = sg;
      sh = v72;
      if ( v118 != 0 )
      {
        v73 = v90[1];
LABEL_165:
        --sh;
        goto LABEL_166;
      }
      v73 = v90[1];
      if ( (v73 & 3) != 0 )
        goto LABEL_165;
LABEL_166:
      if ( (v73 & 0x104) == 0 )
      {
        v74 = sh - 1;
        if ( sh <= 0 )
        {
          --sh;
        }
        else
        {
          do
          {
            if ( a2(32, a1) == -1 )
              return v29;
            --v74;
            ++v29;
          }
          while ( v74 != -1 );
          sh = -1;
        }
      }
      if ( v118 != 0 )
      {
        if ( a2(45, a1) == -1 )
          return v29;
      }
      else
      {
        v75 = v90[1];
        if ( (v75 & 2) != 0 )
        {
          if ( a2(43, a1) == -1 )
            return v29;
        }
        else
        {
          if ( (v75 & 1) == 0 )
            goto LABEL_174;
          if ( a2(32, a1) == -1 )
            return v29;
        }
      }
      ++v29;
LABEL_174:
      if ( v117 )
      {
        if ( a2(48, a1) == -1 )
          return v29;
        if ( (*((uint8_t *)v90 + 5) & 0x10) != 0 )
        {
          if ( a2(88, a1) == -1 )
            return ++v29;
        }
        else if ( a2(120, a1) == -1 )
        {
          return ++v29;
        }
        v29 += 2;
      }
      if ( (v90[1] & 0x104) != 0x100 )
        goto LABEL_176;
      if ( sh <= 0 )
      {
        --sh;
LABEL_176:
        v76 = v70 + 1;
        if ( v70 + 1 <= &v125 )
        {
          for ( k = v70; ; k = v76++ )
          {
            if ( a2((uint8_t)k[1], a1) == -1 )
              return v29;
            ++v29;
            if ( v76 + 1 > &v125 )
              break;
          }
        }
        if ( (v90[1] & 4) == 0 || sh <= 0 )
          goto LABEL_96;
        v78 = sh - 1;
        while ( a2(32, a1) != -1 )
        {
          --v78;
          ++v29;
          if ( v78 == -1 )
            goto LABEL_96;
        }
        return v29;
      }
      v108 = v70;
      v81 = sh - 1;
      while ( a2(48, a1) != -1 )
      {
        --v81;
        ++v29;
        if ( v81 == -1 )
        {
          sh = -1;
          v70 = v108;
          goto LABEL_176;
        }
      }
      return v29;
    case 4:
      v58 = (uint64_t *)v39[4];
      if ( (v40 & 0x40) != 0 )
      {
        *v58 = v29;
      }
      else if ( (v40 & 0x20) == 0 && (v40 & 0x10) != 0 )
      {
        *(uint16_t *)v58 = v29;
      }
      else
      {
        *(uint32_t *)v58 = v29;
      }
      goto LABEL_96;
    case 7:
      format[0] = 37;
      memset(&format[1], 0, 0x1Cu);
      v51 = (char *)format + strlen((const char *)format);
      v52 = v51 - (char *)format;
      v106 = 32 - (v51 - (char *)format);
      if ( (v40 & 0x2000) != 0 )
      {
        v115 = v90[2];
      }
      else
      {
        v115 = -1;
        if ( (v40 & 0x4000) != 0 )
          v115 = *(uint32_t *)&v126[24 * v90[2] + 528];
      }
      if ( (v40 & 0x8000) == 0 )
      {
        sc = -1;
        if ( (v40 & 0x10000) != 0 )
          sc = *(uint32_t *)&v126[24 * v90[3] + 528];
      }
      else
      {
        sc = v90[3];
      }
      if ( (v40 & 4) != 0 )
      {
        *(uint16_t *)v51 = 45;
        v52 = strlen((const char *)format);
      }
      if ( (v40 & 2) != 0 )
      {
        *(uint16_t *)((char *)format + v52) = 43;
        v52 = strlen((const char *)format);
      }
      if ( (v40 & 1) != 0 )
      {
        *(uint16_t *)((char *)format + v52) = 32;
        v52 = strlen((const char *)format);
      }
      if ( v110 != 0 )
      {
        *(uint16_t *)((char *)format + v52) = 35;
        v52 = strlen((const char *)format);
      }
      v53 = (uint8_t *)((char *)format + v52);
      if ( v115 >= 0 )
      {
        v54 = curl_msnprintf((int)(uintptr_t)(format) + v52, v106, (int)(uintptr_t)("%ld"), v115);
        v53 += v54;
        v106 -= v54;
      }
      if ( sc >= 0 )
        v53 += curl_msnprintf((int)(uintptr_t)(v53), v106, (int)(uintptr_t)(".%ld"), sc);
      v55 = v90[1];
      if ( (v55 & 0x20) != 0 )
      {
        *v53++ = 108;
        v55 = v90[1];
      }
      if ( (v55 & 0x40000) != 0 )
      {
        *v53 = (v55 & 0x1000) == 0 ? 101 : 69;
        v56 = v53 + 1;
      }
      else
      {
        if ( (v55 & 0x80000) != 0 )
          *v53 = (v55 & 0x1000) == 0 ? 103 : 71;
        else
          *v53 = 102;
        v56 = v53 + 1;
      }
      *v56 = 0;
      sprintf(v124, (const char *)format, v90[4], v90[5]);
      v57 = v124[0];
      if ( v124[0] != 0 )
      {
        v91 = -v29;
        do
        {
          if ( a2(v57, a1) == -1 )
            return v29;
          ++v29;
          v57 = v124[v91 + v29];
        }
        while ( v57 != 0 );
      }
LABEL_96:
      v30 = *v112;
      v121 = v30;
      ++v112;
      v27 = v116;
      v28 = *v30;
      goto LABEL_51;
    default:
      goto LABEL_96;
  }
}


