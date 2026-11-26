#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Codec.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncodeBase64  (binary VA: 0x13d52d0)
// Original: glwebtools::Codec::EncodeBase64
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncodeBase64(int a1, unsigned int a2, uint32_t *a3, unsigned int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  char v14;
  typedef uint8_t *_g4_t_v15;
  typedef uint32_t _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v16)) > _g4_s1 ? (28u + sizeof(_g4_t_v16)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  if ( a2 != 0 && a1 != 0 )
  {
    v15 = (uint8_t *)(a2 - a2 % 3);
    if ( a2 == a2 % 3 )
      goto LABEL_12;
    v4 = 0;
    do
    {
      v5 = *(uint8_t *)(a1 + v4);
      LOBYTE(v16[0]) = byte_1BDC7B4[v5 >> 2];
      v6 = *(uint8_t *)(a1 + v4 + 1);
      BYTE1(v16[0]) = *((uint8_t *)&dword_20B9FF4[4 * (v5 & 3) - 1275408] + (v6 >> 4));
      BYTE2(v16[0]) = *((uint8_t *)&dword_20B9FF4[(v6 & 0xF) - 1275408] + (*(uint8_t *)(a1 + v4 + 2) >> 6));
      v7 = *(uint8_t *)(a1 + v4 + 2) & 0x3F;
      v4 += 3;
      HIBYTE(v16[0]) = byte_1BDC7B4[v7];
      g4_std::string::append((int)(uintptr_t)(a3), v16, 4u);
    }
    while ( (unsigned int)(uintptr_t)(v15) > v4 );
    if ( v15 != (uint8_t *)a2 )
    {
LABEL_12:
      v16[0] = 1027423549;
      if ( a2 % 3 == 1 )
      {
        v13 = v15[a1];
        v14 = byte_1BDC7B4[16 * (v13 & 3)];
        LOBYTE(v16[0]) = byte_1BDC7B4[v13 >> 2];
        BYTE1(v16[0]) = v14;
      }
      else
      {
        v11 = v15[a1];
        LOBYTE(v16[0]) = byte_1BDC7B4[v11 >> 2];
        v12 = v15[a1 + 1];
        BYTE2(v16[0]) = byte_1BDC7B4[4 * (v12 & 0xF)];
        BYTE1(v16[0]) = byte_1BDC7B4[16 * (v11 & 3) + (v12 >> 4)];
      }
      g4_std::string::append((int)(uintptr_t)(a3), v16, 4u);
      if ( a4 == 0 )
        return 1;
    }
    else if ( a4 == 0 )
    {
      return 1;
    }
    v8 = (__PAIR64__(*(uint32_t *)(*a3 - 12) / a4, *(uint32_t *)(*a3 - 12) % a4) - 1) >> 32;
    if ( v8 != 0 )
    {
      v9 = v8 * a4;
      do
      {
        sub_19394C0((int)(uintptr_t)(a3), v9, "\r\n", 2u);
        v9 -= a4;
        --v8;
      }
      while ( v8 != 0 );
    }
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncodeBase64_ea13d5520  (binary VA: 0x13d5520)
// Original: glwebtools::Codec::EncodeBase64
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncodeBase64_ea13d5520(int a1, unsigned int a2, uint32_t *a3, unsigned int a4)
{
  return glwebtools::Codec::EncodeBase64(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::IsInBase64Alphabet  (binary VA: 0x13d5560)
// Original: glwebtools::Codec::IsInBase64Alphabet
// ----------------------------------------------------------------------------
bool glwebtools::Codec::IsInBase64Alphabet(glwebtools::Codec::Self *self)
{
  bool result;

  if ( (uint8_t)(uintptr_t)self == 47 || (uint8_t)(uintptr_t)self == 43 )
    return true;
  result = true;
  if ( (uint8_t)((uint8_t)(uintptr_t)self - 48) > 9u && (uint8_t)((uint8_t)(uintptr_t)self - 65) > 0x19u )
    return (uint8_t)((uint8_t)(uintptr_t)self - 97) <= 0x19u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecodeBase64  (binary VA: 0x13d55a0)
// Original: glwebtools::Codec::DecodeBase64
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecodeBase64(glwebtools::Codec::Self *self, const char *a2, uint8_t *a3, void *a4)
{
  const char *v4;
  glwebtools::Codec::Self *v5;
  unsigned int v6;
  uint8_t *v7;
  int v8;
  char v9;
  int v10;
  char v11; // bp
  char v12;
  const char *v14;
  char v15; // bp
  glwebtools::Codec::Self *v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  char v21;
  unsigned int v22;
  unsigned int v23;
  char *v24;
  char v25;
  char *v26;
  char v27;
  unsigned int v28;
  char v29; // bp
  char v30;
  unsigned int v31;
  char v32;
  const char *v33;
  char v34;
  char *v35;
  char v36;
  uint8_t *v37;
  char v38;
  int v39;
  const char *v40;
  char v41;
  char v42;
  unsigned int v43;
  char v44;
  char v45;
  char v46;
  unsigned int v47;
  unsigned int v48;

  v4 = a2;
  v5 = self;
  v39 = 0;
  if ( a2 == nullptr || self == nullptr )
    return v39;
  if ( (uint8_t)(uintptr_t)a4 != 0 )
  {
    if ( a3 == nullptr )
      return v39;
    if ( a2[(uint32_t)(uintptr_t)(self) - 1] == 61 )
    {
      do
        --v4;
      while ( v4[(uint32_t)(uintptr_t)(self) - 1] == 61 );
      v39 = 0;
      if ( v4 == nullptr )
        return v39;
    }
    v33 = v4;
    v14 = nullptr;
    v15 = 0;
    do
    {
      v16 = (glwebtools::Codec::Self *)(v14++)[(uint32_t)(uintptr_t)(self)];
      v15 += !glwebtools::Codec::IsInBase64Alphabet(v16);
    }
    while ( v14 != v33 );
    v17 = ((uint8_t)(uintptr_t)v14 - v15) & 3;
    v18 = (unsigned int)(uintptr_t)(&v14[-v17]);
    v47 = v17;
    if ( v14 != (const char *)v17 )
    {
      v37 = a3;
      v19 = 0;
      v48 = v18 - 3;
      v39 = 0;
      if ( v18 == 0 )
        goto LABEL_25;
      while ( 1 )
      {
        do
        {
          if ( glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19)) )
            break;
          ++v19;
        }
        while ( v18 > v19 );
        if ( v19 > v48 )
          goto LABEL_35;
LABEL_25:
        v44 = sub_13D52A0(*((char *)self + v19));
        if ( v18 <= v19 )
          break;
        while ( !glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19 + 1)) )
        {
          if ( v18 <= v19 + 1 )
          {
            ++v19;
            break;
          }
          ++v19;
        }
        if ( v19 > v48 )
          goto LABEL_35;
        v34 = sub_13D52A0(*((char *)self + v19 + 1));
        if ( v18 <= v19 )
          goto LABEL_74;
        do
        {
          if ( glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19 + 2)) )
            break;
          ++v19;
        }
        while ( v18 > v19 );
        if ( v19 > v48 )
          goto LABEL_35;
        v41 = sub_13D52A0(*((char *)self + v19 + 2));
        if ( v18 > v19 )
        {
          do
          {
            if ( glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19 + 3)) )
              break;
            ++v19;
          }
          while ( v18 > v19 );
          if ( v19 > v48 )
            goto LABEL_35;
        }
LABEL_34:
        v20 = *((char *)self + v19 + 3);
        v19 += 4;
        v21 = sub_13D52A0(v20);
        v39 += 3;
        *v37 = ((v34 & 0x3F) >> 4) + 4 * v44;
        v37[1] = 16 * v34 + ((v41 & 0x3C) >> 2);
        v37[2] = (v41 << 6) + (v21 & 0x3F);
        v37 += 3;
        if ( v18 <= v19 )
          goto LABEL_35;
      }
      v34 = sub_13D52A0(*((char *)self + v19 + 1));
LABEL_74:
      v41 = sub_13D52A0(*((char *)self + v19 + 2));
      goto LABEL_34;
    }
    v39 = 0;
    v19 = 0;
LABEL_35:
    if ( v47 < 2 )
      return v39;
    if ( v47 != 2 )
    {
      if ( v19 >= v18 )
      {
LABEL_65:
        v45 = sub_13D52A0(*((char *)self + v19));
        v28 = v19;
      }
      else
      {
        while ( !glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19)) )
        {
          if ( ++v19 >= v18 )
            goto LABEL_65;
        }
        v45 = sub_13D52A0(*((char *)self + v19));
        if ( v18 > v19 )
        {
          while ( 1 )
          {
            v22 = v19++;
            v35 = (char *)self + v19;
            if ( glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v22 + 1)) )
              break;
            if ( v19 >= v18 )
            {
              v28 = v19;
              v5 = self;
              goto LABEL_63;
            }
          }
          v23 = v22;
          v42 = sub_13D52A0(*v35);
          if ( v18 <= v22 )
          {
LABEL_60:
            v24 = (char *)self + v23 + 2;
          }
          else
          {
            while ( !glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v23 + 2)) )
            {
              if ( ++v23 >= v18 )
                goto LABEL_60;
            }
            v24 = (char *)self + v23 + 2;
          }
          goto LABEL_44;
        }
        v28 = v19;
      }
LABEL_63:
      v31 = v28;
      v42 = sub_13D52A0(*((char *)v5 + v28 + 1));
      v24 = (char *)v5 + v31 + 2;
LABEL_44:
      v25 = sub_13D52A0(*v24);
      a3[v39] = ((v42 & 0x3F) >> 4) + 4 * v45;
      a3[v39 + 1] = 16 * v42 + ((v25 & 0x3C) >> 2);
      v39 += 2;
      return v39;
    }
    if ( v19 >= v18 )
    {
LABEL_69:
      v38 = sub_13D52A0(*((char *)self + v19));
    }
    else
    {
      while ( !glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19)) )
      {
        if ( ++v19 >= v18 )
          goto LABEL_69;
      }
      v38 = sub_13D52A0(*((char *)self + v19));
      if ( v18 > v19 )
      {
        while ( 1 )
        {
          ++v19;
          if ( !glwebtools::Codec::IsInBase64Alphabet((glwebtools::Codec::Self *)*((char *)self + v19)) )
            break;
          if ( v19 >= v18 )
            goto LABEL_67;
        }
        v26 = (char *)self + v19;
        goto LABEL_50;
      }
    }
LABEL_67:
    v26 = (char *)self + v19 + 1;
LABEL_50:
    v27 = ((sub_13D52A0(*v26) & 0x3F) >> 4) + 4 * v38;
    goto LABEL_71;
  }
  if ( a3 != nullptr )
  {
    while ( v4[(uint32_t)(uintptr_t)(self) - 1] == 61 )
      --v4;
    v39 = 0;
    v43 = (uint8_t)(uintptr_t)v4 & 3;
    v6 = 0;
    v40 = &v4[-v43];
    if ( v4 != (const char *)v43 )
    {
      v7 = a3;
      do
      {
        v36 = sub_13D52A0(*((char *)self + v6));
        v46 = sub_13D52A0(*((char *)self + v6 + 1));
        v32 = sub_13D52A0(*((char *)self + v6 + 2));
        v8 = *((char *)self + v6 + 3);
        v6 += 4;
        v9 = sub_13D52A0(v8);
        v39 += 3;
        *v7 = ((v46 & 0x3F) >> 4) + 4 * v36;
        v7[1] = ((v32 & 0x3C) >> 2) + 16 * v46;
        v7[2] = (v32 << 6) + (v9 & 0x3F);
        v7 += 3;
      }
      while ( (unsigned int)(uintptr_t)(v40) > v6 );
    }
    if ( v43 >= 2 )
    {
      v10 = *((char *)self + v6);
      if ( v43 != 2 )
      {
        v30 = sub_13D52A0(v10);
        v11 = sub_13D52A0(*((char *)self + v6 + 1));
        v12 = sub_13D52A0(*((char *)self + v6 + 2));
        a3[v39] = ((v11 & 0x3F) >> 4) + 4 * v30;
        a3[v39 + 1] = 16 * v11 + ((v12 & 0x3C) >> 2);
        v39 += 2;
        return v39;
      }
      v29 = sub_13D52A0(v10);
      v27 = ((sub_13D52A0(*((char *)self + v6 + 1)) & 0x3F) >> 4) + 4 * v29;
LABEL_71:
      a3[v39++] = v27;
    }
  }
  return v39;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecodeBase64  (binary VA: 0x13d5bd0)
// Original: glwebtools::Codec::DecodeBase64
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecodeBase64(glwebtools::Codec::Self **a1, uint8_t *a2, uint8_t a3)
{
  return glwebtools::Codec::DecodeBase64(*a1, *((const char **)*a1 - 3), a2, (void *)a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GetDecodedBase64DataSize  (binary VA: 0x13d5c10)
// Original: glwebtools::Codec::GetDecodedBase64DataSize
// ----------------------------------------------------------------------------
int glwebtools::Codec::GetDecodedBase64DataSize(int *a1, char a2)
{
  int v2;
  int result;
  unsigned int v4;
  unsigned int v5;
  glwebtools::Codec::Self *v6;
  unsigned int v7;
  int v8;
  int v9;

  v2 = *a1;
  result = 0;
  v4 = *(uint32_t *)(*a1 - 12);
  if ( v4 != 0 )
  {
    do
    {
      if ( *(uint8_t *)(v2 + v4 - 1) != 61 )
        break;
      --v4;
    }
    while ( v4 != 0 );
    if ( a2 != 0 )
    {
      v5 = v4 - 1;
      if ( v4 != 0 )
      {
        do
        {
          v6 = (glwebtools::Codec::Self *)*(char *)(v2 + v5--);
          v4 -= !glwebtools::Codec::IsInBase64Alphabet(v6);
        }
        while ( v4 > v5 );
      }
    }
    v7 = v4;
    v8 = v4 & 3;
    v9 = 3 * (v7 >> 2);
    result = v9 + 1;
    if ( v8 != 2 )
    {
      result = v9 + 2;
      if ( v8 != 3 )
        return v9;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncodeBlob  (binary VA: 0x13d5ca0)
// Original: glwebtools::Codec::EncodeBlob
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncodeBlob(int a1, unsigned int a2, int a3)
{
  unsigned int v3;
  int v4;
  uint8_t v5;
  int result;
  int v7;
  uint8_t v8;
  int v9;
  int v10;
  typedef unsigned int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (29u + sizeof(_g4_t_v13)) > _g4_s2 ? (29u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v14)) > _g4_s3 ? (30u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v15)) > _g4_s4 ? (31u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 29u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 30u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);

  if ( a2 == 0 || a1 == 0 )
    return 0;
  v11 = a2 - a2 % 3;
  if ( a2 == a2 % 3 )
    goto LABEL_7;
  v3 = 0;
  do
  {
    v4 = (int)*(uint8_t *)(a1 + v3) >> 6;
    v12 = byte_1BDC7F8[*(uint8_t *)(a1 + v3) & 0x3F];
    v5 = *(uint8_t *)(a1 + v3 + 1) >> 4;
    v13 = *((uint8_t *)&dword_20B9FF4[(*(uint8_t *)(a1 + v3 + 1) & 0xF) - 1275391] + v4);
    LOBYTE(v4) = *(uint8_t *)(a1 + v3 + 2);
    v3 += 3;
    v14 = *((uint8_t *)&dword_20B9FF4[4 * (v4 & 3) - 1275391] + v5);
    v15 = byte_1BDC7F8[(uint8_t)v4 >> 2];
    g4_std::string::append(a3, &v12, 4u);
  }
  while ( v11 > v3 );
  result = 1;
  if ( v11 != a2 )
  {
LABEL_7:
    if ( a2 % 3 == 1 )
    {
      v9 = *(uint8_t *)(a1 + v11);
      v10 = v9 & 0x3F;
      LOBYTE(v9) = byte_1BDC7F8[v9 >> 6];
      v12 = byte_1BDC7F8[v10];
      v13 = v9;
      g4_std::string::append(a3, &v12, 2u);
      return 1;
    }
    else
    {
      v7 = (int)*(uint8_t *)(a1 + v11) >> 6;
      v12 = byte_1BDC7F8[*(uint8_t *)(a1 + v11) & 0x3F];
      v8 = *(uint8_t *)(a1 + v11 + 1);
      LOBYTE(v7) = byte_1BDC7F8[4 * (v8 & 0xF) + v7];
      v14 = byte_1BDC7F8[v8 >> 4];
      v13 = v7;
      g4_std::string::append(a3, &v12, 3u);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GetDecodedBlobDataSize  (binary VA: 0x13d5e90)
// Original: glwebtools::Codec::GetDecodedBlobDataSize
// ----------------------------------------------------------------------------
int glwebtools::Codec::GetDecodedBlobDataSize(int *a1)
{
  return glwebtools::Codec::GetDecodedBase64DataSize(a1, 0);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::Dec64_GetKeyFromChar  (binary VA: 0x13d5ec0)
// Original: glwebtools::Codec::Dec64_GetKeyFromChar
// ----------------------------------------------------------------------------
int glwebtools::Codec::Dec64_GetKeyFromChar(glwebtools::Codec::Self *self)
{
  return sub_13D52A0((char)(uintptr_t)self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::SSEncDec_GetKeyFromChar  (binary VA: 0x13d5ed0)
// Original: glwebtools::Codec::SSEncDec_GetKeyFromChar
// ----------------------------------------------------------------------------
int glwebtools::Codec::SSEncDec_GetKeyFromChar(glwebtools::Codec::Self *self)
{
  int result;

  result = 63;
  if ( (uint8_t)(uintptr_t)self != 45 )
  {
    result = 62;
    if ( (uint8_t)(uintptr_t)self != 95 )
    {
      if ( (char)(uintptr_t)self <= 57 )
      {
        return (uint8_t)(uintptr_t)self + 4;
      }
      else
      {
        result = (uint8_t)(uintptr_t)self - 39;
        if ( (char)(uintptr_t)self > 90 )
          return (uint8_t)(uintptr_t)self - 97;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecodeBlob  (binary VA: 0x13d5f10)
// Original: glwebtools::Codec::DecodeBlob
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecodeBlob(char **a1, uint8_t *a2)
{
  int v2;
  char *v3;
  uint8_t *v4;
  unsigned int v5;
  glwebtools::Codec::Self *v6;
  char v7;
  char v8; // si
  char v9; // di
  char v10;
  char v12;
  int v13;
  char v14;
  char KeyFromChar;
  unsigned int v16;
  int v17;
  char *v18;

  v13 = 0;
  v18 = *a1;
  v2 = *((uint32_t *)*a1 - 3);
  v17 = v2;
  if ( v2 != 0 && a2 != nullptr )
  {
    v16 = v2 & 0xFFFFFFFC;
    if ( (v2 & 0xFFFFFFFC) != 0 )
    {
      v3 = *a1;
      v4 = a2;
      v5 = 0;
      do
      {
        v5 += 4;
        KeyFromChar = glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)*v3);
        v12 = glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)v3[1]);
        v14 = glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)v3[2]);
        v6 = (glwebtools::Codec::Self *)v3[3];
        v3 += 4;
        v7 = glwebtools::Codec::SSEncDec_GetKeyFromChar(v6);
        v13 += 3;
        *v4 = KeyFromChar + (v12 << 6);
        v4[1] = 16 * v14 + (v12 >> 2);
        v4[2] = (v14 >> 4) + 4 * v7;
        v4 += 3;
      }
      while ( v16 > v5 );
      if ( v16 == v17 )
        return v13;
    }
    else
    {
      v13 = 0;
    }
    if ( v17 - v16 != 1 )
    {
      v8 = glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)v18[v16]);
      if ( v17 - v16 == 2 )
      {
        a2[v13++] = v8
                  + ((uint8_t)glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)v18[v16 + 1]) << 6);
      }
      else
      {
        v9 = glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)v18[v16 + 1]);
        v10 = glwebtools::Codec::SSEncDec_GetKeyFromChar((glwebtools::Codec::Self *)v18[v16 + 2]);
        a2[v13] = v8 + (v9 << 6);
        a2[v13 + 1] = (v9 >> 2) + 16 * v10;
        v13 += 2;
      }
    }
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncUrl_GetKeysFromChar  (binary VA: 0x13d60e0)
// Original: glwebtools::Codec::EncUrl_GetKeysFromChar
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncUrl_GetKeysFromChar(glwebtools::Codec::Self *self, char *a2, char *a3)
{
  char v3; // di
  int result;

  *a2 = ((uint8_t)(uintptr_t)self & 0xF0) >> 4;
  *a3 = (uint8_t)(uintptr_t)self & 0xF;
  v3 = *a2;
  if ( (uint8_t)*a2 <= 9u )
  {
    *a2 = v3 + 48;
    v3 += 48;
  }
  if ( (uint8_t)(v3 - 10) <= 5u )
    *a2 = v3 + 55;
  result = (uint8_t)*a3;
  if ( (uint8_t)result <= 9u )
  {
    result += 48;
    *a3 = result;
  }
  if ( (uint8_t)(result - 10) <= 5u )
  {
    result += 55;
    *a3 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncodeUrlRFC1738  (binary VA: 0x13d6140)
// Original: glwebtools::Codec::EncodeUrlRFC1738
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncodeUrlRFC1738(char **a1, int a2)
{
  char *v2;
  int v3;
  char v4;
  typedef int _g4_t_v6;
  typedef char _g4_t_v7;
  typedef char _g4_t_v8[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v7)) > _g4_s1 ? (30u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v8)) > _g4_s2 ? (31u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 30u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  v2 = *a1;
  if ( *((uint32_t *)*a1 - 3) != 0 )
  {
    v6 = *((uint32_t *)*a1 - 3);
    v3 = 0;
    do
    {
      v4 = *v2;
      if ( (uint8_t)(*v2 - 65) <= 0x19u
        || (uint8_t)(v4 - 48) <= 9u
        || (uint8_t)(v4 - 97) <= 0x19u
        || v4 == 45
        || v4 == 36
        || v4 == 95
        || v4 == 46
        || v4 == 43
        || v4 == 42
        || v4 == 33
        || v4 == 39
        || v4 == 40
        || v4 == 41
        || v4 == 44 )
      {
        g4_std::string::append(a2, v2, 1u);
      }
      else
      {
        g4_std::string::append(a2, "%", 1u);
        glwebtools::Codec::EncUrl_GetKeysFromChar((glwebtools::Codec::Self *)*v2, &v7, v8);
        g4_std::string::append(a2, &v7, 1u);
        g4_std::string::append(a2, v8, 1u);
      }
      ++v3;
      ++v2;
    }
    while ( v3 != v6 );
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncodeUrlRFC3986  (binary VA: 0x13d6270)
// Original: glwebtools::Codec::EncodeUrlRFC3986
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncodeUrlRFC3986(char **a1, int a2)
{
  char *v2;
  int i;
  char v4;
  typedef int _g4_t_v6;
  typedef char _g4_t_v7;
  typedef char _g4_t_v8[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v7)) > _g4_s1 ? (30u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v8)) > _g4_s2 ? (31u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 30u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  v2 = *a1;
  v6 = *((uint32_t *)*a1 - 3);
  if ( v6 != 0 )
  {
    for ( i = 0; i != v6; ++i )
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( (uint8_t)(*v2 - 65) <= 0x19u
          || (uint8_t)(v4 - 48) <= 9u
          || (uint8_t)(v4 - 97) <= 0x19u
          || (uint8_t)(v4 - 45) <= 1u
          || v4 == 95
          || v4 == 126 )
        {
          break;
        }
        g4_std::string::append(a2, "%", 1u);
        glwebtools::Codec::EncUrl_GetKeysFromChar((glwebtools::Codec::Self *)*v2, &v7, v8);
        g4_std::string::append(a2, &v7, 1u);
        ++i;
        ++v2;
        g4_std::string::append(a2, v8, 1u);
        if ( i == v6 )
          return 1;
      }
      g4_std::string::append(a2, v2++, 1u);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncUrl_GetCharFromKeys  (binary VA: 0x13d63a0)
// Original: glwebtools::Codec::EncUrl_GetCharFromKeys
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncUrl_GetCharFromKeys(glwebtools::Codec::Self *self)
{
  int v1;
  int v2;
  int v3;
  char v4;
  uint8_t v5;
  uint8_t v6;

  v1 = *(uint8_t *)self;
  v2 = v1 - 48;
  v3 = v1 - 55;
  if ( (uint8_t)v2 <= 9u )
    v3 = v2;
  v4 = *((uint8_t *)self + 1);
  v5 = v4 - 48;
  v6 = v4 - 55;
  if ( v5 <= 9u )
    v6 = v5;
  return 16 * v3 + (v6 & 0xF);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecodeUrl  (binary VA: 0x13d63d0)
// Original: glwebtools::Codec::DecodeUrl
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecodeUrl(int *a1, int a2)
{
  int v2;
  unsigned int v3;
  unsigned int i;
  glwebtools::Codec::Self *v5;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v8)) > _g4_s1 ? (31u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);

  v2 = *a1;
  v3 = *(uint32_t *)(*a1 - 12);
  if ( v3 != 0 )
  {
    for ( i = 0; i < v3; i += 3 )
    {
      while ( *(uint8_t *)(v2 + i) != 37 )
      {
        v7 = (char *)(v2 + i++);
        g4_std::string::append(a2, v7, 1u);
        if ( i >= v3 )
          return 1;
      }
      v5 = (glwebtools::Codec::Self *)(v2 + i + 1);
      v8[0] = glwebtools::Codec::EncUrl_GetCharFromKeys(v5);
      g4_std::string::append(a2, v8, 1u);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GenerateMD5  (binary VA: 0x13d6470)
// Original: glwebtools::Codec::GenerateMD5
// ----------------------------------------------------------------------------
int glwebtools::Codec::GenerateMD5(glwebtools::Codec::Self *self, size_t a2, unsigned int a3)
{
  int result;
  int v4;
  glwebtools::Codec::Self *v5;
  typedef char *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[116];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v8)) > _g4_s2 ? (40u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v9)) > _g4_s3 ? (56u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);

  result = 0;
  if ( a2 != 0 && self != nullptr && a3 != 0 )
  {
    glwebtools::md5_init(v9);
    glwebtools::md5_append((int)(uintptr_t)(v9), self, a2);
    v4 = 0;
    glwebtools::md5_finish(v9, v8);
    do
    {
      v7 = (char *)(a3 + 2 * v4 + 1);
      v6 = (char *)(a3 + 2 * v4);
      v5 = (glwebtools::Codec::Self *)(char)v8[v4++];
      glwebtools::Codec::EncUrl_GetKeysFromChar(v5, v6, v7);
    }
    while ( v4 != 16 );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GenerateSHA256  (binary VA: 0x13d6520)
// Original: glwebtools::Codec::GenerateSHA256
// ----------------------------------------------------------------------------
int glwebtools::Codec::GenerateSHA256(glwebtools::Codec::Self *self, size_t a2, unsigned int a3)
{
  int result;
  char *v4;
  typedef glwebtools::SHA256_CTX::Self *_g4_t_v5;
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v7)) > _g4_s2 ? (44u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v8)) > _g4_s3 ? (48u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);

  result = 0;
  if ( a2 != 0 && self != nullptr && a3 != 0 )
  {
    glwebtools::SHA256_CTX::SHA256_CTX((glwebtools::SHA256_CTX::Self *)&v7);
    glwebtools::SHA256_Init((glwebtools::Self *)&v7);
    glwebtools::SHA256_Update((int)(uintptr_t)(&v7), self, a2);
    glwebtools::SHA256_Final((glwebtools::Self *)v8, (uint8_t *)&v7, v5);
    v4 = nullptr;
    do
    {
      v6 = v4;
      glwebtools::Codec::EncUrl_GetKeysFromChar(
        (glwebtools::Codec::Self *)v8[(uint32_t)(uintptr_t)(v4)],
        (char *)(a3 + 2 * (uint32_t)(uintptr_t)(v4)),
        (char *)(a3 + 2 * (uint32_t)(uintptr_t)(v4) + 1));
      v4 = v6 + 1;
    }
    while ( v6 != (char *)((uint8_t *)&dword_1C + 3) );
    glwebtools::SHA256_CTX::Destroy((glwebtools::SHA256_CTX::Self *)&v7);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GenerateBase64CustomKey  (binary VA: 0x13d65e0)
// Original: glwebtools::Codec::GenerateBase64CustomKey
// ----------------------------------------------------------------------------
int glwebtools::Codec::GenerateBase64CustomKey(glwebtools::Codec::Self *self)
{
  int v1;
  unsigned int v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int result;
  void *v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v8)) > _g4_s0 ? (10u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 10u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v1 = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), glwebtools::rfc3986unreservedchar, (int)(uintptr_t)(&v8));
  do
  {
    v2 = lrand48();
    v3 = v9[0];
    v4 = v2 % *(uint32_t *)(v9[0] - 12);
    if ( *(int *)(v9[0] - 4) >= 0 )
    {
      sub_19397C0(v9);
      v3 = v9[0];
    }
    *((uint8_t *)self + v1) = *(uint8_t *)(v3 + v4);
    v5 = *(uint32_t *)(v3 - 12);
    if ( v4 > v5 )
      sub_1900210("basic_string::erase");
    ++v1;
    g4_std::string::clear(v9, v4, v5 != v4, 0);
  }
  while ( v1 != 64 );
  result = v9[0];
  v7 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::Random  (binary VA: 0x13d66c0)
// Original: glwebtools::Codec::Random
// ----------------------------------------------------------------------------
int glwebtools::Codec::Random(glwebtools::Codec::Self *self, unsigned int *a2)
{
  int v2;
  unsigned int v3;

  v2 = (*(uint32_t *)self >> 1) | ((uint8_t)byte_1D0F8A0[*(uint32_t *)self & 0xF5] << 31);
  v3 = (2 * *a2) | (uint8_t)byte_1D0F8A0[(*a2 >> 25) & 0x63];
  *(uint32_t *)self = v2;
  *a2 = v3;
  return v3 ^ v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GenerateBase64CustomKey  (binary VA: 0x13d6740)
// Original: glwebtools::Codec::GenerateBase64CustomKey
// ----------------------------------------------------------------------------
int glwebtools::Codec::GenerateBase64CustomKey(glwebtools::Codec::Self *self, char *a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int result;
  void *v9;
  typedef unsigned int _g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v10)) > _g4_s0 ? (10u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 10u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), glwebtools::rfc3986unreservedchar, (int)(uintptr_t)(&v10));
  do
  {
    v4 = glwebtools::Codec::Random((glwebtools::Codec::Self *)&a2, &a3);
    v5 = v11[0];
    v6 = v4 % *(uint32_t *)(v11[0] - 12);
    if ( *(int *)(v11[0] - 4) >= 0 )
    {
      sub_19397C0(v11);
      v5 = v11[0];
    }
    *((uint8_t *)self + v3) = *(uint8_t *)(v5 + v6);
    v7 = *(uint32_t *)(v5 - 12);
    if ( v6 > v7 )
      sub_1900210("basic_string::erase");
    ++v3;
    g4_std::string::clear(v11, v6, v7 != v6, 0);
  }
  while ( v3 != 64 );
  result = v11[0];
  v9 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v9)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncodeBase64Custom  (binary VA: 0x13d6830)
// Original: glwebtools::Codec::EncodeBase64Custom
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncodeBase64Custom(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4;
  int v5;
  int v6;
  char v7;
  int result;
  int v9;
  int v10;
  int v11;
  typedef unsigned int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  if ( a2 == 0 || a1 == 0 )
    return 0;
  v12 = a2 - a2 % 3;
  if ( a2 == a2 % 3 )
    goto LABEL_7;
  v4 = 0;
  do
  {
    v5 = *(uint8_t *)(a1 + v4);
    LOBYTE(v13[0]) = *(uint8_t *)(a4 + (v5 >> 2));
    v6 = *(uint8_t *)(a1 + v4 + 1);
    BYTE1(v13[0]) = *(uint8_t *)(a4 + 16 * (v5 & 3) + (v6 >> 4));
    BYTE2(v13[0]) = *(uint8_t *)(a4 + 4 * (v6 & 0xF) + (*(uint8_t *)(a1 + v4 + 2) >> 6));
    v7 = *(uint8_t *)(a1 + v4 + 2);
    v4 += 3;
    HIBYTE(v13[0]) = *(uint8_t *)(a4 + (v7 & 0x3F));
    g4_std::string::append(a3, v13, 4u);
  }
  while ( v12 > v4 );
  result = 1;
  if ( v12 != a2 )
  {
LABEL_7:
    v13[0] = 1027423549;
    if ( a2 % 3 == 1 )
    {
      v11 = *(uint8_t *)(a1 + v12);
      LOBYTE(v13[0]) = *(uint8_t *)(a4 + (v11 >> 2));
      BYTE1(v13[0]) = *(uint8_t *)(a4 + 16 * (v11 & 3));
    }
    else
    {
      v9 = *(uint8_t *)(a1 + v12);
      LOBYTE(v13[0]) = *(uint8_t *)(a4 + (v9 >> 2));
      v10 = *(uint8_t *)(a1 + v12 + 1);
      BYTE1(v13[0]) = *(uint8_t *)(a4 + 16 * (v9 & 3) + (v10 >> 4));
      BYTE2(v13[0]) = *(uint8_t *)(a4 + 4 * (v10 & 0xF));
    }
    g4_std::string::append(a3, v13, 4u);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecodeBase64Custom  (binary VA: 0x13d69e0)
// Original: glwebtools::Codec::DecodeBase64Custom
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecodeBase64Custom(glwebtools::Codec::Self *self, const char *a2, uint8_t *a3, char *a4)
{
  int v4;
  unsigned int v5;
  uint8_t *v6;
  unsigned int v7;
  char v8; // di
  int v9;
  const char *v10;
  int v11;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef uint8_t _g4_t_v18[140];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (3u + sizeof(_g4_t_v13)) > _g4_s0 ? (3u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v16)) > _g4_s3 ? (36u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v17)) > _g4_s4 ? (40u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v18)) > _g4_s5 ? (48u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 3u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v16 = 0;
  if ( a2 != nullptr && self != nullptr && a3 != nullptr )
  {
    v4 = 0;
    memset(v18, 0, 0x80u);
    do
    {
      v18[a4[v4]] = v4;
      ++v4;
    }
    while ( v4 != 64 );
    v5 = (unsigned int)(uintptr_t)(a2);
    if ( a2[(uint32_t)(uintptr_t)(self) - 1] == 61 )
    {
      do
        --v5;
      while ( *((uint8_t *)self + v5 - 1) == 61 );
    }
    v16 = 0;
    v17 = v5 & 0xFFFFFFFC;
    if ( (v5 & 0xFFFFFFFC) != 0 )
    {
      v6 = a3;
      v7 = 0;
      do
      {
        v16 += 3;
        v14 = v18[*((char *)self + v7 + 1)];
        v8 = v18[*((char *)self + v7)];
        v15 = v18[*((char *)self + v7 + 2)];
        v9 = *((char *)self + v7 + 3);
        v7 += 4;
        v13 = v18[v9] & 0x3F;
        *v6 = ((v14 & 0x3F) >> 4) + 4 * v8;
        v6[1] = 16 * v14 + ((v15 & 0x3C) >> 2);
        v6[2] = (v15 << 6) + v13;
        v6 += 3;
      }
      while ( v17 > v7 );
    }
    if ( v17 != v5 )
    {
      v10 = (const char *)(v5 - v17);
      if ( v10 != (const char *)((uint8_t *)&dword_0 + 1) )
      {
        if ( v10 == (const char *)((uint8_t *)&dword_0 + 2) )
        {
          a3[v16++] = ((v18[*((char *)self + v17 + 1)] & 0x3F) >> 4) + 4 * v18[*((char *)self + v17)];
        }
        else
        {
          v11 = 16 * (uint8_t)v18[*((char *)self + v17 + 1)] + ((v18[*((char *)self + v17 + 2)] & 0x3C) >> 2);
          a3[v16] = ((v18[*((char *)self + v17 + 1)] & 0x3F) >> 4) + 4 * v18[*((char *)self + v17)];
          a3[v16 + 1] = v11;
          v16 += 2;
        }
      }
    }
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecodeBase64Custom  (binary VA: 0x13d6be0)
// Original: glwebtools::Codec::DecodeBase64Custom
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecodeBase64Custom(glwebtools::Codec::Self **a1, uint8_t *a2, char *a3)
{
  return glwebtools::Codec::DecodeBase64Custom(*a1, *((const char **)*a1 - 3), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncryptTEA  (binary VA: 0x13d6c20)
// Original: glwebtools::Codec::EncryptTEA
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncryptTEA(glwebtools::Codec::Self *self, unsigned int a2, unsigned int *a3, void *a4, int *a5)
{
  int v5;
  int result;
  int v7;
  glwebtools::Codec::Self *v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int j;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef glwebtools::Codec::Self *_g4_t_src;
  typedef unsigned int *_g4_t_v20;
  typedef unsigned int _g4_t_i;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_dest;
  typedef unsigned int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_src)) > _g4_s3 ? (16u + sizeof(_g4_t_src)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_i)) > _g4_s5 ? (24u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_dest)) > _g4_s7 ? (40u + sizeof(_g4_t_dest)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v24)) > _g4_s8 ? (44u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  result = 0;
  if ( a3 != nullptr && self != nullptr && a2 != 0 )
  {
    LOBYTE(v5) = self == nullptr;
    result = v5;
    if ( a5 != nullptr )
    {
      v22 = a2;
      if ( (a2 & 7) != 0 )
        v22 = (a2 & 0xFFFFFFF8) + 8;
      result = 0;
      if ( v22 <= (unsigned int)(uintptr_t)(a4) )
      {
        v20 = a3;
        src = self;
        v16 = *a5;
        v17 = a5[1];
        v18 = a5[2];
        v7 = a5[3];
        if ( a2 <= 8 )
        {
          i = 0;
        }
        else
        {
          for ( i = 8; ; i += 8 )
          {
            v8 = src;
            v9 = 0;
            src = (glwebtools::Codec::Self *)((char *)src + 8);
            v10 = *(uint32_t *)v8;
            v11 = *((uint32_t *)v8 + 1);
            v12 = v10;
            dest = v10;
            v24 = v11;
            do
            {
              v9 -= 1640531527;
              v12 += (v17 + (v11 >> 5)) ^ (v16 + 16 * v11) ^ (v9 + v11);
              v11 += (v12 + v9) ^ (v7 + (v12 >> 5)) ^ (v18 + 16 * v12);
            }
            while ( v9 != -957401312 );
            dest = v12;
            v24 = v11;
            *v20 = v12;
            v20[1] = v11;
            v20 += 2;
            if ( a2 <= i + 8 )
              break;
          }
        }
        result = 1;
        if ( v22 > i )
        {
          dest = 0;
          v24 = 0;
          memcpy(&dest, src, a2 - i);
          v13 = dest;
          v14 = v24;
          for ( j = 0; j != -957401312; v14 += (v13 + j) ^ (a5[3] + (v13 >> 5)) ^ (a5[2] + 16 * v13) )
          {
            j -= 1640531527;
            v13 += (a5[1] + (v14 >> 5)) ^ (*a5 + 16 * v14) ^ (j + v14);
          }
          *v20 = v13;
          v20[1] = v14;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecryptTEA  (binary VA: 0x13d6e60)
// Original: glwebtools::Codec::DecryptTEA
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecryptTEA(int a1, glwebtools::Codec::Self *self, const void *a3, unsigned int a4, void *a5, uint32_t *a6)
{
  int result;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int j;
  unsigned int i;

  result = 0;
  if ( a4 != 0 && self != nullptr && a3 != nullptr )
  {
    LOBYTE(a1) = self == nullptr;
    result = a1;
    if ( ((uint8_t)(uintptr_t)(a3) & 7) == 0 && a6 != nullptr && a3 <= a5 )
    {
      for ( i = 0; i < (unsigned int)(uintptr_t)(a3); *(uint32_t *)(a4 + i - 4) = v8 )
      {
        v7 = i;
        i += 8;
        v8 = *(uint32_t *)((char *)self + v7 + 4);
        v9 = *(uint32_t *)((char *)self + v7);
        for ( j = -957401312; j != 0; j += 1640531527 )
        {
          v8 -= (j + v9) ^ (a6[3] + (v9 >> 5)) ^ (a6[2] + 16 * v9);
          v9 -= (v8 + j) ^ (a6[1] + (v8 >> 5)) ^ (*a6 + 16 * v8);
        }
        *(uint32_t *)(a4 + i - 8) = v9;
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncryptXTEA  (binary VA: 0x13d6f80)
// Original: glwebtools::Codec::EncryptXTEA
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncryptXTEA(int a1, glwebtools::Codec::Self *self, unsigned int a3, unsigned int *a4, void *a5, int *a6)
{
  int v6;
  int result;
  glwebtools::Codec::Self *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  int j;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int k;
  unsigned int v22;
  unsigned int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef glwebtools::Codec::Self *_g4_t_src;
  typedef unsigned int *_g4_t_v27;
  typedef unsigned int _g4_t_i;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_dest;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_src)) > _g4_s2 ? (16u + sizeof(_g4_t_src)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v27)) > _g4_s3 ? (20u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_i)) > _g4_s4 ? (24u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_dest)) > _g4_s6 ? (40u + sizeof(_g4_t_dest)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v31)) > _g4_s7 ? (44u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v32)) > _g4_s8 ? (48u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v33)) > _g4_s9 ? (52u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v34)) > _g4_s10 ? (56u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v35)) > _g4_s11 ? (60u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);

  if ( a4 == nullptr )
    return 0;
  LOBYTE(a1) = self == nullptr;
  v6 = a1;
  if ( self == nullptr )
    return 0;
  result = 0;
  if ( a3 != 0 )
  {
    result = v6;
    if ( a6 != nullptr )
    {
      v29 = a3;
      if ( (a3 & 7) != 0 )
        v29 = (a3 & 0xFFFFFFF8) + 8;
      result = 0;
      if ( v29 <= (unsigned int)(uintptr_t)(a5) )
      {
        v27 = a4;
        src = self;
        if ( a3 <= 8 )
        {
          i = 0;
        }
        else
        {
          for ( i = 8; ; i += 8 )
          {
            v8 = src;
            src = (glwebtools::Codec::Self *)((char *)src + 8);
            v9 = *((uint32_t *)v8 + 1);
            v10 = *(uint32_t *)v8;
            dest = v10;
            v31 = v9;
            v11 = v9;
            v12 = *a6;
            v33 = a6[1];
            v34 = a6[2];
            v13 = a6[3];
            v32 = v12;
            v24 = v13;
            v35 = v13;
            for ( j = 0; ; j -= 1640531527 )
            {
              v10 += (j + v12) ^ (v11 + ((16 * v11) ^ (v11 >> 5)));
              v11 += (j - 1640531527 + v24) ^ (v10 + ((16 * v10) ^ (v10 >> 5)));
              if ( j == 683130215 )
                break;
              v12 = *(&v32 + (((uint8_t)j - 71) & 3));
              v24 = *(&v32 + (((unsigned int)(j + 1013904242) >> 11) & 3));
            }
            dest = v10;
            v31 = v11;
            v15 = v10;
            v16 = v31;
            *v27 = v15;
            v27[1] = v16;
            v27 += 2;
            if ( a3 <= i + 8 )
              break;
          }
        }
        result = 1;
        if ( v29 > i )
        {
          dest = 0;
          v31 = 0;
          memcpy(&dest, src, a3 - i);
          v17 = dest;
          v18 = v31;
          v19 = *a6;
          v33 = a6[1];
          v34 = a6[2];
          v20 = a6[3];
          v32 = v19;
          v25 = v20;
          v35 = v20;
          for ( k = 0; ; k -= 1640531527 )
          {
            v17 += (k + v19) ^ (v18 + ((16 * v18) ^ (v18 >> 5)));
            v18 += (k - 1640531527 + v25) ^ (v17 + ((16 * v17) ^ (v17 >> 5)));
            if ( k == 683130215 )
              break;
            v19 = *(&v32 + (((uint8_t)k - 71) & 3));
            v25 = *(&v32 + (((unsigned int)(k + 1013904242) >> 11) & 3));
          }
          v31 = v18;
          v22 = v17;
          v23 = v31;
          *v27 = v22;
          v27[1] = v23;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecryptXTEA  (binary VA: 0x13d7200)
// Original: glwebtools::Codec::DecryptXTEA
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecryptXTEA(int a1, glwebtools::Codec::Self *self, const void *a3, unsigned int a4, void *a5, unsigned int a6)
{
  int result;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int j;
  unsigned int v11;
  unsigned int i;

  result = 0;
  if ( a4 != 0 && self != nullptr && a3 != nullptr )
  {
    LOBYTE(a1) = self == nullptr;
    result = a1;
    if ( ((uint8_t)(uintptr_t)(a3) & 7) == 0 && a6 != 0 && a3 <= a5 )
    {
      for ( i = 0; i < (unsigned int)(uintptr_t)(a3); *(uint32_t *)(a4 + i - 4) = v8 )
      {
        v7 = i;
        i += 8;
        v8 = *(uint32_t *)((char *)self + v7 + 4);
        v9 = *(uint32_t *)((char *)self + v7);
        for ( j = 0xC6EF3720; j != 0; v9 -= (v8 + ((16 * v8) ^ (v8 >> 5))) ^ (j + *(uint32_t *)(a6 + 4 * (j & 3))) )
        {
          v11 = j + *(uint32_t *)(a6 + 4 * ((j >> 11) & 3));
          j += 1640531527;
          v8 -= (v9 + ((16 * v9) ^ (v9 >> 5))) ^ v11;
        }
        *(uint32_t *)(a4 + i - 8) = v9;
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::EncryptXXTEA  (binary VA: 0x13d7310)
// Original: glwebtools::Codec::EncryptXXTEA
// ----------------------------------------------------------------------------
int glwebtools::Codec::EncryptXXTEA(glwebtools::Codec::Self *self, size_t n, glwebtools::Codec::Self *dest, void *a4, unsigned int a5)
{
  int v5;
  int result;
  size_t v7;
  size_t v8;
  unsigned int v9;
  int v10;
  glwebtools::Codec::Self *v11;
  int i;
  bool v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int *v17;

  result = 0;
  if ( dest != nullptr && self != nullptr && n > 7 )
  {
    LOBYTE(v5) = self == nullptr;
    result = v5;
    if ( a5 != 0 )
    {
      v7 = n;
      if ( (n & 3) != 0 )
        v7 = (n & 0xFFFFFFFC) + 4;
      result = 0;
      if ( v7 <= (unsigned int)(uintptr_t)(a4) )
      {
        v8 = v7 >> 2;
        if ( self != dest )
          memcpy(dest, self, n);
        if ( v7 != n )
          memset((char *)dest + n, 0, v7 - n);
        v14 = 0;
        v17 = (unsigned int *)((char *)dest + 4 * v8 - 4);
        v16 = 0x34 / v8 + 6;
        v9 = *v17;
        do
        {
          v14 -= 1640531527;
          v10 = 0;
          v15 = (v14 >> 2) & 3;
          if ( v8 != 1 )
          {
            v11 = dest;
            for ( i = 0; ; ++i )
            {
              v9 = *(uint32_t *)v11
                 + (((v9 ^ *(uint32_t *)(a5 + 4 * (v15 ^ i & 3))) + (*((uint32_t *)v11 + 1) ^ v14))
                  ^ (((16 * v9) ^ (*((uint32_t *)v11 + 1) >> 3)) + ((v9 >> 5) ^ (4 * *((uint32_t *)v11 + 1)))));
              *(uint32_t *)v11 = v9;
              v11 = (glwebtools::Codec::Self *)((char *)v11 + 4);
              if ( i + 1 >= v8 - 1 )
                break;
            }
            v10 = (v8 - 1) & 3;
          }
          v9 = *v17
             + (((*(uint32_t *)(a5 + 4 * (v15 ^ v10)) ^ v9) + (*(uint32_t *)dest ^ v14))
              ^ (((*(uint32_t *)dest >> 3) ^ (16 * v9)) + ((4 * *(uint32_t *)dest) ^ (v9 >> 5))));
          v13 = v16-- == 1;
          *v17 = v9;
        }
        while ( !v13 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::DecryptXXTEA  (binary VA: 0x13d74e0)
// Original: glwebtools::Codec::DecryptXXTEA
// ----------------------------------------------------------------------------
int glwebtools::Codec::DecryptXXTEA(int a1, glwebtools::Codec::Self *self, size_t n, glwebtools::Codec::Self *dest, void *a5, unsigned int a6)
{
  int v6;
  int result;
  size_t v8;
  unsigned int v9;
  unsigned int *v10;
  bool v11;
  size_t v12;
  unsigned int v13;
  int v14;

  if ( dest == nullptr )
    return 0;
  LOBYTE(a1) = self == nullptr;
  v6 = a1;
  if ( self == nullptr )
    return 0;
  result = 0;
  if ( n != 0 )
  {
    result = v6;
    if ( a6 != 0 && (n & 3) == 0 && n <= (unsigned int)(uintptr_t)(a5) )
    {
      v8 = n >> 2;
      if ( self != dest )
        memcpy(dest, self, n);
      v13 = -1640531527 * (0x34 / v8 + 6);
      v9 = *(uint32_t *)dest;
      do
      {
        v14 = (v13 >> 2) & 3;
        if ( v8 != 1 )
        {
          v10 = (unsigned int *)((char *)dest + 4 * v8 - 4);
          v12 = v8 - 1;
          do
          {
            v9 = *v10
               - ((((v9 >> 3) ^ (16 * *(v10 - 1))) + ((4 * v9) ^ (*(v10 - 1) >> 5)))
                ^ ((*(uint32_t *)(a6 + 4 * (v14 ^ v12 & 3)) ^ *(v10 - 1)) + (v9 ^ v13)));
            v11 = v12-- == 1;
            *v10-- = v9;
          }
          while ( !v11 );
        }
        v9 = *(uint32_t *)dest
           - (((*(uint32_t *)(a6 + 4 * v14) ^ *((uint32_t *)dest + v8 - 1)) + (v13 ^ v9))
            ^ (((16 * *((uint32_t *)dest + v8 - 1)) ^ (v9 >> 3)) + ((*((uint32_t *)dest + v8 - 1) >> 5) ^ (4 * v9))));
        v11 = v13 == -1640531527;
        v13 += 1640531527;
        *(uint32_t *)dest = v9;
      }
      while ( !v11 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GetEncryptedTEADataSize  (binary VA: 0x13d7670)
// Original: glwebtools::Codec::GetEncryptedTEADataSize
// ----------------------------------------------------------------------------
glwebtools::Codec::Self * glwebtools::Codec::GetEncryptedTEADataSize(glwebtools::Codec::Self *self)
{
  glwebtools::Codec::Self *result;

  result = self;
  if ( ((uint8_t)(uintptr_t)(self) & 7) != 0 )
    return (glwebtools::Codec::Self *)(((unsigned int)(uintptr_t)(self) & 0xFFFFFFF8) + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GetEncryptedXTEADataSize  (binary VA: 0x13d7690)
// Original: glwebtools::Codec::GetEncryptedXTEADataSize
// ----------------------------------------------------------------------------
glwebtools::Codec::Self * glwebtools::Codec::GetEncryptedXTEADataSize(glwebtools::Codec::Self *self)
{
  glwebtools::Codec::Self *result;

  result = self;
  if ( ((uint8_t)(uintptr_t)(self) & 7) != 0 )
    return (glwebtools::Codec::Self *)(((unsigned int)(uintptr_t)(self) & 0xFFFFFFF8) + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Codec::GetEncryptedXXTEADataSize  (binary VA: 0x13d76b0)
// Original: glwebtools::Codec::GetEncryptedXXTEADataSize
// ----------------------------------------------------------------------------
glwebtools::Codec::Self * glwebtools::Codec::GetEncryptedXXTEADataSize(glwebtools::Codec::Self *self)
{
  glwebtools::Codec::Self *result;

  result = self;
  if ( ((uint8_t)(uintptr_t)(self) & 3) != 0 )
    return (glwebtools::Codec::Self *)(((unsigned int)(uintptr_t)(self) & 0xFFFFFFFC) + 4);
  return result;
}


