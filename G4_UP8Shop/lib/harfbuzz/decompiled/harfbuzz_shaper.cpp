#include "Core/Utils/DecompTypes.h"
#include "harfbuzz_shaper.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: hb_segment_properties_equal  (binary VA: 0x12a7ca0)
// Original: hb_segment_properties_equal
// ----------------------------------------------------------------------------
bool hb_segment_properties_equal(uint32_t *a1, uint32_t *a2)
{
  bool result;

  result = false;
  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] )
    return a1[4] == a2[4];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_segment_properties_hash  (binary VA: 0x12a7ce0)
// Original: hb_segment_properties_hash
// ----------------------------------------------------------------------------
int hb_segment_properties_hash(uint32_t *a1)
{
  return a1[2] ^ *a1 ^ a1[1];
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_empty  (binary VA: 0x12aa420)
// Original: hb_buffer_get_empty
// ----------------------------------------------------------------------------
void * hb_buffer_get_empty()
{
  return &unk_2092D00;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_create  (binary VA: 0x12aa440)
// Original: hb_buffer_create
// ----------------------------------------------------------------------------
void ** hb_buffer_create()
{
  void **v0;
  void **v1;
  int v2;
  bool v3;

  v0 = (void **)calloc(1u, 0xCCu);
  v1 = v0;
  if ( v0 == nullptr )
    return (void **)hb_buffer_get_empty();
  *v0 = &dword_0 + 1;
  memset(v0 + 2, 0, 0x24u);
  hb_unicode_funcs_destroy(v0[11]);
  v2 = (int)(uintptr_t)(hb_unicode_funcs_get_default());
  v3 = (char *)*v1 + 1 == nullptr;
  v1[11] = (void *)v2;
  v1[18] = &stru_FFF4 + 9;
  if ( !v3 )
  {
    v1[26] = v1[25];
    v1[12] = nullptr;
    v1[13] = nullptr;
    v1[14] = nullptr;
    v1[15] = nullptr;
    v1[16] = nullptr;
    v1[17] = nullptr;
    v1[19] = nullptr;
    *((uint8_t *)v1 + 80) = 0;
    *((uint8_t *)v1 + 81) = 0;
    *((uint8_t *)v1 + 82) = 0;
    v1[21] = nullptr;
    v1[22] = nullptr;
    v1[23] = nullptr;
    v1[28] = nullptr;
    v1[29] = nullptr;
    v1[30] = nullptr;
    memset(v1 + 31, 0, 0x20u);
    memset(v1 + 39, 0, 0x28u);
    v1[49] = nullptr;
    v1[50] = nullptr;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_reference  (binary VA: 0x12aa580)
// Original: hb_buffer_reference
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_destroy  (binary VA: 0x12aa5a0)
// Original: hb_buffer_destroy
// ----------------------------------------------------------------------------
void hb_buffer_destroy(char *a1)
{
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  void (*v6)(int);
  char *ptr;
  void *v8;

  if ( a1 != nullptr && *(uint32_t *)a1 != -1 )
  {
    v1 = *(uint32_t *)a1 - 1;
    *(uint32_t *)a1 = v1;
    if ( v1 == 0 )
    {
      v2 = *((uint32_t *)a1 + 2);
      *(uint32_t *)a1 = -1;
      if ( v2 != 0 )
      {
LABEL_6:
        v3 = *((char **)a1 + 4);
        v4 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v5 = *(uint32_t *)&v3[v4 + 4];
          v6 = *(void (**)(int))&v3[v4 + 8];
          v4 -= 12;
          *((uint32_t *)a1 + 2) = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = *((uint32_t *)a1 + 2);
            goto LABEL_6;
          }
        }
        if ( v3 != a1 + 20 )
          free(v3);
      }
      else
      {
        ptr = *((char **)a1 + 4);
        if ( ptr != a1 + 20 )
          free(ptr);
      }
      v8 = *((void **)a1 + 11);
      *((uint32_t *)a1 + 4) = 0;
      *((uint32_t *)a1 + 2) = 0;
      *((uint32_t *)a1 + 3) = 0;
      hb_unicode_funcs_destroy(v8);
      free(*((void **)a1 + 25));
      free(*((void **)a1 + 27));
      free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_user_data  (binary VA: 0x12aa6a0)
// Original: hb_buffer_set_user_data
// ----------------------------------------------------------------------------
int hb_buffer_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_user_data  (binary VA: 0x12aa6f0)
// Original: hb_buffer_get_user_data
// ----------------------------------------------------------------------------
int hb_buffer_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30(a1 + 1, a2);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_content_type  (binary VA: 0x12aa720)
// Original: hb_buffer_set_content_type
// ----------------------------------------------------------------------------
int hb_buffer_set_content_type(int a1, int a2)
{
  *(uint32_t *)(a1 + 76) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_content_type  (binary VA: 0x12aa730)
// Original: hb_buffer_get_content_type
// ----------------------------------------------------------------------------
int hb_buffer_get_content_type(int a1)
{
  return *(uint32_t *)(a1 + 76);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_unicode_funcs  (binary VA: 0x12aa740)
// Original: hb_buffer_set_unicode_funcs
// ----------------------------------------------------------------------------
void hb_buffer_set_unicode_funcs(int a1, int a2)
{
  int v2;

  v2 = a2;
  if ( *(uint32_t *)a1 != -1 )
  {
    if ( a2 == 0 )
      v2 = (int)(uintptr_t)(hb_unicode_funcs_get_default());
    hb_unicode_funcs_reference(v2);
    hb_unicode_funcs_destroy(*(void **)(a1 + 44));
    *(uint32_t *)(a1 + 44) = v2;
  }
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_unicode_funcs  (binary VA: 0x12aa7b0)
// Original: hb_buffer_get_unicode_funcs
// ----------------------------------------------------------------------------
int hb_buffer_get_unicode_funcs(int a1)
{
  return *(uint32_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_direction  (binary VA: 0x12aa7c0)
// Original: hb_buffer_set_direction
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_set_direction(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[12] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_direction  (binary VA: 0x12aa7e0)
// Original: hb_buffer_get_direction
// ----------------------------------------------------------------------------
int hb_buffer_get_direction(int a1)
{
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_script  (binary VA: 0x12aa7f0)
// Original: hb_buffer_set_script
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_set_script(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[13] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_script  (binary VA: 0x12aa810)
// Original: hb_buffer_get_script
// ----------------------------------------------------------------------------
int hb_buffer_get_script(int a1)
{
  return *(uint32_t *)(a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_language  (binary VA: 0x12aa820)
// Original: hb_buffer_set_language
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_set_language(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[14] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_language  (binary VA: 0x12aa840)
// Original: hb_buffer_get_language
// ----------------------------------------------------------------------------
int hb_buffer_get_language(int a1)
{
  return *(uint32_t *)(a1 + 56);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_segment_properties  (binary VA: 0x12aa850)
// Original: hb_buffer_set_segment_properties
// ----------------------------------------------------------------------------
int hb_buffer_set_segment_properties(int64_t a1)
{
  int result;

  result = a1;
  if ( *(uint32_t *)a1 != -1 )
  {
    *(uint64_t *)(a1 + 48) = *(uint64_t *)HIDWORD(a1);
    *(uint64_t *)(a1 + 56) = *(uint64_t *)(HIDWORD(a1) + 8);
    *(uint32_t *)(a1 + 64) = *(uint32_t *)(HIDWORD(a1) + 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_segment_properties  (binary VA: 0x12aa880)
// Original: hb_buffer_get_segment_properties
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_get_segment_properties(uint32_t *a1, uint32_t *a2)
{
  *a2 = a1[12];
  a2[1] = a1[13];
  a2[2] = a1[14];
  a2[3] = a1[15];
  a2[4] = a1[16];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_flags  (binary VA: 0x12aa8b0)
// Original: hb_buffer_set_flags
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_set_flags(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[17] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_flags  (binary VA: 0x12aa8d0)
// Original: hb_buffer_get_flags
// ----------------------------------------------------------------------------
int hb_buffer_get_flags(int a1)
{
  return *(uint32_t *)(a1 + 68);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_replacement_codepoint  (binary VA: 0x12aa8e0)
// Original: hb_buffer_set_replacement_codepoint
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_set_replacement_codepoint(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[18] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_replacement_codepoint  (binary VA: 0x12aa900)
// Original: hb_buffer_get_replacement_codepoint
// ----------------------------------------------------------------------------
int hb_buffer_get_replacement_codepoint(int a1)
{
  return *(uint32_t *)(a1 + 72);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_reset  (binary VA: 0x12aa910)
// Original: hb_buffer_reset
// ----------------------------------------------------------------------------
void hb_buffer_reset(int a1)
{
  int v1;
  bool v2;
  uint16_t *v3;
  int v4;
  unsigned int v5;
  uint16_t *v6;
  uint16_t *v7;
  unsigned int v8;
  uint16_t *v9;

  if ( *(uint32_t *)a1 != -1 )
  {
    hb_unicode_funcs_destroy(*(void **)(a1 + 44));
    v1 = (int)(uintptr_t)(hb_unicode_funcs_get_default());
    v2 = *(uint32_t *)a1 == -1;
    *(uint32_t *)(a1 + 44) = v1;
    *(uint32_t *)(a1 + 72) = 65533;
    if ( !v2 )
    {
      v3 = (uint16_t *)(a1 + 124);
      v4 = *(uint32_t *)(a1 + 100);
      *(uint32_t *)(a1 + 48) = 0;
      *(uint32_t *)(a1 + 52) = 0;
      *(uint32_t *)(a1 + 56) = 0;
      *(uint32_t *)(a1 + 60) = 0;
      *(uint32_t *)(a1 + 64) = 0;
      *(uint32_t *)(a1 + 68) = 0;
      *(uint32_t *)(a1 + 76) = 0;
      *(uint8_t *)(a1 + 80) = 0;
      *(uint8_t *)(a1 + 81) = 0;
      *(uint8_t *)(a1 + 82) = 0;
      *(uint32_t *)(a1 + 84) = 0;
      *(uint32_t *)(a1 + 88) = 0;
      *(uint32_t *)(a1 + 92) = 0;
      *(uint32_t *)(a1 + 104) = v4;
      *(uint32_t *)(a1 + 112) = 0;
      *(uint32_t *)(a1 + 116) = 0;
      *(uint32_t *)(a1 + 120) = 0;
      v5 = 32;
      if ( ((a1 + 124) & 1) != 0 )
      {
        *(uint8_t *)(a1 + 124) = 0;
        v3 = (uint16_t *)(a1 + 125);
        LOBYTE(v5) = 31;
      }
      if ( ((uint8_t)(uintptr_t)v3 & 2) != 0 )
      {
        *v3 = 0;
        v5 -= 2;
        ++v3;
      }
      memset(v3, 0, 4 * (v5 >> 2));
      v6 = &v3[2 * (v5 >> 2)];
      if ( (v5 & 2) != 0 )
      {
        *v6++ = 0;
        if ( (v5 & 1) == 0 )
        {
LABEL_9:
          v7 = (uint16_t *)(a1 + 156);
          v8 = 40;
          if ( ((a1 + 156) & 1) != 0 )
          {
            *(uint8_t *)(a1 + 156) = 0;
            v7 = (uint16_t *)(a1 + 157);
            LOBYTE(v8) = 39;
          }
          if ( ((uint8_t)(uintptr_t)v7 & 2) != 0 )
          {
            *v7 = 0;
            v8 -= 2;
            ++v7;
          }
          memset(v7, 0, 4 * (v8 >> 2));
          v9 = &v7[2 * (v8 >> 2)];
          if ( (v8 & 2) != 0 )
          {
            *v9++ = 0;
            if ( (v8 & 1) == 0 )
              goto LABEL_15;
          }
          else if ( (v8 & 1) == 0 )
          {
LABEL_15:
            *(uint32_t *)(a1 + 196) = 0;
            *(uint32_t *)(a1 + 200) = 0;
            return;
          }
          *(uint8_t *)v9 = 0;
          goto LABEL_15;
        }
      }
      else if ( (v5 & 1) == 0 )
      {
        goto LABEL_9;
      }
      *(uint8_t *)v6 = 0;
      goto LABEL_9;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_clear_contents  (binary VA: 0x12aaac0)
// Original: hb_buffer_clear_contents
// ----------------------------------------------------------------------------
int hb_buffer_clear_contents(int a1)
{
  uint16_t *v1;
  int v2;
  unsigned int v3;
  uint16_t *v4;
  uint16_t *v5;
  unsigned int v6;
  int result;
  uint16_t *v8;

  if ( *(uint32_t *)a1 != -1 )
  {
    v1 = (uint16_t *)(a1 + 124);
    v2 = *(uint32_t *)(a1 + 100);
    *(uint32_t *)(a1 + 48) = 0;
    *(uint32_t *)(a1 + 52) = 0;
    *(uint32_t *)(a1 + 56) = 0;
    *(uint32_t *)(a1 + 60) = 0;
    *(uint32_t *)(a1 + 64) = 0;
    *(uint32_t *)(a1 + 68) = 0;
    *(uint32_t *)(a1 + 76) = 0;
    *(uint8_t *)(a1 + 80) = 0;
    *(uint8_t *)(a1 + 81) = 0;
    *(uint8_t *)(a1 + 82) = 0;
    *(uint32_t *)(a1 + 84) = 0;
    *(uint32_t *)(a1 + 88) = 0;
    *(uint32_t *)(a1 + 92) = 0;
    *(uint32_t *)(a1 + 104) = v2;
    *(uint32_t *)(a1 + 112) = 0;
    *(uint32_t *)(a1 + 116) = 0;
    *(uint32_t *)(a1 + 120) = 0;
    v3 = 32;
    if ( ((a1 + 124) & 1) != 0 )
    {
      v1 = (uint16_t *)(a1 + 125);
      *(uint8_t *)(a1 + 124) = 0;
      LOWORD(v3) = 31;
      if ( ((a1 + 125) & 2) == 0 )
        goto LABEL_4;
    }
    else if ( ((uint8_t)(uintptr_t)v1 & 2) == 0 )
    {
      goto LABEL_4;
    }
    *v1 = 0;
    v3 -= 2;
    ++v1;
LABEL_4:
    memset(v1, 0, 4 * (v3 >> 2));
    v4 = &v1[2 * (v3 >> 2)];
    if ( (v3 & 2) != 0 )
    {
      *v4++ = 0;
      if ( (v3 & 1) == 0 )
      {
LABEL_6:
        v5 = (uint16_t *)(a1 + 156);
        v6 = 40;
        if ( ((a1 + 156) & 1) != 0 )
        {
          *(uint8_t *)(a1 + 156) = 0;
          v5 = (uint16_t *)(a1 + 157);
          LOWORD(v6) = 39;
        }
        if ( ((uint8_t)(uintptr_t)v5 & 2) != 0 )
        {
          *v5 = 0;
          v6 -= 2;
          ++v5;
        }
        result = 0;
        memset(v5, 0, 4 * (v6 >> 2));
        v8 = &v5[2 * (v6 >> 2)];
        if ( (v6 & 2) != 0 )
        {
          *v8++ = 0;
          if ( (v6 & 1) == 0 )
            goto LABEL_12;
        }
        else if ( (v6 & 1) == 0 )
        {
LABEL_12:
          *(uint32_t *)(a1 + 196) = 0;
          *(uint32_t *)(a1 + 200) = 0;
          return result;
        }
        *(uint8_t *)v8 = 0;
        goto LABEL_12;
      }
    }
    else if ( (v3 & 1) == 0 )
    {
      goto LABEL_6;
    }
    *(uint8_t *)v4 = 0;
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_pre_allocate  (binary VA: 0x12aac40)
// Original: hb_buffer_pre_allocate
// ----------------------------------------------------------------------------
int hb_buffer_pre_allocate(int a1, unsigned int a2)
{
  int result;

  result = 1;
  if ( a2 != 0 && a2 >= *(uint32_t *)(a1 + 96) )
    return (uint8_t)sub_12A7CF0(a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_allocation_successful  (binary VA: 0x12aac80)
// Original: hb_buffer_allocation_successful
// ----------------------------------------------------------------------------
int hb_buffer_allocation_successful(int a1)
{
  return *(uint8_t *)(a1 + 80) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_add  (binary VA: 0x12aac90)
// Original: hb_buffer_add
// ----------------------------------------------------------------------------
uint32_t * hb_buffer_add(uint32_t *a1, int a2, int a3)
{
  int v3;
  unsigned int v4;
  uint32_t *result;

  v3 = a1[22];
  v4 = v3 + 1;
  if ( v3 != -1 && v4 >= a1[24] )
  {
    result = (uint32_t *)sub_12A7CF0((int)(uintptr_t)(a1), v4);
    if ( (uint8_t)(uintptr_t)result == 0 )
      goto LABEL_4;
    v3 = a1[22];
  }
  result = (uint32_t *)(a1[25] + 20 * v3);
  result[3] = 0;
  result[4] = 0;
  result[1] = 1;
  *result = a2;
  result[2] = a3;
  ++a1[22];
LABEL_4:
  a1[50] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_set_length  (binary VA: 0x12aad00)
// Original: hb_buffer_set_length
// ----------------------------------------------------------------------------
bool hb_buffer_set_length(int a1, unsigned int a2)
{
  bool result;
  unsigned int v3;
  char v4;

  if ( *(uint32_t *)a1 == -1 )
    return a2 == 0;
  if ( a2 == 0 )
  {
    *(uint32_t *)(a1 + 88) = 0;
    *(uint32_t *)(a1 + 76) = 0;
    *(uint32_t *)(a1 + 196) = 0;
LABEL_4:
    *(uint32_t *)(a1 + 200) = 0;
    return true;
  }
  if ( a2 < *(uint32_t *)(a1 + 96) || (v4 = sub_12A7CF0(a1, a2), result = false, v4 != 0) )
  {
    v3 = *(uint32_t *)(a1 + 88);
    if ( a2 > v3 )
    {
      memset((void *)(*(uint32_t *)(a1 + 100) + 20 * v3), 0, 20 * (a2 - v3));
      if ( *(uint8_t *)(a1 + 82) != 0 )
        memset((void *)(*(uint32_t *)(a1 + 108) + 20 * *(uint32_t *)(a1 + 88)), 0, 20 * (a2 - *(uint32_t *)(a1 + 88)));
    }
    *(uint32_t *)(a1 + 88) = a2;
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_length  (binary VA: 0x12aae00)
// Original: hb_buffer_get_length
// ----------------------------------------------------------------------------
int hb_buffer_get_length(int a1)
{
  return *(uint32_t *)(a1 + 88);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_glyph_infos  (binary VA: 0x12aae10)
// Original: hb_buffer_get_glyph_infos
// ----------------------------------------------------------------------------
int hb_buffer_get_glyph_infos(int a1, uint32_t *a2)
{
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 88);
  return *(uint32_t *)(a1 + 100);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_get_glyph_positions  (binary VA: 0x12aae30)
// Original: hb_buffer_get_glyph_positions
// ----------------------------------------------------------------------------
int hb_buffer_get_glyph_positions(int a1, uint32_t *a2)
{
  int v3;
  int v4;

  if ( *(uint8_t *)(a1 + 82) == 0 && *(uint32_t *)a1 != -1 )
  {
    v3 = *(uint32_t *)(a1 + 100);
    *(uint8_t *)(a1 + 81) = 0;
    *(uint32_t *)(a1 + 104) = v3;
    v4 = *(uint32_t *)(a1 + 88);
    *(uint8_t *)(a1 + 82) = 1;
    *(uint32_t *)(a1 + 92) = 0;
    memset(*(void **)(a1 + 108), 0, 20 * v4);
  }
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 88);
  return *(uint32_t *)(a1 + 108);
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_reverse  (binary VA: 0x12aaec0)
// Original: hb_buffer_reverse
// ----------------------------------------------------------------------------
unsigned int hb_buffer_reverse(uint32_t *a1)
{
  unsigned int result;
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  result = a1[22];
  v18 = result;
  if ( result >= 2 )
  {
    v17 = result - 1;
    v14 = result - 1;
    v16 = 0;
    v12 = 0;
    v2 = 20 * result - 20;
    do
    {
      v3 = a1[25];
      v4 = (uint32_t *)(v3 + v16);
      v19 = *(uint32_t *)(v3 + v16);
      v22 = *(uint32_t *)(v3 + v16 + 12);
      v21 = *(uint32_t *)(v3 + v16 + 8);
      v24 = *(uint32_t *)(v3 + v16 + 16);
      v20 = *(uint32_t *)(v3 + v16 + 4);
      *v4 = *(uint32_t *)(v3 + v2);
      v4[1] = *(uint32_t *)(v3 + v2 + 4);
      v4[2] = *(uint32_t *)(v3 + v2 + 8);
      v4[3] = *(uint32_t *)(v3 + v2 + 12);
      v4[4] = *(uint32_t *)(v3 + v2 + 16);
      v5 = a1[25];
      *(uint32_t *)(v5 + v2) = v19;
      *(uint32_t *)(v5 + v2 + 8) = v21;
      *(uint32_t *)(v5 + v2 + 4) = v20;
      *(uint32_t *)(v5 + v2 + 12) = v22;
      --v14;
      *(uint32_t *)(v5 + v2 + 16) = v24;
      ++v12;
      v16 += 20;
      v2 -= 20;
    }
    while ( v12 < v14 );
    result = (unsigned int)(uintptr_t)(a1);
    v6 = a1[27];
    if ( v6 != 0 )
    {
      v13 = 0;
      v15 = 0;
      result = 20 * v18 - 20;
      while ( 1 )
      {
        v7 = (uint32_t *)(v6 + v13);
        v23 = *(uint32_t *)(v6 + v13 + 12);
        v8 = *(uint32_t *)(v6 + v13 + 4);
        v25 = *(uint32_t *)(v6 + v13 + 16);
        v11 = *(uint32_t *)(v6 + v13);
        *v7 = *(uint32_t *)(v6 + result);
        v7[1] = *(uint32_t *)(v6 + result + 4);
        v9 = *(uint32_t *)(v6 + v13 + 8);
        v7[2] = *(uint32_t *)(v6 + result + 8);
        v7[3] = *(uint32_t *)(v6 + result + 12);
        v7[4] = *(uint32_t *)(v6 + result + 16);
        v10 = a1[27];
        *(uint32_t *)(v10 + result + 8) = v9;
        *(uint32_t *)(v10 + result) = v11;
        *(uint32_t *)(v10 + result + 4) = v8;
        *(uint32_t *)(v10 + result + 12) = v23;
        *(uint32_t *)(v10 + result + 16) = v25;
        --v17;
        ++v15;
        v13 += 20;
        result -= 20;
        if ( v15 >= v17 )
          break;
        v6 = a1[27];
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_reverse_clusters  (binary VA: 0x12ab0b0)
// Original: hb_buffer_reverse_clusters
// ----------------------------------------------------------------------------
unsigned int hb_buffer_reverse_clusters(uint32_t *a1)
{
  unsigned int result;
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  unsigned int v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  uint32_t *v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  uint32_t *v61;
  int v62;
  int v63;
  unsigned int v64;
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

  result = a1[22];
  v40 = result;
  if ( result >= 2 )
  {
    v43 = result - 1;
    v50 = result - 1;
    v55 = 0;
    v58 = 0;
    result = 20 * result - 20;
    do
    {
      v2 = a1[25];
      v3 = (uint32_t *)(v2 + v55);
      v68 = *(uint32_t *)(v2 + v55 + 12);
      v74 = *(uint32_t *)(v2 + v55 + 16);
      v66 = *(uint32_t *)(v2 + v55);
      *v3 = *(uint32_t *)(v2 + result);
      v4 = *(uint32_t *)(v2 + v55 + 4);
      v3[1] = *(uint32_t *)(v2 + result + 4);
      v5 = *(uint32_t *)(v2 + v55 + 8);
      v3[2] = *(uint32_t *)(v2 + result + 8);
      v3[3] = *(uint32_t *)(v2 + result + 12);
      v3[4] = *(uint32_t *)(v2 + result + 16);
      v6 = a1[25];
      *(uint32_t *)(v6 + result + 4) = v4;
      *(uint32_t *)(v6 + result + 8) = v5;
      *(uint32_t *)(v6 + result) = v66;
      *(uint32_t *)(v6 + result + 12) = v68;
      --v50;
      *(uint32_t *)(v6 + result + 16) = v74;
      ++v58;
      v55 += 20;
      result -= 20;
    }
    while ( v58 < v50 );
    v7 = a1;
    v8 = a1[27];
    if ( v8 != 0 )
    {
      v59 = 0;
      v51 = 0;
      result = 20 * v40 - 20;
      while ( 1 )
      {
        v9 = (uint32_t *)(v8 + v59);
        v69 = *(uint32_t *)(v8 + v59 + 12);
        v10 = *(uint32_t *)(v8 + v59 + 4);
        v75 = *(uint32_t *)(v8 + v59 + 16);
        v37 = *(uint32_t *)(v8 + v59);
        *v9 = *(uint32_t *)(v8 + result);
        v9[1] = *(uint32_t *)(v8 + result + 4);
        v11 = *(uint32_t *)(v8 + v59 + 8);
        v9[2] = *(uint32_t *)(v8 + result + 8);
        v9[3] = *(uint32_t *)(v8 + result + 12);
        v9[4] = *(uint32_t *)(v8 + result + 16);
        v12 = a1[27];
        *(uint32_t *)(v12 + result + 8) = v11;
        *(uint32_t *)(v12 + result + 4) = v10;
        *(uint32_t *)(v12 + result) = v37;
        *(uint32_t *)(v12 + result + 12) = v69;
        *(uint32_t *)(v12 + result + 16) = v75;
        --v43;
        ++v51;
        v59 += 20;
        result -= 20;
        if ( v51 >= v43 )
          break;
        v8 = a1[27];
      }
      v7 = a1;
    }
    v13 = v7[25];
    v64 = v7[22];
    v14 = *(uint32_t *)(v13 + 8);
    if ( v64 > 1 )
    {
      v15 = 0;
      v60 = 0;
      v62 = 1;
      v52 = v7;
      while ( 1 )
      {
        v63 = v15 + 20;
        if ( *(uint32_t *)(v13 + v15 + 28) != v14 )
        {
          v14 = *(uint32_t *)(v13 + v15 + 28);
          v56 = v62 - 1;
          if ( v60 != v62 - 1 )
          {
            if ( v60 < v62 - 1 )
            {
              v48 = v62 - 1;
              v45 = v60;
              v65 = v15;
              v44 = 20 * v60;
              v16 = v15;
              while ( 1 )
              {
                v17 = (uint32_t *)(v13 + v44);
                v70 = *(uint32_t *)(v13 + v44 + 12);
                v76 = *(uint32_t *)(v13 + v44 + 16);
                v67 = *(uint32_t *)(v13 + v44);
                *v17 = *(uint32_t *)(v13 + v16);
                v18 = *(uint32_t *)(v13 + v44 + 4);
                v17[1] = *(uint32_t *)(v13 + v16 + 4);
                v19 = *(uint32_t *)(v13 + v44 + 8);
                v17[2] = *(uint32_t *)(v13 + v16 + 8);
                v17[3] = *(uint32_t *)(v13 + v16 + 12);
                v17[4] = *(uint32_t *)(v13 + v16 + 16);
                v20 = v52[25];
                *(uint32_t *)(v20 + v16 + 8) = v19;
                *(uint32_t *)(v20 + v16 + 4) = v18;
                *(uint32_t *)(v20 + v16) = v67;
                *(uint32_t *)(v20 + v16 + 12) = v70;
                *(uint32_t *)(v20 + v16 + 16) = v76;
                --v48;
                ++v45;
                v44 += 20;
                v16 -= 20;
                if ( v45 >= v48 )
                  break;
                v13 = v52[25];
              }
              v15 = v65;
            }
            v21 = v52[27];
            if ( v21 != 0 )
            {
              v22 = 20 * v60;
              v46 = 20 * v60;
              if ( v60 < v56 )
              {
                while ( 1 )
                {
                  v23 = (int *)(v21 + v22);
                  v71 = v23[3];
                  v24 = v23[1];
                  v77 = v23[4];
                  v38 = *v23;
                  *v23 = *(uint32_t *)(v21 + v15);
                  v23[1] = *(uint32_t *)(v21 + v15 + 4);
                  v25 = v23[2];
                  v23[2] = *(uint32_t *)(v21 + v15 + 8);
                  v23[3] = *(uint32_t *)(v21 + v15 + 12);
                  v23[4] = *(uint32_t *)(v21 + v15 + 16);
                  v26 = v52[27];
                  *(uint32_t *)(v26 + v15 + 8) = v25;
                  *(uint32_t *)(v26 + v15 + 4) = v24;
                  *(uint32_t *)(v26 + v15) = v38;
                  *(uint32_t *)(v26 + v15 + 12) = v71;
                  *(uint32_t *)(v26 + v15 + 16) = v77;
                  ++v60;
                  v15 -= 20;
                  --v56;
                  v46 += 20;
                  if ( v60 >= v56 )
                    break;
                  v21 = v52[27];
                  v22 = v46;
                }
                v13 = v52[25];
                v14 = *(uint32_t *)(v13 + v63 + 8);
              }
              else
              {
                v13 = v52[25];
                v14 = *(uint32_t *)(v13 + v63 + 8);
              }
            }
            else
            {
              v13 = v52[25];
              v14 = *(uint32_t *)(v13 + v63 + 8);
            }
          }
          v60 = v62;
        }
        if ( ++v62 == v64 )
          break;
        v15 = v63;
      }
      result = v64 - 1;
      v27 = v52;
      v49 = v64 - 1;
      if ( v64 - 1 != v60 )
      {
        if ( result > v60 )
        {
          v47 = v60;
          v57 = v64 - 1;
          v53 = 20 * v60;
          v61 = v27;
          result = 20 * v64 - 20;
          while ( 1 )
          {
            v28 = (uint32_t *)(v13 + v53);
            v72 = *(uint32_t *)(v13 + v53 + 12);
            v29 = *(uint32_t *)(v13 + v53 + 4);
            v78 = *(uint32_t *)(v13 + v53 + 16);
            v41 = *(uint32_t *)(v13 + v53);
            *v28 = *(uint32_t *)(v13 + result);
            v28[1] = *(uint32_t *)(v13 + result + 4);
            v30 = *(uint32_t *)(v13 + v53 + 8);
            v28[2] = *(uint32_t *)(v13 + result + 8);
            v28[3] = *(uint32_t *)(v13 + result + 12);
            v28[4] = *(uint32_t *)(v13 + result + 16);
            v31 = v61[25];
            *(uint32_t *)(v31 + result + 8) = v30;
            *(uint32_t *)(v31 + result + 4) = v29;
            *(uint32_t *)(v31 + result) = v41;
            *(uint32_t *)(v31 + result + 12) = v72;
            *(uint32_t *)(v31 + result + 16) = v78;
            --v57;
            ++v47;
            v53 += 20;
            result -= 20;
            if ( v47 >= v57 )
              break;
            v13 = v61[25];
          }
          v27 = v61;
        }
        v32 = v27[27];
        if ( v32 != 0 && v49 > v60 )
        {
          v39 = v27;
          v54 = 20 * v60;
          result = 20 * v64 - 20;
          while ( 1 )
          {
            v33 = (uint32_t *)(v32 + v54);
            v73 = *(uint32_t *)(v32 + v54 + 12);
            v34 = *(uint32_t *)(v32 + v54 + 4);
            v79 = *(uint32_t *)(v32 + v54 + 16);
            v42 = *(uint32_t *)(v32 + v54);
            *v33 = *(uint32_t *)(v32 + result);
            v33[1] = *(uint32_t *)(v32 + result + 4);
            v35 = *(uint32_t *)(v32 + v54 + 8);
            v33[2] = *(uint32_t *)(v32 + result + 8);
            v33[3] = *(uint32_t *)(v32 + result + 12);
            v33[4] = *(uint32_t *)(v32 + result + 16);
            v36 = v39[27];
            *(uint32_t *)(v36 + result + 8) = v35;
            *(uint32_t *)(v36 + result + 4) = v34;
            *(uint32_t *)(v36 + result) = v42;
            *(uint32_t *)(v36 + result + 12) = v73;
            *(uint32_t *)(v36 + result + 16) = v79;
            --v49;
            ++v60;
            v54 += 20;
            result -= 20;
            if ( v60 >= v49 )
              break;
            v32 = v39[27];
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_guess_segment_properties  (binary VA: 0x12ab6b0)
// Original: hb_buffer_guess_segment_properties
// ----------------------------------------------------------------------------
int hb_buffer_guess_segment_properties(uint32_t *a1)
{
  int v1;
  int v2;
  unsigned int v3;
  int v4;
  int result;

  v1 = a1[19];
  if ( v1 != 1 && (a1[22] != 0 || v1 != 0) )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
      569,
      "void hb_buffer_t::guess_segment_properties()",
      "content_type == HB_BUFFER_CONTENT_TYPE_UNICODE || (!len && content_type == HB_BUFFER_CONTENT_TYPE_INVALID)");
  if ( a1[13] == 0 && a1[22] != 0 )
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      v4 = (*(int (**)(uint32_t, uint32_t, uint32_t))(a1[11] + 68))(
             a1[11],
             *(uint32_t *)(a1[25] + v2),
             *(uint32_t *)(a1[11] + 100));
      if ( v4 != 1516858984 && v4 != 1517910393 && v4 != 1517976186 )
        break;
      ++v3;
      v2 += 20;
      if ( v3 >= a1[22] )
        goto LABEL_11;
    }
    a1[13] = v4;
  }
LABEL_11:
  if ( a1[12] != 0 )
  {
    result = a1[14];
    if ( result != 0 )
      return result;
LABEL_16:
    result = hb_language_get_default();
    a1[14] = result;
    return result;
  }
  a1[12] = hb_script_get_horizontal_direction(a1[13]);
  result = a1[14];
  if ( result == 0 )
    goto LABEL_16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_add_utf8  (binary VA: 0x12ab7c0)
// Original: hb_buffer_add_utf8
// ----------------------------------------------------------------------------
unsigned int hb_buffer_add_utf8(uint32_t *a1, char *s, size_t a3, int a4, int a5)
{
  uint32_t *v5;
  unsigned int result;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  uint8_t *v11;
  uint8_t *v12;
  uint32_t *v13;
  char v14;
  unsigned int v15;
  uint8_t *v16;
  unsigned int v17;
  unsigned int *v18;
  uint32_t *v19;
  unsigned int v20;
  uint8_t *v21;
  unsigned int v22;
  uint8_t *v23;
  unsigned int v24;
  uint8_t *v25;
  unsigned int v26;
  uint8_t *v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  char *v32;
  uint8_t *v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  char *i;
  uint32_t *v48;
  uint8_t *v49;
  char *v50;
  unsigned int v51;
  int v52;

  v5 = a1;
  result = a1[19];
  v51 = a1[18];
  if ( result != 1 && (a1[22] != 0 || result != 0) )
    __assert2(
               "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
               1343,
               "void hb_buffer_add_utf(hb_buffer_t*, const T*, int, unsigned int, int) [with bool validate = true, T = un"
               "signed char, hb_buffer_t = hb_buffer_t]",
               "buffer->content_type == HB_BUFFER_CONTENT_TYPE_UNICODE || (!buffer->len && buffer->content_type == HB_BUF"
               "FER_CONTENT_TYPE_INVALID)");
  if ( *a1 == -1 )
    return result;
  if ( a3 == -1 )
    a3 = strlen(s);
  v7 = a3 - a4;
  if ( a5 != -1 )
    v7 = a5;
  v52 = v7;
  v8 = v7;
  v9 = a1[22];
  v10 = v9 + (v8 >> 2);
  if ( v10 != 0 && v10 >= a1[24] )
  {
    sub_12A7CF0((int)(uintptr_t)(a1), v10);
    v9 = a1[22];
  }
  if ( v9 != 0 || a4 == 0 )
  {
    v11 = (uint8_t *)&s[a4];
    goto LABEL_15;
  }
  v11 = (uint8_t *)&s[a4];
  v31 = 0;
  a1[49] = 0;
  v32 = &s[a4];
  if ( s < &s[a4] )
  {
    while ( 1 )
    {
      v33 = (uint8_t *)(v32 - 1);
      LOBYTE(v34) = *(v32 - 1);
      if ( s < v32 - 1 && (v34 & 0xC0) == 0x80 )
      {
        for ( i = v32 - 1; ; --i )
        {
          v33 = (uint8_t *)(i - 1);
          LOBYTE(v34) = *(i - 1);
          if ( i - 1 == s || (v34 & 0xC0) != 0x80 || v32 - (char *)v33 > 3 )
            break;
        }
      }
      v34 = (uint8_t)v34;
      v50 = (char *)(v33 + 1);
      if ( (uint8_t)v34 > 0x7Fu )
      {
        if ( (unsigned int)(uint8_t)v34 - 194 <= 0x1D )
        {
          if ( v50 < v32 )
          {
            v35 = v33[1] - 128;
            if ( v35 <= 0x3F )
            {
              v34 = v35 | ((v34 & 0x1F) << 6);
              v50 = (char *)(v33 + 2);
              goto LABEL_90;
            }
          }
LABEL_175:
          v34 = v51;
          goto LABEL_90;
        }
        if ( (unsigned int)(uint8_t)v34 - 224 > 0xF )
        {
          if ( (unsigned int)(uint8_t)v34 - 240 > 4 )
            goto LABEL_175;
          if ( v32 - v50 <= 2 )
            goto LABEL_175;
          if ( (unsigned int)v33[1] - 128 > 0x3F )
            goto LABEL_175;
          if ( (unsigned int)v33[2] - 128 > 0x3F )
            goto LABEL_175;
          v46 = v33[3] - 128;
          if ( v46 > 0x3F )
            goto LABEL_175;
          v34 = ((v33[2] - 128) << 6) | ((v33[1] - 128) << 12) | v46 | ((v34 & 7) << 18);
          if ( v34 - 0x10000 > 0xFFFFF )
            goto LABEL_175;
          v50 = (char *)(v33 + 4);
        }
        else
        {
          if ( v32 - v50 <= 1 )
            goto LABEL_175;
          if ( (unsigned int)v33[1] - 128 > 0x3F )
            goto LABEL_175;
          v45 = v33[2] - 128;
          if ( v45 > 0x3F )
            goto LABEL_175;
          v34 = ((v33[1] - 128) << 6) | v45 | (uint16_t)((uint8_t)v34 << 12);
          if ( v34 <= 0x7FF || v34 - 55296 <= 0x7FF )
            goto LABEL_175;
          v50 = (char *)(v33 + 3);
        }
      }
LABEL_90:
      if ( v32 != v50 )
      {
        v34 = v51;
        v33 = (uint8_t *)(v32 - 1);
      }
      a1[v31++ + 39] = v34;
      a1[49] = v31;
      if ( s >= (char *)v33 || v31 == 5 )
      {
        v11 = (uint8_t *)&s[a4];
        v9 = 0;
        break;
      }
      v32 = (char *)v33;
    }
  }
LABEL_15:
  v49 = &v11[v52];
  v12 = v11;
  if ( &v11[v52] <= v11 )
    goto LABEL_29;
  v13 = a1;
  while ( 1 )
  {
    v15 = *v11;
    v16 = v11 + 1;
    if ( v15 > 0x7F )
    {
      if ( v15 - 194 > 0x1D )
      {
        if ( v15 - 224 > 0xF )
        {
          if ( v15 - 240 <= 4
            && v49 - v16 > 2
            && (unsigned int)v11[1] - 128 <= 0x3F
            && (unsigned int)v11[2] - 128 <= 0x3F
            && (unsigned int)v11[3] - 128 <= 0x3F )
          {
            v15 = ((v11[2] - 128) << 6) | (v11[3] - 128) | ((v11[1] - 128) << 12) | ((v15 & 7) << 18);
            if ( v15 - 0x10000 <= 0xFFFFF )
            {
              v16 = v11 + 4;
              goto LABEL_26;
            }
          }
        }
        else if ( v49 - v16 > 1 && (unsigned int)v11[1] - 128 <= 0x3F && (unsigned int)v11[2] - 128 <= 0x3F )
        {
          v15 = (v11[2] - 128) | ((v11[1] - 128) << 6) | (uint16_t)((uint16_t)v15 << 12);
          if ( v15 > 0x7FF && v15 - 55296 > 0x7FF )
          {
            v16 = v11 + 3;
            goto LABEL_26;
          }
        }
LABEL_98:
        v15 = v51;
        goto LABEL_26;
      }
      if ( v49 <= v16 )
        goto LABEL_98;
      v17 = v11[1] - 128;
      if ( v17 > 0x3F )
        goto LABEL_98;
      v16 = v11 + 2;
      v15 = v17 | ((v15 & 0x1F) << 6);
    }
LABEL_26:
    if ( v9 == -1 || (unsigned int)(v9 + 1) < v13[24] )
      goto LABEL_27;
    v48 = v13;
    v14 = sub_12A7CF0((int)(uintptr_t)(v13), v9 + 1);
    v13 = v48;
    if ( v14 != 0 )
      break;
    if ( v49 <= v16 )
      goto LABEL_28;
LABEL_20:
    v9 = v13[22];
    v11 = v16;
  }
  v9 = v48[22];
LABEL_27:
  v18 = (unsigned int *)(v13[25] + 20 * v9);
  v18[3] = 0;
  v18[4] = 0;
  *v18 = v15;
  v18[1] = 1;
  v18[2] = v11 - (uint8_t *)s;
  ++v13[22];
  if ( v49 > v16 )
    goto LABEL_20;
LABEL_28:
  v19 = v13;
  v12 = v16;
  v5 = v19;
LABEL_29:
  result = (unsigned int)(uintptr_t)(&s[a3]);
  v5[50] = 0;
  if ( &s[a3] <= (char *)v12 )
    goto LABEL_77;
  v20 = *v12;
  v21 = v12 + 1;
  if ( v20 <= 0x7F )
    goto LABEL_39;
  if ( v20 - 194 <= 0x1D )
  {
    v30 = 0;
    if ( result <= (unsigned int)(uintptr_t)(v21) )
      goto LABEL_107;
    v36 = v12[1] - 128;
    if ( v36 <= 0x3F )
    {
      v21 = v12 + 2;
      v20 = v36 | ((v20 & 0x1F) << 6);
      goto LABEL_39;
    }
    v5[50] = 1;
    v5[44] = v51;
LABEL_40:
    v22 = *v21;
    v23 = v21 + 1;
    if ( v22 <= 0x7F )
      goto LABEL_49;
    if ( v22 - 194 <= 0x1D )
    {
      v30 = 1;
      if ( result <= (unsigned int)(uintptr_t)(v23) )
        goto LABEL_107;
      v40 = v21[1] - 128;
      if ( v40 > 0x3F )
      {
        v5[50] = 2;
        v5[45] = v51;
        goto LABEL_50;
      }
      v23 = v21 + 2;
      v22 = v40 | ((v22 & 0x1F) << 6);
    }
    else
    {
      if ( v22 - 224 > 0xF )
      {
        if ( v22 - 240 <= 4
          && (int)(result - (uint32_t)(uintptr_t)(v23)) > 2
          && (unsigned int)v21[1] - 128 <= 0x3F
          && (unsigned int)v21[2] - 128 <= 0x3F
          && (unsigned int)v21[3] - 128 <= 0x3F )
        {
          v22 = ((v21[2] - 128) << 6) | (v21[3] - 128) | ((v21[1] - 128) << 12) | ((v22 & 7) << 18);
          if ( v22 - 0x10000 <= 0xFFFFF )
          {
            v23 = v21 + 4;
            goto LABEL_49;
          }
        }
      }
      else if ( (int)(result - (uint32_t)(uintptr_t)(v23)) > 1
             && (unsigned int)v21[1] - 128 <= 0x3F
             && (unsigned int)v21[2] - 128 <= 0x3F )
      {
        v22 = (v21[2] - 128) | ((v21[1] - 128) << 6) | (uint16_t)((uint16_t)v22 << 12);
        if ( v22 > 0x7FF && v22 - 55296 > 0x7FF )
        {
          v23 = v21 + 3;
          goto LABEL_49;
        }
      }
      v22 = v51;
    }
LABEL_49:
    v5[45] = v22;
    v5[50] = 2;
    if ( result <= (unsigned int)(uintptr_t)(v23) )
      goto LABEL_77;
LABEL_50:
    v24 = *v23;
    v25 = v23 + 1;
    if ( v24 <= 0x7F )
      goto LABEL_59;
    if ( v24 - 194 <= 0x1D )
    {
      v30 = 2;
      if ( result <= (unsigned int)(uintptr_t)(v25) )
        goto LABEL_107;
      v41 = v23[1] - 128;
      if ( v41 > 0x3F )
      {
        v5[50] = 3;
        v5[46] = v51;
        goto LABEL_60;
      }
      v25 = v23 + 2;
      v24 = v41 | ((v24 & 0x1F) << 6);
    }
    else
    {
      if ( v24 - 224 > 0xF )
      {
        if ( v24 - 240 <= 4
          && (int)(result - (uint32_t)(uintptr_t)(v25)) > 2
          && (unsigned int)v23[1] - 128 <= 0x3F
          && (unsigned int)v23[2] - 128 <= 0x3F
          && (unsigned int)v23[3] - 128 <= 0x3F )
        {
          v24 = ((v23[2] - 128) << 6) | (v23[3] - 128) | ((v23[1] - 128) << 12) | ((v24 & 7) << 18);
          if ( v24 - 0x10000 <= 0xFFFFF )
          {
            v25 = v23 + 4;
            goto LABEL_59;
          }
        }
      }
      else if ( (int)(result - (uint32_t)(uintptr_t)(v25)) > 1
             && (unsigned int)v23[1] - 128 <= 0x3F
             && (unsigned int)v23[2] - 128 <= 0x3F )
      {
        v24 = (v23[2] - 128) | ((v23[1] - 128) << 6) | (uint16_t)((uint16_t)v24 << 12);
        if ( v24 > 0x7FF && v24 - 55296 > 0x7FF )
        {
          v25 = v23 + 3;
          goto LABEL_59;
        }
      }
      v24 = v51;
    }
LABEL_59:
    v5[46] = v24;
    v5[50] = 3;
    if ( result <= (unsigned int)(uintptr_t)(v25) )
      goto LABEL_77;
LABEL_60:
    v26 = *v25;
    v27 = v25 + 1;
    if ( v26 <= 0x7F )
      goto LABEL_69;
    if ( v26 - 194 <= 0x1D )
    {
      v30 = 3;
      if ( result <= (unsigned int)(uintptr_t)(v27) )
        goto LABEL_107;
      v39 = v25[1] - 128;
      if ( v39 > 0x3F )
      {
        v5[50] = 4;
        v5[47] = v51;
LABEL_70:
        v28 = *v27;
        v29 = (unsigned int)(uintptr_t)(v27 + 1);
        if ( v28 <= 0x7F )
          goto LABEL_75;
        if ( v28 - 194 > 0x1D )
        {
          if ( v28 - 224 > 0xF )
          {
            if ( v28 - 240 <= 4 )
            {
              result -= v29;
              if ( (int)result > 2 )
              {
                v42 = v27[1] - 128;
                if ( v42 <= 0x3F )
                {
                  result = v27[2] - 128;
                  if ( result <= 0x3F )
                  {
                    v43 = v27[3] - 128;
                    if ( v43 <= 0x3F )
                    {
                      v44 = (result << 6) | v43 | (v42 << 12) | ((v28 & 7) << 18);
                      result = v44 - 0x10000;
                      if ( (unsigned int)(v44 - 0x10000) > 0xFFFFF )
                        v44 = v51;
                      v51 = v44;
                    }
                  }
                }
              }
            }
          }
          else
          {
            result -= v29;
            if ( (int)result > 1 )
            {
              v37 = v27[1] - 128;
              if ( v37 <= 0x3F )
              {
                v38 = v27[2] - 128;
                if ( v38 <= 0x3F )
                {
                  result = v38 | (v37 << 6) | (uint16_t)((uint16_t)v28 << 12);
                  if ( result > 0x7FF )
                  {
                    if ( result - 55296 < 0x800 )
                      result = v51;
                    v51 = result;
                  }
                }
              }
            }
          }
          goto LABEL_76;
        }
        v30 = 4;
        if ( result > v29 )
        {
          result = v27[1] - 128;
          if ( result > 0x3F )
          {
LABEL_76:
            v5[50] = 5;
            v5[48] = v51;
            goto LABEL_77;
          }
          v28 = result | ((v28 & 0x1F) << 6);
LABEL_75:
          v51 = v28;
          goto LABEL_76;
        }
LABEL_107:
        v5[v30 + 44] = v51;
        v5[50] = v30 + 1;
        v5[19] = 1;
        return result;
      }
      v27 = v25 + 2;
      v26 = v39 | ((v26 & 0x1F) << 6);
    }
    else
    {
      if ( v26 - 224 > 0xF )
      {
        if ( v26 - 240 <= 4
          && (int)(result - (uint32_t)(uintptr_t)(v27)) > 2
          && (unsigned int)v25[1] - 128 <= 0x3F
          && (unsigned int)v25[2] - 128 <= 0x3F
          && (unsigned int)v25[3] - 128 <= 0x3F )
        {
          v26 = ((v25[2] - 128) << 6) | (v25[3] - 128) | ((v25[1] - 128) << 12) | ((v26 & 7) << 18);
          if ( v26 - 0x10000 <= 0xFFFFF )
          {
            v27 = v25 + 4;
            goto LABEL_69;
          }
        }
      }
      else if ( (int)(result - (uint32_t)(uintptr_t)(v27)) > 1
             && (unsigned int)v25[1] - 128 <= 0x3F
             && (unsigned int)v25[2] - 128 <= 0x3F )
      {
        v26 = (v25[2] - 128) | ((v25[1] - 128) << 6) | (uint16_t)((uint16_t)v26 << 12);
        if ( v26 > 0x7FF && v26 - 55296 > 0x7FF )
        {
          v27 = v25 + 3;
          goto LABEL_69;
        }
      }
      v26 = v51;
    }
LABEL_69:
    v5[47] = v26;
    v5[50] = 4;
    if ( result <= (unsigned int)(uintptr_t)(v27) )
      goto LABEL_77;
    goto LABEL_70;
  }
  if ( v20 - 224 > 0xF )
  {
    if ( v20 - 240 > 4 )
      goto LABEL_169;
    if ( (int)(result - (uint32_t)(uintptr_t)(v21)) <= 2 )
      goto LABEL_169;
    if ( (unsigned int)v12[1] - 128 > 0x3F )
      goto LABEL_169;
    if ( (unsigned int)v12[2] - 128 > 0x3F )
      goto LABEL_169;
    if ( (unsigned int)v12[3] - 128 > 0x3F )
      goto LABEL_169;
    v20 = ((v12[2] - 128) << 6) | (v12[3] - 128) | ((v12[1] - 128) << 12) | ((v20 & 7) << 18);
    if ( v20 - 0x10000 > 0xFFFFF )
      goto LABEL_169;
    v21 = v12 + 4;
  }
  else
  {
    if ( (int)(result - (uint32_t)(uintptr_t)(v21)) > 1 && (unsigned int)v12[1] - 128 <= 0x3F && (unsigned int)v12[2] - 128 <= 0x3F )
    {
      v20 = (v12[2] - 128) | ((v12[1] - 128) << 6) | (uint16_t)((uint16_t)v20 << 12);
      if ( v20 > 0x7FF && v20 - 55296 > 0x7FF )
      {
        v21 = v12 + 3;
        goto LABEL_39;
      }
    }
LABEL_169:
    v20 = v51;
  }
LABEL_39:
  v5[44] = v20;
  v5[50] = 1;
  if ( (unsigned int)(uintptr_t)(v21) < result )
    goto LABEL_40;
LABEL_77:
  v5[19] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_add_utf16  (binary VA: 0x12ac4a0)
// Original: hb_buffer_add_utf16
// ----------------------------------------------------------------------------
unsigned int hb_buffer_add_utf16(uint32_t *a1, uint16_t *a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  unsigned int result;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  uint16_t *v12;
  uint16_t *v13;
  int v14;
  char v15;
  int v16;
  uint16_t *v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int *v28;
  int v29;
  uint16_t *v30;
  int v31;
  uint16_t *v32;
  int v33;
  uint16_t *v34;
  int v35;
  uint16_t *v36;
  int v37;
  int v38;
  uint16_t *v39;
  int v40;
  unsigned int v41;
  uint16_t *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  uint16_t *v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  uint16_t *v61;
  int v62;
  uint16_t *v63;
  unsigned int v64;
  unsigned int v65;

  v5 = a3;
  v6 = a5;
  result = a1[19];
  v56 = a1[18];
  if ( result != 1 && (a1[22] != 0 || result != 0) )
  {
    __assert2(
               "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
               1343,
               "void hb_buffer_add_utf(hb_buffer_t*, const T*, int, unsigned int, int) [with bool validate = true, T = sh"
               "ort unsigned int, hb_buffer_t = hb_buffer_t]",
               "buffer->content_type == HB_BUFFER_CONTENT_TYPE_UNICODE || (!buffer->len && buffer->content_type == HB_BUF"
               "FER_CONTENT_TYPE_INVALID)");
    v5 = a3;
  }
  if ( *a1 != -1 )
  {
    if ( v5 == -1 )
    {
      v5 = 0;
      if ( *a2 == 0 )
      {
        v62 = 0;
LABEL_7:
        v8 = v5 - a4;
        v9 = a1[22];
        if ( a5 == -1 )
          v6 = v8;
        v10 = 2 * v6;
        v41 = v10;
        v11 = v9 + (v10 >> 2);
        if ( v11 != 0 && v11 >= a1[24] )
        {
          sub_12A7CF0((int)(uintptr_t)(a1), v9 + (v10 >> 2));
          v9 = a1[22];
        }
        if ( v9 != 0 || a4 == 0 )
        {
          v12 = &a2[a4];
          goto LABEL_15;
        }
        a1[49] = 0;
        v12 = &a2[a4];
        if ( a2 >= v12 )
        {
LABEL_15:
          v42 = (uint16_t *)((char *)v12 + v41);
          v13 = v12;
          if ( v12 < v42 )
          {
            while ( 1 )
            {
              v14 = *v12;
              v13 = v12 + 1;
              if ( (unsigned int)(v14 - 55296) <= 0x7FF )
              {
                if ( (unsigned int)(v14 - 55296) > 0x3FF || v42 <= v13 || (unsigned int)((v55 = v12[1]) - 56320) > 0x3FF )
                {
                  v14 = v56;
                }
                else
                {
                  v13 = v12 + 2;
                  v14 = v55 + (v14 << 10) - 56613888;
                }
              }
              if ( v9 != -1 && (unsigned int)(v9 + 1) >= a1[24] )
              {
                v40 = v14;
                v15 = sub_12A7CF0((int)(uintptr_t)(a1), v9 + 1);
                v14 = v40;
                if ( v15 == 0 )
                {
                  if ( v42 <= v13 )
                    break;
                  goto LABEL_24;
                }
                v9 = a1[22];
              }
              v28 = (int *)(a1[25] + 20 * v9);
              v28[3] = 0;
              v28[4] = 0;
              *v28 = v14;
              v28[1] = 1;
              v28[2] = v12 - a2;
              ++a1[22];
              if ( v42 <= v13 )
                break;
LABEL_24:
              v9 = a1[22];
              v12 = v13;
            }
          }
          result = (unsigned int)(uintptr_t)(&a2[v62]);
          a1[50] = 0;
          if ( &a2[v62] <= v13 )
            goto LABEL_85;
          v29 = *v13;
          v30 = v13 + 1;
          if ( (unsigned int)(v29 - 55296) <= 0x7FF )
          {
            if ( (unsigned int)(v29 - 55296) > 0x3FF )
            {
              v29 = v56;
            }
            else
            {
              v38 = 0;
              if ( result <= (unsigned int)(uintptr_t)(v30) )
                goto LABEL_129;
              v46 = v13[1];
              if ( (unsigned int)(v46 - 56320) > 0x3FF )
              {
                a1[50] = 1;
                a1[44] = v56;
                goto LABEL_77;
              }
              v29 = v46 + (v29 << 10) - 56613888;
              v30 = v13 + 2;
            }
          }
          a1[44] = v29;
          a1[50] = 1;
          if ( result <= (unsigned int)(uintptr_t)(v30) )
            goto LABEL_85;
LABEL_77:
          v31 = *v30;
          v32 = v30 + 1;
          if ( (unsigned int)(v31 - 55296) <= 0x7FF )
          {
            if ( (unsigned int)(v31 - 55296) > 0x3FF )
            {
              v31 = v56;
            }
            else
            {
              v38 = 1;
              if ( result <= (unsigned int)(uintptr_t)(v32) )
                goto LABEL_129;
              v44 = v30[1];
              if ( (unsigned int)(v44 - 56320) > 0x3FF )
              {
                a1[50] = 2;
                a1[45] = v56;
                goto LABEL_79;
              }
              v31 = v44 + (v31 << 10) - 56613888;
              v32 = v30 + 2;
            }
          }
          a1[45] = v31;
          a1[50] = 2;
          if ( result <= (unsigned int)(uintptr_t)(v32) )
            goto LABEL_85;
LABEL_79:
          v33 = *v32;
          v34 = v32 + 1;
          if ( (unsigned int)(v33 - 55296) <= 0x7FF )
          {
            if ( (unsigned int)(v33 - 55296) > 0x3FF )
            {
              v33 = v56;
            }
            else
            {
              v38 = 2;
              if ( result <= (unsigned int)(uintptr_t)(v34) )
                goto LABEL_129;
              v45 = v32[1];
              if ( (unsigned int)(v45 - 56320) > 0x3FF )
              {
                a1[50] = 3;
                a1[46] = v56;
LABEL_81:
                v35 = *v34;
                v36 = v34 + 1;
                if ( (unsigned int)(v35 - 55296) <= 0x7FF )
                {
                  if ( (unsigned int)(v35 - 55296) > 0x3FF )
                  {
                    v35 = v56;
                  }
                  else
                  {
                    v38 = 3;
                    if ( result <= (unsigned int)(uintptr_t)(v36) )
                      goto LABEL_129;
                    v43 = v34[1];
                    if ( (unsigned int)(v43 - 56320) > 0x3FF )
                    {
                      a1[50] = 4;
                      a1[47] = v56;
                      goto LABEL_83;
                    }
                    v35 = v43 + (v35 << 10) - 56613888;
                    v36 = v34 + 2;
                  }
                }
                a1[47] = v35;
                a1[50] = 4;
                if ( result > (unsigned int)(uintptr_t)(v36) )
                {
LABEL_83:
                  v37 = *v36;
                  if ( (unsigned int)(v37 - 55296) > 0x7FF )
                  {
LABEL_84:
                    a1[48] = v37;
                    a1[50] = 5;
                    goto LABEL_85;
                  }
                  if ( (unsigned int)(v37 - 55296) > 0x3FF )
                  {
LABEL_90:
                    a1[50] = 5;
                    a1[48] = v56;
                    a1[19] = 1;
                    return result;
                  }
                  v38 = 4;
                  if ( result > (unsigned int)(uintptr_t)(v36 + 1) )
                  {
                    result = v36[1];
                    v37 = result + (v37 << 10) - 56613888;
                    if ( result - 56320 <= 0x3FF )
                      goto LABEL_84;
                    goto LABEL_90;
                  }
LABEL_129:
                  a1[v38 + 44] = v56;
                  a1[50] = v38 + 1;
                }
LABEL_85:
                a1[19] = 1;
                return result;
              }
              v33 = v45 + (v33 << 10) - 56613888;
              v34 = v32 + 2;
            }
          }
          a1[46] = v33;
          a1[50] = 3;
          if ( result <= (unsigned int)(uintptr_t)(v34) )
            goto LABEL_85;
          goto LABEL_81;
        }
        v16 = *(v12 - 1);
        v17 = v12 - 1;
        v18 = v16 - 55296;
        if ( (unsigned int)(v16 - 55296) > 0x7FF )
        {
LABEL_27:
          a1[39] = v16;
          v9 = 0;
          a1[49] = 1;
          if ( a2 >= v17 )
            goto LABEL_15;
          v19 = *(v17 - 1);
          v20 = (unsigned int)(uintptr_t)(v17 - 1);
          v47 = v19 - 55296;
          if ( (unsigned int)(v19 - 55296) > 0x7FF )
          {
LABEL_39:
            a1[40] = v19;
            v9 = 0;
            a1[49] = 2;
            if ( (unsigned int)(uintptr_t)(a2) >= v20 )
              goto LABEL_15;
            v21 = *(uint16_t *)(v20 - 2);
            v22 = v20 - 2;
            v49 = v21 - 55296;
            if ( (unsigned int)(v21 - 55296) > 0x7FF )
            {
LABEL_51:
              a1[41] = v21;
              v9 = 0;
              a1[49] = 3;
              if ( (unsigned int)(uintptr_t)(a2) >= v22 )
                goto LABEL_15;
              v23 = *(uint16_t *)(v22 - 2);
              v24 = v22 - 2;
              v51 = v23 - 55296;
              if ( (unsigned int)(v23 - 55296) > 0x7FF )
              {
LABEL_63:
                a1[42] = v23;
                v9 = 0;
                a1[49] = 4;
                if ( (unsigned int)(uintptr_t)(a2) >= v24 )
                  goto LABEL_15;
                v60 = v24 - 2;
                v25 = *(uint16_t *)(v24 - 2);
                v26 = v25 - 55296;
                if ( (unsigned int)(v25 - 55296) > 0x7FF )
                  goto LABEL_122;
                if ( (unsigned int)(uintptr_t)(a2) < v60 && (unsigned int)(v25 - 56320) <= 0x3FF )
                {
                  v60 = v24 - 4;
                  v25 = *(uint16_t *)(v24 - 4);
                  v27 = v24 - 2;
                  v26 = v25 - 55296;
                  if ( (unsigned int)(v25 - 55296) > 0x7FF )
                    goto LABEL_120;
                }
                else
                {
                  v27 = v24;
                }
                if ( v26 > 0x3FF || v24 <= v27 || (unsigned int)((v53 = *(uint16_t *)(v60 + 2)) - 56320) > 0x3FF )
                {
                  v25 = v56;
                }
                else
                {
                  v27 = v60 + 4;
                  v25 = v53 + (v25 << 10) - 56613888;
                }
LABEL_120:
                if ( v27 != v24 )
                  v25 = v56;
LABEL_122:
                a1[43] = v25;
                a1[49] = 5;
                v9 = 0;
                goto LABEL_15;
              }
              if ( (unsigned int)(uintptr_t)(a2) < v24 && (unsigned int)(v23 - 56320) <= 0x3FF )
              {
                v65 = v22 - 4;
                v23 = *(uint16_t *)(v22 - 4);
                v59 = v22 - 2;
                v51 = v23 - 55296;
                if ( (unsigned int)(v23 - 55296) > 0x7FF )
                {
LABEL_60:
                  if ( v22 == v59 )
                    v24 = v65;
                  else
                    v23 = v56;
                  goto LABEL_63;
                }
              }
              else
              {
                v59 = v22;
                v65 = v22 - 2;
              }
              if ( v51 > 0x3FF || v22 <= v59 || (unsigned int)((v52 = *(uint16_t *)(v65 + 2)) - 56320) > 0x3FF )
              {
                v23 = v56;
              }
              else
              {
                v23 = v52 + (v23 << 10) - 56613888;
                v59 = v65 + 4;
              }
              goto LABEL_60;
            }
            if ( (unsigned int)(uintptr_t)(a2) < v22 && (unsigned int)(v21 - 56320) <= 0x3FF )
            {
              v64 = v20 - 4;
              v21 = *(uint16_t *)(v20 - 4);
              v58 = v20 - 2;
              v49 = v21 - 55296;
              if ( (unsigned int)(v21 - 55296) > 0x7FF )
              {
LABEL_48:
                if ( v20 == v58 )
                  v22 = v64;
                else
                  v21 = v56;
                goto LABEL_51;
              }
            }
            else
            {
              v58 = v20;
              v64 = v20 - 2;
            }
            if ( v49 > 0x3FF || v20 <= v58 || (unsigned int)((v50 = *(uint16_t *)(v64 + 2)) - 56320) > 0x3FF )
            {
              v21 = v56;
            }
            else
            {
              v21 = v50 + (v21 << 10) - 56613888;
              v58 = v64 + 4;
            }
            goto LABEL_48;
          }
          if ( (unsigned int)(uintptr_t)(a2) < v20 && (unsigned int)(v19 - 56320) <= 0x3FF )
          {
            v63 = v17 - 2;
            v19 = *(v17 - 2);
            v57 = v17 - 1;
            v47 = v19 - 55296;
            if ( (unsigned int)(v19 - 55296) > 0x7FF )
            {
LABEL_36:
              if ( v17 == v57 )
                v20 = (unsigned int)(uintptr_t)(v63);
              else
                v19 = v56;
              goto LABEL_39;
            }
          }
          else
          {
            v57 = v17;
            v63 = v17 - 1;
          }
          if ( v47 > 0x3FF || v17 <= v57 || (unsigned int)((v48 = v63[1]) - 56320) > 0x3FF )
          {
            v19 = v56;
          }
          else
          {
            v19 = v48 + (v19 << 10) - 56613888;
            v57 = v63 + 2;
          }
          goto LABEL_36;
        }
        if ( a2 < v17 && (unsigned int)(v16 - 56320) <= 0x3FF )
        {
          v61 = v12 - 2;
          v16 = *(v12 - 2);
          v39 = v12 - 1;
          v18 = v16 - 55296;
          if ( (unsigned int)(v16 - 55296) > 0x7FF )
          {
LABEL_131:
            if ( v12 == v39 )
              v17 = v61;
            else
              v16 = v56;
            goto LABEL_27;
          }
        }
        else
        {
          v39 = &a2[a4];
          v61 = v12 - 1;
        }
        if ( v18 > 0x3FF || v12 <= v39 || (unsigned int)((v54 = v61[1]) - 56320) > 0x3FF )
        {
          v16 = v56;
        }
        else
        {
          v16 = v54 + (v16 << 10) - 56613888;
          v39 = v61 + 2;
        }
        goto LABEL_131;
      }
      do
        ++v5;
      while ( a2[v5] != 0 );
    }
    v62 = v5;
    goto LABEL_7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_add_utf32  (binary VA: 0x12aceb0)
// Original: hb_buffer_add_utf32
// ----------------------------------------------------------------------------
unsigned int hb_buffer_add_utf32(uint32_t *a1, unsigned int *a2, int a3, int a4, unsigned int a5)
{
  int v5;
  unsigned int v6;
  unsigned int result;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int v16;
  char v17;
  unsigned int *v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int *v31;
  int v32;
  unsigned int v33;

  v5 = a3;
  v6 = a5;
  result = a1[19];
  v8 = a1[18];
  if ( result != 1 && (a1[22] != 0 || result != 0) )
  {
    v29 = a1[18];
    __assert2(
               "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
               1343,
               "void hb_buffer_add_utf(hb_buffer_t*, const T*, int, unsigned int, int) [with bool validate = true, T = un"
               "signed int, hb_buffer_t = hb_buffer_t]",
               "buffer->content_type == HB_BUFFER_CONTENT_TYPE_UNICODE || (!buffer->len && buffer->content_type == HB_BUF"
               "FER_CONTENT_TYPE_INVALID)");
    v8 = v29;
    v5 = a3;
  }
  if ( *a1 == -1 )
    return result;
  if ( v5 == -1 )
  {
    v5 = 0;
    if ( *a2 == 0 )
    {
      v32 = 0;
      goto LABEL_7;
    }
    do
      ++v5;
    while ( a2[v5] != 0 );
  }
  v32 = v5;
LABEL_7:
  v9 = v5 - a4;
  v10 = a1[22];
  if ( a5 == -1 )
    v6 = v9;
  v11 = v6;
  v12 = v10 + ((v11 * 4) >> 2);
  if ( v12 != 0 && v12 >= a1[24] )
  {
    v30 = v8;
    sub_12A7CF0((int)(uintptr_t)(a1), v10 + ((v11 * 4) >> 2));
    v10 = a1[22];
    v8 = v30;
  }
  if ( v10 == 0 && a4 != 0 )
  {
    a1[49] = 0;
    v13 = &a2[a4];
    if ( a2 >= v13 )
      goto LABEL_87;
    v23 = *(v13 - 1);
    if ( v23 > 0x10FFFF )
    {
      v23 = v8;
    }
    else if ( v23 - 55296 <= 0x7FF )
    {
      v23 = v8;
    }
    a1[39] = v23;
    a1[49] = 1;
    if ( a2 >= v13 - 1 )
      goto LABEL_87;
    v24 = *(v13 - 2);
    if ( v24 > 0x10FFFF )
    {
      v24 = v8;
    }
    else if ( v24 - 55296 <= 0x7FF )
    {
      v24 = v8;
    }
    a1[40] = v24;
    a1[49] = 2;
    if ( a2 >= v13 - 2 )
      goto LABEL_87;
    v25 = *(v13 - 3);
    if ( v25 > 0x10FFFF )
    {
      v25 = v8;
    }
    else if ( v25 - 55296 <= 0x7FF )
    {
      v25 = v8;
    }
    a1[41] = v25;
    a1[49] = 3;
    if ( a2 >= v13 - 3 )
      goto LABEL_87;
    v26 = *(v13 - 4);
    if ( v26 > 0x10FFFF )
    {
      v26 = v8;
    }
    else if ( v26 - 55296 <= 0x7FF )
    {
      v26 = v8;
    }
    a1[42] = v26;
    a1[49] = 4;
    if ( a2 >= v13 - 4 )
    {
LABEL_87:
      v10 = 0;
    }
    else
    {
      v27 = *(v13 - 5);
      if ( v27 > 0x10FFFF )
      {
        v27 = v8;
      }
      else if ( v27 - 55296 <= 0x7FF )
      {
        v27 = v8;
      }
      a1[43] = v27;
      a1[49] = 5;
      v10 = 0;
    }
  }
  else
  {
    v13 = &a2[a4];
  }
  v31 = &v13[v11];
  if ( &v13[v11] > v13 )
  {
    v14 = v13;
    v33 = (unsigned int)(uintptr_t)(v13);
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 <= 0x10FFFF )
      {
        if ( v15 - 55296 <= 0x7FF )
          v15 = v8;
        v16 = v10 + 1;
        if ( v10 == -1 )
          goto LABEL_26;
      }
      else
      {
        v15 = v8;
        v16 = v10 + 1;
        if ( v10 == -1 )
          goto LABEL_26;
      }
      if ( v16 >= a1[24] )
      {
        v28 = v8;
        v17 = sub_12A7CF0((int)(uintptr_t)(a1), v16);
        v8 = v28;
        if ( v17 == 0 )
        {
          if ( v31 <= ++v14 )
            goto LABEL_27;
          goto LABEL_23;
        }
        v10 = a1[22];
      }
LABEL_26:
      v18 = (unsigned int *)(a1[25] + 20 * v10);
      v18[3] = 0;
      v18[4] = 0;
      *v18 = v15;
      v18[1] = 1;
      v18[2] = v14 - a2;
      ++v14;
      ++a1[22];
      if ( v31 <= v14 )
      {
LABEL_27:
        v13 = (unsigned int *)(v33 + 4 * (((unsigned int)(uintptr_t)(v31) + ~v33) >> 2) + 4);
        break;
      }
LABEL_23:
      v10 = a1[22];
    }
  }
  result = (unsigned int)(uintptr_t)(&a2[v32]);
  a1[50] = 0;
  if ( &a2[v32] > v13 )
  {
    v19 = *v13;
    if ( *v13 <= 0x10FFFF )
    {
      if ( v19 - 55296 <= 0x7FF )
        v19 = v8;
    }
    else
    {
      v19 = v8;
    }
    a1[44] = v19;
    a1[50] = 1;
    if ( result > (unsigned int)(uintptr_t)(v13 + 1) )
    {
      v20 = v13[1];
      if ( v20 > 0x10FFFF )
      {
        v20 = v8;
      }
      else if ( v20 - 55296 <= 0x7FF )
      {
        v20 = v8;
      }
      a1[45] = v20;
      a1[50] = 2;
      if ( result > (unsigned int)(uintptr_t)(v13 + 2) )
      {
        v21 = v13[2];
        if ( v21 > 0x10FFFF )
        {
          v21 = v8;
        }
        else if ( v21 - 55296 <= 0x7FF )
        {
          v21 = v8;
        }
        a1[46] = v21;
        a1[50] = 3;
        if ( result > (unsigned int)(uintptr_t)(v13 + 3) )
        {
          v22 = v13[3];
          if ( v22 > 0x10FFFF )
          {
            v22 = v8;
          }
          else if ( v22 - 55296 <= 0x7FF )
          {
            v22 = v8;
          }
          a1[47] = v22;
          a1[50] = 4;
          if ( result > (unsigned int)(uintptr_t)(v13 + 4) )
          {
            result = v13[4];
            if ( result <= 0x10FFFF && result - 55296 >= 0x800 )
              v8 = v13[4];
            a1[48] = v8;
            a1[50] = 5;
          }
        }
      }
    }
  }
  a1[19] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_add_codepoints  (binary VA: 0x12ad360)
// Original: hb_buffer_add_codepoints
// ----------------------------------------------------------------------------
unsigned int hb_buffer_add_codepoints(uint32_t *a1, unsigned int *a2, int a3, int a4, unsigned int a5)
{
  int v5;
  unsigned int v6;
  unsigned int result;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int v16;
  char v17;
  unsigned int *v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int *v31;
  int v32;
  unsigned int v33;

  v5 = a3;
  v6 = a5;
  result = a1[19];
  v8 = a1[18];
  if ( result != 1 && (a1[22] != 0 || result != 0) )
  {
    v29 = a1[18];
    __assert2(
               "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
               1343,
               "void hb_buffer_add_utf(hb_buffer_t*, const T*, int, unsigned int, int) [with bool validate = false, T = u"
               "nsigned int, hb_buffer_t = hb_buffer_t]",
               "buffer->content_type == HB_BUFFER_CONTENT_TYPE_UNICODE || (!buffer->len && buffer->content_type == HB_BUF"
               "FER_CONTENT_TYPE_INVALID)");
    v8 = v29;
    v5 = a3;
  }
  if ( *a1 == -1 )
    return result;
  if ( v5 == -1 )
  {
    v5 = 0;
    if ( *a2 == 0 )
    {
      v32 = 0;
      goto LABEL_7;
    }
    do
      ++v5;
    while ( a2[v5] != 0 );
  }
  v32 = v5;
LABEL_7:
  v9 = v5 - a4;
  v10 = a1[22];
  if ( a5 == -1 )
    v6 = v9;
  v11 = v6;
  v12 = v10 + ((v11 * 4) >> 2);
  if ( v12 != 0 && v12 >= a1[24] )
  {
    v30 = v8;
    sub_12A7CF0((int)(uintptr_t)(a1), v10 + ((v11 * 4) >> 2));
    v10 = a1[22];
    v8 = v30;
  }
  if ( v10 == 0 && a4 != 0 )
  {
    a1[49] = 0;
    v13 = &a2[a4];
    if ( a2 >= v13 )
      goto LABEL_87;
    v23 = *(v13 - 1);
    if ( v23 > 0x10FFFF )
    {
      v23 = v8;
    }
    else if ( v23 - 55296 <= 0x7FF )
    {
      v23 = v8;
    }
    a1[39] = v23;
    a1[49] = 1;
    if ( a2 >= v13 - 1 )
      goto LABEL_87;
    v24 = *(v13 - 2);
    if ( v24 > 0x10FFFF )
    {
      v24 = v8;
    }
    else if ( v24 - 55296 <= 0x7FF )
    {
      v24 = v8;
    }
    a1[40] = v24;
    a1[49] = 2;
    if ( a2 >= v13 - 2 )
      goto LABEL_87;
    v25 = *(v13 - 3);
    if ( v25 > 0x10FFFF )
    {
      v25 = v8;
    }
    else if ( v25 - 55296 <= 0x7FF )
    {
      v25 = v8;
    }
    a1[41] = v25;
    a1[49] = 3;
    if ( a2 >= v13 - 3 )
      goto LABEL_87;
    v26 = *(v13 - 4);
    if ( v26 > 0x10FFFF )
    {
      v26 = v8;
    }
    else if ( v26 - 55296 <= 0x7FF )
    {
      v26 = v8;
    }
    a1[42] = v26;
    a1[49] = 4;
    if ( a2 >= v13 - 4 )
    {
LABEL_87:
      v10 = 0;
    }
    else
    {
      v27 = *(v13 - 5);
      if ( v27 > 0x10FFFF )
      {
        v27 = v8;
      }
      else if ( v27 - 55296 <= 0x7FF )
      {
        v27 = v8;
      }
      a1[43] = v27;
      a1[49] = 5;
      v10 = 0;
    }
  }
  else
  {
    v13 = &a2[a4];
  }
  v31 = &v13[v11];
  if ( &v13[v11] > v13 )
  {
    v14 = v13;
    v33 = (unsigned int)(uintptr_t)(v13);
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 <= 0x10FFFF )
      {
        if ( v15 - 55296 <= 0x7FF )
          v15 = v8;
        v16 = v10 + 1;
        if ( v10 == -1 )
          goto LABEL_26;
      }
      else
      {
        v15 = v8;
        v16 = v10 + 1;
        if ( v10 == -1 )
          goto LABEL_26;
      }
      if ( v16 >= a1[24] )
      {
        v28 = v8;
        v17 = sub_12A7CF0((int)(uintptr_t)(a1), v16);
        v8 = v28;
        if ( v17 == 0 )
        {
          if ( v31 <= ++v14 )
            goto LABEL_27;
          goto LABEL_23;
        }
        v10 = a1[22];
      }
LABEL_26:
      v18 = (unsigned int *)(a1[25] + 20 * v10);
      v18[3] = 0;
      v18[4] = 0;
      *v18 = v15;
      v18[1] = 1;
      v18[2] = v14 - a2;
      ++v14;
      ++a1[22];
      if ( v31 <= v14 )
      {
LABEL_27:
        v13 = (unsigned int *)(v33 + 4 * (((unsigned int)(uintptr_t)(v31) + ~v33) >> 2) + 4);
        break;
      }
LABEL_23:
      v10 = a1[22];
    }
  }
  result = (unsigned int)(uintptr_t)(&a2[v32]);
  a1[50] = 0;
  if ( &a2[v32] > v13 )
  {
    v19 = *v13;
    if ( *v13 <= 0x10FFFF )
    {
      if ( v19 - 55296 <= 0x7FF )
        v19 = v8;
    }
    else
    {
      v19 = v8;
    }
    a1[44] = v19;
    a1[50] = 1;
    if ( result > (unsigned int)(uintptr_t)(v13 + 1) )
    {
      v20 = v13[1];
      if ( v20 > 0x10FFFF )
      {
        v20 = v8;
      }
      else if ( v20 - 55296 <= 0x7FF )
      {
        v20 = v8;
      }
      a1[45] = v20;
      a1[50] = 2;
      if ( result > (unsigned int)(uintptr_t)(v13 + 2) )
      {
        v21 = v13[2];
        if ( v21 > 0x10FFFF )
        {
          v21 = v8;
        }
        else if ( v21 - 55296 <= 0x7FF )
        {
          v21 = v8;
        }
        a1[46] = v21;
        a1[50] = 3;
        if ( result > (unsigned int)(uintptr_t)(v13 + 3) )
        {
          v22 = v13[3];
          if ( v22 > 0x10FFFF )
          {
            v22 = v8;
          }
          else if ( v22 - 55296 <= 0x7FF )
          {
            v22 = v8;
          }
          a1[47] = v22;
          a1[50] = 4;
          if ( result > (unsigned int)(uintptr_t)(v13 + 4) )
          {
            result = v13[4];
            if ( result <= 0x10FFFF && result - 55296 >= 0x800 )
              v8 = v13[4];
            a1[48] = v8;
            a1[50] = 5;
          }
        }
      }
    }
  }
  a1[19] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_buffer_normalize_glyphs  (binary VA: 0x12ad810)
// Original: hb_buffer_normalize_glyphs
// ----------------------------------------------------------------------------
int hb_buffer_normalize_glyphs(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  unsigned int v9;
  int v10;
  int v11;
  uint32_t *v12;
  unsigned int v13;
  unsigned int v14;
  uint32_t *v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  int v25;
  unsigned int v26;
  uint32_t *v27;
  unsigned int v28;
  uint32_t *v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  uint32_t *v33;
  unsigned int v34;
  unsigned int j;
  int *v36;
  uint32_t *v37;
  int v38;
  uint32_t *v39;
  uint32_t *v40;
  int v41;
  unsigned int i;
  int *v43;
  uint32_t *v44;
  int v45;
  uint32_t *v46;
  uint32_t *v47;
  int v48;
  int v49;
  unsigned int v50;
  uint32_t *v51;
  unsigned int k;
  int *v53;
  int v54;
  uint32_t *v55;
  int v56;
  unsigned int m;
  int *v58;
  uint32_t *v59;
  int v60;
  uint32_t *v61;
  uint32_t *v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
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
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  unsigned int v99;
  bool v100;
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
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;

  if ( *(uint8_t *)(a1 + 82) == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
      1555,
      "void hb_buffer_normalize_glyphs(hb_buffer_t*)",
      "buffer->have_positions");
  if ( *(uint32_t *)(a1 + 76) != 2 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-buffer.cc",
      1556,
      "void hb_buffer_normalize_glyphs(hb_buffer_t*)",
      "buffer->content_type == HB_BUFFER_CONTENT_TYPE_GLYPHS");
  result = *(uint32_t *)(a1 + 48);
  v99 = *(uint32_t *)(a1 + 88);
  if ( v99 == 0 )
    return result;
  v100 = (result & 0xFFFFFFFD) == 5;
  v98 = *(uint32_t *)(a1 + 100);
  if ( v99 <= 1 )
  {
    v17 = 1;
    v66 = 0;
    v71 = *(uint32_t *)(a1 + 108);
    goto LABEL_23;
  }
  v97 = 20;
  v94 = 1;
  v66 = 0;
  v71 = *(uint32_t *)(a1 + 108);
  do
  {
    v2 = 20 * v66;
    v72 = 20 * v66;
    if ( *(uint32_t *)(v98 + 20 * v66 + 8) == *(uint32_t *)(v98 + v97 + 8) )
      goto LABEL_21;
    v3 = 0;
    v4 = 0;
    if ( v66 < v94 )
    {
      v5 = v66;
      v6 = v2 + v71;
      v7 = (uint32_t *)(v2 + v71);
      do
      {
        ++v5;
        v4 += *v7;
        v3 += v7[1];
        v7 += 5;
      }
      while ( v5 < v94 );
      v8 = (uint32_t *)(v6 + 8);
      v9 = v66;
      v10 = 0;
      v11 = 0;
      do
      {
        ++v9;
        *v8 += v11;
        v8[1] += v10;
        v11 += *(v8 - 2);
        v10 += *(v8 - 1);
        *(v8 - 2) = 0;
        *(v8 - 1) = 0;
        v8 += 5;
      }
      while ( v9 < v94 );
    }
    if ( v100 )
    {
      v33 = (uint32_t *)(v71 + v97 - 20);
      v33[1] = v3;
      *v33 = v4;
      v34 = v94 - v66;
      v71 = *(uint32_t *)(a1 + 108);
      v85 = *(uint32_t *)(a1 + 100) + v72;
      v88 = v72 + v71;
      v2 = v97;
      v66 = v94;
      if ( v34 == 1 )
        goto LABEL_21;
      v92 = v34 - 2;
      if ( v34 == 2 )
      {
        v2 = v97;
        v66 = v94;
        goto LABEL_21;
      }
      v79 = 0;
      for ( i = 0; ; i = 0 )
      {
        while ( 1 )
        {
          v75 = 20 * i;
          v68 = 20 * (i + 1);
          v43 = (int *)(20 * i + v85);
          v44 = (uint32_t *)(v68 + v85);
          v45 = *v43;
          v65 = *(uint32_t *)(v68 + v85);
          if ( v65 - *v43 > 0 )
          {
            v106 = v43[1];
            v111 = v43[2];
            v119 = v43[3];
            v127 = v43[4];
            *v43 = v65;
            v43[1] = v44[1];
            v43[2] = v44[2];
            v43[3] = v44[3];
            v43[4] = v44[4];
            v44[2] = v111;
            v44[1] = v106;
            *v44 = v45;
            v44[3] = v119;
            v44[4] = v127;
            v79 = i;
            if ( v88 != 0 )
            {
              v46 = (uint32_t *)(v75 + v88);
              v102 = *(uint32_t *)(v75 + v88);
              v128 = *(uint32_t *)(v75 + v88 + 16);
              v47 = (uint32_t *)(v68 + v88);
              v120 = *(uint32_t *)(v75 + v88 + 12);
              v48 = *(uint32_t *)(v75 + v88 + 4);
              v112 = *(uint32_t *)(v75 + v88 + 8);
              *v46 = *(uint32_t *)(v68 + v88);
              v46[1] = *(uint32_t *)(v68 + v88 + 4);
              v46[2] = *(uint32_t *)(v68 + v88 + 8);
              v46[3] = *(uint32_t *)(v68 + v88 + 12);
              v46[4] = *(uint32_t *)(v68 + v88 + 16);
              v47[2] = v112;
              *v47 = v102;
              v47[1] = v48;
              v47[3] = v120;
              v47[4] = v128;
            }
          }
          if ( i + 1 >= v92 )
            break;
          ++i;
        }
        if ( v79 == 0 )
          break;
        v92 = v79;
        v79 = 0;
      }
      goto LABEL_46;
    }
    v12 = (uint32_t *)(v72 + v71);
    v13 = v66 + 1;
    *v12 += v4;
    v12[1] += v3;
    if ( v66 + 1 < v94 )
    {
      v14 = v66 + 1;
      v15 = (uint32_t *)(v71 + 20 * v13 + 8);
      do
      {
        ++v14;
        *v15 -= v4;
        v15[1] -= v3;
        v15 += 5;
      }
      while ( v14 < v94 );
    }
    v16 = v94 - v66;
    v66 = v94;
    v71 = *(uint32_t *)(a1 + 108);
    v83 = *(uint32_t *)(a1 + 100) + 20 * v13;
    v87 = 20 * v13 + v71;
    v2 = v97;
    if ( v16 != 1 )
    {
      v90 = v16 - 2;
      if ( v16 == 2 )
      {
        v2 = v97;
        v66 = v94;
        goto LABEL_21;
      }
      v78 = 0;
      for ( j = 0; ; j = 0 )
      {
        while ( 1 )
        {
          v74 = 20 * j;
          v67 = 20 * (j + 1);
          v36 = (int *)(20 * j + v83);
          v37 = (uint32_t *)(v67 + v83);
          v38 = *v36;
          v64 = *(uint32_t *)(v67 + v83);
          if ( v64 - *v36 > 0 )
          {
            v105 = v36[1];
            v109 = v36[2];
            v117 = v36[3];
            v125 = v36[4];
            *v36 = v64;
            v36[1] = v37[1];
            v36[2] = v37[2];
            v36[3] = v37[3];
            v36[4] = v37[4];
            v37[2] = v109;
            v37[4] = v125;
            v37[1] = v105;
            *v37 = v38;
            v37[3] = v117;
            v78 = j;
            if ( v87 != 0 )
            {
              v39 = (uint32_t *)(v74 + v87);
              v101 = *(uint32_t *)(v74 + v87);
              v126 = *(uint32_t *)(v74 + v87 + 16);
              v40 = (uint32_t *)(v67 + v87);
              v118 = *(uint32_t *)(v74 + v87 + 12);
              v41 = *(uint32_t *)(v74 + v87 + 4);
              v110 = *(uint32_t *)(v74 + v87 + 8);
              *v39 = *(uint32_t *)(v67 + v87);
              v39[1] = *(uint32_t *)(v67 + v87 + 4);
              v39[2] = *(uint32_t *)(v67 + v87 + 8);
              v39[3] = *(uint32_t *)(v67 + v87 + 12);
              v39[4] = *(uint32_t *)(v67 + v87 + 16);
              v40[2] = v110;
              *v40 = v101;
              v40[1] = v41;
              v40[3] = v118;
              v40[4] = v126;
            }
          }
          if ( j + 1 >= v90 )
            break;
          ++j;
        }
        if ( v78 == 0 )
          break;
        v90 = v78;
        v78 = 0;
      }
LABEL_46:
      v66 = v94;
      v71 = *(uint32_t *)(a1 + 108);
      v2 = v97;
    }
LABEL_21:
    ++v94;
    v97 += 20;
  }
  while ( v94 != v99 );
  v17 = v94;
  v18 = 0;
  v19 = 0;
  v73 = v2;
  if ( v94 > v66 )
  {
LABEL_23:
    v20 = v66;
    v18 = 0;
    v21 = 0;
    v73 = 20 * v66;
    v22 = (uint32_t *)(20 * v66 + v71);
    do
    {
      ++v20;
      v21 += *v22;
      v18 += v22[1];
      v22 += 5;
    }
    while ( v20 < v17 );
    v23 = (uint32_t *)(20 * v66 + v71 + 8);
    v82 = v21;
    v24 = 0;
    v25 = 0;
    v26 = v66;
    do
    {
      ++v26;
      *v23 += v25;
      v23[1] += v24;
      v25 += *(v23 - 2);
      v24 += *(v23 - 1);
      *(v23 - 2) = 0;
      *(v23 - 1) = 0;
      v23 += 5;
    }
    while ( v26 < v17 );
    v19 = v82;
  }
  if ( v100 )
  {
    v49 = 5 * v17 - 5;
    v50 = v17 - v66;
    v51 = (uint32_t *)(v71 + 4 * v49);
    *v51 = v19;
    v51[1] = v18;
    result = *(uint32_t *)(a1 + 108) + v73;
    v89 = result;
    v86 = *(uint32_t *)(a1 + 100) + v73;
    if ( v50 != 1 )
    {
      v93 = v50 - 2;
      if ( v50 != 2 )
      {
        v80 = 0;
        for ( k = 0; ; k = 0 )
        {
          while ( 1 )
          {
            v76 = 20 * k;
            v69 = 20 * (k + 1);
            v53 = (int *)(20 * k + v86);
            result = v69 + v86;
            v54 = *v53;
            v95 = *(uint32_t *)(v69 + v86);
            if ( v95 - *v53 > 0 )
            {
              v107 = v53[1];
              v113 = v53[2];
              v121 = v53[3];
              v129 = v53[4];
              *v53 = v95;
              v53[1] = *(uint32_t *)(result + 4);
              v53[2] = *(uint32_t *)(result + 8);
              v53[3] = *(uint32_t *)(result + 12);
              v53[4] = *(uint32_t *)(result + 16);
              v80 = k;
              *(uint32_t *)(result + 4) = v107;
              *(uint32_t *)(result + 8) = v113;
              *(uint32_t *)result = v54;
              *(uint32_t *)(result + 12) = v121;
              *(uint32_t *)(result + 16) = v129;
              if ( v89 != 0 )
              {
                v55 = (uint32_t *)(v76 + v89);
                v103 = *(uint32_t *)(v76 + v89);
                v130 = *(uint32_t *)(v76 + v89 + 16);
                result = v69 + v89;
                v122 = *(uint32_t *)(v76 + v89 + 12);
                v56 = *(uint32_t *)(v76 + v89 + 4);
                v114 = *(uint32_t *)(v76 + v89 + 8);
                *v55 = *(uint32_t *)(v69 + v89);
                v55[1] = *(uint32_t *)(v69 + v89 + 4);
                v55[2] = *(uint32_t *)(v69 + v89 + 8);
                v55[3] = *(uint32_t *)(v69 + v89 + 12);
                v55[4] = *(uint32_t *)(v69 + v89 + 16);
                *(uint32_t *)(result + 8) = v114;
                *(uint32_t *)result = v103;
                *(uint32_t *)(result + 4) = v56;
                *(uint32_t *)(result + 12) = v122;
                *(uint32_t *)(result + 16) = v130;
              }
            }
            if ( v93 <= k + 1 )
              break;
            ++k;
          }
          if ( v80 == 0 )
            break;
          v93 = v80;
          v80 = 0;
        }
      }
    }
  }
  else
  {
    v27 = (uint32_t *)(v73 + v71);
    v28 = v66 + 1;
    *v27 += v19;
    v27[1] += v18;
    if ( v66 + 1 < v17 )
    {
      v29 = (uint32_t *)(v71 + 20 * v28 + 8);
      v30 = v66 + 1;
      do
      {
        ++v30;
        *v29 -= v19;
        v29[1] -= v18;
        v29 += 5;
      }
      while ( v30 < v17 );
    }
    v31 = v17 - v66;
    v32 = 20 * v28 + *(uint32_t *)(a1 + 108);
    result = *(uint32_t *)(a1 + 100) + 20 * v28;
    v84 = result;
    if ( v31 != 1 )
    {
      v91 = v31 - 2;
      if ( v31 != 2 )
      {
        v81 = 0;
        for ( m = 0; ; m = 0 )
        {
          while ( 1 )
          {
            v77 = 20 * m;
            v70 = 20 * (m + 1);
            v58 = (int *)(20 * m + v84);
            v59 = (uint32_t *)(v70 + v84);
            v60 = *v58;
            v96 = *(uint32_t *)(v70 + v84);
            if ( v96 - *v58 > 0 )
            {
              v108 = v58[1];
              v115 = v58[2];
              v123 = v58[3];
              v131 = v58[4];
              *v58 = v96;
              v58[1] = v59[1];
              v58[2] = v59[2];
              v58[3] = v59[3];
              v58[4] = v59[4];
              v59[1] = v108;
              v59[3] = v123;
              v59[2] = v115;
              *v59 = v60;
              v59[4] = v131;
              v81 = m;
              if ( v32 != 0 )
              {
                v61 = (uint32_t *)(v77 + v32);
                v104 = *(uint32_t *)(v77 + v32);
                v132 = *(uint32_t *)(v77 + v32 + 16);
                v62 = (uint32_t *)(v70 + v32);
                v124 = *(uint32_t *)(v77 + v32 + 12);
                v63 = *(uint32_t *)(v77 + v32 + 4);
                v116 = *(uint32_t *)(v77 + v32 + 8);
                *v61 = *(uint32_t *)(v70 + v32);
                v61[1] = *(uint32_t *)(v70 + v32 + 4);
                v61[2] = *(uint32_t *)(v70 + v32 + 8);
                v61[3] = *(uint32_t *)(v70 + v32 + 12);
                v61[4] = *(uint32_t *)(v70 + v32 + 16);
                v62[2] = v116;
                *v62 = v104;
                v62[1] = v63;
                v62[3] = v124;
                v62[4] = v132;
              }
            }
            if ( v91 <= m + 1 )
              break;
            ++m;
          }
          result = v81;
          if ( v81 == 0 )
            break;
          v91 = v81;
          v81 = 0;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_tag_from_string  (binary VA: 0x12ae260)
// Original: hb_tag_from_string
// ----------------------------------------------------------------------------
unsigned int hb_tag_from_string(uint8_t *a1, unsigned int a2)
{
  unsigned int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  g4_int128_t *v9;
  unsigned int v10;
  unsigned int v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef unsigned int _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  result = 0;
  if ( a2 != 0 && a1 != nullptr && *a1 != 0 )
  {
    v3 = 4;
    if ( a2 <= 4 )
      v3 = a2;
    while ( 1 )
    {
      *((uint8_t *)v14 + result) = a1[result];
      if ( ++result >= v3 )
        break;
      if ( a1[result] == 0 )
        goto LABEL_11;
    }
    if ( result > 3 )
      return __builtin_bswap32(v14[0]);
LABEL_11:
    v4 = result + 1;
    v12 = result;
    v5 = 1;
    if ( result + 1 <= 4 )
      v5 = 4 - result;
    v6 = -((int)(uintptr_t)(v14) + result) & 0xF;
    if ( v6 > v5 )
      v6 = v5;
    if ( v6 == 0 )
      goto LABEL_19;
    *((uint8_t *)v14 + result) = 32;
    v7 = 1;
    ++result;
    if ( v6 > 1 )
    {
      do
      {
        ++v7;
        ++v4;
        *((uint8_t *)v14 + result) = 32;
        result = v4;
      }
      while ( v6 > v7 );
    }
    if ( v5 != v6 )
    {
LABEL_19:
      v8 = v5 - v6;
      v13 = 16 * (v8 >> 4);
      if ( v13 == 0 )
        goto LABEL_28;
      v9 = (g4_int128_t *)((char *)v14 + v12 + v6);
      v10 = 0;
      do
      {
        ++v10;
        *v9++ = xmmword_1C7CB30;
      }
      while ( v10 < v8 >> 4 );
      result += v13;
      if ( v8 != v13 )
      {
LABEL_28:
        do
        {
          *((uint8_t *)v14 + result) = 32;
          v11 = result + 1;
          if ( v11 > 3 )
            break;
          *((uint8_t *)v14 + v11) = 32;
          result = v11 + 1;
        }
        while ( result <= 3 );
      }
    }
    return __builtin_bswap32(v14[0]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_tag_to_string  (binary VA: 0x12ae3b0)
// Original: hb_tag_to_string
// ----------------------------------------------------------------------------
uint8_t * hb_tag_to_string(int a1, uint8_t *a2)
{
  *a2 = HIBYTE(a1);
  a2[3] = a1;
  a2[1] = BYTE2(a1);
  a2[2] = BYTE1(a1);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hb_direction_from_string  (binary VA: 0x12ae3e0)
// Original: hb_direction_from_string
// ----------------------------------------------------------------------------
int hb_direction_from_string(char *a1, int a2)
{
  int result;
  char v3;
  int v4;

  if ( a2 == 0 || a1 == nullptr )
    return 0;
  v3 = *a1;
  result = 0;
  if ( *a1 != 0 )
  {
    if ( (uint8_t)(v3 - 65) <= 0x19u )
      v3 += 32;
    switch ( v3 )
    {
      case 'l':
        v4 = 0;
        return v4 + 4;
      case 'r':
        v4 = 1;
        return v4 + 4;
      case 't':
        v4 = 2;
        return v4 + 4;
      case 'b':
        v4 = 3;
        return v4 + 4;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_direction_to_string  (binary VA: 0x12ae470)
// Original: hb_direction_to_string
// ----------------------------------------------------------------------------
const char * hb_direction_to_string(int a1)
{
  const char *result;

  result = (const char *)(&off_1CED1E0 + a1 - 4);
  if ( (unsigned int)(a1 - 4) > 3 )
    return "invalid";
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_language_from_string  (binary VA: 0x12ae4a0)
// Original: hb_language_from_string
// ----------------------------------------------------------------------------
char * hb_language_from_string(char *s, signed int a2)
{
  char *result;
  int v3;
  size_t n;
  uint32_t *v5;
  char *v6;
  uint32_t *v7;
  uint8_t v8;
  char *v9;
  int v10;
  uint8_t v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_dest[92];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_dest)) > _g4_s1 ? (16u + sizeof(_g4_t_dest)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);

  result = nullptr;
  v3 = a2;
  if ( a2 != 0 && s != nullptr && *s != 0 )
  {
    if ( a2 >= 0 )
    {
      n = a2;
      if ( a2 > 62 )
      {
        n = 63;
        v3 = 63;
      }
      memcpy(dest, s, n);
      dest[v3] = 0;
      s = (char *)(dest);
    }
    v12 = dword_2116B80;
    if ( dword_2116B80 != 0 )
    {
      v5 = (uint32_t *)dword_2116B80;
      while ( 1 )
      {
LABEL_10:
        result = (char *)v5[1];
        v6 = s;
        if ( *result == 0 )
          goto LABEL_11;
        if ( (uint8_t)*result == byte_1CED200[(uint8_t)*s] )
          break;
LABEL_12:
        v5 = (uint32_t *)*v5;
        if ( v5 == nullptr )
          goto LABEL_13;
      }
      v10 = v5[1];
      while ( 1 )
      {
        v11 = *(uint8_t *)(v10 + 1);
        ++v6;
        if ( v11 == 0 )
          break;
        ++v10;
        if ( v11 != byte_1CED200[(uint8_t)*v6] )
        {
          v5 = (uint32_t *)*v5;
          if ( v5 != nullptr )
            goto LABEL_10;
          goto LABEL_13;
        }
      }
LABEL_11:
      if ( byte_1CED200[(uint8_t)*v6] == 0 )
        return result;
      goto LABEL_12;
    }
LABEL_13:
    v7 = (uint32_t *)(calloc(1u, 8u));
    result = nullptr;
    if ( v7 != nullptr )
    {
      *v7 = v12;
      result = strdup(s);
      v8 = *result;
      v7[1] = (uint32_t)(uintptr_t)(result);
      v9 = result;
      if ( v8 != 0 )
      {
        do
        {
          *v9++ = byte_1CED200[v8];
          v8 = *v9;
        }
        while ( *v9 != 0 );
      }
      dword_2116B80 = (int)(uintptr_t)(v7);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_language_to_string  (binary VA: 0x12ae620)
// Original: hb_language_to_string
// ----------------------------------------------------------------------------
int hb_language_to_string(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hb_language_get_default  (binary VA: 0x12ae630)
// Original: hb_language_get_default
// ----------------------------------------------------------------------------
int hb_language_get_default()
{
  int result;
  char *v1;
  char *v2;

  result = dword_2116B90;
  if ( dword_2116B90 == 0 )
  {
    v1 = setlocale(0, nullptr);
    v2 = hb_language_from_string(v1, -1);
    result = dword_2116B90;
    if ( dword_2116B90 == 0 )
    {
      dword_2116B90 = (int)(uintptr_t)(v2);
      return (int)(uintptr_t)(v2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_script_from_iso15924_tag  (binary VA: 0x12ae690)
// Original: hb_script_from_iso15924_tag
// ----------------------------------------------------------------------------
unsigned int hb_script_from_iso15924_tag(int a1)
{
  unsigned int result;
  unsigned int v2;

  result = 0;
  if ( a1 != 0 )
  {
    result = 1131376756;
    v2 = a1 & 0xDFDFDFDF | 0x202020;
    if ( v2 != 1365336419 )
    {
      if ( v2 > 0x51616163 )
      {
        result = 1400468067;
        if ( v2 == 1400468069 )
          return result;
        if ( v2 <= 0x53797265 )
        {
          result = 1516858984;
          if ( v2 == 1365336425 )
            return result;
          goto LABEL_7;
        }
        if ( v2 != 1400468074 && v2 != 1400468078 )
        {
LABEL_7:
          result = 1517976186;
          if ( (a1 & 0xC0C0C0C0 | 0x202020) == 0x40606060 )
            return a1 & 0xDFDFDFDF | 0x202020;
        }
      }
      else
      {
        result = 1281455214;
        if ( v2 != 1281455206 && v2 != 1281455207 )
        {
          result = 1132032620;
          if ( v2 != 1132032627 )
            goto LABEL_7;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_script_from_string  (binary VA: 0x12ae740)
// Original: hb_script_from_string
// ----------------------------------------------------------------------------
unsigned int hb_script_from_string(uint8_t *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = hb_tag_from_string(a1, a2);
  return hb_script_from_iso15924_tag(v2);
}

// ----------------------------------------------------------------------------
// Function: hb_script_to_iso15924_tag  (binary VA: 0x12ae780)
// Original: hb_script_to_iso15924_tag
// ----------------------------------------------------------------------------
int hb_script_to_iso15924_tag(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hb_script_get_horizontal_direction  (binary VA: 0x12ae790)
// Original: hb_script_get_horizontal_direction
// ----------------------------------------------------------------------------
int hb_script_get_horizontal_direction(unsigned int a1)
{
  if ( a1 == 1315009122 )
    return 5;
  if ( a1 <= 0x4E617262 )
  {
    if ( a1 != 1265131890 )
    {
      if ( a1 <= 0x4B686172 )
      {
        if ( a1 != 1098281844 )
        {
          if ( a1 <= 0x41767374 )
          {
            if ( a1 == 1098015074 || a1 == 1098018153 )
              return 5;
          }
          else if ( a1 == 1131442804 || a1 == 1214603890 )
          {
            return 5;
          }
          return 4;
        }
      }
      else if ( a1 != 1298230889 )
      {
        if ( a1 <= 0x4D616E69 )
        {
          if ( a1 == 1283023977 || a1 == 1298230884 )
            return 5;
        }
        else if ( a1 == 1298494051 || a1 == 1298494063 || a1 == 1298493028 )
        {
          return 5;
        }
        return 4;
      }
    }
    return 5;
  }
  switch ( a1 )
  {
    case 0x4E626174u:
    case 0x4E6B6F6Fu:
    case 0x4F726B68u:
    case 0x50616C6Du:
    case 0x50686C69u:
    case 0x50686C70u:
    case 0x50686E78u:
    case 0x50727469u:
    case 0x53616D72u:
    case 0x53617262u:
    case 0x53797263u:
    case 0x54686161u:
      return 5;
    default:
      return 4;
  }
}

// ----------------------------------------------------------------------------
// Function: hb_version  (binary VA: 0x12aeb80)
// Original: hb_version
// ----------------------------------------------------------------------------
uint32_t * hb_version(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  *a1 = 0;
  *a2 = 9;
  *a3 = 34;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hb_version_string  (binary VA: 0x12aeba0)
// Original: hb_version_string
// ----------------------------------------------------------------------------
const char * hb_version_string()
{
  return "0.9.34";
}

// ----------------------------------------------------------------------------
// Function: hb_version_atleast  (binary VA: 0x12aebc0)
// Original: hb_version_atleast
// ----------------------------------------------------------------------------
bool hb_version_atleast(int a1, int a2, int a3)
{
  return (unsigned int)(10000 * a1 + a3 + 100 * a2) <= 0x3A6;
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_get_empty  (binary VA: 0x12af440)
// Original: hb_font_funcs_get_empty
// ----------------------------------------------------------------------------
void * hb_font_funcs_get_empty()
{
  return &unk_2036A80;
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_create  (binary VA: 0x12af460)
// Original: hb_font_funcs_create
// ----------------------------------------------------------------------------
uint32_t * hb_font_funcs_create()
{
  uint32_t *v0;
  uint32_t *v1;

  v0 = (uint32_t *)(calloc(1u, 0xB4u));
  v1 = v0;
  if ( v0 == nullptr )
    return (uint32_t *)(hb_font_funcs_get_empty());
  *v0 = 1;
  memset(v0 + 2, 0, 0x24u);
  v0[12] = off_2036AB0;
  v0[13] = off_2036AB4[0];
  v0[14] = off_2036AB8;
  v0[15] = off_2036ABC[0];
  v0[16] = off_2036AC0;
  v0[17] = off_2036AC4[0];
  v0[18] = off_2036AC8[0];
  v0[19] = off_2036ACC;
  v0[20] = off_2036AD0;
  v0[21] = off_2036AD4;
  v0[22] = off_2036AD8;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_reference  (binary VA: 0x12af540)
// Original: hb_font_funcs_reference
// ----------------------------------------------------------------------------
uint32_t * hb_font_funcs_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_destroy  (binary VA: 0x12af560)
// Original: hb_font_funcs_destroy
// ----------------------------------------------------------------------------
void hb_font_funcs_destroy(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  void (*v6)(int);
  int *ptr;
  void (*v8)(int);
  void (*v9)(int);
  void (*v10)(int);
  void (*v11)(int);
  void (*v12)(int);
  void (*v13)(int);
  void (*v14)(int);
  void (*v15)(int);
  void (*v16)(int);
  void (*v17)(int);
  void (*v18)(int);

  if ( a1 != nullptr && *a1 != -1 )
  {
    v1 = *a1 - 1;
    *a1 = v1;
    if ( v1 == 0 )
    {
      v2 = a1[2];
      *a1 = -1;
      if ( v2 != 0 )
      {
LABEL_5:
        v3 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v4 = a1[4] + v3;
          v3 -= 12;
          v5 = *(uint32_t *)(v4 + 4);
          v6 = *(void (**)(int))(v4 + 8);
          a1[2] = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = a1[2];
            goto LABEL_5;
          }
        }
      }
      ptr = (int *)a1[4];
      if ( ptr != a1 + 5 )
        free(ptr);
      v8 = (void (*)(int))a1[34];
      a1[4] = 0;
      a1[2] = 0;
      a1[3] = 0;
      if ( v8 != nullptr )
        v8(a1[23]);
      v9 = (void (*)(int))a1[35];
      if ( v9 != nullptr )
        v9(a1[24]);
      v10 = (void (*)(int))a1[36];
      if ( v10 != nullptr )
        v10(a1[25]);
      v11 = (void (*)(int))a1[37];
      if ( v11 != nullptr )
        v11(a1[26]);
      v12 = (void (*)(int))a1[38];
      if ( v12 != nullptr )
        v12(a1[27]);
      v13 = (void (*)(int))a1[39];
      if ( v13 != nullptr )
        v13(a1[28]);
      v14 = (void (*)(int))a1[40];
      if ( v14 != nullptr )
        v14(a1[29]);
      v15 = (void (*)(int))a1[41];
      if ( v15 != nullptr )
        v15(a1[30]);
      v16 = (void (*)(int))a1[42];
      if ( v16 != nullptr )
        v16(a1[31]);
      v17 = (void (*)(int))a1[43];
      if ( v17 != nullptr )
        v17(a1[32]);
      v18 = (void (*)(int))a1[44];
      if ( v18 != nullptr )
        v18(a1[33]);
      free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_set_user_data  (binary VA: 0x12af6e0)
// Original: hb_font_funcs_set_user_data
// ----------------------------------------------------------------------------
int hb_font_funcs_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_get_user_data  (binary VA: 0x12af730)
// Original: hb_font_funcs_get_user_data
// ----------------------------------------------------------------------------
int hb_font_funcs_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_make_immutable  (binary VA: 0x12af760)
// Original: hb_font_funcs_make_immutable
// ----------------------------------------------------------------------------
uint32_t * hb_font_funcs_make_immutable(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[11] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_funcs_is_immutable  (binary VA: 0x12af780)
// Original: hb_font_funcs_is_immutable
// ----------------------------------------------------------------------------
int hb_font_funcs_is_immutable(int a1)
{
  return *(uint32_t *)(a1 + 44);
}



// ============================================================================
// Address:   0x12af790 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_func
// Demangled: hb_font_funcs_set_glyph_func
// ============================================================================
int (*hb_font_funcs_set_glyph_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, int a4, uint32_t *a5),
        int (*a4)(int (*)(int a1, int a2, int a3, int a4, uint32_t *a5))))(int a1, int a2, int a3, int a4, uint32_t *a5)
{
  int (*result)(int, int, int, int, uint32_t *);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, int, uint32_t *))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[34];
    if ( v5 != nullptr )
    {
      v5(a1[23]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[12] = a2;
      a1[23] = (uint32_t)(uintptr_t)(result);
      a1[34] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[23] = 0;
      a1[12] = (uint32_t)(uintptr_t)(sub_12AED50);
      a1[34] = 0;
      return (int (*)(int, int, int, int, uint32_t *))(uintptr_t)(sub_12AED50);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12af840 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_h_advance_func
// Demangled: hb_font_funcs_set_glyph_h_advance_func
// ============================================================================
int (*hb_font_funcs_set_glyph_h_advance_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3),
        int (*a4)(int (*)(int a1, int a2, int a3))))(int a1, int a2, int a3)
{
  int (*result)(int, int, int);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[35];
    if ( v5 != nullptr )
    {
      v5(a1[24]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[13] = a2;
      a1[24] = (uint32_t)(uintptr_t)(result);
      a1[35] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[24] = 0;
      a1[13] = (uint32_t)(uintptr_t)(sub_12AEDB0);
      a1[35] = 0;
      return (int (*)(int, int, int))(uintptr_t)(sub_12AEDB0);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12af8f0 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_v_advance_func
// Demangled: hb_font_funcs_set_glyph_v_advance_func
// ============================================================================
int (*hb_font_funcs_set_glyph_v_advance_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3),
        int (*a4)(int (*)(int a1, int a2, int a3))))(int a1, int a2, int a3)
{
  int (*result)(int, int, int);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[36];
    if ( v5 != nullptr )
    {
      v5(a1[25]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[14] = a2;
      a1[25] = (uint32_t)(uintptr_t)(result);
      a1[36] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[25] = 0;
      a1[14] = (uint32_t)(uintptr_t)(sub_12AEE30);
      a1[36] = 0;
      return (int (*)(int, int, int))(uintptr_t)(sub_12AEE30);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12af9a0 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_h_origin_func
// Demangled: hb_font_funcs_set_glyph_h_origin_func
// ============================================================================
int (*hb_font_funcs_set_glyph_h_origin_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, int *a4, uint32_t *a5),
        int (*a4)(int (*)(int a1, int a2, int a3, int *a4, uint32_t *a5))))(int a1, int a2, int a3, int *a4, uint32_t *a5)
{
  int (*result)(int, int, int, int *, uint32_t *);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, int *, uint32_t *))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[37];
    if ( v5 != nullptr )
    {
      v5(a1[26]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[15] = a2;
      a1[26] = (uint32_t)(uintptr_t)(result);
      a1[37] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[26] = 0;
      a1[15] = (uint32_t)(uintptr_t)(sub_12AF200);
      a1[37] = 0;
      return (int (*)(int, int, int, int *, uint32_t *))(uintptr_t)(sub_12AF200);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afa50 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_v_origin_func
// Demangled: hb_font_funcs_set_glyph_v_origin_func
// ============================================================================
int (*hb_font_funcs_set_glyph_v_origin_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, int *a4, uint32_t *a5),
        int (*a4)(int (*)(int a1, int a2, int a3, int *a4, uint32_t *a5))))(int a1, int a2, int a3, int *a4, uint32_t *a5)
{
  int (*result)(int, int, int, int *, uint32_t *);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, int *, uint32_t *))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[38];
    if ( v5 != nullptr )
    {
      v5(a1[27]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[16] = a2;
      a1[27] = (uint32_t)(uintptr_t)(result);
      a1[38] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[27] = 0;
      a1[16] = (uint32_t)(uintptr_t)(sub_12AF320);
      a1[38] = 0;
      return (int (*)(int, int, int, int *, uint32_t *))(uintptr_t)(sub_12AF320);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afb00 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_h_kerning_func
// Demangled: hb_font_funcs_set_glyph_h_kerning_func
// ============================================================================
int (*hb_font_funcs_set_glyph_h_kerning_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, int a4),
        int (*a4)(int (*)(int a1, int a2, int a3, int a4))))(int a1, int a2, int a3, int a4)
{
  int (*result)(int, int, int, int);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, int))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[39];
    if ( v5 != nullptr )
    {
      v5(a1[28]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[17] = a2;
      a1[28] = (uint32_t)(uintptr_t)(result);
      a1[39] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[28] = 0;
      a1[17] = (uint32_t)(uintptr_t)(sub_12AEC50);
      a1[39] = 0;
      return (int (*)(int, int, int, int))(uintptr_t)(sub_12AEC50);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afbb0 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_v_kerning_func
// Demangled: hb_font_funcs_set_glyph_v_kerning_func
// ============================================================================
int (*hb_font_funcs_set_glyph_v_kerning_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, int a4),
        int (*a4)(int (*)(int a1, int a2, int a3, int a4))))(int a1, int a2, int a3, int a4)
{
  int (*result)(int, int, int, int);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, int))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[40];
    if ( v5 != nullptr )
    {
      v5(a1[29]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[18] = a2;
      a1[29] = (uint32_t)(uintptr_t)(result);
      a1[40] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[29] = 0;
      a1[18] = (uint32_t)(uintptr_t)(sub_12AECD0);
      a1[40] = 0;
      return (int (*)(int, int, int, int))(uintptr_t)(sub_12AECD0);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afc60 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_extents_func
// Demangled: hb_font_funcs_set_glyph_extents_func
// ============================================================================
int (*hb_font_funcs_set_glyph_extents_func(
        uint32_t *a1,
        int a2,
        int (*a3)(uint32_t *a1, int a2, int a3, int *a4),
        int (*a4)(int (*)(uint32_t *a1, int a2, int a3, int *a4))))(uint32_t *a1, int a2, int a3, int *a4)
{
  int (*result)(uint32_t *, int, int, int *);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(uint32_t *, int, int, int *))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[41];
    if ( v5 != nullptr )
    {
      v5(a1[30]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[19] = a2;
      a1[30] = (uint32_t)(uintptr_t)(result);
      a1[41] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[30] = 0;
      a1[19] = (uint32_t)(uintptr_t)(sub_12AF070);
      a1[41] = 0;
      return (int (*)(uint32_t *, int, int, int *))(uintptr_t)(sub_12AF070);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afd10 (size: 164 bytes)
// Symbol:    hb_font_funcs_set_glyph_contour_point_func
// Demangled: hb_font_funcs_set_glyph_contour_point_func
// ============================================================================
int (*hb_font_funcs_set_glyph_contour_point_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6),
        int (*a4)(int (*)(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6))))(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6)
{
  int (*result)(int, int, int, int, int *, uint32_t *);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, int, int *, uint32_t *))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[42];
    if ( v5 != nullptr )
    {
      v5(a1[31]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[20] = a2;
      a1[31] = (uint32_t)(uintptr_t)(result);
      a1[42] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[31] = 0;
      a1[20] = (uint32_t)(uintptr_t)(sub_12AEEB0);
      a1[42] = 0;
      return (int (*)(int, int, int, int, int *, uint32_t *))(uintptr_t)(sub_12AEEB0);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afdc0 (size: 175 bytes)
// Symbol:    hb_font_funcs_set_glyph_name_func
// Demangled: hb_font_funcs_set_glyph_name_func
// ============================================================================
int (*hb_font_funcs_set_glyph_name_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, int a3, uint8_t *a4, int a5),
        int (*a4)(int (*)(int a1, int a2, int a3, uint8_t *a4, int a5))))(int a1, int a2, int a3, uint8_t *a4, int a5)
{
  int (*result)(int, int, int, uint8_t *, int);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, int, uint8_t *, int))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[43];
    if ( v5 != nullptr )
    {
      v5(a1[32]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[21] = a2;
      a1[32] = (uint32_t)(uintptr_t)(result);
      a1[43] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[32] = 0;
      a1[21] = (uint32_t)(uintptr_t)(sub_12AEBE0);
      a1[43] = 0;
      return (int (*)(int, int, int, uint8_t *, int))(uintptr_t)(sub_12AEBE0);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x12afe70 (size: 175 bytes)
// Symbol:    hb_font_funcs_set_glyph_from_name_func
// Demangled: hb_font_funcs_set_glyph_from_name_func
// ============================================================================
int (*hb_font_funcs_set_glyph_from_name_func(
        uint32_t *a1,
        int a2,
        int (*a3)(int a1, int a2, char *s, size_t a4, uint32_t *a5),
        int (*a4)(int (*)(int a1, int a2, char *s, size_t a4, uint32_t *a5))))(int a1, int a2, char *s, size_t a4, uint32_t *a5)
{
  int (*result)(int, int, char *, size_t, uint32_t *);
  void (*v5)(uint32_t);

  result = a3;
  if ( a1[11] != 0 )
  {
    if ( a4 != nullptr )
      return (int (*)(int, int, char *, size_t, uint32_t *))a4(a3);
  }
  else
  {
    v5 = (void (*)(uint32_t))a1[44];
    if ( v5 != nullptr )
    {
      v5(a1[33]);
      result = a3;
    }
    if ( a2 != 0 )
    {
      a1[22] = a2;
      a1[33] = (uint32_t)(uintptr_t)(result);
      a1[44] = (uint32_t)(uintptr_t)(a4);
    }
    else
    {
      a1[33] = 0;
      a1[22] = (uint32_t)(uintptr_t)(sub_12AEFD0);
      a1[44] = 0;
      return (int (*)(int, int, char *, size_t, uint32_t *))(uintptr_t)(sub_12AEFD0);
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph  (binary VA: 0x12aff20)
// Original: hb_font_get_glyph
// ----------------------------------------------------------------------------
int hb_font_get_glyph(int a1, int a2, int a3, uint32_t *a4)
{
  *a4 = 0;
  return (*(int (**)(int, uint32_t, int, int, uint32_t *, uint32_t))(*(uint32_t *)(a1 + 72) + 48))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           a4,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 92));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_h_advance  (binary VA: 0x12aff70)
// Original: hb_font_get_glyph_h_advance
// ----------------------------------------------------------------------------
int hb_font_get_glyph_h_advance(int a1, int a2)
{
  return (*(int (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)(a1 + 72) + 52))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 96));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_v_advance  (binary VA: 0x12affa0)
// Original: hb_font_get_glyph_v_advance
// ----------------------------------------------------------------------------
int hb_font_get_glyph_v_advance(int a1, int a2)
{
  return (*(int (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)(a1 + 72) + 56))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 100));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_h_origin  (binary VA: 0x12affd0)
// Original: hb_font_get_glyph_h_origin
// ----------------------------------------------------------------------------
int hb_font_get_glyph_h_origin(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  *a4 = 0;
  *a3 = 0;
  return (*(int (**)(int, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(*(uint32_t *)(a1 + 72) + 60))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           a4,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 104));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_v_origin  (binary VA: 0x12b0030)
// Original: hb_font_get_glyph_v_origin
// ----------------------------------------------------------------------------
int hb_font_get_glyph_v_origin(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  *a4 = 0;
  *a3 = 0;
  return (*(int (**)(int, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(*(uint32_t *)(a1 + 72) + 64))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           a4,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 108));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_h_kerning  (binary VA: 0x12b0090)
// Original: hb_font_get_glyph_h_kerning
// ----------------------------------------------------------------------------
int hb_font_get_glyph_h_kerning(int a1, int a2, int a3)
{
  return (*(int (**)(int, uint32_t, int, int, uint32_t))(*(uint32_t *)(a1 + 72) + 68))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 112));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_v_kerning  (binary VA: 0x12b00d0)
// Original: hb_font_get_glyph_v_kerning
// ----------------------------------------------------------------------------
int hb_font_get_glyph_v_kerning(int a1, int a2, int a3)
{
  return (*(int (**)(int, uint32_t, int, int, uint32_t))(*(uint32_t *)(a1 + 72) + 72))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 116));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_extents  (binary VA: 0x12b0110)
// Original: hb_font_get_glyph_extents
// ----------------------------------------------------------------------------
int hb_font_get_glyph_extents(int a1, int a2, uint32_t *a3)
{
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  return (*(int (**)(int, uint32_t, int, uint32_t *, uint32_t))(*(uint32_t *)(a1 + 72) + 76))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 120));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_contour_point  (binary VA: 0x12b0170)
// Original: hb_font_get_glyph_contour_point
// ----------------------------------------------------------------------------
int hb_font_get_glyph_contour_point(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5)
{
  *a5 = 0;
  *a4 = 0;
  return (*(int (**)(int, uint32_t, int, int, uint32_t *, uint32_t *, uint32_t))(*(uint32_t *)(a1 + 72) + 80))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           a4,
           a5,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 124));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_name  (binary VA: 0x12b01d0)
// Original: hb_font_get_glyph_name
// ----------------------------------------------------------------------------
int hb_font_get_glyph_name(int a1, int a2, uint8_t *a3, int a4)
{
  if ( a4 != 0 )
    *a3 = 0;
  return (*(int (**)(int, uint32_t, int, uint8_t *, int, uint32_t))(*(uint32_t *)(a1 + 72) + 84))(
           a1,
           *(uint32_t *)(a1 + 76),
           a2,
           a3,
           a4,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 128));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_from_name  (binary VA: 0x12b0230)
// Original: hb_font_get_glyph_from_name
// ----------------------------------------------------------------------------
int hb_font_get_glyph_from_name(int a1, char *s, size_t a3, uint32_t *a4)
{
  size_t v4;

  v4 = a3;
  *a4 = 0;
  if ( a3 == -1 )
    v4 = strlen(s);
  return (*(int (**)(int, uint32_t, char *, size_t, uint32_t *, uint32_t))(*(uint32_t *)(a1 + 72) + 88))(
           a1,
           *(uint32_t *)(a1 + 76),
           s,
           v4,
           a4,
           *(uint32_t *)(*(uint32_t *)(a1 + 72) + 132));
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_advance_for_direction  (binary VA: 0x12b02b0)
// Original: hb_font_get_glyph_advance_for_direction
// ----------------------------------------------------------------------------
int hb_font_get_glyph_advance_for_direction(int a1, int a2, int a3, int *a4, int *a5)
{
  int result;

  if ( (a3 & 0xFFFFFFFE) == 4 )
  {
    result = (*(int (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)(a1 + 72) + 52))(
               a1,
               *(uint32_t *)(a1 + 76),
               a2,
               *(uint32_t *)(*(uint32_t *)(a1 + 72) + 96));
    *a4 = result;
    *a5 = 0;
  }
  else
  {
    *a4 = 0;
    result = (*(int (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)(a1 + 72) + 56))(
               a1,
               *(uint32_t *)(a1 + 76),
               a2,
               *(uint32_t *)(*(uint32_t *)(a1 + 72) + 100));
    *a5 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_origin_for_direction  (binary VA: 0x12b0340)
// Original: hb_font_get_glyph_origin_for_direction
// ----------------------------------------------------------------------------
int hb_font_get_glyph_origin_for_direction(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5)
{
  int v5;
  int result;
  int v7;
  int v8;

  *a5 = 0;
  *a4 = 0;
  v5 = a1[18];
  if ( (a3 & 0xFFFFFFFE) == 4 )
  {
    result = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v5 + 60))(
               a1,
               a1[19],
               a2,
               a4,
               a5,
               *(uint32_t *)(v5 + 104));
    if ( result == 0 )
    {
      *a5 = 0;
      *a4 = 0;
      result = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 64))(
                 a1,
                 a1[19],
                 a2,
                 a4,
                 a5,
                 *(uint32_t *)(a1[18] + 108));
      if ( result != 0 )
      {
        v7 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a1[18] + 52))(a1, a1[19], a2, *(uint32_t *)(a1[18] + 96));
        v8 = a1[15];
        result = v7 / 2;
        *a4 -= result;
        *a5 -= v8;
      }
    }
  }
  else
  {
    result = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v5 + 64))(
               a1,
               a1[19],
               a2,
               a4,
               a5,
               *(uint32_t *)(v5 + 108));
    if ( result == 0 )
    {
      *a5 = 0;
      *a4 = 0;
      result = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 60))(
                 a1,
                 a1[19],
                 a2,
                 a4,
                 a5,
                 *(uint32_t *)(a1[18] + 104));
      if ( result != 0 )
        return sub_12B1552(a4, a5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_add_glyph_origin_for_direction  (binary VA: 0x12b04c0)
// Original: hb_font_add_glyph_origin_for_direction
// ----------------------------------------------------------------------------
int hb_font_add_glyph_origin_for_direction(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5)
{
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v13[0] = 0;
  v12[0] = 0;
  v5 = a1[18];
  if ( (a3 & 0xFFFFFFFE) != 4 )
  {
    if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v5 + 64))(
           a1,
           a1[19],
           a2,
           v12,
           v13,
           *(uint32_t *)(v5 + 108)) == 0 )
    {
      v11 = a1[18];
      v13[0] = 0;
      v12[0] = 0;
      if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v11 + 60))(
             a1,
             a1[19],
             a2,
             v12,
             v13,
             *(uint32_t *)(v11 + 104)) != 0 )
      {
        sub_12B1552(v12, v13);
        v6 = v12[0];
        result = v13[0];
        goto LABEL_4;
      }
    }
LABEL_3:
    v6 = v12[0];
    result = v13[0];
LABEL_4:
    *a4 += v6;
    *a5 += result;
    return result;
  }
  if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 60))(
         a1,
         a1[19],
         a2,
         v12,
         v13,
         *(uint32_t *)(v5 + 104)) != 0 )
    goto LABEL_3;
  v8 = a1[18];
  v13[0] = 0;
  v12[0] = 0;
  if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v8 + 64))(
         a1,
         a1[19],
         a2,
         v12,
         v13,
         *(uint32_t *)(v8 + 108)) == 0 )
    goto LABEL_3;
  v9 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a1[18] + 52))(a1, a1[19], a2, *(uint32_t *)(a1[18] + 96));
  v10 = v12[0] - v9 / 2;
  result = v13[0] - a1[15];
  *a4 += v10;
  *a5 += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_subtract_glyph_origin_for_direction  (binary VA: 0x12b0680)
// Original: hb_font_subtract_glyph_origin_for_direction
// ----------------------------------------------------------------------------
int hb_font_subtract_glyph_origin_for_direction(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5)
{
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v13[0] = 0;
  v12[0] = 0;
  v5 = a1[18];
  if ( (a3 & 0xFFFFFFFE) != 4 )
  {
    if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v5 + 64))(
           a1,
           a1[19],
           a2,
           v12,
           v13,
           *(uint32_t *)(v5 + 108)) == 0 )
    {
      v11 = a1[18];
      v13[0] = 0;
      v12[0] = 0;
      if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v11 + 60))(
             a1,
             a1[19],
             a2,
             v12,
             v13,
             *(uint32_t *)(v11 + 104)) != 0 )
      {
        sub_12B1552(v12, v13);
        v6 = v12[0];
        result = v13[0];
        goto LABEL_4;
      }
    }
LABEL_3:
    v6 = v12[0];
    result = v13[0];
LABEL_4:
    *a4 -= v6;
    *a5 -= result;
    return result;
  }
  if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 60))(
         a1,
         a1[19],
         a2,
         v12,
         v13,
         *(uint32_t *)(v5 + 104)) != 0 )
    goto LABEL_3;
  v8 = a1[18];
  v13[0] = 0;
  v12[0] = 0;
  if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v8 + 64))(
         a1,
         a1[19],
         a2,
         v12,
         v13,
         *(uint32_t *)(v8 + 108)) == 0 )
    goto LABEL_3;
  v9 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a1[18] + 52))(a1, a1[19], a2, *(uint32_t *)(a1[18] + 96));
  v10 = v12[0] - v9 / 2;
  result = v13[0] - a1[15];
  *a4 -= v10;
  *a5 -= result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_kerning_for_direction  (binary VA: 0x12b0840)
// Original: hb_font_get_glyph_kerning_for_direction
// ----------------------------------------------------------------------------
int hb_font_get_glyph_kerning_for_direction(int a1, int a2, int a3, int a4, int *a5, int *a6)
{
  int result;

  if ( (a4 & 0xFFFFFFFE) == 4 )
  {
    result = (*(int (**)(int, uint32_t, int, int, uint32_t))(*(uint32_t *)(a1 + 72) + 68))(
               a1,
               *(uint32_t *)(a1 + 76),
               a2,
               a3,
               *(uint32_t *)(*(uint32_t *)(a1 + 72) + 112));
    *a5 = result;
    *a6 = 0;
  }
  else
  {
    *a5 = 0;
    result = (*(int (**)(int, uint32_t, int, int, uint32_t))(*(uint32_t *)(a1 + 72) + 72))(
               a1,
               *(uint32_t *)(a1 + 76),
               a2,
               a3,
               *(uint32_t *)(*(uint32_t *)(a1 + 72) + 116));
    *a6 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_extents_for_origin  (binary VA: 0x12b08e0)
// Original: hb_font_get_glyph_extents_for_origin
// ----------------------------------------------------------------------------
int hb_font_get_glyph_extents_for_origin(uint32_t *a1, int a2, int a3, uint32_t *a4)
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
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef uint32_t _g4_t_v20[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);

  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  a4[3] = 0;
  v4 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t))(a1[18] + 76))(
         a1,
         a1[19],
         a2,
         a4,
         *(uint32_t *)(a1[18] + 120));
  if ( v4 == 0 )
    return 0;
  v20[0] = 0;
  v19[0] = 0;
  v6 = a1[18];
  if ( (a3 & 0xFFFFFFFE) == 4 )
  {
    v18 = v4;
    v11 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 60))(
            a1,
            a1[19],
            a2,
            v19,
            v20,
            *(uint32_t *)(v6 + 104));
    v8 = v18;
    if ( v11 == 0 )
    {
      v12 = a1[18];
      v20[0] = 0;
      v19[0] = 0;
      v13 = (*(int (**)(int, uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v12 + 64))(
              v18,
              a1,
              a1[19],
              a2,
              v19,
              v20,
              *(uint32_t *)(v12 + 108));
      v8 = v18;
      if ( v13 != 0 )
      {
        v14 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a1[18] + 52))(
                a1,
                a1[19],
                a2,
                *(uint32_t *)(a1[18] + 96));
        v8 = v18;
        v9 = v19[0] - v14 / 2;
        v10 = v20[0] - a1[15];
        goto LABEL_6;
      }
    }
  }
  else
  {
    v17 = v4;
    v7 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v6 + 64))(
           a1,
           a1[19],
           a2,
           v19,
           v20,
           *(uint32_t *)(v6 + 108));
    v8 = v17;
    if ( v7 == 0 )
    {
      v15 = a1[18];
      v20[0] = 0;
      v19[0] = 0;
      v16 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v15 + 60))(
              a1,
              a1[19],
              a2,
              v19,
              v20,
              *(uint32_t *)(v15 + 104));
      v8 = v17;
      if ( v16 != 0 )
      {
        sub_12B1552(v19, v20);
        v9 = v19[0];
        v10 = v20[0];
        v8 = v17;
        goto LABEL_6;
      }
    }
  }
  v9 = v19[0];
  v10 = v20[0];
LABEL_6:
  a4[1] -= v10;
  *a4 -= v9;
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_glyph_contour_point_for_origin  (binary VA: 0x12b0b00)
// Original: hb_font_get_glyph_contour_point_for_origin
// ----------------------------------------------------------------------------
int hb_font_get_glyph_contour_point_for_origin(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6)
{
  int v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef uint32_t _g4_t_v13[4];
  typedef uint32_t _g4_t_v14[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  *a6 = 0;
  *a5 = 0;
  v6 = (*(int (**)(uint32_t *, uint32_t, int, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 80))(
         a1,
         a1[19],
         a2,
         a3,
         a5,
         a6,
         *(uint32_t *)(a1[18] + 124));
  if ( v6 == 0 )
    return 0;
  v14[0] = 0;
  v13[0] = 0;
  if ( (a4 & 0xFFFFFFFE) == 4 )
  {
    if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 60))(
           a1,
           a1[19],
           a2,
           v13,
           v14,
           *(uint32_t *)(a1[18] + 104)) == 0 )
    {
      v10 = a1[18];
      v14[0] = 0;
      v13[0] = 0;
      if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v10 + 64))(
             a1,
             a1[19],
             a2,
             v13,
             v14,
             *(uint32_t *)(v10 + 108)) != 0 )
      {
        v11 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a1[18] + 52))(
                a1,
                a1[19],
                a2,
                *(uint32_t *)(a1[18] + 96));
        v8 = v13[0] - v11 / 2;
        v9 = v14[0] - a1[15];
        goto LABEL_6;
      }
    }
  }
  else if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a1[18] + 64))(
              a1,
              a1[19],
              a2,
              v13,
              v14,
              *(uint32_t *)(a1[18] + 108)) == 0 )
  {
    v12 = a1[18];
    v14[0] = 0;
    v13[0] = 0;
    if ( (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v12 + 60))(
           a1,
           a1[19],
           a2,
           v13,
           v14,
           *(uint32_t *)(v12 + 104)) != 0 )
    {
      sub_12B1552(v13, v14);
      v8 = v13[0];
      v9 = v14[0];
      goto LABEL_6;
    }
  }
  v8 = v13[0];
  v9 = v14[0];
LABEL_6:
  *a5 -= v8;
  *a6 -= v9;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hb_font_glyph_to_string  (binary VA: 0x12b0d10)
// Original: hb_font_glyph_to_string
// ----------------------------------------------------------------------------
int hb_font_glyph_to_string(int a1, int a2, char *s, size_t maxlen)
{
  int result;

  if ( maxlen != 0 )
    *s = 0;
  result = (*(int (**)(int, uint32_t, int, char *, size_t, uint32_t))(*(uint32_t *)(a1 + 72) + 84))(
             a1,
             *(uint32_t *)(a1 + 76),
             a2,
             s,
             maxlen,
             *(uint32_t *)(*(uint32_t *)(a1 + 72) + 128));
  if ( result == 0 && maxlen != 0 )
  {
    result = snprintf(s, maxlen, "gid%u", a2);
    if ( result < 0 )
      *s = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_glyph_from_string  (binary VA: 0x12b0dc0)
// Original: hb_font_glyph_from_string
// ----------------------------------------------------------------------------
bool hb_font_glyph_from_string(int a1, char *s, int n, unsigned int *a4, int a5, int a6, int a7, char *endptr, int a9, int a10, int a11, ...)
{
  int v11;
  size_t v12;
  int v13;
  int v14;
  int v15;
  size_t v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  bool v25;
  size_t v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  size_t v32;
  int v33;
  int v34;
  unsigned int v35;
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
  int v65;
  int v66;
  va_list va;

  va_start(va, a11);
  v11 = a1;
  *a4 = 0;
  v12 = n;
  if ( n == -1 )
  {
    v12 = strlen(s);
    v11 = a1;
  }
  v13 = 1;
  v14 = (*(int (**)(int, uint32_t, char *, size_t, unsigned int *, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(uint32_t *)(v11 + 72) + 88))(
          v11,
          *(uint32_t *)(v11 + 76),
          s,
          v12,
          a4,
          *(uint32_t *)(*(uint32_t *)(v11 + 72) + 132),
          v39,
          v40,
          v41,
          v42,
          v43,
          v11,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
  v15 = a7;
  if ( v14 == 0 )
  {
    if ( n == -1 )
    {
      n = strlen(s);
      v15 = a7;
    }
    v16 = 63;
    if ( (unsigned int)n <= 0x3F )
      v16 = n;
    v65 = v15;
    strncpy(g4_va_cast<char *>(va), s, v16);
    *(g4_va_cast<char *>(va) + v16) = 0;
    *(uint32_t *)__errno(v18, v17) = 0;
    v19 = strtoul(g4_va_cast<const char *>(va), &endptr, 10);
    v22 = (uint32_t *)__errno(v21, v20);
    v23 = v65;
    if ( *v22 != 0 || *endptr != 0 )
    {
      v13 = 0;
      if ( n > 3 )
      {
        if ( memcmp(s, "gid", 3u) != 0 )
          goto LABEL_14;
        v32 = 63;
        if ( (unsigned int)(n - 3) <= 0x3F )
          v32 = n - 3;
        strncpy(g4_va_cast<char *>(va), s + 3, v32);
        *(g4_va_cast<char *>(va) + v32) = 0;
        *(uint32_t *)__errno(v34, v33) = 0;
        v35 = strtoul(g4_va_cast<const char *>(va), &endptr, 10);
        v38 = *(uint32_t *)__errno(v37, v36);
        v23 = v65;
        if ( v38 != 0 || *endptr != 0 )
        {
LABEL_14:
          v25 = memcmp(s, "uni", 3u) == 0;
          v13 = 0;
          if ( v25 )
          {
            v26 = 63;
            v66 = v23;
            if ( (unsigned int)(n - 3) <= 0x3F )
              v26 = n - 3;
            strncpy(g4_va_cast<char *>(va), s + 3, v26);
            *(g4_va_cast<char *>(va) + v26) = 0;
            *(uint32_t *)__errno(v28, v27) = 0;
            v29 = strtoul(g4_va_cast<const char *>(va), &endptr, 16);
            if ( *(uint32_t *)__errno(v31, v30) == 0 && *endptr == 0 )
            {
              *a4 = 0;
              return (*(int (**)(int, uint32_t, unsigned int, uint32_t))(*(uint32_t *)(v66 + 72) + 48))(
                       v66,
                       *(uint32_t *)(v66 + 76),
                       v29,
                       0) != 0;
            }
          }
        }
        else
        {
          *a4 = v35;
          return true;
        }
      }
    }
    else
    {
      *a4 = v19;
      return true;
    }
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_empty  (binary VA: 0x12b1070)
// Original: hb_font_get_empty
// ----------------------------------------------------------------------------
void * hb_font_get_empty()
{
  return &unk_2092DE0;
}

// ----------------------------------------------------------------------------
// Function: hb_font_create  (binary VA: 0x12b1090)
// Original: hb_font_create
// ----------------------------------------------------------------------------
uint32_t * hb_font_create(uint32_t *a1)
{
  uint32_t *empty;
  uint32_t *v2;

  empty = a1;
  if ( a1 == nullptr )
    empty = (uint32_t *)hb_face_get_empty();
  if ( *empty == -1 )
    return (uint32_t *)(hb_font_get_empty());
  v2 = (uint32_t *)(calloc(1u, 0x58u));
  if ( v2 == nullptr )
    return (uint32_t *)(hb_font_get_empty());
  *v2 = 1;
  memset(v2 + 2, 0, 0x24u);
  hb_face_make_immutable(empty);
  v2[13] = (uint32_t)(uintptr_t)(hb_face_reference(empty));
  v2[18] = (uint32_t)(uintptr_t)(hb_font_funcs_get_empty());
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hb_font_reference  (binary VA: 0x12b1140)
// Original: hb_font_reference
// ----------------------------------------------------------------------------
uint32_t * hb_font_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_destroy  (binary VA: 0x12b1160)
// Original: hb_font_destroy
// ----------------------------------------------------------------------------
void hb_font_destroy(char *ptr)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  void (*v6)(int);
  int v7;
  void (*v8)(uint32_t);

  if ( ptr != nullptr && *(uint32_t *)ptr != -1 )
  {
    v1 = *(uint32_t *)ptr - 1;
    *(uint32_t *)ptr = v1;
    if ( v1 == 0 )
    {
      v2 = *((uint32_t *)ptr + 2);
      *(uint32_t *)ptr = -1;
      if ( v2 != 0 )
      {
LABEL_5:
        v3 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v4 = *((uint32_t *)ptr + 4) + v3;
          v3 -= 12;
          v5 = *(uint32_t *)(v4 + 4);
          v6 = *(void (**)(int))(v4 + 8);
          *((uint32_t *)ptr + 2) = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = *((uint32_t *)ptr + 2);
            goto LABEL_5;
          }
        }
      }
      if ( *((char **)ptr + 4) != ptr + 20 )
        free(*((void **)ptr + 4));
      v7 = *((uint32_t *)ptr + 21);
      *((uint32_t *)ptr + 4) = 0;
      *((uint32_t *)ptr + 2) = 0;
      *((uint32_t *)ptr + 3) = 0;
      if ( (unsigned int)(v7 - 1) <= 0xFFFFFFFD && v7 != 1 )
        sub_12B3840(v7);
      v8 = *((void (**)(uint32_t))ptr + 20);
      if ( v8 != nullptr )
        v8(*((uint32_t *)ptr + 19));
      hb_font_destroy(*((void **)ptr + 12));
      hb_face_destroy(*((void **)ptr + 13));
      hb_font_funcs_destroy(*((int **)ptr + 18));
      free(ptr);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_font_set_user_data  (binary VA: 0x12b1260)
// Original: hb_font_set_user_data
// ----------------------------------------------------------------------------
int hb_font_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_user_data  (binary VA: 0x12b12b0)
// Original: hb_font_get_user_data
// ----------------------------------------------------------------------------
int hb_font_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_font_make_immutable  (binary VA: 0x12b12e0)
// Original: hb_font_make_immutable
// ----------------------------------------------------------------------------
uint32_t * hb_font_make_immutable(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[11] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_create_sub_font  (binary VA: 0x12b1300)
// Original: hb_font_create_sub_font
// ----------------------------------------------------------------------------
uint32_t * hb_font_create_sub_font(int a1)
{
  uint32_t *v1;

  if ( a1 == 0 )
    return (uint32_t *)(hb_font_get_empty());
  v1 = hb_font_create(*(uint32_t **)(a1 + 52));
  if ( *v1 != -1 )
  {
    hb_font_make_immutable((uint32_t *)a1);
    v1[12] = (uint32_t)(uintptr_t)(hb_font_reference((uint32_t *)a1));
    v1[14] = *(uint32_t *)(a1 + 56);
    v1[15] = *(uint32_t *)(a1 + 60);
    v1[16] = *(uint32_t *)(a1 + 64);
    v1[17] = *(uint32_t *)(a1 + 68);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hb_font_is_immutable  (binary VA: 0x12b1390)
// Original: hb_font_is_immutable
// ----------------------------------------------------------------------------
int hb_font_is_immutable(int a1)
{
  return *(uint32_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_parent  (binary VA: 0x12b13a0)
// Original: hb_font_get_parent
// ----------------------------------------------------------------------------
int hb_font_get_parent(int a1)
{
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_face  (binary VA: 0x12b13b0)
// Original: hb_font_get_face
// ----------------------------------------------------------------------------
int hb_font_get_face(int a1)
{
  return *(uint32_t *)(a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: hb_font_set_funcs  (binary VA: 0x12b13c0)
// Original: hb_font_set_funcs
// ----------------------------------------------------------------------------
void hb_font_set_funcs(int a1, uint32_t *a2, int a3, void (*a4)(int))
{
  uint32_t *empty;
  void (*v5)(uint32_t);

  empty = a2;
  if ( *(uint32_t *)(a1 + 44) != 0 )
  {
    if ( a4 != nullptr )
      a4(a3);
  }
  else
  {
    v5 = *(void (**)(uint32_t))(a1 + 80);
    if ( v5 != nullptr )
      v5(*(uint32_t *)(a1 + 76));
    if ( a2 == nullptr )
      empty = (uint32_t *)(hb_font_funcs_get_empty());
    hb_font_funcs_reference(empty);
    hb_font_funcs_destroy(*(int **)(a1 + 72));
    *(uint32_t *)(a1 + 72) = (uint32_t)(uintptr_t)(empty);
    *(uint32_t *)(a1 + 76) = a3;
    *(uint32_t *)(a1 + 80) = (uint32_t)(uintptr_t)(a4);
  }
}



// ============================================================================
// Address:   0x12b1460 (size: 87 bytes)
// Symbol:    hb_font_set_funcs_data
// Demangled: hb_font_set_funcs_data
// ============================================================================
int (*hb_font_set_funcs_data(uint32_t *a1, int a2, int (*a3)(int)))(uint32_t)
{
  int (*result)(uint32_t);

  result = (int (*)(uint32_t))a1[11];
  if ( result != nullptr )
  {
    if ( a3 != nullptr )
      return (int (*)(uint32_t))a3(a2);
  }
  else
  {
    result = (int (*)(uint32_t))a1[20];
    if ( result != nullptr )
      result = (int (*)(uint32_t))result(a1[19]);
    a1[19] = a2;
    a1[20] = (uint32_t)(uintptr_t)(a3);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hb_font_set_scale  (binary VA: 0x12b14c0)
// Original: hb_font_set_scale
// ----------------------------------------------------------------------------
uint32_t * hb_font_set_scale(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  if ( a1[11] == 0 )
  {
    a1[14] = a2;
    a1[15] = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_scale  (binary VA: 0x12b14e0)
// Original: hb_font_get_scale
// ----------------------------------------------------------------------------
uint32_t * hb_font_get_scale(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *result;

  result = a3;
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 56);
  if ( a3 != nullptr )
    *a3 = *(uint32_t *)(a1 + 60);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_set_ppem  (binary VA: 0x12b1510)
// Original: hb_font_set_ppem
// ----------------------------------------------------------------------------
uint32_t * hb_font_set_ppem(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  if ( a1[11] == 0 )
  {
    a1[16] = a2;
    a1[17] = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_font_get_ppem  (binary VA: 0x12b1530)
// Original: hb_font_get_ppem
// ----------------------------------------------------------------------------
uint32_t * hb_font_get_ppem(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *result;

  result = a3;
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 64);
  if ( a3 != nullptr )
    *a3 = *(uint32_t *)(a1 + 68);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_feature_from_string  (binary VA: 0x12b15a0)
// Original: hb_feature_from_string
// ----------------------------------------------------------------------------
int hb_feature_from_string(char *s, int a2, g4_int128_t *a3)
{
  size_t v3;
  char *v4;
  char v5;
  char *v6;
  int result;
  char v8;
  char v9;
  char *v10;
  char v11;
  int v12;
  __m128i v13;
  char *v14;
  __m128i v15;
  __m128i v16;
  const char *v17;
  char v18;
  size_t v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  char v28;
  char *i;
  g4_int128_t v30;
  const char *v31;
  size_t v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  uint32_t *v38;
  char v39;
  char v40;
  size_t v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  char v47;
  int v48;
  bool v49;
  unsigned int v50;
  char *v51;
  char v52;
  char v53;
  char v54;
  const char *v55;
  const char *v56;
  char v57;
  const char *v58;
  const char *v59;
  char v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef char _g4_t_v66;
  typedef const char *_g4_t_v67;
  typedef const char *_g4_t_v68;
  typedef char *_g4_t_v69;
  typedef char *_g4_t_endptr[4];
  typedef char _g4_t_dest[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v61)) > _g4_s0 ? (0u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v62)) > _g4_s1 ? (0u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v63)) > _g4_s2 ? (72u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (79u + sizeof(_g4_t_v64)) > _g4_s3 ? (79u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v65)) > _g4_s4 ? (80u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v66)) > _g4_s5 ? (84u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v67)) > _g4_s6 ? (84u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v68)) > _g4_s7 ? (88u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v69)) > _g4_s8 ? (92u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_endptr)) > _g4_s9 ? (96u + sizeof(_g4_t_endptr)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_dest)) > _g4_s10 ? (112u + sizeof(_g4_t_dest)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 0u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 79u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 96u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 112u);

  v3 = a2;
  v4 = s;
  if ( a2 < 0 )
    v3 = strlen(s);
  v69 = &s[v3];
  if ( &s[v3] > s )
  {
    while ( 1 )
    {
      v8 = *v4;
      if ( *v4 != 12 && v8 != 32 && v8 != 13 && v8 != 10 && v8 != 11 && v8 != 9 )
        break;
      if ( v69 == ++v4 )
        goto LABEL_27;
    }
  }
  if ( v69 == v4 )
    goto LABEL_27;
  if ( *v4 == 45 )
  {
    v6 = v4 + 1;
    v65 = 0;
    goto LABEL_15;
  }
  if ( v69 <= v4 )
    goto LABEL_14;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 != 12 && v5 != 32 && v5 != 13 && v5 != 10 && v5 != 11 && v5 != 9 )
      break;
    if ( v69 == ++v4 )
      goto LABEL_27;
  }
  if ( v69 == v4 )
  {
LABEL_27:
    v6 = v69;
    v65 = 1;
  }
  else
  {
LABEL_14:
    v65 = 1;
    v6 = &v4[*v4 == 43];
  }
LABEL_15:
  if ( v69 <= v6 )
    goto LABEL_16;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 != 12 && v9 != 32 && v9 != 13 && v9 != 10 && v9 != 11 && v9 != 9 )
      break;
    if ( v69 == ++v6 )
      goto LABEL_16;
  }
  if ( v69 <= v6 )
    goto LABEL_16;
  if ( v9 == 34 || v9 == 39 )
  {
    if ( v69 <= ++v6 )
      goto LABEL_16;
  }
  else
  {
    v9 = 0;
  }
  v66 = v9;
  v10 = v6;
  do
  {
    v11 = *v10;
    if ( (uint8_t)(*v10 - 65) > 0x19u && (uint8_t)(v11 - 97) > 0x19u && (uint8_t)(v11 - 48) > 9u )
      break;
    ++v10;
  }
  while ( v69 > v10 );
  v68 = v10;
  if ( v10 == v6 )
    goto LABEL_16;
  v12 = v10 - v6;
  if ( v10 - v6 > 4 )
    goto LABEL_16;
  v13 = _mm_cvtsi32_si128(hb_tag_from_string(v6, v10 - v6));
  if ( v66 != 0 )
  {
    if ( v12 != 4 || v69 == v68 || *v68 != v66 )
    {
LABEL_16:
      if ( a3 != nullptr )
      {
        *(uint32_t *)a3 = 0;
        *((uint32_t *)a3 + 1) = 0;
        *((uint32_t *)a3 + 2) = 0;
        *((uint32_t *)a3 + 3) = 0;
      }
      return 0;
    }
    ++v68;
  }
  if ( v69 > v68 )
  {
    v51 = (char *)v68;
    while ( 1 )
    {
      v52 = *v51;
      if ( *v51 != 12 && v52 != 32 && v52 != 13 && v52 != 10 && v52 != 11 && v52 != 9 )
        break;
      if ( v69 == ++v51 )
      {
        v68 = v69;
        goto LABEL_46;
      }
    }
    v68 = v51;
    if ( v69 > v51 )
    {
      while ( 1 )
      {
        v53 = *v51;
        if ( *v51 != 12 && v53 != 32 && v53 != 13 && v53 != 10 && v53 != 11 && v53 != 9 )
          break;
        if ( v69 == ++v51 )
          goto LABEL_133;
      }
      v68 = v51;
    }
  }
LABEL_46:
  if ( v69 == v68 )
  {
LABEL_133:
    v68 = v69;
g4_m128_raw(v16) = 0;
    v15 = _mm_cvtsi32_si128(0xFFFFFFFF);
    v14 = v69;
    goto LABEL_58;
  }
  if ( *v68 == 91 )
  {
    v31 = v68 + 1;
    v32 = 31;
    v61 = _mm_cvtsi128_si32(v13);
    if ( (unsigned int)(v69 - (v68 + 1)) <= 0x1F )
      v32 = v69 - v31;
    strncpy(dest, v31, v32);
    dest[v32] = 0;
    endptr[0] = dest;
    *(uint32_t *)__errno(v34, v33) = 0;
    v35 = strtol(dest, endptr, 0);
    v38 = (uint32_t *)__errno(v37, v36);
    v39 = 0;
g4_m128_raw(v16) = 0;
    v13 = _mm_cvtsi32_si128(v61);
    if ( *v38 == 0 && endptr[0] != dest )
    {
      v16 = _mm_cvtsi32_si128(v35);
      v31 += endptr[0] - dest;
      v39 = 1;
    }
    if ( v69 > v31 )
    {
      while ( 1 )
      {
        v40 = *v31;
        if ( *v31 != 12 && v40 != 32 && v40 != 13 && v40 != 10 && v40 != 11 && v40 != 9 )
          break;
        if ( v69 == ++v31 )
          goto LABEL_111;
      }
    }
    if ( v69 == v31 )
    {
LABEL_111:
      v31 = v69;
    }
    else if ( *v31 == 58 )
    {
      ++v31;
      v41 = 31;
      v62 = _mm_cvtsi128_si32(v13);
      if ( (unsigned int)(v69 - v31) <= 0x1F )
        v41 = v69 - v31;
      strncpy(dest, v31, v41);
      dest[v41] = 0;
      endptr[0] = dest;
      *(uint32_t *)__errno(v43, v42) = 0;
      v44 = strtol(dest, endptr, 0);
      v15 = _mm_cvtsi32_si128(0xFFFFFFFF);
      v13 = _mm_cvtsi32_si128(v62);
      v16 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v16));
      if ( *(uint32_t *)__errno(v46, v45) == 0 && endptr[0] != dest )
      {
        v15 = _mm_cvtsi32_si128(v44);
        v31 += endptr[0] - dest;
      }
LABEL_100:
      if ( v69 > v31 )
      {
        while ( 1 )
        {
          v47 = *v31;
          if ( *v31 != 12 && v47 != 32 && v47 != 13 && v47 != 10 && v47 != 11 && v47 != 9 )
            break;
          if ( v69 == ++v31 )
            goto LABEL_16;
        }
      }
      if ( v69 == v31 || *v31 != 93 )
        goto LABEL_16;
      v14 = (char *)(v31 + 1);
      v68 = v14;
      goto LABEL_49;
    }
    v48 = _mm_cvtsi128_si32(v16) + 1;
    v49 = v39 == 0;
    v50 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(0xFFFFFFFF));
    if ( !v49 )
      v50 = v48;
    v15 = _mm_cvtsi32_si128(v50);
    goto LABEL_100;
  }
  v14 = (char *)v68;
  v15 = _mm_cvtsi32_si128(0xFFFFFFFF);
g4_m128_raw(v16) = 0;
LABEL_49:
  if ( v69 > v14 )
  {
    v17 = v14;
    while ( 1 )
    {
      v18 = *v17;
      if ( *v17 != 12 && v18 != 32 && v18 != 13 && v18 != 10 && v18 != 11 && v18 != 9 )
        break;
      if ( v69 == ++v17 )
        goto LABEL_135;
    }
    v68 = v17;
    v14 = (char *)v17;
  }
LABEL_58:
  if ( v69 == v14 )
  {
LABEL_135:
    v64 = 0;
    v68 = v69;
  }
  else
  {
    v64 = 0;
    if ( *v14 == 61 )
    {
      v64 = 1;
      v68 = v14 + 1;
    }
  }
  v19 = 31;
  if ( (unsigned int)(v69 - v68) <= 0x1F )
    v19 = v69 - v68;
  strncpy(dest, v68, v19);
  dest[v19] = 0;
  endptr[0] = dest;
  *(uint32_t *)__errno(v21, v20) = 0;
  v22 = strtol(dest, endptr, 0);
  v25 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v13));
  v26 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v16));
  v27 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v15));
  if ( *(uint32_t *)__errno(v24, v23) == 0 && endptr[0] != dest )
  {
    v67 = &v68[endptr[0] - dest];
    v65 = v22;
    v28 = 1;
    goto LABEL_66;
  }
  v55 = v68;
  if ( v69 > v68 )
  {
    v56 = v68;
    while ( 1 )
    {
      v57 = *v56;
      if ( *v56 != 12 && v57 != 32 && v57 != 13 && v57 != 10 && v57 != 11 && v57 != 9 )
        break;
      if ( v69 == ++v56 )
      {
        v68 = v69;
        v55 = v69;
        goto LABEL_164;
      }
    }
    v68 = v56;
    if ( v69 <= v56 )
    {
      v55 = v56;
    }
    else
    {
      v55 = v56;
      if ( (uint8_t)(v57 - 97) <= 0x19u || (uint8_t)(v57 - 65) <= 0x19u )
      {
        v58 = v56;
        do
        {
          v59 = v58 + 1;
          v49 = v69 == ++v58;
          if ( v49 )
          {
            v67 = v59;
            v63 = v69 - v56;
            goto LABEL_160;
          }
          v60 = *v59;
        }
        while ( (uint8_t)(v60 - 65) <= 0x19u || (uint8_t)(v60 - 97) <= 0x19u );
        v67 = v58;
        v63 = v58 - v56;
LABEL_160:
        if ( v63 == 2 )
          goto LABEL_161;
        goto LABEL_165;
      }
    }
  }
LABEL_164:
  v67 = v55;
  v63 = 0;
LABEL_165:
  if ( memcmp(v68, "on", 2u) != 0 )
  {
    if ( v63 != 3 )
    {
      v28 = 0;
      if ( memcmp(v68, "off", 2u) != 0 )
        goto LABEL_66;
    }
    v65 = 0;
    goto LABEL_162;
  }
LABEL_161:
  v65 = 1;
LABEL_162:
  v28 = 1;
LABEL_66:
  if ( v64 != 0 && v28 == 0 )
    goto LABEL_16;
  i = (char *)v67;
  if ( v69 > v67 )
  {
    for ( i = (char *)v67; v69 != i; ++i )
    {
      v54 = *i;
      if ( *i != 12 && v54 != 32 && v54 != 13 && v54 != 10 && v54 != 11 && v54 != 9 )
        break;
    }
  }
  if ( v69 != i )
    goto LABEL_16;
  result = 1;
  if ( a3 != nullptr )
  {
    *(uint64_t *)&v30 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(v65)), 0);
    *((uint64_t *)&v30 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v26, v27), 0);
    *a3 = v30;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_feature_to_string  (binary VA: 0x12b1e80)
// Original: hb_feature_to_string
// ----------------------------------------------------------------------------
void hb_feature_to_string(uint32_t *a1, void *dest, int a3)
{
  int v3;
  int v4;
  unsigned int i;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  bool v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  size_t v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef char _g4_t_src[140];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_src)) > _g4_s4 ? (16u + sizeof(_g4_t_src)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);

  if ( a3 != 0 )
  {
    if ( a1[1] != 0 )
    {
      v3 = 4;
      v4 = 0;
    }
    else
    {
      src[0] = 45;
      v3 = 5;
      v4 = 1;
    }
    v21 = v3;
    hb_tag_to_string(*a1, &src[v4]);
    for ( i = v21; src[i - 1] == 32; --i )
    {
      if ( i == 1 )
      {
        v6 = a1[2];
        i = 0;
        if ( v6 == 0 )
          goto LABEL_28;
LABEL_7:
        src[i] = 91;
        v22 = i + 1;
        v7 = snprintf(&src[i + 1], 127 - i, "%u", v6);
        v8 = 0;
        if ( v7 >= 0 )
          v8 = v7;
        v9 = a1[3];
        v10 = v22 + v8;
        v11 = a1[2];
        goto LABEL_10;
      }
    }
    v6 = a1[2];
    if ( v6 != 0 )
      goto LABEL_7;
LABEL_28:
    v9 = a1[3];
    if ( v9 != -1 )
    {
      src[i] = 91;
      v11 = 0;
      v10 = i + 1;
LABEL_10:
      v12 = v9 == v11 + 1;
      v13 = v10;
      if ( !v12 )
      {
        v13 = v10 + 1;
        src[v10] = 58;
        if ( v9 != -1 )
        {
          v23 = v10 + 1;
          v14 = snprintf(&src[v13], 127 - v10, "%u", v9);
          v15 = 0;
          if ( v14 >= 0 )
            v15 = v14;
          v13 = v15 + v23;
        }
      }
      src[v13] = 93;
      i = v13 + 1;
    }
    v16 = a1[1];
    if ( v16 > 1 )
    {
      src[i] = 61;
      v17 = i + 1;
      v18 = snprintf(&src[i + 1], 127 - i, "%u", v16);
      v19 = 0;
      if ( v18 >= 0 )
        v19 = v18;
      i = v17 + v19;
    }
    if ( i > 0x7F )
    {
      v24 = i;
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape.cc",
        273,
        "void hb_feature_to_string(hb_feature_t*, char*, unsigned int)",
        "len < ARRAY_LENGTH (s)");
      i = v24;
    }
    v20 = a3 - 1;
    if ( i <= a3 - 1 )
      v20 = i;
    memcpy(dest, src, v20);
    *((uint8_t *)dest + v20) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hb_shape_list_shapers  (binary VA: 0x12b2090)
// Original: hb_shape_list_shapers
// ----------------------------------------------------------------------------
uint32_t * hb_shape_list_shapers()
{
  uint32_t *v0;
  int v2;
  int v3;
  void *nmemb;

  v0 = (uint32_t *)dword_2116BA0;
  if ( dword_2116BA0 == 0 )
  {
    v0 = (uint32_t *)(calloc(2u, 4u));
    if ( v0 != nullptr )
    {
      v2 = sub_12B2C00();
      v3 = dword_2116BA0;
      *v0 = v2;
      v0[1] = 0;
      if ( v3 != 0 )
      {
        nmemb = v0;
        v0 = (uint32_t *)v3;
        free(nmemb);
      }
      else
      {
        dword_2116BA0 = (int)(uintptr_t)(v0);
      }
    }
    else
    {
      return (uint32_t *)(&unk_2116BA4);
    }
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: hb_shape_full  (binary VA: 0x12b2120)
// Original: hb_shape_full
// ----------------------------------------------------------------------------
int hb_shape_full(int a1, int a2, void *src, int a4, int a5)
{
  int result;
  void *v6;
  void *v7;
  void *cached;
  void *v9;

  result = 1;
  if ( *(uint32_t *)(a2 + 88) != 0 )
  {
    if ( *(uint32_t *)(a2 + 76) != 1 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape.cc",
        356,
        "hb_bool_t hb_shape_full(hb_font_t*, hb_buffer_t*, const hb_feature_t*, unsigned int, char const* const*)",
        "buffer->content_type == HB_BUFFER_CONTENT_TYPE_UNICODE");
    cached = (void *)hb_shape_plan_create_cached(*(uint32_t *)(a1 + 52), a2 + 48, src, a4, a5);
    v6 = (void *)hb_shape_plan_execute(cached, a1, a2, src, a4);
    v7 = cached;
    v9 = v6;
    hb_shape_plan_destroy(v7);
    result = (int)(uintptr_t)(v9);
    if ( v9 != nullptr )
      *(uint32_t *)(a2 + 76) = 2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_shape  (binary VA: 0x12b2210)
// Original: hb_shape
// ----------------------------------------------------------------------------
int hb_shape(int a1, int a2, void *a3, int a4)
{
  return hb_shape_full(a1, a2, a3, a4, 0);
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_get_empty  (binary VA: 0x12b2260)
// Original: hb_shape_plan_get_empty
// ----------------------------------------------------------------------------
void * hb_shape_plan_get_empty()
{
  return &unk_1CED460;
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_create  (binary VA: 0x12b2280)
// Original: hb_shape_plan_create
// ----------------------------------------------------------------------------
uint32_t * hb_shape_plan_create(uint32_t *empty, uint32_t *a2, void *src, int a4, const char **a5)
{
  uint32_t *v5;
  int v6;
  const char *v7;
  int v8;
  int v9;
  unsigned int v10;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  void *ptr;

  if ( empty == nullptr )
    empty = (uint32_t *)hb_face_get_empty();
  if ( a2 == nullptr || *empty == -1 )
    return (uint32_t *)hb_shape_plan_get_empty();
  if ( a4 != 0 )
  {
    ptr = malloc(16 * a4);
    if ( ptr == nullptr )
      return (uint32_t *)hb_shape_plan_get_empty();
  }
  else
  {
    ptr = nullptr;
  }
  v5 = (uint32_t *)(calloc(1u, 0x5Cu));
  if ( v5 != nullptr )
  {
    *v5 = 1;
    memset(v5 + 2, 0, 0x24u);
    if ( *a2 == 0 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc",
        121,
        "hb_shape_plan_t* hb_shape_plan_create(hb_face_t*, const hb_segment_properties_t*, const hb_feature_t*, unsigned "
        "int, char const* const*)",
        "props->direction != HB_DIRECTION_INVALID");
    hb_face_make_immutable(empty);
    v5[11] = a5 == nullptr;
    v5[12] = (uint32_t)(uintptr_t)(empty);
    v5[13] = *a2;
    v5[14] = a2[1];
    v5[15] = a2[2];
    v5[16] = a2[3];
    v5[17] = a2[4];
    v5[21] = a4;
    v5[20] = (uint32_t)(uintptr_t)(ptr);
    if ( a4 != 0 )
    {
      memcpy(ptr, src, 16 * a4);
      v6 = sub_12B2C00();
      if ( a5 != nullptr )
        goto LABEL_12;
    }
    else
    {
      v6 = sub_12B2C00();
      if ( a5 != nullptr )
      {
LABEL_12:
        v7 = *a5;
        if ( *a5 == nullptr )
          return v5;
        while ( 1 )
        {
          if ( strcmp(v7, "ot") == 0 )
          {
            v8 = v5[12];
            while ( 1 )
            {
              v9 = *(uint32_t *)(v8 + 72);
              if ( v9 != 0 )
              {
LABEL_18:
                v10 = v9 - 1;
                goto LABEL_19;
              }
              v16 = sub_12B3810(v8);
              v10 = v16 - 1;
              if ( v16 == 0 )
              {
                v10 = 0xFFFFFFFE;
                v16 = -1;
              }
              v9 = *(uint32_t *)(v8 + 72);
              if ( v9 == 0 )
                break;
              if ( v16 == 1 || v10 > 0xFFFFFFFD )
                goto LABEL_18;
              sub_12B3820((void *)v16);
            }
            *(uint32_t *)(v8 + 72) = v16;
LABEL_19:
            if ( v10 <= 0xFFFFFFFD )
              break;
          }
          v7 = *++a5;
          if ( *a5 == nullptr )
            return v5;
        }
LABEL_20:
        v5[22] = sub_12B3850(v5, src, a4);
        v5[18] = (uint32_t)(uintptr_t)(sub_12B43A0);
        v5[19] = (uint32_t)(uintptr_t)("ot");
        return v5;
      }
    }
    if ( *(int (**)(int, int, int, int, int))(v6 + 16) != (int (*)(int, int, int, int, int))(uintptr_t)(sub_12B43A0) )
      return v5;
    v12 = v5[12];
    while ( 1 )
    {
      v13 = *(uint32_t *)(v12 + 72);
      if ( v13 != 0 )
      {
LABEL_25:
        v14 = v13 - 1;
        goto LABEL_26;
      }
      v15 = sub_12B3810(v12);
      v14 = v15 - 1;
      if ( v15 == 0 )
      {
        v14 = 0xFFFFFFFE;
        v15 = -1;
      }
      v13 = *(uint32_t *)(v12 + 72);
      if ( v13 == 0 )
        break;
      if ( v15 == 1 || v14 > 0xFFFFFFFD )
        goto LABEL_25;
      sub_12B3820((void *)v15);
    }
    *(uint32_t *)(v12 + 72) = v15;
LABEL_26:
    if ( v14 > 0xFFFFFFFD )
      return v5;
    goto LABEL_20;
  }
  free(ptr);
  return (uint32_t *)hb_shape_plan_get_empty();
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_reference  (binary VA: 0x12b25a0)
// Original: hb_shape_plan_reference
// ----------------------------------------------------------------------------
uint32_t * hb_shape_plan_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_destroy  (binary VA: 0x12b25c0)
// Original: hb_shape_plan_destroy
// ----------------------------------------------------------------------------
void hb_shape_plan_destroy(char *ptr)
{
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  void (*v6)(int);
  char *v7;

  if ( ptr != nullptr && *(uint32_t *)ptr != -1 )
  {
    v1 = *(uint32_t *)ptr - 1;
    *(uint32_t *)ptr = v1;
    if ( v1 == 0 )
    {
      v2 = *((uint32_t *)ptr + 2);
      *(uint32_t *)ptr = -1;
      if ( v2 != 0 )
      {
LABEL_6:
        v3 = *((char **)ptr + 4);
        v4 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v5 = *(uint32_t *)&v3[v4 + 4];
          v6 = *(void (**)(int))&v3[v4 + 8];
          v4 -= 12;
          *((uint32_t *)ptr + 2) = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = *((uint32_t *)ptr + 2);
            goto LABEL_6;
          }
        }
        if ( v3 != ptr + 20 )
          free(v3);
      }
      else if ( *((char **)ptr + 4) != ptr + 20 )
      {
        free(*((void **)ptr + 4));
      }
      v7 = *((char **)ptr + 22);
      *((uint32_t *)ptr + 4) = 0;
      *((uint32_t *)ptr + 2) = 0;
      *((uint32_t *)ptr + 3) = 0;
      if ( (unsigned int)(uintptr_t)(v7 - 1) <= 0xFFFFFFFD && v7 != (char *)(uintptr_t)(uint8_t *)&dword_0 + 1 )
        sub_12B4260(v7);
      free(*((void **)ptr + 20));
      free(ptr);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_set_user_data  (binary VA: 0x12b26c0)
// Original: hb_shape_plan_set_user_data
// ----------------------------------------------------------------------------
int hb_shape_plan_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_get_user_data  (binary VA: 0x12b2710)
// Original: hb_shape_plan_get_user_data
// ----------------------------------------------------------------------------
int hb_shape_plan_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_execute  (binary VA: 0x12b2740)
// Original: hb_shape_plan_execute
// ----------------------------------------------------------------------------
bool hb_shape_plan_execute(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  bool result;
  int v6;
  unsigned int v7;
  unsigned int v8;

  result = false;
  if ( *(uint32_t *)a1 != -1 && *a2 != -1 && *a3 != -1 )
  {
    if ( *(uint32_t *)(a1 + 48) != a2[13] )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc",
        279,
        "hb_bool_t hb_shape_plan_execute(hb_shape_plan_t*, hb_font_t*, hb_buffer_t*, const hb_feature_t*, unsigned int)",
        "shape_plan->face_unsafe == font->face");
    if ( hb_segment_properties_equal(a1 + 52, a3 + 12) != 0 )
    {
      result = false;
      if ( *(int (**)(int, int, int, int, int))(a1 + 72) != (int (*)(int, int, int, int, int))(uintptr_t)(sub_12B43A0) )
        return result;
    }
    else
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-shape-plan.cc",
        280,
        "hb_bool_t hb_shape_plan_execute(hb_shape_plan_t*, hb_font_t*, hb_buffer_t*, const hb_feature_t*, unsigned int)",
        "hb_segment_properties_equal (&shape_plan->props, &buffer->props)");
      result = false;
      if ( *(int (**)(int, int, int, int, int))(a1 + 72) != (int (*)(int, int, int, int, int))(uintptr_t)(sub_12B43A0) )
        return result;
    }
    if ( *(uint32_t *)(a1 + 88) != 0 )
    {
      while ( 1 )
      {
        v6 = a2[21];
        if ( v6 != 0 )
          break;
        v6 = sub_12B3830(a2);
        v8 = v6 - 1;
        if ( v6 == 0 )
        {
          v8 = 0xFFFFFFFE;
          v6 = -1;
        }
        if ( a2[21] == 0 )
        {
          a2[21] = v6;
          break;
        }
        if ( v6 != 1 && v8 <= 0xFFFFFFFD )
          sub_12B3840(v6);
      }
      v7 = v6 - 1;
      result = false;
      if ( v7 <= 0xFFFFFFFD )
        return sub_12B43A0(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), a4, a5) != 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_create_cached  (binary VA: 0x12b28b0)
// Original: hb_shape_plan_create_cached
// ----------------------------------------------------------------------------
char * hb_shape_plan_create_cached(uint32_t *a1, uint32_t *a2, char *src, int a4, const char **a5)
{
  const char **v5;
  const char *v6;
  int v7;
  unsigned int v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  char *v14;
  int v15;
  char *v16;
  uint32_t *v17;
  void *v18;
  int v20;
  typedef const char **_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t _g4_t_v26[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  memset(v26, 0, 0x24u);
  v26[0] = *a2;
  v26[1] = a2[1];
  v26[2] = a2[2];
  v26[3] = a2[3];
  v26[4] = a2[4];
  v26[5] = (uint32_t)(uintptr_t)(a5);
  v26[6] = (uint32_t)(uintptr_t)(src);
  v26[7] = a4;
  if ( a5 != nullptr )
  {
    v5 = a5;
    v6 = *a5;
    if ( *a5 != nullptr )
    {
      do
      {
        while ( 1 )
        {
          if ( strcmp(v6, "ot") == 0 )
          {
            while ( 1 )
            {
              v7 = a1[18];
              if ( v7 != 0 )
              {
LABEL_7:
                v8 = v7 - 1;
                goto LABEL_8;
              }
              v21 = v5;
              v20 = sub_12B3810(a1);
              v8 = v20 - 1;
              v5 = v21;
              if ( v20 == 0 )
              {
                v8 = 0xFFFFFFFE;
                v20 = -1;
              }
              v7 = a1[18];
              if ( v7 == 0 )
                break;
              if ( v20 == 1 || v8 > 0xFFFFFFFD )
                goto LABEL_7;
              sub_12B3820((void *)v20);
              v5 = v21;
            }
            a1[18] = v20;
LABEL_8:
            if ( v8 <= 0xFFFFFFFD )
              break;
          }
          v6 = *++v5;
          if ( *v5 == nullptr )
            goto LABEL_10;
        }
        v6 = *++v5;
        v26[8] = (uint32_t)(uintptr_t)(sub_12B43A0);
      }
      while ( v6 != nullptr );
LABEL_10:
      if ( v26[5] != 0 )
        goto LABEL_11;
      return (char *)hb_shape_plan_get_empty();
    }
  }
  while ( 1 )
  {
LABEL_11:
    v23 = a1[19];
    if ( v23 != 0 )
    {
      v9 = (uint32_t *)a1[19];
      do
      {
        while ( 1 )
        {
          v25 = (uint32_t *)*v9;
          if ( hb_segment_properties_equal((uint32_t *)(*v9 + 52), v26) )
          {
            v10 = (uint32_t *)v25[20];
            v24 = v25[21];
            v11 = (uint32_t *)v26[6];
            if ( v24 != v26[7] )
              goto LABEL_13;
            if ( v24 != 0 )
              break;
LABEL_39:
            if ( v25[11] != 0 && v26[5] == 0 || v25[18] == v26[8] )
              return (char *)hb_shape_plan_reference((uint32_t *)*v9);
          }
LABEL_13:
          v9 = (uint32_t *)v9[1];
          if ( v9 == nullptr )
            goto LABEL_27;
        }
        if ( *(uint32_t *)v26[6] != *v10 || *(uint32_t *)(v26[6] + 4) != v10[1] || *(uint32_t *)(v26[6] + 8) != v10[2] )
          goto LABEL_13;
        v12 = (uint32_t *)(v26[6] + 16);
        v13 = v10 + 4;
        v22 = 0;
        do
        {
          if ( v11[3] != v10[3] )
            break;
          if ( ++v22 == v24 )
            goto LABEL_39;
          v11 = v12;
          v10 = v13;
          if ( *v12 != *v13 )
            break;
          if ( v12[1] != v13[1] )
            break;
          v12 += 4;
          v13 += 4;
        }
        while ( v11[2] == v10[2] );
        v9 = (uint32_t *)v9[1];
      }
      while ( v9 != nullptr );
    }
LABEL_27:
    v14 = (char *)hb_shape_plan_create(a1, a2, src, a4, a5);
    if ( a4 != 0 )
    {
      if ( *((uint32_t *)src + 2) != 0 || *((uint32_t *)src + 3) != -1 )
        return v14;
      v15 = a4;
      v16 = src + 28;
      while ( --v15 != 0 )
      {
        if ( *((uint32_t *)v16 - 1) == 0 )
        {
          v16 += 16;
          if ( *((uint32_t *)v16 - 4) == -1 )
            continue;
        }
        return v14;
      }
    }
    v17 = (uint32_t *)(calloc(1u, 8u));
    v18 = v17;
    if ( v17 == nullptr )
      return v14;
    *v17 = (uint32_t)(uintptr_t)(v14);
    v17[1] = v23;
    if ( a1[19] == v23 )
      break;
    hb_shape_plan_destroy(v14);
    free(v18);
  }
  a1[19] = (uint32_t)(uintptr_t)(v17);
  return (char *)hb_shape_plan_reference(v14);
}

// ----------------------------------------------------------------------------
// Function: hb_shape_plan_get_shaper  (binary VA: 0x12b2bf0)
// Original: hb_shape_plan_get_shaper
// ----------------------------------------------------------------------------
int hb_shape_plan_get_shaper(int a1)
{
  return *(uint32_t *)(a1 + 76);
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_get_empty  (binary VA: 0x12b2e40)
// Original: hb_unicode_funcs_get_empty
// ----------------------------------------------------------------------------
void * hb_unicode_funcs_get_empty()
{
  return &unk_2036B40;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_get_default  (binary VA: 0x12b2e60)
// Original: hb_unicode_funcs_get_default
// ----------------------------------------------------------------------------
void * hb_unicode_funcs_get_default()
{
  return hb_unicode_funcs_get_empty();
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_reference  (binary VA: 0x12b2e80)
// Original: hb_unicode_funcs_reference
// ----------------------------------------------------------------------------
uint32_t * hb_unicode_funcs_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_destroy  (binary VA: 0x12b2ea0)
// Original: hb_unicode_funcs_destroy
// ----------------------------------------------------------------------------
void hb_unicode_funcs_destroy(char *a1)
{
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  void (*v6)(int);
  char *ptr;
  void (*v8)(uint32_t);
  void (*v9)(uint32_t);
  void (*v10)(uint32_t);
  void (*v11)(uint32_t);
  void (*v12)(uint32_t);
  void (*v13)(uint32_t);
  void (*v14)(uint32_t);
  void (*v15)(uint32_t);

  if ( a1 != nullptr && *(uint32_t *)a1 != -1 )
  {
    v1 = *(uint32_t *)a1 - 1;
    *(uint32_t *)a1 = v1;
    if ( v1 == 0 )
    {
      v2 = *((uint32_t *)a1 + 2);
      *(uint32_t *)a1 = -1;
      if ( v2 != 0 )
      {
LABEL_6:
        v3 = *((char **)a1 + 4);
        v4 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v5 = *(uint32_t *)&v3[v4 + 4];
          v6 = *(void (**)(int))&v3[v4 + 8];
          v4 -= 12;
          *((uint32_t *)a1 + 2) = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = *((uint32_t *)a1 + 2);
            goto LABEL_6;
          }
        }
        if ( v3 != a1 + 20 )
          free(v3);
      }
      else
      {
        ptr = *((char **)a1 + 4);
        if ( ptr != a1 + 20 )
          free(ptr);
      }
      v8 = *((void (**)(uint32_t))a1 + 29);
      *((uint32_t *)a1 + 4) = 0;
      *((uint32_t *)a1 + 2) = 0;
      *((uint32_t *)a1 + 3) = 0;
      if ( v8 != nullptr )
        v8(*((uint32_t *)a1 + 21));
      v9 = *((void (**)(uint32_t))a1 + 30);
      if ( v9 != nullptr )
        v9(*((uint32_t *)a1 + 22));
      v10 = *((void (**)(uint32_t))a1 + 31);
      if ( v10 != nullptr )
        v10(*((uint32_t *)a1 + 23));
      v11 = *((void (**)(uint32_t))a1 + 32);
      if ( v11 != nullptr )
        v11(*((uint32_t *)a1 + 24));
      v12 = *((void (**)(uint32_t))a1 + 33);
      if ( v12 != nullptr )
        v12(*((uint32_t *)a1 + 25));
      v13 = *((void (**)(uint32_t))a1 + 34);
      if ( v13 != nullptr )
        v13(*((uint32_t *)a1 + 26));
      v14 = *((void (**)(uint32_t))a1 + 35);
      if ( v14 != nullptr )
        v14(*((uint32_t *)a1 + 27));
      v15 = *((void (**)(uint32_t))a1 + 36);
      if ( v15 != nullptr )
        v15(*((uint32_t *)a1 + 28));
      hb_unicode_funcs_destroy(*((void **)a1 + 11));
      free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_user_data  (binary VA: 0x12b3010)
// Original: hb_unicode_funcs_set_user_data
// ----------------------------------------------------------------------------
int hb_unicode_funcs_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_get_user_data  (binary VA: 0x12b3060)
// Original: hb_unicode_funcs_get_user_data
// ----------------------------------------------------------------------------
int hb_unicode_funcs_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_make_immutable  (binary VA: 0x12b3090)
// Original: hb_unicode_funcs_make_immutable
// ----------------------------------------------------------------------------
int hb_unicode_funcs_make_immutable(int a1)
{
  int result;

  result = a1;
  if ( *(uint32_t *)a1 != -1 )
    *(uint8_t *)(a1 + 48) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_create  (binary VA: 0x12b30a0)
// Original: hb_unicode_funcs_create
// ----------------------------------------------------------------------------
uint32_t * hb_unicode_funcs_create(uint32_t *a1)
{
  uint32_t *empty;
  uint32_t *v2;
  uint32_t *v3;

  empty = a1;
  v2 = (uint32_t *)(calloc(1u, 0x94u));
  v3 = v2;
  if ( v2 == nullptr )
    return (uint32_t *)(hb_unicode_funcs_get_empty());
  *v2 = 1;
  memset(v2 + 2, 0, 0x24u);
  if ( a1 == nullptr )
    empty = (uint32_t *)(hb_unicode_funcs_get_empty());
  hb_unicode_funcs_make_immutable((int)(uintptr_t)(empty));
  v3[11] = (uint32_t)(uintptr_t)(hb_unicode_funcs_reference(empty));
  v3[13] = empty[13];
  v3[14] = empty[14];
  v3[15] = empty[15];
  v3[16] = empty[16];
  v3[17] = empty[17];
  v3[18] = empty[18];
  v3[19] = empty[19];
  v3[20] = empty[20];
  v3[21] = empty[21];
  v3[22] = empty[22];
  v3[23] = empty[23];
  v3[24] = empty[24];
  v3[25] = empty[25];
  v3[26] = empty[26];
  v3[27] = empty[27];
  v3[28] = empty[28];
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_is_immutable  (binary VA: 0x12b31b0)
// Original: hb_unicode_funcs_is_immutable
// ----------------------------------------------------------------------------
int hb_unicode_funcs_is_immutable(int a1)
{
  return *(uint8_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_get_parent  (binary VA: 0x12b31c0)
// Original: hb_unicode_funcs_get_parent
// ----------------------------------------------------------------------------
void * hb_unicode_funcs_get_parent(int a1)
{
  void *result;

  result = *(void **)(a1 + 44);
  if ( result == nullptr )
    return hb_unicode_funcs_get_empty();
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_combining_class_func  (binary VA: 0x12b3200)
// Original: hb_unicode_funcs_set_combining_class_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_combining_class_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 116);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 84));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 52) = a2;
      *(uint32_t *)(a1 + 84) = a3;
      *(uint32_t *)(a1 + 116) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 52) = *(uint32_t *)(v5 + 52);
      *(uint32_t *)(a1 + 84) = *(uint32_t *)(v5 + 84);
      *(uint32_t *)(a1 + 116) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_eastasian_width_func  (binary VA: 0x12b3280)
// Original: hb_unicode_funcs_set_eastasian_width_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_eastasian_width_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 120);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 88));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 56) = a2;
      *(uint32_t *)(a1 + 88) = a3;
      *(uint32_t *)(a1 + 120) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 56) = *(uint32_t *)(v5 + 56);
      *(uint32_t *)(a1 + 88) = *(uint32_t *)(v5 + 88);
      *(uint32_t *)(a1 + 120) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_general_category_func  (binary VA: 0x12b3300)
// Original: hb_unicode_funcs_set_general_category_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_general_category_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 124);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 92));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 60) = a2;
      *(uint32_t *)(a1 + 92) = a3;
      *(uint32_t *)(a1 + 124) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 60) = *(uint32_t *)(v5 + 60);
      *(uint32_t *)(a1 + 92) = *(uint32_t *)(v5 + 92);
      *(uint32_t *)(a1 + 124) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_mirroring_func  (binary VA: 0x12b3380)
// Original: hb_unicode_funcs_set_mirroring_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_mirroring_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 128);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 96));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 64) = a2;
      *(uint32_t *)(a1 + 96) = a3;
      *(uint32_t *)(a1 + 128) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 64) = *(uint32_t *)(v5 + 64);
      *(uint32_t *)(a1 + 96) = *(uint32_t *)(v5 + 96);
      *(uint32_t *)(a1 + 128) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_script_func  (binary VA: 0x12b3400)
// Original: hb_unicode_funcs_set_script_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_script_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 132);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 100));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 68) = a2;
      *(uint32_t *)(a1 + 100) = a3;
      *(uint32_t *)(a1 + 132) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 68) = *(uint32_t *)(v5 + 68);
      *(uint32_t *)(a1 + 100) = *(uint32_t *)(v5 + 100);
      *(uint32_t *)(a1 + 132) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_compose_func  (binary VA: 0x12b3480)
// Original: hb_unicode_funcs_set_compose_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_compose_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 136);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 104));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 72) = a2;
      *(uint32_t *)(a1 + 104) = a3;
      *(uint32_t *)(a1 + 136) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 72) = *(uint32_t *)(v5 + 72);
      *(uint32_t *)(a1 + 104) = *(uint32_t *)(v5 + 104);
      *(uint32_t *)(a1 + 136) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_decompose_func  (binary VA: 0x12b3500)
// Original: hb_unicode_funcs_set_decompose_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_decompose_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 140);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 108));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 76) = a2;
      *(uint32_t *)(a1 + 108) = a3;
      *(uint32_t *)(a1 + 140) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 76) = *(uint32_t *)(v5 + 76);
      *(uint32_t *)(a1 + 108) = *(uint32_t *)(v5 + 108);
      *(uint32_t *)(a1 + 140) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_funcs_set_decompose_compatibility_func  (binary VA: 0x12b3580)
// Original: hb_unicode_funcs_set_decompose_compatibility_func
// ----------------------------------------------------------------------------
void hb_unicode_funcs_set_decompose_compatibility_func(int a1, int a2, int a3, int a4)
{
  void (*v4)(uint32_t);
  int v5;

  if ( *(uint8_t *)(a1 + 48) == 0 )
  {
    v4 = *(void (**)(uint32_t))(a1 + 144);
    if ( v4 != nullptr )
      v4(*(uint32_t *)(a1 + 112));
    if ( a2 != 0 )
    {
      *(uint32_t *)(a1 + 80) = a2;
      *(uint32_t *)(a1 + 112) = a3;
      *(uint32_t *)(a1 + 144) = a4;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 44);
      *(uint32_t *)(a1 + 80) = *(uint32_t *)(v5 + 80);
      *(uint32_t *)(a1 + 112) = *(uint32_t *)(v5 + 112);
      *(uint32_t *)(a1 + 144) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_combining_class  (binary VA: 0x12b3600)
// Original: hb_unicode_combining_class
// ----------------------------------------------------------------------------
int hb_unicode_combining_class(int a1, int a2)
{
  return (*(int (**)(int, int, uint32_t))(a1 + 52))(a1, a2, *(uint32_t *)(a1 + 84));
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_eastasian_width  (binary VA: 0x12b3630)
// Original: hb_unicode_eastasian_width
// ----------------------------------------------------------------------------
int hb_unicode_eastasian_width(int a1, int a2)
{
  return (*(int (**)(int, int, uint32_t))(a1 + 56))(a1, a2, *(uint32_t *)(a1 + 88));
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_general_category  (binary VA: 0x12b3660)
// Original: hb_unicode_general_category
// ----------------------------------------------------------------------------
int hb_unicode_general_category(int a1, int a2)
{
  return (*(int (**)(int, int, uint32_t))(a1 + 60))(a1, a2, *(uint32_t *)(a1 + 92));
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_mirroring  (binary VA: 0x12b3690)
// Original: hb_unicode_mirroring
// ----------------------------------------------------------------------------
int hb_unicode_mirroring(int a1, int a2)
{
  return (*(int (**)(int, int, uint32_t))(a1 + 64))(a1, a2, *(uint32_t *)(a1 + 96));
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_script  (binary VA: 0x12b36c0)
// Original: hb_unicode_script
// ----------------------------------------------------------------------------
int hb_unicode_script(int a1, int a2)
{
  return (*(int (**)(int, int, uint32_t))(a1 + 68))(a1, a2, *(uint32_t *)(a1 + 100));
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_compose  (binary VA: 0x12b36f0)
// Original: hb_unicode_compose
// ----------------------------------------------------------------------------
int hb_unicode_compose(int a1, int a2, int a3, uint32_t *a4)
{
  *a4 = 0;
  if ( a3 != 0 && a2 != 0 )
    return (*(int (**)(int, int, int, uint32_t *, uint32_t))(a1 + 72))(a1, a2, a3, a4, *(uint32_t *)(a1 + 104));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_decompose  (binary VA: 0x12b3760)
// Original: hb_unicode_decompose
// ----------------------------------------------------------------------------
int hb_unicode_decompose(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  *a3 = a2;
  *a4 = 0;
  return (*(int (**)(int, int, uint32_t *, uint32_t *, uint32_t))(a1 + 76))(a1, a2, a3, a4, *(uint32_t *)(a1 + 108));
}

// ----------------------------------------------------------------------------
// Function: hb_unicode_decompose_compatibility  (binary VA: 0x12b37b0)
// Original: hb_unicode_decompose_compatibility
// ----------------------------------------------------------------------------
char hb_unicode_decompose_compatibility(int a1, int a2, uint32_t *a3)
{
  int v3;

  v3 = (*(int (**)(int, int, uint32_t *, uint32_t))(a1 + 80))(a1, a2, a3, *(uint32_t *)(a1 + 112));
  if ( v3 == 1 && a2 == *a3 )
  {
    *a3 = 0;
    LOBYTE(v3) = 0;
  }
  else
  {
    a3[v3] = 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_shape_plan_collect_lookups  (binary VA: 0x12b5a60)
// Original: hb_ot_shape_plan_collect_lookups
// ----------------------------------------------------------------------------
int hb_ot_shape_plan_collect_lookups(int a1, int a2, int a3)
{
  int result;
  int v4;

  result = a2;
  if ( a2 == 1196445523 )
  {
    v4 = 1;
    return sub_12E0A10(*(uint32_t *)(a1 + 88) + 24, v4, a3);
  }
  if ( a2 == 1196643650 )
  {
    v4 = 0;
    return sub_12E0A10(*(uint32_t *)(a1 + 88) + 24, v4, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_shape_glyphs_closure  (binary VA: 0x12b5ab0)
// Original: hb_ot_shape_glyphs_closure
// ----------------------------------------------------------------------------
void hb_ot_shape_glyphs_closure(int a1, uint32_t *a2, char *src, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int j;
  int v11;
  typedef int _g4_t_i;
  typedef char *_g4_t_cached;
  typedef int _g4_t_horizontal_direction;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef const char *_g4_t_v19[262];
  typedef uint32_t _g4_t_v20[2048];
  typedef uint32_t _g4_t_v21[12];
  typedef uint8_t _g4_t_s[8204];
  enum : size_t {
    _g4_s0 = 17632u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_cached)) > _g4_s1 ? (32u + sizeof(_g4_t_cached)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_horizontal_direction)) > _g4_s2 ? (36u + sizeof(_g4_t_horizontal_direction)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v17)) > _g4_s5 ? (52u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v18)) > _g4_s6 ? (56u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (1112u + sizeof(_g4_t_v20)) > _g4_s8 ? (1112u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (9304u + sizeof(_g4_t_v21)) > _g4_s9 ? (9304u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (9352u + sizeof(_g4_t_s)) > _g4_s10 ? (9352u + sizeof(_g4_t_s)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_cached &cached = *reinterpret_cast<_g4_t_cached *>(_g4_sf + 32u);
  _g4_t_horizontal_direction &horizontal_direction = *reinterpret_cast<_g4_t_horizontal_direction *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 1112u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 9304u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 9352u);

  v5 = a5;
  memset(&v19[8], 0, 0x3ACu);
  v19[0] = "ot";
  v19[1] = nullptr;
  cached = hb_shape_plan_create_cached(*(uint32_t **)(a1 + 52), a2 + 12, src, a4, v19);
  horizontal_direction = hb_script_get_horizontal_direction(a2[13]);
  v15 = a2[22];
  v6 = (int *)a2[25];
  if ( v15 != 0 )
  {
    for ( i = 0; i != v15; ++i )
    {
      v7 = *(uint32_t *)(a1 + 72);
      v17 = *v6;
      v18[0] = 0;
      v16 = a2[11];
      if ( (*(int (**)(int, uint32_t, int, uint32_t, uint32_t *, uint32_t))(v7 + 48))(
             a1,
             *(uint32_t *)(a1 + 76),
             v17,
             0,
             v18,
             *(uint32_t *)(v7 + 92)) != 0
        && *(uint8_t *)(a5 + 44) == 0
        && v18[0] <= 0xFFFFu )
      {
        *(uint32_t *)(a5 + 4 * (v18[0] >> 5) + 48) |= 1 << SLOBYTE(v18[0]);
      }
      if ( horizontal_direction == 5 )
      {
        v8 = (*(int (**)(int, int, uint32_t))(v16 + 64))(v16, v17, *(uint32_t *)(v16 + 96));
        if ( v17 != v8 )
        {
          v9 = *(uint32_t *)(a1 + 72);
          v18[0] = 0;
          if ( (*(int (**)(int, uint32_t, int, uint32_t, uint32_t *, uint32_t))(v9 + 48))(
                 a1,
                 *(uint32_t *)(a1 + 76),
                 v8,
                 0,
                 v18,
                 *(uint32_t *)(v9 + 92)) != 0
            && *(uint8_t *)(a5 + 44) == 0
            && v18[0] <= 0xFFFFu )
          {
            *(uint32_t *)(a5 + 4 * (v18[0] >> 5) + 48) |= 1 << SLOBYTE(v18[0]);
          }
        }
      }
      v6 += 5;
    }
    v5 = a5;
  }
  memset(&v21[2], 0, 37);
  v21[0] = 1;
  memset(s, 0, 0x2000u);
  hb_ot_shape_plan_collect_lookups((int)(uintptr_t)(cached), 1196643650, (int)(uintptr_t)(v21));
  memset(&v19[252], 0, 37);
  v19[250] = (const char *)((uint8_t *)(&dword_0 + 1));
  memset(v20, 0, sizeof(v20));
LABEL_16:
  for ( j = 0; j != 2048; j += 4 )
    *(__m128i *)&v20[j] = *(__m128i *)(v5 + j * 4 + 48);
  for ( v18[0] = -1; ; hb_ot_layout_lookup_substitute_closure(*(uint32_t *)(a1 + 52), v18[0], v5) )
  {
    v11 = hb_set_next(v21, v18);
    if ( v11 == 0 )
      break;
  }
  do
  {
    if ( v20[v11] != *(uint32_t *)(v5 + 4 * v11 + 48) )
      goto LABEL_16;
    ++v11;
  }
  while ( v11 != 2048 );
  hb_shape_plan_destroy(cached);
}

// ----------------------------------------------------------------------------
// Function: OT::Lookup::serialize  (binary VA: 0x12b76c0)
// Original: OT::Lookup::serialize
// ----------------------------------------------------------------------------
int OT::Lookup::serialize(OT::Lookup::Self *self, OT::hb_serialize_context_t::Self *a2, int16_t a3, unsigned int a4, int16_t a5)
{
  OT::Lookup::Self *s;
  int v6;
  int v7;
  char *v8;
  char *v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  int v14;
  int result;
  char *v16;
  int v17;
  int v18;
  char *v19;
  char *v20;

  if ( (unsigned int)(uintptr_t)(self) < *((uint32_t *)a2 + 1) )
  {
    v19 = (char *)self + 6;
  }
  else
  {
    s = *((OT::Lookup::Self **)a2 + 3);
    v19 = (char *)self + 6;
    if ( self <= s && s <= (OT::Lookup::Self *)((char *)self + 6) )
      goto LABEL_4;
  }
  __assert2(
    "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
    458,
    "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::Lookup]",
    "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
  s = *((OT::Lookup::Self **)a2 + 3);
LABEL_4:
  if ( *((uint8_t *)a2 + 16) != 0 )
    goto LABEL_22;
  v6 = v19 - (char *)s;
  if ( v19 - (char *)s > *((uint32_t *)a2 + 2) - (int)(uintptr_t)(s) )
    goto LABEL_22;
  memset(s, 0, v19 - (char *)s);
  v7 = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v7 + v6;
  if ( v7 == 0 || self == nullptr )
    return 0;
  v8 = (char *)self + 4;
  *((uint8_t *)self + 1) = a3;
  *(uint8_t *)self = HIBYTE(a3);
  *((uint8_t *)self + 3) = a4;
  *((uint8_t *)self + 2) = BYTE1(a4);
  if ( (unsigned int)(uintptr_t)(self) + 4 < *((uint32_t *)a2 + 1) || (v9 = *((char **)a2 + 3), v8 > v9) || v9 > v19 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::ArrayOf<OT::Offset<OT::IntType<short unsigned int, 2u> > >]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v9 = *((char **)a2 + 3);
  }
  if ( *((uint8_t *)a2 + 16) != 0 || v19 - v9 > *((uint32_t *)a2 + 2) - (int)(uintptr_t)(v9) )
  {
LABEL_22:
    *((uint8_t *)a2 + 16) = 1;
    return 0;
  }
  v17 = v19 - v9;
  memset(v9, 0, v19 - v9);
  v10 = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v10 + v17;
  if ( v10 == 0 )
    return 0;
  *((uint8_t *)self + 5) = a5;
  *((uint8_t *)self + 4) = HIBYTE(a5);
  v11 = 2 * (uint16_t)((HIBYTE(a5) << 8) + (uint8_t)a5) + 2;
  if ( (unsigned int)(uintptr_t)(v8) <= *((uint32_t *)a2 + 1) )
  {
    v20 = &v8[v11];
LABEL_28:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::ArrayOf<OT::Offset<OT::IntType<short unsigned int, 2u> > >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v12 = *((char **)a2 + 3);
    goto LABEL_17;
  }
  v12 = *((char **)a2 + 3);
  v13 = &v8[v11];
  v20 = v13;
  if ( v8 > v12 || v12 > v13 )
    goto LABEL_28;
LABEL_17:
  if ( *((uint8_t *)a2 + 16) != 0 || v20 - v12 > *((uint32_t *)a2 + 2) - (int)(uintptr_t)(v12) )
    goto LABEL_22;
  v18 = v20 - v12;
  memset(v12, 0, v20 - v12);
  v14 = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v14 + v18;
  if ( v14 == 0 )
    return 0;
  result = 1;
  if ( (*((uint8_t *)self + 3) & 0x10) != 0 )
  {
    v16 = &v8[2 * (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)) + 2];
    *v16 = HIBYTE(a4);
    v16[1] = BYTE2(a4);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::CoverageFormat2::serialize  (binary VA: 0x12b7960)
// Original: OT::CoverageFormat2::serialize
// ----------------------------------------------------------------------------
int OT::CoverageFormat2::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int a4)
{
  uint8_t *v4;
  uint8_t *s;
  size_t n;
  int v7;
  int result;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  char v12; // di
  int v13;
  int v14;
  uint8_t *v15;
  uint8_t *v16;
  signed int v17;
  int v18;
  char v19;
  char v20;
  char *v21;
  unsigned int v22;
  int v23;
  int v24;
  uint8_t *v25;
  uint8_t v26; // bp
  char v27; // bp
  char v28;
  unsigned int v29;
  char *v30;
  int v31;
  unsigned int v32;
  char *v33;
  int v34;
  uint16_t v35;
  char v36;
  int v37;
  uint8_t v38;
  uint8_t *v39;

  v4 = a1 + 4;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) || (s = *(uint8_t **)(a2 + 12), v4 = a1 + 4, a1 > s) || s > v4 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::CoverageFormat2]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    s = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 || (int)(n = v4 - s) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(s) )
  {
LABEL_40:
    result = 0;
    *(uint8_t *)(a2 + 16) = 1;
    return result;
  }
  memset(s, 0, n);
  v7 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v7 + n;
  if ( v7 == 0 || a1 == nullptr )
    return 0;
  result = 1;
  if ( a4 == 0 )
    return result;
  if ( a4 <= 1 )
  {
    v14 = 8;
    v12 = 1;
    LOBYTE(v13) = 0;
    goto LABEL_18;
  }
  v9 = *a3;
  v10 = 0;
  v11 = 1;
  v35 = 1;
  do
  {
    while ( v9 <= v10 )
    {
      v37 = 1;
      if ( v11 >= v9 )
        goto LABEL_16;
LABEL_12:
      if ( (uint16_t)((*(uint8_t *)(a3[1] + 2 * v11) << 8) + *(uint8_t *)(a3[1] + 2 * v11 + 1)) != v37 )
        goto LABEL_16;
      ++v11;
      ++v10;
      if ( v11 == a4 )
        goto LABEL_17;
    }
    v37 = (uint16_t)((*(uint8_t *)(a3[1] + 2 * v10) << 8) + *(uint8_t *)(a3[1] + 2 * v10 + 1))
        + 1;
    if ( v11 < v9 )
      goto LABEL_12;
LABEL_16:
    ++v35;
    ++v11;
    ++v10;
  }
  while ( v11 != a4 );
LABEL_17:
  v12 = v35;
  v13 = HIBYTE(v35);
  v14 = 6 * (uint16_t)((HIBYTE(v35) << 8) + (uint8_t)v35) + 2;
LABEL_18:
  a1[2] = v13;
  a1[3] = v12;
  v39 = a1 + 2;
  v15 = &a1[v14 + 2];
  if ( (unsigned int)(uintptr_t)(a1 + 2) <= *(uint32_t *)(a2 + 4)
    || (v16 = *(uint8_t **)(a2 + 12), v15 = &v39[v14], v39 > v16)
    || v16 > v15 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::SortedArrayOf<OT::RangeRecord>]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v16 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_40;
  v17 = v15 - v16;
  if ( v17 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v16) )
    goto LABEL_40;
  memset(v16, 0, v17);
  v18 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v18 + v17;
  if ( v18 == 0 )
    return 0;
  v19 = 0;
  v20 = 0;
  if ( *a3 != 0 )
  {
    v21 = (char *)a3[1];
    v20 = *v21;
    v19 = v21[1];
  }
  a1[4] = v20;
  a1[5] = v19;
  a1[8] = 0;
  a1[9] = 0;
  if ( a4 > 1 )
  {
    v22 = 1;
    v23 = 0;
    v34 = 2;
    do
    {
      while ( 1 )
      {
        v29 = *a3;
        if ( v22 - 1 < *a3 )
          break;
        v24 = 1;
        if ( v22 < v29 )
          goto LABEL_35;
LABEL_29:
        ++v23;
        v36 = 0;
        v25 = &v39[6 * v23 + 2];
        v26 = 0;
LABEL_30:
        v25[5] = v22;
        *v25 = v36;
        v25[1] = v26;
        v25[4] = BYTE1(v22);
        if ( v22 < *a3 )
        {
          v33 = (char *)(a3[1] + v34);
          v28 = *v33;
          v27 = v33[1];
        }
        else
        {
          v27 = 0;
          v28 = 0;
        }
        v25[2] = v28;
        v25[3] = v27;
        ++v22;
        v34 += 2;
        if ( v22 == a4 )
          goto LABEL_37;
      }
      v24 = (uint16_t)((*(uint8_t *)(a3[1] + v34 - 2) << 8) + *(uint8_t *)(a3[1] + v34 - 2 + 1))
          + 1;
      if ( v22 >= v29 )
        goto LABEL_29;
LABEL_35:
      v30 = (char *)(a3[1] + v34);
      v36 = *v30;
      v38 = v30[1];
      if ( v24 != (uint16_t)(((uint8_t)*v30 << 8) + v38) )
      {
        ++v23;
        v25 = &v39[6 * v23 + 2];
        v26 = v38;
        goto LABEL_30;
      }
      ++v22;
      v31 = (int)(uintptr_t)(&v39[6 * v23 + 2]);
      *(uint8_t *)(v31 + 2) = v36;
      *(uint8_t *)(v31 + 3) = v38;
      v34 += 2;
    }
    while ( v22 != a4 );
  }
LABEL_37:
  v32 = a4;
  if ( a4 > *a3 )
    v32 = *a3;
  *a3 -= v32;
  a3[1] += 2 * v32;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::Coverage::serialize  (binary VA: 0x12b7d60)
// Original: OT::Coverage::serialize
// ----------------------------------------------------------------------------
int OT::Coverage::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int a4)
{
  uint8_t *v4;
  uint8_t *s;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  uint8_t *v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  unsigned int v16;
  size_t n;
  int v18;
  unsigned int i;
  char v20; // di
  uint8_t *v21;
  char *v22;
  unsigned int v24;
  int v25;
  char v26;
  int v27;
  uint8_t *v28;

  v4 = a1;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) )
    goto LABEL_4;
  s = *(uint8_t **)(a2 + 12);
  if ( a1 > s )
  {
    v4 = a1;
LABEL_4:
    v28 = v4 + 2;
LABEL_5:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::Coverage]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    s = *(uint8_t **)(a2 + 12);
    goto LABEL_6;
  }
  v28 = a1 + 2;
  if ( s > a1 + 2 )
    goto LABEL_5;
LABEL_6:
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_39;
  v6 = v28 - s;
  if ( v28 - s > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(s) )
    goto LABEL_39;
  memset(s, 0, v28 - s);
  v7 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v7 + v6;
  if ( v7 == 0 || a1 == nullptr )
    return 0;
  v8 = 3;
  if ( a4 <= 1 )
    goto LABEL_19;
  v9 = *a3;
  v10 = 0;
  LOBYTE(v8) = 1;
  v25 = 1;
  do
  {
    while ( v9 <= v10 )
    {
      v27 = 1;
      if ( v9 <= v8 )
        goto LABEL_17;
LABEL_13:
      if ( v27 != (uint16_t)((*(uint8_t *)(a3[1] + 2 * v8) << 8)
                                   + *(uint8_t *)(a3[1] + 2 * v8 + 1)) )
        goto LABEL_17;
      ++v8;
      ++v10;
      if ( v8 == a4 )
        goto LABEL_18;
    }
    v27 = (uint16_t)((*(uint8_t *)(a3[1] + 2 * v10) << 8) + *(uint8_t *)(a3[1] + 2 * v10 + 1))
        + 1;
    if ( v9 > v8 )
      goto LABEL_13;
LABEL_17:
    ++v25;
    ++v8;
    ++v10;
  }
  while ( v8 != a4 );
LABEL_18:
  v8 = 3 * v25;
LABEL_19:
  if ( 2 * a4 >= v8 )
  {
    *a1 = 0;
    a1[1] = 2;
    return OT::CoverageFormat2::serialize(a1, a2, a3, a4);
  }
  *a1 = 0;
  a1[1] = 1;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) || (v11 = *(uint8_t **)(a2 + 12), a1 > v11) || v11 > a1 + 4 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::CoverageFormat1]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v11 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_39;
  v12 = a1 + 4 - v11;
  if ( v12 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v11) )
    goto LABEL_39;
  memset(v11, 0, a1 + 4 - v11);
  v13 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v13 + v12;
  if ( v13 == 0 )
    return 0;
  a1[3] = a4;
  a1[2] = BYTE1(a4);
  v14 = 2 * (uint16_t)((uint8_t)a4 + (BYTE1(a4) << 8)) + 2;
  if ( (unsigned int)(uintptr_t)(v28) <= *(uint32_t *)(a2 + 4) )
  {
    v16 = (unsigned int)(uintptr_t)(&v28[v14]);
    goto LABEL_29;
  }
  v15 = *(uint8_t **)(a2 + 12);
  v16 = (unsigned int)(uintptr_t)(&v28[v14]);
  if ( v28 > v15 || (unsigned int)(uintptr_t)(v15) > v16 )
  {
LABEL_29:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::SortedArrayOf<OT::IntType<short unsigned int, 2u> >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v15 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 || (int)(n = v16 - (uint32_t)(uintptr_t)(v15)) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v15) )
  {
LABEL_39:
    *(uint8_t *)(a2 + 16) = 1;
    return 0;
  }
  memset(v15, 0, n);
  v18 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v18 + n;
  if ( v18 == 0 )
    return 0;
  if ( a4 != 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      if ( i >= *a3 )
      {
        v26 = 0;
        v20 = 0;
      }
      else
      {
        v22 = (char *)(a3[1] + 2 * i);
        v20 = *v22;
        v26 = v22[1];
      }
      v21 = &v28[2 * i];
      v21[2] = v20;
      v21[3] = v26;
    }
  }
  v24 = a4;
  if ( a4 > *a3 )
    v24 = *a3;
  *a3 -= v24;
  a3[1] += 2 * v24;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::SingleSubstFormat2::serialize  (binary VA: 0x12b8120)
// Original: OT::SingleSubstFormat2::serialize
// ----------------------------------------------------------------------------
int OT::SingleSubstFormat2::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  int v5;
  unsigned int *v6;
  uint8_t *s;
  int v8;
  void *v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  void *v13;
  int v14;
  unsigned int *v15;
  unsigned int i;
  size_t v17;
  unsigned int v18;
  uint8_t *v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  uint8_t *v25;
  int v26;
  int v27;
  uint8_t *v28;
  unsigned int v29;
  signed int v30;
  int v31;
  unsigned int j;
  char v33; // si
  uint8_t *v34;
  char *v35;
  char *v37;
  unsigned int v38;
  unsigned int *v39;
  unsigned int *v40;
  unsigned int *v41;
  size_t v42;
  size_t v43;
  size_t v44;
  signed int v45;
  char v46;
  size_t v47;
  char v48;
  size_t n;
  size_t v50;
  size_t v51;
  char v52;
  uint8_t *v53;
  uint8_t *v54;
  int v55;
  int v56;

  v5 = a2;
  v6 = a4;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) )
  {
    v42 = (size_t)(a1 + 6);
  }
  else
  {
    s = *(uint8_t **)(a2 + 12);
    v42 = (size_t)(a1 + 6);
    if ( a1 <= s && s <= a1 + 6 )
      goto LABEL_4;
  }
  __assert2(
    "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
    458,
    "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::SingleSubstFormat2]",
    "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
  s = *(uint8_t **)(a2 + 12);
  v6 = a4;
LABEL_4:
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_65;
  n = v42 - (uint32_t)(uintptr_t)(s);
  if ( (int)(v42 - (uint32_t)(uintptr_t)(s)) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(s) )
    goto LABEL_65;
  v39 = v6;
  memset(s, 0, n);
  v8 = *(uint32_t *)(a2 + 12);
  v9 = (void *)(v8 + n);
  *(uint32_t *)(a2 + 12) = v8 + n;
  v10 = v39;
  if ( v8 == 0 || a1 == nullptr )
    return 0;
  v50 = (size_t)(a1 + 4);
  if ( (unsigned int)(uintptr_t)(a1 + 4) < *(uint32_t *)(a2 + 4) || v50 > (unsigned int)(uintptr_t)(v9) || (unsigned int)(uintptr_t)(v9) > v42 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::ArrayOf<OT::IntType<short unsigned int, 2u>, "
      "OT::IntType<short unsigned int, 2u> >]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v9 = *(void **)(a2 + 12);
    v10 = v39;
  }
  if ( *(uint8_t *)(a2 + 16) != 0 || (int)(v43 = v42 - (uint32_t)(uintptr_t)(v9)) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v9) )
  {
LABEL_65:
    *(uint8_t *)(v5 + 16) = 1;
    return 0;
  }
  v40 = v10;
  memset(v9, 0, v43);
  v11 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v11 + v43;
  v12 = v40;
  if ( v11 == 0 )
    return 0;
  a1[4] = BYTE1(a5);
  a1[5] = a5;
  v55 = 2 * (uint16_t)((BYTE1(a5) << 8) + (uint8_t)a5) + 2;
  if ( v50 <= *(uint32_t *)(a2 + 4) )
  {
    v44 = 2 * (uint16_t)((BYTE1(a5) << 8) + (uint8_t)a5) + 2 + v50;
LABEL_69:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::ArrayOf<OT::IntType<short unsigned int, 2u>, OT::"
      "IntType<short unsigned int, 2u> >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v13 = *(void **)(a2 + 12);
    v12 = v40;
    goto LABEL_17;
  }
  v13 = *(void **)(a2 + 12);
  v44 = v55 + v50;
  if ( v50 > (unsigned int)(uintptr_t)(v13) || (unsigned int)(uintptr_t)(v13) > v55 + v50 )
    goto LABEL_69;
LABEL_17:
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_65;
  v45 = v44 - (uint32_t)(uintptr_t)(v13);
  if ( v45 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v13) )
    goto LABEL_65;
  v41 = v12;
  memset(v13, 0, v45);
  v14 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v14 + v45;
  v15 = v41;
  if ( v14 == 0 )
    return 0;
  if ( a5 != 0 )
  {
    for ( i = 0; i != a5; ++i )
    {
      if ( *v41 > i )
      {
        v37 = (char *)(v41[1] + 2 * i);
        v46 = *v37;
        v52 = v37[1];
      }
      else
      {
        v52 = 0;
        v46 = 0;
      }
      v17 = v50 + 2 * i;
      *(uint8_t *)(v17 + 2) = v46;
      *(uint8_t *)(v17 + 3) = v52;
    }
    v5 = a2;
    v15 = v41;
  }
  v18 = a5;
  if ( a5 > *v15 )
    v18 = *v15;
  *v15 -= v18;
  v15[1] += 2 * v18;
  v53 = *(uint8_t **)(v5 + 12);
  a1[3] = (uint8_t)(uintptr_t)(v53) - (uint8_t)(uintptr_t)(a1);
  a1[2] = (uint16_t)((uint16_t)(uintptr_t)(v53) - (uint16_t)(uintptr_t)(a1)) >> 8;
  if ( (unsigned int)(uintptr_t)(v53) < *(uint32_t *)(v5 + 4) )
  {
    v54 = v53 + 2;
    goto LABEL_31;
  }
  v19 = *(uint8_t **)(v5 + 12);
  if ( v53 > v19 )
  {
    v54 = v53 + 2;
LABEL_31:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::Coverage]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v19 = *(uint8_t **)(v5 + 12);
    goto LABEL_32;
  }
  v54 = v53 + 2;
  if ( v19 > v53 + 2 )
    goto LABEL_31;
LABEL_32:
  if ( *(uint8_t *)(v5 + 16) != 0 )
    goto LABEL_65;
  v20 = v54 - v19;
  if ( v54 - v19 > *(uint32_t *)(v5 + 8) - (int)(uintptr_t)(v19) )
    goto LABEL_65;
  memset(v19, 0, v54 - v19);
  v21 = *(uint32_t *)(v5 + 12);
  *(uint32_t *)(v5 + 12) = v21 + v20;
  if ( v21 == 0 || v53 == nullptr )
    return 0;
  v22 = 3;
  if ( a5 <= 1 )
    goto LABEL_45;
  v56 = v5;
  v23 = 0;
  v51 = 1;
  LOBYTE(v22) = 1;
  v24 = *a3;
  do
  {
    while ( v24 <= v23 )
    {
      v47 = 1;
      if ( v24 <= v22 )
        goto LABEL_43;
LABEL_39:
      if ( v47 != (uint16_t)((*(uint8_t *)(a3[1] + 2 * v22) << 8)
                                   + *(uint8_t *)(a3[1] + 2 * v22 + 1)) )
        goto LABEL_43;
      ++v22;
      ++v23;
      if ( v22 == a5 )
        goto LABEL_44;
    }
    v47 = (uint16_t)((*(uint8_t *)(a3[1] + 2 * v23) << 8) + *(uint8_t *)(a3[1] + 2 * v23 + 1))
        + 1;
    if ( v24 > v22 )
      goto LABEL_39;
LABEL_43:
    ++v51;
    ++v22;
    ++v23;
  }
  while ( v22 != a5 );
LABEL_44:
  v5 = v56;
  v22 = 3 * v51;
LABEL_45:
  *v53 = 0;
  if ( v22 <= 2 * a5 )
  {
    v53[1] = 2;
    return OT::CoverageFormat2::serialize(v53, v5, a3, a5);
  }
  v53[1] = 1;
  if ( (unsigned int)(uintptr_t)(v53) < *(uint32_t *)(v5 + 4) || (v25 = *(uint8_t **)(v5 + 12), v53 > v25) || v25 > v53 + 4 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::CoverageFormat1]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v25 = *(uint8_t **)(v5 + 12);
  }
  if ( *(uint8_t *)(v5 + 16) != 0 )
    goto LABEL_65;
  v26 = v53 + 4 - v25;
  if ( v26 > *(uint32_t *)(v5 + 8) - (int)(uintptr_t)(v25) )
    goto LABEL_65;
  memset(v25, 0, v53 + 4 - v25);
  v27 = *(uint32_t *)(v5 + 12);
  *(uint32_t *)(v5 + 12) = v27 + v26;
  if ( v27 == 0 )
    return 0;
  v53[2] = BYTE1(a5);
  v53[3] = a5;
  if ( (unsigned int)(uintptr_t)(v54) <= *(uint32_t *)(v5 + 4) )
  {
    v29 = (unsigned int)(uintptr_t)(&v54[v55]);
    goto LABEL_55;
  }
  v28 = *(uint8_t **)(v5 + 12);
  v29 = (unsigned int)(uintptr_t)(&v54[v55]);
  if ( v54 > v28 || (unsigned int)(uintptr_t)(v28) > v29 )
  {
LABEL_55:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::SortedArrayOf<OT::IntType<short unsigned int, 2u> >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v28 = *(uint8_t **)(v5 + 12);
  }
  if ( *(uint8_t *)(v5 + 16) != 0 )
    goto LABEL_65;
  v30 = v29 - (uint32_t)(uintptr_t)(v28);
  if ( v30 > *(uint32_t *)(v5 + 8) - (int)(uintptr_t)(v28) )
    goto LABEL_65;
  memset(v28, 0, v30);
  v31 = *(uint32_t *)(v5 + 12);
  *(uint32_t *)(v5 + 12) = v31 + v30;
  if ( v31 == 0 )
    return 0;
  if ( a5 != 0 )
  {
    for ( j = 0; j != a5; ++j )
    {
      if ( j >= *a3 )
      {
        v48 = 0;
        v33 = 0;
      }
      else
      {
        v35 = (char *)(a3[1] + 2 * j);
        v33 = *v35;
        v48 = v35[1];
      }
      v34 = &v54[2 * j];
      v34[2] = v33;
      v34[3] = v48;
    }
  }
  v38 = a5;
  if ( a5 > *a3 )
    v38 = *a3;
  *a3 -= v38;
  a3[1] += 2 * v38;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::SingleSubst::serialize  (binary VA: 0x12b87e0)
// Original: OT::SingleSubst::serialize
// ----------------------------------------------------------------------------
int OT::SingleSubst::serialize(uint8_t *a1, int a2, int a3, int a4, unsigned int a5)
{
  uint8_t *v5;
  uint8_t *s;
  int v7;
  int v8;
  int result;
  uint8_t *v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  uint8_t *v18;
  char v19;
  int v20;

  v5 = a1;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) || (s = *(uint8_t **)(a2 + 12), a1 > s) || s > a1 + 2 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::IntType<short unsigned int, 2u>]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    s = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_16;
  v7 = a1 + 2 - s;
  if ( v7 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(s) )
    goto LABEL_16;
  memset(s, 0, a1 + 2 - s);
  v8 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v8 + v7;
  if ( v8 == 0 || a1 == nullptr )
    return 0;
  if ( a5 == 0 )
    goto LABEL_9;
  if ( *(uint32_t *)a4 != 0 )
    v11 = (uint16_t)((**(uint8_t **)(a4 + 4) << 8) + *(uint8_t *)(*(uint32_t *)(a4 + 4) + 1));
  else
    v11 = 0;
  if ( *(uint32_t *)a3 != 0 )
    v12 = (uint16_t)((**(uint8_t **)(a3 + 4) << 8) + *(uint8_t *)(*(uint32_t *)(a3 + 4) + 1));
  else
    v12 = 0;
  v20 = v11 - v12;
  if ( a5 <= 1 )
  {
LABEL_11:
    *v5 = 0;
    v5[1] = 1;
    if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(a2 + 4) || (v10 = *(uint8_t **)(a2 + 12), v5 > v10) || v10 > v5 + 6 )
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
        458,
        "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::SingleSubstFormat1]",
        "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
      v10 = *(uint8_t **)(a2 + 12);
    }
    if ( *(uint8_t *)(a2 + 16) == 0 )
    {
      v16 = v5 + 6 - v10;
      if ( v16 <= *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v10) )
      {
        memset(v10, 0, v5 + 6 - v10);
        v17 = *(uint32_t *)(a2 + 12);
        v18 = (uint8_t *)(v17 + v16);
        *(uint32_t *)(a2 + 12) = (uint32_t)(uintptr_t)(v18);
        if ( v17 != 0 )
        {
          v5[3] = (uint8_t)(uintptr_t)(v18) - (uint8_t)(uintptr_t)(v5);
          v5[2] = (uint16_t)((uint16_t)(uintptr_t)(v18) - (uint16_t)(uintptr_t)(v5)) >> 8;
          v19 = OT::Coverage::serialize(v18, a2, (unsigned int *)a3, a5);
          result = 0;
          if ( v19 != 0 )
          {
            v5[5] = v20;
            v5[4] = BYTE1(v20);
            return 1;
          }
          return result;
        }
        return 0;
      }
    }
LABEL_16:
    *(uint8_t *)(a2 + 16) = 1;
    return 0;
  }
  v13 = *(uint32_t *)a3;
  v14 = 1;
  while ( *(uint32_t *)a4 <= v14 )
  {
    v15 = 0;
    if ( v13 > v14 )
      goto LABEL_31;
LABEL_27:
    if ( v20 != v15 )
      goto LABEL_32;
LABEL_28:
    if ( ++v14 == a5 )
    {
      v5 = a1;
      goto LABEL_11;
    }
  }
  v15 = (uint16_t)(*(uint8_t *)(*(uint32_t *)(a4 + 4) + 2 * v14 + 1)
                         + (*(uint8_t *)(*(uint32_t *)(a4 + 4) + 2 * v14) << 8));
  if ( v13 <= v14 )
    goto LABEL_27;
LABEL_31:
  if ( v20 == v15
            - (uint16_t)(*(uint8_t *)(*(uint32_t *)(a3 + 4) + 2 * v14 + 1)
                               + (*(uint8_t *)(*(uint32_t *)(a3 + 4) + 2 * v14) << 8)) )
    goto LABEL_28;
LABEL_32:
  v5 = a1;
LABEL_9:
  *v5 = 0;
  v5[1] = 2;
  return OT::SingleSubstFormat2::serialize(v5, a2, (unsigned int *)a3, (unsigned int *)a4, a5);
}

// ----------------------------------------------------------------------------
// Function: OT::Ligature::serialize  (binary VA: 0x12b8ad0)
// Original: OT::Ligature::serialize
// ----------------------------------------------------------------------------
int OT::Ligature::serialize(unsigned int a1, int a2, int16_t a3, unsigned int *a4, int a5)
{
  void *s;
  int v6;
  unsigned int v7;
  void *v8;
  int v9;
  unsigned int v10;
  int result;
  int v12;
  uint16_t v13;
  void *v14;
  unsigned int v15;
  signed int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  char *v21;
  size_t v22;
  unsigned int v23;
  unsigned int v24;
  char v25;
  size_t v26;
  size_t n;
  char v28;

  if ( a1 < *(uint32_t *)(a2 + 4) )
  {
    v26 = a1 + 4;
  }
  else
  {
    s = *(void **)(a2 + 12);
    if ( a1 <= (unsigned int)(uintptr_t)(s) )
    {
      v26 = a1 + 4;
      if ( (unsigned int)(uintptr_t)(s) <= a1 + 4 )
      {
        if ( *(uint8_t *)(a2 + 16) != 0 )
          goto LABEL_34;
        goto LABEL_5;
      }
    }
    else
    {
      v26 = a1 + 4;
    }
  }
  __assert2(
    "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
    458,
    "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::Ligature]",
    "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
  s = *(void **)(a2 + 12);
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_34;
LABEL_5:
  if ( (int)(v26 - (uint32_t)(uintptr_t)(s)) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(s) )
    goto LABEL_34;
  v22 = v26 - (uint32_t)(uintptr_t)(s);
  memset(s, 0, v26 - (uint32_t)(uintptr_t)(s));
  v6 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v6 + v22;
  if ( v6 == 0 || a1 == 0 )
    return 0;
  v7 = a1 + 2;
  *(uint16_t *)a1 = a3;
  if ( a1 + 2 < *(uint32_t *)(a2 + 4) || (v8 = *(void **)(a2 + 12), v7 > (unsigned int)(uintptr_t)(v8)) || (unsigned int)(uintptr_t)(v8) > v26 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::HeadlessArrayOf<OT::IntType<short unsigned int, 2u> >]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v8 = *(void **)(a2 + 12);
    v7 = a1 + 2;
  }
  if ( *(uint8_t *)(a2 + 16) != 0 || (int)(n = v26 - (uint32_t)(uintptr_t)(v8)) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v8) )
  {
LABEL_34:
    *(uint8_t *)(a2 + 16) = 1;
    return 0;
  }
  v23 = v7;
  memset(v8, 0, n);
  v9 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v9 + n;
  v10 = v23;
  if ( v9 == 0 )
    return 0;
  *(uint8_t *)(a1 + 3) = a5;
  *(uint8_t *)(a1 + 2) = BYTE1(a5);
  result = 1;
  if ( a5 == 0 )
    return result;
  v12 = 2;
  v13 = (BYTE1(a5) << 8) + (uint8_t)a5;
  if ( v13 != 0 )
    v12 = 2 * v13;
  if ( v23 <= *(uint32_t *)(a2 + 4) )
  {
    v15 = v23 + v12;
LABEL_37:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::HeadlessArrayOf<OT::IntType<short unsigned int, 2u> >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v14 = *(void **)(a2 + 12);
    v10 = v23;
    goto LABEL_20;
  }
  v14 = *(void **)(a2 + 12);
  v15 = v23 + v12;
  if ( v23 > (unsigned int)(uintptr_t)(v14) || (unsigned int)(uintptr_t)(v14) > v15 )
    goto LABEL_37;
LABEL_20:
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_34;
  v16 = v15 - (uint32_t)(uintptr_t)(v14);
  if ( v16 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v14) )
    goto LABEL_34;
  v24 = v10;
  memset(v14, 0, v16);
  v17 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v17 + v16;
  if ( v17 == 0 )
    return 0;
  v18 = a5 - 1;
  if ( a5 != 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 < *a4 )
      {
        v21 = (char *)(a4[1] + 2 * v19);
        v28 = *v21;
        v25 = v21[1];
      }
      else
      {
        v25 = 0;
        v28 = 0;
      }
      v20 = v24 + 2 * v19++;
      *(uint8_t *)(v20 + 2) = v28;
      *(uint8_t *)(v20 + 3) = v25;
    }
    while ( v18 > v19 );
  }
  if ( v18 > *a4 )
    v18 = *a4;
  *a4 -= v18;
  a4[1] += 2 * v18;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSet::serialize  (binary VA: 0x12b8e00)
// Original: OT::LigatureSet::serialize
// ----------------------------------------------------------------------------
int OT::LigatureSet::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  uint8_t *v10;
  signed int v11;
  int v12;
  int v13;
  uint8_t *v14;
  uint8_t *v15;
  signed int v16;
  int v17;
  unsigned int v18;
  uint8_t *v19;
  unsigned int v20;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int16_t v26;

  v6 = a1 + 2;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) || (v7 = *(uint8_t **)(a2 + 12), v6 = a1 + 2, a1 > v7) || v7 > v6 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::LigatureSet]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v7 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) == 0 )
  {
    v8 = v6 - v7;
    if ( v6 - v7 <= *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v7) )
    {
      memset(v7, 0, v6 - v7);
      v9 = *(uint32_t *)(a2 + 12);
      v10 = (uint8_t *)(v9 + v8);
      *(uint32_t *)(a2 + 12) = v9 + v8;
      if ( v9 == 0 || a1 == nullptr )
        return 0;
      if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) || a1 > v10 || v10 > v6 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
          458,
          "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::ArrayOf<OT::OffsetTo<OT::Ligature, OT::In"
          "tType<short unsigned int, 2u> >, OT::IntType<short unsigned int, 2u> >]",
          "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
        v10 = *(uint8_t **)(a2 + 12);
      }
      if ( *(uint8_t *)(a2 + 16) == 0 )
      {
        v11 = v6 - v10;
        if ( v11 <= *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v10) )
        {
          memset(v10, 0, v11);
          v12 = *(uint32_t *)(a2 + 12);
          *(uint32_t *)(a2 + 12) = v12 + v11;
          if ( v12 == 0 )
            return 0;
          *a1 = BYTE1(a5);
          a1[1] = a5;
          v13 = 2 * (uint16_t)((BYTE1(a5) << 8) + (uint8_t)a5) + 2;
          v14 = &a1[v13];
          if ( (unsigned int)(uintptr_t)(a1) <= *(uint32_t *)(a2 + 4)
            || (v15 = *(uint8_t **)(a2 + 12), v14 = &a1[v13], a1 > v15)
            || v15 > v14 )
          {
            __assert2(
              "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
              467,
              "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::ArrayOf<OT::OffsetTo<OT::Ligature, OT::In"
              "tType<short unsigned int, 2u> >, OT::IntType<short unsigned int, 2u> >]",
              "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
            v15 = *(uint8_t **)(a2 + 12);
          }
          if ( *(uint8_t *)(a2 + 16) == 0 )
          {
            v16 = v14 - v15;
            if ( v16 <= *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v15) )
            {
              memset(v15, 0, v16);
              v17 = *(uint32_t *)(a2 + 12);
              *(uint32_t *)(a2 + 12) = v17 + v16;
              if ( v17 == 0 )
                return 0;
              if ( a5 != 0 )
              {
                v18 = 0;
                do
                {
                  v25 = *a4 > v18 ? *(uint32_t *)(a4[1] + 4 * v18) : 0;
                  v26 = v18 < *a3 ? *(uint16_t *)(a3[1] + 2 * v18) : 0;
                  v19 = &a1[2 * v18];
                  v20 = *(uint32_t *)(a2 + 12);
                  v19[2] = (uint16_t)(v20 - (uint16_t)(uintptr_t)(a1)) >> 8;
                  v19[3] = v20 - (uint8_t)(uintptr_t)(a1);
                  if ( (uint8_t)OT::Ligature::serialize(v20, a2, v26, a6, v25) == 0 )
                    return 0;
                }
                while ( ++v18 != a5 );
              }
              v22 = *a3;
              v23 = a5;
              if ( a5 > *a3 )
                v23 = *a3;
              a3[1] += 2 * v23;
              *a3 = v22 - v23;
              v24 = a5;
              if ( a5 > *a4 )
                v24 = *a4;
              *a4 -= v24;
              a4[1] += 4 * v24;
              return 1;
            }
          }
        }
      }
    }
  }
  *(uint8_t *)(a2 + 16) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSubstFormat1::serialize  (binary VA: 0x12b9160)
// Original: OT::LigatureSubstFormat1::serialize
// ----------------------------------------------------------------------------
int OT::LigatureSubstFormat1::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5, unsigned int *a6, unsigned int *a7, unsigned int *a8)
{
  uint8_t *v8;
  uint8_t *s;
  int v10;
  int v11;
  uint8_t *v12;
  signed int n;
  int v14;
  unsigned int v15;
  uint8_t *v16;
  signed int v17;
  int v18;
  uint8_t *v19;
  unsigned int *v20;
  unsigned int v21;
  uint8_t *v22;
  unsigned int v23;
  uint8_t *v24;
  unsigned int v26;
  uint8_t *v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  uint8_t *v35;
  unsigned int v36;
  signed int v37;
  int v38;
  unsigned int j;
  char v40; // si
  uint8_t *v41;
  char *v42;
  unsigned int v43;
  unsigned int i;
  int v45;
  char v46;
  uint8_t *v47;
  uint8_t *v48;
  uint8_t *v49;
  int v50;

  v8 = a1 + 6;
  if ( (unsigned int)(uintptr_t)(a1) < *(uint32_t *)(a2 + 4) || (s = *(uint8_t **)(a2 + 12), v8 = a1 + 6, a1 > s) || s > v8 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::LigatureSubstFormat1]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    s = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_33;
  v10 = v8 - s;
  if ( v8 - s > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(s) )
    goto LABEL_33;
  memset(s, 0, v8 - s);
  v11 = *(uint32_t *)(a2 + 12);
  v12 = (uint8_t *)(v11 + v10);
  *(uint32_t *)(a2 + 12) = v11 + v10;
  if ( v11 == 0 || a1 == nullptr )
    return 0;
  v49 = a1 + 4;
  if ( (unsigned int)(uintptr_t)(a1 + 4) < *(uint32_t *)(a2 + 4) || v49 > v12 || v12 > v8 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::ArrayOf<OT::OffsetTo<OT::LigatureSet, OT::Int"
      "Type<short unsigned int, 2u> >, OT::IntType<short unsigned int, 2u> >]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v12 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_33;
  n = v8 - v12;
  if ( n > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v12) )
    goto LABEL_33;
  memset(v12, 0, n);
  v14 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v14 + n;
  if ( v14 == 0 )
    return 0;
  a1[4] = BYTE1(a5);
  a1[5] = a5;
  v15 = (unsigned int)(uintptr_t)(&v49[2 * (uint16_t)((BYTE1(a5) << 8) + (uint8_t)a5) + 2]);
  v50 = 2 * (uint16_t)((BYTE1(a5) << 8) + (uint8_t)a5) + 2;
  if ( (unsigned int)(uintptr_t)(v49) <= *(uint32_t *)(a2 + 4)
    || (v16 = *(uint8_t **)(a2 + 12), v15 = (unsigned int)(uintptr_t)(&v49[v50]), v49 > v16)
    || (unsigned int)(uintptr_t)(v16) > v15 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::ArrayOf<OT::OffsetTo<OT::LigatureSet, OT::IntType"
      "<short unsigned int, 2u> >, OT::IntType<short unsigned int, 2u> >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v16 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_33;
  v17 = v15 - (uint32_t)(uintptr_t)(v16);
  if ( v17 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v16) )
    goto LABEL_33;
  memset(v16, 0, v17);
  v18 = *(uint32_t *)(a2 + 12);
  v19 = (uint8_t *)(v18 + v17);
  *(uint32_t *)(a2 + 12) = v18 + v17;
  if ( v18 == 0 )
    return 0;
  if ( a5 != 0 )
  {
    v20 = a4;
    v21 = 0;
    if ( *a4 != 0 )
      goto LABEL_26;
LABEL_22:
    for ( i = 0; ; i = *(uint32_t *)(v20[1] + 4 * v21) )
    {
      v22 = &v49[2 * v21];
      v22[2] = (uint16_t)((uint16_t)(uintptr_t)(v19) - (uint16_t)(uintptr_t)(a1)) >> 8;
      v22[3] = (uint8_t)(uintptr_t)(v19) - (uint8_t)(uintptr_t)(a1);
      if ( (uint8_t)OT::LigatureSet::serialize(v19, a2, a6, a7, i, a8) == 0 )
        break;
      if ( ++v21 == a5 )
        goto LABEL_39;
      v20 = a4;
      v19 = *(uint8_t **)(a2 + 12);
      if ( *a4 <= v21 )
        goto LABEL_22;
LABEL_26:
      ;
    }
    return 0;
  }
LABEL_39:
  v26 = a5;
  if ( a5 > *a4 )
    v26 = *a4;
  *a4 -= v26;
  a4[1] += 4 * v26;
  v47 = *(uint8_t **)(a2 + 12);
  a1[2] = (uint16_t)((uint16_t)(uintptr_t)(v47) - (uint16_t)(uintptr_t)(a1)) >> 8;
  a1[3] = (uint8_t)(uintptr_t)(v47) - (uint8_t)(uintptr_t)(a1);
  if ( (unsigned int)(uintptr_t)(v47) < *(uint32_t *)(a2 + 4) )
  {
    v48 = v47 + 2;
    goto LABEL_44;
  }
  v27 = *(uint8_t **)(a2 + 12);
  if ( v47 > v27 )
  {
    v48 = v47 + 2;
LABEL_44:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::Coverage]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v27 = *(uint8_t **)(a2 + 12);
    goto LABEL_45;
  }
  v48 = v47 + 2;
  if ( v27 > v47 + 2 )
    goto LABEL_44;
LABEL_45:
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_33;
  v28 = v48 - v27;
  if ( v48 - v27 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v27) )
    goto LABEL_33;
  memset(v27, 0, v48 - v27);
  v29 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v29 + v28;
  if ( v29 == 0 || v47 == nullptr )
    return 0;
  v23 = 3;
  if ( a5 > 1 )
  {
    v30 = 0;
    v45 = 1;
    LOBYTE(v23) = 1;
    v31 = *a3;
    while ( 1 )
    {
      if ( v31 <= v30 )
      {
        v32 = 1;
        if ( v31 <= v23 )
          goto LABEL_56;
      }
      else
      {
        v32 = (uint16_t)((*(uint8_t *)(a3[1] + 2 * v30) << 8) + *(uint8_t *)(a3[1] + 2 * v30 + 1))
            + 1;
        if ( v31 <= v23 )
        {
LABEL_56:
          ++v45;
          goto LABEL_53;
        }
      }
      if ( (uint16_t)((*(uint8_t *)(a3[1] + 2 * v23) << 8) + *(uint8_t *)(a3[1] + 2 * v23 + 1)) != v32 )
        goto LABEL_56;
LABEL_53:
      ++v23;
      ++v30;
      if ( v23 == a5 )
      {
        v23 = 3 * v45;
        break;
      }
    }
  }
  if ( 2 * a5 >= v23 )
  {
    *v47 = 0;
    v47[1] = 2;
    return OT::CoverageFormat2::serialize(v47, a2, a3, a5);
  }
  *v47 = 0;
  v47[1] = 1;
  if ( (unsigned int)(uintptr_t)(v47) < *(uint32_t *)(a2 + 4) || (v24 = *(uint8_t **)(a2 + 12), v47 > v24) || v24 > v47 + 4 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      458,
      "Type* OT::hb_serialize_context_t::extend_min(Type&) [with Type = OT::CoverageFormat1]",
      "this->start <= (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v24 = *(uint8_t **)(a2 + 12);
  }
  if ( *(uint8_t *)(a2 + 16) != 0 || (v33 = v47 + 4 - v24) > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v24) )
  {
LABEL_33:
    *(uint8_t *)(a2 + 16) = 1;
    return 0;
  }
  memset(v24, 0, v47 + 4 - v24);
  v34 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v34 + v33;
  if ( v34 == 0 )
    return 0;
  v47[2] = BYTE1(a5);
  v47[3] = a5;
  if ( (unsigned int)(uintptr_t)(v48) <= *(uint32_t *)(a2 + 4) )
  {
    v36 = (unsigned int)(uintptr_t)(&v48[v50]);
LABEL_66:
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      467,
      "Type* OT::hb_serialize_context_t::extend(Type&) [with Type = OT::SortedArrayOf<OT::IntType<short unsigned int, 2u> >]",
      "this->start < (char *) &obj && (char *) &obj <= this->head && (char *) &obj + size >= this->head");
    v35 = *(uint8_t **)(a2 + 12);
    goto LABEL_67;
  }
  v35 = *(uint8_t **)(a2 + 12);
  v36 = (unsigned int)(uintptr_t)(&v48[v50]);
  if ( v48 > v35 || (unsigned int)(uintptr_t)(v35) > v36 )
    goto LABEL_66;
LABEL_67:
  if ( *(uint8_t *)(a2 + 16) != 0 )
    goto LABEL_33;
  v37 = v36 - (uint32_t)(uintptr_t)(v35);
  if ( v37 > *(uint32_t *)(a2 + 8) - (int)(uintptr_t)(v35) )
    goto LABEL_33;
  memset(v35, 0, v37);
  v38 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v38 + v37;
  if ( v38 == 0 )
    return 0;
  if ( a5 != 0 )
  {
    for ( j = 0; j != a5; ++j )
    {
      if ( j >= *a3 )
      {
        v46 = 0;
        v40 = 0;
      }
      else
      {
        v42 = (char *)(a3[1] + 2 * j);
        v40 = *v42;
        v46 = v42[1];
      }
      v41 = &v48[2 * j];
      v41[2] = v40;
      v41[3] = v46;
    }
  }
  v43 = a5;
  if ( a5 > *a3 )
    v43 = *a3;
  *a3 -= v43;
  a3[1] += 2 * v43;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::hb_serialize_context_t::copy_OT_SubstLookup_d65dac  (binary VA: 0x12b9830)
// Original: OT::hb_serialize_context_t::copy<OT::SubstLookup>
// ----------------------------------------------------------------------------
OT::SubstLookup::Self * OT::hb_serialize_context_t::copy_OT_SubstLookup_d65dac(OT::hb_serialize_context_t::Self *self)
{
  const void *src;
  size_t size;
  void *v3;
  void *v4;

  if ( *((uint8_t *)self + 16) != 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-open-type-private.hh",
      410,
      "Type* OT::hb_serialize_context_t::copy() [with Type = OT::SubstLookup]",
      "!this->ran_out_of_room");
  src = *((const void **)self + 1);
  size = *((uint32_t *)self + 3) - (uint32_t)(uintptr_t)(src);
  v3 = malloc(size);
  v4 = v3;
  if ( v3 != nullptr )
    memcpy(v3, src, size);
  return (OT::SubstLookup::Self *)v4;
}

// ----------------------------------------------------------------------------
// Function: hb_ft_face_create  (binary VA: 0x12c3bb0)
// Original: hb_ft_face_create
// ----------------------------------------------------------------------------
int hb_ft_face_create(int a1, int a2)
{
  int v2;
  int v3;
  void *v5;

  v2 = *(uint32_t *)(a1 + 104);
  if ( *(uint32_t *)(v2 + 20) != 0 )
  {
    v3 = (int)(uintptr_t)(hb_face_create_for_tables(sub_12C3AD0, a1, a2));
  }
  else
  {
    v5 = (void *)hb_blob_create(*(void **)v2, *(uint32_t *)(v2 + 4), 3, a1, a2);
    v3 = (int)(uintptr_t)(hb_face_create(v5, *(uint32_t *)(a1 + 4)));
    hb_blob_destroy(v5);
  }
  hb_face_set_index(v3, *(uint32_t *)(a1 + 4));
  hb_face_set_upem(v3, *(uint16_t *)(a1 + 68));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hb_ft_face_create_cached  (binary VA: 0x12c3c70)
// Original: hb_ft_face_create_cached
// ----------------------------------------------------------------------------
int hb_ft_face_create_cached(int a1)
{
  int v1;
  int (*v2)(int);

  v1 = *(uint32_t *)(a1 + 44);
  v2 = *(int (**)(int))(a1 + 48);
  if ( v1 == 0 || v2 != (int (*)(int))(uintptr_t)(sub_12C3AA0) )
  {
    if ( v2 != nullptr )
      v2(a1);
    v1 = hb_ft_face_create(a1, 0);
    *(uint32_t *)(a1 + 44) = v1;
    *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(sub_12C3AA0);
  }
  return (int)(uintptr_t)(hb_face_reference(v1));
}

// ----------------------------------------------------------------------------
// Function: hb_ft_font_create  (binary VA: 0x12c3cf0)
// Original: hb_ft_font_create
// ----------------------------------------------------------------------------
uint32_t * hb_ft_font_create(int a1, int a2)
{
  uint32_t *v3;
  uint32_t *v5;

  v3 = (uint32_t *)hb_ft_face_create(a1, a2);
  v5 = hb_font_create(v3);
  hb_face_destroy(v3);
  hb_font_set_funcs((int)(uintptr_t)(v5), dword_2036D20, a1, (void (*)(int))(&g4_noop_ret0));
  hb_font_set_scale(
    v5,
    (*(int *)(*(uint32_t *)(a1 + 88) + 16) * (uint64_t)*(uint16_t *)(a1 + 68) + 0x8000) >> 16,
    (*(int *)(*(uint32_t *)(a1 + 88) + 20) * (uint64_t)*(uint16_t *)(a1 + 68) + 0x8000) >> 16);
  hb_font_set_ppem(
    v5,
    *(uint16_t *)(*(uint32_t *)(a1 + 88) + 12),
    *(uint16_t *)(*(uint32_t *)(a1 + 88) + 14));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hb_ft_font_set_funcs  (binary VA: 0x12c3df0)
// Original: hb_ft_font_set_funcs
// ----------------------------------------------------------------------------
int hb_ft_font_set_funcs(int a1)
{
  int v1;
  int v2;
  int index;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_data;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_data)) > _g4_s1 ? (8u + sizeof(_g4_t_data)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_data &data = *reinterpret_cast<_g4_t_data *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v1 = a1;
  v13 = (void *)hb_face_reference_blob(*(uint32_t *)(a1 + 52));
  data = hb_blob_get_data(v13, &v15);
  v2 = *(uint32_t *)(a1 + 52);
  v16 = 0;
  index = hb_face_get_index(v2);
  v5 = index;
  v6 = v15;
  v14 = dword_2116CD0;
  v4 = dword_2116CD0;
  if ( dword_2116CD0 == 0 )
  {
    v11 = index;
    v10 = v15;
    while ( FT_Init_FreeType(&v14) == 0 )
    {
      if ( dword_2116CD0 == 0 )
      {
        v4 = v14;
        v6 = v10;
        v5 = v11;
        v1 = a1;
        dword_2116CD0 = v14;
        goto LABEL_2;
      }
      FT_Done_FreeType(v14);
      v14 = dword_2116CD0;
      if ( dword_2116CD0 != 0 )
      {
        v6 = v10;
        v5 = v11;
        v1 = a1;
        v4 = v14;
        goto LABEL_2;
      }
    }
    v6 = v10;
    v5 = v11;
    v1 = a1;
  }
LABEL_2:
  if ( FT_New_Memory_Face(v4, data, v6, v5, &v16) != 0 )
    return ((hb_blob_destroy(v13)), (int)0);
  FT_Select_Charmap(v16, 1970170211);
  v8 = *(uint32_t *)(v1 + 60);
  if ( v8 < 0 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ft.cc",
      496,
      "void hb_ft_font_set_funcs(hb_font_t*)",
      "font->y_scale >= 0");
    v8 = *(uint32_t *)(v1 + 60);
  }
  FT_Set_Char_Size(v16, *(uint32_t *)(v1 + 56), v8, 0, 0);
  v9 = v16;
  *(uint32_t *)(v16 + 44) = (uint32_t)(uintptr_t)(v13);
  *(uint32_t *)(v9 + 48) = (uint32_t)(uintptr_t)(sub_12C3590);
  return ((hb_font_set_funcs(v1, &dword_2036D20, v9, FT_Done_Face)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hb_ft_font_get_face  (binary VA: 0x12c3fd0)
// Original: hb_ft_font_get_face
// ----------------------------------------------------------------------------
int hb_ft_font_get_face(int a1)
{
  int (*v1)(int);
  int result;

  v1 = *(int (**)(int))(a1 + 80);
  if ( v1 == FT_Done_Face )
    return *(uint32_t *)(a1 + 76);
  result = 0;
  if ( (char *)v1 == (char *)(intptr_t)((&g4_noop_ret0)) )
    return *(uint32_t *)(a1 + 76);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_get_empty  (binary VA: 0x12c42a0)
// Original: hb_face_get_empty
// ----------------------------------------------------------------------------
void * hb_face_get_empty()
{
  return &unk_20C4660;
}

// ----------------------------------------------------------------------------
// Function: hb_face_create_for_tables  (binary VA: 0x12c42c0)
// Original: hb_face_create_for_tables
// ----------------------------------------------------------------------------
uint32_t * hb_face_create_for_tables(int a1, int a2, void (*a3)(int))
{
  uint32_t *v3;
  uint32_t *v4;

  if ( a1 != 0 && (v3 = (uint32_t *)(calloc(1u, 0x50u)), v4 = v3, v3 != nullptr) )
  {
    *v3 = 1;
    memset(v3 + 2, 0, 0x24u);
    v3[12] = a1;
    v3[13] = a2;
    v3[14] = (uint32_t)(uintptr_t)(a3);
    v3[16] = 0;
    v3[17] = -1;
  }
  else
  {
    if ( a3 != nullptr )
      a3(a2);
    return (uint32_t *)(hb_face_get_empty());
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hb_face_reference  (binary VA: 0x12c4370)
// Original: hb_face_reference
// ----------------------------------------------------------------------------
uint32_t * hb_face_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_destroy  (binary VA: 0x12c4390)
// Original: hb_face_destroy
// ----------------------------------------------------------------------------
void hb_face_destroy(int *a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  void (*v6)(int);
  int *ptr;
  int v8;
  int v9;
  char *v10;
  void (*v11)(int);

  if ( a1 != nullptr && *a1 != -1 )
  {
    v1 = *a1 - 1;
    *a1 = v1;
    if ( v1 == 0 )
    {
      v2 = a1[2];
      *a1 = -1;
      if ( v2 != 0 )
      {
LABEL_6:
        v3 = (int *)a1[4];
        v4 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v5 = *(int *)((char *)v3 + v4 + 4);
          v6 = *(void (**)(int))((char *)v3 + v4 + 8);
          v4 -= 12;
          a1[2] = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = a1[2];
            goto LABEL_6;
          }
        }
        if ( v3 != a1 + 5 )
          free(v3);
      }
      else
      {
        ptr = (int *)a1[4];
        if ( ptr != a1 + 5 )
          free(ptr);
      }
      v8 = a1[19];
      a1[4] = 0;
      a1[2] = 0;
      a1[3] = 0;
      if ( v8 != 0 )
      {
        while ( 1 )
        {
          v9 = *(uint32_t *)(v8 + 4);
          hb_shape_plan_destroy(*(char **)v8);
          free((void *)v8);
          if ( v9 == 0 )
            break;
          v8 = v9;
        }
      }
      v10 = (char *)a1[18];
      if ( (unsigned int)(uintptr_t)(v10 - 1) <= 0xFFFFFFFD && v10 != (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
        sub_12B3820(v10);
      v11 = (void (*)(int))a1[14];
      if ( v11 != nullptr )
        v11(a1[13]);
      free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_face_set_user_data  (binary VA: 0x12c44b0)
// Original: hb_face_set_user_data
// ----------------------------------------------------------------------------
int hb_face_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_get_user_data  (binary VA: 0x12c4500)
// Original: hb_face_get_user_data
// ----------------------------------------------------------------------------
int hb_face_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_face_make_immutable  (binary VA: 0x12c4530)
// Original: hb_face_make_immutable
// ----------------------------------------------------------------------------
uint32_t * hb_face_make_immutable(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( *a1 != -1 )
    a1[11] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_is_immutable  (binary VA: 0x12c4550)
// Original: hb_face_is_immutable
// ----------------------------------------------------------------------------
int hb_face_is_immutable(int a1)
{
  return *(uint32_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: hb_face_reference_table  (binary VA: 0x12c4560)
// Original: hb_face_reference_table
// ----------------------------------------------------------------------------
int hb_face_reference_table(int a1, int a2)
{
  int (*v2)(int, int, uint32_t);
  int result;

  if ( a1 == 0 )
    return (int)(uintptr_t)(hb_blob_get_empty());
  v2 = *(int (**)(int, int, uint32_t))(a1 + 48);
  if ( v2 == nullptr )
    return (int)(uintptr_t)(hb_blob_get_empty());
  result = v2(a1, a2, *(uint32_t *)(a1 + 52));
  if ( result == 0 )
    return (int)(uintptr_t)(hb_blob_get_empty());
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_reference_blob  (binary VA: 0x12c45b0)
// Original: hb_face_reference_blob
// ----------------------------------------------------------------------------
int hb_face_reference_blob(int a1)
{
  int (*v1)(int, uint32_t, uint32_t);
  int result;

  if ( a1 == 0 )
    return (int)(uintptr_t)(hb_blob_get_empty());
  v1 = *(int (**)(int, uint32_t, uint32_t))(a1 + 48);
  if ( v1 == nullptr )
    return (int)(uintptr_t)(hb_blob_get_empty());
  result = v1(a1, 0, *(uint32_t *)(a1 + 52));
  if ( result == 0 )
    return (int)(uintptr_t)(hb_blob_get_empty());
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_set_index  (binary VA: 0x12c4600)
// Original: hb_face_set_index
// ----------------------------------------------------------------------------
int hb_face_set_index(int a1, int a2)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(a1 + 44) == 0 )
    *(uint32_t *)(a1 + 60) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_get_index  (binary VA: 0x12c4620)
// Original: hb_face_get_index
// ----------------------------------------------------------------------------
int hb_face_get_index(int a1)
{
  return *(uint32_t *)(a1 + 60);
}

// ----------------------------------------------------------------------------
// Function: hb_face_set_upem  (binary VA: 0x12c4630)
// Original: hb_face_set_upem
// ----------------------------------------------------------------------------
int hb_face_set_upem(int a1, int a2)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(a1 + 44) == 0 )
    *(uint32_t *)(a1 + 64) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_get_upem  (binary VA: 0x12c4790)
// Original: hb_face_get_upem
// ----------------------------------------------------------------------------
int hb_face_get_upem(uint32_t *a1)
{
  int result;

  result = a1[16];
  if ( result == 0 )
  {
    sub_12C4650(a1);
    return a1[16];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_set_glyph_count  (binary VA: 0x12c47c0)
// Original: hb_face_set_glyph_count
// ----------------------------------------------------------------------------
int hb_face_set_glyph_count(int a1, int a2)
{
  int result;

  result = a1;
  if ( *(uint32_t *)(a1 + 44) == 0 )
    *(uint32_t *)(a1 + 68) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_get_glyph_count  (binary VA: 0x12c4920)
// Original: hb_face_get_glyph_count
// ----------------------------------------------------------------------------
int hb_face_get_glyph_count(uint32_t *a1)
{
  int result;

  result = a1[17];
  if ( result == -1 )
  {
    sub_12C47E0(a1);
    return a1[17];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_face_create  (binary VA: 0x12c4950)
// Original: hb_face_create
// ----------------------------------------------------------------------------
uint32_t * hb_face_create(int a1, int a2)
{
  uint32_t *v2;
  void *v4;
  int v5;
  uint32_t *v6;

  if ( a1 == 0 )
    return (uint32_t *)(hb_face_get_empty());
  if ( hb_blob_get_length(a1) == 0 )
    return (uint32_t *)(hb_face_get_empty());
  v4 = (void *)hb_blob_reference(a1);
  v5 = (int)(uintptr_t)(OT::Sanitizer_OT_OpenTypeFontFile_861a94::sanitize(v4));
  v6 = (uint32_t *)(malloc(8u));
  if ( v6 == nullptr )
    return (uint32_t *)(hb_face_get_empty());
  *v6 = v5;
  v6[1] = a2;
  v2 = hb_face_create_for_tables((int)(uintptr_t)(sub_12C4050), (int)(uintptr_t)(v6), (void (*)(int))sub_12C4010);
  hb_face_set_index((int)(uintptr_t)(v2), a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_OffsetTab_a89afb::sanitize  (binary VA: 0x12c4a00)
// Original: OT::ArrayOf<OT::OffsetTo<OT::OffsetTable,OT::IntType<unsigned int,4u>>,OT::IntType<unsigned int,4u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_OffsetTab_a89afb::sanitize(OT::ArrayOf<OT::OffsetTo<OT::OffsetTable, OT::IntType<unsigned int, 4u>>, OT::IntType<unsigned int, 4u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  unsigned int v5;
  uint8_t *v6;
  int v7;
  unsigned int v8;
  char v9;
  char *v10;
  char *v11;
  int v12;
  unsigned int v13;

  result = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v4 )
  {
    v5 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v5 && v5 - (unsigned int)(uintptr_t)(self) > 3 )
    {
      v13 = (*(uint8_t *)self << 24)
          + (*((uint8_t *)self + 1) << 16)
          + (*((uint8_t *)self + 2) << 8)
          + *((uint8_t *)self + 3);
      if ( v13 <= 0x3FFFFFFE && v5 - (unsigned int)(uintptr_t)(self) >= 4 * v13 )
      {
        if ( v13 == 0 )
          return 1;
        v6 = (uint8_t *)((char *)self + 4);
        if ( (unsigned int)(uintptr_t)(self) + 4 >= v4 && (unsigned int)(uintptr_t)(v6) <= v5 )
        {
          v12 = 0;
          if ( v5 - (unsigned int)(uintptr_t)(v6) > 3 )
          {
            while ( 1 )
            {
              v7 = (uint8_t)v6[3]
                 + ((uint8_t)v6[1] << 16)
                 + ((uint8_t)*v6 << 24)
                 + ((uint8_t)v6[2] << 8);
              if ( v7 != 0 )
              {
                v11 = &a3[v7];
                if ( (unsigned int)(uintptr_t)(&a3[v7]) >= v4 && (unsigned int)(uintptr_t)(v11) <= v5 && v5 - (unsigned int)(uintptr_t)(v11) > 0xB )
                {
                  v10 = v11 + 12;
                  if ( (unsigned int)(uintptr_t)(v11 + 12) >= v4
                    && (unsigned int)(uintptr_t)(v10) <= v5
                    && 16 * (unsigned int)(uint16_t)(((uint8_t)v11[4] << 8) + (uint8_t)v11[5]) <= v5 - (unsigned int)(uintptr_t)(v10) )
                  {
                    if ( ++v12 == v13 )
                      return 1;
                    goto LABEL_16;
                  }
                }
                v8 = *((uint32_t *)a2 + 4);
                v9 = *((uint8_t *)a2 + 12);
                if ( v8 > 0x63 )
                  return 0;
                *((uint32_t *)a2 + 4) = v8 + 1;
                if ( v9 == 0 )
                  return 0;
                *v6 = 0;
                v6[1] = 0;
                v6[2] = 0;
                v6[3] = 0;
              }
              if ( ++v12 == v13 )
                return 1;
LABEL_16:
              v4 = *((uint32_t *)a2 + 1);
              v6 = (uint8_t *)((char *)self + 4 * v12 + 4);
              if ( (unsigned int)(uintptr_t)(v6) >= v4 )
              {
                v5 = *((uint32_t *)a2 + 2);
                if ( (unsigned int)(uintptr_t)(v6) <= v5 && v5 - (unsigned int)(uintptr_t)(v6) > 3 )
                  continue;
              }
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
// Function: OT::Sanitizer_OT_OpenTypeFontFile_861a94::sanitize  (binary VA: 0x12c4bf0)
// Original: OT::Sanitizer<OT::OpenTypeFontFile>::sanitize
// ----------------------------------------------------------------------------
void * OT::Sanitizer_OT_OpenTypeFontFile_861a94::sanitize(void *a1)
{
  void *v1;
  void *v2;
  char *v3;
  char *v4;
  int v6;
  char v7;
  char *v8;
  int v9;
  char *v10;
  int v11;
  int16_t v12;
  uint8_t v13;
  unsigned int v14;
  char *v15;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_data;
  typedef char *_g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef void *_g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_data)) > _g4_s2 ? (20u + sizeof(_g4_t_data)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v22)) > _g4_s6 ? (36u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_data &data = *reinterpret_cast<_g4_t_data *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);

  v1 = a1;
  v17 = 0;
  data = nullptr;
  v19 = nullptr;
  v21 = 0;
  v2 = (void *)hb_blob_reference(a1);
  v22 = v2;
  v20 = 0;
  while ( 1 )
  {
    data = (char *)hb_blob_get_data(v2, 0);
    v3 = &data[hb_blob_get_length(v22)];
    v4 = data;
    v19 = v3;
    v21 = 0;
    v17 = 0;
    if ( data == nullptr )
      goto LABEL_12;
    if ( v3 < data || (unsigned int)(v3 - data) <= 3 )
      goto LABEL_4;
    v6 = (uint8_t)data[3]
       + ((uint8_t)data[1] << 16)
       + ((uint8_t)*data << 24)
       + ((uint8_t)data[2] << 8);
    if ( v6 == 1953658213 )
      goto LABEL_15;
    if ( (unsigned int)v6 <= 0x74727565 )
    {
      if ( v6 != 0x10000 && v6 != 1330926671 )
        goto LABEL_12;
      goto LABEL_15;
    }
    if ( v6 != 1953784678 )
    {
      if ( v6 != 1954115633 )
        goto LABEL_12;
LABEL_15:
      v7 = 0;
      if ( v3 >= data && (unsigned int)(v3 - data) > 0xB )
      {
        v8 = data + 12;
        if ( data < data + 12 && v3 >= v8 )
          v7 = 16 * (unsigned int)(uint16_t)(((uint8_t)data[4] << 8) + (uint8_t)data[5]) <= v3 - v8;
      }
      v9 = 0;
      goto LABEL_19;
    }
    v10 = data + 4;
    if ( data >= data + 4 || v3 < v10 || (unsigned int)(v3 - v10) <= 3 )
      goto LABEL_4;
    if ( (uint16_t)(((uint8_t)data[4] << 8) + (uint8_t)data[5] - 1) > 1u )
      goto LABEL_12;
    v7 = OT::ArrayOf_OT_OffsetTo_OT_OffsetTab_a89afb::sanitize(
           (OT::ArrayOf<OT::OffsetTo<OT::OffsetTable, OT::IntType<unsigned int, 4u>>, OT::IntType<unsigned int, 4u>> *)(data + 8),
           (OT::hb_sanitize_context_t::Self *)&v17,
           data);
    v9 = v21;
LABEL_19:
    if ( v7 != 0 )
      break;
    if ( v9 == 0 )
      goto LABEL_4;
    if ( v20 != 0 )
      goto LABEL_4;
    data = (char *)hb_blob_get_data_writable(a1, 0);
    v19 = &data[hb_blob_get_length(a1)];
    if ( data == nullptr )
      goto LABEL_4;
    v20 = 1;
    v2 = v22;
  }
  if ( v9 == 0 )
    goto LABEL_12;
  v21 = 0;
  if ( v4 < data || v4 > v19 || (unsigned int)(v19 - v4) <= 3 )
    goto LABEL_47;
  v11 = (uint8_t)v4[3]
      + ((uint8_t)v4[1] << 16)
      + ((uint8_t)*v4 << 24)
      + ((uint8_t)v4[2] << 8);
  if ( v11 == 1953658213 )
  {
LABEL_39:
    v7 = 0;
    if ( data <= v4 && v19 >= v4 && (unsigned int)(v19 - v4) > 0xB )
    {
      v12 = (uint8_t)v4[4];
      v13 = v4[5];
      v14 = (unsigned int)(uintptr_t)(v4 + 12);
      if ( (unsigned int)(uintptr_t)(data) <= v14 && (unsigned int)(uintptr_t)(v19) >= v14 )
        v7 = 16 * (unsigned int)(uint16_t)((v12 << 8) + v13) <= (unsigned int)(uintptr_t)(&v19[-v14]);
    }
    goto LABEL_45;
  }
  if ( (unsigned int)v11 > 0x74727565 )
  {
    if ( v11 != 1953784678 )
    {
      if ( v11 != 1954115633 )
        goto LABEL_12;
      goto LABEL_39;
    }
    v15 = v4 + 4;
    if ( data <= v4 + 4 && v19 >= v15 && (unsigned int)(v19 - v15) > 3 )
    {
      if ( (uint16_t)(((uint8_t)v4[4] << 8) + (uint8_t)v4[5] - 1) <= 1u )
      {
        v7 = OT::ArrayOf_OT_OffsetTo_OT_OffsetTab_a89afb::sanitize(
               (OT::ArrayOf<OT::OffsetTo<OT::OffsetTable, OT::IntType<unsigned int, 4u>>, OT::IntType<unsigned int, 4u>> *)(v4 + 8),
               (OT::hb_sanitize_context_t::Self *)&v17,
               v4);
        if ( v21 != 0 )
        {
LABEL_4:
          hb_blob_destroy(v22);
          v22 = nullptr;
          v19 = nullptr;
          data = nullptr;
LABEL_5:
          hb_blob_destroy(a1);
          return (void *)hb_blob_get_empty();
        }
      }
LABEL_45:
      v16 = v7;
      hb_blob_destroy(v22);
      v22 = nullptr;
      v19 = nullptr;
      data = nullptr;
      if ( v16 != 0 )
        return v1;
      goto LABEL_5;
    }
LABEL_47:
    v7 = 0;
    goto LABEL_45;
  }
  if ( v11 == 0x10000 || v11 == 1330926671 )
    goto LABEL_39;
LABEL_12:
  hb_blob_destroy(v22);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hb_blob_destroy  (binary VA: 0x12c6230)
// Original: hb_blob_destroy
// ----------------------------------------------------------------------------
void hb_blob_destroy(int *a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  void (*v6)(int);
  int *ptr;
  void (*v8)(int);

  if ( a1 != nullptr && *a1 != -1 )
  {
    v1 = *a1 - 1;
    *a1 = v1;
    if ( v1 == 0 )
    {
      v2 = a1[2];
      *a1 = -1;
      if ( v2 != 0 )
      {
LABEL_6:
        v3 = (int *)a1[4];
        v4 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v5 = *(int *)((char *)v3 + v4 + 4);
          v6 = *(void (**)(int))((char *)v3 + v4 + 8);
          v4 -= 12;
          a1[2] = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = a1[2];
            goto LABEL_6;
          }
        }
        if ( v3 != a1 + 5 )
          free(v3);
      }
      else
      {
        ptr = (int *)a1[4];
        if ( ptr != a1 + 5 )
          free(ptr);
      }
      v8 = (void (*)(int))a1[16];
      a1[4] = 0;
      a1[2] = 0;
      a1[3] = 0;
      if ( v8 != nullptr )
      {
        v8(a1[15]);
        a1[15] = 0;
        a1[16] = 0;
      }
      free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_blob_get_empty  (binary VA: 0x12c6320)
// Original: hb_blob_get_empty
// ----------------------------------------------------------------------------
void * hb_blob_get_empty()
{
  return &unk_1CF7420;
}

// ----------------------------------------------------------------------------
// Function: hb_blob_create  (binary VA: 0x12c6340)
// Original: hb_blob_create
// ----------------------------------------------------------------------------
int * hb_blob_create(void *src, int n, int a3, int a4, void (*a5)(int))
{
  int *v5;
  int *v7;
  bool v8;
  void *v9;

  if ( n == 0 || (v7 = (int *)calloc(1u, 0x44u), v5 = v7, v7 == nullptr) )
  {
    if ( a5 != nullptr )
      a5(a4);
    return (int *)hb_blob_get_empty();
  }
  *v7 = 1;
  memset(v7 + 2, 0, 0x24u);
  v7[12] = (int)(uintptr_t)(src);
  v7[14] = a3;
  v7[15] = a4;
  v7[13] = n;
  v7[16] = (int)(uintptr_t)(a5);
  if ( a3 != 0 )
    return v5;
  v8 = *((uint8_t *)v7 + 44) == 0;
  v7[14] = 1;
  if ( !v8 || (v9 = malloc(n)) == nullptr )
  {
    hb_blob_destroy(v5);
    return (int *)hb_blob_get_empty();
  }
  memcpy(v9, src, n);
  if ( a5 != nullptr )
  {
    a5(a4);
    v5[15] = 0;
    v5[16] = 0;
  }
  v5[14] = 2;
  v5[12] = (int)(uintptr_t)(v9);
  v5[15] = (int)(uintptr_t)(v9);
  v5[16] = (int)(uintptr_t)(&free);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hb_blob_reference  (binary VA: 0x12c6470)
// Original: hb_blob_reference
// ----------------------------------------------------------------------------
uint32_t * hb_blob_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_blob_set_user_data  (binary VA: 0x12c6490)
// Original: hb_blob_set_user_data
// ----------------------------------------------------------------------------
int hb_blob_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_blob_get_user_data  (binary VA: 0x12c64e0)
// Original: hb_blob_get_user_data
// ----------------------------------------------------------------------------
int hb_blob_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_blob_make_immutable  (binary VA: 0x12c6510)
// Original: hb_blob_make_immutable
// ----------------------------------------------------------------------------
int hb_blob_make_immutable(int a1)
{
  int result;

  result = a1;
  if ( *(uint32_t *)a1 != -1 )
    *(uint8_t *)(a1 + 44) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_blob_create_sub_blob  (binary VA: 0x12c6520)
// Original: hb_blob_create_sub_blob
// ----------------------------------------------------------------------------
int * hb_blob_create_sub_blob(uint32_t *a1, unsigned int a2, unsigned int a3)
{
  int v3;
  uint32_t *v5;

  v3 = a3;
  if ( a3 == 0 || a1[13] <= a2 )
    return (int *)hb_blob_get_empty();
  hb_blob_make_immutable((int)(uintptr_t)(a1));
  v5 = hb_blob_reference(a1);
  if ( a3 > a1[13] - a2 )
    v3 = a1[13] - a2;
  return hb_blob_create((void *)(a1[12] + a2), v3, 1, (int)(uintptr_t)(v5), (void (*)(int))hb_blob_destroy);
}

// ----------------------------------------------------------------------------
// Function: hb_blob_is_immutable  (binary VA: 0x12c65c0)
// Original: hb_blob_is_immutable
// ----------------------------------------------------------------------------
int hb_blob_is_immutable(int a1)
{
  return *(uint8_t *)(a1 + 44);
}

// ----------------------------------------------------------------------------
// Function: hb_blob_get_length  (binary VA: 0x12c65d0)
// Original: hb_blob_get_length
// ----------------------------------------------------------------------------
int hb_blob_get_length(int a1)
{
  return *(uint32_t *)(a1 + 52);
}

// ----------------------------------------------------------------------------
// Function: hb_blob_get_data  (binary VA: 0x12c65e0)
// Original: hb_blob_get_data
// ----------------------------------------------------------------------------
int hb_blob_get_data(int a1, uint32_t *a2)
{
  if ( a2 != nullptr )
    *a2 = *(uint32_t *)(a1 + 52);
  return *(uint32_t *)(a1 + 48);
}

// ----------------------------------------------------------------------------
// Function: hb_blob_get_data_writable  (binary VA: 0x12c6600)
// Original: hb_blob_get_data_writable
// ----------------------------------------------------------------------------
int hb_blob_get_data_writable(int a1, uint32_t *a2)
{
  int v2;
  void *v3;
  void (*v4)(uint32_t);
  int result;
  size_t size;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    v2 = *(uint32_t *)(a1 + 56);
    if ( v2 == 2 )
    {
LABEL_9:
      if ( a2 != nullptr )
        *a2 = *(uint32_t *)(a1 + 52);
      return *(uint32_t *)(a1 + 48);
    }
    if ( v2 == 3 )
      *(uint32_t *)(a1 + 56) = 1;
    size = *(uint32_t *)(a1 + 52);
    v3 = malloc(size);
    if ( v3 != nullptr )
    {
      memcpy(v3, *(const void **)(a1 + 48), size);
      v4 = *(void (**)(uint32_t))(a1 + 64);
      if ( v4 != nullptr )
      {
        v4(*(uint32_t *)(a1 + 60));
        *(uint32_t *)(a1 + 60) = 0;
        *(uint32_t *)(a1 + 64) = 0;
      }
      *(uint32_t *)(a1 + 56) = 2;
      *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(&free);
      goto LABEL_9;
    }
  }
  result = 0;
  if ( a2 != nullptr )
    *a2 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_get_empty  (binary VA: 0x12c66f0)
// Original: hb_set_get_empty
// ----------------------------------------------------------------------------
void * hb_set_get_empty()
{
  return &unk_1CF7480;
}

// ----------------------------------------------------------------------------
// Function: hb_set_create  (binary VA: 0x12c6710)
// Original: hb_set_create
// ----------------------------------------------------------------------------
char * hb_set_create()
{
  char *v0;
  char *v1;

  v0 = (char *)calloc(1u, 0x2030u);
  v1 = v0;
  if ( v0 == nullptr )
    return (char *)hb_set_get_empty();
  *(uint32_t *)v0 = 1;
  memset(v0 + 8, 0, 0x24u);
  v0[44] = 0;
  memset(v0 + 48, 0, 0x2000u);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_reference  (binary VA: 0x12c67a0)
// Original: hb_set_reference
// ----------------------------------------------------------------------------
uint32_t * hb_set_reference(uint32_t *a1)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr && *a1 != -1 )
    ++*a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_destroy  (binary VA: 0x12c67c0)
// Original: hb_set_destroy
// ----------------------------------------------------------------------------
void hb_set_destroy(int *a1)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  void (*v6)(int);
  int *ptr;

  if ( a1 != nullptr && *a1 != -1 )
  {
    v1 = *a1 - 1;
    *a1 = v1;
    if ( v1 == 0 )
    {
      v2 = a1[2];
      *a1 = -1;
      if ( v2 != 0 )
      {
LABEL_6:
        v3 = (int *)a1[4];
        v4 = 12 * v2 - 12;
        while ( v2 != 0 )
        {
          --v2;
          v5 = *(int *)((char *)v3 + v4 + 4);
          v6 = *(void (**)(int))((char *)v3 + v4 + 8);
          v4 -= 12;
          a1[2] = v2;
          if ( v6 != nullptr )
          {
            v6(v5);
            v2 = a1[2];
            goto LABEL_6;
          }
        }
        if ( v3 != a1 + 5 )
          free(v3);
      }
      else
      {
        ptr = (int *)a1[4];
        if ( ptr != a1 + 5 )
          free(ptr);
      }
      a1[4] = 0;
      a1[2] = 0;
      a1[3] = 0;
      free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_set_user_data  (binary VA: 0x12c6890)
// Original: hb_set_set_user_data
// ----------------------------------------------------------------------------
int hb_set_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 != -1 )
    return (uint8_t)sub_12AE8B0(a1 + 1, a2, a3, a4, a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_get_user_data  (binary VA: 0x12c68e0)
// Original: hb_set_get_user_data
// ----------------------------------------------------------------------------
int hb_set_get_user_data(uint32_t *a1, int a2)
{
  if ( a1 == nullptr || *a1 == -1 )
    return 0;
  else
    return sub_12AEB30((int)(uintptr_t)(a1 + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: hb_set_allocation_successful  (binary VA: 0x12c6910)
// Original: hb_set_allocation_successful
// ----------------------------------------------------------------------------
int hb_set_allocation_successful(int a1)
{
  return *(uint8_t *)(a1 + 44) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_clear  (binary VA: 0x12c6920)
// Original: hb_set_clear
// ----------------------------------------------------------------------------
void * hb_set_clear(uint8_t *a1)
{
  void *result;

  result = a1;
  if ( *(uint32_t *)a1 != -1 )
  {
    a1[44] = 0;
    return memset(a1 + 48, 0, 0x2000u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_is_empty  (binary VA: 0x12c6960)
// Original: hb_set_is_empty
// ----------------------------------------------------------------------------
int16_t hb_set_is_empty(int a1)
{
  int i;

  for ( i = 0; i != 2048; ++i )
  {
    if ( *(uint32_t *)(a1 + 4 * i + 48) != 0 )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_has  (binary VA: 0x12c6990)
// Original: hb_set_has
// ----------------------------------------------------------------------------
bool hb_set_has(int a1, unsigned int a2)
{
  return a2 <= 0xFFFF && ((1 << a2) & *(uint32_t *)(a1 + 4 * (a2 >> 5) + 48)) != 0;
}

// ----------------------------------------------------------------------------
// Function: hb_set_add  (binary VA: 0x12c69c0)
// Original: hb_set_add
// ----------------------------------------------------------------------------
int hb_set_add(int a1, unsigned int a2)
{
  int result;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) == 0 && a2 <= 0xFFFF )
    *(uint32_t *)(a1 + 4 * (a2 >> 5) + 48) |= 1 << a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_add_range  (binary VA: 0x12c6a00)
// Original: hb_set_add_range
// ----------------------------------------------------------------------------
unsigned int hb_set_add_range(int a1, unsigned int a2, int a3)
{
  unsigned int v3;
  unsigned int result;

  v3 = a2;
  if ( *(uint8_t *)(a1 + 44) == 0 && a2 < a3 + 1 )
  {
    do
    {
      if ( v3 <= 0xFFFF )
      {
        result = v3 >> 5;
        *(uint32_t *)(a1 + 4 * (v3 >> 5) + 48) |= 1 << v3;
      }
      ++v3;
    }
    while ( a3 + 1 > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_del  (binary VA: 0x12c6a50)
// Original: hb_set_del
// ----------------------------------------------------------------------------
int hb_set_del(int a1, unsigned int a2)
{
  int result;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) == 0 && a2 <= 0xFFFF )
    *(uint32_t *)(a1 + 4 * (a2 >> 5) + 48) &= ~(1 << a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_del_range  (binary VA: 0x12c6a90)
// Original: hb_set_del_range
// ----------------------------------------------------------------------------
unsigned int hb_set_del_range(int a1, unsigned int a2, int a3)
{
  unsigned int v3;
  unsigned int result;

  v3 = a2;
  if ( *(uint8_t *)(a1 + 44) == 0 && a2 < a3 + 1 )
  {
    do
    {
      if ( v3 <= 0xFFFF )
      {
        result = v3 >> 5;
        *(uint32_t *)(a1 + 4 * (v3 >> 5) + 48) &= ~(1 << v3);
      }
      ++v3;
    }
    while ( a3 + 1 > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_set_is_equal  (binary VA: 0x12c6ae0)
// Original: hb_set_is_equal
// ----------------------------------------------------------------------------
int16_t hb_set_is_equal(int a1, int a2)
{
  int i;

  for ( i = 0; i != 2048; ++i )
  {
    if ( *(uint32_t *)(a1 + 4 * i + 48) != *(uint32_t *)(a2 + 4 * i + 48) )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_set  (binary VA: 0x12c6b10)
// Original: hb_set_set
// ----------------------------------------------------------------------------
void hb_set_set(int a1, int a2)
{
  int i;
  int j;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    if ( a2 + 64 < (unsigned int)(a1 + 48) || a1 + 64 < (unsigned int)(a2 + 48) )
    {
      for ( i = 0; i != 0x2000; i += 16 )
        *(__m128i *)(a1 + i + 48) = *(__m128i *)(a2 + i + 48);
    }
    else
    {
      for ( j = 0; j != 2048; ++j )
        *(uint32_t *)(a1 + 4 * j + 48) = *(uint32_t *)(a2 + 4 * j + 48);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_union  (binary VA: 0x12c6b70)
// Original: hb_set_union
// ----------------------------------------------------------------------------
void hb_set_union(int a1, int a2)
{
  int i;
  int j;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    if ( a2 + 64 < (unsigned int)(a1 + 48) || a1 + 64 < (unsigned int)(a2 + 48) )
    {
      for ( i = 0; i != 0x2000; i += 16 )
        *(__m128i *)(a1 + i + 48) = _mm_or_si128(*(__m128i *)(a1 + i + 48), *(__m128i *)(a2 + i + 48));
    }
    else
    {
      for ( j = 0; j != 2048; ++j )
        *(uint32_t *)(a1 + 4 * j + 48) |= *(uint32_t *)(a2 + 4 * j + 48);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_intersect  (binary VA: 0x12c6be0)
// Original: hb_set_intersect
// ----------------------------------------------------------------------------
void hb_set_intersect(int a1, int a2)
{
  int i;
  int j;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    if ( a2 + 64 < (unsigned int)(a1 + 48) || a1 + 64 < (unsigned int)(a2 + 48) )
    {
      for ( i = 0; i != 0x2000; i += 16 )
        *(__m128i *)(a1 + i + 48) = _mm_and_si128(*(__m128i *)(a1 + i + 48), *(__m128i *)(a2 + i + 48));
    }
    else
    {
      for ( j = 0; j != 2048; ++j )
        *(uint32_t *)(a1 + 4 * j + 48) &= *(uint32_t *)(a2 + 4 * j + 48);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_subtract  (binary VA: 0x12c6c50)
// Original: hb_set_subtract
// ----------------------------------------------------------------------------
void hb_set_subtract(int a1, int a2)
{
  int i;
  int j;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    if ( a2 + 64 < (unsigned int)(a1 + 48) || a1 + 64 < (unsigned int)(a2 + 48) )
    {
      for ( i = 0; i != 0x2000; i += 16 )
        *(__m128i *)(a1 + i + 48) = _mm_andnot_si128(*(__m128i *)(a2 + i + 48), *(__m128i *)(a1 + i + 48));
    }
    else
    {
      for ( j = 0; j != 2048; ++j )
        *(uint32_t *)(a1 + 4 * j + 48) &= ~*(uint32_t *)(a2 + 4 * j + 48);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_symmetric_difference  (binary VA: 0x12c6cd0)
// Original: hb_set_symmetric_difference
// ----------------------------------------------------------------------------
void hb_set_symmetric_difference(int a1, int a2)
{
  int i;
  int j;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    if ( a2 + 64 < (unsigned int)(a1 + 48) || a1 + 64 < (unsigned int)(a2 + 48) )
    {
      for ( i = 0; i != 0x2000; i += 16 )
        *(__m128i *)(a1 + i + 48) = _mm_xor_si128(*(__m128i *)(a1 + i + 48), *(__m128i *)(a2 + i + 48));
    }
    else
    {
      for ( j = 0; j != 2048; ++j )
        *(uint32_t *)(a1 + 4 * j + 48) ^= *(uint32_t *)(a2 + 4 * j + 48);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_invert  (binary VA: 0x12c6d40)
// Original: hb_set_invert
// ----------------------------------------------------------------------------
void hb_set_invert(int a1)
{
  unsigned int v1;
  unsigned int i;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    v1 = -((uint8_t)(a1 & 0xF) >> 2) & 3;
    if ( v1 != 0 )
    {
      v11 = 0;
      for ( i = 0; ; v11 = i )
      {
        *(uint32_t *)(a1 + 4 * i + 48) = ~*(uint32_t *)(a1 + 4 * i + 48);
        ++i;
        v10 = 2047 - v11;
        if ( v1 <= i )
          break;
      }
    }
    else
    {
      v10 = 2048;
      i = 0;
    }
    v12 = 2048 - v1;
    v9 = (2048 - v1) >> 2;
    v8 = 4 * v9;
    if ( 4 * v9 == 0 )
      goto LABEL_10;
    v3 = a1 + 4 * v1 + 48;
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      *(__m128i *)(v3 + v4) = _mm_xor_si128(*(__m128i *)(v3 + v4), g4_m128_from<__m128i>(-1LL));
      v4 += 16;
    }
    while ( v5 < v9 );
    v10 -= v8;
    i += v8;
    if ( v12 != v8 )
    {
LABEL_10:
      v6 = 0;
      v7 = a1 + 4 * i;
      do
      {
        *(uint32_t *)(v7 + v6 + 48) = ~*(uint32_t *)(v7 + v6 + 48);
        v6 += 4;
      }
      while ( v6 != 4 * v10 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hb_set_get_population  (binary VA: 0x12c6e40)
// Original: hb_set_get_population
// ----------------------------------------------------------------------------
int hb_set_get_population(int a1)
{
  int v1;
  int i;
  int v3;

  v1 = 0;
  for ( i = 0; i != 2048; ++i )
  {
    v3 = *(uint32_t *)(a1 + 4 * i + 48);
    v1 += _popcountsi2(v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_get_min  (binary VA: 0x12c6e90)
// Original: hb_set_get_min
// ----------------------------------------------------------------------------
int hb_set_get_min(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  while ( 1 )
  {
    v2 = *(uint32_t *)(a1 + 4 * v1 + 48);
    if ( v2 != 0 )
      break;
LABEL_7:
    if ( ++v1 == 2048 )
      return -1;
  }
  v3 = 0;
  while ( (v2 & (1 << v3)) == 0 )
  {
    if ( ++v3 == 32 )
      goto LABEL_7;
  }
  return v3 + 32 * v1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_get_max  (binary VA: 0x12c6ef0)
// Original: hb_set_get_max
// ----------------------------------------------------------------------------
int hb_set_get_max(int a1)
{
  int i;
  int v2;
  int v3;
  int v5;

  v5 = 2048;
  for ( i = 2048; ; v5 = i )
  {
    --i;
    v2 = *(uint32_t *)(a1 + 4 * i + 48);
    v3 = 32;
    if ( v2 != 0 )
      break;
LABEL_3:
    if ( i == 0 )
      return -1;
  }
  while ( (v2 & (1 << (v3 - 1))) == 0 )
  {
    if ( v3 == 1 )
      goto LABEL_3;
    --v3;
  }
  return v3 + 32 * v5 - 33;
}

// ----------------------------------------------------------------------------
// Function: hb_set_next  (binary VA: 0x12c6f60)
// Original: hb_set_next
// ----------------------------------------------------------------------------
int hb_set_next(int a1, unsigned int *a2)
{
  unsigned int v2;

  if ( *a2 == -1 )
    return (uint8_t)sub_12C711E();
  v2 = *a2 + 1;
  if ( v2 > 0xFFFF )
  {
LABEL_7:
    *a2 = 0xFFFFFFFF;
    return 0;
  }
  if ( ((1 << v2) & *(uint32_t *)(a1 + 4 * (v2 >> 5) + 48)) == 0 )
  {
    while ( ++v2 != 0x10000 )
    {
      if ( ((1 << v2) & *(uint32_t *)(a1 + 4 * (v2 >> 5) + 48)) != 0 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_8:
  *a2 = v2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hb_set_next_range  (binary VA: 0x12c6fe0)
// Original: hb_set_next_range
// ----------------------------------------------------------------------------
int hb_set_next_range(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int i;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  v8 = *a3;
  if ( *a3 == -1 )
  {
    if ( (uint8_t)sub_12C711E() != 0 )
    {
      i = v8;
      goto LABEL_9;
    }
LABEL_7:
    *a2 = 0xFFFFFFFF;
    *a3 = 0xFFFFFFFF;
    return 0;
  }
  i = *a3 + 1;
  if ( i > 0xFFFF )
    goto LABEL_7;
  if ( ((1 << i) & *(uint32_t *)(a1 + 4 * (i >> 5) + 48)) == 0 )
  {
    while ( ++i != 0x10000 )
    {
      if ( ((1 << i) & *(uint32_t *)(a1 + 4 * (i >> 5) + 48)) != 0 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_8:
  v8 = i;
LABEL_9:
  *a2 = i;
  *a3 = i;
  if ( i == -1 )
    goto LABEL_20;
LABEL_10:
  v5 = i + 1;
  v7 = v5;
  v6 = v5;
  if ( v5 <= 0xFFFF )
  {
    if ( ((1 << v5) & *(uint32_t *)(a1 + 4 * (v5 >> 5) + 48)) != 0 )
    {
LABEL_17:
      v8 = v6;
      for ( i = v7; i == v6; i = *a3 + 1 )
      {
        *a3 = v6;
        if ( i != -1 )
          goto LABEL_10;
LABEL_20:
        if ( (uint8_t)sub_12C711E() == 0 )
          break;
        v6 = v8;
      }
    }
    else
    {
      while ( ++v5 != 0x10000 )
      {
        if ( ((1 << v5) & *(uint32_t *)(a1 + 4 * (v5 >> 5) + 48)) != 0 )
        {
          v6 = v5;
          goto LABEL_17;
        }
      }
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_has_glyph_classes  (binary VA: 0x12c8980)
// Original: hb_ot_layout_has_glyph_classes
// ----------------------------------------------------------------------------
bool hb_ot_layout_has_glyph_classes(int a1)
{
  uint8_t *v1;

  if ( sub_12C7690(a1) )
    v1 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 12);
  else
    v1 = (uint8_t *)&unk_2116E00;
  return v1[5] + (v1[4] << 8) != 0;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_get_glyphs_in_class  (binary VA: 0x12c89e0)
// Original: hb_ot_layout_get_glyphs_in_class
// ----------------------------------------------------------------------------
unsigned int hb_ot_layout_get_glyphs_in_class(int a1, int a2, hb_set_t *a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  unsigned int result;
  uint8_t v8;
  int16_t v9; // di
  int v10;
  unsigned int v11;
  int16_t v12;
  uint8_t *v13;
  int v14;

  if ( sub_12C7690(a1) )
    v3 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 12);
  else
    v3 = (uint8_t *)&unk_2116E00;
  v4 = (uint8_t *)&unk_2116E00;
  v5 = (uint16_t)(v3[5] + (v3[4] << 8));
  v6 = &v3[v5];
  if ( v5 != 0 )
    v4 = v6;
  result = v4[1] + (*v4 << 8);
  if ( (uint16_t)result == 1 )
  {
    v8 = v4[5];
    result = v4[4];
    v9 = v4[4] << 8;
    v10 = (uint16_t)(v9 + v8);
    if ( v9 + v8 != 0 )
    {
      v11 = 0;
      v14 = v10 - 1;
      v12 = v4[4];
      while ( 1 )
      {
        v13 = (uint8_t *)&unk_2116E00;
        if ( v11 < (uint16_t)(v8 + (v12 << 8)) )
          v13 = &v4[2 * v11 + 6];
        result = (uint16_t)((*v13 << 8) + v13[1]);
        if ( a2 == result )
          result = (unsigned int)(uintptr_t)(hb_set_t::add(a3, v11 + (uint16_t)(v4[3] + (v4[2] << 8))));
        if ( v11 == v14 )
          break;
        v12 = v4[4];
        ++v11;
        v8 = v4[5];
      }
    }
  }
  else if ( (uint16_t)result == 2 )
  {
    return sub_12C8500((int)(uintptr_t)(v4), a3, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_table_get_script_tags  (binary VA: 0x12c8b20)
// Original: hb_ot_layout_table_get_script_tags
// ----------------------------------------------------------------------------
int hb_ot_layout_table_get_script_tags(int a1, int a2, unsigned int a3, unsigned int *a4, int a5)
{
  unsigned int v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint16_t v9;
  unsigned int v10;
  uint8_t *v11;
  int i;
  int v13;
  int v14;
  bool v16;
  bool v17;
  uint8_t *v18;

  v5 = a3;
  if ( a2 != 1196445523 )
  {
    if ( a2 == 1196643650 )
    {
      v16 = sub_12C7690(a1);
      v5 = a3;
      if ( v16 )
      {
        v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
        goto LABEL_4;
      }
    }
LABEL_3:
    v6 = (uint8_t *)&unk_2116E00;
    goto LABEL_4;
  }
  v17 = sub_12C7690(a1);
  v5 = a3;
  if ( !v17 )
    goto LABEL_3;
  v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
LABEL_4:
  v7 = (uint16_t)(v6[5] + (v6[4] << 8));
  v8 = &v6[v7];
  if ( v7 == 0 )
    v8 = (uint8_t *)&unk_2116E00;
  v18 = v8;
  if ( a4 != nullptr )
  {
    v9 = v8[1] + (*v8 << 8);
    if ( v5 > v9 )
    {
      *a4 = 0;
    }
    else
    {
      v10 = v9 - v5;
      if ( *a4 <= v10 )
        v10 = *a4;
      *a4 = v10;
      v11 = &v8[6 * v5 + 2];
      if ( v10 != 0 )
      {
        for ( i = 0; i != v10; ++i )
        {
          v13 = (v11[1] << 16) + (*v11 << 24) + (v11[2] << 8);
          v14 = v11[3];
          v11 += 6;
          *(uint32_t *)(a5 + 4 * i) = v14 + v13;
        }
      }
    }
  }
  return (uint16_t)(v18[1] + (*v18 << 8));
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_table_find_script  (binary VA: 0x12c8c70)
// Original: hb_ot_layout_table_find_script
// ----------------------------------------------------------------------------
int hb_ot_layout_table_find_script(int a1, int a2, unsigned int a3, unsigned int *a4)
{
  OT::GSUBGPOS::Self *v4;
  int v5;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v4 = *(OT::GSUBGPOS::Self **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_4;
    }
  }
  else if ( a2 == 1196643650 && sub_12C7690(a1) )
  {
    v4 = *(OT::GSUBGPOS::Self **)(*(uint32_t *)(a1 + 72) + 16);
    goto LABEL_4;
  }
  v4 = (OT::GSUBGPOS::Self *)&unk_2116E00;
LABEL_4:
  v5 = 1;
  if ( (uint8_t)OT::GSUBGPOS::find_script_index(v4, a3, a4) == 0 )
  {
    LOWORD(v5) = 0;
    if ( (uint8_t)OT::GSUBGPOS::find_script_index(v4, 0x44464C54u, a4) == 0
      && (uint8_t)OT::GSUBGPOS::find_script_index(v4, 0x64666C74u, a4) == 0
      && (uint8_t)OT::GSUBGPOS::find_script_index(v4, 0x6C61746Eu, a4) == 0
      && a4 != nullptr )
    {
      *a4 = 0xFFFF;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_table_choose_script  (binary VA: 0x12c8d90)
// Original: hb_ot_layout_table_choose_script
// ----------------------------------------------------------------------------
int hb_ot_layout_table_choose_script(int a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5)
{
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int result;
  uint8_t *v11;
  unsigned int v12;
  uint8_t *v13;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v11 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_26;
    }
  }
  else
  {
    if ( a2 != 1196643650 )
    {
      v13 = (uint8_t *)&unk_2116E00;
      goto LABEL_4;
    }
    if ( sub_12C7690(a1) )
    {
      v11 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
      goto LABEL_26;
    }
  }
  v11 = (uint8_t *)&unk_2116E00;
LABEL_26:
  v13 = v11;
LABEL_4:
  v12 = *a3;
  if ( *a3 != 0 )
  {
    while ( 1 )
    {
      v5 = &v13[(uint16_t)(v13[5] + (v13[4] << 8))];
      if ( v13[5] + (v13[4] << 8) == 0 )
        v5 = (uint8_t *)&unk_2116E00;
      v6 = (uint16_t)((*v5 << 8) + v5[1]) - 1;
      if ( (*v5 << 8) + v5[1] != 0 )
        break;
LABEL_13:
      if ( a4 != nullptr )
        *a4 = 0xFFFF;
      v12 = *++a3;
      if ( *a3 == 0 )
        goto LABEL_16;
    }
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (v7 + v6) >> 1;
        v9 = v5[6 * v8 + 5] + (v5[6 * v8 + 3] << 16) + (v5[6 * v8 + 2] << 24) + (v5[6 * v8 + 4] << 8);
        if ( v9 <= v12 )
          break;
        v6 = v8 - 1;
        if ( v8 - 1 < v7 )
          goto LABEL_13;
      }
      if ( v9 == v12 )
        break;
      v7 = v8 + 1;
      if ( v6 < v8 + 1 )
        goto LABEL_13;
    }
    if ( a4 != nullptr )
      *a4 = v8;
    result = 1;
    if ( a5 != nullptr )
      *a5 = *a3;
  }
  else
  {
LABEL_16:
    if ( (uint8_t)OT::GSUBGPOS::find_script_index((OT::GSUBGPOS::Self *)v13, 0x44464C54u, a4) != 0 )
    {
      result = 0;
      if ( a5 != nullptr )
        *a5 = 1145457748;
    }
    else if ( (uint8_t)OT::GSUBGPOS::find_script_index((OT::GSUBGPOS::Self *)v13, 0x64666C74u, a4) != 0 )
    {
      result = 0;
      if ( a5 != nullptr )
        *a5 = 1684434036;
    }
    else if ( (uint8_t)OT::GSUBGPOS::find_script_index((OT::GSUBGPOS::Self *)v13, 0x6C61746Eu, a4) != 0 )
    {
      result = 0;
      if ( a5 != nullptr )
        *a5 = 1818326126;
    }
    else
    {
      if ( a4 != nullptr )
        *a4 = 0xFFFF;
      result = 0;
      if ( a5 != nullptr )
        *a5 = 0xFFFF;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_table_get_feature_tags  (binary VA: 0x12c8ff0)
// Original: hb_ot_layout_table_get_feature_tags
// ----------------------------------------------------------------------------
int hb_ot_layout_table_get_feature_tags(int a1, int a2, unsigned int a3, unsigned int *a4, int a5)
{
  unsigned int v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint16_t v9;
  unsigned int v10;
  uint8_t *v11;
  int i;
  int v13;
  int v14;
  bool v16;
  bool v17;
  uint8_t *v18;

  v5 = a3;
  if ( a2 != 1196445523 )
  {
    if ( a2 == 1196643650 )
    {
      v16 = sub_12C7690(a1);
      v5 = a3;
      if ( v16 )
      {
        v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
        goto LABEL_4;
      }
    }
LABEL_3:
    v6 = (uint8_t *)&unk_2116E00;
    goto LABEL_4;
  }
  v17 = sub_12C7690(a1);
  v5 = a3;
  if ( !v17 )
    goto LABEL_3;
  v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
LABEL_4:
  v7 = (uint16_t)(v6[7] + (v6[6] << 8));
  v8 = &v6[v7];
  if ( v7 == 0 )
    v8 = (uint8_t *)&unk_2116E00;
  v18 = v8;
  if ( a4 != nullptr )
  {
    v9 = v8[1] + (*v8 << 8);
    if ( v5 > v9 )
    {
      *a4 = 0;
    }
    else
    {
      v10 = v9 - v5;
      if ( *a4 <= v10 )
        v10 = *a4;
      *a4 = v10;
      v11 = &v8[6 * v5 + 2];
      if ( v10 != 0 )
      {
        for ( i = 0; i != v10; ++i )
        {
          v13 = (v11[1] << 16) + (*v11 << 24) + (v11[2] << 8);
          v14 = v11[3];
          v11 += 6;
          *(uint32_t *)(a5 + 4 * i) = v14 + v13;
        }
      }
    }
  }
  return (uint16_t)(v18[1] + (*v18 << 8));
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_script_get_language_tags  (binary VA: 0x12c9140)
// Original: hb_ot_layout_script_get_language_tags
// ----------------------------------------------------------------------------
int hb_ot_layout_script_get_language_tags(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, int a6)
{
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  uint16_t v10;
  uint8_t *v11;
  uint16_t v12;
  unsigned int v13;
  uint8_t *v14;
  int i;
  int v16;
  int v17;
  uint8_t *v19;

  if ( a2 != 1196445523 )
  {
    if ( a2 == 1196643650 && sub_12C7690(a1) )
    {
      v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
      goto LABEL_4;
    }
LABEL_3:
    v6 = (uint8_t *)&unk_2116E00;
    goto LABEL_4;
  }
  if ( !sub_12C7690(a1) )
    goto LABEL_3;
  v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
LABEL_4:
  v7 = (uint16_t)(v6[5] + (v6[4] << 8));
  v8 = &v6[v7];
  if ( v7 == 0 )
    v8 = (uint8_t *)&unk_2116E00;
  v9 = &v8[6 * a3 + 2];
  if ( a3 >= (uint16_t)((*v8 << 8) + v8[1]) )
    v9 = (uint8_t *)&unk_2116E00;
  v10 = v9[5] + (v9[4] << 8);
  v11 = &v8[v10];
  if ( v10 == 0 )
    v11 = (uint8_t *)&unk_2116E00;
  v19 = v11;
  if ( a5 != nullptr )
  {
    v12 = v11[3] + (v11[2] << 8);
    if ( a4 > v12 )
    {
      *a5 = 0;
    }
    else
    {
      v13 = v12 - a4;
      if ( *a5 <= v13 )
        v13 = *a5;
      *a5 = v13;
      v14 = &v19[6 * a4 + 4];
      if ( v13 != 0 )
      {
        for ( i = 0; i != v13; ++i )
        {
          v16 = (v14[1] << 16) + (*v14 << 24) + (v14[2] << 8);
          v17 = v14[3];
          v14 += 6;
          *(uint32_t *)(a6 + 4 * i) = v17 + v16;
        }
      }
    }
  }
  return (uint16_t)(v19[3] + (v19[2] << 8));
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_script_find_language  (binary VA: 0x12c92c0)
// Original: hb_ot_layout_script_find_language
// ----------------------------------------------------------------------------
int hb_ot_layout_script_find_language(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  uint8_t *v8;
  OT::Script::Self *v9;
  OT::Script::Self *v10;
  int16_t v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  char lang_sys_index;
  int result;
  char *v18;
  OT::Script::Self *v19;

  if ( a2 != 1196445523 )
  {
    if ( a2 == 1196643650 && sub_12C7690(a1) )
    {
      v5 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
      goto LABEL_4;
    }
LABEL_3:
    v5 = (uint8_t *)&unk_2116E00;
    goto LABEL_4;
  }
  if ( !sub_12C7690(a1) )
    goto LABEL_3;
  v5 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
LABEL_4:
  v6 = (uint16_t)(v5[5] + (v5[4] << 8));
  v7 = &v5[v6];
  if ( v6 == 0 )
    v7 = (uint8_t *)&unk_2116E00;
  v8 = &v7[6 * a3 + 2];
  if ( a3 >= (uint16_t)((*v7 << 8) + v7[1]) )
    v8 = (uint8_t *)&unk_2116E00;
  v9 = (OT::Script::Self *)&v7[(uint16_t)(v8[5] + (v8[4] << 8))];
  if ( v8[5] + (v8[4] << 8) == 0 )
    v9 = (OT::Script::Self *)&unk_2116E00;
  v19 = v9;
  v10 = v9;
  v11 = *((uint8_t *)v9 + 2) << 8;
  v12 = (uint16_t)(v11 + *((uint8_t *)v10 + 3)) - 1;
  if ( v11 + *((uint8_t *)v10 + 3) != 0 )
  {
    v13 = 0;
    v18 = (char *)v10 + 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (v13 + v12) >> 1;
        v15 = (uint8_t)v18[6 * v14 + 5]
            + ((uint8_t)v18[6 * v14 + 3] << 16)
            + ((uint8_t)v18[6 * v14 + 2] << 24)
            + ((uint8_t)v18[6 * v14 + 4] << 8);
        if ( a4 >= v15 )
          break;
        v12 = v14 - 1;
        if ( v14 - 1 < v13 )
          goto LABEL_16;
      }
      if ( a4 == v15 )
        break;
      v13 = v14 + 1;
      if ( v12 < v14 + 1 )
        goto LABEL_16;
    }
    result = 1;
    if ( a5 != nullptr )
      *a5 = v14;
  }
  else
  {
LABEL_16:
    if ( a5 != nullptr )
      *a5 = 0xFFFF;
    lang_sys_index = OT::Script::find_lang_sys_index(v19, 0x64666C74u, a5);
    result = 0;
    if ( lang_sys_index == 0 && a5 != nullptr )
      *a5 = 0xFFFF;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_language_get_required_feature  (binary VA: 0x12c9480)
// Original: hb_ot_layout_language_get_required_feature
// ----------------------------------------------------------------------------
bool hb_ot_layout_language_get_required_feature(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, int *a6)
{
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  uint16_t v12; // si
  uint8_t *v13;
  uint8_t *v14;
  uint16_t v15; // si
  unsigned int v16;
  int v17;
  int v18;
  uint8_t *v19;
  uint8_t *v20;
  int16_t v21; // di
  int16_t v22;
  int v23;
  uint16_t v24; // di
  uint8_t *v25;
  int v27;
  uint8_t *v28;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_4;
    }
LABEL_3:
    v6 = (uint8_t *)&unk_2116E00;
    goto LABEL_4;
  }
  if ( a2 != 1196643650 || !sub_12C7690(a1) )
    goto LABEL_3;
  v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
LABEL_4:
  v7 = &v6[(uint16_t)((v6[4] << 8) + v6[5])];
  if ( (v6[4] << 8) + v6[5] == 0 )
    v7 = (uint8_t *)&unk_2116E00;
  v8 = &v7[6 * a3 + 2];
  if ( a3 >= (uint16_t)((*v7 << 8) + v7[1]) )
    v8 = (uint8_t *)&unk_2116E00;
  v9 = (uint16_t)((v8[4] << 8) + v8[5]);
  v10 = &v7[v9];
  if ( v9 == 0 )
    v10 = (uint8_t *)&unk_2116E00;
  if ( a4 == 0xFFFF )
  {
    v27 = (uint16_t)(v10[1] + (*v10 << 8));
    v13 = (uint8_t *)&unk_1CF95F3;
    v28 = &v10[v27];
    if ( v27 != 0 )
      v13 = v28;
  }
  else
  {
    v11 = &v10[6 * a4 + 4];
    if ( a4 >= (uint16_t)((v10[2] << 8) + v10[3]) )
      v11 = (uint8_t *)&unk_2116E00;
    v12 = v11[5] + (v11[4] << 8);
    v13 = (uint8_t *)&unk_1CF95F3;
    v14 = &v10[v12];
    if ( v12 != 0 )
      v13 = v14;
  }
  v15 = (v13[2] << 8) + v13[3];
  v16 = 0xFFFF;
  if ( v15 != 0xFFFF )
    v16 = v15;
  if ( a5 != nullptr )
    *a5 = v16;
  if ( a6 != nullptr )
  {
    v17 = 0;
    if ( v16 != 0xFFFF )
    {
      v18 = (uint16_t)(v6[7] + (v6[6] << 8));
      v19 = (uint8_t *)&unk_2116E00;
      v20 = &v6[v18];
      if ( v18 != 0 )
        v19 = v20;
      v21 = v19[1];
      v22 = *v19 << 8;
      v23 = (int)(uintptr_t)(&v19[6 * v16 + 2]);
      v24 = v22 + v21;
      v25 = (uint8_t *)("    ");
      if ( v16 < v24 )
        v25 = (uint8_t *)v23;
      v17 = (v25[1] << 16) + (*v25 << 24) + (v25[2] << 8) + v25[3];
    }
    *a6 = v17;
  }
  return v13[3] + (v13[2] << 8) != 0xFFFF;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_language_get_required_feature_index  (binary VA: 0x12c9690)
// Original: hb_ot_layout_language_get_required_feature_index
// ----------------------------------------------------------------------------
bool hb_ot_layout_language_get_required_feature_index(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  return hb_ot_layout_language_get_required_feature(a1, a2, a3, a4, a5, nullptr);
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_language_get_feature_indexes  (binary VA: 0x12c96e0)
// Original: hb_ot_layout_language_get_feature_indexes
// ----------------------------------------------------------------------------
int hb_ot_layout_language_get_feature_indexes(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int *a6, unsigned int a7)
{
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  uint16_t v14;
  uint8_t *v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  unsigned int v36;
  int v37;
  int v39;
  uint8_t *v40;
  unsigned int v41;
  uint8_t *v42;
  unsigned int v43;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v7 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_4;
    }
  }
  else if ( a2 == 1196643650 && sub_12C7690(a1) )
  {
    v7 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
    goto LABEL_4;
  }
  v7 = (uint8_t *)&unk_2116E00;
LABEL_4:
  v8 = (uint16_t)(v7[5] + (v7[4] << 8));
  v9 = &v7[v8];
  if ( v8 == 0 )
    v9 = (uint8_t *)&unk_2116E00;
  v10 = &v9[6 * a3 + 2];
  if ( a3 >= (uint16_t)(v9[1] + (*v9 << 8)) )
    v10 = (uint8_t *)&unk_2116E00;
  v11 = (uint16_t)((v10[4] << 8) + v10[5]);
  v12 = &v9[v11];
  if ( v11 == 0 )
    v12 = (uint8_t *)&unk_2116E00;
  if ( a4 == 0xFFFF )
  {
    v39 = (uint16_t)(v12[1] + (*v12 << 8));
    v40 = &v12[v39];
    if ( v39 == 0 )
      v40 = (uint8_t *)&unk_1CF95F3;
    v42 = v40;
  }
  else
  {
    v13 = &v12[6 * a4 + 4];
    if ( a4 >= (uint16_t)(v12[3] + (v12[2] << 8)) )
      v13 = (uint8_t *)&unk_2116E00;
    v14 = v13[5] + (v13[4] << 8);
    v15 = &v12[v14];
    if ( v14 == 0 )
      v15 = (uint8_t *)&unk_1CF95F3;
    v42 = v15;
  }
  if ( a6 != nullptr )
  {
    v16 = (uint16_t)(v42[5] + (v42[4] << 8));
    if ( a5 > v16 )
    {
      *a6 = 0;
      return (uint16_t)(v42[5] + (v42[4] << 8));
    }
    v17 = v16 - a5;
    if ( *a6 <= v17 )
      v17 = *a6;
    *a6 = v17;
    v43 = v17;
    v18 = (int)(uintptr_t)(&v42[2 * a5 + 4]);
    if ( v17 != 0 )
    {
      v41 = (v17 - 1) >> 4;
      if ( 16 * v41 == 0
        || (unsigned int)(uintptr_t)(&v42[2 * a5 + 7]) <= a7 + 4 * v17 && a7 <= (unsigned int)(uintptr_t)(&v42[2 * a5 + 7 + 2 * v17])
        || a7 + 4 * v17 >= (unsigned int)(uintptr_t)(&v42[2 * a5 + 6]) && a7 <= (unsigned int)(uintptr_t)(&v42[2 * a5 + 6 + 2 * v17])
        || v17 <= 0xF )
      {
        v36 = 0;
        v37 = (int)(uintptr_t)(&v42[2 * a5 + 6]);
        do
        {
LABEL_27:
          *(uint32_t *)(a7 + 4 * v36) = (uint16_t)(*(uint8_t *)(v37 + 2 * v36 + 1)
                                                       + (*(uint8_t *)(v37 + 2 * v36) << 8));
          ++v36;
        }
        while ( v43 > v36 );
        return (uint16_t)(v42[5] + (v42[4] << 8));
      }
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = *(__m128i *)(v18 + v19 + 18);
        v22 = *(__m128i *)(v18 + v19 + 2);
        v23 = _mm_unpacklo_epi8(v22, v21);
        v24 = _mm_unpackhi_epi8(v22, v21);
        v25 = _mm_unpackhi_epi8(v23, v24);
        v26 = _mm_unpacklo_epi8(v23, v24);
        ++v20;
        v27 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v26, v25), _mm_unpackhi_epi8(v26, v25));
        v28 = *(__m128i *)(v18 + v19 + 19);
        v29 = _mm_unpackhi_epi8(*(__m128i *)(v18 + v19 + 3), v28);
        v30 = _mm_unpacklo_epi8(*(__m128i *)(v18 + v19 + 3), v28);
        v31 = _mm_unpacklo_epi8(v30, v29);
        v32 = _mm_unpackhi_epi8(v30, v29);
        v33 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v31, v32), _mm_unpackhi_epi8(v31, v32));
        v34 = _mm_add_epi16(
                _mm_slli_epi16(_mm_unpacklo_epi8(v27, g4_m128_from<__m128i>(0LL)), 8u),
                _mm_unpacklo_epi8(v33, g4_m128_from<__m128i>(0LL)));
        v35 = _mm_add_epi16(
                _mm_slli_epi16(_mm_unpackhi_epi8(v27, g4_m128_from<__m128i>(0LL)), 8u),
                _mm_unpackhi_epi8(v33, g4_m128_from<__m128i>(0LL)));
        *(__m128i *)(a7 + 2 * v19) = _mm_unpacklo_epi16(v34, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a7 + 2 * v19 + 16) = _mm_unpackhi_epi16(v34, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a7 + 2 * v19 + 32) = _mm_unpacklo_epi16(v35, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a7 + 2 * v19 + 48) = _mm_unpackhi_epi16(v35, g4_m128_from<__m128i>(0LL));
        v19 += 32;
      }
      while ( v41 > v20 );
      v36 = 16 * v41;
      if ( v43 != 16 * v41 )
      {
        v37 = (int)(uintptr_t)(&v42[2 * a5 + 6]);
        goto LABEL_27;
      }
    }
  }
  return (uint16_t)(v42[5] + (v42[4] << 8));
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_language_get_feature_tags  (binary VA: 0x12c9a70)
// Original: hb_ot_layout_language_get_feature_tags
// ----------------------------------------------------------------------------
int hb_ot_layout_language_get_feature_tags(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int *a6, unsigned int a7)
{
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;
  uint8_t *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  uint8_t *v39;
  unsigned int v40;
  int v41;
  bool v42;
  uint8_t *v43;
  int v45;
  uint8_t *v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  uint8_t *v50;
  uint8_t *v51;
  unsigned int v52;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v7 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_4;
    }
  }
  else if ( a2 == 1196643650 && sub_12C7690(a1) )
  {
    v7 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
    goto LABEL_4;
  }
  v7 = (uint8_t *)&unk_2116E00;
LABEL_4:
  v50 = v7;
  v8 = (uint16_t)((v7[4] << 8) + v7[5]);
  v9 = &v7[v8];
  if ( v8 == 0 )
    v9 = (uint8_t *)&unk_2116E00;
  v10 = &v9[6 * a3 + 2];
  if ( a3 >= (uint16_t)((*v9 << 8) + v9[1]) )
    v10 = (uint8_t *)&unk_2116E00;
  v11 = &v9[(uint16_t)(v10[5] + (v10[4] << 8))];
  if ( v10[5] + (v10[4] << 8) == 0 )
    v11 = (uint8_t *)&unk_2116E00;
  if ( a4 == 0xFFFF )
  {
    v45 = (uint16_t)(v11[1] + (*v11 << 8));
    v46 = &v11[v45];
    if ( v45 == 0 )
      v46 = (uint8_t *)&unk_1CF95F3;
    v51 = v46;
  }
  else
  {
    v12 = &v11[6 * a4 + 4];
    if ( a4 >= (uint16_t)((v11[2] << 8) + v11[3]) )
      v12 = (uint8_t *)&unk_2116E00;
    v13 = &v11[(uint16_t)(v12[5] + (v12[4] << 8))];
    if ( v12[5] + (v12[4] << 8) == 0 )
      v13 = (uint8_t *)&unk_1CF95F3;
    v51 = v13;
  }
  if ( a6 != nullptr )
  {
    v14 = (uint16_t)(v51[5] + (v51[4] << 8));
    if ( a5 > v14 )
    {
      *a6 = 0;
      goto LABEL_28;
    }
    v15 = v14 - a5;
    if ( *a6 <= v15 )
      v15 = *a6;
    v52 = v15;
    *a6 = v15;
    v16 = (int)(uintptr_t)(&v51[2 * a5 + 4]);
    if ( v15 != 0 )
    {
      v17 = 16 * ((v15 - 1) >> 4);
      v48 = (v15 - 1) >> 4;
      if ( v17 == 0
        || (unsigned int)(uintptr_t)(&v51[2 * a5 + 7]) <= a7 + 4 * v15 && a7 <= (unsigned int)(uintptr_t)(&v51[2 * a5 + 7 + 2 * v15])
        || a7 + 4 * v15 >= (unsigned int)(uintptr_t)(&v51[2 * a5 + 6]) && a7 <= (unsigned int)(uintptr_t)(&v51[2 * a5 + 6 + 2 * v15])
        || v15 <= 0xF )
      {
        v17 = 0;
        v35 = (int)(uintptr_t)(&v51[2 * a5 + 6]);
        do
        {
LABEL_27:
          *(uint32_t *)(a7 + 4 * v17) = (uint16_t)(*(uint8_t *)(v35 + 2 * v17 + 1)
                                                       + (*(uint8_t *)(v35 + 2 * v17) << 8));
          ++v17;
        }
        while ( v52 > v17 );
        goto LABEL_28;
      }
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = *(__m128i *)(v16 + v18 + 18);
        v21 = *(__m128i *)(v16 + v18 + 2);
        v22 = _mm_unpacklo_epi8(v21, v20);
        v23 = _mm_unpackhi_epi8(v21, v20);
        v24 = _mm_unpackhi_epi8(v22, v23);
        v25 = _mm_unpacklo_epi8(v22, v23);
        ++v19;
        v26 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v25, v24), _mm_unpackhi_epi8(v25, v24));
        v27 = *(__m128i *)(v16 + v18 + 19);
        v28 = _mm_unpackhi_epi8(*(__m128i *)(v16 + v18 + 3), v27);
        v29 = _mm_unpacklo_epi8(*(__m128i *)(v16 + v18 + 3), v27);
        v30 = _mm_unpacklo_epi8(v29, v28);
        v31 = _mm_unpackhi_epi8(v29, v28);
        v32 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v30, v31), _mm_unpackhi_epi8(v30, v31));
        v33 = _mm_add_epi16(
                _mm_slli_epi16(_mm_unpacklo_epi8(v26, g4_m128_from<__m128i>(0LL)), 8u),
                _mm_unpacklo_epi8(v32, g4_m128_from<__m128i>(0LL)));
        v34 = _mm_add_epi16(
                _mm_slli_epi16(_mm_unpackhi_epi8(v26, g4_m128_from<__m128i>(0LL)), 8u),
                _mm_unpackhi_epi8(v32, g4_m128_from<__m128i>(0LL)));
        *(__m128i *)(a7 + 2 * v18) = _mm_unpacklo_epi16(v33, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a7 + 2 * v18 + 16) = _mm_unpackhi_epi16(v33, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a7 + 2 * v18 + 32) = _mm_unpacklo_epi16(v34, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a7 + 2 * v18 + 48) = _mm_unpackhi_epi16(v34, g4_m128_from<__m128i>(0LL));
        v18 += 32;
      }
      while ( v19 < v48 );
      if ( v52 != v17 )
      {
        v35 = (int)(uintptr_t)(&v51[2 * a5 + 6]);
        goto LABEL_27;
      }
    }
  }
LABEL_28:
  v47 = (uint16_t)(v51[5] + (v51[4] << 8));
  if ( a7 != 0 )
  {
    v49 = *a6;
    if ( *a6 != 0 )
    {
      v36 = 0;
      do
      {
        v37 = *(uint32_t *)(a7 + 4 * v36);
        v38 = 0;
        if ( v37 != 0xFFFF )
        {
          v39 = &v50[(uint16_t)(v50[7] + (v50[6] << 8))];
          if ( v50[7] + (v50[6] << 8) == 0 )
            v39 = (uint8_t *)&unk_2116E00;
          v40 = (uint16_t)(v39[1] + (*v39 << 8));
          v41 = (int)(uintptr_t)(&v39[6 * v37 + 2]);
          v42 = v37 < v40;
          v43 = (uint8_t *)("    ");
          if ( v42 )
            v43 = (uint8_t *)v41;
          v38 = (v43[1] << 16) + (*v43 << 24) + (v43[2] << 8) + v43[3];
        }
        *(uint32_t *)(a7 + 4 * v36++) = v38;
      }
      while ( v36 != v49 );
    }
  }
  return v47;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_language_find_feature  (binary VA: 0x12c9ed0)
// Original: hb_ot_layout_language_find_feature
// ----------------------------------------------------------------------------
int hb_ot_layout_language_find_feature(int a1, int a2, unsigned int a3, unsigned int a4, int a5, unsigned int *a6)
{
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  int16_t v12;
  int16_t v13;
  int16_t v14;
  uint16_t v15;
  uint8_t *v16;
  uint8_t *v17;
  unsigned int v18;
  char *v19;
  int v20;
  unsigned int v21;
  uint8_t *v22;
  unsigned int v23;
  int v24;
  bool v25;
  uint8_t *v26;
  int result;
  unsigned int v28;
  char *v29;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_4;
    }
LABEL_3:
    v6 = (uint8_t *)&unk_2116E00;
    goto LABEL_4;
  }
  if ( a2 != 1196643650 || !sub_12C7690(a1) )
    goto LABEL_3;
  v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
LABEL_4:
  v7 = &v6[(uint16_t)((v6[4] << 8) + v6[5])];
  if ( (v6[4] << 8) + v6[5] == 0 )
    v7 = (uint8_t *)&unk_2116E00;
  v8 = &v7[6 * a3 + 2];
  if ( a3 >= (uint16_t)((*v7 << 8) + v7[1]) )
    v8 = (uint8_t *)&unk_2116E00;
  v9 = (uint16_t)((v8[4] << 8) + v8[5]);
  v10 = &v7[v9];
  if ( v9 == 0 )
    v10 = (uint8_t *)&unk_2116E00;
  if ( a4 == 0xFFFF )
  {
    v14 = v10[1];
    v13 = *v10 << 8;
  }
  else
  {
    v11 = &v10[6 * a4 + 4];
    if ( a4 >= (uint16_t)((v10[2] << 8) + v10[3]) )
      v11 = (uint8_t *)&unk_2116E00;
    v12 = v11[4];
    v13 = v11[5];
    v14 = v12 << 8;
  }
  v15 = v14 + v13;
  v16 = (uint8_t *)&unk_1CF95F3;
  v17 = &v10[v15];
  if ( v15 != 0 )
    v16 = v17;
  v28 = (uint16_t)(v16[5] + (v16[4] << 8));
  if ( v16[5] + (v16[4] << 8) != 0 )
  {
    v18 = 0;
    v29 = (char *)(v16 + 4);
    while ( 1 )
    {
      v19 = (char *)&unk_1CF9601;
      if ( v28 > v18 )
        v19 = &v29[2 * v18 + 2];
      v20 = 0;
      v21 = (uint16_t)((uint8_t)v19[1] + ((uint8_t)*v19 << 8));
      if ( v21 != 0xFFFF )
      {
        v22 = &v6[(uint16_t)(v6[7] + (v6[6] << 8))];
        if ( v6[7] + (v6[6] << 8) == 0 )
          v22 = (uint8_t *)&unk_2116E00;
        v23 = (uint16_t)(v22[1] + (*v22 << 8));
        v24 = (int)(uintptr_t)(&v22[6 * v21 + 2]);
        v25 = v21 < v23;
        v26 = (uint8_t *)("    ");
        if ( v25 )
          v26 = (uint8_t *)v24;
        v20 = v26[3] + (v26[1] << 16) + (*v26 << 24) + (v26[2] << 8);
      }
      if ( a5 == v20 )
        break;
      if ( ++v18 >= v28 )
        goto LABEL_31;
    }
    result = 1;
    if ( a6 != nullptr )
      *a6 = v21;
  }
  else
  {
LABEL_31:
    result = 0;
    if ( a6 != nullptr )
      *a6 = 0xFFFF;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_feature_get_lookups  (binary VA: 0x12ca120)
// Original: hb_ot_layout_feature_get_lookups
// ----------------------------------------------------------------------------
int hb_ot_layout_feature_get_lookups(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, unsigned int a6)
{
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  uint16_t v10;
  uint8_t *v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned int v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  unsigned int v32;
  int v33;
  unsigned int v35;
  uint8_t *v36;
  unsigned int v37;

  if ( a2 == 1196445523 )
  {
    if ( sub_12C7690(a1) )
    {
      v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
      goto LABEL_4;
    }
  }
  else if ( a2 == 1196643650 && sub_12C7690(a1) )
  {
    v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
    goto LABEL_4;
  }
  v6 = (uint8_t *)&unk_2116E00;
LABEL_4:
  v7 = (uint16_t)(v6[7] + (v6[6] << 8));
  v8 = &v6[v7];
  if ( v7 == 0 )
    v8 = (uint8_t *)&unk_2116E00;
  v9 = &v8[6 * a3 + 2];
  if ( a3 >= (uint16_t)(v8[1] + (*v8 << 8)) )
    v9 = (uint8_t *)&unk_2116E00;
  v10 = v9[5] + (v9[4] << 8);
  v11 = &v8[v10];
  if ( v10 == 0 )
    v11 = (uint8_t *)&unk_2116E00;
  v36 = v11;
  if ( a5 != nullptr )
  {
    v12 = (uint16_t)(v11[3] + (v11[2] << 8));
    if ( a4 > v12 )
    {
      *a5 = 0;
      return (uint16_t)(v36[3] + (v36[2] << 8));
    }
    v13 = v12 - a4;
    if ( *a5 <= v13 )
      v13 = *a5;
    *a5 = v13;
    v37 = v13;
    v14 = (int)(uintptr_t)(&v36[2 * a4 + 2]);
    if ( v13 != 0 )
    {
      v35 = (v13 - 1) >> 4;
      if ( 16 * v35 == 0
        || (unsigned int)(uintptr_t)(&v36[2 * a4 + 5]) <= a6 + 4 * v13 && a6 <= (unsigned int)(uintptr_t)(&v36[2 * a4 + 5 + 2 * v13])
        || a6 + 4 * v13 >= (unsigned int)(uintptr_t)(&v36[2 * a4 + 4]) && a6 <= (unsigned int)(uintptr_t)(&v36[2 * a4 + 4 + 2 * v13])
        || v13 <= 0xF )
      {
        v32 = 0;
        v33 = (int)(uintptr_t)(&v36[2 * a4 + 4]);
        do
        {
LABEL_21:
          *(uint32_t *)(a6 + 4 * v32) = (uint16_t)(*(uint8_t *)(v33 + 2 * v32 + 1)
                                                       + (*(uint8_t *)(v33 + 2 * v32) << 8));
          ++v32;
        }
        while ( v37 > v32 );
        return (uint16_t)(v36[3] + (v36[2] << 8));
      }
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = *(__m128i *)(v14 + v15 + 18);
        v18 = *(__m128i *)(v14 + v15 + 2);
        v19 = _mm_unpacklo_epi8(v18, v17);
        v20 = _mm_unpackhi_epi8(v18, v17);
        v21 = _mm_unpackhi_epi8(v19, v20);
        v22 = _mm_unpacklo_epi8(v19, v20);
        ++v16;
        v23 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v22, v21), _mm_unpackhi_epi8(v22, v21));
        v24 = *(__m128i *)(v14 + v15 + 19);
        v25 = _mm_unpackhi_epi8(*(__m128i *)(v14 + v15 + 3), v24);
        v26 = _mm_unpacklo_epi8(*(__m128i *)(v14 + v15 + 3), v24);
        v27 = _mm_unpacklo_epi8(v26, v25);
        v28 = _mm_unpackhi_epi8(v26, v25);
        v29 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v27, v28), _mm_unpackhi_epi8(v27, v28));
        v30 = _mm_add_epi16(
                _mm_slli_epi16(_mm_unpacklo_epi8(v23, g4_m128_from<__m128i>(0LL)), 8u),
                _mm_unpacklo_epi8(v29, g4_m128_from<__m128i>(0LL)));
        v31 = _mm_add_epi16(
                _mm_slli_epi16(_mm_unpackhi_epi8(v23, g4_m128_from<__m128i>(0LL)), 8u),
                _mm_unpackhi_epi8(v29, g4_m128_from<__m128i>(0LL)));
        *(__m128i *)(a6 + 2 * v15) = _mm_unpacklo_epi16(v30, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a6 + 2 * v15 + 16) = _mm_unpackhi_epi16(v30, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a6 + 2 * v15 + 32) = _mm_unpacklo_epi16(v31, g4_m128_from<__m128i>(0LL));
        *(__m128i *)(a6 + 2 * v15 + 48) = _mm_unpackhi_epi16(v31, g4_m128_from<__m128i>(0LL));
        v15 += 32;
      }
      while ( v35 > v16 );
      v32 = 16 * v35;
      if ( v37 != 16 * v35 )
      {
        v33 = (int)(uintptr_t)(&v36[2 * a4 + 4]);
        goto LABEL_21;
      }
    }
  }
  return (uint16_t)(v36[3] + (v36[2] << 8));
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_table_get_lookup_count  (binary VA: 0x12caac0)
// Original: hb_ot_layout_table_get_lookup_count
// ----------------------------------------------------------------------------
int hb_ot_layout_table_get_lookup_count(int a1, int a2)
{
  if ( a2 == 1196445523 )
    return *(uint32_t *)(*(uint32_t *)(a1 + 72) + 28);
  if ( a2 == 1196643650 )
    return *(uint32_t *)(*(uint32_t *)(a1 + 72) + 24);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_collect_lookups  (binary VA: 0x12caaf0)
// Original: hb_ot_layout_collect_lookups
// ----------------------------------------------------------------------------
int hb_ot_layout_collect_lookups(int a1, int a2, unsigned int *a3, unsigned int *a4, int *a5, hb_set_t *a6)
{
  unsigned int *v6;
  int result;
  unsigned int v8;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v10)) > _g4_s1 ? (44u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v11)) > _g4_s2 ? (60u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);

  v6 = a3;
  if ( a3 != nullptr )
  {
    while ( 1 )
    {
      result = *v6;
      if ( *v6 == 0 )
        break;
      if ( hb_ot_layout_table_find_script(a1, a2, *v6, v11) != 0 )
        sub_12CA850(a1, a2, v11[0], a4, a5, a6);
      ++v6;
    }
  }
  else
  {
    result = hb_ot_layout_table_get_script_tags(a1, a2, 0, nullptr, 0);
    v10 = result;
    if ( result != 0 )
    {
      v8 = 0;
      do
      {
        v9 = v8++;
        result = sub_12CA850(a1, a2, v9, a4, a5, a6);
      }
      while ( v8 != v10 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_has_substitution  (binary VA: 0x12cabe0)
// Original: hb_ot_layout_has_substitution
// ----------------------------------------------------------------------------
bool hb_ot_layout_has_substitution(int a1)
{
  return sub_12C7690(a1) && *(uint32_t *)(*(uint32_t *)(a1 + 72) + 16) != (uint32_t)(uintptr_t)(&unk_2116E00);
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_has_positioning  (binary VA: 0x12cac50)
// Original: hb_ot_layout_has_positioning
// ----------------------------------------------------------------------------
bool hb_ot_layout_has_positioning(int a1)
{
  return sub_12C7690(a1) && *(uint32_t *)(*(uint32_t *)(a1 + 72) + 20) != (uint32_t)(uintptr_t)(&unk_2116E00);
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_get_size_params  (binary VA: 0x12caf80)
// Original: hb_ot_layout_get_size_params
// ----------------------------------------------------------------------------
int hb_ot_layout_get_size_params(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  int16_t v10;
  int16_t v11; // di
  unsigned int v12;
  unsigned int v13;
  uint8_t *v14;
  uint8_t *v15;
  int v16;
  uint8_t *v17;
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  uint16_t v21;
  int result;
  unsigned int v23;

  if ( sub_12C7690(a1) )
    v6 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 20);
  else
    v6 = (uint8_t *)&unk_2116E00;
  v7 = (uint8_t *)&unk_2116E00;
  v8 = (uint16_t)((v6[6] << 8) + v6[7]);
  v9 = &v6[v8];
  if ( v8 != 0 )
    v7 = v9;
  v10 = *v7;
  v11 = v7[1];
  v23 = (uint16_t)(v11 + (v10 << 8));
  if ( v11 + (v10 << 8) != 0 )
  {
    if ( v8 == 0 )
      v9 = (uint8_t *)&unk_2116E00;
    v12 = 0;
    v13 = (uint16_t)((*v9 << 8) + v11);
    while ( 1 )
    {
      v14 = (uint8_t *)("    ");
      if ( v13 > v12 )
        v14 = &v9[6 * v12 + 2];
      if ( v14[3] + (v14[1] << 16) + (*v14 << 24) + (v14[2] << 8) == 1936292453 )
      {
        v15 = &v9[6 * v12 + 2];
        if ( v13 <= v12 )
          v15 = (uint8_t *)&unk_2116E00;
        v16 = (uint16_t)(v15[5] + (v15[4] << 8));
        v17 = &v9[v16];
        if ( v16 == 0 )
          v17 = (uint8_t *)&unk_2116E00;
        v18 = (uint8_t *)&unk_2116E00;
        v19 = (uint16_t)((*v17 << 8) + v17[1]);
        v20 = &v17[v19];
        if ( v19 != 0 )
          v18 = v20;
        v21 = v18[1] + (*v18 << 8);
        if ( v21 != 0 )
          break;
      }
      if ( ++v12 >= v23 )
        goto LABEL_30;
    }
    if ( a2 != nullptr )
      *a2 = v21;
    if ( a3 != nullptr )
      *a3 = (uint16_t)(v18[3] + (v18[2] << 8));
    if ( a4 != nullptr )
      *a4 = (uint16_t)(v18[5] + (v18[4] << 8));
    if ( a5 != nullptr )
      *a5 = (uint16_t)(v18[7] + (v18[6] << 8));
    result = 1;
    if ( a6 != nullptr )
      *a6 = (uint16_t)(v18[9] + (v18[8] << 8));
  }
  else
  {
LABEL_30:
    if ( a2 != nullptr )
      *a2 = 0;
    if ( a3 != nullptr )
      *a3 = 0;
    if ( a4 != nullptr )
      *a4 = 0;
    if ( a5 != nullptr )
      *a5 = 0;
    result = 0;
    if ( a6 != nullptr )
      *a6 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_get_glyph_class  (binary VA: 0x12cb200)
// Original: hb_ot_layout_get_glyph_class
// ----------------------------------------------------------------------------
int hb_ot_layout_get_glyph_class(int a1, unsigned int a2)
{
  uint8_t *v2;
  int v3;
  OT::ClassDef::Self *v4;
  OT::ClassDef::Self *v5;

  if ( sub_12C7690(a1) )
    v2 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 12);
  else
    v2 = (uint8_t *)&unk_2116E00;
  v3 = (uint16_t)(v2[5] + (v2[4] << 8));
  v4 = (OT::ClassDef::Self *)&unk_2116E00;
  v5 = (OT::ClassDef::Self *)&v2[v3];
  if ( v3 != 0 )
    v4 = v5;
  return OT::ClassDef::get_class(v4, a2);
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_get_attach_points  (binary VA: 0x12cb450)
// Original: hb_ot_layout_get_attach_points
// ----------------------------------------------------------------------------
int hb_ot_layout_get_attach_points(int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int a5)
{
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  int v8;
  bool v9;
  OT::Coverage::Self *v10;
  OT::Coverage::Self *v11;
  unsigned int coverage;
  uint8_t *v13;
  uint16_t v14;
  uint8_t *v15;
  unsigned int v16;
  unsigned int v17;
  uint8_t *v18;
  int v19;
  unsigned int v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  unsigned int v36;
  uint8_t *v37;
  int result;
  unsigned int v39;
  uint8_t *v40;
  unsigned int v41;

  if ( sub_12C7690(a1) )
    v5 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 12);
  else
    v5 = (uint8_t *)&unk_2116E00;
  v6 = (uint16_t)(v5[7] + (v5[6] << 8));
  v7 = &v5[v6];
  if ( v6 == 0 )
    v7 = (uint8_t *)&unk_2116E00;
  v8 = (uint16_t)(v7[1] + (*v7 << 8));
  v9 = v8 == 0;
  v10 = (OT::Coverage::Self *)&v7[v8];
  v11 = (OT::Coverage::Self *)&unk_2116E00;
  if ( !v9 )
    v11 = v10;
  coverage = OT::Coverage::get_coverage(v11, a2);
  if ( coverage != -1 )
  {
    v13 = &v7[2 * coverage + 4];
    if ( coverage >= (uint16_t)((v7[2] << 8) + v7[3]) )
      v13 = (uint8_t *)&unk_2116E00;
    v14 = v13[1] + (*v13 << 8);
    v15 = &v7[v14];
    if ( v14 == 0 )
      v15 = (uint8_t *)&unk_2116E00;
    v40 = v15;
    if ( a4 == nullptr )
      return (uint16_t)(v40[1] + (*v40 << 8));
    v16 = (uint16_t)(v15[1] + (*v15 << 8));
    if ( a3 > v16 )
    {
      *a4 = 0;
    }
    else
    {
      v17 = v16 - a3;
      if ( *a4 <= v17 )
        v17 = *a4;
      *a4 = v17;
      v41 = v17;
      v18 = &v15[2 * a3];
      if ( v17 == 0 )
        return (uint16_t)(v40[1] + (*v40 << 8));
      v39 = (v17 - 1) >> 4;
      if ( 16 * v39 != 0
        && ((unsigned int)(uintptr_t)(v18 + 3) > a5 + 4 * v17 || a5 > (unsigned int)(uintptr_t)(&v18[2 * v17 + 3]))
        && (a5 + 4 * v17 < (unsigned int)(uintptr_t)(v18 + 2) || a5 > (unsigned int)(uintptr_t)(&v18[2 * v17 + 2]))
        && v17 > 0xF )
      {
        v19 = 0;
        v20 = 0;
        do
        {
          v21 = *(__m128i *)&v18[v19 + 18];
          v22 = *(__m128i *)&v18[v19 + 2];
          v23 = _mm_unpacklo_epi8(v22, v21);
          v24 = _mm_unpackhi_epi8(v22, v21);
          v25 = _mm_unpackhi_epi8(v23, v24);
          v26 = _mm_unpacklo_epi8(v23, v24);
          ++v20;
          v27 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v26, v25), _mm_unpackhi_epi8(v26, v25));
          v28 = *(__m128i *)&v18[v19 + 19];
          v29 = _mm_unpackhi_epi8(*(__m128i *)&v18[v19 + 3], v28);
          v30 = _mm_unpacklo_epi8(*(__m128i *)&v18[v19 + 3], v28);
          v31 = _mm_unpacklo_epi8(v30, v29);
          v32 = _mm_unpackhi_epi8(v30, v29);
          v33 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v31, v32), _mm_unpackhi_epi8(v31, v32));
          v34 = _mm_add_epi16(
                  _mm_slli_epi16(_mm_unpacklo_epi8(v27, g4_m128_from<__m128i>(0LL)), 8u),
                  _mm_unpacklo_epi8(v33, g4_m128_from<__m128i>(0LL)));
          v35 = _mm_add_epi16(
                  _mm_slli_epi16(_mm_unpackhi_epi8(v27, g4_m128_from<__m128i>(0LL)), 8u),
                  _mm_unpackhi_epi8(v33, g4_m128_from<__m128i>(0LL)));
          *(__m128i *)(a5 + 2 * v19) = _mm_unpacklo_epi16(v34, g4_m128_from<__m128i>(0LL));
          *(__m128i *)(a5 + 2 * v19 + 16) = _mm_unpackhi_epi16(v34, g4_m128_from<__m128i>(0LL));
          *(__m128i *)(a5 + 2 * v19 + 32) = _mm_unpacklo_epi16(v35, g4_m128_from<__m128i>(0LL));
          *(__m128i *)(a5 + 2 * v19 + 48) = _mm_unpackhi_epi16(v35, g4_m128_from<__m128i>(0LL));
          v19 += 32;
        }
        while ( v39 > v20 );
        v36 = 16 * v39;
        if ( v41 == 16 * v39 )
          return (uint16_t)(v40[1] + (*v40 << 8));
        v37 = v18 + 2;
      }
      else
      {
        v36 = 0;
        v37 = v18 + 2;
      }
      do
      {
        *(uint32_t *)(a5 + 4 * v36) = (uint16_t)(v37[2 * v36 + 1] + (v37[2 * v36] << 8));
        ++v36;
      }
      while ( v41 > v36 );
    }
    return (uint16_t)(v40[1] + (*v40 << 8));
  }
  result = 0;
  if ( a4 != nullptr )
    *a4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_get_ligature_carets  (binary VA: 0x12cb770)
// Original: hb_ot_layout_get_ligature_carets
// ----------------------------------------------------------------------------
int hb_ot_layout_get_ligature_carets(int a1, int a2, unsigned int a3, int a4, uint32_t *a5, int a6)
{
  int v6;
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  OT::Coverage::Self *v10;
  unsigned int coverage;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  uint8_t *v15;
  int result;

  v6 = *(uint32_t *)(a1 + 52);
  if ( sub_12C7690(v6) )
    v7 = *(uint8_t **)(*(uint32_t *)(v6 + 72) + 12);
  else
    v7 = (uint8_t *)&unk_2116E00;
  v8 = (uint16_t)(v7[9] + (v7[8] << 8));
  v9 = &v7[v8];
  if ( v8 == 0 )
    v9 = (uint8_t *)&unk_2116E00;
  v10 = (OT::Coverage::Self *)&v9[(uint16_t)(v9[1] + (*v9 << 8))];
  if ( v9[1] + (*v9 << 8) == 0 )
    v10 = (OT::Coverage::Self *)&unk_2116E00;
  coverage = OT::Coverage::get_coverage(v10, a3);
  if ( coverage == -1 )
  {
    result = 0;
    if ( a5 != nullptr )
      *a5 = 0;
  }
  else
  {
    v12 = &v9[2 * coverage + 4];
    if ( coverage >= (uint16_t)((v9[2] << 8) + v9[3]) )
      v12 = (uint8_t *)&unk_2116E00;
    v13 = (uint16_t)(v12[1] + (*v12 << 8));
    v14 = (uint8_t *)&unk_2116E00;
    v15 = &v9[v13];
    if ( v13 != 0 )
      v14 = v15;
    return OT::LigGlyph::get_lig_carets(v14, a1, a2, a3, a4, a5, a6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_lookup_would_substitute  (binary VA: 0x12cd0b0)
// Original: hb_ot_layout_lookup_would_substitute
// ----------------------------------------------------------------------------
int hb_ot_layout_lookup_would_substitute(int a1, unsigned int a2, unsigned int *a3, int a4, int a5)
{
  if ( sub_12C7690(a1) )
    return sub_12CCD70(a1, a2, a3, a4, a5);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_lookup_substitute_closure  (binary VA: 0x12ceb90)
// Original: hb_ot_layout_lookup_substitute_closure
// ----------------------------------------------------------------------------
int hb_ot_layout_lookup_substitute_closure(int a1, unsigned int a2, int a3)
{
  uint8_t *v3;
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  int v8;
  typedef uint32_t _g4_t_v9[2];
  typedef int (*_g4_t_v10)(int, int);
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v9[1] = a3;
  v9[0] = a1;
  v10 = nullptr;
  v11 = 8;
  v12 = 0;
  if ( sub_12C7690(a1) )
    v3 = *(uint8_t **)(*(uint32_t *)(a1 + 72) + 16);
  else
    v3 = (uint8_t *)&unk_2116E00;
  v4 = (uint16_t)(v3[9] + (v3[8] << 8));
  v5 = &v3[v4];
  if ( v4 == 0 )
    v5 = (uint8_t *)&unk_2116E00;
  if ( a2 < (uint16_t)(v5[1] + (*v5 << 8)) )
  {
    v8 = (uint16_t)(v5[2 * a2 + 3] + (v5[2 * a2 + 2] << 8));
    v6 = &v5[v8];
    if ( v8 == 0 )
      v6 = (uint8_t *)&unk_2116E00;
  }
  else
  {
    v6 = (uint8_t *)&unk_2116E00;
  }
  v10 = (int (*)(int, int))(uintptr_t)(OT::SubstLookup::dispatch_recurse_func_OT_hb_closure_context_t_6c6d64);
  return OT::SubstLookup::dispatch_OT_hb_closure_context_t_768ba0((int)(uintptr_t)(v6), (OT::hb_closure_context_t *)v9);
}

// ----------------------------------------------------------------------------
// Function: hb_ot_layout_lookup_collect_glyphs  (binary VA: 0x12cec60)
// Original: hb_ot_layout_lookup_collect_glyphs
// ----------------------------------------------------------------------------
void hb_ot_layout_lookup_collect_glyphs(int a1, int a2, unsigned int a3, void *empty, hb_set_t *a5, void *a6, void *a7)
{
  hb_set_t *v7;
  void *v8;
  int v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  uint8_t *v15;
  int v16;
  int v17;
  uint8_t *v18;
  uint8_t *v19;
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  uint8_t v23;
  int16_t v24;
  char *v25;
  int16_t v26;
  char *v27;
  int v28;
  uint8_t *v29;
  bool v30;
  unsigned int v31;
  uint8_t *v32;
  int16_t v33;
  int16_t v34;
  uint16_t v35;
  OT::Coverage::Self *v36;
  OT::Coverage::Self *v37;
  uint8_t *v38;
  OT::Coverage::Self *v39;
  int v40;
  OT::Coverage::Self *v41;
  int16_t v42;
  uint8_t *v43;
  int16_t v44;
  uint8_t v45;
  int16_t v46; // si
  int v47;
  unsigned int v48;
  int16_t v49;
  uint8_t *v50;
  int16_t v51;
  int v52;
  int v53;
  int v54;
  uint8_t *v55;
  int16_t v56;
  uint8_t v57;
  int16_t v58; // di
  int v59;
  unsigned int v60;
  int16_t v61;
  uint8_t *v62;
  OT::Coverage::Self *v63;
  uint8_t v64;
  int16_t v65; // si
  uint8_t *v66;
  int16_t v67;
  uint8_t *v68;
  int v69;
  uint8_t *v70;
  int v71;
  int16_t v72;
  int v73;
  uint8_t *v74;
  int v75;
  uint32_t *v76;
  typedef uint32_t *_g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef hb_set_t *_g4_t_v81;
  typedef unsigned int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint8_t *_g4_t_v84;
  typedef hb_set_t *_g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef unsigned int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint8_t *_g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef uint32_t _g4_t_v95[2];
  typedef hb_set_t *_g4_t_v96;
  typedef void *_g4_t_v97;
  typedef void *_g4_t_v98;
  typedef int (*_g4_t_v99)(int, int);
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v77)) > _g4_s0 ? (12u + sizeof(_g4_t_v77)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v78)) > _g4_s1 ? (16u + sizeof(_g4_t_v78)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v79)) > _g4_s2 ? (24u + sizeof(_g4_t_v79)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v80)) > _g4_s3 ? (28u + sizeof(_g4_t_v80)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v81)) > _g4_s4 ? (32u + sizeof(_g4_t_v81)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v82)) > _g4_s5 ? (32u + sizeof(_g4_t_v82)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v83)) > _g4_s6 ? (36u + sizeof(_g4_t_v83)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v84)) > _g4_s7 ? (40u + sizeof(_g4_t_v84)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v85)) > _g4_s8 ? (44u + sizeof(_g4_t_v85)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v86)) > _g4_s9 ? (44u + sizeof(_g4_t_v86)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v87)) > _g4_s10 ? (48u + sizeof(_g4_t_v87)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v88)) > _g4_s11 ? (52u + sizeof(_g4_t_v88)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v89)) > _g4_s12 ? (52u + sizeof(_g4_t_v89)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v90)) > _g4_s13 ? (56u + sizeof(_g4_t_v90)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v91)) > _g4_s14 ? (56u + sizeof(_g4_t_v91)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v92)) > _g4_s15 ? (56u + sizeof(_g4_t_v92)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v93)) > _g4_s16 ? (60u + sizeof(_g4_t_v93)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v94)) > _g4_s17 ? (60u + sizeof(_g4_t_v94)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v95)) > _g4_s18 ? (64u + sizeof(_g4_t_v95)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v96)) > _g4_s19 ? (72u + sizeof(_g4_t_v96)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v97)) > _g4_s20 ? (76u + sizeof(_g4_t_v97)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v98)) > _g4_s21 ? (80u + sizeof(_g4_t_v98)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v99)) > _g4_s22 ? (84u + sizeof(_g4_t_v99)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v100)) > _g4_s23 ? (88u + sizeof(_g4_t_v100)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v101)) > _g4_s24 ? (92u + sizeof(_g4_t_v101)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 12u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 16u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 52u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 52u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 56u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 60u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 64u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 72u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 80u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 84u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 88u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 92u);

  v7 = a5;
  v8 = a6;
  if ( sub_12C7690(a1) )
  {
    v95[0] = a1;
    if ( empty == nullptr )
      empty = hb_set_get_empty();
    v95[1] = (uint32_t)(uintptr_t)(empty);
    if ( a5 == nullptr )
      v7 = (hb_set_t *)hb_set_get_empty();
    v96 = v7;
    if ( a6 == nullptr )
      v8 = hb_set_get_empty();
    v97 = v8;
    if ( a7 == nullptr )
      a7 = hb_set_get_empty();
    v98 = a7;
    v99 = nullptr;
    v100 = 8;
    v101 = 0;
    if ( a2 == 1196445523 )
    {
      v15 = (uint8_t *)&unk_2116E00;
      v16 = *(uint32_t *)(*(uint32_t *)(a1 + 72) + 20);
      v17 = (uint16_t)(*(uint8_t *)(v16 + 9) + (*(uint8_t *)(v16 + 8) << 8));
      v18 = (uint8_t *)&unk_2116E00;
      v19 = (uint8_t *)(v17 + v16);
      if ( v17 != 0 )
        v18 = v19;
      if ( a3 >= (uint16_t)(v18[1] + (*v18 << 8)) )
      {
        v84 = (uint8_t *)&unk_2116E00;
        v22 = (uint8_t *)&unk_2116E00;
      }
      else
      {
        v20 = (uint16_t)(v18[2 * a3 + 3] + (v18[2 * a3 + 2] << 8));
        v21 = &v18[v20];
        if ( v20 != 0 )
          v15 = v21;
        v84 = v15;
        v22 = v15;
      }
      v23 = v22[5];
      v80 = (uint16_t)(v22[1] + (*v22 << 8));
      v24 = v22[4];
      if ( (v24 << 8) + v23 != 0 )
      {
        v25 = (char *)(v84 + 4);
        v79 = (uint16_t)((v24 << 8) + v23) - 1;
        v87 = 0;
        v26 = v24;
        while ( 1 )
        {
          v27 = (char *)&unk_2116E00;
          if ( (uint16_t)(v23 + (v26 << 8)) > v87 )
            v27 = &v25[2 * v87 + 2];
          v28 = (uint16_t)(((uint8_t)*v27 << 8) + (uint8_t)v27[1]);
          v29 = &v84[v28];
          v30 = v28 == 0;
          v31 = v80;
          if ( v30 )
            v29 = (uint8_t *)&unk_2116E00;
          v93 = v29;
LABEL_32:
          if ( v31 <= 9 )
          {
            while ( 2 )
            {
              switch ( v31 )
              {
                case 0u:
                  break;
                case 1u:
                  v38 = v93;
                  v51 = v93[1] + (*v93 << 8);
                  if ( v51 == 1 )
                  {
                    v39 = (OT::Coverage::Self *)&unk_2116E00;
                    v40 = (uint16_t)((v93[2] << 8) + v93[3]);
                    goto LABEL_46;
                  }
                  if ( v51 == 2 )
                  {
                    v38 = v93;
                    v39 = (OT::Coverage::Self *)&unk_2116E00;
                    v40 = (uint16_t)((v93[2] << 8) + v93[3]);
                    goto LABEL_46;
                  }
                  break;
                case 2u:
                  v42 = v93[1] + (*v93 << 8);
                  if ( v42 == 1 )
                  {
                    v63 = (OT::Coverage::Self *)&unk_2116E00;
                    if ( (v93[2] << 8) + v93[3] != 0 )
                      v63 = (OT::Coverage::Self *)&v93[(uint16_t)((v93[2] << 8) + v93[3])];
                    OT::Coverage::add_coverage<hb_set_t>(v63, v96);
                    v64 = v93[9];
                    v65 = v93[8] << 8;
                    if ( v65 + v64 != 0 )
                    {
                      v66 = v93 + 8;
                      v83 = (uint16_t)(v65 + v64) - 1;
                      v86 = 0;
                      v67 = v93[8];
                      while ( 1 )
                      {
                        v68 = (uint8_t *)&unk_2116E00;
                        if ( (uint16_t)(v64 + (v67 << 8)) > v86 )
                          v68 = &v66[2 * v86 + 2];
                        v69 = (uint16_t)((*v68 << 8) + v68[1]);
                        v70 = (uint8_t *)&unk_2116E00;
                        if ( v69 != 0 )
                          v70 = &v93[v69];
                        v71 = _popcountsi2((uint16_t)(v93[5] + (v93[4] << 8)));
                        v92 = 2 * (v71 + _popcountsi2((uint16_t)(v93[7] + (v93[6] << 8))) + 1);
                        v72 = v70[1];
                        v73 = (uint16_t)(v72 + (*v70 << 8));
                        if ( v72 + (*v70 << 8) != 0 )
                        {
                          v74 = v70 + 2;
                          v89 = v73 + 1;
                          v75 = 1;
                          v76 = v95;
                          do
                          {
                            ++v75;
                            v77 = v76;
                            hb_set_t::add((hb_set_t *)v76[2], (uint16_t)(v74[1] + (*v74 << 8)));
                            v74 += v92;
                            v76 = v77;
                          }
                          while ( v75 != v89 );
                        }
                        if ( v86 == v83 )
                          break;
                        ++v86;
                        v67 = v93[8];
                        v64 = v93[9];
                        v66 = v93 + 8;
                      }
                    }
                  }
                  else if ( v42 == 2 )
                  {
                    v43 = (uint8_t *)&unk_2116E00;
                    v78 = (uint16_t)(v93[13] + (v93[12] << 8));
                    if ( v93[9] + (v93[8] << 8) != 0 )
                      v43 = &v93[(uint16_t)(v93[9] + (v93[8] << 8))];
                    if ( v93[13] + (v93[12] << 8) != 0 )
                    {
                      v90 = 0;
                      do
                      {
                        v44 = v43[1] + (*v43 << 8);
                        v81 = v96;
                        if ( v44 == 1 )
                        {
                          v45 = v43[5];
                          v46 = v43[4] << 8;
                          v47 = (uint16_t)(v46 + v45);
                          if ( v46 + v45 != 0 )
                          {
                            v48 = 0;
                            v88 = v47 - 1;
                            v49 = v43[4];
                            while ( 1 )
                            {
                              v50 = (uint8_t *)&unk_2116E00;
                              if ( (uint16_t)(v45 + (v49 << 8)) > v48 )
                                v50 = &v43[2 * v48 + 6];
                              if ( v90 == (uint16_t)((*v50 << 8) + v50[1]) )
                                hb_set_t::add(v81, v48 + (uint16_t)(v43[3] + (v43[2] << 8)));
                              if ( v48 == v88 )
                                break;
                              v49 = v43[4];
                              ++v48;
                              v45 = v43[5];
                            }
                          }
                        }
                        else if ( v44 == 2 )
                        {
                          sub_12C8500((int)(uintptr_t)(v43), v96, v90);
                        }
                        ++v90;
                      }
                      while ( v78 > v90 );
                    }
                    v55 = (uint8_t *)&unk_2116E00;
                    v82 = (uint16_t)(v93[15] + (v93[14] << 8));
                    if ( v93[11] + (v93[10] << 8) != 0 )
                      v55 = &v93[(uint16_t)(v93[11] + (v93[10] << 8))];
                    if ( v93[15] + (v93[14] << 8) != 0 )
                    {
                      v94 = 0;
                      do
                      {
                        v56 = v55[1] + (*v55 << 8);
                        v85 = v96;
                        if ( v56 == 1 )
                        {
                          v57 = v55[5];
                          v58 = v55[4] << 8;
                          v59 = (uint16_t)(v58 + v57);
                          if ( v58 + v57 != 0 )
                          {
                            v60 = 0;
                            v91 = v59 - 1;
                            v61 = v55[4];
                            while ( 1 )
                            {
                              v62 = (uint8_t *)&unk_2116E00;
                              if ( v60 < (uint16_t)(v57 + (v61 << 8)) )
                                v62 = &v55[2 * v60 + 6];
                              if ( v94 == (uint16_t)((*v62 << 8) + v62[1]) )
                                hb_set_t::add(v85, v60 + (uint16_t)(v55[3] + (v55[2] << 8)));
                              if ( v60 == v91 )
                                break;
                              v61 = v55[4];
                              ++v60;
                              v57 = v55[5];
                            }
                          }
                        }
                        else if ( v56 == 2 )
                        {
                          sub_12C8500((int)(uintptr_t)(v55), v96, v94);
                        }
                        ++v94;
                      }
                      while ( v82 > v94 );
                    }
                  }
                  break;
                case 3u:
                  v38 = v93;
                  if ( v93[1] + (*v93 << 8) == 1 )
                  {
                    v39 = (OT::Coverage::Self *)&unk_2116E00;
                    v40 = (uint16_t)((v93[2] << 8) + v93[3]);
LABEL_46:
                    v41 = (OT::Coverage::Self *)&v38[v40];
                    if ( v40 != 0 )
                      v39 = v41;
                    OT::Coverage::add_coverage<hb_set_t>(v39, v96);
                  }
                  break;
                case 4u:
                  if ( v93[1] + (*v93 << 8) == 1 )
                  {
                    v33 = v93[3];
                    v32 = v93;
                    v34 = v93[2] << 8;
                    goto LABEL_39;
                  }
                  break;
                case 5u:
                case 6u:
                  v32 = v93;
                  if ( v93[1] + (*v93 << 8) == 1 )
                  {
                    v33 = v93[3];
                    v34 = v93[2] << 8;
LABEL_39:
                    v35 = v33 + v34;
                    v36 = (OT::Coverage::Self *)&v32[v35];
                    if ( v35 == 0 )
                      v36 = (OT::Coverage::Self *)&unk_2116E00;
                    OT::Coverage::add_coverage<hb_set_t>(v36, v96);
                    v37 = (OT::Coverage::Self *)&v93[(uint16_t)(v93[5] + (v93[4] << 8))];
                    if ( v93[5] + (v93[4] << 8) == 0 )
                      v37 = (OT::Coverage::Self *)&unk_2116E00;
                    OT::Coverage::add_coverage<hb_set_t>(v37, v96);
                  }
                  break;
                case 7u:
                  OT::Context::dispatch_OT_hb_collect_glyphs_con_a8586d(v93, v95);
                  break;
                case 8u:
                  OT::ChainContext::dispatch_OT_hb_collect_glyphs_con_a8586d(
                    (OT::ChainContextFormat3::Self *)v93,
                    (OT::hb_collect_glyphs_context_t *)v95);
                  break;
                case 9u:
                  if ( v93[1] + (*v93 << 8) != 1 )
                  {
                    v31 = 0;
                    v93 = (uint8_t *)&unk_2116E00;
                    continue;
                  }
                  v52 = (v93[5] << 16) + (v93[4] << 24) + (v93[6] << 8);
                  v53 = v93[7];
                  v30 = v53 + v52 == 0;
                  v54 = v53 + v52;
                  v31 = (uint16_t)(v93[3] + (v93[2] << 8));
                  if ( v30 )
                    v93 = (uint8_t *)&unk_2116E00;
                  else
                    v93 += v54;
                  goto LABEL_32;
              }
              break;
            }
          }
          if ( v87 == v79 )
            break;
          ++v87;
          v25 = (char *)(v84 + 4);
          v26 = v84[4];
          v23 = v84[5];
        }
      }
    }
    else if ( a2 == 1196643650 )
    {
      v9 = *(uint32_t *)(*(uint32_t *)(a1 + 72) + 16);
      v10 = (uint16_t)(*(uint8_t *)(v9 + 9) + (*(uint8_t *)(v9 + 8) << 8));
      v11 = (uint8_t *)&unk_2116E00;
      v12 = (uint8_t *)(v10 + v9);
      if ( v10 != 0 )
        v11 = v12;
      if ( a3 >= (uint16_t)(v11[1] + (*v11 << 8)) )
      {
        v14 = (uint8_t *)&unk_2116E00;
      }
      else
      {
        v13 = (uint16_t)(v11[2 * a3 + 3] + (v11[2 * a3 + 2] << 8));
        v14 = &v11[v13];
        if ( v13 == 0 )
          v14 = (uint8_t *)&unk_2116E00;
      }
      v99 = (int (*)(int, int))(uintptr_t)(OT::SubstLookup::dispatch_recurse_func_OT_hb_collect_glyphs_con_2fce9e);
      OT::SubstLookup::dispatch_OT_hb_collect_glyphs_con_a8586d((int)(uintptr_t)(v14), (OT::hb_collect_glyphs_context_t *)v95);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: OT::hb_sanitize_context_t::check_array  (binary VA: 0x12d0450)
// Original: OT::hb_sanitize_context_t::check_array
// ----------------------------------------------------------------------------
bool OT::hb_sanitize_context_t::check_array(OT::hb_sanitize_context_t::Self *self, const void *a2, unsigned int a3, unsigned int a4)
{
  bool result;
  unsigned int v5;

  if ( a3 == 0 || (result = false, a4 < 0xFFFFFFFF / a3) )
  {
    result = false;
    if ( (unsigned int)(uintptr_t)(a2) >= *((uint32_t *)self + 1) )
    {
      v5 = *((uint32_t *)self + 2);
      result = false;
      if ( (unsigned int)(uintptr_t)(a2) <= v5 )
        return a4 * a3 <= v5 - (unsigned int)(uintptr_t)(a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::Script::find_lang_sys_index  (binary VA: 0x12d04d0)
// Original: OT::Script::find_lang_sys_index
// ----------------------------------------------------------------------------
int OT::Script::find_lang_sys_index(OT::Script::Self *self, unsigned int a2, unsigned int *a3)
{
  int16_t v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int result;

  v3 = *((uint8_t *)self + 2) << 8;
  v4 = (uint16_t)(v3 + *((uint8_t *)self + 3)) - 1;
  if ( v3 + *((uint8_t *)self + 3) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (v5 + v4) >> 1;
        v7 = *((uint8_t *)self + 6 * v6 + 7)
           + (*((uint8_t *)self + 6 * v6 + 5) << 16)
           + (*((uint8_t *)self + 6 * v6 + 4) << 24)
           + (*((uint8_t *)self + 6 * v6 + 6) << 8);
        if ( a2 >= v7 )
          break;
        v4 = v6 - 1;
        if ( v5 > v6 - 1 )
          goto LABEL_7;
      }
      if ( a2 == v7 )
        break;
      v5 = v6 + 1;
      if ( v6 + 1 > v4 )
        goto LABEL_7;
    }
    result = 1;
    if ( a3 != nullptr )
      *a3 = v6;
  }
  else
  {
LABEL_7:
    if ( a3 != nullptr )
      *a3 = 0xFFFF;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::FeatureParams::sanitize  (binary VA: 0x12d0590)
// Original: OT::FeatureParams::sanitize
// ----------------------------------------------------------------------------
char OT::FeatureParams::sanitize(OT::FeatureParams::Self *self, OT::hb_sanitize_context_t::Self *a2, unsigned int a3)
{
  int v3;
  int16_t v4;
  unsigned int v5;
  uint16_t v6;
  int16_t v7;
  uint16_t v8; // si
  uint16_t v9; // si
  uint16_t v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  char *v14;

  if ( a3 != 1936292453 )
  {
    HIWORD(v3) = HIWORD(a3);
    LOWORD(v3) = 0;
    if ( v3 == 1936916480 )
    {
      LOBYTE(v4) = 0;
      if ( (unsigned int)(uintptr_t)(self) >= *((uint32_t *)a2 + 1) )
      {
        v11 = *((uint32_t *)a2 + 2);
        if ( (unsigned int)(uintptr_t)(self) <= v11 )
          LOBYTE(v4) = v11 - (unsigned int)(uintptr_t)(self) > 3;
      }
    }
    else
    {
      LOBYTE(v4) = 1;
      if ( v3 == 1668677632 )
      {
        v12 = *((uint32_t *)a2 + 1);
        LOBYTE(v4) = 0;
        if ( (unsigned int)(uintptr_t)(self) >= v12 )
        {
          v13 = *((uint32_t *)a2 + 2);
          if ( (unsigned int)(uintptr_t)(self) <= v13 && v13 - (unsigned int)(uintptr_t)(self) > 0xD )
          {
            v14 = (char *)self + 12;
            if ( v12 <= (unsigned int)(uintptr_t)(self) + 12 && v13 >= (unsigned int)(uintptr_t)(v14) && v13 - (unsigned int)(uintptr_t)(v14) > 1 )
              LOBYTE(v4) = OT::hb_sanitize_context_t::check_array(
                             a2,
                             v14,
                             3u,
                             (uint16_t)(*((uint8_t *)self + 13) + (*((uint8_t *)self + 12) << 8)));
          }
        }
      }
    }
    return v4;
  }
  LOBYTE(v4) = 0;
  if ( (unsigned int)(uintptr_t)(self) < *((uint32_t *)a2 + 1) )
    return v4;
  v5 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v5 )
    return v4;
  if ( v5 - (unsigned int)(uintptr_t)(self) <= 9 )
    return v4;
  v6 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
  if ( v6 == 0 )
    return v4;
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) != 0 )
  {
    v7 = *((uint8_t *)self + 6);
    goto LABEL_11;
  }
  v7 = *((uint8_t *)self + 6);
  if ( *((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8) != 0 )
  {
LABEL_11:
    v8 = (v7 << 8) + *((uint8_t *)self + 7);
LABEL_12:
    LOBYTE(v4) = 0;
    if ( v6 < v8 )
      return v4;
    v9 = (*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9);
    goto LABEL_14;
  }
  v8 = (v7 << 8) + *((uint8_t *)self + 7);
  if ( v8 != 0 )
    goto LABEL_12;
  LOBYTE(v4) = 1;
  v9 = *((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8);
  if ( v9 == 0 )
    return v4;
LABEL_14:
  LOBYTE(v4) = 0;
  if ( v6 <= v9 )
  {
    v10 = *((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8);
    if ( v10 > 0xFFu )
      return (uint16_t)~v10 >> 15;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: OT::Coverage::Iter::next  (binary VA: 0x12d0780)
// Original: OT::Coverage::Iter::next
// ----------------------------------------------------------------------------
OT::Coverage::Iter::Self * OT::Coverage::Iter::next(OT::Coverage::Iter::Self *self)
{
  OT::Coverage::Iter::Self *result;
  int v2;
  int v3;
  unsigned int v4;
  uint8_t *v5;
  unsigned int v6;
  int v7;

  result = self;
  if ( *(uint32_t *)self == 1 )
  {
    ++*((uint32_t *)self + 2);
  }
  else if ( *(uint32_t *)self == 2 )
  {
    v2 = *((uint32_t *)self + 1);
    v3 = *((uint32_t *)self + 3);
    ++*((uint32_t *)self + 4);
    v7 = v3;
    v4 = *((uint32_t *)self + 2);
    v5 = (uint8_t *)&unk_1CF95EC;
    if ( v4 < (uint16_t)((*(uint8_t *)(v2 + 2) << 8) + *(uint8_t *)(v2 + 3)) )
      v5 = (uint8_t *)(v2 + 6 * v4 + 4);
    if ( v7 == (uint16_t)(v5[3] + (v5[2] << 8)) )
    {
      v6 = v4 + 1;
      *((uint32_t *)self + 2) = v6;
      if ( v6 < (uint16_t)(*(uint8_t *)(v2 + 3) + (*(uint8_t *)(v2 + 2) << 8)) )
        *((uint32_t *)self + 3) = (uint16_t)(*(uint8_t *)(v2 + 6 * v6 + 5)
                                                 + (*(uint8_t *)(v2 + 6 * v6 + 4) << 8));
    }
    else
    {
      *((uint32_t *)self + 3) = v7 + 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::Coverage::intersects  (binary VA: 0x12d0870)
// Original: OT::Coverage::intersects
// ----------------------------------------------------------------------------
int OT::Coverage::intersects(OT::Coverage::Self *self, const hb_set_t *a2)
{
  uint16_t v2;
  int v3;
  unsigned int v5;
  OT::Coverage::Self *v6;
  unsigned int v7;
  unsigned int v8;
  uint8_t *v9;
  int v10;
  int v11;
  bool v12;
  typedef unsigned int _g4_t_i;
  typedef int _g4_t_v14;
  typedef OT::Coverage::Self *_g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  v2 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
  v14 = v2;
  if ( v2 == 1 )
  {
    v15 = self;
    v16 = 0;
  }
  else if ( v2 == 2 )
  {
    v11 = 0;
    v12 = *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) == 0;
    v15 = self;
    v18 = 0;
    v16 = 0;
    if ( !v12 )
      v11 = (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
    v17 = v11;
  }
  v3 = v14;
  if ( v14 == 1 )
    goto LABEL_12;
LABEL_4:
  if ( v3 == 2 )
  {
    v5 = v16;
    v6 = v15;
    for ( i = v16; ; i = v16 )
    {
      v7 = (uint16_t)(*((uint8_t *)v6 + 3) + (*((uint8_t *)v6 + 2) << 8));
      if ( v5 >= v7 )
        return 0;
      if ( v3 == 1 )
      {
        v9 = (uint8_t *)&unk_2116E00;
        v10 = (int)(uintptr_t)(v6) + 2 * i + 4;
        if ( i < v7 )
          v9 = (uint8_t *)v10;
        v8 = (uint16_t)((*v9 << 8) + v9[1]);
      }
      else
      {
        if ( v3 != 2 )
        {
          if ( (*((uint32_t *)a2 + 12) & 1) != 0 )
            return 1;
          goto LABEL_11;
        }
        v8 = (uint16_t)v17;
      }
      if ( ((1 << v8) & *((uint32_t *)a2 + (v8 >> 5) + 12)) != 0 )
        return 1;
LABEL_11:
      OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v14);
      v3 = v14;
      if ( v14 != 1 )
        goto LABEL_4;
LABEL_12:
      v5 = v16;
      v6 = v15;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::LigGlyph::get_lig_carets  (binary VA: 0x12d09f0)
// Original: OT::LigGlyph::get_lig_carets
// ----------------------------------------------------------------------------
int OT::LigGlyph::get_lig_carets(uint8_t *a1, uint32_t *a2, int a3, int a4, unsigned int a5, unsigned int *a6, int a7)
{
  unsigned int v7;
  unsigned int v8;
  uint8_t *v9;
  int v10;
  int16_t v11;
  uint8_t *v12;
  int16_t v13;
  int16_t v14;
  int16_t v15;
  uint16_t v16;
  int v17;
  int v18;
  int v19;
  int16_t v21;
  int16_t v22;
  int v23;
  int v24;
  uint32_t *v25;
  int64_t v26; // rax
  int64_t v27;
  uint32_t *v28;
  unsigned int v29;
  int64_t v30; // rax
  uint8_t *v31;
  uint32_t *v32;
  int v33;
  bool v34;
  int64_t v35; // rax
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
  typedef uint8_t *_g4_t_v46;
  typedef uint8_t *_g4_t_v47;
  typedef uint8_t *_g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  typedef uint8_t *_g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int64_t _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int64_t _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[4];
  typedef uint32_t _g4_t_v68[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v47)) > _g4_s1 ? (8u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v48)) > _g4_s2 ? (8u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v49)) > _g4_s3 ? (8u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v50)) > _g4_s4 ? (8u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v51)) > _g4_s5 ? (8u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v52)) > _g4_s6 ? (20u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v53)) > _g4_s7 ? (24u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v54)) > _g4_s8 ? (32u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v55)) > _g4_s9 ? (40u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v56)) > _g4_s10 ? (48u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v57)) > _g4_s11 ? (48u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v58)) > _g4_s12 ? (48u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v59)) > _g4_s13 ? (48u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v60)) > _g4_s14 ? (48u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v61)) > _g4_s15 ? (56u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v62)) > _g4_s16 ? (56u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v63)) > _g4_s17 ? (56u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v64)) > _g4_s18 ? (60u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v65)) > _g4_s19 ? (64u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v66)) > _g4_s20 ? (80u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v67)) > _g4_s21 ? (96u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v68)) > _g4_s22 ? (112u + sizeof(_g4_t_v68)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 112u);

  if ( a6 != nullptr )
  {
    v7 = (uint16_t)(a1[1] + (*a1 << 8));
    if ( a5 > v7 )
    {
      *a6 = 0;
    }
    else
    {
      v8 = v7 - a5;
      if ( *a6 <= v8 )
        v8 = *a6;
      v54 = v8;
      *a6 = v8;
      v9 = &a1[2 * a5 + 2];
      if ( v8 != 0 )
      {
        v52 = a3 & 0xFFFFFFFE;
        v64 = 0;
        do
        {
          v11 = v9[1];
          v12 = &a1[(uint16_t)(v11 + (*v9 << 8))];
          if ( v11 + (*v9 << 8) == 0 )
            v12 = (uint8_t *)&unk_2116E00;
          v13 = v12[1] + (*v12 << 8);
          if ( v13 == 2 )
          {
            v14 = v12[3];
            v15 = v12[2] << 8;
            v66 = 0;
            v16 = v15 + v14;
            v17 = a2[18];
            v65 = 0;
            v46 = v9;
            v18 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t, int *, int *, uint32_t))(v17 + 80))(
                    a2,
                    a2[19],
                    a4,
                    v16,
                    &v65,
                    &v66,
                    *(uint32_t *)(v17 + 124));
            v10 = 0;
            v9 = v46;
            if ( v18 != 0 )
            {
              v68[0] = 0;
              v67[0] = 0;
              if ( v52 == 4 )
              {
                v37 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a2[18] + 60))(
                        a2,
                        a2[19],
                        a4,
                        v67,
                        v68,
                        *(uint32_t *)(a2[18] + 104));
                v9 = v46;
                if ( v37 != 0
                  || (v40 = a2[18],
                      v68[0] = 0,
                      v67[0] = 0,
                      v41 = (*(int (**)(uint8_t *, uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(v40 + 64))(
                              v46,
                              a2,
                              a2[19],
                              a4,
                              v67,
                              v68,
                              *(uint32_t *)(v40 + 108)),
                      v9 = v46,
                      v41 == 0) )
                {
                  v38 = v67[0];
                  v39 = v68[0];
                }
                else
                {
                  v42 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a2[18] + 52))(
                          a2,
                          a2[19],
                          a4,
                          *(uint32_t *)(a2[18] + 96));
                  v9 = v46;
                  v38 = v67[0] - v42 / 2;
                  v39 = v68[0] - a2[15];
                  v67[0] = v38;
                  v68[0] = v39;
                }
                v66 -= v39;
                v10 = v65 - v38;
                v65 -= v38;
              }
              else
              {
                v19 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a2[18] + 64))(
                        a2,
                        a2[19],
                        a4,
                        v67,
                        v68,
                        *(uint32_t *)(a2[18] + 108));
                v9 = v46;
                if ( v19 == 0 )
                {
                  v43 = a2[18];
                  v68[0] = 0;
                  v67[0] = 0;
                  v44 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t *, uint32_t *, uint32_t))(a2[18] + 60))(
                          a2,
                          a2[19],
                          a4,
                          v67,
                          v68,
                          *(uint32_t *)(v43 + 104));
                  v9 = v46;
                  if ( v44 != 0 )
                  {
                    v45 = (*(int (**)(uint32_t *, uint32_t, int, uint32_t))(a2[18] + 52))(
                            a2,
                            a2[19],
                            a4,
                            *(uint32_t *)(a2[18] + 96));
                    v9 = v46;
                    v68[0] += a2[15];
                    v67[0] += v45 / 2;
                  }
                }
                v10 = v66 - v68[0];
                v66 -= v68[0];
                v65 -= v67[0];
              }
            }
          }
          else if ( v13 == 3 )
          {
            if ( v52 == 4 )
            {
              v32 = (uint32_t *)a2[13];
              v63 = a2[14];
              v59 = v32;
              v53 = v63 * (int64_t)(int16_t)((v12[2] << 8) + v12[3]);
              if ( v32[16] == 0 )
              {
                v50 = v9;
                sub_12C4650(v32);
                v9 = v50;
                v63 = a2[14];
                v32 = v59;
              }
              v51 = v9;
              v60 = v53 /g4_m128_lane<int64_t>(_mm_cvtsi32_si128(v32[16]), 0);
              v33 = (uint16_t)((v12[4] << 8) + v12[5]);
              v34 = v33 == 0;
              LODWORD(v35) = (uint32_t)(uintptr_t)(&v12[v33]);
              HIDWORD(v35) = a2[16];
              if ( v34 )
                LODWORD(v35) = (uint32_t)(uintptr_t)(&unk_2116E00);
              v36 = 0;
              if ( HIDWORD(v35) != 0 )
              {
                v36 = sub_12C76F0(v35, v63);
                v9 = v51;
              }
              v10 = v36 + v60;
            }
            else
            {
              v28 = (uint32_t *)a2[13];
              v62 = a2[15];
              v55 = v28;
              v57 = v62 * (int64_t)(int16_t)(v12[3] + (v12[2] << 8));
              v29 = v28[16];
              if ( v29 == 0 )
              {
                v48 = v9;
                sub_12C4650(v28);
                v62 = a2[15];
                v9 = v48;
                v29 = v55[16];
              }
              v49 = v9;
              v58 = v57 / v29;
              HIDWORD(v30) = a2[17];
              LODWORD(v30) = (uint16_t)(v12[5] + (v12[4] << 8));
              v31 = &v12[v30];
              if ( (uint32_t)v30 == 0 )
                v31 = (uint8_t *)&unk_2116E00;
              LODWORD(v30) = 0;
              if ( HIDWORD(v30) != 0 )
              {
                LODWORD(v30) = (uint32_t)(uintptr_t)(v31);
                LODWORD(v30) = sub_12C76F0(v30, v62);
                v9 = v49;
              }
              v10 = v30 + v58;
            }
          }
          else
          {
            v10 = 0;
            if ( v13 == 1 )
            {
              v61 = (uint32_t *)a2[13];
              v21 = v12[2];
              v22 = v12[3];
              if ( v52 == 4 )
                v23 = a2[14];
              else
                v23 = a2[15];
              v24 = (int16_t)(v22 + (v21 << 8));
              v56 = v23 * (v24 >> 31) + v24 * (v23 >> 31);
              v26 = (unsigned int)v23 * (uint64_t)(unsigned int)v24;
              v25 = (uint32_t *)a2[13];
              HIDWORD(v26) += v56;
              if ( v61[16] == 0 )
              {
                v27 = v26;
                v47 = v9;
                sub_12C4650(v61);
                v9 = v47;
                v26 = v27;
                v25 = v61;
              }
              v10 = v26 /g4_m128_lane<int64_t>(_mm_cvtsi32_si128(v25[16]), 0);
            }
          }
          v9 += 2;
          *(uint32_t *)(a7 + 4 * v64++) = v10;
        }
        while ( v64 != v54 );
      }
    }
  }
  return (uint16_t)(a1[1] + (*a1 << 8));
}

// ----------------------------------------------------------------------------
// Function: OT::MarkGlyphSetsFormat1::sanitize  (binary VA: 0x12d1070)
// Original: OT::MarkGlyphSetsFormat1::sanitize
// ----------------------------------------------------------------------------
int OT::MarkGlyphSetsFormat1::sanitize(OT::MarkGlyphSetsFormat1::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  unsigned int v2;
  unsigned int v3;
  char *v4;
  int v5;
  uint8_t *v6;
  unsigned int v7;
  char v8;
  int v9;
  unsigned int v10;
  int16_t v12;
  const void *v13;
  bool v14;
  const void *v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  char *v19;
  unsigned int v20;

  v19 = (char *)self + 2;
  v2 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) + 2 < v2 )
    return 0;
  v3 = *((uint32_t *)a2 + 2);
  v17 = v3;
  if ( (unsigned int)(uintptr_t)(v19) > v3 )
    return 0;
  if ( v3 - (unsigned int)(uintptr_t)(v19) <= 1 )
    return 0;
  v16 = (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  v20 = (uint16_t)v16;
  if ( !OT::hb_sanitize_context_t::check_array(a2, v19, 4u, v16) )
    return 0;
  if ( v20 != 0 )
  {
    v4 = (char *)self + 4;
    if ( v2 <= (unsigned int)(uintptr_t)(self) + 4 && v17 >= (unsigned int)(uintptr_t)(v4) )
    {
      v18 = 0;
      if ( v17 - (unsigned int)(uintptr_t)(v4) > 3 )
      {
        while ( 1 )
        {
          v5 = (uint8_t)v4[3]
             + ((uint8_t)v4[1] << 16)
             + ((uint8_t)*v4 << 24)
             + ((uint8_t)v4[2] << 8);
          if ( v5 != 0 )
          {
            v6 = (uint8_t *)self + v5;
            if ( (unsigned int)(uintptr_t)(v6) < v2 || v17 < (unsigned int)(uintptr_t)(v6) || v17 - (unsigned int)(uintptr_t)(v6) <= 1 )
              goto LABEL_11;
            v12 = v6[1] + (*v6 << 8);
            if ( v12 == 1 )
            {
              v15 = v6 + 2;
              if ( (unsigned int)(uintptr_t)(v6 + 2) >= v2 && v17 >= (unsigned int)(uintptr_t)(v15) && v17 - (unsigned int)(uintptr_t)(v15) > 1 )
              {
                v14 = OT::hb_sanitize_context_t::check_array(a2, v15, 2u, (uint16_t)((v6[2] << 8) + v6[3]));
                goto LABEL_27;
              }
LABEL_11:
              v7 = *((uint32_t *)a2 + 4);
              v8 = *((uint8_t *)a2 + 12);
              if ( v7 > 0x63 )
                return 0;
              *((uint32_t *)a2 + 4) = v7 + 1;
              if ( v8 == 0 )
                return 0;
              *v4 = 0;
              v4[1] = 0;
              v4[2] = 0;
              v4[3] = 0;
              goto LABEL_14;
            }
            if ( v12 == 2 )
            {
              v13 = v6 + 2;
              if ( (unsigned int)(uintptr_t)(v6 + 2) >= v2 && v17 >= (unsigned int)(uintptr_t)(v13) && v17 - (unsigned int)(uintptr_t)(v13) > 1 )
              {
                v14 = OT::hb_sanitize_context_t::check_array(a2, v13, 6u, (uint16_t)((v6[2] << 8) + v6[3]));
LABEL_27:
                if ( v14 )
                {
                  v9 = ++v18;
                  if ( v20 <= v18 )
                    return 1;
                  goto LABEL_15;
                }
              }
              goto LABEL_11;
            }
          }
LABEL_14:
          v9 = ++v18;
          if ( v20 <= v18 )
            return 1;
LABEL_15:
          v2 = *((uint32_t *)a2 + 1);
          v4 = &v19[4 * v9 + 2];
          if ( (unsigned int)(uintptr_t)(v4) >= v2 )
          {
            v10 = *((uint32_t *)a2 + 2);
            v17 = v10;
            if ( (unsigned int)(uintptr_t)(v4) <= v10 && v10 - (unsigned int)(uintptr_t)(v4) > 3 )
              continue;
          }
          return 0;
        }
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::RuleSet::closure  (binary VA: 0x12d12f0)
// Original: OT::RuleSet::closure
// ----------------------------------------------------------------------------
int OT::RuleSet::closure(uint8_t *a1, uint32_t *a2, int a3)
{
  uint8_t v3;
  int result;
  int16_t v5; // si
  uint8_t *v6;
  int16_t v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  uint16_t v11;
  int v12;
  uint8_t *v13;
  int i;
  int16_t v15;
  void (*v16)(uint32_t *, uint32_t);
  unsigned int v17;
  uint8_t v18;
  int v19;
  unsigned int v20;
  int v21;
  int (*v22)(uint32_t, uint8_t *, int);
  int v23;
  int v24;

  v3 = a1[1];
  result = *a1;
  v5 = *a1 << 8;
  if ( v5 + v3 != 0 )
  {
    v20 = 0;
    v24 = (uint16_t)(v5 + v3) - 1;
    v6 = a1;
    v7 = *a1;
    while ( 1 )
    {
      v8 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)(v3 + (v7 << 8)) > v20 )
        v8 = &v6[2 * v20 + 2];
      v9 = (uint8_t *)&unk_2116E00;
      v10 = (uint16_t)((*v8 << 8) + v8[1]);
      if ( v10 != 0 )
        v9 = &v6[v10];
      v11 = v9[1] + (*v9 << 8);
      if ( v11 == 0 )
        break;
      v17 = v11 - 1;
      v23 = (int)(uintptr_t)(&v9[2 * v17 + 4]);
      v21 = *(uint32_t *)(a3 + 4);
      result = (uint16_t)(v9[3] + (v9[2] << 8));
      v19 = (uint16_t)result;
      v22 = *(int (**)(uint32_t, uint8_t *, int))a3;
      if ( v17 == 0 )
        goto LABEL_12;
      v12 = 0;
      while ( 1 )
      {
        result = v22(a2[1], &v9[2 * v12 + 4], v21);
        if ( (uint8_t)result == 0 )
          break;
        if ( v17 <= ++v12 )
          goto LABEL_12;
      }
LABEL_18:
      if ( v20 == v24 )
        return result;
      v6 = a1;
      ++v20;
      v7 = *a1;
      v3 = a1[1];
    }
    v23 = (int)(uintptr_t)(v9 + 4);
    result = (uint16_t)(v9[3] + (v9[2] << 8));
    v19 = result;
LABEL_12:
    if ( v19 != 0 )
    {
      result = a2[3];
      v13 = (uint8_t *)(v23 + 2);
      for ( i = 0; i != v19; ++i )
      {
        v15 = *v13;
        v18 = v13[1];
        if ( result != 0 )
        {
          v16 = (void (*)(uint32_t *, uint32_t))a2[2];
          if ( v16 != nullptr )
          {
            a2[3] = result - 1;
            v16(a2, (uint16_t)(v18 + (v15 << 8)));
            result = a2[3] + 1;
            a2[3] = result;
          }
        }
        v13 += 4;
      }
    }
    goto LABEL_18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::RuleSet::collect_glyphs  (binary VA: 0x12d14b0)
// Original: OT::RuleSet::collect_glyphs
// ----------------------------------------------------------------------------
int OT::RuleSet::collect_glyphs(uint8_t *a1, uint32_t *a2, int a3)
{
  uint8_t v4;
  int result;
  int16_t v6; // di
  uint8_t *v7;
  int16_t v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  uint16_t v12;
  unsigned int v13;
  int v14;
  int v15;
  uint8_t *v16;
  void *empty;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  uint8_t v22;
  int v23;
  int v24;
  int v25;
  void (*v26)(int, int, int);
  uint8_t v27;
  int v28;
  unsigned int v29;
  int v30;
  uint32_t *v31;
  int v32;

  v4 = a1[1];
  result = *a1;
  v6 = *a1 << 8;
  if ( v6 + v4 != 0 )
  {
    v29 = 0;
    v32 = (uint16_t)(v6 + v4) - 1;
    v7 = a1;
    v8 = *a1;
    while ( 1 )
    {
      v9 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)(v4 + (v8 << 8)) > v29 )
        v9 = &v7[2 * v29 + 2];
      v10 = (uint8_t *)&unk_2116E00;
      v11 = (uint16_t)((*v9 << 8) + v9[1]);
      if ( v11 != 0 )
        v10 = &a1[v11];
      v12 = v10[1] + (*v10 << 8);
      if ( v12 != 0 )
      {
        v21 = v12 - 1;
        v30 = (int)(uintptr_t)(&v10[2 * v21 + 4]);
        v28 = (uint16_t)(v10[3] + (v10[2] << 8));
        v26 = *(void (**)(int, int, int))a3;
        v23 = a2[2];
        if ( v12 != 1 )
        {
          v31 = a2;
          v13 = 0;
          v14 = *(uint32_t *)(a3 + 4);
          do
          {
            v18 = (int)(uintptr_t)(&v10[2 * v13++ + 4]);
            v26(v23, v18, v14);
          }
          while ( v21 > v13 );
          a2 = v31;
        }
      }
      else
      {
        v30 = (int)(uintptr_t)(v10 + 4);
        v28 = (uint16_t)(v10[3] + (v10[2] << 8));
      }
      result = v28;
      if ( v28 != 0 )
      {
        v15 = 0;
        v16 = (uint8_t *)(v30 + 2);
        do
        {
          result = a2[6];
          v22 = *v16;
          v27 = v16[1];
          if ( result != 0 )
          {
            result = a2[5];
            if ( result != 0 )
            {
              v24 = a2[4];
              result = (int)(uintptr_t)(hb_set_get_empty());
              if ( v24 != result )
              {
                v20 = a2[1];
                v19 = a2[2];
                v25 = a2[3];
                empty = hb_set_get_empty();
                a2[3] = (uint32_t)(uintptr_t)(empty);
                a2[2] = (uint32_t)(uintptr_t)(empty);
                a2[1] = (uint32_t)(uintptr_t)(empty);
                --a2[6];
                result = ((int (*)(uint32_t *, uint32_t))a2[5])(a2, (uint16_t)((v22 << 8) + v27));
                ++a2[6];
                a2[1] = v20;
                a2[3] = v25;
                a2[2] = v19;
              }
            }
          }
          ++v15;
          v16 += 4;
        }
        while ( v15 != v28 );
      }
      if ( v29 == v32 )
        break;
      v7 = a1;
      ++v29;
      v8 = *a1;
      v4 = a1[1];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainRuleSet::closure  (binary VA: 0x12d16e0)
// Original: OT::ChainRuleSet::closure
// ----------------------------------------------------------------------------
int OT::ChainRuleSet::closure(uint8_t *a1, uint32_t *a2, int a3)
{
  uint8_t v4;
  int result;
  int16_t v6; // si
  uint8_t *v7;
  int16_t v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  int v12;
  uint8_t *v13;
  uint16_t v14;
  uint8_t *v15;
  uint8_t *v16;
  uint8_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint8_t *v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v25;
  int16_t v26;
  void (*v27)(uint32_t *, uint32_t);
  uint8_t *v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  uint8_t *v33;
  int v34;
  uint8_t *v35;
  uint8_t v36;
  int (*v37)(uint32_t, uint8_t *, int);
  unsigned int v38;
  int v39;
  uint8_t *v40;
  unsigned int v41;
  int v42;
  uint8_t v43;
  uint8_t v44;
  uint8_t *v45;
  int v46;
  uint8_t *v47;

  v4 = a1[1];
  result = *a1;
  v6 = *a1 << 8;
  if ( v6 + v4 != 0 )
  {
    v38 = 0;
    v46 = (uint16_t)(v6 + v4) - 1;
    v7 = a1;
    v8 = *a1;
    while ( 1 )
    {
      v41 = 0;
      v9 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)(v4 + (v8 << 8)) > v38 )
        v9 = &v7[2 * v38 + 2];
      v10 = (uint8_t *)&unk_2116E00;
      v11 = (uint16_t)((*v9 << 8) + v9[1]);
      if ( v11 != 0 )
        v10 = &a1[v11];
      v12 = 2;
      v32 = (uint16_t)(v10[1] + (*v10 << 8));
      v39 = v32 + 1;
      v13 = &v10[2 * v32 + 2];
      v14 = v13[1] + (*v13 << 8);
      if ( v14 != 0 )
      {
        v41 = v14;
        v12 = 2 * v14;
      }
      v15 = &v13[v12];
      v45 = v13 + 2;
      v16 = v10 + 2;
      v42 = (uint16_t)(v15[1] + (*v15 << 8));
      v17 = &v15[2 * v42 + 2];
      v47 = v15 + 2;
      v43 = *v17;
      v44 = v17[1];
      v37 = *(int (**)(uint32_t, uint8_t *, int))a3;
      if ( v32 != 0 )
        break;
LABEL_14:
      v34 = *(uint32_t *)(a3 + 8);
      if ( v41 > 1 )
      {
        v40 = v17;
        v28 = v45;
        v29 = 1;
        while ( 1 )
        {
          result = v37(a2[1], v28, v34);
          if ( (uint8_t)result == 0 )
            goto LABEL_29;
          ++v29;
          v28 += 2;
          if ( v29 == v41 )
          {
            v17 = v40;
            v37 = *(int (**)(uint32_t, uint8_t *, int))a3;
            break;
          }
        }
      }
      v21 = v47;
      if ( v42 != 0 )
      {
        v35 = v17;
        v19 = a2;
        v22 = 1;
        v23 = *(uint32_t *)(a3 + 12);
        while ( 1 )
        {
          v31 = v19;
          result = v37(v19[1], v21, v23);
          v19 = v31;
          if ( (uint8_t)result == 0 )
            goto LABEL_28;
          ++v22;
          v21 += 2;
          if ( v42 + 1 == v22 )
          {
            v17 = v35;
            a2 = v31;
            break;
          }
        }
      }
      result = v44;
      if ( v44 + (v43 << 8) == 0 )
        goto LABEL_29;
      result = a2[3];
      v24 = v17 + 4;
      v25 = 1;
      do
      {
        v26 = *v24;
        v36 = v24[1];
        if ( result != 0 )
        {
          v27 = (void (*)(uint32_t *, uint32_t))a2[2];
          if ( v27 != nullptr )
          {
            a2[3] = result - 1;
            v27(a2, (uint16_t)(v36 + (v26 << 8)));
            result = a2[3] + 1;
            a2[3] = result;
          }
        }
        ++v25;
        v24 += 4;
      }
      while ( v25 != (uint16_t)(v44 + (v43 << 8)) + 1 );
      if ( v38 == v46 )
        return result;
LABEL_30:
      ++v38;
      v7 = a1;
      v8 = *a1;
      v4 = a1[1];
    }
    v33 = &v15[2 * v42 + 2];
    v18 = 1;
    v19 = a2;
    v20 = *(uint32_t *)(a3 + 4);
    while ( 1 )
    {
      v30 = v19;
      result = v37(v19[1], v16, v20);
      v19 = v30;
      if ( (uint8_t)result == 0 )
        break;
      ++v18;
      v16 += 2;
      if ( v39 == v18 )
      {
        v17 = v33;
        a2 = v30;
        v37 = *(int (**)(uint32_t, uint8_t *, int))a3;
        goto LABEL_14;
      }
    }
LABEL_28:
    a2 = v19;
LABEL_29:
    if ( v38 == v46 )
      return result;
    goto LABEL_30;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainRuleSet::collect_glyphs  (binary VA: 0x12d19d0)
// Original: OT::ChainRuleSet::collect_glyphs
// ----------------------------------------------------------------------------
int OT::ChainRuleSet::collect_glyphs(uint8_t *a1, uint32_t *a2, int a3)
{
  uint8_t v3;
  int result;
  int16_t v5; // di
  int16_t v6;
  uint8_t *v7;
  uint8_t *v8;
  uint8_t *v9;
  uint16_t v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  uint16_t v16;
  uint8_t *v17;
  uint8_t *v18;
  void (*v19)(int, uint8_t *, int);
  int v20;
  uint8_t *v21;
  int v22;
  uint8_t *v23;
  int v24;
  uint8_t *v25;
  uint8_t *v26;
  int v27;
  void *empty;
  uint8_t *v29;
  uint8_t *v30;
  uint8_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint8_t v37;
  void (*v38)(int, uint8_t *, int);
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint8_t v44;
  int v45;
  unsigned int v46;
  uint8_t *v47;
  int v48;
  int v49;
  int v50;
  uint8_t *v51;
  uint8_t *v52;
  int v53;

  v3 = a1[1];
  result = *a1;
  v5 = *a1 << 8;
  if ( v5 + v3 != 0 )
  {
    v46 = 0;
    v53 = (uint16_t)(v5 + v3) - 1;
    v6 = *a1;
    v7 = a1;
    while ( 1 )
    {
      v45 = 0;
      v8 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)(v3 + (v6 << 8)) > v46 )
        v8 = &v7[2 * v46 + 2];
      v9 = v7;
      v10 = v8[1] + (*v8 << 8);
      v11 = (uint8_t *)&unk_2116E00;
      v12 = 2;
      v13 = &v9[v10];
      if ( v10 != 0 )
        v11 = v13;
      v14 = (uint16_t)(v11[1] + (*v11 << 8));
      v49 = v14 + 1;
      v15 = &v11[2 * v14 + 2];
      v16 = v15[1] + (*v15 << 8);
      if ( v16 != 0 )
      {
        v45 = v16;
        v12 = 2 * v16;
      }
      v17 = &v15[v12];
      v18 = v11 + 2;
      v52 = v15 + 2;
      v48 = (uint16_t)(v17[1] + (*v17 << 8));
      v47 = &v17[2 * v48 + 2];
      v51 = v17 + 2;
      v50 = (uint16_t)(v47[1] + (*v47 << 8));
      v34 = *(uint32_t *)(a3 + 4);
      v41 = a2[1];
      v19 = *(void (**)(int, uint8_t *, int))a3;
      if ( v14 != 0 )
      {
        v38 = *(void (**)(int, uint8_t *, int))a3;
        v20 = 1;
        v21 = v18;
        do
        {
          ++v20;
          v29 = v21;
          v21 += 2;
          v38(v41, v29, v34);
        }
        while ( v49 != v20 );
        v19 = *(void (**)(int, uint8_t *, int))a3;
      }
      v35 = *(uint32_t *)(a3 + 8);
      if ( v45 != 0 )
      {
        v42 = a2[2];
        if ( v45 != 1 )
        {
          v22 = 1;
          v23 = v52;
          do
          {
            ++v22;
            v30 = v23;
            v23 += 2;
            v19(v42, v30, v35);
          }
          while ( v22 != v45 );
          v19 = *(void (**)(int, uint8_t *, int))a3;
        }
      }
      v36 = *(uint32_t *)(a3 + 12);
      v43 = a2[3];
      if ( v48 != 0 )
      {
        v24 = 1;
        v25 = v51;
        do
        {
          ++v24;
          v31 = v25;
          v25 += 2;
          v19(v43, v31, v36);
        }
        while ( v48 + 1 != v24 );
      }
      result = v50;
      if ( v50 != 0 )
      {
        v26 = v47 + 4;
        v27 = 1;
        do
        {
          result = a2[6];
          v37 = *v26;
          v44 = v26[1];
          if ( result != 0 )
          {
            result = a2[5];
            if ( result != 0 )
            {
              v39 = a2[4];
              result = (int)(uintptr_t)(hb_set_get_empty());
              if ( v39 != result )
              {
                v33 = a2[1];
                v32 = a2[2];
                v40 = a2[3];
                empty = hb_set_get_empty();
                a2[3] = (uint32_t)(uintptr_t)(empty);
                a2[2] = (uint32_t)(uintptr_t)(empty);
                a2[1] = (uint32_t)(uintptr_t)(empty);
                --a2[6];
                result = ((int (*)(uint32_t *, uint32_t))a2[5])(a2, (uint16_t)((v37 << 8) + v44));
                ++a2[6];
                a2[1] = v33;
                a2[3] = v40;
                a2[2] = v32;
              }
            }
          }
          ++v27;
          v26 += 4;
        }
        while ( v27 != v50 + 1 );
      }
      if ( v46 == v53 )
        break;
      ++v46;
      v7 = a1;
      v6 = *a1;
      v3 = a1[1];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContextFormat2::closure  (binary VA: 0x12d1cf0)
// Original: OT::ChainContextFormat2::closure
// ----------------------------------------------------------------------------
unsigned int OT::ChainContextFormat2::closure(OT::ChainContextFormat2::Self *self, const hb_set_t **a2)
{
  OT::Coverage::Self *v2;
  unsigned int result;
  int v4;
  char *v5;
  bool v6;
  int16_t v7;
  int16_t v8;
  uint16_t v9;
  uint8_t *v10;
  int16_t v11;
  int16_t v12;
  uint16_t v13;
  char *v14;
  void *v15;
  unsigned int v16;
  uint8_t *v17;
  unsigned int v18;
  uint8_t *v19;
  uint16_t v20;
  uint8_t *v21;
  unsigned int v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef uint32_t _g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v26)) > _g4_s3 ? (44u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v27)) > _g4_s4 ? (48u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);

  v2 = (OT::Coverage::Self *)((OT::ChainContextFormat2::Self *)((char *)self
                                 + (uint16_t)(*((uint8_t *)self + 3)
                                                    + (*((uint8_t *)self + 2) << 8))));
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) == 0 )
    v2 = (OT::Coverage::Self *)&unk_2116E00;
  result = OT::Coverage::intersects(v2, a2[1]);
  if ( (uint8_t)result != 0 )
  {
    v4 = (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
    v5 = (char *)self + v4;
    v6 = v4 == 0;
    v7 = *((uint8_t *)self + 6);
    v8 = *((uint8_t *)self + 7);
    if ( v6 )
      v5 = (char *)&unk_2116E00;
    v27[1] = (uint32_t)(uintptr_t)(v5);
    v9 = v8 + (v7 << 8);
    v10 = (uint8_t *)self + v9;
    v6 = v9 == 0;
    v11 = *((uint8_t *)self + 8);
    v12 = *((uint8_t *)self + 9);
    if ( v6 )
      v10 = (uint8_t *)&unk_2116E00;
    v27[2] = (uint32_t)(uintptr_t)(v10);
    v13 = v12 + (v11 << 8);
    v14 = (char *)self + v13;
    v6 = v13 == 0;
    v15 = &unk_2116E00;
    if ( !v6 )
      v15 = v14;
    v27[3] = (uint32_t)(uintptr_t)(v15);
    v27[0] = (uint32_t)(uintptr_t)(sub_12C7A90);
    result = (uint16_t)(*((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8));
    v23 = result;
    if ( *((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8) != 0 )
    {
      v16 = 0;
      while ( 1 )
      {
        v24 = (int)(uintptr_t)(a2[1]);
        result = v10[1] + (*v10 << 8);
        if ( (uint16_t)result != 1 )
          break;
        result = (uint16_t)(v10[5] + (v10[4] << 8));
        v25 = result;
        if ( v16 != 0 )
          goto LABEL_16;
        v26 = 0xFFFFFFFF;
        result = hb_set_next(v24, &v26);
        if ( result == 0 )
          goto LABEL_13;
        v22 = (uint16_t)(v10[3] + (v10[2] << 8));
        if ( v22 <= v26 && (v26 = v25 + v22 - 1, (result = hb_set_next(v24, &v26)) == 0) )
        {
LABEL_16:
          if ( v25 != 0 )
          {
            result = 0;
            do
            {
              v17 = &v10[2 * result + 6];
              if ( result >= (uint16_t)(v10[5] + (v10[4] << 8)) )
                v17 = (uint8_t *)&unk_2116E00;
              if ( v16 == (uint16_t)(v17[1] + (*v17 << 8)) )
              {
                v18 = result + (uint16_t)(v10[3] + (v10[2] << 8));
                if ( v18 <= 0xFFFF && ((1 << v18) & *(uint32_t *)(v24 + 4 * (v18 >> 5) + 48)) != 0 )
                  goto LABEL_24;
              }
            }
            while ( v25 > ++result );
          }
LABEL_13:
          if ( v23 <= ++v16 )
            return result;
        }
        else
        {
LABEL_24:
          v19 = (uint8_t *)self + 2 * v16 + 12;
          if ( (uint16_t)((*((uint8_t *)self + 10) << 8) + *((uint8_t *)self + 11)) <= v16 )
            v19 = (uint8_t *)&unk_2116E00;
          v20 = v19[1] + (*v19 << 8);
          v21 = (uint8_t *)self + v20;
          if ( v20 == 0 )
            v21 = (uint8_t *)&unk_2116E00;
          ++v16;
          result = OT::ChainRuleSet::closure(v21, (uint32_t *)(a2), (int)(uintptr_t)(v27));
          if ( v23 <= v16 )
            return result;
        }
      }
      if ( (uint16_t)result != 2 )
        goto LABEL_13;
      result = sub_12C7830((int)(uintptr_t)(v10), v24, v16);
      if ( (uint8_t)result == 0 )
        goto LABEL_13;
      goto LABEL_24;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContextFormat3::closure  (binary VA: 0x12d1fe0)
// Original: OT::ChainContextFormat3::closure
// ----------------------------------------------------------------------------
int OT::ChainContextFormat3::closure(OT::ChainContextFormat3::Self *self, const hb_set_t **a2)
{
  OT::ChainContextFormat3::Self *v2;
  const hb_set_t **v3;
  uint8_t *v4;
  uint8_t *v5;
  OT::Coverage::Self *v6;
  int result;
  uint8_t *v8;
  uint16_t v9;
  uint8_t *v10;
  uint8_t *v11;
  const hb_set_t **v12;
  int v13;
  uint8_t *v14;
  uint8_t *v15;
  int v16;
  int16_t v17;
  const hb_set_t *v18;
  uint8_t *v19;
  const hb_set_t **v20;
  unsigned int v21;
  int v22;
  uint8_t v23;
  int v24;
  uint8_t *v25;
  int v26;
  int v27;
  int v28;
  uint8_t v29;
  uint8_t v30;
  int v31;
  int v32;
  int v33;
  uint8_t *v34;

  v2 = self;
  v3 = a2;
  v4 = (uint8_t *)self
     + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
     + 4;
  v5 = (uint8_t *)self
     + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
     + 6;
  v6 = (OT::Coverage::Self *)&unk_2116E00;
  if ( *((uint8_t *)self
       + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
       + 5)
     + (*v4 << 8) == 0 )
    v5 = (uint8_t *)&unk_2116E00;
  if ( v5[1] + (*v5 << 8) != 0 )
    v6 = (OT::Coverage::Self *)((OT::ChainContextFormat3::Self *)((char *)self + (uint16_t)(v5[1] + (*v5 << 8))));
  result = OT::Coverage::intersects(v6, a2[1]);
  if ( (uint8_t)result != 0 )
  {
    v21 = (uint16_t)(v4[1] + (*v4 << 8));
    v8 = &v4[2 * v21 + 2];
    v9 = v4[2 * v21 + 3] + (*v8 << 8);
    v31 = (int)(uintptr_t)(v4 + 4);
    v10 = (uint8_t *)self + 4;
    v24 = v9;
    v28 = v9 + 1;
    v11 = &v8[2 * v28];
    v33 = (int)(uintptr_t)(v8 + 2);
    v29 = *v11;
    v30 = v11[1];
    if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) != 0 )
    {
      v34 = &v8[2 * v28];
      v26 = (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8)) + 1;
      v12 = a2;
      v13 = 1;
      while ( 1 )
      {
        v20 = v12;
        result = sub_12C8740(v12[1], v10, (int)(uintptr_t)(self));
        v12 = v20;
        if ( (uint8_t)result == 0 )
          break;
        ++v13;
        v10 += 2;
        if ( v13 == v26 )
        {
          v2 = self;
          v3 = v20;
          v11 = v34;
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      if ( v21 > 1 )
      {
        v19 = (uint8_t *)v31;
        v27 = 1;
        v32 = (int)(uintptr_t)(v11);
        while ( 1 )
        {
          result = sub_12C8740(v3[1], v19, (int)(uintptr_t)(v2));
          if ( (uint8_t)result == 0 )
            break;
          ++v27;
          v19 += 2;
          if ( v21 == v27 )
          {
            v11 = (uint8_t *)v32;
            goto LABEL_13;
          }
        }
      }
      else
      {
LABEL_13:
        if ( v24 != 0 )
        {
          v14 = (uint8_t *)v33;
          v22 = 1;
          v25 = v11;
          while ( 1 )
          {
            result = sub_12C8740(v3[1], v14, (int)(uintptr_t)(v2));
            if ( (uint8_t)result == 0 )
              break;
            ++v22;
            v14 += 2;
            if ( v28 == v22 )
            {
              v11 = v25;
              goto LABEL_18;
            }
          }
        }
        else
        {
LABEL_18:
          result = v30;
          if ( v30 + (v29 << 8) != 0 )
          {
            result = (int)(uintptr_t)(v3[3]);
            v15 = v11 + 4;
            v16 = 1;
            do
            {
              v17 = *v15;
              v23 = v15[1];
              if ( result != 0 )
              {
                v18 = v3[2];
                if ( v18 != nullptr )
                {
                  v3[3] = (const hb_set_t *)(result - 1);
                  ((void (*)(const hb_set_t **, uint32_t))v18)(v3, (uint16_t)(v23 + (v17 << 8)));
                  result = (int)(uintptr_t)(v3[3]) + 1;
                  v3[3] = (const hb_set_t *)result;
                }
              }
              ++v16;
              v15 += 4;
            }
            while ( v16 != (uint16_t)(v30 + (v29 << 8)) + 1 );
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::GSUBGPOS::find_script_index  (binary VA: 0x12d2250)
// Original: OT::GSUBGPOS::find_script_index
// ----------------------------------------------------------------------------
int OT::GSUBGPOS::find_script_index(OT::GSUBGPOS::Self *self, unsigned int a2, unsigned int *a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int16_t v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int result;
  uint8_t *v11;

  v3 = (uint8_t *)self
     + (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
  if ( *((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8) == 0 )
    v3 = (uint8_t *)&unk_2116E00;
  v11 = v3;
  v4 = v3;
  v5 = *v3 << 8;
  v6 = (uint16_t)(v5 + v4[1]) - 1;
  if ( v5 + v4[1] != 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (v7 + v6) >> 1;
        v9 = v11[6 * v8 + 5] + (v11[6 * v8 + 3] << 16) + (v11[6 * v8 + 2] << 24) + (v11[6 * v8 + 4] << 8);
        if ( a2 >= v9 )
          break;
        v6 = v8 - 1;
        if ( v7 > v8 - 1 )
          goto LABEL_9;
      }
      if ( a2 == v9 )
        break;
      v7 = v8 + 1;
      if ( v8 + 1 > v6 )
        goto LABEL_9;
    }
    result = 1;
    if ( a3 != nullptr )
      *a3 = v8;
  }
  else
  {
LABEL_9:
    if ( a3 != nullptr )
      *a3 = 0xFFFF;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::MultipleSubstFormat1::closure  (binary VA: 0x12d2330)
// Original: OT::MultipleSubstFormat1::closure
// ----------------------------------------------------------------------------
int OT::MultipleSubstFormat1::closure(OT::MultipleSubstFormat1::Self *self, OT::hb_closure_context_t *a2)
{
  uint8_t *v2;
  uint16_t v3;
  int result;
  unsigned int v5;
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  uint8_t v9;
  int16_t v10; // si
  int v11;
  unsigned int v12;
  int16_t v13;
  uint8_t *v14;
  unsigned int v15;
  int v16;
  int v17;
  uint8_t *v18;
  unsigned int v19;
  uint8_t *v20;
  int v21;
  bool v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef hb_set_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v30)) > _g4_s7 ? (32u + sizeof(_g4_t_v30)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);

  v2 = (uint8_t *)&unk_2116E00;
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) != 0 )
    v2 = (uint8_t *)self
       + (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  v3 = v2[1] + (*v2 << 8);
  v26 = v3;
  if ( v3 == 1 )
  {
    v27 = v2;
    v28 = 0;
  }
  else if ( v3 == 2 )
  {
    v21 = 0;
    v22 = v2[3] + (v2[2] << 8) == 0;
    v27 = v2;
    v30 = 0;
    v28 = 0;
    if ( !v22 )
      v21 = (uint16_t)(v2[5] + (v2[4] << 8));
    v29 = v21;
  }
  while ( 1 )
  {
    result = v26;
    if ( v26 == 1 )
    {
      v5 = v28;
      v6 = v27;
    }
    else
    {
      if ( v26 != 2 )
        return result;
      v6 = v27;
      v5 = v28;
    }
    v24 = (uint16_t)(v6[3] + (v6[2] << 8));
    if ( v5 >= v24 )
      break;
    if ( v26 == 1 )
    {
      v17 = (int)(uintptr_t)(&v6[2 * v5 + 4]);
      v18 = (uint8_t *)&unk_2116E00;
      if ( v5 < v24 )
        v18 = (uint8_t *)v17;
      v19 = (uint16_t)((*v18 << 8) + v18[1]);
      v16 = 1 << v19;
      v15 = v19 >> 5;
    }
    else
    {
      v15 = (uint16_t)v29 >> 5;
      v16 = 1 << v29;
    }
    v25 = *((hb_set_t **)a2 + 1);
    if ( (v16 & *((uint32_t *)v25 + v15 + 12)) != 0 )
    {
      if ( v26 != 1 )
        LOWORD(v5) = v30;
      v20 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5)) > (uint16_t)v5 )
        v20 = (uint8_t *)self + 2 * (uint16_t)v5 + 6;
      v7 = (uint8_t *)&unk_2116E00;
      v8 = (uint16_t)((*v20 << 8) + v20[1]);
      if ( v8 != 0 )
        v7 = (uint8_t *)self + v8;
      v9 = v7[1];
      v10 = *v7 << 8;
      v11 = (uint16_t)(v10 + v9);
      if ( v10 + v9 != 0 )
      {
        v12 = 0;
        v23 = v11 - 1;
        v13 = *v7;
        while ( 1 )
        {
          v14 = (uint8_t *)&unk_2116E00;
          if ( (uint16_t)(v9 + (v13 << 8)) > v12 )
            v14 = &v7[2 * v12 + 2];
          hb_set_t::add(v25, (uint16_t)((*v14 << 8) + v14[1]));
          if ( v12 == v23 )
            break;
          ++v12;
          v13 = *v7;
          v9 = v7[1];
          v25 = *((hb_set_t **)a2 + 1);
        }
      }
    }
    OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v26);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSubstFormat1::closure  (binary VA: 0x12d25e0)
// Original: OT::LigatureSubstFormat1::closure
// ----------------------------------------------------------------------------
int OT::LigatureSubstFormat1::closure(OT::LigatureSubstFormat1::Self *self, OT::hb_closure_context_t *a2)
{
  uint8_t *v2;
  uint16_t v3;
  int result;
  unsigned int v5;
  uint8_t *v6;
  hb_set_t *v7;
  int v8;
  uint8_t *v9;
  uint8_t v10;
  int16_t v11;
  int16_t v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  unsigned int v16;
  int v17;
  uint8_t *v18;
  int v19;
  int v20;
  uint8_t *v21;
  int v22;
  bool v23;
  typedef int _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v27)) > _g4_s3 ? (28u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v32)) > _g4_s8 ? (40u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v34)) > _g4_s10 ? (48u + sizeof(_g4_t_v34)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);

  v2 = (uint8_t *)&unk_2116E00;
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) != 0 )
    v2 = (uint8_t *)self
       + (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  v3 = v2[1] + (*v2 << 8);
  v30 = v3;
  if ( v3 == 1 )
  {
    v31 = v2;
    v32 = 0;
  }
  else if ( v3 == 2 )
  {
    v22 = 0;
    v23 = v2[3] + (v2[2] << 8) == 0;
    v31 = v2;
    v34 = 0;
    v32 = 0;
    if ( !v23 )
      v22 = (uint16_t)(v2[5] + (v2[4] << 8));
    v33 = v22;
  }
  while ( 1 )
  {
    result = v30;
    if ( v30 == 1 )
    {
      v5 = v32;
      v6 = v31;
    }
    else
    {
      if ( v30 != 2 )
        return result;
      v6 = v31;
      v5 = v32;
    }
    v27 = (uint16_t)(v6[3] + (v6[2] << 8));
    if ( v5 >= v27 )
      return result;
    if ( v30 == 1 )
    {
      v20 = (int)(uintptr_t)(&v6[2 * v5 + 4]);
      v21 = (uint8_t *)&unk_2116E00;
      if ( v5 < v27 )
        v21 = (uint8_t *)v20;
      v29 = (uint16_t)((*v21 << 8) + v21[1]) >> 5;
      v19 = 1 << v21[1];
    }
    else
    {
      v29 = (uint16_t)v33 >> 5;
      v19 = 1 << v33;
    }
    v7 = *((hb_set_t **)a2 + 1);
    if ( (v19 & *((uint32_t *)v7 + v29 + 12)) != 0 )
    {
      if ( v30 != 1 )
        LOWORD(v5) = v34;
      v18 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5)) > (uint16_t)v5 )
        v18 = (uint8_t *)self + 2 * (uint16_t)v5 + 6;
      v8 = (uint16_t)((*v18 << 8) + v18[1]);
      v9 = (uint8_t *)self + v8;
      if ( v8 == 0 )
        v9 = (uint8_t *)&unk_2116E00;
      v25 = v9;
      v10 = v9[1];
      v11 = *v9;
      if ( (v11 << 8) + v10 != 0 )
      {
        v26 = 0;
        v24 = (uint16_t)((v11 << 8) + v10) - 1;
        v12 = *v9;
        while ( 1 )
        {
          v13 = (uint8_t *)&unk_2116E00;
          if ( (uint16_t)(v10 + (v12 << 8)) > v26 )
            v13 = &v25[2 * v26 + 2];
          v14 = (uint16_t)((*v13 << 8) + v13[1]);
          v15 = &v25[v14];
          if ( v14 == 0 )
            v15 = (uint8_t *)&unk_2116E00;
          v28 = v15;
          v16 = (uint16_t)((v15[2] << 8) + v15[3]);
          if ( v16 <= 1 )
          {
LABEL_27:
            hb_set_t::add(v7, (uint16_t)(v28[1] + (*v28 << 8)));
          }
          else
          {
            v17 = 1;
            while ( ((1 << v28[2 * v17 + 3])
                   & *((uint32_t *)v7 + ((uint16_t)(v28[2 * v17 + 3] + (v28[2 * v17 + 2] << 8)) >> 5) + 12)) != 0 )
            {
              if ( v16 <= ++v17 )
                goto LABEL_27;
            }
          }
          if ( v26 == v24 )
            break;
          ++v26;
          v12 = *v25;
          v7 = *((hb_set_t **)a2 + 1);
          v10 = v25[1];
        }
      }
    }
    OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v30);
  }
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSubstFormat1::collect_glyphs  (binary VA: 0x12d2930)
// Original: OT::LigatureSubstFormat1::collect_glyphs
// ----------------------------------------------------------------------------
OT::Coverage::Iter::Self * OT::LigatureSubstFormat1::collect_glyphs(OT::LigatureSubstFormat1::Self *self, OT::hb_collect_glyphs_context_t *a2)
{
  OT::Coverage::Iter::Self *result;
  uint16_t v3;
  int v4;
  unsigned int v5;
  bool v6;
  int v7;
  int v8;
  uint8_t *v9;
  uint8_t v10;
  int16_t v11;
  uint8_t *v12;
  int16_t v13;
  uint8_t *v14;
  uint8_t *v15;
  int v16;
  uint8_t v17;
  int16_t v18;
  unsigned int v19;
  unsigned int v20;
  uint8_t *v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  uint8_t *v25;
  uint16_t v26;
  uint8_t *v27;
  uint8_t *v28;
  int v29;
  unsigned int v30;
  int v31;
  bool v32;
  int16_t v33;
  typedef uint8_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t *_g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef uint8_t *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t *_g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v35)) > _g4_s1 ? (12u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v36)) > _g4_s2 ? (16u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v37)) > _g4_s3 ? (20u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v38)) > _g4_s4 ? (24u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v39)) > _g4_s5 ? (28u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v43)) > _g4_s9 ? (40u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v44)) > _g4_s10 ? (44u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v45)) > _g4_s11 ? (48u + sizeof(_g4_t_v45)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);

  result = (OT::Coverage::Iter::Self *)&unk_2116E00;
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) != 0 )
    result = (OT::Coverage::Iter::Self *)((OT::LigatureSubstFormat1::Self *)((char *)self
                                        + (uint16_t)(*((uint8_t *)self + 3)
                                                           + (*((uint8_t *)self + 2) << 8))));
  v3 = *((uint8_t *)result + 1) + (*(uint8_t *)result << 8);
  v41 = v3;
  if ( v3 == 1 )
  {
    v42 = (uint8_t *)result;
    v43 = 0;
  }
  else if ( v3 == 2 )
  {
    v31 = 0;
    v32 = *((uint8_t *)result + 3) + (*((uint8_t *)result + 2) << 8) == 0;
    v42 = (uint8_t *)result;
    v45 = 0;
    v43 = 0;
    if ( !v32 )
    {
      v33 = *((uint8_t *)result + 4);
      result = (OT::Coverage::Iter::Self *)*((uint8_t *)result + 5);
      v31 = (uint16_t)((uint16_t)(uintptr_t)(result) + (v33 << 8));
    }
    v44 = v31;
  }
  while ( 1 )
  {
    v4 = v41;
    if ( v41 == 1 )
    {
      result = (OT::Coverage::Iter::Self *)v42;
      v39 = v43;
      v5 = (uint16_t)(v42[3] + (v42[2] << 8));
      v6 = v43 < v5;
    }
    else
    {
      if ( v41 != 2 )
        return result;
      result = (OT::Coverage::Iter::Self *)v42;
      v39 = v43;
      v5 = (uint16_t)(v42[3] + (v42[2] << 8));
      v6 = v43 < v5;
    }
    if ( !v6 )
      break;
    if ( v41 == 1 )
    {
      v28 = (uint8_t *)&unk_2116E00;
      v29 = (int)(uintptr_t)(result) + 2 * v39 + 4;
      if ( v39 < v5 )
        v28 = (uint8_t *)v29;
      v30 = (uint16_t)(v28[1] + (*v28 << 8));
    }
    else
    {
      v30 = (uint16_t)v44;
    }
    v7 = *((uint32_t *)a2 + 2);
    if ( *(uint8_t *)(v7 + 44) == 0 )
      *(uint32_t *)(v7 + 4 * (v30 >> 5) + 48) |= 1 << v30;
    if ( v4 == 1 )
      v26 = v39;
    else
      v26 = v45;
    v27 = (uint8_t *)&unk_2116E00;
    if ( (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5)) > v26 )
      v27 = (uint8_t *)self + 2 * v26 + 6;
    v8 = (uint16_t)((*v27 << 8) + v27[1]);
    v9 = (uint8_t *)self + v8;
    if ( v8 == 0 )
      v9 = (uint8_t *)&unk_2116E00;
    v36 = v9;
    v10 = v9[1];
    v11 = *v9;
    if ( (v11 << 8) + v10 != 0 )
    {
      v37 = 0;
      v35 = (uint16_t)((v11 << 8) + v10) - 1;
      v12 = v9;
      v13 = *v9;
      while ( 1 )
      {
        v14 = (uint8_t *)&unk_2116E00;
        if ( (uint16_t)(v10 + (v13 << 8)) > v37 )
          v14 = &v12[2 * v37 + 2];
        v15 = (uint8_t *)&unk_2116E00;
        v16 = (uint16_t)((*v14 << 8) + v14[1]);
        if ( v16 != 0 )
          v15 = &v36[v16];
        v17 = v15[3];
        v18 = v15[2];
        v19 = (uint16_t)((v18 << 8) + v17);
        if ( v19 > 1 )
        {
          v40 = v19 - 1;
          v34 = v15;
          v20 = 0;
          v38 = v15 + 2;
          v21 = v15 + 2;
          while ( 1 )
          {
            v22 = v20 + 1;
            v23 = (int)(uintptr_t)(&v21[2 * v20 + 2]);
            v24 = (uint16_t)(v17 + (v18 << 8));
            v25 = (uint8_t *)&unk_2116E00;
            if ( v24 > v22 )
              v25 = (uint8_t *)v23;
            hb_set_t::add(*((hb_set_t **)a2 + 2), (uint16_t)((*v25 << 8) + v25[1]));
            if ( v22 == v40 )
              break;
            v21 = v38;
            v18 = v34[2];
            v17 = v34[3];
            v20 = v22;
          }
          v15 = v34;
        }
        hb_set_t::add(*((hb_set_t **)a2 + 4), (uint16_t)(v15[1] + (*v15 << 8)));
        if ( v37 == v35 )
          break;
        ++v37;
        v12 = v36;
        v13 = *v36;
        v10 = v36[1];
      }
    }
    result = OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v41);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::get_subtable  (binary VA: 0x12d2cb0)
// Original: OT::SubstLookup::get_subtable
// ----------------------------------------------------------------------------
char * OT::SubstLookup::get_subtable(OT::SubstLookup::Self *self, unsigned int a2)
{
  uint8_t *v2;
  uint16_t v3;
  char *result;

  v2 = (uint8_t *)&unk_2116E00;
  if ( a2 < (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)) )
    v2 = (uint8_t *)self + 2 * a2 + 6;
  v3 = v2[1] + (*v2 << 8);
  result = (char *)&unk_2116E00;
  if ( v3 != 0 )
    return (char *)self + v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ValueFormat::apply_value  (binary VA: 0x12d2d20)
// Original: OT::ValueFormat::apply_value
// ----------------------------------------------------------------------------
int OT::ValueFormat::apply_value(uint8_t *a1, hb_font_t *a2, int a3, int a4, uint8_t *a5, int *a6)
{
  hb_font_t *v6;
  int64_t v7; // rax
  uint8_t *v8;
  uint8_t v9; // di
  uint64_t v10; // rax
  unsigned int v11;
  unsigned int v12;
  void *v13;
  uint16_t v14;
  void *v15;
  void *v16;
  uint16_t v17;
  int16_t v18;
  int v19;
  int16_t v20;
  void *v21;
  uint16_t v22;
  unsigned int v23;
  unsigned int v24;
  hb_font_t *v26;
  hb_font_t *v27;
  hb_font_t *v28;
  hb_font_t *v29;
  hb_font_t *v30;
  hb_font_t *v31;
  int v32;
  int64_t v33;
  int v34;
  int v35;
  int64_t v36;
  int64_t v37;
  uint32_t *v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  void *v44;
  int v45;
  int v46;
  int v47;
  int v48;

  v6 = a2;
  LODWORD(v7) = *a1 << 8;
  v8 = a5;
  v9 = a1[1];
  if ( (uint16_t)v7 + v9 == 0 )
    return v7;
  if ( (a1[1] & 1) != 0 )
  {
    v42 = a6[2];
    v39 = *((uint32_t **)a2 + 13);
    v37 = *((int *)a2 + 14) * (int64_t)(int16_t)(a5[1] + (*a5 << 8));
    v24 = v39[16];
    if ( v24 == 0 )
    {
      sub_12C4650(v39);
      v24 = v39[16];
      v6 = a2;
    }
    a6[2] = v42 + v37 / v24;
    v8 = a5 + 2;
    if ( (v9 & 2) == 0 )
      goto LABEL_4;
  }
  else if ( (a1[1] & 2) == 0 )
  {
LABEL_4:
    if ( (v9 & 4) != 0 )
    {
      if ( (a3 & 0xFFFFFFFE) == 4 )
      {
        v43 = *((uint32_t **)v6 + 13);
        v45 = *a6;
        v32 = (int16_t)(v8[1] + (*v8 << 8));
        v48 = *((uint32_t *)v6 + 14) * (v32 >> 31) + v32 * (*((int *)v6 + 14) >> 31);
        v10 = (unsigned int)v32 * (uint64_t)*((unsigned int *)v6 + 14);
        LODWORD(v33) = v32 * *((uint32_t *)v6 + 14);
        HIDWORD(v33) = v48 + HIDWORD(v10);
        v11 = v43[16];
        if ( v11 == 0 )
        {
          v26 = v6;
          sub_12C4650(v43);
          v6 = v26;
          v11 = v43[16];
        }
        *a6 = v45 + v33 / v11;
      }
      v8 += 2;
    }
    if ( (v9 & 8) != 0 )
    {
      if ( (a3 & 0xFFFFFFFE) != 4 )
      {
        v34 = a6[1];
        v27 = v6;
        a6[1] = v34 - em_scale_y(v6, v8[1] + (*v8 << 8));
        v6 = v27;
      }
      v8 += 2;
    }
    LODWORD(v7) = a1[1];
    if ( (v7 & 0xF0) != 0 )
    {
      v12 = *((uint32_t *)v6 + 16);
      v35 = *((uint32_t *)v6 + 17);
      LODWORD(v7) = v12 | v35;
      if ( *((uint64_t *)v6 + 8) != 0 )
      {
        if ( (v9 & 0x10) != 0 )
        {
          if ( v12 != 0 )
          {
            v13 = (void *)((uint16_t)(v8[1] + (*v8 << 8)) + a4);
            if ( v8[1] + (*v8 << 8) == 0 )
              v13 = &unk_2116E00;
            v28 = v6;
            v46 = a6[2];
            LODWORD(v7) = v46 + sub_12C76F0(__SPAIR64__(v12, (unsigned int)(uintptr_t)(v13)), *((uint32_t *)v6 + 14));
            a6[2] = v7;
            v6 = v28;
          }
          v8 += 2;
        }
        if ( (v9 & 0x20) != 0 )
        {
          LODWORD(v7) = v35;
          if ( v35 != 0 )
          {
            v47 = a6[3];
            v14 = v8[1] + (*v8 << 8);
            v15 = (void *)(v14 + a4);
            if ( v14 == 0 )
              v15 = &unk_2116E00;
            v44 = v15;
            HIDWORD(v7) = *((uint32_t *)v6 + 17);
            LODWORD(v7) = 0;
            if ( HIDWORD(v7) != 0 )
            {
              v31 = v6;
              LODWORD(v7) = (uint32_t)(uintptr_t)(v44);
              LODWORD(v7) = sub_12C76F0(v7, *((uint32_t *)v6 + 15));
              v6 = v31;
            }
            LODWORD(v7) = v47 + v7;
            a6[3] = v7;
          }
          v8 += 2;
        }
        if ( (v9 & 0x40) != 0 )
        {
          if ( (a3 & 0xFFFFFFFE) == 4 && v12 != 0 )
          {
            v16 = &unk_2116E00;
            v40 = *a6;
            v17 = v8[1] + (*v8 << 8);
            if ( v17 != 0 )
              v16 = (void *)(v17 + a4);
            HIDWORD(v7) = *((uint32_t *)v6 + 16);
            LODWORD(v7) = 0;
            if ( HIDWORD(v7) != 0 )
            {
              v30 = v6;
              LODWORD(v7) = (uint32_t)(uintptr_t)(v16);
              LODWORD(v7) = sub_12C76F0(v7, *((uint32_t *)v6 + 14));
              v6 = v30;
            }
            LODWORD(v7) = v40 + v7;
            *a6 = v7;
          }
          v8 += 2;
        }
        if ( (v9 & 0x80) != 0 && (a3 & 0xFFFFFFFE) != 4 && v35 != 0 )
        {
          v18 = v8[1];
          v19 = a6[1];
          v20 = *v8 << 8;
          v21 = &unk_2116E00;
          v22 = v18 + v20;
          if ( v22 != 0 )
            v21 = (void *)(v22 + a4);
          HIDWORD(v7) = *((uint32_t *)v6 + 17);
          LODWORD(v7) = 0;
          if ( HIDWORD(v7) != 0 )
          {
            LODWORD(v7) = (uint32_t)(uintptr_t)(v21);
            LODWORD(v7) = sub_12C76F0(v7, *((uint32_t *)v6 + 15));
          }
          a6[1] = v19 - v7;
        }
      }
    }
    return v7;
  }
  v41 = a6[3];
  v38 = *((uint32_t **)v6 + 13);
  v36 = *((int *)v6 + 15) * (int64_t)(int16_t)(v8[1] + (*v8 << 8));
  v23 = v38[16];
  if ( v23 == 0 )
  {
    v29 = v6;
    sub_12C4650(v38);
    v23 = v38[16];
    v6 = v29;
  }
  a6[3] = v41 + v36 / v23;
  v8 += 2;
  goto LABEL_4;
}

// ----------------------------------------------------------------------------
// Function: OT::Anchor::get_anchor  (binary VA: 0x12d3290)
// Original: OT::Anchor::get_anchor
// ----------------------------------------------------------------------------
int OT::Anchor::get_anchor(OT::Anchor::Self *self, hb_font_t *a2, unsigned int a3, int *a4, int *a5)
{
  int64_t v5; // rax
  unsigned int v6;
  int16_t v7;
  int v8;
  int v9;
  int v10;
  int64_t v11; // rax
  unsigned int v12;
  int64_t v13; // kr08_8
  int16_t v14;
  int v15;
  uint64_t v16; // rax
  uint32_t *v17;
  unsigned int v18;
  int64_t v19; // rax
  char *v20;
  unsigned int v21;
  unsigned int v22;
  int64_t v23; // rax
  int16_t v24;
  int16_t v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int64_t v32; // rax
  unsigned int v33;
  int64_t v34; // kr10_8
  int v35;
  int v36;
  typedef unsigned int _g4_t_v38;
  typedef int64_t _g4_t_v39;
  typedef int64_t _g4_t_v40;
  typedef int64_t _g4_t_v41;
  typedef char _g4_t_v42;
  typedef int64_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t _g4_t_v55[4];
  typedef uint32_t _g4_t_v56[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v40)) > _g4_s2 ? (16u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v42)) > _g4_s4 ? (28u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v43)) > _g4_s5 ? (32u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v44)) > _g4_s6 ? (32u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v45)) > _g4_s7 ? (40u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v46)) > _g4_s8 ? (40u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v47)) > _g4_s9 ? (40u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v48)) > _g4_s10 ? (40u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v49)) > _g4_s11 ? (40u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v50)) > _g4_s12 ? (44u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v51)) > _g4_s13 ? (44u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v52)) > _g4_s14 ? (44u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v53)) > _g4_s15 ? (48u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v54)) > _g4_s16 ? (64u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v55)) > _g4_s17 ? (80u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v56)) > _g4_s18 ? (96u + sizeof(_g4_t_v56)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);

  *a5 = 0;
  *a4 = 0;
  LODWORD(v5) = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
  switch ( (uint16_t)v5 )
  {
    case 2:
      v21 = *((uint32_t *)a2 + 16);
      v44 = *((uint32_t *)a2 + 17);
      v42 = 1;
      if ( *((uint64_t *)a2 + 8) == 0 )
        goto LABEL_25;
      v24 = *((uint8_t *)self + 7);
      v25 = *((uint8_t *)self + 6) << 8;
      v54 = 0;
      v53 = 0;
      v38 = v21;
      if ( (*(int (**)(hb_font_t *, uint32_t, unsigned int, uint32_t, int *, int *, uint32_t))(*((uint32_t *)a2 + 18)
                                                                                               + 80))(
             a2,
             *((uint32_t *)a2 + 19),
             a3,
             (uint16_t)(v24 + v25),
             &v53,
             &v54,
             *(uint32_t *)(*((uint32_t *)a2 + 18) + 124)) == 0 )
        goto LABEL_25;
      v26 = *((uint32_t *)a2 + 18);
      v56[0] = 0;
      v55[0] = 0;
      v23 = __PAIR64__(
              v38,
              (*(int (**)(hb_font_t *, uint32_t, unsigned int, uint32_t *, uint32_t *, uint32_t))(v26 + 60))(
                a2,
                *((uint32_t *)a2 + 19),
                a3,
                v55,
                v56,
                *(uint32_t *)(v26 + 104)));
      if ( (uint32_t)v23 != 0
        || (v35 = *((uint32_t *)a2 + 18),
            v56[0] = 0,
            v55[0] = 0,
            (uint32_t)(v23 = __PAIR64__(
                             v38,
                             (*(int (**)(hb_font_t *, uint32_t, unsigned int, uint32_t *, uint32_t *, uint32_t))(v35 + 64))(
                               a2,
                               *((uint32_t *)a2 + 19),
                               a3,
                               v55,
                               v56,
                               *(uint32_t *)(v35 + 108)))) == 0) )
      {
        LODWORD(v23) = v55[0];
        v27 = v56[0];
      }
      else
      {
        v36 = (*(int (**)(hb_font_t *, uint32_t, unsigned int, uint32_t))(*((uint32_t *)a2 + 18) + 52))(
                a2,
                *((uint32_t *)a2 + 19),
                a3,
                *(uint32_t *)(*((uint32_t *)a2 + 18) + 96));
        HIDWORD(v23) = v38;
        LODWORD(v23) = v55[0] - v36 / 2;
        v27 = v56[0] - *((uint32_t *)a2 + 15);
        v55[0] = v23;
        v56[0] = v27;
      }
      v53 -= v23;
      v54 -= v27;
      v42 = 0;
      LODWORD(v23) = v53;
      if ( HIDWORD(v23) == 0 )
      {
LABEL_25:
        v49 = *((uint32_t **)a2 + 13);
        v39 = *((int *)a2 + 14)
            * (int64_t)(int16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
        v22 = v49[16];
        if ( v22 == 0 )
        {
          sub_12C4650(v49);
          v22 = v49[16];
        }
        v23 = v39 / v22;
      }
      *a4 = v23;
      if ( v42 != 0 || (LODWORD(v5) = v54, v44 == 0) )
      {
        v29 = (int16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
        v28 = *((uint32_t *)a2 + 15);
        v52 = *((uint32_t **)a2 + 13);
        v30 = v29 * (v28 >> 31);
        v31 = v28 * (v29 >> 31);
        v32 = (unsigned int)v28 * (uint64_t)(unsigned int)v29;
        HIDWORD(v32) += v30 + v31;
        v33 = v52[16];
        if ( v33 == 0 )
        {
          v34 = v32;
          sub_12C4650(v52);
          v33 = v52[16];
          v32 = v34;
        }
        v5 = v32 / v33;
      }
      *a5 = v5;
      break;
    case 3:
      v14 = *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8);
      v46 = *((uint32_t **)a2 + 13);
      v15 = *((uint32_t *)a2 + 14) * ((uint64_t)v14 >> 32) + v14 * (*((int *)a2 + 14) >> 31);
      v16 = *((unsigned int *)a2 + 14) * (uint64_t)(unsigned int)v14;
      HIDWORD(v16) += v15;
      v17 = v46;
      v43 = v16;
      if ( v46[16] == 0 )
      {
        sub_12C4650(v46);
        v17 = v46;
      }
      *a4 = v43 /g4_m128_lane<int64_t>(_mm_cvtsi32_si128(v17[16]), 0);
      v47 = *((uint32_t **)a2 + 13);
      v41 = *((int *)a2 + 15)
          * (int64_t)(int16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
      v18 = v47[16];
      if ( v18 == 0 )
      {
        sub_12C4650(v47);
        v18 = v47[16];
      }
      *a5 = v41 / v18;
      HIDWORD(v19) = *((uint32_t *)a2 + 16);
      if ( HIDWORD(v19) != 0 )
      {
        LODWORD(v19) = (uint32_t)(uintptr_t)(&unk_2116E00);
        if ( (*((uint8_t *)self + 6) << 8) + *((uint8_t *)self + 7) != 0 )
          LODWORD(v19) = (uint32_t)(uintptr_t)((char *)self + (uint16_t)((*((uint8_t *)self + 6) << 8) + *((uint8_t *)self + 7)));
        v48 = *a4;
        *a4 = v48 + sub_12C76F0(v19, *((uint32_t *)a2 + 14));
      }
      LODWORD(v5) = *((uint32_t *)a2 + 17);
      if ( (uint32_t)v5 != 0 )
      {
        HIDWORD(v5) = *((uint32_t *)a2 + 16);
        v51 = *a5;
        v20 = (char *)&unk_2116E00;
        if ( *((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8) != 0 )
          v20 = (char *)self
              + (uint16_t)(*((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8));
        LODWORD(v5) = 0;
        if ( HIDWORD(v5) != 0 )
        {
          LODWORD(v5) = (uint32_t)(uintptr_t)(v20);
          LODWORD(v5) = sub_12C76F0(v5, *((uint32_t *)a2 + 14));
        }
        LODWORD(v5) = v51 + v5;
        *a5 = v5;
      }
      break;
    case 1:
      v45 = *((uint32_t **)a2 + 13);
      v40 = *((int *)a2 + 14)
          * (int64_t)(int16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
      v6 = v45[16];
      if ( v6 == 0 )
      {
        sub_12C4650(v45);
        v6 = v45[16];
      }
      *a4 = v40 / v6;
      v50 = *((uint32_t **)a2 + 13);
      v7 = *((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8);
      v8 = *((uint32_t *)a2 + 15);
      v9 = v7 * (v8 >> 31);
      v10 = v8 * (v7 >> 31);
      v11 = (unsigned int)v8 * (uint64_t)(unsigned int)v7;
      HIDWORD(v11) += v9 + v10;
      v12 = v50[16];
      if ( v12 == 0 )
      {
        v13 = v11;
        sub_12C4650(v50);
        v12 = v50[16];
        v11 = v13;
      }
      v5 = v11 / v12;
      *a5 = v5;
      break;
    default:
      break;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_Record_OT_LangSys_OT_cc6a51::sanitize  (binary VA: 0x12d3a40)
// Original: OT::ArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_Record_OT_LangSys_OT_cc6a51::sanitize(OT::ArrayOf<OT::Record<OT::LangSys>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  bool v6;
  char *v7;
  char *v8;
  unsigned int v9;
  int16_t v10;
  char *v11;
  char *v13;
  unsigned int v14;
  char v15;
  const void *v16;
  unsigned int v17;
  int v18;
  unsigned int v19;

  v3 = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v4 )
  {
    v5 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v5 && v5 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      v17 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
      v19 = (uint16_t)v17;
      v6 = OT::hb_sanitize_context_t::check_array(a2, self, 6u, v17);
      v3 = 0;
      if ( v6 )
      {
        v3 = 1;
        if ( v19 != 0 )
        {
          v3 = 0;
          v7 = (char *)self + 2;
          if ( v4 <= (unsigned int)(uintptr_t)(self) + 2 && v5 >= (unsigned int)(uintptr_t)(v7) && v5 - (unsigned int)(uintptr_t)(v7) > 5 )
          {
            v8 = (char *)self + 6;
            if ( v4 <= (unsigned int)(uintptr_t)(self) + 6 )
            {
              v18 = 0;
              if ( v5 >= (unsigned int)(uintptr_t)(v8) )
              {
                v9 = v5;
                while ( 1 )
                {
                  if ( v9 - (unsigned int)(uintptr_t)(v8) <= 1 )
                    return 0;
                  v10 = (uint8_t)v7[5];
                  if ( v10 + ((uint8_t)v7[4] << 8) != 0 )
                  {
                    v13 = &a3[(uint16_t)(v10 + ((uint8_t)v7[4] << 8))];
                    if ( v4 > (unsigned int)(uintptr_t)(v13)
                      || (unsigned int)(uintptr_t)(v13) > v9
                      || v9 - (unsigned int)(uintptr_t)(v13) <= 5
                      || (v16 = v13 + 4, v4 > (unsigned int)(uintptr_t)(v13 + 4))
                      || (unsigned int)(uintptr_t)(v16) > v9
                      || v9 - (unsigned int)(uintptr_t)(v16) <= 1
                      || !OT::hb_sanitize_context_t::check_array(
                            a2,
                            v16,
                            2u,
                            (uint16_t)(((uint8_t)v13[4] << 8) + (uint8_t)v13[5])) )
                    {
                      v14 = *((uint32_t *)a2 + 4);
                      v15 = *((uint8_t *)a2 + 12);
                      if ( v14 > 0x63 )
                        return 0;
                      *((uint32_t *)a2 + 4) = v14 + 1;
                      if ( v15 == 0 )
                        return 0;
                      v7[4] = 0;
                      v7[5] = 0;
                    }
                  }
                  if ( ++v18 >= v19 )
                    break;
                  v4 = *((uint32_t *)a2 + 1);
                  v11 = (char *)self + 6 * v18;
                  v7 = v11 + 2;
                  if ( (unsigned int)(uintptr_t)(v11 + 2) >= v4 )
                  {
                    v9 = *((uint32_t *)a2 + 2);
                    if ( (unsigned int)(uintptr_t)(v7) <= v9 && v9 - (unsigned int)(uintptr_t)(v7) > 5 )
                    {
                      v8 = v11 + 6;
                      if ( v4 <= (unsigned int)(uintptr_t)(v8) && v9 >= (unsigned int)(uintptr_t)(v8) )
                        continue;
                    }
                  }
                  return 0;
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_IntType_unsigned_shor_87f2db::sanitize  (binary VA: 0x12d3ce0)
// Original: OT::ArrayOf<OT::IntType<unsigned short,2u>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
bool OT::ArrayOf_OT_IntType_unsigned_shor_87f2db::sanitize(OT::ArrayOf<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2)
{
  bool result;
  unsigned int v3;

  result = false;
  if ( (unsigned int)(uintptr_t)(self) >= *((uint32_t *)a2 + 1) )
  {
    v3 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v3 && v3 - (unsigned int)(uintptr_t)(self) > 1 )
      return OT::hb_sanitize_context_t::check_array(
               a2,
               self,
               2u,
               (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8)));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ClassDef::get_class  (binary VA: 0x12d3de0)
// Original: OT::ClassDef::get_class
// ----------------------------------------------------------------------------
int OT::ClassDef::get_class(OT::ClassDef::Self *self, unsigned int a2)
{
  int16_t v2;
  int result;
  unsigned int v4;
  char *v5;
  unsigned int v6;
  unsigned int v7[4];

  v2 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
  if ( v2 == 1 )
  {
    v6 = a2 - (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
    if ( v6 < (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)) )
      return (uint16_t)(*((uint8_t *)self + 2 * v6 + 7) + (*((uint8_t *)self + 2 * v6 + 6) << 8));
  }
  else if ( v2 == 2 )
  {
    v7[0] = a2;
    v4 = OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned short,2u>>::bsearch<unsigned int>(
           (OT::ClassDef::Self *)((char *)self + 2),
           v7);
    result = 0;
    if ( v4 != -1 )
    {
      v5 = (char *)&unk_1CF95EC;
      if ( v4 < (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8)) )
        v5 = (char *)self + 6 * v4 + 4;
      return (uint16_t)((uint8_t)v5[5] + ((uint8_t)v5[4] << 8));
    }
    return result;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::hb_apply_context_t::set_glyph_props  (binary VA: 0x12d3ee0)
// Original: OT::hb_apply_context_t::_set_glyph_props
// ----------------------------------------------------------------------------
OT::hb_apply_context_t::Self * OT::hb_apply_context_t::set_glyph_props(uint8_t **self, unsigned int a2, unsigned int a3, bool a4, bool a5)
{
  OT::hb_apply_context_t::Self *result;
  int v6;
  int16_t v7; // si
  uint8_t *v8;
  OT::ClassDef::Self *v9;
  int16_t v10;
  OT::ClassDef::Self *v11;
  int v12;
  OT::ClassDef::Self *v13;

  result = (OT::hb_apply_context_t::Self *)self;
  v6 = *((uint32_t *)*(self + 3) + 25) + 20 * *((uint32_t *)*(self + 3) + 21);
  v7 = 48;
  if ( !a4 )
    v7 = *(uint16_t *)(v6 + 12) & 0x60 | 0x10;
  if ( a5 )
    v7 |= 0x40u;
  if ( *((uint8_t *)self + 44) != 0 )
  {
    v8 = *(self + 10);
    v9 = (OT::ClassDef::Self *)&v8[(uint16_t)(v8[5] + (v8[4] << 8))];
    if ( v8[5] + (v8[4] << 8) == 0 )
      v9 = (OT::ClassDef::Self *)&unk_2116E00;
    result = (OT::hb_apply_context_t::Self *)OT::ClassDef::get_class(v9, a2);
    v10 = 4;
    v11 = (OT::ClassDef::Self *)&unk_2116E00;
    if ( result != (OT::hb_apply_context_t::Self *)((char *)&dword_0 + 2) )
    {
      if ( result == (OT::hb_apply_context_t::Self *)((char *)&dword_0 + 3) )
      {
        v12 = (uint16_t)(v8[11] + (v8[10] << 8));
        v13 = (OT::ClassDef::Self *)&v8[v12];
        if ( v12 != 0 )
          v11 = v13;
        result = (OT::hb_apply_context_t::Self *)OT::ClassDef::get_class(v11, a2);
        v10 = ((uint16_t)(uintptr_t)(result) << 8) | 8;
      }
      else
      {
        v10 = 2 * (result == (OT::hb_apply_context_t::Self *)((char *)&dword_0 + 1));
      }
    }
    *(uint16_t *)(v6 + 12) = v10 | v7;
  }
  else if ( a3 != 0 )
  {
    *(uint16_t *)(v6 + 12) = a3 | v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::hb_apply_context_t::replace_glyph  (binary VA: 0x12d4000)
// Original: OT::hb_apply_context_t::replace_glyph
// ----------------------------------------------------------------------------
int OT::hb_apply_context_t::replace_glyph(OT::hb_apply_context_t::Self *self, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint16_t v5;
  OT::ClassDef::Self *v6;
  int v7;
  int v8;
  OT::ClassDef::Self *v10;
  int v11;
  int16_t v12;

  v2 = *((uint32_t **)self + 3);
  v3 = v2[25] + 20 * v2[21];
  v12 = *(uint16_t *)(v3 + 12);
  if ( *((uint8_t *)self + 44) != 0 )
  {
    v4 = *((uint32_t *)self + 10);
    v5 = *(uint8_t *)(v4 + 5) + (*(uint8_t *)(v4 + 4) << 8);
    v6 = (OT::ClassDef::Self *)(v4 + v5);
    if ( v5 == 0 )
      v6 = (OT::ClassDef::Self *)&unk_2116E00;
    v11 = *((uint32_t *)self + 10);
    v7 = OT::ClassDef::get_class(v6, a2);
    LOWORD(v8) = 4;
    if ( v7 != 2 )
    {
      if ( v7 == 3 )
      {
        v10 = (OT::ClassDef::Self *)((uint16_t)(*(uint8_t *)(v11 + 11) + (*(uint8_t *)(v11 + 10) << 8))
                             + v11);
        if ( *(uint8_t *)(v11 + 11) + (*(uint8_t *)(v11 + 10) << 8) == 0 )
          v10 = (OT::ClassDef::Self *)&unk_2116E00;
        v8 = (OT::ClassDef::get_class(v10, a2) << 8) | 8;
      }
      else
      {
        LOWORD(v8) = 2 * (v7 == 1);
      }
    }
    *(uint16_t *)(v3 + 12) = v8 | v12 & 0x70 | 0x10;
    v2 = *((uint32_t **)self + 3);
  }
  return sub_12A9050(v2, a2);
}

// ----------------------------------------------------------------------------
// Function: OT::Coverage::get_coverage  (binary VA: 0x12d4100)
// Original: OT::Coverage::get_coverage
// ----------------------------------------------------------------------------
int OT::Coverage::get_coverage(OT::Coverage::Self *self, unsigned int a2)
{
  int16_t v2;
  int result;
  int v4;
  int v5;
  uint16_t v6;
  unsigned int v7;
  uint8_t *v8;
  unsigned int v9[7];

  v2 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
  if ( v2 == 1 )
  {
    result = -1;
    v4 = (uint16_t)((*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3)) - 1;
    if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) != 0 )
    {
      v5 = 0;
      do
      {
        result = (v5 + v4) >> 1;
        v6 = *((uint8_t *)self + 2 * result + 5) + (*((uint8_t *)self + 2 * result + 4) << 8);
        if ( v6 <= (uint16_t)a2 )
        {
          if ( v6 == (uint16_t)a2 )
            return result;
          v5 = result + 1;
        }
        else
        {
          v4 = result - 1;
        }
      }
      while ( v5 <= v4 );
      return -1;
    }
  }
  else
  {
    if ( v2 != 2 )
      return -1;
    v9[0] = a2;
    v7 = OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned short,2u>>::bsearch<unsigned int>(
           (OT::Coverage::Self *)((char *)self + 2),
           v9);
    result = -1;
    if ( v7 != -1 )
    {
      v8 = (uint8_t *)&unk_1CF95EC;
      if ( v7 < (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8)) )
        v8 = (uint8_t *)self + 6 * v7 + 4;
      return a2 + (uint16_t)(v8[5] + (v8[4] << 8)) - (uint16_t)(v8[1] + (*v8 << 8));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::AlternateSubstFormat1::apply  (binary VA: 0x12d4230)
// Original: OT::AlternateSubstFormat1::apply
// ----------------------------------------------------------------------------
int OT::AlternateSubstFormat1::apply(OT::AlternateSubstFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  unsigned int *v2;
  uint16_t v3;
  OT::Coverage::Self *v4;
  unsigned int coverage;
  int v6;
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  uint8_t *v10;
  uint16_t v11; // bp
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v17;

  v2 = (unsigned int *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84));
  v3 = *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8);
  v4 = (OT::Coverage::Self *)((OT::AlternateSubstFormat1::Self *)((char *)self + v3));
  if ( v3 == 0 )
    v4 = (OT::Coverage::Self *)&unk_2116E00;
  coverage = OT::Coverage::get_coverage(v4, *v2);
  v6 = 0;
  if ( coverage != -1 )
  {
    v7 = (uint8_t *)self + 2 * coverage + 6;
    if ( coverage >= (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5)) )
      v7 = (uint8_t *)&unk_2116E00;
    v8 = (uint16_t)(v7[1] + (*v7 << 8));
    v9 = (uint8_t *)&unk_2116E00;
    v10 = (uint8_t *)self + v8;
    if ( v8 == 0 )
      v10 = (uint8_t *)&unk_2116E00;
    v6 = 0;
    v11 = (*v10 << 8) + v10[1];
    if ( v11 != 0 )
    {
      v17 = v2[1];
      v12 = *((uint32_t *)a2 + 5);
      if ( v12 != 0 )
      {
        _BitScanForward(&v13, v12);
        v14 = (v17 & v12) >> v13;
        if ( v14 <= v11 && v14 != 0 )
        {
          v15 = v14 - 1;
          if ( v11 > v15 )
            v9 = &v10[2 * v15 + 2];
          OT::hb_apply_context_t::replace_glyph(a2, (uint16_t)((*v9 << 8) + v9[1]));
          return 1;
        }
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: OT::hb_apply_context_t::check_glyph_property  (binary VA: 0x12d4360)
// Original: OT::hb_apply_context_t::check_glyph_property
// ----------------------------------------------------------------------------
char OT::hb_apply_context_t::check_glyph_property(int a1, int a2, unsigned int a3)
{
  int16_t v3; // si
  char result;
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  OT::Coverage::Self *v10;

  v3 = *(uint16_t *)(a2 + 12);
  result = 0;
  if ( ((uint8_t)v3 & a3 & 0xE) == 0 )
  {
    result = 1;
    if ( (v3 & 8) != 0 )
    {
      if ( (a3 & 0x10) != 0 )
      {
        v5 = *(uint8_t **)(a1 + 40);
        result = 0;
        if ( (uint16_t)(v5[3] + (v5[2] << 8)) + ((v5[1] + (*v5 << 8)) << 16) > 0x10001u )
        {
          v6 = (uint16_t)(v5[13] + (v5[12] << 8));
          v7 = &v5[v6];
          if ( v6 == 0 )
            v7 = (uint8_t *)&unk_2116E00;
          if ( v7[1] + (*v7 << 8) == 1 )
          {
            v8 = &v7[4 * HIWORD(a3) + 4];
            if ( HIWORD(a3) >= (uint16_t)(v7[3] + (v7[2] << 8)) )
              v8 = (uint8_t *)&unk_2116E00;
            v9 = (v8[1] << 16) + (*v8 << 24) + (v8[2] << 8) + v8[3];
            v10 = (OT::Coverage::Self *)&v7[v9];
            if ( v9 == 0 )
              v10 = (OT::Coverage::Self *)&unk_2116E00;
            return OT::Coverage::get_coverage(v10, *(uint32_t *)a2) != -1;
          }
        }
      }
      else if ( BYTE1(a3) != 0 )
      {
        return (uint16_t)(v3 ^ a3) >> 8 == 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::hb_apply_context_t::skipping_forward_iterator_t::next  (binary VA: 0x12d44b0)
// Original: OT::hb_apply_context_t::skipping_forward_iterator_t::next
// ----------------------------------------------------------------------------
int OT::hb_apply_context_t::skipping_forward_iterator_t::next(OT::hb_apply_context_t::skipping_forward_iterator_t::Self *self)
{
  OT::hb_apply_context_t::skipping_forward_iterator_t::Self *v1;
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
  char v12;
  int v13;
  char v14;
  bool v15;
  char v16;
  char v17;
  int (*v19)(uint32_t, uint32_t, uint32_t);
  char v20;
  int v21;
  int v22;
  char v23;
  OT::hb_apply_context_t::skipping_forward_iterator_t::Self *v24;
  unsigned int v25;
  int v26;

  v1 = self;
  v2 = *((uint32_t *)self + 9);
  if ( v2 == 0 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/harfbuzz/src/hb-ot-layout-gsubgpos-private.hh",
      409,
      "bool OT::hb_apply_context_t::skipping_forward_iterator_t::next()",
      "num_items > 0");
    v2 = *((uint32_t *)self + 9);
  }
  while ( 1 )
  {
    v3 = *(uint32_t *)v1;
    v4 = 4 * (5 * *(uint32_t *)v1 + 5);
    if ( v2 != 0 )
    {
      while ( *((uint32_t *)v1 + 10) > (unsigned int)(v3 + v2) )
      {
        v10 = *((uint32_t *)v1 + 1);
        *(uint32_t *)v1 = ++v3;
        v11 = v4 + *(uint32_t *)(*(uint32_t *)(v10 + 12) + 100);
        v4 += 20;
        v26 = v11;
        v22 = v2;
        v12 = OT::hb_apply_context_t::check_glyph_property(v10, v11, *((uint32_t *)v1 + 2));
        v2 = v22;
        if ( v12 != 0 )
        {
          v13 = v26;
          goto LABEL_10;
        }
      }
      return 0;
    }
    v5 = *((uint32_t *)v1 + 1);
    v24 = v1;
    v25 = *((uint32_t *)v1 + 2);
    v6 = v3 + 1;
    v7 = 5 * (v3 + 1);
    v8 = v5;
    v9 = 4 * v7;
    while ( 1 )
    {
      *(uint32_t *)v24 = v6;
      v21 = v9 + *(uint32_t *)(*(uint32_t *)(v8 + 12) + 100);
      v9 += 20;
      if ( OT::hb_apply_context_t::check_glyph_property(v8, v21, v25) != 0 )
        break;
      ++v6;
    }
    v13 = v21;
    v1 = v24;
LABEL_10:
    v14 = *(uint8_t *)(v13 + 16);
    v15 = true;
    v16 = 1;
    if ( v14 < 0 && (*((uint8_t *)v1 + 12) != 0 || (v14 & 0x40) == 0) )
    {
      if ( *((uint8_t *)v1 + 13) != 0 || (v15 = true, v16 = 1, (*(uint8_t *)(v13 + 16) & 0x20) == 0) )
      {
        v15 = (*(uint16_t *)(v13 + 12) & 0x20) != 0;
        v16 = v15;
      }
    }
    if ( (*((uint32_t *)v1 + 4) & *(uint32_t *)(v13 + 4)) != 0 )
    {
      v17 = *((uint8_t *)v1 + 20);
      if ( v17 == 0 || v17 == *(uint8_t *)(v13 + 15) )
      {
        v19 = *((int (**)(uint32_t, uint32_t, uint32_t))v1 + 6);
        if ( v19 == nullptr )
          break;
        v23 = v16;
        v20 = v19(*(uint32_t *)v13, *((uint32_t *)v1 + 8), *((uint32_t *)v1 + 7));
        v16 = v23;
        if ( v20 == 1 )
        {
          --*((uint32_t *)v1 + 9);
          *((uint32_t *)v1 + 8) += 2;
          return 1;
        }
      }
    }
LABEL_14:
    if ( v16 != 0 )
      return 0;
    v2 = *((uint32_t *)v1 + 9);
  }
  if ( !v15 )
    goto LABEL_14;
  --*((uint32_t *)v1 + 9);
  *((uint32_t *)v1 + 8) += 2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::Ligature::apply  (binary VA: 0x12d46c0)
// Original: OT::Ligature::apply
// ----------------------------------------------------------------------------
int OT::Ligature::apply(OT::Ligature::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  uint16_t v3;
  char *v4;
  uint16_t v5; // di
  char v6; // si
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  char v17;
  int v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint8_t v25; // si
  int v26;
  unsigned int v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef bool _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43;
  typedef bool _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[67];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v33)) > _g4_s5 ? (24u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v34)) > _g4_s6 ? (28u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v36)) > _g4_s8 ? (28u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v37)) > _g4_s9 ? (35u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v38)) > _g4_s10 ? (36u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v39)) > _g4_s11 ? (40u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v40)) > _g4_s12 ? (40u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v41)) > _g4_s13 ? (40u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v42)) > _g4_s14 ? (44u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v43)) > _g4_s15 ? (44u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (63u + sizeof(_g4_t_v44)) > _g4_s16 ? (63u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v45)) > _g4_s17 ? (64u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v46)) > _g4_s18 ? (80u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v47)) > _g4_s19 ? (96u + sizeof(_g4_t_v47)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 35u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 63u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);

  v2 = 0;
  v3 = (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3);
  v42 = v3;
  if ( v3 != 0 )
  {
    if ( v3 == 1 )
    {
      v2 = 1;
      OT::hb_apply_context_t::replace_glyph(
        a2,
        (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8)));
      return v2;
    }
    v4 = (char *)self + 4;
    v44 = false;
    if ( v3 < 2u )
      v4 = (char *)&unk_2116E00;
    v45 = 0;
    v46 = 0;
    if ( (uint8_t)sub_12CB8A0((int)(uintptr_t)(a2), v3, (int)(uintptr_t)(v4), (int)(uintptr_t)(sub_12C7170), 0, &v46, v47, &v44, &v45) != 0 )
    {
      v34 = v45;
      v38 = *((uint32_t **)a2 + 3);
      v37 = v44;
      v5 = (*(uint8_t *)self << 8) + *((uint8_t *)self + 1);
      v6 = 0;
      sub_12A9B60(v38, v38[21], v38[21] + v46);
      v7 = 0;
      if ( !v37 )
      {
        v19 = v38[28];
        do
          v20 = v19++ & 7;
        while ( v20 == 0 );
        v38[28] = v19;
        v7 = 4;
        v6 = v20;
      }
      v33 = 1;
      v8 = v38[25] + 20 * v38[21];
      if ( (*(uint8_t *)(v8 + 12) & 4) != 0 )
      {
        v21 = 1;
        if ( (*(uint8_t *)(v8 + 14) & 0x10) != 0 )
          v21 = *(uint8_t *)(v8 + 14) & 0xF;
        v33 = v21;
      }
      if ( !v37 )
      {
        *(uint8_t *)(v8 + 14) = (32 * v6) | v34 & 0xF | 0x10;
        v9 = v38[25] + 20 * v38[21];
        v39 = *(uint8_t *)(v9 + 16);
        if ( (v39 & 0x1F) == 0xC )
        {
          *(uint8_t *)(v9 + 16) = v39 & 0xE0 | 7;
          *(uint8_t *)(v38[25] + 20 * v38[21] + 17) = 0;
        }
      }
      OT::hb_apply_context_t::set_glyph_props((uint8_t **)a2, v5, v7, true, false);
      sub_12A9050(*((uint32_t **)a2 + 3), v5);
      v40 = 1;
      v10 = v38[25];
      v11 = v38[21];
      v12 = v6;
      v13 = 1;
      v32 = 32 * v12;
      v35 = v33;
      v14 = (int)(uintptr_t)(v38);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v47[v13] <= v11 )
          {
            v33 = 1;
            v22 = v10 + 20 * v11;
            v28 = *(uint8_t *)(v22 + 14);
            v30 = v28 >> 5;
            if ( (*(uint8_t *)(v22 + 12) & 4) != 0 )
            {
              v23 = v28 & 0xF;
              if ( (v28 & 0x10) == 0 )
                v23 = 1;
              v33 = v23;
            }
            ++v11;
            v35 += v33;
            v13 = ++v40;
            *(uint32_t *)(v14 + 84) = v11;
            if ( v42 == v40 )
            {
              v2 = 1;
              if ( !v37 && v30 != 0 && v38[22] > v11 )
              {
                v24 = v38[25] + 20 * v11;
                v43 = *(uint8_t *)(v24 + 14);
                v25 = v43;
                v41 = (int)v43 >> 5;
                if ( v41 == v30 )
                {
                  v31 = v11 + 1;
                  v36 = v35 - v33;
                  v26 = 20 * (v11 + 1);
                  while ( 1 )
                  {
                    v27 = 1;
                    if ( (v25 & 0x10) == 0 && (v43 & 0xF) != 0 )
                      v27 = v43 & 0xF;
                    if ( v27 > v33 )
                      LOBYTE(v27) = v33;
                    *(uint8_t *)(v24 + 14) = v32 | (v36 + v27) & 0xF;
                    if ( v31 >= v38[22] )
                      break;
                    v24 = v38[25] + v26;
                    v26 += 20;
                    v43 = *(uint8_t *)(v24 + 14);
                    v25 = v43;
                    if ( (int)v43 >> 5 != v41 )
                      break;
                    ++v31;
                  }
                  return 1;
                }
              }
              return v2;
            }
          }
          if ( !v37 )
          {
            v15 = v10 + 20 * v11;
            v16 = 1;
            if ( (*(uint8_t *)(v15 + 14) & 0x10) == 0 && (*(uint8_t *)(v15 + 14) & 0xF) != 0 )
              v16 = *(uint8_t *)(v15 + 14) & 0xF;
            if ( v16 > v33 )
              LOBYTE(v16) = v33;
            *(uint8_t *)(v15 + 14) = v32 | (v35 - v33 + v16) & 0xF;
            v10 = *(uint32_t *)(v14 + 100);
          }
          if ( *(uint8_t *)(v14 + 81) != 0 )
            break;
LABEL_14:
          v13 = v40;
          v11 = *(uint32_t *)(v14 + 84) + 1;
          *(uint32_t *)(v14 + 84) = v11;
        }
        if ( *(uint32_t *)(v14 + 104) == v10 && *(uint32_t *)(v14 + 92) == *(uint32_t *)(v14 + 84) )
          goto LABEL_13;
        v29 = (uint32_t *)v14;
        v17 = sub_12A7DE0(v14, 1, 1);
        v14 = (int)(uintptr_t)(v29);
        if ( v17 != 0 )
          break;
        v11 = v29[21];
        v10 = v29[25];
        v13 = v40;
      }
      std::memcpy((void *)(v29[26] + 20 * v29[23]), (const void *)(v29[25] + 20 * v29[21]), 20);
LABEL_13:
      ++*(uint32_t *)(v14 + 92);
      v10 = *(uint32_t *)(v14 + 100);
      goto LABEL_14;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OT::RuleSet::apply  (binary VA: 0x12d4b40)
// Original: OT::RuleSet::apply
// ----------------------------------------------------------------------------
int OT::RuleSet::apply(uint8_t *a1, uint32_t *a2, int *a3)
{
  uint8_t v3;
  int16_t v4;
  int result;
  uint8_t *v6;
  unsigned int v7;
  uint8_t *v8;
  uint16_t v9;
  uint8_t *v10;
  int v11;
  uint16_t v12; // di
  int v13;

  v3 = a1[1];
  v4 = *a1;
  result = 0;
  if ( (v4 << 8) + v3 != 0 )
  {
    v6 = a1;
    v13 = (uint16_t)((*a1 << 8) + v3) - 1;
    v7 = 0;
    while ( 1 )
    {
      v8 = (uint8_t *)&unk_2116E00;
      if ( v7 < (uint16_t)(v3 + (v4 << 8)) )
        v8 = &v6[2 * v7 + 2];
      v9 = v8[1] + (*v8 << 8);
      v10 = (uint8_t *)&unk_2116E00;
      if ( v9 != 0 )
        v10 = &v6[v9];
      v11 = 0;
      v12 = (*v10 << 8) + v10[1];
      if ( v12 != 0 )
        v11 = 2 * v12 - 2;
      if ( (uint8_t)sub_12CBC20(
                              a2,
                              v12,
                              (int)(uintptr_t)(v10 + 4),
                              (uint16_t)(v10[3] + (v10[2] << 8)),
                              &v10[v11 + 4],
                              a3) != 0 )
        return 1;
      if ( v7 == v13 )
        break;
      ++v7;
      v6 = a1;
      v4 = *a1;
      v3 = a1[1];
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainRuleSet::apply  (binary VA: 0x12d4c50)
// Original: OT::ChainRuleSet::apply
// ----------------------------------------------------------------------------
int OT::ChainRuleSet::apply(uint8_t *a1, uint32_t *a2, int *a3)
{
  int16_t v3;
  uint8_t v4;
  int result;
  unsigned int i;
  uint8_t *v7;
  uint16_t v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  uint16_t v12; // di
  uint8_t *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;

  v3 = *a1;
  v4 = a1[1];
  result = 0;
  if ( v4 + (v3 << 8) != 0 )
  {
    v16 = (uint16_t)(v4 + (*a1 << 8)) - 1;
    for ( i = 0; ; ++i )
    {
      v7 = (uint8_t *)&unk_2116E00;
      v15 = 0;
      if ( i < (uint16_t)(v4 + (v3 << 8)) )
        v7 = &a1[2 * i + 2];
      v8 = v7[1] + (*v7 << 8);
      v9 = (uint8_t *)&unk_2116E00;
      if ( v8 != 0 )
        v9 = &a1[v8];
      v10 = 2;
      v14 = (uint16_t)(v9[1] + (*v9 << 8));
      v11 = &v9[2 * v14 + 2];
      v12 = v9[2 * v14 + 3] + (*v11 << 8);
      if ( v12 != 0 )
      {
        v15 = v12;
        v10 = 2 * v12;
      }
      v13 = &v11[v10];
      if ( (uint8_t)sub_12CC170(
                              a2,
                              v14,
                              (int)(uintptr_t)(v9 + 2),
                              v15,
                              (int)(uintptr_t)(&v9[2 * v14 + 4]),
                              (uint16_t)(v13[1] + (*v13 << 8)),
                              (int)(uintptr_t)(v13 + 2),
                              (uint16_t)(v13[2 * (uint16_t)(v13[1] + (*v13 << 8)) + 3]
                                               + (v13[2 * (uint16_t)(v13[1] + (*v13 << 8)) + 2] << 8)),
                              &v13[2 * (uint16_t)(v13[1] + (*v13 << 8)) + 4],
                              a3) != 0 )
        return 1;
      if ( i == v16 )
        break;
      v3 = *a1;
      v4 = a1[1];
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::PairPosFormat2::apply  (binary VA: 0x12d4dc0)
// Original: OT::PairPosFormat2::apply
// ----------------------------------------------------------------------------
int OT::PairPosFormat2::apply(OT::PairPosFormat2::Self *self, OT::hb_apply_context_t::Self *a2)
{
  uint32_t *v2;
  bool v3;
  int v4;
  int v5;
  char v6;
  int v7;
  uint16_t v8;
  OT::Coverage::Self *v9;
  uint16_t v10;
  OT::ClassDef::Self *v11;
  OT::ClassDef::Self *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef uint32_t _g4_t_v26[3];
  typedef bool _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v18)) > _g4_s1 ? (32u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v22)) > _g4_s5 ? (48u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (55u + sizeof(_g4_t_v23)) > _g4_s6 ? (55u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v24)) > _g4_s7 ? (56u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v26)) > _g4_s9 ? (64u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v27)) > _g4_s10 ? (76u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (77u + sizeof(_g4_t_v28)) > _g4_s11 ? (77u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v29)) > _g4_s12 ? (80u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v30)) > _g4_s13 ? (84u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v31)) > _g4_s14 ? (88u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v32)) > _g4_s15 ? (92u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v33)) > _g4_s16 ? (96u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v34)) > _g4_s17 ? (100u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v35)) > _g4_s18 ? (104u + sizeof(_g4_t_v35)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 55u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 77u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);

  v26[1] = (uint32_t)(uintptr_t)(a2);
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v2 = *((uint32_t **)a2 + 3);
  v3 = *(uint32_t *)a2 != 1;
  v27 = *(uint32_t *)a2 == 1;
  v4 = v2[21];
  v25 = v2[22];
  v35 = v25;
  v5 = *((uint32_t *)a2 + 9);
  v26[0] = v4;
  v26[2] = v5;
  v6 = 1;
  if ( v3 )
    v6 = *((uint8_t *)a2 + 24);
  v28 = v6;
  v29 = *((uint32_t *)a2 + 5);
  v23 = 0;
  v7 = v2[25];
  v30 = *(uint8_t *)(v7 + 20 * v4 + 15);
  if ( v4 + 1 < v25 )
  {
    v17 = *(uint32_t *)(v7 + 20 * v4);
    v8 = (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3);
    v9 = (OT::Coverage::Self *)((OT::PairPosFormat2::Self *)((char *)self + v8));
    if ( v8 == 0 )
      v9 = (OT::Coverage::Self *)&unk_2116E00;
    if ( OT::Coverage::get_coverage(v9, v17) != -1
      && (uint8_t)OT::hb_apply_context_t::skipping_forward_iterator_t::next((OT::hb_apply_context_t::skipping_forward_iterator_t::Self *)v26) != 0 )
    {
      v22 = _popcountsi2((uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)));
      v21 = _popcountsi2((uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8)));
      v20 = 20 * v2[21];
      v10 = (*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9);
      v18 = v2[25];
      v11 = (OT::ClassDef::Self *)((OT::PairPosFormat2::Self *)((char *)self + v10));
      if ( v10 == 0 )
        v11 = (OT::ClassDef::Self *)&unk_2116E00;
      v24 = OT::ClassDef::get_class(v11, *(uint32_t *)(v2[25] + v20));
      v12 = (OT::ClassDef::Self *)((OT::PairPosFormat2::Self *)((char *)self
                                 + (uint16_t)((*((uint8_t *)self + 10) << 8)
                                                    + *((uint8_t *)self + 11))));
      if ( (*((uint8_t *)self + 10) << 8) + *((uint8_t *)self + 11) == 0 )
        v12 = (OT::ClassDef::Self *)&unk_2116E00;
      v13 = OT::ClassDef::get_class(v12, *(uint32_t *)(v18 + 20 * v26[0]));
      if ( v24 < (uint16_t)(*((uint8_t *)self + 13) + (*((uint8_t *)self + 12) << 8)) )
      {
        v14 = (uint16_t)(*((uint8_t *)self + 15) + (*((uint8_t *)self + 14) << 8));
        if ( v13 < v14 )
        {
          v19 = (uint8_t *)self + 2 * (v22 + v21) * (v13 + v24 * v14) + 16;
          OT::ValueFormat::apply_value(
            (uint8_t *)self + 4,
            *((hb_font_t **)a2 + 1),
            *((uint32_t *)a2 + 4),
            (int)(uintptr_t)(self),
            v19,
            (int *)(v2[27] + v20));
          OT::ValueFormat::apply_value(
            (uint8_t *)self + 6,
            *((hb_font_t **)a2 + 1),
            *((uint32_t *)a2 + 4),
            (int)(uintptr_t)(self),
            &v19[2 * v22],
            (int *)(v2[27] + 20 * v26[0]));
          v15 = v26[0];
          v2[21] = v26[0];
          if ( v21 != 0 )
            v2[21] = v15 + 1;
          return 1;
        }
      }
    }
  }
  return v23;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContextFormat2::apply  (binary VA: 0x12d5080)
// Original: OT::ChainContextFormat2::apply
// ----------------------------------------------------------------------------
int OT::ChainContextFormat2::apply(OT::ChainContextFormat2::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  bool v3;
  OT::Coverage::Self *v4;
  OT::Coverage::Self *v5;
  int coverage;
  int result;
  char *v8;
  OT::ClassDef::Self *v9;
  char *v10;
  unsigned int v11;
  int16_t v12;
  int16_t v13;
  uint16_t v14;
  uint8_t *v15;
  uint8_t *v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[11];
  enum : size_t {
    _g4_s0 = 128u,
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

  v17 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84));
  v2 = (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  v3 = v2 == 0;
  v4 = (OT::Coverage::Self *)((OT::ChainContextFormat2::Self *)((char *)self + v2));
  v5 = (OT::Coverage::Self *)&unk_2116E00;
  if ( !v3 )
    v5 = v4;
  coverage = OT::Coverage::get_coverage(
               v5,
               *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84)));
  result = 0;
  if ( coverage != -1 )
  {
    v8 = (char *)self + (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
    if ( *((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8) == 0 )
      v8 = (char *)&unk_2116E00;
    v18 = (int)(uintptr_t)(v8);
    v9 = (OT::ClassDef::Self *)((OT::ChainContextFormat2::Self *)((char *)self
                                   + (uint16_t)(*((uint8_t *)self + 7)
                                                      + (*((uint8_t *)self + 6) << 8))));
    if ( *((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8) == 0 )
      v9 = (OT::ClassDef::Self *)&unk_2116E00;
    v10 = (char *)self + (uint16_t)(*((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8));
    if ( *((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8) == 0 )
      v10 = (char *)&unk_2116E00;
    v19 = (int)(uintptr_t)(v10);
    v11 = OT::ClassDef::get_class(v9, v17);
    v12 = *((uint8_t *)self + 11);
    v13 = *((uint8_t *)self + 10) << 8;
    v20[2] = (int)(uintptr_t)(v9);
    v14 = v13 + v12;
    v15 = (uint8_t *)self + 2 * v11 + 12;
    v20[1] = v18;
    if ( v11 >= v14 )
      v15 = (uint8_t *)&unk_2116E00;
    v20[3] = v19;
    v16 = (uint8_t *)self + (uint16_t)(v15[1] + (*v15 << 8));
    if ( v15[1] + (*v15 << 8) == 0 )
      v16 = (uint8_t *)&unk_2116E00;
    v20[0] = (int)(uintptr_t)(sub_12CB1B0);
    return OT::ChainRuleSet::apply(v16, (uint32_t *)(a2), v20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContextFormat3::apply  (binary VA: 0x12d51c0)
// Original: OT::ChainContextFormat3::apply
// ----------------------------------------------------------------------------
int OT::ChainContextFormat3::apply(OT::ChainContextFormat3::Self *self, OT::hb_apply_context_t::Self *a2)
{
  uint8_t *v2;
  int v3;
  int v4;
  int v5;
  OT::Coverage::Self *v6;
  unsigned int *v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  typedef unsigned int _g4_t_v12;
  typedef uint16_t _g4_t_v13;
  typedef int _g4_t_v14[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v13)) > _g4_s1 ? (14u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 14u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v2 = (uint8_t *)self
     + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
     + 4;
  v12 = (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  v3 = *((uint32_t *)a2 + 3);
  v4 = *(uint32_t *)(v3 + 84);
  v5 = *(uint32_t *)(v3 + 100);
  v6 = (OT::Coverage::Self *)&unk_2116E00;
  v7 = (unsigned int *)(v5 + 20 * v4);
  v8 = (uint8_t *)self + 2 * v12 + 6;
  v13 = *((uint8_t *)self + 2 * v12 + 5) + (*v2 << 8);
  if ( v13 == 0 )
    v8 = (uint8_t *)&unk_2116E00;
  if ( v8[1] + (*v8 << 8) != 0 )
    v6 = (OT::Coverage::Self *)((OT::ChainContextFormat3::Self *)((char *)self + (uint16_t)(v8[1] + (*v8 << 8))));
  if ( OT::Coverage::get_coverage(v6, *v7) == -1 )
    return 0;
  v14[1] = (int)(uintptr_t)(self);
  v14[2] = (int)(uintptr_t)(self);
  v14[3] = (int)(uintptr_t)(self);
  v9 = &v2[2 * v13 + 2];
  v10 = (uint16_t)((*v9 << 8) + v2[2 * v13 + 3]);
  v14[0] = (int)(uintptr_t)(sub_12CB400);
  return sub_12CC170(
           a2,
           v12,
           (int)(uintptr_t)(self) + 4,
           v13,
           (int)(uintptr_t)(v2 + 4),
           v10,
           (int)(uintptr_t)(v9 + 2),
           (uint16_t)(v9[2 * v10 + 3] + (v9[2 * v10 + 2] << 8)),
           &v9[2 * v10 + 4],
           v14);
}

// ----------------------------------------------------------------------------
// Function: OT::ReverseChainSingleSubstFormat1::apply  (binary VA: 0x12d52f0)
// Original: OT::ReverseChainSingleSubstFormat1::apply
// ----------------------------------------------------------------------------
int OT::ReverseChainSingleSubstFormat1::apply(OT::ReverseChainSingleSubstFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  OT::Coverage::Self *v3;
  unsigned int v4;
  uint8_t *v5;
  uint8_t *v6;
  unsigned int v7;
  uint8_t *v8;
  unsigned int v9;
  uint8_t v10;
  uint8_t v11;
  uint8_t v12;
  unsigned int coverage;

  v11 = 0;
  if ( *((uint32_t *)a2 + 8) == 8 )
  {
    v3 = (OT::Coverage::Self *)((OT::ReverseChainSingleSubstFormat1::Self *)((char *)self
                                              + (uint16_t)((*((uint8_t *)self + 2) << 8)
                                                                 + *((uint8_t *)self + 3))));
    if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) == 0 )
      v3 = (OT::Coverage::Self *)&unk_2116E00;
    coverage = OT::Coverage::get_coverage(
                 v3,
                 *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84)));
    if ( coverage != -1 )
    {
      v4 = (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5));
      v5 = (uint8_t *)self + 2 * (uint16_t)v4 + 6;
      v10 = *v5;
      v12 = *((uint8_t *)self + 2 * (uint16_t)v4 + 7);
      if ( (uint8_t)sub_12CBF80(
                              (int)(uintptr_t)(a2),
                              v4,
                              (int)(uintptr_t)(self) + 6,
                              (int (*)(uint32_t, int, int))sub_12CB400,
                              (int)(uintptr_t)(self)) != 0
        && (uint8_t)sub_12CBCF0(
                              (int)(uintptr_t)(a2),
                              (uint16_t)((*v5 << 8) + v5[1]),
                              (int)(uintptr_t)(v5 + 2),
                              (int)(uintptr_t)(sub_12CB400),
                              (int)(uintptr_t)(self),
                              1) != 0 )
      {
        v6 = &v5[2 * (uint16_t)(v12 + (v10 << 8)) + 2];
        v7 = (uint16_t)(v5[2 * (uint16_t)(v12 + (v10 << 8)) + 3] + (*v6 << 8));
        v8 = &v6[2 * coverage + 2];
        if ( coverage >= v7 )
          v8 = (uint8_t *)&unk_2116E00;
        v9 = (uint16_t)(v8[1] + (*v8 << 8));
        OT::hb_apply_context_t::set_glyph_props((uint8_t **)a2, v9, 0, false, false);
        v11 = 1;
        *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84)) = v9;
      }
    }
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: OT::MultipleSubstFormat1::apply  (binary VA: 0x12d5490)
// Original: OT::MultipleSubstFormat1::apply
// ----------------------------------------------------------------------------
int OT::MultipleSubstFormat1::apply(OT::MultipleSubstFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  int v3;
  OT::Coverage::Self *v4;
  unsigned int coverage;
  int result;
  uint8_t *v7;
  uint16_t v8;
  uint8_t *v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  OT::Coverage::Self *v15;

  v2 = *((uint32_t *)a2 + 3);
  v3 = *(uint32_t *)(v2 + 100) + 20 * *(uint32_t *)(v2 + 84);
  v4 = (OT::Coverage::Self *)((OT::MultipleSubstFormat1::Self *)((char *)self
                                  + (uint16_t)(*((uint8_t *)self + 3)
                                                     + (*((uint8_t *)self + 2) << 8))));
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) == 0 )
    v4 = (OT::Coverage::Self *)&unk_2116E00;
  coverage = OT::Coverage::get_coverage(v4, *(uint32_t *)v3);
  result = 0;
  if ( coverage != -1 )
  {
    v7 = (uint8_t *)self + 2 * coverage + 6;
    if ( coverage >= (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5)) )
      v7 = (uint8_t *)&unk_2116E00;
    v8 = v7[1] + (*v7 << 8);
    v9 = (uint8_t *)self + v8;
    if ( v8 == 0 )
      v9 = (uint8_t *)&unk_2116E00;
    result = 0;
    if ( (*v9 << 8) + v9[1] != 0 )
    {
      if ( (uint16_t)((*v9 << 8) + v9[1]) == 1 )
      {
        OT::hb_apply_context_t::replace_glyph(a2, (uint16_t)(v9[3] + (v9[2] << 8)));
        return 1;
      }
      else
      {
        v15 = (OT::Coverage::Self *)(uint16_t)((*v9 << 8) + v9[1]);
        v10 = v2;
        v11 = (*(uint16_t *)(v3 + 12) >> 1) & 2;
        v12 = 0;
        while ( 1 )
        {
          *(uint8_t *)(*(uint32_t *)(v10 + 100) + 20 * *(uint32_t *)(v10 + 84) + 14) = v12 & 0xF;
          v13 = v11;
          v14 = (uint16_t)(v9[2 * v12 + 3] + (v9[2 * v12 + 2] << 8));
          OT::hb_apply_context_t::set_glyph_props((uint8_t **)a2, v14, v11, false, true);
          ++v12;
          sub_12A89F0(*((uint32_t *)a2 + 3), v14);
          v11 = v13;
          if ( (unsigned int)(uintptr_t)(v15) <= v12 )
            break;
          v10 = *((uint32_t *)a2 + 3);
        }
        ++*(uint32_t *)(*((uint32_t *)a2 + 3) + 84);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSubstFormat1::apply  (binary VA: 0x12d5640)
// Original: OT::LigatureSubstFormat1::apply
// ----------------------------------------------------------------------------
int OT::LigatureSubstFormat1::apply(OT::LigatureSubstFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  bool v3;
  OT::Coverage::Self *v4;
  OT::Coverage::Self *v5;
  unsigned int coverage;
  int result;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  uint16_t v12;
  OT::Ligature::Self *v13;
  int v14;

  v2 = (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  v3 = v2 == 0;
  v4 = (OT::Coverage::Self *)((OT::LigatureSubstFormat1::Self *)((char *)self + v2));
  v5 = (OT::Coverage::Self *)&unk_2116E00;
  if ( !v3 )
    v5 = v4;
  coverage = OT::Coverage::get_coverage(
               v5,
               *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84)));
  result = 0;
  if ( coverage != -1 )
  {
    v8 = (uint8_t *)self + 2 * coverage + 6;
    if ( coverage >= (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)) )
      v8 = (uint8_t *)&unk_2116E00;
    v9 = (uint8_t *)self + (uint16_t)(v8[1] + (*v8 << 8));
    if ( v8[1] + (*v8 << 8) == 0 )
      v9 = (uint8_t *)&unk_2116E00;
    result = 0;
    if ( v9[1] + (*v9 << 8) != 0 )
    {
      v14 = (uint16_t)(v9[1] + (*v9 << 8)) + 1;
      v10 = 1;
      while ( 1 )
      {
        v11 = (uint8_t *)&unk_2116E00;
        if ( (uint16_t)((*v9 << 8) + v9[1]) > (unsigned int)(v10 - 1) )
          v11 = &v9[2 * v10];
        v12 = v11[1] + (*v11 << 8);
        v13 = (OT::Ligature::Self *)&unk_2116E00;
        if ( v12 != 0 )
          v13 = (OT::Ligature::Self *)&v9[v12];
        result = OT::Ligature::apply(v13, a2);
        if ( (uint8_t)result != 0 )
          break;
        if ( ++v10 == v14 )
          return result;
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSubstFormat1::would_apply  (binary VA: 0x12d5790)
// Original: OT::LigatureSubstFormat1::would_apply
// ----------------------------------------------------------------------------
int OT::LigatureSubstFormat1::would_apply(uint8_t *a1, int a2)
{
  unsigned int *v2;
  uint16_t v3;
  OT::Coverage::Self *v4;
  unsigned int coverage;
  int result;
  uint8_t *v7;
  uint8_t *v8;
  unsigned int v9;
  unsigned int v10;
  uint8_t *v11;
  uint16_t v12; // di
  uint8_t *v13;
  unsigned int v14;
  char *v15;
  unsigned int v16;
  char *v17;

  v2 = *(unsigned int **)(a2 + 4);
  v3 = a1[3] + (a1[2] << 8);
  v4 = (OT::Coverage::Self *)&a1[v3];
  if ( v3 == 0 )
    v4 = (OT::Coverage::Self *)&unk_2116E00;
  coverage = OT::Coverage::get_coverage(v4, *v2);
  result = 0;
  if ( coverage != -1 )
  {
    v7 = &a1[2 * coverage + 6];
    if ( coverage >= (uint16_t)(a1[5] + (a1[4] << 8)) )
      v7 = (uint8_t *)&unk_2116E00;
    v8 = &a1[(uint16_t)(v7[1] + (*v7 << 8))];
    if ( v7[1] + (*v7 << 8) == 0 )
      v8 = (uint8_t *)&unk_2116E00;
    result = 0;
    v9 = (uint16_t)((*v8 << 8) + v8[1]);
    if ( (*v8 << 8) + v8[1] != 0 )
    {
      v10 = 0;
      v16 = *(uint32_t *)(a2 + 8);
      while ( 1 )
      {
        v11 = (uint8_t *)&unk_2116E00;
        if ( v10 < v9 )
          v11 = &v8[2 * v10 + 2];
        v12 = v11[1] + (*v11 << 8);
        v13 = (uint8_t *)&unk_2116E00;
        if ( v12 != 0 )
          v13 = &v8[v12];
        if ( (uint16_t)(v13[3] + (v13[2] << 8)) == v16 )
        {
          if ( v16 <= 1 )
            return 1;
          v14 = 1;
          v17 = (char *)(v13 + 2);
          while ( 1 )
          {
            v15 = (char *)&unk_2116E00;
            if ( v14 < v16 )
              v15 = &v17[2 * v14];
            if ( v2[v14] != (uint16_t)(((uint8_t)*v15 << 8) + (uint8_t)v15[1]) )
              break;
            if ( ++v14 == v16 )
              return 1;
          }
        }
        if ( v9 <= ++v10 )
          return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::CursivePosFormat1::apply  (binary VA: 0x12d5910)
// Original: OT::CursivePosFormat1::apply
// ----------------------------------------------------------------------------
int OT::CursivePosFormat1::apply(OT::CursivePosFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  char v6;
  OT::Coverage::Self *v8;
  unsigned int coverage;
  char *v10;
  OT::Coverage::Self *v11;
  unsigned int v12;
  uint8_t *v13;
  OT::Anchor::Self *v14;
  OT::Anchor::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  int v27;
  typedef unsigned int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef uint8_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef bool _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40[4];
  typedef int _g4_t_v41[4];
  typedef int _g4_t_v42[4];
  typedef int _g4_t_v43[4];
  typedef uint32_t _g4_t_v44[3];
  typedef bool _g4_t_v45;
  typedef char _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v29)) > _g4_s1 ? (44u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v30)) > _g4_s2 ? (52u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v31)) > _g4_s3 ? (56u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v32)) > _g4_s4 ? (60u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v33)) > _g4_s5 ? (64u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v34)) > _g4_s6 ? (64u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v35)) > _g4_s7 ? (68u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v36)) > _g4_s8 ? (68u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v37)) > _g4_s9 ? (72u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v38)) > _g4_s10 ? (76u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v39)) > _g4_s11 ? (76u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v40)) > _g4_s12 ? (80u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v41)) > _g4_s13 ? (96u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v42)) > _g4_s14 ? (112u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v43)) > _g4_s15 ? (128u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v44)) > _g4_s16 ? (144u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (156u + sizeof(_g4_t_v45)) > _g4_s17 ? (156u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (157u + sizeof(_g4_t_v46)) > _g4_s18 ? (157u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v47)) > _g4_s19 ? (160u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (164u + sizeof(_g4_t_v48)) > _g4_s20 ? (164u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (168u + sizeof(_g4_t_v49)) > _g4_s21 ? (168u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v50)) > _g4_s22 ? (172u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v51)) > _g4_s23 ? (176u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v52)) > _g4_s24 ? (180u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (184u + sizeof(_g4_t_v53)) > _g4_s25 ? (184u + sizeof(_g4_t_v53)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 128u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 144u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 157u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 164u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 168u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 176u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 180u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 184u);

  v37 = *((uint32_t **)a2 + 3);
  v2 = v37[21];
  v3 = v37[25] + 20 * v2;
  if ( (*(uint8_t *)(v3 + 12) & 8) != 0 )
    return 0;
  v38 = *(uint32_t *)a2 == 1;
  v44[0] = v37[21];
  v4 = v37[22];
  v44[1] = (uint32_t)(uintptr_t)(a2);
  v35 = v4;
  v53 = v4;
  v5 = *((uint32_t *)a2 + 9);
  v48 = 0;
  v44[2] = v5;
  v49 = 0;
  v50 = 0;
  v45 = v38;
  v51 = 0;
  v52 = 1;
  v6 = 1;
  if ( !v38 )
    v6 = *((uint8_t *)a2 + 24);
  v46 = v6;
  v47 = *((uint32_t *)a2 + 5);
  v48 = *(uint8_t *)(v3 + 15);
  if ( v2 + 1 >= v35 )
    return 0;
  v28 = *(uint32_t *)v3;
  v8 = (OT::Coverage::Self *)((OT::CursivePosFormat1::Self *)((char *)self
                               + (uint16_t)((*((uint8_t *)self + 2) << 8)
                                                  + *((uint8_t *)self + 3))));
  if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) == 0 )
    v8 = (OT::Coverage::Self *)&unk_2116E00;
  coverage = OT::Coverage::get_coverage(v8, v28);
  v10 = (char *)self + 4 * coverage + 6;
  if ( coverage >= (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5)) )
    v10 = (char *)&unk_2116E00;
  if ( (uint8_t)v10[3] + ((uint8_t)v10[2] << 8) == 0 )
    return 0;
  v29 = v10;
  if ( (uint8_t)OT::hb_apply_context_t::skipping_forward_iterator_t::next((OT::hb_apply_context_t::skipping_forward_iterator_t::Self *)v44) == 0 )
    return 0;
  v33 = v37[25];
  v31 = v44[0];
  v30 = 20 * v44[0];
  v11 = (OT::Coverage::Self *)((OT::CursivePosFormat1::Self *)((char *)self
                                + (uint16_t)(*((uint8_t *)self + 3)
                                                   + (*((uint8_t *)self + 2) << 8))));
  if ( *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8) == 0 )
    v11 = (OT::Coverage::Self *)&unk_2116E00;
  v12 = OT::Coverage::get_coverage(v11, *(uint32_t *)(v33 + 20 * v44[0]));
  v13 = (uint8_t *)self + 4 * v12 + 6;
  if ( v12 >= (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)) )
    v13 = (uint8_t *)&unk_2116E00;
  v36 = v13;
  if ( v13[1] + (*v13 << 8) == 0 )
    return 0;
  v39 = v37[21];
  v32 = 20 * v39;
  v34 = *(uint32_t *)(v33 + 20 * v39);
  v14 = (OT::Anchor::Self *)((OT::CursivePosFormat1::Self *)((char *)self
                                + (uint16_t)(((uint8_t)v29[2] << 8) + (uint8_t)v29[3])));
  if ( ((uint8_t)v29[2] << 8) + (uint8_t)v29[3] == 0 )
    v14 = (OT::Anchor::Self *)&unk_2116E00;
  OT::Anchor::get_anchor(v14, *((hb_font_t **)a2 + 1), v34, v42, v43);
  v15 = (OT::Anchor::Self *)((OT::CursivePosFormat1::Self *)((char *)self + (uint16_t)(v36[1] + (*v36 << 8))));
  if ( v36[1] + (*v36 << 8) == 0 )
    v15 = (OT::Anchor::Self *)&unk_2116E00;
  OT::Anchor::get_anchor(v15, *((hb_font_t **)a2 + 1), *(uint32_t *)(v37[25] + v30), v40, v41);
  v16 = v37[27];
  v17 = *((uint32_t *)a2 + 4);
  if ( v17 == 5 )
  {
    v26 = (uint32_t *)(v16 + v32);
    v27 = -v42[0];
    *v26 -= v42[0] + *(uint32_t *)(v16 + v32 + 8);
    v26[2] = v27;
    *(uint32_t *)(v16 + v30) = v40[0] + *(uint32_t *)(v16 + v30 + 8);
  }
  else if ( v17 > 5 )
  {
    if ( v17 == 6 )
    {
      v22 = v41[0];
      *(uint32_t *)(v16 + v32 + 4) = v43[0] + *(uint32_t *)(v16 + v32 + 12);
      v23 = v16 + v30;
      *(uint32_t *)(v23 + 4) -= v22 + *(uint32_t *)(v16 + v30 + 12);
      *(uint32_t *)(v23 + 12) = -v22;
    }
    else if ( v17 == 7 )
    {
      v20 = v43[0];
      v21 = v16 + v32;
      *(uint32_t *)(v21 + 4) -= v43[0] + *(uint32_t *)(v16 + v32 + 12);
      *(uint32_t *)(v21 + 12) = -v20;
      *(uint32_t *)(v16 + v30 + 4) = v41[0];
    }
  }
  else if ( v17 == 4 )
  {
    *(uint32_t *)(v16 + 20 * v39) = v42[0] + *(uint32_t *)(v16 + 20 * v39 + 8);
    v24 = (uint32_t *)(v16 + v30);
    v25 = -v40[0];
    *v24 -= v40[0] + *(uint32_t *)(v16 + v30 + 8);
    v24[2] = v25;
  }
  if ( (*((uint8_t *)a2 + 36) & 1) != 0 )
  {
    v18 = v32 + v16;
    *(uint16_t *)(v18 + 18) = v31 - v39;
    if ( (*((uint32_t *)a2 + 4) & 0xFFFFFFFE) == 4 )
      *(uint32_t *)(v18 + 12) = v41[0] - v43[0];
    else
      *(uint32_t *)(v18 + 8) = v40[0] - v42[0];
  }
  else
  {
    v19 = v30 + v16;
    *(uint16_t *)(v19 + 18) = v39 - v31;
    if ( (*((uint32_t *)a2 + 4) & 0xFFFFFFFE) == 4 )
      *(uint32_t *)(v19 + 12) = v43[0] - v41[0];
    else
      *(uint32_t *)(v19 + 8) = v42[0] - v40[0];
  }
  v37[21] = v31;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::PairPosFormat1::apply  (binary VA: 0x12d5da0)
// Original: OT::PairPosFormat1::apply
// ----------------------------------------------------------------------------
int OT::PairPosFormat1::apply(OT::PairPosFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  uint32_t *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  OT::Coverage::Self *v7;
  unsigned int coverage;
  uint8_t *v9;
  uint16_t v10;
  uint8_t *v11;
  int16_t v12;
  uint8_t *v13;
  typedef uint8_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint8_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[3];
  typedef bool _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v20)) > _g4_s5 ? (32u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v21)) > _g4_s6 ? (36u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v23)) > _g4_s8 ? (40u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v26)) > _g4_s11 ? (44u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v27)) > _g4_s12 ? (44u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v28)) > _g4_s13 ? (48u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v29)) > _g4_s14 ? (60u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (61u + sizeof(_g4_t_v30)) > _g4_s15 ? (61u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v31)) > _g4_s16 ? (64u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v32)) > _g4_s17 ? (68u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v33)) > _g4_s18 ? (72u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v34)) > _g4_s19 ? (76u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v35)) > _g4_s20 ? (80u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v36)) > _g4_s21 ? (84u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v37)) > _g4_s22 ? (88u + sizeof(_g4_t_v37)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 61u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);

  v28[1] = (uint32_t)(uintptr_t)(a2);
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 1;
  v2 = *((uint32_t **)a2 + 3);
  v3 = *(uint32_t *)a2 == 1;
  v23 = 1;
  v4 = v2[21];
  v26 = v2[22];
  v37 = v26;
  v5 = *((uint32_t *)a2 + 9);
  v28[0] = v4;
  v28[2] = v5;
  v29 = v3;
  if ( !v3 )
    v23 = *((uint8_t *)a2 + 24);
  v6 = v2[25];
  v30 = v23;
  v31 = *((uint32_t *)a2 + 5);
  v24 = 0;
  v21 = 20 * v4;
  v32 = *(uint8_t *)(v6 + 20 * v4 + 15);
  if ( v4 + 1 < v26 )
  {
    v7 = (OT::Coverage::Self *)((OT::PairPosFormat1::Self *)((char *)self
                              + (uint16_t)((*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3))));
    if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) == 0 )
      v7 = (OT::Coverage::Self *)&unk_2116E00;
    coverage = OT::Coverage::get_coverage(v7, *(uint32_t *)(v6 + v21));
    if ( coverage != -1
      && (uint8_t)OT::hb_apply_context_t::skipping_forward_iterator_t::next((OT::hb_apply_context_t::skipping_forward_iterator_t::Self *)v28) != 0 )
    {
      v20 = v28[0];
      v9 = (uint8_t *)self + 2 * coverage + 10;
      if ( coverage >= (uint16_t)(*((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8)) )
        v9 = (uint8_t *)&unk_2116E00;
      v10 = v9[1] + (*v9 << 8);
      v22 = *((uint32_t **)a2 + 3);
      v11 = (uint8_t *)self + v10;
      if ( v10 == 0 )
        v11 = (uint8_t *)&unk_2116E00;
      v17 = _popcountsi2((uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)));
      v16 = _popcountsi2((uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8)));
      v24 = 0;
      v18 = 2 * (v17 + v16 + 1);
      v12 = v11[1];
      if ( v12 + (*v11 << 8) != 0 )
      {
        v13 = v11 + 2;
        v19 = *(uint32_t *)(v22[25] + 20 * v20);
        if ( v19 == (uint16_t)(v11[3] + (v11[2] << 8)) )
        {
LABEL_19:
          v15 = v13;
          OT::ValueFormat::apply_value(
            (uint8_t *)self + 4,
            *((hb_font_t **)a2 + 1),
            *((uint32_t *)a2 + 4),
            (int)(uintptr_t)(v11),
            v13 + 2,
            (int *)(v22[27] + 20 * v22[21]));
          OT::ValueFormat::apply_value(
            (uint8_t *)self + 6,
            *((hb_font_t **)a2 + 1),
            *((uint32_t *)a2 + 4),
            (int)(uintptr_t)(v11),
            &v15[2 * v17 + 2],
            (int *)(v22[27] + 20 * v20));
          v24 = 1;
          v22[21] = v20 - ((v16 == 0) - 1);
        }
        else
        {
          v27 = 0;
          v25 = (int)(uintptr_t)(&v11[v18 + 2]);
          while ( (uint16_t)(v12 + (*v11 << 8)) > (unsigned int)++v27 )
          {
            v13 = (uint8_t *)v25;
            v25 += v18;
            if ( v19 == (uint16_t)(v13[1] + (*v13 << 8)) )
              goto LABEL_19;
          }
          return 0;
        }
      }
    }
  }
  return v24;
}

// ----------------------------------------------------------------------------
// Function: OT::MarkBasePosFormat1::apply  (binary VA: 0x12d6090)
// Original: OT::MarkBasePosFormat1::apply
// ----------------------------------------------------------------------------
char OT::MarkBasePosFormat1::apply(OT::MarkBasePosFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  OT::Coverage::Self *v3;
  int coverage;
  char result;
  unsigned int v6;
  char v7;
  unsigned int v8;
  OT::Coverage::Self *v9;
  uint8_t *v10;
  uint8_t *v11;
  typedef int _g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19[9];
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v18)) > _g4_s6 ? (44u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v19)) > _g4_s7 ? (48u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v20)) > _g4_s8 ? (84u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);

  v2 = *((uint32_t *)a2 + 3);
  v14 = *(uint32_t *)(v2 + 84);
  v3 = (OT::Coverage::Self *)&unk_2116E00;
  if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) != 0 )
    v3 = (OT::Coverage::Self *)((OT::MarkBasePosFormat1::Self *)((char *)self
                                  + (uint16_t)((*((uint8_t *)self + 2) << 8)
                                                     + *((uint8_t *)self + 3))));
  coverage = OT::Coverage::get_coverage(v3, *(uint32_t *)(*(uint32_t *)(v2 + 100) + 20 * *(uint32_t *)(v2 + 84)));
  result = 0;
  if ( coverage != -1 )
  {
    v12 = v14;
    v15 = coverage;
    sub_12C7D30((int)(uintptr_t)(v19), (int)(uintptr_t)(a2), v12, 1, 0);
    v19[2] = 8;
    v6 = v15;
    while ( 1 )
    {
      v16 = v6;
      v7 = sub_12CBDE0(v19);
      v6 = v16;
      if ( v7 == 0 )
        return 0;
      v18 = v19[0];
      v8 = *(uint32_t *)(v2 + 100) + 20 * v19[0];
      if ( (*(uint8_t *)(v8 + 14) & 0x10) != 0 || (*(uint8_t *)(v8 + 14) & 0xF) == 0 )
        break;
      ++v20;
    }
    v13 = *(uint32_t *)v8;
    v9 = (OT::Coverage::Self *)((OT::MarkBasePosFormat1::Self *)((char *)self
                                  + (uint16_t)((*((uint8_t *)self + 4) << 8)
                                                     + *((uint8_t *)self + 5))));
    if ( (*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5) == 0 )
      v9 = (OT::Coverage::Self *)&unk_2116E00;
    v17 = OT::Coverage::get_coverage(v9, v13);
    result = 0;
    if ( v17 != -1 )
    {
      v10 = (uint8_t *)self
          + (uint16_t)(*((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8));
      if ( *((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8) == 0 )
        v10 = (uint8_t *)&unk_2116E00;
      v11 = (uint8_t *)self
          + (uint16_t)((*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9));
      if ( (*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9) == 0 )
        v11 = (uint8_t *)&unk_2116E00;
      return sub_12D38B0(
               v11,
               (hb_font_t **)a2 + 1,
               *((uint32_t **)a2 + 3),
               v16,
               v17,
               v10,
               (uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8)),
               v18);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::MarkMarkPosFormat1::apply  (binary VA: 0x12d6270)
// Original: OT::MarkMarkPosFormat1::apply
// ----------------------------------------------------------------------------
int OT::MarkMarkPosFormat1::apply(OT::MarkMarkPosFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  OT::Coverage::Self *v3;
  int coverage;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  OT::Coverage::Self *v10;
  uint8_t *v11;
  uint8_t *v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v15)) > _g4_s1 ? (40u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v17)) > _g4_s3 ? (48u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v18)) > _g4_s4 ? (52u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v19)) > _g4_s5 ? (52u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v20)) > _g4_s6 ? (56u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v21)) > _g4_s7 ? (60u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v22)) > _g4_s8 ? (60u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v23)) > _g4_s9 ? (64u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);

  v2 = *((uint32_t *)a2 + 3);
  v15 = *(uint32_t *)(v2 + 84);
  v3 = (OT::Coverage::Self *)&unk_2116E00;
  if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) != 0 )
    v3 = (OT::Coverage::Self *)((OT::MarkMarkPosFormat1::Self *)((char *)self
                                  + (uint16_t)((*((uint8_t *)self + 2) << 8)
                                                     + *((uint8_t *)self + 3))));
  coverage = OT::Coverage::get_coverage(v3, *(uint32_t *)(*(uint32_t *)(v2 + 100) + 20 * *(uint32_t *)(v2 + 84)));
  v21 = 0;
  if ( coverage != -1 )
  {
    v14 = v15;
    v16 = coverage;
    sub_12C7D30((int)(uintptr_t)(v23), (int)(uintptr_t)(a2), v14, 1, 0);
    v23[2] = *((uint32_t *)a2 + 9) & 0xFFFFFFF1;
    if ( (uint8_t)sub_12CBDE0(v23) != 0 )
    {
      v5 = *(uint32_t *)(v2 + 100);
      v17 = v23[0];
      v20 = v5 + 20 * v23[0];
      if ( (*(uint8_t *)(v20 + 12) & 8) != 0 )
      {
        v6 = *(uint8_t *)(v5 + 20 * *(uint32_t *)(v2 + 84) + 14);
        v7 = v6 >> 5;
        v22 = *(uint8_t *)(v20 + 14);
        v18 = v22 >> 5;
        v8 = 0;
        if ( (v6 & 0x10) == 0 )
          v8 = v6 & 0xF;
        v9 = 0;
        if ( (v22 & 0x10) == 0 )
          v9 = v22 & 0xF;
        if ( v7 == v18 )
        {
          if ( v7 == 0 || v8 == v9 )
          {
LABEL_14:
            v10 = (OT::Coverage::Self *)((OT::MarkMarkPosFormat1::Self *)((char *)self
                                           + (uint16_t)((*((uint8_t *)self + 4) << 8)
                                                              + *((uint8_t *)self + 5))));
            if ( (*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5) == 0 )
              v10 = (OT::Coverage::Self *)&unk_2116E00;
            v19 = OT::Coverage::get_coverage(v10, *(uint32_t *)v20);
            v21 = 0;
            if ( v19 != -1 )
            {
              v11 = (uint8_t *)self
                  + (uint16_t)(*((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8));
              if ( *((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8) == 0 )
                v11 = (uint8_t *)&unk_2116E00;
              v12 = (uint8_t *)self
                  + (uint16_t)((*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9));
              if ( (*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9) == 0 )
                v12 = (uint8_t *)&unk_2116E00;
              return (uint8_t)sub_12D38B0(
                                        v12,
                                        (hb_font_t **)a2 + 1,
                                        *((uint32_t **)a2 + 3),
                                        v16,
                                        v19,
                                        v11,
                                        (uint16_t)(*((uint8_t *)self + 7)
                                                         + (*((uint8_t *)self + 6) << 8)),
                                        v17);
            }
            return v21;
          }
        }
        else if ( v8 == 0 && v7 != 0 || v9 == 0 && v18 != 0 )
        {
          goto LABEL_14;
        }
        return 0;
      }
    }
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: OT::MarkLigPosFormat1::apply  (binary VA: 0x12d64c0)
// Original: OT::MarkLigPosFormat1::apply
// ----------------------------------------------------------------------------
int OT::MarkLigPosFormat1::apply(OT::MarkLigPosFormat1::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  uint16_t v3;
  OT::Coverage::Self *v4;
  int coverage;
  OT::Coverage::Self *v6;
  int v7;
  bool v8;
  char *v9;
  uint8_t *v10;
  int16_t v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  uint8_t *v16;
  uint8_t *v18;
  unsigned int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef uint8_t _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32[12];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v21)) > _g4_s1 ? (48u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v22)) > _g4_s2 ? (48u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v23)) > _g4_s3 ? (56u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v24)) > _g4_s4 ? (60u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v25)) > _g4_s5 ? (60u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v26)) > _g4_s6 ? (64u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v27)) > _g4_s7 ? (68u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v28)) > _g4_s8 ? (68u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v29)) > _g4_s9 ? (72u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v30)) > _g4_s10 ? (76u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v31)) > _g4_s11 ? (76u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v32)) > _g4_s12 ? (80u + sizeof(_g4_t_v32)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);

  v2 = *((uint32_t *)a2 + 3);
  v21 = *(uint32_t *)(v2 + 84);
  v3 = *((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8);
  v4 = (OT::Coverage::Self *)((OT::MarkLigPosFormat1::Self *)((char *)self + v3));
  if ( v3 == 0 )
    v4 = (OT::Coverage::Self *)&unk_2116E00;
  coverage = OT::Coverage::get_coverage(v4, *(uint32_t *)(*(uint32_t *)(v2 + 100) + 20 * *(uint32_t *)(v2 + 84)));
  v30 = 0;
  if ( coverage != -1 )
  {
    v20 = v21;
    v22 = coverage;
    sub_12C7D30((int)(uintptr_t)(v32), (int)(uintptr_t)(a2), v20, 1, 0);
    v32[2] = 8;
    if ( (uint8_t)sub_12CBDE0(v32) != 0 )
    {
      v23 = v32[0];
      v26 = *(uint32_t *)(v2 + 100);
      v24 = 20 * v32[0] + v26;
      v6 = (OT::Coverage::Self *)((OT::MarkLigPosFormat1::Self *)((char *)self
                                   + (uint16_t)((*((uint8_t *)self + 4) << 8)
                                                      + *((uint8_t *)self + 5))));
      if ( (*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5) == 0 )
        v6 = (OT::Coverage::Self *)&unk_2116E00;
      v27 = OT::Coverage::get_coverage(v6, *(uint32_t *)v24);
      if ( v27 != -1 )
      {
        v7 = (uint16_t)(*((uint8_t *)self + 11) + (*((uint8_t *)self + 10) << 8));
        v8 = v7 == 0;
        v9 = (char *)self + v7;
        v10 = (uint8_t *)&unk_2116E00;
        if ( !v8 )
          v10 = (uint8_t *)v9;
        if ( v27 < (uint16_t)(v10[1] + (*v10 << 8)) )
        {
          v18 = &v10[(uint16_t)((v10[2 * v27 + 2] << 8) + v10[2 * v27 + 3])];
          if ( (v10[2 * v27 + 2] << 8) + v10[2 * v27 + 3] == 0 )
            v18 = (uint8_t *)&unk_2116E00;
          v28 = v18;
        }
        else
        {
          v28 = (uint8_t *)&unk_2116E00;
        }
        v30 = 0;
        v11 = v28[1];
        v29 = (uint16_t)(v11 + (*v28 << 8));
        if ( v11 + (*v28 << 8) != 0 )
        {
          v31 = (int)*(uint8_t *)(v24 + 14) >> 5;
          v12 = *(uint8_t *)(v26 + 20 * *(uint32_t *)(v2 + 84) + 14);
          v13 = v12 & 0xF;
          v14 = 0;
          v25 = v12 & 0x10;
          if ( (v12 & 0x10) == 0 )
            v14 = v12 & 0xF;
          if ( v31 == v12 >> 5 && v31 != 0 && v14 != 0 )
          {
            v19 = 0;
            if ( v25 == 0 )
            {
              v19 = v29;
              if ( v13 <= v29 )
                v19 = v13;
            }
            v15 = v19 - 1;
          }
          else
          {
            v15 = v29 - 1;
          }
          v16 = (uint8_t *)self
              + (uint16_t)((*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9));
          if ( (*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9) == 0 )
            v16 = (uint8_t *)&unk_2116E00;
          return (uint8_t)sub_12D38B0(
                                    v16,
                                    (hb_font_t **)a2 + 1,
                                    *((uint32_t **)a2 + 3),
                                    v22,
                                    v15,
                                    v28,
                                    (uint16_t)(*((uint8_t *)self + 7)
                                                     + (*((uint8_t *)self + 6) << 8)),
                                    v23);
        }
      }
    }
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize  (binary VA: 0x12d6770)
// Original: OT::OffsetTo<OT::Coverage,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  unsigned int v5;
  uint8_t *v6;
  unsigned int v7;
  char v8;
  int16_t v9; // di
  const void *v10;
  bool v11;
  const void *v12;
  unsigned int v13;

  result = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v4 )
    return result;
  v5 = *((uint32_t *)a2 + 2);
  v13 = v5;
  if ( (unsigned int)(uintptr_t)(self) > v5 )
    return result;
  if ( v5 - (unsigned int)(uintptr_t)(self) <= 1 )
    return result;
  result = 1;
  if ( (*(uint8_t *)self << 8) + *((uint8_t *)self + 1) == 0 )
    return result;
  v6 = (uint8_t *)&a3[(uint16_t)((*(uint8_t *)self << 8) + *((uint8_t *)self + 1))];
  if ( v4 <= (unsigned int)(uintptr_t)(v6) && v5 >= (unsigned int)(uintptr_t)(v6) && v5 - (unsigned int)(uintptr_t)(v6) > 1 )
  {
    v9 = v6[1] + (*v6 << 8);
    if ( v9 == 1 )
    {
      v12 = v6 + 2;
      if ( v4 <= (unsigned int)(uintptr_t)(v6 + 2) && v13 >= (unsigned int)(uintptr_t)(v12) && v13 - (unsigned int)(uintptr_t)(v12) > 1 )
      {
        v11 = OT::hb_sanitize_context_t::check_array(a2, v12, 2u, (uint16_t)(v6[3] + (v6[2] << 8)));
LABEL_18:
        result = 1;
        if ( v11 )
          return result;
      }
    }
    else
    {
      if ( v9 != 2 )
        return result;
      v10 = v6 + 2;
      if ( v4 <= (unsigned int)(uintptr_t)(v6 + 2) && v13 >= (unsigned int)(uintptr_t)(v10) && v13 - (unsigned int)(uintptr_t)(v10) > 1 )
      {
        v11 = OT::hb_sanitize_context_t::check_array(a2, v10, 6u, (uint16_t)(v6[3] + (v6[2] << 8)));
        goto LABEL_18;
      }
    }
  }
  result = 0;
  v7 = *((uint32_t *)a2 + 4);
  v8 = *((uint8_t *)a2 + 12);
  if ( v7 <= 0x63 )
  {
    *((uint32_t *)a2 + 4) = v7 + 1;
    if ( v8 != 0 )
    {
      *(uint8_t *)self = 0;
      *((uint8_t *)self + 1) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::MultipleSubstFormat1::sanitize  (binary VA: 0x12d6900)
// Original: OT::MultipleSubstFormat1::sanitize
// ----------------------------------------------------------------------------
int OT::MultipleSubstFormat1::sanitize(OT::MultipleSubstFormat1::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  unsigned int v2;
  char *v3;
  unsigned int v4;
  char *v5;
  unsigned int v6;
  int v7;
  int16_t v8;
  uint8_t *v9;
  unsigned int v10;
  char v11;
  unsigned int v12;
  unsigned int v14;
  unsigned int v15;
  char *v16;
  unsigned int v17;

  if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                          (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::MultipleSubstFormat1::Self *)((char *)self + 2)),
                          a2,
                          (char *)self) == 0 )
    return 0;
  v2 = *((uint32_t *)a2 + 1);
  v3 = (char *)self + 4;
  v16 = (char *)self + 4;
  if ( (unsigned int)(uintptr_t)(self) + 4 < v2 )
    return 0;
  v4 = *((uint32_t *)a2 + 2);
  v15 = v4;
  if ( (unsigned int)(uintptr_t)(v3) > v4 )
    return 0;
  if ( v4 - (unsigned int)(uintptr_t)(v3) <= 1 )
    return 0;
  v14 = (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
  v17 = (uint16_t)v14;
  if ( !OT::hb_sanitize_context_t::check_array(a2, v16, 2u, v14) )
    return 0;
  if ( v17 != 0 )
  {
    v5 = (char *)self + 6;
    if ( v2 <= (unsigned int)(uintptr_t)(self) + 6 && v15 >= (unsigned int)(uintptr_t)(v5) && v15 - (unsigned int)(uintptr_t)(v5) > 1 )
    {
      v6 = v2;
      v7 = 0;
      do
      {
        v8 = (uint8_t)v5[1];
        if ( v8 + ((uint8_t)*v5 << 8) != 0 )
        {
          v9 = (uint8_t *)self + (uint16_t)(v8 + ((uint8_t)*v5 << 8));
          if ( (unsigned int)(uintptr_t)(v9) < v6
            || (unsigned int)(uintptr_t)(v9) > v15
            || v15 - (unsigned int)(uintptr_t)(v9) <= 1
            || !OT::hb_sanitize_context_t::check_array(a2, v9, 2u, (uint16_t)(v9[1] + (*v9 << 8))) )
          {
            v10 = *((uint32_t *)a2 + 4);
            v11 = *((uint8_t *)a2 + 12);
            if ( v10 > 0x63 )
              return 0;
            *((uint32_t *)a2 + 4) = v10 + 1;
            if ( v11 == 0 )
              return 0;
            *v5 = 0;
            v5[1] = 0;
          }
        }
        if ( v17 <= ++v7 )
          return 1;
        v5 = &v16[2 * v7 + 2];
        v6 = *((uint32_t *)a2 + 1);
        if ( (unsigned int)(uintptr_t)(v5) < v6 )
          break;
        v12 = *((uint32_t *)a2 + 2);
        v15 = v12;
        if ( (unsigned int)(uintptr_t)(v5) > v12 )
          break;
      }
      while ( v12 - (unsigned int)(uintptr_t)(v5) > 1 );
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::LigatureSubstFormat1::sanitize  (binary VA: 0x12d6ac0)
// Original: OT::LigatureSubstFormat1::sanitize
// ----------------------------------------------------------------------------
int OT::LigatureSubstFormat1::sanitize(OT::LigatureSubstFormat1::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  char *v2;
  unsigned int v3;
  bool v4;
  unsigned int v5;
  char *v6;
  int16_t v7;
  int v8;
  bool v9;
  unsigned int v10;
  uint8_t *v11;
  int16_t v12;
  uint8_t *v13;
  unsigned int v14;
  char v15;
  unsigned int v16;
  unsigned int v17;
  const void *v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  uint8_t *v24;
  unsigned int v25;
  uint8_t *v26;
  int v27;
  char *v28;
  unsigned int v29;

  if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                          (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::LigatureSubstFormat1::Self *)((char *)self + 2)),
                          a2,
                          (char *)self) == 0 )
    return 0;
  v2 = (char *)self + 4;
  v28 = (char *)self + 4;
  if ( (unsigned int)(uintptr_t)(self) + 4 < *((uint32_t *)a2 + 1) )
    return 0;
  v3 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(v2) > v3 )
    return 0;
  if ( v3 - (unsigned int)(uintptr_t)(v2) <= 1 )
    return 0;
  v20 = (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
  v21 = *((uint32_t *)a2 + 1);
  v29 = (uint16_t)v20;
  v4 = OT::hb_sanitize_context_t::check_array(a2, v28, 2u, v20);
  v5 = v21;
  if ( !v4 )
    return 0;
  if ( v29 != 0 )
  {
    v6 = (char *)self + 6;
    v26 = (uint8_t *)((char *)self + 6);
    if ( v21 <= (unsigned int)(uintptr_t)(self) + 6 && v3 >= (unsigned int)(uintptr_t)(v6) )
    {
      v27 = 0;
      if ( v3 - (unsigned int)(uintptr_t)(v6) > 1 )
      {
        while ( 1 )
        {
          v7 = (uint8_t)v26[1];
          v8 = (uint16_t)(v7 + ((uint8_t)*v26 << 8));
          if ( v7 + ((uint8_t)*v26 << 8) != 0 )
          {
            v24 = (uint8_t *)self + v8;
            if ( (unsigned int)(uintptr_t)(self) + v8 < v5 )
              goto LABEL_28;
            if ( v3 < (unsigned int)(uintptr_t)(v24) )
              goto LABEL_28;
            if ( v3 - (unsigned int)(uintptr_t)(v24) <= 1 )
              goto LABEL_28;
            v22 = v5;
            v25 = (uint16_t)(v24[1] + (*v24 << 8));
            v9 = OT::hb_sanitize_context_t::check_array(a2, v24, 2u, v25);
            v10 = v22;
            if ( !v9 )
              goto LABEL_28;
            if ( v25 != 0 )
              break;
          }
LABEL_32:
          if ( v29 <= ++v27 )
            return 1;
          v17 = (unsigned int)(uintptr_t)(&v28[2 * v27 + 2]);
          v5 = *((uint32_t *)a2 + 1);
          v26 = (uint8_t *)v17;
          if ( v17 >= v5 )
          {
            v3 = *((uint32_t *)a2 + 2);
            if ( v17 <= v3 && v3 - v17 > 1 )
              continue;
          }
          return 0;
        }
        v11 = v24 + 2;
        if ( v22 <= (unsigned int)(uintptr_t)(v24 + 2) && v3 >= (unsigned int)(uintptr_t)(v11) )
        {
          v23 = 0;
          while ( v3 - (unsigned int)(uintptr_t)(v11) > 1 )
          {
            v12 = v11[1];
            if ( v12 + (*v11 << 8) != 0 )
            {
              v13 = &v24[(uint16_t)(v12 + (*v11 << 8))];
              if ( v10 > (unsigned int)(uintptr_t)(v13)
                || v3 < (unsigned int)(uintptr_t)(v13)
                || v3 - (unsigned int)(uintptr_t)(v13) <= 1
                || (v19 = v13 + 2, v10 > (unsigned int)(uintptr_t)(v13 + 2))
                || v3 < (unsigned int)(uintptr_t)(v19)
                || v3 - (unsigned int)(uintptr_t)(v19) <= 1
                || !OT::hb_sanitize_context_t::check_array(a2, v19, 2u, (uint16_t)((v13[2] << 8) + v13[3])) )
              {
                v14 = *((uint32_t *)a2 + 4);
                v15 = *((uint8_t *)a2 + 12);
                if ( v14 > 0x63 )
                  return 0;
                v16 = v14 + 1;
                *((uint32_t *)a2 + 4) = v16;
                if ( v15 == 0 )
                  goto LABEL_29;
                *v11 = 0;
                v11[1] = 0;
              }
            }
            if ( v25 <= ++v23 )
              goto LABEL_32;
            v11 = &v24[2 * v23 + 2];
            v10 = *((uint32_t *)a2 + 1);
            if ( (unsigned int)(uintptr_t)(v11) < v10 )
              break;
            v3 = *((uint32_t *)a2 + 2);
            if ( (unsigned int)(uintptr_t)(v11) > v3 )
              break;
          }
        }
LABEL_28:
        v15 = *((uint8_t *)a2 + 12);
        v16 = *((uint32_t *)a2 + 4);
LABEL_29:
        if ( v16 > 0x63 )
          return 0;
        *((uint32_t *)a2 + 4) = v16 + 1;
        if ( v15 == 0 )
          return 0;
        *v26 = 0;
        v26[1] = 0;
        goto LABEL_32;
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_ArrayOf_O_32c2dc::sanitize  (binary VA: 0x12d6dd0)
// Original: OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short,2u>,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_ArrayOf_O_32c2dc::sanitize(OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  unsigned int v3;
  unsigned int v4;
  uint8_t *v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int16_t v9;
  uint8_t *v10;
  unsigned int v11;
  char v12;
  unsigned int v13;
  unsigned int v15;
  unsigned int v16;

  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v3 )
    return 0;
  v4 = *((uint32_t *)a2 + 2);
  v15 = v4;
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return 0;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return 0;
  v16 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
  if ( !OT::hb_sanitize_context_t::check_array(a2, self, 2u, v16) )
    return 0;
  if ( v16 != 0 )
  {
    v5 = (uint8_t *)((char *)self + 2);
    if ( v3 <= (unsigned int)(uintptr_t)(self) + 2 && v15 >= (unsigned int)(uintptr_t)(v5) && v15 - (unsigned int)(uintptr_t)(v5) > 1 )
    {
      v6 = v3;
      v7 = 0;
      v8 = v6;
      while ( 1 )
      {
        v9 = (uint8_t)v5[1];
        if ( v9 + ((uint8_t)*v5 << 8) != 0 )
        {
          v10 = (uint8_t *)&a3[(uint16_t)(v9 + ((uint8_t)*v5 << 8))];
          if ( (unsigned int)(uintptr_t)(v10) >= v8
            && v15 >= (unsigned int)(uintptr_t)(v10)
            && v15 - (unsigned int)(uintptr_t)(v10) > 1
            && OT::hb_sanitize_context_t::check_array(a2, v10, 2u, (uint16_t)(v10[1] + (*v10 << 8))) )
          {
            if ( ++v7 >= v16 )
              return 1;
            goto LABEL_16;
          }
          v11 = *((uint32_t *)a2 + 4);
          v12 = *((uint8_t *)a2 + 12);
          if ( v11 > 0x63 )
            return 0;
          *((uint32_t *)a2 + 4) = v11 + 1;
          if ( v12 == 0 )
            return 0;
          *v5 = 0;
          v5[1] = 0;
        }
        if ( ++v7 >= v16 )
          return 1;
LABEL_16:
        v5 = (uint8_t *)((char *)self + 2 * v7 + 2);
        v8 = *((uint32_t *)a2 + 1);
        if ( (unsigned int)(uintptr_t)(v5) >= v8 )
        {
          v13 = *((uint32_t *)a2 + 2);
          v15 = v13;
          if ( (unsigned int)(uintptr_t)(v5) <= v13 && v13 - (unsigned int)(uintptr_t)(v5) > 1 )
            continue;
        }
        return 0;
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize  (binary VA: 0x12d6f70)
// Original: OT::OffsetTo<OT::Device,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  unsigned int v5;
  uint8_t *v6;
  uint16_t v7; // di
  uint16_t v8; // bp
  unsigned int v9;
  char v10; // di
  unsigned int v11;

  result = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v4 )
  {
    v5 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v5 && v5 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      result = 1;
      if ( (*(uint8_t *)self << 8) + *((uint8_t *)self + 1) != 0 )
      {
        v6 = (uint8_t *)&a3[(uint16_t)((*(uint8_t *)self << 8) + *((uint8_t *)self + 1))];
        if ( v4 <= (unsigned int)(uintptr_t)(v6) && v5 >= (unsigned int)(uintptr_t)(v6) )
        {
          v11 = v5 - (uint32_t)(uintptr_t)(v6);
          if ( v5 - (unsigned int)(uintptr_t)(v6) > 5 )
          {
            if ( (unsigned int)(uint16_t)(v6[5] + (v6[4] << 8)) - 1 > 2 )
              return result;
            v7 = v6[1] + (*v6 << 8);
            v8 = v6[3] + (v6[2] << 8);
            if ( v7 > v8 )
              return result;
            if ( v11 >= 2 * ((v8 - v7) >> (4 - v6[5])) + 8 )
              return 1;
          }
        }
        v9 = *((uint32_t *)a2 + 4);
        result = 0;
        v10 = *((uint8_t *)a2 + 12);
        if ( v9 <= 0x63 )
        {
          *((uint32_t *)a2 + 4) = v9 + 1;
          if ( v10 != 0 )
          {
            *(uint8_t *)self = 0;
            *((uint8_t *)self + 1) = 0;
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ValueFormat::sanitize_value_devices  (binary VA: 0x12d7080)
// Original: OT::ValueFormat::sanitize_value_devices
// ----------------------------------------------------------------------------
int OT::ValueFormat::sanitize_value_devices(int a1, OT::hb_sanitize_context_t::Self *a2, char *a3, int a4)
{
  OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *v4;
  char v5; // di
  int result;
  char v7;
  char v8;
  char v9;

  v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)a4;
  v5 = *(uint8_t *)(a1 + 1);
  if ( (v5 & 1) != 0 )
    v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(a4 + 2);
  if ( (*(uint8_t *)(a1 + 1) & 2) != 0 )
    v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v4 + 2);
  if ( (*(uint8_t *)(a1 + 1) & 4) != 0 )
    v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v4 + 2);
  if ( (*(uint8_t *)(a1 + 1) & 8) != 0 )
    v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v4 + 2);
  if ( (*(uint8_t *)(a1 + 1) & 0x10) != 0 )
  {
    v7 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v4, a2, a3);
    v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v4 + 2);
    result = 0;
    if ( v7 == 0 )
      return result;
    if ( (v5 & 0x20) == 0 )
      goto LABEL_11;
LABEL_17:
    v8 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v4, a2, a3);
    v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v4 + 2);
    result = 0;
    if ( v8 == 0 )
      return result;
    goto LABEL_11;
  }
  if ( (*(uint8_t *)(a1 + 1) & 0x20) != 0 )
    goto LABEL_17;
LABEL_11:
  if ( (v5 & 0x40) == 0
    || (v9 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v4, a2, a3),
        v4 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v4 + 2),
        result = 0,
        v9 != 0) )
  {
    if ( v5 < 0 )
      return OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v4, a2, a3);
    else
      return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ValueFormat::sanitize_values_stride_unsafe  (binary VA: 0x12d71c0)
// Original: OT::ValueFormat::sanitize_values_stride_unsafe
// ----------------------------------------------------------------------------
int OT::ValueFormat::sanitize_values_stride_unsafe(int a1, OT::hb_sanitize_context_t::Self *a2, char *a3, int a4, int a5, int a6)
{
  char v7;
  int result;
  OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *v9;
  char v10; // di
  int v11;

  v7 = *(uint8_t *)(a1 + 1);
  result = 1;
  if ( (v7 & 0xF0) != 0 && a5 != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)a4;
      v10 = v7;
      if ( (v7 & 1) != 0 )
        v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(a4 + 2);
      if ( (v7 & 2) != 0 )
        v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v9 + 2);
      if ( (v7 & 4) != 0 )
        v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v9 + 2);
      if ( (v7 & 8) != 0 )
        v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v9 + 2);
      if ( (v7 & 0x10) != 0 )
      {
        if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v9, a2, a3) == 0 )
          return 0;
        v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v9 + 2);
        if ( (v10 & 0x20) == 0 )
        {
LABEL_14:
          if ( (v10 & 0x40) == 0 )
            goto LABEL_15;
          goto LABEL_22;
        }
      }
      else if ( (v7 & 0x20) == 0 )
      {
        goto LABEL_14;
      }
      if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v9, a2, a3) == 0 )
        return 0;
      v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v9 + 2);
      if ( (v10 & 0x40) == 0 )
      {
LABEL_15:
        if ( (v10 & 0x80) == 0 )
          goto LABEL_16;
LABEL_26:
        result = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v9, a2, a3);
        if ( (uint8_t)result == 0 )
          return result;
        goto LABEL_16;
      }
LABEL_22:
      if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v9, a2, a3) == 0 )
        return 0;
      v9 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v9 + 2);
      if ( v10 < 0 )
        goto LABEL_26;
LABEL_16:
      if ( ++v11 == a5 )
        return 1;
      a4 += 2 * a6;
      v7 = *(uint8_t *)(a1 + 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SinglePos::sanitize  (binary VA: 0x12d7360)
// Original: OT::SinglePos::sanitize
// ----------------------------------------------------------------------------
int OT::SinglePos::sanitize(OT::SinglePos::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  unsigned int v2;
  int v3;
  unsigned int v4;
  int16_t v5;
  int v7;
  OT::hb_sanitize_context_t::Self *v8;
  uint8_t i;
  OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *v10;
  uint8_t v11; // si
  char v12;
  char v13;
  char v14;
  char v15;
  char *v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  OT::SinglePos::Self *v23;
  char *v24;
  unsigned int v25;
  uint8_t v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;

  v2 = *((uint32_t *)a2 + 1);
  v3 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= v2 )
  {
    v4 = *((uint32_t *)a2 + 2);
    v23 = (OT::SinglePos::Self *)v4;
    if ( (unsigned int)(uintptr_t)(self) <= v4 )
    {
      v25 = v4 - (uint32_t)(uintptr_t)(self);
      if ( v4 - (unsigned int)(uintptr_t)(self) > 1 )
      {
        v5 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
        if ( v5 == 1 )
        {
          if ( (unsigned int)(uintptr_t)(self) >= v2
            && self <= v23
            && v25 > 5
            && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                  (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::SinglePos::Self *)((char *)self + 2)),
                                  a2,
                                  (char *)self) != 0 )
          {
            v16 = (char *)self + 6;
            v22 = (uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5));
            v7 = _popcountsi2(v22);
            if ( (unsigned int)(uintptr_t)(self) + 6 >= *((uint32_t *)a2 + 1) && (unsigned int)(uintptr_t)(v16) <= *((uint32_t *)a2 + 2) )
            {
              v3 = 0;
              if ( 2 * v7 <= (unsigned int)(*((uint32_t *)a2 + 2) - (uint32_t)(uintptr_t)(v16)) )
              {
                v3 = 1;
                if ( (v22 & 0xF0) != 0 )
                  return OT::ValueFormat::sanitize_value_devices((int)(uintptr_t)(self) + 4, a2, (char *)self, (int)(uintptr_t)(v16));
              }
            }
          }
        }
        else if ( v5 == 2 )
        {
          if ( (unsigned int)(uintptr_t)(self) >= v2
            && self <= v23
            && v25 > 7
            && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                  (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::SinglePos::Self *)((char *)self + 2)),
                                  a2,
                                  (char *)self) != 0 )
          {
            v24 = (char *)self + 8;
            v26 = *((uint8_t *)self + 5);
            v17 = (uint16_t)((*((uint8_t *)self + 6) << 8) + *((uint8_t *)self + 7));
            v27 = (uint16_t)((*((uint8_t *)self + 4) << 8) + v26);
            v30 = 2 * _popcountsi2(v27);
            if ( OT::hb_sanitize_context_t::check_array(a2, (char *)self + 8, v30, v17) )
            {
              v3 = 1;
              if ( (v27 & 0xF0) != 0 && v17 != 0 )
              {
                v28 = 0;
                v29 = v17 - 1;
                v8 = a2;
                for ( i = v26; ; i = *((uint8_t *)self + 5) )
                {
                  v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)v24;
                  v11 = i;
                  if ( (i & 1) != 0 )
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(v24 + 2);
                  if ( (i & 2) != 0 )
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v10 + 2);
                  if ( (i & 4) != 0 )
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v10 + 2);
                  if ( (i & 8) != 0 )
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v10 + 2);
                  if ( (i & 0x10) != 0 )
                  {
                    v18 = (unsigned int)(uintptr_t)(v8);
                    v12 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v10, v8, (char *)self);
                    v8 = (OT::hb_sanitize_context_t::Self *)v18;
                    if ( v12 == 0 )
                      return 0;
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v10 + 2);
                  }
                  if ( (v11 & 0x20) != 0 )
                  {
                    v20 = (unsigned int)(uintptr_t)(v8);
                    v14 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v10, v8, (char *)self);
                    v8 = (OT::hb_sanitize_context_t::Self *)v20;
                    if ( v14 == 0 )
                      return 0;
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v10 + 2);
                  }
                  if ( (v11 & 0x40) != 0 )
                  {
                    v21 = (unsigned int)(uintptr_t)(v8);
                    v15 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v10, v8, (char *)self);
                    v8 = (OT::hb_sanitize_context_t::Self *)v21;
                    if ( v15 == 0 )
                      return 0;
                    v10 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v10 + 2);
                  }
                  if ( (v11 & 0x80) != 0 )
                  {
                    v19 = (unsigned int)(uintptr_t)(v8);
                    v13 = OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v10, v8, (char *)self);
                    v8 = (OT::hb_sanitize_context_t::Self *)v19;
                    if ( v13 == 0 )
                      break;
                  }
                  if ( v28 == v29 )
                    return 1;
                  ++v28;
                  v24 += v30;
                }
                return 0;
              }
            }
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_LigGlyph_f1a027::sanitize  (binary VA: 0x12d76c0)
// Original: OT::ArrayOf<OT::OffsetTo<OT::LigGlyph,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_LigGlyph_f1a027::sanitize(OT::ArrayOf<OT::OffsetTo<OT::LigGlyph::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  unsigned int v3;
  unsigned int v4;
  char *v5;
  int16_t v6;
  int v7;
  uint8_t *v8;
  unsigned int v9;
  int v10;
  int16_t v11;
  char *v12;
  unsigned int v13;
  char v14;
  unsigned int v15;
  unsigned int v16;
  char *v17;
  unsigned int v18;
  int16_t v20;
  unsigned int v21;
  unsigned int v22;
  uint8_t *v23;
  unsigned int v24;
  uint8_t *v25;
  int v26;
  unsigned int v27;

  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v3 )
    return 0;
  v4 = *((uint32_t *)a2 + 2);
  v21 = v4;
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return 0;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return 0;
  v27 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
  if ( !OT::hb_sanitize_context_t::check_array(a2, self, 2u, v27) )
    return 0;
  if ( v27 != 0 )
  {
    v5 = (char *)self + 2;
    v25 = (uint8_t *)((char *)self + 2);
    if ( v3 <= (unsigned int)(uintptr_t)(self) + 2 && v21 >= (unsigned int)(uintptr_t)(v5) )
    {
      v26 = 0;
      if ( v21 - (unsigned int)(uintptr_t)(v5) > 1 )
      {
        while ( 1 )
        {
          v6 = (uint8_t)v25[1];
          v7 = (uint16_t)(v6 + ((uint8_t)*v25 << 8));
          if ( v6 + ((uint8_t)*v25 << 8) != 0 )
          {
            v23 = (uint8_t *)&a3[v7];
            if ( (unsigned int)(uintptr_t)(&a3[v7]) < v3 )
              goto LABEL_28;
            if ( (unsigned int)(uintptr_t)(v23) > v21 )
              goto LABEL_28;
            if ( v21 - (unsigned int)(uintptr_t)(v23) <= 1 )
              goto LABEL_28;
            v24 = (uint16_t)(v23[1] + (*v23 << 8));
            if ( !OT::hb_sanitize_context_t::check_array(a2, v23, 2u, v24) )
              goto LABEL_28;
            if ( v24 != 0 )
              break;
          }
LABEL_32:
          if ( ++v26 >= v27 )
            return 1;
          v3 = *((uint32_t *)a2 + 1);
          v17 = (char *)self + 2 * v26 + 2;
          v25 = (uint8_t *)(v17);
          if ( (unsigned int)(uintptr_t)(v17) >= v3 )
          {
            v18 = *((uint32_t *)a2 + 2);
            v21 = v18;
            if ( (unsigned int)(uintptr_t)(v17) <= v18 && v18 - (unsigned int)(uintptr_t)(v17) > 1 )
              continue;
          }
          return 0;
        }
        v8 = v23 + 2;
        if ( v3 <= (unsigned int)(uintptr_t)(v23 + 2) && v21 >= (unsigned int)(uintptr_t)(v8) && v21 - (unsigned int)(uintptr_t)(v8) > 1 )
        {
          v9 = v3;
          v10 = 0;
          while ( 1 )
          {
            v11 = v8[1];
            if ( v11 + (*v8 << 8) == 0 )
              goto LABEL_24;
            v12 = (char *)&v23[(uint16_t)(v11 + (*v8 << 8))];
            if ( v9 > (unsigned int)(uintptr_t)(v12) || v21 < (unsigned int)(uintptr_t)(v12) || (v22 = v21 - (uint32_t)(uintptr_t)(v12)) <= 1 )
            {
LABEL_21:
              v13 = *((uint32_t *)a2 + 4);
              v14 = *((uint8_t *)a2 + 12);
              if ( v13 > 0x63 )
                return 0;
              v15 = v13 + 1;
              *((uint32_t *)a2 + 4) = v15;
              if ( v14 == 0 )
                goto LABEL_29;
              *v8 = 0;
              v8[1] = 0;
              goto LABEL_24;
            }
            v20 = (uint8_t)v12[1] + ((uint8_t)*v12 << 8);
            if ( v20 == 2 )
              goto LABEL_43;
            if ( v20 != 3 )
              break;
            if ( v22 <= 5
              || (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(
                                    (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(v12 + 4),
                                    a2,
                                    v12) == 0 )
            {
              goto LABEL_21;
            }
LABEL_24:
            if ( v24 <= ++v10 )
              goto LABEL_32;
            v8 = &v23[2 * v10 + 2];
            v9 = *((uint32_t *)a2 + 1);
            if ( (unsigned int)(uintptr_t)(v8) >= v9 )
            {
              v16 = *((uint32_t *)a2 + 2);
              v21 = v16;
              if ( (unsigned int)(uintptr_t)(v8) <= v16 && v16 - (unsigned int)(uintptr_t)(v8) > 1 )
                continue;
            }
            goto LABEL_28;
          }
          if ( v20 != 1 )
            goto LABEL_24;
LABEL_43:
          if ( v22 <= 3 )
            goto LABEL_21;
          goto LABEL_24;
        }
LABEL_28:
        v14 = *((uint8_t *)a2 + 12);
        v15 = *((uint32_t *)a2 + 4);
LABEL_29:
        if ( v15 > 0x63 )
          return 0;
        *((uint32_t *)a2 + 4) = v15 + 1;
        if ( v14 == 0 )
          return 0;
        *v25 = 0;
        v25[1] = 0;
        goto LABEL_32;
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize  (binary VA: 0x12d79c0)
// Original: OT::OffsetTo<OT::ClassDef,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  unsigned int v5;
  uint8_t *v6;
  unsigned int v7;
  char v8;
  int16_t v9; // di
  const void *v10;
  bool v11;
  const void *v12;
  unsigned int v13;

  result = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v4 )
    return result;
  v5 = *((uint32_t *)a2 + 2);
  v13 = v5;
  if ( (unsigned int)(uintptr_t)(self) > v5 )
    return result;
  if ( v5 - (unsigned int)(uintptr_t)(self) <= 1 )
    return result;
  result = 1;
  if ( (*(uint8_t *)self << 8) + *((uint8_t *)self + 1) == 0 )
    return result;
  v6 = (uint8_t *)&a3[(uint16_t)((*(uint8_t *)self << 8) + *((uint8_t *)self + 1))];
  if ( v4 <= (unsigned int)(uintptr_t)(v6) && v5 >= (unsigned int)(uintptr_t)(v6) && v5 - (unsigned int)(uintptr_t)(v6) > 1 )
  {
    v9 = v6[1] + (*v6 << 8);
    if ( v9 == 1 )
    {
      if ( v13 - (unsigned int)(uintptr_t)(v6) > 5 )
      {
        v12 = v6 + 4;
        if ( v4 <= (unsigned int)(uintptr_t)(v6 + 4) && v13 >= (unsigned int)(uintptr_t)(v12) && v13 - (unsigned int)(uintptr_t)(v12) > 1 )
        {
          v11 = OT::hb_sanitize_context_t::check_array(a2, v12, 2u, (uint16_t)(v6[5] + (v6[4] << 8)));
LABEL_18:
          result = 1;
          if ( v11 )
            return result;
        }
      }
    }
    else
    {
      if ( v9 != 2 )
        return result;
      v10 = v6 + 2;
      if ( v4 <= (unsigned int)(uintptr_t)(v6 + 2) && v13 >= (unsigned int)(uintptr_t)(v10) && v13 - (unsigned int)(uintptr_t)(v10) > 1 )
      {
        v11 = OT::hb_sanitize_context_t::check_array(a2, v10, 6u, (uint16_t)(v6[3] + (v6[2] << 8)));
        goto LABEL_18;
      }
    }
  }
  result = 0;
  v7 = *((uint32_t *)a2 + 4);
  v8 = *((uint8_t *)a2 + 12);
  if ( v7 <= 0x63 )
  {
    *((uint32_t *)a2 + 4) = v7 + 1;
    if ( v8 != 0 )
    {
      *(uint8_t *)self = 0;
      *((uint8_t *)self + 1) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::PairPos::sanitize  (binary VA: 0x12d7b60)
// Original: OT::PairPos::sanitize
// ----------------------------------------------------------------------------
int OT::PairPos::sanitize(OT::PairPos::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  int v2;
  unsigned int v3;
  unsigned int v4;
  int16_t v5;
  unsigned int v7;
  char *v8;
  bool v9;
  OT::hb_sanitize_context_t::Self *v10;
  char *v11;
  char *v12;
  unsigned int v13;
  char *v14;
  int16_t v15;
  char *v16;
  bool v17;
  unsigned int v18;
  char v19;
  int v20;
  char v21;
  uint8_t *v22;
  OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *v23;
  char v24; // di
  char v25; // si
  int v26;
  int v27;
  char v28; // di
  OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *v29;
  unsigned int v30;
  unsigned int v31;
  OT::hb_sanitize_context_t::Self *v32;
  OT::PairPos::Self *v33;
  char *v34;
  int v35;
  OT::hb_sanitize_context_t::Self *v36;
  OT::hb_sanitize_context_t::Self *v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  char *v44;
  int v45;
  char *v46;
  char *v47;
  int v48;
  int v49;
  unsigned int v50;
  uint8_t *v51;
  int v52;

  v2 = 0;
  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v3 )
    return v2;
  v4 = *((uint32_t *)a2 + 2);
  v33 = (OT::PairPos::Self *)v4;
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return v2;
  v38 = v4 - (uint32_t)(uintptr_t)(self);
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return v2;
  v5 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      if ( (unsigned int)(uintptr_t)(self) >= v3
        && (unsigned int)(uintptr_t)(self) <= v4
        && v38 > 0xF
        && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                              (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::PairPos::Self *)((char *)self + 2)),
                              a2,
                              (char *)self) != 0
        && (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                              (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::PairPos::Self *)((char *)self + 8)),
                              a2,
                              (char *)self) != 0 )
      {
        v2 = 0;
        if ( (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                                (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::PairPos::Self *)((char *)self + 10)),
                                a2,
                                (char *)self) != 0 )
        {
          v40 = _popcountsi2((uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8)));
          v35 = v40
              + _popcountsi2((uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8)));
          v20 = (uint16_t)(*((uint8_t *)self + 13) + (*((uint8_t *)self + 12) << 8))
              * (uint16_t)(*((uint8_t *)self + 15) + (*((uint8_t *)self + 14) << 8));
          if ( OT::hb_sanitize_context_t::check_array(a2, (char *)self + 16, 2 * v35, v20)
            && (uint8_t)OT::ValueFormat::sanitize_values_stride_unsafe(
                                  (int)(uintptr_t)(self) + 4,
                                  a2,
                                  (char *)self,
                                  (int)(uintptr_t)(self) + 16,
                                  v20,
                                  v35) != 0 )
          {
            return OT::ValueFormat::sanitize_values_stride_unsafe(
                     (int)(uintptr_t)(self) + 6,
                     a2,
                     (char *)self,
                     (int)(uintptr_t)(self) + 2 * v40 + 16,
                     v20,
                     v35);
          }
        }
      }
      return v2;
    }
    return 1;
  }
  v36 = (OT::hb_sanitize_context_t::Self *)_popcountsi2((uint16_t)(*((uint8_t *)self + 5)
                                                                   + (*((uint8_t *)self + 4) << 8)));
  v41 = (int)(uintptr_t)(v36)
      + _popcountsi2((uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8)))
      + 1;
  if ( (unsigned int)(uintptr_t)(self) < v3 )
    return v2;
  if ( self > v33 )
    return v2;
  if ( v38 <= 9 )
    return v2;
  if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                          (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::PairPos::Self *)((char *)self + 2)),
                          a2,
                          (char *)self) == 0 )
    return v2;
  v44 = (char *)self + 8;
  v7 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) + 8 < v7 )
    return v2;
  v8 = *((char **)a2 + 2);
  v34 = v8;
  if ( v44 > v8 )
    return v2;
  v2 = 0;
  if ( (unsigned int)(v8 - v44) <= 1 )
    return v2;
  v30 = (uint16_t)(*((uint8_t *)self + 9) + (*((uint8_t *)self + 8) << 8));
  v50 = (uint16_t)v30;
  v9 = OT::hb_sanitize_context_t::check_array(a2, v44, 2u, v30);
  v10 = a2;
  if ( !v9 )
    return v2;
  if ( v50 == 0 )
    return 1;
  v11 = (char *)self + 10;
  if ( v7 > (unsigned int)(uintptr_t)(self) + 10 || v34 < v11 || (unsigned int)(v34 - v11) <= 1 )
    return v2;
  v49 = 2 * v41;
  v12 = v34;
  v39 = 0;
  v52 = 2 * (uint32_t)(uintptr_t)(v36);
  v13 = v7;
  v14 = (char *)self + 10;
  while ( 1 )
  {
    v15 = (uint8_t)*v14 << 8;
    if ( v15 + (uint8_t)v14[1] == 0 )
      goto LABEL_29;
    v16 = (char *)self + (uint16_t)(v15 + (uint8_t)v14[1]);
    if ( (unsigned int)(uintptr_t)(v16) < v13 )
      goto LABEL_26;
    if ( v16 > v12 )
      goto LABEL_26;
    if ( (unsigned int)(v12 - v16) <= 1 )
      goto LABEL_26;
    v31 = (uint16_t)((uint8_t)v16[1] + ((uint8_t)*v16 << 8));
    v32 = v10;
    v45 = (uint16_t)v31;
    v51 = (uint8_t *)(v16 + 2);
    v17 = OT::hb_sanitize_context_t::check_array(v10, v16 + 2, v49, v31);
    v10 = v32;
    if ( !v17 )
      goto LABEL_26;
    v21 = *((uint8_t *)self + 5);
    if ( (v21 & 0xF0) != 0 && v45 != 0 )
      break;
LABEL_69:
    v25 = *((uint8_t *)self + 7);
    if ( (v25 & 0xF0) != 0 && v45 != 0 )
    {
      v43 = 0;
      v37 = v10;
      v26 = v45 - 1;
      v46 = v14;
      v48 = v26;
      v27 = (int)(uintptr_t)(&v51[v52 + 2]);
      while ( 1 )
      {
        v28 = v25;
        v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)v27;
        if ( (v28 & 1) != 0 )
          v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(v27 + 2);
        if ( (v28 & 2) != 0 )
          v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v29 + 2);
        if ( (v28 & 4) != 0 )
          v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v29 + 2);
        if ( (v28 & 8) != 0 )
          v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v29 + 2);
        if ( (v28 & 0x10) != 0 )
        {
          if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(
                                  v29,
                                  v37,
                                  (char *)self) == 0 )
            goto LABEL_93;
          v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v29 + 2);
          if ( (v28 & 0x20) == 0 )
          {
LABEL_82:
            if ( (v28 & 0x40) != 0 )
              goto LABEL_90;
            goto LABEL_83;
          }
        }
        else if ( (v28 & 0x20) == 0 )
        {
          goto LABEL_82;
        }
        if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v29, v37, (char *)self) == 0 )
          goto LABEL_93;
        v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v29 + 2);
        if ( (v28 & 0x40) != 0 )
        {
LABEL_90:
          if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(
                                  v29,
                                  v37,
                                  (char *)self) == 0 )
            goto LABEL_93;
          v29 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v29 + 2);
        }
LABEL_83:
        if ( v28 < 0
          && (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v29, v37, (char *)self) == 0 )
        {
LABEL_93:
          v14 = v46;
          v10 = v37;
          goto LABEL_26;
        }
        if ( v43 == v48 )
        {
          v10 = v37;
          break;
        }
        v27 += v49;
        ++v43;
        v25 = *((uint8_t *)self + 7);
      }
    }
LABEL_29:
    if ( v50 <= ++v39 )
      return 1;
    v14 = &v44[2 * v39 + 2];
    v13 = *((uint32_t *)v10 + 1);
    if ( (unsigned int)(uintptr_t)(v14) >= v13 )
    {
      v12 = *((char **)v10 + 2);
      if ( v14 <= v12 && (unsigned int)(v12 - v14) > 1 )
        continue;
    }
    return 0;
  }
  v47 = v14;
  v42 = 0;
  v22 = (uint8_t *)(v16 + 4);
  while ( 1 )
  {
    v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)v22;
    v24 = v21;
    if ( (v21 & 1) != 0 )
      v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(v22 + 2);
    if ( (v21 & 2) != 0 )
      v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v23 + 2);
    if ( (v21 & 4) != 0 )
      v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v23 + 2);
    if ( (v21 & 8) != 0 )
      v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v23 + 2);
    if ( (v21 & 0x10) != 0 )
      break;
    if ( (v21 & 0x20) != 0 )
      goto LABEL_62;
LABEL_56:
    if ( (v24 & 0x40) == 0 )
      goto LABEL_57;
LABEL_64:
    if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v23, v32, (char *)self) == 0 )
      goto LABEL_67;
    v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v23 + 2);
    if ( v24 < 0 )
      goto LABEL_66;
LABEL_58:
    if ( v42 == v45 - 1 )
    {
      v14 = v47;
      v10 = v32;
      goto LABEL_69;
    }
    v22 += v49;
    ++v42;
    v21 = *((uint8_t *)self + 5);
  }
  if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v23, v32, (char *)self) != 0 )
  {
    v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v23 + 2);
    if ( (v24 & 0x20) == 0 )
      goto LABEL_56;
LABEL_62:
    if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v23, v32, (char *)self) != 0 )
    {
      v23 = (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)((char *)v23 + 2);
      if ( (v24 & 0x40) != 0 )
        goto LABEL_64;
LABEL_57:
      if ( (v24 & 0x80) == 0 )
        goto LABEL_58;
LABEL_66:
      if ( (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(v23, v32, (char *)self) != 0 )
        goto LABEL_58;
    }
  }
LABEL_67:
  v14 = v47;
  v10 = v32;
LABEL_26:
  v18 = *((uint32_t *)v10 + 4);
  v19 = *((uint8_t *)v10 + 12);
  if ( v18 <= 0x63 )
  {
    *((uint32_t *)v10 + 4) = v18 + 1;
    if ( v19 != 0 )
    {
      *v14 = 0;
      v14[1] = 0;
      goto LABEL_29;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::GDEF::sanitize  (binary VA: 0x12d82a0)
// Original: OT::GDEF::sanitize
// ----------------------------------------------------------------------------
int OT::GDEF::sanitize(OT::GDEF::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  int v2;
  unsigned int v3;
  char *v5;
  unsigned int v6;
  unsigned int v7;
  int16_t v8;
  char *v9;
  unsigned int v10;
  char v11;
  char *v12;
  unsigned int v13;
  int16_t v14;
  unsigned int v15;
  unsigned int v16;
  uint8_t *v17;
  unsigned int v18;
  char v19;
  char *v20;
  unsigned int v21;
  char v22;

  v2 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= *((uint32_t *)a2 + 1) )
  {
    v3 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v3
      && v3 - (unsigned int)(uintptr_t)(self) > 3
      && *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) == 1
      && (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                            (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::GDEF::Self *)((char *)self + 4)),
                            a2,
                            (char *)self) != 0 )
    {
      v5 = (char *)self + 6;
      v6 = *((uint32_t *)a2 + 1);
      if ( (unsigned int)(uintptr_t)(self) + 6 >= v6 )
      {
        v7 = *((uint32_t *)a2 + 2);
        if ( (unsigned int)(uintptr_t)(v5) <= v7 && v7 - (unsigned int)(uintptr_t)(v5) > 1 )
        {
          v8 = *((uint8_t *)self + 6) << 8;
          if ( v8 + *((uint8_t *)self + 7) != 0 )
          {
            v9 = (char *)self + (uint16_t)(v8 + *((uint8_t *)self + 7));
            if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                    (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>> *)v9,
                                    a2,
                                    v9) == 0
              || (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_ArrayOf_O_32c2dc::sanitize(
                                    (OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)(v9 + 2),
                                    a2,
                                    v9) == 0 )
            {
              v10 = *((uint32_t *)a2 + 4);
              v2 = 0;
              v11 = *((uint8_t *)a2 + 12);
              if ( v10 > 0x63 )
                return v2;
              *((uint32_t *)a2 + 4) = v10 + 1;
              if ( v11 == 0 )
                return v2;
              *((uint8_t *)self + 6) = 0;
              *((uint8_t *)self + 7) = 0;
            }
            v6 = *((uint32_t *)a2 + 1);
          }
          v12 = (char *)self + 8;
          v2 = 0;
          if ( (unsigned int)(uintptr_t)(self) + 8 >= v6 )
          {
            v13 = *((uint32_t *)a2 + 2);
            if ( (unsigned int)(uintptr_t)(v12) <= v13 && v13 - (unsigned int)(uintptr_t)(v12) > 1 )
            {
              v14 = *((uint8_t *)self + 8) << 8;
              if ( v14 + *((uint8_t *)self + 9) != 0 )
              {
                v20 = (char *)self + (uint16_t)(v14 + *((uint8_t *)self + 9));
                if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                        (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>> *)v20,
                                        a2,
                                        v20) == 0
                  || (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_LigGlyph_f1a027::sanitize(
                                        (OT::ArrayOf<OT::OffsetTo<OT::LigGlyph::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)(v20 + 2),
                                        a2,
                                        v20) == 0 )
                {
                  v21 = *((uint32_t *)a2 + 4);
                  v2 = 0;
                  v22 = *((uint8_t *)a2 + 12);
                  if ( v21 > 0x63 )
                    return v2;
                  *((uint32_t *)a2 + 4) = v21 + 1;
                  if ( v22 == 0 )
                    return v2;
                  *((uint8_t *)self + 8) = 0;
                  *((uint8_t *)self + 9) = 0;
                }
              }
              v2 = 0;
              if ( (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                                      (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::GDEF::Self *)((char *)self + 10)),
                                      a2,
                                      (char *)self) != 0 )
              {
                v2 = 1;
                if ( ((*((uint8_t *)self + 1) + (*(uint8_t *)self << 8)) << 16)
                   + (unsigned int)(uint16_t)(*((uint8_t *)self + 3)
                                                    + (*((uint8_t *)self + 2) << 8)) > 0x10001 )
                {
                  v15 = *((uint32_t *)a2 + 1);
                  v2 = 0;
                  if ( (unsigned int)(uintptr_t)(self) + 12 >= v15 )
                  {
                    v16 = *((uint32_t *)a2 + 2);
                    if ( (unsigned int)(uintptr_t)(self) + 12 <= v16 && v16 - ((unsigned int)(uintptr_t)(self) + 12) > 1 )
                    {
                      v2 = 1;
                      if ( *((uint8_t *)self + 13) + (*((uint8_t *)self + 12) << 8) != 0 )
                      {
                        v17 = (uint8_t *)self
                            + (uint16_t)(*((uint8_t *)self + 13) + (*((uint8_t *)self + 12) << 8));
                        if ( v15 > (unsigned int)(uintptr_t)(v17)
                          || v16 < (unsigned int)(uintptr_t)(v17)
                          || v16 - (unsigned int)(uintptr_t)(v17) <= 1
                          || v17[1] + (*v17 << 8) == 1
                          && (uint8_t)OT::MarkGlyphSetsFormat1::sanitize((OT::MarkGlyphSetsFormat1::Self *)v17, a2) == 0 )
                        {
                          v18 = *((uint32_t *)a2 + 4);
                          v2 = 0;
                          v19 = *((uint8_t *)a2 + 12);
                          if ( v18 <= 0x63 )
                          {
                            *((uint32_t *)a2 + 4) = v18 + 1;
                            if ( v19 != 0 )
                            {
                              *((uint8_t *)self + 12) = 0;
                              *((uint8_t *)self + 13) = 0;
                              return 1;
                            }
                          }
                        }
                        else
                        {
                          return 1;
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
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContextFormat3::collect_glyphs  (binary VA: 0x12d8720)
// Original: OT::ChainContextFormat3::collect_glyphs
// ----------------------------------------------------------------------------
hb_set_t * OT::ChainContextFormat3::collect_glyphs(OT::ChainContextFormat3::Self *self, hb_set_t **a2)
{
  OT::ChainContextFormat3::Self *v2;
  hb_set_t **v3;
  uint8_t *v4;
  uint8_t *v5;
  OT::Coverage::Self *v6;
  uint8_t *v7;
  hb_set_t *v8;
  int v9;
  uint8_t *v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  hb_set_t *result;
  uint8_t *v17;
  int v18;
  hb_set_t *empty;
  uint8_t *v20;
  uint8_t *v21;
  uint8_t *v22;
  hb_set_t *v23;
  hb_set_t *v24;
  hb_set_t *v25;
  hb_set_t *v26;
  uint8_t v27;
  hb_set_t *v28;
  hb_set_t *v29;
  hb_set_t *v30;
  uint8_t v31;
  int v32;
  hb_set_t **v33;
  hb_set_t *v34;
  hb_set_t *v35;
  uint8_t *v36;
  int v37;
  hb_set_t *v38;
  int v39;
  uint8_t *v40;

  v2 = self;
  v3 = a2;
  v4 = (uint8_t *)self
     + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
     + 4;
  v5 = (uint8_t *)self
     + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
     + 6;
  v6 = (OT::Coverage::Self *)&unk_2116E00;
  if ( *((uint8_t *)self
       + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
       + 5)
     + (*v4 << 8) == 0 )
    v5 = (uint8_t *)&unk_2116E00;
  if ( v5[1] + (*v5 << 8) != 0 )
    v6 = (OT::Coverage::Self *)((OT::ChainContextFormat3::Self *)((char *)self + (uint16_t)(v5[1] + (*v5 << 8))));
  OT::Coverage::add_coverage<hb_set_t>(v6, a2[2]);
  v7 = &v4[2 * (uint16_t)(v4[1] + (*v4 << 8)) + 2];
  v32 = (uint16_t)(v4[1] + (*v4 << 8));
  v40 = v4 + 4;
  v37 = (uint16_t)(v7[1] + (*v7 << 8));
  v36 = &v7[2 * v37 + 2];
  v39 = (int)(uintptr_t)(&v4[2 * v32 + 4]);
  v38 = (hb_set_t *)(uint16_t)(v36[1] + (*v36 << 8));
  if ( (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3) != 0 )
  {
    v28 = (hb_set_t *)((uint16_t)((*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3)) + 1);
    v8 = a2[1];
    v9 = 1;
    v10 = (uint8_t *)self + 4;
    do
    {
      v20 = v10;
      ++v9;
      v10 += 2;
      sub_12CD140(v8, v20, (int)(uintptr_t)(self));
    }
    while ( (hb_set_t *)v9 != v28 );
    v2 = self;
    v3 = a2;
  }
  if ( v32 != 0 )
  {
    v29 = v3[2];
    if ( v32 != 1 )
    {
      v25 = (hb_set_t *)(v2);
      v11 = 1;
      v12 = v32;
      v33 = v3;
      v13 = v40;
      do
      {
        ++v11;
        v21 = v13;
        v13 += 2;
        sub_12CD140(v29, v21, (int)(uintptr_t)(v25));
      }
      while ( v12 != v11 );
      v2 = (OT::ChainContextFormat3::Self *)(v25);
      v3 = v33;
    }
  }
  v26 = v3[3];
  if ( v37 != 0 )
  {
    v30 = (hb_set_t *)(v2);
    v14 = 1;
    v15 = (uint8_t *)v39;
    do
    {
      ++v14;
      v22 = v15;
      v15 += 2;
      sub_12CD140(v26, v22, (int)(uintptr_t)(v30));
    }
    while ( v37 + 1 != v14 );
  }
  result = v38;
  if ( v38 != nullptr )
  {
    v17 = v36 + 4;
    v18 = 1;
    do
    {
      result = v3[6];
      v27 = *v17;
      v31 = v17[1];
      if ( result != nullptr )
      {
        result = v3[5];
        if ( result != nullptr )
        {
          v34 = v3[4];
          result = (hb_set_t *)hb_set_get_empty();
          if ( v34 != result )
          {
            v24 = v3[1];
            v23 = v3[2];
            v35 = v3[3];
            empty = (hb_set_t *)hb_set_get_empty();
            v3[3] = empty;
            v3[2] = empty;
            v3[1] = empty;
            v3[6] = (hb_set_t *)((char *)v3[6] - 1);
            result = (hb_set_t *)((int (*)(hb_set_t **, uint32_t))v3[5])(v3, (uint16_t)((v27 << 8) + v31));
            v3[6] = (hb_set_t *)((char *)v3[6] + 1);
            v3[1] = v24;
            v3[3] = v35;
            v3[2] = v23;
          }
        }
      }
      ++v18;
      v17 += 4;
    }
    while ( (hb_set_t *)v18 != (hb_set_t *)((char *)v38 + 1) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ReverseChainSingleSubstFormat1::collect_glyphs  (binary VA: 0x12d89e0)
// Original: OT::ReverseChainSingleSubstFormat1::collect_glyphs
// ----------------------------------------------------------------------------
hb_set_t * OT::ReverseChainSingleSubstFormat1::collect_glyphs(OT::ReverseChainSingleSubstFormat1::Self *self, hb_set_t **a2)
{
  OT::Coverage::Self *v2;
  uint16_t v3;
  uint8_t v4;
  int16_t v5; // si
  int v6;
  unsigned int v7;
  int16_t v8;
  uint8_t *v9;
  uint16_t v10;
  OT::Coverage::Self *v11;
  int16_t v12;
  int v13;
  unsigned int v14;
  uint8_t i;
  uint16_t v16;
  uint8_t *v17;
  uint16_t v18;
  OT::Coverage::Self *v19;
  uint8_t *v20;
  uint8_t v21;
  hb_set_t *result;
  int16_t v23; // si
  int v24;
  unsigned int v25;
  int16_t v26;
  uint8_t *v27;
  uint8_t v28;
  int v29;
  int v30;
  int v31;
  uint8_t *v32;

  v32 = (uint8_t *)self
      + 2 * (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8))
      + 6;
  v2 = (OT::Coverage::Self *)&unk_2116E00;
  v3 = (*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3);
  if ( v3 != 0 )
    v2 = (OT::Coverage::Self *)((OT::ReverseChainSingleSubstFormat1::Self *)((char *)self + v3));
  OT::Coverage::add_coverage<hb_set_t>(v2, a2[2]);
  v4 = *((uint8_t *)self + 5);
  v5 = *((uint8_t *)self + 4) << 8;
  v6 = (uint16_t)(v5 + v4);
  if ( v5 + v4 != 0 )
  {
    v7 = 0;
    v31 = v6 - 1;
    v8 = *((uint8_t *)self + 4);
    while ( 1 )
    {
      v9 = (uint8_t *)&unk_2116E00;
      if ( v7 < (uint16_t)(v4 + (v8 << 8)) )
        v9 = (uint8_t *)self + 2 * v7 + 6;
      v10 = v9[1] + (*v9 << 8);
      v11 = (OT::Coverage::Self *)&unk_2116E00;
      if ( v10 != 0 )
        v11 = (OT::Coverage::Self *)((OT::ReverseChainSingleSubstFormat1::Self *)((char *)self + v10));
      OT::Coverage::add_coverage<hb_set_t>(v11, a2[1]);
      if ( v7 == v31 )
        break;
      v8 = *((uint8_t *)self + 4);
      ++v7;
      v4 = *((uint8_t *)self + 5);
    }
  }
  v12 = *v32;
  v28 = v32[1];
  v13 = 0;
  if ( (v12 << 8) + v28 != 0 )
  {
    v30 = (uint16_t)((v12 << 8) + v28) - 1;
    v14 = 0;
    for ( i = v32[1]; ; i = v32[1] )
    {
      v16 = i + (v12 << 8);
      v17 = (uint8_t *)&unk_2116E00;
      if ( v14 < v16 )
        v17 = &v32[2 * v14 + 2];
      v18 = v17[1] + (*v17 << 8);
      v19 = (OT::Coverage::Self *)&unk_2116E00;
      if ( v18 != 0 )
        v19 = (OT::Coverage::Self *)((OT::ReverseChainSingleSubstFormat1::Self *)((char *)self + v18));
      OT::Coverage::add_coverage<hb_set_t>(v19, a2[3]);
      if ( v14 == v30 )
        break;
      v12 = *v32;
      ++v14;
    }
    v13 = (uint16_t)(v32[1] + (*v32 << 8));
  }
  v20 = &v32[2 * v13 + 2];
  v21 = v32[2 * v13 + 3];
  result = (hb_set_t *)*v20;
  v23 = *v20 << 8;
  v24 = (uint16_t)(v23 + v21);
  if ( v23 + v21 != 0 )
  {
    v25 = 0;
    v29 = v24 - 1;
    v26 = *v20;
    while ( 1 )
    {
      v27 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)(v21 + (v26 << 8)) > v25 )
        v27 = &v20[2 * v25 + 2];
      result = hb_set_t::add(a2[4], (uint16_t)(v27[1] + (*v27 << 8)));
      if ( v25 == v29 )
        break;
      v26 = *v20;
      ++v25;
      v21 = v20[1];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_Rule_OT_I_98e497::sanitize  (binary VA: 0x12d8c10)
// Original: OT::ArrayOf<OT::OffsetTo<OT::Rule,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_Rule_OT_I_98e497::sanitize(OT::ArrayOf<OT::OffsetTo<OT::Rule, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  unsigned int v3;
  unsigned int v4;
  uint8_t *v5;
  int16_t v6;
  char *v7;
  unsigned int v8;
  char v9;
  uint8_t v11;
  char *v12;
  unsigned int v13;
  uint8_t v14;
  uint8_t v15;
  int v16;
  unsigned int v17;
  uint8_t v18;

  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v3 )
    return 0;
  v4 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return 0;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return 0;
  v13 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
  v17 = (uint16_t)v13;
  if ( !OT::hb_sanitize_context_t::check_array(a2, self, 2u, v13) )
    return 0;
  if ( v17 != 0 )
  {
    v5 = (uint8_t *)((char *)self + 2);
    if ( (unsigned int)(uintptr_t)(self) + 2 >= v3 && (unsigned int)(uintptr_t)(v5) <= v4 )
    {
      v16 = 0;
      if ( v4 - (unsigned int)(uintptr_t)(v5) > 1 )
      {
        while ( 1 )
        {
          v6 = (uint8_t)v5[1];
          if ( v6 + ((uint8_t)*v5 << 8) != 0 )
          {
            v7 = &a3[(uint16_t)(v6 + ((uint8_t)*v5 << 8))];
            if ( (unsigned int)(uintptr_t)(v7) >= v3
              && v4 >= (unsigned int)(uintptr_t)(v7)
              && v4 - (unsigned int)(uintptr_t)(v7) > 1
              && (unsigned int)(uintptr_t)(v7 + 2) >= v3
              && v4 >= (unsigned int)(uintptr_t)(v7 + 2)
              && v4 - (unsigned int)(uintptr_t)(v7 + 2) > 1 )
            {
              v15 = *v7;
              v18 = v7[1];
              v14 = v7[2];
              v11 = v7[3];
              v12 = v7 + 4;
              if ( (unsigned int)(uintptr_t)(v12) >= v3
                && v4 >= (unsigned int)(uintptr_t)(v12)
                && 2 * ((uint16_t)((v15 << 8) + v18) + 2 * (unsigned int)(uint16_t)((v14 << 8) + v11)) <= v4 - (unsigned int)(uintptr_t)(v12) )
              {
                if ( ++v16 >= v17 )
                  return 1;
                goto LABEL_15;
              }
            }
            v8 = *((uint32_t *)a2 + 4);
            v9 = *((uint8_t *)a2 + 12);
            if ( v8 > 0x63 )
              return 0;
            *((uint32_t *)a2 + 4) = v8 + 1;
            if ( v9 == 0 )
              return 0;
            *v5 = 0;
            v5[1] = 0;
          }
          if ( ++v16 >= v17 )
            return 1;
LABEL_15:
          v3 = *((uint32_t *)a2 + 1);
          v5 = (uint8_t *)((char *)self + 2 * v16 + 2);
          if ( (unsigned int)(uintptr_t)(v5) >= v3 )
          {
            v4 = *((uint32_t *)a2 + 2);
            if ( (unsigned int)(uintptr_t)(v5) <= v4 && v4 - (unsigned int)(uintptr_t)(v5) > 1 )
              continue;
          }
          return 0;
        }
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_RuleSet_O_40c83e::sanitize  (binary VA: 0x12d8e20)
// Original: OT::ArrayOf<OT::OffsetTo<OT::RuleSet,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_RuleSet_O_40c83e::sanitize(OT::ArrayOf<OT::OffsetTo<OT::RuleSet::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  unsigned int v3;
  unsigned int v4;
  uint8_t *v5;
  int v6;
  int16_t v7;
  int v8;
  unsigned int v9;
  char v10;
  unsigned int v11;
  unsigned int v13;
  unsigned int v14;

  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v3 )
    return 0;
  v4 = *((uint32_t *)a2 + 2);
  v13 = v4;
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return 0;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return 0;
  v14 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
  if ( !OT::hb_sanitize_context_t::check_array(a2, self, 2u, v14) )
    return 0;
  if ( v14 != 0 )
  {
    v5 = (uint8_t *)((char *)self + 2);
    if ( v3 <= (unsigned int)(uintptr_t)(self) + 2 && v13 >= (unsigned int)(uintptr_t)(v5) )
    {
      v6 = 0;
      if ( v13 - (unsigned int)(uintptr_t)(v5) > 1 )
      {
        do
        {
          v7 = (uint8_t)v5[1];
          if ( v7 + ((uint8_t)*v5 << 8) != 0 )
          {
            v8 = (uint16_t)(v7 + ((uint8_t)*v5 << 8));
            if ( (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_Rule_OT_I_98e497::sanitize(
                                    (OT::ArrayOf<OT::OffsetTo<OT::Rule, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)&a3[v8],
                                    a2,
                                    &a3[v8]) == 0 )
            {
              v9 = *((uint32_t *)a2 + 4);
              v10 = *((uint8_t *)a2 + 12);
              if ( v9 > 0x63 )
                return 0;
              *((uint32_t *)a2 + 4) = v9 + 1;
              if ( v10 == 0 )
                return 0;
              *v5 = 0;
              v5[1] = 0;
            }
          }
          if ( ++v6 >= v14 )
            return 1;
          v5 = (uint8_t *)((char *)self + 2 * v6 + 2);
          if ( (unsigned int)(uintptr_t)(v5) < *((uint32_t *)a2 + 1) )
            break;
          v11 = *((uint32_t *)a2 + 2);
          if ( (unsigned int)(uintptr_t)(v5) > v11 )
            break;
        }
        while ( v11 - (unsigned int)(uintptr_t)(v5) > 1 );
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::Context::sanitize  (binary VA: 0x12d8f70)
// Original: OT::Context::sanitize
// ----------------------------------------------------------------------------
int OT::Context::sanitize(OT::Context::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  unsigned int v2;
  int v3;
  unsigned int v4;
  int16_t v5;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;

  v2 = *((uint32_t *)a2 + 1);
  v3 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= v2 )
  {
    v4 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v4 )
    {
      v10 = v4 - (uint32_t)(uintptr_t)(self);
      if ( v4 - (unsigned int)(uintptr_t)(self) > 1 )
      {
        v5 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
        switch ( v5 )
        {
          case 1:
            if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                    (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::Context::Self *)((char *)self + 2)),
                                    a2,
                                    (char *)self) != 0 )
              return OT::ArrayOf_OT_OffsetTo_OT_RuleSet_O_40c83e::sanitize(
                       (OT::ArrayOf<OT::OffsetTo<OT::RuleSet::Self, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::Context::Self *)((char *)self + 4)),
                       a2,
                       (char *)self);
            break;
          case 2:
            if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                    (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::Context::Self *)((char *)self + 2)),
                                    a2,
                                    (char *)self) != 0
              && (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                                    (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::Context::Self *)((char *)self + 4)),
                                    a2,
                                    (char *)self) != 0 )
            {
              return OT::ArrayOf_OT_OffsetTo_OT_RuleSet_O_40c83e::sanitize(
                       (OT::ArrayOf<OT::OffsetTo<OT::RuleSet::Self, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::Context::Self *)((char *)self + 6)),
                       a2,
                       (char *)self);
            }
            break;
          case 3:
            if ( v2 <= (unsigned int)(uintptr_t)(self) && *((uint32_t *)a2 + 2) >= (unsigned int)(uintptr_t)(self) && v10 > 5 )
            {
              v9 = (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
              if ( OT::hb_sanitize_context_t::check_array(a2, (char *)self + 6, 2u, v9) )
              {
                if ( v9 != 0 )
                {
                  v7 = 0;
                  while ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                             (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::Context::Self *)((char *)self + 2 * v7 + 6)),
                                             a2,
                                             (char *)self) != 0 )
                  {
                    if ( v9 <= ++v7 )
                      goto LABEL_23;
                  }
                  return 0;
                }
                else
                {
LABEL_23:
                  LOBYTE(v8) = OT::hb_sanitize_context_t::check_array(
                                 a2,
                                 (char *)self + 2 * v9 + 6,
                                 4u,
                                 (uint16_t)(*((uint8_t *)self + 5)
                                                  + (*((uint8_t *)self + 4) << 8)));
                  return v8;
                }
              }
            }
            break;
          default:
            return 1;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_LookupRecord_OT_IntTy_cf4785::sanitize  (binary VA: 0x12d9140)
// Original: OT::ArrayOf<OT::LookupRecord,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
bool OT::ArrayOf_OT_LookupRecord_OT_IntTy_cf4785::sanitize(OT::ArrayOf<OT::LookupRecord, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2)
{
  bool result;
  unsigned int v3;

  result = false;
  if ( (unsigned int)(uintptr_t)(self) >= *((uint32_t *)a2 + 1) )
  {
    v3 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v3 && v3 - (unsigned int)(uintptr_t)(self) > 1 )
      return OT::hb_sanitize_context_t::check_array(
               a2,
               self,
               4u,
               (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8)));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_ChainRule_2d254d::sanitize  (binary VA: 0x12d91b0)
// Original: OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_ChainRule_2d254d::sanitize(OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  unsigned int v3;
  bool v4;
  unsigned int v5;
  char *v6;
  int16_t v7;
  int v8;
  bool v9;
  unsigned int v10;
  uint8_t *v11;
  int16_t v12;
  uint8_t *v13;
  unsigned int v14;
  char v15;
  unsigned int v16;
  unsigned int v17;
  char *v18;
  unsigned int v19;
  uint8_t *v21;
  int v22;
  uint8_t *v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  uint8_t *v30;
  unsigned int v31;
  int v32;
  uint8_t *v33;
  uint16_t v34;
  unsigned int v35;
  uint8_t *v36;
  int v37;
  unsigned int v38;

  if ( (unsigned int)(uintptr_t)(self) < *((uint32_t *)a2 + 1) )
    return 0;
  v3 = *((uint32_t *)a2 + 2);
  v31 = v3;
  if ( (unsigned int)(uintptr_t)(self) > v3 )
    return 0;
  if ( v3 - (unsigned int)(uintptr_t)(self) <= 1 )
    return 0;
  v26 = *((uint32_t *)a2 + 1);
  v38 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
  v4 = OT::hb_sanitize_context_t::check_array(a2, self, 2u, v38);
  v5 = v26;
  if ( !v4 )
    return 0;
  if ( v38 != 0 )
  {
    v6 = (char *)self + 2;
    v36 = (uint8_t *)((char *)self + 2);
    if ( v26 <= (unsigned int)(uintptr_t)(self) + 2 && v31 >= (unsigned int)(uintptr_t)(v6) )
    {
      v37 = 0;
      if ( v31 - (unsigned int)(uintptr_t)(v6) > 1 )
      {
        while ( 1 )
        {
          v7 = (uint8_t)v36[1];
          v8 = (uint16_t)(v7 + ((uint8_t)*v36 << 8));
          if ( v7 + ((uint8_t)*v36 << 8) != 0 )
          {
            v33 = (uint8_t *)&a3[v8];
            if ( (unsigned int)(uintptr_t)(&a3[v8]) < v5 )
              goto LABEL_30;
            if ( (unsigned int)(uintptr_t)(v33) > v31 )
              goto LABEL_30;
            if ( v31 - (unsigned int)(uintptr_t)(v33) <= 1 )
              goto LABEL_30;
            v27 = v5;
            v35 = (uint16_t)(v33[1] + (*v33 << 8));
            v9 = OT::hb_sanitize_context_t::check_array(a2, v33, 2u, v35);
            v10 = v27;
            if ( !v9 )
              goto LABEL_30;
            if ( v35 != 0 )
              break;
          }
LABEL_34:
          if ( ++v37 >= v38 )
            return 1;
          v5 = *((uint32_t *)a2 + 1);
          v18 = (char *)self + 2 * v37 + 2;
          v36 = (uint8_t *)(v18);
          if ( (unsigned int)(uintptr_t)(v18) >= v5 )
          {
            v19 = *((uint32_t *)a2 + 2);
            v31 = v19;
            if ( (unsigned int)(uintptr_t)(v18) <= v19 && v19 - (unsigned int)(uintptr_t)(v18) > 1 )
              continue;
          }
          return 0;
        }
        v11 = v33 + 2;
        if ( v27 <= (unsigned int)(uintptr_t)(v33 + 2) && v31 >= (unsigned int)(uintptr_t)(v11) )
        {
          v32 = 0;
          if ( v31 - (unsigned int)(uintptr_t)(v11) > 1 )
          {
            do
            {
              v12 = *v11 << 8;
              if ( v12 + v11[1] != 0 )
              {
                v13 = &v33[(uint16_t)(v12 + v11[1])];
                if ( (unsigned int)(uintptr_t)(v13) < v10 )
                  goto LABEL_23;
                if ( v31 < (unsigned int)(uintptr_t)(v13) )
                  goto LABEL_23;
                if ( v31 - (unsigned int)(uintptr_t)(v13) <= 1 )
                  goto LABEL_23;
                v29 = (uint16_t)((*v13 << 8) + v13[1]);
                v28 = v10;
                if ( !OT::hb_sanitize_context_t::check_array(a2, v13, 2u, v29) )
                  goto LABEL_23;
                v21 = &v13[2 * v29 + 2];
                if ( v28 > (unsigned int)(uintptr_t)(v21) )
                  goto LABEL_23;
                if ( v31 < (unsigned int)(uintptr_t)(v21) )
                  goto LABEL_23;
                if ( v31 - (unsigned int)(uintptr_t)(v21) <= 1 )
                  goto LABEL_23;
                v34 = (*v21 << 8) + v21[1];
                if ( !OT::hb_sanitize_context_t::check_array(a2, v21, 2u, v34) )
                  goto LABEL_23;
                v22 = 2;
                if ( v34 != 0 )
                  v22 = 2 * v34;
                v23 = &v21[v22];
                if ( v28 > (unsigned int)(uintptr_t)(v23)
                  || v31 < (unsigned int)(uintptr_t)(v23)
                  || v31 - (unsigned int)(uintptr_t)(v23) <= 1
                  || (v24 = (uint16_t)((*v23 << 8) + v23[1]),
                      v30 = v23,
                      !OT::hb_sanitize_context_t::check_array(a2, v23, 2u, v24))
                  || (v25 = (unsigned int)(uintptr_t)(&v30[2 * v24 + 2]), v28 > v25)
                  || v31 < v25
                  || v31 - v25 <= 1
                  || !OT::hb_sanitize_context_t::check_array(
                        a2,
                        &v30[2 * v24 + 2],
                        4u,
                        (uint16_t)(v30[2 * v24 + 3] + (v30[2 * v24 + 2] << 8))) )
                {
LABEL_23:
                  v14 = *((uint32_t *)a2 + 4);
                  v15 = *((uint8_t *)a2 + 12);
                  if ( v14 > 0x63 )
                    return 0;
                  v16 = v14 + 1;
                  *((uint32_t *)a2 + 4) = v16;
                  if ( v15 == 0 )
                    goto LABEL_31;
                  *v11 = 0;
                  v11[1] = 0;
                }
              }
              if ( v35 <= ++v32 )
                goto LABEL_34;
              v10 = *((uint32_t *)a2 + 1);
              v11 = &v33[2 * v32 + 2];
              if ( (unsigned int)(uintptr_t)(v11) < v10 )
                break;
              v17 = *((uint32_t *)a2 + 2);
              v31 = v17;
              if ( (unsigned int)(uintptr_t)(v11) > v17 )
                break;
            }
            while ( v17 - (unsigned int)(uintptr_t)(v11) > 1 );
          }
        }
LABEL_30:
        v15 = *((uint8_t *)a2 + 12);
        v16 = *((uint32_t *)a2 + 4);
LABEL_31:
        if ( v16 > 0x63 )
          return 0;
        *((uint32_t *)a2 + 4) = v16 + 1;
        if ( v15 == 0 )
          return 0;
        *v36 = 0;
        v36[1] = 0;
        goto LABEL_34;
      }
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize  (binary VA: 0x12d95d0)
// Original: OT::ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize(OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  unsigned int v3;
  int v4;
  unsigned int v6;

  if ( (unsigned int)(uintptr_t)(self) < *((uint32_t *)a2 + 1) )
    return 0;
  v3 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v3 )
    return 0;
  if ( v3 - (unsigned int)(uintptr_t)(self) <= 1 )
    return 0;
  v6 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
  if ( !OT::hb_sanitize_context_t::check_array(a2, self, 2u, v6) )
    return 0;
  v4 = 0;
  if ( v6 != 0 )
  {
    while ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                               (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)((char *)self + 2 * v4 + 2)),
                               a2,
                               a3) != 0 )
    {
      if ( ++v4 >= v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContext::sanitize  (binary VA: 0x12d9690)
// Original: OT::ChainContext::sanitize
// ----------------------------------------------------------------------------
int OT::ChainContext::sanitize(OT::ChainContext::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  int v2;
  unsigned int v3;
  int16_t v4;
  int v6;
  uint8_t *v7;
  uint8_t *v8;

  v2 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= *((uint32_t *)a2 + 1) )
  {
    v3 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v3 && v3 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      v4 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
      switch ( v4 )
      {
        case 1:
          if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                  (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 2)),
                                  a2,
                                  (char *)self) != 0 )
            return OT::ArrayOf_OT_OffsetTo_OT_ChainRule_2d254d::sanitize(
                     (OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet::Self, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 4)),
                     a2,
                     (char *)self);
          break;
        case 2:
          if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                  (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 2)),
                                  a2,
                                  (char *)self) != 0
            && (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                                  (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 4)),
                                  a2,
                                  (char *)self) != 0
            && (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                                  (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 6)),
                                  a2,
                                  (char *)self) != 0
            && (uint8_t)OT::OffsetTo_OT_ClassDef_OT_IntType_u_e1570b::sanitize(
                                  (OT::OffsetTo<OT::ClassDef::Self, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 8)),
                                  a2,
                                  (char *)self) != 0 )
          {
            return OT::ArrayOf_OT_OffsetTo_OT_ChainRule_2d254d::sanitize(
                     (OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet::Self, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 10)),
                     a2,
                     (char *)self);
          }
          break;
        case 3:
          if ( (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize(
                                  (OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::ChainContext::Self *)((char *)self + 2)),
                                  a2,
                                  (char *)self) != 0 )
          {
            v7 = (uint8_t *)self
               + 2 * (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8))
               + 4;
            if ( (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize(
                                    (OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)v7,
                                    a2,
                                    (char *)self) != 0 )
            {
              v8 = &v7[2 * (uint16_t)(v7[1] + (*v7 << 8)) + 2];
              if ( (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize(
                                      (OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)v8,
                                      a2,
                                      (char *)self) != 0 )
              {
                LOBYTE(v6) = OT::ArrayOf_OT_LookupRecord_OT_IntTy_cf4785::sanitize(
                               (OT::ArrayOf<OT::LookupRecord, OT::IntType<unsigned short, 2u>> *)&v8[2 * (uint16_t)(v8[1] + (*v8 << 8)) + 2],
                               a2);
                return v6;
              }
            }
          }
          break;
        default:
          return 1;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_RecordListOf_OT_Featu_92edaa::sanitize  (binary VA: 0x12d9870)
// Original: OT::OffsetTo<OT::RecordListOf<OT::Feature>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_RecordListOf_OT_Featu_92edaa::sanitize(OT::OffsetTo<OT::RecordListOf<OT::Feature>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int v3;
  unsigned int v4;
  int16_t v5;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  uint8_t *v9;
  int16_t v10;
  uint8_t *v11;
  unsigned int v12;
  unsigned int v13;
  char v14;
  uint16_t v16;
  int v17;
  uint16_t v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  uint16_t v25;
  unsigned int v26;
  char v27;
  char v28;
  char v29;
  int v30;
  uint8_t *v31;
  void *v32;
  int v33;
  unsigned int v34;

  v3 = 0;
  v26 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v26 )
    return v3;
  v4 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return v3;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return v3;
  v3 = 1;
  v5 = *((uint8_t *)self + 1);
  v6 = (uint16_t)(v5 + (*(uint8_t *)self << 8));
  if ( v5 + (*(uint8_t *)self << 8) == 0 )
    return v3;
  v31 = (uint8_t *)&a3[v6];
  if ( v26 <= (unsigned int)(uintptr_t)(&a3[v6]) && v4 >= (unsigned int)(uintptr_t)(v31) && v4 - (unsigned int)(uintptr_t)(v31) > 1 )
  {
    v24 = *((uint32_t *)a2 + 2);
    v34 = (uint16_t)(v31[1] + (*v31 << 8));
    if ( OT::hb_sanitize_context_t::check_array(a2, v31, 6u, v34) )
    {
      if ( v34 == 0 )
        return v3;
      v7 = v31 + 2;
      if ( v26 <= (unsigned int)(uintptr_t)(v31 + 2) )
      {
        v30 = 0;
        v8 = v24;
        v33 = (v31[2] << 24) + (v31[3] << 16) + (v31[4] << 8) + v31[5];
        if ( v24 >= (unsigned int)(uintptr_t)(v7) )
        {
          while ( 1 )
          {
            if ( v8 - (unsigned int)(uintptr_t)(v7) <= 5 )
              goto LABEL_25;
            v9 = v7 + 4;
            if ( (unsigned int)(uintptr_t)(v7 + 4) < v26 || (unsigned int)(uintptr_t)(v9) > v8 || v8 - (unsigned int)(uintptr_t)(v9) <= 1 )
              goto LABEL_25;
            v10 = v7[4] << 8;
            if ( v10 + v7[5] != 0 )
              break;
LABEL_22:
            if ( v34 <= ++v30 )
              return 1;
            v7 = &v31[6 * v30 + 2];
            v26 = *((uint32_t *)a2 + 1);
            if ( (unsigned int)(uintptr_t)(v7) >= v26 )
            {
              v8 = *((uint32_t *)a2 + 2);
              v33 = (*v7 << 24) + (v31[6 * v30 + 3] << 16) + (v31[6 * v30 + 4] << 8) + v31[6 * v30 + 5];
              if ( v8 >= (unsigned int)(uintptr_t)(v7) )
                continue;
            }
            goto LABEL_25;
          }
          v11 = &v31[(uint16_t)(v10 + v7[5])];
          if ( (unsigned int)(uintptr_t)(v11) < v26 )
            goto LABEL_18;
          if ( v8 >= (unsigned int)(uintptr_t)(v11) )
          {
            if ( v8 - (unsigned int)(uintptr_t)(v11) <= 3 )
              goto LABEL_18;
            v32 = v11 + 2;
            if ( (unsigned int)(uintptr_t)(v11 + 2) < v26 )
            {
LABEL_53:
              v12 = *((uint32_t *)a2 + 4);
              v27 = *((uint8_t *)a2 + 12);
              goto LABEL_19;
            }
            if ( v8 >= (unsigned int)(uintptr_t)(v32) )
            {
              if ( v8 - (unsigned int)(uintptr_t)(v32) <= 1 )
                goto LABEL_18;
              v22 = v8;
              if ( OT::hb_sanitize_context_t::check_array(a2, v32, 2u, (uint16_t)(v11[3] + (v11[2] << 8))) )
              {
                if ( (unsigned int)(uintptr_t)(v11) >= v26 && v22 >= (unsigned int)(uintptr_t)(v11) )
                {
                  if ( v22 - (unsigned int)(uintptr_t)(v11) > 1 )
                  {
                    v16 = v11[1] + (*v11 << 8);
                    v17 = v16;
                    v18 = v16;
                    if ( v16 != 0 )
                    {
                      v25 = v11[1] + (*v11 << 8);
                      v23 = v16;
                      v28 = OT::FeatureParams::sanitize((OT::FeatureParams::Self *)&v11[v16], a2, v33);
                      v16 = v25;
                      v18 = v25;
                      v17 = v23;
                      if ( v28 == 0 )
                      {
                        v27 = *((uint8_t *)a2 + 12);
                        v19 = *((uint32_t *)a2 + 4);
                        if ( v19 > 0x63 )
                          return 0;
                        v12 = v19 + 1;
                        *((uint32_t *)a2 + 4) = v12;
                        if ( v27 == 0 )
                          goto LABEL_19;
                        *v11 = 0;
                        v11[1] = 0;
                        v18 = 0;
                      }
                    }
                    if ( v16 == 0 )
                      goto LABEL_22;
                    if ( v18 != 0 )
                      goto LABEL_22;
                    if ( v33 != 1936292453 )
                      goto LABEL_22;
                    if ( v31 >= v11 )
                      goto LABEL_22;
                    v20 = v31 - v11 + v17;
                    if ( v20 != (uint16_t)v20 )
                      goto LABEL_22;
                    v29 = *((uint8_t *)a2 + 12);
                    v21 = *((uint32_t *)a2 + 4);
                    if ( v21 > 0x63 )
                      goto LABEL_22;
                    *((uint32_t *)a2 + 4) = v21 + 1;
                    if ( v29 == 0 )
                      goto LABEL_22;
                    v11[1] = v20;
                    *v11 = BYTE1(v20);
                    if ( (uint8_t)OT::OffsetTo<OT::FeatureParams::Self,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>(
                                            (OT::OffsetTo<OT::FeatureParams::Self, OT::IntType<unsigned short, 2u>> *)v11,
                                            a2,
                                            (char *)v11,
                                            0x73697A65u) != 0 )
                      goto LABEL_22;
                    goto LABEL_53;
                  }
LABEL_18:
                  v27 = *((uint8_t *)a2 + 12);
                  v12 = *((uint32_t *)a2 + 4);
LABEL_19:
                  if ( v12 > 0x63 )
                    return 0;
                  v13 = v12 + 1;
                  *((uint32_t *)a2 + 4) = v13;
                  if ( v27 == 0 )
                  {
                    v14 = 0;
                    goto LABEL_26;
                  }
                  v7[4] = 0;
                  v7[5] = 0;
                  goto LABEL_22;
                }
                goto LABEL_53;
              }
            }
          }
          v12 = *((uint32_t *)a2 + 4);
          v27 = *((uint8_t *)a2 + 12);
          goto LABEL_19;
        }
      }
    }
  }
LABEL_25:
  v14 = *((uint8_t *)a2 + 12);
  v13 = *((uint32_t *)a2 + 4);
LABEL_26:
  if ( v13 <= 0x63 )
  {
    v3 = 0;
    *((uint32_t *)a2 + 4) = v13 + 1;
    if ( v14 != 0 )
    {
      *(uint8_t *)self = 0;
      *((uint8_t *)self + 1) = 0;
      return 1;
    }
    return v3;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_OffsetListOf_OT_Looku_b2f130::sanitize  (binary VA: 0x12d9ce0)
// Original: OT::OffsetTo<OT::OffsetListOf<OT::Lookup>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_OffsetListOf_OT_Looku_b2f130::sanitize(OT::OffsetTo<OT::OffsetListOf<OT::Lookup::Self>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  int16_t v6;
  int v7;
  bool v8;
  unsigned int v9;
  uint8_t *v10;
  int16_t v11;
  int v12;
  uint8_t *v13;
  unsigned int v14;
  char v15;
  unsigned int v16;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  uint8_t *v23;
  int v24;
  uint8_t *v25;
  void *v26;
  unsigned int v27;

  v3 = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v4 )
    return v3;
  v5 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v5 )
    return v3;
  if ( v5 - (unsigned int)(uintptr_t)(self) <= 1 )
    return v3;
  v3 = 1;
  v6 = *((uint8_t *)self + 1);
  v7 = (uint16_t)(v6 + (*(uint8_t *)self << 8));
  if ( v6 + (*(uint8_t *)self << 8) == 0 )
    return v3;
  v25 = (uint8_t *)&a3[v7];
  if ( v4 > (unsigned int)(uintptr_t)(&a3[v7]) )
    goto LABEL_29;
  if ( v5 < (unsigned int)(uintptr_t)(v25) )
    goto LABEL_29;
  if ( v5 - (unsigned int)(uintptr_t)(v25) <= 1 )
    goto LABEL_29;
  v19 = (uint16_t)(v25[1] + (*v25 << 8));
  v21 = *((uint32_t *)a2 + 2);
  v27 = (uint16_t)v19;
  v8 = OT::hb_sanitize_context_t::check_array(a2, v25, 2u, v19);
  v9 = v21;
  if ( !v8 )
    goto LABEL_29;
  if ( v27 == 0 )
    return v3;
  v10 = v25 + 2;
  if ( v4 > (unsigned int)(uintptr_t)(v25 + 2) || v21 < (unsigned int)(uintptr_t)(v10) || (v24 = 0, v21 - (unsigned int)(uintptr_t)(v10) <= 1) )
  {
LABEL_29:
    v15 = *((uint8_t *)a2 + 12);
    v16 = *((uint32_t *)a2 + 4);
LABEL_30:
    if ( v16 > 0x63 )
      return 0;
    v3 = 0;
    *((uint32_t *)a2 + 4) = v16 + 1;
    if ( v15 != 0 )
    {
      *(uint8_t *)self = 0;
      *((uint8_t *)self + 1) = 0;
      return 1;
    }
    return v3;
  }
  while ( 1 )
  {
    v11 = v10[1];
    v12 = (uint16_t)(v11 + (*v10 << 8));
    if ( v11 + (*v10 << 8) != 0 )
    {
      v23 = &v25[v12];
      if ( v4 > (unsigned int)(uintptr_t)(&v25[v12])
        || v9 < (unsigned int)(uintptr_t)(v23)
        || v9 - (unsigned int)(uintptr_t)(v23) <= 5
        || (v13 = v23 + 4, v26 = v23 + 4, v4 > (unsigned int)(uintptr_t)(v23 + 4))
        || v9 < (unsigned int)(uintptr_t)(v13)
        || v9 - (unsigned int)(uintptr_t)(v13) <= 1
        || (v22 = v9,
            v20 = (uint16_t)((v23[4] << 8) + v23[5]),
            !OT::hb_sanitize_context_t::check_array(a2, v26, 2u, v20))
        || (v23[3] & 0x10) != 0 && ((v14 = (unsigned int)(uintptr_t)(v26) + 2 * v20 + 2, v4 > v14) || v22 < v14 || v22 - v14 <= 1) )
      {
        v18 = *((uint32_t *)a2 + 4);
        v15 = *((uint8_t *)a2 + 12);
        if ( v18 > 0x63 )
          return 0;
        v16 = v18 + 1;
        *((uint32_t *)a2 + 4) = v16;
        if ( v15 == 0 )
          goto LABEL_30;
        *v10 = 0;
        v10[1] = 0;
      }
    }
    if ( v27 <= ++v24 )
      return 1;
    v4 = *((uint32_t *)a2 + 1);
    v10 = &v25[2 * v24 + 2];
    if ( (unsigned int)(uintptr_t)(v10) >= v4 )
    {
      v9 = *((uint32_t *)a2 + 2);
      if ( (unsigned int)(uintptr_t)(v10) <= v9 && v9 - (unsigned int)(uintptr_t)(v10) > 1 )
        continue;
    }
    goto LABEL_29;
  }
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionSubst_bacd81::sanitize  (binary VA: 0x12d9f90)
// Original: OT::Extension<OT::ExtensionSubst>::sanitize
// ----------------------------------------------------------------------------
int OT::Extension_OT_ExtensionSubst_bacd81::sanitize(OT::Extension<OT::ExtensionSubst> *self, OT::hb_sanitize_context_t::Self *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  int v5;

  result = 0;
  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v3 )
  {
    v4 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v4 && v4 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
        return 1;
      if ( v3 <= (unsigned int)(uintptr_t)(self) && *((uint32_t *)a2 + 2) >= (unsigned int)(uintptr_t)(self) && v4 - (unsigned int)(uintptr_t)(self) > 7 )
      {
        v5 = (*((uint8_t *)self + 5) << 16)
           + (*((uint8_t *)self + 4) << 24)
           + (*((uint8_t *)self + 6) << 8)
           + *((uint8_t *)self + 7);
        if ( v5 != 0 )
          return OT::SubstLookupSubTable::sanitize(
                   (OT::Extension<OT::ExtensionSubst> *)((char *)self + v5),
                   a2,
                   (uint16_t)((*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3)));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookupSubTable::sanitize  (binary VA: 0x12da060)
// Original: OT::SubstLookupSubTable::sanitize
// ----------------------------------------------------------------------------
int OT::SubstLookupSubTable::sanitize(OT::SubstLookupSubTable::Self *self, OT::hb_sanitize_context_t::Self *a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v7;
  int16_t v8;
  int v9;
  char *v10;
  unsigned int v11;
  unsigned int v12;
  uint8_t *v13;

  v3 = *((uint32_t *)a2 + 1);
  v4 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= v3 )
  {
    v5 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v5 && v5 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      switch ( a3 )
      {
        case 1u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= (unsigned int)(uintptr_t)(self) && v5 - (unsigned int)(uintptr_t)(self) > 1 )
          {
            v8 = *((uint8_t *)self + 1) + (*(uint8_t *)self << 8);
            if ( v8 == 1 )
            {
              if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                      (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 2)),
                                      a2,
                                      (char *)self) != 0 )
              {
                v10 = (char *)self + 4;
                if ( (unsigned int)(uintptr_t)(self) + 4 >= *((uint32_t *)a2 + 1) )
                {
                  v11 = *((uint32_t *)a2 + 2);
                  if ( (unsigned int)(uintptr_t)(v10) <= v11 )
                  {
                    v12 = v11 - (uint32_t)(uintptr_t)(v10);
                    LOBYTE(v12) = v12 > 1;
                    v4 = v12;
                  }
                }
              }
            }
            else
            {
              if ( v8 != 2 )
                goto LABEL_5;
              if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                      (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 2)),
                                      a2,
                                      (char *)self) != 0 )
              {
                LOBYTE(v9) = OT::ArrayOf_OT_IntType_unsigned_shor_87f2db::sanitize(
                               (OT::ArrayOf<OT::IntType<unsigned short, 2U>, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 4)),
                               a2);
                v4 = v9;
              }
            }
          }
          break;
        case 2u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= (unsigned int)(uintptr_t)(self) && v5 - (unsigned int)(uintptr_t)(self) > 1 )
          {
            if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
              goto LABEL_5;
            v4 = OT::MultipleSubstFormat1::sanitize((OT::MultipleSubstFormat1::Self *)(self), a2);
          }
          break;
        case 3u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= (unsigned int)(uintptr_t)(self) && v5 - (unsigned int)(uintptr_t)(self) > 1 )
          {
            if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
              goto LABEL_5;
            if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                    (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 2)),
                                    a2,
                                    (char *)self) != 0 )
              v4 = OT::ArrayOf_OT_OffsetTo_OT_ArrayOf_O_32c2dc::sanitize(
                     (OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short, 2U>, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 4)),
                     a2,
                     (char *)self);
          }
          break;
        case 4u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= (unsigned int)(uintptr_t)(self) && v5 - (unsigned int)(uintptr_t)(self) > 1 )
          {
            if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
              goto LABEL_5;
            v4 = OT::LigatureSubstFormat1::sanitize((OT::LigatureSubstFormat1::Self *)(self), a2);
          }
          break;
        case 5u:
          v4 = OT::Context::sanitize((OT::Context::Self *)(self), a2);
          break;
        case 6u:
          v4 = OT::ChainContext::sanitize((OT::ChainContext::Self *)(self), a2);
          break;
        case 7u:
          v4 = OT::Extension_OT_ExtensionSubst_bacd81::sanitize((OT::Extension<OT::ExtensionSubst> *)(self), a2);
          break;
        case 8u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= (unsigned int)(uintptr_t)(self) && v5 - (unsigned int)(uintptr_t)(self) > 1 )
          {
            if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
              goto LABEL_5;
            if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                    (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 2)),
                                    a2,
                                    (char *)self) != 0
              && (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize(
                                    (OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>>, OT::IntType<unsigned short, 2U>> *)((OT::SubstLookupSubTable::Self *)((char *)self + 4)),
                                    a2,
                                    (char *)self) != 0 )
            {
              v13 = (uint8_t *)self
                  + 2 * (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8))
                  + 6;
              if ( (uint8_t)OT::ArrayOf_OT_OffsetTo_OT_Coverage_ad9705::sanitize(
                                      (OT::ArrayOf<OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *)v13,
                                      a2,
                                      (char *)self) != 0 )
              {
                LOBYTE(v7) = OT::ArrayOf_OT_IntType_unsigned_shor_87f2db::sanitize(
                               (OT::ArrayOf<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned short, 2u>> *)&v13[2 * (uint16_t)(v13[1] + (*v13 << 8)) + 2],
                               a2);
                v4 = v7;
              }
            }
          }
          break;
        default:
LABEL_5:
          v4 = 1;
          break;
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionSubst_bacd81::get_type  (binary VA: 0x12da3e0)
// Original: OT::Extension<OT::ExtensionSubst>::get_type
// ----------------------------------------------------------------------------
int OT::Extension_OT_ExtensionSubst_bacd81::get_type(OT::Extension<OT::ExtensionSubst> *self)
{
  if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) == 1 )
    return (uint16_t)(*((uint8_t *)self + 3) + (*((uint8_t *)self + 2) << 8));
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_OffsetListOf_OT_Subst_5bed97::sanitize  (binary VA: 0x12da420)
// Original: OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup>,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_OffsetListOf_OT_Subst_5bed97::sanitize(OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup::Self>, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int v3;
  unsigned int v4;
  int16_t v5;
  int v6;
  int16_t v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  uint16_t v11; // di
  bool v12;
  uint8_t *v13;
  uint8_t *v14;
  unsigned int v15;
  int v16;
  int16_t v17;
  char v18;
  unsigned int v19;
  char v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  char *subtable;
  int type;
  unsigned int v28;
  int v29;
  char *v30;
  int v31;
  uint8_t *v32;
  void *v33;
  uint8_t *v34;
  uint8_t *v35;
  uint8_t *v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  uint8_t *v40;
  unsigned int v41;
  int v42;
  uint8_t *v43;
  unsigned int v44;

  v3 = 0;
  v41 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v41 )
    return v3;
  v4 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return v3;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 1 )
    return v3;
  v3 = 1;
  v5 = *((uint8_t *)self + 1);
  v6 = (uint16_t)(v5 + (*(uint8_t *)self << 8));
  if ( v5 + (*(uint8_t *)self << 8) == 0 )
    return v3;
  v43 = (uint8_t *)&a3[v6];
  if ( v41 > (unsigned int)(uintptr_t)(&a3[v6]) )
    goto LABEL_50;
  if ( v4 < (unsigned int)(uintptr_t)(v43) )
    goto LABEL_50;
  if ( v4 - (unsigned int)(uintptr_t)(v43) <= 1 )
    goto LABEL_50;
  v44 = (uint16_t)(v43[1] + (*v43 << 8));
  if ( !OT::hb_sanitize_context_t::check_array(a2, v43, 2u, v44) )
    goto LABEL_50;
  if ( v44 == 0 )
    return v3;
  v40 = v43 + 2;
  if ( v41 > (unsigned int)(uintptr_t)(v43 + 2) || v4 < (unsigned int)(uintptr_t)(v40) || (v42 = 0, v4 - (unsigned int)(uintptr_t)(v40) <= 1) )
  {
LABEL_50:
    v20 = *((uint8_t *)a2 + 12);
    v23 = *((uint32_t *)a2 + 4);
LABEL_51:
    if ( v23 > 0x63 )
      return 0;
    v3 = 0;
    *((uint32_t *)a2 + 4) = v23 + 1;
    if ( v20 != 0 )
    {
      *(uint8_t *)self = 0;
      *((uint8_t *)self + 1) = 0;
      return 1;
    }
    return v3;
  }
  while ( 1 )
  {
    v7 = v40[1];
    v8 = (uint16_t)(v7 + (*v40 << 8));
    if ( v7 + (*v40 << 8) == 0 )
      goto LABEL_46;
    v36 = &v43[v8];
    if ( (unsigned int)(uintptr_t)(&v43[v8]) < v41 )
      goto LABEL_42;
    if ( v4 < (unsigned int)(uintptr_t)(v36) )
      goto LABEL_42;
    if ( v4 - (unsigned int)(uintptr_t)(v36) <= 5 )
      goto LABEL_42;
    v9 = v36 + 4;
    if ( v41 > (unsigned int)(uintptr_t)(v36 + 4) )
      goto LABEL_42;
    if ( v4 < (unsigned int)(uintptr_t)(v9) )
      goto LABEL_42;
    if ( v4 - (unsigned int)(uintptr_t)(v9) <= 1 )
      goto LABEL_42;
    v33 = v36 + 4;
    v37 = (uint16_t)(v36[5] + (v36[4] << 8));
    if ( !OT::hb_sanitize_context_t::check_array(a2, v36 + 4, 2u, v37) )
      goto LABEL_42;
    if ( (v36[3] & 0x10) != 0 )
    {
      v10 = (unsigned int)(uintptr_t)(v33) + 2 * v37 + 2;
      if ( v41 > v10 || v4 < v10 || v4 - v10 <= 1 )
        goto LABEL_42;
    }
    v11 = (*v36 << 8) + v36[1];
    v39 = v11;
    if ( (unsigned int)(uintptr_t)(v33) < v41 )
      goto LABEL_42;
    if ( v4 < (unsigned int)(uintptr_t)(v33) )
      goto LABEL_42;
    if ( v4 - (unsigned int)(uintptr_t)(v33) <= 1 )
      goto LABEL_42;
    v12 = OT::hb_sanitize_context_t::check_array(a2, v33, 2u, v37);
    v13 = v36 + 4;
    if ( !v12 )
      goto LABEL_42;
    if ( v37 != 0 )
    {
      v14 = v36 + 6;
      if ( v41 > (unsigned int)(uintptr_t)(v36 + 6) )
        goto LABEL_42;
      if ( v4 < (unsigned int)(uintptr_t)(v14) )
        goto LABEL_42;
      v15 = v4;
      v16 = 0;
      if ( v15 - (unsigned int)(uintptr_t)(v14) <= 1 )
        goto LABEL_42;
      while ( 1 )
      {
        v17 = v14[1];
        if ( v17 + (*v14 << 8) != 0 )
        {
          v34 = v13;
          v18 = OT::SubstLookupSubTable::sanitize(
                  (OT::SubstLookupSubTable::Self *)&v36[(uint16_t)(v17 + (*v14 << 8))],
                  a2,
                  v39);
          v13 = v34;
          if ( v18 == 0 )
          {
            v19 = *((uint32_t *)a2 + 4);
            v20 = *((uint8_t *)a2 + 12);
            if ( v19 > 0x63 )
              return 0;
            v21 = v19 + 1;
            *((uint32_t *)a2 + 4) = v21;
            if ( v20 == 0 )
              goto LABEL_43;
            *v14 = 0;
            v14[1] = 0;
          }
        }
        if ( ++v16 >= v37 )
          break;
        v14 = &v13[2 * v16 + 2];
        if ( (unsigned int)(uintptr_t)(v14) >= *((uint32_t *)a2 + 1) )
        {
          v22 = *((uint32_t *)a2 + 2);
          if ( (unsigned int)(uintptr_t)(v14) <= v22 && v22 - (unsigned int)(uintptr_t)(v14) > 1 )
            continue;
        }
        goto LABEL_42;
      }
      v11 = (*v36 << 8) + v36[1];
    }
    if ( v11 != 7 )
      goto LABEL_46;
    v35 = v13;
    subtable = OT::SubstLookup::get_subtable((OT::SubstLookup::Self *)v36, 0);
    type = OT::Extension_OT_ExtensionSubst_bacd81::get_type((OT::Extension<OT::ExtensionSubst> *)subtable);
    v28 = (uint16_t)(v36[5] + (v36[4] << 8));
    if ( v28 <= 1 )
      goto LABEL_46;
    v38 = 1;
    while ( 1 )
    {
      v30 = (char *)&v35[2 * v38 + 2];
      if ( v38 >= v28 )
        v30 = (char *)&unk_2116E00;
      v31 = (uint16_t)(((uint8_t)*v30 << 8) + (uint8_t)v30[1]);
      v32 = &v36[v31];
      if ( v31 == 0 )
        v32 = (uint8_t *)&unk_2116E00;
      v29 = v32[1] + (*v32 << 8) == 1 ? (uint16_t)(v32[3] + (v32[2] << 8)) : 0;
      if ( type != v29 )
        break;
      if ( v28 <= ++v38 )
        goto LABEL_46;
    }
LABEL_42:
    v20 = *((uint8_t *)a2 + 12);
    v21 = *((uint32_t *)a2 + 4);
LABEL_43:
    if ( v21 > 0x63 )
      return 0;
    v23 = v21 + 1;
    *((uint32_t *)a2 + 4) = v23;
    if ( v20 == 0 )
      goto LABEL_51;
    *v40 = 0;
    v40[1] = 0;
LABEL_46:
    if ( v44 <= ++v42 )
      return 1;
    v24 = (unsigned int)(uintptr_t)(&v43[2 * v42 + 2]);
    v40 = (uint8_t *)v24;
    v41 = *((uint32_t *)a2 + 1);
    if ( v24 >= v41 )
    {
      v4 = *((uint32_t *)a2 + 2);
      if ( v24 <= v4 && v4 - v24 > 1 )
        continue;
    }
    goto LABEL_50;
  }
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionSubst_bacd81::get_subtable_OT_SubstLookupSubTable_403ea8  (binary VA: 0x12da8e0)
// Original: OT::Extension<OT::ExtensionSubst>::get_subtable<OT::SubstLookupSubTable>
// ----------------------------------------------------------------------------
char * OT::Extension_OT_ExtensionSubst_bacd81::get_subtable_OT_SubstLookupSubTable_403ea8(OT::Extension<OT::ExtensionSubst> *self)
{
  int v2;

  if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) == 1
    && (v2 = *((uint8_t *)self + 7)
           + (*((uint8_t *)self + 5) << 16)
           + (*((uint8_t *)self + 4) << 24)
           + (*((uint8_t *)self + 6) << 8)) != 0 )
  {
    return (char *)self + v2;
  }
  else
  {
    return (char *)&unk_2116E00;
  }
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_Anchor_OT_IntType_uns_766844::sanitize  (binary VA: 0x12da950)
// Original: OT::OffsetTo<OT::Anchor,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_Anchor_OT_IntType_uns_766844::sanitize(OT::OffsetTo<OT::Anchor::Self, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  unsigned int v5;
  char *v6;
  unsigned int v7;
  char v8;
  int16_t v9;
  bool v10;

  result = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) < v4 )
    return result;
  v5 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v5 )
    return result;
  if ( v5 - (unsigned int)(uintptr_t)(self) <= 1 )
    return result;
  result = 1;
  if ( (*(uint8_t *)self << 8) + *((uint8_t *)self + 1) == 0 )
    return result;
  v6 = &a3[(uint16_t)((*(uint8_t *)self << 8) + *((uint8_t *)self + 1))];
  if ( v4 <= (unsigned int)(uintptr_t)(v6) && v5 >= (unsigned int)(uintptr_t)(v6) && v5 - (unsigned int)(uintptr_t)(v6) > 1 )
  {
    v9 = (uint8_t)v6[1] + ((uint8_t)*v6 << 8);
    switch ( v9 )
    {
      case 1:
        if ( v4 > (unsigned int)(uintptr_t)(v6) || v5 < (unsigned int)(uintptr_t)(v6) )
          break;
        v10 = v5 - (unsigned int)(uintptr_t)(v6) > 5;
        goto LABEL_19;
      case 2:
        v10 = v5 - (unsigned int)(uintptr_t)(v6) > 7;
LABEL_19:
        if ( v10 )
          return 1;
        break;
      case 3:
        if ( v5 - (unsigned int)(uintptr_t)(v6) > 9
          && (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(
                                (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(v6 + 6),
                                a2,
                                v6) != 0
          && (uint8_t)OT::OffsetTo_OT_Device_OT_IntType_uns_36cbc8::sanitize(
                                (OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *)(v6 + 8),
                                a2,
                                v6) != 0 )
        {
          return 1;
        }
        break;
      default:
        return 1;
    }
  }
  v7 = *((uint32_t *)a2 + 4);
  result = 0;
  v8 = *((uint8_t *)a2 + 12);
  if ( v7 <= 0x63 )
  {
    *((uint32_t *)a2 + 4) = v7 + 1;
    if ( v8 != 0 )
    {
      *(uint8_t *)self = 0;
      *((uint8_t *)self + 1) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_MarkArray_OT_IntType_17f39c::sanitize  (binary VA: 0x12daac0)
// Original: OT::OffsetTo<OT::MarkArray,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_MarkArray_OT_IntType_17f39c::sanitize(OT::OffsetTo<OT::MarkArray, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  int16_t v6;
  uint8_t *v7;
  bool v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  char v13;
  unsigned int v14;
  char v15;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;

  v3 = 0;
  v4 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v4 )
  {
    v5 = *((uint32_t *)a2 + 2);
    v20 = v5;
    if ( (unsigned int)(uintptr_t)(self) <= v5 && v5 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      v3 = 1;
      v6 = *(uint8_t *)self << 8;
      if ( v6 + *((uint8_t *)self + 1) != 0 )
      {
        v7 = (uint8_t *)&a3[(uint16_t)(v6 + *((uint8_t *)self + 1))];
        if ( v4 <= (unsigned int)(uintptr_t)(v7) && v5 >= (unsigned int)(uintptr_t)(v7) && v5 - (unsigned int)(uintptr_t)(v7) > 1 )
        {
          v17 = (uint16_t)((*v7 << 8) + v7[1]);
          v19 = *((uint32_t *)a2 + 1);
          v8 = OT::hb_sanitize_context_t::check_array(a2, v7, 4u, v17);
          v9 = v17;
          if ( v8 )
          {
            if ( v17 == 0 )
              return v3;
            v10 = (unsigned int)(uintptr_t)(v7 + 2);
            if ( v19 <= (unsigned int)(uintptr_t)(v7 + 2) && v20 >= v10 )
            {
              v11 = 0;
              if ( v20 - v10 > 3 )
              {
                do
                {
                  v18 = v9;
                  v13 = OT::OffsetTo_OT_Anchor_OT_IntType_uns_766844::sanitize(
                          (OT::OffsetTo<OT::Anchor::Self, OT::IntType<unsigned short, 2u>> *)(v10 + 2),
                          a2,
                          (char *)v7);
                  v9 = v18;
                  if ( v13 == 0 )
                    break;
                  if ( v18 <= ++v11 )
                    return 1;
                  v10 = (unsigned int)(uintptr_t)(&v7[4 * v11 + 2]);
                  if ( v10 < *((uint32_t *)a2 + 1) )
                    break;
                  v12 = *((uint32_t *)a2 + 2);
                  if ( v10 > v12 )
                    break;
                }
                while ( v12 - v10 > 3 );
              }
            }
          }
        }
        v14 = *((uint32_t *)a2 + 4);
        v3 = 0;
        v15 = *((uint8_t *)a2 + 12);
        if ( v14 <= 0x63 )
        {
          *((uint32_t *)a2 + 4) = v14 + 1;
          if ( v15 != 0 )
          {
            *(uint8_t *)self = 0;
            *((uint8_t *)self + 1) = 0;
            return 1;
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OT::MarkLigPosFormat1::sanitize  (binary VA: 0x12dad50)
// Original: OT::MarkLigPosFormat1::sanitize
// ----------------------------------------------------------------------------
int OT::MarkLigPosFormat1::sanitize(OT::MarkLigPosFormat1::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  OT::hb_sanitize_context_t::Self *v2;
  OT::MarkLigPosFormat1::Self *v3;
  int v4;
  unsigned int v5;
  char *v7;
  unsigned int v8;
  unsigned int v9;
  int16_t v10;
  uint8_t *v11;
  int v12;
  unsigned int v13;
  char v14;
  char *v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;

  v2 = a2;
  v3 = self;
  v4 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= *((uint32_t *)a2 + 1) )
  {
    v5 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v5
      && v5 - (unsigned int)(uintptr_t)(self) > 0xB
      && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                            (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::MarkLigPosFormat1::Self *)((char *)self + 2)),
                            a2,
                            (char *)self) != 0
      && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                            (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::MarkLigPosFormat1::Self *)((char *)self + 4)),
                            a2,
                            (char *)self) != 0
      && (uint8_t)OT::OffsetTo_OT_MarkArray_OT_IntType_17f39c::sanitize(
                            (OT::OffsetTo<OT::MarkArray, OT::IntType<unsigned short, 2U>> *)((OT::MarkLigPosFormat1::Self *)((char *)self + 8)),
                            a2,
                            (char *)self) != 0 )
    {
      v7 = (char *)self + 10;
      v16 = (uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8));
      v8 = *((uint32_t *)a2 + 1);
      if ( (unsigned int)(uintptr_t)(self) + 10 >= v8 )
      {
        v9 = *((uint32_t *)a2 + 2);
        v17 = v9;
        if ( (unsigned int)(uintptr_t)(v7) <= v9 && v9 - (unsigned int)(uintptr_t)(v7) > 1 )
        {
          v10 = *((uint8_t *)self + 11);
          v4 = 1;
          if ( v10 + (*((uint8_t *)self + 10) << 8) != 0 )
          {
            v11 = (uint8_t *)self + (uint16_t)(v10 + (*((uint8_t *)self + 10) << 8));
            if ( v8 <= (unsigned int)(uintptr_t)(v11) && v17 >= (unsigned int)(uintptr_t)(v11) && v17 - (unsigned int)(uintptr_t)(v11) > 1 )
            {
              v15 = (char *)self + (uint16_t)(v10 + (*((uint8_t *)self + 10) << 8));
              v18 = (uint16_t)(v11[1] + (*v11 << 8));
              if ( OT::hb_sanitize_context_t::check_array(a2, v11, 2u, v18) )
              {
                v12 = 0;
                if ( v18 == 0 )
                  return 1;
                while ( (uint8_t)OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>(
                                           (OT::OffsetTo<OT::AnchorMatrix, OT::IntType<unsigned short, 2u>> *)&v15[2 * v12 + 2],
                                           a2,
                                           v15,
                                           v16) != 0 )
                {
                  if ( v18 <= ++v12 )
                    return 1;
                }
                v2 = a2;
                v3 = self;
              }
            }
            v13 = *((uint32_t *)v2 + 4);
            v4 = 0;
            v14 = *((uint8_t *)v2 + 12);
            if ( v13 <= 0x63 )
            {
              *((uint32_t *)v2 + 4) = v13 + 1;
              if ( v14 != 0 )
              {
                *((uint8_t *)v3 + 10) = 0;
                *((uint8_t *)v3 + 11) = 0;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionPos_0f4160::sanitize  (binary VA: 0x12daf10)
// Original: OT::Extension<OT::ExtensionPos>::sanitize
// ----------------------------------------------------------------------------
int OT::Extension_OT_ExtensionPos_0f4160::sanitize(OT::Extension<OT::ExtensionPos> *self, OT::hb_sanitize_context_t::Self *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  int v5;

  result = 0;
  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v3 )
  {
    v4 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v4 && v4 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
        return 1;
      if ( v3 <= (unsigned int)(uintptr_t)(self) && *((uint32_t *)a2 + 2) >= (unsigned int)(uintptr_t)(self) && v4 - (unsigned int)(uintptr_t)(self) > 7 )
      {
        v5 = (*((uint8_t *)self + 5) << 16)
           + (*((uint8_t *)self + 4) << 24)
           + (*((uint8_t *)self + 6) << 8)
           + *((uint8_t *)self + 7);
        if ( v5 != 0 )
          return OT::PosLookupSubTable::sanitize(
                   (OT::Extension<OT::ExtensionPos> *)((char *)self + v5),
                   a2,
                   (uint16_t)((*((uint8_t *)self + 2) << 8) + *((uint8_t *)self + 3)));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::PosLookupSubTable::sanitize  (binary VA: 0x12dafe0)
// Original: OT::PosLookupSubTable::sanitize
// ----------------------------------------------------------------------------
int OT::PosLookupSubTable::sanitize(OT::PosLookupSubTable::Self *self, OT::hb_sanitize_context_t::Self *a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  OT::PosLookupSubTable::Self *v5;
  unsigned int v7;
  bool v8;
  char *v9;
  unsigned int v10;
  int v11;
  char *v12;
  char *v13;
  unsigned int v14;

  v3 = *((uint32_t *)a2 + 1);
  v4 = 0;
  if ( (unsigned int)(uintptr_t)(self) >= v3 )
  {
    v5 = *((OT::PosLookupSubTable::Self **)a2 + 2);
    if ( self <= v5 && (unsigned int)(v5 - self) > 1 )
    {
      switch ( a3 )
      {
        case 1u:
          v4 = OT::SinglePos::sanitize((OT::SinglePos::Self *)(self), a2);
          break;
        case 2u:
          v4 = OT::PairPos::sanitize((OT::PairPos::Self *)(self), a2);
          break;
        case 3u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= self && (unsigned int)(v5 - self) > 1 )
          {
            if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
              goto LABEL_5;
            if ( (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                    (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::PosLookupSubTable::Self *)((char *)self + 2)),
                                    a2,
                                    (char *)self) != 0 )
            {
              v9 = (char *)self + 4;
              v13 = (char *)self + 4;
              if ( (unsigned int)(uintptr_t)(self) + 4 >= *((uint32_t *)a2 + 1) )
              {
                v10 = *((uint32_t *)a2 + 2);
                if ( (unsigned int)(uintptr_t)(v9) <= v10 && v10 - (unsigned int)(uintptr_t)(v9) > 1 )
                {
                  v14 = (uint16_t)(*((uint8_t *)self + 5) + (*((uint8_t *)self + 4) << 8));
                  if ( OT::hb_sanitize_context_t::check_array(a2, v13, 4u, v14) )
                  {
                    v11 = 0;
                    if ( v14 == 0 )
                      goto LABEL_5;
                    while ( 1 )
                    {
                      v12 = &v13[4 * v11];
                      if ( (uint8_t)OT::OffsetTo_OT_Anchor_OT_IntType_uns_766844::sanitize(
                                              (OT::OffsetTo<OT::Anchor::Self, OT::IntType<unsigned short, 2u>> *)(v12 + 2),
                                              a2,
                                              (char *)self) == 0
                        || (uint8_t)OT::OffsetTo_OT_Anchor_OT_IntType_uns_766844::sanitize(
                                              (OT::OffsetTo<OT::Anchor::Self, OT::IntType<unsigned short, 2u>> *)(v12 + 4),
                                              a2,
                                              (char *)self) == 0 )
                      {
                        break;
                      }
                      if ( v14 <= ++v11 )
                        goto LABEL_5;
                    }
                    v4 = 0;
                  }
                }
              }
            }
          }
          break;
        case 4u:
        case 6u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= self )
          {
            v8 = v5 == self;
            v7 = v5 - self;
            if ( !v8 && v7 != 1 )
            {
              if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
                goto LABEL_5;
              if ( v7 > 0xB
                && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                      (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::PosLookupSubTable::Self *)((char *)self + 2)),
                                      a2,
                                      (char *)self) != 0
                && (uint8_t)OT::OffsetTo_OT_Coverage_OT_IntType_u_936947::sanitize(
                                      (OT::OffsetTo<OT::Coverage::Self, OT::IntType<unsigned short, 2U>> *)((OT::PosLookupSubTable::Self *)((char *)self + 4)),
                                      a2,
                                      (char *)self) != 0
                && (uint8_t)OT::OffsetTo_OT_MarkArray_OT_IntType_17f39c::sanitize(
                                      (OT::OffsetTo<OT::MarkArray, OT::IntType<unsigned short, 2U>> *)((OT::PosLookupSubTable::Self *)((char *)self + 8)),
                                      a2,
                                      (char *)self) != 0 )
              {
                v4 = OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>(
                       (OT::PosLookupSubTable::Self *)((char *)self + 10),
                       a2,
                       (char *)self,
                       (uint16_t)(*((uint8_t *)self + 7) + (*((uint8_t *)self + 6) << 8)));
              }
            }
          }
          break;
        case 5u:
          v4 = 0;
          if ( v3 <= (unsigned int)(uintptr_t)(self) && v5 >= self && (unsigned int)(v5 - self) > 1 )
          {
            if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 1 )
              goto LABEL_5;
            v4 = OT::MarkLigPosFormat1::sanitize((OT::MarkLigPosFormat1::Self *)(self), a2);
          }
          break;
        case 7u:
          v4 = OT::Context::sanitize((OT::Context::Self *)(self), a2);
          break;
        case 8u:
          v4 = OT::ChainContext::sanitize((OT::ChainContext::Self *)(self), a2);
          break;
        case 9u:
          v4 = OT::Extension_OT_ExtensionPos_0f4160::sanitize((OT::Extension<OT::ExtensionPos> *)(self), a2);
          break;
        default:
LABEL_5:
          v4 = 1;
          break;
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: OT::Sanitizer_OT_GDEF_e0f973::sanitize  (binary VA: 0x12db2c0)
// Original: OT::Sanitizer<OT::GDEF>::sanitize
// ----------------------------------------------------------------------------
int * OT::Sanitizer_OT_GDEF_e0f973::sanitize(int *a1)
{
  int *v1;
  OT::GDEF::Self *data;
  int length;
  OT::GDEF::Self *v4;
  char v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  typedef OT::GDEF::Self *_g4_t_data_writable;
  typedef char *_g4_t_v10;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int *_g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_data_writable)) > _g4_s2 ? (20u + sizeof(_g4_t_data_writable)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v13)) > _g4_s6 ? (36u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_data_writable &data_writable = *reinterpret_cast<_g4_t_data_writable *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);

  v8 = 0;
  data_writable = nullptr;
  v10 = nullptr;
  v12 = 0;
  v1 = (int *)(hb_blob_reference(a1));
  v13 = v1;
  v11 = 0;
  while ( 1 )
  {
    data = (OT::GDEF::Self *)hb_blob_get_data((int)(uintptr_t)(v1), nullptr);
    data_writable = data;
    length = hb_blob_get_length((int)(uintptr_t)(v13));
    v12 = 0;
    v10 = (char *)data + length;
    v4 = data_writable;
    v8 = 0;
    if ( data_writable == nullptr )
      goto LABEL_8;
    if ( (uint8_t)OT::GDEF::sanitize(data_writable, (OT::hb_sanitize_context_t::Self *)&v8) != 0 )
      break;
    if ( v12 == 0 )
      goto LABEL_12;
    if ( v11 != 0 )
      goto LABEL_12;
    data_writable = (OT::GDEF::Self *)hb_blob_get_data_writable((int)(uintptr_t)(a1), nullptr);
    v10 = (char *)data_writable + hb_blob_get_length((int)(uintptr_t)(a1));
    if ( data_writable == nullptr )
      goto LABEL_12;
    v11 = 1;
    v1 = v13;
  }
  if ( v12 == 0 )
  {
LABEL_8:
    hb_blob_destroy(v13);
    return a1;
  }
  v12 = 0;
  v6 = OT::GDEF::sanitize(v4, (OT::hb_sanitize_context_t::Self *)&v8);
  if ( v12 == 0 )
  {
    v7 = v6;
    hb_blob_destroy(v13);
    v13 = nullptr;
    v10 = nullptr;
    data_writable = nullptr;
    if ( v7 == 0 )
      goto LABEL_13;
    return a1;
  }
LABEL_12:
  hb_blob_destroy(v13);
  v13 = nullptr;
  v10 = nullptr;
  data_writable = nullptr;
LABEL_13:
  hb_blob_destroy(a1);
  return (int *)hb_blob_get_empty();
}

// ----------------------------------------------------------------------------
// Function: OT::SingleSubst::dispatch_OT_hb_closure_context_t_768ba0  (binary VA: 0x12db490)
// Original: OT::SingleSubst::dispatch<OT::hb_closure_context_t>
// ----------------------------------------------------------------------------
int OT::SingleSubst::dispatch_OT_hb_closure_context_t_768ba0(uint8_t *a1, int a2)
{
  int16_t v2;
  uint8_t *v4;
  uint16_t v5;
  int v6;
  bool v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  hb_set_t *v13;
  uint8_t *v14;
  int v15;
  uint8_t *v16;
  uint16_t v17;
  uint8_t *v18;
  unsigned int v19;
  hb_set_t *v20;
  int v21;
  int v22;
  uint8_t *v23;
  uint8_t *v24;
  int v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v33)) > _g4_s7 ? (28u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v34)) > _g4_s8 ? (32u + sizeof(_g4_t_v34)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);

  v2 = a1[1] + (*a1 << 8);
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      v16 = (uint8_t *)&unk_2116E00;
      if ( a1[3] + (a1[2] << 8) != 0 )
        v16 = &a1[(uint16_t)(a1[3] + (a1[2] << 8))];
      v17 = v16[1] + (*v16 << 8);
      v30 = v17;
      if ( v17 == 1 )
      {
        v31 = v16;
        v32 = 0;
      }
      else if ( v17 == 2 )
      {
        v25 = 0;
        v7 = v16[3] + (v16[2] << 8) == 0;
        v31 = v16;
        v34 = 0;
        v32 = 0;
        if ( !v7 )
          v25 = (uint16_t)(v16[5] + (v16[4] << 8));
        v33 = v25;
      }
      while ( 1 )
      {
        if ( v30 == 1 )
        {
          v19 = v32;
          v18 = v31;
        }
        else
        {
          if ( v30 != 2 )
            return 0;
          v18 = v31;
          v19 = v32;
        }
        v28 = (uint16_t)(v18[3] + (v18[2] << 8));
        if ( v19 >= v28 )
          break;
        if ( v30 == 1 )
        {
          v22 = (int)(uintptr_t)(&v18[2 * v19 + 4]);
          v23 = (uint8_t *)&unk_2116E00;
          if ( v19 < v28 )
            v23 = (uint8_t *)v22;
          v29 = (uint16_t)((*v23 << 8) + v23[1]) >> 5;
          v21 = 1 << v23[1];
        }
        else
        {
          v29 = (uint16_t)v33 >> 5;
          v21 = 1 << v33;
        }
        v20 = *(hb_set_t **)(a2 + 4);
        if ( (v21 & *((uint32_t *)v20 + v29 + 12)) != 0 )
        {
          if ( v30 != 1 )
            LOWORD(v19) = v34;
          v24 = (uint8_t *)&unk_2116E00;
          if ( (uint16_t)((a1[4] << 8) + a1[5]) > (uint16_t)v19 )
            v24 = &a1[2 * (uint16_t)v19 + 6];
          hb_set_t::add(v20, (uint16_t)((*v24 << 8) + v24[1]));
        }
        OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v30);
      }
    }
    return 0;
  }
  v4 = (uint8_t *)&unk_2116E00;
  if ( a1[3] + (a1[2] << 8) != 0 )
    v4 = &a1[(uint16_t)(a1[3] + (a1[2] << 8))];
  v5 = v4[1] + (*v4 << 8);
  v30 = v5;
  if ( v5 == 1 )
  {
    v31 = v4;
    v32 = 0;
    goto LABEL_19;
  }
  if ( v5 != 2 )
    goto LABEL_19;
  v6 = 0;
  v7 = v4[3] + (v4[2] << 8) == 0;
  v31 = v4;
  v34 = 0;
  v32 = 0;
  if ( !v7 )
    v6 = (uint16_t)(v4[5] + (v4[4] << 8));
  v8 = v30;
  v33 = v6;
  if ( v30 == 1 )
    goto LABEL_20;
LABEL_11:
  if ( v8 == 2 )
  {
    v9 = v31;
    v26 = v32;
    while ( 1 )
    {
      v10 = (uint16_t)(v9[3] + (v9[2] << 8));
      if ( v26 >= v10 )
        return 0;
      if ( v8 == 1 )
        break;
      if ( v8 != 2 )
      {
        v11 = 1;
        v27 = 0;
        LOWORD(v12) = 0;
        goto LABEL_17;
      }
      LOWORD(v12) = v33;
      v13 = *(hb_set_t **)(a2 + 4);
      if ( ((1 << v33) & *((uint32_t *)v13 + ((uint16_t)v33 >> 5) + 12)) != 0 )
LABEL_22:
        hb_set_t::add(v13, (uint16_t)(v12 + a1[5] + (a1[4] << 8)));
LABEL_18:
      OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v30);
LABEL_19:
      v8 = v30;
      if ( v30 != 1 )
        goto LABEL_11;
LABEL_20:
      v26 = v32;
      v9 = v31;
    }
    v14 = (uint8_t *)&unk_2116E00;
    v15 = (int)(uintptr_t)(&v9[2 * v26 + 4]);
    if ( v26 < v10 )
      v14 = (uint8_t *)v15;
    v12 = (uint16_t)((*v14 << 8) + v14[1]);
    v27 = v12 >> 5;
    v11 = 1 << v14[1];
LABEL_17:
    v13 = *(hb_set_t **)(a2 + 4);
    if ( (v11 & *((uint32_t *)v13 + v27 + 12)) != 0 )
      goto LABEL_22;
    goto LABEL_18;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::Context::dispatch_OT_hb_closure_context_t_768ba0  (binary VA: 0x12db8c0)
// Original: OT::Context::dispatch<OT::hb_closure_context_t>
// ----------------------------------------------------------------------------
int OT::Context::dispatch_OT_hb_closure_context_t_768ba0(uint8_t *a1, int a2)
{
  int16_t v2;
  uint16_t v4;
  uint8_t *v5;
  int16_t v6;
  unsigned int v7;
  uint8_t *v8;
  int16_t v9;
  uint8_t *v10;
  char v11;
  uint8_t *v12;
  uint16_t v13;
  uint8_t *v14;
  OT::Coverage::Self *v15;
  uint16_t v16;
  uint8_t *v17;
  OT::Coverage::Self *v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  OT::Coverage::Self *v23;
  int v24;
  uint8_t *v25;
  int16_t v26;
  int16_t v27;
  unsigned int v28;
  int16_t v29;
  unsigned int v30;
  uint8_t *v31;
  unsigned int v32;
  uint8_t *v33;
  uint16_t v34;
  uint8_t *v35;
  unsigned int v36;
  typedef int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef uint8_t _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef uint8_t _g4_t_v46;
  typedef void (*_g4_t_v47)(int, uint32_t);
  typedef uint8_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52;
  typedef uint8_t *_g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef uint32_t _g4_t_v55[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v37)) > _g4_s0 ? (12u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v38)) > _g4_s1 ? (16u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v39)) > _g4_s2 ? (20u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v40)) > _g4_s3 ? (20u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v41)) > _g4_s4 ? (24u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v42)) > _g4_s5 ? (28u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v43)) > _g4_s6 ? (28u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v44)) > _g4_s7 ? (28u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v45)) > _g4_s8 ? (32u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v46)) > _g4_s9 ? (32u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v47)) > _g4_s10 ? (36u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v48)) > _g4_s11 ? (40u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v49)) > _g4_s12 ? (40u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v50)) > _g4_s13 ? (40u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v51)) > _g4_s14 ? (40u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v52)) > _g4_s15 ? (44u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v53)) > _g4_s16 ? (44u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v54)) > _g4_s17 ? (60u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v55)) > _g4_s18 ? (64u + sizeof(_g4_t_v55)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);

  v2 = a1[1] + (*a1 << 8);
  switch ( v2 )
  {
    case 2:
      v23 = (OT::Coverage::Self *)&a1[(uint16_t)(a1[3] + (a1[2] << 8))];
      if ( a1[3] + (a1[2] << 8) == 0 )
        v23 = (OT::Coverage::Self *)&unk_2116E00;
      if ( (uint8_t)OT::Coverage::intersects(v23, *(const hb_set_t **)(a2 + 4)) == 0 )
        return 0;
      v24 = (uint16_t)(a1[5] + (a1[4] << 8));
      v25 = &a1[v24];
      v55[0] = (uint32_t)(uintptr_t)(sub_12C7A90);
      if ( v24 == 0 )
        v25 = (uint8_t *)&unk_2116E00;
      v26 = a1[6];
      v53 = v25;
      v55[1] = (uint32_t)(uintptr_t)(v25);
      v27 = a1[7];
      v38 = (uint16_t)(v27 + (v26 << 8));
      if ( v27 + (v26 << 8) == 0 )
        return 0;
      v28 = 0;
      while ( 1 )
      {
        v40 = *(uint32_t *)(a2 + 4);
        v29 = v53[1] + (*v53 << 8);
        if ( v29 == 1 )
        {
          v44 = (uint16_t)(v53[5] + (v53[4] << 8));
          if ( v28 == 0 )
          {
            v54 = 0xFFFFFFFF;
            if ( hb_set_next(v40, &v54) == 0 )
              goto LABEL_47;
            v36 = (uint16_t)(v53[3] + (v53[2] << 8));
            if ( v36 > v54 )
              goto LABEL_58;
            v54 = v44 + v36 - 1;
            if ( hb_set_next(v40, &v54) != 0 )
              goto LABEL_58;
          }
          if ( v44 != 0 )
          {
            v30 = 0;
            while ( 1 )
            {
              v31 = &v53[2 * v30 + 6];
              if ( v30 >= (uint16_t)((v53[4] << 8) + v53[5]) )
                v31 = (uint8_t *)&unk_2116E00;
              if ( v28 == (uint16_t)(v31[1] + (*v31 << 8)) )
              {
                v32 = v30 + (uint16_t)(v53[3] + (v53[2] << 8));
                if ( v32 <= 0xFFFF && ((1 << v32) & *(uint32_t *)(v40 + 4 * (v32 >> 5) + 48)) != 0 )
                  break;
              }
              if ( v44 <= ++v30 )
                goto LABEL_47;
            }
LABEL_58:
            v33 = &a1[2 * v28 + 8];
            if ( v28 >= (uint16_t)((a1[6] << 8) + a1[7]) )
              v33 = (uint8_t *)&unk_2116E00;
            v34 = v33[1] + (*v33 << 8);
            v35 = &a1[v34];
            if ( v34 == 0 )
              v35 = (uint8_t *)&unk_2116E00;
            OT::RuleSet::closure(v35, (uint32_t *)a2, (int)(uintptr_t)(v55));
          }
        }
        else if ( v29 == 2 && (uint8_t)sub_12C7830((int)(uintptr_t)(v53), v40, v28) != 0 )
        {
          goto LABEL_58;
        }
LABEL_47:
        if ( v38 <= ++v28 )
          return 0;
      }
    case 3:
      v15 = (OT::Coverage::Self *)&a1[(uint16_t)(a1[7] + (a1[6] << 8))];
      if ( a1[7] + (a1[6] << 8) == 0 )
        v15 = (OT::Coverage::Self *)&unk_2116E00;
      if ( (uint8_t)OT::Coverage::intersects(v15, *(const hb_set_t **)(a2 + 4)) != 0 )
      {
        v16 = a1[3] + (a1[2] << 8);
        v41 = (int)(uintptr_t)(&a1[2 * v16 + 6]);
        v45 = a1[4];
        v43 = a1[5];
        if ( v16 == 0 || v16 == 1 )
        {
LABEL_32:
          if ( v43 + (v45 << 8) != 0 )
          {
            v51 = (uint16_t)(v43 + (v45 << 8)) + 1;
            v19 = 1;
            v20 = a2;
            v21 = *(uint32_t *)(a2 + 12);
            v22 = (uint8_t *)(v41 + 2);
            do
            {
              v46 = *v22;
              v52 = v22[1];
              if ( v21 != 0 )
              {
                v47 = *(void (**)(int, uint32_t))(v20 + 8);
                if ( v47 != nullptr )
                {
                  *(uint32_t *)(v20 + 12) = v21 - 1;
                  v37 = v20;
                  v47(v20, (uint16_t)((v46 << 8) + v52));
                  v20 = v37;
                  v21 = *(uint32_t *)(v37 + 12) + 1;
                  *(uint32_t *)(v37 + 12) = v21;
                }
              }
              ++v19;
              v22 += 4;
            }
            while ( v19 != v51 );
          }
        }
        else
        {
          v39 = v16;
          v50 = 1;
          v17 = a1 + 8;
          while ( 1 )
          {
            v18 = (OT::Coverage::Self *)&a1[(uint16_t)(v17[1] + (*v17 << 8))];
            if ( v17[1] + (*v17 << 8) == 0 )
              v18 = (OT::Coverage::Self *)&unk_2116E00;
            if ( (uint8_t)OT::Coverage::intersects(v18, *(const hb_set_t **)(a2 + 4)) == 0 )
              break;
            ++v50;
            v17 += 2;
            if ( v39 == v50 )
              goto LABEL_32;
          }
        }
      }
      break;
    case 1:
      v4 = a1[3] + (a1[2] << 8);
      v55[1] = 0;
      v5 = &a1[v4];
      v55[0] = (uint32_t)(uintptr_t)(sub_12C7200);
      if ( v4 == 0 )
        v5 = (uint8_t *)&unk_2116E00;
      v48 = v5;
      v6 = a1[5];
      v42 = (uint16_t)(v6 + (a1[4] << 8));
      if ( v6 + (a1[4] << 8) != 0 )
      {
        v7 = 0;
        v8 = v48;
        while ( 1 )
        {
          v49 = *(uint32_t *)(a2 + 4);
          v9 = v8[1] + (*v8 << 8);
          if ( v9 == 1 )
            break;
          if ( v9 == 2 )
          {
            v11 = sub_12C8210((int)(uintptr_t)(v8), v49, v7);
LABEL_15:
            if ( v11 != 0 )
            {
              v12 = &a1[2 * v7 + 6];
              if ( (uint16_t)((a1[4] << 8) + a1[5]) <= v7 )
                v12 = (uint8_t *)&unk_2116E00;
              v13 = v12[1] + (*v12 << 8);
              v14 = &a1[v13];
              if ( v13 == 0 )
                v14 = (uint8_t *)&unk_2116E00;
              OT::RuleSet::closure(v14, (uint32_t *)a2, (int)(uintptr_t)(v55));
            }
          }
          if ( v42 <= ++v7 )
            return 0;
        }
        v10 = &v8[2 * v7 + 4];
        if ( (uint16_t)((v8[2] << 8) + v8[3]) <= v7 )
          v10 = (uint8_t *)&unk_2116E00;
        v11 = ((1 << v10[1]) & *(uint32_t *)(v49 + 4 * ((uint16_t)((*v10 << 8) + v10[1]) >> 5) + 48)) != 0;
        goto LABEL_15;
      }
      break;
    default:
      break;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::SingleSubst::dispatch_OT_hb_collect_glyphs_con_a8586d  (binary VA: 0x12dbe40)
// Original: OT::SingleSubst::dispatch<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::SingleSubst::dispatch_OT_hb_collect_glyphs_con_a8586d(uint8_t *a1, int a2)
{
  int16_t v2;
  uint8_t *v4;
  uint16_t v5;
  int v6;
  bool v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  uint16_t v14;
  uint8_t *v15;
  uint8_t *v16;
  unsigned int v17;
  uint8_t *v18;
  int v19;
  int v20;
  typedef uint16_t _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_i;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (14u + sizeof(_g4_t_v21)) > _g4_s0 ? (14u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_i)) > _g4_s3 ? (28u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v27)) > _g4_s6 ? (36u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v28)) > _g4_s7 ? (40u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v29)) > _g4_s8 ? (44u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v30)) > _g4_s9 ? (48u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 14u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);

  v2 = a1[1] + (*a1 << 8);
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
      return 0;
    v13 = (uint8_t *)&unk_2116E00;
    if ( a1[3] + (a1[2] << 8) != 0 )
      v13 = &a1[(uint16_t)(a1[3] + (a1[2] << 8))];
    v14 = v13[1] + (*v13 << 8);
    v26 = v14;
    if ( v14 == 1 )
    {
      v27 = v13;
      v28 = 0;
    }
    else if ( v14 == 2 )
    {
      v20 = 0;
      v7 = v13[3] + (v13[2] << 8) == 0;
      v27 = v13;
      v30 = 0;
      v28 = 0;
      if ( !v7 )
        v20 = (uint16_t)(v13[5] + (v13[4] << 8));
      v29 = v20;
    }
    while ( 1 )
    {
      if ( v26 == 1 )
      {
        v25 = v28;
        v15 = v27;
      }
      else
      {
        if ( v26 != 2 )
          return 0;
        v15 = v27;
        v25 = v28;
      }
      v22 = (uint16_t)(v15[3] + (v15[2] << 8));
      if ( v25 >= v22 )
        return 0;
      if ( v26 == 1 )
      {
        v18 = (uint8_t *)&unk_2116E00;
        v19 = (int)(uintptr_t)(&v15[2 * v25 + 4]);
        if ( v25 < v22 )
          v18 = (uint8_t *)v19;
        v17 = (uint16_t)((*v18 << 8) + v18[1]);
      }
      else
      {
        v17 = (uint16_t)v29;
      }
      hb_set_t::add(*(hb_set_t **)(a2 + 8), v17);
      if ( v26 == 1 )
      {
        v21 = v28;
      }
      else
      {
        if ( v26 != 2 )
        {
          v16 = (uint8_t *)&unk_2116E00;
          goto LABEL_36;
        }
        v21 = v30;
      }
      v16 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)((a1[4] << 8) + a1[5]) > v21 )
        v16 = &a1[2 * v21 + 6];
LABEL_36:
      hb_set_t::add(*(hb_set_t **)(a2 + 16), (uint16_t)((*v16 << 8) + v16[1]));
      OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v26);
    }
  }
  v4 = (uint8_t *)&unk_2116E00;
  if ( a1[3] + (a1[2] << 8) != 0 )
    v4 = &a1[(uint16_t)(a1[3] + (a1[2] << 8))];
  v5 = v4[1] + (*v4 << 8);
  v26 = v5;
  if ( v5 == 1 )
  {
    v27 = v4;
    v28 = 0;
    goto LABEL_18;
  }
  if ( v5 != 2 )
    goto LABEL_18;
  v6 = 0;
  v7 = v4[3] + (v4[2] << 8) == 0;
  v27 = v4;
  v30 = 0;
  v28 = 0;
  if ( !v7 )
    v6 = (uint16_t)(v4[5] + (v4[4] << 8));
  v8 = v26;
  v29 = v6;
  if ( v26 == 1 )
    goto LABEL_19;
LABEL_11:
  if ( v8 == 2 )
  {
    v9 = v27;
    for ( i = v28; ; i = v28 )
    {
      v23 = (uint16_t)(v9[3] + (v9[2] << 8));
      if ( i >= v23 )
        break;
      if ( v8 == 1 )
      {
        v11 = (uint8_t *)&unk_2116E00;
        v12 = (int)(uintptr_t)(&v9[2 * i + 4]);
        if ( i < v23 )
          v11 = (uint8_t *)v12;
        v10 = (uint16_t)((*v11 << 8) + v11[1]);
      }
      else
      {
        v10 = 0;
        if ( v8 == 2 )
          v10 = (uint16_t)v29;
      }
      hb_set_t::add(*(hb_set_t **)(a2 + 8), v10);
      hb_set_t::add(*(hb_set_t **)(a2 + 16), (uint16_t)(a1[5] + (a1[4] << 8) + v10));
      OT::Coverage::Iter::next((OT::Coverage::Iter::Self *)&v26);
LABEL_18:
      v8 = v26;
      if ( v26 != 1 )
        goto LABEL_11;
LABEL_19:
      v9 = v27;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::Context::dispatch_OT_hb_collect_glyphs_con_a8586d  (binary VA: 0x12dc240)
// Original: OT::Context::dispatch<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::Context::dispatch_OT_hb_collect_glyphs_con_a8586d(uint8_t *a1, int a2)
{
  int v2;
  int16_t v3;
  OT::Coverage::Self *v5;
  uint8_t v6;
  int16_t v7; // bp
  int v8;
  unsigned int v9;
  int16_t v10;
  uint8_t *v11;
  uint16_t v12;
  uint8_t *v13;
  int v14;
  bool v15;
  OT::Coverage::Self *v16;
  OT::Coverage::Self *v17;
  uint8_t *v18;
  uint8_t *v19;
  int v20;
  void *empty;
  uint8_t *v22;
  int v23;
  OT::Coverage::Self *v24;
  OT::Coverage::Self *v25;
  uint8_t v26;
  int16_t v27;
  unsigned int v28;
  int16_t v29;
  uint8_t *v30;
  uint16_t v31;
  uint8_t *v32;
  hb_set_t *v33;
  int i;
  uint16_t v35;
  OT::Coverage::Self *v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef OT::Coverage::Self *_g4_t_v43;
  typedef uint8_t _g4_t_v44;
  typedef OT::Coverage::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v38)) > _g4_s1 ? (4u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v40)) > _g4_s3 ? (8u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v41)) > _g4_s4 ? (12u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v42)) > _g4_s5 ? (12u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v43)) > _g4_s6 ? (16u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v44)) > _g4_s7 ? (16u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v45)) > _g4_s8 ? (16u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v46)) > _g4_s9 ? (20u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v47)) > _g4_s10 ? (20u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v48)) > _g4_s11 ? (40u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v49)) > _g4_s12 ? (44u + sizeof(_g4_t_v49)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);

  v2 = a2;
  v3 = a1[1] + (*a1 << 8);
  switch ( v3 )
  {
    case 1:
      v5 = (OT::Coverage::Self *)&unk_2116E00;
      if ( a1[3] + (a1[2] << 8) != 0 )
        v5 = (OT::Coverage::Self *)&a1[(uint16_t)(a1[3] + (a1[2] << 8))];
      OT::Coverage::add_coverage<hb_set_t>(v5, *(hb_set_t **)(a2 + 8));
      v6 = a1[5];
      v48 = (void *)(sub_12C84C0);
      v49 = nullptr;
      v7 = a1[4] << 8;
      v8 = (uint16_t)(v7 + v6);
      if ( v7 + v6 != 0 )
      {
        v9 = 0;
        v43 = (OT::Coverage::Self *)(v8 - 1);
        v10 = a1[4];
        while ( 1 )
        {
          v11 = (uint8_t *)&unk_2116E00;
          if ( v9 < (uint16_t)(v6 + (v10 << 8)) )
            v11 = &a1[2 * v9 + 6];
          v12 = v11[1] + (*v11 << 8);
          v13 = (uint8_t *)&unk_2116E00;
          if ( v12 != 0 )
            v13 = &a1[v12];
          OT::RuleSet::collect_glyphs(v13, (uint32_t *)a2, (int)(uintptr_t)(&v48));
          if ( (OT::Coverage::Self *)v9 == v43 )
            break;
          v10 = a1[4];
          ++v9;
          v6 = a1[5];
        }
        return 0;
      }
      return 0;
    case 2:
      v22 = (uint8_t *)&unk_2116E00;
      v23 = (uint16_t)(a1[3] + (a1[2] << 8));
      v15 = v23 == 0;
      v24 = (OT::Coverage::Self *)&a1[v23];
      v25 = (OT::Coverage::Self *)&unk_2116E00;
      if ( !v15 )
        v25 = v24;
      OT::Coverage::add_coverage<hb_set_t>(v25, *(hb_set_t **)(a2 + 8));
      v26 = a1[7];
      if ( a1[5] + (a1[4] << 8) != 0 )
        v22 = &a1[(uint16_t)(a1[5] + (a1[4] << 8))];
      v48 = (void *)(sub_12C8630);
      v27 = a1[6];
      v49 = v22;
      if ( (v27 << 8) + v26 == 0 )
        return 0;
      v28 = 0;
      v45 = (OT::Coverage::Self *)((uint16_t)((v27 << 8) + v26) - 1);
      v29 = v27;
      while ( 1 )
      {
        v30 = (uint8_t *)&unk_2116E00;
        if ( v28 < (uint16_t)(v26 + (v29 << 8)) )
          v30 = &a1[2 * v28 + 8];
        v31 = v30[1] + (*v30 << 8);
        v32 = (uint8_t *)&unk_2116E00;
        if ( v31 != 0 )
          v32 = &a1[v31];
        OT::RuleSet::collect_glyphs(v32, (uint32_t *)a2, (int)(uintptr_t)(&v48));
        if ( (OT::Coverage::Self *)v28 == v45 )
          break;
        v29 = a1[6];
        ++v28;
        v26 = a1[7];
      }
      return 0;
    case 3:
      v14 = (uint16_t)(a1[7] + (a1[6] << 8));
      v15 = v14 == 0;
      v16 = (OT::Coverage::Self *)&a1[v14];
      v17 = (OT::Coverage::Self *)&unk_2116E00;
      if ( !v15 )
        v17 = v16;
      v18 = a1 + 8;
      OT::Coverage::add_coverage<hb_set_t>(v17, *(hb_set_t **)(a2 + 8));
      v39 = (uint16_t)(a1[3] + (a1[2] << 8));
      v46 = (uint16_t)(a1[5] + (a1[4] << 8));
      if ( a1[3] + (a1[2] << 8) != 0 && v39 != 1 )
      {
        v33 = *(hb_set_t **)(a2 + 8);
        for ( i = 1; i != v39; ++i )
        {
          v35 = v18[1] + (*v18 << 8);
          v18 += 2;
          v36 = (OT::Coverage::Self *)&a1[v35];
          if ( v35 == 0 )
            v36 = (OT::Coverage::Self *)&unk_2116E00;
          OT::Coverage::add_coverage<hb_set_t>(v36, v33);
        }
        v2 = a2;
      }
      if ( v46 == 0 )
        return 0;
      v19 = &a1[2 * v39 + 8];
      v47 = v46 + 1;
      v20 = 1;
      do
      {
        v40 = *v19;
        v44 = v19[1];
        if ( *(uint32_t *)(v2 + 24) != 0 && *(uint32_t *)(v2 + 20) != 0 )
        {
          v41 = *(void **)(v2 + 16);
          if ( v41 != hb_set_get_empty() )
          {
            v38 = *(uint32_t *)(v2 + 4);
            v37 = *(uint32_t *)(v2 + 8);
            v42 = *(uint32_t *)(v2 + 12);
            empty = hb_set_get_empty();
            *(uint32_t *)(v2 + 12) = (uint32_t)(uintptr_t)(empty);
            *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(empty);
            *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(empty);
            --*(uint32_t *)(v2 + 24);
            (*(void (**)(int, uint32_t))(v2 + 20))(v2, (uint16_t)((v40 << 8) + v44));
            ++*(uint32_t *)(v2 + 24);
            *(uint32_t *)(v2 + 4) = v38;
            *(uint32_t *)(v2 + 12) = v42;
            *(uint32_t *)(v2 + 8) = v37;
          }
        }
        ++v20;
        v19 += 4;
      }
      while ( v20 != v47 );
      return 0;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: OT::ChainContext::dispatch_OT_hb_collect_glyphs_con_a8586d  (binary VA: 0x12dc640)
// Original: OT::ChainContext::dispatch<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::ChainContext::dispatch_OT_hb_collect_glyphs_con_a8586d(OT::ChainContextFormat3::Self *a1, hb_set_t **a2)
{
  int16_t v2;
  OT::Coverage::Self *v4;
  uint8_t v5;
  int16_t v6;
  unsigned int v7;
  int16_t v8;
  uint8_t *v9;
  uint16_t v10;
  uint8_t *v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v2 = *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8);
  switch ( v2 )
  {
    case 1:
      v4 = (OT::Coverage::Self *)&unk_2116E00;
      if ( *((uint8_t *)a1 + 3) + (*((uint8_t *)a1 + 2) << 8) != 0 )
        v4 = (OT::Coverage::Self *)((OT::ChainContextFormat3::Self *)((char *)a1
                                       + (uint16_t)(*((uint8_t *)a1 + 3)
                                                          + (*((uint8_t *)a1 + 2) << 8))));
      OT::Coverage::add_coverage<hb_set_t>(v4, a2[2]);
      v5 = *((uint8_t *)a1 + 5);
      v13[0] = (uint32_t)(uintptr_t)(sub_12C84C0);
      memset(&v13[1], 0, 12);
      v6 = *((uint8_t *)a1 + 4);
      if ( (v6 << 8) + v5 != 0 )
      {
        v7 = 0;
        v12 = (uint16_t)((v6 << 8) + v5) - 1;
        v8 = *((uint8_t *)a1 + 4);
        while ( 1 )
        {
          v9 = (uint8_t *)&unk_2116E00;
          if ( v7 < (uint16_t)(v5 + (v8 << 8)) )
            v9 = (uint8_t *)a1 + 2 * v7 + 6;
          v10 = v9[1] + (*v9 << 8);
          v11 = (uint8_t *)&unk_2116E00;
          if ( v10 != 0 )
            v11 = (uint8_t *)a1 + v10;
          OT::ChainRuleSet::collect_glyphs(v11, (uint32_t *)(a2), (int)(uintptr_t)(v13));
          if ( v7 == v12 )
            break;
          v8 = *((uint8_t *)a1 + 4);
          ++v7;
          v5 = *((uint8_t *)a1 + 5);
        }
        return 0;
      }
      else
      {
        return 0;
      }
    case 2:
      sub_12CD190((uint8_t *)a1, (int)(uintptr_t)(a2));
      return 0;
    case 3:
      OT::ChainContextFormat3::collect_glyphs(a1, a2);
      return 0;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dc7b0)
// Original: OT::Context::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
int OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3(uint8_t *a1, uint32_t *a2)
{
  int16_t v2;
  int result;
  int v4;
  bool v5;
  OT::Coverage::Self *v6;
  OT::Coverage::Self *v7;
  unsigned int coverage;
  int16_t v9;
  int16_t v10;
  uint16_t v11;
  uint8_t *v12;
  uint8_t *v13;
  OT::Coverage::Self *v14;
  int16_t v15;
  int16_t v16;
  uint16_t v17;
  OT::Coverage::Self *v18;
  OT::Coverage::Self *v19;
  int v20;
  OT::ClassDef::Self *v21;
  unsigned int v22;
  int16_t v23;
  int16_t v24;
  uint16_t v25;
  uint8_t *v26;
  typedef unsigned int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v28)) > _g4_s1 ? (24u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v2 = a1[1] + (*a1 << 8);
  switch ( v2 )
  {
    case 1:
      v4 = (uint16_t)(a1[3] + (a1[2] << 8));
      v5 = v4 == 0;
      v6 = (OT::Coverage::Self *)&a1[v4];
      v7 = (OT::Coverage::Self *)&unk_2116E00;
      if ( !v5 )
        v7 = v6;
      coverage = OT::Coverage::get_coverage(v7, *(uint32_t *)(*(uint32_t *)(a2[3] + 100) + 20 * *(uint32_t *)(a2[3] + 84)));
      result = 0;
      if ( coverage != -1 )
      {
        v9 = a1[5];
        v10 = a1[4] << 8;
        v29 = nullptr;
        v11 = v9 + v10;
        v12 = &a1[2 * coverage + 6];
        if ( coverage >= v11 )
          v12 = (uint8_t *)&unk_2116E00;
        v13 = &a1[(uint16_t)(v12[1] + (*v12 << 8))];
        if ( v12[1] + (*v12 << 8) == 0 )
          v13 = (uint8_t *)&unk_2116E00;
        v28 = (void *)(sub_12C7170);
        return OT::RuleSet::apply(v13, a2, (int *)&v28);
      }
      break;
    case 2:
      v17 = a1[3] + (a1[2] << 8);
      v5 = v17 == 0;
      v18 = (OT::Coverage::Self *)&a1[v17];
      v19 = (OT::Coverage::Self *)&unk_2116E00;
      v27 = *(uint32_t *)(*(uint32_t *)(a2[3] + 100) + 20 * *(uint32_t *)(a2[3] + 84));
      if ( !v5 )
        v19 = v18;
      v20 = OT::Coverage::get_coverage(v19, *(uint32_t *)(*(uint32_t *)(a2[3] + 100) + 20 * *(uint32_t *)(a2[3] + 84)));
      result = 0;
      if ( v20 != -1 )
      {
        v21 = (OT::ClassDef::Self *)&a1[(uint16_t)(a1[5] + (a1[4] << 8))];
        if ( a1[5] + (a1[4] << 8) == 0 )
          v21 = (OT::ClassDef::Self *)&unk_2116E00;
        v22 = OT::ClassDef::get_class(v21, v27);
        v23 = a1[7];
        v24 = a1[6] << 8;
        v29 = v21;
        v25 = v24 + v23;
        v26 = &a1[2 * v22 + 8];
        if ( v22 >= v25 )
          v26 = (uint8_t *)&unk_2116E00;
        v13 = &a1[(uint16_t)(v26[1] + (*v26 << 8))];
        if ( v26[1] + (*v26 << 8) == 0 )
          v13 = (uint8_t *)&unk_2116E00;
        v28 = (void *)(sub_12CB1B0);
        return OT::RuleSet::apply(v13, a2, (int *)&v28);
      }
      break;
    case 3:
      v14 = (OT::Coverage::Self *)&unk_2116E00;
      if ( a1[7] + (a1[6] << 8) != 0 )
        v14 = (OT::Coverage::Self *)&a1[(uint16_t)(a1[7] + (a1[6] << 8))];
      if ( OT::Coverage::get_coverage(v14, *(uint32_t *)(*(uint32_t *)(a2[3] + 100) + 20 * *(uint32_t *)(a2[3] + 84))) != -1 )
      {
        v15 = a1[3];
        v16 = a1[2] << 8;
        v29 = a1;
        v28 = (void *)(sub_12CB400);
        return sub_12CBC20(
                 a2,
                 (uint16_t)(v15 + v16),
                 (int)(uintptr_t)(a1 + 8),
                 (uint16_t)(a1[5] + (a1[4] << 8)),
                 &a1[2 * (uint16_t)(v15 + v16) + 6],
                 (int *)&v28);
      }
      return 0;
    default:
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dca30)
// Original: OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
int OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_apply_context_t_d0f2c3(uint8_t *a1, OT::hb_apply_context_t::Self *a2)
{
  unsigned int v3;
  uint8_t *v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int result;
  int16_t v10;

  while ( 2 )
  {
    if ( a1[1] + (*a1 << 8) == 1 )
    {
      v5 = (a1[5] << 16) + (a1[4] << 24) + (a1[6] << 8);
      v6 = a1[7];
      v7 = v6 + v5 == 0;
      v8 = v6 + v5;
      v3 = (uint16_t)((a1[2] << 8) + a1[3]);
      if ( v7 )
        v4 = (uint8_t *)&unk_2116E00;
      else
        v4 = &a1[v8];
      if ( v3 > 8 )
        return 0;
    }
    else
    {
      v3 = 0;
      v4 = (uint8_t *)&unk_2116E00;
    }
    switch ( v3 )
    {
      case 0u:
        return 0;
      case 1u:
        return sub_12CC3A0(v4, a2);
      case 2u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::MultipleSubstFormat1::apply((OT::MultipleSubstFormat1::Self *)v4, a2);
      case 3u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::AlternateSubstFormat1::apply((OT::AlternateSubstFormat1::Self *)v4, a2);
      case 4u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::LigatureSubstFormat1::apply((OT::LigatureSubstFormat1::Self *)v4, a2);
      case 5u:
        return OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3(v4, (uint32_t *)(a2));
      case 6u:
        v10 = v4[1] + (*v4 << 8);
        switch ( v10 )
        {
          case 1:
            result = sub_12CC2B0(v4, (int)(uintptr_t)(a2));
            break;
          case 2:
            result = OT::ChainContextFormat2::apply((OT::ChainContextFormat2::Self *)v4, a2);
            break;
          case 3:
            result = OT::ChainContextFormat3::apply((OT::ChainContextFormat3::Self *)v4, a2);
            break;
          default:
            return 0;
        }
        break;
      case 7u:
        a1 = v4;
        continue;
      case 8u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::ReverseChainSingleSubstFormat1::apply((OT::ReverseChainSingleSubstFormat1::Self *)v4, a2);
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookupSubTable::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dcc20)
// Original: OT::SubstLookupSubTable::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookupSubTable::dispatch_OT_hb_apply_context_t_d0f2c3(OT::AlternateSubstFormat1::Self *a1, OT::hb_apply_context_t::Self *a2, int a3)
{
  int result;
  int16_t v4;

  switch ( a3 )
  {
    case 1:
      result = sub_12CC3A0((uint8_t *)a1, a2);
      break;
    case 2:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::MultipleSubstFormat1::apply((OT::MultipleSubstFormat1::Self *)(a1), a2);
      break;
    case 3:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::AlternateSubstFormat1::apply(a1, a2);
      break;
    case 4:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::LigatureSubstFormat1::apply((OT::LigatureSubstFormat1::Self *)(a1), a2);
      break;
    case 5:
      result = OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3((uint8_t *)a1, (uint32_t *)(a2));
      break;
    case 6:
      v4 = *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8);
      switch ( v4 )
      {
        case 1:
          result = sub_12CC2B0((uint8_t *)a1, (int)(uintptr_t)(a2));
          break;
        case 2:
          result = OT::ChainContextFormat2::apply((OT::ChainContextFormat2::Self *)(a1), a2);
          break;
        case 3:
          result = OT::ChainContextFormat3::apply((OT::ChainContextFormat3::Self *)(a1), a2);
          break;
        default:
          goto LABEL_2;
      }
      break;
    case 7:
      result = OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_apply_context_t_d0f2c3((uint8_t *)a1, a2);
      break;
    case 8:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::ReverseChainSingleSubstFormat1::apply((OT::ReverseChainSingleSubstFormat1::Self *)(a1), a2);
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dcdc0)
// Original: OT::SubstLookup::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookup::dispatch_OT_hb_apply_context_t_d0f2c3(uint8_t *a1, OT::hb_apply_context_t::Self *a2)
{
  uint8_t v2;
  int16_t v3;
  int result;
  uint8_t *v5;
  unsigned int v6;
  uint8_t *v7;
  uint16_t v8;
  int v9;
  uint8_t *v10;
  int v11;
  unsigned int v12;
  int16_t v13;
  uint8_t *v14;
  uint16_t v15;
  OT::Ligature::Self *v16;
  int v17;
  OT::AlternateSubstFormat1::Self *v18;
  int16_t v19;
  uint16_t v20;
  OT::Coverage::Self *v21;
  int v22;
  unsigned int v23;
  uint8_t *v24;
  uint8_t *v25;
  int v26;
  uint8_t *v27;
  uint8_t *v28;
  OT::Coverage::Self *v29;
  int v30;
  unsigned int v31;
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  uint16_t v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  uint8_t *v40;
  int16_t v41;
  int16_t v42;
  int v43;
  OT::Coverage::Self *v44;
  int v45;
  unsigned int v46;
  uint8_t *v47;
  uint16_t v48;
  uint8_t *v49;
  uint8_t *v50;
  int16_t v51;
  int v52;
  int v53;
  int v54;
  OT::Coverage::Self *v55;
  unsigned int v56;
  int v57;
  int16_t v58;
  OT::Coverage::Self *v59;
  unsigned int coverage;
  int v61;
  int v62;
  bool v63;
  int v64;
  OT::Coverage::Self *v65;
  int16_t v66;
  uint8_t *v67;
  unsigned int v68;
  int16_t v69;
  int v70;
  int v71;
  uint8_t v72;
  unsigned int *v73;
  OT::Coverage::Self *v74;
  OT::Coverage::Self *v75;
  OT::Coverage::Self *v76;
  unsigned int v77;
  int v78;
  int v79;

  v2 = a1[5];
  v69 = (*a1 << 8) + a1[1];
  v3 = a1[4];
  result = 0;
  if ( v2 + (v3 << 8) != 0 )
  {
    v5 = a1 + 4;
    v71 = (uint16_t)(v2 + (a1[4] << 8)) - 1;
    v6 = 0;
    while ( 1 )
    {
      v7 = (uint8_t *)&unk_2116E00;
      v8 = v2 + (v3 << 8);
      v9 = (int)(uintptr_t)(&v5[2 * v6 + 2]);
      v10 = (uint8_t *)&unk_2116E00;
      if ( v8 > v6 )
        v7 = (uint8_t *)v9;
      v11 = (uint16_t)((*v7 << 8) + v7[1]);
      if ( v11 != 0 )
        v10 = &a1[v11];
      switch ( v69 )
      {
        case 1:
          v58 = v10[1] + (*v10 << 8);
          if ( v58 == 1 )
          {
            v74 = *(OT::Coverage::Self **)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84));
            v65 = (OT::Coverage::Self *)&unk_2116E00;
            if ( (v10[2] << 8) + v10[3] != 0 )
              v65 = (OT::Coverage::Self *)&v10[(uint16_t)((v10[2] << 8) + v10[3])];
            if ( OT::Coverage::get_coverage(v65, (unsigned int)(uintptr_t)(v74)) == -1 )
              goto LABEL_16;
            OT::hb_apply_context_t::replace_glyph(a2, (uint16_t)((uint16_t)(uintptr_t)(v74) + v10[5] + (v10[4] << 8)));
            return 1;
          }
          else
          {
            if ( v58 != 2 )
              goto LABEL_16;
            v59 = (OT::Coverage::Self *)&unk_2116E00;
            if ( (v10[2] << 8) + v10[3] != 0 )
              v59 = (OT::Coverage::Self *)&v10[(uint16_t)((v10[2] << 8) + v10[3])];
            coverage = OT::Coverage::get_coverage(
                         v59,
                         *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84)));
            if ( coverage == -1 || coverage >= (uint16_t)(v10[5] + (v10[4] << 8)) )
              goto LABEL_16;
            OT::hb_apply_context_t::replace_glyph(
              a2,
              (uint16_t)(v10[2 * coverage + 7] + (v10[2 * coverage + 6] << 8)));
            return 1;
          }
        case 2:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_16;
          v43 = *((uint32_t *)a2 + 3);
          v78 = *(uint32_t *)(v43 + 100);
          v76 = *(OT::Coverage::Self **)(v43 + 84);
          v79 = v78 + 20 * (uint32_t)(uintptr_t)(v76);
          LOWORD(v43) = v10[3] + (v10[2] << 8);
          v44 = (OT::Coverage::Self *)&v10[(uint16_t)v43];
          if ( (uint16_t)v43 == 0 )
            v44 = (OT::Coverage::Self *)&unk_2116E00;
          v45 = OT::Coverage::get_coverage(v44, *(uint32_t *)v79);
          v46 = v45;
          if ( v45 == -1 )
            goto LABEL_16;
          v47 = &v10[2 * v45 + 6];
          if ( v46 >= (uint16_t)((v10[4] << 8) + v10[5]) )
            v47 = (uint8_t *)&unk_2116E00;
          v48 = v47[1] + (*v47 << 8);
          v49 = (uint8_t *)&unk_2116E00;
          v50 = &v10[v48];
          if ( v48 != 0 )
            v49 = v50;
          v51 = v49[1];
          v52 = (uint16_t)(v51 + (*v49 << 8));
          if ( v51 + (*v49 << 8) == 0 )
            goto LABEL_16;
          if ( v52 == 1 )
          {
            v66 = v49[2];
            v42 = v49[3];
            v41 = v66 << 8;
            goto LABEL_57;
          }
          v53 = 0;
          v70 = v52 - 1;
          v54 = v78;
          v55 = v76;
          v56 = (*(uint16_t *)(v79 + 12) >> 1) & 2;
          while ( 1 )
          {
            *(uint8_t *)(v54 + 20 * (uint32_t)(uintptr_t)(v55) + 14) = v53 & 0xF;
            v67 = v49;
            v68 = (uint16_t)(v49[2 * v53 + 3] + (v49[2 * v53 + 2] << 8));
            OT::hb_apply_context_t::set_glyph_props((uint8_t **)a2, v68, v56, false, true);
            sub_12A89F0(*((uint32_t *)a2 + 3), v68);
            v49 = v67;
            if ( v53 == v70 )
              break;
            v57 = *((uint32_t *)a2 + 3);
            ++v53;
            v55 = *(OT::Coverage::Self **)(v57 + 84);
            v54 = *(uint32_t *)(v57 + 100);
          }
          ++*(uint32_t *)(*((uint32_t *)a2 + 3) + 84);
          return 1;
        case 3:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_16;
          v73 = (unsigned int *)(20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84) + *(uint32_t *)(*((uint32_t *)a2 + 3) + 100));
          v29 = (OT::Coverage::Self *)&v10[(uint16_t)(v10[3] + (v10[2] << 8))];
          if ( v10[3] + (v10[2] << 8) == 0 )
            v29 = (OT::Coverage::Self *)&unk_2116E00;
          v30 = OT::Coverage::get_coverage(v29, *v73);
          v31 = v30;
          if ( v30 == -1 )
            goto LABEL_16;
          v32 = &v10[2 * v30 + 6];
          if ( v31 >= (uint16_t)((v10[4] << 8) + v10[5]) )
            v32 = (uint8_t *)&unk_2116E00;
          v33 = (uint16_t)((*v32 << 8) + v32[1]);
          v34 = &v10[v33];
          if ( v33 == 0 )
            v34 = (uint8_t *)&unk_2116E00;
          v35 = v34[1] + (*v34 << 8);
          if ( v35 == 0 )
            goto LABEL_16;
          v36 = *((uint32_t *)a2 + 5);
          if ( v36 == 0 )
            goto LABEL_16;
          _BitScanForward(&v37, v36);
          v38 = (v73[1] & v36) >> v37;
          if ( v38 > v35 || v38 == 0 )
            goto LABEL_16;
          v39 = v38 - 1;
          v40 = &v34[2 * v39 + 2];
          if ( v35 <= v39 )
            v40 = (uint8_t *)&unk_2116E00;
          v41 = v40[1];
          v42 = *v40 << 8;
LABEL_57:
          OT::hb_apply_context_t::replace_glyph(a2, (uint16_t)(v41 + v42));
          return 1;
        case 4:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_16;
          v20 = v10[3] + (v10[2] << 8);
          v21 = (OT::Coverage::Self *)&v10[v20];
          if ( v20 == 0 )
            v21 = (OT::Coverage::Self *)&unk_2116E00;
          v22 = OT::Coverage::get_coverage(
                  v21,
                  *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 100) + 20 * *(uint32_t *)(*((uint32_t *)a2 + 3) + 84)));
          v23 = v22;
          if ( v22 == -1 )
            goto LABEL_16;
          v24 = &v10[2 * v22 + 6];
          if ( v23 >= (uint16_t)((v10[4] << 8) + v10[5]) )
            v24 = (uint8_t *)&unk_2116E00;
          v25 = (uint8_t *)&unk_2116E00;
          v26 = (uint16_t)((*v24 << 8) + v24[1]);
          v27 = &v10[v26];
          if ( v26 != 0 )
            v25 = v27;
          v13 = *v25;
          v72 = v25[1];
          if ( (v13 << 8) + v72 == 0 )
            goto LABEL_16;
          v77 = v6;
          v75 = (OT::Coverage::Self *)((uint16_t)((v13 << 8) + v72) - 1);
          v12 = 0;
          v28 = v25;
          while ( 2 )
          {
            v14 = (uint8_t *)&unk_2116E00;
            if ( v12 < (uint16_t)(v72 + (v13 << 8)) )
              v14 = &v28[2 * v12 + 2];
            v15 = v14[1] + (*v14 << 8);
            v16 = (OT::Ligature::Self *)&unk_2116E00;
            if ( v15 != 0 )
              v16 = (OT::Ligature::Self *)&v28[v15];
            if ( (uint8_t)OT::Ligature::apply(v16, a2) != 0 )
              return 1;
            if ( (OT::Coverage::Self *)v12 != v75 )
            {
              ++v12;
              v13 = *v28;
              v72 = v28[1];
              continue;
            }
            break;
          }
          v6 = v77;
LABEL_16:
          if ( v6 == v71 )
            return 0;
LABEL_17:
          v3 = a1[4];
          ++v6;
          v2 = a1[5];
          v5 = a1 + 4;
          break;
        case 5:
          result = OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3(v10, (uint32_t *)(a2));
          goto LABEL_29;
        case 6:
          v19 = v10[1] + (*v10 << 8);
          switch ( v19 )
          {
            case 1:
              result = sub_12CC2B0(v10, (int)(uintptr_t)(a2));
              break;
            case 2:
              result = OT::ChainContextFormat2::apply((OT::ChainContextFormat2::Self *)v10, a2);
              break;
            case 3:
              result = OT::ChainContextFormat3::apply((OT::ChainContextFormat3::Self *)v10, a2);
              break;
            default:
              goto LABEL_16;
          }
LABEL_29:
          if ( (uint8_t)result != 0 )
            return result;
          if ( v6 == v71 )
            return 0;
          goto LABEL_17;
        case 7:
          v17 = 0;
          if ( v10[1] + (*v10 << 8) != 1
            || (v61 = (v10[6] << 8) + (v10[5] << 16) + (v10[4] << 24),
                v62 = v10[7],
                v63 = v61 + v62 == 0,
                v64 = v61 + v62,
                v17 = (uint16_t)((v10[2] << 8) + v10[3]),
                v63) )
          {
            v18 = (OT::AlternateSubstFormat1::Self *)&unk_2116E00;
          }
          else
          {
            v18 = (OT::AlternateSubstFormat1::Self *)&v10[v64];
          }
          result = OT::SubstLookupSubTable::dispatch_OT_hb_apply_context_t_d0f2c3(v18, a2, v17);
          goto LABEL_29;
        case 8:
          if ( v10[1] + (*v10 << 8) == 1 )
          {
            result = OT::ReverseChainSingleSubstFormat1::apply((OT::ReverseChainSingleSubstFormat1::Self *)v10, a2);
            if ( (uint8_t)result != 0 )
              return result;
          }
          goto LABEL_16;
        default:
          goto LABEL_16;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::apply_recurse_func  (binary VA: 0x12dd520)
// Original: OT::SubstLookup::apply_recurse_func
// ----------------------------------------------------------------------------
int OT::SubstLookup::apply_recurse_func(OT::SubstLookup::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  int16_t v6;
  int v7;
  unsigned int v8;
  int v9;
  char v10;
  int v11;
  int v13;

  v2 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 72) + 16);
  v3 = (uint16_t)(*(uint8_t *)(v2 + 9) + (*(uint8_t *)(v2 + 8) << 8));
  v4 = (uint8_t *)(v3 + v2);
  if ( v3 == 0 )
    v4 = (uint8_t *)&unk_2116E00;
  if ( (unsigned int)(uintptr_t)(a2) < (uint16_t)(v4[1] + (*v4 << 8)) )
  {
    v13 = (uint16_t)(v4[2 * (uint32_t)(uintptr_t)(a2) + 3] + (v4[2 * (uint32_t)(uintptr_t)(a2) + 2] << 8));
    v5 = &v4[v13];
    if ( v13 == 0 )
      v5 = (uint8_t *)&unk_2116E00;
  }
  else
  {
    v5 = (uint8_t *)&unk_2116E00;
  }
  v6 = v5[3];
  v7 = *((uint32_t *)self + 9);
  v8 = (uint16_t)(v6 + (v5[2] << 8));
  if ( (v6 & 0x10) != 0 )
    v8 += (v5[2 * (uint16_t)(v5[5] + (v5[4] << 8)) + 7]
         + (v5[2 * (uint16_t)(v5[5] + (v5[4] << 8)) + 6] << 8)) << 16;
  v9 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 9) = v8;
  v10 = OT::hb_apply_context_t::check_glyph_property((int)(uintptr_t)(self), *(uint32_t *)(v9 + 100) + 20 * *(uint32_t *)(v9 + 84), v8);
  v11 = 0;
  if ( v10 != 0 )
    v11 = OT::SubstLookup::dispatch_OT_hb_apply_context_t_d0f2c3(v5, (OT::hb_apply_context_t::Self *)(self));
  *((uint32_t *)self + 9) = v7;
  return v11;
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionPos_0f4160::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dd640)
// Original: OT::Extension<OT::ExtensionPos>::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
char OT::Extension_OT_ExtensionPos_0f4160::dispatch_OT_hb_apply_context_t_d0f2c3(uint8_t *a1, OT::hb_apply_context_t::Self *a2)
{
  unsigned int v3;
  uint8_t *v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  char result;
  int16_t v10;
  int16_t v11;

  while ( 2 )
  {
    if ( a1[1] + (*a1 << 8) == 1 )
    {
      v5 = (a1[5] << 16) + (a1[4] << 24) + (a1[6] << 8);
      v6 = a1[7];
      v7 = v6 + v5 == 0;
      v8 = v6 + v5;
      v3 = (uint16_t)((a1[2] << 8) + a1[3]);
      if ( v7 )
        v4 = (uint8_t *)&unk_2116E00;
      else
        v4 = &a1[v8];
      if ( v3 > 9 )
        return 0;
    }
    else
    {
      v3 = 0;
      v4 = (uint8_t *)&unk_2116E00;
    }
    switch ( v3 )
    {
      case 0u:
        return 0;
      case 1u:
        return sub_12CC4F0(v4, a2);
      case 2u:
        v10 = v4[1] + (*v4 << 8);
        if ( v10 == 1 )
          return OT::PairPosFormat1::apply((OT::PairPosFormat1::Self *)v4, a2);
        if ( v10 != 2 )
          return 0;
        return OT::PairPosFormat2::apply((OT::PairPosFormat2::Self *)v4, a2);
      case 3u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::CursivePosFormat1::apply((OT::CursivePosFormat1::Self *)v4, a2);
      case 4u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::MarkBasePosFormat1::apply((OT::MarkBasePosFormat1::Self *)v4, a2);
      case 5u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::MarkLigPosFormat1::apply((OT::MarkLigPosFormat1::Self *)v4, a2);
      case 6u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::MarkMarkPosFormat1::apply((OT::MarkMarkPosFormat1::Self *)v4, a2);
      case 7u:
        return OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3(v4, (uint32_t *)(a2));
      case 8u:
        v11 = v4[1] + (*v4 << 8);
        switch ( v11 )
        {
          case 1:
            result = sub_12CC2B0(v4, (int)(uintptr_t)(a2));
            break;
          case 2:
            result = OT::ChainContextFormat2::apply((OT::ChainContextFormat2::Self *)v4, a2);
            break;
          case 3:
            result = OT::ChainContextFormat3::apply((OT::ChainContextFormat3::Self *)v4, a2);
            break;
          default:
            return 0;
        }
        break;
      case 9u:
        a1 = v4;
        continue;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::PosLookupSubTable::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dd890)
// Original: OT::PosLookupSubTable::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
char OT::PosLookupSubTable::dispatch_OT_hb_apply_context_t_d0f2c3(OT::PairPosFormat2::Self *a1, OT::hb_apply_context_t::Self *a2, int a3)
{
  char result;
  int16_t v4;
  int16_t v5;

  switch ( a3 )
  {
    case 1:
      result = sub_12CC4F0((uint8_t *)a1, a2);
      break;
    case 2:
      v4 = *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8);
      if ( v4 == 1 )
      {
        result = OT::PairPosFormat1::apply((OT::PairPosFormat1::Self *)(a1), a2);
      }
      else
      {
        if ( v4 != 2 )
          goto LABEL_2;
        result = OT::PairPosFormat2::apply(a1, a2);
      }
      break;
    case 3:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::CursivePosFormat1::apply((OT::CursivePosFormat1::Self *)(a1), a2);
      break;
    case 4:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::MarkBasePosFormat1::apply((OT::MarkBasePosFormat1::Self *)(a1), a2);
      break;
    case 5:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::MarkLigPosFormat1::apply((OT::MarkLigPosFormat1::Self *)(a1), a2);
      break;
    case 6:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::MarkMarkPosFormat1::apply((OT::MarkMarkPosFormat1::Self *)(a1), a2);
      break;
    case 7:
      result = OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3((uint8_t *)a1, (uint32_t *)(a2));
      break;
    case 8:
      v5 = *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8);
      switch ( v5 )
      {
        case 1:
          result = sub_12CC2B0((uint8_t *)a1, (int)(uintptr_t)(a2));
          break;
        case 2:
          result = OT::ChainContextFormat2::apply((OT::ChainContextFormat2::Self *)(a1), a2);
          break;
        case 3:
          result = OT::ChainContextFormat3::apply((OT::ChainContextFormat3::Self *)(a1), a2);
          break;
        default:
          goto LABEL_2;
      }
      break;
    case 9:
      result = OT::Extension_OT_ExtensionPos_0f4160::dispatch_OT_hb_apply_context_t_d0f2c3((uint8_t *)a1, a2);
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::PosLookup::dispatch_OT_hb_apply_context_t_d0f2c3  (binary VA: 0x12dda80)
// Original: OT::PosLookup::dispatch<OT::hb_apply_context_t>
// ----------------------------------------------------------------------------
char OT::PosLookup::dispatch_OT_hb_apply_context_t_d0f2c3(uint8_t *a1, OT::hb_apply_context_t::Self *a2)
{
  uint8_t v2; // di
  int16_t v3;
  char result;
  uint8_t *v5;
  unsigned int v6;
  uint8_t v7;
  int16_t v8; // di
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  int v12;
  OT::PairPosFormat2::Self *v13;
  int16_t v14;
  int16_t v15;
  int16_t v16;
  uint16_t v17;
  OT::Coverage::Self *v18;
  int v19;
  int v20;
  uint16_t v21;
  OT::Coverage::Self *v22;
  int16_t v23;
  int v24;
  uint32_t *v25;
  unsigned int coverage;
  int v27;
  int v28;

  v2 = a1[5];
  v3 = a1[4];
  result = 0;
  if ( v2 + (v3 << 8) != 0 )
  {
    v24 = (uint16_t)(v2 + (a1[4] << 8)) - 1;
    v5 = a1 + 4;
    v23 = (*a1 << 8) + a1[1];
    v6 = 0;
    v7 = a1[5];
    while ( 1 )
    {
      v8 = v7;
      v9 = (uint8_t *)&unk_2116E00;
      if ( v6 < (uint16_t)(v8 + (v3 << 8)) )
        v9 = &v5[2 * v6 + 2];
      v10 = (uint8_t *)&unk_2116E00;
      v11 = (uint16_t)((*v9 << 8) + v9[1]);
      if ( v11 != 0 )
        v10 = &a1[v11];
      switch ( v23 )
      {
        case 1:
          v16 = v10[1] + (*v10 << 8);
          if ( v16 == 1 )
          {
            v25 = *((uint32_t **)a2 + 3);
            v28 = 20 * v25[21];
            v21 = (v10[2] << 8) + v10[3];
            v22 = (OT::Coverage::Self *)&unk_2116E00;
            if ( v21 != 0 )
              v22 = (OT::Coverage::Self *)&v10[v21];
            if ( OT::Coverage::get_coverage(v22, *(uint32_t *)(v25[25] + 20 * v25[21])) == -1 )
              goto LABEL_10;
            OT::ValueFormat::apply_value(
              v10 + 4,
              *((hb_font_t **)a2 + 1),
              *((uint32_t *)a2 + 4),
              (int)(uintptr_t)(v10),
              v10 + 6,
              (int *)(v25[27] + v28));
          }
          else
          {
            if ( v16 != 2 )
              goto LABEL_10;
            v25 = *((uint32_t **)a2 + 3);
            v27 = 20 * v25[21];
            v17 = (v10[2] << 8) + v10[3];
            v18 = (OT::Coverage::Self *)&unk_2116E00;
            if ( v17 != 0 )
              v18 = (OT::Coverage::Self *)&v10[v17];
            coverage = OT::Coverage::get_coverage(v18, *(uint32_t *)(v25[25] + 20 * v25[21]));
            if ( coverage == -1 || coverage >= (uint16_t)(v10[7] + (v10[6] << 8)) )
              goto LABEL_10;
            v19 = _popcountsi2((uint16_t)(v10[5] + (v10[4] << 8)));
            OT::ValueFormat::apply_value(
              v10 + 4,
              *((hb_font_t **)a2 + 1),
              *((uint32_t *)a2 + 4),
              (int)(uintptr_t)(v10),
              &v10[2 * coverage * v19 + 8],
              (int *)(v25[27] + v27));
          }
          ++v25[21];
          return 1;
        case 2:
          v15 = v10[1] + (*v10 << 8);
          if ( v15 == 1 )
          {
            result = OT::PairPosFormat1::apply((OT::PairPosFormat1::Self *)v10, a2);
          }
          else
          {
            if ( v15 != 2 )
              goto LABEL_10;
            result = OT::PairPosFormat2::apply((OT::PairPosFormat2::Self *)v10, a2);
          }
          goto LABEL_9;
        case 3:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_10;
          result = OT::CursivePosFormat1::apply((OT::CursivePosFormat1::Self *)v10, a2);
          goto LABEL_9;
        case 4:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_10;
          result = OT::MarkBasePosFormat1::apply((OT::MarkBasePosFormat1::Self *)v10, a2);
          goto LABEL_9;
        case 5:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_10;
          result = OT::MarkLigPosFormat1::apply((OT::MarkLigPosFormat1::Self *)v10, a2);
          goto LABEL_9;
        case 6:
          if ( v10[1] + (*v10 << 8) != 1 )
            goto LABEL_10;
          result = OT::MarkMarkPosFormat1::apply((OT::MarkMarkPosFormat1::Self *)v10, a2);
          goto LABEL_9;
        case 7:
          result = OT::Context::dispatch_OT_hb_apply_context_t_d0f2c3(v10, (uint32_t *)(a2));
          goto LABEL_9;
        case 8:
          v14 = v10[1] + (*v10 << 8);
          switch ( v14 )
          {
            case 1:
              result = sub_12CC2B0(v10, (int)(uintptr_t)(a2));
              break;
            case 2:
              result = OT::ChainContextFormat2::apply((OT::ChainContextFormat2::Self *)v10, a2);
              break;
            case 3:
              result = OT::ChainContextFormat3::apply((OT::ChainContextFormat3::Self *)v10, a2);
              break;
            default:
              goto LABEL_10;
          }
LABEL_9:
          if ( result != 0 )
            return result;
LABEL_10:
          if ( v6 == v24 )
            return 0;
          v3 = a1[4];
          ++v6;
          v7 = a1[5];
          v5 = a1 + 4;
          break;
        case 9:
          v12 = 0;
          if ( v10[1] + (*v10 << 8) == 1
            && (v12 = (uint16_t)(v10[3] + (v10[2] << 8)),
                (v20 = (v10[6] << 8) + (v10[5] << 16) + (v10[4] << 24) + v10[7]) != 0) )
          {
            v13 = (OT::PairPosFormat2::Self *)&v10[v20];
          }
          else
          {
            v13 = (OT::PairPosFormat2::Self *)&unk_2116E00;
          }
          result = OT::PosLookupSubTable::dispatch_OT_hb_apply_context_t_d0f2c3(v13, a2, v12);
          if ( result != 0 )
            return result;
          goto LABEL_10;
        default:
          goto LABEL_10;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::PosLookup::apply_recurse_func  (binary VA: 0x12ddf00)
// Original: OT::PosLookup::apply_recurse_func
// ----------------------------------------------------------------------------
int OT::PosLookup::apply_recurse_func(OT::PosLookup::Self *self, OT::hb_apply_context_t::Self *a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  int16_t v6;
  int v7;
  unsigned int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v14;

  v2 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 72) + 20);
  v3 = (uint16_t)(*(uint8_t *)(v2 + 9) + (*(uint8_t *)(v2 + 8) << 8));
  v4 = (uint8_t *)(v3 + v2);
  if ( v3 == 0 )
    v4 = (uint8_t *)&unk_2116E00;
  if ( (unsigned int)(uintptr_t)(a2) < (uint16_t)(v4[1] + (*v4 << 8)) )
  {
    v14 = (uint16_t)(v4[2 * (uint32_t)(uintptr_t)(a2) + 3] + (v4[2 * (uint32_t)(uintptr_t)(a2) + 2] << 8));
    v5 = &v4[v14];
    if ( v14 == 0 )
      v5 = (uint8_t *)&unk_2116E00;
  }
  else
  {
    v5 = (uint8_t *)&unk_2116E00;
  }
  v6 = v5[3];
  v7 = *((uint32_t *)self + 9);
  v8 = (uint16_t)(v6 + (v5[2] << 8));
  if ( (v6 & 0x10) != 0 )
    v8 += (v5[2 * (uint16_t)(v5[5] + (v5[4] << 8)) + 7]
         + (v5[2 * (uint16_t)(v5[5] + (v5[4] << 8)) + 6] << 8)) << 16;
  v9 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 9) = v8;
  v10 = OT::hb_apply_context_t::check_glyph_property((int)(uintptr_t)(self), *(uint32_t *)(v9 + 100) + 20 * *(uint32_t *)(v9 + 84), v8);
  v11 = 0;
  if ( v10 != 0 )
  {
    LOBYTE(v12) = OT::PosLookup::dispatch_OT_hb_apply_context_t_d0f2c3(v5, (OT::hb_apply_context_t::Self *)(self));
    v11 = v12;
  }
  *((uint32_t *)self + 9) = v7;
  return v11;
}

// ----------------------------------------------------------------------------
// Function: OT::Record_OT_Script_75f424::sanitize  (binary VA: 0x12de020)
// Original: OT::Record<OT::Script>::sanitize
// ----------------------------------------------------------------------------
int OT::Record_OT_Script_75f424::sanitize(OT::Record<OT::Script::Self> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  char *v5;
  char *v6;
  int16_t v7;
  char v8;
  char v9;
  unsigned int v10;
  uint8_t *v11;
  const void *v12;
  unsigned int v13;

  v13 = *((uint32_t *)a2 + 1);
  result = 0;
  if ( (unsigned int)(uintptr_t)(self) < v13 )
    return result;
  v4 = *((uint32_t *)a2 + 2);
  if ( (unsigned int)(uintptr_t)(self) > v4 )
    return result;
  if ( v4 - (unsigned int)(uintptr_t)(self) <= 5 )
    return result;
  v5 = (char *)self + 4;
  if ( (unsigned int)(uintptr_t)(self) + 4 < v13 )
    return result;
  if ( (unsigned int)(uintptr_t)(v5) > v4 )
    return result;
  if ( v4 - (unsigned int)(uintptr_t)(v5) <= 1 )
    return result;
  result = 1;
  if ( (*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5) == 0 )
    return result;
  v6 = &a3[(uint16_t)((*((uint8_t *)self + 4) << 8) + *((uint8_t *)self + 5))];
  if ( v13 > (unsigned int)(uintptr_t)(v6) || v4 < (unsigned int)(uintptr_t)(v6) || v4 - (unsigned int)(uintptr_t)(v6) <= 1 )
    goto LABEL_13;
  v7 = (uint8_t)v6[1];
  if ( v7 + ((uint8_t)*v6 << 8) == 0
    || (v11 = (uint8_t *)&v6[(uint16_t)(v7 + ((uint8_t)*v6 << 8))], v13 <= (unsigned int)(uintptr_t)(v11))
    && v4 >= (unsigned int)(uintptr_t)(v11)
    && v4 - (unsigned int)(uintptr_t)(v11) > 5
    && (v12 = v11 + 4, v13 <= (unsigned int)(uintptr_t)(v11 + 4))
    && v4 >= (unsigned int)(uintptr_t)(v12)
    && v4 - (unsigned int)(uintptr_t)(v12) > 1
    && OT::hb_sanitize_context_t::check_array(a2, v12, 2u, (uint16_t)(v11[5] + (v11[4] << 8))) )
  {
LABEL_12:
    v8 = OT::ArrayOf_OT_Record_OT_LangSys_OT_cc6a51::sanitize(
           (OT::ArrayOf<OT::Record<OT::LangSys>, OT::IntType<unsigned short, 2u>> *)(v6 + 2),
           a2,
           v6);
    result = 1;
    if ( v8 != 0 )
      return result;
LABEL_13:
    v9 = *((uint8_t *)a2 + 12);
    v10 = *((uint32_t *)a2 + 4);
    goto LABEL_14;
  }
  v10 = *((uint32_t *)a2 + 4);
  v9 = *((uint8_t *)a2 + 12);
  if ( v10 <= 0x63 )
  {
    *((uint32_t *)a2 + 4) = ++v10;
    if ( v9 != 0 )
    {
      *v6 = 0;
      v6[1] = 0;
      goto LABEL_12;
    }
  }
LABEL_14:
  result = 0;
  if ( v10 <= 0x63 )
  {
    *((uint32_t *)a2 + 4) = v10 + 1;
    if ( v9 != 0 )
    {
      *((uint8_t *)self + 4) = 0;
      *((uint8_t *)self + 5) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::GSUBGPOS::sanitize  (binary VA: 0x12de1c0)
// Original: OT::GSUBGPOS::sanitize
// ----------------------------------------------------------------------------
int OT::GSUBGPOS::sanitize(OT::GSUBGPOS::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  char *v5;
  int16_t v6;
  char v7;
  char *v8;
  int v9;
  unsigned int v10;
  char v11;
  unsigned int v12;
  unsigned int v13;

  result = 0;
  v3 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v3 )
  {
    v4 = *((uint32_t *)a2 + 2);
    v13 = v4;
    if ( (unsigned int)(uintptr_t)(self) <= v4
      && v4 - (unsigned int)(uintptr_t)(self) > 3
      && *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) == 1 )
    {
      v5 = (char *)self + 4;
      if ( (unsigned int)(uintptr_t)(self) + 4 >= v3 && (unsigned int)(uintptr_t)(v5) <= v13 && v13 - (unsigned int)(uintptr_t)(v5) > 1 )
      {
        v6 = *((uint8_t *)self + 4) << 8;
        if ( v6 + *((uint8_t *)self + 5) == 0 )
          goto LABEL_10;
        v8 = (char *)self + (uint16_t)(v6 + *((uint8_t *)self + 5));
        if ( v3 <= (unsigned int)(uintptr_t)(v8) && v13 >= (unsigned int)(uintptr_t)(v8) && v13 - (unsigned int)(uintptr_t)(v8) > 1 )
        {
          v12 = (uint16_t)((uint8_t)v8[1] + ((uint8_t)*v8 << 8));
          if ( OT::hb_sanitize_context_t::check_array(a2, v8, 6u, v12) )
          {
            v9 = 1;
            if ( v12 == 0 )
              goto LABEL_10;
            while ( (uint8_t)OT::Record_OT_Script_75f424::sanitize((OT::Record<OT::Script::Self> *)&v8[6 * v9 - 4], a2, v8) != 0 )
            {
              if ( ++v9 == v12 + 1 )
                goto LABEL_10;
            }
          }
        }
        v10 = *((uint32_t *)a2 + 4);
        result = 0;
        v11 = *((uint8_t *)a2 + 12);
        if ( v10 <= 0x63 )
        {
          *((uint32_t *)a2 + 4) = v10 + 1;
          if ( v11 != 0 )
          {
            *((uint8_t *)self + 4) = 0;
            *((uint8_t *)self + 5) = 0;
LABEL_10:
            v7 = OT::OffsetTo_OT_RecordListOf_OT_Featu_92edaa::sanitize(
                   (OT::OffsetTo<OT::RecordListOf<OT::Feature>, OT::IntType<unsigned short, 2U>> *)((OT::GSUBGPOS::Self *)((char *)self + 6)),
                   a2,
                   (char *)self);
            result = 0;
            if ( v7 != 0 )
              return OT::OffsetTo_OT_OffsetListOf_OT_Looku_b2f130::sanitize(
                       (OT::OffsetTo<OT::OffsetListOf<OT::Lookup::Self>, OT::IntType<unsigned short, 2U>> *)((OT::GSUBGPOS::Self *)((char *)self + 8)),
                       a2,
                       (char *)self);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::Sanitizer_OT_GSUB_65cf56::sanitize  (binary VA: 0x12de350)
// Original: OT::Sanitizer<OT::GSUB>::sanitize
// ----------------------------------------------------------------------------
int * OT::Sanitizer_OT_GSUB_65cf56::sanitize(int *a1)
{
  int *v1;
  OT::GSUBGPOS::Self *data;
  int length;
  char *v4;
  char v6; // si
  typedef int _g4_t_v7;
  typedef OT::GSUBGPOS::Self *_g4_t_data_writable;
  typedef char *_g4_t_v9;
  typedef char _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_data_writable)) > _g4_s1 ? (4u + sizeof(_g4_t_data_writable)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_data_writable &data_writable = *reinterpret_cast<_g4_t_data_writable *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);

  v7 = 0;
  data_writable = nullptr;
  v9 = nullptr;
  v11 = 0;
  v1 = (int *)(hb_blob_reference(a1));
  v12 = v1;
  v10 = 0;
  while ( 1 )
  {
    data = (OT::GSUBGPOS::Self *)hb_blob_get_data((int)(uintptr_t)(v1), nullptr);
    data_writable = data;
    length = hb_blob_get_length((int)(uintptr_t)(v12));
    v11 = 0;
    v9 = (char *)data + length;
    v4 = (char *)data_writable;
    v7 = 0;
    if ( data_writable == nullptr )
      goto LABEL_9;
    if ( (uint8_t)OT::GSUBGPOS::sanitize(data_writable, (OT::hb_sanitize_context_t::Self *)&v7) != 0
      && (uint8_t)OT::OffsetTo_OT_OffsetListOf_OT_Subst_5bed97::sanitize(
                            (OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup::Self>, OT::IntType<unsigned short, 2u>> *)(v4 + 8),
                            (OT::hb_sanitize_context_t::Self *)&v7,
                            v4) != 0 )
    {
      break;
    }
    if ( v11 == 0 )
      goto LABEL_11;
    if ( v10 != 0 )
      goto LABEL_11;
    data_writable = (OT::GSUBGPOS::Self *)hb_blob_get_data_writable((int)(uintptr_t)(a1), nullptr);
    v9 = (char *)data_writable + hb_blob_get_length((int)(uintptr_t)(a1));
    if ( data_writable == nullptr )
      goto LABEL_11;
    v10 = 1;
    v1 = v12;
  }
  if ( v11 == 0 )
  {
LABEL_9:
    hb_blob_destroy(v12);
    return a1;
  }
  v11 = 0;
  if ( (uint8_t)OT::GSUBGPOS::sanitize((OT::GSUBGPOS::Self *)v4, (OT::hb_sanitize_context_t::Self *)&v7) != 0 )
    v6 = OT::OffsetTo_OT_OffsetListOf_OT_Subst_5bed97::sanitize(
           (OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup::Self>, OT::IntType<unsigned short, 2u>> *)(v4 + 8),
           (OT::hb_sanitize_context_t::Self *)&v7,
           v4);
  else
    v6 = 0;
  if ( v11 == 0 )
  {
    hb_blob_destroy(v12);
    v12 = nullptr;
    v9 = nullptr;
    data_writable = nullptr;
    if ( v6 == 0 )
      goto LABEL_12;
    return a1;
  }
LABEL_11:
  hb_blob_destroy(v12);
  v12 = nullptr;
  v9 = nullptr;
  data_writable = nullptr;
LABEL_12:
  hb_blob_destroy(a1);
  return (int *)hb_blob_get_empty();
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_closure_context_t_768ba0  (binary VA: 0x12ded10)
// Original: OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_closure_context_t>
// ----------------------------------------------------------------------------
int OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_closure_context_t_768ba0(uint8_t *a1, OT::hb_closure_context_t *a2)
{
  unsigned int v3;
  uint8_t *v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int result;
  int16_t v10;

  while ( 2 )
  {
    if ( a1[1] + (*a1 << 8) == 1 )
    {
      v5 = (a1[5] << 16) + (a1[4] << 24) + (a1[6] << 8);
      v6 = a1[7];
      v7 = v6 + v5 == 0;
      v8 = v6 + v5;
      v3 = (uint16_t)((a1[2] << 8) + a1[3]);
      if ( v7 )
        v4 = (uint8_t *)&unk_2116E00;
      else
        v4 = &a1[v8];
      if ( v3 > 8 )
        return 0;
    }
    else
    {
      v3 = 0;
      v4 = (uint8_t *)&unk_2116E00;
    }
    switch ( v3 )
    {
      case 0u:
        return 0;
      case 1u:
        return OT::SingleSubst::dispatch_OT_hb_closure_context_t_768ba0(v4, (int)(uintptr_t)(a2));
      case 2u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        OT::MultipleSubstFormat1::closure((OT::MultipleSubstFormat1::Self *)v4, a2);
        return 0;
      case 3u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::hb_closure_context_t::dispatch<OT::AlternateSubstFormat1::Self>((int)(uintptr_t)(a2), v4);
      case 4u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        OT::LigatureSubstFormat1::closure((OT::LigatureSubstFormat1::Self *)v4, a2);
        return 0;
      case 5u:
        return OT::Context::dispatch_OT_hb_closure_context_t_768ba0(v4, (int)(uintptr_t)(a2));
      case 6u:
        v10 = v4[1] + (*v4 << 8);
        switch ( v10 )
        {
          case 1:
            result = sub_12C8790(v4, (int)(uintptr_t)(a2));
            break;
          case 2:
            OT::ChainContextFormat2::closure((OT::ChainContextFormat2::Self *)v4, (const hb_set_t **)a2);
            result = 0;
            break;
          case 3:
            OT::ChainContextFormat3::closure((OT::ChainContextFormat3::Self *)v4, (const hb_set_t **)a2);
            result = 0;
            break;
          default:
            return 0;
        }
        break;
      case 7u:
        a1 = v4;
        continue;
      case 8u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        return OT::hb_closure_context_t::dispatch<OT::ReverseChainSingleSubstFormat1::Self>((int)(uintptr_t)(a2), v4);
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookupSubTable::dispatch_OT_hb_closure_context_t_768ba0  (binary VA: 0x12def00)
// Original: OT::SubstLookupSubTable::dispatch<OT::hb_closure_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookupSubTable::dispatch_OT_hb_closure_context_t_768ba0(OT::ChainContextFormat2::Self *a1, OT::hb_closure_context_t *a2, int a3)
{
  int result;
  int16_t v4;

  switch ( a3 )
  {
    case 1:
      result = OT::SingleSubst::dispatch_OT_hb_closure_context_t_768ba0((uint8_t *)a1, (int)(uintptr_t)(a2));
      break;
    case 2:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      OT::MultipleSubstFormat1::closure((OT::MultipleSubstFormat1::Self *)(a1), a2);
      result = 0;
      break;
    case 3:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::hb_closure_context_t::dispatch<OT::AlternateSubstFormat1::Self>((int)(uintptr_t)(a2), (uint8_t *)a1);
      break;
    case 4:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      OT::LigatureSubstFormat1::closure((OT::LigatureSubstFormat1::Self *)(a1), a2);
      result = 0;
      break;
    case 5:
      result = OT::Context::dispatch_OT_hb_closure_context_t_768ba0((uint8_t *)a1, (int)(uintptr_t)(a2));
      break;
    case 6:
      v4 = *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8);
      switch ( v4 )
      {
        case 1:
          result = sub_12C8790((uint8_t *)a1, (int)(uintptr_t)(a2));
          break;
        case 2:
          OT::ChainContextFormat2::closure(a1, (const hb_set_t **)a2);
          result = 0;
          break;
        case 3:
          OT::ChainContextFormat3::closure((OT::ChainContextFormat3::Self *)(a1), (const hb_set_t **)a2);
          result = 0;
          break;
        default:
          goto LABEL_2;
      }
      break;
    case 7:
      result = OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_closure_context_t_768ba0((uint8_t *)a1, a2);
      break;
    case 8:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::hb_closure_context_t::dispatch<OT::ReverseChainSingleSubstFormat1::Self>((int)(uintptr_t)(a2), (uint8_t *)a1);
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::dispatch_OT_hb_closure_context_t_768ba0  (binary VA: 0x12df0b0)
// Original: OT::SubstLookup::dispatch<OT::hb_closure_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookup::dispatch_OT_hb_closure_context_t_768ba0(uint8_t *a1, OT::hb_closure_context_t *a2)
{
  uint8_t v2;
  int16_t v3; // si
  int v4;
  unsigned int v5;
  int16_t v6;
  uint8_t *v7;
  uint16_t v8;
  uint8_t *v9;
  int v11;
  OT::ChainContextFormat2::Self *v12;
  int16_t v13;
  int v14;
  int16_t v15;
  int v16;

  v2 = a1[5];
  v3 = a1[4] << 8;
  v4 = (uint16_t)(v3 + v2);
  if ( v3 + v2 != 0 )
  {
    v5 = 0;
    v16 = v4 - 1;
    v15 = (*a1 << 8) + a1[1];
    v6 = a1[4];
    while ( 1 )
    {
      v7 = (uint8_t *)&unk_2116E00;
      if ( v5 < (uint16_t)(v2 + (v6 << 8)) )
        v7 = &a1[2 * v5 + 6];
      v8 = v7[1] + (*v7 << 8);
      v9 = (uint8_t *)&unk_2116E00;
      if ( v8 != 0 )
        v9 = &a1[v8];
      switch ( v15 )
      {
        case 1:
          OT::SingleSubst::dispatch_OT_hb_closure_context_t_768ba0(v9, (int)(uintptr_t)(a2));
          goto LABEL_9;
        case 2:
          if ( v9[1] + (*v9 << 8) == 1 )
            OT::MultipleSubstFormat1::closure((OT::MultipleSubstFormat1::Self *)v9, a2);
          goto LABEL_9;
        case 3:
          if ( v9[1] + (*v9 << 8) == 1 )
            OT::hb_closure_context_t::dispatch<OT::AlternateSubstFormat1::Self>((int)(uintptr_t)(a2), v9);
          goto LABEL_9;
        case 4:
          if ( v9[1] + (*v9 << 8) == 1 )
            OT::LigatureSubstFormat1::closure((OT::LigatureSubstFormat1::Self *)v9, a2);
          goto LABEL_9;
        case 5:
          OT::Context::dispatch_OT_hb_closure_context_t_768ba0(v9, (int)(uintptr_t)(a2));
          goto LABEL_9;
        case 6:
          v13 = v9[1] + (*v9 << 8);
          switch ( v13 )
          {
            case 2:
              OT::ChainContextFormat2::closure((OT::ChainContextFormat2::Self *)v9, (const hb_set_t **)a2);
              break;
            case 3:
              OT::ChainContextFormat3::closure((OT::ChainContextFormat3::Self *)v9, (const hb_set_t **)a2);
              break;
            case 1:
              sub_12C8790(v9, (int)(uintptr_t)(a2));
              break;
            default:
              break;
          }
          goto LABEL_9;
        case 7:
          v11 = 0;
          if ( v9[1] + (*v9 << 8) == 1
            && (v11 = (uint16_t)(v9[3] + (v9[2] << 8)),
                (v14 = (v9[6] << 8) + (v9[5] << 16) + (v9[4] << 24) + v9[7]) != 0) )
          {
            v12 = (OT::ChainContextFormat2::Self *)&v9[v14];
          }
          else
          {
            v12 = (OT::ChainContextFormat2::Self *)&unk_2116E00;
          }
          OT::SubstLookupSubTable::dispatch_OT_hb_closure_context_t_768ba0(v12, a2, v11);
          goto LABEL_9;
        case 8:
          if ( v9[1] + (*v9 << 8) != 1 )
            goto LABEL_9;
          OT::hb_closure_context_t::dispatch<OT::ReverseChainSingleSubstFormat1::Self>((int)(uintptr_t)(a2), v9);
          if ( v5 == v16 )
            return 0;
          goto LABEL_10;
        default:
LABEL_9:
          if ( v5 == v16 )
            return 0;
LABEL_10:
          v6 = a1[4];
          ++v5;
          v2 = a1[5];
          break;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::dispatch_recurse_func_OT_hb_closure_context_t_6c6d64  (binary VA: 0x12df350)
// Original: OT::SubstLookup::dispatch_recurse_func<OT::hb_closure_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookup::dispatch_recurse_func_OT_hb_closure_context_t_6c6d64(OT::hb_closure_context_t *a1, unsigned int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  int v7;

  v2 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 72) + 16);
  v3 = (uint16_t)(*(uint8_t *)(v2 + 9) + (*(uint8_t *)(v2 + 8) << 8));
  v4 = (uint8_t *)(v3 + v2);
  if ( v3 == 0 )
    v4 = (uint8_t *)&unk_2116E00;
  if ( a2 < (uint16_t)(v4[1] + (*v4 << 8)) )
  {
    v7 = (uint16_t)(v4[2 * a2 + 3] + (v4[2 * a2 + 2] << 8));
    v5 = &v4[v7];
    if ( v7 == 0 )
      v5 = (uint8_t *)&unk_2116E00;
  }
  else
  {
    v5 = (uint8_t *)&unk_2116E00;
  }
  return OT::SubstLookup::dispatch_OT_hb_closure_context_t_768ba0(v5, a1);
}

// ----------------------------------------------------------------------------
// Function: OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_collect_glyphs_con_a8586d  (binary VA: 0x12df6a0)
// Original: OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_collect_glyphs_con_a8586d(uint8_t *a1, OT::hb_collect_glyphs_context_t *a2)
{
  unsigned int v3;
  uint8_t *v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int result;

  while ( 2 )
  {
    if ( a1[1] + (*a1 << 8) == 1 )
    {
      v5 = (a1[5] << 16) + (a1[4] << 24) + (a1[6] << 8);
      v6 = a1[7];
      v7 = v6 + v5 == 0;
      v8 = v6 + v5;
      v3 = (uint16_t)((a1[2] << 8) + a1[3]);
      if ( v7 )
        v4 = (uint8_t *)&unk_2116E00;
      else
        v4 = &a1[v8];
      if ( v3 > 8 )
        return 0;
    }
    else
    {
      v3 = 0;
      v4 = (uint8_t *)&unk_2116E00;
    }
    switch ( v3 )
    {
      case 0u:
        return 0;
      case 1u:
        result = OT::SingleSubst::dispatch_OT_hb_collect_glyphs_con_a8586d(v4, (int)(uintptr_t)(a2));
        break;
      case 2u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        result = sub_12CD2E0(v4, (int)(uintptr_t)(a2));
        break;
      case 3u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        result = OT::hb_collect_glyphs_context_t::dispatch<OT::AlternateSubstFormat1::Self>((int)(uintptr_t)(a2), v4);
        break;
      case 4u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        OT::LigatureSubstFormat1::collect_glyphs((OT::LigatureSubstFormat1::Self *)v4, a2);
        result = 0;
        break;
      case 5u:
        result = OT::Context::dispatch_OT_hb_collect_glyphs_con_a8586d(v4, (int)(uintptr_t)(a2));
        break;
      case 6u:
        result = OT::ChainContext::dispatch_OT_hb_collect_glyphs_con_a8586d(
                   (OT::ChainContextFormat3::Self *)v4,
                   (hb_set_t **)a2);
        break;
      case 7u:
        a1 = v4;
        continue;
      case 8u:
        if ( v4[1] + (*v4 << 8) != 1 )
          return 0;
        OT::ReverseChainSingleSubstFormat1::collect_glyphs((OT::ReverseChainSingleSubstFormat1::Self *)v4, (hb_set_t **)a2);
        result = 0;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookupSubTable::dispatch_OT_hb_collect_glyphs_con_a8586d  (binary VA: 0x12df850)
// Original: OT::SubstLookupSubTable::dispatch<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookupSubTable::dispatch_OT_hb_collect_glyphs_con_a8586d(OT::ChainContextFormat3::Self *a1, OT::hb_collect_glyphs_context_t *a2, int a3)
{
  int result;

  switch ( a3 )
  {
    case 1:
      result = OT::SingleSubst::dispatch_OT_hb_collect_glyphs_con_a8586d((uint8_t *)a1, (int)(uintptr_t)(a2));
      break;
    case 2:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = sub_12CD2E0((uint8_t *)a1, (int)(uintptr_t)(a2));
      break;
    case 3:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      result = OT::hb_collect_glyphs_context_t::dispatch<OT::AlternateSubstFormat1::Self>((int)(uintptr_t)(a2), (uint8_t *)a1);
      break;
    case 4:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      OT::LigatureSubstFormat1::collect_glyphs((OT::LigatureSubstFormat1::Self *)(a1), a2);
      result = 0;
      break;
    case 5:
      result = OT::Context::dispatch_OT_hb_collect_glyphs_con_a8586d((uint8_t *)a1, (int)(uintptr_t)(a2));
      break;
    case 6:
      result = OT::ChainContext::dispatch_OT_hb_collect_glyphs_con_a8586d(a1, (hb_set_t **)a2);
      break;
    case 7:
      result = OT::Extension_OT_ExtensionSubst_bacd81::dispatch_OT_hb_collect_glyphs_con_a8586d((uint8_t *)a1, a2);
      break;
    case 8:
      if ( *((uint8_t *)a1 + 1) + (*(uint8_t *)a1 << 8) != 1 )
        goto LABEL_2;
      OT::ReverseChainSingleSubstFormat1::collect_glyphs((OT::ReverseChainSingleSubstFormat1::Self *)(a1), (hb_set_t **)a2);
      result = 0;
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::dispatch_OT_hb_collect_glyphs_con_a8586d  (binary VA: 0x12df9c0)
// Original: OT::SubstLookup::dispatch<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookup::dispatch_OT_hb_collect_glyphs_con_a8586d(uint8_t *a1, hb_set_t **a2)
{
  uint8_t v2;
  int16_t v3; // si
  int v4;
  unsigned int v5;
  int16_t v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  int v11;
  OT::ChainContextFormat3::Self *v12;
  int16_t v13;
  OT::Coverage::Self *v14;
  int16_t v15;
  unsigned int v16;
  uint8_t i;
  uint16_t v18;
  uint8_t *v19;
  uint16_t v20;
  uint8_t *v21;
  int v22;
  int v23;
  bool v24;
  int v25;
  typedef int16_t _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef uint8_t _g4_t_v30;
  typedef uint32_t _g4_t_v31[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (6u + sizeof(_g4_t_v26)) > _g4_s0 ? (6u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v29)) > _g4_s3 ? (24u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v30)) > _g4_s4 ? (28u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v31)) > _g4_s5 ? (32u + sizeof(_g4_t_v31)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 6u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);

  v2 = a1[5];
  v26 = (*a1 << 8) + a1[1];
  v3 = a1[4] << 8;
  v4 = (uint16_t)(v3 + v2);
  if ( v3 + v2 != 0 )
  {
    v5 = 0;
    v27 = v4 - 1;
    v6 = a1[4];
    while ( 1 )
    {
      v7 = (uint8_t *)&unk_2116E00;
      v8 = (uint8_t *)&unk_2116E00;
      if ( (uint16_t)(v2 + (v6 << 8)) > v5 )
        v7 = &a1[2 * v5 + 6];
      v9 = (uint16_t)((*v7 << 8) + v7[1]);
      if ( v9 != 0 )
        v8 = &a1[v9];
      switch ( v26 )
      {
        case 1:
          OT::SingleSubst::dispatch_OT_hb_collect_glyphs_con_a8586d(v8, (int)(uintptr_t)(a2));
          goto LABEL_9;
        case 2:
          if ( v8[1] + (*v8 << 8) == 1 )
            sub_12CD2E0(v8, (int)(uintptr_t)(a2));
          goto LABEL_9;
        case 3:
          if ( v8[1] + (*v8 << 8) == 1 )
            OT::hb_collect_glyphs_context_t::dispatch<OT::AlternateSubstFormat1::Self>((int)(uintptr_t)(a2), v8);
          goto LABEL_9;
        case 4:
          if ( v8[1] + (*v8 << 8) == 1 )
            OT::LigatureSubstFormat1::collect_glyphs(
              (OT::LigatureSubstFormat1::Self *)v8,
              (OT::hb_collect_glyphs_context_t *)a2);
          goto LABEL_9;
        case 5:
          OT::Context::dispatch_OT_hb_collect_glyphs_con_a8586d(v8, (int)(uintptr_t)(a2));
          goto LABEL_9;
        case 6:
          v13 = v8[1] + (*v8 << 8);
          switch ( v13 )
          {
            case 2:
              sub_12CD190(v8, (int)(uintptr_t)(a2));
              break;
            case 3:
              OT::ChainContextFormat3::collect_glyphs((OT::ChainContextFormat3::Self *)v8, a2);
              break;
            case 1:
              v14 = (OT::Coverage::Self *)&unk_2116E00;
              if ( (v8[2] << 8) + v8[3] != 0 )
                v14 = (OT::Coverage::Self *)&v8[(uint16_t)((v8[2] << 8) + v8[3])];
              OT::Coverage::add_coverage<hb_set_t>(v14, a2[2]);
              v15 = v8[4];
              v30 = v8[5];
              v31[0] = (uint32_t)(uintptr_t)(sub_12C84C0);
              memset(&v31[1], 0, 12);
              if ( (v15 << 8) + v30 != 0 )
              {
                v28 = (uint16_t)((v15 << 8) + v30) - 1;
                v29 = v5;
                v16 = 0;
                for ( i = v30; ; i = v8[5] )
                {
                  v18 = i + (v15 << 8);
                  v19 = (uint8_t *)&unk_2116E00;
                  if ( v16 < v18 )
                    v19 = &v8[2 * v16 + 6];
                  v20 = v19[1] + (*v19 << 8);
                  v21 = (uint8_t *)&unk_2116E00;
                  if ( v20 != 0 )
                    v21 = &v8[v20];
                  OT::ChainRuleSet::collect_glyphs(v21, (uint32_t *)(a2), (int)(uintptr_t)(v31));
                  if ( v16 == v28 )
                    break;
                  v15 = v8[4];
                  ++v16;
                }
                v5 = v29;
              }
              break;
            default:
              break;
          }
          goto LABEL_9;
        case 7:
          v11 = 0;
          if ( v8[1] + (*v8 << 8) != 1
            || (v22 = (v8[6] << 8) + (v8[5] << 16) + (v8[4] << 24),
                v23 = v8[7],
                v24 = v22 + v23 == 0,
                v25 = v22 + v23,
                v11 = (uint16_t)((v8[2] << 8) + v8[3]),
                v24) )
          {
            v12 = (OT::ChainContextFormat3::Self *)&unk_2116E00;
          }
          else
          {
            v12 = (OT::ChainContextFormat3::Self *)&v8[v25];
          }
          OT::SubstLookupSubTable::dispatch_OT_hb_collect_glyphs_con_a8586d(
            v12,
            (OT::hb_collect_glyphs_context_t *)a2,
            v11);
          goto LABEL_9;
        case 8:
          if ( v8[1] + (*v8 << 8) != 1 )
            goto LABEL_9;
          OT::ReverseChainSingleSubstFormat1::collect_glyphs((OT::ReverseChainSingleSubstFormat1::Self *)v8, a2);
          if ( v5 == v27 )
            return 0;
          goto LABEL_10;
        default:
LABEL_9:
          if ( v5 == v27 )
            return 0;
LABEL_10:
          v6 = a1[4];
          ++v5;
          v2 = a1[5];
          break;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: OT::SubstLookup::dispatch_recurse_func_OT_hb_collect_glyphs_con_2fce9e  (binary VA: 0x12dfd50)
// Original: OT::SubstLookup::dispatch_recurse_func<OT::hb_collect_glyphs_context_t>
// ----------------------------------------------------------------------------
int OT::SubstLookup::dispatch_recurse_func_OT_hb_collect_glyphs_con_2fce9e(hb_set_t **a1, unsigned int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  int v7;

  v2 = *(uint32_t *)(*((uint32_t *)*a1 + 18) + 16);
  v3 = (uint16_t)(*(uint8_t *)(v2 + 9) + (*(uint8_t *)(v2 + 8) << 8));
  v4 = (uint8_t *)(v3 + v2);
  if ( v3 == 0 )
    v4 = (uint8_t *)&unk_2116E00;
  if ( a2 < (uint16_t)(v4[1] + (*v4 << 8)) )
  {
    v7 = (uint16_t)(v4[2 * a2 + 3] + (v4[2 * a2 + 2] << 8));
    v5 = &v4[v7];
    if ( v7 == 0 )
      v5 = (uint8_t *)&unk_2116E00;
  }
  else
  {
    v5 = (uint8_t *)&unk_2116E00;
  }
  return OT::SubstLookup::dispatch_OT_hb_collect_glyphs_con_a8586d(v5, a1);
}

// ----------------------------------------------------------------------------
// Function: OT::OffsetTo_OT_PosLookup_OT_IntType_aa7173::sanitize  (binary VA: 0x12dfe00)
// Original: OT::OffsetTo<OT::PosLookup,OT::IntType<unsigned short,2u>>::sanitize
// ----------------------------------------------------------------------------
int OT::OffsetTo_OT_PosLookup_OT_IntType_aa7173::sanitize(OT::OffsetTo<OT::PosLookup::Self, OT::IntType<unsigned short, 2u>> *self, OT::hb_sanitize_context_t::Self *a2, char *a3)
{
  int result;
  unsigned int v4;
  int v5;
  uint8_t *v6;
  unsigned int v7;
  char *v8;
  unsigned int v9;
  int v10;
  int16_t v11;
  unsigned int v12;
  char v13;
  unsigned int v14;
  unsigned int v15;
  char *v16;
  unsigned int v17;
  uint8_t *v18;
  unsigned int v19;
  unsigned int v20;

  result = 0;
  v17 = *((uint32_t *)a2 + 1);
  if ( (unsigned int)(uintptr_t)(self) >= v17 )
  {
    v4 = *((uint32_t *)a2 + 2);
    if ( (unsigned int)(uintptr_t)(self) <= v4 && v4 - (unsigned int)(uintptr_t)(self) > 1 )
    {
      v5 = (uint16_t)(*((uint8_t *)self + 1) + (*(uint8_t *)self << 8));
      result = 1;
      if ( *((uint8_t *)self + 1) + (*(uint8_t *)self << 8) != 0 )
      {
        v18 = (uint8_t *)&a3[v5];
        if ( v17 <= (unsigned int)(uintptr_t)(&a3[v5]) && v4 >= (unsigned int)(uintptr_t)(v18) && v4 - (unsigned int)(uintptr_t)(v18) > 5 )
        {
          v6 = v18 + 4;
          if ( v17 <= (unsigned int)(uintptr_t)(v18 + 4) && v4 >= (unsigned int)(uintptr_t)(v6) && v4 - (unsigned int)(uintptr_t)(v6) > 1 )
          {
            v16 = (char *)(v18 + 4);
            v19 = (uint16_t)(v18[5] + (v18[4] << 8));
            if ( OT::hb_sanitize_context_t::check_array(a2, v18 + 4, 2u, v19) )
            {
              if ( (v18[3] & 0x10) == 0 || (v7 = (unsigned int)(uintptr_t)(&v16[2 * v19 + 2]), v17 <= v7) && v4 >= v7 && v4 - v7 > 1 )
              {
                v20 = (uint16_t)(v18[1] + (*v18 << 8));
                if ( v17 <= (unsigned int)(uintptr_t)(v16)
                  && v4 >= (unsigned int)(uintptr_t)(v16)
                  && v4 - (unsigned int)(uintptr_t)(v16) > 1
                  && OT::hb_sanitize_context_t::check_array(a2, v16, 2u, v19) )
                {
                  if ( v19 == 0 )
                    return 1;
                  v8 = (char *)(v18 + 6);
                  if ( v17 <= (unsigned int)(uintptr_t)(v18 + 6) && v4 >= (unsigned int)(uintptr_t)(v8) )
                  {
                    v9 = v4;
                    v10 = 0;
                    if ( v9 - (unsigned int)(uintptr_t)(v8) > 1 )
                    {
                      do
                      {
                        v11 = (uint8_t)v8[1];
                        if ( v11 + ((uint8_t)*v8 << 8) != 0
                          && (uint8_t)OT::PosLookupSubTable::sanitize(
                                                (OT::PosLookupSubTable::Self *)&v18[(uint16_t)(v11
                                                                                               + ((uint8_t)*v8 << 8))],
                                                a2,
                                                v20) == 0 )
                        {
                          v12 = *((uint32_t *)a2 + 4);
                          v13 = *((uint8_t *)a2 + 12);
                          if ( v12 > 0x63 )
                            return 0;
                          v14 = v12 + 1;
                          *((uint32_t *)a2 + 4) = v14;
                          if ( v13 == 0 )
                            goto LABEL_34;
                          *v8 = 0;
                          v8[1] = 0;
                        }
                        if ( ++v10 >= v19 )
                          return 1;
                        v8 = &v16[2 * v10 + 2];
                        if ( (unsigned int)(uintptr_t)(v8) < *((uint32_t *)a2 + 1) )
                          break;
                        v15 = *((uint32_t *)a2 + 2);
                        if ( (unsigned int)(uintptr_t)(v8) > v15 )
                          break;
                      }
                      while ( v15 - (unsigned int)(uintptr_t)(v8) > 1 );
                    }
                  }
                }
              }
            }
          }
        }
        v13 = *((uint8_t *)a2 + 12);
        v14 = *((uint32_t *)a2 + 4);
LABEL_34:
        if ( v14 > 0x63 )
        {
          return 0;
        }
        else
        {
          *((uint32_t *)a2 + 4) = v14 + 1;
          result = 0;
          if ( v13 != 0 )
          {
            result = 1;
            *(uint8_t *)self = 0;
            *((uint8_t *)self + 1) = 0;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OT::GPOS::sanitize  (binary VA: 0x12e0090)
// Original: OT::GPOS::sanitize
// ----------------------------------------------------------------------------
int OT::GPOS::sanitize(OT::GPOS::Self *self, OT::hb_sanitize_context_t::Self *a2)
{
  char v2;
  int v3;
  unsigned int v4;
  char *v5;
  unsigned int v6;
  char *v7;
  int v8;
  unsigned int v10;
  char v11;
  unsigned int v12;

  v2 = OT::GSUBGPOS::sanitize((OT::GSUBGPOS::Self *)(self), a2);
  v3 = 0;
  if ( v2 != 0 )
  {
    v4 = *((uint32_t *)a2 + 1);
    v5 = (char *)self + 8;
    if ( (unsigned int)(uintptr_t)(self) + 8 >= v4 )
    {
      v6 = *((uint32_t *)a2 + 2);
      if ( (unsigned int)(uintptr_t)(v5) <= v6 && v6 - (unsigned int)(uintptr_t)(v5) > 1 )
      {
        v3 = 1;
        if ( (*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9) != 0 )
        {
          v7 = (char *)self + (uint16_t)((*((uint8_t *)self + 8) << 8) + *((uint8_t *)self + 9));
          if ( v4 <= (unsigned int)(uintptr_t)(v7) && v6 >= (unsigned int)(uintptr_t)(v7) && v6 - (unsigned int)(uintptr_t)(v7) > 1 )
          {
            v12 = (uint16_t)((uint8_t)v7[1] + ((uint8_t)*v7 << 8));
            if ( OT::hb_sanitize_context_t::check_array(a2, v7, 2u, v12) )
            {
              v8 = 1;
              if ( v12 == 0 )
                return 1;
              while ( (uint8_t)OT::OffsetTo_OT_PosLookup_OT_IntType_aa7173::sanitize(
                                         (OT::OffsetTo<OT::PosLookup::Self, OT::IntType<unsigned short, 2u>> *)&v7[2 * v8],
                                         a2,
                                         v7) != 0 )
              {
                if ( ++v8 == v12 + 1 )
                  return 1;
              }
            }
          }
          v10 = *((uint32_t *)a2 + 4);
          v3 = 0;
          v11 = *((uint8_t *)a2 + 12);
          if ( v10 <= 0x63 )
          {
            *((uint32_t *)a2 + 4) = v10 + 1;
            if ( v11 != 0 )
            {
              *((uint8_t *)self + 8) = 0;
              *((uint8_t *)self + 9) = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: OT::Sanitizer_OT_GPOS_d62403::sanitize  (binary VA: 0x12e01c0)
// Original: OT::Sanitizer<OT::GPOS>::sanitize
// ----------------------------------------------------------------------------
int * OT::Sanitizer_OT_GPOS_d62403::sanitize(int *a1)
{
  int *v1;
  char *v2;
  unsigned int v3;
  int16_t v4;
  int16_t v5; // si
  char *v7;
  int v8;
  unsigned int v9;
  char v10; // si
  typedef uint8_t *_g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef OT::GSUBGPOS::Self *_g4_t_data;
  typedef char *_g4_t_v15;
  typedef char _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_data)) > _g4_s3 ? (20u + sizeof(_g4_t_data)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_data &data = *reinterpret_cast<_g4_t_data *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);

  v13 = 0;
  data = nullptr;
  v15 = nullptr;
  v17 = 0;
  v1 = (int *)(hb_blob_reference(a1));
  v18 = v1;
  v16 = 0;
  while ( 1 )
  {
    data = (OT::GSUBGPOS::Self *)hb_blob_get_data((int)(uintptr_t)(v1), nullptr);
    v15 = (char *)data + hb_blob_get_length((int)(uintptr_t)(v18));
    v17 = 0;
    v13 = 0;
    v11 = (uint8_t *)data;
    if ( data == nullptr )
      goto LABEL_9;
    if ( (uint8_t)OT::GSUBGPOS::sanitize(data, (OT::hb_sanitize_context_t::Self *)&v13) == 0
      || (v2 = (char *)(v11 + 8), v11 + 8 < (uint8_t *)data) )
    {
      v3 = v17;
      goto LABEL_12;
    }
    v3 = v17;
    if ( v2 <= v15 && (unsigned int)(v15 - v2) > 1 )
    {
      v4 = v11[8] << 8;
      v5 = v11[9];
      if ( v4 + v5 == 0 )
      {
        if ( v17 != 0 )
          goto LABEL_28;
        goto LABEL_9;
      }
      v7 = (char *)&v11[(uint16_t)(v4 + v5)];
      if ( data <= (OT::GSUBGPOS::Self *)v7 && v15 >= v7 && (unsigned int)(v15 - v7) > 1 )
      {
        v12 = (uint16_t)((uint8_t)v7[1] + ((uint8_t)*v7 << 8));
        if ( OT::hb_sanitize_context_t::check_array((OT::hb_sanitize_context_t::Self *)&v13, v7, 2u, v12) )
        {
          if ( v12 == 0 )
            goto LABEL_26;
          v8 = 0;
          while ( (uint8_t)OT::OffsetTo_OT_PosLookup_OT_IntType_aa7173::sanitize(
                                     (OT::OffsetTo<OT::PosLookup::Self, OT::IntType<unsigned short, 2u>> *)&v7[2 * v8 + 2],
                                     (OT::hb_sanitize_context_t::Self *)&v13,
                                     v7) != 0 )
          {
            if ( v12 <= ++v8 )
            {
              v9 = v17;
              goto LABEL_27;
            }
          }
        }
      }
      v3 = v17;
      if ( v17 <= 0x63 )
      {
        v3 = ++v17;
        if ( v16 != 0 )
          break;
      }
    }
LABEL_12:
    if ( v3 == 0 )
      goto LABEL_33;
    if ( v16 != 0 )
      goto LABEL_33;
    data = (OT::GSUBGPOS::Self *)hb_blob_get_data_writable((int)(uintptr_t)(a1), nullptr);
    v15 = (char *)data + hb_blob_get_length((int)(uintptr_t)(a1));
    if ( data == nullptr )
      goto LABEL_33;
    v16 = 1;
    v1 = v18;
  }
  v11[8] = 0;
  v11[9] = 0;
LABEL_26:
  v9 = v17;
LABEL_27:
  if ( v9 == 0 )
  {
LABEL_9:
    hb_blob_destroy(v18);
    return a1;
  }
LABEL_28:
  v17 = 0;
  v10 = OT::GPOS::sanitize((OT::GPOS::Self *)v11, (OT::hb_sanitize_context_t::Self *)&v13);
  if ( v17 == 0 )
  {
    hb_blob_destroy(v18);
    v18 = nullptr;
    v15 = nullptr;
    data = nullptr;
    if ( v10 == 0 )
      goto LABEL_34;
    return a1;
  }
LABEL_33:
  hb_blob_destroy(v18);
  v18 = nullptr;
  v15 = nullptr;
  data = nullptr;
LABEL_34:
  hb_blob_destroy(a1);
  return (int *)hb_blob_get_empty();
}

// ----------------------------------------------------------------------------
// Function: hb_ot_tags_from_script  (binary VA: 0x12e1ca0)
// Original: hb_ot_tags_from_script
// ----------------------------------------------------------------------------
int hb_ot_tags_from_script(unsigned int a1, int *a2, int *a3)
{
  int result;
  int v4;

  result = a1;
  *a3 = 1145457748;
  if ( a1 == 1281453935 )
  {
    *a2 = 1818324768;
    return result;
  }
  if ( a1 > 0x4C616F6F )
  {
    switch ( a1 )
    {
      case 0x4E6B6F6Fu:
        *a2 = 1852534560;
        return result;
      case 0x56616969u:
        *a2 = 1986095392;
        return result;
      case 0x59696969u:
        *a2 = 2036932640;
        return result;
      default:
LABEL_6:
        v4 = a1 | 0x20000000;
        goto LABEL_7;
    }
  }
  if ( a1 == 0 )
  {
    *a2 = 1145457748;
    return result;
  }
  v4 = 1801547361;
  if ( a1 != 1214870113 )
    goto LABEL_6;
LABEL_7:
  *a2 = v4;
  switch ( a1 )
  {
    case 0x42656E67u:
      result = 1651402546;
      goto LABEL_29;
    case 0x44657661u:
      result = 1684370994;
      goto LABEL_29;
    case 0x47756A72u:
      result = 1735029298;
      goto LABEL_29;
    case 0x47757275u:
      result = 1735750194;
LABEL_29:
      *a3 = v4;
      *a2 = result;
      return result;
    case 0x4B6E6461u:
      result = 1802396722;
      goto LABEL_29;
    case 0x4D6C796Du:
      result = 1835822386;
      goto LABEL_29;
    case 0x4D796D72u:
      result = 1836674354;
      goto LABEL_29;
    case 0x4F727961u:
      result = 1869773106;
      goto LABEL_29;
    case 0x54616D6Cu:
      result = 1953328178;
      goto LABEL_29;
    case 0x54656C75u:
      result = 1952803890;
      goto LABEL_29;
    default:
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hb_ot_tag_to_script  (binary VA: 0x12e1e20)
// Original: hb_ot_tag_to_script
// ----------------------------------------------------------------------------
int16_t hb_ot_tag_to_script(unsigned int a1)
{
  int v1;
  int v2;
  int16_t result;

  LOWORD(v1) = a1;
  v2 = (uint8_t)a1;
  if ( (uint8_t)a1 == 50 )
  {
    result = 25697;
    if ( a1 == 1802396722 )
      return result;
    if ( a1 > 0x6B6E6432 )
    {
      result = 31073;
      if ( a1 == 1869773106 )
        return result;
      if ( a1 > 0x6F727932 )
      {
        result = 27765;
        if ( a1 == 1952803890 )
          return result;
        result = 28012;
        if ( a1 == 1953328178 )
          return result;
      }
      else
      {
        result = 31085;
        if ( a1 == 1835822386 )
          return result;
        result = 28018;
        if ( a1 == 1836674354 )
          return result;
      }
    }
    else
    {
      result = 30305;
      if ( a1 == 1684370994 )
        return result;
      if ( a1 <= 0x64657632 )
      {
        result = 28263;
        if ( a1 == 1651402546 )
          return result;
      }
      else
      {
        result = 27250;
        if ( a1 == 1735029298 )
          return result;
        result = 29301;
        if ( a1 == 1735750194 )
          return result;
      }
    }
    return 31354;
  }
  result = 0;
  if ( a1 != 1145457748 )
  {
    if ( (a1 & 0xFF00) == 0x2000 )
    {
      v1 = (a1 >> 8) & 0xFF00 | a1;
      v2 = (uint8_t)a1;
    }
    if ( v2 == 32 )
      LOWORD(v1) = BYTE1(v1) | (uint16_t)v1;
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_tag_from_language  (binary VA: 0x12e1f00)
// Original: hb_ot_tag_from_language
// ----------------------------------------------------------------------------
unsigned int hb_ot_tag_from_language(int a1)
{
  unsigned int result;
  char *v2;
  char v3;
  char v4; // di
  int v5;
  char v6;
  char v7; // di
  char v8;
  uint32_t *v9;
  int v10;
  unsigned int v11;
  unsigned int i;
  unsigned int v13;
  g4_int128_t *v14;
  unsigned int v15;
  int v16;
  char *v17;
  char *v18;
  size_t v19;
  signed int v20;
  char *v21;
  char *v22; // kr00_4
  char v23;
  char *v24; // kr04_4
  char v25;
  char *v26; // kr08_4
  char v27;
  char *v28; // kr0C_4
  char v29;
  char *v30; // kr10_4
  char v31;
  char *v32; // kr14_4
  char v33;
  char *v34; // kr18_4
  int v35;
  int v36;
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v37)) > _g4_s0 ? (4u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v38)) > _g4_s1 ? (12u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v39)) > _g4_s2 ? (12u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v40)) > _g4_s3 ? (16u + sizeof(_g4_t_v40)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);

  result = 1684434036;
  if ( a1 != 0 )
  {
    v38 = (char *)hb_language_to_string(a1);
    v2 = strstr(v38, "x-hbot");
    if ( v2 != nullptr )
    {
      v3 = v2[6];
      if ( (uint8_t)(v3 - 65) <= 0x19u )
        goto LABEL_4;
      if ( (uint8_t)(v3 - 97) <= 0x19u )
      {
        v3 -= 32;
LABEL_4:
        v4 = v2[7];
        LOBYTE(v40[0]) = v3;
        if ( (uint8_t)(v4 - 65) > 0x19u )
        {
          v5 = 1;
          if ( (uint8_t)(v4 - 97) > 0x19u )
            goto LABEL_17;
          v4 -= 32;
        }
        v6 = v4;
        v7 = v2[8];
        BYTE1(v40[0]) = v6;
        if ( (uint8_t)(v7 - 65) > 0x19u )
        {
          v5 = 2;
          if ( (uint8_t)(v7 - 97) > 0x19u )
            goto LABEL_17;
          v7 -= 32;
        }
        v8 = v2[9];
        BYTE2(v40[0]) = v7;
        if ( (uint8_t)(v8 - 65) <= 0x19u )
        {
LABEL_9:
          HIBYTE(v40[0]) = v8;
          return __builtin_bswap32(v40[0]);
        }
        v5 = 3;
        if ( (uint8_t)(v8 - 97) <= 0x19u )
        {
          v8 -= 32;
          goto LABEL_9;
        }
LABEL_17:
        v10 = 4 - v5;
        v11 = -((int)(uintptr_t)(v40) + v5) & 0xF;
        v37 = v5;
        if ( v11 > 4 - v5 )
          v11 = 4 - v5;
        if ( v11 == 0 )
          goto LABEL_70;
        for ( i = 0; i < v11; ++i )
          *((uint8_t *)v40 + v5++) = 32;
        if ( v10 != v11 )
        {
LABEL_70:
          v13 = v10 - v11;
          v39 = 16 * (v13 >> 4);
          if ( v39 == 0 )
            goto LABEL_71;
          v14 = (g4_int128_t *)((char *)v40 + v11 + v37);
          v15 = 0;
          do
          {
            ++v15;
            *v14++ = xmmword_1C7CB30;
          }
          while ( v15 < v13 >> 4 );
          v5 += v39;
          if ( v13 != v39 )
          {
LABEL_71:
            do
            {
              *((uint8_t *)v40 + v5) = 32;
              v16 = v5 + 1;
              if ( v16 > 3 )
                break;
              *((uint8_t *)v40 + v16) = 32;
              v5 = v16 + 1;
            }
            while ( v5 <= 3 );
          }
        }
        return __builtin_bswap32(v40[0]);
      }
    }
    v9 = (uint32_t *)(bsearch(v38, "aa", 0x213u, 8u, (__compar_fn_t)sub_12E1C00));
    if ( v9 != nullptr )
    {
      return v9[1];
    }
    else
    {
      v17 = strchr(v38, 45);
      v18 = v17;
      if ( v17 != nullptr )
      {
        v19 = v17 - v38;
      }
      else
      {
        v19 = strlen(v38);
        v18 = nullptr;
      }
      v20 = 2;
      if ( v19 >= 2 )
        v20 = v19;
      if ( v20 > 3 )
        v20 = 3;
      if ( memcmp(v38, "zh", v20) == 0 )
      {
        v21 = "zh-cn";
        v22 = (char *)(&aZhCn /* "zh-cn" */[strlen("zh-cn")]);
        if ( strncmp(v38, "zh-cn", v22 - "zh-cn") == 0 )
        {
          v23 = v38[v22 - "zh-cn"];
          if ( v23 == 45 || v23 == 0 )
            return *((uint32_t *)v21 + 2);
        }
        v21 = "zh-hk";
        v24 = (char *)(&aShzzhHk /* " SHZzh-hk" */[strlen("zh-hk") + 4]);
        if ( strncmp(v38, "zh-hk", v24 - "zh-hk") == 0 )
        {
          v25 = v38[v24 - "zh-hk"];
          if ( v25 == 45 || v25 == 0 )
            return *((uint32_t *)v21 + 2);
        }
        v21 = "zh-mo";
        v26 = (char *)(&aHhzzhMo /* " HHZzh-mo" */[strlen("zh-mo") + 4]);
        if ( strncmp(v38, "zh-mo", v26 - "zh-mo") == 0 )
        {
          v27 = v38[v26 - "zh-mo"];
          if ( v27 == 45 || v27 == 0 )
            return *((uint32_t *)v21 + 2);
        }
        v21 = "zh-sg";
        v28 = (char *)(&aThzzhSg /* " THZzh-sg" */[strlen("zh-sg") + 4]);
        if ( strncmp(v38, "zh-sg", v28 - "zh-sg") == 0 )
        {
          v29 = v38[v28 - "zh-sg"];
          if ( v29 == 45 || v29 == 0 )
            return *((uint32_t *)v21 + 2);
        }
        v21 = "zh-tw";
        v30 = (char *)(&aShzzhTw /* " SHZzh-tw" */[strlen("zh-tw") + 4]);
        if ( strncmp(v38, "zh-tw", v30 - "zh-tw") == 0 )
        {
          v31 = v38[v30 - "zh-tw"];
          if ( v31 == 45 || v31 == 0 )
            return *((uint32_t *)v21 + 2);
        }
        v21 = "zh-hans";
        v32 = (char *)(&aThzzhHans /* " THZzh-hans" */[strlen("zh-hans") + 4]);
        if ( strncmp(v38, "zh-hans", v32 - "zh-hans") == 0 )
        {
          v33 = v38[v32 - "zh-hans"];
          if ( v33 == 45 || v33 == 0 )
            return *((uint32_t *)v21 + 2);
        }
        v21 = "zh-hant";
        v34 = (char *)(&aShzzhHant /* " SHZzh-hant" */[strlen("zh-hant") + 4]);
        v35 = strncmp(v38, "zh-hant", v34 - "zh-hant");
        result = 1514689312;
        if ( v35 == 0 )
        {
          v36 = (uint8_t)v38[v34 - "zh-hant"];
          if ( (uint8_t)v36 == 45 || (uint8_t)v36 == 0 )
            return *((uint32_t *)v21 + 2);
        }
      }
      else
      {
        if ( v18 == nullptr )
          v18 = &v38[strlen(v38)];
        result = 1684434036;
        if ( v18 - v38 == 3 )
          return hb_tag_from_string(v38, 3u) & 0xDFDFDFFF;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hb_ot_tag_to_language  (binary VA: 0x12e2510)
// Original: hb_ot_tag_to_language
// ----------------------------------------------------------------------------
char * hb_ot_tag_to_language(int a1)
{
  char *result;
  int v2;
  char v3;
  char s[16];

  result = nullptr;
  if ( a1 != 1684434036 )
  {
    do
    {
      if ( dword_1CF99C4[2 * (uint32_t)(uintptr_t)(result)] == a1 )
        return hb_language_from_string(&aAa_0 /* "aa" */[8 * (uint32_t)(uintptr_t)(result)], -1);
      ++result;
    }
    while ( result != (char *)(uintptr_t)((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_204)->st_shndx + 1) );
    HIWORD(v2) = HIWORD(a1);
    LOWORD(v2) = 0;
    if ( v2 == 1514668032 )
    {
      switch ( a1 )
      {
        case 1514689312:
          return hb_language_from_string("zh-Hans", -1);
        case 1514689568:
          return hb_language_from_string("zh-Hant", -1);
        case 1514686496:
          return hb_language_from_string("zh-hk", -1);
        default:
          break;
      }
    }
    std::memcpy(s, "x-hbot", 6);
    s[6] = HIBYTE(a1);
    s[10] = 0;
    s[7] = BYTE2(a1);
    s[8] = BYTE1(a1);
    v3 = 0;
    if ( (uint8_t)a1 != 32 )
      v3 = a1;
    s[9] = v3;
    return hb_language_from_string(s, -1);
  }
  return result;
}


