#include "Core/Utils/DecompTypes.h"
#include "freetype_engine.h"

// ----------------------------------------------------------------------------
// Function: FT_RoundFix  (binary VA: 0x11aa810)
// Original: FT_RoundFix
// ----------------------------------------------------------------------------
int16_t FT_RoundFix(int a1)
{
  int v1;
  int v2;

  if ( a1 < 0 )
  {
    v2 = 0x8000 - a1;
    LOWORD(v2) = 0;
    return -v2;
  }
  else
  {
    LOWORD(v1) = 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_CeilFix  (binary VA: 0x11aa840)
// Original: FT_CeilFix
// ----------------------------------------------------------------------------
int16_t FT_CeilFix(int a1)
{
  int v1;
  int v2;

  if ( a1 < 0 )
  {
    v2 = 0xFFFF - a1;
    LOWORD(v2) = 0;
    return -v2;
  }
  else
  {
    LOWORD(v1) = 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_FloorFix  (binary VA: 0x11aa870)
// Original: FT_FloorFix
// ----------------------------------------------------------------------------
int16_t FT_FloorFix(int a1)
{
  int v1;
  int v2;

  if ( a1 < 0 )
  {
    v2 = -a1;
    LOWORD(v2) = 0;
    return -v2;
  }
  else
  {
    LOWORD(v1) = 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_MSB  (binary VA: 0x11aa890)
// Original: FT_MSB
// ----------------------------------------------------------------------------
int FT_MSB(unsigned int a1)
{
  unsigned int v1;
  int v2;
  int v3;

  v1 = a1;
  v2 = 0;
  v3 = 8;
  if ( a1 > 0xFFFF )
  {
    v1 = HIWORD(a1);
    LOBYTE(v3) = 24;
    LOBYTE(v2) = 16;
  }
  if ( v1 > 0xFF )
  {
    v1 >>= 8;
    v2 = v3;
  }
  if ( v1 > 0xF )
  {
    v1 >>= 4;
    v2 += 4;
  }
  if ( v1 > 3 )
  {
    v1 >>= 2;
    v2 += 2;
  }
  return v2 - ((v1 < 2) - 1);
}

// ----------------------------------------------------------------------------
// Function: FT_MulDiv  (binary VA: 0x11aa8e0)
// Original: FT_MulDiv
// ----------------------------------------------------------------------------
int FT_MulDiv(int a1, int a2, int a3)
{
  int result;
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
  bool v14;
  unsigned int v15;
  int64_t v16; // rdi
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;

  result = a1;
  if ( a2 != a3 && a1 != 0 )
  {
    v20 = a3 ^ a2 ^ a1;
    v4 = __builtin_abs(a1);
    v5 = __builtin_abs(a2);
    v6 = __builtin_abs(a3);
    if ( v5 > 46340 || v4 > 46340 || v6 <= 0 || v6 > 176095 )
    {
      result = 0x7FFFFFFF;
      if ( v6 != 0 )
      {
        v7 = (uint16_t)v5;
        v8 = (uint16_t)v4;
        v21 = HIWORD(v4);
        v9 = (uint16_t)v5;
        v10 = HIWORD(v5);
        v11 = v8 * v9;
        v12 = v21 * v7;
        v13 = v10 * v8;
        v14 = __CFADD__(v13, v12);
        v15 = v13 + v12;
        LODWORD(v16) = (v6 >> 1) + v11 + (v15 << 16);
        HIDWORD(v16) = (v14 ? 0x10000 : 0)
                     + __CFADD__(v6 >> 1, v11 + (v15 << 16))
                     + __CFADD__(v11, v15 << 16)
                     + v21 * v10
                     + HIWORD(v15);
        if ( HIDWORD(v16) < v6 )
        {
          v19 = 32;
          result = 0;
          do
          {
            v17 = 2 * result;
            v18 = v16 >> 31;
            result = (2 * result) | 1;
            HIDWORD(v16) = v18 - v6;
            if ( v6 > v18 )
            {
              HIDWORD(v16) = v18;
              result = v17;
            }
            LODWORD(v16) = 2 * v16;
            --v19;
          }
          while ( v19 != 0 );
        }
      }
      if ( v20 < 0 )
        return -result;
    }
    else
    {
      result = (v4 * v5 + (v6 >> 1)) / v6;
      if ( v20 < 0 )
        return -result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_MulDiv_No_Round  (binary VA: 0x11aaa40)
// Original: FT_MulDiv_No_Round
// ----------------------------------------------------------------------------
int FT_MulDiv_No_Round(int a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  int64_t v15; // rdi
  int64_t v16; // rdi
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;

  result = a1;
  if ( a2 == a3 || a1 == 0 )
    return result;
  v21 = a3 ^ a2 ^ a1;
  v4 = __builtin_abs(a1);
  v5 = __builtin_abs(a2);
  v6 = __builtin_abs(a3);
  result = 0x7FFFFFFF;
  if ( v5 <= 46340 && v4 <= 46340 )
  {
    if ( v6 != 0 )
      result = v5 * v4 / (int)v6;
  }
  else if ( v6 != 0 )
  {
    v7 = (uint16_t)v5;
    v8 = (uint16_t)v4;
    v19 = HIWORD(v4);
    v9 = (uint16_t)v5;
    v10 = HIWORD(v5);
    v11 = v8 * v9;
    v12 = v19 * v7;
    v13 = v10 * v8;
    v14 = __CFADD__(v13, v12);
    LODWORD(v15) = v13 + v12;
    HIDWORD(v15) = v19 * v10 + WORD1(v15);
    LODWORD(v15) = (uint32_t)v15 << 16;
    v16 = __PAIR64__(v14 ? 0x10000 : 0, v11) + v15;
    if ( v6 > HIDWORD(v16) )
    {
      v20 = 32;
      result = 0;
      do
      {
        v17 = 2 * result;
        v18 = v16 >> 31;
        result = (2 * result) | 1;
        HIDWORD(v16) = v18 - v6;
        if ( v6 > v18 )
        {
          HIDWORD(v16) = v18;
          result = v17;
        }
        LODWORD(v16) = 2 * v16;
        --v20;
      }
      while ( v20 != 0 );
      if ( v21 < 0 )
        return -result;
      return result;
    }
  }
  if ( v21 < 0 )
    return -result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_MulFix  (binary VA: 0x11aab80)
// Original: FT_MulFix
// ----------------------------------------------------------------------------
unsigned int FT_MulFix(int a1, int a2)
{
  int64_t v2; // rax

  v2 = (unsigned int)(((int)((uint64_t)(a2 * (int64_t)a1) >> 32) >> 31) + 0x8000) + a2 * (int64_t)a1;
  return (HIDWORD(v2) << 16) + WORD1(v2);
}

// ----------------------------------------------------------------------------
// Function: FT_DivFix  (binary VA: 0x11aabb0)
// Original: FT_DivFix
// ----------------------------------------------------------------------------
int FT_DivFix(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int64_t v5; // rdi
  int v6;
  unsigned int v7;
  int v8;

  v2 = __builtin_abs(a2);
  result = 0x7FFFFFFF;
  if ( v2 != 0 )
  {
    v4 = __builtin_abs(a1);
    if ( v4 >> 16 != 0 )
    {
      v5 = __PAIR64__(v4 >> 16, v2 >> 1) + (unsigned int)(v4 << 16);
      if ( (unsigned int)v2 > HIDWORD(v5) )
      {
        v8 = 32;
        result = 0;
        do
        {
          v6 = 2 * result;
          v7 = v5 >> 31;
          result = (2 * result) | 1;
          HIDWORD(v5) = v7 - v2;
          if ( v2 > v7 )
          {
            HIDWORD(v5) = v7;
            result = v6;
          }
          LODWORD(v5) = 2 * v5;
          --v8;
        }
        while ( v8 != 0 );
      }
    }
    else
    {
      result = ((v4 << 16) + (v2 >> 1)) / (unsigned int)v2;
    }
  }
  if ( (a1 ^ a2) < 0 )
    return -result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Matrix_Multiply  (binary VA: 0x11aac60)
// Original: FT_Matrix_Multiply
// ----------------------------------------------------------------------------
void FT_Matrix_Multiply(int *a1, int *a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;

  if ( a2 != nullptr && a1 != nullptr )
  {
    v2 = FT_MulFix(*a1, *a2);
    v7 = v2 + FT_MulFix(a1[1], a2[2]);
    v3 = FT_MulFix(*a1, a2[1]);
    v8 = v3 + FT_MulFix(a1[1], a2[3]);
    v4 = FT_MulFix(a1[2], *a2);
    v5 = FT_MulFix(a1[3], a2[2]) + v4;
    v9 = FT_MulFix(a1[2], a2[1]);
    v6 = FT_MulFix(a1[3], a2[3]);
    *a2 = v7;
    a2[1] = v8;
    a2[2] = v5;
    a2[3] = v9 + v6;
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Matrix_Invert  (binary VA: 0x11aad70)
// Original: FT_Matrix_Invert
// ----------------------------------------------------------------------------
int FT_Matrix_Invert(int *a1)
{
  int v1;
  unsigned int v2;
  int v3;
  int v5;
  int v6;
  int v7;

  v1 = 6;
  if ( a1 != nullptr )
  {
    v2 = FT_MulFix(*a1, a1[3]);
    v3 = v2 - FT_MulFix(a1[1], a1[2]);
    if ( v3 != 0 )
    {
      a1[1] = -FT_DivFix(a1[1], v3);
      v5 = FT_DivFix(a1[2], v3);
      v6 = *a1;
      a1[2] = -v5;
      *a1 = FT_DivFix(a1[3], v3);
      v7 = v6;
      v1 = 0;
      a1[3] = FT_DivFix(v7, v3);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_Matrix_Multiply_Scaled  (binary VA: 0x11aae30)
// Original: FT_Matrix_Multiply_Scaled
// ----------------------------------------------------------------------------
void FT_Matrix_Multiply_Scaled(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  if ( a2 != nullptr && a1 != nullptr )
  {
    v4 = FT_MulDiv(*a1, *a2, a3 << 16);
    v5 = v4 + FT_MulDiv(a1[1], a2[2], a3 << 16);
    v6 = FT_MulDiv(*a1, a2[1], a3 << 16);
    v7 = v6 + FT_MulDiv(a1[1], a2[3], a3 << 16);
    v8 = FT_MulDiv(a1[2], *a2, a3 << 16);
    v9 = v8 + FT_MulDiv(a1[3], a2[2], a3 << 16);
    v10 = FT_MulDiv(a1[2], a2[1], a3 << 16);
    v3 = FT_MulDiv(a1[3], a2[3], a3 << 16);
    *a2 = v5;
    a2[1] = v7;
    a2[2] = v9;
    a2[3] = v10 + v3;
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_Transform_Scaled  (binary VA: 0x11aaf70)
// Original: FT_Vector_Transform_Scaled
// ----------------------------------------------------------------------------
void FT_Vector_Transform_Scaled(int *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;

  if ( a2 != nullptr && a1 != nullptr )
  {
    v4 = FT_MulDiv(*a1, *a2, a3 << 16);
    v5 = v4 + FT_MulDiv(a1[1], a2[1], a3 << 16);
    v6 = FT_MulDiv(*a1, a2[2], a3 << 16);
    v3 = FT_MulDiv(a1[1], a2[3], a3 << 16);
    *a1 = v5;
    a1[1] = v6 + v3;
  }
}

// ----------------------------------------------------------------------------
// Function: ft_corner_orientation  (binary VA: 0x11ab040)
// Original: ft_corner_orientation
// ----------------------------------------------------------------------------
int ft_corner_orientation(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result;
  uint64_t v5;
  uint64_t v6; // kr08_8

  if ( a2 != 0 )
  {
    if ( a1 != 0 )
    {
      if ( a4 != 0 )
      {
        if ( a3 != 0 )
        {
          v5 = __PAIR64__(
                 __CFADD__(HIWORD(a1) * (uint16_t)a4, HIWORD(a4) * (uint16_t)a1) ? 0x10000 : 0,
                 (uint16_t)a1 * (unsigned int)(uint16_t)a4)
             + __PAIR64__(
                 HIWORD(a1) * HIWORD(a4)
               + ((unsigned int)(HIWORD(a1) * (uint16_t)a4 + HIWORD(a4) * (uint16_t)a1) >> 16),
                 (HIWORD(a1) * (uint16_t)a4 + HIWORD(a4) * (uint16_t)a1) << 16);
          v6 = __PAIR64__(
                 ((unsigned int)(HIWORD(a3) * (uint16_t)a2 + HIWORD(a2) * (uint16_t)a3) >> 16)
               + HIWORD(a3) * HIWORD(a2),
                 (HIWORD(a3) * (uint16_t)a2 + HIWORD(a2) * (uint16_t)a3) << 16)
             + __PAIR64__(
                 __CFADD__(HIWORD(a3) * (uint16_t)a2, HIWORD(a2) * (uint16_t)a3) ? 0x10000 : 0,
                 (uint16_t)a2 * (unsigned int)(uint16_t)a3);
          result = 1;
          if ( (__PAIR64__(
                  __CFADD__(HIWORD(a1) * (uint16_t)a4, HIWORD(a4) * (uint16_t)a1) ? 0x10000 : 0,
                  (uint16_t)a1 * (unsigned int)(uint16_t)a4)
              + __PAIR64__(
                  HIWORD(a1) * HIWORD(a4)
                + ((unsigned int)(HIWORD(a1) * (uint16_t)a4 + HIWORD(a4) * (uint16_t)a1) >> 16),
                  (HIWORD(a1) * (uint16_t)a4 + HIWORD(a4) * (uint16_t)a1) << 16)) >> 32 <= (__PAIR64__(((unsigned int)(HIWORD(a3) * (uint16_t)a2 + HIWORD(a2) * (uint16_t)a3) >> 16) + HIWORD(a3) * HIWORD(a2), (HIWORD(a3) * (uint16_t)a2 + HIWORD(a2) * (uint16_t)a3) << 16) + __PAIR64__(__CFADD__(HIWORD(a3) * (uint16_t)a2, HIWORD(a2) * (uint16_t)a3) ? 0x10000 : 0, (uint16_t)a2 * (unsigned int)(uint16_t)a3)) >> 32 )
          {
            result = -1;
            if ( HIDWORD(v5) >= HIDWORD(v6) )
            {
              result = 1;
              if ( (unsigned int)v5 <= (unsigned int)v6 )
                return -((unsigned int)v5 < (unsigned int)v6);
            }
          }
        }
        else
        {
          result = -a1;
          if ( (a4 & 0x80000000) != 0 )
            return a1;
        }
      }
      else
      {
        result = -a2;
        if ( (a3 & 0x80000000) == 0 )
          return a2;
      }
    }
    else
    {
      result = -a3;
      if ( (a2 & 0x80000000) != 0 )
        return a3;
    }
  }
  else
  {
    result = -a4;
    if ( (a1 & 0x80000000) == 0 )
      return a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_corner_is_flat  (binary VA: 0x11ab180)
// Original: ft_corner_is_flat
// ----------------------------------------------------------------------------
bool ft_corner_is_flat(int a1, int a2, int a3, int a4)
{
  signed int v4;

  v4 = __builtin_abs(a3 + a1) + __builtin_abs(a2 + a4);
  return (int)(__builtin_abs(a2) + __builtin_abs(a1) + __builtin_abs(a4) + __builtin_abs(a3) - v4) < v4 >> 4;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_Rewind  (binary VA: 0x11ab210)
// Original: FT_GlyphLoader_Rewind
// ----------------------------------------------------------------------------
int FT_GlyphLoader_Rewind(int a1)
{
  int v2;
  int v3;

  *(uint16_t *)(a1 + 22) = 0;
  *(uint16_t *)(a1 + 20) = 0;
  v2 = *(uint32_t *)(a1 + 20);
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 56) = v2;
  *(uint32_t *)(a1 + 60) = *(uint32_t *)(a1 + 24);
  *(uint32_t *)(a1 + 64) = *(uint32_t *)(a1 + 28);
  *(uint32_t *)(a1 + 68) = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(a1 + 72) = *(uint32_t *)(a1 + 36);
  *(uint32_t *)(a1 + 76) = *(uint32_t *)(a1 + 40);
  *(uint32_t *)(a1 + 80) = *(uint32_t *)(a1 + 44);
  v3 = *(uint32_t *)(a1 + 52);
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_Prepare  (binary VA: 0x11ab260)
// Original: FT_GlyphLoader_Prepare
// ----------------------------------------------------------------------------
int FT_GlyphLoader_Prepare(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;

  result = a1;
  v2 = *(int16_t *)(a1 + 22);
  v3 = *(uint32_t *)(a1 + 24);
  *(uint16_t *)(a1 + 58) = 0;
  *(uint16_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  v4 = 8 * v2;
  *(uint32_t *)(a1 + 64) = *(uint32_t *)(a1 + 28) + v2;
  *(uint32_t *)(a1 + 60) = 8 * v2 + v3;
  v5 = *(uint8_t *)(a1 + 16) == 0;
  *(uint32_t *)(a1 + 68) = *(uint32_t *)(a1 + 32) + 2 * *(int16_t *)(a1 + 20);
  if ( !v5 )
  {
    v6 = v4 + *(uint32_t *)(a1 + 40);
    v7 = *(uint32_t *)(a1 + 44) + v4;
    *(uint32_t *)(a1 + 76) = v6;
    *(uint32_t *)(a1 + 80) = v7;
  }
  *(uint32_t *)(a1 + 88) = *(uint32_t *)(a1 + 52) + 32 * *(uint32_t *)(a1 + 48);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_Add  (binary VA: 0x11ab2c0)
// Original: FT_GlyphLoader_Add
// ----------------------------------------------------------------------------
int FT_GlyphLoader_Add(int a1)
{
  int16_t v1;
  int16_t v2; // di
  unsigned int v3;
  int16_t v4;
  unsigned int v5;
  uint16_t *v6;
  int result;

  if ( a1 != 0 )
  {
    v1 = *(uint16_t *)(a1 + 56);
    v2 = *(uint16_t *)(a1 + 22);
    v3 = v1;
    *(uint16_t *)(a1 + 20) += v1;
    v4 = *(uint16_t *)(a1 + 58) + v2;
    *(uint32_t *)(a1 + 48) += *(uint32_t *)(a1 + 84);
    *(uint16_t *)(a1 + 22) = v4;
    if ( v1 != 0 )
    {
      v5 = 0;
      do
      {
        v6 = (uint16_t *)(*(uint32_t *)(a1 + 68) + 2 * v5++);
        *v6 += v2;
      }
      while ( v3 > v5 );
    }
    return FT_GlyphLoader_Prepare(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_service_list_lookup  (binary VA: 0x11ab320)
// Original: ft_service_list_lookup
// ----------------------------------------------------------------------------
const char * ft_service_list_lookup(const char **a1, char *s2)
{
  const char **v2;
  const char *s1;
  const char *result;

  v2 = a1;
  if ( s2 == nullptr || a1 == nullptr )
    return nullptr;
  s1 = *a1;
  result = nullptr;
  if ( *a1 != nullptr )
  {
    while ( strcmp(s1, s2) != 0 )
    {
      v2 += 2;
      s1 = *v2;
      if ( *v2 == nullptr )
        return nullptr;
    }
    return v2[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_validator_init  (binary VA: 0x11ab390)
// Original: ft_validator_init
// ----------------------------------------------------------------------------
uint32_t * ft_validator_init(uint32_t *a1, int a2, int a3, int a4)
{
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  a1[3] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ft_validator_run  (binary VA: 0x11ab3b0)
// Original: ft_validator_run
// ----------------------------------------------------------------------------
int ft_validator_run()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: ft_validator_error  (binary VA: 0x11ab3c0)
// Original: ft_validator_error
// ----------------------------------------------------------------------------
void ft_validator_error(int a1, int a2)
{
  *(uint32_t *)(a1 + 12) = a2;
  longjmp((struct __jmp_buf_tag *)(a1 + 16), 1);
}

// ----------------------------------------------------------------------------
// Function: FT_Set_Transform  (binary VA: 0x11ab3f0)
// Original: FT_Set_Transform
// ----------------------------------------------------------------------------
uint32_t * FT_Set_Transform(uint32_t *a1, uint32_t *a2, int *a3)
{
  uint32_t *result;
  uint32_t *v4;
  int v5;

  result = a1;
  v4 = a2;
  if ( a1 != nullptr )
  {
    result = (uint32_t *)a1[32];
    result[6] = 0;
    if ( a2 != nullptr )
    {
      *result = *a2;
      result[1] = a2[1];
      result[2] = a2[2];
      result[3] = a2[3];
      if ( *(uint64_t *)(a2 + 1) != 0 )
      {
LABEL_4:
        result[6] = 1;
LABEL_5:
        if ( a3 != nullptr )
        {
          v5 = *a3;
          result[5] = a3[1];
          result[4] = v5;
          if ( *(uint64_t *)a3 != 0 )
            result[6] |= 2u;
        }
        else
        {
          result[4] = 0;
          result[5] = 0;
        }
        return result;
      }
    }
    else
    {
      v4 = result;
      *(g4_int128_t *)result = xmmword_1C7CA10;
    }
    if ( *v4 == 0x10000 && v4[3] == 0x10000 )
      goto LABEL_5;
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Reference_Face  (binary VA: 0x11ab4c0)
// Original: FT_Reference_Face
// ----------------------------------------------------------------------------
int FT_Reference_Face(int a1)
{
  ++*(uint32_t *)(*(uint32_t *)(a1 + 128) + 56);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Match_Size  (binary VA: 0x11ab4e0)
// Original: FT_Match_Size
// ----------------------------------------------------------------------------
char FT_Match_Size(int a1, uint32_t *a2, char a3, uint32_t *a4)
{
  char result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;

  result = 35;
  if ( (*(uint8_t *)(a1 + 8) & 2) != 0 )
  {
    result = 7;
    if ( *a2 == 0 )
    {
      v5 = a2[3];
      if ( v5 != 0 )
      {
        v14 = a2[1];
        v6 = (v14 * v5 + 36) / 72;
      }
      else
      {
        v6 = a2[1];
        v14 = v6;
      }
      v7 = a2[4];
      if ( v7 != 0 )
      {
        v8 = a2[2];
        v9 = (v8 * v7 + 36) / 72;
      }
      else
      {
        v9 = a2[2];
        v8 = v9;
      }
      if ( v14 != 0 )
      {
        if ( v8 == 0 )
          v9 = v6;
      }
      else if ( v8 != 0 )
      {
        v6 = v9;
      }
      v10 = *(uint32_t *)(a1 + 28);
      v11 = (v9 + 32) & 0xFFFFFFC0;
      v15 = (v6 + 32) & 0xFFFFFFC0;
      result = 23;
      if ( v10 > 0 )
      {
        v12 = *(uint32_t *)(a1 + 32);
        v13 = 0;
        while ( ((*(uint32_t *)(v12 + 12) + 32) & 0xFFFFFFC0) != v11
             || ((*(uint32_t *)(v12 + 8) + 32) & 0xFFFFFFC0) != v15 && a3 == 0 )
        {
          ++v13;
          v12 += 16;
          if ( v13 == v10 )
            return 23;
        }
        result = 0;
        if ( a4 != nullptr )
          *a4 = v13;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_synthesize_vertical_metrics  (binary VA: 0x11ab650)
// Original: ft_synthesize_vertical_metrics
// ----------------------------------------------------------------------------
int ft_synthesize_vertical_metrics(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v2 = a2;
  v3 = a1[3];
  v4 = a1[1];
  if ( v3 < 0 )
  {
    if ( v4 < v3 )
      v4 = a1[3];
  }
  else
  {
    v4 -= v3;
  }
  if ( a2 == 0 )
    v2 = 12 * v4 / 10;
  v5 = a1[4];
  a1[7] = v2;
  a1[5] = a1[2] + v5 / -2;
  result = (v2 - v4) / 2;
  a1[6] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Select_Metrics  (binary VA: 0x11ab6c0)
// Original: FT_Select_Metrics
// ----------------------------------------------------------------------------
unsigned int FT_Select_Metrics(int a1, int a2)
{
  int16_t *v2;
  int v3;
  int v4;
  unsigned int result;
  int v6;

  v2 = (int16_t *)(*(uint32_t *)(a1 + 32) + 16 * a2);
  v3 = *(uint32_t *)(a1 + 88);
  *(uint16_t *)(v3 + 12) = (*((uint32_t *)v2 + 2) + 32) >> 6;
  *(uint16_t *)(v3 + 14) = (*((uint32_t *)v2 + 3) + 32) >> 6;
  if ( (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    *(uint32_t *)(v3 + 16) = FT_DivFix(*((uint32_t *)v2 + 2), *(uint16_t *)(a1 + 68));
    v6 = FT_DivFix(*((uint32_t *)v2 + 3), *(uint16_t *)(a1 + 68));
    *(uint32_t *)(v3 + 20) = v6;
    *(uint32_t *)(v3 + 24) = (FT_MulFix(*(int16_t *)(a1 + 70), v6) + 63) & 0xFFFFFFC0;
    *(uint32_t *)(v3 + 28) = FT_MulFix(*(int16_t *)(a1 + 72), *(uint32_t *)(v3 + 20)) & 0xFFFFFFC0;
    *(uint32_t *)(v3 + 32) = (FT_MulFix(*(int16_t *)(a1 + 74), *(uint32_t *)(v3 + 20)) + 32) & 0xFFFFFFC0;
    result = (FT_MulFix(*(int16_t *)(a1 + 76), *(uint32_t *)(v3 + 16)) + 32) & 0xFFFFFFC0;
  }
  else
  {
    *(uint32_t *)(v3 + 16) = 0x10000;
    *(uint32_t *)(v3 + 20) = 0x10000;
    v4 = *((uint32_t *)v2 + 3);
    *(uint32_t *)(v3 + 28) = 0;
    *(uint32_t *)(v3 + 24) = v4;
    *(uint32_t *)(v3 + 32) = *v2 << 6;
    result = *((uint32_t *)v2 + 2);
  }
  *(uint32_t *)(v3 + 36) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Request_Metrics  (binary VA: 0x11ab7f0)
// Original: FT_Request_Metrics
// ----------------------------------------------------------------------------
unsigned int FT_Request_Metrics(int a1, int *a2)
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
  unsigned int result;
  uint16_t *v16;
  unsigned int v17;
  uint16_t *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v2 = *(uint32_t *)(a1 + 88);
  if ( (*(uint8_t *)(a1 + 8) & 1) == 0 )
  {
    v16 = (uint16_t *)(v2 + 12);
    v17 = 28;
    if ( ((v2 + 12) & 1) != 0 )
    {
      *(uint8_t *)(v2 + 12) = 0;
      v16 = (uint16_t *)(v2 + 13);
      LOBYTE(v17) = 27;
    }
    if ( ((uint8_t)(uintptr_t)v16 & 2) != 0 )
    {
      *v16 = 0;
      v17 -= 2;
      ++v16;
    }
    result = 0;
    memset(v16, 0, 4 * (v17 >> 2));
    v18 = &v16[2 * (v17 >> 2)];
    if ( (v17 & 2) != 0 )
    {
      *v18++ = 0;
      if ( (v17 & 1) == 0 )
        goto LABEL_24;
    }
    else if ( (v17 & 1) == 0 )
    {
LABEL_24:
      *(uint32_t *)(v2 + 16) = 0x10000;
      *(uint32_t *)(v2 + 20) = 0x10000;
      return result;
    }
    *(uint8_t *)v18 = 0;
    *(uint32_t *)(v2 + 16) = 0x10000;
    *(uint32_t *)(v2 + 20) = 0x10000;
    return result;
  }
  v26 = 0;
  v28 = 0;
  switch ( *a2 )
  {
    case 0:
      v26 = *(uint16_t *)(a1 + 68);
      v28 = v26;
      v3 = a2[3];
      if ( v3 == 0 )
        goto LABEL_4;
      goto LABEL_12;
    case 1:
      v19 = *(int16_t *)(a1 + 70) - *(int16_t *)(a1 + 72);
      v28 = v19;
      goto LABEL_30;
    case 2:
      v28 = *(uint32_t *)(a1 + 60) - *(uint32_t *)(a1 + 52);
      v19 = *(uint32_t *)(a1 + 64) - *(uint32_t *)(a1 + 56);
      goto LABEL_30;
    case 3:
      v28 = *(int16_t *)(a1 + 76);
      v19 = *(int16_t *)(a1 + 70) - *(int16_t *)(a1 + 72);
LABEL_30:
      if ( v28 < 0 )
        v28 = -v28;
      v3 = a2[3];
      v26 = __builtin_abs(v19);
      if ( v3 != 0 )
        goto LABEL_12;
      goto LABEL_4;
    case 4:
      v20 = a2[1];
      *(uint32_t *)(v2 + 16) = v20;
      v21 = a2[2];
      *(uint32_t *)(v2 + 20) = v21;
      if ( v20 != 0 )
      {
        if ( v21 == 0 )
          *(uint32_t *)(v2 + 20) = v20;
        v9 = *a2;
        v10 = 0;
        v11 = 0;
      }
      else
      {
        *(uint32_t *)(v2 + 16) = v21;
        v11 = 0;
        v9 = *a2;
        v10 = 0;
      }
      goto LABEL_15;
    default:
      v3 = a2[3];
      if ( v3 == 0 )
      {
LABEL_4:
        v4 = a2[4];
        v5 = a2[1];
        v29 = v5;
        if ( v4 != 0 )
          goto LABEL_5;
LABEL_13:
        v6 = a2[2];
        if ( v29 != 0 )
          goto LABEL_6;
LABEL_14:
        v23 = v6;
        v13 = FT_DivFix(v6, v26);
        *(uint32_t *)(v2 + 20) = v13;
        *(uint32_t *)(v2 + 16) = v13;
        v11 = FT_MulDiv(v23, v28, v26);
        v10 = v23;
        v9 = *a2;
        goto LABEL_15;
      }
LABEL_12:
      v29 = a2[1];
      v5 = (v29 * v3 + 36) / 72;
      v4 = a2[4];
      if ( v4 == 0 )
        goto LABEL_13;
LABEL_5:
      v6 = (a2[2] * v4 + 36) / 72;
      if ( v29 == 0 )
        goto LABEL_14;
LABEL_6:
      v22 = v6;
      v24 = v5;
      v7 = FT_DivFix(v5, v28);
      *(uint32_t *)(v2 + 16) = v7;
      if ( a2[2] != 0 )
      {
        v8 = FT_DivFix(v22, v26);
        *(uint32_t *)(v2 + 20) = v8;
        v27 = v8;
        v9 = *a2;
        v10 = v22;
        v11 = v24;
        if ( *a2 == 3 )
        {
          v12 = *(uint32_t *)(v2 + 16);
          if ( v27 <= v12 )
            *(uint32_t *)(v2 + 16) = v27;
          else
            *(uint32_t *)(v2 + 20) = v12;
          v9 = *a2;
        }
      }
      else
      {
        *(uint32_t *)(v2 + 20) = v7;
        v10 = FT_MulDiv(v24, v26, v28);
        v11 = v24;
        v9 = *a2;
      }
LABEL_15:
      if ( v9 != 0 )
      {
        v25 = FT_MulFix(*(uint16_t *)(a1 + 68), *(uint32_t *)(v2 + 16));
        v10 = FT_MulFix(*(uint16_t *)(a1 + 68), *(uint32_t *)(v2 + 20));
        v11 = v25;
      }
      v14 = *(uint32_t *)(v2 + 20);
      *(uint16_t *)(v2 + 12) = (v11 + 32) >> 6;
      *(uint16_t *)(v2 + 14) = (int)(v10 + 32) >> 6;
      *(uint32_t *)(v2 + 24) = (FT_MulFix(*(int16_t *)(a1 + 70), v14) + 63) & 0xFFFFFFC0;
      *(uint32_t *)(v2 + 28) = FT_MulFix(*(int16_t *)(a1 + 72), *(uint32_t *)(v2 + 20)) & 0xFFFFFFC0;
      *(uint32_t *)(v2 + 32) = (FT_MulFix(*(int16_t *)(a1 + 74), *(uint32_t *)(v2 + 20)) + 32) & 0xFFFFFFC0;
      result = (FT_MulFix(*(int16_t *)(a1 + 76), *(uint32_t *)(v2 + 16)) + 32) & 0xFFFFFFC0;
      *(uint32_t *)(v2 + 36) = result;
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Select_Size  (binary VA: 0x11abbe0)
// Original: FT_Select_Size
// ----------------------------------------------------------------------------
char FT_Select_Size(int a1, int a2)
{
  char result;
  int (*v3)(uint32_t, int);

  result = 35;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 8) & 2) != 0 )
  {
    result = 6;
    if ( a2 >= 0 && a2 < *(uint32_t *)(a1 + 28) )
    {
      v3 = *(int (**)(uint32_t, int))(*(uint32_t *)(*(uint32_t *)(a1 + 96) + 12) + 92);
      if ( v3 != nullptr )
      {
        return v3(*(uint32_t *)(a1 + 88), a2);
      }
      else
      {
        FT_Select_Metrics(a1, a2);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Request_Size  (binary VA: 0x11abc50)
// Original: FT_Request_Size
// ----------------------------------------------------------------------------
char FT_Request_Size(uint32_t *a1, int *a2)
{
  int v2;
  int (*v3)(uint32_t, int *);
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  LOBYTE(v2) = 35;
  if ( a1 != nullptr )
  {
    LOBYTE(v2) = 6;
    if ( a2 != nullptr && a2[1] >= 0 && a2[2] >= 0 && (unsigned int)*a2 <= 4 )
    {
      v3 = *(int (**)(uint32_t, int *))(*(uint32_t *)(a1[24] + 12) + 88);
      if ( v3 != nullptr )
      {
        LOBYTE(v2) = v3(a1[22], a2);
      }
      else if ( (a1[2] & 3) == 2 )
      {
        LOBYTE(v2) = FT_Match_Size((int)(uintptr_t)(a1), a2, 0, &v5);
        if ( v2 == 0 )
          LOBYTE(v2) = FT_Select_Size((int)(uintptr_t)(a1), v5);
      }
      else
      {
        FT_Request_Metrics((int)(uintptr_t)(a1), a2);
        LOBYTE(v2) = 0;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Set_Char_Size  (binary VA: 0x11abd10)
// Original: FT_Set_Char_Size
// ----------------------------------------------------------------------------
char FT_Set_Char_Size(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v10[5];

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = a5;
  if ( a2 != 0 )
  {
    if ( a3 == 0 )
      v6 = a2;
  }
  else
  {
    v5 = a3;
  }
  if ( a4 != 0 )
  {
    if ( a5 == 0 )
      v8 = a4;
  }
  else
  {
    v7 = a5;
  }
  if ( v5 <= 63 )
    v5 = 64;
  if ( v6 <= 63 )
    v6 = 64;
  if ( v7 == 0 )
  {
    v8 = 72;
    v7 = 72;
  }
  v10[2] = v6;
  v10[4] = v8;
  v10[0] = 0;
  v10[1] = v5;
  v10[3] = v7;
  return FT_Request_Size(a1, v10);
}

// ----------------------------------------------------------------------------
// Function: FT_Set_Pixel_Sizes  (binary VA: 0x11abdc0)
// Original: FT_Set_Pixel_Sizes
// ----------------------------------------------------------------------------
char FT_Set_Pixel_Sizes(uint32_t *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v4;
  int v5;
  int v6;
  int v8[8];

  v3 = a2;
  v4 = a3;
  if ( a2 != 0 )
  {
    if ( a3 == 0 )
      v4 = a2;
  }
  else
  {
    if ( a3 == 0 )
    {
      v3 = 1;
      v4 = 1;
      goto LABEL_11;
    }
    v3 = a3;
  }
  if ( v3 > 0xFFFE )
  {
    v5 = 4194240;
    goto LABEL_6;
  }
LABEL_11:
  v5 = v3 << 6;
LABEL_6:
  v6 = 4194240;
  if ( v4 <= 0xFFFE )
    v6 = v4 << 6;
  v8[0] = 0;
  v8[1] = v5;
  v8[2] = v6;
  v8[3] = 0;
  v8[4] = 0;
  return FT_Request_Size(a1, v8);
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Kerning  (binary VA: 0x11abe60)
// Original: FT_Get_Kerning
// ----------------------------------------------------------------------------
int FT_Get_Kerning(int a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  int (*v7)(int, int, int, int *);
  int v8;
  int v9;
  uint16_t v10;
  uint16_t v11;
  unsigned int v12;

  v5 = 35;
  if ( a1 != 0 )
  {
    LOWORD(v5) = 6;
    if ( a5 != nullptr )
    {
      v6 = *(uint32_t *)(a1 + 96);
      *a5 = 0;
      a5[1] = 0;
      LOWORD(v5) = 0;
      v7 = *(int (**)(int, int, int, int *))(*(uint32_t *)(v6 + 12) + 76);
      if ( v7 != nullptr )
      {
        v5 = v7(a1, a2, a3, a5);
        if ( v5 == 0 && a4 != 2 )
        {
          *a5 = FT_MulFix(*a5, *(uint32_t *)(*(uint32_t *)(a1 + 88) + 16));
          v8 = FT_MulFix(a5[1], *(uint32_t *)(*(uint32_t *)(a1 + 88) + 20));
          a5[1] = v8;
          if ( a4 != 1 )
          {
            v9 = *(uint32_t *)(a1 + 88);
            v10 = *(uint16_t *)(v9 + 12);
            if ( v10 <= 0x18u )
            {
              *a5 = FT_MulDiv(*a5, v10, 25);
              v8 = a5[1];
              v9 = *(uint32_t *)(a1 + 88);
            }
            v11 = *(uint16_t *)(v9 + 14);
            if ( v11 <= 0x18u )
              v8 = FT_MulDiv(v8, v11, 25);
            v12 = (*a5 + 32) & 0xFFFFFFC0;
            a5[1] = (v8 + 32) & 0xFFFFFFC0;
            *a5 = v12;
          }
        }
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Track_Kerning  (binary VA: 0x11abfb0)
// Original: FT_Get_Track_Kerning
// ----------------------------------------------------------------------------
int FT_Get_Track_Kerning(int a1, int a2, int a3, int a4)
{
  int v4;
  int (*v5)(uint32_t, const char *);
  int (**v6)(int, int, int, int);

  v4 = 35;
  if ( a1 != 0 )
  {
    LOWORD(v4) = 6;
    if ( a4 != 0 )
    {
      LOWORD(v4) = 7;
      v5 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(a1 + 96) + 32);
      if ( v5 != nullptr )
      {
        v6 = (int (**)(int, int, int, int))v5(*(uint32_t *)(a1 + 96), "kerning");
        if ( v6 != nullptr )
          return (*v6)(a1, a2, a3, a4);
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: FT_Select_Charmap  (binary VA: 0x11ac040)
// Original: FT_Select_Charmap
// ----------------------------------------------------------------------------
char FT_Select_Charmap(uint32_t *a1, int a2)
{
  char result;
  int *v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;

  result = 35;
  if ( a1 != nullptr )
  {
    result = 6;
    if ( a2 != 0 )
    {
      if ( a2 == 1970170211 )
      {
        v6 = a1[10];
        result = 38;
        if ( v6 != 0 )
        {
          v7 = (int *)(v6 + 4 * a1[9]);
          v8 = v7;
          while ( v6 <= (unsigned int)(uintptr_t)(--v8) )
          {
            v9 = *v8;
            if ( *(uint32_t *)(*v8 + 4) == 1970170211 )
            {
              v10 = *(uint32_t *)(v9 + 8);
              if ( v10 == 0x40000 || v10 == 655363 )
              {
                a1[23] = v9;
                return 0;
              }
            }
          }
          while ( 1 )
          {
            if ( v6 > (unsigned int)(uintptr_t)(--v7) )
              return 38;
            v5 = *v7;
            if ( *(uint32_t *)(*v7 + 4) == 1970170211 )
              goto LABEL_10;
          }
        }
      }
      else
      {
        v3 = (int *)a1[10];
        result = 38;
        if ( v3 != nullptr )
        {
          v4 = (unsigned int)(uintptr_t)(&v3[a1[9]]);
          result = 6;
          if ( (unsigned int)(uintptr_t)(v3) < v4 )
          {
            while ( 1 )
            {
              v5 = *v3;
              if ( *(uint32_t *)(*v3 + 4) == a2 )
                break;
              if ( v4 <= (unsigned int)(uintptr_t)(++v3) )
                return 6;
            }
LABEL_10:
            a1[23] = v5;
            return 0;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Charmap_Index  (binary VA: 0x11ac130)
// Original: FT_Get_Charmap_Index
// ----------------------------------------------------------------------------
int FT_Get_Charmap_Index(int *a1)
{
  int v1;
  int v2;
  int result;
  int **v4;

  if ( a1 == nullptr )
    return -1;
  v1 = *a1;
  if ( *a1 == 0 )
    return -1;
  v2 = *(uint32_t *)(v1 + 36);
  result = 0;
  if ( v2 > 0 )
  {
    v4 = *(int ***)(v1 + 40);
    if ( *v4 != a1 )
    {
      do
        ++result;
      while ( result != v2 && v4[result] != a1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Char_Index  (binary VA: 0x11ac170)
// Original: FT_Get_Char_Index
// ----------------------------------------------------------------------------
int FT_Get_Char_Index(int a1, int a2)
{
  int result;
  int v3;

  result = 0;
  if ( a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 92);
    if ( v3 != 0 )
      return (*(int (**)(int, int))(*(uint32_t *)(v3 + 12) + 12))(v3, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Next_Char  (binary VA: 0x11ac1a0)
// Original: FT_Get_Next_Char
// ----------------------------------------------------------------------------
int FT_Get_Next_Char(int a1, int a2, unsigned int *a3)
{
  unsigned int v3;
  int result;
  int v5;
  unsigned int v6;
  int v7[6];

  v3 = 0;
  result = 0;
  if ( a1 != 0 )
  {
    v5 = *(uint32_t *)(a1 + 92);
    if ( v5 != 0 && *(uint32_t *)(a1 + 16) != 0 )
    {
      v7[0] = a2;
      do
        v6 = (*(int (**)(int, int *))(*(uint32_t *)(v5 + 12) + 16))(v5, v7);
      while ( v6 >= *(uint32_t *)(a1 + 16) );
      v3 = v6;
      result = 0;
      if ( v3 != 0 )
        result = v7[0];
    }
  }
  if ( a3 != nullptr )
    *a3 = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_First_Char  (binary VA: 0x11ac210)
// Original: FT_Get_First_Char
// ----------------------------------------------------------------------------
int FT_Get_First_Char(int a1, uint32_t *a2)
{
  int Next_Char;
  unsigned int Char_Index;
  typedef unsigned int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  Next_Char = 0;
  v5 = 0;
  if ( a1 != 0 && *(uint32_t *)(a1 + 92) != 0 && *(uint32_t *)(a1 + 16) != 0 )
  {
    Char_Index = FT_Get_Char_Index(a1, 0);
    v5 = Char_Index;
    Next_Char = 0;
    if ( Char_Index == 0 || Char_Index >= *(uint32_t *)(a1 + 16) )
      Next_Char = FT_Get_Next_Char(a1, 0, &v5);
  }
  if ( a2 != nullptr )
    *a2 = v5;
  return Next_Char;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Name_Index  (binary VA: 0x11ac2c0)
// Original: FT_Get_Name_Index
// ----------------------------------------------------------------------------
int FT_Get_Name_Index(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int (*v5)(int, int);
  int (*v6)(uint32_t, const char *);
  int v7;

  result = 0;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 9) & 2) != 0 )
  {
    v3 = *(uint32_t *)(a1 + 128);
    v4 = *(uint32_t *)(v3 + 36);
    if ( v4 != -2 )
    {
      if ( v4 == 0 )
      {
        v6 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(a1 + 96) + 32);
        if ( v6 == nullptr || (v7 = v6(*(uint32_t *)(a1 + 96), "glyph-dict"), v3 = *(uint32_t *)(a1 + 128), v7 == 0) )
        {
          *(uint32_t *)(v3 + 36) = -2;
          return 0;
        }
        *(uint32_t *)(v3 + 36) = v7;
        v4 = v7;
      }
      v5 = *(int (**)(int, int))(v4 + 4);
      result = 0;
      if ( v5 != nullptr )
        return v5(a1, a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Glyph_Name  (binary VA: 0x11ac360)
// Original: FT_Get_Glyph_Name
// ----------------------------------------------------------------------------
int FT_Get_Glyph_Name(int a1, int a2, uint8_t *a3, int a4)
{
  int v4;
  int result;
  int (**v6)(int, int, uint8_t *, int);
  int v7;
  int v8;
  int v9;
  int (**v10)(int, int, uint8_t *, int);

  v4 = a2;
  if ( a4 != 0 && a3 != nullptr )
    *a3 = 0;
  result = 6;
  if ( a1 != 0 && a2 <= *(uint32_t *)(a1 + 16) && (*(uint8_t *)(a1 + 9) & 2) != 0 )
  {
    v9 = *(uint32_t *)(a1 + 128);
    v6 = *(int (***)(int, int, uint8_t *, int))(v9 + 36);
    v10 = v6;
    if ( v6 != (int (**)(int, int, uint8_t *, int))-2 )
    {
      if ( v6 == nullptr )
      {
        v7 = *(uint32_t *)(a1 + 96);
        if ( *(uint32_t *)(*(uint32_t *)v7 + 32) == 0
          || (v8 = (*(int (**)(int, const char *))(*(uint32_t *)v7 + 32))(v7, "glyph-dict"),
              v9 = *(uint32_t *)(a1 + 128),
              v4 = a2,
              v8 == 0) )
        {
          *(uint32_t *)(v9 + 36) = -2;
          return 6;
        }
        *(uint32_t *)(*(uint32_t *)(a1 + 128) + 36) = v8;
        v10 = (int (**)(int, int, uint8_t *, int))v8;
      }
      result = 6;
      if ( *v10 != nullptr )
        return (*v10)(a1, v4, a3, a4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Postscript_Name  (binary VA: 0x11ac470)
// Original: FT_Get_Postscript_Name
// ----------------------------------------------------------------------------
int FT_Get_Postscript_Name(int a1)
{
  int v1;
  int result;
  int (**v3)(int);
  int (*v4)(int);
  int (*v5)(uint32_t, const char *);
  int v6;

  if ( a1 == 0 )
    return 0;
  v1 = *(uint32_t *)(a1 + 128);
  result = 0;
  v3 = *(int (***)(int))(v1 + 28);
  if ( v3 != (int (**)(int))-2 )
  {
    if ( v3 == nullptr )
    {
      v5 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(a1 + 96) + 32);
      if ( v5 == nullptr || (v6 = v5(*(uint32_t *)(a1 + 96), "postscript-font-name"), v1 = *(uint32_t *)(a1 + 128), v6 == 0) )
      {
        *(uint32_t *)(v1 + 28) = -2;
        return 0;
      }
      *(uint32_t *)(v1 + 28) = v6;
      v3 = (int (**)(int))v6;
    }
    v4 = *v3;
    result = 0;
    if ( v4 != nullptr )
      return v4(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Sfnt_Table  (binary VA: 0x11ac500)
// Original: FT_Get_Sfnt_Table
// ----------------------------------------------------------------------------
int FT_Get_Sfnt_Table(int a1, int a2)
{
  int v2;
  int (*v3)(uint32_t, const char *);
  int v4;

  v2 = 0;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 8) & 8) != 0 )
  {
    v3 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(a1 + 96) + 32);
    if ( v3 != nullptr )
    {
      v4 = v3(*(uint32_t *)(a1 + 96), "sfnt-table");
      if ( v4 != 0 )
        return (*(int (**)(int, int))(v4 + 4))(a1, a2);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Load_Sfnt_Table  (binary VA: 0x11ac570)
// Original: FT_Load_Sfnt_Table
// ----------------------------------------------------------------------------
int FT_Load_Sfnt_Table(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int (*v7)(uint32_t, const char *);
  int (**v8)(int, int, int, int, int);

  v5 = 35;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 8) & 8) != 0 )
  {
    LOWORD(v5) = 7;
    v7 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(a1 + 96) + 32);
    if ( v7 != nullptr )
    {
      v8 = (int (**)(int, int, int, int, int))v7(*(uint32_t *)(a1 + 96), "sfnt-table");
      if ( v8 != nullptr )
        return (*v8)(a1, a2, a3, a4, a5);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: FT_Sfnt_Table_Info  (binary VA: 0x11ac610)
// Original: FT_Sfnt_Table_Info
// ----------------------------------------------------------------------------
int FT_Sfnt_Table_Info(int a1, int a2, int a3, int a4)
{
  int v4;
  int (*v6)(uint32_t, const char *);
  int v7;
  uint8_t v8[4];

  v4 = 35;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 8) & 8) != 0 )
  {
    LOWORD(v4) = 7;
    v6 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(a1 + 96) + 32);
    if ( v6 != nullptr )
    {
      v7 = v6(*(uint32_t *)(a1 + 96), "sfnt-table");
      if ( v7 != 0 )
        return (*(int (**)(int, int, int, uint8_t *, int))(v7 + 8))(a1, a2, a3, v8, a4);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_CMap_Language_ID  (binary VA: 0x11ac6b0)
// Original: FT_Get_CMap_Language_ID
// ----------------------------------------------------------------------------
int FT_Get_CMap_Language_ID(int a1)
{
  int v1;
  int (*v2)(uint32_t, const char *);
  int (**v3)(int, int *);
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  v1 = 0;
  if ( a1 != 0 && *(uint32_t *)a1 != 0 )
  {
    v2 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(*(uint32_t *)a1 + 96) + 32);
    if ( v2 != nullptr )
    {
      v3 = (int (**)(int, int *))v2(*(uint32_t *)(*(uint32_t *)a1 + 96), "tt-cmaps");
      if ( v3 != nullptr && (*v3)(a1, &v5) == 0 )
        return v5;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_CMap_Format  (binary VA: 0x11ac730)
// Original: FT_Get_CMap_Format
// ----------------------------------------------------------------------------
int FT_Get_CMap_Format(int a1)
{
  int v1;
  int (*v2)(uint32_t, const char *);
  int (**v3)(int, uint32_t *);
  uint32_t v5[4];

  if ( a1 == 0 || *(uint32_t *)a1 == 0 )
    return -1;
  v1 = -1;
  v2 = *(int (**)(uint32_t, const char *))(**(uint32_t **)(*(uint32_t *)a1 + 96) + 32);
  if ( v2 != nullptr )
  {
    v3 = (int (**)(int, uint32_t *))v2(*(uint32_t *)(*(uint32_t *)a1 + 96), "tt-cmaps");
    if ( v3 != nullptr && (*v3)(a1, v5) == 0 )
      return v5[1];
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_Face_GetCharVariantIndex  (binary VA: 0x11ac7b0)
// Original: FT_Face_GetCharVariantIndex
// ----------------------------------------------------------------------------
int FT_Face_GetCharVariantIndex(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int *v5;
  int *v6;

  result = 0;
  if ( a1 != nullptr )
  {
    v4 = a1[23];
    if ( v4 != 0 && *(uint32_t *)(v4 + 4) == 1970170211 )
    {
      v5 = (int *)a1[10];
      if ( v5 != nullptr )
      {
        v6 = &v5[a1[9]];
        if ( v5 < v6 )
        {
          while ( *(uint32_t *)(*v5 + 8) != 327680 || FT_Get_CMap_Format(*v5) != 14 )
          {
            if ( v6 <= ++v5 )
              return 0;
          }
          result = *v5;
          if ( *v5 != 0 )
            return (*(int (**)(int, uint32_t, int, int))(*(uint32_t *)(result + 12) + 20))(result, a1[23], a2, a3);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Set_Charmap  (binary VA: 0x11ac870)
// Original: FT_Set_Charmap
// ----------------------------------------------------------------------------
char FT_Set_Charmap(uint32_t *a1, int a2)
{
  char result;
  uint32_t *v3;
  int CMap_Format;
  uint32_t *v5;

  result = 35;
  if ( a1 != nullptr )
  {
    v3 = (uint32_t *)a1[10];
    result = 38;
    if ( v3 != nullptr )
    {
      CMap_Format = FT_Get_CMap_Format(a2);
      result = 6;
      if ( CMap_Format != 14 )
      {
        v5 = &v3[a1[9]];
        if ( v3 < v5 )
        {
          do
          {
            if ( *v3 == a2 )
            {
              a1[23] = *v3;
              return 0;
            }
            ++v3;
          }
          while ( v5 > v3 );
          return 6;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Face_GetCharVariantIsDefault  (binary VA: 0x11ac910)
// Original: FT_Face_GetCharVariantIsDefault
// ----------------------------------------------------------------------------
int FT_Face_GetCharVariantIsDefault(int a1, int a2, int a3)
{
  int *v3;
  int *v4;
  int result;

  if ( a1 == 0 )
    return -1;
  v3 = *(int **)(a1 + 40);
  if ( v3 == nullptr )
    return -1;
  v4 = &v3[*(uint32_t *)(a1 + 36)];
  result = -1;
  if ( v3 < v4 )
  {
    while ( *(uint32_t *)(*v3 + 8) != 327680 || FT_Get_CMap_Format(*v3) != 14 )
    {
      if ( v4 <= ++v3 )
        return -1;
    }
    if ( *v3 != 0 )
      return (*(uint8_t (**)(int, int, int))(*(uint32_t *)(*v3 + 12) + 24))(*v3, a2, a3);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Face_GetCharsOfVariant  (binary VA: 0x11ac9b0)
// Original: FT_Face_GetCharsOfVariant
// ----------------------------------------------------------------------------
int FT_Face_GetCharsOfVariant(uint32_t *a1, int a2)
{
  int result;
  int *v3;
  int *v4;

  result = 0;
  if ( a1 != nullptr )
  {
    v3 = (int *)a1[10];
    if ( v3 != nullptr )
    {
      v4 = &v3[a1[9]];
      if ( v3 < v4 )
      {
        while ( *(uint32_t *)(*v3 + 8) != 327680 || FT_Get_CMap_Format(*v3) != 14 )
        {
          if ( v4 <= ++v3 )
            return 0;
        }
        result = *v3;
        if ( *v3 != 0 )
          return (*(int (**)(int, uint32_t, int))(*(uint32_t *)(result + 12) + 36))(result, a1[25], a2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Face_GetVariantsOfChar  (binary VA: 0x11aca40)
// Original: FT_Face_GetVariantsOfChar
// ----------------------------------------------------------------------------
int FT_Face_GetVariantsOfChar(uint32_t *a1, int a2)
{
  int result;
  int *v3;
  int *v4;

  result = 0;
  if ( a1 != nullptr )
  {
    v3 = (int *)a1[10];
    if ( v3 != nullptr )
    {
      v4 = &v3[a1[9]];
      if ( v3 < v4 )
      {
        while ( *(uint32_t *)(*v3 + 8) != 327680 || FT_Get_CMap_Format(*v3) != 14 )
        {
          if ( v4 <= ++v3 )
            return 0;
        }
        result = *v3;
        if ( *v3 != 0 )
          return (*(int (**)(int, uint32_t, int))(*(uint32_t *)(result + 12) + 32))(result, a1[25], a2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Face_GetVariantSelectors  (binary VA: 0x11acad0)
// Original: FT_Face_GetVariantSelectors
// ----------------------------------------------------------------------------
int FT_Face_GetVariantSelectors(uint32_t *a1)
{
  int result;
  int *v2;
  int *v3;

  result = 0;
  if ( a1 != nullptr )
  {
    v2 = (int *)a1[10];
    if ( v2 != nullptr )
    {
      v3 = &v2[a1[9]];
      if ( v2 < v3 )
      {
        while ( *(uint32_t *)(*v2 + 8) != 327680 || FT_Get_CMap_Format(*v2) != 14 )
        {
          if ( v3 <= ++v2 )
            return 0;
        }
        result = *v2;
        if ( *v2 != 0 )
          return (*(int (**)(int, uint32_t))(*(uint32_t *)(result + 12) + 28))(result, a1[25]);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Activate_Size  (binary VA: 0x11acb50)
// Original: FT_Activate_Size
// ----------------------------------------------------------------------------
char FT_Activate_Size(int *a1)
{
  char result;
  int v2;

  result = 6;
  if ( a1 != nullptr )
  {
    v2 = *a1;
    if ( *a1 != 0 && *(uint32_t *)(v2 + 96) != 0 )
    {
      *(uint32_t *)(v2 + 88) = (uint32_t)(uintptr_t)(a1);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Lookup_Renderer  (binary VA: 0x11acb70)
// Original: FT_Lookup_Renderer
// ----------------------------------------------------------------------------
int FT_Lookup_Renderer(int a1, int a2, int a3)
{
  int v3;
  int result;

  if ( a1 == 0 )
    return 0;
  v3 = *(uint32_t *)(a1 + 148);
  if ( a3 != 0 )
  {
    if ( *(uint32_t *)a3 != 0 )
      v3 = *(uint32_t *)(*(uint32_t *)a3 + 4);
    *(uint32_t *)a3 = 0;
  }
  result = 0;
  if ( v3 != 0 )
  {
    while ( 1 )
    {
      result = *(uint32_t *)(v3 + 8);
      if ( *(uint32_t *)(result + 16) == a2 )
        break;
      v3 = *(uint32_t *)(v3 + 4);
      if ( v3 == 0 )
        return 0;
    }
    if ( a3 != 0 )
      *(uint32_t *)a3 = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Renderer  (binary VA: 0x11acbd0)
// Original: FT_Get_Renderer
// ----------------------------------------------------------------------------
int FT_Get_Renderer(int a1, int a2)
{
  return FT_Lookup_Renderer(a1, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Module  (binary VA: 0x11acc10)
// Original: FT_Get_Module
// ----------------------------------------------------------------------------
int FT_Get_Module(int a1, char *s2)
{
  unsigned int v2;
  int v3;
  unsigned int v5;

  if ( s2 == nullptr || a1 == 0 )
    return 0;
  v2 = a1 + 20;
  v3 = 0;
  v5 = a1 + 4 * *(uint32_t *)(a1 + 16) + 20;
  if ( a1 + 20 < v5 )
  {
    while ( 1 )
    {
      v3 = *(uint32_t *)v2;
      if ( strcmp(*(const char **)(**(uint32_t **)v2 + 8), s2) == 0 )
        break;
      v2 += 4;
      if ( v5 <= v2 )
        return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Module_Interface  (binary VA: 0x11acc90)
// Original: FT_Get_Module_Interface
// ----------------------------------------------------------------------------
int FT_Get_Module_Interface(int a1, char *a2)
{
  int Module;

  Module = FT_Get_Module(a1, a2);
  if ( Module != 0 )
    return *(uint32_t *)(*(uint32_t *)Module + 20);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: ft_module_get_service  (binary VA: 0x11accd0)
// Original: ft_module_get_service
// ----------------------------------------------------------------------------
int ft_module_get_service(uint32_t *a1, int a2)
{
  int (*v2)(uint32_t *, int);
  int result;
  int v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  int (*v8)(uint32_t *, int);
  unsigned int v9;

  if ( a1 == nullptr )
    return 0;
  v2 = *(int (**)(uint32_t *, int))(*a1 + 32);
  if ( v2 == nullptr || (result = v2(a1, a2)) == 0 )
  {
    v4 = a1[1];
    v5 = (uint32_t *)(v4 + 20);
    v6 = v4 + 4 * *(uint32_t *)(v4 + 16) + 20;
    result = 0;
    v9 = v6;
    if ( (unsigned int)(uintptr_t)(v5) < v6 )
    {
      while ( 1 )
      {
        v7 = (uint32_t *)*v5;
        if ( (uint32_t *)*v5 != a1 )
        {
          v8 = *(int (**)(uint32_t *, int))(*v7 + 32);
          if ( v8 != nullptr )
          {
            result = v8(v7, a2);
            if ( result != 0 )
              break;
          }
        }
        if ( v9 <= (unsigned int)(uintptr_t)(++v5) )
          return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Property_Set  (binary VA: 0x11acd50)
// Original: FT_Property_Set
// ----------------------------------------------------------------------------
int FT_Property_Set(int a1, char *s2, int a3, int a4)
{
  int v4;
  uint32_t *v6;
  unsigned int v7;
  int (*v8)(uint32_t, const char *);
  int (**v9)(uint32_t, int, int);
  int (*v10)(uint32_t, int, int);
  unsigned int v11;

  v4 = 33;
  if ( a1 != 0 )
  {
    if ( a3 != 0 && s2 != nullptr )
    {
      LOWORD(v4) = 6;
      if ( a4 != 0 )
      {
        v6 = (uint32_t *)(a1 + 20);
        v11 = a1 + 4 * *(uint32_t *)(a1 + 16) + 20;
        if ( a1 + 20 < v11 )
        {
          v7 = a1 + 4 * *(uint32_t *)(a1 + 16) + 20;
          do
          {
            if ( strcmp(*(const char **)(*(uint32_t *)*v6 + 8), s2) == 0 )
              break;
            ++v6;
          }
          while ( v7 > (unsigned int)(uintptr_t)(v6) );
        }
        v4 = 11;
        if ( (uint32_t *)v11 != v6 )
        {
          LOWORD(v4) = 7;
          v8 = *(int (**)(uint32_t, const char *))(*(uint32_t *)*v6 + 32);
          if ( v8 != nullptr )
          {
            v9 = (int (**)(uint32_t, int, int))v8(*v6, "properties");
            if ( v9 != nullptr )
            {
              v10 = *v9;
              if ( v10 != nullptr )
                return v10(*v6, a3, a4);
            }
          }
        }
      }
    }
    else
    {
      return 6;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: FT_Property_Get  (binary VA: 0x11ace50)
// Original: FT_Property_Get
// ----------------------------------------------------------------------------
int FT_Property_Get(int a1, char *s2, int a3, int a4)
{
  int v4;
  uint32_t *v6;
  unsigned int v7;
  int (*v8)(uint32_t, const char *);
  int v9;
  int (*v10)(uint32_t, int, int);
  unsigned int v11;

  v4 = 33;
  if ( a1 != 0 )
  {
    if ( a3 != 0 && s2 != nullptr )
    {
      LOWORD(v4) = 6;
      if ( a4 != 0 )
      {
        v6 = (uint32_t *)(a1 + 20);
        v11 = a1 + 4 * *(uint32_t *)(a1 + 16) + 20;
        if ( a1 + 20 < v11 )
        {
          v7 = a1 + 4 * *(uint32_t *)(a1 + 16) + 20;
          do
          {
            if ( strcmp(*(const char **)(*(uint32_t *)*v6 + 8), s2) == 0 )
              break;
            ++v6;
          }
          while ( v7 > (unsigned int)(uintptr_t)(v6) );
        }
        v4 = 11;
        if ( (uint32_t *)v11 != v6 )
        {
          LOWORD(v4) = 7;
          v8 = *(int (**)(uint32_t, const char *))(*(uint32_t *)*v6 + 32);
          if ( v8 != nullptr )
          {
            v9 = v8(*v6, "properties");
            if ( v9 != 0 )
            {
              v10 = *(int (**)(uint32_t, int, int))(v9 + 4);
              if ( v10 != nullptr )
                return v10(*v6, a3, a4);
            }
          }
        }
      }
    }
    else
    {
      return 6;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: FT_Reference_Library  (binary VA: 0x11acf50)
// Original: FT_Reference_Library
// ----------------------------------------------------------------------------
int FT_Reference_Library(int a1)
{
  ++*(uint32_t *)(a1 + 188);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Library_Version  (binary VA: 0x11acf60)
// Original: FT_Library_Version
// ----------------------------------------------------------------------------
int FT_Library_Version(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int result;

  if ( a1 != nullptr )
  {
    v4 = a1[1];
    v5 = a1[2];
    result = a1[3];
  }
  else
  {
    result = 0;
    v5 = 0;
    v4 = 0;
  }
  if ( a2 != nullptr )
    *a2 = v4;
  if ( a3 != nullptr )
    *a3 = v5;
  if ( a4 != nullptr )
    *a4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Set_Debug_Hook  (binary VA: 0x11acfc0)
// Original: FT_Set_Debug_Hook
// ----------------------------------------------------------------------------
int FT_Set_Debug_Hook(int a1, unsigned int a2, int a3)
{
  int result;

  result = a3;
  if ( a3 != 0 && a1 != 0 && a2 <= 3 )
    *(uint32_t *)(a1 + 4 * a2 + 172) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_TrueType_Engine_Type  (binary VA: 0x11acff0)
// Original: FT_Get_TrueType_Engine_Type
// ----------------------------------------------------------------------------
int FT_Get_TrueType_Engine_Type(int a1)
{
  int v1;
  uint32_t *Module;
  int service;

  v1 = 0;
  if ( a1 != 0 )
  {
    Module = (uint32_t *)FT_Get_Module(a1, "truetype");
    if ( Module != nullptr )
    {
      service = ft_module_get_service(Module, (int)(uintptr_t)("truetype-engine"));
      if ( service != 0 )
        return *(uint32_t *)service;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_SubGlyph_Info  (binary VA: 0x11ad050)
// Original: FT_Get_SubGlyph_Info
// ----------------------------------------------------------------------------
int FT_Get_SubGlyph_Info(uint32_t *a1, unsigned int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7)
{
  int v7;
  int v9;

  if ( a1 == nullptr )
    return 6;
  v7 = a1[33];
  if ( v7 == 0 || a1[18] != 1668246896 || a1[32] <= a2 )
    return 6;
  v9 = v7 + 32 * a2;
  *a3 = *(uint32_t *)v9;
  *a4 = *(uint16_t *)(v9 + 4);
  *a5 = *(uint32_t *)(v9 + 8);
  *a6 = *(uint32_t *)(v9 + 12);
  *a7 = *(uint32_t *)(v9 + 16);
  a7[1] = *(uint32_t *)(v9 + 20);
  a7[2] = *(uint32_t *)(v9 + 24);
  a7[3] = *(uint32_t *)(v9 + 28);
  return 6;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Decompose  (binary VA: 0x11ad0d0)
// Original: FT_Outline_Decompose
// ----------------------------------------------------------------------------
int FT_Outline_Decompose(int16_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int *v5;
  int *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[2];
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v26)) > _g4_s8 ? (28u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v27)) > _g4_s9 ? (32u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v28)) > _g4_s10 ? (32u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v29)) > _g4_s11 ? (36u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v30)) > _g4_s12 ? (40u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v31)) > _g4_s13 ? (44u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v32)) > _g4_s14 ? (48u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v33)) > _g4_s15 ? (52u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v34)) > _g4_s16 ? (64u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v35)) > _g4_s17 ? (68u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v36)) > _g4_s18 ? (72u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v37)) > _g4_s19 ? (80u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v38)) > _g4_s20 ? (84u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v39)) > _g4_s21 ? (88u + sizeof(_g4_t_v39)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);

  if ( a2 == 0 || a1 == nullptr )
    return 6;
  v30 = *(uint32_t *)(a2 + 16);
  v29 = *(uint32_t *)(a2 + 20);
  if ( *a1 <= 0 )
    return 0;
  v22 = **((int16_t **)a1 + 3);
  if ( v22 < 0 )
    return 20;
  v19 = 0;
  v27 = 0;
  while ( 1 )
  {
    v4 = *((uint32_t *)a1 + 1);
    v5 = (int *)(v4 + 8 * v22);
    v6 = (int *)(v4 + 8 * v27);
    v7 = *v6;
    v23 = v5;
    v8 = v5;
    v31 = v6;
    v9 = (v6[1] << v30) - v29;
    v35 = v9;
    v24 = v8[1];
    v34 = (v7 << v30) - v29;
    v10 = *v23;
    v33 = v9;
    v20 = v10;
    v32 = v34;
    v11 = *((uint32_t *)a1 + 2);
    v25 = (uint8_t *)(v27 + v11);
    if ( (*(uint8_t *)(v27 + v11) & 3) == 2 )
      return 20;
    if ( (*(uint8_t *)(v27 + v11) & 3) == 0 )
    {
      v21 = (v20 << v30) - v29;
      if ( (*(uint8_t *)(v11 + v22) & 3) == 1 )
      {
        v34 = v21;
        v35 = (v24 << v30) - v29;
        v23 -= 2;
      }
      else
      {
        v34 = (v21 + (v7 << v30) - v29) / 2;
        v35 = ((v24 << v30) - v29 + v9) / 2;
      }
      v31 = v6 - 2;
      --v25;
    }
    result = (*(int (**)(int *, int))a2)(&v34, a3);
    if ( result != 0 )
      return result;
    if ( v31 < v23 )
    {
      do
      {
        if ( (v25[1] & 3) != 0 )
        {
          if ( (v25[1] & 3) == 1 )
          {
            v39[0] = (v31[2] << v30) - v29;
            v18 = v31 + 2;
            v39[1] = (v31[3] << v30) - v29;
            result = (*(int (**)(uint32_t *, int))(a2 + 4))(v39, a3);
            if ( result != 0 )
              return result;
            ++v25;
            v31 += 2;
            v17 = v18;
          }
          else
          {
            if ( v23 < v31 + 4 || (v25[2] & 3) != 2 )
              return 20;
            v17 = v31 + 6;
            v36[0] = (v31[2] << v30) - v29;
            v36[1] = (v31[3] << v30) - v29;
            v37 = (v31[4] << v30) - v29;
            v38 = (v31[5] << v30) - v29;
            if ( v23 < v31 + 6 )
            {
              result = (*(int (**)(uint32_t *, int *, int *, int))(a2 + 12))(v36, &v37, &v34, a3);
              goto LABEL_23;
            }
            v39[0] = (v31[6] << v30) - v29;
            v39[1] = (v31[7] << v30) - v29;
            result = (*(int (**)(uint32_t *, int *, uint32_t *, int))(a2 + 12))(v36, &v37, v39, a3);
            if ( result != 0 )
              return result;
            v25 += 3;
            v31 += 6;
          }
        }
        else
        {
          v12 = (v31[2] << v30) - v29;
          v13 = (v31[3] << v30) - v29;
          v32 = v12;
          v33 = v13;
          if ( v23 <= v31 + 2 )
          {
LABEL_22:
            result = (*(int (**)(int *, int *, int))(a2 + 8))(&v32, &v34, a3);
            goto LABEL_23;
          }
          v28 = v25 + 2;
          v26 = v25[2] & 3;
          v14 = (v31[4] << v30) - v29;
          v37 = v14;
          v15 = (v31[5] << v30) - v29;
          v38 = v15;
          if ( v26 != 1 )
          {
            if ( v26 != 0 )
              return 20;
            v31 += 4;
            while ( 1 )
            {
              v39[1] = (v13 + v15) / 2;
              v39[0] = (v12 + v14) / 2;
              result = (*(int (**)(int *, uint32_t *, int))(a2 + 8))(&v32, v39, a3);
              if ( result != 0 )
                return result;
              v32 = v37;
              v33 = v38;
              if ( v23 <= v31 )
                goto LABEL_22;
              ++v28;
              v31 += 2;
              v16 = *v28 & 3;
              v14 = (*v31 << v30) - v29;
              v37 = v14;
              v15 = (v31[1] << v30) - v29;
              v38 = v15;
              if ( v16 == 1 )
                goto LABEL_42;
              if ( v16 != 0 )
                return 20;
              v12 = v32;
              v13 = v33;
            }
          }
          v31 += 4;
LABEL_42:
          result = (*(int (**)(int *, int *, int))(a2 + 8))(&v32, &v37, a3);
          if ( result != 0 )
            return result;
          v17 = v31;
          v25 = v28;
        }
      }
      while ( v23 > v17 );
    }
    result = (*(int (**)(int *, int))(a2 + 4))(&v34, a3);
LABEL_23:
    if ( result != 0 )
      return result;
    ++v19;
    v27 = v22 + 1;
    if ( *a1 <= v19 )
      return result;
    v22 = *(int16_t *)(*((uint32_t *)a1 + 3) + 2 * v19);
    if ( v22 < 0 )
      return 20;
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Check  (binary VA: 0x11ad620)
// Original: FT_Outline_Check
// ----------------------------------------------------------------------------
char FT_Outline_Check(int16_t *a1)
{
  int v1;
  int v2;
  int v3;
  int i;
  int v5;

  v1 = 6;
  if ( a1 != nullptr )
  {
    v2 = *a1;
    LOBYTE(v1) = 0;
    v3 = a1[1];
    if ( (v3 | v2) != 0 )
    {
      if ( v2 > 0 && v3 > 0 )
      {
        for ( i = -1; ; i = v5 )
        {
          v5 = *(int16_t *)(*((uint32_t *)a1 + 3) + 2 * v1);
          if ( v5 >= v3 || v5 <= i )
            break;
          if ( v2 <= ++v1 )
          {
            LOBYTE(v1) = 0;
            if ( v3 - 1 != v5 )
              LOBYTE(v1) = 6;
            return v1;
          }
        }
      }
      LOBYTE(v1) = 6;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Copy  (binary VA: 0x11ad6a0)
// Original: FT_Outline_Copy
// ----------------------------------------------------------------------------
int FT_Outline_Copy(int16_t *a1, int a2)
{
  int v2;

  v2 = 6;
  if ( a2 != 0 && a1 != nullptr && *(uint32_t *)a1 == *(uint32_t *)a2 )
  {
    LOWORD(v2) = 0;
    if ( a1 != (int16_t *)a2 )
    {
      memcpy(*(void **)(a2 + 4), *((const void **)a1 + 1), 8 * a1[1]);
      memcpy(*(void **)(a2 + 8), *((const void **)a1 + 2), a1[1]);
      memcpy(*(void **)(a2 + 12), *((const void **)a1 + 3), 2 * *a1);
      *(uint32_t *)(a2 + 16) = *(uint32_t *)(a2 + 16) & 1 | *((uint32_t *)a1 + 4) & 0xFFFFFFFE;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Get_CBox  (binary VA: 0x11ad770)
// Original: FT_Outline_Get_CBox
// ----------------------------------------------------------------------------
g4_int128_t * FT_Outline_Get_CBox(int a1, g4_int128_t *a2)
{
  g4_int128_t *result;
  int16_t v3;
  unsigned int v4;
  signed int v5;
  signed int *v6;
  signed int v7;
  signed int v8;
  __m128i v9;
  unsigned int v10;
  int v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
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
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  signed int v56;
  g4_int128_t v57;
  unsigned int v58;
  signed int *v59;
  unsigned int v60;
  signed int v61;

  result = (g4_int128_t *)a1;
  if ( a2 != nullptr && a1 != 0 )
  {
    v3 = *(uint16_t *)(a1 + 2);
    if ( v3 != 0 )
    {
      v59 = *(signed int **)(a1 + 4);
      v4 = (unsigned int)(uintptr_t)(&v59[2 * v3]);
      v5 = *v59;
      v60 = v4;
      v61 = v59[1];
      v6 = v59 + 2;
      v7 = v61;
      v8 = *v59;
      if ( v4 > (unsigned int)(uintptr_t)(v59 + 2) )
      {
        v58 = ((v4 - (unsigned int)(uintptr_t)(v59) - 9) >> 3) + 1;
        if ( v58 <= 8 || 4 * (v58 >> 2) == 0 )
        {
          v7 = v59[1];
          v8 = *v59;
          goto LABEL_10;
        }
        v9 = _mm_cvtsi32_si128(v5);
        v10 = 0;
        v11 = *(uint32_t *)(a1 + 4);
        v12 = _mm_shuffle_epi32(v9, 0);
        v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v61), 0);
        v14 = v12;
        v15 = v13;
        do
        {
          v16 = *(__m128i *)(v11 + 24);
          v17 = *(__m128i *)(v11 + 8);
g4_m128_raw(v18) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v17)),g4_m128_raw(G4_BITCAST<__m128>(v16)), 221);
g4_m128_raw(v19) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v17)),g4_m128_raw(G4_BITCAST<__m128>(v16)), 136);
          v20 = _mm_cmpgt_epi32(v12, v19);
          v21 = _mm_and_si128(v19, v20);
          v22 = _mm_andnot_si128(v20, v12);
          v23 = _mm_cmpgt_epi32(v14, v19);
          v12 = _mm_or_si128(v22, v21);
          v24 = v14;
          v25 = _mm_andnot_si128(v23, v19);
          v26 = _mm_and_si128(v24, v23);
          v27 = _mm_cmpgt_epi32(v13, v18);
          ++v10;
          v28 = _mm_and_si128(v18, v27);
          v29 = _mm_andnot_si128(v27, v13);
          v30 = _mm_cmpgt_epi32(v15, v18);
          v13 = _mm_or_si128(v29, v28);
          v14 = _mm_or_si128(v25, v26);
          v15 = _mm_or_si128(_mm_andnot_si128(v30, v18), _mm_and_si128(v15, v30));
          v11 += 32;
        }
        while ( v58 >> 2 > v10 );
        v31 = _mm_srli_si128(v15, 8);
        v32 = _mm_cmpgt_epi32(v31, v15);
        v6 += 8 * (v58 >> 2);
        v33 = _mm_or_si128(_mm_andnot_si128(v32, v15), _mm_and_si128(v31, v32));
        v34 = _mm_srli_si128(v33, 4);
        v35 = _mm_cmpgt_epi32(v34, v33);
        v36 = _mm_and_si128(v34, v35);
        v37 = _mm_andnot_si128(v35, v33);
        v38 = _mm_srli_si128(v13, 8);
        v61 = _mm_cvtsi128_si32(_mm_or_si128(v37, v36));
        v39 = _mm_cmpgt_epi32(v38, v13);
        v40 = _mm_or_si128(_mm_andnot_si128(v39, v38), _mm_and_si128(v13, v39));
        v41 = _mm_srli_si128(v40, 4);
        v42 = _mm_cmpgt_epi32(v41, v40);
        v43 = _mm_or_si128(_mm_andnot_si128(v42, v41), _mm_and_si128(v40, v42));
        v44 = _mm_srli_si128(v14, 8);
        v7 = _mm_cvtsi128_si32(v43);
        v45 = _mm_cmpgt_epi32(v44, v14);
        v46 = _mm_or_si128(_mm_andnot_si128(v45, v14), _mm_and_si128(v44, v45));
        v47 = _mm_srli_si128(v46, 4);
        v48 = _mm_cmpgt_epi32(v47, v46);
        v49 = _mm_and_si128(v47, v48);
        v50 = _mm_andnot_si128(v48, v46);
        v51 = _mm_srli_si128(v12, 8);
        v5 = _mm_cvtsi128_si32(_mm_or_si128(v50, v49));
        v52 = _mm_cmpgt_epi32(v51, v12);
        v53 = _mm_or_si128(_mm_andnot_si128(v52, v51), _mm_and_si128(v12, v52));
        v54 = _mm_srli_si128(v53, 4);
        v55 = _mm_cmpgt_epi32(v54, v53);
        v8 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v55, v54), _mm_and_si128(v53, v55)));
        if ( v58 != 4 * (v58 >> 2) )
        {
          do
          {
LABEL_10:
            if ( v8 > *v6 )
              v8 = *v6;
            if ( v5 < *v6 )
              v5 = *v6;
            v56 = v6[1];
            v6 += 2;
            if ( v7 > v56 )
              v7 = v56;
            if ( v61 >= v56 )
              v56 = v61;
            v61 = v56;
          }
          while ( v60 > (unsigned int)(uintptr_t)(v6) );
        }
      }
    }
    else
    {
      v61 = 0;
      v5 = 0;
      v7 = 0;
      v8 = 0;
    }
    result = a2;
    *(uint64_t *)&v57 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v7)), 0);
    *((uint64_t *)&v57 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v61)), 0);
    *a2 = v57;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Translate  (binary VA: 0x11ada50)
// Original: FT_Outline_Translate
// ----------------------------------------------------------------------------
void FT_Outline_Translate(int a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;

  if ( a1 != 0 )
  {
    v3 = *(uint32_t **)(a1 + 4);
    if ( *(int16_t *)(a1 + 2) > 0 )
    {
      v4 = 0;
      do
      {
        ++v4;
        v3[1] += a3;
        *v3 += a2;
        v3 += 2;
      }
      while ( (uint16_t)v4 < *(int16_t *)(a1 + 2) );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Reverse  (binary VA: 0x11ada90)
// Original: FT_Outline_Reverse
// ----------------------------------------------------------------------------
void FT_Outline_Reverse(int16_t *a1)
{
  int v1;
  int16_t *v2;
  int v3;
  int *v4;
  int *i;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  char *j;
  char v12; // di
  int v13;
  uint16_t v14;
  int v15;

  if ( a1 != nullptr )
  {
    if ( *a1 > 0 )
    {
      v15 = 0;
      v14 = 0;
      v1 = 0;
      v2 = a1;
      do
      {
        v13 = *(int16_t *)(*((uint32_t *)v2 + 3) + 2 * v1);
        v3 = *((uint32_t *)v2 + 1);
        v4 = (int *)(v3 + 8 * v15);
        for ( i = (int *)(v3 + 8 * v13); v4 < i; i -= 2 )
        {
          v6 = *v4;
          v7 = v4[1];
          v8 = *i;
          v4[1] = i[1];
          *v4 = v8;
          *i = v6;
          i[1] = v7;
          v4 += 2;
        }
        v9 = *((uint32_t *)a1 + 2);
        v10 = (char *)(v9 + v15);
        for ( j = (char *)(v13 + v9); v10 < j; --j )
        {
          v12 = *v10;
          *v10 = *j;
          *j = v12;
          ++v10;
        }
        v2 = a1;
        ++v14;
        v15 = v13 + 1;
        v1 = v14;
      }
      while ( v14 < *a1 );
    }
    *((uint32_t *)a1 + 4) ^= 4u;
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_Transform  (binary VA: 0x11adb70)
// Original: FT_Vector_Transform
// ----------------------------------------------------------------------------
void FT_Vector_Transform(int *a1, int *a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  int v5;

  if ( a2 != nullptr && a1 != nullptr )
  {
    v2 = FT_MulFix(*a1, *a2);
    v5 = v2 + FT_MulFix(a1[1], a2[1]);
    v3 = FT_MulFix(*a1, a2[2]);
    v4 = FT_MulFix(a1[1], a2[3]);
    *a1 = v5;
    a1[1] = v4 + v3;
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Transform  (binary VA: 0x11adc10)
// Original: FT_Outline_Transform
// ----------------------------------------------------------------------------
void FT_Outline_Transform(int a1, int *a2)
{
  int *v2;
  int *v3;
  int *v4;

  if ( a2 != nullptr && a1 != 0 )
  {
    v2 = *(int **)(a1 + 4);
    v3 = &v2[2 * *(int16_t *)(a1 + 2)];
    while ( v3 > v2 )
    {
      v4 = v2;
      v2 += 2;
      FT_Vector_Transform(v4, a2);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Get_Orientation  (binary VA: 0x11adc80)
// Original: FT_Outline_Get_Orientation
// ----------------------------------------------------------------------------
int FT_Outline_Get_Orientation(int16_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef g4_int128_t _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  v1 = 0;
  if ( a1 == nullptr || a1[1] <= 0 )
    return v1;
  FT_Outline_Get_CBox((int)(uintptr_t)(a1), &v17);
  v2 = FT_MSB(__builtin_abs(SDWORD2(v17)) | __builtin_abs(LODWORD(v17))) - 14;
  if ( v2 < 0 )
    LOBYTE(v2) = 0;
  v14 = v2;
  v3 = FT_MSB(HIDWORD(v17) - DWORD1(v17)) - 14;
  if ( v3 >= 0 )
    LOBYTE(v1) = v3;
  v11 = *((uint32_t *)a1 + 1);
  v15 = v1;
  v1 = 2;
  if ( *a1 <= 0 )
    return v1;
  v16 = 0;
  v12 = 0;
  v4 = 0;
  do
  {
    v13 = *(int16_t *)(*((uint32_t *)a1 + 3) + v16);
    v5 = (int *)(v11 + 8 * v13);
    v6 = *v5;
    v7 = v5[1];
    if ( v13 >= v4 )
    {
      while ( 1 )
      {
        v8 = *(uint32_t *)(v11 + 8 * v4 + 4);
        v9 = *(uint32_t *)(v11 + 8 * v4++);
        v12 += ((v9 + v6) >> v14) * ((v8 - v7) >> v15);
        if ( v13 < v4 )
          break;
        v7 = v8;
        v6 = v9;
      }
    }
    v16 += 2;
    v4 = v13 + 1;
  }
  while ( v16 != 2 * *a1 );
  v1 = 1;
  if ( v12 <= 0 )
    return v12 == 0 ? 2 : 0;
  else
    return v1;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Sfnt_Name_Count  (binary VA: 0x11adde0)
// Original: FT_Get_Sfnt_Name_Count
// ----------------------------------------------------------------------------
int FT_Get_Sfnt_Name_Count(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 8) & 8) != 0 )
    return *(uint16_t *)(a1 + 340);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_OpenMemory  (binary VA: 0x11ade00)
// Original: FT_Stream_OpenMemory
// ----------------------------------------------------------------------------
uint32_t * FT_Stream_OpenMemory(uint32_t *a1, int a2, int a3)
{
  *a1 = a2;
  a1[1] = a3;
  a1[2] = 0;
  a1[8] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Close  (binary VA: 0x11ade30)
// Original: FT_Stream_Close
// ----------------------------------------------------------------------------
int FT_Stream_Close(int a1)
{
  int result;
  int (*v2)(int);

  result = a1;
  if ( a1 != 0 )
  {
    v2 = *(int (**)(int))(a1 + 24);
    if ( v2 != nullptr )
      return v2(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Seek  (binary VA: 0x11ade50)
// Original: FT_Stream_Seek
// ----------------------------------------------------------------------------
int FT_Stream_Seek(uint32_t *a1, unsigned int a2)
{
  int (*v2)(uint32_t *, unsigned int, uint32_t, uint32_t);

  v2 = (int (*)(uint32_t *, unsigned int, uint32_t, uint32_t))a1[5];
  if ( v2 != nullptr )
  {
    if ( v2(a1, a2, 0, 0) != 0 )
      return 85;
  }
  else if ( a2 > a1[1] )
  {
    return 85;
  }
  a1[2] = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Raccess_Guess  (binary VA: 0x11adee0)
// Original: FT_Raccess_Guess
// ----------------------------------------------------------------------------
int FT_Raccess_Guess(int a1, uint32_t *a2, char *s, uint32_t *a4, int a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;

  *a4 = 0;
  if ( a2 != nullptr )
  {
    v6 = FT_Stream_Seek(a2, 0);
    *a6 = v6;
    if ( v6 == 0 )
      *a6 = sub_11AEC70(a1, a2, s, a4, a5);
    a4[1] = 0;
    v7 = FT_Stream_Seek(a2, 0);
    a6[1] = v7;
    if ( v7 == 0 )
      a6[1] = sub_11AEDE0(a1, a2, s, a4 + 1, a5 + 4);
    a4[2] = 0;
    v8 = FT_Stream_Seek(a2, 0);
    a6[2] = v8;
    if ( v8 == 0 )
      a6[2] = sub_11B2110(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 2), a5 + 8);
    a4[3] = 0;
    v9 = FT_Stream_Seek(a2, 0);
    a6[3] = v9;
    if ( v9 == 0 )
      a6[3] = sub_11B01E0(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 3), a5 + 12);
    a4[4] = 0;
    v10 = FT_Stream_Seek(a2, 0);
    a6[4] = v10;
    if ( v10 == 0 )
      a6[4] = sub_11B0130(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 4), a5 + 16);
    a4[5] = 0;
    v11 = FT_Stream_Seek(a2, 0);
    a6[5] = v11;
    if ( v11 == 0 )
      a6[5] = sub_11B0420(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 5), a5 + 20);
    a4[6] = 0;
    v12 = FT_Stream_Seek(a2, 0);
    a6[6] = v12;
    if ( v12 == 0 )
      a6[6] = sub_11B0310(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 6), a5 + 24);
    a4[7] = 0;
    v13 = FT_Stream_Seek(a2, 0);
    a6[7] = v13;
    if ( v13 == 0 )
      a6[7] = sub_11B1E30(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 7), a5 + 28);
    a4[8] = 0;
    result = FT_Stream_Seek(a2, 0);
    a6[8] = result;
    if ( result == 0 )
    {
      result = sub_11B1B30(a1, (int)(uintptr_t)(a2), s, (int)(uintptr_t)(a4 + 8), a5 + 32);
      a6[8] = result;
    }
  }
  else
  {
    *a6 = 0;
    *a6 = sub_11AEC70(a1, 0, s, a4, a5);
    a4[1] = 0;
    a6[1] = 0;
    a6[1] = sub_11AEDE0(a1, 0, s, a4 + 1, a5 + 4);
    a4[2] = 0;
    a6[2] = 0;
    a6[2] = sub_11B2110(a1, 0, s, (int)(uintptr_t)(a4 + 2), a5 + 8);
    a4[3] = 0;
    a6[3] = 0;
    a6[3] = sub_11B01E0(a1, 0, s, (int)(uintptr_t)(a4 + 3), a5 + 12);
    a4[4] = 0;
    a6[4] = 0;
    a6[4] = sub_11B0130(a1, 0, s, (int)(uintptr_t)(a4 + 4), a5 + 16);
    a4[5] = 0;
    a6[5] = 0;
    a6[5] = sub_11B0420(a1, 0, s, (int)(uintptr_t)(a4 + 5), a5 + 20);
    a4[6] = 0;
    a6[6] = 0;
    a6[6] = sub_11B0310(a1, 0, s, (int)(uintptr_t)(a4 + 6), a5 + 24);
    a4[7] = 0;
    a6[7] = 0;
    a6[7] = sub_11B1E30(a1, 0, s, (int)(uintptr_t)(a4 + 7), a5 + 28);
    a4[8] = 0;
    a6[8] = 0;
    result = sub_11B1B30(a1, 0, s, (int)(uintptr_t)(a4 + 8), a5 + 32);
    a6[8] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Skip  (binary VA: 0x11ae470)
// Original: FT_Stream_Skip
// ----------------------------------------------------------------------------
int FT_Stream_Skip(uint32_t *a1, int a2)
{
  int result;

  result = 85;
  if ( a2 >= 0 )
    return FT_Stream_Seek(a1, a1[2] + a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Pos  (binary VA: 0x11ae4b0)
// Original: FT_Stream_Pos
// ----------------------------------------------------------------------------
int FT_Stream_Pos(int a1)
{
  return *(uint32_t *)(a1 + 8);
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadAt  (binary VA: 0x11ae4c0)
// Original: FT_Stream_ReadAt
// ----------------------------------------------------------------------------
int FT_Stream_ReadAt(uint32_t *a1, unsigned int a2, void *dest, size_t a4)
{
  int result;
  unsigned int v5;
  int (*v6)(uint32_t *, unsigned int, void *, size_t);
  unsigned int v7;
  size_t n;
  size_t v9;

  result = 85;
  v5 = a1[1];
  if ( v5 > a2 )
  {
    v6 = (int (*)(uint32_t *, unsigned int, void *, size_t))a1[5];
    if ( v6 != nullptr )
    {
      v7 = v6(a1, a2, dest, a4);
    }
    else
    {
      n = v5 - a2;
      if ( a4 <= n )
        n = a4;
      v9 = n;
      memcpy(dest, (const void *)(a2 + *a1), n);
      v7 = v9;
    }
    a1[2] = v7 + a2;
    return v7 < a4 ? 0x55 : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Read  (binary VA: 0x11ae560)
// Original: FT_Stream_Read
// ----------------------------------------------------------------------------
int FT_Stream_Read(uint32_t *a1, void *a2, size_t a3)
{
  return FT_Stream_ReadAt(a1, a1[2], a2, a3);
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_TryRead  (binary VA: 0x11ae5a0)
// Original: FT_Stream_TryRead
// ----------------------------------------------------------------------------
size_t FT_Stream_TryRead(uint32_t *a1, void *dest, size_t a3)
{
  size_t n;
  unsigned int v4;
  unsigned int v5;
  int (*v6)(uint32_t *, unsigned int, void *, size_t);

  n = 0;
  v4 = a1[2];
  v5 = a1[1];
  if ( v4 < v5 )
  {
    v6 = (int (*)(uint32_t *, unsigned int, void *, size_t))a1[5];
    if ( v6 != nullptr )
    {
      n = v6(a1, v4, dest, a3);
    }
    else
    {
      n = v5 - v4;
      if ( a3 <= v5 - v4 )
        n = a3;
      memcpy(dest, (const void *)(*a1 + v4), n);
    }
    a1[2] += n;
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_GetChar  (binary VA: 0x11ae630)
// Original: FT_Stream_GetChar
// ----------------------------------------------------------------------------
int FT_Stream_GetChar(int a1)
{
  int result;
  uint8_t *v2;

  result = 0;
  v2 = *(uint8_t **)(a1 + 32);
  if ( (unsigned int)(uintptr_t)(v2) < *(uint32_t *)(a1 + 36) )
  {
    result = *v2;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_GetUShort  (binary VA: 0x11ae650)
// Original: FT_Stream_GetUShort
// ----------------------------------------------------------------------------
int FT_Stream_GetUShort(int a1)
{
  int result;
  uint8_t *v2;
  int v3;
  int v4;

  result = 0;
  v2 = *(uint8_t **)(a1 + 32);
  if ( *(uint32_t *)(a1 + 36) > (unsigned int)(uintptr_t)(v2 + 1) )
  {
    v3 = v2[1];
    v4 = *v2;
    v2 += 2;
    result = (v4 << 8) | v3;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_GetUShortLE  (binary VA: 0x11ae680)
// Original: FT_Stream_GetUShortLE
// ----------------------------------------------------------------------------
int FT_Stream_GetUShortLE(int a1)
{
  int result;
  uint8_t *v2;
  int v3;
  int v4;

  result = 0;
  v2 = *(uint8_t **)(a1 + 32);
  if ( *(uint32_t *)(a1 + 36) > (unsigned int)(uintptr_t)(v2 + 1) )
  {
    v3 = *v2;
    v4 = v2[1];
    v2 += 2;
    result = (v4 << 8) | v3;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_GetUOffset  (binary VA: 0x11ae6b0)
// Original: FT_Stream_GetUOffset
// ----------------------------------------------------------------------------
int FT_Stream_GetUOffset(int a1)
{
  int result;
  uint8_t *v2;
  int v3;
  int v4;

  result = 0;
  v2 = *(uint8_t **)(a1 + 32);
  if ( *(uint32_t *)(a1 + 36) > (unsigned int)(uintptr_t)(v2 + 2) )
  {
    v3 = (v2[1] << 8) | (*v2 << 16);
    v4 = v2[2];
    v2 += 3;
    result = v4 | v3;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_GetULong  (binary VA: 0x11ae6e0)
// Original: FT_Stream_GetULong
// ----------------------------------------------------------------------------
int FT_Stream_GetULong(int a1)
{
  int result;
  uint8_t *v2;
  int v3;
  int v4;

  result = 0;
  v2 = *(uint8_t **)(a1 + 32);
  if ( *(uint32_t *)(a1 + 36) > (unsigned int)(uintptr_t)(v2 + 3) )
  {
    v3 = v2[3] | (v2[1] << 16) | (*v2 << 24);
    v4 = v2[2];
    v2 += 4;
    result = (v4 << 8) | v3;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_GetULongLE  (binary VA: 0x11ae720)
// Original: FT_Stream_GetULongLE
// ----------------------------------------------------------------------------
int FT_Stream_GetULongLE(int a1)
{
  int result;
  uint8_t *v2;
  int v3;
  int v4;

  result = 0;
  v2 = *(uint8_t **)(a1 + 32);
  if ( *(uint32_t *)(a1 + 36) > (unsigned int)(uintptr_t)(v2 + 3) )
  {
    v3 = *v2 | (v2[2] << 16) | (v2[3] << 24);
    v4 = v2[1];
    v2 += 4;
    result = (v4 << 8) | v3;
  }
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadChar  (binary VA: 0x11ae760)
// Original: FT_Stream_ReadChar
// ----------------------------------------------------------------------------
int FT_Stream_ReadChar(uint32_t *a1, uint32_t *a2)
{
  int (*v2)(uint32_t *, uint32_t, uint8_t *, int);
  int result;
  unsigned int v4;
  uint8_t v5[24];

  v5[0] = 0;
  *a2 = 0;
  v2 = (int (*)(uint32_t *, uint32_t, uint8_t *, int))a1[5];
  if ( v2 != nullptr )
  {
    if ( v2(a1, a1[2], v5, 1) != 1 )
    {
LABEL_3:
      *a2 = 85;
      return 0;
    }
    v4 = a1[2];
    result = v5[0];
  }
  else
  {
    v4 = a1[2];
    if ( v4 >= a1[1] )
      goto LABEL_3;
    result = *(uint8_t *)(*a1 + v4);
  }
  a1[2] = v4 + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadUShort  (binary VA: 0x11ae7f0)
// Original: FT_Stream_ReadUShort
// ----------------------------------------------------------------------------
int FT_Stream_ReadUShort(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int (*v3)(uint32_t *, int, uint8_t *, int);
  uint8_t *v4;
  int result;
  uint8_t v6[2];

  *a2 = 0;
  v2 = a1[2];
  if ( (unsigned int)(v2 + 1) < a1[1] )
  {
    v3 = (int (*)(uint32_t *, int, uint8_t *, int))a1[5];
    if ( v3 == nullptr )
    {
      result = 0;
      v4 = (uint8_t *)(*a1 + v2);
      if ( v4 == nullptr )
      {
LABEL_8:
        a1[2] = v2 + 2;
        return result;
      }
LABEL_7:
      result = (*v4 << 8) | v4[1];
      goto LABEL_8;
    }
    v4 = v6;
    if ( v3(a1, v2, v6, 2) == 2 )
    {
      v2 = a1[2];
      goto LABEL_7;
    }
  }
  *a2 = 85;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Raccess_Get_HeaderInfo  (binary VA: 0x11ae880)
// Original: FT_Raccess_Get_HeaderInfo
// ----------------------------------------------------------------------------
char FT_Raccess_Get_HeaderInfo(int a1, uint32_t *a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  int v5;
  int64_t v6; // rdi
  bool v7;
  uint16_t v8; // si
  unsigned int v9;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef unsigned int _g4_t_v14[3];
  typedef char _g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v15)) > _g4_s4 ? (47u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 47u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);

  v5 = FT_Stream_Seek(a2, a3);
  v13 = v5;
  if ( v5 == 0 )
  {
    v5 = FT_Stream_Read(a2, v14, 0x10u);
    v13 = v5;
    if ( v5 == 0 )
    {
      v12 = a3 + __builtin_bswap32(v14[0]);
      *a5 = v12;
      v11 = a3 + __builtin_bswap32(v14[1]);
      if ( v12 + __builtin_bswap32(v14[2]) != v11 || v11 == a3 )
      {
        LOBYTE(v5) = 2;
      }
      else
      {
        v5 = FT_Stream_Seek(a2, v11);
        v13 = v5;
        if ( v5 == 0 )
        {
          v16[15] = v15 + 1;
          v5 = FT_Stream_Read(a2, v16, 0x10u);
          v13 = v5;
          if ( v5 == 0 )
          {
            v6 = 0x100000001LL;
            do
            {
              if ( v16[v5] != 0 )
                LODWORD(v6) = 0;
              v7 = v16[v5] == *((uint8_t *)v14 + v5);
              ++v5;
              if ( !v7 )
                HIDWORD(v6) = 0;
            }
            while ( v5 != 16 );
            LOBYTE(v5) = 2;
            if ( v6 != 0 )
            {
              v13 = FT_Stream_Skip(a2, 8);
              v8 = FT_Stream_ReadUShort(a2, &v13);
              LOBYTE(v5) = v13;
              if ( v13 == 0 )
              {
                v9 = v11 + v8;
                v5 = FT_Stream_Seek(a2, v9);
                if ( v5 == 0 )
                  *a4 = v9;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadUShortLE  (binary VA: 0x11aeaa0)
// Original: FT_Stream_ReadUShortLE
// ----------------------------------------------------------------------------
int FT_Stream_ReadUShortLE(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int (*v3)(uint32_t *, int, uint8_t *, int);
  uint16_t *v4;
  int result;
  uint8_t v6[2];

  *a2 = 0;
  v2 = a1[2];
  if ( (unsigned int)(v2 + 1) < a1[1] )
  {
    v3 = (int (*)(uint32_t *, int, uint8_t *, int))a1[5];
    if ( v3 == nullptr )
    {
      result = 0;
      v4 = (uint16_t *)(*a1 + v2);
      if ( v4 == nullptr )
      {
LABEL_8:
        a1[2] = v2 + 2;
        return result;
      }
LABEL_7:
      result = *v4;
      goto LABEL_8;
    }
    v4 = (uint16_t *)v6;
    if ( v3(a1, v2, v6, 2) == 2 )
    {
      v2 = a1[2];
      goto LABEL_7;
    }
  }
  *a2 = 85;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadUOffset  (binary VA: 0x11aeb30)
// Original: FT_Stream_ReadUOffset
// ----------------------------------------------------------------------------
int FT_Stream_ReadUOffset(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int (*v3)(uint32_t *, int, uint8_t *, int);
  uint8_t *v4;
  int result;
  uint8_t v6[3];

  *a2 = 0;
  v2 = a1[2];
  if ( (unsigned int)(v2 + 2) < a1[1] )
  {
    v3 = (int (*)(uint32_t *, int, uint8_t *, int))a1[5];
    if ( v3 == nullptr )
    {
      result = 0;
      v4 = (uint8_t *)(*a1 + v2);
      if ( v4 == nullptr )
      {
LABEL_8:
        a1[2] = v2 + 3;
        return result;
      }
LABEL_7:
      result = v4[2] | (v4[1] << 8) | (*v4 << 16);
      goto LABEL_8;
    }
    v4 = v6;
    if ( v3(a1, v2, v6, 3) == 3 )
    {
      v2 = a1[2];
      goto LABEL_7;
    }
  }
  *a2 = 85;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadULong  (binary VA: 0x11aebd0)
// Original: FT_Stream_ReadULong
// ----------------------------------------------------------------------------
unsigned int FT_Stream_ReadULong(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int (*v3)(uint32_t *, int, uint8_t *, int);
  unsigned int *v4;
  unsigned int result;
  uint8_t v6[4];

  *a2 = 0;
  v2 = a1[2];
  if ( (unsigned int)(v2 + 3) < a1[1] )
  {
    v3 = (int (*)(uint32_t *, int, uint8_t *, int))a1[5];
    if ( v3 == nullptr )
    {
      result = 0;
      v4 = (unsigned int *)(*a1 + v2);
      if ( v4 == nullptr )
      {
LABEL_8:
        a1[2] = v2 + 4;
        return result;
      }
LABEL_7:
      result = __builtin_bswap32(*v4);
      goto LABEL_8;
    }
    v4 = (unsigned int *)v6;
    if ( v3(a1, v2, v6, 4) == 4 )
    {
      v2 = a1[2];
      goto LABEL_7;
    }
  }
  *a2 = 85;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadULongLE  (binary VA: 0x11aef50)
// Original: FT_Stream_ReadULongLE
// ----------------------------------------------------------------------------
int FT_Stream_ReadULongLE(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int (*v3)(uint32_t *, int, uint8_t *, int);
  uint8_t *v4;
  int result;
  uint8_t v6[4];

  *a2 = 0;
  v2 = a1[2];
  if ( (unsigned int)(v2 + 3) < a1[1] )
  {
    v3 = (int (*)(uint32_t *, int, uint8_t *, int))a1[5];
    if ( v3 == nullptr )
    {
      result = 0;
      v4 = (uint8_t *)(*a1 + v2);
      if ( v4 == nullptr )
      {
LABEL_8:
        a1[2] = v2 + 4;
        return result;
      }
LABEL_7:
      result = (v4[1] << 8) | *v4 | (v4[2] << 16) | (v4[3] << 24);
      goto LABEL_8;
    }
    v4 = v6;
    if ( v3(a1, v2, v6, 4) == 4 )
    {
      v2 = a1[2];
      goto LABEL_7;
    }
  }
  *a2 = 85;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Cos  (binary VA: 0x11aeff0)
// Original: FT_Cos
// ----------------------------------------------------------------------------
int FT_Cos(int a1)
{
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
  int v14;
  uint32_t *v15;
  int v16;

  v1 = 0;
  v2 = 14408027;
  v3 = a1;
  if ( a1 < -2949120 )
  {
    v2 = 0;
    v4 = 14408027;
    while ( 1 )
    {
      v3 += 5898240;
      v1 = -v4;
      if ( v3 >= -2949120 )
        break;
      v4 = v2;
      v2 = v1;
    }
  }
  if ( v3 > (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
  {
    while ( 1 )
    {
      v3 -= 5898240;
      v14 = -v1;
      if ( v3 <= (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
        break;
      v1 = v2;
      v2 = v14;
    }
  }
  else
  {
    v14 = v2;
    v2 = v1;
  }
  v5 = 1;
  v15 = (uint32_t *)(&unk_1CC5B20);
  v6 = 1;
  v16 = v2;
  do
  {
    while ( v3 >= 0 )
    {
      v7 = v6 + v14;
      v8 = v6 + v16;
      v6 *= 2;
      v16 += v7 >> v5;
      v9 = v8 >> v5++;
      v14 -= v9;
      v3 -= *v15++;
      if ( v5 == 23 )
        return (v14 + 128) >> 8;
    }
    v10 = v6 + v14;
    v11 = v6 + v16;
    v6 *= 2;
    v16 -= v10 >> v5;
    v12 = v11 >> v5++;
    v3 += *v15++;
    v14 += v12;
  }
  while ( v5 != 23 );
  return (v14 + 128) >> 8;
}

// ----------------------------------------------------------------------------
// Function: FT_Sin  (binary VA: 0x11af0e0)
// Original: FT_Sin
// ----------------------------------------------------------------------------
int FT_Sin(int a1)
{
  return FT_Cos(5898240 - a1);
}

// ----------------------------------------------------------------------------
// Function: FT_Tan  (binary VA: 0x11af110)
// Original: FT_Tan
// ----------------------------------------------------------------------------
int FT_Tan(int a1)
{
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
  int v13;
  int v14;
  uint32_t *v15;

  v1 = 0;
  v2 = 14408027;
  v3 = a1;
  if ( a1 < -2949120 )
  {
    v2 = 0;
    v4 = 14408027;
    while ( 1 )
    {
      v3 += 5898240;
      v1 = -v4;
      if ( v3 >= -2949120 )
        break;
      v4 = v2;
      v2 = v1;
    }
  }
  if ( v3 > (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
  {
    while ( 1 )
    {
      v3 -= 5898240;
      v13 = -v1;
      if ( v3 <= (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
        break;
      v1 = v2;
      v2 = v13;
    }
  }
  else
  {
    v13 = v2;
    v2 = v1;
  }
  v5 = 1;
  v15 = (uint32_t *)(&unk_1CC5B20);
  v6 = v2;
  v7 = 1;
  do
  {
    while ( v3 >= 0 )
    {
      v8 = v5 + v13;
      v13 -= (v6 + v5) >> v7;
      v5 *= 2;
      v9 = v8 >> v7++;
      v6 += v9;
      v3 -= *v15++;
      if ( v7 == 23 )
        return FT_DivFix(v6, v13);
    }
    v14 = (v6 + v5) >> v7;
    v10 = v5 + v13;
    v5 *= 2;
    v11 = v10 >> v7++;
    v6 -= v11;
    v3 += *v15++;
    v13 += v14;
  }
  while ( v7 != 23 );
  return FT_DivFix(v6, v13);
}

// ----------------------------------------------------------------------------
// Function: FT_Atan2  (binary VA: 0x11af210)
// Original: FT_Atan2
// ----------------------------------------------------------------------------
unsigned int FT_Atan2(int64_t a1)
{
  unsigned int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;

  result = 0;
  if ( a1 != 0 )
  {
    v2 = FT_MSB(__builtin_abs(a1) | __builtin_abs(SHIDWORD(a1)));
    if ( v2 <= 29 )
    {
      v3 = (uint32_t)a1 << (29 - v2);
      v4 = HIDWORD(a1) << (29 - v2);
    }
    else
    {
      v3 = (int)a1 >> (v2 - 29);
      v4 = SHIDWORD(a1) >> (v2 - 29);
    }
    if ( v4 > v3 )
    {
      v3 = -v3;
      if ( v3 < v4 )
      {
        v17 = v3;
        v19 = 5898240;
        v3 = v4;
        v4 = v17;
      }
      else
      {
        v16 = -11796480;
        if ( v4 > 0 )
          v16 = 11796480;
        v19 = v16;
        v4 = -v4;
      }
    }
    else
    {
      v19 = 0;
      if ( -v3 > v4 )
      {
        v19 = -5898240;
        v5 = -v4;
        v4 = v3;
        v3 = v5;
      }
    }
    v6 = 1;
    v7 = 1;
    v18 = (uint32_t *)(&unk_1CC5B20);
    do
    {
      while ( v4 > 0 )
      {
        v8 = v7 + v3;
        v9 = v4 + v7;
        v7 *= 2;
        v4 -= v8 >> v6;
        v10 = v18;
        v11 = v9 >> v6++;
        ++v18;
        v19 += *v10;
        v3 += v11;
        if ( v6 == 23 )
          goto LABEL_11;
      }
      v12 = v7 + v3;
      v13 = v4 + v7;
      v7 *= 2;
      v4 += v12 >> v6;
      v14 = v18;
      v15 = v13 >> v6++;
      ++v18;
      v3 -= v15;
      v19 -= *v14;
    }
    while ( v6 != 23 );
LABEL_11:
    if ( v19 < 0 )
      return -((16 - v19) & 0xFFFFFFE0);
    else
      return (v19 + 16) & 0xFFFFFFE0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_Unit  (binary VA: 0x11af390)
// Original: FT_Vector_Unit
// ----------------------------------------------------------------------------
int * FT_Vector_Unit(int *a1, int a2)
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
  int v14;
  int v15;
  uint32_t *v16;

  v2 = 0;
  v3 = a2;
  *a1 = 14408027;
  a1[1] = 0;
  v4 = 14408027;
  if ( a2 < -2949120 )
  {
    v4 = 0;
    v5 = 14408027;
    while ( 1 )
    {
      v3 += 5898240;
      v2 = -v5;
      if ( v3 >= -2949120 )
        break;
      v5 = v4;
      v4 = v2;
    }
  }
  if ( v3 > (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
  {
    while ( 1 )
    {
      v3 -= 5898240;
      v14 = -v2;
      if ( v3 <= (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
        break;
      v2 = v4;
      v4 = v14;
    }
  }
  else
  {
    v14 = v4;
    v4 = v2;
  }
  v6 = 1;
  v16 = (uint32_t *)(&unk_1CC5B20);
  v7 = v4;
  v8 = 1;
  do
  {
    while ( v3 >= 0 )
    {
      v9 = v6 + v14;
      v14 -= (v7 + v6) >> v8;
      v6 *= 2;
      v10 = v9 >> v8++;
      v7 += v10;
      v3 -= *v16++;
      if ( v8 == 23 )
        goto LABEL_13;
    }
    v15 = (v7 + v6) >> v8;
    v11 = v6 + v14;
    v6 *= 2;
    v12 = v11 >> v8++;
    v7 -= v12;
    v3 += *v16++;
    v14 += v15;
  }
  while ( v8 != 23 );
LABEL_13:
  *a1 = (v14 + 128) >> 8;
  a1[1] = (v7 + 128) >> 8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_Rotate  (binary VA: 0x11af4a0)
// Original: FT_Vector_Rotate
// ----------------------------------------------------------------------------
void FT_Vector_Rotate(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;

  v2 = a2;
  v3 = *a1;
  v4 = a1[1];
  if ( a2 != 0 && (v3 != 0 || v4 != 0) )
  {
    v5 = FT_MSB(__builtin_abs(v3) | __builtin_abs(v4));
    if ( v5 <= 29 )
    {
      v36 = 29 - v5;
      v6 = v3 << (29 - v5);
      v7 = v4 << (29 - v5);
    }
    else
    {
      v6 = v3 >> (v5 - 29);
      v7 = v4 >> (v5 - 29);
      v36 = 29 - v5;
    }
    v8 = v7;
    i = v6;
    if ( a2 < -2949120 )
    {
      for ( i = v7; ; i = v8 )
      {
        v2 += 5898240;
        v8 = -v6;
        if ( v2 >= -2949120 )
          break;
        v6 = i;
      }
    }
    if ( v2 > (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
    {
      while ( 1 )
      {
        v2 -= 5898240;
        v31 = -v8;
        if ( v2 <= (int)(uintptr_t)("_ZNK7hkClass20getMemberIndexByNameEPKc") )
          break;
        v8 = i;
        i = v31;
      }
    }
    else
    {
      v31 = i;
      i = v8;
    }
    v10 = 1;
    v35 = (uint32_t *)(&unk_1CC5B20);
    v11 = 1;
    v12 = i;
    do
    {
      while ( v2 >= 0 )
      {
        v13 = v11 + v31;
        v31 -= (v12 + v11) >> v10;
        v11 *= 2;
        v14 = v13 >> v10++;
        v12 += v14;
        v2 -= *v35++;
        if ( v10 == 23 )
          goto LABEL_18;
      }
      v32 = (v12 + v11) >> v10;
      v15 = v11 + v31;
      v11 *= 2;
      v16 = v15 >> v10++;
      v12 -= v16;
      v2 += *v35++;
      v31 += v32;
    }
    while ( v10 != 23 );
LABEL_18:
    v17 = v12;
    v18 = __builtin_abs(v31);
    v19 = (uint16_t)v18;
    v18 >>= 16;
    v33 = 56281 * v18;
    v20 = 23318 * v18 + 56281 * v19;
    v21 = (unsigned int)(23318 * v19) >> 16;
    v22 = v21 + v20;
    v23 = ((v21 + v20) >> 16) + v33;
    if ( v21 >= v20 )
      v20 = v21;
    if ( v20 > v22 )
      v23 += 0x10000;
    if ( v31 < 0 )
      v23 = -v23;
    v24 = (uint16_t)__builtin_abs(v17);
    v25 = __builtin_abs(v17) >> 16;
    v26 = 23318 * v25 + 56281 * v24;
    v27 = (unsigned int)(23318 * v24) >> 16;
    v34 = 56281 * v25;
    v28 = v27 + v26;
    v29 = ((v27 + v26) >> 16) + v34;
    if ( v27 >= v26 )
      v26 = v27;
    if ( v26 > v28 )
      v29 += 0x10000;
    if ( v17 < 0 )
      v29 = -v29;
    if ( v36 <= 0 )
    {
      *a1 = v23 << -(char)v36;
      a1[1] = v29 << -(char)v36;
    }
    else
    {
      v30 = 1 << (v36 - 1);
      *a1 = (v30 + v23 + (v23 >> 31)) >> v36;
      a1[1] = ((v29 >> 31) + v29 + v30) >> v36;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_Length  (binary VA: 0x11af730)
// Original: FT_Vector_Length
// ----------------------------------------------------------------------------
int FT_Vector_Length(int *a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13; // cc
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int i;
  int v26;
  int v27;

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 == 0 )
    return __builtin_abs(v2);
  if ( v2 == 0 )
    return __builtin_abs(v1);
  v4 = FT_MSB(__builtin_abs(v1) | __builtin_abs(v2));
  if ( v4 <= 29 )
  {
    v27 = 29 - v4;
    v5 = v1 << (29 - v4);
    v6 = v2 << (29 - v4);
  }
  else
  {
    v5 = v1 >> (v4 - 29);
    v6 = v2 >> (v4 - 29);
    v27 = 29 - v4;
  }
  if ( v6 <= v5 )
  {
    if ( -v5 > v6 )
    {
      v23 = v6;
      v6 = v5;
      v5 = -v23;
    }
  }
  else
  {
    v5 = -v5;
    if ( v5 < v6 )
    {
      v24 = v5;
      v5 = v6;
      v6 = v24;
    }
    else
    {
      v6 = -v6;
    }
  }
  v7 = 1;
  for ( i = 1; i != 23; ++i )
  {
    v8 = (v6 + v7) >> i;
    v26 = v8 + v5;
    v9 = v7 + v5;
    v5 -= v8;
    v10 = v9 >> i;
    v11 = v6 - v10;
    v12 = v6 + v10;
    v13 = v6 <= 0;
    v6 = v11;
    if ( v13 )
      v6 = v12;
    else
      v5 = v26;
    v7 *= 2;
  }
  v14 = __builtin_abs(v5);
  v15 = (uint16_t)v14;
  v14 >>= 16;
  v16 = 56281 * v15;
  v17 = 56281 * v14;
  v18 = (unsigned int)(23318 * v15) >> 16;
  v19 = v16 + 23318 * v14;
  v20 = v18 + v19;
  v21 = ((v18 + v19) >> 16) + v17;
  if ( v18 < v19 )
    v18 = v19;
  if ( v18 > v20 )
    v21 += 0x10000;
  v22 = -v21;
  if ( v5 >= 0 )
    v22 = v21;
  result = v22 << -(char)v27;
  if ( v27 > 0 )
    return (v22 + (1 << (v27 - 1))) >> v27;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_EmboldenXY  (binary VA: 0x11af900)
// Original: FT_Outline_EmboldenXY
// ----------------------------------------------------------------------------
int FT_Outline_EmboldenXY(int16_t *a1, int a2, int a3)
{
  int v3;
  int v5;
  int *v6;
  uint32_t *v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_Orientation;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef signed int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef signed int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_Orientation)) > _g4_s4 ? (16u + sizeof(_g4_t_Orientation)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v25)) > _g4_s7 ? (24u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v26)) > _g4_s8 ? (28u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v27)) > _g4_s9 ? (32u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v28)) > _g4_s10 ? (36u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v29)) > _g4_s11 ? (40u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v30)) > _g4_s12 ? (44u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v31)) > _g4_s13 ? (48u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v32)) > _g4_s14 ? (48u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v33)) > _g4_s15 ? (52u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v34)) > _g4_s16 ? (56u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v35)) > _g4_s17 ? (60u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v36)) > _g4_s18 ? (64u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v37)) > _g4_s19 ? (68u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v38)) > _g4_s20 ? (68u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v39)) > _g4_s21 ? (72u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v40)) > _g4_s22 ? (76u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v41)) > _g4_s23 ? (76u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v42)) > _g4_s24 ? (76u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v43)) > _g4_s25 ? (80u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v44)) > _g4_s26 ? (84u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v45)) > _g4_s27 ? (96u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v46)) > _g4_s28 ? (100u + sizeof(_g4_t_v46)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_Orientation &Orientation = *reinterpret_cast<_g4_t_Orientation *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);

  v3 = 6;
  if ( a1 == nullptr )
    return v3;
  LOWORD(v3) = 0;
  v27 = a2 / 2;
  v26 = a3 / 2;
  if ( __PAIR64__(a2 / 2, a3 / 2) == 0 )
    return v3;
  Orientation = FT_Outline_Get_Orientation(a1);
  if ( Orientation == 2 )
    return *a1 != 0 ? 6 : 0;
  v29 = *((uint32_t *)a1 + 1);
  if ( *a1 <= 0 )
    return v3;
  v5 = 0;
  v21 = 0;
  do
  {
    v30 = *(int16_t *)(*((uint32_t *)a1 + 3) + 2 * v21);
    v6 = (int *)(v29 + 8 * v5);
    v20 = *v6;
    v19 = v6[1];
    v7 = (uint32_t *)(v29 + 8 * v30);
    v8 = v7[1];
    v43 = v20 - *v7;
    v44 = v19 - v8;
    v9 = FT_Vector_Length(&v43);
    v37 = v9;
    if ( v9 != 0 )
    {
      v43 = FT_DivFix(v43, v9);
      v44 = FT_DivFix(v44, v37);
    }
    if ( v30 >= v5 )
    {
      v35 = v20;
      v36 = v19;
      while ( 1 )
      {
        if ( v30 <= v5 )
        {
          v34 = v19;
          v33 = v20;
          v16 = v20;
        }
        else
        {
          v33 = *(uint32_t *)(v29 + 8 * v5 + 8);
          v34 = *(uint32_t *)(v29 + 8 * v5 + 12);
          v16 = v33;
        }
        v45 = v16 - v35;
        v46 = v34 - v36;
        v17 = FT_Vector_Length(&v45);
        v39 = v17;
        if ( v17 != 0 )
        {
          v45 = FT_DivFix(v45, v17);
          v46 = FT_DivFix(v46, v39);
        }
        v40 = FT_MulFix(v43, v45);
        v10 = FT_MulFix(v44, v46);
        v11 = 0;
        v12 = v10 + v40;
        v13 = 0;
        if ( v12 >= -61439 )
        {
          v28 = v12 + 0x10000;
          v31 = v44 + v46;
          v23 = v45 + v43;
          if ( Orientation != 0 )
          {
            v23 = -v23;
            v42 = FT_MulFix(v45, v44);
            v41 = v42 - FT_MulFix(v46, v43);
          }
          else
          {
            v31 = -v31;
            v24 = FT_MulFix(v45, v44);
            v41 = FT_MulFix(v46, v43) - v24;
          }
          v14 = v37;
          if ( v39 <= v37 )
            v14 = v39;
          v38 = v14;
          v25 = FT_MulFix(v27, v41);
          if ( v25 > (int)FT_MulFix(v28, v38) )
            v15 = FT_MulDiv(v31, v38, v41);
          else
            v15 = FT_MulDiv(v31, v27, v28);
          v18 = v15;
          v32 = FT_MulFix(v26, v41);
          if ( v32 > (int)FT_MulFix(v28, v38) )
            v13 = FT_MulDiv(v23, v38, v41);
          else
            v13 = FT_MulDiv(v23, v26, v28);
          v11 = v18;
        }
        *(uint32_t *)(*((uint32_t *)a1 + 1) + 8 * v5) = v11 + v35 + v27;
        *(uint32_t *)(*((uint32_t *)a1 + 1) + 8 * v5++ + 4) = v36 + v26 + v13;
        v43 = v45;
        v44 = v46;
        if ( v30 < v5 )
          break;
        v35 = v33;
        v36 = v34;
        v37 = v39;
      }
    }
    ++v21;
    v5 = v30 + 1;
  }
  while ( *a1 > v21 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Embolden  (binary VA: 0x11afd40)
// Original: FT_Outline_Embolden
// ----------------------------------------------------------------------------
int FT_Outline_Embolden(int16_t *a1, int a2)
{
  return FT_Outline_EmboldenXY(a1, a2, a2);
}

// ----------------------------------------------------------------------------
// Function: FT_Hypot  (binary VA: 0x11afd70)
// Original: FT_Hypot
// ----------------------------------------------------------------------------
int FT_Hypot(int a1, int a2)
{
  int v3[5];

  v3[0] = a1;
  v3[1] = a2;
  return FT_Vector_Length(v3);
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_Polarize  (binary VA: 0x11afdb0)
// Original: FT_Vector_Polarize
// ----------------------------------------------------------------------------
unsigned int FT_Vector_Polarize(int *a1, int *a2, unsigned int *a3)
{
  unsigned int result;
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
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;

  result = (unsigned int)(uintptr_t)(a1);
  v4 = *a1;
  v5 = a1[1];
  if ( *a1 == 0 && v5 == 0 )
    return result;
  v6 = FT_MSB(__builtin_abs(v4) | __builtin_abs(v5));
  if ( v6 <= 29 )
  {
    v33 = 29 - v6;
    v7 = v4 << (29 - v6);
    v8 = v5 << (29 - v6);
    if ( v8 > v7 )
    {
LABEL_5:
      v7 = -v7;
      if ( v7 >= v8 )
      {
        v29 = -11796480;
        if ( v8 > 0 )
          v29 = 11796480;
        v31 = v29;
        v8 = -v8;
      }
      else
      {
        v9 = v7;
        v31 = 5898240;
        v7 = v8;
        v8 = v9;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v7 = v4 >> (v6 - 29);
    v8 = v5 >> (v6 - 29);
    v33 = 29 - v6;
    if ( v8 > v7 )
      goto LABEL_5;
  }
  v31 = 0;
  if ( -v7 > v8 )
  {
    v31 = -5898240;
    v28 = -v8;
    v8 = v7;
    v7 = v28;
  }
LABEL_7:
  v10 = 1;
  v11 = 1;
  v30 = (uint32_t *)(&unk_1CC5B20);
  do
  {
    while ( v8 > 0 )
    {
      v12 = v11 + v7;
      v13 = v8 + v11;
      v11 *= 2;
      v8 -= v12 >> v10;
      v14 = v30;
      v15 = v13 >> v10++;
      ++v30;
      v31 += *v14;
      v7 += v15;
      if ( v10 == 23 )
        goto LABEL_11;
    }
    v16 = v11 + v7;
    v17 = v8 + v11;
    v11 *= 2;
    v8 += v16 >> v10;
    v18 = v30;
    v19 = v17 >> v10++;
    ++v30;
    v7 -= v19;
    v31 -= *v18;
  }
  while ( v10 != 23 );
LABEL_11:
  if ( v31 < 0 )
    result = -((16 - v31) & 0xFFFFFFE0);
  else
    result = (v31 + 16) & 0xFFFFFFE0;
  v20 = __builtin_abs(v7);
  v21 = (uint16_t)v20;
  v20 >>= 16;
  v22 = 23318 * v20 + 56281 * v21;
  v23 = (unsigned int)(23318 * v21) >> 16;
  v32 = 56281 * v20;
  v24 = v23 + v22;
  v25 = ((v23 + v22) >> 16) + v32;
  if ( v23 >= v22 )
    v22 = v23;
  if ( v22 > v24 )
    v25 += 0x10000;
  if ( v7 < 0 )
    v25 = -v25;
  v26 = v25 >> v33;
  v27 = v25 << -(char)v33;
  if ( v33 < 0 )
    v26 = v27;
  *a2 = v26;
  *a3 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Vector_From_Polar  (binary VA: 0x11affd0)
// Original: FT_Vector_From_Polar
// ----------------------------------------------------------------------------
void FT_Vector_From_Polar(int *a1, int a2, int a3)
{
  *a1 = a2;
  a1[1] = 0;
  FT_Vector_Rotate(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: FT_Angle_Diff  (binary VA: 0x11b0010)
// Original: FT_Angle_Diff
// ----------------------------------------------------------------------------
int FT_Angle_Diff(int a1, int a2)
{
  int result;

  result = (a2 - a1) % 23592960 + ((a2 - a1) % 23592960 < 0 ? 0x1680000 : 0);
  if ( result >= 11796481 )
    result -= 23592960;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_mem_qalloc  (binary VA: 0x11b0060)
// Original: ft_mem_qalloc
// ----------------------------------------------------------------------------
int ft_mem_qalloc(int a1, int a2, uint32_t *a3)
{
  int result;

  if ( a2 <= 0 )
  {
    *a3 = a2 != 0 ? 6 : 0;
    return 0;
  }
  else
  {
    result = (*(int (**)(int, int))(a1 + 4))(a1, a2);
    *a3 = result == 0 ? 0x40 : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_mem_alloc  (binary VA: 0x11b00b0)
// Original: ft_mem_alloc
// ----------------------------------------------------------------------------
void * ft_mem_alloc(int a1, int n, uint32_t *a3)
{
  void *s;
  int v4;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  s = (void *)ft_mem_qalloc(a1, n, &v6);
  v4 = v6;
  if ( n > 0 && v6 == 0 )
  {
    memset(s, 0, n);
    v4 = v6;
  }
  *a3 = v4;
  return s;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_New  (binary VA: 0x11b02b0)
// Original: FT_GlyphLoader_New
// ----------------------------------------------------------------------------
int FT_GlyphLoader_New(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = (uint32_t *)(ft_mem_alloc(a1, 96, &v5));
  v3 = v5;
  if ( v5 == 0 )
  {
    *v2 = a1;
    *a2 = (uint32_t)(uintptr_t)(v2);
    return v5;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ft_mem_free  (binary VA: 0x11b0530)
// Original: ft_mem_free
// ----------------------------------------------------------------------------
int ft_mem_free(int a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
    return (*(int (**)(int, int))(a1 + 8))(a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_mem_qrealloc  (binary VA: 0x11b0550)
// Original: ft_mem_qrealloc
// ----------------------------------------------------------------------------
void * ft_mem_qrealloc(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  void *v6;
  int v7;
  int v8;
  int v10[4];

  v6 = (void *)a5;
  v10[0] = 0;
  if ( a4 < 0 || a3 < 0 )
  {
    v7 = 6;
  }
  else
  {
    v7 = 6;
    if ( a2 >= 0 )
    {
      if ( a4 != 0 && a2 != 0 )
      {
        v7 = 10;
        if ( a4 <= 0x7FFFFFFF / a2 )
        {
          if ( a3 != 0 )
          {
            v8 = (*(int (**)(int, int, int, int))(a1 + 12))(a1, a3 * a2, a2 * a4, a5);
            v7 = 64;
            if ( v8 != 0 )
            {
              v7 = v10[0];
              v6 = (void *)v8;
            }
          }
          else
          {
            v6 = ft_mem_alloc(a1, a2 * a4, v10);
            v7 = v10[0];
          }
        }
      }
      else
      {
        v6 = nullptr;
        ft_mem_free(a1, a5);
        v7 = v10[0];
      }
    }
  }
  *a6 = v7;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ft_mem_realloc  (binary VA: 0x11b0660)
// Original: ft_mem_realloc
// ----------------------------------------------------------------------------
char * ft_mem_realloc(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  char *v6;
  int v7;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v10[0] = 0;
  v6 = (char *)ft_mem_qrealloc(a1, a2, a3, a4, a5, v10);
  v7 = v10[0];
  if ( a4 > a3 && v10[0] == 0 )
  {
    v9 = v6;
    memset(&v6[a2 * a3], 0, a2 * (a4 - a3));
    v7 = v10[0];
    v6 = v9;
  }
  *a6 = v7;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_CheckSubGlyphs  (binary VA: 0x11b0720)
// Original: FT_GlyphLoader_CheckSubGlyphs
// ----------------------------------------------------------------------------
int FT_GlyphLoader_CheckSubGlyphs(int *a1, int a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  char *v7;
  int v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);

  result = 0;
  v3 = a1[3];
  v4 = a1[12] + a1[21] + a2;
  v5 = *a1;
  v9 = 0;
  if ( v4 > v3 )
  {
    v6 = (v4 + 1) & 0xFFFFFFFE;
    v7 = ft_mem_realloc(v5, 32, v3, v6, a1[13], &v9);
    a1[13] = (int)(uintptr_t)(v7);
    result = v9;
    if ( v9 == 0 )
    {
      v8 = a1[12];
      a1[3] = v6;
      a1[22] = (int)(uintptr_t)(&v7[32 * v8]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_CreateExtra  (binary VA: 0x11b07d0)
// Original: FT_GlyphLoader_CreateExtra
// ----------------------------------------------------------------------------
int FT_GlyphLoader_CreateExtra(int a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v1 = ft_mem_realloc(*(uint32_t *)a1, 8, 0, 2 * *(uint32_t *)(a1 + 4), 0, v12);
  v2 = v12[0];
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v1);
  if ( v2 == 0 )
  {
    v3 = *(int16_t *)(a1 + 22);
    v4 = *(uint32_t *)(a1 + 4);
    v5 = *(uint32_t *)(a1 + 24);
    *(uint8_t *)(a1 + 16) = 1;
    v11 = &v1[8 * v4];
    *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v11);
    v6 = 8 * v3;
    v7 = *(uint32_t *)(a1 + 28) + v3;
    *(uint32_t *)(a1 + 60) = v6 + v5;
    *(uint32_t *)(a1 + 64) = v7;
    v8 = *(uint32_t *)(a1 + 32);
    v9 = *(int16_t *)(a1 + 20);
    *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(&v1[v6]);
    *(uint32_t *)(a1 + 80) = (uint32_t)(uintptr_t)(&v11[v6]);
    *(uint32_t *)(a1 + 68) = v8 + 2 * v9;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ExitFrame  (binary VA: 0x11b0890)
// Original: FT_Stream_ExitFrame
// ----------------------------------------------------------------------------
int FT_Stream_ExitFrame(int *a1)
{
  int result;

  result = a1[5];
  if ( result != 0 )
  {
    result = ft_mem_free(a1[7], *a1);
    *a1 = 0;
  }
  a1[8] = 0;
  a1[9] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_EnterFrame  (binary VA: 0x11b08f0)
// Original: FT_Stream_EnterFrame
// ----------------------------------------------------------------------------
int FT_Stream_EnterFrame(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int result;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v19;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  v18 = a1;
  v17[0] = 0;
  if ( *(uint32_t *)(a2 + 20) != 0 )
  {
    result = 85;
    if ( *(uint32_t *)(a2 + 4) >= a3 )
    {
      v16 = *(uint32_t *)(a2 + 28);
      v6 = ft_mem_qalloc(v16, a3, v17);
      *(uint32_t *)a2 = v6;
      result = v17[0];
      if ( v17[0] == 0 )
      {
        v7 = (*(int (**)(int, uint32_t, int, unsigned int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(a2 + 20))(
               a2,
               *(uint32_t *)(a2 + 8),
               v6,
               a3,
               v13,
               v14,
               v15,
               v16,
               0,
               v17[1],
               v17[2],
               v17[3]);
        if ( a3 > v7 )
        {
          v12 = *(uint32_t *)a2;
          v18 = a4;
          v19 = v7;
          ft_mem_free(v18, v12);
          *(uint32_t *)a2 = 0;
          result = 85;
          v8 = 0;
          v7 = v19;
        }
        else
        {
          v8 = *(uint32_t *)a2;
          result = a5;
        }
        *(uint32_t *)(a2 + 32) = v8;
        *(uint32_t *)(a2 + 36) = v8 + a3;
        *(uint32_t *)(a2 + 8) += v7;
      }
    }
  }
  else
  {
    v9 = *(uint32_t *)(a2 + 8);
    v10 = *(uint32_t *)(a2 + 4);
    result = 85;
    if ( v9 < v10 && a3 <= v10 - v9 )
    {
      v11 = v9 + *(uint32_t *)a2;
      *(uint32_t *)(a2 + 32) = v11;
      *(uint32_t *)(a2 + 36) = a3 + v11;
      *(uint32_t *)(a2 + 8) = a3 + v9;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReadFields  (binary VA: 0x11b0a10)
// Original: FT_Stream_ReadFields
// ----------------------------------------------------------------------------
int FT_Stream_ReadFields(int *a1, int a2, int a3)
{
  int result;
  uint8_t *src;
  int v5;
  char v6;
  size_t v7;
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  char v12; // bp
  char v13;
  uint16_t *v14;
  int v15;
  int v16;
  int16_t v17;
  int16_t v18; // bp
  int16_t v19;
  int16_t v20; // bp
  int v21;
  int v22;
  int v23;
  int v24;
  size_t n;
  int v26;
  int v27;
  char v28;

  if ( a2 == 0 || a1 == nullptr )
    return 6;
  src = (uint8_t *)a1[8];
  v5 = a2 + 4;
  v28 = 0;
  while ( 2 )
  {
    v6 = *(uint8_t *)(v5 - 4);
    switch ( v6 )
    {
      case 4:
        result = FT_Stream_EnterFrame((int)(uintptr_t)(dword_20B9FF4), (int)(uintptr_t)(a1), *(uint16_t *)(v5 - 2), n, v26);
        if ( result == 0 )
        {
          src = (uint8_t *)a1[8];
          v28 = 1;
          goto LABEL_20;
        }
        goto LABEL_8;
      case 8:
      case 9:
        v11 = *src;
        v12 = 24;
        ++src;
        goto LABEL_15;
      case 12:
      case 13:
        v19 = src[1];
        v20 = *src;
        src += 2;
        LOWORD(v11) = (v20 << 8) | v19;
        v12 = 16;
        v11 = (uint16_t)v11;
        goto LABEL_15;
      case 14:
      case 15:
        v17 = *src;
        v18 = src[1];
        src += 2;
        LOWORD(v11) = (v18 << 8) | v17;
        v12 = 16;
        v11 = (uint16_t)v11;
        goto LABEL_15;
      case 16:
      case 17:
        v23 = src[3] | (src[1] << 16) | (*src << 24);
        v24 = src[2];
        src += 4;
        v11 = (v24 << 8) | v23;
        v12 = 0;
        goto LABEL_15;
      case 18:
      case 19:
        v21 = *src | (src[2] << 16) | (src[3] << 24);
        v22 = src[1];
        src += 4;
        v11 = (v22 << 8) | v21;
        v12 = 0;
        goto LABEL_15;
      case 20:
      case 21:
        v15 = (src[1] << 8) | (*src << 16);
        v16 = src[2];
        src += 3;
        v11 = v16 | v15;
        v12 = 8;
        goto LABEL_15;
      case 22:
      case 23:
        v9 = (src[1] << 8) | (src[2] << 16);
        v10 = *src;
        src += 3;
        v11 = v10 | v9;
        v12 = 8;
LABEL_15:
        if ( (*(uint8_t *)(v5 - 4) & 1) != 0 )
          v11 = v11 << v12 >> v12;
        v13 = *(uint8_t *)(v5 - 3);
        v14 = (uint16_t *)(a3 + *(uint16_t *)(v5 - 2));
        if ( v13 == 2 )
        {
          *v14 = v11;
        }
        else if ( v13 == 1 )
        {
          *(uint8_t *)v14 = v11;
        }
        else
        {
          *(uint32_t *)v14 = v11;
        }
        goto LABEL_20;
      case 24:
      case 25:
        v7 = *(uint8_t *)(v5 - 3);
        v8 = &src[v7];
        if ( (unsigned int)(uintptr_t)(&src[v7]) <= a1[9] )
        {
          if ( v6 == 24 )
          {
            memcpy((void *)(a3 + *(uint16_t *)(v5 - 2)), src, v7);
            src = v8;
          }
          else
          {
            src += v7;
          }
LABEL_20:
          v5 += 4;
          continue;
        }
        result = 85;
LABEL_8:
        if ( v28 != 0 )
        {
          v27 = result;
          FT_Stream_ExitFrame(a1);
          return v27;
        }
        return result;
      default:
        a1[8] = (int)(uintptr_t)(src);
        result = 0;
        goto LABEL_8;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ExtractFrame  (binary VA: 0x11b0c50)
// Original: FT_Stream_ExtractFrame
// ----------------------------------------------------------------------------
int FT_Stream_ExtractFrame(int a1, unsigned int a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;

  result = FT_Stream_EnterFrame((int)(uintptr_t)(dword_20B9FF4), a1, a2, v4, v5);
  if ( result == 0 )
  {
    *a3 = *(uint32_t *)(a1 + 32);
    *(uint32_t *)(a1 + 32) = 0;
    *(uint32_t *)(a1 + 36) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_ReleaseFrame  (binary VA: 0x11b0cb0)
// Original: FT_Stream_ReleaseFrame
// ----------------------------------------------------------------------------
int FT_Stream_ReleaseFrame(int a1, int *a2)
{
  int result;

  result = a1;
  if ( a1 != 0 && *(uint32_t *)(a1 + 20) != 0 )
    result = ft_mem_free(*(uint32_t *)(a1 + 28), *a2);
  *a2 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Sfnt_Name  (binary VA: 0x11b0d00)
// Original: FT_Get_Sfnt_Name
// ----------------------------------------------------------------------------
int FT_Get_Sfnt_Name(int a1, unsigned int a2, int a3)
{
  int result;
  int v4;
  uint16_t v5;
  char *v6;
  int v7;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
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

  result = 6;
  v10 = 6;
  if ( a3 != 0 && a1 != 0 && (*(uint8_t *)(a1 + 8) & 8) != 0 && *(uint16_t *)(a1 + 340) > a2 )
  {
    v4 = *(uint32_t *)(a1 + 356) + 20 * a2;
    v5 = *(uint16_t *)(v4 + 8);
    if ( v5 != 0 && *(uint32_t *)(v4 + 16) == 0 )
    {
      v9 = *(uint32_t *)(a1 + 100);
      v8 = *(uint32_t **)(a1 + 104);
      v6 = ft_mem_realloc(v9, 1, 0, v5, 0, &v10);
      v7 = v10;
      *(uint32_t *)(v4 + 16) = (uint32_t)(uintptr_t)(v6);
      if ( v7 == 0 )
      {
        v10 = FT_Stream_Seek(v8, *(uint32_t *)(v4 + 12));
        if ( v10 == 0 )
        {
          v10 = FT_Stream_Read(v8, *(void **)(v4 + 16), *(uint16_t *)(v4 + 8));
          if ( v10 == 0 )
            goto LABEL_7;
        }
        v6 = *(char **)(v4 + 16);
      }
      ft_mem_free(v9, (int)(uintptr_t)(v6));
      *(uint32_t *)(v4 + 16) = 0;
      *(uint16_t *)(v4 + 8) = 0;
    }
LABEL_7:
    *(uint16_t *)a3 = *(uint16_t *)v4;
    *(uint16_t *)(a3 + 2) = *(uint16_t *)(v4 + 2);
    *(uint16_t *)(a3 + 4) = *(uint16_t *)(v4 + 4);
    *(uint16_t *)(a3 + 6) = *(uint16_t *)(v4 + 6);
    *(uint32_t *)(a3 + 8) = *(uint32_t *)(v4 + 16);
    *(uint32_t *)(a3 + 12) = *(uint16_t *)(v4 + 8);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Raccess_Get_DataOffsets  (binary VA: 0x11b0e60)
// Original: FT_Raccess_Get_DataOffsets
// ----------------------------------------------------------------------------
int FT_Raccess_Get_DataOffsets(int *a1, uint32_t *a2, unsigned int a3, int a4, int a5, char a6, char **a7, int *a8)
{
  int result;
  int v9;
  size_t v10;
  int v11;
  char *v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_UShort;
  typedef char *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef unsigned int _g4_t_ULong;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_UShort)) > _g4_s2 ? (16u + sizeof(_g4_t_UShort)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_ULong)) > _g4_s5 ? (24u + sizeof(_g4_t_ULong)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v22)) > _g4_s8 ? (28u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v23)) > _g4_s9 ? (32u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_UShort &UShort = *reinterpret_cast<_g4_t_UShort *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_ULong &ULong = *reinterpret_cast<_g4_t_ULong *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  v14 = *a1;
  result = FT_Stream_Seek(a2, a3);
  v23[0] = result;
  if ( result == 0 )
  {
    UShort = (uint16_t)FT_Stream_ReadUShort(a2, v23);
    result = v23[0];
    if ( v23[0] == 0 )
    {
      v21 = 0;
      while ( 1 )
      {
        ULong = FT_Stream_ReadULong(a2, v23);
        result = v23[0];
        if ( v23[0] != 0 )
          break;
        v15 = (uint16_t)FT_Stream_ReadUShort(a2, v23);
        result = v23[0];
        if ( v23[0] != 0 )
          break;
        v9 = (uint16_t)FT_Stream_ReadUShort(a2, v23);
        result = v23[0];
        if ( v23[0] != 0 )
          break;
        if ( ULong == a5 )
        {
          *a8 = v15 + 1;
          result = FT_Stream_Seek(a2, a3 + v9);
          v23[0] = result;
          if ( result == 0 )
          {
            v17 = ft_mem_realloc(v14, 8, 0, *a8, 0, v23);
            result = v23[0];
            if ( v23[0] == 0 )
            {
              v10 = *a8;
              if ( *a8 <= 0 )
              {
LABEL_21:
                v11 = v10;
                if ( a6 != 0 )
                {
                  qsort(v17, v10, 8u, (__compar_fn_t)sub_11AA7D0);
                  v11 = *a8;
                }
                v12 = ft_mem_realloc(v14, 4, 0, v11, 0, v23);
                if ( v23[0] == 0 )
                {
                  if ( *a8 > 0 )
                  {
                    v13 = 0;
                    do
                    {
                      *(uint32_t *)&v12[4 * v13] = *(uint32_t *)&v17[8 * v13 + 4] + a4;
                      ++v13;
                    }
                    while ( *a8 > v13 );
                  }
                  v23[0] = 0;
                  *a7 = v12;
                }
              }
              else
              {
                v20 = 0;
                v22 = v17;
                while ( 1 )
                {
                  *(uint16_t *)v22 = FT_Stream_ReadUShort(a2, v23);
                  if ( v23[0] != 0 )
                    break;
                  v23[0] = FT_Stream_Skip(a2, 2);
                  if ( v23[0] != 0 )
                    break;
                  v18 = FT_Stream_ReadULong(a2, v23);
                  if ( v23[0] != 0 )
                    break;
                  v23[0] = FT_Stream_Skip(a2, 4);
                  if ( v23[0] != 0 )
                    break;
                  ++v20;
                  *((uint32_t *)v22 + 1) = v18 & 0xFFFFFF;
                  v10 = *a8;
                  v22 += 8;
                  if ( *a8 <= v20 )
                    goto LABEL_21;
                }
              }
              ft_mem_free(v14, (int)(uintptr_t)(v17));
              return v23[0];
            }
          }
          return result;
        }
        if ( UShort < ++v21 )
          return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Done_Internal  (binary VA: 0x11b1120)
// Original: FT_Outline_Done_Internal
// ----------------------------------------------------------------------------
int FT_Outline_Done_Internal(int a1, int a2)
{
  int v3;

  if ( a2 == 0 || a1 == 0 )
    return 6;
  if ( (*(uint8_t *)(a2 + 16) & 1) != 0 )
  {
    ft_mem_free(a1, *(uint32_t *)(a2 + 4));
    v3 = *(uint32_t *)(a2 + 8);
    *(uint32_t *)(a2 + 4) = 0;
    ft_mem_free(a1, v3);
    *(uint32_t *)(a2 + 8) = 0;
    ft_mem_free(a1, *(uint32_t *)(a2 + 12));
  }
  *(uint16_t *)a2 = 0;
  *(uint16_t *)(a2 + 2) = 0;
  *(uint32_t *)(a2 + 4) = 0;
  *(uint32_t *)(a2 + 8) = 0;
  *(uint32_t *)(a2 + 12) = 0;
  *(uint32_t *)(a2 + 16) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Done  (binary VA: 0x11b11e0)
// Original: FT_Outline_Done
// ----------------------------------------------------------------------------
int FT_Outline_Done(int *a1, int a2)
{
  int result;

  result = 33;
  if ( a1 != nullptr )
    return FT_Outline_Done_Internal(*a1, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_New_Internal  (binary VA: 0x11b1220)
// Original: FT_Outline_New_Internal
// ----------------------------------------------------------------------------
int FT_Outline_New_Internal(int a1, unsigned int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6[4];

  if ( a4 == 0 )
    return 6;
  if ( a1 == 0 )
    return 6;
  *(uint16_t *)a4 = 0;
  *(uint16_t *)(a4 + 2) = 0;
  *(uint32_t *)(a4 + 4) = 0;
  *(uint32_t *)(a4 + 8) = 0;
  *(uint32_t *)(a4 + 12) = 0;
  *(uint32_t *)(a4 + 16) = 0;
  if ( a3 > a2 || a3 < 0 )
    return 6;
  result = 10;
  if ( a2 <= 0x7FFF )
  {
    *(uint32_t *)(a4 + 4) = (uint32_t)(uintptr_t)(ft_mem_realloc(a1, 8, 0, a2, 0, v6));
    v5 = a1;
    if ( v6[0] != 0
      || (*(uint32_t *)(a4 + 8) = (uint32_t)(uintptr_t)(ft_mem_realloc(a1, 1, 0, a2, 0, v6)), v5 = a1, v6[0] != 0)
      || (*(uint32_t *)(a4 + 12) = (uint32_t)(uintptr_t)(ft_mem_realloc(a1, 2, 0, a3, 0, v6)), v5 = a1, v6[0] != 0) )
    {
      *(uint32_t *)(a4 + 16) |= 1u;
      FT_Outline_Done_Internal(v5, a4);
      return v6[0];
    }
    else
    {
      *(uint16_t *)(a4 + 2) = a2;
      *(uint16_t *)a4 = a3;
      *(uint32_t *)(a4 + 16) |= 1u;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_New  (binary VA: 0x11b13a0)
// Original: FT_Outline_New
// ----------------------------------------------------------------------------
int FT_Outline_New(int *a1, unsigned int a2, int a3, int a4)
{
  int result;

  result = 33;
  if ( a1 != nullptr )
    return FT_Outline_New_Internal(*a1, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_New_Library  (binary VA: 0x11b13f0)
// Original: FT_New_Library
// ----------------------------------------------------------------------------
int FT_New_Library(int a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v6[4];

  v2 = 6;
  if ( a1 != 0 )
  {
    v3 = (uint32_t *)(ft_mem_alloc(a1, 192, v6));
    v2 = v6[0];
    v4 = v3;
    if ( v6[0] == 0 )
    {
      *v3 = a1;
      v3[42] = 0x4000;
      v3[41] = (uint32_t)(uintptr_t)(ft_mem_alloc(a1, 0x4000, v6));
      if ( v6[0] != 0 )
      {
        ft_mem_free(a1, (int)(uintptr_t)(v4));
        return v6[0];
      }
      else
      {
        v4[1] = 2;
        v4[2] = 5;
        v4[3] = 3;
        v4[47] = 1;
        *a2 = (uint32_t)(uintptr_t)(v4);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_CMap_New  (binary VA: 0x11b14d0)
// Original: FT_CMap_New
// ----------------------------------------------------------------------------
int FT_CMap_New(int *a1, int a2, uint32_t *a3, uint32_t *a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int (*v7)(uint32_t *, int);
  int v8;
  void (*v9)(uint32_t *);
  char *v10;
  bool v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v14)) > _g4_s1 ? (36u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v15)) > _g4_s2 ? (36u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v16)) > _g4_s3 ? (44u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v17[0] = 0;
  if ( a3 == nullptr || a1 == nullptr )
    return 6;
  result = 6;
  if ( *a3 != 0 )
  {
    v16 = *(uint32_t *)(*a3 + 100);
    v14 = *a3;
    v5 = (uint32_t *)(ft_mem_alloc(v16, *a1, v17));
    result = v17[0];
    v6 = v14;
    if ( v17[0] == 0 )
    {
      *v5 = *a3;
      v5[1] = a3[1];
      v5[2] = a3[2];
      v5[3] = (uint32_t)(uintptr_t)(a1);
      v7 = (int (*)(uint32_t *, int))a1[1];
      if ( v7 != nullptr && (v17[0] = v7(v5, a2), v6 = v14, v17[0] != 0)
        || (v15 = v6,
            v10 = ft_mem_realloc(v16, 4, *(uint32_t *)(v6 + 36), *(uint32_t *)(v6 + 36) + 1, *(uint32_t *)(v6 + 40), v17),
            v11 = v17[0] == 0,
            *(uint32_t *)(v15 + 40) = (uint32_t)(uintptr_t)(v10),
            !v11) )
      {
        v8 = *(uint32_t *)(*v5 + 100);
        v9 = *(void (**)(uint32_t *))(v5[3] + 8);
        if ( v9 != nullptr )
          v9(v5);
        v13 = (int)(uintptr_t)(v5);
        v5 = nullptr;
        ft_mem_free(v8, v13);
        result = v17[0];
      }
      else
      {
        v12 = *(uint32_t *)(v15 + 36);
        *(uint32_t *)&v10[4 * v12] = (uint32_t)(uintptr_t)(v5);
        *(uint32_t *)(v15 + 36) = v12 + 1;
        result = v17[0];
      }
    }
    if ( a4 != nullptr )
      *a4 = (uint32_t)(uintptr_t)(v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_glyphslot_alloc_bitmap  (binary VA: 0x11b1710)
// Original: ft_glyphslot_alloc_bitmap
// ----------------------------------------------------------------------------
int ft_glyphslot_alloc_bitmap(uint32_t *a1, size_t a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = *(uint32_t *)(a1[1] + 100);
  v3 = a1[39];
  v4 = *(uint32_t *)(v3 + 4);
  if ( (v4 & 1) != 0 )
  {
    ft_mem_free(*(uint32_t *)(a1[1] + 100), a1[22]);
    a1[22] = 0;
  }
  else
  {
    *(uint32_t *)(v3 + 4) = v4 | 1;
  }
  a1[22] = (uint32_t)(uintptr_t)(ft_mem_alloc(v2, a2, &v6));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ft_glyphslot_free_bitmap  (binary VA: 0x11b17a0)
// Original: ft_glyphslot_free_bitmap
// ----------------------------------------------------------------------------
int ft_glyphslot_free_bitmap(uint32_t *a1)
{
  int result;

  result = a1[39];
  if ( result != 0 && (*(uint8_t *)(result + 4) & 1) != 0 )
  {
    ft_mem_free(*(uint32_t *)(a1[1] + 100), a1[22]);
    result = a1[39];
    a1[22] = 0;
    *(uint32_t *)(result + 4) &= ~1u;
  }
  else
  {
    a1[22] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_glyphslot_set_bitmap  (binary VA: 0x11b1820)
// Original: ft_glyphslot_set_bitmap
// ----------------------------------------------------------------------------
int ft_glyphslot_set_bitmap(uint32_t *a1, int a2)
{
  ft_glyphslot_free_bitmap(a1);
  a1[22] = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Free  (binary VA: 0x11b1860)
// Original: FT_Stream_Free
// ----------------------------------------------------------------------------
int FT_Stream_Free(int a1, int a2)
{
  int v2;
  int result;

  if ( a1 != 0 )
  {
    v2 = *(uint32_t *)(a1 + 28);
    FT_Stream_Close(a1);
    result = a2;
    if ( a2 == 0 )
      return ft_mem_free(v2, a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_New  (binary VA: 0x11b18c0)
// Original: FT_Stream_New
// ----------------------------------------------------------------------------
char FT_Stream_New(int *a1, int *a2, uint32_t *a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  LOBYTE(v3) = 33;
  *a3 = 0;
  if ( a1 != nullptr )
  {
    LOBYTE(v3) = 6;
    if ( a2 != nullptr )
    {
      v11 = *a1;
      v4 = (uint32_t *)(ft_mem_alloc(*a1, 40, v12));
      LOBYTE(v3) = v12[0];
      v5 = v11;
      v6 = a3;
      if ( v12[0] == 0 )
      {
        v4[7] = v11;
        v7 = *a2;
        if ( (*a2 & 1) != 0 )
        {
          FT_Stream_OpenMemory(v4, a2[1], a2[2]);
          v3 = v12[0];
          v5 = v11;
          v6 = a3;
        }
        else if ( (v7 & 4) != 0 )
        {
          v3 = FT_Stream_Open((int)(uintptr_t)(v4), (char *)a2[3]);
          v8 = a2[3];
          v12[0] = v3;
          v4[4] = v8;
          v5 = v11;
          v6 = a3;
        }
        else
        {
          if ( (v7 & 2) == 0 || a2[4] == 0 )
          {
            v12[0] = 6;
LABEL_14:
            v10 = v6;
            ft_mem_free(v5, (int)(uintptr_t)(v4));
            LOBYTE(v3) = v12[0];
            *v10 = 0;
            return v3;
          }
          ft_mem_free(v11, (int)(uintptr_t)(v4));
          v4 = (uint32_t *)a2[4];
          v3 = v12[0];
          v5 = v11;
          v6 = a3;
        }
        if ( v3 == 0 )
        {
          v4[7] = v5;
          *v6 = (uint32_t)(uintptr_t)(v4);
          return v3;
        }
        goto LABEL_14;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: FT_Attach_Stream  (binary VA: 0x11b1a20)
// Original: FT_Attach_Stream
// ----------------------------------------------------------------------------
char FT_Attach_Stream(int a1, int *a2)
{
  int v2;
  int v3;
  int (*v4)(int, int);
  char v5;
  bool v6;
  typedef char _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  LOBYTE(v2) = 35;
  if ( a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 96);
    LOBYTE(v2) = 34;
    if ( v3 != 0 )
    {
      LOBYTE(v2) = FT_Stream_New(*(int **)(v3 + 4), a2, v9);
      if ( v2 == 0 )
      {
        v4 = *(int (**)(int, int))(*(uint32_t *)(v3 + 12) + 80);
        v5 = 7;
        if ( v4 != nullptr )
          v5 = v4(a1, v9[0]);
        v6 = false;
        if ( a2[4] != 0 )
          v6 = (*(uint8_t *)a2 & 2) != 0;
        v8 = v5;
        FT_Stream_Free(v9[0], v6);
        LOBYTE(v2) = v8;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Attach_File  (binary VA: 0x11b1ae0)
// Original: FT_Attach_File
// ----------------------------------------------------------------------------
char FT_Attach_File(int a1, int a2)
{
  char result;
  int v3[11];

  result = 6;
  if ( a2 != 0 )
  {
    v3[4] = 0;
    v3[0] = 4;
    v3[3] = a2;
    return FT_Attach_Stream(a1, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_Reset  (binary VA: 0x11b2400)
// Original: FT_GlyphLoader_Reset
// ----------------------------------------------------------------------------
int FT_GlyphLoader_Reset(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = *a1;
  ft_mem_free(*a1, a1[6]);
  v2 = a1[7];
  a1[6] = 0;
  ft_mem_free(v1, v2);
  v3 = a1[8];
  a1[7] = 0;
  ft_mem_free(v1, v3);
  v4 = a1[10];
  a1[8] = 0;
  ft_mem_free(v1, v4);
  v5 = a1[13];
  a1[10] = 0;
  ft_mem_free(v1, v5);
  a1[13] = 0;
  a1[11] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return FT_GlyphLoader_Rewind((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_CheckPoints  (binary VA: 0x11b24d0)
// Original: FT_GlyphLoader_CheckPoints
// ----------------------------------------------------------------------------
int FT_GlyphLoader_CheckPoints(int a1, int a2, int a3)
{
  unsigned int v3;
  unsigned int v4;
  char v5;
  int result;
  unsigned int v7;
  char *v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  char *v21;
  int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);

  v26[0] = 0;
  v24 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(a1 + 4);
  v4 = a2 + *(int16_t *)(a1 + 58) + *(int16_t *)(a1 + 22);
  v5 = 0;
  if ( v4 > v3 )
  {
    result = 10;
    v7 = (v4 + 7) & 0xFFFFFFF8;
    if ( v7 > 0x7FFF )
      return result;
    v23 = *(uint32_t *)(a1 + 4);
    *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(ft_mem_realloc(v24, 8, v3, v7, *(uint32_t *)(a1 + 24), v26));
    if ( v26[0] != 0 )
      goto LABEL_15;
    v8 = ft_mem_realloc(v24, 1, v23, v7, *(uint32_t *)(a1 + 28), v26);
    v9 = v26[0];
    *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v8);
    if ( v9 != 0 )
      goto LABEL_15;
    if ( *(uint8_t *)(a1 + 16) != 0 )
    {
      v21 = ft_mem_realloc(v24, 8, 2 * v23, 2 * v7, *(uint32_t *)(a1 + 40), v26);
      v22 = v26[0];
      *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v21);
      if ( v22 != 0 )
        goto LABEL_15;
      memmove(&v21[8 * v7], &v21[8 * v23], 8 * v23);
      *(uint32_t *)(a1 + 44) = *(uint32_t *)(a1 + 40) + 8 * v7;
    }
    *(uint32_t *)(a1 + 4) = v7;
    v5 = 1;
  }
  v10 = *(int16_t *)(a1 + 20);
  v11 = *(uint32_t *)(a1 + 8);
  v12 = a3 + v10 + *(int16_t *)(a1 + 56);
  if ( v11 < v12 )
  {
    result = 10;
    v13 = (v12 + 3) & 0xFFFFFFFC;
    if ( v13 > 0x7FFF )
      return result;
    v14 = ft_mem_realloc(v24, 2, v11, v13, *(uint32_t *)(a1 + 32), v26);
    v15 = v26[0];
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v14);
    if ( v15 == 0 )
    {
      *(uint32_t *)(a1 + 8) = v13;
      v10 = *(int16_t *)(a1 + 20);
      goto LABEL_17;
    }
LABEL_15:
    FT_GlyphLoader_Reset((int *)a1);
    return v26[0];
  }
  if ( v5 == 0 )
    goto LABEL_12;
  v14 = *(char **)(a1 + 32);
LABEL_17:
  v25 = *(int16_t *)(a1 + 22);
  v16 = 8 * v25;
  v17 = 8 * v25 + *(uint32_t *)(a1 + 24);
  *(uint32_t *)(a1 + 68) = (uint32_t)(uintptr_t)(&v14[2 * v10]);
  *(uint32_t *)(a1 + 60) = v17;
  v18 = *(uint8_t *)(a1 + 16) == 0;
  *(uint32_t *)(a1 + 64) = *(uint32_t *)(a1 + 28) + v25;
  if ( !v18 )
  {
    v19 = v16 + *(uint32_t *)(a1 + 40);
    v20 = *(uint32_t *)(a1 + 44) + v16;
    *(uint32_t *)(a1 + 76) = v19;
    *(uint32_t *)(a1 + 80) = v20;
  }
LABEL_12:
  result = 0;
  if ( v26[0] != 0 )
    goto LABEL_15;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_CopyPoints  (binary VA: 0x11b2740)
// Original: FT_GlyphLoader_CopyPoints
// ----------------------------------------------------------------------------
int FT_GlyphLoader_CopyPoints(int a1, int a2)
{
  int v2;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  size_t v11;
  int v12;
  int v13;
  char v14; // di
  int n;
  size_t v16;
  int16_t v17;
  int16_t v18;

  v17 = *(uint16_t *)(a2 + 22);
  v18 = *(uint16_t *)(a2 + 20);
  v2 = FT_GlyphLoader_CheckPoints(a1, v17, v18);
  if ( v2 == 0 )
  {
    n = 8 * v17;
    memcpy(*(void **)(a1 + 24), *(const void **)(a2 + 24), n);
    memcpy(*(void **)(a1 + 28), *(const void **)(a2 + 28), v17);
    v16 = 2 * v18;
    memcpy(*(void **)(a1 + 32), *(const void **)(a2 + 32), v16);
    v2 = 0;
    v4 = n;
    if ( *(uint8_t *)(a1 + 16) != 0 )
    {
      if ( *(uint8_t *)(a2 + 16) != 0 )
      {
        memcpy(*(void **)(a1 + 40), *(const void **)(a2 + 40), n);
        memcpy(*(void **)(a1 + 44), *(const void **)(a2 + 44), n);
        v12 = *(uint32_t *)(a1 + 28) + v17;
        *(uint16_t *)(a1 + 22) = v17;
        *(uint16_t *)(a1 + 20) = v18;
        v13 = *(uint32_t *)(a1 + 24);
        v4 = 8 * v17;
        *(uint32_t *)(a1 + 64) = v12;
        *(uint32_t *)(a1 + 60) = n + v13;
        v14 = *(uint8_t *)(a1 + 16);
        *(uint32_t *)(a1 + 68) = *(uint32_t *)(a1 + 32) + v16;
        v2 = 0;
        if ( v14 == 0 )
          return v2;
      }
      else
      {
        v5 = *(uint32_t *)(a1 + 28) + v17;
        *(uint16_t *)(a1 + 22) = v17;
        *(uint16_t *)(a1 + 20) = v18;
        v6 = n + *(uint32_t *)(a1 + 24);
        *(uint32_t *)(a1 + 64) = v5;
        *(uint32_t *)(a1 + 60) = v6;
        *(uint32_t *)(a1 + 68) = *(uint32_t *)(a1 + 32) + v16;
      }
      v7 = v4 + *(uint32_t *)(a1 + 40);
      v8 = *(uint32_t *)(a1 + 44) + v4;
      *(uint32_t *)(a1 + 76) = v7;
      *(uint32_t *)(a1 + 80) = v8;
    }
    else
    {
      v9 = *(uint32_t *)(a1 + 24) + n;
      *(uint16_t *)(a1 + 22) = v17;
      *(uint16_t *)(a1 + 20) = v18;
      v10 = *(uint32_t *)(a1 + 28) + v17;
      v11 = *(uint32_t *)(a1 + 32) + v16;
      *(uint32_t *)(a1 + 60) = v9;
      *(uint32_t *)(a1 + 64) = v10;
      *(uint32_t *)(a1 + 68) = v11;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphLoader_Done  (binary VA: 0x11b2910)
// Original: FT_GlyphLoader_Done
// ----------------------------------------------------------------------------
int FT_GlyphLoader_Done(int *a1)
{
  int v1;
  int result;

  if ( a1 != nullptr )
  {
    v1 = *a1;
    FT_GlyphLoader_Reset(a1);
    return ft_mem_free(v1, (int)(uintptr_t)(a1));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_New_GlyphSlot  (binary VA: 0x11b2960)
// Original: FT_New_GlyphSlot
// ----------------------------------------------------------------------------
int FT_New_GlyphSlot(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int (*v9)(uint32_t *);
  int v10;
  int v11;
  int v12;
  void (*v13)(uint32_t *);
  int v14;
  int **v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t **_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[3];
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v20)) > _g4_s4 ? (8u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v21)) > _g4_s5 ? (12u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v25)) > _g4_s9 ? (32u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);

  v2 = 6;
  if ( a1 == 0 )
    return v2;
  v3 = *(uint32_t *)(a1 + 96);
  if ( v3 == 0 )
    return v2;
  v24 = *(uint32_t *)(v3 + 8);
  v4 = (uint32_t *)(ft_mem_alloc(v24, *(uint32_t *)(*(uint32_t *)(v3 + 12) + 44), v25));
  v2 = v25[0];
  if ( v25[0] != 0 )
  {
    if ( a2 != nullptr )
      *a2 = 0;
    return v2;
  }
  v4[1] = a1;
  v6 = *(uint32_t **)(a1 + 96);
  v26 = 0;
  v22 = v6[3];
  v23 = v6[2];
  *v4 = v6[1];
  v16 = v4;
  v21 = (uint32_t **)v6;
  v7 = (uint32_t *)(ft_mem_alloc(v23, 40, &v26));
  v2 = v26;
  v8 = v16;
  if ( v26 != 0 )
    goto LABEL_15;
  v16[39] = (uint32_t)(uintptr_t)(v7);
  if ( (**v21 & 0x200) == 0 )
  {
    v10 = FT_GlyphLoader_New(v23, v7);
    v26 = v10;
    v8 = v16;
    if ( v10 != 0 )
    {
      v2 = v10;
LABEL_15:
      v25[0] = v2;
LABEL_16:
      v11 = *(uint32_t *)(v8[1] + 96);
      v12 = *(uint32_t *)(v11 + 8);
      v13 = *(void (**)(uint32_t *))(*(uint32_t *)(v11 + 12) + 68);
      if ( v13 != nullptr )
      {
        v18 = v8;
        v13(v8);
        v8 = v18;
      }
      v19 = v8;
      ft_glyphslot_free_bitmap(v8);
      v14 = (int)(uintptr_t)(v19);
      v15 = (int **)v19[39];
      if ( v15 != nullptr )
      {
        if ( (**(uint32_t **)v11 & 0x200) == 0 )
        {
          FT_GlyphLoader_Done(*v15);
          v14 = (int)(uintptr_t)(v19);
          *(uint32_t *)v19[39] = 0;
          v15 = (int **)v19[39];
        }
        v20 = v14;
        ft_mem_free(v12, (int)(uintptr_t)(v15));
        v14 = v20;
        *(uint32_t *)(v20 + 156) = 0;
      }
      ft_mem_free(v24, v14);
      return v25[0];
    }
  }
  v9 = *(int (**)(uint32_t *))(v22 + 64);
  if ( v9 != nullptr )
  {
    v17 = v8;
    v26 = v9(v8);
    v25[0] = v26;
    v8 = v17;
    if ( v26 != 0 )
      goto LABEL_16;
  }
  v8[2] = *(uint32_t *)(a1 + 84);
  *(uint32_t *)(a1 + 84) = (uint32_t)(uintptr_t)(v8);
  if ( a2 != nullptr )
    *a2 = (uint32_t)(uintptr_t)(v8);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_CMap_Done  (binary VA: 0x11b2b60)
// Original: FT_CMap_Done
// ----------------------------------------------------------------------------
void FT_CMap_Done(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  void (*v13)(uint32_t *);
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v1 = a1;
  if ( a1 != nullptr )
  {
    v2 = (uint32_t *)*a1;
    v3 = *(uint32_t *)(*a1 + 36);
    if ( v3 > 0 )
    {
      v4 = (uint32_t *)v2[10];
      v5 = 0;
      if ( (uint32_t *)*v4 != a1 )
      {
        do
        {
          if ( ++v5 == v3 )
            return;
        }
        while ( (uint32_t *)v4[v5] != a1 );
      }
      v14 = v4[v3 - 1];
      v6 = ft_mem_realloc(*(uint32_t *)(*a1 + 100), 4, v3, v3 - 1, (int)(uintptr_t)(v4), v15);
      v7 = v15[0];
      v2[10] = (uint32_t)(uintptr_t)(v6);
      if ( v7 == 0 )
      {
        v8 = v5 + 1;
        v9 = v2[9];
        if ( v5 + 1 >= v9 )
          goto LABEL_16;
        v10 = 4 * v5;
        while ( 1 )
        {
          if ( v9 - 1 == v8 )
          {
            ++v8;
            *(uint32_t *)&v6[4 * v9 - 8] = v14;
            v9 = v2[9];
            v10 += 4;
            if ( v9 <= v8 )
            {
LABEL_15:
              v1 = a1;
LABEL_16:
              v11 = v2[23] == (uint32_t)(uintptr_t)(v1);
              v2[9] = v9 - 1;
              if ( v11 )
                v2[23] = 0;
              v12 = *(uint32_t *)(*v1 + 100);
              v13 = *(void (**)(uint32_t *))(v1[3] + 8);
              if ( v13 != nullptr )
                v13(v1);
              ft_mem_free(v12, (int)(uintptr_t)(v1));
              return;
            }
          }
          else
          {
            ++v8;
            *(uint32_t *)&v6[v10] = *(uint32_t *)&v6[v10 + 4];
            v9 = v2[9];
            v10 += 4;
            if ( v9 <= v8 )
              goto LABEL_15;
          }
          v6 = (char *)v2[10];
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: FT_Done_GlyphSlot  (binary VA: 0x11b2c80)
// Original: FT_Done_GlyphSlot
// ----------------------------------------------------------------------------
void FT_Done_GlyphSlot(uint32_t *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  void (*v5)(uint32_t *);
  int v6;
  void (*v7)(uint32_t *);
  int **v8;
  int v9;

  if ( a1 != nullptr )
  {
    v1 = a1[1];
    v2 = *(uint32_t *)(*(uint32_t *)(v1 + 96) + 8);
    v3 = *(uint32_t **)(v1 + 84);
    if ( v3 != nullptr )
    {
      if ( a1 == v3 )
      {
        *(uint32_t *)(v1 + 84) = a1[2];
LABEL_10:
        v5 = (void (*)(uint32_t *))a1[5];
        if ( v5 != nullptr )
          v5(a1);
        v6 = *(uint32_t *)(a1[1] + 96);
        v9 = *(uint32_t *)(v6 + 8);
        v7 = *(void (**)(uint32_t *))(*(uint32_t *)(v6 + 12) + 68);
        if ( v7 != nullptr )
          v7(a1);
        ft_glyphslot_free_bitmap(a1);
        v8 = (int **)a1[39];
        if ( v8 != nullptr )
        {
          if ( (**(uint32_t **)v6 & 0x200) == 0 )
          {
            FT_GlyphLoader_Done(*v8);
            *(uint32_t *)a1[39] = 0;
            v8 = (int **)a1[39];
          }
          ft_mem_free(v9, (int)(uintptr_t)(v8));
          a1[39] = 0;
        }
        ft_mem_free(v2, (int)(uintptr_t)(a1));
      }
      else
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[2];
          if ( v4 == nullptr )
            break;
          if ( a1 == v4 )
          {
            v3[2] = a1[2];
            goto LABEL_10;
          }
          v3 = (uint32_t *)v3[2];
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: ft_mem_dup  (binary VA: 0x11b2d80)
// Original: ft_mem_dup
// ----------------------------------------------------------------------------
void * ft_mem_dup(int a1, void *src, size_t n, uint32_t *a4)
{
  void *dest;
  int v5;
  uint32_t v7[4];

  dest = (void *)ft_mem_qalloc(a1, n, v7);
  v5 = v7[0];
  if ( src != nullptr && v7[0] == 0 )
  {
    memcpy(dest, src, n);
    v5 = v7[0];
  }
  *a4 = v5;
  return dest;
}

// ----------------------------------------------------------------------------
// Function: ft_mem_strdup  (binary VA: 0x11b2e10)
// Original: ft_mem_strdup
// ----------------------------------------------------------------------------
void * ft_mem_strdup(int a1, char *s, uint32_t *a3)
{
  size_t v3;

  v3 = 0;
  if ( s != nullptr )
    v3 = strlen(s) + 1;
  return ft_mem_dup(a1, s, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: ft_mem_strcpyn  (binary VA: 0x11b2e70)
// Original: ft_mem_strcpyn
// ----------------------------------------------------------------------------
bool ft_mem_strcpyn(uint8_t *a1, uint8_t *a2, unsigned int a3)
{
  unsigned int v3;

  v3 = a3;
  if ( a3 > 1 )
  {
    do
    {
      if ( *a2 == 0 )
        break;
      --v3;
      *a1++ = *a2++;
    }
    while ( v3 != 1 );
  }
  *a1 = 0;
  return *a2 != 0;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Find  (binary VA: 0x11b2ec0)
// Original: FT_List_Find
// ----------------------------------------------------------------------------
int FT_List_Find(int *a1, int a2)
{
  int result;

  result = *a1;
  if ( *a1 != 0 && *(uint32_t *)(result + 8) != a2 )
  {
    do
      result = *(uint32_t *)(result + 4);
    while ( result != 0 && *(uint32_t *)(result + 8) != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Add  (binary VA: 0x11b2f00)
// Original: FT_List_Add
// ----------------------------------------------------------------------------
uint32_t * FT_List_Add(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;

  result = a2;
  v3 = a1[1];
  a2[1] = 0;
  *a2 = v3;
  if ( v3 != 0 )
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(a2);
  else
    *a1 = (uint32_t)(uintptr_t)(a2);
  a1[1] = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_New_Size  (binary VA: 0x11b2f30)
// Original: FT_New_Size
// ----------------------------------------------------------------------------
char FT_New_Size(uint32_t *a1, uint32_t *a2)
{
  char result;
  int (*v3)(uint32_t *);
  int v4;
  typedef int _g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v9)) > _g4_s4 ? (32u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  result = 35;
  if ( a1 != nullptr )
  {
    result = 36;
    if ( a2 != nullptr )
    {
      result = 34;
      if ( a1[24] != 0 )
      {
        *a2 = 0;
        v8 = a1[25];
        v5 = *(uint32_t *)(a1[24] + 12);
        v7 = (uint32_t *)(ft_mem_alloc(v8, *(uint32_t *)(v5 + 40), v9));
        v6 = nullptr;
        if ( v9[0] != 0 )
          goto LABEL_5;
        v6 = (uint32_t *)(ft_mem_alloc(v8, 12, v9));
        if ( v9[0] != 0 )
          goto LABEL_5;
        *v7 = (uint32_t)(uintptr_t)(a1);
        v7[10] = 0;
        v3 = *(int (**)(uint32_t *))(v5 + 56);
        if ( v3 != nullptr )
        {
          v4 = v3(v7);
          v9[0] = v4;
        }
        else
        {
          v4 = v9[0];
        }
        if ( v4 != 0 || (*a2 = (uint32_t)(uintptr_t)(v7), v6[2] = (uint32_t)(uintptr_t)(v7), FT_List_Add(a1 + 27, v6), result = 0, v9[0] != 0) )
        {
LABEL_5:
          ft_mem_free(v8, (int)(uintptr_t)(v6));
          ft_mem_free(v8, (int)(uintptr_t)(v7));
          return v9[0];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Insert  (binary VA: 0x11b30a0)
// Original: FT_List_Insert
// ----------------------------------------------------------------------------
uint32_t * FT_List_Insert(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *v3;

  result = a2;
  v3 = *(uint32_t **)a1;
  *a2 = 0;
  a2[1] = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    *v3 = (uint32_t)(uintptr_t)(a2);
  else
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Remove  (binary VA: 0x11b30d0)
// Original: FT_List_Remove
// ----------------------------------------------------------------------------
int64_t FT_List_Remove(uint32_t *a1, int64_t *a2)
{
  int64_t result; // rax

  result = *a2;
  if ( *(uint32_t *)a2 != 0 )
    *(uint32_t *)(result + 4) = HIDWORD(result);
  else
    *a1 = HIDWORD(result);
  if ( HIDWORD(result) != 0 )
    *(uint32_t *)HIDWORD(result) = result;
  else
    a1[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Done_Size  (binary VA: 0x11b3110)
// Original: FT_Done_Size
// ----------------------------------------------------------------------------
char FT_Done_Size(uint32_t *a1)
{
  char result;
  uint32_t *v2;
  int v3;
  int64_t *v4;
  void (*v5)(uint32_t *);
  void (*v6)(uint32_t *);
  int v7;
  int v8;
  int v9;

  result = 36;
  if ( a1 != nullptr )
  {
    v2 = (uint32_t *)*a1;
    result = 35;
    if ( *a1 != 0 )
    {
      v3 = v2[24];
      result = 34;
      if ( v3 != 0 )
      {
        v9 = *(uint32_t *)(v3 + 8);
        v4 = (int64_t *)FT_List_Find(v2 + 27, (int)(uintptr_t)(a1));
        result = 36;
        if ( v4 != nullptr )
        {
          v8 = (int)(uintptr_t)(v4);
          FT_List_Remove(v2 + 27, v4);
          ft_mem_free(v9, v8);
          if ( (uint32_t *)v2[22] == a1 )
          {
            v7 = v2[27];
            v2[22] = 0;
            if ( v7 != 0 )
              v2[22] = *(uint32_t *)(v7 + 8);
          }
          v5 = (void (*)(uint32_t *))a1[2];
          if ( v5 != nullptr )
            v5(a1);
          v6 = *(void (**)(uint32_t *))(*(uint32_t *)(v3 + 12) + 60);
          if ( v6 != nullptr )
            v6(a1);
          ft_mem_free(v9, a1[10]);
          a1[10] = 0;
          ft_mem_free(v9, (int)(uintptr_t)(a1));
          return 0;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Up  (binary VA: 0x11b3220)
// Original: FT_List_Up
// ----------------------------------------------------------------------------
uint32_t * FT_List_Up(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;

  result = a2;
  v3 = *a2;
  v4 = (uint32_t *)a2[1];
  if ( *a2 != 0 )
  {
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4);
    if ( v4 != nullptr )
      *v4 = v3;
    else
      a1[1] = v3;
    *a2 = 0;
    a2[1] = *a1;
    *(uint32_t *)*a1 = (uint32_t)(uintptr_t)(a2);
    *a1 = (uint32_t)(uintptr_t)(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Set_Renderer  (binary VA: 0x11b3260)
// Original: FT_Set_Renderer
// ----------------------------------------------------------------------------
int FT_Set_Renderer(int a1, int a2, int a3, uint32_t *a4)
{
  int v5;
  int v6;
  uint32_t *v7;
  int (*v8)(int, uint32_t, uint32_t);
  int v9;

  v5 = a3;
  v6 = 33;
  if ( a1 != 0 )
  {
    LOWORD(v6) = 6;
    if ( a2 != 0 )
    {
      v7 = (uint32_t *)FT_List_Find((int *)(a1 + 148), a2);
      if ( v7 != nullptr )
      {
        FT_List_Up((uint32_t *)(a1 + 148), v7);
        if ( *(uint32_t *)(a2 + 16) == 1869968492 )
          *(uint32_t *)(a1 + 156) = a2;
        v6 = 0;
        if ( a3 != 0 )
        {
          v8 = *(int (**)(int, uint32_t, uint32_t))(*(uint32_t *)(a2 + 12) + 52);
          do
          {
            v9 = v8(a2, *a4, a4[1]);
            if ( v9 != 0 )
              break;
            a4 += 2;
            --v5;
          }
          while ( v5 != 0 );
          return v9;
        }
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Render  (binary VA: 0x11b3340)
// Original: FT_Outline_Render
// ----------------------------------------------------------------------------
int FT_Outline_Render(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6;
  typedef char _g4_t_i;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_i)) > _g4_s0 ? (15u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 15u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v3 = 33;
  if ( a1 == 0 )
    return v3;
  if ( a3 == 0 || a2 == 0 )
    return 6;
  LOWORD(v3) = 19;
  v5 = *(uint32_t *)(a1 + 156);
  v8 = *(uint32_t *)(a1 + 148);
  *(uint32_t *)(a3 + 4) = a2;
  if ( v5 == 0 )
    return v3;
  for ( i = 0; ; i = 1 )
  {
    v6 = (*(int (**)(uint32_t, int))(v5 + 56))(*(uint32_t *)(v5 + 52), a3);
    v3 = v6;
    if ( v6 == 0 )
      break;
    if ( (uint8_t)v6 != 19 )
      return v3;
    v5 = FT_Lookup_Renderer(a1, 1869968492, (int)(uintptr_t)(&v8));
    if ( v5 == 0 )
      return v3;
  }
  if ( i == 0 )
    return v3;
  FT_Set_Renderer(a1, v5, 0, nullptr);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Outline_Get_Bitmap  (binary VA: 0x11b3430)
// Original: FT_Outline_Get_Bitmap
// ----------------------------------------------------------------------------
int FT_Outline_Get_Bitmap(int a1, int a2, int a3)
{
  int result;
  char v4;
  uint32_t v5[12];

  result = 6;
  if ( a3 != 0 )
  {
    v4 = *(uint8_t *)(a3 + 18);
    v5[0] = a3;
    v5[2] = 0;
    if ( v4 == 5 || v4 == 2 || v4 == 6 )
      v5[2] = 1;
    return FT_Outline_Render(a1, a2, (int)(uintptr_t)(v5));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Render_Glyph_Internal  (binary VA: 0x11b34a0)
// Original: FT_Render_Glyph_Internal
// ----------------------------------------------------------------------------
int FT_Render_Glyph_Internal(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  typedef char _g4_t_i;
  typedef uint32_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_i)) > _g4_s0 ? (15u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v3 = 0;
  v4 = *(uint32_t *)(a2 + 72);
  if ( v4 != 1651078259 )
  {
    v9[0] = 0;
    if ( v4 == 1869968492 )
    {
      v5 = *(uint32_t *)(a1 + 156);
      v9[0] = *(uint32_t *)(a1 + 148);
    }
    else
    {
      v5 = FT_Lookup_Renderer(a1, v4, (int)(uintptr_t)(v9));
    }
    v3 = 7;
    if ( v5 != 0 )
    {
      for ( i = 0; ; i = 1 )
      {
        v6 = (*(int (**)(int, int, int, uint32_t))(v5 + 60))(v5, a2, a3, 0);
        v3 = v6;
        if ( v6 == 0 )
          break;
        if ( (uint8_t)v6 != 19 )
          return v3;
        v5 = FT_Lookup_Renderer(a1, *(uint32_t *)(a2 + 72), (int)(uintptr_t)(v9));
        if ( v5 == 0 )
          return v3;
      }
      if ( i != 0 )
        FT_Set_Renderer(a1, v5, 0, nullptr);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: FT_Render_Glyph  (binary VA: 0x11b35a0)
// Original: FT_Render_Glyph
// ----------------------------------------------------------------------------
int FT_Render_Glyph(int a1, int a2)
{
  int result;
  int v3;

  result = 6;
  if ( a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 4);
    if ( v3 != 0 )
      return FT_Render_Glyph_Internal(*(uint32_t *)(*(uint32_t *)(v3 + 96) + 4), a1, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Load_Glyph  (binary VA: 0x11b35f0)
// Original: FT_Load_Glyph
// ----------------------------------------------------------------------------
int FT_Load_Glyph(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint16_t *v5;
  int v6;
  uint16_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int16_t *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int *v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;

  v3 = 35;
  if ( a1 == 0 )
    return v3;
  if ( *(uint32_t *)(a1 + 88) == 0 )
    return v3;
  v4 = *(uint32_t *)(a1 + 84);
  if ( v4 == 0 )
    return v3;
  v5 = (uint16_t *)(v4 + 24);
  ft_glyphslot_free_bitmap((uint32_t *)v4);
  v36 = 32;
  v6 = a3;
  if ( ((v4 + 24) & 1) != 0 )
  {
    *(uint8_t *)(v4 + 24) = 0;
    v5 = (uint16_t *)(v4 + 25);
    v36 = 31;
  }
  if ( ((uint8_t)(uintptr_t)(v5) & 2) != 0 )
  {
    *v5++ = 0;
    v36 -= 2;
  }
  memset(v5, 0, 4 * (v36 >> 2));
  v7 = &v5[2 * (v36 >> 2)];
  if ( (v36 & 2) == 0 )
  {
    if ( (v36 & 1) == 0 )
      goto LABEL_10;
    goto LABEL_41;
  }
  *v7++ = 0;
  if ( (v36 & 1) != 0 )
LABEL_41:
    *(uint8_t *)v7 = 0;
LABEL_10:
  *(uint32_t *)(v4 + 80) = 0;
  *(uint32_t *)(v4 + 76) = 0;
  *(uint32_t *)(v4 + 84) = 0;
  *(uint8_t *)(v4 + 94) = 0;
  *(uint32_t *)(v4 + 100) = 0;
  *(uint32_t *)(v4 + 104) = 0;
  *(uint32_t *)(v4 + 128) = 0;
  *(uint32_t *)(v4 + 132) = 0;
  *(uint32_t *)(v4 + 136) = 0;
  *(uint32_t *)(v4 + 140) = 0;
  *(uint32_t *)(v4 + 152) = 0;
  *(uint32_t *)(v4 + 72) = 0;
  *(uint32_t *)(v4 + 56) = 0;
  *(uint32_t *)(v4 + 60) = 0;
  *(uint32_t *)(v4 + 144) = 0;
  *(uint32_t *)(v4 + 148) = 0;
  v26 = (int16_t *)(v4 + 108);
  *(uint32_t *)(v4 + 108) = 0;
  *(uint32_t *)(v4 + 112) = 0;
  *(uint32_t *)(v4 + 116) = 0;
  *(uint32_t *)(v4 + 120) = 0;
  *(uint32_t *)(v4 + 124) = 0;
  v8 = *(uint32_t *)(a1 + 96);
  v9 = *(uint32_t *)(*(uint32_t *)(v8 + 4) + 160);
  if ( (a3 & 0x400) != 0 )
    v6 = a3 | 0x801;
  if ( (v6 & 1) != 0 )
    v6 = v6 & 0xFFFFFFF1 | 0xA;
  if ( v9 == 0 )
    goto LABEL_17;
  if ( (v6 & 0x8002) != 0 )
    goto LABEL_17;
  if ( (**(uint32_t **)v8 & 0x300) != 0x100 )
    goto LABEL_17;
  v44 = *(uint32_t *)(a1 + 8);
  if ( (v44 & 0x2000) != 0 )
    goto LABEL_17;
  v47 = v6 & 0x800;
  if ( (v6 & 0x800) == 0 )
  {
    v17 = *(uint32_t **)(a1 + 128);
    if ( v17[2] != 0 )
    {
      if ( *v17 == 0 )
        goto LABEL_49;
    }
    else if ( *v17 != 0 )
    {
      goto LABEL_49;
    }
LABEL_17:
    v27 = v6;
    v3 = (*(int (**)(int, uint32_t, int, int))(*(uint32_t *)(v8 + 12) + 72))(v4, *(uint32_t *)(a1 + 88), a2, v6);
    v6 = v27;
    if ( v3 != 0 )
      return v3;
    if ( *(uint32_t *)(v4 + 72) == 1869968492 )
    {
      LOBYTE(v19) = FT_Outline_Check(v26);
      v3 = v19;
      v6 = v27;
      if ( v19 != 0 )
        return v3;
      if ( (v27 & 2) == 0 )
      {
        if ( (v27 & 0x10) != 0 )
        {
          v20 = (*(uint32_t *)(v4 + 28) + *(uint32_t *)(v4 + 48) + 63) & 0xFFFFFFC0;
          *(uint32_t *)(v4 + 36) = (*(uint32_t *)(v4 + 36) + 63) & 0xFFFFFFC0;
          v42 = v20;
          v21 = *(uint32_t *)(v4 + 24) + *(uint32_t *)(v4 + 44) + 63;
          v38 = *(uint32_t *)(v4 + 44) & 0xFFFFFFC0;
          *(uint32_t *)(v4 + 44) = v38;
          v22 = *(uint32_t *)(v4 + 48);
          *(uint32_t *)(v4 + 24) = (v21 & 0xFFFFFFC0) - v38;
          v22 &= 0xFFFFFFC0;
          v23 = v42 - v22;
          *(uint32_t *)(v4 + 32) &= 0xFFFFFFC0;
          *(uint32_t *)(v4 + 48) = v22;
        }
        else
        {
          v39 = (*(uint32_t *)(v4 + 36) - *(uint32_t *)(v4 + 28)) & 0xFFFFFFC0;
          v24 = *(uint32_t *)(v4 + 24) + *(uint32_t *)(v4 + 32);
          v46 = *(uint32_t *)(v4 + 32) & 0xFFFFFFC0;
          *(uint32_t *)(v4 + 32) = v46;
          v25 = (*(uint32_t *)(v4 + 36) + 63) & 0xFFFFFFC0;
          *(uint32_t *)(v4 + 24) = ((v24 + 63) & 0xFFFFFFC0) - v46;
          v23 = v25 - v39;
          *(uint32_t *)(v4 + 44) &= 0xFFFFFFC0;
          *(uint32_t *)(v4 + 48) &= 0xFFFFFFC0;
          *(uint32_t *)(v4 + 36) = v25;
        }
        *(uint32_t *)(v4 + 28) = v23;
        *(uint32_t *)(v4 + 40) = (*(uint32_t *)(v4 + 40) + 32) & 0xFFFFFFC0;
        *(uint32_t *)(v4 + 52) = (*(uint32_t *)(v4 + 52) + 32) & 0xFFFFFFC0;
      }
    }
    v47 = v6 & 0x800;
    goto LABEL_20;
  }
LABEL_49:
  if ( (v6 & 0x20) == 0
    && (**(uint32_t **)v8 & 0x400) != 0
    && ((v6 >> 16) & 0xF) != 1
    && *(uint8_t *)(*(uint32_t *)(a1 + 128) + 52) == 0
    && ((v44 & 8) == 0
     || *(uint32_t *)(a1 + 696) == 0
     || *(uint16_t *)(a1 + 286) != 0
     || *(uint32_t *)(a1 + 628) != 0
     || *(uint32_t *)(a1 + 636) != 0) )
  {
    goto LABEL_17;
  }
  if ( (v44 & 2) == 0
    || (v6 & 8) != 0
    || (v33 = v6,
        v35 = *(uint32_t *)(*(uint32_t *)(v8 + 4) + 160),
        v3 = (*(int (**)(int, uint32_t, int, int))(*(uint32_t *)(v8 + 12) + 72))(
               v4,
               *(uint32_t *)(a1 + 88),
               a2,
               v6 | 0x4000),
        v6 = v33,
        v9 = v35,
        v3 != 0)
    || *(uint32_t *)(v4 + 72) != 1651078259 )
  {
    v43 = *(uint32_t *)(a1 + 128);
    v45 = *(uint32_t *)(v43 + 24);
    *(uint32_t *)(v43 + 24) = 0;
    v32 = v6;
    v3 = (*(int (**)(int, int, uint32_t, int, int))(*(uint32_t *)(*(uint32_t *)v9 + 20) + 12))(
           v9,
           v4,
           *(uint32_t *)(a1 + 88),
           a2,
           v6);
    *(uint32_t *)(v43 + 24) = v45;
    v6 = v32;
  }
LABEL_20:
  if ( (v6 & 0x10) != 0 )
  {
    v10 = *(uint32_t *)(v4 + 52);
    *(uint32_t *)(v4 + 64) = 0;
    *(uint32_t *)(v4 + 68) = v10;
  }
  else
  {
    v16 = *(uint32_t *)(v4 + 40);
    *(uint32_t *)(v4 + 68) = 0;
    *(uint32_t *)(v4 + 64) = v16;
  }
  if ( (v6 & 0x2000) == 0 && (*(uint8_t *)(a1 + 8) & 1) != 0 )
  {
    v41 = *(uint32_t *)(a1 + 88);
    v31 = v6;
    *(uint32_t *)(v4 + 56) = FT_MulDiv(*(uint32_t *)(v4 + 56), *(uint32_t *)(v41 + 16), 64);
    *(uint32_t *)(v4 + 60) = FT_MulDiv(*(uint32_t *)(v4 + 60), *(uint32_t *)(v41 + 20), 64);
    v6 = v31;
  }
  if ( v47 == 0 )
  {
    v40 = *(int **)(a1 + 128);
    if ( v40[6] != 0 )
    {
      v37 = *(uint32_t *)(v4 + 72);
      v11 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v4 + 4) + 96) + 4);
      v12 = *(uint32_t *)(v11 + 156);
      if ( v12 != 0 && v37 == *(uint32_t *)(v12 + 16)
        || (v28 = v6, v12 = FT_Lookup_Renderer(v11, v37, 0), v6 = v28, v12 != 0) )
      {
        v29 = v6;
        v3 = (*(int (**)(int, int, int *, int *))(*(uint32_t *)(v12 + 12) + 44))(v12, v4, v40, v40 + 4);
        v6 = v29;
      }
      else if ( *(uint32_t *)(v4 + 72) == 1869968492 )
      {
        v18 = v40[6];
        if ( (v18 & 1) != 0 )
        {
          FT_Outline_Transform((int)(uintptr_t)(v26), v40);
          v6 = v28;
          v18 = v40[6];
        }
        if ( (v18 & 2) != 0 )
        {
          v34 = v6;
          FT_Outline_Translate((int)(uintptr_t)(v26), v40[4], v40[5]);
          v6 = v34;
        }
      }
      v30 = v6;
      FT_Vector_Transform((int *)(v4 + 64), v40);
      v6 = v30;
    }
  }
  if ( v3 == 0 )
  {
    v13 = *(uint32_t *)(v4 + 72);
    if ( v13 != 1651078259 && v13 != 1668246896 && (v6 & 4) != 0 )
    {
      v14 = (v6 >> 16) & 0xF;
      if ( v14 == 0 )
      {
        v14 = 2;
        if ( (v6 & 0x1000) == 0 )
          v14 = 0;
      }
      return FT_Render_Glyph(v4, v14);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: FT_Load_Char  (binary VA: 0x11b3cb0)
// Original: FT_Load_Char
// ----------------------------------------------------------------------------
int FT_Load_Char(int a1, int a2, int a3)
{
  int result;
  int Char_Index;

  result = 35;
  if ( a1 != 0 )
  {
    Char_Index = a2;
    if ( *(uint32_t *)(a1 + 92) != 0 )
      Char_Index = FT_Get_Char_Index(a1, a2);
    return FT_Load_Glyph(a1, Char_Index, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Advances  (binary VA: 0x11b3d10)
// Original: FT_Get_Advances
// ----------------------------------------------------------------------------
int FT_Get_Advances(uint32_t *a1, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5;
  int v6;
  unsigned int v7;
  int (*v9)(uint32_t *, unsigned int, int, int, int);
  int v10;
  unsigned int v11;
  int v12;
  int Glyph;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v5 = a2;
  v6 = 35;
  if ( a1 != nullptr )
  {
    v7 = a1[4];
    if ( __CFADD__(a2, a3) || a2 >= v7 )
      return 16;
    LOWORD(v6) = 16;
    if ( v7 >= a2 + a3 )
    {
      LOWORD(v6) = 0;
      if ( a3 != 0 )
      {
        v9 = *(int (**)(uint32_t *, unsigned int, int, int, int))(*(uint32_t *)(a1[24] + 12) + 84);
        if ( v9 != nullptr && ((a4 & 3) != 0 || ((a4 >> 16) & 0xF) == 1) )
        {
          v14 = v9(a1, a2, a3, a4, a5);
          v6 = v14;
          v5 = a2;
          if ( v14 == 0 )
          {
            if ( (a4 & 1) == 0 )
            {
              v15 = a1[22];
              if ( v15 != 0 )
              {
                if ( (a4 & 0x10) != 0 )
                  v16 = *(uint32_t *)(v15 + 20);
                else
                  v16 = *(uint32_t *)(v15 + 16);
                v17 = 0;
                v18 = v16;
                do
                {
                  *(uint32_t *)(a5 + 4 * v17) = FT_MulDiv(*(uint32_t *)(a5 + 4 * v17), v18, 64);
                  ++v17;
                }
                while ( v17 != a3 );
                return 0;
              }
              else
              {
                return 36;
              }
            }
            return v6;
          }
          if ( (uint8_t)v14 != 7 )
            return v6;
        }
        v6 = 7;
        if ( (a4 & 0x20000000) == 0 )
        {
          v10 = a4;
          BYTE1(v10) = BYTE1(a4) | 1;
          v11 = v5;
          v19 = v10;
          v12 = 0;
          if ( (a4 & 0x10) != 0 )
          {
            while ( 1 )
            {
              Glyph = FT_Load_Glyph((int)(uintptr_t)(a1), v12 + v11, v19);
              if ( Glyph != 0 )
                break;
              *(uint32_t *)(a5 + 4 * v12++) = *(uint32_t *)(a1[21] + 68) << 10;
              if ( v12 == a3 )
                return Glyph;
            }
            return Glyph;
          }
          else
          {
            do
            {
              Glyph = FT_Load_Glyph((int)(uintptr_t)(a1), v12 + v11, v19);
              if ( Glyph != 0 )
                break;
              *(uint32_t *)(a5 + 4 * v12++) = *(uint32_t *)(a1[21] + 64) << 10;
            }
            while ( v12 != a3 );
            return Glyph;
          }
        }
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: FT_Get_Advance  (binary VA: 0x11b3f10)
// Original: FT_Get_Advance
// ----------------------------------------------------------------------------
int FT_Get_Advance(uint32_t *a1, unsigned int a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int (*v8)(uint32_t *, unsigned int, int, int, int *);
  int v9;
  int v10;
  int v11;

  v4 = a3;
  v5 = (int)(uintptr_t)(a4);
  v6 = 35;
  if ( a1 == nullptr )
    return v6;
  LOWORD(v6) = 16;
  if ( a1[4] <= a2 )
    return v6;
  v8 = *(int (**)(uint32_t *, unsigned int, int, int, int *))(*(uint32_t *)(a1[24] + 12) + 84);
  if ( v8 == nullptr || (a3 & 3) == 0 && ((a3 >> 16) & 0xF) != 1 )
    return FT_Get_Advances(a1, a2, 1, v4, v5);
  v9 = v8(a1, a2, 1, a3, a4);
  v6 = v9;
  v4 = a3;
  v5 = (int)(uintptr_t)(a4);
  if ( v9 != 0 )
  {
    if ( (uint8_t)v9 != 7 )
      return v6;
    return FT_Get_Advances(a1, a2, 1, v4, v5);
  }
  if ( (a3 & 1) == 0 )
  {
    v10 = a1[22];
    if ( v10 != 0 )
    {
      if ( (a3 & 0x10) != 0 )
        v11 = *(uint32_t *)(v10 + 20);
      else
        v11 = *(uint32_t *)(v10 + 16);
      *a4 = FT_MulDiv(*a4, v11, 64);
    }
    else
    {
      return 36;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Iterate  (binary VA: 0x11b4040)
// Original: FT_List_Iterate
// ----------------------------------------------------------------------------
int FT_List_Iterate(int *a1, int (*a2)(int, int), int a3)
{
  int v3;
  int result;
  int v5;

  v3 = *a1;
  result = 0;
  if ( *a1 != 0 )
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(v3 + 4);
      result = a2(v3, a3);
      if ( result != 0 || v5 == 0 )
        break;
      v3 = v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_List_Finalize  (binary VA: 0x11b4080)
// Original: FT_List_Finalize
// ----------------------------------------------------------------------------
int * FT_List_Finalize(int *a1, void (*a2)(int, uint32_t, int), int a3, int a4)
{
  int v4;
  int v5;
  int v7;

  v4 = *a1;
  if ( *a1 != 0 )
  {
    if ( a2 != nullptr )
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(v4 + 4);
        a2(a3, *(uint32_t *)(v4 + 8), a4);
        ft_mem_free(a3, v4);
        if ( v5 == 0 )
          break;
        v4 = v5;
      }
    }
    else
    {
      while ( 1 )
      {
        v7 = *(uint32_t *)(v4 + 4);
        ft_mem_free(a3, v4);
        if ( v7 == 0 )
          break;
        v4 = v7;
      }
    }
  }
  *a1 = 0;
  a1[1] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: FT_Remove_Module  (binary VA: 0x11b4110)
// Original: FT_Remove_Module
// ----------------------------------------------------------------------------
char FT_Remove_Module(int a1, int a2)
{
  char result;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  unsigned int i;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  int v11;
  int *v12;
  int *v13;
  int v14;
  int *v15;
  int64_t *v16;
  int v17;
  void (*v18)(int);
  int v19;
  int v20;
  int v21;
  int64_t *v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  uint32_t *v29;
  int v30;
  int v31;

  result = 33;
  v3 = a2;
  if ( a1 != 0 )
  {
    result = 34;
    if ( a2 != 0 )
    {
      v4 = (uint32_t *)(a1 + 20);
      v30 = *(uint32_t *)(a1 + 16);
      v26 = a1 + 4 * (v30 + 4) + 4;
      if ( a1 + 20 < v26 )
      {
        if ( a2 == *(uint32_t *)(a1 + 20) )
        {
LABEL_5:
          *(uint32_t *)(a1 + 16) = v30 - 1;
          if ( a1 + 4 * (v30 + 4) > (unsigned int)(uintptr_t)(v4) )
          {
            v5 = v4;
            v27 = ((unsigned int)(a1 + 4 * (v30 + 4) - 1 - (uint32_t)(uintptr_t)(v4)) >> 2) + 1;
            v6 = -((uint8_t)(((uint8_t)(uintptr_t)(v4) + 4) & 0xF) >> 2) & 3;
            if ( v6 > v27 )
              v6 = ((unsigned int)(a1 + 4 * (v30 + 4) - 1 - (uint32_t)(uintptr_t)(v4)) >> 2) + 1;
            if ( v6 == 0 )
              goto LABEL_41;
            for ( i = 0; i < v6; ++i )
            {
              *v5 = v5[1];
              ++v5;
            }
            if ( v27 != v6 )
            {
LABEL_41:
              v28 = v27 - v6;
              if ( 4 * (v28 >> 2) == 0 )
                goto LABEL_42;
              v23 = (int)(uintptr_t)(&v4[v6 + 1]);
              v8 = &v4[v6];
              v9 = 0;
              v10 = 0;
              do
              {
                ++v10;
                *(__m128i *)&v8[v9] = *(__m128i *)(v23 + v9 * 4);
                v9 += 4;
              }
              while ( v10 < v28 >> 2 );
              v3 = a2;
              v5 += 4 * (v28 >> 2);
              if ( v28 != 4 * (v28 >> 2) )
              {
LABEL_42:
                do
                {
                  *v5 = v5[1];
                  ++v5;
                }
                while ( a1 + 4 * (v30 + 4) > (unsigned int)(uintptr_t)(v5) );
              }
            }
          }
          *(uint32_t *)(a1 + 4 * (v30 + 4)) = 0;
          v31 = *(uint32_t *)(v3 + 8);
          v11 = *(uint32_t *)(v3 + 4);
          v12 = *(int **)v3;
          v13 = *(int **)v3;
          if ( v11 != 0 && v3 == *(uint32_t *)(v11 + 160) )
          {
            *(uint32_t *)(v11 + 160) = 0;
            v13 = *(int **)v3;
          }
          v14 = *v13;
          if ( (v14 & 2) != 0 )
          {
            v15 = *(int **)(v3 + 4);
            if ( v15 != nullptr )
            {
              v19 = *(uint32_t *)(v3 + 4);
              v25 = *v15;
              v29 = (uint32_t *)(v15 + 37);
              v16 = (int64_t *)FT_List_Find(v15 + 37, v3);
              v17 = v19;
              if ( v16 != nullptr )
              {
                v24 = *(uint32_t *)(v3 + 12);
                if ( *(uint32_t *)(v24 + 36) == 1869968492 && *(uint32_t *)(v3 + 52) != 0 )
                {
                  v22 = v16;
                  (*(void (**)(uint32_t))(*(uint32_t *)(v24 + 56) + 20))(*(uint32_t *)(v3 + 52));
                  v16 = v22;
                  v17 = v19;
                }
                v20 = v17;
                v21 = (int)(uintptr_t)(v16);
                FT_List_Remove(v29, v16);
                ft_mem_free(v25, v21);
                *(uint32_t *)(v20 + 156) = FT_Lookup_Renderer(v20, 1869968492, 0);
              }
              v14 = **(uint32_t **)v3;
            }
          }
          if ( (v14 & 1) != 0 )
          {
            FT_List_Finalize((int *)(v3 + 16), (void (*)(int, uint32_t, int))sub_11B47C0, *(uint32_t *)(v3 + 8), v3);
            if ( (**(uint32_t **)v3 & 0x200) == 0 )
              FT_GlyphLoader_Done(*(int **)(v3 + 24));
          }
          v18 = (void (*)(int))v12[7];
          if ( v18 != nullptr )
            v18(v3);
          ft_mem_free(v31, v3);
          return 0;
        }
        else
        {
          while ( 1 )
          {
            if ( v26 <= (unsigned int)(uintptr_t)(++v4) )
              return 34;
            if ( a2 == *v4 )
              goto LABEL_5;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Add_Module  (binary VA: 0x11b4430)
// Original: FT_Add_Module
// ----------------------------------------------------------------------------
int FT_Add_Module(int *a1, int *a2)
{
  int v2;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int (*v11)(int);
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef const char *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[4];
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v18)) > _g4_s1 ? (0u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v20)) > _g4_s3 ? (4u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v21)) > _g4_s4 ? (4u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v22)) > _g4_s5 ? (4u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v23)) > _g4_s6 ? (4u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v24)) > _g4_s7 ? (4u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v25)) > _g4_s8 ? (4u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v26)) > _g4_s9 ? (8u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v27)) > _g4_s10 ? (8u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v28)) > _g4_s11 ? (12u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v29)) > _g4_s12 ? (12u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v30)) > _g4_s13 ? (16u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v31)) > _g4_s14 ? (32u + sizeof(_g4_t_v31)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);

  v2 = 33;
  if ( a1 == nullptr )
    return v2;
  LOWORD(v2) = 6;
  if ( a2 == nullptr )
    return v2;
  LOWORD(v2) = 4;
  if ( a2[4] > 131077 )
    return v2;
  v28 = a1[4];
  if ( v28 == 0 )
  {
    v30[0] = 0;
    v5 = *a1;
    goto LABEL_12;
  }
  LOWORD(v2) = 0;
  v26 = (const char *)a2[2];
  while ( 1 )
  {
    v4 = a1[v2 + 5];
    v17 = *(uint32_t *)v4;
    if ( strcmp(*(const char **)(*(uint32_t *)v4 + 8), v26) == 0 )
      break;
    if ( ++v2 == v28 )
      goto LABEL_11;
  }
  v2 = 5;
  if ( a2[3] <= *(uint32_t *)(v17 + 12) )
    return v2;
  FT_Remove_Module((int)(uintptr_t)(a1), v4);
  v28 = a1[4];
LABEL_11:
  v30[0] = 0;
  v2 = 48;
  v5 = *a1;
  if ( v28 <= 0x1F )
  {
LABEL_12:
    v19 = v5;
    v6 = (uint32_t *)(ft_mem_alloc(v5, a2[1], v30));
    v2 = v30[0];
    v7 = (int)(uintptr_t)(v6);
    v8 = v19;
    if ( v30[0] != 0 )
      return v2;
    v6[2] = v19;
    v6[1] = (uint32_t)(uintptr_t)(a1);
    v9 = a2;
    *v6 = (uint32_t)(uintptr_t)(a2);
    v10 = *a2;
    if ( (*a2 & 2) == 0 )
    {
LABEL_14:
      if ( (v10 & 4) != 0 )
      {
        a1[40] = v7;
        v9 = *(int **)v7;
        v10 = **(uint32_t **)v7;
      }
      if ( (v10 & 1) == 0
        || (*(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v9), (*v9 & 0x200) != 0)
        || (v22 = v8, v30[0] = FT_GlyphLoader_New(v8, (uint32_t *)(v7 + 24)), v8 = v22, v30[0] == 0) )
      {
        v11 = (int (*)(int))a2[6];
        if ( v11 == nullptr )
        {
          v2 = v30[0];
          goto LABEL_20;
        }
        v20 = v8;
        v30[0] = v11(v7);
        v8 = v20;
        if ( v30[0] == 0 )
        {
LABEL_20:
          v12 = a1[4];
          a1[v12 + 5] = v7;
          a1[4] = v12 + 1;
          return v2;
        }
      }
      goto LABEL_22;
    }
    v29 = *a1;
    v27 = (uint32_t *)(ft_mem_alloc(*a1, 12, v31));
    v8 = v19;
    if ( v31[0] != 0 )
    {
      v30[0] = v31[0];
      goto LABEL_22;
    }
    v15 = *(int **)v7;
    *(uint32_t *)(v7 + 12) = *(uint32_t *)v7;
    *(uint32_t *)(v7 + 16) = v15[9];
    if ( v15[9] == 1869968492 && *(uint32_t *)(v15[14] + 4) != 0 )
    {
      v18 = v15;
      v31[0] = (*(int (**)(int, int))(v15[14] + 4))(v29, v7 + 52);
      v8 = v19;
      if ( v31[0] != 0 )
        goto LABEL_42;
      *(uint32_t *)(v7 + 56) = *(uint32_t *)(v18[14] + 16);
      *(uint32_t *)(v7 + 60) = v18[10];
    }
    v27[2] = v7;
    v21 = v8;
    FT_List_Add(a1 + 37, v27);
    a1[39] = FT_Lookup_Renderer((int)(uintptr_t)(a1), 1869968492, 0);
    v8 = v21;
    if ( v31[0] == 0 )
    {
      v30[0] = 0;
      v9 = *(int **)v7;
      v10 = **(uint32_t **)v7;
      goto LABEL_14;
    }
LABEL_42:
    v25 = v8;
    ft_mem_free(v29, (int)(uintptr_t)(v27));
    v8 = v25;
    v30[0] = v31[0];
    if ( v31[0] == 0 )
    {
      v9 = *(int **)v7;
      v10 = **(uint32_t **)v7;
      goto LABEL_14;
    }
LABEL_22:
    v13 = **(uint32_t **)v7;
    if ( (v13 & 1) != 0 && (v13 & 0x200) == 0 )
    {
      v23 = v8;
      FT_GlyphLoader_Done(*(int **)(v7 + 24));
      v8 = v23;
      v13 = **(uint32_t **)v7;
    }
    if ( (v13 & 2) != 0 )
    {
      v14 = *(uint32_t *)(v7 + 12);
      if ( v14 != 0 && *(uint32_t *)(v14 + 36) == 1869968492 )
      {
        v16 = *(uint32_t *)(v7 + 52);
        if ( v16 != 0 )
        {
          v24 = v8;
          (*(void (**)(int))(*(uint32_t *)(v14 + 56) + 20))(v16);
          v8 = v24;
        }
      }
    }
    ft_mem_free(v8, v7);
    return v30[0];
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Done_Face  (binary VA: 0x11b4930)
// Original: FT_Done_Face
// ----------------------------------------------------------------------------
int FT_Done_Face(int a1)
{
  int result;
  uint32_t *v2;
  int64_t *v3;
  void (*v4)(uint32_t);
  void (*v5)(int);
  int v6;
  uint32_t *v7;
  int v8;
  void (*v9)(uint32_t *);
  void (*v10)(int);
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  result = 35;
  if ( a1 != 0 && *(uint32_t *)(a1 + 96) != 0 )
  {
    --*(uint32_t *)(*(uint32_t *)(a1 + 128) + 56);
    result = 0;
    if ( *(int *)(*(uint32_t *)(a1 + 128) + 56) <= 0 )
    {
      v2 = *(uint32_t **)(a1 + 96);
      v15 = v2[2];
      v3 = (int64_t *)FT_List_Find(v2 + 4, a1);
      result = 35;
      if ( v3 != nullptr )
      {
        v12 = (int)(uintptr_t)(v3);
        FT_List_Remove(v2 + 4, v3);
        ft_mem_free(v15, v12);
        v16 = v2[3];
        v4 = *(void (**)(uint32_t))(a1 + 120);
        if ( v4 != nullptr )
          v4(*(uint32_t *)(a1 + 116));
        while ( *(uint32_t *)(a1 + 84) != 0 )
          FT_Done_GlyphSlot(*(uint32_t **)(a1 + 84));
        FT_List_Finalize((int *)(a1 + 108), (void (*)(int, uint32_t, int))sub_11B1640, v15, (int)(uintptr_t)(v2));
        v5 = *(void (**)(int))(a1 + 48);
        *(uint32_t *)(a1 + 88) = 0;
        if ( v5 != nullptr )
          v5(a1);
        if ( *(int *)(a1 + 36) > 0 )
        {
          v6 = 0;
          do
          {
            v14 = 4 * v6;
            v7 = *(uint32_t **)(*(uint32_t *)(a1 + 40) + 4 * v6);
            v8 = *(uint32_t *)(*v7 + 100);
            v9 = *(void (**)(uint32_t *))(v7[3] + 8);
            if ( v9 != nullptr )
            {
              v13 = *(uint32_t *)(*v7 + 100);
              v9(v7);
              v8 = v13;
            }
            ft_mem_free(v8, (int)(uintptr_t)(v7));
            ++v6;
            *(uint32_t *)(*(uint32_t *)(a1 + 40) + v14) = 0;
          }
          while ( v6 < *(uint32_t *)(a1 + 36) );
        }
        ft_mem_free(v15, *(uint32_t *)(a1 + 40));
        *(uint32_t *)(a1 + 40) = 0;
        *(uint32_t *)(a1 + 36) = 0;
        v10 = *(void (**)(int))(v16 + 52);
        if ( v10 != nullptr )
          v10(a1);
        FT_Stream_Free(*(uint32_t *)(a1 + 104), (*(uint8_t *)(a1 + 9) & 4) != 0);
        v11 = *(uint32_t *)(a1 + 128);
        *(uint32_t *)(a1 + 104) = 0;
        if ( v11 != 0 )
        {
          ft_mem_free(v15, v11);
          *(uint32_t *)(a1 + 128) = 0;
        }
        ft_mem_free(v15, a1);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Done_Library  (binary VA: 0x11b4b30)
// Original: FT_Done_Library
// ----------------------------------------------------------------------------
char FT_Done_Library(int *a1)
{
  char result;
  int v2;
  bool v3;
  int v4;
  unsigned int v5;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int j;
  uint8_t *v11;
  int v12;
  int i;
  unsigned int v14;
  const char *v15;
  uint32_t v16[7];

  result = 33;
  if ( a1 != nullptr )
  {
    result = 0;
    v2 = a1[47] - 1;
    v3 = a1[47] == 1;
    a1[47] = v2;
    if ( v2 < 0 || v3 )
    {
      v4 = a1[4];
      v12 = *a1;
      v16[0] = (uint32_t)(uintptr_t)("type42");
      v16[1] = 0;
      v14 = v4;
      for ( i = 0; i != 2; ++i )
      {
        if ( v14 != 0 )
        {
          v5 = 0;
          v15 = (const char *)v16[i];
          do
          {
            v6 = (uint32_t *)a1[v5 + 5];
            v7 = (uint8_t *)*v6;
            if ( v15 == nullptr || (v11 = (uint8_t *)*v6, v8 = strcmp(*(const char **)(*v6 + 8), v15), v7 = v11, v8 == 0) )
            {
              if ( (*v7 & 1) != 0 )
              {
                v9 = v6[4];
                if ( v9 != 0 )
                {
                  do
                  {
                    FT_Done_Face(*(uint32_t *)(v9 + 8));
                    v9 = v6[4];
                  }
                  while ( v9 != 0 );
                  v14 = a1[4];
                }
              }
            }
            ++v5;
          }
          while ( v5 < v14 );
        }
      }
      if ( v14 != 0 )
      {
        for ( j = v14; j != 0; j = a1[4] )
          FT_Remove_Module((int)(uintptr_t)(a1), a1[j + 4]);
      }
      ft_mem_free(v12, a1[41]);
      a1[41] = 0;
      a1[42] = 0;
      ft_mem_free(v12, (int)(uintptr_t)(a1));
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Open_Face  (binary VA: 0x11b4cb0)
// Original: FT_Open_Face
// ----------------------------------------------------------------------------
int FT_Open_Face(int *a1, int *a2, int a3, int *a4)
{
  int result;
  int v5;
  uint8_t **v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  int (*v20)(uint32_t *, int, int, int, uint32_t *);
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  void (*v25)(uint32_t *);
  void (*v26)(int);
  unsigned int v27;
  int *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int *v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  void (*v38)(uint32_t *);
  void (*v39)(int);
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int (*v46)(uint32_t *, int, int, int, uint32_t *);
  unsigned int v47;
  int *v48;
  int v49;
  uint32_t *v50;
  int *v51;
  void (*v52)(uint32_t);
  void (*v53)(int);
  int v54;
  int v55;
  uint32_t *v56;
  int v57;
  void (*v58)(uint32_t *);
  void (*v59)(int);
  int v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef bool _g4_t_v72;
  typedef bool _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef uint8_t **_g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef int *_g4_t_v79;
  typedef uint8_t **_g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int *_g4_t_v83;
  typedef int *_g4_t_v84;
  typedef int *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint8_t *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int *_g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96[4];
  typedef uint32_t *_g4_t_v97;
  typedef int _g4_t_v98[7];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v61)) > _g4_s0 ? (4u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v62)) > _g4_s1 ? (4u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v63)) > _g4_s2 ? (4u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v64)) > _g4_s3 ? (4u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v65)) > _g4_s4 ? (4u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v66)) > _g4_s5 ? (4u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v67)) > _g4_s6 ? (8u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v68)) > _g4_s7 ? (8u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v69)) > _g4_s8 ? (8u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v70)) > _g4_s9 ? (8u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v71)) > _g4_s10 ? (12u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v72)) > _g4_s11 ? (16u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v73)) > _g4_s12 ? (52u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v74)) > _g4_s13 ? (60u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v75)) > _g4_s14 ? (64u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v76)) > _g4_s15 ? (68u + sizeof(_g4_t_v76)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v77)) > _g4_s16 ? (68u + sizeof(_g4_t_v77)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v78)) > _g4_s17 ? (72u + sizeof(_g4_t_v78)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v79)) > _g4_s18 ? (72u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v80)) > _g4_s19 ? (76u + sizeof(_g4_t_v80)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v81)) > _g4_s20 ? (80u + sizeof(_g4_t_v81)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v82)) > _g4_s21 ? (80u + sizeof(_g4_t_v82)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v83)) > _g4_s22 ? (84u + sizeof(_g4_t_v83)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v84)) > _g4_s23 ? (84u + sizeof(_g4_t_v84)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v85)) > _g4_s24 ? (84u + sizeof(_g4_t_v85)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v86)) > _g4_s25 ? (88u + sizeof(_g4_t_v86)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v87)) > _g4_s26 ? (88u + sizeof(_g4_t_v87)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v88)) > _g4_s27 ? (88u + sizeof(_g4_t_v88)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v89)) > _g4_s28 ? (88u + sizeof(_g4_t_v89)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v90)) > _g4_s29 ? (92u + sizeof(_g4_t_v90)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v91)) > _g4_s30 ? (92u + sizeof(_g4_t_v91)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v92)) > _g4_s31 ? (92u + sizeof(_g4_t_v92)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v93)) > _g4_s32 ? (92u + sizeof(_g4_t_v93)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v94)) > _g4_s33 ? (92u + sizeof(_g4_t_v94)) : _g4_s33,
    _g4_s35 = (92u + sizeof(_g4_t_v95)) > _g4_s34 ? (92u + sizeof(_g4_t_v95)) : _g4_s34,
    _g4_s36 = (96u + sizeof(_g4_t_v96)) > _g4_s35 ? (96u + sizeof(_g4_t_v96)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v97)) > _g4_s36 ? (112u + sizeof(_g4_t_v97)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v98)) > _g4_s37 ? (128u + sizeof(_g4_t_v98)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 4u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 4u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 16u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 72u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 76u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 80u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 80u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 84u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 84u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 84u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 88u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 92u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 92u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 92u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 112u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 128u);

  v97 = nullptr;
  if ( a4 == nullptr )
  {
    result = 6;
    if ( a3 >= 0 )
      return result;
  }
  result = 6;
  if ( a2 == nullptr )
    return result;
  v73 = false;
  v72 = false;
  if ( (*(uint8_t *)a2 & 2) != 0 )
  {
    v73 = a2[4] != 0;
    v72 = a2[4] != 0;
  }
  LOBYTE(v5) = FT_Stream_New(a1, a2, &v97);
  v96[0] = v5;
  if ( v5 != 0 )
  {
    v5 = (uint8_t)v5;
LABEL_9:
    if ( v5 == 2 || v5 == 81 || v5 == 85 )
    {
      v14 = sub_11B6720(a3, a4, a2);
      v96[0] = v14;
      if ( v14 == 0 )
      {
LABEL_99:
        FT_Stream_Free((int)(uintptr_t)(v97), v73);
        return 0;
      }
      if ( (uint8_t)v14 == 2 )
        v96[0] = 2;
    }
LABEL_12:
    FT_Stream_Free((int)(uintptr_t)(v97), v73);
    return v96[0];
  }
  v71 = *a1;
  if ( (*a2 & 8) != 0 )
  {
    v6 = (uint8_t **)a2[5];
    if ( v6 != nullptr )
    {
      if ( (**v6 & 1) == 0 )
      {
        v96[0] = 32;
        goto LABEL_12;
      }
      v78 = nullptr;
      v90 = 0;
      if ( (*a2 & 0x10) != 0 )
      {
        v90 = a2[6];
        v78 = (uint32_t *)a2[7];
      }
      v83 = (int *)v6[3];
      v86 = (int)(uintptr_t)(v6[2]);
      v7 = (uint32_t *)(ft_mem_alloc(v86, v83[9], v98));
      v8 = (int)(uintptr_t)(v7);
      v81 = 0;
      if ( v98[0] == 0 )
      {
        v9 = v86;
        v7[24] = (uint32_t)(uintptr_t)(v6);
        v7[25] = v86;
        v7[26] = (uint32_t)(uintptr_t)(v97);
        if ( v72 )
        {
          v7[2] |= 0x400u;
          v9 = v86;
        }
        v10 = (uint32_t *)(ft_mem_alloc(v9, 60, v98));
        v81 = (int)(uintptr_t)(v10);
        if ( v98[0] == 0 )
        {
          *(uint32_t *)(v8 + 128) = (uint32_t)(uintptr_t)(v10);
          v10[12] = 0;
          if ( v90 > 0 )
          {
            v11 = *(uint32_t *)(v8 + 128);
            if ( *(uint32_t *)(v11 + 48) == 0 )
            {
              v12 = v78;
              v13 = 0;
              do
              {
                if ( *v12 == 1768842098 )
                  *(uint32_t *)(v11 + 48) = v12[1];
                if ( ++v13 == v90 )
                  break;
                v11 = *(uint32_t *)(v8 + 128);
                v12 += 2;
              }
              while ( *(uint32_t *)(v11 + 48) == 0 );
            }
          }
          v46 = (int (*)(uint32_t *, int, int, int, uint32_t *))v83[12];
          if ( v46 == nullptr )
          {
            v97 = *(uint32_t **)(v8 + 104);
LABEL_121:
            v47 = *(uint32_t *)(v8 + 40);
            v94 = v47;
            if ( v47 != 0 )
            {
              v48 = (int *)(v47 + 4 * *(uint32_t *)(v8 + 36));
              v85 = v48;
              while ( v94 <= (unsigned int)(uintptr_t)(--v48) )
              {
                v29 = *v48;
                if ( *(uint32_t *)(*v48 + 4) == 1970170211 )
                {
                  v49 = *(uint32_t *)(v29 + 8);
                  if ( v49 == 0x40000 || v49 == 655363 )
                    goto LABEL_73;
                }
              }
              v51 = v85;
              while ( v94 <= (unsigned int)(uintptr_t)(--v51) )
              {
                v33 = *v51;
                if ( *(uint32_t *)(*v51 + 4) == 1970170211 )
                  goto LABEL_86;
              }
            }
            goto LABEL_74;
          }
          v98[0] = v46(v97, v8, a3, v90, v78);
          v97 = *(uint32_t **)(v8 + 104);
          if ( v98[0] == 0 )
            goto LABEL_121;
        }
      }
      if ( v8 != 0 )
      {
        if ( *(int *)(v8 + 36) > 0 )
        {
          v80 = v6;
          v34 = 0;
          v35 = v8;
          do
          {
            v93 = 4 * v34;
            v36 = *(uint32_t **)(*(uint32_t *)(v35 + 40) + 4 * v34);
            v37 = *(uint32_t *)(*v36 + 100);
            v38 = *(void (**)(uint32_t *))(v36[3] + 8);
            if ( v38 != nullptr )
            {
              v63 = v35;
              v68 = *(uint32_t *)(*v36 + 100);
              v38(v36);
              v37 = v68;
              v35 = v63;
            }
            v64 = v35;
            ++v34;
            ft_mem_free(v37, (int)(uintptr_t)(v36));
            v35 = v64;
            *(uint32_t *)(*(uint32_t *)(v64 + 40) + v93) = 0;
          }
          while ( v34 < *(uint32_t *)(v64 + 36) );
          v6 = v80;
          v8 = v64;
        }
        ft_mem_free(v86, *(uint32_t *)(v8 + 40));
        *(uint32_t *)(v8 + 40) = 0;
        *(uint32_t *)(v8 + 36) = 0;
      }
      v39 = (void (*)(int))v83[13];
      if ( v39 != nullptr )
        v39(v8);
      ft_mem_free(v86, v81);
      ft_mem_free(v86, v8);
      v96[0] = v98[0];
      if ( v98[0] == 0 )
      {
LABEL_98:
        v8 = 0;
        goto LABEL_75;
      }
      goto LABEL_12;
    }
  }
  v96[0] = 11;
  v91 = a1 + 5;
  v74 = (unsigned int)(uintptr_t)(&a1[a1[4] + 5]);
  if ( (unsigned int)(uintptr_t)(a1 + 5) >= v74 )
    goto LABEL_12;
  while ( 1 )
  {
    v6 = (uint8_t **)*v91;
    if ( (**(uint8_t **)*v91 & 1) == 0 )
      goto LABEL_64;
    v76 = nullptr;
    v87 = 0;
    if ( (*(uint8_t *)a2 & 0x10) != 0 )
    {
      v87 = a2[6];
      v76 = (uint32_t *)a2[7];
    }
    v79 = (int *)v6[3];
    v82 = (int)(uintptr_t)(v6[2]);
    v15 = (uint32_t *)(ft_mem_alloc(v82, v79[9], v98));
    v8 = (int)(uintptr_t)(v15);
    v75 = 0;
    if ( v98[0] == 0 )
    {
      v15[24] = (uint32_t)(uintptr_t)(v6);
      v15[25] = v82;
      v15[26] = (uint32_t)(uintptr_t)(v97);
      if ( v72 )
        v15[2] |= 0x400u;
      v16 = (uint32_t *)(ft_mem_alloc(v82, 60, v98));
      v75 = (int)(uintptr_t)(v16);
      if ( v98[0] == 0 )
        break;
    }
LABEL_50:
    if ( v8 != 0 )
    {
      if ( *(int *)(v8 + 36) > 0 )
      {
        v77 = v6;
        v21 = 0;
        v22 = v8;
        do
        {
          v88 = 4 * v21;
          v23 = *(uint32_t **)(*(uint32_t *)(v22 + 40) + 4 * v21);
          v24 = *(uint32_t *)(*v23 + 100);
          v25 = *(void (**)(uint32_t *))(v23[3] + 8);
          if ( v25 != nullptr )
          {
            v61 = v22;
            v67 = *(uint32_t *)(*v23 + 100);
            v25(v23);
            v24 = v67;
            v22 = v61;
          }
          v62 = v22;
          ++v21;
          ft_mem_free(v24, (int)(uintptr_t)(v23));
          v22 = v62;
          *(uint32_t *)(*(uint32_t *)(v62 + 40) + v88) = 0;
        }
        while ( v21 < *(uint32_t *)(v62 + 36) );
        v6 = v77;
        v8 = v62;
      }
      ft_mem_free(v82, *(uint32_t *)(v8 + 40));
      *(uint32_t *)(v8 + 40) = 0;
      *(uint32_t *)(v8 + 36) = 0;
    }
    v26 = (void (*)(int))v79[13];
    if ( v26 != nullptr )
      v26(v8);
    ft_mem_free(v82, v75);
    ft_mem_free(v82, v8);
    v96[0] = v98[0];
    if ( v98[0] == 0 )
      goto LABEL_98;
    v5 = LOBYTE(v98[0]);
    if ( strcmp(*(const char **)(*(uint32_t *)*v91 + 8), "truetype") == 0 && LOBYTE(v98[0]) == 142 )
    {
      if ( FT_Stream_Seek(v97, 0) != 0 )
      {
LABEL_65:
        v5 = LOBYTE(v96[0]);
        goto LABEL_9;
      }
      v5 = sub_11B5950(a3, a4);
      v96[0] = v5;
      if ( v5 == 0 )
        goto LABEL_99;
      v5 = (uint8_t)v5;
    }
    if ( v5 != 2 )
      goto LABEL_9;
LABEL_64:
    if ( v74 <= (unsigned int)(uintptr_t)(++v91) )
      goto LABEL_65;
  }
  *(uint32_t *)(v8 + 128) = (uint32_t)(uintptr_t)(v16);
  v16[12] = 0;
  if ( v87 > 0 )
  {
    v17 = *(uint32_t *)(v8 + 128);
    if ( *(uint32_t *)(v17 + 48) == 0 )
    {
      v18 = v76;
      v19 = 0;
      do
      {
        if ( *v18 == 1768842098 )
          *(uint32_t *)(v17 + 48) = v18[1];
        if ( ++v19 == v87 )
          break;
        v17 = *(uint32_t *)(v8 + 128);
        v18 += 2;
      }
      while ( *(uint32_t *)(v17 + 48) == 0 );
    }
  }
  v20 = (int (*)(uint32_t *, int, int, int, uint32_t *))v79[12];
  if ( v20 != nullptr )
  {
    v98[0] = v20(v97, v8, a3, v87, v76);
    v97 = *(uint32_t **)(v8 + 104);
    if ( v98[0] == 0 )
      goto LABEL_67;
    goto LABEL_50;
  }
  v97 = *(uint32_t **)(v8 + 104);
LABEL_67:
  v27 = *(uint32_t *)(v8 + 40);
  v92 = v27;
  if ( v27 != 0 )
  {
    v28 = (int *)(v27 + 4 * *(uint32_t *)(v8 + 36));
    v84 = v28;
    while ( v92 <= (unsigned int)(uintptr_t)(--v28) )
    {
      v29 = *v28;
      if ( *(uint32_t *)(*v28 + 4) == 1970170211 )
      {
        v30 = *(uint32_t *)(v29 + 8);
        if ( v30 == 0x40000 || v30 == 655363 )
        {
LABEL_73:
          *(uint32_t *)(v8 + 92) = v29;
          goto LABEL_74;
        }
      }
    }
    v32 = v84;
    while ( v92 <= (unsigned int)(uintptr_t)(--v32) )
    {
      v33 = *v32;
      if ( *(uint32_t *)(*v32 + 4) == 1970170211 )
      {
LABEL_86:
        *(uint32_t *)(v8 + 92) = v33;
        break;
      }
    }
  }
LABEL_74:
  v96[0] = 0;
LABEL_75:
  v31 = (uint32_t *)(ft_mem_alloc(v71, 12, v96));
  if ( v96[0] != 0 )
  {
LABEL_76:
    if ( v31 != nullptr )
      goto LABEL_77;
    if ( v8 != 0 )
    {
      v89 = v6[3];
      v52 = *(void (**)(uint32_t))(v8 + 120);
      if ( v52 != nullptr )
        v52(*(uint32_t *)(v8 + 116));
      while ( *(uint32_t *)(v8 + 84) != 0 )
        FT_Done_GlyphSlot(*(uint32_t **)(v8 + 84));
      FT_List_Finalize((int *)(v8 + 108), (void (*)(int, uint32_t, int))sub_11B1640, v71, (int)(uintptr_t)(v6));
      v53 = *(void (**)(int))(v8 + 48);
      *(uint32_t *)(v8 + 88) = 0;
      if ( v53 != nullptr )
        v53(v8);
      if ( *(int *)(v8 + 36) > 0 )
      {
        v54 = 0;
        v55 = v8;
        do
        {
          v95 = 4 * v54;
          v56 = *(uint32_t **)(*(uint32_t *)(v55 + 40) + 4 * v54);
          v57 = *(uint32_t *)(*v56 + 100);
          v58 = *(void (**)(uint32_t *))(v56[3] + 8);
          if ( v58 != nullptr )
          {
            v65 = v55;
            v70 = *(uint32_t *)(*v56 + 100);
            v58(v56);
            v57 = v70;
            v55 = v65;
          }
          v66 = v55;
          ++v54;
          ft_mem_free(v57, (int)(uintptr_t)(v56));
          v55 = v66;
          *(uint32_t *)(*(uint32_t *)(v66 + 40) + v95) = 0;
        }
        while ( v54 < *(uint32_t *)(v66 + 36) );
        v8 = v66;
      }
      ft_mem_free(v71, *(uint32_t *)(v8 + 40));
      *(uint32_t *)(v8 + 40) = 0;
      *(uint32_t *)(v8 + 36) = 0;
      v59 = *((void (**)(int))v89 + 13);
      if ( v59 != nullptr )
        v59(v8);
      FT_Stream_Free(*(uint32_t *)(v8 + 104), (*(uint8_t *)(v8 + 9) & 4) != 0);
      v60 = *(uint32_t *)(v8 + 128);
      *(uint32_t *)(v8 + 104) = 0;
      if ( v60 != 0 )
      {
        ft_mem_free(v71, v60);
        *(uint32_t *)(v8 + 128) = 0;
      }
      ft_mem_free(v71, v8);
    }
  }
  else
  {
    v31[2] = v8;
    v69 = v31;
    FT_List_Add((uint32_t *)(*(uint32_t *)(v8 + 96) + 16), v31);
    if ( a3 >= 0 )
    {
      v96[0] = FT_New_GlyphSlot(v8, nullptr);
      v31 = v69;
      if ( v96[0] != 0 )
        goto LABEL_76;
      LOBYTE(v40) = FT_New_Size((uint32_t *)v8, v98);
      v96[0] = v40;
      v31 = v69;
      if ( v40 != 0 )
        goto LABEL_76;
      *(uint32_t *)(v8 + 88) = v98[0];
    }
    v41 = *(uint32_t *)(v8 + 8);
    if ( (v41 & 1) != 0 )
    {
      v42 = *(uint16_t *)(v8 + 74);
      if ( (v42 & 0x8000u) != 0 )
      {
        v42 = -v42;
        *(uint16_t *)(v8 + 74) = v42;
      }
      if ( (v41 & 0x20) == 0 )
        *(uint16_t *)(v8 + 78) = v42;
    }
    if ( (v41 & 2) != 0 && *(int *)(v8 + 28) > 0 )
    {
      v43 = 0;
      do
      {
        v45 = *(uint32_t *)(v8 + 32) + 16 * v43;
        if ( *(int16_t *)v45 < 0 )
          *(uint16_t *)v45 = -*(uint16_t *)v45;
        if ( *(int *)(v45 + 8) < 0 )
          *(uint32_t *)(v45 + 8) = (int16_t)-*(uint16_t *)(v45 + 8);
        v44 = *(uint32_t *)(v45 + 12);
        if ( v44 < 0 )
          *(uint32_t *)(v45 + 12) = -v44;
        ++v43;
      }
      while ( *(uint32_t *)(v8 + 28) > v43 );
    }
    v50 = *(uint32_t **)(v8 + 128);
    *v50 = 0x10000;
    v50[1] = 0;
    v50[2] = 0;
    v50[3] = 0x10000;
    v50[4] = 0;
    v50[5] = 0;
    v50[14] = 1;
    if ( a4 != nullptr )
      *a4 = v8;
    else
LABEL_77:
      FT_Done_Face(v8);
  }
  return v96[0];
}

// ----------------------------------------------------------------------------
// Function: FT_New_Memory_Face  (binary VA: 0x11b5880)
// Original: FT_New_Memory_Face
// ----------------------------------------------------------------------------
int FT_New_Memory_Face(int *a1, int a2, int a3, int a4, int *a5)
{
  int result;
  int v6[11];

  result = 6;
  if ( a2 != 0 )
  {
    v6[0] = 1;
    v6[2] = a3;
    v6[1] = a2;
    v6[4] = 0;
    return FT_Open_Face(a1, v6, a4, a5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_New_Face  (binary VA: 0x11b58f0)
// Original: FT_New_Face
// ----------------------------------------------------------------------------
int FT_New_Face(int *a1, int a2, int a3, int *a4)
{
  int result;
  int v5[11];

  result = 6;
  if ( a2 != 0 )
  {
    v5[0] = 4;
    v5[3] = a2;
    v5[4] = 0;
    return FT_Open_Face(a1, v5, a3, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_highpow2  (binary VA: 0x11b6fd0)
// Original: ft_highpow2
// ----------------------------------------------------------------------------
int ft_highpow2(int a1)
{
  int result;

  for ( result = a1; (result & (result - 1)) != 0; result &= result - 1 )
    ;
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Bitmap_New  (binary VA: 0x11b6ff0)
// Original: FT_Bitmap_New
// ----------------------------------------------------------------------------
int FT_Bitmap_New(void *a1)
{
  memset(a1, 0, 0x18u);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: FT_Bitmap_Copy  (binary VA: 0x11b7010)
// Original: FT_Bitmap_Copy
// ----------------------------------------------------------------------------
int FT_Bitmap_Copy(int *a1, int a2, uint32_t *a3)
{
  int v3;
  unsigned int v4;
  void *v5;
  int v7;
  typedef void *_g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v10)) > _g4_s2 ? (4u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v11)) > _g4_s3 ? (8u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v3 = 0;
  v12[0] = 0;
  v11 = *a1;
  if ( (uint32_t *)a2 == a3 )
    return v3;
  if ( *(uint32_t *)(a2 + 12) == 0 )
  {
    *a3 = *(uint32_t *)a2;
    a3[1] = *(uint32_t *)(a2 + 4);
    a3[2] = *(uint32_t *)(a2 + 8);
    a3[3] = *(uint32_t *)(a2 + 12);
    a3[4] = *(uint32_t *)(a2 + 16);
    a3[5] = *(uint32_t *)(a2 + 20);
    return v3;
  }
  v4 = *(uint32_t *)a2 * __builtin_abs(*(uint32_t *)(a2 + 8));
  v8 = (void *)a3[3];
  if ( v8 != nullptr )
  {
    if ( *a3 * __builtin_abs(a3[2]) == v4 )
      goto LABEL_8;
    v9 = v4;
    v5 = ft_mem_qrealloc(v11, 1, *a3 * __builtin_abs(a3[2]), v4, (int)(uintptr_t)(v8), v12);
    a3[3] = (uint32_t)(uintptr_t)(v5);
    v8 = v5;
    v4 = v9;
  }
  else
  {
    v10 = v4;
    v7 = ft_mem_qalloc(v11, v4, v12);
    a3[3] = v7;
    v8 = (void *)v7;
    v4 = v10;
  }
  v3 = v12[0];
  if ( v12[0] != 0 )
    return v3;
LABEL_8:
  *a3 = *(uint32_t *)a2;
  a3[1] = *(uint32_t *)(a2 + 4);
  a3[2] = *(uint32_t *)(a2 + 8);
  a3[3] = *(uint32_t *)(a2 + 12);
  a3[4] = *(uint32_t *)(a2 + 16);
  a3[5] = *(uint32_t *)(a2 + 20);
  a3[3] = (uint32_t)(uintptr_t)(v8);
  memcpy(v8, *(const void **)(a2 + 12), v4);
  return v12[0];
}

// ----------------------------------------------------------------------------
// Function: FT_Bitmap_Convert  (binary VA: 0x11b7190)
// Original: FT_Bitmap_Convert
// ----------------------------------------------------------------------------
int FT_Bitmap_Convert(int *a1, int *a2, int *a3, int a4)
{
  int result;
  char v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  bool v13;
  int v14;
  unsigned int v15;
  int v16;
  int64_t v17; // rax
  int64_t v18; // rax
  int64_t v19; // rax
  int64_t v20; // rax
  int64_t v21; // rax
  int64_t v22; // rax
  int64_t v23; // rax
  unsigned int v24;
  uint8_t *v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  char *v50;
  uint8_t *v51;
  char v52; // di
  char v53;
  unsigned int v54;
  uint8_t *v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  __m128i v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  __m128i v102;
  __m128i v103;
  __m128i v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  __m128i v112;
  __m128i v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  uint8_t *v118;
  uint8_t *v119;
  int v120;
  uint8_t *v121;
  uint8_t *v122;
  int v123;
  char *v124;
  char *v125;
  char *v126;
  uint8_t *v127;
  int v128;
  unsigned int v129;
  __m128i *v130;
  unsigned int v131;
  unsigned int v132;
  __m128i v133;
  __m128i v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  __m128i v145;
  __m128i v146;
  __m128i v147;
  __m128i v148;
  __m128i v149;
  __m128i v150;
  __m128i v151;
  __m128i v152;
  __m128i v153;
  __m128i v154;
  __m128i v155;
  __m128i v156;
  __m128i v157;
  __m128i v158;
  __m128i v159;
  __m128i v160;
  __m128i v161;
  __m128i v162;
  __m128i v163;
  __m128i v164;
  __m128i v165;
  __m128i v166;
  __m128i v167;
  __m128i v168;
  __m128i v169;
  __m128i v170;
  __m128i v171;
  __m128i v172;
  __m128i v173;
  __m128i v174;
  __m128i v175;
  __m128i v176;
  __m128i v177;
  __m128i v178;
  __m128i v179;
  __m128i v180;
  __m128i v181;
  __m128i v182;
  __m128i v183;
  __m128i v184;
  __m128i v185;
  __m128i v186;
  __m128i v187;
  __m128i v188;
  __m128i v189;
  __m128i v190;
  __m128i v191;
  __m128i v192;
  __m128i v193;
  __m128i v194;
  __m128i v195;
  __m128i v196;
  __m128i v197;
  __m128i v198;
  __m128i v199;
  __m128i v200;
  __m128i v201;
  __m128i v202;
  __m128i v203;
  __m128i v204;
  __m128i v205;
  __m128i v206;
  __m128i v207;
  __m128i v208;
  __m128i v209;
  __m128i v210;
  __m128i v211;
  __m128i v212;
  __m128i v213;
  __m128i v214;
  __m128i v215;
  __m128i v216;
  __m128i v217;
  __m128i v218;
  __m128i v219;
  __m128i v220;
  __m128i v221;
  __m128i v222;
  __m128i v223;
  __m128i v224;
  __m128i v225;
  __m128i v226;
  __m128i v227;
  __m128i v228;
  __m128i v229;
  __m128i v230;
  __m128i v231;
  __m128i v232;
  __m128i v233;
  __m128i v234;
  __m128i v235;
  __m128i v236;
  __m128i v237;
  __m128i v238;
  __m128i v239;
  __m128i v240;
  __m128i v241;
  __m128i v242;
  __m128i v243;
  __m128i v244;
  __m128i v245;
  __m128i v246;
  __m128i v247;
  __m128i v248;
  uint8_t *v249;
  uint8_t *v250;
  int v251;
  uint8_t *v252;
  int v253;
  char v254;
  typedef int _g4_t_v255;
  typedef __m128i _g4_t_v256;
  typedef __m128i _g4_t_v257;
  typedef uint8_t _g4_t_v258;
  typedef int _g4_t_v259;
  typedef uint8_t *_g4_t_v260;
  typedef int _g4_t_v261;
  typedef unsigned int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef uint8_t *_g4_t_v264;
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef uint8_t *_g4_t_v267;
  typedef int _g4_t_v268;
  typedef unsigned int _g4_t_v269;
  typedef uint8_t *_g4_t_v270;
  typedef unsigned int _g4_t_v271;
  typedef unsigned int _g4_t_v272;
  typedef unsigned int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef uint8_t *_g4_t_v275;
  typedef __m128i _g4_t_v276;
  typedef signed int _g4_t_v277;
  typedef unsigned int _g4_t_v278;
  typedef unsigned int _g4_t_v279;
  typedef uint8_t *_g4_t_v280;
  typedef __m128i _g4_t_v281;
  typedef __m128i _g4_t_v282;
  typedef uint8_t _g4_t_v283;
  typedef int _g4_t_v284;
  typedef signed int _g4_t_v285;
  typedef uint8_t *_g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef __m128i _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef signed int _g4_t_v292;
  typedef unsigned int _g4_t_v293;
  typedef uint8_t *_g4_t_v294;
  typedef unsigned int _g4_t_v295;
  typedef int _g4_t_v296;
  typedef __m128i _g4_t_v297;
  typedef __m128i _g4_t_v298;
  typedef __m128i _g4_t_v299;
  typedef __m128i _g4_t_v300;
  typedef int _g4_t_v301;
  typedef uint8_t *_g4_t_v302;
  typedef int _g4_t_v303;
  typedef uint8_t *_g4_t_v304;
  typedef uint8_t *_g4_t_v305;
  typedef size_t _g4_t_v306;
  typedef __m128i _g4_t_v307;
  typedef __m128i _g4_t_v308;
  typedef __m128i _g4_t_v309;
  typedef __m128i _g4_t_v310;
  typedef uint8_t *_g4_t_v311;
  typedef int _g4_t_v312;
  typedef int _g4_t_v313;
  typedef unsigned int _g4_t_v314;
  typedef __m128i _g4_t_v315;
  typedef uint8_t _g4_t_v316;
  typedef unsigned int _g4_t_v317;
  typedef __m128i _g4_t_v318;
  typedef __m128i _g4_t_v319;
  typedef __m128i _g4_t_v320;
  typedef __m128i _g4_t_v321;
  typedef __m128i _g4_t_v322;
  typedef uint8_t _g4_t_v323;
  typedef int _g4_t_v324;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v255)) > _g4_s0 ? (0u + sizeof(_g4_t_v255)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v256)) > _g4_s1 ? (32u + sizeof(_g4_t_v256)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v257)) > _g4_s2 ? (32u + sizeof(_g4_t_v257)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v258)) > _g4_s3 ? (60u + sizeof(_g4_t_v258)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v259)) > _g4_s4 ? (60u + sizeof(_g4_t_v259)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v260)) > _g4_s5 ? (68u + sizeof(_g4_t_v260)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v261)) > _g4_s6 ? (72u + sizeof(_g4_t_v261)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v262)) > _g4_s7 ? (76u + sizeof(_g4_t_v262)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v263)) > _g4_s8 ? (80u + sizeof(_g4_t_v263)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v264)) > _g4_s9 ? (80u + sizeof(_g4_t_v264)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v265)) > _g4_s10 ? (84u + sizeof(_g4_t_v265)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v266)) > _g4_s11 ? (84u + sizeof(_g4_t_v266)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v267)) > _g4_s12 ? (88u + sizeof(_g4_t_v267)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v268)) > _g4_s13 ? (88u + sizeof(_g4_t_v268)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v269)) > _g4_s14 ? (88u + sizeof(_g4_t_v269)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v270)) > _g4_s15 ? (92u + sizeof(_g4_t_v270)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v271)) > _g4_s16 ? (92u + sizeof(_g4_t_v271)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v272)) > _g4_s17 ? (92u + sizeof(_g4_t_v272)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v273)) > _g4_s18 ? (96u + sizeof(_g4_t_v273)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v274)) > _g4_s19 ? (96u + sizeof(_g4_t_v274)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v275)) > _g4_s20 ? (96u + sizeof(_g4_t_v275)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v276)) > _g4_s21 ? (96u + sizeof(_g4_t_v276)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v277)) > _g4_s22 ? (112u + sizeof(_g4_t_v277)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v278)) > _g4_s23 ? (112u + sizeof(_g4_t_v278)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v279)) > _g4_s24 ? (112u + sizeof(_g4_t_v279)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v280)) > _g4_s25 ? (112u + sizeof(_g4_t_v280)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v281)) > _g4_s26 ? (112u + sizeof(_g4_t_v281)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v282)) > _g4_s27 ? (112u + sizeof(_g4_t_v282)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v283)) > _g4_s28 ? (128u + sizeof(_g4_t_v283)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v284)) > _g4_s29 ? (128u + sizeof(_g4_t_v284)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v285)) > _g4_s30 ? (128u + sizeof(_g4_t_v285)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v286)) > _g4_s31 ? (128u + sizeof(_g4_t_v286)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v287)) > _g4_s32 ? (128u + sizeof(_g4_t_v287)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v288)) > _g4_s33 ? (128u + sizeof(_g4_t_v288)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v289)) > _g4_s34 ? (128u + sizeof(_g4_t_v289)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v290)) > _g4_s35 ? (144u + sizeof(_g4_t_v290)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v291)) > _g4_s36 ? (144u + sizeof(_g4_t_v291)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v292)) > _g4_s37 ? (144u + sizeof(_g4_t_v292)) : _g4_s37,
    _g4_s39 = (144u + sizeof(_g4_t_v293)) > _g4_s38 ? (144u + sizeof(_g4_t_v293)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v294)) > _g4_s39 ? (144u + sizeof(_g4_t_v294)) : _g4_s39,
    _g4_s41 = (144u + sizeof(_g4_t_v295)) > _g4_s40 ? (144u + sizeof(_g4_t_v295)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v296)) > _g4_s41 ? (144u + sizeof(_g4_t_v296)) : _g4_s41,
    _g4_s43 = (144u + sizeof(_g4_t_v297)) > _g4_s42 ? (144u + sizeof(_g4_t_v297)) : _g4_s42,
    _g4_s44 = (144u + sizeof(_g4_t_v298)) > _g4_s43 ? (144u + sizeof(_g4_t_v298)) : _g4_s43,
    _g4_s45 = (144u + sizeof(_g4_t_v299)) > _g4_s44 ? (144u + sizeof(_g4_t_v299)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v300)) > _g4_s45 ? (144u + sizeof(_g4_t_v300)) : _g4_s45,
    _g4_s47 = (160u + sizeof(_g4_t_v301)) > _g4_s46 ? (160u + sizeof(_g4_t_v301)) : _g4_s46,
    _g4_s48 = (160u + sizeof(_g4_t_v302)) > _g4_s47 ? (160u + sizeof(_g4_t_v302)) : _g4_s47,
    _g4_s49 = (160u + sizeof(_g4_t_v303)) > _g4_s48 ? (160u + sizeof(_g4_t_v303)) : _g4_s48,
    _g4_s50 = (160u + sizeof(_g4_t_v304)) > _g4_s49 ? (160u + sizeof(_g4_t_v304)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v305)) > _g4_s50 ? (160u + sizeof(_g4_t_v305)) : _g4_s50,
    _g4_s52 = (160u + sizeof(_g4_t_v306)) > _g4_s51 ? (160u + sizeof(_g4_t_v306)) : _g4_s51,
    _g4_s53 = (160u + sizeof(_g4_t_v307)) > _g4_s52 ? (160u + sizeof(_g4_t_v307)) : _g4_s52,
    _g4_s54 = (160u + sizeof(_g4_t_v308)) > _g4_s53 ? (160u + sizeof(_g4_t_v308)) : _g4_s53,
    _g4_s55 = (160u + sizeof(_g4_t_v309)) > _g4_s54 ? (160u + sizeof(_g4_t_v309)) : _g4_s54,
    _g4_s56 = (160u + sizeof(_g4_t_v310)) > _g4_s55 ? (160u + sizeof(_g4_t_v310)) : _g4_s55,
    _g4_s57 = (160u + sizeof(_g4_t_v311)) > _g4_s56 ? (160u + sizeof(_g4_t_v311)) : _g4_s56,
    _g4_s58 = (176u + sizeof(_g4_t_v312)) > _g4_s57 ? (176u + sizeof(_g4_t_v312)) : _g4_s57,
    _g4_s59 = (176u + sizeof(_g4_t_v313)) > _g4_s58 ? (176u + sizeof(_g4_t_v313)) : _g4_s58,
    _g4_s60 = (176u + sizeof(_g4_t_v314)) > _g4_s59 ? (176u + sizeof(_g4_t_v314)) : _g4_s59,
    _g4_s61 = (176u + sizeof(_g4_t_v315)) > _g4_s60 ? (176u + sizeof(_g4_t_v315)) : _g4_s60,
    _g4_s62 = (176u + sizeof(_g4_t_v316)) > _g4_s61 ? (176u + sizeof(_g4_t_v316)) : _g4_s61,
    _g4_s63 = (176u + sizeof(_g4_t_v317)) > _g4_s62 ? (176u + sizeof(_g4_t_v317)) : _g4_s62,
    _g4_s64 = (176u + sizeof(_g4_t_v318)) > _g4_s63 ? (176u + sizeof(_g4_t_v318)) : _g4_s63,
    _g4_s65 = (176u + sizeof(_g4_t_v319)) > _g4_s64 ? (176u + sizeof(_g4_t_v319)) : _g4_s64,
    _g4_s66 = (176u + sizeof(_g4_t_v320)) > _g4_s65 ? (176u + sizeof(_g4_t_v320)) : _g4_s65,
    _g4_s67 = (176u + sizeof(_g4_t_v321)) > _g4_s66 ? (176u + sizeof(_g4_t_v321)) : _g4_s66,
    _g4_s68 = (176u + sizeof(_g4_t_v322)) > _g4_s67 ? (176u + sizeof(_g4_t_v322)) : _g4_s67,
    _g4_s69 = (176u + sizeof(_g4_t_v323)) > _g4_s68 ? (176u + sizeof(_g4_t_v323)) : _g4_s68,
    _g4_s70 = (192u + sizeof(_g4_t_v324)) > _g4_s69 ? (192u + sizeof(_g4_t_v324)) : _g4_s69
  };
  alignas(16) uint8_t _g4_sf[_g4_s70];
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 0u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 32u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 32u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 60u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 60u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 68u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 72u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 76u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 80u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 80u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 84u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 84u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 88u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 88u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 88u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 92u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 92u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 92u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 96u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 96u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 96u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 96u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 112u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 112u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 112u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 112u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 112u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 112u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 128u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 128u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 128u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 128u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 128u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 128u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 128u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 144u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 144u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 144u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 144u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 144u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 144u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 144u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 144u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 144u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 144u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 144u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 160u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 160u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 160u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 160u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 160u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 160u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 160u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 160u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 160u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 160u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 160u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 176u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 176u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 176u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 176u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 176u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 176u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 176u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 176u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 176u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 176u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 176u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 176u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 192u);

  result = 33;
  v324 = 0;
  if ( a1 == nullptr )
    return result;
  v312 = *a1;
  v5 = *((uint8_t *)a2 + 18);
  if ( (uint8_t)(v5 - 1) > 6u )
  {
    v324 = 6;
    result = 6;
    goto LABEL_10;
  }
  v301 = *a3;
  v290 = a3[2];
  *((uint8_t *)a3 + 18) = 2;
  v6 = *a2;
  *a3 = *a2;
  a3[1] = a2[1];
  if ( a4 <= 0 )
  {
    v7 = a2[1];
    v8 = 0;
  }
  else
  {
    v7 = a2[1];
    v8 = a4 - v7 % a4;
    if ( v7 % a4 == 0 )
      v8 = 0;
  }
  v9 = v7 + v8;
  a3[2] = v9;
  if ( v9 <= 0 || (result = 6, v6 <= 0xFFFFFFFF / v9) )
  {
    v10 = v6 * v9;
    v11 = __builtin_abs(v290 * v301);
    if ( v11 < v10 )
    {
      a3[3] = (int)(uintptr_t)(ft_mem_qrealloc(v312, 1, v11, v10, a3[3], &v324));
      result = v324;
      if ( v324 != 0 )
        return result;
      v5 = *((uint8_t *)a2 + 18);
    }
    else
    {
      result = 0;
      v5 = *((uint8_t *)a2 + 18);
    }
LABEL_10:
    switch ( v5 )
    {
      case 1:
        v272 = a2[3];
        v269 = a3[3];
        *((uint16_t *)a3 + 8) = 2;
        v262 = *a2;
        if ( *a2 <= 0 )
          return v324;
        while ( 1 )
        {
          v127 = (uint8_t *)v269;
          v264 = (uint8_t *)v272;
          v128 = a2[1];
          v129 = v128 >> 3;
          if ( v128 >> 3 > 0 )
            break;
LABEL_65:
          v251 = v128 & 7;
          if ( v251 != 0 )
          {
            v252 = &v127[v251];
            v253 = *v264;
            do
            {
              v254 = v253;
              v253 *= 2;
              *v127++ = (v254 & 0x80) >> 7;
            }
            while ( v127 != v252 );
          }
          v272 += a2[2];
          v269 += a3[2];
          if ( --v262 == 0 )
            return v324;
        }
        v261 = a2[1] >> 3;
        v264 = (uint8_t *)(v129 + v272);
        v266 = 16 * (v129 >> 4);
        if ( v266 != 0 && (v272 > v269 + 8 * v129 || v269 > v129 + v272) && v129 > 0xF )
        {
          v260 = (uint8_t *)(v269 + 8 * v129);
          v130 = (__m128i *)v269;
          v131 = 0;
          do
          {
            v132 = v131++;
            v133 = _mm_unpacklo_epi8(*(__m128i *)(v272 + 16 * v132), g4_m128_from<__m128i>(0LL));
            v281 = *(__m128i *)(v272 + 16 * v132);
            v134 = _mm_unpackhi_epi8(v281, g4_m128_from<__m128i>(0LL));
            v307 = _mm_unpacklo_epi16(v133, g4_m128_from<__m128i>(0LL));
            v297 = _mm_unpackhi_epi16(v133, g4_m128_from<__m128i>(0LL));
            v318 = _mm_unpacklo_epi16(v134, g4_m128_from<__m128i>(0LL));
            v289 = _mm_unpackhi_epi16(v134, g4_m128_from<__m128i>(0LL));
            v135 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7C760)), 7u);
            v136 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7C760)), 7u);
            v137 = _mm_unpacklo_epi16(v136, v135);
            v138 = _mm_unpackhi_epi16(v136, v135);
            v139 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v137, v138), _mm_unpackhi_epi16(v137, v138));
            v140 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7C760)), 7u);
            v141 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7C760)), 7u);
            v142 = _mm_unpacklo_epi16(v141, v140);
            v143 = _mm_unpackhi_epi16(v141, v140);
            v144 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v142, v143), _mm_unpackhi_epi16(v142, v143));
            v145 = _mm_unpackhi_epi8(v139, v144);
            v146 = _mm_unpacklo_epi8(v139, v144);
            v147 = _mm_unpacklo_epi8(v146, v145);
            v148 = _mm_unpackhi_epi8(v146, v145);
            v149 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v147, v148), _mm_unpackhi_epi8(v147, v148));
            v150 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7CA20)), 6u);
            v151 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7CA20)), 6u);
            v152 = _mm_unpacklo_epi16(v151, v150);
            v153 = _mm_unpackhi_epi16(v151, v150);
            v154 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v152, v153), _mm_unpackhi_epi16(v152, v153));
            v155 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7CA20)), 6u);
            v156 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7CA20)), 6u);
            v157 = _mm_unpacklo_epi16(v156, v155);
            v158 = _mm_unpackhi_epi16(v156, v155);
            v159 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v157, v158), _mm_unpackhi_epi16(v157, v158));
            v160 = _mm_unpackhi_epi8(v154, v159);
            v161 = _mm_unpacklo_epi8(v154, v159);
            v162 = _mm_unpacklo_epi8(v161, v160);
            v163 = _mm_unpackhi_epi8(v161, v160);
            v164 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v162, v163), _mm_unpackhi_epi8(v162, v163));
            v165 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7CA30)), 5u);
            v166 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7CA30)), 5u);
            v167 = _mm_unpacklo_epi16(v166, v165);
            v168 = _mm_unpackhi_epi16(v166, v165);
            v169 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v167, v168), _mm_unpackhi_epi16(v167, v168));
            v170 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7CA30)), 5u);
            v171 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7CA30)), 5u);
            v172 = _mm_unpacklo_epi16(v171, v170);
            v173 = _mm_unpackhi_epi16(v171, v170);
            v174 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v172, v173), _mm_unpackhi_epi16(v172, v173));
            v175 = _mm_unpackhi_epi8(v169, v174);
            v176 = _mm_unpacklo_epi8(v169, v174);
            v177 = _mm_unpacklo_epi8(v176, v175);
            v178 = _mm_unpackhi_epi8(v176, v175);
            v179 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v177, v178), _mm_unpackhi_epi8(v177, v178));
            v180 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7C440)), 4u);
            v181 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7C440)), 4u);
            v182 = _mm_unpacklo_epi16(v181, v180);
            v183 = _mm_unpackhi_epi16(v181, v180);
            v184 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v182, v183), _mm_unpackhi_epi16(v182, v183));
            v185 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7C440)), 4u);
            v186 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7C440)), 4u);
            v187 = _mm_unpacklo_epi16(v186, v185);
            v188 = _mm_unpackhi_epi16(v186, v185);
            v189 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v187, v188), _mm_unpackhi_epi16(v187, v188));
            v190 = _mm_unpackhi_epi8(v184, v189);
            v191 = _mm_unpacklo_epi8(v184, v189);
            v192 = _mm_unpacklo_epi8(v191, v190);
            v193 = _mm_unpackhi_epi8(v191, v190);
            v194 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v192, v193), _mm_unpackhi_epi8(v192, v193));
            v195 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 3u);
            v196 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 3u);
            v197 = _mm_unpacklo_epi16(v196, v195);
            v198 = _mm_unpackhi_epi16(v196, v195);
            v199 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v197, v198), _mm_unpackhi_epi16(v197, v198));
            v200 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 3u);
            v201 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 3u);
            v202 = _mm_unpacklo_epi16(v201, v200);
            v203 = _mm_unpackhi_epi16(v201, v200);
            v204 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v202, v203), _mm_unpackhi_epi16(v202, v203));
            v205 = _mm_unpackhi_epi8(v199, v204);
            v206 = _mm_unpacklo_epi8(v199, v204);
            v207 = _mm_unpacklo_epi8(v206, v205);
            v208 = _mm_unpackhi_epi8(v206, v205);
            v209 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v207, v208), _mm_unpackhi_epi8(v207, v208));
            v210 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7C400)), 2u);
            v211 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7C400)), 2u);
            v212 = _mm_unpacklo_epi16(v211, v210);
            v213 = _mm_unpackhi_epi16(v211, v210);
            v214 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v212, v213), _mm_unpackhi_epi16(v212, v213));
            v215 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7C400)), 2u);
            v257 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7C400)), 2u);
            v216 = _mm_unpackhi_epi16(v215, v257);
            v217 = _mm_unpacklo_epi16(v215, v257);
            v218 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v217, v216), _mm_unpackhi_epi16(v217, v216));
            v276 = _mm_unpackhi_epi8(v214, v218);
            v219 = _mm_unpacklo_epi8(v214, v218);
            v220 = _mm_unpacklo_epi8(v219, v276);
            v221 = _mm_unpackhi_epi8(v219, v276);
            v222 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v220, v221), _mm_unpackhi_epi8(v220, v221));
            v223 = _mm_srai_epi32(_mm_and_si128(v307, G4_BITCAST<__m128i>(xmmword_1C7C750)), 1u);
            v298 = _mm_srai_epi32(_mm_and_si128(v297, G4_BITCAST<__m128i>(xmmword_1C7C750)), 1u);
            v224 = _mm_unpackhi_epi16(v223, v298);
            v225 = _mm_unpacklo_epi16(v223, v298);
            v226 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v225, v224), _mm_unpackhi_epi16(v225, v224));
            v319 = _mm_srai_epi32(_mm_and_si128(v318, G4_BITCAST<__m128i>(xmmword_1C7C750)), 1u);
            v299 = _mm_srai_epi32(_mm_and_si128(v289, G4_BITCAST<__m128i>(xmmword_1C7C750)), 1u);
            v308 = _mm_unpackhi_epi16(v319, v299);
            v320 = _mm_unpacklo_epi16(v319, v299);
            v321 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v320, v308), _mm_unpackhi_epi16(v320, v308));
            v227 = _mm_unpackhi_epi8(v226, v321);
            v228 = _mm_unpacklo_epi8(v226, v321);
            v309 = v227;
            v229 = _mm_unpackhi_epi8(v228, v227);
            v230 = _mm_unpacklo_epi8(v228, v309);
            v231 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v230, v229), _mm_unpackhi_epi8(v230, v229));
            v282 = _mm_and_si128(v281, G4_BITCAST<__m128i>(xmmword_1C7C990));
            v232 = _mm_unpacklo_epi8(v149, v209);
            v233 = _mm_unpackhi_epi8(v149, v209);
            v234 = v164;
            v235 = _mm_unpackhi_epi8(v164, v222);
            v236 = _mm_unpacklo_epi8(v234, v222);
            v237 = _mm_unpacklo_epi8(v179, v231);
            v238 = _mm_unpackhi_epi8(v179, v231);
            v322 = v236;
            v310 = v235;
            v239 = _mm_unpacklo_epi8(v232, v237);
            v240 = _mm_unpackhi_epi8(v232, v237);
            v241 = _mm_unpacklo_epi8(v194, v282);
            v300 = v239;
            v242 = _mm_unpackhi_epi8(v194, v282);
            v243 = _mm_unpacklo_epi8(v233, v238);
            v244 = _mm_unpackhi_epi8(v233, v238);
            v245 = _mm_unpacklo_epi8(v322, v241);
            v246 = _mm_unpackhi_epi8(v322, v241);
            v247 = _mm_unpacklo_epi8(v310, v242);
            v248 = _mm_unpackhi_epi8(v310, v242);
            *v130 = _mm_unpacklo_epi8(v300, v245);
            v130[1] = _mm_unpackhi_epi8(v300, v245);
            v130[2] = _mm_unpacklo_epi8(v240, v246);
            v130[4] = _mm_unpacklo_epi8(v243, v247);
            v130[3] = _mm_unpackhi_epi8(v240, v246);
            v130[5] = _mm_unpackhi_epi8(v243, v247);
            v130[6] = _mm_unpacklo_epi8(v244, v248);
            v130[7] = _mm_unpackhi_epi8(v244, v248);
            v130 += 8;
          }
          while ( v131 < v129 >> 4 );
          v129 -= v266;
          v127 = v260;
          v249 = (uint8_t *)(v269 + 8 * v266);
          if ( v261 == v266 )
          {
LABEL_64:
            v128 = a2[1];
            goto LABEL_65;
          }
          v311 = v260;
          v250 = (uint8_t *)(v266 + v272);
        }
        else
        {
          v249 = (uint8_t *)v269;
          v311 = (uint8_t *)(v269 + 8 * v129);
          v250 = (uint8_t *)v272;
        }
        do
        {
          --v129;
          v323 = *v250++;
          *v249 = v323 >> 7;
          v249[1] = (v323 & 0x40) >> 6;
          v249[2] = (v323 & 0x20) >> 5;
          v249[3] = (v323 & 0x10) >> 4;
          v249[4] = (v323 & 8) >> 3;
          v249[6] = (v323 & 2) >> 1;
          v249[5] = (v323 & 4) >> 2;
          v249[7] = v323 & 1;
          v249 += 8;
        }
        while ( (int)v129 > 0 );
        v127 = v311;
        goto LABEL_64;
      case 2:
      case 5:
      case 6:
        v124 = (char *)a3[3];
        v306 = a2[1];
        v288 = a3[2];
        v125 = (char *)a2[3];
        v296 = a2[2];
        *((uint16_t *)a3 + 8) = 256;
        if ( *a2 > 0 )
        {
          v317 = *a2;
          v126 = v125;
          do
          {
            memcpy(v124, v126, v306);
            v126 += v296;
            v124 += v288;
            --v317;
          }
          while ( v317 != 0 );
        }
        return v324;
      case 3:
        v54 = a2[3];
        *((uint16_t *)a3 + 8) = 4;
        v295 = v54;
        v55 = (uint8_t *)a3[3];
        v271 = *a2;
        if ( *a2 <= 0 )
          return v324;
        while ( 1 )
        {
          v280 = v55;
          v275 = (uint8_t *)v295;
          v56 = a2[1];
          v57 = v56 >> 2;
          if ( v56 >> 2 > 0 )
            break;
LABEL_45:
          v120 = v56 & 3;
          if ( v120 != 0 )
          {
            v121 = &v280[v120];
            v122 = v280;
            v123 = *v275;
            do
            {
              *v122++ = (v123 & 0xC0) >> 6;
              v123 *= 4;
            }
            while ( v122 != v121 );
          }
          v55 += a3[2];
          v295 += a2[2];
          if ( --v271 == 0 )
            return v324;
        }
        v268 = a2[1] >> 2;
        v275 = (uint8_t *)(v57 + v295);
        v280 = &v55[4 * v57];
        v287 = 16 * (v57 >> 4);
        if ( v287 != 0 && (v295 > (unsigned int)(uintptr_t)(&v55[4 * v57]) || v55 > v275) && v57 > 0xF )
        {
          v58 = 0;
          v59 = 0;
          do
          {
            v60 = _mm_unpacklo_epi8(*(__m128i *)(v295 + v58), g4_m128_from<__m128i>(0LL));
            v61 = _mm_unpacklo_epi16(v60, g4_m128_from<__m128i>(0LL));
            v62 = _mm_unpackhi_epi8(*(__m128i *)(v295 + v58), g4_m128_from<__m128i>(0LL));
            v63 = _mm_unpackhi_epi16(v60, g4_m128_from<__m128i>(0LL));
            v315 = _mm_unpackhi_epi16(v62, g4_m128_from<__m128i>(0LL));
            v64 = _mm_srai_epi32(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7CA40), v63), 6u);
            v65 = _mm_srai_epi32(_mm_and_si128(v61, G4_BITCAST<__m128i>(xmmword_1C7CA40)), 6u);
            v66 = _mm_unpacklo_epi16(v65, v64);
            v67 = _mm_unpackhi_epi16(v65, v64);
            v256 = _mm_unpacklo_epi16(v62, g4_m128_from<__m128i>(0LL));
            v68 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v66, v67), _mm_unpackhi_epi16(v66, v67));
            v69 = _mm_and_si128(*(__m128i *)(v295 + v58), G4_BITCAST<__m128i>(xmmword_1C7CA60));
            ++v59;
            v70 = _mm_srai_epi32(_mm_and_si128(v315, G4_BITCAST<__m128i>(xmmword_1C7CA40)), 6u);
            v71 = _mm_srai_epi32(_mm_and_si128(v256, G4_BITCAST<__m128i>(xmmword_1C7CA40)), 6u);
            v72 = _mm_unpacklo_epi16(v71, v70);
            v73 = _mm_unpackhi_epi16(v71, v70);
            v74 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v72, v73), _mm_unpackhi_epi16(v72, v73));
            v75 = _mm_unpackhi_epi8(v68, v74);
            v76 = _mm_unpacklo_epi8(v68, v74);
            v77 = _mm_unpacklo_epi8(v76, v75);
            v78 = _mm_unpackhi_epi8(v76, v75);
            v79 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v77, v78), _mm_unpackhi_epi8(v77, v78));
            v80 = _mm_srai_epi32(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7C410), v63), 4u);
            v81 = _mm_srai_epi32(_mm_and_si128(v61, G4_BITCAST<__m128i>(xmmword_1C7C410)), 4u);
            v82 = _mm_unpacklo_epi16(v81, v80);
            v83 = _mm_unpackhi_epi16(v81, v80);
            v84 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v82, v83), _mm_unpackhi_epi16(v82, v83));
            v85 = _mm_srai_epi32(_mm_and_si128(v315, G4_BITCAST<__m128i>(xmmword_1C7C410)), 4u);
            v86 = _mm_srai_epi32(_mm_and_si128(v256, G4_BITCAST<__m128i>(xmmword_1C7C410)), 4u);
            v87 = _mm_unpacklo_epi16(v86, v85);
            v88 = _mm_unpackhi_epi16(v86, v85);
            v89 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v87, v88), _mm_unpackhi_epi16(v87, v88));
            v90 = _mm_unpackhi_epi8(v84, v89);
            v91 = _mm_unpacklo_epi8(v84, v89);
            v92 = _mm_unpacklo_epi8(v91, v90);
            v93 = _mm_unpackhi_epi8(v91, v90);
            v94 = _mm_srai_epi32(_mm_and_si128(v63, G4_BITCAST<__m128i>(xmmword_1C7CA50)), 2u);
            v95 = _mm_unpackhi_epi8(v92, v93);
            v96 = _mm_unpacklo_epi8(v92, v93);
            v97 = _mm_srai_epi32(_mm_and_si128(v61, G4_BITCAST<__m128i>(xmmword_1C7CA50)), 2u);
            v98 = _mm_unpacklo_epi16(v97, v94);
            v99 = _mm_unpacklo_epi8(v96, v95);
            v100 = _mm_unpackhi_epi16(v97, v94);
            v101 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v98, v100), _mm_unpackhi_epi16(v98, v100));
            v102 = _mm_srai_epi32(_mm_and_si128(v315, G4_BITCAST<__m128i>(xmmword_1C7CA50)), 2u);
            v103 = _mm_srai_epi32(_mm_and_si128(v256, G4_BITCAST<__m128i>(xmmword_1C7CA50)), 2u);
            v104 = _mm_unpacklo_epi16(v103, v102);
            v105 = _mm_unpackhi_epi16(v103, v102);
            v106 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v104, v105), _mm_unpackhi_epi16(v104, v105));
            v107 = _mm_unpackhi_epi8(v101, v106);
            v108 = _mm_unpacklo_epi8(v101, v106);
            v109 = _mm_unpacklo_epi8(v108, v107);
            v110 = _mm_unpackhi_epi8(v108, v107);
            v111 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v109, v110), _mm_unpackhi_epi8(v109, v110));
            v112 = _mm_unpacklo_epi8(v79, v111);
            v113 = _mm_unpacklo_epi8(v99, v69);
            v114 = _mm_unpackhi_epi8(v99, v69);
            v115 = _mm_unpacklo_epi8(v112, v113);
            v116 = _mm_unpackhi_epi8(v112, v113);
            v117 = _mm_unpackhi_epi8(v79, v111);
            *(__m128i *)&v55[4 * v58] = v115;
            *(__m128i *)&v55[4 * v58 + 16] = v116;
            *(__m128i *)&v55[4 * v58 + 32] = _mm_unpacklo_epi8(v117, v114);
            *(__m128i *)&v55[4 * v58 + 48] = _mm_unpackhi_epi8(v117, v114);
            v58 += 16;
          }
          while ( v59 < v57 >> 4 );
          v57 -= v287;
          v118 = (uint8_t *)(v287 + v295);
          v119 = &v55[4 * v287];
          if ( v268 == v287 )
          {
LABEL_44:
            v56 = a2[1];
            goto LABEL_45;
          }
          v305 = v55;
        }
        else
        {
          v119 = v55;
          v118 = (uint8_t *)v295;
          v305 = v55;
        }
        do
        {
          --v57;
          v316 = *v118++;
          *v119 = v316 >> 6;
          v119[2] = (v316 & 0xC) >> 2;
          v119[1] = (v316 & 0x30) >> 4;
          v119[3] = v316 & 3;
          v119 += 4;
        }
        while ( (int)v57 > 0 );
        v55 = v305;
        goto LABEL_44;
      case 4:
        v24 = a2[3];
        *((uint16_t *)a3 + 8) = 16;
        v314 = v24;
        v25 = (uint8_t *)a3[3];
        v279 = *a2;
        if ( *a2 <= 0 )
          return v324;
        break;
      case 7:
        v267 = (uint8_t *)a2[3];
        v270 = (uint8_t *)a3[3];
        v265 = a2[2];
        v263 = a3[2];
        *((uint16_t *)a3 + 8) = 256;
        v273 = *a2;
        if ( *a2 > 0 )
        {
          do
          {
            v313 = a2[1];
            if ( v313 > 0 )
            {
              v302 = v270;
              v12 = v267;
              do
              {
                v14 = v12[3];
                v283 = v12[2];
                LOBYTE(v15) = 0;
                if ( v12[3] != 0 )
                {
                  v258 = v12[1];
                  v16 = FT_MulDiv(*v12, 0x10000, v14);
                  v255 = v258;
                  v259 = v16;
                  v291 = FT_MulDiv(v255, 0x10000, v14);
                  v284 = FT_MulDiv(v283, 0x10000, v14);
                  v17 = (unsigned int)(((int)((uint64_t)(v259 * (int64_t)v259) >> 32) >> 31) + 0x8000)
                      + v259 * (int64_t)v259;
                  v277 = (HIDWORD(v17) << 16) + WORD1(v17);
                  v18 = (unsigned int)(((int)((uint64_t)(v291 * (int64_t)v291) >> 32) >> 31) + 0x8000)
                      + v291 * (int64_t)v291;
                  v292 = (HIDWORD(v18) << 16) + WORD1(v18);
                  v19 = (unsigned int)(((int)((uint64_t)(v284 * (int64_t)v284) >> 32) >> 31) + 0x8000)
                      + v284 * (int64_t)v284;
                  v285 = (HIDWORD(v19) << 16) + WORD1(v19);
                  v20 = (unsigned int)(((int)((uint64_t)(4731LL * v277) >> 32) >> 31) + 0x8000) + 4731LL * v277;
                  v278 = (HIDWORD(v20) << 16) + WORD1(v20);
                  v21 = (unsigned int)(((int)((uint64_t)(46871LL * v292) >> 32) >> 31) + 0x8000)
                      + 46871LL * v292;
                  v293 = (HIDWORD(v21) << 16) + WORD1(v21);
                  v22 = (unsigned int)(((int)((uint64_t)(13933LL * v285) >> 32) >> 31) + 0x8000)
                      + 13933LL * v285;
                  v23 = (v14 << 8) * (int64_t)(int)(0xFFFF - (v278 + (HIDWORD(v22) << 16) + WORD1(v22) + v293));
                  v15 = (unsigned int)((((uint64_t)(unsigned int)((SHIDWORD(v23) >> 31) + 0x8000) + v23) >> 32 << 16)
                                     + ((unsigned int)((SHIDWORD(v23) >> 31) + 0x8000 + v23) >> 16)) >> 8;
                }
                v12 += 4;
                *v302 = v15;
                v13 = v313-- == 1;
                ++v302;
              }
              while ( !v13 );
            }
            v267 += v265;
            v270 += v263;
            --v273;
          }
          while ( v273 != 0 );
        }
        return v324;
      default:
        return result;
    }
    while ( 1 )
    {
      v286 = v25;
      v294 = (uint8_t *)v314;
      v26 = a2[1];
      v27 = v26 >> 1;
      if ( v26 >> 1 > 0 )
        break;
LABEL_30:
      if ( (v26 & 1) != 0 )
        *v286 = *v294 >> 4;
      v25 += a3[2];
      v314 += a2[2];
      if ( --v279 == 0 )
        return v324;
    }
    v274 = a2[1] >> 1;
    v294 = (uint8_t *)(v27 + v314);
    v286 = &v25[2 * v27];
    v303 = 16 * (v27 >> 4);
    if ( v303 != 0 && (v314 > (unsigned int)(uintptr_t)(&v25[2 * v27]) || v25 > v294) && v27 > 0xF )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        v30 = *(__m128i *)(v314 + v28);
        v31 = _mm_unpackhi_epi8(v30, g4_m128_from<__m128i>(0LL));
        v32 = _mm_unpacklo_epi8(v30, g4_m128_from<__m128i>(0LL));
        v33 = _mm_srai_epi32(_mm_and_si128(_mm_unpackhi_epi16(v32, g4_m128_from<__m128i>(0LL)), G4_BITCAST<__m128i>(xmmword_1C7CA70)), 4u);
        v34 = _mm_and_si128(v30, G4_BITCAST<__m128i>(xmmword_1C7CA80));
        v35 = _mm_srai_epi32(_mm_and_si128(_mm_unpacklo_epi16(v32, g4_m128_from<__m128i>(0LL)), G4_BITCAST<__m128i>(xmmword_1C7CA70)), 4u);
        v36 = _mm_unpacklo_epi16(v35, v33);
        v37 = _mm_unpackhi_epi16(v35, v33);
        v38 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v36, v37), _mm_unpackhi_epi16(v36, v37));
        v39 = _mm_unpacklo_epi16(v31, g4_m128_from<__m128i>(0LL));
        v40 = _mm_srai_epi32(_mm_and_si128(_mm_unpackhi_epi16(v31, g4_m128_from<__m128i>(0LL)), G4_BITCAST<__m128i>(xmmword_1C7CA70)), 4u);
        v41 = _mm_srai_epi32(_mm_and_si128(v39, G4_BITCAST<__m128i>(xmmword_1C7CA70)), 4u);
        v42 = _mm_unpacklo_epi16(v41, v40);
        v43 = _mm_unpackhi_epi16(v41, v40);
        v44 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v42, v43), _mm_unpackhi_epi16(v42, v43));
        v45 = _mm_unpackhi_epi8(v38, v44);
        v46 = _mm_unpacklo_epi8(v38, v44);
        v47 = _mm_unpacklo_epi8(v46, v45);
        v48 = _mm_unpackhi_epi8(v46, v45);
        v49 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v47, v48), _mm_unpackhi_epi8(v47, v48));
        ++v29;
        *(__m128i *)&v25[2 * v28] = _mm_unpacklo_epi8(v49, v34);
        *(__m128i *)&v25[2 * v28 + 16] = _mm_unpackhi_epi8(v49, v34);
        v28 += 16;
      }
      while ( v27 >> 4 > v29 );
      v27 -= v303;
      v50 = (char *)(v303 + v314);
      v51 = &v25[2 * v303];
      if ( v274 == v303 )
      {
LABEL_29:
        v26 = a2[1];
        goto LABEL_30;
      }
      v304 = v25;
    }
    else
    {
      v51 = v25;
      v50 = (char *)v314;
      v304 = v25;
    }
    do
    {
      v52 = *v50;
      --v27;
      v53 = *v50++;
      *v51 = (v53 & 0xF0) >> 4;
      v51[1] = v52 & 0xF;
      v51 += 2;
    }
    while ( (int)v27 > 0 );
    v25 = v304;
    goto LABEL_29;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_GlyphSlot_Own_Bitmap  (binary VA: 0x11b85b0)
// Original: FT_GlyphSlot_Own_Bitmap
// ----------------------------------------------------------------------------
int FT_GlyphSlot_Own_Bitmap(int a1)
{
  int result;
  uint32_t v2[6];

  result = 0;
  if ( a1 != 0 && *(uint32_t *)(a1 + 72) == 1651078259 && (*(uint8_t *)(*(uint32_t *)(a1 + 156) + 4) & 1) == 0 )
  {
    FT_Bitmap_New(v2);
    result = FT_Bitmap_Copy(*(int **)a1, a1 + 76, v2);
    if ( result == 0 )
    {
      std::memcpy((void *)(a1 + 76), v2, 24);
      *(uint32_t *)(*(uint32_t *)(a1 + 156) + 4) |= 1u;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Bitmap_Done  (binary VA: 0x11b8660)
// Original: FT_Bitmap_Done
// ----------------------------------------------------------------------------
int FT_Bitmap_Done(int *a1, int *a2)
{
  int v2;

  v2 = 33;
  if ( a1 != nullptr )
  {
    LOWORD(v2) = 6;
    if ( a2 != nullptr )
    {
      ft_mem_free(*a1, a2[3]);
      memset(a2, 0, 4 * v2);
      LOWORD(v2) = 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Bitmap_Embolden  (binary VA: 0x11b86d0)
// Original: FT_Bitmap_Embolden
// ----------------------------------------------------------------------------
char FT_Bitmap_Embolden(int *a1, int a2, int a3, int a4)
{
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  signed int v10;
  int v11;
  char *v12;
  char *v13;
  char *v14;
  int v15;
  unsigned int v16;
  size_t v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  uint8_t v24;
  int v25;
  int v26;
  char v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  char *v36;
  char *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef signed int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint8_t _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef size_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef uint8_t _g4_t_v69;
  typedef uint8_t _g4_t_v70;
  typedef signed int _g4_t_v71;
  typedef uint8_t _g4_t_v72;
  typedef char _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v44)) > _g4_s1 ? (8u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v45)) > _g4_s2 ? (8u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v46)) > _g4_s3 ? (8u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v47)) > _g4_s4 ? (8u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v48)) > _g4_s5 ? (12u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v49)) > _g4_s6 ? (16u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v50)) > _g4_s7 ? (24u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v51)) > _g4_s8 ? (28u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v52)) > _g4_s9 ? (32u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v53)) > _g4_s10 ? (36u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v54)) > _g4_s11 ? (36u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v55)) > _g4_s12 ? (40u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v56)) > _g4_s13 ? (40u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v57)) > _g4_s14 ? (40u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v58)) > _g4_s15 ? (44u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v59)) > _g4_s16 ? (48u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v60)) > _g4_s17 ? (48u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v61)) > _g4_s18 ? (48u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v62)) > _g4_s19 ? (52u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v63)) > _g4_s20 ? (52u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v64)) > _g4_s21 ? (52u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v65)) > _g4_s22 ? (52u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v66)) > _g4_s23 ? (52u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v67)) > _g4_s24 ? (56u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v68)) > _g4_s25 ? (56u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v69)) > _g4_s26 ? (56u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v70)) > _g4_s27 ? (56u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v71)) > _g4_s28 ? (60u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v72)) > _g4_s29 ? (60u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v73)) > _g4_s30 ? (60u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v74)) > _g4_s31 ? (60u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v75)) > _g4_s32 ? (60u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (68u + sizeof(_g4_t_v76)) > _g4_s33 ? (68u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (72u + sizeof(_g4_t_v77)) > _g4_s34 ? (72u + sizeof(_g4_t_v77)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);

  LOBYTE(v4) = 33;
  if ( a1 != nullptr )
  {
    LOBYTE(v4) = 6;
    if ( a2 != 0 && *(uint32_t *)(a2 + 12) != 0 )
    {
      v58 = (a3 + 32) >> 6;
      v50 = (a4 + 32) >> 6;
      LOBYTE(v4) = 0;
      if ( (v58 | v50) != 0 )
      {
        if ( v50 < 0 || v58 < 0 )
        {
          LOBYTE(v4) = 6;
        }
        else
        {
          LOBYTE(v5) = *(uint8_t *)(a2 + 18);
          switch ( (char)v5 )
          {
            case 1:
              if ( v58 <= 8 )
              {
                v59 = *a1;
                v67 = (a3 + 32) >> 6;
              }
              else
              {
                v67 = 8;
                v59 = *a1;
                v58 = 8;
              }
              v55 = *(uint32_t *)(a2 + 4);
              v6 = *(uint32_t *)a2;
              v7 = *(uint32_t *)(a2 + 8);
              v53 = *(uint32_t *)a2;
              v71 = __builtin_abs(v7);
LABEL_35:
              v9 = 1;
              v10 = (unsigned int)(v55 + v67 + 7) >> 3;
              goto LABEL_18;
            case 3:
            case 4:
              if ( (uint8_t)v5 == 3 )
              {
                v33 = *(uint32_t *)(a2 + 4) + v58;
                v34 = v33 + 6;
                v35 = v33 + 3;
                if ( v35 >= 0 )
                  v34 = v35;
                v15 = v34 >> 2;
              }
              else
              {
                v15 = (*(uint32_t *)(a2 + 4) + v58 + 1) / 2;
              }
              FT_Bitmap_New(v77);
              v4 = FT_Bitmap_Convert(a1, (int *)a2, v77, v15);
              if ( v4 != 0 )
                return v4;
              FT_Bitmap_Done(a1, (int *)a2);
              *(uint32_t *)a2 = v77[0];
              *(uint32_t *)(a2 + 4) = v77[1];
              *(uint32_t *)(a2 + 8) = v77[2];
              *(uint32_t *)(a2 + 12) = v77[3];
              v16 = v77[4];
              *(uint32_t *)(a2 + 16) = v77[4];
              *(uint32_t *)(a2 + 20) = v77[5];
              v67 = (a3 + 32) >> 6;
              v5 = HIWORD(v16);
              goto LABEL_11;
            case 5:
              v8 = 3 * v58;
              v58 *= 3;
              goto LABEL_16;
            case 6:
              v50 *= 3;
              v8 = (a3 + 32) >> 6;
LABEL_16:
              v67 = v8;
              v59 = *a1;
              v55 = *(uint32_t *)(a2 + 4);
              v6 = *(uint32_t *)a2;
              v7 = *(uint32_t *)(a2 + 8);
              v53 = *(uint32_t *)a2;
              v71 = __builtin_abs(v7);
LABEL_17:
              v9 = 8;
              v10 = v58 + v55;
LABEL_18:
              if ( v71 >= v10 && v50 == 0 )
              {
                v11 = v9 * (v67 + v55);
                if ( 8 * v71 <= v11 )
                {
                  v68 = *(char **)(a2 + 12);
                }
                else
                {
                  v68 = *(char **)(a2 + 12);
                  v62 = 0xFF00u >> (v11 & 7);
                  v60 = v11 & 7;
                  if ( v6 > 0 )
                  {
                    v12 = &v68[v11 >> 3];
                    v13 = &v68[v71];
                    v14 = v12 + 1;
                    if ( v60 != 0 )
                    {
                      do
                      {
                        *(v14 - 1) &= v62;
                        if ( v14 < v13 )
                        {
                          v43 = v6;
                          memset(v14, 0, v13 - v14);
                          v6 = v43;
                        }
                        v13 += v71;
                        v14 += v71;
                        --v6;
                      }
                      while ( v6 != 0 );
                    }
                    else
                    {
                      v36 = v12;
                      do
                      {
                        if ( v13 > v36 )
                        {
                          v46 = v6;
                          memset(v36, 0, v13 - v36);
                          v6 = v46;
                        }
                        v36 += v71;
                        v13 += v71;
                        --v6;
                      }
                      while ( v6 != 0 );
                    }
                    v7 = *(uint32_t *)(a2 + 8);
                    v68 = *(char **)(a2 + 12);
                    v53 = *(uint32_t *)a2;
                  }
                }
                goto LABEL_45;
              }
              v44 = v9;
              v68 = (char *)ft_mem_qrealloc(v59, v50 + v6, 0, v10, 0, &v76);
              LOBYTE(v4) = v76;
              if ( v76 != 0 )
                return v4;
              if ( *(int *)(a2 + 8) > 0 )
              {
                v17 = (unsigned int)(v44 * v55 + 7) >> 3;
                if ( *(int *)a2 <= 0 )
                  goto LABEL_42;
                v56 = v10;
                v63 = &v68[v10 * v50];
                v18 = 0;
                v19 = 0;
                v20 = a2;
                do
                {
                  v45 = v17;
                  ++v18;
                  memcpy(v63, (const void *)(v19 + *(uint32_t *)(v20 + 12)), v17);
                  v63 += v56;
                  v20 = a2;
                  v19 += v71;
                  v17 = v45;
                }
                while ( v18 < *(uint32_t *)a2 );
                goto LABEL_41;
              }
              v66 = (unsigned int)(v44 * v55 + 7) >> 3;
              if ( *(int *)a2 > 0 )
              {
                v56 = v10;
                v37 = v68;
                v38 = 0;
                v39 = 0;
                v40 = a2;
                do
                {
                  v47 = v39;
                  memcpy(v37, (const void *)(v38 + *(uint32_t *)(v40 + 12)), v66);
                  v40 = a2;
                  v39 = v47 + 1;
                  v38 += v71;
                  v37 += v56;
                }
                while ( v47 + 1 < *(uint32_t *)a2 );
LABEL_41:
                v10 = v56;
              }
LABEL_42:
              ft_mem_free(v59, *(uint32_t *)(a2 + 12));
              v21 = *(uint32_t *)(a2 + 8);
              *(uint32_t *)(a2 + 12) = (uint32_t)(uintptr_t)(v68);
              if ( v21 < 0 )
                v10 = -v10;
              v53 = *(uint32_t *)a2;
              *(uint32_t *)(a2 + 8) = v10;
              v7 = v10;
LABEL_45:
              if ( v7 <= 0 )
              {
                v49 = -v7;
                v22 = (unsigned int)(uintptr_t)(&v68[-v7 * (v53 - 1)]);
              }
              else
              {
                v49 = v7;
                v22 = (unsigned int)(uintptr_t)(&v68[v7 * v50]);
              }
              if ( v53 > 0 )
              {
                v48 = 0;
                v51 = 16 * (v49 >> 4);
                while ( 1 )
                {
                  if ( v49 != 0 )
                  {
                    v23 = v22 + v49;
                    v54 = v49 - 2;
                    v57 = v22;
                    do
                    {
                      v24 = *(uint8_t *)(v23 - 1);
                      if ( v58 != 0 )
                      {
                        if ( v54 == -1 )
                        {
                          v41 = -1;
                          v75 = 1;
                          while ( 1 )
                          {
                            if ( *(uint8_t *)(a2 + 18) == 1 )
                            {
                              *(uint8_t *)(v23 - 1) |= (int)v24 >> v75;
                            }
                            else
                            {
                              if ( v41 < 0 )
                                goto LABEL_60;
                              v64 = *(uint16_t *)(a2 + 16);
                              v70 = *(uint8_t *)(v23 - 1);
                              v61 = *(uint8_t *)(v57 + v41);
                              if ( v64 <= v70 + v61 )
                                goto LABEL_78;
                              *(uint8_t *)(v23 - 1) = v70 + v61;
                              if ( (uint8_t)(v70 + v61) == *(int16_t *)(a2 + 16) - 1 )
                                goto LABEL_60;
                            }
                            ++v75;
                            --v41;
                            if ( v58 < v75 )
                              goto LABEL_60;
                          }
                        }
                        v25 = v54;
                        v26 = 1;
                        v52 = v24;
                        while ( 1 )
                        {
                          while ( *(uint8_t *)(a2 + 18) == 1 )
                          {
                            --v25;
                            v73 = (v52 >> v26) | *(uint8_t *)(v23 - 1);
                            v27 = 8 - v26++;
                            *(uint8_t *)(v23 - 1) = (*(uint8_t *)(v23 - 2) << v27) | v73;
                            if ( v58 < v26 )
                              goto LABEL_60;
                          }
                          if ( v25 < 0 )
                            goto LABEL_60;
                          v72 = *(uint8_t *)(v23 - 1);
                          v64 = *(uint16_t *)(a2 + 16);
                          v69 = *(uint8_t *)(v57 + v25);
                          if ( v64 <= v72 + v69 )
                            break;
                          *(uint8_t *)(v23 - 1) = v72 + v69;
                          if ( (uint8_t)(v72 + v69) != *(int16_t *)(a2 + 16) - 1 )
                          {
                            ++v26;
                            --v25;
                            if ( v58 >= v26 )
                              continue;
                          }
                          goto LABEL_60;
                        }
LABEL_78:
                        *(uint8_t *)(v23 - 1) = v64 - 1;
                      }
LABEL_60:
                      --v54;
                      --v23;
                    }
                    while ( v54 != -2 );
                    v22 = v57;
                    v7 = *(uint32_t *)(a2 + 8);
                  }
                  if ( v50 != 0 )
                    break;
LABEL_75:
                  v22 += v7;
                  if ( *(uint32_t *)a2 <= ++v48 )
                  {
                    v53 = *(uint32_t *)a2;
                    goto LABEL_77;
                  }
                }
                v74 = 1;
                v65 = v22 + 16;
                while ( 1 )
                {
                  v28 = v22 - v7 * v74;
                  if ( v49 != 0 )
                    break;
LABEL_74:
                  if ( ++v74 > v50 )
                    goto LABEL_75;
                }
                if ( v51 != 0 && (v22 > v28 + 16 || v28 > v65) && v49 > 0xF )
                {
                  v29 = 0;
                  v30 = 0;
                  do
                  {
                    ++v30;
                    *(__m128i *)(v28 + v29) = _mm_or_si128(*(__m128i *)(v22 + v29), *(__m128i *)(v28 + v29));
                    v29 += 16;
                  }
                  while ( v49 >> 4 > v30 );
                  v31 = 16 * (v49 >> 4);
                  if ( v51 == v49 )
                  {
LABEL_73:
                    v7 = *(uint32_t *)(a2 + 8);
                    goto LABEL_74;
                  }
                  v32 = v22;
                }
                else
                {
                  v31 = 0;
                  v32 = v22;
                }
                do
                {
                  *(uint8_t *)(v28 + v31) |= *(uint8_t *)(v32 + v31);
                  ++v31;
                }
                while ( (int)v49 > v31 );
                v22 = v32;
                goto LABEL_73;
              }
LABEL_77:
              *(uint32_t *)a2 = v50 + v53;
              *(uint32_t *)(a2 + 4) += v58;
              LOBYTE(v4) = 0;
              break;
            case 7:
              LOBYTE(v4) = 0;
              return v4;
            default:
              v67 = (a3 + 32) >> 6;
LABEL_11:
              v59 = *a1;
              v55 = *(uint32_t *)(a2 + 4);
              v6 = *(uint32_t *)a2;
              v7 = *(uint32_t *)(a2 + 8);
              v71 = __builtin_abs(v7);
              switch ( (char)v5 )
              {
                case 1:
                  v53 = *(uint32_t *)a2;
                  goto LABEL_35;
                case 2:
                case 5:
                case 6:
                  v53 = *(uint32_t *)a2;
                  goto LABEL_17;
                case 3:
                  v53 = *(uint32_t *)a2;
                  v9 = 2;
                  v10 = (unsigned int)(v58 + v55 + 3) >> 2;
                  goto LABEL_18;
                case 4:
                  v53 = *(uint32_t *)a2;
                  v9 = 4;
                  v10 = (unsigned int)(v58 + v55 + 1) >> 1;
                  goto LABEL_18;
                default:
                  LOBYTE(v4) = 18;
                  break;
              }
              return v4;
          }
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: FT_Add_Default_Modules  (binary VA: 0x11b8f80)
// Original: FT_Add_Default_Modules
// ----------------------------------------------------------------------------
int * FT_Add_Default_Modules(int *a1)
{
  int **v1;
  int *result;

  v1 = (int **)&off_2091BA0;
  result = (int *)&autofit_module_class;
  do
  {
    ++v1;
    FT_Add_Module(a1, result);
    result = *v1;
  }
  while ( *v1 != nullptr );
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Init_FreeType  (binary VA: 0x11b8fd0)
// Original: FT_Init_FreeType
// ----------------------------------------------------------------------------
int FT_Init_FreeType(int **a1)
{
  void *v1;
  int result;
  int v3;
  int v4;

  v1 = (void *)FT_New_Memory();
  result = 7;
  if ( v1 != nullptr )
  {
    v3 = FT_New_Library((int)(uintptr_t)(v1), a1);
    if ( v3 != 0 )
    {
      v4 = v3;
      FT_Done_Memory(v1);
      return v4;
    }
    else
    {
      FT_Add_Default_Modules(*a1);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Done_FreeType  (binary VA: 0x11b9050)
// Original: FT_Done_FreeType
// ----------------------------------------------------------------------------
int FT_Done_FreeType(int *a1)
{
  void *v1;

  if ( a1 != nullptr )
  {
    v1 = (void *)*a1;
    FT_Done_Library(a1);
    FT_Done_Memory(v1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ft_set_file_callback  (binary VA: 0x11b91f0)
// Original: ft_set_file_callback
// ----------------------------------------------------------------------------
void * ft_set_file_callback(void *a1, void *a2, void *a3, void *a4, void *a5)
{
  off_20C45E0 = (uint32_t)(uintptr_t)(a1);
  off_20C45F0 = (uint32_t)(uintptr_t)(a2);
  off_20C4600 = (uint32_t)(uintptr_t)(a3);
  off_20C4610 = (uint32_t)(uintptr_t)(a4);
  off_20C4620 = (uint32_t)(uintptr_t)(a5);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_Open  (binary VA: 0x11b9230)
// Original: FT_Stream_Open
// ----------------------------------------------------------------------------
int FT_Stream_Open(uint32_t *a1, char *filename)
{
  int result;
  FILE *v3;
  int v4;

  result = 40;
  if ( a1 != nullptr )
  {
    a1[3] = 0;
    a1[4] = (uint32_t)(uintptr_t)(filename);
    *a1 = 0;
    a1[2] = 0;
    a1[5] = 0;
    a1[6] = 0;
    v3 = ((FILE *(*)(const char *, const char *))off_20C45E0)(filename, "rb");
    result = 1;
    if ( v3 != nullptr )
    {
      ((void (*)(FILE *, int, int))off_20C4610)(v3, 0, 2);
      v4 = ((int (*)(FILE *))off_20C4620)(v3);
      a1[1] = v4;
      if ( v4 != 0 )
      {
        ((void (*)(FILE *, int, int))off_20C4610)(v3, 0, 0);
        a1[3] = (uint32_t)(uintptr_t)(v3);
        a1[5] = (uint32_t)(uintptr_t)(sub_11B90E0);
        a1[6] = (uint32_t)(uintptr_t)(sub_11B9090);
        return 0;
      }
      else
      {
        ((void (*)(FILE *))off_20C45F0)(v3);
        return 81;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_New_Memory  (binary VA: 0x11b9320)
// Original: FT_New_Memory
// ----------------------------------------------------------------------------
uint32_t * FT_New_Memory()
{
  uint32_t *result;

  result = (uint32_t *)(malloc(0x10u));
  if ( result != nullptr )
  {
    *result = 0;
    result[1] = (uint32_t)(uintptr_t)(sub_11B9190);
    result[3] = (uint32_t)(uintptr_t)(sub_11B91C0);
    result[2] = (uint32_t)(uintptr_t)(sub_11B9160);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Done_Memory  (binary VA: 0x11b9370)
// Original: FT_Done_Memory
// ----------------------------------------------------------------------------
void FT_Done_Memory(void *ptr)
{
  free(ptr);
}

// ----------------------------------------------------------------------------
// Function: ps_hints_apply  (binary VA: 0x11cec70)
// Original: ps_hints_apply
// ----------------------------------------------------------------------------
int ps_hints_apply(uint32_t *a1, int16_t *a2, int a3, int a4)
{
  int16_t v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int i;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  char v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  unsigned int v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  int v33;
  uint32_t *v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  uint32_t *v46;
  uint32_t *j;
  unsigned int v48;
  unsigned int v49;
  int v50;
  int v51;
  uint8_t *v52;
  int v53;
  int v54;
  bool v55;
  int **v56;
  int *v57;
  int v58;
  int v59;
  uint32_t *v60;
  unsigned int v61;
  int v62;
  uint32_t *v63;
  int v64;
  int v65;
  int **v66;
  int *v67;
  int v68;
  int v69;
  int v70;
  int64_t v71; // rax
  int v72;
  signed int v73;
  signed int v74;
  int v75;
  uint32_t *v76;
  uint32_t *v77;
  uint32_t *v78;
  uint32_t *v79;
  uint32_t *v80;
  uint32_t *v81;
  uint32_t *v82;
  int v83;
  uint32_t *v84;
  int v85;
  uint32_t *v86;
  uint32_t *v87;
  unsigned int *v88;
  unsigned int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  uint32_t *v94;
  int v95;
  int v96;
  int64_t v97; // rax
  int v98;
  int v99;
  uint32_t *v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  int v112;
  int v113;
  int v114;
  int64_t v115; // rax
  int v116;
  int v117;
  int64_t v118; // rax
  int v119;
  int v120;
  int v121;
  unsigned int v122;
  int v123;
  unsigned int v124;
  int64_t v125; // rax
  int64_t v126; // rax
  int v127;
  unsigned int v128;
  unsigned int v129;
  char *v130;
  unsigned int v131;
  int v132;
  char *ii;
  unsigned int v134;
  char v135;
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
  int64_t v146; // rax
  int64_t v147; // rax
  int64_t v148; // rax
  int v149;
  int v150;
  int v151;
  int64_t v152; // rax
  unsigned int v153;
  int *k;
  int64_t v155; // rax
  unsigned int v156;
  int v157;
  int64_t v158; // rax
  unsigned int v159;
  int *m;
  int64_t v161; // rax
  unsigned int v162;
  int v163;
  int v164;
  int v165;
  unsigned int v166;
  int *mm;
  unsigned int v168;
  int v169;
  int nn;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  uint8_t *v176;
  int v177;
  int v178;
  uint32_t *v179;
  int v180;
  uint32_t *v181;
  uint32_t *v182;
  uint32_t **v183;
  int v184;
  int *v185;
  int n;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  uint8_t *v192;
  int v193;
  int64_t v194; // rax
  unsigned int v195;
  int *jj;
  int64_t v197; // rax
  unsigned int v198;
  int v199;
  int64_t v200; // rax
  unsigned int v201;
  int *kk;
  int64_t v203; // rax
  unsigned int v204;
  int v205;
  int v206;
  int64_t v207; // rax
  int v208;
  int v209;
  int v210;
  int v211;
  uint32_t *v212;
  int v213;
  uint32_t *v214;
  uint32_t *v215;
  uint32_t **v216;
  uint32_t *v217;
  uint32_t *v218;
  unsigned int v219;
  unsigned int v220;
  int v221;
  int v222;
  uint8_t *v223;
  int *v224;
  int v225;
  int v226;
  int **v227;
  int *v228;
  int v229;
  int v230;
  unsigned int v231;
  int v232;
  uint32_t *v233;
  int v234;
  int v235;
  int **v236;
  int *v237;
  int v238;
  int v239;
  char v240;
  char v241;
  int v242;
  uint32_t *v243;
  int v244;
  int v245;
  int v246;
  uint32_t *v247;
  int v248;
  typedef unsigned int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef uint32_t *_g4_t_v252;
  typedef unsigned int _g4_t_v253;
  typedef int *_g4_t_v254;
  typedef char _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int *_g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef unsigned int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int *_g4_t_v272;
  typedef int _g4_t_v273;
  typedef unsigned int _g4_t_v274;
  typedef int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef int _g4_t_v277;
  typedef int _g4_t_v278;
  typedef char _g4_t_v279;
  typedef int _g4_t_v280;
  typedef unsigned int _g4_t_v281;
  typedef int *_g4_t_v282;
  typedef unsigned int *_g4_t_v283;
  typedef int _g4_t_v284;
  typedef int *_g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef unsigned int _g4_t_v291;
  typedef unsigned int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef int _g4_t_v294;
  typedef uint32_t *_g4_t_v295;
  typedef int _g4_t_v296;
  typedef int _g4_t_v297;
  typedef int _g4_t_v298;
  typedef int _g4_t_v299;
  typedef int _g4_t_v300;
  typedef int _g4_t_v301;
  typedef int _g4_t_v302;
  typedef unsigned int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef uint32_t *_g4_t_v305;
  typedef int _g4_t_v306;
  typedef int *_g4_t_v307;
  typedef int _g4_t_v308;
  typedef int _g4_t_v309;
  typedef int _g4_t_v310;
  typedef int _g4_t_v311;
  typedef unsigned int _g4_t_v312;
  typedef int _g4_t_v313;
  typedef unsigned int _g4_t_v314;
  typedef int _g4_t_v315;
  typedef unsigned int _g4_t_v316;
  typedef int _g4_t_v317;
  typedef int _g4_t_v318;
  typedef int _g4_t_v319;
  typedef int _g4_t_v320;
  typedef int _g4_t_v321;
  typedef int _g4_t_v322;
  typedef int _g4_t_v323;
  typedef uint32_t *_g4_t_v324;
  typedef unsigned int _g4_t_v325;
  typedef int _g4_t_v326;
  typedef unsigned int _g4_t_v327;
  typedef unsigned int _g4_t_v328;
  typedef int _g4_t_v329;
  typedef int _g4_t_v330;
  typedef int _g4_t_v331;
  typedef uint32_t *_g4_t_v332;
  typedef int _g4_t_v333;
  typedef uint32_t *_g4_t_v334;
  typedef int _g4_t_v335;
  typedef int _g4_t_v336;
  typedef unsigned int _g4_t_v337;
  typedef uint8_t *_g4_t_v338;
  typedef int _g4_t_v339;
  typedef uint32_t *_g4_t_v340;
  typedef int _g4_t_v341;
  typedef int _g4_t_v342;
  typedef unsigned int _g4_t_v343;
  typedef int _g4_t_v344;
  typedef int _g4_t_v345;
  typedef int _g4_t_v346;
  typedef int _g4_t_v347;
  typedef int _g4_t_v348;
  typedef uint8_t *_g4_t_v349;
  typedef unsigned int _g4_t_v350;
  typedef int _g4_t_v351;
  typedef int _g4_t_v352;
  typedef char *_g4_t_v353;
  typedef int _g4_t_v354;
  typedef unsigned int _g4_t_v355;
  typedef uint32_t *_g4_t_v356;
  typedef int _g4_t_v357;
  typedef unsigned int _g4_t_v358;
  typedef unsigned int _g4_t_v359;
  typedef int _g4_t_v360;
  typedef int _g4_t_v361;
  typedef int _g4_t_v362;
  typedef int _g4_t_v363;
  typedef int _g4_t_v364;
  typedef int _g4_t_v365;
  typedef int _g4_t_v366;
  typedef int _g4_t_v367;
  typedef uint8_t *_g4_t_v368;
  typedef int _g4_t_v369;
  typedef int _g4_t_v370;
  typedef int _g4_t_v371;
  typedef int _g4_t_v372;
  typedef int _g4_t_v373;
  typedef int _g4_t_v374;
  typedef uint32_t *_g4_t_v375;
  typedef int _g4_t_v376;
  typedef uint32_t *_g4_t_v377;
  typedef int _g4_t_v378;
  typedef uint32_t *_g4_t_v379;
  typedef int _g4_t_v380;
  typedef int _g4_t_v381;
  typedef int _g4_t_v382;
  typedef bool _g4_t_v383;
  typedef unsigned int _g4_t_v384;
  typedef unsigned int _g4_t_v385;
  typedef uint32_t *_g4_t_v386;
  typedef uint8_t *_g4_t_v387;
  typedef int _g4_t_v388;
  typedef int _g4_t_v389;
  typedef uint32_t *_g4_t_v390;
  typedef int _g4_t_v391;
  typedef int _g4_t_v392;
  typedef int _g4_t_v393;
  typedef int _g4_t_v394[4];
  typedef int _g4_t_v395[4];
  typedef uint8_t _g4_t_v396[64];
  typedef int _g4_t_v397[35];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v249)) > _g4_s0 ? (12u + sizeof(_g4_t_v249)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v250)) > _g4_s1 ? (12u + sizeof(_g4_t_v250)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v251)) > _g4_s2 ? (12u + sizeof(_g4_t_v251)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v252)) > _g4_s3 ? (16u + sizeof(_g4_t_v252)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v253)) > _g4_s4 ? (16u + sizeof(_g4_t_v253)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v254)) > _g4_s5 ? (20u + sizeof(_g4_t_v254)) : _g4_s5,
    _g4_s7 = (27u + sizeof(_g4_t_v255)) > _g4_s6 ? (27u + sizeof(_g4_t_v255)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v256)) > _g4_s7 ? (28u + sizeof(_g4_t_v256)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v257)) > _g4_s8 ? (32u + sizeof(_g4_t_v257)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v258)) > _g4_s9 ? (36u + sizeof(_g4_t_v258)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v259)) > _g4_s10 ? (40u + sizeof(_g4_t_v259)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v260)) > _g4_s11 ? (40u + sizeof(_g4_t_v260)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v261)) > _g4_s12 ? (44u + sizeof(_g4_t_v261)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v262)) > _g4_s13 ? (44u + sizeof(_g4_t_v262)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v263)) > _g4_s14 ? (48u + sizeof(_g4_t_v263)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v264)) > _g4_s15 ? (52u + sizeof(_g4_t_v264)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v265)) > _g4_s16 ? (52u + sizeof(_g4_t_v265)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v266)) > _g4_s17 ? (56u + sizeof(_g4_t_v266)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v267)) > _g4_s18 ? (56u + sizeof(_g4_t_v267)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v268)) > _g4_s19 ? (60u + sizeof(_g4_t_v268)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v269)) > _g4_s20 ? (60u + sizeof(_g4_t_v269)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v270)) > _g4_s21 ? (60u + sizeof(_g4_t_v270)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v271)) > _g4_s22 ? (60u + sizeof(_g4_t_v271)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v272)) > _g4_s23 ? (60u + sizeof(_g4_t_v272)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v273)) > _g4_s24 ? (64u + sizeof(_g4_t_v273)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v274)) > _g4_s25 ? (64u + sizeof(_g4_t_v274)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v275)) > _g4_s26 ? (64u + sizeof(_g4_t_v275)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v276)) > _g4_s27 ? (64u + sizeof(_g4_t_v276)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v277)) > _g4_s28 ? (64u + sizeof(_g4_t_v277)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v278)) > _g4_s29 ? (64u + sizeof(_g4_t_v278)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v279)) > _g4_s30 ? (68u + sizeof(_g4_t_v279)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v280)) > _g4_s31 ? (68u + sizeof(_g4_t_v280)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v281)) > _g4_s32 ? (68u + sizeof(_g4_t_v281)) : _g4_s32,
    _g4_s34 = (68u + sizeof(_g4_t_v282)) > _g4_s33 ? (68u + sizeof(_g4_t_v282)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v283)) > _g4_s34 ? (68u + sizeof(_g4_t_v283)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v284)) > _g4_s35 ? (68u + sizeof(_g4_t_v284)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v285)) > _g4_s36 ? (68u + sizeof(_g4_t_v285)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v286)) > _g4_s37 ? (68u + sizeof(_g4_t_v286)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v287)) > _g4_s38 ? (68u + sizeof(_g4_t_v287)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v288)) > _g4_s39 ? (68u + sizeof(_g4_t_v288)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v289)) > _g4_s40 ? (72u + sizeof(_g4_t_v289)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v290)) > _g4_s41 ? (72u + sizeof(_g4_t_v290)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v291)) > _g4_s42 ? (72u + sizeof(_g4_t_v291)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v292)) > _g4_s43 ? (72u + sizeof(_g4_t_v292)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v293)) > _g4_s44 ? (76u + sizeof(_g4_t_v293)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v294)) > _g4_s45 ? (76u + sizeof(_g4_t_v294)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v295)) > _g4_s46 ? (76u + sizeof(_g4_t_v295)) : _g4_s46,
    _g4_s48 = (76u + sizeof(_g4_t_v296)) > _g4_s47 ? (76u + sizeof(_g4_t_v296)) : _g4_s47,
    _g4_s49 = (76u + sizeof(_g4_t_v297)) > _g4_s48 ? (76u + sizeof(_g4_t_v297)) : _g4_s48,
    _g4_s50 = (76u + sizeof(_g4_t_v298)) > _g4_s49 ? (76u + sizeof(_g4_t_v298)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v299)) > _g4_s50 ? (76u + sizeof(_g4_t_v299)) : _g4_s50,
    _g4_s52 = (76u + sizeof(_g4_t_v300)) > _g4_s51 ? (76u + sizeof(_g4_t_v300)) : _g4_s51,
    _g4_s53 = (76u + sizeof(_g4_t_v301)) > _g4_s52 ? (76u + sizeof(_g4_t_v301)) : _g4_s52,
    _g4_s54 = (80u + sizeof(_g4_t_v302)) > _g4_s53 ? (80u + sizeof(_g4_t_v302)) : _g4_s53,
    _g4_s55 = (80u + sizeof(_g4_t_v303)) > _g4_s54 ? (80u + sizeof(_g4_t_v303)) : _g4_s54,
    _g4_s56 = (80u + sizeof(_g4_t_v304)) > _g4_s55 ? (80u + sizeof(_g4_t_v304)) : _g4_s55,
    _g4_s57 = (80u + sizeof(_g4_t_v305)) > _g4_s56 ? (80u + sizeof(_g4_t_v305)) : _g4_s56,
    _g4_s58 = (80u + sizeof(_g4_t_v306)) > _g4_s57 ? (80u + sizeof(_g4_t_v306)) : _g4_s57,
    _g4_s59 = (80u + sizeof(_g4_t_v307)) > _g4_s58 ? (80u + sizeof(_g4_t_v307)) : _g4_s58,
    _g4_s60 = (80u + sizeof(_g4_t_v308)) > _g4_s59 ? (80u + sizeof(_g4_t_v308)) : _g4_s59,
    _g4_s61 = (80u + sizeof(_g4_t_v309)) > _g4_s60 ? (80u + sizeof(_g4_t_v309)) : _g4_s60,
    _g4_s62 = (80u + sizeof(_g4_t_v310)) > _g4_s61 ? (80u + sizeof(_g4_t_v310)) : _g4_s61,
    _g4_s63 = (80u + sizeof(_g4_t_v311)) > _g4_s62 ? (80u + sizeof(_g4_t_v311)) : _g4_s62,
    _g4_s64 = (84u + sizeof(_g4_t_v312)) > _g4_s63 ? (84u + sizeof(_g4_t_v312)) : _g4_s63,
    _g4_s65 = (84u + sizeof(_g4_t_v313)) > _g4_s64 ? (84u + sizeof(_g4_t_v313)) : _g4_s64,
    _g4_s66 = (84u + sizeof(_g4_t_v314)) > _g4_s65 ? (84u + sizeof(_g4_t_v314)) : _g4_s65,
    _g4_s67 = (84u + sizeof(_g4_t_v315)) > _g4_s66 ? (84u + sizeof(_g4_t_v315)) : _g4_s66,
    _g4_s68 = (84u + sizeof(_g4_t_v316)) > _g4_s67 ? (84u + sizeof(_g4_t_v316)) : _g4_s67,
    _g4_s69 = (84u + sizeof(_g4_t_v317)) > _g4_s68 ? (84u + sizeof(_g4_t_v317)) : _g4_s68,
    _g4_s70 = (84u + sizeof(_g4_t_v318)) > _g4_s69 ? (84u + sizeof(_g4_t_v318)) : _g4_s69,
    _g4_s71 = (84u + sizeof(_g4_t_v319)) > _g4_s70 ? (84u + sizeof(_g4_t_v319)) : _g4_s70,
    _g4_s72 = (84u + sizeof(_g4_t_v320)) > _g4_s71 ? (84u + sizeof(_g4_t_v320)) : _g4_s71,
    _g4_s73 = (84u + sizeof(_g4_t_v321)) > _g4_s72 ? (84u + sizeof(_g4_t_v321)) : _g4_s72,
    _g4_s74 = (88u + sizeof(_g4_t_v322)) > _g4_s73 ? (88u + sizeof(_g4_t_v322)) : _g4_s73,
    _g4_s75 = (88u + sizeof(_g4_t_v323)) > _g4_s74 ? (88u + sizeof(_g4_t_v323)) : _g4_s74,
    _g4_s76 = (88u + sizeof(_g4_t_v324)) > _g4_s75 ? (88u + sizeof(_g4_t_v324)) : _g4_s75,
    _g4_s77 = (88u + sizeof(_g4_t_v325)) > _g4_s76 ? (88u + sizeof(_g4_t_v325)) : _g4_s76,
    _g4_s78 = (88u + sizeof(_g4_t_v326)) > _g4_s77 ? (88u + sizeof(_g4_t_v326)) : _g4_s77,
    _g4_s79 = (88u + sizeof(_g4_t_v327)) > _g4_s78 ? (88u + sizeof(_g4_t_v327)) : _g4_s78,
    _g4_s80 = (88u + sizeof(_g4_t_v328)) > _g4_s79 ? (88u + sizeof(_g4_t_v328)) : _g4_s79,
    _g4_s81 = (88u + sizeof(_g4_t_v329)) > _g4_s80 ? (88u + sizeof(_g4_t_v329)) : _g4_s80,
    _g4_s82 = (88u + sizeof(_g4_t_v330)) > _g4_s81 ? (88u + sizeof(_g4_t_v330)) : _g4_s81,
    _g4_s83 = (88u + sizeof(_g4_t_v331)) > _g4_s82 ? (88u + sizeof(_g4_t_v331)) : _g4_s82,
    _g4_s84 = (88u + sizeof(_g4_t_v332)) > _g4_s83 ? (88u + sizeof(_g4_t_v332)) : _g4_s83,
    _g4_s85 = (88u + sizeof(_g4_t_v333)) > _g4_s84 ? (88u + sizeof(_g4_t_v333)) : _g4_s84,
    _g4_s86 = (88u + sizeof(_g4_t_v334)) > _g4_s85 ? (88u + sizeof(_g4_t_v334)) : _g4_s85,
    _g4_s87 = (88u + sizeof(_g4_t_v335)) > _g4_s86 ? (88u + sizeof(_g4_t_v335)) : _g4_s86,
    _g4_s88 = (88u + sizeof(_g4_t_v336)) > _g4_s87 ? (88u + sizeof(_g4_t_v336)) : _g4_s87,
    _g4_s89 = (92u + sizeof(_g4_t_v337)) > _g4_s88 ? (92u + sizeof(_g4_t_v337)) : _g4_s88,
    _g4_s90 = (92u + sizeof(_g4_t_v338)) > _g4_s89 ? (92u + sizeof(_g4_t_v338)) : _g4_s89,
    _g4_s91 = (92u + sizeof(_g4_t_v339)) > _g4_s90 ? (92u + sizeof(_g4_t_v339)) : _g4_s90,
    _g4_s92 = (92u + sizeof(_g4_t_v340)) > _g4_s91 ? (92u + sizeof(_g4_t_v340)) : _g4_s91,
    _g4_s93 = (92u + sizeof(_g4_t_v341)) > _g4_s92 ? (92u + sizeof(_g4_t_v341)) : _g4_s92,
    _g4_s94 = (92u + sizeof(_g4_t_v342)) > _g4_s93 ? (92u + sizeof(_g4_t_v342)) : _g4_s93,
    _g4_s95 = (92u + sizeof(_g4_t_v343)) > _g4_s94 ? (92u + sizeof(_g4_t_v343)) : _g4_s94,
    _g4_s96 = (92u + sizeof(_g4_t_v344)) > _g4_s95 ? (92u + sizeof(_g4_t_v344)) : _g4_s95,
    _g4_s97 = (92u + sizeof(_g4_t_v345)) > _g4_s96 ? (92u + sizeof(_g4_t_v345)) : _g4_s96,
    _g4_s98 = (92u + sizeof(_g4_t_v346)) > _g4_s97 ? (92u + sizeof(_g4_t_v346)) : _g4_s97,
    _g4_s99 = (92u + sizeof(_g4_t_v347)) > _g4_s98 ? (92u + sizeof(_g4_t_v347)) : _g4_s98,
    _g4_s100 = (92u + sizeof(_g4_t_v348)) > _g4_s99 ? (92u + sizeof(_g4_t_v348)) : _g4_s99,
    _g4_s101 = (92u + sizeof(_g4_t_v349)) > _g4_s100 ? (92u + sizeof(_g4_t_v349)) : _g4_s100,
    _g4_s102 = (92u + sizeof(_g4_t_v350)) > _g4_s101 ? (92u + sizeof(_g4_t_v350)) : _g4_s101,
    _g4_s103 = (92u + sizeof(_g4_t_v351)) > _g4_s102 ? (92u + sizeof(_g4_t_v351)) : _g4_s102,
    _g4_s104 = (92u + sizeof(_g4_t_v352)) > _g4_s103 ? (92u + sizeof(_g4_t_v352)) : _g4_s103,
    _g4_s105 = (96u + sizeof(_g4_t_v353)) > _g4_s104 ? (96u + sizeof(_g4_t_v353)) : _g4_s104,
    _g4_s106 = (96u + sizeof(_g4_t_v354)) > _g4_s105 ? (96u + sizeof(_g4_t_v354)) : _g4_s105,
    _g4_s107 = (96u + sizeof(_g4_t_v355)) > _g4_s106 ? (96u + sizeof(_g4_t_v355)) : _g4_s106,
    _g4_s108 = (96u + sizeof(_g4_t_v356)) > _g4_s107 ? (96u + sizeof(_g4_t_v356)) : _g4_s107,
    _g4_s109 = (96u + sizeof(_g4_t_v357)) > _g4_s108 ? (96u + sizeof(_g4_t_v357)) : _g4_s108,
    _g4_s110 = (96u + sizeof(_g4_t_v358)) > _g4_s109 ? (96u + sizeof(_g4_t_v358)) : _g4_s109,
    _g4_s111 = (96u + sizeof(_g4_t_v359)) > _g4_s110 ? (96u + sizeof(_g4_t_v359)) : _g4_s110,
    _g4_s112 = (96u + sizeof(_g4_t_v360)) > _g4_s111 ? (96u + sizeof(_g4_t_v360)) : _g4_s111,
    _g4_s113 = (96u + sizeof(_g4_t_v361)) > _g4_s112 ? (96u + sizeof(_g4_t_v361)) : _g4_s112,
    _g4_s114 = (96u + sizeof(_g4_t_v362)) > _g4_s113 ? (96u + sizeof(_g4_t_v362)) : _g4_s113,
    _g4_s115 = (96u + sizeof(_g4_t_v363)) > _g4_s114 ? (96u + sizeof(_g4_t_v363)) : _g4_s114,
    _g4_s116 = (96u + sizeof(_g4_t_v364)) > _g4_s115 ? (96u + sizeof(_g4_t_v364)) : _g4_s115,
    _g4_s117 = (96u + sizeof(_g4_t_v365)) > _g4_s116 ? (96u + sizeof(_g4_t_v365)) : _g4_s116,
    _g4_s118 = (96u + sizeof(_g4_t_v366)) > _g4_s117 ? (96u + sizeof(_g4_t_v366)) : _g4_s117,
    _g4_s119 = (96u + sizeof(_g4_t_v367)) > _g4_s118 ? (96u + sizeof(_g4_t_v367)) : _g4_s118,
    _g4_s120 = (96u + sizeof(_g4_t_v368)) > _g4_s119 ? (96u + sizeof(_g4_t_v368)) : _g4_s119,
    _g4_s121 = (96u + sizeof(_g4_t_v369)) > _g4_s120 ? (96u + sizeof(_g4_t_v369)) : _g4_s120,
    _g4_s122 = (96u + sizeof(_g4_t_v370)) > _g4_s121 ? (96u + sizeof(_g4_t_v370)) : _g4_s121,
    _g4_s123 = (96u + sizeof(_g4_t_v371)) > _g4_s122 ? (96u + sizeof(_g4_t_v371)) : _g4_s122,
    _g4_s124 = (96u + sizeof(_g4_t_v372)) > _g4_s123 ? (96u + sizeof(_g4_t_v372)) : _g4_s123,
    _g4_s125 = (96u + sizeof(_g4_t_v373)) > _g4_s124 ? (96u + sizeof(_g4_t_v373)) : _g4_s124,
    _g4_s126 = (96u + sizeof(_g4_t_v374)) > _g4_s125 ? (96u + sizeof(_g4_t_v374)) : _g4_s125,
    _g4_s127 = (100u + sizeof(_g4_t_v375)) > _g4_s126 ? (100u + sizeof(_g4_t_v375)) : _g4_s126,
    _g4_s128 = (100u + sizeof(_g4_t_v376)) > _g4_s127 ? (100u + sizeof(_g4_t_v376)) : _g4_s127,
    _g4_s129 = (100u + sizeof(_g4_t_v377)) > _g4_s128 ? (100u + sizeof(_g4_t_v377)) : _g4_s128,
    _g4_s130 = (100u + sizeof(_g4_t_v378)) > _g4_s129 ? (100u + sizeof(_g4_t_v378)) : _g4_s129,
    _g4_s131 = (100u + sizeof(_g4_t_v379)) > _g4_s130 ? (100u + sizeof(_g4_t_v379)) : _g4_s130,
    _g4_s132 = (100u + sizeof(_g4_t_v380)) > _g4_s131 ? (100u + sizeof(_g4_t_v380)) : _g4_s131,
    _g4_s133 = (100u + sizeof(_g4_t_v381)) > _g4_s132 ? (100u + sizeof(_g4_t_v381)) : _g4_s132,
    _g4_s134 = (100u + sizeof(_g4_t_v382)) > _g4_s133 ? (100u + sizeof(_g4_t_v382)) : _g4_s133,
    _g4_s135 = (100u + sizeof(_g4_t_v383)) > _g4_s134 ? (100u + sizeof(_g4_t_v383)) : _g4_s134,
    _g4_s136 = (100u + sizeof(_g4_t_v384)) > _g4_s135 ? (100u + sizeof(_g4_t_v384)) : _g4_s135,
    _g4_s137 = (100u + sizeof(_g4_t_v385)) > _g4_s136 ? (100u + sizeof(_g4_t_v385)) : _g4_s136,
    _g4_s138 = (100u + sizeof(_g4_t_v386)) > _g4_s137 ? (100u + sizeof(_g4_t_v386)) : _g4_s137,
    _g4_s139 = (100u + sizeof(_g4_t_v387)) > _g4_s138 ? (100u + sizeof(_g4_t_v387)) : _g4_s138,
    _g4_s140 = (100u + sizeof(_g4_t_v388)) > _g4_s139 ? (100u + sizeof(_g4_t_v388)) : _g4_s139,
    _g4_s141 = (100u + sizeof(_g4_t_v389)) > _g4_s140 ? (100u + sizeof(_g4_t_v389)) : _g4_s140,
    _g4_s142 = (100u + sizeof(_g4_t_v390)) > _g4_s141 ? (100u + sizeof(_g4_t_v390)) : _g4_s141,
    _g4_s143 = (100u + sizeof(_g4_t_v391)) > _g4_s142 ? (100u + sizeof(_g4_t_v391)) : _g4_s142,
    _g4_s144 = (100u + sizeof(_g4_t_v392)) > _g4_s143 ? (100u + sizeof(_g4_t_v392)) : _g4_s143,
    _g4_s145 = (100u + sizeof(_g4_t_v393)) > _g4_s144 ? (100u + sizeof(_g4_t_v393)) : _g4_s144,
    _g4_s146 = (112u + sizeof(_g4_t_v394)) > _g4_s145 ? (112u + sizeof(_g4_t_v394)) : _g4_s145,
    _g4_s147 = (128u + sizeof(_g4_t_v395)) > _g4_s146 ? (128u + sizeof(_g4_t_v395)) : _g4_s146,
    _g4_s148 = (144u + sizeof(_g4_t_v396)) > _g4_s147 ? (144u + sizeof(_g4_t_v396)) : _g4_s147,
    _g4_s149 = (208u + sizeof(_g4_t_v397)) > _g4_s148 ? (208u + sizeof(_g4_t_v397)) : _g4_s148
  };
  alignas(16) uint8_t _g4_sf[_g4_s149];
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 12u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 12u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 12u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 16u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 16u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 20u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 27u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 28u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 32u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 36u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 40u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 40u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 44u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 44u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 48u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 52u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 52u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 56u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 56u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 60u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 60u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 60u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 60u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 60u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 64u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 64u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 64u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 64u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 64u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 64u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 68u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 68u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 68u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 68u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 68u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 68u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 68u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 68u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 68u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 68u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 72u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 72u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 72u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 72u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 76u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 76u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 76u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 76u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 76u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 76u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 76u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 76u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 76u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 80u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 80u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 80u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 80u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 80u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 80u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 80u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 80u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 80u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 80u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 84u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 84u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 84u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 84u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 84u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 84u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 84u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 84u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 84u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 84u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 88u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 88u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 88u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 88u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 88u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 88u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 88u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 88u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 88u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 88u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 88u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 88u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 88u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 88u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 88u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 92u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 92u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 92u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 92u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 92u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 92u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 92u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 92u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 92u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 92u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 92u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 92u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 92u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 92u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 92u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 92u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 96u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 96u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 96u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 96u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 96u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 96u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 96u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 96u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 96u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 96u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 96u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 96u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 96u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 96u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 96u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 96u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 96u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 96u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 96u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 96u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 96u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 96u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 100u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 100u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 100u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 100u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 100u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 100u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 100u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 100u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 100u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 100u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 100u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 100u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 100u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 100u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 100u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 100u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 100u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 100u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 100u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 112u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 128u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 144u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 208u);

  v4 = a2[1];
  if ( v4 == 0 || *a2 == 0 )
    return 0;
  memset(v397, 0, 0x80u);
  v397[4] = *(uint32_t *)a3;
  v259 = v397[4];
  v397[2] = (int)(uintptr_t)(ft_mem_realloc(v397[4], 40, 0, v4, 0, v394));
  v289 = v394[0];
  if ( v394[0] != 0 )
    goto LABEL_5;
  v353 = ft_mem_realloc(v259, 8, 0, *a2, 0, v394);
  v397[3] = (int)(uintptr_t)(v353);
  v289 = v394[0];
  if ( v394[0] != 0 )
    goto LABEL_5;
  v293 = v397[2];
  v7 = a2[1];
  v8 = *a2;
  v397[0] = v7;
  v397[1] = v8;
  if ( v8 != 0 )
  {
    v9 = 0;
    v312 = 0;
    while ( 1 )
    {
      v10 = *(int16_t *)(*((uint32_t *)a2 + 3) + 2 * v312);
      v302 = v10 + 1;
      v11 = v10 + 1 - v9;
      v322 = v11;
      v375 = (uint32_t *)(v293 + 40 * v9);
      *(uint32_t *)v353 = (uint32_t)(uintptr_t)(v375);
      *((uint32_t *)v353 + 1) = v11;
      if ( v11 > 0 )
      {
        *v375 = v293 + 40 * v10;
        v375[2] = (uint32_t)(uintptr_t)(v353);
        v12 = (uint32_t *)(v293 + 40 * v9);
        if ( v11 != 1 )
        {
          for ( i = v293 + 40 * v9; ; i += 40 )
          {
            v14 = i + 40 - (uint32_t)(uintptr_t)(v375);
            --v11;
            *(uint32_t *)(i + 4) = i + 40;
            *(uint32_t *)((char *)v375 + v14) = i;
            *(uint32_t *)((char *)v375 + v14 + 8) = (uint32_t)(uintptr_t)(v353);
            if ( v11 == 1 )
              break;
          }
          v12 = &v375[10 * v322 - 10];
        }
        v12[1] = (uint32_t)(uintptr_t)(v375);
      }
      ++v312;
      v353 += 8;
      if ( v312 >= v397[1] )
        break;
      v9 = v302;
    }
    v7 = v397[0];
    v293 = v397[2];
  }
  v268 = *((uint32_t *)a2 + 1);
  if ( v7 == 0 )
  {
    v397[5] = (int)(uintptr_t)(a2);
    v397[6] = a3;
    goto LABEL_41;
  }
  v15 = *((uint32_t **)a2 + 1);
  v264 = v293;
  v303 = 0;
  v16 = v293;
  do
  {
    v294 = -858993459 * ((*(uint32_t *)(v16 + 4) - v264) >> 3);
    v25 = -858993459 * ((*(uint32_t *)v16 - v264) >> 3);
    if ( (*(uint8_t *)(*((uint32_t *)a2 + 2) + v303) & 1) != 0 )
    {
      v266 = *(uint32_t *)(v16 + 12);
      v261 = v266 & 1;
    }
    else
    {
      *(uint32_t *)(v16 + 12) = 1;
      v261 = 1;
      v266 = 1;
    }
    v17 = (uint32_t *)(v268 + 8 * v25);
    v376 = *v15 - *v17;
    v354 = v15[1] - v17[1];
    v18 = __builtin_abs(v376);
    v19 = __builtin_abs(v354);
    if ( v18 <= 12 * v19 )
    {
      v279 = 4;
      if ( v19 > 12 * v18 )
        v279 = ((v354 >> 31) & 2) - 1;
    }
    else
    {
      v279 = ((v376 >> 31) & 0xFC) + 2;
    }
    *(uint8_t *)(v16 + 20) = v279;
    v20 = (uint32_t *)(v268 + 8 * v294);
    v323 = *v20 - *v15;
    v21 = v20[1] - v15[1];
    v313 = __builtin_abs(v323);
    v22 = __builtin_abs(v21);
    if ( v313 <= 12 * v22 )
    {
      v23 = 4;
      if ( v22 > 12 * v313 )
        v23 = ((v21 >> 31) & 2) - 1;
    }
    else
    {
      v23 = ((v323 >> 31) & 0xFC) + 2;
    }
    *(uint8_t *)(v16 + 21) = v23;
    if ( v261 == 0 )
    {
      if ( v279 != v23 )
        goto LABEL_28;
      if ( v279 == 4 )
      {
        if ( !ft_corner_is_flat(v376, v354, v323, v21) )
          goto LABEL_28;
        v266 = *(uint32_t *)(v16 + 12);
      }
    }
    *(uint32_t *)(v16 + 12) = v266 | 2;
LABEL_28:
    ++v303;
    v16 += 40;
    v24 = v397[0];
    v15 += 2;
  }
  while ( v303 < v397[0] );
  v397[5] = (int)(uintptr_t)(a2);
  v397[6] = a3;
  v26 = *((uint32_t **)a2 + 1);
  v27 = (uint32_t *)v397[2];
  if ( v397[0] != 0 )
  {
    do
    {
      v27[4] = 0;
      v27[6] = 0;
      --v24;
      v27[7] = *v26;
      v27[8] = v26[1];
      v26 += 2;
      v27 += 10;
    }
    while ( v24 != 0 );
  }
LABEL_41:
  v28 = v397[1];
  if ( v397[1] == 0 )
    goto LABEL_52;
  v304 = 0;
  while ( 2 )
  {
    v29 = (uint32_t *)(v397[3] + 8 * v304);
    if ( v29[1] <= 3u )
      goto LABEL_51;
    v30 = (uint32_t *)*v29;
    v31 = (uint32_t *)*v29;
    do
    {
      v31 = (uint32_t *)v31[1];
      if ( v30 == v31 )
        goto LABEL_51;
      v32 = v31[8] - v30[8];
      v33 = v31[7] - v30[7];
    }
    while ( (v33 | v32) == 0 );
    v377 = v30;
    v324 = v31;
    v34 = (uint32_t *)*v30;
    v355 = v33;
    v337 = v32;
    if ( v30 == (uint32_t *)*v30 )
      goto LABEL_50;
    while ( 1 )
    {
      v35 = v30[7] - v34[7];
      if ( (v35 | (v30[8] - v34[8])) != 0 )
      {
        v249 = v30[8] - v34[8];
        v252 = v30;
        v38 = ft_corner_orientation(v355, v337, v35, v249);
        if ( v38 != 0 )
          break;
      }
      v30 = v34;
      v34 = (uint32_t *)*v34;
      if ( v377 == v34 )
        goto LABEL_50;
    }
    v39 = v324;
    v290 = v38;
    v325 = v35;
    v295 = v252;
    v314 = v249;
    while ( 2 )
    {
      v40 = v39[7];
      v356 = v39;
      v41 = 0;
      v280 = v39[8];
      while ( 2 )
      {
        v39 = (uint32_t *)v39[1];
        if ( v39 == v252 )
          v41 = 1;
        v42 = v39[7];
        v44 = v42 - v40;
        v43 = v39[8];
        v281 = v43 - v280;
        if ( (v281 | v44) == 0 )
        {
LABEL_58:
          v280 = v43;
          v356 = v39;
          v40 = v42;
          continue;
        }
        break;
      }
      v250 = v41;
      v45 = ft_corner_orientation(v325, v314, v44, v281);
      v41 = v250;
      if ( v45 == 0 )
      {
        v42 = v39[7];
        v43 = v39[8];
        goto LABEL_58;
      }
      if ( (v45 ^ v290) < 0 )
      {
        v60 = v295;
        do
        {
          v60[3] |= 4u;
          v60 = (uint32_t *)v60[1];
        }
        while ( v60 != v356 );
        v356[3] |= 4u;
      }
      if ( v250 == 0 )
      {
        v290 = v45;
        v314 = v281;
        v325 = v44;
        v295 = v356;
        continue;
      }
      break;
    }
LABEL_50:
    v28 = v397[1];
LABEL_51:
    if ( ++v304 < v28 )
      continue;
    break;
  }
LABEL_52:
  v36 = a1[4];
  v397[10] = (int)(uintptr_t)(ft_mem_realloc(v259, 4, 0, 2 * v36, 0, v395));
  v37 = v395[0];
  v289 = v395[0];
  if ( v395[0] != 0
    || (v397[9] = (int)(uintptr_t)(ft_mem_realloc(v259, 28, 0, v36, 0, v395)), v37 = v395[0], v289 = v395[0], v395[0] != 0)
    || (v397[13] = (int)(uintptr_t)(ft_mem_realloc(v259, 16, 0, 2 * v36 + 1, 0, v395)), v37 = v395[0], v289 = v395[0], v395[0] != 0) )
  {
    v394[0] = v37;
  }
  else
  {
    v397[11] = v397[10] + 4 * v36;
    v397[7] = v36;
    v397[8] = 0;
    v397[12] = 0;
    v397[14] = 0;
    v46 = (uint32_t *)v397[9];
    for ( j = (uint32_t *)a1[6]; v36 != 0; v46 += 7 )
    {
      --v36;
      *v46 = *j;
      v46[1] = j[1];
      v46[4] = j[2];
      j += 3;
    }
    v326 = v397[7];
    v397[15] = (int)(uintptr_t)(a1 + 7);
    v282 = (int *)a1[9];
    v269 = a1[7];
    if ( v269 != 0 )
    {
      v48 = v397[7];
      while ( 1 )
      {
        v315 = *v282;
        v338 = (uint8_t *)v282[2];
        if ( *v282 != 0 )
          break;
LABEL_93:
        v282 += 4;
        if ( --v269 == 0 )
        {
          v326 = v48;
          goto LABEL_95;
        }
      }
      v378 = 0;
      v357 = 0;
      v49 = 0;
      v50 = 0;
      while ( 2 )
      {
        if ( v50 != 0 )
        {
          v51 = v50;
          v50 >>= 1;
          if ( (v51 & v357) != 0 )
            goto LABEL_79;
        }
        else
        {
          v52 = v338++;
          v50 = 64;
          v357 = *v52;
          if ( (v357 & 0x80) != 0 )
          {
LABEL_79:
            if ( v49 < v48 )
            {
              v305 = (uint32_t *)(v378 + v397[9]);
              v53 = *(uint32_t *)(v378 + v397[9] + 16);
              if ( (v53 & 4) == 0 )
              {
                *(uint32_t *)(v378 + v397[9] + 16) = v53 | 4;
                v54 = v397[8];
                v55 = v397[8] == 0;
                v273 = v397[11];
                v305[5] = 0;
                if ( !v55 )
                {
                  v291 = v49;
                  v56 = (int **)v273;
                  do
                  {
                    v57 = *v56;
                    v58 = **v56;
                    if ( v58 <= v305[1] + *v305 && v57[1] + v58 >= *v305 )
                    {
                      v49 = v291;
                      v305[5] = (uint32_t)(uintptr_t)(v57);
                      goto LABEL_86;
                    }
                    ++v56;
                    --v54;
                  }
                  while ( v54 != 0 );
                  v49 = v291;
                }
LABEL_86:
                v59 = v397[8];
                v48 = v397[7];
                if ( v397[8] < (unsigned int)v397[7] )
                {
                  *(uint32_t *)(v397[11] + 4 * v397[8]) = (uint32_t)(uintptr_t)(v305);
                  v397[8] = v59 + 1;
                  v48 = v397[7];
                }
              }
            }
          }
        }
        ++v49;
        v378 += 28;
        if ( v49 == v315 )
          goto LABEL_93;
        continue;
      }
    }
LABEL_95:
    if ( v397[8] != v326 && v326 != 0 )
    {
      v61 = v326;
      v339 = 0;
      v358 = 0;
      while ( 1 )
      {
        if ( v358 < v61 )
        {
          v63 = (uint32_t *)(v339 + v397[9]);
          v64 = *(uint32_t *)(v339 + v397[9] + 16);
          if ( (v64 & 4) == 0 )
          {
            v63[4] = v64 | 4;
            v65 = v397[8];
            v55 = v397[8] == 0;
            v66 = (int **)v397[11];
            v63[5] = 0;
            if ( !v55 )
            {
              while ( 1 )
              {
                v67 = *v66;
                v68 = **v66;
                if ( v68 <= v63[1] + *v63 && v67[1] + v68 >= *v63 )
                  break;
                ++v66;
                if ( --v65 == 0 )
                  goto LABEL_100;
              }
              v63[5] = (uint32_t)(uintptr_t)(v67);
            }
LABEL_100:
            v62 = v397[8];
            if ( v397[8] < (unsigned int)v397[7] )
            {
              *(uint32_t *)(v397[11] + 4 * v397[8]) = (uint32_t)(uintptr_t)(v63);
              v397[8] = v62 + 1;
            }
          }
        }
        ++v358;
        v339 += 28;
        if ( v358 == v326 )
          break;
        v61 = v397[7];
      }
    }
    v289 = v395[0];
    v394[0] = v395[0];
    if ( v395[0] == 0 )
    {
      v69 = a1[13];
      v397[20] = (int)(uintptr_t)(ft_mem_realloc(v259, 4, 0, 2 * v69, 0, v395));
      v70 = v395[0];
      v289 = v395[0];
      if ( v395[0] == 0 )
      {
        v397[19] = (int)(uintptr_t)(ft_mem_realloc(v259, 28, 0, v69, 0, v395));
        v70 = v395[0];
        v289 = v395[0];
        if ( v395[0] == 0 )
        {
          v397[23] = (int)(uintptr_t)(ft_mem_realloc(v259, 16, 0, 2 * v69 + 1, 0, v395));
          v70 = v395[0];
          v289 = v395[0];
          if ( v395[0] == 0 )
          {
            v397[21] = v397[20] + 4 * v69;
            v397[17] = v69;
            v397[18] = 0;
            v397[22] = 0;
            v397[24] = 0;
            v217 = (uint32_t *)v397[19];
            v218 = (uint32_t *)a1[15];
            v392 = 0;
            if ( v69 != 0 )
            {
              do
              {
                --v69;
                *v217 = *v218;
                v217[1] = v218[1];
                v217[4] = v218[2];
                v218 += 3;
                v217 += 7;
              }
              while ( v69 != 0 );
              v392 = v397[17];
            }
            v397[25] = (int)(uintptr_t)(a1 + 16);
            v272 = (int *)a1[18];
            v288 = a1[16];
            if ( v288 != 0 )
            {
              v219 = v392;
              while ( 1 )
              {
                v320 = *v272;
                v349 = (uint8_t *)v272[2];
                if ( *v272 != 0 )
                {
                  v393 = 0;
                  v372 = 0;
                  v220 = 0;
                  v221 = 0;
                  do
                  {
                    if ( v221 != 0 )
                    {
                      v222 = v221;
                      v221 >>= 1;
                    }
                    else
                    {
                      v223 = v349;
                      v222 = 128;
                      ++v349;
                      v372 = *v223;
                      v221 = 64;
                    }
                    if ( (v222 & v372) != 0 && v220 < v219 )
                    {
                      v311 = v393 + v397[19];
                      v224 = (int *)(v393 + v397[19]);
                      v225 = *(uint32_t *)(v393 + v397[19] + 16);
                      if ( (v225 & 4) == 0 )
                      {
                        v224[4] = v225 | 4;
                        v278 = v397[21];
                        v226 = v397[18];
                        v55 = v397[18] == 0;
                        v224[5] = 0;
                        if ( !v55 )
                        {
                          v292 = v220;
                          v299 = *v224;
                          v335 = v224[1] + *v224;
                          v227 = (int **)v278;
                          do
                          {
                            v228 = *v227;
                            v229 = **v227;
                            if ( v229 <= v335 && v228[1] + v229 >= v299 )
                            {
                              v220 = v292;
                              *(uint32_t *)(v311 + 20) = (uint32_t)(uintptr_t)(v228);
                              goto LABEL_396;
                            }
                            ++v227;
                            --v226;
                          }
                          while ( v226 != 0 );
                          v220 = v292;
                        }
LABEL_396:
                        v230 = v397[18];
                        v219 = v397[17];
                        if ( v397[18] < (unsigned int)v397[17] )
                        {
                          *(uint32_t *)(v397[21] + 4 * v397[18]) = v311;
                          v397[18] = v230 + 1;
                          v219 = v397[17];
                        }
                      }
                    }
                    ++v220;
                    v393 += 28;
                  }
                  while ( v220 != v320 );
                }
                if ( --v288 == 0 )
                  break;
                v272 += 4;
              }
              v392 = v219;
            }
            if ( v397[18] != v392 && v392 != 0 )
            {
              v231 = v392;
              v336 = 0;
              v350 = 0;
              while ( 1 )
              {
                if ( v350 < v231 )
                {
                  v233 = (uint32_t *)(v336 + v397[19]);
                  v234 = *(uint32_t *)(v336 + v397[19] + 16);
                  if ( (v234 & 4) == 0 )
                  {
                    v233[4] = v234 | 4;
                    v235 = v397[18];
                    v55 = v397[18] == 0;
                    v236 = (int **)v397[21];
                    v233[5] = 0;
                    if ( !v55 )
                    {
                      while ( 1 )
                      {
                        v237 = *v236;
                        v238 = **v236;
                        if ( v238 <= v233[1] + *v233 && v237[1] + v238 >= *v233 )
                          break;
                        ++v236;
                        if ( --v235 == 0 )
                          goto LABEL_409;
                      }
                      v233[5] = (uint32_t)(uintptr_t)(v237);
                    }
LABEL_409:
                    v232 = v397[18];
                    if ( v397[18] < (unsigned int)v397[17] )
                    {
                      *(uint32_t *)(v397[21] + 4 * v397[18]) = (uint32_t)(uintptr_t)(v233);
                      v397[18] = v232 + 1;
                    }
                  }
                }
                ++v350;
                v336 += 28;
                if ( v350 == v392 )
                  break;
                v231 = v397[17];
              }
            }
            v70 = v395[0];
            v289 = v395[0];
          }
        }
      }
      v394[0] = v70;
      if ( v70 == 0 )
      {
        v260 = *(uint32_t *)(v397[6] + 200);
        v265 = *(uint32_t *)(v397[6] + 404);
        v71 = v265 * (int64_t)*(int *)(a3 + 416);
        v72 = (((uint64_t)(unsigned int)((SHIDWORD(v71) >> 31) + 0x8000) + v71) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v71) >> 31) + 0x8000 + v71) >> 16);
        v73 = (v72 + 32) & 0xFFFFFFC0;
        v74 = v72;
        if ( v73 == 0 || v72 == v73 )
        {
          v255 = 0;
        }
        else
        {
          v149 = FT_MulDiv(v265, v73, v72);
          v150 = v260;
          v344 = v149;
          v331 = v260;
          if ( v74 > v73 )
          {
            v331 = v260 + v260 / -50;
            v150 = v331;
          }
          v386 = (uint32_t *)v397[6];
          if ( v150 != *(uint32_t *)(v397[6] + 200) || *(uint32_t *)(v397[6] + 204) != 0 )
          {
            *(uint32_t *)(v397[6] + 200) = v331;
            v386[51] = 0;
            v151 = v386[1];
            if ( v151 != 0 )
            {
              v152 = v331 * (int64_t)(int)v386[2];
              v153 = (((uint64_t)(unsigned int)((SHIDWORD(v152) >> 31) + 0x8000) + v152) >> 32 << 16)
                   + ((unsigned int)((SHIDWORD(v152) >> 31) + 0x8000 + v152) >> 16);
              v386[3] = v153;
              v386[4] = (v153 + 32) & 0xFFFFFFC0;
              v363 = v151 - 1;
              if ( v151 != 1 )
              {
                for ( k = (int *)(v386 + 5); ; k += 3 )
                {
                  v155 = (unsigned int)(((int)((uint64_t)(v331 * (int64_t)*k) >> 32) >> 31) + 0x8000)
                       + v331 * (int64_t)*k;
                  v156 = (HIDWORD(v155) << 16) + WORD1(v155);
                  HIDWORD(v155) = __builtin_abs(v156 - v153);
                  if ( HIDWORD(v155) - 128 < 0 == __OFADD__(-128, HIDWORD(v155)) )
                    v153 = v156;
                  k[1] = v153;
                  v55 = v363-- == 1;
                  k[2] = (v153 + 32) & 0xFFFFFFC0;
                  if ( v55 )
                    break;
                  v153 = v386[3];
                }
              }
            }
          }
          if ( v344 != v386[101] || (v255 = 1, v386[102] != 0) )
          {
            v386[101] = v344;
            v386[102] = 0;
            v157 = v386[52];
            if ( v157 != 0 )
            {
              v158 = v344 * (int64_t)(int)v386[53];
              v159 = (((uint64_t)(unsigned int)((SHIDWORD(v158) >> 31) + 0x8000) + v158) >> 32 << 16)
                   + ((unsigned int)((SHIDWORD(v158) >> 31) + 0x8000 + v158) >> 16);
              v386[54] = v159;
              v386[55] = (v159 + 32) & 0xFFFFFFC0;
              v364 = v157 - 1;
              if ( v157 != 1 )
              {
                for ( m = (int *)(v386 + 56); ; m += 3 )
                {
                  v161 = (unsigned int)(((int)((uint64_t)(v344 * (int64_t)*m) >> 32) >> 31) + 0x8000)
                       + v344 * (int64_t)*m;
                  v162 = (HIDWORD(v161) << 16) + WORD1(v161);
                  HIDWORD(v161) = __builtin_abs(v162 - v159);
                  if ( HIDWORD(v161) - 128 < 0 == __OFADD__(-128, HIDWORD(v161)) )
                    v159 = v162;
                  m[1] = v159;
                  v55 = v364-- == 1;
                  m[2] = (v159 + 32) & 0xFFFFFFC0;
                  if ( v55 )
                    break;
                  v159 = v386[54];
                }
              }
            }
            sub_11CB070((int)(uintptr_t)(v386 + 103), v344, 0);
            v255 = 1;
          }
        }
        LOWORD(v397[30]) = 257;
        BYTE2(v397[30]) = (unsigned int)(a4 - 2) <= 1;
        v258 = &v397[7];
        LOBYTE(v397[31]) = a4 != 1;
        HIBYTE(v397[30]) = a4 == 2 || a4 == 4;
        v267 = 0;
        while ( 1 )
        {
          v75 = v397[0];
          v316 = 0;
          v76 = *(uint32_t **)(v397[5] + 4);
          v77 = (uint32_t *)v397[2];
          if ( v397[0] != 0 )
          {
            if ( v267 != 0 )
            {
              do
              {
                v77[4] = 0;
                v77[6] = 0;
                --v75;
                v77[7] = v76[1];
                v77[8] = *v76;
                v76 += 2;
                v77 += 10;
              }
              while ( v75 != 0 );
            }
            else
            {
              do
              {
                v77[4] = 0;
                v77[6] = 0;
                --v75;
                v77[7] = *v76;
                v77[8] = v76[1];
                v76 += 2;
                v77 += 10;
              }
              while ( v75 != 0 );
            }
            v316 = v397[0];
          }
          v359 = 0;
          v327 = v397[1];
          if ( v397[1] != 0 )
          {
            v379 = (uint32_t *)v397[3];
            while ( 1 )
            {
              v78 = (uint32_t *)*v379;
              if ( v379[1] != 0 )
                break;
LABEL_137:
              ++v359;
              v379 += 2;
              if ( v359 >= v327 )
              {
                v359 = 0;
                goto LABEL_139;
              }
            }
            v79 = (uint32_t *)*v379;
            do
            {
              v79 = (uint32_t *)*v79;
              if ( v78 == v79 )
                goto LABEL_164;
            }
            while ( v79[7] == v78[7] );
            v340 = v79;
            v80 = (uint32_t *)v79[1];
            v81 = v80;
            while ( 2 )
            {
              v82 = v80;
              do
              {
                v82 = (uint32_t *)v82[1];
                if ( v81 == v82 )
                  goto LABEL_137;
                v83 = v80[7];
              }
              while ( v82[7] == v83 );
              v306 = v82[7];
              if ( v340[7] >= v83 )
              {
                if ( v83 >= v306 )
                  goto LABEL_132;
              }
              else if ( v83 <= v306 )
              {
LABEL_132:
                v340 = (uint32_t *)*v82;
                v80 = v82;
                continue;
              }
              break;
            }
            do
            {
              v80[4] |= 0x40u;
              v84 = (uint32_t *)v80[1];
              if ( v84 == v82 )
                break;
              v84[4] |= 0x40u;
              v80 = (uint32_t *)v84[1];
            }
            while ( v80 != v82 );
            goto LABEL_132;
          }
LABEL_139:
          while ( v359 < v316 )
          {
            v99 = v397[2] + 40 * v359;
            v382 = *(uint32_t *)(v99 + 16);
            if ( (v382 & 0x40) != 0 )
            {
              v100 = (uint32_t *)(v397[2] + 40 * v359);
              while ( 1 )
              {
                v100 = (uint32_t *)*v100;
                if ( (uint32_t *)v99 == v100 )
                  break;
                v101 = v100[8];
                v102 = *(uint32_t *)(v99 + 32);
                if ( v101 != v102 )
                {
                  v103 = v397[2] + 40 * v359;
                  while ( 1 )
                  {
                    v103 = *(uint32_t *)(v103 + 4);
                    if ( v99 == v103 )
                      goto LABEL_164;
                    v104 = *(uint32_t *)(v103 + 32);
                    if ( v104 != v102 )
                    {
                      if ( v102 <= v101 )
                      {
                        if ( v102 < v101 && v102 > v104 )
                        {
                          v98 = *(uint32_t *)(v99 + 16);
                          BYTE1(v98) = BYTE1(v382) | 1;
                          *(uint32_t *)(v99 + 16) = v98;
                        }
                      }
                      else if ( v102 < v104 )
                      {
                        v105 = *(uint32_t *)(v99 + 16);
                        LOBYTE(v105) = v382 | 0x80;
                        *(uint32_t *)(v99 + 16) = v105;
                      }
                      goto LABEL_164;
                    }
                  }
                }
              }
            }
LABEL_164:
            ++v359;
          }
          v380 = v397[6];
          v85 = *v258;
          v86 = (uint32_t *)v258[2];
          if ( *v258 != 0 )
          {
            do
            {
              v87 = v86;
              v86 += 7;
              sub_11CB380(v87, v380, v267, v397);
              --v85;
            }
            while ( v85 != 0 );
            v380 = v397[6];
          }
          v254 = &v397[10 * v267 + 4];
          v307 = v254 + 3;
          v88 = (unsigned int *)v254[11];
          v257 = 2 - (v267 == 0);
          v89 = v88[2];
          v274 = *v88;
          v90 = FT_DivFix(32, *(uint32_t *)(v380 + 204 * v267 + 200));
          if ( v90 > 30 )
            v90 = 30;
          v256 = v90;
          if ( v274 > 1 )
            break;
          if ( v274 == 1 )
          {
            v319 = v397[0];
LABEL_318:
            v277 = v397[2];
            v184 = v254[3];
            v185 = *(int **)(v254[11] + 8);
            v368 = (uint8_t *)v185[2];
            v347 = *v185;
            for ( n = v254[5]; v184 != 0; n += 28 )
            {
              *(uint32_t *)(n + 16) &= ~4u;
              --v184;
              *(uint32_t *)(n + 24) = -1;
            }
            if ( v347 != 0 )
            {
              v389 = 0;
              v187 = 0;
              v188 = 0;
              v286 = 0;
              v333 = 0;
              do
              {
                if ( v188 != 0 )
                {
                  v189 = v188;
                  v188 >>= 1;
                }
                else
                {
                  v192 = v368;
                  v189 = 128;
                  ++v368;
                  v389 = *v192;
                  v188 = 64;
                }
                if ( (v189 & v389) != 0 )
                {
                  v190 = v254[5] + v286;
                  v191 = *(uint32_t *)(v190 + 16);
                  if ( (v191 & 4) == 0 )
                  {
                    *(uint32_t *)(v190 + 16) = v191 | 4;
                    if ( *v307 > (unsigned int)v333 )
                      *(uint32_t *)(v254[6] + 4 * v333++) = v190;
                  }
                }
                ++v187;
                v286 += 28;
              }
              while ( v187 != v347 );
              v210 = v333;
              v211 = v254[6];
              v254[4] = v333;
              v371 = v211;
              if ( v333 > 1 )
              {
                v334 = (uint32_t *)v211;
                v287 = v210 - 1;
                v348 = 0;
                do
                {
                  v212 = v334;
                  v213 = v348;
                  v214 = (uint32_t *)v334[1];
                  if ( v348 >= 0 )
                  {
                    v215 = (uint32_t *)*v334;
                    if ( *v214 <= *(uint32_t *)*v334 )
                    {
                      v216 = (uint32_t **)(v334 - 1);
                      v391 = v348;
                      do
                      {
                        --v391;
                        *(uint32_t *)(v371 + 4 * v213 + 4) = (uint32_t)(uintptr_t)(v215);
                        *v212 = (uint32_t)(uintptr_t)(v214);
                        if ( v391 == -1 )
                          break;
                        v215 = *v216;
                        v212 = (uint32_t *)(v216--);
                        v213 = v391;
                      }
                      while ( *v215 >= *v214 );
                    }
                  }
                  ++v348;
                  ++v334;
                }
                while ( v348 != v287 );
                v210 = v254[4];
                v371 = v254[6];
              }
            }
            else
            {
              v210 = 0;
              v239 = v254[6];
              v254[4] = 0;
              v371 = v239;
            }
            sub_11CBC90(v210, v371, v277, v319, v256, v257);
          }
          v205 = v397[0];
          v91 = v397[2];
          if ( v397[0] != 0 )
          {
            do
            {
              if ( *(uint32_t *)(v91 + 24) != 0 )
              {
                v206 = *(uint32_t *)(v91 + 16);
                if ( (v206 & 0x10) == 0 )
                  *(uint32_t *)(v91 + 16) = v206 | 0x10;
              }
              v91 += 40;
              --v205;
            }
            while ( v205 != 0 );
            v381 = v397[0];
            v91 = v397[2];
          }
          else
          {
            v381 = 0;
          }
LABEL_148:
          if ( v267 == 1 )
          {
            v92 = v397[6];
            if ( v381 == 0 )
              goto LABEL_178;
            v321 = a3 + 928;
            do
            {
              v240 = *(uint8_t *)(v91 + 20);
              if ( (v240 == -2 || v240 == 2 || (v241 = *(uint8_t *)(v91 + 21)) == -2 || v241 == 2)
                && (*(uint8_t *)(v91 + 16) & 0x10) == 0 )
              {
                v242 = *(uint32_t *)(v91 + 28);
                v351 = *(uint32_t *)(a3 + 412);
                if ( v351 != 0 )
                {
                  v373 = v242 - *(uint32_t *)(a3 + 428);
                  if ( v373 >= -*(uint32_t *)(a3 + 2488) )
                  {
                    v243 = (uint32_t *)(a3 + 416);
                    v300 = *(uint32_t *)(a3 + 2488);
                    do
                    {
                      if ( v242 <= v243[2] + v300 && (*(uint8_t *)(a3 + 2492) != 0 || *(uint32_t *)(a3 + 2484) >= v373) )
                      {
                        v244 = v243[6];
                        *(uint32_t *)(v91 + 16) |= 0x30u;
                        *(uint32_t *)(v91 + 36) = v244;
                      }
                      v243 += 8;
                      if ( --v351 == 0 )
                        break;
                      v373 = v242 - v243[3];
                      v300 = *(uint32_t *)(a3 + 2488);
                    }
                    while ( v373 >= -v300 );
                  }
                }
                v245 = *(uint32_t *)(a3 + 928);
                if ( v245 != 0 )
                {
                  v352 = v245 - 1;
                  v301 = v321 + 32 * (v245 - 1) + 4;
                  v246 = *(uint32_t *)(v321 + 32 * (v245 - 1) + 12) - v242;
                  v374 = *(uint32_t *)(a3 + 2488);
                  if ( v246 >= -v374 )
                  {
                    v247 = (uint32_t *)v301;
                    while ( 1 )
                    {
                      if ( v242 >= v247[3] - v374 && (*(uint8_t *)(a3 + 2492) != 0 || *(uint32_t *)(a3 + 2484) > v246) )
                      {
                        v248 = v247[7];
                        *(uint32_t *)(v91 + 16) |= 0x30u;
                        *(uint32_t *)(v91 + 36) = v248;
                      }
                      v247 -= 8;
                      if ( v352 == 0 )
                        break;
                      v374 = *(uint32_t *)(a3 + 2488);
                      v246 = v247[2] - v242;
                      if ( v246 < -v374 )
                        break;
                      --v352;
                    }
                  }
                }
              }
              v91 += 40;
              --v381;
            }
            while ( v381 != 0 );
            v381 = v397[0];
            v91 = v397[2];
          }
          v92 = v397[6];
          v341 = *(uint32_t *)(v397[6] + 204 * v267 + 200);
          if ( v381 != 0 )
          {
            do
            {
              v94 = *(uint32_t **)(v91 + 24);
              if ( v94 != nullptr )
              {
                v360 = *(uint32_t *)(v91 + 16);
                if ( (v360 & 0x200) != 0 )
                {
                  *(uint32_t *)(v91 + 36) = v94[2];
                  v93 = v360;
                }
                else if ( (v360 & 0x400) != 0 )
                {
                  *(uint32_t *)(v91 + 36) = v94[3] + v94[2];
                  v93 = v360;
                }
                else
                {
                  v95 = *(uint32_t *)(v91 + 28) - *v94;
                  if ( v95 <= 0 )
                  {
                    v148 = (unsigned int)(((int)((uint64_t)(v341 * (int64_t)v95) >> 32) >> 31) + 0x8000)
                         + v341 * (int64_t)v95;
                    *(uint32_t *)(v91 + 36) = v94[2] + (HIDWORD(v148) << 16) + WORD1(v148);
                    v93 = v360;
                  }
                  else
                  {
                    v96 = v94[1];
                    if ( v95 < v96 )
                    {
                      v365 = v94[2];
                      v163 = FT_MulDiv(v95, v94[3], v94[1]);
                      v164 = *(uint32_t *)(v91 + 16);
                      *(uint32_t *)(v91 + 36) = v365 + v163;
                      v93 = v164;
                    }
                    else
                    {
                      v97 = (unsigned int)(((int)((uint64_t)(v341 * (int64_t)(v95 - v96)) >> 32) >> 31) + 0x8000)
                          + v341 * (int64_t)(v95 - v96);
                      *(uint32_t *)(v91 + 36) = v94[3] + v94[2] + (HIDWORD(v97) << 16) + WORD1(v97);
                      v93 = v360;
                    }
                  }
                }
                *(uint32_t *)(v91 + 16) = v93 | 0x20;
              }
              v91 += 40;
              --v381;
            }
            while ( v381 != 0 );
            v92 = v397[6];
            v284 = v397[4];
            v385 = v397[2];
            v297 = *(uint32_t *)(v397[6] + 204 * v267 + 200);
            v343 = v397[2] + 40 * v397[0];
            if ( v397[2] < v343 )
            {
              v128 = v397[2];
              v129 = 0;
              do
              {
                v55 = (*(uint8_t *)(v128 + 16) & 0x10) == 0;
                v128 += 40;
                if ( !v55 )
                  ++v129;
              }
              while ( v343 > v128 );
              if ( v129 != 0 )
              {
                v130 = (char *)(v396);
                if ( v129 > 0x10 )
                {
                  v130 = ft_mem_realloc(v397[4], 4, 0, v129, 0, v395);
                  if ( v395[0] != 0 )
                    goto LABEL_177;
                }
                v131 = v385;
                v132 = 0;
                do
                {
                  if ( (*(uint8_t *)(v131 + 16) & 0x10) != 0 )
                  {
                    for ( ii = &v130[4 * v132];
                          v130 < ii && *(uint32_t *)(*((uint32_t *)ii - 1) + 28) > *(uint32_t *)(v131 + 28);
                          ii -= 4 )
                    {
                      *(uint32_t *)ii = *((uint32_t *)ii - 1);
                    }
                    *(uint32_t *)ii = v131;
                    ++v132;
                  }
                  v131 += 40;
                }
                while ( v343 > v131 );
                v362 = v132;
                v276 = (int)(uintptr_t)(&v130[4 * v132 - 4]);
                v134 = v385;
                while ( 1 )
                {
                  v330 = *(uint32_t *)(v134 + 16);
                  if ( (v330 & 0x10) == 0 )
                  {
                    v136 = *(uint32_t *)(v385 + 12);
                    if ( (v136 & 2) == 0 )
                      goto LABEL_243;
                    v135 = *(uint8_t *)(v385 + 20);
                    if ( v135 != 4 && v135 == *(uint8_t *)(v385 + 21) && ((v330 & 0x40) != 0 || (v136 & 4) != 0) )
                      break;
                  }
LABEL_240:
                  v385 += 40;
                  v134 = v385;
                  if ( v343 <= v385 )
                  {
                    if ( v130 != (char *)(uintptr_t)(v396) )
                      ft_mem_free(v284, (int)(uintptr_t)(v130));
LABEL_177:
                    v92 = v397[6];
                    goto LABEL_178;
                  }
                }
                *(uint32_t *)(v385 + 12) = v136 & 0xFFFFFFFD;
LABEL_243:
                v309 = *(uint32_t *)(*(uint32_t *)v130 + 28);
                v137 = *(uint32_t *)(v385 + 28);
                if ( v362 != 0 && (v138 = 0, v137 >= v309) )
                {
                  while ( v138 + 1 != v362 )
                  {
                    if ( *(uint32_t *)(*(uint32_t *)&v130[4 * v138 + 4] + 28) > v137 )
                    {
                      if ( v138 == -1 )
                        goto LABEL_259;
                      break;
                    }
                    ++v138;
                  }
                  v139 = *(uint32_t *)&v130[4 * v138];
                  v140 = v362;
                  if ( *(uint32_t *)(*(uint32_t *)v276 + 28) >= v137 )
                  {
                    do
                    {
                      if ( --v140 == 0 )
                      {
                        v141 = 0;
                        goto LABEL_254;
                      }
                    }
                    while ( *(uint32_t *)(*(uint32_t *)&v130[4 * v140 - 4] + 28) >= v137 );
                    if ( v362 == v140 )
                      goto LABEL_359;
                    v141 = 4 * v140;
LABEL_254:
                    v142 = *(uint32_t *)&v130[v141];
                    v310 = *(uint32_t *)(v139 + 28);
                    if ( v310 == v137 )
                    {
                      v209 = *(uint32_t *)(v139 + 36);
                      v144 = v385;
                      *(uint32_t *)(v385 + 36) = v209;
                      v145 = v330;
                    }
                    else
                    {
                      v143 = *(uint32_t *)(v142 + 28);
                      if ( v143 == v137 )
                      {
                        v144 = v385;
                        *(uint32_t *)(v385 + 36) = *(uint32_t *)(v142 + 36);
                        v145 = v330;
                      }
                      else
                      {
                        v208 = *(uint32_t *)(v139 + 36);
                        *(uint32_t *)(v385 + 36) = v208
                                               + FT_MulDiv(v137 - v310, *(uint32_t *)(v142 + 36) - v208, v143 - v310);
                        v145 = *(uint32_t *)(v385 + 16);
                        v144 = v385;
                      }
                    }
                  }
                  else
                  {
LABEL_359:
                    v207 = (unsigned int)(((int)((uint64_t)(v297
                                                                  * (int64_t)(v137 - *(uint32_t *)(*(uint32_t *)v276 + 28))) >> 32) >> 31)
                                        + 0x8000)
                         + v297 * (int64_t)(v137 - *(uint32_t *)(*(uint32_t *)v276 + 28));
                    v144 = v385;
                    *(uint32_t *)(v385 + 36) = *(uint32_t *)(*(uint32_t *)v276 + 36) + (HIDWORD(v207) << 16) + WORD1(v207);
                    v145 = v330;
                  }
                }
                else
                {
LABEL_259:
                  v146 = (unsigned int)(((int)((uint64_t)(v297 * (int64_t)(v137 - v309)) >> 32) >> 31) + 0x8000)
                       + v297 * (int64_t)(v137 - v309);
                  v144 = v385;
                  *(uint32_t *)(v385 + 36) = *(uint32_t *)(*(uint32_t *)v130 + 36) + (HIDWORD(v146) << 16) + WORD1(v146);
                  v145 = v330;
                }
                *(uint32_t *)(v144 + 16) = v145 | 0x20;
                goto LABEL_240;
              }
            }
          }
LABEL_178:
          v283 = (unsigned int *)v397[3];
          v275 = v397[1];
          v317 = *(uint32_t *)(v92 + 204 * v267 + 200);
          v270 = *(uint32_t *)(v92 + 204 * v267 + 204);
          if ( v397[1] != 0 )
          {
            while ( 1 )
            {
              v328 = *v283 + 40 * v283[1];
              if ( *v283 >= v328 )
                goto LABEL_203;
              v106 = *v283;
              v107 = 0;
              v108 = 0;
              do
              {
                v109 = v106;
                v383 = (*(uint8_t *)(v106 + 16) & 0x20) != 0;
                v106 += 40;
                if ( !v383 || v108 != 0 )
                  v109 = v108;
                if ( v383 && v108 == 0 || v383 && v108 != 0 )
                {
                  v108 = v109;
                  ++v107;
                }
              }
              while ( v328 > v106 );
              v384 = v108;
              if ( v107 > 1 )
                break;
              if ( v107 == 1 )
              {
                v147 = (unsigned int)(((int)((uint64_t)(v317 * (int64_t)*(int *)(v108 + 28)) >> 32) >> 31)
                                    + 0x8000)
                     + v317 * (int64_t)*(int *)(v108 + 28);
                v123 = v317;
                v270 = *(uint32_t *)(v108 + 36) - ((HIDWORD(v147) << 16) + WORD1(v147));
              }
              else
              {
                v123 = v317;
              }
              v124 = *v283;
              do
              {
                if ( v384 != v124 )
                {
                  v125 = (unsigned int)(((int)((uint64_t)(v123 * (int64_t)*(int *)(v124 + 28)) >> 32) >> 31)
                                      + 0x8000)
                       + v123 * (int64_t)*(int *)(v124 + 28);
                  *(uint32_t *)(v124 + 36) = v270 + (HIDWORD(v125) << 16) + WORD1(v125);
                }
                v124 += 40;
              }
              while ( v328 > v124 );
LABEL_203:
              v283 += 2;
              if ( --v275 == 0 )
                goto LABEL_204;
            }
            while ( 2 )
            {
              v110 = v108;
LABEL_188:
              v108 = *(uint32_t *)(v110 + 4);
              if ( v108 == v384 )
                goto LABEL_203;
              if ( (*(uint8_t *)(v108 + 16) & 0x20) != 0 )
                continue;
              break;
            }
            v111 = v110;
            v110 = *(uint32_t *)(v110 + 4);
            do
              v110 = *(uint32_t *)(v110 + 4);
            while ( (*(uint8_t *)(v110 + 16) & 0x20) == 0 );
            v361 = *(uint32_t *)(v111 + 28);
            v112 = *(uint32_t *)(v110 + 28);
            if ( v361 > v112 )
            {
              v329 = *(uint32_t *)(v110 + 36);
              v127 = v361 - v112;
              v361 = *(uint32_t *)(v110 + 28);
              v342 = v127;
              v113 = *(uint32_t *)(v111 + 36);
            }
            else
            {
              v329 = *(uint32_t *)(v111 + 36);
              v342 = v112 - v361;
              v113 = *(uint32_t *)(v110 + 36);
            }
            v114 = v113 - v329;
            v308 = 0x10000;
            if ( v342 > 0 )
            {
              v251 = v114;
              v253 = v111;
              v308 = FT_DivFix(v114, v342);
              v114 = v251;
              v108 = *(uint32_t *)(v253 + 4);
            }
            v296 = v329 + v114;
            while ( 2 )
            {
              while ( 1 )
              {
                v117 = *(uint32_t *)(v108 + 28) - v361;
                if ( v117 <= 0 )
                  break;
                if ( v342 <= v117 )
                {
                  v115 = (unsigned int)(((int)((uint64_t)(v317 * (int64_t)(v117 - v342)) >> 32) >> 31) + 0x8000)
                       + v317 * (int64_t)(v117 - v342);
                  v116 = v296 + (HIDWORD(v115) << 16) + WORD1(v115);
                  goto LABEL_198;
                }
                v118 = (unsigned int)(((int)((uint64_t)(v308 * (int64_t)v117) >> 32) >> 31) + 0x8000)
                     + v308 * (int64_t)v117;
                *(uint32_t *)(v108 + 36) = v329 + (HIDWORD(v118) << 16) + WORD1(v118);
                v108 = *(uint32_t *)(v108 + 4);
                if ( v108 == v110 )
                {
LABEL_202:
                  if ( v384 == v110 )
                    goto LABEL_203;
                  goto LABEL_188;
                }
              }
              v126 = (unsigned int)(((int)((uint64_t)(v317 * (int64_t)v117) >> 32) >> 31) + 0x8000)
                   + v317 * (int64_t)v117;
              v116 = v329 + (HIDWORD(v126) << 16) + WORD1(v126);
LABEL_198:
              *(uint32_t *)(v108 + 36) = v116;
              v108 = *(uint32_t *)(v108 + 4);
              if ( v108 == v110 )
                goto LABEL_202;
              continue;
            }
          }
LABEL_204:
          v119 = v397[2];
          v120 = *(uint32_t *)(v397[5] + 4);
          v121 = *(uint32_t *)(v397[5] + 8);
          if ( v397[0] != 0 )
          {
            v122 = 0;
            if ( v267 != 0 )
            {
              do
              {
                *(uint32_t *)(v120 + 8 * v122 + 4) = *(uint32_t *)(v119 + 36);
                if ( (*(uint8_t *)(v119 + 16) & 0x10) != 0 )
                  *(uint8_t *)(v121 + v122) |= 0x40u;
                v119 += 40;
                ++v122;
              }
              while ( v122 < v397[0] );
            }
            else
            {
              do
              {
                *(uint32_t *)(v120 + 8 * v122) = *(uint32_t *)(v119 + 36);
                if ( (*(uint8_t *)(v119 + 16) & 0x10) != 0 )
                  *(uint8_t *)(v121 + v122) |= 0x20u;
                v119 += 40;
                ++v122;
              }
              while ( v122 < v397[0] );
            }
          }
          if ( v255 != 0 )
          {
            v390 = (uint32_t *)v397[6];
            if ( v260 != *(uint32_t *)(v397[6] + 200) || *(uint32_t *)(v397[6] + 204) != 0 )
            {
              *(uint32_t *)(v397[6] + 200) = v260;
              v390[51] = 0;
              v193 = v390[1];
              if ( v193 != 0 )
              {
                v194 = v260 * (int64_t)(int)v390[2];
                v195 = (((uint64_t)(unsigned int)((SHIDWORD(v194) >> 31) + 0x8000) + v194) >> 32 << 16)
                     + ((unsigned int)((SHIDWORD(v194) >> 31) + 0x8000 + v194) >> 16);
                v390[3] = v195;
                v390[4] = (v195 + 32) & 0xFFFFFFC0;
                v369 = v193 - 1;
                if ( v193 != 1 )
                {
                  for ( jj = (int *)(v390 + 5); ; jj += 3 )
                  {
                    v197 = (unsigned int)(((int)((uint64_t)(v260 * (int64_t)*jj) >> 32) >> 31) + 0x8000)
                         + v260 * (int64_t)*jj;
                    v198 = (HIDWORD(v197) << 16) + WORD1(v197);
                    HIDWORD(v197) = __builtin_abs(v198 - v195);
                    if ( HIDWORD(v197) - 128 < 0 == __OFADD__(-128, HIDWORD(v197)) )
                      v195 = v198;
                    jj[1] = v195;
                    v55 = v369-- == 1;
                    jj[2] = (v195 + 32) & 0xFFFFFFC0;
                    if ( v55 )
                      break;
                    v195 = v390[3];
                  }
                }
              }
            }
            if ( v265 != v390[101] || v390[102] != 0 )
            {
              v390[101] = v265;
              v390[102] = 0;
              v199 = v390[52];
              if ( v199 != 0 )
              {
                v200 = v265 * (int64_t)(int)v390[53];
                v201 = (((uint64_t)(unsigned int)((SHIDWORD(v200) >> 31) + 0x8000) + v200) >> 32 << 16)
                     + ((unsigned int)((SHIDWORD(v200) >> 31) + 0x8000 + v200) >> 16);
                v390[54] = v201;
                v390[55] = (v201 + 32) & 0xFFFFFFC0;
                v370 = v199 - 1;
                if ( v199 != 1 )
                {
                  for ( kk = (int *)(v390 + 56); ; kk += 3 )
                  {
                    v203 = (unsigned int)(((int)((uint64_t)(v265 * (int64_t)*kk) >> 32) >> 31) + 0x8000)
                         + v265 * (int64_t)*kk;
                    v204 = (HIDWORD(v203) << 16) + WORD1(v203);
                    HIDWORD(v203) = __builtin_abs(v204 - v201);
                    if ( HIDWORD(v203) - 128 < 0 == __OFADD__(-128, HIDWORD(v203)) )
                      v201 = v204;
                    kk[1] = v201;
                    v55 = v370-- == 1;
                    kk[2] = (v201 + 32) & 0xFFFFFFC0;
                    if ( v55 )
                      break;
                    v201 = v390[54];
                  }
                }
              }
              sub_11CB070((int)(uintptr_t)(v390 + 103), v265, 0);
            }
          }
          ++v267;
          v258 += 10;
          if ( v267 == 2 )
            goto LABEL_5;
        }
        if ( v397[0] == 0 )
        {
          v91 = v397[2];
          v381 = 0;
          goto LABEL_148;
        }
        v165 = v397[0];
        if ( *(uint32_t *)(v89 + 12) <= v397[0] )
          v165 = *(uint32_t *)(v89 + 12);
        v166 = v397[0];
        v285 = (int *)(v89 + 16);
        for ( mm = (int *)(v89 + 16); ; mm = v285 )
        {
          v168 = v166;
          if ( mm[3] <= v166 )
            v168 = mm[3];
          v271 = v168;
          v263 = v168 - v165;
          if ( (int)(v168 - v165) > 0 )
          {
            v387 = (uint8_t *)mm[2];
            v262 = v397[2] + 40 * v165;
            v345 = *mm;
            v169 = *v307;
            for ( nn = v254[5]; v169 != 0; nn += 28 )
            {
              *(uint32_t *)(nn + 16) &= ~4u;
              --v169;
              *(uint32_t *)(nn + 24) = -1;
            }
            if ( v345 != 0 )
            {
              v366 = 0;
              v318 = 0;
              v171 = 0;
              v172 = 0;
              v298 = 0;
              do
              {
                if ( v172 != 0 )
                {
                  v173 = v172;
                  v172 >>= 1;
                }
                else
                {
                  v176 = v387;
                  v172 = 64;
                  ++v387;
                  v366 = *v176;
                  v173 = 128;
                }
                if ( (v173 & v366) != 0 )
                {
                  v174 = v254[5] + v298;
                  v175 = *(uint32_t *)(v174 + 16);
                  if ( (v175 & 4) == 0 )
                  {
                    *(uint32_t *)(v174 + 16) = v175 | 4;
                    if ( v318 < (unsigned int)*v307 )
                      *(uint32_t *)(v254[6] + 4 * v318++) = v174;
                  }
                }
                ++v171;
                v298 += 28;
              }
              while ( v171 != v345 );
              v177 = v318;
              v178 = v254[6];
              v254[4] = v318;
              v367 = v178;
              if ( v318 > 1 )
              {
                v332 = (uint32_t *)v178;
                v346 = 0;
                do
                {
                  v179 = v332;
                  v180 = v346;
                  v181 = (uint32_t *)v332[1];
                  if ( v346 >= 0 )
                  {
                    v182 = (uint32_t *)*v332;
                    if ( *v181 <= *(uint32_t *)*v332 )
                    {
                      v183 = (uint32_t **)(v332 - 1);
                      v388 = v346;
                      do
                      {
                        --v388;
                        *(uint32_t *)(v367 + 4 * v180 + 4) = (uint32_t)(uintptr_t)(v182);
                        *v179 = (uint32_t)(uintptr_t)(v181);
                        if ( v388 == -1 )
                          break;
                        v182 = *v183;
                        v179 = (uint32_t *)(v183--);
                        v180 = v388;
                      }
                      while ( *v182 >= *v181 );
                    }
                  }
                  ++v346;
                  ++v332;
                }
                while ( v346 != v318 - 1 );
                v178 = v254[6];
                v177 = v254[4];
              }
            }
            else
            {
              v177 = 0;
              v178 = v254[6];
              v254[4] = 0;
            }
            sub_11CBC90(v177, v178, v262, v263, v256, v257);
            v166 = v397[0];
          }
          if ( --v274 == 1 )
            break;
          v285 += 4;
          v165 = v271;
        }
        v319 = v166;
        goto LABEL_318;
      }
    }
  }
LABEL_5:
  v6 = v397[4];
  ft_mem_free(v397[4], v397[23]);
  memset(&v397[22], 0, 12);
  ft_mem_free(v6, v397[20]);
  v397[20] = 0;
  ft_mem_free(v6, v397[19]);
  memset(&v397[17], 0, 12);
  v397[21] = 0;
  ft_mem_free(v6, v397[13]);
  memset(&v397[12], 0, 12);
  ft_mem_free(v6, v397[10]);
  v397[10] = 0;
  ft_mem_free(v6, v397[9]);
  memset(&v397[7], 0, 12);
  v397[11] = 0;
  ft_mem_free(v6, v397[2]);
  v397[2] = 0;
  ft_mem_free(v6, v397[3]);
  return v289;
}

// ----------------------------------------------------------------------------
// Function: TT_RunIns  (binary VA: 0x11ec100)
// Original: TT_RunIns
// ----------------------------------------------------------------------------
int TT_RunIns(int a1)
{
  int v1;
  bool v2;
  void *v3;
  int16_t v4;
  int16_t v5; // si
  int16_t v6;
  int (*v7)(int, int, int);
  int (*v8)(int, int, int);
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  uint8_t v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int result;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int n;
  unsigned int v29;
  int v30;
  unsigned int v31;
  char v32;
  unsigned int v33;
  int v34;
  int16_t v35;
  uint64_t v36; // rax
  int v37;
  int v38;
  unsigned int v39;
  char v40;
  unsigned int v41;
  int v42;
  int16_t v43;
  uint64_t v44; // rax
  uint16_t v45; // si
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  uint32_t *v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  int v79;
  unsigned int v80;
  char v81;
  unsigned int v82;
  int v83;
  int16_t v84;
  uint64_t v85; // rax
  uint16_t v86; // si
  int v87;
  bool *v88;
  bool v89;
  bool *v90;
  bool v91;
  unsigned int v92;
  unsigned int v93;
  int v94;
  uint32_t *v95;
  int v96;
  int v97;
  unsigned int v98;
  int v99;
  int v100;
  int v101;
  bool v102;
  uint16_t v103;
  int *v104;
  uint32_t *v105;
  int v106;
  int v107;
  int v108;
  int v109;
  uint32_t *v110;
  uint32_t *v111;
  int v112;
  int v113;
  int16_t v114;
  int16_t v115; // si
  int16_t v116;
  int (*v117)(int, int, int);
  int (*v118)(int, int, int);
  int v119;
  int64_t v120; // rax
  int v121;
  int v122;
  int v123;
  int v124;
  int16_t v125; // si
  int16_t v126;
  uint64_t v127; // rax
  int v128;
  int16_t v129; // si
  int16_t v130;
  uint64_t v131; // rax
  uint16_t v132;
  unsigned int v133;
  uint32_t *v134;
  uint32_t *v135;
  int v136;
  uint16_t v137; // si
  uint32_t *v138;
  int v139;
  int v140;
  int v141;
  unsigned int v142;
  int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int i;
  int v148;
  int v149;
  int v150;
  int v151;
  unsigned int v152;
  unsigned int v153;
  int v154;
  unsigned int v155;
  unsigned int v156;
  int *v157;
  int v158;
  uint32_t *v159;
  int v160;
  unsigned int v161;
  int v162;
  int v163;
  int v164;
  uint16_t v165;
  int v166;
  int16_t v167;
  int (*v168)(int, int, int);
  int (*v169)(int, int, int);
  int v170;
  unsigned int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int *v179;
  int v180;
  int m;
  uint16_t v182;
  int v183;
  uint32_t *v184;
  uint32_t *v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  unsigned int v191;
  int v192;
  int v193;
  int16_t v194;
  int v195;
  unsigned int v196;
  int v197;
  uint16_t v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  uint32_t *v207;
  int v208;
  int v209;
  uint16_t v210;
  int v211;
  int v212;
  uint16_t v213;
  uint32_t *v214;
  int64_t v215; // rax
  int64_t v216; // rax
  uint32_t *v217;
  int v218;
  int v219;
  int v220;
  int64_t v221; // rax
  int64_t v222; // rax
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  unsigned int v228;
  unsigned int v229;
  int v230;
  uint32_t *v231;
  int v232;
  int v233;
  unsigned int v234;
  int v235;
  int v236;
  int64_t v237; // rax
  int16_t v238; // si
  uint16_t v239;
  uint16_t v240;
  int v241;
  unsigned int v242;
  unsigned int v243;
  int *v244;
  int v245;
  uint32_t *v246;
  int v247;
  unsigned int v248;
  uint16_t v249; // si
  unsigned int v250;
  uint32_t *v251;
  uint32_t *v252;
  int v253;
  int *v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int16_t v268;
  int16_t v269; // si
  int16_t v270;
  int (*v271)(int, int, int);
  int (*v272)(int, int, int);
  int v273;
  unsigned int v274;
  unsigned int v275;
  unsigned int v276;
  uint16_t v277;
  uint16_t v278;
  int v279;
  int v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  uint16_t v288;
  int v289;
  uint16_t v290; // si
  uint8_t *v291;
  int v292;
  int v293;
  int v294;
  int v295;
  unsigned int v296;
  int v297;
  int v298;
  signed int v299;
  signed int v300;
  int v301;
  int v302;
  int16_t v303;
  int16_t v304; // si
  int16_t v305;
  int (*v306)(int, int, int);
  int (*v307)(int, int, int);
  int v308;
  unsigned int v309;
  unsigned int v310;
  int v311;
  uint32_t *v312;
  int v313;
  int v314;
  unsigned int v315;
  uint16_t v316;
  int v317;
  uint16_t v318; // si
  uint8_t *v319;
  unsigned int v320;
  int v321;
  unsigned int v322;
  int v323;
  unsigned int v324;
  uint16_t v325; // si
  int v326;
  int v327;
  uint32_t *v328;
  int v329;
  int16_t v330;
  int16_t v331;
  int16_t v332; // si
  int16_t v333; // si
  int v334;
  int (*v335)(int, int, int);
  int (*v336)(int, int, int);
  int v337;
  uint16_t v338;
  unsigned int v339;
  int *v340;
  uint32_t *v341;
  int v342;
  int v343;
  int v344;
  int v345;
  int16_t v346;
  int16_t v347; // si
  int16_t v348;
  int (*v349)(int, int, int);
  int (*v350)(int, int, int);
  int v351;
  uint16_t v352;
  int v353;
  int *v354;
  uint32_t *v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int16_t v360;
  int16_t v361; // si
  int16_t v362;
  int (*v363)(int, int, int);
  int (*v364)(int, int, int);
  int v365;
  unsigned int v366;
  unsigned int v367;
  unsigned int v368;
  int v369;
  int v370;
  int v371;
  uint16_t v372;
  int v373;
  uint16_t v374; // si
  int16_t v375;
  uint16_t v376;
  int v377;
  int v378;
  unsigned int v379;
  uint16_t v380;
  int v381;
  uint32_t *v382;
  int v383;
  int v384;
  int v385;
  int v386;
  int v387;
  int v388;
  unsigned int v389;
  unsigned int v390;
  unsigned int v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  unsigned int v397;
  int v398;
  int v399;
  int v400;
  int v401;
  int v402;
  int v403;
  int64_t v404; // rax
  int v405;
  int v406;
  int v407;
  int v408;
  int v409;
  int v410;
  int v411;
  unsigned int v412;
  int v413;
  uint32_t *v414;
  int v415;
  int v416;
  int k;
  uint16_t v418;
  uint32_t *v419;
  int v420;
  unsigned int v421;
  int v422;
  int v423;
  uint16_t v424; // si
  int v425;
  int v426;
  uint16_t v427;
  int v428;
  int v429;
  int v430;
  int j;
  int v432;
  uint16_t v433; // si
  uint32_t *v434;
  int v435;
  int v436;
  uint16_t v437;
  uint32_t *v438;
  uint32_t *v439;
  int v440;
  int v441;
  char v442;
  int v443;
  int v444;
  uint32_t *v445;
  int v446;
  int v447;
  int v448;
  int v449;
  int v450;
  uint32_t *v451;
  int v452;
  int v453;
  int v454;
  int v455;
  int v456;
  int v457;
  int v458;
  int v459;
  int v460;
  int v461;
  uint32_t *v462;
  int v463;
  uint32_t *v464;
  int v465;
  char v466;
  int v467;
  int v468;
  unsigned int v469;
  int v470;
  uint32_t *v471;
  int v472;
  int *v473;
  int v474;
  int v475;
  int v476;
  int v477;
  int v478;
  bool v479; // cc
  int v480;
  int v481;
  int v482;
  int v483;
  uint16_t v484;
  uint16_t v485;
  int v486;
  int v487;
  uint32_t *v488;
  uint32_t *v489;
  uint32_t *v490;
  int v491;
  uint32_t *v492;
  int64_t v493; // rax
  int64_t v494; // rax
  unsigned int v495;
  int v496;
  uint32_t *v497;
  int v498;
  int v499;
  unsigned int v500;
  uint32_t *v501;
  uint32_t *v502;
  uint32_t *v503;
  uint32_t *v504;
  uint32_t *v505;
  uint32_t *v506;
  uint32_t *v507;
  int v508;
  int64_t v509; // rax
  int64_t v510; // rax
  int64_t v511; // rax
  uint32_t *v512;
  uint32_t *v513;
  int64_t v514; // rax
  uint32_t *v515;
  int16_t v516;
  int v517;
  int v518;
  typedef int _g4_t_v519;
  typedef int _g4_t_v520;
  typedef int _g4_t_v521;
  typedef int _g4_t_v522;
  typedef int _g4_t_v523;
  typedef int _g4_t_v524;
  typedef int _g4_t_v525;
  typedef int16_t _g4_t_v526;
  typedef int16_t _g4_t_v527;
  typedef int16_t _g4_t_v528;
  typedef int _g4_t_v529;
  typedef int _g4_t_v530;
  typedef int _g4_t_v531;
  typedef int _g4_t_v532;
  typedef unsigned int _g4_t_v533;
  typedef int _g4_t_v534;
  typedef int _g4_t_v535;
  typedef int _g4_t_v536;
  typedef int _g4_t_v537;
  typedef int _g4_t_v538;
  typedef int _g4_t_v539;
  typedef int _g4_t_v540;
  typedef int _g4_t_v541;
  typedef int _g4_t_v542;
  typedef int _g4_t_v543;
  typedef int _g4_t_v544;
  typedef int _g4_t_v545;
  typedef int _g4_t_v546;
  typedef int _g4_t_v547;
  typedef int _g4_t_v548;
  typedef unsigned int _g4_t_v549;
  typedef unsigned int _g4_t_v550;
  typedef int _g4_t_v551;
  typedef int _g4_t_v552;
  typedef int _g4_t_v553;
  typedef int _g4_t_v554;
  typedef char _g4_t_v555;
  typedef int _g4_t_v556;
  typedef int _g4_t_v557;
  typedef int _g4_t_v558;
  typedef int _g4_t_v559;
  typedef int _g4_t_v560;
  typedef int _g4_t_v561;
  typedef int _g4_t_v562;
  typedef int _g4_t_v563;
  typedef int _g4_t_v564;
  typedef int _g4_t_v565;
  typedef int _g4_t_v566;
  typedef int _g4_t_v567;
  typedef int _g4_t_v568;
  typedef int _g4_t_v569;
  typedef int _g4_t_v570;
  typedef int _g4_t_v571;
  typedef int _g4_t_v572;
  typedef int _g4_t_v573;
  typedef int _g4_t_v574;
  typedef int _g4_t_v575;
  typedef int _g4_t_v576;
  typedef unsigned int _g4_t_v577;
  typedef uint32_t *_g4_t_v578;
  typedef int _g4_t_v579;
  typedef int _g4_t_v580;
  typedef int _g4_t_v581;
  typedef int _g4_t_v582;
  typedef int _g4_t_v583;
  typedef signed int _g4_t_v584;
  typedef unsigned int _g4_t_v585;
  typedef int _g4_t_v586;
  typedef int _g4_t_v587;
  typedef int _g4_t_v588;
  typedef uint32_t *_g4_t_v589;
  typedef int _g4_t_v590;
  typedef char _g4_t_v591;
  typedef int _g4_t_v592;
  typedef int _g4_t_v593;
  typedef int _g4_t_v594;
  typedef uint32_t *_g4_t_v595;
  typedef int _g4_t_v596;
  typedef int _g4_t_v597;
  typedef int _g4_t_v598;
  typedef int _g4_t_v599;
  typedef int _g4_t_v600;
  typedef int _g4_t_v601;
  typedef unsigned int _g4_t_v602;
  typedef unsigned int _g4_t_v603;
  typedef unsigned int _g4_t_v604;
  typedef int _g4_t_v605;
  typedef int _g4_t_v606;
  typedef unsigned int _g4_t_v607;
  typedef unsigned int _g4_t_v608;
  typedef int _g4_t_v609;
  typedef bool _g4_t_v610;
  typedef unsigned int _g4_t_v611;
  typedef int _g4_t_v612;
  typedef int _g4_t_v613;
  typedef unsigned int _g4_t_v614;
  typedef int _g4_t_v615;
  typedef int _g4_t_v616;
  typedef int _g4_t_v617;
  typedef int _g4_t_v618;
  typedef unsigned int _g4_t_v619;
  typedef unsigned int _g4_t_v620;
  typedef unsigned int _g4_t_v621;
  typedef unsigned int _g4_t_v622;
  typedef int _g4_t_v623;
  typedef int _g4_t_v624;
  typedef int _g4_t_v625;
  typedef uint16_t _g4_t_v626;
  typedef int _g4_t_v627;
  typedef unsigned int _g4_t_v628;
  typedef unsigned int _g4_t_v629;
  typedef int _g4_t_v630;
  typedef int _g4_t_v631;
  typedef int _g4_t_v632;
  typedef int _g4_t_v633;
  typedef uint16_t _g4_t_v634;
  typedef int _g4_t_v635;
  typedef int _g4_t_v636;
  typedef int _g4_t_v637;
  typedef unsigned int *_g4_t_v638;
  typedef char _g4_t_v639;
  typedef char _g4_t_v640;
  typedef char _g4_t_v641;
  typedef uint8_t _g4_t_v642;
  typedef int _g4_t_v643;
  typedef int _g4_t_v644;
  typedef int _g4_t_v645;
  typedef unsigned int _g4_t_v646;
  typedef unsigned int _g4_t_v647;
  typedef int _g4_t_v648;
  typedef uint16_t _g4_t_v649;
  typedef int _g4_t_v650;
  typedef int _g4_t_v651;
  typedef int _g4_t_v652;
  typedef int _g4_t_v653;
  typedef uint16_t _g4_t_v654;
  typedef uint8_t _g4_t_v655;
  typedef int _g4_t_v656;
  typedef int _g4_t_v657;
  typedef int _g4_t_v658;
  typedef int _g4_t_v659;
  typedef int _g4_t_v660;
  typedef unsigned int _g4_t_v661;
  typedef int _g4_t_v662;
  typedef unsigned int _g4_t_v663;
  typedef uint8_t _g4_t_v664;
  typedef uint8_t _g4_t_v665;
  typedef uint16_t _g4_t_v666;
  typedef uint16_t _g4_t_v667;
  typedef int _g4_t_v668;
  typedef uint32_t *_g4_t_v669;
  typedef uint16_t _g4_t_v670;
  typedef unsigned int _g4_t_v671;
  typedef int _g4_t_v672;
  typedef int _g4_t_v673;
  typedef uint16_t _g4_t_v674;
  typedef int _g4_t_v675;
  typedef unsigned int _g4_t_v676;
  typedef unsigned int _g4_t_v677;
  typedef uint8_t _g4_t_v678;
  typedef int _g4_t_v679;
  typedef int _g4_t_v680;
  typedef uint16_t _g4_t_v681;
  typedef int _g4_t_v682;
  typedef uint32_t *_g4_t_v683;
  typedef uint32_t *_g4_t_v684;
  typedef int _g4_t_v685;
  typedef int _g4_t_v686;
  typedef int _g4_t_v687;
  typedef int _g4_t_v688;
  typedef unsigned int _g4_t_v689;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v519)) > _g4_s0 ? (8u + sizeof(_g4_t_v519)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v520)) > _g4_s1 ? (8u + sizeof(_g4_t_v520)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v521)) > _g4_s2 ? (8u + sizeof(_g4_t_v521)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v522)) > _g4_s3 ? (8u + sizeof(_g4_t_v522)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v523)) > _g4_s4 ? (8u + sizeof(_g4_t_v523)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v524)) > _g4_s5 ? (8u + sizeof(_g4_t_v524)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v525)) > _g4_s6 ? (8u + sizeof(_g4_t_v525)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v526)) > _g4_s7 ? (8u + sizeof(_g4_t_v526)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v527)) > _g4_s8 ? (8u + sizeof(_g4_t_v527)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v528)) > _g4_s9 ? (8u + sizeof(_g4_t_v528)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v529)) > _g4_s10 ? (8u + sizeof(_g4_t_v529)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v530)) > _g4_s11 ? (8u + sizeof(_g4_t_v530)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v531)) > _g4_s12 ? (8u + sizeof(_g4_t_v531)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v532)) > _g4_s13 ? (8u + sizeof(_g4_t_v532)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v533)) > _g4_s14 ? (8u + sizeof(_g4_t_v533)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v534)) > _g4_s15 ? (12u + sizeof(_g4_t_v534)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v535)) > _g4_s16 ? (12u + sizeof(_g4_t_v535)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v536)) > _g4_s17 ? (12u + sizeof(_g4_t_v536)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v537)) > _g4_s18 ? (12u + sizeof(_g4_t_v537)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v538)) > _g4_s19 ? (12u + sizeof(_g4_t_v538)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_v539)) > _g4_s20 ? (12u + sizeof(_g4_t_v539)) : _g4_s20,
    _g4_s22 = (12u + sizeof(_g4_t_v540)) > _g4_s21 ? (12u + sizeof(_g4_t_v540)) : _g4_s21,
    _g4_s23 = (12u + sizeof(_g4_t_v541)) > _g4_s22 ? (12u + sizeof(_g4_t_v541)) : _g4_s22,
    _g4_s24 = (12u + sizeof(_g4_t_v542)) > _g4_s23 ? (12u + sizeof(_g4_t_v542)) : _g4_s23,
    _g4_s25 = (12u + sizeof(_g4_t_v543)) > _g4_s24 ? (12u + sizeof(_g4_t_v543)) : _g4_s24,
    _g4_s26 = (12u + sizeof(_g4_t_v544)) > _g4_s25 ? (12u + sizeof(_g4_t_v544)) : _g4_s25,
    _g4_s27 = (12u + sizeof(_g4_t_v545)) > _g4_s26 ? (12u + sizeof(_g4_t_v545)) : _g4_s26,
    _g4_s28 = (12u + sizeof(_g4_t_v546)) > _g4_s27 ? (12u + sizeof(_g4_t_v546)) : _g4_s27,
    _g4_s29 = (12u + sizeof(_g4_t_v547)) > _g4_s28 ? (12u + sizeof(_g4_t_v547)) : _g4_s28,
    _g4_s30 = (12u + sizeof(_g4_t_v548)) > _g4_s29 ? (12u + sizeof(_g4_t_v548)) : _g4_s29,
    _g4_s31 = (16u + sizeof(_g4_t_v549)) > _g4_s30 ? (16u + sizeof(_g4_t_v549)) : _g4_s30,
    _g4_s32 = (20u + sizeof(_g4_t_v550)) > _g4_s31 ? (20u + sizeof(_g4_t_v550)) : _g4_s31,
    _g4_s33 = (24u + sizeof(_g4_t_v551)) > _g4_s32 ? (24u + sizeof(_g4_t_v551)) : _g4_s32,
    _g4_s34 = (24u + sizeof(_g4_t_v552)) > _g4_s33 ? (24u + sizeof(_g4_t_v552)) : _g4_s33,
    _g4_s35 = (24u + sizeof(_g4_t_v553)) > _g4_s34 ? (24u + sizeof(_g4_t_v553)) : _g4_s34,
    _g4_s36 = (28u + sizeof(_g4_t_v554)) > _g4_s35 ? (28u + sizeof(_g4_t_v554)) : _g4_s35,
    _g4_s37 = (28u + sizeof(_g4_t_v555)) > _g4_s36 ? (28u + sizeof(_g4_t_v555)) : _g4_s36,
    _g4_s38 = (32u + sizeof(_g4_t_v556)) > _g4_s37 ? (32u + sizeof(_g4_t_v556)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_v557)) > _g4_s38 ? (32u + sizeof(_g4_t_v557)) : _g4_s38,
    _g4_s40 = (36u + sizeof(_g4_t_v558)) > _g4_s39 ? (36u + sizeof(_g4_t_v558)) : _g4_s39,
    _g4_s41 = (36u + sizeof(_g4_t_v559)) > _g4_s40 ? (36u + sizeof(_g4_t_v559)) : _g4_s40,
    _g4_s42 = (40u + sizeof(_g4_t_v560)) > _g4_s41 ? (40u + sizeof(_g4_t_v560)) : _g4_s41,
    _g4_s43 = (40u + sizeof(_g4_t_v561)) > _g4_s42 ? (40u + sizeof(_g4_t_v561)) : _g4_s42,
    _g4_s44 = (44u + sizeof(_g4_t_v562)) > _g4_s43 ? (44u + sizeof(_g4_t_v562)) : _g4_s43,
    _g4_s45 = (44u + sizeof(_g4_t_v563)) > _g4_s44 ? (44u + sizeof(_g4_t_v563)) : _g4_s44,
    _g4_s46 = (48u + sizeof(_g4_t_v564)) > _g4_s45 ? (48u + sizeof(_g4_t_v564)) : _g4_s45,
    _g4_s47 = (48u + sizeof(_g4_t_v565)) > _g4_s46 ? (48u + sizeof(_g4_t_v565)) : _g4_s46,
    _g4_s48 = (48u + sizeof(_g4_t_v566)) > _g4_s47 ? (48u + sizeof(_g4_t_v566)) : _g4_s47,
    _g4_s49 = (52u + sizeof(_g4_t_v567)) > _g4_s48 ? (52u + sizeof(_g4_t_v567)) : _g4_s48,
    _g4_s50 = (52u + sizeof(_g4_t_v568)) > _g4_s49 ? (52u + sizeof(_g4_t_v568)) : _g4_s49,
    _g4_s51 = (52u + sizeof(_g4_t_v569)) > _g4_s50 ? (52u + sizeof(_g4_t_v569)) : _g4_s50,
    _g4_s52 = (56u + sizeof(_g4_t_v570)) > _g4_s51 ? (56u + sizeof(_g4_t_v570)) : _g4_s51,
    _g4_s53 = (56u + sizeof(_g4_t_v571)) > _g4_s52 ? (56u + sizeof(_g4_t_v571)) : _g4_s52,
    _g4_s54 = (56u + sizeof(_g4_t_v572)) > _g4_s53 ? (56u + sizeof(_g4_t_v572)) : _g4_s53,
    _g4_s55 = (60u + sizeof(_g4_t_v573)) > _g4_s54 ? (60u + sizeof(_g4_t_v573)) : _g4_s54,
    _g4_s56 = (60u + sizeof(_g4_t_v574)) > _g4_s55 ? (60u + sizeof(_g4_t_v574)) : _g4_s55,
    _g4_s57 = (64u + sizeof(_g4_t_v575)) > _g4_s56 ? (64u + sizeof(_g4_t_v575)) : _g4_s56,
    _g4_s58 = (64u + sizeof(_g4_t_v576)) > _g4_s57 ? (64u + sizeof(_g4_t_v576)) : _g4_s57,
    _g4_s59 = (64u + sizeof(_g4_t_v577)) > _g4_s58 ? (64u + sizeof(_g4_t_v577)) : _g4_s58,
    _g4_s60 = (68u + sizeof(_g4_t_v578)) > _g4_s59 ? (68u + sizeof(_g4_t_v578)) : _g4_s59,
    _g4_s61 = (68u + sizeof(_g4_t_v579)) > _g4_s60 ? (68u + sizeof(_g4_t_v579)) : _g4_s60,
    _g4_s62 = (68u + sizeof(_g4_t_v580)) > _g4_s61 ? (68u + sizeof(_g4_t_v580)) : _g4_s61,
    _g4_s63 = (68u + sizeof(_g4_t_v581)) > _g4_s62 ? (68u + sizeof(_g4_t_v581)) : _g4_s62,
    _g4_s64 = (68u + sizeof(_g4_t_v582)) > _g4_s63 ? (68u + sizeof(_g4_t_v582)) : _g4_s63,
    _g4_s65 = (72u + sizeof(_g4_t_v583)) > _g4_s64 ? (72u + sizeof(_g4_t_v583)) : _g4_s64,
    _g4_s66 = (72u + sizeof(_g4_t_v584)) > _g4_s65 ? (72u + sizeof(_g4_t_v584)) : _g4_s65,
    _g4_s67 = (72u + sizeof(_g4_t_v585)) > _g4_s66 ? (72u + sizeof(_g4_t_v585)) : _g4_s66,
    _g4_s68 = (72u + sizeof(_g4_t_v586)) > _g4_s67 ? (72u + sizeof(_g4_t_v586)) : _g4_s67,
    _g4_s69 = (72u + sizeof(_g4_t_v587)) > _g4_s68 ? (72u + sizeof(_g4_t_v587)) : _g4_s68,
    _g4_s70 = (88u + sizeof(_g4_t_v588)) > _g4_s69 ? (88u + sizeof(_g4_t_v588)) : _g4_s69,
    _g4_s71 = (88u + sizeof(_g4_t_v589)) > _g4_s70 ? (88u + sizeof(_g4_t_v589)) : _g4_s70,
    _g4_s72 = (88u + sizeof(_g4_t_v590)) > _g4_s71 ? (88u + sizeof(_g4_t_v590)) : _g4_s71,
    _g4_s73 = (88u + sizeof(_g4_t_v591)) > _g4_s72 ? (88u + sizeof(_g4_t_v591)) : _g4_s72,
    _g4_s74 = (88u + sizeof(_g4_t_v592)) > _g4_s73 ? (88u + sizeof(_g4_t_v592)) : _g4_s73,
    _g4_s75 = (88u + sizeof(_g4_t_v593)) > _g4_s74 ? (88u + sizeof(_g4_t_v593)) : _g4_s74,
    _g4_s76 = (88u + sizeof(_g4_t_v594)) > _g4_s75 ? (88u + sizeof(_g4_t_v594)) : _g4_s75,
    _g4_s77 = (88u + sizeof(_g4_t_v595)) > _g4_s76 ? (88u + sizeof(_g4_t_v595)) : _g4_s76,
    _g4_s78 = (88u + sizeof(_g4_t_v596)) > _g4_s77 ? (88u + sizeof(_g4_t_v596)) : _g4_s77,
    _g4_s79 = (88u + sizeof(_g4_t_v597)) > _g4_s78 ? (88u + sizeof(_g4_t_v597)) : _g4_s78,
    _g4_s80 = (88u + sizeof(_g4_t_v598)) > _g4_s79 ? (88u + sizeof(_g4_t_v598)) : _g4_s79,
    _g4_s81 = (92u + sizeof(_g4_t_v599)) > _g4_s80 ? (92u + sizeof(_g4_t_v599)) : _g4_s80,
    _g4_s82 = (96u + sizeof(_g4_t_v600)) > _g4_s81 ? (96u + sizeof(_g4_t_v600)) : _g4_s81,
    _g4_s83 = (96u + sizeof(_g4_t_v601)) > _g4_s82 ? (96u + sizeof(_g4_t_v601)) : _g4_s82,
    _g4_s84 = (96u + sizeof(_g4_t_v602)) > _g4_s83 ? (96u + sizeof(_g4_t_v602)) : _g4_s83,
    _g4_s85 = (96u + sizeof(_g4_t_v603)) > _g4_s84 ? (96u + sizeof(_g4_t_v603)) : _g4_s84,
    _g4_s86 = (96u + sizeof(_g4_t_v604)) > _g4_s85 ? (96u + sizeof(_g4_t_v604)) : _g4_s85,
    _g4_s87 = (96u + sizeof(_g4_t_v605)) > _g4_s86 ? (96u + sizeof(_g4_t_v605)) : _g4_s86,
    _g4_s88 = (96u + sizeof(_g4_t_v606)) > _g4_s87 ? (96u + sizeof(_g4_t_v606)) : _g4_s87,
    _g4_s89 = (96u + sizeof(_g4_t_v607)) > _g4_s88 ? (96u + sizeof(_g4_t_v607)) : _g4_s88,
    _g4_s90 = (96u + sizeof(_g4_t_v608)) > _g4_s89 ? (96u + sizeof(_g4_t_v608)) : _g4_s89,
    _g4_s91 = (96u + sizeof(_g4_t_v609)) > _g4_s90 ? (96u + sizeof(_g4_t_v609)) : _g4_s90,
    _g4_s92 = (96u + sizeof(_g4_t_v610)) > _g4_s91 ? (96u + sizeof(_g4_t_v610)) : _g4_s91,
    _g4_s93 = (96u + sizeof(_g4_t_v611)) > _g4_s92 ? (96u + sizeof(_g4_t_v611)) : _g4_s92,
    _g4_s94 = (96u + sizeof(_g4_t_v612)) > _g4_s93 ? (96u + sizeof(_g4_t_v612)) : _g4_s93,
    _g4_s95 = (96u + sizeof(_g4_t_v613)) > _g4_s94 ? (96u + sizeof(_g4_t_v613)) : _g4_s94,
    _g4_s96 = (96u + sizeof(_g4_t_v614)) > _g4_s95 ? (96u + sizeof(_g4_t_v614)) : _g4_s95,
    _g4_s97 = (96u + sizeof(_g4_t_v615)) > _g4_s96 ? (96u + sizeof(_g4_t_v615)) : _g4_s96,
    _g4_s98 = (96u + sizeof(_g4_t_v616)) > _g4_s97 ? (96u + sizeof(_g4_t_v616)) : _g4_s97,
    _g4_s99 = (96u + sizeof(_g4_t_v617)) > _g4_s98 ? (96u + sizeof(_g4_t_v617)) : _g4_s98,
    _g4_s100 = (96u + sizeof(_g4_t_v618)) > _g4_s99 ? (96u + sizeof(_g4_t_v618)) : _g4_s99,
    _g4_s101 = (100u + sizeof(_g4_t_v619)) > _g4_s100 ? (100u + sizeof(_g4_t_v619)) : _g4_s100,
    _g4_s102 = (100u + sizeof(_g4_t_v620)) > _g4_s101 ? (100u + sizeof(_g4_t_v620)) : _g4_s101,
    _g4_s103 = (100u + sizeof(_g4_t_v621)) > _g4_s102 ? (100u + sizeof(_g4_t_v621)) : _g4_s102,
    _g4_s104 = (100u + sizeof(_g4_t_v622)) > _g4_s103 ? (100u + sizeof(_g4_t_v622)) : _g4_s103,
    _g4_s105 = (100u + sizeof(_g4_t_v623)) > _g4_s104 ? (100u + sizeof(_g4_t_v623)) : _g4_s104,
    _g4_s106 = (100u + sizeof(_g4_t_v624)) > _g4_s105 ? (100u + sizeof(_g4_t_v624)) : _g4_s105,
    _g4_s107 = (100u + sizeof(_g4_t_v625)) > _g4_s106 ? (100u + sizeof(_g4_t_v625)) : _g4_s106,
    _g4_s108 = (100u + sizeof(_g4_t_v626)) > _g4_s107 ? (100u + sizeof(_g4_t_v626)) : _g4_s107,
    _g4_s109 = (100u + sizeof(_g4_t_v627)) > _g4_s108 ? (100u + sizeof(_g4_t_v627)) : _g4_s108,
    _g4_s110 = (100u + sizeof(_g4_t_v628)) > _g4_s109 ? (100u + sizeof(_g4_t_v628)) : _g4_s109,
    _g4_s111 = (100u + sizeof(_g4_t_v629)) > _g4_s110 ? (100u + sizeof(_g4_t_v629)) : _g4_s110,
    _g4_s112 = (100u + sizeof(_g4_t_v630)) > _g4_s111 ? (100u + sizeof(_g4_t_v630)) : _g4_s111,
    _g4_s113 = (100u + sizeof(_g4_t_v631)) > _g4_s112 ? (100u + sizeof(_g4_t_v631)) : _g4_s112,
    _g4_s114 = (100u + sizeof(_g4_t_v632)) > _g4_s113 ? (100u + sizeof(_g4_t_v632)) : _g4_s113,
    _g4_s115 = (100u + sizeof(_g4_t_v633)) > _g4_s114 ? (100u + sizeof(_g4_t_v633)) : _g4_s114,
    _g4_s116 = (100u + sizeof(_g4_t_v634)) > _g4_s115 ? (100u + sizeof(_g4_t_v634)) : _g4_s115,
    _g4_s117 = (100u + sizeof(_g4_t_v635)) > _g4_s116 ? (100u + sizeof(_g4_t_v635)) : _g4_s116,
    _g4_s118 = (100u + sizeof(_g4_t_v636)) > _g4_s117 ? (100u + sizeof(_g4_t_v636)) : _g4_s117,
    _g4_s119 = (104u + sizeof(_g4_t_v637)) > _g4_s118 ? (104u + sizeof(_g4_t_v637)) : _g4_s118,
    _g4_s120 = (104u + sizeof(_g4_t_v638)) > _g4_s119 ? (104u + sizeof(_g4_t_v638)) : _g4_s119,
    _g4_s121 = (104u + sizeof(_g4_t_v639)) > _g4_s120 ? (104u + sizeof(_g4_t_v639)) : _g4_s120,
    _g4_s122 = (104u + sizeof(_g4_t_v640)) > _g4_s121 ? (104u + sizeof(_g4_t_v640)) : _g4_s121,
    _g4_s123 = (104u + sizeof(_g4_t_v641)) > _g4_s122 ? (104u + sizeof(_g4_t_v641)) : _g4_s122,
    _g4_s124 = (104u + sizeof(_g4_t_v642)) > _g4_s123 ? (104u + sizeof(_g4_t_v642)) : _g4_s123,
    _g4_s125 = (104u + sizeof(_g4_t_v643)) > _g4_s124 ? (104u + sizeof(_g4_t_v643)) : _g4_s124,
    _g4_s126 = (104u + sizeof(_g4_t_v644)) > _g4_s125 ? (104u + sizeof(_g4_t_v644)) : _g4_s125,
    _g4_s127 = (104u + sizeof(_g4_t_v645)) > _g4_s126 ? (104u + sizeof(_g4_t_v645)) : _g4_s126,
    _g4_s128 = (104u + sizeof(_g4_t_v646)) > _g4_s127 ? (104u + sizeof(_g4_t_v646)) : _g4_s127,
    _g4_s129 = (104u + sizeof(_g4_t_v647)) > _g4_s128 ? (104u + sizeof(_g4_t_v647)) : _g4_s128,
    _g4_s130 = (104u + sizeof(_g4_t_v648)) > _g4_s129 ? (104u + sizeof(_g4_t_v648)) : _g4_s129,
    _g4_s131 = (104u + sizeof(_g4_t_v649)) > _g4_s130 ? (104u + sizeof(_g4_t_v649)) : _g4_s130,
    _g4_s132 = (104u + sizeof(_g4_t_v650)) > _g4_s131 ? (104u + sizeof(_g4_t_v650)) : _g4_s131,
    _g4_s133 = (104u + sizeof(_g4_t_v651)) > _g4_s132 ? (104u + sizeof(_g4_t_v651)) : _g4_s132,
    _g4_s134 = (104u + sizeof(_g4_t_v652)) > _g4_s133 ? (104u + sizeof(_g4_t_v652)) : _g4_s133,
    _g4_s135 = (104u + sizeof(_g4_t_v653)) > _g4_s134 ? (104u + sizeof(_g4_t_v653)) : _g4_s134,
    _g4_s136 = (104u + sizeof(_g4_t_v654)) > _g4_s135 ? (104u + sizeof(_g4_t_v654)) : _g4_s135,
    _g4_s137 = (108u + sizeof(_g4_t_v655)) > _g4_s136 ? (108u + sizeof(_g4_t_v655)) : _g4_s136,
    _g4_s138 = (108u + sizeof(_g4_t_v656)) > _g4_s137 ? (108u + sizeof(_g4_t_v656)) : _g4_s137,
    _g4_s139 = (108u + sizeof(_g4_t_v657)) > _g4_s138 ? (108u + sizeof(_g4_t_v657)) : _g4_s138,
    _g4_s140 = (108u + sizeof(_g4_t_v658)) > _g4_s139 ? (108u + sizeof(_g4_t_v658)) : _g4_s139,
    _g4_s141 = (108u + sizeof(_g4_t_v659)) > _g4_s140 ? (108u + sizeof(_g4_t_v659)) : _g4_s140,
    _g4_s142 = (108u + sizeof(_g4_t_v660)) > _g4_s141 ? (108u + sizeof(_g4_t_v660)) : _g4_s141,
    _g4_s143 = (108u + sizeof(_g4_t_v661)) > _g4_s142 ? (108u + sizeof(_g4_t_v661)) : _g4_s142,
    _g4_s144 = (108u + sizeof(_g4_t_v662)) > _g4_s143 ? (108u + sizeof(_g4_t_v662)) : _g4_s143,
    _g4_s145 = (108u + sizeof(_g4_t_v663)) > _g4_s144 ? (108u + sizeof(_g4_t_v663)) : _g4_s144,
    _g4_s146 = (108u + sizeof(_g4_t_v664)) > _g4_s145 ? (108u + sizeof(_g4_t_v664)) : _g4_s145,
    _g4_s147 = (108u + sizeof(_g4_t_v665)) > _g4_s146 ? (108u + sizeof(_g4_t_v665)) : _g4_s146,
    _g4_s148 = (108u + sizeof(_g4_t_v666)) > _g4_s147 ? (108u + sizeof(_g4_t_v666)) : _g4_s147,
    _g4_s149 = (108u + sizeof(_g4_t_v667)) > _g4_s148 ? (108u + sizeof(_g4_t_v667)) : _g4_s148,
    _g4_s150 = (108u + sizeof(_g4_t_v668)) > _g4_s149 ? (108u + sizeof(_g4_t_v668)) : _g4_s149,
    _g4_s151 = (108u + sizeof(_g4_t_v669)) > _g4_s150 ? (108u + sizeof(_g4_t_v669)) : _g4_s150,
    _g4_s152 = (108u + sizeof(_g4_t_v670)) > _g4_s151 ? (108u + sizeof(_g4_t_v670)) : _g4_s151,
    _g4_s153 = (108u + sizeof(_g4_t_v671)) > _g4_s152 ? (108u + sizeof(_g4_t_v671)) : _g4_s152,
    _g4_s154 = (108u + sizeof(_g4_t_v672)) > _g4_s153 ? (108u + sizeof(_g4_t_v672)) : _g4_s153,
    _g4_s155 = (108u + sizeof(_g4_t_v673)) > _g4_s154 ? (108u + sizeof(_g4_t_v673)) : _g4_s154,
    _g4_s156 = (108u + sizeof(_g4_t_v674)) > _g4_s155 ? (108u + sizeof(_g4_t_v674)) : _g4_s155,
    _g4_s157 = (108u + sizeof(_g4_t_v675)) > _g4_s156 ? (108u + sizeof(_g4_t_v675)) : _g4_s156,
    _g4_s158 = (108u + sizeof(_g4_t_v676)) > _g4_s157 ? (108u + sizeof(_g4_t_v676)) : _g4_s157,
    _g4_s159 = (108u + sizeof(_g4_t_v677)) > _g4_s158 ? (108u + sizeof(_g4_t_v677)) : _g4_s158,
    _g4_s160 = (108u + sizeof(_g4_t_v678)) > _g4_s159 ? (108u + sizeof(_g4_t_v678)) : _g4_s159,
    _g4_s161 = (108u + sizeof(_g4_t_v679)) > _g4_s160 ? (108u + sizeof(_g4_t_v679)) : _g4_s160,
    _g4_s162 = (108u + sizeof(_g4_t_v680)) > _g4_s161 ? (108u + sizeof(_g4_t_v680)) : _g4_s161,
    _g4_s163 = (108u + sizeof(_g4_t_v681)) > _g4_s162 ? (108u + sizeof(_g4_t_v681)) : _g4_s162,
    _g4_s164 = (108u + sizeof(_g4_t_v682)) > _g4_s163 ? (108u + sizeof(_g4_t_v682)) : _g4_s163,
    _g4_s165 = (108u + sizeof(_g4_t_v683)) > _g4_s164 ? (108u + sizeof(_g4_t_v683)) : _g4_s164,
    _g4_s166 = (108u + sizeof(_g4_t_v684)) > _g4_s165 ? (108u + sizeof(_g4_t_v684)) : _g4_s165,
    _g4_s167 = (108u + sizeof(_g4_t_v685)) > _g4_s166 ? (108u + sizeof(_g4_t_v685)) : _g4_s166,
    _g4_s168 = (112u + sizeof(_g4_t_v686)) > _g4_s167 ? (112u + sizeof(_g4_t_v686)) : _g4_s167,
    _g4_s169 = (116u + sizeof(_g4_t_v687)) > _g4_s168 ? (116u + sizeof(_g4_t_v687)) : _g4_s168,
    _g4_s170 = (120u + sizeof(_g4_t_v688)) > _g4_s169 ? (120u + sizeof(_g4_t_v688)) : _g4_s169,
    _g4_s171 = (124u + sizeof(_g4_t_v689)) > _g4_s170 ? (124u + sizeof(_g4_t_v689)) : _g4_s170
  };
  alignas(16) uint8_t _g4_sf[_g4_s171];
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 8u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 8u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 8u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 8u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 8u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 8u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 8u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 8u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 8u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 8u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 8u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 8u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 8u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 8u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 8u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 12u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 12u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 12u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 12u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 12u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 12u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 12u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 12u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 12u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 12u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 12u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 12u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 12u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 12u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 12u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 16u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 20u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 24u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 24u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 24u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 28u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 28u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 32u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 32u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 36u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 36u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 40u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 40u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 44u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 44u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 48u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 48u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 48u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 52u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 52u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 52u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 56u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 56u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 56u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 60u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 60u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 64u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 64u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 64u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 68u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 68u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 68u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 68u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 68u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 72u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 72u);
  _g4_t_v585 &v585 = *reinterpret_cast<_g4_t_v585 *>(_g4_sf + 72u);
  _g4_t_v586 &v586 = *reinterpret_cast<_g4_t_v586 *>(_g4_sf + 72u);
  _g4_t_v587 &v587 = *reinterpret_cast<_g4_t_v587 *>(_g4_sf + 72u);
  _g4_t_v588 &v588 = *reinterpret_cast<_g4_t_v588 *>(_g4_sf + 88u);
  _g4_t_v589 &v589 = *reinterpret_cast<_g4_t_v589 *>(_g4_sf + 88u);
  _g4_t_v590 &v590 = *reinterpret_cast<_g4_t_v590 *>(_g4_sf + 88u);
  _g4_t_v591 &v591 = *reinterpret_cast<_g4_t_v591 *>(_g4_sf + 88u);
  _g4_t_v592 &v592 = *reinterpret_cast<_g4_t_v592 *>(_g4_sf + 88u);
  _g4_t_v593 &v593 = *reinterpret_cast<_g4_t_v593 *>(_g4_sf + 88u);
  _g4_t_v594 &v594 = *reinterpret_cast<_g4_t_v594 *>(_g4_sf + 88u);
  _g4_t_v595 &v595 = *reinterpret_cast<_g4_t_v595 *>(_g4_sf + 88u);
  _g4_t_v596 &v596 = *reinterpret_cast<_g4_t_v596 *>(_g4_sf + 88u);
  _g4_t_v597 &v597 = *reinterpret_cast<_g4_t_v597 *>(_g4_sf + 88u);
  _g4_t_v598 &v598 = *reinterpret_cast<_g4_t_v598 *>(_g4_sf + 88u);
  _g4_t_v599 &v599 = *reinterpret_cast<_g4_t_v599 *>(_g4_sf + 92u);
  _g4_t_v600 &v600 = *reinterpret_cast<_g4_t_v600 *>(_g4_sf + 96u);
  _g4_t_v601 &v601 = *reinterpret_cast<_g4_t_v601 *>(_g4_sf + 96u);
  _g4_t_v602 &v602 = *reinterpret_cast<_g4_t_v602 *>(_g4_sf + 96u);
  _g4_t_v603 &v603 = *reinterpret_cast<_g4_t_v603 *>(_g4_sf + 96u);
  _g4_t_v604 &v604 = *reinterpret_cast<_g4_t_v604 *>(_g4_sf + 96u);
  _g4_t_v605 &v605 = *reinterpret_cast<_g4_t_v605 *>(_g4_sf + 96u);
  _g4_t_v606 &v606 = *reinterpret_cast<_g4_t_v606 *>(_g4_sf + 96u);
  _g4_t_v607 &v607 = *reinterpret_cast<_g4_t_v607 *>(_g4_sf + 96u);
  _g4_t_v608 &v608 = *reinterpret_cast<_g4_t_v608 *>(_g4_sf + 96u);
  _g4_t_v609 &v609 = *reinterpret_cast<_g4_t_v609 *>(_g4_sf + 96u);
  _g4_t_v610 &v610 = *reinterpret_cast<_g4_t_v610 *>(_g4_sf + 96u);
  _g4_t_v611 &v611 = *reinterpret_cast<_g4_t_v611 *>(_g4_sf + 96u);
  _g4_t_v612 &v612 = *reinterpret_cast<_g4_t_v612 *>(_g4_sf + 96u);
  _g4_t_v613 &v613 = *reinterpret_cast<_g4_t_v613 *>(_g4_sf + 96u);
  _g4_t_v614 &v614 = *reinterpret_cast<_g4_t_v614 *>(_g4_sf + 96u);
  _g4_t_v615 &v615 = *reinterpret_cast<_g4_t_v615 *>(_g4_sf + 96u);
  _g4_t_v616 &v616 = *reinterpret_cast<_g4_t_v616 *>(_g4_sf + 96u);
  _g4_t_v617 &v617 = *reinterpret_cast<_g4_t_v617 *>(_g4_sf + 96u);
  _g4_t_v618 &v618 = *reinterpret_cast<_g4_t_v618 *>(_g4_sf + 96u);
  _g4_t_v619 &v619 = *reinterpret_cast<_g4_t_v619 *>(_g4_sf + 100u);
  _g4_t_v620 &v620 = *reinterpret_cast<_g4_t_v620 *>(_g4_sf + 100u);
  _g4_t_v621 &v621 = *reinterpret_cast<_g4_t_v621 *>(_g4_sf + 100u);
  _g4_t_v622 &v622 = *reinterpret_cast<_g4_t_v622 *>(_g4_sf + 100u);
  _g4_t_v623 &v623 = *reinterpret_cast<_g4_t_v623 *>(_g4_sf + 100u);
  _g4_t_v624 &v624 = *reinterpret_cast<_g4_t_v624 *>(_g4_sf + 100u);
  _g4_t_v625 &v625 = *reinterpret_cast<_g4_t_v625 *>(_g4_sf + 100u);
  _g4_t_v626 &v626 = *reinterpret_cast<_g4_t_v626 *>(_g4_sf + 100u);
  _g4_t_v627 &v627 = *reinterpret_cast<_g4_t_v627 *>(_g4_sf + 100u);
  _g4_t_v628 &v628 = *reinterpret_cast<_g4_t_v628 *>(_g4_sf + 100u);
  _g4_t_v629 &v629 = *reinterpret_cast<_g4_t_v629 *>(_g4_sf + 100u);
  _g4_t_v630 &v630 = *reinterpret_cast<_g4_t_v630 *>(_g4_sf + 100u);
  _g4_t_v631 &v631 = *reinterpret_cast<_g4_t_v631 *>(_g4_sf + 100u);
  _g4_t_v632 &v632 = *reinterpret_cast<_g4_t_v632 *>(_g4_sf + 100u);
  _g4_t_v633 &v633 = *reinterpret_cast<_g4_t_v633 *>(_g4_sf + 100u);
  _g4_t_v634 &v634 = *reinterpret_cast<_g4_t_v634 *>(_g4_sf + 100u);
  _g4_t_v635 &v635 = *reinterpret_cast<_g4_t_v635 *>(_g4_sf + 100u);
  _g4_t_v636 &v636 = *reinterpret_cast<_g4_t_v636 *>(_g4_sf + 100u);
  _g4_t_v637 &v637 = *reinterpret_cast<_g4_t_v637 *>(_g4_sf + 104u);
  _g4_t_v638 &v638 = *reinterpret_cast<_g4_t_v638 *>(_g4_sf + 104u);
  _g4_t_v639 &v639 = *reinterpret_cast<_g4_t_v639 *>(_g4_sf + 104u);
  _g4_t_v640 &v640 = *reinterpret_cast<_g4_t_v640 *>(_g4_sf + 104u);
  _g4_t_v641 &v641 = *reinterpret_cast<_g4_t_v641 *>(_g4_sf + 104u);
  _g4_t_v642 &v642 = *reinterpret_cast<_g4_t_v642 *>(_g4_sf + 104u);
  _g4_t_v643 &v643 = *reinterpret_cast<_g4_t_v643 *>(_g4_sf + 104u);
  _g4_t_v644 &v644 = *reinterpret_cast<_g4_t_v644 *>(_g4_sf + 104u);
  _g4_t_v645 &v645 = *reinterpret_cast<_g4_t_v645 *>(_g4_sf + 104u);
  _g4_t_v646 &v646 = *reinterpret_cast<_g4_t_v646 *>(_g4_sf + 104u);
  _g4_t_v647 &v647 = *reinterpret_cast<_g4_t_v647 *>(_g4_sf + 104u);
  _g4_t_v648 &v648 = *reinterpret_cast<_g4_t_v648 *>(_g4_sf + 104u);
  _g4_t_v649 &v649 = *reinterpret_cast<_g4_t_v649 *>(_g4_sf + 104u);
  _g4_t_v650 &v650 = *reinterpret_cast<_g4_t_v650 *>(_g4_sf + 104u);
  _g4_t_v651 &v651 = *reinterpret_cast<_g4_t_v651 *>(_g4_sf + 104u);
  _g4_t_v652 &v652 = *reinterpret_cast<_g4_t_v652 *>(_g4_sf + 104u);
  _g4_t_v653 &v653 = *reinterpret_cast<_g4_t_v653 *>(_g4_sf + 104u);
  _g4_t_v654 &v654 = *reinterpret_cast<_g4_t_v654 *>(_g4_sf + 104u);
  _g4_t_v655 &v655 = *reinterpret_cast<_g4_t_v655 *>(_g4_sf + 108u);
  _g4_t_v656 &v656 = *reinterpret_cast<_g4_t_v656 *>(_g4_sf + 108u);
  _g4_t_v657 &v657 = *reinterpret_cast<_g4_t_v657 *>(_g4_sf + 108u);
  _g4_t_v658 &v658 = *reinterpret_cast<_g4_t_v658 *>(_g4_sf + 108u);
  _g4_t_v659 &v659 = *reinterpret_cast<_g4_t_v659 *>(_g4_sf + 108u);
  _g4_t_v660 &v660 = *reinterpret_cast<_g4_t_v660 *>(_g4_sf + 108u);
  _g4_t_v661 &v661 = *reinterpret_cast<_g4_t_v661 *>(_g4_sf + 108u);
  _g4_t_v662 &v662 = *reinterpret_cast<_g4_t_v662 *>(_g4_sf + 108u);
  _g4_t_v663 &v663 = *reinterpret_cast<_g4_t_v663 *>(_g4_sf + 108u);
  _g4_t_v664 &v664 = *reinterpret_cast<_g4_t_v664 *>(_g4_sf + 108u);
  _g4_t_v665 &v665 = *reinterpret_cast<_g4_t_v665 *>(_g4_sf + 108u);
  _g4_t_v666 &v666 = *reinterpret_cast<_g4_t_v666 *>(_g4_sf + 108u);
  _g4_t_v667 &v667 = *reinterpret_cast<_g4_t_v667 *>(_g4_sf + 108u);
  _g4_t_v668 &v668 = *reinterpret_cast<_g4_t_v668 *>(_g4_sf + 108u);
  _g4_t_v669 &v669 = *reinterpret_cast<_g4_t_v669 *>(_g4_sf + 108u);
  _g4_t_v670 &v670 = *reinterpret_cast<_g4_t_v670 *>(_g4_sf + 108u);
  _g4_t_v671 &v671 = *reinterpret_cast<_g4_t_v671 *>(_g4_sf + 108u);
  _g4_t_v672 &v672 = *reinterpret_cast<_g4_t_v672 *>(_g4_sf + 108u);
  _g4_t_v673 &v673 = *reinterpret_cast<_g4_t_v673 *>(_g4_sf + 108u);
  _g4_t_v674 &v674 = *reinterpret_cast<_g4_t_v674 *>(_g4_sf + 108u);
  _g4_t_v675 &v675 = *reinterpret_cast<_g4_t_v675 *>(_g4_sf + 108u);
  _g4_t_v676 &v676 = *reinterpret_cast<_g4_t_v676 *>(_g4_sf + 108u);
  _g4_t_v677 &v677 = *reinterpret_cast<_g4_t_v677 *>(_g4_sf + 108u);
  _g4_t_v678 &v678 = *reinterpret_cast<_g4_t_v678 *>(_g4_sf + 108u);
  _g4_t_v679 &v679 = *reinterpret_cast<_g4_t_v679 *>(_g4_sf + 108u);
  _g4_t_v680 &v680 = *reinterpret_cast<_g4_t_v680 *>(_g4_sf + 108u);
  _g4_t_v681 &v681 = *reinterpret_cast<_g4_t_v681 *>(_g4_sf + 108u);
  _g4_t_v682 &v682 = *reinterpret_cast<_g4_t_v682 *>(_g4_sf + 108u);
  _g4_t_v683 &v683 = *reinterpret_cast<_g4_t_v683 *>(_g4_sf + 108u);
  _g4_t_v684 &v684 = *reinterpret_cast<_g4_t_v684 *>(_g4_sf + 108u);
  _g4_t_v685 &v685 = *reinterpret_cast<_g4_t_v685 *>(_g4_sf + 108u);
  _g4_t_v686 &v686 = *reinterpret_cast<_g4_t_v686 *>(_g4_sf + 112u);
  _g4_t_v687 &v687 = *reinterpret_cast<_g4_t_v687 *>(_g4_sf + 116u);
  _g4_t_v688 &v688 = *reinterpret_cast<_g4_t_v688 *>(_g4_sf + 120u);
  _g4_t_v689 &v689 = *reinterpret_cast<_g4_t_v689 *>(_g4_sf + 124u);

  v1 = a1;
  v2 = *(uint16_t *)(a1 + 216) == *(uint16_t *)(a1 + 218);
  *(uint32_t *)(a1 + 256) = 0;
  if ( v2 )
  {
    *(uint32_t *)(a1 + 592) = (uint32_t)(uintptr_t)(sub_11E3C00);
    *(uint32_t *)(a1 + 596) = (uint32_t)(uintptr_t)(sub_11E3C20);
    v3 = (void *)(sub_11E3C40);
  }
  else
  {
    *(uint32_t *)(a1 + 592) = (uint32_t)(uintptr_t)(sub_11E4170);
    *(uint32_t *)(a1 + 596) = (uint32_t)(uintptr_t)(sub_11E5AD0);
    v3 = (void *)(sub_11E5BB0);
  }
  *(uint32_t *)(a1 + 600) = (uint32_t)(uintptr_t)(v3);
  v4 = *(uint16_t *)(a1 + 298);
  if ( v4 == 0x4000 )
  {
    v6 = *(uint16_t *)(a1 + 294);
    *(uint32_t *)(a1 + 564) = v6;
  }
  else
  {
    v5 = *(uint16_t *)(a1 + 300);
    if ( v5 == 0x4000 )
    {
      *(uint32_t *)(a1 + 564) = *(int16_t *)(a1 + 296);
      v6 = *(uint16_t *)(a1 + 294);
    }
    else
    {
      v6 = *(uint16_t *)(a1 + 294);
      *(uint32_t *)(a1 + 564) = (v4 * v6 + v5 * *(int16_t *)(a1 + 296)) >> 14;
    }
  }
  if ( v6 == 0x4000 )
  {
    *(uint32_t *)(a1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
  }
  else
  {
    if ( *(uint16_t *)(a1 + 296) == 0x4000 )
      v7 = sub_11E3E10;
    else
      v7 = sub_11E3D40;
    *(uint32_t *)(a1 + 572) = (uint32_t)(uintptr_t)(v7);
  }
  if ( *(uint16_t *)(a1 + 290) == 0x4000 )
  {
    *(uint32_t *)(a1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
  }
  else
  {
    if ( *(uint16_t *)(a1 + 292) == 0x4000 )
      v8 = sub_11E3E10;
    else
      v8 = sub_11E3DA0;
    *(uint32_t *)(a1 + 576) = (uint32_t)(uintptr_t)(v8);
  }
  v9 = *(uint32_t *)(a1 + 564);
  *(uint32_t *)(a1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
  *(uint32_t *)(a1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
  if ( v9 != 0x4000 )
  {
LABEL_15:
    if ( (unsigned int)(v9 + 1023) <= 0x7FE )
      *(uint32_t *)(a1 + 564) = 0x4000;
    goto LABEL_17;
  }
  if ( *(uint16_t *)(a1 + 298) != 0x4000 )
  {
    if ( *(uint16_t *)(a1 + 300) == 0x4000 )
    {
      *(uint32_t *)(a1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
      *(uint32_t *)(a1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
    }
    goto LABEL_15;
  }
  *(uint32_t *)(a1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
  *(uint32_t *)(a1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
LABEL_17:
  v10 = *(uint32_t *)(a1 + 312);
  *(uint32_t *)(a1 + 256) = 0;
  switch ( (char)v10 )
  {
    case 0:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E4F00);
      break;
    case 1:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E4EC0);
      break;
    case 2:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E4FD0);
      break;
    case 3:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E4F50);
      break;
    case 4:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E4F90);
      break;
    case 5:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E3D00);
      break;
    case 6:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E5010);
      break;
    case 7:
      *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(sub_11E50A0);
      break;
    default:
      break;
  }
  v11 = *(uint32_t *)(a1 + 360);
  v637 = *(uint32_t *)(a1 + 364);
  v599 = 0;
  while ( 1 )
  {
    v600 = *(uint32_t *)(v1 + 356);
    v655 = *(uint8_t *)(v600 + v11);
    *(uint8_t *)(v1 + 368) = v655;
    v12 = v655;
    v13 = byte_1CD66A0[v655];
    *(uint32_t *)(v1 + 372) = v13;
    if ( v13 < 0 )
    {
      if ( (int)(v11 + 1) >= v637 )
        goto LABEL_60;
      v13 = 2 - v13 * *(uint8_t *)(v600 + v11 + 1);
      *(uint32_t *)(v1 + 372) = v13;
    }
    if ( (int)(v11 + v13) > v637 )
      goto LABEL_60;
    v14 = byte_1CD67A0[v655];
    v15 = *(uint32_t *)(v1 + 16) - (v14 >> 4);
    *(uint32_t *)(v1 + 28) = v15;
    if ( v15 < 0 )
    {
      if ( *(uint8_t *)(v1 + 561) != 0 )
      {
        *(uint32_t *)(v1 + 12) = 129;
        goto LABEL_61;
      }
      v24 = 0;
      if ( v14 >> 4 != 0 )
      {
        do
        {
          v25 = (uint16_t)v24++;
          *(uint32_t *)(*(uint32_t *)(v1 + 24) + 4 * v25) = 0;
          v655 = *(uint8_t *)(v1 + 368);
          v12 = v655;
        }
        while ( (uint8_t)((uint8_t)byte_1CD67A0[v655] >> 4) > (uint16_t)v24 );
        v14 = byte_1CD67A0[v655];
      }
      *(uint32_t *)(v1 + 28) = 0;
      v15 = 0;
    }
    v16 = v15 + (v14 & 0xF);
    v619 = *(uint32_t *)(v1 + 20);
    *(uint32_t *)(v1 + 32) = v16;
    if ( v16 > v619 )
      goto LABEL_76;
    v601 = *(uint32_t *)(v1 + 24);
    *(uint8_t *)(v1 + 376) = 1;
    *(uint32_t *)(v1 + 12) = 0;
    v588 = v15;
    v638 = (unsigned int *)(v601 + 4 * v15);
    switch ( v655 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
        v330 = (v12 & 1) << 14;
        v331 = v330;
        v332 = v330 ^ 0x4000;
        if ( v655 <= 3u )
        {
          *(uint16_t *)(v1 + 294) = v330;
          *(uint16_t *)(v1 + 296) = v332;
          *(uint16_t *)(v1 + 290) = v330;
          *(uint16_t *)(v1 + 292) = v332;
        }
        else
        {
          v330 = *(uint16_t *)(v1 + 294);
        }
        if ( (v12 & 2) != 0 )
        {
          v331 = *(uint16_t *)(v1 + 298);
        }
        else
        {
          *(uint16_t *)(v1 + 298) = v331;
          *(uint16_t *)(v1 + 300) = v332;
        }
        if ( v331 == 0x4000 )
        {
          *(uint32_t *)(v1 + 564) = v330;
        }
        else
        {
          v333 = *(uint16_t *)(v1 + 300);
          if ( v333 == 0x4000 )
            v334 = *(int16_t *)(v1 + 296);
          else
            v334 = (v333 * *(int16_t *)(v1 + 296) + v331 * v330) >> 14;
          *(uint32_t *)(v1 + 564) = v334;
        }
        if ( v330 == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v335 = sub_11E3E10;
          else
            v335 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v335);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v336 = sub_11E3E10;
          else
            v336 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v336);
        }
        v337 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v337 != 0x4000 )
          goto LABEL_658;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_658:
          if ( (unsigned int)(v337 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 6u:
      case 7u:
        v352 = *((uint16_t *)v638 + 2);
        v353 = *v638;
        if ( v352 >= *(uint16_t *)(v1 + 116) || (uint16_t)v353 >= *(uint16_t *)(v1 + 80) )
          goto LABEL_500;
        v354 = (int *)(*(uint32_t *)(v1 + 88) + 8 * (uint16_t)v353);
        v355 = (uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v352);
        v356 = *v354;
        v357 = v354[1] - v355[1];
        v358 = v356 - *v355;
        if ( (v358 | v357) != 0 )
        {
          if ( (v12 & 1) != 0 )
          {
            v359 = v357;
            v357 = v358;
            v358 = -v359;
          }
          if ( (unsigned int)(v358 + 0x3FFF) <= 0x7FFE && (unsigned int)(v357 + 0x3FFF) <= 0x7FFE )
          {
            if ( (v358 | v357) == 0 )
              goto LABEL_696;
            v358 <<= 14;
            v357 <<= 14;
          }
        }
        else
        {
          v357 = 0;
          v358 = 0x4000;
        }
        v525 = v357;
        v542 = 4 * FT_Hypot(v358, v357);
        *(uint16_t *)(v1 + 294) = FT_DivFix(v358, v542);
        *(uint16_t *)(v1 + 296) = FT_DivFix(v525, v542);
LABEL_696:
        v360 = *(uint16_t *)(v1 + 298);
        *(uint32_t *)(v1 + 290) = *(uint32_t *)(v1 + 294);
        if ( v360 == 0x4000 )
        {
          v362 = *(uint16_t *)(v1 + 294);
          *(uint32_t *)(v1 + 564) = v362;
        }
        else
        {
          v361 = *(uint16_t *)(v1 + 300);
          if ( v361 == 0x4000 )
          {
            *(uint32_t *)(v1 + 564) = *(int16_t *)(v1 + 296);
            v362 = *(uint16_t *)(v1 + 294);
          }
          else
          {
            v362 = *(uint16_t *)(v1 + 294);
            *(uint32_t *)(v1 + 564) = (v360 * v362 + v361 * *(int16_t *)(v1 + 296)) >> 14;
          }
        }
        if ( v362 == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v363 = sub_11E3E10;
          else
            v363 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v363);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v364 = sub_11E3E10;
          else
            v364 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v364);
        }
        v365 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v365 != 0x4000 )
          goto LABEL_708;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_708:
          if ( (unsigned int)(v365 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 8u:
      case 9u:
        v338 = *((uint16_t *)v638 + 2);
        v339 = *v638;
        if ( v338 >= *(uint16_t *)(v1 + 116) || (uint16_t)v339 >= *(uint16_t *)(v1 + 80) )
          goto LABEL_500;
        v340 = (int *)(*(uint32_t *)(v1 + 88) + 8 * (uint16_t)v339);
        v341 = (uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v338);
        v342 = *v340;
        v343 = v340[1] - v341[1];
        v344 = v342 - *v341;
        if ( (v344 | v343) != 0 )
        {
          if ( (v12 & 1) != 0 )
          {
            v345 = v343;
            v343 = v344;
            v344 = -v345;
          }
          if ( (unsigned int)(v344 + 0x3FFF) <= 0x7FFE && (unsigned int)(v343 + 0x3FFF) <= 0x7FFE )
          {
            if ( (v344 | v343) == 0 )
              goto LABEL_671;
            v344 <<= 14;
            v343 <<= 14;
          }
        }
        else
        {
          v343 = 0;
          v344 = 0x4000;
        }
        v524 = v343;
        v541 = 4 * FT_Hypot(v344, v343);
        *(uint16_t *)(v1 + 298) = FT_DivFix(v344, v541);
        *(uint16_t *)(v1 + 300) = FT_DivFix(v524, v541);
LABEL_671:
        v346 = *(uint16_t *)(v1 + 298);
        if ( v346 == 0x4000 )
        {
          v348 = *(uint16_t *)(v1 + 294);
          *(uint32_t *)(v1 + 564) = v348;
        }
        else
        {
          v347 = *(uint16_t *)(v1 + 300);
          if ( v347 == 0x4000 )
          {
            *(uint32_t *)(v1 + 564) = *(int16_t *)(v1 + 296);
            v348 = *(uint16_t *)(v1 + 294);
          }
          else
          {
            v348 = *(uint16_t *)(v1 + 294);
            *(uint32_t *)(v1 + 564) = (v346 * v348 + v347 * *(int16_t *)(v1 + 296)) >> 14;
          }
        }
        if ( v348 == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v349 = sub_11E3E10;
          else
            v349 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v349);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v350 = sub_11E3E10;
          else
            v350 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v350);
        }
        v351 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v351 != 0x4000 )
          goto LABEL_683;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_683:
          if ( (unsigned int)(v351 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0xAu:
        v301 = *(int16_t *)v638;
        v302 = *((int16_t *)v638 + 2);
        if ( (unsigned int)(v301 + 0x3FFF) > 0x7FFE || (unsigned int)(v302 + 0x3FFF) > 0x7FFE )
          goto LABEL_592;
        if ( (v302 | v301) != 0 )
        {
          v301 <<= 14;
          v302 <<= 14;
LABEL_592:
          v539 = v301;
          v523 = 4 * FT_Hypot(v301, v302);
          *(uint16_t *)(v1 + 294) = FT_DivFix(v539, v523);
          *(uint16_t *)(v1 + 296) = FT_DivFix(v302, v523);
        }
        v303 = *(uint16_t *)(v1 + 298);
        *(uint32_t *)(v1 + 290) = *(uint32_t *)(v1 + 294);
        if ( v303 == 0x4000 )
        {
          v305 = *(uint16_t *)(v1 + 294);
          *(uint32_t *)(v1 + 564) = v305;
        }
        else
        {
          v304 = *(uint16_t *)(v1 + 300);
          if ( v304 == 0x4000 )
          {
            *(uint32_t *)(v1 + 564) = *(int16_t *)(v1 + 296);
            v305 = *(uint16_t *)(v1 + 294);
          }
          else
          {
            v305 = *(uint16_t *)(v1 + 294);
            *(uint32_t *)(v1 + 564) = (v303 * v305 + v304 * *(int16_t *)(v1 + 296)) >> 14;
          }
        }
        if ( v305 == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v306 = sub_11E3E10;
          else
            v306 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v306);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v307 = sub_11E3E10;
          else
            v307 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v307);
        }
        v308 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v308 != 0x4000 )
          goto LABEL_605;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_605:
          if ( (unsigned int)(v308 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0xBu:
        v266 = *(int16_t *)v638;
        v267 = *((int16_t *)v638 + 2);
        if ( (unsigned int)(v266 + 0x3FFF) > 0x7FFE || (unsigned int)(v267 + 0x3FFF) > 0x7FFE )
          goto LABEL_536;
        if ( (v267 | v266) != 0 )
        {
          v266 <<= 14;
          v267 <<= 14;
LABEL_536:
          v538 = v266;
          v521 = 4 * FT_Hypot(v266, v267);
          *(uint16_t *)(v1 + 298) = FT_DivFix(v538, v521);
          *(uint16_t *)(v1 + 300) = FT_DivFix(v267, v521);
        }
        v268 = *(uint16_t *)(v1 + 298);
        if ( v268 == 0x4000 )
        {
          v270 = *(uint16_t *)(v1 + 294);
          *(uint32_t *)(v1 + 564) = v270;
        }
        else
        {
          v269 = *(uint16_t *)(v1 + 300);
          if ( v269 == 0x4000 )
          {
            *(uint32_t *)(v1 + 564) = *(int16_t *)(v1 + 296);
            v270 = *(uint16_t *)(v1 + 294);
          }
          else
          {
            v270 = *(uint16_t *)(v1 + 294);
            *(uint32_t *)(v1 + 564) = (v268 * v270 + v269 * *(int16_t *)(v1 + 296)) >> 14;
          }
        }
        if ( v270 == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v271 = sub_11E3E10;
          else
            v271 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v271);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v272 = sub_11E3E10;
          else
            v272 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v272);
        }
        v273 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v273 != 0x4000 )
          goto LABEL_549;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_549:
          if ( (unsigned int)(v273 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0xCu:
        *v638 = *(int16_t *)(v1 + 294);
        v638[1] = *(int16_t *)(v1 + 296);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0xDu:
        *v638 = *(int16_t *)(v1 + 298);
        v638[1] = *(int16_t *)(v1 + 300);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0xEu:
        v166 = *(uint32_t *)(v1 + 294);
        *(uint32_t *)(v1 + 298) = v166;
        if ( (uint16_t)v166 == 0x4000 || (v167 = *(uint16_t *)(v1 + 300)) == 0x4000 )
          *(uint32_t *)(v1 + 564) = 0x4000;
        else
          *(uint32_t *)(v1 + 564) = ((int16_t)v166 * (int16_t)v166 + v167 * v167) >> 14;
        if ( *(uint16_t *)(v1 + 294) == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v168 = sub_11E3E10;
          else
            v168 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v168);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v169 = sub_11E3E10;
          else
            v169 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v169);
        }
        v170 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v170 != 0x4000 )
          goto LABEL_390;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_390:
          if ( (unsigned int)(v170 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0xFu:
        v629 = v638[2];
        v611 = *v638;
        v275 = v638[1];
        v674 = *((uint16_t *)v638 + 6);
        v276 = v638[4];
        v277 = *(uint16_t *)(v1 + 44);
        if ( v674 >= v277 )
          goto LABEL_78;
        if ( (uint16_t)v276 >= v277 )
          goto LABEL_78;
        v278 = *(uint16_t *)(v1 + 80);
        v649 = v638[1];
        if ( (uint16_t)v275 >= v278
          || (uint16_t)v629 >= v278
          || (uint16_t)v611 >= *(uint16_t *)(v1 + 116) )
        {
          goto LABEL_78;
        }
        v279 = *(uint32_t *)(v1 + 52);
        v558 = (uint16_t)v276;
        v556 = v674;
        v579 = 8 * (uint16_t)v276;
        v280 = v279 + v579;
        v576 = 8 * v674;
        v281 = v279 + v576;
        v282 = *(uint32_t *)(v279 + v579);
        v283 = *(uint32_t *)(v279 + v576);
        v284 = v282 - v283;
        v571 = v283;
        v573 = *(uint32_t *)(v281 + 4);
        v285 = *(uint32_t *)(v280 + 4) - v573;
        v675 = v284;
        v286 = *(uint32_t *)(v1 + 88);
        v554 = (uint16_t)v629;
        v567 = 8 * (uint16_t)v629;
        v583 = v649;
        v590 = 8 * v649;
        v564 = *(uint32_t *)(v286 + v590);
        v630 = *(uint32_t *)(v286 + v567 + 4) - *(uint32_t *)(v286 + v590 + 4);
        v650 = *(uint32_t *)(v286 + v567) - v564;
        v562 = *(uint32_t *)(v286 + v590 + 4);
        v287 = (uint16_t)v611;
        *(uint8_t *)(*(uint32_t *)(v1 + 132) + (uint16_t)v611) |= 0x18u;
        v560 = -v285;
        v522 = v285;
        v612 = FT_MulDiv(v650, -v285, 64);
        v613 = v612 + FT_MulDiv(v630, v675, 64);
        v551 = FT_MulDiv(v650, v675, 64);
        if ( (int)(19 * __builtin_abs(v613)) > (int)__builtin_abs(FT_MulDiv(v630, v522, 64) + v551) )
        {
          v547 = FT_MulDiv(v571 - v564, v560, 64);
          v548 = FT_MulDiv(v573 - v562, v675, 64) + v547;
          v685 = FT_MulDiv(v548, v650, v613);
          v517 = FT_MulDiv(v548, v630, v613);
          *(uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v287) = v685 + *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v583);
          *(uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v287 + 4) = *(uint32_t *)(*(uint32_t *)(v1 + 88) + v590 + 4) + v517;
        }
        else
        {
          *(uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v287) = (*(uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v558)
                                                         + *(uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v556)
                                                         + *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v554)
                                                         + *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v583))
                                                        / 4;
          *(uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v287 + 4) = (*(uint32_t *)(*(uint32_t *)(v1 + 52) + v579 + 4)
                                                             + *(uint32_t *)(*(uint32_t *)(v1 + 52) + v576 + 4)
                                                             + *(uint32_t *)(*(uint32_t *)(v1 + 88) + v567 + 4)
                                                             + *(uint32_t *)(*(uint32_t *)(v1 + 88) + v590 + 4))
                                                            / 4;
        }
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x10u:
        *(uint16_t *)(v1 + 284) = *v638;
        goto LABEL_37;
      case 0x11u:
        *(uint16_t *)(v1 + 286) = *v638;
        goto LABEL_37;
      case 0x12u:
        *(uint16_t *)(v1 + 288) = *v638;
        goto LABEL_37;
      case 0x13u:
        if ( *v638 == 0 )
        {
          *(uint32_t *)(v1 + 36) = *(uint32_t *)(v1 + 180);
          *(uint32_t *)(v1 + 40) = *(uint32_t *)(v1 + 184);
          *(uint32_t *)(v1 + 44) = *(uint32_t *)(v1 + 188);
          *(uint32_t *)(v1 + 48) = *(uint32_t *)(v1 + 192);
          *(uint32_t *)(v1 + 52) = *(uint32_t *)(v1 + 196);
          *(uint32_t *)(v1 + 56) = *(uint32_t *)(v1 + 200);
          *(uint32_t *)(v1 + 60) = *(uint32_t *)(v1 + 204);
          *(uint32_t *)(v1 + 64) = *(uint32_t *)(v1 + 208);
          *(uint32_t *)(v1 + 68) = *(uint32_t *)(v1 + 212);
LABEL_36:
          *(uint16_t *)(v1 + 344) = *v638;
          goto LABEL_37;
        }
        if ( *v638 == 1 )
        {
          *(uint32_t *)(v1 + 36) = *(uint32_t *)(v1 + 144);
          *(uint32_t *)(v1 + 40) = *(uint32_t *)(v1 + 148);
          *(uint32_t *)(v1 + 44) = *(uint32_t *)(v1 + 152);
          *(uint32_t *)(v1 + 48) = *(uint32_t *)(v1 + 156);
          *(uint32_t *)(v1 + 52) = *(uint32_t *)(v1 + 160);
          *(uint32_t *)(v1 + 56) = *(uint32_t *)(v1 + 164);
          *(uint32_t *)(v1 + 60) = *(uint32_t *)(v1 + 168);
          *(uint32_t *)(v1 + 64) = *(uint32_t *)(v1 + 172);
          *(uint32_t *)(v1 + 68) = *(uint32_t *)(v1 + 176);
          goto LABEL_36;
        }
        goto LABEL_78;
      case 0x14u:
        if ( *v638 == 0 )
        {
          *(uint32_t *)(v1 + 72) = *(uint32_t *)(v1 + 180);
          *(uint32_t *)(v1 + 76) = *(uint32_t *)(v1 + 184);
          *(uint32_t *)(v1 + 80) = *(uint32_t *)(v1 + 188);
          *(uint32_t *)(v1 + 84) = *(uint32_t *)(v1 + 192);
          *(uint32_t *)(v1 + 88) = *(uint32_t *)(v1 + 196);
          *(uint32_t *)(v1 + 92) = *(uint32_t *)(v1 + 200);
          *(uint32_t *)(v1 + 96) = *(uint32_t *)(v1 + 204);
          *(uint32_t *)(v1 + 100) = *(uint32_t *)(v1 + 208);
          *(uint32_t *)(v1 + 104) = *(uint32_t *)(v1 + 212);
LABEL_238:
          *(uint16_t *)(v1 + 346) = *v638;
          goto LABEL_37;
        }
        if ( *v638 == 1 )
        {
          *(uint32_t *)(v1 + 72) = *(uint32_t *)(v1 + 144);
          *(uint32_t *)(v1 + 76) = *(uint32_t *)(v1 + 148);
          *(uint32_t *)(v1 + 80) = *(uint32_t *)(v1 + 152);
          *(uint32_t *)(v1 + 84) = *(uint32_t *)(v1 + 156);
          *(uint32_t *)(v1 + 88) = *(uint32_t *)(v1 + 160);
          *(uint32_t *)(v1 + 92) = *(uint32_t *)(v1 + 164);
          *(uint32_t *)(v1 + 96) = *(uint32_t *)(v1 + 168);
          *(uint32_t *)(v1 + 100) = *(uint32_t *)(v1 + 172);
          *(uint32_t *)(v1 + 104) = *(uint32_t *)(v1 + 176);
          goto LABEL_238;
        }
        goto LABEL_78;
      case 0x15u:
        if ( *v638 == 0 )
        {
          *(uint32_t *)(v1 + 108) = *(uint32_t *)(v1 + 180);
          *(uint32_t *)(v1 + 112) = *(uint32_t *)(v1 + 184);
          *(uint32_t *)(v1 + 116) = *(uint32_t *)(v1 + 188);
          *(uint32_t *)(v1 + 120) = *(uint32_t *)(v1 + 192);
          *(uint32_t *)(v1 + 124) = *(uint32_t *)(v1 + 196);
          *(uint32_t *)(v1 + 128) = *(uint32_t *)(v1 + 200);
          *(uint32_t *)(v1 + 132) = *(uint32_t *)(v1 + 204);
          *(uint32_t *)(v1 + 136) = *(uint32_t *)(v1 + 208);
          *(uint32_t *)(v1 + 140) = *(uint32_t *)(v1 + 212);
LABEL_558:
          *(uint16_t *)(v1 + 348) = *v638;
          goto LABEL_37;
        }
        if ( *v638 == 1 )
        {
          *(uint32_t *)(v1 + 108) = *(uint32_t *)(v1 + 144);
          *(uint32_t *)(v1 + 112) = *(uint32_t *)(v1 + 148);
          *(uint32_t *)(v1 + 116) = *(uint32_t *)(v1 + 152);
          *(uint32_t *)(v1 + 120) = *(uint32_t *)(v1 + 156);
          *(uint32_t *)(v1 + 124) = *(uint32_t *)(v1 + 160);
          *(uint32_t *)(v1 + 128) = *(uint32_t *)(v1 + 164);
          *(uint32_t *)(v1 + 132) = *(uint32_t *)(v1 + 168);
          *(uint32_t *)(v1 + 136) = *(uint32_t *)(v1 + 172);
          *(uint32_t *)(v1 + 140) = *(uint32_t *)(v1 + 176);
          goto LABEL_558;
        }
        goto LABEL_78;
      case 0x16u:
        if ( *v638 == 0 )
        {
          *(uint32_t *)(v1 + 36) = *(uint32_t *)(v1 + 180);
          *(uint32_t *)(v1 + 40) = *(uint32_t *)(v1 + 184);
          *(uint32_t *)(v1 + 44) = *(uint32_t *)(v1 + 188);
          *(uint32_t *)(v1 + 48) = *(uint32_t *)(v1 + 192);
          *(uint32_t *)(v1 + 52) = *(uint32_t *)(v1 + 196);
          *(uint32_t *)(v1 + 56) = *(uint32_t *)(v1 + 200);
          *(uint32_t *)(v1 + 60) = *(uint32_t *)(v1 + 204);
          *(uint32_t *)(v1 + 64) = *(uint32_t *)(v1 + 208);
          *(uint32_t *)(v1 + 68) = *(uint32_t *)(v1 + 212);
LABEL_531:
          v255 = *(uint32_t *)(v1 + 48);
          v256 = *(uint32_t *)(v1 + 52);
          *(uint32_t *)(v1 + 84) = v255;
          *(uint32_t *)(v1 + 88) = v256;
          *(uint32_t *)(v1 + 120) = v255;
          v257 = *(uint32_t *)(v1 + 52);
          *(uint32_t *)(v1 + 92) = *(uint32_t *)(v1 + 56);
          *(uint32_t *)(v1 + 124) = v257;
          v258 = *(uint32_t *)(v1 + 68);
          *(uint32_t *)(v1 + 96) = *(uint32_t *)(v1 + 60);
          *(uint32_t *)(v1 + 140) = v258;
          v259 = *(uint32_t *)(v1 + 36);
          *(uint32_t *)(v1 + 100) = *(uint32_t *)(v1 + 64);
          v260 = *(uint32_t *)(v1 + 68);
          v261 = *(uint32_t *)(v1 + 40);
          *(uint32_t *)(v1 + 72) = v259;
          *(uint32_t *)(v1 + 104) = v260;
          v262 = *(uint32_t *)(v1 + 44);
          v263 = *(uint32_t *)(v1 + 36);
          *(uint32_t *)(v1 + 76) = v261;
          *(uint32_t *)(v1 + 80) = v262;
          *(uint32_t *)(v1 + 108) = v263;
          *(uint32_t *)(v1 + 112) = v261;
          *(uint32_t *)(v1 + 116) = v262;
          v264 = *(uint32_t *)(v1 + 60);
          v265 = *(uint32_t *)(v1 + 64);
          *(uint32_t *)(v1 + 128) = *(uint32_t *)(v1 + 56);
          *(uint32_t *)(v1 + 132) = v264;
          *(uint32_t *)(v1 + 136) = v265;
          *(uint16_t *)(v1 + 344) = *v638;
          *(uint16_t *)(v1 + 346) = *v638;
          *(uint16_t *)(v1 + 348) = *v638;
          goto LABEL_37;
        }
        if ( *v638 == 1 )
        {
          *(uint32_t *)(v1 + 36) = *(uint32_t *)(v1 + 144);
          *(uint32_t *)(v1 + 40) = *(uint32_t *)(v1 + 148);
          *(uint32_t *)(v1 + 44) = *(uint32_t *)(v1 + 152);
          *(uint32_t *)(v1 + 48) = *(uint32_t *)(v1 + 156);
          *(uint32_t *)(v1 + 52) = *(uint32_t *)(v1 + 160);
          *(uint32_t *)(v1 + 56) = *(uint32_t *)(v1 + 164);
          *(uint32_t *)(v1 + 60) = *(uint32_t *)(v1 + 168);
          *(uint32_t *)(v1 + 64) = *(uint32_t *)(v1 + 172);
          *(uint32_t *)(v1 + 68) = *(uint32_t *)(v1 + 176);
          goto LABEL_531;
        }
LABEL_78:
        if ( *(uint8_t *)(v1 + 561) != 0 )
          goto LABEL_79;
LABEL_50:
        *(uint32_t *)(v1 + 16) = v16;
        goto LABEL_51;
      case 0x17u:
        if ( (*v638 & 0x80000000) != 0 )
          goto LABEL_754;
        *(uint32_t *)(v1 + 304) = *v638;
        goto LABEL_37;
      case 0x18u:
        *(uint32_t *)(v1 + 312) = 1;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E4EC0);
        goto LABEL_37;
      case 0x19u:
        *(uint32_t *)(v1 + 312) = 0;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E4F00);
        goto LABEL_37;
      case 0x1Au:
        *(uint32_t *)(v1 + 308) = *v638;
        goto LABEL_37;
      case 0x1Bu:
        v645 = *(uint32_t *)(v1 + 364);
        v174 = 1;
        v175 = *(uint32_t *)(v1 + 360) + *(uint32_t *)(v1 + 372);
        while ( 1 )
        {
          *(uint32_t *)(v1 + 360) = v175;
          if ( v645 <= v175 )
            goto LABEL_60;
          v606 = *(uint32_t *)(v1 + 356);
          v665 = *(uint8_t *)(v606 + v175);
          *(uint8_t *)(v1 + 368) = v665;
          v176 = byte_1CD66A0[v665];
          *(uint32_t *)(v1 + 372) = v176;
          if ( v176 < 0 )
          {
            if ( v645 <= v175 + 1 )
              goto LABEL_60;
            v176 = 2 - *(uint8_t *)(v606 + v175 + 1) * v176;
            *(uint32_t *)(v1 + 372) = v176;
          }
          v175 += v176;
          if ( v645 < v175 )
            goto LABEL_60;
          if ( v665 == 88 )
            ++v174;
          else
            v174 -= v665 == 89;
          if ( v174 == 0 )
            goto LABEL_37;
        }
      case 0x1Cu:
        v171 = *v638;
        v21 = 0;
        if ( *v638 == 0 )
        {
          v21 = 0;
          if ( v15 == 0 )
          {
            *(uint32_t *)(v1 + 12) = 132;
            LOBYTE(v21) = -124;
            v171 = *v638;
          }
        }
        v172 = *(uint32_t *)(v1 + 360) + v171;
        *(uint32_t *)(v1 + 360) = v172;
        if ( v172 < 0
          || (v173 = *(uint32_t *)(v1 + 428)) > 0
          && v172 > *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * (v173 - 1) + 12) + 8) )
        {
          *(uint32_t *)(v1 + 12) = 132;
          v21 = 132;
        }
        *(uint8_t *)(v1 + 376) = 0;
        goto LABEL_128;
      case 0x1Du:
        *(uint32_t *)(v1 + 320) = *v638;
        goto LABEL_37;
      case 0x1Eu:
        *(uint32_t *)(v1 + 324) = *v638;
        goto LABEL_37;
      case 0x1Fu:
        v237 = (unsigned int)(((int)((uint64_t)(*(int *)(v1 + 260) * (int64_t)(int)*v638) >> 32) >> 31) + 0x8000)
             + *(int *)(v1 + 260) * (int64_t)(int)*v638;
        *(uint32_t *)(v1 + 328) = (HIDWORD(v237) << 16) + WORD1(v237);
        goto LABEL_37;
      case 0x20u:
        v638[1] = *v638;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x21u:
      case 0x59u:
      case 0x7Eu:
      case 0x7Fu:
        goto LABEL_37;
      case 0x22u:
        *(uint32_t *)(v1 + 32) = 0;
        goto LABEL_37;
      case 0x23u:
        v274 = v638[1];
        v638[1] = *v638;
        *v638 = v274;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x24u:
        *v638 = *(uint32_t *)(v1 + 16);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x25u:
        v141 = *v638;
        if ( (int)*v638 <= 0 || v141 > v15 )
        {
          if ( *(uint8_t *)(v1 + 561) != 0 )
            *(uint32_t *)(v1 + 12) = 134;
          *v638 = 0;
          v21 = *(uint32_t *)(v1 + 12);
        }
        else
        {
          *v638 = *(uint32_t *)(v601 + 4 * (v15 - v141));
          v21 = *(uint32_t *)(v1 + 12);
        }
        goto LABEL_128;
      case 0x26u:
        v253 = *v638;
        if ( (int)*v638 <= 0 || v253 > v15 )
          goto LABEL_78;
        v254 = (int *)(v601 + 4 * (v15 - v253));
        v673 = *v254;
        memmove(v254, v254 + 1, 4 * v253 - 4);
        *(uint32_t *)(*(uint32_t *)(v1 + 24) + 4 * *(uint32_t *)(v1 + 28) - 4) = v673;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x27u:
        v249 = *(uint16_t *)v638;
        v250 = v638[1];
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 80) || (uint16_t)v250 >= *(uint16_t *)(v1 + 44) )
          goto LABEL_78;
        v672 = (uint16_t)v250;
        v251 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * (uint16_t)v250);
        v252 = (uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v249);
        v537 = (*(int (**)(int, int, int))(v1 + 572))(v1, *v251 - *v252, v251[1] - v252[1]) / 2;
        (*(void (**)(int, int, uint32_t, int))(v1 + 584))(v1, v1 + 72, v249, v537);
        (*(void (**)(int, int, int, int))(v1 + 584))(v1, v1 + 36, v672, -v537);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x28u:
        v51 = *(uint32_t *)(v1 + 408);
        v50 = *(uint32_t *)(v1 + 416);
        v228 = v50;
        v229 = v50 + 24 * v51;
        if ( v50 >= v229 )
          goto LABEL_758;
        while ( *(uint8_t *)(v228 + 12) != 40 || *(uint8_t *)(v228 + 16) == 0 )
        {
          v228 += 24;
          if ( v229 <= v228 )
            goto LABEL_758;
        }
        v230 = *(uint32_t *)(v1 + 428);
        if ( v230 >= *(uint32_t *)(v1 + 432) )
          goto LABEL_76;
        v231 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v230);
        *(uint32_t *)(v1 + 428) = v230 + 1;
        *v231 = *(uint32_t *)(v1 + 352);
        v232 = *(uint32_t *)(v1 + 360) + 1;
        v231[3] = v228;
        v231[1] = v232;
        v231[2] = 1;
        v233 = *(uint32_t *)v228;
        v234 = *(uint32_t *)(v228 + 4);
        if ( (unsigned int)(*(uint32_t *)v228 - 1) <= 2 )
        {
          v505 = (uint32_t *)(v1 + 8 * v233 + 436);
          if ( *v505 != 0 )
          {
            if ( v234 <= *(uint32_t *)(v1 + 8 * v233 + 440) )
            {
              *(uint32_t *)(v1 + 356) = *v505;
              *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v233 + 440);
              *(uint32_t *)(v1 + 360) = v234;
              *(uint32_t *)(v1 + 352) = v233;
              v21 = *(uint32_t *)(v1 + 12);
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 131;
              v21 = 131;
            }
          }
          else
          {
            *(uint32_t *)(v1 + 12) = 138;
            v21 = 138;
          }
        }
        else
        {
          *(uint32_t *)(v1 + 12) = 132;
          v21 = 132;
        }
        *(uint8_t *)(v1 + 376) = 0;
        goto LABEL_128;
      case 0x29u:
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 44) )
          goto LABEL_78;
        v227 = *(uint16_t *)(v1 + 298) == 0 ? -1 : 0xFFFFFFF7;
        if ( *(uint16_t *)(v1 + 300) != 0 )
          v227 = *(uint16_t *)(v1 + 298) == 0 ? -17 : -25;
        *(uint8_t *)(*(uint32_t *)(v1 + 60) + *(uint16_t *)v638) &= v227;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x2Au:
        v628 = *(uint32_t *)(v1 + 420) + 1;
        v242 = v638[1];
        if ( v242 >= v628 )
          goto LABEL_79;
        v243 = *(uint32_t *)(v1 + 404);
        if ( v628 != *(uint32_t *)(v1 + 396) || (v244 = (int *)(v243 + 24 * v242), v242 != v244[3]) )
        {
          v671 = v243 + 24 * *(uint32_t *)(v1 + 396);
          v244 = *(int **)(v1 + 404);
          if ( v243 < v671 && v242 != *(uint32_t *)(v243 + 12) )
          {
            do
              v244 += 6;
            while ( v671 > (unsigned int)(uintptr_t)(v244) && v242 != v244[3] );
          }
          if ( (int *)v671 == v244 )
            goto LABEL_79;
        }
        if ( *((uint8_t *)v244 + 16) == 0 )
          goto LABEL_79;
        v245 = *(uint32_t *)(v1 + 428);
        if ( v245 >= *(uint32_t *)(v1 + 432) )
          goto LABEL_76;
        if ( (int)*v638 <= 0 )
          goto LABEL_50;
        v246 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v245);
        *v246 = *(uint32_t *)(v1 + 352);
        v246[1] = *(uint32_t *)(v1 + 360) + 1;
        v246[2] = *v638;
        v246[3] = (uint32_t)(uintptr_t)(v244);
        ++*(uint32_t *)(v1 + 428);
        v247 = *v244;
        v248 = v244[1];
        if ( (unsigned int)(*v244 - 1) <= 2 )
        {
          v512 = (uint32_t *)(v1 + 8 * v247 + 436);
          if ( *v512 != 0 )
          {
            if ( v248 <= *(uint32_t *)(v1 + 8 * v247 + 440) )
            {
              *(uint32_t *)(v1 + 356) = *v512;
              *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v247 + 440);
              *(uint32_t *)(v1 + 360) = v248;
              *(uint32_t *)(v1 + 352) = v247;
              v21 = *(uint32_t *)(v1 + 12);
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 131;
              v21 = 131;
            }
          }
          else
          {
            *(uint32_t *)(v1 + 12) = 138;
            v21 = 138;
          }
        }
        else
        {
          *(uint32_t *)(v1 + 12) = 132;
          v21 = 132;
        }
        *(uint8_t *)(v1 + 376) = 0;
        goto LABEL_128;
      case 0x2Bu:
        v152 = *(uint32_t *)(v1 + 420) + 1;
        v153 = *v638;
        if ( *v638 >= v152 )
          goto LABEL_79;
        v154 = *(uint32_t *)(v1 + 396);
        v155 = *(uint32_t *)(v1 + 404);
        if ( v152 != v154 || (v157 = (int *)(v155 + 24 * v153), v153 != v157[3]) )
        {
          v156 = v155 + 24 * v154;
          v157 = *(int **)(v1 + 404);
          if ( v155 < v156 && v153 != *(uint32_t *)(v155 + 12) )
          {
            do
              v157 += 6;
            while ( v156 > (unsigned int)(uintptr_t)(v157) && v153 != v157[3] );
          }
          if ( (int *)v156 == v157 )
            goto LABEL_79;
        }
        if ( *((uint8_t *)v157 + 16) == 0 )
          goto LABEL_79;
        v158 = *(uint32_t *)(v1 + 428);
        if ( v158 >= *(uint32_t *)(v1 + 432) )
          goto LABEL_76;
        v159 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v158);
        *v159 = *(uint32_t *)(v1 + 352);
        v160 = *(uint32_t *)(v1 + 360) + 1;
        v159[2] = 1;
        v159[1] = v160;
        v159[3] = (uint32_t)(uintptr_t)(v157);
        ++*(uint32_t *)(v1 + 428);
        v161 = v157[1];
        v162 = *v157;
        if ( (unsigned int)(v162 - 1) <= 2 )
        {
          v501 = (uint32_t *)(v1 + 8 * v162 + 436);
          if ( *v501 != 0 )
          {
            if ( v161 <= *(uint32_t *)(v1 + 8 * v162 + 440) )
            {
              *(uint32_t *)(v1 + 356) = *v501;
              *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v162 + 440);
              *(uint32_t *)(v1 + 360) = v161;
              *(uint32_t *)(v1 + 352) = v162;
              v21 = *(uint32_t *)(v1 + 12);
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 131;
              v21 = 131;
            }
          }
          else
          {
            *(uint32_t *)(v1 + 12) = 138;
            v21 = 138;
          }
        }
        else
        {
          *(uint32_t *)(v1 + 12) = 132;
          v21 = 132;
        }
        *(uint8_t *)(v1 + 376) = 0;
        goto LABEL_128;
      case 0x2Cu:
        v144 = *(uint32_t *)(v1 + 404);
        v663 = *(uint32_t *)(v1 + 396);
        v145 = v144 + 24 * v663;
        v146 = *v638;
        for ( i = v144; v145 > i && v146 != *(uint32_t *)(i + 12); i += 24 )
          ;
        if ( v145 != i )
          goto LABEL_346;
        if ( v663 < *(uint32_t *)(v1 + 400) )
        {
          *(uint32_t *)(v1 + 396) = v663 + 1;
LABEL_346:
          if ( v146 <= 0xFFFF )
          {
            *(uint32_t *)i = *(uint32_t *)(v1 + 352);
            *(uint32_t *)(i + 12) = (uint16_t)v146;
            v148 = *(uint32_t *)(v1 + 360) + 1;
            *(uint8_t *)(i + 16) = 1;
            *(uint32_t *)(i + 4) = v148;
            *(uint8_t *)(i + 17) = 0;
            *(uint32_t *)(i + 20) = 0;
            if ( v146 > *(uint32_t *)(v1 + 420) )
              *(uint32_t *)(v1 + 420) = (uint16_t)v146;
            v644 = *(uint32_t *)(v1 + 364);
            v149 = *(uint32_t *)(v1 + 360) + *(uint32_t *)(v1 + 372);
            while ( 1 )
            {
              v624 = v149;
              *(uint32_t *)(v1 + 360) = v149;
              if ( v149 >= v644 )
                goto LABEL_60;
              v150 = *(uint32_t *)(v1 + 356);
              v664 = *(uint8_t *)(v150 + v149);
              v151 = byte_1CD66A0[v664];
              *(uint8_t *)(v1 + 368) = v664;
              *(uint32_t *)(v1 + 372) = v151;
              if ( v151 < 0 )
              {
                if ( v149 + 1 >= v644 )
                  goto LABEL_60;
                v151 = 2 - *(uint8_t *)(v150 + v149 + 1) * v151;
                *(uint32_t *)(v1 + 372) = v151;
              }
              v149 += v151;
              if ( v149 > v644 )
                goto LABEL_60;
              if ( v664 == 45 )
                break;
              if ( v664 == 0x89 || v664 == 44 )
                goto LABEL_356;
            }
            *(uint32_t *)(i + 8) = v624;
            v21 = *(uint32_t *)(v1 + 12);
            goto LABEL_128;
          }
        }
        *(uint32_t *)(v1 + 12) = 140;
        goto LABEL_61;
      case 0x2Du:
        v177 = *(uint32_t *)(v1 + 428);
        if ( v177 <= 0 )
        {
          *(uint32_t *)(v1 + 12) = 136;
          goto LABEL_61;
        }
        v178 = v177 - 1;
        *(uint32_t *)(v1 + 428) = v178;
        v179 = (int *)(*(uint32_t *)(v1 + 436) + 16 * v178);
        --v179[2];
        *(uint8_t *)(v1 + 376) = 0;
        if ( v179[2] > 0 )
        {
          ++*(uint32_t *)(v1 + 428);
          v21 = *(uint32_t *)(v1 + 12);
          *(uint32_t *)(v1 + 360) = *(uint32_t *)(v179[3] + 4);
          goto LABEL_128;
        }
        v469 = v179[1];
        v470 = *v179;
        if ( (unsigned int)(v470 - 1) > 2 )
          goto LABEL_754;
        v471 = (uint32_t *)(v1 + 8 * v470 + 436);
        if ( *v471 == 0 )
          goto LABEL_802;
        if ( v469 <= *(uint32_t *)(v1 + 8 * v470 + 440) )
        {
          *(uint32_t *)(v1 + 356) = *v471;
          *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v470 + 440);
          *(uint32_t *)(v1 + 360) = v469;
          *(uint32_t *)(v1 + 352) = v470;
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        goto LABEL_60;
      case 0x2Eu:
      case 0x2Fu:
        v325 = *(uint16_t *)v638;
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 44) )
          goto LABEL_78;
        v326 = 0;
        v327 = v325;
        if ( (v12 & 1) != 0 )
        {
          v328 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v325);
          v540 = (*(int (**)(int, uint32_t, uint32_t))(v1 + 572))(v1, *v328, v328[1]);
          v329 = (*(int (**)(int, int, uint32_t))(v1 + 568))(v1, v540, *(uint32_t *)(v1 + 264));
          v327 = v325;
          v326 = v329 - v540;
        }
        (*(void (**)(int, int, int, int))(v1 + 584))(v1, v1 + 36, v327, v326);
        *(uint16_t *)(v1 + 284) = v325;
        *(uint16_t *)(v1 + 286) = v325;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x30u:
      case 0x31u:
        if ( *(uint16_t *)(v1 + 154) == 0 )
          goto LABEL_50;
        if ( (v12 & 1) != 0 )
        {
          v686 = *(uint32_t *)(v1 + 156);
          v687 = *(uint32_t *)(v1 + 160);
          v688 = *(uint32_t *)(v1 + 164);
          v591 = 8;
        }
        else
        {
          v591 = 16;
          v686 = *(uint32_t *)(v1 + 156) + 4;
          v687 = *(uint32_t *)(v1 + 160) + 4;
          v688 = *(uint32_t *)(v1 + 164) + 4;
        }
        v320 = *(uint16_t *)(v1 + 152);
        v580 = 0;
        v689 = v320;
        v614 = 0;
        v631 = v1;
        v321 = v1;
        while ( 2 )
        {
          v322 = v320 - 1;
          if ( *(uint16_t *)(*(uint32_t *)(v321 + 172) + 2 * v580)
             - (unsigned int)*(uint16_t *)(v321 + 176) < v320 )
            v322 = *(uint16_t *)(*(uint32_t *)(v321 + 172) + 2 * v580) - *(uint16_t *)(v321 + 176);
          v676 = v322;
          if ( v614 > v322 )
          {
            v324 = v614;
            goto LABEL_634;
          }
          v323 = *(uint32_t *)(v321 + 168);
          v324 = v614;
          if ( ((uint8_t)v591 & *(uint8_t *)(v323 + v614)) == 0 )
          {
            while ( ++v324 <= v322 )
            {
              if ( ((uint8_t)v591 & *(uint8_t *)(v323 + v324)) != 0 )
                goto LABEL_764;
            }
LABEL_634:
            v614 = v324;
            goto LABEL_635;
          }
LABEL_764:
          v389 = v324 + 1;
          v577 = v324 + 1;
          if ( v324 + 1 > v322 )
            goto LABEL_840;
          v390 = v324;
          v652 = 8 * v389;
          v550 = v324;
          v389 = v324 + 1;
          while ( 2 )
          {
            if ( ((uint8_t)v591 & *(uint8_t *)(v323 + v389)) == 0 )
              goto LABEL_771;
            v585 = v389 - 1;
            v391 = v390 + 1;
            if ( v389 - 1 < v390 + 1 || v689 <= v390 || v689 <= v389 )
              goto LABEL_770;
            v565 = 8 * v390;
            v552 = *(uint32_t *)(v688 + 8 * v390);
            v392 = v652;
            v574 = *(uint32_t *)(v688 + v652);
            if ( v552 <= v574 )
            {
              v392 = 8 * v390;
              v565 = v652;
              v552 = *(uint32_t *)(v688 + v652);
              v574 = *(uint32_t *)(v688 + 8 * v390);
            }
            v393 = v686;
            v572 = *(uint32_t *)(v686 + v392);
            v561 = *(uint32_t *)(v686 + v565);
            v568 = v687;
            v559 = *(uint32_t *)(v687 + v392);
            v563 = v559 - v572;
            v557 = *(uint32_t *)(v687 + v565);
            v566 = v557 - v561;
            if ( v574 == v552 )
            {
              v448 = 8 * v391;
              while ( 1 )
              {
                v449 = *(uint32_t *)(v393 + v448);
                v450 = v449 + v563;
                if ( v572 < v449 )
                  v450 = v449 + v566;
                ++v391;
                *(uint32_t *)(v568 + v448) = v450;
                v448 += 8;
                if ( v585 < v391 )
                  break;
                v393 = v686;
                v568 = v687;
              }
              v390 = v389;
            }
            else
            {
              v549 = v389;
              v569 = 0;
              v555 = 0;
              v553 = v552 - v574;
              v394 = 8 * v391;
              while ( 1 )
              {
                v396 = *(uint32_t *)(v393 + v394);
                if ( v572 >= v396 )
                {
                  v395 = v563 + v396;
                }
                else if ( v561 > v396 )
                {
                  if ( v555 == 0 )
                  {
                    v569 = FT_DivFix(v557 - v559, v553);
                    v555 = 1;
                  }
                  v404 = (unsigned int)(((int)((uint64_t)(v569 * (int64_t)(*(uint32_t *)(v688 + v394) - v574)) >> 32) >> 31)
                                      + 0x8000)
                       + v569 * (int64_t)(*(uint32_t *)(v688 + v394) - v574);
                  v395 = v559 + (HIDWORD(v404) << 16) + WORD1(v404);
                }
                else
                {
                  v395 = v566 + v396;
                }
                ++v391;
                *(uint32_t *)(v687 + v394) = v395;
                v394 += 8;
                if ( v585 < v391 )
                  break;
                v393 = v686;
              }
              v389 = v549;
LABEL_770:
              v390 = v389;
            }
LABEL_771:
            ++v389;
            v652 += 8;
            if ( v389 <= v676 )
            {
              v323 = *(uint32_t *)(v631 + 168);
              continue;
            }
            break;
          }
          v324 = v550;
          if ( v550 != v390 )
          {
            v397 = (uint16_t)(v390 + 1);
            if ( v397 <= v676 && v689 > v390 && v689 > v550 )
            {
              v533 = v390;
              sub_11E5150(&v686, v397, v676, v390, v550);
              v390 = v533;
            }
            if ( v550 != 0 && v550 - 1 >= v614 && v689 > v390 && v689 > v550 )
            {
              sub_11E5150(&v686, v614, v550 - 1, v390, v550);
              v614 = v389;
            }
            else
            {
LABEL_794:
              v614 = v389;
            }
            goto LABEL_635;
          }
LABEL_840:
          v409 = v687;
          v410 = *(uint32_t *)(v687 + 8 * v324) - *(uint32_t *)(v686 + 8 * v324);
          if ( v410 == 0 )
            goto LABEL_794;
          if ( v614 < v324 )
          {
            v411 = 8 * v614;
            while ( 1 )
            {
              *(uint32_t *)(v409 + v411) += v410;
              ++v614;
              v411 += 8;
              if ( v614 >= v324 )
                break;
              v409 = v687;
            }
          }
          v614 = v389;
          if ( v577 <= v676 )
          {
            v412 = v577;
            v413 = 8 * v577;
            do
            {
              ++v412;
              v414 = (uint32_t *)(v687 + v413);
              v413 += 8;
              *v414 += v410;
            }
            while ( v412 <= v676 );
            goto LABEL_794;
          }
LABEL_635:
          v321 = v631;
          ++v580;
          v1 = v631;
          if ( *(int16_t *)(v631 + 154) > (int16_t)v580 )
          {
            v320 = *(uint16_t *)(v631 + 152);
            continue;
          }
          break;
        }
        v21 = *(uint32_t *)(v631 + 12);
LABEL_128:
        if ( v21 == 0 )
          goto LABEL_37;
        if ( v21 == 128 )
        {
          v50 = *(uint32_t *)(v1 + 416);
          v51 = *(uint32_t *)(v1 + 408);
          goto LABEL_131;
        }
LABEL_61:
        if ( *(uint8_t *)(v1 + 488) == 0 )
          *(uint8_t *)(*(uint32_t *)(v1 + 4) + 301) = 0;
        return *(uint32_t *)(v1 + 12);
      case 0x32u:
      case 0x33u:
        if ( *(uint32_t *)(v1 + 16) < *(uint32_t *)(v1 + 304) )
        {
          v21 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 134;
            LOBYTE(v21) = -122;
          }
          goto LABEL_505;
        }
        if ( (v12 & 1) != 0 )
        {
          v424 = *(uint16_t *)(v1 + 44);
          v425 = *(uint32_t *)(v1 + 48);
          v426 = *(uint32_t *)(v1 + 52);
          v427 = *(uint16_t *)(v1 + 286);
        }
        else
        {
          v424 = *(uint16_t *)(v1 + 80);
          v425 = *(uint32_t *)(v1 + 84);
          v426 = *(uint32_t *)(v1 + 88);
          v427 = *(uint16_t *)(v1 + 288);
        }
        if ( v427 < v424 )
        {
          v428 = (*(int (**)(int, int, int))(v1 + 572))(
                   v1,
                   *(uint32_t *)(v426 + 8 * v427) - *(uint32_t *)(v425 + 8 * v427),
                   *(uint32_t *)(v426 + 8 * v427 + 4) - *(uint32_t *)(v425 + 8 * v427 + 4));
          v682 = FT_MulDiv(v428, *(int16_t *)(v1 + 298), *(uint32_t *)(v1 + 564));
          v429 = FT_MulDiv(v428, *(int16_t *)(v1 + 300), *(uint32_t *)(v1 + 564));
          v430 = *(uint32_t *)(v1 + 304);
          for ( j = *(uint32_t *)(v1 + 28); v430 > 0; *(uint32_t *)(v1 + 304) = v430 )
          {
            v432 = *(uint32_t *)(v1 + 24);
            *(uint32_t *)(v1 + 28) = --j;
            v433 = *(uint16_t *)(v432 + 4 * j);
            if ( v433 >= *(uint16_t *)(v1 + 116) )
            {
              if ( *(uint8_t *)(v1 + 561) != 0 )
                goto LABEL_79;
            }
            else
            {
              if ( *(uint16_t *)(v1 + 298) != 0 )
              {
                v434 = (uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v433);
                *v434 += v682;
                *(uint8_t *)(*(uint32_t *)(v1 + 132) + v433) |= 8u;
              }
              if ( *(uint16_t *)(v1 + 300) != 0 )
              {
                v435 = *(uint32_t *)(v1 + 124) + 8 * v433;
                *(uint32_t *)(v435 + 4) += v429;
                *(uint8_t *)(*(uint32_t *)(v1 + 132) + v433) |= 0x10u;
              }
              j = *(uint32_t *)(v1 + 28);
              v430 = *(uint32_t *)(v1 + 304);
            }
            --v430;
          }
          v588 = j;
          v21 = *(uint32_t *)(v1 + 12);
LABEL_505:
          *(uint32_t *)(v1 + 304) = 1;
          *(uint32_t *)(v1 + 32) = v588;
          goto LABEL_128;
        }
LABEL_500:
        if ( *(uint8_t *)(v1 + 561) != 0 )
          goto LABEL_79;
LABEL_37:
        v22 = *(uint8_t *)(v1 + 376);
        *(uint32_t *)(v1 + 16) = *(uint32_t *)(v1 + 32);
        if ( v22 != 0 )
LABEL_51:
          *(uint32_t *)(v1 + 360) += *(uint32_t *)(v1 + 372);
        if ( ++v599 > 1000000 )
          return 139;
        v11 = *(uint32_t *)(v1 + 360);
        v637 = *(uint32_t *)(v1 + 364);
        goto LABEL_40;
      case 0x34u:
      case 0x35u:
        v238 = *(uint16_t *)v638;
        v239 = 1;
        if ( *(uint16_t *)(v1 + 348) != 0 )
          v239 = *(uint16_t *)(v1 + 118);
        if ( (uint16_t)v238 >= v239 )
          goto LABEL_78;
        if ( (v12 & 1) != 0 )
        {
          v240 = *(uint16_t *)(v1 + 44);
          v648 = *(uint32_t *)(v1 + 52);
          v241 = *(uint32_t *)(v1 + 48);
          v670 = *(uint16_t *)(v1 + 286);
        }
        else
        {
          v240 = *(uint16_t *)(v1 + 80);
          v648 = *(uint32_t *)(v1 + 88);
          v241 = *(uint32_t *)(v1 + 84);
          v670 = *(uint16_t *)(v1 + 288);
        }
        if ( v670 >= v240 )
          goto LABEL_500;
        v546 = (*(int (**)(int, int, int))(v1 + 572))(
                 v1,
                 *(uint32_t *)(v648 + 8 * v670) - *(uint32_t *)(v241 + 8 * v670),
                 *(uint32_t *)(v648 + 8 * v670 + 4) - *(uint32_t *)(v241 + 8 * v670 + 4));
        v636 = FT_MulDiv(v546, *(int16_t *)(v1 + 298), *(uint32_t *)(v1 + 564));
        v617 = FT_MulDiv(v546, *(int16_t *)(v1 + 300), *(uint32_t *)(v1 + 564));
        v484 = 0;
        if ( v238 != 0 )
        {
          LOBYTE(v484) = 1;
          v484 = *(uint16_t *)(*(uint32_t *)(v1 + 136) + 2 * v238 - 2) + v484 - *(uint16_t *)(v1 + 140);
        }
        if ( *(uint16_t *)(v1 + 348) != 0 )
          v485 = *(uint16_t *)(*(uint32_t *)(v1 + 136) + 2 * v238) + 1 - *(uint16_t *)(v1 + 140);
        else
          v485 = *(uint16_t *)(v1 + 116);
        if ( v485 <= v484 )
        {
          v21 = *(uint32_t *)(v1 + 12);
        }
        else
        {
          do
          {
            v487 = *(uint32_t *)(v1 + 124);
            if ( v487 != v648 || v484 != v670 )
            {
              if ( *(uint16_t *)(v1 + 298) != 0 )
              {
                *(uint32_t *)(v487 + 8 * v484) += v636;
                *(uint8_t *)(*(uint32_t *)(v1 + 132) + v484) |= 8u;
              }
              if ( *(uint16_t *)(v1 + 300) != 0 )
              {
                v486 = *(uint32_t *)(v1 + 124) + 8 * v484;
                *(uint32_t *)(v486 + 4) += v617;
                *(uint8_t *)(*(uint32_t *)(v1 + 132) + v484) |= 0x10u;
              }
            }
            ++v484;
          }
          while ( v484 < v485 );
          v21 = *(uint32_t *)(v1 + 12);
        }
        goto LABEL_128;
      case 0x36u:
      case 0x37u:
        if ( *v638 > 1 )
          goto LABEL_78;
        if ( (v12 & 1) != 0 )
        {
          v372 = *(uint16_t *)(v1 + 44);
          v373 = *(uint32_t *)(v1 + 48);
          v679 = *(uint32_t *)(v1 + 52);
          v374 = *(uint16_t *)(v1 + 286);
        }
        else
        {
          v372 = *(uint16_t *)(v1 + 80);
          v679 = *(uint32_t *)(v1 + 88);
          v373 = *(uint32_t *)(v1 + 84);
          v374 = *(uint16_t *)(v1 + 288);
        }
        if ( v374 >= v372 )
          goto LABEL_500;
        v543 = (*(int (**)(int, int, int))(v1 + 572))(
                 v1,
                 *(uint32_t *)(v679 + 8 * v374) - *(uint32_t *)(v373 + 8 * v374),
                 *(uint32_t *)(v679 + 8 * v374 + 4) - *(uint32_t *)(v373 + 8 * v374 + 4));
        v651 = FT_MulDiv(v543, *(int16_t *)(v1 + 298), *(uint32_t *)(v1 + 564));
        v633 = FT_MulDiv(v543, *(int16_t *)(v1 + 300), *(uint32_t *)(v1 + 564));
        v375 = *(uint16_t *)(v1 + 348);
        if ( v375 != 0 )
        {
          if ( v375 != 1 )
          {
            v21 = *(uint32_t *)(v1 + 12);
            goto LABEL_128;
          }
          v516 = *(uint16_t *)(v1 + 118);
          if ( v516 <= 0 )
          {
            v21 = *(uint32_t *)(v1 + 12);
            goto LABEL_128;
          }
          v376 = *(uint16_t *)(*(uint32_t *)(v1 + 136) + 2 * v516 - 2) + 1;
        }
        else
        {
          v376 = *(uint16_t *)(v1 + 116);
        }
        v377 = 0;
        if ( v376 != 0 )
        {
          do
          {
            v378 = *(uint32_t *)(v1 + 124);
            if ( v378 != v679 || v374 != (uint16_t)v377 )
            {
              if ( *(uint16_t *)(v1 + 298) != 0 )
                *(uint32_t *)(v378 + 8 * v377) += v651;
              if ( *(uint16_t *)(v1 + 300) != 0 )
                *(uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v377 + 4) += v633;
            }
            ++v377;
          }
          while ( v376 > (uint16_t)v377 );
          v21 = *(uint32_t *)(v1 + 12);
        }
        else
        {
          v21 = *(uint32_t *)(v1 + 12);
        }
        goto LABEL_128;
      case 0x38u:
        if ( *(uint32_t *)(v1 + 304) < *(uint32_t *)(v1 + 16) )
        {
          v529 = *(uint32_t *)(v1 + 304);
          v680 = *v638;
          v653 = sub_11E3BD0(*v638, *(int16_t *)(v1 + 298));
          v415 = sub_11E3BD0(v680, *(int16_t *)(v1 + 300));
          v416 = v529;
          if ( v529 <= 0 )
          {
            v21 = 0;
          }
          else
          {
            for ( k = v601; ; k = *(uint32_t *)(v1 + 24) )
            {
              *(uint32_t *)(v1 + 28) = --v15;
              v418 = *(uint16_t *)(k + 4 * v15);
              if ( v418 >= *(uint16_t *)(v1 + 116) )
              {
                if ( *(uint8_t *)(v1 + 561) != 0 )
                  goto LABEL_79;
              }
              else
              {
                if ( *(uint16_t *)(v1 + 298) != 0 )
                {
                  v419 = (uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v418);
                  *v419 += v653;
                  *(uint8_t *)(*(uint32_t *)(v1 + 132) + v418) |= 8u;
                }
                if ( *(uint16_t *)(v1 + 300) != 0 )
                {
                  v420 = *(uint32_t *)(v1 + 124) + 8 * v418;
                  *(uint32_t *)(v420 + 4) += v415;
                  *(uint8_t *)(*(uint32_t *)(v1 + 132) + v418) |= 0x10u;
                }
                v15 = *(uint32_t *)(v1 + 28);
                v416 = *(uint32_t *)(v1 + 304);
              }
              *(uint32_t *)(v1 + 304) = --v416;
              if ( v416 <= 0 )
                break;
            }
            v21 = *(uint32_t *)(v1 + 12);
          }
        }
        else
        {
          v21 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 134;
            LOBYTE(v21) = -122;
          }
        }
        *(uint32_t *)(v1 + 304) = 1;
        *(uint32_t *)(v1 + 32) = v15;
        goto LABEL_128;
      case 0x39u:
        v209 = *(uint32_t *)(v1 + 304);
        if ( *(uint32_t *)(v1 + 16) >= v209 )
        {
          v610 = true;
          if ( *(uint16_t *)(v1 + 344) != 0 && *(uint16_t *)(v1 + 346) != 0 )
            v610 = *(uint16_t *)(v1 + 348) == 0;
          v210 = *(uint16_t *)(v1 + 286);
          if ( v210 < *(uint16_t *)(v1 + 44) )
          {
            v211 = 8 * v210;
            if ( v610 )
              v212 = *(uint32_t *)(v1 + 48);
            else
              v212 = *(uint32_t *)(v1 + 56);
            v669 = (uint32_t *)(v211 + v212);
            v575 = 0;
            v589 = (uint32_t *)(*(uint32_t *)(v1 + 52) + v211);
            v213 = *(uint16_t *)(v1 + 288);
            v627 = 0;
            if ( v213 >= *(uint16_t *)(v1 + 80) )
              goto LABEL_464;
            if ( v610 )
            {
              v513 = (uint32_t *)(*(uint32_t *)(v1 + 84) + 8 * v213);
            }
            else
            {
              if ( *(uint32_t *)(v1 + 220) != *(uint32_t *)(v1 + 224) )
              {
                v214 = (uint32_t *)(*(uint32_t *)(v1 + 92) + 8 * v213);
                v215 = (unsigned int)(((int)((uint64_t)(*(int *)(v1 + 220) * (int64_t)(*v214 - *v669)) >> 32) >> 31)
                                    + 0x8000)
                     + *(int *)(v1 + 220) * (int64_t)(*v214 - *v669);
                v646 = (HIDWORD(v215) << 16) + WORD1(v215);
                v216 = *(int *)(v1 + 224) * (int64_t)(v214[1] - v669[1]);
                v627 = (*(int (**)(int, unsigned int, uint32_t))(v1 + 576))(
                         v1,
                         v646,
                         (((uint64_t)(unsigned int)((SHIDWORD(v216) >> 31) + 0x8000) + v216) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v216) >> 31) + 0x8000 + v216) >> 16));
                goto LABEL_463;
              }
              v513 = (uint32_t *)(*(uint32_t *)(v1 + 92) + 8 * v213);
            }
            v627 = (*(int (**)(int, int, int))(v1 + 576))(v1, *v513 - *v669, v513[1] - v669[1]);
LABEL_463:
            v217 = (uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * *(uint16_t *)(v1 + 288));
            v575 = (*(int (**)(int, int, int))(v1 + 572))(v1, *v217 - *v589, v217[1] - v589[1]);
            v15 = *(uint32_t *)(v1 + 28);
            v209 = *(uint32_t *)(v1 + 304);
LABEL_464:
            if ( v209 <= 0 )
            {
LABEL_1197:
              v21 = *(uint32_t *)(v1 + 12);
LABEL_829:
              *(uint32_t *)(v1 + 304) = 1;
              *(uint32_t *)(v1 + 32) = v15;
              goto LABEL_128;
            }
            while ( 1 )
            {
              v218 = *(uint32_t *)(v1 + 24);
              *(uint32_t *)(v1 + 28) = --v15;
              v647 = *(uint32_t *)(v218 + 4 * v15);
              if ( v647 >= *(uint16_t *)(v1 + 116) )
              {
                if ( *(uint8_t *)(v1 + 561) != 0 )
                  goto LABEL_79;
                goto LABEL_467;
              }
              if ( v610 )
              {
                v220 = 8 * v647;
                v451 = (uint32_t *)(8 * v647 + *(uint32_t *)(v1 + 120));
              }
              else
              {
                v219 = *(uint32_t *)(v1 + 220);
                if ( v219 != *(uint32_t *)(v1 + 224) )
                {
                  v220 = 8 * v647;
                  v578 = (uint32_t *)(*(uint32_t *)(v1 + 128) + 8 * v647);
                  v221 = v219 * (int64_t)(*v578 - *v669);
                  v570 = (((uint64_t)(unsigned int)((SHIDWORD(v221) >> 31) + 0x8000) + v221) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v221) >> 31) + 0x8000 + v221) >> 16);
                  v222 = (unsigned int)(((int)((uint64_t)(*(int *)(v1 + 224) * (int64_t)(v578[1] - v669[1])) >> 32) >> 31)
                                      + 0x8000)
                       + *(int *)(v1 + 224) * (int64_t)(v578[1] - v669[1]);
                  v223 = (*(int (**)(int, int, unsigned int))(v1 + 576))(
                           v1,
                           v570,
                           (HIDWORD(v222) << 16) + WORD1(v222));
                  goto LABEL_472;
                }
                v220 = 8 * v647;
                v451 = (uint32_t *)(8 * v647 + *(uint32_t *)(v1 + 128));
              }
              v223 = (*(int (**)(int, int, int))(v1 + 576))(v1, *v451 - *v669, v451[1] - v669[1]);
LABEL_472:
              v536 = v223;
              v224 = (*(int (**)(int, int, int))(v1 + 572))(
                       v1,
                       *(uint32_t *)(*(uint32_t *)(v1 + 124) + v220) - *v589,
                       *(uint32_t *)(*(uint32_t *)(v1 + 124) + v220 + 4) - v589[1]);
              v225 = v536;
              v226 = v224;
              if ( v536 != 0 && v627 != 0 )
                v225 = FT_MulDiv(v536, v575, v627);
              (*(void (**)(int, int, uint32_t, int))(v1 + 584))(v1, v1 + 108, (uint16_t)v647, v225 - v226);
              v15 = *(uint32_t *)(v1 + 28);
              v209 = *(uint32_t *)(v1 + 304);
LABEL_467:
              *(uint32_t *)(v1 + 304) = --v209;
              if ( v209 <= 0 )
                goto LABEL_1197;
            }
          }
        }
        v21 = 0;
        if ( *(uint8_t *)(v1 + 561) != 0 )
        {
          *(uint32_t *)(v1 + 12) = 134;
          LOBYTE(v21) = -122;
        }
        goto LABEL_829;
      case 0x3Au:
      case 0x3Bu:
        v626 = *(uint16_t *)v638;
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 80) )
          goto LABEL_78;
        v198 = *(uint16_t *)(v1 + 284);
        if ( v198 >= *(uint16_t *)(v1 + 44) )
          goto LABEL_78;
        v609 = v1 + 72;
        if ( *(uint16_t *)(v1 + 346) == 0 )
        {
          v199 = *(uint32_t *)(v1 + 48);
          v200 = v198;
          v201 = *(uint32_t *)(v199 + 8 * v198);
          v202 = *(uint32_t *)(v199 + 8 * v200 + 4);
          v203 = *(uint32_t *)(v1 + 84);
          *(uint32_t *)(v203 + 8 * v626) = v201;
          *(uint32_t *)(v203 + 8 * v626 + 4) = v202;
          (*(void (**)(int, int, uint32_t, unsigned int))(v1 + 588))(v1, v609, v626, v638[1]);
          v204 = *(uint32_t *)(v1 + 84);
          v205 = *(uint32_t *)(v1 + 88);
          v206 = *(uint32_t *)(v204 + 8 * v626 + 4);
          *(uint32_t *)(v205 + 8 * v626) = *(uint32_t *)(v204 + 8 * v626);
          *(uint32_t *)(v205 + 8 * v626 + 4) = v206;
          v198 = *(uint16_t *)(v1 + 284);
        }
        v207 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v198);
        v208 = (*(int (**)(int, int, int))(v1 + 572))(
                 v1,
                 *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v626) - *v207,
                 *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v626 + 4) - v207[1]);
        (*(void (**)(int, int, uint32_t, unsigned int))(v1 + 584))(v1, v609, v626, v638[1] - v208);
        v2 = (*(uint8_t *)(v1 + 368) & 1) == 0;
        *(uint16_t *)(v1 + 286) = *(uint16_t *)(v1 + 284);
        *(uint16_t *)(v1 + 288) = v626;
        if ( !v2 )
          *(uint16_t *)(v1 + 284) = v626;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x3Cu:
        v180 = *(uint32_t *)(v1 + 304);
        if ( *(uint32_t *)(v1 + 16) < v180 || *(uint16_t *)(v1 + 284) >= *(uint16_t *)(v1 + 44) )
        {
          v21 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 134;
            LOBYTE(v21) = -122;
          }
        }
        else if ( v180 <= 0 )
        {
          v21 = 0;
        }
        else
        {
          for ( m = v601; ; m = *(uint32_t *)(v1 + 24) )
          {
            *(uint32_t *)(v1 + 28) = --v15;
            v182 = *(uint16_t *)(m + 4 * v15);
            if ( v182 >= *(uint16_t *)(v1 + 80) )
            {
              if ( *(uint8_t *)(v1 + 561) != 0 )
                goto LABEL_79;
            }
            else
            {
              v183 = v182;
              v184 = (uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v182);
              v185 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * *(uint16_t *)(v1 + 284));
              v186 = (*(int (**)(int, int, int))(v1 + 572))(v1, *v184 - *v185, v184[1] - v185[1]);
              (*(void (**)(int, int, int, int))(v1 + 584))(v1, v1 + 72, v183, -v186);
              v15 = *(uint32_t *)(v1 + 28);
              v180 = *(uint32_t *)(v1 + 304);
            }
            *(uint32_t *)(v1 + 304) = --v180;
            if ( v180 <= 0 )
              break;
          }
          v21 = *(uint32_t *)(v1 + 12);
        }
        *(uint32_t *)(v1 + 304) = 1;
        *(uint32_t *)(v1 + 32) = v15;
        goto LABEL_128;
      case 0x3Du:
        *(uint32_t *)(v1 + 312) = 2;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E4FD0);
        goto LABEL_37;
      case 0x3Eu:
      case 0x3Fu:
        v625 = *(uint32_t *)(v1 + 320);
        v191 = v638[1];
        v667 = *(uint16_t *)v638;
        if ( *(uint16_t *)v638 < *(uint16_t *)(v1 + 44) && v191 < *(uint32_t *)(v1 + 380) )
        {
          v472 = (*(int (**)(int, unsigned int))(v1 + 592))(v1, v191);
          v586 = v472;
          if ( *(uint16_t *)(v1 + 344) == 0 )
          {
            v473 = (int *)(8 * v667 + *(uint32_t *)(v1 + 48));
            *v473 = sub_11E3BD0(v472, *(int16_t *)(v1 + 298));
            v532 = *(uint32_t *)(v1 + 48) + 8 * v667;
            *(uint32_t *)(v532 + 4) = sub_11E3BD0(v586, *(int16_t *)(v1 + 300));
            v474 = *(uint32_t *)(v1 + 48);
            v475 = *(uint32_t *)(v1 + 52);
            v476 = *(uint32_t *)(v474 + 8 * v667 + 4);
            *(uint32_t *)(v475 + 8 * v667) = *(uint32_t *)(v474 + 8 * v667);
            *(uint32_t *)(v475 + 8 * v667 + 4) = v476;
          }
          v477 = (*(int (**)(int, uint32_t, uint32_t))(v1 + 572))(
                   v1,
                   *(uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v667),
                   *(uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v667 + 4));
          v478 = v477;
          if ( (*(uint8_t *)(v1 + 368) & 1) != 0 )
          {
            v479 = v625 < (int)__builtin_abs(v586 - v477);
            v480 = v586;
            if ( v479 )
              v480 = v478;
            v545 = v478;
            v586 = (*(int (**)(int, int, uint32_t))(v1 + 568))(v1, v480, *(uint32_t *)(v1 + 264));
            v478 = v545;
          }
          (*(void (**)(int, int, uint32_t, int))(v1 + 584))(v1, v1 + 36, v667, v586 - v478);
          v21 = *(uint32_t *)(v1 + 12);
        }
        else
        {
          v21 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 134;
            LOBYTE(v21) = -122;
          }
        }
        *(uint16_t *)(v1 + 284) = v667;
        *(uint16_t *)(v1 + 286) = v667;
        goto LABEL_128;
      case 0x40u:
        v187 = *(uint32_t *)(v1 + 356);
        v188 = *(uint32_t *)(v1 + 360);
        v666 = *(uint8_t *)(v187 + v188 + 1);
        v607 = *(uint8_t *)(v187 + v188 + 1);
        if ( v607 >= v619 + 1 - *(uint32_t *)(v1 + 16) )
          goto LABEL_76;
        v189 = 1;
        if ( *(uint8_t *)(v187 + v188 + 1) != 0 )
        {
          while ( 1 )
          {
            v190 = (uint16_t)v189++;
            v638[v190 - 1] = *(uint8_t *)(v190 + v187 + v188 + 1);
            if ( v666 < (uint16_t)v189 )
              break;
            v187 = *(uint32_t *)(v1 + 356);
            v188 = *(uint32_t *)(v1 + 360);
          }
          v16 = *(uint32_t *)(v1 + 32);
          v21 = *(uint32_t *)(v1 + 12);
        }
        else
        {
          v21 = 0;
        }
        *(uint32_t *)(v1 + 32) = v607 + v16;
        goto LABEL_128;
      case 0x41u:
        v192 = *(uint32_t *)(v1 + 356);
        v193 = *(uint32_t *)(v1 + 360);
        v194 = *(uint8_t *)(v192 + v193 + 1);
        v608 = *(uint8_t *)(v192 + v193 + 1);
        if ( v608 >= v619 + 1 - *(uint32_t *)(v1 + 16) )
          goto LABEL_76;
        v195 = v193 + 2;
        v21 = 0;
        *(uint32_t *)(v1 + 360) = v195;
        if ( v194 != 0 )
        {
          v668 = 4 * (uint16_t)(v194 - 1) + 4;
          v196 = 0;
          while ( 1 )
          {
            v197 = v195 + 2;
            *(uint32_t *)(v1 + 360) = v197;
            v638[v196 / 4] = (int16_t)(*(uint8_t *)(v192 + v197 - 1)
                                     + (*(uint8_t *)(v192 + v197 - 2) << 8));
            v196 += 4;
            if ( v196 == v668 )
              break;
            v192 = *(uint32_t *)(v1 + 356);
            v195 = *(uint32_t *)(v1 + 360);
          }
          v21 = *(uint32_t *)(v1 + 12);
        }
        *(uint8_t *)(v1 + 376) = 0;
        *(uint32_t *)(v1 + 32) += v608;
        goto LABEL_128;
      case 0x42u:
        if ( *v638 >= *(uint16_t *)(v1 + 468) )
          goto LABEL_78;
        *(uint32_t *)(*(uint32_t *)(v1 + 472) + 4 * *v638) = v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x43u:
        if ( *v638 < *(uint16_t *)(v1 + 468) )
        {
          *v638 = *(uint32_t *)(*(uint32_t *)(v1 + 472) + 4 * *v638);
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        if ( *(uint8_t *)(v1 + 561) == 0 )
        {
          *v638 = 0;
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        goto LABEL_79;
      case 0x44u:
        if ( *v638 >= *(uint32_t *)(v1 + 380) )
          goto LABEL_78;
        (*(void (**)(int, unsigned int, unsigned int))(v1 + 596))(v1, *v638, v638[1]);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x45u:
        if ( *v638 < *(uint32_t *)(v1 + 380) )
        {
          *v638 = (*(int (**)(int, unsigned int))(v1 + 592))(v1, *v638);
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        if ( *(uint8_t *)(v1 + 561) == 0 )
        {
          *v638 = 0;
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        goto LABEL_79;
      case 0x46u:
      case 0x47u:
        if ( *v638 < *(uint16_t *)(v1 + 116) )
        {
          v408 = 8 * *v638;
          if ( (v12 & 1) != 0 )
            v140 = (*(int (**)(int, uint32_t, uint32_t))(v1 + 576))(
                     v1,
                     *(uint32_t *)(*(uint32_t *)(v1 + 120) + v408),
                     *(uint32_t *)(*(uint32_t *)(v1 + 120) + v408 + 4));
          else
            v140 = (*(int (**)(int, uint32_t, uint32_t))(v1 + 572))(
                     v1,
                     *(uint32_t *)(*(uint32_t *)(v1 + 124) + v408),
                     *(uint32_t *)(*(uint32_t *)(v1 + 124) + v408 + 4));
        }
        else
        {
          v140 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
            *(uint32_t *)(v1 + 12) = 134;
        }
        *v638 = v140;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x48u:
        v137 = *(uint16_t *)v638;
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 116) )
          goto LABEL_78;
        v138 = (uint32_t *)(*(uint32_t *)(v1 + 124) + 8 * v137);
        v139 = (*(int (**)(int, uint32_t, uint32_t))(v1 + 572))(v1, *v138, v138[1]);
        (*(void (**)(int, int, uint32_t, unsigned int))(v1 + 584))(v1, v1 + 108, v137, v638[1] - v139);
        if ( *(uint16_t *)(v1 + 348) == 0 )
        {
          v481 = *(uint32_t *)(v1 + 124);
          v482 = *(uint32_t *)(v1 + 120);
          v483 = *(uint32_t *)(v481 + 8 * v137 + 4);
          *(uint32_t *)(v482 + 8 * v137) = *(uint32_t *)(v481 + 8 * v137);
          *(uint32_t *)(v482 + 8 * v137 + 4) = v483;
        }
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x49u:
      case 0x4Au:
        v132 = *(uint16_t *)v638;
        v133 = v638[1];
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 44) || (uint16_t)v133 >= *(uint16_t *)(v1 + 80) )
        {
          v136 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
            *(uint32_t *)(v1 + 12) = 134;
        }
        else if ( (v12 & 1) != 0 )
        {
          v502 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * v132);
          v503 = (uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * (uint16_t)v133);
          v136 = (*(int (**)(int, int, int))(v1 + 572))(v1, *v502 - *v503, v502[1] - v503[1]);
        }
        else if ( *(uint16_t *)(v1 + 344) != 0 && *(uint16_t *)(v1 + 346) != 0 )
        {
          v490 = (uint32_t *)(*(uint32_t *)(v1 + 92) + 8 * (uint16_t)v133);
          v491 = *(uint32_t *)(v1 + 220);
          v492 = (uint32_t *)(*(uint32_t *)(v1 + 56) + 8 * v132);
          v683 = v490;
          if ( v491 == *(uint32_t *)(v1 + 224) )
          {
            v514 = *(int *)(v1 + 220)
                 * (int64_t)(*(int (**)(int, int, int))(v1 + 576))(v1, *v492 - *v490, v492[1] - v490[1]);
            v136 = (((uint64_t)(unsigned int)((SHIDWORD(v514) >> 31) + 0x8000) + v514) >> 32 << 16)
                 + ((unsigned int)((SHIDWORD(v514) >> 31) + 0x8000 + v514) >> 16);
          }
          else
          {
            v493 = v491 * (int64_t)(*v492 - *v490);
            v618 = (((uint64_t)(unsigned int)((SHIDWORD(v493) >> 31) + 0x8000) + v493) >> 32 << 16)
                 + ((unsigned int)((SHIDWORD(v493) >> 31) + 0x8000 + v493) >> 16);
            v494 = *(int *)(v1 + 224) * (int64_t)(v492[1] - v683[1]);
            v136 = (*(int (**)(int, int, uint32_t))(v1 + 576))(
                     v1,
                     v618,
                     (((uint64_t)(unsigned int)((SHIDWORD(v494) >> 31) + 0x8000) + v494) >> 32 << 16)
                   + ((unsigned int)((SHIDWORD(v494) >> 31) + 0x8000 + v494) >> 16));
          }
        }
        else
        {
          v134 = (uint32_t *)(*(uint32_t *)(v1 + 48) + 8 * v132);
          v135 = (uint32_t *)(*(uint32_t *)(v1 + 84) + 8 * (uint16_t)v133);
          v136 = (*(int (**)(int, int, int))(v1 + 576))(v1, *v134 - *v135, v134[1] - v135[1]);
        }
        *v638 = v136;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x4Bu:
        v128 = *(uint32_t *)(v1 + 256);
        if ( v128 == 0 )
        {
          v129 = *(uint16_t *)(v1 + 296);
          if ( v129 != 0 )
          {
            v130 = *(uint16_t *)(v1 + 294);
            if ( v130 != 0 )
            {
              v531 = sub_11E3BD0(*(uint32_t *)(v1 + 244), v130);
              v452 = sub_11E3BD0(*(uint32_t *)(v1 + 248), v129);
              v128 = FT_Hypot(v531, v452);
            }
            else
            {
              v128 = *(uint32_t *)(v1 + 248);
            }
            *(uint32_t *)(v1 + 256) = v128;
          }
          else
          {
            v128 = *(uint32_t *)(v1 + 244);
            *(uint32_t *)(v1 + 256) = v128;
          }
        }
        v131 = v128 * (uint64_t)*(uint16_t *)(v1 + 252);
        *v638 = (((unsigned int)((SHIDWORD(v131) >> 31) + 0x8000) + v131) >> 32 << 16)
              + ((unsigned int)((SHIDWORD(v131) >> 31) + 0x8000 + v131) >> 16);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x4Cu:
        v124 = *(uint32_t *)(v1 + 256);
        if ( v124 == 0 )
        {
          v125 = *(uint16_t *)(v1 + 296);
          if ( v125 != 0 )
          {
            v126 = *(uint16_t *)(v1 + 294);
            if ( v126 != 0 )
            {
              v530 = sub_11E3BD0(*(uint32_t *)(v1 + 244), v126);
              v447 = sub_11E3BD0(*(uint32_t *)(v1 + 248), v125);
              v124 = FT_Hypot(v530, v447);
            }
            else
            {
              v124 = *(uint32_t *)(v1 + 248);
            }
            *(uint32_t *)(v1 + 256) = v124;
          }
          else
          {
            v124 = *(uint32_t *)(v1 + 244);
            *(uint32_t *)(v1 + 256) = v124;
          }
        }
        v127 = v124 * (uint64_t)*(uint16_t *)(v1 + 252);
        *v638 = (((unsigned int)((SHIDWORD(v127) >> 31) + 0x8000) + v127) >> 32 << 16)
              + ((unsigned int)((SHIDWORD(v127) >> 31) + 0x8000 + v127) >> 16);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x4Du:
        *(uint8_t *)(v1 + 316) = 1;
        goto LABEL_37;
      case 0x4Eu:
        *(uint8_t *)(v1 + 316) = 0;
        goto LABEL_37;
      case 0x4Fu:
        *(uint32_t *)(v1 + 12) = 135;
        goto LABEL_61;
      case 0x50u:
        *v638 = (int)*v638 < (int)v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x51u:
        *v638 = (int)*v638 <= (int)v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x52u:
        *v638 = (int)*v638 > (int)v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x53u:
        *v638 = (int)*v638 >= (int)v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x54u:
        *v638 = *v638 == v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x55u:
        *v638 = *v638 != v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x56u:
        *v638 = ((*(int (**)(int, unsigned int, uint32_t))(v1 + 568))(v1, *v638, 0) & 0x7F) == 64;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x57u:
        *v638 = ((*(int (**)(int, unsigned int, uint32_t))(v1 + 568))(v1, *v638, 0) & 0x7F) == 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x58u:
        if ( *v638 != 0 )
          goto LABEL_50;
        v99 = *(uint32_t *)(v1 + 364);
        v660 = 1;
        v100 = *(uint32_t *)(v1 + 360) + *(uint32_t *)(v1 + 372);
        while ( 1 )
        {
          *(uint32_t *)(v1 + 360) = v100;
          if ( v99 <= v100 )
            goto LABEL_60;
          v605 = *(uint32_t *)(v1 + 356);
          v642 = *(uint8_t *)(v605 + v100);
          *(uint8_t *)(v1 + 368) = v642;
          v101 = byte_1CD66A0[v642];
          *(uint32_t *)(v1 + 372) = v101;
          if ( v101 < 0 )
          {
            if ( v99 <= v100 + 1 )
              goto LABEL_60;
            v101 = 2 - *(uint8_t *)(v605 + v100 + 1) * v101;
            *(uint32_t *)(v1 + 372) = v101;
          }
          v100 += v101;
          if ( v99 < v100 )
            goto LABEL_60;
          if ( v642 == 88 )
          {
            ++v660;
            continue;
          }
          if ( v642 == 89 )
            break;
          if ( v642 == 27 )
          {
            v102 = v660 == 1;
LABEL_234:
            if ( v102 )
              goto LABEL_37;
          }
        }
        v2 = v660-- == 1;
        v102 = v2;
        goto LABEL_234;
      case 0x5Au:
        v90 = (bool *)(v601 + 4 * v15);
        v91 = false;
        if ( *v638 != 0 )
        {
          v90 = (bool *)v638;
          v91 = v638[1] != 0;
        }
        *v90 = v91;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x5Bu:
        v88 = (bool *)(v601 + 4 * v15);
        v89 = true;
        if ( *v638 == 0 )
        {
          v88 = (bool *)v638;
          v89 = v638[1] != 0;
        }
        *v88 = v89;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x5Cu:
        *v638 = *v638 == 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x5Du:
        v21 = 0;
        v622 = *v638;
        if ( *v638 == 0 )
          goto LABEL_812;
        if ( v15 <= 1 )
          goto LABEL_809;
        v659 = 1;
        v78 = v15;
        v79 = v601;
        while ( 2 )
        {
          v78 -= 2;
          *(uint32_t *)(v1 + 28) = v78;
          v86 = *(uint16_t *)(v79 + 4 * v78 + 4);
          v87 = *(uint32_t *)(v79 + 4 * v78);
          v641 = v87;
          if ( v86 < *(uint16_t *)(v1 + 44) )
          {
            v80 = v87 & 0xF0;
            v81 = *(uint8_t *)(v1 + 368);
            v82 = v80 >> 4;
            if ( v81 == 113 )
            {
              v82 += 16;
            }
            else if ( v81 == 114 )
            {
              v82 += 32;
            }
            v604 = v82 + *(int16_t *)(v1 + 332);
            v83 = *(uint32_t *)(v1 + 256);
            if ( v83 == 0 )
            {
              if ( *(uint16_t *)(v1 + 296) != 0 )
              {
                v84 = *(uint16_t *)(v1 + 294);
                if ( v84 != 0 )
                {
                  v527 = *(uint16_t *)(v1 + 296);
                  v593 = sub_11E3BD0(*(uint32_t *)(v1 + 244), v84);
                  v406 = sub_11E3BD0(*(uint32_t *)(v1 + 248), v527);
                  v83 = FT_Hypot(v593, v406);
                }
                else
                {
                  v83 = *(uint32_t *)(v1 + 248);
                }
                *(uint32_t *)(v1 + 256) = v83;
              }
              else
              {
                v83 = *(uint32_t *)(v1 + 244);
                *(uint32_t *)(v1 + 256) = v83;
              }
            }
            v85 = v83 * (uint64_t)*(uint16_t *)(v1 + 252);
            if ( v604 == (((unsigned int)((SHIDWORD(v85) >> 31) + 0x8000) + v85) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v85) >> 31) + 0x8000 + v85) >> 16) )
            {
              v401 = v641 & 0xF;
              v402 = v401 - 7;
              v403 = v401 - 8;
              if ( v403 < 0 )
                v402 = v403;
              (*(void (**)(int, int, uint32_t, int))(v1 + 584))(
                v1,
                v1 + 36,
                v86,
                (v402 << 6) / (1 << *(uint16_t *)(v1 + 334)));
            }
            v78 = *(uint32_t *)(v1 + 28);
          }
          else if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 134;
          }
          if ( v622 < ++v659 )
          {
            v588 = v78;
            v21 = *(uint32_t *)(v1 + 12);
          }
          else
          {
            if ( v78 > 1 )
            {
              v79 = *(uint32_t *)(v1 + 24);
              continue;
            }
LABEL_809:
            if ( *(uint8_t *)(v1 + 561) != 0 )
            {
              *(uint32_t *)(v1 + 12) = 129;
              v21 = 129;
            }
            else
            {
              v21 = *(uint32_t *)(v1 + 12);
            }
            *(uint32_t *)(v1 + 28) = 0;
            v588 = 0;
          }
          break;
        }
LABEL_812:
        *(uint32_t *)(v1 + 32) = v588;
        goto LABEL_128;
      case 0x5Eu:
        *(uint16_t *)(v1 + 332) = *v638;
        goto LABEL_37;
      case 0x5Fu:
        *(uint16_t *)(v1 + 334) = *v638;
        goto LABEL_37;
      case 0x60u:
        *v638 += v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x61u:
        *v638 -= v638[1];
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x62u:
        if ( v638[1] != 0 )
        {
          *v638 = FT_MulDiv_No_Round(*v638, 64, v638[1]);
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        *(uint32_t *)(v1 + 12) = 133;
        goto LABEL_61;
      case 0x63u:
        *v638 = FT_MulDiv(*v638, v638[1], 64);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x64u:
        v77 = (int)*v638 >> 31;
        *v638 ^= v77;
        *v638 -= v77;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x65u:
        *v638 = -*v638;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x66u:
        *v638 &= 0xFFFFFFC0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x67u:
        *v638 = (*v638 + 63) & 0xFFFFFFC0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
        *v638 = (*(int (**)(int, unsigned int, uint32_t))(v1 + 568))(v1, *v638, *(uint32_t *)(v1 + 4 * v12 - 152));
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
        v121 = *(uint32_t *)(v1 + 4 * v12 - 168);
        v122 = *v638;
        if ( (*v638 & 0x80000000) != 0 )
        {
          v436 = v122 - v121;
          v123 = 0;
          if ( v436 <= 0 )
            v123 = v436;
        }
        else
        {
          v123 = v122 + v121;
          if ( v123 < 0 && v122 != 0 )
            v123 = 0;
        }
        *v638 = v123;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x70u:
        if ( *v638 >= *(uint32_t *)(v1 + 380) )
          goto LABEL_78;
        v120 = *(int *)(v1 + 260) * (int64_t)(int)v638[1];
        *(uint32_t *)(*(uint32_t *)(v1 + 384) + 4 * *v638) = (((uint64_t)(unsigned int)((SHIDWORD(v120) >> 31)
                                                                                          + 0x8000)
                                                         + v120) >> 32 << 16)
                                                       + ((unsigned int)((SHIDWORD(v120) >> 31) + 0x8000 + v120) >> 16);
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x71u:
      case 0x72u:
        v21 = 0;
        v621 = *v638;
        if ( *v638 == 0 )
          goto LABEL_816;
        if ( v15 <= 1 )
          goto LABEL_813;
        v658 = 1;
        v37 = v15;
        v38 = v601;
        while ( 2 )
        {
          v37 -= 2;
          *(uint32_t *)(v1 + 28) = v37;
          v45 = *(uint16_t *)(v38 + 4 * v37 + 4);
          v46 = *(uint32_t *)(v38 + 4 * v37);
          v640 = v46;
          if ( v45 < *(uint16_t *)(v1 + 44) )
          {
            v39 = v46 & 0xF0;
            v40 = *(uint8_t *)(v1 + 368);
            v41 = v39 >> 4;
            if ( v40 == 113 )
            {
              v41 += 16;
            }
            else if ( v40 == 114 )
            {
              v41 += 32;
            }
            v603 = v41 + *(int16_t *)(v1 + 332);
            v42 = *(uint32_t *)(v1 + 256);
            if ( v42 == 0 )
            {
              if ( *(uint16_t *)(v1 + 296) != 0 )
              {
                v43 = *(uint16_t *)(v1 + 294);
                if ( v43 != 0 )
                {
                  v528 = *(uint16_t *)(v1 + 296);
                  v594 = sub_11E3BD0(*(uint32_t *)(v1 + 244), v43);
                  v407 = sub_11E3BD0(*(uint32_t *)(v1 + 248), v528);
                  v42 = FT_Hypot(v594, v407);
                }
                else
                {
                  v42 = *(uint32_t *)(v1 + 248);
                }
                *(uint32_t *)(v1 + 256) = v42;
              }
              else
              {
                v42 = *(uint32_t *)(v1 + 244);
                *(uint32_t *)(v1 + 256) = v42;
              }
            }
            v44 = v42 * (uint64_t)*(uint16_t *)(v1 + 252);
            if ( v603 == (((unsigned int)((SHIDWORD(v44) >> 31) + 0x8000) + v44) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v44) >> 31) + 0x8000 + v44) >> 16) )
            {
              v398 = v640 & 0xF;
              v399 = v398 - 7;
              v400 = v398 - 8;
              if ( v400 < 0 )
                v399 = v400;
              (*(void (**)(int, int, uint32_t, int))(v1 + 584))(
                v1,
                v1 + 36,
                v45,
                (v399 << 6) / (1 << *(uint16_t *)(v1 + 334)));
            }
            v37 = *(uint32_t *)(v1 + 28);
          }
          else if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 134;
          }
          if ( v621 < ++v658 )
          {
            v588 = v37;
            v21 = *(uint32_t *)(v1 + 12);
          }
          else
          {
            if ( v37 > 1 )
            {
              v38 = *(uint32_t *)(v1 + 24);
              continue;
            }
LABEL_813:
            if ( *(uint8_t *)(v1 + 561) != 0 )
            {
              *(uint32_t *)(v1 + 12) = 129;
              v21 = 129;
            }
            else
            {
              v21 = *(uint32_t *)(v1 + 12);
            }
            *(uint32_t *)(v1 + 28) = 0;
            v588 = 0;
          }
          break;
        }
LABEL_816:
        *(uint32_t *)(v1 + 32) = v588;
        goto LABEL_128;
      case 0x73u:
      case 0x74u:
      case 0x75u:
        v620 = *v638;
        if ( *v638 != 0 )
        {
          if ( v15 <= 1 )
          {
LABEL_881:
            if ( *(uint8_t *)(v1 + 561) != 0 )
            {
              *(uint32_t *)(v1 + 12) = 129;
              v21 = 129;
            }
            else
            {
              v21 = *(uint32_t *)(v1 + 12);
            }
            *(uint32_t *)(v1 + 28) = 0;
            v27 = 0;
          }
          else
          {
            v657 = 1;
            v27 = v15;
            for ( n = v601; ; n = *(uint32_t *)(v1 + 24) )
            {
              v27 -= 2;
              *(uint32_t *)(v1 + 28) = v27;
              v29 = *(uint32_t *)(n + 4 * v27 + 4);
              v30 = *(uint32_t *)(n + 4 * v27);
              v639 = v30;
              if ( v29 >= *(uint32_t *)(v1 + 380) )
              {
                if ( *(uint8_t *)(v1 + 561) != 0 )
                  goto LABEL_79;
              }
              else
              {
                v31 = v30 & 0xF0;
                v32 = *(uint8_t *)(v1 + 368);
                v33 = v31 >> 4;
                if ( v32 == 116 )
                {
                  v33 += 16;
                }
                else if ( v32 == 117 )
                {
                  v33 += 32;
                }
                v602 = v33 + *(int16_t *)(v1 + 332);
                v34 = *(uint32_t *)(v1 + 256);
                if ( v34 == 0 )
                {
                  if ( *(uint16_t *)(v1 + 296) != 0 )
                  {
                    v35 = *(uint16_t *)(v1 + 294);
                    if ( v35 != 0 )
                    {
                      v526 = *(uint16_t *)(v1 + 296);
                      v592 = sub_11E3BD0(*(uint32_t *)(v1 + 244), v35);
                      v405 = sub_11E3BD0(*(uint32_t *)(v1 + 248), v526);
                      v34 = FT_Hypot(v592, v405);
                    }
                    else
                    {
                      v34 = *(uint32_t *)(v1 + 248);
                    }
                    *(uint32_t *)(v1 + 256) = v34;
                  }
                  else
                  {
                    v34 = *(uint32_t *)(v1 + 244);
                    *(uint32_t *)(v1 + 256) = v34;
                  }
                }
                v36 = v34 * (uint64_t)*(uint16_t *)(v1 + 252);
                if ( v602 == (((unsigned int)((SHIDWORD(v36) >> 31) + 0x8000) + v36) >> 32 << 16)
                           + ((unsigned int)((SHIDWORD(v36) >> 31) + 0x8000 + v36) >> 16) )
                {
                  v386 = v639 & 0xF;
                  v387 = v386 - 7;
                  v388 = v386 - 8;
                  if ( v388 < 0 )
                    v387 = v388;
                  (*(void (**)(int, unsigned int, int))(v1 + 600))(
                    v1,
                    v29,
                    (v387 << 6) / (1 << *(uint16_t *)(v1 + 334)));
                }
                v27 = *(uint32_t *)(v1 + 28);
              }
              if ( v620 < ++v657 )
                break;
              if ( v27 <= 1 )
                goto LABEL_881;
            }
            v21 = *(uint32_t *)(v1 + 12);
          }
        }
        else
        {
          v21 = 0;
          v27 = v15;
        }
        *(uint32_t *)(v1 + 32) = v27;
        goto LABEL_128;
      case 0x76u:
        v63 = *v638;
        v64 = *v638 & 0xC0;
        if ( v64 == 64 )
          goto LABEL_898;
        if ( (unsigned int)v64 <= 0x40 )
        {
          if ( v64 == 0 )
          {
            *(uint32_t *)(v1 + 476) = 0x2000;
            v65 = 0x2000;
            goto LABEL_162;
          }
          goto LABEL_887;
        }
        if ( v64 == 128 )
        {
          *(uint32_t *)(v1 + 476) = 0x8000;
          v65 = 0x8000;
        }
        else
        {
          if ( v64 != 192 )
          {
LABEL_887:
            v65 = *(uint32_t *)(v1 + 476);
            goto LABEL_162;
          }
LABEL_898:
          *(uint32_t *)(v1 + 476) = 0x4000;
          v65 = 0x4000;
        }
LABEL_162:
        v66 = v63 & 0x30;
        if ( v66 == 16 )
        {
          *(uint32_t *)(v1 + 480) = v65 / 4;
        }
        else if ( v66 > 0x10 )
        {
          if ( v66 == 32 )
          {
            *(uint32_t *)(v1 + 480) = v65 / 2;
          }
          else if ( v66 == 48 )
          {
            *(uint32_t *)(v1 + 480) = 3 * v65 / 4;
          }
        }
        else if ( (v63 & 0x30) == 0 )
        {
          *(uint32_t *)(v1 + 480) = 0;
        }
        v67 = v63 & 0xF;
        if ( v67 != 0 )
          v68 = v65 * (v67 - 4) / 8;
        else
          v68 = v65 - 1;
        *(uint32_t *)(v1 + 312) = 6;
        *(uint32_t *)(v1 + 476) = v65 / 256;
        *(int *)(v1 + 480) /= 256;
        v69 = v68 + 255;
        if ( v68 >= 0 )
          v69 = v68;
        v21 = *(uint32_t *)(v1 + 12);
        *(uint32_t *)(v1 + 484) = v69 >> 8;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E5010);
        goto LABEL_128;
      case 0x77u:
        v56 = *v638;
        v57 = *v638 & 0xC0;
        if ( v57 == 64 )
          goto LABEL_897;
        if ( (unsigned int)v57 <= 0x40 )
        {
          if ( v57 == 0 )
          {
            *(uint32_t *)(v1 + 476) = 5792;
            v58 = 5792;
            goto LABEL_149;
          }
          goto LABEL_892;
        }
        if ( v57 == 128 )
        {
          *(uint32_t *)(v1 + 476) = 23170;
          v58 = 23170;
        }
        else
        {
          if ( v57 != 192 )
          {
LABEL_892:
            v58 = *(uint32_t *)(v1 + 476);
            goto LABEL_149;
          }
LABEL_897:
          *(uint32_t *)(v1 + 476) = 11585;
          v58 = 11585;
        }
LABEL_149:
        v59 = v56 & 0x30;
        if ( v59 == 16 )
        {
          *(uint32_t *)(v1 + 480) = v58 / 4;
        }
        else if ( v59 > 0x10 )
        {
          if ( v59 == 32 )
          {
            *(uint32_t *)(v1 + 480) = v58 / 2;
          }
          else if ( v59 == 48 )
          {
            *(uint32_t *)(v1 + 480) = 3 * v58 / 4;
          }
        }
        else if ( (v56 & 0x30) == 0 )
        {
          *(uint32_t *)(v1 + 480) = 0;
        }
        v60 = v56 & 0xF;
        if ( v60 != 0 )
          v61 = v58 * (v60 - 4) / 8;
        else
          v61 = v58 - 1;
        *(uint32_t *)(v1 + 312) = 7;
        *(uint32_t *)(v1 + 476) = v58 / 256;
        *(int *)(v1 + 480) /= 256;
        v62 = v61 + 255;
        if ( v61 >= 0 )
          v62 = v61;
        v21 = *(uint32_t *)(v1 + 12);
        *(uint32_t *)(v1 + 484) = v62 >> 8;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E50A0);
        goto LABEL_128;
      case 0x78u:
        if ( v638[1] == 0 )
          goto LABEL_50;
        v53 = *v638;
        v21 = 0;
        if ( *v638 == 0 )
        {
          v21 = 0;
          if ( v15 == 0 )
          {
            *(uint32_t *)(v1 + 12) = 132;
            LOBYTE(v21) = -124;
            v53 = *v638;
          }
        }
        v54 = *(uint32_t *)(v1 + 360) + v53;
        *(uint32_t *)(v1 + 360) = v54;
        if ( v54 < 0
          || (v55 = *(uint32_t *)(v1 + 428)) > 0
          && v54 > *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * (v55 - 1) + 12) + 8) )
        {
          *(uint32_t *)(v1 + 12) = 132;
          v21 = 132;
        }
        *(uint8_t *)(v1 + 376) = 0;
        goto LABEL_128;
      case 0x79u:
        if ( v638[1] != 0 )
          goto LABEL_50;
        v47 = *v638;
        v21 = 0;
        if ( *v638 == 0 )
        {
          v21 = 0;
          if ( v15 == 0 )
          {
            *(uint32_t *)(v1 + 12) = 132;
            LOBYTE(v21) = -124;
            v47 = *v638;
          }
        }
        v48 = *(uint32_t *)(v1 + 360) + v47;
        *(uint32_t *)(v1 + 360) = v48;
        if ( v48 < 0
          || (v49 = *(uint32_t *)(v1 + 428)) > 0
          && v48 > *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * (v49 - 1) + 12) + 8) )
        {
          *(uint32_t *)(v1 + 12) = 132;
          v21 = 132;
        }
        *(uint8_t *)(v1 + 376) = 0;
        goto LABEL_128;
      case 0x7Au:
        *(uint32_t *)(v1 + 312) = 5;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E3D00);
        goto LABEL_37;
      case 0x7Bu:
        v51 = *(uint32_t *)(v1 + 408);
        v50 = *(uint32_t *)(v1 + 416);
        v70 = v50;
        v71 = v50 + 24 * v51;
        if ( v50 >= v71 )
          goto LABEL_758;
        while ( *(uint8_t *)(v70 + 12) != 123 || *(uint8_t *)(v70 + 16) == 0 )
        {
          v70 += 24;
          if ( v71 <= v70 )
            goto LABEL_758;
        }
        v72 = *(uint32_t *)(v1 + 428);
        if ( v72 < *(uint32_t *)(v1 + 432) )
        {
          v73 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v72);
          *(uint32_t *)(v1 + 428) = v72 + 1;
          *v73 = *(uint32_t *)(v1 + 352);
          v74 = *(uint32_t *)(v1 + 360) + 1;
          v73[3] = v70;
          v73[1] = v74;
          v73[2] = 1;
          v75 = *(uint32_t *)v70;
          v76 = *(uint32_t *)(v70 + 4);
          if ( (unsigned int)(*(uint32_t *)v70 - 1) <= 2 )
          {
            v504 = (uint32_t *)(v1 + 8 * v75 + 436);
            if ( *v504 != 0 )
            {
              if ( v76 <= *(uint32_t *)(v1 + 8 * v75 + 440) )
              {
                *(uint32_t *)(v1 + 356) = *v504;
                *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v75 + 440);
                *(uint32_t *)(v1 + 360) = v76;
                *(uint32_t *)(v1 + 352) = v75;
                v21 = *(uint32_t *)(v1 + 12);
              }
              else
              {
                *(uint32_t *)(v1 + 12) = 131;
                v21 = 131;
              }
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 138;
              v21 = 138;
            }
          }
          else
          {
            *(uint32_t *)(v1 + 12) = 132;
            v21 = 132;
          }
          *(uint8_t *)(v1 + 376) = 0;
          goto LABEL_128;
        }
        goto LABEL_76;
      case 0x7Cu:
        *(uint32_t *)(v1 + 312) = 4;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E4F90);
        goto LABEL_37;
      case 0x7Du:
        *(uint32_t *)(v1 + 312) = 3;
        *(uint32_t *)(v1 + 568) = (uint32_t)(uintptr_t)(sub_11E4F50);
        goto LABEL_37;
      case 0x80u:
        v163 = *(uint32_t *)(v1 + 304);
        if ( *(uint32_t *)(v1 + 16) < v163 )
        {
          v21 = 0;
          if ( *(uint8_t *)(v1 + 561) != 0 )
          {
            *(uint32_t *)(v1 + 12) = 129;
            LOBYTE(v21) = -127;
          }
        }
        else
        {
          v164 = v601;
          if ( v163 > 0 )
          {
            while ( 1 )
            {
              *(uint32_t *)(v1 + 28) = --v15;
              v165 = *(uint16_t *)(v164 + 4 * v15);
              if ( v165 >= *(uint16_t *)(v1 + 152) )
              {
                if ( *(uint8_t *)(v1 + 561) != 0 )
                  goto LABEL_79;
              }
              else
              {
                *(uint8_t *)(*(uint32_t *)(v1 + 168) + v165) ^= 1u;
                v15 = *(uint32_t *)(v1 + 28);
                v163 = *(uint32_t *)(v1 + 304);
              }
              *(uint32_t *)(v1 + 304) = --v163;
              if ( v163 <= 0 )
                break;
              v164 = *(uint32_t *)(v1 + 24);
            }
            v21 = *(uint32_t *)(v1 + 12);
          }
          else
          {
            v21 = 0;
          }
        }
        *(uint32_t *)(v1 + 304) = 1;
        *(uint32_t *)(v1 + 32) = v15;
        goto LABEL_128;
      case 0x81u:
        v316 = *((uint16_t *)v638 + 2);
        v317 = *v638;
        v318 = *(uint16_t *)(v1 + 152);
        if ( v316 >= v318 || (uint16_t)v317 >= v318 )
          goto LABEL_78;
        if ( v316 < (uint16_t)v317 )
          goto LABEL_50;
        do
        {
          v319 = (uint8_t *)(*(uint32_t *)(v1 + 168) + (uint16_t)v317++);
          *v319 |= 1u;
        }
        while ( v316 >= (uint16_t)v317 );
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x82u:
        v288 = *((uint16_t *)v638 + 2);
        v289 = *v638;
        v290 = *(uint16_t *)(v1 + 152);
        if ( v288 >= v290 || (uint16_t)v289 >= v290 )
          goto LABEL_78;
        if ( v288 < (uint16_t)v289 )
          goto LABEL_50;
        do
        {
          v291 = (uint8_t *)(*(uint32_t *)(v1 + 168) + (uint16_t)v289++);
          *v291 &= ~1u;
        }
        while ( v288 >= (uint16_t)v289 );
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x83u:
      case 0x84u:
        v51 = *(uint32_t *)(v1 + 408);
        v50 = *(uint32_t *)(v1 + 416);
        v309 = v50;
        v310 = v50 + 24 * v51;
        if ( v50 >= v310 )
          goto LABEL_758;
        while ( v655 != *(uint8_t *)(v309 + 12) || *(uint8_t *)(v309 + 16) == 0 )
        {
          v309 += 24;
          if ( v310 <= v309 )
            goto LABEL_758;
        }
        v311 = *(uint32_t *)(v1 + 428);
        if ( v311 < *(uint32_t *)(v1 + 432) )
        {
          v312 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v311);
          *(uint32_t *)(v1 + 428) = v311 + 1;
          *v312 = *(uint32_t *)(v1 + 352);
          v313 = *(uint32_t *)(v1 + 360) + 1;
          v312[2] = 1;
          v312[1] = v313;
          v312[3] = v309;
          v314 = *(uint32_t *)v309;
          v315 = *(uint32_t *)(v309 + 4);
          if ( (unsigned int)(*(uint32_t *)v309 - 1) <= 2 )
          {
            v489 = (uint32_t *)(v1 + 8 * v314 + 436);
            if ( *v489 != 0 )
            {
              if ( v315 <= *(uint32_t *)(v1 + 8 * v314 + 440) )
              {
                *(uint32_t *)(v1 + 356) = *v489;
                *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v314 + 440);
                *(uint32_t *)(v1 + 360) = v315;
                *(uint32_t *)(v1 + 352) = v314;
                v21 = *(uint32_t *)(v1 + 12);
              }
              else
              {
                *(uint32_t *)(v1 + 12) = 131;
                v21 = 131;
              }
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 138;
              v21 = 138;
            }
          }
          else
          {
            *(uint32_t *)(v1 + 12) = 132;
            v21 = 132;
          }
          *(uint8_t *)(v1 + 376) = 0;
          goto LABEL_128;
        }
        goto LABEL_76;
      case 0x85u:
        v235 = *v638;
        v236 = (uint8_t)*v638;
        if ( v236 == 255 )
        {
          *(uint8_t *)(v1 + 337) = 1;
        }
        else
        {
          if ( (uint8_t)*v638 != 0 )
          {
            if ( (v235 & 0x100) != 0 && v236 >= *(uint16_t *)(v1 + 252) )
            {
              *(uint8_t *)(v1 + 337) = 1;
              v235 = *v638;
            }
            if ( (v235 & 0x200) != 0 && *(uint8_t *)(v1 + 281) != 0 )
            {
              *(uint8_t *)(v1 + 337) = 1;
              v235 = *v638;
            }
            if ( (v235 & 0x400) != 0 && *(uint8_t *)(v1 + 282) != 0 )
            {
              *(uint8_t *)(v1 + 337) = 1;
              v235 = *v638;
            }
            if ( (v235 & 0x800) != 0 && v236 < *(uint16_t *)(v1 + 252) )
            {
              *(uint8_t *)(v1 + 337) = 0;
              v235 = *v638;
            }
            if ( (v235 & 0x1000) != 0 && *(uint8_t *)(v1 + 281) != 0 )
            {
              *(uint8_t *)(v1 + 337) = 0;
              v235 = *v638;
            }
            if ( (v235 & 0x2000) != 0 )
            {
              if ( *(uint8_t *)(v1 + 282) != 0 )
                *(uint8_t *)(v1 + 337) = 0;
              v21 = *(uint32_t *)(v1 + 12);
            }
            else
            {
              v21 = *(uint32_t *)(v1 + 12);
            }
            goto LABEL_128;
          }
          *(uint8_t *)(v1 + 337) = 0;
        }
        goto LABEL_37;
      case 0x86u:
      case 0x87u:
        v661 = v638[1];
        v103 = *(uint16_t *)v638;
        if ( *(uint16_t *)v638 >= *(uint16_t *)(v1 + 80) || (uint16_t)v661 >= *(uint16_t *)(v1 + 116) )
          goto LABEL_78;
        v643 = 8 * (uint16_t)v661;
        v662 = 8 * v103;
        v104 = (int *)(*(uint32_t *)(v1 + 84) + v662);
        v105 = (uint32_t *)(*(uint32_t *)(v1 + 120) + v643);
        v106 = *v104;
        v107 = v104[1] - v105[1];
        v108 = v106 - *v105;
        if ( (v108 | v107) != 0 )
        {
          v623 = v12 & 1;
          if ( (v12 & 1) != 0 )
          {
            v109 = v107;
            v107 = v108;
            v108 = -v109;
          }
          if ( (unsigned int)(v108 + 0x3FFF) <= 0x7FFE && (unsigned int)(v107 + 0x3FFF) <= 0x7FFE )
          {
            if ( (v108 | v107) == 0 )
              goto LABEL_250;
            v108 <<= 14;
            v107 <<= 14;
          }
        }
        else
        {
          v623 = 0;
          v107 = 0;
          v108 = 0x4000;
        }
        v519 = v107;
        v534 = 4 * FT_Hypot(v108, v107);
        *(uint16_t *)(v1 + 290) = FT_DivFix(v108, v534);
        *(uint16_t *)(v1 + 292) = FT_DivFix(v519, v534);
LABEL_250:
        v110 = (uint32_t *)(*(uint32_t *)(v1 + 88) + v662);
        v111 = (uint32_t *)(*(uint32_t *)(v1 + 124) + v643);
        v112 = v110[1] - v111[1];
        v113 = *v110 - *v111;
        if ( (v113 | v112) != 0 )
        {
          if ( v623 != 0 )
          {
            v112 = *v110 - *v111;
            v113 = v111[1] - v110[1];
          }
          if ( (unsigned int)(v113 + 0x3FFF) <= 0x7FFE && (unsigned int)(v112 + 0x3FFF) <= 0x7FFE )
          {
            if ( (v113 | v112) == 0 )
              goto LABEL_258;
            v113 <<= 14;
            v112 <<= 14;
          }
        }
        else
        {
          v112 = 0;
          v113 = 0x4000;
        }
        v535 = v113;
        v520 = 4 * FT_Hypot(v113, v112);
        *(uint16_t *)(v1 + 294) = FT_DivFix(v535, v520);
        *(uint16_t *)(v1 + 296) = FT_DivFix(v112, v520);
LABEL_258:
        v114 = *(uint16_t *)(v1 + 298);
        if ( v114 == 0x4000 )
        {
          v116 = *(uint16_t *)(v1 + 294);
          *(uint32_t *)(v1 + 564) = v116;
        }
        else
        {
          v115 = *(uint16_t *)(v1 + 300);
          if ( v115 == 0x4000 )
          {
            *(uint32_t *)(v1 + 564) = *(int16_t *)(v1 + 296);
            v116 = *(uint16_t *)(v1 + 294);
          }
          else
          {
            v116 = *(uint16_t *)(v1 + 294);
            *(uint32_t *)(v1 + 564) = (v114 * v116 + v115 * *(int16_t *)(v1 + 296)) >> 14;
          }
        }
        if ( v116 == 0x4000 )
        {
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 296) == 0x4000 )
            v117 = sub_11E3E10;
          else
            v117 = sub_11E3D40;
          *(uint32_t *)(v1 + 572) = (uint32_t)(uintptr_t)(v117);
        }
        if ( *(uint16_t *)(v1 + 290) == 0x4000 )
        {
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(sub_11E3E00);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 292) == 0x4000 )
            v118 = sub_11E3E10;
          else
            v118 = sub_11E3DA0;
          *(uint32_t *)(v1 + 576) = (uint32_t)(uintptr_t)(v118);
        }
        v119 = *(uint32_t *)(v1 + 564);
        *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E4080);
        *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3FB0);
        if ( v119 != 0x4000 )
          goto LABEL_270;
        if ( *(uint16_t *)(v1 + 298) == 0x4000 )
        {
          *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C60);
          *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CC0);
        }
        else
        {
          if ( *(uint16_t *)(v1 + 300) == 0x4000 )
          {
            *(uint32_t *)(v1 + 584) = (uint32_t)(uintptr_t)(sub_11E3C90);
            *(uint32_t *)(v1 + 588) = (uint32_t)(uintptr_t)(sub_11E3CE0);
          }
LABEL_270:
          if ( (unsigned int)(v119 + 1023) <= 0x7FE )
            *(uint32_t *)(v1 + 564) = 0x4000;
        }
        *(uint32_t *)(v1 + 256) = 0;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x88u:
        v292 = *v638;
        v293 = *v638 & 1;
        v294 = -(v293 == 0);
        v295 = -v293 & 0x23;
        v296 = (v294 & 0xFFFFFFDD) + 163;
        if ( (*v638 & 2) != 0 && *(uint8_t *)(v1 + 281) != 0 )
          v295 = v296;
        if ( (v292 & 4) != 0 )
        {
          v297 = v295;
          if ( *(uint8_t *)(v1 + 282) != 0 )
          {
            BYTE1(v297) = BYTE1(v295) | 1;
            v295 = v297;
          }
        }
        if ( (v292 & 0x20) != 0 )
        {
          v298 = v295;
          if ( *(uint8_t *)(v1 + 604) != 0 )
          {
            BYTE1(v298) = BYTE1(v295) | 0x10;
            v295 = v298;
          }
        }
        *v638 = v295;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x89u:
        v366 = *(uint32_t *)(v1 + 416);
        v677 = *(uint32_t *)(v1 + 408);
        v367 = v366 + 24 * v677;
        v368 = v366;
        if ( v366 < v367 )
        {
          v368 = *(uint32_t *)(v1 + 416);
          if ( *(uint32_t *)(v366 + 12) != *v638 )
          {
            do
              v368 += 24;
            while ( v367 > v368 && *(uint32_t *)(v368 + 12) != *v638 );
          }
        }
        if ( v367 != v368 )
          goto LABEL_718;
        if ( v677 < *(uint32_t *)(v1 + 412) )
        {
          *(uint32_t *)(v1 + 408) = v677 + 1;
LABEL_718:
          if ( *v638 <= 0xFF )
          {
            *(uint32_t *)(v368 + 12) = (uint8_t)*v638;
            *(uint32_t *)(v368 + 4) = *(uint32_t *)(v1 + 360) + 1;
            *(uint32_t *)v368 = *(uint32_t *)(v1 + 352);
            *(uint8_t *)(v368 + 16) = 1;
            if ( *v638 > *(uint32_t *)(v1 + 424) )
              *(uint32_t *)(v1 + 424) = (uint8_t)*v638;
            v369 = *(uint32_t *)(v1 + 364);
            v370 = *(uint32_t *)(v1 + 360) + *(uint32_t *)(v1 + 372);
            while ( 2 )
            {
              *(uint32_t *)(v1 + 360) = v370;
              if ( v370 >= v369 )
                goto LABEL_60;
              v632 = *(uint32_t *)(v1 + 356);
              v678 = *(uint8_t *)(v632 + v370);
              *(uint8_t *)(v1 + 368) = v678;
              v371 = byte_1CD66A0[v678];
              *(uint32_t *)(v1 + 372) = v371;
              if ( v371 >= 0 )
                goto LABEL_724;
              if ( v370 + 1 < v369 )
              {
                v371 = 2 - *(uint8_t *)(v632 + v370 + 1) * v371;
                *(uint32_t *)(v1 + 372) = v371;
LABEL_724:
                v370 += v371;
                if ( v370 > v369 )
                  goto LABEL_60;
                if ( v678 == 45 )
                {
                  v21 = *(uint32_t *)(v1 + 12);
                  goto LABEL_128;
                }
                if ( v678 == 0x89 || v678 == 44 )
                {
LABEL_356:
                  *(uint32_t *)(v1 + 12) = 137;
                  goto LABEL_61;
                }
                continue;
              }
              goto LABEL_60;
            }
          }
        }
        *(uint32_t *)(v1 + 12) = 141;
        goto LABEL_61;
      case 0x8Au:
        v142 = v638[1];
        v143 = *v638;
        v638[1] = v638[2];
        v638[2] = v143;
        *v638 = v142;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x8Bu:
        v300 = v638[1];
        if ( v300 <= (int)*v638 )
          goto LABEL_50;
        *v638 = v300;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x8Cu:
        v299 = v638[1];
        if ( v299 >= (int)*v638 )
          goto LABEL_50;
        *v638 = v299;
        v21 = *(uint32_t *)(v1 + 12);
        goto LABEL_128;
      case 0x8Du:
        if ( (*v638 & 0x80000000) != 0 )
          goto LABEL_50;
        *(uint32_t *)(v1 + 340) = *v638;
        goto LABEL_37;
      case 0x8Eu:
        v26 = v638[1];
        if ( v26 - 1 > 1 )
          goto LABEL_78;
        LOBYTE(v421) = 0;
        if ( *v638 != 0 )
          v421 = v638[1];
        *(uint8_t *)(v1 + 336) = *(uint8_t *)(v1 + 336) & ~(uint8_t)v26 | v421;
        goto LABEL_37;
      case 0x8Fu:
        v51 = *(uint32_t *)(v1 + 408);
        v50 = *(uint32_t *)(v1 + 416);
        v92 = v50;
        v93 = v50 + 24 * v51;
        if ( v50 >= v93 )
          goto LABEL_758;
        while ( *(uint8_t *)(v92 + 12) != 0x8F || *(uint8_t *)(v92 + 16) == 0 )
        {
          v92 += 24;
          if ( v93 <= v92 )
            goto LABEL_758;
        }
        v94 = *(uint32_t *)(v1 + 428);
        if ( v94 < *(uint32_t *)(v1 + 432) )
        {
          v95 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v94);
          *(uint32_t *)(v1 + 428) = v94 + 1;
          *v95 = *(uint32_t *)(v1 + 352);
          v96 = *(uint32_t *)(v1 + 360) + 1;
          v95[3] = v92;
          v95[1] = v96;
          v95[2] = 1;
          v97 = *(uint32_t *)v92;
          v98 = *(uint32_t *)(v92 + 4);
          if ( (unsigned int)(*(uint32_t *)v92 - 1) <= 2 )
          {
            v488 = (uint32_t *)(v1 + 8 * v97 + 436);
            if ( *v488 != 0 )
            {
              if ( v98 <= *(uint32_t *)(v1 + 8 * v97 + 440) )
              {
                *(uint32_t *)(v1 + 356) = *v488;
                *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v97 + 440);
                *(uint32_t *)(v1 + 360) = v98;
                *(uint32_t *)(v1 + 352) = v97;
                v21 = *(uint32_t *)(v1 + 12);
              }
              else
              {
                *(uint32_t *)(v1 + 12) = 131;
                v21 = 131;
              }
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 138;
              v21 = 138;
            }
          }
          else
          {
            *(uint32_t *)(v1 + 12) = 132;
            v21 = 132;
          }
          *(uint8_t *)(v1 + 376) = 0;
          goto LABEL_128;
        }
        goto LABEL_76;
      default:
        if ( v655 > 0xDFu )
        {
          v584 = *(uint32_t *)(v1 + 320);
          v615 = *(uint32_t *)(v1 + 308);
          v634 = *(uint16_t *)v638;
          v379 = v638[1];
          if ( *(uint16_t *)v638 < *(uint16_t *)(v1 + 80) )
          {
            v380 = *(uint16_t *)(v1 + 284);
            if ( v379 + 1 < *(uint32_t *)(v1 + 380) + 1 && v380 < *(uint16_t *)(v1 + 44) )
            {
              v453 = 0;
              if ( v379 != -1 )
              {
                v453 = (*(int (**)(int, unsigned int))(v1 + 592))(v1, v379);
                v380 = *(uint16_t *)(v1 + 284);
              }
              v581 = *(uint32_t *)(v1 + 328);
              if ( (signed int)__builtin_abs(v453 - v581) >= *(uint32_t *)(v1 + 324) )
              {
                v582 = v453;
              }
              else
              {
                v454 = -v581;
                if ( v453 >= 0 )
                  v454 = *(uint32_t *)(v1 + 328);
                v582 = v454;
              }
              v455 = v634;
              if ( *(uint16_t *)(v1 + 346) == 0 )
              {
                v456 = 8 * v634;
                v595 = (uint32_t *)(v456 + *(uint32_t *)(v1 + 84));
                *v595 = *(uint32_t *)(*(uint32_t *)(v1 + 48) + 8 * v380) + sub_11E3BD0(v582, *(int16_t *)(v1 + 298));
                v457 = *(uint32_t *)(v1 + 84) + v456;
                *(uint32_t *)(v457 + 4) = *(uint32_t *)(*(uint32_t *)(v1 + 48) + 8 * *(uint16_t *)(v1 + 284) + 4)
                                      + sub_11E3BD0(v582, *(int16_t *)(v1 + 300));
                v458 = *(uint32_t *)(v1 + 84);
                v455 = v634;
                v459 = *(uint32_t *)(v458 + 8 * v634);
                v460 = *(uint32_t *)(v458 + 8 * v634 + 4);
                v461 = *(uint32_t *)(v1 + 88);
                *(uint32_t *)(v461 + 8 * v634) = v459;
                *(uint32_t *)(v461 + 8 * v634 + 4) = v460;
                v380 = *(uint16_t *)(v1 + 284);
              }
              v596 = 8 * v455;
              v462 = (uint32_t *)(*(uint32_t *)(v1 + 48) + 8 * v380);
              v463 = (*(int (**)(int, int, int))(v1 + 576))(
                       v1,
                       *(uint32_t *)(v596 + *(uint32_t *)(v1 + 84)) - *v462,
                       *(uint32_t *)(v596 + *(uint32_t *)(v1 + 84) + 4) - v462[1]);
              v464 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * *(uint16_t *)(v1 + 284));
              v597 = (*(int (**)(int, int, int))(v1 + 572))(
                       v1,
                       *(uint32_t *)(*(uint32_t *)(v1 + 88) + v596) - *v464,
                       *(uint32_t *)(*(uint32_t *)(v1 + 88) + v596 + 4) - v464[1]);
              if ( *(uint8_t *)(v1 + 316) != 0 )
              {
                v465 = -v582;
                if ( (v463 ^ v582) >= 0 )
                  v465 = v582;
                v582 = v465;
              }
              v466 = *(uint8_t *)(v1 + 368);
              if ( (v466 & 4) != 0 )
              {
                if ( *(uint16_t *)(v1 + 344) == *(uint16_t *)(v1 + 346) )
                {
                  v467 = v582;
                  if ( v584 < (int)__builtin_abs(v582 - v463) )
                    v467 = v463;
                  v582 = v467;
                }
                v468 = (*(int (**)(int, int, uint32_t))(v1 + 568))(
                         v1,
                         v582,
                         *(uint32_t *)(v1 + 4 * (v466 & 3) + 264));
                v466 = *(uint8_t *)(v1 + 368);
              }
              else
              {
                v518 = *(uint32_t *)(v1 + 4 * (v466 & 3) + 264);
                if ( v582 < 0 )
                {
                  v468 = v582 - v518;
                  if ( v468 > 0 )
                    v468 = *(uint8_t *)(v1 + 368) & 4;
                }
                else
                {
                  v468 = v582 + v518;
                  if ( v468 < 0 && v582 != 0 )
                    v468 = *(uint8_t *)(v1 + 368) & 4;
                }
              }
              if ( (v466 & 8) != 0 )
              {
                if ( v463 < 0 )
                {
                  if ( v468 > -v615 )
                    v468 = -v615;
                }
                else if ( v468 < v615 )
                {
                  v468 = v615;
                }
              }
              (*(void (**)(int, int, uint32_t, int))(v1 + 584))(v1, v1 + 72, v634, v468 - v597);
              LOBYTE(v12) = *(uint8_t *)(v1 + 368);
              v380 = *(uint16_t *)(v1 + 284);
              goto LABEL_749;
            }
          }
          else
          {
            v380 = *(uint16_t *)(v1 + 284);
          }
          if ( *(uint8_t *)(v1 + 561) != 0 )
            *(uint32_t *)(v1 + 12) = 134;
LABEL_749:
          *(uint16_t *)(v1 + 286) = v380;
          if ( (v12 & 0x10) != 0 )
            *(uint16_t *)(v1 + 284) = v634;
          v21 = *(uint32_t *)(v1 + 12);
          *(uint16_t *)(v1 + 288) = v634;
          goto LABEL_128;
        }
        if ( v655 > 0xBFu )
        {
          v437 = *(uint16_t *)(v1 + 284);
          v616 = *(uint32_t *)(v1 + 308);
          v654 = *(uint16_t *)v638;
          if ( v654 >= *(uint16_t *)(v1 + 80) || v437 >= *(uint16_t *)(v1 + 44) )
          {
            if ( *(uint8_t *)(v1 + 561) != 0 )
              *(uint32_t *)(v1 + 12) = 134;
          }
          else
          {
            if ( *(uint16_t *)(v1 + 344) != 0 && *(uint16_t *)(v1 + 346) != 0 )
            {
              v635 = v654;
              v598 = *(uint32_t *)(v1 + 224);
              v506 = (uint32_t *)(*(uint32_t *)(v1 + 92) + 8 * v654);
              v507 = (uint32_t *)(*(uint32_t *)(v1 + 56) + 8 * v437);
              v508 = *(uint32_t *)(v1 + 220);
              v684 = v507;
              if ( v508 == v598 )
              {
                v511 = *(int *)(v1 + 220)
                     * (int64_t)(*(int (**)(int, int, int))(v1 + 576))(v1, *v506 - *v507, v506[1] - v507[1]);
                v440 = (((uint64_t)(unsigned int)((SHIDWORD(v511) >> 31) + 0x8000) + v511) >> 32 << 16)
                     + ((unsigned int)((SHIDWORD(v511) >> 31) + 0x8000 + v511) >> 16);
              }
              else
              {
                v509 = v508 * (int64_t)(*v506 - *v507);
                v587 = (((uint64_t)(unsigned int)((SHIDWORD(v509) >> 31) + 0x8000) + v509) >> 32 << 16)
                     + ((unsigned int)((SHIDWORD(v509) >> 31) + 0x8000 + v509) >> 16);
                v510 = v598 * (int64_t)(v506[1] - v684[1]);
                v440 = (*(int (**)(int, int, uint32_t))(v1 + 576))(
                         v1,
                         v587,
                         (((uint64_t)(unsigned int)((SHIDWORD(v510) >> 31) + 0x8000) + v510) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v510) >> 31) + 0x8000 + v510) >> 16));
              }
            }
            else
            {
              v635 = v654;
              v438 = (uint32_t *)(*(uint32_t *)(v1 + 84) + 8 * v654);
              v439 = (uint32_t *)(*(uint32_t *)(v1 + 48) + 8 * v437);
              v440 = (*(int (**)(int, int, int))(v1 + 576))(v1, *v438 - *v439, v438[1] - v439[1]);
            }
            v441 = *(uint32_t *)(v1 + 328);
            if ( (signed int)__builtin_abs(v440 - v441) >= *(uint32_t *)(v1 + 324) )
            {
              v441 = v440;
            }
            else if ( v440 < 0 )
            {
              v441 = -v441;
            }
            v442 = *(uint8_t *)(v1 + 368);
            if ( (v442 & 4) != 0 )
            {
              v444 = (*(int (**)(int, int, uint32_t))(v1 + 568))(v1, v441, *(uint32_t *)(v1 + 4 * (v442 & 3) + 264));
              v442 = *(uint8_t *)(v1 + 368);
            }
            else
            {
              v443 = *(uint32_t *)(v1 + 4 * (v442 & 3) + 264);
              if ( v441 < 0 )
              {
                v444 = v441 - v443;
                if ( v444 > 0 )
                  v444 = *(uint8_t *)(v1 + 368) & 4;
              }
              else
              {
                v444 = v441 + v443;
                if ( v444 < 0 && v441 != 0 )
                  v444 = *(uint8_t *)(v1 + 368) & 4;
              }
            }
            if ( (v442 & 8) != 0 )
            {
              if ( v441 < 0 )
              {
                if ( v444 > -v616 )
                  v444 = -v616;
              }
              else if ( v444 < v616 )
              {
                v444 = v616;
              }
            }
            v445 = (uint32_t *)(*(uint32_t *)(v1 + 52) + 8 * *(uint16_t *)(v1 + 284));
            v544 = v444;
            v446 = (*(int (**)(int, int, int))(v1 + 572))(
                     v1,
                     *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v635) - *v445,
                     *(uint32_t *)(*(uint32_t *)(v1 + 88) + 8 * v635 + 4) - v445[1]);
            (*(void (**)(int, int, int, int))(v1 + 584))(v1, v1 + 72, v635, v544 - v446);
            LOBYTE(v12) = *(uint8_t *)(v1 + 368);
            v437 = *(uint16_t *)(v1 + 284);
          }
          *(uint16_t *)(v1 + 286) = v437;
          *(uint16_t *)(v1 + 288) = v654;
          if ( (v12 & 0x10) != 0 )
            *(uint16_t *)(v1 + 284) = v654;
          v21 = *(uint32_t *)(v1 + 12);
          goto LABEL_128;
        }
        if ( v655 > 0xB7u )
        {
          if ( (uint16_t)(v655 - 183) < v619 + 1 - *(uint32_t *)(v1 + 16) )
          {
            v17 = *(uint32_t *)(v1 + 360) + 1;
            *(uint32_t *)(v1 + 360) = v17;
            v656 = 4 * (uint16_t)(v655 - 184) + 4;
            v18 = 0;
            while ( 1 )
            {
              v19 = *(uint32_t *)(v1 + 356);
              v20 = v17 + 2;
              *(uint32_t *)(v1 + 360) = v20;
              v638[v18 / 4] = (int16_t)(*(uint8_t *)(v19 + v20 - 1) + (*(uint8_t *)(v19 + v20 - 2) << 8));
              v18 += 4;
              if ( v18 == v656 )
                break;
              v17 = *(uint32_t *)(v1 + 360);
            }
            *(uint8_t *)(v1 + 376) = 0;
            v21 = *(uint32_t *)(v1 + 12);
            goto LABEL_128;
          }
          goto LABEL_76;
        }
        if ( v655 > 0xAFu )
        {
          if ( (uint16_t)(v655 - 175) < v619 + 1 - *(uint32_t *)(v1 + 16) )
          {
            v681 = v655 - 175;
            v422 = 1;
            do
            {
              v423 = (uint16_t)v422++;
              v638[v423 - 1] = *(uint8_t *)(*(uint32_t *)(v1 + 356) + *(uint32_t *)(v1 + 360) + v423);
            }
            while ( v681 >= (uint16_t)v422 );
            v21 = *(uint32_t *)(v1 + 12);
            goto LABEL_128;
          }
          goto LABEL_76;
        }
        v51 = *(uint32_t *)(v1 + 408);
        v50 = *(uint32_t *)(v1 + 416);
        v495 = v50;
        if ( v50 < v50 + 24 * v51 )
        {
          while ( v655 != *(uint8_t *)(v495 + 12) || *(uint8_t *)(v495 + 16) == 0 )
          {
            v495 += 24;
            if ( v50 + 24 * v51 <= v495 )
              goto LABEL_758;
          }
          v496 = *(uint32_t *)(v1 + 428);
          if ( v496 < *(uint32_t *)(v1 + 432) )
          {
            v497 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v496);
            *(uint32_t *)(v1 + 428) = v496 + 1;
            *v497 = *(uint32_t *)(v1 + 352);
            v498 = *(uint32_t *)(v1 + 360) + 1;
            v497[2] = 1;
            v497[1] = v498;
            v497[3] = v495;
            v499 = *(uint32_t *)v495;
            v500 = *(uint32_t *)(v495 + 4);
            if ( (unsigned int)(*(uint32_t *)v495 - 1) <= 2 )
            {
              v515 = (uint32_t *)(v1 + 8 * v499 + 436);
              if ( *v515 != 0 )
              {
                if ( v500 <= *(uint32_t *)(v1 + 8 * v499 + 440) )
                {
                  *(uint32_t *)(v1 + 356) = *v515;
                  *(uint32_t *)(v1 + 364) = *(uint32_t *)(v1 + 8 * v499 + 440);
                  *(uint32_t *)(v1 + 360) = v500;
                  *(uint32_t *)(v1 + 352) = v499;
                  v21 = *(uint32_t *)(v1 + 12);
                }
                else
                {
                  *(uint32_t *)(v1 + 12) = 131;
                  v21 = 131;
                }
              }
              else
              {
                *(uint32_t *)(v1 + 12) = 138;
                v21 = 138;
              }
            }
            else
            {
              *(uint32_t *)(v1 + 12) = 132;
              v21 = 132;
            }
            *(uint8_t *)(v1 + 376) = 0;
            goto LABEL_128;
          }
LABEL_76:
          *(uint32_t *)(v1 + 12) = 130;
          goto LABEL_61;
        }
LABEL_758:
        *(uint32_t *)(v1 + 12) = 128;
LABEL_131:
        v52 = v50 + 24 * v51;
        if ( v50 >= v52 )
        {
LABEL_135:
          *(uint32_t *)(v1 + 12) = 128;
          goto LABEL_61;
        }
        while ( *(uint8_t *)(v50 + 16) == 0 || *(uint8_t *)(v1 + 368) != *(uint8_t *)(v50 + 12) )
        {
          v50 += 24;
          if ( v52 <= v50 )
            goto LABEL_135;
        }
        v381 = *(uint32_t *)(v1 + 428);
        if ( v381 >= *(uint32_t *)(v1 + 432) )
        {
LABEL_79:
          *(uint32_t *)(v1 + 12) = 134;
          goto LABEL_61;
        }
        v382 = (uint32_t *)(*(uint32_t *)(v1 + 436) + 16 * v381);
        *v382 = *(uint32_t *)(v1 + 352);
        v383 = *(uint32_t *)(v1 + 360) + 1;
        v382[3] = v50;
        v382[1] = v383;
        v382[2] = 1;
        v384 = *(uint32_t *)v50;
        v11 = *(uint32_t *)(v50 + 4);
        if ( (unsigned int)(*(uint32_t *)v50 - 1) > 2 )
        {
LABEL_754:
          *(uint32_t *)(v1 + 12) = 132;
          goto LABEL_61;
        }
        v385 = *(uint32_t *)(v1 + 8 * v384 + 436);
        if ( v385 == 0 )
        {
LABEL_802:
          *(uint32_t *)(v1 + 12) = 138;
          goto LABEL_61;
        }
        if ( v11 > *(uint32_t *)(v1 + 8 * v384 + 440) )
          goto LABEL_60;
        *(uint32_t *)(v1 + 356) = v385;
        v637 = *(uint32_t *)(v1 + 8 * v384 + 440);
        *(uint32_t *)(v1 + 364) = v637;
        *(uint32_t *)(v1 + 360) = v11;
        *(uint32_t *)(v1 + 352) = v384;
LABEL_40:
        if ( v637 <= (int)v11 )
        {
          result = 0;
          if ( *(int *)(v1 + 428) <= 0 )
            return result;
LABEL_60:
          *(uint32_t *)(v1 + 12) = 131;
          goto LABEL_61;
        }
        if ( *(uint8_t *)(v1 + 488) != 0 )
          return 0;
        break;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: TT_New_Context  (binary VA: 0x11f2470)
// Original: TT_New_Context
// ----------------------------------------------------------------------------
int TT_New_Context(int a1)
{
  int v1;
  int v2;
  uint32_t *v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v1 = *(uint32_t *)(a1 + 28);
  v2 = *(uint32_t *)(a1 + 8);
  if ( v1 == 0 )
  {
    v4 = (uint32_t *)(ft_mem_alloc(v2, 608, &v12));
    if ( v12 == 0 )
    {
      v4[2] = v2;
      v4[108] = 32;
      v11 = (int)(uintptr_t)(v4);
      v5 = ft_mem_realloc(v2, 16, 0, 32, 0, v13);
      v6 = v11;
      *(uint32_t *)(v11 + 436) = (uint32_t)(uintptr_t)(v5);
      if ( v13[0] != 0 )
      {
        v7 = *(uint32_t *)(v11 + 8);
        v8 = *(uint32_t *)(v11 + 24);
        *(uint16_t *)(v11 + 440) = 0;
        *(uint16_t *)(v11 + 442) = 0;
        ft_mem_free(v7, v8);
        v9 = *(uint32_t *)(v11 + 436);
        *(uint32_t *)(v11 + 24) = 0;
        *(uint32_t *)(v11 + 20) = 0;
        ft_mem_free(v7, v9);
        v10 = *(uint32_t *)(v11 + 392);
        *(uint32_t *)(v11 + 436) = 0;
        *(uint32_t *)(v11 + 432) = 0;
        *(uint32_t *)(v11 + 428) = 0;
        ft_mem_free(v7, v10);
        *(uint32_t *)(v11 + 392) = 0;
        *(uint32_t *)(v11 + 388) = 0;
        *(uint32_t *)(v11 + 4) = 0;
        *(uint32_t *)v11 = 0;
        ft_mem_free(v7, v11);
        v6 = v11;
        if ( v13[0] != 0 )
          return v1;
      }
      else
      {
        *(uint16_t *)(v11 + 440) = 0;
        *(uint16_t *)(v11 + 442) = 0;
        *(uint32_t *)(v11 + 20) = 0;
        *(uint32_t *)(v11 + 388) = 0;
        *(uint32_t *)(v11 + 24) = 0;
        *(uint32_t *)(v11 + 392) = 0;
        *(uint32_t *)v11 = 0;
        *(uint32_t *)(v11 + 4) = 0;
      }
      *(uint32_t *)(a1 + 28) = v6;
      return v6;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: af_get_coverage  (binary VA: 0x1206eb0)
// Original: af_get_coverage
// ----------------------------------------------------------------------------
int af_get_coverage()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: af_get_char_index  (binary VA: 0x1207a30)
// Original: af_get_char_index
// ----------------------------------------------------------------------------
int af_get_char_index(int a1, int a2, int *a3, uint32_t *a4)
{
  int result;

  result = 6;
  if ( a1 != 0 )
  {
    *a3 = FT_Get_Char_Index(**(uint32_t **)(a1 + 36), a2);
    *a4 = 0;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_OpenGzip  (binary VA: 0x1227b60)
// Original: FT_Stream_OpenGzip
// ----------------------------------------------------------------------------
int FT_Stream_OpenGzip(int a1, uint32_t *a2)
{
  int v2;
  char v4;
  char Char;
  int v6;
  char v7;
  uint16_t *v8;
  unsigned int v9;
  uint16_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  char v16;
  int v17;
  uint32_t *v18;
  char v19;
  int v20;
  char *v21;
  int v22;
  int v23;
  int v24;
  void (*v25)(uint32_t, int);
  int *v26;
  int (*v27)(uint32_t, uint32_t, uint32_t);
  int v28;
  int v29;
  uint16_t UShortLE;
  uint16_t v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_ULong;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[16];
  typedef uint32_t _g4_t_v46[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v37)) > _g4_s5 ? (12u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v38)) > _g4_s6 ? (12u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v39)) > _g4_s7 ? (12u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_ULong)) > _g4_s8 ? (16u + sizeof(_g4_t_ULong)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v41)) > _g4_s9 ? (20u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v42)) > _g4_s10 ? (20u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v43)) > _g4_s11 ? (24u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v44)) > _g4_s12 ? (32u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v45)) > _g4_s13 ? (48u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v46)) > _g4_s14 ? (64u + sizeof(_g4_t_v46)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_ULong &ULong = *reinterpret_cast<_g4_t_ULong *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);

  v43 = a2[7];
  v2 = FT_Stream_Seek(a2, 0);
  v46[0] = v2;
  if ( v2 != 0 )
    return v2;
  v2 = FT_Stream_Read(a2, v45, 4u);
  v46[0] = v2;
  if ( v2 != 0 )
    return v2;
  LOWORD(v2) = 3;
  if ( v45[0] != 31 || v45[1] != 0x8B || v45[2] != 8 || (v45[3] & 0xE0) != 0 )
    return v2;
  v2 = FT_Stream_Skip(a2, 6);
  v46[0] = v2;
  v4 = v45[3];
  if ( (v45[3] & 4) != 0 )
  {
    UShortLE = FT_Stream_ReadUShortLE(a2, v46);
    v2 = v46[0];
    if ( v46[0] != 0 )
      return v2;
    v2 = FT_Stream_Skip(a2, UShortLE);
    v46[0] = v2;
    if ( v2 != 0 )
      return v2;
    v4 = v45[3];
  }
  if ( (v4 & 8) != 0 )
  {
    while ( 1 )
    {
      Char = FT_Stream_ReadChar(a2, v46);
      v6 = v46[0];
      if ( v46[0] != 0 )
        return v6;
      if ( Char == 0 )
      {
        v2 = v46[0];
        v4 = v45[3];
        break;
      }
    }
  }
  if ( (v4 & 0x10) != 0 )
  {
    while ( 1 )
    {
      v7 = FT_Stream_ReadChar(a2, v46);
      v6 = v46[0];
      if ( v46[0] != 0 )
        return v6;
      if ( v7 == 0 )
      {
        v2 = v46[0];
        v4 = v45[3];
        break;
      }
    }
  }
  if ( (v4 & 2) != 0 )
  {
    v2 = FT_Stream_Skip(a2, 2);
    v46[0] = v2;
  }
  v44[0] = v2;
  if ( v2 != 0 )
    return v2;
  v8 = (uint16_t *)a1;
  v9 = 40;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v8 = (uint16_t *)(a1 + 1);
    LOBYTE(v9) = 39;
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
  *(uint32_t *)(a1 + 28) = v43;
  v11 = (uint32_t *)ft_mem_qalloc(v43, 8276, v44);
  v12 = v11;
  if ( v44[0] == 0 )
  {
    v11[1] = a1;
    *v11 = (uint32_t)(uintptr_t)(a2);
    v13 = *(uint32_t *)(a1 + 28);
    v12[2066] = 0;
    v12[2] = v13;
    v12[2068] = (uint32_t)(uintptr_t)(v12 + 2066);
    v12[2067] = (uint32_t)(uintptr_t)(v12 + 2066);
    v14 = FT_Stream_Seek(a2, 0);
    v46[0] = v14;
    if ( v14 != 0 )
      goto LABEL_30;
    v14 = FT_Stream_Read(a2, v45, 4u);
    v46[0] = v14;
    if ( v14 != 0 )
      goto LABEL_30;
    if ( v45[0] != 31 || v45[1] != 0x8B || v45[2] != 8 || (v45[3] & 0xE0) != 0 )
    {
      v46[0] = 3;
      v14 = 3;
LABEL_30:
      v44[0] = v14;
      ft_mem_free(v43, (int)(uintptr_t)(v12));
      return v44[0];
    }
    v46[0] = FT_Stream_Skip(a2, 6);
    if ( (v45[3] & 4) != 0 )
    {
      v31 = FT_Stream_ReadUShortLE(a2, v46);
      v14 = v46[0];
      if ( v46[0] != 0 )
        goto LABEL_30;
      v14 = FT_Stream_Skip(a2, v31);
      v46[0] = v14;
      if ( v14 != 0 )
        goto LABEL_30;
    }
    if ( (v45[3] & 8) != 0 )
    {
      v15 = v46;
      do
      {
        v32 = v15;
        v16 = FT_Stream_ReadChar(a2, v15);
        v17 = v46[0];
        v15 = v32;
        if ( v46[0] != 0 )
          goto LABEL_81;
      }
      while ( v16 != 0 );
    }
    if ( (v45[3] & 0x10) != 0 )
    {
      v18 = v46;
      while ( 1 )
      {
        v33 = v18;
        v19 = FT_Stream_ReadChar(a2, v18);
        v17 = v46[0];
        v18 = v33;
        if ( v46[0] != 0 )
          break;
        if ( v19 == 0 )
          goto LABEL_43;
      }
LABEL_81:
      v14 = v17;
      goto LABEL_30;
    }
LABEL_43:
    if ( (v45[3] & 2) != 0 )
      v46[0] = FT_Stream_Skip(a2, 2);
    v14 = v46[0];
    if ( v46[0] != 0 )
      goto LABEL_30;
    v12[17] = FT_Stream_Pos((int)(uintptr_t)(a2));
    v12[11] = (uint32_t)(uintptr_t)(sub_1222B50);
    v12[12] = (uint32_t)(uintptr_t)(sub_1222AF0);
    v12[13] = a2[7];
    v12[4] = 0;
    v12[3] = (uint32_t)(uintptr_t)(v12 + 1042);
    v20 = sub_12240E0(v12 + 3, -15);
    v14 = 3;
    if ( v20 != 0 || v12[3] == 0 )
      goto LABEL_30;
    v44[0] = 0;
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v12);
  }
  v41 = a2[2];
  if ( FT_Stream_Seek(a2, a2[1] - 4) == 0 )
  {
    ULong = FT_Stream_ReadULong(a2, v46);
    if ( v46[0] != 0 )
    {
      FT_Stream_Seek(a2, v41);
    }
    else
    {
      FT_Stream_Seek(a2, v41);
      if ( ULong - 1 <= 0x9FFE )
      {
        v21 = (char *)ft_mem_alloc(v43, ULong, v44);
        if ( v44[0] == 0 )
        {
          v34 = (int)(uintptr_t)(v21);
          v22 = sub_1227730((int)(uintptr_t)(v12), 0, v21, ULong);
          v23 = v34;
          if ( v22 == ULong )
          {
            if ( v12 != (uint32_t *)-12 )
            {
              v24 = v12[10];
              if ( v24 != 0 )
              {
                v25 = (void (*)(uint32_t, int))v12[12];
                if ( v25 != nullptr )
                {
                  v26 = *(int **)(v24 + 20);
                  if ( v26 != nullptr )
                  {
                    v42 = *v26;
                    if ( (unsigned int)(*v26 - 4) <= 1 )
                    {
                      v25(v12[13], v26[3]);
                      v23 = v34;
                      v42 = *v26;
                    }
                    if ( v42 == 6 )
                    {
                      v39 = v23;
                      ((void (*)(uint32_t, int))v12[12])(v12[13], v26[1]);
                      v23 = v39;
                    }
                    v27 = (int (*)(uint32_t, uint32_t, uint32_t))v26[14];
                    v28 = v26[10];
                    *v26 = 0;
                    v26[7] = 0;
                    v26[8] = 0;
                    v26[13] = v28;
                    v26[12] = v28;
                    if ( v27 != nullptr )
                    {
                      v35 = v23;
                      v29 = v27(0, 0, 0);
                      v26[15] = v29;
                      v12[15] = v29;
                      v28 = v26[10];
                      v23 = v35;
                    }
                    v36 = v23;
                    ((void (*)(uint32_t, int))v12[12])(v12[13], v28);
                    ((void (*)(uint32_t, int))v12[12])(v12[13], v26[9]);
                    ((void (*)(uint32_t, int *))v12[12])(v12[13], v26);
                    v25 = (void (*)(uint32_t, int))v12[12];
                    v24 = v12[10];
                    v23 = v36;
                  }
                  v37 = v23;
                  v25(v12[13], v24);
                  v12[10] = 0;
                  v23 = v37;
                }
              }
            }
            v12[11] = 0;
            v12[12] = 0;
            v12[13] = 0;
            v12[3] = 0;
            v12[6] = 0;
            v12[4] = 0;
            v12[7] = 0;
            v12[2] = 0;
            *v12 = 0;
            v12[1] = 0;
            v38 = v23;
            ft_mem_free(v43, (int)(uintptr_t)(v12));
            v2 = v44[0];
            *(uint32_t *)(a1 + 4) = ULong;
            *(uint32_t *)(a1 + 12) = 0;
            *(uint32_t *)(a1 + 8) = 0;
            *(uint32_t *)a1 = v38;
            *(uint32_t *)(a1 + 20) = 0;
            *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(sub_1222BD0);
            return v2;
          }
          sub_1227730((int)(uintptr_t)(v12), 0, nullptr, 0);
          ft_mem_free(v43, v34);
        }
        goto LABEL_51;
      }
    }
  }
  v2 = v44[0];
LABEL_51:
  *(uint32_t *)(a1 + 4) = 0x7FFFFFFF;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(sub_1227B40);
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(sub_1222BD0);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: FT_Gzip_Uncompress  (binary VA: 0x12282d0)
// Original: FT_Gzip_Uncompress
// ----------------------------------------------------------------------------
int FT_Gzip_Uncompress(int a1, uint8_t *a2, uint8_t **a3, uint8_t *a4, uint8_t *a5)
{
  int v5;
  int v6;
  int v8;
  int v9;
  int (*v10)(int, int);
  int *v11;
  int v12;
  int (*v13)(uint32_t, uint32_t, uint32_t);
  int v14;
  int v15;
  int v16;
  int (*v17)(int, int);
  int *v18;
  int v19;
  int (*v20)(uint32_t, uint32_t, uint32_t);
  int v21;
  int v22;
  typedef uint8_t *_g4_t_v23[7];
  typedef int _g4_t_v24;
  typedef void *(*_g4_t_v25)(int, int, int);
  typedef int (*_g4_t_v26)(int, int);
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v24)) > _g4_s1 ? (28u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v26)) > _g4_s3 ? (36u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v28)) > _g4_s5 ? (48u + sizeof(_g4_t_v28)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);

  v23[0] = a4;
  v23[1] = a5;
  v23[3] = a2;
  v23[4] = *a3;
  v25 = sub_1222B50;
  v26 = sub_1222AF0;
  v27 = a1;
  v5 = sub_12240E0(v23, 15);
  v6 = 6;
  if ( v5 == 0 )
  {
    LOBYTE(v6) = 4;
    v8 = sub_12245A0(v23, v6);
    if ( v8 == 1 )
    {
      *a3 = v23[5];
      v16 = v24;
      if ( v24 != 0 )
      {
        v17 = v26;
        if ( v26 != nullptr )
        {
          v18 = *(int **)(v24 + 20);
          if ( v18 != nullptr )
          {
            v19 = *v18;
            if ( (unsigned int)(*v18 - 4) <= 1 )
            {
              v26(v27, v18[3]);
              v19 = *v18;
            }
            if ( v19 == 6 )
              v26(v27, v18[1]);
            v20 = (int (*)(uint32_t, uint32_t, uint32_t))v18[14];
            v21 = v18[10];
            *v18 = 0;
            v18[7] = 0;
            v18[8] = 0;
            v18[13] = v21;
            v18[12] = v21;
            if ( v20 != nullptr )
            {
              v22 = v20(0, 0, 0);
              v18[15] = v22;
              v28 = v22;
              v21 = v18[10];
            }
            v26(v27, v21);
            v26(v27, v18[9]);
            v26(v27, (int)(uintptr_t)(v18));
            v17 = v26;
            v16 = v24;
          }
          v17(v27, v16);
        }
      }
      return 0;
    }
    else
    {
      v9 = v24;
      if ( v24 != 0 )
      {
        v10 = v26;
        if ( v26 != nullptr )
        {
          v11 = *(int **)(v24 + 20);
          if ( v11 != nullptr )
          {
            v12 = *v11;
            if ( (unsigned int)(*v11 - 4) <= 1 )
            {
              v26(v27, v11[3]);
              v12 = *v11;
            }
            if ( v12 == 6 )
              v26(v27, v11[1]);
            v13 = (int (*)(uint32_t, uint32_t, uint32_t))v11[14];
            v14 = v11[10];
            *v11 = 0;
            v11[7] = 0;
            v11[8] = 0;
            v11[13] = v14;
            v11[12] = v14;
            if ( v13 != nullptr )
            {
              v15 = v13(0, 0, 0);
              v11[15] = v15;
              v28 = v15;
              v14 = v11[10];
            }
            v26(v27, v14);
            v26(v27, v11[9]);
            v26(v27, (int)(uintptr_t)(v11));
            v10 = v26;
            v9 = v24;
          }
          v10(v27, v9);
        }
      }
      switch ( v8 )
      {
        case 0:
        case -5:
          return 10;
        case -4:
          return 64;
        default:
          v6 = 8;
          if ( v8 != -3 )
            return 0;
          break;
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ft_lzwstate_reset  (binary VA: 0x12285c0)
// Original: ft_lzwstate_reset
// ----------------------------------------------------------------------------
int ft_lzwstate_reset(int a1)
{
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint8_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 52) = 9;
  *(uint32_t *)a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ft_lzwstate_init  (binary VA: 0x1228600)
// Original: ft_lzwstate_init
// ----------------------------------------------------------------------------
int ft_lzwstate_init(int a1, int a2)
{
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  v2 = (uint16_t *)a1;
  v3 = 172;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v3) = 171;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
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
  *(uint32_t *)(a1 + 164) = a2;
  *(uint32_t *)(a1 + 168) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 96) = 64;
  *(uint32_t *)(a1 + 88) = a1 + 100;
  return ft_lzwstate_reset(a1);
}

// ----------------------------------------------------------------------------
// Function: FT_Stream_OpenLZW  (binary VA: 0x12286e0)
// Original: FT_Stream_OpenLZW
// ----------------------------------------------------------------------------
int FT_Stream_OpenLZW(int a1, uint32_t *a2)
{
  int v2;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[12];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v14 = a2[7];
  v2 = FT_Stream_Seek(a2, 0);
  if ( v2 != 0 )
    return v2;
  v2 = FT_Stream_Read(a2, v15, 2u);
  if ( v2 != 0 )
    return v2;
  LOWORD(v2) = 3;
  if ( v15[0] != 31 || v15[1] != 0x9D )
    return v2;
  v4 = (uint16_t *)a1;
  v16 = 0;
  v5 = 40;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v4 = (uint16_t *)(a1 + 1);
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
  if ( (v5 & 2) != 0 )
    *v6++ = 0;
  if ( (v5 & 1) != 0 )
    *(uint8_t *)v6 = 0;
  *(uint32_t *)(a1 + 28) = v14;
  v7 = (uint32_t *)(ft_mem_alloc(v14, 4292, &v16));
  v8 = v16;
  v9 = v7;
  if ( v16 != 0 )
    goto LABEL_15;
  *v7 = (uint32_t)(uintptr_t)(a2);
  v7[1] = a1;
  v10 = *(uint32_t *)(a1 + 28);
  v9[1070] = 0;
  v9[2] = v10;
  v9[1072] = (uint32_t)(uintptr_t)(v9 + 1070);
  v9[1071] = (uint32_t)(uintptr_t)(v9 + 1070);
  v13 = v9;
  v11 = FT_Stream_Seek(a2, 0);
  v12 = (int)(uintptr_t)(v13);
  if ( v11 != 0
    || (v11 = FT_Stream_Read(a2, v15, 2u), v12 = (int)(uintptr_t)(v13), v11 != 0)
    || (v11 = 3, v15[0] != 31)
    || v15[1] != 0x9D )
  {
    v16 = v11;
    ft_mem_free(v14, v12);
    return v16;
  }
  ft_lzwstate_init((int)(uintptr_t)(v13 + 3), (int)(uintptr_t)(a2));
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v13);
LABEL_15:
  *(uint32_t *)(a1 + 4) = 0x7FFFFFFF;
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(sub_1229460);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(sub_12289C0);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: ft_lzwstate_done  (binary VA: 0x12288f0)
// Original: ft_lzwstate_done
// ----------------------------------------------------------------------------
int ft_lzwstate_done(int a1)
{
  uint16_t *v1;
  int v2;
  int v3;
  unsigned int v4;
  int result;
  uint16_t *v6;

  v1 = (uint16_t *)a1;
  v2 = *(uint32_t *)(a1 + 168);
  ft_lzwstate_reset(a1);
  v3 = *(uint32_t *)(a1 + 88);
  if ( v3 != a1 + 100 )
  {
    ft_mem_free(v2, v3);
    *(uint32_t *)(a1 + 88) = 0;
  }
  ft_mem_free(v2, *(uint32_t *)(a1 + 76));
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  v4 = 172;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v4) = -85;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *v1 = 0;
  v4 -= 2;
  ++v1;
LABEL_5:
  result = 0;
  memset(v1, 0, 4 * (v4 >> 2));
  v6 = &v1[2 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
    *v6++ = 0;
  if ( (v4 & 1) != 0 )
    *(uint8_t *)v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ft_lzwstate_io  (binary VA: 0x1228a40)
// Original: ft_lzwstate_io
// ----------------------------------------------------------------------------
int ft_lzwstate_io(int a1, uint8_t *a2, unsigned int a3)
{
  unsigned int v4;
  int v5;
  unsigned int v6;
  char v7;
  int i;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  size_t v15;
  size_t v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  char v20; // di
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  uint8_t *v25;
  bool v26;
  int v27;
  size_t v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  char *v35;
  char *v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  char *v41;
  int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  char *v47;
  char *v48;
  unsigned int v49;
  int v50;
  size_t v51;
  size_t v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef char _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef char _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint8_t *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v53)) > _g4_s0 ? (0u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v54)) > _g4_s1 ? (0u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v55)) > _g4_s2 ? (0u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v56)) > _g4_s3 ? (8u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v57)) > _g4_s4 ? (12u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v58)) > _g4_s5 ? (16u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v59)) > _g4_s6 ? (20u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v60)) > _g4_s7 ? (20u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v61)) > _g4_s8 ? (20u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v62)) > _g4_s9 ? (24u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v63)) > _g4_s10 ? (28u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v64)) > _g4_s11 ? (32u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v65)) > _g4_s12 ? (32u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v66)) > _g4_s13 ? (32u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v67)) > _g4_s14 ? (36u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v68)) > _g4_s15 ? (36u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v69)) > _g4_s16 ? (36u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v70)) > _g4_s17 ? (36u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v71)) > _g4_s18 ? (36u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v72)) > _g4_s19 ? (40u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v73)) > _g4_s20 ? (40u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v74)) > _g4_s21 ? (40u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v75)) > _g4_s22 ? (40u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v76)) > _g4_s23 ? (40u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v77)) > _g4_s24 ? (40u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v78)) > _g4_s25 ? (40u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v79)) > _g4_s26 ? (44u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v80)) > _g4_s27 ? (44u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v81)) > _g4_s28 ? (44u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v82)) > _g4_s29 ? (44u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v83)) > _g4_s30 ? (44u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v84)) > _g4_s31 ? (44u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v85)) > _g4_s32 ? (48u + sizeof(_g4_t_v85)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 40u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 48u);

  v58 = 0;
  v62 = *(uint32_t *)(a1 + 68);
  v63 = *(uint32_t *)(a1 + 64);
  v56 = *(uint32_t *)(a1 + 72);
  if ( a3 == 0 )
    goto LABEL_6;
  switch ( *(uint32_t *)a1 )
  {
    case 0:
      if ( FT_Stream_Seek(*(uint32_t **)(a1 + 164), 2u) != 0 )
        goto LABEL_5;
      v58 = 0;
      if ( FT_Stream_TryRead(*(uint32_t **)(a1 + 164), v85, 1u) != 1 )
        goto LABEL_5;
      v17 = v85[0] & 0x80;
      v18 = v85[0] & 0x1F;
      *(uint32_t *)(a1 + 44) = v17;
      *(uint32_t *)(a1 + 40) = v18;
      *(uint32_t *)(a1 + 48) = (1 << v18) - 256;
      if ( v18 > 0x10 )
        goto LABEL_5;
      *(uint32_t *)(a1 + 52) = 9;
      v60 = v17 != 0;
      *(uint32_t *)(a1 + 56) = v60;
      v19 = 256;
      if ( v18 <= 9 )
        v19 = (1 << v18) - 255;
      v20 = *(uint8_t *)(a1 + 32);
      v73 = *(uint32_t *)(a1 + 24);
      *(uint32_t *)(a1 + 60) = v19;
      if ( v20 != 0 || v73 >= *(uint32_t *)(a1 + 28) )
      {
        v74 = 1;
        v84 = 9;
        if ( v19 > v60 )
        {
LABEL_110:
          if ( v20 != 0 )
          {
            *(uint32_t *)(a1 + 52) = 9;
            *(uint32_t *)(a1 + 60) = 256;
            *(uint8_t *)(a1 + 32) = 0;
            v74 = 1;
            v84 = 9;
          }
          if ( *(uint32_t *)(a1 + 4) != 0 )
            goto LABEL_113;
          v51 = FT_Stream_TryRead(*(uint32_t **)(a1 + 164), (void *)(a1 + 8), *(uint32_t *)(a1 + 52));
          v52 = *(uint32_t *)(a1 + 52);
          *(uint32_t *)(a1 + 36) += v51;
          *(uint32_t *)(a1 + 24) = 0;
          *(uint32_t *)(a1 + 4) = v51 < v52;
          *(uint32_t *)(a1 + 28) = 1 - v52 + 8 * v51;
          if ( v51 == 0 )
            goto LABEL_113;
          v68 = 8;
          LOBYTE(v65) = 0;
          v22 = 0;
          v21 = v84;
LABEL_43:
          *(uint32_t *)(a1 + 24) = v21;
          v23 = a1 + v22;
          v24 = (int)*(uint8_t *)(a1 + v22 + 8) >> v65;
          if ( v74 > 7 )
          {
            v24 |= *(uint8_t *)(a1 + v22 + 9) << v68;
            v74 -= 8;
            if ( v74 == 0 )
            {
LABEL_46:
              if ( v24 <= 0xFF )
              {
                if ( a2 != nullptr )
                  *a2 = v24;
                if ( a3 <= 1 )
                {
                  v63 = v24;
                  v62 = v24;
                  v56 = 0;
                  v58 = 1;
                  goto LABEL_6;
                }
                *(uint32_t *)a1 = 1;
                v6 = *(uint32_t *)(a1 + 56);
                v63 = v24;
                v62 = v24;
                v56 = 0;
                v58 = 1;
                goto LABEL_16;
              }
LABEL_113:
              v56 = 0;
              v58 = 0;
              goto LABEL_5;
            }
            v25 = (uint8_t *)(v23 + 10);
            v68 = 16 - v65;
          }
          else
          {
            v25 = (uint8_t *)(v23 + 9);
          }
          v24 |= (*v25 & ((1 << v74) - 1)) << v68;
          goto LABEL_46;
        }
      }
      else if ( v19 > v60 )
      {
        v21 = v73 + 9;
        v65 = v73 & 7;
        v68 = 8 - v65;
        v22 = v73 >> 3;
        v74 = 9 - (8 - v65);
        goto LABEL_43;
      }
      v50 = 768;
      *(uint32_t *)(a1 + 52) = 10;
      v74 = 2;
      if ( v18 <= 0xA )
        v50 = (1 << v18) - 255;
      v84 = 10;
      *(uint32_t *)(a1 + 60) = v50;
      goto LABEL_110;
    case 1:
      v6 = *(uint32_t *)(a1 + 56);
LABEL_16:
      v67 = *(uint32_t *)(a1 + 24);
      v64 = *(uint32_t *)(a1 + 52);
      v7 = *(uint8_t *)(a1 + 32);
      for ( i = v64; ; i = v64 )
      {
        if ( v7 == 0 && *(uint32_t *)(a1 + 28) > v67 )
        {
          if ( *(uint32_t *)(a1 + 60) > v6 )
          {
            v9 = v67;
            v72 = 8 - (v67 & 7);
            v59 = v67 & 7;
            v10 = v67 >> 3;
            v57 = 8 - (v67 & 7);
            goto LABEL_20;
          }
LABEL_52:
          i = v64 + 1;
          v26 = (unsigned int)(v64 + 1) < *(uint32_t *)(a1 + 40);
          *(uint32_t *)(a1 + 52) = v64 + 1;
          if ( v26 )
            v27 = (1 << i) - 256;
          else
            v27 = *(uint32_t *)(a1 + 48) + 1;
          *(uint32_t *)(a1 + 60) = v27;
          goto LABEL_30;
        }
        if ( *(uint32_t *)(a1 + 60) <= v6 )
          goto LABEL_52;
LABEL_30:
        if ( v7 != 0 )
        {
          *(uint32_t *)(a1 + 52) = 9;
          *(uint32_t *)(a1 + 60) = 256;
          *(uint8_t *)(a1 + 32) = 0;
          i = 9;
        }
        if ( *(uint32_t *)(a1 + 4) != 0 )
          goto LABEL_5;
        v15 = FT_Stream_TryRead(*(uint32_t **)(a1 + 164), (void *)(a1 + 8), *(uint32_t *)(a1 + 52));
        v16 = *(uint32_t *)(a1 + 52);
        *(uint32_t *)(a1 + 36) += v15;
        v64 = v16;
        *(uint32_t *)(a1 + 24) = 0;
        *(uint32_t *)(a1 + 4) = v15 < v16;
        *(uint32_t *)(a1 + 28) = 1 - v16 + 8 * v15;
        if ( v15 == 0 )
          goto LABEL_5;
        v57 = 8;
        v72 = 8;
        v59 = 0;
        v10 = 0;
        v9 = 0;
LABEL_20:
        v11 = i + v9;
        v12 = i - v57;
        *(uint32_t *)(a1 + 24) = v11;
        v67 = v11;
        v79 = a1 + v10;
        v13 = (int)*(uint8_t *)(a1 + v10 + 8) >> v59;
        if ( v12 > 7 )
        {
          v12 -= 8;
          v13 |= *(uint8_t *)(a1 + v10 + 9) << v72;
          v72 = 16 - v59;
          v80 = (uint8_t *)(v79 + 10);
        }
        else
        {
          v80 = (uint8_t *)(v79 + 9);
        }
        if ( v12 != 0 )
          v13 |= (*v80 & ((1 << v12) - 1)) << v72;
        if ( v13 < 0 )
          goto LABEL_5;
        v14 = v13;
        if ( v13 != 256 )
          break;
        if ( *(uint32_t *)(a1 + 44) == 0 )
        {
          v32 = 256;
          v37 = 0;
          goto LABEL_75;
        }
        *(uint32_t *)(a1 + 56) = 0;
        *(uint8_t *)(a1 + 32) = 1;
        v62 = 0;
        v63 = 0;
        v7 = 1;
        v6 = 0;
      }
      v32 = v13;
      if ( (unsigned int)v13 <= 0xFF )
      {
        v33 = *(uint32_t *)(a1 + 92);
        goto LABEL_66;
      }
      v37 = v13 - 256;
LABEL_75:
      v14 = v32;
      if ( *(uint32_t *)(a1 + 56) > v37 )
      {
LABEL_76:
        if ( *(uint32_t *)(a1 + 76) != 0 )
        {
          v82 = v32;
          v38 = v14;
          v39 = *(uint32_t *)(a1 + 92);
          while ( 1 )
          {
            v49 = *(uint32_t *)(a1 + 96);
            if ( v49 <= v39 )
            {
              v77 = *(uint32_t *)(a1 + 168);
              v40 = v49 + (v49 >> 1) + 4;
              v61 = *(uint32_t *)(a1 + 88);
              if ( v61 == a1 + 100 )
              {
                *(uint32_t *)(a1 + 88) = 0;
                v61 = 0;
                v49 = 0;
              }
              if ( v40 <= 0x10000 )
              {
                v70 = v40;
              }
              else
              {
                if ( v49 == 0x10000 )
                  goto LABEL_125;
                v70 = 0x10000;
                v40 = 0x10000;
              }
              v54 = v40;
              v41 = ft_mem_realloc(v77, 1, v49, v70, v61, v85);
              v42 = v85[0];
              *(uint32_t *)(a1 + 88) = (uint32_t)(uintptr_t)(v41);
              if ( v42 != 0 )
              {
LABEL_125:
                v56 = v82;
                goto LABEL_5;
              }
              *(uint32_t *)(a1 + 96) = v54;
              v39 = *(uint32_t *)(a1 + 92);
            }
            else
            {
              v41 = *(char **)(a1 + 88);
            }
            v41[v39] = *(uint8_t *)(*(uint32_t *)(a1 + 80) + v38 - 256);
            v43 = *(uint32_t *)(a1 + 76);
            *(uint32_t *)(a1 + 92) = ++v39;
            v38 = *(uint16_t *)(v43 + 2 * v38 - 512);
            if ( v38 <= 0xFF )
            {
              v33 = v39;
              v14 = v38;
              v32 = v82;
              goto LABEL_66;
            }
            if ( v43 == 0 )
            {
              v32 = v82;
              break;
            }
          }
        }
LABEL_106:
        v56 = v32;
        goto LABEL_5;
      }
      if ( *(uint32_t *)(a1 + 56) < v37 )
        goto LABEL_106;
      v44 = *(uint32_t *)(a1 + 92);
      v45 = *(uint32_t *)(a1 + 96);
      if ( v44 < v45 )
      {
        v48 = *(char **)(a1 + 88);
      }
      else
      {
        v71 = *(uint32_t *)(a1 + 168);
        v46 = v45 + (v45 >> 1) + 4;
        v83 = *(uint32_t *)(a1 + 88);
        if ( v83 == a1 + 100 )
        {
          *(uint32_t *)(a1 + 88) = 0;
          v83 = 0;
          v45 = 0;
        }
        if ( v46 <= 0x10000 )
        {
          v78 = v46;
        }
        else
        {
          if ( v45 == 0x10000 )
            goto LABEL_106;
          v78 = 0x10000;
          v46 = 0x10000;
        }
        v55 = v46;
        v47 = ft_mem_realloc(v71, 1, v45, v78, v83, v85);
        *(uint32_t *)(a1 + 88) = (uint32_t)(uintptr_t)(v47);
        v48 = v47;
        if ( v85[0] != 0 )
          goto LABEL_106;
        *(uint32_t *)(a1 + 96) = v55;
        v44 = *(uint32_t *)(a1 + 92);
      }
      v48[v44] = v62;
      v33 = v44 + 1;
      *(uint32_t *)(a1 + 92) = v33;
      v14 = v63;
      if ( v63 > 0xFF )
        goto LABEL_76;
LABEL_66:
      v34 = *(uint32_t *)(a1 + 96);
      if ( v34 > v33 )
      {
        v36 = *(char **)(a1 + 88);
LABEL_90:
        v36[v33] = v14;
        v4 = v33 + 1;
        *(uint32_t *)(a1 + 92) = v4;
        *(uint32_t *)a1 = 2;
        v56 = v32;
        v62 = v14;
        goto LABEL_9;
      }
      v69 = *(uint32_t *)(a1 + 168);
      v76 = v34 + (v34 >> 1) + 4;
      v81 = *(uint32_t *)(a1 + 88);
      if ( v81 == a1 + 100 )
      {
        *(uint32_t *)(a1 + 88) = 0;
        v81 = 0;
        v34 = 0;
      }
      if ( v76 > 0x10000 )
      {
        if ( v34 != 0x10000 )
        {
          v66 = 0x10000;
          v76 = 0x10000;
          goto LABEL_72;
        }
        goto LABEL_127;
      }
      v66 = v76;
LABEL_72:
      v53 = v14;
      v35 = ft_mem_realloc(v69, 1, v34, v66, v81, v85);
      *(uint32_t *)(a1 + 88) = (uint32_t)(uintptr_t)(v35);
      v36 = v35;
      v14 = v53;
      if ( v85[0] == 0 )
      {
        *(uint32_t *)(a1 + 96) = v76;
        v33 = *(uint32_t *)(a1 + 92);
        goto LABEL_90;
      }
LABEL_127:
      v56 = v32;
      v62 = v14;
LABEL_5:
      *(uint32_t *)a1 = 3;
LABEL_6:
      *(uint32_t *)(a1 + 64) = v63;
      *(uint32_t *)(a1 + 68) = v62;
      *(uint32_t *)(a1 + 72) = v56;
      return v58;
    case 2:
      v4 = *(uint32_t *)(a1 + 92);
LABEL_9:
      v5 = v58;
      if ( a2 != nullptr )
      {
        while ( v4 != 0 )
        {
          *(uint32_t *)(a1 + 92) = v4 - 1;
          a2[v5++] = *(uint8_t *)(*(uint32_t *)(a1 + 88) + v4 - 1);
          if ( v5 == a3 )
          {
LABEL_14:
            v58 = v5;
            goto LABEL_6;
          }
          v4 = *(uint32_t *)(a1 + 92);
        }
      }
      else
      {
        while ( v4 != 0 )
        {
          ++v5;
          *(uint32_t *)(a1 + 92) = --v4;
          if ( v5 == a3 )
            goto LABEL_14;
        }
      }
      v6 = *(uint32_t *)(a1 + 56);
      v58 = v5;
      if ( v6 < *(uint32_t *)(a1 + 48) )
      {
        v28 = *(uint32_t *)(a1 + 84);
        if ( v6 >= v28 )
        {
          v29 = 512;
          v75 = 512;
          if ( v28 != 0 )
          {
            v29 = v28 + (v28 >> 2);
            v75 = v29;
          }
          v30 = ft_mem_realloc(*(uint32_t *)(a1 + 168), 3, v28, v29, *(uint32_t *)(a1 + 76), v85);
          v31 = v85[0];
          *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(v30);
          if ( v31 != 0 )
            goto LABEL_5;
          *(uint32_t *)(a1 + 80) = (uint32_t)(uintptr_t)(&v30[2 * v75]);
          memmove(&v30[2 * v75], &v30[2 * v28], v28);
          v6 = *(uint32_t *)(a1 + 56);
          *(uint32_t *)(a1 + 84) = v75;
        }
        *(uint16_t *)(*(uint32_t *)(a1 + 76) + 2 * v6) = v63;
        *(uint8_t *)(*(uint32_t *)(a1 + 80) + *(uint32_t *)(a1 + 56)) = v62;
        v6 = *(uint32_t *)(a1 + 56) + 1;
        *(uint32_t *)(a1 + 56) = v6;
      }
      *(uint32_t *)a1 = 1;
      v63 = v56;
      goto LABEL_16;
    default:
      goto LABEL_6;
  }
}


